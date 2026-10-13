// ===== 007a4a20  FUN_007a4a20 =====

void FUN_007a4a20(undefined8 *param_1)

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


// ===== 007a4ad0  FUN_007a4ad0 =====

ShadowNodeFamily *
FUN_007a4ad0(ShadowNodeFamily *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
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
                    /* try { // try from 007a4b34 to 007a4b4b has its CatchHandler @ 007a4bb4 */
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


// ===== 007a4bec  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_29NativeLottieNodeComponentNameEEEENS0_21NativeLottieNodePropsENS0_28NativeLottieNodeEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE =====

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_29NativeLottieNodeComponentNameEEEENS0_21NativeLottieNodePropsENS0_28NativeLottieNodeEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE
               (undefined8 *param_1)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_007a4c40(&local_30);
  *param_1 = local_30;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007a4c40  FUN_007a4c40 =====

void FUN_007a4c40(undefined8 *param_1,ComponentDescriptorParameters *param_2)

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
                    /* try { // try from 007a4c84 to 007a4c8f has its CatchHandler @ 007a4cfc */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_90);
  *(undefined ***)this = &PTR_FUN_009827a0;
  FUN_007a4d2c(this + 0x38);
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


// ===== 007a4d2c  FUN_007a4d2c =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007a4d2c(undefined8 param_1)

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
                    /* try { // try from 007a4db0 to 007a4dbb has its CatchHandler @ 007a53b0 */
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
  local_fa0 = PTR_construction_vtable_0099e208 + 0x20;
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
  puVar6 = PTR_PTR_0099e018;
  puVar5 = PTR_vtable_0099e010;
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
  local_fa0 = PTR_vtable_0099e010 + 0x20;
  local_70 = (long *)0x0;
                    /* try { // try from 007a51a4 to 007a51cb has its CatchHandler @ 007a5374 */
  facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)local_8c0,(PropsParserContext *)(PTR_PTR_0099e018 + 8),
             (HostPlatformViewProps *)local_fb0,(RawProps *)&local_fa0,(function *)&local_120);
  if (local_70 == &local_90) {
    lVar7 = 4;
    plVar8 = &local_90;
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_007a51f8;
    lVar7 = 5;
    plVar8 = local_70;
  }
  (**(code **)(*plVar8 + lVar7 * 8))();
LAB_007a51f8:
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
                    /* try { // try from 007a5304 to 007a530f has its CatchHandler @ 007a53bc */
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


// ===== 007a53c0  FUN_007a53c0 =====

void FUN_007a53c0(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 007a53e4  FUN_007a53e4 =====

undefined * FUN_007a53e4(void)

{
  return PTR_NativeLottieNodeComponentName_0099e008;
}


// ===== 007a53f0  FUN_007a53f0 =====

undefined * FUN_007a53f0(void)

{
  return PTR_NativeLottieNodeComponentName_0099e008;
}


// ===== 007a53fc  FUN_007a53fc =====

undefined8 FUN_007a53fc(void)

{
  return 0x61;
}


// ===== 007a5404  FUN_007a5404 =====

void FUN_007a5404(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_007a5bf4(&local_60,&uStack_49,param_3,param_4,&local_64);
                    /* try { // try from 007a546c to 007a5473 has its CatchHandler @ 007a54a4 */
  (**(code **)(*param_2 + 0x60))(param_2,local_60);
  param_1[1] = uStack_58;
  *param_1 = local_60;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007a54cc  FUN_007a54cc =====

void FUN_007a54cc(undefined8 *param_1,long *param_2,shared_ptr *param_3,undefined8 param_4)

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
  FUN_007a5ea8(&local_60,&local_70);
                    /* try { // try from 007a5518 to 007a5523 has its CatchHandler @ 007a55d0 */
  (**(code **)(*local_60 + 0x10))(local_60,param_3,param_4);
  local_70 = local_60;
  local_68 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    FUN_00757d00(1,plStack_58 + 1);
  }
                    /* try { // try from 007a553c to 007a554b has its CatchHandler @ 007a55c0 */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_70);
  plVar2 = local_68;
  if ((local_68 != (long *)0x0) &&
     (lVar3 = FUN_00757990(0xffffffffffffffff,local_68 + 1), lVar3 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 007a5588 to 007a558f has its CatchHandler @ 007a55d0 */
  (**(code **)(*param_2 + 0x60))(param_2,local_60);
  param_1[1] = plStack_58;
  *param_1 = local_60;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007a55f8  FUN_007a55f8 =====

void FUN_007a55f8(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x007a5608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 007a560c  FUN_007a560c =====

void FUN_007a560c(undefined8 *param_1,long param_2,undefined8 param_3,long *param_4,
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
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29NativeLottieNodeComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21NativeLottieNodePropsENS0_28NativeLottieNodeEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd90
         & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29NativeLottieNodeComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21NativeLottieNodePropsENS0_28NativeLottieNodeEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd90
                                   ), iVar7 != 0)) {
                    /* try { // try from 007a58d8 to 007a58e7 has its CatchHandler @ 007a5914 */
      FUN_007a63a4(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29NativeLottieNodeComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21NativeLottieNodePropsENS0_28NativeLottieNodeEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd88
                   ,adStack_d0);
      __cxa_atexit(FUN_007a6354,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29NativeLottieNodeComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21NativeLottieNodePropsENS0_28NativeLottieNodeEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd88
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29NativeLottieNodeComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21NativeLottieNodePropsENS0_28NativeLottieNodeEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd90
                         );
    }
    lVar10 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29NativeLottieNodeComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21NativeLottieNodePropsENS0_28NativeLottieNodeEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd88
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29NativeLottieNodeComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21NativeLottieNodePropsENS0_28NativeLottieNodeEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd88
    ;
    param_1[1] = lVar10;
    if (lVar10 != 0) {
      FUN_00757d00(1,lVar10 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    FUN_007a5fac(&local_f0,param_3,param_5,param_4);
                    /* try { // try from 007a56b4 to 007a56c7 has its CatchHandler @ 007a5948 */
    uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if (((uVar8 & 1) == 0) ||
       ((uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar8 & 1) == 0 ||
        (uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enablePropsUpdateReconciliationAndroid(), (uVar8 & 1) == 0)))) {
LAB_007a56f0:
      local_100 = local_f0;
      local_f8 = plStack_e8;
      if (plStack_e8 != (long *)0x0) {
        FUN_00757d00(1,plStack_e8 + 1);
      }
                    /* try { // try from 007a5708 to 007a5717 has its CatchHandler @ 007a5938 */
      FUN_007a617c(&local_100,param_5,param_4);
      plVar4 = local_f8;
      if ((local_f8 != (long *)0x0) &&
         (lVar10 = FUN_00757990(0xffffffffffffffff,local_f8 + 1), lVar10 == 0)) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 007a56d8 to 007a56df has its CatchHandler @ 007a5928 */
      pcVar9 = (char *)(**(code **)(*local_f0 + 0x10))();
      iVar7 = strcmp(PTR_NativeLottieNodeComponentName_0099e008,pcVar9);
      if (iVar7 != 0) goto LAB_007a56f0;
      bVar3 = false;
    }
                    /* try { // try from 007a574c to 007a574f has its CatchHandler @ 007a5948 */
    uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar8 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 007a575c to 007a5777 has its CatchHandler @ 007a5934 */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(local_f0 + 4));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_f0;
      plVar5 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 007a58b8 to 007a58c7 has its CatchHandler @ 007a592c */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_007a5994;
      }
      for (; local_f0 = plVar4, plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (*(int *)(plVar5 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 007a5898 to 007a58a7 has its CatchHandler @ 007a5954 */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_007a5994;
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
                    /* try { // try from 007a57f8 to 007a5803 has its CatchHandler @ 007a595c */
        folly::dynamic::dynamic(adStack_d0,(dynamic *)(plVar5 + 8));
        local_a0 = 0;
                    /* try { // try from 007a5808 to 007a581f has its CatchHandler @ 007a5960 */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (plVar4,param_3,uVar1,pcVar9,adStack_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 007a5830 to 007a583b has its CatchHandler @ 007a5950 */
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
LAB_007a5994:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007a5998  FUN_007a5998 =====

void FUN_007a5998(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 007a59a0  FUN_007a59a0 =====

void FUN_007a59a0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 007a59a8  FUN_007a59a8 =====

void FUN_007a59a8(long *param_1,long param_2,long param_3)

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
                    /* try { // try from 007a59f0 to 007a59f7 has its CatchHandler @ 007a5b78 */
  plVar4 = (long *)operator_new(0x68);
  plVar1 = plVar4 + 3;
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_009829e8;
                    /* try { // try from 007a5a10 to 007a5a1f has its CatchHandler @ 007a5b60 */
  FUN_007a65d0(plVar1,auStack_80,param_2 + 8);
  local_70 = plVar1;
  local_68 = plVar4;
  if ((local_78 != (long *)0x0) &&
     (lVar5 = FUN_00757990(0xffffffffffffffff,local_78 + 1), lVar5 == 0)) {
    (**(code **)(*local_78 + 0x10))(local_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 007a5a54 to 007a5a5b has its CatchHandler @ 007a5b50 */
  puVar6 = (undefined8 *)operator_new(0x1a0);
  puVar2 = puVar6 + 4;
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_0097fff0;
                    /* try { // try from 007a5a74 to 007a5a8b has its CatchHandler @ 007a5b38 */
  FUN_007a67d0(puVar2,param_3,&local_70,param_2 + 8,param_2);
  plVar1 = local_70;
  *param_1 = (long)puVar2;
  param_1[1] = (long)puVar6;
  local_90 = puVar2;
  local_88 = puVar6;
  FUN_00757d00(1,puVar6 + 2);
                    /* try { // try from 007a5aa4 to 007a5aaf has its CatchHandler @ 007a5b18 */
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


// ===== 007a5ba0  FUN_007a5ba0 =====

void FUN_007a5ba0(void)

{
  return;
}


// ===== 007a5ba4  FUN_007a5ba4 =====

void FUN_007a5ba4(long param_1)

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


// ===== 007a5bf4  FUN_007a5bf4 =====

void FUN_007a5bf4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  *puVar6 = &PTR_FUN_00982830;
                    /* try { // try from 007a5c3c to 007a5c4b has its CatchHandler @ 007a5ce4 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
            ((YogaLayoutableShadowNode *)(puVar6 + 3),param_3,param_4,uVar8);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_00982880;
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


// ===== 007a5d00  FUN_007a5d00 =====

void FUN_007a5d00(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00982830;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 007a5d10  FUN_007a5d10 =====

void FUN_007a5d10(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00982830;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 007a5d40  FUN_007a5d40 =====

void FUN_007a5d40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007a5d48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 007a5d4c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007a5d50  FUN_007a5d50 =====

void FUN_007a5d50(long *param_1)

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


// ===== 007a5e10  FUN_007a5e10 =====

void FUN_007a5e10(long param_1)

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


// ===== 007a5e78  FUN_007a5e78 =====

bool FUN_007a5e78(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 007a5e90  FUN_007a5e90 =====

bool FUN_007a5e90(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 007a5ea8  FUN_007a5ea8 =====

void FUN_007a5ea8(undefined8 *param_1,undefined8 param_2,ShadowNode *param_3,
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
  *puVar6 = &PTR_FUN_00982830;
                    /* try { // try from 007a5ee8 to 007a5ef7 has its CatchHandler @ 007a5f90 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
            ((YogaLayoutableShadowNode *)(puVar6 + 3),param_3,param_4);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_00982880;
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


// ===== 007a5fac  FUN_007a5fac =====

void FUN_007a5fac(undefined8 *param_1,HostPlatformViewProps *param_2,function *param_3,long *param_4
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
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29NativeLottieNodeComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21NativeLottieNodePropsENS0_28NativeLottieNodeEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd90
         & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29NativeLottieNodeComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21NativeLottieNodePropsENS0_28NativeLottieNodeEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd90
                                   ), iVar3 != 0)) {
                    /* try { // try from 007a60cc to 007a60db has its CatchHandler @ 007a6108 */
      FUN_007a63a4(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29NativeLottieNodeComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21NativeLottieNodePropsENS0_28NativeLottieNodeEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd88
                   ,local_90);
      __cxa_atexit(FUN_007a6354,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29NativeLottieNodeComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21NativeLottieNodePropsENS0_28NativeLottieNodeEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd88
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29NativeLottieNodeComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21NativeLottieNodePropsENS0_28NativeLottieNodeEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd90
                         );
    }
    pRVar7 = *(RawProps **)
              PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29NativeLottieNodeComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21NativeLottieNodePropsENS0_28NativeLottieNodeEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd88
    ;
  }
  puVar4 = (undefined8 *)operator_new(0x6f8);
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_00982998;
  local_70 = (long *)0x0;
                    /* try { // try from 007a6028 to 007a604f has its CatchHandler @ 007a611c */
  facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)(puVar4 + 3),(PropsParserContext *)(PTR_PTR_0099e018 + 8),
             param_2,pRVar7,param_3);
  if (local_70 == local_90) {
    lVar6 = 4;
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_007a607c;
    lVar6 = 5;
    plVar5 = local_70;
  }
  (**(code **)(*plVar5 + lVar6 * 8))();
LAB_007a607c:
  puVar2 = PTR_vtable_0099e010;
  *param_1 = (HostPlatformViewProps *)(puVar4 + 3);
  param_1[1] = puVar4;
  puVar4[3] = puVar2 + 0x20;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007a617c  FUN_007a617c =====

void FUN_007a617c(undefined8 *param_1,undefined8 param_2,long *param_3)

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
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29NativeLottieNodeComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21NativeLottieNodePropsENS0_28NativeLottieNodeEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd90
         & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29NativeLottieNodeComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21NativeLottieNodePropsENS0_28NativeLottieNodeEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd90
                                   ), iVar2 != 0)) {
                    /* try { // try from 007a6260 to 007a626f has its CatchHandler @ 007a629c */
      FUN_007a63a4(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29NativeLottieNodeComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21NativeLottieNodePropsENS0_28NativeLottieNodeEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd88
                   ,local_70);
      __cxa_atexit(FUN_007a6354,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29NativeLottieNodeComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21NativeLottieNodePropsENS0_28NativeLottieNodeEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd88
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29NativeLottieNodeComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21NativeLottieNodePropsENS0_28NativeLottieNodeEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd90
                         );
    }
    local_50 = (long *)0x0;
                    /* try { // try from 007a61ec to 007a61ff has its CatchHandler @ 007a62b0 */
    facebook::react::Props::facebook::react::Props::initializeDynamicProps
              (uVar5,*(undefined8 *)
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29NativeLottieNodeComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_21NativeLottieNodePropsENS0_28NativeLottieNodeEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd88
               ,param_2,local_70);
  }
  else {
    local_50 = (long *)0x0;
                    /* try { // try from 007a61b0 to 007a61c7 has its CatchHandler @ 007a62b4 */
    facebook::react::Props::facebook::react::Props::initializeDynamicProps
              (uVar5,*param_3,param_2,local_70);
  }
  if (local_50 == local_70) {
    lVar4 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007a622c;
    lVar4 = 5;
    plVar3 = local_50;
  }
  (**(code **)(*plVar3 + lVar4 * 8))();
LAB_007a622c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007a6304  FUN_007a6304 =====

void FUN_007a6304(long param_1)

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


// ===== 007a6354  FUN_007a6354 =====

void FUN_007a6354(long param_1)

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


// ===== 007a63a4  FUN_007a63a4 =====

void FUN_007a63a4(undefined8 *param_1)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x6f8);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_00982948;
  memset(__s,0,0x6e0);
                    /* try { // try from 007a63e8 to 007a63fb has its CatchHandler @ 007a6464 */
  FUN_00788b10(__s,PTR_PTR_0099e018 + 0x10);
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
  puVar1 = PTR_vtable_0099e010;
  *(undefined4 *)(puVar2 + 0xd9) = 0;
  *(undefined2 *)((long)puVar2 + 0x6cc) = 0;
  *param_1 = __s;
  param_1[1] = puVar2;
  puVar2[3] = puVar1 + 0x20;
  return;
}


// ===== 007a6480  FUN_007a6480 =====

void FUN_007a6480(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00982948;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 007a6490  FUN_007a6490 =====

void FUN_007a6490(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00982948;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 007a64c0  FUN_007a64c0 =====

void FUN_007a64c0(long param_1)

{
  FUN_0078917c(param_1 + 0x18,PTR_PTR_0099e018 + 8);
  return;
}


// ===== 007a64d4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007a64d8  FUN_007a64d8 =====

void FUN_007a64d8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00982998;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 007a64e8  FUN_007a64e8 =====

void FUN_007a64e8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00982998;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 007a6518  FUN_007a6518 =====

void FUN_007a6518(long param_1)

{
  FUN_0078917c(param_1 + 0x18,PTR_PTR_0099e018 + 8);
  return;
}


// ===== 007a652c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007a6530  FUN_007a6530 =====

void FUN_007a6530(long param_1)

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


// ===== 007a6580  FUN_007a6580 =====

void FUN_007a6580(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009829e8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 007a6590  FUN_007a6590 =====

void FUN_007a6590(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009829e8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 007a65c0  FUN_007a65c0 =====

void FUN_007a65c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007a65c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 007a65cc  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007a65d0  FUN_007a65d0 =====

EventEmitter * FUN_007a65d0(EventEmitter *param_1,undefined8 *param_2,undefined8 *param_3)

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
                    /* try { // try from 007a6618 to 007a6627 has its CatchHandler @ 007a66ec */
  facebook::react::EventEmitter::EventEmitter(param_1,&local_50,&local_60);
  *(undefined ***)param_1 = &PTR_FUN_0097ff10;
                    /* try { // try from 007a6634 to 007a663b has its CatchHandler @ 007a66dc */
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
  *(undefined ***)param_1 = &PTR_FUN_00982a38;
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


// ===== 007a6720  FUN_007a6720 =====

void FUN_007a6720(undefined8 *param_1)

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


// ===== 007a67d0  FUN_007a67d0 =====

ShadowNodeFamily *
FUN_007a67d0(ShadowNodeFamily *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
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
                    /* try { // try from 007a6834 to 007a684b has its CatchHandler @ 007a68b4 */
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


// ===== 007a68ec  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_31DCDNonRecycledViewComponentNameEEEENS0_23DCDNonRecycledViewPropsENS0_30DCDNonRecycledViewEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE =====

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_31DCDNonRecycledViewComponentNameEEEENS0_23DCDNonRecycledViewPropsENS0_30DCDNonRecycledViewEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE
               (undefined8 *param_1)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_007a6940(&local_30);
  *param_1 = local_30;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007a6940  FUN_007a6940 =====

void FUN_007a6940(undefined8 *param_1,ComponentDescriptorParameters *param_2)

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
                    /* try { // try from 007a6984 to 007a698f has its CatchHandler @ 007a69fc */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_90);
  *(undefined ***)this = &PTR_FUN_00982a70;
  FUN_007a6a2c(this + 0x38);
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


// ===== 007a6a2c  FUN_007a6a2c =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007a6a2c(undefined8 param_1)

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
                    /* try { // try from 007a6ab0 to 007a6abb has its CatchHandler @ 007a70b0 */
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
  local_fa0 = PTR_construction_vtable_0099e218 + 0x20;
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
  puVar6 = PTR_PTR_0099e030;
  puVar5 = PTR_vtable_0099e028;
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
  local_fa0 = PTR_vtable_0099e028 + 0x20;
  local_70 = (long *)0x0;
                    /* try { // try from 007a6ea4 to 007a6ecb has its CatchHandler @ 007a7074 */
  facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)local_8c0,(PropsParserContext *)(PTR_PTR_0099e030 + 8),
             (HostPlatformViewProps *)local_fb0,(RawProps *)&local_fa0,(function *)&local_120);
  if (local_70 == &local_90) {
    lVar7 = 4;
    plVar8 = &local_90;
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_007a6ef8;
    lVar7 = 5;
    plVar8 = local_70;
  }
  (**(code **)(*plVar8 + lVar7 * 8))();
LAB_007a6ef8:
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
                    /* try { // try from 007a7004 to 007a700f has its CatchHandler @ 007a70bc */
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


// ===== 007a70c0  FUN_007a70c0 =====

void FUN_007a70c0(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 007a70e4  FUN_007a70e4 =====

undefined * FUN_007a70e4(void)

{
  return PTR_DCDNonRecycledViewComponentName_0099e020;
}


// ===== 007a70f0  FUN_007a70f0 =====

undefined * FUN_007a70f0(void)

{
  return PTR_DCDNonRecycledViewComponentName_0099e020;
}


// ===== 007a70fc  FUN_007a70fc =====

undefined8 FUN_007a70fc(void)

{
  return 0x61;
}


// ===== 007a7104  FUN_007a7104 =====

void FUN_007a7104(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_007a78f4(&local_60,&uStack_49,param_3,param_4,&local_64);
                    /* try { // try from 007a716c to 007a7173 has its CatchHandler @ 007a71a4 */
  (**(code **)(*param_2 + 0x60))(param_2,local_60);
  param_1[1] = uStack_58;
  *param_1 = local_60;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007a71cc  FUN_007a71cc =====

void FUN_007a71cc(undefined8 *param_1,long *param_2,shared_ptr *param_3,undefined8 param_4)

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
  FUN_007a7ba8(&local_60,&local_70);
                    /* try { // try from 007a7218 to 007a7223 has its CatchHandler @ 007a72d0 */
  (**(code **)(*local_60 + 0x10))(local_60,param_3,param_4);
  local_70 = local_60;
  local_68 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    FUN_00757d00(1,plStack_58 + 1);
  }
                    /* try { // try from 007a723c to 007a724b has its CatchHandler @ 007a72c0 */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_70);
  plVar2 = local_68;
  if ((local_68 != (long *)0x0) &&
     (lVar3 = FUN_00757990(0xffffffffffffffff,local_68 + 1), lVar3 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 007a7288 to 007a728f has its CatchHandler @ 007a72d0 */
  (**(code **)(*param_2 + 0x60))(param_2,local_60);
  param_1[1] = plStack_58;
  *param_1 = local_60;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007a72f8  FUN_007a72f8 =====

void FUN_007a72f8(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x007a7308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 007a730c  FUN_007a730c =====

void FUN_007a730c(undefined8 *param_1,long param_2,undefined8 param_3,long *param_4,
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
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31DCDNonRecycledViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23DCDNonRecycledViewPropsENS0_30DCDNonRecycledViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dda0
         & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31DCDNonRecycledViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23DCDNonRecycledViewPropsENS0_30DCDNonRecycledViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dda0
                                   ), iVar7 != 0)) {
                    /* try { // try from 007a75d8 to 007a75e7 has its CatchHandler @ 007a7614 */
      FUN_007a80a4(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31DCDNonRecycledViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23DCDNonRecycledViewPropsENS0_30DCDNonRecycledViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd98
                   ,adStack_d0);
      __cxa_atexit(FUN_007a8054,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31DCDNonRecycledViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23DCDNonRecycledViewPropsENS0_30DCDNonRecycledViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd98
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31DCDNonRecycledViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23DCDNonRecycledViewPropsENS0_30DCDNonRecycledViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dda0
                         );
    }
    lVar10 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31DCDNonRecycledViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23DCDNonRecycledViewPropsENS0_30DCDNonRecycledViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd98
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31DCDNonRecycledViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23DCDNonRecycledViewPropsENS0_30DCDNonRecycledViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd98
    ;
    param_1[1] = lVar10;
    if (lVar10 != 0) {
      FUN_00757d00(1,lVar10 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    FUN_007a7cac(&local_f0,param_3,param_5,param_4);
                    /* try { // try from 007a73b4 to 007a73c7 has its CatchHandler @ 007a7648 */
    uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if (((uVar8 & 1) == 0) ||
       ((uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar8 & 1) == 0 ||
        (uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enablePropsUpdateReconciliationAndroid(), (uVar8 & 1) == 0)))) {
LAB_007a73f0:
      local_100 = local_f0;
      local_f8 = plStack_e8;
      if (plStack_e8 != (long *)0x0) {
        FUN_00757d00(1,plStack_e8 + 1);
      }
                    /* try { // try from 007a7408 to 007a7417 has its CatchHandler @ 007a7638 */
      FUN_007a7e7c(&local_100,param_5,param_4);
      plVar4 = local_f8;
      if ((local_f8 != (long *)0x0) &&
         (lVar10 = FUN_00757990(0xffffffffffffffff,local_f8 + 1), lVar10 == 0)) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 007a73d8 to 007a73df has its CatchHandler @ 007a7628 */
      pcVar9 = (char *)(**(code **)(*local_f0 + 0x10))();
      iVar7 = strcmp(PTR_DCDNonRecycledViewComponentName_0099e020,pcVar9);
      if (iVar7 != 0) goto LAB_007a73f0;
      bVar3 = false;
    }
                    /* try { // try from 007a744c to 007a744f has its CatchHandler @ 007a7648 */
    uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar8 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 007a745c to 007a7477 has its CatchHandler @ 007a7634 */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(local_f0 + 4));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_f0;
      plVar5 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 007a75b8 to 007a75c7 has its CatchHandler @ 007a762c */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_007a7694;
      }
      for (; local_f0 = plVar4, plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (*(int *)(plVar5 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 007a7598 to 007a75a7 has its CatchHandler @ 007a7654 */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_007a7694;
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
                    /* try { // try from 007a74f8 to 007a7503 has its CatchHandler @ 007a765c */
        folly::dynamic::dynamic(adStack_d0,(dynamic *)(plVar5 + 8));
        local_a0 = 0;
                    /* try { // try from 007a7508 to 007a751f has its CatchHandler @ 007a7660 */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (plVar4,param_3,uVar1,pcVar9,adStack_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 007a7530 to 007a753b has its CatchHandler @ 007a7650 */
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
LAB_007a7694:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007a7698  FUN_007a7698 =====

void FUN_007a7698(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 007a76a0  FUN_007a76a0 =====

void FUN_007a76a0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 007a76a8  FUN_007a76a8 =====

void FUN_007a76a8(long *param_1,long param_2,long param_3)

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
                    /* try { // try from 007a76f0 to 007a76f7 has its CatchHandler @ 007a7878 */
  plVar4 = (long *)operator_new(0x68);
  plVar1 = plVar4 + 3;
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_00982cb8;
                    /* try { // try from 007a7710 to 007a771f has its CatchHandler @ 007a7860 */
  FUN_007a82d0(plVar1,auStack_80,param_2 + 8);
  local_70 = plVar1;
  local_68 = plVar4;
  if ((local_78 != (long *)0x0) &&
     (lVar5 = FUN_00757990(0xffffffffffffffff,local_78 + 1), lVar5 == 0)) {
    (**(code **)(*local_78 + 0x10))(local_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 007a7754 to 007a775b has its CatchHandler @ 007a7850 */
  puVar6 = (undefined8 *)operator_new(0x1a0);
  puVar2 = puVar6 + 4;
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_0097fff0;
                    /* try { // try from 007a7774 to 007a778b has its CatchHandler @ 007a7838 */
  FUN_007a84d0(puVar2,param_3,&local_70,param_2 + 8,param_2);
  plVar1 = local_70;
  *param_1 = (long)puVar2;
  param_1[1] = (long)puVar6;
  local_90 = puVar2;
  local_88 = puVar6;
  FUN_00757d00(1,puVar6 + 2);
                    /* try { // try from 007a77a4 to 007a77af has its CatchHandler @ 007a7818 */
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


// ===== 007a78a0  FUN_007a78a0 =====

void FUN_007a78a0(void)

{
  return;
}


// ===== 007a78a4  FUN_007a78a4 =====

void FUN_007a78a4(long param_1)

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


// ===== 007a78f4  FUN_007a78f4 =====

void FUN_007a78f4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  *puVar6 = &PTR_FUN_00982b00;
                    /* try { // try from 007a793c to 007a794b has its CatchHandler @ 007a79e4 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
            ((YogaLayoutableShadowNode *)(puVar6 + 3),param_3,param_4,uVar8);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_00982b50;
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


// ===== 007a7a00  FUN_007a7a00 =====

void FUN_007a7a00(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00982b00;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 007a7a10  FUN_007a7a10 =====

void FUN_007a7a10(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00982b00;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 007a7a40  FUN_007a7a40 =====

void FUN_007a7a40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007a7a48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 007a7a4c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007a7a50  FUN_007a7a50 =====

void FUN_007a7a50(long *param_1)

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


// ===== 007a7b10  FUN_007a7b10 =====

void FUN_007a7b10(long param_1)

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


// ===== 007a7b78  FUN_007a7b78 =====

bool FUN_007a7b78(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 007a7b90  FUN_007a7b90 =====

bool FUN_007a7b90(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 007a7ba8  FUN_007a7ba8 =====

void FUN_007a7ba8(undefined8 *param_1,undefined8 param_2,ShadowNode *param_3,
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
  *puVar6 = &PTR_FUN_00982b00;
                    /* try { // try from 007a7be8 to 007a7bf7 has its CatchHandler @ 007a7c90 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
            ((YogaLayoutableShadowNode *)(puVar6 + 3),param_3,param_4);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_00982b50;
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


// ===== 007a7cac  FUN_007a7cac =====

void FUN_007a7cac(undefined8 *param_1,HostPlatformViewProps *param_2,function *param_3,long *param_4
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
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31DCDNonRecycledViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23DCDNonRecycledViewPropsENS0_30DCDNonRecycledViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dda0
         & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31DCDNonRecycledViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23DCDNonRecycledViewPropsENS0_30DCDNonRecycledViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dda0
                                   ), iVar3 != 0)) {
                    /* try { // try from 007a7dcc to 007a7ddb has its CatchHandler @ 007a7e08 */
      FUN_007a80a4(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31DCDNonRecycledViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23DCDNonRecycledViewPropsENS0_30DCDNonRecycledViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd98
                   ,local_90);
      __cxa_atexit(FUN_007a8054,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31DCDNonRecycledViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23DCDNonRecycledViewPropsENS0_30DCDNonRecycledViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd98
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31DCDNonRecycledViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23DCDNonRecycledViewPropsENS0_30DCDNonRecycledViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dda0
                         );
    }
    pRVar7 = *(RawProps **)
              PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31DCDNonRecycledViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23DCDNonRecycledViewPropsENS0_30DCDNonRecycledViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd98
    ;
  }
  puVar4 = (undefined8 *)operator_new(0x6f8);
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_00982c68;
  local_70 = (long *)0x0;
                    /* try { // try from 007a7d28 to 007a7d4f has its CatchHandler @ 007a7e1c */
  facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)(puVar4 + 3),(PropsParserContext *)(PTR_PTR_0099e030 + 8),
             param_2,pRVar7,param_3);
  if (local_70 == local_90) {
    lVar6 = 4;
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_007a7d7c;
    lVar6 = 5;
    plVar5 = local_70;
  }
  (**(code **)(*plVar5 + lVar6 * 8))();
LAB_007a7d7c:
  puVar2 = PTR_vtable_0099e028;
  *param_1 = (HostPlatformViewProps *)(puVar4 + 3);
  param_1[1] = puVar4;
  puVar4[3] = puVar2 + 0x20;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007a7e7c  FUN_007a7e7c =====

void FUN_007a7e7c(undefined8 *param_1,undefined8 param_2,long *param_3)

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
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31DCDNonRecycledViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23DCDNonRecycledViewPropsENS0_30DCDNonRecycledViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dda0
         & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31DCDNonRecycledViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23DCDNonRecycledViewPropsENS0_30DCDNonRecycledViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dda0
                                   ), iVar2 != 0)) {
                    /* try { // try from 007a7f60 to 007a7f6f has its CatchHandler @ 007a7f9c */
      FUN_007a80a4(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31DCDNonRecycledViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23DCDNonRecycledViewPropsENS0_30DCDNonRecycledViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd98
                   ,local_70);
      __cxa_atexit(FUN_007a8054,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31DCDNonRecycledViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23DCDNonRecycledViewPropsENS0_30DCDNonRecycledViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd98
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31DCDNonRecycledViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23DCDNonRecycledViewPropsENS0_30DCDNonRecycledViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dda0
                         );
    }
    local_50 = (long *)0x0;
                    /* try { // try from 007a7eec to 007a7eff has its CatchHandler @ 007a7fb0 */
    facebook::react::Props::facebook::react::Props::initializeDynamicProps
              (uVar5,*(undefined8 *)
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31DCDNonRecycledViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23DCDNonRecycledViewPropsENS0_30DCDNonRecycledViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dd98
               ,param_2,local_70);
  }
  else {
    local_50 = (long *)0x0;
                    /* try { // try from 007a7eb0 to 007a7ec7 has its CatchHandler @ 007a7fb4 */
    facebook::react::Props::facebook::react::Props::initializeDynamicProps
              (uVar5,*param_3,param_2,local_70);
  }
  if (local_50 == local_70) {
    lVar4 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007a7f2c;
    lVar4 = 5;
    plVar3 = local_50;
  }
  (**(code **)(*plVar3 + lVar4 * 8))();
LAB_007a7f2c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007a8004  FUN_007a8004 =====

void FUN_007a8004(long param_1)

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


// ===== 007a8054  FUN_007a8054 =====

void FUN_007a8054(long param_1)

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


// ===== 007a80a4  FUN_007a80a4 =====

void FUN_007a80a4(undefined8 *param_1)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x6f8);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_00982c18;
  memset(__s,0,0x6e0);
                    /* try { // try from 007a80e8 to 007a80fb has its CatchHandler @ 007a8164 */
  FUN_00788b10(__s,PTR_PTR_0099e030 + 0x10);
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
  puVar1 = PTR_vtable_0099e028;
  *(undefined4 *)(puVar2 + 0xd9) = 0;
  *(undefined2 *)((long)puVar2 + 0x6cc) = 0;
  *param_1 = __s;
  param_1[1] = puVar2;
  puVar2[3] = puVar1 + 0x20;
  return;
}


// ===== 007a8180  FUN_007a8180 =====

void FUN_007a8180(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00982c18;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 007a8190  FUN_007a8190 =====

void FUN_007a8190(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00982c18;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 007a81c0  FUN_007a81c0 =====

void FUN_007a81c0(long param_1)

{
  FUN_0078917c(param_1 + 0x18,PTR_PTR_0099e030 + 8);
  return;
}


// ===== 007a81d4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007a81d8  FUN_007a81d8 =====

void FUN_007a81d8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00982c68;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 007a81e8  FUN_007a81e8 =====

void FUN_007a81e8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00982c68;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 007a8218  FUN_007a8218 =====

void FUN_007a8218(long param_1)

{
  FUN_0078917c(param_1 + 0x18,PTR_PTR_0099e030 + 8);
  return;
}


// ===== 007a822c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007a8230  FUN_007a8230 =====

void FUN_007a8230(long param_1)

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


// ===== 007a8280  FUN_007a8280 =====

void FUN_007a8280(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00982cb8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 007a8290  FUN_007a8290 =====

void FUN_007a8290(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00982cb8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 007a82c0  FUN_007a82c0 =====

void FUN_007a82c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007a82c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 007a82cc  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007a82d0  FUN_007a82d0 =====

EventEmitter * FUN_007a82d0(EventEmitter *param_1,undefined8 *param_2,undefined8 *param_3)

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
                    /* try { // try from 007a8318 to 007a8327 has its CatchHandler @ 007a83ec */
  facebook::react::EventEmitter::EventEmitter(param_1,&local_50,&local_60);
  *(undefined ***)param_1 = &PTR_FUN_0097ff10;
                    /* try { // try from 007a8334 to 007a833b has its CatchHandler @ 007a83dc */
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
  *(undefined ***)param_1 = &PTR_FUN_00982d08;
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


// ===== 007a8420  FUN_007a8420 =====

void FUN_007a8420(undefined8 *param_1)

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


// ===== 007a84d0  FUN_007a84d0 =====

ShadowNodeFamily *
FUN_007a84d0(ShadowNodeFamily *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
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
                    /* try { // try from 007a8534 to 007a854b has its CatchHandler @ 007a85b4 */
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


// ===== 007a85ec  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_33PassthroughTouchViewComponentNameEEEENS0_25PassthroughTouchViewPropsENS0_32PassthroughTouchViewEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE =====

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_33PassthroughTouchViewComponentNameEEEENS0_25PassthroughTouchViewPropsENS0_32PassthroughTouchViewEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE
               (undefined8 *param_1)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_007a8640(&local_30);
  *param_1 = local_30;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007a8640  FUN_007a8640 =====

void FUN_007a8640(undefined8 *param_1,ComponentDescriptorParameters *param_2)

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
                    /* try { // try from 007a8684 to 007a868f has its CatchHandler @ 007a86fc */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_90);
  *(undefined ***)this = &PTR_FUN_00982d40;
  FUN_007a872c(this + 0x38);
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


// ===== 007a872c  FUN_007a872c =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007a872c(undefined8 param_1)

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
                    /* try { // try from 007a87b0 to 007a87bb has its CatchHandler @ 007a8db0 */
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
  local_fa0 = PTR_construction_vtable_0099e220 + 0x20;
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
  puVar6 = PTR_PTR_0099e048;
  puVar5 = PTR_vtable_0099e040;
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
  local_fa0 = PTR_vtable_0099e040 + 0x20;
  local_70 = (long *)0x0;
                    /* try { // try from 007a8ba4 to 007a8bcb has its CatchHandler @ 007a8d74 */
  facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)local_8c0,(PropsParserContext *)(PTR_PTR_0099e048 + 8),
             (HostPlatformViewProps *)local_fb0,(RawProps *)&local_fa0,(function *)&local_120);
  if (local_70 == &local_90) {
    lVar7 = 4;
    plVar8 = &local_90;
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_007a8bf8;
    lVar7 = 5;
    plVar8 = local_70;
  }
  (**(code **)(*plVar8 + lVar7 * 8))();
LAB_007a8bf8:
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
                    /* try { // try from 007a8d04 to 007a8d0f has its CatchHandler @ 007a8dbc */
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


// ===== 007a8dc0  FUN_007a8dc0 =====

void FUN_007a8dc0(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 007a8de4  FUN_007a8de4 =====

undefined * FUN_007a8de4(void)

{
  return PTR_PassthroughTouchViewComponentName_0099e038;
}


// ===== 007a8df0  FUN_007a8df0 =====

undefined * FUN_007a8df0(void)

{
  return PTR_PassthroughTouchViewComponentName_0099e038;
}


// ===== 007a8dfc  FUN_007a8dfc =====

undefined8 FUN_007a8dfc(void)

{
  return 0x61;
}


// ===== 007a8e04  FUN_007a8e04 =====

void FUN_007a8e04(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_007a95f4(&local_60,&uStack_49,param_3,param_4,&local_64);
                    /* try { // try from 007a8e6c to 007a8e73 has its CatchHandler @ 007a8ea4 */
  (**(code **)(*param_2 + 0x60))(param_2,local_60);
  param_1[1] = uStack_58;
  *param_1 = local_60;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007a8ecc  FUN_007a8ecc =====

void FUN_007a8ecc(undefined8 *param_1,long *param_2,shared_ptr *param_3,undefined8 param_4)

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
  FUN_007a98a8(&local_60,&local_70);
                    /* try { // try from 007a8f18 to 007a8f23 has its CatchHandler @ 007a8fd0 */
  (**(code **)(*local_60 + 0x10))(local_60,param_3,param_4);
  local_70 = local_60;
  local_68 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    FUN_00757d00(1,plStack_58 + 1);
  }
                    /* try { // try from 007a8f3c to 007a8f4b has its CatchHandler @ 007a8fc0 */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_70);
  plVar2 = local_68;
  if ((local_68 != (long *)0x0) &&
     (lVar3 = FUN_00757990(0xffffffffffffffff,local_68 + 1), lVar3 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 007a8f88 to 007a8f8f has its CatchHandler @ 007a8fd0 */
  (**(code **)(*param_2 + 0x60))(param_2,local_60);
  param_1[1] = plStack_58;
  *param_1 = local_60;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007a8ff8  FUN_007a8ff8 =====

void FUN_007a8ff8(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x007a9008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 007a900c  FUN_007a900c =====

void FUN_007a900c(undefined8 *param_1,long param_2,undefined8 param_3,long *param_4,
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
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33PassthroughTouchViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25PassthroughTouchViewPropsENS0_32PassthroughTouchViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ddb0
         & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33PassthroughTouchViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25PassthroughTouchViewPropsENS0_32PassthroughTouchViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ddb0
                                   ), iVar7 != 0)) {
                    /* try { // try from 007a92d8 to 007a92e7 has its CatchHandler @ 007a9314 */
      FUN_007a9da4(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33PassthroughTouchViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25PassthroughTouchViewPropsENS0_32PassthroughTouchViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dda8
                   ,adStack_d0);
      __cxa_atexit(FUN_007a9d54,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33PassthroughTouchViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25PassthroughTouchViewPropsENS0_32PassthroughTouchViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dda8
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33PassthroughTouchViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25PassthroughTouchViewPropsENS0_32PassthroughTouchViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ddb0
                         );
    }
    lVar10 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33PassthroughTouchViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25PassthroughTouchViewPropsENS0_32PassthroughTouchViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dda8
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33PassthroughTouchViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25PassthroughTouchViewPropsENS0_32PassthroughTouchViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dda8
    ;
    param_1[1] = lVar10;
    if (lVar10 != 0) {
      FUN_00757d00(1,lVar10 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    FUN_007a99ac(&local_f0,param_3,param_5,param_4);
                    /* try { // try from 007a90b4 to 007a90c7 has its CatchHandler @ 007a9348 */
    uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if (((uVar8 & 1) == 0) ||
       ((uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar8 & 1) == 0 ||
        (uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enablePropsUpdateReconciliationAndroid(), (uVar8 & 1) == 0)))) {
LAB_007a90f0:
      local_100 = local_f0;
      local_f8 = plStack_e8;
      if (plStack_e8 != (long *)0x0) {
        FUN_00757d00(1,plStack_e8 + 1);
      }
                    /* try { // try from 007a9108 to 007a9117 has its CatchHandler @ 007a9338 */
      FUN_007a9b7c(&local_100,param_5,param_4);
      plVar4 = local_f8;
      if ((local_f8 != (long *)0x0) &&
         (lVar10 = FUN_00757990(0xffffffffffffffff,local_f8 + 1), lVar10 == 0)) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 007a90d8 to 007a90df has its CatchHandler @ 007a9328 */
      pcVar9 = (char *)(**(code **)(*local_f0 + 0x10))();
      iVar7 = strcmp(PTR_PassthroughTouchViewComponentName_0099e038,pcVar9);
      if (iVar7 != 0) goto LAB_007a90f0;
      bVar3 = false;
    }
                    /* try { // try from 007a914c to 007a914f has its CatchHandler @ 007a9348 */
    uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar8 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 007a915c to 007a9177 has its CatchHandler @ 007a9334 */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(local_f0 + 4));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_f0;
      plVar5 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 007a92b8 to 007a92c7 has its CatchHandler @ 007a932c */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_007a9394;
      }
      for (; local_f0 = plVar4, plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (*(int *)(plVar5 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 007a9298 to 007a92a7 has its CatchHandler @ 007a9354 */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_007a9394;
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
                    /* try { // try from 007a91f8 to 007a9203 has its CatchHandler @ 007a935c */
        folly::dynamic::dynamic(adStack_d0,(dynamic *)(plVar5 + 8));
        local_a0 = 0;
                    /* try { // try from 007a9208 to 007a921f has its CatchHandler @ 007a9360 */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (plVar4,param_3,uVar1,pcVar9,adStack_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 007a9230 to 007a923b has its CatchHandler @ 007a9350 */
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
LAB_007a9394:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007a9398  FUN_007a9398 =====

void FUN_007a9398(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 007a93a0  FUN_007a93a0 =====

void FUN_007a93a0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 007a93a8  FUN_007a93a8 =====

void FUN_007a93a8(long *param_1,long param_2,long param_3)

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
                    /* try { // try from 007a93f0 to 007a93f7 has its CatchHandler @ 007a9578 */
  plVar4 = (long *)operator_new(0x68);
  plVar1 = plVar4 + 3;
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_00982f88;
                    /* try { // try from 007a9410 to 007a941f has its CatchHandler @ 007a9560 */
  FUN_007a9fd0(plVar1,auStack_80,param_2 + 8);
  local_70 = plVar1;
  local_68 = plVar4;
  if ((local_78 != (long *)0x0) &&
     (lVar5 = FUN_00757990(0xffffffffffffffff,local_78 + 1), lVar5 == 0)) {
    (**(code **)(*local_78 + 0x10))(local_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 007a9454 to 007a945b has its CatchHandler @ 007a9550 */
  puVar6 = (undefined8 *)operator_new(0x1a0);
  puVar2 = puVar6 + 4;
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_0097fff0;
                    /* try { // try from 007a9474 to 007a948b has its CatchHandler @ 007a9538 */
  FUN_007aa1d0(puVar2,param_3,&local_70,param_2 + 8,param_2);
  plVar1 = local_70;
  *param_1 = (long)puVar2;
  param_1[1] = (long)puVar6;
  local_90 = puVar2;
  local_88 = puVar6;
  FUN_00757d00(1,puVar6 + 2);
                    /* try { // try from 007a94a4 to 007a94af has its CatchHandler @ 007a9518 */
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


// ===== 007a95a0  FUN_007a95a0 =====

void FUN_007a95a0(void)

{
  return;
}


// ===== 007a95a4  FUN_007a95a4 =====

void FUN_007a95a4(long param_1)

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


// ===== 007a95f4  FUN_007a95f4 =====

void FUN_007a95f4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  *puVar6 = &PTR_FUN_00982dd0;
                    /* try { // try from 007a963c to 007a964b has its CatchHandler @ 007a96e4 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
            ((YogaLayoutableShadowNode *)(puVar6 + 3),param_3,param_4,uVar8);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_00982e20;
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


// ===== 007a9700  FUN_007a9700 =====

void FUN_007a9700(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00982dd0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 007a9710  FUN_007a9710 =====

void FUN_007a9710(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00982dd0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 007a9740  FUN_007a9740 =====

void FUN_007a9740(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007a9748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 007a974c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007a9750  FUN_007a9750 =====

void FUN_007a9750(long *param_1)

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


// ===== 007a9810  FUN_007a9810 =====

void FUN_007a9810(long param_1)

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


// ===== 007a9878  FUN_007a9878 =====

bool FUN_007a9878(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 007a9890  FUN_007a9890 =====

bool FUN_007a9890(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 007a98a8  FUN_007a98a8 =====

void FUN_007a98a8(undefined8 *param_1,undefined8 param_2,ShadowNode *param_3,
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
  *puVar6 = &PTR_FUN_00982dd0;
                    /* try { // try from 007a98e8 to 007a98f7 has its CatchHandler @ 007a9990 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
            ((YogaLayoutableShadowNode *)(puVar6 + 3),param_3,param_4);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_00982e20;
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


// ===== 007a99ac  FUN_007a99ac =====

void FUN_007a99ac(undefined8 *param_1,HostPlatformViewProps *param_2,function *param_3,long *param_4
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
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33PassthroughTouchViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25PassthroughTouchViewPropsENS0_32PassthroughTouchViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ddb0
         & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33PassthroughTouchViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25PassthroughTouchViewPropsENS0_32PassthroughTouchViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ddb0
                                   ), iVar3 != 0)) {
                    /* try { // try from 007a9acc to 007a9adb has its CatchHandler @ 007a9b08 */
      FUN_007a9da4(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33PassthroughTouchViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25PassthroughTouchViewPropsENS0_32PassthroughTouchViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dda8
                   ,local_90);
      __cxa_atexit(FUN_007a9d54,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33PassthroughTouchViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25PassthroughTouchViewPropsENS0_32PassthroughTouchViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dda8
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33PassthroughTouchViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25PassthroughTouchViewPropsENS0_32PassthroughTouchViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ddb0
                         );
    }
    pRVar7 = *(RawProps **)
              PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33PassthroughTouchViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25PassthroughTouchViewPropsENS0_32PassthroughTouchViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dda8
    ;
  }
  puVar4 = (undefined8 *)operator_new(0x6f8);
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_00982f38;
  local_70 = (long *)0x0;
                    /* try { // try from 007a9a28 to 007a9a4f has its CatchHandler @ 007a9b1c */
  facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)(puVar4 + 3),(PropsParserContext *)(PTR_PTR_0099e048 + 8),
             param_2,pRVar7,param_3);
  if (local_70 == local_90) {
    lVar6 = 4;
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_007a9a7c;
    lVar6 = 5;
    plVar5 = local_70;
  }
  (**(code **)(*plVar5 + lVar6 * 8))();
LAB_007a9a7c:
  puVar2 = PTR_vtable_0099e040;
  *param_1 = (HostPlatformViewProps *)(puVar4 + 3);
  param_1[1] = puVar4;
  puVar4[3] = puVar2 + 0x20;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007a9b7c  FUN_007a9b7c =====

void FUN_007a9b7c(undefined8 *param_1,undefined8 param_2,long *param_3)

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
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33PassthroughTouchViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25PassthroughTouchViewPropsENS0_32PassthroughTouchViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ddb0
         & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33PassthroughTouchViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25PassthroughTouchViewPropsENS0_32PassthroughTouchViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ddb0
                                   ), iVar2 != 0)) {
                    /* try { // try from 007a9c60 to 007a9c6f has its CatchHandler @ 007a9c9c */
      FUN_007a9da4(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33PassthroughTouchViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25PassthroughTouchViewPropsENS0_32PassthroughTouchViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dda8
                   ,local_70);
      __cxa_atexit(FUN_007a9d54,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33PassthroughTouchViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25PassthroughTouchViewPropsENS0_32PassthroughTouchViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dda8
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33PassthroughTouchViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25PassthroughTouchViewPropsENS0_32PassthroughTouchViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ddb0
                         );
    }
    local_50 = (long *)0x0;
                    /* try { // try from 007a9bec to 007a9bff has its CatchHandler @ 007a9cb0 */
    facebook::react::Props::facebook::react::Props::initializeDynamicProps
              (uVar5,*(undefined8 *)
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33PassthroughTouchViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25PassthroughTouchViewPropsENS0_32PassthroughTouchViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dda8
               ,param_2,local_70);
  }
  else {
    local_50 = (long *)0x0;
                    /* try { // try from 007a9bb0 to 007a9bc7 has its CatchHandler @ 007a9cb4 */
    facebook::react::Props::facebook::react::Props::initializeDynamicProps
              (uVar5,*param_3,param_2,local_70);
  }
  if (local_50 == local_70) {
    lVar4 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007a9c2c;
    lVar4 = 5;
    plVar3 = local_50;
  }
  (**(code **)(*plVar3 + lVar4 * 8))();
LAB_007a9c2c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007a9d04  FUN_007a9d04 =====

void FUN_007a9d04(long param_1)

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


// ===== 007a9d54  FUN_007a9d54 =====

void FUN_007a9d54(long param_1)

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


// ===== 007a9da4  FUN_007a9da4 =====

void FUN_007a9da4(undefined8 *param_1)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x6f8);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_00982ee8;
  memset(__s,0,0x6e0);
                    /* try { // try from 007a9de8 to 007a9dfb has its CatchHandler @ 007a9e64 */
  FUN_00788b10(__s,PTR_PTR_0099e048 + 0x10);
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
  puVar1 = PTR_vtable_0099e040;
  *(undefined4 *)(puVar2 + 0xd9) = 0;
  *(undefined2 *)((long)puVar2 + 0x6cc) = 0;
  *param_1 = __s;
  param_1[1] = puVar2;
  puVar2[3] = puVar1 + 0x20;
  return;
}


// ===== 007a9e80  FUN_007a9e80 =====

void FUN_007a9e80(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00982ee8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 007a9e90  FUN_007a9e90 =====

void FUN_007a9e90(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00982ee8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 007a9ec0  FUN_007a9ec0 =====

void FUN_007a9ec0(long param_1)

{
  FUN_0078917c(param_1 + 0x18,PTR_PTR_0099e048 + 8);
  return;
}


// ===== 007a9ed4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007a9ed8  FUN_007a9ed8 =====

void FUN_007a9ed8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00982f38;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 007a9ee8  FUN_007a9ee8 =====

void FUN_007a9ee8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00982f38;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 007a9f18  FUN_007a9f18 =====

void FUN_007a9f18(long param_1)

{
  FUN_0078917c(param_1 + 0x18,PTR_PTR_0099e048 + 8);
  return;
}


// ===== 007a9f2c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007a9f30  FUN_007a9f30 =====

void FUN_007a9f30(long param_1)

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


// ===== 007a9f80  FUN_007a9f80 =====

void FUN_007a9f80(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00982f88;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 007a9f90  FUN_007a9f90 =====

void FUN_007a9f90(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00982f88;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 007a9fc0  FUN_007a9fc0 =====

void FUN_007a9fc0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007a9fc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 007a9fcc  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007a9fd0  FUN_007a9fd0 =====

EventEmitter * FUN_007a9fd0(EventEmitter *param_1,undefined8 *param_2,undefined8 *param_3)

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
                    /* try { // try from 007aa018 to 007aa027 has its CatchHandler @ 007aa0ec */
  facebook::react::EventEmitter::EventEmitter(param_1,&local_50,&local_60);
  *(undefined ***)param_1 = &PTR_FUN_0097ff10;
                    /* try { // try from 007aa034 to 007aa03b has its CatchHandler @ 007aa0dc */
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
  *(undefined ***)param_1 = &PTR_FUN_00982fd8;
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


// ===== 007aa120  FUN_007aa120 =====

void FUN_007aa120(undefined8 *param_1)

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


// ===== 007aa1d0  FUN_007aa1d0 =====

ShadowNodeFamily *
FUN_007aa1d0(ShadowNodeFamily *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
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
                    /* try { // try from 007aa234 to 007aa24b has its CatchHandler @ 007aa2b4 */
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


// ===== 007aa2ec  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_26DCDPortalViewComponentNameEEEENS0_18DCDPortalViewPropsENS0_25DCDPortalViewEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE =====

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_26DCDPortalViewComponentNameEEEENS0_18DCDPortalViewPropsENS0_25DCDPortalViewEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE
               (undefined8 *param_1)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_007aa340(&local_30);
  *param_1 = local_30;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007aa340  FUN_007aa340 =====

void FUN_007aa340(undefined8 *param_1,ComponentDescriptorParameters *param_2)

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
                    /* try { // try from 007aa384 to 007aa38f has its CatchHandler @ 007aa3fc */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_90);
  *(undefined ***)this = &PTR_FUN_00983010;
  FUN_007aa42c(this + 0x38);
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


// ===== 007aa42c  FUN_007aa42c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007aa42c(undefined8 param_1)

{
  byte bVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  void *pvVar8;
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
  undefined8 local_8c0;
  DCDPortalViewProps aDStack_8b8 [1768];
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
                    /* try { // try from 007aa4b4 to 007aa4bf has its CatchHandler @ 007aaa34 */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1d0);
  local_120 = CONCAT44(local_120._4_4_,0x3f800000);
  local_fb0[0] = 0xffffffff;
  uStack_128 = 0;
  local_130 = (void *)0x0;
  uStack_138 = 0;
  local_140 = (void *)0x0;
  local_fa8 = &local_1d0;
  facebook::react::RawProps::facebook::react::RawProps::parse(&local_118,param_1);
  memset(local_f80,0,0x6c8);
  local_88[0] = 5;
  local_70 = 0;
  local_fa0 = PTR_construction_vtable_0099e228 + 0x20;
  local_f80[0] = 5;
  uStack_f88 = 0;
  local_f90 = 0;
  uStack_f98 = 0;
  local_68 = 0;
  uStack_60 = 0x3f800000;
  uStack_78 = 0;
  local_80 = 0;
  uStack_f70 = 0;
  local_f78 = 0;
  uStack_f60 = 0;
  local_f68 = 0;
  local_f58 = 0x3f800000;
  folly::dynamic::folly::dynamic::destroy(local_88);
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
  local_fa0 = PTR_vtable_0099e058 + 0x20;
  local_8c0 = 0;
                    /* try { // try from 007aa8a8 to 007aa8bb has its CatchHandler @ 007aaa34 */
  facebook::react::DCDPortalViewProps::DCDPortalViewProps
            (aDStack_8b8,(PropsParserContext *)local_fb0,(DCDPortalViewProps *)&local_fa0,
             (RawProps *)&local_118);
  puVar5 = PTR_PTR_0099e060;
  FUN_0078917c(aDStack_8b8,PTR_PTR_0099e060 + 8);
  FUN_0078917c(&local_fa0,puVar5 + 8);
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
                    /* try { // try from 007aa9c8 to 007aa9d3 has its CatchHandler @ 007aaa38 */
        (*(code *)(&PTR_FUN_0097fbf8)[*(uint *)((long)pvVar3 + -8)])
                  (&local_fa0,(void *)((long)pvVar3 + -0x38));
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


// ===== 007aaa3c  FUN_007aaa3c =====

void FUN_007aaa3c(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 007aaa60  FUN_007aaa60 =====

undefined * FUN_007aaa60(void)

{
  return PTR_DCDPortalViewComponentName_0099e050;
}


// ===== 007aaa6c  FUN_007aaa6c =====

undefined * FUN_007aaa6c(void)

{
  return PTR_DCDPortalViewComponentName_0099e050;
}


// ===== 007aaa78  FUN_007aaa78 =====

undefined8 FUN_007aaa78(void)

{
  return 0x61;
}


// ===== 007aaa80  FUN_007aaa80 =====

void FUN_007aaa80(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_007ab270(&local_60,&uStack_49,param_3,param_4,&local_64);
                    /* try { // try from 007aaae8 to 007aaaef has its CatchHandler @ 007aab20 */
  (**(code **)(*param_2 + 0x60))(param_2,local_60);
  param_1[1] = uStack_58;
  *param_1 = local_60;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007aab48  FUN_007aab48 =====

void FUN_007aab48(undefined8 *param_1,long *param_2,shared_ptr *param_3,undefined8 param_4)

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
  FUN_007ab524(&local_60,&local_70);
                    /* try { // try from 007aab94 to 007aab9f has its CatchHandler @ 007aac4c */
  (**(code **)(*local_60 + 0x10))(local_60,param_3,param_4);
  local_70 = local_60;
  local_68 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    FUN_00757d00(1,plStack_58 + 1);
  }
                    /* try { // try from 007aabb8 to 007aabc7 has its CatchHandler @ 007aac3c */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_70);
  plVar2 = local_68;
  if ((local_68 != (long *)0x0) &&
     (lVar3 = FUN_00757990(0xffffffffffffffff,local_68 + 1), lVar3 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 007aac04 to 007aac0b has its CatchHandler @ 007aac4c */
  (**(code **)(*param_2 + 0x60))(param_2,local_60);
  param_1[1] = plStack_58;
  *param_1 = local_60;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007aac74  FUN_007aac74 =====

void FUN_007aac74(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x007aac84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 007aac88  FUN_007aac88 =====

void FUN_007aac88(undefined8 *param_1,long param_2,undefined8 param_3,long *param_4,
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
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_26DCDPortalViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_18DCDPortalViewPropsENS0_25DCDPortalViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ddc0
         & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_26DCDPortalViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_18DCDPortalViewPropsENS0_25DCDPortalViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ddc0
                                   ), iVar7 != 0)) {
                    /* try { // try from 007aaf54 to 007aaf63 has its CatchHandler @ 007aaf90 */
      FUN_007ab99c(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_26DCDPortalViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_18DCDPortalViewPropsENS0_25DCDPortalViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ddb8
                   ,adStack_d0);
      __cxa_atexit(FUN_007ab94c,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_26DCDPortalViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_18DCDPortalViewPropsENS0_25DCDPortalViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ddb8
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_26DCDPortalViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_18DCDPortalViewPropsENS0_25DCDPortalViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ddc0
                         );
    }
    lVar10 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_26DCDPortalViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_18DCDPortalViewPropsENS0_25DCDPortalViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ddb8
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_26DCDPortalViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_18DCDPortalViewPropsENS0_25DCDPortalViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ddb8
    ;
    param_1[1] = lVar10;
    if (lVar10 != 0) {
      FUN_00757d00(1,lVar10 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    FUN_007ab628(&local_f0,param_3,param_5,param_4);
                    /* try { // try from 007aad30 to 007aad43 has its CatchHandler @ 007aafc4 */
    uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if (((uVar8 & 1) == 0) ||
       ((uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar8 & 1) == 0 ||
        (uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enablePropsUpdateReconciliationAndroid(), (uVar8 & 1) == 0)))) {
LAB_007aad6c:
      local_100 = local_f0;
      local_f8 = plStack_e8;
      if (plStack_e8 != (long *)0x0) {
        FUN_00757d00(1,plStack_e8 + 1);
      }
                    /* try { // try from 007aad84 to 007aad93 has its CatchHandler @ 007aafb4 */
      FUN_007ab774(&local_100,param_5,param_4);
      plVar4 = local_f8;
      if ((local_f8 != (long *)0x0) &&
         (lVar10 = FUN_00757990(0xffffffffffffffff,local_f8 + 1), lVar10 == 0)) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 007aad54 to 007aad5b has its CatchHandler @ 007aafa4 */
      pcVar9 = (char *)(**(code **)(*local_f0 + 0x10))();
      iVar7 = strcmp(PTR_DCDPortalViewComponentName_0099e050,pcVar9);
      if (iVar7 != 0) goto LAB_007aad6c;
      bVar3 = false;
    }
                    /* try { // try from 007aadc8 to 007aadcb has its CatchHandler @ 007aafc4 */
    uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar8 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 007aadd8 to 007aadf3 has its CatchHandler @ 007aafb0 */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(local_f0 + 4));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_f0;
      plVar5 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 007aaf34 to 007aaf43 has its CatchHandler @ 007aafa8 */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_007ab010;
      }
      for (; local_f0 = plVar4, plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (*(int *)(plVar5 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 007aaf14 to 007aaf23 has its CatchHandler @ 007aafd0 */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_007ab010;
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
                    /* try { // try from 007aae74 to 007aae7f has its CatchHandler @ 007aafd8 */
        folly::dynamic::dynamic(adStack_d0,(dynamic *)(plVar5 + 8));
        local_a0 = 0;
                    /* try { // try from 007aae84 to 007aae9b has its CatchHandler @ 007aafdc */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (plVar4,param_3,uVar1,pcVar9,adStack_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 007aaeac to 007aaeb7 has its CatchHandler @ 007aafcc */
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
LAB_007ab010:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007ab014  FUN_007ab014 =====

void FUN_007ab014(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 007ab01c  FUN_007ab01c =====

void FUN_007ab01c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 007ab024  FUN_007ab024 =====

void FUN_007ab024(long *param_1,long param_2,long param_3)

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
                    /* try { // try from 007ab06c to 007ab073 has its CatchHandler @ 007ab1f4 */
  plVar4 = (long *)operator_new(0x68);
  plVar1 = plVar4 + 3;
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_00983258;
                    /* try { // try from 007ab08c to 007ab09b has its CatchHandler @ 007ab1dc */
  FUN_007abbcc(plVar1,auStack_80,param_2 + 8);
  local_70 = plVar1;
  local_68 = plVar4;
  if ((local_78 != (long *)0x0) &&
     (lVar5 = FUN_00757990(0xffffffffffffffff,local_78 + 1), lVar5 == 0)) {
    (**(code **)(*local_78 + 0x10))(local_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 007ab0d0 to 007ab0d7 has its CatchHandler @ 007ab1cc */
  puVar6 = (undefined8 *)operator_new(0x1a0);
  puVar2 = puVar6 + 4;
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_0097fff0;
                    /* try { // try from 007ab0f0 to 007ab107 has its CatchHandler @ 007ab1b4 */
  FUN_007abdcc(puVar2,param_3,&local_70,param_2 + 8,param_2);
  plVar1 = local_70;
  *param_1 = (long)puVar2;
  param_1[1] = (long)puVar6;
  local_90 = puVar2;
  local_88 = puVar6;
  FUN_00757d00(1,puVar6 + 2);
                    /* try { // try from 007ab120 to 007ab12b has its CatchHandler @ 007ab194 */
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


// ===== 007ab21c  FUN_007ab21c =====

void FUN_007ab21c(void)

{
  return;
}


// ===== 007ab220  FUN_007ab220 =====

void FUN_007ab220(long param_1)

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


// ===== 007ab270  FUN_007ab270 =====

void FUN_007ab270(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  *puVar6 = &PTR_FUN_009830a0;
                    /* try { // try from 007ab2b8 to 007ab2c7 has its CatchHandler @ 007ab360 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
            ((YogaLayoutableShadowNode *)(puVar6 + 3),param_3,param_4,uVar8);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_009830f0;
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


// ===== 007ab37c  FUN_007ab37c =====

void FUN_007ab37c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009830a0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 007ab38c  FUN_007ab38c =====

void FUN_007ab38c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009830a0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 007ab3bc  FUN_007ab3bc =====

void FUN_007ab3bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007ab3c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 007ab3c8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007ab3cc  FUN_007ab3cc =====

void FUN_007ab3cc(long *param_1)

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


// ===== 007ab48c  FUN_007ab48c =====

void FUN_007ab48c(long param_1)

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


// ===== 007ab4f4  FUN_007ab4f4 =====

bool FUN_007ab4f4(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 007ab50c  FUN_007ab50c =====

bool FUN_007ab50c(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 007ab524  FUN_007ab524 =====

void FUN_007ab524(undefined8 *param_1,undefined8 param_2,ShadowNode *param_3,
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
  *puVar6 = &PTR_FUN_009830a0;
                    /* try { // try from 007ab564 to 007ab573 has its CatchHandler @ 007ab60c */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
            ((YogaLayoutableShadowNode *)(puVar6 + 3),param_3,param_4);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_009830f0;
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


// ===== 007ab628  FUN_007ab628 =====

void FUN_007ab628(undefined8 *param_1,PropsParserContext *param_2,RawProps *param_3,long *param_4)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  DCDPortalViewProps *pDVar4;
  undefined1 uStack_59;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pDVar4 = (DCDPortalViewProps *)*param_4;
  if (pDVar4 == (DCDPortalViewProps *)0x0) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_26DCDPortalViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_18DCDPortalViewPropsENS0_25DCDPortalViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ddc0
         & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_26DCDPortalViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_18DCDPortalViewPropsENS0_25DCDPortalViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ddc0
                                   ), iVar2 != 0)) {
                    /* try { // try from 007ab6f4 to 007ab703 has its CatchHandler @ 007ab730 */
      FUN_007ab99c(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_26DCDPortalViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_18DCDPortalViewPropsENS0_25DCDPortalViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ddb8
                   ,&uStack_59);
      __cxa_atexit(FUN_007ab94c,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_26DCDPortalViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_18DCDPortalViewPropsENS0_25DCDPortalViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ddb8
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_26DCDPortalViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_18DCDPortalViewPropsENS0_25DCDPortalViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ddc0
                         );
    }
    pDVar4 = *(DCDPortalViewProps **)
              PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_26DCDPortalViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_18DCDPortalViewPropsENS0_25DCDPortalViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ddb8
    ;
  }
  puVar3 = (undefined8 *)operator_new(0x700);
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_00983208;
                    /* try { // try from 007ab6a0 to 007ab6b3 has its CatchHandler @ 007ab744 */
  facebook::react::DCDPortalViewProps::DCDPortalViewProps
            ((DCDPortalViewProps *)(puVar3 + 3),param_2,pDVar4,param_3);
  *param_1 = (DCDPortalViewProps *)(puVar3 + 3);
  param_1[1] = puVar3;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007ab774  FUN_007ab774 =====

void FUN_007ab774(undefined8 *param_1,undefined8 param_2,long *param_3)

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
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_26DCDPortalViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_18DCDPortalViewPropsENS0_25DCDPortalViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ddc0
         & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_26DCDPortalViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_18DCDPortalViewPropsENS0_25DCDPortalViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ddc0
                                   ), iVar2 != 0)) {
                    /* try { // try from 007ab858 to 007ab867 has its CatchHandler @ 007ab894 */
      FUN_007ab99c(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_26DCDPortalViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_18DCDPortalViewPropsENS0_25DCDPortalViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ddb8
                   ,local_70);
      __cxa_atexit(FUN_007ab94c,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_26DCDPortalViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_18DCDPortalViewPropsENS0_25DCDPortalViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ddb8
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_26DCDPortalViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_18DCDPortalViewPropsENS0_25DCDPortalViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ddc0
                         );
    }
    local_50 = (long *)0x0;
                    /* try { // try from 007ab7e4 to 007ab7f7 has its CatchHandler @ 007ab8a8 */
    facebook::react::Props::facebook::react::Props::initializeDynamicProps
              (uVar5,*(undefined8 *)
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_26DCDPortalViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_18DCDPortalViewPropsENS0_25DCDPortalViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ddb8
               ,param_2,local_70);
  }
  else {
    local_50 = (long *)0x0;
                    /* try { // try from 007ab7a8 to 007ab7bf has its CatchHandler @ 007ab8ac */
    facebook::react::Props::facebook::react::Props::initializeDynamicProps
              (uVar5,*param_3,param_2,local_70);
  }
  if (local_50 == local_70) {
    lVar4 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007ab824;
    lVar4 = 5;
    plVar3 = local_50;
  }
  (**(code **)(*plVar3 + lVar4 * 8))();
LAB_007ab824:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007ab8fc  FUN_007ab8fc =====

void FUN_007ab8fc(long param_1)

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


// ===== 007ab94c  FUN_007ab94c =====

void FUN_007ab94c(long param_1)

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


// ===== 007ab99c  FUN_007ab99c =====

void FUN_007ab99c(undefined8 *param_1)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x700);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_009831b8;
  memset(__s,0,0x6e8);
                    /* try { // try from 007ab9e0 to 007ab9f3 has its CatchHandler @ 007aba60 */
  FUN_00788b10(__s,PTR_PTR_0099e060 + 0x10);
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
  puVar1 = PTR_vtable_0099e058;
  *(undefined4 *)(puVar2 + 0xd9) = 0;
  *(undefined2 *)((long)puVar2 + 0x6cc) = 0;
  puVar2[0xdf] = 0;
  puVar2[3] = puVar1 + 0x20;
  *param_1 = __s;
  param_1[1] = puVar2;
  return;
}


// ===== 007aba7c  FUN_007aba7c =====

void FUN_007aba7c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009831b8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 007aba8c  FUN_007aba8c =====

void FUN_007aba8c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009831b8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 007ababc  FUN_007ababc =====

void FUN_007ababc(long param_1)

{
  FUN_0078917c(param_1 + 0x18,PTR_PTR_0099e060 + 8);
  return;
}


// ===== 007abad0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007abad4  FUN_007abad4 =====

void FUN_007abad4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00983208;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 007abae4  FUN_007abae4 =====

void FUN_007abae4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00983208;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 007abb14  FUN_007abb14 =====

void FUN_007abb14(long param_1)

{
  FUN_0078917c(param_1 + 0x18,PTR_PTR_0099e060 + 8);
  return;
}


// ===== 007abb28  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007abb2c  FUN_007abb2c =====

void FUN_007abb2c(long param_1)

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


// ===== 007abb7c  FUN_007abb7c =====

void FUN_007abb7c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00983258;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 007abb8c  FUN_007abb8c =====

void FUN_007abb8c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00983258;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 007abbbc  FUN_007abbbc =====

void FUN_007abbbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007abbc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 007abbc8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007abbcc  FUN_007abbcc =====

EventEmitter * FUN_007abbcc(EventEmitter *param_1,undefined8 *param_2,undefined8 *param_3)

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
                    /* try { // try from 007abc14 to 007abc23 has its CatchHandler @ 007abce8 */
  facebook::react::EventEmitter::EventEmitter(param_1,&local_50,&local_60);
  *(undefined ***)param_1 = &PTR_FUN_0097ff10;
                    /* try { // try from 007abc30 to 007abc37 has its CatchHandler @ 007abcd8 */
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
  *(undefined ***)param_1 = &PTR_FUN_009832a8;
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


// ===== 007abd1c  FUN_007abd1c =====

void FUN_007abd1c(undefined8 *param_1)

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


// ===== 007abdcc  FUN_007abdcc =====

ShadowNodeFamily *
FUN_007abdcc(ShadowNodeFamily *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
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
                    /* try { // try from 007abe30 to 007abe47 has its CatchHandler @ 007abeb0 */
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


// ===== 007abee8  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_25DCDQRScannerComponentNameEEEENS0_17DCDQRScannerPropsENS0_24DCDQRScannerEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE =====

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_25DCDQRScannerComponentNameEEEENS0_17DCDQRScannerPropsENS0_24DCDQRScannerEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE
               (undefined8 *param_1)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_007abf3c(&local_30);
  *param_1 = local_30;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007abf3c  FUN_007abf3c =====

void FUN_007abf3c(undefined8 *param_1,ComponentDescriptorParameters *param_2)

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
                    /* try { // try from 007abf80 to 007abf8b has its CatchHandler @ 007abff8 */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_90);
  *(undefined ***)this = &PTR_FUN_009832e0;
  FUN_007ac028(this + 0x38);
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


// ===== 007ac028  FUN_007ac028 =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007ac028(undefined8 param_1)

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
                    /* try { // try from 007ac0ac to 007ac0b7 has its CatchHandler @ 007ac6ac */
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
  local_fa0 = PTR_construction_vtable_0099e230 + 0x20;
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
  puVar6 = PTR_PTR_0099e078;
  puVar5 = PTR_vtable_0099e070;
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
  local_fa0 = PTR_vtable_0099e070 + 0x20;
  local_70 = (long *)0x0;
                    /* try { // try from 007ac4a0 to 007ac4c7 has its CatchHandler @ 007ac670 */
  facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)local_8c0,(PropsParserContext *)(PTR_PTR_0099e078 + 8),
             (HostPlatformViewProps *)local_fb0,(RawProps *)&local_fa0,(function *)&local_120);
  if (local_70 == &local_90) {
    lVar7 = 4;
    plVar8 = &local_90;
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_007ac4f4;
    lVar7 = 5;
    plVar8 = local_70;
  }
  (**(code **)(*plVar8 + lVar7 * 8))();
LAB_007ac4f4:
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
                    /* try { // try from 007ac600 to 007ac60b has its CatchHandler @ 007ac6b8 */
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


// ===== 007ac6bc  FUN_007ac6bc =====

void FUN_007ac6bc(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 007ac6e0  FUN_007ac6e0 =====

undefined * FUN_007ac6e0(void)

{
  return PTR_DCDQRScannerComponentName_0099e068;
}


// ===== 007ac6ec  FUN_007ac6ec =====

undefined * FUN_007ac6ec(void)

{
  return PTR_DCDQRScannerComponentName_0099e068;
}


// ===== 007ac6f8  FUN_007ac6f8 =====

undefined8 FUN_007ac6f8(void)

{
  return 0x61;
}


// ===== 007ac700  FUN_007ac700 =====

void FUN_007ac700(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_007acef0(&local_60,&uStack_49,param_3,param_4,&local_64);
                    /* try { // try from 007ac768 to 007ac76f has its CatchHandler @ 007ac7a0 */
  (**(code **)(*param_2 + 0x60))(param_2,local_60);
  param_1[1] = uStack_58;
  *param_1 = local_60;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007ac7c8  FUN_007ac7c8 =====

void FUN_007ac7c8(undefined8 *param_1,long *param_2,shared_ptr *param_3,undefined8 param_4)

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
  FUN_007ad1a4(&local_60,&local_70);
                    /* try { // try from 007ac814 to 007ac81f has its CatchHandler @ 007ac8cc */
  (**(code **)(*local_60 + 0x10))(local_60,param_3,param_4);
  local_70 = local_60;
  local_68 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    FUN_00757d00(1,plStack_58 + 1);
  }
                    /* try { // try from 007ac838 to 007ac847 has its CatchHandler @ 007ac8bc */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_70);
  plVar2 = local_68;
  if ((local_68 != (long *)0x0) &&
     (lVar3 = FUN_00757990(0xffffffffffffffff,local_68 + 1), lVar3 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 007ac884 to 007ac88b has its CatchHandler @ 007ac8cc */
  (**(code **)(*param_2 + 0x60))(param_2,local_60);
  param_1[1] = plStack_58;
  *param_1 = local_60;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007ac8f4  FUN_007ac8f4 =====

void FUN_007ac8f4(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x007ac904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 007ac908  FUN_007ac908 =====

void FUN_007ac908(undefined8 *param_1,long param_2,undefined8 param_3,long *param_4,
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
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25DCDQRScannerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17DCDQRScannerPropsENS0_24DCDQRScannerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ddd0
         & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25DCDQRScannerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17DCDQRScannerPropsENS0_24DCDQRScannerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ddd0
                                   ), iVar7 != 0)) {
                    /* try { // try from 007acbd4 to 007acbe3 has its CatchHandler @ 007acc10 */
      FUN_007ad6a0(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25DCDQRScannerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17DCDQRScannerPropsENS0_24DCDQRScannerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ddc8
                   ,adStack_d0);
      __cxa_atexit(FUN_007ad650,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25DCDQRScannerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17DCDQRScannerPropsENS0_24DCDQRScannerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ddc8
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25DCDQRScannerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17DCDQRScannerPropsENS0_24DCDQRScannerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ddd0
                         );
    }
    lVar10 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25DCDQRScannerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17DCDQRScannerPropsENS0_24DCDQRScannerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ddc8
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25DCDQRScannerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17DCDQRScannerPropsENS0_24DCDQRScannerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ddc8
    ;
    param_1[1] = lVar10;
    if (lVar10 != 0) {
      FUN_00757d00(1,lVar10 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    FUN_007ad2a8(&local_f0,param_3,param_5,param_4);
                    /* try { // try from 007ac9b0 to 007ac9c3 has its CatchHandler @ 007acc44 */
    uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if (((uVar8 & 1) == 0) ||
       ((uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar8 & 1) == 0 ||
        (uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enablePropsUpdateReconciliationAndroid(), (uVar8 & 1) == 0)))) {
LAB_007ac9ec:
      local_100 = local_f0;
      local_f8 = plStack_e8;
      if (plStack_e8 != (long *)0x0) {
        FUN_00757d00(1,plStack_e8 + 1);
      }
                    /* try { // try from 007aca04 to 007aca13 has its CatchHandler @ 007acc34 */
      FUN_007ad478(&local_100,param_5,param_4);
      plVar4 = local_f8;
      if ((local_f8 != (long *)0x0) &&
         (lVar10 = FUN_00757990(0xffffffffffffffff,local_f8 + 1), lVar10 == 0)) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 007ac9d4 to 007ac9db has its CatchHandler @ 007acc24 */
      pcVar9 = (char *)(**(code **)(*local_f0 + 0x10))();
      iVar7 = strcmp(PTR_DCDQRScannerComponentName_0099e068,pcVar9);
      if (iVar7 != 0) goto LAB_007ac9ec;
      bVar3 = false;
    }
                    /* try { // try from 007aca48 to 007aca4b has its CatchHandler @ 007acc44 */
    uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar8 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 007aca58 to 007aca73 has its CatchHandler @ 007acc30 */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(local_f0 + 4));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_f0;
      plVar5 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 007acbb4 to 007acbc3 has its CatchHandler @ 007acc28 */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_007acc90;
      }
      for (; local_f0 = plVar4, plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (*(int *)(plVar5 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 007acb94 to 007acba3 has its CatchHandler @ 007acc50 */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_007acc90;
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
                    /* try { // try from 007acaf4 to 007acaff has its CatchHandler @ 007acc58 */
        folly::dynamic::dynamic(adStack_d0,(dynamic *)(plVar5 + 8));
        local_a0 = 0;
                    /* try { // try from 007acb04 to 007acb1b has its CatchHandler @ 007acc5c */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (plVar4,param_3,uVar1,pcVar9,adStack_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 007acb2c to 007acb37 has its CatchHandler @ 007acc4c */
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
LAB_007acc90:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007acc94  FUN_007acc94 =====

void FUN_007acc94(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 007acc9c  FUN_007acc9c =====

void FUN_007acc9c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 007acca4  FUN_007acca4 =====

void FUN_007acca4(long *param_1,long param_2,long param_3)

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
                    /* try { // try from 007accec to 007accf3 has its CatchHandler @ 007ace74 */
  plVar4 = (long *)operator_new(0x68);
  plVar1 = plVar4 + 3;
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_00983528;
                    /* try { // try from 007acd0c to 007acd1b has its CatchHandler @ 007ace5c */
  FUN_007ad8cc(plVar1,auStack_80,param_2 + 8);
  local_70 = plVar1;
  local_68 = plVar4;
  if ((local_78 != (long *)0x0) &&
     (lVar5 = FUN_00757990(0xffffffffffffffff,local_78 + 1), lVar5 == 0)) {
    (**(code **)(*local_78 + 0x10))(local_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 007acd50 to 007acd57 has its CatchHandler @ 007ace4c */
  puVar6 = (undefined8 *)operator_new(0x1a0);
  puVar2 = puVar6 + 4;
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_0097fff0;
                    /* try { // try from 007acd70 to 007acd87 has its CatchHandler @ 007ace34 */
  FUN_007adacc(puVar2,param_3,&local_70,param_2 + 8,param_2);
  plVar1 = local_70;
  *param_1 = (long)puVar2;
  param_1[1] = (long)puVar6;
  local_90 = puVar2;
  local_88 = puVar6;
  FUN_00757d00(1,puVar6 + 2);
                    /* try { // try from 007acda0 to 007acdab has its CatchHandler @ 007ace14 */
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


// ===== 007ace9c  FUN_007ace9c =====

void FUN_007ace9c(void)

{
  return;
}


// ===== 007acea0  FUN_007acea0 =====

void FUN_007acea0(long param_1)

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


// ===== 007acef0  FUN_007acef0 =====

void FUN_007acef0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  *puVar6 = &PTR_FUN_00983370;
                    /* try { // try from 007acf38 to 007acf47 has its CatchHandler @ 007acfe0 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
            ((YogaLayoutableShadowNode *)(puVar6 + 3),param_3,param_4,uVar8);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_009833c0;
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


// ===== 007acffc  FUN_007acffc =====

void FUN_007acffc(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00983370;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 007ad00c  FUN_007ad00c =====

void FUN_007ad00c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00983370;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 007ad03c  FUN_007ad03c =====

void FUN_007ad03c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007ad044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 007ad048  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007ad04c  FUN_007ad04c =====

void FUN_007ad04c(long *param_1)

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


// ===== 007ad10c  FUN_007ad10c =====

void FUN_007ad10c(long param_1)

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


// ===== 007ad174  FUN_007ad174 =====

bool FUN_007ad174(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 007ad18c  FUN_007ad18c =====

bool FUN_007ad18c(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 007ad1a4  FUN_007ad1a4 =====

void FUN_007ad1a4(undefined8 *param_1,undefined8 param_2,ShadowNode *param_3,
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
  *puVar6 = &PTR_FUN_00983370;
                    /* try { // try from 007ad1e4 to 007ad1f3 has its CatchHandler @ 007ad28c */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
            ((YogaLayoutableShadowNode *)(puVar6 + 3),param_3,param_4);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_009833c0;
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


// ===== 007ad2a8  FUN_007ad2a8 =====

void FUN_007ad2a8(undefined8 *param_1,HostPlatformViewProps *param_2,function *param_3,long *param_4
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
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25DCDQRScannerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17DCDQRScannerPropsENS0_24DCDQRScannerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ddd0
         & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25DCDQRScannerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17DCDQRScannerPropsENS0_24DCDQRScannerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ddd0
                                   ), iVar3 != 0)) {
                    /* try { // try from 007ad3c8 to 007ad3d7 has its CatchHandler @ 007ad404 */
      FUN_007ad6a0(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25DCDQRScannerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17DCDQRScannerPropsENS0_24DCDQRScannerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ddc8
                   ,local_90);
      __cxa_atexit(FUN_007ad650,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25DCDQRScannerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17DCDQRScannerPropsENS0_24DCDQRScannerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ddc8
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25DCDQRScannerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17DCDQRScannerPropsENS0_24DCDQRScannerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ddd0
                         );
    }
    pRVar7 = *(RawProps **)
              PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25DCDQRScannerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17DCDQRScannerPropsENS0_24DCDQRScannerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ddc8
    ;
  }
  puVar4 = (undefined8 *)operator_new(0x6f8);
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_009834d8;
  local_70 = (long *)0x0;
                    /* try { // try from 007ad324 to 007ad34b has its CatchHandler @ 007ad418 */
  facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)(puVar4 + 3),(PropsParserContext *)(PTR_PTR_0099e078 + 8),
             param_2,pRVar7,param_3);
  if (local_70 == local_90) {
    lVar6 = 4;
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_007ad378;
    lVar6 = 5;
    plVar5 = local_70;
  }
  (**(code **)(*plVar5 + lVar6 * 8))();
LAB_007ad378:
  puVar2 = PTR_vtable_0099e070;
  *param_1 = (HostPlatformViewProps *)(puVar4 + 3);
  param_1[1] = puVar4;
  puVar4[3] = puVar2 + 0x20;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007ad478  FUN_007ad478 =====

void FUN_007ad478(undefined8 *param_1,undefined8 param_2,long *param_3)

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
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25DCDQRScannerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17DCDQRScannerPropsENS0_24DCDQRScannerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ddd0
         & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25DCDQRScannerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17DCDQRScannerPropsENS0_24DCDQRScannerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ddd0
                                   ), iVar2 != 0)) {
                    /* try { // try from 007ad55c to 007ad56b has its CatchHandler @ 007ad598 */
      FUN_007ad6a0(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25DCDQRScannerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17DCDQRScannerPropsENS0_24DCDQRScannerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ddc8
                   ,local_70);
      __cxa_atexit(FUN_007ad650,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25DCDQRScannerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17DCDQRScannerPropsENS0_24DCDQRScannerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ddc8
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25DCDQRScannerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17DCDQRScannerPropsENS0_24DCDQRScannerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ddd0
                         );
    }
    local_50 = (long *)0x0;
                    /* try { // try from 007ad4e8 to 007ad4fb has its CatchHandler @ 007ad5ac */
    facebook::react::Props::facebook::react::Props::initializeDynamicProps
              (uVar5,*(undefined8 *)
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25DCDQRScannerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_17DCDQRScannerPropsENS0_24DCDQRScannerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ddc8
               ,param_2,local_70);
  }
  else {
    local_50 = (long *)0x0;
                    /* try { // try from 007ad4ac to 007ad4c3 has its CatchHandler @ 007ad5b0 */
    facebook::react::Props::facebook::react::Props::initializeDynamicProps
              (uVar5,*param_3,param_2,local_70);
  }
  if (local_50 == local_70) {
    lVar4 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007ad528;
    lVar4 = 5;
    plVar3 = local_50;
  }
  (**(code **)(*plVar3 + lVar4 * 8))();
LAB_007ad528:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007ad600  FUN_007ad600 =====

void FUN_007ad600(long param_1)

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


// ===== 007ad650  FUN_007ad650 =====

void FUN_007ad650(long param_1)

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


// ===== 007ad6a0  FUN_007ad6a0 =====

void FUN_007ad6a0(undefined8 *param_1)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x6f8);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_00983488;
  memset(__s,0,0x6e0);
                    /* try { // try from 007ad6e4 to 007ad6f7 has its CatchHandler @ 007ad760 */
  FUN_00788b10(__s,PTR_PTR_0099e078 + 0x10);
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
  puVar1 = PTR_vtable_0099e070;
  *(undefined4 *)(puVar2 + 0xd9) = 0;
  *(undefined2 *)((long)puVar2 + 0x6cc) = 0;
  *param_1 = __s;
  param_1[1] = puVar2;
  puVar2[3] = puVar1 + 0x20;
  return;
}


// ===== 007ad77c  FUN_007ad77c =====

void FUN_007ad77c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00983488;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 007ad78c  FUN_007ad78c =====

void FUN_007ad78c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00983488;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 007ad7bc  FUN_007ad7bc =====

void FUN_007ad7bc(long param_1)

{
  FUN_0078917c(param_1 + 0x18,PTR_PTR_0099e078 + 8);
  return;
}


// ===== 007ad7d0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007ad7d4  FUN_007ad7d4 =====

void FUN_007ad7d4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009834d8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 007ad7e4  FUN_007ad7e4 =====

void FUN_007ad7e4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009834d8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 007ad814  FUN_007ad814 =====

void FUN_007ad814(long param_1)

{
  FUN_0078917c(param_1 + 0x18,PTR_PTR_0099e078 + 8);
  return;
}


// ===== 007ad828  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007ad82c  FUN_007ad82c =====

void FUN_007ad82c(long param_1)

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


// ===== 007ad87c  FUN_007ad87c =====

void FUN_007ad87c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00983528;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 007ad88c  FUN_007ad88c =====

void FUN_007ad88c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00983528;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 007ad8bc  FUN_007ad8bc =====

void FUN_007ad8bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007ad8c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 007ad8c8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007ad8cc  FUN_007ad8cc =====

EventEmitter * FUN_007ad8cc(EventEmitter *param_1,undefined8 *param_2,undefined8 *param_3)

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
                    /* try { // try from 007ad914 to 007ad923 has its CatchHandler @ 007ad9e8 */
  facebook::react::EventEmitter::EventEmitter(param_1,&local_50,&local_60);
  *(undefined ***)param_1 = &PTR_FUN_0097ff10;
                    /* try { // try from 007ad930 to 007ad937 has its CatchHandler @ 007ad9d8 */
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
  *(undefined ***)param_1 = &PTR_FUN_00983578;
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


// ===== 007ada1c  FUN_007ada1c =====

void FUN_007ada1c(undefined8 *param_1)

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


// ===== 007adacc  FUN_007adacc =====

ShadowNodeFamily *
FUN_007adacc(ShadowNodeFamily *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
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
                    /* try { // try from 007adb30 to 007adb47 has its CatchHandler @ 007adbb0 */
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


// ===== 007adbe8  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_38SelectActionComponentViewComponentNameEEEENS0_30SelectActionComponentViewPropsENS0_37SelectActionComponentViewEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE =====

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_38SelectActionComponentViewComponentNameEEEENS0_30SelectActionComponentViewPropsENS0_37SelectActionComponentViewEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE
               (undefined8 *param_1)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_007adc3c(&local_30);
  *param_1 = local_30;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007adc3c  FUN_007adc3c =====

void FUN_007adc3c(undefined8 *param_1,ComponentDescriptorParameters *param_2)

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
                    /* try { // try from 007adc80 to 007adc8b has its CatchHandler @ 007adcf8 */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_90);
  *(undefined ***)this = &PTR_FUN_009835b0;
  FUN_007add28(this + 0x38);
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


// ===== 007add28  FUN_007add28 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007add28(undefined8 param_1)

{
  byte bVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  void *pvVar8;
  undefined4 local_fd0 [2];
  undefined8 *local_fc8;
  undefined *local_fc0;
  undefined8 uStack_fb8;
  undefined8 local_fb0;
  undefined8 uStack_fa8;
  undefined4 local_fa0 [2];
  undefined8 local_f98;
  undefined8 uStack_f90;
  undefined8 local_f88;
  undefined8 uStack_f80;
  undefined4 local_f78;
  undefined4 local_f70;
  undefined1 local_f6c;
  undefined8 local_f6b;
  undefined8 local_f63;
  undefined8 uStack_f5b;
  undefined8 local_f53;
  undefined8 uStack_f4b;
  undefined8 local_f43;
  undefined8 uStack_f3b;
  undefined8 local_f33;
  undefined6 uStack_f2b;
  undefined2 uStack_f25;
  undefined6 uStack_f23;
  undefined8 uStack_f1d;
  undefined4 local_f15;
  undefined8 local_f11;
  undefined1 local_f09;
  undefined1 uStack_f08;
  undefined7 uStack_f07;
  undefined8 uStack_f00;
  undefined8 uStack_ef8;
  undefined8 uStack_ef0;
  undefined8 local_ee8;
  undefined8 uStack_ee0;
  undefined8 local_ed8;
  undefined8 uStack_ed0;
  undefined8 local_ec8;
  undefined8 uStack_ec0;
  undefined8 local_eb8;
  undefined8 uStack_eb0;
  undefined8 uStack_ea8;
  undefined8 local_ea0;
  undefined8 local_e98;
  undefined8 uStack_e90;
  undefined8 local_e88;
  undefined4 uStack_e80;
  undefined4 uStack_e7c;
  undefined4 uStack_e78;
  undefined4 uStack_e74;
  undefined4 uStack_e70;
  undefined4 uStack_e6c;
  undefined8 local_e68;
  undefined8 uStack_e60;
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
  undefined4 local_de8;
  undefined1 local_de4;
  undefined4 local_de0;
  undefined1 local_ddc;
  undefined1 local_dd8;
  undefined1 local_dd4;
  undefined1 local_dc8;
  undefined8 local_dc0;
  undefined8 uStack_db8;
  undefined8 uStack_db0;
  undefined8 uStack_da8;
  undefined8 local_da0;
  undefined8 uStack_d98;
  undefined8 uStack_d90;
  undefined1 uStack_d88;
  undefined7 local_d87;
  undefined1 uStack_d80;
  undefined8 uStack_d7f;
  undefined8 local_d74;
  undefined8 uStack_d6c;
  undefined8 uStack_d64;
  undefined8 uStack_d5c;
  undefined8 local_d54;
  undefined8 uStack_d4c;
  undefined8 uStack_d44;
  undefined8 uStack_d3c;
  undefined8 local_d34;
  undefined8 uStack_d2c;
  undefined8 uStack_d24;
  undefined5 uStack_d1c;
  undefined3 local_d17;
  undefined5 uStack_d14;
  undefined1 local_d0c;
  undefined1 local_d08;
  undefined1 local_d04;
  undefined1 local_d00;
  undefined1 local_cfc;
  undefined1 local_cf8;
  undefined1 local_ce0;
  undefined8 local_cd8;
  undefined8 uStack_cd0;
  undefined8 local_cc8;
  undefined4 local_cc0;
  undefined1 local_cbc;
  undefined4 local_cbb;
  undefined1 local_cb7;
  undefined1 local_cb6;
  undefined8 local_cb0;
  undefined8 uStack_ca8;
  undefined8 uStack_ca0;
  undefined8 uStack_c98;
  undefined8 local_c90;
  undefined7 uStack_c88;
  undefined4 uStack_c81;
  undefined8 local_c7c;
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
  undefined1 local_c00;
  undefined1 local_bfc;
  undefined1 local_bf4;
  undefined1 local_bf0;
  undefined1 local_be8;
  undefined1 local_be4;
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
  undefined1 local_b88;
  undefined1 local_b84;
  undefined1 local_b80;
  undefined1 local_b7c;
  undefined8 local_b78;
  undefined8 uStack_b70;
  undefined8 local_b68;
  undefined8 uStack_b60;
  undefined8 uStack_b58;
  undefined8 uStack_b50;
  undefined2 local_b48;
  undefined8 local_b44;
  undefined1 local_b3c;
  undefined8 local_b38;
  undefined8 local_b30;
  undefined8 uStack_b28;
  undefined1 local_b20;
  undefined8 local_b18;
  undefined8 uStack_b10;
  undefined8 uStack_b08;
  undefined8 uStack_b00;
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
  undefined8 local_a68;
  undefined8 uStack_a60;
  undefined8 local_a58;
  undefined8 uStack_a50;
  undefined8 local_a48;
  undefined8 uStack_a40;
  undefined8 local_a38;
  undefined8 uStack_a30;
  undefined8 local_a28;
  undefined6 uStack_a20;
  undefined2 uStack_a1a;
  undefined6 uStack_a18;
  undefined1 local_a10;
  undefined1 local_a0c;
  undefined1 local_a08;
  undefined8 local_a04;
  undefined8 uStack_9fc;
  undefined1 local_9f4;
  undefined8 local_9f0;
  undefined2 local_9e8;
  undefined1 local_9e6;
  undefined4 local_9e4;
  undefined1 local_9e0;
  undefined1 local_980;
  undefined1 local_978;
  undefined1 local_918;
  undefined4 local_910;
  undefined2 local_90c;
  undefined1 local_908;
  undefined1 local_904;
  undefined1 local_900;
  undefined1 local_8fc;
  undefined1 local_8f8;
  undefined1 local_8f4;
  undefined1 local_8f0;
  undefined1 local_8ec;
  undefined1 local_8e8;
  undefined1 local_8e4;
  ulong local_8e0;
  undefined8 uStack_8d8;
  void *local_8d0;
  SelectActionComponentViewProps aSStack_8c8 [1760];
  byte local_1e8;
  void *local_1d8;
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
                    /* try { // try from 007addb0 to 007addbb has its CatchHandler @ 007ae354 */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1d0);
  local_120 = CONCAT44(local_120._4_4_,0x3f800000);
  local_fd0[0] = 0xffffffff;
  uStack_128 = 0;
  local_130 = (void *)0x0;
  uStack_138 = 0;
  local_140 = (void *)0x0;
  local_fc8 = &local_1d0;
  facebook::react::RawProps::facebook::react::RawProps::parse(&local_118,param_1);
  memset(local_fa0,0,0x6d8);
  local_88[0] = 5;
  local_70 = 0;
  local_fc0 = PTR_construction_vtable_0099e238 + 0x20;
  local_fa0[0] = 5;
  uStack_fa8 = 0;
  local_fb0 = 0;
  uStack_fb8 = 0;
  local_68 = 0;
  uStack_60 = 0x3f800000;
  uStack_78 = 0;
  local_80 = 0;
  uStack_f90 = 0;
  local_f98 = 0;
  uStack_f80 = 0;
  local_f88 = 0;
  local_f78 = 0x3f800000;
  folly::dynamic::folly::dynamic::destroy(local_88);
  local_f6c = 0;
  local_f11 = 0;
  uStack_a30 = _UNK_00470a7c;
  local_a38 = _DAT_00470a74;
  local_f6b = _s__00375408;
  uStack_b28 = _UNK_00371598;
  local_b30 = _DAT_00371590;
  uStack_a40 = _UNK_00470a6c;
  local_a48 = _DAT_00470a64;
  local_e54 = 0;
  uStack_a50 = _UNK_00470a5c;
  local_a58 = _DAT_00470a54;
  uStack_a60 = _UNK_00470a4c;
  local_a68 = _DAT_00470a44;
  uStack_a18 = 0;
  local_e4c = 0;
  uStack_e80 = 0;
  local_e88 = 0;
  uStack_e6c = 0;
  uStack_e90 = 0;
  local_e98 = 0;
  uStack_a20 = 0;
  uStack_a1a = 0;
  local_a28 = 0;
  local_f70 = 0x10410710;
  local_f15 = 0x40004;
  uStack_e74 = 0;
  uStack_e70 = 0;
  uStack_e7c = 0;
  uStack_e78 = 0;
  uStack_e60 = 0;
  local_e68 = 0;
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
  local_de8 = 0x7fc00000;
  local_de0 = 0x7fc00000;
  uStack_d7f = 0;
  uStack_d80 = 0;
  uStack_d6c = 0;
  local_d74 = 0;
  uStack_d5c = 0;
  uStack_d64 = 0;
  uStack_d4c = 0;
  local_d54 = 0;
  uStack_d3c = 0;
  uStack_d44 = 0;
  uStack_d2c = 0;
  local_d34 = 0;
  uStack_d1c = 0;
  uStack_d24 = 0;
  local_d17 = 0;
  uStack_d14 = 0;
  local_cbc = 1;
  local_cbb = 0;
  local_cb6 = 0x23;
  local_c7c = 0x3f800000;
  uStack_b60 = 0;
  local_b68 = 0;
  uStack_b50 = 0;
  uStack_b58 = 0;
  uStack_b70 = 0;
  local_b78 = 0;
  local_b44 = 0;
  uStack_b10 = 0;
  local_b18 = 0;
  uStack_b00 = 0;
  uStack_b08 = 0;
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
  uStack_f07 = 0;
  uStack_f5b = 0;
  local_f63 = 0;
  uStack_f4b = 0;
  local_f53 = 0;
  uStack_f3b = 0;
  local_f43 = 0;
  uStack_f2b = 0;
  local_f33 = 0;
  uStack_f1d = 0;
  uStack_f25 = 0;
  uStack_f23 = 0;
  local_f09 = 0;
  uStack_f08 = 0;
  uStack_ef8 = 0;
  uStack_f00 = 0;
  local_ee8 = 0;
  uStack_ef0 = 0;
  local_ed8 = 0;
  uStack_ee0 = 0;
  local_ec8 = 0;
  uStack_ed0 = 0;
  local_eb8 = 0;
  uStack_ec0 = 0;
  uStack_ea8 = 0;
  uStack_eb0 = 0;
  local_ea0 = 0;
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
  local_de4 = 0;
  local_ddc = 0;
  local_dd8 = 0;
  local_dd4 = 0;
  local_dc8 = 0;
  local_d0c = 0;
  local_d08 = 0;
  local_d04 = 0;
  local_d00 = 0;
  local_cfc = 0;
  local_cf8 = 0;
  local_ce0 = 0;
  uStack_db8 = 0;
  local_dc0 = 0;
  uStack_da8 = 0;
  uStack_db0 = 0;
  uStack_d98 = 0;
  local_da0 = 0;
  uStack_d88 = 0;
  local_d87 = 0;
  uStack_d90 = 0;
  uStack_cd0 = 0;
  local_cd8 = 0;
  local_cc8 = 0;
  local_cc0 = 0;
  local_cb7 = 0;
  uStack_ca8 = 0;
  local_cb0 = 0;
  uStack_c98 = 0;
  uStack_ca0 = 0;
  uStack_c88 = 0;
  uStack_c81 = 0;
  local_c90 = 0;
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
  local_c00 = 0;
  local_bfc = 0;
  local_bf4 = 0;
  local_bf0 = 0;
  local_be8 = 0;
  local_be4 = 0;
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
  local_b88 = 0;
  local_b84 = 0;
  local_b80 = 0;
  local_b7c = 0;
  local_b38 = 0;
  local_b48 = 0;
  local_b3c = 0;
  local_b20 = 0;
  local_a10 = 0;
  local_a0c = 0;
  local_a08 = 0;
  local_9f0 = 0;
  uStack_9fc = 0;
  local_a04 = 0;
  local_9f4 = 0;
  local_9e8 = 0x101;
  local_9e6 = 0;
  local_9e4 = 0;
  local_9e0 = 0;
  local_980 = 0;
  local_978 = 0;
  local_918 = 0;
  local_908 = 0;
  local_904 = 0;
  local_900 = 0;
  local_8fc = 0;
  local_8f8 = 0;
  local_8f4 = 0;
  local_8f0 = 0;
  local_8ec = 0;
  local_8e8 = 0;
  local_8e4 = 0;
  local_90c = 0;
  local_910 = 0;
  local_fc0 = PTR_vtable_0099e088 + 0x20;
  local_8d0 = (void *)0x0;
  uStack_8d8 = 0;
  local_8e0 = 0;
                    /* try { // try from 007ae1a8 to 007ae1bb has its CatchHandler @ 007ae354 */
  facebook::react::SelectActionComponentViewProps::SelectActionComponentViewProps
            (aSStack_8c8,(PropsParserContext *)local_fd0,
             (SelectActionComponentViewProps *)&local_fc0,(RawProps *)&local_118);
  if ((local_1e8 & 1) != 0) {
    operator_delete(local_1d8);
  }
  puVar5 = PTR_PTR_0099e090;
  FUN_0078917c(aSStack_8c8,PTR_PTR_0099e090 + 8);
  if ((local_8e0 & 1) != 0) {
    operator_delete(local_8d0);
  }
  FUN_0078917c(&local_fc0,puVar5 + 8);
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
                    /* try { // try from 007ae2e8 to 007ae2f3 has its CatchHandler @ 007ae358 */
        (*(code *)(&PTR_FUN_0097fbf8)[*(uint *)((long)pvVar3 + -8)])
                  (&local_fc0,(void *)((long)pvVar3 + -0x38));
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


// ===== 007ae35c  FUN_007ae35c =====

void FUN_007ae35c(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 007ae380  FUN_007ae380 =====

undefined * FUN_007ae380(void)

{
  return PTR_SelectActionComponentViewComponentName_0099e080;
}


// ===== 007ae38c  FUN_007ae38c =====

undefined * FUN_007ae38c(void)

{
  return PTR_SelectActionComponentViewComponentName_0099e080;
}


// ===== 007ae398  FUN_007ae398 =====

undefined8 FUN_007ae398(void)

{
  return 0x61;
}


// ===== 007ae3a0  FUN_007ae3a0 =====

void FUN_007ae3a0(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_007aeb90(&local_60,&uStack_49,param_3,param_4,&local_64);
                    /* try { // try from 007ae408 to 007ae40f has its CatchHandler @ 007ae440 */
  (**(code **)(*param_2 + 0x60))(param_2,local_60);
  param_1[1] = uStack_58;
  *param_1 = local_60;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007ae468  FUN_007ae468 =====

void FUN_007ae468(undefined8 *param_1,long *param_2,shared_ptr *param_3,undefined8 param_4)

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
  FUN_007aee44(&local_60,&local_70);
                    /* try { // try from 007ae4b4 to 007ae4bf has its CatchHandler @ 007ae56c */
  (**(code **)(*local_60 + 0x10))(local_60,param_3,param_4);
  local_70 = local_60;
  local_68 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    FUN_00757d00(1,plStack_58 + 1);
  }
                    /* try { // try from 007ae4d8 to 007ae4e7 has its CatchHandler @ 007ae55c */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_70);
  plVar2 = local_68;
  if ((local_68 != (long *)0x0) &&
     (lVar3 = FUN_00757990(0xffffffffffffffff,local_68 + 1), lVar3 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 007ae524 to 007ae52b has its CatchHandler @ 007ae56c */
  (**(code **)(*param_2 + 0x60))(param_2,local_60);
  param_1[1] = plStack_58;
  *param_1 = local_60;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007ae594  FUN_007ae594 =====

void FUN_007ae594(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x007ae5a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 007ae5a8  FUN_007ae5a8 =====

void FUN_007ae5a8(undefined8 *param_1,long param_2,undefined8 param_3,long *param_4,
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
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_38SelectActionComponentViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_30SelectActionComponentViewPropsENS0_37SelectActionComponentViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dde0
         & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_38SelectActionComponentViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_30SelectActionComponentViewPropsENS0_37SelectActionComponentViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dde0
                                   ), iVar7 != 0)) {
                    /* try { // try from 007ae874 to 007ae883 has its CatchHandler @ 007ae8b0 */
      FUN_007af2bc(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_38SelectActionComponentViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_30SelectActionComponentViewPropsENS0_37SelectActionComponentViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ddd8
                   ,adStack_d0);
      __cxa_atexit(FUN_007af26c,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_38SelectActionComponentViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_30SelectActionComponentViewPropsENS0_37SelectActionComponentViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ddd8
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_38SelectActionComponentViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_30SelectActionComponentViewPropsENS0_37SelectActionComponentViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dde0
                         );
    }
    lVar10 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_38SelectActionComponentViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_30SelectActionComponentViewPropsENS0_37SelectActionComponentViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ddd8
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_38SelectActionComponentViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_30SelectActionComponentViewPropsENS0_37SelectActionComponentViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ddd8
    ;
    param_1[1] = lVar10;
    if (lVar10 != 0) {
      FUN_00757d00(1,lVar10 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    FUN_007aef48(&local_f0,param_3,param_5,param_4);
                    /* try { // try from 007ae650 to 007ae663 has its CatchHandler @ 007ae8e4 */
    uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if (((uVar8 & 1) == 0) ||
       ((uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar8 & 1) == 0 ||
        (uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enablePropsUpdateReconciliationAndroid(), (uVar8 & 1) == 0)))) {
LAB_007ae68c:
      local_100 = local_f0;
      local_f8 = plStack_e8;
      if (plStack_e8 != (long *)0x0) {
        FUN_00757d00(1,plStack_e8 + 1);
      }
                    /* try { // try from 007ae6a4 to 007ae6b3 has its CatchHandler @ 007ae8d4 */
      FUN_007af094(&local_100,param_5,param_4);
      plVar4 = local_f8;
      if ((local_f8 != (long *)0x0) &&
         (lVar10 = FUN_00757990(0xffffffffffffffff,local_f8 + 1), lVar10 == 0)) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 007ae674 to 007ae67b has its CatchHandler @ 007ae8c4 */
      pcVar9 = (char *)(**(code **)(*local_f0 + 0x10))();
      iVar7 = strcmp(PTR_SelectActionComponentViewComponentName_0099e080,pcVar9);
      if (iVar7 != 0) goto LAB_007ae68c;
      bVar3 = false;
    }
                    /* try { // try from 007ae6e8 to 007ae6eb has its CatchHandler @ 007ae8e4 */
    uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar8 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 007ae6f8 to 007ae713 has its CatchHandler @ 007ae8d0 */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(local_f0 + 4));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_f0;
      plVar5 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 007ae854 to 007ae863 has its CatchHandler @ 007ae8c8 */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_007ae930;
      }
      for (; local_f0 = plVar4, plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (*(int *)(plVar5 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 007ae834 to 007ae843 has its CatchHandler @ 007ae8f0 */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_007ae930;
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
                    /* try { // try from 007ae794 to 007ae79f has its CatchHandler @ 007ae8f8 */
        folly::dynamic::dynamic(adStack_d0,(dynamic *)(plVar5 + 8));
        local_a0 = 0;
                    /* try { // try from 007ae7a4 to 007ae7bb has its CatchHandler @ 007ae8fc */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (plVar4,param_3,uVar1,pcVar9,adStack_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 007ae7cc to 007ae7d7 has its CatchHandler @ 007ae8ec */
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
LAB_007ae930:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007ae934  FUN_007ae934 =====

void FUN_007ae934(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 007ae93c  FUN_007ae93c =====

void FUN_007ae93c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 007ae944  FUN_007ae944 =====

void FUN_007ae944(long *param_1,long param_2,long param_3)

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
                    /* try { // try from 007ae98c to 007ae993 has its CatchHandler @ 007aeb14 */
  plVar4 = (long *)operator_new(0x68);
  plVar1 = plVar4 + 3;
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_009837f8;
                    /* try { // try from 007ae9ac to 007ae9bb has its CatchHandler @ 007aeafc */
  FUN_007af548(plVar1,auStack_80,param_2 + 8);
  local_70 = plVar1;
  local_68 = plVar4;
  if ((local_78 != (long *)0x0) &&
     (lVar5 = FUN_00757990(0xffffffffffffffff,local_78 + 1), lVar5 == 0)) {
    (**(code **)(*local_78 + 0x10))(local_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 007ae9f0 to 007ae9f7 has its CatchHandler @ 007aeaec */
  puVar6 = (undefined8 *)operator_new(0x1a0);
  puVar2 = puVar6 + 4;
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_0097fff0;
                    /* try { // try from 007aea10 to 007aea27 has its CatchHandler @ 007aead4 */
  FUN_007af748(puVar2,param_3,&local_70,param_2 + 8,param_2);
  plVar1 = local_70;
  *param_1 = (long)puVar2;
  param_1[1] = (long)puVar6;
  local_90 = puVar2;
  local_88 = puVar6;
  FUN_00757d00(1,puVar6 + 2);
                    /* try { // try from 007aea40 to 007aea4b has its CatchHandler @ 007aeab4 */
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


// ===== 007aeb3c  FUN_007aeb3c =====

void FUN_007aeb3c(void)

{
  return;
}


// ===== 007aeb40  FUN_007aeb40 =====

void FUN_007aeb40(long param_1)

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


// ===== 007aeb90  FUN_007aeb90 =====

void FUN_007aeb90(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  *puVar6 = &PTR_FUN_00983640;
                    /* try { // try from 007aebd8 to 007aebe7 has its CatchHandler @ 007aec80 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
            ((YogaLayoutableShadowNode *)(puVar6 + 3),param_3,param_4,uVar8);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_00983690;
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


// ===== 007aec9c  FUN_007aec9c =====

void FUN_007aec9c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00983640;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 007aecac  FUN_007aecac =====

void FUN_007aecac(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00983640;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 007aecdc  FUN_007aecdc =====

void FUN_007aecdc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007aece4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 007aece8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007aecec  FUN_007aecec =====

void FUN_007aecec(long *param_1)

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


// ===== 007aedac  FUN_007aedac =====

void FUN_007aedac(long param_1)

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


// ===== 007aee14  FUN_007aee14 =====

bool FUN_007aee14(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 007aee2c  FUN_007aee2c =====

bool FUN_007aee2c(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 007aee44  FUN_007aee44 =====

void FUN_007aee44(undefined8 *param_1,undefined8 param_2,ShadowNode *param_3,
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
  *puVar6 = &PTR_FUN_00983640;
                    /* try { // try from 007aee84 to 007aee93 has its CatchHandler @ 007aef2c */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
            ((YogaLayoutableShadowNode *)(puVar6 + 3),param_3,param_4);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_00983690;
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


// ===== 007aef48  FUN_007aef48 =====

void FUN_007aef48(undefined8 *param_1,PropsParserContext *param_2,RawProps *param_3,long *param_4)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  SelectActionComponentViewProps *pSVar4;
  undefined1 uStack_59;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pSVar4 = (SelectActionComponentViewProps *)*param_4;
  if (pSVar4 == (SelectActionComponentViewProps *)0x0) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_38SelectActionComponentViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_30SelectActionComponentViewPropsENS0_37SelectActionComponentViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dde0
         & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_38SelectActionComponentViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_30SelectActionComponentViewPropsENS0_37SelectActionComponentViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dde0
                                   ), iVar2 != 0)) {
                    /* try { // try from 007af014 to 007af023 has its CatchHandler @ 007af050 */
      FUN_007af2bc(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_38SelectActionComponentViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_30SelectActionComponentViewPropsENS0_37SelectActionComponentViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ddd8
                   ,&uStack_59);
      __cxa_atexit(FUN_007af26c,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_38SelectActionComponentViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_30SelectActionComponentViewPropsENS0_37SelectActionComponentViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ddd8
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_38SelectActionComponentViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_30SelectActionComponentViewPropsENS0_37SelectActionComponentViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dde0
                         );
    }
    pSVar4 = *(SelectActionComponentViewProps **)
              PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_38SelectActionComponentViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_30SelectActionComponentViewPropsENS0_37SelectActionComponentViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ddd8
    ;
  }
  puVar3 = (undefined8 *)operator_new(0x710);
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_009837a8;
                    /* try { // try from 007aefc0 to 007aefd3 has its CatchHandler @ 007af064 */
  facebook::react::SelectActionComponentViewProps::SelectActionComponentViewProps
            ((SelectActionComponentViewProps *)(puVar3 + 3),param_2,pSVar4,param_3);
  *param_1 = (SelectActionComponentViewProps *)(puVar3 + 3);
  param_1[1] = puVar3;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007af094  FUN_007af094 =====

void FUN_007af094(undefined8 *param_1,undefined8 param_2,long *param_3)

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
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_38SelectActionComponentViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_30SelectActionComponentViewPropsENS0_37SelectActionComponentViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dde0
         & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_38SelectActionComponentViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_30SelectActionComponentViewPropsENS0_37SelectActionComponentViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dde0
                                   ), iVar2 != 0)) {
                    /* try { // try from 007af178 to 007af187 has its CatchHandler @ 007af1b4 */
      FUN_007af2bc(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_38SelectActionComponentViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_30SelectActionComponentViewPropsENS0_37SelectActionComponentViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ddd8
                   ,local_70);
      __cxa_atexit(FUN_007af26c,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_38SelectActionComponentViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_30SelectActionComponentViewPropsENS0_37SelectActionComponentViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ddd8
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_38SelectActionComponentViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_30SelectActionComponentViewPropsENS0_37SelectActionComponentViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099dde0
                         );
    }
    local_50 = (long *)0x0;
                    /* try { // try from 007af104 to 007af117 has its CatchHandler @ 007af1c8 */
    facebook::react::Props::facebook::react::Props::initializeDynamicProps
              (uVar5,*(undefined8 *)
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_38SelectActionComponentViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_30SelectActionComponentViewPropsENS0_37SelectActionComponentViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ddd8
               ,param_2,local_70);
  }
  else {
    local_50 = (long *)0x0;
                    /* try { // try from 007af0c8 to 007af0df has its CatchHandler @ 007af1cc */
    facebook::react::Props::facebook::react::Props::initializeDynamicProps
              (uVar5,*param_3,param_2,local_70);
  }
  if (local_50 == local_70) {
    lVar4 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007af144;
    lVar4 = 5;
    plVar3 = local_50;
  }
  (**(code **)(*plVar3 + lVar4 * 8))();
LAB_007af144:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007af21c  FUN_007af21c =====

void FUN_007af21c(long param_1)

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


// ===== 007af26c  FUN_007af26c =====

void FUN_007af26c(long param_1)

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


// ===== 007af2bc  FUN_007af2bc =====

void FUN_007af2bc(undefined8 *param_1)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x710);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_00983758;
  memset(__s,0,0x6f8);
                    /* try { // try from 007af300 to 007af313 has its CatchHandler @ 007af38c */
  FUN_00788b10(__s,PTR_PTR_0099e090 + 0x10);
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
  puVar1 = PTR_vtable_0099e088;
  *(undefined4 *)(puVar2 + 0xd9) = 0;
  *(undefined2 *)((long)puVar2 + 0x6cc) = 0;
  puVar2[0xe1] = 0;
  puVar2[3] = puVar1 + 0x20;
  puVar2[0xe0] = 0;
  puVar2[0xdf] = 0;
  *param_1 = __s;
  param_1[1] = puVar2;
  return;
}


// ===== 007af3a8  FUN_007af3a8 =====

void FUN_007af3a8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00983758;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 007af3b8  FUN_007af3b8 =====

void FUN_007af3b8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00983758;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 007af3e8  FUN_007af3e8 =====

void FUN_007af3e8(long param_1)

{
  if ((*(byte *)(param_1 + 0x6f8) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x708));
  }
  FUN_0078917c(param_1 + 0x18,PTR_PTR_0099e090 + 8);
  return;
}


// ===== 007af424  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007af428  FUN_007af428 =====

void FUN_007af428(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009837a8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 007af438  FUN_007af438 =====

void FUN_007af438(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009837a8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 007af468  FUN_007af468 =====

void FUN_007af468(long param_1)

{
  if ((*(byte *)(param_1 + 0x6f8) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x708));
  }
  FUN_0078917c(param_1 + 0x18,PTR_PTR_0099e090 + 8);
  return;
}


// ===== 007af4a4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007af4a8  FUN_007af4a8 =====

void FUN_007af4a8(long param_1)

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


// ===== 007af4f8  FUN_007af4f8 =====

void FUN_007af4f8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009837f8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 007af508  FUN_007af508 =====

void FUN_007af508(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009837f8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 007af538  FUN_007af538 =====

void FUN_007af538(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007af540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 007af544  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007af548  FUN_007af548 =====

EventEmitter * FUN_007af548(EventEmitter *param_1,undefined8 *param_2,undefined8 *param_3)

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
                    /* try { // try from 007af590 to 007af59f has its CatchHandler @ 007af664 */
  facebook::react::EventEmitter::EventEmitter(param_1,&local_50,&local_60);
  *(undefined ***)param_1 = &PTR_FUN_0097ff10;
                    /* try { // try from 007af5ac to 007af5b3 has its CatchHandler @ 007af654 */
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
  *(undefined ***)param_1 = &PTR_FUN_00983848;
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


// ===== 007af698  FUN_007af698 =====

void FUN_007af698(undefined8 *param_1)

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


// ===== 007af748  FUN_007af748 =====

ShadowNodeFamily *
FUN_007af748(ShadowNodeFamily *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
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
                    /* try { // try from 007af7ac to 007af7c3 has its CatchHandler @ 007af82c */
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


// ===== 007af864  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_33StickerPickerRowViewComponentNameEEEENS0_25StickerPickerRowViewPropsENS0_32StickerPickerRowViewEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE =====

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_33StickerPickerRowViewComponentNameEEEENS0_25StickerPickerRowViewPropsENS0_32StickerPickerRowViewEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE
               (undefined8 *param_1)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_007af8b8(&local_30);
  *param_1 = local_30;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007af8b8  FUN_007af8b8 =====

void FUN_007af8b8(undefined8 *param_1,ComponentDescriptorParameters *param_2)

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
                    /* try { // try from 007af8fc to 007af907 has its CatchHandler @ 007af974 */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_90);
  *(undefined ***)this = &PTR_FUN_00983880;
  FUN_007af9a4(this + 0x38);
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


// ===== 007af9a4  FUN_007af9a4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007af9a4(undefined8 param_1)

{
  byte bVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  void *pvVar8;
  undefined4 local_ff0 [2];
  undefined8 *local_fe8;
  undefined *local_fe0;
  undefined8 uStack_fd8;
  undefined8 local_fd0;
  undefined8 uStack_fc8;
  undefined4 local_fc0 [2];
  undefined8 local_fb8;
  undefined8 uStack_fb0;
  undefined8 local_fa8;
  undefined8 uStack_fa0;
  undefined4 local_f98;
  undefined4 local_f90;
  undefined1 local_f8c;
  undefined8 local_f8b;
  undefined8 local_f83;
  undefined8 uStack_f7b;
  undefined8 local_f73;
  undefined8 uStack_f6b;
  undefined8 local_f63;
  undefined8 uStack_f5b;
  undefined8 local_f53;
  undefined6 uStack_f4b;
  undefined2 uStack_f45;
  undefined6 uStack_f43;
  undefined8 uStack_f3d;
  undefined4 local_f35;
  undefined8 local_f31;
  undefined1 local_f29;
  undefined1 uStack_f28;
  undefined7 uStack_f27;
  undefined8 uStack_f20;
  undefined8 uStack_f18;
  undefined8 uStack_f10;
  undefined8 local_f08;
  undefined8 uStack_f00;
  undefined8 local_ef8;
  undefined8 uStack_ef0;
  undefined8 local_ee8;
  undefined8 uStack_ee0;
  undefined8 local_ed8;
  undefined8 uStack_ed0;
  undefined8 uStack_ec8;
  undefined8 local_ec0;
  undefined8 local_eb8;
  undefined8 uStack_eb0;
  undefined8 local_ea8;
  undefined4 uStack_ea0;
  undefined4 uStack_e9c;
  undefined4 uStack_e98;
  undefined4 uStack_e94;
  undefined4 uStack_e90;
  undefined4 uStack_e8c;
  undefined8 local_e88;
  undefined8 uStack_e80;
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
  undefined4 local_e08;
  undefined1 local_e04;
  undefined4 local_e00;
  undefined1 local_dfc;
  undefined1 local_df8;
  undefined1 local_df4;
  undefined1 local_de8;
  undefined8 local_de0;
  undefined8 uStack_dd8;
  undefined8 uStack_dd0;
  undefined8 uStack_dc8;
  undefined8 local_dc0;
  undefined8 uStack_db8;
  undefined8 uStack_db0;
  undefined1 uStack_da8;
  undefined7 local_da7;
  undefined1 uStack_da0;
  undefined8 uStack_d9f;
  undefined8 local_d94;
  undefined8 uStack_d8c;
  undefined8 uStack_d84;
  undefined8 uStack_d7c;
  undefined8 local_d74;
  undefined8 uStack_d6c;
  undefined8 uStack_d64;
  undefined8 uStack_d5c;
  undefined8 local_d54;
  undefined8 uStack_d4c;
  undefined8 uStack_d44;
  undefined5 uStack_d3c;
  undefined3 local_d37;
  undefined5 uStack_d34;
  undefined1 local_d2c;
  undefined1 local_d28;
  undefined1 local_d24;
  undefined1 local_d20;
  undefined1 local_d1c;
  undefined1 local_d18;
  undefined1 local_d00;
  undefined8 local_cf8;
  undefined8 uStack_cf0;
  undefined8 local_ce8;
  undefined4 local_ce0;
  undefined1 local_cdc;
  undefined4 local_cdb;
  undefined1 local_cd7;
  undefined1 local_cd6;
  undefined8 local_cd0;
  undefined8 uStack_cc8;
  undefined8 uStack_cc0;
  undefined8 uStack_cb8;
  undefined8 local_cb0;
  undefined7 uStack_ca8;
  undefined4 uStack_ca1;
  undefined8 local_c9c;
  undefined1 local_c94;
  undefined1 local_c8c;
  undefined1 local_c88;
  undefined1 local_c80;
  undefined1 local_c7c;
  undefined1 local_c74;
  undefined1 local_c70;
  undefined1 local_c68;
  undefined1 local_c64;
  undefined1 local_c5c;
  undefined1 local_c58;
  undefined1 local_c50;
  undefined1 local_c4c;
  undefined1 local_c44;
  undefined1 local_c40;
  undefined1 local_c38;
  undefined1 local_c34;
  undefined1 local_c2c;
  undefined1 local_c28;
  undefined1 local_c20;
  undefined1 local_c1c;
  undefined1 local_c14;
  undefined1 local_c10;
  undefined1 local_c08;
  undefined1 local_c04;
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
  undefined1 local_ba8;
  undefined1 local_ba4;
  undefined1 local_ba0;
  undefined1 local_b9c;
  undefined8 local_b98;
  undefined8 uStack_b90;
  undefined8 local_b88;
  undefined8 uStack_b80;
  undefined8 uStack_b78;
  undefined8 uStack_b70;
  undefined2 local_b68;
  undefined8 local_b64;
  undefined1 local_b5c;
  undefined8 local_b58;
  undefined8 local_b50;
  undefined8 uStack_b48;
  undefined1 local_b40;
  undefined8 local_b38;
  undefined8 uStack_b30;
  undefined8 uStack_b28;
  undefined8 uStack_b20;
  undefined8 local_b18;
  undefined8 uStack_b10;
  undefined8 uStack_b08;
  undefined8 uStack_b00;
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
  undefined8 local_a88;
  undefined8 uStack_a80;
  undefined8 local_a78;
  undefined8 uStack_a70;
  undefined8 local_a68;
  undefined8 uStack_a60;
  undefined8 local_a58;
  undefined8 uStack_a50;
  undefined8 local_a48;
  undefined6 uStack_a40;
  undefined2 uStack_a3a;
  undefined6 uStack_a38;
  undefined1 local_a30;
  undefined1 local_a2c;
  undefined1 local_a28;
  undefined8 local_a24;
  undefined8 uStack_a1c;
  undefined1 local_a14;
  undefined8 local_a10;
  undefined2 local_a08;
  undefined1 local_a06;
  undefined4 local_a04;
  undefined1 local_a00;
  undefined1 local_9a0;
  undefined1 local_998;
  undefined1 local_938;
  undefined4 local_930;
  undefined2 local_92c;
  undefined1 local_928;
  undefined1 local_924;
  undefined1 local_920;
  undefined1 local_91c;
  undefined1 local_918;
  undefined1 local_914;
  undefined1 local_910;
  undefined1 local_90c;
  undefined1 local_908;
  undefined1 local_904;
  undefined8 local_900;
  undefined4 local_8f8;
  undefined8 local_8f0;
  undefined8 local_8e8;
  undefined8 local_8e0;
  StickerPickerRowViewProps aSStack_8d8 [1776];
  undefined8 auStack_1e8 [3];
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
                    /* try { // try from 007afa2c to 007afa37 has its CatchHandler @ 007affe0 */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1d0);
  local_120 = CONCAT44(local_120._4_4_,0x3f800000);
  local_ff0[0] = 0xffffffff;
  uStack_128 = 0;
  local_130 = (void *)0x0;
  uStack_138 = 0;
  local_140 = (void *)0x0;
  local_fe8 = &local_1d0;
  facebook::react::RawProps::facebook::react::RawProps::parse(&local_118,param_1);
  memset(local_fc0,0,0x6e8);
  local_88 = (undefined8 *)CONCAT44(local_88._4_4_,5);
  local_70 = 0;
  local_fe0 = PTR_construction_vtable_0099e240 + 0x20;
  local_fc0[0] = 5;
  uStack_fc8 = 0;
  local_fd0 = 0;
  uStack_fd8 = 0;
  local_68 = 0;
  uStack_60 = 0x3f800000;
  uStack_78 = 0;
  local_80 = 0;
  uStack_fb0 = 0;
  local_fb8 = 0;
  uStack_fa0 = 0;
  local_fa8 = 0;
  local_f98 = 0x3f800000;
  folly::dynamic::folly::dynamic::destroy(&local_88);
  local_f8c = 0;
  local_f31 = 0;
  uStack_a50 = _UNK_00470a7c;
  local_a58 = _DAT_00470a74;
  local_f8b = _s__00375408;
  uStack_b48 = _UNK_00371598;
  local_b50 = _DAT_00371590;
  uStack_a60 = _UNK_00470a6c;
  local_a68 = _DAT_00470a64;
  local_e74 = 0;
  uStack_a70 = _UNK_00470a5c;
  local_a78 = _DAT_00470a54;
  uStack_a80 = _UNK_00470a4c;
  local_a88 = _DAT_00470a44;
  uStack_a38 = 0;
  local_e6c = 0;
  uStack_ea0 = 0;
  local_ea8 = 0;
  uStack_e8c = 0;
  uStack_eb0 = 0;
  local_eb8 = 0;
  uStack_a40 = 0;
  uStack_a3a = 0;
  local_a48 = 0;
  local_f90 = 0x10410710;
  local_f35 = 0x40004;
  uStack_e94 = 0;
  uStack_e90 = 0;
  uStack_e9c = 0;
  uStack_e98 = 0;
  uStack_e80 = 0;
  local_e88 = 0;
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
  local_e08 = 0x7fc00000;
  local_e00 = 0x7fc00000;
  uStack_d9f = 0;
  uStack_da0 = 0;
  uStack_d8c = 0;
  local_d94 = 0;
  uStack_d7c = 0;
  uStack_d84 = 0;
  uStack_d6c = 0;
  local_d74 = 0;
  uStack_d5c = 0;
  uStack_d64 = 0;
  uStack_d4c = 0;
  local_d54 = 0;
  uStack_d3c = 0;
  uStack_d44 = 0;
  local_d37 = 0;
  uStack_d34 = 0;
  local_cdc = 1;
  local_cdb = 0;
  local_cd6 = 0x23;
  local_c9c = 0x3f800000;
  uStack_b80 = 0;
  local_b88 = 0;
  uStack_b70 = 0;
  uStack_b78 = 0;
  uStack_b90 = 0;
  local_b98 = 0;
  local_b64 = 0;
  uStack_b30 = 0;
  local_b38 = 0;
  uStack_b20 = 0;
  uStack_b28 = 0;
  uStack_b10 = 0;
  local_b18 = 0;
  uStack_b00 = 0;
  uStack_b08 = 0;
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
  uStack_f27 = 0;
  uStack_f7b = 0;
  local_f83 = 0;
  uStack_f6b = 0;
  local_f73 = 0;
  uStack_f5b = 0;
  local_f63 = 0;
  uStack_f4b = 0;
  local_f53 = 0;
  uStack_f3d = 0;
  uStack_f45 = 0;
  uStack_f43 = 0;
  local_f29 = 0;
  uStack_f28 = 0;
  uStack_f18 = 0;
  uStack_f20 = 0;
  local_f08 = 0;
  uStack_f10 = 0;
  local_ef8 = 0;
  uStack_f00 = 0;
  local_ee8 = 0;
  uStack_ef0 = 0;
  local_ed8 = 0;
  uStack_ee0 = 0;
  uStack_ec8 = 0;
  uStack_ed0 = 0;
  local_ec0 = 0;
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
  local_e04 = 0;
  local_dfc = 0;
  local_df8 = 0;
  local_df4 = 0;
  local_de8 = 0;
  local_d2c = 0;
  local_d28 = 0;
  local_d24 = 0;
  local_d20 = 0;
  local_d1c = 0;
  local_d18 = 0;
  local_d00 = 0;
  uStack_dd8 = 0;
  local_de0 = 0;
  uStack_dc8 = 0;
  uStack_dd0 = 0;
  uStack_db8 = 0;
  local_dc0 = 0;
  uStack_da8 = 0;
  local_da7 = 0;
  uStack_db0 = 0;
  uStack_cf0 = 0;
  local_cf8 = 0;
  local_ce8 = 0;
  local_ce0 = 0;
  local_cd7 = 0;
  uStack_cc8 = 0;
  local_cd0 = 0;
  uStack_cb8 = 0;
  uStack_cc0 = 0;
  uStack_ca8 = 0;
  uStack_ca1 = 0;
  local_cb0 = 0;
  local_c94 = 0;
  local_c8c = 0;
  local_c88 = 0;
  local_c80 = 0;
  local_c7c = 0;
  local_c74 = 0;
  local_c70 = 0;
  local_c68 = 0;
  local_c64 = 0;
  local_c5c = 0;
  local_c58 = 0;
  local_c50 = 0;
  local_c4c = 0;
  local_c44 = 0;
  local_c40 = 0;
  local_c38 = 0;
  local_c34 = 0;
  local_c2c = 0;
  local_c28 = 0;
  local_c20 = 0;
  local_c1c = 0;
  local_c14 = 0;
  local_c10 = 0;
  local_c08 = 0;
  local_c04 = 0;
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
  local_ba8 = 0;
  local_ba4 = 0;
  local_ba0 = 0;
  local_b9c = 0;
  local_b58 = 0;
  local_b68 = 0;
  local_b5c = 0;
  local_b40 = 0;
  local_a30 = 0;
  local_a2c = 0;
  local_a28 = 0;
  local_a10 = 0;
  uStack_a1c = 0;
  local_a24 = 0;
  local_a14 = 0;
  local_a08 = 0x101;
  local_a06 = 0;
  local_a04 = 0;
  local_a00 = 0;
  local_9a0 = 0;
  local_998 = 0;
  local_938 = 0;
  local_928 = 0;
  local_924 = 0;
  local_920 = 0;
  local_91c = 0;
  local_918 = 0;
  local_914 = 0;
  local_910 = 0;
  local_90c = 0;
  local_908 = 0;
  local_904 = 0;
  local_92c = 0;
  local_930 = 0;
  local_fe0 = PTR_vtable_0099e0a0 + 0x20;
  local_900 = 0;
  local_8f8 = 0;
  local_8e0 = 0;
  local_8f0 = 0;
  local_8e8 = 0;
                    /* try { // try from 007afe30 to 007afe47 has its CatchHandler @ 007affe0 */
  facebook::react::StickerPickerRowViewProps::StickerPickerRowViewProps
            (aSStack_8d8,(PropsParserContext *)local_ff0,(StickerPickerRowViewProps *)&local_fe0,
             (RawProps *)&local_118);
  local_88 = auStack_1e8;
  FUN_007b07cc(&local_88);
  puVar5 = PTR_PTR_0099e0a8;
  FUN_0078917c(aSStack_8d8,PTR_PTR_0099e0a8 + 8);
  local_88 = &local_8f0;
  FUN_007b07cc(&local_88);
  FUN_0078917c(&local_fe0,puVar5 + 8);
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
                    /* try { // try from 007aff74 to 007aff7f has its CatchHandler @ 007affe4 */
        (*(code *)(&PTR_FUN_0097fbf8)[*(uint *)((long)pvVar3 + -8)])
                  (&local_fe0,(void *)((long)pvVar3 + -0x38));
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


// ===== 007affe8  FUN_007affe8 =====

void FUN_007affe8(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 007b000c  FUN_007b000c =====

undefined * FUN_007b000c(void)

{
  return PTR_StickerPickerRowViewComponentName_0099e098;
}


// ===== 007b0018  FUN_007b0018 =====

undefined * FUN_007b0018(void)

{
  return PTR_StickerPickerRowViewComponentName_0099e098;
}


// ===== 007b0024  FUN_007b0024 =====

undefined8 FUN_007b0024(void)

{
  return 0x61;
}


// ===== 007b002c  FUN_007b002c =====

void FUN_007b002c(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_007b08d8(&local_60,&uStack_49,param_3,param_4,&local_64);
                    /* try { // try from 007b0094 to 007b009b has its CatchHandler @ 007b00cc */
  (**(code **)(*param_2 + 0x60))(param_2,local_60);
  param_1[1] = uStack_58;
  *param_1 = local_60;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007b00f4  FUN_007b00f4 =====

void FUN_007b00f4(undefined8 *param_1,long *param_2,shared_ptr *param_3,undefined8 param_4)

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
  FUN_007b0b8c(&local_60,&local_70);
                    /* try { // try from 007b0140 to 007b014b has its CatchHandler @ 007b01f8 */
  (**(code **)(*local_60 + 0x10))(local_60,param_3,param_4);
  local_70 = local_60;
  local_68 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    FUN_00757d00(1,plStack_58 + 1);
  }
                    /* try { // try from 007b0164 to 007b0173 has its CatchHandler @ 007b01e8 */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_70);
  plVar2 = local_68;
  if ((local_68 != (long *)0x0) &&
     (lVar3 = FUN_00757990(0xffffffffffffffff,local_68 + 1), lVar3 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 007b01b0 to 007b01b7 has its CatchHandler @ 007b01f8 */
  (**(code **)(*param_2 + 0x60))(param_2,local_60);
  param_1[1] = plStack_58;
  *param_1 = local_60;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007b0220  FUN_007b0220 =====

void FUN_007b0220(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x007b0230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 007b0234  FUN_007b0234 =====

void FUN_007b0234(undefined8 *param_1,long param_2,undefined8 param_3,long *param_4,
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
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33StickerPickerRowViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25StickerPickerRowViewPropsENS0_32StickerPickerRowViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de00
         & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33StickerPickerRowViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25StickerPickerRowViewPropsENS0_32StickerPickerRowViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de00
                                   ), iVar7 != 0)) {
                    /* try { // try from 007b0500 to 007b050f has its CatchHandler @ 007b053c */
      FUN_007b1004(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33StickerPickerRowViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25StickerPickerRowViewPropsENS0_32StickerPickerRowViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ddf8
                   ,adStack_d0);
      __cxa_atexit(FUN_007b0fb4,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33StickerPickerRowViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25StickerPickerRowViewPropsENS0_32StickerPickerRowViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ddf8
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33StickerPickerRowViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25StickerPickerRowViewPropsENS0_32StickerPickerRowViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de00
                         );
    }
    lVar10 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33StickerPickerRowViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25StickerPickerRowViewPropsENS0_32StickerPickerRowViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ddf8
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33StickerPickerRowViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25StickerPickerRowViewPropsENS0_32StickerPickerRowViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ddf8
    ;
    param_1[1] = lVar10;
    if (lVar10 != 0) {
      FUN_00757d00(1,lVar10 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    FUN_007b0c90(&local_f0,param_3,param_5,param_4);
                    /* try { // try from 007b02dc to 007b02ef has its CatchHandler @ 007b0570 */
    uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if (((uVar8 & 1) == 0) ||
       ((uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar8 & 1) == 0 ||
        (uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enablePropsUpdateReconciliationAndroid(), (uVar8 & 1) == 0)))) {
LAB_007b0318:
      local_100 = local_f0;
      local_f8 = plStack_e8;
      if (plStack_e8 != (long *)0x0) {
        FUN_00757d00(1,plStack_e8 + 1);
      }
                    /* try { // try from 007b0330 to 007b033f has its CatchHandler @ 007b0560 */
      FUN_007b0ddc(&local_100,param_5,param_4);
      plVar4 = local_f8;
      if ((local_f8 != (long *)0x0) &&
         (lVar10 = FUN_00757990(0xffffffffffffffff,local_f8 + 1), lVar10 == 0)) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 007b0300 to 007b0307 has its CatchHandler @ 007b0550 */
      pcVar9 = (char *)(**(code **)(*local_f0 + 0x10))();
      iVar7 = strcmp(PTR_StickerPickerRowViewComponentName_0099e098,pcVar9);
      if (iVar7 != 0) goto LAB_007b0318;
      bVar3 = false;
    }
                    /* try { // try from 007b0374 to 007b0377 has its CatchHandler @ 007b0570 */
    uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar8 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 007b0384 to 007b039f has its CatchHandler @ 007b055c */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(local_f0 + 4));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_f0;
      plVar5 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 007b04e0 to 007b04ef has its CatchHandler @ 007b0554 */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_007b05bc;
      }
      for (; local_f0 = plVar4, plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (*(int *)(plVar5 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 007b04c0 to 007b04cf has its CatchHandler @ 007b057c */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_007b05bc;
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
                    /* try { // try from 007b0420 to 007b042b has its CatchHandler @ 007b0584 */
        folly::dynamic::dynamic(adStack_d0,(dynamic *)(plVar5 + 8));
        local_a0 = 0;
                    /* try { // try from 007b0430 to 007b0447 has its CatchHandler @ 007b0588 */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (plVar4,param_3,uVar1,pcVar9,adStack_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 007b0458 to 007b0463 has its CatchHandler @ 007b0578 */
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
LAB_007b05bc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007b05c0  FUN_007b05c0 =====

void FUN_007b05c0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 007b05c8  FUN_007b05c8 =====

void FUN_007b05c8(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 007b05d0  FUN_007b05d0 =====

void FUN_007b05d0(long *param_1,long param_2,long param_3)

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
                    /* try { // try from 007b0618 to 007b061f has its CatchHandler @ 007b07a0 */
  plVar4 = (long *)operator_new(0x68);
  plVar1 = plVar4 + 3;
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_00983ac8;
                    /* try { // try from 007b0638 to 007b0647 has its CatchHandler @ 007b0788 */
  FUN_007b12f0(plVar1,auStack_80,param_2 + 8);
  local_70 = plVar1;
  local_68 = plVar4;
  if ((local_78 != (long *)0x0) &&
     (lVar5 = FUN_00757990(0xffffffffffffffff,local_78 + 1), lVar5 == 0)) {
    (**(code **)(*local_78 + 0x10))(local_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 007b067c to 007b0683 has its CatchHandler @ 007b0778 */
  puVar6 = (undefined8 *)operator_new(0x1a0);
  puVar2 = puVar6 + 4;
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_0097fff0;
                    /* try { // try from 007b069c to 007b06b3 has its CatchHandler @ 007b0760 */
  FUN_007b14f0(puVar2,param_3,&local_70,param_2 + 8,param_2);
  plVar1 = local_70;
  *param_1 = (long)puVar2;
  param_1[1] = (long)puVar6;
  local_90 = puVar2;
  local_88 = puVar6;
  FUN_00757d00(1,puVar6 + 2);
                    /* try { // try from 007b06cc to 007b06d7 has its CatchHandler @ 007b0740 */
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


// ===== 007b07c8  FUN_007b07c8 =====

void FUN_007b07c8(void)

{
  return;
}


// ===== 007b07cc  FUN_007b07cc =====

void FUN_007b07cc(undefined8 *param_1)

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
        if ((*(byte *)((long)pvVar5 + -0x40) & 1) == 0) goto LAB_007b081c;
LAB_007b0838:
        operator_delete(*(void **)((long)pvVar5 + -0x30));
        cVar1 = *(char *)((long)pvVar5 + -0x48);
      }
      else {
        operator_delete(*(void **)((long)pvVar5 + -0x10));
        if ((*(byte *)((long)pvVar5 + -0x40) & 1) != 0) goto LAB_007b0838;
LAB_007b081c:
        cVar1 = *(char *)((long)pvVar5 + -0x48);
      }
      if ((cVar1 != '\0') && ((*(byte *)((long)pvVar5 + -0x60) & 1) != 0)) {
        operator_delete(*(void **)((long)pvVar5 + -0x50));
      }
      pvVar5 = (void *)((long)pvVar5 + -0x60);
    } while (pvVar5 != pvVar4);
    pvVar2 = *(void **)*param_1;
  }
  puVar3[1] = pvVar4;
  operator_delete(pvVar2);
  return;
}


// ===== 007b0888  FUN_007b0888 =====

void FUN_007b0888(long param_1)

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


// ===== 007b08d8  FUN_007b08d8 =====

void FUN_007b08d8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  *puVar6 = &PTR_FUN_00983910;
                    /* try { // try from 007b0920 to 007b092f has its CatchHandler @ 007b09c8 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
            ((YogaLayoutableShadowNode *)(puVar6 + 3),param_3,param_4,uVar8);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_00983960;
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


// ===== 007b09e4  FUN_007b09e4 =====

void FUN_007b09e4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00983910;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 007b09f4  FUN_007b09f4 =====

void FUN_007b09f4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00983910;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 007b0a24  FUN_007b0a24 =====

void FUN_007b0a24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007b0a2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 007b0a30  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007b0a34  FUN_007b0a34 =====

void FUN_007b0a34(long *param_1)

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


// ===== 007b0af4  FUN_007b0af4 =====

void FUN_007b0af4(long param_1)

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


// ===== 007b0b5c  FUN_007b0b5c =====

bool FUN_007b0b5c(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 007b0b74  FUN_007b0b74 =====

bool FUN_007b0b74(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 007b0b8c  FUN_007b0b8c =====

void FUN_007b0b8c(undefined8 *param_1,undefined8 param_2,ShadowNode *param_3,
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
  *puVar6 = &PTR_FUN_00983910;
                    /* try { // try from 007b0bcc to 007b0bdb has its CatchHandler @ 007b0c74 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
            ((YogaLayoutableShadowNode *)(puVar6 + 3),param_3,param_4);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_00983960;
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


// ===== 007b0c90  FUN_007b0c90 =====

void FUN_007b0c90(undefined8 *param_1,PropsParserContext *param_2,RawProps *param_3,long *param_4)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  StickerPickerRowViewProps *pSVar4;
  undefined1 uStack_59;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pSVar4 = (StickerPickerRowViewProps *)*param_4;
  if (pSVar4 == (StickerPickerRowViewProps *)0x0) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33StickerPickerRowViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25StickerPickerRowViewPropsENS0_32StickerPickerRowViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de00
         & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33StickerPickerRowViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25StickerPickerRowViewPropsENS0_32StickerPickerRowViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de00
                                   ), iVar2 != 0)) {
                    /* try { // try from 007b0d5c to 007b0d6b has its CatchHandler @ 007b0d98 */
      FUN_007b1004(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33StickerPickerRowViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25StickerPickerRowViewPropsENS0_32StickerPickerRowViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ddf8
                   ,&uStack_59);
      __cxa_atexit(FUN_007b0fb4,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33StickerPickerRowViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25StickerPickerRowViewPropsENS0_32StickerPickerRowViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ddf8
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33StickerPickerRowViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25StickerPickerRowViewPropsENS0_32StickerPickerRowViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de00
                         );
    }
    pSVar4 = *(StickerPickerRowViewProps **)
              PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33StickerPickerRowViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25StickerPickerRowViewPropsENS0_32StickerPickerRowViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ddf8
    ;
  }
  puVar3 = (undefined8 *)operator_new(0x720);
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_00983a78;
                    /* try { // try from 007b0d08 to 007b0d1b has its CatchHandler @ 007b0dac */
  facebook::react::StickerPickerRowViewProps::StickerPickerRowViewProps
            ((StickerPickerRowViewProps *)(puVar3 + 3),param_2,pSVar4,param_3);
  *param_1 = (StickerPickerRowViewProps *)(puVar3 + 3);
  param_1[1] = puVar3;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007b0ddc  FUN_007b0ddc =====

void FUN_007b0ddc(undefined8 *param_1,undefined8 param_2,long *param_3)

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
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33StickerPickerRowViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25StickerPickerRowViewPropsENS0_32StickerPickerRowViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de00
         & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33StickerPickerRowViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25StickerPickerRowViewPropsENS0_32StickerPickerRowViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de00
                                   ), iVar2 != 0)) {
                    /* try { // try from 007b0ec0 to 007b0ecf has its CatchHandler @ 007b0efc */
      FUN_007b1004(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33StickerPickerRowViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25StickerPickerRowViewPropsENS0_32StickerPickerRowViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ddf8
                   ,local_70);
      __cxa_atexit(FUN_007b0fb4,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33StickerPickerRowViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25StickerPickerRowViewPropsENS0_32StickerPickerRowViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ddf8
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33StickerPickerRowViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25StickerPickerRowViewPropsENS0_32StickerPickerRowViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de00
                         );
    }
    local_50 = (long *)0x0;
                    /* try { // try from 007b0e4c to 007b0e5f has its CatchHandler @ 007b0f10 */
    facebook::react::Props::facebook::react::Props::initializeDynamicProps
              (uVar5,*(undefined8 *)
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33StickerPickerRowViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25StickerPickerRowViewPropsENS0_32StickerPickerRowViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ddf8
               ,param_2,local_70);
  }
  else {
    local_50 = (long *)0x0;
                    /* try { // try from 007b0e10 to 007b0e27 has its CatchHandler @ 007b0f14 */
    facebook::react::Props::facebook::react::Props::initializeDynamicProps
              (uVar5,*param_3,param_2,local_70);
  }
  if (local_50 == local_70) {
    lVar4 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007b0e8c;
    lVar4 = 5;
    plVar3 = local_50;
  }
  (**(code **)(*plVar3 + lVar4 * 8))();
LAB_007b0e8c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007b0f64  FUN_007b0f64 =====

void FUN_007b0f64(long param_1)

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


// ===== 007b0fb4  FUN_007b0fb4 =====

void FUN_007b0fb4(long param_1)

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


// ===== 007b1004  FUN_007b1004 =====

void FUN_007b1004(undefined8 *param_1)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x720);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_00983a28;
  memset(__s,0,0x708);
                    /* try { // try from 007b1048 to 007b105b has its CatchHandler @ 007b10dc */
  FUN_00788b10(__s,PTR_PTR_0099e0a8 + 0x10);
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
  puVar1 = PTR_vtable_0099e0a0;
  *(undefined4 *)(puVar2 + 0xd9) = 0;
  *(undefined2 *)((long)puVar2 + 0x6cc) = 0;
  puVar2[0xdf] = 0;
  puVar2[3] = puVar1 + 0x20;
  *(undefined4 *)(puVar2 + 0xe0) = 0;
  puVar2[0xe3] = 0;
  puVar2[0xe2] = 0;
  puVar2[0xe1] = 0;
  *param_1 = __s;
  param_1[1] = puVar2;
  return;
}


// ===== 007b10f8  FUN_007b10f8 =====

void FUN_007b10f8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00983a28;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 007b1108  FUN_007b1108 =====

void FUN_007b1108(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00983a28;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 007b1138  FUN_007b1138 =====

void FUN_007b1138(long param_1)

{
  long lVar1;
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_30 = param_1 + 0x708;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_007b07cc(&local_30);
  FUN_0078917c(param_1 + 0x18,PTR_PTR_0099e0a8 + 8);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007b11a0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007b11a4  FUN_007b11a4 =====

void FUN_007b11a4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00983a78;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 007b11b4  FUN_007b11b4 =====

void FUN_007b11b4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00983a78;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 007b11e4  FUN_007b11e4 =====

void FUN_007b11e4(long param_1)

{
  long lVar1;
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_30 = param_1 + 0x708;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_007b07cc(&local_30);
  FUN_0078917c(param_1 + 0x18,PTR_PTR_0099e0a8 + 8);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007b124c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007b1250  FUN_007b1250 =====

void FUN_007b1250(long param_1)

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


// ===== 007b12a0  FUN_007b12a0 =====

void FUN_007b12a0(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00983ac8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 007b12b0  FUN_007b12b0 =====

void FUN_007b12b0(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00983ac8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 007b12e0  FUN_007b12e0 =====

void FUN_007b12e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007b12e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 007b12ec  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007b12f0  FUN_007b12f0 =====

EventEmitter * FUN_007b12f0(EventEmitter *param_1,undefined8 *param_2,undefined8 *param_3)

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
                    /* try { // try from 007b1338 to 007b1347 has its CatchHandler @ 007b140c */
  facebook::react::EventEmitter::EventEmitter(param_1,&local_50,&local_60);
  *(undefined ***)param_1 = &PTR_FUN_0097ff10;
                    /* try { // try from 007b1354 to 007b135b has its CatchHandler @ 007b13fc */
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
  *(undefined ***)param_1 = &PTR_FUN_00983b18;
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


// ===== 007b1440  FUN_007b1440 =====

void FUN_007b1440(undefined8 *param_1)

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


// ===== 007b14f0  FUN_007b14f0 =====

ShadowNodeFamily *
FUN_007b14f0(ShadowNodeFamily *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
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
                    /* try { // try from 007b1554 to 007b156b has its CatchHandler @ 007b15d4 */
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


// ===== 007b160c  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_34DCDTTIMeasurementViewComponentNameEEEENS0_26DCDTTIMeasurementViewPropsENS0_33DCDTTIMeasurementViewEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE =====

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_34DCDTTIMeasurementViewComponentNameEEEENS0_26DCDTTIMeasurementViewPropsENS0_33DCDTTIMeasurementViewEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE
               (undefined8 *param_1)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_007b1660(&local_30);
  *param_1 = local_30;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007b1660  FUN_007b1660 =====

void FUN_007b1660(undefined8 *param_1,ComponentDescriptorParameters *param_2)

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
                    /* try { // try from 007b16a4 to 007b16af has its CatchHandler @ 007b171c */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_90);
  *(undefined ***)this = &PTR_FUN_00983b50;
  FUN_007b174c(this + 0x38);
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


// ===== 007b174c  FUN_007b174c =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007b174c(undefined8 param_1)

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
                    /* try { // try from 007b17d0 to 007b17db has its CatchHandler @ 007b1dd0 */
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
  local_fa0 = PTR_construction_vtable_0099e250 + 0x20;
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
  puVar6 = PTR_PTR_0099e0c0;
  puVar5 = PTR_vtable_0099e0b8;
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
  local_fa0 = PTR_vtable_0099e0b8 + 0x20;
  local_70 = (long *)0x0;
                    /* try { // try from 007b1bc4 to 007b1beb has its CatchHandler @ 007b1d94 */
  facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)local_8c0,(PropsParserContext *)(PTR_PTR_0099e0c0 + 8),
             (HostPlatformViewProps *)local_fb0,(RawProps *)&local_fa0,(function *)&local_120);
  if (local_70 == &local_90) {
    lVar7 = 4;
    plVar8 = &local_90;
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_007b1c18;
    lVar7 = 5;
    plVar8 = local_70;
  }
  (**(code **)(*plVar8 + lVar7 * 8))();
LAB_007b1c18:
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
                    /* try { // try from 007b1d24 to 007b1d2f has its CatchHandler @ 007b1ddc */
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


// ===== 007b1de0  FUN_007b1de0 =====

void FUN_007b1de0(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 007b1e04  FUN_007b1e04 =====

undefined * FUN_007b1e04(void)

{
  return PTR_DCDTTIMeasurementViewComponentName_0099e0b0;
}


// ===== 007b1e10  FUN_007b1e10 =====

undefined * FUN_007b1e10(void)

{
  return PTR_DCDTTIMeasurementViewComponentName_0099e0b0;
}


// ===== 007b1e1c  FUN_007b1e1c =====

undefined8 FUN_007b1e1c(void)

{
  return 0x61;
}


// ===== 007b1e24  FUN_007b1e24 =====

void FUN_007b1e24(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_007b2614(&local_60,&uStack_49,param_3,param_4,&local_64);
                    /* try { // try from 007b1e8c to 007b1e93 has its CatchHandler @ 007b1ec4 */
  (**(code **)(*param_2 + 0x60))(param_2,local_60);
  param_1[1] = uStack_58;
  *param_1 = local_60;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007b1eec  FUN_007b1eec =====

void FUN_007b1eec(undefined8 *param_1,long *param_2,shared_ptr *param_3,undefined8 param_4)

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
  FUN_007b28c8(&local_60,&local_70);
                    /* try { // try from 007b1f38 to 007b1f43 has its CatchHandler @ 007b1ff0 */
  (**(code **)(*local_60 + 0x10))(local_60,param_3,param_4);
  local_70 = local_60;
  local_68 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    FUN_00757d00(1,plStack_58 + 1);
  }
                    /* try { // try from 007b1f5c to 007b1f6b has its CatchHandler @ 007b1fe0 */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_70);
  plVar2 = local_68;
  if ((local_68 != (long *)0x0) &&
     (lVar3 = FUN_00757990(0xffffffffffffffff,local_68 + 1), lVar3 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 007b1fa8 to 007b1faf has its CatchHandler @ 007b1ff0 */
  (**(code **)(*param_2 + 0x60))(param_2,local_60);
  param_1[1] = plStack_58;
  *param_1 = local_60;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007b2018  FUN_007b2018 =====

void FUN_007b2018(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x007b2028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 007b202c  FUN_007b202c =====

void FUN_007b202c(undefined8 *param_1,long param_2,undefined8 param_3,long *param_4,
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
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_34DCDTTIMeasurementViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_26DCDTTIMeasurementViewPropsENS0_33DCDTTIMeasurementViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de10
         & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_34DCDTTIMeasurementViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_26DCDTTIMeasurementViewPropsENS0_33DCDTTIMeasurementViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de10
                                   ), iVar7 != 0)) {
                    /* try { // try from 007b22f8 to 007b2307 has its CatchHandler @ 007b2334 */
      FUN_007b2dc4(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_34DCDTTIMeasurementViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_26DCDTTIMeasurementViewPropsENS0_33DCDTTIMeasurementViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de08
                   ,adStack_d0);
      __cxa_atexit(FUN_007b2d74,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_34DCDTTIMeasurementViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_26DCDTTIMeasurementViewPropsENS0_33DCDTTIMeasurementViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de08
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_34DCDTTIMeasurementViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_26DCDTTIMeasurementViewPropsENS0_33DCDTTIMeasurementViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de10
                         );
    }
    lVar10 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_34DCDTTIMeasurementViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_26DCDTTIMeasurementViewPropsENS0_33DCDTTIMeasurementViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de08
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_34DCDTTIMeasurementViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_26DCDTTIMeasurementViewPropsENS0_33DCDTTIMeasurementViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de08
    ;
    param_1[1] = lVar10;
    if (lVar10 != 0) {
      FUN_00757d00(1,lVar10 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    FUN_007b29cc(&local_f0,param_3,param_5,param_4);
                    /* try { // try from 007b20d4 to 007b20e7 has its CatchHandler @ 007b2368 */
    uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if (((uVar8 & 1) == 0) ||
       ((uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar8 & 1) == 0 ||
        (uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enablePropsUpdateReconciliationAndroid(), (uVar8 & 1) == 0)))) {
LAB_007b2110:
      local_100 = local_f0;
      local_f8 = plStack_e8;
      if (plStack_e8 != (long *)0x0) {
        FUN_00757d00(1,plStack_e8 + 1);
      }
                    /* try { // try from 007b2128 to 007b2137 has its CatchHandler @ 007b2358 */
      FUN_007b2b9c(&local_100,param_5,param_4);
      plVar4 = local_f8;
      if ((local_f8 != (long *)0x0) &&
         (lVar10 = FUN_00757990(0xffffffffffffffff,local_f8 + 1), lVar10 == 0)) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 007b20f8 to 007b20ff has its CatchHandler @ 007b2348 */
      pcVar9 = (char *)(**(code **)(*local_f0 + 0x10))();
      iVar7 = strcmp(PTR_DCDTTIMeasurementViewComponentName_0099e0b0,pcVar9);
      if (iVar7 != 0) goto LAB_007b2110;
      bVar3 = false;
    }
                    /* try { // try from 007b216c to 007b216f has its CatchHandler @ 007b2368 */
    uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar8 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 007b217c to 007b2197 has its CatchHandler @ 007b2354 */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(local_f0 + 4));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_f0;
      plVar5 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 007b22d8 to 007b22e7 has its CatchHandler @ 007b234c */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_007b23b4;
      }
      for (; local_f0 = plVar4, plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (*(int *)(plVar5 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 007b22b8 to 007b22c7 has its CatchHandler @ 007b2374 */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_007b23b4;
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
                    /* try { // try from 007b2218 to 007b2223 has its CatchHandler @ 007b237c */
        folly::dynamic::dynamic(adStack_d0,(dynamic *)(plVar5 + 8));
        local_a0 = 0;
                    /* try { // try from 007b2228 to 007b223f has its CatchHandler @ 007b2380 */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (plVar4,param_3,uVar1,pcVar9,adStack_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 007b2250 to 007b225b has its CatchHandler @ 007b2370 */
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
LAB_007b23b4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007b23b8  FUN_007b23b8 =====

void FUN_007b23b8(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 007b23c0  FUN_007b23c0 =====

void FUN_007b23c0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 007b23c8  FUN_007b23c8 =====

void FUN_007b23c8(long *param_1,long param_2,long param_3)

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
                    /* try { // try from 007b2410 to 007b2417 has its CatchHandler @ 007b2598 */
  plVar4 = (long *)operator_new(0x68);
  plVar1 = plVar4 + 3;
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_00983d98;
                    /* try { // try from 007b2430 to 007b243f has its CatchHandler @ 007b2580 */
  FUN_007b2ff0(plVar1,auStack_80,param_2 + 8);
  local_70 = plVar1;
  local_68 = plVar4;
  if ((local_78 != (long *)0x0) &&
     (lVar5 = FUN_00757990(0xffffffffffffffff,local_78 + 1), lVar5 == 0)) {
    (**(code **)(*local_78 + 0x10))(local_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 007b2474 to 007b247b has its CatchHandler @ 007b2570 */
  puVar6 = (undefined8 *)operator_new(0x1a0);
  puVar2 = puVar6 + 4;
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_0097fff0;
                    /* try { // try from 007b2494 to 007b24ab has its CatchHandler @ 007b2558 */
  FUN_007b31f0(puVar2,param_3,&local_70,param_2 + 8,param_2);
  plVar1 = local_70;
  *param_1 = (long)puVar2;
  param_1[1] = (long)puVar6;
  local_90 = puVar2;
  local_88 = puVar6;
  FUN_00757d00(1,puVar6 + 2);
                    /* try { // try from 007b24c4 to 007b24cf has its CatchHandler @ 007b2538 */
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


// ===== 007b25c0  FUN_007b25c0 =====

void FUN_007b25c0(void)

{
  return;
}


// ===== 007b25c4  FUN_007b25c4 =====

void FUN_007b25c4(long param_1)

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


// ===== 007b2614  FUN_007b2614 =====

void FUN_007b2614(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  *puVar6 = &PTR_FUN_00983be0;
                    /* try { // try from 007b265c to 007b266b has its CatchHandler @ 007b2704 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
            ((YogaLayoutableShadowNode *)(puVar6 + 3),param_3,param_4,uVar8);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_00983c30;
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


// ===== 007b2720  FUN_007b2720 =====

void FUN_007b2720(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00983be0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 007b2730  FUN_007b2730 =====

void FUN_007b2730(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00983be0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 007b2760  FUN_007b2760 =====

void FUN_007b2760(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007b2768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 007b276c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007b2770  FUN_007b2770 =====

void FUN_007b2770(long *param_1)

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


// ===== 007b2830  FUN_007b2830 =====

void FUN_007b2830(long param_1)

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


// ===== 007b2898  FUN_007b2898 =====

bool FUN_007b2898(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 007b28b0  FUN_007b28b0 =====

bool FUN_007b28b0(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 007b28c8  FUN_007b28c8 =====

void FUN_007b28c8(undefined8 *param_1,undefined8 param_2,ShadowNode *param_3,
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
  *puVar6 = &PTR_FUN_00983be0;
                    /* try { // try from 007b2908 to 007b2917 has its CatchHandler @ 007b29b0 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
            ((YogaLayoutableShadowNode *)(puVar6 + 3),param_3,param_4);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_00983c30;
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


// ===== 007b29cc  FUN_007b29cc =====

void FUN_007b29cc(undefined8 *param_1,HostPlatformViewProps *param_2,function *param_3,long *param_4
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
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_34DCDTTIMeasurementViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_26DCDTTIMeasurementViewPropsENS0_33DCDTTIMeasurementViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de10
         & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_34DCDTTIMeasurementViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_26DCDTTIMeasurementViewPropsENS0_33DCDTTIMeasurementViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de10
                                   ), iVar3 != 0)) {
                    /* try { // try from 007b2aec to 007b2afb has its CatchHandler @ 007b2b28 */
      FUN_007b2dc4(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_34DCDTTIMeasurementViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_26DCDTTIMeasurementViewPropsENS0_33DCDTTIMeasurementViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de08
                   ,local_90);
      __cxa_atexit(FUN_007b2d74,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_34DCDTTIMeasurementViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_26DCDTTIMeasurementViewPropsENS0_33DCDTTIMeasurementViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de08
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_34DCDTTIMeasurementViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_26DCDTTIMeasurementViewPropsENS0_33DCDTTIMeasurementViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de10
                         );
    }
    pRVar7 = *(RawProps **)
              PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_34DCDTTIMeasurementViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_26DCDTTIMeasurementViewPropsENS0_33DCDTTIMeasurementViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de08
    ;
  }
  puVar4 = (undefined8 *)operator_new(0x6f8);
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_00983d48;
  local_70 = (long *)0x0;
                    /* try { // try from 007b2a48 to 007b2a6f has its CatchHandler @ 007b2b3c */
  facebook::react::HostPlatformViewProps::HostPlatformViewProps
            ((HostPlatformViewProps *)(puVar4 + 3),(PropsParserContext *)(PTR_PTR_0099e0c0 + 8),
             param_2,pRVar7,param_3);
  if (local_70 == local_90) {
    lVar6 = 4;
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_007b2a9c;
    lVar6 = 5;
    plVar5 = local_70;
  }
  (**(code **)(*plVar5 + lVar6 * 8))();
LAB_007b2a9c:
  puVar2 = PTR_vtable_0099e0b8;
  *param_1 = (HostPlatformViewProps *)(puVar4 + 3);
  param_1[1] = puVar4;
  puVar4[3] = puVar2 + 0x20;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007b2b9c  FUN_007b2b9c =====

void FUN_007b2b9c(undefined8 *param_1,undefined8 param_2,long *param_3)

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
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_34DCDTTIMeasurementViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_26DCDTTIMeasurementViewPropsENS0_33DCDTTIMeasurementViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de10
         & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_34DCDTTIMeasurementViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_26DCDTTIMeasurementViewPropsENS0_33DCDTTIMeasurementViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de10
                                   ), iVar2 != 0)) {
                    /* try { // try from 007b2c80 to 007b2c8f has its CatchHandler @ 007b2cbc */
      FUN_007b2dc4(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_34DCDTTIMeasurementViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_26DCDTTIMeasurementViewPropsENS0_33DCDTTIMeasurementViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de08
                   ,local_70);
      __cxa_atexit(FUN_007b2d74,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_34DCDTTIMeasurementViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_26DCDTTIMeasurementViewPropsENS0_33DCDTTIMeasurementViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de08
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_34DCDTTIMeasurementViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_26DCDTTIMeasurementViewPropsENS0_33DCDTTIMeasurementViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de10
                         );
    }
    local_50 = (long *)0x0;
                    /* try { // try from 007b2c0c to 007b2c1f has its CatchHandler @ 007b2cd0 */
    facebook::react::Props::facebook::react::Props::initializeDynamicProps
              (uVar5,*(undefined8 *)
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_34DCDTTIMeasurementViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_26DCDTTIMeasurementViewPropsENS0_33DCDTTIMeasurementViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de08
               ,param_2,local_70);
  }
  else {
    local_50 = (long *)0x0;
                    /* try { // try from 007b2bd0 to 007b2be7 has its CatchHandler @ 007b2cd4 */
    facebook::react::Props::facebook::react::Props::initializeDynamicProps
              (uVar5,*param_3,param_2,local_70);
  }
  if (local_50 == local_70) {
    lVar4 = 4;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007b2c4c;
    lVar4 = 5;
    plVar3 = local_50;
  }
  (**(code **)(*plVar3 + lVar4 * 8))();
LAB_007b2c4c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007b2d24  FUN_007b2d24 =====

void FUN_007b2d24(long param_1)

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


// ===== 007b2d74  FUN_007b2d74 =====

void FUN_007b2d74(long param_1)

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


// ===== 007b2dc4  FUN_007b2dc4 =====

void FUN_007b2dc4(undefined8 *param_1)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x6f8);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_00983cf8;
  memset(__s,0,0x6e0);
                    /* try { // try from 007b2e08 to 007b2e1b has its CatchHandler @ 007b2e84 */
  FUN_00788b10(__s,PTR_PTR_0099e0c0 + 0x10);
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
  puVar1 = PTR_vtable_0099e0b8;
  *(undefined4 *)(puVar2 + 0xd9) = 0;
  *(undefined2 *)((long)puVar2 + 0x6cc) = 0;
  *param_1 = __s;
  param_1[1] = puVar2;
  puVar2[3] = puVar1 + 0x20;
  return;
}


// ===== 007b2ea0  FUN_007b2ea0 =====

void FUN_007b2ea0(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00983cf8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 007b2eb0  FUN_007b2eb0 =====

void FUN_007b2eb0(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00983cf8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 007b2ee0  FUN_007b2ee0 =====

void FUN_007b2ee0(long param_1)

{
  FUN_0078917c(param_1 + 0x18,PTR_PTR_0099e0c0 + 8);
  return;
}


// ===== 007b2ef4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007b2ef8  FUN_007b2ef8 =====

void FUN_007b2ef8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00983d48;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 007b2f08  FUN_007b2f08 =====

void FUN_007b2f08(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00983d48;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 007b2f38  FUN_007b2f38 =====

void FUN_007b2f38(long param_1)

{
  FUN_0078917c(param_1 + 0x18,PTR_PTR_0099e0c0 + 8);
  return;
}


// ===== 007b2f4c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007b2f50  FUN_007b2f50 =====

void FUN_007b2f50(long param_1)

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


// ===== 007b2fa0  FUN_007b2fa0 =====

void FUN_007b2fa0(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00983d98;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 007b2fb0  FUN_007b2fb0 =====

void FUN_007b2fb0(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00983d98;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 007b2fe0  FUN_007b2fe0 =====

void FUN_007b2fe0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007b2fe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 007b2fec  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 007b2ff0  FUN_007b2ff0 =====

EventEmitter * FUN_007b2ff0(EventEmitter *param_1,undefined8 *param_2,undefined8 *param_3)

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
                    /* try { // try from 007b3038 to 007b3047 has its CatchHandler @ 007b310c */
  facebook::react::EventEmitter::EventEmitter(param_1,&local_50,&local_60);
  *(undefined ***)param_1 = &PTR_FUN_0097ff10;
                    /* try { // try from 007b3054 to 007b305b has its CatchHandler @ 007b30fc */
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
  *(undefined ***)param_1 = &PTR_FUN_00983de8;
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


// ===== 007b3140  FUN_007b3140 =====

void FUN_007b3140(undefined8 *param_1)

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


// ===== 007b31f0  FUN_007b31f0 =====

ShadowNodeFamily *
FUN_007b31f0(ShadowNodeFamily *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
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
                    /* try { // try from 007b3254 to 007b326b has its CatchHandler @ 007b32d4 */
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


// ===== 007b330c  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_37TextDisplayComponentViewComponentNameEEEENS0_29TextDisplayComponentViewPropsENS0_36TextDisplayComponentViewEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE =====

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_37TextDisplayComponentViewComponentNameEEEENS0_29TextDisplayComponentViewPropsENS0_36TextDisplayComponentViewEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE
               (undefined8 *param_1)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_007b3360(&local_30);
  *param_1 = local_30;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007b3360  FUN_007b3360 =====

void FUN_007b3360(undefined8 *param_1,ComponentDescriptorParameters *param_2)

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
                    /* try { // try from 007b33a4 to 007b33af has its CatchHandler @ 007b341c */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_90);
  *(undefined ***)this = &PTR_FUN_00983e20;
  FUN_007b344c(this + 0x38);
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


// ===== 007b344c  FUN_007b344c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007b344c(undefined8 param_1)

{
  byte bVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  void *pvVar8;
  undefined4 local_1010 [2];
  undefined8 *local_1008;
  undefined *local_1000;
  undefined8 uStack_ff8;
  undefined8 local_ff0;
  undefined8 uStack_fe8;
  undefined4 local_fe0 [2];
  undefined8 local_fd8;
  undefined8 uStack_fd0;
  undefined8 local_fc8;
  undefined8 uStack_fc0;
  undefined4 local_fb8;
  undefined4 local_fb0;
  undefined1 local_fac;
  undefined8 local_fab;
  undefined8 local_fa3;
  undefined8 uStack_f9b;
  undefined8 local_f93;
  undefined8 uStack_f8b;
  undefined8 local_f83;
  undefined8 uStack_f7b;
  undefined8 local_f73;
  undefined6 uStack_f6b;
  undefined2 uStack_f65;
  undefined6 uStack_f63;
  undefined8 uStack_f5d;
  undefined4 local_f55;
  undefined8 local_f51;
  undefined1 local_f49;
  undefined1 uStack_f48;
  undefined7 uStack_f47;
  undefined8 uStack_f40;
  undefined8 uStack_f38;
  undefined8 uStack_f30;
  undefined8 local_f28;
  undefined8 uStack_f20;
  undefined8 local_f18;
  undefined8 uStack_f10;
  undefined8 local_f08;
  undefined8 uStack_f00;
  undefined8 local_ef8;
  undefined8 uStack_ef0;
  undefined8 uStack_ee8;
  undefined8 local_ee0;
  undefined8 local_ed8;
  undefined8 uStack_ed0;
  undefined8 local_ec8;
  undefined4 uStack_ec0;
  undefined4 uStack_ebc;
  undefined4 uStack_eb8;
  undefined4 uStack_eb4;
  undefined4 uStack_eb0;
  undefined4 uStack_eac;
  undefined8 local_ea8;
  undefined8 uStack_ea0;
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
  undefined1 local_e18;
  undefined1 local_e14;
  undefined1 local_e08;
  undefined8 local_e00;
  undefined8 uStack_df8;
  undefined8 uStack_df0;
  undefined8 uStack_de8;
  undefined8 local_de0;
  undefined8 uStack_dd8;
  undefined8 uStack_dd0;
  undefined1 uStack_dc8;
  undefined7 local_dc7;
  undefined1 uStack_dc0;
  undefined8 uStack_dbf;
  undefined8 local_db4;
  undefined8 uStack_dac;
  undefined8 uStack_da4;
  undefined8 uStack_d9c;
  undefined8 local_d94;
  undefined8 uStack_d8c;
  undefined8 uStack_d84;
  undefined8 uStack_d7c;
  undefined8 local_d74;
  undefined8 uStack_d6c;
  undefined8 uStack_d64;
  undefined5 uStack_d5c;
  undefined3 local_d57;
  undefined5 uStack_d54;
  undefined1 local_d4c;
  undefined1 local_d48;
  undefined1 local_d44;
  undefined1 local_d40;
  undefined1 local_d3c;
  undefined1 local_d38;
  undefined1 local_d20;
  undefined8 local_d18;
  undefined8 uStack_d10;
  undefined8 local_d08;
  undefined4 local_d00;
  undefined1 local_cfc;
  undefined4 local_cfb;
  undefined1 local_cf7;
  undefined1 local_cf6;
  undefined8 local_cf0;
  undefined8 uStack_ce8;
  undefined8 uStack_ce0;
  undefined8 uStack_cd8;
  undefined8 local_cd0;
  undefined7 uStack_cc8;
  undefined4 uStack_cc1;
  undefined8 local_cbc;
  undefined1 local_cb4;
  undefined1 local_cac;
  undefined1 local_ca8;
  undefined1 local_ca0;
  undefined1 local_c9c;
  undefined1 local_c94;
  undefined1 local_c90;
  undefined1 local_c88;
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
  undefined1 local_c14;
  undefined1 local_c10;
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
  undefined8 local_bb8;
  undefined8 uStack_bb0;
  undefined8 local_ba8;
  undefined8 uStack_ba0;
  undefined8 uStack_b98;
  undefined8 uStack_b90;
  undefined2 local_b88;
  undefined8 local_b84;
  undefined1 local_b7c;
  undefined8 local_b78;
  undefined8 local_b70;
  undefined8 uStack_b68;
  undefined1 local_b60;
  undefined8 local_b58;
  undefined8 uStack_b50;
  undefined8 uStack_b48;
  undefined8 uStack_b40;
  undefined8 local_b38;
  undefined8 uStack_b30;
  undefined8 uStack_b28;
  undefined8 uStack_b20;
  undefined8 local_b18;
  undefined8 uStack_b10;
  undefined8 uStack_b08;
  undefined8 uStack_b00;
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
  undefined8 local_aa8;
  undefined8 uStack_aa0;
  undefined8 local_a98;
  undefined8 uStack_a90;
  undefined8 local_a88;
  undefined8 uStack_a80;
  undefined8 local_a78;
  undefined8 uStack_a70;
  undefined8 local_a68;
  undefined6 uStack_a60;
  undefined2 uStack_a5a;
  undefined6 uStack_a58;
  undefined1 local_a50;
  undefined1 local_a4c;
  undefined1 local_a48;
  undefined8 local_a44;
  undefined8 uStack_a3c;
  undefined1 local_a34;
  undefined8 local_a30;
  undefined2 local_a28;
  undefined1 local_a26;
  undefined4 local_a24;
  undefined1 local_a20;
  undefined1 local_9c0;
  undefined1 local_9b8;
  undefined1 local_958;
  undefined4 local_950;
  undefined2 local_94c;
  undefined1 local_948;
  undefined1 local_944;
  undefined1 local_940;
  undefined1 local_93c;
  undefined1 local_938;
  undefined1 local_934;
  undefined1 local_930;
  undefined1 local_92c;
  undefined1 local_928;
  undefined1 local_924;
  ulong local_920;
  undefined8 uStack_918;
  void *local_910;
  ulong uStack_908;
  undefined8 local_900;
  undefined5 uStack_8f8;
  undefined3 uStack_8f3;
  undefined5 uStack_8f0;
  TextDisplayComponentViewProps aTStack_8e8 [1760];
  byte local_208;
  void *local_1f8;
  byte local_1f0;
  void *local_1e0;
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
                    /* try { // try from 007b34d4 to 007b34df has its CatchHandler @ 007b3aa4 */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1d0);
  local_120 = CONCAT44(local_120._4_4_,0x3f800000);
  local_1010[0] = 0xffffffff;
  uStack_128 = 0;
  local_130 = (void *)0x0;
  uStack_138 = 0;
  local_140 = (void *)0x0;
  local_1008 = &local_1d0;
  facebook::react::RawProps::facebook::react::RawProps::parse(&local_118,param_1);
  memset(local_fe0,0,0x6f8);
  local_88[0] = 5;
  local_70 = 0;
  local_1000 = PTR_construction_vtable_0099e258 + 0x20;
  local_fe0[0] = 5;
  uStack_fe8 = 0;
  local_ff0 = 0;
  uStack_ff8 = 0;
  local_68 = 0;
  uStack_60 = 0x3f800000;
  uStack_78 = 0;
  local_80 = 0;
  uStack_fd0 = 0;
  local_fd8 = 0;
  uStack_fc0 = 0;
  local_fc8 = 0;
  local_fb8 = 0x3f800000;
  folly::dynamic::folly::dynamic::destroy(local_88);
  local_fac = 0;
  local_f51 = 0;
  uStack_a70 = _UNK_00470a7c;
  local_a78 = _DAT_00470a74;
  local_fab = _s__00375408;
  uStack_b68 = _UNK_00371598;
  local_b70 = _DAT_00371590;
  uStack_a80 = _UNK_00470a6c;
  local_a88 = _DAT_00470a64;
  local_e94 = 0;
  uStack_a90 = _UNK_00470a5c;
  local_a98 = _DAT_00470a54;
  uStack_aa0 = _UNK_00470a4c;
  local_aa8 = _DAT_00470a44;
  uStack_a58 = 0;
  local_e8c = 0;
  uStack_ec0 = 0;
  local_ec8 = 0;
  uStack_eac = 0;
  uStack_ed0 = 0;
  local_ed8 = 0;
  uStack_a60 = 0;
  uStack_a5a = 0;
  local_a68 = 0;
  local_fb0 = 0x10410710;
  local_f55 = 0x40004;
  uStack_eb4 = 0;
  uStack_eb0 = 0;
  uStack_ebc = 0;
  uStack_eb8 = 0;
  uStack_ea0 = 0;
  local_ea8 = 0;
  local_e98 = 0x7fc00000;
  local_e90 = 0x7fc00000;
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
  uStack_dbf = 0;
  uStack_dc0 = 0;
  uStack_dac = 0;
  local_db4 = 0;
  uStack_d9c = 0;
  uStack_da4 = 0;
  uStack_d8c = 0;
  local_d94 = 0;
  uStack_d7c = 0;
  uStack_d84 = 0;
  uStack_d6c = 0;
  local_d74 = 0;
  uStack_d5c = 0;
  uStack_d64 = 0;
  local_d57 = 0;
  uStack_d54 = 0;
  local_cfc = 1;
  local_cfb = 0;
  local_cf6 = 0x23;
  local_cbc = 0x3f800000;
  uStack_ba0 = 0;
  local_ba8 = 0;
  uStack_b90 = 0;
  uStack_b98 = 0;
  uStack_bb0 = 0;
  local_bb8 = 0;
  local_b84 = 0;
  uStack_b50 = 0;
  local_b58 = 0;
  uStack_b40 = 0;
  uStack_b48 = 0;
  uStack_b30 = 0;
  local_b38 = 0;
  uStack_b20 = 0;
  uStack_b28 = 0;
  uStack_b10 = 0;
  local_b18 = 0;
  uStack_b00 = 0;
  uStack_b08 = 0;
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
  uStack_f47 = 0;
  uStack_f9b = 0;
  local_fa3 = 0;
  uStack_f8b = 0;
  local_f93 = 0;
  uStack_f7b = 0;
  local_f83 = 0;
  uStack_f6b = 0;
  local_f73 = 0;
  uStack_f5d = 0;
  uStack_f65 = 0;
  uStack_f63 = 0;
  local_f49 = 0;
  uStack_f48 = 0;
  uStack_f38 = 0;
  uStack_f40 = 0;
  local_f28 = 0;
  uStack_f30 = 0;
  local_f18 = 0;
  uStack_f20 = 0;
  local_f08 = 0;
  uStack_f10 = 0;
  local_ef8 = 0;
  uStack_f00 = 0;
  uStack_ee8 = 0;
  uStack_ef0 = 0;
  local_ee0 = 0;
  local_e84 = 0;
  local_e7c = 0;
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
  local_e18 = 0;
  local_e14 = 0;
  local_e08 = 0;
  local_d4c = 0;
  local_d48 = 0;
  local_d44 = 0;
  local_d40 = 0;
  local_d3c = 0;
  local_d38 = 0;
  local_d20 = 0;
  uStack_df8 = 0;
  local_e00 = 0;
  uStack_de8 = 0;
  uStack_df0 = 0;
  uStack_dd8 = 0;
  local_de0 = 0;
  uStack_dc8 = 0;
  local_dc7 = 0;
  uStack_dd0 = 0;
  uStack_d10 = 0;
  local_d18 = 0;
  local_d08 = 0;
  local_d00 = 0;
  local_cf7 = 0;
  uStack_ce8 = 0;
  local_cf0 = 0;
  uStack_cd8 = 0;
  uStack_ce0 = 0;
  uStack_cc8 = 0;
  uStack_cc1 = 0;
  local_cd0 = 0;
  local_cb4 = 0;
  local_cac = 0;
  local_ca8 = 0;
  local_ca0 = 0;
  local_c9c = 0;
  local_c94 = 0;
  local_c90 = 0;
  local_c88 = 0;
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
  local_c14 = 0;
  local_c10 = 0;
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
  local_b78 = 0;
  local_b88 = 0;
  local_b7c = 0;
  local_b60 = 0;
  local_a50 = 0;
  local_a4c = 0;
  local_a48 = 0;
  local_a30 = 0;
  uStack_a3c = 0;
  local_a44 = 0;
  local_a34 = 0;
  local_a28 = 0x101;
  local_a26 = 0;
  local_a24 = 0;
  local_a20 = 0;
  local_9c0 = 0;
  local_9b8 = 0;
  local_958 = 0;
  local_948 = 0;
  local_944 = 0;
  local_940 = 0;
  local_93c = 0;
  local_938 = 0;
  local_934 = 0;
  local_930 = 0;
  local_92c = 0;
  local_928 = 0;
  local_924 = 0;
  local_94c = 0;
  local_950 = 0;
  local_1000 = PTR_vtable_0099e0d0 + 0x20;
  uStack_918 = 0;
  local_920 = 0;
  uStack_8f0 = 0;
  uStack_908 = 0;
  local_910 = (void *)0x0;
  uStack_8f8 = 0;
  uStack_8f3 = 0;
  local_900 = 0;
                    /* try { // try from 007b38d8 to 007b38eb has its CatchHandler @ 007b3aa4 */
  facebook::react::TextDisplayComponentViewProps::TextDisplayComponentViewProps
            (aTStack_8e8,(PropsParserContext *)local_1010,
             (TextDisplayComponentViewProps *)&local_1000,(RawProps *)&local_118);
  if ((local_1f0 & 1) != 0) {
    operator_delete(local_1e0);
  }
  if ((local_208 & 1) != 0) {
    operator_delete(local_1f8);
  }
  puVar5 = PTR_PTR_0099e0d8;
  FUN_0078917c(aTStack_8e8,PTR_PTR_0099e0d8 + 8);
  if ((uStack_908 & 1) != 0) {
    operator_delete((void *)CONCAT35(uStack_8f3,uStack_8f8));
  }
  if ((local_920 & 1) != 0) {
    operator_delete(local_910);
  }
  FUN_0078917c(&local_1000,puVar5 + 8);
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
                    /* try { // try from 007b3a38 to 007b3a43 has its CatchHandler @ 007b3aa8 */
        (*(code *)(&PTR_FUN_0097fbf8)[*(uint *)((long)pvVar3 + -8)])
                  (&local_1000,(void *)((long)pvVar3 + -0x38));
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


// ===== 007b3aac  FUN_007b3aac =====

void FUN_007b3aac(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 007b3ad0  FUN_007b3ad0 =====

undefined * FUN_007b3ad0(void)

{
  return PTR_TextDisplayComponentViewComponentName_0099e0c8;
}


// ===== 007b3adc  FUN_007b3adc =====

undefined * FUN_007b3adc(void)

{
  return PTR_TextDisplayComponentViewComponentName_0099e0c8;
}


// ===== 007b3ae8  FUN_007b3ae8 =====

undefined8 FUN_007b3ae8(void)

{
  return 0x61;
}


// ===== 007b3af0  FUN_007b3af0 =====

void FUN_007b3af0(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_007b42e0(&local_60,&uStack_49,param_3,param_4,&local_64);
                    /* try { // try from 007b3b58 to 007b3b5f has its CatchHandler @ 007b3b90 */
  (**(code **)(*param_2 + 0x60))(param_2,local_60);
  param_1[1] = uStack_58;
  *param_1 = local_60;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007b3bb8  FUN_007b3bb8 =====

void FUN_007b3bb8(undefined8 *param_1,long *param_2,shared_ptr *param_3,undefined8 param_4)

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
  FUN_007b4594(&local_60,&local_70);
                    /* try { // try from 007b3c04 to 007b3c0f has its CatchHandler @ 007b3cbc */
  (**(code **)(*local_60 + 0x10))(local_60,param_3,param_4);
  local_70 = local_60;
  local_68 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    FUN_00757d00(1,plStack_58 + 1);
  }
                    /* try { // try from 007b3c28 to 007b3c37 has its CatchHandler @ 007b3cac */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_70);
  plVar2 = local_68;
  if ((local_68 != (long *)0x0) &&
     (lVar3 = FUN_00757990(0xffffffffffffffff,local_68 + 1), lVar3 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 007b3c74 to 007b3c7b has its CatchHandler @ 007b3cbc */
  (**(code **)(*param_2 + 0x60))(param_2,local_60);
  param_1[1] = plStack_58;
  *param_1 = local_60;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007b3ce4  FUN_007b3ce4 =====

void FUN_007b3ce4(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x007b3cf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 007b3cf8  FUN_007b3cf8 =====

void FUN_007b3cf8(undefined8 *param_1,long param_2,undefined8 param_3,long *param_4,
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
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37TextDisplayComponentViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29TextDisplayComponentViewPropsENS0_36TextDisplayComponentViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de20
         & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37TextDisplayComponentViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29TextDisplayComponentViewPropsENS0_36TextDisplayComponentViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de20
                                   ), iVar7 != 0)) {
                    /* try { // try from 007b3fc4 to 007b3fd3 has its CatchHandler @ 007b4000 */
      FUN_007b4a0c(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37TextDisplayComponentViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29TextDisplayComponentViewPropsENS0_36TextDisplayComponentViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de18
                   ,adStack_d0);
      __cxa_atexit(FUN_007b49bc,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37TextDisplayComponentViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29TextDisplayComponentViewPropsENS0_36TextDisplayComponentViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de18
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37TextDisplayComponentViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29TextDisplayComponentViewPropsENS0_36TextDisplayComponentViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de20
                         );
    }
    lVar10 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37TextDisplayComponentViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29TextDisplayComponentViewPropsENS0_36TextDisplayComponentViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de18
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37TextDisplayComponentViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29TextDisplayComponentViewPropsENS0_36TextDisplayComponentViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099de18
    ;
    param_1[1] = lVar10;
    if (lVar10 != 0) {
      FUN_00757d00(1,lVar10 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    FUN_007b4698(&local_f0,param_3,param_5,param_4);
                    /* try { // try from 007b3da0 to 007b3db3 has its CatchHandler @ 007b4034 */
    uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if (((uVar8 & 1) == 0) ||
       ((uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar8 & 1) == 0 ||
        (uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enablePropsUpdateReconciliationAndroid(), (uVar8 & 1) == 0)))) {
LAB_007b3ddc:
      local_100 = local_f0;
      local_f8 = plStack_e8;
      if (plStack_e8 != (long *)0x0) {
        FUN_00757d00(1,plStack_e8 + 1);
      }
                    /* try { // try from 007b3df4 to 007b3e03 has its CatchHandler @ 007b4024 */
      FUN_007b47e4(&local_100,param_5,param_4);
      plVar4 = local_f8;
      if ((local_f8 != (long *)0x0) &&
         (lVar10 = FUN_00757990(0xffffffffffffffff,local_f8 + 1), lVar10 == 0)) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 007b3dc4 to 007b3dcb has its CatchHandler @ 007b4014 */
      pcVar9 = (char *)(**(code **)(*local_f0 + 0x10))();
      iVar7 = strcmp(PTR_TextDisplayComponentViewComponentName_0099e0c8,pcVar9);
      if (iVar7 != 0) goto LAB_007b3ddc;
      bVar3 = false;
    }
                    /* try { // try from 007b3e38 to 007b3e3b has its CatchHandler @ 007b4034 */
    uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar8 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 007b3e48 to 007b3e63 has its CatchHandler @ 007b4020 */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(local_f0 + 4));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_f0;
      plVar5 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 007b3fa4 to 007b3fb3 has its CatchHandler @ 007b4018 */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_007b4080;
      }
      for (; local_f0 = plVar4, plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (*(int *)(plVar5 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 007b3f84 to 007b3f93 has its CatchHandler @ 007b4040 */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_007b4080;
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
                    /* try { // try from 007b3ee4 to 007b3eef has its CatchHandler @ 007b4048 */
        folly::dynamic::dynamic(adStack_d0,(dynamic *)(plVar5 + 8));
        local_a0 = 0;
                    /* try { // try from 007b3ef4 to 007b3f0b has its CatchHandler @ 007b404c */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (plVar4,param_3,uVar1,pcVar9,adStack_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 007b3f1c to 007b3f27 has its CatchHandler @ 007b403c */
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
LAB_007b4080:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 007b4084  FUN_007b4084 =====

void FUN_007b4084(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 007b408c  FUN_007b408c =====

void FUN_007b408c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 007b4094  FUN_007b4094 =====

void FUN_007b4094(long *param_1,long param_2,long param_3)

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
                    /* try { // try from 007b40dc to 007b40e3 has its CatchHandler @ 007b4264 */
  plVar4 = (long *)operator_new(0x68);
  plVar1 = plVar4 + 3;
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_00984068;
                    /* try { // try from 007b40fc to 007b410b has its CatchHandler @ 007b424c */
  FUN_007b4cc4(plVar1,auStack_80,param_2 + 8);
  local_70 = plVar1;
  local_68 = plVar4;
  if ((local_78 != (long *)0x0) &&
     (lVar5 = FUN_00757990(0xffffffffffffffff,local_78 + 1), lVar5 == 0)) {
    (**(code **)(*local_78 + 0x10))(local_78);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 007b4140 to 007b4147 has its CatchHandler @ 007b423c */
  puVar6 = (undefined8 *)operator_new(0x1a0);
  puVar2 = puVar6 + 4;
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_0097fff0;
                    /* try { // try from 007b4160 to 007b4177 has its CatchHandler @ 007b4224 */
  FUN_007b4ec4(puVar2,param_3,&local_70,param_2 + 8,param_2);
  plVar1 = local_70;
  *param_1 = (long)puVar2;
  param_1[1] = (long)puVar6;
  local_90 = puVar2;
  local_88 = puVar6;
  FUN_00757d00(1,puVar6 + 2);
                    /* try { // try from 007b4190 to 007b419b has its CatchHandler @ 007b4204 */
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


// ===== 007b428c  FUN_007b428c =====

void FUN_007b428c(void)

{
  return;
}


// ===== 007b4290  FUN_007b4290 =====

void FUN_007b4290(long param_1)

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


// ===== 007b42e0  FUN_007b42e0 =====

void FUN_007b42e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  *puVar6 = &PTR_FUN_00983eb0;
                    /* try { // try from 007b4328 to 007b4337 has its CatchHandler @ 007b43d0 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
            ((YogaLayoutableShadowNode *)(puVar6 + 3),param_3,param_4,uVar8);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_00983f00;
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


// ===== 007b43ec  FUN_007b43ec =====

void FUN_007b43ec(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00983eb0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 007b43fc  FUN_007b43fc =====

void FUN_007b43fc(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00983eb0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 007b442c  FUN_007b442c =====

void FUN_007b442c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007b4434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 007b4438  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


