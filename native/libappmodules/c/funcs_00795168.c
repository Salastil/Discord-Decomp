// ===== 00795168  FUN_00795168 =====

void FUN_00795168(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00981048;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00795178  FUN_00795178 =====

void FUN_00795178(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00981048;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 007951a8  FUN_007951a8 =====

void FUN_007951a8(long param_1)

{
  if ((*(char *)(param_1 + 0x728) != '\0') && ((*(byte *)(param_1 + 0x710) & 1) != 0)) {
    operator_delete(*(void **)(param_1 + 0x720));
  }
  FUN_0078917c(param_1 + 0x18,PTR_PTR_0099df40 + 8);
  return;
}


// ===== 007951f4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007951f8  FUN_007951f8 =====

void FUN_007951f8(long param_1)

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


// ===== 00795248  FUN_00795248 =====

void FUN_00795248(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00981098;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00795258  FUN_00795258 =====

void FUN_00795258(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00981098;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00795288  FUN_00795288 =====

void FUN_00795288(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00795290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00795294  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00795298  FUN_00795298 =====

EventEmitter * FUN_00795298(EventEmitter *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long *plStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plStack_48 = (long *)param_2[1];
  local_50 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  local_60 = *param_3;
  local_58 = param_3[1];
  if (local_58 != 0) {
    FUN_00757d00(1,local_58 + 0x10);
  }
                    /* try { // try from 007952e0 to 007952ef has its CatchHandler @ 007953b4 */
  facebook::react::EventEmitter::EventEmitter(param_1,&local_50,&local_60);
  *(undefined ***)param_1 = &PTR_FUN_0097ff10;
                    /* try { // try from 007952fc to 00795303 has its CatchHandler @ 007953a4 */
  puVar3 = (undefined8 *)operator_new(0x58);
  *puVar3 = &PTR_FUN_0097ff30;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[4] = 0;
  puVar3[3] = 0;
  *(undefined8 **)(param_1 + 0x40) = puVar3 + 3;
  *(undefined8 **)(param_1 + 0x48) = puVar3;
  puVar3[6] = 0;
  puVar3[5] = 0;
  puVar3[8] = 0;
  puVar3[7] = 0;
  *(undefined8 *)((long)puVar3 + 0x4c) = 0;
  *(undefined8 *)((long)puVar3 + 0x44) = 0;
  *(undefined ***)param_1 = &PTR_FUN_009810e8;
  if (local_58 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = plStack_48;
  if ((plStack_48 != (long *)0x0) &&
     (lVar4 = FUN_00757990(0xffffffffffffffff,plStack_48 + 1), lVar4 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007953e8  FUN_007953e8 =====

void FUN_007953e8(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[9];
  *param_1 = &PTR_FUN_0097ff10;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *param_1 = &PTR_FUN_0097ff80;
  if (param_1[6] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[4] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


// ===== 00795498  FUN_00795498 =====

ShadowNodeFamily *
FUN_00795498(ShadowNodeFamily *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
            undefined8 param_5)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  long *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_58 = *param_3;
  local_50 = (long *)param_3[1];
  if (local_50 != (long *)0x0) {
    FUN_00757d00(1,local_50 + 1);
  }
  local_68 = *param_4;
  local_60 = param_4[1];
  if (local_60 != 0) {
    FUN_00757d00(1,local_60 + 0x10);
  }
                    /* try { // try from 007954fc to 00795513 has its CatchHandler @ 0079557c */
  facebook::react::ShadowNodeFamily::ShadowNodeFamily(param_1,param_2,&local_58,&local_68,param_5);
  if (local_60 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = local_50;
  if ((local_50 != (long *)0x0) &&
     (lVar3 = FUN_00757990(0xffffffffffffffff,local_50 + 1), lVar3 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007955b4  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_21ClipViewComponentNameEEEENS0_13ClipViewPropsENS0_20ClipViewEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE =====

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_21ClipViewComponentNameEEEENS0_13ClipViewPropsENS0_20ClipViewEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE
               (undefined8 *param_1)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00795608(&local_30);
  *param_1 = local_30;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00795608  FUN_00795608 =====

void FUN_00795608(undefined8 *param_1,ComponentDescriptorParameters *param_2)

{
  long lVar1;
  ComponentDescriptor *this;
  void *local_90;
  void *pvStack_88;
  undefined8 local_80;
  void *pvStack_78;
  void *local_70;
  undefined8 uStack_68;
  void *local_60;
  void *pvStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (ComponentDescriptor *)operator_new(0x88);
  pvStack_78 = (void *)0x0;
  local_80 = 0;
  uStack_68 = 0;
  local_70 = (void *)0x0;
  pvStack_58 = (void *)0x0;
  local_60 = (void *)0x0;
  uStack_48 = 0;
  uStack_50 = 0;
  pvStack_88 = (void *)0x0;
  local_90 = (void *)0x0;
                    /* try { // try from 0079564c to 00795657 has its CatchHandler @ 007956c4 */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_90);
  *(undefined ***)this = &PTR_FUN_00981120;
  FUN_007956f4(this + 0x38);
  *param_1 = this;
  if (local_60 != (void *)0x0) {
    pvStack_58 = local_60;
    operator_delete(local_60);
  }
  if (pvStack_78 != (void *)0x0) {
    local_70 = pvStack_78;
    operator_delete(pvStack_78);
  }
  if (local_90 != (void *)0x0) {
    pvStack_88 = local_90;
    operator_delete(local_90);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007956f4  FUN_007956f4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007956f4(undefined8 param_1)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  void *pvVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  void *pvVar9;
  byte *pbVar10;
  undefined4 local_fe0 [2];
  undefined8 *local_fd8;
  undefined *local_fd0;
  undefined8 uStack_fc8;
  undefined8 local_fc0;
  undefined8 uStack_fb8;
  undefined4 local_fb0 [2];
  undefined8 local_fa8;
  undefined8 uStack_fa0;
  undefined8 local_f98;
  undefined8 uStack_f90;
  undefined4 local_f88;
  undefined4 local_f80;
  undefined1 local_f7c;
  undefined8 local_f7b;
  undefined8 local_f73;
  undefined8 uStack_f6b;
  undefined8 local_f63;
  undefined8 uStack_f5b;
  undefined8 local_f53;
  undefined8 uStack_f4b;
  undefined8 local_f43;
  undefined6 uStack_f3b;
  undefined2 uStack_f35;
  undefined6 uStack_f33;
  undefined8 uStack_f2d;
  undefined4 local_f25;
  undefined8 local_f21;
  undefined1 local_f19;
  undefined1 uStack_f18;
  undefined7 uStack_f17;
  undefined8 uStack_f10;
  undefined8 uStack_f08;
  undefined8 uStack_f00;
  undefined8 local_ef8;
  undefined8 uStack_ef0;
  undefined8 local_ee8;
  undefined8 uStack_ee0;
  undefined8 local_ed8;
  undefined8 uStack_ed0;
  undefined8 local_ec8;
  undefined8 uStack_ec0;
  undefined8 uStack_eb8;
  undefined8 local_eb0;
  undefined8 local_ea8;
  undefined8 uStack_ea0;
  undefined8 local_e98;
  undefined4 uStack_e90;
  undefined4 uStack_e8c;
  undefined4 uStack_e88;
  undefined4 uStack_e84;
  undefined4 uStack_e80;
  undefined4 uStack_e7c;
  undefined8 local_e78;
  undefined8 uStack_e70;
  undefined4 local_e68;
  undefined1 local_e64;
  undefined4 local_e60;
  undefined1 local_e5c;
  undefined4 local_e58;
  undefined1 local_e54;
  undefined4 local_e50;
  undefined1 local_e4c;
  undefined4 local_e48;
  undefined1 local_e44;
  undefined4 local_e40;
  undefined1 local_e3c;
  undefined4 local_e38;
  undefined1 local_e34;
  undefined4 local_e30;
  undefined1 local_e2c;
  undefined4 local_e28;
  undefined1 local_e24;
  undefined4 local_e20;
  undefined1 local_e1c;
  undefined4 local_e18;
  undefined1 local_e14;
  undefined4 local_e10;
  undefined1 local_e0c;
  undefined4 local_e08;
  undefined1 local_e04;
  undefined4 local_e00;
  undefined1 local_dfc;
  undefined4 local_df8;
  undefined1 local_df4;
  undefined4 local_df0;
  undefined1 local_dec;
  undefined1 local_de8;
  undefined1 local_de4;
  undefined1 local_dd8;
  undefined8 local_dd0;
  undefined8 uStack_dc8;
  undefined8 uStack_dc0;
  undefined8 uStack_db8;
  undefined8 local_db0;
  undefined8 uStack_da8;
  undefined8 uStack_da0;
  undefined1 uStack_d98;
  undefined7 local_d97;
  undefined1 uStack_d90;
  undefined8 uStack_d8f;
  undefined8 local_d84;
  undefined8 uStack_d7c;
  undefined8 uStack_d74;
  undefined8 uStack_d6c;
  undefined8 local_d64;
  undefined8 uStack_d5c;
  undefined8 uStack_d54;
  undefined8 uStack_d4c;
  undefined8 local_d44;
  undefined8 uStack_d3c;
  undefined8 uStack_d34;
  undefined5 uStack_d2c;
  undefined3 local_d27;
  undefined5 uStack_d24;
  undefined1 local_d1c;
  undefined1 local_d18;
  undefined1 local_d14;
  undefined1 local_d10;
  undefined1 local_d0c;
  undefined1 local_d08;
  undefined1 local_cf0;
  undefined8 local_ce8;
  undefined8 uStack_ce0;
  undefined8 local_cd8;
  undefined4 local_cd0;
  undefined1 local_ccc;
  undefined4 local_ccb;
  undefined1 local_cc7;
  undefined1 local_cc6;
  undefined8 local_cc0;
  undefined8 uStack_cb8;
  undefined8 uStack_cb0;
  undefined8 uStack_ca8;
  undefined8 local_ca0;
  undefined7 uStack_c98;
  undefined4 uStack_c91;
  undefined8 local_c8c;
  undefined1 local_c84;
  undefined1 local_c7c;
  undefined1 local_c78;
  undefined1 local_c70;
  undefined1 local_c6c;
  undefined1 local_c64;
  undefined1 local_c60;
  undefined1 local_c58;
  undefined1 local_c54;
  undefined1 local_c4c;
  undefined1 local_c48;
  undefined1 local_c40;
  undefined1 local_c3c;
  undefined1 local_c34;
  undefined1 local_c30;
  undefined1 local_c28;
  undefined1 local_c24;
  undefined1 local_c1c;
  undefined1 local_c18;
  undefined1 local_c10;
  undefined1 local_c0c;
  undefined1 local_c04;
  undefined1 local_c00;
  undefined1 local_bf8;
  undefined1 local_bf4;
  undefined1 local_bec;
  undefined1 local_be8;
  undefined1 local_be4;
  undefined1 local_be0;
  undefined1 local_bdc;
  undefined1 local_bd8;
  undefined1 local_bd4;
  undefined1 local_bd0;
  undefined1 local_bcc;
  undefined1 local_bc8;
  undefined1 local_bc4;
  undefined1 local_bc0;
  undefined1 local_bbc;
  undefined1 local_bb8;
  undefined1 local_bb4;
  undefined1 local_bb0;
  undefined1 local_bac;
  undefined1 local_ba8;
  undefined1 local_ba4;
  undefined1 local_ba0;
  undefined1 local_b9c;
  undefined1 local_b98;
  undefined1 local_b94;
  undefined1 local_b90;
  undefined1 local_b8c;
  undefined8 local_b88;
  undefined8 uStack_b80;
  undefined8 local_b78;
  undefined8 uStack_b70;
  undefined8 uStack_b68;
  undefined8 uStack_b60;
  undefined2 local_b58;
  undefined8 local_b54;
  undefined1 local_b4c;
  undefined8 local_b48;
  undefined8 local_b40;
  undefined8 uStack_b38;
  undefined1 local_b30;
  undefined8 local_b28;
  undefined8 uStack_b20;
  undefined8 uStack_b18;
  undefined8 uStack_b10;
  undefined8 local_b08;
  undefined8 uStack_b00;
  undefined8 uStack_af8;
  undefined8 uStack_af0;
  undefined8 local_ae8;
  undefined8 uStack_ae0;
  undefined8 uStack_ad8;
  undefined8 uStack_ad0;
  undefined8 local_ac8;
  undefined8 uStack_ac0;
  undefined8 uStack_ab8;
  undefined8 uStack_ab0;
  undefined8 local_aa8;
  undefined8 uStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined8 local_a88;
  undefined8 uStack_a80;
  undefined8 local_a78;
  undefined8 uStack_a70;
  undefined8 local_a68;
  undefined8 uStack_a60;
  undefined8 local_a58;
  undefined8 uStack_a50;
  undefined8 local_a48;
  undefined8 uStack_a40;
  undefined8 local_a38;
  undefined6 uStack_a30;
  undefined2 uStack_a2a;
  undefined6 uStack_a28;
  undefined1 local_a20;
  undefined1 local_a1c;
  undefined1 local_a18;
  undefined8 local_a14;
  undefined8 uStack_a0c;
  undefined1 local_a04;
  undefined8 local_a00;
  undefined2 local_9f8;
  undefined1 local_9f6;
  undefined4 local_9f4;
  undefined1 local_9f0;
  undefined1 local_990;
  undefined1 local_988;
  undefined1 local_928;
  undefined4 local_920;
  undefined2 local_91c;
  undefined1 local_918;
  undefined1 local_914;
  undefined1 local_910;
  undefined1 local_90c;
  undefined1 local_908;
  undefined1 local_904;
  undefined1 local_900;
  undefined1 local_8fc;
  undefined1 local_8f8;
  undefined1 local_8f4;
  undefined1 local_8f0;
  undefined7 uStack_8ef;
  byte *local_8e8;
  char local_8d8;
  ClipViewProps aCStack_8d0 [1760];
  byte *local_1f0;
  byte *local_1e8;
  char local_1d8;
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
  void *local_140;
  undefined8 uStack_138;
  void *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined4 local_100 [4];
  undefined4 local_f0 [2];
  undefined8 local_e8;
  undefined4 local_c0;
  void *local_b8;
  void *pvStack_b0;
  undefined8 uStack_a8;
  void *local_a0;
  void *local_98;
  undefined8 uStack_90;
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100[0] = 0;
  local_f0[0] = 0;
  local_e8 = 0;
  local_c0 = 0;
  pvStack_b0 = (void *)0x0;
  local_b8 = (void *)0x0;
  local_a0 = (void *)0x0;
  uStack_a8 = 0;
  uStack_90 = 0;
  local_98 = (void *)0x0;
  local_120 = 0;
  uStack_128 = 0;
  local_130 = (void *)0x0;
  uStack_138 = 0;
  local_140 = (void *)0x0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_168 = 0;
  local_170 = 0;
  uStack_178 = 0;
  local_180 = 0;
  uStack_188 = 0;
  local_190 = 0;
  uStack_198 = 0;
  local_1a0 = 0;
  uStack_1a8 = 0;
  local_1b0 = 0;
  uStack_1b8 = 0;
  local_1c0 = 0;
  uStack_1c8 = 0;
  local_1d0 = 0;
                    /* try { // try from 0079577c to 00795787 has its CatchHandler @ 00795da8 */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1d0);
  local_120 = CONCAT44(local_120._4_4_,0x3f800000);
  local_fe0[0] = 0xffffffff;
  uStack_128 = 0;
  local_130 = (void *)0x0;
  uStack_138 = 0;
  local_140 = (void *)0x0;
  local_fd8 = &local_1d0;
  facebook::react::RawProps::facebook::react::RawProps::parse(&local_118,param_1);
  memset(local_fb0,0,0x6e0);
  local_88[0] = 5;
  local_70 = 0;
  local_fd0 = PTR_construction_vtable_0099e1c8 + 0x20;
  local_fb0[0] = 5;
  uStack_fb8 = 0;
  local_fc0 = 0;
  uStack_fc8 = 0;
  local_68 = 0;
  uStack_60 = 0x3f800000;
  uStack_78 = 0;
  local_80 = 0;
  uStack_fa0 = 0;
  local_fa8 = 0;
  uStack_f90 = 0;
  local_f98 = 0;
  local_f88 = 0x3f800000;
  folly::dynamic::folly::dynamic::destroy(local_88);
  local_f7c = 0;
  local_f21 = 0;
  uStack_a40 = _UNK_00470a7c;
  local_a48 = _DAT_00470a74;
  local_f7b = _s__00375408;
  uStack_b38 = _UNK_00371598;
  local_b40 = _DAT_00371590;
  uStack_a50 = _UNK_00470a6c;
  local_a58 = _DAT_00470a64;
  local_e64 = 0;
  uStack_a60 = _UNK_00470a5c;
  local_a68 = _DAT_00470a54;
  uStack_a70 = _UNK_00470a4c;
  local_a78 = _DAT_00470a44;
  uStack_a28 = 0;
  local_e5c = 0;
  uStack_e90 = 0;
  local_e98 = 0;
  uStack_e7c = 0;
  uStack_ea0 = 0;
  local_ea8 = 0;
  uStack_a30 = 0;
  uStack_a2a = 0;
  local_a38 = 0;
  local_f80 = 0x10410710;
  local_f25 = 0x40004;
  uStack_e84 = 0;
  uStack_e80 = 0;
  uStack_e8c = 0;
  uStack_e88 = 0;
  uStack_e70 = 0;
  local_e78 = 0;
  local_e68 = 0x7fc00000;
  local_e60 = 0x7fc00000;
  local_e58 = 0x7fc00000;
  local_e50 = 0x7fc00000;
  local_e48 = 0x7fc00000;
  local_e40 = 0x7fc00000;
  local_e38 = 0x7fc00000;
  local_e30 = 0x7fc00000;
  local_e28 = 0x7fc00000;
  local_e20 = 0x7fc00000;
  local_e18 = 0x7fc00000;
  local_e10 = 0x7fc00000;
  local_e08 = 0x7fc00000;
  local_e00 = 0x7fc00000;
  local_df8 = 0x7fc00000;
  local_df0 = 0x7fc00000;
  uStack_d8f = 0;
  uStack_d90 = 0;
  uStack_d7c = 0;
  local_d84 = 0;
  uStack_d6c = 0;
  uStack_d74 = 0;
  uStack_d5c = 0;
  local_d64 = 0;
  uStack_d4c = 0;
  uStack_d54 = 0;
  uStack_d3c = 0;
  local_d44 = 0;
  uStack_d2c = 0;
  uStack_d34 = 0;
  local_d27 = 0;
  uStack_d24 = 0;
  local_ccc = 1;
  local_ccb = 0;
  local_cc6 = 0x23;
  local_c8c = 0x3f800000;
  uStack_b70 = 0;
  local_b78 = 0;
  uStack_b60 = 0;
  uStack_b68 = 0;
  uStack_b80 = 0;
  local_b88 = 0;
  local_b54 = 0;
  uStack_b20 = 0;
  local_b28 = 0;
  uStack_b10 = 0;
  uStack_b18 = 0;
  uStack_b00 = 0;
  local_b08 = 0;
  uStack_af0 = 0;
  uStack_af8 = 0;
  uStack_ae0 = 0;
  local_ae8 = 0;
  uStack_ad0 = 0;
  uStack_ad8 = 0;
  uStack_ac0 = 0;
  local_ac8 = 0;
  uStack_ab0 = 0;
  uStack_ab8 = 0;
  uStack_aa0 = 0;
  local_aa8 = 0;
  uStack_a90 = 0;
  uStack_a98 = 0;
  uStack_a80 = 0;
  local_a88 = 0;
  uStack_f17 = 0;
  uStack_f6b = 0;
  local_f73 = 0;
  uStack_f5b = 0;
  local_f63 = 0;
  uStack_f4b = 0;
  local_f53 = 0;
  uStack_f3b = 0;
  local_f43 = 0;
  uStack_f2d = 0;
  uStack_f35 = 0;
  uStack_f33 = 0;
  local_f19 = 0;
  uStack_f18 = 0;
  uStack_f08 = 0;
  uStack_f10 = 0;
  local_ef8 = 0;
  uStack_f00 = 0;
  local_ee8 = 0;
  uStack_ef0 = 0;
  local_ed8 = 0;
  uStack_ee0 = 0;
  local_ec8 = 0;
  uStack_ed0 = 0;
  uStack_eb8 = 0;
  uStack_ec0 = 0;
  local_eb0 = 0;
  local_e54 = 0;
  local_e4c = 0;
  local_e44 = 0;
  local_e3c = 0;
  local_e34 = 0;
  local_e2c = 0;
  local_e24 = 0;
  local_e1c = 0;
  local_e14 = 0;
  local_e0c = 0;
  local_e04 = 0;
  local_dfc = 0;
  local_df4 = 0;
  local_dec = 0;
  local_de8 = 0;
  local_de4 = 0;
  local_dd8 = 0;
  local_d1c = 0;
  local_d18 = 0;
  local_d14 = 0;
  local_d10 = 0;
  local_d0c = 0;
  local_d08 = 0;
  local_cf0 = 0;
  uStack_dc8 = 0;
  local_dd0 = 0;
  uStack_db8 = 0;
  uStack_dc0 = 0;
  uStack_da8 = 0;
  local_db0 = 0;
  uStack_d98 = 0;
  local_d97 = 0;
  uStack_da0 = 0;
  uStack_ce0 = 0;
  local_ce8 = 0;
  local_cd8 = 0;
  local_cd0 = 0;
  local_cc7 = 0;
  uStack_cb8 = 0;
  local_cc0 = 0;
  uStack_ca8 = 0;
  uStack_cb0 = 0;
  uStack_c98 = 0;
  uStack_c91 = 0;
  local_ca0 = 0;
  local_c84 = 0;
  local_c7c = 0;
  local_c78 = 0;
  local_c70 = 0;
  local_c6c = 0;
  local_c64 = 0;
  local_c60 = 0;
  local_c58 = 0;
  local_c54 = 0;
  local_c4c = 0;
  local_c48 = 0;
  local_c40 = 0;
  local_c3c = 0;
  local_c34 = 0;
  local_c30 = 0;
  local_c28 = 0;
  local_c24 = 0;
  local_c1c = 0;
  local_c18 = 0;
  local_c10 = 0;
  local_c0c = 0;
  local_c04 = 0;
  local_c00 = 0;
  local_bf8 = 0;
  local_bf4 = 0;
  local_bec = 0;
  local_be8 = 0;
  local_be4 = 0;
  local_be0 = 0;
  local_bdc = 0;
  local_bd8 = 0;
  local_bd4 = 0;
  local_bd0 = 0;
  local_bcc = 0;
  local_bc8 = 0;
  local_bc4 = 0;
  local_bc0 = 0;
  local_bbc = 0;
  local_bb8 = 0;
  local_bb4 = 0;
  local_bb0 = 0;
  local_bac = 0;
  local_ba8 = 0;
  local_ba4 = 0;
  local_ba0 = 0;
  local_b9c = 0;
  local_b98 = 0;
  local_b94 = 0;
  local_b90 = 0;
  local_b8c = 0;
  local_b48 = 0;
  local_b58 = 0;
  local_b4c = 0;
  local_b30 = 0;
  local_a20 = 0;
  local_a1c = 0;
  local_a18 = 0;
  local_a00 = 0;
  uStack_a0c = 0;
  local_a14 = 0;
  local_a04 = 0;
  local_9f8 = 0x101;
  local_9f6 = 0;
  local_9f4 = 0;
  local_9f0 = 0;
  local_990 = 0;
  local_988 = 0;
  local_928 = 0;
  local_918 = 0;
  local_914 = 0;
  local_910 = 0;
  local_90c = 0;
  local_908 = 0;
  local_904 = 0;
  local_900 = 0;
  local_8fc = 0;
  local_8f8 = 0;
  local_8f4 = 0;
  local_91c = 0;
  local_920 = 0;
  local_fd0 = PTR_vtable_0099df50 + 0x20;
  local_8f0 = 0;
  local_8d8 = '\0';
                    /* try { // try from 00795b74 to 00795b87 has its CatchHandler @ 00795da8 */
  facebook::react::ClipViewProps::ClipViewProps
            (aCStack_8d0,(PropsParserContext *)local_fe0,(ClipViewProps *)&local_fd0,
             (RawProps *)&local_118);
  pbVar3 = local_1f0;
  if ((local_1d8 != '\0') && (local_1f0 != (byte *)0x0)) {
    while (pbVar10 = local_1e8, pbVar10 != pbVar3) {
      local_1e8 = pbVar10 + -0x48;
      if ((*local_1e8 & 1) != 0) {
        operator_delete(*(void **)(pbVar10 + -0x38));
      }
    }
    local_1e8 = pbVar3;
    operator_delete(local_1f0);
  }
  puVar6 = PTR_PTR_0099df58;
  FUN_0078917c(aCStack_8d0,PTR_PTR_0099df58 + 8);
  if ((local_8d8 != '\0') &&
     (pbVar3 = (byte *)CONCAT71(uStack_8ef,local_8f0), pbVar3 != (byte *)0x0)) {
    pbVar10 = pbVar3;
    if (local_8e8 != pbVar3) {
      do {
        pbVar10 = local_8e8 + -0x48;
        if ((*pbVar10 & 1) != 0) {
          operator_delete(*(void **)(local_8e8 + -0x38));
        }
        local_8e8 = pbVar10;
      } while (pbVar10 != pbVar3);
      pbVar10 = (byte *)CONCAT71(uStack_8ef,local_8f0);
    }
    local_8e8 = pbVar3;
    operator_delete(pbVar10);
  }
  FUN_0078917c(&local_fd0,puVar6 + 8);
  facebook::react::RawPropsParser::facebook::react::RawPropsParser::postPrepare(param_1);
  pvVar4 = local_140;
  puVar5 = (undefined8 *)local_130;
  while (puVar5 != (undefined8 *)0x0) {
    plVar8 = (long *)puVar5[6];
    pvVar9 = (void *)*puVar5;
    local_140 = pvVar4;
    if ((plVar8 == (long *)0x0) || (lVar7 = FUN_00757990(0xffffffffffffffff,plVar8 + 1), lVar7 != 0)
       ) {
      bVar1 = *(byte *)(puVar5 + 2);
    }
    else {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__ndk1::__shared_weak_count::__release_weak();
      bVar1 = *(byte *)(puVar5 + 2);
    }
    if ((bVar1 & 1) != 0) {
      operator_delete((void *)puVar5[4]);
    }
    operator_delete(puVar5);
    pvVar4 = local_140;
    puVar5 = (undefined8 *)pvVar9;
  }
  local_140 = (void *)0x0;
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4);
  }
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)&uStack_178);
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)&uStack_1a8);
  std::__ndk1::mutex::~mutex((mutex *)&local_1d0);
  pvVar9 = local_a0;
  pvVar4 = local_98;
  if (local_a0 != (void *)0x0) {
    while (pvVar4 != pvVar9) {
      if (*(uint *)((long)pvVar4 + -8) != 0xffffffff) {
                    /* try { // try from 00795d3c to 00795d47 has its CatchHandler @ 00795dac */
        (*(code *)(&PTR_FUN_0097fbf8)[*(uint *)((long)pvVar4 + -8)])
                  (&local_fd0,(void *)((long)pvVar4 + -0x38));
      }
      *(undefined4 *)((long)pvVar4 + -8) = 0xffffffff;
      pvVar4 = (void *)((long)pvVar4 + -0x38);
    }
    local_98 = pvVar9;
    operator_delete(local_a0);
  }
  if (local_b8 != (void *)0x0) {
    pvStack_b0 = local_b8;
    operator_delete(local_b8);
  }
  folly::dynamic::folly::dynamic::destroy(local_f0);
  facebook::jsi::Value::~Value((Value *)local_100);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00795db0  FUN_00795db0 =====

void FUN_00795db0(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 00795dd4  FUN_00795dd4 =====

undefined * FUN_00795dd4(void)

{
  return PTR_ClipViewComponentName_0099df48;
}


// ===== 00795de0  FUN_00795de0 =====

undefined * FUN_00795de0(void)

{
  return PTR_ClipViewComponentName_0099df48;
}


// ===== 00795dec  FUN_00795dec =====

undefined8 FUN_00795dec(void)

{
  return 0x61;
}


// ===== 00795df4  FUN_00795df4 =====

void FUN_00795df4(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 uStack_49;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_64 = (**(code **)(*param_2 + 0x20))();
  FUN_007965e4(&local_60,&uStack_49,param_3,param_4,&local_64);
                    /* try { // try from 00795e5c to 00795e63 has its CatchHandler @ 00795e94 */
  (**(code **)(*param_2 + 0x60))(param_2,local_60);
  param_1[1] = uStack_58;
  *param_1 = local_60;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00795ebc  FUN_00795ebc =====

void FUN_00795ebc(undefined8 *param_1,long *param_2,shared_ptr *param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *local_70;
  long *local_68;
  long *local_60;
  long *plStack_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00796898(&local_60,&local_70);
                    /* try { // try from 00795f08 to 00795f13 has its CatchHandler @ 00795fc0 */
  (**(code **)(*local_60 + 0x10))(local_60,param_3,param_4);
  local_70 = local_60;
  local_68 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    FUN_00757d00(1,plStack_58 + 1);
  }
                    /* try { // try from 00795f2c to 00795f3b has its CatchHandler @ 00795fb0 */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_70);
  plVar2 = local_68;
  if ((local_68 != (long *)0x0) &&
     (lVar3 = FUN_00757990(0xffffffffffffffff,local_68 + 1), lVar3 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 00795f78 to 00795f7f has its CatchHandler @ 00795fc0 */
  (**(code **)(*param_2 + 0x60))(param_2,local_60);
  param_1[1] = plStack_58;
  *param_1 = local_60;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00795fe8  FUN_00795fe8 =====

void FUN_00795fe8(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00795ff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 00795ffc  FUN_00795ffc =====

void FUN_00795ffc(undefined8 *param_1,long param_2,undefined8 param_3,long *param_4,
                 RawProps *param_5)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  char *pcVar6;
  int iVar7;
  ulong uVar8;
  char *pcVar9;
  long lVar10;
  long *local_100;
  long *local_f8;
  long *local_f0;
  long *plStack_e8;
  undefined1 uStack_d1;
  dynamic adStack_d0 [48];
  uint local_a0;
  int local_98 [6];
  long *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((*param_4 == 0) && (uVar8 = facebook::react::RawProps::isEmpty(), (uVar8 & 1) != 0)) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_21ClipViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_13ClipViewPropsENS0_20ClipViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd10
         & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_21ClipViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_13ClipViewPropsENS0_20ClipViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd10
                                   ), iVar7 != 0)) {
                    /* try { // try from 007962c8 to 007962d7 has its CatchHandler @ 00796304 */
      FUN_00796d10(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_21ClipViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_13ClipViewPropsENS0_20ClipViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd08
                   ,adStack_d0);
      __cxa_atexit(FUN_00796cc0,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_21ClipViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_13ClipViewPropsENS0_20ClipViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd08
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_21ClipViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_13ClipViewPropsENS0_20ClipViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd10
                         );
    }
    lVar10 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_21ClipViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_13ClipViewPropsENS0_20ClipViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd08
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_21ClipViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_13ClipViewPropsENS0_20ClipViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd08
    ;
    param_1[1] = lVar10;
    if (lVar10 != 0) {
      FUN_00757d00(1,lVar10 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    FUN_0079699c(&local_f0,param_3,param_5,param_4);
                    /* try { // try from 007960a4 to 007960b7 has its CatchHandler @ 00796338 */
    uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if (((uVar8 & 1) == 0) ||
       ((uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar8 & 1) == 0 ||
        (uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enablePropsUpdateReconciliationAndroid(), (uVar8 & 1) == 0)))) {
LAB_007960e0:
      local_100 = local_f0;
      local_f8 = plStack_e8;
      if (plStack_e8 != (long *)0x0) {
        FUN_00757d00(1,plStack_e8 + 1);
      }
                    /* try { // try from 007960f8 to 00796107 has its CatchHandler @ 00796328 */
      FUN_00796ae8(&local_100,param_5,param_4);
      plVar4 = local_f8;
      if ((local_f8 != (long *)0x0) &&
         (lVar10 = FUN_00757990(0xffffffffffffffff,local_f8 + 1), lVar10 == 0)) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 007960c8 to 007960cf has its CatchHandler @ 00796318 */
      pcVar9 = (char *)(**(code **)(*local_f0 + 0x10))();
      iVar7 = strcmp(PTR_ClipViewComponentName_0099df48,pcVar9);
      if (iVar7 != 0) goto LAB_007960e0;
      bVar3 = false;
    }
                    /* try { // try from 0079613c to 0079613f has its CatchHandler @ 00796338 */
    uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar8 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 0079614c to 00796167 has its CatchHandler @ 00796324 */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(local_f0 + 4));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_f0;
      plVar5 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 007962a8 to 007962b7 has its CatchHandler @ 0079631c */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_00796384;
      }
      for (; local_f0 = plVar4, plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (*(int *)(plVar5 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00796288 to 00796297 has its CatchHandler @ 00796344 */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_00796384;
        }
        uVar1 = 0x811c9dc5;
        uVar8 = (ulong)(*(byte *)(plVar5 + 3) >> 1);
        pcVar6 = (char *)((long)plVar5 + 0x19);
        pcVar9 = (char *)((long)plVar5 + 0x19);
        if ((*(byte *)(plVar5 + 3) & 1) != 0) {
          uVar8 = plVar5[4];
          pcVar6 = (char *)plVar5[5];
          pcVar9 = (char *)plVar5[5];
        }
        for (; uVar8 != 0; uVar8 = uVar8 - 1) {
          uVar1 = (uVar1 ^ (int)*pcVar6) * 0x1000193;
          pcVar6 = pcVar6 + 1;
        }
                    /* try { // try from 007961e8 to 007961f3 has its CatchHandler @ 0079634c */
        folly::dynamic::dynamic(adStack_d0,(dynamic *)(plVar5 + 8));
        local_a0 = 0;
                    /* try { // try from 007961f8 to 0079620f has its CatchHandler @ 00796350 */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (plVar4,param_3,uVar1,pcVar9,adStack_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 00796220 to 0079622b has its CatchHandler @ 00796340 */
          (*(code *)(&PTR_FUN_0097fbf8)[local_a0])(&uStack_d1,adStack_d0);
        }
        plVar4 = local_f0;
      }
      folly::dynamic::folly::dynamic::destroy(local_98);
    }
    param_1[1] = plStack_e8;
    *param_1 = local_f0;
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_00796384:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00796388  FUN_00796388 =====

void FUN_00796388(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 00796390  FUN_00796390 =====

void FUN_00796390(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 00796398  FUN_00796398 =====

void FUN_00796398(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined1 auStack_80 [8];
  long *local_78;
  long *local_70;
  long *local_68;
  undefined1 uStack_59;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  FUN_0078a610(auStack_80,&uStack_59,param_3 + 8,param_3 + 4);
                    /* try { // try from 007963e0 to 007963e7 has its CatchHandler @ 00796568 */
  plVar4 = (long *)operator_new(0x68);
  plVar1 = plVar4 + 3;
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_00981368;
                    /* try { // try from 00796400 to 0079640f has its CatchHandler @ 00796550 */
  FUN_0079702c(plVar1,auStack_80,param_2 + 8);
  local_70 = plVar1;
  local_68 = plVar4;
  if ((local_78 != (long *)0x0) &&
     (lVar5 = FUN_00757990(0xffffffffffffffff,local_78 + 1), lVar5 == 0)) {
    (**(code **)(*local_78 + 0x10))(local_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 00796444 to 0079644b has its CatchHandler @ 00796540 */
  puVar6 = (undefined8 *)operator_new(0x1a0);
  puVar2 = puVar6 + 4;
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_0097fff0;
                    /* try { // try from 00796464 to 0079647b has its CatchHandler @ 00796528 */
  FUN_0079722c(puVar2,param_3,&local_70,param_2 + 8,param_2);
  plVar1 = local_70;
  *param_1 = (long)puVar2;
  param_1[1] = (long)puVar6;
  local_90 = puVar2;
  local_88 = puVar6;
  FUN_00757d00(1,puVar6 + 2);
                    /* try { // try from 00796494 to 0079649f has its CatchHandler @ 00796508 */
  facebook::react::EventEmitter::facebook::react::EventEmitter::setShadowNodeFamily
            (plVar1,&local_90);
  if (local_88 != (undefined8 *)0x0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar1 = local_68;
  if ((local_68 != (long *)0x0) &&
     (lVar5 = FUN_00757990(0xffffffffffffffff,local_68 + 1), lVar5 == 0)) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00796590  FUN_00796590 =====

void FUN_00796590(void)

{
  return;
}


// ===== 00796594  FUN_00796594 =====

void FUN_00796594(long param_1)

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


// ===== 007965e4  FUN_007965e4 =====

void FUN_007965e4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 *param_5)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined4 uVar8;
  
  puVar6 = (undefined8 *)operator_new(0x400);
  uVar8 = *param_5;
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_009811b0;
                    /* try { // try from 0079662c to 0079663b has its CatchHandler @ 007966d4 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
            ((YogaLayoutableShadowNode *)(puVar6 + 3),param_3,param_4,uVar8);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_00981200;
  uVar2 = *(uint *)((long)puVar6 + 0x6c);
  uVar1 = uVar2 & 3 | (uint)((*(byte *)(lVar7 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)puVar6 + 0x6c) = uVar2 & 0xfffffff8 | uVar1;
  if ((*(uint *)(lVar7 + 0x50) & 0x30000000) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    if (*(char *)(lVar7 + 0x5b4) != '\0') {
      uVar8 = *(undefined4 *)(lVar7 + 0x5b0);
    }
  }
  *(undefined4 *)(puVar6 + 10) = uVar8;
  cVar3 = *(char *)(lVar7 + 0x6b0);
  cVar4 = *(char *)(lVar7 + 0x6b1);
  cVar5 = *(char *)(lVar7 + 0x1e8);
  *param_1 = (YogaLayoutableShadowNode *)(puVar6 + 3);
  param_1[1] = puVar6;
  *(uint *)((long)puVar6 + 0x6c) =
       uVar2 & 0xfffff000 |
       uVar2 & 0x7f8 | uVar1 | (uint)((cVar3 != '\0' || cVar4 != '\0') || cVar5 != '\0') << 0xb;
  return;
}


// ===== 007966f0  FUN_007966f0 =====

void FUN_007966f0(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009811b0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00796700  FUN_00796700 =====

void FUN_00796700(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009811b0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00796730  FUN_00796730 =====

void FUN_00796730(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00796738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 0079673c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00796740  FUN_00796740 =====

void FUN_00796740(long *param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = (void *)param_1[0x79];
  *param_1 = (long)(PTR_vtable_0099de98 + 0x10);
  if (pvVar4 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x7a];
    pvVar2 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        plVar3 = *(long **)((long)pvVar5 + -8);
        if ((plVar3 != (long *)0x0) &&
           (lVar1 = FUN_00757990(0xffffffffffffffff,plVar3 + 1), lVar1 == 0)) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
        pvVar5 = (void *)((long)pvVar5 + -0x10);
      } while (pvVar5 != pvVar4);
      pvVar2 = (void *)param_1[0x79];
    }
    param_1[0x7a] = (long)pvVar4;
    operator_delete(pvVar2);
  }
  pvVar4 = (void *)param_1[0x73];
  if (pvVar4 != (void *)0x0) {
    param_1[0x74] = (long)pvVar4;
    operator_delete(pvVar4);
  }
  FUN_007890e8(param_1 + 0x23);
  FUN_00789784(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00796800  FUN_00796800 =====

void FUN_00796800(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  facebook::react::LayoutableShadowNode::getLayoutMetrics();
  facebook::react::BaseViewProps::resolveTransform(*(LayoutMetrics **)(param_1 + 8));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00796868  FUN_00796868 =====

bool FUN_00796868(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 00796880  FUN_00796880 =====

bool FUN_00796880(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 00796898  FUN_00796898 =====

void FUN_00796898(undefined8 *param_1,undefined8 param_2,ShadowNode *param_3,
                 ShadowNodeFragment *param_4)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined4 uVar8;
  
  puVar6 = (undefined8 *)operator_new(0x400);
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_009811b0;
                    /* try { // try from 007968d8 to 007968e7 has its CatchHandler @ 00796980 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
            ((YogaLayoutableShadowNode *)(puVar6 + 3),param_3,param_4);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_00981200;
  uVar2 = *(uint *)((long)puVar6 + 0x6c);
  uVar1 = uVar2 & 3 | (uint)((*(byte *)(lVar7 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)puVar6 + 0x6c) = uVar2 & 0xfffffff8 | uVar1;
  if ((*(uint *)(lVar7 + 0x50) & 0x30000000) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    if (*(char *)(lVar7 + 0x5b4) != '\0') {
      uVar8 = *(undefined4 *)(lVar7 + 0x5b0);
    }
  }
  *(undefined4 *)(puVar6 + 10) = uVar8;
  cVar3 = *(char *)(lVar7 + 0x6b0);
  cVar4 = *(char *)(lVar7 + 0x6b1);
  cVar5 = *(char *)(lVar7 + 0x1e8);
  *param_1 = (YogaLayoutableShadowNode *)(puVar6 + 3);
  param_1[1] = puVar6;
  *(uint *)((long)puVar6 + 0x6c) =
       uVar2 & 0xfffff000 |
       uVar2 & 0x7f8 | uVar1 | (uint)((cVar3 != '\0' || cVar4 != '\0') || cVar5 != '\0') << 0xb;
  return;
}


// ===== 0079699c  FUN_0079699c =====

void FUN_0079699c(undefined8 *param_1,PropsParserContext *param_2,RawProps *param_3,long *param_4)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  ClipViewProps *pCVar4;
  undefined1 uStack_59;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pCVar4 = (ClipViewProps *)*param_4;
  if (pCVar4 == (ClipViewProps *)0x0) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_21ClipViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_13ClipViewPropsENS0_20ClipViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd10
         & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_21ClipViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_13ClipViewPropsENS0_20ClipViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd10
                                   ), iVar2 != 0)) {
                    /* try { // try from 00796a68 to 00796a77 has its CatchHandler @ 00796aa4 */
      FUN_00796d10(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_21ClipViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_13ClipViewPropsENS0_20ClipViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd08
                   ,&uStack_59);
      __cxa_atexit(FUN_00796cc0,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_21ClipViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_13ClipViewPropsENS0_20ClipViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd08
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_21ClipViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_13ClipViewPropsENS0_20ClipViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd10
                         );
    }
    pCVar4 = *(ClipViewProps **)
              PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_21ClipViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_13ClipViewPropsENS0_20ClipViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd08
    ;
  }
  puVar3 = (undefined8 *)operator_new(0x718);
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_00981318;
                    /* try { // try from 00796a14 to 00796a27 has its CatchHandler @ 00796ab8 */
  facebook::react::ClipViewProps::ClipViewProps
            ((ClipViewProps *)(puVar3 + 3),param_2,pCVar4,param_3);
  *param_1 = (ClipViewProps *)(puVar3 + 3);
  param_1[1] = puVar3;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00796ae8  FUN_00796ae8 =====

void FUN_00796ae8(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  plVar3 = local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar5 = *param_1;
  if (*param_3 == 0) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_21ClipViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_13ClipViewPropsENS0_20ClipViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd10
         & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_21ClipViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_13ClipViewPropsENS0_20ClipViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd10
                                   ), iVar2 != 0)) {
                    /* try { // try from 00796bcc to 00796bdb has its CatchHandler @ 00796c08 */
      FUN_00796d10(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_21ClipViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_13ClipViewPropsENS0_20ClipViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd08
                   ,local_70);
      __cxa_atexit(FUN_00796cc0,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_21ClipViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_13ClipViewPropsENS0_20ClipViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd08
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_21ClipViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_13ClipViewPropsENS0_20ClipViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd10
                         );
    }
    local_50 = (long *)0x0;
                    /* try { // try from 00796b58 to 00796b6b has its CatchHandler @ 00796c1c */
    facebook::react::Props::facebook::react::Props::initializeDynamicProps
              (uVar5,*(undefined8 *)
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_21ClipViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_13ClipViewPropsENS0_20ClipViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd08
               ,param_2,local_70);
  }
  else {
    local_50 = (long *)0x0;
                    /* try { // try from 00796b1c to 00796b33 has its CatchHandler @ 00796c20 */
    facebook::react::Props::facebook::react::Props::initializeDynamicProps
              (uVar5,*param_3,param_2,local_70);
  }
  if (local_50 == local_70) {
    lVar4 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00796b98;
    lVar4 = 5;
    plVar3 = local_50;
  }
  (**(code **)(*plVar3 + lVar4 * 8))();
LAB_00796b98:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00796c70  FUN_00796c70 =====

void FUN_00796c70(long param_1)

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


// ===== 00796cc0  FUN_00796cc0 =====

void FUN_00796cc0(long param_1)

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


// ===== 00796d10  FUN_00796d10 =====

void FUN_00796d10(undefined8 *param_1)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x718);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_009812c8;
  memset(__s,0,0x700);
                    /* try { // try from 00796d54 to 00796d67 has its CatchHandler @ 00796dd8 */
  FUN_00788b10(__s,PTR_PTR_0099df58 + 0x10);
  *(undefined4 *)((long)puVar2 + 0x5f4) = 0;
  *(undefined1 *)(puVar2 + 0xbf) = 0;
  *(undefined1 *)(puVar2 + 0xcb) = 0;
  *(undefined1 *)(puVar2 + 0xcc) = 0;
  *(undefined1 *)(puVar2 + 0xd8) = 0;
  *(undefined1 *)(puVar2 + 0xda) = 0;
  *(undefined1 *)((long)puVar2 + 0x6d4) = 0;
  *(undefined1 *)(puVar2 + 0xdb) = 0;
  *(undefined1 *)((long)puVar2 + 0x6dc) = 0;
  *(undefined1 *)(puVar2 + 0xdc) = 0;
  *(undefined1 *)((long)puVar2 + 0x6e4) = 0;
  *(undefined1 *)(puVar2 + 0xdd) = 0;
  *(undefined1 *)((long)puVar2 + 0x6ec) = 0;
  *(undefined1 *)(puVar2 + 0xde) = 0;
  *(undefined1 *)((long)puVar2 + 0x6f4) = 0;
  puVar1 = PTR_vtable_0099df50;
  *(undefined4 *)(puVar2 + 0xd9) = 0;
  *(undefined2 *)((long)puVar2 + 0x6cc) = 0;
  *(undefined1 *)(puVar2 + 0xdf) = 0;
  puVar2[3] = puVar1 + 0x20;
  *(undefined1 *)(puVar2 + 0xe2) = 0;
  *param_1 = __s;
  param_1[1] = puVar2;
  return;
}


// ===== 00796df4  FUN_00796df4 =====

void FUN_00796df4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009812c8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00796e04  FUN_00796e04 =====

void FUN_00796e04(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009812c8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00796e34  FUN_00796e34 =====

void FUN_00796e34(long param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  if ((*(char *)(param_1 + 0x710) != '\0') &&
     (pbVar2 = *(byte **)(param_1 + 0x6f8), pbVar2 != (byte *)0x0)) {
    pbVar1 = *(byte **)(param_1 + 0x700);
    pbVar3 = pbVar2;
    if (pbVar1 != pbVar2) {
      do {
        pbVar3 = pbVar1 + -0x48;
        if ((*pbVar3 & 1) != 0) {
          operator_delete(*(void **)(pbVar1 + -0x38));
        }
        pbVar1 = pbVar3;
      } while (pbVar3 != pbVar2);
      pbVar3 = *(byte **)(param_1 + 0x6f8);
    }
    *(byte **)(param_1 + 0x700) = pbVar2;
    operator_delete(pbVar3);
  }
  FUN_0078917c(param_1 + 0x18,PTR_PTR_0099df58 + 8);
  return;
}


// ===== 00796ebc  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00796ec0  FUN_00796ec0 =====

void FUN_00796ec0(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00981318;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00796ed0  FUN_00796ed0 =====

void FUN_00796ed0(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00981318;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00796f00  FUN_00796f00 =====

void FUN_00796f00(long param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  if ((*(char *)(param_1 + 0x710) != '\0') &&
     (pbVar2 = *(byte **)(param_1 + 0x6f8), pbVar2 != (byte *)0x0)) {
    pbVar1 = *(byte **)(param_1 + 0x700);
    pbVar3 = pbVar2;
    if (pbVar1 != pbVar2) {
      do {
        pbVar3 = pbVar1 + -0x48;
        if ((*pbVar3 & 1) != 0) {
          operator_delete(*(void **)(pbVar1 + -0x38));
        }
        pbVar1 = pbVar3;
      } while (pbVar3 != pbVar2);
      pbVar3 = *(byte **)(param_1 + 0x6f8);
    }
    *(byte **)(param_1 + 0x700) = pbVar2;
    operator_delete(pbVar3);
  }
  FUN_0078917c(param_1 + 0x18,PTR_PTR_0099df58 + 8);
  return;
}


// ===== 00796f88  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00796f8c  FUN_00796f8c =====

void FUN_00796f8c(long param_1)

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


// ===== 00796fdc  FUN_00796fdc =====

void FUN_00796fdc(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00981368;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00796fec  FUN_00796fec =====

void FUN_00796fec(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00981368;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0079701c  FUN_0079701c =====

void FUN_0079701c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00797024. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00797028  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0079702c  FUN_0079702c =====

EventEmitter * FUN_0079702c(EventEmitter *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long *plStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plStack_48 = (long *)param_2[1];
  local_50 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  local_60 = *param_3;
  local_58 = param_3[1];
  if (local_58 != 0) {
    FUN_00757d00(1,local_58 + 0x10);
  }
                    /* try { // try from 00797074 to 00797083 has its CatchHandler @ 00797148 */
  facebook::react::EventEmitter::EventEmitter(param_1,&local_50,&local_60);
  *(undefined ***)param_1 = &PTR_FUN_0097ff10;
                    /* try { // try from 00797090 to 00797097 has its CatchHandler @ 00797138 */
  puVar3 = (undefined8 *)operator_new(0x58);
  *puVar3 = &PTR_FUN_0097ff30;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[4] = 0;
  puVar3[3] = 0;
  *(undefined8 **)(param_1 + 0x40) = puVar3 + 3;
  *(undefined8 **)(param_1 + 0x48) = puVar3;
  puVar3[6] = 0;
  puVar3[5] = 0;
  puVar3[8] = 0;
  puVar3[7] = 0;
  *(undefined8 *)((long)puVar3 + 0x4c) = 0;
  *(undefined8 *)((long)puVar3 + 0x44) = 0;
  *(undefined ***)param_1 = &PTR_FUN_009813b8;
  if (local_58 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = plStack_48;
  if ((plStack_48 != (long *)0x0) &&
     (lVar4 = FUN_00757990(0xffffffffffffffff,plStack_48 + 1), lVar4 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0079717c  FUN_0079717c =====

void FUN_0079717c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[9];
  *param_1 = &PTR_FUN_0097ff10;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *param_1 = &PTR_FUN_0097ff80;
  if (param_1[6] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[4] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


// ===== 0079722c  FUN_0079722c =====

ShadowNodeFamily *
FUN_0079722c(ShadowNodeFamily *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
            undefined8 param_5)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  long *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_58 = *param_3;
  local_50 = (long *)param_3[1];
  if (local_50 != (long *)0x0) {
    FUN_00757d00(1,local_50 + 1);
  }
  local_68 = *param_4;
  local_60 = param_4[1];
  if (local_60 != 0) {
    FUN_00757d00(1,local_60 + 0x10);
  }
                    /* try { // try from 00797290 to 007972a7 has its CatchHandler @ 00797310 */
  facebook::react::ShadowNodeFamily::ShadowNodeFamily(param_1,param_2,&local_58,&local_68,param_5);
  if (local_60 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = local_50;
  if ((local_50 != (long *)0x0) &&
     (lVar3 = FUN_00757990(0xffffffffffffffff,local_50 + 1), lVar3 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00797348  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_42DiscordGestureHandlerRootViewComponentNameEEEENS0_34DiscordGestureHandlerRootViewPropsENS0_41DiscordGestureHandlerRootViewEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE =====

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_42DiscordGestureHandlerRootViewComponentNameEEEENS0_34DiscordGestureHandlerRootViewPropsENS0_41DiscordGestureHandlerRootViewEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE
               (undefined8 *param_1)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_0079739c(&local_30);
  *param_1 = local_30;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0079739c  FUN_0079739c =====

void FUN_0079739c(undefined8 *param_1,ComponentDescriptorParameters *param_2)

{
  long lVar1;
  ComponentDescriptor *this;
  void *local_90;
  void *pvStack_88;
  undefined8 local_80;
  void *pvStack_78;
  void *local_70;
  undefined8 uStack_68;
  void *local_60;
  void *pvStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (ComponentDescriptor *)operator_new(0x88);
  pvStack_78 = (void *)0x0;
  local_80 = 0;
  uStack_68 = 0;
  local_70 = (void *)0x0;
  pvStack_58 = (void *)0x0;
  local_60 = (void *)0x0;
  uStack_48 = 0;
  uStack_50 = 0;
  pvStack_88 = (void *)0x0;
  local_90 = (void *)0x0;
                    /* try { // try from 007973e0 to 007973eb has its CatchHandler @ 00797458 */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_90);
  *(undefined ***)this = &PTR_FUN_009813f0;
  FUN_00797488(this + 0x38);
  *param_1 = this;
  if (local_60 != (void *)0x0) {
    pvStack_58 = local_60;
    operator_delete(local_60);
  }
  if (pvStack_78 != (void *)0x0) {
    local_70 = pvStack_78;
    operator_delete(pvStack_78);
  }
  if (local_90 != (void *)0x0) {
    pvStack_88 = local_90;
    operator_delete(local_90);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00797488  FUN_00797488 =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00797488(undefined8 param_1)

{
  byte bVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  void *pvVar9;
  undefined4 local_fb0 [2];
  undefined8 *local_fa8;
  undefined *local_fa0;
  undefined8 uStack_f98;
  undefined8 local_f90;
  undefined8 uStack_f88;
  undefined4 local_f80 [2];
  undefined8 local_f78;
  undefined8 uStack_f70;
  undefined8 local_f68;
  undefined8 uStack_f60;
  undefined4 local_f58;
  undefined4 local_f50;
  undefined1 local_f4c;
  undefined8 local_f4b;
  undefined8 local_f43;
  undefined8 uStack_f3b;
  undefined8 local_f33;
  undefined8 uStack_f2b;
  undefined8 local_f23;
  undefined8 uStack_f1b;
  undefined8 local_f13;
  undefined6 uStack_f0b;
  undefined2 uStack_f05;
  undefined6 uStack_f03;
  undefined8 uStack_efd;
  undefined4 local_ef5;
  undefined8 local_ef1;
  undefined1 local_ee9;
  undefined1 uStack_ee8;
  undefined7 uStack_ee7;
  undefined8 uStack_ee0;
  undefined8 uStack_ed8;
  undefined8 uStack_ed0;
  undefined8 local_ec8;
  undefined8 uStack_ec0;
  undefined8 local_eb8;
  undefined8 uStack_eb0;
  undefined8 local_ea8;
  undefined8 uStack_ea0;
  undefined8 local_e98;
  undefined8 uStack_e90;
  undefined8 uStack_e88;
  undefined8 local_e80;
  undefined8 local_e78;
  undefined8 uStack_e70;
  undefined8 local_e68;
  undefined4 uStack_e60;
  undefined4 uStack_e5c;
  undefined4 uStack_e58;
  undefined4 uStack_e54;
  undefined4 uStack_e50;
  undefined4 uStack_e4c;
  undefined8 local_e48;
  undefined8 uStack_e40;
  undefined4 local_e38;
  undefined1 local_e34;
  undefined4 local_e30;
  undefined1 local_e2c;
  undefined4 local_e28;
  undefined1 local_e24;
  undefined4 local_e20;
  undefined1 local_e1c;
  undefined4 local_e18;
  undefined1 local_e14;
  undefined4 local_e10;
  undefined1 local_e0c;
  undefined4 local_e08;
  undefined1 local_e04;
  undefined4 local_e00;
  undefined1 local_dfc;
  undefined4 local_df8;
  undefined1 local_df4;
  undefined4 local_df0;
  undefined1 local_dec;
  undefined4 local_de8;
  undefined1 local_de4;
  undefined4 local_de0;
  undefined1 local_ddc;
  undefined4 local_dd8;
  undefined1 local_dd4;
  undefined4 local_dd0;
  undefined1 local_dcc;
  undefined4 local_dc8;
  undefined1 local_dc4;
  undefined4 local_dc0;
  undefined1 local_dbc;
  undefined1 local_db8;
  undefined1 local_db4;
  undefined1 local_da8;
  undefined8 local_da0;
  undefined8 uStack_d98;
  undefined8 uStack_d90;
  undefined8 uStack_d88;
  undefined8 local_d80;
  undefined8 uStack_d78;
  undefined8 uStack_d70;
  undefined1 uStack_d68;
  undefined7 local_d67;
  undefined1 uStack_d60;
  undefined8 uStack_d5f;
  undefined8 local_d54;
  undefined8 uStack_d4c;
  undefined8 uStack_d44;
  undefined8 uStack_d3c;
  undefined8 local_d34;
  undefined8 uStack_d2c;
  undefined8 uStack_d24;
  undefined8 uStack_d1c;
  undefined8 local_d14;
  undefined8 uStack_d0c;
  undefined8 uStack_d04;
  undefined5 uStack_cfc;
  undefined3 local_cf7;
  undefined5 uStack_cf4;
  undefined1 local_cec;
  undefined1 local_ce8;
  undefined1 local_ce4;
  undefined1 local_ce0;
  undefined1 local_cdc;
  undefined1 local_cd8;
  undefined1 local_cc0;
  undefined8 local_cb8;
  undefined8 uStack_cb0;
  undefined8 local_ca8;
  undefined4 local_ca0;
  undefined1 local_c9c;
  undefined4 local_c9b;
  undefined1 local_c97;
  undefined1 local_c96;
  undefined8 local_c90;
  undefined8 uStack_c88;
  undefined8 uStack_c80;
  undefined8 uStack_c78;
  undefined8 local_c70;
  undefined7 uStack_c68;
  undefined4 uStack_c61;
  undefined8 local_c5c;
  undefined1 local_c54;
  undefined1 local_c4c;
  undefined1 local_c48;
  undefined1 local_c40;
  undefined1 local_c3c;
  undefined1 local_c34;
  undefined1 local_c30;
  undefined1 local_c28;
  undefined1 local_c24;
  undefined1 local_c1c;
  undefined1 local_c18;
  undefined1 local_c10;
  undefined1 local_c0c;
  undefined1 local_c04;
  undefined1 local_c00;
  undefined1 local_bf8;
  undefined1 local_bf4;
  undefined1 local_bec;
  undefined1 local_be8;
  undefined1 local_be0;
  undefined1 local_bdc;
  undefined1 local_bd4;
  undefined1 local_bd0;
  undefined1 local_bc8;
  undefined1 local_bc4;
  undefined1 local_bbc;
  undefined1 local_bb8;
  undefined1 local_bb4;
  undefined1 local_bb0;
  undefined1 local_bac;
  undefined1 local_ba8;
  undefined1 local_ba4;
  undefined1 local_ba0;
  undefined1 local_b9c;
  undefined1 local_b98;
  undefined1 local_b94;
  undefined1 local_b90;
  undefined1 local_b8c;
  undefined1 local_b88;
  undefined1 local_b84;
  undefined1 local_b80;
  undefined1 local_b7c;
  undefined1 local_b78;
  undefined1 local_b74;
  undefined1 local_b70;
  undefined1 local_b6c;
  undefined1 local_b68;
  undefined1 local_b64;
  undefined1 local_b60;
  undefined1 local_b5c;
  undefined8 local_b58;
  undefined8 uStack_b50;
  undefined8 local_b48;
  undefined8 uStack_b40;
  undefined8 uStack_b38;
  undefined8 uStack_b30;
  undefined2 local_b28;
  undefined8 local_b24;
  undefined1 local_b1c;
  undefined8 local_b18;
  undefined8 local_b10;
  undefined8 uStack_b08;
  undefined1 local_b00;
  undefined8 local_af8;
  undefined8 uStack_af0;
  undefined8 uStack_ae8;
  undefined8 uStack_ae0;
  undefined8 local_ad8;
  undefined8 uStack_ad0;
  undefined8 uStack_ac8;
  undefined8 uStack_ac0;
  undefined8 local_ab8;
  undefined8 uStack_ab0;
  undefined8 uStack_aa8;
  undefined8 uStack_aa0;
  undefined8 local_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  undefined8 uStack_a80;
  undefined8 local_a78;
  undefined8 uStack_a70;
  undefined8 uStack_a68;
  undefined8 uStack_a60;
  undefined8 local_a58;
  undefined8 uStack_a50;
  undefined8 local_a48;
  undefined8 uStack_a40;
  undefined8 local_a38;
  undefined8 uStack_a30;
  undefined8 local_a28;
  undefined8 uStack_a20;
  undefined8 local_a18;
  undefined8 uStack_a10;
  undefined8 local_a08;
  undefined6 uStack_a00;
  undefined2 uStack_9fa;
  undefined6 uStack_9f8;
  undefined1 local_9f0;
  undefined1 local_9ec;
  undefined1 local_9e8;
  undefined8 local_9e4;
  undefined8 uStack_9dc;
  undefined1 local_9d4;
  undefined8 local_9d0;
  undefined2 local_9c8;
  undefined1 local_9c6;
  undefined4 local_9c4;
  undefined1 local_9c0;
  undefined1 local_960;
  undefined1 local_958;
  undefined1 local_8f8;
  undefined4 local_8f0;
  undefined2 local_8ec;
  undefined1 local_8e8;
  undefined1 local_8e4;
  undefined1 local_8e0;
  undefined1 local_8dc;
  undefined1 local_8d8;
  undefined1 local_8d4;
  undefined1 local_8d0;
  undefined1 local_8cc;
  undefined1 local_8c8;
  undefined1 local_8c4;
  undefined *local_8c0 [220];
  undefined8 local_1e0;
  undefined8 uStack_1d8;
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
  void *local_150;
  undefined8 uStack_148;
  void *local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined4 local_108 [4];
  undefined4 local_f8 [2];
  undefined8 local_f0;
  undefined4 local_c8;
  void *local_c0;
  void *pvStack_b8;
  undefined8 uStack_b0;
  void *local_a8;
  void *local_a0;
  undefined8 uStack_98;
  long local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long *local_70;
  undefined8 uStack_68;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_120 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108[0] = 0;
  local_f8[0] = 0;
  local_f0 = 0;
  local_c8 = 0;
  pvStack_b8 = (void *)0x0;
  local_c0 = (void *)0x0;
  local_a8 = (void *)0x0;
  uStack_b0 = 0;
  uStack_98 = 0;
  local_a0 = (void *)0x0;
  local_130 = 0;
  uStack_138 = 0;
  local_140 = (void *)0x0;
  uStack_148 = 0;
  local_150 = (void *)0x0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_168 = 0;
  local_170 = 0;
  uStack_178 = 0;
  local_180 = 0;
  uStack_188 = 0;
  local_190 = 0;
  uStack_198 = 0;
  local_1a0 = 0;
  uStack_1a8 = 0;
  local_1b0 = 0;
  uStack_1b8 = 0;
  local_1c0 = 0;
  uStack_1c8 = 0;
  local_1d0 = 0;
  uStack_1d8 = 0;
  local_1e0 = 0;
                    /* try { // try from 0079750c to 00797517 has its CatchHandler @ 00797b0c */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1e0);
  local_130 = CONCAT44(local_130._4_4_,0x3f800000);
  local_fb0[0] = 0xffffffff;
  uStack_138 = 0;
  local_140 = (void *)0x0;
  uStack_148 = 0;
  local_150 = (void *)0x0;
  local_fa8 = &local_1e0;
  facebook::react::RawProps::facebook::react::RawProps::parse(&local_120,param_1);
  memset(local_f80,0,0x6c0);
  local_90._0_4_ = 5;
  local_78 = 0;
  local_fa0 = PTR_construction_vtable_0099e1d0 + 0x20;
  local_f80[0] = 5;
  uStack_f88 = 0;
  local_f90 = 0;
  uStack_f98 = 0;
  local_70 = (long *)0x0;
  uStack_68 = 0x3f800000;
  uStack_80 = 0;
  local_88 = 0;
  uStack_f70 = 0;
  local_f78 = 0;
  uStack_f60 = 0;
  local_f68 = 0;
  local_f58 = 0x3f800000;
  folly::dynamic::folly::dynamic::destroy(&local_90);
  puVar6 = PTR_PTR_0099df70;
  puVar5 = PTR_vtable_0099df68;
  local_f4c = 0;
  local_ef1 = 0;
  uStack_a10 = _UNK_00470a7c;
  local_a18 = _DAT_00470a74;
  local_f4b = _s__00375408;
  uStack_b08 = _UNK_00371598;
  local_b10 = _DAT_00371590;
  uStack_a20 = _UNK_00470a6c;
  local_a28 = _DAT_00470a64;
  local_e34 = 0;
  uStack_a30 = _UNK_00470a5c;
  local_a38 = _DAT_00470a54;
  uStack_a40 = _UNK_00470a4c;
  local_a48 = _DAT_00470a44;
  uStack_9f8 = 0;
  local_e2c = 0;
  uStack_e60 = 0;
  local_e68 = 0;
  uStack_e4c = 0;
  uStack_e70 = 0;
  local_e78 = 0;
  uStack_a00 = 0;
  uStack_9fa = 0;
  local_a08 = 0;
  local_f50 = 0x10410710;
  local_ef5 = 0x40004;
  uStack_e54 = 0;
  uStack_e50 = 0;
  uStack_e5c = 0;
  uStack_e58 = 0;
  uStack_e40 = 0;
  local_e48 = 0;
  local_e38 = 0x7fc00000;
  local_e30 = 0x7fc00000;
  local_e28 = 0x7fc00000;
  local_e20 = 0x7fc00000;
  local_e18 = 0x7fc00000;
  local_e10 = 0x7fc00000;
  local_e08 = 0x7fc00000;
  local_e00 = 0x7fc00000;
  local_df8 = 0x7fc00000;
  local_df0 = 0x7fc00000;
  local_de8 = 0x7fc00000;
  local_de0 = 0x7fc00000;
  local_dd8 = 0x7fc00000;
  local_dd0 = 0x7fc00000;
  local_dc8 = 0x7fc00000;
  local_dc0 = 0x7fc00000;
  uStack_d5f = 0;
  uStack_d60 = 0;
  uStack_d4c = 0;
  local_d54 = 0;
  uStack_d3c = 0;
  uStack_d44 = 0;
  uStack_d2c = 0;
  local_d34 = 0;
  uStack_d1c = 0;
  uStack_d24 = 0;
  uStack_d0c = 0;
  local_d14 = 0;
  uStack_cfc = 0;
  uStack_d04 = 0;
  local_cf7 = 0;
  uStack_cf4 = 0;
  local_c9c = 1;
  local_c9b = 0;
  local_c96 = 0x23;
  local_c5c = 0x3f800000;
  uStack_b40 = 0;
  local_b48 = 0;
  uStack_b30 = 0;
  uStack_b38 = 0;
  uStack_b50 = 0;
  local_b58 = 0;
  local_b24 = 0;
  uStack_af0 = 0;
  local_af8 = 0;
  uStack_ae0 = 0;
  uStack_ae8 = 0;
  uStack_ad0 = 0;
  local_ad8 = 0;
  uStack_ac0 = 0;
  uStack_ac8 = 0;
  uStack_ab0 = 0;
  local_ab8 = 0;
  uStack_aa0 = 0;
  uStack_aa8 = 0;
  uStack_a90 = 0;
  local_a98 = 0;
  uStack_a80 = 0;
  uStack_a88 = 0;
  uStack_a70 = 0;
  local_a78 = 0;
  uStack_a60 = 0;
  uStack_a68 = 0;
  uStack_a50 = 0;
  local_a58 = 0;
  uStack_ee7 = 0;
  uStack_f3b = 0;
  local_f43 = 0;
  uStack_f2b = 0;
  local_f33 = 0;
  uStack_f1b = 0;
  local_f23 = 0;
  uStack_f0b = 0;
  local_f13 = 0;
  uStack_efd = 0;
  uStack_f05 = 0;
  uStack_f03 = 0;
  local_ee9 = 0;
  uStack_ee8 = 0;
  uStack_ed8 = 0;
  uStack_ee0 = 0;
  local_ec8 = 0;
  uStack_ed0 = 0;
  local_eb8 = 0;
  uStack_ec0 = 0;
  local_ea8 = 0;
  uStack_eb0 = 0;
  local_e98 = 0;
  uStack_ea0 = 0;
  uStack_e88 = 0;
  uStack_e90 = 0;
  local_e80 = 0;
  local_e24 = 0;
  local_e1c = 0;
  local_e14 = 0;
  local_e0c = 0;
  local_e04 = 0;
  local_dfc = 0;
  local_df4 = 0;
  local_dec = 0;
  local_de4 = 0;
  local_ddc = 0;
  local_dd4 = 0;
  local_dcc = 0;
  local_dc4 = 0;
  local_dbc = 0;
  local_db8 = 0;
  local_db4 = 0;
  local_da8 = 0;
  local_cec = 0;
  local_ce8 = 0;
  local_ce4 = 0;
  local_ce0 = 0;
  local_cdc = 0;
  local_cd8 = 0;
  local_cc0 = 0;
  uStack_d98 = 0;
  local_da0 = 0;
  uStack_d88 = 0;
  uStack_d90 = 0;
  uStack_d78 = 0;
  local_d80 = 0;
  uStack_d68 = 0;
  local_d67 = 0;
  uStack_d70 = 0;
  uStack_cb0 = 0;
  local_cb8 = 0;
  local_ca8 = 0;
  local_ca0 = 0;
  local_c97 = 0;
  uStack_c88 = 0;
  local_c90 = 0;
  uStack_c78 = 0;
  uStack_c80 = 0;
  uStack_c68 = 0;
  uStack_c61 = 0;
  local_c70 = 0;
  local_c54 = 0;
  local_c4c = 0;
  local_c48 = 0;
  local_c40 = 0;
  local_c3c = 0;
  local_c34 = 0;
  local_c30 = 0;
  local_c28 = 0;
  local_c24 = 0;
  local_c1c = 0;
  local_c18 = 0;
  local_c10 = 0;
  local_c0c = 0;
  local_c04 = 0;
  local_c00 = 0;
  local_bf8 = 0;
  local_bf4 = 0;
  local_bec = 0;
  local_be8 = 0;
  local_be0 = 0;
  local_bdc = 0;
  local_bd4 = 0;
  local_bd0 = 0;
  local_bc8 = 0;
  local_bc4 = 0;
  local_bbc = 0;
  local_bb8 = 0;
  local_bb4 = 0;
  local_bb0 = 0;
  local_bac = 0;
  local_ba8 = 0;
  local_ba4 = 0;
  local_ba0 = 0;
  local_b9c = 0;
  local_b98 = 0;
  local_b94 = 0;
  local_b90 = 0;
  local_b8c = 0;
  local_b88 = 0;
  local_b84 = 0;
  local_b80 = 0;
  local_b7c = 0;
  local_b78 = 0;
  local_b74 = 0;
  local_b70 = 0;
  local_b6c = 0;
  local_b68 = 0;
  local_b64 = 0;
  local_b60 = 0;
  local_b5c = 0;
  local_b18 = 0;
  local_b28 = 0;
  local_b1c = 0;
  local_b00 = 0;
  local_9f0 = 0;
  local_9ec = 0;
  local_9e8 = 0;
  local_9d0 = 0;
  uStack_9dc = 0;
  local_9e4 = 0;
  local_9d4 = 0;
  local_9c8 = 0x101;
  local_9c6 = 0;
  local_9c4 = 0;
  local_9c0 = 0;
  local_960 = 0;
  local_958 = 0;
  local_8f8 = 0;
  local_8e8 = 0;
  local_8e4 = 0;
  local_8e0 = 0;
  local_8dc = 0;
  local_8d8 = 0;
  local_8d4 = 0;
  local_8d0 = 0;
  local_8cc = 0;
  local_8c8 = 0;
  local_8c4 = 0;
  local_8ec = 0;
  local_8f0 = 0;
  local_fa0 = PTR_vtable_0099df68 + 0x20;
  local_70 = (long *)0x0;
                    /* try { // try from 00797900 to 00797927 has its CatchHandler @ 00797ad0 */
  facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)local_8c0,(PropsParserContext *)(PTR_PTR_0099df70 + 8),
             (HostPlatformViewProps *)local_fb0,(RawProps *)&local_fa0,(function *)&local_120);
  if (local_70 == &local_90) {
    lVar7 = 4;
    plVar8 = &local_90;
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_00797954;
    lVar7 = 5;
    plVar8 = local_70;
  }
  (**(code **)(*plVar8 + lVar7 * 8))();
LAB_00797954:
  local_8c0[0] = puVar5 + 0x20;
  FUN_0078917c(local_8c0,puVar6 + 8);
  FUN_0078917c(&local_fa0,puVar6 + 8);
  facebook::react::RawPropsParser::facebook::react::RawPropsParser::postPrepare(param_1);
  pvVar3 = local_150;
  puVar4 = (undefined8 *)local_140;
  while (puVar4 != (undefined8 *)0x0) {
    plVar8 = (long *)puVar4[6];
    pvVar9 = (void *)*puVar4;
    local_150 = pvVar3;
    if ((plVar8 == (long *)0x0) || (lVar7 = FUN_00757990(0xffffffffffffffff,plVar8 + 1), lVar7 != 0)
       ) {
      bVar1 = *(byte *)(puVar4 + 2);
    }
    else {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__ndk1::__shared_weak_count::__release_weak();
      bVar1 = *(byte *)(puVar4 + 2);
    }
    if ((bVar1 & 1) != 0) {
      operator_delete((void *)puVar4[4]);
    }
    operator_delete(puVar4);
    pvVar3 = local_150;
    puVar4 = (undefined8 *)pvVar9;
  }
  local_150 = (void *)0x0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)&uStack_188);
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)&uStack_1b8);
  std::__ndk1::mutex::~mutex((mutex *)&local_1e0);
  pvVar9 = local_a8;
  pvVar3 = local_a0;
  if (local_a8 != (void *)0x0) {
    while (pvVar3 != pvVar9) {
      if (*(uint *)((long)pvVar3 + -8) != 0xffffffff) {
                    /* try { // try from 00797a60 to 00797a6b has its CatchHandler @ 00797b18 */
        (*(code *)(&PTR_FUN_0097fbf8)[*(uint *)((long)pvVar3 + -8)])
                  (&local_fa0,(void *)((long)pvVar3 + -0x38));
      }
      *(undefined4 *)((long)pvVar3 + -8) = 0xffffffff;
      pvVar3 = (void *)((long)pvVar3 + -0x38);
    }
    local_a0 = pvVar9;
    operator_delete(local_a8);
  }
  if (local_c0 != (void *)0x0) {
    pvStack_b8 = local_c0;
    operator_delete(local_c0);
  }
  folly::dynamic::folly::dynamic::destroy(local_f8);
  facebook::jsi::Value::~Value((Value *)local_108);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00797b1c  FUN_00797b1c =====

void FUN_00797b1c(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 00797b40  FUN_00797b40 =====

undefined * FUN_00797b40(void)

{
  return PTR_DiscordGestureHandlerRootViewComponentName_0099df60;
}


// ===== 00797b4c  FUN_00797b4c =====

undefined * FUN_00797b4c(void)

{
  return PTR_DiscordGestureHandlerRootViewComponentName_0099df60;
}


// ===== 00797b58  FUN_00797b58 =====

undefined8 FUN_00797b58(void)

{
  return 0x61;
}


// ===== 00797b60  FUN_00797b60 =====

void FUN_00797b60(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 uStack_49;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_64 = (**(code **)(*param_2 + 0x20))();
  FUN_00798350(&local_60,&uStack_49,param_3,param_4,&local_64);
                    /* try { // try from 00797bc8 to 00797bcf has its CatchHandler @ 00797c00 */
  (**(code **)(*param_2 + 0x60))(param_2,local_60);
  param_1[1] = uStack_58;
  *param_1 = local_60;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00797c28  FUN_00797c28 =====

void FUN_00797c28(undefined8 *param_1,long *param_2,shared_ptr *param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *local_70;
  long *local_68;
  long *local_60;
  long *plStack_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00798604(&local_60,&local_70);
                    /* try { // try from 00797c74 to 00797c7f has its CatchHandler @ 00797d2c */
  (**(code **)(*local_60 + 0x10))(local_60,param_3,param_4);
  local_70 = local_60;
  local_68 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    FUN_00757d00(1,plStack_58 + 1);
  }
                    /* try { // try from 00797c98 to 00797ca7 has its CatchHandler @ 00797d1c */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_70);
  plVar2 = local_68;
  if ((local_68 != (long *)0x0) &&
     (lVar3 = FUN_00757990(0xffffffffffffffff,local_68 + 1), lVar3 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 00797ce4 to 00797ceb has its CatchHandler @ 00797d2c */
  (**(code **)(*param_2 + 0x60))(param_2,local_60);
  param_1[1] = plStack_58;
  *param_1 = local_60;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00797d54  FUN_00797d54 =====

void FUN_00797d54(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00797d64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 00797d68  FUN_00797d68 =====

void FUN_00797d68(undefined8 *param_1,long param_2,undefined8 param_3,long *param_4,
                 RawProps *param_5)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  char *pcVar6;
  int iVar7;
  ulong uVar8;
  char *pcVar9;
  long lVar10;
  long *local_100;
  long *local_f8;
  long *local_f0;
  long *plStack_e8;
  undefined1 uStack_d1;
  dynamic adStack_d0 [48];
  uint local_a0;
  int local_98 [6];
  long *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((*param_4 == 0) && (uVar8 = facebook::react::RawProps::isEmpty(), (uVar8 & 1) != 0)) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_42DiscordGestureHandlerRootViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_34DiscordGestureHandlerRootViewPropsENS0_41DiscordGestureHandlerRootViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd20
         & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_42DiscordGestureHandlerRootViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_34DiscordGestureHandlerRootViewPropsENS0_41DiscordGestureHandlerRootViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd20
                                   ), iVar7 != 0)) {
                    /* try { // try from 00798034 to 00798043 has its CatchHandler @ 00798070 */
      FUN_00798b00(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_42DiscordGestureHandlerRootViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_34DiscordGestureHandlerRootViewPropsENS0_41DiscordGestureHandlerRootViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd18
                   ,adStack_d0);
      __cxa_atexit(FUN_00798ab0,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_42DiscordGestureHandlerRootViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_34DiscordGestureHandlerRootViewPropsENS0_41DiscordGestureHandlerRootViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd18
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_42DiscordGestureHandlerRootViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_34DiscordGestureHandlerRootViewPropsENS0_41DiscordGestureHandlerRootViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd20
                         );
    }
    lVar10 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_42DiscordGestureHandlerRootViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_34DiscordGestureHandlerRootViewPropsENS0_41DiscordGestureHandlerRootViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd18
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_42DiscordGestureHandlerRootViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_34DiscordGestureHandlerRootViewPropsENS0_41DiscordGestureHandlerRootViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd18
    ;
    param_1[1] = lVar10;
    if (lVar10 != 0) {
      FUN_00757d00(1,lVar10 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    FUN_00798708(&local_f0,param_3,param_5,param_4);
                    /* try { // try from 00797e10 to 00797e23 has its CatchHandler @ 007980a4 */
    uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if (((uVar8 & 1) == 0) ||
       ((uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar8 & 1) == 0 ||
        (uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enablePropsUpdateReconciliationAndroid(), (uVar8 & 1) == 0)))) {
LAB_00797e4c:
      local_100 = local_f0;
      local_f8 = plStack_e8;
      if (plStack_e8 != (long *)0x0) {
        FUN_00757d00(1,plStack_e8 + 1);
      }
                    /* try { // try from 00797e64 to 00797e73 has its CatchHandler @ 00798094 */
      FUN_007988d8(&local_100,param_5,param_4);
      plVar4 = local_f8;
      if ((local_f8 != (long *)0x0) &&
         (lVar10 = FUN_00757990(0xffffffffffffffff,local_f8 + 1), lVar10 == 0)) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 00797e34 to 00797e3b has its CatchHandler @ 00798084 */
      pcVar9 = (char *)(**(code **)(*local_f0 + 0x10))();
      iVar7 = strcmp(PTR_DiscordGestureHandlerRootViewComponentName_0099df60,pcVar9);
      if (iVar7 != 0) goto LAB_00797e4c;
      bVar3 = false;
    }
                    /* try { // try from 00797ea8 to 00797eab has its CatchHandler @ 007980a4 */
    uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar8 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 00797eb8 to 00797ed3 has its CatchHandler @ 00798090 */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(local_f0 + 4));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_f0;
      plVar5 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00798014 to 00798023 has its CatchHandler @ 00798088 */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_007980f0;
      }
      for (; local_f0 = plVar4, plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (*(int *)(plVar5 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00797ff4 to 00798003 has its CatchHandler @ 007980b0 */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_007980f0;
        }
        uVar1 = 0x811c9dc5;
        uVar8 = (ulong)(*(byte *)(plVar5 + 3) >> 1);
        pcVar6 = (char *)((long)plVar5 + 0x19);
        pcVar9 = (char *)((long)plVar5 + 0x19);
        if ((*(byte *)(plVar5 + 3) & 1) != 0) {
          uVar8 = plVar5[4];
          pcVar6 = (char *)plVar5[5];
          pcVar9 = (char *)plVar5[5];
        }
        for (; uVar8 != 0; uVar8 = uVar8 - 1) {
          uVar1 = (uVar1 ^ (int)*pcVar6) * 0x1000193;
          pcVar6 = pcVar6 + 1;
        }
                    /* try { // try from 00797f54 to 00797f5f has its CatchHandler @ 007980b8 */
        folly::dynamic::dynamic(adStack_d0,(dynamic *)(plVar5 + 8));
        local_a0 = 0;
                    /* try { // try from 00797f64 to 00797f7b has its CatchHandler @ 007980bc */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (plVar4,param_3,uVar1,pcVar9,adStack_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 00797f8c to 00797f97 has its CatchHandler @ 007980ac */
          (*(code *)(&PTR_FUN_0097fbf8)[local_a0])(&uStack_d1,adStack_d0);
        }
        plVar4 = local_f0;
      }
      folly::dynamic::folly::dynamic::destroy(local_98);
    }
    param_1[1] = plStack_e8;
    *param_1 = local_f0;
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_007980f0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007980f4  FUN_007980f4 =====

void FUN_007980f4(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 007980fc  FUN_007980fc =====

void FUN_007980fc(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 00798104  FUN_00798104 =====

void FUN_00798104(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined1 auStack_80 [8];
  long *local_78;
  long *local_70;
  long *local_68;
  undefined1 uStack_59;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  FUN_0078a610(auStack_80,&uStack_59,param_3 + 8,param_3 + 4);
                    /* try { // try from 0079814c to 00798153 has its CatchHandler @ 007982d4 */
  plVar4 = (long *)operator_new(0x68);
  plVar1 = plVar4 + 3;
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_00981638;
                    /* try { // try from 0079816c to 0079817b has its CatchHandler @ 007982bc */
  FUN_00798d2c(plVar1,auStack_80,param_2 + 8);
  local_70 = plVar1;
  local_68 = plVar4;
  if ((local_78 != (long *)0x0) &&
     (lVar5 = FUN_00757990(0xffffffffffffffff,local_78 + 1), lVar5 == 0)) {
    (**(code **)(*local_78 + 0x10))(local_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 007981b0 to 007981b7 has its CatchHandler @ 007982ac */
  puVar6 = (undefined8 *)operator_new(0x1a0);
  puVar2 = puVar6 + 4;
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_0097fff0;
                    /* try { // try from 007981d0 to 007981e7 has its CatchHandler @ 00798294 */
  FUN_00798f2c(puVar2,param_3,&local_70,param_2 + 8,param_2);
  plVar1 = local_70;
  *param_1 = (long)puVar2;
  param_1[1] = (long)puVar6;
  local_90 = puVar2;
  local_88 = puVar6;
  FUN_00757d00(1,puVar6 + 2);
                    /* try { // try from 00798200 to 0079820b has its CatchHandler @ 00798274 */
  facebook::react::EventEmitter::facebook::react::EventEmitter::setShadowNodeFamily
            (plVar1,&local_90);
  if (local_88 != (undefined8 *)0x0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar1 = local_68;
  if ((local_68 != (long *)0x0) &&
     (lVar5 = FUN_00757990(0xffffffffffffffff,local_68 + 1), lVar5 == 0)) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007982fc  FUN_007982fc =====

void FUN_007982fc(void)

{
  return;
}


// ===== 00798300  FUN_00798300 =====

void FUN_00798300(long param_1)

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


// ===== 00798350  FUN_00798350 =====

void FUN_00798350(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 *param_5)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined4 uVar8;
  
  puVar6 = (undefined8 *)operator_new(0x400);
  uVar8 = *param_5;
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_00981480;
                    /* try { // try from 00798398 to 007983a7 has its CatchHandler @ 00798440 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
            ((YogaLayoutableShadowNode *)(puVar6 + 3),param_3,param_4,uVar8);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_009814d0;
  uVar2 = *(uint *)((long)puVar6 + 0x6c);
  uVar1 = uVar2 & 3 | (uint)((*(byte *)(lVar7 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)puVar6 + 0x6c) = uVar2 & 0xfffffff8 | uVar1;
  if ((*(uint *)(lVar7 + 0x50) & 0x30000000) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    if (*(char *)(lVar7 + 0x5b4) != '\0') {
      uVar8 = *(undefined4 *)(lVar7 + 0x5b0);
    }
  }
  *(undefined4 *)(puVar6 + 10) = uVar8;
  cVar3 = *(char *)(lVar7 + 0x6b0);
  cVar4 = *(char *)(lVar7 + 0x6b1);
  cVar5 = *(char *)(lVar7 + 0x1e8);
  *param_1 = (YogaLayoutableShadowNode *)(puVar6 + 3);
  param_1[1] = puVar6;
  *(uint *)((long)puVar6 + 0x6c) =
       uVar2 & 0xfffff000 |
       uVar2 & 0x7f8 | uVar1 | (uint)((cVar3 != '\0' || cVar4 != '\0') || cVar5 != '\0') << 0xb;
  return;
}


// ===== 0079845c  FUN_0079845c =====

void FUN_0079845c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00981480;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0079846c  FUN_0079846c =====

void FUN_0079846c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00981480;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0079849c  FUN_0079849c =====

void FUN_0079849c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007984a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 007984a8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007984ac  FUN_007984ac =====

void FUN_007984ac(long *param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = (void *)param_1[0x79];
  *param_1 = (long)(PTR_vtable_0099de98 + 0x10);
  if (pvVar4 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x7a];
    pvVar2 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        plVar3 = *(long **)((long)pvVar5 + -8);
        if ((plVar3 != (long *)0x0) &&
           (lVar1 = FUN_00757990(0xffffffffffffffff,plVar3 + 1), lVar1 == 0)) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
        pvVar5 = (void *)((long)pvVar5 + -0x10);
      } while (pvVar5 != pvVar4);
      pvVar2 = (void *)param_1[0x79];
    }
    param_1[0x7a] = (long)pvVar4;
    operator_delete(pvVar2);
  }
  pvVar4 = (void *)param_1[0x73];
  if (pvVar4 != (void *)0x0) {
    param_1[0x74] = (long)pvVar4;
    operator_delete(pvVar4);
  }
  FUN_007890e8(param_1 + 0x23);
  FUN_00789784(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0079856c  FUN_0079856c =====

void FUN_0079856c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  facebook::react::LayoutableShadowNode::getLayoutMetrics();
  facebook::react::BaseViewProps::resolveTransform(*(LayoutMetrics **)(param_1 + 8));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007985d4  FUN_007985d4 =====

bool FUN_007985d4(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 007985ec  FUN_007985ec =====

bool FUN_007985ec(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 00798604  FUN_00798604 =====

void FUN_00798604(undefined8 *param_1,undefined8 param_2,ShadowNode *param_3,
                 ShadowNodeFragment *param_4)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined4 uVar8;
  
  puVar6 = (undefined8 *)operator_new(0x400);
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_00981480;
                    /* try { // try from 00798644 to 00798653 has its CatchHandler @ 007986ec */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
            ((YogaLayoutableShadowNode *)(puVar6 + 3),param_3,param_4);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_009814d0;
  uVar2 = *(uint *)((long)puVar6 + 0x6c);
  uVar1 = uVar2 & 3 | (uint)((*(byte *)(lVar7 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)puVar6 + 0x6c) = uVar2 & 0xfffffff8 | uVar1;
  if ((*(uint *)(lVar7 + 0x50) & 0x30000000) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    if (*(char *)(lVar7 + 0x5b4) != '\0') {
      uVar8 = *(undefined4 *)(lVar7 + 0x5b0);
    }
  }
  *(undefined4 *)(puVar6 + 10) = uVar8;
  cVar3 = *(char *)(lVar7 + 0x6b0);
  cVar4 = *(char *)(lVar7 + 0x6b1);
  cVar5 = *(char *)(lVar7 + 0x1e8);
  *param_1 = (YogaLayoutableShadowNode *)(puVar6 + 3);
  param_1[1] = puVar6;
  *(uint *)((long)puVar6 + 0x6c) =
       uVar2 & 0xfffff000 |
       uVar2 & 0x7f8 | uVar1 | (uint)((cVar3 != '\0' || cVar4 != '\0') || cVar5 != '\0') << 0xb;
  return;
}


// ===== 00798708  FUN_00798708 =====

void FUN_00798708(undefined8 *param_1,HostPlatformViewProps *param_2,function *param_3,long *param_4
                 )

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  RawProps *pRVar7;
  long local_90 [4];
  long *local_70;
  long local_58;
  
  plVar5 = local_90;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pRVar7 = (RawProps *)*param_4;
  if (pRVar7 == (RawProps *)0x0) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_42DiscordGestureHandlerRootViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_34DiscordGestureHandlerRootViewPropsENS0_41DiscordGestureHandlerRootViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd20
         & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_42DiscordGestureHandlerRootViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_34DiscordGestureHandlerRootViewPropsENS0_41DiscordGestureHandlerRootViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd20
                                   ), iVar3 != 0)) {
                    /* try { // try from 00798828 to 00798837 has its CatchHandler @ 00798864 */
      FUN_00798b00(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_42DiscordGestureHandlerRootViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_34DiscordGestureHandlerRootViewPropsENS0_41DiscordGestureHandlerRootViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd18
                   ,local_90);
      __cxa_atexit(FUN_00798ab0,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_42DiscordGestureHandlerRootViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_34DiscordGestureHandlerRootViewPropsENS0_41DiscordGestureHandlerRootViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd18
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_42DiscordGestureHandlerRootViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_34DiscordGestureHandlerRootViewPropsENS0_41DiscordGestureHandlerRootViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd20
                         );
    }
    pRVar7 = *(RawProps **)
              PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_42DiscordGestureHandlerRootViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_34DiscordGestureHandlerRootViewPropsENS0_41DiscordGestureHandlerRootViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd18
    ;
  }
  puVar4 = (undefined8 *)operator_new(0x6f8);
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_009815e8;
  local_70 = (long *)0x0;
                    /* try { // try from 00798784 to 007987ab has its CatchHandler @ 00798878 */
  facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)(puVar4 + 3),(PropsParserContext *)(PTR_PTR_0099df70 + 8),
             param_2,pRVar7,param_3);
  if (local_70 == local_90) {
    lVar6 = 4;
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_007987d8;
    lVar6 = 5;
    plVar5 = local_70;
  }
  (**(code **)(*plVar5 + lVar6 * 8))();
LAB_007987d8:
  puVar2 = PTR_vtable_0099df68;
  *param_1 = (HostPlatformViewProps *)(puVar4 + 3);
  param_1[1] = puVar4;
  puVar4[3] = puVar2 + 0x20;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007988d8  FUN_007988d8 =====

void FUN_007988d8(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  plVar3 = local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar5 = *param_1;
  if (*param_3 == 0) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_42DiscordGestureHandlerRootViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_34DiscordGestureHandlerRootViewPropsENS0_41DiscordGestureHandlerRootViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd20
         & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_42DiscordGestureHandlerRootViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_34DiscordGestureHandlerRootViewPropsENS0_41DiscordGestureHandlerRootViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd20
                                   ), iVar2 != 0)) {
                    /* try { // try from 007989bc to 007989cb has its CatchHandler @ 007989f8 */
      FUN_00798b00(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_42DiscordGestureHandlerRootViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_34DiscordGestureHandlerRootViewPropsENS0_41DiscordGestureHandlerRootViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd18
                   ,local_70);
      __cxa_atexit(FUN_00798ab0,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_42DiscordGestureHandlerRootViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_34DiscordGestureHandlerRootViewPropsENS0_41DiscordGestureHandlerRootViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd18
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_42DiscordGestureHandlerRootViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_34DiscordGestureHandlerRootViewPropsENS0_41DiscordGestureHandlerRootViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd20
                         );
    }
    local_50 = (long *)0x0;
                    /* try { // try from 00798948 to 0079895b has its CatchHandler @ 00798a0c */
    facebook::react::Props::facebook::react::Props::initializeDynamicProps
              (uVar5,*(undefined8 *)
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_42DiscordGestureHandlerRootViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_34DiscordGestureHandlerRootViewPropsENS0_41DiscordGestureHandlerRootViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd18
               ,param_2,local_70);
  }
  else {
    local_50 = (long *)0x0;
                    /* try { // try from 0079890c to 00798923 has its CatchHandler @ 00798a10 */
    facebook::react::Props::facebook::react::Props::initializeDynamicProps
              (uVar5,*param_3,param_2,local_70);
  }
  if (local_50 == local_70) {
    lVar4 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00798988;
    lVar4 = 5;
    plVar3 = local_50;
  }
  (**(code **)(*plVar3 + lVar4 * 8))();
LAB_00798988:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00798a60  FUN_00798a60 =====

void FUN_00798a60(long param_1)

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


// ===== 00798ab0  FUN_00798ab0 =====

void FUN_00798ab0(long param_1)

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


// ===== 00798b00  FUN_00798b00 =====

void FUN_00798b00(undefined8 *param_1)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x6f8);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_00981598;
  memset(__s,0,0x6e0);
                    /* try { // try from 00798b44 to 00798b57 has its CatchHandler @ 00798bc0 */
  FUN_00788b10(__s,PTR_PTR_0099df70 + 0x10);
  *(undefined4 *)((long)puVar2 + 0x5f4) = 0;
  *(undefined1 *)(puVar2 + 0xbf) = 0;
  *(undefined1 *)(puVar2 + 0xcb) = 0;
  *(undefined1 *)(puVar2 + 0xcc) = 0;
  *(undefined1 *)(puVar2 + 0xd8) = 0;
  *(undefined1 *)(puVar2 + 0xda) = 0;
  *(undefined1 *)((long)puVar2 + 0x6d4) = 0;
  *(undefined1 *)(puVar2 + 0xdb) = 0;
  *(undefined1 *)((long)puVar2 + 0x6dc) = 0;
  *(undefined1 *)(puVar2 + 0xdc) = 0;
  *(undefined1 *)((long)puVar2 + 0x6e4) = 0;
  *(undefined1 *)(puVar2 + 0xdd) = 0;
  *(undefined1 *)((long)puVar2 + 0x6ec) = 0;
  *(undefined1 *)(puVar2 + 0xde) = 0;
  *(undefined1 *)((long)puVar2 + 0x6f4) = 0;
  puVar1 = PTR_vtable_0099df68;
  *(undefined4 *)(puVar2 + 0xd9) = 0;
  *(undefined2 *)((long)puVar2 + 0x6cc) = 0;
  *param_1 = __s;
  param_1[1] = puVar2;
  puVar2[3] = puVar1 + 0x20;
  return;
}


// ===== 00798bdc  FUN_00798bdc =====

void FUN_00798bdc(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00981598;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00798bec  FUN_00798bec =====

void FUN_00798bec(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00981598;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00798c1c  FUN_00798c1c =====

void FUN_00798c1c(long param_1)

{
  FUN_0078917c(param_1 + 0x18,PTR_PTR_0099df70 + 8);
  return;
}


// ===== 00798c30  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00798c34  FUN_00798c34 =====

void FUN_00798c34(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009815e8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00798c44  FUN_00798c44 =====

void FUN_00798c44(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009815e8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00798c74  FUN_00798c74 =====

void FUN_00798c74(long param_1)

{
  FUN_0078917c(param_1 + 0x18,PTR_PTR_0099df70 + 8);
  return;
}


// ===== 00798c88  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00798c8c  FUN_00798c8c =====

void FUN_00798c8c(long param_1)

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


// ===== 00798cdc  FUN_00798cdc =====

void FUN_00798cdc(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00981638;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00798cec  FUN_00798cec =====

void FUN_00798cec(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00981638;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00798d1c  FUN_00798d1c =====

void FUN_00798d1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00798d24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00798d28  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00798d2c  FUN_00798d2c =====

EventEmitter * FUN_00798d2c(EventEmitter *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long *plStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plStack_48 = (long *)param_2[1];
  local_50 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  local_60 = *param_3;
  local_58 = param_3[1];
  if (local_58 != 0) {
    FUN_00757d00(1,local_58 + 0x10);
  }
                    /* try { // try from 00798d74 to 00798d83 has its CatchHandler @ 00798e48 */
  facebook::react::EventEmitter::EventEmitter(param_1,&local_50,&local_60);
  *(undefined ***)param_1 = &PTR_FUN_0097ff10;
                    /* try { // try from 00798d90 to 00798d97 has its CatchHandler @ 00798e38 */
  puVar3 = (undefined8 *)operator_new(0x58);
  *puVar3 = &PTR_FUN_0097ff30;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[4] = 0;
  puVar3[3] = 0;
  *(undefined8 **)(param_1 + 0x40) = puVar3 + 3;
  *(undefined8 **)(param_1 + 0x48) = puVar3;
  puVar3[6] = 0;
  puVar3[5] = 0;
  puVar3[8] = 0;
  puVar3[7] = 0;
  *(undefined8 *)((long)puVar3 + 0x4c) = 0;
  *(undefined8 *)((long)puVar3 + 0x44) = 0;
  *(undefined ***)param_1 = &PTR_FUN_00981688;
  if (local_58 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = plStack_48;
  if ((plStack_48 != (long *)0x0) &&
     (lVar4 = FUN_00757990(0xffffffffffffffff,plStack_48 + 1), lVar4 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00798e7c  FUN_00798e7c =====

void FUN_00798e7c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[9];
  *param_1 = &PTR_FUN_0097ff10;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *param_1 = &PTR_FUN_0097ff80;
  if (param_1[6] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[4] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


// ===== 00798f2c  FUN_00798f2c =====

ShadowNodeFamily *
FUN_00798f2c(ShadowNodeFamily *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
            undefined8 param_5)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  long *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_58 = *param_3;
  local_50 = (long *)param_3[1];
  if (local_50 != (long *)0x0) {
    FUN_00757d00(1,local_50 + 1);
  }
  local_68 = *param_4;
  local_60 = param_4[1];
  if (local_60 != 0) {
    FUN_00757d00(1,local_60 + 0x10);
  }
                    /* try { // try from 00798f90 to 00798fa7 has its CatchHandler @ 00799010 */
  facebook::react::ShadowNodeFamily::ShadowNodeFamily(param_1,param_2,&local_58,&local_68,param_5);
  if (local_60 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = local_50;
  if ((local_50 != (long *)0x0) &&
     (lVar3 = FUN_00757990(0xffffffffffffffff,local_50 + 1), lVar3 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00799048  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_28EmojiPickerViewComponentNameEEEENS0_20EmojiPickerViewPropsENS0_27EmojiPickerViewEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE =====

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_28EmojiPickerViewComponentNameEEEENS0_20EmojiPickerViewPropsENS0_27EmojiPickerViewEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE
               (undefined8 *param_1)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_0079909c(&local_30);
  *param_1 = local_30;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0079909c  FUN_0079909c =====

void FUN_0079909c(undefined8 *param_1,ComponentDescriptorParameters *param_2)

{
  long lVar1;
  ComponentDescriptor *this;
  void *local_90;
  void *pvStack_88;
  undefined8 local_80;
  void *pvStack_78;
  void *local_70;
  undefined8 uStack_68;
  void *local_60;
  void *pvStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (ComponentDescriptor *)operator_new(0x88);
  pvStack_78 = (void *)0x0;
  local_80 = 0;
  uStack_68 = 0;
  local_70 = (void *)0x0;
  pvStack_58 = (void *)0x0;
  local_60 = (void *)0x0;
  uStack_48 = 0;
  uStack_50 = 0;
  pvStack_88 = (void *)0x0;
  local_90 = (void *)0x0;
                    /* try { // try from 007990e0 to 007990eb has its CatchHandler @ 00799158 */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_90);
  *(undefined ***)this = &PTR_FUN_009816c0;
  FUN_00799188(this + 0x38);
  *param_1 = this;
  if (local_60 != (void *)0x0) {
    pvStack_58 = local_60;
    operator_delete(local_60);
  }
  if (pvStack_78 != (void *)0x0) {
    local_70 = pvStack_78;
    operator_delete(pvStack_78);
  }
  if (local_90 != (void *)0x0) {
    pvStack_88 = local_90;
    operator_delete(local_90);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00799188  FUN_00799188 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00799188(undefined8 param_1)

{
  byte bVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  void *pvVar8;
  undefined4 local_1060 [2];
  undefined8 *local_1058;
  undefined *local_1050;
  undefined8 uStack_1048;
  undefined8 local_1040;
  undefined8 uStack_1038;
  undefined4 local_1030 [2];
  undefined8 local_1028;
  undefined8 uStack_1020;
  undefined8 local_1018;
  undefined8 uStack_1010;
  undefined4 local_1008;
  undefined4 local_1000;
  undefined1 local_ffc;
  undefined8 local_ffb;
  undefined8 local_ff3;
  undefined8 uStack_feb;
  undefined8 local_fe3;
  undefined8 uStack_fdb;
  undefined8 local_fd3;
  undefined8 uStack_fcb;
  undefined8 local_fc3;
  undefined6 uStack_fbb;
  undefined2 uStack_fb5;
  undefined6 uStack_fb3;
  undefined8 uStack_fad;
  undefined4 local_fa5;
  undefined8 local_fa1;
  undefined1 local_f99;
  undefined1 uStack_f98;
  undefined7 uStack_f97;
  undefined8 uStack_f90;
  undefined8 uStack_f88;
  undefined8 uStack_f80;
  undefined8 local_f78;
  undefined8 uStack_f70;
  undefined8 local_f68;
  undefined8 uStack_f60;
  undefined8 local_f58;
  undefined8 uStack_f50;
  undefined8 local_f48;
  undefined8 uStack_f40;
  undefined8 uStack_f38;
  undefined8 local_f30;
  undefined8 local_f28;
  undefined8 uStack_f20;
  undefined8 local_f18;
  undefined4 uStack_f10;
  undefined4 uStack_f0c;
  undefined4 uStack_f08;
  undefined4 uStack_f04;
  undefined4 uStack_f00;
  undefined4 uStack_efc;
  undefined8 local_ef8;
  undefined8 uStack_ef0;
  undefined4 local_ee8;
  undefined1 local_ee4;
  undefined4 local_ee0;
  undefined1 local_edc;
  undefined4 local_ed8;
  undefined1 local_ed4;
  undefined4 local_ed0;
  undefined1 local_ecc;
  undefined4 local_ec8;
  undefined1 local_ec4;
  undefined4 local_ec0;
  undefined1 local_ebc;
  undefined4 local_eb8;
  undefined1 local_eb4;
  undefined4 local_eb0;
  undefined1 local_eac;
  undefined4 local_ea8;
  undefined1 local_ea4;
  undefined4 local_ea0;
  undefined1 local_e9c;
  undefined4 local_e98;
  undefined1 local_e94;
  undefined4 local_e90;
  undefined1 local_e8c;
  undefined4 local_e88;
  undefined1 local_e84;
  undefined4 local_e80;
  undefined1 local_e7c;
  undefined4 local_e78;
  undefined1 local_e74;
  undefined4 local_e70;
  undefined1 local_e6c;
  undefined1 local_e68;
  undefined1 local_e64;
  undefined1 local_e58;
  undefined8 local_e50;
  undefined8 uStack_e48;
  undefined8 uStack_e40;
  undefined8 uStack_e38;
  undefined8 local_e30;
  undefined8 uStack_e28;
  undefined8 uStack_e20;
  undefined1 uStack_e18;
  undefined7 local_e17;
  undefined1 uStack_e10;
  undefined8 uStack_e0f;
  undefined8 local_e04;
  undefined8 uStack_dfc;
  undefined8 uStack_df4;
  undefined8 uStack_dec;
  undefined8 local_de4;
  undefined8 uStack_ddc;
  undefined8 uStack_dd4;
  undefined8 uStack_dcc;
  undefined8 local_dc4;
  undefined8 uStack_dbc;
  undefined8 uStack_db4;
  undefined5 uStack_dac;
  undefined3 local_da7;
  undefined5 uStack_da4;
  undefined1 local_d9c;
  undefined1 local_d98;
  undefined1 local_d94;
  undefined1 local_d90;
  undefined1 local_d8c;
  undefined1 local_d88;
  undefined1 local_d70;
  undefined8 local_d68;
  undefined8 uStack_d60;
  undefined8 local_d58;
  undefined4 local_d50;
  undefined1 local_d4c;
  undefined4 local_d4b;
  undefined1 local_d47;
  undefined1 local_d46;
  undefined8 local_d40;
  undefined8 uStack_d38;
  undefined8 uStack_d30;
  undefined8 uStack_d28;
  undefined8 local_d20;
  undefined7 uStack_d18;
  undefined4 uStack_d11;
  undefined8 local_d0c;
  undefined1 local_d04;
  undefined1 local_cfc;
  undefined1 local_cf8;
  undefined1 local_cf0;
  undefined1 local_cec;
  undefined1 local_ce4;
  undefined1 local_ce0;
  undefined1 local_cd8;
  undefined1 local_cd4;
  undefined1 local_ccc;
  undefined1 local_cc8;
  undefined1 local_cc0;
  undefined1 local_cbc;
  undefined1 local_cb4;
  undefined1 local_cb0;
  undefined1 local_ca8;
  undefined1 local_ca4;
  undefined1 local_c9c;
  undefined1 local_c98;
  undefined1 local_c90;
  undefined1 local_c8c;
  undefined1 local_c84;
  undefined1 local_c80;
  undefined1 local_c78;
  undefined1 local_c74;
  undefined1 local_c6c;
  undefined1 local_c68;
  undefined1 local_c64;
  undefined1 local_c60;
  undefined1 local_c5c;
  undefined1 local_c58;
  undefined1 local_c54;
  undefined1 local_c50;
  undefined1 local_c4c;
  undefined1 local_c48;
  undefined1 local_c44;
  undefined1 local_c40;
  undefined1 local_c3c;
  undefined1 local_c38;
  undefined1 local_c34;
  undefined1 local_c30;
  undefined1 local_c2c;
  undefined1 local_c28;
  undefined1 local_c24;
  undefined1 local_c20;
  undefined1 local_c1c;
  undefined1 local_c18;
  undefined1 local_c14;
  undefined1 local_c10;
  undefined1 local_c0c;
  undefined8 local_c08;
  undefined8 uStack_c00;
  undefined8 local_bf8;
  undefined8 uStack_bf0;
  undefined8 uStack_be8;
  undefined8 uStack_be0;
  undefined2 local_bd8;
  undefined8 local_bd4;
  undefined1 local_bcc;
  undefined8 local_bc8;
  undefined8 local_bc0;
  undefined8 uStack_bb8;
  undefined1 local_bb0;
  undefined8 local_ba8;
  undefined8 uStack_ba0;
  undefined8 uStack_b98;
  undefined8 uStack_b90;
  undefined8 local_b88;
  undefined8 uStack_b80;
  undefined8 uStack_b78;
  undefined8 uStack_b70;
  undefined8 local_b68;
  undefined8 uStack_b60;
  undefined8 uStack_b58;
  undefined8 uStack_b50;
  undefined8 local_b48;
  undefined8 uStack_b40;
  undefined8 uStack_b38;
  undefined8 uStack_b30;
  undefined8 local_b28;
  undefined8 uStack_b20;
  undefined8 uStack_b18;
  undefined8 uStack_b10;
  undefined8 local_b08;
  undefined8 uStack_b00;
  undefined8 local_af8;
  undefined8 uStack_af0;
  undefined8 local_ae8;
  undefined8 uStack_ae0;
  undefined8 local_ad8;
  undefined8 uStack_ad0;
  undefined8 local_ac8;
  undefined8 uStack_ac0;
  undefined8 local_ab8;
  undefined6 uStack_ab0;
  undefined2 uStack_aaa;
  undefined6 uStack_aa8;
  undefined1 local_aa0;
  undefined1 local_a9c;
  undefined1 local_a98;
  undefined8 local_a94;
  undefined8 uStack_a8c;
  undefined1 local_a84;
  undefined8 local_a80;
  undefined2 local_a78;
  undefined1 local_a76;
  undefined4 local_a74;
  undefined1 local_a70;
  undefined1 local_a10;
  undefined1 local_a08;
  undefined1 local_9a8;
  undefined4 local_9a0;
  undefined2 local_99c;
  undefined1 local_998;
  undefined1 local_994;
  undefined1 local_990;
  undefined1 local_98c;
  undefined1 local_988;
  undefined1 local_984;
  undefined1 local_980;
  undefined1 local_97c;
  undefined1 local_978;
  undefined1 local_974;
  undefined2 local_970;
  undefined4 local_96c;
  undefined1 local_968;
  undefined8 local_964;
  undefined1 local_95c;
  void *local_958;
  void *pvStack_950;
  undefined8 local_948;
  undefined4 local_940;
  void *local_938;
  void *local_930;
  undefined7 local_928;
  undefined4 uStack_921;
  undefined8 local_918;
  EmojiPickerViewProps aEStack_910 [1784];
  void *local_218;
  void *local_210;
  void *local_1f8;
  void *local_1f0;
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
  void *local_140;
  undefined8 uStack_138;
  void *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined4 local_100 [4];
  undefined4 local_f0 [2];
  undefined8 local_e8;
  undefined4 local_c0;
  void *local_b8;
  void *pvStack_b0;
  undefined8 uStack_a8;
  void *local_a0;
  void *local_98;
  undefined8 uStack_90;
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100[0] = 0;
  local_f0[0] = 0;
  local_e8 = 0;
  local_c0 = 0;
  pvStack_b0 = (void *)0x0;
  local_b8 = (void *)0x0;
  local_a0 = (void *)0x0;
  uStack_a8 = 0;
  uStack_90 = 0;
  local_98 = (void *)0x0;
  local_120 = 0;
  uStack_128 = 0;
  local_130 = (void *)0x0;
  uStack_138 = 0;
  local_140 = (void *)0x0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_168 = 0;
  local_170 = 0;
  uStack_178 = 0;
  local_180 = 0;
  uStack_188 = 0;
  local_190 = 0;
  uStack_198 = 0;
  local_1a0 = 0;
  uStack_1a8 = 0;
  local_1b0 = 0;
  uStack_1b8 = 0;
  local_1c0 = 0;
  uStack_1c8 = 0;
  local_1d0 = 0;
                    /* try { // try from 00799214 to 0079921f has its CatchHandler @ 00799868 */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1d0);
  local_120 = CONCAT44(local_120._4_4_,0x3f800000);
  local_1060[0] = 0xffffffff;
  uStack_128 = 0;
  local_130 = (void *)0x0;
  uStack_138 = 0;
  local_140 = (void *)0x0;
  local_1058 = &local_1d0;
  facebook::react::RawProps::facebook::react::RawProps::parse(&local_118,param_1);
  memset(local_1030,0,0x720);
  local_88[0] = 5;
  local_70 = 0;
  local_1050 = PTR_construction_vtable_0099e1d8 + 0x20;
  local_1030[0] = 5;
  uStack_1038 = 0;
  local_1040 = 0;
  uStack_1048 = 0;
  local_68 = 0;
  uStack_60 = 0x3f800000;
  uStack_78 = 0;
  local_80 = 0;
  uStack_1020 = 0;
  local_1028 = 0;
  uStack_1010 = 0;
  local_1018 = 0;
  local_1008 = 0x3f800000;
  folly::dynamic::folly::dynamic::destroy(local_88);
  local_1000 = 0x10410710;
  local_ffc = 0;
  uStack_f10 = 0;
  local_f18 = 0;
  uStack_efc = 0;
  uStack_f20 = 0;
  local_f28 = 0;
  uStack_f97 = 0;
  uStack_feb = 0;
  local_ff3 = 0;
  local_ffb = _s__00375408;
  uStack_fdb = 0;
  local_fe3 = 0;
  uStack_bb8 = _UNK_00371598;
  local_bc0 = _DAT_00371590;
  uStack_fcb = 0;
  local_fd3 = 0;
  uStack_fbb = 0;
  local_fc3 = 0;
  uStack_ac0 = _UNK_00470a7c;
  local_ac8 = _DAT_00470a74;
  uStack_ad0 = _UNK_00470a6c;
  local_ad8 = _DAT_00470a64;
  local_fa5 = 0x40004;
  uStack_f04 = 0;
  uStack_f00 = 0;
  uStack_f0c = 0;
  uStack_f08 = 0;
  uStack_ef0 = 0;
  local_ef8 = 0;
  local_ee8 = 0x7fc00000;
  local_ee0 = 0x7fc00000;
  local_ed8 = 0x7fc00000;
  local_ed0 = 0x7fc00000;
  local_ec8 = 0x7fc00000;
  local_ec0 = 0x7fc00000;
  local_eb8 = 0x7fc00000;
  local_eb0 = 0x7fc00000;
  local_ea8 = 0x7fc00000;
  local_ea0 = 0x7fc00000;
  local_e98 = 0x7fc00000;
  local_e90 = 0x7fc00000;
  local_e88 = 0x7fc00000;
  local_e80 = 0x7fc00000;
  local_e78 = 0x7fc00000;
  local_e70 = 0x7fc00000;
  uStack_e0f = 0;
  uStack_e10 = 0;
  uStack_dfc = 0;
  local_e04 = 0;
  uStack_dec = 0;
  uStack_df4 = 0;
  uStack_ddc = 0;
  local_de4 = 0;
  uStack_dcc = 0;
  uStack_dd4 = 0;
  uStack_dbc = 0;
  local_dc4 = 0;
  uStack_dac = 0;
  uStack_db4 = 0;
  local_da7 = 0;
  uStack_da4 = 0;
  local_d4c = 1;
  local_d4b = 0;
  local_d46 = 0x23;
  local_d0c = 0x3f800000;
  uStack_bf0 = 0;
  local_bf8 = 0;
  uStack_be0 = 0;
  uStack_be8 = 0;
  uStack_c00 = 0;
  local_c08 = 0;
  uStack_ae0 = _UNK_00470a5c;
  local_ae8 = _DAT_00470a54;
  local_bd4 = 0;
  uStack_af0 = _UNK_00470a4c;
  local_af8 = _DAT_00470a44;
  uStack_ba0 = 0;
  local_ba8 = 0;
  uStack_b90 = 0;
  uStack_b98 = 0;
  uStack_b80 = 0;
  local_b88 = 0;
  uStack_b70 = 0;
  uStack_b78 = 0;
  uStack_b60 = 0;
  local_b68 = 0;
  uStack_b50 = 0;
  uStack_b58 = 0;
  uStack_b40 = 0;
  local_b48 = 0;
  uStack_b30 = 0;
  uStack_b38 = 0;
  uStack_b20 = 0;
  local_b28 = 0;
  uStack_b10 = 0;
  uStack_b18 = 0;
  uStack_b00 = 0;
  local_b08 = 0;
  uStack_aa8 = 0;
  uStack_ab0 = 0;
  uStack_aaa = 0;
  local_ab8 = 0;
  uStack_fad = 0;
  uStack_fb5 = 0;
  uStack_fb3 = 0;
  local_fa1 = 0;
  local_f99 = 0;
  uStack_f98 = 0;
  uStack_f88 = 0;
  uStack_f90 = 0;
  local_f78 = 0;
  uStack_f80 = 0;
  local_f68 = 0;
  uStack_f70 = 0;
  local_f58 = 0;
  uStack_f60 = 0;
  local_f48 = 0;
  uStack_f50 = 0;
  uStack_f38 = 0;
  uStack_f40 = 0;
  local_f30 = 0;
  local_ee4 = 0;
  local_edc = 0;
  local_ed4 = 0;
  local_ecc = 0;
  local_ec4 = 0;
  local_ebc = 0;
  local_eb4 = 0;
  local_eac = 0;
  local_ea4 = 0;
  local_e9c = 0;
  local_e94 = 0;
  local_e8c = 0;
  local_e84 = 0;
  local_e7c = 0;
  local_e74 = 0;
  local_e6c = 0;
  local_e68 = 0;
  local_e64 = 0;
  local_e58 = 0;
  local_d9c = 0;
  local_d98 = 0;
  local_d94 = 0;
  local_d90 = 0;
  local_d8c = 0;
  local_d88 = 0;
  local_d70 = 0;
  uStack_e48 = 0;
  local_e50 = 0;
  uStack_e38 = 0;
  uStack_e40 = 0;
  uStack_e28 = 0;
  local_e30 = 0;
  uStack_e18 = 0;
  local_e17 = 0;
  uStack_e20 = 0;
  uStack_d60 = 0;
  local_d68 = 0;
  local_d58 = 0;
  local_d50 = 0;
  local_d47 = 0;
  uStack_d38 = 0;
  local_d40 = 0;
  uStack_d28 = 0;
  uStack_d30 = 0;
  uStack_d18 = 0;
  uStack_d11 = 0;
  local_d20 = 0;
  local_d04 = 0;
  local_cfc = 0;
  local_cf8 = 0;
  local_cf0 = 0;
  local_cec = 0;
  local_ce4 = 0;
  local_ce0 = 0;
  local_cd8 = 0;
  local_cd4 = 0;
  local_ccc = 0;
  local_cc8 = 0;
  local_cc0 = 0;
  local_cbc = 0;
  local_cb4 = 0;
  local_cb0 = 0;
  local_ca8 = 0;
  local_ca4 = 0;
  local_c9c = 0;
  local_c98 = 0;
  local_c90 = 0;
  local_c8c = 0;
  local_c84 = 0;
  local_c80 = 0;
  local_c78 = 0;
  local_c74 = 0;
  local_c6c = 0;
  local_c68 = 0;
  local_c64 = 0;
  local_c60 = 0;
  local_c5c = 0;
  local_c58 = 0;
  local_c54 = 0;
  local_c50 = 0;
  local_c4c = 0;
  local_c48 = 0;
  local_c44 = 0;
  local_c40 = 0;
  local_c3c = 0;
  local_c38 = 0;
  local_c34 = 0;
  local_c30 = 0;
  local_c2c = 0;
  local_c28 = 0;
  local_c24 = 0;
  local_c20 = 0;
  local_c1c = 0;
  local_c18 = 0;
  local_c14 = 0;
  local_c10 = 0;
  local_c0c = 0;
  local_bc8 = 0;
  local_bd8 = 0;
  local_bcc = 0;
  local_bb0 = 0;
  local_aa0 = 0;
  local_a9c = 0;
  local_a98 = 0;
  local_a80 = 0;
  uStack_a8c = 0;
  local_a94 = 0;
  local_a84 = 0;
  local_a78 = 0x101;
  local_a76 = 0;
  local_a74 = 0;
  local_a70 = 0;
  local_a10 = 0;
  local_a08 = 0;
  local_9a8 = 0;
  local_998 = 0;
  local_994 = 0;
  local_990 = 0;
  local_98c = 0;
  local_988 = 0;
  local_984 = 0;
  local_980 = 0;
  local_97c = 0;
  local_978 = 0;
  local_974 = 0;
  local_99c = 0;
  local_9a0 = 0;
  local_1050 = PTR_vtable_0099df80 + 0x20;
  local_970 = 0;
  local_964 = 0;
  local_96c = 0;
  local_968 = 0;
  local_918 = 0;
  local_95c = 0;
  pvStack_950 = (void *)0x0;
  local_958 = (void *)0x0;
  local_948 = 0;
  local_940 = 0;
  local_928 = 0;
  uStack_921 = 0;
  local_938 = (void *)0x0;
  local_930 = (void *)0x0;
                    /* try { // try from 00799648 to 0079965b has its CatchHandler @ 00799868 */
  facebook::react::EmojiPickerViewProps::EmojiPickerViewProps
            (aEStack_910,(PropsParserContext *)local_1060,(EmojiPickerViewProps *)&local_1050,
             (RawProps *)&local_118);
  if (local_1f8 != (void *)0x0) {
    local_1f0 = local_1f8;
    operator_delete(local_1f8);
  }
  pvVar3 = local_218;
  if (local_218 != (void *)0x0) {
    while (local_210 != pvVar3) {
      FUN_0079a054((void *)((long)local_210 + -0xd0));
      local_210 = (void *)((long)local_210 + -0xd0);
    }
    local_210 = pvVar3;
    operator_delete(local_218);
  }
  puVar5 = PTR_PTR_0099df88;
  FUN_0078917c(aEStack_910,PTR_PTR_0099df88 + 8);
  if (local_938 != (void *)0x0) {
    local_930 = local_938;
    operator_delete(local_938);
  }
  pvVar8 = local_958;
  pvVar3 = pvStack_950;
  if (local_958 != (void *)0x0) {
    while (pvVar3 != pvVar8) {
      FUN_0079a054((void *)((long)pvVar3 + -0xd0));
      pvVar3 = (void *)((long)pvVar3 + -0xd0);
    }
    pvStack_950 = pvVar8;
    operator_delete(local_958);
  }
  FUN_0078917c(&local_1050,puVar5 + 8);
  facebook::react::RawPropsParser::facebook::react::RawPropsParser::postPrepare(param_1);
  pvVar3 = local_140;
  puVar4 = (undefined8 *)local_130;
  while (puVar4 != (undefined8 *)0x0) {
    plVar7 = (long *)puVar4[6];
    pvVar8 = (void *)*puVar4;
    local_140 = pvVar3;
    if ((plVar7 == (long *)0x0) || (lVar6 = FUN_00757990(0xffffffffffffffff,plVar7 + 1), lVar6 != 0)
       ) {
      bVar1 = *(byte *)(puVar4 + 2);
    }
    else {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__ndk1::__shared_weak_count::__release_weak();
      bVar1 = *(byte *)(puVar4 + 2);
    }
    if ((bVar1 & 1) != 0) {
      operator_delete((void *)puVar4[4]);
    }
    operator_delete(puVar4);
    pvVar3 = local_140;
    puVar4 = (undefined8 *)pvVar8;
  }
  local_140 = (void *)0x0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)&uStack_178);
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)&uStack_1a8);
  std::__ndk1::mutex::~mutex((mutex *)&local_1d0);
  pvVar8 = local_a0;
  pvVar3 = local_98;
  if (local_a0 != (void *)0x0) {
    while (pvVar3 != pvVar8) {
      if (*(uint *)((long)pvVar3 + -8) != 0xffffffff) {
                    /* try { // try from 007997f8 to 00799803 has its CatchHandler @ 0079986c */
        (*(code *)(&PTR_FUN_0097fbf8)[*(uint *)((long)pvVar3 + -8)])
                  (&local_1050,(void *)((long)pvVar3 + -0x38));
      }
      *(undefined4 *)((long)pvVar3 + -8) = 0xffffffff;
      pvVar3 = (void *)((long)pvVar3 + -0x38);
    }
    local_98 = pvVar8;
    operator_delete(local_a0);
  }
  if (local_b8 != (void *)0x0) {
    pvStack_b0 = local_b8;
    operator_delete(local_b8);
  }
  folly::dynamic::folly::dynamic::destroy(local_f0);
  facebook::jsi::Value::~Value((Value *)local_100);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00799870  FUN_00799870 =====

void FUN_00799870(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 00799894  FUN_00799894 =====

undefined * FUN_00799894(void)

{
  return PTR_EmojiPickerViewComponentName_0099df78;
}


// ===== 007998a0  FUN_007998a0 =====

undefined * FUN_007998a0(void)

{
  return PTR_EmojiPickerViewComponentName_0099df78;
}


// ===== 007998ac  FUN_007998ac =====

undefined8 FUN_007998ac(void)

{
  return 0x61;
}


// ===== 007998b4  FUN_007998b4 =====

void FUN_007998b4(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 uStack_49;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_64 = (**(code **)(*param_2 + 0x20))();
  FUN_0079a270(&local_60,&uStack_49,param_3,param_4,&local_64);
                    /* try { // try from 0079991c to 00799923 has its CatchHandler @ 00799954 */
  (**(code **)(*param_2 + 0x60))(param_2,local_60);
  param_1[1] = uStack_58;
  *param_1 = local_60;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0079997c  FUN_0079997c =====

void FUN_0079997c(undefined8 *param_1,long *param_2,shared_ptr *param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *local_70;
  long *local_68;
  long *local_60;
  long *plStack_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_0079a524(&local_60,&local_70);
                    /* try { // try from 007999c8 to 007999d3 has its CatchHandler @ 00799a80 */
  (**(code **)(*local_60 + 0x10))(local_60,param_3,param_4);
  local_70 = local_60;
  local_68 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    FUN_00757d00(1,plStack_58 + 1);
  }
                    /* try { // try from 007999ec to 007999fb has its CatchHandler @ 00799a70 */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_70);
  plVar2 = local_68;
  if ((local_68 != (long *)0x0) &&
     (lVar3 = FUN_00757990(0xffffffffffffffff,local_68 + 1), lVar3 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 00799a38 to 00799a3f has its CatchHandler @ 00799a80 */
  (**(code **)(*param_2 + 0x60))(param_2,local_60);
  param_1[1] = plStack_58;
  *param_1 = local_60;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00799aa8  FUN_00799aa8 =====

void FUN_00799aa8(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00799ab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 00799abc  FUN_00799abc =====

void FUN_00799abc(undefined8 *param_1,long param_2,undefined8 param_3,long *param_4,
                 RawProps *param_5)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  char *pcVar6;
  int iVar7;
  ulong uVar8;
  char *pcVar9;
  long lVar10;
  long *local_100;
  long *local_f8;
  long *local_f0;
  long *plStack_e8;
  undefined1 uStack_d1;
  dynamic adStack_d0 [48];
  uint local_a0;
  int local_98 [6];
  long *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((*param_4 == 0) && (uVar8 = facebook::react::RawProps::isEmpty(), (uVar8 & 1) != 0)) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_28EmojiPickerViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_20EmojiPickerViewPropsENS0_27EmojiPickerViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd30
         & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_28EmojiPickerViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_20EmojiPickerViewPropsENS0_27EmojiPickerViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd30
                                   ), iVar7 != 0)) {
                    /* try { // try from 00799d88 to 00799d97 has its CatchHandler @ 00799dc4 */
      FUN_0079a99c(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_28EmojiPickerViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_20EmojiPickerViewPropsENS0_27EmojiPickerViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd28
                   ,adStack_d0);
      __cxa_atexit(FUN_0079a94c,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_28EmojiPickerViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_20EmojiPickerViewPropsENS0_27EmojiPickerViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd28
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_28EmojiPickerViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_20EmojiPickerViewPropsENS0_27EmojiPickerViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd30
                         );
    }
    lVar10 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_28EmojiPickerViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_20EmojiPickerViewPropsENS0_27EmojiPickerViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd28
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_28EmojiPickerViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_20EmojiPickerViewPropsENS0_27EmojiPickerViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd28
    ;
    param_1[1] = lVar10;
    if (lVar10 != 0) {
      FUN_00757d00(1,lVar10 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    FUN_0079a628(&local_f0,param_3,param_5,param_4);
                    /* try { // try from 00799b64 to 00799b77 has its CatchHandler @ 00799df8 */
    uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if (((uVar8 & 1) == 0) ||
       ((uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar8 & 1) == 0 ||
        (uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enablePropsUpdateReconciliationAndroid(), (uVar8 & 1) == 0)))) {
LAB_00799ba0:
      local_100 = local_f0;
      local_f8 = plStack_e8;
      if (plStack_e8 != (long *)0x0) {
        FUN_00757d00(1,plStack_e8 + 1);
      }
                    /* try { // try from 00799bb8 to 00799bc7 has its CatchHandler @ 00799de8 */
      FUN_0079a774(&local_100,param_5,param_4);
      plVar4 = local_f8;
      if ((local_f8 != (long *)0x0) &&
         (lVar10 = FUN_00757990(0xffffffffffffffff,local_f8 + 1), lVar10 == 0)) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 00799b88 to 00799b8f has its CatchHandler @ 00799dd8 */
      pcVar9 = (char *)(**(code **)(*local_f0 + 0x10))();
      iVar7 = strcmp(PTR_EmojiPickerViewComponentName_0099df78,pcVar9);
      if (iVar7 != 0) goto LAB_00799ba0;
      bVar3 = false;
    }
                    /* try { // try from 00799bfc to 00799bff has its CatchHandler @ 00799df8 */
    uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar8 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 00799c0c to 00799c27 has its CatchHandler @ 00799de4 */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(local_f0 + 4));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_f0;
      plVar5 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00799d68 to 00799d77 has its CatchHandler @ 00799ddc */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_00799e44;
      }
      for (; local_f0 = plVar4, plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (*(int *)(plVar5 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00799d48 to 00799d57 has its CatchHandler @ 00799e04 */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_00799e44;
        }
        uVar1 = 0x811c9dc5;
        uVar8 = (ulong)(*(byte *)(plVar5 + 3) >> 1);
        pcVar6 = (char *)((long)plVar5 + 0x19);
        pcVar9 = (char *)((long)plVar5 + 0x19);
        if ((*(byte *)(plVar5 + 3) & 1) != 0) {
          uVar8 = plVar5[4];
          pcVar6 = (char *)plVar5[5];
          pcVar9 = (char *)plVar5[5];
        }
        for (; uVar8 != 0; uVar8 = uVar8 - 1) {
          uVar1 = (uVar1 ^ (int)*pcVar6) * 0x1000193;
          pcVar6 = pcVar6 + 1;
        }
                    /* try { // try from 00799ca8 to 00799cb3 has its CatchHandler @ 00799e0c */
        folly::dynamic::dynamic(adStack_d0,(dynamic *)(plVar5 + 8));
        local_a0 = 0;
                    /* try { // try from 00799cb8 to 00799ccf has its CatchHandler @ 00799e10 */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (plVar4,param_3,uVar1,pcVar9,adStack_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 00799ce0 to 00799ceb has its CatchHandler @ 00799e00 */
          (*(code *)(&PTR_FUN_0097fbf8)[local_a0])(&uStack_d1,adStack_d0);
        }
        plVar4 = local_f0;
      }
      folly::dynamic::folly::dynamic::destroy(local_98);
    }
    param_1[1] = plStack_e8;
    *param_1 = local_f0;
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_00799e44:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00799e48  FUN_00799e48 =====

void FUN_00799e48(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 00799e50  FUN_00799e50 =====

void FUN_00799e50(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 00799e58  FUN_00799e58 =====

void FUN_00799e58(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined1 auStack_80 [8];
  long *local_78;
  long *local_70;
  long *local_68;
  undefined1 uStack_59;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  FUN_0078a610(auStack_80,&uStack_59,param_3 + 8,param_3 + 4);
                    /* try { // try from 00799ea0 to 00799ea7 has its CatchHandler @ 0079a028 */
  plVar4 = (long *)operator_new(0x68);
  plVar1 = plVar4 + 3;
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_00981908;
                    /* try { // try from 00799ec0 to 00799ecf has its CatchHandler @ 0079a010 */
  FUN_0079acd4(plVar1,auStack_80,param_2 + 8);
  local_70 = plVar1;
  local_68 = plVar4;
  if ((local_78 != (long *)0x0) &&
     (lVar5 = FUN_00757990(0xffffffffffffffff,local_78 + 1), lVar5 == 0)) {
    (**(code **)(*local_78 + 0x10))(local_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 00799f04 to 00799f0b has its CatchHandler @ 0079a000 */
  puVar6 = (undefined8 *)operator_new(0x1a0);
  puVar2 = puVar6 + 4;
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_0097fff0;
                    /* try { // try from 00799f24 to 00799f3b has its CatchHandler @ 00799fe8 */
  FUN_0079aed4(puVar2,param_3,&local_70,param_2 + 8,param_2);
  plVar1 = local_70;
  *param_1 = (long)puVar2;
  param_1[1] = (long)puVar6;
  local_90 = puVar2;
  local_88 = puVar6;
  FUN_00757d00(1,puVar6 + 2);
                    /* try { // try from 00799f54 to 00799f5f has its CatchHandler @ 00799fc8 */
  facebook::react::EventEmitter::facebook::react::EventEmitter::setShadowNodeFamily
            (plVar1,&local_90);
  if (local_88 != (undefined8 *)0x0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar1 = local_68;
  if ((local_68 != (long *)0x0) &&
     (lVar5 = FUN_00757990(0xffffffffffffffff,local_68 + 1), lVar5 == 0)) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0079a050  FUN_0079a050 =====

void FUN_0079a050(void)

{
  return;
}


// ===== 0079a054  FUN_0079a054 =====

void FUN_0079a054(long param_1)

{
  byte *pbVar1;
  long *plVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  if ((*(char *)(param_1 + 200) != '\0') && ((*(byte *)(param_1 + 0xb0) & 1) != 0)) {
    operator_delete(*(void **)(param_1 + 0xc0));
  }
  plVar2 = (long *)(param_1 + 0x90);
  if ((*(char *)(param_1 + 0xa8) != '\0') && (*plVar2 != 0)) {
    FUN_0079a198(plVar2);
    operator_delete((void *)*plVar2);
  }
  if ((*(char *)(param_1 + 0x88) != '\0') &&
     (pbVar3 = *(byte **)(param_1 + 0x70), pbVar3 != (byte *)0x0)) {
    pbVar1 = *(byte **)(param_1 + 0x78);
    pbVar4 = pbVar3;
    if (pbVar1 != pbVar3) {
      do {
        pbVar4 = pbVar1 + -0x18;
        if ((*pbVar4 & 1) != 0) {
          operator_delete(*(void **)(pbVar1 + -8));
        }
        pbVar1 = pbVar4;
      } while (pbVar4 != pbVar3);
      pbVar4 = *(byte **)(param_1 + 0x70);
    }
    *(byte **)(param_1 + 0x78) = pbVar3;
    operator_delete(pbVar4);
  }
  if ((*(char *)(param_1 + 0x68) != '\0') &&
     (pbVar3 = *(byte **)(param_1 + 0x50), pbVar3 != (byte *)0x0)) {
    pbVar1 = *(byte **)(param_1 + 0x58);
    pbVar4 = pbVar3;
    if (pbVar1 != pbVar3) {
      do {
        pbVar4 = pbVar1 + -0x18;
        if ((*pbVar4 & 1) != 0) {
          operator_delete(*(void **)(pbVar1 + -8));
        }
        pbVar1 = pbVar4;
      } while (pbVar4 != pbVar3);
      pbVar4 = *(byte **)(param_1 + 0x50);
    }
    *(byte **)(param_1 + 0x58) = pbVar3;
    operator_delete(pbVar4);
  }
  if ((*(char *)(param_1 + 0x40) != '\0') && ((*(byte *)(param_1 + 0x28) & 1) != 0)) {
    operator_delete(*(void **)(param_1 + 0x38));
  }
  if ((*(char *)(param_1 + 0x20) != '\0') && ((*(byte *)(param_1 + 8) & 1) != 0)) {
    operator_delete(*(void **)(param_1 + 0x18));
    return;
  }
  return;
}


// ===== 0079a198  FUN_0079a198 =====

void FUN_0079a198(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  for (lVar2 = param_1[1]; lVar2 != lVar1; lVar2 = lVar2 + -0x68) {
    if ((*(char *)(lVar2 + -0x10) != '\0') && ((*(byte *)(lVar2 + -0x28) & 1) != 0)) {
      operator_delete(*(void **)(lVar2 + -0x18));
    }
    if ((*(char *)(lVar2 + -0x30) != '\0') && ((*(byte *)(lVar2 + -0x48) & 1) != 0)) {
      operator_delete(*(void **)(lVar2 + -0x38));
    }
    if ((*(char *)(lVar2 + -0x50) != '\0') && ((*(byte *)(lVar2 + -0x68) & 1) != 0)) {
      operator_delete(*(void **)(lVar2 + -0x58));
    }
  }
  param_1[1] = lVar1;
  return;
}


// ===== 0079a220  FUN_0079a220 =====

void FUN_0079a220(long param_1)

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


// ===== 0079a270  FUN_0079a270 =====

void FUN_0079a270(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 *param_5)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined4 uVar8;
  
  puVar6 = (undefined8 *)operator_new(0x400);
  uVar8 = *param_5;
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_00981750;
                    /* try { // try from 0079a2b8 to 0079a2c7 has its CatchHandler @ 0079a360 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
            ((YogaLayoutableShadowNode *)(puVar6 + 3),param_3,param_4,uVar8);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_009817a0;
  uVar2 = *(uint *)((long)puVar6 + 0x6c);
  uVar1 = uVar2 & 3 | (uint)((*(byte *)(lVar7 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)puVar6 + 0x6c) = uVar2 & 0xfffffff8 | uVar1;
  if ((*(uint *)(lVar7 + 0x50) & 0x30000000) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    if (*(char *)(lVar7 + 0x5b4) != '\0') {
      uVar8 = *(undefined4 *)(lVar7 + 0x5b0);
    }
  }
  *(undefined4 *)(puVar6 + 10) = uVar8;
  cVar3 = *(char *)(lVar7 + 0x6b0);
  cVar4 = *(char *)(lVar7 + 0x6b1);
  cVar5 = *(char *)(lVar7 + 0x1e8);
  *param_1 = (YogaLayoutableShadowNode *)(puVar6 + 3);
  param_1[1] = puVar6;
  *(uint *)((long)puVar6 + 0x6c) =
       uVar2 & 0xfffff000 |
       uVar2 & 0x7f8 | uVar1 | (uint)((cVar3 != '\0' || cVar4 != '\0') || cVar5 != '\0') << 0xb;
  return;
}


// ===== 0079a37c  FUN_0079a37c =====

void FUN_0079a37c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00981750;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0079a38c  FUN_0079a38c =====

void FUN_0079a38c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00981750;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0079a3bc  FUN_0079a3bc =====

void FUN_0079a3bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0079a3c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 0079a3c8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0079a3cc  FUN_0079a3cc =====

void FUN_0079a3cc(long *param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = (void *)param_1[0x79];
  *param_1 = (long)(PTR_vtable_0099de98 + 0x10);
  if (pvVar4 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x7a];
    pvVar2 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        plVar3 = *(long **)((long)pvVar5 + -8);
        if ((plVar3 != (long *)0x0) &&
           (lVar1 = FUN_00757990(0xffffffffffffffff,plVar3 + 1), lVar1 == 0)) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
        pvVar5 = (void *)((long)pvVar5 + -0x10);
      } while (pvVar5 != pvVar4);
      pvVar2 = (void *)param_1[0x79];
    }
    param_1[0x7a] = (long)pvVar4;
    operator_delete(pvVar2);
  }
  pvVar4 = (void *)param_1[0x73];
  if (pvVar4 != (void *)0x0) {
    param_1[0x74] = (long)pvVar4;
    operator_delete(pvVar4);
  }
  FUN_007890e8(param_1 + 0x23);
  FUN_00789784(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0079a48c  FUN_0079a48c =====

void FUN_0079a48c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  facebook::react::LayoutableShadowNode::getLayoutMetrics();
  facebook::react::BaseViewProps::resolveTransform(*(LayoutMetrics **)(param_1 + 8));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0079a4f4  FUN_0079a4f4 =====

bool FUN_0079a4f4(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 0079a50c  FUN_0079a50c =====

bool FUN_0079a50c(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 0079a524  FUN_0079a524 =====

void FUN_0079a524(undefined8 *param_1,undefined8 param_2,ShadowNode *param_3,
                 ShadowNodeFragment *param_4)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined4 uVar8;
  
  puVar6 = (undefined8 *)operator_new(0x400);
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_00981750;
                    /* try { // try from 0079a564 to 0079a573 has its CatchHandler @ 0079a60c */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
            ((YogaLayoutableShadowNode *)(puVar6 + 3),param_3,param_4);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_009817a0;
  uVar2 = *(uint *)((long)puVar6 + 0x6c);
  uVar1 = uVar2 & 3 | (uint)((*(byte *)(lVar7 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)puVar6 + 0x6c) = uVar2 & 0xfffffff8 | uVar1;
  if ((*(uint *)(lVar7 + 0x50) & 0x30000000) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    if (*(char *)(lVar7 + 0x5b4) != '\0') {
      uVar8 = *(undefined4 *)(lVar7 + 0x5b0);
    }
  }
  *(undefined4 *)(puVar6 + 10) = uVar8;
  cVar3 = *(char *)(lVar7 + 0x6b0);
  cVar4 = *(char *)(lVar7 + 0x6b1);
  cVar5 = *(char *)(lVar7 + 0x1e8);
  *param_1 = (YogaLayoutableShadowNode *)(puVar6 + 3);
  param_1[1] = puVar6;
  *(uint *)((long)puVar6 + 0x6c) =
       uVar2 & 0xfffff000 |
       uVar2 & 0x7f8 | uVar1 | (uint)((cVar3 != '\0' || cVar4 != '\0') || cVar5 != '\0') << 0xb;
  return;
}


// ===== 0079a628  FUN_0079a628 =====

void FUN_0079a628(undefined8 *param_1,PropsParserContext *param_2,RawProps *param_3,long *param_4)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  EmojiPickerViewProps *pEVar4;
  undefined1 uStack_59;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pEVar4 = (EmojiPickerViewProps *)*param_4;
  if (pEVar4 == (EmojiPickerViewProps *)0x0) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_28EmojiPickerViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_20EmojiPickerViewPropsENS0_27EmojiPickerViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd30
         & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_28EmojiPickerViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_20EmojiPickerViewPropsENS0_27EmojiPickerViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd30
                                   ), iVar2 != 0)) {
                    /* try { // try from 0079a6f4 to 0079a703 has its CatchHandler @ 0079a730 */
      FUN_0079a99c(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_28EmojiPickerViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_20EmojiPickerViewPropsENS0_27EmojiPickerViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd28
                   ,&uStack_59);
      __cxa_atexit(FUN_0079a94c,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_28EmojiPickerViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_20EmojiPickerViewPropsENS0_27EmojiPickerViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd28
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_28EmojiPickerViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_20EmojiPickerViewPropsENS0_27EmojiPickerViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd30
                         );
    }
    pEVar4 = *(EmojiPickerViewProps **)
              PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_28EmojiPickerViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_20EmojiPickerViewPropsENS0_27EmojiPickerViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd28
    ;
  }
  puVar3 = (undefined8 *)operator_new(0x758);
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_009818b8;
                    /* try { // try from 0079a6a0 to 0079a6b3 has its CatchHandler @ 0079a744 */
  facebook::react::EmojiPickerViewProps::EmojiPickerViewProps
            ((EmojiPickerViewProps *)(puVar3 + 3),param_2,pEVar4,param_3);
  *param_1 = (EmojiPickerViewProps *)(puVar3 + 3);
  param_1[1] = puVar3;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0079a774  FUN_0079a774 =====

void FUN_0079a774(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  plVar3 = local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar5 = *param_1;
  if (*param_3 == 0) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_28EmojiPickerViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_20EmojiPickerViewPropsENS0_27EmojiPickerViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd30
         & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_28EmojiPickerViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_20EmojiPickerViewPropsENS0_27EmojiPickerViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd30
                                   ), iVar2 != 0)) {
                    /* try { // try from 0079a858 to 0079a867 has its CatchHandler @ 0079a894 */
      FUN_0079a99c(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_28EmojiPickerViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_20EmojiPickerViewPropsENS0_27EmojiPickerViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd28
                   ,local_70);
      __cxa_atexit(FUN_0079a94c,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_28EmojiPickerViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_20EmojiPickerViewPropsENS0_27EmojiPickerViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd28
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_28EmojiPickerViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_20EmojiPickerViewPropsENS0_27EmojiPickerViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd30
                         );
    }
    local_50 = (long *)0x0;
                    /* try { // try from 0079a7e4 to 0079a7f7 has its CatchHandler @ 0079a8a8 */
    facebook::react::Props::facebook::react::Props::initializeDynamicProps
              (uVar5,*(undefined8 *)
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_28EmojiPickerViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_20EmojiPickerViewPropsENS0_27EmojiPickerViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd28
               ,param_2,local_70);
  }
  else {
    local_50 = (long *)0x0;
                    /* try { // try from 0079a7a8 to 0079a7bf has its CatchHandler @ 0079a8ac */
    facebook::react::Props::facebook::react::Props::initializeDynamicProps
              (uVar5,*param_3,param_2,local_70);
  }
  if (local_50 == local_70) {
    lVar4 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_0079a824;
    lVar4 = 5;
    plVar3 = local_50;
  }
  (**(code **)(*plVar3 + lVar4 * 8))();
LAB_0079a824:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0079a8fc  FUN_0079a8fc =====

void FUN_0079a8fc(long param_1)

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


// ===== 0079a94c  FUN_0079a94c =====

void FUN_0079a94c(long param_1)

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


// ===== 0079a99c  FUN_0079a99c =====

void FUN_0079a99c(undefined8 *param_1)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x758);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_00981868;
  memset(__s,0,0x740);
                    /* try { // try from 0079a9e0 to 0079a9f3 has its CatchHandler @ 0079aa98 */
  FUN_00788b10(__s,PTR_PTR_0099df88 + 0x10);
  *(undefined4 *)((long)puVar2 + 0x5f4) = 0;
  *(undefined1 *)(puVar2 + 0xbf) = 0;
  *(undefined1 *)(puVar2 + 0xcb) = 0;
  *(undefined1 *)(puVar2 + 0xcc) = 0;
  *(undefined1 *)(puVar2 + 0xd8) = 0;
  *(undefined1 *)(puVar2 + 0xda) = 0;
  *(undefined1 *)((long)puVar2 + 0x6d4) = 0;
  *(undefined1 *)(puVar2 + 0xdb) = 0;
  *(undefined1 *)((long)puVar2 + 0x6dc) = 0;
  *(undefined1 *)(puVar2 + 0xdc) = 0;
  *(undefined1 *)((long)puVar2 + 0x6e4) = 0;
  *(undefined1 *)(puVar2 + 0xdd) = 0;
  *(undefined1 *)((long)puVar2 + 0x6ec) = 0;
  *(undefined1 *)(puVar2 + 0xde) = 0;
  *(undefined1 *)((long)puVar2 + 0x6f4) = 0;
  puVar1 = PTR_vtable_0099df80;
  *(undefined4 *)(puVar2 + 0xd9) = 0;
  *(undefined2 *)((long)puVar2 + 0x6cc) = 0;
  *(undefined2 *)(puVar2 + 0xdf) = 0;
  puVar2[3] = puVar1 + 0x20;
  *(undefined8 *)((long)puVar2 + 0x704) = 0;
  *(undefined4 *)((long)puVar2 + 0x6fc) = 0;
  *(undefined1 *)(puVar2 + 0xe0) = 0;
  puVar2[0xea] = 0;
  *(undefined1 *)((long)puVar2 + 0x70c) = 0;
  puVar2[0xe4] = 0;
  *(undefined4 *)(puVar2 + 0xe5) = 0;
  puVar2[0xe3] = 0;
  puVar2[0xe2] = 0;
  puVar2[0xe8] = 0;
  *(undefined4 *)((long)puVar2 + 0x747) = 0;
  puVar2[0xe7] = 0;
  puVar2[0xe6] = 0;
  *param_1 = __s;
  param_1[1] = puVar2;
  return;
}


// ===== 0079aab4  FUN_0079aab4 =====

void FUN_0079aab4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00981868;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0079aac4  FUN_0079aac4 =====

void FUN_0079aac4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00981868;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0079aaf4  FUN_0079aaf4 =====

void FUN_0079aaf4(long param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar1 = *(void **)(param_1 + 0x730);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x738) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + 0x710);
  if (pvVar1 != (void *)0x0) {
    pvVar3 = *(void **)(param_1 + 0x718);
    pvVar2 = pvVar1;
    if (pvVar3 != pvVar1) {
      do {
        pvVar3 = (void *)((long)pvVar3 + -0xd0);
        FUN_0079a054(pvVar3);
      } while (pvVar3 != pvVar1);
      pvVar2 = *(void **)(param_1 + 0x710);
    }
    *(void **)(param_1 + 0x718) = pvVar1;
    operator_delete(pvVar2);
  }
  FUN_0078917c(param_1 + 0x18,PTR_PTR_0099df88 + 8);
  return;
}


// ===== 0079ab70  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0079ab74  FUN_0079ab74 =====

void FUN_0079ab74(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009818b8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0079ab84  FUN_0079ab84 =====

void FUN_0079ab84(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009818b8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0079abb4  FUN_0079abb4 =====

void FUN_0079abb4(long param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar1 = *(void **)(param_1 + 0x730);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x738) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + 0x710);
  if (pvVar1 != (void *)0x0) {
    pvVar3 = *(void **)(param_1 + 0x718);
    pvVar2 = pvVar1;
    if (pvVar3 != pvVar1) {
      do {
        pvVar3 = (void *)((long)pvVar3 + -0xd0);
        FUN_0079a054(pvVar3);
      } while (pvVar3 != pvVar1);
      pvVar2 = *(void **)(param_1 + 0x710);
    }
    *(void **)(param_1 + 0x718) = pvVar1;
    operator_delete(pvVar2);
  }
  FUN_0078917c(param_1 + 0x18,PTR_PTR_0099df88 + 8);
  return;
}


// ===== 0079ac30  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0079ac34  FUN_0079ac34 =====

void FUN_0079ac34(long param_1)

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


// ===== 0079ac84  FUN_0079ac84 =====

void FUN_0079ac84(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00981908;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0079ac94  FUN_0079ac94 =====

void FUN_0079ac94(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00981908;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0079acc4  FUN_0079acc4 =====

void FUN_0079acc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0079accc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 0079acd0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0079acd4  FUN_0079acd4 =====

EventEmitter * FUN_0079acd4(EventEmitter *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long *plStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plStack_48 = (long *)param_2[1];
  local_50 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  local_60 = *param_3;
  local_58 = param_3[1];
  if (local_58 != 0) {
    FUN_00757d00(1,local_58 + 0x10);
  }
                    /* try { // try from 0079ad1c to 0079ad2b has its CatchHandler @ 0079adf0 */
  facebook::react::EventEmitter::EventEmitter(param_1,&local_50,&local_60);
  *(undefined ***)param_1 = &PTR_FUN_0097ff10;
                    /* try { // try from 0079ad38 to 0079ad3f has its CatchHandler @ 0079ade0 */
  puVar3 = (undefined8 *)operator_new(0x58);
  *puVar3 = &PTR_FUN_0097ff30;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[4] = 0;
  puVar3[3] = 0;
  *(undefined8 **)(param_1 + 0x40) = puVar3 + 3;
  *(undefined8 **)(param_1 + 0x48) = puVar3;
  puVar3[6] = 0;
  puVar3[5] = 0;
  puVar3[8] = 0;
  puVar3[7] = 0;
  *(undefined8 *)((long)puVar3 + 0x4c) = 0;
  *(undefined8 *)((long)puVar3 + 0x44) = 0;
  *(undefined ***)param_1 = &PTR_FUN_00981958;
  if (local_58 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = plStack_48;
  if ((plStack_48 != (long *)0x0) &&
     (lVar4 = FUN_00757990(0xffffffffffffffff,plStack_48 + 1), lVar4 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0079ae24  FUN_0079ae24 =====

void FUN_0079ae24(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[9];
  *param_1 = &PTR_FUN_0097ff10;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *param_1 = &PTR_FUN_0097ff80;
  if (param_1[6] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[4] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


// ===== 0079aed4  FUN_0079aed4 =====

ShadowNodeFamily *
FUN_0079aed4(ShadowNodeFamily *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
            undefined8 param_5)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  long *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_58 = *param_3;
  local_50 = (long *)param_3[1];
  if (local_50 != (long *)0x0) {
    FUN_00757d00(1,local_50 + 1);
  }
  local_68 = *param_4;
  local_60 = param_4[1];
  if (local_60 != 0) {
    FUN_00757d00(1,local_60 + 0x10);
  }
                    /* try { // try from 0079af38 to 0079af4f has its CatchHandler @ 0079afb8 */
  facebook::react::ShadowNodeFamily::ShadowNodeFamily(param_1,param_2,&local_58,&local_68,param_5);
  if (local_60 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = local_50;
  if ((local_50 != (long *)0x0) &&
     (lVar3 = FUN_00757990(0xffffffffffffffff,local_50 + 1), lVar3 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0079aff0  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_31EmojiPickerRowViewComponentNameEEEENS0_23EmojiPickerRowViewPropsENS0_30EmojiPickerRowViewEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE =====

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_31EmojiPickerRowViewComponentNameEEEENS0_23EmojiPickerRowViewPropsENS0_30EmojiPickerRowViewEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE
               (undefined8 *param_1)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_0079b044(&local_30);
  *param_1 = local_30;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0079b044  FUN_0079b044 =====

void FUN_0079b044(undefined8 *param_1,ComponentDescriptorParameters *param_2)

{
  long lVar1;
  ComponentDescriptor *this;
  void *local_90;
  void *pvStack_88;
  undefined8 local_80;
  void *pvStack_78;
  void *local_70;
  undefined8 uStack_68;
  void *local_60;
  void *pvStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (ComponentDescriptor *)operator_new(0x88);
  pvStack_78 = (void *)0x0;
  local_80 = 0;
  uStack_68 = 0;
  local_70 = (void *)0x0;
  pvStack_58 = (void *)0x0;
  local_60 = (void *)0x0;
  uStack_48 = 0;
  uStack_50 = 0;
  pvStack_88 = (void *)0x0;
  local_90 = (void *)0x0;
                    /* try { // try from 0079b088 to 0079b093 has its CatchHandler @ 0079b100 */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_90);
  *(undefined ***)this = &PTR_FUN_00981990;
  FUN_0079b130(this + 0x38);
  *param_1 = this;
  if (local_60 != (void *)0x0) {
    pvStack_58 = local_60;
    operator_delete(local_60);
  }
  if (pvStack_78 != (void *)0x0) {
    local_70 = pvStack_78;
    operator_delete(pvStack_78);
  }
  if (local_90 != (void *)0x0) {
    pvStack_88 = local_90;
    operator_delete(local_90);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0079b130  FUN_0079b130 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0079b130(undefined8 param_1)

{
  byte bVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  void *pvVar8;
  undefined4 local_1000 [2];
  undefined8 *local_ff8;
  undefined *local_ff0;
  undefined8 uStack_fe8;
  undefined8 local_fe0;
  undefined8 uStack_fd8;
  undefined4 local_fd0 [2];
  undefined8 local_fc8;
  undefined8 uStack_fc0;
  undefined8 local_fb8;
  undefined8 uStack_fb0;
  undefined4 local_fa8;
  undefined4 local_fa0;
  undefined1 local_f9c;
  undefined8 local_f9b;
  undefined8 local_f93;
  undefined8 uStack_f8b;
  undefined8 local_f83;
  undefined8 uStack_f7b;
  undefined8 local_f73;
  undefined8 uStack_f6b;
  undefined8 local_f63;
  undefined6 uStack_f5b;
  undefined2 uStack_f55;
  undefined6 uStack_f53;
  undefined8 uStack_f4d;
  undefined4 local_f45;
  undefined8 local_f41;
  undefined1 local_f39;
  undefined1 uStack_f38;
  undefined7 uStack_f37;
  undefined8 uStack_f30;
  undefined8 uStack_f28;
  undefined8 uStack_f20;
  undefined8 local_f18;
  undefined8 uStack_f10;
  undefined8 local_f08;
  undefined8 uStack_f00;
  undefined8 local_ef8;
  undefined8 uStack_ef0;
  undefined8 local_ee8;
  undefined8 uStack_ee0;
  undefined8 uStack_ed8;
  undefined8 local_ed0;
  undefined8 local_ec8;
  undefined8 uStack_ec0;
  undefined8 local_eb8;
  undefined4 uStack_eb0;
  undefined4 uStack_eac;
  undefined4 uStack_ea8;
  undefined4 uStack_ea4;
  undefined4 uStack_ea0;
  undefined4 uStack_e9c;
  undefined8 local_e98;
  undefined8 uStack_e90;
  undefined4 local_e88;
  undefined1 local_e84;
  undefined4 local_e80;
  undefined1 local_e7c;
  undefined4 local_e78;
  undefined1 local_e74;
  undefined4 local_e70;
  undefined1 local_e6c;
  undefined4 local_e68;
  undefined1 local_e64;
  undefined4 local_e60;
  undefined1 local_e5c;
  undefined4 local_e58;
  undefined1 local_e54;
  undefined4 local_e50;
  undefined1 local_e4c;
  undefined4 local_e48;
  undefined1 local_e44;
  undefined4 local_e40;
  undefined1 local_e3c;
  undefined4 local_e38;
  undefined1 local_e34;
  undefined4 local_e30;
  undefined1 local_e2c;
  undefined4 local_e28;
  undefined1 local_e24;
  undefined4 local_e20;
  undefined1 local_e1c;
  undefined4 local_e18;
  undefined1 local_e14;
  undefined4 local_e10;
  undefined1 local_e0c;
  undefined1 local_e08;
  undefined1 local_e04;
  undefined1 local_df8;
  undefined8 local_df0;
  undefined8 uStack_de8;
  undefined8 uStack_de0;
  undefined8 uStack_dd8;
  undefined8 local_dd0;
  undefined8 uStack_dc8;
  undefined8 uStack_dc0;
  undefined1 uStack_db8;
  undefined7 local_db7;
  undefined1 uStack_db0;
  undefined8 uStack_daf;
  undefined8 local_da4;
  undefined8 uStack_d9c;
  undefined8 uStack_d94;
  undefined8 uStack_d8c;
  undefined8 local_d84;
  undefined8 uStack_d7c;
  undefined8 uStack_d74;
  undefined8 uStack_d6c;
  undefined8 local_d64;
  undefined8 uStack_d5c;
  undefined8 uStack_d54;
  undefined5 uStack_d4c;
  undefined3 local_d47;
  undefined5 uStack_d44;
  undefined1 local_d3c;
  undefined1 local_d38;
  undefined1 local_d34;
  undefined1 local_d30;
  undefined1 local_d2c;
  undefined1 local_d28;
  undefined1 local_d10;
  undefined8 local_d08;
  undefined8 uStack_d00;
  undefined8 local_cf8;
  undefined4 local_cf0;
  undefined1 local_cec;
  undefined4 local_ceb;
  undefined1 local_ce7;
  undefined1 local_ce6;
  undefined8 local_ce0;
  undefined8 uStack_cd8;
  undefined8 uStack_cd0;
  undefined8 uStack_cc8;
  undefined8 local_cc0;
  undefined7 uStack_cb8;
  undefined4 uStack_cb1;
  undefined8 local_cac;
  undefined1 local_ca4;
  undefined1 local_c9c;
  undefined1 local_c98;
  undefined1 local_c90;
  undefined1 local_c8c;
  undefined1 local_c84;
  undefined1 local_c80;
  undefined1 local_c78;
  undefined1 local_c74;
  undefined1 local_c6c;
  undefined1 local_c68;
  undefined1 local_c60;
  undefined1 local_c5c;
  undefined1 local_c54;
  undefined1 local_c50;
  undefined1 local_c48;
  undefined1 local_c44;
  undefined1 local_c3c;
  undefined1 local_c38;
  undefined1 local_c30;
  undefined1 local_c2c;
  undefined1 local_c24;
  undefined1 local_c20;
  undefined1 local_c18;
  undefined1 local_c14;
  undefined1 local_c0c;
  undefined1 local_c08;
  undefined1 local_c04;
  undefined1 local_c00;
  undefined1 local_bfc;
  undefined1 local_bf8;
  undefined1 local_bf4;
  undefined1 local_bf0;
  undefined1 local_bec;
  undefined1 local_be8;
  undefined1 local_be4;
  undefined1 local_be0;
  undefined1 local_bdc;
  undefined1 local_bd8;
  undefined1 local_bd4;
  undefined1 local_bd0;
  undefined1 local_bcc;
  undefined1 local_bc8;
  undefined1 local_bc4;
  undefined1 local_bc0;
  undefined1 local_bbc;
  undefined1 local_bb8;
  undefined1 local_bb4;
  undefined1 local_bb0;
  undefined1 local_bac;
  undefined8 local_ba8;
  undefined8 uStack_ba0;
  undefined8 local_b98;
  undefined8 uStack_b90;
  undefined8 uStack_b88;
  undefined8 uStack_b80;
  undefined2 local_b78;
  undefined8 local_b74;
  undefined1 local_b6c;
  undefined8 local_b68;
  undefined8 local_b60;
  undefined8 uStack_b58;
  undefined1 local_b50;
  undefined8 local_b48;
  undefined8 uStack_b40;
  undefined8 uStack_b38;
  undefined8 uStack_b30;
  undefined8 local_b28;
  undefined8 uStack_b20;
  undefined8 uStack_b18;
  undefined8 uStack_b10;
  undefined8 local_b08;
  undefined8 uStack_b00;
  undefined8 uStack_af8;
  undefined8 uStack_af0;
  undefined8 local_ae8;
  undefined8 uStack_ae0;
  undefined8 uStack_ad8;
  undefined8 uStack_ad0;
  undefined8 local_ac8;
  undefined8 uStack_ac0;
  undefined8 uStack_ab8;
  undefined8 uStack_ab0;
  undefined8 local_aa8;
  undefined8 uStack_aa0;
  undefined8 local_a98;
  undefined8 uStack_a90;
  undefined8 local_a88;
  undefined8 uStack_a80;
  undefined8 local_a78;
  undefined8 uStack_a70;
  undefined8 local_a68;
  undefined8 uStack_a60;
  undefined8 local_a58;
  undefined6 uStack_a50;
  undefined2 uStack_a4a;
  undefined6 uStack_a48;
  undefined1 local_a40;
  undefined1 local_a3c;
  undefined1 local_a38;
  undefined8 local_a34;
  undefined8 uStack_a2c;
  undefined1 local_a24;
  undefined8 local_a20;
  undefined2 local_a18;
  undefined1 local_a16;
  undefined4 local_a14;
  undefined1 local_a10;
  undefined1 local_9b0;
  undefined1 local_9a8;
  undefined1 local_948;
  undefined4 local_940;
  undefined2 local_93c;
  undefined1 local_938;
  undefined1 local_934;
  undefined1 local_930;
  undefined1 local_92c;
  undefined1 local_928;
  undefined1 local_924;
  undefined1 local_920;
  undefined1 local_91c;
  undefined1 local_918;
  undefined1 local_914;
  undefined8 local_910;
  undefined4 local_908;
  undefined8 local_900;
  undefined8 local_8f8;
  undefined8 local_8f0;
  undefined1 local_8e8;
  EmojiPickerRowViewProps aEStack_8e0 [1776];
  undefined8 auStack_1f0 [4];
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
  void *local_140;
  undefined8 uStack_138;
  void *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined4 local_100 [4];
  undefined4 local_f0 [2];
  undefined8 local_e8;
  undefined4 local_c0;
  void *local_b8;
  void *pvStack_b0;
  undefined8 uStack_a8;
  void *local_a0;
  void *local_98;
  undefined8 uStack_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100[0] = 0;
  local_f0[0] = 0;
  local_e8 = 0;
  local_c0 = 0;
  pvStack_b0 = (void *)0x0;
  local_b8 = (void *)0x0;
  local_a0 = (void *)0x0;
  uStack_a8 = 0;
  uStack_90 = 0;
  local_98 = (void *)0x0;
  local_120 = 0;
  uStack_128 = 0;
  local_130 = (void *)0x0;
  uStack_138 = 0;
  local_140 = (void *)0x0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_168 = 0;
  local_170 = 0;
  uStack_178 = 0;
  local_180 = 0;
  uStack_188 = 0;
  local_190 = 0;
  uStack_198 = 0;
  local_1a0 = 0;
  uStack_1a8 = 0;
  local_1b0 = 0;
  uStack_1b8 = 0;
  local_1c0 = 0;
  uStack_1c8 = 0;
  local_1d0 = 0;
                    /* try { // try from 0079b1b8 to 0079b1c3 has its CatchHandler @ 0079b770 */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1d0);
  local_120 = CONCAT44(local_120._4_4_,0x3f800000);
  local_1000[0] = 0xffffffff;
  uStack_128 = 0;
  local_130 = (void *)0x0;
  uStack_138 = 0;
  local_140 = (void *)0x0;
  local_ff8 = &local_1d0;
  facebook::react::RawProps::facebook::react::RawProps::parse(&local_118,param_1);
  memset(local_fd0,0,0x6f0);
  local_88 = (undefined8 *)CONCAT44(local_88._4_4_,5);
  local_70 = 0;
  local_ff0 = PTR_construction_vtable_0099e1e0 + 0x20;
  local_fd0[0] = 5;
  uStack_fd8 = 0;
  local_fe0 = 0;
  uStack_fe8 = 0;
  local_68 = 0;
  uStack_60 = 0x3f800000;
  uStack_78 = 0;
  local_80 = 0;
  uStack_fc0 = 0;
  local_fc8 = 0;
  uStack_fb0 = 0;
  local_fb8 = 0;
  local_fa8 = 0x3f800000;
  folly::dynamic::folly::dynamic::destroy(&local_88);
  local_f9c = 0;
  local_f41 = 0;
  uStack_a60 = _UNK_00470a7c;
  local_a68 = _DAT_00470a74;
  local_f9b = _s__00375408;
  uStack_b58 = _UNK_00371598;
  local_b60 = _DAT_00371590;
  uStack_a70 = _UNK_00470a6c;
  local_a78 = _DAT_00470a64;
  local_e84 = 0;
  uStack_a80 = _UNK_00470a5c;
  local_a88 = _DAT_00470a54;
  uStack_a90 = _UNK_00470a4c;
  local_a98 = _DAT_00470a44;
  uStack_a48 = 0;
  local_e7c = 0;
  uStack_eb0 = 0;
  local_eb8 = 0;
  uStack_e9c = 0;
  uStack_ec0 = 0;
  local_ec8 = 0;
  uStack_a50 = 0;
  uStack_a4a = 0;
  local_a58 = 0;
  local_fa0 = 0x10410710;
  local_f45 = 0x40004;
  uStack_ea4 = 0;
  uStack_ea0 = 0;
  uStack_eac = 0;
  uStack_ea8 = 0;
  uStack_e90 = 0;
  local_e98 = 0;
  local_e88 = 0x7fc00000;
  local_e80 = 0x7fc00000;
  local_e78 = 0x7fc00000;
  local_e70 = 0x7fc00000;
  local_e68 = 0x7fc00000;
  local_e60 = 0x7fc00000;
  local_e58 = 0x7fc00000;
  local_e50 = 0x7fc00000;
  local_e48 = 0x7fc00000;
  local_e40 = 0x7fc00000;
  local_e38 = 0x7fc00000;
  local_e30 = 0x7fc00000;
  local_e28 = 0x7fc00000;
  local_e20 = 0x7fc00000;
  local_e18 = 0x7fc00000;
  local_e10 = 0x7fc00000;
  uStack_daf = 0;
  uStack_db0 = 0;
  uStack_d9c = 0;
  local_da4 = 0;
  uStack_d8c = 0;
  uStack_d94 = 0;
  uStack_d7c = 0;
  local_d84 = 0;
  uStack_d6c = 0;
  uStack_d74 = 0;
  uStack_d5c = 0;
  local_d64 = 0;
  uStack_d4c = 0;
  uStack_d54 = 0;
  local_d47 = 0;
  uStack_d44 = 0;
  local_cec = 1;
  local_ceb = 0;
  local_ce6 = 0x23;
  local_cac = 0x3f800000;
  uStack_b90 = 0;
  local_b98 = 0;
  uStack_b80 = 0;
  uStack_b88 = 0;
  uStack_ba0 = 0;
  local_ba8 = 0;
  local_b74 = 0;
  uStack_b40 = 0;
  local_b48 = 0;
  uStack_b30 = 0;
  uStack_b38 = 0;
  uStack_b20 = 0;
  local_b28 = 0;
  uStack_b10 = 0;
  uStack_b18 = 0;
  uStack_b00 = 0;
  local_b08 = 0;
  uStack_af0 = 0;
  uStack_af8 = 0;
  uStack_ae0 = 0;
  local_ae8 = 0;
  uStack_ad0 = 0;
  uStack_ad8 = 0;
  uStack_ac0 = 0;
  local_ac8 = 0;
  uStack_ab0 = 0;
  uStack_ab8 = 0;
  uStack_aa0 = 0;
  local_aa8 = 0;
  uStack_f37 = 0;
  uStack_f8b = 0;
  local_f93 = 0;
  uStack_f7b = 0;
  local_f83 = 0;
  uStack_f6b = 0;
  local_f73 = 0;
  uStack_f5b = 0;
  local_f63 = 0;
  uStack_f4d = 0;
  uStack_f55 = 0;
  uStack_f53 = 0;
  local_f39 = 0;
  uStack_f38 = 0;
  uStack_f28 = 0;
  uStack_f30 = 0;
  local_f18 = 0;
  uStack_f20 = 0;
  local_f08 = 0;
  uStack_f10 = 0;
  local_ef8 = 0;
  uStack_f00 = 0;
  local_ee8 = 0;
  uStack_ef0 = 0;
  uStack_ed8 = 0;
  uStack_ee0 = 0;
  local_ed0 = 0;
  local_e74 = 0;
  local_e6c = 0;
  local_e64 = 0;
  local_e5c = 0;
  local_e54 = 0;
  local_e4c = 0;
  local_e44 = 0;
  local_e3c = 0;
  local_e34 = 0;
  local_e2c = 0;
  local_e24 = 0;
  local_e1c = 0;
  local_e14 = 0;
  local_e0c = 0;
  local_e08 = 0;
  local_e04 = 0;
  local_df8 = 0;
  local_d3c = 0;
  local_d38 = 0;
  local_d34 = 0;
  local_d30 = 0;
  local_d2c = 0;
  local_d28 = 0;
  local_d10 = 0;
  uStack_de8 = 0;
  local_df0 = 0;
  uStack_dd8 = 0;
  uStack_de0 = 0;
  uStack_dc8 = 0;
  local_dd0 = 0;
  uStack_db8 = 0;
  local_db7 = 0;
  uStack_dc0 = 0;
  uStack_d00 = 0;
  local_d08 = 0;
  local_cf8 = 0;
  local_cf0 = 0;
  local_ce7 = 0;
  uStack_cd8 = 0;
  local_ce0 = 0;
  uStack_cc8 = 0;
  uStack_cd0 = 0;
  uStack_cb8 = 0;
  uStack_cb1 = 0;
  local_cc0 = 0;
  local_ca4 = 0;
  local_c9c = 0;
  local_c98 = 0;
  local_c90 = 0;
  local_c8c = 0;
  local_c84 = 0;
  local_c80 = 0;
  local_c78 = 0;
  local_c74 = 0;
  local_c6c = 0;
  local_c68 = 0;
  local_c60 = 0;
  local_c5c = 0;
  local_c54 = 0;
  local_c50 = 0;
  local_c48 = 0;
  local_c44 = 0;
  local_c3c = 0;
  local_c38 = 0;
  local_c30 = 0;
  local_c2c = 0;
  local_c24 = 0;
  local_c20 = 0;
  local_c18 = 0;
  local_c14 = 0;
  local_c0c = 0;
  local_c08 = 0;
  local_c04 = 0;
  local_c00 = 0;
  local_bfc = 0;
  local_bf8 = 0;
  local_bf4 = 0;
  local_bf0 = 0;
  local_bec = 0;
  local_be8 = 0;
  local_be4 = 0;
  local_be0 = 0;
  local_bdc = 0;
  local_bd8 = 0;
  local_bd4 = 0;
  local_bd0 = 0;
  local_bcc = 0;
  local_bc8 = 0;
  local_bc4 = 0;
  local_bc0 = 0;
  local_bbc = 0;
  local_bb8 = 0;
  local_bb4 = 0;
  local_bb0 = 0;
  local_bac = 0;
  local_b68 = 0;
  local_b78 = 0;
  local_b6c = 0;
  local_b50 = 0;
  local_a40 = 0;
  local_a3c = 0;
  local_a38 = 0;
  local_a20 = 0;
  uStack_a2c = 0;
  local_a34 = 0;
  local_a24 = 0;
  local_a18 = 0x101;
  local_a16 = 0;
  local_a14 = 0;
  local_a10 = 0;
  local_9b0 = 0;
  local_9a8 = 0;
  local_948 = 0;
  local_938 = 0;
  local_934 = 0;
  local_930 = 0;
  local_92c = 0;
  local_928 = 0;
  local_924 = 0;
  local_920 = 0;
  local_91c = 0;
  local_918 = 0;
  local_914 = 0;
  local_93c = 0;
  local_940 = 0;
  local_ff0 = PTR_vtable_0099df98 + 0x20;
  local_910 = 0;
  local_908 = 0;
  local_8f0 = 0;
  local_900 = 0;
  local_8f8 = 0;
  local_8e8 = 0;
                    /* try { // try from 0079b5c0 to 0079b5d7 has its CatchHandler @ 0079b770 */
  facebook::react::EmojiPickerRowViewProps::EmojiPickerRowViewProps
            (aEStack_8e0,(PropsParserContext *)local_1000,(EmojiPickerRowViewProps *)&local_ff0,
             (RawProps *)&local_118);
  local_88 = auStack_1f0;
  FUN_0079bf5c(&local_88);
  puVar5 = PTR_PTR_0099dfa0;
  FUN_0078917c(aEStack_8e0,PTR_PTR_0099dfa0 + 8);
  local_88 = &local_900;
  FUN_0079bf5c(&local_88);
  FUN_0078917c(&local_ff0,puVar5 + 8);
  facebook::react::RawPropsParser::facebook::react::RawPropsParser::postPrepare(param_1);
  pvVar3 = local_140;
  puVar4 = (undefined8 *)local_130;
  while (puVar4 != (undefined8 *)0x0) {
    plVar7 = (long *)puVar4[6];
    pvVar8 = (void *)*puVar4;
    local_140 = pvVar3;
    if ((plVar7 == (long *)0x0) || (lVar6 = FUN_00757990(0xffffffffffffffff,plVar7 + 1), lVar6 != 0)
       ) {
      bVar1 = *(byte *)(puVar4 + 2);
    }
    else {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__ndk1::__shared_weak_count::__release_weak();
      bVar1 = *(byte *)(puVar4 + 2);
    }
    if ((bVar1 & 1) != 0) {
      operator_delete((void *)puVar4[4]);
    }
    operator_delete(puVar4);
    pvVar3 = local_140;
    puVar4 = (undefined8 *)pvVar8;
  }
  local_140 = (void *)0x0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)&uStack_178);
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)&uStack_1a8);
  std::__ndk1::mutex::~mutex((mutex *)&local_1d0);
  pvVar8 = local_a0;
  pvVar3 = local_98;
  if (local_a0 != (void *)0x0) {
    while (pvVar3 != pvVar8) {
      if (*(uint *)((long)pvVar3 + -8) != 0xffffffff) {
                    /* try { // try from 0079b704 to 0079b70f has its CatchHandler @ 0079b774 */
        (*(code *)(&PTR_FUN_0097fbf8)[*(uint *)((long)pvVar3 + -8)])
                  (&local_ff0,(void *)((long)pvVar3 + -0x38));
      }
      *(undefined4 *)((long)pvVar3 + -8) = 0xffffffff;
      pvVar3 = (void *)((long)pvVar3 + -0x38);
    }
    local_98 = pvVar8;
    operator_delete(local_a0);
  }
  if (local_b8 != (void *)0x0) {
    pvStack_b0 = local_b8;
    operator_delete(local_b8);
  }
  folly::dynamic::folly::dynamic::destroy(local_f0);
  facebook::jsi::Value::~Value((Value *)local_100);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0079b778  FUN_0079b778 =====

void FUN_0079b778(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 0079b79c  FUN_0079b79c =====

undefined * FUN_0079b79c(void)

{
  return PTR_EmojiPickerRowViewComponentName_0099df90;
}


// ===== 0079b7a8  FUN_0079b7a8 =====

undefined * FUN_0079b7a8(void)

{
  return PTR_EmojiPickerRowViewComponentName_0099df90;
}


// ===== 0079b7b4  FUN_0079b7b4 =====

undefined8 FUN_0079b7b4(void)

{
  return 0x61;
}


// ===== 0079b7bc  FUN_0079b7bc =====

void FUN_0079b7bc(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 uStack_49;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_64 = (**(code **)(*param_2 + 0x20))();
  FUN_0079c068(&local_60,&uStack_49,param_3,param_4,&local_64);
                    /* try { // try from 0079b824 to 0079b82b has its CatchHandler @ 0079b85c */
  (**(code **)(*param_2 + 0x60))(param_2,local_60);
  param_1[1] = uStack_58;
  *param_1 = local_60;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0079b884  FUN_0079b884 =====

void FUN_0079b884(undefined8 *param_1,long *param_2,shared_ptr *param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *local_70;
  long *local_68;
  long *local_60;
  long *plStack_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_0079c31c(&local_60,&local_70);
                    /* try { // try from 0079b8d0 to 0079b8db has its CatchHandler @ 0079b988 */
  (**(code **)(*local_60 + 0x10))(local_60,param_3,param_4);
  local_70 = local_60;
  local_68 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    FUN_00757d00(1,plStack_58 + 1);
  }
                    /* try { // try from 0079b8f4 to 0079b903 has its CatchHandler @ 0079b978 */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_70);
  plVar2 = local_68;
  if ((local_68 != (long *)0x0) &&
     (lVar3 = FUN_00757990(0xffffffffffffffff,local_68 + 1), lVar3 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 0079b940 to 0079b947 has its CatchHandler @ 0079b988 */
  (**(code **)(*param_2 + 0x60))(param_2,local_60);
  param_1[1] = plStack_58;
  *param_1 = local_60;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0079b9b0  FUN_0079b9b0 =====

void FUN_0079b9b0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0079b9c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 0079b9c4  FUN_0079b9c4 =====

void FUN_0079b9c4(undefined8 *param_1,long param_2,undefined8 param_3,long *param_4,
                 RawProps *param_5)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  char *pcVar6;
  int iVar7;
  ulong uVar8;
  char *pcVar9;
  long lVar10;
  long *local_100;
  long *local_f8;
  long *local_f0;
  long *plStack_e8;
  undefined1 uStack_d1;
  dynamic adStack_d0 [48];
  uint local_a0;
  int local_98 [6];
  long *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((*param_4 == 0) && (uVar8 = facebook::react::RawProps::isEmpty(), (uVar8 & 1) != 0)) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31EmojiPickerRowViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23EmojiPickerRowViewPropsENS0_30EmojiPickerRowViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd40
         & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31EmojiPickerRowViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23EmojiPickerRowViewPropsENS0_30EmojiPickerRowViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd40
                                   ), iVar7 != 0)) {
                    /* try { // try from 0079bc90 to 0079bc9f has its CatchHandler @ 0079bccc */
      FUN_0079c794(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31EmojiPickerRowViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23EmojiPickerRowViewPropsENS0_30EmojiPickerRowViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd38
                   ,adStack_d0);
      __cxa_atexit(FUN_0079c744,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31EmojiPickerRowViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23EmojiPickerRowViewPropsENS0_30EmojiPickerRowViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd38
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31EmojiPickerRowViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23EmojiPickerRowViewPropsENS0_30EmojiPickerRowViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd40
                         );
    }
    lVar10 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31EmojiPickerRowViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23EmojiPickerRowViewPropsENS0_30EmojiPickerRowViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd38
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31EmojiPickerRowViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23EmojiPickerRowViewPropsENS0_30EmojiPickerRowViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd38
    ;
    param_1[1] = lVar10;
    if (lVar10 != 0) {
      FUN_00757d00(1,lVar10 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    FUN_0079c420(&local_f0,param_3,param_5,param_4);
                    /* try { // try from 0079ba6c to 0079ba7f has its CatchHandler @ 0079bd00 */
    uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if (((uVar8 & 1) == 0) ||
       ((uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar8 & 1) == 0 ||
        (uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enablePropsUpdateReconciliationAndroid(), (uVar8 & 1) == 0)))) {
LAB_0079baa8:
      local_100 = local_f0;
      local_f8 = plStack_e8;
      if (plStack_e8 != (long *)0x0) {
        FUN_00757d00(1,plStack_e8 + 1);
      }
                    /* try { // try from 0079bac0 to 0079bacf has its CatchHandler @ 0079bcf0 */
      FUN_0079c56c(&local_100,param_5,param_4);
      plVar4 = local_f8;
      if ((local_f8 != (long *)0x0) &&
         (lVar10 = FUN_00757990(0xffffffffffffffff,local_f8 + 1), lVar10 == 0)) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 0079ba90 to 0079ba97 has its CatchHandler @ 0079bce0 */
      pcVar9 = (char *)(**(code **)(*local_f0 + 0x10))();
      iVar7 = strcmp(PTR_EmojiPickerRowViewComponentName_0099df90,pcVar9);
      if (iVar7 != 0) goto LAB_0079baa8;
      bVar3 = false;
    }
                    /* try { // try from 0079bb04 to 0079bb07 has its CatchHandler @ 0079bd00 */
    uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar8 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 0079bb14 to 0079bb2f has its CatchHandler @ 0079bcec */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(local_f0 + 4));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_f0;
      plVar5 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 0079bc70 to 0079bc7f has its CatchHandler @ 0079bce4 */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_0079bd4c;
      }
      for (; local_f0 = plVar4, plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (*(int *)(plVar5 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 0079bc50 to 0079bc5f has its CatchHandler @ 0079bd0c */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_0079bd4c;
        }
        uVar1 = 0x811c9dc5;
        uVar8 = (ulong)(*(byte *)(plVar5 + 3) >> 1);
        pcVar6 = (char *)((long)plVar5 + 0x19);
        pcVar9 = (char *)((long)plVar5 + 0x19);
        if ((*(byte *)(plVar5 + 3) & 1) != 0) {
          uVar8 = plVar5[4];
          pcVar6 = (char *)plVar5[5];
          pcVar9 = (char *)plVar5[5];
        }
        for (; uVar8 != 0; uVar8 = uVar8 - 1) {
          uVar1 = (uVar1 ^ (int)*pcVar6) * 0x1000193;
          pcVar6 = pcVar6 + 1;
        }
                    /* try { // try from 0079bbb0 to 0079bbbb has its CatchHandler @ 0079bd14 */
        folly::dynamic::dynamic(adStack_d0,(dynamic *)(plVar5 + 8));
        local_a0 = 0;
                    /* try { // try from 0079bbc0 to 0079bbd7 has its CatchHandler @ 0079bd18 */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (plVar4,param_3,uVar1,pcVar9,adStack_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 0079bbe8 to 0079bbf3 has its CatchHandler @ 0079bd08 */
          (*(code *)(&PTR_FUN_0097fbf8)[local_a0])(&uStack_d1,adStack_d0);
        }
        plVar4 = local_f0;
      }
      folly::dynamic::folly::dynamic::destroy(local_98);
    }
    param_1[1] = plStack_e8;
    *param_1 = local_f0;
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_0079bd4c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0079bd50  FUN_0079bd50 =====

void FUN_0079bd50(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 0079bd58  FUN_0079bd58 =====

void FUN_0079bd58(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 0079bd60  FUN_0079bd60 =====

void FUN_0079bd60(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined1 auStack_80 [8];
  long *local_78;
  long *local_70;
  long *local_68;
  undefined1 uStack_59;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  FUN_0078a610(auStack_80,&uStack_59,param_3 + 8,param_3 + 4);
                    /* try { // try from 0079bda8 to 0079bdaf has its CatchHandler @ 0079bf30 */
  plVar4 = (long *)operator_new(0x68);
  plVar1 = plVar4 + 3;
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_00981bd8;
                    /* try { // try from 0079bdc8 to 0079bdd7 has its CatchHandler @ 0079bf18 */
  FUN_0079ca84(plVar1,auStack_80,param_2 + 8);
  local_70 = plVar1;
  local_68 = plVar4;
  if ((local_78 != (long *)0x0) &&
     (lVar5 = FUN_00757990(0xffffffffffffffff,local_78 + 1), lVar5 == 0)) {
    (**(code **)(*local_78 + 0x10))(local_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 0079be0c to 0079be13 has its CatchHandler @ 0079bf08 */
  puVar6 = (undefined8 *)operator_new(0x1a0);
  puVar2 = puVar6 + 4;
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_0097fff0;
                    /* try { // try from 0079be2c to 0079be43 has its CatchHandler @ 0079bef0 */
  FUN_0079cc84(puVar2,param_3,&local_70,param_2 + 8,param_2);
  plVar1 = local_70;
  *param_1 = (long)puVar2;
  param_1[1] = (long)puVar6;
  local_90 = puVar2;
  local_88 = puVar6;
  FUN_00757d00(1,puVar6 + 2);
                    /* try { // try from 0079be5c to 0079be67 has its CatchHandler @ 0079bed0 */
  facebook::react::EventEmitter::facebook::react::EventEmitter::setShadowNodeFamily
            (plVar1,&local_90);
  if (local_88 != (undefined8 *)0x0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar1 = local_68;
  if ((local_68 != (long *)0x0) &&
     (lVar5 = FUN_00757990(0xffffffffffffffff,local_68 + 1), lVar5 == 0)) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0079bf58  FUN_0079bf58 =====

void FUN_0079bf58(void)

{
  return;
}


// ===== 0079bf5c  FUN_0079bf5c =====

void FUN_0079bf5c(undefined8 *param_1)

{
  char cVar1;
  void *pvVar2;
  undefined8 *puVar3;
  void *pvVar4;
  void *pvVar5;
  
  puVar3 = (undefined8 *)*param_1;
  pvVar4 = (void *)*puVar3;
  if (pvVar4 == (void *)0x0) {
    return;
  }
  pvVar5 = (void *)puVar3[1];
  pvVar2 = pvVar4;
  if (pvVar5 != pvVar4) {
    do {
      if ((*(byte *)((long)pvVar5 + -0x20) & 1) == 0) {
        if ((*(byte *)((long)pvVar5 + -0x38) & 1) == 0) goto LAB_0079bfac;
LAB_0079bfc8:
        operator_delete(*(void **)((long)pvVar5 + -0x28));
        cVar1 = *(char *)((long)pvVar5 + -0x40);
      }
      else {
        operator_delete(*(void **)((long)pvVar5 + -0x10));
        if ((*(byte *)((long)pvVar5 + -0x38) & 1) != 0) goto LAB_0079bfc8;
LAB_0079bfac:
        cVar1 = *(char *)((long)pvVar5 + -0x40);
      }
      if ((cVar1 != '\0') && ((*(byte *)((long)pvVar5 + -0x58) & 1) != 0)) {
        operator_delete(*(void **)((long)pvVar5 + -0x48));
      }
      pvVar5 = (void *)((long)pvVar5 + -0x58);
    } while (pvVar5 != pvVar4);
    pvVar2 = *(void **)*param_1;
  }
  puVar3[1] = pvVar4;
  operator_delete(pvVar2);
  return;
}


// ===== 0079c018  FUN_0079c018 =====

void FUN_0079c018(long param_1)

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


// ===== 0079c068  FUN_0079c068 =====

void FUN_0079c068(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 *param_5)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined4 uVar8;
  
  puVar6 = (undefined8 *)operator_new(0x400);
  uVar8 = *param_5;
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_00981a20;
                    /* try { // try from 0079c0b0 to 0079c0bf has its CatchHandler @ 0079c158 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
            ((YogaLayoutableShadowNode *)(puVar6 + 3),param_3,param_4,uVar8);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_00981a70;
  uVar2 = *(uint *)((long)puVar6 + 0x6c);
  uVar1 = uVar2 & 3 | (uint)((*(byte *)(lVar7 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)puVar6 + 0x6c) = uVar2 & 0xfffffff8 | uVar1;
  if ((*(uint *)(lVar7 + 0x50) & 0x30000000) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    if (*(char *)(lVar7 + 0x5b4) != '\0') {
      uVar8 = *(undefined4 *)(lVar7 + 0x5b0);
    }
  }
  *(undefined4 *)(puVar6 + 10) = uVar8;
  cVar3 = *(char *)(lVar7 + 0x6b0);
  cVar4 = *(char *)(lVar7 + 0x6b1);
  cVar5 = *(char *)(lVar7 + 0x1e8);
  *param_1 = (YogaLayoutableShadowNode *)(puVar6 + 3);
  param_1[1] = puVar6;
  *(uint *)((long)puVar6 + 0x6c) =
       uVar2 & 0xfffff000 |
       uVar2 & 0x7f8 | uVar1 | (uint)((cVar3 != '\0' || cVar4 != '\0') || cVar5 != '\0') << 0xb;
  return;
}


// ===== 0079c174  FUN_0079c174 =====

void FUN_0079c174(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00981a20;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0079c184  FUN_0079c184 =====

void FUN_0079c184(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00981a20;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0079c1b4  FUN_0079c1b4 =====

void FUN_0079c1b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0079c1bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 0079c1c0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0079c1c4  FUN_0079c1c4 =====

void FUN_0079c1c4(long *param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = (void *)param_1[0x79];
  *param_1 = (long)(PTR_vtable_0099de98 + 0x10);
  if (pvVar4 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x7a];
    pvVar2 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        plVar3 = *(long **)((long)pvVar5 + -8);
        if ((plVar3 != (long *)0x0) &&
           (lVar1 = FUN_00757990(0xffffffffffffffff,plVar3 + 1), lVar1 == 0)) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
        pvVar5 = (void *)((long)pvVar5 + -0x10);
      } while (pvVar5 != pvVar4);
      pvVar2 = (void *)param_1[0x79];
    }
    param_1[0x7a] = (long)pvVar4;
    operator_delete(pvVar2);
  }
  pvVar4 = (void *)param_1[0x73];
  if (pvVar4 != (void *)0x0) {
    param_1[0x74] = (long)pvVar4;
    operator_delete(pvVar4);
  }
  FUN_007890e8(param_1 + 0x23);
  FUN_00789784(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0079c284  FUN_0079c284 =====

void FUN_0079c284(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  facebook::react::LayoutableShadowNode::getLayoutMetrics();
  facebook::react::BaseViewProps::resolveTransform(*(LayoutMetrics **)(param_1 + 8));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0079c2ec  FUN_0079c2ec =====

bool FUN_0079c2ec(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 0079c304  FUN_0079c304 =====

bool FUN_0079c304(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 0079c31c  FUN_0079c31c =====

void FUN_0079c31c(undefined8 *param_1,undefined8 param_2,ShadowNode *param_3,
                 ShadowNodeFragment *param_4)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined4 uVar8;
  
  puVar6 = (undefined8 *)operator_new(0x400);
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_00981a20;
                    /* try { // try from 0079c35c to 0079c36b has its CatchHandler @ 0079c404 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
            ((YogaLayoutableShadowNode *)(puVar6 + 3),param_3,param_4);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_00981a70;
  uVar2 = *(uint *)((long)puVar6 + 0x6c);
  uVar1 = uVar2 & 3 | (uint)((*(byte *)(lVar7 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)puVar6 + 0x6c) = uVar2 & 0xfffffff8 | uVar1;
  if ((*(uint *)(lVar7 + 0x50) & 0x30000000) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    if (*(char *)(lVar7 + 0x5b4) != '\0') {
      uVar8 = *(undefined4 *)(lVar7 + 0x5b0);
    }
  }
  *(undefined4 *)(puVar6 + 10) = uVar8;
  cVar3 = *(char *)(lVar7 + 0x6b0);
  cVar4 = *(char *)(lVar7 + 0x6b1);
  cVar5 = *(char *)(lVar7 + 0x1e8);
  *param_1 = (YogaLayoutableShadowNode *)(puVar6 + 3);
  param_1[1] = puVar6;
  *(uint *)((long)puVar6 + 0x6c) =
       uVar2 & 0xfffff000 |
       uVar2 & 0x7f8 | uVar1 | (uint)((cVar3 != '\0' || cVar4 != '\0') || cVar5 != '\0') << 0xb;
  return;
}


// ===== 0079c420  FUN_0079c420 =====

void FUN_0079c420(undefined8 *param_1,PropsParserContext *param_2,RawProps *param_3,long *param_4)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  EmojiPickerRowViewProps *pEVar4;
  undefined1 uStack_59;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pEVar4 = (EmojiPickerRowViewProps *)*param_4;
  if (pEVar4 == (EmojiPickerRowViewProps *)0x0) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31EmojiPickerRowViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23EmojiPickerRowViewPropsENS0_30EmojiPickerRowViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd40
         & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31EmojiPickerRowViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23EmojiPickerRowViewPropsENS0_30EmojiPickerRowViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd40
                                   ), iVar2 != 0)) {
                    /* try { // try from 0079c4ec to 0079c4fb has its CatchHandler @ 0079c528 */
      FUN_0079c794(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31EmojiPickerRowViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23EmojiPickerRowViewPropsENS0_30EmojiPickerRowViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd38
                   ,&uStack_59);
      __cxa_atexit(FUN_0079c744,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31EmojiPickerRowViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23EmojiPickerRowViewPropsENS0_30EmojiPickerRowViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd38
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31EmojiPickerRowViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23EmojiPickerRowViewPropsENS0_30EmojiPickerRowViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd40
                         );
    }
    pEVar4 = *(EmojiPickerRowViewProps **)
              PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31EmojiPickerRowViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23EmojiPickerRowViewPropsENS0_30EmojiPickerRowViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd38
    ;
  }
  puVar3 = (undefined8 *)operator_new(0x728);
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_00981b88;
                    /* try { // try from 0079c498 to 0079c4ab has its CatchHandler @ 0079c53c */
  facebook::react::EmojiPickerRowViewProps::EmojiPickerRowViewProps
            ((EmojiPickerRowViewProps *)(puVar3 + 3),param_2,pEVar4,param_3);
  *param_1 = (EmojiPickerRowViewProps *)(puVar3 + 3);
  param_1[1] = puVar3;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0079c56c  FUN_0079c56c =====

void FUN_0079c56c(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  plVar3 = local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar5 = *param_1;
  if (*param_3 == 0) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31EmojiPickerRowViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23EmojiPickerRowViewPropsENS0_30EmojiPickerRowViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd40
         & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31EmojiPickerRowViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23EmojiPickerRowViewPropsENS0_30EmojiPickerRowViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd40
                                   ), iVar2 != 0)) {
                    /* try { // try from 0079c650 to 0079c65f has its CatchHandler @ 0079c68c */
      FUN_0079c794(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31EmojiPickerRowViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23EmojiPickerRowViewPropsENS0_30EmojiPickerRowViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd38
                   ,local_70);
      __cxa_atexit(FUN_0079c744,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31EmojiPickerRowViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23EmojiPickerRowViewPropsENS0_30EmojiPickerRowViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd38
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31EmojiPickerRowViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23EmojiPickerRowViewPropsENS0_30EmojiPickerRowViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd40
                         );
    }
    local_50 = (long *)0x0;
                    /* try { // try from 0079c5dc to 0079c5ef has its CatchHandler @ 0079c6a0 */
    facebook::react::Props::facebook::react::Props::initializeDynamicProps
              (uVar5,*(undefined8 *)
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31EmojiPickerRowViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23EmojiPickerRowViewPropsENS0_30EmojiPickerRowViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd38
               ,param_2,local_70);
  }
  else {
    local_50 = (long *)0x0;
                    /* try { // try from 0079c5a0 to 0079c5b7 has its CatchHandler @ 0079c6a4 */
    facebook::react::Props::facebook::react::Props::initializeDynamicProps
              (uVar5,*param_3,param_2,local_70);
  }
  if (local_50 == local_70) {
    lVar4 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_0079c61c;
    lVar4 = 5;
    plVar3 = local_50;
  }
  (**(code **)(*plVar3 + lVar4 * 8))();
LAB_0079c61c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0079c6f4  FUN_0079c6f4 =====

void FUN_0079c6f4(long param_1)

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


// ===== 0079c744  FUN_0079c744 =====

void FUN_0079c744(long param_1)

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


// ===== 0079c794  FUN_0079c794 =====

void FUN_0079c794(undefined8 *param_1)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x728);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_00981b38;
  memset(__s,0,0x710);
                    /* try { // try from 0079c7d8 to 0079c7eb has its CatchHandler @ 0079c870 */
  FUN_00788b10(__s,PTR_PTR_0099dfa0 + 0x10);
  *(undefined4 *)((long)puVar2 + 0x5f4) = 0;
  *(undefined1 *)(puVar2 + 0xbf) = 0;
  *(undefined1 *)(puVar2 + 0xcb) = 0;
  *(undefined1 *)(puVar2 + 0xcc) = 0;
  *(undefined1 *)(puVar2 + 0xd8) = 0;
  *(undefined1 *)(puVar2 + 0xda) = 0;
  *(undefined1 *)((long)puVar2 + 0x6d4) = 0;
  *(undefined1 *)(puVar2 + 0xdb) = 0;
  *(undefined1 *)((long)puVar2 + 0x6dc) = 0;
  *(undefined1 *)(puVar2 + 0xdc) = 0;
  *(undefined1 *)((long)puVar2 + 0x6e4) = 0;
  *(undefined1 *)(puVar2 + 0xdd) = 0;
  *(undefined1 *)((long)puVar2 + 0x6ec) = 0;
  *(undefined1 *)(puVar2 + 0xde) = 0;
  *(undefined1 *)((long)puVar2 + 0x6f4) = 0;
  puVar1 = PTR_vtable_0099df98;
  *(undefined4 *)(puVar2 + 0xd9) = 0;
  *(undefined2 *)((long)puVar2 + 0x6cc) = 0;
  puVar2[0xdf] = 0;
  puVar2[3] = puVar1 + 0x20;
  *(undefined4 *)(puVar2 + 0xe0) = 0;
  *(undefined1 *)(puVar2 + 0xe4) = 0;
  puVar2[0xe3] = 0;
  puVar2[0xe2] = 0;
  puVar2[0xe1] = 0;
  *param_1 = __s;
  param_1[1] = puVar2;
  return;
}


// ===== 0079c88c  FUN_0079c88c =====

void FUN_0079c88c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00981b38;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0079c89c  FUN_0079c89c =====

void FUN_0079c89c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00981b38;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0079c8cc  FUN_0079c8cc =====

void FUN_0079c8cc(long param_1)

{
  long lVar1;
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_30 = param_1 + 0x708;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_0079bf5c(&local_30);
  FUN_0078917c(param_1 + 0x18,PTR_PTR_0099dfa0 + 8);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0079c934  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0079c938  FUN_0079c938 =====

void FUN_0079c938(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00981b88;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0079c948  FUN_0079c948 =====

void FUN_0079c948(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00981b88;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0079c978  FUN_0079c978 =====

void FUN_0079c978(long param_1)

{
  long lVar1;
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_30 = param_1 + 0x708;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_0079bf5c(&local_30);
  FUN_0078917c(param_1 + 0x18,PTR_PTR_0099dfa0 + 8);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0079c9e0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0079c9e4  FUN_0079c9e4 =====

void FUN_0079c9e4(long param_1)

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


// ===== 0079ca34  FUN_0079ca34 =====

void FUN_0079ca34(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00981bd8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0079ca44  FUN_0079ca44 =====

void FUN_0079ca44(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00981bd8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0079ca74  FUN_0079ca74 =====

void FUN_0079ca74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0079ca7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 0079ca80  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0079ca84  FUN_0079ca84 =====

EventEmitter * FUN_0079ca84(EventEmitter *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long *plStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plStack_48 = (long *)param_2[1];
  local_50 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  local_60 = *param_3;
  local_58 = param_3[1];
  if (local_58 != 0) {
    FUN_00757d00(1,local_58 + 0x10);
  }
                    /* try { // try from 0079cacc to 0079cadb has its CatchHandler @ 0079cba0 */
  facebook::react::EventEmitter::EventEmitter(param_1,&local_50,&local_60);
  *(undefined ***)param_1 = &PTR_FUN_0097ff10;
                    /* try { // try from 0079cae8 to 0079caef has its CatchHandler @ 0079cb90 */
  puVar3 = (undefined8 *)operator_new(0x58);
  *puVar3 = &PTR_FUN_0097ff30;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[4] = 0;
  puVar3[3] = 0;
  *(undefined8 **)(param_1 + 0x40) = puVar3 + 3;
  *(undefined8 **)(param_1 + 0x48) = puVar3;
  puVar3[6] = 0;
  puVar3[5] = 0;
  puVar3[8] = 0;
  puVar3[7] = 0;
  *(undefined8 *)((long)puVar3 + 0x4c) = 0;
  *(undefined8 *)((long)puVar3 + 0x44) = 0;
  *(undefined ***)param_1 = &PTR_FUN_00981c28;
  if (local_58 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = plStack_48;
  if ((plStack_48 != (long *)0x0) &&
     (lVar4 = FUN_00757990(0xffffffffffffffff,plStack_48 + 1), lVar4 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0079cbd4  FUN_0079cbd4 =====

void FUN_0079cbd4(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[9];
  *param_1 = &PTR_FUN_0097ff10;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *param_1 = &PTR_FUN_0097ff80;
  if (param_1[6] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[4] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


// ===== 0079cc84  FUN_0079cc84 =====

ShadowNodeFamily *
FUN_0079cc84(ShadowNodeFamily *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
            undefined8 param_5)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  long *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_58 = *param_3;
  local_50 = (long *)param_3[1];
  if (local_50 != (long *)0x0) {
    FUN_00757d00(1,local_50 + 1);
  }
  local_68 = *param_4;
  local_60 = param_4[1];
  if (local_60 != 0) {
    FUN_00757d00(1,local_60 + 0x10);
  }
                    /* try { // try from 0079cce8 to 0079ccff has its CatchHandler @ 0079cd68 */
  facebook::react::ShadowNodeFamily::ShadowNodeFamily(param_1,param_2,&local_58,&local_68,param_5);
  if (local_60 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = local_50;
  if ((local_50 != (long *)0x0) &&
     (lVar3 = FUN_00757990(0xffffffffffffffff,local_50 + 1), lVar3 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0079cda0  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_29DCDFastImageViewComponentNameEEEENS0_21DCDFastImageViewPropsENS0_28DCDFastImageViewEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE =====

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_29DCDFastImageViewComponentNameEEEENS0_21DCDFastImageViewPropsENS0_28DCDFastImageViewEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE
               (undefined8 *param_1)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_0079cdf4(&local_30);
  *param_1 = local_30;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0079cdf4  FUN_0079cdf4 =====

void FUN_0079cdf4(undefined8 *param_1,ComponentDescriptorParameters *param_2)

{
  long lVar1;
  ComponentDescriptor *this;
  void *local_90;
  void *pvStack_88;
  undefined8 local_80;
  void *pvStack_78;
  void *local_70;
  undefined8 uStack_68;
  void *local_60;
  void *pvStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (ComponentDescriptor *)operator_new(0x88);
  pvStack_78 = (void *)0x0;
  local_80 = 0;
  uStack_68 = 0;
  local_70 = (void *)0x0;
  pvStack_58 = (void *)0x0;
  local_60 = (void *)0x0;
  uStack_48 = 0;
  uStack_50 = 0;
  pvStack_88 = (void *)0x0;
  local_90 = (void *)0x0;
                    /* try { // try from 0079ce38 to 0079ce43 has its CatchHandler @ 0079ceb0 */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_90);
  *(undefined ***)this = &PTR_FUN_00981c60;
  FUN_0079cee0(this + 0x38);
  *param_1 = this;
  if (local_60 != (void *)0x0) {
    pvStack_58 = local_60;
    operator_delete(local_60);
  }
  if (pvStack_78 != (void *)0x0) {
    local_70 = pvStack_78;
    operator_delete(pvStack_78);
  }
  if (local_90 != (void *)0x0) {
    pvStack_88 = local_90;
    operator_delete(local_90);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0079cee0  FUN_0079cee0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0079cee0(undefined8 param_1)

{
  byte bVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  void *pvVar8;
  undefined4 local_1170 [2];
  undefined8 *local_1168;
  undefined *local_1160;
  undefined8 uStack_1158;
  undefined8 local_1150;
  undefined8 uStack_1148;
  undefined4 local_1140 [2];
  undefined8 local_1138;
  undefined8 uStack_1130;
  undefined8 local_1128;
  undefined8 uStack_1120;
  undefined4 local_1118;
  undefined4 local_1110;
  undefined1 local_110c;
  undefined8 local_110b;
  undefined8 local_1103;
  undefined8 uStack_10fb;
  undefined8 local_10f3;
  undefined8 uStack_10eb;
  undefined8 local_10e3;
  undefined8 uStack_10db;
  undefined8 local_10d3;
  undefined6 uStack_10cb;
  undefined2 uStack_10c5;
  undefined6 uStack_10c3;
  undefined8 uStack_10bd;
  undefined4 local_10b5;
  undefined8 local_10b1;
  undefined1 local_10a9;
  undefined1 uStack_10a8;
  undefined7 uStack_10a7;
  undefined8 uStack_10a0;
  undefined8 uStack_1098;
  undefined8 uStack_1090;
  undefined8 local_1088;
  undefined8 uStack_1080;
  undefined8 local_1078;
  undefined8 uStack_1070;
  undefined8 local_1068;
  undefined8 uStack_1060;
  undefined8 local_1058;
  undefined8 uStack_1050;
  undefined8 uStack_1048;
  undefined8 local_1040;
  undefined8 local_1038;
  undefined8 uStack_1030;
  undefined8 local_1028;
  undefined4 uStack_1020;
  undefined4 uStack_101c;
  undefined4 uStack_1018;
  undefined4 uStack_1014;
  undefined4 uStack_1010;
  undefined4 uStack_100c;
  undefined8 local_1008;
  undefined8 uStack_1000;
  undefined4 local_ff8;
  undefined1 local_ff4;
  undefined4 local_ff0;
  undefined1 local_fec;
  undefined4 local_fe8;
  undefined1 local_fe4;
  undefined4 local_fe0;
  undefined1 local_fdc;
  undefined4 local_fd8;
  undefined1 local_fd4;
  undefined4 local_fd0;
  undefined1 local_fcc;
  undefined4 local_fc8;
  undefined1 local_fc4;
  undefined4 local_fc0;
  undefined1 local_fbc;
  undefined4 local_fb8;
  undefined1 local_fb4;
  undefined4 local_fb0;
  undefined1 local_fac;
  undefined4 local_fa8;
  undefined1 local_fa4;
  undefined4 local_fa0;
  undefined1 local_f9c;
  undefined4 local_f98;
  undefined1 local_f94;
  undefined4 local_f90;
  undefined1 local_f8c;
  undefined4 local_f88;
  undefined1 local_f84;
  undefined4 local_f80;
  undefined1 local_f7c;
  undefined1 local_f78;
  undefined1 local_f74;
  undefined1 local_f68;
  undefined8 local_f60;
  undefined8 uStack_f58;
  undefined8 uStack_f50;
  undefined8 uStack_f48;
  undefined8 local_f40;
  undefined8 uStack_f38;
  undefined8 uStack_f30;
  undefined1 uStack_f28;
  undefined7 local_f27;
  undefined1 uStack_f20;
  undefined8 uStack_f1f;
  undefined8 local_f14;
  undefined8 uStack_f0c;
  undefined8 uStack_f04;
  undefined8 uStack_efc;
  undefined8 local_ef4;
  undefined8 uStack_eec;
  undefined8 uStack_ee4;
  undefined8 uStack_edc;
  undefined8 local_ed4;
  undefined8 uStack_ecc;
  undefined8 uStack_ec4;
  undefined5 uStack_ebc;
  undefined3 local_eb7;
  undefined5 uStack_eb4;
  undefined1 local_eac;
  undefined1 local_ea8;
  undefined1 local_ea4;
  undefined1 local_ea0;
  undefined1 local_e9c;
  undefined1 local_e98;
  undefined1 local_e80;
  undefined8 local_e78;
  undefined8 uStack_e70;
  undefined8 local_e68;
  undefined4 local_e60;
  undefined1 local_e5c;
  undefined4 local_e5b;
  undefined1 local_e57;
  undefined1 local_e56;
  undefined8 local_e50;
  undefined8 uStack_e48;
  undefined8 uStack_e40;
  undefined8 uStack_e38;
  undefined8 local_e30;
  undefined7 uStack_e28;
  undefined4 uStack_e21;
  undefined8 local_e1c;
  undefined1 local_e14;
  undefined1 local_e0c;
  undefined1 local_e08;
  undefined1 local_e00;
  undefined1 local_dfc;
  undefined1 local_df4;
  undefined1 local_df0;
  undefined1 local_de8;
  undefined1 local_de4;
  undefined1 local_ddc;
  undefined1 local_dd8;
  undefined1 local_dd0;
  undefined1 local_dcc;
  undefined1 local_dc4;
  undefined1 local_dc0;
  undefined1 local_db8;
  undefined1 local_db4;
  undefined1 local_dac;
  undefined1 local_da8;
  undefined1 local_da0;
  undefined1 local_d9c;
  undefined1 local_d94;
  undefined1 local_d90;
  undefined1 local_d88;
  undefined1 local_d84;
  undefined1 local_d7c;
  undefined1 local_d78;
  undefined1 local_d74;
  undefined1 local_d70;
  undefined1 local_d6c;
  undefined1 local_d68;
  undefined1 local_d64;
  undefined1 local_d60;
  undefined1 local_d5c;
  undefined1 local_d58;
  undefined1 local_d54;
  undefined1 local_d50;
  undefined1 local_d4c;
  undefined1 local_d48;
  undefined1 local_d44;
  undefined1 local_d40;
  undefined1 local_d3c;
  undefined1 local_d38;
  undefined1 local_d34;
  undefined1 local_d30;
  undefined1 local_d2c;
  undefined1 local_d28;
  undefined1 local_d24;
  undefined1 local_d20;
  undefined1 local_d1c;
  undefined8 local_d18;
  undefined8 uStack_d10;
  undefined8 local_d08;
  undefined8 uStack_d00;
  undefined8 uStack_cf8;
  undefined8 uStack_cf0;
  undefined2 local_ce8;
  undefined8 local_ce4;
  undefined1 local_cdc;
  undefined8 local_cd8;
  undefined8 local_cd0;
  undefined8 uStack_cc8;
  undefined1 local_cc0;
  undefined8 local_cb8;
  undefined8 uStack_cb0;
  undefined8 uStack_ca8;
  undefined8 uStack_ca0;
  undefined8 local_c98;
  undefined8 uStack_c90;
  undefined8 uStack_c88;
  undefined8 uStack_c80;
  undefined8 local_c78;
  undefined8 uStack_c70;
  undefined8 uStack_c68;
  undefined8 uStack_c60;
  undefined8 local_c58;
  undefined8 uStack_c50;
  undefined8 uStack_c48;
  undefined8 uStack_c40;
  undefined8 local_c38;
  undefined8 uStack_c30;
  undefined8 uStack_c28;
  undefined8 uStack_c20;
  undefined8 local_c18;
  undefined8 uStack_c10;
  undefined8 local_c08;
  undefined8 uStack_c00;
  undefined8 local_bf8;
  undefined8 uStack_bf0;
  undefined8 local_be8;
  undefined8 uStack_be0;
  undefined8 local_bd8;
  undefined8 uStack_bd0;
  undefined8 local_bc8;
  undefined6 uStack_bc0;
  undefined2 uStack_bba;
  undefined6 uStack_bb8;
  undefined1 local_bb0;
  undefined1 local_bac;
  undefined1 local_ba8;
  undefined8 local_ba4;
  undefined8 uStack_b9c;
  undefined1 local_b94;
  undefined8 local_b90;
  undefined2 local_b88;
  undefined1 local_b86;
  undefined4 local_b84;
  undefined1 local_b80;
  undefined1 local_b20;
  undefined1 local_b18;
  undefined1 local_ab8;
  undefined4 local_ab0;
  undefined2 local_aac;
  undefined1 local_aa8;
  undefined1 local_aa4;
  undefined1 local_aa0;
  undefined1 local_a9c;
  undefined1 local_a98;
  undefined1 local_a94;
  undefined1 local_a90;
  undefined1 local_a8c;
  undefined1 local_a88;
  undefined1 local_a84;
  undefined1 local_a80 [160];
  char local_9e0;
  byte local_9d8;
  undefined4 local_9d7;
  undefined2 local_9d3;
  void *local_9c8;
  byte local_9c0;
  void *local_9b0;
  char local_9a8;
  undefined4 local_9a0;
  undefined1 local_99c;
  DCDFastImageViewProps aDStack_998 [1760];
  undefined1 auStack_2b8 [160];
  char local_218;
  byte local_210;
  void *local_200;
  byte local_1f8;
  void *local_1e8;
  char local_1e0;
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
  void *local_140;
  undefined8 uStack_138;
  void *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined4 local_100 [4];
  undefined4 local_f0 [2];
  undefined8 local_e8;
  undefined4 local_c0;
  void *local_b8;
  void *pvStack_b0;
  undefined8 uStack_a8;
  void *local_a0;
  void *local_98;
  undefined8 uStack_90;
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100[0] = 0;
  local_f0[0] = 0;
  local_e8 = 0;
  local_c0 = 0;
  pvStack_b0 = (void *)0x0;
  local_b8 = (void *)0x0;
  local_a0 = (void *)0x0;
  uStack_a8 = 0;
  uStack_90 = 0;
  local_98 = (void *)0x0;
  local_120 = 0;
  uStack_128 = 0;
  local_130 = (void *)0x0;
  uStack_138 = 0;
  local_140 = (void *)0x0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_168 = 0;
  local_170 = 0;
  uStack_178 = 0;
  local_180 = 0;
  uStack_188 = 0;
  local_190 = 0;
  uStack_198 = 0;
  local_1a0 = 0;
  uStack_1a8 = 0;
  local_1b0 = 0;
  uStack_1b8 = 0;
  local_1c0 = 0;
  uStack_1c8 = 0;
  local_1d0 = 0;
                    /* try { // try from 0079cf6c to 0079cf77 has its CatchHandler @ 0079d5a4 */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1d0);
  local_120 = CONCAT44(local_120._4_4_,0x3f800000);
  local_1170[0] = 0xffffffff;
  uStack_128 = 0;
  local_130 = (void *)0x0;
  uStack_138 = 0;
  local_140 = (void *)0x0;
  local_1168 = &local_1d0;
  facebook::react::RawProps::facebook::react::RawProps::parse(&local_118,param_1);
  memset(local_1140,0,0x7a8);
  local_88[0] = 5;
  local_70 = 0;
  local_1160 = PTR_construction_vtable_0099e1e8 + 0x20;
  local_1140[0] = 5;
  uStack_1148 = 0;
  local_1150 = 0;
  uStack_1158 = 0;
  local_68 = 0;
  uStack_60 = 0x3f800000;
  uStack_78 = 0;
  local_80 = 0;
  uStack_1130 = 0;
  local_1138 = 0;
  uStack_1120 = 0;
  local_1128 = 0;
  local_1118 = 0x3f800000;
  folly::dynamic::folly::dynamic::destroy(local_88);
  local_110c = 0;
  local_10b1 = 0;
  uStack_bd0 = _UNK_00470a7c;
  local_bd8 = _DAT_00470a74;
  local_110b = _s__00375408;
  uStack_cc8 = _UNK_00371598;
  local_cd0 = _DAT_00371590;
  uStack_be0 = _UNK_00470a6c;
  local_be8 = _DAT_00470a64;
  local_ff4 = 0;
  uStack_bf0 = _UNK_00470a5c;
  local_bf8 = _DAT_00470a54;
  uStack_c00 = _UNK_00470a4c;
  local_c08 = _DAT_00470a44;
  uStack_bb8 = 0;
  local_fec = 0;
  uStack_1020 = 0;
  local_1028 = 0;
  uStack_100c = 0;
  uStack_1030 = 0;
  local_1038 = 0;
  uStack_bc0 = 0;
  uStack_bba = 0;
  local_bc8 = 0;
  local_1110 = 0x10410710;
  local_10b5 = 0x40004;
  uStack_1014 = 0;
  uStack_1010 = 0;
  uStack_101c = 0;
  uStack_1018 = 0;
  uStack_1000 = 0;
  local_1008 = 0;
  local_ff8 = 0x7fc00000;
  local_ff0 = 0x7fc00000;
  local_fe8 = 0x7fc00000;
  local_fe0 = 0x7fc00000;
  local_fd8 = 0x7fc00000;
  local_fd0 = 0x7fc00000;
  local_fc8 = 0x7fc00000;
  local_fc0 = 0x7fc00000;
  local_fb8 = 0x7fc00000;
  local_fb0 = 0x7fc00000;
  local_fa8 = 0x7fc00000;
  local_fa0 = 0x7fc00000;
  local_f98 = 0x7fc00000;
  local_f90 = 0x7fc00000;
  local_f88 = 0x7fc00000;
  local_f80 = 0x7fc00000;
  uStack_f1f = 0;
  uStack_f20 = 0;
  uStack_f0c = 0;
  local_f14 = 0;
  uStack_efc = 0;
  uStack_f04 = 0;
  uStack_eec = 0;
  local_ef4 = 0;
  uStack_edc = 0;
  uStack_ee4 = 0;
  uStack_ecc = 0;
  local_ed4 = 0;
  uStack_ebc = 0;
  uStack_ec4 = 0;
  local_eb7 = 0;
  uStack_eb4 = 0;
  local_e5c = 1;
  local_e5b = 0;
  local_e56 = 0x23;
  local_e1c = 0x3f800000;
  uStack_d00 = 0;
  local_d08 = 0;
  uStack_cf0 = 0;
  uStack_cf8 = 0;
  uStack_d10 = 0;
  local_d18 = 0;
  local_ce4 = 0;
  uStack_cb0 = 0;
  local_cb8 = 0;
  uStack_ca0 = 0;
  uStack_ca8 = 0;
  uStack_c90 = 0;
  local_c98 = 0;
  uStack_c80 = 0;
  uStack_c88 = 0;
  uStack_c70 = 0;
  local_c78 = 0;
  uStack_c60 = 0;
  uStack_c68 = 0;
  uStack_c50 = 0;
  local_c58 = 0;
  uStack_c40 = 0;
  uStack_c48 = 0;
  uStack_c30 = 0;
  local_c38 = 0;
  uStack_c20 = 0;
  uStack_c28 = 0;
  uStack_c10 = 0;
  local_c18 = 0;
  uStack_10a7 = 0;
  uStack_10fb = 0;
  local_1103 = 0;
  uStack_10eb = 0;
  local_10f3 = 0;
  uStack_10db = 0;
  local_10e3 = 0;
  uStack_10cb = 0;
  local_10d3 = 0;
  uStack_10bd = 0;
  uStack_10c5 = 0;
  uStack_10c3 = 0;
  local_10a9 = 0;
  uStack_10a8 = 0;
  uStack_1098 = 0;
  uStack_10a0 = 0;
  local_1088 = 0;
  uStack_1090 = 0;
  local_1078 = 0;
  uStack_1080 = 0;
  local_1068 = 0;
  uStack_1070 = 0;
  local_1058 = 0;
  uStack_1060 = 0;
  uStack_1048 = 0;
  uStack_1050 = 0;
  local_1040 = 0;
  local_fe4 = 0;
  local_fdc = 0;
  local_fd4 = 0;
  local_fcc = 0;
  local_fc4 = 0;
  local_fbc = 0;
  local_fb4 = 0;
  local_fac = 0;
  local_fa4 = 0;
  local_f9c = 0;
  local_f94 = 0;
  local_f8c = 0;
  local_f84 = 0;
  local_f7c = 0;
  local_f78 = 0;
  local_f74 = 0;
  local_f68 = 0;
  local_eac = 0;
  local_ea8 = 0;
  local_ea4 = 0;
  local_ea0 = 0;
  local_e9c = 0;
  local_e98 = 0;
  local_e80 = 0;
  uStack_f58 = 0;
  local_f60 = 0;
  uStack_f48 = 0;
  uStack_f50 = 0;
  uStack_f38 = 0;
  local_f40 = 0;
  uStack_f28 = 0;
  local_f27 = 0;
  uStack_f30 = 0;
  uStack_e70 = 0;
  local_e78 = 0;
  local_e68 = 0;
  local_e60 = 0;
  local_e57 = 0;
  uStack_e48 = 0;
  local_e50 = 0;
  uStack_e38 = 0;
  uStack_e40 = 0;
  uStack_e28 = 0;
  uStack_e21 = 0;
  local_e30 = 0;
  local_e14 = 0;
  local_e0c = 0;
  local_e08 = 0;
  local_e00 = 0;
  local_dfc = 0;
  local_df4 = 0;
  local_df0 = 0;
  local_de8 = 0;
  local_de4 = 0;
  local_ddc = 0;
  local_dd8 = 0;
  local_dd0 = 0;
  local_dcc = 0;
  local_dc4 = 0;
  local_dc0 = 0;
  local_db8 = 0;
  local_db4 = 0;
  local_dac = 0;
  local_da8 = 0;
  local_da0 = 0;
  local_d9c = 0;
  local_d94 = 0;
  local_d90 = 0;
  local_d88 = 0;
  local_d84 = 0;
  local_d7c = 0;
  local_d78 = 0;
  local_d74 = 0;
  local_d70 = 0;
  local_d6c = 0;
  local_d68 = 0;
  local_d64 = 0;
  local_d60 = 0;
  local_d5c = 0;
  local_d58 = 0;
  local_d54 = 0;
  local_d50 = 0;
  local_d4c = 0;
  local_d48 = 0;
  local_d44 = 0;
  local_d40 = 0;
  local_d3c = 0;
  local_d38 = 0;
  local_d34 = 0;
  local_d30 = 0;
  local_d2c = 0;
  local_d28 = 0;
  local_d24 = 0;
  local_d20 = 0;
  local_d1c = 0;
  local_cd8 = 0;
  local_ce8 = 0;
  local_cdc = 0;
  local_cc0 = 0;
  local_bb0 = 0;
  local_bac = 0;
  local_ba8 = 0;
  local_b90 = 0;
  uStack_b9c = 0;
  local_ba4 = 0;
  local_b94 = 0;
  local_b88 = 0x101;
  local_b86 = 0;
  local_b84 = 0;
  local_b80 = 0;
  local_b20 = 0;
  local_b18 = 0;
  local_ab8 = 0;
  local_aa8 = 0;
  local_aa4 = 0;
  local_aa0 = 0;
  local_a9c = 0;
  local_a98 = 0;
  local_a94 = 0;
  local_a90 = 0;
  local_a8c = 0;
  local_a88 = 0;
  local_a84 = 0;
  local_aac = 0;
  local_ab0 = 0;
  local_1160 = PTR_vtable_0099dfb0 + 0x20;
  local_a80[0] = 0;
  local_9d8 = 10;
  local_9d7 = 0x65766f63;
  local_9d3 = 0x72;
  local_9e0 = '\0';
  local_9c0 = 0;
  local_9a8 = '\0';
  local_9a0 = (undefined4)DAT_00374e78;
  local_99c = 0;
                    /* try { // try from 0079d3a0 to 0079d3b3 has its CatchHandler @ 0079d5a4 */
  facebook::react::DCDFastImageViewProps::DCDFastImageViewProps
            (aDStack_998,(PropsParserContext *)local_1170,(DCDFastImageViewProps *)&local_1160,
             (RawProps *)&local_118);
  if ((local_1e0 != '\0') && ((local_1f8 & 1) != 0)) {
    operator_delete(local_1e8);
  }
  if ((local_210 & 1) != 0) {
    operator_delete(local_200);
  }
  if (local_218 != '\0') {
    FUN_0079dd90(auStack_2b8);
  }
  puVar5 = PTR_PTR_0099dfb8;
  FUN_0078917c(aDStack_998,PTR_PTR_0099dfb8 + 8);
  if ((local_9a8 != '\0') && ((local_9c0 & 1) != 0)) {
    operator_delete(local_9b0);
  }
  if ((local_9d8 & 1) != 0) {
    operator_delete(local_9c8);
  }
  if (local_9e0 != '\0') {
    FUN_0079dd90(local_a80);
  }
  FUN_0078917c(&local_1160,puVar5 + 8);
  facebook::react::RawPropsParser::facebook::react::RawPropsParser::postPrepare(param_1);
  pvVar3 = local_140;
  puVar4 = (undefined8 *)local_130;
  while (puVar4 != (undefined8 *)0x0) {
    plVar7 = (long *)puVar4[6];
    pvVar8 = (void *)*puVar4;
    local_140 = pvVar3;
    if ((plVar7 == (long *)0x0) || (lVar6 = FUN_00757990(0xffffffffffffffff,plVar7 + 1), lVar6 != 0)
       ) {
      bVar1 = *(byte *)(puVar4 + 2);
    }
    else {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__ndk1::__shared_weak_count::__release_weak();
      bVar1 = *(byte *)(puVar4 + 2);
    }
    if ((bVar1 & 1) != 0) {
      operator_delete((void *)puVar4[4]);
    }
    operator_delete(puVar4);
    pvVar3 = local_140;
    puVar4 = (undefined8 *)pvVar8;
  }
  local_140 = (void *)0x0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)&uStack_178);
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)&uStack_1a8);
  std::__ndk1::mutex::~mutex((mutex *)&local_1d0);
  pvVar8 = local_a0;
  pvVar3 = local_98;
  if (local_a0 != (void *)0x0) {
    while (pvVar3 != pvVar8) {
      if (*(uint *)((long)pvVar3 + -8) != 0xffffffff) {
                    /* try { // try from 0079d534 to 0079d53f has its CatchHandler @ 0079d5a8 */
        (*(code *)(&PTR_FUN_0097fbf8)[*(uint *)((long)pvVar3 + -8)])
                  (&local_1160,(void *)((long)pvVar3 + -0x38));
      }
      *(undefined4 *)((long)pvVar3 + -8) = 0xffffffff;
      pvVar3 = (void *)((long)pvVar3 + -0x38);
    }
    local_98 = pvVar8;
    operator_delete(local_a0);
  }
  if (local_b8 != (void *)0x0) {
    pvStack_b0 = local_b8;
    operator_delete(local_b8);
  }
  folly::dynamic::folly::dynamic::destroy(local_f0);
  facebook::jsi::Value::~Value((Value *)local_100);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0079d5ac  FUN_0079d5ac =====

void FUN_0079d5ac(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 0079d5d0  FUN_0079d5d0 =====

undefined * FUN_0079d5d0(void)

{
  return PTR_DCDFastImageViewComponentName_0099dfa8;
}


// ===== 0079d5dc  FUN_0079d5dc =====

undefined * FUN_0079d5dc(void)

{
  return PTR_DCDFastImageViewComponentName_0099dfa8;
}


// ===== 0079d5e8  FUN_0079d5e8 =====

undefined8 FUN_0079d5e8(void)

{
  return 0x61;
}


// ===== 0079d5f0  FUN_0079d5f0 =====

void FUN_0079d5f0(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 uStack_49;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_64 = (**(code **)(*param_2 + 0x20))();
  FUN_0079dec0(&local_60,&uStack_49,param_3,param_4,&local_64);
                    /* try { // try from 0079d658 to 0079d65f has its CatchHandler @ 0079d690 */
  (**(code **)(*param_2 + 0x60))(param_2,local_60);
  param_1[1] = uStack_58;
  *param_1 = local_60;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0079d6b8  FUN_0079d6b8 =====

void FUN_0079d6b8(undefined8 *param_1,long *param_2,shared_ptr *param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *local_70;
  long *local_68;
  long *local_60;
  long *plStack_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_0079e174(&local_60,&local_70);
                    /* try { // try from 0079d704 to 0079d70f has its CatchHandler @ 0079d7bc */
  (**(code **)(*local_60 + 0x10))(local_60,param_3,param_4);
  local_70 = local_60;
  local_68 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    FUN_00757d00(1,plStack_58 + 1);
  }
                    /* try { // try from 0079d728 to 0079d737 has its CatchHandler @ 0079d7ac */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_70);
  plVar2 = local_68;
  if ((local_68 != (long *)0x0) &&
     (lVar3 = FUN_00757990(0xffffffffffffffff,local_68 + 1), lVar3 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 0079d774 to 0079d77b has its CatchHandler @ 0079d7bc */
  (**(code **)(*param_2 + 0x60))(param_2,local_60);
  param_1[1] = plStack_58;
  *param_1 = local_60;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0079d7e4  FUN_0079d7e4 =====

void FUN_0079d7e4(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0079d7f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 0079d7f8  FUN_0079d7f8 =====

void FUN_0079d7f8(undefined8 *param_1,long param_2,undefined8 param_3,long *param_4,
                 RawProps *param_5)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  char *pcVar6;
  int iVar7;
  ulong uVar8;
  char *pcVar9;
  long lVar10;
  long *local_100;
  long *local_f8;
  long *local_f0;
  long *plStack_e8;
  undefined1 uStack_d1;
  dynamic adStack_d0 [48];
  uint local_a0;
  int local_98 [6];
  long *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((*param_4 == 0) && (uVar8 = facebook::react::RawProps::isEmpty(), (uVar8 & 1) != 0)) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29DCDFastImageViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21DCDFastImageViewPropsENS0_28DCDFastImageViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd50
         & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29DCDFastImageViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21DCDFastImageViewPropsENS0_28DCDFastImageViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd50
                                   ), iVar7 != 0)) {
                    /* try { // try from 0079dac4 to 0079dad3 has its CatchHandler @ 0079db00 */
      FUN_0079e5ec(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29DCDFastImageViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21DCDFastImageViewPropsENS0_28DCDFastImageViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd48
                   ,adStack_d0);
      __cxa_atexit(FUN_0079e59c,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29DCDFastImageViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21DCDFastImageViewPropsENS0_28DCDFastImageViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd48
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29DCDFastImageViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21DCDFastImageViewPropsENS0_28DCDFastImageViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd50
                         );
    }
    lVar10 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29DCDFastImageViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21DCDFastImageViewPropsENS0_28DCDFastImageViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd48
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29DCDFastImageViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21DCDFastImageViewPropsENS0_28DCDFastImageViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd48
    ;
    param_1[1] = lVar10;
    if (lVar10 != 0) {
      FUN_00757d00(1,lVar10 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    FUN_0079e278(&local_f0,param_3,param_5,param_4);
                    /* try { // try from 0079d8a0 to 0079d8b3 has its CatchHandler @ 0079db34 */
    uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if (((uVar8 & 1) == 0) ||
       ((uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar8 & 1) == 0 ||
        (uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enablePropsUpdateReconciliationAndroid(), (uVar8 & 1) == 0)))) {
LAB_0079d8dc:
      local_100 = local_f0;
      local_f8 = plStack_e8;
      if (plStack_e8 != (long *)0x0) {
        FUN_00757d00(1,plStack_e8 + 1);
      }
                    /* try { // try from 0079d8f4 to 0079d903 has its CatchHandler @ 0079db24 */
      FUN_0079e3c4(&local_100,param_5,param_4);
      plVar4 = local_f8;
      if ((local_f8 != (long *)0x0) &&
         (lVar10 = FUN_00757990(0xffffffffffffffff,local_f8 + 1), lVar10 == 0)) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 0079d8c4 to 0079d8cb has its CatchHandler @ 0079db14 */
      pcVar9 = (char *)(**(code **)(*local_f0 + 0x10))();
      iVar7 = strcmp(PTR_DCDFastImageViewComponentName_0099dfa8,pcVar9);
      if (iVar7 != 0) goto LAB_0079d8dc;
      bVar3 = false;
    }
                    /* try { // try from 0079d938 to 0079d93b has its CatchHandler @ 0079db34 */
    uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar8 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 0079d948 to 0079d963 has its CatchHandler @ 0079db20 */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(local_f0 + 4));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_f0;
      plVar5 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 0079daa4 to 0079dab3 has its CatchHandler @ 0079db18 */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_0079db80;
      }
      for (; local_f0 = plVar4, plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (*(int *)(plVar5 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 0079da84 to 0079da93 has its CatchHandler @ 0079db40 */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_0079db80;
        }
        uVar1 = 0x811c9dc5;
        uVar8 = (ulong)(*(byte *)(plVar5 + 3) >> 1);
        pcVar6 = (char *)((long)plVar5 + 0x19);
        pcVar9 = (char *)((long)plVar5 + 0x19);
        if ((*(byte *)(plVar5 + 3) & 1) != 0) {
          uVar8 = plVar5[4];
          pcVar6 = (char *)plVar5[5];
          pcVar9 = (char *)plVar5[5];
        }
        for (; uVar8 != 0; uVar8 = uVar8 - 1) {
          uVar1 = (uVar1 ^ (int)*pcVar6) * 0x1000193;
          pcVar6 = pcVar6 + 1;
        }
                    /* try { // try from 0079d9e4 to 0079d9ef has its CatchHandler @ 0079db48 */
        folly::dynamic::dynamic(adStack_d0,(dynamic *)(plVar5 + 8));
        local_a0 = 0;
                    /* try { // try from 0079d9f4 to 0079da0b has its CatchHandler @ 0079db4c */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (plVar4,param_3,uVar1,pcVar9,adStack_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 0079da1c to 0079da27 has its CatchHandler @ 0079db3c */
          (*(code *)(&PTR_FUN_0097fbf8)[local_a0])(&uStack_d1,adStack_d0);
        }
        plVar4 = local_f0;
      }
      folly::dynamic::folly::dynamic::destroy(local_98);
    }
    param_1[1] = plStack_e8;
    *param_1 = local_f0;
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_0079db80:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0079db84  FUN_0079db84 =====

void FUN_0079db84(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 0079db8c  FUN_0079db8c =====

void FUN_0079db8c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 0079db94  FUN_0079db94 =====

void FUN_0079db94(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined1 auStack_80 [8];
  long *local_78;
  long *local_70;
  long *local_68;
  undefined1 uStack_59;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  FUN_0078a610(auStack_80,&uStack_59,param_3 + 8,param_3 + 4);
                    /* try { // try from 0079dbdc to 0079dbe3 has its CatchHandler @ 0079dd64 */
  plVar4 = (long *)operator_new(0x68);
  plVar1 = plVar4 + 3;
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_00981ea8;
                    /* try { // try from 0079dbfc to 0079dc0b has its CatchHandler @ 0079dd4c */
  FUN_0079e8fc(plVar1,auStack_80,param_2 + 8);
  local_70 = plVar1;
  local_68 = plVar4;
  if ((local_78 != (long *)0x0) &&
     (lVar5 = FUN_00757990(0xffffffffffffffff,local_78 + 1), lVar5 == 0)) {
    (**(code **)(*local_78 + 0x10))(local_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 0079dc40 to 0079dc47 has its CatchHandler @ 0079dd3c */
  puVar6 = (undefined8 *)operator_new(0x1a0);
  puVar2 = puVar6 + 4;
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_0097fff0;
                    /* try { // try from 0079dc60 to 0079dc77 has its CatchHandler @ 0079dd24 */
  FUN_0079eafc(puVar2,param_3,&local_70,param_2 + 8,param_2);
  plVar1 = local_70;
  *param_1 = (long)puVar2;
  param_1[1] = (long)puVar6;
  local_90 = puVar2;
  local_88 = puVar6;
  FUN_00757d00(1,puVar6 + 2);
                    /* try { // try from 0079dc90 to 0079dc9b has its CatchHandler @ 0079dd04 */
  facebook::react::EventEmitter::facebook::react::EventEmitter::setShadowNodeFamily
            (plVar1,&local_90);
  if (local_88 != (undefined8 *)0x0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar1 = local_68;
  if ((local_68 != (long *)0x0) &&
     (lVar5 = FUN_00757990(0xffffffffffffffff,local_68 + 1), lVar5 == 0)) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0079dd8c  FUN_0079dd8c =====

void FUN_0079dd8c(void)

{
  return;
}


// ===== 0079dd90  FUN_0079dd90 =====

void FUN_0079dd90(long param_1)

{
  byte bVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  
  pvVar3 = *(void **)(param_1 + 0x88);
  if (pvVar3 != (void *)0x0) {
    pvVar4 = *(void **)(param_1 + 0x90);
    pvVar2 = pvVar3;
    if (pvVar4 != pvVar3) {
      do {
        if ((*(byte *)((long)pvVar4 + -0x18) & 1) != 0) {
          operator_delete(*(void **)((long)pvVar4 + -8));
        }
        if ((*(byte *)((long)pvVar4 + -0x30) & 1) != 0) {
          operator_delete(*(void **)((long)pvVar4 + -0x20));
        }
        pvVar4 = (void *)((long)pvVar4 + -0x30);
      } while (pvVar4 != pvVar3);
      pvVar2 = *(void **)(param_1 + 0x88);
    }
    *(void **)(param_1 + 0x90) = pvVar3;
    operator_delete(pvVar2);
  }
  if ((*(byte *)(param_1 + 0x68) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x50);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x78));
    bVar1 = *(byte *)(param_1 + 0x50);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x28);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x60));
    bVar1 = *(byte *)(param_1 + 0x28);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 8);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x38));
    bVar1 = *(byte *)(param_1 + 8);
  }
  if ((bVar1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 0079de70  FUN_0079de70 =====

void FUN_0079de70(long param_1)

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


// ===== 0079dec0  FUN_0079dec0 =====

void FUN_0079dec0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 *param_5)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined4 uVar8;
  
  puVar6 = (undefined8 *)operator_new(0x400);
  uVar8 = *param_5;
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_00981cf0;
                    /* try { // try from 0079df08 to 0079df17 has its CatchHandler @ 0079dfb0 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
            ((YogaLayoutableShadowNode *)(puVar6 + 3),param_3,param_4,uVar8);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_00981d40;
  uVar2 = *(uint *)((long)puVar6 + 0x6c);
  uVar1 = uVar2 & 3 | (uint)((*(byte *)(lVar7 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)puVar6 + 0x6c) = uVar2 & 0xfffffff8 | uVar1;
  if ((*(uint *)(lVar7 + 0x50) & 0x30000000) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    if (*(char *)(lVar7 + 0x5b4) != '\0') {
      uVar8 = *(undefined4 *)(lVar7 + 0x5b0);
    }
  }
  *(undefined4 *)(puVar6 + 10) = uVar8;
  cVar3 = *(char *)(lVar7 + 0x6b0);
  cVar4 = *(char *)(lVar7 + 0x6b1);
  cVar5 = *(char *)(lVar7 + 0x1e8);
  *param_1 = (YogaLayoutableShadowNode *)(puVar6 + 3);
  param_1[1] = puVar6;
  *(uint *)((long)puVar6 + 0x6c) =
       uVar2 & 0xfffff000 |
       uVar2 & 0x7f8 | uVar1 | (uint)((cVar3 != '\0' || cVar4 != '\0') || cVar5 != '\0') << 0xb;
  return;
}


// ===== 0079dfcc  FUN_0079dfcc =====

void FUN_0079dfcc(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00981cf0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0079dfdc  FUN_0079dfdc =====

void FUN_0079dfdc(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00981cf0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0079e00c  FUN_0079e00c =====

void FUN_0079e00c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0079e014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 0079e018  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0079e01c  FUN_0079e01c =====

void FUN_0079e01c(long *param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = (void *)param_1[0x79];
  *param_1 = (long)(PTR_vtable_0099de98 + 0x10);
  if (pvVar4 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x7a];
    pvVar2 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        plVar3 = *(long **)((long)pvVar5 + -8);
        if ((plVar3 != (long *)0x0) &&
           (lVar1 = FUN_00757990(0xffffffffffffffff,plVar3 + 1), lVar1 == 0)) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
        pvVar5 = (void *)((long)pvVar5 + -0x10);
      } while (pvVar5 != pvVar4);
      pvVar2 = (void *)param_1[0x79];
    }
    param_1[0x7a] = (long)pvVar4;
    operator_delete(pvVar2);
  }
  pvVar4 = (void *)param_1[0x73];
  if (pvVar4 != (void *)0x0) {
    param_1[0x74] = (long)pvVar4;
    operator_delete(pvVar4);
  }
  FUN_007890e8(param_1 + 0x23);
  FUN_00789784(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0079e0dc  FUN_0079e0dc =====

void FUN_0079e0dc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  facebook::react::LayoutableShadowNode::getLayoutMetrics();
  facebook::react::BaseViewProps::resolveTransform(*(LayoutMetrics **)(param_1 + 8));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0079e144  FUN_0079e144 =====

bool FUN_0079e144(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 0079e15c  FUN_0079e15c =====

bool FUN_0079e15c(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 0079e174  FUN_0079e174 =====

void FUN_0079e174(undefined8 *param_1,undefined8 param_2,ShadowNode *param_3,
                 ShadowNodeFragment *param_4)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined4 uVar8;
  
  puVar6 = (undefined8 *)operator_new(0x400);
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_00981cf0;
                    /* try { // try from 0079e1b4 to 0079e1c3 has its CatchHandler @ 0079e25c */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
            ((YogaLayoutableShadowNode *)(puVar6 + 3),param_3,param_4);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_00981d40;
  uVar2 = *(uint *)((long)puVar6 + 0x6c);
  uVar1 = uVar2 & 3 | (uint)((*(byte *)(lVar7 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)puVar6 + 0x6c) = uVar2 & 0xfffffff8 | uVar1;
  if ((*(uint *)(lVar7 + 0x50) & 0x30000000) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    if (*(char *)(lVar7 + 0x5b4) != '\0') {
      uVar8 = *(undefined4 *)(lVar7 + 0x5b0);
    }
  }
  *(undefined4 *)(puVar6 + 10) = uVar8;
  cVar3 = *(char *)(lVar7 + 0x6b0);
  cVar4 = *(char *)(lVar7 + 0x6b1);
  cVar5 = *(char *)(lVar7 + 0x1e8);
  *param_1 = (YogaLayoutableShadowNode *)(puVar6 + 3);
  param_1[1] = puVar6;
  *(uint *)((long)puVar6 + 0x6c) =
       uVar2 & 0xfffff000 |
       uVar2 & 0x7f8 | uVar1 | (uint)((cVar3 != '\0' || cVar4 != '\0') || cVar5 != '\0') << 0xb;
  return;
}


// ===== 0079e278  FUN_0079e278 =====

void FUN_0079e278(undefined8 *param_1,PropsParserContext *param_2,RawProps *param_3,long *param_4)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  DCDFastImageViewProps *pDVar4;
  undefined1 uStack_59;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pDVar4 = (DCDFastImageViewProps *)*param_4;
  if (pDVar4 == (DCDFastImageViewProps *)0x0) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29DCDFastImageViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21DCDFastImageViewPropsENS0_28DCDFastImageViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd50
         & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29DCDFastImageViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21DCDFastImageViewPropsENS0_28DCDFastImageViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd50
                                   ), iVar2 != 0)) {
                    /* try { // try from 0079e344 to 0079e353 has its CatchHandler @ 0079e380 */
      FUN_0079e5ec(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29DCDFastImageViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21DCDFastImageViewPropsENS0_28DCDFastImageViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd48
                   ,&uStack_59);
      __cxa_atexit(FUN_0079e59c,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29DCDFastImageViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21DCDFastImageViewPropsENS0_28DCDFastImageViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd48
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29DCDFastImageViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21DCDFastImageViewPropsENS0_28DCDFastImageViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd50
                         );
    }
    pDVar4 = *(DCDFastImageViewProps **)
              PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29DCDFastImageViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21DCDFastImageViewPropsENS0_28DCDFastImageViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd48
    ;
  }
  puVar3 = (undefined8 *)operator_new(0x7e0);
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_00981e58;
                    /* try { // try from 0079e2f0 to 0079e303 has its CatchHandler @ 0079e394 */
  facebook::react::DCDFastImageViewProps::DCDFastImageViewProps
            ((DCDFastImageViewProps *)(puVar3 + 3),param_2,pDVar4,param_3);
  *param_1 = (DCDFastImageViewProps *)(puVar3 + 3);
  param_1[1] = puVar3;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0079e3c4  FUN_0079e3c4 =====

void FUN_0079e3c4(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  plVar3 = local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar5 = *param_1;
  if (*param_3 == 0) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29DCDFastImageViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21DCDFastImageViewPropsENS0_28DCDFastImageViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd50
         & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29DCDFastImageViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21DCDFastImageViewPropsENS0_28DCDFastImageViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd50
                                   ), iVar2 != 0)) {
                    /* try { // try from 0079e4a8 to 0079e4b7 has its CatchHandler @ 0079e4e4 */
      FUN_0079e5ec(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29DCDFastImageViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21DCDFastImageViewPropsENS0_28DCDFastImageViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd48
                   ,local_70);
      __cxa_atexit(FUN_0079e59c,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29DCDFastImageViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21DCDFastImageViewPropsENS0_28DCDFastImageViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd48
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29DCDFastImageViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21DCDFastImageViewPropsENS0_28DCDFastImageViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd50
                         );
    }
    local_50 = (long *)0x0;
                    /* try { // try from 0079e434 to 0079e447 has its CatchHandler @ 0079e4f8 */
    facebook::react::Props::facebook::react::Props::initializeDynamicProps
              (uVar5,*(undefined8 *)
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29DCDFastImageViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21DCDFastImageViewPropsENS0_28DCDFastImageViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd48
               ,param_2,local_70);
  }
  else {
    local_50 = (long *)0x0;
                    /* try { // try from 0079e3f8 to 0079e40f has its CatchHandler @ 0079e4fc */
    facebook::react::Props::facebook::react::Props::initializeDynamicProps
              (uVar5,*param_3,param_2,local_70);
  }
  if (local_50 == local_70) {
    lVar4 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_0079e474;
    lVar4 = 5;
    plVar3 = local_50;
  }
  (**(code **)(*plVar3 + lVar4 * 8))();
LAB_0079e474:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0079e54c  FUN_0079e54c =====

void FUN_0079e54c(long param_1)

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


// ===== 0079e59c  FUN_0079e59c =====

void FUN_0079e59c(long param_1)

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


// ===== 0079e5ec  FUN_0079e5ec =====

void FUN_0079e5ec(undefined8 *param_1)

{
  undefined8 *__s;
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)operator_new(0x7e0);
  __s = puVar3 + 3;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_00981e08;
  memset(__s,0,0x7c8);
                    /* try { // try from 0079e630 to 0079e643 has its CatchHandler @ 0079e6f0 */
  FUN_00788b10(__s,PTR_PTR_0099dfb8 + 0x10);
  *(undefined4 *)((long)puVar3 + 0x5f4) = 0;
  *(undefined1 *)(puVar3 + 0xbf) = 0;
  *(undefined1 *)(puVar3 + 0xcb) = 0;
  *(undefined1 *)(puVar3 + 0xcc) = 0;
  *(undefined1 *)(puVar3 + 0xd8) = 0;
  *(undefined1 *)(puVar3 + 0xda) = 0;
  *(undefined1 *)((long)puVar3 + 0x6d4) = 0;
  *(undefined1 *)(puVar3 + 0xdb) = 0;
  *(undefined1 *)((long)puVar3 + 0x6dc) = 0;
  *(undefined1 *)(puVar3 + 0xdc) = 0;
  *(undefined1 *)((long)puVar3 + 0x6e4) = 0;
  *(undefined1 *)(puVar3 + 0xdd) = 0;
  *(undefined1 *)((long)puVar3 + 0x6ec) = 0;
  *(undefined1 *)(puVar3 + 0xde) = 0;
  *(undefined1 *)((long)puVar3 + 0x6f4) = 0;
  puVar2 = PTR_vtable_0099dfb0;
  *(undefined4 *)(puVar3 + 0xd9) = 0;
  *(undefined2 *)((long)puVar3 + 0x6cc) = 0;
  *(undefined1 *)(puVar3 + 0xdf) = 0;
  puVar3[3] = puVar2 + 0x20;
  *(undefined1 *)(puVar3 + 0xf4) = 10;
  *(undefined2 *)((long)puVar3 + 0x7a5) = 0x72;
  *(undefined1 *)(puVar3 + 0xf3) = 0;
  *(undefined4 *)((long)puVar3 + 0x7a1) = 0x65766f63;
  uVar1 = DAT_00374e78;
  *(undefined1 *)(puVar3 + 0xf7) = 0;
  *(undefined1 *)(puVar3 + 0xfa) = 0;
  *(int *)(puVar3 + 0xfb) = (int)uVar1;
  *(undefined1 *)((long)puVar3 + 0x7dc) = 0;
  *param_1 = __s;
  param_1[1] = puVar3;
  return;
}


// ===== 0079e70c  FUN_0079e70c =====

void FUN_0079e70c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00981e08;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0079e71c  FUN_0079e71c =====

void FUN_0079e71c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00981e08;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0079e74c  FUN_0079e74c =====

void FUN_0079e74c(long param_1)

{
  if ((*(char *)(param_1 + 2000) != '\0') && ((*(byte *)(param_1 + 0x7b8) & 1) != 0)) {
    operator_delete(*(void **)(param_1 + 0x7c8));
  }
  if ((*(byte *)(param_1 + 0x7a0) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x7b0));
  }
  if (*(char *)(param_1 + 0x798) != '\0') {
    FUN_0079dd90(param_1 + 0x6f8);
  }
  FUN_0078917c(param_1 + 0x18,PTR_PTR_0099dfb8 + 8);
  return;
}


// ===== 0079e7b0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0079e7b4  FUN_0079e7b4 =====

void FUN_0079e7b4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00981e58;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0079e7c4  FUN_0079e7c4 =====

void FUN_0079e7c4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00981e58;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0079e7f4  FUN_0079e7f4 =====

void FUN_0079e7f4(long param_1)

{
  if ((*(char *)(param_1 + 2000) != '\0') && ((*(byte *)(param_1 + 0x7b8) & 1) != 0)) {
    operator_delete(*(void **)(param_1 + 0x7c8));
  }
  if ((*(byte *)(param_1 + 0x7a0) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x7b0));
  }
  if (*(char *)(param_1 + 0x798) != '\0') {
    FUN_0079dd90(param_1 + 0x6f8);
  }
  FUN_0078917c(param_1 + 0x18,PTR_PTR_0099dfb8 + 8);
  return;
}


// ===== 0079e858  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0079e85c  FUN_0079e85c =====

void FUN_0079e85c(long param_1)

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


// ===== 0079e8ac  FUN_0079e8ac =====

void FUN_0079e8ac(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00981ea8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0079e8bc  FUN_0079e8bc =====

void FUN_0079e8bc(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00981ea8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0079e8ec  FUN_0079e8ec =====

void FUN_0079e8ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0079e8f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 0079e8f8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0079e8fc  FUN_0079e8fc =====

EventEmitter * FUN_0079e8fc(EventEmitter *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long *plStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plStack_48 = (long *)param_2[1];
  local_50 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  local_60 = *param_3;
  local_58 = param_3[1];
  if (local_58 != 0) {
    FUN_00757d00(1,local_58 + 0x10);
  }
                    /* try { // try from 0079e944 to 0079e953 has its CatchHandler @ 0079ea18 */
  facebook::react::EventEmitter::EventEmitter(param_1,&local_50,&local_60);
  *(undefined ***)param_1 = &PTR_FUN_0097ff10;
                    /* try { // try from 0079e960 to 0079e967 has its CatchHandler @ 0079ea08 */
  puVar3 = (undefined8 *)operator_new(0x58);
  *puVar3 = &PTR_FUN_0097ff30;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[4] = 0;
  puVar3[3] = 0;
  *(undefined8 **)(param_1 + 0x40) = puVar3 + 3;
  *(undefined8 **)(param_1 + 0x48) = puVar3;
  puVar3[6] = 0;
  puVar3[5] = 0;
  puVar3[8] = 0;
  puVar3[7] = 0;
  *(undefined8 *)((long)puVar3 + 0x4c) = 0;
  *(undefined8 *)((long)puVar3 + 0x44) = 0;
  *(undefined ***)param_1 = &PTR_FUN_00981ef8;
  if (local_58 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = plStack_48;
  if ((plStack_48 != (long *)0x0) &&
     (lVar4 = FUN_00757990(0xffffffffffffffff,plStack_48 + 1), lVar4 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0079ea4c  FUN_0079ea4c =====

void FUN_0079ea4c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[9];
  *param_1 = &PTR_FUN_0097ff10;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *param_1 = &PTR_FUN_0097ff80;
  if (param_1[6] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[4] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


// ===== 0079eafc  FUN_0079eafc =====

ShadowNodeFamily *
FUN_0079eafc(ShadowNodeFamily *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
            undefined8 param_5)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  long *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_58 = *param_3;
  local_50 = (long *)param_3[1];
  if (local_50 != (long *)0x0) {
    FUN_00757d00(1,local_50 + 1);
  }
  local_68 = *param_4;
  local_60 = param_4[1];
  if (local_60 != 0) {
    FUN_00757d00(1,local_60 + 0x10);
  }
                    /* try { // try from 0079eb60 to 0079eb77 has its CatchHandler @ 0079ebe0 */
  facebook::react::ShadowNodeFamily::ShadowNodeFamily(param_1,param_2,&local_58,&local_68,param_5);
  if (local_60 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = local_50;
  if ((local_50 != (long *)0x0) &&
     (lVar3 = FUN_00757990(0xffffffffffffffff,local_50 + 1), lVar3 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0079ec18  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_24FastestListComponentNameEEEENS0_16FastestListPropsENS0_23FastestListEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE =====

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_24FastestListComponentNameEEEENS0_16FastestListPropsENS0_23FastestListEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE
               (undefined8 *param_1)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_0079ec6c(&local_30);
  *param_1 = local_30;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0079ec6c  FUN_0079ec6c =====

void FUN_0079ec6c(undefined8 *param_1,ComponentDescriptorParameters *param_2)

{
  long lVar1;
  ComponentDescriptor *this;
  void *local_90;
  void *pvStack_88;
  undefined8 local_80;
  void *pvStack_78;
  void *local_70;
  undefined8 uStack_68;
  void *local_60;
  void *pvStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (ComponentDescriptor *)operator_new(0x88);
  pvStack_78 = (void *)0x0;
  local_80 = 0;
  uStack_68 = 0;
  local_70 = (void *)0x0;
  pvStack_58 = (void *)0x0;
  local_60 = (void *)0x0;
  uStack_48 = 0;
  uStack_50 = 0;
  pvStack_88 = (void *)0x0;
  local_90 = (void *)0x0;
                    /* try { // try from 0079ecb0 to 0079ecbb has its CatchHandler @ 0079ed28 */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_90);
  *(undefined ***)this = &PTR_FUN_00981f30;
  FUN_0079ed58(this + 0x38);
  *param_1 = this;
  if (local_60 != (void *)0x0) {
    pvStack_58 = local_60;
    operator_delete(local_60);
  }
  if (pvStack_78 != (void *)0x0) {
    local_70 = pvStack_78;
    operator_delete(pvStack_78);
  }
  if (local_90 != (void *)0x0) {
    pvStack_88 = local_90;
    operator_delete(local_90);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0079ed58  FUN_0079ed58 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0079ed58(undefined8 param_1)

{
  byte bVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  void *pvVar8;
  undefined4 local_2270 [2];
  undefined8 *local_2268;
  undefined *local_2260;
  undefined8 uStack_2258;
  undefined8 local_2250;
  undefined8 uStack_2248;
  undefined4 local_2240 [2];
  undefined8 local_2238;
  undefined8 uStack_2230;
  undefined8 local_2228;
  undefined8 uStack_2220;
  undefined4 local_2218;
  undefined4 local_2210;
  undefined1 local_220c;
  undefined8 local_220b;
  undefined8 local_2203;
  undefined8 uStack_21fb;
  undefined8 local_21f3;
  undefined8 uStack_21eb;
  undefined8 local_21e3;
  undefined8 uStack_21db;
  undefined8 local_21d3;
  undefined6 uStack_21cb;
  undefined2 uStack_21c5;
  undefined6 uStack_21c3;
  undefined8 uStack_21bd;
  undefined4 local_21b5;
  undefined8 local_21b1;
  undefined1 local_21a9;
  undefined1 uStack_21a8;
  undefined7 uStack_21a7;
  undefined8 uStack_21a0;
  undefined8 uStack_2198;
  undefined8 uStack_2190;
  undefined8 local_2188;
  undefined8 uStack_2180;
  undefined8 local_2178;
  undefined8 uStack_2170;
  undefined8 local_2168;
  undefined8 uStack_2160;
  undefined8 local_2158;
  undefined8 uStack_2150;
  undefined8 uStack_2148;
  undefined8 local_2140;
  undefined8 local_2138;
  undefined8 uStack_2130;
  undefined8 local_2128;
  undefined4 uStack_2120;
  undefined4 uStack_211c;
  undefined4 uStack_2118;
  undefined4 uStack_2114;
  undefined4 uStack_2110;
  undefined4 uStack_210c;
  undefined8 local_2108;
  undefined8 uStack_2100;
  undefined4 local_20f8;
  undefined1 local_20f4;
  undefined4 local_20f0;
  undefined1 local_20ec;
  undefined4 local_20e8;
  undefined1 local_20e4;
  undefined4 local_20e0;
  undefined1 local_20dc;
  undefined4 local_20d8;
  undefined1 local_20d4;
  undefined4 local_20d0;
  undefined1 local_20cc;
  undefined4 local_20c8;
  undefined1 local_20c4;
  undefined4 local_20c0;
  undefined1 local_20bc;
  undefined4 local_20b8;
  undefined1 local_20b4;
  undefined4 local_20b0;
  undefined1 local_20ac;
  undefined4 local_20a8;
  undefined1 local_20a4;
  undefined4 local_20a0;
  undefined1 local_209c;
  undefined4 local_2098;
  undefined1 local_2094;
  undefined4 local_2090;
  undefined1 local_208c;
  undefined4 local_2088;
  undefined1 local_2084;
  undefined4 local_2080;
  undefined1 local_207c;
  undefined1 local_2078;
  undefined1 local_2074;
  undefined1 local_2068;
  undefined8 local_2060;
  undefined8 uStack_2058;
  undefined8 uStack_2050;
  undefined8 uStack_2048;
  undefined8 local_2040;
  undefined8 uStack_2038;
  undefined8 uStack_2030;
  undefined1 uStack_2028;
  undefined7 local_2027;
  undefined1 uStack_2020;
  undefined8 uStack_201f;
  undefined8 local_2014;
  undefined8 uStack_200c;
  undefined8 uStack_2004;
  undefined8 uStack_1ffc;
  undefined8 local_1ff4;
  undefined8 uStack_1fec;
  undefined8 uStack_1fe4;
  undefined8 uStack_1fdc;
  undefined8 local_1fd4;
  undefined8 uStack_1fcc;
  undefined8 uStack_1fc4;
  undefined5 uStack_1fbc;
  undefined3 local_1fb7;
  undefined5 uStack_1fb4;
  undefined1 local_1fac;
  undefined1 local_1fa8;
  undefined1 local_1fa4;
  undefined1 local_1fa0;
  undefined1 local_1f9c;
  undefined1 local_1f98;
  undefined1 local_1f80;
  undefined8 local_1f78;
  undefined8 uStack_1f70;
  undefined8 local_1f68;
  undefined4 local_1f60;
  undefined1 local_1f5c;
  undefined4 local_1f5b;
  undefined1 local_1f57;
  undefined1 local_1f56;
  undefined8 local_1f50;
  undefined8 uStack_1f48;
  undefined8 uStack_1f40;
  undefined8 uStack_1f38;
  undefined8 local_1f30;
  undefined7 uStack_1f28;
  undefined4 uStack_1f21;
  undefined8 local_1f1c;
  undefined1 local_1f14;
  undefined1 local_1f0c;
  undefined1 local_1f08;
  undefined1 local_1f00;
  undefined1 local_1efc;
  undefined1 local_1ef4;
  undefined1 local_1ef0;
  undefined1 local_1ee8;
  undefined1 local_1ee4;
  undefined1 local_1edc;
  undefined1 local_1ed8;
  undefined1 local_1ed0;
  undefined1 local_1ecc;
  undefined1 local_1ec4;
  undefined1 local_1ec0;
  undefined1 local_1eb8;
  undefined1 local_1eb4;
  undefined1 local_1eac;
  undefined1 local_1ea8;
  undefined1 local_1ea0;
  undefined1 local_1e9c;
  undefined1 local_1e94;
  undefined1 local_1e90;
  undefined1 local_1e88;
  undefined1 local_1e84;
  undefined1 local_1e7c;
  undefined1 local_1e78;
  undefined1 local_1e74;
  undefined1 local_1e70;
  undefined1 local_1e6c;
  undefined1 local_1e68;
  undefined1 local_1e64;
  undefined1 local_1e60;
  undefined1 local_1e5c;
  undefined1 local_1e58;
  undefined1 local_1e54;
  undefined1 local_1e50;
  undefined1 local_1e4c;
  undefined1 local_1e48;
  undefined1 local_1e44;
  undefined1 local_1e40;
  undefined1 local_1e3c;
  undefined1 local_1e38;
  undefined1 local_1e34;
  undefined1 local_1e30;
  undefined1 local_1e2c;
  undefined1 local_1e28;
  undefined1 local_1e24;
  undefined1 local_1e20;
  undefined1 local_1e1c;
  undefined8 local_1e18;
  undefined8 uStack_1e10;
  undefined8 local_1e08;
  undefined8 uStack_1e00;
  undefined8 uStack_1df8;
  undefined8 uStack_1df0;
  undefined2 local_1de8;
  undefined8 local_1de4;
  undefined1 local_1ddc;
  undefined8 local_1dd8;
  undefined8 local_1dd0;
  undefined8 uStack_1dc8;
  undefined1 local_1dc0;
  undefined8 local_1db8;
  undefined8 uStack_1db0;
  undefined8 uStack_1da8;
  undefined8 uStack_1da0;
  undefined8 local_1d98;
  undefined8 uStack_1d90;
  undefined8 uStack_1d88;
  undefined8 uStack_1d80;
  undefined8 local_1d78;
  undefined8 uStack_1d70;
  undefined8 uStack_1d68;
  undefined8 uStack_1d60;
  undefined8 local_1d58;
  undefined8 uStack_1d50;
  undefined8 uStack_1d48;
  undefined8 uStack_1d40;
  undefined8 local_1d38;
  undefined8 uStack_1d30;
  undefined8 uStack_1d28;
  undefined8 uStack_1d20;
  undefined8 local_1d18;
  undefined8 uStack_1d10;
  undefined8 local_1d08;
  undefined8 uStack_1d00;
  undefined8 local_1cf8;
  undefined8 uStack_1cf0;
  undefined8 local_1ce8;
  undefined8 uStack_1ce0;
  undefined8 local_1cd8;
  undefined8 uStack_1cd0;
  undefined8 local_1cc8;
  undefined6 uStack_1cc0;
  undefined2 uStack_1cba;
  undefined6 uStack_1cb8;
  undefined1 local_1cb0;
  undefined1 local_1cac;
  undefined1 local_1ca8;
  undefined8 local_1ca4;
  undefined8 uStack_1c9c;
  undefined1 local_1c94;
  undefined8 local_1c90;
  undefined2 local_1c88;
  undefined1 local_1c86;
  undefined4 local_1c84;
  undefined1 local_1c80;
  undefined1 local_1c20;
  undefined1 local_1c18;
  undefined1 local_1bb8;
  undefined4 local_1bb0;
  undefined2 local_1bac;
  undefined1 local_1ba8;
  undefined1 local_1ba4;
  undefined1 local_1ba0;
  undefined1 local_1b9c;
  undefined1 local_1b98;
  undefined1 local_1b94;
  undefined1 local_1b90;
  undefined1 local_1b8c;
  undefined1 local_1b88;
  undefined1 local_1b84;
  undefined8 local_1b80;
  undefined2 local_1b78;
  undefined1 local_1b70 [248];
  undefined1 local_1a78;
  undefined1 local_1a70;
  undefined1 local_1978;
  undefined1 local_1970;
  undefined1 local_1878;
  undefined1 local_1870;
  undefined1 local_1778;
  undefined1 local_1770;
  undefined1 local_1678;
  undefined1 local_1670;
  undefined1 local_1578;
  undefined1 local_1570;
  undefined1 local_1478;
  undefined8 local_1470;
  undefined5 uStack_1468;
  undefined3 uStack_1463;
  undefined5 uStack_1460;
  undefined1 local_1458;
  undefined1 local_1454;
  undefined8 local_1450;
  undefined1 local_1448;
  undefined1 local_1430;
  undefined1 local_1428;
  undefined1 local_1424;
  undefined8 local_1420;
  undefined8 uStack_1418;
  undefined1 local_1410;
  undefined1 local_140c;
  undefined1 local_1408;
  undefined1 local_1404;
  undefined8 local_1400;
  undefined8 uStack_13f8;
  undefined4 local_13f0;
  undefined1 local_13e8;
  undefined1 local_13d0;
  undefined8 local_13c8;
  undefined8 uStack_13c0;
  undefined1 local_13b8;
  undefined1 local_13a0;
  undefined1 local_1398;
  undefined1 local_1380;
  ulong local_1378;
  undefined8 uStack_1370;
  void *local_1368;
  undefined4 local_1360;
  undefined1 local_1358 [8];
  undefined8 local_1350;
  undefined8 uStack_1348;
  undefined8 local_1340;
  undefined8 uStack_1338;
  undefined8 local_1330;
  undefined8 uStack_1328;
  undefined1 local_1320;
  undefined8 local_1318;
  undefined8 uStack_1310;
  undefined8 local_1308;
  undefined8 uStack_1300;
  undefined8 uStack_12f8;
  undefined8 uStack_12f0;
  undefined4 local_12e8;
  undefined8 local_12e0;
  undefined8 local_12d8;
  undefined8 local_12d0;
  undefined4 local_12c8;
  undefined8 local_12c0;
  undefined8 uStack_12b8;
  undefined8 local_12b0;
  undefined8 uStack_12a8;
  undefined8 local_12a0;
  undefined8 uStack_1298;
  undefined1 local_1290;
  undefined8 local_1288;
  undefined8 uStack_1280;
  undefined8 uStack_1278;
  undefined8 uStack_1270;
  undefined8 local_1268;
  undefined8 uStack_1260;
  undefined1 local_1258;
  undefined8 local_1250;
  undefined8 uStack_1248;
  undefined8 local_1240;
  undefined8 uStack_1238;
  undefined8 local_1230;
  undefined8 uStack_1228;
  undefined2 local_1220;
  FastestListProps aFStack_1218 [1776];
  undefined1 auStack_b28 [2040];
  byte local_330;
  void *local_320;
  undefined1 auStack_310 [320];
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
  void *local_140;
  undefined8 uStack_138;
  void *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined4 local_100 [4];
  undefined4 local_f0 [2];
  undefined8 local_e8;
  undefined4 local_c0;
  void *local_b8;
  void *pvStack_b0;
  undefined8 local_a8;
  void *pvStack_a0;
  void *local_98;
  undefined8 uStack_90;
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100[0] = 0;
  local_f0[0] = 0;
  local_e8 = 0;
  local_c0 = 0;
  pvStack_b0 = (void *)0x0;
  local_b8 = (void *)0x0;
  pvStack_a0 = (void *)0x0;
  local_a8 = 0;
  uStack_90 = 0;
  local_98 = (void *)0x0;
  local_120 = 0;
  uStack_128 = 0;
  local_130 = (void *)0x0;
  uStack_138 = 0;
  local_140 = (void *)0x0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_168 = 0;
  local_170 = 0;
  uStack_178 = 0;
  local_180 = 0;
  uStack_188 = 0;
  local_190 = 0;
  uStack_198 = 0;
  local_1a0 = 0;
  uStack_1a8 = 0;
  local_1b0 = 0;
  uStack_1b8 = 0;
  local_1c0 = 0;
  uStack_1c8 = 0;
  local_1d0 = 0;
                    /* try { // try from 0079edec to 0079edff has its CatchHandler @ 0079f4e8 */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1d0);
  local_120 = CONCAT44(local_120._4_4_,0x3f800000);
  local_2270[0] = 0xffffffff;
  uStack_128 = 0;
  local_130 = (void *)0x0;
  uStack_138 = 0;
  local_140 = (void *)0x0;
  local_2268 = &local_1d0;
  facebook::react::RawProps::facebook::react::RawProps::parse(&local_118,param_1);
  memset(local_2240,0,0x1028);
  local_88[0] = 5;
  local_70 = 0;
  local_2260 = PTR_construction_vtable_0099e1f0 + 0x20;
  local_2240[0] = 5;
  uStack_2248 = 0;
  local_2250 = 0;
  uStack_2258 = 0;
  local_68 = 0;
  uStack_60 = 0x3f800000;
  uStack_78 = 0;
  local_80 = 0;
  uStack_2230 = 0;
  local_2238 = 0;
  uStack_2220 = 0;
  local_2228 = 0;
  local_2218 = 0x3f800000;
  folly::dynamic::folly::dynamic::destroy(local_88);
  local_220c = 0;
  local_21b1 = 0;
  uStack_1cd0 = _UNK_00470a7c;
  local_1cd8 = _DAT_00470a74;
  local_220b = _s__00375408;
  uStack_1dc8 = _UNK_00371598;
  local_1dd0 = _DAT_00371590;
  uStack_1ce0 = _UNK_00470a6c;
  local_1ce8 = _DAT_00470a64;
  local_20f4 = 0;
  uStack_1cf0 = _UNK_00470a5c;
  local_1cf8 = _DAT_00470a54;
  uStack_1d00 = _UNK_00470a4c;
  local_1d08 = _DAT_00470a44;
  uStack_1cb8 = 0;
  local_20ec = 0;
  uStack_2120 = 0;
  local_2128 = 0;
  uStack_210c = 0;
  uStack_2130 = 0;
  local_2138 = 0;
  uStack_1cc0 = 0;
  uStack_1cba = 0;
  local_1cc8 = 0;
  local_2210 = 0x10410710;
  local_21b5 = 0x40004;
  uStack_2114 = 0;
  uStack_2110 = 0;
  uStack_211c = 0;
  uStack_2118 = 0;
  uStack_2100 = 0;
  local_2108 = 0;
  local_20f8 = 0x7fc00000;
  local_20f0 = 0x7fc00000;
  local_20e8 = 0x7fc00000;
  local_20e0 = 0x7fc00000;
  local_20d8 = 0x7fc00000;
  local_20d0 = 0x7fc00000;
  local_20c8 = 0x7fc00000;
  local_20c0 = 0x7fc00000;
  local_20b8 = 0x7fc00000;
  local_20b0 = 0x7fc00000;
  local_20a8 = 0x7fc00000;
  local_20a0 = 0x7fc00000;
  local_2098 = 0x7fc00000;
  local_2090 = 0x7fc00000;
  local_2088 = 0x7fc00000;
  local_2080 = 0x7fc00000;
  uStack_201f = 0;
  uStack_2020 = 0;
  uStack_200c = 0;
  local_2014 = 0;
  uStack_1ffc = 0;
  uStack_2004 = 0;
  uStack_1fec = 0;
  local_1ff4 = 0;
  uStack_1fdc = 0;
  uStack_1fe4 = 0;
  uStack_1fcc = 0;
  local_1fd4 = 0;
  uStack_1fbc = 0;
  uStack_1fc4 = 0;
  local_1fb7 = 0;
  uStack_1fb4 = 0;
  local_1f5c = 1;
  local_1f5b = 0;
  local_1f56 = 0x23;
  local_1f1c = 0x3f800000;
  uStack_1e00 = 0;
  local_1e08 = 0;
  uStack_1df0 = 0;
  uStack_1df8 = 0;
  uStack_1e10 = 0;
  local_1e18 = 0;
  local_1de4 = 0;
  uStack_1db0 = 0;
  local_1db8 = 0;
  uStack_1da0 = 0;
  uStack_1da8 = 0;
  uStack_1d90 = 0;
  local_1d98 = 0;
  uStack_1d80 = 0;
  uStack_1d88 = 0;
  uStack_1d70 = 0;
  local_1d78 = 0;
  uStack_1d60 = 0;
  uStack_1d68 = 0;
  uStack_1d50 = 0;
  local_1d58 = 0;
  uStack_1d40 = 0;
  uStack_1d48 = 0;
  uStack_1d30 = 0;
  local_1d38 = 0;
  uStack_1d20 = 0;
  uStack_1d28 = 0;
  uStack_1d10 = 0;
  local_1d18 = 0;
  uStack_21a7 = 0;
  uStack_21fb = 0;
  local_2203 = 0;
  uStack_21eb = 0;
  local_21f3 = 0;
  uStack_21db = 0;
  local_21e3 = 0;
  uStack_21cb = 0;
  local_21d3 = 0;
  uStack_21bd = 0;
  uStack_21c5 = 0;
  uStack_21c3 = 0;
  local_21a9 = 0;
  uStack_21a8 = 0;
  uStack_2198 = 0;
  uStack_21a0 = 0;
  local_2188 = 0;
  uStack_2190 = 0;
  local_2178 = 0;
  uStack_2180 = 0;
  local_2168 = 0;
  uStack_2170 = 0;
  local_2158 = 0;
  uStack_2160 = 0;
  uStack_2148 = 0;
  uStack_2150 = 0;
  local_2140 = 0;
  local_20e4 = 0;
  local_20dc = 0;
  local_20d4 = 0;
  local_20cc = 0;
  local_20c4 = 0;
  local_20bc = 0;
  local_20b4 = 0;
  local_20ac = 0;
  local_20a4 = 0;
  local_209c = 0;
  local_2094 = 0;
  local_208c = 0;
  local_2084 = 0;
  local_207c = 0;
  local_2078 = 0;
  local_2074 = 0;
  local_2068 = 0;
  local_1fac = 0;
  local_1fa8 = 0;
  local_1fa4 = 0;
  local_1fa0 = 0;
  local_1f9c = 0;
  local_1f98 = 0;
  local_1f80 = 0;
  uStack_2058 = 0;
  local_2060 = 0;
  uStack_2048 = 0;
  uStack_2050 = 0;
  uStack_2038 = 0;
  local_2040 = 0;
  uStack_2028 = 0;
  local_2027 = 0;
  uStack_2030 = 0;
  uStack_1f70 = 0;
  local_1f78 = 0;
  local_1f68 = 0;
  local_1f60 = 0;
  local_1f57 = 0;
  uStack_1f48 = 0;
  local_1f50 = 0;
  uStack_1f38 = 0;
  uStack_1f40 = 0;
  uStack_1f28 = 0;
  uStack_1f21 = 0;
  local_1f30 = 0;
  local_1f14 = 0;
  local_1f0c = 0;
  local_1f08 = 0;
  local_1f00 = 0;
  local_1efc = 0;
  local_1ef4 = 0;
  local_1ef0 = 0;
  local_1ee8 = 0;
  local_1ee4 = 0;
  local_1edc = 0;
  local_1ed8 = 0;
  local_1ed0 = 0;
  local_1ecc = 0;
  local_1ec4 = 0;
  local_1ec0 = 0;
  local_1eb8 = 0;
  local_1eb4 = 0;
  local_1eac = 0;
  local_1ea8 = 0;
  local_1ea0 = 0;
  local_1e9c = 0;
  local_1e94 = 0;
  local_1e90 = 0;
  local_1e88 = 0;
  local_1e84 = 0;
  local_1e7c = 0;
  local_1e78 = 0;
  local_1e74 = 0;
  local_1e70 = 0;
  local_1e6c = 0;
  local_1e68 = 0;
  local_1e64 = 0;
  local_1e60 = 0;
  local_1e5c = 0;
  local_1e58 = 0;
  local_1e54 = 0;
  local_1e50 = 0;
  local_1e4c = 0;
  local_1e48 = 0;
  local_1e44 = 0;
  local_1e40 = 0;
  local_1e3c = 0;
  local_1e38 = 0;
  local_1e34 = 0;
  local_1e30 = 0;
  local_1e2c = 0;
  local_1e28 = 0;
  local_1e24 = 0;
  local_1e20 = 0;
  local_1e1c = 0;
  local_1dd8 = 0;
  local_1de8 = 0;
  local_1ddc = 0;
  local_1dc0 = 0;
  local_1cb0 = 0;
  local_1cac = 0;
  local_1ca8 = 0;
  local_1c90 = 0;
  uStack_1c9c = 0;
  local_1ca4 = 0;
  local_1c94 = 0;
  local_1c88 = 0x101;
  local_1c86 = 0;
  local_1c84 = 0;
  local_1c80 = 0;
  local_1c20 = 0;
  local_1c18 = 0;
  local_1bb8 = 0;
  local_1ba8 = 0;
  local_1ba4 = 0;
  local_1ba0 = 0;
  local_1b9c = 0;
  local_1b98 = 0;
  local_1b94 = 0;
  local_1b90 = 0;
  local_1b8c = 0;
  local_1b88 = 0;
  local_1b84 = 0;
  local_1bac = 0;
  local_1bb0 = 0;
  local_2260 = PTR_vtable_0099dfc8 + 0x20;
  local_1b70[0] = 0;
  uStack_1460 = 0;
  uStack_13c0 = 0;
  local_13c8 = 0;
  local_1a78 = 0;
  local_1a70 = 0;
  local_1978 = 0;
  local_1970 = 0;
  local_1878 = 0;
  local_1870 = 0;
  local_1778 = 0;
  local_1770 = 0;
  local_1678 = 0;
  local_1670 = 0;
  local_1578 = 0;
  local_1570 = 0;
  local_1478 = 0;
  local_1458 = 0;
  local_1454 = 0;
  local_1430 = 0;
  local_1428 = 0;
  local_1424 = 0;
  local_140c = 0;
  local_1408 = 0;
  local_1404 = 0;
  local_13e8 = 0;
  local_13d0 = 0;
  local_13a0 = 0;
  local_1398 = 0;
  local_1380 = 0;
  local_1358[0] = 0;
  local_1b78 = 0;
  local_1b80 = 0;
  uStack_1468 = 0;
  uStack_1463 = 0;
  local_1470 = 0;
  local_1448 = 0;
  local_1450 = 0;
  local_1410 = 0;
  uStack_1418 = 0;
  local_1420 = 0;
  local_13f0 = 0;
  uStack_13f8 = 0;
  local_1400 = 0;
  local_13b8 = 0;
  uStack_1370 = 0;
  local_1378 = 0;
  local_1360 = 0;
  local_1368 = (void *)0x0;
  local_1320 = 0;
  uStack_1328 = 0;
  local_1330 = 0;
  uStack_1338 = 0;
  local_1340 = 0;
  uStack_1348 = 0;
  local_1350 = 0;
  uStack_1300 = 0;
  local_1308 = 0;
  uStack_12f0 = 0;
  uStack_12f8 = 0;
  uStack_1310 = 0;
  local_1318 = 0;
  local_12e8 = 0;
  local_12d0 = 0;
  local_12c8 = 0;
  local_12e0 = 0;
  local_12d8 = 0;
  uStack_12b8 = 0;
  local_12c0 = 0;
  uStack_12a8 = 0;
  local_12b0 = 0;
  uStack_1298 = 0;
  local_12a0 = 0;
  local_1290 = 0;
  uStack_1280 = 0;
  local_1288 = 0;
  uStack_1270 = 0;
  uStack_1278 = 0;
  uStack_1260 = 0;
  local_1268 = 0;
  local_1258 = 0;
  local_1220 = 0;
  uStack_1228 = 0;
  local_1230 = 0;
  uStack_1238 = 0;
  local_1240 = 0;
  uStack_1248 = 0;
  local_1250 = 0;
                    /* try { // try from 0079f2f4 to 0079f313 has its CatchHandler @ 0079f4e8 */
  facebook::react::FastestListProps::FastestListProps
            (aFStack_1218,(PropsParserContext *)local_2270,(FastestListProps *)&local_2260,
             (RawProps *)&local_118);
  FUN_0079fcd0(auStack_310);
  if ((local_330 & 1) != 0) {
    operator_delete(local_320);
  }
  FUN_0079ff04(auStack_b28);
  puVar5 = PTR_PTR_0099dfd0;
  FUN_0078917c(aFStack_1218,PTR_PTR_0099dfd0 + 8);
  FUN_0079fcd0(local_1358);
  if ((local_1378 & 1) != 0) {
    operator_delete(local_1368);
  }
  FUN_0079ff04(local_1b70);
  FUN_0078917c(&local_2260,puVar5 + 8);
  facebook::react::RawPropsParser::facebook::react::RawPropsParser::postPrepare(param_1);
  pvVar3 = local_140;
  puVar4 = (undefined8 *)local_130;
  while (puVar4 != (undefined8 *)0x0) {
    plVar7 = (long *)puVar4[6];
    pvVar8 = (void *)*puVar4;
    local_140 = pvVar3;
    if ((plVar7 == (long *)0x0) || (lVar6 = FUN_00757990(0xffffffffffffffff,plVar7 + 1), lVar6 != 0)
       ) {
      bVar1 = *(byte *)(puVar4 + 2);
    }
    else {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__ndk1::__shared_weak_count::__release_weak();
      bVar1 = *(byte *)(puVar4 + 2);
    }
    if ((bVar1 & 1) != 0) {
      operator_delete((void *)puVar4[4]);
    }
    operator_delete(puVar4);
    pvVar3 = local_140;
    puVar4 = (undefined8 *)pvVar8;
  }
  local_140 = (void *)0x0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)&uStack_178);
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)&uStack_1a8);
  std::__ndk1::mutex::~mutex((mutex *)&local_1d0);
  pvVar8 = pvStack_a0;
  pvVar3 = local_98;
  if (pvStack_a0 != (void *)0x0) {
    while (pvVar3 != pvVar8) {
      if (*(uint *)((long)pvVar3 + -8) != 0xffffffff) {
                    /* try { // try from 0079f474 to 0079f47f has its CatchHandler @ 0079f4ec */
        (*(code *)(&PTR_FUN_0097fbf8)[*(uint *)((long)pvVar3 + -8)])
                  (&local_2260,(void *)((long)pvVar3 + -0x38));
      }
      *(undefined4 *)((long)pvVar3 + -8) = 0xffffffff;
      pvVar3 = (void *)((long)pvVar3 + -0x38);
    }
    local_98 = pvVar8;
    operator_delete(pvStack_a0);
  }
  if (local_b8 != (void *)0x0) {
    pvStack_b0 = local_b8;
    operator_delete(local_b8);
  }
  folly::dynamic::folly::dynamic::destroy(local_f0);
  facebook::jsi::Value::~Value((Value *)local_100);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0079f4f0  FUN_0079f4f0 =====

void FUN_0079f4f0(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 0079f514  FUN_0079f514 =====

undefined * FUN_0079f514(void)

{
  return PTR_FastestListComponentName_0099dfc0;
}


// ===== 0079f520  FUN_0079f520 =====

undefined * FUN_0079f520(void)

{
  return PTR_FastestListComponentName_0099dfc0;
}


// ===== 0079f52c  FUN_0079f52c =====

undefined8 FUN_0079f52c(void)

{
  return 0x61;
}


// ===== 0079f534  FUN_0079f534 =====

void FUN_0079f534(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 uStack_49;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_64 = (**(code **)(*param_2 + 0x20))();
  FUN_007a03d8(&local_60,&uStack_49,param_3,param_4,&local_64);
                    /* try { // try from 0079f59c to 0079f5a3 has its CatchHandler @ 0079f5d4 */
  (**(code **)(*param_2 + 0x60))(param_2,local_60);
  param_1[1] = uStack_58;
  *param_1 = local_60;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0079f5fc  FUN_0079f5fc =====

void FUN_0079f5fc(undefined8 *param_1,long *param_2,shared_ptr *param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *local_70;
  long *local_68;
  long *local_60;
  long *plStack_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_007a068c(&local_60,&local_70);
                    /* try { // try from 0079f648 to 0079f653 has its CatchHandler @ 0079f700 */
  (**(code **)(*local_60 + 0x10))(local_60,param_3,param_4);
  local_70 = local_60;
  local_68 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    FUN_00757d00(1,plStack_58 + 1);
  }
                    /* try { // try from 0079f66c to 0079f67b has its CatchHandler @ 0079f6f0 */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_70);
  plVar2 = local_68;
  if ((local_68 != (long *)0x0) &&
     (lVar3 = FUN_00757990(0xffffffffffffffff,local_68 + 1), lVar3 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 0079f6b8 to 0079f6bf has its CatchHandler @ 0079f700 */
  (**(code **)(*param_2 + 0x60))(param_2,local_60);
  param_1[1] = plStack_58;
  *param_1 = local_60;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0079f728  FUN_0079f728 =====

void FUN_0079f728(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0079f738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 0079f73c  FUN_0079f73c =====

void FUN_0079f73c(undefined8 *param_1,long param_2,undefined8 param_3,long *param_4,
                 RawProps *param_5)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  char *pcVar6;
  int iVar7;
  ulong uVar8;
  char *pcVar9;
  long lVar10;
  long *local_100;
  long *local_f8;
  long *local_f0;
  long *plStack_e8;
  undefined1 uStack_d1;
  dynamic adStack_d0 [48];
  uint local_a0;
  int local_98 [6];
  long *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((*param_4 == 0) && (uVar8 = facebook::react::RawProps::isEmpty(), (uVar8 & 1) != 0)) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24FastestListComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_16FastestListPropsENS0_23FastestListEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd60
         & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24FastestListComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_16FastestListPropsENS0_23FastestListEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd60
                                   ), iVar7 != 0)) {
                    /* try { // try from 0079fa08 to 0079fa13 has its CatchHandler @ 0079fa40 */
      FUN_007a0a70(
                  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24FastestListComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_16FastestListPropsENS0_23FastestListEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd58
                  );
      __cxa_atexit(FUN_007a0ab8,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24FastestListComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_16FastestListPropsENS0_23FastestListEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd58
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24FastestListComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_16FastestListPropsENS0_23FastestListEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd60
                         );
    }
    lVar10 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24FastestListComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_16FastestListPropsENS0_23FastestListEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd58
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24FastestListComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_16FastestListPropsENS0_23FastestListEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd58
    ;
    param_1[1] = lVar10;
    if (lVar10 != 0) {
      FUN_00757d00(1,lVar10 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    FUN_007a0790(&local_f0,param_3,param_5,param_4);
                    /* try { // try from 0079f7e4 to 0079f7f7 has its CatchHandler @ 0079fa74 */
    uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if (((uVar8 & 1) == 0) ||
       ((uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar8 & 1) == 0 ||
        (uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enablePropsUpdateReconciliationAndroid(), (uVar8 & 1) == 0)))) {
LAB_0079f820:
      local_100 = local_f0;
      local_f8 = plStack_e8;
      if (plStack_e8 != (long *)0x0) {
        FUN_00757d00(1,plStack_e8 + 1);
      }
                    /* try { // try from 0079f838 to 0079f847 has its CatchHandler @ 0079fa64 */
      FUN_007a089c(&local_100,param_5,param_4);
      plVar4 = local_f8;
      if ((local_f8 != (long *)0x0) &&
         (lVar10 = FUN_00757990(0xffffffffffffffff,local_f8 + 1), lVar10 == 0)) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 0079f808 to 0079f80f has its CatchHandler @ 0079fa54 */
      pcVar9 = (char *)(**(code **)(*local_f0 + 0x10))();
      iVar7 = strcmp(PTR_FastestListComponentName_0099dfc0,pcVar9);
      if (iVar7 != 0) goto LAB_0079f820;
      bVar3 = false;
    }
                    /* try { // try from 0079f87c to 0079f87f has its CatchHandler @ 0079fa74 */
    uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar8 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 0079f88c to 0079f8a7 has its CatchHandler @ 0079fa60 */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(local_f0 + 4));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_f0;
      plVar5 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 0079f9e8 to 0079f9f7 has its CatchHandler @ 0079fa58 */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_0079fac0;
      }
      for (; local_f0 = plVar4, plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (*(int *)(plVar5 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 0079f9c8 to 0079f9d7 has its CatchHandler @ 0079fa80 */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_0079fac0;
        }
        uVar1 = 0x811c9dc5;
        uVar8 = (ulong)(*(byte *)(plVar5 + 3) >> 1);
        pcVar6 = (char *)((long)plVar5 + 0x19);
        pcVar9 = (char *)((long)plVar5 + 0x19);
        if ((*(byte *)(plVar5 + 3) & 1) != 0) {
          uVar8 = plVar5[4];
          pcVar6 = (char *)plVar5[5];
          pcVar9 = (char *)plVar5[5];
        }
        for (; uVar8 != 0; uVar8 = uVar8 - 1) {
          uVar1 = (uVar1 ^ (int)*pcVar6) * 0x1000193;
          pcVar6 = pcVar6 + 1;
        }
                    /* try { // try from 0079f928 to 0079f933 has its CatchHandler @ 0079fa88 */
        folly::dynamic::dynamic(adStack_d0,(dynamic *)(plVar5 + 8));
        local_a0 = 0;
                    /* try { // try from 0079f938 to 0079f94f has its CatchHandler @ 0079fa8c */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (plVar4,param_3,uVar1,pcVar9,adStack_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 0079f960 to 0079f96b has its CatchHandler @ 0079fa7c */
          (*(code *)(&PTR_FUN_0097fbf8)[local_a0])(&uStack_d1,adStack_d0);
        }
        plVar4 = local_f0;
      }
      folly::dynamic::folly::dynamic::destroy(local_98);
    }
    param_1[1] = plStack_e8;
    *param_1 = local_f0;
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_0079fac0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0079fac4  FUN_0079fac4 =====

void FUN_0079fac4(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 0079facc  FUN_0079facc =====

void FUN_0079facc(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 0079fad4  FUN_0079fad4 =====

void FUN_0079fad4(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined1 auStack_80 [8];
  long *local_78;
  long *local_70;
  long *local_68;
  undefined1 uStack_59;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  FUN_0078a610(auStack_80,&uStack_59,param_3 + 8,param_3 + 4);
                    /* try { // try from 0079fb1c to 0079fb23 has its CatchHandler @ 0079fca4 */
  plVar4 = (long *)operator_new(0x68);
  plVar1 = plVar4 + 3;
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_00982178;
                    /* try { // try from 0079fb3c to 0079fb4b has its CatchHandler @ 0079fc8c */
  FUN_007a0eac(plVar1,auStack_80,param_2 + 8);
  local_70 = plVar1;
  local_68 = plVar4;
  if ((local_78 != (long *)0x0) &&
     (lVar5 = FUN_00757990(0xffffffffffffffff,local_78 + 1), lVar5 == 0)) {
    (**(code **)(*local_78 + 0x10))(local_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 0079fb80 to 0079fb87 has its CatchHandler @ 0079fc7c */
  puVar6 = (undefined8 *)operator_new(0x1a0);
  puVar2 = puVar6 + 4;
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_0097fff0;
                    /* try { // try from 0079fba0 to 0079fbb7 has its CatchHandler @ 0079fc64 */
  FUN_007a10ac(puVar2,param_3,&local_70,param_2 + 8,param_2);
  plVar1 = local_70;
  *param_1 = (long)puVar2;
  param_1[1] = (long)puVar6;
  local_90 = puVar2;
  local_88 = puVar6;
  FUN_00757d00(1,puVar6 + 2);
                    /* try { // try from 0079fbd0 to 0079fbdb has its CatchHandler @ 0079fc44 */
  facebook::react::EventEmitter::facebook::react::EventEmitter::setShadowNodeFamily
            (plVar1,&local_90);
  if (local_88 != (undefined8 *)0x0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar1 = local_68;
  if ((local_68 != (long *)0x0) &&
     (lVar5 = FUN_00757990(0xffffffffffffffff,local_68 + 1), lVar5 == 0)) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0079fccc  FUN_0079fccc =====

void FUN_0079fccc(void)

{
  return;
}


// ===== 0079fcd0  FUN_0079fcd0 =====

void FUN_0079fcd0(long param_1)

{
  byte bVar1;
  void *pvVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  
  if ((*(byte *)(param_1 + 0x120) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x130));
  }
  pvVar2 = *(void **)(param_1 + 0x108);
  if (pvVar2 != (void *)0x0) {
    *(void **)(param_1 + 0x110) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(param_1 + 0xe8);
  if (pvVar2 != (void *)0x0) {
    *(void **)(param_1 + 0xf0) = pvVar2;
    operator_delete(pvVar2);
  }
  pbVar5 = *(byte **)(param_1 + 0xd0);
  if (pbVar5 != (byte *)0x0) {
    pbVar4 = *(byte **)(param_1 + 0xd8);
    pbVar7 = pbVar5;
    if (pbVar4 != pbVar5) {
      do {
        pbVar7 = pbVar4 + -0x18;
        if ((*pbVar7 & 1) != 0) {
          operator_delete(*(void **)(pbVar4 + -8));
        }
        pbVar4 = pbVar7;
      } while (pbVar7 != pbVar5);
      pbVar7 = *(byte **)(param_1 + 0xd0);
    }
    *(byte **)(param_1 + 0xd8) = pbVar5;
    operator_delete(pbVar7);
  }
  pvVar2 = *(void **)(param_1 + 0xb0);
  if (pvVar2 != (void *)0x0) {
    *(void **)(param_1 + 0xb8) = pvVar2;
    operator_delete(pvVar2);
  }
  pbVar5 = *(byte **)(param_1 + 0x98);
  if (pbVar5 != (byte *)0x0) {
    pbVar4 = *(byte **)(param_1 + 0xa0);
    pbVar7 = pbVar5;
    if (pbVar4 != pbVar5) {
      do {
        pbVar7 = pbVar4 + -0x18;
        if ((*pbVar7 & 1) != 0) {
          operator_delete(*(void **)(pbVar4 + -8));
        }
        pbVar4 = pbVar7;
      } while (pbVar7 != pbVar5);
      pbVar7 = *(byte **)(param_1 + 0x98);
    }
    *(byte **)(param_1 + 0xa0) = pbVar5;
    operator_delete(pbVar7);
  }
  if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x58);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x88));
    bVar1 = *(byte *)(param_1 + 0x58);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x40);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x68));
    bVar1 = *(byte *)(param_1 + 0x40);
  }
  if ((bVar1 & 1) == 0) {
    puVar6 = *(undefined8 **)(param_1 + 0x20);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x50));
    puVar6 = *(undefined8 **)(param_1 + 0x20);
  }
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = *(undefined8 **)(param_1 + 8);
  }
  else {
    puVar8 = *(undefined8 **)(param_1 + 0x28);
    puVar3 = puVar6;
    if (puVar8 != puVar6) {
      do {
        puVar3 = puVar8 + -3;
        pvVar2 = (void *)*puVar3;
        if (pvVar2 != (void *)0x0) {
          puVar8[-2] = pvVar2;
          operator_delete(pvVar2);
        }
        puVar8 = puVar3;
      } while (puVar3 != puVar6);
      puVar3 = *(undefined8 **)(param_1 + 0x20);
    }
    *(undefined8 **)(param_1 + 0x28) = puVar6;
    operator_delete(puVar3);
    puVar6 = *(undefined8 **)(param_1 + 8);
  }
  if (puVar6 == (undefined8 *)0x0) {
    return;
  }
  puVar8 = *(undefined8 **)(param_1 + 0x10);
  puVar3 = puVar6;
  if (puVar8 != puVar6) {
    do {
      puVar3 = puVar8 + -3;
      pbVar5 = (byte *)*puVar3;
      if (pbVar5 != (byte *)0x0) {
        pbVar4 = (byte *)puVar8[-2];
        pbVar7 = pbVar5;
        if (pbVar4 != pbVar5) {
          do {
            pbVar7 = pbVar4 + -0x18;
            if ((*pbVar7 & 1) != 0) {
              operator_delete(*(void **)(pbVar4 + -8));
            }
            pbVar4 = pbVar7;
          } while (pbVar7 != pbVar5);
          pbVar7 = (byte *)*puVar3;
        }
        puVar8[-2] = pbVar5;
        operator_delete(pbVar7);
      }
      puVar8 = puVar3;
    } while (puVar3 != puVar6);
    puVar3 = *(undefined8 **)(param_1 + 8);
  }
  *(undefined8 **)(param_1 + 0x10) = puVar6;
  operator_delete(puVar3);
  return;
}


// ===== 0079ff04  FUN_0079ff04 =====

void FUN_0079ff04(long param_1)

{
  if ((*(char *)(param_1 + 0x7f0) != '\0') && ((*(byte *)(param_1 + 0x7d8) & 1) != 0)) {
    operator_delete(*(void **)(param_1 + 0x7e8));
  }
  if ((*(char *)(param_1 + 2000) != '\0') && ((*(byte *)(param_1 + 0x7b8) & 1) != 0)) {
    operator_delete(*(void **)(param_1 + 0x7c8));
  }
  if ((*(char *)(param_1 + 0x7a0) != '\0') && ((*(byte *)(param_1 + 0x788) & 1) != 0)) {
    operator_delete(*(void **)(param_1 + 0x798));
  }
  if ((*(char *)(param_1 + 0x740) != '\0') && ((*(byte *)(param_1 + 0x728) & 1) != 0)) {
    operator_delete(*(void **)(param_1 + 0x738));
  }
  FUN_0079ffb4(param_1 + 0x600);
  FUN_007a0040(param_1 + 0x500);
  FUN_007a00cc(param_1 + 0x400);
  FUN_007a0158(param_1 + 0x300);
  FUN_007a01e4(param_1 + 0x200);
  FUN_007a0270(param_1 + 0x100);
  FUN_007a02fc(param_1);
  return;
}


// ===== 0079ffb4  FUN_0079ffb4 =====

void FUN_0079ffb4(long param_1)

{
  if (*(char *)(param_1 + 0xf8) != '\0') {
    if ((*(char *)(param_1 + 0xf0) != '\0') && ((*(byte *)(param_1 + 0xd8) & 1) != 0)) {
      operator_delete(*(void **)(param_1 + 0xe8));
    }
    if ((*(char *)(param_1 + 0xd0) != '\0') && ((*(byte *)(param_1 + 0xb8) & 1) != 0)) {
      operator_delete(*(void **)(param_1 + 200));
    }
    if ((*(char *)(param_1 + 0xa0) != '\0') && ((*(byte *)(param_1 + 0x88) & 1) != 0)) {
      operator_delete(*(void **)(param_1 + 0x98));
    }
    if ((*(char *)(param_1 + 0x40) != '\0') && ((*(byte *)(param_1 + 0x28) & 1) != 0)) {
      operator_delete(*(void **)(param_1 + 0x38));
      return;
    }
  }
  return;
}


// ===== 007a0040  FUN_007a0040 =====

void FUN_007a0040(long param_1)

{
  if (*(char *)(param_1 + 0xf8) != '\0') {
    if ((*(char *)(param_1 + 0xf0) != '\0') && ((*(byte *)(param_1 + 0xd8) & 1) != 0)) {
      operator_delete(*(void **)(param_1 + 0xe8));
    }
    if ((*(char *)(param_1 + 0xd0) != '\0') && ((*(byte *)(param_1 + 0xb8) & 1) != 0)) {
      operator_delete(*(void **)(param_1 + 200));
    }
    if ((*(char *)(param_1 + 0xa0) != '\0') && ((*(byte *)(param_1 + 0x88) & 1) != 0)) {
      operator_delete(*(void **)(param_1 + 0x98));
    }
    if ((*(char *)(param_1 + 0x40) != '\0') && ((*(byte *)(param_1 + 0x28) & 1) != 0)) {
      operator_delete(*(void **)(param_1 + 0x38));
      return;
    }
  }
  return;
}


// ===== 007a00cc  FUN_007a00cc =====

void FUN_007a00cc(long param_1)

{
  if (*(char *)(param_1 + 0xf8) != '\0') {
    if ((*(char *)(param_1 + 0xf0) != '\0') && ((*(byte *)(param_1 + 0xd8) & 1) != 0)) {
      operator_delete(*(void **)(param_1 + 0xe8));
    }
    if ((*(char *)(param_1 + 0xd0) != '\0') && ((*(byte *)(param_1 + 0xb8) & 1) != 0)) {
      operator_delete(*(void **)(param_1 + 200));
    }
    if ((*(char *)(param_1 + 0xa0) != '\0') && ((*(byte *)(param_1 + 0x88) & 1) != 0)) {
      operator_delete(*(void **)(param_1 + 0x98));
    }
    if ((*(char *)(param_1 + 0x40) != '\0') && ((*(byte *)(param_1 + 0x28) & 1) != 0)) {
      operator_delete(*(void **)(param_1 + 0x38));
      return;
    }
  }
  return;
}


// ===== 007a0158  FUN_007a0158 =====

void FUN_007a0158(long param_1)

{
  if (*(char *)(param_1 + 0xf8) != '\0') {
    if ((*(char *)(param_1 + 0xf0) != '\0') && ((*(byte *)(param_1 + 0xd8) & 1) != 0)) {
      operator_delete(*(void **)(param_1 + 0xe8));
    }
    if ((*(char *)(param_1 + 0xd0) != '\0') && ((*(byte *)(param_1 + 0xb8) & 1) != 0)) {
      operator_delete(*(void **)(param_1 + 200));
    }
    if ((*(char *)(param_1 + 0xa0) != '\0') && ((*(byte *)(param_1 + 0x88) & 1) != 0)) {
      operator_delete(*(void **)(param_1 + 0x98));
    }
    if ((*(char *)(param_1 + 0x40) != '\0') && ((*(byte *)(param_1 + 0x28) & 1) != 0)) {
      operator_delete(*(void **)(param_1 + 0x38));
      return;
    }
  }
  return;
}


// ===== 007a01e4  FUN_007a01e4 =====

void FUN_007a01e4(long param_1)

{
  if (*(char *)(param_1 + 0xf8) != '\0') {
    if ((*(char *)(param_1 + 0xf0) != '\0') && ((*(byte *)(param_1 + 0xd8) & 1) != 0)) {
      operator_delete(*(void **)(param_1 + 0xe8));
    }
    if ((*(char *)(param_1 + 0xd0) != '\0') && ((*(byte *)(param_1 + 0xb8) & 1) != 0)) {
      operator_delete(*(void **)(param_1 + 200));
    }
    if ((*(char *)(param_1 + 0xa0) != '\0') && ((*(byte *)(param_1 + 0x88) & 1) != 0)) {
      operator_delete(*(void **)(param_1 + 0x98));
    }
    if ((*(char *)(param_1 + 0x40) != '\0') && ((*(byte *)(param_1 + 0x28) & 1) != 0)) {
      operator_delete(*(void **)(param_1 + 0x38));
      return;
    }
  }
  return;
}


// ===== 007a0270  FUN_007a0270 =====

void FUN_007a0270(long param_1)

{
  if (*(char *)(param_1 + 0xf8) != '\0') {
    if ((*(char *)(param_1 + 0xf0) != '\0') && ((*(byte *)(param_1 + 0xd8) & 1) != 0)) {
      operator_delete(*(void **)(param_1 + 0xe8));
    }
    if ((*(char *)(param_1 + 0xd0) != '\0') && ((*(byte *)(param_1 + 0xb8) & 1) != 0)) {
      operator_delete(*(void **)(param_1 + 200));
    }
    if ((*(char *)(param_1 + 0xa0) != '\0') && ((*(byte *)(param_1 + 0x88) & 1) != 0)) {
      operator_delete(*(void **)(param_1 + 0x98));
    }
    if ((*(char *)(param_1 + 0x40) != '\0') && ((*(byte *)(param_1 + 0x28) & 1) != 0)) {
      operator_delete(*(void **)(param_1 + 0x38));
      return;
    }
  }
  return;
}


// ===== 007a02fc  FUN_007a02fc =====

void FUN_007a02fc(long param_1)

{
  if (*(char *)(param_1 + 0xf8) != '\0') {
    if ((*(char *)(param_1 + 0xf0) != '\0') && ((*(byte *)(param_1 + 0xd8) & 1) != 0)) {
      operator_delete(*(void **)(param_1 + 0xe8));
    }
    if ((*(char *)(param_1 + 0xd0) != '\0') && ((*(byte *)(param_1 + 0xb8) & 1) != 0)) {
      operator_delete(*(void **)(param_1 + 200));
    }
    if ((*(char *)(param_1 + 0xa0) != '\0') && ((*(byte *)(param_1 + 0x88) & 1) != 0)) {
      operator_delete(*(void **)(param_1 + 0x98));
    }
    if ((*(char *)(param_1 + 0x40) != '\0') && ((*(byte *)(param_1 + 0x28) & 1) != 0)) {
      operator_delete(*(void **)(param_1 + 0x38));
      return;
    }
  }
  return;
}


// ===== 007a0388  FUN_007a0388 =====

void FUN_007a0388(long param_1)

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


// ===== 007a03d8  FUN_007a03d8 =====

void FUN_007a03d8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 *param_5)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined4 uVar8;
  
  puVar6 = (undefined8 *)operator_new(0x400);
  uVar8 = *param_5;
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_00981fc0;
                    /* try { // try from 007a0420 to 007a042f has its CatchHandler @ 007a04c8 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
            ((YogaLayoutableShadowNode *)(puVar6 + 3),param_3,param_4,uVar8);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_00982010;
  uVar2 = *(uint *)((long)puVar6 + 0x6c);
  uVar1 = uVar2 & 3 | (uint)((*(byte *)(lVar7 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)puVar6 + 0x6c) = uVar2 & 0xfffffff8 | uVar1;
  if ((*(uint *)(lVar7 + 0x50) & 0x30000000) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    if (*(char *)(lVar7 + 0x5b4) != '\0') {
      uVar8 = *(undefined4 *)(lVar7 + 0x5b0);
    }
  }
  *(undefined4 *)(puVar6 + 10) = uVar8;
  cVar3 = *(char *)(lVar7 + 0x6b0);
  cVar4 = *(char *)(lVar7 + 0x6b1);
  cVar5 = *(char *)(lVar7 + 0x1e8);
  *param_1 = (YogaLayoutableShadowNode *)(puVar6 + 3);
  param_1[1] = puVar6;
  *(uint *)((long)puVar6 + 0x6c) =
       uVar2 & 0xfffff000 |
       uVar2 & 0x7f8 | uVar1 | (uint)((cVar3 != '\0' || cVar4 != '\0') || cVar5 != '\0') << 0xb;
  return;
}


// ===== 007a04e4  FUN_007a04e4 =====

void FUN_007a04e4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00981fc0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 007a04f4  FUN_007a04f4 =====

void FUN_007a04f4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00981fc0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 007a0524  FUN_007a0524 =====

void FUN_007a0524(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007a052c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 007a0530  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007a0534  FUN_007a0534 =====

void FUN_007a0534(long *param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = (void *)param_1[0x79];
  *param_1 = (long)(PTR_vtable_0099de98 + 0x10);
  if (pvVar4 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x7a];
    pvVar2 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        plVar3 = *(long **)((long)pvVar5 + -8);
        if ((plVar3 != (long *)0x0) &&
           (lVar1 = FUN_00757990(0xffffffffffffffff,plVar3 + 1), lVar1 == 0)) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
        pvVar5 = (void *)((long)pvVar5 + -0x10);
      } while (pvVar5 != pvVar4);
      pvVar2 = (void *)param_1[0x79];
    }
    param_1[0x7a] = (long)pvVar4;
    operator_delete(pvVar2);
  }
  pvVar4 = (void *)param_1[0x73];
  if (pvVar4 != (void *)0x0) {
    param_1[0x74] = (long)pvVar4;
    operator_delete(pvVar4);
  }
  FUN_007890e8(param_1 + 0x23);
  FUN_00789784(param_1);
  operator_delete(param_1);
  return;
}


// ===== 007a05f4  FUN_007a05f4 =====

void FUN_007a05f4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  facebook::react::LayoutableShadowNode::getLayoutMetrics();
  facebook::react::BaseViewProps::resolveTransform(*(LayoutMetrics **)(param_1 + 8));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007a065c  FUN_007a065c =====

bool FUN_007a065c(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 007a0674  FUN_007a0674 =====

bool FUN_007a0674(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 007a068c  FUN_007a068c =====

void FUN_007a068c(undefined8 *param_1,undefined8 param_2,ShadowNode *param_3,
                 ShadowNodeFragment *param_4)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined4 uVar8;
  
  puVar6 = (undefined8 *)operator_new(0x400);
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_00981fc0;
                    /* try { // try from 007a06cc to 007a06db has its CatchHandler @ 007a0774 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
            ((YogaLayoutableShadowNode *)(puVar6 + 3),param_3,param_4);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_00982010;
  uVar2 = *(uint *)((long)puVar6 + 0x6c);
  uVar1 = uVar2 & 3 | (uint)((*(byte *)(lVar7 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)puVar6 + 0x6c) = uVar2 & 0xfffffff8 | uVar1;
  if ((*(uint *)(lVar7 + 0x50) & 0x30000000) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    if (*(char *)(lVar7 + 0x5b4) != '\0') {
      uVar8 = *(undefined4 *)(lVar7 + 0x5b0);
    }
  }
  *(undefined4 *)(puVar6 + 10) = uVar8;
  cVar3 = *(char *)(lVar7 + 0x6b0);
  cVar4 = *(char *)(lVar7 + 0x6b1);
  cVar5 = *(char *)(lVar7 + 0x1e8);
  *param_1 = (YogaLayoutableShadowNode *)(puVar6 + 3);
  param_1[1] = puVar6;
  *(uint *)((long)puVar6 + 0x6c) =
       uVar2 & 0xfffff000 |
       uVar2 & 0x7f8 | uVar1 | (uint)((cVar3 != '\0' || cVar4 != '\0') || cVar5 != '\0') << 0xb;
  return;
}


// ===== 007a0790  FUN_007a0790 =====

void FUN_007a0790(undefined8 *param_1,PropsParserContext *param_2,RawProps *param_3,long *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  FastestListProps *pFVar3;
  
  pFVar3 = (FastestListProps *)*param_4;
  if (pFVar3 == (FastestListProps *)0x0) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24FastestListComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_16FastestListPropsENS0_23FastestListEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd60
         & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24FastestListComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_16FastestListPropsENS0_23FastestListEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd60
                                   ), iVar1 != 0)) {
                    /* try { // try from 007a0830 to 007a083b has its CatchHandler @ 007a0868 */
      FUN_007a0a70(
                  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24FastestListComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_16FastestListPropsENS0_23FastestListEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd58
                  );
      __cxa_atexit(FUN_007a0ab8,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24FastestListComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_16FastestListPropsENS0_23FastestListEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd58
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24FastestListComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_16FastestListPropsENS0_23FastestListEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd60
                         );
    }
    pFVar3 = *(FastestListProps **)
              PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24FastestListComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_16FastestListPropsENS0_23FastestListEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd58
    ;
  }
  puVar2 = (undefined8 *)operator_new(0x1060);
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_00982128;
                    /* try { // try from 007a07f4 to 007a0807 has its CatchHandler @ 007a0880 */
  facebook::react::FastestListProps::FastestListProps
            ((FastestListProps *)(puVar2 + 3),param_2,pFVar3,param_3);
  *param_1 = (FastestListProps *)(puVar2 + 3);
  param_1[1] = puVar2;
  return;
}


// ===== 007a089c  FUN_007a089c =====

void FUN_007a089c(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  plVar3 = local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar5 = *param_1;
  if (*param_3 == 0) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24FastestListComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_16FastestListPropsENS0_23FastestListEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd60
         & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24FastestListComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_16FastestListPropsENS0_23FastestListEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd60
                                   ), iVar2 != 0)) {
                    /* try { // try from 007a0980 to 007a098b has its CatchHandler @ 007a09b8 */
      FUN_007a0a70(
                  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24FastestListComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_16FastestListPropsENS0_23FastestListEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd58
                  );
      __cxa_atexit(FUN_007a0ab8,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24FastestListComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_16FastestListPropsENS0_23FastestListEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd58
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24FastestListComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_16FastestListPropsENS0_23FastestListEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd60
                         );
    }
    local_50 = (long *)0x0;
                    /* try { // try from 007a090c to 007a091f has its CatchHandler @ 007a09cc */
    facebook::react::Props::facebook::react::Props::initializeDynamicProps
              (uVar5,*(undefined8 *)
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24FastestListComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_16FastestListPropsENS0_23FastestListEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd58
               ,param_2,local_70);
  }
  else {
    local_50 = (long *)0x0;
                    /* try { // try from 007a08d0 to 007a08e7 has its CatchHandler @ 007a09d0 */
    facebook::react::Props::facebook::react::Props::initializeDynamicProps
              (uVar5,*param_3,param_2,local_70);
  }
  if (local_50 == local_70) {
    lVar4 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007a094c;
    lVar4 = 5;
    plVar3 = local_50;
  }
  (**(code **)(*plVar3 + lVar4 * 8))();
LAB_007a094c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007a0a20  FUN_007a0a20 =====

void FUN_007a0a20(long param_1)

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


// ===== 007a0a70  FUN_007a0a70 =====

void FUN_007a0a70(long *param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x1060);
                    /* try { // try from 007a0a8c to 007a0a8f has its CatchHandler @ 007a0aa4 */
  FUN_007a0b08();
  *param_1 = (long)pvVar1 + 0x18;
  param_1[1] = (long)pvVar1;
  return;
}


// ===== 007a0ab8  FUN_007a0ab8 =====

void FUN_007a0ab8(long param_1)

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


// ===== 007a0b08  FUN_007a0b08 =====

void FUN_007a0b08(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_009820d8;
  memset(param_1 + 3,0,0x1048);
                    /* try { // try from 007a0b34 to 007a0b47 has its CatchHandler @ 007a0cd8 */
  FUN_00788b10(param_1 + 3,PTR_PTR_0099dfd0 + 0x10);
  param_1[3] = PTR_vtable_0099dfc8 + 0x20;
  *(undefined8 *)((long)param_1 + 0xe15) = 0;
  param_1[0x1d7] = 0;
  param_1[0x1d6] = 0;
  param_1[0x1e1] = 0;
  param_1[0x1e0] = 0;
  param_1[0x1f1] = 0;
  param_1[0x1f0] = 0;
  param_1[0x1ed] = 0;
  param_1[0x1ec] = 0;
  param_1[0x1ef] = 0;
  param_1[0x1ee] = 0;
  param_1[0x201] = 0;
  param_1[0x200] = 0;
  *(undefined4 *)((long)param_1 + 0x5f4) = 0;
  *(undefined1 *)(param_1 + 0xbf) = 0;
  *(undefined1 *)(param_1 + 0xcb) = 0;
  *(undefined1 *)(param_1 + 0xcc) = 0;
  *(undefined1 *)(param_1 + 0xd8) = 0;
  *(undefined1 *)(param_1 + 0xda) = 0;
  *(undefined1 *)((long)param_1 + 0x6d4) = 0;
  *(undefined1 *)(param_1 + 0xdb) = 0;
  *(undefined1 *)((long)param_1 + 0x6dc) = 0;
  *(undefined1 *)(param_1 + 0xdc) = 0;
  *(undefined1 *)((long)param_1 + 0x6e4) = 0;
  *(undefined1 *)(param_1 + 0xdd) = 0;
  *(undefined1 *)((long)param_1 + 0x6ec) = 0;
  *(undefined1 *)(param_1 + 0xde) = 0;
  *(undefined1 *)((long)param_1 + 0x6f4) = 0;
  *(undefined4 *)(param_1 + 0xd9) = 0;
  *(undefined2 *)((long)param_1 + 0x6cc) = 0;
  *(undefined1 *)(param_1 + 0xe1) = 0;
  *(undefined1 *)(param_1 + 0x100) = 0;
  *(undefined1 *)(param_1 + 0x101) = 0;
  *(undefined1 *)(param_1 + 0x120) = 0;
  *(undefined1 *)(param_1 + 0x121) = 0;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(undefined1 *)(param_1 + 0x141) = 0;
  *(undefined1 *)(param_1 + 0x160) = 0;
  *(undefined1 *)(param_1 + 0x161) = 0;
  *(undefined1 *)(param_1 + 0x180) = 0;
  *(undefined1 *)(param_1 + 0x181) = 0;
  *(undefined1 *)(param_1 + 0x1a0) = 0;
  *(undefined1 *)(param_1 + 0x1a1) = 0;
  *(undefined1 *)(param_1 + 0x1c0) = 0;
  *(undefined1 *)(param_1 + 0x1c4) = 0;
  *(undefined1 *)((long)param_1 + 0xe24) = 0;
  *(undefined1 *)(param_1 + 0x1c9) = 0;
  *(undefined1 *)(param_1 + 0x1ca) = 0;
  *(undefined1 *)((long)param_1 + 0xe54) = 0;
  *(undefined1 *)((long)param_1 + 0xe6c) = 0;
  *(undefined1 *)(param_1 + 0x1ce) = 0;
  *(undefined1 *)((long)param_1 + 0xe74) = 0;
  *(undefined1 *)(param_1 + 0x1d2) = 0;
  *(undefined1 *)(param_1 + 0x1d5) = 0;
  *(undefined1 *)(param_1 + 0x1db) = 0;
  *(undefined1 *)(param_1 + 0x1dc) = 0;
  *(undefined1 *)(param_1 + 0x1df) = 0;
  *(undefined1 *)(param_1 + 0x1e4) = 0;
  *(undefined2 *)(param_1 + 0xe0) = 0;
  param_1[0xdf] = 0;
  param_1[0x1c2] = 0;
  param_1[0x1c1] = 0;
  *(undefined1 *)(param_1 + 0x1c6) = 0;
  param_1[0x1c5] = 0;
  *(undefined1 *)(param_1 + 0x1cd) = 0;
  param_1[0x1cc] = 0;
  param_1[0x1cb] = 0;
  *(undefined4 *)(param_1 + 0x1d1) = 0;
  param_1[0x1d0] = 0;
  param_1[0x1cf] = 0;
  *(undefined1 *)(param_1 + 0x1d8) = 0;
  *(undefined4 *)(param_1 + 0x1e3) = 0;
  param_1[0x1e2] = 0;
  *(undefined1 *)(param_1 + 0x1eb) = 0;
  param_1[0x1ea] = 0;
  param_1[0x1e9] = 0;
  param_1[0x1e8] = 0;
  param_1[0x1e7] = 0;
  param_1[0x1e6] = 0;
  param_1[0x1e5] = 0;
  *(undefined4 *)(param_1 + 0x1f2) = 0;
  param_1[0x1f5] = 0;
  *(undefined4 *)(param_1 + 0x1f6) = 0;
  param_1[500] = 0;
  param_1[499] = 0;
  param_1[0x1f8] = 0;
  param_1[0x1f7] = 0;
  param_1[0x1fa] = 0;
  param_1[0x1f9] = 0;
  param_1[0x1fc] = 0;
  param_1[0x1fb] = 0;
  *(undefined1 *)(param_1 + 0x1fd) = 0;
  param_1[0x1ff] = 0;
  param_1[0x1fe] = 0;
  param_1[0x203] = 0;
  param_1[0x202] = 0;
  *(undefined1 *)(param_1 + 0x204) = 0;
  param_1[0x20a] = 0;
  param_1[0x209] = 0;
  param_1[0x208] = 0;
  param_1[0x207] = 0;
  param_1[0x206] = 0;
  param_1[0x205] = 0;
  *(undefined2 *)(param_1 + 0x20b) = 0;
  return;
}


// ===== 007a0cec  FUN_007a0cec =====

void FUN_007a0cec(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009820d8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 007a0cfc  FUN_007a0cfc =====

void FUN_007a0cfc(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009820d8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 007a0d2c  FUN_007a0d2c =====

void FUN_007a0d2c(long param_1)

{
  FUN_0079fcd0(param_1 + 0xf20);
  if ((*(byte *)(param_1 + 0xf00) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0xf10));
  }
  FUN_0079ff04(param_1 + 0x708);
  FUN_0078917c(param_1 + 0x18,PTR_PTR_0099dfd0 + 8);
  return;
}


// ===== 007a0d78  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007a0d7c  FUN_007a0d7c =====

void FUN_007a0d7c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00982128;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 007a0d8c  FUN_007a0d8c =====

void FUN_007a0d8c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00982128;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 007a0dbc  FUN_007a0dbc =====

void FUN_007a0dbc(long param_1)

{
  FUN_0079fcd0(param_1 + 0xf20);
  if ((*(byte *)(param_1 + 0xf00) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0xf10));
  }
  FUN_0079ff04(param_1 + 0x708);
  FUN_0078917c(param_1 + 0x18,PTR_PTR_0099dfd0 + 8);
  return;
}


// ===== 007a0e08  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007a0e0c  FUN_007a0e0c =====

void FUN_007a0e0c(long param_1)

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


// ===== 007a0e5c  FUN_007a0e5c =====

void FUN_007a0e5c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00982178;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 007a0e6c  FUN_007a0e6c =====

void FUN_007a0e6c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00982178;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 007a0e9c  FUN_007a0e9c =====

void FUN_007a0e9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007a0ea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 007a0ea8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007a0eac  FUN_007a0eac =====

EventEmitter * FUN_007a0eac(EventEmitter *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long *plStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plStack_48 = (long *)param_2[1];
  local_50 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  local_60 = *param_3;
  local_58 = param_3[1];
  if (local_58 != 0) {
    FUN_00757d00(1,local_58 + 0x10);
  }
                    /* try { // try from 007a0ef4 to 007a0f03 has its CatchHandler @ 007a0fc8 */
  facebook::react::EventEmitter::EventEmitter(param_1,&local_50,&local_60);
  *(undefined ***)param_1 = &PTR_FUN_0097ff10;
                    /* try { // try from 007a0f10 to 007a0f17 has its CatchHandler @ 007a0fb8 */
  puVar3 = (undefined8 *)operator_new(0x58);
  *puVar3 = &PTR_FUN_0097ff30;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[4] = 0;
  puVar3[3] = 0;
  *(undefined8 **)(param_1 + 0x40) = puVar3 + 3;
  *(undefined8 **)(param_1 + 0x48) = puVar3;
  puVar3[6] = 0;
  puVar3[5] = 0;
  puVar3[8] = 0;
  puVar3[7] = 0;
  *(undefined8 *)((long)puVar3 + 0x4c) = 0;
  *(undefined8 *)((long)puVar3 + 0x44) = 0;
  *(undefined ***)param_1 = &PTR_FUN_009821c8;
  if (local_58 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = plStack_48;
  if ((plStack_48 != (long *)0x0) &&
     (lVar4 = FUN_00757990(0xffffffffffffffff,plStack_48 + 1), lVar4 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007a0ffc  FUN_007a0ffc =====

void FUN_007a0ffc(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[9];
  *param_1 = &PTR_FUN_0097ff10;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *param_1 = &PTR_FUN_0097ff80;
  if (param_1[6] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[4] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


// ===== 007a10ac  FUN_007a10ac =====

ShadowNodeFamily *
FUN_007a10ac(ShadowNodeFamily *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
            undefined8 param_5)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  long *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_58 = *param_3;
  local_50 = (long *)param_3[1];
  if (local_50 != (long *)0x0) {
    FUN_00757d00(1,local_50 + 1);
  }
  local_68 = *param_4;
  local_60 = param_4[1];
  if (local_60 != 0) {
    FUN_00757d00(1,local_60 + 0x10);
  }
                    /* try { // try from 007a1110 to 007a1127 has its CatchHandler @ 007a1190 */
  facebook::react::ShadowNodeFamily::ShadowNodeFamily(param_1,param_2,&local_58,&local_68,param_5);
  if (local_60 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = local_50;
  if ((local_50 != (long *)0x0) &&
     (lVar3 = FUN_00757990(0xffffffffffffffff,local_50 + 1), lVar3 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007a11c8  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_49DCDImageWithThumbhashPlaceholderViewComponentNameEEEENS0_41DCDImageWithThumbhashPlaceholderViewPropsENS0_48DCDImageWithThumbhashPlaceholderViewEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE =====

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_49DCDImageWithThumbhashPlaceholderViewComponentNameEEEENS0_41DCDImageWithThumbhashPlaceholderViewPropsENS0_48DCDImageWithThumbhashPlaceholderViewEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE
               (undefined8 *param_1)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_007a121c(&local_30);
  *param_1 = local_30;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007a121c  FUN_007a121c =====

void FUN_007a121c(undefined8 *param_1,ComponentDescriptorParameters *param_2)

{
  long lVar1;
  ComponentDescriptor *this;
  void *local_90;
  void *pvStack_88;
  undefined8 local_80;
  void *pvStack_78;
  void *local_70;
  undefined8 uStack_68;
  void *local_60;
  void *pvStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (ComponentDescriptor *)operator_new(0x88);
  pvStack_78 = (void *)0x0;
  local_80 = 0;
  uStack_68 = 0;
  local_70 = (void *)0x0;
  pvStack_58 = (void *)0x0;
  local_60 = (void *)0x0;
  uStack_48 = 0;
  uStack_50 = 0;
  pvStack_88 = (void *)0x0;
  local_90 = (void *)0x0;
                    /* try { // try from 007a1260 to 007a126b has its CatchHandler @ 007a12d8 */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_90);
  *(undefined ***)this = &PTR_FUN_00982200;
  FUN_007a1308(this + 0x38);
  *param_1 = this;
  if (local_60 != (void *)0x0) {
    pvStack_58 = local_60;
    operator_delete(local_60);
  }
  if (pvStack_78 != (void *)0x0) {
    local_70 = pvStack_78;
    operator_delete(pvStack_78);
  }
  if (local_90 != (void *)0x0) {
    pvStack_88 = local_90;
    operator_delete(local_90);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007a1308  FUN_007a1308 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007a1308(undefined8 param_1)

{
  byte bVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  void *pvVar8;
  undefined4 local_1060 [2];
  undefined8 *local_1058;
  undefined *local_1050;
  undefined8 uStack_1048;
  undefined8 local_1040;
  undefined8 uStack_1038;
  undefined4 local_1030 [2];
  undefined8 local_1028;
  undefined8 uStack_1020;
  undefined8 local_1018;
  undefined8 uStack_1010;
  undefined4 local_1008;
  undefined4 local_1000;
  undefined1 local_ffc;
  undefined8 local_ffb;
  undefined8 local_ff3;
  undefined8 uStack_feb;
  undefined8 local_fe3;
  undefined8 uStack_fdb;
  undefined8 local_fd3;
  undefined8 uStack_fcb;
  undefined8 local_fc3;
  undefined6 uStack_fbb;
  undefined2 uStack_fb5;
  undefined6 uStack_fb3;
  undefined8 uStack_fad;
  undefined4 local_fa5;
  undefined8 local_fa1;
  undefined1 local_f99;
  undefined1 uStack_f98;
  undefined7 uStack_f97;
  undefined8 uStack_f90;
  undefined8 uStack_f88;
  undefined8 uStack_f80;
  undefined8 local_f78;
  undefined8 uStack_f70;
  undefined8 local_f68;
  undefined8 uStack_f60;
  undefined8 local_f58;
  undefined8 uStack_f50;
  undefined8 local_f48;
  undefined8 uStack_f40;
  undefined8 uStack_f38;
  undefined8 local_f30;
  undefined8 local_f28;
  undefined8 uStack_f20;
  undefined8 local_f18;
  undefined4 uStack_f10;
  undefined4 uStack_f0c;
  undefined4 uStack_f08;
  undefined4 uStack_f04;
  undefined4 uStack_f00;
  undefined4 uStack_efc;
  undefined8 local_ef8;
  undefined8 uStack_ef0;
  undefined4 local_ee8;
  undefined1 local_ee4;
  undefined4 local_ee0;
  undefined1 local_edc;
  undefined4 local_ed8;
  undefined1 local_ed4;
  undefined4 local_ed0;
  undefined1 local_ecc;
  undefined4 local_ec8;
  undefined1 local_ec4;
  undefined4 local_ec0;
  undefined1 local_ebc;
  undefined4 local_eb8;
  undefined1 local_eb4;
  undefined4 local_eb0;
  undefined1 local_eac;
  undefined4 local_ea8;
  undefined1 local_ea4;
  undefined4 local_ea0;
  undefined1 local_e9c;
  undefined4 local_e98;
  undefined1 local_e94;
  undefined4 local_e90;
  undefined1 local_e8c;
  undefined4 local_e88;
  undefined1 local_e84;
  undefined4 local_e80;
  undefined1 local_e7c;
  undefined4 local_e78;
  undefined1 local_e74;
  undefined4 local_e70;
  undefined1 local_e6c;
  undefined1 local_e68;
  undefined1 local_e64;
  undefined1 local_e58;
  undefined8 local_e50;
  undefined8 uStack_e48;
  undefined8 uStack_e40;
  undefined8 uStack_e38;
  undefined8 local_e30;
  undefined8 uStack_e28;
  undefined8 uStack_e20;
  undefined1 uStack_e18;
  undefined7 local_e17;
  undefined1 uStack_e10;
  undefined8 uStack_e0f;
  undefined8 local_e04;
  undefined8 uStack_dfc;
  undefined8 uStack_df4;
  undefined8 uStack_dec;
  undefined8 local_de4;
  undefined8 uStack_ddc;
  undefined8 uStack_dd4;
  undefined8 uStack_dcc;
  undefined8 local_dc4;
  undefined8 uStack_dbc;
  undefined8 uStack_db4;
  undefined5 uStack_dac;
  undefined3 local_da7;
  undefined5 uStack_da4;
  undefined1 local_d9c;
  undefined1 local_d98;
  undefined1 local_d94;
  undefined1 local_d90;
  undefined1 local_d8c;
  undefined1 local_d88;
  undefined1 local_d70;
  undefined8 local_d68;
  undefined8 uStack_d60;
  undefined8 local_d58;
  undefined4 local_d50;
  undefined1 local_d4c;
  undefined4 local_d4b;
  undefined1 local_d47;
  undefined1 local_d46;
  undefined8 local_d40;
  undefined8 uStack_d38;
  undefined8 uStack_d30;
  undefined8 uStack_d28;
  undefined8 local_d20;
  undefined7 uStack_d18;
  undefined4 uStack_d11;
  undefined8 local_d0c;
  undefined1 local_d04;
  undefined1 local_cfc;
  undefined1 local_cf8;
  undefined1 local_cf0;
  undefined1 local_cec;
  undefined1 local_ce4;
  undefined1 local_ce0;
  undefined1 local_cd8;
  undefined1 local_cd4;
  undefined1 local_ccc;
  undefined1 local_cc8;
  undefined1 local_cc0;
  undefined1 local_cbc;
  undefined1 local_cb4;
  undefined1 local_cb0;
  undefined1 local_ca8;
  undefined1 local_ca4;
  undefined1 local_c9c;
  undefined1 local_c98;
  undefined1 local_c90;
  undefined1 local_c8c;
  undefined1 local_c84;
  undefined1 local_c80;
  undefined1 local_c78;
  undefined1 local_c74;
  undefined1 local_c6c;
  undefined1 local_c68;
  undefined1 local_c64;
  undefined1 local_c60;
  undefined1 local_c5c;
  undefined1 local_c58;
  undefined1 local_c54;
  undefined1 local_c50;
  undefined1 local_c4c;
  undefined1 local_c48;
  undefined1 local_c44;
  undefined1 local_c40;
  undefined1 local_c3c;
  undefined1 local_c38;
  undefined1 local_c34;
  undefined1 local_c30;
  undefined1 local_c2c;
  undefined1 local_c28;
  undefined1 local_c24;
  undefined1 local_c20;
  undefined1 local_c1c;
  undefined1 local_c18;
  undefined1 local_c14;
  undefined1 local_c10;
  undefined1 local_c0c;
  undefined8 local_c08;
  undefined8 uStack_c00;
  undefined8 local_bf8;
  undefined8 uStack_bf0;
  undefined8 uStack_be8;
  undefined8 uStack_be0;
  undefined2 local_bd8;
  undefined8 local_bd4;
  undefined1 local_bcc;
  undefined8 local_bc8;
  undefined8 local_bc0;
  undefined8 uStack_bb8;
  undefined1 local_bb0;
  undefined8 local_ba8;
  undefined8 uStack_ba0;
  undefined8 uStack_b98;
  undefined8 uStack_b90;
  undefined8 local_b88;
  undefined8 uStack_b80;
  undefined8 uStack_b78;
  undefined8 uStack_b70;
  undefined8 local_b68;
  undefined8 uStack_b60;
  undefined8 uStack_b58;
  undefined8 uStack_b50;
  undefined8 local_b48;
  undefined8 uStack_b40;
  undefined8 uStack_b38;
  undefined8 uStack_b30;
  undefined8 local_b28;
  undefined8 uStack_b20;
  undefined8 uStack_b18;
  undefined8 uStack_b10;
  undefined8 local_b08;
  undefined8 uStack_b00;
  undefined8 local_af8;
  undefined8 uStack_af0;
  undefined8 local_ae8;
  undefined8 uStack_ae0;
  undefined8 local_ad8;
  undefined8 uStack_ad0;
  undefined8 local_ac8;
  undefined8 uStack_ac0;
  undefined8 local_ab8;
  undefined6 uStack_ab0;
  undefined2 uStack_aaa;
  undefined6 uStack_aa8;
  undefined1 local_aa0;
  undefined1 local_a9c;
  undefined1 local_a98;
  undefined8 local_a94;
  undefined8 uStack_a8c;
  undefined1 local_a84;
  undefined8 local_a80;
  undefined2 local_a78;
  undefined1 local_a76;
  undefined4 local_a74;
  undefined1 local_a70;
  undefined1 local_a10;
  undefined1 local_a08;
  undefined1 local_9a8;
  undefined4 local_9a0;
  undefined2 local_99c;
  undefined1 local_998;
  undefined1 local_994;
  undefined1 local_990;
  undefined1 local_98c;
  undefined1 local_988;
  undefined1 local_984;
  undefined1 local_980;
  undefined1 local_97c;
  undefined1 local_978;
  undefined1 local_974;
  ulong local_970;
  undefined8 uStack_968;
  void *local_960;
  byte local_958;
  void *local_948;
  char local_940;
  undefined4 local_938;
  byte local_930;
  void *local_920;
  char local_918;
  DCDImageWithThumbhashPlaceholderViewProps aDStack_910 [1760];
  byte local_230;
  void *local_220;
  byte local_218;
  void *local_208;
  char local_200;
  byte local_1f0;
  void *local_1e0;
  char local_1d8;
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
  void *local_140;
  undefined8 uStack_138;
  void *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined4 local_100 [4];
  undefined4 local_f0 [2];
  undefined8 local_e8;
  undefined4 local_c0;
  void *local_b8;
  void *pvStack_b0;
  undefined8 uStack_a8;
  void *local_a0;
  void *local_98;
  undefined8 uStack_90;
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100[0] = 0;
  local_f0[0] = 0;
  local_e8 = 0;
  local_c0 = 0;
  pvStack_b0 = (void *)0x0;
  local_b8 = (void *)0x0;
  local_a0 = (void *)0x0;
  uStack_a8 = 0;
  uStack_90 = 0;
  local_98 = (void *)0x0;
  local_120 = 0;
  uStack_128 = 0;
  local_130 = (void *)0x0;
  uStack_138 = 0;
  local_140 = (void *)0x0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_168 = 0;
  local_170 = 0;
  uStack_178 = 0;
  local_180 = 0;
  uStack_188 = 0;
  local_190 = 0;
  uStack_198 = 0;
  local_1a0 = 0;
  uStack_1a8 = 0;
  local_1b0 = 0;
  uStack_1b8 = 0;
  local_1c0 = 0;
  uStack_1c8 = 0;
  local_1d0 = 0;
                    /* try { // try from 007a1394 to 007a139f has its CatchHandler @ 007a19b0 */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1d0);
  local_120 = CONCAT44(local_120._4_4_,0x3f800000);
  local_1060[0] = 0xffffffff;
  uStack_128 = 0;
  local_130 = (void *)0x0;
  uStack_138 = 0;
  local_140 = (void *)0x0;
  local_1058 = &local_1d0;
  facebook::react::RawProps::facebook::react::RawProps::parse(&local_118,param_1);
  memset(local_1030,0,0x720);
  local_88[0] = 5;
  local_70 = 0;
  local_1050 = PTR_construction_vtable_0099e1f8 + 0x20;
  local_1030[0] = 5;
  uStack_1038 = 0;
  local_1040 = 0;
  uStack_1048 = 0;
  local_68 = 0;
  uStack_60 = 0x3f800000;
  uStack_78 = 0;
  local_80 = 0;
  uStack_1020 = 0;
  local_1028 = 0;
  uStack_1010 = 0;
  local_1018 = 0;
  local_1008 = 0x3f800000;
  folly::dynamic::folly::dynamic::destroy(local_88);
  local_ffc = 0;
  local_fa1 = 0;
  uStack_ac0 = _UNK_00470a7c;
  local_ac8 = _DAT_00470a74;
  local_ffb = _s__00375408;
  uStack_bb8 = _UNK_00371598;
  local_bc0 = _DAT_00371590;
  uStack_ad0 = _UNK_00470a6c;
  local_ad8 = _DAT_00470a64;
  local_ee4 = 0;
  uStack_ae0 = _UNK_00470a5c;
  local_ae8 = _DAT_00470a54;
  uStack_af0 = _UNK_00470a4c;
  local_af8 = _DAT_00470a44;
  uStack_aa8 = 0;
  local_edc = 0;
  uStack_f10 = 0;
  local_f18 = 0;
  uStack_efc = 0;
  uStack_f20 = 0;
  local_f28 = 0;
  uStack_ab0 = 0;
  uStack_aaa = 0;
  local_ab8 = 0;
  local_1000 = 0x10410710;
  local_fa5 = 0x40004;
  uStack_f04 = 0;
  uStack_f00 = 0;
  uStack_f0c = 0;
  uStack_f08 = 0;
  uStack_ef0 = 0;
  local_ef8 = 0;
  local_ee8 = 0x7fc00000;
  local_ee0 = 0x7fc00000;
  local_ed8 = 0x7fc00000;
  local_ed0 = 0x7fc00000;
  local_ec8 = 0x7fc00000;
  local_ec0 = 0x7fc00000;
  local_eb8 = 0x7fc00000;
  local_eb0 = 0x7fc00000;
  local_ea8 = 0x7fc00000;
  local_ea0 = 0x7fc00000;
  local_e98 = 0x7fc00000;
  local_e90 = 0x7fc00000;
  local_e88 = 0x7fc00000;
  local_e80 = 0x7fc00000;
  local_e78 = 0x7fc00000;
  local_e70 = 0x7fc00000;
  uStack_e0f = 0;
  uStack_e10 = 0;
  uStack_dfc = 0;
  local_e04 = 0;
  uStack_dec = 0;
  uStack_df4 = 0;
  uStack_ddc = 0;
  local_de4 = 0;
  uStack_dcc = 0;
  uStack_dd4 = 0;
  uStack_dbc = 0;
  local_dc4 = 0;
  uStack_dac = 0;
  uStack_db4 = 0;
  local_da7 = 0;
  uStack_da4 = 0;
  local_d4c = 1;
  local_d4b = 0;
  local_d46 = 0x23;
  local_d0c = 0x3f800000;
  uStack_bf0 = 0;
  local_bf8 = 0;
  uStack_be0 = 0;
  uStack_be8 = 0;
  uStack_c00 = 0;
  local_c08 = 0;
  local_bd4 = 0;
  uStack_ba0 = 0;
  local_ba8 = 0;
  uStack_b90 = 0;
  uStack_b98 = 0;
  uStack_b80 = 0;
  local_b88 = 0;
  uStack_b70 = 0;
  uStack_b78 = 0;
  uStack_b60 = 0;
  local_b68 = 0;
  uStack_b50 = 0;
  uStack_b58 = 0;
  uStack_b40 = 0;
  local_b48 = 0;
  uStack_b30 = 0;
  uStack_b38 = 0;
  uStack_b20 = 0;
  local_b28 = 0;
  uStack_b10 = 0;
  uStack_b18 = 0;
  uStack_b00 = 0;
  local_b08 = 0;
  uStack_f97 = 0;
  uStack_feb = 0;
  local_ff3 = 0;
  uStack_fdb = 0;
  local_fe3 = 0;
  uStack_fcb = 0;
  local_fd3 = 0;
  uStack_fbb = 0;
  local_fc3 = 0;
  uStack_fad = 0;
  uStack_fb5 = 0;
  uStack_fb3 = 0;
  local_f99 = 0;
  uStack_f98 = 0;
  uStack_f88 = 0;
  uStack_f90 = 0;
  local_f78 = 0;
  uStack_f80 = 0;
  local_f68 = 0;
  uStack_f70 = 0;
  local_f58 = 0;
  uStack_f60 = 0;
  local_f48 = 0;
  uStack_f50 = 0;
  uStack_f38 = 0;
  uStack_f40 = 0;
  local_f30 = 0;
  local_ed4 = 0;
  local_ecc = 0;
  local_ec4 = 0;
  local_ebc = 0;
  local_eb4 = 0;
  local_eac = 0;
  local_ea4 = 0;
  local_e9c = 0;
  local_e94 = 0;
  local_e8c = 0;
  local_e84 = 0;
  local_e7c = 0;
  local_e74 = 0;
  local_e6c = 0;
  local_e68 = 0;
  local_e64 = 0;
  local_e58 = 0;
  local_d9c = 0;
  local_d98 = 0;
  local_d94 = 0;
  local_d90 = 0;
  local_d8c = 0;
  local_d88 = 0;
  local_d70 = 0;
  uStack_e48 = 0;
  local_e50 = 0;
  uStack_e38 = 0;
  uStack_e40 = 0;
  uStack_e28 = 0;
  local_e30 = 0;
  uStack_e18 = 0;
  local_e17 = 0;
  uStack_e20 = 0;
  uStack_d60 = 0;
  local_d68 = 0;
  local_d58 = 0;
  local_d50 = 0;
  local_d47 = 0;
  uStack_d38 = 0;
  local_d40 = 0;
  uStack_d28 = 0;
  uStack_d30 = 0;
  uStack_d18 = 0;
  uStack_d11 = 0;
  local_d20 = 0;
  local_d04 = 0;
  local_cfc = 0;
  local_cf8 = 0;
  local_cf0 = 0;
  local_cec = 0;
  local_ce4 = 0;
  local_ce0 = 0;
  local_cd8 = 0;
  local_cd4 = 0;
  local_ccc = 0;
  local_cc8 = 0;
  local_cc0 = 0;
  local_cbc = 0;
  local_cb4 = 0;
  local_cb0 = 0;
  local_ca8 = 0;
  local_ca4 = 0;
  local_c9c = 0;
  local_c98 = 0;
  local_c90 = 0;
  local_c8c = 0;
  local_c84 = 0;
  local_c80 = 0;
  local_c78 = 0;
  local_c74 = 0;
  local_c6c = 0;
  local_c68 = 0;
  local_c64 = 0;
  local_c60 = 0;
  local_c5c = 0;
  local_c58 = 0;
  local_c54 = 0;
  local_c50 = 0;
  local_c4c = 0;
  local_c48 = 0;
  local_c44 = 0;
  local_c40 = 0;
  local_c3c = 0;
  local_c38 = 0;
  local_c34 = 0;
  local_c30 = 0;
  local_c2c = 0;
  local_c28 = 0;
  local_c24 = 0;
  local_c20 = 0;
  local_c1c = 0;
  local_c18 = 0;
  local_c14 = 0;
  local_c10 = 0;
  local_c0c = 0;
  local_bc8 = 0;
  local_bd8 = 0;
  local_bcc = 0;
  local_bb0 = 0;
  local_aa0 = 0;
  local_a9c = 0;
  local_a98 = 0;
  local_a80 = 0;
  uStack_a8c = 0;
  local_a94 = 0;
  local_a84 = 0;
  local_a78 = 0x101;
  local_a76 = 0;
  local_a74 = 0;
  local_a70 = 0;
  local_a10 = 0;
  local_a08 = 0;
  local_9a8 = 0;
  local_998 = 0;
  local_994 = 0;
  local_990 = 0;
  local_98c = 0;
  local_988 = 0;
  local_984 = 0;
  local_980 = 0;
  local_97c = 0;
  local_978 = 0;
  local_974 = 0;
  local_99c = 0;
  local_9a0 = 0;
  local_1050 = PTR_vtable_0099dfe0 + 0x20;
  local_940 = '\0';
  local_938 = 0;
  local_930 = 0;
  local_918 = '\0';
  local_960 = (void *)0x0;
  uStack_968 = 0;
  local_970 = 0;
  local_958 = 0;
                    /* try { // try from 007a17a0 to 007a17b3 has its CatchHandler @ 007a19b0 */
  facebook::react::DCDImageWithThumbhashPlaceholderViewProps::
  DCDImageWithThumbhashPlaceholderViewProps
            (aDStack_910,(PropsParserContext *)local_1060,
             (DCDImageWithThumbhashPlaceholderViewProps *)&local_1050,(RawProps *)&local_118);
  if ((local_1d8 != '\0') && ((local_1f0 & 1) != 0)) {
    operator_delete(local_1e0);
  }
  if ((local_200 != '\0') && ((local_218 & 1) != 0)) {
    operator_delete(local_208);
  }
  if ((local_230 & 1) != 0) {
    operator_delete(local_220);
  }
  puVar5 = PTR_PTR_0099dfe8;
  FUN_0078917c(aDStack_910,PTR_PTR_0099dfe8 + 8);
  if ((local_918 != '\0') && ((local_930 & 1) != 0)) {
    operator_delete(local_920);
  }
  if ((local_940 != '\0') && ((local_958 & 1) != 0)) {
    operator_delete(local_948);
  }
  if ((local_970 & 1) != 0) {
    operator_delete(local_960);
  }
  FUN_0078917c(&local_1050,puVar5 + 8);
  facebook::react::RawPropsParser::facebook::react::RawPropsParser::postPrepare(param_1);
  pvVar3 = local_140;
  puVar4 = (undefined8 *)local_130;
  while (puVar4 != (undefined8 *)0x0) {
    plVar7 = (long *)puVar4[6];
    pvVar8 = (void *)*puVar4;
    local_140 = pvVar3;
    if ((plVar7 == (long *)0x0) || (lVar6 = FUN_00757990(0xffffffffffffffff,plVar7 + 1), lVar6 != 0)
       ) {
      bVar1 = *(byte *)(puVar4 + 2);
    }
    else {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__ndk1::__shared_weak_count::__release_weak();
      bVar1 = *(byte *)(puVar4 + 2);
    }
    if ((bVar1 & 1) != 0) {
      operator_delete((void *)puVar4[4]);
    }
    operator_delete(puVar4);
    pvVar3 = local_140;
    puVar4 = (undefined8 *)pvVar8;
  }
  local_140 = (void *)0x0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)&uStack_178);
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)&uStack_1a8);
  std::__ndk1::mutex::~mutex((mutex *)&local_1d0);
  pvVar8 = local_a0;
  pvVar3 = local_98;
  if (local_a0 != (void *)0x0) {
    while (pvVar3 != pvVar8) {
      if (*(uint *)((long)pvVar3 + -8) != 0xffffffff) {
                    /* try { // try from 007a1940 to 007a194b has its CatchHandler @ 007a19b4 */
        (*(code *)(&PTR_FUN_0097fbf8)[*(uint *)((long)pvVar3 + -8)])
                  (&local_1050,(void *)((long)pvVar3 + -0x38));
      }
      *(undefined4 *)((long)pvVar3 + -8) = 0xffffffff;
      pvVar3 = (void *)((long)pvVar3 + -0x38);
    }
    local_98 = pvVar8;
    operator_delete(local_a0);
  }
  if (local_b8 != (void *)0x0) {
    pvStack_b0 = local_b8;
    operator_delete(local_b8);
  }
  folly::dynamic::folly::dynamic::destroy(local_f0);
  facebook::jsi::Value::~Value((Value *)local_100);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007a19b8  FUN_007a19b8 =====

void FUN_007a19b8(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 007a19dc  FUN_007a19dc =====

undefined * FUN_007a19dc(void)

{
  return PTR_DCDImageWithThumbhashPlaceholderViewComponentName_0099dfd8;
}


// ===== 007a19e8  FUN_007a19e8 =====

undefined * FUN_007a19e8(void)

{
  return PTR_DCDImageWithThumbhashPlaceholderViewComponentName_0099dfd8;
}


// ===== 007a19f4  FUN_007a19f4 =====

undefined8 FUN_007a19f4(void)

{
  return 0x61;
}


// ===== 007a19fc  FUN_007a19fc =====

void FUN_007a19fc(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 uStack_49;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_64 = (**(code **)(*param_2 + 0x20))();
  FUN_007a21ec(&local_60,&uStack_49,param_3,param_4,&local_64);
                    /* try { // try from 007a1a64 to 007a1a6b has its CatchHandler @ 007a1a9c */
  (**(code **)(*param_2 + 0x60))(param_2,local_60);
  param_1[1] = uStack_58;
  *param_1 = local_60;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007a1ac4  FUN_007a1ac4 =====

void FUN_007a1ac4(undefined8 *param_1,long *param_2,shared_ptr *param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *local_70;
  long *local_68;
  long *local_60;
  long *plStack_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_007a24a0(&local_60,&local_70);
                    /* try { // try from 007a1b10 to 007a1b1b has its CatchHandler @ 007a1bc8 */
  (**(code **)(*local_60 + 0x10))(local_60,param_3,param_4);
  local_70 = local_60;
  local_68 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    FUN_00757d00(1,plStack_58 + 1);
  }
                    /* try { // try from 007a1b34 to 007a1b43 has its CatchHandler @ 007a1bb8 */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_70);
  plVar2 = local_68;
  if ((local_68 != (long *)0x0) &&
     (lVar3 = FUN_00757990(0xffffffffffffffff,local_68 + 1), lVar3 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 007a1b80 to 007a1b87 has its CatchHandler @ 007a1bc8 */
  (**(code **)(*param_2 + 0x60))(param_2,local_60);
  param_1[1] = plStack_58;
  *param_1 = local_60;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007a1bf0  FUN_007a1bf0 =====

void FUN_007a1bf0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x007a1c00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 007a1c04  FUN_007a1c04 =====

void FUN_007a1c04(undefined8 *param_1,long param_2,undefined8 param_3,long *param_4,
                 RawProps *param_5)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  char *pcVar6;
  int iVar7;
  ulong uVar8;
  char *pcVar9;
  long lVar10;
  long *local_100;
  long *local_f8;
  long *local_f0;
  long *plStack_e8;
  undefined1 uStack_d1;
  dynamic adStack_d0 [48];
  uint local_a0;
  int local_98 [6];
  long *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((*param_4 == 0) && (uVar8 = facebook::react::RawProps::isEmpty(), (uVar8 & 1) != 0)) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_49DCDImageWithThumbhashPlaceholderViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_41DCDImageWithThumbhashPlaceholderViewPropsENS0_48DCDImageWithThumbhashPlaceholderViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd70
         & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_49DCDImageWithThumbhashPlaceholderViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_41DCDImageWithThumbhashPlaceholderViewPropsENS0_48DCDImageWithThumbhashPlaceholderViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd70
                                   ), iVar7 != 0)) {
                    /* try { // try from 007a1ed0 to 007a1edf has its CatchHandler @ 007a1f0c */
      FUN_007a2918(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_49DCDImageWithThumbhashPlaceholderViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_41DCDImageWithThumbhashPlaceholderViewPropsENS0_48DCDImageWithThumbhashPlaceholderViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd68
                   ,adStack_d0);
      __cxa_atexit(FUN_007a28c8,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_49DCDImageWithThumbhashPlaceholderViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_41DCDImageWithThumbhashPlaceholderViewPropsENS0_48DCDImageWithThumbhashPlaceholderViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd68
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_49DCDImageWithThumbhashPlaceholderViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_41DCDImageWithThumbhashPlaceholderViewPropsENS0_48DCDImageWithThumbhashPlaceholderViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd70
                         );
    }
    lVar10 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_49DCDImageWithThumbhashPlaceholderViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_41DCDImageWithThumbhashPlaceholderViewPropsENS0_48DCDImageWithThumbhashPlaceholderViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd68
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_49DCDImageWithThumbhashPlaceholderViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_41DCDImageWithThumbhashPlaceholderViewPropsENS0_48DCDImageWithThumbhashPlaceholderViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd68
    ;
    param_1[1] = lVar10;
    if (lVar10 != 0) {
      FUN_00757d00(1,lVar10 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    FUN_007a25a4(&local_f0,param_3,param_5,param_4);
                    /* try { // try from 007a1cac to 007a1cbf has its CatchHandler @ 007a1f40 */
    uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if (((uVar8 & 1) == 0) ||
       ((uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar8 & 1) == 0 ||
        (uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enablePropsUpdateReconciliationAndroid(), (uVar8 & 1) == 0)))) {
LAB_007a1ce8:
      local_100 = local_f0;
      local_f8 = plStack_e8;
      if (plStack_e8 != (long *)0x0) {
        FUN_00757d00(1,plStack_e8 + 1);
      }
                    /* try { // try from 007a1d00 to 007a1d0f has its CatchHandler @ 007a1f30 */
      FUN_007a26f0(&local_100,param_5,param_4);
      plVar4 = local_f8;
      if ((local_f8 != (long *)0x0) &&
         (lVar10 = FUN_00757990(0xffffffffffffffff,local_f8 + 1), lVar10 == 0)) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 007a1cd0 to 007a1cd7 has its CatchHandler @ 007a1f20 */
      pcVar9 = (char *)(**(code **)(*local_f0 + 0x10))();
      iVar7 = strcmp(PTR_DCDImageWithThumbhashPlaceholderViewComponentName_0099dfd8,pcVar9);
      if (iVar7 != 0) goto LAB_007a1ce8;
      bVar3 = false;
    }
                    /* try { // try from 007a1d44 to 007a1d47 has its CatchHandler @ 007a1f40 */
    uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar8 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 007a1d54 to 007a1d6f has its CatchHandler @ 007a1f2c */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(local_f0 + 4));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_f0;
      plVar5 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 007a1eb0 to 007a1ebf has its CatchHandler @ 007a1f24 */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_007a1f8c;
      }
      for (; local_f0 = plVar4, plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (*(int *)(plVar5 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 007a1e90 to 007a1e9f has its CatchHandler @ 007a1f4c */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_007a1f8c;
        }
        uVar1 = 0x811c9dc5;
        uVar8 = (ulong)(*(byte *)(plVar5 + 3) >> 1);
        pcVar6 = (char *)((long)plVar5 + 0x19);
        pcVar9 = (char *)((long)plVar5 + 0x19);
        if ((*(byte *)(plVar5 + 3) & 1) != 0) {
          uVar8 = plVar5[4];
          pcVar6 = (char *)plVar5[5];
          pcVar9 = (char *)plVar5[5];
        }
        for (; uVar8 != 0; uVar8 = uVar8 - 1) {
          uVar1 = (uVar1 ^ (int)*pcVar6) * 0x1000193;
          pcVar6 = pcVar6 + 1;
        }
                    /* try { // try from 007a1df0 to 007a1dfb has its CatchHandler @ 007a1f54 */
        folly::dynamic::dynamic(adStack_d0,(dynamic *)(plVar5 + 8));
        local_a0 = 0;
                    /* try { // try from 007a1e00 to 007a1e17 has its CatchHandler @ 007a1f58 */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (plVar4,param_3,uVar1,pcVar9,adStack_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 007a1e28 to 007a1e33 has its CatchHandler @ 007a1f48 */
          (*(code *)(&PTR_FUN_0097fbf8)[local_a0])(&uStack_d1,adStack_d0);
        }
        plVar4 = local_f0;
      }
      folly::dynamic::folly::dynamic::destroy(local_98);
    }
    param_1[1] = plStack_e8;
    *param_1 = local_f0;
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_007a1f8c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007a1f90  FUN_007a1f90 =====

void FUN_007a1f90(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 007a1f98  FUN_007a1f98 =====

void FUN_007a1f98(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 007a1fa0  FUN_007a1fa0 =====

void FUN_007a1fa0(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined1 auStack_80 [8];
  long *local_78;
  long *local_70;
  long *local_68;
  undefined1 uStack_59;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  FUN_0078a610(auStack_80,&uStack_59,param_3 + 8,param_3 + 4);
                    /* try { // try from 007a1fe8 to 007a1fef has its CatchHandler @ 007a2170 */
  plVar4 = (long *)operator_new(0x68);
  plVar1 = plVar4 + 3;
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_00982448;
                    /* try { // try from 007a2008 to 007a2017 has its CatchHandler @ 007a2158 */
  FUN_007a2c18(plVar1,auStack_80,param_2 + 8);
  local_70 = plVar1;
  local_68 = plVar4;
  if ((local_78 != (long *)0x0) &&
     (lVar5 = FUN_00757990(0xffffffffffffffff,local_78 + 1), lVar5 == 0)) {
    (**(code **)(*local_78 + 0x10))(local_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 007a204c to 007a2053 has its CatchHandler @ 007a2148 */
  puVar6 = (undefined8 *)operator_new(0x1a0);
  puVar2 = puVar6 + 4;
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_0097fff0;
                    /* try { // try from 007a206c to 007a2083 has its CatchHandler @ 007a2130 */
  FUN_007a2e18(puVar2,param_3,&local_70,param_2 + 8,param_2);
  plVar1 = local_70;
  *param_1 = (long)puVar2;
  param_1[1] = (long)puVar6;
  local_90 = puVar2;
  local_88 = puVar6;
  FUN_00757d00(1,puVar6 + 2);
                    /* try { // try from 007a209c to 007a20a7 has its CatchHandler @ 007a2110 */
  facebook::react::EventEmitter::facebook::react::EventEmitter::setShadowNodeFamily
            (plVar1,&local_90);
  if (local_88 != (undefined8 *)0x0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar1 = local_68;
  if ((local_68 != (long *)0x0) &&
     (lVar5 = FUN_00757990(0xffffffffffffffff,local_68 + 1), lVar5 == 0)) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007a2198  FUN_007a2198 =====

void FUN_007a2198(void)

{
  return;
}


// ===== 007a219c  FUN_007a219c =====

void FUN_007a219c(long param_1)

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


// ===== 007a21ec  FUN_007a21ec =====

void FUN_007a21ec(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 *param_5)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined4 uVar8;
  
  puVar6 = (undefined8 *)operator_new(0x400);
  uVar8 = *param_5;
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_00982290;
                    /* try { // try from 007a2234 to 007a2243 has its CatchHandler @ 007a22dc */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
            ((YogaLayoutableShadowNode *)(puVar6 + 3),param_3,param_4,uVar8);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_009822e0;
  uVar2 = *(uint *)((long)puVar6 + 0x6c);
  uVar1 = uVar2 & 3 | (uint)((*(byte *)(lVar7 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)puVar6 + 0x6c) = uVar2 & 0xfffffff8 | uVar1;
  if ((*(uint *)(lVar7 + 0x50) & 0x30000000) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    if (*(char *)(lVar7 + 0x5b4) != '\0') {
      uVar8 = *(undefined4 *)(lVar7 + 0x5b0);
    }
  }
  *(undefined4 *)(puVar6 + 10) = uVar8;
  cVar3 = *(char *)(lVar7 + 0x6b0);
  cVar4 = *(char *)(lVar7 + 0x6b1);
  cVar5 = *(char *)(lVar7 + 0x1e8);
  *param_1 = (YogaLayoutableShadowNode *)(puVar6 + 3);
  param_1[1] = puVar6;
  *(uint *)((long)puVar6 + 0x6c) =
       uVar2 & 0xfffff000 |
       uVar2 & 0x7f8 | uVar1 | (uint)((cVar3 != '\0' || cVar4 != '\0') || cVar5 != '\0') << 0xb;
  return;
}


// ===== 007a22f8  FUN_007a22f8 =====

void FUN_007a22f8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00982290;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 007a2308  FUN_007a2308 =====

void FUN_007a2308(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00982290;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 007a2338  FUN_007a2338 =====

void FUN_007a2338(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007a2340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 007a2344  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007a2348  FUN_007a2348 =====

void FUN_007a2348(long *param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = (void *)param_1[0x79];
  *param_1 = (long)(PTR_vtable_0099de98 + 0x10);
  if (pvVar4 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x7a];
    pvVar2 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        plVar3 = *(long **)((long)pvVar5 + -8);
        if ((plVar3 != (long *)0x0) &&
           (lVar1 = FUN_00757990(0xffffffffffffffff,plVar3 + 1), lVar1 == 0)) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
        pvVar5 = (void *)((long)pvVar5 + -0x10);
      } while (pvVar5 != pvVar4);
      pvVar2 = (void *)param_1[0x79];
    }
    param_1[0x7a] = (long)pvVar4;
    operator_delete(pvVar2);
  }
  pvVar4 = (void *)param_1[0x73];
  if (pvVar4 != (void *)0x0) {
    param_1[0x74] = (long)pvVar4;
    operator_delete(pvVar4);
  }
  FUN_007890e8(param_1 + 0x23);
  FUN_00789784(param_1);
  operator_delete(param_1);
  return;
}


// ===== 007a2408  FUN_007a2408 =====

void FUN_007a2408(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  facebook::react::LayoutableShadowNode::getLayoutMetrics();
  facebook::react::BaseViewProps::resolveTransform(*(LayoutMetrics **)(param_1 + 8));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007a2470  FUN_007a2470 =====

bool FUN_007a2470(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 007a2488  FUN_007a2488 =====

bool FUN_007a2488(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 007a24a0  FUN_007a24a0 =====

void FUN_007a24a0(undefined8 *param_1,undefined8 param_2,ShadowNode *param_3,
                 ShadowNodeFragment *param_4)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined4 uVar8;
  
  puVar6 = (undefined8 *)operator_new(0x400);
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_00982290;
                    /* try { // try from 007a24e0 to 007a24ef has its CatchHandler @ 007a2588 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
            ((YogaLayoutableShadowNode *)(puVar6 + 3),param_3,param_4);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_009822e0;
  uVar2 = *(uint *)((long)puVar6 + 0x6c);
  uVar1 = uVar2 & 3 | (uint)((*(byte *)(lVar7 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)puVar6 + 0x6c) = uVar2 & 0xfffffff8 | uVar1;
  if ((*(uint *)(lVar7 + 0x50) & 0x30000000) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    if (*(char *)(lVar7 + 0x5b4) != '\0') {
      uVar8 = *(undefined4 *)(lVar7 + 0x5b0);
    }
  }
  *(undefined4 *)(puVar6 + 10) = uVar8;
  cVar3 = *(char *)(lVar7 + 0x6b0);
  cVar4 = *(char *)(lVar7 + 0x6b1);
  cVar5 = *(char *)(lVar7 + 0x1e8);
  *param_1 = (YogaLayoutableShadowNode *)(puVar6 + 3);
  param_1[1] = puVar6;
  *(uint *)((long)puVar6 + 0x6c) =
       uVar2 & 0xfffff000 |
       uVar2 & 0x7f8 | uVar1 | (uint)((cVar3 != '\0' || cVar4 != '\0') || cVar5 != '\0') << 0xb;
  return;
}


// ===== 007a25a4  FUN_007a25a4 =====

void FUN_007a25a4(undefined8 *param_1,PropsParserContext *param_2,RawProps *param_3,long *param_4)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  DCDImageWithThumbhashPlaceholderViewProps *pDVar4;
  undefined1 uStack_59;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pDVar4 = (DCDImageWithThumbhashPlaceholderViewProps *)*param_4;
  if (pDVar4 == (DCDImageWithThumbhashPlaceholderViewProps *)0x0) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_49DCDImageWithThumbhashPlaceholderViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_41DCDImageWithThumbhashPlaceholderViewPropsENS0_48DCDImageWithThumbhashPlaceholderViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd70
         & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_49DCDImageWithThumbhashPlaceholderViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_41DCDImageWithThumbhashPlaceholderViewPropsENS0_48DCDImageWithThumbhashPlaceholderViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd70
                                   ), iVar2 != 0)) {
                    /* try { // try from 007a2670 to 007a267f has its CatchHandler @ 007a26ac */
      FUN_007a2918(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_49DCDImageWithThumbhashPlaceholderViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_41DCDImageWithThumbhashPlaceholderViewPropsENS0_48DCDImageWithThumbhashPlaceholderViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd68
                   ,&uStack_59);
      __cxa_atexit(FUN_007a28c8,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_49DCDImageWithThumbhashPlaceholderViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_41DCDImageWithThumbhashPlaceholderViewPropsENS0_48DCDImageWithThumbhashPlaceholderViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd68
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_49DCDImageWithThumbhashPlaceholderViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_41DCDImageWithThumbhashPlaceholderViewPropsENS0_48DCDImageWithThumbhashPlaceholderViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd70
                         );
    }
    pDVar4 = *(DCDImageWithThumbhashPlaceholderViewProps **)
              PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_49DCDImageWithThumbhashPlaceholderViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_41DCDImageWithThumbhashPlaceholderViewPropsENS0_48DCDImageWithThumbhashPlaceholderViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd68
    ;
  }
  puVar3 = (undefined8 *)operator_new(0x758);
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_009823f8;
                    /* try { // try from 007a261c to 007a262f has its CatchHandler @ 007a26c0 */
  facebook::react::DCDImageWithThumbhashPlaceholderViewProps::
  DCDImageWithThumbhashPlaceholderViewProps
            ((DCDImageWithThumbhashPlaceholderViewProps *)(puVar3 + 3),param_2,pDVar4,param_3);
  *param_1 = (DCDImageWithThumbhashPlaceholderViewProps *)(puVar3 + 3);
  param_1[1] = puVar3;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007a26f0  FUN_007a26f0 =====

void FUN_007a26f0(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  plVar3 = local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar5 = *param_1;
  if (*param_3 == 0) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_49DCDImageWithThumbhashPlaceholderViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_41DCDImageWithThumbhashPlaceholderViewPropsENS0_48DCDImageWithThumbhashPlaceholderViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd70
         & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_49DCDImageWithThumbhashPlaceholderViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_41DCDImageWithThumbhashPlaceholderViewPropsENS0_48DCDImageWithThumbhashPlaceholderViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd70
                                   ), iVar2 != 0)) {
                    /* try { // try from 007a27d4 to 007a27e3 has its CatchHandler @ 007a2810 */
      FUN_007a2918(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_49DCDImageWithThumbhashPlaceholderViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_41DCDImageWithThumbhashPlaceholderViewPropsENS0_48DCDImageWithThumbhashPlaceholderViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd68
                   ,local_70);
      __cxa_atexit(FUN_007a28c8,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_49DCDImageWithThumbhashPlaceholderViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_41DCDImageWithThumbhashPlaceholderViewPropsENS0_48DCDImageWithThumbhashPlaceholderViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd68
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_49DCDImageWithThumbhashPlaceholderViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_41DCDImageWithThumbhashPlaceholderViewPropsENS0_48DCDImageWithThumbhashPlaceholderViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd70
                         );
    }
    local_50 = (long *)0x0;
                    /* try { // try from 007a2760 to 007a2773 has its CatchHandler @ 007a2824 */
    facebook::react::Props::facebook::react::Props::initializeDynamicProps
              (uVar5,*(undefined8 *)
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_49DCDImageWithThumbhashPlaceholderViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_41DCDImageWithThumbhashPlaceholderViewPropsENS0_48DCDImageWithThumbhashPlaceholderViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd68
               ,param_2,local_70);
  }
  else {
    local_50 = (long *)0x0;
                    /* try { // try from 007a2724 to 007a273b has its CatchHandler @ 007a2828 */
    facebook::react::Props::facebook::react::Props::initializeDynamicProps
              (uVar5,*param_3,param_2,local_70);
  }
  if (local_50 == local_70) {
    lVar4 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007a27a0;
    lVar4 = 5;
    plVar3 = local_50;
  }
  (**(code **)(*plVar3 + lVar4 * 8))();
LAB_007a27a0:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007a2878  FUN_007a2878 =====

void FUN_007a2878(long param_1)

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


// ===== 007a28c8  FUN_007a28c8 =====

void FUN_007a28c8(long param_1)

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


// ===== 007a2918  FUN_007a2918 =====

void FUN_007a2918(undefined8 *param_1)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x758);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_009823a8;
  memset(__s,0,0x740);
                    /* try { // try from 007a295c to 007a296f has its CatchHandler @ 007a29fc */
  FUN_00788b10(__s,PTR_PTR_0099dfe8 + 0x10);
  *(undefined4 *)((long)puVar2 + 0x5f4) = 0;
  *(undefined1 *)(puVar2 + 0xbf) = 0;
  *(undefined1 *)(puVar2 + 0xcb) = 0;
  *(undefined1 *)(puVar2 + 0xcc) = 0;
  *(undefined1 *)(puVar2 + 0xd8) = 0;
  *(undefined1 *)(puVar2 + 0xda) = 0;
  *(undefined1 *)((long)puVar2 + 0x6d4) = 0;
  *(undefined1 *)(puVar2 + 0xdb) = 0;
  *(undefined1 *)((long)puVar2 + 0x6dc) = 0;
  *(undefined1 *)(puVar2 + 0xdc) = 0;
  *(undefined1 *)((long)puVar2 + 0x6e4) = 0;
  *(undefined1 *)(puVar2 + 0xdd) = 0;
  *(undefined1 *)((long)puVar2 + 0x6ec) = 0;
  *(undefined1 *)(puVar2 + 0xde) = 0;
  *(undefined1 *)((long)puVar2 + 0x6f4) = 0;
  puVar1 = PTR_vtable_0099dfe0;
  *(undefined4 *)(puVar2 + 0xd9) = 0;
  *(undefined2 *)((long)puVar2 + 0x6cc) = 0;
  *(undefined1 *)(puVar2 + 0xe5) = 0;
  puVar2[3] = puVar1 + 0x20;
  *(undefined4 *)(puVar2 + 0xe6) = 0;
  *(undefined1 *)(puVar2 + 0xe7) = 0;
  *(undefined1 *)(puVar2 + 0xea) = 0;
  *(undefined1 *)(puVar2 + 0xe2) = 0;
  puVar2[0xe1] = 0;
  puVar2[0xe0] = 0;
  puVar2[0xdf] = 0;
  *param_1 = __s;
  param_1[1] = puVar2;
  return;
}


// ===== 007a2a18  FUN_007a2a18 =====

void FUN_007a2a18(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009823a8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 007a2a28  FUN_007a2a28 =====

void FUN_007a2a28(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009823a8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 007a2a58  FUN_007a2a58 =====

void FUN_007a2a58(long param_1)

{
  if ((*(char *)(param_1 + 0x750) != '\0') && ((*(byte *)(param_1 + 0x738) & 1) != 0)) {
    operator_delete(*(void **)(param_1 + 0x748));
  }
  if ((*(char *)(param_1 + 0x728) != '\0') && ((*(byte *)(param_1 + 0x710) & 1) != 0)) {
    operator_delete(*(void **)(param_1 + 0x720));
  }
  if ((*(byte *)(param_1 + 0x6f8) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x708));
  }
  FUN_0078917c(param_1 + 0x18,PTR_PTR_0099dfe8 + 8);
  return;
}


// ===== 007a2ac4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007a2ac8  FUN_007a2ac8 =====

void FUN_007a2ac8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009823f8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 007a2ad8  FUN_007a2ad8 =====

void FUN_007a2ad8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009823f8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 007a2b08  FUN_007a2b08 =====

void FUN_007a2b08(long param_1)

{
  if ((*(char *)(param_1 + 0x750) != '\0') && ((*(byte *)(param_1 + 0x738) & 1) != 0)) {
    operator_delete(*(void **)(param_1 + 0x748));
  }
  if ((*(char *)(param_1 + 0x728) != '\0') && ((*(byte *)(param_1 + 0x710) & 1) != 0)) {
    operator_delete(*(void **)(param_1 + 0x720));
  }
  if ((*(byte *)(param_1 + 0x6f8) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x708));
  }
  FUN_0078917c(param_1 + 0x18,PTR_PTR_0099dfe8 + 8);
  return;
}


// ===== 007a2b74  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007a2b78  FUN_007a2b78 =====

void FUN_007a2b78(long param_1)

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


// ===== 007a2bc8  FUN_007a2bc8 =====

void FUN_007a2bc8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00982448;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 007a2bd8  FUN_007a2bd8 =====

void FUN_007a2bd8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00982448;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 007a2c08  FUN_007a2c08 =====

void FUN_007a2c08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007a2c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 007a2c14  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007a2c18  FUN_007a2c18 =====

EventEmitter * FUN_007a2c18(EventEmitter *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long *plStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plStack_48 = (long *)param_2[1];
  local_50 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  local_60 = *param_3;
  local_58 = param_3[1];
  if (local_58 != 0) {
    FUN_00757d00(1,local_58 + 0x10);
  }
                    /* try { // try from 007a2c60 to 007a2c6f has its CatchHandler @ 007a2d34 */
  facebook::react::EventEmitter::EventEmitter(param_1,&local_50,&local_60);
  *(undefined ***)param_1 = &PTR_FUN_0097ff10;
                    /* try { // try from 007a2c7c to 007a2c83 has its CatchHandler @ 007a2d24 */
  puVar3 = (undefined8 *)operator_new(0x58);
  *puVar3 = &PTR_FUN_0097ff30;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[4] = 0;
  puVar3[3] = 0;
  *(undefined8 **)(param_1 + 0x40) = puVar3 + 3;
  *(undefined8 **)(param_1 + 0x48) = puVar3;
  puVar3[6] = 0;
  puVar3[5] = 0;
  puVar3[8] = 0;
  puVar3[7] = 0;
  *(undefined8 *)((long)puVar3 + 0x4c) = 0;
  *(undefined8 *)((long)puVar3 + 0x44) = 0;
  *(undefined ***)param_1 = &PTR_FUN_00982498;
  if (local_58 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = plStack_48;
  if ((plStack_48 != (long *)0x0) &&
     (lVar4 = FUN_00757990(0xffffffffffffffff,plStack_48 + 1), lVar4 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007a2d68  FUN_007a2d68 =====

void FUN_007a2d68(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[9];
  *param_1 = &PTR_FUN_0097ff10;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *param_1 = &PTR_FUN_0097ff80;
  if (param_1[6] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[4] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = (long *)param_1[2];
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


// ===== 007a2e18  FUN_007a2e18 =====

ShadowNodeFamily *
FUN_007a2e18(ShadowNodeFamily *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
            undefined8 param_5)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  long *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_58 = *param_3;
  local_50 = (long *)param_3[1];
  if (local_50 != (long *)0x0) {
    FUN_00757d00(1,local_50 + 1);
  }
  local_68 = *param_4;
  local_60 = param_4[1];
  if (local_60 != 0) {
    FUN_00757d00(1,local_60 + 0x10);
  }
                    /* try { // try from 007a2e7c to 007a2e93 has its CatchHandler @ 007a2efc */
  facebook::react::ShadowNodeFamily::ShadowNodeFamily(param_1,param_2,&local_58,&local_68,param_5);
  if (local_60 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = local_50;
  if ((local_50 != (long *)0x0) &&
     (lVar3 = FUN_00757990(0xffffffffffffffff,local_50 + 1), lVar3 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007a2f34  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_35DCDLocalImageThumbnailComponentNameEEEENS0_27DCDLocalImageThumbnailPropsENS0_34DCDLocalImageThumbnailEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE =====

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_35DCDLocalImageThumbnailComponentNameEEEENS0_27DCDLocalImageThumbnailPropsENS0_34DCDLocalImageThumbnailEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE
               (undefined8 *param_1)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_007a2f88(&local_30);
  *param_1 = local_30;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007a2f88  FUN_007a2f88 =====

void FUN_007a2f88(undefined8 *param_1,ComponentDescriptorParameters *param_2)

{
  long lVar1;
  ComponentDescriptor *this;
  void *local_90;
  void *pvStack_88;
  undefined8 local_80;
  void *pvStack_78;
  void *local_70;
  undefined8 uStack_68;
  void *local_60;
  void *pvStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (ComponentDescriptor *)operator_new(0x88);
  pvStack_78 = (void *)0x0;
  local_80 = 0;
  uStack_68 = 0;
  local_70 = (void *)0x0;
  pvStack_58 = (void *)0x0;
  local_60 = (void *)0x0;
  uStack_48 = 0;
  uStack_50 = 0;
  pvStack_88 = (void *)0x0;
  local_90 = (void *)0x0;
                    /* try { // try from 007a2fcc to 007a2fd7 has its CatchHandler @ 007a3044 */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_90);
  *(undefined ***)this = &PTR_FUN_009824d0;
  FUN_007a3074(this + 0x38);
  *param_1 = this;
  if (local_60 != (void *)0x0) {
    pvStack_58 = local_60;
    operator_delete(local_60);
  }
  if (pvStack_78 != (void *)0x0) {
    local_70 = pvStack_78;
    operator_delete(pvStack_78);
  }
  if (local_90 != (void *)0x0) {
    pvStack_88 = local_90;
    operator_delete(local_90);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007a3074  FUN_007a3074 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007a3074(undefined8 param_1)

{
  byte bVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  void *pvVar8;
  undefined4 local_1000 [2];
  undefined8 *local_ff8;
  undefined *local_ff0;
  undefined8 uStack_fe8;
  undefined8 local_fe0;
  undefined8 uStack_fd8;
  undefined4 local_fd0 [2];
  undefined8 local_fc8;
  undefined8 uStack_fc0;
  undefined8 local_fb8;
  undefined8 uStack_fb0;
  undefined4 local_fa8;
  undefined4 local_fa0;
  undefined1 local_f9c;
  undefined8 local_f9b;
  undefined8 local_f93;
  undefined8 uStack_f8b;
  undefined8 local_f83;
  undefined8 uStack_f7b;
  undefined8 local_f73;
  undefined8 uStack_f6b;
  undefined8 local_f63;
  undefined6 uStack_f5b;
  undefined2 uStack_f55;
  undefined6 uStack_f53;
  undefined8 uStack_f4d;
  undefined4 local_f45;
  undefined8 local_f41;
  undefined1 local_f39;
  undefined1 uStack_f38;
  undefined7 uStack_f37;
  undefined8 uStack_f30;
  undefined8 uStack_f28;
  undefined8 uStack_f20;
  undefined8 local_f18;
  undefined8 uStack_f10;
  undefined8 local_f08;
  undefined8 uStack_f00;
  undefined8 local_ef8;
  undefined8 uStack_ef0;
  undefined8 local_ee8;
  undefined8 uStack_ee0;
  undefined8 uStack_ed8;
  undefined8 local_ed0;
  undefined8 local_ec8;
  undefined8 uStack_ec0;
  undefined8 local_eb8;
  undefined4 uStack_eb0;
  undefined4 uStack_eac;
  undefined4 uStack_ea8;
  undefined4 uStack_ea4;
  undefined4 uStack_ea0;
  undefined4 uStack_e9c;
  undefined8 local_e98;
  undefined8 uStack_e90;
  undefined4 local_e88;
  undefined1 local_e84;
  undefined4 local_e80;
  undefined1 local_e7c;
  undefined4 local_e78;
  undefined1 local_e74;
  undefined4 local_e70;
  undefined1 local_e6c;
  undefined4 local_e68;
  undefined1 local_e64;
  undefined4 local_e60;
  undefined1 local_e5c;
  undefined4 local_e58;
  undefined1 local_e54;
  undefined4 local_e50;
  undefined1 local_e4c;
  undefined4 local_e48;
  undefined1 local_e44;
  undefined4 local_e40;
  undefined1 local_e3c;
  undefined4 local_e38;
  undefined1 local_e34;
  undefined4 local_e30;
  undefined1 local_e2c;
  undefined4 local_e28;
  undefined1 local_e24;
  undefined4 local_e20;
  undefined1 local_e1c;
  undefined4 local_e18;
  undefined1 local_e14;
  undefined4 local_e10;
  undefined1 local_e0c;
  undefined1 local_e08;
  undefined1 local_e04;
  undefined1 local_df8;
  undefined8 local_df0;
  undefined8 uStack_de8;
  undefined8 uStack_de0;
  undefined8 uStack_dd8;
  undefined8 local_dd0;
  undefined8 uStack_dc8;
  undefined8 uStack_dc0;
  undefined1 uStack_db8;
  undefined7 local_db7;
  undefined1 uStack_db0;
  undefined8 uStack_daf;
  undefined8 local_da4;
  undefined8 uStack_d9c;
  undefined8 uStack_d94;
  undefined8 uStack_d8c;
  undefined8 local_d84;
  undefined8 uStack_d7c;
  undefined8 uStack_d74;
  undefined8 uStack_d6c;
  undefined8 local_d64;
  undefined8 uStack_d5c;
  undefined8 uStack_d54;
  undefined5 uStack_d4c;
  undefined3 local_d47;
  undefined5 uStack_d44;
  undefined1 local_d3c;
  undefined1 local_d38;
  undefined1 local_d34;
  undefined1 local_d30;
  undefined1 local_d2c;
  undefined1 local_d28;
  undefined1 local_d10;
  undefined8 local_d08;
  undefined8 uStack_d00;
  undefined8 local_cf8;
  undefined4 local_cf0;
  undefined1 local_cec;
  undefined4 local_ceb;
  undefined1 local_ce7;
  undefined1 local_ce6;
  undefined8 local_ce0;
  undefined8 uStack_cd8;
  undefined8 uStack_cd0;
  undefined8 uStack_cc8;
  undefined8 local_cc0;
  undefined7 uStack_cb8;
  undefined4 uStack_cb1;
  undefined8 local_cac;
  undefined1 local_ca4;
  undefined1 local_c9c;
  undefined1 local_c98;
  undefined1 local_c90;
  undefined1 local_c8c;
  undefined1 local_c84;
  undefined1 local_c80;
  undefined1 local_c78;
  undefined1 local_c74;
  undefined1 local_c6c;
  undefined1 local_c68;
  undefined1 local_c60;
  undefined1 local_c5c;
  undefined1 local_c54;
  undefined1 local_c50;
  undefined1 local_c48;
  undefined1 local_c44;
  undefined1 local_c3c;
  undefined1 local_c38;
  undefined1 local_c30;
  undefined1 local_c2c;
  undefined1 local_c24;
  undefined1 local_c20;
  undefined1 local_c18;
  undefined1 local_c14;
  undefined1 local_c0c;
  undefined1 local_c08;
  undefined1 local_c04;
  undefined1 local_c00;
  undefined1 local_bfc;
  undefined1 local_bf8;
  undefined1 local_bf4;
  undefined1 local_bf0;
  undefined1 local_bec;
  undefined1 local_be8;
  undefined1 local_be4;
  undefined1 local_be0;
  undefined1 local_bdc;
  undefined1 local_bd8;
  undefined1 local_bd4;
  undefined1 local_bd0;
  undefined1 local_bcc;
  undefined1 local_bc8;
  undefined1 local_bc4;
  undefined1 local_bc0;
  undefined1 local_bbc;
  undefined1 local_bb8;
  undefined1 local_bb4;
  undefined1 local_bb0;
  undefined1 local_bac;
  undefined8 local_ba8;
  undefined8 uStack_ba0;
  undefined8 local_b98;
  undefined8 uStack_b90;
  undefined8 uStack_b88;
  undefined8 uStack_b80;
  undefined2 local_b78;
  undefined8 local_b74;
  undefined1 local_b6c;
  undefined8 local_b68;
  undefined8 local_b60;
  undefined8 uStack_b58;
  undefined1 local_b50;
  undefined8 local_b48;
  undefined8 uStack_b40;
  undefined8 uStack_b38;
  undefined8 uStack_b30;
  undefined8 local_b28;
  undefined8 uStack_b20;
  undefined8 uStack_b18;
  undefined8 uStack_b10;
  undefined8 local_b08;
  undefined8 uStack_b00;
  undefined8 uStack_af8;
  undefined8 uStack_af0;
  undefined8 local_ae8;
  undefined8 uStack_ae0;
  undefined8 uStack_ad8;
  undefined8 uStack_ad0;
  undefined8 local_ac8;
  undefined8 uStack_ac0;
  undefined8 uStack_ab8;
  undefined8 uStack_ab0;
  undefined8 local_aa8;
  undefined8 uStack_aa0;
  undefined8 local_a98;
  undefined8 uStack_a90;
  undefined8 local_a88;
  undefined8 uStack_a80;
  undefined8 local_a78;
  undefined8 uStack_a70;
  undefined8 local_a68;
  undefined8 uStack_a60;
  undefined8 local_a58;
  undefined6 uStack_a50;
  undefined2 uStack_a4a;
  undefined6 uStack_a48;
  undefined1 local_a40;
  undefined1 local_a3c;
  undefined1 local_a38;
  undefined8 local_a34;
  undefined8 uStack_a2c;
  undefined1 local_a24;
  undefined8 local_a20;
  undefined2 local_a18;
  undefined1 local_a16;
  undefined4 local_a14;
  undefined1 local_a10;
  undefined1 local_9b0;
  undefined1 local_9a8;
  undefined1 local_948;
  undefined4 local_940;
  undefined2 local_93c;
  undefined1 local_938;
  undefined1 local_934;
  undefined1 local_930;
  undefined1 local_92c;
  undefined1 local_928;
  undefined1 local_924;
  undefined1 local_920;
  undefined1 local_91c;
  undefined1 local_918;
  undefined1 local_914;
  byte local_910;
  void *local_900;
  char local_8f8;
  undefined8 local_8f0;
  undefined8 local_8e8;
  DCDLocalImageThumbnailProps aDStack_8e0 [1760];
  byte local_200;
  void *local_1f0;
  char local_1e8;
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
  void *local_140;
  undefined8 uStack_138;
  void *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined4 local_100 [4];
  undefined4 local_f0 [2];
  undefined8 local_e8;
  undefined4 local_c0;
  void *local_b8;
  void *pvStack_b0;
  undefined8 uStack_a8;
  void *local_a0;
  void *local_98;
  undefined8 uStack_90;
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100[0] = 0;
  local_f0[0] = 0;
  local_e8 = 0;
  local_c0 = 0;
  pvStack_b0 = (void *)0x0;
  local_b8 = (void *)0x0;
  local_a0 = (void *)0x0;
  uStack_a8 = 0;
  uStack_90 = 0;
  local_98 = (void *)0x0;
  local_120 = 0;
  uStack_128 = 0;
  local_130 = (void *)0x0;
  uStack_138 = 0;
  local_140 = (void *)0x0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_168 = 0;
  local_170 = 0;
  uStack_178 = 0;
  local_180 = 0;
  uStack_188 = 0;
  local_190 = 0;
  uStack_198 = 0;
  local_1a0 = 0;
  uStack_1a8 = 0;
  local_1b0 = 0;
  uStack_1b8 = 0;
  local_1c0 = 0;
  uStack_1c8 = 0;
  local_1d0 = 0;
                    /* try { // try from 007a30fc to 007a3107 has its CatchHandler @ 007a36b8 */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1d0);
  local_120 = CONCAT44(local_120._4_4_,0x3f800000);
  local_1000[0] = 0xffffffff;
  uStack_128 = 0;
  local_130 = (void *)0x0;
  uStack_138 = 0;
  local_140 = (void *)0x0;
  local_ff8 = &local_1d0;
  facebook::react::RawProps::facebook::react::RawProps::parse(&local_118,param_1);
  memset(local_fd0,0,0x6f0);
  local_88[0] = 5;
  local_70 = 0;
  local_ff0 = PTR_construction_vtable_0099e200 + 0x20;
  local_fd0[0] = 5;
  uStack_fd8 = 0;
  local_fe0 = 0;
  uStack_fe8 = 0;
  local_68 = 0;
  uStack_60 = 0x3f800000;
  uStack_78 = 0;
  local_80 = 0;
  uStack_fc0 = 0;
  local_fc8 = 0;
  uStack_fb0 = 0;
  local_fb8 = 0;
  local_fa8 = 0x3f800000;
  folly::dynamic::folly::dynamic::destroy(local_88);
  local_f9c = 0;
  local_f41 = 0;
  uStack_a60 = _UNK_00470a7c;
  local_a68 = _DAT_00470a74;
  local_f9b = _s__00375408;
  uStack_b58 = _UNK_00371598;
  local_b60 = _DAT_00371590;
  uStack_a70 = _UNK_00470a6c;
  local_a78 = _DAT_00470a64;
  local_e84 = 0;
  uStack_a80 = _UNK_00470a5c;
  local_a88 = _DAT_00470a54;
  uStack_a90 = _UNK_00470a4c;
  local_a98 = _DAT_00470a44;
  uStack_a48 = 0;
  local_e7c = 0;
  uStack_eb0 = 0;
  local_eb8 = 0;
  uStack_e9c = 0;
  uStack_ec0 = 0;
  local_ec8 = 0;
  uStack_a50 = 0;
  uStack_a4a = 0;
  local_a58 = 0;
  local_fa0 = 0x10410710;
  local_f45 = 0x40004;
  uStack_ea4 = 0;
  uStack_ea0 = 0;
  uStack_eac = 0;
  uStack_ea8 = 0;
  uStack_e90 = 0;
  local_e98 = 0;
  local_e88 = 0x7fc00000;
  local_e80 = 0x7fc00000;
  local_e78 = 0x7fc00000;
  local_e70 = 0x7fc00000;
  local_e68 = 0x7fc00000;
  local_e60 = 0x7fc00000;
  local_e58 = 0x7fc00000;
  local_e50 = 0x7fc00000;
  local_e48 = 0x7fc00000;
  local_e40 = 0x7fc00000;
  local_e38 = 0x7fc00000;
  local_e30 = 0x7fc00000;
  local_e28 = 0x7fc00000;
  local_e20 = 0x7fc00000;
  local_e18 = 0x7fc00000;
  local_e10 = 0x7fc00000;
  uStack_daf = 0;
  uStack_db0 = 0;
  uStack_d9c = 0;
  local_da4 = 0;
  uStack_d8c = 0;
  uStack_d94 = 0;
  uStack_d7c = 0;
  local_d84 = 0;
  uStack_d6c = 0;
  uStack_d74 = 0;
  uStack_d5c = 0;
  local_d64 = 0;
  uStack_d4c = 0;
  uStack_d54 = 0;
  local_d47 = 0;
  uStack_d44 = 0;
  local_cec = 1;
  local_ceb = 0;
  local_ce6 = 0x23;
  local_cac = 0x3f800000;
  uStack_b90 = 0;
  local_b98 = 0;
  uStack_b80 = 0;
  uStack_b88 = 0;
  uStack_ba0 = 0;
  local_ba8 = 0;
  local_b74 = 0;
  uStack_b40 = 0;
  local_b48 = 0;
  uStack_b30 = 0;
  uStack_b38 = 0;
  uStack_b20 = 0;
  local_b28 = 0;
  uStack_b10 = 0;
  uStack_b18 = 0;
  uStack_b00 = 0;
  local_b08 = 0;
  uStack_af0 = 0;
  uStack_af8 = 0;
  uStack_ae0 = 0;
  local_ae8 = 0;
  uStack_ad0 = 0;
  uStack_ad8 = 0;
  uStack_ac0 = 0;
  local_ac8 = 0;
  uStack_ab0 = 0;
  uStack_ab8 = 0;
  uStack_aa0 = 0;
  local_aa8 = 0;
  uStack_f37 = 0;
  uStack_f8b = 0;
  local_f93 = 0;
  uStack_f7b = 0;
  local_f83 = 0;
  uStack_f6b = 0;
  local_f73 = 0;
  uStack_f5b = 0;
  local_f63 = 0;
  uStack_f4d = 0;
  uStack_f55 = 0;
  uStack_f53 = 0;
  local_f39 = 0;
  uStack_f38 = 0;
  uStack_f28 = 0;
  uStack_f30 = 0;
  local_f18 = 0;
  uStack_f20 = 0;
  local_f08 = 0;
  uStack_f10 = 0;
  local_ef8 = 0;
  uStack_f00 = 0;
  local_ee8 = 0;
  uStack_ef0 = 0;
  uStack_ed8 = 0;
  uStack_ee0 = 0;
  local_ed0 = 0;
  local_e74 = 0;
  local_e6c = 0;
  local_e64 = 0;
  local_e5c = 0;
  local_e54 = 0;
  local_e4c = 0;
  local_e44 = 0;
  local_e3c = 0;
  local_e34 = 0;
  local_e2c = 0;
  local_e24 = 0;
  local_e1c = 0;
  local_e14 = 0;
  local_e0c = 0;
  local_e08 = 0;
  local_e04 = 0;
  local_df8 = 0;
  local_d3c = 0;
  local_d38 = 0;
  local_d34 = 0;
  local_d30 = 0;
  local_d2c = 0;
  local_d28 = 0;
  local_d10 = 0;
  uStack_de8 = 0;
  local_df0 = 0;
  uStack_dd8 = 0;
  uStack_de0 = 0;
  uStack_dc8 = 0;
  local_dd0 = 0;
  uStack_db8 = 0;
  local_db7 = 0;
  uStack_dc0 = 0;
  uStack_d00 = 0;
  local_d08 = 0;
  local_cf8 = 0;
  local_cf0 = 0;
  local_ce7 = 0;
  uStack_cd8 = 0;
  local_ce0 = 0;
  uStack_cc8 = 0;
  uStack_cd0 = 0;
  uStack_cb8 = 0;
  uStack_cb1 = 0;
  local_cc0 = 0;
  local_ca4 = 0;
  local_c9c = 0;
  local_c98 = 0;
  local_c90 = 0;
  local_c8c = 0;
  local_c84 = 0;
  local_c80 = 0;
  local_c78 = 0;
  local_c74 = 0;
  local_c6c = 0;
  local_c68 = 0;
  local_c60 = 0;
  local_c5c = 0;
  local_c54 = 0;
  local_c50 = 0;
  local_c48 = 0;
  local_c44 = 0;
  local_c3c = 0;
  local_c38 = 0;
  local_c30 = 0;
  local_c2c = 0;
  local_c24 = 0;
  local_c20 = 0;
  local_c18 = 0;
  local_c14 = 0;
  local_c0c = 0;
  local_c08 = 0;
  local_c04 = 0;
  local_c00 = 0;
  local_bfc = 0;
  local_bf8 = 0;
  local_bf4 = 0;
  local_bf0 = 0;
  local_bec = 0;
  local_be8 = 0;
  local_be4 = 0;
  local_be0 = 0;
  local_bdc = 0;
  local_bd8 = 0;
  local_bd4 = 0;
  local_bd0 = 0;
  local_bcc = 0;
  local_bc8 = 0;
  local_bc4 = 0;
  local_bc0 = 0;
  local_bbc = 0;
  local_bb8 = 0;
  local_bb4 = 0;
  local_bb0 = 0;
  local_bac = 0;
  local_b68 = 0;
  local_b78 = 0;
  local_b6c = 0;
  local_b50 = 0;
  local_a40 = 0;
  local_a3c = 0;
  local_a38 = 0;
  local_a20 = 0;
  uStack_a2c = 0;
  local_a34 = 0;
  local_a24 = 0;
  local_a18 = 0x101;
  local_a16 = 0;
  local_a14 = 0;
  local_a10 = 0;
  local_9b0 = 0;
  local_9a8 = 0;
  local_948 = 0;
  local_938 = 0;
  local_934 = 0;
  local_930 = 0;
  local_92c = 0;
  local_928 = 0;
  local_924 = 0;
  local_920 = 0;
  local_91c = 0;
  local_918 = 0;
  local_914 = 0;
  local_93c = 0;
  local_940 = 0;
  local_ff0 = PTR_vtable_0099dff8 + 0x20;
  local_910 = 0;
  local_8f8 = '\0';
  local_8f0 = 0;
  local_8e8 = 0;
                    /* try { // try from 007a34fc to 007a350f has its CatchHandler @ 007a36b8 */
  facebook::react::DCDLocalImageThumbnailProps::DCDLocalImageThumbnailProps
            (aDStack_8e0,(PropsParserContext *)local_1000,(DCDLocalImageThumbnailProps *)&local_ff0,
             (RawProps *)&local_118);
  if ((local_1e8 != '\0') && ((local_200 & 1) != 0)) {
    operator_delete(local_1f0);
  }
  puVar5 = PTR_PTR_0099e000;
  FUN_0078917c(aDStack_8e0,PTR_PTR_0099e000 + 8);
  if ((local_8f8 != '\0') && ((local_910 & 1) != 0)) {
    operator_delete(local_900);
  }
  FUN_0078917c(&local_ff0,puVar5 + 8);
  facebook::react::RawPropsParser::facebook::react::RawPropsParser::postPrepare(param_1);
  pvVar3 = local_140;
  puVar4 = (undefined8 *)local_130;
  while (puVar4 != (undefined8 *)0x0) {
    plVar7 = (long *)puVar4[6];
    pvVar8 = (void *)*puVar4;
    local_140 = pvVar3;
    if ((plVar7 == (long *)0x0) || (lVar6 = FUN_00757990(0xffffffffffffffff,plVar7 + 1), lVar6 != 0)
       ) {
      bVar1 = *(byte *)(puVar4 + 2);
    }
    else {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__ndk1::__shared_weak_count::__release_weak();
      bVar1 = *(byte *)(puVar4 + 2);
    }
    if ((bVar1 & 1) != 0) {
      operator_delete((void *)puVar4[4]);
    }
    operator_delete(puVar4);
    pvVar3 = local_140;
    puVar4 = (undefined8 *)pvVar8;
  }
  local_140 = (void *)0x0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)&uStack_178);
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)&uStack_1a8);
  std::__ndk1::mutex::~mutex((mutex *)&local_1d0);
  pvVar8 = local_a0;
  pvVar3 = local_98;
  if (local_a0 != (void *)0x0) {
    while (pvVar3 != pvVar8) {
      if (*(uint *)((long)pvVar3 + -8) != 0xffffffff) {
                    /* try { // try from 007a364c to 007a3657 has its CatchHandler @ 007a36bc */
        (*(code *)(&PTR_FUN_0097fbf8)[*(uint *)((long)pvVar3 + -8)])
                  (&local_ff0,(void *)((long)pvVar3 + -0x38));
      }
      *(undefined4 *)((long)pvVar3 + -8) = 0xffffffff;
      pvVar3 = (void *)((long)pvVar3 + -0x38);
    }
    local_98 = pvVar8;
    operator_delete(local_a0);
  }
  if (local_b8 != (void *)0x0) {
    pvStack_b0 = local_b8;
    operator_delete(local_b8);
  }
  folly::dynamic::folly::dynamic::destroy(local_f0);
  facebook::jsi::Value::~Value((Value *)local_100);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007a36c0  FUN_007a36c0 =====

void FUN_007a36c0(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 007a36e4  FUN_007a36e4 =====

undefined * FUN_007a36e4(void)

{
  return PTR_DCDLocalImageThumbnailComponentName_0099dff0;
}


// ===== 007a36f0  FUN_007a36f0 =====

undefined * FUN_007a36f0(void)

{
  return PTR_DCDLocalImageThumbnailComponentName_0099dff0;
}


// ===== 007a36fc  FUN_007a36fc =====

undefined8 FUN_007a36fc(void)

{
  return 0x61;
}


// ===== 007a3704  FUN_007a3704 =====

void FUN_007a3704(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 uStack_49;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_64 = (**(code **)(*param_2 + 0x20))();
  FUN_007a3ef4(&local_60,&uStack_49,param_3,param_4,&local_64);
                    /* try { // try from 007a376c to 007a3773 has its CatchHandler @ 007a37a4 */
  (**(code **)(*param_2 + 0x60))(param_2,local_60);
  param_1[1] = uStack_58;
  *param_1 = local_60;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007a37cc  FUN_007a37cc =====

void FUN_007a37cc(undefined8 *param_1,long *param_2,shared_ptr *param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *local_70;
  long *local_68;
  long *local_60;
  long *plStack_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_007a41a8(&local_60,&local_70);
                    /* try { // try from 007a3818 to 007a3823 has its CatchHandler @ 007a38d0 */
  (**(code **)(*local_60 + 0x10))(local_60,param_3,param_4);
  local_70 = local_60;
  local_68 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    FUN_00757d00(1,plStack_58 + 1);
  }
                    /* try { // try from 007a383c to 007a384b has its CatchHandler @ 007a38c0 */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_70);
  plVar2 = local_68;
  if ((local_68 != (long *)0x0) &&
     (lVar3 = FUN_00757990(0xffffffffffffffff,local_68 + 1), lVar3 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 007a3888 to 007a388f has its CatchHandler @ 007a38d0 */
  (**(code **)(*param_2 + 0x60))(param_2,local_60);
  param_1[1] = plStack_58;
  *param_1 = local_60;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007a38f8  FUN_007a38f8 =====

void FUN_007a38f8(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x007a3908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 007a390c  FUN_007a390c =====

void FUN_007a390c(undefined8 *param_1,long param_2,undefined8 param_3,long *param_4,
                 RawProps *param_5)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  char *pcVar6;
  int iVar7;
  ulong uVar8;
  char *pcVar9;
  long lVar10;
  long *local_100;
  long *local_f8;
  long *local_f0;
  long *plStack_e8;
  undefined1 uStack_d1;
  dynamic adStack_d0 [48];
  uint local_a0;
  int local_98 [6];
  long *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((*param_4 == 0) && (uVar8 = facebook::react::RawProps::isEmpty(), (uVar8 & 1) != 0)) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_35DCDLocalImageThumbnailComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_27DCDLocalImageThumbnailPropsENS0_34DCDLocalImageThumbnailEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd80
         & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_35DCDLocalImageThumbnailComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_27DCDLocalImageThumbnailPropsENS0_34DCDLocalImageThumbnailEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd80
                                   ), iVar7 != 0)) {
                    /* try { // try from 007a3bd8 to 007a3be7 has its CatchHandler @ 007a3c14 */
      FUN_007a4620(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_35DCDLocalImageThumbnailComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_27DCDLocalImageThumbnailPropsENS0_34DCDLocalImageThumbnailEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd78
                   ,adStack_d0);
      __cxa_atexit(FUN_007a45d0,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_35DCDLocalImageThumbnailComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_27DCDLocalImageThumbnailPropsENS0_34DCDLocalImageThumbnailEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd78
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_35DCDLocalImageThumbnailComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_27DCDLocalImageThumbnailPropsENS0_34DCDLocalImageThumbnailEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd80
                         );
    }
    lVar10 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_35DCDLocalImageThumbnailComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_27DCDLocalImageThumbnailPropsENS0_34DCDLocalImageThumbnailEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd78
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_35DCDLocalImageThumbnailComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_27DCDLocalImageThumbnailPropsENS0_34DCDLocalImageThumbnailEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd78
    ;
    param_1[1] = lVar10;
    if (lVar10 != 0) {
      FUN_00757d00(1,lVar10 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    FUN_007a42ac(&local_f0,param_3,param_5,param_4);
                    /* try { // try from 007a39b4 to 007a39c7 has its CatchHandler @ 007a3c48 */
    uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if (((uVar8 & 1) == 0) ||
       ((uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar8 & 1) == 0 ||
        (uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enablePropsUpdateReconciliationAndroid(), (uVar8 & 1) == 0)))) {
LAB_007a39f0:
      local_100 = local_f0;
      local_f8 = plStack_e8;
      if (plStack_e8 != (long *)0x0) {
        FUN_00757d00(1,plStack_e8 + 1);
      }
                    /* try { // try from 007a3a08 to 007a3a17 has its CatchHandler @ 007a3c38 */
      FUN_007a43f8(&local_100,param_5,param_4);
      plVar4 = local_f8;
      if ((local_f8 != (long *)0x0) &&
         (lVar10 = FUN_00757990(0xffffffffffffffff,local_f8 + 1), lVar10 == 0)) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 007a39d8 to 007a39df has its CatchHandler @ 007a3c28 */
      pcVar9 = (char *)(**(code **)(*local_f0 + 0x10))();
      iVar7 = strcmp(PTR_DCDLocalImageThumbnailComponentName_0099dff0,pcVar9);
      if (iVar7 != 0) goto LAB_007a39f0;
      bVar3 = false;
    }
                    /* try { // try from 007a3a4c to 007a3a4f has its CatchHandler @ 007a3c48 */
    uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar8 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 007a3a5c to 007a3a77 has its CatchHandler @ 007a3c34 */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(local_f0 + 4));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_f0;
      plVar5 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 007a3bb8 to 007a3bc7 has its CatchHandler @ 007a3c2c */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_007a3c94;
      }
      for (; local_f0 = plVar4, plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (*(int *)(plVar5 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 007a3b98 to 007a3ba7 has its CatchHandler @ 007a3c54 */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_007a3c94;
        }
        uVar1 = 0x811c9dc5;
        uVar8 = (ulong)(*(byte *)(plVar5 + 3) >> 1);
        pcVar6 = (char *)((long)plVar5 + 0x19);
        pcVar9 = (char *)((long)plVar5 + 0x19);
        if ((*(byte *)(plVar5 + 3) & 1) != 0) {
          uVar8 = plVar5[4];
          pcVar6 = (char *)plVar5[5];
          pcVar9 = (char *)plVar5[5];
        }
        for (; uVar8 != 0; uVar8 = uVar8 - 1) {
          uVar1 = (uVar1 ^ (int)*pcVar6) * 0x1000193;
          pcVar6 = pcVar6 + 1;
        }
                    /* try { // try from 007a3af8 to 007a3b03 has its CatchHandler @ 007a3c5c */
        folly::dynamic::dynamic(adStack_d0,(dynamic *)(plVar5 + 8));
        local_a0 = 0;
                    /* try { // try from 007a3b08 to 007a3b1f has its CatchHandler @ 007a3c60 */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (plVar4,param_3,uVar1,pcVar9,adStack_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 007a3b30 to 007a3b3b has its CatchHandler @ 007a3c50 */
          (*(code *)(&PTR_FUN_0097fbf8)[local_a0])(&uStack_d1,adStack_d0);
        }
        plVar4 = local_f0;
      }
      folly::dynamic::folly::dynamic::destroy(local_98);
    }
    param_1[1] = plStack_e8;
    *param_1 = local_f0;
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_007a3c94:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007a3c98  FUN_007a3c98 =====

void FUN_007a3c98(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 007a3ca0  FUN_007a3ca0 =====

void FUN_007a3ca0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 007a3ca8  FUN_007a3ca8 =====

void FUN_007a3ca8(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined1 auStack_80 [8];
  long *local_78;
  long *local_70;
  long *local_68;
  undefined1 uStack_59;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  FUN_0078a610(auStack_80,&uStack_59,param_3 + 8,param_3 + 4);
                    /* try { // try from 007a3cf0 to 007a3cf7 has its CatchHandler @ 007a3e78 */
  plVar4 = (long *)operator_new(0x68);
  plVar1 = plVar4 + 3;
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_00982718;
                    /* try { // try from 007a3d10 to 007a3d1f has its CatchHandler @ 007a3e60 */
  FUN_007a48d0(plVar1,auStack_80,param_2 + 8);
  local_70 = plVar1;
  local_68 = plVar4;
  if ((local_78 != (long *)0x0) &&
     (lVar5 = FUN_00757990(0xffffffffffffffff,local_78 + 1), lVar5 == 0)) {
    (**(code **)(*local_78 + 0x10))(local_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 007a3d54 to 007a3d5b has its CatchHandler @ 007a3e50 */
  puVar6 = (undefined8 *)operator_new(0x1a0);
  puVar2 = puVar6 + 4;
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_0097fff0;
                    /* try { // try from 007a3d74 to 007a3d8b has its CatchHandler @ 007a3e38 */
  FUN_007a4ad0(puVar2,param_3,&local_70,param_2 + 8,param_2);
  plVar1 = local_70;
  *param_1 = (long)puVar2;
  param_1[1] = (long)puVar6;
  local_90 = puVar2;
  local_88 = puVar6;
  FUN_00757d00(1,puVar6 + 2);
                    /* try { // try from 007a3da4 to 007a3daf has its CatchHandler @ 007a3e18 */
  facebook::react::EventEmitter::facebook::react::EventEmitter::setShadowNodeFamily
            (plVar1,&local_90);
  if (local_88 != (undefined8 *)0x0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar1 = local_68;
  if ((local_68 != (long *)0x0) &&
     (lVar5 = FUN_00757990(0xffffffffffffffff,local_68 + 1), lVar5 == 0)) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007a3ea0  FUN_007a3ea0 =====

void FUN_007a3ea0(void)

{
  return;
}


// ===== 007a3ea4  FUN_007a3ea4 =====

void FUN_007a3ea4(long param_1)

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


// ===== 007a3ef4  FUN_007a3ef4 =====

void FUN_007a3ef4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 *param_5)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined4 uVar8;
  
  puVar6 = (undefined8 *)operator_new(0x400);
  uVar8 = *param_5;
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_00982560;
                    /* try { // try from 007a3f3c to 007a3f4b has its CatchHandler @ 007a3fe4 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
            ((YogaLayoutableShadowNode *)(puVar6 + 3),param_3,param_4,uVar8);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_009825b0;
  uVar2 = *(uint *)((long)puVar6 + 0x6c);
  uVar1 = uVar2 & 3 | (uint)((*(byte *)(lVar7 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)puVar6 + 0x6c) = uVar2 & 0xfffffff8 | uVar1;
  if ((*(uint *)(lVar7 + 0x50) & 0x30000000) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    if (*(char *)(lVar7 + 0x5b4) != '\0') {
      uVar8 = *(undefined4 *)(lVar7 + 0x5b0);
    }
  }
  *(undefined4 *)(puVar6 + 10) = uVar8;
  cVar3 = *(char *)(lVar7 + 0x6b0);
  cVar4 = *(char *)(lVar7 + 0x6b1);
  cVar5 = *(char *)(lVar7 + 0x1e8);
  *param_1 = (YogaLayoutableShadowNode *)(puVar6 + 3);
  param_1[1] = puVar6;
  *(uint *)((long)puVar6 + 0x6c) =
       uVar2 & 0xfffff000 |
       uVar2 & 0x7f8 | uVar1 | (uint)((cVar3 != '\0' || cVar4 != '\0') || cVar5 != '\0') << 0xb;
  return;
}


// ===== 007a4000  FUN_007a4000 =====

void FUN_007a4000(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00982560;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 007a4010  FUN_007a4010 =====

void FUN_007a4010(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00982560;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 007a4040  FUN_007a4040 =====

void FUN_007a4040(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007a4048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 007a404c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007a4050  FUN_007a4050 =====

void FUN_007a4050(long *param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = (void *)param_1[0x79];
  *param_1 = (long)(PTR_vtable_0099de98 + 0x10);
  if (pvVar4 != (void *)0x0) {
    pvVar5 = (void *)param_1[0x7a];
    pvVar2 = pvVar4;
    if (pvVar5 != pvVar4) {
      do {
        plVar3 = *(long **)((long)pvVar5 + -8);
        if ((plVar3 != (long *)0x0) &&
           (lVar1 = FUN_00757990(0xffffffffffffffff,plVar3 + 1), lVar1 == 0)) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
        pvVar5 = (void *)((long)pvVar5 + -0x10);
      } while (pvVar5 != pvVar4);
      pvVar2 = (void *)param_1[0x79];
    }
    param_1[0x7a] = (long)pvVar4;
    operator_delete(pvVar2);
  }
  pvVar4 = (void *)param_1[0x73];
  if (pvVar4 != (void *)0x0) {
    param_1[0x74] = (long)pvVar4;
    operator_delete(pvVar4);
  }
  FUN_007890e8(param_1 + 0x23);
  FUN_00789784(param_1);
  operator_delete(param_1);
  return;
}


// ===== 007a4110  FUN_007a4110 =====

void FUN_007a4110(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  facebook::react::LayoutableShadowNode::getLayoutMetrics();
  facebook::react::BaseViewProps::resolveTransform(*(LayoutMetrics **)(param_1 + 8));
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007a4178  FUN_007a4178 =====

bool FUN_007a4178(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 007a4190  FUN_007a4190 =====

bool FUN_007a4190(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 007a41a8  FUN_007a41a8 =====

void FUN_007a41a8(undefined8 *param_1,undefined8 param_2,ShadowNode *param_3,
                 ShadowNodeFragment *param_4)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined4 uVar8;
  
  puVar6 = (undefined8 *)operator_new(0x400);
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_00982560;
                    /* try { // try from 007a41e8 to 007a41f7 has its CatchHandler @ 007a4290 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
            ((YogaLayoutableShadowNode *)(puVar6 + 3),param_3,param_4);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_009825b0;
  uVar2 = *(uint *)((long)puVar6 + 0x6c);
  uVar1 = uVar2 & 3 | (uint)((*(byte *)(lVar7 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)puVar6 + 0x6c) = uVar2 & 0xfffffff8 | uVar1;
  if ((*(uint *)(lVar7 + 0x50) & 0x30000000) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    if (*(char *)(lVar7 + 0x5b4) != '\0') {
      uVar8 = *(undefined4 *)(lVar7 + 0x5b0);
    }
  }
  *(undefined4 *)(puVar6 + 10) = uVar8;
  cVar3 = *(char *)(lVar7 + 0x6b0);
  cVar4 = *(char *)(lVar7 + 0x6b1);
  cVar5 = *(char *)(lVar7 + 0x1e8);
  *param_1 = (YogaLayoutableShadowNode *)(puVar6 + 3);
  param_1[1] = puVar6;
  *(uint *)((long)puVar6 + 0x6c) =
       uVar2 & 0xfffff000 |
       uVar2 & 0x7f8 | uVar1 | (uint)((cVar3 != '\0' || cVar4 != '\0') || cVar5 != '\0') << 0xb;
  return;
}


// ===== 007a42ac  FUN_007a42ac =====

void FUN_007a42ac(undefined8 *param_1,PropsParserContext *param_2,RawProps *param_3,long *param_4)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  DCDLocalImageThumbnailProps *pDVar4;
  undefined1 uStack_59;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pDVar4 = (DCDLocalImageThumbnailProps *)*param_4;
  if (pDVar4 == (DCDLocalImageThumbnailProps *)0x0) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_35DCDLocalImageThumbnailComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_27DCDLocalImageThumbnailPropsENS0_34DCDLocalImageThumbnailEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd80
         & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_35DCDLocalImageThumbnailComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_27DCDLocalImageThumbnailPropsENS0_34DCDLocalImageThumbnailEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd80
                                   ), iVar2 != 0)) {
                    /* try { // try from 007a4378 to 007a4387 has its CatchHandler @ 007a43b4 */
      FUN_007a4620(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_35DCDLocalImageThumbnailComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_27DCDLocalImageThumbnailPropsENS0_34DCDLocalImageThumbnailEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd78
                   ,&uStack_59);
      __cxa_atexit(FUN_007a45d0,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_35DCDLocalImageThumbnailComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_27DCDLocalImageThumbnailPropsENS0_34DCDLocalImageThumbnailEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd78
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_35DCDLocalImageThumbnailComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_27DCDLocalImageThumbnailPropsENS0_34DCDLocalImageThumbnailEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd80
                         );
    }
    pDVar4 = *(DCDLocalImageThumbnailProps **)
              PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_35DCDLocalImageThumbnailComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_27DCDLocalImageThumbnailPropsENS0_34DCDLocalImageThumbnailEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd78
    ;
  }
  puVar3 = (undefined8 *)operator_new(0x728);
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_009826c8;
                    /* try { // try from 007a4324 to 007a4337 has its CatchHandler @ 007a43c8 */
  facebook::react::DCDLocalImageThumbnailProps::DCDLocalImageThumbnailProps
            ((DCDLocalImageThumbnailProps *)(puVar3 + 3),param_2,pDVar4,param_3);
  *param_1 = (DCDLocalImageThumbnailProps *)(puVar3 + 3);
  param_1[1] = puVar3;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007a43f8  FUN_007a43f8 =====

void FUN_007a43f8(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  plVar3 = local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar5 = *param_1;
  if (*param_3 == 0) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_35DCDLocalImageThumbnailComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_27DCDLocalImageThumbnailPropsENS0_34DCDLocalImageThumbnailEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd80
         & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_35DCDLocalImageThumbnailComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_27DCDLocalImageThumbnailPropsENS0_34DCDLocalImageThumbnailEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd80
                                   ), iVar2 != 0)) {
                    /* try { // try from 007a44dc to 007a44eb has its CatchHandler @ 007a4518 */
      FUN_007a4620(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_35DCDLocalImageThumbnailComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_27DCDLocalImageThumbnailPropsENS0_34DCDLocalImageThumbnailEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd78
                   ,local_70);
      __cxa_atexit(FUN_007a45d0,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_35DCDLocalImageThumbnailComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_27DCDLocalImageThumbnailPropsENS0_34DCDLocalImageThumbnailEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd78
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_35DCDLocalImageThumbnailComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_27DCDLocalImageThumbnailPropsENS0_34DCDLocalImageThumbnailEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd80
                         );
    }
    local_50 = (long *)0x0;
                    /* try { // try from 007a4468 to 007a447b has its CatchHandler @ 007a452c */
    facebook::react::Props::facebook::react::Props::initializeDynamicProps
              (uVar5,*(undefined8 *)
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_35DCDLocalImageThumbnailComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_27DCDLocalImageThumbnailPropsENS0_34DCDLocalImageThumbnailEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd78
               ,param_2,local_70);
  }
  else {
    local_50 = (long *)0x0;
                    /* try { // try from 007a442c to 007a4443 has its CatchHandler @ 007a4530 */
    facebook::react::Props::facebook::react::Props::initializeDynamicProps
              (uVar5,*param_3,param_2,local_70);
  }
  if (local_50 == local_70) {
    lVar4 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007a44a8;
    lVar4 = 5;
    plVar3 = local_50;
  }
  (**(code **)(*plVar3 + lVar4 * 8))();
LAB_007a44a8:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007a4580  FUN_007a4580 =====

void FUN_007a4580(long param_1)

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


// ===== 007a45d0  FUN_007a45d0 =====

void FUN_007a45d0(long param_1)

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


// ===== 007a4620  FUN_007a4620 =====

void FUN_007a4620(undefined8 *param_1)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x728);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_00982678;
  memset(__s,0,0x710);
                    /* try { // try from 007a4664 to 007a4677 has its CatchHandler @ 007a46f4 */
  FUN_00788b10(__s,PTR_PTR_0099e000 + 0x10);
  *(undefined4 *)((long)puVar2 + 0x5f4) = 0;
  *(undefined1 *)(puVar2 + 0xbf) = 0;
  *(undefined1 *)(puVar2 + 0xcb) = 0;
  *(undefined1 *)(puVar2 + 0xcc) = 0;
  *(undefined1 *)(puVar2 + 0xd8) = 0;
  *(undefined1 *)(puVar2 + 0xda) = 0;
  *(undefined1 *)((long)puVar2 + 0x6d4) = 0;
  *(undefined1 *)(puVar2 + 0xdb) = 0;
  *(undefined1 *)((long)puVar2 + 0x6dc) = 0;
  *(undefined1 *)(puVar2 + 0xdc) = 0;
  *(undefined1 *)((long)puVar2 + 0x6e4) = 0;
  *(undefined1 *)(puVar2 + 0xdd) = 0;
  *(undefined1 *)((long)puVar2 + 0x6ec) = 0;
  *(undefined1 *)(puVar2 + 0xde) = 0;
  *(undefined1 *)((long)puVar2 + 0x6f4) = 0;
  *(undefined4 *)(puVar2 + 0xd9) = 0;
  puVar1 = PTR_vtable_0099dff8;
  *(undefined2 *)((long)puVar2 + 0x6cc) = 0;
  *(undefined1 *)(puVar2 + 0xdf) = 0;
  *(undefined1 *)(puVar2 + 0xe2) = 0;
  puVar2[3] = puVar1 + 0x20;
  puVar2[0xe4] = 0;
  puVar2[0xe3] = 0;
  *param_1 = __s;
  param_1[1] = puVar2;
  return;
}


// ===== 007a4710  FUN_007a4710 =====

void FUN_007a4710(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00982678;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 007a4720  FUN_007a4720 =====

void FUN_007a4720(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00982678;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 007a4750  FUN_007a4750 =====

void FUN_007a4750(long param_1)

{
  if ((*(char *)(param_1 + 0x710) != '\0') && ((*(byte *)(param_1 + 0x6f8) & 1) != 0)) {
    operator_delete(*(void **)(param_1 + 0x708));
  }
  FUN_0078917c(param_1 + 0x18,PTR_PTR_0099e000 + 8);
  return;
}


// ===== 007a479c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007a47a0  FUN_007a47a0 =====

void FUN_007a47a0(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009826c8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 007a47b0  FUN_007a47b0 =====

void FUN_007a47b0(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009826c8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 007a47e0  FUN_007a47e0 =====

void FUN_007a47e0(long param_1)

{
  if ((*(char *)(param_1 + 0x710) != '\0') && ((*(byte *)(param_1 + 0x6f8) & 1) != 0)) {
    operator_delete(*(void **)(param_1 + 0x708));
  }
  FUN_0078917c(param_1 + 0x18,PTR_PTR_0099e000 + 8);
  return;
}


// ===== 007a482c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007a4830  FUN_007a4830 =====

void FUN_007a4830(long param_1)

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


// ===== 007a4880  FUN_007a4880 =====

void FUN_007a4880(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00982718;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 007a4890  FUN_007a4890 =====

void FUN_007a4890(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00982718;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 007a48c0  FUN_007a48c0 =====

void FUN_007a48c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007a48c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 007a48cc  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007a48d0  FUN_007a48d0 =====

EventEmitter * FUN_007a48d0(EventEmitter *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long *plStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plStack_48 = (long *)param_2[1];
  local_50 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  local_60 = *param_3;
  local_58 = param_3[1];
  if (local_58 != 0) {
    FUN_00757d00(1,local_58 + 0x10);
  }
                    /* try { // try from 007a4918 to 007a4927 has its CatchHandler @ 007a49ec */
  facebook::react::EventEmitter::EventEmitter(param_1,&local_50,&local_60);
  *(undefined ***)param_1 = &PTR_FUN_0097ff10;
                    /* try { // try from 007a4934 to 007a493b has its CatchHandler @ 007a49dc */
  puVar3 = (undefined8 *)operator_new(0x58);
  *puVar3 = &PTR_FUN_0097ff30;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[4] = 0;
  puVar3[3] = 0;
  *(undefined8 **)(param_1 + 0x40) = puVar3 + 3;
  *(undefined8 **)(param_1 + 0x48) = puVar3;
  puVar3[6] = 0;
  puVar3[5] = 0;
  puVar3[8] = 0;
  puVar3[7] = 0;
  *(undefined8 *)((long)puVar3 + 0x4c) = 0;
  *(undefined8 *)((long)puVar3 + 0x44) = 0;
  *(undefined ***)param_1 = &PTR_FUN_00982768;
  if (local_58 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = plStack_48;
  if ((plStack_48 != (long *)0x0) &&
     (lVar4 = FUN_00757990(0xffffffffffffffff,plStack_48 + 1), lVar4 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


