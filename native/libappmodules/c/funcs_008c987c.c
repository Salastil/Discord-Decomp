// ===== 008c987c  FUN_008c987c =====

void FUN_008c987c(long param_1)

{
  if ((*(byte *)(param_1 + 0x6f8) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x708));
  }
  FUN_0078917c(param_1 + 0x18,PTR_PTR_0099e180 + 8);
  return;
}


// ===== 008c98b8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008c98bc  FUN_008c98bc =====

void FUN_008c98bc(long param_1)

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


// ===== 008c990c  FUN_008c990c =====

void FUN_008c990c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099d008;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008c991c  FUN_008c991c =====

void FUN_008c991c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099d008;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008c994c  FUN_008c994c =====

void FUN_008c994c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x008c9954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 008c9958  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008c995c  FUN_008c995c =====

void FUN_008c995c(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[9];
  *param_1 = (long)(PTR_DAT_0099dc88 + 0x10);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *param_1 = (long)&PTR_FUN_0097ff80;
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


// ===== 008c9a14  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_29SizingUtilComponentDescriptorINS0_20SizingUtilShadowNodeIXadsoKcL_ZNS0_47DCDAutoModerationSystemMessageViewComponentNameEEEENS0_39DCDAutoModerationSystemMessageViewPropsENS0_46DCDAutoModerationSystemMessageViewEventEmitterEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENS9_14default_deleteISC_EEEERKNS0_29ComponentDescriptorParametersE =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_29SizingUtilComponentDescriptorINS0_20SizingUtilShadowNodeIXadsoKcL_ZNS0_47DCDAutoModerationSystemMessageViewComponentNameEEEENS0_39DCDAutoModerationSystemMessageViewPropsENS0_46DCDAutoModerationSystemMessageViewEventEmitterEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENS9_14default_deleteISC_EEEERKNS0_29ComponentDescriptorParametersE
               (undefined8 *param_1,ComponentDescriptorParameters *param_2)

{
  byte bVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  ComponentDescriptor *this;
  long lVar6;
  long *plVar7;
  void *pvVar8;
  undefined4 local_1000 [2];
  undefined8 *local_ff8;
  void *local_ff0;
  void *pvStack_fe8;
  undefined8 local_fe0;
  void *pvStack_fd8;
  void *local_fd0;
  undefined8 uStack_fc8;
  void *local_fc0;
  void *pvStack_fb8;
  undefined8 uStack_fb0;
  undefined8 uStack_fa8;
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
  ulong local_8c0;
  undefined8 uStack_8b8;
  void *local_8b0;
  undefined4 local_8a8 [2];
  undefined8 local_8a0;
  undefined8 uStack_898;
  undefined8 local_890;
  undefined8 local_888;
  undefined8 uStack_880;
  byte local_1c8;
  void *local_1b8;
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
  undefined8 local_130;
  undefined8 uStack_128;
  void *local_120;
  undefined8 uStack_118;
  void *local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined4 local_e0 [4];
  undefined4 local_d0 [2];
  undefined8 local_c8;
  undefined4 local_a0;
  void *local_98;
  void *pvStack_90;
  undefined8 local_88;
  void *pvStack_80;
  void *local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  this = (ComponentDescriptor *)operator_new(0x88);
  pvStack_fd8 = (void *)0x0;
  local_fe0 = 0;
  uStack_fc8 = 0;
  local_fd0 = (void *)0x0;
  pvStack_fb8 = (void *)0x0;
  local_fc0 = (void *)0x0;
  uStack_fa8 = 0;
  uStack_fb0 = 0;
  pvStack_fe8 = (void *)0x0;
  local_ff0 = (void *)0x0;
                    /* try { // try from 008c9a64 to 008c9a6f has its CatchHandler @ 008ca0cc */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_ff0);
  local_f8 = 0;
  *(undefined ***)this = &PTR_FUN_0099d138;
  local_f0 = 0;
  local_e8 = 0;
  local_e0[0] = 0;
  local_d0[0] = 0;
  local_c8 = 0;
  local_a0 = 0;
  pvStack_90 = (void *)0x0;
  local_98 = (void *)0x0;
  pvStack_80 = (void *)0x0;
  local_88 = 0;
  uStack_70 = 0;
  local_78 = (void *)0x0;
  local_100 = 0;
  uStack_108 = 0;
  local_110 = (void *)0x0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_138 = 0;
  local_140 = 0;
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
                    /* try { // try from 008c9ae0 to 008c9aeb has its CatchHandler @ 008ca0fc */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1b0);
  local_100 = CONCAT44(local_100._4_4_,0x3f800000);
  local_1000[0] = 0xffffffff;
  uStack_108 = 0;
  local_110 = (void *)0x0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_ff8 = &local_1b0;
  facebook::react::RawProps::facebook::react::RawProps::parse(&local_f8,this + 0x38);
  memset(local_f80,0,0x6d8);
  local_8a8[0] = 5;
  local_890 = 0;
  local_fa0 = PTR_construction_vtable_0099e1a8 + 0x20;
  local_f80[0] = 5;
  uStack_f88 = 0;
  local_f90 = 0;
  uStack_f98 = 0;
  local_888 = 0;
  uStack_880 = 0x3f800000;
  uStack_898 = 0;
  local_8a0 = 0;
  uStack_f70 = 0;
  local_f78 = 0;
  uStack_f60 = 0;
  local_f68 = 0;
  local_f58 = 0x3f800000;
  folly::dynamic::folly::dynamic::destroy(local_8a8);
  local_f4c = 0;
  local_ef1 = 0;
  uStack_a10 = _UNK_0049c2e4;
  local_a18 = _DAT_0049c2dc;
  local_f4b = _s__00375408;
  uStack_b08 = _UNK_00371598;
  local_b10 = _DAT_00371590;
  uStack_a20 = _UNK_0049c2d4;
  local_a28 = _DAT_0049c2cc;
  local_e34 = 0;
  uStack_a30 = _UNK_0049c2c4;
  local_a38 = _DAT_0049c2bc;
  uStack_a40 = _UNK_0049c2b4;
  local_a48 = _DAT_0049c2ac;
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
  local_fa0 = PTR_vtable_0099e148 + 0x20;
  local_8b0 = (void *)0x0;
  uStack_8b8 = 0;
  local_8c0 = 0;
                    /* try { // try from 008c9edc to 008c9eef has its CatchHandler @ 008ca0fc */
  facebook::react::DCDAutoModerationSystemMessageViewProps::DCDAutoModerationSystemMessageViewProps
            ((DCDAutoModerationSystemMessageViewProps *)local_8a8,(PropsParserContext *)local_1000,
             (DCDAutoModerationSystemMessageViewProps *)&local_fa0,(RawProps *)&local_f8);
  if ((local_1c8 & 1) != 0) {
    operator_delete(local_1b8);
  }
  puVar5 = PTR_PTR_0099e150;
  FUN_0078917c(local_8a8,PTR_PTR_0099e150 + 8);
  if ((local_8c0 & 1) != 0) {
    operator_delete(local_8b0);
  }
  FUN_0078917c(&local_fa0,puVar5 + 8);
  facebook::react::RawPropsParser::facebook::react::RawPropsParser::postPrepare(this + 0x38);
  pvVar3 = local_120;
  puVar4 = (undefined8 *)local_110;
  while (puVar4 != (undefined8 *)0x0) {
    plVar7 = (long *)puVar4[6];
    pvVar8 = (void *)*puVar4;
    local_120 = pvVar3;
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
    pvVar3 = local_120;
    puVar4 = (undefined8 *)pvVar8;
  }
  local_120 = (void *)0x0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)&uStack_158);
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)&uStack_188);
  std::__ndk1::mutex::~mutex((mutex *)&local_1b0);
  pvVar8 = pvStack_80;
  pvVar3 = local_78;
  if (pvStack_80 != (void *)0x0) {
    while (pvVar3 != pvVar8) {
      if (*(uint *)((long)pvVar3 + -8) != 0xffffffff) {
                    /* try { // try from 008ca01c to 008ca027 has its CatchHandler @ 008ca100 */
        (*(code *)(&PTR_FUN_0099c148)[*(uint *)((long)pvVar3 + -8)])
                  (&local_fa0,(void *)((long)pvVar3 + -0x38));
      }
      *(undefined4 *)((long)pvVar3 + -8) = 0xffffffff;
      pvVar3 = (void *)((long)pvVar3 + -0x38);
    }
    local_78 = pvVar8;
    operator_delete(pvStack_80);
  }
  if (local_98 != (void *)0x0) {
    pvStack_90 = local_98;
    operator_delete(local_98);
  }
  folly::dynamic::folly::dynamic::destroy(local_d0);
  facebook::jsi::Value::~Value((Value *)local_e0);
  *(undefined ***)this = &PTR_FUN_0099d090;
  if (local_fc0 != (void *)0x0) {
    pvStack_fb8 = local_fc0;
    operator_delete(local_fc0);
  }
  if (pvStack_fd8 != (void *)0x0) {
    local_fd0 = pvStack_fd8;
    operator_delete(pvStack_fd8);
  }
  if (local_ff0 != (void *)0x0) {
    pvStack_fe8 = local_ff0;
    operator_delete(local_ff0);
  }
  *param_1 = this;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008ca104  FUN_008ca104 =====

void FUN_008ca104(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 008ca128  FUN_008ca128 =====

undefined * FUN_008ca128(void)

{
  return PTR_DCDAutoModerationSystemMessageViewComponentName_0099f3a8;
}


// ===== 008ca134  FUN_008ca134 =====

undefined * FUN_008ca134(void)

{
  return PTR_DCDAutoModerationSystemMessageViewComponentName_0099f3a8;
}


// ===== 008ca140  FUN_008ca140 =====

undefined8 FUN_008ca140(void)

{
  return 0x61;
}


// ===== 008ca148  FUN_008ca148 =====

void FUN_008ca148(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  YogaLayoutableShadowNode *pYVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar4 = tpidr_el0;
  lVar7 = *(long *)(lVar4 + 0x28);
  uVar5 = (**(code **)(*param_2 + 0x20))();
  puVar6 = (undefined8 *)operator_new(0x400);
  pYVar1 = (YogaLayoutableShadowNode *)(puVar6 + 3);
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_0099d1b0;
                    /* try { // try from 008ca1b4 to 008ca1c3 has its CatchHandler @ 008ca2a8 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4,uVar5);
  lVar8 = puVar6[4];
  puVar6[3] = &PTR_FUN_0099d2e0;
  uVar3 = *(uint *)((long)puVar6 + 0x6c);
  uVar2 = uVar3 & 3 | (uint)((*(byte *)(lVar8 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)puVar6 + 0x6c) = uVar3 & 0xfffffff8 | uVar2;
  if ((*(uint *)(lVar8 + 0x50) & 0x30000000) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    if (*(char *)(lVar8 + 0x5b4) != '\0') {
      uVar5 = *(undefined4 *)(lVar8 + 0x5b0);
    }
  }
  *(undefined4 *)(puVar6 + 10) = uVar5;
  lVar9 = *param_2;
  *(uint *)((long)puVar6 + 0x6c) =
       uVar3 & 0xfffff000 |
       uVar3 & 0x7f8 | uVar2 |
       (uint)((*(char *)(lVar8 + 0x6b0) != '\0' || *(char *)(lVar8 + 0x6b1) != '\0') ||
             *(char *)(lVar8 + 0x1e8) != '\0') << 0xb;
  puVar6[3] = &PTR_FUN_0099d200;
                    /* try { // try from 008ca25c to 008ca267 has its CatchHandler @ 008ca298 */
  (**(code **)(lVar9 + 0x60))(param_2,pYVar1);
  *param_1 = pYVar1;
  param_1[1] = puVar6;
  if (*(long *)(lVar4 + 0x28) != lVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 008ca2d8  FUN_008ca2d8 =====

void FUN_008ca2d8(undefined8 *param_1,long *param_2,ShadowNode *param_3,ShadowNodeFragment *param_4)

{
  YogaLayoutableShadowNode *pYVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined4 uVar10;
  YogaLayoutableShadowNode *local_78;
  long *local_70;
  YogaLayoutableShadowNode *local_68;
  long *local_60;
  long local_58;
  
  lVar7 = tpidr_el0;
  local_58 = *(long *)(lVar7 + 0x28);
  plVar8 = (long *)operator_new(0x400);
  pYVar1 = (YogaLayoutableShadowNode *)(plVar8 + 3);
  plVar8[1] = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&PTR_FUN_0099d1b0;
                    /* try { // try from 008ca330 to 008ca33f has its CatchHandler @ 008ca48c */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4);
  lVar9 = plVar8[4];
  plVar8[3] = (long)&PTR_FUN_0099d2e0;
  uVar3 = *(uint *)((long)plVar8 + 0x6c);
  uVar2 = uVar3 & 3 | (uint)((*(byte *)(lVar9 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)plVar8 + 0x6c) = uVar3 & 0xfffffff8 | uVar2;
  if ((*(uint *)(lVar9 + 0x50) & 0x30000000) == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = 0;
    if (*(char *)(lVar9 + 0x5b4) != '\0') {
      uVar10 = *(undefined4 *)(lVar9 + 0x5b0);
    }
  }
  *(undefined4 *)(plVar8 + 10) = uVar10;
  cVar4 = *(char *)(lVar9 + 0x6b0);
  cVar5 = *(char *)(lVar9 + 0x6b1);
  cVar6 = *(char *)(lVar9 + 0x1e8);
  plVar8[3] = (long)&PTR_FUN_0099d200;
  *(uint *)((long)plVar8 + 0x6c) =
       uVar3 & 0xfffff000 |
       uVar3 & 0x7f8 | uVar2 | (uint)((cVar4 != '\0' || cVar5 != '\0') || cVar6 != '\0') << 0xb;
  local_68 = pYVar1;
  local_60 = plVar8;
                    /* try { // try from 008ca3d0 to 008ca3df has its CatchHandler @ 008ca4a4 */
  facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::
  completeClone(pYVar1,param_3,param_4);
  local_78 = pYVar1;
  local_70 = plVar8;
  FUN_00757d00(1,plVar8 + 1);
                    /* try { // try from 008ca3f0 to 008ca3ff has its CatchHandler @ 008ca47c */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_78);
  plVar8 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar9 = FUN_00757990(0xffffffffffffffff,local_70 + 1), lVar9 == 0)) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pYVar1 = local_68;
                    /* try { // try from 008ca43c to 008ca447 has its CatchHandler @ 008ca4a4 */
  (**(code **)(*param_2 + 0x60))(param_2,local_68);
  *param_1 = pYVar1;
  param_1[1] = local_60;
  if (*(long *)(lVar7 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 008ca4cc  FUN_008ca4cc =====

void FUN_008ca4cc(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::appendChild
            (*param_2,param_3);
  return;
}


// ===== 008ca4d8  FUN_008ca4d8 =====

void FUN_008ca4d8(undefined8 *param_1,long param_2,PropsParserContext *param_3,long *param_4,
                 RawProps *param_5)

{
  DCDAutoModerationSystemMessageViewProps *this;
  uint uVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  char *pcVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  char *pcVar9;
  dynamic *pdVar10;
  long lVar11;
  DCDAutoModerationSystemMessageViewProps *pDVar12;
  undefined1 uStack_d1;
  dynamic local_d0 [32];
  dynamic *local_b0;
  uint local_a0;
  int local_98 [6];
  long *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((*param_4 == 0) && (uVar7 = facebook::react::RawProps::isEmpty(), (uVar7 & 1) != 0)) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_47DCDAutoModerationSystemMessageViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_39DCDAutoModerationSystemMessageViewPropsENS0_46DCDAutoModerationSystemMessageViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f3b8
         & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_47DCDAutoModerationSystemMessageViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_39DCDAutoModerationSystemMessageViewPropsENS0_46DCDAutoModerationSystemMessageViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f3b8
                                   ), iVar6 != 0)) {
                    /* try { // try from 008ca90c to 008ca90f has its CatchHandler @ 008ca93c */
      FUN_008cb564();
      __cxa_atexit(FUN_008cb514,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_47DCDAutoModerationSystemMessageViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_39DCDAutoModerationSystemMessageViewPropsENS0_46DCDAutoModerationSystemMessageViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f3b0
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_47DCDAutoModerationSystemMessageViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_39DCDAutoModerationSystemMessageViewPropsENS0_46DCDAutoModerationSystemMessageViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f3b8
                         );
    }
    lVar11 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_47DCDAutoModerationSystemMessageViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_39DCDAutoModerationSystemMessageViewPropsENS0_46DCDAutoModerationSystemMessageViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f3b0
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_47DCDAutoModerationSystemMessageViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_39DCDAutoModerationSystemMessageViewPropsENS0_46DCDAutoModerationSystemMessageViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f3b0
    ;
    param_1[1] = lVar11;
    if (lVar11 != 0) {
      FUN_00757d00(1,lVar11 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    pDVar12 = (DCDAutoModerationSystemMessageViewProps *)*param_4;
    if (pDVar12 == (DCDAutoModerationSystemMessageViewProps *)0x0) {
      if (((*
            PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_47DCDAutoModerationSystemMessageViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_39DCDAutoModerationSystemMessageViewPropsENS0_46DCDAutoModerationSystemMessageViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f3b8
           & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_47DCDAutoModerationSystemMessageViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_39DCDAutoModerationSystemMessageViewPropsENS0_46DCDAutoModerationSystemMessageViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f3b8
                                     ), iVar6 != 0)) {
                    /* try { // try from 008ca88c to 008ca88f has its CatchHandler @ 008ca954 */
        FUN_008cb564();
        __cxa_atexit(FUN_008cb514,
                     PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_47DCDAutoModerationSystemMessageViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_39DCDAutoModerationSystemMessageViewPropsENS0_46DCDAutoModerationSystemMessageViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f3b0
                     ,&PTR_LOOP_008d5d30);
        __cxa_guard_release(
                           PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_47DCDAutoModerationSystemMessageViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_39DCDAutoModerationSystemMessageViewPropsENS0_46DCDAutoModerationSystemMessageViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f3b8
                           );
      }
      pDVar12 = *(DCDAutoModerationSystemMessageViewProps **)
                 PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_47DCDAutoModerationSystemMessageViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_39DCDAutoModerationSystemMessageViewPropsENS0_46DCDAutoModerationSystemMessageViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f3b0
      ;
    }
    plVar8 = (long *)operator_new(0x710);
    this = (DCDAutoModerationSystemMessageViewProps *)(plVar8 + 3);
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = (long)&PTR_FUN_0099d3c8;
                    /* try { // try from 008ca5b8 to 008ca5cb has its CatchHandler @ 008ca9c8 */
    facebook::react::DCDAutoModerationSystemMessageViewProps::
    DCDAutoModerationSystemMessageViewProps(this,param_3,pDVar12,param_5);
                    /* try { // try from 008ca5d0 to 008ca5e3 has its CatchHandler @ 008ca9e0 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if ((((uVar7 & 1) == 0) ||
        (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar7 & 1) == 0)) ||
       (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
                enablePropsUpdateReconciliationAndroid(), (uVar7 & 1) == 0)) {
LAB_008ca60c:
      FUN_00757d00(1,plVar8 + 1);
      if (*param_4 == 0) {
        if (((*
              PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_47DCDAutoModerationSystemMessageViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_39DCDAutoModerationSystemMessageViewPropsENS0_46DCDAutoModerationSystemMessageViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f3b8
             & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(
                                       PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_47DCDAutoModerationSystemMessageViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_39DCDAutoModerationSystemMessageViewPropsENS0_46DCDAutoModerationSystemMessageViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f3b8
                                       ), iVar6 != 0)) {
                    /* try { // try from 008ca8cc to 008ca8cf has its CatchHandler @ 008ca940 */
          FUN_008cb564();
          __cxa_atexit(FUN_008cb514,
                       PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_47DCDAutoModerationSystemMessageViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_39DCDAutoModerationSystemMessageViewPropsENS0_46DCDAutoModerationSystemMessageViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f3b0
                       ,&PTR_LOOP_008d5d30);
          __cxa_guard_release(
                             PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_47DCDAutoModerationSystemMessageViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_39DCDAutoModerationSystemMessageViewPropsENS0_46DCDAutoModerationSystemMessageViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f3b8
                             );
        }
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 008ca674 to 008ca687 has its CatchHandler @ 008ca96c */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*(undefined8 *)
                         PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_47DCDAutoModerationSystemMessageViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_39DCDAutoModerationSystemMessageViewPropsENS0_46DCDAutoModerationSystemMessageViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f3b0
                   ,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
LAB_008ca6c0:
          (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
        }
        else if (local_b0 != (dynamic *)0x0) {
          lVar11 = 5;
          pdVar10 = local_b0;
          goto LAB_008ca6c0;
        }
        if (plVar8 != (long *)0x0) goto LAB_008ca6d4;
      }
      else {
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 008ca628 to 008ca63b has its CatchHandler @ 008ca994 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*param_4,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
        }
        else {
          if (local_b0 == (dynamic *)0x0) goto LAB_008ca6d4;
          lVar11 = 5;
          pdVar10 = local_b0;
        }
        (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
LAB_008ca6d4:
        lVar11 = FUN_00757990(0xffffffffffffffff,plVar8 + 1);
        if (lVar11 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 008ca5f0 to 008ca5fb has its CatchHandler @ 008ca968 */
      pcVar9 = (char *)(**(code **)(*(long *)this + 0x10))(this);
      iVar6 = strcmp(PTR_DCDAutoModerationSystemMessageViewComponentName_0099f3a8,pcVar9);
      if (iVar6 != 0) goto LAB_008ca60c;
      bVar3 = false;
    }
                    /* try { // try from 008ca700 to 008ca703 has its CatchHandler @ 008ca9e0 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar7 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 008ca710 to 008ca72b has its CatchHandler @ 008ca990 */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(plVar8 + 7));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 008ca86c to 008ca87b has its CatchHandler @ 008ca988 */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_008caa2c;
      }
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (*(int *)(plVar4 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 008ca84c to 008ca85b has its CatchHandler @ 008ca9ec */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_008caa2c;
        }
        uVar1 = 0x811c9dc5;
        uVar7 = (ulong)(*(byte *)(plVar4 + 3) >> 1);
        pcVar5 = (char *)((long)plVar4 + 0x19);
        pcVar9 = (char *)((long)plVar4 + 0x19);
        if ((*(byte *)(plVar4 + 3) & 1) != 0) {
          uVar7 = plVar4[4];
          pcVar5 = (char *)plVar4[5];
          pcVar9 = (char *)plVar4[5];
        }
        for (; uVar7 != 0; uVar7 = uVar7 - 1) {
          uVar1 = (uVar1 ^ (int)*pcVar5) * 0x1000193;
          pcVar5 = pcVar5 + 1;
        }
                    /* try { // try from 008ca7ac to 008ca7b7 has its CatchHandler @ 008ca9f4 */
        folly::dynamic::dynamic(local_d0,(dynamic *)(plVar4 + 8));
        local_a0 = 0;
                    /* try { // try from 008ca7bc to 008ca7d3 has its CatchHandler @ 008ca9f8 */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (this,param_3,uVar1,pcVar9,local_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 008ca7e4 to 008ca7ef has its CatchHandler @ 008ca9e8 */
          (*(code *)(&PTR_FUN_0099c148)[local_a0])(&uStack_d1,local_d0);
        }
      }
      folly::dynamic::folly::dynamic::destroy(local_98);
    }
    param_1[1] = plVar8;
    *param_1 = this;
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_008caa2c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008caa30  FUN_008caa30 =====

void FUN_008caa30(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *local_48;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = (long *)operator_new(0x28);
  local_40[1] = 0;
  local_40[2] = 0;
  *local_40 = (long)&PTR_FUN_0099c4d8;
  local_40[4] = 0;
  local_48 = local_40 + 3;
  *local_48 = 0;
                    /* try { // try from 008caa80 to 008caa87 has its CatchHandler @ 008cab3c */
  puVar3 = (undefined8 *)operator_new(0x50);
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_0099c330;
                    /* try { // try from 008caaa0 to 008caaab has its CatchHandler @ 008cab24 */
  uVar4 = FUN_008c3dc0(puVar3 + 3,&local_48,param_4);
  plVar2 = local_40;
  *param_1 = uVar4;
  param_1[1] = puVar3;
  if ((local_40 == (long *)0x0) ||
     (lVar5 = FUN_00757990(0xffffffffffffffff,local_40 + 1), lVar5 != 0)) {
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
  }
  else {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    if (*(long *)(lVar1 + 0x28) == local_38) {
      std::__ndk1::__shared_weak_count::__release_weak();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008cab64  FUN_008cab64 =====

void FUN_008cab64(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_58;
  long *local_50;
  undefined8 local_48;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48 = *param_4;
  local_40 = (long *)param_4[1];
  if (local_40 != (long *)0x0) {
    FUN_00757d00(1,local_40 + 1);
  }
                    /* try { // try from 008caba4 to 008cabaf has its CatchHandler @ 008cac90 */
  facebook::react::ShadowNodeFamily::getMostRecentState();
                    /* try { // try from 008cabb4 to 008cabbb has its CatchHandler @ 008cac80 */
  puVar3 = (undefined8 *)operator_new(0x50);
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_0099c538;
                    /* try { // try from 008cabd4 to 008cabdf has its CatchHandler @ 008cac68 */
  uVar4 = FUN_008c47f8(puVar3 + 3,&local_48,local_58);
  *param_1 = uVar4;
  param_1[1] = puVar3;
  if ((local_50 != (long *)0x0) &&
     (lVar5 = FUN_00757990(0xffffffffffffffff,local_50 + 1), lVar5 == 0)) {
    (**(code **)(*local_50 + 0x10))(local_50);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = local_40;
  if ((local_40 != (long *)0x0) &&
     (lVar5 = FUN_00757990(0xffffffffffffffff,local_40 + 1), lVar5 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008cacb8  FUN_008cacb8 =====

void FUN_008cacb8(undefined8 *param_1,long param_2,long param_3)

{
  EventEmitter *pEVar1;
  ShadowNodeFamily *pSVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ShadowNodeFamily *local_b0;
  long *local_a8;
  EventEmitter *local_a0;
  long *plStack_98;
  EventEmitter *local_90;
  long *local_88;
  undefined8 local_80;
  long local_78;
  EventEmitter *local_70;
  long *plStack_68;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  FUN_0078a610(&local_a0,&local_70,param_3 + 8,param_3 + 4);
                    /* try { // try from 008cad00 to 008cad07 has its CatchHandler @ 008cafec */
  plVar5 = (long *)operator_new(0x68);
  *plVar5 = (long)&PTR_FUN_0099d418;
  local_80 = *(undefined8 *)(param_2 + 8);
  local_78 = *(long *)(param_2 + 0x10);
  pEVar1 = (EventEmitter *)(plVar5 + 3);
  plVar5[1] = 0;
  plVar5[2] = 0;
  plStack_68 = plStack_98;
  local_70 = local_a0;
  local_a0 = (EventEmitter *)0x0;
  plStack_98 = (long *)0x0;
  if (local_78 != 0) {
    FUN_00757d00(1,local_78 + 0x10);
  }
                    /* try { // try from 008cad44 to 008cad53 has its CatchHandler @ 008cafc0 */
  facebook::react::EventEmitter::EventEmitter(pEVar1,&local_70,&local_80);
  *(undefined ***)pEVar1 = &PTR_FUN_0097ff10;
                    /* try { // try from 008cad64 to 008cad6b has its CatchHandler @ 008cafb0 */
  plVar6 = (long *)operator_new(0x58);
  puVar4 = PTR_DAT_0099dc90;
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)(puVar4 + 0x10);
  plVar6[4] = 0;
  plVar6[3] = 0;
  plVar5[0xb] = (long)(plVar6 + 3);
  plVar5[0xc] = (long)plVar6;
  plVar6[6] = 0;
  plVar6[5] = 0;
  plVar6[8] = 0;
  plVar6[7] = 0;
  *(undefined8 *)((long)plVar6 + 0x4c) = 0;
  *(undefined8 *)((long)plVar6 + 0x44) = 0;
  plVar5[3] = (long)&PTR_FUN_0099d468;
  if (local_78 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar6 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,plStack_68 + 1), lVar7 == 0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar6 = plStack_98;
  local_90 = pEVar1;
  local_88 = plVar5;
  if ((plStack_98 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,plStack_98 + 1), lVar7 == 0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 008cae1c to 008cae23 has its CatchHandler @ 008cafa0 */
  plVar5 = (long *)operator_new(0x1a0);
  puVar4 = PTR_DAT_0099dca0;
  pSVar2 = (ShadowNodeFamily *)(plVar5 + 4);
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)(puVar4 + 0x10);
  local_70 = local_90;
  plStack_68 = local_88;
  if (local_88 != (long *)0x0) {
    FUN_00757d00(1,local_88 + 1);
  }
  local_80 = *(undefined8 *)(param_2 + 8);
  local_78 = *(long *)(param_2 + 0x10);
  if (local_78 != 0) {
    FUN_00757d00(1,local_78 + 0x10);
  }
                    /* try { // try from 008cae70 to 008cae87 has its CatchHandler @ 008caf70 */
  facebook::react::ShadowNodeFamily::ShadowNodeFamily(pSVar2,param_3,&local_70,&local_80,param_2);
  if (local_78 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar6 = plStack_68;
  if ((plStack_68 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,plStack_68 + 1), lVar7 == 0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pEVar1 = local_90;
  *param_1 = pSVar2;
  param_1[1] = plVar5;
  local_b0 = pSVar2;
  local_a8 = plVar5;
  FUN_00757d00(1,plVar5 + 2);
                    /* try { // try from 008caedc to 008caee7 has its CatchHandler @ 008caf50 */
  facebook::react::EventEmitter::facebook::react::EventEmitter::setShadowNodeFamily
            (pEVar1,&local_b0);
  if (local_a8 != (long *)0x0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar5 = local_88;
  if ((local_88 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,local_88 + 1), lVar7 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008cb014  FUN_008cb014 =====

void FUN_008cb014(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::react::ShadowNode::getState();
  lVar3 = *plVar2;
  plVar2 = (long *)plVar2[1];
  if (plVar2 != (long *)0x0) {
    FUN_00757d00(1,plVar2 + 1);
  }
  puVar5 = *(undefined4 **)(lVar3 + 0x18);
  if (*(char *)(puVar5 + 1) != '\0' || *(char *)(puVar5 + 3) != '\0') {
    uVar6 = 0x7fc00000;
    if (*(char *)(puVar5 + 1) != '\0') {
      uVar6 = *puVar5;
    }
    uVar7 = 0x7fc00000;
    if (*(char *)(puVar5 + 3) != '\0') {
      uVar7 = puVar5[2];
    }
                    /* try { // try from 008cb08c to 008cb093 has its CatchHandler @ 008cb104 */
    facebook::react::YogaLayoutableShadowNode::setSize(uVar6,uVar7,param_2);
  }
  if ((plVar2 == (long *)0x0) || (lVar3 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar3 != 0))
  {
    if (*(long *)(lVar1 + 0x28) == lVar4) {
      return;
    }
  }
  else {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    if (*(long *)(lVar1 + 0x28) == lVar4) {
      std::__ndk1::__shared_weak_count::__release_weak();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008cb12c  FUN_008cb12c =====

void FUN_008cb12c(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 008cb150  FUN_008cb150 =====

void FUN_008cb150(void)

{
  return;
}


// ===== 008cb154  FUN_008cb154 =====

void FUN_008cb154(long param_1)

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


// ===== 008cb1a4  FUN_008cb1a4 =====

void FUN_008cb1a4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099d1b0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008cb1b4  FUN_008cb1b4 =====

void FUN_008cb1b4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099d1b0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008cb1e4  FUN_008cb1e4 =====

void FUN_008cb1e4(long param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  *(long *)(param_1 + 0x18) = (long)(PTR_vtable_0099de98 + 0x10);
  pvVar4 = *(void **)(param_1 + 0x3e0);
  if (pvVar4 != (void *)0x0) {
    pvVar5 = *(void **)(param_1 + 1000);
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
      pvVar2 = *(void **)(param_1 + 0x3e0);
    }
    *(void **)(param_1 + 1000) = pvVar4;
    operator_delete(pvVar2);
  }
  pvVar4 = *(void **)(param_1 + 0x3b0);
  if (pvVar4 != (void *)0x0) {
    *(void **)(param_1 + 0x3b8) = pvVar4;
    operator_delete(pvVar4);
  }
  FUN_007890e8(param_1 + 0x130);
  FUN_00789784((long *)(param_1 + 0x18));
  return;
}


// ===== 008cb2a8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008cb2ac  FUN_008cb2ac =====

void FUN_008cb2ac(long *param_1)

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


// ===== 008cb36c  FUN_008cb36c =====

void FUN_008cb36c(long param_1)

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


// ===== 008cb3d4  FUN_008cb3d4 =====

bool FUN_008cb3d4(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 008cb3ec  FUN_008cb3ec =====

bool FUN_008cb3ec(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 008cb404  FUN_008cb404 =====

void FUN_008cb404(long *param_1)

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


// ===== 008cb4c4  FUN_008cb4c4 =====

void FUN_008cb4c4(long param_1)

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


// ===== 008cb514  FUN_008cb514 =====

void FUN_008cb514(long param_1)

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


// ===== 008cb564  FUN_008cb564 =====

void FUN_008cb564(void)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x710);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_0099d378;
  memset(__s,0,0x6f8);
                    /* try { // try from 008cb5a0 to 008cb5b3 has its CatchHandler @ 008cb630 */
  FUN_00788b10(__s,PTR_PTR_0099e150 + 0x10);
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
  puVar1 = PTR_vtable_0099e148;
  *(undefined4 *)(puVar2 + 0xd9) = 0;
  *(undefined2 *)((long)puVar2 + 0x6cc) = 0;
  puVar2[0xe1] = 0;
  puVar2[3] = puVar1 + 0x20;
  puVar1 = 
  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_47DCDAutoModerationSystemMessageViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_39DCDAutoModerationSystemMessageViewPropsENS0_46DCDAutoModerationSystemMessageViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f3b0
  ;
  puVar2[0xe0] = 0;
  puVar2[0xdf] = 0;
  *(undefined8 **)puVar1 = __s;
  *(undefined8 **)(puVar1 + 8) = puVar2;
  return;
}


// ===== 008cb64c  FUN_008cb64c =====

void FUN_008cb64c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099d378;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008cb65c  FUN_008cb65c =====

void FUN_008cb65c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099d378;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008cb68c  FUN_008cb68c =====

void FUN_008cb68c(long param_1)

{
  if ((*(byte *)(param_1 + 0x6f8) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x708));
  }
  FUN_0078917c(param_1 + 0x18,PTR_PTR_0099e150 + 8);
  return;
}


// ===== 008cb6c8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008cb6cc  FUN_008cb6cc =====

void FUN_008cb6cc(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099d3c8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008cb6dc  FUN_008cb6dc =====

void FUN_008cb6dc(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099d3c8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008cb70c  FUN_008cb70c =====

void FUN_008cb70c(long param_1)

{
  if ((*(byte *)(param_1 + 0x6f8) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x708));
  }
  FUN_0078917c(param_1 + 0x18,PTR_PTR_0099e150 + 8);
  return;
}


// ===== 008cb748  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008cb74c  FUN_008cb74c =====

void FUN_008cb74c(long param_1)

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


// ===== 008cb79c  FUN_008cb79c =====

void FUN_008cb79c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099d418;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008cb7ac  FUN_008cb7ac =====

void FUN_008cb7ac(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099d418;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008cb7dc  FUN_008cb7dc =====

void FUN_008cb7dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x008cb7e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 008cb7e8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008cb7ec  FUN_008cb7ec =====

void FUN_008cb7ec(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[9];
  *param_1 = (long)(PTR_DAT_0099dc88 + 0x10);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *param_1 = (long)&PTR_FUN_0097ff80;
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


// ===== 008cb8a4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008cb8a8  FUN_008cb8a8 =====

void FUN_008cb8a8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  *puVar1 = &PTR_FUN_0099d4a0;
  return;
}


// ===== 008cb8cc  FUN_008cb8cc =====

void FUN_008cb8cc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_0099d4a0;
  return;
}


// ===== 008cb8dc  FUN_008cb8dc =====

void FUN_008cb8dc(void)

{
  return;
}


// ===== 008cb8e0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008cb8e4  FUN_008cb8e4 =====

void FUN_008cb8e4(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  undefined **local_80;
  undefined *puStack_78;
  long *local_60;
  long local_48;
  
  puVar3 = PTR_cxxModuleProvider_0099f3f0;
  puVar2 = PTR_cxxModuleProvider_0099f300;
  pppuVar5 = &local_80;
  pppuVar6 = &local_80;
  pppuVar7 = &local_80;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = *(long **)(PTR_cxxModuleProvider_0099f3f0 + 0x20);
  local_80 = &PTR_FUN_0099d510;
  puStack_78 = PTR_cxxModuleProvider_0099f300;
  if (local_60 == (long *)PTR_cxxModuleProvider_0099f3f0) {
    local_60 = (long *)0x0;
                    /* try { // try from 008cb960 to 008cb96f has its CatchHandler @ 008cbb28 */
    (**(code **)(*(long *)PTR_cxxModuleProvider_0099f3f0 + 0x18))
              (PTR_cxxModuleProvider_0099f3f0,&local_80);
    (**(code **)(**(long **)(puVar3 + 0x20) + 0x20))();
    local_60 = (long *)&local_80;
    lVar4 = 4;
    *(undefined ***)puVar3 = &PTR_FUN_0099d510;
    *(undefined **)(puVar3 + 8) = puVar2;
    *(undefined **)(puVar3 + 0x20) = puVar3;
LAB_008cb99c:
    (**(code **)((long)*pppuVar5 + lVar4 * 8))(pppuVar5);
  }
  else {
    *(undefined ***)PTR_cxxModuleProvider_0099f3f0 = &PTR_FUN_0099d510;
    *(undefined **)(puVar3 + 8) = puVar2;
    *(undefined **)(puVar3 + 0x20) = puVar3;
    if ((undefined ***)local_60 == &local_80) {
      lVar4 = 4;
      pppuVar5 = &local_80;
      goto LAB_008cb99c;
    }
    if (local_60 != (long *)0x0) {
      lVar4 = 5;
      pppuVar5 = (undefined ***)local_60;
      goto LAB_008cb99c;
    }
  }
  puVar3 = PTR_javaModuleProvider_0099f3f8;
  puVar2 = PTR_javaModuleProvider_0099f308;
  local_60 = *(long **)(PTR_javaModuleProvider_0099f3f8 + 0x20);
  local_80 = &PTR_FUN_0099d5c0;
  puStack_78 = PTR_javaModuleProvider_0099f308;
  if (local_60 == (long *)PTR_javaModuleProvider_0099f3f8) {
    local_60 = (long *)0x0;
                    /* try { // try from 008cba04 to 008cba13 has its CatchHandler @ 008cbb24 */
    (**(code **)(*(long *)PTR_javaModuleProvider_0099f3f8 + 0x18))
              (PTR_javaModuleProvider_0099f3f8,&local_80);
    (**(code **)(**(long **)(puVar3 + 0x20) + 0x20))();
    local_60 = (long *)&local_80;
    lVar4 = 4;
    *(undefined ***)puVar3 = &PTR_FUN_0099d5c0;
    *(undefined **)(puVar3 + 8) = puVar2;
    *(undefined **)(puVar3 + 0x20) = puVar3;
LAB_008cba40:
    (**(code **)((long)*pppuVar6 + lVar4 * 8))(pppuVar6);
  }
  else {
    *(undefined ***)PTR_javaModuleProvider_0099f3f8 = &PTR_FUN_0099d5c0;
    *(undefined **)(puVar3 + 8) = puVar2;
    *(undefined **)(puVar3 + 0x20) = puVar3;
    if ((undefined ***)local_60 == &local_80) {
      lVar4 = 4;
      pppuVar6 = &local_80;
      goto LAB_008cba40;
    }
    if (local_60 != (long *)0x0) {
      lVar4 = 5;
      pppuVar6 = (undefined ***)local_60;
      goto LAB_008cba40;
    }
  }
  puVar3 = PTR_registerComponentDescriptorsFromEntryPoint_0099f400;
  puVar2 = PTR_registerComponents_0099f2f8;
  local_60 = *(long **)(PTR_registerComponentDescriptorsFromEntryPoint_0099f400 + 0x20);
  local_80 = &PTR_FUN_0099d670;
  puStack_78 = PTR_registerComponents_0099f2f8;
  if (local_60 == (long *)PTR_registerComponentDescriptorsFromEntryPoint_0099f400) {
    local_60 = (long *)0x0;
                    /* try { // try from 008cbaa8 to 008cbab7 has its CatchHandler @ 008cbb20 */
    (**(code **)(*(long *)PTR_registerComponentDescriptorsFromEntryPoint_0099f400 + 0x18))
              (PTR_registerComponentDescriptorsFromEntryPoint_0099f400,&local_80);
    (**(code **)(**(long **)(puVar3 + 0x20) + 0x20))();
    local_60 = (long *)&local_80;
    lVar4 = 4;
    *(undefined ***)puVar3 = &PTR_FUN_0099d670;
    *(undefined **)(puVar3 + 8) = puVar2;
    *(undefined **)(puVar3 + 0x20) = puVar3;
  }
  else {
    *(undefined ***)PTR_registerComponentDescriptorsFromEntryPoint_0099f400 = &PTR_FUN_0099d670;
    *(undefined **)(puVar3 + 8) = puVar2;
    *(undefined **)(puVar3 + 0x20) = puVar3;
    if ((undefined ***)local_60 == &local_80) {
      lVar4 = 4;
      pppuVar7 = &local_80;
    }
    else {
      if (local_60 == (long *)0x0) goto LAB_008cbaf4;
      lVar4 = 5;
      pppuVar7 = (undefined ***)local_60;
    }
  }
  (**(code **)((long)*pppuVar7 + lVar4 * 8))(pppuVar7);
LAB_008cbaf4:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008cbb2c  FUN_008cbb2c =====

long FUN_008cbb2c(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) != "Z10JNI_OnLoadE3$_0") {
    param_1 = 0;
  }
  return param_1;
}


// ===== 008cbb48  FUN_008cbb48 =====

pointer_____offset_0x10___ * FUN_008cbb48(void)

{
  return &PTR_vtable_0099d710;
}


// ===== 008cbb54  FUN_008cbb54 =====

void FUN_008cbb54(void)

{
  return;
}


// ===== 008cbb58  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008cbb5c  FUN_008cbb5c =====

void FUN_008cbb5c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_0099d510;
  puVar1[1] = uVar2;
  return;
}


// ===== 008cbb90  FUN_008cbb90 =====

void FUN_008cbb90(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_0099d510;
  param_2[1] = uVar1;
  return;
}


// ===== 008cbba4  FUN_008cbba4 =====

void FUN_008cbba4(void)

{
  return;
}


// ===== 008cbba8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008cbbac  FUN_008cbbac =====

void FUN_008cbbac(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x008cbbb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 8))(param_2,param_3);
  return;
}


// ===== 008cbbbc  FUN_008cbbbc =====

long FUN_008cbbbc(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_0099f3c0) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 008cbbd8  FUN_008cbbd8 =====

undefined * FUN_008cbbd8(void)

{
  return PTR_typeinfo_0099f3c8;
}


// ===== 008cbbe4  FUN_008cbbe4 =====

void FUN_008cbbe4(void)

{
  return;
}


// ===== 008cbbe8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008cbbec  FUN_008cbbec =====

void FUN_008cbbec(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_0099d5c0;
  puVar1[1] = uVar2;
  return;
}


// ===== 008cbc20  FUN_008cbc20 =====

void FUN_008cbc20(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_0099d5c0;
  param_2[1] = uVar1;
  return;
}


// ===== 008cbc34  FUN_008cbc34 =====

void FUN_008cbc34(void)

{
  return;
}


// ===== 008cbc38  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008cbc3c  FUN_008cbc3c =====

void FUN_008cbc3c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x008cbc48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 8))(param_2,param_3);
  return;
}


// ===== 008cbc4c  FUN_008cbc4c =====

long FUN_008cbc4c(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_0099f3d0) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 008cbc68  FUN_008cbc68 =====

undefined * FUN_008cbc68(void)

{
  return PTR_typeinfo_0099f3d8;
}


// ===== 008cbc74  FUN_008cbc74 =====

void FUN_008cbc74(void)

{
  return;
}


// ===== 008cbc78  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008cbc7c  FUN_008cbc7c =====

void FUN_008cbc7c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_0099d670;
  puVar1[1] = uVar2;
  return;
}


// ===== 008cbcb0  FUN_008cbcb0 =====

void FUN_008cbcb0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_0099d670;
  param_2[1] = uVar1;
  return;
}


// ===== 008cbcc4  FUN_008cbcc4 =====

void FUN_008cbcc4(void)

{
  return;
}


// ===== 008cbcc8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008cbccc  FUN_008cbccc =====

void FUN_008cbccc(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  code *pcVar4;
  undefined8 local_40;
  long *plStack_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  plStack_38 = (long *)param_2[1];
  local_40 = *param_2;
  pcVar4 = *(code **)(param_1 + 8);
  *param_2 = 0;
  param_2[1] = 0;
                    /* try { // try from 008cbcf8 to 008cbcff has its CatchHandler @ 008cbd50 */
  (*pcVar4)(&local_40);
  plVar2 = plStack_38;
  if ((plStack_38 != (long *)0x0) &&
     (lVar3 = FUN_00757990(0xffffffffffffffff,plStack_38 + 1), lVar3 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008cbd78  FUN_008cbd78 =====

long FUN_008cbd78(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_0099f3e0) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 008cbd94  FUN_008cbd94 =====

undefined * FUN_008cbd94(void)

{
  return PTR_typeinfo_0099f3e8;
}


// ===== 008cbda0  facebook::react::NativeDiscordMarkdown::NativeDiscordMarkdown =====

/* facebook::react::NativeDiscordMarkdown::NativeDiscordMarkdown(std::__ndk1::shared_ptr<facebook::react::CallInvoker>)
    */

void __thiscall
facebook::react::NativeDiscordMarkdown::NativeDiscordMarkdown
          (NativeDiscordMarkdown *this,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 local_50;
  long *plStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plStack_48 = (long *)param_2[1];
  local_50 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
                    /* try { // try from 008cbdd0 to 008cbdd7 has its CatchHandler @ 008cbe38 */
  FUN_008cbe60(this,&local_50);
  plVar2 = plStack_48;
  if ((plStack_48 != (long *)0x0) &&
     (lVar3 = FUN_00757990(0xffffffffffffffff,plStack_48 + 1), lVar3 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *(undefined ***)this = &PTR_FUN_0099d730;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008cbe60  FUN_008cbe60 =====

void FUN_008cbe60(TurboModule *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  byte local_88;
  char local_87 [8];
  undefined7 uStack_7f;
  char cStack_78;
  uint uStack_77;
  undefined1 uStack_73;
  undefined2 uStack_72;
  undefined8 local_70;
  long *local_68;
  byte local_60;
  char local_5f [7];
  char cStack_58;
  char acStack_57 [7];
  undefined1 local_50;
  undefined7 uStack_4f;
  undefined1 uStack_41;
  byte *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_60 = 0x1e;
  local_5f = s_Discord_0036a2d1;
  cStack_58 = s_Markdown_0036a2d8[0];
  acStack_57 = (char  [7])s_Markdown_0036a2d8._1_7_;
  local_70 = *param_2;
  local_68 = (long *)param_2[1];
  local_50 = 0;
  if (local_68 != (long *)0x0) {
    FUN_00757d00(1,local_68 + 1);
  }
                    /* try { // try from 008cbec0 to 008cbecf has its CatchHandler @ 008cc040 */
  facebook::react::TurboModule::TurboModule(param_1,&local_60,&local_70);
  plVar3 = local_68;
  if ((local_68 != (long *)0x0) &&
     (lVar4 = FUN_00757990(0xffffffffffffffff,local_68 + 1), lVar4 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if ((local_60 & 1) != 0) {
    operator_delete((void *)CONCAT71(uStack_4f,local_50));
  }
  *(undefined ***)param_1 = &PTR_FUN_0099d7b8;
  uStack_77 = uStack_77 & 0xffffff00;
  local_40 = &local_88;
  local_88 = 0x20;
  uStack_7f = (undefined7)s_parseToAstString_0036c9b1._8_8_;
  cStack_78 = SUB81(s_parseToAstString_0036c9b1._8_8_,7);
  local_87[0] = s_parseToAstString_0036c9b1[0];
  local_87[1] = s_parseToAstString_0036c9b1[1];
  local_87[2] = s_parseToAstString_0036c9b1[2];
  local_87[3] = s_parseToAstString_0036c9b1[3];
  local_87[4] = s_parseToAstString_0036c9b1[4];
  local_87[5] = s_parseToAstString_0036c9b1[5];
  local_87[6] = s_parseToAstString_0036c9b1[6];
  local_87[7] = s_parseToAstString_0036c9b1[7];
                    /* try { // try from 008cbf2c to 008cbf47 has its CatchHandler @ 008cc020 */
  lVar4 = FUN_00756964(param_1 + 0x30,&local_88,PTR_piecewise_construct_0099dad8,&local_40,
                       &uStack_41);
  puVar2 = PTR___parseToAstString_0099f408;
  *(undefined8 *)(lVar4 + 0x28) = 3;
  *(undefined **)(lVar4 + 0x30) = puVar2;
  if ((local_88 & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_72,CONCAT15(uStack_73,CONCAT41(uStack_77,cStack_78))));
  }
  local_88 = 0x28;
  local_40 = &local_88;
  uStack_73 = 0;
  uStack_77 = 0x676e6972;
  uStack_7f = (undefined7)s_unparseFromAstString_0036d6fd._8_8_;
  cStack_78 = SUB81(s_unparseFromAstString_0036d6fd._8_8_,7);
  local_87[0] = s_unparseFromAstString_0036d6fd[0];
  local_87[1] = s_unparseFromAstString_0036d6fd[1];
  local_87[2] = s_unparseFromAstString_0036d6fd[2];
  local_87[3] = s_unparseFromAstString_0036d6fd[3];
  local_87[4] = s_unparseFromAstString_0036d6fd[4];
  local_87[5] = s_unparseFromAstString_0036d6fd[5];
  local_87[6] = s_unparseFromAstString_0036d6fd[6];
  local_87[7] = s_unparseFromAstString_0036d6fd[7];
                    /* try { // try from 008cbf98 to 008cbfb3 has its CatchHandler @ 008cc01c */
  lVar4 = FUN_00756964(param_1 + 0x30,&local_88,PTR_piecewise_construct_0099dad8,&local_40,
                       &uStack_41);
  puVar2 = PTR___unparseFromAstString_0099f410;
  *(undefined8 *)(lVar4 + 0x28) = 1;
  *(undefined **)(lVar4 + 0x30) = puVar2;
  if ((local_88 & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_72,CONCAT15(uStack_73,CONCAT41(uStack_77,cStack_78))));
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 008cc078  facebook::react::NativeDiscordMarkdown::parseToAstString =====

/* WARNING: Unknown calling convention: __rustcall */
/* facebook::react::NativeDiscordMarkdown::parseToAstString */

void __rustcall
facebook::react::NativeDiscordMarkdown::parseToAstString
          (ulong *param_1,undefined8 param_2,undefined8 param_3,byte *param_4,byte *param_5,
          double param_6,char param_7)

{
  ulong uVar1;
  byte *pbVar2;
  long lVar3;
  JSError *pJVar4;
  byte *pbVar5;
  ulong uVar6;
  int iVar7;
  undefined1 *__dest;
  undefined1 auStack_b0 [24];
  void *local_98;
  ulong uStack_90;
  ulong local_88;
  void *local_80;
  ulong uStack_78;
  ulong local_70;
  void *local_60;
  ulong uStack_58;
  ulong local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar1 = *(ulong *)(param_4 + 8);
  pbVar2 = *(byte **)(param_4 + 0x10);
  if ((*param_4 & 1) == 0) {
    pbVar2 = param_4 + 1;
    uVar1 = (ulong)(*param_4 >> 1);
  }
  if (param_5[0x18] == 0) {
    pbVar5 = (byte *)0x0;
    uVar6 = 0;
  }
  else {
    uVar6 = *(ulong *)(param_5 + 8);
    pbVar5 = *(byte **)(param_5 + 0x10);
    if ((*param_5 & 1) == 0) {
      pbVar5 = param_5 + 1;
      uVar6 = (ulong)(*param_5 >> 1);
    }
  }
  iVar7 = 0;
  if ((param_7 != '\0') && (!NAN(param_6))) {
    if (param_6 <= 1.0) {
      iVar7 = 1;
    }
    else if (param_6 < 4294967295.0 == NAN(param_6)) {
      iVar7 = -1;
    }
    else {
      iVar7 = (int)param_6;
    }
  }
  dmd_parse(&local_98,pbVar2,uVar1,pbVar5,uVar6,iVar7);
  local_70 = local_88;
  uStack_78 = uStack_90;
  local_80 = local_98;
  if ((local_88 & 0xff) == 0) {
    pJVar4 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 008cc200 to 008cc20b has its CatchHandler @ 008cc288 */
    FUN_008cc2c4(auStack_b0,&local_80);
                    /* try { // try from 008cc210 to 008cc24b has its CatchHandler @ 008cc264 */
    ::facebook::jsi::JSError::JSError(pJVar4,param_3,auStack_b0);
    if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar4,PTR_typeinfo_0099db88,PTR__JSError_0099db78);
    }
    goto LAB_008cc2c0;
  }
  if (0xffffffffffffffef < uStack_90) {
    if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* try { // try from 008cc25c to 008cc263 has its CatchHandler @ 008cc29c */
                    /* WARNING: Subroutine does not return */
      FUN_00782ae0(param_1);
    }
    goto LAB_008cc2c0;
  }
  if (uStack_90 < 0x17) {
    __dest = (undefined1 *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)uStack_90 << 1);
    if (uStack_90 != 0) goto LAB_008cc1a0;
  }
  else {
    uVar1 = (uStack_90 | 0xf) + 1;
                    /* try { // try from 008cc188 to 008cc18f has its CatchHandler @ 008cc29c */
    __dest = (undefined1 *)operator_new(uVar1);
    param_1[1] = uStack_90;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar1 | 1;
LAB_008cc1a0:
    memmove(__dest,local_98,uStack_90);
  }
  __dest[uStack_90] = 0;
  uStack_58 = uStack_78;
  local_60 = local_80;
  local_50 = local_70;
                    /* try { // try from 008cc1c4 to 008cc1cb has its CatchHandler @ 008cc298 */
  dmd_parse_result_free(&local_60);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
LAB_008cc2c0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008cc2c4  FUN_008cc2c4 =====

void FUN_008cc2c4(long *param_1,undefined8 *param_2)

{
  ulong __n;
  void *__dest;
  void *__src;
  
  __n = param_2[1];
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_00782ae0(param_1);
  }
  __src = (void *)*param_2;
  if (__n < 0x17) {
    __dest = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_008cc32c;
  }
  else {
    __dest = operator_new((__n | 0xf) + 1);
    param_1[1] = __n;
    param_1[2] = (long)__dest;
    *param_1 = (__n | 0xf) + 2;
  }
  memmove(__dest,__src,__n);
LAB_008cc32c:
  *(undefined1 *)((long)__dest + __n) = 0;
  return;
}


// ===== 008cc348  FUN_008cc348 =====

void FUN_008cc348(undefined8 *param_1)

{
  long lVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_38 = param_1[1];
  local_40 = *param_1;
  local_30 = param_1[2];
                    /* try { // try from 008cc374 to 008cc37b has its CatchHandler @ 008cc3a0 */
  dmd_parse_result_free(&local_40);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008cc3a4  facebook::react::NativeDiscordMarkdown::unparseFromAstString =====

/* WARNING: Unknown calling convention: __rustcall */
/* facebook::react::NativeDiscordMarkdown::unparseFromAstString */

void __rustcall
facebook::react::NativeDiscordMarkdown::unparseFromAstString
          (ulong *param_1,undefined8 param_2,undefined8 param_3,byte *param_4)

{
  ulong uVar1;
  byte *pbVar2;
  long lVar3;
  JSError *pJVar4;
  undefined1 *__dest;
  undefined1 auStack_b0 [24];
  void *local_98;
  ulong uStack_90;
  ulong local_88;
  void *local_80;
  ulong uStack_78;
  ulong local_70;
  void *local_60;
  ulong uStack_58;
  ulong local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar1 = *(ulong *)(param_4 + 8);
  pbVar2 = *(byte **)(param_4 + 0x10);
  if ((*param_4 & 1) == 0) {
    pbVar2 = param_4 + 1;
    uVar1 = (ulong)(*param_4 >> 1);
  }
  dmd_unparse(&local_98,pbVar2,uVar1);
  local_70 = local_88;
  uStack_78 = uStack_90;
  local_80 = local_98;
  if ((local_88 & 0xff) == 0) {
    pJVar4 = (JSError *)__cxa_allocate_exception(0x60);
                    /* try { // try from 008cc4b0 to 008cc4bb has its CatchHandler @ 008cc538 */
    FUN_008cc2c4(auStack_b0,&local_80);
                    /* try { // try from 008cc4c0 to 008cc4fb has its CatchHandler @ 008cc514 */
    ::facebook::jsi::JSError::JSError(pJVar4,param_3,auStack_b0);
    if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pJVar4,PTR_typeinfo_0099db88,PTR__JSError_0099db78);
    }
    goto LAB_008cc570;
  }
  if (0xffffffffffffffef < uStack_90) {
    if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* try { // try from 008cc50c to 008cc513 has its CatchHandler @ 008cc54c */
                    /* WARNING: Subroutine does not return */
      FUN_00782ae0(param_1);
    }
    goto LAB_008cc570;
  }
  if (uStack_90 < 0x17) {
    __dest = (undefined1 *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)uStack_90 << 1);
    if (uStack_90 != 0) goto LAB_008cc450;
  }
  else {
    uVar1 = (uStack_90 | 0xf) + 1;
                    /* try { // try from 008cc438 to 008cc43f has its CatchHandler @ 008cc54c */
    __dest = (undefined1 *)operator_new(uVar1);
    param_1[1] = uStack_90;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar1 | 1;
LAB_008cc450:
    memmove(__dest,local_98,uStack_90);
  }
  __dest[uStack_90] = 0;
  uStack_58 = uStack_78;
  local_60 = local_80;
  local_50 = local_70;
                    /* try { // try from 008cc474 to 008cc47b has its CatchHandler @ 008cc548 */
  dmd_parse_result_free(&local_60);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
LAB_008cc570:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008cc574  FUN_008cc574 =====

void FUN_008cc574(HostObject *param_1)

{
  HostObject HVar1;
  byte bVar2;
  undefined8 *puVar3;
  void *pvVar4;
  long lVar5;
  long *plVar6;
  
  plVar6 = *(long **)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined ***)param_1 = &PTR_FUN_0099d7f8;
  if (plVar6 != (long *)0x0) {
    if ((undefined8 *)*plVar6 != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)*plVar6)();
    }
    operator_delete(plVar6);
  }
  puVar3 = (undefined8 *)*(void **)(param_1 + 0x68);
  while (puVar3 != (undefined8 *)0x0) {
    plVar6 = (long *)puVar3[6];
    pvVar4 = (void *)*puVar3;
    if ((plVar6 == (long *)0x0) || (lVar5 = FUN_00757990(0xffffffffffffffff,plVar6 + 1), lVar5 != 0)
       ) {
      bVar2 = *(byte *)(puVar3 + 2);
    }
    else {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__ndk1::__shared_weak_count::__release_weak();
      bVar2 = *(byte *)(puVar3 + 2);
    }
    if ((bVar2 & 1) != 0) {
      operator_delete((void *)puVar3[4]);
    }
    operator_delete(puVar3);
    puVar3 = (undefined8 *)pvVar4;
  }
  pvVar4 = *(void **)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4);
  }
  puVar3 = (undefined8 *)*(void **)(param_1 + 0x40);
  while (puVar3 != (undefined8 *)0x0) {
    pvVar4 = (void *)*puVar3;
    if ((*(byte *)(puVar3 + 2) & 1) != 0) {
      operator_delete((void *)puVar3[4]);
    }
    operator_delete(puVar3);
    puVar3 = (undefined8 *)pvVar4;
  }
  pvVar4 = *(void **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4);
  }
  plVar6 = *(long **)(param_1 + 0x28);
  if ((plVar6 == (long *)0x0) || (lVar5 = FUN_00757990(0xffffffffffffffff,plVar6 + 1), lVar5 != 0))
  {
    HVar1 = param_1[8];
  }
  else {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__ndk1::__shared_weak_count::__release_weak();
    HVar1 = param_1[8];
  }
  if (((byte)HVar1 & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  facebook::jsi::HostObject::~HostObject(param_1);
  return;
}


// ===== 008cc6d8  FUN_008cc6d8 =====

void FUN_008cc6d8(void *param_1)

{
  FUN_008cc574();
  operator_delete(param_1);
  return;
}


// ===== 008cc6fc  facebook::react::NativeDiscordMarkdownCxxSpec<facebook::react::NativeDiscordMarkdown>::__parseToAstString =====

/* WARNING: Removing unreachable block (ram,0x008cca90) */
/* facebook::react::NativeDiscordMarkdownCxxSpec<facebook::react::NativeDiscordMarkdown>::__parseToAstString(facebook::jsi::Runtime&,
   facebook::react::TurboModule&, facebook::jsi::Value const*, unsigned long) */

void __thiscall
facebook::react::NativeDiscordMarkdownCxxSpec<facebook::react::NativeDiscordMarkdown>::
__parseToAstString(NativeDiscordMarkdownCxxSpec<facebook::react::NativeDiscordMarkdown> *this,
                  Runtime *param_1,TurboModule *param_2,Value *param_3,ulong param_4)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  void *pvVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 *in_x8;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 *local_140;
  NativeDiscordMarkdownCxxSpec<facebook::react::NativeDiscordMarkdown> *local_138;
  undefined8 local_130;
  byte local_128 [16];
  void *local_118;
  byte local_110 [8];
  ulong local_108;
  void *local_100;
  NativeDiscordMarkdownCxxSpec<facebook::react::NativeDiscordMarkdown> *local_f8;
  undefined8 local_f0 [2];
  undefined8 *local_e0;
  NativeDiscordMarkdownCxxSpec<facebook::react::NativeDiscordMarkdown> *local_d8;
  undefined8 *puStack_d0;
  void *local_c8;
  uint local_c0 [4];
  Value aVStack_b0 [16];
  NativeDiscordMarkdownCxxSpec<facebook::react::NativeDiscordMarkdown> *local_a0;
  undefined8 *puStack_98;
  void *local_90;
  char local_88;
  long local_78;
  
  puVar10 = local_140;
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  if (param_3 == (Value *)0x0) {
    uVar12 = __cxa_allocate_exception(0x60);
                    /* try { // try from 008ccadc to 008ccaeb has its CatchHandler @ 008ccb9c */
    FUN_007851bc(uVar12,this,"Expected argument in position 0 to be passed");
    if (*(long *)(lVar3 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(uVar12,PTR_typeinfo_0099db88,PTR__JSError_0099db78);
    }
    goto LAB_008ccc54;
  }
  ::facebook::jsi::Value::asString((IRuntime *)param_2);
  uVar12 = 0;
  if (param_3 == (Value *)0x1) {
    bVar7 = false;
    bVar5 = false;
    puVar10 = (undefined8 *)0x0;
LAB_008cc7d0:
    bVar6 = true;
  }
  else {
    iVar2 = *(int *)(param_2 + 0x10);
    bVar7 = iVar2 != 0;
    if (iVar2 == 0) {
      puVar10 = (undefined8 *)0x0;
      bVar5 = false;
      if ((Value *)&DAT_00000002 < param_3) goto LAB_008cc7b4;
      goto LAB_008cc7d0;
    }
                    /* try { // try from 008cc780 to 008cc78b has its CatchHandler @ 008ccb1c */
    ::facebook::jsi::Value::asString((IRuntime *)(param_2 + 0x10));
    bVar5 = true;
    local_140 = (undefined8 *)0x0;
    if (param_3 < (Value *)0x3) goto LAB_008cc7d0;
LAB_008cc7b4:
    if (*(int *)(param_2 + 0x20) == 0) goto LAB_008cc7d0;
                    /* try { // try from 008cc7bc to 008cc7c3 has its CatchHandler @ 008ccb14 */
    uVar12 = ::facebook::jsi::Value::asNumber();
    bVar6 = false;
  }
  local_a0 = local_138;
                    /* try { // try from 008cc7e8 to 008cc7f7 has its CatchHandler @ 008ccc58 */
  (**(code **)(*(long *)this + 0x120))(local_128,this,&local_a0);
  if (local_a0 != (NativeDiscordMarkdownCxxSpec<facebook::react::NativeDiscordMarkdown> *)0x0) {
    (*(code *)**(undefined8 **)local_a0)();
  }
  if (bVar5) {
    uVar9 = 6;
    puVar11 = (undefined8 *)0x0;
    puStack_98 = puVar10;
  }
  else {
    uVar9 = 1;
    puVar11 = puVar10;
  }
  local_a0 = (NativeDiscordMarkdownCxxSpec<facebook::react::NativeDiscordMarkdown> *)
             CONCAT44(local_a0._4_4_,uVar9);
  local_f8 = this;
  ::facebook::jsi::Value::Value((Value *)local_f0,(Value *)&local_a0);
  ::facebook::jsi::Value::~Value((Value *)&local_a0);
  ::facebook::jsi::Value::Value((Value *)local_c0,(Value *)local_f0);
  if (local_c0[0] < 2) {
    local_a0 = (NativeDiscordMarkdownCxxSpec<facebook::react::NativeDiscordMarkdown> *)
               ((ulong)local_a0 & 0xffffffffffffff00);
    local_88 = '\0';
  }
  else {
                    /* try { // try from 008cc868 to 008cc877 has its CatchHandler @ 008ccb84 */
    ::facebook::jsi::Value::Value((Value *)&local_d8,(IRuntime *)this,(Value *)local_c0);
    ::facebook::jsi::Value::Value(aVStack_b0,(Value *)&local_d8);
    ::facebook::jsi::Value::~Value((Value *)&local_d8);
    local_a0 = this;
    ::facebook::jsi::Value::Value((Value *)&puStack_98,aVStack_b0);
                    /* try { // try from 008cc8a4 to 008cc8af has its CatchHandler @ 008ccb6c */
    ::facebook::jsi::Value::asString((IRuntime *)&puStack_98);
    ::facebook::jsi::Value::~Value((Value *)&puStack_98);
    ::facebook::jsi::Value::~Value(aVStack_b0);
                    /* try { // try from 008cc8c8 to 008cc8d7 has its CatchHandler @ 008ccb34 */
    (**(code **)(*(long *)this + 0x120))(&local_d8,this,&local_e0);
    if (local_e0 != (undefined8 *)0x0) {
      (**(code **)*local_e0)();
    }
    local_88 = '\x01';
    puStack_98 = puStack_d0;
    local_a0 = local_d8;
    local_90 = local_c8;
  }
  ::facebook::jsi::Value::~Value((Value *)local_c0);
  ::facebook::jsi::Value::~Value((Value *)local_f0);
  if (bVar6) {
    uVar9 = 1;
  }
  else {
    uVar9 = 3;
    local_f0[0] = uVar12;
  }
  local_f8 = (NativeDiscordMarkdownCxxSpec<facebook::react::NativeDiscordMarkdown> *)
             CONCAT44(local_f8._4_4_,uVar9);
  local_d8 = this;
  ::facebook::jsi::Value::Value((Value *)&puStack_d0,(Value *)&local_f8);
  ::facebook::jsi::Value::~Value((Value *)&local_f8);
  ::facebook::jsi::Value::Value((Value *)local_c0,(Value *)&puStack_d0);
  if (1 < local_c0[0]) {
                    /* try { // try from 008cc96c to 008cc97b has its CatchHandler @ 008ccb54 */
    ::facebook::jsi::Value::Value((Value *)&local_f8,(IRuntime *)this,(Value *)local_c0);
    ::facebook::jsi::Value::Value(aVStack_b0,(Value *)&local_f8);
    ::facebook::jsi::Value::~Value((Value *)&local_f8);
                    /* try { // try from 008cc990 to 008cc997 has its CatchHandler @ 008ccb24 */
    uVar12 = ::facebook::jsi::Value::asNumber();
    ::facebook::jsi::Value::~Value(aVStack_b0);
  }
  else {
    uVar12 = 0;
  }
  ::facebook::jsi::Value::~Value((Value *)local_c0);
  uVar8 = ::facebook::jsi::Value::~Value((Value *)&puStack_d0);
                    /* try { // try from 008cc9bc to 008cc9db has its CatchHandler @ 008ccbc4 */
  NativeDiscordMarkdown::parseToAstString
            (local_110,uVar8,this,local_128,&local_a0,uVar12,1 < local_c0[0]);
  uVar1 = (ulong)(local_110[0] >> 1);
  pvVar4 = (void *)((ulong)local_110 | 1);
  if ((local_110[0] & 1) != 0) {
    uVar1 = local_108;
    pvVar4 = local_100;
  }
                    /* try { // try from 008cca00 to 008cca0b has its CatchHandler @ 008ccbac */
  (**(code **)(*(long *)this + 0x110))(&local_130,this,pvVar4,uVar1);
  if ((local_110[0] & 1) != 0) {
    operator_delete(local_100);
  }
  if ((local_88 != '\0') && (((ulong)local_a0 & 1) != 0)) {
    operator_delete(local_90);
  }
  if ((local_128[0] & 1) != 0) {
    operator_delete(local_118);
  }
  uVar12 = local_130;
  local_130 = 0;
  *in_x8 = 6;
  *(undefined8 *)(in_x8 + 2) = uVar12;
  if ((bVar5) && (puVar11 != (undefined8 *)0x0)) {
    (**(code **)*puVar11)(puVar11);
  }
  if ((bVar7) && (local_140 != (undefined8 *)0x0)) {
    (**(code **)*local_140)();
  }
  if (*(long *)(lVar3 + 0x28) == local_78) {
    return;
  }
LAB_008ccc54:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008ccc78  facebook::react::NativeDiscordMarkdownCxxSpec<facebook::react::NativeDiscordMarkdown>::__unparseFromAstString =====

/* WARNING: Removing unreachable block (ram,0x008ccd68) */
/* facebook::react::NativeDiscordMarkdownCxxSpec<facebook::react::NativeDiscordMarkdown>::__unparseFromAstString(facebook::jsi::Runtime&,
   facebook::react::TurboModule&, facebook::jsi::Value const*, unsigned long) */

void __thiscall
facebook::react::NativeDiscordMarkdownCxxSpec<facebook::react::NativeDiscordMarkdown>::
__unparseFromAstString
          (NativeDiscordMarkdownCxxSpec<facebook::react::NativeDiscordMarkdown> *this,
          Runtime *param_1,TurboModule *param_2,Value *param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined4 *in_x8;
  undefined8 *local_80;
  undefined8 local_78;
  byte local_70 [16];
  void *local_60;
  byte local_58 [8];
  ulong local_50;
  void *local_48;
  undefined8 *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (param_3 == (Value *)0x0) {
    uVar4 = __cxa_allocate_exception(0x60);
                    /* try { // try from 008ccda4 to 008ccdb3 has its CatchHandler @ 008ccddc */
    FUN_007851bc(uVar4,this,"Expected argument in position 0 to be passed");
    if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      __cxa_throw(uVar4,PTR_typeinfo_0099db88,PTR__JSError_0099db78);
    }
  }
  else {
    ::facebook::jsi::Value::asString((IRuntime *)param_2);
    local_40 = local_80;
                    /* try { // try from 008cccc8 to 008cccd7 has its CatchHandler @ 008cce1c */
    (**(code **)(*(long *)this + 0x120))(local_70,this,&local_40);
    if (local_40 != (undefined8 *)0x0) {
      local_40 = (undefined8 *)(**(code **)*local_40)();
    }
                    /* try { // try from 008cccec to 008cccff has its CatchHandler @ 008cce04 */
    NativeDiscordMarkdown::unparseFromAstString(local_58,local_40,this,local_70);
    uVar1 = (ulong)(local_58[0] >> 1);
    pvVar3 = (void *)((ulong)local_58 | 1);
    if ((local_58[0] & 1) != 0) {
      uVar1 = local_50;
      pvVar3 = local_48;
    }
                    /* try { // try from 008ccd24 to 008ccd2f has its CatchHandler @ 008ccdec */
    (**(code **)(*(long *)this + 0x110))(&local_78,this,pvVar3,uVar1);
    if ((local_58[0] & 1) != 0) {
      operator_delete(local_48);
    }
    if ((local_70[0] & 1) != 0) {
      operator_delete(local_60);
    }
    *in_x8 = 6;
    *(undefined8 *)(in_x8 + 2) = local_78;
    local_78 = 0;
    if (*(long *)(lVar2 + 0x28) == local_38) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008cce68  FUN_008cce68 =====

void FUN_008cce68(void *param_1)

{
  FUN_008cc574();
  operator_delete(param_1);
  return;
}


// ===== 008cce8c  FUN_008cce8c =====

void FUN_008cce8c(void *param_1)

{
  FUN_008cc574();
  operator_delete(param_1);
  return;
}


// ===== 008cceb0  FUN_008cceb0 =====

void FUN_008cceb0(void)

{
  (*(code *)PTR_0099f8c8)();
  return;
}


// ===== 008cced0  <EXTERNAL>::__cxa_finalize =====

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_0099f8d0)();
  return;
}


// ===== 008ccee0  <EXTERNAL>::__cxa_atexit =====

void __cxa_atexit(void)

{
  (*(code *)PTR___cxa_atexit_0099f8d8)();
  return;
}


// ===== 008ccef0  <EXTERNAL>::__register_atfork =====

void __register_atfork(void)

{
  (*(code *)PTR___register_atfork_0099f8e0)();
  return;
}


// ===== 008ccf00  facebook::react::RNDiscordMarkdownSpec_ModuleProvider =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall facebook::react::RNDiscordMarkdownSpec_ModuleProvider(void)

{
  (*(code *)PTR_RNDiscordMarkdownSpec_ModuleProvider_0099f8e8)();
  return;
}


// ===== 008ccf10  facebook::react::NativeDiscordMarkdownSpecJSI::NativeDiscordMarkdownSpecJSI =====

void __thiscall
facebook::react::NativeDiscordMarkdownSpecJSI::NativeDiscordMarkdownSpecJSI
          (NativeDiscordMarkdownSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeDiscordMarkdownSpecJSI_0099f8f0)();
  return;
}


// ===== 008ccf20  <EXTERNAL>::facebook::react::JavaTurboModule::JavaTurboModule =====

void __thiscall
facebook::react::JavaTurboModule::JavaTurboModule(JavaTurboModule *this,InitParams *param_1)

{
  (*(code *)PTR_JavaTurboModule_0099f8f8)();
  return;
}


// ===== 008ccf30  <EXTERNAL>::facebook::react::JavaTurboModule::~JavaTurboModule =====

void __thiscall facebook::react::JavaTurboModule::~JavaTurboModule(JavaTurboModule *this)

{
  (*(code *)PTR__JavaTurboModule_0099f900)();
  return;
}


// ===== 008ccf40  <EXTERNAL>::facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::invokeJavaMethod(void)

{
  (*(code *)PTR_invokeJavaMethod_0099f908)();
  return;
}


// ===== 008ccf50  <EXTERNAL>::__cxa_allocate_exception =====

void __cxa_allocate_exception(void)

{
  (*(code *)PTR___cxa_allocate_exception_0099f910)();
  return;
}


// ===== 008ccf60  <EXTERNAL>::__cxa_free_exception =====

void __cxa_free_exception(void)

{
  (*(code *)PTR___cxa_free_exception_0099f918)();
  return;
}


// ===== 008ccf70  <EXTERNAL>::__cxa_throw =====

void __cxa_throw(void)

{
  (*(code *)PTR___cxa_throw_0099f920)();
  return;
}


// ===== 008ccf80  <EXTERNAL>::std::logic_error::logic_error =====

void __thiscall std::logic_error::logic_error(logic_error *this,char *param_1)

{
  (*(code *)PTR_logic_error_0099f928)();
  return;
}


// ===== 008ccf90  <EXTERNAL>::std::bad_array_new_length::bad_array_new_length =====

void __thiscall std::bad_array_new_length::bad_array_new_length(bad_array_new_length *this)

{
  (*(code *)PTR_bad_array_new_length_0099f930)();
  return;
}


// ===== 008ccfa0  <EXTERNAL>::operator.new =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * operator_new(ulong param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_operator_new_0099f938)();
  return pvVar1;
}


// ===== 008ccfb0  <EXTERNAL>::__cxa_begin_catch =====

void __cxa_begin_catch(void)

{
  (*(code *)PTR___cxa_begin_catch_0099f940)();
  return;
}


// ===== 008ccfc0  <EXTERNAL>::std::terminate =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::terminate(void)

{
  (*(code *)PTR_terminate_0099f948)();
  return;
}


// ===== 008ccfd0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008ccfe0  <EXTERNAL>::memcmp =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_memcmp_0099f958)((int)__s1);
  return iVar1;
}


// ===== 008ccff0  <EXTERNAL>::std::__ndk1::__next_prime =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__next_prime(ulong param_1)

{
  (*(code *)PTR___next_prime_0099f960)();
  return;
}


// ===== 008cd000  <EXTERNAL>::std::__ndk1::__shared_weak_count::~__shared_weak_count =====

void __thiscall std::__ndk1::__shared_weak_count::~__shared_weak_count(__shared_weak_count *this)

{
  (*(code *)PTR____shared_weak_count_0099f968)();
  return;
}


// ===== 008cd010  <EXTERNAL>::facebook::jsi::Value::asObject =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::Value::asObject(IRuntime *param_1)

{
  (*(code *)PTR_asObject_0099f970)();
  return;
}


// ===== 008cd020  <EXTERNAL>::facebook::jsi::Value::~Value =====

void __thiscall facebook::jsi::Value::~Value(Value *this)

{
  (*(code *)PTR__Value_0099f978)();
  return;
}


// ===== 008cd030  <EXTERNAL>::facebook::jsi::Value::Value =====

void __thiscall facebook::jsi::Value::Value(Value *this,IRuntime *param_1,Value *param_2)

{
  (*(code *)PTR_Value_0099f980)();
  return;
}


// ===== 008cd040  facebook::react::DiscordCodegen_ModuleProvider =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall facebook::react::DiscordCodegen_ModuleProvider(void)

{
  (*(code *)PTR_DiscordCodegen_ModuleProvider_0099f988)();
  return;
}


// ===== 008cd050  facebook::react::NativeAPNGPreloadModuleSpecJSI::NativeAPNGPreloadModuleSpecJSI =====

void __thiscall
facebook::react::NativeAPNGPreloadModuleSpecJSI::NativeAPNGPreloadModuleSpecJSI
          (NativeAPNGPreloadModuleSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeAPNGPreloadModuleSpecJSI_0099f990)();
  return;
}


// ===== 008cd060  facebook::react::NativeAdsModuleSpecJSI::NativeAdsModuleSpecJSI =====

void __thiscall
facebook::react::NativeAdsModuleSpecJSI::NativeAdsModuleSpecJSI
          (NativeAdsModuleSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeAdsModuleSpecJSI_0099f998)();
  return;
}


// ===== 008cd070  facebook::react::NativeAppAttestModuleSpecJSI::NativeAppAttestModuleSpecJSI =====

void __thiscall
facebook::react::NativeAppAttestModuleSpecJSI::NativeAppAttestModuleSpecJSI
          (NativeAppAttestModuleSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeAppAttestModuleSpecJSI_0099f9a0)();
  return;
}


// ===== 008cd080  facebook::react::NativeAppDatabaseModuleSpecJSI::NativeAppDatabaseModuleSpecJSI =====

void __thiscall
facebook::react::NativeAppDatabaseModuleSpecJSI::NativeAppDatabaseModuleSpecJSI
          (NativeAppDatabaseModuleSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeAppDatabaseModuleSpecJSI_0099f9a8)();
  return;
}


// ===== 008cd090  facebook::react::NativeAppIconModuleSpecJSI::NativeAppIconModuleSpecJSI =====

void __thiscall
facebook::react::NativeAppIconModuleSpecJSI::NativeAppIconModuleSpecJSI
          (NativeAppIconModuleSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeAppIconModuleSpecJSI_0099f9b0)();
  return;
}


// ===== 008cd0a0  facebook::react::NativeAppLifecycleModuleSpecJSI::NativeAppLifecycleModuleSpecJSI =====

void __thiscall
facebook::react::NativeAppLifecycleModuleSpecJSI::NativeAppLifecycleModuleSpecJSI
          (NativeAppLifecycleModuleSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeAppLifecycleModuleSpecJSI_0099f9b8)();
  return;
}


// ===== 008cd0b0  facebook::react::NativeAppRatingRequestModuleSpecJSI::NativeAppRatingRequestModuleSpecJSI =====

void __thiscall
facebook::react::NativeAppRatingRequestModuleSpecJSI::NativeAppRatingRequestModuleSpecJSI
          (NativeAppRatingRequestModuleSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeAppRatingRequestModuleSpecJSI_0099f9c0)();
  return;
}


// ===== 008cd0c0  facebook::react::NativeAudioManagerModuleSpecJSI::NativeAudioManagerModuleSpecJSI =====

void __thiscall
facebook::react::NativeAudioManagerModuleSpecJSI::NativeAudioManagerModuleSpecJSI
          (NativeAudioManagerModuleSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeAudioManagerModuleSpecJSI_0099f9c8)();
  return;
}


// ===== 008cd0d0  facebook::react::NativeAudioPlayerModuleSpecJSI::NativeAudioPlayerModuleSpecJSI =====

void __thiscall
facebook::react::NativeAudioPlayerModuleSpecJSI::NativeAudioPlayerModuleSpecJSI
          (NativeAudioPlayerModuleSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeAudioPlayerModuleSpecJSI_0099f9d0)();
  return;
}


// ===== 008cd0e0  facebook::react::NativeAudioRouteEmitterModuleSpecJSI::NativeAudioRouteEmitterModuleSpecJSI =====

void __thiscall
facebook::react::NativeAudioRouteEmitterModuleSpecJSI::NativeAudioRouteEmitterModuleSpecJSI
          (NativeAudioRouteEmitterModuleSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeAudioRouteEmitterModuleSpecJSI_0099f9d8)();
  return;
}


// ===== 008cd0f0  facebook::react::NativeAuthenticationModuleSpecJSI::NativeAuthenticationModuleSpecJSI =====

void __thiscall
facebook::react::NativeAuthenticationModuleSpecJSI::NativeAuthenticationModuleSpecJSI
          (NativeAuthenticationModuleSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeAuthenticationModuleSpecJSI_0099f9e0)();
  return;
}


// ===== 008cd100  facebook::react::NativeBrowserManagerModuleSpecJSI::NativeBrowserManagerModuleSpecJSI =====

void __thiscall
facebook::react::NativeBrowserManagerModuleSpecJSI::NativeBrowserManagerModuleSpecJSI
          (NativeBrowserManagerModuleSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeBrowserManagerModuleSpecJSI_0099f9e8)();
  return;
}


// ===== 008cd110  facebook::react::NativeCacheModuleSpecJSI::NativeCacheModuleSpecJSI =====

void __thiscall
facebook::react::NativeCacheModuleSpecJSI::NativeCacheModuleSpecJSI
          (NativeCacheModuleSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeCacheModuleSpecJSI_0099f9f0)();
  return;
}


// ===== 008cd120  facebook::react::NativeCallKitModuleSpecJSI::NativeCallKitModuleSpecJSI =====

void __thiscall
facebook::react::NativeCallKitModuleSpecJSI::NativeCallKitModuleSpecJSI
          (NativeCallKitModuleSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeCallKitModuleSpecJSI_0099f9f8)();
  return;
}


// ===== 008cd130  facebook::react::NativeChatModuleSpecJSI::NativeChatModuleSpecJSI =====

void __thiscall
facebook::react::NativeChatModuleSpecJSI::NativeChatModuleSpecJSI
          (NativeChatModuleSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeChatModuleSpecJSI_0099fa00)();
  return;
}


// ===== 008cd140  facebook::react::NativeClientInfoModuleSpecJSI::NativeClientInfoModuleSpecJSI =====

void __thiscall
facebook::react::NativeClientInfoModuleSpecJSI::NativeClientInfoModuleSpecJSI
          (NativeClientInfoModuleSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeClientInfoModuleSpecJSI_0099fa08)();
  return;
}


// ===== 008cd150  facebook::react::NativeCommandClipboardModuleSpecJSI::NativeCommandClipboardModuleSpecJSI =====

void __thiscall
facebook::react::NativeCommandClipboardModuleSpecJSI::NativeCommandClipboardModuleSpecJSI
          (NativeCommandClipboardModuleSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeCommandClipboardModuleSpecJSI_0099fa10)();
  return;
}


// ===== 008cd160  facebook::react::NativeCompressionModuleSpecJSI::NativeCompressionModuleSpecJSI =====

void __thiscall
facebook::react::NativeCompressionModuleSpecJSI::NativeCompressionModuleSpecJSI
          (NativeCompressionModuleSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeCompressionModuleSpecJSI_0099fa18)();
  return;
}


// ===== 008cd170  facebook::react::NativeDateFormatUtilsModuleSpecJSI::NativeDateFormatUtilsModuleSpecJSI =====

void __thiscall
facebook::react::NativeDateFormatUtilsModuleSpecJSI::NativeDateFormatUtilsModuleSpecJSI
          (NativeDateFormatUtilsModuleSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeDateFormatUtilsModuleSpecJSI_0099fa20)();
  return;
}


// ===== 008cd180  facebook::react::NativeDeclaredAgeRangeModuleSpecJSI::NativeDeclaredAgeRangeModuleSpecJSI =====

void __thiscall
facebook::react::NativeDeclaredAgeRangeModuleSpecJSI::NativeDeclaredAgeRangeModuleSpecJSI
          (NativeDeclaredAgeRangeModuleSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeDeclaredAgeRangeModuleSpecJSI_0099fa28)();
  return;
}


// ===== 008cd190  facebook::react::NativeDeviceAccessibilityModuleSpecJSI::NativeDeviceAccessibilityModuleSpecJSI =====

void __thiscall
facebook::react::NativeDeviceAccessibilityModuleSpecJSI::NativeDeviceAccessibilityModuleSpecJSI
          (NativeDeviceAccessibilityModuleSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeDeviceAccessibilityModuleSpecJSI_0099fa30)();
  return;
}


// ===== 008cd1a0  facebook::react::NativeDeviceLocaleModuleSpecJSI::NativeDeviceLocaleModuleSpecJSI =====

void __thiscall
facebook::react::NativeDeviceLocaleModuleSpecJSI::NativeDeviceLocaleModuleSpecJSI
          (NativeDeviceLocaleModuleSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeDeviceLocaleModuleSpecJSI_0099fa38)();
  return;
}


// ===== 008cd1b0  facebook::react::NativeDeviceModuleSpecJSI::NativeDeviceModuleSpecJSI =====

void __thiscall
facebook::react::NativeDeviceModuleSpecJSI::NativeDeviceModuleSpecJSI
          (NativeDeviceModuleSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeDeviceModuleSpecJSI_0099fa40)();
  return;
}


// ===== 008cd1c0  facebook::react::NativeDeviceSettingsModuleSpecJSI::NativeDeviceSettingsModuleSpecJSI =====

void __thiscall
facebook::react::NativeDeviceSettingsModuleSpecJSI::NativeDeviceSettingsModuleSpecJSI
          (NativeDeviceSettingsModuleSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeDeviceSettingsModuleSpecJSI_0099fa48)();
  return;
}


// ===== 008cd1d0  facebook::react::NativeDeviceThermalStateModuleSpecJSI::NativeDeviceThermalStateModuleSpecJSI =====

void __thiscall
facebook::react::NativeDeviceThermalStateModuleSpecJSI::NativeDeviceThermalStateModuleSpecJSI
          (NativeDeviceThermalStateModuleSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeDeviceThermalStateModuleSpecJSI_0099fa50)();
  return;
}


// ===== 008cd1e0  facebook::react::NativeDigitalCredentialModuleSpecJSI::NativeDigitalCredentialModuleSpecJSI =====

void __thiscall
facebook::react::NativeDigitalCredentialModuleSpecJSI::NativeDigitalCredentialModuleSpecJSI
          (NativeDigitalCredentialModuleSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeDigitalCredentialModuleSpecJSI_0099fa58)();
  return;
}


// ===== 008cd1f0  facebook::react::NativeDiskUsageModuleSpecJSI::NativeDiskUsageModuleSpecJSI =====

void __thiscall
facebook::react::NativeDiskUsageModuleSpecJSI::NativeDiskUsageModuleSpecJSI
          (NativeDiskUsageModuleSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeDiskUsageModuleSpecJSI_0099fa60)();
  return;
}


// ===== 008cd200  facebook::react::NativeFWOMeasureModuleSpecJSI::NativeFWOMeasureModuleSpecJSI =====

void __thiscall
facebook::react::NativeFWOMeasureModuleSpecJSI::NativeFWOMeasureModuleSpecJSI
          (NativeFWOMeasureModuleSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeFWOMeasureModuleSpecJSI_0099fa68)();
  return;
}


// ===== 008cd210  facebook::react::NativeFastConnectModuleSpecJSI::NativeFastConnectModuleSpecJSI =====

void __thiscall
facebook::react::NativeFastConnectModuleSpecJSI::NativeFastConnectModuleSpecJSI
          (NativeFastConnectModuleSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeFastConnectModuleSpecJSI_0099fa70)();
  return;
}


// ===== 008cd220  facebook::react::NativeFileModuleSpecJSI::NativeFileModuleSpecJSI =====

void __thiscall
facebook::react::NativeFileModuleSpecJSI::NativeFileModuleSpecJSI
          (NativeFileModuleSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeFileModuleSpecJSI_0099fa78)();
  return;
}


// ===== 008cd230  facebook::react::NativeFontModuleSpecJSI::NativeFontModuleSpecJSI =====

void __thiscall
facebook::react::NativeFontModuleSpecJSI::NativeFontModuleSpecJSI
          (NativeFontModuleSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeFontModuleSpecJSI_0099fa80)();
  return;
}


// ===== 008cd240  facebook::react::NativeI18nModuleSpecJSI::NativeI18nModuleSpecJSI =====

void __thiscall
facebook::react::NativeI18nModuleSpecJSI::NativeI18nModuleSpecJSI
          (NativeI18nModuleSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeI18nModuleSpecJSI_0099fa88)();
  return;
}


// ===== 008cd250  facebook::react::NativeInstallTimeModuleSpecJSI::NativeInstallTimeModuleSpecJSI =====

void __thiscall
facebook::react::NativeInstallTimeModuleSpecJSI::NativeInstallTimeModuleSpecJSI
          (NativeInstallTimeModuleSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeInstallTimeModuleSpecJSI_0099fa90)();
  return;
}


// ===== 008cd260  facebook::react::NativeIntentsModuleSpecJSI::NativeIntentsModuleSpecJSI =====

void __thiscall
facebook::react::NativeIntentsModuleSpecJSI::NativeIntentsModuleSpecJSI
          (NativeIntentsModuleSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeIntentsModuleSpecJSI_0099fa98)();
  return;
}


// ===== 008cd270  facebook::react::NativeIosAttributionModuleSpecJSI::NativeIosAttributionModuleSpecJSI =====

void __thiscall
facebook::react::NativeIosAttributionModuleSpecJSI::NativeIosAttributionModuleSpecJSI
          (NativeIosAttributionModuleSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeIosAttributionModuleSpecJSI_0099faa0)();
  return;
}


// ===== 008cd280  facebook::react::NativeJSWatchdogModuleSpecJSI::NativeJSWatchdogModuleSpecJSI =====

void __thiscall
facebook::react::NativeJSWatchdogModuleSpecJSI::NativeJSWatchdogModuleSpecJSI
          (NativeJSWatchdogModuleSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeJSWatchdogModuleSpecJSI_0099faa8)();
  return;
}


// ===== 008cd290  facebook::react::NativeJankSessionModuleSpecJSI::NativeJankSessionModuleSpecJSI =====

void __thiscall
facebook::react::NativeJankSessionModuleSpecJSI::NativeJankSessionModuleSpecJSI
          (NativeJankSessionModuleSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeJankSessionModuleSpecJSI_0099fab0)();
  return;
}


// ===== 008cd2a0  facebook::react::NativeJankStatsModuleSpecJSI::NativeJankStatsModuleSpecJSI =====

void __thiscall
facebook::react::NativeJankStatsModuleSpecJSI::NativeJankStatsModuleSpecJSI
          (NativeJankStatsModuleSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeJankStatsModuleSpecJSI_0099fab8)();
  return;
}


// ===== 008cd2b0  facebook::react::NativeKeyCommandsModuleSpecJSI::NativeKeyCommandsModuleSpecJSI =====

void __thiscall
facebook::react::NativeKeyCommandsModuleSpecJSI::NativeKeyCommandsModuleSpecJSI
          (NativeKeyCommandsModuleSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeKeyCommandsModuleSpecJSI_0099fac0)();
  return;
}


// ===== 008cd2c0  facebook::react::NativeKeyboardModuleSpecJSI::NativeKeyboardModuleSpecJSI =====

void __thiscall
facebook::react::NativeKeyboardModuleSpecJSI::NativeKeyboardModuleSpecJSI
          (NativeKeyboardModuleSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeKeyboardModuleSpecJSI_0099fac8)();
  return;
}


// ===== 008cd2d0  facebook::react::NativeLinkingModuleSpecJSI::NativeLinkingModuleSpecJSI =====

void __thiscall
facebook::react::NativeLinkingModuleSpecJSI::NativeLinkingModuleSpecJSI
          (NativeLinkingModuleSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeLinkingModuleSpecJSI_0099fad0)();
  return;
}


// ===== 008cd2e0  facebook::react::NativeMediaEngineModuleSpecJSI::NativeMediaEngineModuleSpecJSI =====

void __thiscall
facebook::react::NativeMediaEngineModuleSpecJSI::NativeMediaEngineModuleSpecJSI
          (NativeMediaEngineModuleSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeMediaEngineModuleSpecJSI_0099fad8)();
  return;
}


// ===== 008cd2f0  facebook::react::NativeMediaManagerModuleSpecJSI::NativeMediaManagerModuleSpecJSI =====

void __thiscall
facebook::react::NativeMediaManagerModuleSpecJSI::NativeMediaManagerModuleSpecJSI
          (NativeMediaManagerModuleSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeMediaManagerModuleSpecJSI_0099fae0)();
  return;
}


// ===== 008cd300  facebook::react::NativeMetaQuestModuleSpecJSI::NativeMetaQuestModuleSpecJSI =====

void __thiscall
facebook::react::NativeMetaQuestModuleSpecJSI::NativeMetaQuestModuleSpecJSI
          (NativeMetaQuestModuleSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeMetaQuestModuleSpecJSI_0099fae8)();
  return;
}


// ===== 008cd310  facebook::react::NativeMetricKitModuleSpecJSI::NativeMetricKitModuleSpecJSI =====

void __thiscall
facebook::react::NativeMetricKitModuleSpecJSI::NativeMetricKitModuleSpecJSI
          (NativeMetricKitModuleSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeMetricKitModuleSpecJSI_0099faf0)();
  return;
}


// ===== 008cd320  facebook::react::NativeMetricMonitorModuleSpecJSI::NativeMetricMonitorModuleSpecJSI =====

void __thiscall
facebook::react::NativeMetricMonitorModuleSpecJSI::NativeMetricMonitorModuleSpecJSI
          (NativeMetricMonitorModuleSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeMetricMonitorModuleSpecJSI_0099faf8)();
  return;
}


// ===== 008cd330  facebook::react::NativeMobileVoiceOverlayModuleSpecJSI::NativeMobileVoiceOverlayModuleSpecJSI =====

void __thiscall
facebook::react::NativeMobileVoiceOverlayModuleSpecJSI::NativeMobileVoiceOverlayModuleSpecJSI
          (NativeMobileVoiceOverlayModuleSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeMobileVoiceOverlayModuleSpecJSI_0099fb00)();
  return;
}


// ===== 008cd340  facebook::react::NativeNotifSettingsModuleSpecJSI::NativeNotifSettingsModuleSpecJSI =====

void __thiscall
facebook::react::NativeNotifSettingsModuleSpecJSI::NativeNotifSettingsModuleSpecJSI
          (NativeNotifSettingsModuleSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeNotifSettingsModuleSpecJSI_0099fb08)();
  return;
}


// ===== 008cd350  facebook::react::NativeOnDemandResourceModuleSpecJSI::NativeOnDemandResourceModuleSpecJSI =====

void __thiscall
facebook::react::NativeOnDemandResourceModuleSpecJSI::NativeOnDemandResourceModuleSpecJSI
          (NativeOnDemandResourceModuleSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeOnDemandResourceModuleSpecJSI_0099fb10)();
  return;
}


// ===== 008cd360  facebook::react::NativePlayAgeSignalsModuleSpecJSI::NativePlayAgeSignalsModuleSpecJSI =====

void __thiscall
facebook::react::NativePlayAgeSignalsModuleSpecJSI::NativePlayAgeSignalsModuleSpecJSI
          (NativePlayAgeSignalsModuleSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativePlayAgeSignalsModuleSpecJSI_0099fb18)();
  return;
}


// ===== 008cd370  facebook::react::NativePlayIntegrityModuleSpecJSI::NativePlayIntegrityModuleSpecJSI =====

void __thiscall
facebook::react::NativePlayIntegrityModuleSpecJSI::NativePlayIntegrityModuleSpecJSI
          (NativePlayIntegrityModuleSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativePlayIntegrityModuleSpecJSI_0099fb20)();
  return;
}


// ===== 008cd380  facebook::react::NativePortalFromNativeModuleSpecJSI::NativePortalFromNativeModuleSpecJSI =====

void __thiscall
facebook::react::NativePortalFromNativeModuleSpecJSI::NativePortalFromNativeModuleSpecJSI
          (NativePortalFromNativeModuleSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativePortalFromNativeModuleSpecJSI_0099fb28)();
  return;
}


// ===== 008cd390  facebook::react::NativeProximitySensorManagerModuleSpecJSI::NativeProximitySensorManagerModuleSpecJSI =====

void __thiscall
facebook::react::NativeProximitySensorManagerModuleSpecJSI::
NativeProximitySensorManagerModuleSpecJSI
          (NativeProximitySensorManagerModuleSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeProximitySensorManagerModuleSpecJSI_0099fb30)();
  return;
}


// ===== 008cd3a0  facebook::react::NativePushKitModuleSpecJSI::NativePushKitModuleSpecJSI =====

void __thiscall
facebook::react::NativePushKitModuleSpecJSI::NativePushKitModuleSpecJSI
          (NativePushKitModuleSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativePushKitModuleSpecJSI_0099fb38)();
  return;
}


// ===== 008cd3b0  facebook::react::NativePushNotificationMonitorModuleSpecJSI::NativePushNotificationMonitorModuleSpecJSI =====

void __thiscall
facebook::react::NativePushNotificationMonitorModuleSpecJSI::
NativePushNotificationMonitorModuleSpecJSI
          (NativePushNotificationMonitorModuleSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativePushNotificationMonitorModuleSpecJSI_0099fb40)();
  return;
}


// ===== 008cd3c0  facebook::react::NativeReactAssetModuleSpecJSI::NativeReactAssetModuleSpecJSI =====

void __thiscall
facebook::react::NativeReactAssetModuleSpecJSI::NativeReactAssetModuleSpecJSI
          (NativeReactAssetModuleSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeReactAssetModuleSpecJSI_0099fb48)();
  return;
}


// ===== 008cd3d0  facebook::react::NativeRemoteAuthCryptoModuleSpecJSI::NativeRemoteAuthCryptoModuleSpecJSI =====

void __thiscall
facebook::react::NativeRemoteAuthCryptoModuleSpecJSI::NativeRemoteAuthCryptoModuleSpecJSI
          (NativeRemoteAuthCryptoModuleSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeRemoteAuthCryptoModuleSpecJSI_0099fb50)();
  return;
}


// ===== 008cd3e0  facebook::react::NativeSafeAreaInsetsModuleSpecJSI::NativeSafeAreaInsetsModuleSpecJSI =====

void __thiscall
facebook::react::NativeSafeAreaInsetsModuleSpecJSI::NativeSafeAreaInsetsModuleSpecJSI
          (NativeSafeAreaInsetsModuleSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeSafeAreaInsetsModuleSpecJSI_0099fb58)();
  return;
}


// ===== 008cd3f0  facebook::react::NativeScreenWakeLockModuleSpecJSI::NativeScreenWakeLockModuleSpecJSI =====

void __thiscall
facebook::react::NativeScreenWakeLockModuleSpecJSI::NativeScreenWakeLockModuleSpecJSI
          (NativeScreenWakeLockModuleSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeScreenWakeLockModuleSpecJSI_0099fb60)();
  return;
}


// ===== 008cd400  facebook::react::NativeSecurityKeyManagerModuleSpecJSI::NativeSecurityKeyManagerModuleSpecJSI =====

void __thiscall
facebook::react::NativeSecurityKeyManagerModuleSpecJSI::NativeSecurityKeyManagerModuleSpecJSI
          (NativeSecurityKeyManagerModuleSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeSecurityKeyManagerModuleSpecJSI_0099fb68)();
  return;
}


// ===== 008cd410  facebook::react::NativeShareManagerModuleSpecJSI::NativeShareManagerModuleSpecJSI =====

void __thiscall
facebook::react::NativeShareManagerModuleSpecJSI::NativeShareManagerModuleSpecJSI
          (NativeShareManagerModuleSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeShareManagerModuleSpecJSI_0099fb70)();
  return;
}


// ===== 008cd420  facebook::react::NativeSystraceModuleSpecJSI::NativeSystraceModuleSpecJSI =====

void __thiscall
facebook::react::NativeSystraceModuleSpecJSI::NativeSystraceModuleSpecJSI
          (NativeSystraceModuleSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeSystraceModuleSpecJSI_0099fb78)();
  return;
}


// ===== 008cd430  facebook::react::NativeTTIManagerModuleSpecJSI::NativeTTIManagerModuleSpecJSI =====

void __thiscall
facebook::react::NativeTTIManagerModuleSpecJSI::NativeTTIManagerModuleSpecJSI
          (NativeTTIManagerModuleSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeTTIManagerModuleSpecJSI_0099fb80)();
  return;
}


// ===== 008cd440  facebook::react::NativeTTIModuleSpecJSI::NativeTTIModuleSpecJSI =====

void __thiscall
facebook::react::NativeTTIModuleSpecJSI::NativeTTIModuleSpecJSI
          (NativeTTIModuleSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeTTIModuleSpecJSI_0099fb88)();
  return;
}


// ===== 008cd450  facebook::react::NativeTelecomModuleSpecJSI::NativeTelecomModuleSpecJSI =====

void __thiscall
facebook::react::NativeTelecomModuleSpecJSI::NativeTelecomModuleSpecJSI
          (NativeTelecomModuleSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeTelecomModuleSpecJSI_0099fb90)();
  return;
}


// ===== 008cd460  facebook::react::NativeTelemetryRingModuleSpecJSI::NativeTelemetryRingModuleSpecJSI =====

void __thiscall
facebook::react::NativeTelemetryRingModuleSpecJSI::NativeTelemetryRingModuleSpecJSI
          (NativeTelemetryRingModuleSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeTelemetryRingModuleSpecJSI_0099fb98)();
  return;
}


// ===== 008cd470  facebook::react::NativeThemeModuleSpecJSI::NativeThemeModuleSpecJSI =====

void __thiscall
facebook::react::NativeThemeModuleSpecJSI::NativeThemeModuleSpecJSI
          (NativeThemeModuleSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeThemeModuleSpecJSI_0099fba0)();
  return;
}


// ===== 008cd480  facebook::react::NativeTimersModuleSpecJSI::NativeTimersModuleSpecJSI =====

void __thiscall
facebook::react::NativeTimersModuleSpecJSI::NativeTimersModuleSpecJSI
          (NativeTimersModuleSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeTimersModuleSpecJSI_0099fba8)();
  return;
}


// ===== 008cd490  facebook::react::NativeTimezoneHermesFixModuleSpecJSI::NativeTimezoneHermesFixModuleSpecJSI =====

void __thiscall
facebook::react::NativeTimezoneHermesFixModuleSpecJSI::NativeTimezoneHermesFixModuleSpecJSI
          (NativeTimezoneHermesFixModuleSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeTimezoneHermesFixModuleSpecJSI_0099fbb0)();
  return;
}


// ===== 008cd4a0  facebook::react::NativeTouchEventAnalyticsModuleSpecJSI::NativeTouchEventAnalyticsModuleSpecJSI =====

void __thiscall
facebook::react::NativeTouchEventAnalyticsModuleSpecJSI::NativeTouchEventAnalyticsModuleSpecJSI
          (NativeTouchEventAnalyticsModuleSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeTouchEventAnalyticsModuleSpecJSI_0099fbb8)();
  return;
}


// ===== 008cd4b0  <EXTERNAL>::facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::configureEventEmitterCallback =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
facebook::react::JavaTurboModule::facebook::react::JavaTurboModule::configureEventEmitterCallback
          (void)

{
  (*(code *)PTR_configureEventEmitterCallback_0099fbc0)();
  return;
}


// ===== 008cd4c0  <EXTERNAL>::strlen =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_0099fbc8)();
  return sVar1;
}


// ===== 008cd4d0  <EXTERNAL>::std::__ndk1::__shared_weak_count::__release_weak =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__shared_weak_count::__release_weak(void)

{
  (*(code *)PTR___release_weak_0099fbd0)();
  return;
}


// ===== 008cd4e0  <EXTERNAL>::std::__ndk1::mutex::~mutex =====

void __thiscall std::__ndk1::mutex::~mutex(mutex *this)

{
  (*(code *)PTR__mutex_0099fbd8)();
  return;
}


// ===== 008cd4f0  <EXTERNAL>::std::__ndk1::mutex::lock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::mutex::lock(void)

{
  (*(code *)PTR_lock_0099fbe0)();
  return;
}


// ===== 008cd500  <EXTERNAL>::std::__ndk1::mutex::unlock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::mutex::unlock(void)

{
  (*(code *)PTR_unlock_0099fbe8)();
  return;
}


// ===== 008cd510  <EXTERNAL>::__strlen_chk =====

void __strlen_chk(void)

{
  (*(code *)PTR___strlen_chk_0099fbf0)();
  return;
}


// ===== 008cd520  <EXTERNAL>::facebook::jsi::JSError::JSError =====

void __thiscall facebook::jsi::JSError::JSError(void)

{
  (*(code *)PTR_JSError_0099fbf8)();
  return;
}


// ===== 008cd530  <EXTERNAL>::facebook::jsi::Value::~Value =====

void __thiscall facebook::jsi::Value::~Value(Value *this)

{
  (*(code *)PTR__Value_0099fc00)();
  return;
}


// ===== 008cd540  <EXTERNAL>::std::exception::~exception =====

void __thiscall std::exception::~exception(exception *this)

{
  (*(code *)PTR__exception_0099fc08)();
  return;
}


// ===== 008cd550  <EXTERNAL>::facebook::react::LongLivedObjectCollection::facebook::react::LongLivedObjectCollection::get =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
facebook::react::LongLivedObjectCollection::facebook::react::LongLivedObjectCollection::get(void)

{
  (*(code *)PTR_get_0099fc10)();
  return;
}


// ===== 008cd560  <EXTERNAL>::facebook::react::LongLivedObjectCollection::facebook::react::LongLivedObjectCollection::add =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
facebook::react::LongLivedObjectCollection::facebook::react::LongLivedObjectCollection::add(void)

{
  (*(code *)PTR_add_0099fc18)();
  return;
}


// ===== 008cd570  <EXTERNAL>::std::__ndk1::__shared_weak_count::lock =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__shared_weak_count::lock(void)

{
  (*(code *)PTR_lock_0099fc20)();
  return;
}


// ===== 008cd580  <EXTERNAL>::facebook::jsi::Value::Value =====

void __thiscall facebook::jsi::Value::Value(Value *this,Value *param_1)

{
  (*(code *)PTR_Value_0099fc28)();
  return;
}


// ===== 008cd590  <EXTERNAL>::facebook::jsi::Object::asFunction =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::Object::asFunction(IRuntime *param_1)

{
  (*(code *)PTR_asFunction_0099fc30)();
  return;
}


// ===== 008cd5a0  _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180000ILi0EEEPKc =====

void _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180000ILi0EEEPKc(void)

{
  (*(code *)
    PTR__ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne180000ILi0EEEPKc_0099fc38
  )();
  return;
}


// ===== 008cd5b0  <EXTERNAL>::facebook::react::ComponentDescriptorProviderRegistry::add =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ComponentDescriptorProviderRegistry::add(ComponentDescriptorProvider *param_1)

{
  (*(code *)PTR_add_0099fc40)();
  return;
}


// ===== 008cd5c0  <EXTERNAL>::facebook::react::ComponentDescriptor::ComponentDescriptor =====

void __thiscall
facebook::react::ComponentDescriptor::ComponentDescriptor
          (ComponentDescriptor *this,ComponentDescriptorParameters *param_1,RawPropsParser *param_2)

{
  (*(code *)PTR_ComponentDescriptor_0099fc48)();
  return;
}


// ===== 008cd5d0  <EXTERNAL>::facebook::react::RawProps::facebook::react::RawProps::parse =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall facebook::react::RawProps::facebook::react::RawProps::parse(void)

{
  (*(code *)PTR_parse_0099fc50)();
  return;
}


// ===== 008cd5e0  facebook::react::APNGDecorationViewProps::APNGDecorationViewProps =====

void __thiscall
facebook::react::APNGDecorationViewProps::APNGDecorationViewProps
          (APNGDecorationViewProps *this,PropsParserContext *param_1,
          APNGDecorationViewProps *param_2,RawProps *param_3)

{
  (*(code *)PTR_APNGDecorationViewProps_0099fc58)();
  return;
}


// ===== 008cd5f0  <EXTERNAL>::facebook::react::RawPropsParser::facebook::react::RawPropsParser::postPrepare =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall facebook::react::RawPropsParser::facebook::react::RawPropsParser::postPrepare(void)

{
  (*(code *)PTR_postPrepare_0099fc60)();
  return;
}


// ===== 008cd600  <EXTERNAL>::std::__ndk1::__shared_mutex_base::__shared_mutex_base =====

void __thiscall std::__ndk1::__shared_mutex_base::__shared_mutex_base(__shared_mutex_base *this)

{
  (*(code *)PTR___shared_mutex_base_0099fc68)();
  return;
}


// ===== 008cd610  <EXTERNAL>::folly::dynamic::folly::dynamic::destroy =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall folly::dynamic::folly::dynamic::destroy(void)

{
  (*(code *)PTR_destroy_0099fc70)();
  return;
}


// ===== 008cd620  <EXTERNAL>::std::__ndk1::condition_variable::~condition_variable =====

void __thiscall std::__ndk1::condition_variable::~condition_variable(condition_variable *this)

{
  (*(code *)PTR__condition_variable_0099fc78)();
  return;
}


// ===== 008cd630  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::completeClone =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::completeClone
          (void)

{
  (*(code *)PTR_completeClone_0099fc80)();
  return;
}


// ===== 008cd640  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::appendChild =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::appendChild
          (void)

{
  (*(code *)PTR_appendChild_0099fc88)();
  return;
}


// ===== 008cd650  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode =====

void __thiscall facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(void)

{
  (*(code *)PTR_YogaLayoutableShadowNode_0099fc90)();
  return;
}


// ===== 008cd660  <EXTERNAL>::facebook::jsi::NativeState::~NativeState =====

void __thiscall facebook::jsi::NativeState::~NativeState(NativeState *this)

{
  (*(code *)PTR__NativeState_0099fc98)();
  return;
}


// ===== 008cd670  <EXTERNAL>::facebook::react::LayoutableShadowNode::getLayoutMetrics =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::LayoutableShadowNode::getLayoutMetrics(void)

{
  (*(code *)PTR_getLayoutMetrics_0099fca0)();
  return;
}


// ===== 008cd680  <EXTERNAL>::facebook::react::BaseViewProps::resolveTransform =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::BaseViewProps::resolveTransform(LayoutMetrics *param_1)

{
  (*(code *)PTR_resolveTransform_0099fca8)();
  return;
}


// ===== 008cd690  <EXTERNAL>::facebook::react::ShadowNode::transferRuntimeShadowNodeReference =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ShadowNode::transferRuntimeShadowNodeReference
               (shared_ptr *param_1,ShadowNodeFragment *param_2)

{
  (*(code *)PTR_transferRuntimeShadowNodeReference_0099fcb0)();
  return;
}


// ===== 008cd6a0  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode =====

void __thiscall
facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode
          (YogaLayoutableShadowNode *this,ShadowNode *param_1,ShadowNodeFragment *param_2)

{
  (*(code *)PTR_YogaLayoutableShadowNode_0099fcb8)();
  return;
}


// ===== 008cd6b0  <EXTERNAL>::facebook::react::RawProps::isEmpty =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::RawProps::isEmpty(void)

{
  (*(code *)PTR_isEmpty_0099fcc0)();
  return;
}


// ===== 008cd6c0  <EXTERNAL>::facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::enableExclusivePropsUpdateAndroid =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
enableExclusivePropsUpdateAndroid(void)

{
  (*(code *)PTR_enableExclusivePropsUpdateAndroid_0099fcc8)();
  return;
}


// ===== 008cd6d0  <EXTERNAL>::facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::enableAccumulatedUpdatesInRawPropsAndroid =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
enableAccumulatedUpdatesInRawPropsAndroid(void)

{
  (*(code *)PTR_enableAccumulatedUpdatesInRawPropsAndroid_0099fcd0)();
  return;
}


// ===== 008cd6e0  <EXTERNAL>::facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::enablePropsUpdateReconciliationAndroid =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
enablePropsUpdateReconciliationAndroid(void)

{
  (*(code *)PTR_enablePropsUpdateReconciliationAndroid_0099fcd8)();
  return;
}


// ===== 008cd6f0  <EXTERNAL>::strcmp =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_strcmp_0099fce0)((int)__s1);
  return iVar1;
}


// ===== 008cd700  <EXTERNAL>::facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::enableCppPropsIteratorSetter =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
enableCppPropsIteratorSetter(void)

{
  (*(code *)PTR_enableCppPropsIteratorSetter_0099fce8)();
  return;
}


// ===== 008cd710  <EXTERNAL>::folly::dynamic::dynamic =====

void __thiscall folly::dynamic::dynamic(dynamic *this,dynamic *param_1)

{
  (*(code *)PTR_dynamic_0099fcf0)();
  return;
}


// ===== 008cd720  <EXTERNAL>::facebook::react::RawProps::operator.cast.to.dynamic =====

void __thiscall facebook::react::RawProps::operator_cast_to_dynamic(RawProps *this)

{
  (*(code *)PTR_operator_cast_to_dynamic_0099fcf8)();
  return;
}


// ===== 008cd730  <EXTERNAL>::facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp(void)

{
  (*(code *)PTR_setProp_0099fd00)();
  return;
}


// ===== 008cd740  <EXTERNAL>::__cxa_guard_acquire =====

void __cxa_guard_acquire(void)

{
  (*(code *)PTR___cxa_guard_acquire_0099fd08)();
  return;
}


// ===== 008cd750  <EXTERNAL>::__cxa_guard_abort =====

void __cxa_guard_abort(void)

{
  (*(code *)PTR___cxa_guard_abort_0099fd10)();
  return;
}


// ===== 008cd760  <EXTERNAL>::__cxa_guard_release =====

void __cxa_guard_release(void)

{
  (*(code *)PTR___cxa_guard_release_0099fd18)();
  return;
}


// ===== 008cd770  <EXTERNAL>::facebook::react::Props::facebook::react::Props::initializeDynamicProps =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall facebook::react::Props::facebook::react::Props::initializeDynamicProps(void)

{
  (*(code *)PTR_initializeDynamicProps_0099fd20)();
  return;
}


// ===== 008cd780  <EXTERNAL>::folly::TypeError::TypeError =====

void __thiscall folly::TypeError::TypeError(void)

{
  (*(code *)PTR_TypeError_0099fd28)();
  return;
}


// ===== 008cd790  <EXTERNAL>::std::runtime_error::~runtime_error =====

void __thiscall std::runtime_error::~runtime_error(runtime_error *this)

{
  (*(code *)PTR__runtime_error_0099fd30)();
  return;
}


// ===== 008cd7a0  <EXTERNAL>::std::runtime_error::runtime_error =====

void __thiscall std::runtime_error::runtime_error(runtime_error *this,runtime_error *param_1)

{
  (*(code *)PTR_runtime_error_0099fd38)();
  return;
}


// ===== 008cd7b0  <EXTERNAL>::facebook::react::EventEmitter::facebook::react::EventEmitter::setShadowNodeFamily =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
facebook::react::EventEmitter::facebook::react::EventEmitter::setShadowNodeFamily(void)

{
  (*(code *)PTR_setShadowNodeFamily_0099fd40)();
  return;
}


// ===== 008cd7c0  <EXTERNAL>::facebook::react::EventEmitter::EventEmitter =====

void __thiscall facebook::react::EventEmitter::EventEmitter(void)

{
  (*(code *)PTR_EventEmitter_0099fd48)();
  return;
}


// ===== 008cd7d0  <EXTERNAL>::facebook::react::EventTarget::EventTarget =====

void __thiscall facebook::react::EventTarget::EventTarget(void)

{
  (*(code *)PTR_EventTarget_0099fd50)();
  return;
}


// ===== 008cd7e0  <EXTERNAL>::facebook::react::ShadowNodeFamily::ShadowNodeFamily =====

void __thiscall facebook::react::ShadowNodeFamily::ShadowNodeFamily(void)

{
  (*(code *)PTR_ShadowNodeFamily_0099fd58)();
  return;
}


// ===== 008cd7f0  <EXTERNAL>::facebook::react::ShadowNodeFamily::~ShadowNodeFamily =====

void __thiscall facebook::react::ShadowNodeFamily::~ShadowNodeFamily(ShadowNodeFamily *this)

{
  (*(code *)PTR__ShadowNodeFamily_0099fd60)();
  return;
}


// ===== 008cd800  facebook::react::APNGViewProps::APNGViewProps =====

void __thiscall
facebook::react::APNGViewProps::APNGViewProps
          (APNGViewProps *this,PropsParserContext *param_1,APNGViewProps *param_2,RawProps *param_3)

{
  (*(code *)PTR_APNGViewProps_0099fd68)();
  return;
}


// ===== 008cd810  facebook::react::APNGStickerViewProps::APNGStickerViewProps =====

void __thiscall
facebook::react::APNGStickerViewProps::APNGStickerViewProps
          (APNGStickerViewProps *this,PropsParserContext *param_1,APNGStickerViewProps *param_2,
          RawProps *param_3)

{
  (*(code *)PTR_APNGStickerViewProps_0099fd70)();
  return;
}


// ===== 008cd820  facebook::react::DCDChatInputProps::DCDChatInputProps =====

void __thiscall
facebook::react::DCDChatInputProps::DCDChatInputProps
          (DCDChatInputProps *this,PropsParserContext *param_1,DCDChatInputProps *param_2,
          RawProps *param_3)

{
  (*(code *)PTR_DCDChatInputProps_0099fd78)();
  return;
}


// ===== 008cd830  facebook::react::DCDChatListProps::DCDChatListProps =====

void __thiscall
facebook::react::DCDChatListProps::DCDChatListProps
          (DCDChatListProps *this,PropsParserContext *param_1,DCDChatListProps *param_2,
          RawProps *param_3)

{
  (*(code *)PTR_DCDChatListProps_0099fd80)();
  return;
}


// ===== 008cd840  facebook::react::DCDChatProps::DCDChatProps =====

void __thiscall
facebook::react::DCDChatProps::DCDChatProps
          (DCDChatProps *this,PropsParserContext *param_1,DCDChatProps *param_2,RawProps *param_3)

{
  (*(code *)PTR_DCDChatProps_0099fd88)();
  return;
}


// ===== 008cd850  facebook::react::ClipViewProps::ClipViewProps =====

void __thiscall
facebook::react::ClipViewProps::ClipViewProps
          (ClipViewProps *this,PropsParserContext *param_1,ClipViewProps *param_2,RawProps *param_3)

{
  (*(code *)PTR_ClipViewProps_0099fd90)();
  return;
}


// ===== 008cd860  facebook::react::EmojiPickerViewProps::EmojiPickerViewProps =====

void __thiscall
facebook::react::EmojiPickerViewProps::EmojiPickerViewProps
          (EmojiPickerViewProps *this,PropsParserContext *param_1,EmojiPickerViewProps *param_2,
          RawProps *param_3)

{
  (*(code *)PTR_EmojiPickerViewProps_0099fd98)();
  return;
}


// ===== 008cd870  facebook::react::EmojiPickerRowViewProps::EmojiPickerRowViewProps =====

void __thiscall
facebook::react::EmojiPickerRowViewProps::EmojiPickerRowViewProps
          (EmojiPickerRowViewProps *this,PropsParserContext *param_1,
          EmojiPickerRowViewProps *param_2,RawProps *param_3)

{
  (*(code *)PTR_EmojiPickerRowViewProps_0099fda0)();
  return;
}


// ===== 008cd880  facebook::react::DCDFastImageViewProps::DCDFastImageViewProps =====

void __thiscall
facebook::react::DCDFastImageViewProps::DCDFastImageViewProps
          (DCDFastImageViewProps *this,PropsParserContext *param_1,DCDFastImageViewProps *param_2,
          RawProps *param_3)

{
  (*(code *)PTR_DCDFastImageViewProps_0099fda8)();
  return;
}


// ===== 008cd890  facebook::react::FastestListProps::FastestListProps =====

void __thiscall
facebook::react::FastestListProps::FastestListProps
          (FastestListProps *this,PropsParserContext *param_1,FastestListProps *param_2,
          RawProps *param_3)

{
  (*(code *)PTR_FastestListProps_0099fdb0)();
  return;
}


// ===== 008cd8a0  facebook::react::DCDImageWithThumbhashPlaceholderViewProps::DCDImageWithThumbhashPlaceholderViewProps =====

void __thiscall
facebook::react::DCDImageWithThumbhashPlaceholderViewProps::
DCDImageWithThumbhashPlaceholderViewProps
          (DCDImageWithThumbhashPlaceholderViewProps *this,PropsParserContext *param_1,
          DCDImageWithThumbhashPlaceholderViewProps *param_2,RawProps *param_3)

{
  (*(code *)PTR_DCDImageWithThumbhashPlaceholderViewProps_0099fdb8)();
  return;
}


// ===== 008cd8b0  facebook::react::DCDLocalImageThumbnailProps::DCDLocalImageThumbnailProps =====

void __thiscall
facebook::react::DCDLocalImageThumbnailProps::DCDLocalImageThumbnailProps
          (DCDLocalImageThumbnailProps *this,PropsParserContext *param_1,
          DCDLocalImageThumbnailProps *param_2,RawProps *param_3)

{
  (*(code *)PTR_DCDLocalImageThumbnailProps_0099fdc0)();
  return;
}


// ===== 008cd8c0  facebook::react::DCDPortalViewProps::DCDPortalViewProps =====

void __thiscall
facebook::react::DCDPortalViewProps::DCDPortalViewProps
          (DCDPortalViewProps *this,PropsParserContext *param_1,DCDPortalViewProps *param_2,
          RawProps *param_3)

{
  (*(code *)PTR_DCDPortalViewProps_0099fdc8)();
  return;
}


// ===== 008cd8d0  facebook::react::SelectActionComponentViewProps::SelectActionComponentViewProps =====

void __thiscall
facebook::react::SelectActionComponentViewProps::SelectActionComponentViewProps
          (SelectActionComponentViewProps *this,PropsParserContext *param_1,
          SelectActionComponentViewProps *param_2,RawProps *param_3)

{
  (*(code *)PTR_SelectActionComponentViewProps_0099fdd0)();
  return;
}


// ===== 008cd8e0  facebook::react::StickerPickerRowViewProps::StickerPickerRowViewProps =====

void __thiscall
facebook::react::StickerPickerRowViewProps::StickerPickerRowViewProps
          (StickerPickerRowViewProps *this,PropsParserContext *param_1,
          StickerPickerRowViewProps *param_2,RawProps *param_3)

{
  (*(code *)PTR_StickerPickerRowViewProps_0099fdd8)();
  return;
}


// ===== 008cd8f0  facebook::react::TextDisplayComponentViewProps::TextDisplayComponentViewProps =====

void __thiscall
facebook::react::TextDisplayComponentViewProps::TextDisplayComponentViewProps
          (TextDisplayComponentViewProps *this,PropsParserContext *param_1,
          TextDisplayComponentViewProps *param_2,RawProps *param_3)

{
  (*(code *)PTR_TextDisplayComponentViewProps_0099fde0)();
  return;
}


// ===== 008cd900  facebook::react::DCDVideoRendererProps::DCDVideoRendererProps =====

void __thiscall
facebook::react::DCDVideoRendererProps::DCDVideoRendererProps
          (DCDVideoRendererProps *this,PropsParserContext *param_1,DCDVideoRendererProps *param_2,
          RawProps *param_3)

{
  (*(code *)PTR_DCDVideoRendererProps_0099fde8)();
  return;
}


// ===== 008cd910  facebook::react::DCDVisualEffectViewProps::DCDVisualEffectViewProps =====

void __thiscall
facebook::react::DCDVisualEffectViewProps::DCDVisualEffectViewProps
          (DCDVisualEffectViewProps *this,PropsParserContext *param_1,
          DCDVisualEffectViewProps *param_2,RawProps *param_3)

{
  (*(code *)PTR_DCDVisualEffectViewProps_0099fdf0)();
  return;
}


// ===== 008cd920  facebook::react::DCDZoomLayoutAndroidProps::DCDZoomLayoutAndroidProps =====

void __thiscall
facebook::react::DCDZoomLayoutAndroidProps::DCDZoomLayoutAndroidProps
          (DCDZoomLayoutAndroidProps *this,PropsParserContext *param_1,
          DCDZoomLayoutAndroidProps *param_2,RawProps *param_3)

{
  (*(code *)PTR_DCDZoomLayoutAndroidProps_0099fdf8)();
  return;
}


// ===== 008cd930  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::__init_copy_ctor_external =====

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
__init_copy_ctor_external
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          char *param_1,ulong param_2)

{
  (*(code *)PTR___init_copy_ctor_external_0099fe00)();
  return;
}


// ===== 008cd940  <EXTERNAL>::facebook::react::EventEmitter::dispatchEvent =====

void facebook::react::EventEmitter::dispatchEvent(void)

{
  (*(code *)PTR_dispatchEvent_0099fe08)();
  return;
}


// ===== 008cd950  <EXTERNAL>::folly::dynamic::dynamic =====

void __thiscall folly::dynamic::dynamic(dynamic *this,dynamic *param_1)

{
  (*(code *)PTR_dynamic_0099fe10)();
  return;
}


// ===== 008cd960  <EXTERNAL>::facebook::jsi::facebook::jsi::valueFromDynamic =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall facebook::jsi::facebook::jsi::valueFromDynamic(void)

{
  (*(code *)PTR_valueFromDynamic_0099fe18)();
  return;
}


// ===== 008cd970  facebook::react::DCDAutoModerationSystemMessageViewProps::DCDAutoModerationSystemMessageViewProps =====

void __thiscall
facebook::react::DCDAutoModerationSystemMessageViewProps::DCDAutoModerationSystemMessageViewProps
          (DCDAutoModerationSystemMessageViewProps *this,PropsParserContext *param_1,
          DCDAutoModerationSystemMessageViewProps *param_2,RawProps *param_3)

{
  (*(code *)PTR_DCDAutoModerationSystemMessageViewProps_0099fe20)();
  return;
}


// ===== 008cd980  facebook::react::DCDMessageViewProps::DCDMessageViewProps =====

void __thiscall
facebook::react::DCDMessageViewProps::DCDMessageViewProps
          (DCDMessageViewProps *this,PropsParserContext *param_1,DCDMessageViewProps *param_2,
          RawProps *param_3)

{
  (*(code *)PTR_DCDMessageViewProps_0099fe28)();
  return;
}


// ===== 008cd990  facebook::react::DCDSystemMessageViewProps::DCDSystemMessageViewProps =====

void __thiscall
facebook::react::DCDSystemMessageViewProps::DCDSystemMessageViewProps
          (DCDSystemMessageViewProps *this,PropsParserContext *param_1,
          DCDSystemMessageViewProps *param_2,RawProps *param_3)

{
  (*(code *)PTR_DCDSystemMessageViewProps_0099fe30)();
  return;
}


// ===== 008cd9a0  facebook::jni::JObject::getClass =====

void facebook::jni::JObject::getClass(void)

{
  (*(code *)PTR_getClass_0099fe38)();
  return;
}


// ===== 008cd9b0  facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

void __thiscall
facebook::jni::base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator>::
~base_owned_ref(base_owned_ref<facebook::jni::JClass,facebook::jni::LocalReferenceAllocator> *this)

{
  (*(code *)PTR__base_owned_ref_0099fe40)();
  return;
}


// ===== 008cd9c0  facebook::jni::base_owned_ref<facebook::jni::JString,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

void __thiscall
facebook::jni::base_owned_ref<facebook::jni::JString,facebook::jni::LocalReferenceAllocator>::
~base_owned_ref(base_owned_ref<facebook::jni::JString,facebook::jni::LocalReferenceAllocator> *this)

{
  (*(code *)PTR__base_owned_ref_0099fe48)();
  return;
}


// ===== 008cd9d0  _JNIEnv::CallIntMethod =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall _JNIEnv::CallIntMethod(void)

{
  (*(code *)PTR_CallIntMethod_0099fe50)();
  return;
}


// ===== 008cd9e0  <EXTERNAL>::facebook::react::HostPlatformViewProps::HostPlatformViewProps =====

void __thiscall
facebook::react::HostPlatformViewProps::HostPlatformViewProps
          (HostPlatformViewProps *this,PropsParserContext *param_1,HostPlatformViewProps *param_2,
          RawProps *param_3,function *param_4)

{
  (*(code *)PTR_HostPlatformViewProps_0099fe58)();
  return;
}


// ===== 008cd9f0  <EXTERNAL>::facebook::react::HostPlatformViewProps::getDiffProps =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::HostPlatformViewProps::getDiffProps(Props *param_1)

{
  (*(code *)PTR_getDiffProps_0099fe60)();
  return;
}


// ===== 008cda00  <EXTERNAL>::folly::dynamic::operator[] =====

void folly::dynamic::operator[](void)

{
  (*(code *)PTR_operator___0099fe68)();
  return;
}


// ===== 008cda10  <EXTERNAL>::folly::dynamic::operator= =====

void __thiscall folly::dynamic::operator=(dynamic *this,dynamic *param_1)

{
  (*(code *)PTR_operator__0099fe70)();
  return;
}


// ===== 008cda20  <EXTERNAL>::abort =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void abort(void)

{
  (*(code *)PTR_abort_0099fe78)();
  return;
}


// ===== 008cda30  <EXTERNAL>::folly::dynamic::operator= =====

void __thiscall folly::dynamic::operator=(dynamic *this,dynamic *param_1)

{
  (*(code *)PTR_operator__0099fe80)();
  return;
}


// ===== 008cda40  <EXTERNAL>::facebook::react::RawProps::at =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::RawProps::at(char *param_1,char *param_2,char *param_3)

{
  (*(code *)PTR_at_0099fe88)();
  return;
}


// ===== 008cda50  <EXTERNAL>::google::LogMessage::LogMessage =====

void __thiscall
google::LogMessage::LogMessage(LogMessage *this,char *param_1,int param_2,int param_3)

{
  (*(code *)PTR_LogMessage_0099fe90)(this,param_1,param_2,param_3);
  return;
}


// ===== 008cda60  <EXTERNAL>::google::LogMessage::google::LogMessage::stream =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall google::LogMessage::google::LogMessage::stream(void)

{
  (*(code *)PTR_stream_0099fe98)();
  return;
}


// ===== 008cda70  <EXTERNAL>::facebook::react::RawPropsKey::operator.cast.to.basic_string =====

void __thiscall facebook::react::RawPropsKey::operator_cast_to_basic_string(RawPropsKey *this)

{
  (*(code *)PTR_operator_cast_to_basic_string_0099fea0)();
  return;
}


// ===== 008cda80  <EXTERNAL>::google::LogMessage::~LogMessage =====

void __thiscall google::LogMessage::~LogMessage(LogMessage *this)

{
  (*(code *)PTR__LogMessage_0099fea8)();
  return;
}


// ===== 008cda90  <EXTERNAL>::__cxa_end_catch =====

void __cxa_end_catch(void)

{
  (*(code *)PTR___cxa_end_catch_0099feb0)();
  return;
}


// ===== 008cdaa0  <EXTERNAL>::facebook::jsi::Value::asString =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::Value::asString(IRuntime *param_1)

{
  (*(code *)PTR_asString_0099feb8)();
  return;
}


// ===== 008cdab0  <EXTERNAL>::std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::sentry =====

void __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::sentry
          (sentry *this,basic_ostream *param_1)

{
  (*(code *)PTR_sentry_0099fec0)();
  return;
}


// ===== 008cdac0  <EXTERNAL>::std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::~sentry =====

void __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::sentry::~sentry(sentry *this)

{
  (*(code *)PTR__sentry_0099fec8)();
  return;
}


// ===== 008cdad0  <EXTERNAL>::std::__ndk1::ios_base::__set_badbit_and_consider_rethrow =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::ios_base::__set_badbit_and_consider_rethrow(void)

{
  (*(code *)PTR___set_badbit_and_consider_rethrow_0099fed0)();
  return;
}


// ===== 008cdae0  <EXTERNAL>::std::__ndk1::ios_base::getloc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::ios_base::getloc(void)

{
  (*(code *)PTR_getloc_0099fed8)();
  return;
}


// ===== 008cdaf0  <EXTERNAL>::std::__ndk1::locale::~locale =====

void __thiscall std::__ndk1::locale::~locale(locale *this)

{
  (*(code *)PTR__locale_0099fee0)();
  return;
}


// ===== 008cdb00  <EXTERNAL>::std::__ndk1::locale::use_facet =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::locale::use_facet(id *param_1)

{
  (*(code *)PTR_use_facet_0099fee8)();
  return;
}


// ===== 008cdb10  <EXTERNAL>::std::__ndk1::ios_base::clear =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::ios_base::clear(uint param_1)

{
  (*(code *)PTR_clear_0099fef0)(param_1);
  return;
}


// ===== 008cdb20  <EXTERNAL>::facebook::jsi::Value::asBool =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::Value::asBool(void)

{
  (*(code *)PTR_asBool_0099fef8)();
  return;
}


// ===== 008cdb30  <EXTERNAL>::facebook::react::facebook::react::getDefaultColorSpace =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall facebook::react::facebook::react::getDefaultColorSpace(void)

{
  (*(code *)PTR_getDefaultColorSpace_0099ff00)();
  return;
}


// ===== 008cdb40  <EXTERNAL>::facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::enableNativeCSSParsing =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
enableNativeCSSParsing(void)

{
  (*(code *)PTR_enableNativeCSSParsing_0099ff08)();
  return;
}


// ===== 008cdb50  <EXTERNAL>::facebook::react::facebook::react::colorFromComponents =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall facebook::react::facebook::react::colorFromComponents(void)

{
  (*(code *)PTR_colorFromComponents_0099ff10)();
  return;
}


// ===== 008cdb60  <EXTERNAL>::remainderf =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float remainderf(float __x,float __y)

{
  float fVar1;
  
  fVar1 = (float)(*(code *)PTR_remainderf_0099ff18)();
  return fVar1;
}


// ===== 008cdb70  <EXTERNAL>::nextafter =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double nextafter(double __x,double __y)

{
  double dVar1;
  
  dVar1 = (double)(*(code *)PTR_nextafter_0099ff20)();
  return dVar1;
}


// ===== 008cdb80  <EXTERNAL>::std::range_error::~range_error =====

void __thiscall std::range_error::~range_error(range_error *this)

{
  (*(code *)PTR__range_error_0099ff28)();
  return;
}


// ===== 008cdb90  <EXTERNAL>::folly::folly::makeConversionError =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall folly::folly::makeConversionError(void)

{
  (*(code *)PTR_makeConversionError_0099ff30)();
  return;
}


// ===== 008cdba0  <EXTERNAL>::std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::reserve =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
     reserve(ulong param_1)

{
  (*(code *)PTR_reserve_0099ff38)();
  return;
}


// ===== 008cdbb0  <EXTERNAL>::std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
     append(char *param_1,ulong param_2)

{
  (*(code *)PTR_append_0099ff40)();
  return;
}


// ===== 008cdbc0  <EXTERNAL>::double_conversion::DoubleToStringConverter::ToShortestIeeeNumber =====

void double_conversion::DoubleToStringConverter::ToShortestIeeeNumber(void)

{
  (*(code *)PTR_ToShortestIeeeNumber_0099ff48)();
  return;
}


// ===== 008cdbd0  <EXTERNAL>::folly::detail::str_to_integral<long> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void folly::detail::str_to_integral<long>(Range *param_1)

{
  (*(code *)PTR_str_to_integral<long>_0099ff50)();
  return;
}


// ===== 008cdbe0  <EXTERNAL>::facebook::jsi::Value::asNumber =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::jsi::Value::asNumber(void)

{
  (*(code *)PTR_asNumber_0099ff58)();
  return;
}


// ===== 008cdbf0  <EXTERNAL>::folly::dynamic::size =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void folly::dynamic::size(void)

{
  (*(code *)PTR_size_0099ff60)();
  return;
}


// ===== 008cdc00  <EXTERNAL>::std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::push_back =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
     push_back(char param_1)

{
  (*(code *)PTR_push_back_0099ff68)(param_1);
  return;
}


// ===== 008cdc10  <EXTERNAL>::folly::detail::str_to_floating<double> =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void folly::detail::str_to_floating<double>(Range *param_1)

{
  (*(code *)PTR_str_to_floating<double>_0099ff70)();
  return;
}


// ===== 008cdc20  <EXTERNAL>::std::__ndk1::__call_once =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__call_once(ulong *param_1,void *param_2,_func_void_void_ptr *param_3)

{
  (*(code *)PTR___call_once_0099ff78)();
  return;
}


// ===== 008cdc30  <EXTERNAL>::std::__ndk1::__shared_mutex_base::lock_shared =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__shared_mutex_base::lock_shared(void)

{
  (*(code *)PTR_lock_shared_0099ff80)();
  return;
}


// ===== 008cdc40  <EXTERNAL>::facebook::jni::Environment::facebook::jni::Environment::current =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall facebook::jni::Environment::facebook::jni::Environment::current(void)

{
  (*(code *)PTR_current_0099ff88)();
  return;
}


// ===== 008cdc50  <EXTERNAL>::facebook::jni::facebook::jni::throwPendingJniExceptionAsCppException =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall facebook::jni::facebook::jni::throwPendingJniExceptionAsCppException(void)

{
  (*(code *)PTR_throwPendingJniExceptionAsCppException_0099ff90)();
  return;
}


// ===== 008cdc60  <EXTERNAL>::std::__ndk1::__shared_mutex_base::unlock_shared =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__ndk1::__shared_mutex_base::unlock_shared(void)

{
  (*(code *)PTR_unlock_shared_0099ff98)();
  return;
}


// ===== 008cdc70  <EXTERNAL>::facebook::jni::facebook::jni::throwCppExceptionIf =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall facebook::jni::facebook::jni::throwCppExceptionIf(void)

{
  (*(code *)PTR_throwCppExceptionIf_0099ffa0)();
  return;
}


// ===== 008cdc80  <EXTERNAL>::facebook::jni::facebook::jni::findClassStatic =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall facebook::jni::facebook::jni::findClassStatic(void)

{
  (*(code *)PTR_findClassStatic_0099ffa8)();
  return;
}


// ===== 008cdc90  <EXTERNAL>::facebook::jni::facebook::jni::make_jstring =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall facebook::jni::facebook::jni::make_jstring(void)

{
  (*(code *)PTR_make_jstring_0099ffb0)();
  return;
}


// ===== 008cdca0  facebook::react::rnclipboard_ModuleProvider =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall facebook::react::rnclipboard_ModuleProvider(void)

{
  (*(code *)PTR_rnclipboard_ModuleProvider_0099ffb8)();
  return;
}


// ===== 008cdcb0  facebook::react::NativeClipboardModuleSpecJSI::NativeClipboardModuleSpecJSI =====

void __thiscall
facebook::react::NativeClipboardModuleSpecJSI::NativeClipboardModuleSpecJSI
          (NativeClipboardModuleSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeClipboardModuleSpecJSI_0099ffc0)();
  return;
}


// ===== 008cdcc0  facebook::react::rndocumentpickerCGen_ModuleProvider =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall facebook::react::rndocumentpickerCGen_ModuleProvider(void)

{
  (*(code *)PTR_rndocumentpickerCGen_ModuleProvider_0099ffc8)();
  return;
}


// ===== 008cdcd0  facebook::react::NativeDocumentPickerSpecJSI::NativeDocumentPickerSpecJSI =====

void __thiscall
facebook::react::NativeDocumentPickerSpecJSI::NativeDocumentPickerSpecJSI
          (NativeDocumentPickerSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeDocumentPickerSpecJSI_0099ffd0)();
  return;
}


// ===== 008cdce0  facebook::react::RNSentrySpec_ModuleProvider =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall facebook::react::RNSentrySpec_ModuleProvider(void)

{
  (*(code *)PTR_RNSentrySpec_ModuleProvider_0099ffd8)();
  return;
}


// ===== 008cdcf0  facebook::react::NativeRNSentrySpecJSI::NativeRNSentrySpecJSI =====

void __thiscall
facebook::react::NativeRNSentrySpecJSI::NativeRNSentrySpecJSI
          (NativeRNSentrySpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeRNSentrySpecJSI_0099ffe0)();
  return;
}


// ===== 008cdd00  facebook::react::LottieAnimationViewProps::LottieAnimationViewProps =====

void __thiscall
facebook::react::LottieAnimationViewProps::LottieAnimationViewProps
          (LottieAnimationViewProps *this,PropsParserContext *param_1,
          LottieAnimationViewProps *param_2,RawProps *param_3)

{
  (*(code *)PTR_LottieAnimationViewProps_0099ffe8)();
  return;
}


// ===== 008cdd10  facebook::react::RNDatePickerSpecs_ModuleProvider =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall facebook::react::RNDatePickerSpecs_ModuleProvider(void)

{
  (*(code *)PTR_RNDatePickerSpecs_ModuleProvider_0099fff0)();
  return;
}


// ===== 008cdd20  facebook::react::NativeRNDatePickerSpecJSI::NativeRNDatePickerSpecJSI =====

void __thiscall
facebook::react::NativeRNDatePickerSpecJSI::NativeRNDatePickerSpecJSI
          (NativeRNDatePickerSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeRNDatePickerSpecJSI_0099fff8)();
  return;
}


// ===== 008cdd30  facebook::react::RNDatePickerProps::RNDatePickerProps =====

void __thiscall
facebook::react::RNDatePickerProps::RNDatePickerProps
          (RNDatePickerProps *this,PropsParserContext *param_1,RNDatePickerProps *param_2,
          RawProps *param_3)

{
  (*(code *)PTR_RNDatePickerProps_009a0000)();
  return;
}


// ===== 008cdd40  facebook::react::RNHapticFeedbackSpec_ModuleProvider =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall facebook::react::RNHapticFeedbackSpec_ModuleProvider(void)

{
  (*(code *)PTR_RNHapticFeedbackSpec_ModuleProvider_009a0008)();
  return;
}


// ===== 008cdd50  facebook::react::NativeHapticFeedbackSpecJSI::NativeHapticFeedbackSpecJSI =====

void __thiscall
facebook::react::NativeHapticFeedbackSpecJSI::NativeHapticFeedbackSpecJSI
          (NativeHapticFeedbackSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeHapticFeedbackSpecJSI_009a0010)();
  return;
}


// ===== 008cdd60  facebook::react::RNCImageCropPickerSpec_ModuleProvider =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall facebook::react::RNCImageCropPickerSpec_ModuleProvider(void)

{
  (*(code *)PTR_RNCImageCropPickerSpec_ModuleProvider_009a0018)();
  return;
}


// ===== 008cdd70  facebook::react::NativeImageCropPickerSpecJSI::NativeImageCropPickerSpecJSI =====

void __thiscall
facebook::react::NativeImageCropPickerSpecJSI::NativeImageCropPickerSpecJSI
          (NativeImageCropPickerSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeImageCropPickerSpecJSI_009a0020)();
  return;
}


// ===== 008cdd80  facebook::react::RNLinearGradientProps::RNLinearGradientProps =====

void __thiscall
facebook::react::RNLinearGradientProps::RNLinearGradientProps
          (RNLinearGradientProps *this,PropsParserContext *param_1,RNLinearGradientProps *param_2,
          RawProps *param_3)

{
  (*(code *)PTR_RNLinearGradientProps_009a0028)();
  return;
}


// ===== 008cdd90  <EXTERNAL>::std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<< =====

void __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
          (basic_ostream<char,std::__ndk1::char_traits<char>> *this,ulong param_1)

{
  (*(code *)PTR_operator<<_009a0030)();
  return;
}


// ===== 008cdda0  facebook::react::NitroModulesSpec_ModuleProvider =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall facebook::react::NitroModulesSpec_ModuleProvider(void)

{
  (*(code *)PTR_NitroModulesSpec_ModuleProvider_009a0038)();
  return;
}


// ===== 008cddb0  facebook::react::NativeNitroModulesSpecJSI::NativeNitroModulesSpecJSI =====

void __thiscall
facebook::react::NativeNitroModulesSpecJSI::NativeNitroModulesSpecJSI
          (NativeNitroModulesSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeNitroModulesSpecJSI_009a0040)();
  return;
}


// ===== 008cddc0  facebook::react::RNPlainTextProps::RNPlainTextProps =====

void __thiscall
facebook::react::RNPlainTextProps::RNPlainTextProps
          (RNPlainTextProps *this,PropsParserContext *param_1,RNPlainTextProps *param_2,
          RawProps *param_3)

{
  (*(code *)PTR_RNPlainTextProps_009a0048)();
  return;
}


// ===== 008cddd0  facebook::react::PlainTextMeasurementsManager::measure =====

void __thiscall facebook::react::PlainTextMeasurementsManager::measure(void)

{
  (*(code *)PTR_measure_009a0050)();
  return;
}


// ===== 008cdde0  facebook::react::PlainTextMeasurementsManager::baseline =====

void facebook::react::PlainTextMeasurementsManager::baseline(void)

{
  (*(code *)PTR_baseline_009a0058)();
  return;
}


// ===== 008cddf0  facebook::jni::detail::HybridClassBase::isHybridClassBase =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall facebook::jni::detail::HybridClassBase::isHybridClassBase(void)

{
  (*(code *)PTR_isHybridClassBase_009a0060)();
  return;
}


// ===== 008cde00  _JNIEnv::NewObject =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall _JNIEnv::NewObject(void)

{
  (*(code *)PTR_NewObject_009a0068)();
  return;
}


// ===== 008cde10  facebook::jni::base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridDestructor,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

void __thiscall
facebook::jni::
base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridDestructor,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>
::~base_owned_ref(base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridDestructor,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>
                  *this)

{
  (*(code *)PTR__base_owned_ref_009a0070)();
  return;
}


// ===== 008cde20  facebook::jni::detail::getDestructorField =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall facebook::jni::detail::getDestructorField(void)

{
  (*(code *)PTR_getDestructorField_009a0078)();
  return;
}


// ===== 008cde30  facebook::jni::detail::getHolder<facebook::jni::detail::HybridData> =====

void __thiscall
facebook::jni::detail::getHolder<facebook::jni::detail::HybridData>
          (detail *this,HybridData *param_1)

{
  (*(code *)PTR_getHolder<facebook_jni_detail_HybridData>_009a0080)();
  return;
}


// ===== 008cde40  facebook::jni::base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>::~base_owned_ref =====

void __thiscall
facebook::jni::
base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>
::~base_owned_ref(base_owned_ref<facebook::jni::detail::JTypeFor<facebook::jni::detail::HybridData,facebook::jni::JObject,void>::_javaobject*,facebook::jni::LocalReferenceAllocator>
                  *this)

{
  (*(code *)PTR__base_owned_ref_009a0088)();
  return;
}


// ===== 008cde50  <EXTERNAL>::facebook::jni::detail::HybridDestructor::facebook::jni::detail::HybridDestructor::setNativePointer =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
facebook::jni::detail::HybridDestructor::facebook::jni::detail::HybridDestructor::setNativePointer
          (void)

{
  (*(code *)PTR_setNativePointer_009a0090)();
  return;
}


// ===== 008cde60  <EXTERNAL>::facebook::jni::detail::HybridData::facebook::jni::detail::HybridData::create =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall facebook::jni::detail::HybridData::facebook::jni::detail::HybridData::create(void)

{
  (*(code *)PTR_create_009a0098)();
  return;
}


// ===== 008cde70  <EXTERNAL>::std::bad_alloc::bad_alloc =====

void __thiscall std::bad_alloc::bad_alloc(bad_alloc *this)

{
  (*(code *)PTR_bad_alloc_009a00a0)();
  return;
}


// ===== 008cde80  <EXTERNAL>::facebook::react::ShadowNode::getSurfaceId =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ShadowNode::getSurfaceId(void)

{
  (*(code *)PTR_getSurfaceId_009a00a8)();
  return;
}


// ===== 008cde90  facebook::react::measurementInputsEqual =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall facebook::react::measurementInputsEqual(void)

{
  (*(code *)PTR_measurementInputsEqual_009a00b0)();
  return;
}


// ===== 008cdea0  <EXTERNAL>::facebook::react::ShadowNode::getProps =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ShadowNode::getProps(void)

{
  (*(code *)PTR_getProps_009a00b8)();
  return;
}


// ===== 008cdeb0  facebook::react::rnreanimated_ModuleProvider =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall facebook::react::rnreanimated_ModuleProvider(void)

{
  (*(code *)PTR_rnreanimated_ModuleProvider_009a00c0)();
  return;
}


// ===== 008cdec0  facebook::react::NativeReanimatedModuleSpecJSI::NativeReanimatedModuleSpecJSI =====

void __thiscall
facebook::react::NativeReanimatedModuleSpecJSI::NativeReanimatedModuleSpecJSI
          (NativeReanimatedModuleSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeReanimatedModuleSpecJSI_009a00c8)();
  return;
}


// ===== 008cded0  facebook::react::NativeWorkletsModuleSpecJSI::NativeWorkletsModuleSpecJSI =====

void __thiscall
facebook::react::NativeWorkletsModuleSpecJSI::NativeWorkletsModuleSpecJSI
          (NativeWorkletsModuleSpecJSI *this,InitParams *param_1)

{
  (*(code *)PTR_NativeWorkletsModuleSpecJSI_009a00d0)();
  return;
}


// ===== 008cdee0  facebook::react::autolinking_ModuleProvider =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall facebook::react::autolinking_ModuleProvider(void)

{
  (*(code *)PTR_autolinking_ModuleProvider_009a00d8)();
  return;
}


// ===== 008cdef0  facebook::react::autolinking_registerProviders =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall facebook::react::autolinking_registerProviders(void)

{
  (*(code *)PTR_autolinking_registerProviders_009a00e0)();
  return;
}


// ===== 008cdf00  <EXTERNAL>::facebook::react::facebook::react::ReanimatedView_ModuleProvider =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall facebook::react::facebook::react::ReanimatedView_ModuleProvider(void)

{
  (*(code *)PTR_ReanimatedView_ModuleProvider_009a00e8)();
  return;
}


// ===== 008cdf10  <EXTERNAL>::facebook::react::facebook::react::RNCSlider_ModuleProvider =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall facebook::react::facebook::react::RNCSlider_ModuleProvider(void)

{
  (*(code *)PTR_RNCSlider_ModuleProvider_009a00f0)();
  return;
}


// ===== 008cdf20  <EXTERNAL>::facebook::react::facebook::react::rngesturehandler_codegen_ModuleProvider =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall facebook::react::facebook::react::rngesturehandler_codegen_ModuleProvider(void)

{
  (*(code *)PTR_rngesturehandler_codegen_ModuleProvider_009a00f8)();
  return;
}


// ===== 008cdf30  <EXTERNAL>::facebook::react::facebook::react::RNKC_ModuleProvider =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall facebook::react::facebook::react::RNKC_ModuleProvider(void)

{
  (*(code *)PTR_RNKC_ModuleProvider_009a0100)();
  return;
}


// ===== 008cdf40  <EXTERNAL>::facebook::react::facebook::react::safeareacontext_ModuleProvider =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall facebook::react::facebook::react::safeareacontext_ModuleProvider(void)

{
  (*(code *)PTR_safeareacontext_ModuleProvider_009a0108)();
  return;
}


// ===== 008cdf50  <EXTERNAL>::facebook::react::facebook::react::rnscreens_ModuleProvider =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall facebook::react::facebook::react::rnscreens_ModuleProvider(void)

{
  (*(code *)PTR_rnscreens_ModuleProvider_009a0110)();
  return;
}


// ===== 008cdf60  <EXTERNAL>::facebook::react::facebook::react::rnsvg_ModuleProvider =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall facebook::react::facebook::react::rnsvg_ModuleProvider(void)

{
  (*(code *)PTR_rnsvg_ModuleProvider_009a0118)();
  return;
}


// ===== 008cdf70  <EXTERNAL>::facebook::react::ReanimatedViewCustomProps::ReanimatedViewCustomProps =====

void __thiscall
facebook::react::ReanimatedViewCustomProps::ReanimatedViewCustomProps
          (ReanimatedViewCustomProps *this,PropsParserContext *param_1,
          ReanimatedViewCustomProps *param_2,RawProps *param_3)

{
  (*(code *)PTR_ReanimatedViewCustomProps_009a0120)();
  return;
}


// ===== 008cdf80  <EXTERNAL>::facebook::react::RNCSliderProps::RNCSliderProps =====

void __thiscall
facebook::react::RNCSliderProps::RNCSliderProps
          (RNCSliderProps *this,PropsParserContext *param_1,RNCSliderProps *param_2,
          RawProps *param_3)

{
  (*(code *)PTR_RNCSliderProps_009a0128)();
  return;
}


// ===== 008cdf90  <EXTERNAL>::facebook::react::State::State =====

void __thiscall facebook::react::State::State(void)

{
  (*(code *)PTR_State_009a0130)();
  return;
}


// ===== 008cdfa0  <EXTERNAL>::facebook::react::MapBufferBuilder::facebook::react::MapBufferBuilder::EMPTY =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall facebook::react::MapBufferBuilder::facebook::react::MapBufferBuilder::EMPTY(void)

{
  (*(code *)PTR_EMPTY_009a0138)();
  return;
}


// ===== 008cdfb0  <EXTERNAL>::facebook::react::ShadowNodeFamily::facebook::react::ShadowNodeFamily::dispatchRawState =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
facebook::react::ShadowNodeFamily::facebook::react::ShadowNodeFamily::dispatchRawState(void)

{
  (*(code *)PTR_dispatchRawState_009a0140)();
  return;
}


// ===== 008cdfc0  <EXTERNAL>::facebook::react::ShadowNodeFamily::getMostRecentState =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ShadowNodeFamily::getMostRecentState(void)

{
  (*(code *)PTR_getMostRecentState_009a0148)();
  return;
}


// ===== 008cdfd0  <EXTERNAL>::facebook::react::State::State =====

void __thiscall facebook::react::State::State(void)

{
  (*(code *)PTR_State_009a0150)();
  return;
}


// ===== 008cdfe0  <EXTERNAL>::facebook::react::RNCSliderShadowNode::facebook::react::RNCSliderShadowNode::setSliderMeasurementsManager =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
facebook::react::RNCSliderShadowNode::facebook::react::RNCSliderShadowNode::
setSliderMeasurementsManager(void)

{
  (*(code *)PTR_setSliderMeasurementsManager_009a0158)();
  return;
}


// ===== 008cdff0  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::enableMeasurement =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::
enableMeasurement(void)

{
  (*(code *)PTR_enableMeasurement_009a0160)();
  return;
}


// ===== 008ce000  <EXTERNAL>::facebook::react::RNGestureHandlerDetectorProps::RNGestureHandlerDetectorProps =====

void __thiscall
facebook::react::RNGestureHandlerDetectorProps::RNGestureHandlerDetectorProps
          (RNGestureHandlerDetectorProps *this,PropsParserContext *param_1,
          RNGestureHandlerDetectorProps *param_2,RawProps *param_3)

{
  (*(code *)PTR_RNGestureHandlerDetectorProps_009a0168)();
  return;
}


// ===== 008ce010  <EXTERNAL>::facebook::react::RNGestureHandlerDetectorShadowNode::facebook::react::RNGestureHandlerDetectorShadowNode::initialize =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
facebook::react::RNGestureHandlerDetectorShadowNode::facebook::react::
RNGestureHandlerDetectorShadowNode::initialize(void)

{
  (*(code *)PTR_initialize_009a0170)();
  return;
}


// ===== 008ce020  <EXTERNAL>::facebook::react::RNGestureHandlerDetectorShadowNode::facebook::react::RNGestureHandlerDetectorShadowNode::appendChild =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
facebook::react::RNGestureHandlerDetectorShadowNode::facebook::react::
RNGestureHandlerDetectorShadowNode::appendChild(void)

{
  (*(code *)PTR_appendChild_009a0178)();
  return;
}


// ===== 008ce030  <EXTERNAL>::facebook::react::KeyboardControllerViewProps::KeyboardControllerViewProps =====

void __thiscall
facebook::react::KeyboardControllerViewProps::KeyboardControllerViewProps
          (KeyboardControllerViewProps *this,PropsParserContext *param_1,
          KeyboardControllerViewProps *param_2,RawProps *param_3)

{
  (*(code *)PTR_KeyboardControllerViewProps_009a0180)();
  return;
}


// ===== 008ce040  <EXTERNAL>::facebook::react::KeyboardGestureAreaProps::KeyboardGestureAreaProps =====

void __thiscall
facebook::react::KeyboardGestureAreaProps::KeyboardGestureAreaProps
          (KeyboardGestureAreaProps *this,PropsParserContext *param_1,
          KeyboardGestureAreaProps *param_2,RawProps *param_3)

{
  (*(code *)PTR_KeyboardGestureAreaProps_009a0188)();
  return;
}


// ===== 008ce050  <EXTERNAL>::facebook::react::OverKeyboardViewProps::OverKeyboardViewProps =====

void __thiscall
facebook::react::OverKeyboardViewProps::OverKeyboardViewProps
          (OverKeyboardViewProps *this,PropsParserContext *param_1,OverKeyboardViewProps *param_2,
          RawProps *param_3)

{
  (*(code *)PTR_OverKeyboardViewProps_009a0190)();
  return;
}


// ===== 008ce060  <EXTERNAL>::facebook::react::OverKeyboardViewState::getDynamic =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::OverKeyboardViewState::getDynamic(void)

{
  (*(code *)PTR_getDynamic_009a0198)();
  return;
}


// ===== 008ce070  <EXTERNAL>::facebook::react::ShadowNode::getState =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::ShadowNode::getState(void)

{
  (*(code *)PTR_getState_009a01a0)();
  return;
}


// ===== 008ce080  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::setSize =====

void facebook::react::YogaLayoutableShadowNode::setSize(void)

{
  (*(code *)PTR_setSize_009a01a8)();
  return;
}


// ===== 008ce090  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::setPositionType =====

void facebook::react::YogaLayoutableShadowNode::setPositionType(void)

{
  (*(code *)PTR_setPositionType_009a01b0)();
  return;
}


// ===== 008ce0a0  <EXTERNAL>::facebook::react::KeyboardBackgroundViewProps::KeyboardBackgroundViewProps =====

void __thiscall
facebook::react::KeyboardBackgroundViewProps::KeyboardBackgroundViewProps
          (KeyboardBackgroundViewProps *this,PropsParserContext *param_1,
          KeyboardBackgroundViewProps *param_2,RawProps *param_3)

{
  (*(code *)PTR_KeyboardBackgroundViewProps_009a01b8)();
  return;
}


// ===== 008ce0b0  <EXTERNAL>::facebook::react::ClippingScrollViewDecoratorViewProps::ClippingScrollViewDecoratorViewProps =====

void __thiscall
facebook::react::ClippingScrollViewDecoratorViewProps::ClippingScrollViewDecoratorViewProps
          (ClippingScrollViewDecoratorViewProps *this,PropsParserContext *param_1,
          ClippingScrollViewDecoratorViewProps *param_2,RawProps *param_3)

{
  (*(code *)PTR_ClippingScrollViewDecoratorViewProps_009a01c0)();
  return;
}


// ===== 008ce0c0  <EXTERNAL>::facebook::react::KeyboardToolbarGroupViewProps::KeyboardToolbarGroupViewProps =====

void __thiscall
facebook::react::KeyboardToolbarGroupViewProps::KeyboardToolbarGroupViewProps
          (KeyboardToolbarGroupViewProps *this,PropsParserContext *param_1,
          KeyboardToolbarGroupViewProps *param_2,RawProps *param_3)

{
  (*(code *)PTR_KeyboardToolbarGroupViewProps_009a01c8)();
  return;
}


// ===== 008ce0d0  <EXTERNAL>::facebook::react::RNCSafeAreaProviderProps::RNCSafeAreaProviderProps =====

void __thiscall
facebook::react::RNCSafeAreaProviderProps::RNCSafeAreaProviderProps
          (RNCSafeAreaProviderProps *this,PropsParserContext *param_1,
          RNCSafeAreaProviderProps *param_2,RawProps *param_3)

{
  (*(code *)PTR_RNCSafeAreaProviderProps_009a01d0)();
  return;
}


// ===== 008ce0e0  <EXTERNAL>::facebook::react::RNCSafeAreaViewProps::RNCSafeAreaViewProps =====

void __thiscall
facebook::react::RNCSafeAreaViewProps::RNCSafeAreaViewProps
          (RNCSafeAreaViewProps *this,PropsParserContext *param_1,RNCSafeAreaViewProps *param_2,
          RawProps *param_3)

{
  (*(code *)PTR_RNCSafeAreaViewProps_009a01d8)();
  return;
}


// ===== 008ce0f0  <EXTERNAL>::facebook::react::RNCSafeAreaViewState::getDynamic =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::RNCSafeAreaViewState::getDynamic(void)

{
  (*(code *)PTR_getDynamic_009a01e0)();
  return;
}


// ===== 008ce100  <EXTERNAL>::folly::dynamic::at =====

void folly::dynamic::at(void)

{
  (*(code *)PTR_at_009a01e8)();
  return;
}


// ===== 008ce110  <EXTERNAL>::facebook::react::RNCSafeAreaViewShadowNode::facebook::react::RNCSafeAreaViewShadowNode::adjustLayoutWithState =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall
facebook::react::RNCSafeAreaViewShadowNode::facebook::react::RNCSafeAreaViewShadowNode::
adjustLayoutWithState(void)

{
  (*(code *)PTR_adjustLayoutWithState_009a01f0)();
  return;
}


// ===== 008ce120  <EXTERNAL>::facebook::react::RNSFullWindowOverlayProps::RNSFullWindowOverlayProps =====

void __thiscall
facebook::react::RNSFullWindowOverlayProps::RNSFullWindowOverlayProps
          (RNSFullWindowOverlayProps *this,PropsParserContext *param_1,
          RNSFullWindowOverlayProps *param_2,RawProps *param_3)

{
  (*(code *)PTR_RNSFullWindowOverlayProps_009a01f8)();
  return;
}


// ===== 008ce130  <EXTERNAL>::facebook::react::RNSScreenContainerProps::RNSScreenContainerProps =====

void __thiscall
facebook::react::RNSScreenContainerProps::RNSScreenContainerProps
          (RNSScreenContainerProps *this,PropsParserContext *param_1,
          RNSScreenContainerProps *param_2,RawProps *param_3)

{
  (*(code *)PTR_RNSScreenContainerProps_009a0200)();
  return;
}


// ===== 008ce140  <EXTERNAL>::facebook::react::RNSScreenNavigationContainerProps::RNSScreenNavigationContainerProps =====

void __thiscall
facebook::react::RNSScreenNavigationContainerProps::RNSScreenNavigationContainerProps
          (RNSScreenNavigationContainerProps *this,PropsParserContext *param_1,
          RNSScreenNavigationContainerProps *param_2,RawProps *param_3)

{
  (*(code *)PTR_RNSScreenNavigationContainerProps_009a0208)();
  return;
}


// ===== 008ce150  <EXTERNAL>::facebook::react::RNSScreenStackHeaderConfigProps::RNSScreenStackHeaderConfigProps =====

void __thiscall
facebook::react::RNSScreenStackHeaderConfigProps::RNSScreenStackHeaderConfigProps
          (RNSScreenStackHeaderConfigProps *this,PropsParserContext *param_1,
          RNSScreenStackHeaderConfigProps *param_2,RawProps *param_3)

{
  (*(code *)PTR_RNSScreenStackHeaderConfigProps_009a0210)();
  return;
}


// ===== 008ce160  <EXTERNAL>::facebook::react::RNSScreenStackHeaderConfigState::getDynamic =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::RNSScreenStackHeaderConfigState::getDynamic(void)

{
  (*(code *)PTR_getDynamic_009a0218)();
  return;
}


// ===== 008ce170  <EXTERNAL>::facebook::react::YogaLayoutableShadowNode::setPadding =====

void facebook::react::YogaLayoutableShadowNode::setPadding(void)

{
  (*(code *)PTR_setPadding_009a0220)();
  return;
}


// ===== 008ce180  <EXTERNAL>::facebook::react::RNSScreenStackHeaderSubviewProps::RNSScreenStackHeaderSubviewProps =====

void __thiscall
facebook::react::RNSScreenStackHeaderSubviewProps::RNSScreenStackHeaderSubviewProps
          (RNSScreenStackHeaderSubviewProps *this,PropsParserContext *param_1,
          RNSScreenStackHeaderSubviewProps *param_2,RawProps *param_3)

{
  (*(code *)PTR_RNSScreenStackHeaderSubviewProps_009a0228)();
  return;
}


// ===== 008ce190  <EXTERNAL>::facebook::react::RNSScreenStackHeaderSubviewState::getDynamic =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void facebook::react::RNSScreenStackHeaderSubviewState::getDynamic(void)

{
  (*(code *)PTR_getDynamic_009a0230)();
  return;
}


// ===== 008ce1a0  <EXTERNAL>::facebook::react::RNSScreenStackProps::RNSScreenStackProps =====

void __thiscall
facebook::react::RNSScreenStackProps::RNSScreenStackProps
          (RNSScreenStackProps *this,PropsParserContext *param_1,RNSScreenStackProps *param_2,
          RawProps *param_3)

{
  (*(code *)PTR_RNSScreenStackProps_009a0238)();
  return;
}


