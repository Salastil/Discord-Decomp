// ===== 008957bc  FUN_008957bc =====

bool FUN_008957bc(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 008957d4  FUN_008957d4 =====

void FUN_008957d4(long param_1)

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


// ===== 00895824  FUN_00895824 =====

void FUN_00895824(void)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x990);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_00997ad0;
  memset(__s,0,0x978);
                    /* try { // try from 00895860 to 00895873 has its CatchHandler @ 0089599c */
  FUN_00788b10(__s,PTR_VTT_0099f048 + 0x10);
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
  puVar1 = PTR_vtable_0099f040;
  puVar2[0x111] = 0;
  *(undefined4 *)(puVar2 + 0xd9) = 0;
  *(undefined2 *)((long)puVar2 + 0x6cc) = 0;
  puVar2[3] = puVar1 + 0x20;
  puVar2[0xe0] = 0;
  puVar2[0xdf] = 0;
  puVar2[0xe4] = 0;
  puVar2[0xe3] = 0;
  puVar2[0xe6] = 0;
  puVar2[0xe5] = 0;
  puVar2[0xe8] = 0;
  puVar2[0xe7] = 0;
  puVar2[0xea] = 0;
  puVar2[0xe9] = 0;
  puVar2[0xec] = 0;
  puVar2[0xeb] = 0;
  puVar2[0xee] = 0;
  puVar2[0xed] = 0;
  puVar2[0xf0] = 0;
  puVar2[0xef] = 0;
  puVar2[0xf2] = 0;
  puVar2[0xf1] = 0;
  puVar2[0xf4] = 0;
  puVar2[0xf3] = 0;
  puVar2[0xe1] = 0;
  *(undefined4 *)(puVar2 + 0xe2) = 0x3f800000;
  *(undefined4 *)(puVar2 + 0xfd) = 0;
  puVar2[0xfe] = 0;
  *(undefined8 *)((long)puVar2 + 0x7a5) = 0;
  puVar2[0xf7] = 0;
  puVar2[0xf6] = 0;
  puVar2[0xf9] = 0;
  puVar2[0xf8] = 0;
  puVar2[0xfb] = 0;
  puVar2[0xfa] = 0;
  *(undefined4 *)(puVar2 + 0xfc) = 0;
  puVar2[0x103] = 0x13f800000;
  *(undefined4 *)(puVar2 + 0x104) = 0;
  puVar2[0x105] = 0;
  *(undefined4 *)(puVar2 + 0x10a) = 0x3f800000;
  *(undefined4 *)(puVar2 + 0x10b) = 0;
  puVar2[0x10c] = 0;
  *(undefined4 *)(puVar2 + 0x112) = 0;
  puVar2[0x113] = 0;
  puVar2[0x118] = 0;
  *(undefined4 *)(puVar2 + 0x119) = 0;
  puVar2[0x121] = 0;
  *(undefined4 *)(puVar2 + 0x126) = 0;
  puVar2[0x127] = 0;
  *(undefined4 *)(puVar2 + 300) = 0;
  puVar2[0x12d] = 0;
  *(undefined4 *)(puVar2 + 0x120) = 0;
  puVar2[0x11f] = 0;
  puVar2[0x11e] = 0;
  puVar2[0x11d] = 0;
  puVar2[0x11c] = 0;
  puVar1 = 
  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNSVGCircleComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_16RNSVGCirclePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eb68
  ;
  puVar2[0x11b] = 0;
  puVar2[0x11a] = 0;
  *(undefined8 **)puVar1 = __s;
  *(undefined8 **)(puVar1 + 8) = puVar2;
  return;
}


// ===== 008959b8  FUN_008959b8 =====

void FUN_008959b8(long param_1)

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


// ===== 00895a08  FUN_00895a08 =====

void FUN_00895a08(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00997ad0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00895a18  FUN_00895a18 =====

void FUN_00895a18(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00997ad0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00895a48  FUN_00895a48 =====

void FUN_00895a48(long param_1)

{
  FUN_00895448(param_1 + 0x18);
  return;
}


// ===== 00895a50  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00895a54  FUN_00895a54 =====

void FUN_00895a54(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00997b20;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00895a64  FUN_00895a64 =====

void FUN_00895a64(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00997b20;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00895a94  FUN_00895a94 =====

void FUN_00895a94(long param_1)

{
  FUN_00895448(param_1 + 0x18);
  return;
}


// ===== 00895a9c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00895aa0  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_23RNSVGConcreteShadowNodeIXadsoKcL_ZNS0_26RNSVGClipPathComponentNameEEEENS0_18RNSVGClipPathPropsEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENS8_14default_deleteISB_EEEERKNS0_29ComponentDescriptorParametersE =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_23RNSVGConcreteShadowNodeIXadsoKcL_ZNS0_26RNSVGClipPathComponentNameEEEENS0_18RNSVGClipPathPropsEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENS8_14default_deleteISB_EEEERKNS0_29ComponentDescriptorParametersE
               (undefined8 *param_1,ComponentDescriptorParameters *param_2)

{
  byte bVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  ComponentDescriptor *this;
  long lVar5;
  long *plVar6;
  void *pvVar7;
  undefined4 local_1500 [2];
  undefined8 *local_14f8;
  void *local_14f0;
  void *pvStack_14e8;
  undefined8 local_14e0;
  void *pvStack_14d8;
  void *local_14d0;
  undefined8 uStack_14c8;
  void *local_14c0;
  void *pvStack_14b8;
  undefined8 uStack_14b0;
  undefined8 uStack_14a8;
  undefined *local_14a0;
  undefined8 uStack_1498;
  undefined8 local_1490;
  undefined8 uStack_1488;
  undefined4 local_1480 [2];
  undefined8 local_1478;
  undefined8 uStack_1470;
  undefined8 local_1468;
  undefined8 uStack_1460;
  undefined4 local_1458;
  undefined4 local_1450;
  undefined1 local_144c;
  undefined8 local_144b;
  undefined8 local_1443;
  undefined8 uStack_143b;
  undefined8 local_1433;
  undefined8 uStack_142b;
  undefined8 local_1423;
  undefined8 uStack_141b;
  undefined8 local_1413;
  undefined6 uStack_140b;
  undefined2 uStack_1405;
  undefined6 uStack_1403;
  undefined8 uStack_13fd;
  undefined4 local_13f5;
  undefined8 local_13f1;
  undefined1 local_13e9;
  undefined1 uStack_13e8;
  undefined7 uStack_13e7;
  undefined8 uStack_13e0;
  undefined8 uStack_13d8;
  undefined8 uStack_13d0;
  undefined8 local_13c8;
  undefined8 uStack_13c0;
  undefined8 local_13b8;
  undefined8 uStack_13b0;
  undefined8 local_13a8;
  undefined8 uStack_13a0;
  undefined8 local_1398;
  undefined8 uStack_1390;
  undefined8 uStack_1388;
  undefined8 local_1380;
  undefined8 local_1378;
  undefined8 uStack_1370;
  undefined8 local_1368;
  undefined4 uStack_1360;
  undefined4 uStack_135c;
  undefined4 uStack_1358;
  undefined4 uStack_1354;
  undefined4 uStack_1350;
  undefined4 uStack_134c;
  undefined8 local_1348;
  undefined8 uStack_1340;
  undefined4 local_1338;
  undefined1 local_1334;
  undefined4 local_1330;
  undefined1 local_132c;
  undefined4 local_1328;
  undefined1 local_1324;
  undefined4 local_1320;
  undefined1 local_131c;
  undefined4 local_1318;
  undefined1 local_1314;
  undefined4 local_1310;
  undefined1 local_130c;
  undefined4 local_1308;
  undefined1 local_1304;
  undefined4 local_1300;
  undefined1 local_12fc;
  undefined4 local_12f8;
  undefined1 local_12f4;
  undefined4 local_12f0;
  undefined1 local_12ec;
  undefined4 local_12e8;
  undefined1 local_12e4;
  undefined4 local_12e0;
  undefined1 local_12dc;
  undefined4 local_12d8;
  undefined1 local_12d4;
  undefined4 local_12d0;
  undefined1 local_12cc;
  undefined4 local_12c8;
  undefined1 local_12c4;
  undefined4 local_12c0;
  undefined1 local_12bc;
  undefined1 local_12b8;
  undefined1 local_12b4;
  undefined1 local_12a8;
  undefined8 local_12a0;
  undefined8 uStack_1298;
  undefined8 uStack_1290;
  undefined8 uStack_1288;
  undefined8 local_1280;
  undefined8 uStack_1278;
  undefined8 uStack_1270;
  undefined1 uStack_1268;
  undefined7 local_1267;
  undefined1 uStack_1260;
  undefined8 uStack_125f;
  undefined8 local_1254;
  undefined8 uStack_124c;
  undefined8 uStack_1244;
  undefined8 uStack_123c;
  undefined8 local_1234;
  undefined8 uStack_122c;
  undefined8 uStack_1224;
  undefined8 uStack_121c;
  undefined8 local_1214;
  undefined8 uStack_120c;
  undefined8 uStack_1204;
  undefined5 uStack_11fc;
  undefined3 local_11f7;
  undefined5 uStack_11f4;
  undefined1 local_11ec;
  undefined1 local_11e8;
  undefined1 local_11e4;
  undefined1 local_11e0;
  undefined1 local_11dc;
  undefined1 local_11d8;
  undefined1 local_11c0;
  undefined8 local_11b8;
  undefined8 uStack_11b0;
  undefined8 local_11a8;
  undefined4 local_11a0;
  undefined1 local_119c;
  undefined4 local_119b;
  undefined1 local_1197;
  undefined1 local_1196;
  undefined8 local_1190;
  undefined8 uStack_1188;
  undefined8 uStack_1180;
  undefined8 uStack_1178;
  undefined8 local_1170;
  undefined7 uStack_1168;
  undefined4 uStack_1161;
  undefined8 local_115c;
  undefined1 local_1154;
  undefined1 local_114c;
  undefined1 local_1148;
  undefined1 local_1140;
  undefined1 local_113c;
  undefined1 local_1134;
  undefined1 local_1130;
  undefined1 local_1128;
  undefined1 local_1124;
  undefined1 local_111c;
  undefined1 local_1118;
  undefined1 local_1110;
  undefined1 local_110c;
  undefined1 local_1104;
  undefined1 local_1100;
  undefined1 local_10f8;
  undefined1 local_10f4;
  undefined1 local_10ec;
  undefined1 local_10e8;
  undefined1 local_10e0;
  undefined1 local_10dc;
  undefined1 local_10d4;
  undefined1 local_10d0;
  undefined1 local_10c8;
  undefined1 local_10c4;
  undefined1 local_10bc;
  undefined1 local_10b8;
  undefined1 local_10b4;
  undefined1 local_10b0;
  undefined1 local_10ac;
  undefined1 local_10a8;
  undefined1 local_10a4;
  undefined1 local_10a0;
  undefined1 local_109c;
  undefined1 local_1098;
  undefined1 local_1094;
  undefined1 local_1090;
  undefined1 local_108c;
  undefined1 local_1088;
  undefined1 local_1084;
  undefined1 local_1080;
  undefined1 local_107c;
  undefined1 local_1078;
  undefined1 local_1074;
  undefined1 local_1070;
  undefined1 local_106c;
  undefined1 local_1068;
  undefined1 local_1064;
  undefined1 local_1060;
  undefined1 local_105c;
  undefined8 local_1058;
  undefined8 uStack_1050;
  undefined8 local_1048;
  undefined8 uStack_1040;
  undefined8 uStack_1038;
  undefined8 uStack_1030;
  undefined2 local_1028;
  undefined8 local_1024;
  undefined1 local_101c;
  undefined8 local_1018;
  undefined8 local_1010;
  undefined8 uStack_1008;
  undefined1 local_1000;
  undefined8 local_ff8;
  undefined8 uStack_ff0;
  undefined8 uStack_fe8;
  undefined8 uStack_fe0;
  undefined8 local_fd8;
  undefined8 uStack_fd0;
  undefined8 uStack_fc8;
  undefined8 uStack_fc0;
  undefined8 local_fb8;
  undefined8 uStack_fb0;
  undefined8 uStack_fa8;
  undefined8 uStack_fa0;
  undefined8 local_f98;
  undefined8 uStack_f90;
  undefined8 uStack_f88;
  undefined8 uStack_f80;
  undefined8 local_f78;
  undefined8 uStack_f70;
  undefined8 uStack_f68;
  undefined8 uStack_f60;
  undefined8 local_f58;
  undefined8 uStack_f50;
  undefined8 local_f48;
  undefined8 uStack_f40;
  undefined8 local_f38;
  undefined8 uStack_f30;
  undefined8 local_f28;
  undefined8 uStack_f20;
  undefined8 local_f18;
  undefined8 uStack_f10;
  undefined8 local_f08;
  undefined6 uStack_f00;
  undefined2 uStack_efa;
  undefined6 uStack_ef8;
  undefined1 local_ef0;
  undefined1 local_eec;
  undefined1 local_ee8;
  undefined8 local_ee4;
  undefined8 uStack_edc;
  undefined1 local_ed4;
  undefined8 local_ed0;
  undefined2 local_ec8;
  undefined1 local_ec6;
  undefined4 local_ec4;
  undefined1 local_ec0;
  undefined1 local_e60;
  undefined1 local_e58;
  undefined1 local_df8;
  undefined4 local_df0;
  undefined2 local_dec;
  undefined1 local_de8;
  undefined1 local_de4;
  undefined1 local_de0;
  undefined1 local_ddc;
  undefined1 local_dd8;
  undefined1 local_dd4;
  undefined1 local_dd0;
  undefined1 local_dcc;
  undefined1 local_dc8;
  undefined1 local_dc4;
  undefined8 local_dc0;
  undefined8 uStack_db8;
  undefined8 local_db0;
  undefined4 local_da8;
  undefined8 local_da0;
  undefined8 uStack_d98;
  undefined8 local_d90;
  undefined8 uStack_d88;
  undefined8 local_d80;
  undefined8 uStack_d78;
  undefined8 local_d70;
  undefined8 uStack_d68;
  undefined8 local_d60;
  undefined8 uStack_d58;
  undefined8 local_d50;
  undefined8 uStack_d48;
  undefined8 local_d40;
  undefined8 uStack_d38;
  undefined8 local_d30;
  undefined8 uStack_d28;
  undefined8 local_d20;
  undefined5 uStack_d18;
  undefined3 uStack_d13;
  undefined5 uStack_d10;
  undefined8 local_d08;
  undefined8 uStack_d00;
  undefined8 local_cf8;
  undefined8 uStack_cf0;
  undefined8 uStack_ce8;
  undefined8 uStack_ce0;
  undefined4 local_cd8;
  undefined4 local_cd0;
  undefined8 local_cc8;
  undefined8 local_ca0;
  undefined4 local_c98;
  undefined8 local_c90;
  undefined4 local_c68;
  undefined4 local_c60;
  undefined8 local_c58;
  undefined8 local_c30;
  undefined4 local_c28;
  undefined8 local_c20;
  undefined8 local_bf8;
  undefined4 local_bf0;
  undefined8 local_be8;
  undefined8 uStack_be0;
  undefined8 local_bd8;
  undefined8 uStack_bd0;
  undefined8 uStack_bc8;
  undefined8 uStack_bc0;
  undefined4 local_bb8;
  undefined8 local_bb0;
  undefined4 local_b88;
  undefined8 local_b80;
  undefined4 local_b58;
  undefined8 local_b50;
  undefined4 local_b28 [2];
  undefined8 local_b20;
  undefined8 uStack_b18;
  undefined8 local_b10;
  undefined8 local_b08;
  undefined8 uStack_b00;
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
  pvStack_14d8 = (void *)0x0;
  local_14e0 = 0;
  uStack_14c8 = 0;
  local_14d0 = (void *)0x0;
  pvStack_14b8 = (void *)0x0;
  local_14c0 = (void *)0x0;
  uStack_14a8 = 0;
  uStack_14b0 = 0;
  pvStack_14e8 = (void *)0x0;
  local_14f0 = (void *)0x0;
                    /* try { // try from 00895af4 to 00895aff has its CatchHandler @ 008961e0 */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_14f0);
  local_f8 = 0;
  *(undefined ***)this = &PTR_FUN_00997b70;
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
                    /* try { // try from 00895b70 to 00895b83 has its CatchHandler @ 00896210 */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1b0);
  local_100 = CONCAT44(local_100._4_4_,0x3f800000);
  local_1500[0] = 0xffffffff;
  uStack_108 = 0;
  local_110 = (void *)0x0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_14f8 = &local_1b0;
  facebook::react::RawProps::facebook::react::RawProps::parse(&local_f8,this + 0x38);
  memset(local_1480,0,0x958);
  local_b28[0] = 5;
  local_b10 = 0;
  local_14a0 = *(undefined **)(PTR_VTT_0099f060 + 0x20);
  local_1480[0] = 5;
  uStack_1488 = 0;
  local_1490 = 0;
  local_b08 = 0;
  uStack_1498 = 0;
  uStack_b00 = 0x3f800000;
  uStack_b18 = 0;
  local_b20 = 0;
  uStack_1470 = 0;
  local_1478 = 0;
  uStack_1460 = 0;
  local_1468 = 0;
  local_1458 = 0x3f800000;
  folly::dynamic::folly::dynamic::destroy(local_b28);
  local_1450 = 0x10410710;
  local_144c = 0;
  uStack_1360 = 0;
  local_1368 = 0;
  uStack_134c = 0;
  uStack_1370 = 0;
  local_1378 = 0;
  uStack_13e7 = 0;
  uStack_143b = 0;
  local_1443 = 0;
  local_144b = _s__00375408;
  uStack_142b = 0;
  local_1433 = 0;
  uStack_1008 = _UNK_00371598;
  local_1010 = _DAT_00371590;
  uStack_141b = 0;
  local_1423 = 0;
  uStack_140b = 0;
  local_1413 = 0;
  uStack_f10 = _UNK_00488920;
  local_f18 = _DAT_00488918;
  uStack_f20 = _UNK_00488910;
  local_f28 = _DAT_00488908;
  local_13f5 = 0x40004;
  uStack_1354 = 0;
  uStack_1350 = 0;
  uStack_135c = 0;
  uStack_1358 = 0;
  uStack_1340 = 0;
  local_1348 = 0;
  local_1338 = 0x7fc00000;
  local_1330 = 0x7fc00000;
  local_1328 = 0x7fc00000;
  local_1320 = 0x7fc00000;
  local_1318 = 0x7fc00000;
  local_1310 = 0x7fc00000;
  local_1308 = 0x7fc00000;
  local_1300 = 0x7fc00000;
  local_12f8 = 0x7fc00000;
  local_12f0 = 0x7fc00000;
  local_12e8 = 0x7fc00000;
  local_12e0 = 0x7fc00000;
  local_12d8 = 0x7fc00000;
  local_12d0 = 0x7fc00000;
  local_12c8 = 0x7fc00000;
  local_12c0 = 0x7fc00000;
  uStack_125f = 0;
  uStack_1260 = 0;
  uStack_124c = 0;
  local_1254 = 0;
  uStack_123c = 0;
  uStack_1244 = 0;
  uStack_122c = 0;
  local_1234 = 0;
  uStack_121c = 0;
  uStack_1224 = 0;
  uStack_120c = 0;
  local_1214 = 0;
  uStack_11fc = 0;
  uStack_1204 = 0;
  local_11f7 = 0;
  uStack_11f4 = 0;
  local_119c = 1;
  local_119b = 0;
  local_1196 = 0x23;
  local_115c = 0x3f800000;
  uStack_1040 = 0;
  local_1048 = 0;
  uStack_1030 = 0;
  uStack_1038 = 0;
  uStack_1050 = 0;
  local_1058 = 0;
  uStack_f30 = _UNK_00488900;
  local_f38 = _DAT_004888f8;
  local_1024 = 0;
  uStack_f40 = _UNK_004888f0;
  local_f48 = _DAT_004888e8;
  uStack_ff0 = 0;
  local_ff8 = 0;
  uStack_fe0 = 0;
  uStack_fe8 = 0;
  uStack_fd0 = 0;
  local_fd8 = 0;
  uStack_fc0 = 0;
  uStack_fc8 = 0;
  uStack_fb0 = 0;
  local_fb8 = 0;
  uStack_fa0 = 0;
  uStack_fa8 = 0;
  uStack_f90 = 0;
  local_f98 = 0;
  uStack_f80 = 0;
  uStack_f88 = 0;
  uStack_f70 = 0;
  local_f78 = 0;
  uStack_f60 = 0;
  uStack_f68 = 0;
  uStack_f50 = 0;
  local_f58 = 0;
  uStack_ef8 = 0;
  uStack_f00 = 0;
  uStack_efa = 0;
  local_f08 = 0;
  uStack_13fd = 0;
  uStack_1405 = 0;
  uStack_1403 = 0;
  local_13f1 = 0;
  local_13e9 = 0;
  uStack_13e8 = 0;
  uStack_13d8 = 0;
  uStack_13e0 = 0;
  local_13c8 = 0;
  uStack_13d0 = 0;
  local_13b8 = 0;
  uStack_13c0 = 0;
  local_13a8 = 0;
  uStack_13b0 = 0;
  local_1398 = 0;
  uStack_13a0 = 0;
  uStack_1388 = 0;
  uStack_1390 = 0;
  local_1380 = 0;
  local_1334 = 0;
  local_132c = 0;
  local_1324 = 0;
  local_131c = 0;
  local_1314 = 0;
  local_130c = 0;
  local_1304 = 0;
  local_12fc = 0;
  local_12f4 = 0;
  local_12ec = 0;
  local_12e4 = 0;
  local_12dc = 0;
  local_12d4 = 0;
  local_12cc = 0;
  local_12c4 = 0;
  local_12bc = 0;
  local_12b8 = 0;
  local_12b4 = 0;
  local_12a8 = 0;
  local_11ec = 0;
  local_11e8 = 0;
  local_11e4 = 0;
  local_11e0 = 0;
  local_11dc = 0;
  local_11d8 = 0;
  local_11c0 = 0;
  uStack_1298 = 0;
  local_12a0 = 0;
  uStack_1288 = 0;
  uStack_1290 = 0;
  uStack_1278 = 0;
  local_1280 = 0;
  uStack_1268 = 0;
  local_1267 = 0;
  uStack_1270 = 0;
  uStack_11b0 = 0;
  local_11b8 = 0;
  local_11a8 = 0;
  local_11a0 = 0;
  local_1197 = 0;
  uStack_1188 = 0;
  local_1190 = 0;
  uStack_1178 = 0;
  uStack_1180 = 0;
  uStack_1168 = 0;
  uStack_1161 = 0;
  local_1170 = 0;
  local_1154 = 0;
  local_114c = 0;
  local_1148 = 0;
  local_1140 = 0;
  local_113c = 0;
  local_1134 = 0;
  local_1130 = 0;
  local_1128 = 0;
  local_1124 = 0;
  local_111c = 0;
  local_1118 = 0;
  local_1110 = 0;
  local_110c = 0;
  local_1104 = 0;
  local_1100 = 0;
  local_10f8 = 0;
  local_10f4 = 0;
  local_10ec = 0;
  local_10e8 = 0;
  local_10e0 = 0;
  local_10dc = 0;
  local_10d4 = 0;
  local_10d0 = 0;
  local_10c8 = 0;
  local_10c4 = 0;
  local_10bc = 0;
  local_10b8 = 0;
  local_10b4 = 0;
  local_10b0 = 0;
  local_10ac = 0;
  local_10a8 = 0;
  local_10a4 = 0;
  local_10a0 = 0;
  local_109c = 0;
  local_1098 = 0;
  local_1094 = 0;
  local_1090 = 0;
  local_108c = 0;
  local_1088 = 0;
  local_1084 = 0;
  local_1080 = 0;
  local_107c = 0;
  local_1078 = 0;
  local_1074 = 0;
  local_1070 = 0;
  local_106c = 0;
  local_1068 = 0;
  local_1064 = 0;
  local_1060 = 0;
  local_105c = 0;
  local_1018 = 0;
  local_1028 = 0;
  local_101c = 0;
  local_1000 = 0;
  local_ef0 = 0;
  local_eec = 0;
  local_ee8 = 0;
  local_ed0 = 0;
  uStack_edc = 0;
  local_ee4 = 0;
  local_ed4 = 0;
  local_ec8 = 0x101;
  local_ec6 = 0;
  local_ec4 = 0;
  local_ec0 = 0;
  local_e60 = 0;
  local_e58 = 0;
  local_df8 = 0;
  local_de8 = 0;
  local_de4 = 0;
  local_de0 = 0;
  local_ddc = 0;
  local_dd8 = 0;
  local_dd4 = 0;
  local_dd0 = 0;
  local_dcc = 0;
  local_dc8 = 0;
  local_dc4 = 0;
  local_dec = 0;
  local_df0 = 0;
  local_14a0 = PTR_vtable_0099f058 + 0x20;
  local_db0 = 0;
  uStack_d10 = 0;
  uStack_cf0 = 0;
  local_cf8 = 0;
  uStack_ce0 = 0;
  uStack_ce8 = 0;
  uStack_d00 = 0;
  local_d08 = 0;
  uStack_db8 = 0;
  local_dc0 = 0;
  local_ca0 = 0x13f800000;
  local_da8 = 0x3f800000;
  local_cd0 = 0;
  local_cc8 = 0;
  uStack_d98 = 0;
  local_da0 = 0;
  uStack_d88 = 0;
  local_d90 = 0;
  uStack_d78 = 0;
  local_d80 = 0;
  uStack_d68 = 0;
  local_d70 = 0;
  uStack_d58 = 0;
  local_d60 = 0;
  uStack_d48 = 0;
  local_d50 = 0;
  uStack_d38 = 0;
  local_d40 = 0;
  uStack_d28 = 0;
  local_d30 = 0;
  uStack_d18 = 0;
  uStack_d13 = 0;
  local_d20 = 0;
  local_cd8 = 0;
  local_c98 = 0;
  local_c90 = 0;
  local_c68 = 0x3f800000;
  local_c60 = 0;
  local_c58 = 0;
  local_c30 = 0;
  local_c28 = 0;
  local_c20 = 0;
  local_bf8 = 0;
  local_bf0 = 0;
  local_bb0 = 0;
  local_b88 = 0;
  local_b80 = 0;
  local_b58 = 0;
  local_b50 = 0;
  uStack_bd0 = 0;
  local_bd8 = 0;
  uStack_bc0 = 0;
  uStack_bc8 = 0;
  uStack_be0 = 0;
  local_be8 = 0;
  local_bb8 = 0;
                    /* try { // try from 00896020 to 00896033 has its CatchHandler @ 00896210 */
  facebook::react::RNSVGClipPathProps::RNSVGClipPathProps
            ((RNSVGClipPathProps *)local_b28,(PropsParserContext *)local_1500,
             (RNSVGClipPathProps *)&local_14a0,(RawProps *)&local_f8);
  FUN_00896cd4(local_b28);
  FUN_00896cd4(&local_14a0);
  facebook::react::RawPropsParser::facebook::react::RawPropsParser::postPrepare(this + 0x38);
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
  pvVar7 = pvStack_80;
  pvVar3 = local_78;
  if (pvStack_80 != (void *)0x0) {
    while (pvVar3 != pvVar7) {
      if (*(uint *)((long)pvVar3 + -8) != 0xffffffff) {
                    /* try { // try from 00896138 to 00896143 has its CatchHandler @ 00896214 */
        (*(code *)(&PTR_FUN_0098f088)[*(uint *)((long)pvVar3 + -8)])
                  (&local_14a0,(void *)((long)pvVar3 + -0x38));
      }
      *(undefined4 *)((long)pvVar3 + -8) = 0xffffffff;
      pvVar3 = (void *)((long)pvVar3 + -0x38);
    }
    local_78 = pvVar7;
    operator_delete(pvStack_80);
  }
  if (local_98 != (void *)0x0) {
    pvStack_90 = local_98;
    operator_delete(local_98);
  }
  folly::dynamic::folly::dynamic::destroy(local_d0);
  facebook::jsi::Value::~Value((Value *)local_e0);
  if (local_14c0 != (void *)0x0) {
    pvStack_14b8 = local_14c0;
    operator_delete(local_14c0);
  }
  if (pvStack_14d8 != (void *)0x0) {
    local_14d0 = pvStack_14d8;
    operator_delete(pvStack_14d8);
  }
  if (local_14f0 != (void *)0x0) {
    pvStack_14e8 = local_14f0;
    operator_delete(local_14f0);
  }
  *param_1 = this;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00896218  FUN_00896218 =====

void FUN_00896218(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 0089623c  FUN_0089623c =====

undefined * FUN_0089623c(void)

{
  return PTR_RNSVGClipPathComponentName_0099f050;
}


// ===== 00896248  FUN_00896248 =====

undefined * FUN_00896248(void)

{
  return PTR_RNSVGClipPathComponentName_0099f050;
}


// ===== 00896254  FUN_00896254 =====

undefined8 FUN_00896254(void)

{
  return 0x61;
}


// ===== 0089625c  FUN_0089625c =====

void FUN_0089625c(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  RNSVGLayoutableShadowNode *pRVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  
  lVar2 = tpidr_el0;
  lVar6 = *(long *)(lVar2 + 0x28);
  uVar3 = (**(code **)(*param_2 + 0x20))();
  puVar4 = (undefined8 *)operator_new(0x400);
  pRVar1 = (RNSVGLayoutableShadowNode *)(puVar4 + 3);
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_00997c00;
                    /* try { // try from 008962c8 to 008962d7 has its CatchHandler @ 0089633c */
  facebook::react::RNSVGLayoutableShadowNode::RNSVGLayoutableShadowNode
            (pRVar1,param_3,param_4,uVar3);
  lVar5 = *param_2;
  puVar4[3] = &PTR_FUN_00997c50;
                    /* try { // try from 008962f0 to 008962fb has its CatchHandler @ 0089632c */
  (**(code **)(lVar5 + 0x60))(param_2,pRVar1);
  *param_1 = pRVar1;
  param_1[1] = puVar4;
  if (*(long *)(lVar2 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0089636c  FUN_0089636c =====

void FUN_0089636c(undefined8 *param_1,long *param_2,ShadowNode *param_3,ShadowNodeFragment *param_4)

{
  RNSVGLayoutableShadowNode *pRVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  RNSVGLayoutableShadowNode *local_78;
  long *local_70;
  RNSVGLayoutableShadowNode *local_68;
  long *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  plVar3 = (long *)operator_new(0x400);
  pRVar1 = (RNSVGLayoutableShadowNode *)(plVar3 + 3);
  plVar3[1] = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_00997c00;
                    /* try { // try from 008963c4 to 008963d3 has its CatchHandler @ 008964a0 */
  facebook::react::RNSVGLayoutableShadowNode::RNSVGLayoutableShadowNode(pRVar1,param_3,param_4);
  plVar3[3] = (long)&PTR_FUN_00997c50;
  local_68 = pRVar1;
  local_60 = plVar3;
                    /* try { // try from 008963e4 to 008963f3 has its CatchHandler @ 008964b8 */
  facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::
  completeClone(pRVar1,param_3,param_4);
  local_78 = pRVar1;
  local_70 = plVar3;
  FUN_00757d00(1,plVar3 + 1);
                    /* try { // try from 00896404 to 00896413 has its CatchHandler @ 00896490 */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_78);
  plVar3 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar4 = FUN_00757990(0xffffffffffffffff,local_70 + 1), lVar4 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pRVar1 = local_68;
                    /* try { // try from 00896450 to 0089645b has its CatchHandler @ 008964b8 */
  (**(code **)(*param_2 + 0x60))(param_2,local_68);
  *param_1 = pRVar1;
  param_1[1] = local_60;
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008964e0  FUN_008964e0 =====

void FUN_008964e0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x008964f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 008964f4  FUN_008964f4 =====

void FUN_008964f4(undefined8 *param_1,long param_2,PropsParserContext *param_3,long *param_4,
                 RawProps *param_5)

{
  RNSVGClipPathProps *this;
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
  RNSVGClipPathProps *pRVar12;
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
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_26RNSVGClipPathComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_18RNSVGClipPathPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eb80
         & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_26RNSVGClipPathComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_18RNSVGClipPathPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eb80
                                   ), iVar6 != 0)) {
                    /* try { // try from 00896928 to 0089692b has its CatchHandler @ 00896958 */
      FUN_008970b0();
      __cxa_atexit(FUN_00897244,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_26RNSVGClipPathComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_18RNSVGClipPathPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eb78
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_26RNSVGClipPathComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_18RNSVGClipPathPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eb80
                         );
    }
    lVar11 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_26RNSVGClipPathComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_18RNSVGClipPathPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eb78
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_26RNSVGClipPathComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_18RNSVGClipPathPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eb78
    ;
    param_1[1] = lVar11;
    if (lVar11 != 0) {
      FUN_00757d00(1,lVar11 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    pRVar12 = (RNSVGClipPathProps *)*param_4;
    if (pRVar12 == (RNSVGClipPathProps *)0x0) {
      if (((*
            PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_26RNSVGClipPathComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_18RNSVGClipPathPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eb80
           & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_26RNSVGClipPathComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_18RNSVGClipPathPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eb80
                                     ), iVar6 != 0)) {
                    /* try { // try from 008968a8 to 008968ab has its CatchHandler @ 00896970 */
        FUN_008970b0();
        __cxa_atexit(FUN_00897244,
                     PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_26RNSVGClipPathComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_18RNSVGClipPathPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eb78
                     ,&PTR_LOOP_008d5d30);
        __cxa_guard_release(
                           PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_26RNSVGClipPathComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_18RNSVGClipPathPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eb80
                           );
      }
      pRVar12 = *(RNSVGClipPathProps **)
                 PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_26RNSVGClipPathComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_18RNSVGClipPathPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eb78
      ;
    }
    plVar8 = (long *)operator_new(0x990);
    this = (RNSVGClipPathProps *)(plVar8 + 3);
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = (long)&PTR_FUN_00997d68;
                    /* try { // try from 008965d4 to 008965e7 has its CatchHandler @ 008969e4 */
    facebook::react::RNSVGClipPathProps::RNSVGClipPathProps(this,param_3,pRVar12,param_5);
                    /* try { // try from 008965ec to 008965ff has its CatchHandler @ 008969fc */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if ((((uVar7 & 1) == 0) ||
        (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar7 & 1) == 0)) ||
       (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
                enablePropsUpdateReconciliationAndroid(), (uVar7 & 1) == 0)) {
LAB_00896628:
      FUN_00757d00(1,plVar8 + 1);
      if (*param_4 == 0) {
        if (((*
              PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_26RNSVGClipPathComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_18RNSVGClipPathPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eb80
             & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(
                                       PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_26RNSVGClipPathComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_18RNSVGClipPathPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eb80
                                       ), iVar6 != 0)) {
                    /* try { // try from 008968e8 to 008968eb has its CatchHandler @ 0089695c */
          FUN_008970b0();
          __cxa_atexit(FUN_00897244,
                       PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_26RNSVGClipPathComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_18RNSVGClipPathPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eb78
                       ,&PTR_LOOP_008d5d30);
          __cxa_guard_release(
                             PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_26RNSVGClipPathComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_18RNSVGClipPathPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eb80
                             );
        }
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 00896690 to 008966a3 has its CatchHandler @ 00896988 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*(undefined8 *)
                         PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_26RNSVGClipPathComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_18RNSVGClipPathPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eb78
                   ,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
LAB_008966dc:
          (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
        }
        else if (local_b0 != (dynamic *)0x0) {
          lVar11 = 5;
          pdVar10 = local_b0;
          goto LAB_008966dc;
        }
        if (plVar8 != (long *)0x0) goto LAB_008966f0;
      }
      else {
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 00896644 to 00896657 has its CatchHandler @ 008969b0 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*param_4,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
        }
        else {
          if (local_b0 == (dynamic *)0x0) goto LAB_008966f0;
          lVar11 = 5;
          pdVar10 = local_b0;
        }
        (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
LAB_008966f0:
        lVar11 = FUN_00757990(0xffffffffffffffff,plVar8 + 1);
        if (lVar11 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 0089660c to 00896617 has its CatchHandler @ 00896984 */
      pcVar9 = (char *)(**(code **)(*(long *)this + 0x10))(this);
      iVar6 = strcmp(PTR_RNSVGClipPathComponentName_0099f050,pcVar9);
      if (iVar6 != 0) goto LAB_00896628;
      bVar3 = false;
    }
                    /* try { // try from 0089671c to 0089671f has its CatchHandler @ 008969fc */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar7 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 0089672c to 00896747 has its CatchHandler @ 008969ac */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(plVar8 + 7));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00896888 to 00896897 has its CatchHandler @ 008969a4 */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_00896a48;
      }
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (*(int *)(plVar4 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00896868 to 00896877 has its CatchHandler @ 00896a08 */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_00896a48;
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
                    /* try { // try from 008967c8 to 008967d3 has its CatchHandler @ 00896a10 */
        folly::dynamic::dynamic(local_d0,(dynamic *)(plVar4 + 8));
        local_a0 = 0;
                    /* try { // try from 008967d8 to 008967ef has its CatchHandler @ 00896a14 */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (this,param_3,uVar1,pcVar9,local_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 00896800 to 0089680b has its CatchHandler @ 00896a04 */
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
LAB_00896a48:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00896a4c  FUN_00896a4c =====

void FUN_00896a4c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 00896a54  FUN_00896a54 =====

void FUN_00896a54(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 00896a5c  FUN_00896a5c =====

void FUN_00896a5c(undefined8 *param_1,long param_2,long param_3)

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
                    /* try { // try from 00896aa0 to 00896aa7 has its CatchHandler @ 00896ca8 */
  plVar6 = (long *)operator_new(0x68);
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&PTR_FUN_00992a08;
                    /* try { // try from 00896ac0 to 00896acb has its CatchHandler @ 00896c90 */
  local_78 = FUN_008707fc(plVar6 + 3,&local_58,param_2 + 8);
  local_70 = plVar6;
  if ((local_50 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,local_50 + 1), lVar7 == 0)) {
    (**(code **)(*local_50 + 0x10))(local_50);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 00896b00 to 00896b07 has its CatchHandler @ 00896c80 */
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
                    /* try { // try from 00896b54 to 00896b6b has its CatchHandler @ 00896c50 */
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
                    /* try { // try from 00896bc0 to 00896bcb has its CatchHandler @ 00896c30 */
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


// ===== 00896cd0  FUN_00896cd0 =====

void FUN_00896cd0(void)

{
  return;
}


// ===== 00896cd4  FUN_00896cd4 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00896cd4(long param_1)

{
  byte bVar1;
  void *pvVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x948);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x918);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x8e8);
  if ((*(byte *)(param_1 + 0x8d0) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x8e0));
  }
  pbVar4 = *(byte **)(param_1 + 0x8b8);
  if (pbVar4 != (byte *)0x0) {
    pbVar3 = *(byte **)(param_1 + 0x8c0);
    pbVar5 = pbVar4;
    if (pbVar3 != pbVar4) {
      do {
        pbVar5 = pbVar3 + -0x18;
        if ((*pbVar5 & 1) != 0) {
          operator_delete(*(void **)(pbVar3 + -8));
        }
        pbVar3 = pbVar5;
      } while (pbVar5 != pbVar4);
      pbVar5 = *(byte **)(param_1 + 0x8b8);
    }
    *(byte **)(param_1 + 0x8c0) = pbVar4;
    operator_delete(pbVar5);
  }
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x878);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x840);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x808);
  folly::dynamic::folly::dynamic::destroy(param_1 + 2000);
  if ((*(byte *)(param_1 + 0x7b0) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x798);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x7c0));
    bVar1 = *(byte *)(param_1 + 0x798);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x778);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x7a8));
    bVar1 = *(byte *)(param_1 + 0x778);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x760);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x788));
    bVar1 = *(byte *)(param_1 + 0x760);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x748);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x770));
    bVar1 = *(byte *)(param_1 + 0x748);
  }
  if ((bVar1 & 1) == 0) {
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
    pvVar2 = *(void **)(param_1 + 0x700);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x728));
    pvVar2 = *(void **)(param_1 + 0x700);
  }
  if (pvVar2 != (void *)0x0) {
    *(void **)(param_1 + 0x708) = pvVar2;
    operator_delete(pvVar2);
  }
  if ((*(byte *)(param_1 + 0x6e0) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x6f0));
  }
  FUN_0078917c(param_1,PTR_VTT_0099f060 + 8);
  return;
}


// ===== 00896e68  FUN_00896e68 =====

void FUN_00896e68(long param_1)

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


// ===== 00896eb8  FUN_00896eb8 =====

void FUN_00896eb8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00997c00;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00896ec8  FUN_00896ec8 =====

void FUN_00896ec8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00997c00;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00896ef8  FUN_00896ef8 =====

void FUN_00896ef8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00896f00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00896f04  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00896f08  FUN_00896f08 =====

void FUN_00896f08(long *param_1)

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


// ===== 00896fc8  FUN_00896fc8 =====

void FUN_00896fc8(long param_1)

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


// ===== 00897030  FUN_00897030 =====

bool FUN_00897030(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 00897048  FUN_00897048 =====

bool FUN_00897048(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 00897060  FUN_00897060 =====

void FUN_00897060(long param_1)

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


// ===== 008970b0  FUN_008970b0 =====

void FUN_008970b0(void)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x990);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_00997d18;
  memset(__s,0,0x978);
                    /* try { // try from 008970ec to 008970ff has its CatchHandler @ 00897228 */
  FUN_00788b10(__s,PTR_VTT_0099f060 + 0x10);
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
  puVar1 = PTR_vtable_0099f058;
  puVar2[0x111] = 0;
  *(undefined4 *)(puVar2 + 0xd9) = 0;
  *(undefined2 *)((long)puVar2 + 0x6cc) = 0;
  puVar2[3] = puVar1 + 0x20;
  puVar2[0xe0] = 0;
  puVar2[0xdf] = 0;
  puVar2[0xe4] = 0;
  puVar2[0xe3] = 0;
  puVar2[0xe6] = 0;
  puVar2[0xe5] = 0;
  puVar2[0xe8] = 0;
  puVar2[0xe7] = 0;
  puVar2[0xea] = 0;
  puVar2[0xe9] = 0;
  puVar2[0xec] = 0;
  puVar2[0xeb] = 0;
  puVar2[0xee] = 0;
  puVar2[0xed] = 0;
  puVar2[0xf0] = 0;
  puVar2[0xef] = 0;
  puVar2[0xf2] = 0;
  puVar2[0xf1] = 0;
  puVar2[0xf4] = 0;
  puVar2[0xf3] = 0;
  puVar2[0xe1] = 0;
  *(undefined4 *)(puVar2 + 0xe2) = 0x3f800000;
  *(undefined4 *)(puVar2 + 0xfd) = 0;
  puVar2[0xfe] = 0;
  *(undefined8 *)((long)puVar2 + 0x7a5) = 0;
  puVar2[0xf7] = 0;
  puVar2[0xf6] = 0;
  puVar2[0xf9] = 0;
  puVar2[0xf8] = 0;
  puVar2[0xfb] = 0;
  puVar2[0xfa] = 0;
  *(undefined4 *)(puVar2 + 0xfc) = 0;
  puVar2[0x103] = 0x13f800000;
  *(undefined4 *)(puVar2 + 0x104) = 0;
  puVar2[0x105] = 0;
  *(undefined4 *)(puVar2 + 0x10a) = 0x3f800000;
  *(undefined4 *)(puVar2 + 0x10b) = 0;
  puVar2[0x10c] = 0;
  *(undefined4 *)(puVar2 + 0x112) = 0;
  puVar2[0x113] = 0;
  puVar2[0x118] = 0;
  *(undefined4 *)(puVar2 + 0x119) = 0;
  puVar2[0x121] = 0;
  *(undefined4 *)(puVar2 + 0x126) = 0;
  puVar2[0x127] = 0;
  *(undefined4 *)(puVar2 + 300) = 0;
  puVar2[0x12d] = 0;
  *(undefined4 *)(puVar2 + 0x120) = 0;
  puVar2[0x11f] = 0;
  puVar2[0x11e] = 0;
  puVar2[0x11d] = 0;
  puVar2[0x11c] = 0;
  puVar1 = 
  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_26RNSVGClipPathComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_18RNSVGClipPathPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eb78
  ;
  puVar2[0x11b] = 0;
  puVar2[0x11a] = 0;
  *(undefined8 **)puVar1 = __s;
  *(undefined8 **)(puVar1 + 8) = puVar2;
  return;
}


// ===== 00897244  FUN_00897244 =====

void FUN_00897244(long param_1)

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


// ===== 00897294  FUN_00897294 =====

void FUN_00897294(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00997d18;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008972a4  FUN_008972a4 =====

void FUN_008972a4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00997d18;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008972d4  FUN_008972d4 =====

void FUN_008972d4(long param_1)

{
  FUN_00896cd4(param_1 + 0x18);
  return;
}


// ===== 008972dc  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008972e0  FUN_008972e0 =====

void FUN_008972e0(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00997d68;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008972f0  FUN_008972f0 =====

void FUN_008972f0(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00997d68;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00897320  FUN_00897320 =====

void FUN_00897320(long param_1)

{
  FUN_00896cd4(param_1 + 0x18);
  return;
}


// ===== 00897328  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0089732c  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_23RNSVGConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGDefsComponentNameEEEENS0_14RNSVGDefsPropsEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENS8_14default_deleteISB_EEEERKNS0_29ComponentDescriptorParametersE =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_23RNSVGConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGDefsComponentNameEEEENS0_14RNSVGDefsPropsEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENS8_14default_deleteISB_EEEERKNS0_29ComponentDescriptorParametersE
               (undefined8 *param_1,ComponentDescriptorParameters *param_2)

{
  byte bVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  ComponentDescriptor *this;
  long lVar5;
  long *plVar6;
  void *pvVar7;
  undefined4 local_11a0 [2];
  undefined8 *local_1198;
  void *local_1190;
  void *pvStack_1188;
  undefined8 local_1180;
  void *pvStack_1178;
  void *local_1170;
  undefined8 uStack_1168;
  void *local_1160;
  void *pvStack_1158;
  undefined8 uStack_1150;
  undefined8 uStack_1148;
  undefined *local_1140;
  undefined8 uStack_1138;
  undefined8 local_1130;
  undefined8 uStack_1128;
  undefined4 local_1120 [2];
  undefined8 local_1118;
  undefined8 uStack_1110;
  undefined8 local_1108;
  undefined8 uStack_1100;
  undefined4 local_10f8;
  undefined4 local_10f0;
  undefined1 local_10ec;
  undefined8 local_10eb;
  undefined8 local_10e3;
  undefined8 uStack_10db;
  undefined8 local_10d3;
  undefined8 uStack_10cb;
  undefined8 local_10c3;
  undefined8 uStack_10bb;
  undefined8 local_10b3;
  undefined6 uStack_10ab;
  undefined2 uStack_10a5;
  undefined6 uStack_10a3;
  undefined8 uStack_109d;
  undefined4 local_1095;
  undefined8 local_1091;
  undefined1 local_1089;
  undefined1 uStack_1088;
  undefined7 uStack_1087;
  undefined8 uStack_1080;
  undefined8 uStack_1078;
  undefined8 uStack_1070;
  undefined8 local_1068;
  undefined8 uStack_1060;
  undefined8 local_1058;
  undefined8 uStack_1050;
  undefined8 local_1048;
  undefined8 uStack_1040;
  undefined8 local_1038;
  undefined8 uStack_1030;
  undefined8 uStack_1028;
  undefined8 local_1020;
  undefined8 local_1018;
  undefined8 uStack_1010;
  undefined8 local_1008;
  undefined4 uStack_1000;
  undefined4 uStack_ffc;
  undefined4 uStack_ff8;
  undefined4 uStack_ff4;
  undefined4 uStack_ff0;
  undefined4 uStack_fec;
  undefined8 local_fe8;
  undefined8 uStack_fe0;
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
  undefined4 local_f78;
  undefined1 local_f74;
  undefined4 local_f70;
  undefined1 local_f6c;
  undefined4 local_f68;
  undefined1 local_f64;
  undefined4 local_f60;
  undefined1 local_f5c;
  undefined1 local_f58;
  undefined1 local_f54;
  undefined1 local_f48;
  undefined8 local_f40;
  undefined8 uStack_f38;
  undefined8 uStack_f30;
  undefined8 uStack_f28;
  undefined8 local_f20;
  undefined8 uStack_f18;
  undefined8 uStack_f10;
  undefined1 uStack_f08;
  undefined7 local_f07;
  undefined1 uStack_f00;
  undefined8 uStack_eff;
  undefined8 local_ef4;
  undefined8 uStack_eec;
  undefined8 uStack_ee4;
  undefined8 uStack_edc;
  undefined8 local_ed4;
  undefined8 uStack_ecc;
  undefined8 uStack_ec4;
  undefined8 uStack_ebc;
  undefined8 local_eb4;
  undefined8 uStack_eac;
  undefined8 uStack_ea4;
  undefined5 uStack_e9c;
  undefined3 local_e97;
  undefined5 uStack_e94;
  undefined1 local_e8c;
  undefined1 local_e88;
  undefined1 local_e84;
  undefined1 local_e80;
  undefined1 local_e7c;
  undefined1 local_e78;
  undefined1 local_e60;
  undefined8 local_e58;
  undefined8 uStack_e50;
  undefined8 local_e48;
  undefined4 local_e40;
  undefined1 local_e3c;
  undefined4 local_e3b;
  undefined1 local_e37;
  undefined1 local_e36;
  undefined8 local_e30;
  undefined8 uStack_e28;
  undefined8 uStack_e20;
  undefined8 uStack_e18;
  undefined8 local_e10;
  undefined7 uStack_e08;
  undefined4 uStack_e01;
  undefined8 local_dfc;
  undefined1 local_df4;
  undefined1 local_dec;
  undefined1 local_de8;
  undefined1 local_de0;
  undefined1 local_ddc;
  undefined1 local_dd4;
  undefined1 local_dd0;
  undefined1 local_dc8;
  undefined1 local_dc4;
  undefined1 local_dbc;
  undefined1 local_db8;
  undefined1 local_db0;
  undefined1 local_dac;
  undefined1 local_da4;
  undefined1 local_da0;
  undefined1 local_d98;
  undefined1 local_d94;
  undefined1 local_d8c;
  undefined1 local_d88;
  undefined1 local_d80;
  undefined1 local_d7c;
  undefined1 local_d74;
  undefined1 local_d70;
  undefined1 local_d68;
  undefined1 local_d64;
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
  undefined1 local_d18;
  undefined1 local_d14;
  undefined1 local_d10;
  undefined1 local_d0c;
  undefined1 local_d08;
  undefined1 local_d04;
  undefined1 local_d00;
  undefined1 local_cfc;
  undefined8 local_cf8;
  undefined8 uStack_cf0;
  undefined8 local_ce8;
  undefined8 uStack_ce0;
  undefined8 uStack_cd8;
  undefined8 uStack_cd0;
  undefined2 local_cc8;
  undefined8 local_cc4;
  undefined1 local_cbc;
  undefined8 local_cb8;
  undefined8 local_cb0;
  undefined8 uStack_ca8;
  undefined1 local_ca0;
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
  undefined8 uStack_c08;
  undefined8 uStack_c00;
  undefined8 local_bf8;
  undefined8 uStack_bf0;
  undefined8 local_be8;
  undefined8 uStack_be0;
  undefined8 local_bd8;
  undefined8 uStack_bd0;
  undefined8 local_bc8;
  undefined8 uStack_bc0;
  undefined8 local_bb8;
  undefined8 uStack_bb0;
  undefined8 local_ba8;
  undefined6 uStack_ba0;
  undefined2 uStack_b9a;
  undefined6 uStack_b98;
  undefined1 local_b90;
  undefined1 local_b8c;
  undefined1 local_b88;
  undefined8 local_b84;
  undefined8 uStack_b7c;
  undefined1 local_b74;
  undefined8 local_b70;
  undefined2 local_b68;
  undefined1 local_b66;
  undefined4 local_b64;
  undefined1 local_b60;
  undefined1 local_b00;
  undefined1 local_af8;
  undefined1 local_a98;
  undefined4 local_a90;
  undefined2 local_a8c;
  undefined1 local_a88;
  undefined1 local_a84;
  undefined1 local_a80;
  undefined1 local_a7c;
  undefined1 local_a78;
  undefined1 local_a74;
  undefined1 local_a70;
  undefined1 local_a6c;
  undefined1 local_a68;
  undefined1 local_a64;
  undefined8 local_a60;
  undefined8 uStack_a58;
  undefined8 local_a50;
  undefined4 local_a48;
  undefined8 local_a40;
  undefined8 uStack_a38;
  undefined8 local_a30;
  undefined8 uStack_a28;
  undefined8 local_a20;
  undefined8 uStack_a18;
  undefined8 local_a10;
  undefined8 uStack_a08;
  undefined8 local_a00;
  undefined8 uStack_9f8;
  undefined8 local_9f0;
  undefined8 uStack_9e8;
  undefined8 local_9e0;
  undefined8 uStack_9d8;
  undefined8 local_9d0;
  undefined8 uStack_9c8;
  undefined8 local_9c0;
  undefined5 uStack_9b8;
  undefined3 uStack_9b3;
  undefined5 uStack_9b0;
  undefined8 local_9a8;
  undefined8 uStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined8 local_988;
  undefined8 uStack_980;
  undefined4 local_978 [2];
  undefined8 local_970;
  undefined8 uStack_968;
  undefined8 local_960;
  undefined8 local_958;
  undefined8 uStack_950;
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
  pvStack_1178 = (void *)0x0;
  local_1180 = 0;
  uStack_1168 = 0;
  local_1170 = (void *)0x0;
  pvStack_1158 = (void *)0x0;
  local_1160 = (void *)0x0;
  uStack_1148 = 0;
  uStack_1150 = 0;
  pvStack_1188 = (void *)0x0;
  local_1190 = (void *)0x0;
                    /* try { // try from 00897380 to 0089738b has its CatchHandler @ 008979ec */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_1190);
  local_f8 = 0;
  *(undefined ***)this = &PTR_FUN_00997db8;
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
                    /* try { // try from 008973fc to 00897407 has its CatchHandler @ 00897a1c */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1b0);
  local_100 = CONCAT44(local_100._4_4_,0x3f800000);
  local_11a0[0] = 0xffffffff;
  uStack_108 = 0;
  local_110 = (void *)0x0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_1198 = &local_1b0;
  facebook::react::RawProps::facebook::react::RawProps::parse(&local_f8,this + 0x38);
  memset(local_1120,0,0x7a8);
  local_978[0] = 5;
  local_960 = 0;
  local_1140 = *(undefined **)(PTR_VTT_0099f078 + 0x20);
  local_1120[0] = 5;
  uStack_1128 = 0;
  local_1130 = 0;
  local_958 = 0;
  uStack_1138 = 0;
  uStack_950 = 0x3f800000;
  uStack_968 = 0;
  local_970 = 0;
  uStack_1110 = 0;
  local_1118 = 0;
  uStack_1100 = 0;
  local_1108 = 0;
  local_10f8 = 0x3f800000;
  folly::dynamic::folly::dynamic::destroy(local_978);
  local_10ec = 0;
  local_1091 = 0;
  uStack_bb0 = _UNK_00488920;
  local_bb8 = _DAT_00488918;
  local_10eb = _s__00375408;
  uStack_ca8 = _UNK_00371598;
  local_cb0 = _DAT_00371590;
  uStack_bc0 = _UNK_00488910;
  local_bc8 = _DAT_00488908;
  local_fd4 = 0;
  uStack_bd0 = _UNK_00488900;
  local_bd8 = _DAT_004888f8;
  uStack_be0 = _UNK_004888f0;
  local_be8 = _DAT_004888e8;
  uStack_b98 = 0;
  local_fcc = 0;
  uStack_1000 = 0;
  local_1008 = 0;
  uStack_fec = 0;
  uStack_1010 = 0;
  local_1018 = 0;
  uStack_ba0 = 0;
  uStack_b9a = 0;
  local_ba8 = 0;
  local_10f0 = 0x10410710;
  local_1095 = 0x40004;
  uStack_ff4 = 0;
  uStack_ff0 = 0;
  uStack_ffc = 0;
  uStack_ff8 = 0;
  uStack_fe0 = 0;
  local_fe8 = 0;
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
  local_f78 = 0x7fc00000;
  local_f70 = 0x7fc00000;
  local_f68 = 0x7fc00000;
  local_f60 = 0x7fc00000;
  uStack_eff = 0;
  uStack_f00 = 0;
  uStack_eec = 0;
  local_ef4 = 0;
  uStack_edc = 0;
  uStack_ee4 = 0;
  uStack_ecc = 0;
  local_ed4 = 0;
  uStack_ebc = 0;
  uStack_ec4 = 0;
  uStack_eac = 0;
  local_eb4 = 0;
  uStack_e9c = 0;
  uStack_ea4 = 0;
  local_e97 = 0;
  uStack_e94 = 0;
  local_e3c = 1;
  local_e3b = 0;
  local_e36 = 0x23;
  local_dfc = 0x3f800000;
  uStack_ce0 = 0;
  local_ce8 = 0;
  uStack_cd0 = 0;
  uStack_cd8 = 0;
  uStack_cf0 = 0;
  local_cf8 = 0;
  local_cc4 = 0;
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
  uStack_c00 = 0;
  uStack_c08 = 0;
  uStack_bf0 = 0;
  local_bf8 = 0;
  uStack_1087 = 0;
  uStack_10db = 0;
  local_10e3 = 0;
  uStack_10cb = 0;
  local_10d3 = 0;
  uStack_10bb = 0;
  local_10c3 = 0;
  uStack_10ab = 0;
  local_10b3 = 0;
  uStack_109d = 0;
  uStack_10a5 = 0;
  uStack_10a3 = 0;
  local_1089 = 0;
  uStack_1088 = 0;
  uStack_1078 = 0;
  uStack_1080 = 0;
  local_1068 = 0;
  uStack_1070 = 0;
  local_1058 = 0;
  uStack_1060 = 0;
  local_1048 = 0;
  uStack_1050 = 0;
  local_1038 = 0;
  uStack_1040 = 0;
  uStack_1028 = 0;
  uStack_1030 = 0;
  local_1020 = 0;
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
  local_f74 = 0;
  local_f6c = 0;
  local_f64 = 0;
  local_f5c = 0;
  local_f58 = 0;
  local_f54 = 0;
  local_f48 = 0;
  local_e8c = 0;
  local_e88 = 0;
  local_e84 = 0;
  local_e80 = 0;
  local_e7c = 0;
  local_e78 = 0;
  local_e60 = 0;
  uStack_f38 = 0;
  local_f40 = 0;
  uStack_f28 = 0;
  uStack_f30 = 0;
  uStack_f18 = 0;
  local_f20 = 0;
  uStack_f08 = 0;
  local_f07 = 0;
  uStack_f10 = 0;
  uStack_e50 = 0;
  local_e58 = 0;
  local_e48 = 0;
  local_e40 = 0;
  local_e37 = 0;
  uStack_e28 = 0;
  local_e30 = 0;
  uStack_e18 = 0;
  uStack_e20 = 0;
  uStack_e08 = 0;
  uStack_e01 = 0;
  local_e10 = 0;
  local_df4 = 0;
  local_dec = 0;
  local_de8 = 0;
  local_de0 = 0;
  local_ddc = 0;
  local_dd4 = 0;
  local_dd0 = 0;
  local_dc8 = 0;
  local_dc4 = 0;
  local_dbc = 0;
  local_db8 = 0;
  local_db0 = 0;
  local_dac = 0;
  local_da4 = 0;
  local_da0 = 0;
  local_d98 = 0;
  local_d94 = 0;
  local_d8c = 0;
  local_d88 = 0;
  local_d80 = 0;
  local_d7c = 0;
  local_d74 = 0;
  local_d70 = 0;
  local_d68 = 0;
  local_d64 = 0;
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
  local_d18 = 0;
  local_d14 = 0;
  local_d10 = 0;
  local_d0c = 0;
  local_d08 = 0;
  local_d04 = 0;
  local_d00 = 0;
  local_cfc = 0;
  local_cb8 = 0;
  local_cc8 = 0;
  local_cbc = 0;
  local_ca0 = 0;
  local_b90 = 0;
  local_b8c = 0;
  local_b88 = 0;
  local_b70 = 0;
  uStack_b7c = 0;
  local_b84 = 0;
  local_b74 = 0;
  local_b68 = 0x101;
  local_b66 = 0;
  local_b64 = 0;
  local_b60 = 0;
  local_b00 = 0;
  local_af8 = 0;
  local_a98 = 0;
  local_a88 = 0;
  local_a84 = 0;
  local_a80 = 0;
  local_a7c = 0;
  local_a78 = 0;
  local_a74 = 0;
  local_a70 = 0;
  local_a6c = 0;
  local_a68 = 0;
  local_a64 = 0;
  local_a8c = 0;
  local_a90 = 0;
  local_1140 = PTR_vtable_0099f070 + 0x20;
  local_a50 = 0;
  uStack_9b0 = 0;
  uStack_a58 = 0;
  local_a60 = 0;
  local_a48 = 0x3f800000;
  uStack_a38 = 0;
  local_a40 = 0;
  uStack_a28 = 0;
  local_a30 = 0;
  uStack_a18 = 0;
  local_a20 = 0;
  uStack_a08 = 0;
  local_a10 = 0;
  uStack_9f8 = 0;
  local_a00 = 0;
  uStack_9e8 = 0;
  local_9f0 = 0;
  uStack_9d8 = 0;
  local_9e0 = 0;
  uStack_9c8 = 0;
  local_9d0 = 0;
  uStack_9b8 = 0;
  uStack_9b3 = 0;
  local_9c0 = 0;
  uStack_9a0 = 0;
  local_9a8 = 0;
  uStack_990 = 0;
  uStack_998 = 0;
  uStack_980 = 0;
  local_988 = 0;
                    /* try { // try from 00897834 to 00897847 has its CatchHandler @ 00897a1c */
  facebook::react::RNSVGDefsProps::RNSVGDefsProps
            ((RNSVGDefsProps *)local_978,(PropsParserContext *)local_11a0,
             (RNSVGDefsProps *)&local_1140,(RawProps *)&local_f8);
  FUN_008984e0(local_978);
  FUN_008984e0(&local_1140);
  facebook::react::RawPropsParser::facebook::react::RawPropsParser::postPrepare(this + 0x38);
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
  pvVar7 = pvStack_80;
  pvVar3 = local_78;
  if (pvStack_80 != (void *)0x0) {
    while (pvVar3 != pvVar7) {
      if (*(uint *)((long)pvVar3 + -8) != 0xffffffff) {
                    /* try { // try from 00897944 to 0089794f has its CatchHandler @ 00897a20 */
        (*(code *)(&PTR_FUN_0098f088)[*(uint *)((long)pvVar3 + -8)])
                  (&local_1140,(void *)((long)pvVar3 + -0x38));
      }
      *(undefined4 *)((long)pvVar3 + -8) = 0xffffffff;
      pvVar3 = (void *)((long)pvVar3 + -0x38);
    }
    local_78 = pvVar7;
    operator_delete(pvStack_80);
  }
  if (local_98 != (void *)0x0) {
    pvStack_90 = local_98;
    operator_delete(local_98);
  }
  folly::dynamic::folly::dynamic::destroy(local_d0);
  facebook::jsi::Value::~Value((Value *)local_e0);
  if (local_1160 != (void *)0x0) {
    pvStack_1158 = local_1160;
    operator_delete(local_1160);
  }
  if (pvStack_1178 != (void *)0x0) {
    local_1170 = pvStack_1178;
    operator_delete(pvStack_1178);
  }
  if (local_1190 != (void *)0x0) {
    pvStack_1188 = local_1190;
    operator_delete(local_1190);
  }
  *param_1 = this;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00897a24  FUN_00897a24 =====

void FUN_00897a24(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 00897a48  FUN_00897a48 =====

undefined * FUN_00897a48(void)

{
  return PTR_RNSVGDefsComponentName_0099f068;
}


// ===== 00897a54  FUN_00897a54 =====

undefined * FUN_00897a54(void)

{
  return PTR_RNSVGDefsComponentName_0099f068;
}


// ===== 00897a60  FUN_00897a60 =====

undefined8 FUN_00897a60(void)

{
  return 0x61;
}


// ===== 00897a68  FUN_00897a68 =====

void FUN_00897a68(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  RNSVGLayoutableShadowNode *pRVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  
  lVar2 = tpidr_el0;
  lVar6 = *(long *)(lVar2 + 0x28);
  uVar3 = (**(code **)(*param_2 + 0x20))();
  puVar4 = (undefined8 *)operator_new(0x400);
  pRVar1 = (RNSVGLayoutableShadowNode *)(puVar4 + 3);
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_00997e48;
                    /* try { // try from 00897ad4 to 00897ae3 has its CatchHandler @ 00897b48 */
  facebook::react::RNSVGLayoutableShadowNode::RNSVGLayoutableShadowNode
            (pRVar1,param_3,param_4,uVar3);
  lVar5 = *param_2;
  puVar4[3] = &PTR_FUN_00997e98;
                    /* try { // try from 00897afc to 00897b07 has its CatchHandler @ 00897b38 */
  (**(code **)(lVar5 + 0x60))(param_2,pRVar1);
  *param_1 = pRVar1;
  param_1[1] = puVar4;
  if (*(long *)(lVar2 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00897b78  FUN_00897b78 =====

void FUN_00897b78(undefined8 *param_1,long *param_2,ShadowNode *param_3,ShadowNodeFragment *param_4)

{
  RNSVGLayoutableShadowNode *pRVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  RNSVGLayoutableShadowNode *local_78;
  long *local_70;
  RNSVGLayoutableShadowNode *local_68;
  long *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  plVar3 = (long *)operator_new(0x400);
  pRVar1 = (RNSVGLayoutableShadowNode *)(plVar3 + 3);
  plVar3[1] = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_00997e48;
                    /* try { // try from 00897bd0 to 00897bdf has its CatchHandler @ 00897cac */
  facebook::react::RNSVGLayoutableShadowNode::RNSVGLayoutableShadowNode(pRVar1,param_3,param_4);
  plVar3[3] = (long)&PTR_FUN_00997e98;
  local_68 = pRVar1;
  local_60 = plVar3;
                    /* try { // try from 00897bf0 to 00897bff has its CatchHandler @ 00897cc4 */
  facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::
  completeClone(pRVar1,param_3,param_4);
  local_78 = pRVar1;
  local_70 = plVar3;
  FUN_00757d00(1,plVar3 + 1);
                    /* try { // try from 00897c10 to 00897c1f has its CatchHandler @ 00897c9c */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_78);
  plVar3 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar4 = FUN_00757990(0xffffffffffffffff,local_70 + 1), lVar4 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pRVar1 = local_68;
                    /* try { // try from 00897c5c to 00897c67 has its CatchHandler @ 00897cc4 */
  (**(code **)(*param_2 + 0x60))(param_2,local_68);
  *param_1 = pRVar1;
  param_1[1] = local_60;
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00897cec  FUN_00897cec =====

void FUN_00897cec(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00897cfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 00897d00  FUN_00897d00 =====

void FUN_00897d00(undefined8 *param_1,long param_2,PropsParserContext *param_3,long *param_4,
                 RawProps *param_5)

{
  RNSVGDefsProps *this;
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
  RNSVGDefsProps *pRVar12;
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
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGDefsComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGDefsPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eb90
         & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGDefsComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGDefsPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eb90
                                   ), iVar6 != 0)) {
                    /* try { // try from 00898134 to 00898137 has its CatchHandler @ 00898164 */
      FUN_00898870();
      __cxa_atexit(FUN_00898820,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGDefsComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGDefsPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eb88
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGDefsComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGDefsPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eb90
                         );
    }
    lVar11 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGDefsComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGDefsPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eb88
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGDefsComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGDefsPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eb88
    ;
    param_1[1] = lVar11;
    if (lVar11 != 0) {
      FUN_00757d00(1,lVar11 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    pRVar12 = (RNSVGDefsProps *)*param_4;
    if (pRVar12 == (RNSVGDefsProps *)0x0) {
      if (((*
            PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGDefsComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGDefsPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eb90
           & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGDefsComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGDefsPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eb90
                                     ), iVar6 != 0)) {
                    /* try { // try from 008980b4 to 008980b7 has its CatchHandler @ 0089817c */
        FUN_00898870();
        __cxa_atexit(FUN_00898820,
                     PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGDefsComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGDefsPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eb88
                     ,&PTR_LOOP_008d5d30);
        __cxa_guard_release(
                           PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGDefsComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGDefsPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eb90
                           );
      }
      pRVar12 = *(RNSVGDefsProps **)
                 PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGDefsComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGDefsPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eb88
      ;
    }
    plVar8 = (long *)operator_new(0x7e0);
    this = (RNSVGDefsProps *)(plVar8 + 3);
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = (long)&PTR_FUN_00997fb0;
                    /* try { // try from 00897de0 to 00897df3 has its CatchHandler @ 008981f0 */
    facebook::react::RNSVGDefsProps::RNSVGDefsProps(this,param_3,pRVar12,param_5);
                    /* try { // try from 00897df8 to 00897e0b has its CatchHandler @ 00898208 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if ((((uVar7 & 1) == 0) ||
        (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar7 & 1) == 0)) ||
       (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
                enablePropsUpdateReconciliationAndroid(), (uVar7 & 1) == 0)) {
LAB_00897e34:
      FUN_00757d00(1,plVar8 + 1);
      if (*param_4 == 0) {
        if (((*
              PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGDefsComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGDefsPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eb90
             & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(
                                       PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGDefsComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGDefsPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eb90
                                       ), iVar6 != 0)) {
                    /* try { // try from 008980f4 to 008980f7 has its CatchHandler @ 00898168 */
          FUN_00898870();
          __cxa_atexit(FUN_00898820,
                       PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGDefsComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGDefsPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eb88
                       ,&PTR_LOOP_008d5d30);
          __cxa_guard_release(
                             PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGDefsComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGDefsPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eb90
                             );
        }
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 00897e9c to 00897eaf has its CatchHandler @ 00898194 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*(undefined8 *)
                         PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGDefsComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGDefsPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eb88
                   ,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
LAB_00897ee8:
          (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
        }
        else if (local_b0 != (dynamic *)0x0) {
          lVar11 = 5;
          pdVar10 = local_b0;
          goto LAB_00897ee8;
        }
        if (plVar8 != (long *)0x0) goto LAB_00897efc;
      }
      else {
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 00897e50 to 00897e63 has its CatchHandler @ 008981bc */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*param_4,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
        }
        else {
          if (local_b0 == (dynamic *)0x0) goto LAB_00897efc;
          lVar11 = 5;
          pdVar10 = local_b0;
        }
        (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
LAB_00897efc:
        lVar11 = FUN_00757990(0xffffffffffffffff,plVar8 + 1);
        if (lVar11 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 00897e18 to 00897e23 has its CatchHandler @ 00898190 */
      pcVar9 = (char *)(**(code **)(*(long *)this + 0x10))(this);
      iVar6 = strcmp(PTR_RNSVGDefsComponentName_0099f068,pcVar9);
      if (iVar6 != 0) goto LAB_00897e34;
      bVar3 = false;
    }
                    /* try { // try from 00897f28 to 00897f2b has its CatchHandler @ 00898208 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar7 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 00897f38 to 00897f53 has its CatchHandler @ 008981b8 */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(plVar8 + 7));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00898094 to 008980a3 has its CatchHandler @ 008981b0 */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_00898254;
      }
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (*(int *)(plVar4 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00898074 to 00898083 has its CatchHandler @ 00898214 */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_00898254;
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
                    /* try { // try from 00897fd4 to 00897fdf has its CatchHandler @ 0089821c */
        folly::dynamic::dynamic(local_d0,(dynamic *)(plVar4 + 8));
        local_a0 = 0;
                    /* try { // try from 00897fe4 to 00897ffb has its CatchHandler @ 00898220 */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (this,param_3,uVar1,pcVar9,local_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 0089800c to 00898017 has its CatchHandler @ 00898210 */
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
LAB_00898254:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00898258  FUN_00898258 =====

void FUN_00898258(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 00898260  FUN_00898260 =====

void FUN_00898260(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 00898268  FUN_00898268 =====

void FUN_00898268(undefined8 *param_1,long param_2,long param_3)

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
                    /* try { // try from 008982ac to 008982b3 has its CatchHandler @ 008984b4 */
  plVar6 = (long *)operator_new(0x68);
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&PTR_FUN_00992a08;
                    /* try { // try from 008982cc to 008982d7 has its CatchHandler @ 0089849c */
  local_78 = FUN_008707fc(plVar6 + 3,&local_58,param_2 + 8);
  local_70 = plVar6;
  if ((local_50 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,local_50 + 1), lVar7 == 0)) {
    (**(code **)(*local_50 + 0x10))(local_50);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 0089830c to 00898313 has its CatchHandler @ 0089848c */
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
                    /* try { // try from 00898360 to 00898377 has its CatchHandler @ 0089845c */
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
                    /* try { // try from 008983cc to 008983d7 has its CatchHandler @ 0089843c */
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


// ===== 008984dc  FUN_008984dc =====

void FUN_008984dc(void)

{
  return;
}


// ===== 008984e0  FUN_008984e0 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_008984e0(long param_1)

{
  byte bVar1;
  void *pvVar2;
  
  if ((*(byte *)(param_1 + 0x7b0) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x798);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x7c0));
    bVar1 = *(byte *)(param_1 + 0x798);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x778);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x7a8));
    bVar1 = *(byte *)(param_1 + 0x778);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x760);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x788));
    bVar1 = *(byte *)(param_1 + 0x760);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x748);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x770));
    bVar1 = *(byte *)(param_1 + 0x748);
  }
  if ((bVar1 & 1) == 0) {
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
    pvVar2 = *(void **)(param_1 + 0x700);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x728));
    pvVar2 = *(void **)(param_1 + 0x700);
  }
  if (pvVar2 != (void *)0x0) {
    *(void **)(param_1 + 0x708) = pvVar2;
    operator_delete(pvVar2);
  }
  if ((*(byte *)(param_1 + 0x6e0) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x6f0));
  }
  FUN_0078917c(param_1,PTR_VTT_0099f078 + 8);
  return;
}


// ===== 008985d8  FUN_008985d8 =====

void FUN_008985d8(long param_1)

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


// ===== 00898628  FUN_00898628 =====

void FUN_00898628(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00997e48;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00898638  FUN_00898638 =====

void FUN_00898638(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00997e48;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00898668  FUN_00898668 =====

void FUN_00898668(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00898670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00898674  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00898678  FUN_00898678 =====

void FUN_00898678(long *param_1)

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


// ===== 00898738  FUN_00898738 =====

void FUN_00898738(long param_1)

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


// ===== 008987a0  FUN_008987a0 =====

bool FUN_008987a0(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 008987b8  FUN_008987b8 =====

bool FUN_008987b8(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 008987d0  FUN_008987d0 =====

void FUN_008987d0(long param_1)

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


// ===== 00898820  FUN_00898820 =====

void FUN_00898820(long param_1)

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


// ===== 00898870  FUN_00898870 =====

void FUN_00898870(void)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x7e0);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_00997f60;
  memset(__s,0,0x7c8);
                    /* try { // try from 008988ac to 008988bf has its CatchHandler @ 0089897c */
  FUN_00788b10(__s,PTR_VTT_0099f078 + 0x10);
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
  puVar1 = PTR_vtable_0099f070;
  *(undefined4 *)(puVar2 + 0xd9) = 0;
  *(undefined2 *)((long)puVar2 + 0x6cc) = 0;
  puVar2[0xe1] = 0;
  puVar2[3] = puVar1 + 0x20;
  *(undefined4 *)(puVar2 + 0xe2) = 0x3f800000;
  puVar2[0xe0] = 0;
  puVar2[0xdf] = 0;
  puVar2[0xe4] = 0;
  puVar2[0xe3] = 0;
  puVar2[0xe6] = 0;
  puVar2[0xe5] = 0;
  puVar2[0xe8] = 0;
  puVar2[0xe7] = 0;
  puVar2[0xea] = 0;
  puVar2[0xe9] = 0;
  puVar2[0xec] = 0;
  puVar2[0xeb] = 0;
  puVar2[0xee] = 0;
  puVar2[0xed] = 0;
  puVar2[0xf0] = 0;
  puVar2[0xef] = 0;
  puVar2[0xf2] = 0;
  puVar2[0xf1] = 0;
  puVar2[0xf4] = 0;
  puVar2[0xf3] = 0;
  *(undefined8 *)((long)puVar2 + 0x7a5) = 0;
  puVar2[0xf7] = 0;
  puVar2[0xf6] = 0;
  puVar2[0xf9] = 0;
  puVar2[0xf8] = 0;
  puVar1 = 
  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGDefsComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGDefsPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eb88
  ;
  puVar2[0xfb] = 0;
  puVar2[0xfa] = 0;
  *(undefined8 **)puVar1 = __s;
  *(undefined8 **)(puVar1 + 8) = puVar2;
  return;
}


// ===== 00898998  FUN_00898998 =====

void FUN_00898998(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00997f60;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008989a8  FUN_008989a8 =====

void FUN_008989a8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00997f60;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008989d8  FUN_008989d8 =====

void FUN_008989d8(long param_1)

{
  FUN_008984e0(param_1 + 0x18);
  return;
}


// ===== 008989e0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008989e4  FUN_008989e4 =====

void FUN_008989e4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00997fb0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008989f4  FUN_008989f4 =====

void FUN_008989f4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00997fb0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00898a24  FUN_00898a24 =====

void FUN_00898a24(long param_1)

{
  FUN_008984e0(param_1 + 0x18);
  return;
}


// ===== 00898a2c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00898a30  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_23RNSVGConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGFeBlendComponentNameEEEENS0_17RNSVGFeBlendPropsEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENS8_14default_deleteISB_EEEERKNS0_29ComponentDescriptorParametersE =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_23RNSVGConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGFeBlendComponentNameEEEENS0_17RNSVGFeBlendPropsEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENS8_14default_deleteISB_EEEERKNS0_29ComponentDescriptorParametersE
               (undefined8 *param_1,ComponentDescriptorParameters *param_2)

{
  byte bVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  ComponentDescriptor *this;
  long lVar5;
  long *plVar6;
  void *pvVar7;
  undefined4 local_11f0 [2];
  undefined8 *local_11e8;
  void *local_11e0;
  void *pvStack_11d8;
  undefined8 local_11d0;
  void *pvStack_11c8;
  void *local_11c0;
  undefined8 uStack_11b8;
  void *local_11b0;
  void *pvStack_11a8;
  undefined8 uStack_11a0;
  undefined8 uStack_1198;
  undefined *local_1190;
  undefined8 uStack_1188;
  undefined8 local_1180;
  undefined8 uStack_1178;
  undefined4 local_1170 [2];
  undefined8 local_1168;
  undefined8 uStack_1160;
  undefined8 local_1158;
  undefined8 uStack_1150;
  undefined4 local_1148;
  undefined4 local_1140;
  undefined1 local_113c;
  undefined8 local_113b;
  undefined8 local_1133;
  undefined8 uStack_112b;
  undefined8 local_1123;
  undefined8 uStack_111b;
  undefined8 local_1113;
  undefined8 uStack_110b;
  undefined8 local_1103;
  undefined6 uStack_10fb;
  undefined2 uStack_10f5;
  undefined6 uStack_10f3;
  undefined8 uStack_10ed;
  undefined4 local_10e5;
  undefined8 local_10e1;
  undefined1 local_10d9;
  undefined1 uStack_10d8;
  undefined7 uStack_10d7;
  undefined8 uStack_10d0;
  undefined8 uStack_10c8;
  undefined8 uStack_10c0;
  undefined8 local_10b8;
  undefined8 uStack_10b0;
  undefined8 local_10a8;
  undefined8 uStack_10a0;
  undefined8 local_1098;
  undefined8 uStack_1090;
  undefined8 local_1088;
  undefined8 uStack_1080;
  undefined8 uStack_1078;
  undefined8 local_1070;
  undefined8 local_1068;
  undefined8 uStack_1060;
  undefined8 local_1058;
  undefined4 uStack_1050;
  undefined4 uStack_104c;
  undefined4 uStack_1048;
  undefined4 uStack_1044;
  undefined4 uStack_1040;
  undefined4 uStack_103c;
  undefined8 local_1038;
  undefined8 uStack_1030;
  undefined4 local_1028;
  undefined1 local_1024;
  undefined4 local_1020;
  undefined1 local_101c;
  undefined4 local_1018;
  undefined1 local_1014;
  undefined4 local_1010;
  undefined1 local_100c;
  undefined4 local_1008;
  undefined1 local_1004;
  undefined4 local_1000;
  undefined1 local_ffc;
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
  undefined1 local_fa8;
  undefined1 local_fa4;
  undefined1 local_f98;
  undefined8 local_f90;
  undefined8 uStack_f88;
  undefined8 uStack_f80;
  undefined8 uStack_f78;
  undefined8 local_f70;
  undefined8 uStack_f68;
  undefined8 uStack_f60;
  undefined1 uStack_f58;
  undefined7 local_f57;
  undefined1 uStack_f50;
  undefined8 uStack_f4f;
  undefined8 local_f44;
  undefined8 uStack_f3c;
  undefined8 uStack_f34;
  undefined8 uStack_f2c;
  undefined8 local_f24;
  undefined8 uStack_f1c;
  undefined8 uStack_f14;
  undefined8 uStack_f0c;
  undefined8 local_f04;
  undefined8 uStack_efc;
  undefined8 uStack_ef4;
  undefined5 uStack_eec;
  undefined3 local_ee7;
  undefined5 uStack_ee4;
  undefined1 local_edc;
  undefined1 local_ed8;
  undefined1 local_ed4;
  undefined1 local_ed0;
  undefined1 local_ecc;
  undefined1 local_ec8;
  undefined1 local_eb0;
  undefined8 local_ea8;
  undefined8 uStack_ea0;
  undefined8 local_e98;
  undefined4 local_e90;
  undefined1 local_e8c;
  undefined4 local_e8b;
  undefined1 local_e87;
  undefined1 local_e86;
  undefined8 local_e80;
  undefined8 uStack_e78;
  undefined8 uStack_e70;
  undefined8 uStack_e68;
  undefined8 local_e60;
  undefined7 uStack_e58;
  undefined4 uStack_e51;
  undefined8 local_e4c;
  undefined1 local_e44;
  undefined1 local_e3c;
  undefined1 local_e38;
  undefined1 local_e30;
  undefined1 local_e2c;
  undefined1 local_e24;
  undefined1 local_e20;
  undefined1 local_e18;
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
  undefined1 local_da4;
  undefined1 local_da0;
  undefined1 local_d9c;
  undefined1 local_d98;
  undefined1 local_d94;
  undefined1 local_d90;
  undefined1 local_d8c;
  undefined1 local_d88;
  undefined1 local_d84;
  undefined1 local_d80;
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
  undefined8 local_d48;
  undefined8 uStack_d40;
  undefined8 local_d38;
  undefined8 uStack_d30;
  undefined8 uStack_d28;
  undefined8 uStack_d20;
  undefined2 local_d18;
  undefined8 local_d14;
  undefined1 local_d0c;
  undefined8 local_d08;
  undefined8 local_d00;
  undefined8 uStack_cf8;
  undefined1 local_cf0;
  undefined8 local_ce8;
  undefined8 uStack_ce0;
  undefined8 uStack_cd8;
  undefined8 uStack_cd0;
  undefined8 local_cc8;
  undefined8 uStack_cc0;
  undefined8 uStack_cb8;
  undefined8 uStack_cb0;
  undefined8 local_ca8;
  undefined8 uStack_ca0;
  undefined8 uStack_c98;
  undefined8 uStack_c90;
  undefined8 local_c88;
  undefined8 uStack_c80;
  undefined8 uStack_c78;
  undefined8 uStack_c70;
  undefined8 local_c68;
  undefined8 uStack_c60;
  undefined8 uStack_c58;
  undefined8 uStack_c50;
  undefined8 local_c48;
  undefined8 uStack_c40;
  undefined8 local_c38;
  undefined8 uStack_c30;
  undefined8 local_c28;
  undefined8 uStack_c20;
  undefined8 local_c18;
  undefined8 uStack_c10;
  undefined8 local_c08;
  undefined8 uStack_c00;
  undefined8 local_bf8;
  undefined6 uStack_bf0;
  undefined2 uStack_bea;
  undefined6 uStack_be8;
  undefined1 local_be0;
  undefined1 local_bdc;
  undefined1 local_bd8;
  undefined8 local_bd4;
  undefined8 uStack_bcc;
  undefined1 local_bc4;
  undefined8 local_bc0;
  undefined2 local_bb8;
  undefined1 local_bb6;
  undefined4 local_bb4;
  undefined1 local_bb0;
  undefined1 local_b50;
  undefined1 local_b48;
  undefined1 local_ae8;
  undefined4 local_ae0;
  undefined2 local_adc;
  undefined1 local_ad8;
  undefined1 local_ad4;
  undefined1 local_ad0;
  undefined1 local_acc;
  undefined1 local_ac8;
  undefined1 local_ac4;
  undefined1 local_ac0;
  undefined1 local_abc;
  undefined1 local_ab8;
  undefined1 local_ab4;
  undefined4 local_ab0;
  undefined8 local_aa8;
  undefined4 local_a80;
  undefined8 local_a78;
  undefined4 local_a50;
  undefined8 local_a48;
  undefined4 local_a20;
  undefined8 local_a18;
  undefined8 local_9f0;
  undefined8 uStack_9e8;
  undefined8 local_9e0;
  undefined8 uStack_9d8;
  undefined8 local_9d0;
  undefined8 uStack_9c8;
  undefined8 local_9c0;
  undefined8 uStack_9b8;
  undefined8 local_9b0;
  undefined4 local_9a8;
  undefined4 local_9a0 [2];
  undefined8 local_998;
  undefined8 uStack_990;
  undefined8 local_988;
  undefined8 local_980;
  undefined8 uStack_978;
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
  pvStack_11c8 = (void *)0x0;
  local_11d0 = 0;
  uStack_11b8 = 0;
  local_11c0 = (void *)0x0;
  pvStack_11a8 = (void *)0x0;
  local_11b0 = (void *)0x0;
  uStack_1198 = 0;
  uStack_11a0 = 0;
  pvStack_11d8 = (void *)0x0;
  local_11e0 = (void *)0x0;
                    /* try { // try from 00898a84 to 00898a8f has its CatchHandler @ 008990f0 */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_11e0);
  local_f8 = 0;
  *(undefined ***)this = &PTR_FUN_00998000;
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
                    /* try { // try from 00898afc to 00898b0f has its CatchHandler @ 00899120 */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1b0);
  local_100 = CONCAT44(local_100._4_4_,0x3f800000);
  local_11f0[0] = 0xffffffff;
  uStack_108 = 0;
  local_110 = (void *)0x0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_11e8 = &local_1b0;
  facebook::react::RawProps::facebook::react::RawProps::parse(&local_f8,this + 0x38);
  memset(local_1170,0,2000);
  local_9a0[0] = 5;
  local_988 = 0;
  local_1190 = *(undefined **)(PTR_VTT_0099f090 + 0x20);
  local_1170[0] = 5;
  uStack_1178 = 0;
  local_1180 = 0;
  uStack_1188 = 0;
  local_980 = 0;
  uStack_978 = 0x3f800000;
  uStack_990 = 0;
  local_998 = 0;
  uStack_1160 = 0;
  local_1168 = 0;
  uStack_1150 = 0;
  local_1158 = 0;
  local_1148 = 0x3f800000;
  folly::dynamic::folly::dynamic::destroy(local_9a0);
  local_113c = 0;
  local_10e1 = 0;
  uStack_c00 = _UNK_00488920;
  local_c08 = _DAT_00488918;
  local_113b = _s__00375408;
  uStack_cf8 = _UNK_00371598;
  local_d00 = _DAT_00371590;
  uStack_c10 = _UNK_00488910;
  local_c18 = _DAT_00488908;
  local_1024 = 0;
  uStack_c20 = _UNK_00488900;
  local_c28 = _DAT_004888f8;
  uStack_c30 = _UNK_004888f0;
  local_c38 = _DAT_004888e8;
  uStack_be8 = 0;
  local_101c = 0;
  uStack_1050 = 0;
  local_1058 = 0;
  uStack_103c = 0;
  uStack_1060 = 0;
  local_1068 = 0;
  uStack_ea0 = 0;
  local_ea8 = 0;
  local_1140 = 0x10410710;
  local_e8b = 0;
  local_10e5 = 0x40004;
  local_e86 = 0x23;
  uStack_1044 = 0;
  uStack_1040 = 0;
  uStack_104c = 0;
  uStack_1048 = 0;
  uStack_1030 = 0;
  local_1038 = 0;
  local_e4c = 0x3f800000;
  local_1028 = 0x7fc00000;
  local_1020 = 0x7fc00000;
  local_1018 = 0x7fc00000;
  local_1010 = 0x7fc00000;
  local_1008 = 0x7fc00000;
  local_1000 = 0x7fc00000;
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
  uStack_d30 = 0;
  local_d38 = 0;
  uStack_d20 = 0;
  uStack_d28 = 0;
  uStack_d40 = 0;
  local_d48 = 0;
  uStack_f4f = 0;
  uStack_f50 = 0;
  local_d14 = 0;
  uStack_f3c = 0;
  local_f44 = 0;
  uStack_f2c = 0;
  uStack_f34 = 0;
  uStack_f1c = 0;
  local_f24 = 0;
  uStack_f0c = 0;
  uStack_f14 = 0;
  uStack_efc = 0;
  local_f04 = 0;
  uStack_eec = 0;
  uStack_ef4 = 0;
  local_ee7 = 0;
  uStack_ee4 = 0;
  uStack_ce0 = 0;
  local_ce8 = 0;
  uStack_cd0 = 0;
  uStack_cd8 = 0;
  uStack_cc0 = 0;
  local_cc8 = 0;
  uStack_cb0 = 0;
  uStack_cb8 = 0;
  uStack_ca0 = 0;
  local_ca8 = 0;
  uStack_c90 = 0;
  uStack_c98 = 0;
  uStack_c80 = 0;
  local_c88 = 0;
  uStack_c70 = 0;
  uStack_c78 = 0;
  uStack_c60 = 0;
  local_c68 = 0;
  uStack_c50 = 0;
  uStack_c58 = 0;
  uStack_c40 = 0;
  local_c48 = 0;
  uStack_bf0 = 0;
  uStack_bea = 0;
  local_bf8 = 0;
  uStack_10d7 = 0;
  uStack_112b = 0;
  local_1133 = 0;
  uStack_111b = 0;
  local_1123 = 0;
  uStack_110b = 0;
  local_1113 = 0;
  uStack_10fb = 0;
  local_1103 = 0;
  uStack_10ed = 0;
  uStack_10f5 = 0;
  uStack_10f3 = 0;
  local_10d9 = 0;
  uStack_10d8 = 0;
  uStack_10c8 = 0;
  uStack_10d0 = 0;
  local_10b8 = 0;
  uStack_10c0 = 0;
  local_10a8 = 0;
  uStack_10b0 = 0;
  local_1098 = 0;
  uStack_10a0 = 0;
  local_1088 = 0;
  uStack_1090 = 0;
  uStack_1078 = 0;
  uStack_1080 = 0;
  local_1070 = 0;
  local_1014 = 0;
  local_100c = 0;
  local_1004 = 0;
  local_ffc = 0;
  local_ff4 = 0;
  local_fec = 0;
  local_fe4 = 0;
  local_fdc = 0;
  local_fd4 = 0;
  local_fcc = 0;
  local_fc4 = 0;
  local_fbc = 0;
  local_fb4 = 0;
  local_fac = 0;
  local_fa8 = 0;
  local_fa4 = 0;
  local_f98 = 0;
  local_edc = 0;
  local_ed8 = 0;
  local_ed4 = 0;
  local_ed0 = 0;
  local_ecc = 0;
  local_ec8 = 0;
  local_eb0 = 0;
  uStack_f88 = 0;
  local_f90 = 0;
  uStack_f78 = 0;
  uStack_f80 = 0;
  uStack_f68 = 0;
  local_f70 = 0;
  uStack_f58 = 0;
  local_f57 = 0;
  uStack_f60 = 0;
  local_e98 = 0;
  local_e90 = 0;
  local_e8c = 1;
  local_e87 = 0;
  uStack_e78 = 0;
  local_e80 = 0;
  uStack_e68 = 0;
  uStack_e70 = 0;
  uStack_e58 = 0;
  uStack_e51 = 0;
  local_e60 = 0;
  local_e44 = 0;
  local_e3c = 0;
  local_e38 = 0;
  local_e30 = 0;
  local_e2c = 0;
  local_e24 = 0;
  local_e20 = 0;
  local_e18 = 0;
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
  local_da4 = 0;
  local_da0 = 0;
  local_d9c = 0;
  local_d98 = 0;
  local_d94 = 0;
  local_d90 = 0;
  local_d8c = 0;
  local_d88 = 0;
  local_d84 = 0;
  local_d80 = 0;
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
  local_d08 = 0;
  local_d18 = 0;
  local_d0c = 0;
  local_cf0 = 0;
  local_be0 = 0;
  local_bdc = 0;
  local_bd8 = 0;
  local_bc0 = 0;
  uStack_bcc = 0;
  local_bd4 = 0;
  local_bc4 = 0;
  local_bb8 = 0x101;
  local_bb6 = 0;
  local_bb4 = 0;
  local_bb0 = 0;
  local_b50 = 0;
  local_b48 = 0;
  local_ae8 = 0;
  local_ad8 = 0;
  local_ad4 = 0;
  local_ad0 = 0;
  local_acc = 0;
  local_ac8 = 0;
  local_ac4 = 0;
  local_ac0 = 0;
  local_abc = 0;
  local_ab8 = 0;
  local_ab4 = 0;
  local_adc = 0;
  local_ae0 = 0;
  local_1190 = PTR_vtable_0099f088 + 0x20;
  local_ab0 = 0;
  local_aa8 = 0;
  local_a80 = 0;
  local_a78 = 0;
  local_a50 = 0;
  local_a48 = 0;
  local_a20 = 0;
  local_a18 = 0;
  uStack_9e8 = 0;
  local_9f0 = 0;
  uStack_9d8 = 0;
  local_9e0 = 0;
  uStack_9c8 = 0;
  local_9d0 = 0;
  uStack_9b8 = 0;
  local_9c0 = 0;
  local_9b0 = 0;
  local_9a8 = 1;
                    /* try { // try from 00898f34 to 00898f47 has its CatchHandler @ 00899120 */
  facebook::react::RNSVGFeBlendProps::RNSVGFeBlendProps
            ((RNSVGFeBlendProps *)local_9a0,(PropsParserContext *)local_11f0,
             (RNSVGFeBlendProps *)&local_1190,(RawProps *)&local_f8);
  FUN_00899be4(local_9a0);
  FUN_00899be4(&local_1190);
  facebook::react::RawPropsParser::facebook::react::RawPropsParser::postPrepare(this + 0x38);
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
                    /* try { // try from 0089904c to 00899057 has its CatchHandler @ 00899124 */
        (*(code *)(&PTR_FUN_0098f088)[*(uint *)((long)pvVar3 + -8)])
                  (&local_1190,(void *)((long)pvVar3 + -0x38));
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
  facebook::jsi::Value::~Value((Value *)local_e0);
  if (local_11b0 != (void *)0x0) {
    pvStack_11a8 = local_11b0;
    operator_delete(local_11b0);
  }
  if (pvStack_11c8 != (void *)0x0) {
    local_11c0 = pvStack_11c8;
    operator_delete(pvStack_11c8);
  }
  if (local_11e0 != (void *)0x0) {
    pvStack_11d8 = local_11e0;
    operator_delete(local_11e0);
  }
  *param_1 = this;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00899128  FUN_00899128 =====

void FUN_00899128(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 0089914c  FUN_0089914c =====

undefined * FUN_0089914c(void)

{
  return PTR_RNSVGFeBlendComponentName_0099f080;
}


// ===== 00899158  FUN_00899158 =====

undefined * FUN_00899158(void)

{
  return PTR_RNSVGFeBlendComponentName_0099f080;
}


// ===== 00899164  FUN_00899164 =====

undefined8 FUN_00899164(void)

{
  return 0x61;
}


// ===== 0089916c  FUN_0089916c =====

void FUN_0089916c(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  RNSVGLayoutableShadowNode *pRVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  
  lVar2 = tpidr_el0;
  lVar6 = *(long *)(lVar2 + 0x28);
  uVar3 = (**(code **)(*param_2 + 0x20))();
  puVar4 = (undefined8 *)operator_new(0x400);
  pRVar1 = (RNSVGLayoutableShadowNode *)(puVar4 + 3);
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_00998090;
                    /* try { // try from 008991d8 to 008991e7 has its CatchHandler @ 0089924c */
  facebook::react::RNSVGLayoutableShadowNode::RNSVGLayoutableShadowNode
            (pRVar1,param_3,param_4,uVar3);
  lVar5 = *param_2;
  puVar4[3] = &PTR_FUN_009980e0;
                    /* try { // try from 00899200 to 0089920b has its CatchHandler @ 0089923c */
  (**(code **)(lVar5 + 0x60))(param_2,pRVar1);
  *param_1 = pRVar1;
  param_1[1] = puVar4;
  if (*(long *)(lVar2 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0089927c  FUN_0089927c =====

void FUN_0089927c(undefined8 *param_1,long *param_2,ShadowNode *param_3,ShadowNodeFragment *param_4)

{
  RNSVGLayoutableShadowNode *pRVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  RNSVGLayoutableShadowNode *local_78;
  long *local_70;
  RNSVGLayoutableShadowNode *local_68;
  long *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  plVar3 = (long *)operator_new(0x400);
  pRVar1 = (RNSVGLayoutableShadowNode *)(plVar3 + 3);
  plVar3[1] = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_00998090;
                    /* try { // try from 008992d4 to 008992e3 has its CatchHandler @ 008993b0 */
  facebook::react::RNSVGLayoutableShadowNode::RNSVGLayoutableShadowNode(pRVar1,param_3,param_4);
  plVar3[3] = (long)&PTR_FUN_009980e0;
  local_68 = pRVar1;
  local_60 = plVar3;
                    /* try { // try from 008992f4 to 00899303 has its CatchHandler @ 008993c8 */
  facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::
  completeClone(pRVar1,param_3,param_4);
  local_78 = pRVar1;
  local_70 = plVar3;
  FUN_00757d00(1,plVar3 + 1);
                    /* try { // try from 00899314 to 00899323 has its CatchHandler @ 008993a0 */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_78);
  plVar3 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar4 = FUN_00757990(0xffffffffffffffff,local_70 + 1), lVar4 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pRVar1 = local_68;
                    /* try { // try from 00899360 to 0089936b has its CatchHandler @ 008993c8 */
  (**(code **)(*param_2 + 0x60))(param_2,local_68);
  *param_1 = pRVar1;
  param_1[1] = local_60;
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008993f0  FUN_008993f0 =====

void FUN_008993f0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00899400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 00899404  FUN_00899404 =====

void FUN_00899404(undefined8 *param_1,long param_2,PropsParserContext *param_3,long *param_4,
                 RawProps *param_5)

{
  RNSVGFeBlendProps *this;
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
  RNSVGFeBlendProps *pRVar12;
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
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGFeBlendComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGFeBlendPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eba0
         & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGFeBlendComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGFeBlendPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eba0
                                   ), iVar6 != 0)) {
                    /* try { // try from 00899838 to 0089983b has its CatchHandler @ 00899868 */
      FUN_00899f0c();
      __cxa_atexit(FUN_00899ebc,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGFeBlendComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGFeBlendPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eb98
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGFeBlendComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGFeBlendPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eba0
                         );
    }
    lVar11 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGFeBlendComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGFeBlendPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eb98
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGFeBlendComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGFeBlendPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eb98
    ;
    param_1[1] = lVar11;
    if (lVar11 != 0) {
      FUN_00757d00(1,lVar11 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    pRVar12 = (RNSVGFeBlendProps *)*param_4;
    if (pRVar12 == (RNSVGFeBlendProps *)0x0) {
      if (((*
            PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGFeBlendComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGFeBlendPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eba0
           & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGFeBlendComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGFeBlendPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eba0
                                     ), iVar6 != 0)) {
                    /* try { // try from 008997b8 to 008997bb has its CatchHandler @ 00899880 */
        FUN_00899f0c();
        __cxa_atexit(FUN_00899ebc,
                     PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGFeBlendComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGFeBlendPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eb98
                     ,&PTR_LOOP_008d5d30);
        __cxa_guard_release(
                           PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGFeBlendComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGFeBlendPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eba0
                           );
      }
      pRVar12 = *(RNSVGFeBlendProps **)
                 PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGFeBlendComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGFeBlendPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eb98
      ;
    }
    plVar8 = (long *)operator_new(0x808);
    this = (RNSVGFeBlendProps *)(plVar8 + 3);
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = (long)&PTR_FUN_009981f8;
                    /* try { // try from 008994e4 to 008994f7 has its CatchHandler @ 008998f4 */
    facebook::react::RNSVGFeBlendProps::RNSVGFeBlendProps(this,param_3,pRVar12,param_5);
                    /* try { // try from 008994fc to 0089950f has its CatchHandler @ 0089990c */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if ((((uVar7 & 1) == 0) ||
        (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar7 & 1) == 0)) ||
       (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
                enablePropsUpdateReconciliationAndroid(), (uVar7 & 1) == 0)) {
LAB_00899538:
      FUN_00757d00(1,plVar8 + 1);
      if (*param_4 == 0) {
        if (((*
              PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGFeBlendComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGFeBlendPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eba0
             & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(
                                       PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGFeBlendComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGFeBlendPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eba0
                                       ), iVar6 != 0)) {
                    /* try { // try from 008997f8 to 008997fb has its CatchHandler @ 0089986c */
          FUN_00899f0c();
          __cxa_atexit(FUN_00899ebc,
                       PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGFeBlendComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGFeBlendPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eb98
                       ,&PTR_LOOP_008d5d30);
          __cxa_guard_release(
                             PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGFeBlendComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGFeBlendPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eba0
                             );
        }
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 008995a0 to 008995b3 has its CatchHandler @ 00899898 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*(undefined8 *)
                         PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGFeBlendComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGFeBlendPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eb98
                   ,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
LAB_008995ec:
          (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
        }
        else if (local_b0 != (dynamic *)0x0) {
          lVar11 = 5;
          pdVar10 = local_b0;
          goto LAB_008995ec;
        }
        if (plVar8 != (long *)0x0) goto LAB_00899600;
      }
      else {
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 00899554 to 00899567 has its CatchHandler @ 008998c0 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*param_4,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
        }
        else {
          if (local_b0 == (dynamic *)0x0) goto LAB_00899600;
          lVar11 = 5;
          pdVar10 = local_b0;
        }
        (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
LAB_00899600:
        lVar11 = FUN_00757990(0xffffffffffffffff,plVar8 + 1);
        if (lVar11 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 0089951c to 00899527 has its CatchHandler @ 00899894 */
      pcVar9 = (char *)(**(code **)(*(long *)this + 0x10))(this);
      iVar6 = strcmp(PTR_RNSVGFeBlendComponentName_0099f080,pcVar9);
      if (iVar6 != 0) goto LAB_00899538;
      bVar3 = false;
    }
                    /* try { // try from 0089962c to 0089962f has its CatchHandler @ 0089990c */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar7 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 0089963c to 00899657 has its CatchHandler @ 008998bc */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(plVar8 + 7));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00899798 to 008997a7 has its CatchHandler @ 008998b4 */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_00899958;
      }
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (*(int *)(plVar4 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00899778 to 00899787 has its CatchHandler @ 00899918 */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_00899958;
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
                    /* try { // try from 008996d8 to 008996e3 has its CatchHandler @ 00899920 */
        folly::dynamic::dynamic(local_d0,(dynamic *)(plVar4 + 8));
        local_a0 = 0;
                    /* try { // try from 008996e8 to 008996ff has its CatchHandler @ 00899924 */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (this,param_3,uVar1,pcVar9,local_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 00899710 to 0089971b has its CatchHandler @ 00899914 */
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
LAB_00899958:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0089995c  FUN_0089995c =====

void FUN_0089995c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 00899964  FUN_00899964 =====

void FUN_00899964(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 0089996c  FUN_0089996c =====

void FUN_0089996c(undefined8 *param_1,long param_2,long param_3)

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
                    /* try { // try from 008999b0 to 008999b7 has its CatchHandler @ 00899bb8 */
  plVar6 = (long *)operator_new(0x68);
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&PTR_FUN_00992a08;
                    /* try { // try from 008999d0 to 008999db has its CatchHandler @ 00899ba0 */
  local_78 = FUN_008707fc(plVar6 + 3,&local_58,param_2 + 8);
  local_70 = plVar6;
  if ((local_50 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,local_50 + 1), lVar7 == 0)) {
    (**(code **)(*local_50 + 0x10))(local_50);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 00899a10 to 00899a17 has its CatchHandler @ 00899b90 */
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
                    /* try { // try from 00899a64 to 00899a7b has its CatchHandler @ 00899b60 */
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
                    /* try { // try from 00899ad0 to 00899adb has its CatchHandler @ 00899b40 */
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


// ===== 00899be0  FUN_00899be0 =====

void FUN_00899be0(void)

{
  return;
}


// ===== 00899be4  FUN_00899be4 =====

void FUN_00899be4(long param_1)

{
  byte bVar1;
  
  if ((*(byte *)(param_1 + 2000) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x7b8);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x7e0));
    bVar1 = *(byte *)(param_1 + 0x7b8);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x7a0);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x7c8));
    bVar1 = *(byte *)(param_1 + 0x7a0);
  }
  if ((bVar1 & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x7b0));
  }
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x770);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x740);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x710);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x6e0);
  FUN_0078917c(param_1,PTR_VTT_0099f090 + 8);
  return;
}


// ===== 00899c74  FUN_00899c74 =====

void FUN_00899c74(long param_1)

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


// ===== 00899cc4  FUN_00899cc4 =====

void FUN_00899cc4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00998090;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 00899cd4  FUN_00899cd4 =====

void FUN_00899cd4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00998090;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00899d04  FUN_00899d04 =====

void FUN_00899d04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00899d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00899d10  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 00899d14  FUN_00899d14 =====

void FUN_00899d14(long *param_1)

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


// ===== 00899dd4  FUN_00899dd4 =====

void FUN_00899dd4(long param_1)

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


// ===== 00899e3c  FUN_00899e3c =====

bool FUN_00899e3c(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 00899e54  FUN_00899e54 =====

bool FUN_00899e54(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 00899e6c  FUN_00899e6c =====

void FUN_00899e6c(long param_1)

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


// ===== 00899ebc  FUN_00899ebc =====

void FUN_00899ebc(long param_1)

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


// ===== 00899f0c  FUN_00899f0c =====

void FUN_00899f0c(void)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x808);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_009981a8;
  memset(__s,0,0x7f0);
                    /* try { // try from 00899f48 to 00899f5b has its CatchHandler @ 0089a00c */
  FUN_00788b10(__s,PTR_VTT_0099f090 + 0x10);
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
  puVar1 = PTR_vtable_0099f088;
  *(undefined4 *)(puVar2 + 0xd9) = 0;
  *(undefined2 *)((long)puVar2 + 0x6cc) = 0;
  *(undefined4 *)(puVar2 + 0xdf) = 0;
  puVar2[3] = puVar1 + 0x20;
  puVar2[0xe0] = 0;
  *(undefined4 *)(puVar2 + 0xe5) = 0;
  puVar2[0xe6] = 0;
  *(undefined4 *)(puVar2 + 0xeb) = 0;
  puVar2[0xec] = 0;
  *(undefined4 *)(puVar2 + 0xf1) = 0;
  puVar2[0xf2] = 0;
  puVar2[0xff] = 0;
  puVar2[0xfe] = 0;
  puVar2[0xfd] = 0;
  puVar2[0xfc] = 0;
  puVar2[0xfb] = 0;
  puVar2[0xfa] = 0;
  puVar2[0xf9] = 0;
  puVar2[0xf8] = 0;
  puVar2[0xf7] = 0;
  puVar1 = 
  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGFeBlendComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGFeBlendPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eb98
  ;
  *(undefined4 *)(puVar2 + 0x100) = 1;
  *(undefined8 **)puVar1 = __s;
  *(undefined8 **)(puVar1 + 8) = puVar2;
  return;
}


// ===== 0089a028  FUN_0089a028 =====

void FUN_0089a028(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009981a8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0089a038  FUN_0089a038 =====

void FUN_0089a038(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009981a8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0089a068  FUN_0089a068 =====

void FUN_0089a068(long param_1)

{
  FUN_00899be4(param_1 + 0x18);
  return;
}


// ===== 0089a070  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0089a074  FUN_0089a074 =====

void FUN_0089a074(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009981f8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0089a084  FUN_0089a084 =====

void FUN_0089a084(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009981f8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0089a0b4  FUN_0089a0b4 =====

void FUN_0089a0b4(long param_1)

{
  FUN_00899be4(param_1 + 0x18);
  return;
}


// ===== 0089a0bc  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0089a0c0  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_23RNSVGConcreteShadowNodeIXadsoKcL_ZNS0_31RNSVGFeColorMatrixComponentNameEEEENS0_23RNSVGFeColorMatrixPropsEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENS8_14default_deleteISB_EEEERKNS0_29ComponentDescriptorParametersE =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_23RNSVGConcreteShadowNodeIXadsoKcL_ZNS0_31RNSVGFeColorMatrixComponentNameEEEENS0_23RNSVGFeColorMatrixPropsEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENS8_14default_deleteISB_EEEERKNS0_29ComponentDescriptorParametersE
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
  undefined4 local_1200 [2];
  undefined8 *local_11f8;
  void *local_11f0;
  void *pvStack_11e8;
  undefined8 local_11e0;
  void *pvStack_11d8;
  void *local_11d0;
  undefined8 uStack_11c8;
  void *local_11c0;
  void *pvStack_11b8;
  undefined8 uStack_11b0;
  undefined8 uStack_11a8;
  undefined *local_11a0;
  undefined8 uStack_1198;
  undefined8 local_1190;
  undefined8 uStack_1188;
  undefined4 local_1180 [2];
  undefined8 local_1178;
  undefined8 uStack_1170;
  undefined8 local_1168;
  undefined8 uStack_1160;
  undefined4 local_1158;
  undefined4 local_1150;
  undefined1 local_114c;
  undefined8 local_114b;
  undefined8 local_1143;
  undefined8 uStack_113b;
  undefined8 local_1133;
  undefined8 uStack_112b;
  undefined8 local_1123;
  undefined8 uStack_111b;
  undefined8 local_1113;
  undefined6 uStack_110b;
  undefined2 uStack_1105;
  undefined6 uStack_1103;
  undefined8 uStack_10fd;
  undefined4 local_10f5;
  undefined8 local_10f1;
  undefined1 local_10e9;
  undefined1 uStack_10e8;
  undefined7 uStack_10e7;
  undefined8 uStack_10e0;
  undefined8 uStack_10d8;
  undefined8 uStack_10d0;
  undefined8 local_10c8;
  undefined8 uStack_10c0;
  undefined8 local_10b8;
  undefined8 uStack_10b0;
  undefined8 local_10a8;
  undefined8 uStack_10a0;
  undefined8 local_1098;
  undefined8 uStack_1090;
  undefined8 uStack_1088;
  undefined8 local_1080;
  undefined8 local_1078;
  undefined8 uStack_1070;
  undefined8 local_1068;
  undefined4 uStack_1060;
  undefined4 uStack_105c;
  undefined4 uStack_1058;
  undefined4 uStack_1054;
  undefined4 uStack_1050;
  undefined4 uStack_104c;
  undefined8 local_1048;
  undefined8 uStack_1040;
  undefined4 local_1038;
  undefined1 local_1034;
  undefined4 local_1030;
  undefined1 local_102c;
  undefined4 local_1028;
  undefined1 local_1024;
  undefined4 local_1020;
  undefined1 local_101c;
  undefined4 local_1018;
  undefined1 local_1014;
  undefined4 local_1010;
  undefined1 local_100c;
  undefined4 local_1008;
  undefined1 local_1004;
  undefined4 local_1000;
  undefined1 local_ffc;
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
  undefined1 local_fb8;
  undefined1 local_fb4;
  undefined1 local_fa8;
  undefined8 local_fa0;
  undefined8 uStack_f98;
  undefined8 uStack_f90;
  undefined8 uStack_f88;
  undefined8 local_f80;
  undefined8 uStack_f78;
  undefined8 uStack_f70;
  undefined1 uStack_f68;
  undefined7 local_f67;
  undefined1 uStack_f60;
  undefined8 uStack_f5f;
  undefined8 local_f54;
  undefined8 uStack_f4c;
  undefined8 uStack_f44;
  undefined8 uStack_f3c;
  undefined8 local_f34;
  undefined8 uStack_f2c;
  undefined8 uStack_f24;
  undefined8 uStack_f1c;
  undefined8 local_f14;
  undefined8 uStack_f0c;
  undefined8 uStack_f04;
  undefined5 uStack_efc;
  undefined3 local_ef7;
  undefined5 uStack_ef4;
  undefined1 local_eec;
  undefined1 local_ee8;
  undefined1 local_ee4;
  undefined1 local_ee0;
  undefined1 local_edc;
  undefined1 local_ed8;
  undefined1 local_ec0;
  undefined8 local_eb8;
  undefined8 uStack_eb0;
  undefined8 local_ea8;
  undefined4 local_ea0;
  undefined1 local_e9c;
  undefined4 local_e9b;
  undefined1 local_e97;
  undefined1 local_e96;
  undefined8 local_e90;
  undefined8 uStack_e88;
  undefined8 uStack_e80;
  undefined8 uStack_e78;
  undefined8 local_e70;
  undefined7 uStack_e68;
  undefined4 uStack_e61;
  undefined8 local_e5c;
  undefined1 local_e54;
  undefined1 local_e4c;
  undefined1 local_e48;
  undefined1 local_e40;
  undefined1 local_e3c;
  undefined1 local_e34;
  undefined1 local_e30;
  undefined1 local_e28;
  undefined1 local_e24;
  undefined1 local_e1c;
  undefined1 local_e18;
  undefined1 local_e10;
  undefined1 local_e0c;
  undefined1 local_e04;
  undefined1 local_e00;
  undefined1 local_df8;
  undefined1 local_df4;
  undefined1 local_dec;
  undefined1 local_de8;
  undefined1 local_de0;
  undefined1 local_ddc;
  undefined1 local_dd4;
  undefined1 local_dd0;
  undefined1 local_dc8;
  undefined1 local_dc4;
  undefined1 local_dbc;
  undefined1 local_db8;
  undefined1 local_db4;
  undefined1 local_db0;
  undefined1 local_dac;
  undefined1 local_da8;
  undefined1 local_da4;
  undefined1 local_da0;
  undefined1 local_d9c;
  undefined1 local_d98;
  undefined1 local_d94;
  undefined1 local_d90;
  undefined1 local_d8c;
  undefined1 local_d88;
  undefined1 local_d84;
  undefined1 local_d80;
  undefined1 local_d7c;
  undefined1 local_d78;
  undefined1 local_d74;
  undefined1 local_d70;
  undefined1 local_d6c;
  undefined1 local_d68;
  undefined1 local_d64;
  undefined1 local_d60;
  undefined1 local_d5c;
  undefined8 local_d58;
  undefined8 uStack_d50;
  undefined8 local_d48;
  undefined8 uStack_d40;
  undefined8 uStack_d38;
  undefined8 uStack_d30;
  undefined2 local_d28;
  undefined8 local_d24;
  undefined1 local_d1c;
  undefined8 local_d18;
  undefined8 local_d10;
  undefined8 uStack_d08;
  undefined1 local_d00;
  undefined8 local_cf8;
  undefined8 uStack_cf0;
  undefined8 uStack_ce8;
  undefined8 uStack_ce0;
  undefined8 local_cd8;
  undefined8 uStack_cd0;
  undefined8 uStack_cc8;
  undefined8 uStack_cc0;
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
  undefined8 local_c48;
  undefined8 uStack_c40;
  undefined8 local_c38;
  undefined8 uStack_c30;
  undefined8 local_c28;
  undefined8 uStack_c20;
  undefined8 local_c18;
  undefined8 uStack_c10;
  undefined8 local_c08;
  undefined6 uStack_c00;
  undefined2 uStack_bfa;
  undefined6 uStack_bf8;
  undefined1 local_bf0;
  undefined1 local_bec;
  undefined1 local_be8;
  undefined8 local_be4;
  undefined8 uStack_bdc;
  undefined1 local_bd4;
  undefined8 local_bd0;
  undefined2 local_bc8;
  undefined1 local_bc6;
  undefined4 local_bc4;
  undefined1 local_bc0;
  undefined1 local_b60;
  undefined1 local_b58;
  undefined1 local_af8;
  undefined4 local_af0;
  undefined2 local_aec;
  undefined1 local_ae8;
  undefined1 local_ae4;
  undefined1 local_ae0;
  undefined1 local_adc;
  undefined1 local_ad8;
  undefined1 local_ad4;
  undefined1 local_ad0;
  undefined1 local_acc;
  undefined1 local_ac8;
  undefined1 local_ac4;
  undefined4 local_ac0 [2];
  undefined8 local_ab8;
  undefined4 local_a90 [2];
  undefined8 local_a88;
  undefined4 local_a60 [2];
  undefined8 local_a58;
  undefined4 local_a30 [2];
  undefined8 local_a28;
  ulong local_a00;
  undefined8 uStack_9f8;
  void *local_9f0;
  ulong uStack_9e8;
  undefined8 local_9e0;
  void *pvStack_9d8;
  undefined4 local_9d0;
  void *local_9c8;
  void *pvStack_9c0;
  undefined8 local_9b8;
  undefined4 local_9b0 [2];
  undefined8 local_9a8;
  undefined8 uStack_9a0;
  undefined8 local_998;
  undefined8 local_990;
  undefined8 uStack_988;
  undefined1 auStack_2d0 [48];
  undefined1 auStack_2a0 [48];
  undefined1 auStack_270 [48];
  undefined1 auStack_240 [48];
  byte local_210;
  void *local_200;
  byte local_1f8;
  void *local_1e8;
  void *local_1d8;
  void *local_1d0;
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
  void *local_130;
  undefined8 uStack_128;
  void *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined4 local_f0 [4];
  undefined4 local_e0 [2];
  undefined8 local_d8;
  undefined4 local_b0;
  void *local_a8;
  void *pvStack_a0;
  undefined8 uStack_98;
  void *local_90;
  void *local_88;
  undefined8 uStack_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  this = (ComponentDescriptor *)operator_new(0x88);
  pvStack_11d8 = (void *)0x0;
  local_11e0 = 0;
  uStack_11c8 = 0;
  local_11d0 = (void *)0x0;
  pvStack_11b8 = (void *)0x0;
  local_11c0 = (void *)0x0;
  uStack_11a8 = 0;
  uStack_11b0 = 0;
  pvStack_11e8 = (void *)0x0;
  local_11f0 = (void *)0x0;
                    /* try { // try from 0089a114 to 0089a11f has its CatchHandler @ 0089a830 */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_11f0);
  local_108 = 0;
  *(undefined ***)this = &PTR_FUN_00998248;
  local_100 = 0;
  local_f8 = 0;
  local_f0[0] = 0;
  local_e0[0] = 0;
  local_d8 = 0;
  local_b0 = 0;
  pvStack_a0 = (void *)0x0;
  local_a8 = (void *)0x0;
  local_90 = (void *)0x0;
  uStack_98 = 0;
  uStack_80 = 0;
  local_88 = (void *)0x0;
  local_110 = 0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  uStack_128 = 0;
  local_130 = (void *)0x0;
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
  uStack_1b8 = 0;
  local_1c0 = 0;
                    /* try { // try from 0089a18c to 0089a19f has its CatchHandler @ 0089a860 */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1c0);
  local_110 = CONCAT44(local_110._4_4_,0x3f800000);
  local_1200[0] = 0xffffffff;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  uStack_128 = 0;
  local_130 = (void *)0x0;
  local_11f8 = &local_1c0;
  facebook::react::RawProps::facebook::react::RawProps::parse(&local_108,this + 0x38);
  memset(local_1180,0,2000);
  puVar5 = PTR_VTT_0099f0a8;
  local_9b0[0] = 5;
  local_998 = 0;
  local_11a0 = *(undefined **)(PTR_VTT_0099f0a8 + 0x20);
  local_1180[0] = 5;
  uStack_1188 = 0;
  local_1190 = 0;
  local_990 = 0;
  uStack_1198 = 0;
  uStack_988 = 0x3f800000;
  uStack_9a0 = 0;
  local_9a8 = 0;
  uStack_1170 = 0;
  local_1178 = 0;
  uStack_1160 = 0;
  local_1168 = 0;
  local_1158 = 0x3f800000;
  folly::dynamic::folly::dynamic::destroy(local_9b0);
  local_114c = 0;
  local_10f1 = 0;
  uStack_c10 = _UNK_00488920;
  local_c18 = _DAT_00488918;
  local_114b = _s__00375408;
  uStack_d08 = _UNK_00371598;
  local_d10 = _DAT_00371590;
  uStack_c20 = _UNK_00488910;
  local_c28 = _DAT_00488908;
  local_1034 = 0;
  uStack_c30 = _UNK_00488900;
  local_c38 = _DAT_004888f8;
  uStack_c40 = _UNK_004888f0;
  local_c48 = _DAT_004888e8;
  uStack_bf8 = 0;
  local_102c = 0;
  uStack_1060 = 0;
  local_1068 = 0;
  uStack_104c = 0;
  uStack_1070 = 0;
  local_1078 = 0;
  uStack_c00 = 0;
  uStack_bfa = 0;
  local_c08 = 0;
  local_1150 = 0x10410710;
  local_10f5 = 0x40004;
  uStack_1054 = 0;
  uStack_1050 = 0;
  uStack_105c = 0;
  uStack_1058 = 0;
  uStack_1040 = 0;
  local_1048 = 0;
  local_1038 = 0x7fc00000;
  local_1030 = 0x7fc00000;
  local_1028 = 0x7fc00000;
  local_1020 = 0x7fc00000;
  local_1018 = 0x7fc00000;
  local_1010 = 0x7fc00000;
  local_1008 = 0x7fc00000;
  local_1000 = 0x7fc00000;
  local_ff8 = 0x7fc00000;
  local_ff0 = 0x7fc00000;
  local_fe8 = 0x7fc00000;
  local_fe0 = 0x7fc00000;
  local_fd8 = 0x7fc00000;
  local_fd0 = 0x7fc00000;
  local_fc8 = 0x7fc00000;
  local_fc0 = 0x7fc00000;
  uStack_f5f = 0;
  uStack_f60 = 0;
  uStack_f4c = 0;
  local_f54 = 0;
  uStack_f3c = 0;
  uStack_f44 = 0;
  uStack_f2c = 0;
  local_f34 = 0;
  uStack_f1c = 0;
  uStack_f24 = 0;
  uStack_f0c = 0;
  local_f14 = 0;
  uStack_efc = 0;
  uStack_f04 = 0;
  local_ef7 = 0;
  uStack_ef4 = 0;
  local_e9c = 1;
  local_e9b = 0;
  local_e96 = 0x23;
  local_e5c = 0x3f800000;
  uStack_d40 = 0;
  local_d48 = 0;
  uStack_d30 = 0;
  uStack_d38 = 0;
  uStack_d50 = 0;
  local_d58 = 0;
  local_d24 = 0;
  uStack_cf0 = 0;
  local_cf8 = 0;
  uStack_ce0 = 0;
  uStack_ce8 = 0;
  uStack_cd0 = 0;
  local_cd8 = 0;
  uStack_cc0 = 0;
  uStack_cc8 = 0;
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
  uStack_10e7 = 0;
  uStack_113b = 0;
  local_1143 = 0;
  uStack_112b = 0;
  local_1133 = 0;
  uStack_111b = 0;
  local_1123 = 0;
  uStack_110b = 0;
  local_1113 = 0;
  uStack_10fd = 0;
  uStack_1105 = 0;
  uStack_1103 = 0;
  local_10e9 = 0;
  uStack_10e8 = 0;
  uStack_10d8 = 0;
  uStack_10e0 = 0;
  local_10c8 = 0;
  uStack_10d0 = 0;
  local_10b8 = 0;
  uStack_10c0 = 0;
  local_10a8 = 0;
  uStack_10b0 = 0;
  local_1098 = 0;
  uStack_10a0 = 0;
  uStack_1088 = 0;
  uStack_1090 = 0;
  local_1080 = 0;
  local_1024 = 0;
  local_101c = 0;
  local_1014 = 0;
  local_100c = 0;
  local_1004 = 0;
  local_ffc = 0;
  local_ff4 = 0;
  local_fec = 0;
  local_fe4 = 0;
  local_fdc = 0;
  local_fd4 = 0;
  local_fcc = 0;
  local_fc4 = 0;
  local_fbc = 0;
  local_fb8 = 0;
  local_fb4 = 0;
  local_fa8 = 0;
  local_eec = 0;
  local_ee8 = 0;
  local_ee4 = 0;
  local_ee0 = 0;
  local_edc = 0;
  local_ed8 = 0;
  local_ec0 = 0;
  uStack_f98 = 0;
  local_fa0 = 0;
  uStack_f88 = 0;
  uStack_f90 = 0;
  uStack_f78 = 0;
  local_f80 = 0;
  uStack_f68 = 0;
  local_f67 = 0;
  uStack_f70 = 0;
  uStack_eb0 = 0;
  local_eb8 = 0;
  local_ea8 = 0;
  local_ea0 = 0;
  local_e97 = 0;
  uStack_e88 = 0;
  local_e90 = 0;
  uStack_e78 = 0;
  uStack_e80 = 0;
  uStack_e68 = 0;
  uStack_e61 = 0;
  local_e70 = 0;
  local_e54 = 0;
  local_e4c = 0;
  local_e48 = 0;
  local_e40 = 0;
  local_e3c = 0;
  local_e34 = 0;
  local_e30 = 0;
  local_e28 = 0;
  local_e24 = 0;
  local_e1c = 0;
  local_e18 = 0;
  local_e10 = 0;
  local_e0c = 0;
  local_e04 = 0;
  local_e00 = 0;
  local_df8 = 0;
  local_df4 = 0;
  local_dec = 0;
  local_de8 = 0;
  local_de0 = 0;
  local_ddc = 0;
  local_dd4 = 0;
  local_dd0 = 0;
  local_dc8 = 0;
  local_dc4 = 0;
  local_dbc = 0;
  local_db8 = 0;
  local_db4 = 0;
  local_db0 = 0;
  local_dac = 0;
  local_da8 = 0;
  local_da4 = 0;
  local_da0 = 0;
  local_d9c = 0;
  local_d98 = 0;
  local_d94 = 0;
  local_d90 = 0;
  local_d8c = 0;
  local_d88 = 0;
  local_d84 = 0;
  local_d80 = 0;
  local_d7c = 0;
  local_d78 = 0;
  local_d74 = 0;
  local_d70 = 0;
  local_d6c = 0;
  local_d68 = 0;
  local_d64 = 0;
  local_d60 = 0;
  local_d5c = 0;
  local_d18 = 0;
  local_d28 = 0;
  local_d1c = 0;
  local_d00 = 0;
  local_bf0 = 0;
  local_bec = 0;
  local_be8 = 0;
  local_bd0 = 0;
  uStack_bdc = 0;
  local_be4 = 0;
  local_bd4 = 0;
  local_bc8 = 0x101;
  local_bc6 = 0;
  local_bc4 = 0;
  local_bc0 = 0;
  local_b60 = 0;
  local_b58 = 0;
  local_af8 = 0;
  local_ae8 = 0;
  local_ae4 = 0;
  local_ae0 = 0;
  local_adc = 0;
  local_ad8 = 0;
  local_ad4 = 0;
  local_ad0 = 0;
  local_acc = 0;
  local_ac8 = 0;
  local_ac4 = 0;
  local_aec = 0;
  local_af0 = 0;
  local_11a0 = PTR_vtable_0099f0a0 + 0x20;
  local_ac0[0] = 0;
  local_ab8 = 0;
  local_a90[0] = 0;
  local_a88 = 0;
  local_a60[0] = 0;
  local_a58 = 0;
  local_a30[0] = 0;
  local_a28 = 0;
  pvStack_9c0 = (void *)0x0;
  local_9c8 = (void *)0x0;
  local_9b8 = 0;
  uStack_9f8 = 0;
  local_a00 = 0;
  uStack_9e8 = 0;
  local_9f0 = (void *)0x0;
  pvStack_9d8 = (void *)0x0;
  local_9e0 = 0;
  local_9d0 = 0;
                    /* try { // try from 0089a5c8 to 0089a5db has its CatchHandler @ 0089a860 */
  facebook::react::RNSVGFeColorMatrixProps::RNSVGFeColorMatrixProps
            ((RNSVGFeColorMatrixProps *)local_9b0,(PropsParserContext *)local_1200,
             (RNSVGFeColorMatrixProps *)&local_11a0,(RawProps *)&local_108);
  if (local_1d8 != (void *)0x0) {
    local_1d0 = local_1d8;
    operator_delete(local_1d8);
  }
  if ((local_1f8 & 1) != 0) {
    operator_delete(local_1e8);
  }
  if ((local_210 & 1) != 0) {
    operator_delete(local_200);
  }
  folly::dynamic::folly::dynamic::destroy(auStack_240);
  folly::dynamic::folly::dynamic::destroy(auStack_270);
  folly::dynamic::folly::dynamic::destroy(auStack_2a0);
  folly::dynamic::folly::dynamic::destroy(auStack_2d0);
  FUN_0078917c(local_9b0,puVar5 + 8);
  if (local_9c8 != (void *)0x0) {
    pvStack_9c0 = local_9c8;
    operator_delete(local_9c8);
  }
  if ((uStack_9e8 & 1) != 0) {
    operator_delete(pvStack_9d8);
  }
  if ((local_a00 & 1) != 0) {
    operator_delete(local_9f0);
  }
  folly::dynamic::folly::dynamic::destroy(local_a30);
  folly::dynamic::folly::dynamic::destroy(local_a60);
  folly::dynamic::folly::dynamic::destroy(local_a90);
  folly::dynamic::folly::dynamic::destroy(local_ac0);
  FUN_0078917c(&local_11a0,puVar5 + 8);
  facebook::react::RawPropsParser::facebook::react::RawPropsParser::postPrepare(this + 0x38);
  pvVar3 = local_130;
  puVar4 = (undefined8 *)local_120;
  while (puVar4 != (undefined8 *)0x0) {
    plVar7 = (long *)puVar4[6];
    pvVar8 = (void *)*puVar4;
    local_130 = pvVar3;
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
    pvVar3 = local_130;
    puVar4 = (undefined8 *)pvVar8;
  }
  local_130 = (void *)0x0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)&uStack_168);
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)&uStack_198);
  std::__ndk1::mutex::~mutex((mutex *)&local_1c0);
  pvVar8 = local_90;
  pvVar3 = local_88;
  if (local_90 != (void *)0x0) {
    while (pvVar3 != pvVar8) {
      if (*(uint *)((long)pvVar3 + -8) != 0xffffffff) {
                    /* try { // try from 0089a78c to 0089a797 has its CatchHandler @ 0089a864 */
        (*(code *)(&PTR_FUN_0098f088)[*(uint *)((long)pvVar3 + -8)])
                  (&local_11a0,(void *)((long)pvVar3 + -0x38));
      }
      *(undefined4 *)((long)pvVar3 + -8) = 0xffffffff;
      pvVar3 = (void *)((long)pvVar3 + -0x38);
    }
    local_88 = pvVar8;
    operator_delete(local_90);
  }
  if (local_a8 != (void *)0x0) {
    pvStack_a0 = local_a8;
    operator_delete(local_a8);
  }
  folly::dynamic::folly::dynamic::destroy(local_e0);
  facebook::jsi::Value::~Value((Value *)local_f0);
  if (local_11c0 != (void *)0x0) {
    pvStack_11b8 = local_11c0;
    operator_delete(local_11c0);
  }
  if (pvStack_11d8 != (void *)0x0) {
    local_11d0 = pvStack_11d8;
    operator_delete(pvStack_11d8);
  }
  if (local_11f0 != (void *)0x0) {
    pvStack_11e8 = local_11f0;
    operator_delete(local_11f0);
  }
  *param_1 = this;
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0089a868  FUN_0089a868 =====

void FUN_0089a868(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 0089a88c  FUN_0089a88c =====

undefined * FUN_0089a88c(void)

{
  return PTR_RNSVGFeColorMatrixComponentName_0099f098;
}


// ===== 0089a898  FUN_0089a898 =====

undefined * FUN_0089a898(void)

{
  return PTR_RNSVGFeColorMatrixComponentName_0099f098;
}


// ===== 0089a8a4  FUN_0089a8a4 =====

undefined8 FUN_0089a8a4(void)

{
  return 0x61;
}


// ===== 0089a8ac  FUN_0089a8ac =====

void FUN_0089a8ac(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  RNSVGLayoutableShadowNode *pRVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  
  lVar2 = tpidr_el0;
  lVar6 = *(long *)(lVar2 + 0x28);
  uVar3 = (**(code **)(*param_2 + 0x20))();
  puVar4 = (undefined8 *)operator_new(0x400);
  pRVar1 = (RNSVGLayoutableShadowNode *)(puVar4 + 3);
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_009982d8;
                    /* try { // try from 0089a918 to 0089a927 has its CatchHandler @ 0089a98c */
  facebook::react::RNSVGLayoutableShadowNode::RNSVGLayoutableShadowNode
            (pRVar1,param_3,param_4,uVar3);
  lVar5 = *param_2;
  puVar4[3] = &PTR_FUN_00998328;
                    /* try { // try from 0089a940 to 0089a94b has its CatchHandler @ 0089a97c */
  (**(code **)(lVar5 + 0x60))(param_2,pRVar1);
  *param_1 = pRVar1;
  param_1[1] = puVar4;
  if (*(long *)(lVar2 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0089a9bc  FUN_0089a9bc =====

void FUN_0089a9bc(undefined8 *param_1,long *param_2,ShadowNode *param_3,ShadowNodeFragment *param_4)

{
  RNSVGLayoutableShadowNode *pRVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  RNSVGLayoutableShadowNode *local_78;
  long *local_70;
  RNSVGLayoutableShadowNode *local_68;
  long *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  plVar3 = (long *)operator_new(0x400);
  pRVar1 = (RNSVGLayoutableShadowNode *)(plVar3 + 3);
  plVar3[1] = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_009982d8;
                    /* try { // try from 0089aa14 to 0089aa23 has its CatchHandler @ 0089aaf0 */
  facebook::react::RNSVGLayoutableShadowNode::RNSVGLayoutableShadowNode(pRVar1,param_3,param_4);
  plVar3[3] = (long)&PTR_FUN_00998328;
  local_68 = pRVar1;
  local_60 = plVar3;
                    /* try { // try from 0089aa34 to 0089aa43 has its CatchHandler @ 0089ab08 */
  facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::
  completeClone(pRVar1,param_3,param_4);
  local_78 = pRVar1;
  local_70 = plVar3;
  FUN_00757d00(1,plVar3 + 1);
                    /* try { // try from 0089aa54 to 0089aa63 has its CatchHandler @ 0089aae0 */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_78);
  plVar3 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar4 = FUN_00757990(0xffffffffffffffff,local_70 + 1), lVar4 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pRVar1 = local_68;
                    /* try { // try from 0089aaa0 to 0089aaab has its CatchHandler @ 0089ab08 */
  (**(code **)(*param_2 + 0x60))(param_2,local_68);
  *param_1 = pRVar1;
  param_1[1] = local_60;
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0089ab30  FUN_0089ab30 =====

void FUN_0089ab30(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0089ab40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 0089ab44  FUN_0089ab44 =====

void FUN_0089ab44(undefined8 *param_1,long param_2,PropsParserContext *param_3,long *param_4,
                 RawProps *param_5)

{
  RNSVGFeColorMatrixProps *this;
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
  RNSVGFeColorMatrixProps *pRVar12;
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
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSVGFeColorMatrixComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_23RNSVGFeColorMatrixPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebb0
         & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSVGFeColorMatrixComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_23RNSVGFeColorMatrixPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebb0
                                   ), iVar6 != 0)) {
                    /* try { // try from 0089af78 to 0089af7b has its CatchHandler @ 0089afa8 */
      FUN_0089b5bc();
      __cxa_atexit(FUN_0089b56c,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSVGFeColorMatrixComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_23RNSVGFeColorMatrixPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eba8
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSVGFeColorMatrixComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_23RNSVGFeColorMatrixPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebb0
                         );
    }
    lVar11 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSVGFeColorMatrixComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_23RNSVGFeColorMatrixPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eba8
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSVGFeColorMatrixComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_23RNSVGFeColorMatrixPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eba8
    ;
    param_1[1] = lVar11;
    if (lVar11 != 0) {
      FUN_00757d00(1,lVar11 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    pRVar12 = (RNSVGFeColorMatrixProps *)*param_4;
    if (pRVar12 == (RNSVGFeColorMatrixProps *)0x0) {
      if (((*
            PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSVGFeColorMatrixComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_23RNSVGFeColorMatrixPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebb0
           & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSVGFeColorMatrixComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_23RNSVGFeColorMatrixPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebb0
                                     ), iVar6 != 0)) {
                    /* try { // try from 0089aef8 to 0089aefb has its CatchHandler @ 0089afc0 */
        FUN_0089b5bc();
        __cxa_atexit(FUN_0089b56c,
                     PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSVGFeColorMatrixComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_23RNSVGFeColorMatrixPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eba8
                     ,&PTR_LOOP_008d5d30);
        __cxa_guard_release(
                           PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSVGFeColorMatrixComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_23RNSVGFeColorMatrixPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebb0
                           );
      }
      pRVar12 = *(RNSVGFeColorMatrixProps **)
                 PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSVGFeColorMatrixComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_23RNSVGFeColorMatrixPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eba8
      ;
    }
    plVar8 = (long *)operator_new(0x808);
    this = (RNSVGFeColorMatrixProps *)(plVar8 + 3);
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = (long)&PTR_FUN_00998440;
                    /* try { // try from 0089ac24 to 0089ac37 has its CatchHandler @ 0089b034 */
    facebook::react::RNSVGFeColorMatrixProps::RNSVGFeColorMatrixProps(this,param_3,pRVar12,param_5);
                    /* try { // try from 0089ac3c to 0089ac4f has its CatchHandler @ 0089b04c */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if ((((uVar7 & 1) == 0) ||
        (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar7 & 1) == 0)) ||
       (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
                enablePropsUpdateReconciliationAndroid(), (uVar7 & 1) == 0)) {
LAB_0089ac78:
      FUN_00757d00(1,plVar8 + 1);
      if (*param_4 == 0) {
        if (((*
              PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSVGFeColorMatrixComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_23RNSVGFeColorMatrixPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebb0
             & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(
                                       PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSVGFeColorMatrixComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_23RNSVGFeColorMatrixPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebb0
                                       ), iVar6 != 0)) {
                    /* try { // try from 0089af38 to 0089af3b has its CatchHandler @ 0089afac */
          FUN_0089b5bc();
          __cxa_atexit(FUN_0089b56c,
                       PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSVGFeColorMatrixComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_23RNSVGFeColorMatrixPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eba8
                       ,&PTR_LOOP_008d5d30);
          __cxa_guard_release(
                             PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSVGFeColorMatrixComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_23RNSVGFeColorMatrixPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebb0
                             );
        }
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 0089ace0 to 0089acf3 has its CatchHandler @ 0089afd8 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*(undefined8 *)
                         PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSVGFeColorMatrixComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_23RNSVGFeColorMatrixPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eba8
                   ,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
LAB_0089ad2c:
          (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
        }
        else if (local_b0 != (dynamic *)0x0) {
          lVar11 = 5;
          pdVar10 = local_b0;
          goto LAB_0089ad2c;
        }
        if (plVar8 != (long *)0x0) goto LAB_0089ad40;
      }
      else {
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 0089ac94 to 0089aca7 has its CatchHandler @ 0089b000 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*param_4,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
        }
        else {
          if (local_b0 == (dynamic *)0x0) goto LAB_0089ad40;
          lVar11 = 5;
          pdVar10 = local_b0;
        }
        (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
LAB_0089ad40:
        lVar11 = FUN_00757990(0xffffffffffffffff,plVar8 + 1);
        if (lVar11 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 0089ac5c to 0089ac67 has its CatchHandler @ 0089afd4 */
      pcVar9 = (char *)(**(code **)(*(long *)this + 0x10))(this);
      iVar6 = strcmp(PTR_RNSVGFeColorMatrixComponentName_0099f098,pcVar9);
      if (iVar6 != 0) goto LAB_0089ac78;
      bVar3 = false;
    }
                    /* try { // try from 0089ad6c to 0089ad6f has its CatchHandler @ 0089b04c */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar7 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 0089ad7c to 0089ad97 has its CatchHandler @ 0089affc */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(plVar8 + 7));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 0089aed8 to 0089aee7 has its CatchHandler @ 0089aff4 */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_0089b098;
      }
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (*(int *)(plVar4 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 0089aeb8 to 0089aec7 has its CatchHandler @ 0089b058 */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_0089b098;
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
                    /* try { // try from 0089ae18 to 0089ae23 has its CatchHandler @ 0089b060 */
        folly::dynamic::dynamic(local_d0,(dynamic *)(plVar4 + 8));
        local_a0 = 0;
                    /* try { // try from 0089ae28 to 0089ae3f has its CatchHandler @ 0089b064 */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (this,param_3,uVar1,pcVar9,local_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 0089ae50 to 0089ae5b has its CatchHandler @ 0089b054 */
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
LAB_0089b098:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0089b09c  FUN_0089b09c =====

void FUN_0089b09c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 0089b0a4  FUN_0089b0a4 =====

void FUN_0089b0a4(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 0089b0ac  FUN_0089b0ac =====

void FUN_0089b0ac(undefined8 *param_1,long param_2,long param_3)

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
                    /* try { // try from 0089b0f0 to 0089b0f7 has its CatchHandler @ 0089b2f8 */
  plVar6 = (long *)operator_new(0x68);
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&PTR_FUN_00992a08;
                    /* try { // try from 0089b110 to 0089b11b has its CatchHandler @ 0089b2e0 */
  local_78 = FUN_008707fc(plVar6 + 3,&local_58,param_2 + 8);
  local_70 = plVar6;
  if ((local_50 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,local_50 + 1), lVar7 == 0)) {
    (**(code **)(*local_50 + 0x10))(local_50);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 0089b150 to 0089b157 has its CatchHandler @ 0089b2d0 */
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
                    /* try { // try from 0089b1a4 to 0089b1bb has its CatchHandler @ 0089b2a0 */
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
                    /* try { // try from 0089b210 to 0089b21b has its CatchHandler @ 0089b280 */
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


// ===== 0089b320  FUN_0089b320 =====

void FUN_0089b320(void)

{
  return;
}


// ===== 0089b324  FUN_0089b324 =====

void FUN_0089b324(long param_1)

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


// ===== 0089b374  FUN_0089b374 =====

void FUN_0089b374(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009982d8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0089b384  FUN_0089b384 =====

void FUN_0089b384(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009982d8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0089b3b4  FUN_0089b3b4 =====

void FUN_0089b3b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0089b3bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 0089b3c0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0089b3c4  FUN_0089b3c4 =====

void FUN_0089b3c4(long *param_1)

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


// ===== 0089b484  FUN_0089b484 =====

void FUN_0089b484(long param_1)

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


// ===== 0089b4ec  FUN_0089b4ec =====

bool FUN_0089b4ec(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 0089b504  FUN_0089b504 =====

bool FUN_0089b504(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 0089b51c  FUN_0089b51c =====

void FUN_0089b51c(long param_1)

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


// ===== 0089b56c  FUN_0089b56c =====

void FUN_0089b56c(long param_1)

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


// ===== 0089b5bc  FUN_0089b5bc =====

void FUN_0089b5bc(void)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x808);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_009983f0;
  memset(__s,0,0x7f0);
                    /* try { // try from 0089b5f8 to 0089b60b has its CatchHandler @ 0089b6b8 */
  FUN_00788b10(__s,PTR_VTT_0099f0a8 + 0x10);
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
  puVar1 = PTR_vtable_0099f0a0;
  *(undefined4 *)(puVar2 + 0xd9) = 0;
  *(undefined2 *)((long)puVar2 + 0x6cc) = 0;
  *(undefined4 *)(puVar2 + 0xdf) = 0;
  puVar2[3] = puVar1 + 0x20;
  puVar2[0xe0] = 0;
  *(undefined4 *)(puVar2 + 0xe5) = 0;
  puVar2[0xe6] = 0;
  *(undefined4 *)(puVar2 + 0xeb) = 0;
  puVar2[0xec] = 0;
  *(undefined4 *)(puVar2 + 0xf1) = 0;
  puVar2[0xf2] = 0;
  puVar2[0x100] = 0;
  puVar2[0xff] = 0;
  puVar2[0xfe] = 0;
  puVar2[0xf8] = 0;
  puVar2[0xf7] = 0;
  puVar2[0xfa] = 0;
  puVar2[0xf9] = 0;
  puVar2[0xfc] = 0;
  puVar2[0xfb] = 0;
  puVar1 = 
  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSVGFeColorMatrixComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_23RNSVGFeColorMatrixPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eba8
  ;
  *(undefined4 *)(puVar2 + 0xfd) = 0;
  *(undefined8 **)puVar1 = __s;
  *(undefined8 **)(puVar1 + 8) = puVar2;
  return;
}


// ===== 0089b6d4  FUN_0089b6d4 =====

void FUN_0089b6d4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009983f0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0089b6e4  FUN_0089b6e4 =====

void FUN_0089b6e4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009983f0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0089b714  FUN_0089b714 =====

void FUN_0089b714(long param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x7f0);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x7f8) = pvVar1;
    operator_delete(pvVar1);
  }
  if ((*(byte *)(param_1 + 2000) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x7e0));
  }
  if ((*(byte *)(param_1 + 0x7b8) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x7c8));
  }
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x788);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x758);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x728);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x6f8);
  FUN_0078917c(param_1 + 0x18,PTR_VTT_0099f0a8 + 8);
  return;
}


// ===== 0089b790  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0089b794  FUN_0089b794 =====

void FUN_0089b794(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00998440;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0089b7a4  FUN_0089b7a4 =====

void FUN_0089b7a4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00998440;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0089b7d4  FUN_0089b7d4 =====

void FUN_0089b7d4(long param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x7f0);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x7f8) = pvVar1;
    operator_delete(pvVar1);
  }
  if ((*(byte *)(param_1 + 2000) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x7e0));
  }
  if ((*(byte *)(param_1 + 0x7b8) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x7c8));
  }
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x788);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x758);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x728);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x6f8);
  FUN_0078917c(param_1 + 0x18,PTR_VTT_0099f0a8 + 8);
  return;
}


// ===== 0089b850  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0089b854  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_23RNSVGConcreteShadowNodeIXadsoKcL_ZNS0_29RNSVGFeCompositeComponentNameEEEENS0_21RNSVGFeCompositePropsEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENS8_14default_deleteISB_EEEERKNS0_29ComponentDescriptorParametersE =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_23RNSVGConcreteShadowNodeIXadsoKcL_ZNS0_29RNSVGFeCompositeComponentNameEEEENS0_21RNSVGFeCompositePropsEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENS8_14default_deleteISB_EEEERKNS0_29ComponentDescriptorParametersE
               (undefined8 *param_1,ComponentDescriptorParameters *param_2)

{
  byte bVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  ComponentDescriptor *this;
  long lVar5;
  long *plVar6;
  void *pvVar7;
  undefined4 local_1210 [2];
  undefined8 *local_1208;
  void *local_1200;
  void *pvStack_11f8;
  undefined8 local_11f0;
  void *pvStack_11e8;
  void *local_11e0;
  undefined8 uStack_11d8;
  void *local_11d0;
  void *pvStack_11c8;
  undefined8 uStack_11c0;
  undefined8 uStack_11b8;
  undefined *local_11b0;
  undefined8 uStack_11a8;
  undefined8 local_11a0;
  undefined8 uStack_1198;
  undefined4 local_1190 [2];
  undefined8 local_1188;
  undefined8 uStack_1180;
  undefined8 local_1178;
  undefined8 uStack_1170;
  undefined4 local_1168;
  undefined4 local_1160;
  undefined1 local_115c;
  undefined8 local_115b;
  undefined8 local_1153;
  undefined8 uStack_114b;
  undefined8 local_1143;
  undefined8 uStack_113b;
  undefined8 local_1133;
  undefined8 uStack_112b;
  undefined8 local_1123;
  undefined6 uStack_111b;
  undefined2 uStack_1115;
  undefined6 uStack_1113;
  undefined8 uStack_110d;
  undefined4 local_1105;
  undefined8 local_1101;
  undefined1 local_10f9;
  undefined1 uStack_10f8;
  undefined7 uStack_10f7;
  undefined8 uStack_10f0;
  undefined8 uStack_10e8;
  undefined8 uStack_10e0;
  undefined8 local_10d8;
  undefined8 uStack_10d0;
  undefined8 local_10c8;
  undefined8 uStack_10c0;
  undefined8 local_10b8;
  undefined8 uStack_10b0;
  undefined8 local_10a8;
  undefined8 uStack_10a0;
  undefined8 uStack_1098;
  undefined8 local_1090;
  undefined8 local_1088;
  undefined8 uStack_1080;
  undefined8 local_1078;
  undefined4 uStack_1070;
  undefined4 uStack_106c;
  undefined4 uStack_1068;
  undefined4 uStack_1064;
  undefined4 uStack_1060;
  undefined4 uStack_105c;
  undefined8 local_1058;
  undefined8 uStack_1050;
  undefined4 local_1048;
  undefined1 local_1044;
  undefined4 local_1040;
  undefined1 local_103c;
  undefined4 local_1038;
  undefined1 local_1034;
  undefined4 local_1030;
  undefined1 local_102c;
  undefined4 local_1028;
  undefined1 local_1024;
  undefined4 local_1020;
  undefined1 local_101c;
  undefined4 local_1018;
  undefined1 local_1014;
  undefined4 local_1010;
  undefined1 local_100c;
  undefined4 local_1008;
  undefined1 local_1004;
  undefined4 local_1000;
  undefined1 local_ffc;
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
  undefined1 local_fc8;
  undefined1 local_fc4;
  undefined1 local_fb8;
  undefined8 local_fb0;
  undefined8 uStack_fa8;
  undefined8 uStack_fa0;
  undefined8 uStack_f98;
  undefined8 local_f90;
  undefined8 uStack_f88;
  undefined8 uStack_f80;
  undefined1 uStack_f78;
  undefined7 local_f77;
  undefined1 uStack_f70;
  undefined8 uStack_f6f;
  undefined8 local_f64;
  undefined8 uStack_f5c;
  undefined8 uStack_f54;
  undefined8 uStack_f4c;
  undefined8 local_f44;
  undefined8 uStack_f3c;
  undefined8 uStack_f34;
  undefined8 uStack_f2c;
  undefined8 local_f24;
  undefined8 uStack_f1c;
  undefined8 uStack_f14;
  undefined5 uStack_f0c;
  undefined3 local_f07;
  undefined5 uStack_f04;
  undefined1 local_efc;
  undefined1 local_ef8;
  undefined1 local_ef4;
  undefined1 local_ef0;
  undefined1 local_eec;
  undefined1 local_ee8;
  undefined1 local_ed0;
  undefined8 local_ec8;
  undefined8 uStack_ec0;
  undefined8 local_eb8;
  undefined4 local_eb0;
  undefined1 local_eac;
  undefined4 local_eab;
  undefined1 local_ea7;
  undefined1 local_ea6;
  undefined8 local_ea0;
  undefined8 uStack_e98;
  undefined8 uStack_e90;
  undefined8 uStack_e88;
  undefined8 local_e80;
  undefined7 uStack_e78;
  undefined4 uStack_e71;
  undefined8 local_e6c;
  undefined1 local_e64;
  undefined1 local_e5c;
  undefined1 local_e58;
  undefined1 local_e50;
  undefined1 local_e4c;
  undefined1 local_e44;
  undefined1 local_e40;
  undefined1 local_e38;
  undefined1 local_e34;
  undefined1 local_e2c;
  undefined1 local_e28;
  undefined1 local_e20;
  undefined1 local_e1c;
  undefined1 local_e14;
  undefined1 local_e10;
  undefined1 local_e08;
  undefined1 local_e04;
  undefined1 local_dfc;
  undefined1 local_df8;
  undefined1 local_df0;
  undefined1 local_dec;
  undefined1 local_de4;
  undefined1 local_de0;
  undefined1 local_dd8;
  undefined1 local_dd4;
  undefined1 local_dcc;
  undefined1 local_dc8;
  undefined1 local_dc4;
  undefined1 local_dc0;
  undefined1 local_dbc;
  undefined1 local_db8;
  undefined1 local_db4;
  undefined1 local_db0;
  undefined1 local_dac;
  undefined1 local_da8;
  undefined1 local_da4;
  undefined1 local_da0;
  undefined1 local_d9c;
  undefined1 local_d98;
  undefined1 local_d94;
  undefined1 local_d90;
  undefined1 local_d8c;
  undefined1 local_d88;
  undefined1 local_d84;
  undefined1 local_d80;
  undefined1 local_d7c;
  undefined1 local_d78;
  undefined1 local_d74;
  undefined1 local_d70;
  undefined1 local_d6c;
  undefined8 local_d68;
  undefined8 uStack_d60;
  undefined8 local_d58;
  undefined8 uStack_d50;
  undefined8 uStack_d48;
  undefined8 uStack_d40;
  undefined2 local_d38;
  undefined8 local_d34;
  undefined1 local_d2c;
  undefined8 local_d28;
  undefined8 local_d20;
  undefined8 uStack_d18;
  undefined1 local_d10;
  undefined8 local_d08;
  undefined8 uStack_d00;
  undefined8 uStack_cf8;
  undefined8 uStack_cf0;
  undefined8 local_ce8;
  undefined8 uStack_ce0;
  undefined8 uStack_cd8;
  undefined8 uStack_cd0;
  undefined8 local_cc8;
  undefined8 uStack_cc0;
  undefined8 uStack_cb8;
  undefined8 uStack_cb0;
  undefined8 local_ca8;
  undefined8 uStack_ca0;
  undefined8 uStack_c98;
  undefined8 uStack_c90;
  undefined8 local_c88;
  undefined8 uStack_c80;
  undefined8 uStack_c78;
  undefined8 uStack_c70;
  undefined8 local_c68;
  undefined8 uStack_c60;
  undefined8 local_c58;
  undefined8 uStack_c50;
  undefined8 local_c48;
  undefined8 uStack_c40;
  undefined8 local_c38;
  undefined8 uStack_c30;
  undefined8 local_c28;
  undefined8 uStack_c20;
  undefined8 local_c18;
  undefined6 uStack_c10;
  undefined2 uStack_c0a;
  undefined6 uStack_c08;
  undefined1 local_c00;
  undefined1 local_bfc;
  undefined1 local_bf8;
  undefined8 local_bf4;
  undefined8 uStack_bec;
  undefined1 local_be4;
  undefined8 local_be0;
  undefined2 local_bd8;
  undefined1 local_bd6;
  undefined4 local_bd4;
  undefined1 local_bd0;
  undefined1 local_b70;
  undefined1 local_b68;
  undefined1 local_b08;
  undefined4 local_b00;
  undefined2 local_afc;
  undefined1 local_af8;
  undefined1 local_af4;
  undefined1 local_af0;
  undefined1 local_aec;
  undefined1 local_ae8;
  undefined1 local_ae4;
  undefined1 local_ae0;
  undefined1 local_adc;
  undefined1 local_ad8;
  undefined1 local_ad4;
  undefined4 local_ad0;
  undefined8 local_ac8;
  undefined4 local_aa0;
  undefined8 local_a98;
  undefined4 local_a70;
  undefined8 local_a68;
  undefined4 local_a40;
  undefined8 local_a38;
  undefined8 local_a10;
  undefined8 uStack_a08;
  undefined8 local_a00;
  undefined8 uStack_9f8;
  undefined8 local_9f0;
  undefined8 uStack_9e8;
  undefined8 local_9e0;
  undefined8 uStack_9d8;
  undefined8 uStack_9d0;
  undefined4 uStack_9c8;
  undefined4 local_9c4;
  undefined4 uStack_9c0;
  undefined8 uStack_9bc;
  undefined4 local_9b0 [2];
  undefined8 local_9a8;
  undefined8 uStack_9a0;
  undefined8 local_998;
  undefined8 local_990;
  undefined8 uStack_988;
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
  pvStack_11e8 = (void *)0x0;
  local_11f0 = 0;
  uStack_11d8 = 0;
  local_11e0 = (void *)0x0;
  pvStack_11c8 = (void *)0x0;
  local_11d0 = (void *)0x0;
  uStack_11b8 = 0;
  uStack_11c0 = 0;
  pvStack_11f8 = (void *)0x0;
  local_1200 = (void *)0x0;
                    /* try { // try from 0089b8a8 to 0089b8b3 has its CatchHandler @ 0089bf18 */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_1200);
  local_f8 = 0;
  *(undefined ***)this = &PTR_FUN_00998490;
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
                    /* try { // try from 0089b920 to 0089b933 has its CatchHandler @ 0089bf48 */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1b0);
  local_100 = CONCAT44(local_100._4_4_,0x3f800000);
  local_1210[0] = 0xffffffff;
  uStack_108 = 0;
  local_110 = (void *)0x0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_1208 = &local_1b0;
  facebook::react::RawProps::facebook::react::RawProps::parse(&local_f8,this + 0x38);
  memset(local_1190,0,0x7e0);
  local_9b0[0] = 5;
  local_998 = 0;
  local_11b0 = *(undefined **)(PTR_VTT_0099f0c0 + 0x20);
  local_1190[0] = 5;
  uStack_1198 = 0;
  local_11a0 = 0;
  uStack_11a8 = 0;
  local_990 = 0;
  uStack_988 = 0x3f800000;
  uStack_9a0 = 0;
  local_9a8 = 0;
  uStack_1180 = 0;
  local_1188 = 0;
  uStack_1170 = 0;
  local_1178 = 0;
  local_1168 = 0x3f800000;
  folly::dynamic::folly::dynamic::destroy(local_9b0);
  local_115c = 0;
  local_1101 = 0;
  uStack_c20 = _UNK_00488920;
  local_c28 = _DAT_00488918;
  local_115b = _s__00375408;
  uStack_d18 = _UNK_00371598;
  local_d20 = _DAT_00371590;
  uStack_c30 = _UNK_00488910;
  local_c38 = _DAT_00488908;
  local_1044 = 0;
  uStack_c40 = _UNK_00488900;
  local_c48 = _DAT_004888f8;
  uStack_c50 = _UNK_004888f0;
  local_c58 = _DAT_004888e8;
  uStack_c08 = 0;
  local_103c = 0;
  uStack_1070 = 0;
  local_1078 = 0;
  uStack_105c = 0;
  uStack_1080 = 0;
  local_1088 = 0;
  uStack_c10 = 0;
  uStack_c0a = 0;
  local_c18 = 0;
  local_1160 = 0x10410710;
  local_1105 = 0x40004;
  uStack_1064 = 0;
  uStack_1060 = 0;
  uStack_106c = 0;
  uStack_1068 = 0;
  uStack_1050 = 0;
  local_1058 = 0;
  local_1048 = 0x7fc00000;
  local_1040 = 0x7fc00000;
  local_1038 = 0x7fc00000;
  local_1030 = 0x7fc00000;
  local_1028 = 0x7fc00000;
  local_1020 = 0x7fc00000;
  local_1018 = 0x7fc00000;
  local_1010 = 0x7fc00000;
  local_1008 = 0x7fc00000;
  local_1000 = 0x7fc00000;
  local_ff8 = 0x7fc00000;
  local_ff0 = 0x7fc00000;
  local_fe8 = 0x7fc00000;
  local_fe0 = 0x7fc00000;
  local_fd8 = 0x7fc00000;
  local_fd0 = 0x7fc00000;
  uStack_f6f = 0;
  uStack_f70 = 0;
  uStack_f5c = 0;
  local_f64 = 0;
  uStack_f4c = 0;
  uStack_f54 = 0;
  uStack_f3c = 0;
  local_f44 = 0;
  uStack_f2c = 0;
  uStack_f34 = 0;
  uStack_f1c = 0;
  local_f24 = 0;
  uStack_f0c = 0;
  uStack_f14 = 0;
  local_f07 = 0;
  uStack_f04 = 0;
  local_eac = 1;
  local_eab = 0;
  local_ea6 = 0x23;
  local_e6c = 0x3f800000;
  uStack_d50 = 0;
  local_d58 = 0;
  uStack_d40 = 0;
  uStack_d48 = 0;
  uStack_d60 = 0;
  local_d68 = 0;
  local_d34 = 0;
  uStack_d00 = 0;
  local_d08 = 0;
  uStack_cf0 = 0;
  uStack_cf8 = 0;
  uStack_ce0 = 0;
  local_ce8 = 0;
  uStack_cd0 = 0;
  uStack_cd8 = 0;
  uStack_cc0 = 0;
  local_cc8 = 0;
  uStack_cb0 = 0;
  uStack_cb8 = 0;
  uStack_ca0 = 0;
  local_ca8 = 0;
  uStack_c90 = 0;
  uStack_c98 = 0;
  uStack_c80 = 0;
  local_c88 = 0;
  uStack_c70 = 0;
  uStack_c78 = 0;
  uStack_c60 = 0;
  local_c68 = 0;
  uStack_10f7 = 0;
  uStack_114b = 0;
  local_1153 = 0;
  uStack_113b = 0;
  local_1143 = 0;
  uStack_112b = 0;
  local_1133 = 0;
  uStack_111b = 0;
  local_1123 = 0;
  uStack_110d = 0;
  uStack_1115 = 0;
  uStack_1113 = 0;
  local_10f9 = 0;
  uStack_10f8 = 0;
  uStack_10e8 = 0;
  uStack_10f0 = 0;
  local_10d8 = 0;
  uStack_10e0 = 0;
  local_10c8 = 0;
  uStack_10d0 = 0;
  local_10b8 = 0;
  uStack_10c0 = 0;
  local_10a8 = 0;
  uStack_10b0 = 0;
  uStack_1098 = 0;
  uStack_10a0 = 0;
  local_1090 = 0;
  local_1034 = 0;
  local_102c = 0;
  local_1024 = 0;
  local_101c = 0;
  local_1014 = 0;
  local_100c = 0;
  local_1004 = 0;
  local_ffc = 0;
  local_ff4 = 0;
  local_fec = 0;
  local_fe4 = 0;
  local_fdc = 0;
  local_fd4 = 0;
  local_fcc = 0;
  local_fc8 = 0;
  local_fc4 = 0;
  local_fb8 = 0;
  local_efc = 0;
  local_ef8 = 0;
  local_ef4 = 0;
  local_ef0 = 0;
  local_eec = 0;
  local_ee8 = 0;
  local_ed0 = 0;
  uStack_fa8 = 0;
  local_fb0 = 0;
  uStack_f98 = 0;
  uStack_fa0 = 0;
  uStack_f88 = 0;
  local_f90 = 0;
  uStack_f78 = 0;
  local_f77 = 0;
  uStack_f80 = 0;
  uStack_ec0 = 0;
  local_ec8 = 0;
  local_eb8 = 0;
  local_eb0 = 0;
  local_ea7 = 0;
  uStack_e98 = 0;
  local_ea0 = 0;
  uStack_e88 = 0;
  uStack_e90 = 0;
  uStack_e78 = 0;
  uStack_e71 = 0;
  local_e80 = 0;
  local_e64 = 0;
  local_e5c = 0;
  local_e58 = 0;
  local_e50 = 0;
  local_e4c = 0;
  local_e44 = 0;
  local_e40 = 0;
  local_e38 = 0;
  local_e34 = 0;
  local_e2c = 0;
  local_e28 = 0;
  local_e20 = 0;
  local_e1c = 0;
  local_e14 = 0;
  local_e10 = 0;
  local_e08 = 0;
  local_e04 = 0;
  local_dfc = 0;
  local_df8 = 0;
  local_df0 = 0;
  local_dec = 0;
  local_de4 = 0;
  local_de0 = 0;
  local_dd8 = 0;
  local_dd4 = 0;
  local_dcc = 0;
  local_dc8 = 0;
  local_dc4 = 0;
  local_dc0 = 0;
  local_dbc = 0;
  local_db8 = 0;
  local_db4 = 0;
  local_db0 = 0;
  local_dac = 0;
  local_da8 = 0;
  local_da4 = 0;
  local_da0 = 0;
  local_d9c = 0;
  local_d98 = 0;
  local_d94 = 0;
  local_d90 = 0;
  local_d8c = 0;
  local_d88 = 0;
  local_d84 = 0;
  local_d80 = 0;
  local_d7c = 0;
  local_d78 = 0;
  local_d74 = 0;
  local_d70 = 0;
  local_d6c = 0;
  local_d28 = 0;
  local_d38 = 0;
  local_d2c = 0;
  local_d10 = 0;
  local_c00 = 0;
  local_bfc = 0;
  local_bf8 = 0;
  local_be0 = 0;
  uStack_bec = 0;
  local_bf4 = 0;
  local_be4 = 0;
  local_bd8 = 0x101;
  local_bd6 = 0;
  local_bd4 = 0;
  local_bd0 = 0;
  local_b70 = 0;
  local_b68 = 0;
  local_b08 = 0;
  local_af8 = 0;
  local_af4 = 0;
  local_af0 = 0;
  local_aec = 0;
  local_ae8 = 0;
  local_ae4 = 0;
  local_ae0 = 0;
  local_adc = 0;
  local_ad8 = 0;
  local_ad4 = 0;
  local_afc = 0;
  local_b00 = 0;
  local_11b0 = PTR_vtable_0099f0b8 + 0x20;
  local_ad0 = 0;
  local_ac8 = 0;
  local_aa0 = 0;
  local_a98 = 0;
  local_a70 = 0;
  local_a68 = 0;
  local_a40 = 0;
  local_a38 = 0;
  uStack_9bc = 0;
  uStack_9c0 = 0;
  uStack_a08 = 0;
  local_a10 = 0;
  uStack_9f8 = 0;
  local_a00 = 0;
  uStack_9e8 = 0;
  local_9f0 = 0;
  uStack_9d8 = 0;
  local_9e0 = 0;
  uStack_9c8 = 0;
  local_9c4 = 0;
  uStack_9d0 = 0;
                    /* try { // try from 0089bd5c to 0089bd6f has its CatchHandler @ 0089bf48 */
  facebook::react::RNSVGFeCompositeProps::RNSVGFeCompositeProps
            ((RNSVGFeCompositeProps *)local_9b0,(PropsParserContext *)local_1210,
             (RNSVGFeCompositeProps *)&local_11b0,(RawProps *)&local_f8);
  FUN_0089ca0c(local_9b0);
  FUN_0089ca0c(&local_11b0);
  facebook::react::RawPropsParser::facebook::react::RawPropsParser::postPrepare(this + 0x38);
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
                    /* try { // try from 0089be74 to 0089be7f has its CatchHandler @ 0089bf4c */
        (*(code *)(&PTR_FUN_0098f088)[*(uint *)((long)pvVar3 + -8)])
                  (&local_11b0,(void *)((long)pvVar3 + -0x38));
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
  facebook::jsi::Value::~Value((Value *)local_e0);
  if (local_11d0 != (void *)0x0) {
    pvStack_11c8 = local_11d0;
    operator_delete(local_11d0);
  }
  if (pvStack_11e8 != (void *)0x0) {
    local_11e0 = pvStack_11e8;
    operator_delete(pvStack_11e8);
  }
  if (local_1200 != (void *)0x0) {
    pvStack_11f8 = local_1200;
    operator_delete(local_1200);
  }
  *param_1 = this;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0089bf50  FUN_0089bf50 =====

void FUN_0089bf50(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 0089bf74  FUN_0089bf74 =====

undefined * FUN_0089bf74(void)

{
  return PTR_RNSVGFeCompositeComponentName_0099f0b0;
}


// ===== 0089bf80  FUN_0089bf80 =====

undefined * FUN_0089bf80(void)

{
  return PTR_RNSVGFeCompositeComponentName_0099f0b0;
}


// ===== 0089bf8c  FUN_0089bf8c =====

undefined8 FUN_0089bf8c(void)

{
  return 0x61;
}


// ===== 0089bf94  FUN_0089bf94 =====

void FUN_0089bf94(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  RNSVGLayoutableShadowNode *pRVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  
  lVar2 = tpidr_el0;
  lVar6 = *(long *)(lVar2 + 0x28);
  uVar3 = (**(code **)(*param_2 + 0x20))();
  puVar4 = (undefined8 *)operator_new(0x400);
  pRVar1 = (RNSVGLayoutableShadowNode *)(puVar4 + 3);
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_00998520;
                    /* try { // try from 0089c000 to 0089c00f has its CatchHandler @ 0089c074 */
  facebook::react::RNSVGLayoutableShadowNode::RNSVGLayoutableShadowNode
            (pRVar1,param_3,param_4,uVar3);
  lVar5 = *param_2;
  puVar4[3] = &PTR_FUN_00998570;
                    /* try { // try from 0089c028 to 0089c033 has its CatchHandler @ 0089c064 */
  (**(code **)(lVar5 + 0x60))(param_2,pRVar1);
  *param_1 = pRVar1;
  param_1[1] = puVar4;
  if (*(long *)(lVar2 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0089c0a4  FUN_0089c0a4 =====

void FUN_0089c0a4(undefined8 *param_1,long *param_2,ShadowNode *param_3,ShadowNodeFragment *param_4)

{
  RNSVGLayoutableShadowNode *pRVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  RNSVGLayoutableShadowNode *local_78;
  long *local_70;
  RNSVGLayoutableShadowNode *local_68;
  long *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  plVar3 = (long *)operator_new(0x400);
  pRVar1 = (RNSVGLayoutableShadowNode *)(plVar3 + 3);
  plVar3[1] = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_00998520;
                    /* try { // try from 0089c0fc to 0089c10b has its CatchHandler @ 0089c1d8 */
  facebook::react::RNSVGLayoutableShadowNode::RNSVGLayoutableShadowNode(pRVar1,param_3,param_4);
  plVar3[3] = (long)&PTR_FUN_00998570;
  local_68 = pRVar1;
  local_60 = plVar3;
                    /* try { // try from 0089c11c to 0089c12b has its CatchHandler @ 0089c1f0 */
  facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::
  completeClone(pRVar1,param_3,param_4);
  local_78 = pRVar1;
  local_70 = plVar3;
  FUN_00757d00(1,plVar3 + 1);
                    /* try { // try from 0089c13c to 0089c14b has its CatchHandler @ 0089c1c8 */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_78);
  plVar3 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar4 = FUN_00757990(0xffffffffffffffff,local_70 + 1), lVar4 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pRVar1 = local_68;
                    /* try { // try from 0089c188 to 0089c193 has its CatchHandler @ 0089c1f0 */
  (**(code **)(*param_2 + 0x60))(param_2,local_68);
  *param_1 = pRVar1;
  param_1[1] = local_60;
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0089c218  FUN_0089c218 =====

void FUN_0089c218(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0089c228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 0089c22c  FUN_0089c22c =====

void FUN_0089c22c(undefined8 *param_1,long param_2,PropsParserContext *param_3,long *param_4,
                 RawProps *param_5)

{
  RNSVGFeCompositeProps *this;
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
  RNSVGFeCompositeProps *pRVar12;
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
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29RNSVGFeCompositeComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_21RNSVGFeCompositePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebc0
         & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29RNSVGFeCompositeComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_21RNSVGFeCompositePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebc0
                                   ), iVar6 != 0)) {
                    /* try { // try from 0089c660 to 0089c663 has its CatchHandler @ 0089c690 */
      FUN_0089cd34();
      __cxa_atexit(FUN_0089cce4,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29RNSVGFeCompositeComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_21RNSVGFeCompositePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebb8
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29RNSVGFeCompositeComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_21RNSVGFeCompositePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebc0
                         );
    }
    lVar11 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29RNSVGFeCompositeComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_21RNSVGFeCompositePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebb8
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29RNSVGFeCompositeComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_21RNSVGFeCompositePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebb8
    ;
    param_1[1] = lVar11;
    if (lVar11 != 0) {
      FUN_00757d00(1,lVar11 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    pRVar12 = (RNSVGFeCompositeProps *)*param_4;
    if (pRVar12 == (RNSVGFeCompositeProps *)0x0) {
      if (((*
            PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29RNSVGFeCompositeComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_21RNSVGFeCompositePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebc0
           & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29RNSVGFeCompositeComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_21RNSVGFeCompositePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebc0
                                     ), iVar6 != 0)) {
                    /* try { // try from 0089c5e0 to 0089c5e3 has its CatchHandler @ 0089c6a8 */
        FUN_0089cd34();
        __cxa_atexit(FUN_0089cce4,
                     PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29RNSVGFeCompositeComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_21RNSVGFeCompositePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebb8
                     ,&PTR_LOOP_008d5d30);
        __cxa_guard_release(
                           PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29RNSVGFeCompositeComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_21RNSVGFeCompositePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebc0
                           );
      }
      pRVar12 = *(RNSVGFeCompositeProps **)
                 PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29RNSVGFeCompositeComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_21RNSVGFeCompositePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebb8
      ;
    }
    plVar8 = (long *)operator_new(0x818);
    this = (RNSVGFeCompositeProps *)(plVar8 + 3);
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = (long)&PTR_FUN_00998688;
                    /* try { // try from 0089c30c to 0089c31f has its CatchHandler @ 0089c71c */
    facebook::react::RNSVGFeCompositeProps::RNSVGFeCompositeProps(this,param_3,pRVar12,param_5);
                    /* try { // try from 0089c324 to 0089c337 has its CatchHandler @ 0089c734 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if ((((uVar7 & 1) == 0) ||
        (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar7 & 1) == 0)) ||
       (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
                enablePropsUpdateReconciliationAndroid(), (uVar7 & 1) == 0)) {
LAB_0089c360:
      FUN_00757d00(1,plVar8 + 1);
      if (*param_4 == 0) {
        if (((*
              PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29RNSVGFeCompositeComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_21RNSVGFeCompositePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebc0
             & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(
                                       PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29RNSVGFeCompositeComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_21RNSVGFeCompositePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebc0
                                       ), iVar6 != 0)) {
                    /* try { // try from 0089c620 to 0089c623 has its CatchHandler @ 0089c694 */
          FUN_0089cd34();
          __cxa_atexit(FUN_0089cce4,
                       PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29RNSVGFeCompositeComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_21RNSVGFeCompositePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebb8
                       ,&PTR_LOOP_008d5d30);
          __cxa_guard_release(
                             PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29RNSVGFeCompositeComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_21RNSVGFeCompositePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebc0
                             );
        }
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 0089c3c8 to 0089c3db has its CatchHandler @ 0089c6c0 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*(undefined8 *)
                         PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29RNSVGFeCompositeComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_21RNSVGFeCompositePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebb8
                   ,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
LAB_0089c414:
          (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
        }
        else if (local_b0 != (dynamic *)0x0) {
          lVar11 = 5;
          pdVar10 = local_b0;
          goto LAB_0089c414;
        }
        if (plVar8 != (long *)0x0) goto LAB_0089c428;
      }
      else {
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 0089c37c to 0089c38f has its CatchHandler @ 0089c6e8 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*param_4,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
        }
        else {
          if (local_b0 == (dynamic *)0x0) goto LAB_0089c428;
          lVar11 = 5;
          pdVar10 = local_b0;
        }
        (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
LAB_0089c428:
        lVar11 = FUN_00757990(0xffffffffffffffff,plVar8 + 1);
        if (lVar11 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 0089c344 to 0089c34f has its CatchHandler @ 0089c6bc */
      pcVar9 = (char *)(**(code **)(*(long *)this + 0x10))(this);
      iVar6 = strcmp(PTR_RNSVGFeCompositeComponentName_0099f0b0,pcVar9);
      if (iVar6 != 0) goto LAB_0089c360;
      bVar3 = false;
    }
                    /* try { // try from 0089c454 to 0089c457 has its CatchHandler @ 0089c734 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar7 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 0089c464 to 0089c47f has its CatchHandler @ 0089c6e4 */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(plVar8 + 7));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 0089c5c0 to 0089c5cf has its CatchHandler @ 0089c6dc */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_0089c780;
      }
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (*(int *)(plVar4 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 0089c5a0 to 0089c5af has its CatchHandler @ 0089c740 */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_0089c780;
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
                    /* try { // try from 0089c500 to 0089c50b has its CatchHandler @ 0089c748 */
        folly::dynamic::dynamic(local_d0,(dynamic *)(plVar4 + 8));
        local_a0 = 0;
                    /* try { // try from 0089c510 to 0089c527 has its CatchHandler @ 0089c74c */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (this,param_3,uVar1,pcVar9,local_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 0089c538 to 0089c543 has its CatchHandler @ 0089c73c */
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
LAB_0089c780:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0089c784  FUN_0089c784 =====

void FUN_0089c784(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 0089c78c  FUN_0089c78c =====

void FUN_0089c78c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 0089c794  FUN_0089c794 =====

void FUN_0089c794(undefined8 *param_1,long param_2,long param_3)

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
                    /* try { // try from 0089c7d8 to 0089c7df has its CatchHandler @ 0089c9e0 */
  plVar6 = (long *)operator_new(0x68);
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&PTR_FUN_00992a08;
                    /* try { // try from 0089c7f8 to 0089c803 has its CatchHandler @ 0089c9c8 */
  local_78 = FUN_008707fc(plVar6 + 3,&local_58,param_2 + 8);
  local_70 = plVar6;
  if ((local_50 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,local_50 + 1), lVar7 == 0)) {
    (**(code **)(*local_50 + 0x10))(local_50);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 0089c838 to 0089c83f has its CatchHandler @ 0089c9b8 */
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
                    /* try { // try from 0089c88c to 0089c8a3 has its CatchHandler @ 0089c988 */
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
                    /* try { // try from 0089c8f8 to 0089c903 has its CatchHandler @ 0089c968 */
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


// ===== 0089ca08  FUN_0089ca08 =====

void FUN_0089ca08(void)

{
  return;
}


// ===== 0089ca0c  FUN_0089ca0c =====

void FUN_0089ca0c(long param_1)

{
  byte bVar1;
  
  if ((*(byte *)(param_1 + 2000) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x7b8);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x7e0));
    bVar1 = *(byte *)(param_1 + 0x7b8);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x7a0);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x7c8));
    bVar1 = *(byte *)(param_1 + 0x7a0);
  }
  if ((bVar1 & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x7b0));
  }
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x770);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x740);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x710);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x6e0);
  FUN_0078917c(param_1,PTR_VTT_0099f0c0 + 8);
  return;
}


// ===== 0089ca9c  FUN_0089ca9c =====

void FUN_0089ca9c(long param_1)

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


// ===== 0089caec  FUN_0089caec =====

void FUN_0089caec(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00998520;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0089cafc  FUN_0089cafc =====

void FUN_0089cafc(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00998520;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0089cb2c  FUN_0089cb2c =====

void FUN_0089cb2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0089cb34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 0089cb38  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0089cb3c  FUN_0089cb3c =====

void FUN_0089cb3c(long *param_1)

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


// ===== 0089cbfc  FUN_0089cbfc =====

void FUN_0089cbfc(long param_1)

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


// ===== 0089cc64  FUN_0089cc64 =====

bool FUN_0089cc64(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 0089cc7c  FUN_0089cc7c =====

bool FUN_0089cc7c(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 0089cc94  FUN_0089cc94 =====

void FUN_0089cc94(long param_1)

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


// ===== 0089cce4  FUN_0089cce4 =====

void FUN_0089cce4(long param_1)

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


// ===== 0089cd34  FUN_0089cd34 =====

void FUN_0089cd34(void)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x818);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_00998638;
  memset(__s,0,0x800);
                    /* try { // try from 0089cd70 to 0089cd83 has its CatchHandler @ 0089ce34 */
  FUN_00788b10(__s,PTR_VTT_0099f0c0 + 0x10);
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
  puVar1 = PTR_vtable_0099f0b8;
  *(undefined4 *)(puVar2 + 0xd9) = 0;
  *(undefined2 *)((long)puVar2 + 0x6cc) = 0;
  *(undefined4 *)(puVar2 + 0xdf) = 0;
  puVar2[3] = puVar1 + 0x20;
  puVar2[0xe0] = 0;
  *(undefined4 *)(puVar2 + 0xe5) = 0;
  puVar2[0xe6] = 0;
  *(undefined4 *)(puVar2 + 0xeb) = 0;
  puVar2[0xec] = 0;
  *(undefined4 *)(puVar2 + 0xf1) = 0;
  puVar2[0xf2] = 0;
  puVar2[0x100] = 0;
  puVar2[0xff] = 0;
  puVar2[0xfe] = 0;
  puVar2[0xfd] = 0;
  puVar2[0xfc] = 0;
  puVar2[0xfb] = 0;
  puVar2[0xfa] = 0;
  puVar2[0xf9] = 0;
  puVar2[0xf8] = 0;
  puVar2[0xf7] = 0;
  puVar1 = 
  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_29RNSVGFeCompositeComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_21RNSVGFeCompositePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebb8
  ;
  *(undefined8 *)((long)puVar2 + 0x80c) = 0;
  *(undefined8 *)((long)puVar2 + 0x804) = 0;
  *(undefined8 **)puVar1 = __s;
  *(undefined8 **)(puVar1 + 8) = puVar2;
  return;
}


// ===== 0089ce50  FUN_0089ce50 =====

void FUN_0089ce50(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00998638;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0089ce60  FUN_0089ce60 =====

void FUN_0089ce60(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00998638;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0089ce90  FUN_0089ce90 =====

void FUN_0089ce90(long param_1)

{
  FUN_0089ca0c(param_1 + 0x18);
  return;
}


// ===== 0089ce98  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0089ce9c  FUN_0089ce9c =====

void FUN_0089ce9c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00998688;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0089ceac  FUN_0089ceac =====

void FUN_0089ceac(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00998688;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0089cedc  FUN_0089cedc =====

void FUN_0089cedc(long param_1)

{
  FUN_0089ca0c(param_1 + 0x18);
  return;
}


// ===== 0089cee4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0089cee8  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_23RNSVGConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGFeFloodComponentNameEEEENS0_17RNSVGFeFloodPropsEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENS8_14default_deleteISB_EEEERKNS0_29ComponentDescriptorParametersE =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_23RNSVGConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGFeFloodComponentNameEEEENS0_17RNSVGFeFloodPropsEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENS8_14default_deleteISB_EEEERKNS0_29ComponentDescriptorParametersE
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
  undefined4 local_1200 [2];
  undefined8 *local_11f8;
  void *local_11f0;
  void *pvStack_11e8;
  undefined8 local_11e0;
  void *pvStack_11d8;
  void *local_11d0;
  undefined8 uStack_11c8;
  void *local_11c0;
  void *pvStack_11b8;
  undefined8 uStack_11b0;
  undefined8 uStack_11a8;
  undefined *local_11a0;
  undefined8 uStack_1198;
  undefined8 local_1190;
  undefined8 uStack_1188;
  undefined4 local_1180 [2];
  undefined8 local_1178;
  undefined8 uStack_1170;
  undefined8 local_1168;
  undefined8 uStack_1160;
  undefined4 local_1158;
  undefined4 local_1150;
  undefined1 local_114c;
  undefined8 local_114b;
  undefined8 local_1143;
  undefined8 uStack_113b;
  undefined8 local_1133;
  undefined8 uStack_112b;
  undefined8 local_1123;
  undefined8 uStack_111b;
  undefined8 local_1113;
  undefined6 uStack_110b;
  undefined2 uStack_1105;
  undefined6 uStack_1103;
  undefined8 uStack_10fd;
  undefined4 local_10f5;
  undefined8 local_10f1;
  undefined1 local_10e9;
  undefined1 uStack_10e8;
  undefined7 uStack_10e7;
  undefined8 uStack_10e0;
  undefined8 uStack_10d8;
  undefined8 uStack_10d0;
  undefined8 local_10c8;
  undefined8 uStack_10c0;
  undefined8 local_10b8;
  undefined8 uStack_10b0;
  undefined8 local_10a8;
  undefined8 uStack_10a0;
  undefined8 local_1098;
  undefined8 uStack_1090;
  undefined8 uStack_1088;
  undefined8 local_1080;
  undefined8 local_1078;
  undefined8 uStack_1070;
  undefined8 local_1068;
  undefined4 uStack_1060;
  undefined4 uStack_105c;
  undefined4 uStack_1058;
  undefined4 uStack_1054;
  undefined4 uStack_1050;
  undefined4 uStack_104c;
  undefined8 local_1048;
  undefined8 uStack_1040;
  undefined4 local_1038;
  undefined1 local_1034;
  undefined4 local_1030;
  undefined1 local_102c;
  undefined4 local_1028;
  undefined1 local_1024;
  undefined4 local_1020;
  undefined1 local_101c;
  undefined4 local_1018;
  undefined1 local_1014;
  undefined4 local_1010;
  undefined1 local_100c;
  undefined4 local_1008;
  undefined1 local_1004;
  undefined4 local_1000;
  undefined1 local_ffc;
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
  undefined1 local_fb8;
  undefined1 local_fb4;
  undefined1 local_fa8;
  undefined8 local_fa0;
  undefined8 uStack_f98;
  undefined8 uStack_f90;
  undefined8 uStack_f88;
  undefined8 local_f80;
  undefined8 uStack_f78;
  undefined8 uStack_f70;
  undefined1 uStack_f68;
  undefined7 local_f67;
  undefined1 uStack_f60;
  undefined8 uStack_f5f;
  undefined8 local_f54;
  undefined8 uStack_f4c;
  undefined8 uStack_f44;
  undefined8 uStack_f3c;
  undefined8 local_f34;
  undefined8 uStack_f2c;
  undefined8 uStack_f24;
  undefined8 uStack_f1c;
  undefined8 local_f14;
  undefined8 uStack_f0c;
  undefined8 uStack_f04;
  undefined5 uStack_efc;
  undefined3 local_ef7;
  undefined5 uStack_ef4;
  undefined1 local_eec;
  undefined1 local_ee8;
  undefined1 local_ee4;
  undefined1 local_ee0;
  undefined1 local_edc;
  undefined1 local_ed8;
  undefined1 local_ec0;
  undefined8 local_eb8;
  undefined8 uStack_eb0;
  undefined8 local_ea8;
  undefined4 local_ea0;
  undefined1 local_e9c;
  undefined4 local_e9b;
  undefined1 local_e97;
  undefined1 local_e96;
  undefined8 local_e90;
  undefined8 uStack_e88;
  undefined8 uStack_e80;
  undefined8 uStack_e78;
  undefined8 local_e70;
  undefined7 uStack_e68;
  undefined4 uStack_e61;
  undefined8 local_e5c;
  undefined1 local_e54;
  undefined1 local_e4c;
  undefined1 local_e48;
  undefined1 local_e40;
  undefined1 local_e3c;
  undefined1 local_e34;
  undefined1 local_e30;
  undefined1 local_e28;
  undefined1 local_e24;
  undefined1 local_e1c;
  undefined1 local_e18;
  undefined1 local_e10;
  undefined1 local_e0c;
  undefined1 local_e04;
  undefined1 local_e00;
  undefined1 local_df8;
  undefined1 local_df4;
  undefined1 local_dec;
  undefined1 local_de8;
  undefined1 local_de0;
  undefined1 local_ddc;
  undefined1 local_dd4;
  undefined1 local_dd0;
  undefined1 local_dc8;
  undefined1 local_dc4;
  undefined1 local_dbc;
  undefined1 local_db8;
  undefined1 local_db4;
  undefined1 local_db0;
  undefined1 local_dac;
  undefined1 local_da8;
  undefined1 local_da4;
  undefined1 local_da0;
  undefined1 local_d9c;
  undefined1 local_d98;
  undefined1 local_d94;
  undefined1 local_d90;
  undefined1 local_d8c;
  undefined1 local_d88;
  undefined1 local_d84;
  undefined1 local_d80;
  undefined1 local_d7c;
  undefined1 local_d78;
  undefined1 local_d74;
  undefined1 local_d70;
  undefined1 local_d6c;
  undefined1 local_d68;
  undefined1 local_d64;
  undefined1 local_d60;
  undefined1 local_d5c;
  undefined8 local_d58;
  undefined8 uStack_d50;
  undefined8 local_d48;
  undefined8 uStack_d40;
  undefined8 uStack_d38;
  undefined8 uStack_d30;
  undefined2 local_d28;
  undefined8 local_d24;
  undefined1 local_d1c;
  undefined8 local_d18;
  undefined8 local_d10;
  undefined8 uStack_d08;
  undefined1 local_d00;
  undefined8 local_cf8;
  undefined8 uStack_cf0;
  undefined8 uStack_ce8;
  undefined8 uStack_ce0;
  undefined8 local_cd8;
  undefined8 uStack_cd0;
  undefined8 uStack_cc8;
  undefined8 uStack_cc0;
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
  undefined8 local_c48;
  undefined8 uStack_c40;
  undefined8 local_c38;
  undefined8 uStack_c30;
  undefined8 local_c28;
  undefined8 uStack_c20;
  undefined8 local_c18;
  undefined8 uStack_c10;
  undefined8 local_c08;
  undefined6 uStack_c00;
  undefined2 uStack_bfa;
  undefined6 uStack_bf8;
  undefined1 local_bf0;
  undefined1 local_bec;
  undefined1 local_be8;
  undefined8 local_be4;
  undefined8 uStack_bdc;
  undefined1 local_bd4;
  undefined8 local_bd0;
  undefined2 local_bc8;
  undefined1 local_bc6;
  undefined4 local_bc4;
  undefined1 local_bc0;
  undefined1 local_b60;
  undefined1 local_b58;
  undefined1 local_af8;
  undefined4 local_af0;
  undefined2 local_aec;
  undefined1 local_ae8;
  undefined1 local_ae4;
  undefined1 local_ae0;
  undefined1 local_adc;
  undefined1 local_ad8;
  undefined1 local_ad4;
  undefined1 local_ad0;
  undefined1 local_acc;
  undefined1 local_ac8;
  undefined1 local_ac4;
  undefined4 local_ac0 [2];
  undefined8 local_ab8;
  undefined4 local_a90 [2];
  undefined8 local_a88;
  undefined4 local_a60 [2];
  undefined8 local_a58;
  undefined4 local_a30 [2];
  undefined8 local_a28;
  ulong local_a00;
  undefined8 uStack_9f8;
  void *local_9f0;
  undefined4 local_9e8 [2];
  undefined8 local_9e0;
  undefined4 local_9b8;
  undefined4 local_9b0 [2];
  undefined8 local_9a8;
  undefined8 uStack_9a0;
  undefined8 local_998;
  undefined8 local_990;
  undefined8 uStack_988;
  undefined1 auStack_2d0 [48];
  undefined1 auStack_2a0 [48];
  undefined1 auStack_270 [48];
  undefined1 auStack_240 [48];
  byte local_210;
  void *local_200;
  undefined1 auStack_1f8 [56];
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
  void *local_130;
  undefined8 uStack_128;
  void *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined4 local_f0 [4];
  undefined4 local_e0 [2];
  undefined8 local_d8;
  undefined4 local_b0;
  void *local_a8;
  void *pvStack_a0;
  undefined8 uStack_98;
  void *local_90;
  void *local_88;
  undefined8 uStack_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  this = (ComponentDescriptor *)operator_new(0x88);
  pvStack_11d8 = (void *)0x0;
  local_11e0 = 0;
  uStack_11c8 = 0;
  local_11d0 = (void *)0x0;
  pvStack_11b8 = (void *)0x0;
  local_11c0 = (void *)0x0;
  uStack_11a8 = 0;
  uStack_11b0 = 0;
  pvStack_11e8 = (void *)0x0;
  local_11f0 = (void *)0x0;
                    /* try { // try from 0089cf3c to 0089cf47 has its CatchHandler @ 0089d628 */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_11f0);
  local_108 = 0;
  *(undefined ***)this = &PTR_FUN_009986d8;
  local_100 = 0;
  local_f8 = 0;
  local_f0[0] = 0;
  local_e0[0] = 0;
  local_d8 = 0;
  local_b0 = 0;
  pvStack_a0 = (void *)0x0;
  local_a8 = (void *)0x0;
  local_90 = (void *)0x0;
  uStack_98 = 0;
  uStack_80 = 0;
  local_88 = (void *)0x0;
  local_110 = 0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  uStack_128 = 0;
  local_130 = (void *)0x0;
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
  uStack_1b8 = 0;
  local_1c0 = 0;
                    /* try { // try from 0089cfb4 to 0089cfc7 has its CatchHandler @ 0089d658 */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1c0);
  local_110 = CONCAT44(local_110._4_4_,0x3f800000);
  local_1200[0] = 0xffffffff;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  uStack_128 = 0;
  local_130 = (void *)0x0;
  local_11f8 = &local_1c0;
  facebook::react::RawProps::facebook::react::RawProps::parse(&local_108,this + 0x38);
  memset(local_1180,0,2000);
  puVar5 = PTR_VTT_0099f0d8;
  local_9b0[0] = 5;
  local_998 = 0;
  local_11a0 = *(undefined **)(PTR_VTT_0099f0d8 + 0x20);
  local_1180[0] = 5;
  uStack_1188 = 0;
  local_1190 = 0;
  local_990 = 0;
  uStack_1198 = 0;
  uStack_988 = 0x3f800000;
  uStack_9a0 = 0;
  local_9a8 = 0;
  uStack_1170 = 0;
  local_1178 = 0;
  uStack_1160 = 0;
  local_1168 = 0;
  local_1158 = 0x3f800000;
  folly::dynamic::folly::dynamic::destroy(local_9b0);
  local_114c = 0;
  local_10f1 = 0;
  uStack_c10 = _UNK_00488920;
  local_c18 = _DAT_00488918;
  local_114b = _s__00375408;
  uStack_d08 = _UNK_00371598;
  local_d10 = _DAT_00371590;
  uStack_c20 = _UNK_00488910;
  local_c28 = _DAT_00488908;
  local_1034 = 0;
  uStack_c30 = _UNK_00488900;
  local_c38 = _DAT_004888f8;
  uStack_c40 = _UNK_004888f0;
  local_c48 = _DAT_004888e8;
  uStack_bf8 = 0;
  local_102c = 0;
  uStack_1060 = 0;
  local_1068 = 0;
  uStack_104c = 0;
  uStack_1070 = 0;
  local_1078 = 0;
  uStack_c00 = 0;
  uStack_bfa = 0;
  local_c08 = 0;
  local_1150 = 0x10410710;
  local_10f5 = 0x40004;
  uStack_1054 = 0;
  uStack_1050 = 0;
  uStack_105c = 0;
  uStack_1058 = 0;
  uStack_1040 = 0;
  local_1048 = 0;
  local_1038 = 0x7fc00000;
  local_1030 = 0x7fc00000;
  local_1028 = 0x7fc00000;
  local_1020 = 0x7fc00000;
  local_1018 = 0x7fc00000;
  local_1010 = 0x7fc00000;
  local_1008 = 0x7fc00000;
  local_1000 = 0x7fc00000;
  local_ff8 = 0x7fc00000;
  local_ff0 = 0x7fc00000;
  local_fe8 = 0x7fc00000;
  local_fe0 = 0x7fc00000;
  local_fd8 = 0x7fc00000;
  local_fd0 = 0x7fc00000;
  local_fc8 = 0x7fc00000;
  local_fc0 = 0x7fc00000;
  uStack_f5f = 0;
  uStack_f60 = 0;
  uStack_f4c = 0;
  local_f54 = 0;
  uStack_f3c = 0;
  uStack_f44 = 0;
  uStack_f2c = 0;
  local_f34 = 0;
  uStack_f1c = 0;
  uStack_f24 = 0;
  uStack_f0c = 0;
  local_f14 = 0;
  uStack_efc = 0;
  uStack_f04 = 0;
  local_ef7 = 0;
  uStack_ef4 = 0;
  local_e9c = 1;
  local_e9b = 0;
  local_e96 = 0x23;
  local_e5c = 0x3f800000;
  uStack_d40 = 0;
  local_d48 = 0;
  uStack_d30 = 0;
  uStack_d38 = 0;
  uStack_d50 = 0;
  local_d58 = 0;
  local_d24 = 0;
  uStack_cf0 = 0;
  local_cf8 = 0;
  uStack_ce0 = 0;
  uStack_ce8 = 0;
  uStack_cd0 = 0;
  local_cd8 = 0;
  uStack_cc0 = 0;
  uStack_cc8 = 0;
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
  uStack_10e7 = 0;
  uStack_113b = 0;
  local_1143 = 0;
  uStack_112b = 0;
  local_1133 = 0;
  uStack_111b = 0;
  local_1123 = 0;
  uStack_110b = 0;
  local_1113 = 0;
  uStack_10fd = 0;
  uStack_1105 = 0;
  uStack_1103 = 0;
  local_10e9 = 0;
  uStack_10e8 = 0;
  uStack_10d8 = 0;
  uStack_10e0 = 0;
  local_10c8 = 0;
  uStack_10d0 = 0;
  local_10b8 = 0;
  uStack_10c0 = 0;
  local_10a8 = 0;
  uStack_10b0 = 0;
  local_1098 = 0;
  uStack_10a0 = 0;
  uStack_1088 = 0;
  uStack_1090 = 0;
  local_1080 = 0;
  local_1024 = 0;
  local_101c = 0;
  local_1014 = 0;
  local_100c = 0;
  local_1004 = 0;
  local_ffc = 0;
  local_ff4 = 0;
  local_fec = 0;
  local_fe4 = 0;
  local_fdc = 0;
  local_fd4 = 0;
  local_fcc = 0;
  local_fc4 = 0;
  local_fbc = 0;
  local_fb8 = 0;
  local_fb4 = 0;
  local_fa8 = 0;
  local_eec = 0;
  local_ee8 = 0;
  local_ee4 = 0;
  local_ee0 = 0;
  local_edc = 0;
  local_ed8 = 0;
  local_ec0 = 0;
  uStack_f98 = 0;
  local_fa0 = 0;
  uStack_f88 = 0;
  uStack_f90 = 0;
  uStack_f78 = 0;
  local_f80 = 0;
  uStack_f68 = 0;
  local_f67 = 0;
  uStack_f70 = 0;
  uStack_eb0 = 0;
  local_eb8 = 0;
  local_ea8 = 0;
  local_ea0 = 0;
  local_e97 = 0;
  uStack_e88 = 0;
  local_e90 = 0;
  uStack_e78 = 0;
  uStack_e80 = 0;
  uStack_e68 = 0;
  uStack_e61 = 0;
  local_e70 = 0;
  local_e54 = 0;
  local_e4c = 0;
  local_e48 = 0;
  local_e40 = 0;
  local_e3c = 0;
  local_e34 = 0;
  local_e30 = 0;
  local_e28 = 0;
  local_e24 = 0;
  local_e1c = 0;
  local_e18 = 0;
  local_e10 = 0;
  local_e0c = 0;
  local_e04 = 0;
  local_e00 = 0;
  local_df8 = 0;
  local_df4 = 0;
  local_dec = 0;
  local_de8 = 0;
  local_de0 = 0;
  local_ddc = 0;
  local_dd4 = 0;
  local_dd0 = 0;
  local_dc8 = 0;
  local_dc4 = 0;
  local_dbc = 0;
  local_db8 = 0;
  local_db4 = 0;
  local_db0 = 0;
  local_dac = 0;
  local_da8 = 0;
  local_da4 = 0;
  local_da0 = 0;
  local_d9c = 0;
  local_d98 = 0;
  local_d94 = 0;
  local_d90 = 0;
  local_d8c = 0;
  local_d88 = 0;
  local_d84 = 0;
  local_d80 = 0;
  local_d7c = 0;
  local_d78 = 0;
  local_d74 = 0;
  local_d70 = 0;
  local_d6c = 0;
  local_d68 = 0;
  local_d64 = 0;
  local_d60 = 0;
  local_d5c = 0;
  local_d18 = 0;
  local_d28 = 0;
  local_d1c = 0;
  local_d00 = 0;
  local_bf0 = 0;
  local_bec = 0;
  local_be8 = 0;
  local_bd0 = 0;
  uStack_bdc = 0;
  local_be4 = 0;
  local_bd4 = 0;
  local_bc8 = 0x101;
  local_bc6 = 0;
  local_bc4 = 0;
  local_bc0 = 0;
  local_b60 = 0;
  local_b58 = 0;
  local_af8 = 0;
  local_ae8 = 0;
  local_ae4 = 0;
  local_ae0 = 0;
  local_adc = 0;
  local_ad8 = 0;
  local_ad4 = 0;
  local_ad0 = 0;
  local_acc = 0;
  local_ac8 = 0;
  local_ac4 = 0;
  local_aec = 0;
  local_af0 = 0;
  local_11a0 = PTR_vtable_0099f0d0 + 0x20;
  local_ac0[0] = 0;
  local_ab8 = 0;
  local_a90[0] = 0;
  local_a88 = 0;
  local_a60[0] = 0;
  local_a58 = 0;
  local_a30[0] = 0;
  local_a28 = 0;
  local_9e0 = 0;
  local_9f0 = (void *)0x0;
  local_9e8[0] = 0;
  uStack_9f8 = 0;
  local_a00 = 0;
  local_9b8 = 0x3f800000;
                    /* try { // try from 0089d3e8 to 0089d3ff has its CatchHandler @ 0089d658 */
  facebook::react::RNSVGFeFloodProps::RNSVGFeFloodProps
            ((RNSVGFeFloodProps *)local_9b0,(PropsParserContext *)local_1200,
             (RNSVGFeFloodProps *)&local_11a0,(RawProps *)&local_108);
  folly::dynamic::folly::dynamic::destroy(auStack_1f8);
  if ((local_210 & 1) != 0) {
    operator_delete(local_200);
  }
  folly::dynamic::folly::dynamic::destroy(auStack_240);
  folly::dynamic::folly::dynamic::destroy(auStack_270);
  folly::dynamic::folly::dynamic::destroy(auStack_2a0);
  folly::dynamic::folly::dynamic::destroy(auStack_2d0);
  FUN_0078917c(local_9b0,puVar5 + 8);
  folly::dynamic::folly::dynamic::destroy(local_9e8);
  if ((local_a00 & 1) != 0) {
    operator_delete(local_9f0);
  }
  folly::dynamic::folly::dynamic::destroy(local_a30);
  folly::dynamic::folly::dynamic::destroy(local_a60);
  folly::dynamic::folly::dynamic::destroy(local_a90);
  folly::dynamic::folly::dynamic::destroy(local_ac0);
  FUN_0078917c(&local_11a0,puVar5 + 8);
  facebook::react::RawPropsParser::facebook::react::RawPropsParser::postPrepare(this + 0x38);
  pvVar3 = local_130;
  puVar4 = (undefined8 *)local_120;
  while (puVar4 != (undefined8 *)0x0) {
    plVar7 = (long *)puVar4[6];
    pvVar8 = (void *)*puVar4;
    local_130 = pvVar3;
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
    pvVar3 = local_130;
    puVar4 = (undefined8 *)pvVar8;
  }
  local_130 = (void *)0x0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)&uStack_168);
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)&uStack_198);
  std::__ndk1::mutex::~mutex((mutex *)&local_1c0);
  pvVar8 = local_90;
  pvVar3 = local_88;
  if (local_90 != (void *)0x0) {
    while (pvVar3 != pvVar8) {
      if (*(uint *)((long)pvVar3 + -8) != 0xffffffff) {
                    /* try { // try from 0089d584 to 0089d58f has its CatchHandler @ 0089d65c */
        (*(code *)(&PTR_FUN_0098f088)[*(uint *)((long)pvVar3 + -8)])
                  (&local_11a0,(void *)((long)pvVar3 + -0x38));
      }
      *(undefined4 *)((long)pvVar3 + -8) = 0xffffffff;
      pvVar3 = (void *)((long)pvVar3 + -0x38);
    }
    local_88 = pvVar8;
    operator_delete(local_90);
  }
  if (local_a8 != (void *)0x0) {
    pvStack_a0 = local_a8;
    operator_delete(local_a8);
  }
  folly::dynamic::folly::dynamic::destroy(local_e0);
  facebook::jsi::Value::~Value((Value *)local_f0);
  if (local_11c0 != (void *)0x0) {
    pvStack_11b8 = local_11c0;
    operator_delete(local_11c0);
  }
  if (pvStack_11d8 != (void *)0x0) {
    local_11d0 = pvStack_11d8;
    operator_delete(pvStack_11d8);
  }
  if (local_11f0 != (void *)0x0) {
    pvStack_11e8 = local_11f0;
    operator_delete(local_11f0);
  }
  *param_1 = this;
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0089d660  FUN_0089d660 =====

void FUN_0089d660(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 0089d684  FUN_0089d684 =====

undefined * FUN_0089d684(void)

{
  return PTR_RNSVGFeFloodComponentName_0099f0c8;
}


// ===== 0089d690  FUN_0089d690 =====

undefined * FUN_0089d690(void)

{
  return PTR_RNSVGFeFloodComponentName_0099f0c8;
}


// ===== 0089d69c  FUN_0089d69c =====

undefined8 FUN_0089d69c(void)

{
  return 0x61;
}


// ===== 0089d6a4  FUN_0089d6a4 =====

void FUN_0089d6a4(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  RNSVGLayoutableShadowNode *pRVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  
  lVar2 = tpidr_el0;
  lVar6 = *(long *)(lVar2 + 0x28);
  uVar3 = (**(code **)(*param_2 + 0x20))();
  puVar4 = (undefined8 *)operator_new(0x400);
  pRVar1 = (RNSVGLayoutableShadowNode *)(puVar4 + 3);
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_00998768;
                    /* try { // try from 0089d710 to 0089d71f has its CatchHandler @ 0089d784 */
  facebook::react::RNSVGLayoutableShadowNode::RNSVGLayoutableShadowNode
            (pRVar1,param_3,param_4,uVar3);
  lVar5 = *param_2;
  puVar4[3] = &PTR_FUN_009987b8;
                    /* try { // try from 0089d738 to 0089d743 has its CatchHandler @ 0089d774 */
  (**(code **)(lVar5 + 0x60))(param_2,pRVar1);
  *param_1 = pRVar1;
  param_1[1] = puVar4;
  if (*(long *)(lVar2 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0089d7b4  FUN_0089d7b4 =====

void FUN_0089d7b4(undefined8 *param_1,long *param_2,ShadowNode *param_3,ShadowNodeFragment *param_4)

{
  RNSVGLayoutableShadowNode *pRVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  RNSVGLayoutableShadowNode *local_78;
  long *local_70;
  RNSVGLayoutableShadowNode *local_68;
  long *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  plVar3 = (long *)operator_new(0x400);
  pRVar1 = (RNSVGLayoutableShadowNode *)(plVar3 + 3);
  plVar3[1] = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_00998768;
                    /* try { // try from 0089d80c to 0089d81b has its CatchHandler @ 0089d8e8 */
  facebook::react::RNSVGLayoutableShadowNode::RNSVGLayoutableShadowNode(pRVar1,param_3,param_4);
  plVar3[3] = (long)&PTR_FUN_009987b8;
  local_68 = pRVar1;
  local_60 = plVar3;
                    /* try { // try from 0089d82c to 0089d83b has its CatchHandler @ 0089d900 */
  facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::
  completeClone(pRVar1,param_3,param_4);
  local_78 = pRVar1;
  local_70 = plVar3;
  FUN_00757d00(1,plVar3 + 1);
                    /* try { // try from 0089d84c to 0089d85b has its CatchHandler @ 0089d8d8 */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_78);
  plVar3 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar4 = FUN_00757990(0xffffffffffffffff,local_70 + 1), lVar4 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pRVar1 = local_68;
                    /* try { // try from 0089d898 to 0089d8a3 has its CatchHandler @ 0089d900 */
  (**(code **)(*param_2 + 0x60))(param_2,local_68);
  *param_1 = pRVar1;
  param_1[1] = local_60;
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0089d928  FUN_0089d928 =====

void FUN_0089d928(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0089d938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 0089d93c  FUN_0089d93c =====

void FUN_0089d93c(undefined8 *param_1,long param_2,PropsParserContext *param_3,long *param_4,
                 RawProps *param_5)

{
  RNSVGFeFloodProps *this;
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
  RNSVGFeFloodProps *pRVar12;
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
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGFeFloodComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGFeFloodPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebd0
         & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGFeFloodComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGFeFloodPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebd0
                                   ), iVar6 != 0)) {
                    /* try { // try from 0089dd70 to 0089dd73 has its CatchHandler @ 0089dda0 */
      FUN_0089e3b4();
      __cxa_atexit(FUN_0089e364,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGFeFloodComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGFeFloodPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebc8
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGFeFloodComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGFeFloodPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebd0
                         );
    }
    lVar11 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGFeFloodComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGFeFloodPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebc8
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGFeFloodComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGFeFloodPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebc8
    ;
    param_1[1] = lVar11;
    if (lVar11 != 0) {
      FUN_00757d00(1,lVar11 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    pRVar12 = (RNSVGFeFloodProps *)*param_4;
    if (pRVar12 == (RNSVGFeFloodProps *)0x0) {
      if (((*
            PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGFeFloodComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGFeFloodPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebd0
           & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGFeFloodComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGFeFloodPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebd0
                                     ), iVar6 != 0)) {
                    /* try { // try from 0089dcf0 to 0089dcf3 has its CatchHandler @ 0089ddb8 */
        FUN_0089e3b4();
        __cxa_atexit(FUN_0089e364,
                     PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGFeFloodComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGFeFloodPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebc8
                     ,&PTR_LOOP_008d5d30);
        __cxa_guard_release(
                           PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGFeFloodComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGFeFloodPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebd0
                           );
      }
      pRVar12 = *(RNSVGFeFloodProps **)
                 PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGFeFloodComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGFeFloodPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebc8
      ;
    }
    plVar8 = (long *)operator_new(0x808);
    this = (RNSVGFeFloodProps *)(plVar8 + 3);
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = (long)&PTR_FUN_009988d0;
                    /* try { // try from 0089da1c to 0089da2f has its CatchHandler @ 0089de2c */
    facebook::react::RNSVGFeFloodProps::RNSVGFeFloodProps(this,param_3,pRVar12,param_5);
                    /* try { // try from 0089da34 to 0089da47 has its CatchHandler @ 0089de44 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if ((((uVar7 & 1) == 0) ||
        (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar7 & 1) == 0)) ||
       (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
                enablePropsUpdateReconciliationAndroid(), (uVar7 & 1) == 0)) {
LAB_0089da70:
      FUN_00757d00(1,plVar8 + 1);
      if (*param_4 == 0) {
        if (((*
              PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGFeFloodComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGFeFloodPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebd0
             & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(
                                       PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGFeFloodComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGFeFloodPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebd0
                                       ), iVar6 != 0)) {
                    /* try { // try from 0089dd30 to 0089dd33 has its CatchHandler @ 0089dda4 */
          FUN_0089e3b4();
          __cxa_atexit(FUN_0089e364,
                       PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGFeFloodComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGFeFloodPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebc8
                       ,&PTR_LOOP_008d5d30);
          __cxa_guard_release(
                             PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGFeFloodComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGFeFloodPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebd0
                             );
        }
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 0089dad8 to 0089daeb has its CatchHandler @ 0089ddd0 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*(undefined8 *)
                         PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGFeFloodComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGFeFloodPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebc8
                   ,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
LAB_0089db24:
          (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
        }
        else if (local_b0 != (dynamic *)0x0) {
          lVar11 = 5;
          pdVar10 = local_b0;
          goto LAB_0089db24;
        }
        if (plVar8 != (long *)0x0) goto LAB_0089db38;
      }
      else {
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 0089da8c to 0089da9f has its CatchHandler @ 0089ddf8 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*param_4,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
        }
        else {
          if (local_b0 == (dynamic *)0x0) goto LAB_0089db38;
          lVar11 = 5;
          pdVar10 = local_b0;
        }
        (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
LAB_0089db38:
        lVar11 = FUN_00757990(0xffffffffffffffff,plVar8 + 1);
        if (lVar11 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 0089da54 to 0089da5f has its CatchHandler @ 0089ddcc */
      pcVar9 = (char *)(**(code **)(*(long *)this + 0x10))(this);
      iVar6 = strcmp(PTR_RNSVGFeFloodComponentName_0099f0c8,pcVar9);
      if (iVar6 != 0) goto LAB_0089da70;
      bVar3 = false;
    }
                    /* try { // try from 0089db64 to 0089db67 has its CatchHandler @ 0089de44 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar7 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 0089db74 to 0089db8f has its CatchHandler @ 0089ddf4 */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(plVar8 + 7));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 0089dcd0 to 0089dcdf has its CatchHandler @ 0089ddec */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_0089de90;
      }
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (*(int *)(plVar4 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 0089dcb0 to 0089dcbf has its CatchHandler @ 0089de50 */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_0089de90;
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
                    /* try { // try from 0089dc10 to 0089dc1b has its CatchHandler @ 0089de58 */
        folly::dynamic::dynamic(local_d0,(dynamic *)(plVar4 + 8));
        local_a0 = 0;
                    /* try { // try from 0089dc20 to 0089dc37 has its CatchHandler @ 0089de5c */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (this,param_3,uVar1,pcVar9,local_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 0089dc48 to 0089dc53 has its CatchHandler @ 0089de4c */
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
LAB_0089de90:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0089de94  FUN_0089de94 =====

void FUN_0089de94(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 0089de9c  FUN_0089de9c =====

void FUN_0089de9c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 0089dea4  FUN_0089dea4 =====

void FUN_0089dea4(undefined8 *param_1,long param_2,long param_3)

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
                    /* try { // try from 0089dee8 to 0089deef has its CatchHandler @ 0089e0f0 */
  plVar6 = (long *)operator_new(0x68);
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&PTR_FUN_00992a08;
                    /* try { // try from 0089df08 to 0089df13 has its CatchHandler @ 0089e0d8 */
  local_78 = FUN_008707fc(plVar6 + 3,&local_58,param_2 + 8);
  local_70 = plVar6;
  if ((local_50 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,local_50 + 1), lVar7 == 0)) {
    (**(code **)(*local_50 + 0x10))(local_50);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 0089df48 to 0089df4f has its CatchHandler @ 0089e0c8 */
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
                    /* try { // try from 0089df9c to 0089dfb3 has its CatchHandler @ 0089e098 */
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
                    /* try { // try from 0089e008 to 0089e013 has its CatchHandler @ 0089e078 */
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


// ===== 0089e118  FUN_0089e118 =====

void FUN_0089e118(void)

{
  return;
}


// ===== 0089e11c  FUN_0089e11c =====

void FUN_0089e11c(long param_1)

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


// ===== 0089e16c  FUN_0089e16c =====

void FUN_0089e16c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00998768;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0089e17c  FUN_0089e17c =====

void FUN_0089e17c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00998768;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0089e1ac  FUN_0089e1ac =====

void FUN_0089e1ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0089e1b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 0089e1b8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0089e1bc  FUN_0089e1bc =====

void FUN_0089e1bc(long *param_1)

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


// ===== 0089e27c  FUN_0089e27c =====

void FUN_0089e27c(long param_1)

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


// ===== 0089e2e4  FUN_0089e2e4 =====

bool FUN_0089e2e4(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 0089e2fc  FUN_0089e2fc =====

bool FUN_0089e2fc(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 0089e314  FUN_0089e314 =====

void FUN_0089e314(long param_1)

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


// ===== 0089e364  FUN_0089e364 =====

void FUN_0089e364(long param_1)

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


// ===== 0089e3b4  FUN_0089e3b4 =====

void FUN_0089e3b4(void)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x808);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_00998880;
  memset(__s,0,0x7f0);
                    /* try { // try from 0089e3f0 to 0089e403 has its CatchHandler @ 0089e4b0 */
  FUN_00788b10(__s,PTR_VTT_0099f0d8 + 0x10);
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
  puVar1 = PTR_vtable_0099f0d0;
  *(undefined4 *)(puVar2 + 0xd9) = 0;
  *(undefined2 *)((long)puVar2 + 0x6cc) = 0;
  *(undefined4 *)(puVar2 + 0xdf) = 0;
  puVar2[3] = puVar1 + 0x20;
  puVar2[0xe0] = 0;
  *(undefined4 *)(puVar2 + 0xe5) = 0;
  puVar2[0xe6] = 0;
  *(undefined4 *)(puVar2 + 0xeb) = 0;
  puVar2[0xec] = 0;
  *(undefined4 *)(puVar2 + 0xf1) = 0;
  puVar2[0xf2] = 0;
  puVar2[0xfb] = 0;
  *(undefined4 *)(puVar2 + 0xfa) = 0;
  puVar2[0xf9] = 0;
  puVar2[0xf8] = 0;
  puVar2[0xf7] = 0;
  puVar1 = 
  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGFeFloodComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGFeFloodPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebc8
  ;
  *(undefined4 *)(puVar2 + 0x100) = 0x3f800000;
  *(undefined8 **)puVar1 = __s;
  *(undefined8 **)(puVar1 + 8) = puVar2;
  return;
}


// ===== 0089e4cc  FUN_0089e4cc =====

void FUN_0089e4cc(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00998880;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0089e4dc  FUN_0089e4dc =====

void FUN_0089e4dc(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00998880;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0089e50c  FUN_0089e50c =====

void FUN_0089e50c(long param_1)

{
  folly::dynamic::folly::dynamic::destroy(param_1 + 2000);
  if ((*(byte *)(param_1 + 0x7b8) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x7c8));
  }
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x788);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x758);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x728);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x6f8);
  FUN_0078917c(param_1 + 0x18,PTR_VTT_0099f0d8 + 8);
  return;
}


// ===== 0089e570  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0089e574  FUN_0089e574 =====

void FUN_0089e574(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009988d0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0089e584  FUN_0089e584 =====

void FUN_0089e584(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009988d0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0089e5b4  FUN_0089e5b4 =====

void FUN_0089e5b4(long param_1)

{
  folly::dynamic::folly::dynamic::destroy(param_1 + 2000);
  if ((*(byte *)(param_1 + 0x7b8) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x7c8));
  }
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x788);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x758);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x728);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x6f8);
  FUN_0078917c(param_1 + 0x18,PTR_VTT_0099f0d8 + 8);
  return;
}


// ===== 0089e618  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0089e61c  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_23RNSVGConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGFeGaussianBlurComponentNameEEEENS0_24RNSVGFeGaussianBlurPropsEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENS8_14default_deleteISB_EEEERKNS0_29ComponentDescriptorParametersE =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_23RNSVGConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGFeGaussianBlurComponentNameEEEENS0_24RNSVGFeGaussianBlurPropsEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENS8_14default_deleteISB_EEEERKNS0_29ComponentDescriptorParametersE
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
  undefined4 local_11e0 [2];
  undefined8 *local_11d8;
  void *local_11d0;
  void *pvStack_11c8;
  undefined8 local_11c0;
  void *pvStack_11b8;
  void *local_11b0;
  undefined8 uStack_11a8;
  void *local_11a0;
  void *pvStack_1198;
  undefined8 uStack_1190;
  undefined8 uStack_1188;
  undefined *local_1180;
  undefined8 uStack_1178;
  undefined8 local_1170;
  undefined8 uStack_1168;
  undefined4 local_1160 [2];
  undefined8 local_1158;
  undefined8 uStack_1150;
  undefined8 local_1148;
  undefined8 uStack_1140;
  undefined4 local_1138;
  undefined4 local_1130;
  undefined1 local_112c;
  undefined8 local_112b;
  undefined8 local_1123;
  undefined8 uStack_111b;
  undefined8 local_1113;
  undefined8 uStack_110b;
  undefined8 local_1103;
  undefined8 uStack_10fb;
  undefined8 local_10f3;
  undefined6 uStack_10eb;
  undefined2 uStack_10e5;
  undefined6 uStack_10e3;
  undefined8 uStack_10dd;
  undefined4 local_10d5;
  undefined8 local_10d1;
  undefined1 local_10c9;
  undefined1 uStack_10c8;
  undefined7 uStack_10c7;
  undefined8 uStack_10c0;
  undefined8 uStack_10b8;
  undefined8 uStack_10b0;
  undefined8 local_10a8;
  undefined8 uStack_10a0;
  undefined8 local_1098;
  undefined8 uStack_1090;
  undefined8 local_1088;
  undefined8 uStack_1080;
  undefined8 local_1078;
  undefined8 uStack_1070;
  undefined8 uStack_1068;
  undefined8 local_1060;
  undefined8 local_1058;
  undefined8 uStack_1050;
  undefined8 local_1048;
  undefined4 uStack_1040;
  undefined4 uStack_103c;
  undefined4 uStack_1038;
  undefined4 uStack_1034;
  undefined4 uStack_1030;
  undefined4 uStack_102c;
  undefined8 local_1028;
  undefined8 uStack_1020;
  undefined4 local_1018;
  undefined1 local_1014;
  undefined4 local_1010;
  undefined1 local_100c;
  undefined4 local_1008;
  undefined1 local_1004;
  undefined4 local_1000;
  undefined1 local_ffc;
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
  undefined1 local_f98;
  undefined1 local_f94;
  undefined1 local_f88;
  undefined8 local_f80;
  undefined8 uStack_f78;
  undefined8 uStack_f70;
  undefined8 uStack_f68;
  undefined8 local_f60;
  undefined8 uStack_f58;
  undefined8 uStack_f50;
  undefined1 uStack_f48;
  undefined7 local_f47;
  undefined1 uStack_f40;
  undefined8 uStack_f3f;
  undefined8 local_f34;
  undefined8 uStack_f2c;
  undefined8 uStack_f24;
  undefined8 uStack_f1c;
  undefined8 local_f14;
  undefined8 uStack_f0c;
  undefined8 uStack_f04;
  undefined8 uStack_efc;
  undefined8 local_ef4;
  undefined8 uStack_eec;
  undefined8 uStack_ee4;
  undefined5 uStack_edc;
  undefined3 local_ed7;
  undefined5 uStack_ed4;
  undefined1 local_ecc;
  undefined1 local_ec8;
  undefined1 local_ec4;
  undefined1 local_ec0;
  undefined1 local_ebc;
  undefined1 local_eb8;
  undefined1 local_ea0;
  undefined8 local_e98;
  undefined8 uStack_e90;
  undefined8 local_e88;
  undefined4 local_e80;
  undefined1 local_e7c;
  undefined4 local_e7b;
  undefined1 local_e77;
  undefined1 local_e76;
  undefined8 local_e70;
  undefined8 uStack_e68;
  undefined8 uStack_e60;
  undefined8 uStack_e58;
  undefined8 local_e50;
  undefined7 uStack_e48;
  undefined4 uStack_e41;
  undefined8 local_e3c;
  undefined1 local_e34;
  undefined1 local_e2c;
  undefined1 local_e28;
  undefined1 local_e20;
  undefined1 local_e1c;
  undefined1 local_e14;
  undefined1 local_e10;
  undefined1 local_e08;
  undefined1 local_e04;
  undefined1 local_dfc;
  undefined1 local_df8;
  undefined1 local_df0;
  undefined1 local_dec;
  undefined1 local_de4;
  undefined1 local_de0;
  undefined1 local_dd8;
  undefined1 local_dd4;
  undefined1 local_dcc;
  undefined1 local_dc8;
  undefined1 local_dc0;
  undefined1 local_dbc;
  undefined1 local_db4;
  undefined1 local_db0;
  undefined1 local_da8;
  undefined1 local_da4;
  undefined1 local_d9c;
  undefined1 local_d98;
  undefined1 local_d94;
  undefined1 local_d90;
  undefined1 local_d8c;
  undefined1 local_d88;
  undefined1 local_d84;
  undefined1 local_d80;
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
  undefined8 local_d38;
  undefined8 uStack_d30;
  undefined8 local_d28;
  undefined8 uStack_d20;
  undefined8 uStack_d18;
  undefined8 uStack_d10;
  undefined2 local_d08;
  undefined8 local_d04;
  undefined1 local_cfc;
  undefined8 local_cf8;
  undefined8 local_cf0;
  undefined8 uStack_ce8;
  undefined1 local_ce0;
  undefined8 local_cd8;
  undefined8 uStack_cd0;
  undefined8 uStack_cc8;
  undefined8 uStack_cc0;
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
  undefined8 local_c28;
  undefined8 uStack_c20;
  undefined8 local_c18;
  undefined8 uStack_c10;
  undefined8 local_c08;
  undefined8 uStack_c00;
  undefined8 local_bf8;
  undefined8 uStack_bf0;
  undefined8 local_be8;
  undefined6 uStack_be0;
  undefined2 uStack_bda;
  undefined6 uStack_bd8;
  undefined1 local_bd0;
  undefined1 local_bcc;
  undefined1 local_bc8;
  undefined8 local_bc4;
  undefined8 uStack_bbc;
  undefined1 local_bb4;
  undefined8 local_bb0;
  undefined2 local_ba8;
  undefined1 local_ba6;
  undefined4 local_ba4;
  undefined1 local_ba0;
  undefined1 local_b40;
  undefined1 local_b38;
  undefined1 local_ad8;
  undefined4 local_ad0;
  undefined2 local_acc;
  undefined1 local_ac8;
  undefined1 local_ac4;
  undefined1 local_ac0;
  undefined1 local_abc;
  undefined1 local_ab8;
  undefined1 local_ab4;
  undefined1 local_ab0;
  undefined1 local_aac;
  undefined1 local_aa8;
  undefined1 local_aa4;
  undefined4 local_aa0 [2];
  undefined8 local_a98;
  undefined4 local_a70 [2];
  undefined8 local_a68;
  undefined4 local_a40 [2];
  undefined8 local_a38;
  undefined4 local_a10 [2];
  undefined8 local_a08;
  ulong local_9e0;
  undefined8 uStack_9d8;
  void *local_9d0;
  ulong uStack_9c8;
  undefined8 local_9c0;
  void *pvStack_9b8;
  undefined8 local_9b0;
  undefined4 local_9a8;
  undefined4 local_9a0 [2];
  undefined8 local_998;
  undefined8 uStack_990;
  undefined8 local_988;
  undefined8 local_980;
  undefined8 uStack_978;
  undefined1 auStack_2c0 [48];
  undefined1 auStack_290 [48];
  undefined1 auStack_260 [48];
  undefined1 auStack_230 [48];
  byte local_200;
  void *local_1f0;
  byte local_1e8;
  void *local_1d8;
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
  void *local_130;
  undefined8 uStack_128;
  void *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined4 local_f0 [4];
  undefined4 local_e0 [2];
  undefined8 local_d8;
  undefined4 local_b0;
  void *local_a8;
  void *pvStack_a0;
  undefined8 uStack_98;
  void *local_90;
  void *local_88;
  undefined8 uStack_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  this = (ComponentDescriptor *)operator_new(0x88);
  pvStack_11b8 = (void *)0x0;
  local_11c0 = 0;
  uStack_11a8 = 0;
  local_11b0 = (void *)0x0;
  pvStack_1198 = (void *)0x0;
  local_11a0 = (void *)0x0;
  uStack_1188 = 0;
  uStack_1190 = 0;
  pvStack_11c8 = (void *)0x0;
  local_11d0 = (void *)0x0;
                    /* try { // try from 0089e670 to 0089e67b has its CatchHandler @ 0089ed68 */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_11d0);
  local_108 = 0;
  *(undefined ***)this = &PTR_FUN_00998920;
  local_100 = 0;
  local_f8 = 0;
  local_f0[0] = 0;
  local_e0[0] = 0;
  local_d8 = 0;
  local_b0 = 0;
  pvStack_a0 = (void *)0x0;
  local_a8 = (void *)0x0;
  local_90 = (void *)0x0;
  uStack_98 = 0;
  uStack_80 = 0;
  local_88 = (void *)0x0;
  local_110 = 0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  uStack_128 = 0;
  local_130 = (void *)0x0;
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
  uStack_1b8 = 0;
  local_1c0 = 0;
                    /* try { // try from 0089e6e8 to 0089e6fb has its CatchHandler @ 0089ed98 */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1c0);
  local_110 = CONCAT44(local_110._4_4_,0x3f800000);
  local_11e0[0] = 0xffffffff;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  uStack_128 = 0;
  local_130 = (void *)0x0;
  local_11d8 = &local_1c0;
  facebook::react::RawProps::facebook::react::RawProps::parse(&local_108,this + 0x38);
  memset(local_1160,0,0x7c0);
  puVar5 = PTR_VTT_0099f0f0;
  local_9a0[0] = 5;
  local_988 = 0;
  local_1180 = *(undefined **)(PTR_VTT_0099f0f0 + 0x20);
  local_1160[0] = 5;
  uStack_1168 = 0;
  local_1170 = 0;
  local_980 = 0;
  uStack_1178 = 0;
  uStack_978 = 0x3f800000;
  uStack_990 = 0;
  local_998 = 0;
  uStack_1150 = 0;
  local_1158 = 0;
  uStack_1140 = 0;
  local_1148 = 0;
  local_1138 = 0x3f800000;
  folly::dynamic::folly::dynamic::destroy(local_9a0);
  local_112c = 0;
  local_10d1 = 0;
  uStack_bf0 = _UNK_00488920;
  local_bf8 = _DAT_00488918;
  local_112b = _s__00375408;
  uStack_ce8 = _UNK_00371598;
  local_cf0 = _DAT_00371590;
  uStack_c00 = _UNK_00488910;
  local_c08 = _DAT_00488908;
  local_1014 = 0;
  uStack_c10 = _UNK_00488900;
  local_c18 = _DAT_004888f8;
  uStack_c20 = _UNK_004888f0;
  local_c28 = _DAT_004888e8;
  uStack_bd8 = 0;
  local_100c = 0;
  uStack_1040 = 0;
  local_1048 = 0;
  uStack_102c = 0;
  uStack_1050 = 0;
  local_1058 = 0;
  uStack_be0 = 0;
  uStack_bda = 0;
  local_be8 = 0;
  local_1130 = 0x10410710;
  local_10d5 = 0x40004;
  uStack_1034 = 0;
  uStack_1030 = 0;
  uStack_103c = 0;
  uStack_1038 = 0;
  uStack_1020 = 0;
  local_1028 = 0;
  local_1018 = 0x7fc00000;
  local_1010 = 0x7fc00000;
  local_1008 = 0x7fc00000;
  local_1000 = 0x7fc00000;
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
  uStack_f3f = 0;
  uStack_f40 = 0;
  uStack_f2c = 0;
  local_f34 = 0;
  uStack_f1c = 0;
  uStack_f24 = 0;
  uStack_f0c = 0;
  local_f14 = 0;
  uStack_efc = 0;
  uStack_f04 = 0;
  uStack_eec = 0;
  local_ef4 = 0;
  uStack_edc = 0;
  uStack_ee4 = 0;
  local_ed7 = 0;
  uStack_ed4 = 0;
  local_e7c = 1;
  local_e7b = 0;
  local_e76 = 0x23;
  local_e3c = 0x3f800000;
  uStack_d20 = 0;
  local_d28 = 0;
  uStack_d10 = 0;
  uStack_d18 = 0;
  uStack_d30 = 0;
  local_d38 = 0;
  local_d04 = 0;
  uStack_cd0 = 0;
  local_cd8 = 0;
  uStack_cc0 = 0;
  uStack_cc8 = 0;
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
  uStack_10c7 = 0;
  uStack_111b = 0;
  local_1123 = 0;
  uStack_110b = 0;
  local_1113 = 0;
  uStack_10fb = 0;
  local_1103 = 0;
  uStack_10eb = 0;
  local_10f3 = 0;
  uStack_10dd = 0;
  uStack_10e5 = 0;
  uStack_10e3 = 0;
  local_10c9 = 0;
  uStack_10c8 = 0;
  uStack_10b8 = 0;
  uStack_10c0 = 0;
  local_10a8 = 0;
  uStack_10b0 = 0;
  local_1098 = 0;
  uStack_10a0 = 0;
  local_1088 = 0;
  uStack_1090 = 0;
  local_1078 = 0;
  uStack_1080 = 0;
  uStack_1068 = 0;
  uStack_1070 = 0;
  local_1060 = 0;
  local_1004 = 0;
  local_ffc = 0;
  local_ff4 = 0;
  local_fec = 0;
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
  local_f98 = 0;
  local_f94 = 0;
  local_f88 = 0;
  local_ecc = 0;
  local_ec8 = 0;
  local_ec4 = 0;
  local_ec0 = 0;
  local_ebc = 0;
  local_eb8 = 0;
  local_ea0 = 0;
  uStack_f78 = 0;
  local_f80 = 0;
  uStack_f68 = 0;
  uStack_f70 = 0;
  uStack_f58 = 0;
  local_f60 = 0;
  uStack_f48 = 0;
  local_f47 = 0;
  uStack_f50 = 0;
  uStack_e90 = 0;
  local_e98 = 0;
  local_e88 = 0;
  local_e80 = 0;
  local_e77 = 0;
  uStack_e68 = 0;
  local_e70 = 0;
  uStack_e58 = 0;
  uStack_e60 = 0;
  uStack_e48 = 0;
  uStack_e41 = 0;
  local_e50 = 0;
  local_e34 = 0;
  local_e2c = 0;
  local_e28 = 0;
  local_e20 = 0;
  local_e1c = 0;
  local_e14 = 0;
  local_e10 = 0;
  local_e08 = 0;
  local_e04 = 0;
  local_dfc = 0;
  local_df8 = 0;
  local_df0 = 0;
  local_dec = 0;
  local_de4 = 0;
  local_de0 = 0;
  local_dd8 = 0;
  local_dd4 = 0;
  local_dcc = 0;
  local_dc8 = 0;
  local_dc0 = 0;
  local_dbc = 0;
  local_db4 = 0;
  local_db0 = 0;
  local_da8 = 0;
  local_da4 = 0;
  local_d9c = 0;
  local_d98 = 0;
  local_d94 = 0;
  local_d90 = 0;
  local_d8c = 0;
  local_d88 = 0;
  local_d84 = 0;
  local_d80 = 0;
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
  local_cf8 = 0;
  local_d08 = 0;
  local_cfc = 0;
  local_ce0 = 0;
  local_bd0 = 0;
  local_bcc = 0;
  local_bc8 = 0;
  local_bb0 = 0;
  uStack_bbc = 0;
  local_bc4 = 0;
  local_bb4 = 0;
  local_ba8 = 0x101;
  local_ba6 = 0;
  local_ba4 = 0;
  local_ba0 = 0;
  local_b40 = 0;
  local_b38 = 0;
  local_ad8 = 0;
  local_ac8 = 0;
  local_ac4 = 0;
  local_ac0 = 0;
  local_abc = 0;
  local_ab8 = 0;
  local_ab4 = 0;
  local_ab0 = 0;
  local_aac = 0;
  local_aa8 = 0;
  local_aa4 = 0;
  local_acc = 0;
  local_ad0 = 0;
  local_1180 = PTR_vtable_0099f0e8 + 0x20;
  local_aa0[0] = 0;
  local_a98 = 0;
  local_a70[0] = 0;
  local_a68 = 0;
  local_a40[0] = 0;
  local_a38 = 0;
  local_a10[0] = 0;
  local_a08 = 0;
  uStack_9d8 = 0;
  local_9e0 = 0;
  uStack_9c8 = 0;
  local_9d0 = (void *)0x0;
  pvStack_9b8 = (void *)0x0;
  local_9c0 = 0;
  local_9b0 = 0;
  local_9a8 = 2;
                    /* try { // try from 0089eb20 to 0089eb33 has its CatchHandler @ 0089ed98 */
  facebook::react::RNSVGFeGaussianBlurProps::RNSVGFeGaussianBlurProps
            ((RNSVGFeGaussianBlurProps *)local_9a0,(PropsParserContext *)local_11e0,
             (RNSVGFeGaussianBlurProps *)&local_1180,(RawProps *)&local_108);
  if ((local_1e8 & 1) != 0) {
    operator_delete(local_1d8);
  }
  if ((local_200 & 1) != 0) {
    operator_delete(local_1f0);
  }
  folly::dynamic::folly::dynamic::destroy(auStack_230);
  folly::dynamic::folly::dynamic::destroy(auStack_260);
  folly::dynamic::folly::dynamic::destroy(auStack_290);
  folly::dynamic::folly::dynamic::destroy(auStack_2c0);
  FUN_0078917c(local_9a0,puVar5 + 8);
  if ((uStack_9c8 & 1) != 0) {
    operator_delete(pvStack_9b8);
  }
  if ((local_9e0 & 1) != 0) {
    operator_delete(local_9d0);
  }
  folly::dynamic::folly::dynamic::destroy(local_a10);
  folly::dynamic::folly::dynamic::destroy(local_a40);
  folly::dynamic::folly::dynamic::destroy(local_a70);
  folly::dynamic::folly::dynamic::destroy(local_aa0);
  FUN_0078917c(&local_1180,puVar5 + 8);
  facebook::react::RawPropsParser::facebook::react::RawPropsParser::postPrepare(this + 0x38);
  pvVar3 = local_130;
  puVar4 = (undefined8 *)local_120;
  while (puVar4 != (undefined8 *)0x0) {
    plVar7 = (long *)puVar4[6];
    pvVar8 = (void *)*puVar4;
    local_130 = pvVar3;
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
    pvVar3 = local_130;
    puVar4 = (undefined8 *)pvVar8;
  }
  local_130 = (void *)0x0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)&uStack_168);
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)&uStack_198);
  std::__ndk1::mutex::~mutex((mutex *)&local_1c0);
  pvVar8 = local_90;
  pvVar3 = local_88;
  if (local_90 != (void *)0x0) {
    while (pvVar3 != pvVar8) {
      if (*(uint *)((long)pvVar3 + -8) != 0xffffffff) {
                    /* try { // try from 0089ecc4 to 0089eccf has its CatchHandler @ 0089ed9c */
        (*(code *)(&PTR_FUN_0098f088)[*(uint *)((long)pvVar3 + -8)])
                  (&local_1180,(void *)((long)pvVar3 + -0x38));
      }
      *(undefined4 *)((long)pvVar3 + -8) = 0xffffffff;
      pvVar3 = (void *)((long)pvVar3 + -0x38);
    }
    local_88 = pvVar8;
    operator_delete(local_90);
  }
  if (local_a8 != (void *)0x0) {
    pvStack_a0 = local_a8;
    operator_delete(local_a8);
  }
  folly::dynamic::folly::dynamic::destroy(local_e0);
  facebook::jsi::Value::~Value((Value *)local_f0);
  if (local_11a0 != (void *)0x0) {
    pvStack_1198 = local_11a0;
    operator_delete(local_11a0);
  }
  if (pvStack_11b8 != (void *)0x0) {
    local_11b0 = pvStack_11b8;
    operator_delete(pvStack_11b8);
  }
  if (local_11d0 != (void *)0x0) {
    pvStack_11c8 = local_11d0;
    operator_delete(local_11d0);
  }
  *param_1 = this;
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0089eda0  FUN_0089eda0 =====

void FUN_0089eda0(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 0089edc4  FUN_0089edc4 =====

undefined * FUN_0089edc4(void)

{
  return PTR_RNSVGFeGaussianBlurComponentName_0099f0e0;
}


// ===== 0089edd0  FUN_0089edd0 =====

undefined * FUN_0089edd0(void)

{
  return PTR_RNSVGFeGaussianBlurComponentName_0099f0e0;
}


// ===== 0089eddc  FUN_0089eddc =====

undefined8 FUN_0089eddc(void)

{
  return 0x61;
}


// ===== 0089ede4  FUN_0089ede4 =====

void FUN_0089ede4(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  RNSVGLayoutableShadowNode *pRVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  
  lVar2 = tpidr_el0;
  lVar6 = *(long *)(lVar2 + 0x28);
  uVar3 = (**(code **)(*param_2 + 0x20))();
  puVar4 = (undefined8 *)operator_new(0x400);
  pRVar1 = (RNSVGLayoutableShadowNode *)(puVar4 + 3);
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_009989b0;
                    /* try { // try from 0089ee50 to 0089ee5f has its CatchHandler @ 0089eec4 */
  facebook::react::RNSVGLayoutableShadowNode::RNSVGLayoutableShadowNode
            (pRVar1,param_3,param_4,uVar3);
  lVar5 = *param_2;
  puVar4[3] = &PTR_FUN_00998a00;
                    /* try { // try from 0089ee78 to 0089ee83 has its CatchHandler @ 0089eeb4 */
  (**(code **)(lVar5 + 0x60))(param_2,pRVar1);
  *param_1 = pRVar1;
  param_1[1] = puVar4;
  if (*(long *)(lVar2 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0089eef4  FUN_0089eef4 =====

void FUN_0089eef4(undefined8 *param_1,long *param_2,ShadowNode *param_3,ShadowNodeFragment *param_4)

{
  RNSVGLayoutableShadowNode *pRVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  RNSVGLayoutableShadowNode *local_78;
  long *local_70;
  RNSVGLayoutableShadowNode *local_68;
  long *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  plVar3 = (long *)operator_new(0x400);
  pRVar1 = (RNSVGLayoutableShadowNode *)(plVar3 + 3);
  plVar3[1] = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_009989b0;
                    /* try { // try from 0089ef4c to 0089ef5b has its CatchHandler @ 0089f028 */
  facebook::react::RNSVGLayoutableShadowNode::RNSVGLayoutableShadowNode(pRVar1,param_3,param_4);
  plVar3[3] = (long)&PTR_FUN_00998a00;
  local_68 = pRVar1;
  local_60 = plVar3;
                    /* try { // try from 0089ef6c to 0089ef7b has its CatchHandler @ 0089f040 */
  facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::
  completeClone(pRVar1,param_3,param_4);
  local_78 = pRVar1;
  local_70 = plVar3;
  FUN_00757d00(1,plVar3 + 1);
                    /* try { // try from 0089ef8c to 0089ef9b has its CatchHandler @ 0089f018 */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_78);
  plVar3 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar4 = FUN_00757990(0xffffffffffffffff,local_70 + 1), lVar4 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pRVar1 = local_68;
                    /* try { // try from 0089efd8 to 0089efe3 has its CatchHandler @ 0089f040 */
  (**(code **)(*param_2 + 0x60))(param_2,local_68);
  *param_1 = pRVar1;
  param_1[1] = local_60;
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0089f068  FUN_0089f068 =====

void FUN_0089f068(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0089f078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 0089f07c  FUN_0089f07c =====

void FUN_0089f07c(undefined8 *param_1,long param_2,PropsParserContext *param_3,long *param_4,
                 RawProps *param_5)

{
  RNSVGFeGaussianBlurProps *this;
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
  RNSVGFeGaussianBlurProps *pRVar12;
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
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGFeGaussianBlurComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_24RNSVGFeGaussianBlurPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebe0
         & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGFeGaussianBlurComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_24RNSVGFeGaussianBlurPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebe0
                                   ), iVar6 != 0)) {
                    /* try { // try from 0089f4b0 to 0089f4b3 has its CatchHandler @ 0089f4e0 */
      FUN_0089faf4();
      __cxa_atexit(FUN_0089faa4,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGFeGaussianBlurComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_24RNSVGFeGaussianBlurPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebd8
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGFeGaussianBlurComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_24RNSVGFeGaussianBlurPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebe0
                         );
    }
    lVar11 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGFeGaussianBlurComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_24RNSVGFeGaussianBlurPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebd8
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGFeGaussianBlurComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_24RNSVGFeGaussianBlurPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebd8
    ;
    param_1[1] = lVar11;
    if (lVar11 != 0) {
      FUN_00757d00(1,lVar11 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    pRVar12 = (RNSVGFeGaussianBlurProps *)*param_4;
    if (pRVar12 == (RNSVGFeGaussianBlurProps *)0x0) {
      if (((*
            PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGFeGaussianBlurComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_24RNSVGFeGaussianBlurPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebe0
           & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGFeGaussianBlurComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_24RNSVGFeGaussianBlurPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebe0
                                     ), iVar6 != 0)) {
                    /* try { // try from 0089f430 to 0089f433 has its CatchHandler @ 0089f4f8 */
        FUN_0089faf4();
        __cxa_atexit(FUN_0089faa4,
                     PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGFeGaussianBlurComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_24RNSVGFeGaussianBlurPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebd8
                     ,&PTR_LOOP_008d5d30);
        __cxa_guard_release(
                           PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGFeGaussianBlurComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_24RNSVGFeGaussianBlurPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebe0
                           );
      }
      pRVar12 = *(RNSVGFeGaussianBlurProps **)
                 PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGFeGaussianBlurComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_24RNSVGFeGaussianBlurPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebd8
      ;
    }
    plVar8 = (long *)operator_new(0x7f8);
    this = (RNSVGFeGaussianBlurProps *)(plVar8 + 3);
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = (long)&PTR_FUN_00998b18;
                    /* try { // try from 0089f15c to 0089f16f has its CatchHandler @ 0089f56c */
    facebook::react::RNSVGFeGaussianBlurProps::RNSVGFeGaussianBlurProps
              (this,param_3,pRVar12,param_5);
                    /* try { // try from 0089f174 to 0089f187 has its CatchHandler @ 0089f584 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if ((((uVar7 & 1) == 0) ||
        (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar7 & 1) == 0)) ||
       (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
                enablePropsUpdateReconciliationAndroid(), (uVar7 & 1) == 0)) {
LAB_0089f1b0:
      FUN_00757d00(1,plVar8 + 1);
      if (*param_4 == 0) {
        if (((*
              PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGFeGaussianBlurComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_24RNSVGFeGaussianBlurPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebe0
             & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(
                                       PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGFeGaussianBlurComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_24RNSVGFeGaussianBlurPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebe0
                                       ), iVar6 != 0)) {
                    /* try { // try from 0089f470 to 0089f473 has its CatchHandler @ 0089f4e4 */
          FUN_0089faf4();
          __cxa_atexit(FUN_0089faa4,
                       PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGFeGaussianBlurComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_24RNSVGFeGaussianBlurPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebd8
                       ,&PTR_LOOP_008d5d30);
          __cxa_guard_release(
                             PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGFeGaussianBlurComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_24RNSVGFeGaussianBlurPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebe0
                             );
        }
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 0089f218 to 0089f22b has its CatchHandler @ 0089f510 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*(undefined8 *)
                         PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGFeGaussianBlurComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_24RNSVGFeGaussianBlurPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebd8
                   ,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
LAB_0089f264:
          (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
        }
        else if (local_b0 != (dynamic *)0x0) {
          lVar11 = 5;
          pdVar10 = local_b0;
          goto LAB_0089f264;
        }
        if (plVar8 != (long *)0x0) goto LAB_0089f278;
      }
      else {
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 0089f1cc to 0089f1df has its CatchHandler @ 0089f538 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*param_4,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
        }
        else {
          if (local_b0 == (dynamic *)0x0) goto LAB_0089f278;
          lVar11 = 5;
          pdVar10 = local_b0;
        }
        (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
LAB_0089f278:
        lVar11 = FUN_00757990(0xffffffffffffffff,plVar8 + 1);
        if (lVar11 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 0089f194 to 0089f19f has its CatchHandler @ 0089f50c */
      pcVar9 = (char *)(**(code **)(*(long *)this + 0x10))(this);
      iVar6 = strcmp(PTR_RNSVGFeGaussianBlurComponentName_0099f0e0,pcVar9);
      if (iVar6 != 0) goto LAB_0089f1b0;
      bVar3 = false;
    }
                    /* try { // try from 0089f2a4 to 0089f2a7 has its CatchHandler @ 0089f584 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar7 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 0089f2b4 to 0089f2cf has its CatchHandler @ 0089f534 */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(plVar8 + 7));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 0089f410 to 0089f41f has its CatchHandler @ 0089f52c */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_0089f5d0;
      }
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (*(int *)(plVar4 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 0089f3f0 to 0089f3ff has its CatchHandler @ 0089f590 */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_0089f5d0;
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
                    /* try { // try from 0089f350 to 0089f35b has its CatchHandler @ 0089f598 */
        folly::dynamic::dynamic(local_d0,(dynamic *)(plVar4 + 8));
        local_a0 = 0;
                    /* try { // try from 0089f360 to 0089f377 has its CatchHandler @ 0089f59c */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (this,param_3,uVar1,pcVar9,local_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 0089f388 to 0089f393 has its CatchHandler @ 0089f58c */
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
LAB_0089f5d0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0089f5d4  FUN_0089f5d4 =====

void FUN_0089f5d4(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 0089f5dc  FUN_0089f5dc =====

void FUN_0089f5dc(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 0089f5e4  FUN_0089f5e4 =====

void FUN_0089f5e4(undefined8 *param_1,long param_2,long param_3)

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
                    /* try { // try from 0089f628 to 0089f62f has its CatchHandler @ 0089f830 */
  plVar6 = (long *)operator_new(0x68);
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&PTR_FUN_00992a08;
                    /* try { // try from 0089f648 to 0089f653 has its CatchHandler @ 0089f818 */
  local_78 = FUN_008707fc(plVar6 + 3,&local_58,param_2 + 8);
  local_70 = plVar6;
  if ((local_50 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,local_50 + 1), lVar7 == 0)) {
    (**(code **)(*local_50 + 0x10))(local_50);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 0089f688 to 0089f68f has its CatchHandler @ 0089f808 */
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
                    /* try { // try from 0089f6dc to 0089f6f3 has its CatchHandler @ 0089f7d8 */
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
                    /* try { // try from 0089f748 to 0089f753 has its CatchHandler @ 0089f7b8 */
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


// ===== 0089f858  FUN_0089f858 =====

void FUN_0089f858(void)

{
  return;
}


// ===== 0089f85c  FUN_0089f85c =====

void FUN_0089f85c(long param_1)

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


// ===== 0089f8ac  FUN_0089f8ac =====

void FUN_0089f8ac(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009989b0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0089f8bc  FUN_0089f8bc =====

void FUN_0089f8bc(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009989b0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0089f8ec  FUN_0089f8ec =====

void FUN_0089f8ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0089f8f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 0089f8f8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0089f8fc  FUN_0089f8fc =====

void FUN_0089f8fc(long *param_1)

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


// ===== 0089f9bc  FUN_0089f9bc =====

void FUN_0089f9bc(long param_1)

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


// ===== 0089fa24  FUN_0089fa24 =====

bool FUN_0089fa24(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 0089fa3c  FUN_0089fa3c =====

bool FUN_0089fa3c(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 0089fa54  FUN_0089fa54 =====

void FUN_0089fa54(long param_1)

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


// ===== 0089faa4  FUN_0089faa4 =====

void FUN_0089faa4(long param_1)

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


// ===== 0089faf4  FUN_0089faf4 =====

void FUN_0089faf4(void)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x7f8);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_00998ac8;
  memset(__s,0,0x7e0);
                    /* try { // try from 0089fb30 to 0089fb43 has its CatchHandler @ 0089fbf0 */
  FUN_00788b10(__s,PTR_VTT_0099f0f0 + 0x10);
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
  puVar1 = PTR_vtable_0099f0e8;
  *(undefined4 *)(puVar2 + 0xd9) = 0;
  *(undefined2 *)((long)puVar2 + 0x6cc) = 0;
  *(undefined4 *)(puVar2 + 0xdf) = 0;
  puVar2[3] = puVar1 + 0x20;
  puVar2[0xe0] = 0;
  *(undefined4 *)(puVar2 + 0xe5) = 0;
  puVar2[0xe6] = 0;
  *(undefined4 *)(puVar2 + 0xeb) = 0;
  puVar2[0xec] = 0;
  *(undefined4 *)(puVar2 + 0xf1) = 0;
  puVar2[0xf2] = 0;
  puVar2[0xfd] = 0;
  puVar2[0xfc] = 0;
  puVar2[0xfb] = 0;
  puVar2[0xfa] = 0;
  puVar2[0xf9] = 0;
  puVar2[0xf8] = 0;
  puVar2[0xf7] = 0;
  puVar1 = 
  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGFeGaussianBlurComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_24RNSVGFeGaussianBlurPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebd8
  ;
  *(undefined4 *)(puVar2 + 0xfe) = 2;
  *(undefined8 **)puVar1 = __s;
  *(undefined8 **)(puVar1 + 8) = puVar2;
  return;
}


// ===== 0089fc0c  FUN_0089fc0c =====

void FUN_0089fc0c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00998ac8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0089fc1c  FUN_0089fc1c =====

void FUN_0089fc1c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00998ac8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0089fc4c  FUN_0089fc4c =====

void FUN_0089fc4c(long param_1)

{
  if ((*(byte *)(param_1 + 2000) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x7e0));
  }
  if ((*(byte *)(param_1 + 0x7b8) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x7c8));
  }
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x788);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x758);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x728);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x6f8);
  FUN_0078917c(param_1 + 0x18,PTR_VTT_0099f0f0 + 8);
  return;
}


// ===== 0089fcb8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0089fcbc  FUN_0089fcbc =====

void FUN_0089fcbc(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00998b18;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 0089fccc  FUN_0089fccc =====

void FUN_0089fccc(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00998b18;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 0089fcfc  FUN_0089fcfc =====

void FUN_0089fcfc(long param_1)

{
  if ((*(byte *)(param_1 + 2000) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x7e0));
  }
  if ((*(byte *)(param_1 + 0x7b8) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x7c8));
  }
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x788);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x758);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x728);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x6f8);
  FUN_0078917c(param_1 + 0x18,PTR_VTT_0099f0f0 + 8);
  return;
}


// ===== 0089fd68  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 0089fd6c  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_23RNSVGConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGFeMergeComponentNameEEEENS0_17RNSVGFeMergePropsEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENS8_14default_deleteISB_EEEERKNS0_29ComponentDescriptorParametersE =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_23RNSVGConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGFeMergeComponentNameEEEENS0_17RNSVGFeMergePropsEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENS8_14default_deleteISB_EEEERKNS0_29ComponentDescriptorParametersE
               (undefined8 *param_1,ComponentDescriptorParameters *param_2)

{
  byte bVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  ComponentDescriptor *this;
  long lVar5;
  long *plVar6;
  void *pvVar7;
  undefined4 local_11b0 [2];
  undefined8 *local_11a8;
  void *local_11a0;
  void *pvStack_1198;
  undefined8 local_1190;
  void *pvStack_1188;
  void *local_1180;
  undefined8 uStack_1178;
  void *local_1170;
  void *pvStack_1168;
  undefined8 uStack_1160;
  undefined8 uStack_1158;
  undefined *local_1150;
  undefined8 uStack_1148;
  undefined8 local_1140;
  undefined8 uStack_1138;
  undefined4 local_1130 [2];
  undefined8 local_1128;
  undefined8 uStack_1120;
  undefined8 local_1118;
  undefined8 uStack_1110;
  undefined4 local_1108;
  undefined4 local_1100;
  undefined1 local_10fc;
  undefined8 local_10fb;
  undefined8 local_10f3;
  undefined8 uStack_10eb;
  undefined8 local_10e3;
  undefined8 uStack_10db;
  undefined8 local_10d3;
  undefined8 uStack_10cb;
  undefined8 local_10c3;
  undefined6 uStack_10bb;
  undefined2 uStack_10b5;
  undefined6 uStack_10b3;
  undefined8 uStack_10ad;
  undefined4 local_10a5;
  undefined8 local_10a1;
  undefined1 local_1099;
  undefined1 uStack_1098;
  undefined7 uStack_1097;
  undefined8 uStack_1090;
  undefined8 uStack_1088;
  undefined8 uStack_1080;
  undefined8 local_1078;
  undefined8 uStack_1070;
  undefined8 local_1068;
  undefined8 uStack_1060;
  undefined8 local_1058;
  undefined8 uStack_1050;
  undefined8 local_1048;
  undefined8 uStack_1040;
  undefined8 uStack_1038;
  undefined8 local_1030;
  undefined8 local_1028;
  undefined8 uStack_1020;
  undefined8 local_1018;
  undefined4 uStack_1010;
  undefined4 uStack_100c;
  undefined4 uStack_1008;
  undefined4 uStack_1004;
  undefined4 uStack_1000;
  undefined4 uStack_ffc;
  undefined8 local_ff8;
  undefined8 uStack_ff0;
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
  undefined4 local_f78;
  undefined1 local_f74;
  undefined4 local_f70;
  undefined1 local_f6c;
  undefined1 local_f68;
  undefined1 local_f64;
  undefined1 local_f58;
  undefined8 local_f50;
  undefined8 uStack_f48;
  undefined8 uStack_f40;
  undefined8 uStack_f38;
  undefined8 local_f30;
  undefined8 uStack_f28;
  undefined8 uStack_f20;
  undefined1 uStack_f18;
  undefined7 local_f17;
  undefined1 uStack_f10;
  undefined8 uStack_f0f;
  undefined8 local_f04;
  undefined8 uStack_efc;
  undefined8 uStack_ef4;
  undefined8 uStack_eec;
  undefined8 local_ee4;
  undefined8 uStack_edc;
  undefined8 uStack_ed4;
  undefined8 uStack_ecc;
  undefined8 local_ec4;
  undefined8 uStack_ebc;
  undefined8 uStack_eb4;
  undefined5 uStack_eac;
  undefined3 local_ea7;
  undefined5 uStack_ea4;
  undefined1 local_e9c;
  undefined1 local_e98;
  undefined1 local_e94;
  undefined1 local_e90;
  undefined1 local_e8c;
  undefined1 local_e88;
  undefined1 local_e70;
  undefined8 local_e68;
  undefined8 uStack_e60;
  undefined8 local_e58;
  undefined4 local_e50;
  undefined1 local_e4c;
  undefined4 local_e4b;
  undefined1 local_e47;
  undefined1 local_e46;
  undefined8 local_e40;
  undefined8 uStack_e38;
  undefined8 uStack_e30;
  undefined8 uStack_e28;
  undefined8 local_e20;
  undefined7 uStack_e18;
  undefined4 uStack_e11;
  undefined8 local_e0c;
  undefined1 local_e04;
  undefined1 local_dfc;
  undefined1 local_df8;
  undefined1 local_df0;
  undefined1 local_dec;
  undefined1 local_de4;
  undefined1 local_de0;
  undefined1 local_dd8;
  undefined1 local_dd4;
  undefined1 local_dcc;
  undefined1 local_dc8;
  undefined1 local_dc0;
  undefined1 local_dbc;
  undefined1 local_db4;
  undefined1 local_db0;
  undefined1 local_da8;
  undefined1 local_da4;
  undefined1 local_d9c;
  undefined1 local_d98;
  undefined1 local_d90;
  undefined1 local_d8c;
  undefined1 local_d84;
  undefined1 local_d80;
  undefined1 local_d78;
  undefined1 local_d74;
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
  undefined1 local_d18;
  undefined1 local_d14;
  undefined1 local_d10;
  undefined1 local_d0c;
  undefined8 local_d08;
  undefined8 uStack_d00;
  undefined8 local_cf8;
  undefined8 uStack_cf0;
  undefined8 uStack_ce8;
  undefined8 uStack_ce0;
  undefined2 local_cd8;
  undefined8 local_cd4;
  undefined1 local_ccc;
  undefined8 local_cc8;
  undefined8 local_cc0;
  undefined8 uStack_cb8;
  undefined1 local_cb0;
  undefined8 local_ca8;
  undefined8 uStack_ca0;
  undefined8 uStack_c98;
  undefined8 uStack_c90;
  undefined8 local_c88;
  undefined8 uStack_c80;
  undefined8 uStack_c78;
  undefined8 uStack_c70;
  undefined8 local_c68;
  undefined8 uStack_c60;
  undefined8 uStack_c58;
  undefined8 uStack_c50;
  undefined8 local_c48;
  undefined8 uStack_c40;
  undefined8 uStack_c38;
  undefined8 uStack_c30;
  undefined8 local_c28;
  undefined8 uStack_c20;
  undefined8 uStack_c18;
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
  undefined8 uStack_bc0;
  undefined8 local_bb8;
  undefined6 uStack_bb0;
  undefined2 uStack_baa;
  undefined6 uStack_ba8;
  undefined1 local_ba0;
  undefined1 local_b9c;
  undefined1 local_b98;
  undefined8 local_b94;
  undefined8 uStack_b8c;
  undefined1 local_b84;
  undefined8 local_b80;
  undefined2 local_b78;
  undefined1 local_b76;
  undefined4 local_b74;
  undefined1 local_b70;
  undefined1 local_b10;
  undefined1 local_b08;
  undefined1 local_aa8;
  undefined4 local_aa0;
  undefined2 local_a9c;
  undefined1 local_a98;
  undefined1 local_a94;
  undefined1 local_a90;
  undefined1 local_a8c;
  undefined1 local_a88;
  undefined1 local_a84;
  undefined1 local_a80;
  undefined1 local_a7c;
  undefined1 local_a78;
  undefined1 local_a74;
  undefined4 local_a70;
  undefined8 local_a68;
  undefined4 local_a40;
  undefined8 local_a38;
  undefined4 local_a10;
  undefined8 local_a08;
  undefined4 local_9e0;
  undefined8 local_9d8;
  undefined8 local_9b0;
  undefined8 uStack_9a8;
  undefined8 local_9a0;
  undefined8 uStack_998;
  undefined8 local_990;
  undefined8 uStack_988;
  undefined4 local_980 [2];
  undefined8 local_978;
  undefined8 uStack_970;
  undefined8 local_968;
  undefined8 local_960;
  undefined8 uStack_958;
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
  pvStack_1188 = (void *)0x0;
  local_1190 = 0;
  uStack_1178 = 0;
  local_1180 = (void *)0x0;
  pvStack_1168 = (void *)0x0;
  local_1170 = (void *)0x0;
  uStack_1158 = 0;
  uStack_1160 = 0;
  pvStack_1198 = (void *)0x0;
  local_11a0 = (void *)0x0;
                    /* try { // try from 0089fdc0 to 0089fdcb has its CatchHandler @ 008a0410 */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_11a0);
  local_f8 = 0;
  *(undefined ***)this = &PTR_FUN_00998b68;
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
                    /* try { // try from 0089fe38 to 0089fe43 has its CatchHandler @ 008a0440 */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1b0);
  local_100 = CONCAT44(local_100._4_4_,0x3f800000);
  local_11b0[0] = 0xffffffff;
  uStack_108 = 0;
  local_110 = (void *)0x0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_11a8 = &local_1b0;
  facebook::react::RawProps::facebook::react::RawProps::parse(&local_f8,this + 0x38);
  memset(local_1130,0,0x7b0);
  local_980[0] = 5;
  local_968 = 0;
  local_1150 = *(undefined **)(PTR_VTT_0099f108 + 0x20);
  local_1130[0] = 5;
  uStack_1138 = 0;
  local_1140 = 0;
  uStack_1148 = 0;
  local_960 = 0;
  uStack_958 = 0x3f800000;
  uStack_970 = 0;
  local_978 = 0;
  uStack_1120 = 0;
  local_1128 = 0;
  uStack_1110 = 0;
  local_1118 = 0;
  local_1108 = 0x3f800000;
  folly::dynamic::folly::dynamic::destroy(local_980);
  local_10fc = 0;
  local_10a1 = 0;
  uStack_bc0 = _UNK_00488920;
  local_bc8 = _DAT_00488918;
  local_10fb = _s__00375408;
  uStack_cb8 = _UNK_00371598;
  local_cc0 = _DAT_00371590;
  uStack_bd0 = _UNK_00488910;
  local_bd8 = _DAT_00488908;
  local_fe4 = 0;
  uStack_be0 = _UNK_00488900;
  local_be8 = _DAT_004888f8;
  uStack_bf0 = _UNK_004888f0;
  local_bf8 = _DAT_004888e8;
  uStack_ba8 = 0;
  local_fdc = 0;
  uStack_1010 = 0;
  local_1018 = 0;
  uStack_ffc = 0;
  uStack_1020 = 0;
  local_1028 = 0;
  uStack_bb0 = 0;
  uStack_baa = 0;
  local_bb8 = 0;
  local_1100 = 0x10410710;
  local_10a5 = 0x40004;
  uStack_1004 = 0;
  uStack_1000 = 0;
  uStack_100c = 0;
  uStack_1008 = 0;
  uStack_ff0 = 0;
  local_ff8 = 0;
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
  local_f78 = 0x7fc00000;
  local_f70 = 0x7fc00000;
  uStack_f0f = 0;
  uStack_f10 = 0;
  uStack_efc = 0;
  local_f04 = 0;
  uStack_eec = 0;
  uStack_ef4 = 0;
  uStack_edc = 0;
  local_ee4 = 0;
  uStack_ecc = 0;
  uStack_ed4 = 0;
  uStack_ebc = 0;
  local_ec4 = 0;
  uStack_eac = 0;
  uStack_eb4 = 0;
  local_ea7 = 0;
  uStack_ea4 = 0;
  local_e4c = 1;
  local_e4b = 0;
  local_e46 = 0x23;
  local_e0c = 0x3f800000;
  uStack_cf0 = 0;
  local_cf8 = 0;
  uStack_ce0 = 0;
  uStack_ce8 = 0;
  uStack_d00 = 0;
  local_d08 = 0;
  local_cd4 = 0;
  uStack_ca0 = 0;
  local_ca8 = 0;
  uStack_c90 = 0;
  uStack_c98 = 0;
  uStack_c80 = 0;
  local_c88 = 0;
  uStack_c70 = 0;
  uStack_c78 = 0;
  uStack_c60 = 0;
  local_c68 = 0;
  uStack_c50 = 0;
  uStack_c58 = 0;
  uStack_c40 = 0;
  local_c48 = 0;
  uStack_c30 = 0;
  uStack_c38 = 0;
  uStack_c20 = 0;
  local_c28 = 0;
  uStack_c10 = 0;
  uStack_c18 = 0;
  uStack_c00 = 0;
  local_c08 = 0;
  uStack_1097 = 0;
  uStack_10eb = 0;
  local_10f3 = 0;
  uStack_10db = 0;
  local_10e3 = 0;
  uStack_10cb = 0;
  local_10d3 = 0;
  uStack_10bb = 0;
  local_10c3 = 0;
  uStack_10ad = 0;
  uStack_10b5 = 0;
  uStack_10b3 = 0;
  local_1099 = 0;
  uStack_1098 = 0;
  uStack_1088 = 0;
  uStack_1090 = 0;
  local_1078 = 0;
  uStack_1080 = 0;
  local_1068 = 0;
  uStack_1070 = 0;
  local_1058 = 0;
  uStack_1060 = 0;
  local_1048 = 0;
  uStack_1050 = 0;
  uStack_1038 = 0;
  uStack_1040 = 0;
  local_1030 = 0;
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
  local_f74 = 0;
  local_f6c = 0;
  local_f68 = 0;
  local_f64 = 0;
  local_f58 = 0;
  local_e9c = 0;
  local_e98 = 0;
  local_e94 = 0;
  local_e90 = 0;
  local_e8c = 0;
  local_e88 = 0;
  local_e70 = 0;
  uStack_f48 = 0;
  local_f50 = 0;
  uStack_f38 = 0;
  uStack_f40 = 0;
  uStack_f28 = 0;
  local_f30 = 0;
  uStack_f18 = 0;
  local_f17 = 0;
  uStack_f20 = 0;
  uStack_e60 = 0;
  local_e68 = 0;
  local_e58 = 0;
  local_e50 = 0;
  local_e47 = 0;
  uStack_e38 = 0;
  local_e40 = 0;
  uStack_e28 = 0;
  uStack_e30 = 0;
  uStack_e18 = 0;
  uStack_e11 = 0;
  local_e20 = 0;
  local_e04 = 0;
  local_dfc = 0;
  local_df8 = 0;
  local_df0 = 0;
  local_dec = 0;
  local_de4 = 0;
  local_de0 = 0;
  local_dd8 = 0;
  local_dd4 = 0;
  local_dcc = 0;
  local_dc8 = 0;
  local_dc0 = 0;
  local_dbc = 0;
  local_db4 = 0;
  local_db0 = 0;
  local_da8 = 0;
  local_da4 = 0;
  local_d9c = 0;
  local_d98 = 0;
  local_d90 = 0;
  local_d8c = 0;
  local_d84 = 0;
  local_d80 = 0;
  local_d78 = 0;
  local_d74 = 0;
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
  local_d18 = 0;
  local_d14 = 0;
  local_d10 = 0;
  local_d0c = 0;
  local_cc8 = 0;
  local_cd8 = 0;
  local_ccc = 0;
  local_cb0 = 0;
  local_ba0 = 0;
  local_b9c = 0;
  local_b98 = 0;
  local_b80 = 0;
  uStack_b8c = 0;
  local_b94 = 0;
  local_b84 = 0;
  local_b78 = 0x101;
  local_b76 = 0;
  local_b74 = 0;
  local_b70 = 0;
  local_b10 = 0;
  local_b08 = 0;
  local_aa8 = 0;
  local_a98 = 0;
  local_a94 = 0;
  local_a90 = 0;
  local_a8c = 0;
  local_a88 = 0;
  local_a84 = 0;
  local_a80 = 0;
  local_a7c = 0;
  local_a78 = 0;
  local_a74 = 0;
  local_a9c = 0;
  local_aa0 = 0;
  local_1150 = PTR_vtable_0099f100 + 0x20;
  local_a70 = 0;
  local_a68 = 0;
  local_a40 = 0;
  local_a38 = 0;
  local_a10 = 0;
  local_a08 = 0;
  local_9e0 = 0;
  local_9d8 = 0;
  uStack_9a8 = 0;
  local_9b0 = 0;
  uStack_998 = 0;
  local_9a0 = 0;
  uStack_988 = 0;
  local_990 = 0;
                    /* try { // try from 008a025c to 008a026f has its CatchHandler @ 008a0440 */
  facebook::react::RNSVGFeMergeProps::RNSVGFeMergeProps
            ((RNSVGFeMergeProps *)local_980,(PropsParserContext *)local_11b0,
             (RNSVGFeMergeProps *)&local_1150,(RawProps *)&local_f8);
  FUN_008a0f04(local_980);
  FUN_008a0f04(&local_1150);
  facebook::react::RawPropsParser::facebook::react::RawPropsParser::postPrepare(this + 0x38);
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
                    /* try { // try from 008a036c to 008a0377 has its CatchHandler @ 008a0444 */
        (*(code *)(&PTR_FUN_0098f088)[*(uint *)((long)pvVar3 + -8)])
                  (&local_1150,(void *)((long)pvVar3 + -0x38));
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
  facebook::jsi::Value::~Value((Value *)local_e0);
  if (local_1170 != (void *)0x0) {
    pvStack_1168 = local_1170;
    operator_delete(local_1170);
  }
  if (pvStack_1188 != (void *)0x0) {
    local_1180 = pvStack_1188;
    operator_delete(pvStack_1188);
  }
  if (local_11a0 != (void *)0x0) {
    pvStack_1198 = local_11a0;
    operator_delete(local_11a0);
  }
  *param_1 = this;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008a0448  FUN_008a0448 =====

void FUN_008a0448(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 008a046c  FUN_008a046c =====

undefined * FUN_008a046c(void)

{
  return PTR_RNSVGFeMergeComponentName_0099f0f8;
}


// ===== 008a0478  FUN_008a0478 =====

undefined * FUN_008a0478(void)

{
  return PTR_RNSVGFeMergeComponentName_0099f0f8;
}


// ===== 008a0484  FUN_008a0484 =====

undefined8 FUN_008a0484(void)

{
  return 0x61;
}


// ===== 008a048c  FUN_008a048c =====

void FUN_008a048c(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  RNSVGLayoutableShadowNode *pRVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  
  lVar2 = tpidr_el0;
  lVar6 = *(long *)(lVar2 + 0x28);
  uVar3 = (**(code **)(*param_2 + 0x20))();
  puVar4 = (undefined8 *)operator_new(0x400);
  pRVar1 = (RNSVGLayoutableShadowNode *)(puVar4 + 3);
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_00998bf8;
                    /* try { // try from 008a04f8 to 008a0507 has its CatchHandler @ 008a056c */
  facebook::react::RNSVGLayoutableShadowNode::RNSVGLayoutableShadowNode
            (pRVar1,param_3,param_4,uVar3);
  lVar5 = *param_2;
  puVar4[3] = &PTR_FUN_00998c48;
                    /* try { // try from 008a0520 to 008a052b has its CatchHandler @ 008a055c */
  (**(code **)(lVar5 + 0x60))(param_2,pRVar1);
  *param_1 = pRVar1;
  param_1[1] = puVar4;
  if (*(long *)(lVar2 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008a059c  FUN_008a059c =====

void FUN_008a059c(undefined8 *param_1,long *param_2,ShadowNode *param_3,ShadowNodeFragment *param_4)

{
  RNSVGLayoutableShadowNode *pRVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  RNSVGLayoutableShadowNode *local_78;
  long *local_70;
  RNSVGLayoutableShadowNode *local_68;
  long *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  plVar3 = (long *)operator_new(0x400);
  pRVar1 = (RNSVGLayoutableShadowNode *)(plVar3 + 3);
  plVar3[1] = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_00998bf8;
                    /* try { // try from 008a05f4 to 008a0603 has its CatchHandler @ 008a06d0 */
  facebook::react::RNSVGLayoutableShadowNode::RNSVGLayoutableShadowNode(pRVar1,param_3,param_4);
  plVar3[3] = (long)&PTR_FUN_00998c48;
  local_68 = pRVar1;
  local_60 = plVar3;
                    /* try { // try from 008a0614 to 008a0623 has its CatchHandler @ 008a06e8 */
  facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::
  completeClone(pRVar1,param_3,param_4);
  local_78 = pRVar1;
  local_70 = plVar3;
  FUN_00757d00(1,plVar3 + 1);
                    /* try { // try from 008a0634 to 008a0643 has its CatchHandler @ 008a06c0 */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_78);
  plVar3 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar4 = FUN_00757990(0xffffffffffffffff,local_70 + 1), lVar4 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pRVar1 = local_68;
                    /* try { // try from 008a0680 to 008a068b has its CatchHandler @ 008a06e8 */
  (**(code **)(*param_2 + 0x60))(param_2,local_68);
  *param_1 = pRVar1;
  param_1[1] = local_60;
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008a0710  FUN_008a0710 =====

void FUN_008a0710(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x008a0720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 008a0724  FUN_008a0724 =====

void FUN_008a0724(undefined8 *param_1,long param_2,PropsParserContext *param_3,long *param_4,
                 RawProps *param_5)

{
  RNSVGFeMergeProps *this;
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
  RNSVGFeMergeProps *pRVar12;
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
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGFeMergeComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGFeMergePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebf0
         & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGFeMergeComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGFeMergePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebf0
                                   ), iVar6 != 0)) {
                    /* try { // try from 008a0b58 to 008a0b5b has its CatchHandler @ 008a0b88 */
      FUN_008a124c();
      __cxa_atexit(FUN_008a11fc,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGFeMergeComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGFeMergePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebe8
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGFeMergeComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGFeMergePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebf0
                         );
    }
    lVar11 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGFeMergeComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGFeMergePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebe8
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGFeMergeComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGFeMergePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebe8
    ;
    param_1[1] = lVar11;
    if (lVar11 != 0) {
      FUN_00757d00(1,lVar11 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    pRVar12 = (RNSVGFeMergeProps *)*param_4;
    if (pRVar12 == (RNSVGFeMergeProps *)0x0) {
      if (((*
            PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGFeMergeComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGFeMergePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebf0
           & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGFeMergeComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGFeMergePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebf0
                                     ), iVar6 != 0)) {
                    /* try { // try from 008a0ad8 to 008a0adb has its CatchHandler @ 008a0ba0 */
        FUN_008a124c();
        __cxa_atexit(FUN_008a11fc,
                     PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGFeMergeComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGFeMergePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebe8
                     ,&PTR_LOOP_008d5d30);
        __cxa_guard_release(
                           PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGFeMergeComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGFeMergePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebf0
                           );
      }
      pRVar12 = *(RNSVGFeMergeProps **)
                 PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGFeMergeComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGFeMergePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebe8
      ;
    }
    plVar8 = (long *)operator_new(0x7e8);
    this = (RNSVGFeMergeProps *)(plVar8 + 3);
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = (long)&PTR_FUN_00998d60;
                    /* try { // try from 008a0804 to 008a0817 has its CatchHandler @ 008a0c14 */
    facebook::react::RNSVGFeMergeProps::RNSVGFeMergeProps(this,param_3,pRVar12,param_5);
                    /* try { // try from 008a081c to 008a082f has its CatchHandler @ 008a0c2c */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if ((((uVar7 & 1) == 0) ||
        (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar7 & 1) == 0)) ||
       (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
                enablePropsUpdateReconciliationAndroid(), (uVar7 & 1) == 0)) {
LAB_008a0858:
      FUN_00757d00(1,plVar8 + 1);
      if (*param_4 == 0) {
        if (((*
              PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGFeMergeComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGFeMergePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebf0
             & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(
                                       PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGFeMergeComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGFeMergePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebf0
                                       ), iVar6 != 0)) {
                    /* try { // try from 008a0b18 to 008a0b1b has its CatchHandler @ 008a0b8c */
          FUN_008a124c();
          __cxa_atexit(FUN_008a11fc,
                       PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGFeMergeComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGFeMergePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebe8
                       ,&PTR_LOOP_008d5d30);
          __cxa_guard_release(
                             PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGFeMergeComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGFeMergePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebf0
                             );
        }
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 008a08c0 to 008a08d3 has its CatchHandler @ 008a0bb8 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*(undefined8 *)
                         PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGFeMergeComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGFeMergePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebe8
                   ,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
LAB_008a090c:
          (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
        }
        else if (local_b0 != (dynamic *)0x0) {
          lVar11 = 5;
          pdVar10 = local_b0;
          goto LAB_008a090c;
        }
        if (plVar8 != (long *)0x0) goto LAB_008a0920;
      }
      else {
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 008a0874 to 008a0887 has its CatchHandler @ 008a0be0 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*param_4,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
        }
        else {
          if (local_b0 == (dynamic *)0x0) goto LAB_008a0920;
          lVar11 = 5;
          pdVar10 = local_b0;
        }
        (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
LAB_008a0920:
        lVar11 = FUN_00757990(0xffffffffffffffff,plVar8 + 1);
        if (lVar11 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 008a083c to 008a0847 has its CatchHandler @ 008a0bb4 */
      pcVar9 = (char *)(**(code **)(*(long *)this + 0x10))(this);
      iVar6 = strcmp(PTR_RNSVGFeMergeComponentName_0099f0f8,pcVar9);
      if (iVar6 != 0) goto LAB_008a0858;
      bVar3 = false;
    }
                    /* try { // try from 008a094c to 008a094f has its CatchHandler @ 008a0c2c */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar7 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 008a095c to 008a0977 has its CatchHandler @ 008a0bdc */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(plVar8 + 7));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 008a0ab8 to 008a0ac7 has its CatchHandler @ 008a0bd4 */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_008a0c78;
      }
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (*(int *)(plVar4 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 008a0a98 to 008a0aa7 has its CatchHandler @ 008a0c38 */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_008a0c78;
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
                    /* try { // try from 008a09f8 to 008a0a03 has its CatchHandler @ 008a0c40 */
        folly::dynamic::dynamic(local_d0,(dynamic *)(plVar4 + 8));
        local_a0 = 0;
                    /* try { // try from 008a0a08 to 008a0a1f has its CatchHandler @ 008a0c44 */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (this,param_3,uVar1,pcVar9,local_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 008a0a30 to 008a0a3b has its CatchHandler @ 008a0c34 */
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
LAB_008a0c78:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008a0c7c  FUN_008a0c7c =====

void FUN_008a0c7c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 008a0c84  FUN_008a0c84 =====

void FUN_008a0c84(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 008a0c8c  FUN_008a0c8c =====

void FUN_008a0c8c(undefined8 *param_1,long param_2,long param_3)

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
                    /* try { // try from 008a0cd0 to 008a0cd7 has its CatchHandler @ 008a0ed8 */
  plVar6 = (long *)operator_new(0x68);
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&PTR_FUN_00992a08;
                    /* try { // try from 008a0cf0 to 008a0cfb has its CatchHandler @ 008a0ec0 */
  local_78 = FUN_008707fc(plVar6 + 3,&local_58,param_2 + 8);
  local_70 = plVar6;
  if ((local_50 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,local_50 + 1), lVar7 == 0)) {
    (**(code **)(*local_50 + 0x10))(local_50);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 008a0d30 to 008a0d37 has its CatchHandler @ 008a0eb0 */
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
                    /* try { // try from 008a0d84 to 008a0d9b has its CatchHandler @ 008a0e80 */
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
                    /* try { // try from 008a0df0 to 008a0dfb has its CatchHandler @ 008a0e60 */
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


// ===== 008a0f00  FUN_008a0f00 =====

void FUN_008a0f00(void)

{
  return;
}


// ===== 008a0f04  FUN_008a0f04 =====

void FUN_008a0f04(long param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar2 = *(byte **)(param_1 + 0x7b8);
  if (pbVar2 != (byte *)0x0) {
    pbVar1 = *(byte **)(param_1 + 0x7c0);
    pbVar3 = pbVar2;
    if (pbVar1 != pbVar2) {
      do {
        pbVar3 = pbVar1 + -0x18;
        if ((*pbVar3 & 1) != 0) {
          operator_delete(*(void **)(pbVar1 + -8));
        }
        pbVar1 = pbVar3;
      } while (pbVar3 != pbVar2);
      pbVar3 = *(byte **)(param_1 + 0x7b8);
    }
    *(byte **)(param_1 + 0x7c0) = pbVar2;
    operator_delete(pbVar3);
  }
  if ((*(byte *)(param_1 + 0x7a0) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x7b0));
  }
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x770);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x740);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x710);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x6e0);
  FUN_0078917c(param_1,PTR_VTT_0099f108 + 8);
  return;
}


// ===== 008a0fb4  FUN_008a0fb4 =====

void FUN_008a0fb4(long param_1)

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


// ===== 008a1004  FUN_008a1004 =====

void FUN_008a1004(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00998bf8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008a1014  FUN_008a1014 =====

void FUN_008a1014(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00998bf8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008a1044  FUN_008a1044 =====

void FUN_008a1044(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x008a104c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 008a1050  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008a1054  FUN_008a1054 =====

void FUN_008a1054(long *param_1)

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


// ===== 008a1114  FUN_008a1114 =====

void FUN_008a1114(long param_1)

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


// ===== 008a117c  FUN_008a117c =====

bool FUN_008a117c(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 008a1194  FUN_008a1194 =====

bool FUN_008a1194(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 008a11ac  FUN_008a11ac =====

void FUN_008a11ac(long param_1)

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


// ===== 008a11fc  FUN_008a11fc =====

void FUN_008a11fc(long param_1)

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


// ===== 008a124c  FUN_008a124c =====

void FUN_008a124c(void)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x7e8);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_00998d10;
  memset(__s,0,2000);
                    /* try { // try from 008a1288 to 008a129b has its CatchHandler @ 008a133c */
  FUN_00788b10(__s,PTR_VTT_0099f108 + 0x10);
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
  puVar1 = PTR_vtable_0099f100;
  *(undefined4 *)(puVar2 + 0xd9) = 0;
  *(undefined2 *)((long)puVar2 + 0x6cc) = 0;
  *(undefined4 *)(puVar2 + 0xdf) = 0;
  puVar2[3] = puVar1 + 0x20;
  puVar2[0xe0] = 0;
  *(undefined4 *)(puVar2 + 0xe5) = 0;
  puVar2[0xe6] = 0;
  *(undefined4 *)(puVar2 + 0xeb) = 0;
  puVar2[0xec] = 0;
  *(undefined4 *)(puVar2 + 0xf1) = 0;
  puVar2[0xf2] = 0;
  puVar2[0xfc] = 0;
  puVar2[0xfb] = 0;
  puVar2[0xfa] = 0;
  puVar2[0xf9] = 0;
  puVar1 = 
  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGFeMergeComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGFeMergePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebe8
  ;
  puVar2[0xf8] = 0;
  puVar2[0xf7] = 0;
  *(undefined8 **)puVar1 = __s;
  *(undefined8 **)(puVar1 + 8) = puVar2;
  return;
}


// ===== 008a1358  FUN_008a1358 =====

void FUN_008a1358(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00998d10;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008a1368  FUN_008a1368 =====

void FUN_008a1368(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00998d10;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008a1398  FUN_008a1398 =====

void FUN_008a1398(long param_1)

{
  FUN_008a0f04(param_1 + 0x18);
  return;
}


// ===== 008a13a0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008a13a4  FUN_008a13a4 =====

void FUN_008a13a4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00998d60;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008a13b4  FUN_008a13b4 =====

void FUN_008a13b4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00998d60;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008a13e4  FUN_008a13e4 =====

void FUN_008a13e4(long param_1)

{
  FUN_008a0f04(param_1 + 0x18);
  return;
}


// ===== 008a13ec  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008a13f0  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_23RNSVGConcreteShadowNodeIXadsoKcL_ZNS0_26RNSVGFeOffsetComponentNameEEEENS0_18RNSVGFeOffsetPropsEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENS8_14default_deleteISB_EEEERKNS0_29ComponentDescriptorParametersE =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_23RNSVGConcreteShadowNodeIXadsoKcL_ZNS0_26RNSVGFeOffsetComponentNameEEEENS0_18RNSVGFeOffsetPropsEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENS8_14default_deleteISB_EEEERKNS0_29ComponentDescriptorParametersE
               (undefined8 *param_1,ComponentDescriptorParameters *param_2)

{
  byte bVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  ComponentDescriptor *this;
  long lVar5;
  long *plVar6;
  void *pvVar7;
  undefined4 local_1270 [2];
  undefined8 *local_1268;
  void *local_1260;
  void *pvStack_1258;
  undefined8 local_1250;
  void *pvStack_1248;
  void *local_1240;
  undefined8 uStack_1238;
  void *local_1230;
  void *pvStack_1228;
  undefined8 uStack_1220;
  undefined8 uStack_1218;
  undefined *local_1210;
  undefined8 uStack_1208;
  undefined8 local_1200;
  undefined8 uStack_11f8;
  undefined4 local_11f0 [2];
  undefined8 local_11e8;
  undefined8 uStack_11e0;
  undefined8 local_11d8;
  undefined8 uStack_11d0;
  undefined4 local_11c8;
  undefined4 local_11c0;
  undefined1 local_11bc;
  undefined8 local_11bb;
  undefined8 local_11b3;
  undefined8 uStack_11ab;
  undefined8 local_11a3;
  undefined8 uStack_119b;
  undefined8 local_1193;
  undefined8 uStack_118b;
  undefined8 local_1183;
  undefined6 uStack_117b;
  undefined2 uStack_1175;
  undefined6 uStack_1173;
  undefined8 uStack_116d;
  undefined4 local_1165;
  undefined8 local_1161;
  undefined1 local_1159;
  undefined1 uStack_1158;
  undefined7 uStack_1157;
  undefined8 uStack_1150;
  undefined8 uStack_1148;
  undefined8 uStack_1140;
  undefined8 local_1138;
  undefined8 uStack_1130;
  undefined8 local_1128;
  undefined8 uStack_1120;
  undefined8 local_1118;
  undefined8 uStack_1110;
  undefined8 local_1108;
  undefined8 uStack_1100;
  undefined8 uStack_10f8;
  undefined8 local_10f0;
  undefined8 local_10e8;
  undefined8 uStack_10e0;
  undefined8 local_10d8;
  undefined4 uStack_10d0;
  undefined4 uStack_10cc;
  undefined4 uStack_10c8;
  undefined4 uStack_10c4;
  undefined4 uStack_10c0;
  undefined4 uStack_10bc;
  undefined8 local_10b8;
  undefined8 uStack_10b0;
  undefined4 local_10a8;
  undefined1 local_10a4;
  undefined4 local_10a0;
  undefined1 local_109c;
  undefined4 local_1098;
  undefined1 local_1094;
  undefined4 local_1090;
  undefined1 local_108c;
  undefined4 local_1088;
  undefined1 local_1084;
  undefined4 local_1080;
  undefined1 local_107c;
  undefined4 local_1078;
  undefined1 local_1074;
  undefined4 local_1070;
  undefined1 local_106c;
  undefined4 local_1068;
  undefined1 local_1064;
  undefined4 local_1060;
  undefined1 local_105c;
  undefined4 local_1058;
  undefined1 local_1054;
  undefined4 local_1050;
  undefined1 local_104c;
  undefined4 local_1048;
  undefined1 local_1044;
  undefined4 local_1040;
  undefined1 local_103c;
  undefined4 local_1038;
  undefined1 local_1034;
  undefined4 local_1030;
  undefined1 local_102c;
  undefined1 local_1028;
  undefined1 local_1024;
  undefined1 local_1018;
  undefined8 local_1010;
  undefined8 uStack_1008;
  undefined8 uStack_1000;
  undefined8 uStack_ff8;
  undefined8 local_ff0;
  undefined8 uStack_fe8;
  undefined8 uStack_fe0;
  undefined1 uStack_fd8;
  undefined7 local_fd7;
  undefined1 uStack_fd0;
  undefined8 uStack_fcf;
  undefined8 local_fc4;
  undefined8 uStack_fbc;
  undefined8 uStack_fb4;
  undefined8 uStack_fac;
  undefined8 local_fa4;
  undefined8 uStack_f9c;
  undefined8 uStack_f94;
  undefined8 uStack_f8c;
  undefined8 local_f84;
  undefined8 uStack_f7c;
  undefined8 uStack_f74;
  undefined5 uStack_f6c;
  undefined3 local_f67;
  undefined5 uStack_f64;
  undefined1 local_f5c;
  undefined1 local_f58;
  undefined1 local_f54;
  undefined1 local_f50;
  undefined1 local_f4c;
  undefined1 local_f48;
  undefined1 local_f30;
  undefined8 local_f28;
  undefined8 uStack_f20;
  undefined8 local_f18;
  undefined4 local_f10;
  undefined1 local_f0c;
  undefined4 local_f0b;
  undefined1 local_f07;
  undefined1 local_f06;
  undefined8 local_f00;
  undefined8 uStack_ef8;
  undefined8 uStack_ef0;
  undefined8 uStack_ee8;
  undefined8 local_ee0;
  undefined7 uStack_ed8;
  undefined4 uStack_ed1;
  undefined8 local_ecc;
  undefined1 local_ec4;
  undefined1 local_ebc;
  undefined1 local_eb8;
  undefined1 local_eb0;
  undefined1 local_eac;
  undefined1 local_ea4;
  undefined1 local_ea0;
  undefined1 local_e98;
  undefined1 local_e94;
  undefined1 local_e8c;
  undefined1 local_e88;
  undefined1 local_e80;
  undefined1 local_e7c;
  undefined1 local_e74;
  undefined1 local_e70;
  undefined1 local_e68;
  undefined1 local_e64;
  undefined1 local_e5c;
  undefined1 local_e58;
  undefined1 local_e50;
  undefined1 local_e4c;
  undefined1 local_e44;
  undefined1 local_e40;
  undefined1 local_e38;
  undefined1 local_e34;
  undefined1 local_e2c;
  undefined1 local_e28;
  undefined1 local_e24;
  undefined1 local_e20;
  undefined1 local_e1c;
  undefined1 local_e18;
  undefined1 local_e14;
  undefined1 local_e10;
  undefined1 local_e0c;
  undefined1 local_e08;
  undefined1 local_e04;
  undefined1 local_e00;
  undefined1 local_dfc;
  undefined1 local_df8;
  undefined1 local_df4;
  undefined1 local_df0;
  undefined1 local_dec;
  undefined1 local_de8;
  undefined1 local_de4;
  undefined1 local_de0;
  undefined1 local_ddc;
  undefined1 local_dd8;
  undefined1 local_dd4;
  undefined1 local_dd0;
  undefined1 local_dcc;
  undefined8 local_dc8;
  undefined8 uStack_dc0;
  undefined8 local_db8;
  undefined8 uStack_db0;
  undefined8 uStack_da8;
  undefined8 uStack_da0;
  undefined2 local_d98;
  undefined8 local_d94;
  undefined1 local_d8c;
  undefined8 local_d88;
  undefined8 local_d80;
  undefined8 uStack_d78;
  undefined1 local_d70;
  undefined8 local_d68;
  undefined8 uStack_d60;
  undefined8 uStack_d58;
  undefined8 uStack_d50;
  undefined8 local_d48;
  undefined8 uStack_d40;
  undefined8 uStack_d38;
  undefined8 uStack_d30;
  undefined8 local_d28;
  undefined8 uStack_d20;
  undefined8 uStack_d18;
  undefined8 uStack_d10;
  undefined8 local_d08;
  undefined8 uStack_d00;
  undefined8 uStack_cf8;
  undefined8 uStack_cf0;
  undefined8 local_ce8;
  undefined8 uStack_ce0;
  undefined8 uStack_cd8;
  undefined8 uStack_cd0;
  undefined8 local_cc8;
  undefined8 uStack_cc0;
  undefined8 local_cb8;
  undefined8 uStack_cb0;
  undefined8 local_ca8;
  undefined8 uStack_ca0;
  undefined8 local_c98;
  undefined8 uStack_c90;
  undefined8 local_c88;
  undefined8 uStack_c80;
  undefined8 local_c78;
  undefined6 uStack_c70;
  undefined2 uStack_c6a;
  undefined6 uStack_c68;
  undefined1 local_c60;
  undefined1 local_c5c;
  undefined1 local_c58;
  undefined8 local_c54;
  undefined8 uStack_c4c;
  undefined1 local_c44;
  undefined8 local_c40;
  undefined2 local_c38;
  undefined1 local_c36;
  undefined4 local_c34;
  undefined1 local_c30;
  undefined1 local_bd0;
  undefined1 local_bc8;
  undefined1 local_b68;
  undefined4 local_b60;
  undefined2 local_b5c;
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
  undefined4 local_b30;
  undefined8 local_b28;
  undefined4 local_b00;
  undefined8 local_af8;
  undefined4 local_ad0;
  undefined8 local_ac8;
  undefined4 local_aa0;
  undefined8 local_a98;
  undefined8 local_a70;
  undefined8 uStack_a68;
  undefined8 local_a60;
  undefined8 uStack_a58;
  undefined8 local_a50;
  undefined8 uStack_a48;
  undefined4 local_a40;
  undefined8 local_a38;
  undefined4 local_a10;
  undefined8 local_a08;
  undefined4 local_9e0 [2];
  undefined8 local_9d8;
  undefined8 uStack_9d0;
  undefined8 local_9c8;
  undefined8 local_9c0;
  undefined8 uStack_9b8;
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
  pvStack_1248 = (void *)0x0;
  local_1250 = 0;
  uStack_1238 = 0;
  local_1240 = (void *)0x0;
  pvStack_1228 = (void *)0x0;
  local_1230 = (void *)0x0;
  uStack_1218 = 0;
  uStack_1220 = 0;
  pvStack_1258 = (void *)0x0;
  local_1260 = (void *)0x0;
                    /* try { // try from 008a1444 to 008a144f has its CatchHandler @ 008a1ab4 */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_1260);
  local_f8 = 0;
  *(undefined ***)this = &PTR_FUN_00998db0;
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
                    /* try { // try from 008a14bc to 008a14cf has its CatchHandler @ 008a1ae4 */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1b0);
  local_100 = CONCAT44(local_100._4_4_,0x3f800000);
  local_1270[0] = 0xffffffff;
  uStack_108 = 0;
  local_110 = (void *)0x0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_1268 = &local_1b0;
  facebook::react::RawProps::facebook::react::RawProps::parse(&local_f8,this + 0x38);
  memset(local_11f0,0,0x810);
  local_9e0[0] = 5;
  local_9c8 = 0;
  local_1210 = *(undefined **)(PTR_VTT_0099f120 + 0x20);
  local_11f0[0] = 5;
  uStack_11f8 = 0;
  local_1200 = 0;
  uStack_1208 = 0;
  local_9c0 = 0;
  uStack_9b8 = 0x3f800000;
  uStack_9d0 = 0;
  local_9d8 = 0;
  uStack_11e0 = 0;
  local_11e8 = 0;
  uStack_11d0 = 0;
  local_11d8 = 0;
  local_11c8 = 0x3f800000;
  folly::dynamic::folly::dynamic::destroy(local_9e0);
  local_11bc = 0;
  local_1161 = 0;
  uStack_c80 = _UNK_00488920;
  local_c88 = _DAT_00488918;
  local_11bb = _s__00375408;
  uStack_d78 = _UNK_00371598;
  local_d80 = _DAT_00371590;
  uStack_c90 = _UNK_00488910;
  local_c98 = _DAT_00488908;
  local_10a4 = 0;
  uStack_ca0 = _UNK_00488900;
  local_ca8 = _DAT_004888f8;
  uStack_cb0 = _UNK_004888f0;
  local_cb8 = _DAT_004888e8;
  uStack_c68 = 0;
  local_109c = 0;
  uStack_10d0 = 0;
  local_10d8 = 0;
  uStack_10bc = 0;
  uStack_10e0 = 0;
  local_10e8 = 0;
  uStack_c70 = 0;
  uStack_c6a = 0;
  local_c78 = 0;
  local_11c0 = 0x10410710;
  local_1165 = 0x40004;
  uStack_10c4 = 0;
  uStack_10c0 = 0;
  uStack_10cc = 0;
  uStack_10c8 = 0;
  uStack_10b0 = 0;
  local_10b8 = 0;
  local_10a8 = 0x7fc00000;
  local_10a0 = 0x7fc00000;
  local_1098 = 0x7fc00000;
  local_1090 = 0x7fc00000;
  local_1088 = 0x7fc00000;
  local_1080 = 0x7fc00000;
  local_1078 = 0x7fc00000;
  local_1070 = 0x7fc00000;
  local_1068 = 0x7fc00000;
  local_1060 = 0x7fc00000;
  local_1058 = 0x7fc00000;
  local_1050 = 0x7fc00000;
  local_1048 = 0x7fc00000;
  local_1040 = 0x7fc00000;
  local_1038 = 0x7fc00000;
  local_1030 = 0x7fc00000;
  uStack_fcf = 0;
  uStack_fd0 = 0;
  uStack_fbc = 0;
  local_fc4 = 0;
  uStack_fac = 0;
  uStack_fb4 = 0;
  uStack_f9c = 0;
  local_fa4 = 0;
  uStack_f8c = 0;
  uStack_f94 = 0;
  uStack_f7c = 0;
  local_f84 = 0;
  uStack_f6c = 0;
  uStack_f74 = 0;
  local_f67 = 0;
  uStack_f64 = 0;
  local_f0c = 1;
  local_f0b = 0;
  local_f06 = 0x23;
  local_ecc = 0x3f800000;
  uStack_db0 = 0;
  local_db8 = 0;
  uStack_da0 = 0;
  uStack_da8 = 0;
  uStack_dc0 = 0;
  local_dc8 = 0;
  local_d94 = 0;
  uStack_d60 = 0;
  local_d68 = 0;
  uStack_d50 = 0;
  uStack_d58 = 0;
  uStack_d40 = 0;
  local_d48 = 0;
  uStack_d30 = 0;
  uStack_d38 = 0;
  uStack_d20 = 0;
  local_d28 = 0;
  uStack_d10 = 0;
  uStack_d18 = 0;
  uStack_d00 = 0;
  local_d08 = 0;
  uStack_cf0 = 0;
  uStack_cf8 = 0;
  uStack_ce0 = 0;
  local_ce8 = 0;
  uStack_cd0 = 0;
  uStack_cd8 = 0;
  uStack_cc0 = 0;
  local_cc8 = 0;
  uStack_1157 = 0;
  uStack_11ab = 0;
  local_11b3 = 0;
  uStack_119b = 0;
  local_11a3 = 0;
  uStack_118b = 0;
  local_1193 = 0;
  uStack_117b = 0;
  local_1183 = 0;
  uStack_116d = 0;
  uStack_1175 = 0;
  uStack_1173 = 0;
  local_1159 = 0;
  uStack_1158 = 0;
  uStack_1148 = 0;
  uStack_1150 = 0;
  local_1138 = 0;
  uStack_1140 = 0;
  local_1128 = 0;
  uStack_1130 = 0;
  local_1118 = 0;
  uStack_1120 = 0;
  local_1108 = 0;
  uStack_1110 = 0;
  uStack_10f8 = 0;
  uStack_1100 = 0;
  local_10f0 = 0;
  local_1094 = 0;
  local_108c = 0;
  local_1084 = 0;
  local_107c = 0;
  local_1074 = 0;
  local_106c = 0;
  local_1064 = 0;
  local_105c = 0;
  local_1054 = 0;
  local_104c = 0;
  local_1044 = 0;
  local_103c = 0;
  local_1034 = 0;
  local_102c = 0;
  local_1028 = 0;
  local_1024 = 0;
  local_1018 = 0;
  local_f5c = 0;
  local_f58 = 0;
  local_f54 = 0;
  local_f50 = 0;
  local_f4c = 0;
  local_f48 = 0;
  local_f30 = 0;
  uStack_1008 = 0;
  local_1010 = 0;
  uStack_ff8 = 0;
  uStack_1000 = 0;
  uStack_fe8 = 0;
  local_ff0 = 0;
  uStack_fd8 = 0;
  local_fd7 = 0;
  uStack_fe0 = 0;
  uStack_f20 = 0;
  local_f28 = 0;
  local_f18 = 0;
  local_f10 = 0;
  local_f07 = 0;
  uStack_ef8 = 0;
  local_f00 = 0;
  uStack_ee8 = 0;
  uStack_ef0 = 0;
  uStack_ed8 = 0;
  uStack_ed1 = 0;
  local_ee0 = 0;
  local_ec4 = 0;
  local_ebc = 0;
  local_eb8 = 0;
  local_eb0 = 0;
  local_eac = 0;
  local_ea4 = 0;
  local_ea0 = 0;
  local_e98 = 0;
  local_e94 = 0;
  local_e8c = 0;
  local_e88 = 0;
  local_e80 = 0;
  local_e7c = 0;
  local_e74 = 0;
  local_e70 = 0;
  local_e68 = 0;
  local_e64 = 0;
  local_e5c = 0;
  local_e58 = 0;
  local_e50 = 0;
  local_e4c = 0;
  local_e44 = 0;
  local_e40 = 0;
  local_e38 = 0;
  local_e34 = 0;
  local_e2c = 0;
  local_e28 = 0;
  local_e24 = 0;
  local_e20 = 0;
  local_e1c = 0;
  local_e18 = 0;
  local_e14 = 0;
  local_e10 = 0;
  local_e0c = 0;
  local_e08 = 0;
  local_e04 = 0;
  local_e00 = 0;
  local_dfc = 0;
  local_df8 = 0;
  local_df4 = 0;
  local_df0 = 0;
  local_dec = 0;
  local_de8 = 0;
  local_de4 = 0;
  local_de0 = 0;
  local_ddc = 0;
  local_dd8 = 0;
  local_dd4 = 0;
  local_dd0 = 0;
  local_dcc = 0;
  local_d88 = 0;
  local_d98 = 0;
  local_d8c = 0;
  local_d70 = 0;
  local_c60 = 0;
  local_c5c = 0;
  local_c58 = 0;
  local_c40 = 0;
  uStack_c4c = 0;
  local_c54 = 0;
  local_c44 = 0;
  local_c38 = 0x101;
  local_c36 = 0;
  local_c34 = 0;
  local_c30 = 0;
  local_bd0 = 0;
  local_bc8 = 0;
  local_b68 = 0;
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
  local_b5c = 0;
  local_b60 = 0;
  local_1210 = PTR_vtable_0099f118 + 0x20;
  local_b30 = 0;
  local_b28 = 0;
  local_b00 = 0;
  local_af8 = 0;
  local_ad0 = 0;
  local_ac8 = 0;
  local_aa0 = 0;
  local_a98 = 0;
  local_a38 = 0;
  local_a10 = 0;
  local_a08 = 0;
  uStack_a68 = 0;
  local_a70 = 0;
  uStack_a58 = 0;
  local_a60 = 0;
  uStack_a48 = 0;
  local_a50 = 0;
  local_a40 = 0;
                    /* try { // try from 008a18f8 to 008a190b has its CatchHandler @ 008a1ae4 */
  facebook::react::RNSVGFeOffsetProps::RNSVGFeOffsetProps
            ((RNSVGFeOffsetProps *)local_9e0,(PropsParserContext *)local_1270,
             (RNSVGFeOffsetProps *)&local_1210,(RawProps *)&local_f8);
  FUN_008a25a8(local_9e0);
  FUN_008a25a8(&local_1210);
  facebook::react::RawPropsParser::facebook::react::RawPropsParser::postPrepare(this + 0x38);
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
                    /* try { // try from 008a1a10 to 008a1a1b has its CatchHandler @ 008a1ae8 */
        (*(code *)(&PTR_FUN_0098f088)[*(uint *)((long)pvVar3 + -8)])
                  (&local_1210,(void *)((long)pvVar3 + -0x38));
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
  facebook::jsi::Value::~Value((Value *)local_e0);
  if (local_1230 != (void *)0x0) {
    pvStack_1228 = local_1230;
    operator_delete(local_1230);
  }
  if (pvStack_1248 != (void *)0x0) {
    local_1240 = pvStack_1248;
    operator_delete(pvStack_1248);
  }
  if (local_1260 != (void *)0x0) {
    pvStack_1258 = local_1260;
    operator_delete(local_1260);
  }
  *param_1 = this;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008a1aec  FUN_008a1aec =====

void FUN_008a1aec(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 008a1b10  FUN_008a1b10 =====

undefined * FUN_008a1b10(void)

{
  return PTR_RNSVGFeOffsetComponentName_0099f110;
}


// ===== 008a1b1c  FUN_008a1b1c =====

undefined * FUN_008a1b1c(void)

{
  return PTR_RNSVGFeOffsetComponentName_0099f110;
}


// ===== 008a1b28  FUN_008a1b28 =====

undefined8 FUN_008a1b28(void)

{
  return 0x61;
}


// ===== 008a1b30  FUN_008a1b30 =====

void FUN_008a1b30(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  RNSVGLayoutableShadowNode *pRVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  
  lVar2 = tpidr_el0;
  lVar6 = *(long *)(lVar2 + 0x28);
  uVar3 = (**(code **)(*param_2 + 0x20))();
  puVar4 = (undefined8 *)operator_new(0x400);
  pRVar1 = (RNSVGLayoutableShadowNode *)(puVar4 + 3);
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_00998e40;
                    /* try { // try from 008a1b9c to 008a1bab has its CatchHandler @ 008a1c10 */
  facebook::react::RNSVGLayoutableShadowNode::RNSVGLayoutableShadowNode
            (pRVar1,param_3,param_4,uVar3);
  lVar5 = *param_2;
  puVar4[3] = &PTR_FUN_00998e90;
                    /* try { // try from 008a1bc4 to 008a1bcf has its CatchHandler @ 008a1c00 */
  (**(code **)(lVar5 + 0x60))(param_2,pRVar1);
  *param_1 = pRVar1;
  param_1[1] = puVar4;
  if (*(long *)(lVar2 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008a1c40  FUN_008a1c40 =====

void FUN_008a1c40(undefined8 *param_1,long *param_2,ShadowNode *param_3,ShadowNodeFragment *param_4)

{
  RNSVGLayoutableShadowNode *pRVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  RNSVGLayoutableShadowNode *local_78;
  long *local_70;
  RNSVGLayoutableShadowNode *local_68;
  long *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  plVar3 = (long *)operator_new(0x400);
  pRVar1 = (RNSVGLayoutableShadowNode *)(plVar3 + 3);
  plVar3[1] = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_00998e40;
                    /* try { // try from 008a1c98 to 008a1ca7 has its CatchHandler @ 008a1d74 */
  facebook::react::RNSVGLayoutableShadowNode::RNSVGLayoutableShadowNode(pRVar1,param_3,param_4);
  plVar3[3] = (long)&PTR_FUN_00998e90;
  local_68 = pRVar1;
  local_60 = plVar3;
                    /* try { // try from 008a1cb8 to 008a1cc7 has its CatchHandler @ 008a1d8c */
  facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::
  completeClone(pRVar1,param_3,param_4);
  local_78 = pRVar1;
  local_70 = plVar3;
  FUN_00757d00(1,plVar3 + 1);
                    /* try { // try from 008a1cd8 to 008a1ce7 has its CatchHandler @ 008a1d64 */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_78);
  plVar3 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar4 = FUN_00757990(0xffffffffffffffff,local_70 + 1), lVar4 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pRVar1 = local_68;
                    /* try { // try from 008a1d24 to 008a1d2f has its CatchHandler @ 008a1d8c */
  (**(code **)(*param_2 + 0x60))(param_2,local_68);
  *param_1 = pRVar1;
  param_1[1] = local_60;
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008a1db4  FUN_008a1db4 =====

void FUN_008a1db4(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x008a1dc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 008a1dc8  FUN_008a1dc8 =====

void FUN_008a1dc8(undefined8 *param_1,long param_2,PropsParserContext *param_3,long *param_4,
                 RawProps *param_5)

{
  RNSVGFeOffsetProps *this;
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
  RNSVGFeOffsetProps *pRVar12;
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
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_26RNSVGFeOffsetComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_18RNSVGFeOffsetPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec00
         & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_26RNSVGFeOffsetComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_18RNSVGFeOffsetPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec00
                                   ), iVar6 != 0)) {
                    /* try { // try from 008a21fc to 008a21ff has its CatchHandler @ 008a222c */
      FUN_008a28bc();
      __cxa_atexit(FUN_008a286c,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_26RNSVGFeOffsetComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_18RNSVGFeOffsetPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebf8
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_26RNSVGFeOffsetComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_18RNSVGFeOffsetPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec00
                         );
    }
    lVar11 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_26RNSVGFeOffsetComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_18RNSVGFeOffsetPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebf8
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_26RNSVGFeOffsetComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_18RNSVGFeOffsetPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebf8
    ;
    param_1[1] = lVar11;
    if (lVar11 != 0) {
      FUN_00757d00(1,lVar11 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    pRVar12 = (RNSVGFeOffsetProps *)*param_4;
    if (pRVar12 == (RNSVGFeOffsetProps *)0x0) {
      if (((*
            PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_26RNSVGFeOffsetComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_18RNSVGFeOffsetPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec00
           & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_26RNSVGFeOffsetComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_18RNSVGFeOffsetPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec00
                                     ), iVar6 != 0)) {
                    /* try { // try from 008a217c to 008a217f has its CatchHandler @ 008a2244 */
        FUN_008a28bc();
        __cxa_atexit(FUN_008a286c,
                     PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_26RNSVGFeOffsetComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_18RNSVGFeOffsetPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebf8
                     ,&PTR_LOOP_008d5d30);
        __cxa_guard_release(
                           PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_26RNSVGFeOffsetComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_18RNSVGFeOffsetPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec00
                           );
      }
      pRVar12 = *(RNSVGFeOffsetProps **)
                 PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_26RNSVGFeOffsetComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_18RNSVGFeOffsetPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebf8
      ;
    }
    plVar8 = (long *)operator_new(0x848);
    this = (RNSVGFeOffsetProps *)(plVar8 + 3);
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = (long)&PTR_FUN_00998fa8;
                    /* try { // try from 008a1ea8 to 008a1ebb has its CatchHandler @ 008a22b8 */
    facebook::react::RNSVGFeOffsetProps::RNSVGFeOffsetProps(this,param_3,pRVar12,param_5);
                    /* try { // try from 008a1ec0 to 008a1ed3 has its CatchHandler @ 008a22d0 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if ((((uVar7 & 1) == 0) ||
        (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar7 & 1) == 0)) ||
       (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
                enablePropsUpdateReconciliationAndroid(), (uVar7 & 1) == 0)) {
LAB_008a1efc:
      FUN_00757d00(1,plVar8 + 1);
      if (*param_4 == 0) {
        if (((*
              PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_26RNSVGFeOffsetComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_18RNSVGFeOffsetPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec00
             & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(
                                       PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_26RNSVGFeOffsetComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_18RNSVGFeOffsetPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec00
                                       ), iVar6 != 0)) {
                    /* try { // try from 008a21bc to 008a21bf has its CatchHandler @ 008a2230 */
          FUN_008a28bc();
          __cxa_atexit(FUN_008a286c,
                       PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_26RNSVGFeOffsetComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_18RNSVGFeOffsetPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebf8
                       ,&PTR_LOOP_008d5d30);
          __cxa_guard_release(
                             PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_26RNSVGFeOffsetComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_18RNSVGFeOffsetPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec00
                             );
        }
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 008a1f64 to 008a1f77 has its CatchHandler @ 008a225c */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*(undefined8 *)
                         PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_26RNSVGFeOffsetComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_18RNSVGFeOffsetPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebf8
                   ,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
LAB_008a1fb0:
          (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
        }
        else if (local_b0 != (dynamic *)0x0) {
          lVar11 = 5;
          pdVar10 = local_b0;
          goto LAB_008a1fb0;
        }
        if (plVar8 != (long *)0x0) goto LAB_008a1fc4;
      }
      else {
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 008a1f18 to 008a1f2b has its CatchHandler @ 008a2284 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*param_4,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
        }
        else {
          if (local_b0 == (dynamic *)0x0) goto LAB_008a1fc4;
          lVar11 = 5;
          pdVar10 = local_b0;
        }
        (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
LAB_008a1fc4:
        lVar11 = FUN_00757990(0xffffffffffffffff,plVar8 + 1);
        if (lVar11 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 008a1ee0 to 008a1eeb has its CatchHandler @ 008a2258 */
      pcVar9 = (char *)(**(code **)(*(long *)this + 0x10))(this);
      iVar6 = strcmp(PTR_RNSVGFeOffsetComponentName_0099f110,pcVar9);
      if (iVar6 != 0) goto LAB_008a1efc;
      bVar3 = false;
    }
                    /* try { // try from 008a1ff0 to 008a1ff3 has its CatchHandler @ 008a22d0 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar7 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 008a2000 to 008a201b has its CatchHandler @ 008a2280 */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(plVar8 + 7));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 008a215c to 008a216b has its CatchHandler @ 008a2278 */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_008a231c;
      }
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (*(int *)(plVar4 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 008a213c to 008a214b has its CatchHandler @ 008a22dc */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_008a231c;
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
                    /* try { // try from 008a209c to 008a20a7 has its CatchHandler @ 008a22e4 */
        folly::dynamic::dynamic(local_d0,(dynamic *)(plVar4 + 8));
        local_a0 = 0;
                    /* try { // try from 008a20ac to 008a20c3 has its CatchHandler @ 008a22e8 */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (this,param_3,uVar1,pcVar9,local_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 008a20d4 to 008a20df has its CatchHandler @ 008a22d8 */
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
LAB_008a231c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008a2320  FUN_008a2320 =====

void FUN_008a2320(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 008a2328  FUN_008a2328 =====

void FUN_008a2328(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 008a2330  FUN_008a2330 =====

void FUN_008a2330(undefined8 *param_1,long param_2,long param_3)

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
                    /* try { // try from 008a2374 to 008a237b has its CatchHandler @ 008a257c */
  plVar6 = (long *)operator_new(0x68);
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&PTR_FUN_00992a08;
                    /* try { // try from 008a2394 to 008a239f has its CatchHandler @ 008a2564 */
  local_78 = FUN_008707fc(plVar6 + 3,&local_58,param_2 + 8);
  local_70 = plVar6;
  if ((local_50 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,local_50 + 1), lVar7 == 0)) {
    (**(code **)(*local_50 + 0x10))(local_50);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 008a23d4 to 008a23db has its CatchHandler @ 008a2554 */
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
                    /* try { // try from 008a2428 to 008a243f has its CatchHandler @ 008a2524 */
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
                    /* try { // try from 008a2494 to 008a249f has its CatchHandler @ 008a2504 */
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


// ===== 008a25a4  FUN_008a25a4 =====

void FUN_008a25a4(void)

{
  return;
}


// ===== 008a25a8  FUN_008a25a8 =====

void FUN_008a25a8(long param_1)

{
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x800);
  folly::dynamic::folly::dynamic::destroy(param_1 + 2000);
  if ((*(byte *)(param_1 + 0x7b8) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x7c8));
  }
  if ((*(byte *)(param_1 + 0x7a0) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x7b0));
  }
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x770);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x740);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x710);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x6e0);
  FUN_0078917c(param_1,PTR_VTT_0099f120 + 8);
  return;
}


// ===== 008a2624  FUN_008a2624 =====

void FUN_008a2624(long param_1)

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


// ===== 008a2674  FUN_008a2674 =====

void FUN_008a2674(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00998e40;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008a2684  FUN_008a2684 =====

void FUN_008a2684(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00998e40;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008a26b4  FUN_008a26b4 =====

void FUN_008a26b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x008a26bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 008a26c0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008a26c4  FUN_008a26c4 =====

void FUN_008a26c4(long *param_1)

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


// ===== 008a2784  FUN_008a2784 =====

void FUN_008a2784(long param_1)

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


// ===== 008a27ec  FUN_008a27ec =====

bool FUN_008a27ec(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 008a2804  FUN_008a2804 =====

bool FUN_008a2804(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 008a281c  FUN_008a281c =====

void FUN_008a281c(long param_1)

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


// ===== 008a286c  FUN_008a286c =====

void FUN_008a286c(long param_1)

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


// ===== 008a28bc  FUN_008a28bc =====

void FUN_008a28bc(void)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x848);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_00998f58;
  memset(__s,0,0x830);
                    /* try { // try from 008a28f8 to 008a290b has its CatchHandler @ 008a29bc */
  FUN_00788b10(__s,PTR_VTT_0099f120 + 0x10);
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
  puVar1 = PTR_vtable_0099f118;
  *(undefined4 *)(puVar2 + 0xd9) = 0;
  *(undefined2 *)((long)puVar2 + 0x6cc) = 0;
  *(undefined4 *)(puVar2 + 0xdf) = 0;
  puVar2[3] = puVar1 + 0x20;
  puVar2[0xe0] = 0;
  *(undefined4 *)(puVar2 + 0xe5) = 0;
  puVar2[0xe6] = 0;
  *(undefined4 *)(puVar2 + 0xeb) = 0;
  puVar2[0xec] = 0;
  *(undefined4 *)(puVar2 + 0xf1) = 0;
  puVar2[0xf2] = 0;
  puVar2[0xfe] = 0;
  *(undefined4 *)(puVar2 + 0x103) = 0;
  puVar2[0x104] = 0;
  *(undefined4 *)(puVar2 + 0xfd) = 0;
  puVar2[0xfc] = 0;
  puVar2[0xfb] = 0;
  puVar2[0xfa] = 0;
  puVar2[0xf9] = 0;
  puVar1 = 
  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_26RNSVGFeOffsetComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_18RNSVGFeOffsetPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ebf8
  ;
  puVar2[0xf8] = 0;
  puVar2[0xf7] = 0;
  *(undefined8 **)puVar1 = __s;
  *(undefined8 **)(puVar1 + 8) = puVar2;
  return;
}


// ===== 008a29d8  FUN_008a29d8 =====

void FUN_008a29d8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00998f58;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008a29e8  FUN_008a29e8 =====

void FUN_008a29e8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00998f58;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008a2a18  FUN_008a2a18 =====

void FUN_008a2a18(long param_1)

{
  FUN_008a25a8(param_1 + 0x18);
  return;
}


// ===== 008a2a20  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008a2a24  FUN_008a2a24 =====

void FUN_008a2a24(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00998fa8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008a2a34  FUN_008a2a34 =====

void FUN_008a2a34(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00998fa8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008a2a64  FUN_008a2a64 =====

void FUN_008a2a64(long param_1)

{
  FUN_008a25a8(param_1 + 0x18);
  return;
}


// ===== 008a2a6c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008a2a70  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_23RNSVGConcreteShadowNodeIXadsoKcL_ZNS0_24RNSVGFilterComponentNameEEEENS0_16RNSVGFilterPropsEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENS8_14default_deleteISB_EEEERKNS0_29ComponentDescriptorParametersE =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_23RNSVGConcreteShadowNodeIXadsoKcL_ZNS0_24RNSVGFilterComponentNameEEEENS0_16RNSVGFilterPropsEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENS8_14default_deleteISB_EEEERKNS0_29ComponentDescriptorParametersE
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
  undefined4 local_1190 [2];
  undefined8 *local_1188;
  void *local_1180;
  void *pvStack_1178;
  undefined8 local_1170;
  void *pvStack_1168;
  void *local_1160;
  undefined8 uStack_1158;
  void *local_1150;
  void *pvStack_1148;
  undefined8 uStack_1140;
  undefined8 uStack_1138;
  undefined *local_1130;
  undefined8 uStack_1128;
  undefined8 local_1120;
  undefined8 uStack_1118;
  undefined4 local_1110 [2];
  undefined8 local_1108;
  undefined8 uStack_1100;
  undefined8 local_10f8;
  undefined8 uStack_10f0;
  undefined4 local_10e8;
  undefined4 local_10e0;
  undefined1 local_10dc;
  undefined8 local_10db;
  undefined8 local_10d3;
  undefined8 uStack_10cb;
  undefined8 local_10c3;
  undefined8 uStack_10bb;
  undefined8 local_10b3;
  undefined8 uStack_10ab;
  undefined8 local_10a3;
  undefined6 uStack_109b;
  undefined2 uStack_1095;
  undefined6 uStack_1093;
  undefined8 uStack_108d;
  undefined4 local_1085;
  undefined8 local_1081;
  undefined1 local_1079;
  undefined1 uStack_1078;
  undefined7 uStack_1077;
  undefined8 uStack_1070;
  undefined8 uStack_1068;
  undefined8 uStack_1060;
  undefined8 local_1058;
  undefined8 uStack_1050;
  undefined8 local_1048;
  undefined8 uStack_1040;
  undefined8 local_1038;
  undefined8 uStack_1030;
  undefined8 local_1028;
  undefined8 uStack_1020;
  undefined8 uStack_1018;
  undefined8 local_1010;
  undefined8 local_1008;
  undefined8 uStack_1000;
  undefined8 local_ff8;
  undefined4 uStack_ff0;
  undefined4 uStack_fec;
  undefined4 uStack_fe8;
  undefined4 uStack_fe4;
  undefined4 uStack_fe0;
  undefined4 uStack_fdc;
  undefined8 local_fd8;
  undefined8 uStack_fd0;
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
  undefined4 local_f78;
  undefined1 local_f74;
  undefined4 local_f70;
  undefined1 local_f6c;
  undefined4 local_f68;
  undefined1 local_f64;
  undefined4 local_f60;
  undefined1 local_f5c;
  undefined4 local_f58;
  undefined1 local_f54;
  undefined4 local_f50;
  undefined1 local_f4c;
  undefined1 local_f48;
  undefined1 local_f44;
  undefined1 local_f38;
  undefined8 local_f30;
  undefined8 uStack_f28;
  undefined8 uStack_f20;
  undefined8 uStack_f18;
  undefined8 local_f10;
  undefined8 uStack_f08;
  undefined8 uStack_f00;
  undefined1 uStack_ef8;
  undefined7 local_ef7;
  undefined1 uStack_ef0;
  undefined8 uStack_eef;
  undefined8 local_ee4;
  undefined8 uStack_edc;
  undefined8 uStack_ed4;
  undefined8 uStack_ecc;
  undefined8 local_ec4;
  undefined8 uStack_ebc;
  undefined8 uStack_eb4;
  undefined8 uStack_eac;
  undefined8 local_ea4;
  undefined8 uStack_e9c;
  undefined8 uStack_e94;
  undefined5 uStack_e8c;
  undefined3 local_e87;
  undefined5 uStack_e84;
  undefined1 local_e7c;
  undefined1 local_e78;
  undefined1 local_e74;
  undefined1 local_e70;
  undefined1 local_e6c;
  undefined1 local_e68;
  undefined1 local_e50;
  undefined8 local_e48;
  undefined8 uStack_e40;
  undefined8 local_e38;
  undefined4 local_e30;
  undefined1 local_e2c;
  undefined4 local_e2b;
  undefined1 local_e27;
  undefined1 local_e26;
  undefined8 local_e20;
  undefined8 uStack_e18;
  undefined8 uStack_e10;
  undefined8 uStack_e08;
  undefined8 local_e00;
  undefined7 uStack_df8;
  undefined4 uStack_df1;
  undefined8 local_dec;
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
  undefined1 local_d70;
  undefined1 local_d6c;
  undefined1 local_d64;
  undefined1 local_d60;
  undefined1 local_d58;
  undefined1 local_d54;
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
  undefined1 local_d18;
  undefined1 local_d14;
  undefined1 local_d10;
  undefined1 local_d0c;
  undefined1 local_d08;
  undefined1 local_d04;
  undefined1 local_d00;
  undefined1 local_cfc;
  undefined1 local_cf8;
  undefined1 local_cf4;
  undefined1 local_cf0;
  undefined1 local_cec;
  undefined8 local_ce8;
  undefined8 uStack_ce0;
  undefined8 local_cd8;
  undefined8 uStack_cd0;
  undefined8 uStack_cc8;
  undefined8 uStack_cc0;
  undefined2 local_cb8;
  undefined8 local_cb4;
  undefined1 local_cac;
  undefined8 local_ca8;
  undefined8 local_ca0;
  undefined8 uStack_c98;
  undefined1 local_c90;
  undefined8 local_c88;
  undefined8 uStack_c80;
  undefined8 uStack_c78;
  undefined8 uStack_c70;
  undefined8 local_c68;
  undefined8 uStack_c60;
  undefined8 uStack_c58;
  undefined8 uStack_c50;
  undefined8 local_c48;
  undefined8 uStack_c40;
  undefined8 uStack_c38;
  undefined8 uStack_c30;
  undefined8 local_c28;
  undefined8 uStack_c20;
  undefined8 uStack_c18;
  undefined8 uStack_c10;
  undefined8 local_c08;
  undefined8 uStack_c00;
  undefined8 uStack_bf8;
  undefined8 uStack_bf0;
  undefined8 local_be8;
  undefined8 uStack_be0;
  undefined8 local_bd8;
  undefined8 uStack_bd0;
  undefined8 local_bc8;
  undefined8 uStack_bc0;
  undefined8 local_bb8;
  undefined8 uStack_bb0;
  undefined8 local_ba8;
  undefined8 uStack_ba0;
  undefined8 local_b98;
  undefined6 uStack_b90;
  undefined2 uStack_b8a;
  undefined6 uStack_b88;
  undefined1 local_b80;
  undefined1 local_b7c;
  undefined1 local_b78;
  undefined8 local_b74;
  undefined8 uStack_b6c;
  undefined1 local_b64;
  undefined8 local_b60;
  undefined2 local_b58;
  undefined1 local_b56;
  undefined4 local_b54;
  undefined1 local_b50;
  undefined1 local_af0;
  undefined1 local_ae8;
  undefined1 local_a88;
  undefined4 local_a80;
  undefined2 local_a7c;
  undefined1 local_a78;
  undefined1 local_a74;
  undefined1 local_a70;
  undefined1 local_a6c;
  undefined1 local_a68;
  undefined1 local_a64;
  undefined1 local_a60;
  undefined1 local_a5c;
  undefined1 local_a58;
  undefined1 local_a54;
  ulong local_a50;
  undefined8 uStack_a48;
  void *local_a40;
  undefined4 local_a38 [2];
  undefined8 local_a30;
  undefined4 local_a08 [2];
  undefined8 local_a00;
  undefined4 local_9d8 [2];
  undefined8 local_9d0;
  undefined4 local_9a8 [2];
  undefined8 local_9a0;
  undefined8 local_978;
  undefined4 local_970 [2];
  undefined8 local_968;
  undefined8 uStack_960;
  undefined8 local_958;
  undefined8 local_950;
  undefined8 uStack_948;
  byte local_290;
  void *local_280;
  undefined1 auStack_278 [48];
  undefined1 auStack_248 [48];
  undefined1 auStack_218 [48];
  undefined1 auStack_1e8 [56];
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
  pvStack_1168 = (void *)0x0;
  local_1170 = 0;
  uStack_1158 = 0;
  local_1160 = (void *)0x0;
  pvStack_1148 = (void *)0x0;
  local_1150 = (void *)0x0;
  uStack_1138 = 0;
  uStack_1140 = 0;
  pvStack_1178 = (void *)0x0;
  local_1180 = (void *)0x0;
                    /* try { // try from 008a2ac4 to 008a2acf has its CatchHandler @ 008a318c */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_1180);
  local_f8 = 0;
  *(undefined ***)this = &PTR_FUN_00998ff8;
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
                    /* try { // try from 008a2b3c to 008a2b47 has its CatchHandler @ 008a31bc */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1b0);
  local_100 = CONCAT44(local_100._4_4_,0x3f800000);
  local_1190[0] = 0xffffffff;
  uStack_108 = 0;
  local_110 = (void *)0x0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_1188 = &local_1b0;
  facebook::react::RawProps::facebook::react::RawProps::parse(&local_f8,this + 0x38);
  memset(local_1110,0,0x7a0);
  puVar5 = PTR_VTT_0099f138;
  local_970[0] = 5;
  local_958 = 0;
  local_1130 = *(undefined **)(PTR_VTT_0099f138 + 0x20);
  local_1110[0] = 5;
  uStack_1118 = 0;
  local_1120 = 0;
  uStack_1128 = 0;
  local_950 = 0;
  uStack_948 = 0x3f800000;
  uStack_960 = 0;
  local_968 = 0;
  uStack_1100 = 0;
  local_1108 = 0;
  uStack_10f0 = 0;
  local_10f8 = 0;
  local_10e8 = 0x3f800000;
  folly::dynamic::folly::dynamic::destroy(local_970);
  local_10dc = 0;
  local_1081 = 0;
  uStack_ba0 = _UNK_00488920;
  local_ba8 = _DAT_00488918;
  local_10db = _s__00375408;
  uStack_c98 = _UNK_00371598;
  local_ca0 = _DAT_00371590;
  uStack_bb0 = _UNK_00488910;
  local_bb8 = _DAT_00488908;
  local_fc4 = 0;
  uStack_bc0 = _UNK_00488900;
  local_bc8 = _DAT_004888f8;
  uStack_bd0 = _UNK_004888f0;
  local_bd8 = _DAT_004888e8;
  uStack_b88 = 0;
  local_fbc = 0;
  uStack_ff0 = 0;
  local_ff8 = 0;
  uStack_fdc = 0;
  uStack_1000 = 0;
  local_1008 = 0;
  uStack_b90 = 0;
  uStack_b8a = 0;
  local_b98 = 0;
  local_10e0 = 0x10410710;
  local_1085 = 0x40004;
  uStack_fe4 = 0;
  uStack_fe0 = 0;
  uStack_fec = 0;
  uStack_fe8 = 0;
  uStack_fd0 = 0;
  local_fd8 = 0;
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
  local_f78 = 0x7fc00000;
  local_f70 = 0x7fc00000;
  local_f68 = 0x7fc00000;
  local_f60 = 0x7fc00000;
  local_f58 = 0x7fc00000;
  local_f50 = 0x7fc00000;
  uStack_eef = 0;
  uStack_ef0 = 0;
  uStack_edc = 0;
  local_ee4 = 0;
  uStack_ecc = 0;
  uStack_ed4 = 0;
  uStack_ebc = 0;
  local_ec4 = 0;
  uStack_eac = 0;
  uStack_eb4 = 0;
  uStack_e9c = 0;
  local_ea4 = 0;
  uStack_e8c = 0;
  uStack_e94 = 0;
  local_e87 = 0;
  uStack_e84 = 0;
  local_e2c = 1;
  local_e2b = 0;
  local_e26 = 0x23;
  local_dec = 0x3f800000;
  uStack_cd0 = 0;
  local_cd8 = 0;
  uStack_cc0 = 0;
  uStack_cc8 = 0;
  uStack_ce0 = 0;
  local_ce8 = 0;
  local_cb4 = 0;
  uStack_c80 = 0;
  local_c88 = 0;
  uStack_c70 = 0;
  uStack_c78 = 0;
  uStack_c60 = 0;
  local_c68 = 0;
  uStack_c50 = 0;
  uStack_c58 = 0;
  uStack_c40 = 0;
  local_c48 = 0;
  uStack_c30 = 0;
  uStack_c38 = 0;
  uStack_c20 = 0;
  local_c28 = 0;
  uStack_c10 = 0;
  uStack_c18 = 0;
  uStack_c00 = 0;
  local_c08 = 0;
  uStack_bf0 = 0;
  uStack_bf8 = 0;
  uStack_be0 = 0;
  local_be8 = 0;
  uStack_1077 = 0;
  uStack_10cb = 0;
  local_10d3 = 0;
  uStack_10bb = 0;
  local_10c3 = 0;
  uStack_10ab = 0;
  local_10b3 = 0;
  uStack_109b = 0;
  local_10a3 = 0;
  uStack_108d = 0;
  uStack_1095 = 0;
  uStack_1093 = 0;
  local_1079 = 0;
  uStack_1078 = 0;
  uStack_1068 = 0;
  uStack_1070 = 0;
  local_1058 = 0;
  uStack_1060 = 0;
  local_1048 = 0;
  uStack_1050 = 0;
  local_1038 = 0;
  uStack_1040 = 0;
  local_1028 = 0;
  uStack_1030 = 0;
  uStack_1018 = 0;
  uStack_1020 = 0;
  local_1010 = 0;
  local_fb4 = 0;
  local_fac = 0;
  local_fa4 = 0;
  local_f9c = 0;
  local_f94 = 0;
  local_f8c = 0;
  local_f84 = 0;
  local_f7c = 0;
  local_f74 = 0;
  local_f6c = 0;
  local_f64 = 0;
  local_f5c = 0;
  local_f54 = 0;
  local_f4c = 0;
  local_f48 = 0;
  local_f44 = 0;
  local_f38 = 0;
  local_e7c = 0;
  local_e78 = 0;
  local_e74 = 0;
  local_e70 = 0;
  local_e6c = 0;
  local_e68 = 0;
  local_e50 = 0;
  uStack_f28 = 0;
  local_f30 = 0;
  uStack_f18 = 0;
  uStack_f20 = 0;
  uStack_f08 = 0;
  local_f10 = 0;
  uStack_ef8 = 0;
  local_ef7 = 0;
  uStack_f00 = 0;
  uStack_e40 = 0;
  local_e48 = 0;
  local_e38 = 0;
  local_e30 = 0;
  local_e27 = 0;
  uStack_e18 = 0;
  local_e20 = 0;
  uStack_e08 = 0;
  uStack_e10 = 0;
  uStack_df8 = 0;
  uStack_df1 = 0;
  local_e00 = 0;
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
  local_d70 = 0;
  local_d6c = 0;
  local_d64 = 0;
  local_d60 = 0;
  local_d58 = 0;
  local_d54 = 0;
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
  local_d18 = 0;
  local_d14 = 0;
  local_d10 = 0;
  local_d0c = 0;
  local_d08 = 0;
  local_d04 = 0;
  local_d00 = 0;
  local_cfc = 0;
  local_cf8 = 0;
  local_cf4 = 0;
  local_cf0 = 0;
  local_cec = 0;
  local_ca8 = 0;
  local_cb8 = 0;
  local_cac = 0;
  local_c90 = 0;
  local_b80 = 0;
  local_b7c = 0;
  local_b78 = 0;
  local_b60 = 0;
  uStack_b6c = 0;
  local_b74 = 0;
  local_b64 = 0;
  local_b58 = 0x101;
  local_b56 = 0;
  local_b54 = 0;
  local_b50 = 0;
  local_af0 = 0;
  local_ae8 = 0;
  local_a88 = 0;
  local_a78 = 0;
  local_a74 = 0;
  local_a70 = 0;
  local_a6c = 0;
  local_a68 = 0;
  local_a64 = 0;
  local_a60 = 0;
  local_a5c = 0;
  local_a58 = 0;
  local_a54 = 0;
  local_a7c = 0;
  local_a80 = 0;
  local_1130 = PTR_vtable_0099f130 + 0x20;
  local_a30 = 0;
  local_a08[0] = 0;
  local_a00 = 0;
  local_9d8[0] = 0;
  local_9d0 = 0;
  local_9a8[0] = 0;
  local_9a0 = 0;
  local_a40 = (void *)0x0;
  local_a38[0] = 0;
  uStack_a48 = 0;
  local_a50 = 0;
  local_978 = DAT_003743c8;
                    /* try { // try from 008a2f68 to 008a2f7f has its CatchHandler @ 008a31bc */
  facebook::react::RNSVGFilterProps::RNSVGFilterProps
            ((RNSVGFilterProps *)local_970,(PropsParserContext *)local_1190,
             (RNSVGFilterProps *)&local_1130,(RawProps *)&local_f8);
  folly::dynamic::folly::dynamic::destroy(auStack_1e8);
  folly::dynamic::folly::dynamic::destroy(auStack_218);
  folly::dynamic::folly::dynamic::destroy(auStack_248);
  folly::dynamic::folly::dynamic::destroy(auStack_278);
  if ((local_290 & 1) != 0) {
    operator_delete(local_280);
  }
  FUN_0078917c(local_970,puVar5 + 8);
  folly::dynamic::folly::dynamic::destroy(local_9a8);
  folly::dynamic::folly::dynamic::destroy(local_9d8);
  folly::dynamic::folly::dynamic::destroy(local_a08);
  folly::dynamic::folly::dynamic::destroy(local_a38);
  if ((local_a50 & 1) != 0) {
    operator_delete(local_a40);
  }
  FUN_0078917c(&local_1130,puVar5 + 8);
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
                    /* try { // try from 008a30e8 to 008a30f3 has its CatchHandler @ 008a31c0 */
        (*(code *)(&PTR_FUN_0098f088)[*(uint *)((long)pvVar3 + -8)])
                  (&local_1130,(void *)((long)pvVar3 + -0x38));
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
  if (local_1150 != (void *)0x0) {
    pvStack_1148 = local_1150;
    operator_delete(local_1150);
  }
  if (pvStack_1168 != (void *)0x0) {
    local_1160 = pvStack_1168;
    operator_delete(pvStack_1168);
  }
  if (local_1180 != (void *)0x0) {
    pvStack_1178 = local_1180;
    operator_delete(local_1180);
  }
  *param_1 = this;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008a31c4  FUN_008a31c4 =====

void FUN_008a31c4(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 008a31e8  FUN_008a31e8 =====

undefined * FUN_008a31e8(void)

{
  return PTR_RNSVGFilterComponentName_0099f128;
}


// ===== 008a31f4  FUN_008a31f4 =====

undefined * FUN_008a31f4(void)

{
  return PTR_RNSVGFilterComponentName_0099f128;
}


// ===== 008a3200  FUN_008a3200 =====

undefined8 FUN_008a3200(void)

{
  return 0x61;
}


// ===== 008a3208  FUN_008a3208 =====

void FUN_008a3208(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  RNSVGLayoutableShadowNode *pRVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  
  lVar2 = tpidr_el0;
  lVar6 = *(long *)(lVar2 + 0x28);
  uVar3 = (**(code **)(*param_2 + 0x20))();
  puVar4 = (undefined8 *)operator_new(0x400);
  pRVar1 = (RNSVGLayoutableShadowNode *)(puVar4 + 3);
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_00999088;
                    /* try { // try from 008a3274 to 008a3283 has its CatchHandler @ 008a32e8 */
  facebook::react::RNSVGLayoutableShadowNode::RNSVGLayoutableShadowNode
            (pRVar1,param_3,param_4,uVar3);
  lVar5 = *param_2;
  puVar4[3] = &PTR_FUN_009990d8;
                    /* try { // try from 008a329c to 008a32a7 has its CatchHandler @ 008a32d8 */
  (**(code **)(lVar5 + 0x60))(param_2,pRVar1);
  *param_1 = pRVar1;
  param_1[1] = puVar4;
  if (*(long *)(lVar2 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008a3318  FUN_008a3318 =====

void FUN_008a3318(undefined8 *param_1,long *param_2,ShadowNode *param_3,ShadowNodeFragment *param_4)

{
  RNSVGLayoutableShadowNode *pRVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  RNSVGLayoutableShadowNode *local_78;
  long *local_70;
  RNSVGLayoutableShadowNode *local_68;
  long *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  plVar3 = (long *)operator_new(0x400);
  pRVar1 = (RNSVGLayoutableShadowNode *)(plVar3 + 3);
  plVar3[1] = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_00999088;
                    /* try { // try from 008a3370 to 008a337f has its CatchHandler @ 008a344c */
  facebook::react::RNSVGLayoutableShadowNode::RNSVGLayoutableShadowNode(pRVar1,param_3,param_4);
  plVar3[3] = (long)&PTR_FUN_009990d8;
  local_68 = pRVar1;
  local_60 = plVar3;
                    /* try { // try from 008a3390 to 008a339f has its CatchHandler @ 008a3464 */
  facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::
  completeClone(pRVar1,param_3,param_4);
  local_78 = pRVar1;
  local_70 = plVar3;
  FUN_00757d00(1,plVar3 + 1);
                    /* try { // try from 008a33b0 to 008a33bf has its CatchHandler @ 008a343c */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_78);
  plVar3 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar4 = FUN_00757990(0xffffffffffffffff,local_70 + 1), lVar4 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pRVar1 = local_68;
                    /* try { // try from 008a33fc to 008a3407 has its CatchHandler @ 008a3464 */
  (**(code **)(*param_2 + 0x60))(param_2,local_68);
  *param_1 = pRVar1;
  param_1[1] = local_60;
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008a348c  FUN_008a348c =====

void FUN_008a348c(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x008a349c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 008a34a0  FUN_008a34a0 =====

void FUN_008a34a0(undefined8 *param_1,long param_2,PropsParserContext *param_3,long *param_4,
                 RawProps *param_5)

{
  RNSVGFilterProps *this;
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
  RNSVGFilterProps *pRVar12;
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
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNSVGFilterComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_16RNSVGFilterPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec10
         & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNSVGFilterComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_16RNSVGFilterPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec10
                                   ), iVar6 != 0)) {
                    /* try { // try from 008a38d4 to 008a38d7 has its CatchHandler @ 008a3904 */
      FUN_008a3f18();
      __cxa_atexit(FUN_008a3ec8,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNSVGFilterComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_16RNSVGFilterPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec08
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNSVGFilterComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_16RNSVGFilterPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec10
                         );
    }
    lVar11 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNSVGFilterComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_16RNSVGFilterPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec08
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNSVGFilterComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_16RNSVGFilterPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec08
    ;
    param_1[1] = lVar11;
    if (lVar11 != 0) {
      FUN_00757d00(1,lVar11 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    pRVar12 = (RNSVGFilterProps *)*param_4;
    if (pRVar12 == (RNSVGFilterProps *)0x0) {
      if (((*
            PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNSVGFilterComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_16RNSVGFilterPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec10
           & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNSVGFilterComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_16RNSVGFilterPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec10
                                     ), iVar6 != 0)) {
                    /* try { // try from 008a3854 to 008a3857 has its CatchHandler @ 008a391c */
        FUN_008a3f18();
        __cxa_atexit(FUN_008a3ec8,
                     PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNSVGFilterComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_16RNSVGFilterPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec08
                     ,&PTR_LOOP_008d5d30);
        __cxa_guard_release(
                           PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNSVGFilterComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_16RNSVGFilterPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec10
                           );
      }
      pRVar12 = *(RNSVGFilterProps **)
                 PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNSVGFilterComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_16RNSVGFilterPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec08
      ;
    }
    plVar8 = (long *)operator_new(0x7d8);
    this = (RNSVGFilterProps *)(plVar8 + 3);
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = (long)&PTR_FUN_009991f0;
                    /* try { // try from 008a3580 to 008a3593 has its CatchHandler @ 008a3990 */
    facebook::react::RNSVGFilterProps::RNSVGFilterProps(this,param_3,pRVar12,param_5);
                    /* try { // try from 008a3598 to 008a35ab has its CatchHandler @ 008a39a8 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if ((((uVar7 & 1) == 0) ||
        (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar7 & 1) == 0)) ||
       (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
                enablePropsUpdateReconciliationAndroid(), (uVar7 & 1) == 0)) {
LAB_008a35d4:
      FUN_00757d00(1,plVar8 + 1);
      if (*param_4 == 0) {
        if (((*
              PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNSVGFilterComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_16RNSVGFilterPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec10
             & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(
                                       PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNSVGFilterComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_16RNSVGFilterPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec10
                                       ), iVar6 != 0)) {
                    /* try { // try from 008a3894 to 008a3897 has its CatchHandler @ 008a3908 */
          FUN_008a3f18();
          __cxa_atexit(FUN_008a3ec8,
                       PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNSVGFilterComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_16RNSVGFilterPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec08
                       ,&PTR_LOOP_008d5d30);
          __cxa_guard_release(
                             PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNSVGFilterComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_16RNSVGFilterPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec10
                             );
        }
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 008a363c to 008a364f has its CatchHandler @ 008a3934 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*(undefined8 *)
                         PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNSVGFilterComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_16RNSVGFilterPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec08
                   ,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
LAB_008a3688:
          (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
        }
        else if (local_b0 != (dynamic *)0x0) {
          lVar11 = 5;
          pdVar10 = local_b0;
          goto LAB_008a3688;
        }
        if (plVar8 != (long *)0x0) goto LAB_008a369c;
      }
      else {
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 008a35f0 to 008a3603 has its CatchHandler @ 008a395c */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*param_4,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
        }
        else {
          if (local_b0 == (dynamic *)0x0) goto LAB_008a369c;
          lVar11 = 5;
          pdVar10 = local_b0;
        }
        (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
LAB_008a369c:
        lVar11 = FUN_00757990(0xffffffffffffffff,plVar8 + 1);
        if (lVar11 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 008a35b8 to 008a35c3 has its CatchHandler @ 008a3930 */
      pcVar9 = (char *)(**(code **)(*(long *)this + 0x10))(this);
      iVar6 = strcmp(PTR_RNSVGFilterComponentName_0099f128,pcVar9);
      if (iVar6 != 0) goto LAB_008a35d4;
      bVar3 = false;
    }
                    /* try { // try from 008a36c8 to 008a36cb has its CatchHandler @ 008a39a8 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar7 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 008a36d8 to 008a36f3 has its CatchHandler @ 008a3958 */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(plVar8 + 7));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 008a3834 to 008a3843 has its CatchHandler @ 008a3950 */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_008a39f4;
      }
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (*(int *)(plVar4 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 008a3814 to 008a3823 has its CatchHandler @ 008a39b4 */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_008a39f4;
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
                    /* try { // try from 008a3774 to 008a377f has its CatchHandler @ 008a39bc */
        folly::dynamic::dynamic(local_d0,(dynamic *)(plVar4 + 8));
        local_a0 = 0;
                    /* try { // try from 008a3784 to 008a379b has its CatchHandler @ 008a39c0 */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (this,param_3,uVar1,pcVar9,local_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 008a37ac to 008a37b7 has its CatchHandler @ 008a39b0 */
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
LAB_008a39f4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008a39f8  FUN_008a39f8 =====

void FUN_008a39f8(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 008a3a00  FUN_008a3a00 =====

void FUN_008a3a00(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 008a3a08  FUN_008a3a08 =====

void FUN_008a3a08(undefined8 *param_1,long param_2,long param_3)

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
                    /* try { // try from 008a3a4c to 008a3a53 has its CatchHandler @ 008a3c54 */
  plVar6 = (long *)operator_new(0x68);
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&PTR_FUN_00992a08;
                    /* try { // try from 008a3a6c to 008a3a77 has its CatchHandler @ 008a3c3c */
  local_78 = FUN_008707fc(plVar6 + 3,&local_58,param_2 + 8);
  local_70 = plVar6;
  if ((local_50 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,local_50 + 1), lVar7 == 0)) {
    (**(code **)(*local_50 + 0x10))(local_50);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 008a3aac to 008a3ab3 has its CatchHandler @ 008a3c2c */
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
                    /* try { // try from 008a3b00 to 008a3b17 has its CatchHandler @ 008a3bfc */
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
                    /* try { // try from 008a3b6c to 008a3b77 has its CatchHandler @ 008a3bdc */
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


// ===== 008a3c7c  FUN_008a3c7c =====

void FUN_008a3c7c(void)

{
  return;
}


// ===== 008a3c80  FUN_008a3c80 =====

void FUN_008a3c80(long param_1)

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


// ===== 008a3cd0  FUN_008a3cd0 =====

void FUN_008a3cd0(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00999088;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008a3ce0  FUN_008a3ce0 =====

void FUN_008a3ce0(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00999088;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008a3d10  FUN_008a3d10 =====

void FUN_008a3d10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x008a3d18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 008a3d1c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008a3d20  FUN_008a3d20 =====

void FUN_008a3d20(long *param_1)

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


// ===== 008a3de0  FUN_008a3de0 =====

void FUN_008a3de0(long param_1)

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


// ===== 008a3e48  FUN_008a3e48 =====

bool FUN_008a3e48(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 008a3e60  FUN_008a3e60 =====

bool FUN_008a3e60(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 008a3e78  FUN_008a3e78 =====

void FUN_008a3e78(long param_1)

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


// ===== 008a3ec8  FUN_008a3ec8 =====

void FUN_008a3ec8(long param_1)

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


// ===== 008a3f18  FUN_008a3f18 =====

void FUN_008a3f18(void)

{
  undefined8 *__s;
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)operator_new(0x7d8);
  __s = puVar3 + 3;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_009991a0;
  memset(__s,0,0x7c0);
                    /* try { // try from 008a3f54 to 008a3f67 has its CatchHandler @ 008a4010 */
  FUN_00788b10(__s,PTR_VTT_0099f138 + 0x10);
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
  puVar2 = PTR_vtable_0099f130;
  *(undefined4 *)(puVar3 + 0xd9) = 0;
  *(undefined2 *)((long)puVar3 + 0x6cc) = 0;
  puVar3[0xe3] = 0;
  puVar3[3] = puVar2 + 0x20;
  *(undefined4 *)(puVar3 + 0xe8) = 0;
  puVar3[0xe9] = 0;
  *(undefined4 *)(puVar3 + 0xee) = 0;
  puVar3[0xef] = 0;
  *(undefined4 *)(puVar3 + 0xf4) = 0;
  puVar3[0xf5] = 0;
  *(undefined4 *)(puVar3 + 0xe2) = 0;
  puVar3[0xe0] = 0;
  puVar3[0xdf] = 0;
  uVar1 = DAT_003743c8;
  puVar3[0xe1] = 0;
  puVar2 = 
  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNSVGFilterComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_16RNSVGFilterPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec08
  ;
  puVar3[0xfa] = uVar1;
  *(undefined8 **)puVar2 = __s;
  *(undefined8 **)(puVar2 + 8) = puVar3;
  return;
}


// ===== 008a402c  FUN_008a402c =====

void FUN_008a402c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009991a0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008a403c  FUN_008a403c =====

void FUN_008a403c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009991a0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008a406c  FUN_008a406c =====

void FUN_008a406c(long param_1)

{
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x7a0);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x770);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x740);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x710);
  if ((*(byte *)(param_1 + 0x6f8) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x708));
  }
  FUN_0078917c(param_1 + 0x18,PTR_VTT_0099f138 + 8);
  return;
}


// ===== 008a40c8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008a40cc  FUN_008a40cc =====

void FUN_008a40cc(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009991f0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008a40dc  FUN_008a40dc =====

void FUN_008a40dc(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009991f0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008a410c  FUN_008a410c =====

void FUN_008a410c(long param_1)

{
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x7a0);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x770);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x740);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x710);
  if ((*(byte *)(param_1 + 0x6f8) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x708));
  }
  FUN_0078917c(param_1 + 0x18,PTR_VTT_0099f138 + 8);
  return;
}


// ===== 008a4168  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008a416c  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_23RNSVGConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGEllipseComponentNameEEEENS0_17RNSVGEllipsePropsEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENS8_14default_deleteISB_EEEERKNS0_29ComponentDescriptorParametersE =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_23RNSVGConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGEllipseComponentNameEEEENS0_17RNSVGEllipsePropsEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENS8_14default_deleteISB_EEEERKNS0_29ComponentDescriptorParametersE
               (undefined8 *param_1,ComponentDescriptorParameters *param_2)

{
  byte bVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  ComponentDescriptor *this;
  long lVar5;
  long *plVar6;
  void *pvVar7;
  undefined4 local_1560 [2];
  undefined8 *local_1558;
  void *local_1550;
  void *pvStack_1548;
  undefined8 local_1540;
  void *pvStack_1538;
  void *local_1530;
  undefined8 uStack_1528;
  void *local_1520;
  void *pvStack_1518;
  undefined8 uStack_1510;
  undefined8 uStack_1508;
  undefined *local_1500;
  undefined8 uStack_14f8;
  undefined8 local_14f0;
  undefined8 uStack_14e8;
  undefined4 local_14e0 [2];
  undefined8 local_14d8;
  undefined8 uStack_14d0;
  undefined8 local_14c8;
  undefined8 uStack_14c0;
  undefined4 local_14b8;
  undefined4 local_14b0;
  undefined1 local_14ac;
  undefined8 local_14ab;
  undefined8 local_14a3;
  undefined8 uStack_149b;
  undefined8 local_1493;
  undefined8 uStack_148b;
  undefined8 local_1483;
  undefined8 uStack_147b;
  undefined8 local_1473;
  undefined6 uStack_146b;
  undefined2 uStack_1465;
  undefined6 uStack_1463;
  undefined8 uStack_145d;
  undefined4 local_1455;
  undefined8 local_1451;
  undefined1 local_1449;
  undefined1 uStack_1448;
  undefined7 uStack_1447;
  undefined8 uStack_1440;
  undefined8 uStack_1438;
  undefined8 uStack_1430;
  undefined8 local_1428;
  undefined8 uStack_1420;
  undefined8 local_1418;
  undefined8 uStack_1410;
  undefined8 local_1408;
  undefined8 uStack_1400;
  undefined8 local_13f8;
  undefined8 uStack_13f0;
  undefined8 uStack_13e8;
  undefined8 local_13e0;
  undefined8 local_13d8;
  undefined8 uStack_13d0;
  undefined8 local_13c8;
  undefined4 uStack_13c0;
  undefined4 uStack_13bc;
  undefined4 uStack_13b8;
  undefined4 uStack_13b4;
  undefined4 uStack_13b0;
  undefined4 uStack_13ac;
  undefined8 local_13a8;
  undefined8 uStack_13a0;
  undefined4 local_1398;
  undefined1 local_1394;
  undefined4 local_1390;
  undefined1 local_138c;
  undefined4 local_1388;
  undefined1 local_1384;
  undefined4 local_1380;
  undefined1 local_137c;
  undefined4 local_1378;
  undefined1 local_1374;
  undefined4 local_1370;
  undefined1 local_136c;
  undefined4 local_1368;
  undefined1 local_1364;
  undefined4 local_1360;
  undefined1 local_135c;
  undefined4 local_1358;
  undefined1 local_1354;
  undefined4 local_1350;
  undefined1 local_134c;
  undefined4 local_1348;
  undefined1 local_1344;
  undefined4 local_1340;
  undefined1 local_133c;
  undefined4 local_1338;
  undefined1 local_1334;
  undefined4 local_1330;
  undefined1 local_132c;
  undefined4 local_1328;
  undefined1 local_1324;
  undefined4 local_1320;
  undefined1 local_131c;
  undefined1 local_1318;
  undefined1 local_1314;
  undefined1 local_1308;
  undefined8 local_1300;
  undefined8 uStack_12f8;
  undefined8 uStack_12f0;
  undefined8 uStack_12e8;
  undefined8 local_12e0;
  undefined8 uStack_12d8;
  undefined8 uStack_12d0;
  undefined1 uStack_12c8;
  undefined7 local_12c7;
  undefined1 uStack_12c0;
  undefined8 uStack_12bf;
  undefined8 local_12b4;
  undefined8 uStack_12ac;
  undefined8 uStack_12a4;
  undefined8 uStack_129c;
  undefined8 local_1294;
  undefined8 uStack_128c;
  undefined8 uStack_1284;
  undefined8 uStack_127c;
  undefined8 local_1274;
  undefined8 uStack_126c;
  undefined8 uStack_1264;
  undefined5 uStack_125c;
  undefined3 local_1257;
  undefined5 uStack_1254;
  undefined1 local_124c;
  undefined1 local_1248;
  undefined1 local_1244;
  undefined1 local_1240;
  undefined1 local_123c;
  undefined1 local_1238;
  undefined1 local_1220;
  undefined8 local_1218;
  undefined8 uStack_1210;
  undefined8 local_1208;
  undefined4 local_1200;
  undefined1 local_11fc;
  undefined4 local_11fb;
  undefined1 local_11f7;
  undefined1 local_11f6;
  undefined8 local_11f0;
  undefined8 uStack_11e8;
  undefined8 uStack_11e0;
  undefined8 uStack_11d8;
  undefined8 local_11d0;
  undefined7 uStack_11c8;
  undefined4 uStack_11c1;
  undefined8 local_11bc;
  undefined1 local_11b4;
  undefined1 local_11ac;
  undefined1 local_11a8;
  undefined1 local_11a0;
  undefined1 local_119c;
  undefined1 local_1194;
  undefined1 local_1190;
  undefined1 local_1188;
  undefined1 local_1184;
  undefined1 local_117c;
  undefined1 local_1178;
  undefined1 local_1170;
  undefined1 local_116c;
  undefined1 local_1164;
  undefined1 local_1160;
  undefined1 local_1158;
  undefined1 local_1154;
  undefined1 local_114c;
  undefined1 local_1148;
  undefined1 local_1140;
  undefined1 local_113c;
  undefined1 local_1134;
  undefined1 local_1130;
  undefined1 local_1128;
  undefined1 local_1124;
  undefined1 local_111c;
  undefined1 local_1118;
  undefined1 local_1114;
  undefined1 local_1110;
  undefined1 local_110c;
  undefined1 local_1108;
  undefined1 local_1104;
  undefined1 local_1100;
  undefined1 local_10fc;
  undefined1 local_10f8;
  undefined1 local_10f4;
  undefined1 local_10f0;
  undefined1 local_10ec;
  undefined1 local_10e8;
  undefined1 local_10e4;
  undefined1 local_10e0;
  undefined1 local_10dc;
  undefined1 local_10d8;
  undefined1 local_10d4;
  undefined1 local_10d0;
  undefined1 local_10cc;
  undefined1 local_10c8;
  undefined1 local_10c4;
  undefined1 local_10c0;
  undefined1 local_10bc;
  undefined8 local_10b8;
  undefined8 uStack_10b0;
  undefined8 local_10a8;
  undefined8 uStack_10a0;
  undefined8 uStack_1098;
  undefined8 uStack_1090;
  undefined2 local_1088;
  undefined8 local_1084;
  undefined1 local_107c;
  undefined8 local_1078;
  undefined8 local_1070;
  undefined8 uStack_1068;
  undefined1 local_1060;
  undefined8 local_1058;
  undefined8 uStack_1050;
  undefined8 uStack_1048;
  undefined8 uStack_1040;
  undefined8 local_1038;
  undefined8 uStack_1030;
  undefined8 uStack_1028;
  undefined8 uStack_1020;
  undefined8 local_1018;
  undefined8 uStack_1010;
  undefined8 uStack_1008;
  undefined8 uStack_1000;
  undefined8 local_ff8;
  undefined8 uStack_ff0;
  undefined8 uStack_fe8;
  undefined8 uStack_fe0;
  undefined8 local_fd8;
  undefined8 uStack_fd0;
  undefined8 uStack_fc8;
  undefined8 uStack_fc0;
  undefined8 local_fb8;
  undefined8 uStack_fb0;
  undefined8 local_fa8;
  undefined8 uStack_fa0;
  undefined8 local_f98;
  undefined8 uStack_f90;
  undefined8 local_f88;
  undefined8 uStack_f80;
  undefined8 local_f78;
  undefined8 uStack_f70;
  undefined8 local_f68;
  undefined6 uStack_f60;
  undefined2 uStack_f5a;
  undefined6 uStack_f58;
  undefined1 local_f50;
  undefined1 local_f4c;
  undefined1 local_f48;
  undefined8 local_f44;
  undefined8 uStack_f3c;
  undefined1 local_f34;
  undefined8 local_f30;
  undefined2 local_f28;
  undefined1 local_f26;
  undefined4 local_f24;
  undefined1 local_f20;
  undefined1 local_ec0;
  undefined1 local_eb8;
  undefined1 local_e58;
  undefined4 local_e50;
  undefined2 local_e4c;
  undefined1 local_e48;
  undefined1 local_e44;
  undefined1 local_e40;
  undefined1 local_e3c;
  undefined1 local_e38;
  undefined1 local_e34;
  undefined1 local_e30;
  undefined1 local_e2c;
  undefined1 local_e28;
  undefined1 local_e24;
  undefined8 local_e20;
  undefined8 uStack_e18;
  undefined8 local_e10;
  undefined4 local_e08;
  undefined8 local_e00;
  undefined8 uStack_df8;
  undefined8 local_df0;
  undefined8 uStack_de8;
  undefined8 local_de0;
  undefined8 uStack_dd8;
  undefined8 local_dd0;
  undefined8 uStack_dc8;
  undefined8 local_dc0;
  undefined8 uStack_db8;
  undefined8 local_db0;
  undefined8 uStack_da8;
  undefined8 local_da0;
  undefined8 uStack_d98;
  undefined8 local_d90;
  undefined8 uStack_d88;
  undefined8 local_d80;
  undefined5 uStack_d78;
  undefined3 uStack_d73;
  undefined5 uStack_d70;
  undefined8 local_d68;
  undefined8 uStack_d60;
  undefined8 local_d58;
  undefined8 uStack_d50;
  undefined8 uStack_d48;
  undefined8 uStack_d40;
  undefined4 local_d38;
  undefined4 local_d30;
  undefined8 local_d28;
  undefined8 local_d00;
  undefined4 local_cf8;
  undefined8 local_cf0;
  undefined4 local_cc8;
  undefined4 local_cc0;
  undefined8 local_cb8;
  undefined8 local_c90;
  undefined4 local_c88;
  undefined8 local_c80;
  undefined8 local_c58;
  undefined4 local_c50;
  undefined8 local_c48;
  undefined8 uStack_c40;
  undefined8 local_c38;
  undefined8 uStack_c30;
  undefined8 uStack_c28;
  undefined8 uStack_c20;
  undefined4 local_c18;
  undefined8 local_c10;
  undefined4 local_be8;
  undefined8 local_be0;
  undefined4 local_bb8;
  undefined8 local_bb0;
  undefined4 local_b88;
  undefined8 local_b80;
  undefined4 local_b58 [2];
  undefined8 local_b50;
  undefined8 uStack_b48;
  undefined8 local_b40;
  undefined8 local_b38;
  undefined8 uStack_b30;
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
  pvStack_1538 = (void *)0x0;
  local_1540 = 0;
  uStack_1528 = 0;
  local_1530 = (void *)0x0;
  pvStack_1518 = (void *)0x0;
  local_1520 = (void *)0x0;
  uStack_1508 = 0;
  uStack_1510 = 0;
  pvStack_1548 = (void *)0x0;
  local_1550 = (void *)0x0;
                    /* try { // try from 008a41c0 to 008a41cb has its CatchHandler @ 008a48b4 */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_1550);
  local_f8 = 0;
  *(undefined ***)this = &PTR_FUN_00999240;
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
                    /* try { // try from 008a423c to 008a424f has its CatchHandler @ 008a48e4 */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1b0);
  local_100 = CONCAT44(local_100._4_4_,0x3f800000);
  local_1560[0] = 0xffffffff;
  uStack_108 = 0;
  local_110 = (void *)0x0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_1558 = &local_1b0;
  facebook::react::RawProps::facebook::react::RawProps::parse(&local_f8,this + 0x38);
  memset(local_14e0,0,0x988);
  local_b58[0] = 5;
  local_b40 = 0;
  local_1500 = *(undefined **)(PTR_VTT_0099f150 + 0x20);
  local_14e0[0] = 5;
  uStack_14e8 = 0;
  local_14f0 = 0;
  local_b38 = 0;
  uStack_14f8 = 0;
  uStack_b30 = 0x3f800000;
  uStack_b48 = 0;
  local_b50 = 0;
  uStack_14d0 = 0;
  local_14d8 = 0;
  uStack_14c0 = 0;
  local_14c8 = 0;
  local_14b8 = 0x3f800000;
  folly::dynamic::folly::dynamic::destroy(local_b58);
  local_14b0 = 0x10410710;
  local_14ac = 0;
  uStack_13c0 = 0;
  local_13c8 = 0;
  uStack_13ac = 0;
  uStack_13d0 = 0;
  local_13d8 = 0;
  uStack_1447 = 0;
  uStack_149b = 0;
  local_14a3 = 0;
  local_14ab = _s__00375408;
  uStack_148b = 0;
  local_1493 = 0;
  uStack_1068 = _UNK_00371598;
  local_1070 = _DAT_00371590;
  uStack_147b = 0;
  local_1483 = 0;
  uStack_146b = 0;
  local_1473 = 0;
  uStack_f70 = _UNK_00488920;
  local_f78 = _DAT_00488918;
  uStack_f80 = _UNK_00488910;
  local_f88 = _DAT_00488908;
  local_1455 = 0x40004;
  uStack_13b4 = 0;
  uStack_13b0 = 0;
  uStack_13bc = 0;
  uStack_13b8 = 0;
  uStack_13a0 = 0;
  local_13a8 = 0;
  local_1398 = 0x7fc00000;
  local_1390 = 0x7fc00000;
  local_1388 = 0x7fc00000;
  local_1380 = 0x7fc00000;
  local_1378 = 0x7fc00000;
  local_1370 = 0x7fc00000;
  local_1368 = 0x7fc00000;
  local_1360 = 0x7fc00000;
  local_1358 = 0x7fc00000;
  local_1350 = 0x7fc00000;
  local_1348 = 0x7fc00000;
  local_1340 = 0x7fc00000;
  local_1338 = 0x7fc00000;
  local_1330 = 0x7fc00000;
  local_1328 = 0x7fc00000;
  local_1320 = 0x7fc00000;
  uStack_12bf = 0;
  uStack_12c0 = 0;
  uStack_12ac = 0;
  local_12b4 = 0;
  uStack_129c = 0;
  uStack_12a4 = 0;
  uStack_128c = 0;
  local_1294 = 0;
  uStack_127c = 0;
  uStack_1284 = 0;
  uStack_126c = 0;
  local_1274 = 0;
  uStack_125c = 0;
  uStack_1264 = 0;
  local_1257 = 0;
  uStack_1254 = 0;
  local_11fc = 1;
  local_11fb = 0;
  local_11f6 = 0x23;
  local_11bc = 0x3f800000;
  uStack_10a0 = 0;
  local_10a8 = 0;
  uStack_1090 = 0;
  uStack_1098 = 0;
  uStack_10b0 = 0;
  local_10b8 = 0;
  uStack_f90 = _UNK_00488900;
  local_f98 = _DAT_004888f8;
  local_1084 = 0;
  uStack_fa0 = _UNK_004888f0;
  local_fa8 = _DAT_004888e8;
  uStack_1050 = 0;
  local_1058 = 0;
  uStack_1040 = 0;
  uStack_1048 = 0;
  uStack_1030 = 0;
  local_1038 = 0;
  uStack_1020 = 0;
  uStack_1028 = 0;
  uStack_1010 = 0;
  local_1018 = 0;
  uStack_1000 = 0;
  uStack_1008 = 0;
  uStack_ff0 = 0;
  local_ff8 = 0;
  uStack_fe0 = 0;
  uStack_fe8 = 0;
  uStack_fd0 = 0;
  local_fd8 = 0;
  uStack_fc0 = 0;
  uStack_fc8 = 0;
  uStack_fb0 = 0;
  local_fb8 = 0;
  uStack_f58 = 0;
  uStack_f60 = 0;
  uStack_f5a = 0;
  local_f68 = 0;
  uStack_145d = 0;
  uStack_1465 = 0;
  uStack_1463 = 0;
  local_1451 = 0;
  local_1449 = 0;
  uStack_1448 = 0;
  uStack_1438 = 0;
  uStack_1440 = 0;
  local_1428 = 0;
  uStack_1430 = 0;
  local_1418 = 0;
  uStack_1420 = 0;
  local_1408 = 0;
  uStack_1410 = 0;
  local_13f8 = 0;
  uStack_1400 = 0;
  uStack_13e8 = 0;
  uStack_13f0 = 0;
  local_13e0 = 0;
  local_1394 = 0;
  local_138c = 0;
  local_1384 = 0;
  local_137c = 0;
  local_1374 = 0;
  local_136c = 0;
  local_1364 = 0;
  local_135c = 0;
  local_1354 = 0;
  local_134c = 0;
  local_1344 = 0;
  local_133c = 0;
  local_1334 = 0;
  local_132c = 0;
  local_1324 = 0;
  local_131c = 0;
  local_1318 = 0;
  local_1314 = 0;
  local_1308 = 0;
  local_124c = 0;
  local_1248 = 0;
  local_1244 = 0;
  local_1240 = 0;
  local_123c = 0;
  local_1238 = 0;
  local_1220 = 0;
  uStack_12f8 = 0;
  local_1300 = 0;
  uStack_12e8 = 0;
  uStack_12f0 = 0;
  uStack_12d8 = 0;
  local_12e0 = 0;
  uStack_12c8 = 0;
  local_12c7 = 0;
  uStack_12d0 = 0;
  uStack_1210 = 0;
  local_1218 = 0;
  local_1208 = 0;
  local_1200 = 0;
  local_11f7 = 0;
  uStack_11e8 = 0;
  local_11f0 = 0;
  uStack_11d8 = 0;
  uStack_11e0 = 0;
  uStack_11c8 = 0;
  uStack_11c1 = 0;
  local_11d0 = 0;
  local_11b4 = 0;
  local_11ac = 0;
  local_11a8 = 0;
  local_11a0 = 0;
  local_119c = 0;
  local_1194 = 0;
  local_1190 = 0;
  local_1188 = 0;
  local_1184 = 0;
  local_117c = 0;
  local_1178 = 0;
  local_1170 = 0;
  local_116c = 0;
  local_1164 = 0;
  local_1160 = 0;
  local_1158 = 0;
  local_1154 = 0;
  local_114c = 0;
  local_1148 = 0;
  local_1140 = 0;
  local_113c = 0;
  local_1134 = 0;
  local_1130 = 0;
  local_1128 = 0;
  local_1124 = 0;
  local_111c = 0;
  local_1118 = 0;
  local_1114 = 0;
  local_1110 = 0;
  local_110c = 0;
  local_1108 = 0;
  local_1104 = 0;
  local_1100 = 0;
  local_10fc = 0;
  local_10f8 = 0;
  local_10f4 = 0;
  local_10f0 = 0;
  local_10ec = 0;
  local_10e8 = 0;
  local_10e4 = 0;
  local_10e0 = 0;
  local_10dc = 0;
  local_10d8 = 0;
  local_10d4 = 0;
  local_10d0 = 0;
  local_10cc = 0;
  local_10c8 = 0;
  local_10c4 = 0;
  local_10c0 = 0;
  local_10bc = 0;
  local_1078 = 0;
  local_1088 = 0;
  local_107c = 0;
  local_1060 = 0;
  local_f50 = 0;
  local_f4c = 0;
  local_f48 = 0;
  local_f30 = 0;
  uStack_f3c = 0;
  local_f44 = 0;
  local_f34 = 0;
  local_f28 = 0x101;
  local_f26 = 0;
  local_f24 = 0;
  local_f20 = 0;
  local_ec0 = 0;
  local_eb8 = 0;
  local_e58 = 0;
  local_e48 = 0;
  local_e44 = 0;
  local_e40 = 0;
  local_e3c = 0;
  local_e38 = 0;
  local_e34 = 0;
  local_e30 = 0;
  local_e2c = 0;
  local_e28 = 0;
  local_e24 = 0;
  local_e4c = 0;
  local_e50 = 0;
  local_1500 = PTR_vtable_0099f148 + 0x20;
  local_e10 = 0;
  uStack_d70 = 0;
  uStack_d50 = 0;
  local_d58 = 0;
  uStack_d40 = 0;
  uStack_d48 = 0;
  uStack_d60 = 0;
  local_d68 = 0;
  uStack_e18 = 0;
  local_e20 = 0;
  local_d00 = 0x13f800000;
  local_e08 = 0x3f800000;
  local_d30 = 0;
  local_d28 = 0;
  uStack_df8 = 0;
  local_e00 = 0;
  uStack_de8 = 0;
  local_df0 = 0;
  uStack_dd8 = 0;
  local_de0 = 0;
  uStack_dc8 = 0;
  local_dd0 = 0;
  uStack_db8 = 0;
  local_dc0 = 0;
  uStack_da8 = 0;
  local_db0 = 0;
  uStack_d98 = 0;
  local_da0 = 0;
  uStack_d88 = 0;
  local_d90 = 0;
  uStack_d78 = 0;
  uStack_d73 = 0;
  local_d80 = 0;
  local_d38 = 0;
  local_cf8 = 0;
  local_cf0 = 0;
  local_cc8 = 0x3f800000;
  local_cc0 = 0;
  local_cb8 = 0;
  local_c90 = 0;
  local_c88 = 0;
  local_c80 = 0;
  local_c58 = 0;
  local_c50 = 0;
  local_c10 = 0;
  local_be8 = 0;
  local_be0 = 0;
  local_bb8 = 0;
  local_bb0 = 0;
  local_b88 = 0;
  local_b80 = 0;
  uStack_c30 = 0;
  local_c38 = 0;
  uStack_c20 = 0;
  uStack_c28 = 0;
  uStack_c40 = 0;
  local_c48 = 0;
  local_c18 = 0;
                    /* try { // try from 008a46f4 to 008a4707 has its CatchHandler @ 008a48e4 */
  facebook::react::RNSVGEllipseProps::RNSVGEllipseProps
            ((RNSVGEllipseProps *)local_b58,(PropsParserContext *)local_1560,
             (RNSVGEllipseProps *)&local_1500,(RawProps *)&local_f8);
  FUN_008a53a8(local_b58);
  FUN_008a53a8(&local_1500);
  facebook::react::RawPropsParser::facebook::react::RawPropsParser::postPrepare(this + 0x38);
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
  pvVar7 = pvStack_80;
  pvVar3 = local_78;
  if (pvStack_80 != (void *)0x0) {
    while (pvVar3 != pvVar7) {
      if (*(uint *)((long)pvVar3 + -8) != 0xffffffff) {
                    /* try { // try from 008a480c to 008a4817 has its CatchHandler @ 008a48e8 */
        (*(code *)(&PTR_FUN_0098f088)[*(uint *)((long)pvVar3 + -8)])
                  (&local_1500,(void *)((long)pvVar3 + -0x38));
      }
      *(undefined4 *)((long)pvVar3 + -8) = 0xffffffff;
      pvVar3 = (void *)((long)pvVar3 + -0x38);
    }
    local_78 = pvVar7;
    operator_delete(pvStack_80);
  }
  if (local_98 != (void *)0x0) {
    pvStack_90 = local_98;
    operator_delete(local_98);
  }
  folly::dynamic::folly::dynamic::destroy(local_d0);
  facebook::jsi::Value::~Value((Value *)local_e0);
  if (local_1520 != (void *)0x0) {
    pvStack_1518 = local_1520;
    operator_delete(local_1520);
  }
  if (pvStack_1538 != (void *)0x0) {
    local_1530 = pvStack_1538;
    operator_delete(pvStack_1538);
  }
  if (local_1550 != (void *)0x0) {
    pvStack_1548 = local_1550;
    operator_delete(local_1550);
  }
  *param_1 = this;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008a48ec  FUN_008a48ec =====

void FUN_008a48ec(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 008a4910  FUN_008a4910 =====

undefined * FUN_008a4910(void)

{
  return PTR_RNSVGEllipseComponentName_0099f140;
}


// ===== 008a491c  FUN_008a491c =====

undefined * FUN_008a491c(void)

{
  return PTR_RNSVGEllipseComponentName_0099f140;
}


// ===== 008a4928  FUN_008a4928 =====

undefined8 FUN_008a4928(void)

{
  return 0x61;
}


// ===== 008a4930  FUN_008a4930 =====

void FUN_008a4930(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  RNSVGLayoutableShadowNode *pRVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  
  lVar2 = tpidr_el0;
  lVar6 = *(long *)(lVar2 + 0x28);
  uVar3 = (**(code **)(*param_2 + 0x20))();
  puVar4 = (undefined8 *)operator_new(0x400);
  pRVar1 = (RNSVGLayoutableShadowNode *)(puVar4 + 3);
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_009992d0;
                    /* try { // try from 008a499c to 008a49ab has its CatchHandler @ 008a4a10 */
  facebook::react::RNSVGLayoutableShadowNode::RNSVGLayoutableShadowNode
            (pRVar1,param_3,param_4,uVar3);
  lVar5 = *param_2;
  puVar4[3] = &PTR_FUN_00999320;
                    /* try { // try from 008a49c4 to 008a49cf has its CatchHandler @ 008a4a00 */
  (**(code **)(lVar5 + 0x60))(param_2,pRVar1);
  *param_1 = pRVar1;
  param_1[1] = puVar4;
  if (*(long *)(lVar2 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008a4a40  FUN_008a4a40 =====

void FUN_008a4a40(undefined8 *param_1,long *param_2,ShadowNode *param_3,ShadowNodeFragment *param_4)

{
  RNSVGLayoutableShadowNode *pRVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  RNSVGLayoutableShadowNode *local_78;
  long *local_70;
  RNSVGLayoutableShadowNode *local_68;
  long *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  plVar3 = (long *)operator_new(0x400);
  pRVar1 = (RNSVGLayoutableShadowNode *)(plVar3 + 3);
  plVar3[1] = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_009992d0;
                    /* try { // try from 008a4a98 to 008a4aa7 has its CatchHandler @ 008a4b74 */
  facebook::react::RNSVGLayoutableShadowNode::RNSVGLayoutableShadowNode(pRVar1,param_3,param_4);
  plVar3[3] = (long)&PTR_FUN_00999320;
  local_68 = pRVar1;
  local_60 = plVar3;
                    /* try { // try from 008a4ab8 to 008a4ac7 has its CatchHandler @ 008a4b8c */
  facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::
  completeClone(pRVar1,param_3,param_4);
  local_78 = pRVar1;
  local_70 = plVar3;
  FUN_00757d00(1,plVar3 + 1);
                    /* try { // try from 008a4ad8 to 008a4ae7 has its CatchHandler @ 008a4b64 */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_78);
  plVar3 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar4 = FUN_00757990(0xffffffffffffffff,local_70 + 1), lVar4 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pRVar1 = local_68;
                    /* try { // try from 008a4b24 to 008a4b2f has its CatchHandler @ 008a4b8c */
  (**(code **)(*param_2 + 0x60))(param_2,local_68);
  *param_1 = pRVar1;
  param_1[1] = local_60;
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008a4bb4  FUN_008a4bb4 =====

void FUN_008a4bb4(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x008a4bc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 008a4bc8  FUN_008a4bc8 =====

void FUN_008a4bc8(undefined8 *param_1,long param_2,PropsParserContext *param_3,long *param_4,
                 RawProps *param_5)

{
  RNSVGEllipseProps *this;
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
  RNSVGEllipseProps *pRVar12;
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
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGEllipseComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGEllipsePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec20
         & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGEllipseComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGEllipsePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec20
                                   ), iVar6 != 0)) {
                    /* try { // try from 008a4ffc to 008a4fff has its CatchHandler @ 008a502c */
      FUN_008a578c();
      __cxa_atexit(FUN_008a5928,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGEllipseComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGEllipsePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec18
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGEllipseComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGEllipsePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec20
                         );
    }
    lVar11 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGEllipseComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGEllipsePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec18
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGEllipseComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGEllipsePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec18
    ;
    param_1[1] = lVar11;
    if (lVar11 != 0) {
      FUN_00757d00(1,lVar11 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    pRVar12 = (RNSVGEllipseProps *)*param_4;
    if (pRVar12 == (RNSVGEllipseProps *)0x0) {
      if (((*
            PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGEllipseComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGEllipsePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec20
           & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGEllipseComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGEllipsePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec20
                                     ), iVar6 != 0)) {
                    /* try { // try from 008a4f7c to 008a4f7f has its CatchHandler @ 008a5044 */
        FUN_008a578c();
        __cxa_atexit(FUN_008a5928,
                     PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGEllipseComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGEllipsePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec18
                     ,&PTR_LOOP_008d5d30);
        __cxa_guard_release(
                           PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGEllipseComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGEllipsePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec20
                           );
      }
      pRVar12 = *(RNSVGEllipseProps **)
                 PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGEllipseComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGEllipsePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec18
      ;
    }
    plVar8 = (long *)operator_new(0x9c0);
    this = (RNSVGEllipseProps *)(plVar8 + 3);
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = (long)&PTR_FUN_00999438;
                    /* try { // try from 008a4ca8 to 008a4cbb has its CatchHandler @ 008a50b8 */
    facebook::react::RNSVGEllipseProps::RNSVGEllipseProps(this,param_3,pRVar12,param_5);
                    /* try { // try from 008a4cc0 to 008a4cd3 has its CatchHandler @ 008a50d0 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if ((((uVar7 & 1) == 0) ||
        (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar7 & 1) == 0)) ||
       (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
                enablePropsUpdateReconciliationAndroid(), (uVar7 & 1) == 0)) {
LAB_008a4cfc:
      FUN_00757d00(1,plVar8 + 1);
      if (*param_4 == 0) {
        if (((*
              PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGEllipseComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGEllipsePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec20
             & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(
                                       PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGEllipseComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGEllipsePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec20
                                       ), iVar6 != 0)) {
                    /* try { // try from 008a4fbc to 008a4fbf has its CatchHandler @ 008a5030 */
          FUN_008a578c();
          __cxa_atexit(FUN_008a5928,
                       PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGEllipseComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGEllipsePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec18
                       ,&PTR_LOOP_008d5d30);
          __cxa_guard_release(
                             PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGEllipseComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGEllipsePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec20
                             );
        }
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 008a4d64 to 008a4d77 has its CatchHandler @ 008a505c */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*(undefined8 *)
                         PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGEllipseComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGEllipsePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec18
                   ,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
LAB_008a4db0:
          (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
        }
        else if (local_b0 != (dynamic *)0x0) {
          lVar11 = 5;
          pdVar10 = local_b0;
          goto LAB_008a4db0;
        }
        if (plVar8 != (long *)0x0) goto LAB_008a4dc4;
      }
      else {
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 008a4d18 to 008a4d2b has its CatchHandler @ 008a5084 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*param_4,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
        }
        else {
          if (local_b0 == (dynamic *)0x0) goto LAB_008a4dc4;
          lVar11 = 5;
          pdVar10 = local_b0;
        }
        (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
LAB_008a4dc4:
        lVar11 = FUN_00757990(0xffffffffffffffff,plVar8 + 1);
        if (lVar11 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 008a4ce0 to 008a4ceb has its CatchHandler @ 008a5058 */
      pcVar9 = (char *)(**(code **)(*(long *)this + 0x10))(this);
      iVar6 = strcmp(PTR_RNSVGEllipseComponentName_0099f140,pcVar9);
      if (iVar6 != 0) goto LAB_008a4cfc;
      bVar3 = false;
    }
                    /* try { // try from 008a4df0 to 008a4df3 has its CatchHandler @ 008a50d0 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar7 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 008a4e00 to 008a4e1b has its CatchHandler @ 008a5080 */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(plVar8 + 7));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 008a4f5c to 008a4f6b has its CatchHandler @ 008a5078 */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_008a511c;
      }
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (*(int *)(plVar4 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 008a4f3c to 008a4f4b has its CatchHandler @ 008a50dc */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_008a511c;
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
                    /* try { // try from 008a4e9c to 008a4ea7 has its CatchHandler @ 008a50e4 */
        folly::dynamic::dynamic(local_d0,(dynamic *)(plVar4 + 8));
        local_a0 = 0;
                    /* try { // try from 008a4eac to 008a4ec3 has its CatchHandler @ 008a50e8 */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (this,param_3,uVar1,pcVar9,local_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 008a4ed4 to 008a4edf has its CatchHandler @ 008a50d8 */
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
LAB_008a511c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008a5120  FUN_008a5120 =====

void FUN_008a5120(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 008a5128  FUN_008a5128 =====

void FUN_008a5128(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 008a5130  FUN_008a5130 =====

void FUN_008a5130(undefined8 *param_1,long param_2,long param_3)

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
                    /* try { // try from 008a5174 to 008a517b has its CatchHandler @ 008a537c */
  plVar6 = (long *)operator_new(0x68);
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&PTR_FUN_00992a08;
                    /* try { // try from 008a5194 to 008a519f has its CatchHandler @ 008a5364 */
  local_78 = FUN_008707fc(plVar6 + 3,&local_58,param_2 + 8);
  local_70 = plVar6;
  if ((local_50 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,local_50 + 1), lVar7 == 0)) {
    (**(code **)(*local_50 + 0x10))(local_50);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 008a51d4 to 008a51db has its CatchHandler @ 008a5354 */
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
                    /* try { // try from 008a5228 to 008a523f has its CatchHandler @ 008a5324 */
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
                    /* try { // try from 008a5294 to 008a529f has its CatchHandler @ 008a5304 */
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


// ===== 008a53a4  FUN_008a53a4 =====

void FUN_008a53a4(void)

{
  return;
}


// ===== 008a53a8  FUN_008a53a8 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_008a53a8(long param_1)

{
  byte bVar1;
  void *pvVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x978);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x948);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x918);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x8e8);
  if ((*(byte *)(param_1 + 0x8d0) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x8e0));
  }
  pbVar4 = *(byte **)(param_1 + 0x8b8);
  if (pbVar4 != (byte *)0x0) {
    pbVar3 = *(byte **)(param_1 + 0x8c0);
    pbVar5 = pbVar4;
    if (pbVar3 != pbVar4) {
      do {
        pbVar5 = pbVar3 + -0x18;
        if ((*pbVar5 & 1) != 0) {
          operator_delete(*(void **)(pbVar3 + -8));
        }
        pbVar3 = pbVar5;
      } while (pbVar5 != pbVar4);
      pbVar5 = *(byte **)(param_1 + 0x8b8);
    }
    *(byte **)(param_1 + 0x8c0) = pbVar4;
    operator_delete(pbVar5);
  }
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x878);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x840);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x808);
  folly::dynamic::folly::dynamic::destroy(param_1 + 2000);
  if ((*(byte *)(param_1 + 0x7b0) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x798);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x7c0));
    bVar1 = *(byte *)(param_1 + 0x798);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x778);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x7a8));
    bVar1 = *(byte *)(param_1 + 0x778);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x760);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x788));
    bVar1 = *(byte *)(param_1 + 0x760);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x748);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x770));
    bVar1 = *(byte *)(param_1 + 0x748);
  }
  if ((bVar1 & 1) == 0) {
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
    pvVar2 = *(void **)(param_1 + 0x700);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x728));
    pvVar2 = *(void **)(param_1 + 0x700);
  }
  if (pvVar2 != (void *)0x0) {
    *(void **)(param_1 + 0x708) = pvVar2;
    operator_delete(pvVar2);
  }
  if ((*(byte *)(param_1 + 0x6e0) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x6f0));
  }
  FUN_0078917c(param_1,PTR_VTT_0099f150 + 8);
  return;
}


// ===== 008a5544  FUN_008a5544 =====

void FUN_008a5544(long param_1)

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


// ===== 008a5594  FUN_008a5594 =====

void FUN_008a5594(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009992d0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008a55a4  FUN_008a55a4 =====

void FUN_008a55a4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009992d0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008a55d4  FUN_008a55d4 =====

void FUN_008a55d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x008a55dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 008a55e0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008a55e4  FUN_008a55e4 =====

void FUN_008a55e4(long *param_1)

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


// ===== 008a56a4  FUN_008a56a4 =====

void FUN_008a56a4(long param_1)

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


// ===== 008a570c  FUN_008a570c =====

bool FUN_008a570c(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 008a5724  FUN_008a5724 =====

bool FUN_008a5724(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 008a573c  FUN_008a573c =====

void FUN_008a573c(long param_1)

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


// ===== 008a578c  FUN_008a578c =====

void FUN_008a578c(void)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x9c0);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_009993e8;
  memset(__s,0,0x9a8);
                    /* try { // try from 008a57c8 to 008a57db has its CatchHandler @ 008a590c */
  FUN_00788b10(__s,PTR_VTT_0099f150 + 0x10);
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
  puVar1 = PTR_vtable_0099f148;
  puVar2[0x111] = 0;
  *(undefined4 *)(puVar2 + 0xd9) = 0;
  *(undefined2 *)((long)puVar2 + 0x6cc) = 0;
  puVar2[3] = puVar1 + 0x20;
  puVar2[0xe0] = 0;
  puVar2[0xdf] = 0;
  puVar2[0xe4] = 0;
  puVar2[0xe3] = 0;
  puVar2[0xe6] = 0;
  puVar2[0xe5] = 0;
  puVar2[0xe8] = 0;
  puVar2[0xe7] = 0;
  puVar2[0xea] = 0;
  puVar2[0xe9] = 0;
  puVar2[0xec] = 0;
  puVar2[0xeb] = 0;
  puVar2[0xee] = 0;
  puVar2[0xed] = 0;
  puVar2[0xf0] = 0;
  puVar2[0xef] = 0;
  puVar2[0xf2] = 0;
  puVar2[0xf1] = 0;
  puVar2[0xf4] = 0;
  puVar2[0xf3] = 0;
  puVar2[0xe1] = 0;
  *(undefined4 *)(puVar2 + 0xe2) = 0x3f800000;
  *(undefined4 *)(puVar2 + 0xfd) = 0;
  puVar2[0xfe] = 0;
  *(undefined8 *)((long)puVar2 + 0x7a5) = 0;
  puVar2[0xf7] = 0;
  puVar2[0xf6] = 0;
  puVar2[0xf9] = 0;
  puVar2[0xf8] = 0;
  puVar2[0xfb] = 0;
  puVar2[0xfa] = 0;
  *(undefined4 *)(puVar2 + 0xfc) = 0;
  puVar2[0x103] = 0x13f800000;
  *(undefined4 *)(puVar2 + 0x104) = 0;
  puVar2[0x105] = 0;
  *(undefined4 *)(puVar2 + 0x10a) = 0x3f800000;
  *(undefined4 *)(puVar2 + 0x10b) = 0;
  puVar2[0x10c] = 0;
  *(undefined4 *)(puVar2 + 0x112) = 0;
  puVar2[0x113] = 0;
  puVar2[0x118] = 0;
  *(undefined4 *)(puVar2 + 0x119) = 0;
  puVar2[0x121] = 0;
  *(undefined4 *)(puVar2 + 0x126) = 0;
  puVar2[0x127] = 0;
  *(undefined4 *)(puVar2 + 300) = 0;
  puVar2[0x12d] = 0;
  *(undefined4 *)(puVar2 + 0x132) = 0;
  puVar2[0x133] = 0;
  *(undefined4 *)(puVar2 + 0x120) = 0;
  puVar2[0x11f] = 0;
  puVar2[0x11e] = 0;
  puVar2[0x11d] = 0;
  puVar2[0x11c] = 0;
  puVar1 = 
  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGEllipseComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGEllipsePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec18
  ;
  puVar2[0x11b] = 0;
  puVar2[0x11a] = 0;
  *(undefined8 **)puVar1 = __s;
  *(undefined8 **)(puVar1 + 8) = puVar2;
  return;
}


// ===== 008a5928  FUN_008a5928 =====

void FUN_008a5928(long param_1)

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


// ===== 008a5978  FUN_008a5978 =====

void FUN_008a5978(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009993e8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008a5988  FUN_008a5988 =====

void FUN_008a5988(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009993e8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008a59b8  FUN_008a59b8 =====

void FUN_008a59b8(long param_1)

{
  FUN_008a53a8(param_1 + 0x18);
  return;
}


// ===== 008a59c0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008a59c4  FUN_008a59c4 =====

void FUN_008a59c4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00999438;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008a59d4  FUN_008a59d4 =====

void FUN_008a59d4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00999438;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008a5a04  FUN_008a5a04 =====

void FUN_008a5a04(long param_1)

{
  FUN_008a53a8(param_1 + 0x18);
  return;
}


// ===== 008a5a0c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008a5a10  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_23RNSVGConcreteShadowNodeIXadsoKcL_ZNS0_31RNSVGForeignObjectComponentNameEEEENS0_23RNSVGForeignObjectPropsEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENS8_14default_deleteISB_EEEERKNS0_29ComponentDescriptorParametersE =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_23RNSVGConcreteShadowNodeIXadsoKcL_ZNS0_31RNSVGForeignObjectComponentNameEEEENS0_23RNSVGForeignObjectPropsEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENS8_14default_deleteISB_EEEERKNS0_29ComponentDescriptorParametersE
               (undefined8 *param_1,ComponentDescriptorParameters *param_2)

{
  byte bVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  ComponentDescriptor *this;
  long lVar5;
  long *plVar6;
  void *pvVar7;
  undefined4 local_1680 [2];
  undefined8 *local_1678;
  void *local_1670;
  void *pvStack_1668;
  undefined8 local_1660;
  void *pvStack_1658;
  void *local_1650;
  undefined8 uStack_1648;
  void *local_1640;
  void *pvStack_1638;
  undefined8 uStack_1630;
  undefined8 uStack_1628;
  undefined *local_1620;
  undefined8 uStack_1618;
  undefined8 local_1610;
  undefined8 uStack_1608;
  undefined4 local_1600 [2];
  undefined8 local_15f8;
  undefined8 uStack_15f0;
  undefined8 local_15e8;
  undefined8 uStack_15e0;
  undefined4 local_15d8;
  undefined4 local_15d0;
  undefined1 local_15cc;
  undefined8 local_15cb;
  undefined8 local_15c3;
  undefined8 uStack_15bb;
  undefined8 local_15b3;
  undefined8 uStack_15ab;
  undefined8 local_15a3;
  undefined8 uStack_159b;
  undefined8 local_1593;
  undefined6 uStack_158b;
  undefined2 uStack_1585;
  undefined6 uStack_1583;
  undefined8 uStack_157d;
  undefined4 local_1575;
  undefined8 local_1571;
  undefined1 local_1569;
  undefined1 uStack_1568;
  undefined7 uStack_1567;
  undefined8 uStack_1560;
  undefined8 uStack_1558;
  undefined8 uStack_1550;
  undefined8 local_1548;
  undefined8 uStack_1540;
  undefined8 local_1538;
  undefined8 uStack_1530;
  undefined8 local_1528;
  undefined8 uStack_1520;
  undefined8 local_1518;
  undefined8 uStack_1510;
  undefined8 uStack_1508;
  undefined8 local_1500;
  undefined8 local_14f8;
  undefined8 uStack_14f0;
  undefined8 local_14e8;
  undefined4 uStack_14e0;
  undefined4 uStack_14dc;
  undefined4 uStack_14d8;
  undefined4 uStack_14d4;
  undefined4 uStack_14d0;
  undefined4 uStack_14cc;
  undefined8 local_14c8;
  undefined8 uStack_14c0;
  undefined4 local_14b8;
  undefined1 local_14b4;
  undefined4 local_14b0;
  undefined1 local_14ac;
  undefined4 local_14a8;
  undefined1 local_14a4;
  undefined4 local_14a0;
  undefined1 local_149c;
  undefined4 local_1498;
  undefined1 local_1494;
  undefined4 local_1490;
  undefined1 local_148c;
  undefined4 local_1488;
  undefined1 local_1484;
  undefined4 local_1480;
  undefined1 local_147c;
  undefined4 local_1478;
  undefined1 local_1474;
  undefined4 local_1470;
  undefined1 local_146c;
  undefined4 local_1468;
  undefined1 local_1464;
  undefined4 local_1460;
  undefined1 local_145c;
  undefined4 local_1458;
  undefined1 local_1454;
  undefined4 local_1450;
  undefined1 local_144c;
  undefined4 local_1448;
  undefined1 local_1444;
  undefined4 local_1440;
  undefined1 local_143c;
  undefined1 local_1438;
  undefined1 local_1434;
  undefined1 local_1428;
  undefined8 local_1420;
  undefined8 uStack_1418;
  undefined8 uStack_1410;
  undefined8 uStack_1408;
  undefined8 local_1400;
  undefined8 uStack_13f8;
  undefined8 uStack_13f0;
  undefined1 uStack_13e8;
  undefined7 local_13e7;
  undefined1 uStack_13e0;
  undefined8 uStack_13df;
  undefined8 local_13d4;
  undefined8 uStack_13cc;
  undefined8 uStack_13c4;
  undefined8 uStack_13bc;
  undefined8 local_13b4;
  undefined8 uStack_13ac;
  undefined8 uStack_13a4;
  undefined8 uStack_139c;
  undefined8 local_1394;
  undefined8 uStack_138c;
  undefined8 uStack_1384;
  undefined5 uStack_137c;
  undefined3 local_1377;
  undefined5 uStack_1374;
  undefined1 local_136c;
  undefined1 local_1368;
  undefined1 local_1364;
  undefined1 local_1360;
  undefined1 local_135c;
  undefined1 local_1358;
  undefined1 local_1340;
  undefined8 local_1338;
  undefined8 uStack_1330;
  undefined8 local_1328;
  undefined4 local_1320;
  undefined1 local_131c;
  undefined4 local_131b;
  undefined1 local_1317;
  undefined1 local_1316;
  undefined8 local_1310;
  undefined8 uStack_1308;
  undefined8 uStack_1300;
  undefined8 uStack_12f8;
  undefined8 local_12f0;
  undefined7 uStack_12e8;
  undefined4 uStack_12e1;
  undefined8 local_12dc;
  undefined1 local_12d4;
  undefined1 local_12cc;
  undefined1 local_12c8;
  undefined1 local_12c0;
  undefined1 local_12bc;
  undefined1 local_12b4;
  undefined1 local_12b0;
  undefined1 local_12a8;
  undefined1 local_12a4;
  undefined1 local_129c;
  undefined1 local_1298;
  undefined1 local_1290;
  undefined1 local_128c;
  undefined1 local_1284;
  undefined1 local_1280;
  undefined1 local_1278;
  undefined1 local_1274;
  undefined1 local_126c;
  undefined1 local_1268;
  undefined1 local_1260;
  undefined1 local_125c;
  undefined1 local_1254;
  undefined1 local_1250;
  undefined1 local_1248;
  undefined1 local_1244;
  undefined1 local_123c;
  undefined1 local_1238;
  undefined1 local_1234;
  undefined1 local_1230;
  undefined1 local_122c;
  undefined1 local_1228;
  undefined1 local_1224;
  undefined1 local_1220;
  undefined1 local_121c;
  undefined1 local_1218;
  undefined1 local_1214;
  undefined1 local_1210;
  undefined1 local_120c;
  undefined1 local_1208;
  undefined1 local_1204;
  undefined1 local_1200;
  undefined1 local_11fc;
  undefined1 local_11f8;
  undefined1 local_11f4;
  undefined1 local_11f0;
  undefined1 local_11ec;
  undefined1 local_11e8;
  undefined1 local_11e4;
  undefined1 local_11e0;
  undefined1 local_11dc;
  undefined8 local_11d8;
  undefined8 uStack_11d0;
  undefined8 local_11c8;
  undefined8 uStack_11c0;
  undefined8 uStack_11b8;
  undefined8 uStack_11b0;
  undefined2 local_11a8;
  undefined8 local_11a4;
  undefined1 local_119c;
  undefined8 local_1198;
  undefined8 local_1190;
  undefined8 uStack_1188;
  undefined1 local_1180;
  undefined8 local_1178;
  undefined8 uStack_1170;
  undefined8 uStack_1168;
  undefined8 uStack_1160;
  undefined8 local_1158;
  undefined8 uStack_1150;
  undefined8 uStack_1148;
  undefined8 uStack_1140;
  undefined8 local_1138;
  undefined8 uStack_1130;
  undefined8 uStack_1128;
  undefined8 uStack_1120;
  undefined8 local_1118;
  undefined8 uStack_1110;
  undefined8 uStack_1108;
  undefined8 uStack_1100;
  undefined8 local_10f8;
  undefined8 uStack_10f0;
  undefined8 uStack_10e8;
  undefined8 uStack_10e0;
  undefined8 local_10d8;
  undefined8 uStack_10d0;
  undefined8 local_10c8;
  undefined8 uStack_10c0;
  undefined8 local_10b8;
  undefined8 uStack_10b0;
  undefined8 local_10a8;
  undefined8 uStack_10a0;
  undefined8 local_1098;
  undefined8 uStack_1090;
  undefined8 local_1088;
  undefined6 uStack_1080;
  undefined2 uStack_107a;
  undefined6 uStack_1078;
  undefined1 local_1070;
  undefined1 local_106c;
  undefined1 local_1068;
  undefined8 local_1064;
  undefined8 uStack_105c;
  undefined1 local_1054;
  undefined8 local_1050;
  undefined2 local_1048;
  undefined1 local_1046;
  undefined4 local_1044;
  undefined1 local_1040;
  undefined1 local_fe0;
  undefined1 local_fd8;
  undefined1 local_f78;
  undefined4 local_f70;
  undefined2 local_f6c;
  undefined1 local_f68;
  undefined1 local_f64;
  undefined1 local_f60;
  undefined1 local_f5c;
  undefined1 local_f58;
  undefined1 local_f54;
  undefined1 local_f50;
  undefined1 local_f4c;
  undefined1 local_f48;
  undefined1 local_f44;
  undefined8 local_f40;
  undefined8 uStack_f38;
  undefined8 local_f30;
  undefined4 local_f28;
  undefined8 local_f20;
  undefined8 uStack_f18;
  undefined8 local_f10;
  undefined8 uStack_f08;
  undefined8 local_f00;
  undefined8 uStack_ef8;
  undefined8 local_ef0;
  undefined8 uStack_ee8;
  undefined8 local_ee0;
  undefined8 uStack_ed8;
  undefined8 local_ed0;
  undefined8 uStack_ec8;
  undefined8 local_ec0;
  undefined8 uStack_eb8;
  undefined8 local_eb0;
  undefined8 uStack_ea8;
  undefined8 local_ea0;
  undefined5 uStack_e98;
  undefined3 uStack_e93;
  undefined5 uStack_e90;
  undefined8 local_e88;
  undefined8 uStack_e80;
  undefined8 local_e78;
  undefined8 uStack_e70;
  undefined8 uStack_e68;
  undefined8 uStack_e60;
  undefined4 local_e58;
  undefined4 local_e50;
  undefined8 local_e48;
  undefined8 local_e20;
  undefined4 local_e18;
  undefined8 local_e10;
  undefined4 local_de8;
  undefined4 local_de0;
  undefined8 local_dd8;
  undefined8 local_db0;
  undefined4 local_da8;
  undefined8 local_da0;
  undefined8 local_d78;
  undefined4 local_d70;
  undefined8 local_d68;
  undefined8 uStack_d60;
  undefined8 local_d58;
  undefined8 uStack_d50;
  undefined8 uStack_d48;
  undefined8 uStack_d40;
  undefined4 local_d38;
  undefined8 local_d30;
  undefined4 local_d08;
  undefined8 local_d00;
  undefined4 local_cd8;
  undefined8 local_cd0;
  undefined4 local_ca8;
  undefined8 local_ca0;
  undefined4 local_c78;
  undefined8 local_c70;
  undefined4 local_c48;
  undefined8 local_c40;
  undefined4 local_c18;
  undefined8 local_c10;
  undefined4 local_be8 [2];
  undefined8 local_be0;
  undefined8 uStack_bd8;
  undefined8 local_bd0;
  undefined8 local_bc8;
  undefined8 uStack_bc0;
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
  pvStack_1658 = (void *)0x0;
  local_1660 = 0;
  uStack_1648 = 0;
  local_1650 = (void *)0x0;
  pvStack_1638 = (void *)0x0;
  local_1640 = (void *)0x0;
  uStack_1628 = 0;
  uStack_1630 = 0;
  pvStack_1668 = (void *)0x0;
  local_1670 = (void *)0x0;
                    /* try { // try from 008a5a64 to 008a5a6f has its CatchHandler @ 008a6170 */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_1670);
  local_f8 = 0;
  *(undefined ***)this = &PTR_FUN_00999488;
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
                    /* try { // try from 008a5ae0 to 008a5af3 has its CatchHandler @ 008a61a0 */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1b0);
  local_100 = CONCAT44(local_100._4_4_,0x3f800000);
  local_1680[0] = 0xffffffff;
  uStack_108 = 0;
  local_110 = (void *)0x0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_1678 = &local_1b0;
  facebook::react::RawProps::facebook::react::RawProps::parse(&local_f8,this + 0x38);
  memset(local_1600,0,0xa18);
  local_be8[0] = 5;
  local_bd0 = 0;
  local_1620 = *(undefined **)(PTR_VTT_0099f168 + 0x20);
  local_1600[0] = 5;
  uStack_1608 = 0;
  local_1610 = 0;
  local_bc8 = 0;
  uStack_1618 = 0;
  uStack_bc0 = 0x3f800000;
  uStack_bd8 = 0;
  local_be0 = 0;
  uStack_15f0 = 0;
  local_15f8 = 0;
  uStack_15e0 = 0;
  local_15e8 = 0;
  local_15d8 = 0x3f800000;
  folly::dynamic::folly::dynamic::destroy(local_be8);
  local_15d0 = 0x10410710;
  local_15cc = 0;
  uStack_14e0 = 0;
  local_14e8 = 0;
  uStack_14cc = 0;
  uStack_14f0 = 0;
  local_14f8 = 0;
  uStack_1567 = 0;
  uStack_15bb = 0;
  local_15c3 = 0;
  local_15cb = _s__00375408;
  uStack_15ab = 0;
  local_15b3 = 0;
  uStack_1188 = _UNK_00371598;
  local_1190 = _DAT_00371590;
  uStack_159b = 0;
  local_15a3 = 0;
  uStack_158b = 0;
  local_1593 = 0;
  uStack_1090 = _UNK_00488920;
  local_1098 = _DAT_00488918;
  uStack_10a0 = _UNK_00488910;
  local_10a8 = _DAT_00488908;
  local_1575 = 0x40004;
  uStack_14d4 = 0;
  uStack_14d0 = 0;
  uStack_14dc = 0;
  uStack_14d8 = 0;
  uStack_14c0 = 0;
  local_14c8 = 0;
  local_14b8 = 0x7fc00000;
  local_14b0 = 0x7fc00000;
  local_14a8 = 0x7fc00000;
  local_14a0 = 0x7fc00000;
  local_1498 = 0x7fc00000;
  local_1490 = 0x7fc00000;
  local_1488 = 0x7fc00000;
  local_1480 = 0x7fc00000;
  local_1478 = 0x7fc00000;
  local_1470 = 0x7fc00000;
  local_1468 = 0x7fc00000;
  local_1460 = 0x7fc00000;
  local_1458 = 0x7fc00000;
  local_1450 = 0x7fc00000;
  local_1448 = 0x7fc00000;
  local_1440 = 0x7fc00000;
  uStack_13df = 0;
  uStack_13e0 = 0;
  uStack_13cc = 0;
  local_13d4 = 0;
  uStack_13bc = 0;
  uStack_13c4 = 0;
  uStack_13ac = 0;
  local_13b4 = 0;
  uStack_139c = 0;
  uStack_13a4 = 0;
  uStack_138c = 0;
  local_1394 = 0;
  uStack_137c = 0;
  uStack_1384 = 0;
  local_1377 = 0;
  uStack_1374 = 0;
  local_131c = 1;
  local_131b = 0;
  local_1316 = 0x23;
  local_12dc = 0x3f800000;
  uStack_11c0 = 0;
  local_11c8 = 0;
  uStack_11b0 = 0;
  uStack_11b8 = 0;
  uStack_11d0 = 0;
  local_11d8 = 0;
  uStack_10b0 = _UNK_00488900;
  local_10b8 = _DAT_004888f8;
  local_11a4 = 0;
  uStack_10c0 = _UNK_004888f0;
  local_10c8 = _DAT_004888e8;
  uStack_1170 = 0;
  local_1178 = 0;
  uStack_1160 = 0;
  uStack_1168 = 0;
  uStack_1150 = 0;
  local_1158 = 0;
  uStack_1140 = 0;
  uStack_1148 = 0;
  uStack_1130 = 0;
  local_1138 = 0;
  uStack_1120 = 0;
  uStack_1128 = 0;
  uStack_1110 = 0;
  local_1118 = 0;
  uStack_1100 = 0;
  uStack_1108 = 0;
  uStack_10f0 = 0;
  local_10f8 = 0;
  uStack_10e0 = 0;
  uStack_10e8 = 0;
  uStack_10d0 = 0;
  local_10d8 = 0;
  uStack_1078 = 0;
  uStack_1080 = 0;
  uStack_107a = 0;
  local_1088 = 0;
  uStack_157d = 0;
  uStack_1585 = 0;
  uStack_1583 = 0;
  local_1571 = 0;
  local_1569 = 0;
  uStack_1568 = 0;
  uStack_1558 = 0;
  uStack_1560 = 0;
  local_1548 = 0;
  uStack_1550 = 0;
  local_1538 = 0;
  uStack_1540 = 0;
  local_1528 = 0;
  uStack_1530 = 0;
  local_1518 = 0;
  uStack_1520 = 0;
  uStack_1508 = 0;
  uStack_1510 = 0;
  local_1500 = 0;
  local_14b4 = 0;
  local_14ac = 0;
  local_14a4 = 0;
  local_149c = 0;
  local_1494 = 0;
  local_148c = 0;
  local_1484 = 0;
  local_147c = 0;
  local_1474 = 0;
  local_146c = 0;
  local_1464 = 0;
  local_145c = 0;
  local_1454 = 0;
  local_144c = 0;
  local_1444 = 0;
  local_143c = 0;
  local_1438 = 0;
  local_1434 = 0;
  local_1428 = 0;
  local_136c = 0;
  local_1368 = 0;
  local_1364 = 0;
  local_1360 = 0;
  local_135c = 0;
  local_1358 = 0;
  local_1340 = 0;
  uStack_1418 = 0;
  local_1420 = 0;
  uStack_1408 = 0;
  uStack_1410 = 0;
  uStack_13f8 = 0;
  local_1400 = 0;
  uStack_13e8 = 0;
  local_13e7 = 0;
  uStack_13f0 = 0;
  uStack_1330 = 0;
  local_1338 = 0;
  local_1328 = 0;
  local_1320 = 0;
  local_1317 = 0;
  uStack_1308 = 0;
  local_1310 = 0;
  uStack_12f8 = 0;
  uStack_1300 = 0;
  uStack_12e8 = 0;
  uStack_12e1 = 0;
  local_12f0 = 0;
  local_12d4 = 0;
  local_12cc = 0;
  local_12c8 = 0;
  local_12c0 = 0;
  local_12bc = 0;
  local_12b4 = 0;
  local_12b0 = 0;
  local_12a8 = 0;
  local_12a4 = 0;
  local_129c = 0;
  local_1298 = 0;
  local_1290 = 0;
  local_128c = 0;
  local_1284 = 0;
  local_1280 = 0;
  local_1278 = 0;
  local_1274 = 0;
  local_126c = 0;
  local_1268 = 0;
  local_1260 = 0;
  local_125c = 0;
  local_1254 = 0;
  local_1250 = 0;
  local_1248 = 0;
  local_1244 = 0;
  local_123c = 0;
  local_1238 = 0;
  local_1234 = 0;
  local_1230 = 0;
  local_122c = 0;
  local_1228 = 0;
  local_1224 = 0;
  local_1220 = 0;
  local_121c = 0;
  local_1218 = 0;
  local_1214 = 0;
  local_1210 = 0;
  local_120c = 0;
  local_1208 = 0;
  local_1204 = 0;
  local_1200 = 0;
  local_11fc = 0;
  local_11f8 = 0;
  local_11f4 = 0;
  local_11f0 = 0;
  local_11ec = 0;
  local_11e8 = 0;
  local_11e4 = 0;
  local_11e0 = 0;
  local_11dc = 0;
  local_1198 = 0;
  local_11a8 = 0;
  local_119c = 0;
  local_1180 = 0;
  local_1070 = 0;
  local_106c = 0;
  local_1068 = 0;
  local_1050 = 0;
  uStack_105c = 0;
  local_1064 = 0;
  local_1054 = 0;
  local_1048 = 0x101;
  local_1046 = 0;
  local_1044 = 0;
  local_1040 = 0;
  local_fe0 = 0;
  local_fd8 = 0;
  local_f78 = 0;
  local_f68 = 0;
  local_f64 = 0;
  local_f60 = 0;
  local_f5c = 0;
  local_f58 = 0;
  local_f54 = 0;
  local_f50 = 0;
  local_f4c = 0;
  local_f48 = 0;
  local_f44 = 0;
  local_f6c = 0;
  local_f70 = 0;
  local_1620 = PTR_vtable_0099f160 + 0x20;
  local_f30 = 0;
  uStack_e90 = 0;
  uStack_e70 = 0;
  local_e78 = 0;
  uStack_e60 = 0;
  uStack_e68 = 0;
  uStack_e80 = 0;
  local_e88 = 0;
  uStack_f38 = 0;
  local_f40 = 0;
  local_e20 = 0x13f800000;
  local_f28 = 0x3f800000;
  local_e50 = 0;
  local_e48 = 0;
  uStack_f18 = 0;
  local_f20 = 0;
  uStack_f08 = 0;
  local_f10 = 0;
  uStack_ef8 = 0;
  local_f00 = 0;
  uStack_ee8 = 0;
  local_ef0 = 0;
  uStack_ed8 = 0;
  local_ee0 = 0;
  uStack_ec8 = 0;
  local_ed0 = 0;
  uStack_eb8 = 0;
  local_ec0 = 0;
  uStack_ea8 = 0;
  local_eb0 = 0;
  uStack_e98 = 0;
  uStack_e93 = 0;
  local_ea0 = 0;
  local_e58 = 0;
  local_e18 = 0;
  local_e10 = 0;
  local_de8 = 0x3f800000;
  local_de0 = 0;
  local_dd8 = 0;
  local_db0 = 0;
  local_da8 = 0;
  local_da0 = 0;
  local_d78 = 0;
  local_d70 = 0;
  local_d30 = 0;
  local_d08 = 0;
  local_d00 = 0;
  local_cd8 = 0;
  local_cd0 = 0;
  local_ca8 = 0;
  local_ca0 = 0;
  local_c78 = 0;
  local_c70 = 0;
  local_c48 = 0;
  local_c40 = 0;
  local_c18 = 0;
  local_c10 = 0;
  uStack_d50 = 0;
  local_d58 = 0;
  uStack_d40 = 0;
  uStack_d48 = 0;
  uStack_d60 = 0;
  local_d68 = 0;
  local_d38 = 0;
                    /* try { // try from 008a5fb0 to 008a5fc3 has its CatchHandler @ 008a61a0 */
  facebook::react::RNSVGForeignObjectProps::RNSVGForeignObjectProps
            ((RNSVGForeignObjectProps *)local_be8,(PropsParserContext *)local_1680,
             (RNSVGForeignObjectProps *)&local_1620,(RawProps *)&local_f8);
  FUN_008a6c64(local_be8);
  FUN_008a6c64(&local_1620);
  facebook::react::RawPropsParser::facebook::react::RawPropsParser::postPrepare(this + 0x38);
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
  pvVar7 = pvStack_80;
  pvVar3 = local_78;
  if (pvStack_80 != (void *)0x0) {
    while (pvVar3 != pvVar7) {
      if (*(uint *)((long)pvVar3 + -8) != 0xffffffff) {
                    /* try { // try from 008a60c8 to 008a60d3 has its CatchHandler @ 008a61a4 */
        (*(code *)(&PTR_FUN_0098f088)[*(uint *)((long)pvVar3 + -8)])
                  (&local_1620,(void *)((long)pvVar3 + -0x38));
      }
      *(undefined4 *)((long)pvVar3 + -8) = 0xffffffff;
      pvVar3 = (void *)((long)pvVar3 + -0x38);
    }
    local_78 = pvVar7;
    operator_delete(pvStack_80);
  }
  if (local_98 != (void *)0x0) {
    pvStack_90 = local_98;
    operator_delete(local_98);
  }
  folly::dynamic::folly::dynamic::destroy(local_d0);
  facebook::jsi::Value::~Value((Value *)local_e0);
  if (local_1640 != (void *)0x0) {
    pvStack_1638 = local_1640;
    operator_delete(local_1640);
  }
  if (pvStack_1658 != (void *)0x0) {
    local_1650 = pvStack_1658;
    operator_delete(pvStack_1658);
  }
  if (local_1670 != (void *)0x0) {
    pvStack_1668 = local_1670;
    operator_delete(local_1670);
  }
  *param_1 = this;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008a61a8  FUN_008a61a8 =====

void FUN_008a61a8(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 008a61cc  FUN_008a61cc =====

undefined * FUN_008a61cc(void)

{
  return PTR_RNSVGForeignObjectComponentName_0099f158;
}


// ===== 008a61d8  FUN_008a61d8 =====

undefined * FUN_008a61d8(void)

{
  return PTR_RNSVGForeignObjectComponentName_0099f158;
}


// ===== 008a61e4  FUN_008a61e4 =====

undefined8 FUN_008a61e4(void)

{
  return 0x61;
}


// ===== 008a61ec  FUN_008a61ec =====

void FUN_008a61ec(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  RNSVGLayoutableShadowNode *pRVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  
  lVar2 = tpidr_el0;
  lVar6 = *(long *)(lVar2 + 0x28);
  uVar3 = (**(code **)(*param_2 + 0x20))();
  puVar4 = (undefined8 *)operator_new(0x400);
  pRVar1 = (RNSVGLayoutableShadowNode *)(puVar4 + 3);
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_00999518;
                    /* try { // try from 008a6258 to 008a6267 has its CatchHandler @ 008a62cc */
  facebook::react::RNSVGLayoutableShadowNode::RNSVGLayoutableShadowNode
            (pRVar1,param_3,param_4,uVar3);
  lVar5 = *param_2;
  puVar4[3] = &PTR_FUN_00999568;
                    /* try { // try from 008a6280 to 008a628b has its CatchHandler @ 008a62bc */
  (**(code **)(lVar5 + 0x60))(param_2,pRVar1);
  *param_1 = pRVar1;
  param_1[1] = puVar4;
  if (*(long *)(lVar2 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008a62fc  FUN_008a62fc =====

void FUN_008a62fc(undefined8 *param_1,long *param_2,ShadowNode *param_3,ShadowNodeFragment *param_4)

{
  RNSVGLayoutableShadowNode *pRVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  RNSVGLayoutableShadowNode *local_78;
  long *local_70;
  RNSVGLayoutableShadowNode *local_68;
  long *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  plVar3 = (long *)operator_new(0x400);
  pRVar1 = (RNSVGLayoutableShadowNode *)(plVar3 + 3);
  plVar3[1] = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_00999518;
                    /* try { // try from 008a6354 to 008a6363 has its CatchHandler @ 008a6430 */
  facebook::react::RNSVGLayoutableShadowNode::RNSVGLayoutableShadowNode(pRVar1,param_3,param_4);
  plVar3[3] = (long)&PTR_FUN_00999568;
  local_68 = pRVar1;
  local_60 = plVar3;
                    /* try { // try from 008a6374 to 008a6383 has its CatchHandler @ 008a6448 */
  facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::
  completeClone(pRVar1,param_3,param_4);
  local_78 = pRVar1;
  local_70 = plVar3;
  FUN_00757d00(1,plVar3 + 1);
                    /* try { // try from 008a6394 to 008a63a3 has its CatchHandler @ 008a6420 */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_78);
  plVar3 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar4 = FUN_00757990(0xffffffffffffffff,local_70 + 1), lVar4 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pRVar1 = local_68;
                    /* try { // try from 008a63e0 to 008a63eb has its CatchHandler @ 008a6448 */
  (**(code **)(*param_2 + 0x60))(param_2,local_68);
  *param_1 = pRVar1;
  param_1[1] = local_60;
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008a6470  FUN_008a6470 =====

void FUN_008a6470(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x008a6480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 008a6484  FUN_008a6484 =====

void FUN_008a6484(undefined8 *param_1,long param_2,PropsParserContext *param_3,long *param_4,
                 RawProps *param_5)

{
  RNSVGForeignObjectProps *this;
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
  RNSVGForeignObjectProps *pRVar12;
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
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSVGForeignObjectComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_23RNSVGForeignObjectPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec30
         & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSVGForeignObjectComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_23RNSVGForeignObjectPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec30
                                   ), iVar6 != 0)) {
                    /* try { // try from 008a68b8 to 008a68bb has its CatchHandler @ 008a68e8 */
      FUN_008a7060();
      __cxa_atexit(FUN_008a7214,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSVGForeignObjectComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_23RNSVGForeignObjectPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec28
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSVGForeignObjectComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_23RNSVGForeignObjectPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec30
                         );
    }
    lVar11 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSVGForeignObjectComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_23RNSVGForeignObjectPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec28
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSVGForeignObjectComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_23RNSVGForeignObjectPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec28
    ;
    param_1[1] = lVar11;
    if (lVar11 != 0) {
      FUN_00757d00(1,lVar11 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    pRVar12 = (RNSVGForeignObjectProps *)*param_4;
    if (pRVar12 == (RNSVGForeignObjectProps *)0x0) {
      if (((*
            PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSVGForeignObjectComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_23RNSVGForeignObjectPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec30
           & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSVGForeignObjectComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_23RNSVGForeignObjectPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec30
                                     ), iVar6 != 0)) {
                    /* try { // try from 008a6838 to 008a683b has its CatchHandler @ 008a6900 */
        FUN_008a7060();
        __cxa_atexit(FUN_008a7214,
                     PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSVGForeignObjectComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_23RNSVGForeignObjectPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec28
                     ,&PTR_LOOP_008d5d30);
        __cxa_guard_release(
                           PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSVGForeignObjectComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_23RNSVGForeignObjectPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec30
                           );
      }
      pRVar12 = *(RNSVGForeignObjectProps **)
                 PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSVGForeignObjectComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_23RNSVGForeignObjectPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec28
      ;
    }
    plVar8 = (long *)operator_new(0xa50);
    this = (RNSVGForeignObjectProps *)(plVar8 + 3);
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = (long)&PTR_FUN_00999680;
                    /* try { // try from 008a6564 to 008a6577 has its CatchHandler @ 008a6974 */
    facebook::react::RNSVGForeignObjectProps::RNSVGForeignObjectProps(this,param_3,pRVar12,param_5);
                    /* try { // try from 008a657c to 008a658f has its CatchHandler @ 008a698c */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if ((((uVar7 & 1) == 0) ||
        (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar7 & 1) == 0)) ||
       (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
                enablePropsUpdateReconciliationAndroid(), (uVar7 & 1) == 0)) {
LAB_008a65b8:
      FUN_00757d00(1,plVar8 + 1);
      if (*param_4 == 0) {
        if (((*
              PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSVGForeignObjectComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_23RNSVGForeignObjectPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec30
             & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(
                                       PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSVGForeignObjectComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_23RNSVGForeignObjectPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec30
                                       ), iVar6 != 0)) {
                    /* try { // try from 008a6878 to 008a687b has its CatchHandler @ 008a68ec */
          FUN_008a7060();
          __cxa_atexit(FUN_008a7214,
                       PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSVGForeignObjectComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_23RNSVGForeignObjectPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec28
                       ,&PTR_LOOP_008d5d30);
          __cxa_guard_release(
                             PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSVGForeignObjectComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_23RNSVGForeignObjectPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec30
                             );
        }
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 008a6620 to 008a6633 has its CatchHandler @ 008a6918 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*(undefined8 *)
                         PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSVGForeignObjectComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_23RNSVGForeignObjectPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec28
                   ,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
LAB_008a666c:
          (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
        }
        else if (local_b0 != (dynamic *)0x0) {
          lVar11 = 5;
          pdVar10 = local_b0;
          goto LAB_008a666c;
        }
        if (plVar8 != (long *)0x0) goto LAB_008a6680;
      }
      else {
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 008a65d4 to 008a65e7 has its CatchHandler @ 008a6940 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*param_4,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
        }
        else {
          if (local_b0 == (dynamic *)0x0) goto LAB_008a6680;
          lVar11 = 5;
          pdVar10 = local_b0;
        }
        (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
LAB_008a6680:
        lVar11 = FUN_00757990(0xffffffffffffffff,plVar8 + 1);
        if (lVar11 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 008a659c to 008a65a7 has its CatchHandler @ 008a6914 */
      pcVar9 = (char *)(**(code **)(*(long *)this + 0x10))(this);
      iVar6 = strcmp(PTR_RNSVGForeignObjectComponentName_0099f158,pcVar9);
      if (iVar6 != 0) goto LAB_008a65b8;
      bVar3 = false;
    }
                    /* try { // try from 008a66ac to 008a66af has its CatchHandler @ 008a698c */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar7 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 008a66bc to 008a66d7 has its CatchHandler @ 008a693c */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(plVar8 + 7));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 008a6818 to 008a6827 has its CatchHandler @ 008a6934 */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_008a69d8;
      }
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (*(int *)(plVar4 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 008a67f8 to 008a6807 has its CatchHandler @ 008a6998 */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_008a69d8;
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
                    /* try { // try from 008a6758 to 008a6763 has its CatchHandler @ 008a69a0 */
        folly::dynamic::dynamic(local_d0,(dynamic *)(plVar4 + 8));
        local_a0 = 0;
                    /* try { // try from 008a6768 to 008a677f has its CatchHandler @ 008a69a4 */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (this,param_3,uVar1,pcVar9,local_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 008a6790 to 008a679b has its CatchHandler @ 008a6994 */
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
LAB_008a69d8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008a69dc  FUN_008a69dc =====

void FUN_008a69dc(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 008a69e4  FUN_008a69e4 =====

void FUN_008a69e4(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 008a69ec  FUN_008a69ec =====

void FUN_008a69ec(undefined8 *param_1,long param_2,long param_3)

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
                    /* try { // try from 008a6a30 to 008a6a37 has its CatchHandler @ 008a6c38 */
  plVar6 = (long *)operator_new(0x68);
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&PTR_FUN_00992a08;
                    /* try { // try from 008a6a50 to 008a6a5b has its CatchHandler @ 008a6c20 */
  local_78 = FUN_008707fc(plVar6 + 3,&local_58,param_2 + 8);
  local_70 = plVar6;
  if ((local_50 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,local_50 + 1), lVar7 == 0)) {
    (**(code **)(*local_50 + 0x10))(local_50);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 008a6a90 to 008a6a97 has its CatchHandler @ 008a6c10 */
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
                    /* try { // try from 008a6ae4 to 008a6afb has its CatchHandler @ 008a6be0 */
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
                    /* try { // try from 008a6b50 to 008a6b5b has its CatchHandler @ 008a6bc0 */
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


// ===== 008a6c60  FUN_008a6c60 =====

void FUN_008a6c60(void)

{
  return;
}


// ===== 008a6c64  FUN_008a6c64 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_008a6c64(long param_1)

{
  byte bVar1;
  void *pvVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  folly::dynamic::folly::dynamic::destroy(param_1 + 0xa08);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x9d8);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x9a8);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x978);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x948);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x918);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x8e8);
  if ((*(byte *)(param_1 + 0x8d0) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x8e0));
  }
  pbVar4 = *(byte **)(param_1 + 0x8b8);
  if (pbVar4 != (byte *)0x0) {
    pbVar3 = *(byte **)(param_1 + 0x8c0);
    pbVar5 = pbVar4;
    if (pbVar3 != pbVar4) {
      do {
        pbVar5 = pbVar3 + -0x18;
        if ((*pbVar5 & 1) != 0) {
          operator_delete(*(void **)(pbVar3 + -8));
        }
        pbVar3 = pbVar5;
      } while (pbVar5 != pbVar4);
      pbVar5 = *(byte **)(param_1 + 0x8b8);
    }
    *(byte **)(param_1 + 0x8c0) = pbVar4;
    operator_delete(pbVar5);
  }
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x878);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x840);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x808);
  folly::dynamic::folly::dynamic::destroy(param_1 + 2000);
  if ((*(byte *)(param_1 + 0x7b0) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x798);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x7c0));
    bVar1 = *(byte *)(param_1 + 0x798);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x778);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x7a8));
    bVar1 = *(byte *)(param_1 + 0x778);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x760);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x788));
    bVar1 = *(byte *)(param_1 + 0x760);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x748);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x770));
    bVar1 = *(byte *)(param_1 + 0x748);
  }
  if ((bVar1 & 1) == 0) {
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
    pvVar2 = *(void **)(param_1 + 0x700);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x728));
    pvVar2 = *(void **)(param_1 + 0x700);
  }
  if (pvVar2 != (void *)0x0) {
    *(void **)(param_1 + 0x708) = pvVar2;
    operator_delete(pvVar2);
  }
  if ((*(byte *)(param_1 + 0x6e0) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x6f0));
  }
  FUN_0078917c(param_1,PTR_VTT_0099f168 + 8);
  return;
}


// ===== 008a6e18  FUN_008a6e18 =====

void FUN_008a6e18(long param_1)

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


// ===== 008a6e68  FUN_008a6e68 =====

void FUN_008a6e68(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00999518;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008a6e78  FUN_008a6e78 =====

void FUN_008a6e78(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00999518;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008a6ea8  FUN_008a6ea8 =====

void FUN_008a6ea8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x008a6eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


