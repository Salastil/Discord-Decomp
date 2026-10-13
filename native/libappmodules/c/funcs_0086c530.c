// ===== 0086c530  FUN_0086c530 =====

void FUN_0086c530(long param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x10);
  uVar1 = *(undefined1 *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00991fa0;
  *(undefined1 *)(puVar2 + 1) = uVar1;
  return;
}


// ===== 0086c568  FUN_0086c568 =====

void FUN_0086c568(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00991fa0;
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 8);
  return;
}


// ===== 0086c580  FUN_0086c580 =====

void FUN_0086c580(void)

{
  return;
}


// ===== 0086c584  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0086c588  FUN_0086c588 =====

void FUN_0086c588(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_00992020;
  *param_1 = (long)(puVar1 + 3);
  param_1[1] = (long)puVar1;
  return;
}


// ===== 0086c5c4  FUN_0086c5c4 =====

long FUN_0086c5c4(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_0099e8c8) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 0086c5e0  FUN_0086c5e0 =====

undefined * FUN_0086c5e0(void)

{
  return PTR_typeinfo_0099e8d0;
}


// ===== 0086c5ec  FUN_0086c5ec =====

void FUN_0086c5ec(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00992020;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0086c5fc  FUN_0086c5fc =====

void FUN_0086c5fc(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00992020;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0086c62c  FUN_0086c62c =====

void FUN_0086c62c(void)

{
  return;
}


// ===== 0086c630  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0086c634  FUN_0086c634 =====

void FUN_0086c634(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00992080;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0086c644  FUN_0086c644 =====

void FUN_0086c644(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00992080;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0086c674  FUN_0086c674 =====

void FUN_0086c674(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0086c67c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 0086c680  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0086c684  FUN_0086c684 =====

void FUN_0086c684(long param_1)

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


// ===== 0086c6d4  FUN_0086c6d4 =====

void FUN_0086c6d4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009920d0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0086c6e4  FUN_0086c6e4 =====

void FUN_0086c6e4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009920d0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0086c714  FUN_0086c714 =====

void FUN_0086c714(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0086c71c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 0086c720  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0086c724  FUN_0086c724 =====

void FUN_0086c724(long *param_1)

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


// ===== 0086c7dc  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_32RNCSafeAreaProviderComponentNameEEEENS0_24RNCSafeAreaProviderPropsENS0_31RNCSafeAreaProviderEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_32RNCSafeAreaProviderComponentNameEEEENS0_24RNCSafeAreaProviderPropsENS0_31RNCSafeAreaProviderEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE
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
  undefined4 local_fd0 [2];
  undefined8 *local_fc8;
  void *local_fc0;
  void *pvStack_fb8;
  undefined8 local_fb0;
  void *pvStack_fa8;
  void *local_fa0;
  undefined8 uStack_f98;
  void *local_f90;
  void *pvStack_f88;
  undefined8 uStack_f80;
  undefined8 uStack_f78;
  undefined *local_f70;
  undefined8 uStack_f68;
  undefined8 local_f60;
  undefined8 uStack_f58;
  undefined4 local_f50 [2];
  undefined8 local_f48;
  undefined8 uStack_f40;
  undefined8 local_f38;
  undefined8 uStack_f30;
  undefined4 local_f28;
  undefined4 local_f20;
  undefined1 local_f1c;
  undefined8 local_f1b;
  undefined8 local_f13;
  undefined8 uStack_f0b;
  undefined8 local_f03;
  undefined8 uStack_efb;
  undefined8 local_ef3;
  undefined8 uStack_eeb;
  undefined8 local_ee3;
  undefined6 uStack_edb;
  undefined2 uStack_ed5;
  undefined6 uStack_ed3;
  undefined8 uStack_ecd;
  undefined4 local_ec5;
  undefined8 local_ec1;
  undefined1 local_eb9;
  undefined1 uStack_eb8;
  undefined7 uStack_eb7;
  undefined8 uStack_eb0;
  undefined8 uStack_ea8;
  undefined8 uStack_ea0;
  undefined8 local_e98;
  undefined8 uStack_e90;
  undefined8 local_e88;
  undefined8 uStack_e80;
  undefined8 local_e78;
  undefined8 uStack_e70;
  undefined8 local_e68;
  undefined8 uStack_e60;
  undefined8 uStack_e58;
  undefined8 local_e50;
  undefined8 local_e48;
  undefined8 uStack_e40;
  undefined8 local_e38;
  undefined4 uStack_e30;
  undefined4 uStack_e2c;
  undefined4 uStack_e28;
  undefined4 uStack_e24;
  undefined4 uStack_e20;
  undefined4 uStack_e1c;
  undefined8 local_e18;
  undefined8 uStack_e10;
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
  undefined4 local_db8;
  undefined1 local_db4;
  undefined4 local_db0;
  undefined1 local_dac;
  undefined4 local_da8;
  undefined1 local_da4;
  undefined4 local_da0;
  undefined1 local_d9c;
  undefined4 local_d98;
  undefined1 local_d94;
  undefined4 local_d90;
  undefined1 local_d8c;
  undefined1 local_d88;
  undefined1 local_d84;
  undefined1 local_d78;
  undefined8 local_d70;
  undefined8 uStack_d68;
  undefined8 uStack_d60;
  undefined8 uStack_d58;
  undefined8 local_d50;
  undefined8 uStack_d48;
  undefined8 uStack_d40;
  undefined1 uStack_d38;
  undefined7 local_d37;
  undefined1 uStack_d30;
  undefined8 uStack_d2f;
  undefined8 local_d24;
  undefined8 uStack_d1c;
  undefined8 uStack_d14;
  undefined8 uStack_d0c;
  undefined8 local_d04;
  undefined8 uStack_cfc;
  undefined8 uStack_cf4;
  undefined8 uStack_cec;
  undefined8 local_ce4;
  undefined8 uStack_cdc;
  undefined8 uStack_cd4;
  undefined5 uStack_ccc;
  undefined3 local_cc7;
  undefined5 uStack_cc4;
  undefined1 local_cbc;
  undefined1 local_cb8;
  undefined1 local_cb4;
  undefined1 local_cb0;
  undefined1 local_cac;
  undefined1 local_ca8;
  undefined1 local_c90;
  undefined8 local_c88;
  undefined8 uStack_c80;
  undefined8 local_c78;
  undefined4 local_c70;
  undefined1 local_c6c;
  undefined4 local_c6b;
  undefined1 local_c67;
  undefined1 local_c66;
  undefined8 local_c60;
  undefined8 uStack_c58;
  undefined8 uStack_c50;
  undefined8 uStack_c48;
  undefined8 local_c40;
  undefined7 uStack_c38;
  undefined4 uStack_c31;
  undefined8 local_c2c;
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
  undefined1 local_bb0;
  undefined1 local_bac;
  undefined1 local_ba4;
  undefined1 local_ba0;
  undefined1 local_b98;
  undefined1 local_b94;
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
  undefined1 local_b58;
  undefined1 local_b54;
  undefined1 local_b50;
  undefined1 local_b4c;
  undefined1 local_b48;
  undefined1 local_b44;
  undefined1 local_b40;
  undefined1 local_b3c;
  undefined1 local_b38;
  undefined1 local_b34;
  undefined1 local_b30;
  undefined1 local_b2c;
  undefined8 local_b28;
  undefined8 uStack_b20;
  undefined8 local_b18;
  undefined8 uStack_b10;
  undefined8 uStack_b08;
  undefined8 uStack_b00;
  undefined2 local_af8;
  undefined8 local_af4;
  undefined1 local_aec;
  undefined8 local_ae8;
  undefined8 local_ae0;
  undefined8 uStack_ad8;
  undefined1 local_ad0;
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
  undefined8 uStack_a78;
  undefined8 uStack_a70;
  undefined8 local_a68;
  undefined8 uStack_a60;
  undefined8 uStack_a58;
  undefined8 uStack_a50;
  undefined8 local_a48;
  undefined8 uStack_a40;
  undefined8 uStack_a38;
  undefined8 uStack_a30;
  undefined8 local_a28;
  undefined8 uStack_a20;
  undefined8 local_a18;
  undefined8 uStack_a10;
  undefined8 local_a08;
  undefined8 uStack_a00;
  undefined8 local_9f8;
  undefined8 uStack_9f0;
  undefined8 local_9e8;
  undefined8 uStack_9e0;
  undefined8 local_9d8;
  undefined6 uStack_9d0;
  undefined2 uStack_9ca;
  undefined6 uStack_9c8;
  undefined1 local_9c0;
  undefined1 local_9bc;
  undefined1 local_9b8;
  undefined8 local_9b4;
  undefined8 uStack_9ac;
  undefined1 local_9a4;
  undefined8 local_9a0;
  undefined2 local_998;
  undefined1 local_996;
  undefined4 local_994;
  undefined1 local_990;
  undefined1 local_930;
  undefined1 local_928;
  undefined1 local_8c8;
  undefined4 local_8c0;
  undefined2 local_8bc;
  undefined1 local_8b8;
  undefined1 local_8b4;
  undefined1 local_8b0;
  undefined1 local_8ac;
  undefined1 local_8a8;
  undefined1 local_8a4;
  undefined1 local_8a0;
  undefined1 local_89c;
  undefined1 local_898;
  undefined1 local_894;
  undefined4 local_890 [2];
  undefined8 local_888;
  undefined8 uStack_880;
  undefined8 local_878;
  undefined8 local_870;
  undefined8 uStack_868;
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
  undefined8 uStack_88;
  void *local_80;
  void *local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  this = (ComponentDescriptor *)operator_new(0x88);
  pvStack_fa8 = (void *)0x0;
  local_fb0 = 0;
  uStack_f98 = 0;
  local_fa0 = (void *)0x0;
  pvStack_f88 = (void *)0x0;
  local_f90 = (void *)0x0;
  uStack_f78 = 0;
  uStack_f80 = 0;
  pvStack_fb8 = (void *)0x0;
  local_fc0 = (void *)0x0;
                    /* try { // try from 0086c82c to 0086c837 has its CatchHandler @ 0086ce54 */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_fc0);
  local_f8 = 0;
  *(undefined ***)this = &PTR_FUN_00992158;
  local_f0 = 0;
  local_e8 = 0;
  local_e0[0] = 0;
  local_d0[0] = 0;
  local_c8 = 0;
  local_a0 = 0;
  pvStack_90 = (void *)0x0;
  local_98 = (void *)0x0;
  local_80 = (void *)0x0;
  uStack_88 = 0;
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
                    /* try { // try from 0086c8a4 to 0086c8af has its CatchHandler @ 0086ce84 */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1b0);
  local_100 = CONCAT44(local_100._4_4_,0x3f800000);
  local_fd0[0] = 0xffffffff;
  uStack_108 = 0;
  local_110 = (void *)0x0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_fc8 = &local_1b0;
  facebook::react::RawProps::facebook::react::RawProps::parse(&local_f8,this + 0x38);
  memset(local_f50,0,0x6c0);
  puVar5 = PTR_VTT_0099ee58;
  local_890[0] = 5;
  local_878 = 0;
  local_f70 = *(undefined **)(PTR_VTT_0099ee58 + 0x20);
  local_f50[0] = 5;
  uStack_f58 = 0;
  local_f60 = 0;
  uStack_f68 = 0;
  local_870 = 0;
  uStack_868 = 0x3f800000;
  uStack_880 = 0;
  local_888 = 0;
  uStack_f40 = 0;
  local_f48 = 0;
  uStack_f30 = 0;
  local_f38 = 0;
  local_f28 = 0x3f800000;
  folly::dynamic::folly::dynamic::destroy(local_890);
  local_f1c = 0;
  local_ec1 = 0;
  uStack_9e0 = _UNK_00488920;
  local_9e8 = _DAT_00488918;
  local_f1b = _s__00375408;
  uStack_ad8 = _UNK_00371598;
  local_ae0 = _DAT_00371590;
  uStack_9f0 = _UNK_00488910;
  local_9f8 = _DAT_00488908;
  local_e04 = 0;
  uStack_a00 = _UNK_00488900;
  local_a08 = _DAT_004888f8;
  uStack_a10 = _UNK_004888f0;
  local_a18 = _DAT_004888e8;
  uStack_9c8 = 0;
  local_dfc = 0;
  uStack_e30 = 0;
  local_e38 = 0;
  uStack_e1c = 0;
  uStack_e40 = 0;
  local_e48 = 0;
  uStack_9d0 = 0;
  uStack_9ca = 0;
  local_9d8 = 0;
  local_f20 = 0x10410710;
  local_ec5 = 0x40004;
  uStack_e24 = 0;
  uStack_e20 = 0;
  uStack_e2c = 0;
  uStack_e28 = 0;
  uStack_e10 = 0;
  local_e18 = 0;
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
  local_db8 = 0x7fc00000;
  local_db0 = 0x7fc00000;
  local_da8 = 0x7fc00000;
  local_da0 = 0x7fc00000;
  local_d98 = 0x7fc00000;
  local_d90 = 0x7fc00000;
  uStack_d2f = 0;
  uStack_d30 = 0;
  uStack_d1c = 0;
  local_d24 = 0;
  uStack_d0c = 0;
  uStack_d14 = 0;
  uStack_cfc = 0;
  local_d04 = 0;
  uStack_cec = 0;
  uStack_cf4 = 0;
  uStack_cdc = 0;
  local_ce4 = 0;
  uStack_ccc = 0;
  uStack_cd4 = 0;
  local_cc7 = 0;
  uStack_cc4 = 0;
  local_c6c = 1;
  local_c6b = 0;
  local_c66 = 0x23;
  local_c2c = 0x3f800000;
  uStack_b10 = 0;
  local_b18 = 0;
  uStack_b00 = 0;
  uStack_b08 = 0;
  uStack_b20 = 0;
  local_b28 = 0;
  local_af4 = 0;
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
  uStack_a70 = 0;
  uStack_a78 = 0;
  uStack_a60 = 0;
  local_a68 = 0;
  uStack_a50 = 0;
  uStack_a58 = 0;
  uStack_a40 = 0;
  local_a48 = 0;
  uStack_a30 = 0;
  uStack_a38 = 0;
  uStack_a20 = 0;
  local_a28 = 0;
  uStack_eb7 = 0;
  uStack_f0b = 0;
  local_f13 = 0;
  uStack_efb = 0;
  local_f03 = 0;
  uStack_eeb = 0;
  local_ef3 = 0;
  uStack_edb = 0;
  local_ee3 = 0;
  uStack_ecd = 0;
  uStack_ed5 = 0;
  uStack_ed3 = 0;
  local_eb9 = 0;
  uStack_eb8 = 0;
  uStack_ea8 = 0;
  uStack_eb0 = 0;
  local_e98 = 0;
  uStack_ea0 = 0;
  local_e88 = 0;
  uStack_e90 = 0;
  local_e78 = 0;
  uStack_e80 = 0;
  local_e68 = 0;
  uStack_e70 = 0;
  uStack_e58 = 0;
  uStack_e60 = 0;
  local_e50 = 0;
  local_df4 = 0;
  local_dec = 0;
  local_de4 = 0;
  local_ddc = 0;
  local_dd4 = 0;
  local_dcc = 0;
  local_dc4 = 0;
  local_dbc = 0;
  local_db4 = 0;
  local_dac = 0;
  local_da4 = 0;
  local_d9c = 0;
  local_d94 = 0;
  local_d8c = 0;
  local_d88 = 0;
  local_d84 = 0;
  local_d78 = 0;
  local_cbc = 0;
  local_cb8 = 0;
  local_cb4 = 0;
  local_cb0 = 0;
  local_cac = 0;
  local_ca8 = 0;
  local_c90 = 0;
  uStack_d68 = 0;
  local_d70 = 0;
  uStack_d58 = 0;
  uStack_d60 = 0;
  uStack_d48 = 0;
  local_d50 = 0;
  uStack_d38 = 0;
  local_d37 = 0;
  uStack_d40 = 0;
  uStack_c80 = 0;
  local_c88 = 0;
  local_c78 = 0;
  local_c70 = 0;
  local_c67 = 0;
  uStack_c58 = 0;
  local_c60 = 0;
  uStack_c48 = 0;
  uStack_c50 = 0;
  uStack_c38 = 0;
  uStack_c31 = 0;
  local_c40 = 0;
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
  local_bb0 = 0;
  local_bac = 0;
  local_ba4 = 0;
  local_ba0 = 0;
  local_b98 = 0;
  local_b94 = 0;
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
  local_b58 = 0;
  local_b54 = 0;
  local_b50 = 0;
  local_b4c = 0;
  local_b48 = 0;
  local_b44 = 0;
  local_b40 = 0;
  local_b3c = 0;
  local_b38 = 0;
  local_b34 = 0;
  local_b30 = 0;
  local_b2c = 0;
  local_ae8 = 0;
  local_af8 = 0;
  local_aec = 0;
  local_ad0 = 0;
  local_9c0 = 0;
  local_9bc = 0;
  local_9b8 = 0;
  local_9a0 = 0;
  uStack_9ac = 0;
  local_9b4 = 0;
  local_9a4 = 0;
  local_998 = 0x101;
  local_996 = 0;
  local_994 = 0;
  local_990 = 0;
  local_930 = 0;
  local_928 = 0;
  local_8c8 = 0;
  local_8b8 = 0;
  local_8b4 = 0;
  local_8b0 = 0;
  local_8ac = 0;
  local_8a8 = 0;
  local_8a4 = 0;
  local_8a0 = 0;
  local_89c = 0;
  local_898 = 0;
  local_894 = 0;
  local_8bc = 0;
  local_8c0 = 0;
  local_f70 = PTR_vtable_0099ee50 + 0x20;
                    /* try { // try from 0086cc9c to 0086ccaf has its CatchHandler @ 0086ce84 */
  facebook::react::RNCSafeAreaProviderProps::RNCSafeAreaProviderProps
            ((RNCSafeAreaProviderProps *)local_890,(PropsParserContext *)local_fd0,
             (RNCSafeAreaProviderProps *)&local_f70,(RawProps *)&local_f8);
  FUN_0078917c(local_890,puVar5 + 8);
  FUN_0078917c(&local_f70,puVar5 + 8);
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
  pvVar8 = local_80;
  pvVar3 = local_78;
  if (local_80 != (void *)0x0) {
    while (pvVar3 != pvVar8) {
      if (*(uint *)((long)pvVar3 + -8) != 0xffffffff) {
                    /* try { // try from 0086cdb4 to 0086cdbf has its CatchHandler @ 0086ce88 */
        (*(code *)(&PTR_FUN_0098f088)[*(uint *)((long)pvVar3 + -8)])
                  (&local_f70,(void *)((long)pvVar3 + -0x38));
      }
      *(undefined4 *)((long)pvVar3 + -8) = 0xffffffff;
      pvVar3 = (void *)((long)pvVar3 + -0x38);
    }
    local_78 = pvVar8;
    operator_delete(local_80);
  }
  if (local_98 != (void *)0x0) {
    pvStack_90 = local_98;
    operator_delete(local_98);
  }
  folly::dynamic::folly::dynamic::destroy(local_d0);
  facebook::jsi::Value::~Value((Value *)local_e0);
  if (local_f90 != (void *)0x0) {
    pvStack_f88 = local_f90;
    operator_delete(local_f90);
  }
  if (pvStack_fa8 != (void *)0x0) {
    local_fa0 = pvStack_fa8;
    operator_delete(pvStack_fa8);
  }
  if (local_fc0 != (void *)0x0) {
    pvStack_fb8 = local_fc0;
    operator_delete(local_fc0);
  }
  *param_1 = this;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0086ce8c  FUN_0086ce8c =====

void FUN_0086ce8c(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 0086ceb0  FUN_0086ceb0 =====

undefined * FUN_0086ceb0(void)

{
  return PTR_RNCSafeAreaProviderComponentName_0099ee48;
}


// ===== 0086cebc  FUN_0086cebc =====

undefined * FUN_0086cebc(void)

{
  return PTR_RNCSafeAreaProviderComponentName_0099ee48;
}


// ===== 0086cec8  FUN_0086cec8 =====

undefined8 FUN_0086cec8(void)

{
  return 0x61;
}


// ===== 0086ced0  FUN_0086ced0 =====

void FUN_0086ced0(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

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
  lVar9 = *(long *)(lVar4 + 0x28);
  uVar5 = (**(code **)(*param_2 + 0x20))();
  puVar6 = (undefined8 *)operator_new(0x400);
  pYVar1 = (YogaLayoutableShadowNode *)(puVar6 + 3);
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_009921e8;
                    /* try { // try from 0086cf3c to 0086cf4b has its CatchHandler @ 0086d024 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4,uVar5);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_00992238;
  uVar3 = *(uint *)((long)puVar6 + 0x6c);
  uVar2 = uVar3 & 3 | (uint)((*(byte *)(lVar7 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)puVar6 + 0x6c) = uVar3 & 0xfffffff8 | uVar2;
  if ((*(uint *)(lVar7 + 0x50) & 0x30000000) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    if (*(char *)(lVar7 + 0x5b4) != '\0') {
      uVar5 = *(undefined4 *)(lVar7 + 0x5b0);
    }
  }
  *(undefined4 *)(puVar6 + 10) = uVar5;
  lVar8 = *param_2;
  *(uint *)((long)puVar6 + 0x6c) =
       uVar3 & 0xfffff000 |
       uVar3 & 0x7f8 | uVar2 |
       (uint)((*(char *)(lVar7 + 0x6b0) != '\0' || *(char *)(lVar7 + 0x6b1) != '\0') ||
             *(char *)(lVar7 + 0x1e8) != '\0') << 0xb;
                    /* try { // try from 0086cfd8 to 0086cfe3 has its CatchHandler @ 0086d014 */
  (**(code **)(lVar8 + 0x60))(param_2,pYVar1);
  *param_1 = pYVar1;
  param_1[1] = puVar6;
  if (*(long *)(lVar4 + 0x28) != lVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0086d054  FUN_0086d054 =====

void FUN_0086d054(undefined8 *param_1,long *param_2,ShadowNode *param_3,ShadowNodeFragment *param_4)

{
  YogaLayoutableShadowNode *pYVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined4 uVar7;
  YogaLayoutableShadowNode *local_78;
  long *local_70;
  YogaLayoutableShadowNode *local_68;
  long *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  plVar5 = (long *)operator_new(0x400);
  pYVar1 = (YogaLayoutableShadowNode *)(plVar5 + 3);
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_009921e8;
                    /* try { // try from 0086d0ac to 0086d0bb has its CatchHandler @ 0086d1fc */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4);
  lVar6 = plVar5[4];
  plVar5[3] = (long)&PTR_FUN_00992238;
  uVar3 = *(uint *)((long)plVar5 + 0x6c);
  uVar2 = uVar3 & 3 | (uint)((*(byte *)(lVar6 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)plVar5 + 0x6c) = uVar3 & 0xfffffff8 | uVar2;
  if ((*(uint *)(lVar6 + 0x50) & 0x30000000) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    if (*(char *)(lVar6 + 0x5b4) != '\0') {
      uVar7 = *(undefined4 *)(lVar6 + 0x5b0);
    }
  }
  *(undefined4 *)(plVar5 + 10) = uVar7;
  *(uint *)((long)plVar5 + 0x6c) =
       uVar3 & 0xfffff000 |
       uVar3 & 0x7f8 | uVar2 |
       (uint)((*(char *)(lVar6 + 0x6b0) != '\0' || *(char *)(lVar6 + 0x6b1) != '\0') ||
             *(char *)(lVar6 + 0x1e8) != '\0') << 0xb;
  local_68 = pYVar1;
  local_60 = plVar5;
                    /* try { // try from 0086d140 to 0086d14f has its CatchHandler @ 0086d214 */
  facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::
  completeClone(pYVar1,param_3,param_4);
  local_78 = pYVar1;
  local_70 = plVar5;
  FUN_00757d00(1,plVar5 + 1);
                    /* try { // try from 0086d160 to 0086d16f has its CatchHandler @ 0086d1ec */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_78);
  plVar5 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar6 = FUN_00757990(0xffffffffffffffff,local_70 + 1), lVar6 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pYVar1 = local_68;
                    /* try { // try from 0086d1ac to 0086d1b7 has its CatchHandler @ 0086d214 */
  (**(code **)(*param_2 + 0x60))(param_2,local_68);
  *param_1 = pYVar1;
  param_1[1] = local_60;
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0086d23c  FUN_0086d23c =====

void FUN_0086d23c(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0086d24c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 0086d250  FUN_0086d250 =====

void FUN_0086d250(undefined8 *param_1,long param_2,PropsParserContext *param_3,long *param_4,
                 RawProps *param_5)

{
  RNCSafeAreaProviderProps *this;
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
  RNCSafeAreaProviderProps *pRVar12;
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
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNCSafeAreaProviderComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNCSafeAreaProviderPropsENS0_31RNCSafeAreaProviderEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e8e0
         & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNCSafeAreaProviderComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNCSafeAreaProviderPropsENS0_31RNCSafeAreaProviderEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e8e0
                                   ), iVar6 != 0)) {
                    /* try { // try from 0086d684 to 0086d687 has its CatchHandler @ 0086d6b4 */
      FUN_0086ddb0();
      __cxa_atexit(FUN_0086dd60,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNCSafeAreaProviderComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNCSafeAreaProviderPropsENS0_31RNCSafeAreaProviderEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e8d8
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNCSafeAreaProviderComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNCSafeAreaProviderPropsENS0_31RNCSafeAreaProviderEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e8e0
                         );
    }
    lVar11 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNCSafeAreaProviderComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNCSafeAreaProviderPropsENS0_31RNCSafeAreaProviderEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e8d8
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNCSafeAreaProviderComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNCSafeAreaProviderPropsENS0_31RNCSafeAreaProviderEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e8d8
    ;
    param_1[1] = lVar11;
    if (lVar11 != 0) {
      FUN_00757d00(1,lVar11 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    pRVar12 = (RNCSafeAreaProviderProps *)*param_4;
    if (pRVar12 == (RNCSafeAreaProviderProps *)0x0) {
      if (((*
            PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNCSafeAreaProviderComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNCSafeAreaProviderPropsENS0_31RNCSafeAreaProviderEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e8e0
           & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNCSafeAreaProviderComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNCSafeAreaProviderPropsENS0_31RNCSafeAreaProviderEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e8e0
                                     ), iVar6 != 0)) {
                    /* try { // try from 0086d604 to 0086d607 has its CatchHandler @ 0086d6cc */
        FUN_0086ddb0();
        __cxa_atexit(FUN_0086dd60,
                     PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNCSafeAreaProviderComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNCSafeAreaProviderPropsENS0_31RNCSafeAreaProviderEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e8d8
                     ,&PTR_LOOP_008d5d30);
        __cxa_guard_release(
                           PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNCSafeAreaProviderComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNCSafeAreaProviderPropsENS0_31RNCSafeAreaProviderEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e8e0
                           );
      }
      pRVar12 = *(RNCSafeAreaProviderProps **)
                 PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNCSafeAreaProviderComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNCSafeAreaProviderPropsENS0_31RNCSafeAreaProviderEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e8d8
      ;
    }
    plVar8 = (long *)operator_new(0x6f8);
    this = (RNCSafeAreaProviderProps *)(plVar8 + 3);
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = (long)&PTR_FUN_00992350;
                    /* try { // try from 0086d330 to 0086d343 has its CatchHandler @ 0086d740 */
    facebook::react::RNCSafeAreaProviderProps::RNCSafeAreaProviderProps
              (this,param_3,pRVar12,param_5);
                    /* try { // try from 0086d348 to 0086d35b has its CatchHandler @ 0086d758 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if ((((uVar7 & 1) == 0) ||
        (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar7 & 1) == 0)) ||
       (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
                enablePropsUpdateReconciliationAndroid(), (uVar7 & 1) == 0)) {
LAB_0086d384:
      FUN_00757d00(1,plVar8 + 1);
      if (*param_4 == 0) {
        if (((*
              PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNCSafeAreaProviderComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNCSafeAreaProviderPropsENS0_31RNCSafeAreaProviderEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e8e0
             & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(
                                       PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNCSafeAreaProviderComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNCSafeAreaProviderPropsENS0_31RNCSafeAreaProviderEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e8e0
                                       ), iVar6 != 0)) {
                    /* try { // try from 0086d644 to 0086d647 has its CatchHandler @ 0086d6b8 */
          FUN_0086ddb0();
          __cxa_atexit(FUN_0086dd60,
                       PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNCSafeAreaProviderComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNCSafeAreaProviderPropsENS0_31RNCSafeAreaProviderEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e8d8
                       ,&PTR_LOOP_008d5d30);
          __cxa_guard_release(
                             PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNCSafeAreaProviderComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNCSafeAreaProviderPropsENS0_31RNCSafeAreaProviderEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e8e0
                             );
        }
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 0086d3ec to 0086d3ff has its CatchHandler @ 0086d6e4 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*(undefined8 *)
                         PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNCSafeAreaProviderComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNCSafeAreaProviderPropsENS0_31RNCSafeAreaProviderEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e8d8
                   ,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
LAB_0086d438:
          (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
        }
        else if (local_b0 != (dynamic *)0x0) {
          lVar11 = 5;
          pdVar10 = local_b0;
          goto LAB_0086d438;
        }
        if (plVar8 != (long *)0x0) goto LAB_0086d44c;
      }
      else {
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 0086d3a0 to 0086d3b3 has its CatchHandler @ 0086d70c */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*param_4,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
        }
        else {
          if (local_b0 == (dynamic *)0x0) goto LAB_0086d44c;
          lVar11 = 5;
          pdVar10 = local_b0;
        }
        (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
LAB_0086d44c:
        lVar11 = FUN_00757990(0xffffffffffffffff,plVar8 + 1);
        if (lVar11 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 0086d368 to 0086d373 has its CatchHandler @ 0086d6e0 */
      pcVar9 = (char *)(**(code **)(*(long *)this + 0x10))(this);
      iVar6 = strcmp(PTR_RNCSafeAreaProviderComponentName_0099ee48,pcVar9);
      if (iVar6 != 0) goto LAB_0086d384;
      bVar3 = false;
    }
                    /* try { // try from 0086d478 to 0086d47b has its CatchHandler @ 0086d758 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar7 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 0086d488 to 0086d4a3 has its CatchHandler @ 0086d708 */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(plVar8 + 7));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 0086d5e4 to 0086d5f3 has its CatchHandler @ 0086d700 */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_0086d7a4;
      }
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (*(int *)(plVar4 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 0086d5c4 to 0086d5d3 has its CatchHandler @ 0086d764 */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_0086d7a4;
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
                    /* try { // try from 0086d524 to 0086d52f has its CatchHandler @ 0086d76c */
        folly::dynamic::dynamic(local_d0,(dynamic *)(plVar4 + 8));
        local_a0 = 0;
                    /* try { // try from 0086d534 to 0086d54b has its CatchHandler @ 0086d770 */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (this,param_3,uVar1,pcVar9,local_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 0086d55c to 0086d567 has its CatchHandler @ 0086d760 */
          (*(code *)(&PTR_FUN_0098f088)[local_a0])(&uStack_d1,local_d0);
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
LAB_0086d7a4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0086d7a8  FUN_0086d7a8 =====

void FUN_0086d7a8(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 0086d7b0  FUN_0086d7b0 =====

void FUN_0086d7b0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 0086d7b8  FUN_0086d7b8 =====

void FUN_0086d7b8(undefined8 *param_1,long param_2,long param_3)

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
                    /* try { // try from 0086d800 to 0086d807 has its CatchHandler @ 0086daec */
  plVar5 = (long *)operator_new(0x68);
  *plVar5 = (long)&PTR_FUN_009923a0;
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
                    /* try { // try from 0086d844 to 0086d853 has its CatchHandler @ 0086dac0 */
  facebook::react::EventEmitter::EventEmitter(pEVar1,&local_70,&local_80);
  *(undefined ***)pEVar1 = &PTR_FUN_0097ff10;
                    /* try { // try from 0086d864 to 0086d86b has its CatchHandler @ 0086dab0 */
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
  plVar5[3] = (long)&PTR_FUN_009923f0;
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
                    /* try { // try from 0086d91c to 0086d923 has its CatchHandler @ 0086daa0 */
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
                    /* try { // try from 0086d970 to 0086d987 has its CatchHandler @ 0086da70 */
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
                    /* try { // try from 0086d9dc to 0086d9e7 has its CatchHandler @ 0086da50 */
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


// ===== 0086db14  FUN_0086db14 =====

void FUN_0086db14(void)

{
  return;
}


// ===== 0086db18  FUN_0086db18 =====

void FUN_0086db18(long param_1)

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


// ===== 0086db68  FUN_0086db68 =====

void FUN_0086db68(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009921e8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0086db78  FUN_0086db78 =====

void FUN_0086db78(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009921e8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0086dba8  FUN_0086dba8 =====

void FUN_0086dba8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0086dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 0086dbb4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0086dbb8  FUN_0086dbb8 =====

void FUN_0086dbb8(long *param_1)

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


// ===== 0086dc78  FUN_0086dc78 =====

void FUN_0086dc78(long param_1)

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


// ===== 0086dce0  FUN_0086dce0 =====

bool FUN_0086dce0(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 0086dcf8  FUN_0086dcf8 =====

bool FUN_0086dcf8(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 0086dd10  FUN_0086dd10 =====

void FUN_0086dd10(long param_1)

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


// ===== 0086dd60  FUN_0086dd60 =====

void FUN_0086dd60(long param_1)

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


// ===== 0086ddb0  FUN_0086ddb0 =====

void FUN_0086ddb0(void)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x6f8);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_00992300;
  memset(__s,0,0x6e0);
                    /* try { // try from 0086ddec to 0086ddff has its CatchHandler @ 0086de6c */
  FUN_00788b10(__s,PTR_VTT_0099ee58 + 0x10);
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
  puVar1 = PTR_vtable_0099ee50;
  *(undefined1 *)((long)puVar2 + 0x6f4) = 0;
  *(undefined4 *)(puVar2 + 0xd9) = 0;
  puVar2[3] = puVar1 + 0x20;
  puVar1 = 
  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNCSafeAreaProviderComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNCSafeAreaProviderPropsENS0_31RNCSafeAreaProviderEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e8d8
  ;
  *(undefined2 *)((long)puVar2 + 0x6cc) = 0;
  *(undefined8 **)puVar1 = __s;
  *(undefined8 **)(puVar1 + 8) = puVar2;
  return;
}


// ===== 0086de88  FUN_0086de88 =====

void FUN_0086de88(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00992300;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0086de98  FUN_0086de98 =====

void FUN_0086de98(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00992300;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0086dec8  FUN_0086dec8 =====

void FUN_0086dec8(long param_1)

{
  FUN_0078917c(param_1 + 0x18,PTR_VTT_0099ee58 + 8);
  return;
}


// ===== 0086dedc  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0086dee0  FUN_0086dee0 =====

void FUN_0086dee0(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00992350;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0086def0  FUN_0086def0 =====

void FUN_0086def0(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00992350;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0086df20  FUN_0086df20 =====

void FUN_0086df20(long param_1)

{
  FUN_0078917c(param_1 + 0x18,PTR_VTT_0099ee58 + 8);
  return;
}


// ===== 0086df34  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0086df38  FUN_0086df38 =====

void FUN_0086df38(long param_1)

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


// ===== 0086df88  FUN_0086df88 =====

void FUN_0086df88(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009923a0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0086df98  FUN_0086df98 =====

void FUN_0086df98(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009923a0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0086dfc8  FUN_0086dfc8 =====

void FUN_0086dfc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0086dfd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 0086dfd4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0086dfd8  FUN_0086dfd8 =====

void FUN_0086dfd8(long *param_1)

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


// ===== 0086e090  facebook::react::concreteComponentDescriptorConstructor<facebook::react::RNCSafeAreaViewComponentDescriptor> =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::__ndk1::unique_ptr<facebook::react::ComponentDescriptor const,
   std::__ndk1::default_delete<facebook::react::ComponentDescriptor const> >
   facebook::react::concreteComponentDescriptorConstructor<facebook::react::RNCSafeAreaViewComponentDescriptor>(facebook::react::ComponentDescriptorParameters
   const&) */

void __thiscall
facebook::react::
concreteComponentDescriptorConstructor<facebook::react::RNCSafeAreaViewComponentDescriptor>
          (react *this,ComponentDescriptorParameters *param_1)

{
  byte bVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  ComponentDescriptor *this_00;
  long lVar6;
  undefined8 *in_x8;
  long *plVar7;
  void *pvVar8;
  undefined4 local_10a0 [2];
  undefined8 *local_1098;
  void *local_1090;
  void *pvStack_1088;
  undefined8 local_1080;
  void *pvStack_1078;
  void *local_1070;
  undefined8 uStack_1068;
  void *local_1060;
  void *pvStack_1058;
  undefined8 uStack_1050;
  undefined8 uStack_1048;
  undefined *local_1040;
  undefined8 uStack_1038;
  undefined8 local_1030;
  undefined8 uStack_1028;
  undefined4 local_1020 [2];
  undefined8 local_1018;
  undefined8 uStack_1010;
  undefined8 local_1008;
  undefined8 uStack_1000;
  undefined4 local_ff8;
  undefined4 local_ff0;
  undefined1 local_fec;
  undefined8 local_feb;
  undefined8 local_fe3;
  undefined8 uStack_fdb;
  undefined8 local_fd3;
  undefined8 uStack_fcb;
  undefined8 local_fc3;
  undefined8 uStack_fbb;
  undefined8 local_fb3;
  undefined6 uStack_fab;
  undefined2 uStack_fa5;
  undefined6 uStack_fa3;
  undefined8 uStack_f9d;
  undefined4 local_f95;
  undefined8 local_f91;
  undefined1 local_f89;
  undefined1 uStack_f88;
  undefined7 uStack_f87;
  undefined8 uStack_f80;
  undefined8 uStack_f78;
  undefined8 uStack_f70;
  undefined8 local_f68;
  undefined8 uStack_f60;
  undefined8 local_f58;
  undefined8 uStack_f50;
  undefined8 local_f48;
  undefined8 uStack_f40;
  undefined8 local_f38;
  undefined8 uStack_f30;
  undefined8 uStack_f28;
  undefined8 local_f20;
  undefined8 local_f18;
  undefined8 uStack_f10;
  undefined8 local_f08;
  undefined4 uStack_f00;
  undefined4 uStack_efc;
  undefined4 uStack_ef8;
  undefined4 uStack_ef4;
  undefined4 uStack_ef0;
  undefined4 uStack_eec;
  undefined8 local_ee8;
  undefined8 uStack_ee0;
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
  undefined4 local_e68;
  undefined1 local_e64;
  undefined4 local_e60;
  undefined1 local_e5c;
  undefined1 local_e58;
  undefined1 local_e54;
  undefined1 local_e48;
  undefined8 local_e40;
  undefined8 uStack_e38;
  undefined8 uStack_e30;
  undefined8 uStack_e28;
  undefined8 local_e20;
  undefined8 uStack_e18;
  undefined8 uStack_e10;
  undefined1 uStack_e08;
  undefined7 local_e07;
  undefined1 uStack_e00;
  undefined8 uStack_dff;
  undefined8 local_df4;
  undefined8 uStack_dec;
  undefined8 uStack_de4;
  undefined8 uStack_ddc;
  undefined8 local_dd4;
  undefined8 uStack_dcc;
  undefined8 uStack_dc4;
  undefined8 uStack_dbc;
  undefined8 local_db4;
  undefined8 uStack_dac;
  undefined8 uStack_da4;
  undefined5 uStack_d9c;
  undefined3 local_d97;
  undefined5 uStack_d94;
  undefined1 local_d8c;
  undefined1 local_d88;
  undefined1 local_d84;
  undefined1 local_d80;
  undefined1 local_d7c;
  undefined1 local_d78;
  undefined1 local_d60;
  undefined8 local_d58;
  undefined8 uStack_d50;
  undefined8 local_d48;
  undefined4 local_d40;
  undefined1 local_d3c;
  undefined4 local_d3b;
  undefined1 local_d37;
  undefined1 local_d36;
  undefined8 local_d30;
  undefined8 uStack_d28;
  undefined8 uStack_d20;
  undefined8 uStack_d18;
  undefined8 local_d10;
  undefined7 uStack_d08;
  undefined4 uStack_d01;
  undefined8 local_cfc;
  undefined1 local_cf4;
  undefined1 local_cec;
  undefined1 local_ce8;
  undefined1 local_ce0;
  undefined1 local_cdc;
  undefined1 local_cd4;
  undefined1 local_cd0;
  undefined1 local_cc8;
  undefined1 local_cc4;
  undefined1 local_cbc;
  undefined1 local_cb8;
  undefined1 local_cb0;
  undefined1 local_cac;
  undefined1 local_ca4;
  undefined1 local_ca0;
  undefined1 local_c98;
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
  undefined1 local_c08;
  undefined1 local_c04;
  undefined1 local_c00;
  undefined1 local_bfc;
  undefined8 local_bf8;
  undefined8 uStack_bf0;
  undefined8 local_be8;
  undefined8 uStack_be0;
  undefined8 uStack_bd8;
  undefined8 uStack_bd0;
  undefined2 local_bc8;
  undefined8 local_bc4;
  undefined1 local_bbc;
  undefined8 local_bb8;
  undefined8 local_bb0;
  undefined8 uStack_ba8;
  undefined1 local_ba0;
  undefined8 local_b98;
  undefined8 uStack_b90;
  undefined8 uStack_b88;
  undefined8 uStack_b80;
  undefined8 local_b78;
  undefined8 uStack_b70;
  undefined8 uStack_b68;
  undefined8 uStack_b60;
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
  undefined8 local_ae8;
  undefined8 uStack_ae0;
  undefined8 local_ad8;
  undefined8 uStack_ad0;
  undefined8 local_ac8;
  undefined8 uStack_ac0;
  undefined8 local_ab8;
  undefined8 uStack_ab0;
  undefined8 local_aa8;
  undefined6 uStack_aa0;
  undefined2 uStack_a9a;
  undefined6 uStack_a98;
  undefined1 local_a90;
  undefined1 local_a8c;
  undefined1 local_a88;
  undefined8 local_a84;
  undefined8 uStack_a7c;
  undefined1 local_a74;
  undefined8 local_a70;
  undefined2 local_a68;
  undefined1 local_a66;
  undefined4 local_a64;
  undefined1 local_a60;
  undefined1 local_a00;
  undefined1 local_9f8;
  undefined1 local_998;
  undefined4 local_990;
  undefined2 local_98c;
  undefined1 local_988;
  undefined1 local_984;
  undefined1 local_980;
  undefined1 local_97c;
  undefined1 local_978;
  undefined1 local_974;
  undefined1 local_970;
  undefined1 local_96c;
  undefined1 local_968;
  undefined1 local_964;
  undefined4 local_960;
  ulong local_958;
  undefined8 uStack_950;
  void *local_948;
  ulong local_940;
  undefined8 local_938;
  void *pvStack_930;
  ulong local_928;
  undefined8 uStack_920;
  void *local_918;
  ulong uStack_910;
  undefined8 uStack_908;
  void *local_900;
  undefined4 local_8f8 [2];
  undefined8 local_8f0;
  undefined8 uStack_8e8;
  undefined8 local_8e0;
  undefined8 local_8d8;
  undefined8 uStack_8d0;
  byte local_210;
  void *local_200;
  byte local_1f8;
  void *local_1e8;
  byte local_1e0;
  void *local_1d0;
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
  this_00 = (ComponentDescriptor *)operator_new(0x88);
  pvStack_1078 = (void *)0x0;
  local_1080 = 0;
  uStack_1068 = 0;
  local_1070 = (void *)0x0;
  pvStack_1058 = (void *)0x0;
  local_1060 = (void *)0x0;
  uStack_1048 = 0;
  uStack_1050 = 0;
  pvStack_1088 = (void *)0x0;
  local_1090 = (void *)0x0;
                    /* try { // try from 0086e0e4 to 0086e0ef has its CatchHandler @ 0086e7ec */
  ::facebook::react::ComponentDescriptor::ComponentDescriptor
            (this_00,(ComponentDescriptorParameters *)this,(RawPropsParser *)&local_1090);
  local_f8 = 0;
  *(undefined ***)this_00 = &PTR_FUN_009924d0;
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
                    /* try { // try from 0086e160 to 0086e16b has its CatchHandler @ 0086e81c */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1b0);
  local_100 = CONCAT44(local_100._4_4_,0x3f800000);
  local_10a0[0] = 0xffffffff;
  uStack_108 = 0;
  local_110 = (void *)0x0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_1098 = &local_1b0;
  ::facebook::react::RawProps::facebook::react::RawProps::parse(&local_f8,this_00 + 0x38);
  memset(local_1020,0,0x728);
  puVar5 = PTR_VTT_0099ee70;
  local_8f8[0] = 5;
  local_8e0 = 0;
  local_1040 = *(undefined **)(PTR_VTT_0099ee70 + 0x20);
  local_1020[0] = 5;
  uStack_1028 = 0;
  local_1030 = 0;
  local_8d8 = 0;
  uStack_1038 = 0;
  uStack_8d0 = 0x3f800000;
  uStack_8e8 = 0;
  local_8f0 = 0;
  uStack_1010 = 0;
  local_1018 = 0;
  uStack_1000 = 0;
  local_1008 = 0;
  local_ff8 = 0x3f800000;
  folly::dynamic::folly::dynamic::destroy(local_8f8);
  local_fec = 0;
  local_f91 = 0;
  uStack_ab0 = _UNK_00488920;
  local_ab8 = _DAT_00488918;
  local_feb = _s__00375408;
  uStack_ba8 = _UNK_00371598;
  local_bb0 = _DAT_00371590;
  uStack_ac0 = _UNK_00488910;
  local_ac8 = _DAT_00488908;
  local_ed4 = 0;
  uStack_ad0 = _UNK_00488900;
  local_ad8 = _DAT_004888f8;
  uStack_ae0 = _UNK_004888f0;
  local_ae8 = _DAT_004888e8;
  uStack_a98 = 0;
  local_ecc = 0;
  uStack_f00 = 0;
  local_f08 = 0;
  uStack_eec = 0;
  uStack_f10 = 0;
  local_f18 = 0;
  uStack_aa0 = 0;
  uStack_a9a = 0;
  local_aa8 = 0;
  local_ff0 = 0x10410710;
  local_f95 = 0x40004;
  uStack_ef4 = 0;
  uStack_ef0 = 0;
  uStack_efc = 0;
  uStack_ef8 = 0;
  uStack_ee0 = 0;
  local_ee8 = 0;
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
  local_e68 = 0x7fc00000;
  local_e60 = 0x7fc00000;
  uStack_dff = 0;
  uStack_e00 = 0;
  uStack_dec = 0;
  local_df4 = 0;
  uStack_ddc = 0;
  uStack_de4 = 0;
  uStack_dcc = 0;
  local_dd4 = 0;
  uStack_dbc = 0;
  uStack_dc4 = 0;
  uStack_dac = 0;
  local_db4 = 0;
  uStack_d9c = 0;
  uStack_da4 = 0;
  local_d97 = 0;
  uStack_d94 = 0;
  local_d3c = 1;
  local_d3b = 0;
  local_d36 = 0x23;
  local_cfc = 0x3f800000;
  uStack_be0 = 0;
  local_be8 = 0;
  uStack_bd0 = 0;
  uStack_bd8 = 0;
  uStack_bf0 = 0;
  local_bf8 = 0;
  local_bc4 = 0;
  uStack_b90 = 0;
  local_b98 = 0;
  uStack_b80 = 0;
  uStack_b88 = 0;
  uStack_b70 = 0;
  local_b78 = 0;
  uStack_b60 = 0;
  uStack_b68 = 0;
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
  uStack_f87 = 0;
  uStack_fdb = 0;
  local_fe3 = 0;
  uStack_fcb = 0;
  local_fd3 = 0;
  uStack_fbb = 0;
  local_fc3 = 0;
  uStack_fab = 0;
  local_fb3 = 0;
  uStack_f9d = 0;
  uStack_fa5 = 0;
  uStack_fa3 = 0;
  local_f89 = 0;
  uStack_f88 = 0;
  uStack_f78 = 0;
  uStack_f80 = 0;
  local_f68 = 0;
  uStack_f70 = 0;
  local_f58 = 0;
  uStack_f60 = 0;
  local_f48 = 0;
  uStack_f50 = 0;
  local_f38 = 0;
  uStack_f40 = 0;
  uStack_f28 = 0;
  uStack_f30 = 0;
  local_f20 = 0;
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
  local_e64 = 0;
  local_e5c = 0;
  local_e58 = 0;
  local_e54 = 0;
  local_e48 = 0;
  local_d8c = 0;
  local_d88 = 0;
  local_d84 = 0;
  local_d80 = 0;
  local_d7c = 0;
  local_d78 = 0;
  local_d60 = 0;
  uStack_e38 = 0;
  local_e40 = 0;
  uStack_e28 = 0;
  uStack_e30 = 0;
  uStack_e18 = 0;
  local_e20 = 0;
  uStack_e08 = 0;
  local_e07 = 0;
  uStack_e10 = 0;
  uStack_d50 = 0;
  local_d58 = 0;
  local_d48 = 0;
  local_d40 = 0;
  local_d37 = 0;
  uStack_d28 = 0;
  local_d30 = 0;
  uStack_d18 = 0;
  uStack_d20 = 0;
  uStack_d08 = 0;
  uStack_d01 = 0;
  local_d10 = 0;
  local_cf4 = 0;
  local_cec = 0;
  local_ce8 = 0;
  local_ce0 = 0;
  local_cdc = 0;
  local_cd4 = 0;
  local_cd0 = 0;
  local_cc8 = 0;
  local_cc4 = 0;
  local_cbc = 0;
  local_cb8 = 0;
  local_cb0 = 0;
  local_cac = 0;
  local_ca4 = 0;
  local_ca0 = 0;
  local_c98 = 0;
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
  local_c08 = 0;
  local_c04 = 0;
  local_c00 = 0;
  local_bfc = 0;
  local_bb8 = 0;
  local_bc8 = 0;
  local_bbc = 0;
  local_ba0 = 0;
  local_a90 = 0;
  local_a8c = 0;
  local_a88 = 0;
  local_a70 = 0;
  uStack_a7c = 0;
  local_a84 = 0;
  local_a74 = 0;
  local_a68 = 0x101;
  local_a66 = 0;
  local_a64 = 0;
  local_a60 = 0;
  local_a00 = 0;
  local_9f8 = 0;
  local_998 = 0;
  local_988 = 0;
  local_984 = 0;
  local_980 = 0;
  local_97c = 0;
  local_978 = 0;
  local_974 = 0;
  local_970 = 0;
  local_96c = 0;
  local_968 = 0;
  local_964 = 0;
  local_98c = 0;
  local_990 = 0;
  local_1040 = PTR_vtable_0099ee68 + 0x20;
  local_960 = 0;
  uStack_950 = 0;
  local_958 = 0;
  local_940 = 0;
  local_948 = (void *)0x0;
  pvStack_930 = (void *)0x0;
  local_938 = 0;
  uStack_920 = 0;
  local_928 = 0;
  uStack_910 = 0;
  local_918 = (void *)0x0;
  local_900 = (void *)0x0;
  uStack_908 = 0;
                    /* try { // try from 0086e568 to 0086e57b has its CatchHandler @ 0086e81c */
  ::facebook::react::RNCSafeAreaViewProps::RNCSafeAreaViewProps
            ((RNCSafeAreaViewProps *)local_8f8,(PropsParserContext *)local_10a0,
             (RNCSafeAreaViewProps *)&local_1040,(RawProps *)&local_f8);
  if ((local_1c8 & 1) != 0) {
    operator_delete(local_1b8);
  }
  if ((local_1e0 & 1) != 0) {
    operator_delete(local_1d0);
  }
  if ((local_1f8 & 1) != 0) {
    operator_delete(local_1e8);
  }
  if ((local_210 & 1) != 0) {
    operator_delete(local_200);
  }
  FUN_0078917c(local_8f8,puVar5 + 8);
  if ((uStack_910 & 1) != 0) {
    operator_delete(local_900);
  }
  if ((local_928 & 1) != 0) {
    operator_delete(local_918);
  }
  if ((local_940 & 1) != 0) {
    operator_delete(pvStack_930);
  }
  if ((local_958 & 1) != 0) {
    operator_delete(local_948);
  }
  FUN_0078917c(&local_1040,puVar5 + 8);
  ::facebook::react::RawPropsParser::facebook::react::RawPropsParser::postPrepare(this_00 + 0x38);
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
                    /* try { // try from 0086e6d0 to 0086e6db has its CatchHandler @ 0086e820 */
        (*(code *)(&PTR_FUN_0098f088)[*(uint *)((long)pvVar3 + -8)])
                  (&local_1040,(void *)((long)pvVar3 + -0x38));
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
  ::facebook::jsi::Value::~Value((Value *)local_e0);
  *(undefined ***)this_00 = &PTR_FUN_00992428;
  if (local_1060 != (void *)0x0) {
    pvStack_1058 = local_1060;
    operator_delete(local_1060);
  }
  if (pvStack_1078 != (void *)0x0) {
    local_1070 = pvStack_1078;
    operator_delete(pvStack_1078);
  }
  if (local_1090 != (void *)0x0) {
    pvStack_1088 = local_1090;
    operator_delete(local_1090);
  }
  *in_x8 = this_00;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0086e824  FUN_0086e824 =====

void FUN_0086e824(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 0086e848  FUN_0086e848 =====

undefined * FUN_0086e848(void)

{
  return PTR_RNCSafeAreaViewComponentName_0099ee60;
}


// ===== 0086e854  FUN_0086e854 =====

undefined * FUN_0086e854(void)

{
  return PTR_RNCSafeAreaViewComponentName_0099ee60;
}


// ===== 0086e860  FUN_0086e860 =====

undefined8 FUN_0086e860(void)

{
  return 0x61;
}


// ===== 0086e868  FUN_0086e868 =====

void FUN_0086e868(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

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
  *puVar6 = &PTR_FUN_00992548;
                    /* try { // try from 0086e8d4 to 0086e8e3 has its CatchHandler @ 0086e9c8 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4,uVar5);
  lVar8 = puVar6[4];
  puVar6[3] = &PTR_FUN_00992678;
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
  puVar6[3] = &PTR_FUN_00992598;
                    /* try { // try from 0086e97c to 0086e987 has its CatchHandler @ 0086e9b8 */
  (**(code **)(lVar9 + 0x60))(param_2,pYVar1);
  *param_1 = pYVar1;
  param_1[1] = puVar6;
  if (*(long *)(lVar4 + 0x28) != lVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0086e9f8  FUN_0086e9f8 =====

void FUN_0086e9f8(undefined8 *param_1,long *param_2,ShadowNode *param_3,ShadowNodeFragment *param_4)

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
  *plVar8 = (long)&PTR_FUN_00992548;
                    /* try { // try from 0086ea50 to 0086ea5f has its CatchHandler @ 0086ebac */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4);
  lVar9 = plVar8[4];
  plVar8[3] = (long)&PTR_FUN_00992678;
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
  plVar8[3] = (long)&PTR_FUN_00992598;
  *(uint *)((long)plVar8 + 0x6c) =
       uVar3 & 0xfffff000 |
       uVar3 & 0x7f8 | uVar2 | (uint)((cVar4 != '\0' || cVar5 != '\0') || cVar6 != '\0') << 0xb;
  local_68 = pYVar1;
  local_60 = plVar8;
                    /* try { // try from 0086eaf0 to 0086eaff has its CatchHandler @ 0086ebc4 */
  facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::
  completeClone(pYVar1,param_3,param_4);
  local_78 = pYVar1;
  local_70 = plVar8;
  FUN_00757d00(1,plVar8 + 1);
                    /* try { // try from 0086eb10 to 0086eb1f has its CatchHandler @ 0086eb9c */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_78);
  plVar8 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar9 = FUN_00757990(0xffffffffffffffff,local_70 + 1), lVar9 == 0)) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pYVar1 = local_68;
                    /* try { // try from 0086eb5c to 0086eb67 has its CatchHandler @ 0086ebc4 */
  (**(code **)(*param_2 + 0x60))(param_2,local_68);
  *param_1 = pYVar1;
  param_1[1] = local_60;
  if (*(long *)(lVar7 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0086ebec  FUN_0086ebec =====

void FUN_0086ebec(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::appendChild
            (*param_2,param_3);
  return;
}


// ===== 0086ebf8  FUN_0086ebf8 =====

void FUN_0086ebf8(undefined8 *param_1,long param_2,PropsParserContext *param_3,long *param_4,
                 RawProps *param_5)

{
  RNCSafeAreaViewProps *this;
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
  RNCSafeAreaViewProps *pRVar12;
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
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_28RNCSafeAreaViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_20RNCSafeAreaViewPropsENS0_20BaseViewEventEmitterENS0_20RNCSafeAreaViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e8f0
         & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_28RNCSafeAreaViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_20RNCSafeAreaViewPropsENS0_20BaseViewEventEmitterENS0_20RNCSafeAreaViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e8f0
                                   ), iVar6 != 0)) {
                    /* try { // try from 0086f02c to 0086f02f has its CatchHandler @ 0086f05c */
      FUN_0086fbd4();
      __cxa_atexit(FUN_0086fb84,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_28RNCSafeAreaViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_20RNCSafeAreaViewPropsENS0_20BaseViewEventEmitterENS0_20RNCSafeAreaViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e8e8
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_28RNCSafeAreaViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_20RNCSafeAreaViewPropsENS0_20BaseViewEventEmitterENS0_20RNCSafeAreaViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e8f0
                         );
    }
    lVar11 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_28RNCSafeAreaViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_20RNCSafeAreaViewPropsENS0_20BaseViewEventEmitterENS0_20RNCSafeAreaViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e8e8
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_28RNCSafeAreaViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_20RNCSafeAreaViewPropsENS0_20BaseViewEventEmitterENS0_20RNCSafeAreaViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e8e8
    ;
    param_1[1] = lVar11;
    if (lVar11 != 0) {
      FUN_00757d00(1,lVar11 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    pRVar12 = (RNCSafeAreaViewProps *)*param_4;
    if (pRVar12 == (RNCSafeAreaViewProps *)0x0) {
      if (((*
            PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_28RNCSafeAreaViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_20RNCSafeAreaViewPropsENS0_20BaseViewEventEmitterENS0_20RNCSafeAreaViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e8f0
           & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_28RNCSafeAreaViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_20RNCSafeAreaViewPropsENS0_20BaseViewEventEmitterENS0_20RNCSafeAreaViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e8f0
                                     ), iVar6 != 0)) {
                    /* try { // try from 0086efac to 0086efaf has its CatchHandler @ 0086f074 */
        FUN_0086fbd4();
        __cxa_atexit(FUN_0086fb84,
                     PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_28RNCSafeAreaViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_20RNCSafeAreaViewPropsENS0_20BaseViewEventEmitterENS0_20RNCSafeAreaViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e8e8
                     ,&PTR_LOOP_008d5d30);
        __cxa_guard_release(
                           PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_28RNCSafeAreaViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_20RNCSafeAreaViewPropsENS0_20BaseViewEventEmitterENS0_20RNCSafeAreaViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e8f0
                           );
      }
      pRVar12 = *(RNCSafeAreaViewProps **)
                 PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_28RNCSafeAreaViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_20RNCSafeAreaViewPropsENS0_20BaseViewEventEmitterENS0_20RNCSafeAreaViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e8e8
      ;
    }
    plVar8 = (long *)operator_new(0x760);
    this = (RNCSafeAreaViewProps *)(plVar8 + 3);
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = (long)&PTR_FUN_00992760;
                    /* try { // try from 0086ecd8 to 0086eceb has its CatchHandler @ 0086f0e8 */
    facebook::react::RNCSafeAreaViewProps::RNCSafeAreaViewProps(this,param_3,pRVar12,param_5);
                    /* try { // try from 0086ecf0 to 0086ed03 has its CatchHandler @ 0086f100 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if ((((uVar7 & 1) == 0) ||
        (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar7 & 1) == 0)) ||
       (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
                enablePropsUpdateReconciliationAndroid(), (uVar7 & 1) == 0)) {
LAB_0086ed2c:
      FUN_00757d00(1,plVar8 + 1);
      if (*param_4 == 0) {
        if (((*
              PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_28RNCSafeAreaViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_20RNCSafeAreaViewPropsENS0_20BaseViewEventEmitterENS0_20RNCSafeAreaViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e8f0
             & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(
                                       PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_28RNCSafeAreaViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_20RNCSafeAreaViewPropsENS0_20BaseViewEventEmitterENS0_20RNCSafeAreaViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e8f0
                                       ), iVar6 != 0)) {
                    /* try { // try from 0086efec to 0086efef has its CatchHandler @ 0086f060 */
          FUN_0086fbd4();
          __cxa_atexit(FUN_0086fb84,
                       PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_28RNCSafeAreaViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_20RNCSafeAreaViewPropsENS0_20BaseViewEventEmitterENS0_20RNCSafeAreaViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e8e8
                       ,&PTR_LOOP_008d5d30);
          __cxa_guard_release(
                             PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_28RNCSafeAreaViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_20RNCSafeAreaViewPropsENS0_20BaseViewEventEmitterENS0_20RNCSafeAreaViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e8f0
                             );
        }
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 0086ed94 to 0086eda7 has its CatchHandler @ 0086f08c */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*(undefined8 *)
                         PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_28RNCSafeAreaViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_20RNCSafeAreaViewPropsENS0_20BaseViewEventEmitterENS0_20RNCSafeAreaViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e8e8
                   ,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
LAB_0086ede0:
          (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
        }
        else if (local_b0 != (dynamic *)0x0) {
          lVar11 = 5;
          pdVar10 = local_b0;
          goto LAB_0086ede0;
        }
        if (plVar8 != (long *)0x0) goto LAB_0086edf4;
      }
      else {
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 0086ed48 to 0086ed5b has its CatchHandler @ 0086f0b4 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*param_4,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
        }
        else {
          if (local_b0 == (dynamic *)0x0) goto LAB_0086edf4;
          lVar11 = 5;
          pdVar10 = local_b0;
        }
        (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
LAB_0086edf4:
        lVar11 = FUN_00757990(0xffffffffffffffff,plVar8 + 1);
        if (lVar11 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 0086ed10 to 0086ed1b has its CatchHandler @ 0086f088 */
      pcVar9 = (char *)(**(code **)(*(long *)this + 0x10))(this);
      iVar6 = strcmp(PTR_RNCSafeAreaViewComponentName_0099ee60,pcVar9);
      if (iVar6 != 0) goto LAB_0086ed2c;
      bVar3 = false;
    }
                    /* try { // try from 0086ee20 to 0086ee23 has its CatchHandler @ 0086f100 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar7 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 0086ee30 to 0086ee4b has its CatchHandler @ 0086f0b0 */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(plVar8 + 7));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 0086ef8c to 0086ef9b has its CatchHandler @ 0086f0a8 */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_0086f14c;
      }
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (*(int *)(plVar4 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 0086ef6c to 0086ef7b has its CatchHandler @ 0086f10c */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_0086f14c;
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
                    /* try { // try from 0086eecc to 0086eed7 has its CatchHandler @ 0086f114 */
        folly::dynamic::dynamic(local_d0,(dynamic *)(plVar4 + 8));
        local_a0 = 0;
                    /* try { // try from 0086eedc to 0086eef3 has its CatchHandler @ 0086f118 */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (this,param_3,uVar1,pcVar9,local_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 0086ef04 to 0086ef0f has its CatchHandler @ 0086f108 */
          (*(code *)(&PTR_FUN_0098f088)[local_a0])(&uStack_d1,local_d0);
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
LAB_0086f14c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0086f150  FUN_0086f150 =====

/* WARNING: Removing unreachable block (ram,0x0086f250) */
/* WARNING: Removing unreachable block (ram,0x0086f260) */
/* WARNING: Removing unreachable block (ram,0x0086f284) */
/* WARNING: Removing unreachable block (ram,0x0086f294) */

void FUN_0086f150(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  State *pSVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 local_78;
  long local_70;
  long *local_68;
  long *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  plVar3 = (long *)operator_new(0x28);
  plVar3[1] = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_00992958;
  plVar3[3] = 0;
  plVar3[4] = 0;
                    /* try { // try from 0086f1ac to 0086f1b3 has its CatchHandler @ 0086f310 */
  puVar4 = (undefined8 *)operator_new(0x50);
  local_78 = *param_4;
  local_70 = param_4[1];
  pSVar1 = (State *)(puVar4 + 3);
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_009927b0;
  if (local_70 != 0) {
    FUN_00757d00(1,local_70 + 0x10);
  }
                    /* try { // try from 0086f1f0 to 0086f1ff has its CatchHandler @ 0086f2d8 */
  local_68 = plVar3 + 3;
  local_60 = plVar3;
  facebook::react::State::State(pSVar1,&local_68,&local_78);
  if (local_70 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar3 = local_60;
  if ((local_60 != (long *)0x0) &&
     (lVar5 = FUN_00757990(0xffffffffffffffff,local_60 + 1), lVar5 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *(undefined ***)pSVar1 = &PTR_FUN_00992800;
  *param_1 = pSVar1;
  param_1[1] = puVar4;
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0086f338  FUN_0086f338 =====

/* WARNING: Removing unreachable block (ram,0x0086f40c) */
/* WARNING: Removing unreachable block (ram,0x0086f41c) */
/* WARNING: Removing unreachable block (ram,0x0086f470) */
/* WARNING: Removing unreachable block (ram,0x0086f480) */

void FUN_0086f338(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  State *pSVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 local_88;
  long *local_80;
  undefined8 local_58;
  long *local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  uVar2 = *param_4;
  plVar3 = (long *)param_4[1];
  if (plVar3 != (long *)0x0) {
    FUN_00757d00(1,plVar3 + 1);
  }
                    /* try { // try from 0086f37c to 0086f387 has its CatchHandler @ 0086f4f8 */
  facebook::react::ShadowNodeFamily::getMostRecentState();
                    /* try { // try from 0086f38c to 0086f393 has its CatchHandler @ 0086f4e8 */
  puVar5 = (undefined8 *)operator_new(0x50);
  pSVar1 = (State *)(puVar5 + 3);
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_009929b8;
                    /* try { // try from 0086f3b8 to 0086f3c7 has its CatchHandler @ 0086f4c0 */
  local_58 = uVar2;
  local_50 = plVar3;
  facebook::react::State::State(pSVar1,&local_58,local_88);
  plVar3 = local_50;
  if ((local_50 != (long *)0x0) &&
     (lVar6 = FUN_00757990(0xffffffffffffffff,local_50 + 1), lVar6 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *(undefined ***)pSVar1 = &PTR_FUN_00992800;
  *param_1 = pSVar1;
  param_1[1] = puVar5;
  if ((local_80 != (long *)0x0) &&
     (lVar6 = FUN_00757990(0xffffffffffffffff,local_80 + 1), lVar6 == 0)) {
    (**(code **)(*local_80 + 0x10))(local_80);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0086f520  FUN_0086f520 =====

void FUN_0086f520(undefined8 *param_1,long param_2,long param_3)

{
  ShadowNodeFamily *pSVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ShadowNodeFamily *local_88;
  long *local_80;
  undefined8 local_78;
  long *local_70;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  long *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_0078a610(&local_58,&local_68,param_3 + 8,param_3 + 4);
                    /* try { // try from 0086f564 to 0086f56b has its CatchHandler @ 0086f76c */
  plVar6 = (long *)operator_new(0x68);
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&PTR_FUN_00992a08;
                    /* try { // try from 0086f584 to 0086f58f has its CatchHandler @ 0086f754 */
  local_78 = FUN_008707fc(plVar6 + 3,&local_58,param_2 + 8);
  local_70 = plVar6;
  if ((local_50 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,local_50 + 1), lVar7 == 0)) {
    (**(code **)(*local_50 + 0x10))(local_50);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 0086f5c4 to 0086f5cb has its CatchHandler @ 0086f744 */
  plVar6 = (long *)operator_new(0x1a0);
  puVar3 = PTR_DAT_0099dca0;
  pSVar1 = (ShadowNodeFamily *)(plVar6 + 4);
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)(puVar3 + 0x10);
  local_58 = local_78;
  local_50 = local_70;
  if (local_70 != (long *)0x0) {
    FUN_00757d00(1,local_70 + 1);
  }
  local_68 = *(undefined8 *)(param_2 + 8);
  local_60 = *(long *)(param_2 + 0x10);
  if (local_60 != 0) {
    FUN_00757d00(1,local_60 + 0x10);
  }
                    /* try { // try from 0086f618 to 0086f62f has its CatchHandler @ 0086f714 */
  facebook::react::ShadowNodeFamily::ShadowNodeFamily(pSVar1,param_3,&local_58,&local_68,param_2);
  if (local_60 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar5 = local_50;
  if ((local_50 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,local_50 + 1), lVar7 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  uVar4 = local_78;
  *param_1 = pSVar1;
  param_1[1] = plVar6;
  local_88 = pSVar1;
  local_80 = plVar6;
  FUN_00757d00(1,plVar6 + 2);
                    /* try { // try from 0086f684 to 0086f68f has its CatchHandler @ 0086f6f4 */
  facebook::react::EventEmitter::facebook::react::EventEmitter::setShadowNodeFamily(uVar4,&local_88)
  ;
  if (local_80 != (long *)0x0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar6 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,local_70 + 1), lVar7 == 0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0086f794  FUN_0086f794 =====

void FUN_0086f794(undefined8 param_1,undefined8 param_2)

{
  facebook::react::RNCSafeAreaViewShadowNode::facebook::react::RNCSafeAreaViewShadowNode::
  adjustLayoutWithState(param_2);
  return;
}


// ===== 0086f79c  FUN_0086f79c =====

void FUN_0086f79c(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 0086f7c0  FUN_0086f7c0 =====

void FUN_0086f7c0(void)

{
  return;
}


// ===== 0086f7c4  FUN_0086f7c4 =====

void FUN_0086f7c4(long param_1)

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


// ===== 0086f814  FUN_0086f814 =====

void FUN_0086f814(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00992548;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0086f824  FUN_0086f824 =====

void FUN_0086f824(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00992548;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0086f854  FUN_0086f854 =====

void FUN_0086f854(long param_1)

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


// ===== 0086f918  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0086f91c  FUN_0086f91c =====

void FUN_0086f91c(long *param_1)

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


// ===== 0086f9dc  FUN_0086f9dc =====

void FUN_0086f9dc(long param_1)

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


// ===== 0086fa44  FUN_0086fa44 =====

bool FUN_0086fa44(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 0086fa5c  FUN_0086fa5c =====

bool FUN_0086fa5c(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 0086fa74  FUN_0086fa74 =====

void FUN_0086fa74(long *param_1)

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


// ===== 0086fb34  FUN_0086fb34 =====

void FUN_0086fb34(long param_1)

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


// ===== 0086fb84  FUN_0086fb84 =====

void FUN_0086fb84(long param_1)

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


// ===== 0086fbd4  FUN_0086fbd4 =====

void FUN_0086fbd4(void)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x760);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_00992710;
  memset(__s,0,0x748);
                    /* try { // try from 0086fc10 to 0086fc23 has its CatchHandler @ 0086fcb0 */
  FUN_00788b10(__s,PTR_VTT_0099ee70 + 0x10);
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
  puVar1 = PTR_vtable_0099ee68;
  *(undefined4 *)(puVar2 + 0xd9) = 0;
  *(undefined2 *)((long)puVar2 + 0x6cc) = 0;
  *(undefined4 *)(puVar2 + 0xdf) = 0;
  puVar2[3] = puVar1 + 0x20;
  puVar2[0xeb] = 0;
  puVar2[0xea] = 0;
  puVar2[0xe9] = 0;
  puVar2[0xe8] = 0;
  puVar2[0xe7] = 0;
  puVar2[0xe6] = 0;
  puVar2[0xe5] = 0;
  puVar2[0xe4] = 0;
  puVar2[0xe3] = 0;
  puVar2[0xe2] = 0;
  puVar1 = 
  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_28RNCSafeAreaViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_20RNCSafeAreaViewPropsENS0_20BaseViewEventEmitterENS0_20RNCSafeAreaViewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e8e8
  ;
  puVar2[0xe1] = 0;
  puVar2[0xe0] = 0;
  *(undefined8 **)puVar1 = __s;
  *(undefined8 **)(puVar1 + 8) = puVar2;
  return;
}


// ===== 0086fccc  FUN_0086fccc =====

void FUN_0086fccc(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00992710;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0086fcdc  FUN_0086fcdc =====

void FUN_0086fcdc(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00992710;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0086fd0c  FUN_0086fd0c =====

/* WARNING: Type propagation algorithm not settling */

void FUN_0086fd0c(long param_1)

{
  byte bVar1;
  
  if ((*(byte *)(param_1 + 0x748) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x730);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x758));
    bVar1 = *(byte *)(param_1 + 0x730);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x718);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x740));
    bVar1 = *(byte *)(param_1 + 0x718);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x700);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x728));
    bVar1 = *(byte *)(param_1 + 0x700);
  }
  if ((bVar1 & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x710));
  }
  FUN_0078917c(param_1 + 0x18,PTR_VTT_0099ee70 + 8);
  return;
}


// ===== 0086fd94  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0086fd98  FUN_0086fd98 =====

void FUN_0086fd98(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00992760;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0086fda8  FUN_0086fda8 =====

void FUN_0086fda8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00992760;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0086fdd8  FUN_0086fdd8 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_0086fdd8(long param_1)

{
  byte bVar1;
  
  if ((*(byte *)(param_1 + 0x748) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x730);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x758));
    bVar1 = *(byte *)(param_1 + 0x730);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x718);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x740));
    bVar1 = *(byte *)(param_1 + 0x718);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x700);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x728));
    bVar1 = *(byte *)(param_1 + 0x700);
  }
  if ((bVar1 & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x710));
  }
  FUN_0078917c(param_1 + 0x18,PTR_VTT_0099ee70 + 8);
  return;
}


// ===== 0086fe60  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0086fe64  FUN_0086fe64 =====

void FUN_0086fe64(long param_1)

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


// ===== 0086feb4  FUN_0086feb4 =====

void FUN_0086feb4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009927b0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0086fec4  FUN_0086fec4 =====

void FUN_0086fec4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009927b0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0086fef4  FUN_0086fef4 =====

void FUN_0086fef4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0086fefc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 0086ff00  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0086ff04  FUN_0086ff04 =====

void FUN_0086ff04(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[4];
  *param_1 = &PTR_FUN_0098f6c8;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[2] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


// ===== 0086ff6c  FUN_0086ff6c =====

void FUN_0086ff6c(void)

{
  facebook::react::RNCSafeAreaViewState::getDynamic();
  return;
}


// ===== 0086ff74  <EXTERNAL>::facebook::react::MapBufferBuilder::facebook::react::MapBufferBuilder::EMPTY =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall facebook::react::MapBufferBuilder::facebook::react::MapBufferBuilder::EMPTY(void)

{
  (*(code *)PTR_EMPTY_009a0138)();
  return;
}


// ===== 0086ff78  FUN_0086ff78 =====

void FUN_0086ff78(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}


// ===== 0086ff80  FUN_0086ff80 =====

void FUN_0086ff80(long param_1,dynamic *param_2)

{
  long lVar1;
  undefined8 uVar2;
  int *piVar3;
  long *plVar4;
  long *plVar5;
  undefined ***pppuVar6;
  undefined ****ppppuVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  dynamic adStack_130 [48];
  undefined **local_100;
  float local_f8;
  float fStack_f4;
  float local_f0;
  float fStack_ec;
  undefined ***local_e0;
  undefined **local_d0 [4];
  undefined ***local_b0 [2];
  long local_a0;
  long *local_98;
  long local_90 [4];
  long *local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  folly::dynamic::dynamic(adStack_130,param_2);
                    /* try { // try from 0086ffb8 to 0087004b has its CatchHandler @ 0087035c */
  uVar2 = folly::dynamic::operator[](adStack_130,"insets","");
  piVar3 = (int *)folly::dynamic::at(uVar2,&DAT_0036b8e4,&DAT_0036b8e8);
  if (*piVar3 == 3) {
    dVar10 = *(double *)(piVar3 + 2);
    piVar3 = (int *)folly::dynamic::at(uVar2,&DAT_0036d96a,&DAT_0036d96d);
    if (*piVar3 == 3) {
      dVar11 = *(double *)(piVar3 + 2);
      piVar3 = (int *)folly::dynamic::at(uVar2,"right","");
      if (*piVar3 == 3) {
        dVar12 = *(double *)(piVar3 + 2);
        piVar3 = (int *)folly::dynamic::at(uVar2,"bottom","");
        if (*piVar3 == 3) {
          local_100 = &PTR_FUN_009928d8;
          local_f8 = (float)dVar10;
          fStack_f4 = (float)dVar11;
          local_e0 = &local_100;
          local_f0 = (float)dVar12;
          fStack_ec = (float)*(double *)(piVar3 + 2);
          if ((*(long *)(param_1 + 0x10) != 0) &&
             (plVar4 = (long *)std::__ndk1::__shared_weak_count::lock(), plVar4 != (long *)0x0)) {
            lVar9 = *(long *)(param_1 + 8);
            if (lVar9 != 0) {
              local_a0 = lVar9;
              local_98 = plVar4;
              FUN_00757d00(1,plVar4 + 1);
              local_b0[0] = local_e0;
              if (local_e0 != (undefined ***)0x0) {
                if (local_e0 == &local_100) {
                  local_b0[0] = local_d0;
                  (*(code *)local_100[3])(&local_100,local_d0);
                }
                else {
                    /* try { // try from 008700d8 to 008700ff has its CatchHandler @ 008702c8 */
                  local_b0[0] = (undefined ***)(*(code *)(*local_e0)[2])();
                }
              }
              local_70 = (long *)0x0;
                    /* try { // try from 00870104 to 0087010b has its CatchHandler @ 008702e0 */
              plVar5 = (long *)operator_new(0x40);
              *plVar5 = (long)&PTR_FUN_00992858;
              if (local_b0[0] == (undefined ***)0x0) {
                ppppuVar7 = (undefined ****)(plVar5 + 6);
LAB_00870140:
                *ppppuVar7 = (undefined ***)0x0;
              }
              else {
                if (local_b0[0] != local_d0) {
                  ppppuVar7 = local_b0;
                  plVar5[6] = (long)local_b0[0];
                  goto LAB_00870140;
                }
                plVar5[6] = (long)(plVar5 + 2);
                    /* try { // try from 00870154 to 00870163 has its CatchHandler @ 008702c4 */
                (*(code *)local_d0[0][3])(local_d0);
              }
              local_70 = plVar5;
              if (local_b0[0] == local_d0) {
                lVar8 = 4;
                pppuVar6 = local_d0;
LAB_0087018c:
                (*(code *)(*pppuVar6)[lVar8])(pppuVar6);
              }
              else if (local_b0[0] != (undefined ***)0x0) {
                lVar8 = 5;
                pppuVar6 = local_b0[0];
                goto LAB_0087018c;
              }
                    /* try { // try from 0087019c to 008701ab has its CatchHandler @ 008702d0 */
              facebook::react::ShadowNodeFamily::facebook::react::ShadowNodeFamily::dispatchRawState
                        (lVar9,&local_a0,0);
              plVar5 = local_90;
              if (local_70 == plVar5) {
                lVar9 = 4;
LAB_008701d4:
                (**(code **)(*plVar5 + lVar9 * 8))();
              }
              else if (local_70 != (long *)0x0) {
                lVar9 = 5;
                plVar5 = local_70;
                goto LAB_008701d4;
              }
              plVar5 = local_98;
              if ((local_98 != (long *)0x0) &&
                 (lVar9 = FUN_00757990(0xffffffffffffffff,local_98 + 1), lVar9 == 0)) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
                std::__ndk1::__shared_weak_count::__release_weak();
              }
              if (plVar4 == (long *)0x0) goto LAB_00870240;
            }
            lVar9 = FUN_00757990(0xffffffffffffffff,plVar4 + 1);
            if (lVar9 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
              std::__ndk1::__shared_weak_count::__release_weak();
            }
          }
LAB_00870240:
          if (local_e0 == &local_100) {
            lVar9 = 4;
            pppuVar6 = &local_100;
LAB_00870260:
            (*(code *)(*pppuVar6)[lVar9])();
          }
          else if (local_e0 != (undefined ***)0x0) {
            lVar9 = 5;
            pppuVar6 = local_e0;
            goto LAB_00870260;
          }
          folly::dynamic::folly::dynamic::destroy(adStack_130);
          if (*(long *)(lVar1 + 0x28) == local_58) {
            return;
          }
          goto LAB_00870380;
        }
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 008702b4 to 008702c3 has its CatchHandler @ 0087035c */
                    /* WARNING: Subroutine does not return */
    FUN_00789f8c(*(undefined8 *)PTR_name_0099edf8);
  }
LAB_00870380:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00870384  FUN_00870384 =====

void FUN_00870384(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)param_1[6];
  plVar2 = param_1 + 2;
  *param_1 = &PTR_FUN_00992858;
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return;
    }
    lVar3 = 5;
    plVar2 = plVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x008703c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + lVar3 * 8))();
  return;
}


// ===== 008703c8  FUN_008703c8 =====

void FUN_008703c8(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)param_1[6];
  plVar2 = param_1 + 2;
  *param_1 = &PTR_FUN_00992858;
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_00870414;
    lVar3 = 5;
    plVar2 = plVar1;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_00870414:
  operator_delete(param_1);
  return;
}


// ===== 00870424  FUN_00870424 =====

undefined8 * FUN_00870424(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  
  puVar1 = (undefined8 *)operator_new(0x40);
  plVar2 = *(long **)(param_1 + 0x30);
  *puVar1 = &PTR_FUN_00992858;
  if (plVar2 != (long *)0x0) {
    if (plVar2 == (long *)(param_1 + 0x10)) {
      lVar3 = *plVar2;
      puVar1[6] = puVar1 + 2;
      (**(code **)(lVar3 + 0x18))();
      return puVar1;
    }
                    /* try { // try from 0087046c to 00870487 has its CatchHandler @ 00870498 */
    plVar2 = (long *)(**(code **)(*plVar2 + 0x10))();
  }
  puVar1[6] = plVar2;
  return puVar1;
}


// ===== 008704ac  FUN_008704ac =====

void FUN_008704ac(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x30);
  *param_2 = &PTR_FUN_00992858;
  if (plVar2 == (long *)0x0) {
    param_2[6] = 0;
  }
  else {
    if (plVar2 == (long *)(param_1 + 0x10)) {
      param_2[6] = param_2 + 2;
                    /* WARNING: Could not recover jumptable at 0x0087051c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x30) + 0x18))();
      return;
    }
    uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
    param_2[6] = uVar1;
  }
  return;
}


// ===== 00870520  FUN_00870520 =====

void FUN_00870520(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = *(long **)(param_1 + 0x30);
  plVar2 = (long *)(param_1 + 0x10);
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return;
    }
    lVar3 = 5;
    plVar2 = plVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00870550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + lVar3 * 8))();
  return;
}


// ===== 00870558  FUN_00870558 =====

void FUN_00870558(void *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = *(long **)((long)param_1 + 0x30);
  plVar2 = (long *)((long)param_1 + 0x10);
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_00870598;
    lVar3 = 5;
    plVar2 = plVar1;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_00870598:
  operator_delete(param_1);
  return;
}


// ===== 008705a8  FUN_008705a8 =====

void FUN_008705a8(long param_1,undefined8 *param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x30);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x008705bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))(plVar1,*param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00785754();
}


// ===== 008705cc  FUN_008705cc =====

long FUN_008705cc(long param_1,long param_2)

{
  param_1 = param_1 + 0x10;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_0099e8f8) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 008705e8  FUN_008705e8 =====

undefined * FUN_008705e8(void)

{
  return PTR_typeinfo_0099e900;
}


// ===== 008705f4  FUN_008705f4 =====

void FUN_008705f4(void)

{
  return;
}


// ===== 008705f8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008705fc  FUN_008705fc =====

void FUN_008705fc(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_009928d8;
  puVar1[2] = uVar3;
  puVar1[1] = uVar2;
  return;
}


// ===== 00870634  FUN_00870634 =====

void FUN_00870634(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_009928d8;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}


// ===== 0087064c  FUN_0087064c =====

void FUN_0087064c(void)

{
  return;
}


// ===== 00870650  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00870654  FUN_00870654 =====

void FUN_00870654(long *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 8);
  *puVar1 = &PTR_FUN_00992958;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[4] = uVar3;
  puVar1[3] = uVar2;
  *param_1 = (long)(puVar1 + 3);
  param_1[1] = (long)puVar1;
  return;
}


// ===== 0087069c  FUN_0087069c =====

long FUN_0087069c(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_0099e908) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 008706b8  FUN_008706b8 =====

undefined * FUN_008706b8(void)

{
  return PTR_typeinfo_0099e910;
}


// ===== 008706c4  FUN_008706c4 =====

void FUN_008706c4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00992958;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008706d4  FUN_008706d4 =====

void FUN_008706d4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00992958;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00870704  FUN_00870704 =====

void FUN_00870704(void)

{
  return;
}


// ===== 00870708  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0087070c  FUN_0087070c =====

void FUN_0087070c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009929b8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0087071c  FUN_0087071c =====

void FUN_0087071c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009929b8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0087074c  FUN_0087074c =====

void FUN_0087074c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00870754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00870758  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0087075c  FUN_0087075c =====

void FUN_0087075c(long param_1)

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


// ===== 008707ac  FUN_008707ac =====

void FUN_008707ac(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00992a08;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008707bc  FUN_008707bc =====

void FUN_008707bc(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00992a08;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008707ec  FUN_008707ec =====

void FUN_008707ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x008707f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 008707f8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008707fc  FUN_008707fc =====

EventEmitter * FUN_008707fc(EventEmitter *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
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
                    /* try { // try from 00870844 to 00870853 has its CatchHandler @ 00870914 */
  facebook::react::EventEmitter::EventEmitter(param_1,&local_50,&local_60);
  *(undefined ***)param_1 = &PTR_FUN_0097ff10;
                    /* try { // try from 00870864 to 0087086b has its CatchHandler @ 00870904 */
  plVar3 = (long *)operator_new(0x58);
  puVar2 = PTR_DAT_0099dc90;
  plVar3[1] = 0;
  plVar3[2] = 0;
  *plVar3 = (long)(puVar2 + 0x10);
  plVar3[6] = 0;
  plVar3[5] = 0;
  plVar3[8] = 0;
  plVar3[7] = 0;
  *(undefined8 *)((long)plVar3 + 0x4c) = 0;
  *(undefined8 *)((long)plVar3 + 0x44) = 0;
  plVar3[4] = 0;
  plVar3[3] = 0;
  *(long **)(param_1 + 0x40) = plVar3 + 3;
  *(long **)(param_1 + 0x48) = plVar3;
  if (local_58 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar3 = plStack_48;
  if ((plStack_48 != (long *)0x0) &&
     (lVar4 = FUN_00757990(0xffffffffffffffff,plStack_48 + 1), lVar4 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00870948  facebook::react::concreteComponentDescriptorConstructor<facebook::react::RNSFullWindowOverlayComponentDescriptor> =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::__ndk1::unique_ptr<facebook::react::ComponentDescriptor const,
   std::__ndk1::default_delete<facebook::react::ComponentDescriptor const> >
   facebook::react::concreteComponentDescriptorConstructor<facebook::react::RNSFullWindowOverlayComponentDescriptor>(facebook::react::ComponentDescriptorParameters
   const&) */

void __thiscall
facebook::react::
concreteComponentDescriptorConstructor<facebook::react::RNSFullWindowOverlayComponentDescriptor>
          (react *this,ComponentDescriptorParameters *param_1)

{
  byte bVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  ComponentDescriptor *this_00;
  long lVar6;
  undefined8 *in_x8;
  long *plVar7;
  void *pvVar8;
  undefined4 local_fe0 [2];
  undefined8 *local_fd8;
  void *local_fd0;
  void *pvStack_fc8;
  undefined8 local_fc0;
  void *pvStack_fb8;
  void *local_fb0;
  undefined8 uStack_fa8;
  void *local_fa0;
  void *pvStack_f98;
  undefined8 uStack_f90;
  undefined8 uStack_f88;
  undefined *local_f80;
  undefined8 uStack_f78;
  undefined8 local_f70;
  undefined8 uStack_f68;
  undefined4 local_f60 [2];
  undefined8 local_f58;
  undefined8 uStack_f50;
  undefined8 local_f48;
  undefined8 uStack_f40;
  undefined4 local_f38;
  undefined4 local_f30;
  undefined1 local_f2c;
  undefined8 local_f2b;
  undefined8 local_f23;
  undefined8 uStack_f1b;
  undefined8 local_f13;
  undefined8 uStack_f0b;
  undefined8 local_f03;
  undefined8 uStack_efb;
  undefined8 local_ef3;
  undefined6 uStack_eeb;
  undefined2 uStack_ee5;
  undefined6 uStack_ee3;
  undefined8 uStack_edd;
  undefined4 local_ed5;
  undefined8 local_ed1;
  undefined1 local_ec9;
  undefined1 uStack_ec8;
  undefined7 uStack_ec7;
  undefined8 uStack_ec0;
  undefined8 uStack_eb8;
  undefined8 uStack_eb0;
  undefined8 local_ea8;
  undefined8 uStack_ea0;
  undefined8 local_e98;
  undefined8 uStack_e90;
  undefined8 local_e88;
  undefined8 uStack_e80;
  undefined8 local_e78;
  undefined8 uStack_e70;
  undefined8 uStack_e68;
  undefined8 local_e60;
  undefined8 local_e58;
  undefined8 uStack_e50;
  undefined8 local_e48;
  undefined4 uStack_e40;
  undefined4 uStack_e3c;
  undefined4 uStack_e38;
  undefined4 uStack_e34;
  undefined4 uStack_e30;
  undefined4 uStack_e2c;
  undefined8 local_e28;
  undefined8 uStack_e20;
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
  undefined4 local_db8;
  undefined1 local_db4;
  undefined4 local_db0;
  undefined1 local_dac;
  undefined4 local_da8;
  undefined1 local_da4;
  undefined4 local_da0;
  undefined1 local_d9c;
  undefined1 local_d98;
  undefined1 local_d94;
  undefined1 local_d88;
  undefined8 local_d80;
  undefined8 uStack_d78;
  undefined8 uStack_d70;
  undefined8 uStack_d68;
  undefined8 local_d60;
  undefined8 uStack_d58;
  undefined8 uStack_d50;
  undefined1 uStack_d48;
  undefined7 local_d47;
  undefined1 uStack_d40;
  undefined8 uStack_d3f;
  undefined8 local_d34;
  undefined8 uStack_d2c;
  undefined8 uStack_d24;
  undefined8 uStack_d1c;
  undefined8 local_d14;
  undefined8 uStack_d0c;
  undefined8 uStack_d04;
  undefined8 uStack_cfc;
  undefined8 local_cf4;
  undefined8 uStack_cec;
  undefined8 uStack_ce4;
  undefined5 uStack_cdc;
  undefined3 local_cd7;
  undefined5 uStack_cd4;
  undefined1 local_ccc;
  undefined1 local_cc8;
  undefined1 local_cc4;
  undefined1 local_cc0;
  undefined1 local_cbc;
  undefined1 local_cb8;
  undefined1 local_ca0;
  undefined8 local_c98;
  undefined8 uStack_c90;
  undefined8 local_c88;
  undefined4 local_c80;
  undefined1 local_c7c;
  undefined4 local_c7b;
  undefined1 local_c77;
  undefined1 local_c76;
  undefined8 local_c70;
  undefined8 uStack_c68;
  undefined8 uStack_c60;
  undefined8 uStack_c58;
  undefined8 local_c50;
  undefined7 uStack_c48;
  undefined4 uStack_c41;
  undefined8 local_c3c;
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
  undefined1 local_bf0;
  undefined1 local_bec;
  undefined1 local_be4;
  undefined1 local_be0;
  undefined1 local_bd8;
  undefined1 local_bd4;
  undefined1 local_bcc;
  undefined1 local_bc8;
  undefined1 local_bc0;
  undefined1 local_bbc;
  undefined1 local_bb4;
  undefined1 local_bb0;
  undefined1 local_ba8;
  undefined1 local_ba4;
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
  undefined1 local_b58;
  undefined1 local_b54;
  undefined1 local_b50;
  undefined1 local_b4c;
  undefined1 local_b48;
  undefined1 local_b44;
  undefined1 local_b40;
  undefined1 local_b3c;
  undefined8 local_b38;
  undefined8 uStack_b30;
  undefined8 local_b28;
  undefined8 uStack_b20;
  undefined8 uStack_b18;
  undefined8 uStack_b10;
  undefined2 local_b08;
  undefined8 local_b04;
  undefined1 local_afc;
  undefined8 local_af8;
  undefined8 local_af0;
  undefined8 uStack_ae8;
  undefined1 local_ae0;
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
  undefined8 uStack_a48;
  undefined8 uStack_a40;
  undefined8 local_a38;
  undefined8 uStack_a30;
  undefined8 local_a28;
  undefined8 uStack_a20;
  undefined8 local_a18;
  undefined8 uStack_a10;
  undefined8 local_a08;
  undefined8 uStack_a00;
  undefined8 local_9f8;
  undefined8 uStack_9f0;
  undefined8 local_9e8;
  undefined6 uStack_9e0;
  undefined2 uStack_9da;
  undefined6 uStack_9d8;
  undefined1 local_9d0;
  undefined1 local_9cc;
  undefined1 local_9c8;
  undefined8 local_9c4;
  undefined8 uStack_9bc;
  undefined1 local_9b4;
  undefined8 local_9b0;
  undefined2 local_9a8;
  undefined1 local_9a6;
  undefined4 local_9a4;
  undefined1 local_9a0;
  undefined1 local_940;
  undefined1 local_938;
  undefined1 local_8d8;
  undefined4 local_8d0;
  undefined2 local_8cc;
  undefined1 local_8c8;
  undefined1 local_8c4;
  undefined1 local_8c0;
  undefined1 local_8bc;
  undefined1 local_8b8;
  undefined1 local_8b4;
  undefined1 local_8b0;
  undefined1 local_8ac;
  undefined1 local_8a8;
  undefined1 local_8a4;
  undefined1 local_8a0;
  undefined4 local_898 [2];
  undefined8 local_890;
  undefined8 uStack_888;
  undefined8 local_880;
  undefined8 local_878;
  undefined8 uStack_870;
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
  this_00 = (ComponentDescriptor *)operator_new(0x88);
  pvStack_fb8 = (void *)0x0;
  local_fc0 = 0;
  uStack_fa8 = 0;
  local_fb0 = (void *)0x0;
  pvStack_f98 = (void *)0x0;
  local_fa0 = (void *)0x0;
  uStack_f88 = 0;
  uStack_f90 = 0;
  pvStack_fc8 = (void *)0x0;
  local_fd0 = (void *)0x0;
                    /* try { // try from 00870998 to 008709a3 has its CatchHandler @ 00870fd4 */
  ::facebook::react::ComponentDescriptor::ComponentDescriptor
            (this_00,(ComponentDescriptorParameters *)this,(RawPropsParser *)&local_fd0);
  local_f8 = 0;
  *(undefined ***)this_00 = &PTR_FUN_00992b00;
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
                    /* try { // try from 00870a14 to 00870a1f has its CatchHandler @ 00871004 */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1b0);
  local_100 = CONCAT44(local_100._4_4_,0x3f800000);
  local_fe0[0] = 0xffffffff;
  uStack_108 = 0;
  local_110 = (void *)0x0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_fd8 = &local_1b0;
  ::facebook::react::RawProps::facebook::react::RawProps::parse(&local_f8,this_00 + 0x38);
  memset(local_f60,0,0x6c8);
  puVar5 = PTR_VTT_0099ee88;
  local_898[0] = 5;
  local_880 = 0;
  local_f80 = *(undefined **)(PTR_VTT_0099ee88 + 0x20);
  local_f60[0] = 5;
  uStack_f68 = 0;
  local_f70 = 0;
  local_878 = 0;
  uStack_f78 = 0;
  uStack_870 = 0x3f800000;
  uStack_888 = 0;
  local_890 = 0;
  uStack_f50 = 0;
  local_f58 = 0;
  uStack_f40 = 0;
  local_f48 = 0;
  local_f38 = 0x3f800000;
  folly::dynamic::folly::dynamic::destroy(local_898);
  local_f2c = 0;
  local_ed1 = 0;
  uStack_9f0 = _UNK_00488920;
  local_9f8 = _DAT_00488918;
  local_f2b = _s__00375408;
  uStack_ae8 = _UNK_00371598;
  local_af0 = _DAT_00371590;
  uStack_a00 = _UNK_00488910;
  local_a08 = _DAT_00488908;
  local_e14 = 0;
  uStack_a10 = _UNK_00488900;
  local_a18 = _DAT_004888f8;
  uStack_a20 = _UNK_004888f0;
  local_a28 = _DAT_004888e8;
  uStack_9d8 = 0;
  local_e0c = 0;
  uStack_e40 = 0;
  local_e48 = 0;
  uStack_e2c = 0;
  uStack_e50 = 0;
  local_e58 = 0;
  uStack_c90 = 0;
  local_c98 = 0;
  local_f30 = 0x10410710;
  local_c7b = 0;
  local_ed5 = 0x40004;
  local_c76 = 0x23;
  uStack_e34 = 0;
  uStack_e30 = 0;
  uStack_e3c = 0;
  uStack_e38 = 0;
  uStack_e20 = 0;
  local_e28 = 0;
  local_c3c = 0x3f800000;
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
  local_db8 = 0x7fc00000;
  local_db0 = 0x7fc00000;
  local_da8 = 0x7fc00000;
  local_da0 = 0x7fc00000;
  uStack_b20 = 0;
  local_b28 = 0;
  uStack_b10 = 0;
  uStack_b18 = 0;
  uStack_b30 = 0;
  local_b38 = 0;
  uStack_d3f = 0;
  uStack_d40 = 0;
  local_b04 = 0;
  uStack_d2c = 0;
  local_d34 = 0;
  uStack_d1c = 0;
  uStack_d24 = 0;
  uStack_d0c = 0;
  local_d14 = 0;
  uStack_cfc = 0;
  uStack_d04 = 0;
  uStack_cec = 0;
  local_cf4 = 0;
  uStack_cdc = 0;
  uStack_ce4 = 0;
  local_cd7 = 0;
  uStack_cd4 = 0;
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
  uStack_a40 = 0;
  uStack_a48 = 0;
  uStack_a30 = 0;
  local_a38 = 0;
  uStack_9e0 = 0;
  uStack_9da = 0;
  local_9e8 = 0;
  uStack_ec7 = 0;
  uStack_f1b = 0;
  local_f23 = 0;
  uStack_f0b = 0;
  local_f13 = 0;
  uStack_efb = 0;
  local_f03 = 0;
  uStack_eeb = 0;
  local_ef3 = 0;
  uStack_edd = 0;
  uStack_ee5 = 0;
  uStack_ee3 = 0;
  local_ec9 = 0;
  uStack_ec8 = 0;
  uStack_eb8 = 0;
  uStack_ec0 = 0;
  local_ea8 = 0;
  uStack_eb0 = 0;
  local_e98 = 0;
  uStack_ea0 = 0;
  local_e88 = 0;
  uStack_e90 = 0;
  local_e78 = 0;
  uStack_e80 = 0;
  uStack_e68 = 0;
  uStack_e70 = 0;
  local_e60 = 0;
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
  local_db4 = 0;
  local_dac = 0;
  local_da4 = 0;
  local_d9c = 0;
  local_d98 = 0;
  local_d94 = 0;
  local_d88 = 0;
  local_ccc = 0;
  local_cc8 = 0;
  local_cc4 = 0;
  local_cc0 = 0;
  local_cbc = 0;
  local_cb8 = 0;
  local_ca0 = 0;
  uStack_d78 = 0;
  local_d80 = 0;
  uStack_d68 = 0;
  uStack_d70 = 0;
  uStack_d58 = 0;
  local_d60 = 0;
  uStack_d48 = 0;
  local_d47 = 0;
  uStack_d50 = 0;
  local_c88 = 0;
  local_c80 = 0;
  local_c7c = 1;
  local_c77 = 0;
  uStack_c68 = 0;
  local_c70 = 0;
  uStack_c58 = 0;
  uStack_c60 = 0;
  uStack_c48 = 0;
  uStack_c41 = 0;
  local_c50 = 0;
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
  local_bf0 = 0;
  local_bec = 0;
  local_be4 = 0;
  local_be0 = 0;
  local_bd8 = 0;
  local_bd4 = 0;
  local_bcc = 0;
  local_bc8 = 0;
  local_bc0 = 0;
  local_bbc = 0;
  local_bb4 = 0;
  local_bb0 = 0;
  local_ba8 = 0;
  local_ba4 = 0;
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
  local_b58 = 0;
  local_b54 = 0;
  local_b50 = 0;
  local_b4c = 0;
  local_b48 = 0;
  local_b44 = 0;
  local_b40 = 0;
  local_b3c = 0;
  local_af8 = 0;
  local_b08 = 0;
  local_afc = 0;
  local_ae0 = 0;
  local_9d0 = 0;
  local_9cc = 0;
  local_9c8 = 0;
  local_9b0 = 0;
  uStack_9bc = 0;
  local_9c4 = 0;
  local_9b4 = 0;
  local_9a8 = 0x101;
  local_9a6 = 0;
  local_9a4 = 0;
  local_9a0 = 0;
  local_940 = 0;
  local_938 = 0;
  local_8d8 = 0;
  local_8c8 = 0;
  local_8c4 = 0;
  local_8c0 = 0;
  local_8bc = 0;
  local_8b8 = 0;
  local_8b4 = 0;
  local_8b0 = 0;
  local_8ac = 0;
  local_8a8 = 0;
  local_8a4 = 0;
  local_8cc = 0;
  local_8d0 = 0;
  local_f80 = PTR_vtable_0099ee80 + 0x20;
  local_8a0 = 1;
                    /* try { // try from 00870e0c to 00870e1f has its CatchHandler @ 00871004 */
  ::facebook::react::RNSFullWindowOverlayProps::RNSFullWindowOverlayProps
            ((RNSFullWindowOverlayProps *)local_898,(PropsParserContext *)local_fe0,
             (RNSFullWindowOverlayProps *)&local_f80,(RawProps *)&local_f8);
  FUN_0078917c(local_898,puVar5 + 8);
  FUN_0078917c(&local_f80,puVar5 + 8);
  ::facebook::react::RawPropsParser::facebook::react::RawPropsParser::postPrepare(this_00 + 0x38);
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
                    /* try { // try from 00870f24 to 00870f2f has its CatchHandler @ 00871008 */
        (*(code *)(&PTR_FUN_0098f088)[*(uint *)((long)pvVar3 + -8)])
                  (&local_f80,(void *)((long)pvVar3 + -0x38));
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
  ::facebook::jsi::Value::~Value((Value *)local_e0);
  *(undefined ***)this_00 = &PTR_FUN_00992a58;
  if (local_fa0 != (void *)0x0) {
    pvStack_f98 = local_fa0;
    operator_delete(local_fa0);
  }
  if (pvStack_fb8 != (void *)0x0) {
    local_fb0 = pvStack_fb8;
    operator_delete(pvStack_fb8);
  }
  if (local_fd0 != (void *)0x0) {
    pvStack_fc8 = local_fd0;
    operator_delete(local_fd0);
  }
  *in_x8 = this_00;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0087100c  FUN_0087100c =====

void FUN_0087100c(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 00871030  FUN_00871030 =====

undefined * FUN_00871030(void)

{
  return PTR_RNSFullWindowOverlayComponentName_0099ee78;
}


// ===== 0087103c  FUN_0087103c =====

undefined * FUN_0087103c(void)

{
  return PTR_RNSFullWindowOverlayComponentName_0099ee78;
}


// ===== 00871048  FUN_00871048 =====

undefined8 FUN_00871048(void)

{
  return 0x61;
}


// ===== 00871050  FUN_00871050 =====

void FUN_00871050(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

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
  *puVar6 = &PTR_FUN_00992b78;
                    /* try { // try from 008710bc to 008710cb has its CatchHandler @ 008711b0 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4,uVar5);
  lVar8 = puVar6[4];
  puVar6[3] = &PTR_FUN_00992ca8;
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
  puVar6[3] = &PTR_FUN_00992bc8;
                    /* try { // try from 00871164 to 0087116f has its CatchHandler @ 008711a0 */
  (**(code **)(lVar9 + 0x60))(param_2,pYVar1);
  *param_1 = pYVar1;
  param_1[1] = puVar6;
  if (*(long *)(lVar4 + 0x28) != lVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 008711e0  FUN_008711e0 =====

void FUN_008711e0(undefined8 *param_1,long *param_2,ShadowNode *param_3,ShadowNodeFragment *param_4)

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
  *plVar8 = (long)&PTR_FUN_00992b78;
                    /* try { // try from 00871238 to 00871247 has its CatchHandler @ 00871394 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4);
  lVar9 = plVar8[4];
  plVar8[3] = (long)&PTR_FUN_00992ca8;
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
  plVar8[3] = (long)&PTR_FUN_00992bc8;
  *(uint *)((long)plVar8 + 0x6c) =
       uVar3 & 0xfffff000 |
       uVar3 & 0x7f8 | uVar2 | (uint)((cVar4 != '\0' || cVar5 != '\0') || cVar6 != '\0') << 0xb;
  local_68 = pYVar1;
  local_60 = plVar8;
                    /* try { // try from 008712d8 to 008712e7 has its CatchHandler @ 008713ac */
  facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::
  completeClone(pYVar1,param_3,param_4);
  local_78 = pYVar1;
  local_70 = plVar8;
  FUN_00757d00(1,plVar8 + 1);
                    /* try { // try from 008712f8 to 00871307 has its CatchHandler @ 00871384 */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_78);
  plVar8 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar9 = FUN_00757990(0xffffffffffffffff,local_70 + 1), lVar9 == 0)) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pYVar1 = local_68;
                    /* try { // try from 00871344 to 0087134f has its CatchHandler @ 008713ac */
  (**(code **)(*param_2 + 0x60))(param_2,local_68);
  *param_1 = pYVar1;
  param_1[1] = local_60;
  if (*(long *)(lVar7 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 008713d4  FUN_008713d4 =====

void FUN_008713d4(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::appendChild
            (*param_2,param_3);
  return;
}


// ===== 008713e0  FUN_008713e0 =====

void FUN_008713e0(undefined8 *param_1,long param_2,PropsParserContext *param_3,long *param_4,
                 RawProps *param_5)

{
  RNSFullWindowOverlayProps *this;
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
  RNSFullWindowOverlayProps *pRVar12;
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
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33RNSFullWindowOverlayComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25RNSFullWindowOverlayPropsENS0_32RNSFullWindowOverlayEventEmitterENS0_25RNSFullWindowOverlayStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e920
         & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33RNSFullWindowOverlayComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25RNSFullWindowOverlayPropsENS0_32RNSFullWindowOverlayEventEmitterENS0_25RNSFullWindowOverlayStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e920
                                   ), iVar6 != 0)) {
                    /* try { // try from 00871814 to 00871817 has its CatchHandler @ 00871844 */
      FUN_00872494();
      __cxa_atexit(FUN_00872444,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33RNSFullWindowOverlayComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25RNSFullWindowOverlayPropsENS0_32RNSFullWindowOverlayEventEmitterENS0_25RNSFullWindowOverlayStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e918
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33RNSFullWindowOverlayComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25RNSFullWindowOverlayPropsENS0_32RNSFullWindowOverlayEventEmitterENS0_25RNSFullWindowOverlayStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e920
                         );
    }
    lVar11 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33RNSFullWindowOverlayComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25RNSFullWindowOverlayPropsENS0_32RNSFullWindowOverlayEventEmitterENS0_25RNSFullWindowOverlayStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e918
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33RNSFullWindowOverlayComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25RNSFullWindowOverlayPropsENS0_32RNSFullWindowOverlayEventEmitterENS0_25RNSFullWindowOverlayStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e918
    ;
    param_1[1] = lVar11;
    if (lVar11 != 0) {
      FUN_00757d00(1,lVar11 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    pRVar12 = (RNSFullWindowOverlayProps *)*param_4;
    if (pRVar12 == (RNSFullWindowOverlayProps *)0x0) {
      if (((*
            PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33RNSFullWindowOverlayComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25RNSFullWindowOverlayPropsENS0_32RNSFullWindowOverlayEventEmitterENS0_25RNSFullWindowOverlayStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e920
           & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33RNSFullWindowOverlayComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25RNSFullWindowOverlayPropsENS0_32RNSFullWindowOverlayEventEmitterENS0_25RNSFullWindowOverlayStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e920
                                     ), iVar6 != 0)) {
                    /* try { // try from 00871794 to 00871797 has its CatchHandler @ 0087185c */
        FUN_00872494();
        __cxa_atexit(FUN_00872444,
                     PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33RNSFullWindowOverlayComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25RNSFullWindowOverlayPropsENS0_32RNSFullWindowOverlayEventEmitterENS0_25RNSFullWindowOverlayStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e918
                     ,&PTR_LOOP_008d5d30);
        __cxa_guard_release(
                           PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33RNSFullWindowOverlayComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25RNSFullWindowOverlayPropsENS0_32RNSFullWindowOverlayEventEmitterENS0_25RNSFullWindowOverlayStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e920
                           );
      }
      pRVar12 = *(RNSFullWindowOverlayProps **)
                 PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33RNSFullWindowOverlayComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25RNSFullWindowOverlayPropsENS0_32RNSFullWindowOverlayEventEmitterENS0_25RNSFullWindowOverlayStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e918
      ;
    }
    plVar8 = (long *)operator_new(0x700);
    this = (RNSFullWindowOverlayProps *)(plVar8 + 3);
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = (long)&PTR_FUN_00992d90;
                    /* try { // try from 008714c0 to 008714d3 has its CatchHandler @ 008718d0 */
    facebook::react::RNSFullWindowOverlayProps::RNSFullWindowOverlayProps
              (this,param_3,pRVar12,param_5);
                    /* try { // try from 008714d8 to 008714eb has its CatchHandler @ 008718e8 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if ((((uVar7 & 1) == 0) ||
        (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar7 & 1) == 0)) ||
       (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
                enablePropsUpdateReconciliationAndroid(), (uVar7 & 1) == 0)) {
LAB_00871514:
      FUN_00757d00(1,plVar8 + 1);
      if (*param_4 == 0) {
        if (((*
              PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33RNSFullWindowOverlayComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25RNSFullWindowOverlayPropsENS0_32RNSFullWindowOverlayEventEmitterENS0_25RNSFullWindowOverlayStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e920
             & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(
                                       PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33RNSFullWindowOverlayComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25RNSFullWindowOverlayPropsENS0_32RNSFullWindowOverlayEventEmitterENS0_25RNSFullWindowOverlayStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e920
                                       ), iVar6 != 0)) {
                    /* try { // try from 008717d4 to 008717d7 has its CatchHandler @ 00871848 */
          FUN_00872494();
          __cxa_atexit(FUN_00872444,
                       PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33RNSFullWindowOverlayComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25RNSFullWindowOverlayPropsENS0_32RNSFullWindowOverlayEventEmitterENS0_25RNSFullWindowOverlayStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e918
                       ,&PTR_LOOP_008d5d30);
          __cxa_guard_release(
                             PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33RNSFullWindowOverlayComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25RNSFullWindowOverlayPropsENS0_32RNSFullWindowOverlayEventEmitterENS0_25RNSFullWindowOverlayStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e920
                             );
        }
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 0087157c to 0087158f has its CatchHandler @ 00871874 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*(undefined8 *)
                         PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33RNSFullWindowOverlayComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25RNSFullWindowOverlayPropsENS0_32RNSFullWindowOverlayEventEmitterENS0_25RNSFullWindowOverlayStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e918
                   ,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
LAB_008715c8:
          (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
        }
        else if (local_b0 != (dynamic *)0x0) {
          lVar11 = 5;
          pdVar10 = local_b0;
          goto LAB_008715c8;
        }
        if (plVar8 != (long *)0x0) goto LAB_008715dc;
      }
      else {
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 00871530 to 00871543 has its CatchHandler @ 0087189c */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*param_4,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
        }
        else {
          if (local_b0 == (dynamic *)0x0) goto LAB_008715dc;
          lVar11 = 5;
          pdVar10 = local_b0;
        }
        (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
LAB_008715dc:
        lVar11 = FUN_00757990(0xffffffffffffffff,plVar8 + 1);
        if (lVar11 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 008714f8 to 00871503 has its CatchHandler @ 00871870 */
      pcVar9 = (char *)(**(code **)(*(long *)this + 0x10))(this);
      iVar6 = strcmp(PTR_RNSFullWindowOverlayComponentName_0099ee78,pcVar9);
      if (iVar6 != 0) goto LAB_00871514;
      bVar3 = false;
    }
                    /* try { // try from 00871608 to 0087160b has its CatchHandler @ 008718e8 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar7 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 00871618 to 00871633 has its CatchHandler @ 00871898 */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(plVar8 + 7));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00871774 to 00871783 has its CatchHandler @ 00871890 */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_00871934;
      }
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (*(int *)(plVar4 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00871754 to 00871763 has its CatchHandler @ 008718f4 */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_00871934;
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
                    /* try { // try from 008716b4 to 008716bf has its CatchHandler @ 008718fc */
        folly::dynamic::dynamic(local_d0,(dynamic *)(plVar4 + 8));
        local_a0 = 0;
                    /* try { // try from 008716c4 to 008716db has its CatchHandler @ 00871900 */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (this,param_3,uVar1,pcVar9,local_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 008716ec to 008716f7 has its CatchHandler @ 008718f0 */
          (*(code *)(&PTR_FUN_0098f088)[local_a0])(&uStack_d1,local_d0);
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
LAB_00871934:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00871938  FUN_00871938 =====

/* WARNING: Removing unreachable block (ram,0x00871a30) */
/* WARNING: Removing unreachable block (ram,0x00871a40) */
/* WARNING: Removing unreachable block (ram,0x00871a64) */
/* WARNING: Removing unreachable block (ram,0x00871a74) */

void FUN_00871938(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  State *pSVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 local_78;
  long local_70;
  long *local_68;
  long *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  plVar3 = (long *)operator_new(0x20);
  plVar3[1] = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_00992f88;
                    /* try { // try from 0087198c to 00871993 has its CatchHandler @ 00871af0 */
  puVar4 = (undefined8 *)operator_new(0x50);
  local_78 = *param_4;
  local_70 = param_4[1];
  pSVar1 = (State *)(puVar4 + 3);
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_00992de0;
  if (local_70 != 0) {
    FUN_00757d00(1,local_70 + 0x10);
  }
                    /* try { // try from 008719d0 to 008719df has its CatchHandler @ 00871ab8 */
  local_68 = plVar3 + 3;
  local_60 = plVar3;
  facebook::react::State::State(pSVar1,&local_68,&local_78);
  if (local_70 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar3 = local_60;
  if ((local_60 != (long *)0x0) &&
     (lVar5 = FUN_00757990(0xffffffffffffffff,local_60 + 1), lVar5 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *(undefined ***)pSVar1 = &PTR_FUN_00992e30;
  *param_1 = pSVar1;
  param_1[1] = puVar4;
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00871b18  FUN_00871b18 =====

/* WARNING: Removing unreachable block (ram,0x00871bec) */
/* WARNING: Removing unreachable block (ram,0x00871bfc) */
/* WARNING: Removing unreachable block (ram,0x00871c50) */
/* WARNING: Removing unreachable block (ram,0x00871c60) */

void FUN_00871b18(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  State *pSVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 local_88;
  long *local_80;
  undefined8 local_58;
  long *local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  uVar2 = *param_4;
  plVar3 = (long *)param_4[1];
  if (plVar3 != (long *)0x0) {
    FUN_00757d00(1,plVar3 + 1);
  }
                    /* try { // try from 00871b5c to 00871b67 has its CatchHandler @ 00871cd8 */
  facebook::react::ShadowNodeFamily::getMostRecentState();
                    /* try { // try from 00871b6c to 00871b73 has its CatchHandler @ 00871cc8 */
  puVar5 = (undefined8 *)operator_new(0x50);
  pSVar1 = (State *)(puVar5 + 3);
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_00992fe8;
                    /* try { // try from 00871b98 to 00871ba7 has its CatchHandler @ 00871ca0 */
  local_58 = uVar2;
  local_50 = plVar3;
  facebook::react::State::State(pSVar1,&local_58,local_88);
  plVar3 = local_50;
  if ((local_50 != (long *)0x0) &&
     (lVar6 = FUN_00757990(0xffffffffffffffff,local_50 + 1), lVar6 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *(undefined ***)pSVar1 = &PTR_FUN_00992e30;
  *param_1 = pSVar1;
  param_1[1] = puVar5;
  if ((local_80 != (long *)0x0) &&
     (lVar6 = FUN_00757990(0xffffffffffffffff,local_80 + 1), lVar6 == 0)) {
    (**(code **)(*local_80 + 0x10))(local_80);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00871d00  FUN_00871d00 =====

void FUN_00871d00(undefined8 *param_1,long param_2,long param_3)

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
                    /* try { // try from 00871d48 to 00871d4f has its CatchHandler @ 00872034 */
  plVar5 = (long *)operator_new(0x68);
  *plVar5 = (long)&PTR_FUN_00993038;
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
                    /* try { // try from 00871d8c to 00871d9b has its CatchHandler @ 00872008 */
  facebook::react::EventEmitter::EventEmitter(pEVar1,&local_70,&local_80);
  *(undefined ***)pEVar1 = &PTR_FUN_0097ff10;
                    /* try { // try from 00871dac to 00871db3 has its CatchHandler @ 00871ff8 */
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
  plVar5[3] = (long)&PTR_FUN_00993088;
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
                    /* try { // try from 00871e64 to 00871e6b has its CatchHandler @ 00871fe8 */
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
                    /* try { // try from 00871eb8 to 00871ecf has its CatchHandler @ 00871fb8 */
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
                    /* try { // try from 00871f24 to 00871f2f has its CatchHandler @ 00871f98 */
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


// ===== 0087205c  FUN_0087205c =====

void FUN_0087205c(void)

{
  return;
}


// ===== 00872060  FUN_00872060 =====

void FUN_00872060(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 00872084  FUN_00872084 =====

void FUN_00872084(long param_1)

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


// ===== 008720d4  FUN_008720d4 =====

void FUN_008720d4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00992b78;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008720e4  FUN_008720e4 =====

void FUN_008720e4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00992b78;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00872114  FUN_00872114 =====

void FUN_00872114(long param_1)

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


// ===== 008721d8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008721dc  FUN_008721dc =====

void FUN_008721dc(long *param_1)

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


// ===== 0087229c  FUN_0087229c =====

void FUN_0087229c(long param_1)

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


// ===== 00872304  FUN_00872304 =====

bool FUN_00872304(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 0087231c  FUN_0087231c =====

bool FUN_0087231c(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 00872334  FUN_00872334 =====

void FUN_00872334(long *param_1)

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


// ===== 008723f4  FUN_008723f4 =====

void FUN_008723f4(long param_1)

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


// ===== 00872444  FUN_00872444 =====

void FUN_00872444(long param_1)

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


// ===== 00872494  FUN_00872494 =====

void FUN_00872494(void)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x700);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_00992d40;
  memset(__s,0,0x6e8);
                    /* try { // try from 008724d0 to 008724e3 has its CatchHandler @ 00872558 */
  FUN_00788b10(__s,PTR_VTT_0099ee88 + 0x10);
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
  puVar1 = PTR_vtable_0099ee80;
  *(undefined1 *)((long)puVar2 + 0x6f4) = 0;
  *(undefined4 *)(puVar2 + 0xd9) = 0;
  puVar2[3] = puVar1 + 0x20;
  *(undefined1 *)(puVar2 + 0xdf) = 1;
  puVar1 = 
  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33RNSFullWindowOverlayComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25RNSFullWindowOverlayPropsENS0_32RNSFullWindowOverlayEventEmitterENS0_25RNSFullWindowOverlayStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e918
  ;
  *(undefined2 *)((long)puVar2 + 0x6cc) = 0;
  *(undefined8 **)puVar1 = __s;
  *(undefined8 **)(puVar1 + 8) = puVar2;
  return;
}


// ===== 00872574  FUN_00872574 =====

void FUN_00872574(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00992d40;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00872584  FUN_00872584 =====

void FUN_00872584(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00992d40;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008725b4  FUN_008725b4 =====

void FUN_008725b4(long param_1)

{
  FUN_0078917c(param_1 + 0x18,PTR_VTT_0099ee88 + 8);
  return;
}


// ===== 008725c8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008725cc  FUN_008725cc =====

void FUN_008725cc(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00992d90;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008725dc  FUN_008725dc =====

void FUN_008725dc(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00992d90;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0087260c  FUN_0087260c =====

void FUN_0087260c(long param_1)

{
  FUN_0078917c(param_1 + 0x18,PTR_VTT_0099ee88 + 8);
  return;
}


// ===== 00872620  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00872624  FUN_00872624 =====

void FUN_00872624(long param_1)

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


// ===== 00872674  FUN_00872674 =====

void FUN_00872674(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00992de0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00872684  FUN_00872684 =====

void FUN_00872684(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00992de0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008726b4  FUN_008726b4 =====

void FUN_008726b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x008726bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 008726c0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008726c4  FUN_008726c4 =====

void FUN_008726c4(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[4];
  *param_1 = &PTR_FUN_0098f6c8;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[2] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


// ===== 0087272c  FUN_0087272c =====

void FUN_0087272c(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}


// ===== 00872738  <EXTERNAL>::facebook::react::MapBufferBuilder::facebook::react::MapBufferBuilder::EMPTY =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall facebook::react::MapBufferBuilder::facebook::react::MapBufferBuilder::EMPTY(void)

{
  (*(code *)PTR_EMPTY_009a0138)();
  return;
}


// ===== 0087273c  FUN_0087273c =====

void FUN_0087273c(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}


// ===== 00872744  FUN_00872744 =====

void FUN_00872744(long param_1,dynamic *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined ***pppuVar4;
  undefined ****ppppuVar5;
  long lVar6;
  long lVar7;
  dynamic adStack_120 [48];
  undefined **local_f0;
  undefined1 local_e8;
  undefined ***local_d0;
  undefined **local_c0 [4];
  undefined ***local_a0 [2];
  long local_90;
  long *local_88;
  long local_80 [4];
  long *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  folly::dynamic::dynamic(adStack_120,param_2);
  local_f0 = &PTR_FUN_00992f08;
  local_e8 = 0;
  local_d0 = &local_f0;
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (plVar2 = (long *)std::__ndk1::__shared_weak_count::lock(), plVar2 != (long *)0x0)) {
    lVar7 = *(long *)(param_1 + 8);
    if (lVar7 != 0) {
      local_90 = lVar7;
      local_88 = plVar2;
      FUN_00757d00(1,plVar2 + 1);
      local_a0[0] = local_d0;
      if (local_d0 != (undefined ***)0x0) {
        if (local_d0 == &local_f0) {
          local_a0[0] = local_c0;
          (*(code *)local_f0[3])(&local_f0,local_c0);
        }
        else {
                    /* try { // try from 008727dc to 00872803 has its CatchHandler @ 008729a4 */
          local_a0[0] = (undefined ***)(*(code *)(*local_d0)[2])();
        }
      }
      local_60 = (long *)0x0;
                    /* try { // try from 00872808 to 0087280f has its CatchHandler @ 008729bc */
      plVar3 = (long *)operator_new(0x40);
      *plVar3 = (long)&PTR_FUN_00992e88;
      if (local_a0[0] == (undefined ***)0x0) {
        ppppuVar5 = (undefined ****)(plVar3 + 6);
LAB_00872844:
        *ppppuVar5 = (undefined ***)0x0;
      }
      else {
        if (local_a0[0] != local_c0) {
          ppppuVar5 = local_a0;
          plVar3[6] = (long)local_a0[0];
          goto LAB_00872844;
        }
        plVar3[6] = (long)(plVar3 + 2);
                    /* try { // try from 00872858 to 00872867 has its CatchHandler @ 008729a0 */
        (*(code *)local_c0[0][3])(local_c0);
      }
      local_60 = plVar3;
      if (local_a0[0] == local_c0) {
        lVar6 = 4;
        pppuVar4 = local_c0;
LAB_00872890:
        (*(code *)(*pppuVar4)[lVar6])(pppuVar4);
      }
      else if (local_a0[0] != (undefined ***)0x0) {
        lVar6 = 5;
        pppuVar4 = local_a0[0];
        goto LAB_00872890;
      }
                    /* try { // try from 008728a0 to 008728af has its CatchHandler @ 008729ac */
      facebook::react::ShadowNodeFamily::facebook::react::ShadowNodeFamily::dispatchRawState
                (lVar7,&local_90,0);
      plVar3 = local_80;
      if (local_60 == plVar3) {
        lVar7 = 4;
LAB_008728d8:
        (**(code **)(*plVar3 + lVar7 * 8))();
      }
      else if (local_60 != (long *)0x0) {
        lVar7 = 5;
        plVar3 = local_60;
        goto LAB_008728d8;
      }
      plVar3 = local_88;
      if ((local_88 != (long *)0x0) &&
         (lVar7 = FUN_00757990(0xffffffffffffffff,local_88 + 1), lVar7 == 0)) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      if (plVar2 == (long *)0x0) goto LAB_00872944;
    }
    lVar7 = FUN_00757990(0xffffffffffffffff,plVar2 + 1);
    if (lVar7 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
  }
LAB_00872944:
  if (local_d0 == &local_f0) {
    lVar7 = 4;
    pppuVar4 = &local_f0;
  }
  else {
    if (local_d0 == (undefined ***)0x0) goto LAB_00872970;
    lVar7 = 5;
    pppuVar4 = local_d0;
  }
  (*(code *)(*pppuVar4)[lVar7])();
LAB_00872970:
  folly::dynamic::folly::dynamic::destroy(adStack_120);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00872a58  FUN_00872a58 =====

void FUN_00872a58(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)param_1[6];
  plVar2 = param_1 + 2;
  *param_1 = &PTR_FUN_00992e88;
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return;
    }
    lVar3 = 5;
    plVar2 = plVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00872a94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + lVar3 * 8))();
  return;
}


// ===== 00872a9c  FUN_00872a9c =====

void FUN_00872a9c(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)param_1[6];
  plVar2 = param_1 + 2;
  *param_1 = &PTR_FUN_00992e88;
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_00872ae8;
    lVar3 = 5;
    plVar2 = plVar1;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_00872ae8:
  operator_delete(param_1);
  return;
}


// ===== 00872af8  FUN_00872af8 =====

undefined8 * FUN_00872af8(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  
  puVar1 = (undefined8 *)operator_new(0x40);
  plVar2 = *(long **)(param_1 + 0x30);
  *puVar1 = &PTR_FUN_00992e88;
  if (plVar2 != (long *)0x0) {
    if (plVar2 == (long *)(param_1 + 0x10)) {
      lVar3 = *plVar2;
      puVar1[6] = puVar1 + 2;
      (**(code **)(lVar3 + 0x18))();
      return puVar1;
    }
                    /* try { // try from 00872b40 to 00872b5b has its CatchHandler @ 00872b6c */
    plVar2 = (long *)(**(code **)(*plVar2 + 0x10))();
  }
  puVar1[6] = plVar2;
  return puVar1;
}


// ===== 00872b80  FUN_00872b80 =====

void FUN_00872b80(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x30);
  *param_2 = &PTR_FUN_00992e88;
  if (plVar2 == (long *)0x0) {
    param_2[6] = 0;
  }
  else {
    if (plVar2 == (long *)(param_1 + 0x10)) {
      param_2[6] = param_2 + 2;
                    /* WARNING: Could not recover jumptable at 0x00872bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x30) + 0x18))();
      return;
    }
    uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
    param_2[6] = uVar1;
  }
  return;
}


// ===== 00872bf4  FUN_00872bf4 =====

void FUN_00872bf4(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = *(long **)(param_1 + 0x30);
  plVar2 = (long *)(param_1 + 0x10);
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return;
    }
    lVar3 = 5;
    plVar2 = plVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00872c24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + lVar3 * 8))();
  return;
}


// ===== 00872c2c  FUN_00872c2c =====

void FUN_00872c2c(void *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = *(long **)((long)param_1 + 0x30);
  plVar2 = (long *)((long)param_1 + 0x10);
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_00872c6c;
    lVar3 = 5;
    plVar2 = plVar1;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_00872c6c:
  operator_delete(param_1);
  return;
}


// ===== 00872c7c  FUN_00872c7c =====

void FUN_00872c7c(long param_1,undefined8 *param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x30);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00872c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))(plVar1,*param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00785754();
}


// ===== 00872ca0  FUN_00872ca0 =====

long FUN_00872ca0(long param_1,long param_2)

{
  param_1 = param_1 + 0x10;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_0099e928) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 00872cbc  FUN_00872cbc =====

undefined * FUN_00872cbc(void)

{
  return PTR_typeinfo_0099e930;
}


// ===== 00872cc8  FUN_00872cc8 =====

void FUN_00872cc8(void)

{
  return;
}


// ===== 00872ccc  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00872cd0  FUN_00872cd0 =====

void FUN_00872cd0(long param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x10);
  uVar1 = *(undefined1 *)(param_1 + 8);
  *puVar2 = &PTR_FUN_00992f08;
  *(undefined1 *)(puVar2 + 1) = uVar1;
  return;
}


// ===== 00872d08  FUN_00872d08 =====

void FUN_00872d08(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_00992f08;
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 8);
  return;
}


// ===== 00872d20  FUN_00872d20 =====

void FUN_00872d20(void)

{
  return;
}


// ===== 00872d24  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00872d28  FUN_00872d28 =====

void FUN_00872d28(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_00992f88;
  *param_1 = (long)(puVar1 + 3);
  param_1[1] = (long)puVar1;
  return;
}


// ===== 00872d64  FUN_00872d64 =====

long FUN_00872d64(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_0099e938) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 00872d80  FUN_00872d80 =====

undefined * FUN_00872d80(void)

{
  return PTR_typeinfo_0099e940;
}


// ===== 00872d8c  FUN_00872d8c =====

void FUN_00872d8c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00992f88;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00872d9c  FUN_00872d9c =====

void FUN_00872d9c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00992f88;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00872dcc  FUN_00872dcc =====

void FUN_00872dcc(void)

{
  return;
}


// ===== 00872dd0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00872dd4  FUN_00872dd4 =====

void FUN_00872dd4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00992fe8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00872de4  FUN_00872de4 =====

void FUN_00872de4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00992fe8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00872e14  FUN_00872e14 =====

void FUN_00872e14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00872e1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00872e20  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00872e24  FUN_00872e24 =====

void FUN_00872e24(long param_1)

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


// ===== 00872e74  FUN_00872e74 =====

void FUN_00872e74(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00993038;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00872e84  FUN_00872e84 =====

void FUN_00872e84(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00993038;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00872eb4  FUN_00872eb4 =====

void FUN_00872eb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00872ebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00872ec0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00872ec4  FUN_00872ec4 =====

void FUN_00872ec4(long *param_1)

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


// ===== 00872f7c  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_31RNSScreenContainerComponentNameEEEENS0_23RNSScreenContainerPropsENS0_30RNSScreenContainerEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_31RNSScreenContainerComponentNameEEEENS0_23RNSScreenContainerPropsENS0_30RNSScreenContainerEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE
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
  undefined4 local_fd0 [2];
  undefined8 *local_fc8;
  void *local_fc0;
  void *pvStack_fb8;
  undefined8 local_fb0;
  void *pvStack_fa8;
  void *local_fa0;
  undefined8 uStack_f98;
  void *local_f90;
  void *pvStack_f88;
  undefined8 uStack_f80;
  undefined8 uStack_f78;
  undefined *local_f70;
  undefined8 uStack_f68;
  undefined8 local_f60;
  undefined8 uStack_f58;
  undefined4 local_f50 [2];
  undefined8 local_f48;
  undefined8 uStack_f40;
  undefined8 local_f38;
  undefined8 uStack_f30;
  undefined4 local_f28;
  undefined4 local_f20;
  undefined1 local_f1c;
  undefined8 local_f1b;
  undefined8 local_f13;
  undefined8 uStack_f0b;
  undefined8 local_f03;
  undefined8 uStack_efb;
  undefined8 local_ef3;
  undefined8 uStack_eeb;
  undefined8 local_ee3;
  undefined6 uStack_edb;
  undefined2 uStack_ed5;
  undefined6 uStack_ed3;
  undefined8 uStack_ecd;
  undefined4 local_ec5;
  undefined8 local_ec1;
  undefined1 local_eb9;
  undefined1 uStack_eb8;
  undefined7 uStack_eb7;
  undefined8 uStack_eb0;
  undefined8 uStack_ea8;
  undefined8 uStack_ea0;
  undefined8 local_e98;
  undefined8 uStack_e90;
  undefined8 local_e88;
  undefined8 uStack_e80;
  undefined8 local_e78;
  undefined8 uStack_e70;
  undefined8 local_e68;
  undefined8 uStack_e60;
  undefined8 uStack_e58;
  undefined8 local_e50;
  undefined8 local_e48;
  undefined8 uStack_e40;
  undefined8 local_e38;
  undefined4 uStack_e30;
  undefined4 uStack_e2c;
  undefined4 uStack_e28;
  undefined4 uStack_e24;
  undefined4 uStack_e20;
  undefined4 uStack_e1c;
  undefined8 local_e18;
  undefined8 uStack_e10;
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
  undefined4 local_db8;
  undefined1 local_db4;
  undefined4 local_db0;
  undefined1 local_dac;
  undefined4 local_da8;
  undefined1 local_da4;
  undefined4 local_da0;
  undefined1 local_d9c;
  undefined4 local_d98;
  undefined1 local_d94;
  undefined4 local_d90;
  undefined1 local_d8c;
  undefined1 local_d88;
  undefined1 local_d84;
  undefined1 local_d78;
  undefined8 local_d70;
  undefined8 uStack_d68;
  undefined8 uStack_d60;
  undefined8 uStack_d58;
  undefined8 local_d50;
  undefined8 uStack_d48;
  undefined8 uStack_d40;
  undefined1 uStack_d38;
  undefined7 local_d37;
  undefined1 uStack_d30;
  undefined8 uStack_d2f;
  undefined8 local_d24;
  undefined8 uStack_d1c;
  undefined8 uStack_d14;
  undefined8 uStack_d0c;
  undefined8 local_d04;
  undefined8 uStack_cfc;
  undefined8 uStack_cf4;
  undefined8 uStack_cec;
  undefined8 local_ce4;
  undefined8 uStack_cdc;
  undefined8 uStack_cd4;
  undefined5 uStack_ccc;
  undefined3 local_cc7;
  undefined5 uStack_cc4;
  undefined1 local_cbc;
  undefined1 local_cb8;
  undefined1 local_cb4;
  undefined1 local_cb0;
  undefined1 local_cac;
  undefined1 local_ca8;
  undefined1 local_c90;
  undefined8 local_c88;
  undefined8 uStack_c80;
  undefined8 local_c78;
  undefined4 local_c70;
  undefined1 local_c6c;
  undefined4 local_c6b;
  undefined1 local_c67;
  undefined1 local_c66;
  undefined8 local_c60;
  undefined8 uStack_c58;
  undefined8 uStack_c50;
  undefined8 uStack_c48;
  undefined8 local_c40;
  undefined7 uStack_c38;
  undefined4 uStack_c31;
  undefined8 local_c2c;
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
  undefined1 local_bb0;
  undefined1 local_bac;
  undefined1 local_ba4;
  undefined1 local_ba0;
  undefined1 local_b98;
  undefined1 local_b94;
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
  undefined1 local_b58;
  undefined1 local_b54;
  undefined1 local_b50;
  undefined1 local_b4c;
  undefined1 local_b48;
  undefined1 local_b44;
  undefined1 local_b40;
  undefined1 local_b3c;
  undefined1 local_b38;
  undefined1 local_b34;
  undefined1 local_b30;
  undefined1 local_b2c;
  undefined8 local_b28;
  undefined8 uStack_b20;
  undefined8 local_b18;
  undefined8 uStack_b10;
  undefined8 uStack_b08;
  undefined8 uStack_b00;
  undefined2 local_af8;
  undefined8 local_af4;
  undefined1 local_aec;
  undefined8 local_ae8;
  undefined8 local_ae0;
  undefined8 uStack_ad8;
  undefined1 local_ad0;
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
  undefined8 uStack_a78;
  undefined8 uStack_a70;
  undefined8 local_a68;
  undefined8 uStack_a60;
  undefined8 uStack_a58;
  undefined8 uStack_a50;
  undefined8 local_a48;
  undefined8 uStack_a40;
  undefined8 uStack_a38;
  undefined8 uStack_a30;
  undefined8 local_a28;
  undefined8 uStack_a20;
  undefined8 local_a18;
  undefined8 uStack_a10;
  undefined8 local_a08;
  undefined8 uStack_a00;
  undefined8 local_9f8;
  undefined8 uStack_9f0;
  undefined8 local_9e8;
  undefined8 uStack_9e0;
  undefined8 local_9d8;
  undefined6 uStack_9d0;
  undefined2 uStack_9ca;
  undefined6 uStack_9c8;
  undefined1 local_9c0;
  undefined1 local_9bc;
  undefined1 local_9b8;
  undefined8 local_9b4;
  undefined8 uStack_9ac;
  undefined1 local_9a4;
  undefined8 local_9a0;
  undefined2 local_998;
  undefined1 local_996;
  undefined4 local_994;
  undefined1 local_990;
  undefined1 local_930;
  undefined1 local_928;
  undefined1 local_8c8;
  undefined4 local_8c0;
  undefined2 local_8bc;
  undefined1 local_8b8;
  undefined1 local_8b4;
  undefined1 local_8b0;
  undefined1 local_8ac;
  undefined1 local_8a8;
  undefined1 local_8a4;
  undefined1 local_8a0;
  undefined1 local_89c;
  undefined1 local_898;
  undefined1 local_894;
  undefined4 local_890 [2];
  undefined8 local_888;
  undefined8 uStack_880;
  undefined8 local_878;
  undefined8 local_870;
  undefined8 uStack_868;
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
  undefined8 uStack_88;
  void *local_80;
  void *local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  this = (ComponentDescriptor *)operator_new(0x88);
  pvStack_fa8 = (void *)0x0;
  local_fb0 = 0;
  uStack_f98 = 0;
  local_fa0 = (void *)0x0;
  pvStack_f88 = (void *)0x0;
  local_f90 = (void *)0x0;
  uStack_f78 = 0;
  uStack_f80 = 0;
  pvStack_fb8 = (void *)0x0;
  local_fc0 = (void *)0x0;
                    /* try { // try from 00872fcc to 00872fd7 has its CatchHandler @ 008735f4 */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_fc0);
  local_f8 = 0;
  *(undefined ***)this = &PTR_FUN_009930c0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0[0] = 0;
  local_d0[0] = 0;
  local_c8 = 0;
  local_a0 = 0;
  pvStack_90 = (void *)0x0;
  local_98 = (void *)0x0;
  local_80 = (void *)0x0;
  uStack_88 = 0;
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
                    /* try { // try from 00873044 to 0087304f has its CatchHandler @ 00873624 */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1b0);
  local_100 = CONCAT44(local_100._4_4_,0x3f800000);
  local_fd0[0] = 0xffffffff;
  uStack_108 = 0;
  local_110 = (void *)0x0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_fc8 = &local_1b0;
  facebook::react::RawProps::facebook::react::RawProps::parse(&local_f8,this + 0x38);
  memset(local_f50,0,0x6c0);
  puVar5 = PTR_VTT_0099eea0;
  local_890[0] = 5;
  local_878 = 0;
  local_f70 = *(undefined **)(PTR_VTT_0099eea0 + 0x20);
  local_f50[0] = 5;
  uStack_f58 = 0;
  local_f60 = 0;
  uStack_f68 = 0;
  local_870 = 0;
  uStack_868 = 0x3f800000;
  uStack_880 = 0;
  local_888 = 0;
  uStack_f40 = 0;
  local_f48 = 0;
  uStack_f30 = 0;
  local_f38 = 0;
  local_f28 = 0x3f800000;
  folly::dynamic::folly::dynamic::destroy(local_890);
  local_f1c = 0;
  local_ec1 = 0;
  uStack_9e0 = _UNK_00488920;
  local_9e8 = _DAT_00488918;
  local_f1b = _s__00375408;
  uStack_ad8 = _UNK_00371598;
  local_ae0 = _DAT_00371590;
  uStack_9f0 = _UNK_00488910;
  local_9f8 = _DAT_00488908;
  local_e04 = 0;
  uStack_a00 = _UNK_00488900;
  local_a08 = _DAT_004888f8;
  uStack_a10 = _UNK_004888f0;
  local_a18 = _DAT_004888e8;
  uStack_9c8 = 0;
  local_dfc = 0;
  uStack_e30 = 0;
  local_e38 = 0;
  uStack_e1c = 0;
  uStack_e40 = 0;
  local_e48 = 0;
  uStack_9d0 = 0;
  uStack_9ca = 0;
  local_9d8 = 0;
  local_f20 = 0x10410710;
  local_ec5 = 0x40004;
  uStack_e24 = 0;
  uStack_e20 = 0;
  uStack_e2c = 0;
  uStack_e28 = 0;
  uStack_e10 = 0;
  local_e18 = 0;
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
  local_db8 = 0x7fc00000;
  local_db0 = 0x7fc00000;
  local_da8 = 0x7fc00000;
  local_da0 = 0x7fc00000;
  local_d98 = 0x7fc00000;
  local_d90 = 0x7fc00000;
  uStack_d2f = 0;
  uStack_d30 = 0;
  uStack_d1c = 0;
  local_d24 = 0;
  uStack_d0c = 0;
  uStack_d14 = 0;
  uStack_cfc = 0;
  local_d04 = 0;
  uStack_cec = 0;
  uStack_cf4 = 0;
  uStack_cdc = 0;
  local_ce4 = 0;
  uStack_ccc = 0;
  uStack_cd4 = 0;
  local_cc7 = 0;
  uStack_cc4 = 0;
  local_c6c = 1;
  local_c6b = 0;
  local_c66 = 0x23;
  local_c2c = 0x3f800000;
  uStack_b10 = 0;
  local_b18 = 0;
  uStack_b00 = 0;
  uStack_b08 = 0;
  uStack_b20 = 0;
  local_b28 = 0;
  local_af4 = 0;
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
  uStack_a70 = 0;
  uStack_a78 = 0;
  uStack_a60 = 0;
  local_a68 = 0;
  uStack_a50 = 0;
  uStack_a58 = 0;
  uStack_a40 = 0;
  local_a48 = 0;
  uStack_a30 = 0;
  uStack_a38 = 0;
  uStack_a20 = 0;
  local_a28 = 0;
  uStack_eb7 = 0;
  uStack_f0b = 0;
  local_f13 = 0;
  uStack_efb = 0;
  local_f03 = 0;
  uStack_eeb = 0;
  local_ef3 = 0;
  uStack_edb = 0;
  local_ee3 = 0;
  uStack_ecd = 0;
  uStack_ed5 = 0;
  uStack_ed3 = 0;
  local_eb9 = 0;
  uStack_eb8 = 0;
  uStack_ea8 = 0;
  uStack_eb0 = 0;
  local_e98 = 0;
  uStack_ea0 = 0;
  local_e88 = 0;
  uStack_e90 = 0;
  local_e78 = 0;
  uStack_e80 = 0;
  local_e68 = 0;
  uStack_e70 = 0;
  uStack_e58 = 0;
  uStack_e60 = 0;
  local_e50 = 0;
  local_df4 = 0;
  local_dec = 0;
  local_de4 = 0;
  local_ddc = 0;
  local_dd4 = 0;
  local_dcc = 0;
  local_dc4 = 0;
  local_dbc = 0;
  local_db4 = 0;
  local_dac = 0;
  local_da4 = 0;
  local_d9c = 0;
  local_d94 = 0;
  local_d8c = 0;
  local_d88 = 0;
  local_d84 = 0;
  local_d78 = 0;
  local_cbc = 0;
  local_cb8 = 0;
  local_cb4 = 0;
  local_cb0 = 0;
  local_cac = 0;
  local_ca8 = 0;
  local_c90 = 0;
  uStack_d68 = 0;
  local_d70 = 0;
  uStack_d58 = 0;
  uStack_d60 = 0;
  uStack_d48 = 0;
  local_d50 = 0;
  uStack_d38 = 0;
  local_d37 = 0;
  uStack_d40 = 0;
  uStack_c80 = 0;
  local_c88 = 0;
  local_c78 = 0;
  local_c70 = 0;
  local_c67 = 0;
  uStack_c58 = 0;
  local_c60 = 0;
  uStack_c48 = 0;
  uStack_c50 = 0;
  uStack_c38 = 0;
  uStack_c31 = 0;
  local_c40 = 0;
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
  local_bb0 = 0;
  local_bac = 0;
  local_ba4 = 0;
  local_ba0 = 0;
  local_b98 = 0;
  local_b94 = 0;
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
  local_b58 = 0;
  local_b54 = 0;
  local_b50 = 0;
  local_b4c = 0;
  local_b48 = 0;
  local_b44 = 0;
  local_b40 = 0;
  local_b3c = 0;
  local_b38 = 0;
  local_b34 = 0;
  local_b30 = 0;
  local_b2c = 0;
  local_ae8 = 0;
  local_af8 = 0;
  local_aec = 0;
  local_ad0 = 0;
  local_9c0 = 0;
  local_9bc = 0;
  local_9b8 = 0;
  local_9a0 = 0;
  uStack_9ac = 0;
  local_9b4 = 0;
  local_9a4 = 0;
  local_998 = 0x101;
  local_996 = 0;
  local_994 = 0;
  local_990 = 0;
  local_930 = 0;
  local_928 = 0;
  local_8c8 = 0;
  local_8b8 = 0;
  local_8b4 = 0;
  local_8b0 = 0;
  local_8ac = 0;
  local_8a8 = 0;
  local_8a4 = 0;
  local_8a0 = 0;
  local_89c = 0;
  local_898 = 0;
  local_894 = 0;
  local_8bc = 0;
  local_8c0 = 0;
  local_f70 = PTR_vtable_0099ee98 + 0x20;
                    /* try { // try from 0087343c to 0087344f has its CatchHandler @ 00873624 */
  facebook::react::RNSScreenContainerProps::RNSScreenContainerProps
            ((RNSScreenContainerProps *)local_890,(PropsParserContext *)local_fd0,
             (RNSScreenContainerProps *)&local_f70,(RawProps *)&local_f8);
  FUN_0078917c(local_890,puVar5 + 8);
  FUN_0078917c(&local_f70,puVar5 + 8);
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
  pvVar8 = local_80;
  pvVar3 = local_78;
  if (local_80 != (void *)0x0) {
    while (pvVar3 != pvVar8) {
      if (*(uint *)((long)pvVar3 + -8) != 0xffffffff) {
                    /* try { // try from 00873554 to 0087355f has its CatchHandler @ 00873628 */
        (*(code *)(&PTR_FUN_0098f088)[*(uint *)((long)pvVar3 + -8)])
                  (&local_f70,(void *)((long)pvVar3 + -0x38));
      }
      *(undefined4 *)((long)pvVar3 + -8) = 0xffffffff;
      pvVar3 = (void *)((long)pvVar3 + -0x38);
    }
    local_78 = pvVar8;
    operator_delete(local_80);
  }
  if (local_98 != (void *)0x0) {
    pvStack_90 = local_98;
    operator_delete(local_98);
  }
  folly::dynamic::folly::dynamic::destroy(local_d0);
  facebook::jsi::Value::~Value((Value *)local_e0);
  if (local_f90 != (void *)0x0) {
    pvStack_f88 = local_f90;
    operator_delete(local_f90);
  }
  if (pvStack_fa8 != (void *)0x0) {
    local_fa0 = pvStack_fa8;
    operator_delete(pvStack_fa8);
  }
  if (local_fc0 != (void *)0x0) {
    pvStack_fb8 = local_fc0;
    operator_delete(local_fc0);
  }
  *param_1 = this;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0087362c  FUN_0087362c =====

void FUN_0087362c(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 00873650  FUN_00873650 =====

undefined * FUN_00873650(void)

{
  return PTR_RNSScreenContainerComponentName_0099ee90;
}


// ===== 0087365c  FUN_0087365c =====

undefined * FUN_0087365c(void)

{
  return PTR_RNSScreenContainerComponentName_0099ee90;
}


// ===== 00873668  FUN_00873668 =====

undefined8 FUN_00873668(void)

{
  return 0x61;
}


// ===== 00873670  FUN_00873670 =====

void FUN_00873670(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

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
  lVar9 = *(long *)(lVar4 + 0x28);
  uVar5 = (**(code **)(*param_2 + 0x20))();
  puVar6 = (undefined8 *)operator_new(0x400);
  pYVar1 = (YogaLayoutableShadowNode *)(puVar6 + 3);
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_00993150;
                    /* try { // try from 008736dc to 008736eb has its CatchHandler @ 008737c4 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4,uVar5);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_009931a0;
  uVar3 = *(uint *)((long)puVar6 + 0x6c);
  uVar2 = uVar3 & 3 | (uint)((*(byte *)(lVar7 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)puVar6 + 0x6c) = uVar3 & 0xfffffff8 | uVar2;
  if ((*(uint *)(lVar7 + 0x50) & 0x30000000) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    if (*(char *)(lVar7 + 0x5b4) != '\0') {
      uVar5 = *(undefined4 *)(lVar7 + 0x5b0);
    }
  }
  *(undefined4 *)(puVar6 + 10) = uVar5;
  lVar8 = *param_2;
  *(uint *)((long)puVar6 + 0x6c) =
       uVar3 & 0xfffff000 |
       uVar3 & 0x7f8 | uVar2 |
       (uint)((*(char *)(lVar7 + 0x6b0) != '\0' || *(char *)(lVar7 + 0x6b1) != '\0') ||
             *(char *)(lVar7 + 0x1e8) != '\0') << 0xb;
                    /* try { // try from 00873778 to 00873783 has its CatchHandler @ 008737b4 */
  (**(code **)(lVar8 + 0x60))(param_2,pYVar1);
  *param_1 = pYVar1;
  param_1[1] = puVar6;
  if (*(long *)(lVar4 + 0x28) != lVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 008737f4  FUN_008737f4 =====

void FUN_008737f4(undefined8 *param_1,long *param_2,ShadowNode *param_3,ShadowNodeFragment *param_4)

{
  YogaLayoutableShadowNode *pYVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined4 uVar7;
  YogaLayoutableShadowNode *local_78;
  long *local_70;
  YogaLayoutableShadowNode *local_68;
  long *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  plVar5 = (long *)operator_new(0x400);
  pYVar1 = (YogaLayoutableShadowNode *)(plVar5 + 3);
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_00993150;
                    /* try { // try from 0087384c to 0087385b has its CatchHandler @ 0087399c */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4);
  lVar6 = plVar5[4];
  plVar5[3] = (long)&PTR_FUN_009931a0;
  uVar3 = *(uint *)((long)plVar5 + 0x6c);
  uVar2 = uVar3 & 3 | (uint)((*(byte *)(lVar6 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)plVar5 + 0x6c) = uVar3 & 0xfffffff8 | uVar2;
  if ((*(uint *)(lVar6 + 0x50) & 0x30000000) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    if (*(char *)(lVar6 + 0x5b4) != '\0') {
      uVar7 = *(undefined4 *)(lVar6 + 0x5b0);
    }
  }
  *(undefined4 *)(plVar5 + 10) = uVar7;
  *(uint *)((long)plVar5 + 0x6c) =
       uVar3 & 0xfffff000 |
       uVar3 & 0x7f8 | uVar2 |
       (uint)((*(char *)(lVar6 + 0x6b0) != '\0' || *(char *)(lVar6 + 0x6b1) != '\0') ||
             *(char *)(lVar6 + 0x1e8) != '\0') << 0xb;
  local_68 = pYVar1;
  local_60 = plVar5;
                    /* try { // try from 008738e0 to 008738ef has its CatchHandler @ 008739b4 */
  facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::
  completeClone(pYVar1,param_3,param_4);
  local_78 = pYVar1;
  local_70 = plVar5;
  FUN_00757d00(1,plVar5 + 1);
                    /* try { // try from 00873900 to 0087390f has its CatchHandler @ 0087398c */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_78);
  plVar5 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar6 = FUN_00757990(0xffffffffffffffff,local_70 + 1), lVar6 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pYVar1 = local_68;
                    /* try { // try from 0087394c to 00873957 has its CatchHandler @ 008739b4 */
  (**(code **)(*param_2 + 0x60))(param_2,local_68);
  *param_1 = pYVar1;
  param_1[1] = local_60;
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 008739dc  FUN_008739dc =====

void FUN_008739dc(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x008739ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 008739f0  FUN_008739f0 =====

void FUN_008739f0(undefined8 *param_1,long param_2,PropsParserContext *param_3,long *param_4,
                 RawProps *param_5)

{
  RNSScreenContainerProps *this;
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
  RNSScreenContainerProps *pRVar12;
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
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSScreenContainerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23RNSScreenContainerPropsENS0_30RNSScreenContainerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e950
         & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSScreenContainerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23RNSScreenContainerPropsENS0_30RNSScreenContainerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e950
                                   ), iVar6 != 0)) {
                    /* try { // try from 00873e24 to 00873e27 has its CatchHandler @ 00873e54 */
      FUN_00874550();
      __cxa_atexit(FUN_00874500,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSScreenContainerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23RNSScreenContainerPropsENS0_30RNSScreenContainerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e948
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSScreenContainerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23RNSScreenContainerPropsENS0_30RNSScreenContainerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e950
                         );
    }
    lVar11 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSScreenContainerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23RNSScreenContainerPropsENS0_30RNSScreenContainerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e948
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSScreenContainerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23RNSScreenContainerPropsENS0_30RNSScreenContainerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e948
    ;
    param_1[1] = lVar11;
    if (lVar11 != 0) {
      FUN_00757d00(1,lVar11 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    pRVar12 = (RNSScreenContainerProps *)*param_4;
    if (pRVar12 == (RNSScreenContainerProps *)0x0) {
      if (((*
            PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSScreenContainerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23RNSScreenContainerPropsENS0_30RNSScreenContainerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e950
           & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSScreenContainerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23RNSScreenContainerPropsENS0_30RNSScreenContainerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e950
                                     ), iVar6 != 0)) {
                    /* try { // try from 00873da4 to 00873da7 has its CatchHandler @ 00873e6c */
        FUN_00874550();
        __cxa_atexit(FUN_00874500,
                     PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSScreenContainerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23RNSScreenContainerPropsENS0_30RNSScreenContainerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e948
                     ,&PTR_LOOP_008d5d30);
        __cxa_guard_release(
                           PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSScreenContainerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23RNSScreenContainerPropsENS0_30RNSScreenContainerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e950
                           );
      }
      pRVar12 = *(RNSScreenContainerProps **)
                 PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSScreenContainerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23RNSScreenContainerPropsENS0_30RNSScreenContainerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e948
      ;
    }
    plVar8 = (long *)operator_new(0x6f8);
    this = (RNSScreenContainerProps *)(plVar8 + 3);
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = (long)&PTR_FUN_009932b8;
                    /* try { // try from 00873ad0 to 00873ae3 has its CatchHandler @ 00873ee0 */
    facebook::react::RNSScreenContainerProps::RNSScreenContainerProps(this,param_3,pRVar12,param_5);
                    /* try { // try from 00873ae8 to 00873afb has its CatchHandler @ 00873ef8 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if ((((uVar7 & 1) == 0) ||
        (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar7 & 1) == 0)) ||
       (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
                enablePropsUpdateReconciliationAndroid(), (uVar7 & 1) == 0)) {
LAB_00873b24:
      FUN_00757d00(1,plVar8 + 1);
      if (*param_4 == 0) {
        if (((*
              PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSScreenContainerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23RNSScreenContainerPropsENS0_30RNSScreenContainerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e950
             & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(
                                       PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSScreenContainerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23RNSScreenContainerPropsENS0_30RNSScreenContainerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e950
                                       ), iVar6 != 0)) {
                    /* try { // try from 00873de4 to 00873de7 has its CatchHandler @ 00873e58 */
          FUN_00874550();
          __cxa_atexit(FUN_00874500,
                       PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSScreenContainerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23RNSScreenContainerPropsENS0_30RNSScreenContainerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e948
                       ,&PTR_LOOP_008d5d30);
          __cxa_guard_release(
                             PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSScreenContainerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23RNSScreenContainerPropsENS0_30RNSScreenContainerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e950
                             );
        }
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 00873b8c to 00873b9f has its CatchHandler @ 00873e84 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*(undefined8 *)
                         PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSScreenContainerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23RNSScreenContainerPropsENS0_30RNSScreenContainerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e948
                   ,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
LAB_00873bd8:
          (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
        }
        else if (local_b0 != (dynamic *)0x0) {
          lVar11 = 5;
          pdVar10 = local_b0;
          goto LAB_00873bd8;
        }
        if (plVar8 != (long *)0x0) goto LAB_00873bec;
      }
      else {
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 00873b40 to 00873b53 has its CatchHandler @ 00873eac */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*param_4,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
        }
        else {
          if (local_b0 == (dynamic *)0x0) goto LAB_00873bec;
          lVar11 = 5;
          pdVar10 = local_b0;
        }
        (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
LAB_00873bec:
        lVar11 = FUN_00757990(0xffffffffffffffff,plVar8 + 1);
        if (lVar11 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 00873b08 to 00873b13 has its CatchHandler @ 00873e80 */
      pcVar9 = (char *)(**(code **)(*(long *)this + 0x10))(this);
      iVar6 = strcmp(PTR_RNSScreenContainerComponentName_0099ee90,pcVar9);
      if (iVar6 != 0) goto LAB_00873b24;
      bVar3 = false;
    }
                    /* try { // try from 00873c18 to 00873c1b has its CatchHandler @ 00873ef8 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar7 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 00873c28 to 00873c43 has its CatchHandler @ 00873ea8 */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(plVar8 + 7));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00873d84 to 00873d93 has its CatchHandler @ 00873ea0 */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_00873f44;
      }
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (*(int *)(plVar4 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00873d64 to 00873d73 has its CatchHandler @ 00873f04 */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_00873f44;
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
                    /* try { // try from 00873cc4 to 00873ccf has its CatchHandler @ 00873f0c */
        folly::dynamic::dynamic(local_d0,(dynamic *)(plVar4 + 8));
        local_a0 = 0;
                    /* try { // try from 00873cd4 to 00873ceb has its CatchHandler @ 00873f10 */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (this,param_3,uVar1,pcVar9,local_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 00873cfc to 00873d07 has its CatchHandler @ 00873f00 */
          (*(code *)(&PTR_FUN_0098f088)[local_a0])(&uStack_d1,local_d0);
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
LAB_00873f44:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00873f48  FUN_00873f48 =====

void FUN_00873f48(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 00873f50  FUN_00873f50 =====

void FUN_00873f50(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 00873f58  FUN_00873f58 =====

void FUN_00873f58(undefined8 *param_1,long param_2,long param_3)

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
                    /* try { // try from 00873fa0 to 00873fa7 has its CatchHandler @ 0087428c */
  plVar5 = (long *)operator_new(0x68);
  *plVar5 = (long)&PTR_FUN_00993308;
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
                    /* try { // try from 00873fe4 to 00873ff3 has its CatchHandler @ 00874260 */
  facebook::react::EventEmitter::EventEmitter(pEVar1,&local_70,&local_80);
  *(undefined ***)pEVar1 = &PTR_FUN_0097ff10;
                    /* try { // try from 00874004 to 0087400b has its CatchHandler @ 00874250 */
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
  plVar5[3] = (long)&PTR_FUN_00993358;
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
                    /* try { // try from 008740bc to 008740c3 has its CatchHandler @ 00874240 */
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
                    /* try { // try from 00874110 to 00874127 has its CatchHandler @ 00874210 */
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
                    /* try { // try from 0087417c to 00874187 has its CatchHandler @ 008741f0 */
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


// ===== 008742b4  FUN_008742b4 =====

void FUN_008742b4(void)

{
  return;
}


// ===== 008742b8  FUN_008742b8 =====

void FUN_008742b8(long param_1)

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


// ===== 00874308  FUN_00874308 =====

void FUN_00874308(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00993150;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00874318  FUN_00874318 =====

void FUN_00874318(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00993150;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00874348  FUN_00874348 =====

void FUN_00874348(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00874350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00874354  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00874358  FUN_00874358 =====

void FUN_00874358(long *param_1)

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


// ===== 00874418  FUN_00874418 =====

void FUN_00874418(long param_1)

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


// ===== 00874480  FUN_00874480 =====

bool FUN_00874480(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 00874498  FUN_00874498 =====

bool FUN_00874498(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 008744b0  FUN_008744b0 =====

void FUN_008744b0(long param_1)

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


// ===== 00874500  FUN_00874500 =====

void FUN_00874500(long param_1)

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


// ===== 00874550  FUN_00874550 =====

void FUN_00874550(void)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x6f8);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_00993268;
  memset(__s,0,0x6e0);
                    /* try { // try from 0087458c to 0087459f has its CatchHandler @ 0087460c */
  FUN_00788b10(__s,PTR_VTT_0099eea0 + 0x10);
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
  puVar1 = PTR_vtable_0099ee98;
  *(undefined1 *)((long)puVar2 + 0x6f4) = 0;
  *(undefined4 *)(puVar2 + 0xd9) = 0;
  puVar2[3] = puVar1 + 0x20;
  puVar1 = 
  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSScreenContainerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_23RNSScreenContainerPropsENS0_30RNSScreenContainerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e948
  ;
  *(undefined2 *)((long)puVar2 + 0x6cc) = 0;
  *(undefined8 **)puVar1 = __s;
  *(undefined8 **)(puVar1 + 8) = puVar2;
  return;
}


// ===== 00874628  FUN_00874628 =====

void FUN_00874628(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00993268;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00874638  FUN_00874638 =====

void FUN_00874638(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00993268;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00874668  FUN_00874668 =====

void FUN_00874668(long param_1)

{
  FUN_0078917c(param_1 + 0x18,PTR_VTT_0099eea0 + 8);
  return;
}


// ===== 0087467c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00874680  FUN_00874680 =====

void FUN_00874680(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009932b8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00874690  FUN_00874690 =====

void FUN_00874690(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009932b8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008746c0  FUN_008746c0 =====

void FUN_008746c0(long param_1)

{
  FUN_0078917c(param_1 + 0x18,PTR_VTT_0099eea0 + 8);
  return;
}


// ===== 008746d4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008746d8  FUN_008746d8 =====

void FUN_008746d8(long param_1)

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


// ===== 00874728  FUN_00874728 =====

void FUN_00874728(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00993308;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00874738  FUN_00874738 =====

void FUN_00874738(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00993308;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00874768  FUN_00874768 =====

void FUN_00874768(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00874770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00874774  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00874778  FUN_00874778 =====

void FUN_00874778(long *param_1)

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


// ===== 00874830  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_41RNSScreenNavigationContainerComponentNameEEEENS0_33RNSScreenNavigationContainerPropsENS0_40RNSScreenNavigationContainerEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_41RNSScreenNavigationContainerComponentNameEEEENS0_33RNSScreenNavigationContainerPropsENS0_40RNSScreenNavigationContainerEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE
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
  undefined4 local_fd0 [2];
  undefined8 *local_fc8;
  void *local_fc0;
  void *pvStack_fb8;
  undefined8 local_fb0;
  void *pvStack_fa8;
  void *local_fa0;
  undefined8 uStack_f98;
  void *local_f90;
  void *pvStack_f88;
  undefined8 uStack_f80;
  undefined8 uStack_f78;
  undefined *local_f70;
  undefined8 uStack_f68;
  undefined8 local_f60;
  undefined8 uStack_f58;
  undefined4 local_f50 [2];
  undefined8 local_f48;
  undefined8 uStack_f40;
  undefined8 local_f38;
  undefined8 uStack_f30;
  undefined4 local_f28;
  undefined4 local_f20;
  undefined1 local_f1c;
  undefined8 local_f1b;
  undefined8 local_f13;
  undefined8 uStack_f0b;
  undefined8 local_f03;
  undefined8 uStack_efb;
  undefined8 local_ef3;
  undefined8 uStack_eeb;
  undefined8 local_ee3;
  undefined6 uStack_edb;
  undefined2 uStack_ed5;
  undefined6 uStack_ed3;
  undefined8 uStack_ecd;
  undefined4 local_ec5;
  undefined8 local_ec1;
  undefined1 local_eb9;
  undefined1 uStack_eb8;
  undefined7 uStack_eb7;
  undefined8 uStack_eb0;
  undefined8 uStack_ea8;
  undefined8 uStack_ea0;
  undefined8 local_e98;
  undefined8 uStack_e90;
  undefined8 local_e88;
  undefined8 uStack_e80;
  undefined8 local_e78;
  undefined8 uStack_e70;
  undefined8 local_e68;
  undefined8 uStack_e60;
  undefined8 uStack_e58;
  undefined8 local_e50;
  undefined8 local_e48;
  undefined8 uStack_e40;
  undefined8 local_e38;
  undefined4 uStack_e30;
  undefined4 uStack_e2c;
  undefined4 uStack_e28;
  undefined4 uStack_e24;
  undefined4 uStack_e20;
  undefined4 uStack_e1c;
  undefined8 local_e18;
  undefined8 uStack_e10;
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
  undefined4 local_db8;
  undefined1 local_db4;
  undefined4 local_db0;
  undefined1 local_dac;
  undefined4 local_da8;
  undefined1 local_da4;
  undefined4 local_da0;
  undefined1 local_d9c;
  undefined4 local_d98;
  undefined1 local_d94;
  undefined4 local_d90;
  undefined1 local_d8c;
  undefined1 local_d88;
  undefined1 local_d84;
  undefined1 local_d78;
  undefined8 local_d70;
  undefined8 uStack_d68;
  undefined8 uStack_d60;
  undefined8 uStack_d58;
  undefined8 local_d50;
  undefined8 uStack_d48;
  undefined8 uStack_d40;
  undefined1 uStack_d38;
  undefined7 local_d37;
  undefined1 uStack_d30;
  undefined8 uStack_d2f;
  undefined8 local_d24;
  undefined8 uStack_d1c;
  undefined8 uStack_d14;
  undefined8 uStack_d0c;
  undefined8 local_d04;
  undefined8 uStack_cfc;
  undefined8 uStack_cf4;
  undefined8 uStack_cec;
  undefined8 local_ce4;
  undefined8 uStack_cdc;
  undefined8 uStack_cd4;
  undefined5 uStack_ccc;
  undefined3 local_cc7;
  undefined5 uStack_cc4;
  undefined1 local_cbc;
  undefined1 local_cb8;
  undefined1 local_cb4;
  undefined1 local_cb0;
  undefined1 local_cac;
  undefined1 local_ca8;
  undefined1 local_c90;
  undefined8 local_c88;
  undefined8 uStack_c80;
  undefined8 local_c78;
  undefined4 local_c70;
  undefined1 local_c6c;
  undefined4 local_c6b;
  undefined1 local_c67;
  undefined1 local_c66;
  undefined8 local_c60;
  undefined8 uStack_c58;
  undefined8 uStack_c50;
  undefined8 uStack_c48;
  undefined8 local_c40;
  undefined7 uStack_c38;
  undefined4 uStack_c31;
  undefined8 local_c2c;
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
  undefined1 local_bb0;
  undefined1 local_bac;
  undefined1 local_ba4;
  undefined1 local_ba0;
  undefined1 local_b98;
  undefined1 local_b94;
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
  undefined1 local_b58;
  undefined1 local_b54;
  undefined1 local_b50;
  undefined1 local_b4c;
  undefined1 local_b48;
  undefined1 local_b44;
  undefined1 local_b40;
  undefined1 local_b3c;
  undefined1 local_b38;
  undefined1 local_b34;
  undefined1 local_b30;
  undefined1 local_b2c;
  undefined8 local_b28;
  undefined8 uStack_b20;
  undefined8 local_b18;
  undefined8 uStack_b10;
  undefined8 uStack_b08;
  undefined8 uStack_b00;
  undefined2 local_af8;
  undefined8 local_af4;
  undefined1 local_aec;
  undefined8 local_ae8;
  undefined8 local_ae0;
  undefined8 uStack_ad8;
  undefined1 local_ad0;
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
  undefined8 uStack_a78;
  undefined8 uStack_a70;
  undefined8 local_a68;
  undefined8 uStack_a60;
  undefined8 uStack_a58;
  undefined8 uStack_a50;
  undefined8 local_a48;
  undefined8 uStack_a40;
  undefined8 uStack_a38;
  undefined8 uStack_a30;
  undefined8 local_a28;
  undefined8 uStack_a20;
  undefined8 local_a18;
  undefined8 uStack_a10;
  undefined8 local_a08;
  undefined8 uStack_a00;
  undefined8 local_9f8;
  undefined8 uStack_9f0;
  undefined8 local_9e8;
  undefined8 uStack_9e0;
  undefined8 local_9d8;
  undefined6 uStack_9d0;
  undefined2 uStack_9ca;
  undefined6 uStack_9c8;
  undefined1 local_9c0;
  undefined1 local_9bc;
  undefined1 local_9b8;
  undefined8 local_9b4;
  undefined8 uStack_9ac;
  undefined1 local_9a4;
  undefined8 local_9a0;
  undefined2 local_998;
  undefined1 local_996;
  undefined4 local_994;
  undefined1 local_990;
  undefined1 local_930;
  undefined1 local_928;
  undefined1 local_8c8;
  undefined4 local_8c0;
  undefined2 local_8bc;
  undefined1 local_8b8;
  undefined1 local_8b4;
  undefined1 local_8b0;
  undefined1 local_8ac;
  undefined1 local_8a8;
  undefined1 local_8a4;
  undefined1 local_8a0;
  undefined1 local_89c;
  undefined1 local_898;
  undefined1 local_894;
  undefined4 local_890 [2];
  undefined8 local_888;
  undefined8 uStack_880;
  undefined8 local_878;
  undefined8 local_870;
  undefined8 uStack_868;
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
  undefined8 uStack_88;
  void *local_80;
  void *local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  this = (ComponentDescriptor *)operator_new(0x88);
  pvStack_fa8 = (void *)0x0;
  local_fb0 = 0;
  uStack_f98 = 0;
  local_fa0 = (void *)0x0;
  pvStack_f88 = (void *)0x0;
  local_f90 = (void *)0x0;
  uStack_f78 = 0;
  uStack_f80 = 0;
  pvStack_fb8 = (void *)0x0;
  local_fc0 = (void *)0x0;
                    /* try { // try from 00874880 to 0087488b has its CatchHandler @ 00874ea8 */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_fc0);
  local_f8 = 0;
  *(undefined ***)this = &PTR_FUN_00993390;
  local_f0 = 0;
  local_e8 = 0;
  local_e0[0] = 0;
  local_d0[0] = 0;
  local_c8 = 0;
  local_a0 = 0;
  pvStack_90 = (void *)0x0;
  local_98 = (void *)0x0;
  local_80 = (void *)0x0;
  uStack_88 = 0;
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
                    /* try { // try from 008748f8 to 00874903 has its CatchHandler @ 00874ed8 */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1b0);
  local_100 = CONCAT44(local_100._4_4_,0x3f800000);
  local_fd0[0] = 0xffffffff;
  uStack_108 = 0;
  local_110 = (void *)0x0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_fc8 = &local_1b0;
  facebook::react::RawProps::facebook::react::RawProps::parse(&local_f8,this + 0x38);
  memset(local_f50,0,0x6c0);
  puVar5 = PTR_VTT_0099eeb8;
  local_890[0] = 5;
  local_878 = 0;
  local_f70 = *(undefined **)(PTR_VTT_0099eeb8 + 0x20);
  local_f50[0] = 5;
  uStack_f58 = 0;
  local_f60 = 0;
  uStack_f68 = 0;
  local_870 = 0;
  uStack_868 = 0x3f800000;
  uStack_880 = 0;
  local_888 = 0;
  uStack_f40 = 0;
  local_f48 = 0;
  uStack_f30 = 0;
  local_f38 = 0;
  local_f28 = 0x3f800000;
  folly::dynamic::folly::dynamic::destroy(local_890);
  local_f1c = 0;
  local_ec1 = 0;
  uStack_9e0 = _UNK_00488920;
  local_9e8 = _DAT_00488918;
  local_f1b = _s__00375408;
  uStack_ad8 = _UNK_00371598;
  local_ae0 = _DAT_00371590;
  uStack_9f0 = _UNK_00488910;
  local_9f8 = _DAT_00488908;
  local_e04 = 0;
  uStack_a00 = _UNK_00488900;
  local_a08 = _DAT_004888f8;
  uStack_a10 = _UNK_004888f0;
  local_a18 = _DAT_004888e8;
  uStack_9c8 = 0;
  local_dfc = 0;
  uStack_e30 = 0;
  local_e38 = 0;
  uStack_e1c = 0;
  uStack_e40 = 0;
  local_e48 = 0;
  uStack_9d0 = 0;
  uStack_9ca = 0;
  local_9d8 = 0;
  local_f20 = 0x10410710;
  local_ec5 = 0x40004;
  uStack_e24 = 0;
  uStack_e20 = 0;
  uStack_e2c = 0;
  uStack_e28 = 0;
  uStack_e10 = 0;
  local_e18 = 0;
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
  local_db8 = 0x7fc00000;
  local_db0 = 0x7fc00000;
  local_da8 = 0x7fc00000;
  local_da0 = 0x7fc00000;
  local_d98 = 0x7fc00000;
  local_d90 = 0x7fc00000;
  uStack_d2f = 0;
  uStack_d30 = 0;
  uStack_d1c = 0;
  local_d24 = 0;
  uStack_d0c = 0;
  uStack_d14 = 0;
  uStack_cfc = 0;
  local_d04 = 0;
  uStack_cec = 0;
  uStack_cf4 = 0;
  uStack_cdc = 0;
  local_ce4 = 0;
  uStack_ccc = 0;
  uStack_cd4 = 0;
  local_cc7 = 0;
  uStack_cc4 = 0;
  local_c6c = 1;
  local_c6b = 0;
  local_c66 = 0x23;
  local_c2c = 0x3f800000;
  uStack_b10 = 0;
  local_b18 = 0;
  uStack_b00 = 0;
  uStack_b08 = 0;
  uStack_b20 = 0;
  local_b28 = 0;
  local_af4 = 0;
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
  uStack_a70 = 0;
  uStack_a78 = 0;
  uStack_a60 = 0;
  local_a68 = 0;
  uStack_a50 = 0;
  uStack_a58 = 0;
  uStack_a40 = 0;
  local_a48 = 0;
  uStack_a30 = 0;
  uStack_a38 = 0;
  uStack_a20 = 0;
  local_a28 = 0;
  uStack_eb7 = 0;
  uStack_f0b = 0;
  local_f13 = 0;
  uStack_efb = 0;
  local_f03 = 0;
  uStack_eeb = 0;
  local_ef3 = 0;
  uStack_edb = 0;
  local_ee3 = 0;
  uStack_ecd = 0;
  uStack_ed5 = 0;
  uStack_ed3 = 0;
  local_eb9 = 0;
  uStack_eb8 = 0;
  uStack_ea8 = 0;
  uStack_eb0 = 0;
  local_e98 = 0;
  uStack_ea0 = 0;
  local_e88 = 0;
  uStack_e90 = 0;
  local_e78 = 0;
  uStack_e80 = 0;
  local_e68 = 0;
  uStack_e70 = 0;
  uStack_e58 = 0;
  uStack_e60 = 0;
  local_e50 = 0;
  local_df4 = 0;
  local_dec = 0;
  local_de4 = 0;
  local_ddc = 0;
  local_dd4 = 0;
  local_dcc = 0;
  local_dc4 = 0;
  local_dbc = 0;
  local_db4 = 0;
  local_dac = 0;
  local_da4 = 0;
  local_d9c = 0;
  local_d94 = 0;
  local_d8c = 0;
  local_d88 = 0;
  local_d84 = 0;
  local_d78 = 0;
  local_cbc = 0;
  local_cb8 = 0;
  local_cb4 = 0;
  local_cb0 = 0;
  local_cac = 0;
  local_ca8 = 0;
  local_c90 = 0;
  uStack_d68 = 0;
  local_d70 = 0;
  uStack_d58 = 0;
  uStack_d60 = 0;
  uStack_d48 = 0;
  local_d50 = 0;
  uStack_d38 = 0;
  local_d37 = 0;
  uStack_d40 = 0;
  uStack_c80 = 0;
  local_c88 = 0;
  local_c78 = 0;
  local_c70 = 0;
  local_c67 = 0;
  uStack_c58 = 0;
  local_c60 = 0;
  uStack_c48 = 0;
  uStack_c50 = 0;
  uStack_c38 = 0;
  uStack_c31 = 0;
  local_c40 = 0;
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
  local_bb0 = 0;
  local_bac = 0;
  local_ba4 = 0;
  local_ba0 = 0;
  local_b98 = 0;
  local_b94 = 0;
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
  local_b58 = 0;
  local_b54 = 0;
  local_b50 = 0;
  local_b4c = 0;
  local_b48 = 0;
  local_b44 = 0;
  local_b40 = 0;
  local_b3c = 0;
  local_b38 = 0;
  local_b34 = 0;
  local_b30 = 0;
  local_b2c = 0;
  local_ae8 = 0;
  local_af8 = 0;
  local_aec = 0;
  local_ad0 = 0;
  local_9c0 = 0;
  local_9bc = 0;
  local_9b8 = 0;
  local_9a0 = 0;
  uStack_9ac = 0;
  local_9b4 = 0;
  local_9a4 = 0;
  local_998 = 0x101;
  local_996 = 0;
  local_994 = 0;
  local_990 = 0;
  local_930 = 0;
  local_928 = 0;
  local_8c8 = 0;
  local_8b8 = 0;
  local_8b4 = 0;
  local_8b0 = 0;
  local_8ac = 0;
  local_8a8 = 0;
  local_8a4 = 0;
  local_8a0 = 0;
  local_89c = 0;
  local_898 = 0;
  local_894 = 0;
  local_8bc = 0;
  local_8c0 = 0;
  local_f70 = PTR_vtable_0099eeb0 + 0x20;
                    /* try { // try from 00874cf0 to 00874d03 has its CatchHandler @ 00874ed8 */
  facebook::react::RNSScreenNavigationContainerProps::RNSScreenNavigationContainerProps
            ((RNSScreenNavigationContainerProps *)local_890,(PropsParserContext *)local_fd0,
             (RNSScreenNavigationContainerProps *)&local_f70,(RawProps *)&local_f8);
  FUN_0078917c(local_890,puVar5 + 8);
  FUN_0078917c(&local_f70,puVar5 + 8);
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
  pvVar8 = local_80;
  pvVar3 = local_78;
  if (local_80 != (void *)0x0) {
    while (pvVar3 != pvVar8) {
      if (*(uint *)((long)pvVar3 + -8) != 0xffffffff) {
                    /* try { // try from 00874e08 to 00874e13 has its CatchHandler @ 00874edc */
        (*(code *)(&PTR_FUN_0098f088)[*(uint *)((long)pvVar3 + -8)])
                  (&local_f70,(void *)((long)pvVar3 + -0x38));
      }
      *(undefined4 *)((long)pvVar3 + -8) = 0xffffffff;
      pvVar3 = (void *)((long)pvVar3 + -0x38);
    }
    local_78 = pvVar8;
    operator_delete(local_80);
  }
  if (local_98 != (void *)0x0) {
    pvStack_90 = local_98;
    operator_delete(local_98);
  }
  folly::dynamic::folly::dynamic::destroy(local_d0);
  facebook::jsi::Value::~Value((Value *)local_e0);
  if (local_f90 != (void *)0x0) {
    pvStack_f88 = local_f90;
    operator_delete(local_f90);
  }
  if (pvStack_fa8 != (void *)0x0) {
    local_fa0 = pvStack_fa8;
    operator_delete(pvStack_fa8);
  }
  if (local_fc0 != (void *)0x0) {
    pvStack_fb8 = local_fc0;
    operator_delete(local_fc0);
  }
  *param_1 = this;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00874ee0  FUN_00874ee0 =====

void FUN_00874ee0(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 00874f04  FUN_00874f04 =====

undefined * FUN_00874f04(void)

{
  return PTR_RNSScreenNavigationContainerComponentName_0099eea8;
}


// ===== 00874f10  FUN_00874f10 =====

undefined * FUN_00874f10(void)

{
  return PTR_RNSScreenNavigationContainerComponentName_0099eea8;
}


// ===== 00874f1c  FUN_00874f1c =====

undefined8 FUN_00874f1c(void)

{
  return 0x61;
}


// ===== 00874f24  FUN_00874f24 =====

void FUN_00874f24(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

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
  lVar9 = *(long *)(lVar4 + 0x28);
  uVar5 = (**(code **)(*param_2 + 0x20))();
  puVar6 = (undefined8 *)operator_new(0x400);
  pYVar1 = (YogaLayoutableShadowNode *)(puVar6 + 3);
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_00993420;
                    /* try { // try from 00874f90 to 00874f9f has its CatchHandler @ 00875078 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4,uVar5);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_00993470;
  uVar3 = *(uint *)((long)puVar6 + 0x6c);
  uVar2 = uVar3 & 3 | (uint)((*(byte *)(lVar7 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)puVar6 + 0x6c) = uVar3 & 0xfffffff8 | uVar2;
  if ((*(uint *)(lVar7 + 0x50) & 0x30000000) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    if (*(char *)(lVar7 + 0x5b4) != '\0') {
      uVar5 = *(undefined4 *)(lVar7 + 0x5b0);
    }
  }
  *(undefined4 *)(puVar6 + 10) = uVar5;
  lVar8 = *param_2;
  *(uint *)((long)puVar6 + 0x6c) =
       uVar3 & 0xfffff000 |
       uVar3 & 0x7f8 | uVar2 |
       (uint)((*(char *)(lVar7 + 0x6b0) != '\0' || *(char *)(lVar7 + 0x6b1) != '\0') ||
             *(char *)(lVar7 + 0x1e8) != '\0') << 0xb;
                    /* try { // try from 0087502c to 00875037 has its CatchHandler @ 00875068 */
  (**(code **)(lVar8 + 0x60))(param_2,pYVar1);
  *param_1 = pYVar1;
  param_1[1] = puVar6;
  if (*(long *)(lVar4 + 0x28) != lVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 008750a8  FUN_008750a8 =====

void FUN_008750a8(undefined8 *param_1,long *param_2,ShadowNode *param_3,ShadowNodeFragment *param_4)

{
  YogaLayoutableShadowNode *pYVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined4 uVar7;
  YogaLayoutableShadowNode *local_78;
  long *local_70;
  YogaLayoutableShadowNode *local_68;
  long *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  plVar5 = (long *)operator_new(0x400);
  pYVar1 = (YogaLayoutableShadowNode *)(plVar5 + 3);
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_00993420;
                    /* try { // try from 00875100 to 0087510f has its CatchHandler @ 00875250 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4);
  lVar6 = plVar5[4];
  plVar5[3] = (long)&PTR_FUN_00993470;
  uVar3 = *(uint *)((long)plVar5 + 0x6c);
  uVar2 = uVar3 & 3 | (uint)((*(byte *)(lVar6 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)plVar5 + 0x6c) = uVar3 & 0xfffffff8 | uVar2;
  if ((*(uint *)(lVar6 + 0x50) & 0x30000000) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    if (*(char *)(lVar6 + 0x5b4) != '\0') {
      uVar7 = *(undefined4 *)(lVar6 + 0x5b0);
    }
  }
  *(undefined4 *)(plVar5 + 10) = uVar7;
  *(uint *)((long)plVar5 + 0x6c) =
       uVar3 & 0xfffff000 |
       uVar3 & 0x7f8 | uVar2 |
       (uint)((*(char *)(lVar6 + 0x6b0) != '\0' || *(char *)(lVar6 + 0x6b1) != '\0') ||
             *(char *)(lVar6 + 0x1e8) != '\0') << 0xb;
  local_68 = pYVar1;
  local_60 = plVar5;
                    /* try { // try from 00875194 to 008751a3 has its CatchHandler @ 00875268 */
  facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::
  completeClone(pYVar1,param_3,param_4);
  local_78 = pYVar1;
  local_70 = plVar5;
  FUN_00757d00(1,plVar5 + 1);
                    /* try { // try from 008751b4 to 008751c3 has its CatchHandler @ 00875240 */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_78);
  plVar5 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar6 = FUN_00757990(0xffffffffffffffff,local_70 + 1), lVar6 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pYVar1 = local_68;
                    /* try { // try from 00875200 to 0087520b has its CatchHandler @ 00875268 */
  (**(code **)(*param_2 + 0x60))(param_2,local_68);
  *param_1 = pYVar1;
  param_1[1] = local_60;
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00875290  FUN_00875290 =====

void FUN_00875290(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x008752a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 008752a4  FUN_008752a4 =====

void FUN_008752a4(undefined8 *param_1,long param_2,PropsParserContext *param_3,long *param_4,
                 RawProps *param_5)

{
  RNSScreenNavigationContainerProps *this;
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
  RNSScreenNavigationContainerProps *pRVar12;
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
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_41RNSScreenNavigationContainerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_33RNSScreenNavigationContainerPropsENS0_40RNSScreenNavigationContainerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e960
         & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_41RNSScreenNavigationContainerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_33RNSScreenNavigationContainerPropsENS0_40RNSScreenNavigationContainerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e960
                                   ), iVar6 != 0)) {
                    /* try { // try from 008756d8 to 008756db has its CatchHandler @ 00875708 */
      FUN_00875e04();
      __cxa_atexit(FUN_00875db4,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_41RNSScreenNavigationContainerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_33RNSScreenNavigationContainerPropsENS0_40RNSScreenNavigationContainerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e958
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_41RNSScreenNavigationContainerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_33RNSScreenNavigationContainerPropsENS0_40RNSScreenNavigationContainerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e960
                         );
    }
    lVar11 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_41RNSScreenNavigationContainerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_33RNSScreenNavigationContainerPropsENS0_40RNSScreenNavigationContainerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e958
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_41RNSScreenNavigationContainerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_33RNSScreenNavigationContainerPropsENS0_40RNSScreenNavigationContainerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e958
    ;
    param_1[1] = lVar11;
    if (lVar11 != 0) {
      FUN_00757d00(1,lVar11 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    pRVar12 = (RNSScreenNavigationContainerProps *)*param_4;
    if (pRVar12 == (RNSScreenNavigationContainerProps *)0x0) {
      if (((*
            PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_41RNSScreenNavigationContainerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_33RNSScreenNavigationContainerPropsENS0_40RNSScreenNavigationContainerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e960
           & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_41RNSScreenNavigationContainerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_33RNSScreenNavigationContainerPropsENS0_40RNSScreenNavigationContainerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e960
                                     ), iVar6 != 0)) {
                    /* try { // try from 00875658 to 0087565b has its CatchHandler @ 00875720 */
        FUN_00875e04();
        __cxa_atexit(FUN_00875db4,
                     PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_41RNSScreenNavigationContainerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_33RNSScreenNavigationContainerPropsENS0_40RNSScreenNavigationContainerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e958
                     ,&PTR_LOOP_008d5d30);
        __cxa_guard_release(
                           PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_41RNSScreenNavigationContainerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_33RNSScreenNavigationContainerPropsENS0_40RNSScreenNavigationContainerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e960
                           );
      }
      pRVar12 = *(RNSScreenNavigationContainerProps **)
                 PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_41RNSScreenNavigationContainerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_33RNSScreenNavigationContainerPropsENS0_40RNSScreenNavigationContainerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e958
      ;
    }
    plVar8 = (long *)operator_new(0x6f8);
    this = (RNSScreenNavigationContainerProps *)(plVar8 + 3);
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = (long)&PTR_FUN_00993588;
                    /* try { // try from 00875384 to 00875397 has its CatchHandler @ 00875794 */
    facebook::react::RNSScreenNavigationContainerProps::RNSScreenNavigationContainerProps
              (this,param_3,pRVar12,param_5);
                    /* try { // try from 0087539c to 008753af has its CatchHandler @ 008757ac */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if ((((uVar7 & 1) == 0) ||
        (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar7 & 1) == 0)) ||
       (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
                enablePropsUpdateReconciliationAndroid(), (uVar7 & 1) == 0)) {
LAB_008753d8:
      FUN_00757d00(1,plVar8 + 1);
      if (*param_4 == 0) {
        if (((*
              PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_41RNSScreenNavigationContainerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_33RNSScreenNavigationContainerPropsENS0_40RNSScreenNavigationContainerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e960
             & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(
                                       PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_41RNSScreenNavigationContainerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_33RNSScreenNavigationContainerPropsENS0_40RNSScreenNavigationContainerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e960
                                       ), iVar6 != 0)) {
                    /* try { // try from 00875698 to 0087569b has its CatchHandler @ 0087570c */
          FUN_00875e04();
          __cxa_atexit(FUN_00875db4,
                       PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_41RNSScreenNavigationContainerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_33RNSScreenNavigationContainerPropsENS0_40RNSScreenNavigationContainerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e958
                       ,&PTR_LOOP_008d5d30);
          __cxa_guard_release(
                             PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_41RNSScreenNavigationContainerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_33RNSScreenNavigationContainerPropsENS0_40RNSScreenNavigationContainerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e960
                             );
        }
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 00875440 to 00875453 has its CatchHandler @ 00875738 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*(undefined8 *)
                         PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_41RNSScreenNavigationContainerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_33RNSScreenNavigationContainerPropsENS0_40RNSScreenNavigationContainerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e958
                   ,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
LAB_0087548c:
          (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
        }
        else if (local_b0 != (dynamic *)0x0) {
          lVar11 = 5;
          pdVar10 = local_b0;
          goto LAB_0087548c;
        }
        if (plVar8 != (long *)0x0) goto LAB_008754a0;
      }
      else {
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 008753f4 to 00875407 has its CatchHandler @ 00875760 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*param_4,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
        }
        else {
          if (local_b0 == (dynamic *)0x0) goto LAB_008754a0;
          lVar11 = 5;
          pdVar10 = local_b0;
        }
        (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
LAB_008754a0:
        lVar11 = FUN_00757990(0xffffffffffffffff,plVar8 + 1);
        if (lVar11 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 008753bc to 008753c7 has its CatchHandler @ 00875734 */
      pcVar9 = (char *)(**(code **)(*(long *)this + 0x10))(this);
      iVar6 = strcmp(PTR_RNSScreenNavigationContainerComponentName_0099eea8,pcVar9);
      if (iVar6 != 0) goto LAB_008753d8;
      bVar3 = false;
    }
                    /* try { // try from 008754cc to 008754cf has its CatchHandler @ 008757ac */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar7 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 008754dc to 008754f7 has its CatchHandler @ 0087575c */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(plVar8 + 7));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00875638 to 00875647 has its CatchHandler @ 00875754 */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_008757f8;
      }
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (*(int *)(plVar4 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00875618 to 00875627 has its CatchHandler @ 008757b8 */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_008757f8;
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
                    /* try { // try from 00875578 to 00875583 has its CatchHandler @ 008757c0 */
        folly::dynamic::dynamic(local_d0,(dynamic *)(plVar4 + 8));
        local_a0 = 0;
                    /* try { // try from 00875588 to 0087559f has its CatchHandler @ 008757c4 */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (this,param_3,uVar1,pcVar9,local_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 008755b0 to 008755bb has its CatchHandler @ 008757b4 */
          (*(code *)(&PTR_FUN_0098f088)[local_a0])(&uStack_d1,local_d0);
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
LAB_008757f8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008757fc  FUN_008757fc =====

void FUN_008757fc(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 00875804  FUN_00875804 =====

void FUN_00875804(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 0087580c  FUN_0087580c =====

void FUN_0087580c(undefined8 *param_1,long param_2,long param_3)

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
                    /* try { // try from 00875854 to 0087585b has its CatchHandler @ 00875b40 */
  plVar5 = (long *)operator_new(0x68);
  *plVar5 = (long)&PTR_FUN_009935d8;
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
                    /* try { // try from 00875898 to 008758a7 has its CatchHandler @ 00875b14 */
  facebook::react::EventEmitter::EventEmitter(pEVar1,&local_70,&local_80);
  *(undefined ***)pEVar1 = &PTR_FUN_0097ff10;
                    /* try { // try from 008758b8 to 008758bf has its CatchHandler @ 00875b04 */
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
  plVar5[3] = (long)&PTR_FUN_00993628;
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
                    /* try { // try from 00875970 to 00875977 has its CatchHandler @ 00875af4 */
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
                    /* try { // try from 008759c4 to 008759db has its CatchHandler @ 00875ac4 */
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
                    /* try { // try from 00875a30 to 00875a3b has its CatchHandler @ 00875aa4 */
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


// ===== 00875b68  FUN_00875b68 =====

void FUN_00875b68(void)

{
  return;
}


// ===== 00875b6c  FUN_00875b6c =====

void FUN_00875b6c(long param_1)

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


// ===== 00875bbc  FUN_00875bbc =====

void FUN_00875bbc(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00993420;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00875bcc  FUN_00875bcc =====

void FUN_00875bcc(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00993420;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00875bfc  FUN_00875bfc =====

void FUN_00875bfc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00875c04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00875c08  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00875c0c  FUN_00875c0c =====

void FUN_00875c0c(long *param_1)

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


// ===== 00875ccc  FUN_00875ccc =====

void FUN_00875ccc(long param_1)

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


// ===== 00875d34  FUN_00875d34 =====

bool FUN_00875d34(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 00875d4c  FUN_00875d4c =====

bool FUN_00875d4c(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 00875d64  FUN_00875d64 =====

void FUN_00875d64(long param_1)

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


// ===== 00875db4  FUN_00875db4 =====

void FUN_00875db4(long param_1)

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


// ===== 00875e04  FUN_00875e04 =====

void FUN_00875e04(void)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x6f8);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_00993538;
  memset(__s,0,0x6e0);
                    /* try { // try from 00875e40 to 00875e53 has its CatchHandler @ 00875ec0 */
  FUN_00788b10(__s,PTR_VTT_0099eeb8 + 0x10);
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
  puVar1 = PTR_vtable_0099eeb0;
  *(undefined1 *)((long)puVar2 + 0x6f4) = 0;
  *(undefined4 *)(puVar2 + 0xd9) = 0;
  puVar2[3] = puVar1 + 0x20;
  puVar1 = 
  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_41RNSScreenNavigationContainerComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_33RNSScreenNavigationContainerPropsENS0_40RNSScreenNavigationContainerEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099e958
  ;
  *(undefined2 *)((long)puVar2 + 0x6cc) = 0;
  *(undefined8 **)puVar1 = __s;
  *(undefined8 **)(puVar1 + 8) = puVar2;
  return;
}


// ===== 00875edc  FUN_00875edc =====

void FUN_00875edc(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00993538;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00875eec  FUN_00875eec =====

void FUN_00875eec(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00993538;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00875f1c  FUN_00875f1c =====

void FUN_00875f1c(long param_1)

{
  FUN_0078917c(param_1 + 0x18,PTR_VTT_0099eeb8 + 8);
  return;
}


// ===== 00875f30  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00875f34  FUN_00875f34 =====

void FUN_00875f34(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00993588;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00875f44  FUN_00875f44 =====

void FUN_00875f44(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00993588;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00875f74  FUN_00875f74 =====

void FUN_00875f74(long param_1)

{
  FUN_0078917c(param_1 + 0x18,PTR_VTT_0099eeb8 + 8);
  return;
}


// ===== 00875f88  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00875f8c  FUN_00875f8c =====

void FUN_00875f8c(long param_1)

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


// ===== 00875fdc  FUN_00875fdc =====

void FUN_00875fdc(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009935d8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00875fec  FUN_00875fec =====

void FUN_00875fec(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009935d8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0087601c  FUN_0087601c =====

void FUN_0087601c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00876024. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00876028  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0087602c  FUN_0087602c =====

void FUN_0087602c(long *param_1)

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


// ===== 008760e4  facebook::react::concreteComponentDescriptorConstructor<facebook::react::RNSScreenStackHeaderConfigComponentDescriptor> =====

/* std::__ndk1::unique_ptr<facebook::react::ComponentDescriptor const,
   std::__ndk1::default_delete<facebook::react::ComponentDescriptor const> >
   facebook::react::concreteComponentDescriptorConstructor<facebook::react::RNSScreenStackHeaderConfigComponentDescriptor>(facebook::react::ComponentDescriptorParameters
   const&) */

void __thiscall
facebook::react::
concreteComponentDescriptorConstructor<facebook::react::RNSScreenStackHeaderConfigComponentDescriptor>
          (react *this,ComponentDescriptorParameters *param_1)

{
  byte bVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  ComponentDescriptor *this_00;
  long lVar5;
  undefined8 *in_x8;
  long *plVar6;
  void *pvVar7;
  undefined4 local_1300 [2];
  undefined8 *local_12f8;
  void *local_12f0;
  void *pvStack_12e8;
  undefined8 local_12e0;
  void *pvStack_12d8;
  void *local_12d0;
  undefined8 uStack_12c8;
  void *local_12c0;
  void *pvStack_12b8;
  undefined8 uStack_12b0;
  undefined8 uStack_12a8;
  RNSScreenStackHeaderConfigProps aRStack_12a0 [2168];
  RNSScreenStackHeaderConfigProps aRStack_a28 [2168];
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
  undefined8 uStack_88;
  void *local_80;
  void *local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  this_00 = (ComponentDescriptor *)operator_new(0x88);
  pvStack_12d8 = (void *)0x0;
  local_12e0 = 0;
  uStack_12c8 = 0;
  local_12d0 = (void *)0x0;
  pvStack_12b8 = (void *)0x0;
  local_12c0 = (void *)0x0;
  uStack_12a8 = 0;
  uStack_12b0 = 0;
  pvStack_12e8 = (void *)0x0;
  local_12f0 = (void *)0x0;
                    /* try { // try from 00876138 to 00876143 has its CatchHandler @ 008763d0 */
  ::facebook::react::ComponentDescriptor::ComponentDescriptor
            (this_00,(ComponentDescriptorParameters *)this,(RawPropsParser *)&local_12f0);
  local_f8 = 0;
  *(undefined ***)this_00 = &PTR_FUN_00993708;
  local_f0 = 0;
  local_e8 = 0;
  local_e0[0] = 0;
  local_d0[0] = 0;
  local_c8 = 0;
  local_a0 = 0;
  pvStack_90 = (void *)0x0;
  local_98 = (void *)0x0;
  local_80 = (void *)0x0;
  uStack_88 = 0;
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
                    /* try { // try from 008761b0 to 008761c3 has its CatchHandler @ 00876400 */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1b0);
  local_100 = CONCAT44(local_100._4_4_,0x3f800000);
  local_1300[0] = 0xffffffff;
  uStack_108 = 0;
  local_110 = (void *)0x0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_12f8 = &local_1b0;
  ::facebook::react::RawProps::facebook::react::RawProps::parse(&local_f8,this_00 + 0x38);
  memset(aRStack_12a0,0,0x878);
                    /* try { // try from 00876200 to 0087621b has its CatchHandler @ 00876400 */
  FUN_008775b4(aRStack_12a0);
  ::facebook::react::RNSScreenStackHeaderConfigProps::RNSScreenStackHeaderConfigProps
            (aRStack_a28,(PropsParserContext *)local_1300,aRStack_12a0,(RawProps *)&local_f8);
  FUN_008776f8(aRStack_a28);
  FUN_008776f8(aRStack_12a0);
  ::facebook::react::RawPropsParser::facebook::react::RawPropsParser::postPrepare(this_00 + 0x38);
  pvVar3 = local_120;
  puVar4 = (undefined8 *)local_110;
  while (puVar4 != (undefined8 *)0x0) {
    plVar6 = (long *)puVar4[6];
    pvVar7 = (void *)*puVar4;
    local_120 = pvVar3;
    if ((plVar6 == (long *)0x0) || (lVar5 = FUN_00757990(0xffffffffffffffff,plVar6 + 1), lVar5 != 0)
       ) {
      bVar1 = *(byte *)(puVar4 + 2);
    }
    else {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__ndk1::__shared_weak_count::__release_weak();
      bVar1 = *(byte *)(puVar4 + 2);
    }
    if ((bVar1 & 1) != 0) {
      operator_delete((void *)puVar4[4]);
    }
    operator_delete(puVar4);
    pvVar3 = local_120;
    puVar4 = (undefined8 *)pvVar7;
  }
  local_120 = (void *)0x0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)&uStack_158);
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)&uStack_188);
  std::__ndk1::mutex::~mutex((mutex *)&local_1b0);
  pvVar7 = local_80;
  pvVar3 = local_78;
  if (local_80 != (void *)0x0) {
    while (pvVar3 != pvVar7) {
      if (*(uint *)((long)pvVar3 + -8) != 0xffffffff) {
                    /* try { // try from 00876320 to 0087632b has its CatchHandler @ 00876404 */
        (*(code *)(&PTR_FUN_0098f088)[*(uint *)((long)pvVar3 + -8)])
                  (aRStack_12a0,(void *)((long)pvVar3 + -0x38));
      }
      *(undefined4 *)((long)pvVar3 + -8) = 0xffffffff;
      pvVar3 = (void *)((long)pvVar3 + -0x38);
    }
    local_78 = pvVar7;
    operator_delete(local_80);
  }
  if (local_98 != (void *)0x0) {
    pvStack_90 = local_98;
    operator_delete(local_98);
  }
  folly::dynamic::folly::dynamic::destroy(local_d0);
  ::facebook::jsi::Value::~Value((Value *)local_e0);
  *(undefined ***)this_00 = &PTR_FUN_00993660;
  if (local_12c0 != (void *)0x0) {
    pvStack_12b8 = local_12c0;
    operator_delete(local_12c0);
  }
  if (pvStack_12d8 != (void *)0x0) {
    local_12d0 = pvStack_12d8;
    operator_delete(pvStack_12d8);
  }
  if (local_12f0 != (void *)0x0) {
    pvStack_12e8 = local_12f0;
    operator_delete(local_12f0);
  }
  *in_x8 = this_00;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00876408  FUN_00876408 =====

void FUN_00876408(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 0087642c  FUN_0087642c =====

undefined * FUN_0087642c(void)

{
  return PTR_RNSScreenStackHeaderConfigComponentName_0099eec0;
}


// ===== 00876438  FUN_00876438 =====

undefined * FUN_00876438(void)

{
  return PTR_RNSScreenStackHeaderConfigComponentName_0099eec0;
}


// ===== 00876444  FUN_00876444 =====

undefined8 FUN_00876444(void)

{
  return 0x61;
}


// ===== 0087644c  FUN_0087644c =====

void FUN_0087644c(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  YogaLayoutableShadowNode *pYVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  long lVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  
  lVar7 = tpidr_el0;
  lVar10 = *(long *)(lVar7 + 0x28);
  uVar8 = (**(code **)(*param_2 + 0x20))();
  puVar9 = (undefined8 *)operator_new(0x400);
  pYVar1 = (YogaLayoutableShadowNode *)(puVar9 + 3);
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = &PTR_FUN_00993780;
                    /* try { // try from 008764b8 to 008764c7 has its CatchHandler @ 008765b0 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4,uVar8);
  lVar11 = puVar9[4];
  puVar9[3] = &PTR_FUN_009937d0;
  uVar3 = *(uint *)((long)puVar9 + 0x6c);
  uVar2 = uVar3 & 3 | (uint)((*(byte *)(lVar11 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)puVar9 + 0x6c) = uVar3 & 0xfffffff8 | uVar2;
  if ((*(uint *)(lVar11 + 0x50) & 0x30000000) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    if (*(char *)(lVar11 + 0x5b4) != '\0') {
      uVar8 = *(undefined4 *)(lVar11 + 0x5b0);
    }
  }
  *(undefined4 *)(puVar9 + 10) = uVar8;
  cVar4 = *(char *)(lVar11 + 0x6b0);
  cVar5 = *(char *)(lVar11 + 0x6b1);
  cVar6 = *(char *)(lVar11 + 0x1e8);
  lVar11 = *param_2;
  puVar9[3] = PTR_vtable_0099eed8 + 0x10;
  *(uint *)((long)puVar9 + 0x6c) =
       uVar3 & 0xfffff000 |
       uVar3 & 0x7f8 | uVar2 | (uint)((cVar4 != '\0' || cVar5 != '\0') || cVar6 != '\0') << 0xb;
                    /* try { // try from 00876564 to 0087656f has its CatchHandler @ 008765a0 */
  (**(code **)(lVar11 + 0x60))(param_2,pYVar1);
  *param_1 = pYVar1;
  param_1[1] = puVar9;
  if (*(long *)(lVar7 + 0x28) != lVar10) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 008765e0  FUN_008765e0 =====

void FUN_008765e0(undefined8 *param_1,long *param_2,ShadowNode *param_3,ShadowNodeFragment *param_4)

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
  *plVar8 = (long)&PTR_FUN_00993780;
                    /* try { // try from 00876638 to 00876647 has its CatchHandler @ 00876798 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4);
  lVar9 = plVar8[4];
  plVar8[3] = (long)&PTR_FUN_009937d0;
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
  plVar8[3] = (long)(PTR_vtable_0099eed8 + 0x10);
  *(uint *)((long)plVar8 + 0x6c) =
       uVar3 & 0xfffff000 |
       uVar3 & 0x7f8 | uVar2 | (uint)((cVar4 != '\0' || cVar5 != '\0') || cVar6 != '\0') << 0xb;
  local_68 = pYVar1;
  local_60 = plVar8;
                    /* try { // try from 008766dc to 008766eb has its CatchHandler @ 008767b0 */
  facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::
  completeClone(pYVar1,param_3,param_4);
  local_78 = pYVar1;
  local_70 = plVar8;
  FUN_00757d00(1,plVar8 + 1);
                    /* try { // try from 008766fc to 0087670b has its CatchHandler @ 00876788 */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_78);
  plVar8 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar9 = FUN_00757990(0xffffffffffffffff,local_70 + 1), lVar9 == 0)) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pYVar1 = local_68;
                    /* try { // try from 00876748 to 00876753 has its CatchHandler @ 008767b0 */
  (**(code **)(*param_2 + 0x60))(param_2,local_68);
  *param_1 = pYVar1;
  param_1[1] = local_60;
  if (*(long *)(lVar7 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 008767d8  FUN_008767d8 =====

void FUN_008767d8(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::appendChild
            (*param_2,param_3);
  return;
}


// ===== 008767e4  FUN_008767e4 =====

void FUN_008767e4(undefined8 *param_1,long param_2,PropsParserContext *param_3,long *param_4,
                 RawProps *param_5)

{
  RNSScreenStackHeaderConfigProps *this;
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
  RNSScreenStackHeaderConfigProps *pRVar12;
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
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_39RNSScreenStackHeaderConfigComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_31RNSScreenStackHeaderConfigPropsENS0_38RNSScreenStackHeaderConfigEventEmitterENS0_31RNSScreenStackHeaderConfigStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e970
         & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_39RNSScreenStackHeaderConfigComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_31RNSScreenStackHeaderConfigPropsENS0_38RNSScreenStackHeaderConfigEventEmitterENS0_31RNSScreenStackHeaderConfigStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e970
                                   ), iVar6 != 0)) {
                    /* try { // try from 00876c18 to 00876c1b has its CatchHandler @ 00876c48 */
      FUN_00877b54();
      __cxa_atexit(FUN_00877bcc,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_39RNSScreenStackHeaderConfigComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_31RNSScreenStackHeaderConfigPropsENS0_38RNSScreenStackHeaderConfigEventEmitterENS0_31RNSScreenStackHeaderConfigStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e968
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_39RNSScreenStackHeaderConfigComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_31RNSScreenStackHeaderConfigPropsENS0_38RNSScreenStackHeaderConfigEventEmitterENS0_31RNSScreenStackHeaderConfigStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e970
                         );
    }
    lVar11 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_39RNSScreenStackHeaderConfigComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_31RNSScreenStackHeaderConfigPropsENS0_38RNSScreenStackHeaderConfigEventEmitterENS0_31RNSScreenStackHeaderConfigStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e968
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_39RNSScreenStackHeaderConfigComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_31RNSScreenStackHeaderConfigPropsENS0_38RNSScreenStackHeaderConfigEventEmitterENS0_31RNSScreenStackHeaderConfigStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e968
    ;
    param_1[1] = lVar11;
    if (lVar11 != 0) {
      FUN_00757d00(1,lVar11 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    pRVar12 = (RNSScreenStackHeaderConfigProps *)*param_4;
    if (pRVar12 == (RNSScreenStackHeaderConfigProps *)0x0) {
      if (((*
            PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_39RNSScreenStackHeaderConfigComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_31RNSScreenStackHeaderConfigPropsENS0_38RNSScreenStackHeaderConfigEventEmitterENS0_31RNSScreenStackHeaderConfigStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e970
           & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_39RNSScreenStackHeaderConfigComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_31RNSScreenStackHeaderConfigPropsENS0_38RNSScreenStackHeaderConfigEventEmitterENS0_31RNSScreenStackHeaderConfigStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e970
                                     ), iVar6 != 0)) {
                    /* try { // try from 00876b98 to 00876b9b has its CatchHandler @ 00876c60 */
        FUN_00877b54();
        __cxa_atexit(FUN_00877bcc,
                     PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_39RNSScreenStackHeaderConfigComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_31RNSScreenStackHeaderConfigPropsENS0_38RNSScreenStackHeaderConfigEventEmitterENS0_31RNSScreenStackHeaderConfigStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e968
                     ,&PTR_LOOP_008d5d30);
        __cxa_guard_release(
                           PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_39RNSScreenStackHeaderConfigComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_31RNSScreenStackHeaderConfigPropsENS0_38RNSScreenStackHeaderConfigEventEmitterENS0_31RNSScreenStackHeaderConfigStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e970
                           );
      }
      pRVar12 = *(RNSScreenStackHeaderConfigProps **)
                 PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_39RNSScreenStackHeaderConfigComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_31RNSScreenStackHeaderConfigPropsENS0_38RNSScreenStackHeaderConfigEventEmitterENS0_31RNSScreenStackHeaderConfigStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e968
      ;
    }
    plVar8 = (long *)operator_new(0x890);
    this = (RNSScreenStackHeaderConfigProps *)(plVar8 + 3);
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = (long)&PTR_FUN_009938e8;
                    /* try { // try from 008768c4 to 008768d7 has its CatchHandler @ 00876cd4 */
    facebook::react::RNSScreenStackHeaderConfigProps::RNSScreenStackHeaderConfigProps
              (this,param_3,pRVar12,param_5);
                    /* try { // try from 008768dc to 008768ef has its CatchHandler @ 00876cec */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if ((((uVar7 & 1) == 0) ||
        (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar7 & 1) == 0)) ||
       (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
                enablePropsUpdateReconciliationAndroid(), (uVar7 & 1) == 0)) {
LAB_00876918:
      FUN_00757d00(1,plVar8 + 1);
      if (*param_4 == 0) {
        if (((*
              PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_39RNSScreenStackHeaderConfigComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_31RNSScreenStackHeaderConfigPropsENS0_38RNSScreenStackHeaderConfigEventEmitterENS0_31RNSScreenStackHeaderConfigStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e970
             & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(
                                       PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_39RNSScreenStackHeaderConfigComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_31RNSScreenStackHeaderConfigPropsENS0_38RNSScreenStackHeaderConfigEventEmitterENS0_31RNSScreenStackHeaderConfigStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e970
                                       ), iVar6 != 0)) {
                    /* try { // try from 00876bd8 to 00876bdb has its CatchHandler @ 00876c4c */
          FUN_00877b54();
          __cxa_atexit(FUN_00877bcc,
                       PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_39RNSScreenStackHeaderConfigComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_31RNSScreenStackHeaderConfigPropsENS0_38RNSScreenStackHeaderConfigEventEmitterENS0_31RNSScreenStackHeaderConfigStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e968
                       ,&PTR_LOOP_008d5d30);
          __cxa_guard_release(
                             PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_39RNSScreenStackHeaderConfigComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_31RNSScreenStackHeaderConfigPropsENS0_38RNSScreenStackHeaderConfigEventEmitterENS0_31RNSScreenStackHeaderConfigStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e970
                             );
        }
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 00876980 to 00876993 has its CatchHandler @ 00876c78 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*(undefined8 *)
                         PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_39RNSScreenStackHeaderConfigComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_31RNSScreenStackHeaderConfigPropsENS0_38RNSScreenStackHeaderConfigEventEmitterENS0_31RNSScreenStackHeaderConfigStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e968
                   ,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
LAB_008769cc:
          (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
        }
        else if (local_b0 != (dynamic *)0x0) {
          lVar11 = 5;
          pdVar10 = local_b0;
          goto LAB_008769cc;
        }
        if (plVar8 != (long *)0x0) goto LAB_008769e0;
      }
      else {
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 00876934 to 00876947 has its CatchHandler @ 00876ca0 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*param_4,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
        }
        else {
          if (local_b0 == (dynamic *)0x0) goto LAB_008769e0;
          lVar11 = 5;
          pdVar10 = local_b0;
        }
        (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
LAB_008769e0:
        lVar11 = FUN_00757990(0xffffffffffffffff,plVar8 + 1);
        if (lVar11 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 008768fc to 00876907 has its CatchHandler @ 00876c74 */
      pcVar9 = (char *)(**(code **)(*(long *)this + 0x10))(this);
      iVar6 = strcmp(PTR_RNSScreenStackHeaderConfigComponentName_0099eec0,pcVar9);
      if (iVar6 != 0) goto LAB_00876918;
      bVar3 = false;
    }
                    /* try { // try from 00876a0c to 00876a0f has its CatchHandler @ 00876cec */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar7 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 00876a1c to 00876a37 has its CatchHandler @ 00876c9c */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(plVar8 + 7));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00876b78 to 00876b87 has its CatchHandler @ 00876c94 */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_00876d38;
      }
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (*(int *)(plVar4 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00876b58 to 00876b67 has its CatchHandler @ 00876cf8 */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_00876d38;
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
                    /* try { // try from 00876ab8 to 00876ac3 has its CatchHandler @ 00876d00 */
        folly::dynamic::dynamic(local_d0,(dynamic *)(plVar4 + 8));
        local_a0 = 0;
                    /* try { // try from 00876ac8 to 00876adf has its CatchHandler @ 00876d04 */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (this,param_3,uVar1,pcVar9,local_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 00876af0 to 00876afb has its CatchHandler @ 00876cf4 */
          (*(code *)(&PTR_FUN_0098f088)[local_a0])(&uStack_d1,local_d0);
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
LAB_00876d38:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00876d3c  FUN_00876d3c =====

/* WARNING: Removing unreachable block (ram,0x00876e3c) */
/* WARNING: Removing unreachable block (ram,0x00876e4c) */
/* WARNING: Removing unreachable block (ram,0x00876e70) */
/* WARNING: Removing unreachable block (ram,0x00876e80) */

void FUN_00876d3c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  State *pSVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 local_78;
  long local_70;
  long *local_68;
  long *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  plVar3 = (long *)operator_new(0x28);
  plVar3[1] = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_00993ae0;
  plVar3[3] = 0;
  plVar3[4] = 0;
                    /* try { // try from 00876d98 to 00876d9f has its CatchHandler @ 00876efc */
  puVar4 = (undefined8 *)operator_new(0x50);
  local_78 = *param_4;
  local_70 = param_4[1];
  pSVar1 = (State *)(puVar4 + 3);
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_00993938;
  if (local_70 != 0) {
    FUN_00757d00(1,local_70 + 0x10);
  }
                    /* try { // try from 00876ddc to 00876deb has its CatchHandler @ 00876ec4 */
  local_68 = plVar3 + 3;
  local_60 = plVar3;
  facebook::react::State::State(pSVar1,&local_68,&local_78);
  if (local_70 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar3 = local_60;
  if ((local_60 != (long *)0x0) &&
     (lVar5 = FUN_00757990(0xffffffffffffffff,local_60 + 1), lVar5 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *(undefined ***)pSVar1 = &PTR_FUN_00993988;
  *param_1 = pSVar1;
  param_1[1] = puVar4;
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00876f24  FUN_00876f24 =====

/* WARNING: Removing unreachable block (ram,0x00876ff8) */
/* WARNING: Removing unreachable block (ram,0x00877008) */
/* WARNING: Removing unreachable block (ram,0x0087705c) */
/* WARNING: Removing unreachable block (ram,0x0087706c) */

void FUN_00876f24(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  State *pSVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 local_88;
  long *local_80;
  undefined8 local_58;
  long *local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  uVar2 = *param_4;
  plVar3 = (long *)param_4[1];
  if (plVar3 != (long *)0x0) {
    FUN_00757d00(1,plVar3 + 1);
  }
                    /* try { // try from 00876f68 to 00876f73 has its CatchHandler @ 008770e4 */
  facebook::react::ShadowNodeFamily::getMostRecentState();
                    /* try { // try from 00876f78 to 00876f7f has its CatchHandler @ 008770d4 */
  puVar5 = (undefined8 *)operator_new(0x50);
  pSVar1 = (State *)(puVar5 + 3);
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_00993b40;
                    /* try { // try from 00876fa4 to 00876fb3 has its CatchHandler @ 008770ac */
  local_58 = uVar2;
  local_50 = plVar3;
  facebook::react::State::State(pSVar1,&local_58,local_88);
  plVar3 = local_50;
  if ((local_50 != (long *)0x0) &&
     (lVar6 = FUN_00757990(0xffffffffffffffff,local_50 + 1), lVar6 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *(undefined ***)pSVar1 = &PTR_FUN_00993988;
  *param_1 = pSVar1;
  param_1[1] = puVar5;
  if ((local_80 != (long *)0x0) &&
     (lVar6 = FUN_00757990(0xffffffffffffffff,local_80 + 1), lVar6 == 0)) {
    (**(code **)(*local_80 + 0x10))(local_80);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0087710c  FUN_0087710c =====

void FUN_0087710c(undefined8 *param_1,long param_2,long param_3)

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
                    /* try { // try from 00877154 to 0087715b has its CatchHandler @ 00877440 */
  plVar5 = (long *)operator_new(0x68);
  *plVar5 = (long)&PTR_FUN_00993b90;
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
                    /* try { // try from 00877198 to 008771a7 has its CatchHandler @ 00877414 */
  facebook::react::EventEmitter::EventEmitter(pEVar1,&local_70,&local_80);
  *(undefined ***)pEVar1 = &PTR_FUN_0097ff10;
                    /* try { // try from 008771b8 to 008771bf has its CatchHandler @ 00877404 */
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
  plVar5[3] = (long)&PTR_FUN_00993be0;
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
                    /* try { // try from 00877270 to 00877277 has its CatchHandler @ 008773f4 */
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
                    /* try { // try from 008772c4 to 008772db has its CatchHandler @ 008773c4 */
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
                    /* try { // try from 00877330 to 0087733b has its CatchHandler @ 008773a4 */
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


// ===== 00877468  FUN_00877468 =====

void FUN_00877468(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)facebook::react::ShadowNode::getState();
  lVar3 = *plVar2;
  plVar2 = (long *)plVar2[1];
  if (plVar2 != (long *)0x0) {
    FUN_00757d00(1,plVar2 + 1);
  }
  pfVar5 = *(float **)(lVar3 + 0x18);
  if (*pfVar5 != 0.0) {
                    /* try { // try from 008774c0 to 008774eb has its CatchHandler @ 00877564 */
    fVar6 = pfVar5[2];
    fVar7 = pfVar5[3];
    facebook::react::YogaLayoutableShadowNode::setSize(*pfVar5,0x7fc00000,param_2);
    facebook::react::YogaLayoutableShadowNode::setPadding(fVar6,0,fVar7,0,param_2);
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


// ===== 0087758c  FUN_0087758c =====

void FUN_0087758c(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 008775b0  FUN_008775b0 =====

void FUN_008775b0(void)

{
  return;
}


// ===== 008775b4  FUN_008775b4 =====

void FUN_008775b4(long *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  FUN_00788b10(param_1,PTR_VTT_0099eed0 + 0x10);
  *(undefined4 *)((long)param_1 + 0x5dc) = 0;
  *(undefined1 *)(param_1 + 0xbc) = 0;
  *(undefined1 *)(param_1 + 200) = 0;
  *(undefined1 *)(param_1 + 0xc9) = 0;
  *(undefined1 *)(param_1 + 0xd5) = 0;
  *(undefined1 *)(param_1 + 0xd7) = 0;
  *(undefined1 *)((long)param_1 + 0x6bc) = 0;
  *(undefined1 *)(param_1 + 0xd8) = 0;
  *(undefined1 *)((long)param_1 + 0x6c4) = 0;
  *(undefined1 *)(param_1 + 0xd9) = 0;
  *(undefined1 *)((long)param_1 + 0x6cc) = 0;
  *(undefined1 *)(param_1 + 0xda) = 0;
  *(undefined1 *)((long)param_1 + 0x6d4) = 0;
  *(undefined1 *)(param_1 + 0xdb) = 0;
  *(undefined1 *)((long)param_1 + 0x6dc) = 0;
  puVar2 = PTR_vtable_0099eec8;
  *(undefined4 *)(param_1 + 0xd6) = 0;
  *(undefined2 *)((long)param_1 + 0x6b4) = 0;
  *(undefined1 *)(param_1 + 0xdc) = 0;
  *param_1 = (long)(puVar2 + 0x20);
  *(undefined1 *)((long)param_1 + 0x72c) = 1;
  *(undefined4 *)(param_1 + 0xe7) = 1;
  *(undefined4 *)((long)param_1 + 0x814) = 1;
  *(undefined1 *)(param_1 + 0x10d) = 1;
  uVar1 = DAT_003755d8;
  *(undefined1 *)((long)param_1 + 0x6e4) = 0;
  *(undefined1 *)(param_1 + 0xdd) = 0;
  *(undefined1 *)(param_1 + 0xe0) = 0;
  *(undefined1 *)(param_1 + 0xe1) = 0;
  *(undefined1 *)(param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0xe5) = 0;
  *(undefined1 *)(param_1 + 0xe6) = 0;
  *(undefined1 *)((long)param_1 + 0x734) = 0;
  *(undefined2 *)((long)param_1 + 0x73c) = 0;
  *(undefined1 *)((long)param_1 + 0x73e) = 0;
  *(undefined1 *)(param_1 + 0xe8) = 0;
  *(undefined1 *)(param_1 + 0xeb) = 0;
  *(undefined4 *)(param_1 + 0xec) = 0;
  *(undefined1 *)(param_1 + 0xed) = 0;
  *(undefined1 *)(param_1 + 0xf0) = 0;
  *(undefined1 *)(param_1 + 0xf1) = 0;
  *(undefined1 *)((long)param_1 + 0x78c) = 0;
  *(undefined1 *)(param_1 + 0xf2) = 0;
  *(undefined1 *)((long)param_1 + 0x794) = 0;
  *(undefined1 *)(param_1 + 0xf3) = 0;
  *(undefined1 *)((long)param_1 + 0x79c) = 0;
  *(undefined1 *)(param_1 + 0xf4) = 0;
  *(undefined1 *)(param_1 + 0xf7) = 0;
  *(undefined1 *)(param_1 + 0xf8) = 0;
  *(undefined1 *)(param_1 + 0xfb) = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  *(undefined1 *)(param_1 + 0xfd) = 0;
  *(undefined1 *)(param_1 + 0x100) = 0;
  *(undefined1 *)(param_1 + 0x101) = 0;
  *(undefined1 *)((long)param_1 + 0x80c) = 0;
  *(undefined1 *)(param_1 + 0x102) = 0;
  *(undefined2 *)(param_1 + 0x103) = 0;
  *(undefined4 *)((long)param_1 + 0x81c) = 0;
  *(undefined1 *)(param_1 + 0x104) = 0;
  *(undefined1 *)(param_1 + 0x105) = 0;
  *(undefined1 *)(param_1 + 0x108) = 0;
  *(undefined1 *)(param_1 + 0x109) = 0;
  *(undefined1 *)(param_1 + 0x10c) = 0;
  *(undefined4 *)((long)param_1 + 0x86c) = 0;
  *(int *)(param_1 + 0x10e) = (int)uVar1;
  *(undefined1 *)((long)param_1 + 0x874) = 0;
  return;
}


// ===== 008776f8  FUN_008776f8 =====

void FUN_008776f8(long param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  if ((*(char *)(param_1 + 0x860) != '\0') &&
     (pvVar3 = *(void **)(param_1 + 0x848), pvVar3 != (void *)0x0)) {
    pvVar2 = *(void **)(param_1 + 0x850);
    pvVar1 = pvVar3;
    if (pvVar2 != pvVar3) {
      do {
        pvVar2 = (void *)((long)pvVar2 + -0x30);
        folly::dynamic::folly::dynamic::destroy(pvVar2);
      } while (pvVar2 != pvVar3);
      pvVar1 = *(void **)(param_1 + 0x848);
    }
    *(void **)(param_1 + 0x850) = pvVar3;
    operator_delete(pvVar1);
  }
  if ((*(char *)(param_1 + 0x840) != '\0') &&
     (pvVar3 = *(void **)(param_1 + 0x828), pvVar3 != (void *)0x0)) {
    pvVar2 = *(void **)(param_1 + 0x830);
    pvVar1 = pvVar3;
    if (pvVar2 != pvVar3) {
      do {
        pvVar2 = (void *)((long)pvVar2 + -0x30);
        folly::dynamic::folly::dynamic::destroy(pvVar2);
      } while (pvVar2 != pvVar3);
      pvVar1 = *(void **)(param_1 + 0x828);
    }
    *(void **)(param_1 + 0x830) = pvVar3;
    operator_delete(pvVar1);
  }
  if ((*(char *)(param_1 + 0x800) != '\0') && ((*(byte *)(param_1 + 0x7e8) & 1) != 0)) {
    operator_delete(*(void **)(param_1 + 0x7f8));
  }
  if ((*(char *)(param_1 + 0x7d8) != '\0') && ((*(byte *)(param_1 + 0x7c0) & 1) != 0)) {
    operator_delete(*(void **)(param_1 + 2000));
  }
  if ((*(char *)(param_1 + 0x7b8) != '\0') && ((*(byte *)(param_1 + 0x7a0) & 1) != 0)) {
    operator_delete(*(void **)(param_1 + 0x7b0));
  }
  if ((*(char *)(param_1 + 0x780) != '\0') && ((*(byte *)(param_1 + 0x768) & 1) != 0)) {
    operator_delete(*(void **)(param_1 + 0x778));
  }
  if ((*(char *)(param_1 + 0x758) != '\0') && ((*(byte *)(param_1 + 0x740) & 1) != 0)) {
    operator_delete(*(void **)(param_1 + 0x750));
  }
  if ((*(char *)(param_1 + 0x720) != '\0') && ((*(byte *)(param_1 + 0x708) & 1) != 0)) {
    operator_delete(*(void **)(param_1 + 0x718));
  }
  if ((*(char *)(param_1 + 0x700) != '\0') && ((*(byte *)(param_1 + 0x6e8) & 1) != 0)) {
    operator_delete(*(void **)(param_1 + 0x6f8));
  }
  FUN_0078917c(param_1,PTR_VTT_0099eed0 + 8);
  return;
}


// ===== 00877854  FUN_00877854 =====

void FUN_00877854(long param_1)

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


// ===== 008778a4  FUN_008778a4 =====

void FUN_008778a4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00993780;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008778b4  FUN_008778b4 =====

void FUN_008778b4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00993780;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008778e4  FUN_008778e4 =====

void FUN_008778e4(long param_1)

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


// ===== 008779a8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008779ac  FUN_008779ac =====

void FUN_008779ac(long *param_1)

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


// ===== 00877a6c  FUN_00877a6c =====

void FUN_00877a6c(long param_1)

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


// ===== 00877ad4  FUN_00877ad4 =====

bool FUN_00877ad4(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 00877aec  FUN_00877aec =====

bool FUN_00877aec(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 00877b04  FUN_00877b04 =====

void FUN_00877b04(long param_1)

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


// ===== 00877b54  FUN_00877b54 =====

void FUN_00877b54(void)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x890);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_00993898;
  memset(__s,0,0x878);
                    /* try { // try from 00877b90 to 00877b97 has its CatchHandler @ 00877bb0 */
  FUN_008775b4(__s);
  puVar1 = 
  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_39RNSScreenStackHeaderConfigComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_31RNSScreenStackHeaderConfigPropsENS0_38RNSScreenStackHeaderConfigEventEmitterENS0_31RNSScreenStackHeaderConfigStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e968
  ;
  *(undefined8 **)
   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_39RNSScreenStackHeaderConfigComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_31RNSScreenStackHeaderConfigPropsENS0_38RNSScreenStackHeaderConfigEventEmitterENS0_31RNSScreenStackHeaderConfigStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e968
       = __s;
  *(undefined8 **)(puVar1 + 8) = puVar2;
  return;
}


// ===== 00877bcc  FUN_00877bcc =====

void FUN_00877bcc(long param_1)

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


// ===== 00877c1c  FUN_00877c1c =====

void FUN_00877c1c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00993898;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00877c2c  FUN_00877c2c =====

void FUN_00877c2c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00993898;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00877c5c  FUN_00877c5c =====

void FUN_00877c5c(long param_1)

{
  FUN_008776f8(param_1 + 0x18);
  return;
}


// ===== 00877c64  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00877c68  FUN_00877c68 =====

void FUN_00877c68(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009938e8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00877c78  FUN_00877c78 =====

void FUN_00877c78(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009938e8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00877ca8  FUN_00877ca8 =====

void FUN_00877ca8(long param_1)

{
  FUN_008776f8(param_1 + 0x18);
  return;
}


// ===== 00877cb0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00877cb4  FUN_00877cb4 =====

void FUN_00877cb4(long param_1)

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


// ===== 00877d04  FUN_00877d04 =====

void FUN_00877d04(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00993938;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00877d14  FUN_00877d14 =====

void FUN_00877d14(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00993938;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00877d44  FUN_00877d44 =====

void FUN_00877d44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00877d4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00877d50  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00877d54  FUN_00877d54 =====

void FUN_00877d54(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[4];
  *param_1 = &PTR_FUN_0098f6c8;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (param_1[2] != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


// ===== 00877dbc  FUN_00877dbc =====

void FUN_00877dbc(void)

{
  facebook::react::RNSScreenStackHeaderConfigState::getDynamic();
  return;
}


// ===== 00877dc4  <EXTERNAL>::facebook::react::MapBufferBuilder::facebook::react::MapBufferBuilder::EMPTY =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall facebook::react::MapBufferBuilder::facebook::react::MapBufferBuilder::EMPTY(void)

{
  (*(code *)PTR_EMPTY_009a0138)();
  return;
}


// ===== 00877dc8  FUN_00877dc8 =====

void FUN_00877dc8(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}


// ===== 00877dd0  FUN_00877dd0 =====

void FUN_00877dd0(long param_1,dynamic *param_2)

{
  long lVar1;
  int *piVar2;
  long *plVar3;
  long *plVar4;
  undefined ***pppuVar5;
  undefined ****ppppuVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  dynamic adStack_130 [48];
  undefined **local_100;
  float local_f8;
  float fStack_f4;
  float local_f0;
  float fStack_ec;
  undefined ***local_e0;
  undefined **local_d0 [4];
  undefined ***local_b0 [2];
  long local_a0;
  long *local_98;
  long local_90 [4];
  long *local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  folly::dynamic::dynamic(adStack_130,param_2);
                    /* try { // try from 00877e08 to 00877e87 has its CatchHandler @ 00878198 */
  piVar2 = (int *)folly::dynamic::operator[](adStack_130,"frameWidth","");
  if (*piVar2 == 3) {
    dVar9 = *(double *)(piVar2 + 2);
    piVar2 = (int *)folly::dynamic::operator[](adStack_130,"frameHeight","");
    if (*piVar2 == 3) {
      dVar10 = *(double *)(piVar2 + 2);
      piVar2 = (int *)folly::dynamic::operator[](adStack_130,"paddingStart","");
      if (*piVar2 == 3) {
        dVar11 = *(double *)(piVar2 + 2);
        piVar2 = (int *)folly::dynamic::operator[](adStack_130,"paddingEnd","");
        if (*piVar2 == 3) {
          local_100 = &PTR_FUN_00993a60;
          local_f8 = (float)dVar9;
          fStack_f4 = (float)dVar10;
          local_e0 = &local_100;
          local_f0 = (float)dVar11;
          fStack_ec = (float)*(double *)(piVar2 + 2);
          if ((*(long *)(param_1 + 0x10) != 0) &&
             (plVar3 = (long *)std::__ndk1::__shared_weak_count::lock(), plVar3 != (long *)0x0)) {
            lVar8 = *(long *)(param_1 + 8);
            if (lVar8 != 0) {
              local_a0 = lVar8;
              local_98 = plVar3;
              FUN_00757d00(1,plVar3 + 1);
              local_b0[0] = local_e0;
              if (local_e0 != (undefined ***)0x0) {
                if (local_e0 == &local_100) {
                  local_b0[0] = local_d0;
                  (*(code *)local_100[3])(&local_100,local_d0);
                }
                else {
                    /* try { // try from 00877f14 to 00877f3b has its CatchHandler @ 00878104 */
                  local_b0[0] = (undefined ***)(*(code *)(*local_e0)[2])();
                }
              }
              local_70 = (long *)0x0;
                    /* try { // try from 00877f40 to 00877f47 has its CatchHandler @ 0087811c */
              plVar4 = (long *)operator_new(0x40);
              *plVar4 = (long)&PTR_FUN_009939e0;
              if (local_b0[0] == (undefined ***)0x0) {
                ppppuVar6 = (undefined ****)(plVar4 + 6);
LAB_00877f7c:
                *ppppuVar6 = (undefined ***)0x0;
              }
              else {
                if (local_b0[0] != local_d0) {
                  ppppuVar6 = local_b0;
                  plVar4[6] = (long)local_b0[0];
                  goto LAB_00877f7c;
                }
                plVar4[6] = (long)(plVar4 + 2);
                    /* try { // try from 00877f90 to 00877f9f has its CatchHandler @ 00878100 */
                (*(code *)local_d0[0][3])(local_d0);
              }
              local_70 = plVar4;
              if (local_b0[0] == local_d0) {
                lVar7 = 4;
                pppuVar5 = local_d0;
LAB_00877fc8:
                (*(code *)(*pppuVar5)[lVar7])(pppuVar5);
              }
              else if (local_b0[0] != (undefined ***)0x0) {
                lVar7 = 5;
                pppuVar5 = local_b0[0];
                goto LAB_00877fc8;
              }
                    /* try { // try from 00877fd8 to 00877fe7 has its CatchHandler @ 0087810c */
              facebook::react::ShadowNodeFamily::facebook::react::ShadowNodeFamily::dispatchRawState
                        (lVar8,&local_a0,0);
              plVar4 = local_90;
              if (local_70 == plVar4) {
                lVar8 = 4;
LAB_00878010:
                (**(code **)(*plVar4 + lVar8 * 8))();
              }
              else if (local_70 != (long *)0x0) {
                lVar8 = 5;
                plVar4 = local_70;
                goto LAB_00878010;
              }
              plVar4 = local_98;
              if ((local_98 != (long *)0x0) &&
                 (lVar8 = FUN_00757990(0xffffffffffffffff,local_98 + 1), lVar8 == 0)) {
                (**(code **)(*plVar4 + 0x10))(plVar4);
                std::__ndk1::__shared_weak_count::__release_weak();
              }
              if (plVar3 == (long *)0x0) goto LAB_0087807c;
            }
            lVar8 = FUN_00757990(0xffffffffffffffff,plVar3 + 1);
            if (lVar8 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
              std::__ndk1::__shared_weak_count::__release_weak();
            }
          }
LAB_0087807c:
          if (local_e0 == &local_100) {
            lVar8 = 4;
            pppuVar5 = &local_100;
LAB_0087809c:
            (*(code *)(*pppuVar5)[lVar8])();
          }
          else if (local_e0 != (undefined ***)0x0) {
            lVar8 = 5;
            pppuVar5 = local_e0;
            goto LAB_0087809c;
          }
          folly::dynamic::folly::dynamic::destroy(adStack_130);
          if (*(long *)(lVar1 + 0x28) == local_58) {
            return;
          }
          goto LAB_008781bc;
        }
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 008780f0 to 008780ff has its CatchHandler @ 00878198 */
                    /* WARNING: Subroutine does not return */
    FUN_00789f8c(*(undefined8 *)PTR_name_0099edf8);
  }
LAB_008781bc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008781c0  FUN_008781c0 =====

void FUN_008781c0(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)param_1[6];
  plVar2 = param_1 + 2;
  *param_1 = &PTR_FUN_009939e0;
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return;
    }
    lVar3 = 5;
    plVar2 = plVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x008781fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + lVar3 * 8))();
  return;
}


// ===== 00878204  FUN_00878204 =====

void FUN_00878204(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)param_1[6];
  plVar2 = param_1 + 2;
  *param_1 = &PTR_FUN_009939e0;
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_00878250;
    lVar3 = 5;
    plVar2 = plVar1;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_00878250:
  operator_delete(param_1);
  return;
}


// ===== 00878260  FUN_00878260 =====

undefined8 * FUN_00878260(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  
  puVar1 = (undefined8 *)operator_new(0x40);
  plVar2 = *(long **)(param_1 + 0x30);
  *puVar1 = &PTR_FUN_009939e0;
  if (plVar2 != (long *)0x0) {
    if (plVar2 == (long *)(param_1 + 0x10)) {
      lVar3 = *plVar2;
      puVar1[6] = puVar1 + 2;
      (**(code **)(lVar3 + 0x18))();
      return puVar1;
    }
                    /* try { // try from 008782a8 to 008782c3 has its CatchHandler @ 008782d4 */
    plVar2 = (long *)(**(code **)(*plVar2 + 0x10))();
  }
  puVar1[6] = plVar2;
  return puVar1;
}


// ===== 008782e8  FUN_008782e8 =====

void FUN_008782e8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x30);
  *param_2 = &PTR_FUN_009939e0;
  if (plVar2 == (long *)0x0) {
    param_2[6] = 0;
  }
  else {
    if (plVar2 == (long *)(param_1 + 0x10)) {
      param_2[6] = param_2 + 2;
                    /* WARNING: Could not recover jumptable at 0x00878358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x30) + 0x18))();
      return;
    }
    uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
    param_2[6] = uVar1;
  }
  return;
}


// ===== 0087835c  FUN_0087835c =====

void FUN_0087835c(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = *(long **)(param_1 + 0x30);
  plVar2 = (long *)(param_1 + 0x10);
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return;
    }
    lVar3 = 5;
    plVar2 = plVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x0087838c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + lVar3 * 8))();
  return;
}


// ===== 00878394  FUN_00878394 =====

void FUN_00878394(void *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = *(long **)((long)param_1 + 0x30);
  plVar2 = (long *)((long)param_1 + 0x10);
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_008783d4;
    lVar3 = 5;
    plVar2 = plVar1;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_008783d4:
  operator_delete(param_1);
  return;
}


// ===== 008783e4  FUN_008783e4 =====

void FUN_008783e4(long param_1,undefined8 *param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x30);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x008783f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))(plVar1,*param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00785754();
}


// ===== 00878408  FUN_00878408 =====

long FUN_00878408(long param_1,long param_2)

{
  param_1 = param_1 + 0x10;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_0099e978) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 00878424  FUN_00878424 =====

undefined * FUN_00878424(void)

{
  return PTR_typeinfo_0099e980;
}


// ===== 00878430  FUN_00878430 =====

void FUN_00878430(void)

{
  return;
}


// ===== 00878434  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00878438  FUN_00878438 =====

void FUN_00878438(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_00993a60;
  puVar1[2] = uVar3;
  puVar1[1] = uVar2;
  return;
}


// ===== 00878470  FUN_00878470 =====

void FUN_00878470(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_00993a60;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}


// ===== 00878488  FUN_00878488 =====

void FUN_00878488(void)

{
  return;
}


// ===== 0087848c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00878490  FUN_00878490 =====

void FUN_00878490(long *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 8);
  *puVar1 = &PTR_FUN_00993ae0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[4] = uVar3;
  puVar1[3] = uVar2;
  *param_1 = (long)(puVar1 + 3);
  param_1[1] = (long)puVar1;
  return;
}


// ===== 008784d8  FUN_008784d8 =====

long FUN_008784d8(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_0099e988) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 008784f4  FUN_008784f4 =====

undefined * FUN_008784f4(void)

{
  return PTR_typeinfo_0099e990;
}


// ===== 00878500  FUN_00878500 =====

void FUN_00878500(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00993ae0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00878510  FUN_00878510 =====

void FUN_00878510(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00993ae0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00878540  FUN_00878540 =====

void FUN_00878540(void)

{
  return;
}


// ===== 00878544  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00878548  FUN_00878548 =====

void FUN_00878548(long param_1)

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


// ===== 00878598  FUN_00878598 =====

void FUN_00878598(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00993b40;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008785a8  FUN_008785a8 =====

void FUN_008785a8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00993b40;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008785d8  FUN_008785d8 =====

void FUN_008785d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x008785e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 008785e4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008785e8  FUN_008785e8 =====

void FUN_008785e8(long param_1)

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


// ===== 00878638  FUN_00878638 =====

void FUN_00878638(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00993b90;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00878648  FUN_00878648 =====

void FUN_00878648(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00993b90;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00878678  FUN_00878678 =====

void FUN_00878678(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00878680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00878684  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00878688  FUN_00878688 =====

void FUN_00878688(long *param_1)

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


// ===== 00878740  facebook::react::concreteComponentDescriptorConstructor<facebook::react::RNSScreenStackHeaderSubviewComponentDescriptor> =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::__ndk1::unique_ptr<facebook::react::ComponentDescriptor const,
   std::__ndk1::default_delete<facebook::react::ComponentDescriptor const> >
   facebook::react::concreteComponentDescriptorConstructor<facebook::react::RNSScreenStackHeaderSubviewComponentDescriptor>(facebook::react::ComponentDescriptorParameters
   const&) */

void __thiscall
facebook::react::
concreteComponentDescriptorConstructor<facebook::react::RNSScreenStackHeaderSubviewComponentDescriptor>
          (react *this,ComponentDescriptorParameters *param_1)

{
  byte bVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  ComponentDescriptor *this_00;
  long lVar6;
  undefined8 *in_x8;
  long *plVar7;
  void *pvVar8;
  undefined4 local_fe0 [2];
  undefined8 *local_fd8;
  void *local_fd0;
  void *pvStack_fc8;
  undefined8 local_fc0;
  void *pvStack_fb8;
  void *local_fb0;
  undefined8 uStack_fa8;
  void *local_fa0;
  void *pvStack_f98;
  undefined8 uStack_f90;
  undefined8 uStack_f88;
  undefined *local_f80;
  undefined8 uStack_f78;
  undefined8 local_f70;
  undefined8 uStack_f68;
  undefined4 local_f60 [2];
  undefined8 local_f58;
  undefined8 uStack_f50;
  undefined8 local_f48;
  undefined8 uStack_f40;
  undefined4 local_f38;
  undefined4 local_f30;
  undefined1 local_f2c;
  undefined8 local_f2b;
  undefined8 local_f23;
  undefined8 uStack_f1b;
  undefined8 local_f13;
  undefined8 uStack_f0b;
  undefined8 local_f03;
  undefined8 uStack_efb;
  undefined8 local_ef3;
  undefined6 uStack_eeb;
  undefined2 uStack_ee5;
  undefined6 uStack_ee3;
  undefined8 uStack_edd;
  undefined4 local_ed5;
  undefined8 local_ed1;
  undefined1 local_ec9;
  undefined1 uStack_ec8;
  undefined7 uStack_ec7;
  undefined8 uStack_ec0;
  undefined8 uStack_eb8;
  undefined8 uStack_eb0;
  undefined8 local_ea8;
  undefined8 uStack_ea0;
  undefined8 local_e98;
  undefined8 uStack_e90;
  undefined8 local_e88;
  undefined8 uStack_e80;
  undefined8 local_e78;
  undefined8 uStack_e70;
  undefined8 uStack_e68;
  undefined8 local_e60;
  undefined8 local_e58;
  undefined8 uStack_e50;
  undefined8 local_e48;
  undefined4 uStack_e40;
  undefined4 uStack_e3c;
  undefined4 uStack_e38;
  undefined4 uStack_e34;
  undefined4 uStack_e30;
  undefined4 uStack_e2c;
  undefined8 local_e28;
  undefined8 uStack_e20;
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
  undefined4 local_db8;
  undefined1 local_db4;
  undefined4 local_db0;
  undefined1 local_dac;
  undefined4 local_da8;
  undefined1 local_da4;
  undefined4 local_da0;
  undefined1 local_d9c;
  undefined1 local_d98;
  undefined1 local_d94;
  undefined1 local_d88;
  undefined8 local_d80;
  undefined8 uStack_d78;
  undefined8 uStack_d70;
  undefined8 uStack_d68;
  undefined8 local_d60;
  undefined8 uStack_d58;
  undefined8 uStack_d50;
  undefined1 uStack_d48;
  undefined7 local_d47;
  undefined1 uStack_d40;
  undefined8 uStack_d3f;
  undefined8 local_d34;
  undefined8 uStack_d2c;
  undefined8 uStack_d24;
  undefined8 uStack_d1c;
  undefined8 local_d14;
  undefined8 uStack_d0c;
  undefined8 uStack_d04;
  undefined8 uStack_cfc;
  undefined8 local_cf4;
  undefined8 uStack_cec;
  undefined8 uStack_ce4;
  undefined5 uStack_cdc;
  undefined3 local_cd7;
  undefined5 uStack_cd4;
  undefined1 local_ccc;
  undefined1 local_cc8;
  undefined1 local_cc4;
  undefined1 local_cc0;
  undefined1 local_cbc;
  undefined1 local_cb8;
  undefined1 local_ca0;
  undefined8 local_c98;
  undefined8 uStack_c90;
  undefined8 local_c88;
  undefined4 local_c80;
  undefined1 local_c7c;
  undefined4 local_c7b;
  undefined1 local_c77;
  undefined1 local_c76;
  undefined8 local_c70;
  undefined8 uStack_c68;
  undefined8 uStack_c60;
  undefined8 uStack_c58;
  undefined8 local_c50;
  undefined7 uStack_c48;
  undefined4 uStack_c41;
  undefined8 local_c3c;
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
  undefined1 local_bf0;
  undefined1 local_bec;
  undefined1 local_be4;
  undefined1 local_be0;
  undefined1 local_bd8;
  undefined1 local_bd4;
  undefined1 local_bcc;
  undefined1 local_bc8;
  undefined1 local_bc0;
  undefined1 local_bbc;
  undefined1 local_bb4;
  undefined1 local_bb0;
  undefined1 local_ba8;
  undefined1 local_ba4;
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
  undefined1 local_b58;
  undefined1 local_b54;
  undefined1 local_b50;
  undefined1 local_b4c;
  undefined1 local_b48;
  undefined1 local_b44;
  undefined1 local_b40;
  undefined1 local_b3c;
  undefined8 local_b38;
  undefined8 uStack_b30;
  undefined8 local_b28;
  undefined8 uStack_b20;
  undefined8 uStack_b18;
  undefined8 uStack_b10;
  undefined2 local_b08;
  undefined8 local_b04;
  undefined1 local_afc;
  undefined8 local_af8;
  undefined8 local_af0;
  undefined8 uStack_ae8;
  undefined1 local_ae0;
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
  undefined8 uStack_a48;
  undefined8 uStack_a40;
  undefined8 local_a38;
  undefined8 uStack_a30;
  undefined8 local_a28;
  undefined8 uStack_a20;
  undefined8 local_a18;
  undefined8 uStack_a10;
  undefined8 local_a08;
  undefined8 uStack_a00;
  undefined8 local_9f8;
  undefined8 uStack_9f0;
  undefined8 local_9e8;
  undefined6 uStack_9e0;
  undefined2 uStack_9da;
  undefined6 uStack_9d8;
  undefined1 local_9d0;
  undefined1 local_9cc;
  undefined1 local_9c8;
  undefined8 local_9c4;
  undefined8 uStack_9bc;
  undefined1 local_9b4;
  undefined8 local_9b0;
  undefined2 local_9a8;
  undefined1 local_9a6;
  undefined4 local_9a4;
  undefined1 local_9a0;
  undefined1 local_940;
  undefined1 local_938;
  undefined1 local_8d8;
  undefined4 local_8d0;
  undefined2 local_8cc;
  undefined1 local_8c8;
  undefined1 local_8c4;
  undefined1 local_8c0;
  undefined1 local_8bc;
  undefined1 local_8b8;
  undefined1 local_8b4;
  undefined1 local_8b0;
  undefined1 local_8ac;
  undefined1 local_8a8;
  undefined1 local_8a4;
  undefined4 local_8a0;
  undefined2 local_89c;
  undefined4 local_898 [2];
  undefined8 local_890;
  undefined8 uStack_888;
  undefined8 local_880;
  undefined8 local_878;
  undefined8 uStack_870;
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
  this_00 = (ComponentDescriptor *)operator_new(0x88);
  pvStack_fb8 = (void *)0x0;
  local_fc0 = 0;
  uStack_fa8 = 0;
  local_fb0 = (void *)0x0;
  pvStack_f98 = (void *)0x0;
  local_fa0 = (void *)0x0;
  uStack_f88 = 0;
  uStack_f90 = 0;
  pvStack_fc8 = (void *)0x0;
  local_fd0 = (void *)0x0;
                    /* try { // try from 00878790 to 0087879b has its CatchHandler @ 00878dd8 */
  ::facebook::react::ComponentDescriptor::ComponentDescriptor
            (this_00,(ComponentDescriptorParameters *)this,(RawPropsParser *)&local_fd0);
  local_f8 = 0;
  *(undefined ***)this_00 = &PTR_FUN_00993cc0;
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
                    /* try { // try from 0087880c to 00878817 has its CatchHandler @ 00878e08 */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1b0);
  local_100 = CONCAT44(local_100._4_4_,0x3f800000);
  local_fe0[0] = 0xffffffff;
  uStack_108 = 0;
  local_110 = (void *)0x0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_fd8 = &local_1b0;
  ::facebook::react::RawProps::facebook::react::RawProps::parse(&local_f8,this_00 + 0x38);
  memset(local_f60,0,0x6c8);
  puVar5 = PTR_VTT_0099eef0;
  local_898[0] = 5;
  local_880 = 0;
  local_f80 = *(undefined **)(PTR_VTT_0099eef0 + 0x20);
  local_f60[0] = 5;
  uStack_f68 = 0;
  local_f70 = 0;
  local_878 = 0;
  uStack_f78 = 0;
  uStack_870 = 0x3f800000;
  uStack_888 = 0;
  local_890 = 0;
  uStack_f50 = 0;
  local_f58 = 0;
  uStack_f40 = 0;
  local_f48 = 0;
  local_f38 = 0x3f800000;
  folly::dynamic::folly::dynamic::destroy(local_898);
  local_f2c = 0;
  local_ed1 = 0;
  uStack_9f0 = _UNK_00488920;
  local_9f8 = _DAT_00488918;
  local_f2b = _s__00375408;
  uStack_ae8 = _UNK_00371598;
  local_af0 = _DAT_00371590;
  uStack_a00 = _UNK_00488910;
  local_a08 = _DAT_00488908;
  local_e14 = 0;
  uStack_a10 = _UNK_00488900;
  local_a18 = _DAT_004888f8;
  uStack_a20 = _UNK_004888f0;
  local_a28 = _DAT_004888e8;
  uStack_9d8 = 0;
  local_e0c = 0;
  uStack_e40 = 0;
  local_e48 = 0;
  uStack_e2c = 0;
  uStack_e50 = 0;
  local_e58 = 0;
  uStack_9e0 = 0;
  uStack_9da = 0;
  local_9e8 = 0;
  local_f30 = 0x10410710;
  local_ed5 = 0x40004;
  uStack_e34 = 0;
  uStack_e30 = 0;
  uStack_e3c = 0;
  uStack_e38 = 0;
  uStack_e20 = 0;
  local_e28 = 0;
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
  local_db8 = 0x7fc00000;
  local_db0 = 0x7fc00000;
  local_da8 = 0x7fc00000;
  local_da0 = 0x7fc00000;
  uStack_d3f = 0;
  uStack_d40 = 0;
  uStack_d2c = 0;
  local_d34 = 0;
  uStack_d1c = 0;
  uStack_d24 = 0;
  uStack_d0c = 0;
  local_d14 = 0;
  uStack_cfc = 0;
  uStack_d04 = 0;
  uStack_cec = 0;
  local_cf4 = 0;
  uStack_cdc = 0;
  uStack_ce4 = 0;
  local_cd7 = 0;
  uStack_cd4 = 0;
  local_c7c = 1;
  local_c7b = 0;
  local_c76 = 0x23;
  local_c3c = 0x3f800000;
  uStack_b20 = 0;
  local_b28 = 0;
  uStack_b10 = 0;
  uStack_b18 = 0;
  uStack_b30 = 0;
  local_b38 = 0;
  local_b04 = 0;
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
  uStack_a40 = 0;
  uStack_a48 = 0;
  uStack_a30 = 0;
  local_a38 = 0;
  uStack_ec7 = 0;
  uStack_f1b = 0;
  local_f23 = 0;
  uStack_f0b = 0;
  local_f13 = 0;
  uStack_efb = 0;
  local_f03 = 0;
  uStack_eeb = 0;
  local_ef3 = 0;
  uStack_edd = 0;
  uStack_ee5 = 0;
  uStack_ee3 = 0;
  local_ec9 = 0;
  uStack_ec8 = 0;
  uStack_eb8 = 0;
  uStack_ec0 = 0;
  local_ea8 = 0;
  uStack_eb0 = 0;
  local_e98 = 0;
  uStack_ea0 = 0;
  local_e88 = 0;
  uStack_e90 = 0;
  local_e78 = 0;
  uStack_e80 = 0;
  uStack_e68 = 0;
  uStack_e70 = 0;
  local_e60 = 0;
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
  local_db4 = 0;
  local_dac = 0;
  local_da4 = 0;
  local_d9c = 0;
  local_d98 = 0;
  local_d94 = 0;
  local_d88 = 0;
  local_ccc = 0;
  local_cc8 = 0;
  local_cc4 = 0;
  local_cc0 = 0;
  local_cbc = 0;
  local_cb8 = 0;
  local_ca0 = 0;
  uStack_d78 = 0;
  local_d80 = 0;
  uStack_d68 = 0;
  uStack_d70 = 0;
  uStack_d58 = 0;
  local_d60 = 0;
  uStack_d48 = 0;
  local_d47 = 0;
  uStack_d50 = 0;
  uStack_c90 = 0;
  local_c98 = 0;
  local_c88 = 0;
  local_c80 = 0;
  local_c77 = 0;
  uStack_c68 = 0;
  local_c70 = 0;
  uStack_c58 = 0;
  uStack_c60 = 0;
  uStack_c48 = 0;
  uStack_c41 = 0;
  local_c50 = 0;
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
  local_bf0 = 0;
  local_bec = 0;
  local_be4 = 0;
  local_be0 = 0;
  local_bd8 = 0;
  local_bd4 = 0;
  local_bcc = 0;
  local_bc8 = 0;
  local_bc0 = 0;
  local_bbc = 0;
  local_bb4 = 0;
  local_bb0 = 0;
  local_ba8 = 0;
  local_ba4 = 0;
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
  local_b58 = 0;
  local_b54 = 0;
  local_b50 = 0;
  local_b4c = 0;
  local_b48 = 0;
  local_b44 = 0;
  local_b40 = 0;
  local_b3c = 0;
  local_af8 = 0;
  local_b08 = 0;
  local_afc = 0;
  local_ae0 = 0;
  local_9d0 = 0;
  local_9cc = 0;
  local_9c8 = 0;
  local_9b0 = 0;
  uStack_9bc = 0;
  local_9c4 = 0;
  local_9b4 = 0;
  local_9a8 = 0x101;
  local_9a6 = 0;
  local_9a4 = 0;
  local_9a0 = 0;
  local_940 = 0;
  local_938 = 0;
  local_8d8 = 0;
  local_8c8 = 0;
  local_8c4 = 0;
  local_8c0 = 0;
  local_8bc = 0;
  local_8b8 = 0;
  local_8b4 = 0;
  local_8b0 = 0;
  local_8ac = 0;
  local_8a8 = 0;
  local_8a4 = 0;
  local_8cc = 0;
  local_8d0 = 0;
  local_f80 = PTR_vtable_0099eee8 + 0x20;
  local_8a0 = 2;
  local_89c = 0x100;
                    /* try { // try from 00878c10 to 00878c23 has its CatchHandler @ 00878e08 */
  ::facebook::react::RNSScreenStackHeaderSubviewProps::RNSScreenStackHeaderSubviewProps
            ((RNSScreenStackHeaderSubviewProps *)local_898,(PropsParserContext *)local_fe0,
             (RNSScreenStackHeaderSubviewProps *)&local_f80,(RawProps *)&local_f8);
  FUN_0078917c(local_898,puVar5 + 8);
  FUN_0078917c(&local_f80,puVar5 + 8);
  ::facebook::react::RawPropsParser::facebook::react::RawPropsParser::postPrepare(this_00 + 0x38);
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
                    /* try { // try from 00878d28 to 00878d33 has its CatchHandler @ 00878e0c */
        (*(code *)(&PTR_FUN_0098f088)[*(uint *)((long)pvVar3 + -8)])
                  (&local_f80,(void *)((long)pvVar3 + -0x38));
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
  ::facebook::jsi::Value::~Value((Value *)local_e0);
  *(undefined ***)this_00 = &PTR_FUN_00993c18;
  if (local_fa0 != (void *)0x0) {
    pvStack_f98 = local_fa0;
    operator_delete(local_fa0);
  }
  if (pvStack_fb8 != (void *)0x0) {
    local_fb0 = pvStack_fb8;
    operator_delete(pvStack_fb8);
  }
  if (local_fd0 != (void *)0x0) {
    pvStack_fc8 = local_fd0;
    operator_delete(local_fd0);
  }
  *in_x8 = this_00;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00878e10  FUN_00878e10 =====

void FUN_00878e10(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 00878e34  FUN_00878e34 =====

undefined * FUN_00878e34(void)

{
  return PTR_RNSScreenStackHeaderSubviewComponentName_0099eee0;
}


// ===== 00878e40  FUN_00878e40 =====

undefined * FUN_00878e40(void)

{
  return PTR_RNSScreenStackHeaderSubviewComponentName_0099eee0;
}


// ===== 00878e4c  FUN_00878e4c =====

undefined8 FUN_00878e4c(void)

{
  return 0x61;
}


// ===== 00878e54  FUN_00878e54 =====

void FUN_00878e54(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  YogaLayoutableShadowNode *pYVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  long lVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  
  lVar7 = tpidr_el0;
  lVar10 = *(long *)(lVar7 + 0x28);
  uVar8 = (**(code **)(*param_2 + 0x20))();
  puVar9 = (undefined8 *)operator_new(0x400);
  pYVar1 = (YogaLayoutableShadowNode *)(puVar9 + 3);
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = &PTR_FUN_00993d38;
                    /* try { // try from 00878ec0 to 00878ecf has its CatchHandler @ 00878fb8 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4,uVar8);
  lVar11 = puVar9[4];
  puVar9[3] = &PTR_FUN_00993d88;
  uVar3 = *(uint *)((long)puVar9 + 0x6c);
  uVar2 = uVar3 & 3 | (uint)((*(byte *)(lVar11 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)puVar9 + 0x6c) = uVar3 & 0xfffffff8 | uVar2;
  if ((*(uint *)(lVar11 + 0x50) & 0x30000000) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    if (*(char *)(lVar11 + 0x5b4) != '\0') {
      uVar8 = *(undefined4 *)(lVar11 + 0x5b0);
    }
  }
  *(undefined4 *)(puVar9 + 10) = uVar8;
  cVar4 = *(char *)(lVar11 + 0x6b0);
  cVar5 = *(char *)(lVar11 + 0x6b1);
  cVar6 = *(char *)(lVar11 + 0x1e8);
  lVar11 = *param_2;
  puVar9[3] = PTR_vtable_0099eef8 + 0x10;
  *(uint *)((long)puVar9 + 0x6c) =
       uVar3 & 0xfffff000 |
       uVar3 & 0x7f8 | uVar2 | (uint)((cVar4 != '\0' || cVar5 != '\0') || cVar6 != '\0') << 0xb;
                    /* try { // try from 00878f6c to 00878f77 has its CatchHandler @ 00878fa8 */
  (**(code **)(lVar11 + 0x60))(param_2,pYVar1);
  *param_1 = pYVar1;
  param_1[1] = puVar9;
  if (*(long *)(lVar7 + 0x28) != lVar10) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00878fe8  FUN_00878fe8 =====

void FUN_00878fe8(undefined8 *param_1,long *param_2,ShadowNode *param_3,ShadowNodeFragment *param_4)

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
  *plVar8 = (long)&PTR_FUN_00993d38;
                    /* try { // try from 00879040 to 0087904f has its CatchHandler @ 008791a0 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4);
  lVar9 = plVar8[4];
  plVar8[3] = (long)&PTR_FUN_00993d88;
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
  plVar8[3] = (long)(PTR_vtable_0099eef8 + 0x10);
  *(uint *)((long)plVar8 + 0x6c) =
       uVar3 & 0xfffff000 |
       uVar3 & 0x7f8 | uVar2 | (uint)((cVar4 != '\0' || cVar5 != '\0') || cVar6 != '\0') << 0xb;
  local_68 = pYVar1;
  local_60 = plVar8;
                    /* try { // try from 008790e4 to 008790f3 has its CatchHandler @ 008791b8 */
  facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::
  completeClone(pYVar1,param_3,param_4);
  local_78 = pYVar1;
  local_70 = plVar8;
  FUN_00757d00(1,plVar8 + 1);
                    /* try { // try from 00879104 to 00879113 has its CatchHandler @ 00879190 */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_78);
  plVar8 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar9 = FUN_00757990(0xffffffffffffffff,local_70 + 1), lVar9 == 0)) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pYVar1 = local_68;
                    /* try { // try from 00879150 to 0087915b has its CatchHandler @ 008791b8 */
  (**(code **)(*param_2 + 0x60))(param_2,local_68);
  *param_1 = pYVar1;
  param_1[1] = local_60;
  if (*(long *)(lVar7 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 008791e0  FUN_008791e0 =====

void FUN_008791e0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::appendChild
            (*param_2,param_3);
  return;
}


// ===== 008791ec  FUN_008791ec =====

void FUN_008791ec(undefined8 *param_1,long param_2,PropsParserContext *param_3,long *param_4,
                 RawProps *param_5)

{
  RNSScreenStackHeaderSubviewProps *this;
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
  RNSScreenStackHeaderSubviewProps *pRVar12;
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
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_40RNSScreenStackHeaderSubviewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_32RNSScreenStackHeaderSubviewPropsENS0_39RNSScreenStackHeaderSubviewEventEmitterENS0_32RNSScreenStackHeaderSubviewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e9a0
         & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_40RNSScreenStackHeaderSubviewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_32RNSScreenStackHeaderSubviewPropsENS0_39RNSScreenStackHeaderSubviewEventEmitterENS0_32RNSScreenStackHeaderSubviewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e9a0
                                   ), iVar6 != 0)) {
                    /* try { // try from 00879620 to 00879623 has its CatchHandler @ 00879650 */
      FUN_0087a1f0();
      __cxa_atexit(FUN_0087a1a0,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_40RNSScreenStackHeaderSubviewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_32RNSScreenStackHeaderSubviewPropsENS0_39RNSScreenStackHeaderSubviewEventEmitterENS0_32RNSScreenStackHeaderSubviewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e998
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_40RNSScreenStackHeaderSubviewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_32RNSScreenStackHeaderSubviewPropsENS0_39RNSScreenStackHeaderSubviewEventEmitterENS0_32RNSScreenStackHeaderSubviewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e9a0
                         );
    }
    lVar11 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_40RNSScreenStackHeaderSubviewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_32RNSScreenStackHeaderSubviewPropsENS0_39RNSScreenStackHeaderSubviewEventEmitterENS0_32RNSScreenStackHeaderSubviewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e998
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_40RNSScreenStackHeaderSubviewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_32RNSScreenStackHeaderSubviewPropsENS0_39RNSScreenStackHeaderSubviewEventEmitterENS0_32RNSScreenStackHeaderSubviewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e998
    ;
    param_1[1] = lVar11;
    if (lVar11 != 0) {
      FUN_00757d00(1,lVar11 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    pRVar12 = (RNSScreenStackHeaderSubviewProps *)*param_4;
    if (pRVar12 == (RNSScreenStackHeaderSubviewProps *)0x0) {
      if (((*
            PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_40RNSScreenStackHeaderSubviewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_32RNSScreenStackHeaderSubviewPropsENS0_39RNSScreenStackHeaderSubviewEventEmitterENS0_32RNSScreenStackHeaderSubviewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e9a0
           & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_40RNSScreenStackHeaderSubviewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_32RNSScreenStackHeaderSubviewPropsENS0_39RNSScreenStackHeaderSubviewEventEmitterENS0_32RNSScreenStackHeaderSubviewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e9a0
                                     ), iVar6 != 0)) {
                    /* try { // try from 008795a0 to 008795a3 has its CatchHandler @ 00879668 */
        FUN_0087a1f0();
        __cxa_atexit(FUN_0087a1a0,
                     PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_40RNSScreenStackHeaderSubviewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_32RNSScreenStackHeaderSubviewPropsENS0_39RNSScreenStackHeaderSubviewEventEmitterENS0_32RNSScreenStackHeaderSubviewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e998
                     ,&PTR_LOOP_008d5d30);
        __cxa_guard_release(
                           PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_40RNSScreenStackHeaderSubviewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_32RNSScreenStackHeaderSubviewPropsENS0_39RNSScreenStackHeaderSubviewEventEmitterENS0_32RNSScreenStackHeaderSubviewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e9a0
                           );
      }
      pRVar12 = *(RNSScreenStackHeaderSubviewProps **)
                 PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_40RNSScreenStackHeaderSubviewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_32RNSScreenStackHeaderSubviewPropsENS0_39RNSScreenStackHeaderSubviewEventEmitterENS0_32RNSScreenStackHeaderSubviewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e998
      ;
    }
    plVar8 = (long *)operator_new(0x700);
    this = (RNSScreenStackHeaderSubviewProps *)(plVar8 + 3);
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = (long)&PTR_FUN_00993ea0;
                    /* try { // try from 008792cc to 008792df has its CatchHandler @ 008796dc */
    facebook::react::RNSScreenStackHeaderSubviewProps::RNSScreenStackHeaderSubviewProps
              (this,param_3,pRVar12,param_5);
                    /* try { // try from 008792e4 to 008792f7 has its CatchHandler @ 008796f4 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if ((((uVar7 & 1) == 0) ||
        (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar7 & 1) == 0)) ||
       (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
                enablePropsUpdateReconciliationAndroid(), (uVar7 & 1) == 0)) {
LAB_00879320:
      FUN_00757d00(1,plVar8 + 1);
      if (*param_4 == 0) {
        if (((*
              PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_40RNSScreenStackHeaderSubviewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_32RNSScreenStackHeaderSubviewPropsENS0_39RNSScreenStackHeaderSubviewEventEmitterENS0_32RNSScreenStackHeaderSubviewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e9a0
             & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(
                                       PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_40RNSScreenStackHeaderSubviewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_32RNSScreenStackHeaderSubviewPropsENS0_39RNSScreenStackHeaderSubviewEventEmitterENS0_32RNSScreenStackHeaderSubviewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e9a0
                                       ), iVar6 != 0)) {
                    /* try { // try from 008795e0 to 008795e3 has its CatchHandler @ 00879654 */
          FUN_0087a1f0();
          __cxa_atexit(FUN_0087a1a0,
                       PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_40RNSScreenStackHeaderSubviewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_32RNSScreenStackHeaderSubviewPropsENS0_39RNSScreenStackHeaderSubviewEventEmitterENS0_32RNSScreenStackHeaderSubviewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e998
                       ,&PTR_LOOP_008d5d30);
          __cxa_guard_release(
                             PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_40RNSScreenStackHeaderSubviewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_32RNSScreenStackHeaderSubviewPropsENS0_39RNSScreenStackHeaderSubviewEventEmitterENS0_32RNSScreenStackHeaderSubviewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e9a0
                             );
        }
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 00879388 to 0087939b has its CatchHandler @ 00879680 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*(undefined8 *)
                         PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_40RNSScreenStackHeaderSubviewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_32RNSScreenStackHeaderSubviewPropsENS0_39RNSScreenStackHeaderSubviewEventEmitterENS0_32RNSScreenStackHeaderSubviewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e998
                   ,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
LAB_008793d4:
          (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
        }
        else if (local_b0 != (dynamic *)0x0) {
          lVar11 = 5;
          pdVar10 = local_b0;
          goto LAB_008793d4;
        }
        if (plVar8 != (long *)0x0) goto LAB_008793e8;
      }
      else {
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 0087933c to 0087934f has its CatchHandler @ 008796a8 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*param_4,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
        }
        else {
          if (local_b0 == (dynamic *)0x0) goto LAB_008793e8;
          lVar11 = 5;
          pdVar10 = local_b0;
        }
        (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
LAB_008793e8:
        lVar11 = FUN_00757990(0xffffffffffffffff,plVar8 + 1);
        if (lVar11 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 00879304 to 0087930f has its CatchHandler @ 0087967c */
      pcVar9 = (char *)(**(code **)(*(long *)this + 0x10))(this);
      iVar6 = strcmp(PTR_RNSScreenStackHeaderSubviewComponentName_0099eee0,pcVar9);
      if (iVar6 != 0) goto LAB_00879320;
      bVar3 = false;
    }
                    /* try { // try from 00879414 to 00879417 has its CatchHandler @ 008796f4 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar7 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 00879424 to 0087943f has its CatchHandler @ 008796a4 */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(plVar8 + 7));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00879580 to 0087958f has its CatchHandler @ 0087969c */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_00879740;
      }
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (*(int *)(plVar4 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00879560 to 0087956f has its CatchHandler @ 00879700 */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_00879740;
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
                    /* try { // try from 008794c0 to 008794cb has its CatchHandler @ 00879708 */
        folly::dynamic::dynamic(local_d0,(dynamic *)(plVar4 + 8));
        local_a0 = 0;
                    /* try { // try from 008794d0 to 008794e7 has its CatchHandler @ 0087970c */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (this,param_3,uVar1,pcVar9,local_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 008794f8 to 00879503 has its CatchHandler @ 008796fc */
          (*(code *)(&PTR_FUN_0098f088)[local_a0])(&uStack_d1,local_d0);
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
LAB_00879740:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00879744  FUN_00879744 =====

/* WARNING: Removing unreachable block (ram,0x00879848) */
/* WARNING: Removing unreachable block (ram,0x00879858) */
/* WARNING: Removing unreachable block (ram,0x0087987c) */
/* WARNING: Removing unreachable block (ram,0x0087988c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00879744(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  State *pSVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 local_78;
  long local_70;
  long *local_68;
  long *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  plVar4 = (long *)operator_new(0x28);
  lVar3 = _UNK_00371488;
  lVar6 = _DAT_00371480;
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_00994098;
  plVar4[4] = lVar3;
  plVar4[3] = lVar6;
                    /* try { // try from 008797a4 to 008797ab has its CatchHandler @ 00879908 */
  puVar5 = (undefined8 *)operator_new(0x50);
  local_78 = *param_4;
  local_70 = param_4[1];
  pSVar1 = (State *)(puVar5 + 3);
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_00993ef0;
  if (local_70 != 0) {
    FUN_00757d00(1,local_70 + 0x10);
  }
                    /* try { // try from 008797e8 to 008797f7 has its CatchHandler @ 008798d0 */
  local_68 = plVar4 + 3;
  local_60 = plVar4;
  facebook::react::State::State(pSVar1,&local_68,&local_78);
  if (local_70 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar4 = local_60;
  if ((local_60 != (long *)0x0) &&
     (lVar6 = FUN_00757990(0xffffffffffffffff,local_60 + 1), lVar6 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *(undefined ***)pSVar1 = &PTR_FUN_00993f40;
  *param_1 = pSVar1;
  param_1[1] = puVar5;
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00879930  FUN_00879930 =====

/* WARNING: Removing unreachable block (ram,0x00879a04) */
/* WARNING: Removing unreachable block (ram,0x00879a14) */
/* WARNING: Removing unreachable block (ram,0x00879a68) */
/* WARNING: Removing unreachable block (ram,0x00879a78) */

void FUN_00879930(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  State *pSVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 local_88;
  long *local_80;
  undefined8 local_58;
  long *local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  uVar2 = *param_4;
  plVar3 = (long *)param_4[1];
  if (plVar3 != (long *)0x0) {
    FUN_00757d00(1,plVar3 + 1);
  }
                    /* try { // try from 00879974 to 0087997f has its CatchHandler @ 00879af0 */
  facebook::react::ShadowNodeFamily::getMostRecentState();
                    /* try { // try from 00879984 to 0087998b has its CatchHandler @ 00879ae0 */
  puVar5 = (undefined8 *)operator_new(0x50);
  pSVar1 = (State *)(puVar5 + 3);
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_009940f8;
                    /* try { // try from 008799b0 to 008799bf has its CatchHandler @ 00879ab8 */
  local_58 = uVar2;
  local_50 = plVar3;
  facebook::react::State::State(pSVar1,&local_58,local_88);
  plVar3 = local_50;
  if ((local_50 != (long *)0x0) &&
     (lVar6 = FUN_00757990(0xffffffffffffffff,local_50 + 1), lVar6 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *(undefined ***)pSVar1 = &PTR_FUN_00993f40;
  *param_1 = pSVar1;
  param_1[1] = puVar5;
  if ((local_80 != (long *)0x0) &&
     (lVar6 = FUN_00757990(0xffffffffffffffff,local_80 + 1), lVar6 == 0)) {
    (**(code **)(*local_80 + 0x10))(local_80);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00879b18  FUN_00879b18 =====

void FUN_00879b18(undefined8 *param_1,long param_2,long param_3)

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
                    /* try { // try from 00879b60 to 00879b67 has its CatchHandler @ 00879e4c */
  plVar5 = (long *)operator_new(0x68);
  *plVar5 = (long)&PTR_FUN_00994148;
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
                    /* try { // try from 00879ba4 to 00879bb3 has its CatchHandler @ 00879e20 */
  facebook::react::EventEmitter::EventEmitter(pEVar1,&local_70,&local_80);
  *(undefined ***)pEVar1 = &PTR_FUN_0097ff10;
                    /* try { // try from 00879bc4 to 00879bcb has its CatchHandler @ 00879e10 */
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
  plVar5[3] = (long)&PTR_FUN_00994198;
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
                    /* try { // try from 00879c7c to 00879c83 has its CatchHandler @ 00879e00 */
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
                    /* try { // try from 00879cd0 to 00879ce7 has its CatchHandler @ 00879dd0 */
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
                    /* try { // try from 00879d3c to 00879d47 has its CatchHandler @ 00879db0 */
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


// ===== 00879e74  FUN_00879e74 =====

void FUN_00879e74(void)

{
  return;
}


// ===== 00879e78  FUN_00879e78 =====

void FUN_00879e78(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 00879e9c  FUN_00879e9c =====

void FUN_00879e9c(void)

{
  return;
}


// ===== 00879ea0  FUN_00879ea0 =====

void FUN_00879ea0(long param_1)

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


// ===== 00879ef0  FUN_00879ef0 =====

void FUN_00879ef0(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00993d38;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00879f00  FUN_00879f00 =====

void FUN_00879f00(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00993d38;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00879f30  FUN_00879f30 =====

void FUN_00879f30(long param_1)

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


// ===== 00879ff4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00879ff8  FUN_00879ff8 =====

void FUN_00879ff8(long *param_1)

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


// ===== 0087a0b8  FUN_0087a0b8 =====

void FUN_0087a0b8(long param_1)

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


// ===== 0087a120  FUN_0087a120 =====

bool FUN_0087a120(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 0087a138  FUN_0087a138 =====

bool FUN_0087a138(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 0087a150  FUN_0087a150 =====

void FUN_0087a150(long param_1)

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


// ===== 0087a1a0  FUN_0087a1a0 =====

void FUN_0087a1a0(long param_1)

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


// ===== 0087a1f0  FUN_0087a1f0 =====

void FUN_0087a1f0(void)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x700);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_00993e50;
  memset(__s,0,0x6e8);
                    /* try { // try from 0087a22c to 0087a23f has its CatchHandler @ 0087a2bc */
  FUN_00788b10(__s,PTR_VTT_0099eef0 + 0x10);
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
  puVar1 = PTR_vtable_0099eee8;
  *(undefined1 *)((long)puVar2 + 0x6f4) = 0;
  *(undefined4 *)(puVar2 + 0xd9) = 0;
  puVar2[3] = puVar1 + 0x20;
  *(undefined4 *)(puVar2 + 0xdf) = 2;
  *(undefined2 *)((long)puVar2 + 0x6fc) = 0x100;
  puVar1 = 
  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_40RNSScreenStackHeaderSubviewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_32RNSScreenStackHeaderSubviewPropsENS0_39RNSScreenStackHeaderSubviewEventEmitterENS0_32RNSScreenStackHeaderSubviewStateEE18defaultSharedPropsEvE18defaultSharedProps_0099e998
  ;
  *(undefined2 *)((long)puVar2 + 0x6cc) = 0;
  *(undefined8 **)puVar1 = __s;
  *(undefined8 **)(puVar1 + 8) = puVar2;
  return;
}


