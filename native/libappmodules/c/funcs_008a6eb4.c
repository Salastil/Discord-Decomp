// ===== 008a6eb4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008a6eb8  FUN_008a6eb8 =====

void FUN_008a6eb8(long *param_1)

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


// ===== 008a6f78  FUN_008a6f78 =====

void FUN_008a6f78(long param_1)

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


// ===== 008a6fe0  FUN_008a6fe0 =====

bool FUN_008a6fe0(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 008a6ff8  FUN_008a6ff8 =====

bool FUN_008a6ff8(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 008a7010  FUN_008a7010 =====

void FUN_008a7010(long param_1)

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


// ===== 008a7060  FUN_008a7060 =====

void FUN_008a7060(void)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0xa50);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_00999630;
  memset(__s,0,0xa38);
                    /* try { // try from 008a709c to 008a70af has its CatchHandler @ 008a71f8 */
  FUN_00788b10(__s,PTR_VTT_0099f168 + 0x10);
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
  puVar1 = PTR_vtable_0099f160;
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
  *(undefined4 *)(puVar2 + 0x138) = 0;
  puVar2[0x139] = 0;
  *(undefined4 *)(puVar2 + 0x13e) = 0;
  puVar2[0x13f] = 0;
  *(undefined4 *)(puVar2 + 0x144) = 0;
  puVar2[0x145] = 0;
  *(undefined4 *)(puVar2 + 0x120) = 0;
  puVar2[0x11f] = 0;
  puVar2[0x11e] = 0;
  puVar2[0x11d] = 0;
  puVar2[0x11c] = 0;
  puVar1 = 
  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_31RNSVGForeignObjectComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_23RNSVGForeignObjectPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec28
  ;
  puVar2[0x11b] = 0;
  puVar2[0x11a] = 0;
  *(undefined8 **)puVar1 = __s;
  *(undefined8 **)(puVar1 + 8) = puVar2;
  return;
}


// ===== 008a7214  FUN_008a7214 =====

void FUN_008a7214(long param_1)

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


// ===== 008a7264  FUN_008a7264 =====

void FUN_008a7264(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00999630;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008a7274  FUN_008a7274 =====

void FUN_008a7274(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00999630;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008a72a4  FUN_008a72a4 =====

void FUN_008a72a4(long param_1)

{
  FUN_008a6c64(param_1 + 0x18);
  return;
}


// ===== 008a72ac  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008a72b0  FUN_008a72b0 =====

void FUN_008a72b0(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00999680;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008a72c0  FUN_008a72c0 =====

void FUN_008a72c0(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00999680;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008a72f0  FUN_008a72f0 =====

void FUN_008a72f0(long param_1)

{
  FUN_008a6c64(param_1 + 0x18);
  return;
}


// ===== 008a72f8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008a72fc  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_23RNSVGConcreteShadowNodeIXadsoKcL_ZNS0_23RNSVGGroupComponentNameEEEENS0_15RNSVGGroupPropsEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENS8_14default_deleteISB_EEEERKNS0_29ComponentDescriptorParametersE =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_23RNSVGConcreteShadowNodeIXadsoKcL_ZNS0_23RNSVGGroupComponentNameEEEENS0_15RNSVGGroupPropsEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENS8_14default_deleteISB_EEEERKNS0_29ComponentDescriptorParametersE
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
                    /* try { // try from 008a7350 to 008a735b has its CatchHandler @ 008a7a3c */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_14f0);
  local_f8 = 0;
  *(undefined ***)this = &PTR_FUN_009996d0;
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
                    /* try { // try from 008a73cc to 008a73df has its CatchHandler @ 008a7a6c */
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
  local_14a0 = *(undefined **)(PTR_VTT_0099f180 + 0x20);
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
  local_14a0 = PTR_vtable_0099f178 + 0x20;
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
                    /* try { // try from 008a787c to 008a788f has its CatchHandler @ 008a7a6c */
  facebook::react::RNSVGGroupProps::RNSVGGroupProps
            ((RNSVGGroupProps *)local_b28,(PropsParserContext *)local_1500,
             (RNSVGGroupProps *)&local_14a0,(RawProps *)&local_f8);
  FUN_008a8530(local_b28);
  FUN_008a8530(&local_14a0);
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
                    /* try { // try from 008a7994 to 008a799f has its CatchHandler @ 008a7a70 */
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


// ===== 008a7a74  FUN_008a7a74 =====

void FUN_008a7a74(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 008a7a98  FUN_008a7a98 =====

undefined * FUN_008a7a98(void)

{
  return PTR_RNSVGGroupComponentName_0099f170;
}


// ===== 008a7aa4  FUN_008a7aa4 =====

undefined * FUN_008a7aa4(void)

{
  return PTR_RNSVGGroupComponentName_0099f170;
}


// ===== 008a7ab0  FUN_008a7ab0 =====

undefined8 FUN_008a7ab0(void)

{
  return 0x61;
}


// ===== 008a7ab8  FUN_008a7ab8 =====

void FUN_008a7ab8(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

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
  *puVar4 = &PTR_FUN_00999760;
                    /* try { // try from 008a7b24 to 008a7b33 has its CatchHandler @ 008a7b98 */
  facebook::react::RNSVGLayoutableShadowNode::RNSVGLayoutableShadowNode
            (pRVar1,param_3,param_4,uVar3);
  lVar5 = *param_2;
  puVar4[3] = &PTR_FUN_009997b0;
                    /* try { // try from 008a7b4c to 008a7b57 has its CatchHandler @ 008a7b88 */
  (**(code **)(lVar5 + 0x60))(param_2,pRVar1);
  *param_1 = pRVar1;
  param_1[1] = puVar4;
  if (*(long *)(lVar2 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008a7bc8  FUN_008a7bc8 =====

void FUN_008a7bc8(undefined8 *param_1,long *param_2,ShadowNode *param_3,ShadowNodeFragment *param_4)

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
  *plVar3 = (long)&PTR_FUN_00999760;
                    /* try { // try from 008a7c20 to 008a7c2f has its CatchHandler @ 008a7cfc */
  facebook::react::RNSVGLayoutableShadowNode::RNSVGLayoutableShadowNode(pRVar1,param_3,param_4);
  plVar3[3] = (long)&PTR_FUN_009997b0;
  local_68 = pRVar1;
  local_60 = plVar3;
                    /* try { // try from 008a7c40 to 008a7c4f has its CatchHandler @ 008a7d14 */
  facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::
  completeClone(pRVar1,param_3,param_4);
  local_78 = pRVar1;
  local_70 = plVar3;
  FUN_00757d00(1,plVar3 + 1);
                    /* try { // try from 008a7c60 to 008a7c6f has its CatchHandler @ 008a7cec */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_78);
  plVar3 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar4 = FUN_00757990(0xffffffffffffffff,local_70 + 1), lVar4 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pRVar1 = local_68;
                    /* try { // try from 008a7cac to 008a7cb7 has its CatchHandler @ 008a7d14 */
  (**(code **)(*param_2 + 0x60))(param_2,local_68);
  *param_1 = pRVar1;
  param_1[1] = local_60;
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008a7d3c  FUN_008a7d3c =====

void FUN_008a7d3c(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x008a7d4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 008a7d50  FUN_008a7d50 =====

void FUN_008a7d50(undefined8 *param_1,long param_2,PropsParserContext *param_3,long *param_4,
                 RawProps *param_5)

{
  RNSVGGroupProps *this;
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
  RNSVGGroupProps *pRVar12;
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
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_23RNSVGGroupComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_15RNSVGGroupPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec40
         & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_23RNSVGGroupComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_15RNSVGGroupPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec40
                                   ), iVar6 != 0)) {
                    /* try { // try from 008a8184 to 008a8187 has its CatchHandler @ 008a81b4 */
      FUN_008a890c();
      __cxa_atexit(FUN_008a8aa0,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_23RNSVGGroupComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_15RNSVGGroupPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec38
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_23RNSVGGroupComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_15RNSVGGroupPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec40
                         );
    }
    lVar11 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_23RNSVGGroupComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_15RNSVGGroupPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec38
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_23RNSVGGroupComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_15RNSVGGroupPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec38
    ;
    param_1[1] = lVar11;
    if (lVar11 != 0) {
      FUN_00757d00(1,lVar11 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    pRVar12 = (RNSVGGroupProps *)*param_4;
    if (pRVar12 == (RNSVGGroupProps *)0x0) {
      if (((*
            PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_23RNSVGGroupComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_15RNSVGGroupPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec40
           & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_23RNSVGGroupComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_15RNSVGGroupPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec40
                                     ), iVar6 != 0)) {
                    /* try { // try from 008a8104 to 008a8107 has its CatchHandler @ 008a81cc */
        FUN_008a890c();
        __cxa_atexit(FUN_008a8aa0,
                     PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_23RNSVGGroupComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_15RNSVGGroupPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec38
                     ,&PTR_LOOP_008d5d30);
        __cxa_guard_release(
                           PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_23RNSVGGroupComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_15RNSVGGroupPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec40
                           );
      }
      pRVar12 = *(RNSVGGroupProps **)
                 PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_23RNSVGGroupComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_15RNSVGGroupPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec38
      ;
    }
    plVar8 = (long *)operator_new(0x990);
    this = (RNSVGGroupProps *)(plVar8 + 3);
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = (long)&PTR_FUN_009998c8;
                    /* try { // try from 008a7e30 to 008a7e43 has its CatchHandler @ 008a8240 */
    facebook::react::RNSVGGroupProps::RNSVGGroupProps(this,param_3,pRVar12,param_5);
                    /* try { // try from 008a7e48 to 008a7e5b has its CatchHandler @ 008a8258 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if ((((uVar7 & 1) == 0) ||
        (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar7 & 1) == 0)) ||
       (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
                enablePropsUpdateReconciliationAndroid(), (uVar7 & 1) == 0)) {
LAB_008a7e84:
      FUN_00757d00(1,plVar8 + 1);
      if (*param_4 == 0) {
        if (((*
              PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_23RNSVGGroupComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_15RNSVGGroupPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec40
             & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(
                                       PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_23RNSVGGroupComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_15RNSVGGroupPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec40
                                       ), iVar6 != 0)) {
                    /* try { // try from 008a8144 to 008a8147 has its CatchHandler @ 008a81b8 */
          FUN_008a890c();
          __cxa_atexit(FUN_008a8aa0,
                       PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_23RNSVGGroupComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_15RNSVGGroupPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec38
                       ,&PTR_LOOP_008d5d30);
          __cxa_guard_release(
                             PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_23RNSVGGroupComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_15RNSVGGroupPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec40
                             );
        }
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 008a7eec to 008a7eff has its CatchHandler @ 008a81e4 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*(undefined8 *)
                         PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_23RNSVGGroupComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_15RNSVGGroupPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec38
                   ,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
LAB_008a7f38:
          (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
        }
        else if (local_b0 != (dynamic *)0x0) {
          lVar11 = 5;
          pdVar10 = local_b0;
          goto LAB_008a7f38;
        }
        if (plVar8 != (long *)0x0) goto LAB_008a7f4c;
      }
      else {
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 008a7ea0 to 008a7eb3 has its CatchHandler @ 008a820c */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*param_4,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
        }
        else {
          if (local_b0 == (dynamic *)0x0) goto LAB_008a7f4c;
          lVar11 = 5;
          pdVar10 = local_b0;
        }
        (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
LAB_008a7f4c:
        lVar11 = FUN_00757990(0xffffffffffffffff,plVar8 + 1);
        if (lVar11 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 008a7e68 to 008a7e73 has its CatchHandler @ 008a81e0 */
      pcVar9 = (char *)(**(code **)(*(long *)this + 0x10))(this);
      iVar6 = strcmp(PTR_RNSVGGroupComponentName_0099f170,pcVar9);
      if (iVar6 != 0) goto LAB_008a7e84;
      bVar3 = false;
    }
                    /* try { // try from 008a7f78 to 008a7f7b has its CatchHandler @ 008a8258 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar7 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 008a7f88 to 008a7fa3 has its CatchHandler @ 008a8208 */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(plVar8 + 7));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 008a80e4 to 008a80f3 has its CatchHandler @ 008a8200 */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_008a82a4;
      }
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (*(int *)(plVar4 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 008a80c4 to 008a80d3 has its CatchHandler @ 008a8264 */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_008a82a4;
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
                    /* try { // try from 008a8024 to 008a802f has its CatchHandler @ 008a826c */
        folly::dynamic::dynamic(local_d0,(dynamic *)(plVar4 + 8));
        local_a0 = 0;
                    /* try { // try from 008a8034 to 008a804b has its CatchHandler @ 008a8270 */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (this,param_3,uVar1,pcVar9,local_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 008a805c to 008a8067 has its CatchHandler @ 008a8260 */
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
LAB_008a82a4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008a82a8  FUN_008a82a8 =====

void FUN_008a82a8(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 008a82b0  FUN_008a82b0 =====

void FUN_008a82b0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 008a82b8  FUN_008a82b8 =====

void FUN_008a82b8(undefined8 *param_1,long param_2,long param_3)

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
                    /* try { // try from 008a82fc to 008a8303 has its CatchHandler @ 008a8504 */
  plVar6 = (long *)operator_new(0x68);
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&PTR_FUN_00992a08;
                    /* try { // try from 008a831c to 008a8327 has its CatchHandler @ 008a84ec */
  local_78 = FUN_008707fc(plVar6 + 3,&local_58,param_2 + 8);
  local_70 = plVar6;
  if ((local_50 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,local_50 + 1), lVar7 == 0)) {
    (**(code **)(*local_50 + 0x10))(local_50);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 008a835c to 008a8363 has its CatchHandler @ 008a84dc */
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
                    /* try { // try from 008a83b0 to 008a83c7 has its CatchHandler @ 008a84ac */
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
                    /* try { // try from 008a841c to 008a8427 has its CatchHandler @ 008a848c */
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


// ===== 008a852c  FUN_008a852c =====

void FUN_008a852c(void)

{
  return;
}


// ===== 008a8530  FUN_008a8530 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_008a8530(long param_1)

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
  FUN_0078917c(param_1,PTR_VTT_0099f180 + 8);
  return;
}


// ===== 008a86c4  FUN_008a86c4 =====

void FUN_008a86c4(long param_1)

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


// ===== 008a8714  FUN_008a8714 =====

void FUN_008a8714(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00999760;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008a8724  FUN_008a8724 =====

void FUN_008a8724(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00999760;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008a8754  FUN_008a8754 =====

void FUN_008a8754(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x008a875c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 008a8760  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008a8764  FUN_008a8764 =====

void FUN_008a8764(long *param_1)

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


// ===== 008a8824  FUN_008a8824 =====

void FUN_008a8824(long param_1)

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


// ===== 008a888c  FUN_008a888c =====

bool FUN_008a888c(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 008a88a4  FUN_008a88a4 =====

bool FUN_008a88a4(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 008a88bc  FUN_008a88bc =====

void FUN_008a88bc(long param_1)

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


// ===== 008a890c  FUN_008a890c =====

void FUN_008a890c(void)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x990);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_00999878;
  memset(__s,0,0x978);
                    /* try { // try from 008a8948 to 008a895b has its CatchHandler @ 008a8a84 */
  FUN_00788b10(__s,PTR_VTT_0099f180 + 0x10);
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
  puVar1 = PTR_vtable_0099f178;
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
  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_23RNSVGGroupComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_15RNSVGGroupPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec38
  ;
  puVar2[0x11b] = 0;
  puVar2[0x11a] = 0;
  *(undefined8 **)puVar1 = __s;
  *(undefined8 **)(puVar1 + 8) = puVar2;
  return;
}


// ===== 008a8aa0  FUN_008a8aa0 =====

void FUN_008a8aa0(long param_1)

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


// ===== 008a8af0  FUN_008a8af0 =====

void FUN_008a8af0(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00999878;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008a8b00  FUN_008a8b00 =====

void FUN_008a8b00(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00999878;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008a8b30  FUN_008a8b30 =====

void FUN_008a8b30(long param_1)

{
  FUN_008a8530(param_1 + 0x18);
  return;
}


// ===== 008a8b38  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008a8b3c  FUN_008a8b3c =====

void FUN_008a8b3c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009998c8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008a8b4c  FUN_008a8b4c =====

void FUN_008a8b4c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_009998c8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008a8b7c  FUN_008a8b7c =====

void FUN_008a8b7c(long param_1)

{
  FUN_008a8530(param_1 + 0x18);
  return;
}


// ===== 008a8b84  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008a8b88  facebook::react::concreteComponentDescriptorConstructor<facebook::react::RNSVGImageComponentDescriptor> =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::__ndk1::unique_ptr<facebook::react::ComponentDescriptor const,
   std::__ndk1::default_delete<facebook::react::ComponentDescriptor const> >
   facebook::react::concreteComponentDescriptorConstructor<facebook::react::RNSVGImageComponentDescriptor>(facebook::react::ComponentDescriptorParameters
   const&) */

void __thiscall
facebook::react::
concreteComponentDescriptorConstructor<facebook::react::RNSVGImageComponentDescriptor>
          (react *this,ComponentDescriptorParameters *param_1)

{
  byte bVar1;
  long lVar2;
  void *pvVar3;
  ComponentDescriptor *this_00;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *in_x8;
  long *plVar6;
  void *pvVar7;
  undefined4 local_16e0 [2];
  undefined8 *local_16d8;
  void *local_16d0;
  void *pvStack_16c8;
  undefined8 local_16c0;
  void *pvStack_16b8;
  void *local_16b0;
  undefined8 uStack_16a8;
  void *local_16a0;
  void *pvStack_1698;
  undefined8 uStack_1690;
  undefined8 uStack_1688;
  undefined *local_1680;
  undefined8 uStack_1678;
  undefined8 local_1670;
  undefined8 uStack_1668;
  undefined4 local_1660 [2];
  undefined8 local_1658;
  undefined8 uStack_1650;
  undefined8 local_1648;
  undefined8 uStack_1640;
  undefined4 local_1638;
  undefined4 local_1630;
  undefined1 local_162c;
  undefined8 local_162b;
  undefined8 local_1623;
  undefined8 uStack_161b;
  undefined8 local_1613;
  undefined8 uStack_160b;
  undefined8 local_1603;
  undefined8 uStack_15fb;
  undefined8 local_15f3;
  undefined6 uStack_15eb;
  undefined2 uStack_15e5;
  undefined6 uStack_15e3;
  undefined8 uStack_15dd;
  undefined4 local_15d5;
  undefined8 local_15d1;
  undefined1 local_15c9;
  undefined1 uStack_15c8;
  undefined7 uStack_15c7;
  undefined8 uStack_15c0;
  undefined8 uStack_15b8;
  undefined8 uStack_15b0;
  undefined8 local_15a8;
  undefined8 uStack_15a0;
  undefined8 local_1598;
  undefined8 uStack_1590;
  undefined8 local_1588;
  undefined8 uStack_1580;
  undefined8 local_1578;
  undefined8 uStack_1570;
  undefined8 uStack_1568;
  undefined8 local_1560;
  undefined8 local_1558;
  undefined8 uStack_1550;
  undefined8 local_1548;
  undefined4 uStack_1540;
  undefined4 uStack_153c;
  undefined4 uStack_1538;
  undefined4 uStack_1534;
  undefined4 uStack_1530;
  undefined4 uStack_152c;
  undefined8 local_1528;
  undefined8 uStack_1520;
  undefined4 local_1518;
  undefined1 local_1514;
  undefined4 local_1510;
  undefined1 local_150c;
  undefined4 local_1508;
  undefined1 local_1504;
  undefined4 local_1500;
  undefined1 local_14fc;
  undefined4 local_14f8;
  undefined1 local_14f4;
  undefined4 local_14f0;
  undefined1 local_14ec;
  undefined4 local_14e8;
  undefined1 local_14e4;
  undefined4 local_14e0;
  undefined1 local_14dc;
  undefined4 local_14d8;
  undefined1 local_14d4;
  undefined4 local_14d0;
  undefined1 local_14cc;
  undefined4 local_14c8;
  undefined1 local_14c4;
  undefined4 local_14c0;
  undefined1 local_14bc;
  undefined4 local_14b8;
  undefined1 local_14b4;
  undefined4 local_14b0;
  undefined1 local_14ac;
  undefined4 local_14a8;
  undefined1 local_14a4;
  undefined4 local_14a0;
  undefined1 local_149c;
  undefined1 local_1498;
  undefined1 local_1494;
  undefined1 local_1488;
  undefined8 local_1480;
  undefined8 uStack_1478;
  undefined8 uStack_1470;
  undefined8 uStack_1468;
  undefined8 local_1460;
  undefined8 uStack_1458;
  undefined8 uStack_1450;
  undefined1 uStack_1448;
  undefined7 local_1447;
  undefined1 uStack_1440;
  undefined8 uStack_143f;
  undefined8 local_1434;
  undefined8 uStack_142c;
  undefined8 uStack_1424;
  undefined8 uStack_141c;
  undefined8 local_1414;
  undefined8 uStack_140c;
  undefined8 uStack_1404;
  undefined8 uStack_13fc;
  undefined8 local_13f4;
  undefined8 uStack_13ec;
  undefined8 uStack_13e4;
  undefined5 uStack_13dc;
  undefined3 local_13d7;
  undefined5 uStack_13d4;
  undefined1 local_13cc;
  undefined1 local_13c8;
  undefined1 local_13c4;
  undefined1 local_13c0;
  undefined1 local_13bc;
  undefined1 local_13b8;
  undefined1 local_13a0;
  undefined8 local_1398;
  undefined8 uStack_1390;
  undefined8 local_1388;
  undefined4 local_1380;
  undefined1 local_137c;
  undefined4 local_137b;
  undefined1 local_1377;
  undefined1 local_1376;
  undefined8 local_1370;
  undefined8 uStack_1368;
  undefined8 uStack_1360;
  undefined8 uStack_1358;
  undefined8 local_1350;
  undefined7 uStack_1348;
  undefined4 uStack_1341;
  undefined8 local_133c;
  undefined1 local_1334;
  undefined1 local_132c;
  undefined1 local_1328;
  undefined1 local_1320;
  undefined1 local_131c;
  undefined1 local_1314;
  undefined1 local_1310;
  undefined1 local_1308;
  undefined1 local_1304;
  undefined1 local_12fc;
  undefined1 local_12f8;
  undefined1 local_12f0;
  undefined1 local_12ec;
  undefined1 local_12e4;
  undefined1 local_12e0;
  undefined1 local_12d8;
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
  undefined1 local_1294;
  undefined1 local_1290;
  undefined1 local_128c;
  undefined1 local_1288;
  undefined1 local_1284;
  undefined1 local_1280;
  undefined1 local_127c;
  undefined1 local_1278;
  undefined1 local_1274;
  undefined1 local_1270;
  undefined1 local_126c;
  undefined1 local_1268;
  undefined1 local_1264;
  undefined1 local_1260;
  undefined1 local_125c;
  undefined1 local_1258;
  undefined1 local_1254;
  undefined1 local_1250;
  undefined1 local_124c;
  undefined1 local_1248;
  undefined1 local_1244;
  undefined1 local_1240;
  undefined1 local_123c;
  undefined8 local_1238;
  undefined8 uStack_1230;
  undefined8 local_1228;
  undefined8 uStack_1220;
  undefined8 uStack_1218;
  undefined8 uStack_1210;
  undefined2 local_1208;
  undefined8 local_1204;
  undefined1 local_11fc;
  undefined8 local_11f8;
  undefined8 local_11f0;
  undefined8 uStack_11e8;
  undefined1 local_11e0;
  undefined8 local_11d8;
  undefined8 uStack_11d0;
  undefined8 uStack_11c8;
  undefined8 uStack_11c0;
  undefined8 local_11b8;
  undefined8 uStack_11b0;
  undefined8 uStack_11a8;
  undefined8 uStack_11a0;
  undefined8 local_1198;
  undefined8 uStack_1190;
  undefined8 uStack_1188;
  undefined8 uStack_1180;
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
  undefined8 local_1128;
  undefined8 uStack_1120;
  undefined8 local_1118;
  undefined8 uStack_1110;
  undefined8 local_1108;
  undefined8 uStack_1100;
  undefined8 local_10f8;
  undefined8 uStack_10f0;
  undefined8 local_10e8;
  undefined6 uStack_10e0;
  undefined2 uStack_10da;
  undefined6 uStack_10d8;
  undefined1 local_10d0;
  undefined1 local_10cc;
  undefined1 local_10c8;
  undefined8 local_10c4;
  undefined8 uStack_10bc;
  undefined1 local_10b4;
  undefined8 local_10b0;
  undefined2 local_10a8;
  undefined1 local_10a6;
  undefined4 local_10a4;
  undefined1 local_10a0;
  undefined1 local_1040;
  undefined1 local_1038;
  undefined1 local_fd8;
  undefined4 local_fd0;
  undefined2 local_fcc;
  undefined1 local_fc8;
  undefined1 local_fc4;
  undefined1 local_fc0;
  undefined1 local_fbc;
  undefined1 local_fb8;
  undefined1 local_fb4;
  undefined1 local_fb0;
  undefined1 local_fac;
  undefined1 local_fa8;
  undefined1 local_fa4;
  undefined8 local_fa0;
  undefined8 uStack_f98;
  undefined8 local_f90;
  undefined4 local_f88;
  undefined8 local_f80;
  undefined8 uStack_f78;
  undefined8 local_f70;
  undefined8 uStack_f68;
  undefined8 local_f60;
  undefined8 uStack_f58;
  undefined8 local_f50;
  undefined8 uStack_f48;
  undefined8 local_f40;
  undefined8 uStack_f38;
  undefined8 local_f30;
  undefined8 uStack_f28;
  undefined8 local_f20;
  undefined8 uStack_f18;
  undefined8 local_f10;
  undefined8 uStack_f08;
  undefined8 local_f00;
  undefined5 uStack_ef8;
  undefined3 uStack_ef3;
  undefined5 uStack_ef0;
  undefined8 local_ee8;
  undefined8 uStack_ee0;
  undefined8 local_ed8;
  undefined8 uStack_ed0;
  undefined8 uStack_ec8;
  undefined8 uStack_ec0;
  undefined4 local_eb8;
  undefined4 local_eb0;
  undefined8 local_ea8;
  undefined8 local_e80;
  undefined4 local_e78;
  undefined8 local_e70;
  undefined4 local_e48;
  undefined4 local_e40;
  undefined8 local_e38;
  undefined8 local_e10;
  undefined4 local_e08;
  undefined8 local_e00;
  undefined8 local_dd8;
  undefined4 local_dd0;
  undefined8 local_dc8;
  undefined8 uStack_dc0;
  undefined8 uStack_db8;
  undefined8 uStack_db0;
  undefined8 local_da8;
  undefined8 uStack_da0;
  undefined4 local_d98;
  undefined8 local_d90;
  undefined4 local_d68;
  undefined8 local_d60;
  undefined4 local_d38;
  undefined8 local_d30;
  undefined4 local_d08;
  undefined8 local_d00;
  undefined4 local_cd8;
  undefined8 local_cd0;
  undefined8 local_cc8;
  undefined8 local_cc0;
  undefined1 local_cb8;
  undefined8 local_cb0;
  undefined8 local_ca8;
  undefined8 local_ca0;
  undefined8 local_c98;
  undefined4 local_c90;
  undefined8 local_c88;
  undefined8 uStack_c80;
  undefined8 uStack_c78;
  undefined8 uStack_c70;
  undefined8 local_c68;
  undefined8 uStack_c60;
  undefined4 local_c58;
  undefined8 local_c50;
  undefined8 uStack_c48;
  undefined8 local_c40;
  undefined8 uStack_c38;
  undefined8 local_c30;
  undefined8 uStack_c28;
  undefined4 local_c20;
  undefined4 local_c18 [2];
  undefined8 local_c10;
  undefined8 uStack_c08;
  undefined8 local_c00;
  undefined8 local_bf8;
  undefined8 uStack_bf0;
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
  this_00 = (ComponentDescriptor *)operator_new(0x98);
  pvStack_16b8 = (void *)0x0;
  local_16c0 = 0;
  uStack_16a8 = 0;
  local_16b0 = (void *)0x0;
  pvStack_1698 = (void *)0x0;
  local_16a0 = (void *)0x0;
  uStack_1688 = 0;
  uStack_1690 = 0;
  pvStack_16c8 = (void *)0x0;
  local_16d0 = (void *)0x0;
                    /* try { // try from 008a8bdc to 008a8be7 has its CatchHandler @ 008a9384 */
  ::facebook::react::ComponentDescriptor::ComponentDescriptor
            (this_00,(ComponentDescriptorParameters *)this,(RawPropsParser *)&local_16d0);
  local_f8 = 0;
  *(undefined ***)this_00 = &PTR_FUN_009999c0;
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
                    /* try { // try from 008a8c58 to 008a8c6b has its CatchHandler @ 008a93b4 */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1b0);
  local_100 = CONCAT44(local_100._4_4_,0x3f800000);
  local_16e0[0] = 0xffffffff;
  uStack_108 = 0;
  local_110 = (void *)0x0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_16d8 = &local_1b0;
  ::facebook::react::RawProps::facebook::react::RawProps::parse(&local_f8,this_00 + 0x38);
  memset(local_1660,0,0xa48);
  local_c18[0] = 5;
  local_c00 = 0;
  local_1680 = *(undefined **)(PTR_VTT_0099f198 + 0x20);
  local_1660[0] = 5;
  uStack_1668 = 0;
  local_1670 = 0;
  local_bf8 = 0;
  uStack_1678 = 0;
  uStack_bf0 = 0x3f800000;
  uStack_c08 = 0;
  local_c10 = 0;
  uStack_1650 = 0;
  local_1658 = 0;
  uStack_1640 = 0;
  local_1648 = 0;
  local_1638 = 0x3f800000;
  folly::dynamic::folly::dynamic::destroy(local_c18);
  local_1630 = 0x10410710;
  local_162c = 0;
  uStack_1540 = 0;
  local_1548 = 0;
  uStack_152c = 0;
  uStack_1550 = 0;
  local_1558 = 0;
  uStack_15c7 = 0;
  uStack_161b = 0;
  local_1623 = 0;
  local_162b = _s__00375408;
  uStack_160b = 0;
  local_1613 = 0;
  uStack_11e8 = _UNK_00371598;
  local_11f0 = _DAT_00371590;
  uStack_15fb = 0;
  local_1603 = 0;
  uStack_15eb = 0;
  local_15f3 = 0;
  uStack_10f0 = _UNK_00488920;
  local_10f8 = _DAT_00488918;
  uStack_1100 = _UNK_00488910;
  local_1108 = _DAT_00488908;
  local_15d5 = 0x40004;
  uStack_1534 = 0;
  uStack_1530 = 0;
  uStack_153c = 0;
  uStack_1538 = 0;
  uStack_1520 = 0;
  local_1528 = 0;
  local_1518 = 0x7fc00000;
  local_1510 = 0x7fc00000;
  local_1508 = 0x7fc00000;
  local_1500 = 0x7fc00000;
  local_14f8 = 0x7fc00000;
  local_14f0 = 0x7fc00000;
  local_14e8 = 0x7fc00000;
  local_14e0 = 0x7fc00000;
  local_14d8 = 0x7fc00000;
  local_14d0 = 0x7fc00000;
  local_14c8 = 0x7fc00000;
  local_14c0 = 0x7fc00000;
  local_14b8 = 0x7fc00000;
  local_14b0 = 0x7fc00000;
  local_14a8 = 0x7fc00000;
  local_14a0 = 0x7fc00000;
  uStack_143f = 0;
  uStack_1440 = 0;
  uStack_142c = 0;
  local_1434 = 0;
  uStack_141c = 0;
  uStack_1424 = 0;
  uStack_140c = 0;
  local_1414 = 0;
  uStack_13fc = 0;
  uStack_1404 = 0;
  uStack_13ec = 0;
  local_13f4 = 0;
  uStack_13dc = 0;
  uStack_13e4 = 0;
  local_13d7 = 0;
  uStack_13d4 = 0;
  local_137c = 1;
  local_137b = 0;
  local_1376 = 0x23;
  local_133c = 0x3f800000;
  uStack_1220 = 0;
  local_1228 = 0;
  uStack_1210 = 0;
  uStack_1218 = 0;
  uStack_1230 = 0;
  local_1238 = 0;
  uStack_1110 = _UNK_00488900;
  local_1118 = _DAT_004888f8;
  local_1204 = 0;
  uStack_1120 = _UNK_004888f0;
  local_1128 = _DAT_004888e8;
  uStack_11d0 = 0;
  local_11d8 = 0;
  uStack_11c0 = 0;
  uStack_11c8 = 0;
  uStack_11b0 = 0;
  local_11b8 = 0;
  uStack_11a0 = 0;
  uStack_11a8 = 0;
  uStack_1190 = 0;
  local_1198 = 0;
  uStack_1180 = 0;
  uStack_1188 = 0;
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
  uStack_10d8 = 0;
  uStack_10e0 = 0;
  uStack_10da = 0;
  local_10e8 = 0;
  uStack_15dd = 0;
  uStack_15e5 = 0;
  uStack_15e3 = 0;
  local_15d1 = 0;
  local_15c9 = 0;
  uStack_15c8 = 0;
  uStack_15b8 = 0;
  uStack_15c0 = 0;
  local_15a8 = 0;
  uStack_15b0 = 0;
  local_1598 = 0;
  uStack_15a0 = 0;
  local_1588 = 0;
  uStack_1590 = 0;
  local_1578 = 0;
  uStack_1580 = 0;
  uStack_1568 = 0;
  uStack_1570 = 0;
  local_1560 = 0;
  local_1514 = 0;
  local_150c = 0;
  local_1504 = 0;
  local_14fc = 0;
  local_14f4 = 0;
  local_14ec = 0;
  local_14e4 = 0;
  local_14dc = 0;
  local_14d4 = 0;
  local_14cc = 0;
  local_14c4 = 0;
  local_14bc = 0;
  local_14b4 = 0;
  local_14ac = 0;
  local_14a4 = 0;
  local_149c = 0;
  local_1498 = 0;
  local_1494 = 0;
  local_1488 = 0;
  local_13cc = 0;
  local_13c8 = 0;
  local_13c4 = 0;
  local_13c0 = 0;
  local_13bc = 0;
  local_13b8 = 0;
  local_13a0 = 0;
  uStack_1478 = 0;
  local_1480 = 0;
  uStack_1468 = 0;
  uStack_1470 = 0;
  uStack_1458 = 0;
  local_1460 = 0;
  uStack_1448 = 0;
  local_1447 = 0;
  uStack_1450 = 0;
  uStack_1390 = 0;
  local_1398 = 0;
  local_1388 = 0;
  local_1380 = 0;
  local_1377 = 0;
  uStack_1368 = 0;
  local_1370 = 0;
  uStack_1358 = 0;
  uStack_1360 = 0;
  uStack_1348 = 0;
  uStack_1341 = 0;
  local_1350 = 0;
  local_1334 = 0;
  local_132c = 0;
  local_1328 = 0;
  local_1320 = 0;
  local_131c = 0;
  local_1314 = 0;
  local_1310 = 0;
  local_1308 = 0;
  local_1304 = 0;
  local_12fc = 0;
  local_12f8 = 0;
  local_12f0 = 0;
  local_12ec = 0;
  local_12e4 = 0;
  local_12e0 = 0;
  local_12d8 = 0;
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
  local_1294 = 0;
  local_1290 = 0;
  local_128c = 0;
  local_1288 = 0;
  local_1284 = 0;
  local_1280 = 0;
  local_127c = 0;
  local_1278 = 0;
  local_1274 = 0;
  local_1270 = 0;
  local_126c = 0;
  local_1268 = 0;
  local_1264 = 0;
  local_1260 = 0;
  local_125c = 0;
  local_1258 = 0;
  local_1254 = 0;
  local_1250 = 0;
  local_124c = 0;
  local_1248 = 0;
  local_1244 = 0;
  local_1240 = 0;
  local_123c = 0;
  local_11f8 = 0;
  local_1208 = 0;
  local_11fc = 0;
  local_11e0 = 0;
  local_10d0 = 0;
  local_10cc = 0;
  local_10c8 = 0;
  local_10b0 = 0;
  uStack_10bc = 0;
  local_10c4 = 0;
  local_10b4 = 0;
  local_10a8 = 0x101;
  local_10a6 = 0;
  local_10a4 = 0;
  local_10a0 = 0;
  local_1040 = 0;
  local_1038 = 0;
  local_fd8 = 0;
  local_fc8 = 0;
  local_fc4 = 0;
  local_fc0 = 0;
  local_fbc = 0;
  local_fb8 = 0;
  local_fb4 = 0;
  local_fb0 = 0;
  local_fac = 0;
  local_fa8 = 0;
  local_fa4 = 0;
  local_e10 = 0;
  local_fcc = 0;
  local_1680 = PTR_vtable_0099f190 + 0x20;
  local_fd0 = 0;
  uStack_ef0 = 0;
  uStack_ed0 = 0;
  local_ed8 = 0;
  uStack_ec0 = 0;
  uStack_ec8 = 0;
  uStack_ee0 = 0;
  local_ee8 = 0;
  local_f90 = 0;
  local_e80 = 0x13f800000;
  uStack_dc0 = 0;
  local_dc8 = 0;
  uStack_db0 = 0;
  uStack_db8 = 0;
  uStack_da0 = 0;
  local_da8 = 0;
  uStack_f98 = 0;
  local_fa0 = 0;
  local_f88 = 0x3f800000;
  local_eb0 = 0;
  local_ea8 = 0;
  uStack_f78 = 0;
  local_f80 = 0;
  uStack_f68 = 0;
  local_f70 = 0;
  uStack_f58 = 0;
  local_f60 = 0;
  uStack_f48 = 0;
  local_f50 = 0;
  uStack_f38 = 0;
  local_f40 = 0;
  uStack_f28 = 0;
  local_f30 = 0;
  uStack_f18 = 0;
  local_f20 = 0;
  uStack_f08 = 0;
  local_f10 = 0;
  uStack_ef8 = 0;
  uStack_ef3 = 0;
  local_f00 = 0;
  local_eb8 = 0;
  local_e78 = 0;
  local_e70 = 0;
  local_e48 = 0x3f800000;
  local_e40 = 0;
  local_e38 = 0;
  local_e08 = 0;
  local_e00 = 0;
  local_dd8 = 0;
  local_dd0 = 0;
  local_d90 = 0;
  local_d68 = 0;
  local_d60 = 0;
  local_d38 = 0;
  local_d30 = 0;
  local_d08 = 0;
  local_d00 = 0;
  local_cd8 = 0;
  local_ca8 = 0;
  local_cb0 = 0;
  local_ca0 = 0;
  local_d98 = 0;
  local_cc0 = 0;
  local_cd0 = 0;
  local_cc8 = 0;
  local_cb8 = 0;
  local_c98 = _s__003752b8;
  local_c90 = 0;
  uStack_c80 = 0;
  local_c88 = 0;
  uStack_c70 = 0;
  uStack_c78 = 0;
  uStack_c60 = 0;
  local_c68 = 0;
  local_c58 = 0;
  local_c20 = 0;
  uStack_c28 = 0;
  local_c30 = 0;
  uStack_c38 = 0;
  local_c40 = 0;
  uStack_c48 = 0;
  local_c50 = 0;
                    /* try { // try from 008a9160 to 008a9173 has its CatchHandler @ 008a93b4 */
  ::facebook::react::RNSVGImageProps::RNSVGImageProps
            ((RNSVGImageProps *)local_c18,(PropsParserContext *)local_16e0,
             (RNSVGImageProps *)&local_1680,(RawProps *)&local_f8);
  FUN_008aa924(local_c18);
  FUN_008aa924(&local_1680);
  ::facebook::react::RawPropsParser::facebook::react::RawPropsParser::postPrepare(this_00 + 0x38);
  pvVar3 = local_120;
  puVar5 = (undefined8 *)local_110;
  while (puVar5 != (undefined8 *)0x0) {
    plVar6 = (long *)puVar5[6];
    pvVar7 = (void *)*puVar5;
    local_120 = pvVar3;
    if ((plVar6 == (long *)0x0) || (lVar4 = FUN_00757990(0xffffffffffffffff,plVar6 + 1), lVar4 != 0)
       ) {
      bVar1 = *(byte *)(puVar5 + 2);
    }
    else {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__ndk1::__shared_weak_count::__release_weak();
      bVar1 = *(byte *)(puVar5 + 2);
    }
    if ((bVar1 & 1) != 0) {
      operator_delete((void *)puVar5[4]);
    }
    operator_delete(puVar5);
    pvVar3 = local_120;
    puVar5 = (undefined8 *)pvVar7;
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
                    /* try { // try from 008a9278 to 008a9283 has its CatchHandler @ 008a93b8 */
        (*(code *)(&PTR_FUN_0098f088)[*(uint *)((long)pvVar3 + -8)])
                  (&local_1680,(void *)((long)pvVar3 + -0x38));
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
  ::facebook::jsi::Value::~Value((Value *)local_e0);
  if (local_16a0 != (void *)0x0) {
    pvStack_1698 = local_16a0;
    operator_delete(local_16a0);
  }
  if (pvStack_16b8 != (void *)0x0) {
    local_16b0 = pvStack_16b8;
    operator_delete(pvStack_16b8);
  }
  if (local_16d0 != (void *)0x0) {
    pvStack_16c8 = local_16d0;
    operator_delete(local_16d0);
  }
  *(undefined ***)this_00 = &PTR_FUN_00999918;
                    /* try { // try from 008a92f4 to 008a92fb has its CatchHandler @ 008a9374 */
  puVar5 = (undefined8 *)operator_new(0x38);
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_00999a38;
                    /* try { // try from 008a9314 to 008a931f has its CatchHandler @ 008a935c */
  ::facebook::react::ImageManager::ImageManager((ImageManager *)(puVar5 + 3),this_00 + 0x18);
  *(ImageManager **)(this_00 + 0x88) = (ImageManager *)(puVar5 + 3);
  *(undefined8 **)(this_00 + 0x90) = puVar5;
  *in_x8 = this_00;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008a93bc  FUN_008a93bc =====

void FUN_008a93bc(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x90);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  FUN_007bae18(param_1);
  return;
}


// ===== 008a940c  FUN_008a940c =====

void FUN_008a940c(void *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)((long)param_1 + 0x90);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  FUN_007bae18(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008a9464  FUN_008a9464 =====

undefined * FUN_008a9464(void)

{
  return PTR_RNSVGImageComponentName_0099f188;
}


// ===== 008a9470  FUN_008a9470 =====

undefined * FUN_008a9470(void)

{
  return PTR_RNSVGImageComponentName_0099f188;
}


// ===== 008a947c  FUN_008a947c =====

undefined8 FUN_008a947c(void)

{
  return 0x69;
}


// ===== 008a9484  FUN_008a9484 =====

void FUN_008a9484(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  YogaLayoutableShadowNode *pYVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  long lVar7;
  undefined *puVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  
  lVar7 = tpidr_el0;
  lVar11 = *(long *)(lVar7 + 0x28);
  uVar9 = (**(code **)(*param_2 + 0x20))();
  puVar10 = (undefined8 *)operator_new(0x410);
  pYVar1 = (YogaLayoutableShadowNode *)(puVar10 + 3);
  puVar10[1] = 0;
  puVar10[2] = 0;
  *puVar10 = &PTR_FUN_00999a88;
                    /* try { // try from 008a94f0 to 008a94ff has its CatchHandler @ 008a95f0 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4,uVar9);
  lVar12 = puVar10[4];
  puVar10[3] = &PTR_FUN_00999ad8;
  uVar3 = *(uint *)((long)puVar10 + 0x6c);
  uVar2 = uVar3 & 3 | (uint)((*(byte *)(lVar12 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)puVar10 + 0x6c) = uVar3 & 0xfffffff8 | uVar2;
  if ((*(uint *)(lVar12 + 0x50) & 0x30000000) == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    if (*(char *)(lVar12 + 0x5b4) != '\0') {
      uVar9 = *(undefined4 *)(lVar12 + 0x5b0);
    }
  }
  *(undefined4 *)(puVar10 + 10) = uVar9;
  puVar8 = PTR_vtable_0099f1a0;
  cVar4 = *(char *)(lVar12 + 0x6b0);
  cVar5 = *(char *)(lVar12 + 0x6b1);
  cVar6 = *(char *)(lVar12 + 0x1e8);
  puVar10[0x81] = 0;
  puVar10[0x80] = 0;
  lVar12 = *param_2;
  puVar10[3] = puVar8 + 0x10;
  *(uint *)((long)puVar10 + 0x6c) =
       uVar3 & 0xfffff000 |
       uVar3 & 0x7f8 | uVar2 | (uint)((cVar4 != '\0' || cVar5 != '\0') || cVar6 != '\0') << 0xb;
                    /* try { // try from 008a95a4 to 008a95af has its CatchHandler @ 008a95e0 */
  (**(code **)(lVar12 + 0x60))(param_2,pYVar1);
  *param_1 = pYVar1;
  param_1[1] = puVar10;
  if (*(long *)(lVar7 + 0x28) != lVar11) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 008a9620  FUN_008a9620 =====

void FUN_008a9620(undefined8 *param_1,long *param_2,ShadowNode *param_3,ShadowNodeFragment *param_4)

{
  YogaLayoutableShadowNode *pYVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  long lVar7;
  undefined *puVar8;
  long *plVar9;
  long lVar10;
  undefined4 uVar11;
  YogaLayoutableShadowNode *local_78;
  long *local_70;
  YogaLayoutableShadowNode *local_68;
  long *local_60;
  long local_58;
  
  lVar7 = tpidr_el0;
  local_58 = *(long *)(lVar7 + 0x28);
  plVar9 = (long *)operator_new(0x410);
  pYVar1 = (YogaLayoutableShadowNode *)(plVar9 + 3);
  plVar9[1] = 0;
  plVar9[2] = 0;
  *plVar9 = (long)&PTR_FUN_00999a88;
                    /* try { // try from 008a9678 to 008a9687 has its CatchHandler @ 008a97e0 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4);
  lVar10 = plVar9[4];
  plVar9[3] = (long)&PTR_FUN_00999ad8;
  uVar3 = *(uint *)((long)plVar9 + 0x6c);
  uVar2 = uVar3 & 3 | (uint)((*(byte *)(lVar10 + 0x54) & 0xc) == 4) << 2;
  *(uint *)((long)plVar9 + 0x6c) = uVar3 & 0xfffffff8 | uVar2;
  if ((*(uint *)(lVar10 + 0x50) & 0x30000000) == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = 0;
    if (*(char *)(lVar10 + 0x5b4) != '\0') {
      uVar11 = *(undefined4 *)(lVar10 + 0x5b0);
    }
  }
  *(undefined4 *)(plVar9 + 10) = uVar11;
  puVar8 = PTR_vtable_0099f1a0;
  cVar4 = *(char *)(lVar10 + 0x6b0);
  cVar5 = *(char *)(lVar10 + 0x6b1);
  cVar6 = *(char *)(lVar10 + 0x1e8);
  plVar9[0x81] = 0;
  plVar9[0x80] = 0;
  plVar9[3] = (long)(puVar8 + 0x10);
  *(uint *)((long)plVar9 + 0x6c) =
       uVar3 & 0xfffff000 |
       uVar3 & 0x7f8 | uVar2 | (uint)((cVar4 != '\0' || cVar5 != '\0') || cVar6 != '\0') << 0xb;
  local_68 = pYVar1;
  local_60 = plVar9;
                    /* try { // try from 008a9724 to 008a9733 has its CatchHandler @ 008a97f8 */
  facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::
  completeClone(pYVar1,param_3,param_4);
  local_78 = pYVar1;
  local_70 = plVar9;
  FUN_00757d00(1,plVar9 + 1);
                    /* try { // try from 008a9744 to 008a9753 has its CatchHandler @ 008a97d0 */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_78);
  plVar9 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar10 = FUN_00757990(0xffffffffffffffff,local_70 + 1), lVar10 == 0)) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pYVar1 = local_68;
                    /* try { // try from 008a9790 to 008a979b has its CatchHandler @ 008a97f8 */
  (**(code **)(*param_2 + 0x60))(param_2,local_68);
  *param_1 = pYVar1;
  param_1[1] = local_60;
  if (*(long *)(lVar7 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 008a9820  FUN_008a9820 =====

void FUN_008a9820(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::appendChild
            (*param_2,param_3);
  return;
}


// ===== 008a982c  FUN_008a982c =====

void FUN_008a982c(undefined8 *param_1,long param_2,PropsParserContext *param_3,long *param_4,
                 RawProps *param_5)

{
  RNSVGImageProps *this;
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
  RNSVGImageProps *pRVar12;
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
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_23RNSVGImageComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_15RNSVGImagePropsENS0_22RNSVGImageEventEmitterENS0_15RNSVGImageStateEE18defaultSharedPropsEvE18defaultSharedProps_0099ec50
         & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_23RNSVGImageComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_15RNSVGImagePropsENS0_22RNSVGImageEventEmitterENS0_15RNSVGImageStateEE18defaultSharedPropsEvE18defaultSharedProps_0099ec50
                                   ), iVar6 != 0)) {
                    /* try { // try from 008a9c60 to 008a9c63 has its CatchHandler @ 008a9c90 */
      FUN_008aae4c();
      __cxa_atexit(FUN_008ab030,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_23RNSVGImageComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_15RNSVGImagePropsENS0_22RNSVGImageEventEmitterENS0_15RNSVGImageStateEE18defaultSharedPropsEvE18defaultSharedProps_0099ec48
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_23RNSVGImageComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_15RNSVGImagePropsENS0_22RNSVGImageEventEmitterENS0_15RNSVGImageStateEE18defaultSharedPropsEvE18defaultSharedProps_0099ec50
                         );
    }
    lVar11 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_23RNSVGImageComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_15RNSVGImagePropsENS0_22RNSVGImageEventEmitterENS0_15RNSVGImageStateEE18defaultSharedPropsEvE18defaultSharedProps_0099ec48
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_23RNSVGImageComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_15RNSVGImagePropsENS0_22RNSVGImageEventEmitterENS0_15RNSVGImageStateEE18defaultSharedPropsEvE18defaultSharedProps_0099ec48
    ;
    param_1[1] = lVar11;
    if (lVar11 != 0) {
      FUN_00757d00(1,lVar11 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    pRVar12 = (RNSVGImageProps *)*param_4;
    if (pRVar12 == (RNSVGImageProps *)0x0) {
      if (((*
            PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_23RNSVGImageComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_15RNSVGImagePropsENS0_22RNSVGImageEventEmitterENS0_15RNSVGImageStateEE18defaultSharedPropsEvE18defaultSharedProps_0099ec50
           & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_23RNSVGImageComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_15RNSVGImagePropsENS0_22RNSVGImageEventEmitterENS0_15RNSVGImageStateEE18defaultSharedPropsEvE18defaultSharedProps_0099ec50
                                     ), iVar6 != 0)) {
                    /* try { // try from 008a9be0 to 008a9be3 has its CatchHandler @ 008a9ca8 */
        FUN_008aae4c();
        __cxa_atexit(FUN_008ab030,
                     PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_23RNSVGImageComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_15RNSVGImagePropsENS0_22RNSVGImageEventEmitterENS0_15RNSVGImageStateEE18defaultSharedPropsEvE18defaultSharedProps_0099ec48
                     ,&PTR_LOOP_008d5d30);
        __cxa_guard_release(
                           PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_23RNSVGImageComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_15RNSVGImagePropsENS0_22RNSVGImageEventEmitterENS0_15RNSVGImageStateEE18defaultSharedPropsEvE18defaultSharedProps_0099ec50
                           );
      }
      pRVar12 = *(RNSVGImageProps **)
                 PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_23RNSVGImageComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_15RNSVGImagePropsENS0_22RNSVGImageEventEmitterENS0_15RNSVGImageStateEE18defaultSharedPropsEvE18defaultSharedProps_0099ec48
      ;
    }
    plVar8 = (long *)operator_new(0xa80);
    this = (RNSVGImageProps *)(plVar8 + 3);
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = (long)&PTR_FUN_00999bf0;
                    /* try { // try from 008a990c to 008a991f has its CatchHandler @ 008a9d1c */
    facebook::react::RNSVGImageProps::RNSVGImageProps(this,param_3,pRVar12,param_5);
                    /* try { // try from 008a9924 to 008a9937 has its CatchHandler @ 008a9d34 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if ((((uVar7 & 1) == 0) ||
        (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar7 & 1) == 0)) ||
       (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
                enablePropsUpdateReconciliationAndroid(), (uVar7 & 1) == 0)) {
LAB_008a9960:
      FUN_00757d00(1,plVar8 + 1);
      if (*param_4 == 0) {
        if (((*
              PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_23RNSVGImageComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_15RNSVGImagePropsENS0_22RNSVGImageEventEmitterENS0_15RNSVGImageStateEE18defaultSharedPropsEvE18defaultSharedProps_0099ec50
             & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(
                                       PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_23RNSVGImageComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_15RNSVGImagePropsENS0_22RNSVGImageEventEmitterENS0_15RNSVGImageStateEE18defaultSharedPropsEvE18defaultSharedProps_0099ec50
                                       ), iVar6 != 0)) {
                    /* try { // try from 008a9c20 to 008a9c23 has its CatchHandler @ 008a9c94 */
          FUN_008aae4c();
          __cxa_atexit(FUN_008ab030,
                       PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_23RNSVGImageComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_15RNSVGImagePropsENS0_22RNSVGImageEventEmitterENS0_15RNSVGImageStateEE18defaultSharedPropsEvE18defaultSharedProps_0099ec48
                       ,&PTR_LOOP_008d5d30);
          __cxa_guard_release(
                             PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_23RNSVGImageComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_15RNSVGImagePropsENS0_22RNSVGImageEventEmitterENS0_15RNSVGImageStateEE18defaultSharedPropsEvE18defaultSharedProps_0099ec50
                             );
        }
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 008a99c8 to 008a99db has its CatchHandler @ 008a9cc0 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*(undefined8 *)
                         PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_23RNSVGImageComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_15RNSVGImagePropsENS0_22RNSVGImageEventEmitterENS0_15RNSVGImageStateEE18defaultSharedPropsEvE18defaultSharedProps_0099ec48
                   ,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
LAB_008a9a14:
          (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
        }
        else if (local_b0 != (dynamic *)0x0) {
          lVar11 = 5;
          pdVar10 = local_b0;
          goto LAB_008a9a14;
        }
        if (plVar8 != (long *)0x0) goto LAB_008a9a28;
      }
      else {
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 008a997c to 008a998f has its CatchHandler @ 008a9ce8 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*param_4,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
        }
        else {
          if (local_b0 == (dynamic *)0x0) goto LAB_008a9a28;
          lVar11 = 5;
          pdVar10 = local_b0;
        }
        (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
LAB_008a9a28:
        lVar11 = FUN_00757990(0xffffffffffffffff,plVar8 + 1);
        if (lVar11 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 008a9944 to 008a994f has its CatchHandler @ 008a9cbc */
      pcVar9 = (char *)(**(code **)(*(long *)this + 0x10))(this);
      iVar6 = strcmp(PTR_RNSVGImageComponentName_0099f188,pcVar9);
      if (iVar6 != 0) goto LAB_008a9960;
      bVar3 = false;
    }
                    /* try { // try from 008a9a54 to 008a9a57 has its CatchHandler @ 008a9d34 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar7 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 008a9a64 to 008a9a7f has its CatchHandler @ 008a9ce4 */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(plVar8 + 7));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 008a9bc0 to 008a9bcf has its CatchHandler @ 008a9cdc */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_008a9d80;
      }
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (*(int *)(plVar4 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 008a9ba0 to 008a9baf has its CatchHandler @ 008a9d40 */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_008a9d80;
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
                    /* try { // try from 008a9b00 to 008a9b0b has its CatchHandler @ 008a9d48 */
        folly::dynamic::dynamic(local_d0,(dynamic *)(plVar4 + 8));
        local_a0 = 0;
                    /* try { // try from 008a9b10 to 008a9b27 has its CatchHandler @ 008a9d4c */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (this,param_3,uVar1,pcVar9,local_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 008a9b38 to 008a9b43 has its CatchHandler @ 008a9d3c */
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
LAB_008a9d80:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008a9d84  FUN_008a9d84 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008a9d84(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong *param_4)

{
  State *pSVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined4 local_3c0 [2];
  long local_3b8;
  long lStack_3b0;
  long local_3a8;
  undefined1 local_3a0;
  long local_398;
  long lStack_390;
  long local_388;
  long lStack_380;
  undefined4 local_378;
  long local_370;
  long lStack_368;
  long local_360;
  long local_358;
  long lStack_350;
  long local_348;
  undefined4 local_340;
  long local_338;
  long lStack_330;
  long local_328;
  undefined8 *local_320;
  long *plStack_318;
  long *local_310;
  long *local_308;
  undefined1 auStack_300 [8];
  long *local_2f8;
  undefined1 auStack_2f0 [8];
  long *local_2e8;
  undefined8 local_2e0;
  long *local_2d8;
  undefined8 local_2d0;
  long *local_2c8;
  long *local_230;
  long *local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined1 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined4 local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 local_178;
  ulong local_170;
  ulong local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  long local_d0 [4];
  long *local_b0;
  long local_a0 [4];
  long *local_80;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  local_170 = local_170 & 0xffffffff00000000;
  local_138 = 0;
  local_130 = _s__003752b8;
  local_148 = 0;
  local_140 = 0;
  local_158 = 0;
  local_168 = 0;
  local_160 = 0;
  local_150 = 0;
  local_128 = 0;
  local_d8 = 0;
  local_e8 = 0;
  local_e0 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  local_f0 = 0;
                    /* try { // try from 008a9e04 to 008a9e0f has its CatchHandler @ 008aa3a0 */
  FUN_0081c904(&local_2d0,&local_170);
  local_2e0 = 0;
  local_2d8 = (long *)0x0;
  local_80 = (long *)0x0;
                    /* try { // try from 008a9e18 to 008a9e23 has its CatchHandler @ 008aa338 */
  FUN_008abee0(auStack_2f0,local_a0);
  local_b0 = (long *)0x0;
                    /* try { // try from 008a9e28 to 008a9e33 has its CatchHandler @ 008aa2f8 */
  FUN_008abee0(auStack_300,local_d0);
                    /* try { // try from 008a9e34 to 008a9e4b has its CatchHandler @ 008aa2e8 */
  facebook::react::ImageRequest::ImageRequest
            ((ImageRequest *)&local_230,&local_2d0,&local_2e0,auStack_2f0,auStack_300);
                    /* try { // try from 008a9e4c to 008a9e57 has its CatchHandler @ 008aa2d8 */
  FUN_0081c904(local_3c0,&local_170);
                    /* try { // try from 008a9e58 to 008a9e5f has its CatchHandler @ 008aa2c8 */
  plStack_318 = (long *)operator_new(0xd8);
  plStack_318[0xe] = uStack_1d8;
  plStack_318[0xd] = local_1e0;
  plStack_318[5] = uStack_220;
  plStack_318[4] = (long)local_228;
  plStack_318[9] = uStack_200;
  plStack_318[8] = local_208;
  plStack_318[6] = local_218;
  *plStack_318 = (long)&PTR_FUN_00999e98;
  local_320 = plStack_318 + 3;
  *(undefined4 *)local_320 = local_230._0_4_;
  plStack_318[0x11] = uStack_1c0;
  plStack_318[0x10] = local_1c8;
  *(undefined1 *)(plStack_318 + 7) = local_210;
  plStack_318[0x15] = uStack_1a0;
  plStack_318[0x14] = local_1a8;
  plStack_318[1] = 0;
  plStack_318[2] = 0;
  plStack_318[10] = local_1f8;
  plStack_318[0xb] = uStack_1f0;
  plStack_318[0x18] = uStack_188;
  plStack_318[0x17] = local_190;
  plStack_318[0xf] = local_1d0;
  plStack_318[0x12] = local_1b8;
  *(undefined4 *)(plStack_318 + 0xc) = local_1e8;
  *(undefined4 *)(plStack_318 + 0x13) = local_1b0;
  plStack_318[0x16] = local_198;
  plStack_318[0x1a] = local_178;
  plStack_318[0x19] = local_180;
  local_228 = (long *)0x0;
  uStack_220 = 0;
  local_218 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_1f8 = 0;
  local_1e0 = 0;
  uStack_1d8 = 0;
  local_1d0 = 0;
  local_1c8 = 0;
  local_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a0 = 0;
  local_1a8 = 0;
  local_198 = 0;
  local_190 = 0;
  local_178 = 0;
  uStack_188 = 0;
  local_180 = 0;
  FUN_0079dd90(&local_230);
  if ((local_2f8 != (long *)0x0) &&
     (lVar5 = FUN_00757990(0xffffffffffffffff,local_2f8 + 1), lVar5 == 0)) {
    (**(code **)(*local_2f8 + 0x10))(local_2f8);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (local_b0 == local_d0) {
    lVar5 = 4;
    plVar6 = local_d0;
LAB_008a9f90:
    (**(code **)(*plVar6 + lVar5 * 8))();
  }
  else if (local_b0 != (long *)0x0) {
    lVar5 = 5;
    plVar6 = local_b0;
    goto LAB_008a9f90;
  }
  if ((local_2e8 != (long *)0x0) &&
     (lVar5 = FUN_00757990(0xffffffffffffffff,local_2e8 + 1), lVar5 == 0)) {
    (**(code **)(*local_2e8 + 0x10))(local_2e8);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (local_80 == local_a0) {
    lVar5 = 4;
    plVar6 = local_a0;
  }
  else {
    if (local_80 == (long *)0x0) goto LAB_008a9ffc;
    lVar5 = 5;
    plVar6 = local_80;
  }
  (**(code **)(*plVar6 + lVar5 * 8))();
LAB_008a9ffc:
  plVar6 = local_2d8;
  if ((local_2d8 != (long *)0x0) &&
     (lVar5 = FUN_00757990(0xffffffffffffffff,local_2d8 + 1), lVar5 == 0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  FUN_0079dd90(&local_2d0);
  FUN_0079dd90(&local_170);
                    /* try { // try from 008aa03c to 008aa043 has its CatchHandler @ 008aa2b8 */
  plVar6 = (long *)operator_new(200);
  *plVar6 = (long)&PTR_FUN_00999de8;
  plVar8 = plVar6 + 3;
  *(undefined4 *)plVar8 = local_3c0[0];
  plVar6[6] = local_3a8;
  plVar6[5] = lStack_3b0;
  plVar6[4] = local_3b8;
  *(undefined1 *)(plVar6 + 7) = local_3a0;
  plVar6[9] = lStack_390;
  plVar6[8] = local_398;
  plVar6[1] = 0;
  plVar6[2] = 0;
  plVar6[10] = local_388;
  plVar6[0xb] = lStack_380;
  plVar6[0xe] = lStack_368;
  plVar6[0xd] = local_370;
  plVar6[0xf] = local_360;
  plVar6[0x11] = lStack_350;
  plVar6[0x10] = local_358;
  plVar6[0x12] = local_348;
  plVar6[0x15] = lStack_330;
  plVar6[0x14] = local_338;
  *(undefined4 *)(plVar6 + 0x13) = local_340;
  local_3b8 = 0;
  lStack_3b0 = 0;
  plVar6[0x16] = local_328;
  local_3a8 = 0;
  local_398 = 0;
  lStack_390 = 0;
  local_388 = 0;
  *(undefined4 *)(plVar6 + 0xc) = local_378;
  local_370 = 0;
  lStack_368 = 0;
  local_360 = 0;
  local_358 = 0;
  lStack_350 = 0;
  local_348 = 0;
  local_338 = 0;
  lStack_330 = 0;
  local_328 = 0;
  plVar6[0x18] = (long)plStack_318;
  plVar6[0x17] = (long)local_320;
  local_320 = (undefined8 *)0x0;
  plStack_318 = (long *)0x0;
  local_310 = plVar8;
  local_308 = plVar6;
                    /* try { // try from 008aa104 to 008aa10b has its CatchHandler @ 008aa2a8 */
  puVar7 = (undefined8 *)operator_new(0x50);
  uVar2 = *param_4;
  uVar3 = param_4[1];
  pSVar1 = (State *)(puVar7 + 3);
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = &PTR_FUN_00999c40;
  local_310 = (long *)0x0;
  local_308 = (long *)0x0;
  if (uVar3 != 0) {
    FUN_00757d00(1,uVar3 + 0x10);
  }
  local_2d0 = 0;
  local_2c8 = (long *)0x0;
                    /* try { // try from 008aa14c to 008aa15b has its CatchHandler @ 008aa270 */
  local_230 = plVar8;
  local_228 = plVar6;
  local_170 = uVar2;
  local_168 = uVar3;
  facebook::react::State::State(pSVar1,&local_230,&local_170);
  if (local_168 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar6 = local_228;
  if ((local_228 != (long *)0x0) &&
     (lVar5 = FUN_00757990(0xffffffffffffffff,local_228 + 1), lVar5 == 0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar6 = local_2c8;
  *(undefined ***)pSVar1 = &PTR_FUN_00999c90;
  if ((local_2c8 != (long *)0x0) &&
     (lVar5 = FUN_00757990(0xffffffffffffffff,local_2c8 + 1), lVar5 == 0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar6 = local_308;
  *param_1 = pSVar1;
  param_1[1] = puVar7;
  if ((local_308 != (long *)0x0) &&
     (lVar5 = FUN_00757990(0xffffffffffffffff,local_308 + 1), lVar5 == 0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar6 = plStack_318;
  if ((plStack_318 != (long *)0x0) &&
     (lVar5 = FUN_00757990(0xffffffffffffffff,plStack_318 + 1), lVar5 == 0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  FUN_0079dd90(local_3c0);
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008aa3a8  FUN_008aa3a8 =====

/* WARNING: Removing unreachable block (ram,0x008aa47c) */
/* WARNING: Removing unreachable block (ram,0x008aa48c) */
/* WARNING: Removing unreachable block (ram,0x008aa4e0) */
/* WARNING: Removing unreachable block (ram,0x008aa4f0) */

void FUN_008aa3a8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
                    /* try { // try from 008aa3ec to 008aa3f7 has its CatchHandler @ 008aa568 */
  facebook::react::ShadowNodeFamily::getMostRecentState();
                    /* try { // try from 008aa3fc to 008aa403 has its CatchHandler @ 008aa558 */
  puVar5 = (undefined8 *)operator_new(0x50);
  pSVar1 = (State *)(puVar5 + 3);
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_00999ee8;
                    /* try { // try from 008aa428 to 008aa437 has its CatchHandler @ 008aa530 */
  local_58 = uVar2;
  local_50 = plVar3;
  facebook::react::State::State(pSVar1,&local_58,local_88);
  plVar3 = local_50;
  if ((local_50 != (long *)0x0) &&
     (lVar6 = FUN_00757990(0xffffffffffffffff,local_50 + 1), lVar6 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *(undefined ***)pSVar1 = &PTR_FUN_00999c90;
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


// ===== 008aa590  FUN_008aa590 =====

void FUN_008aa590(undefined8 *param_1,long param_2,long param_3)

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
                    /* try { // try from 008aa5d8 to 008aa5df has its CatchHandler @ 008aa8c4 */
  plVar5 = (long *)operator_new(0x68);
  *plVar5 = (long)&PTR_FUN_00999f38;
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
                    /* try { // try from 008aa61c to 008aa62b has its CatchHandler @ 008aa898 */
  facebook::react::EventEmitter::EventEmitter(pEVar1,&local_70,&local_80);
  *(undefined ***)pEVar1 = &PTR_FUN_0097ff10;
                    /* try { // try from 008aa63c to 008aa643 has its CatchHandler @ 008aa888 */
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
  plVar5[3] = (long)&PTR_FUN_00999f88;
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
                    /* try { // try from 008aa6f4 to 008aa6fb has its CatchHandler @ 008aa878 */
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
                    /* try { // try from 008aa748 to 008aa75f has its CatchHandler @ 008aa848 */
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
                    /* try { // try from 008aa7b4 to 008aa7bf has its CatchHandler @ 008aa828 */
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


// ===== 008aa8ec  FUN_008aa8ec =====

void FUN_008aa8ec(long param_1,undefined8 param_2)

{
  facebook::react::RNSVGImageShadowNode::facebook::react::RNSVGImageShadowNode::setImageManager
            (param_2,param_1 + 0x88);
  return;
}


// ===== 008aa8fc  FUN_008aa8fc =====

void FUN_008aa8fc(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 008aa920  FUN_008aa920 =====

void FUN_008aa920(void)

{
  return;
}


// ===== 008aa924  FUN_008aa924 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_008aa924(long param_1)

{
  byte bVar1;
  void *pvVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  if ((*(byte *)(param_1 + 0xa48) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0xa58));
  }
  FUN_0079dd90(param_1 + 0x9a8);
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
  FUN_0078917c(param_1,PTR_VTT_0099f198 + 8);
  return;
}


// ===== 008aaad8  FUN_008aaad8 =====

void FUN_008aaad8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00999a38;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008aaae8  FUN_008aaae8 =====

void FUN_008aaae8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00999a38;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008aab18  FUN_008aab18 =====

void FUN_008aab18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x008aab20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 008aab24  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008aab28  FUN_008aab28 =====

void FUN_008aab28(long param_1)

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


// ===== 008aab78  FUN_008aab78 =====

void FUN_008aab78(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00999a88;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008aab88  FUN_008aab88 =====

void FUN_008aab88(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00999a88;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008aabb8  FUN_008aabb8 =====

void FUN_008aabb8(long param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  plVar3 = *(long **)(param_1 + 0x408);
  if ((plVar3 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar3 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pvVar4 = *(void **)(param_1 + 0x3e0);
  *(undefined **)(param_1 + 0x18) = PTR_vtable_0099de98 + 0x10;
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
  FUN_00789784(param_1 + 0x18);
  return;
}


// ===== 008aaca0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008aaca4  FUN_008aaca4 =====

void FUN_008aaca4(long *param_1)

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


// ===== 008aad64  FUN_008aad64 =====

void FUN_008aad64(long param_1)

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


// ===== 008aadcc  FUN_008aadcc =====

bool FUN_008aadcc(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 008aade4  FUN_008aade4 =====

bool FUN_008aade4(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 008aadfc  FUN_008aadfc =====

void FUN_008aadfc(long param_1)

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


// ===== 008aae4c  FUN_008aae4c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008aae4c(void)

{
  undefined8 *__s;
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)operator_new(0xa80);
  __s = puVar3 + 3;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_00999ba0;
  memset(__s,0,0xa68);
                    /* try { // try from 008aae88 to 008aae9b has its CatchHandler @ 008ab014 */
  FUN_00788b10(__s,PTR_VTT_0099f198 + 0x10);
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
  puVar2 = PTR_vtable_0099f190;
  puVar3[0x111] = 0;
  *(undefined4 *)(puVar3 + 0xd9) = 0;
  *(undefined2 *)((long)puVar3 + 0x6cc) = 0;
  puVar3[3] = puVar2 + 0x20;
  *(undefined4 *)(puVar3 + 0xe2) = 0x3f800000;
  *(undefined4 *)(puVar3 + 0x10a) = 0x3f800000;
  puVar3[0xf4] = 0;
  puVar3[0xf3] = 0;
  *(undefined8 *)((long)puVar3 + 0x7a5) = 0;
  puVar3[0x118] = 0;
  uVar1 = _s__003752b8;
  puVar3[0xe1] = 0;
  puVar3[0xe0] = 0;
  puVar3[0xdf] = 0;
  *(undefined4 *)(puVar3 + 0xfd) = 0;
  puVar3[0xfe] = 0;
  puVar3[0xe4] = 0;
  puVar3[0xe3] = 0;
  puVar3[0xe6] = 0;
  puVar3[0xe5] = 0;
  puVar3[0xe8] = 0;
  puVar3[0xe7] = 0;
  puVar3[0xea] = 0;
  puVar3[0xe9] = 0;
  puVar3[0xec] = 0;
  puVar3[0xeb] = 0;
  puVar3[0xee] = 0;
  puVar3[0xed] = 0;
  puVar3[0xf0] = 0;
  puVar3[0xef] = 0;
  puVar3[0xf2] = 0;
  puVar3[0xf1] = 0;
  puVar3[0xf7] = 0;
  puVar3[0xf6] = 0;
  puVar3[0xf9] = 0;
  puVar3[0xf8] = 0;
  puVar3[0xfb] = 0;
  puVar3[0xfa] = 0;
  *(undefined4 *)(puVar3 + 0xfc) = 0;
  puVar3[0x103] = 0x13f800000;
  *(undefined4 *)(puVar3 + 0x104) = 0;
  puVar3[0x105] = 0;
  *(undefined4 *)(puVar3 + 0x10b) = 0;
  puVar3[0x10c] = 0;
  *(undefined4 *)(puVar3 + 0x112) = 0;
  puVar3[0x113] = 0;
  *(undefined4 *)(puVar3 + 0x119) = 0;
  puVar3[0x121] = 0;
  *(undefined4 *)(puVar3 + 0x126) = 0;
  puVar3[0x127] = 0;
  *(undefined4 *)(puVar3 + 300) = 0;
  puVar3[0x12d] = 0;
  *(undefined4 *)(puVar3 + 0x132) = 0;
  puVar3[0x133] = 0;
  *(undefined4 *)(puVar3 + 0x138) = 0;
  puVar3[0x13f] = 0;
  puVar3[0x13e] = 0;
  puVar3[0x13d] = 0;
  puVar3[0x11b] = 0;
  puVar3[0x11a] = 0;
  *(undefined4 *)(puVar3 + 0x120) = 0;
  puVar3[0x11d] = 0;
  puVar3[0x11c] = 0;
  puVar3[0x11f] = 0;
  puVar3[0x11e] = 0;
  puVar3[0x13b] = 0;
  *(undefined1 *)(puVar3 + 0x13c) = 0;
  puVar3[0x13a] = 0;
  puVar3[0x139] = 0;
  puVar3[0x140] = uVar1;
  *(undefined4 *)(puVar3 + 0x141) = 0;
  *(undefined4 *)(puVar3 + 0x148) = 0;
  puVar3[0x147] = 0;
  puVar3[0x146] = 0;
  puVar3[0x145] = 0;
  puVar3[0x144] = 0;
  puVar3[0x143] = 0;
  puVar3[0x142] = 0;
  *(undefined4 *)(puVar3 + 0x14f) = 0;
  puVar3[0x14e] = 0;
  puVar3[0x14d] = 0;
  puVar3[0x14c] = 0;
  puVar3[0x14b] = 0;
  puVar2 = 
  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_23RNSVGImageComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_15RNSVGImagePropsENS0_22RNSVGImageEventEmitterENS0_15RNSVGImageStateEE18defaultSharedPropsEvE18defaultSharedProps_0099ec48
  ;
  puVar3[0x14a] = 0;
  puVar3[0x149] = 0;
  *(undefined8 **)puVar2 = __s;
  *(undefined8 **)(puVar2 + 8) = puVar3;
  return;
}


// ===== 008ab030  FUN_008ab030 =====

void FUN_008ab030(long param_1)

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


// ===== 008ab080  FUN_008ab080 =====

void FUN_008ab080(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00999ba0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008ab090  FUN_008ab090 =====

void FUN_008ab090(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00999ba0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008ab0c0  FUN_008ab0c0 =====

void FUN_008ab0c0(long param_1)

{
  FUN_008aa924(param_1 + 0x18);
  return;
}


// ===== 008ab0c8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008ab0cc  FUN_008ab0cc =====

void FUN_008ab0cc(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00999bf0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008ab0dc  FUN_008ab0dc =====

void FUN_008ab0dc(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00999bf0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008ab10c  FUN_008ab10c =====

void FUN_008ab10c(long param_1)

{
  FUN_008aa924(param_1 + 0x18);
  return;
}


// ===== 008ab114  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008ab118  FUN_008ab118 =====

void FUN_008ab118(long param_1)

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


// ===== 008ab168  FUN_008ab168 =====

void FUN_008ab168(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0xa8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  FUN_0079dd90(param_1);
  return;
}


// ===== 008ab1b8  FUN_008ab1b8 =====

void FUN_008ab1b8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00999c40;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008ab1c8  FUN_008ab1c8 =====

void FUN_008ab1c8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00999c40;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008ab1f8  FUN_008ab1f8 =====

void FUN_008ab1f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x008ab200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 008ab204  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008ab208  FUN_008ab208 =====

void FUN_008ab208(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[4];
  *param_1 = &PTR_FUN_0098f6c8;
  if ((plVar2 == (long *)0x0) || (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 != 0))
  {
    lVar1 = param_1[2];
  }
  else {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
    lVar1 = param_1[2];
  }
  if (lVar1 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
    return;
  }
  return;
}


// ===== 008ab27c  FUN_008ab27c =====

void FUN_008ab27c(undefined8 *param_1)

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


// ===== 008ab2e4  FUN_008ab2e4 =====

void FUN_008ab2e4(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}


// ===== 008ab2f0  <EXTERNAL>::facebook::react::MapBufferBuilder::facebook::react::MapBufferBuilder::EMPTY =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall facebook::react::MapBufferBuilder::facebook::react::MapBufferBuilder::EMPTY(void)

{
  (*(code *)PTR_EMPTY_009a0138)();
  return;
}


// ===== 008ab2f4  FUN_008ab2f4 =====

void FUN_008ab2f4(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}


// ===== 008ab2fc  FUN_008ab2fc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ab2fc(long param_1,dynamic *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long **pplVar5;
  long lVar6;
  undefined4 local_290 [2];
  undefined8 local_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined1 local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  long local_250;
  undefined4 local_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined4 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  long *local_1e8;
  undefined4 local_1e0 [2];
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined1 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  long lStack_1a0;
  undefined4 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  long local_178;
  long lStack_170;
  long local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  long *local_138;
  long local_130;
  long *local_128;
  dynamic adStack_120 [48];
  long local_f0 [4];
  long *local_d0;
  long local_c0 [4];
  long *local_a0 [2];
  long local_90;
  long *local_88;
  long local_80 [4];
  long *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  folly::dynamic::dynamic(adStack_120,param_2);
  local_230 = 0;
  local_290[0] = 0;
  local_250 = _s__003752b8;
  local_270 = 0;
  local_248 = 0;
  local_1a8 = 0;
  lStack_1a0 = _s__003752b8;
  local_198 = 0;
  local_210 = 0;
  local_168 = 0;
  local_1e0[0] = 0;
  local_1d0 = 0;
  uStack_1c8 = 0;
  local_1d8 = 0;
  local_280 = 0;
  uStack_278 = 0;
  local_288 = 0;
  local_1c0 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_268 = 0;
  uStack_260 = 0;
  local_258 = 0;
  local_190 = 0;
  uStack_188 = 0;
  local_180 = 0;
  local_240 = 0;
  uStack_238 = 0;
  lStack_170 = 0;
  local_178 = 0;
  local_228 = 0;
  uStack_220 = 0;
  local_218 = 0;
  local_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_140 = 0;
  local_138 = (long *)0x0;
  local_148 = 0;
  local_1f0 = 0;
  local_1e8 = (long *)0x0;
  local_1f8 = 0;
  local_d0 = (long *)0x0;
                    /* try { // try from 008ab3cc to 008ab3d3 has its CatchHandler @ 008ab75c */
  local_d0 = (long *)operator_new(0xb8);
  *local_d0 = (long)&PTR_FUN_00999d68;
  *(undefined4 *)(local_d0 + 1) = 0;
  local_d0[3] = 0;
  local_d0[4] = 0;
  local_d0[8] = 0;
  local_d0[9] = local_250;
  local_d0[2] = 0;
  local_d0[0x10] = local_168;
  lVar4 = *(long *)(param_1 + 0x10);
  local_1d0 = 0;
  uStack_1c8 = 0;
  local_1d8 = 0;
  *(undefined1 *)(local_d0 + 5) = 0;
  local_d0[6] = 0;
  local_d0[7] = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_1b8 = 0;
  *(undefined4 *)(local_d0 + 10) = local_248;
  local_d0[0xb] = 0;
  local_d0[0xc] = 0;
  local_d0[0xd] = 0;
  local_190 = 0;
  uStack_188 = 0;
  local_d0[0xf] = lStack_170;
  local_d0[0xe] = local_178;
  local_180 = 0;
  local_178 = 0;
  lStack_170 = 0;
  local_168 = 0;
  *(undefined4 *)(local_d0 + 0x11) = 0;
  local_d0[0x12] = 0;
  local_d0[0x13] = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_d0[0x15] = 0;
  local_d0[0x16] = 0;
  local_d0[0x14] = 0;
  local_148 = 0;
  local_140 = 0;
  local_138 = (long *)0x0;
  if (lVar4 != 0) {
    local_128 = (long *)std::__ndk1::__shared_weak_count::lock();
    if (local_128 != (long *)0x0) {
      lVar4 = *(long *)(param_1 + 8);
      local_130 = lVar4;
      if (lVar4 != 0) {
        local_90 = lVar4;
        local_88 = local_128;
        FUN_00757d00(1,local_128 + 1);
        if (local_d0 == (long *)0x0) {
          plVar2 = (long *)0x0;
        }
        else {
                    /* try { // try from 008ab4a8 to 008ab4ab has its CatchHandler @ 008ab6d0 */
          plVar2 = (long *)(**(code **)(*local_d0 + 0x10))();
        }
        local_60 = (long *)0x0;
        local_a0[0] = plVar2;
                    /* try { // try from 008ab4c4 to 008ab4cb has its CatchHandler @ 008ab6e8 */
        plVar3 = (long *)operator_new(0x40);
        *plVar3 = (long)&PTR_FUN_00999ce8;
        if (plVar2 == (long *)0x0) {
          pplVar5 = (long **)(plVar3 + 6);
LAB_008ab4fc:
          *pplVar5 = (long *)0x0;
        }
        else {
          if (plVar2 != local_c0) {
            pplVar5 = local_a0;
            plVar3[6] = (long)plVar2;
            goto LAB_008ab4fc;
          }
          plVar3[6] = (long)(plVar3 + 2);
                    /* try { // try from 008ab510 to 008ab51f has its CatchHandler @ 008ab6cc */
          (**(code **)(local_c0[0] + 0x18))(local_c0);
        }
        local_60 = plVar3;
        if (local_a0[0] == local_c0) {
          lVar6 = 4;
          plVar2 = local_c0;
LAB_008ab548:
          (**(code **)(*plVar2 + lVar6 * 8))(plVar2);
        }
        else if (local_a0[0] != (long *)0x0) {
          lVar6 = 5;
          plVar2 = local_a0[0];
          goto LAB_008ab548;
        }
                    /* try { // try from 008ab558 to 008ab567 has its CatchHandler @ 008ab6d8 */
        facebook::react::ShadowNodeFamily::facebook::react::ShadowNodeFamily::dispatchRawState
                  (lVar4,&local_90,0);
        plVar2 = local_80;
        if (local_60 == plVar2) {
          lVar4 = 4;
LAB_008ab590:
          (**(code **)(*plVar2 + lVar4 * 8))();
        }
        else if (local_60 != (long *)0x0) {
          lVar4 = 5;
          plVar2 = local_60;
          goto LAB_008ab590;
        }
        plVar2 = local_88;
        if ((local_88 != (long *)0x0) &&
           (lVar4 = FUN_00757990(0xffffffffffffffff,local_88 + 1), lVar4 == 0)) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
        if (local_128 == (long *)0x0) goto LAB_008ab5fc;
      }
      plVar2 = local_128;
      lVar4 = FUN_00757990(0xffffffffffffffff,local_128 + 1);
      if (lVar4 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
    }
  }
LAB_008ab5fc:
  if (local_d0 == local_f0) {
    lVar4 = 4;
    plVar2 = local_f0;
  }
  else {
    if (local_d0 == (long *)0x0) goto LAB_008ab62c;
    lVar4 = 5;
    plVar2 = local_d0;
  }
  (**(code **)(*plVar2 + lVar4 * 8))();
LAB_008ab62c:
  plVar2 = local_138;
  if ((local_138 != (long *)0x0) &&
     (lVar4 = FUN_00757990(0xffffffffffffffff,local_138 + 1), lVar4 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  FUN_0079dd90(local_1e0);
  plVar2 = local_1e8;
  if ((local_1e8 != (long *)0x0) &&
     (lVar4 = FUN_00757990(0xffffffffffffffff,local_1e8 + 1), lVar4 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  FUN_0079dd90(local_290);
  folly::dynamic::folly::dynamic::destroy(adStack_120);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008ab794  FUN_008ab794 =====

void FUN_008ab794(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0xa8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  FUN_0079dd90(param_1);
  return;
}


// ===== 008ab7e4  FUN_008ab7e4 =====

void FUN_008ab7e4(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)param_1[6];
  plVar2 = param_1 + 2;
  *param_1 = &PTR_FUN_00999ce8;
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
                    /* WARNING: Could not recover jumptable at 0x008ab820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + lVar3 * 8))();
  return;
}


// ===== 008ab828  FUN_008ab828 =====

void FUN_008ab828(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)param_1[6];
  plVar2 = param_1 + 2;
  *param_1 = &PTR_FUN_00999ce8;
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_008ab874;
    lVar3 = 5;
    plVar2 = plVar1;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_008ab874:
  operator_delete(param_1);
  return;
}


// ===== 008ab884  FUN_008ab884 =====

undefined8 * FUN_008ab884(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  
  puVar1 = (undefined8 *)operator_new(0x40);
  plVar2 = *(long **)(param_1 + 0x30);
  *puVar1 = &PTR_FUN_00999ce8;
  if (plVar2 != (long *)0x0) {
    if (plVar2 == (long *)(param_1 + 0x10)) {
      lVar3 = *plVar2;
      puVar1[6] = puVar1 + 2;
      (**(code **)(lVar3 + 0x18))();
      return puVar1;
    }
                    /* try { // try from 008ab8cc to 008ab8e7 has its CatchHandler @ 008ab8f8 */
    plVar2 = (long *)(**(code **)(*plVar2 + 0x10))();
  }
  puVar1[6] = plVar2;
  return puVar1;
}


// ===== 008ab90c  FUN_008ab90c =====

void FUN_008ab90c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x30);
  *param_2 = &PTR_FUN_00999ce8;
  if (plVar2 == (long *)0x0) {
    param_2[6] = 0;
  }
  else {
    if (plVar2 == (long *)(param_1 + 0x10)) {
      param_2[6] = param_2 + 2;
                    /* WARNING: Could not recover jumptable at 0x008ab97c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x30) + 0x18))();
      return;
    }
    uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
    param_2[6] = uVar1;
  }
  return;
}


// ===== 008ab980  FUN_008ab980 =====

void FUN_008ab980(long param_1)

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
                    /* WARNING: Could not recover jumptable at 0x008ab9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + lVar3 * 8))();
  return;
}


// ===== 008ab9b8  FUN_008ab9b8 =====

void FUN_008ab9b8(void *param_1)

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
    if (plVar1 == (long *)0x0) goto LAB_008ab9f8;
    lVar3 = 5;
    plVar2 = plVar1;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_008ab9f8:
  operator_delete(param_1);
  return;
}


// ===== 008aba08  FUN_008aba08 =====

void FUN_008aba08(long param_1,undefined8 *param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x30);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x008aba1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))(plVar1,*param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00785754();
}


// ===== 008aba2c  FUN_008aba2c =====

long FUN_008aba2c(long param_1,long param_2)

{
  param_1 = param_1 + 0x10;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_0099ec58) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 008aba48  FUN_008aba48 =====

undefined * FUN_008aba48(void)

{
  return PTR_typeinfo_0099ec60;
}


// ===== 008aba54  FUN_008aba54 =====

void FUN_008aba54(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[0x16];
  *param_1 = &PTR_FUN_00999d68;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  FUN_0079dd90(param_1 + 1);
  return;
}


// ===== 008abab0  FUN_008abab0 =====

void FUN_008abab0(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[0x16];
  *param_1 = &PTR_FUN_00999d68;
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  FUN_0079dd90(param_1 + 1);
  operator_delete(param_1);
  return;
}


// ===== 008abb14  FUN_008abb14 =====

undefined8 * FUN_008abb14(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0xb8);
  *puVar2 = &PTR_FUN_00999d68;
                    /* try { // try from 008abb3c to 008abb43 has its CatchHandler @ 008abb6c */
  FUN_0081c904(puVar2 + 1,param_1 + 8);
  lVar1 = *(long *)(param_1 + 0xb0);
  puVar2[0x15] = *(undefined8 *)(param_1 + 0xa8);
  puVar2[0x16] = lVar1;
  if (lVar1 != 0) {
    FUN_00757d00(1,lVar1 + 8);
  }
  return puVar2;
}


// ===== 008abb80  FUN_008abb80 =====

void FUN_008abb80(long param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_2 = &PTR_FUN_00999d68;
  FUN_0081c904(param_2 + 1,param_1 + 8);
  lVar1 = *(long *)(param_1 + 0xb0);
  param_2[0x15] = *(undefined8 *)(param_1 + 0xa8);
  param_2[0x16] = lVar1;
  if (lVar1 != 0) {
    FUN_00757d00(1,lVar1 + 8);
  }
  return;
}


// ===== 008abbd0  FUN_008abbd0 =====

void FUN_008abbd0(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0xb0);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  FUN_0079dd90(param_1 + 8);
  return;
}


// ===== 008abc20  FUN_008abc20 =====

void FUN_008abc20(void *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)((long)param_1 + 0xb0);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  FUN_0079dd90((long)param_1 + 8);
  operator_delete(param_1);
  return;
}


// ===== 008abc78  FUN_008abc78 =====

void FUN_008abc78(long *param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(200);
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_00999de8;
                    /* try { // try from 008abcb0 to 008abcbb has its CatchHandler @ 008abce8 */
  FUN_0081c904(puVar2 + 3,param_2 + 8);
  lVar1 = *(long *)(param_2 + 0xb0);
  puVar2[0x17] = *(undefined8 *)(param_2 + 0xa8);
  puVar2[0x18] = lVar1;
  if (lVar1 != 0) {
    FUN_00757d00(1,lVar1 + 8);
  }
  *param_1 = (long)(puVar2 + 3);
  param_1[1] = (long)puVar2;
  return;
}


// ===== 008abd04  FUN_008abd04 =====

long FUN_008abd04(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_0099ec68) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 008abd20  FUN_008abd20 =====

undefined * FUN_008abd20(void)

{
  return PTR_typeinfo_0099ec70;
}


// ===== 008abd2c  FUN_008abd2c =====

void FUN_008abd2c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00999de8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008abd3c  FUN_008abd3c =====

void FUN_008abd3c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00999de8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008abd6c  FUN_008abd6c =====

void FUN_008abd6c(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0xc0);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  FUN_0079dd90(param_1 + 0x18);
  return;
}


// ===== 008abdbc  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008abdc0  FUN_008abdc0 =====

void FUN_008abdc0(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0xb8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = *(long **)(param_1 + 0xa8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  FUN_0079dd90(param_1);
  return;
}


// ===== 008abe40  FUN_008abe40 =====

void FUN_008abe40(long param_1)

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


// ===== 008abe90  FUN_008abe90 =====

void FUN_008abe90(long param_1)

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


// ===== 008abee0  FUN_008abee0 =====

void FUN_008abee0(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  puVar2 = (undefined8 *)operator_new(0xe0);
  plVar3 = param_2 + 4;
  plVar5 = (long *)*plVar3;
  puVar1 = puVar2 + 4;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_00999e48;
  if (plVar5 == (long *)0x0) {
    plVar3 = puVar2 + 8;
  }
  else {
    if (plVar5 == param_2) {
      lVar4 = *param_2;
      puVar2[8] = puVar1;
                    /* try { // try from 008abf4c to 008abf57 has its CatchHandler @ 008abf74 */
      (**(code **)(lVar4 + 0x18))(param_2,puVar1);
      goto LAB_008abf58;
    }
    puVar2[8] = plVar5;
  }
  *plVar3 = 0;
LAB_008abf58:
                    /* try { // try from 008abf58 to 008abf5f has its CatchHandler @ 008abf78 */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)(puVar2 + 10));
  *param_1 = (long)puVar1;
  param_1[1] = (long)puVar2;
  return;
}


// ===== 008abfc4  FUN_008abfc4 =====

void FUN_008abfc4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00999e48;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008abfd4  FUN_008abfd4 =====

void FUN_008abfd4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00999e48;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008ac004  FUN_008ac004 =====

void FUN_008ac004(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)(param_1 + 0x20);
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)(param_1 + 0xa8));
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)(param_1 + 0x78));
  std::__ndk1::mutex::~mutex((mutex *)(param_1 + 0x50));
  plVar1 = *(long **)(param_1 + 0x40);
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
                    /* WARNING: Could not recover jumptable at 0x008ac060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + lVar3 * 8))();
  return;
}


// ===== 008ac070  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008ac074  FUN_008ac074 =====

void FUN_008ac074(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00999e98;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008ac084  FUN_008ac084 =====

void FUN_008ac084(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00999e98;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008ac0b4  FUN_008ac0b4 =====

void FUN_008ac0b4(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0xd0);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar2 = *(long **)(param_1 + 0xc0);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00757990(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  FUN_0079dd90(param_1 + 0x18);
  return;
}


// ===== 008ac134  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008ac138  FUN_008ac138 =====

void FUN_008ac138(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00999ee8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008ac148  FUN_008ac148 =====

void FUN_008ac148(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00999ee8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008ac178  FUN_008ac178 =====

void FUN_008ac178(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x008ac180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 008ac184  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008ac188  FUN_008ac188 =====

void FUN_008ac188(long param_1)

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


// ===== 008ac1d8  FUN_008ac1d8 =====

void FUN_008ac1d8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00999f38;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008ac1e8  FUN_008ac1e8 =====

void FUN_008ac1e8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_00999f38;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008ac218  FUN_008ac218 =====

void FUN_008ac218(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x008ac220. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 008ac224  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008ac228  FUN_008ac228 =====

void FUN_008ac228(long *param_1)

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


// ===== 008ac2e0  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_23RNSVGConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGLinearGradientComponentNameEEEENS0_24RNSVGLinearGradientPropsEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENS8_14default_deleteISB_EEEERKNS0_29ComponentDescriptorParametersE =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_23RNSVGConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGLinearGradientComponentNameEEEENS0_24RNSVGLinearGradientPropsEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENS8_14default_deleteISB_EEEERKNS0_29ComponentDescriptorParametersE
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
  undefined4 local_1390 [2];
  undefined8 *local_1388;
  void *local_1380;
  void *pvStack_1378;
  undefined8 local_1370;
  void *pvStack_1368;
  void *local_1360;
  undefined8 uStack_1358;
  void *local_1350;
  void *pvStack_1348;
  undefined8 uStack_1340;
  undefined8 uStack_1338;
  undefined *local_1330;
  undefined8 uStack_1328;
  undefined8 local_1320;
  undefined8 uStack_1318;
  undefined4 local_1310 [2];
  undefined8 local_1308;
  undefined8 uStack_1300;
  undefined8 local_12f8;
  undefined8 uStack_12f0;
  undefined4 local_12e8;
  undefined4 local_12e0;
  undefined1 local_12dc;
  undefined8 local_12db;
  undefined8 local_12d3;
  undefined8 uStack_12cb;
  undefined8 local_12c3;
  undefined8 uStack_12bb;
  undefined8 local_12b3;
  undefined8 uStack_12ab;
  undefined8 local_12a3;
  undefined6 uStack_129b;
  undefined2 uStack_1295;
  undefined6 uStack_1293;
  undefined8 uStack_128d;
  undefined4 local_1285;
  undefined8 local_1281;
  undefined1 local_1279;
  undefined1 uStack_1278;
  undefined7 uStack_1277;
  undefined8 uStack_1270;
  undefined8 uStack_1268;
  undefined8 uStack_1260;
  undefined8 local_1258;
  undefined8 uStack_1250;
  undefined8 local_1248;
  undefined8 uStack_1240;
  undefined8 local_1238;
  undefined8 uStack_1230;
  undefined8 local_1228;
  undefined8 uStack_1220;
  undefined8 uStack_1218;
  undefined8 local_1210;
  undefined8 local_1208;
  undefined8 uStack_1200;
  undefined8 local_11f8;
  undefined4 uStack_11f0;
  undefined4 uStack_11ec;
  undefined4 uStack_11e8;
  undefined4 uStack_11e4;
  undefined4 uStack_11e0;
  undefined4 uStack_11dc;
  undefined8 local_11d8;
  undefined8 uStack_11d0;
  undefined4 local_11c8;
  undefined1 local_11c4;
  undefined4 local_11c0;
  undefined1 local_11bc;
  undefined4 local_11b8;
  undefined1 local_11b4;
  undefined4 local_11b0;
  undefined1 local_11ac;
  undefined4 local_11a8;
  undefined1 local_11a4;
  undefined4 local_11a0;
  undefined1 local_119c;
  undefined4 local_1198;
  undefined1 local_1194;
  undefined4 local_1190;
  undefined1 local_118c;
  undefined4 local_1188;
  undefined1 local_1184;
  undefined4 local_1180;
  undefined1 local_117c;
  undefined4 local_1178;
  undefined1 local_1174;
  undefined4 local_1170;
  undefined1 local_116c;
  undefined4 local_1168;
  undefined1 local_1164;
  undefined4 local_1160;
  undefined1 local_115c;
  undefined4 local_1158;
  undefined1 local_1154;
  undefined4 local_1150;
  undefined1 local_114c;
  undefined1 local_1148;
  undefined1 local_1144;
  undefined1 local_1138;
  undefined8 local_1130;
  undefined8 uStack_1128;
  undefined8 uStack_1120;
  undefined8 uStack_1118;
  undefined8 local_1110;
  undefined8 uStack_1108;
  undefined8 uStack_1100;
  undefined1 uStack_10f8;
  undefined7 local_10f7;
  undefined1 uStack_10f0;
  undefined8 uStack_10ef;
  undefined8 local_10e4;
  undefined8 uStack_10dc;
  undefined8 uStack_10d4;
  undefined8 uStack_10cc;
  undefined8 local_10c4;
  undefined8 uStack_10bc;
  undefined8 uStack_10b4;
  undefined8 uStack_10ac;
  undefined8 local_10a4;
  undefined8 uStack_109c;
  undefined8 uStack_1094;
  undefined5 uStack_108c;
  undefined3 local_1087;
  undefined5 uStack_1084;
  undefined1 local_107c;
  undefined1 local_1078;
  undefined1 local_1074;
  undefined1 local_1070;
  undefined1 local_106c;
  undefined1 local_1068;
  undefined1 local_1050;
  undefined8 local_1048;
  undefined8 uStack_1040;
  undefined8 local_1038;
  undefined4 local_1030;
  undefined1 local_102c;
  undefined4 local_102b;
  undefined1 local_1027;
  undefined1 local_1026;
  undefined8 local_1020;
  undefined8 uStack_1018;
  undefined8 uStack_1010;
  undefined8 uStack_1008;
  undefined8 local_1000;
  undefined7 uStack_ff8;
  undefined4 uStack_ff1;
  undefined8 local_fec;
  undefined1 local_fe4;
  undefined1 local_fdc;
  undefined1 local_fd8;
  undefined1 local_fd0;
  undefined1 local_fcc;
  undefined1 local_fc4;
  undefined1 local_fc0;
  undefined1 local_fb8;
  undefined1 local_fb4;
  undefined1 local_fac;
  undefined1 local_fa8;
  undefined1 local_fa0;
  undefined1 local_f9c;
  undefined1 local_f94;
  undefined1 local_f90;
  undefined1 local_f88;
  undefined1 local_f84;
  undefined1 local_f7c;
  undefined1 local_f78;
  undefined1 local_f70;
  undefined1 local_f6c;
  undefined1 local_f64;
  undefined1 local_f60;
  undefined1 local_f58;
  undefined1 local_f54;
  undefined1 local_f4c;
  undefined1 local_f48;
  undefined1 local_f44;
  undefined1 local_f40;
  undefined1 local_f3c;
  undefined1 local_f38;
  undefined1 local_f34;
  undefined1 local_f30;
  undefined1 local_f2c;
  undefined1 local_f28;
  undefined1 local_f24;
  undefined1 local_f20;
  undefined1 local_f1c;
  undefined1 local_f18;
  undefined1 local_f14;
  undefined1 local_f10;
  undefined1 local_f0c;
  undefined1 local_f08;
  undefined1 local_f04;
  undefined1 local_f00;
  undefined1 local_efc;
  undefined1 local_ef8;
  undefined1 local_ef4;
  undefined1 local_ef0;
  undefined1 local_eec;
  undefined8 local_ee8;
  undefined8 uStack_ee0;
  undefined8 local_ed8;
  undefined8 uStack_ed0;
  undefined8 uStack_ec8;
  undefined8 uStack_ec0;
  undefined2 local_eb8;
  undefined8 local_eb4;
  undefined1 local_eac;
  undefined8 local_ea8;
  undefined8 local_ea0;
  undefined8 uStack_e98;
  undefined1 local_e90;
  undefined8 local_e88;
  undefined8 uStack_e80;
  undefined8 uStack_e78;
  undefined8 uStack_e70;
  undefined8 local_e68;
  undefined8 uStack_e60;
  undefined8 uStack_e58;
  undefined8 uStack_e50;
  undefined8 local_e48;
  undefined8 uStack_e40;
  undefined8 uStack_e38;
  undefined8 uStack_e30;
  undefined8 local_e28;
  undefined8 uStack_e20;
  undefined8 uStack_e18;
  undefined8 uStack_e10;
  undefined8 local_e08;
  undefined8 uStack_e00;
  undefined8 uStack_df8;
  undefined8 uStack_df0;
  undefined8 local_de8;
  undefined8 uStack_de0;
  undefined8 local_dd8;
  undefined8 uStack_dd0;
  undefined8 local_dc8;
  undefined8 uStack_dc0;
  undefined8 local_db8;
  undefined8 uStack_db0;
  undefined8 local_da8;
  undefined8 uStack_da0;
  undefined8 local_d98;
  undefined6 uStack_d90;
  undefined2 uStack_d8a;
  undefined6 uStack_d88;
  undefined1 local_d80;
  undefined1 local_d7c;
  undefined1 local_d78;
  undefined8 local_d74;
  undefined8 uStack_d6c;
  undefined1 local_d64;
  undefined8 local_d60;
  undefined2 local_d58;
  undefined1 local_d56;
  undefined4 local_d54;
  undefined1 local_d50;
  undefined1 local_cf0;
  undefined1 local_ce8;
  undefined1 local_c88;
  undefined4 local_c80;
  undefined2 local_c7c;
  undefined1 local_c78;
  undefined1 local_c74;
  undefined1 local_c70;
  undefined1 local_c6c;
  undefined1 local_c68;
  undefined1 local_c64;
  undefined1 local_c60;
  undefined1 local_c5c;
  undefined1 local_c58;
  undefined1 local_c54;
  undefined8 local_c50;
  undefined8 uStack_c48;
  undefined8 local_c40;
  undefined4 local_c38;
  undefined8 local_c30;
  undefined8 uStack_c28;
  undefined8 local_c20;
  undefined8 uStack_c18;
  undefined8 local_c10;
  undefined8 uStack_c08;
  undefined8 local_c00;
  undefined8 uStack_bf8;
  undefined8 local_bf0;
  undefined8 uStack_be8;
  undefined8 local_be0;
  undefined8 uStack_bd8;
  undefined8 local_bd0;
  undefined8 uStack_bc8;
  undefined8 local_bc0;
  undefined8 uStack_bb8;
  undefined8 local_bb0;
  undefined5 uStack_ba8;
  undefined3 uStack_ba3;
  undefined5 uStack_ba0;
  undefined8 local_b98;
  undefined8 uStack_b90;
  undefined8 local_b88;
  undefined8 uStack_b80;
  undefined8 uStack_b78;
  undefined8 uStack_b70;
  undefined4 local_b68;
  undefined8 local_b60;
  undefined4 local_b38;
  undefined8 local_b30;
  undefined4 local_b08;
  undefined8 local_b00;
  undefined4 local_ad8;
  undefined8 local_ad0;
  undefined8 local_aa8;
  undefined8 uStack_aa0;
  undefined8 local_a98;
  undefined4 local_a90;
  undefined8 local_a88;
  undefined8 uStack_a80;
  undefined8 local_a78;
  undefined4 local_a70 [2];
  undefined8 local_a68;
  undefined8 uStack_a60;
  undefined8 local_a58;
  undefined8 local_a50;
  undefined8 uStack_a48;
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
  pvStack_1368 = (void *)0x0;
  local_1370 = 0;
  uStack_1358 = 0;
  local_1360 = (void *)0x0;
  pvStack_1348 = (void *)0x0;
  local_1350 = (void *)0x0;
  uStack_1338 = 0;
  uStack_1340 = 0;
  pvStack_1378 = (void *)0x0;
  local_1380 = (void *)0x0;
                    /* try { // try from 008ac334 to 008ac33f has its CatchHandler @ 008ac9e8 */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_1380);
  local_f8 = 0;
  *(undefined ***)this = &PTR_FUN_00999fc0;
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
                    /* try { // try from 008ac3ac to 008ac3bf has its CatchHandler @ 008aca18 */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1b0);
  local_100 = CONCAT44(local_100._4_4_,0x3f800000);
  local_1390[0] = 0xffffffff;
  uStack_108 = 0;
  local_110 = (void *)0x0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_1388 = &local_1b0;
  facebook::react::RawProps::facebook::react::RawProps::parse(&local_f8,this + 0x38);
  memset(local_1310,0,0x8a0);
  local_a70[0] = 5;
  local_a58 = 0;
  local_1330 = *(undefined **)(PTR_VTT_0099f1b8 + 0x20);
  local_1310[0] = 5;
  uStack_1318 = 0;
  local_1320 = 0;
  uStack_1328 = 0;
  local_a50 = 0;
  uStack_a48 = 0x3f800000;
  uStack_a60 = 0;
  local_a68 = 0;
  uStack_1300 = 0;
  local_1308 = 0;
  uStack_12f0 = 0;
  local_12f8 = 0;
  local_12e8 = 0x3f800000;
  folly::dynamic::folly::dynamic::destroy(local_a70);
  local_12dc = 0;
  local_1281 = 0;
  uStack_da0 = _UNK_00488920;
  local_da8 = _DAT_00488918;
  local_12db = _s__00375408;
  uStack_e98 = _UNK_00371598;
  local_ea0 = _DAT_00371590;
  uStack_db0 = _UNK_00488910;
  local_db8 = _DAT_00488908;
  local_11c4 = 0;
  uStack_dc0 = _UNK_00488900;
  local_dc8 = _DAT_004888f8;
  uStack_dd0 = _UNK_004888f0;
  local_dd8 = _DAT_004888e8;
  uStack_d88 = 0;
  local_11bc = 0;
  uStack_11f0 = 0;
  local_11f8 = 0;
  uStack_11dc = 0;
  uStack_1200 = 0;
  local_1208 = 0;
  uStack_d90 = 0;
  uStack_d8a = 0;
  local_d98 = 0;
  local_12e0 = 0x10410710;
  local_1285 = 0x40004;
  uStack_11e4 = 0;
  uStack_11e0 = 0;
  uStack_11ec = 0;
  uStack_11e8 = 0;
  uStack_11d0 = 0;
  local_11d8 = 0;
  local_11c8 = 0x7fc00000;
  local_11c0 = 0x7fc00000;
  local_11b8 = 0x7fc00000;
  local_11b0 = 0x7fc00000;
  local_11a8 = 0x7fc00000;
  local_11a0 = 0x7fc00000;
  local_1198 = 0x7fc00000;
  local_1190 = 0x7fc00000;
  local_1188 = 0x7fc00000;
  local_1180 = 0x7fc00000;
  local_1178 = 0x7fc00000;
  local_1170 = 0x7fc00000;
  local_1168 = 0x7fc00000;
  local_1160 = 0x7fc00000;
  local_1158 = 0x7fc00000;
  local_1150 = 0x7fc00000;
  uStack_10ef = 0;
  uStack_10f0 = 0;
  uStack_10dc = 0;
  local_10e4 = 0;
  uStack_10cc = 0;
  uStack_10d4 = 0;
  uStack_10bc = 0;
  local_10c4 = 0;
  uStack_10ac = 0;
  uStack_10b4 = 0;
  uStack_109c = 0;
  local_10a4 = 0;
  uStack_108c = 0;
  uStack_1094 = 0;
  local_1087 = 0;
  uStack_1084 = 0;
  local_102c = 1;
  local_102b = 0;
  local_1026 = 0x23;
  local_fec = 0x3f800000;
  uStack_ed0 = 0;
  local_ed8 = 0;
  uStack_ec0 = 0;
  uStack_ec8 = 0;
  uStack_ee0 = 0;
  local_ee8 = 0;
  local_eb4 = 0;
  uStack_e80 = 0;
  local_e88 = 0;
  uStack_e70 = 0;
  uStack_e78 = 0;
  uStack_e60 = 0;
  local_e68 = 0;
  uStack_e50 = 0;
  uStack_e58 = 0;
  uStack_e40 = 0;
  local_e48 = 0;
  uStack_e30 = 0;
  uStack_e38 = 0;
  uStack_e20 = 0;
  local_e28 = 0;
  uStack_e10 = 0;
  uStack_e18 = 0;
  uStack_e00 = 0;
  local_e08 = 0;
  uStack_df0 = 0;
  uStack_df8 = 0;
  uStack_de0 = 0;
  local_de8 = 0;
  uStack_1277 = 0;
  uStack_12cb = 0;
  local_12d3 = 0;
  uStack_12bb = 0;
  local_12c3 = 0;
  uStack_12ab = 0;
  local_12b3 = 0;
  uStack_129b = 0;
  local_12a3 = 0;
  uStack_128d = 0;
  uStack_1295 = 0;
  uStack_1293 = 0;
  local_1279 = 0;
  uStack_1278 = 0;
  uStack_1268 = 0;
  uStack_1270 = 0;
  local_1258 = 0;
  uStack_1260 = 0;
  local_1248 = 0;
  uStack_1250 = 0;
  local_1238 = 0;
  uStack_1240 = 0;
  local_1228 = 0;
  uStack_1230 = 0;
  uStack_1218 = 0;
  uStack_1220 = 0;
  local_1210 = 0;
  local_11b4 = 0;
  local_11ac = 0;
  local_11a4 = 0;
  local_119c = 0;
  local_1194 = 0;
  local_118c = 0;
  local_1184 = 0;
  local_117c = 0;
  local_1174 = 0;
  local_116c = 0;
  local_1164 = 0;
  local_115c = 0;
  local_1154 = 0;
  local_114c = 0;
  local_1148 = 0;
  local_1144 = 0;
  local_1138 = 0;
  local_107c = 0;
  local_1078 = 0;
  local_1074 = 0;
  local_1070 = 0;
  local_106c = 0;
  local_1068 = 0;
  local_1050 = 0;
  uStack_1128 = 0;
  local_1130 = 0;
  uStack_1118 = 0;
  uStack_1120 = 0;
  uStack_1108 = 0;
  local_1110 = 0;
  uStack_10f8 = 0;
  local_10f7 = 0;
  uStack_1100 = 0;
  uStack_1040 = 0;
  local_1048 = 0;
  local_1038 = 0;
  local_1030 = 0;
  local_1027 = 0;
  uStack_1018 = 0;
  local_1020 = 0;
  uStack_1008 = 0;
  uStack_1010 = 0;
  uStack_ff8 = 0;
  uStack_ff1 = 0;
  local_1000 = 0;
  local_fe4 = 0;
  local_fdc = 0;
  local_fd8 = 0;
  local_fd0 = 0;
  local_fcc = 0;
  local_fc4 = 0;
  local_fc0 = 0;
  local_fb8 = 0;
  local_fb4 = 0;
  local_fac = 0;
  local_fa8 = 0;
  local_fa0 = 0;
  local_f9c = 0;
  local_f94 = 0;
  local_f90 = 0;
  local_f88 = 0;
  local_f84 = 0;
  local_f7c = 0;
  local_f78 = 0;
  local_f70 = 0;
  local_f6c = 0;
  local_f64 = 0;
  local_f60 = 0;
  local_f58 = 0;
  local_f54 = 0;
  local_f4c = 0;
  local_f48 = 0;
  local_f44 = 0;
  local_f40 = 0;
  local_f3c = 0;
  local_f38 = 0;
  local_f34 = 0;
  local_f30 = 0;
  local_f2c = 0;
  local_f28 = 0;
  local_f24 = 0;
  local_f20 = 0;
  local_f1c = 0;
  local_f18 = 0;
  local_f14 = 0;
  local_f10 = 0;
  local_f0c = 0;
  local_f08 = 0;
  local_f04 = 0;
  local_f00 = 0;
  local_efc = 0;
  local_ef8 = 0;
  local_ef4 = 0;
  local_ef0 = 0;
  local_eec = 0;
  local_ea8 = 0;
  local_eb8 = 0;
  local_eac = 0;
  local_e90 = 0;
  local_d80 = 0;
  local_d7c = 0;
  local_d78 = 0;
  local_d60 = 0;
  uStack_d6c = 0;
  local_d74 = 0;
  local_d64 = 0;
  local_d58 = 0x101;
  local_d56 = 0;
  local_d54 = 0;
  local_d50 = 0;
  local_cf0 = 0;
  local_ce8 = 0;
  local_c88 = 0;
  local_c78 = 0;
  local_c74 = 0;
  local_c70 = 0;
  local_c6c = 0;
  local_c68 = 0;
  local_c64 = 0;
  local_c60 = 0;
  local_c5c = 0;
  local_c58 = 0;
  local_c54 = 0;
  local_c7c = 0;
  local_c80 = 0;
  local_1330 = PTR_vtable_0099f1b0 + 0x20;
  local_c40 = 0;
  uStack_a80 = 0;
  local_a88 = 0;
  uStack_ba0 = 0;
  uStack_b80 = 0;
  local_b88 = 0;
  uStack_b70 = 0;
  uStack_b78 = 0;
  uStack_b90 = 0;
  local_b98 = 0;
  uStack_c48 = 0;
  local_c50 = 0;
  local_c38 = 0x3f800000;
  local_b60 = 0;
  local_b38 = 0;
  local_b30 = 0;
  local_b08 = 0;
  local_b00 = 0;
  local_ad8 = 0;
  local_ad0 = 0;
  local_a78 = 0;
  uStack_c28 = 0;
  local_c30 = 0;
  uStack_c18 = 0;
  local_c20 = 0;
  uStack_c08 = 0;
  local_c10 = 0;
  uStack_bf8 = 0;
  local_c00 = 0;
  uStack_be8 = 0;
  local_bf0 = 0;
  uStack_bd8 = 0;
  local_be0 = 0;
  uStack_bc8 = 0;
  local_bd0 = 0;
  uStack_bb8 = 0;
  local_bc0 = 0;
  uStack_ba8 = 0;
  uStack_ba3 = 0;
  local_bb0 = 0;
  local_b68 = 0;
  uStack_aa0 = 0;
  local_aa8 = 0;
  local_a90 = 0;
  local_a98 = 0;
                    /* try { // try from 008ac82c to 008ac83f has its CatchHandler @ 008aca18 */
  facebook::react::RNSVGLinearGradientProps::RNSVGLinearGradientProps
            ((RNSVGLinearGradientProps *)local_a70,(PropsParserContext *)local_1390,
             (RNSVGLinearGradientProps *)&local_1330,(RawProps *)&local_f8);
  FUN_008ad4dc(local_a70);
  FUN_008ad4dc(&local_1330);
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
                    /* try { // try from 008ac944 to 008ac94f has its CatchHandler @ 008aca1c */
        (*(code *)(&PTR_FUN_0098f088)[*(uint *)((long)pvVar3 + -8)])
                  (&local_1330,(void *)((long)pvVar3 + -0x38));
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
  if (local_1350 != (void *)0x0) {
    pvStack_1348 = local_1350;
    operator_delete(local_1350);
  }
  if (pvStack_1368 != (void *)0x0) {
    local_1360 = pvStack_1368;
    operator_delete(pvStack_1368);
  }
  if (local_1380 != (void *)0x0) {
    pvStack_1378 = local_1380;
    operator_delete(local_1380);
  }
  *param_1 = this;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008aca20  FUN_008aca20 =====

void FUN_008aca20(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 008aca44  FUN_008aca44 =====

undefined * FUN_008aca44(void)

{
  return PTR_RNSVGLinearGradientComponentName_0099f1a8;
}


// ===== 008aca50  FUN_008aca50 =====

undefined * FUN_008aca50(void)

{
  return PTR_RNSVGLinearGradientComponentName_0099f1a8;
}


// ===== 008aca5c  FUN_008aca5c =====

undefined8 FUN_008aca5c(void)

{
  return 0x61;
}


// ===== 008aca64  FUN_008aca64 =====

void FUN_008aca64(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

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
  *puVar4 = &PTR_FUN_0099a050;
                    /* try { // try from 008acad0 to 008acadf has its CatchHandler @ 008acb44 */
  facebook::react::RNSVGLayoutableShadowNode::RNSVGLayoutableShadowNode
            (pRVar1,param_3,param_4,uVar3);
  lVar5 = *param_2;
  puVar4[3] = &PTR_FUN_0099a0a0;
                    /* try { // try from 008acaf8 to 008acb03 has its CatchHandler @ 008acb34 */
  (**(code **)(lVar5 + 0x60))(param_2,pRVar1);
  *param_1 = pRVar1;
  param_1[1] = puVar4;
  if (*(long *)(lVar2 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008acb74  FUN_008acb74 =====

void FUN_008acb74(undefined8 *param_1,long *param_2,ShadowNode *param_3,ShadowNodeFragment *param_4)

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
  *plVar3 = (long)&PTR_FUN_0099a050;
                    /* try { // try from 008acbcc to 008acbdb has its CatchHandler @ 008acca8 */
  facebook::react::RNSVGLayoutableShadowNode::RNSVGLayoutableShadowNode(pRVar1,param_3,param_4);
  plVar3[3] = (long)&PTR_FUN_0099a0a0;
  local_68 = pRVar1;
  local_60 = plVar3;
                    /* try { // try from 008acbec to 008acbfb has its CatchHandler @ 008accc0 */
  facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::
  completeClone(pRVar1,param_3,param_4);
  local_78 = pRVar1;
  local_70 = plVar3;
  FUN_00757d00(1,plVar3 + 1);
                    /* try { // try from 008acc0c to 008acc1b has its CatchHandler @ 008acc98 */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_78);
  plVar3 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar4 = FUN_00757990(0xffffffffffffffff,local_70 + 1), lVar4 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pRVar1 = local_68;
                    /* try { // try from 008acc58 to 008acc63 has its CatchHandler @ 008accc0 */
  (**(code **)(*param_2 + 0x60))(param_2,local_68);
  *param_1 = pRVar1;
  param_1[1] = local_60;
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008acce8  FUN_008acce8 =====

void FUN_008acce8(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x008accf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 008accfc  FUN_008accfc =====

void FUN_008accfc(undefined8 *param_1,long param_2,PropsParserContext *param_3,long *param_4,
                 RawProps *param_5)

{
  RNSVGLinearGradientProps *this;
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
  RNSVGLinearGradientProps *pRVar12;
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
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGLinearGradientComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_24RNSVGLinearGradientPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec80
         & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGLinearGradientComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_24RNSVGLinearGradientPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec80
                                   ), iVar6 != 0)) {
                    /* try { // try from 008ad130 to 008ad133 has its CatchHandler @ 008ad160 */
      FUN_008ad8ac();
      __cxa_atexit(FUN_008ad85c,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGLinearGradientComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_24RNSVGLinearGradientPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec78
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGLinearGradientComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_24RNSVGLinearGradientPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec80
                         );
    }
    lVar11 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGLinearGradientComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_24RNSVGLinearGradientPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec78
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGLinearGradientComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_24RNSVGLinearGradientPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec78
    ;
    param_1[1] = lVar11;
    if (lVar11 != 0) {
      FUN_00757d00(1,lVar11 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    pRVar12 = (RNSVGLinearGradientProps *)*param_4;
    if (pRVar12 == (RNSVGLinearGradientProps *)0x0) {
      if (((*
            PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGLinearGradientComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_24RNSVGLinearGradientPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec80
           & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGLinearGradientComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_24RNSVGLinearGradientPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec80
                                     ), iVar6 != 0)) {
                    /* try { // try from 008ad0b0 to 008ad0b3 has its CatchHandler @ 008ad178 */
        FUN_008ad8ac();
        __cxa_atexit(FUN_008ad85c,
                     PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGLinearGradientComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_24RNSVGLinearGradientPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec78
                     ,&PTR_LOOP_008d5d30);
        __cxa_guard_release(
                           PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGLinearGradientComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_24RNSVGLinearGradientPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec80
                           );
      }
      pRVar12 = *(RNSVGLinearGradientProps **)
                 PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGLinearGradientComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_24RNSVGLinearGradientPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec78
      ;
    }
    plVar8 = (long *)operator_new(0x8d8);
    this = (RNSVGLinearGradientProps *)(plVar8 + 3);
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = (long)&PTR_FUN_0099a1b8;
                    /* try { // try from 008acddc to 008acdef has its CatchHandler @ 008ad1ec */
    facebook::react::RNSVGLinearGradientProps::RNSVGLinearGradientProps
              (this,param_3,pRVar12,param_5);
                    /* try { // try from 008acdf4 to 008ace07 has its CatchHandler @ 008ad204 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if ((((uVar7 & 1) == 0) ||
        (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar7 & 1) == 0)) ||
       (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
                enablePropsUpdateReconciliationAndroid(), (uVar7 & 1) == 0)) {
LAB_008ace30:
      FUN_00757d00(1,plVar8 + 1);
      if (*param_4 == 0) {
        if (((*
              PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGLinearGradientComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_24RNSVGLinearGradientPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec80
             & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(
                                       PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGLinearGradientComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_24RNSVGLinearGradientPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec80
                                       ), iVar6 != 0)) {
                    /* try { // try from 008ad0f0 to 008ad0f3 has its CatchHandler @ 008ad164 */
          FUN_008ad8ac();
          __cxa_atexit(FUN_008ad85c,
                       PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGLinearGradientComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_24RNSVGLinearGradientPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec78
                       ,&PTR_LOOP_008d5d30);
          __cxa_guard_release(
                             PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGLinearGradientComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_24RNSVGLinearGradientPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec80
                             );
        }
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 008ace98 to 008aceab has its CatchHandler @ 008ad190 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*(undefined8 *)
                         PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGLinearGradientComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_24RNSVGLinearGradientPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec78
                   ,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
LAB_008acee4:
          (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
        }
        else if (local_b0 != (dynamic *)0x0) {
          lVar11 = 5;
          pdVar10 = local_b0;
          goto LAB_008acee4;
        }
        if (plVar8 != (long *)0x0) goto LAB_008acef8;
      }
      else {
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 008ace4c to 008ace5f has its CatchHandler @ 008ad1b8 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*param_4,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
        }
        else {
          if (local_b0 == (dynamic *)0x0) goto LAB_008acef8;
          lVar11 = 5;
          pdVar10 = local_b0;
        }
        (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
LAB_008acef8:
        lVar11 = FUN_00757990(0xffffffffffffffff,plVar8 + 1);
        if (lVar11 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 008ace14 to 008ace1f has its CatchHandler @ 008ad18c */
      pcVar9 = (char *)(**(code **)(*(long *)this + 0x10))(this);
      iVar6 = strcmp(PTR_RNSVGLinearGradientComponentName_0099f1a8,pcVar9);
      if (iVar6 != 0) goto LAB_008ace30;
      bVar3 = false;
    }
                    /* try { // try from 008acf24 to 008acf27 has its CatchHandler @ 008ad204 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar7 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 008acf34 to 008acf4f has its CatchHandler @ 008ad1b4 */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(plVar8 + 7));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 008ad090 to 008ad09f has its CatchHandler @ 008ad1ac */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_008ad250;
      }
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (*(int *)(plVar4 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 008ad070 to 008ad07f has its CatchHandler @ 008ad210 */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_008ad250;
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
                    /* try { // try from 008acfd0 to 008acfdb has its CatchHandler @ 008ad218 */
        folly::dynamic::dynamic(local_d0,(dynamic *)(plVar4 + 8));
        local_a0 = 0;
                    /* try { // try from 008acfe0 to 008acff7 has its CatchHandler @ 008ad21c */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (this,param_3,uVar1,pcVar9,local_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 008ad008 to 008ad013 has its CatchHandler @ 008ad20c */
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
LAB_008ad250:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008ad254  FUN_008ad254 =====

void FUN_008ad254(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 008ad25c  FUN_008ad25c =====

void FUN_008ad25c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 008ad264  FUN_008ad264 =====

void FUN_008ad264(undefined8 *param_1,long param_2,long param_3)

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
                    /* try { // try from 008ad2a8 to 008ad2af has its CatchHandler @ 008ad4b0 */
  plVar6 = (long *)operator_new(0x68);
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&PTR_FUN_00992a08;
                    /* try { // try from 008ad2c8 to 008ad2d3 has its CatchHandler @ 008ad498 */
  local_78 = FUN_008707fc(plVar6 + 3,&local_58,param_2 + 8);
  local_70 = plVar6;
  if ((local_50 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,local_50 + 1), lVar7 == 0)) {
    (**(code **)(*local_50 + 0x10))(local_50);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 008ad308 to 008ad30f has its CatchHandler @ 008ad488 */
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
                    /* try { // try from 008ad35c to 008ad373 has its CatchHandler @ 008ad458 */
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
                    /* try { // try from 008ad3c8 to 008ad3d3 has its CatchHandler @ 008ad438 */
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


// ===== 008ad4d8  FUN_008ad4d8 =====

void FUN_008ad4d8(void)

{
  return;
}


// ===== 008ad4dc  FUN_008ad4dc =====

/* WARNING: Type propagation algorithm not settling */

void FUN_008ad4dc(long param_1)

{
  byte bVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(param_1 + 0x8a8);
  if (pvVar2 != (void *)0x0) {
    *(void **)(param_1 + 0x8b0) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(param_1 + 0x888);
  if (pvVar2 != (void *)0x0) {
    *(void **)(param_1 + 0x890) = pvVar2;
    operator_delete(pvVar2);
  }
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x858);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x828);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x7f8);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x7c8);
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
  FUN_0078917c(param_1,PTR_VTT_0099f1b8 + 8);
  return;
}


// ===== 008ad614  FUN_008ad614 =====

void FUN_008ad614(long param_1)

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


// ===== 008ad664  FUN_008ad664 =====

void FUN_008ad664(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099a050;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008ad674  FUN_008ad674 =====

void FUN_008ad674(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099a050;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008ad6a4  FUN_008ad6a4 =====

void FUN_008ad6a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x008ad6ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 008ad6b0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008ad6b4  FUN_008ad6b4 =====

void FUN_008ad6b4(long *param_1)

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


// ===== 008ad774  FUN_008ad774 =====

void FUN_008ad774(long param_1)

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


// ===== 008ad7dc  FUN_008ad7dc =====

bool FUN_008ad7dc(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 008ad7f4  FUN_008ad7f4 =====

bool FUN_008ad7f4(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 008ad80c  FUN_008ad80c =====

void FUN_008ad80c(long param_1)

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


// ===== 008ad85c  FUN_008ad85c =====

void FUN_008ad85c(long param_1)

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


// ===== 008ad8ac  FUN_008ad8ac =====

void FUN_008ad8ac(void)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x8d8);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_0099a168;
  memset(__s,0,0x8c0);
                    /* try { // try from 008ad8e8 to 008ad8fb has its CatchHandler @ 008ad9ec */
  FUN_00788b10(__s,PTR_VTT_0099f1b8 + 0x10);
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
  puVar1 = PTR_vtable_0099f1b0;
  *(undefined4 *)(puVar2 + 0xd9) = 0;
  *(undefined2 *)((long)puVar2 + 0x6cc) = 0;
  puVar2[0xe1] = 0;
  puVar2[3] = puVar1 + 0x20;
  *(undefined4 *)(puVar2 + 0xe2) = 0x3f800000;
  puVar2[0xe0] = 0;
  puVar2[0xdf] = 0;
  puVar2[0xfd] = 0;
  *(undefined4 *)(puVar2 + 0x102) = 0;
  puVar2[0x103] = 0;
  *(undefined4 *)(puVar2 + 0x108) = 0;
  puVar2[0x109] = 0;
  *(undefined4 *)(puVar2 + 0x10e) = 0;
  puVar2[0x10f] = 0;
  puVar2[0x11a] = 0;
  puVar2[0x119] = 0;
  puVar2[0x118] = 0;
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
  *(undefined4 *)(puVar2 + 0xfc) = 0;
  puVar2[0xfb] = 0;
  puVar2[0xfa] = 0;
  puVar2[0xf9] = 0;
  puVar2[0xf8] = 0;
  puVar2[0xf7] = 0;
  puVar2[0xf6] = 0;
  puVar2[0x115] = 0;
  puVar2[0x114] = 0;
  *(undefined4 *)(puVar2 + 0x117) = 0;
  puVar1 = 
  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGLinearGradientComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_24RNSVGLinearGradientPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec78
  ;
  puVar2[0x116] = 0;
  *(undefined8 **)puVar1 = __s;
  *(undefined8 **)(puVar1 + 8) = puVar2;
  return;
}


// ===== 008ada08  FUN_008ada08 =====

void FUN_008ada08(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099a168;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008ada18  FUN_008ada18 =====

void FUN_008ada18(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099a168;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008ada48  FUN_008ada48 =====

void FUN_008ada48(long param_1)

{
  FUN_008ad4dc(param_1 + 0x18);
  return;
}


// ===== 008ada50  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008ada54  FUN_008ada54 =====

void FUN_008ada54(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099a1b8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008ada64  FUN_008ada64 =====

void FUN_008ada64(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099a1b8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008ada94  FUN_008ada94 =====

void FUN_008ada94(long param_1)

{
  FUN_008ad4dc(param_1 + 0x18);
  return;
}


// ===== 008ada9c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008adaa0  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_23RNSVGConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGLineComponentNameEEEENS0_14RNSVGLinePropsEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENS8_14default_deleteISB_EEEERKNS0_29ComponentDescriptorParametersE =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_23RNSVGConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGLineComponentNameEEEENS0_14RNSVGLinePropsEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENS8_14default_deleteISB_EEEERKNS0_29ComponentDescriptorParametersE
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
                    /* try { // try from 008adaf4 to 008adaff has its CatchHandler @ 008ae1e8 */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_1550);
  local_f8 = 0;
  *(undefined ***)this = &PTR_FUN_0099a208;
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
                    /* try { // try from 008adb70 to 008adb83 has its CatchHandler @ 008ae218 */
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
  local_1500 = *(undefined **)(PTR_VTT_0099f1d0 + 0x20);
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
  local_1500 = PTR_vtable_0099f1c8 + 0x20;
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
                    /* try { // try from 008ae028 to 008ae03b has its CatchHandler @ 008ae218 */
  facebook::react::RNSVGLineProps::RNSVGLineProps
            ((RNSVGLineProps *)local_b58,(PropsParserContext *)local_1560,
             (RNSVGLineProps *)&local_1500,(RawProps *)&local_f8);
  FUN_008aecdc(local_b58);
  FUN_008aecdc(&local_1500);
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
                    /* try { // try from 008ae140 to 008ae14b has its CatchHandler @ 008ae21c */
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


// ===== 008ae220  FUN_008ae220 =====

void FUN_008ae220(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 008ae244  FUN_008ae244 =====

undefined * FUN_008ae244(void)

{
  return PTR_RNSVGLineComponentName_0099f1c0;
}


// ===== 008ae250  FUN_008ae250 =====

undefined * FUN_008ae250(void)

{
  return PTR_RNSVGLineComponentName_0099f1c0;
}


// ===== 008ae25c  FUN_008ae25c =====

undefined8 FUN_008ae25c(void)

{
  return 0x61;
}


// ===== 008ae264  FUN_008ae264 =====

void FUN_008ae264(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

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
  *puVar4 = &PTR_FUN_0099a298;
                    /* try { // try from 008ae2d0 to 008ae2df has its CatchHandler @ 008ae344 */
  facebook::react::RNSVGLayoutableShadowNode::RNSVGLayoutableShadowNode
            (pRVar1,param_3,param_4,uVar3);
  lVar5 = *param_2;
  puVar4[3] = &PTR_FUN_0099a2e8;
                    /* try { // try from 008ae2f8 to 008ae303 has its CatchHandler @ 008ae334 */
  (**(code **)(lVar5 + 0x60))(param_2,pRVar1);
  *param_1 = pRVar1;
  param_1[1] = puVar4;
  if (*(long *)(lVar2 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008ae374  FUN_008ae374 =====

void FUN_008ae374(undefined8 *param_1,long *param_2,ShadowNode *param_3,ShadowNodeFragment *param_4)

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
  *plVar3 = (long)&PTR_FUN_0099a298;
                    /* try { // try from 008ae3cc to 008ae3db has its CatchHandler @ 008ae4a8 */
  facebook::react::RNSVGLayoutableShadowNode::RNSVGLayoutableShadowNode(pRVar1,param_3,param_4);
  plVar3[3] = (long)&PTR_FUN_0099a2e8;
  local_68 = pRVar1;
  local_60 = plVar3;
                    /* try { // try from 008ae3ec to 008ae3fb has its CatchHandler @ 008ae4c0 */
  facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::
  completeClone(pRVar1,param_3,param_4);
  local_78 = pRVar1;
  local_70 = plVar3;
  FUN_00757d00(1,plVar3 + 1);
                    /* try { // try from 008ae40c to 008ae41b has its CatchHandler @ 008ae498 */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_78);
  plVar3 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar4 = FUN_00757990(0xffffffffffffffff,local_70 + 1), lVar4 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pRVar1 = local_68;
                    /* try { // try from 008ae458 to 008ae463 has its CatchHandler @ 008ae4c0 */
  (**(code **)(*param_2 + 0x60))(param_2,local_68);
  *param_1 = pRVar1;
  param_1[1] = local_60;
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008ae4e8  FUN_008ae4e8 =====

void FUN_008ae4e8(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x008ae4f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 008ae4fc  FUN_008ae4fc =====

void FUN_008ae4fc(undefined8 *param_1,long param_2,PropsParserContext *param_3,long *param_4,
                 RawProps *param_5)

{
  RNSVGLineProps *this;
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
  RNSVGLineProps *pRVar12;
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
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGLineComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGLinePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec90
         & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGLineComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGLinePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec90
                                   ), iVar6 != 0)) {
                    /* try { // try from 008ae930 to 008ae933 has its CatchHandler @ 008ae960 */
      FUN_008af0c0();
      __cxa_atexit(FUN_008af25c,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGLineComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGLinePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec88
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGLineComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGLinePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec90
                         );
    }
    lVar11 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGLineComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGLinePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec88
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGLineComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGLinePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec88
    ;
    param_1[1] = lVar11;
    if (lVar11 != 0) {
      FUN_00757d00(1,lVar11 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    pRVar12 = (RNSVGLineProps *)*param_4;
    if (pRVar12 == (RNSVGLineProps *)0x0) {
      if (((*
            PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGLineComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGLinePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec90
           & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGLineComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGLinePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec90
                                     ), iVar6 != 0)) {
                    /* try { // try from 008ae8b0 to 008ae8b3 has its CatchHandler @ 008ae978 */
        FUN_008af0c0();
        __cxa_atexit(FUN_008af25c,
                     PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGLineComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGLinePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec88
                     ,&PTR_LOOP_008d5d30);
        __cxa_guard_release(
                           PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGLineComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGLinePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec90
                           );
      }
      pRVar12 = *(RNSVGLineProps **)
                 PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGLineComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGLinePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec88
      ;
    }
    plVar8 = (long *)operator_new(0x9c0);
    this = (RNSVGLineProps *)(plVar8 + 3);
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = (long)&PTR_FUN_0099a400;
                    /* try { // try from 008ae5dc to 008ae5ef has its CatchHandler @ 008ae9ec */
    facebook::react::RNSVGLineProps::RNSVGLineProps(this,param_3,pRVar12,param_5);
                    /* try { // try from 008ae5f4 to 008ae607 has its CatchHandler @ 008aea04 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if ((((uVar7 & 1) == 0) ||
        (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar7 & 1) == 0)) ||
       (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
                enablePropsUpdateReconciliationAndroid(), (uVar7 & 1) == 0)) {
LAB_008ae630:
      FUN_00757d00(1,plVar8 + 1);
      if (*param_4 == 0) {
        if (((*
              PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGLineComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGLinePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec90
             & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(
                                       PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGLineComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGLinePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec90
                                       ), iVar6 != 0)) {
                    /* try { // try from 008ae8f0 to 008ae8f3 has its CatchHandler @ 008ae964 */
          FUN_008af0c0();
          __cxa_atexit(FUN_008af25c,
                       PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGLineComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGLinePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec88
                       ,&PTR_LOOP_008d5d30);
          __cxa_guard_release(
                             PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGLineComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGLinePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec90
                             );
        }
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 008ae698 to 008ae6ab has its CatchHandler @ 008ae990 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*(undefined8 *)
                         PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGLineComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGLinePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec88
                   ,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
LAB_008ae6e4:
          (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
        }
        else if (local_b0 != (dynamic *)0x0) {
          lVar11 = 5;
          pdVar10 = local_b0;
          goto LAB_008ae6e4;
        }
        if (plVar8 != (long *)0x0) goto LAB_008ae6f8;
      }
      else {
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 008ae64c to 008ae65f has its CatchHandler @ 008ae9b8 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*param_4,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
        }
        else {
          if (local_b0 == (dynamic *)0x0) goto LAB_008ae6f8;
          lVar11 = 5;
          pdVar10 = local_b0;
        }
        (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
LAB_008ae6f8:
        lVar11 = FUN_00757990(0xffffffffffffffff,plVar8 + 1);
        if (lVar11 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 008ae614 to 008ae61f has its CatchHandler @ 008ae98c */
      pcVar9 = (char *)(**(code **)(*(long *)this + 0x10))(this);
      iVar6 = strcmp(PTR_RNSVGLineComponentName_0099f1c0,pcVar9);
      if (iVar6 != 0) goto LAB_008ae630;
      bVar3 = false;
    }
                    /* try { // try from 008ae724 to 008ae727 has its CatchHandler @ 008aea04 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar7 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 008ae734 to 008ae74f has its CatchHandler @ 008ae9b4 */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(plVar8 + 7));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 008ae890 to 008ae89f has its CatchHandler @ 008ae9ac */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_008aea50;
      }
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (*(int *)(plVar4 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 008ae870 to 008ae87f has its CatchHandler @ 008aea10 */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_008aea50;
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
                    /* try { // try from 008ae7d0 to 008ae7db has its CatchHandler @ 008aea18 */
        folly::dynamic::dynamic(local_d0,(dynamic *)(plVar4 + 8));
        local_a0 = 0;
                    /* try { // try from 008ae7e0 to 008ae7f7 has its CatchHandler @ 008aea1c */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (this,param_3,uVar1,pcVar9,local_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 008ae808 to 008ae813 has its CatchHandler @ 008aea0c */
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
LAB_008aea50:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008aea54  FUN_008aea54 =====

void FUN_008aea54(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 008aea5c  FUN_008aea5c =====

void FUN_008aea5c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 008aea64  FUN_008aea64 =====

void FUN_008aea64(undefined8 *param_1,long param_2,long param_3)

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
                    /* try { // try from 008aeaa8 to 008aeaaf has its CatchHandler @ 008aecb0 */
  plVar6 = (long *)operator_new(0x68);
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&PTR_FUN_00992a08;
                    /* try { // try from 008aeac8 to 008aead3 has its CatchHandler @ 008aec98 */
  local_78 = FUN_008707fc(plVar6 + 3,&local_58,param_2 + 8);
  local_70 = plVar6;
  if ((local_50 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,local_50 + 1), lVar7 == 0)) {
    (**(code **)(*local_50 + 0x10))(local_50);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 008aeb08 to 008aeb0f has its CatchHandler @ 008aec88 */
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
                    /* try { // try from 008aeb5c to 008aeb73 has its CatchHandler @ 008aec58 */
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
                    /* try { // try from 008aebc8 to 008aebd3 has its CatchHandler @ 008aec38 */
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


// ===== 008aecd8  FUN_008aecd8 =====

void FUN_008aecd8(void)

{
  return;
}


// ===== 008aecdc  FUN_008aecdc =====

/* WARNING: Type propagation algorithm not settling */

void FUN_008aecdc(long param_1)

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
  FUN_0078917c(param_1,PTR_VTT_0099f1d0 + 8);
  return;
}


// ===== 008aee78  FUN_008aee78 =====

void FUN_008aee78(long param_1)

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


// ===== 008aeec8  FUN_008aeec8 =====

void FUN_008aeec8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099a298;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008aeed8  FUN_008aeed8 =====

void FUN_008aeed8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099a298;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008aef08  FUN_008aef08 =====

void FUN_008aef08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x008aef10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 008aef14  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008aef18  FUN_008aef18 =====

void FUN_008aef18(long *param_1)

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


// ===== 008aefd8  FUN_008aefd8 =====

void FUN_008aefd8(long param_1)

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


// ===== 008af040  FUN_008af040 =====

bool FUN_008af040(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 008af058  FUN_008af058 =====

bool FUN_008af058(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 008af070  FUN_008af070 =====

void FUN_008af070(long param_1)

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


// ===== 008af0c0  FUN_008af0c0 =====

void FUN_008af0c0(void)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x9c0);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_0099a3b0;
  memset(__s,0,0x9a8);
                    /* try { // try from 008af0fc to 008af10f has its CatchHandler @ 008af240 */
  FUN_00788b10(__s,PTR_VTT_0099f1d0 + 0x10);
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
  puVar1 = PTR_vtable_0099f1c8;
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
  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGLineComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGLinePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec88
  ;
  puVar2[0x11b] = 0;
  puVar2[0x11a] = 0;
  *(undefined8 **)puVar1 = __s;
  *(undefined8 **)(puVar1 + 8) = puVar2;
  return;
}


// ===== 008af25c  FUN_008af25c =====

void FUN_008af25c(long param_1)

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


// ===== 008af2ac  FUN_008af2ac =====

void FUN_008af2ac(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099a3b0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008af2bc  FUN_008af2bc =====

void FUN_008af2bc(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099a3b0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008af2ec  FUN_008af2ec =====

void FUN_008af2ec(long param_1)

{
  FUN_008aecdc(param_1 + 0x18);
  return;
}


// ===== 008af2f4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008af2f8  FUN_008af2f8 =====

void FUN_008af2f8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099a400;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008af308  FUN_008af308 =====

void FUN_008af308(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099a400;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008af338  FUN_008af338 =====

void FUN_008af338(long param_1)

{
  FUN_008aecdc(param_1 + 0x18);
  return;
}


// ===== 008af340  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008af344  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_23RNSVGConcreteShadowNodeIXadsoKcL_ZNS0_24RNSVGMarkerComponentNameEEEENS0_16RNSVGMarkerPropsEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENS8_14default_deleteISB_EEEERKNS0_29ComponentDescriptorParametersE =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_23RNSVGConcreteShadowNodeIXadsoKcL_ZNS0_24RNSVGMarkerComponentNameEEEENS0_16RNSVGMarkerPropsEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENS8_14default_deleteISB_EEEERKNS0_29ComponentDescriptorParametersE
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
  undefined4 local_1740 [2];
  undefined8 *local_1738;
  void *local_1730;
  void *pvStack_1728;
  undefined8 local_1720;
  void *pvStack_1718;
  void *local_1710;
  undefined8 uStack_1708;
  void *local_1700;
  void *pvStack_16f8;
  undefined8 uStack_16f0;
  undefined8 uStack_16e8;
  undefined *local_16e0;
  undefined8 uStack_16d8;
  undefined8 local_16d0;
  undefined8 uStack_16c8;
  undefined4 local_16c0 [2];
  undefined8 local_16b8;
  undefined8 uStack_16b0;
  undefined8 local_16a8;
  undefined8 uStack_16a0;
  undefined4 local_1698;
  undefined4 local_1690;
  undefined1 local_168c;
  undefined8 local_168b;
  undefined8 local_1683;
  undefined8 uStack_167b;
  undefined8 local_1673;
  undefined8 uStack_166b;
  undefined8 local_1663;
  undefined8 uStack_165b;
  undefined8 local_1653;
  undefined6 uStack_164b;
  undefined2 uStack_1645;
  undefined6 uStack_1643;
  undefined8 uStack_163d;
  undefined4 local_1635;
  undefined8 local_1631;
  undefined1 local_1629;
  undefined1 uStack_1628;
  undefined7 uStack_1627;
  undefined8 uStack_1620;
  undefined8 uStack_1618;
  undefined8 uStack_1610;
  undefined8 local_1608;
  undefined8 uStack_1600;
  undefined8 local_15f8;
  undefined8 uStack_15f0;
  undefined8 local_15e8;
  undefined8 uStack_15e0;
  undefined8 local_15d8;
  undefined8 uStack_15d0;
  undefined8 uStack_15c8;
  undefined8 local_15c0;
  undefined8 local_15b8;
  undefined8 uStack_15b0;
  undefined8 local_15a8;
  undefined4 uStack_15a0;
  undefined4 uStack_159c;
  undefined4 uStack_1598;
  undefined4 uStack_1594;
  undefined4 uStack_1590;
  undefined4 uStack_158c;
  undefined8 local_1588;
  undefined8 uStack_1580;
  undefined4 local_1578;
  undefined1 local_1574;
  undefined4 local_1570;
  undefined1 local_156c;
  undefined4 local_1568;
  undefined1 local_1564;
  undefined4 local_1560;
  undefined1 local_155c;
  undefined4 local_1558;
  undefined1 local_1554;
  undefined4 local_1550;
  undefined1 local_154c;
  undefined4 local_1548;
  undefined1 local_1544;
  undefined4 local_1540;
  undefined1 local_153c;
  undefined4 local_1538;
  undefined1 local_1534;
  undefined4 local_1530;
  undefined1 local_152c;
  undefined4 local_1528;
  undefined1 local_1524;
  undefined4 local_1520;
  undefined1 local_151c;
  undefined4 local_1518;
  undefined1 local_1514;
  undefined4 local_1510;
  undefined1 local_150c;
  undefined4 local_1508;
  undefined1 local_1504;
  undefined4 local_1500;
  undefined1 local_14fc;
  undefined1 local_14f8;
  undefined1 local_14f4;
  undefined1 local_14e8;
  undefined8 local_14e0;
  undefined8 uStack_14d8;
  undefined8 uStack_14d0;
  undefined8 uStack_14c8;
  undefined8 local_14c0;
  undefined8 uStack_14b8;
  undefined8 uStack_14b0;
  undefined1 uStack_14a8;
  undefined7 local_14a7;
  undefined1 uStack_14a0;
  undefined8 uStack_149f;
  undefined8 local_1494;
  undefined8 uStack_148c;
  undefined8 uStack_1484;
  undefined8 uStack_147c;
  undefined8 local_1474;
  undefined8 uStack_146c;
  undefined8 uStack_1464;
  undefined8 uStack_145c;
  undefined8 local_1454;
  undefined8 uStack_144c;
  undefined8 uStack_1444;
  undefined5 uStack_143c;
  undefined3 local_1437;
  undefined5 uStack_1434;
  undefined1 local_142c;
  undefined1 local_1428;
  undefined1 local_1424;
  undefined1 local_1420;
  undefined1 local_141c;
  undefined1 local_1418;
  undefined1 local_1400;
  undefined8 local_13f8;
  undefined8 uStack_13f0;
  undefined8 local_13e8;
  undefined4 local_13e0;
  undefined1 local_13dc;
  undefined4 local_13db;
  undefined1 local_13d7;
  undefined1 local_13d6;
  undefined8 local_13d0;
  undefined8 uStack_13c8;
  undefined8 uStack_13c0;
  undefined8 uStack_13b8;
  undefined8 local_13b0;
  undefined7 uStack_13a8;
  undefined4 uStack_13a1;
  undefined8 local_139c;
  undefined1 local_1394;
  undefined1 local_138c;
  undefined1 local_1388;
  undefined1 local_1380;
  undefined1 local_137c;
  undefined1 local_1374;
  undefined1 local_1370;
  undefined1 local_1368;
  undefined1 local_1364;
  undefined1 local_135c;
  undefined1 local_1358;
  undefined1 local_1350;
  undefined1 local_134c;
  undefined1 local_1344;
  undefined1 local_1340;
  undefined1 local_1338;
  undefined1 local_1334;
  undefined1 local_132c;
  undefined1 local_1328;
  undefined1 local_1320;
  undefined1 local_131c;
  undefined1 local_1314;
  undefined1 local_1310;
  undefined1 local_1308;
  undefined1 local_1304;
  undefined1 local_12fc;
  undefined1 local_12f8;
  undefined1 local_12f4;
  undefined1 local_12f0;
  undefined1 local_12ec;
  undefined1 local_12e8;
  undefined1 local_12e4;
  undefined1 local_12e0;
  undefined1 local_12dc;
  undefined1 local_12d8;
  undefined1 local_12d4;
  undefined1 local_12d0;
  undefined1 local_12cc;
  undefined1 local_12c8;
  undefined1 local_12c4;
  undefined1 local_12c0;
  undefined1 local_12bc;
  undefined1 local_12b8;
  undefined1 local_12b4;
  undefined1 local_12b0;
  undefined1 local_12ac;
  undefined1 local_12a8;
  undefined1 local_12a4;
  undefined1 local_12a0;
  undefined1 local_129c;
  undefined8 local_1298;
  undefined8 uStack_1290;
  undefined8 local_1288;
  undefined8 uStack_1280;
  undefined8 uStack_1278;
  undefined8 uStack_1270;
  undefined2 local_1268;
  undefined8 local_1264;
  undefined1 local_125c;
  undefined8 local_1258;
  undefined8 local_1250;
  undefined8 uStack_1248;
  undefined1 local_1240;
  undefined8 local_1238;
  undefined8 uStack_1230;
  undefined8 uStack_1228;
  undefined8 uStack_1220;
  undefined8 local_1218;
  undefined8 uStack_1210;
  undefined8 uStack_1208;
  undefined8 uStack_1200;
  undefined8 local_11f8;
  undefined8 uStack_11f0;
  undefined8 uStack_11e8;
  undefined8 uStack_11e0;
  undefined8 local_11d8;
  undefined8 uStack_11d0;
  undefined8 uStack_11c8;
  undefined8 uStack_11c0;
  undefined8 local_11b8;
  undefined8 uStack_11b0;
  undefined8 uStack_11a8;
  undefined8 uStack_11a0;
  undefined8 local_1198;
  undefined8 uStack_1190;
  undefined8 local_1188;
  undefined8 uStack_1180;
  undefined8 local_1178;
  undefined8 uStack_1170;
  undefined8 local_1168;
  undefined8 uStack_1160;
  undefined8 local_1158;
  undefined8 uStack_1150;
  undefined8 local_1148;
  undefined6 uStack_1140;
  undefined2 uStack_113a;
  undefined6 uStack_1138;
  undefined1 local_1130;
  undefined1 local_112c;
  undefined1 local_1128;
  undefined8 local_1124;
  undefined8 uStack_111c;
  undefined1 local_1114;
  undefined8 local_1110;
  undefined2 local_1108;
  undefined1 local_1106;
  undefined4 local_1104;
  undefined1 local_1100;
  undefined1 local_10a0;
  undefined1 local_1098;
  undefined1 local_1038;
  undefined4 local_1030;
  undefined2 local_102c;
  undefined1 local_1028;
  undefined1 local_1024;
  undefined1 local_1020;
  undefined1 local_101c;
  undefined1 local_1018;
  undefined1 local_1014;
  undefined1 local_1010;
  undefined1 local_100c;
  undefined1 local_1008;
  undefined1 local_1004;
  undefined8 local_1000;
  undefined8 uStack_ff8;
  undefined8 local_ff0;
  undefined4 local_fe8;
  undefined8 local_fe0;
  undefined8 uStack_fd8;
  undefined8 local_fd0;
  undefined8 uStack_fc8;
  undefined8 local_fc0;
  undefined8 uStack_fb8;
  undefined8 local_fb0;
  undefined8 uStack_fa8;
  undefined8 local_fa0;
  undefined8 uStack_f98;
  undefined8 local_f90;
  undefined8 uStack_f88;
  undefined8 local_f80;
  undefined8 uStack_f78;
  undefined8 local_f70;
  undefined8 uStack_f68;
  undefined8 local_f60;
  undefined5 uStack_f58;
  undefined3 uStack_f53;
  undefined5 uStack_f50;
  undefined8 local_f48;
  undefined8 uStack_f40;
  undefined8 local_f38;
  undefined8 uStack_f30;
  undefined8 uStack_f28;
  undefined8 uStack_f20;
  undefined4 local_f18;
  undefined4 local_f10;
  undefined8 local_f08;
  undefined8 local_ee0;
  undefined4 local_ed8;
  undefined8 local_ed0;
  undefined4 local_ea8;
  undefined4 local_ea0;
  undefined8 local_e98;
  undefined8 local_e70;
  undefined4 local_e68;
  undefined8 local_e60;
  undefined8 local_e38;
  undefined4 local_e30;
  undefined8 local_e28;
  undefined8 uStack_e20;
  undefined8 local_e18;
  undefined8 uStack_e10;
  undefined8 uStack_e08;
  undefined8 uStack_e00;
  undefined4 local_df8;
  undefined8 local_df0;
  undefined4 local_dc8;
  undefined8 local_dc0;
  undefined4 local_d98;
  undefined8 local_d90;
  undefined4 local_d68;
  undefined8 local_d60;
  undefined4 local_d38;
  undefined8 local_d30;
  undefined4 local_d08;
  undefined8 local_d00;
  undefined4 local_cd8;
  undefined8 local_cd0;
  undefined8 local_ca8;
  undefined8 uStack_ca0;
  undefined8 uStack_c98;
  undefined8 uStack_c90;
  undefined8 local_c88;
  undefined8 uStack_c80;
  undefined8 uStack_c78;
  undefined8 uStack_c70;
  undefined8 local_c68;
  undefined4 uStack_c60;
  undefined4 uStack_c5c;
  undefined4 uStack_c58;
  undefined8 uStack_c54;
  undefined4 local_c48 [2];
  undefined8 local_c40;
  undefined8 uStack_c38;
  undefined8 local_c30;
  undefined8 local_c28;
  undefined8 uStack_c20;
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
  pvStack_1718 = (void *)0x0;
  local_1720 = 0;
  uStack_1708 = 0;
  local_1710 = (void *)0x0;
  pvStack_16f8 = (void *)0x0;
  local_1700 = (void *)0x0;
  uStack_16e8 = 0;
  uStack_16f0 = 0;
  pvStack_1728 = (void *)0x0;
  local_1730 = (void *)0x0;
                    /* try { // try from 008af398 to 008af3a3 has its CatchHandler @ 008afab8 */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_1730);
  local_f8 = 0;
  *(undefined ***)this = &PTR_FUN_0099a450;
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
                    /* try { // try from 008af414 to 008af427 has its CatchHandler @ 008afae8 */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1b0);
  local_100 = CONCAT44(local_100._4_4_,0x3f800000);
  local_1740[0] = 0xffffffff;
  uStack_108 = 0;
  local_110 = (void *)0x0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_1738 = &local_1b0;
  facebook::react::RawProps::facebook::react::RawProps::parse(&local_f8,this + 0x38);
  memset(local_16c0,0,0xa78);
  local_c48[0] = 5;
  local_c30 = 0;
  local_16e0 = *(undefined **)(PTR_VTT_0099f1e8 + 0x20);
  local_16c0[0] = 5;
  uStack_16c8 = 0;
  local_16d0 = 0;
  local_c28 = 0;
  uStack_16d8 = 0;
  uStack_c20 = 0x3f800000;
  uStack_c38 = 0;
  local_c40 = 0;
  uStack_16b0 = 0;
  local_16b8 = 0;
  uStack_16a0 = 0;
  local_16a8 = 0;
  local_1698 = 0x3f800000;
  folly::dynamic::folly::dynamic::destroy(local_c48);
  local_1690 = 0x10410710;
  local_168c = 0;
  uStack_15a0 = 0;
  local_15a8 = 0;
  uStack_158c = 0;
  uStack_15b0 = 0;
  local_15b8 = 0;
  uStack_1627 = 0;
  uStack_167b = 0;
  local_1683 = 0;
  local_168b = _s__00375408;
  uStack_166b = 0;
  local_1673 = 0;
  uStack_1248 = _UNK_00371598;
  local_1250 = _DAT_00371590;
  uStack_165b = 0;
  local_1663 = 0;
  uStack_164b = 0;
  local_1653 = 0;
  uStack_1150 = _UNK_00488920;
  local_1158 = _DAT_00488918;
  uStack_1160 = _UNK_00488910;
  local_1168 = _DAT_00488908;
  local_1635 = 0x40004;
  uStack_1594 = 0;
  uStack_1590 = 0;
  uStack_159c = 0;
  uStack_1598 = 0;
  uStack_1580 = 0;
  local_1588 = 0;
  local_1578 = 0x7fc00000;
  local_1570 = 0x7fc00000;
  local_1568 = 0x7fc00000;
  local_1560 = 0x7fc00000;
  local_1558 = 0x7fc00000;
  local_1550 = 0x7fc00000;
  local_1548 = 0x7fc00000;
  local_1540 = 0x7fc00000;
  local_1538 = 0x7fc00000;
  local_1530 = 0x7fc00000;
  local_1528 = 0x7fc00000;
  local_1520 = 0x7fc00000;
  local_1518 = 0x7fc00000;
  local_1510 = 0x7fc00000;
  local_1508 = 0x7fc00000;
  local_1500 = 0x7fc00000;
  uStack_149f = 0;
  uStack_14a0 = 0;
  uStack_148c = 0;
  local_1494 = 0;
  uStack_147c = 0;
  uStack_1484 = 0;
  uStack_146c = 0;
  local_1474 = 0;
  uStack_145c = 0;
  uStack_1464 = 0;
  uStack_144c = 0;
  local_1454 = 0;
  uStack_143c = 0;
  uStack_1444 = 0;
  local_1437 = 0;
  uStack_1434 = 0;
  local_13dc = 1;
  local_13db = 0;
  local_13d6 = 0x23;
  local_139c = 0x3f800000;
  uStack_1280 = 0;
  local_1288 = 0;
  uStack_1270 = 0;
  uStack_1278 = 0;
  uStack_1290 = 0;
  local_1298 = 0;
  uStack_1170 = _UNK_00488900;
  local_1178 = _DAT_004888f8;
  local_1264 = 0;
  uStack_1180 = _UNK_004888f0;
  local_1188 = _DAT_004888e8;
  uStack_1230 = 0;
  local_1238 = 0;
  uStack_1220 = 0;
  uStack_1228 = 0;
  uStack_1210 = 0;
  local_1218 = 0;
  uStack_1200 = 0;
  uStack_1208 = 0;
  uStack_11f0 = 0;
  local_11f8 = 0;
  uStack_11e0 = 0;
  uStack_11e8 = 0;
  uStack_11d0 = 0;
  local_11d8 = 0;
  uStack_11c0 = 0;
  uStack_11c8 = 0;
  uStack_11b0 = 0;
  local_11b8 = 0;
  uStack_11a0 = 0;
  uStack_11a8 = 0;
  uStack_1190 = 0;
  local_1198 = 0;
  uStack_1138 = 0;
  uStack_1140 = 0;
  uStack_113a = 0;
  local_1148 = 0;
  uStack_163d = 0;
  uStack_1645 = 0;
  uStack_1643 = 0;
  local_1631 = 0;
  local_1629 = 0;
  uStack_1628 = 0;
  uStack_1618 = 0;
  uStack_1620 = 0;
  local_1608 = 0;
  uStack_1610 = 0;
  local_15f8 = 0;
  uStack_1600 = 0;
  local_15e8 = 0;
  uStack_15f0 = 0;
  local_15d8 = 0;
  uStack_15e0 = 0;
  uStack_15c8 = 0;
  uStack_15d0 = 0;
  local_15c0 = 0;
  local_1574 = 0;
  local_156c = 0;
  local_1564 = 0;
  local_155c = 0;
  local_1554 = 0;
  local_154c = 0;
  local_1544 = 0;
  local_153c = 0;
  local_1534 = 0;
  local_152c = 0;
  local_1524 = 0;
  local_151c = 0;
  local_1514 = 0;
  local_150c = 0;
  local_1504 = 0;
  local_14fc = 0;
  local_14f8 = 0;
  local_14f4 = 0;
  local_14e8 = 0;
  local_142c = 0;
  local_1428 = 0;
  local_1424 = 0;
  local_1420 = 0;
  local_141c = 0;
  local_1418 = 0;
  local_1400 = 0;
  uStack_14d8 = 0;
  local_14e0 = 0;
  uStack_14c8 = 0;
  uStack_14d0 = 0;
  uStack_14b8 = 0;
  local_14c0 = 0;
  uStack_14a8 = 0;
  local_14a7 = 0;
  uStack_14b0 = 0;
  uStack_13f0 = 0;
  local_13f8 = 0;
  local_13e8 = 0;
  local_13e0 = 0;
  local_13d7 = 0;
  uStack_13c8 = 0;
  local_13d0 = 0;
  uStack_13b8 = 0;
  uStack_13c0 = 0;
  uStack_13a8 = 0;
  uStack_13a1 = 0;
  local_13b0 = 0;
  local_1394 = 0;
  local_138c = 0;
  local_1388 = 0;
  local_1380 = 0;
  local_137c = 0;
  local_1374 = 0;
  local_1370 = 0;
  local_1368 = 0;
  local_1364 = 0;
  local_135c = 0;
  local_1358 = 0;
  local_1350 = 0;
  local_134c = 0;
  local_1344 = 0;
  local_1340 = 0;
  local_1338 = 0;
  local_1334 = 0;
  local_132c = 0;
  local_1328 = 0;
  local_1320 = 0;
  local_131c = 0;
  local_1314 = 0;
  local_1310 = 0;
  local_1308 = 0;
  local_1304 = 0;
  local_12fc = 0;
  local_12f8 = 0;
  local_12f4 = 0;
  local_12f0 = 0;
  local_12ec = 0;
  local_12e8 = 0;
  local_12e4 = 0;
  local_12e0 = 0;
  local_12dc = 0;
  local_12d8 = 0;
  local_12d4 = 0;
  local_12d0 = 0;
  local_12cc = 0;
  local_12c8 = 0;
  local_12c4 = 0;
  local_12c0 = 0;
  local_12bc = 0;
  local_12b8 = 0;
  local_12b4 = 0;
  local_12b0 = 0;
  local_12ac = 0;
  local_12a8 = 0;
  local_12a4 = 0;
  local_12a0 = 0;
  local_129c = 0;
  local_1258 = 0;
  local_1268 = 0;
  local_125c = 0;
  local_1240 = 0;
  local_1130 = 0;
  local_112c = 0;
  local_1128 = 0;
  local_1110 = 0;
  uStack_111c = 0;
  local_1124 = 0;
  local_1114 = 0;
  local_1108 = 0x101;
  local_1106 = 0;
  local_1104 = 0;
  local_1100 = 0;
  local_10a0 = 0;
  local_1098 = 0;
  local_1038 = 0;
  local_1028 = 0;
  local_1024 = 0;
  local_1020 = 0;
  local_101c = 0;
  local_1018 = 0;
  local_1014 = 0;
  local_1010 = 0;
  local_100c = 0;
  local_1008 = 0;
  local_1004 = 0;
  local_102c = 0;
  local_1030 = 0;
  local_16e0 = PTR_vtable_0099f1e0 + 0x20;
  local_ff0 = 0;
  uStack_f50 = 0;
  uStack_f30 = 0;
  local_f38 = 0;
  uStack_f20 = 0;
  uStack_f28 = 0;
  uStack_f40 = 0;
  local_f48 = 0;
  uStack_ff8 = 0;
  local_1000 = 0;
  local_ee0 = 0x13f800000;
  uStack_e10 = 0;
  local_e18 = 0;
  uStack_e00 = 0;
  uStack_e08 = 0;
  uStack_e20 = 0;
  local_e28 = 0;
  local_fe8 = 0x3f800000;
  local_f10 = 0;
  local_f08 = 0;
  uStack_fd8 = 0;
  local_fe0 = 0;
  uStack_fc8 = 0;
  local_fd0 = 0;
  uStack_fb8 = 0;
  local_fc0 = 0;
  uStack_fa8 = 0;
  local_fb0 = 0;
  uStack_f98 = 0;
  local_fa0 = 0;
  uStack_f88 = 0;
  local_f90 = 0;
  uStack_f78 = 0;
  local_f80 = 0;
  uStack_f68 = 0;
  local_f70 = 0;
  uStack_f58 = 0;
  uStack_f53 = 0;
  local_f60 = 0;
  local_f18 = 0;
  local_ed8 = 0;
  local_ed0 = 0;
  local_ea8 = 0x3f800000;
  local_ea0 = 0;
  local_e98 = 0;
  local_e70 = 0;
  local_e68 = 0;
  local_e60 = 0;
  local_e38 = 0;
  local_e30 = 0;
  local_df0 = 0;
  local_dc8 = 0;
  local_dc0 = 0;
  local_d98 = 0;
  local_d90 = 0;
  local_d68 = 0;
  local_d60 = 0;
  local_d38 = 0;
  local_d30 = 0;
  local_d08 = 0;
  local_d00 = 0;
  local_cd8 = 0;
  local_cd0 = 0;
  local_df8 = 0;
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
  uStack_c54 = 0;
  uStack_c5c = 0;
  uStack_c58 = 0;
                    /* try { // try from 008af8f8 to 008af90b has its CatchHandler @ 008afae8 */
  facebook::react::RNSVGMarkerProps::RNSVGMarkerProps
            ((RNSVGMarkerProps *)local_c48,(PropsParserContext *)local_1740,
             (RNSVGMarkerProps *)&local_16e0,(RawProps *)&local_f8);
  FUN_008b05ac(local_c48);
  FUN_008b05ac(&local_16e0);
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
                    /* try { // try from 008afa10 to 008afa1b has its CatchHandler @ 008afaec */
        (*(code *)(&PTR_FUN_0098f088)[*(uint *)((long)pvVar3 + -8)])
                  (&local_16e0,(void *)((long)pvVar3 + -0x38));
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
  if (local_1700 != (void *)0x0) {
    pvStack_16f8 = local_1700;
    operator_delete(local_1700);
  }
  if (pvStack_1718 != (void *)0x0) {
    local_1710 = pvStack_1718;
    operator_delete(pvStack_1718);
  }
  if (local_1730 != (void *)0x0) {
    pvStack_1728 = local_1730;
    operator_delete(local_1730);
  }
  *param_1 = this;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008afaf0  FUN_008afaf0 =====

void FUN_008afaf0(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 008afb14  FUN_008afb14 =====

undefined * FUN_008afb14(void)

{
  return PTR_RNSVGMarkerComponentName_0099f1d8;
}


// ===== 008afb20  FUN_008afb20 =====

undefined * FUN_008afb20(void)

{
  return PTR_RNSVGMarkerComponentName_0099f1d8;
}


// ===== 008afb2c  FUN_008afb2c =====

undefined8 FUN_008afb2c(void)

{
  return 0x61;
}


// ===== 008afb34  FUN_008afb34 =====

void FUN_008afb34(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

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
  *puVar4 = &PTR_FUN_0099a4e0;
                    /* try { // try from 008afba0 to 008afbaf has its CatchHandler @ 008afc14 */
  facebook::react::RNSVGLayoutableShadowNode::RNSVGLayoutableShadowNode
            (pRVar1,param_3,param_4,uVar3);
  lVar5 = *param_2;
  puVar4[3] = &PTR_FUN_0099a530;
                    /* try { // try from 008afbc8 to 008afbd3 has its CatchHandler @ 008afc04 */
  (**(code **)(lVar5 + 0x60))(param_2,pRVar1);
  *param_1 = pRVar1;
  param_1[1] = puVar4;
  if (*(long *)(lVar2 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008afc44  FUN_008afc44 =====

void FUN_008afc44(undefined8 *param_1,long *param_2,ShadowNode *param_3,ShadowNodeFragment *param_4)

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
  *plVar3 = (long)&PTR_FUN_0099a4e0;
                    /* try { // try from 008afc9c to 008afcab has its CatchHandler @ 008afd78 */
  facebook::react::RNSVGLayoutableShadowNode::RNSVGLayoutableShadowNode(pRVar1,param_3,param_4);
  plVar3[3] = (long)&PTR_FUN_0099a530;
  local_68 = pRVar1;
  local_60 = plVar3;
                    /* try { // try from 008afcbc to 008afccb has its CatchHandler @ 008afd90 */
  facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::
  completeClone(pRVar1,param_3,param_4);
  local_78 = pRVar1;
  local_70 = plVar3;
  FUN_00757d00(1,plVar3 + 1);
                    /* try { // try from 008afcdc to 008afceb has its CatchHandler @ 008afd68 */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_78);
  plVar3 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar4 = FUN_00757990(0xffffffffffffffff,local_70 + 1), lVar4 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pRVar1 = local_68;
                    /* try { // try from 008afd28 to 008afd33 has its CatchHandler @ 008afd90 */
  (**(code **)(*param_2 + 0x60))(param_2,local_68);
  *param_1 = pRVar1;
  param_1[1] = local_60;
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008afdb8  FUN_008afdb8 =====

void FUN_008afdb8(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x008afdc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 008afdcc  FUN_008afdcc =====

void FUN_008afdcc(undefined8 *param_1,long param_2,PropsParserContext *param_3,long *param_4,
                 RawProps *param_5)

{
  RNSVGMarkerProps *this;
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
  RNSVGMarkerProps *pRVar12;
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
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNSVGMarkerComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_16RNSVGMarkerPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eca0
         & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNSVGMarkerComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_16RNSVGMarkerPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eca0
                                   ), iVar6 != 0)) {
                    /* try { // try from 008b0200 to 008b0203 has its CatchHandler @ 008b0230 */
      FUN_008b09ec();
      __cxa_atexit(FUN_008b0bbc,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNSVGMarkerComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_16RNSVGMarkerPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec98
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNSVGMarkerComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_16RNSVGMarkerPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eca0
                         );
    }
    lVar11 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNSVGMarkerComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_16RNSVGMarkerPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec98
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNSVGMarkerComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_16RNSVGMarkerPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec98
    ;
    param_1[1] = lVar11;
    if (lVar11 != 0) {
      FUN_00757d00(1,lVar11 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    pRVar12 = (RNSVGMarkerProps *)*param_4;
    if (pRVar12 == (RNSVGMarkerProps *)0x0) {
      if (((*
            PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNSVGMarkerComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_16RNSVGMarkerPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eca0
           & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNSVGMarkerComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_16RNSVGMarkerPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eca0
                                     ), iVar6 != 0)) {
                    /* try { // try from 008b0180 to 008b0183 has its CatchHandler @ 008b0248 */
        FUN_008b09ec();
        __cxa_atexit(FUN_008b0bbc,
                     PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNSVGMarkerComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_16RNSVGMarkerPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec98
                     ,&PTR_LOOP_008d5d30);
        __cxa_guard_release(
                           PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNSVGMarkerComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_16RNSVGMarkerPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eca0
                           );
      }
      pRVar12 = *(RNSVGMarkerProps **)
                 PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNSVGMarkerComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_16RNSVGMarkerPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec98
      ;
    }
    plVar8 = (long *)operator_new(0xab0);
    this = (RNSVGMarkerProps *)(plVar8 + 3);
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = (long)&PTR_FUN_0099a648;
                    /* try { // try from 008afeac to 008afebf has its CatchHandler @ 008b02bc */
    facebook::react::RNSVGMarkerProps::RNSVGMarkerProps(this,param_3,pRVar12,param_5);
                    /* try { // try from 008afec4 to 008afed7 has its CatchHandler @ 008b02d4 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if ((((uVar7 & 1) == 0) ||
        (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar7 & 1) == 0)) ||
       (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
                enablePropsUpdateReconciliationAndroid(), (uVar7 & 1) == 0)) {
LAB_008aff00:
      FUN_00757d00(1,plVar8 + 1);
      if (*param_4 == 0) {
        if (((*
              PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNSVGMarkerComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_16RNSVGMarkerPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eca0
             & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(
                                       PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNSVGMarkerComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_16RNSVGMarkerPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eca0
                                       ), iVar6 != 0)) {
                    /* try { // try from 008b01c0 to 008b01c3 has its CatchHandler @ 008b0234 */
          FUN_008b09ec();
          __cxa_atexit(FUN_008b0bbc,
                       PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNSVGMarkerComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_16RNSVGMarkerPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec98
                       ,&PTR_LOOP_008d5d30);
          __cxa_guard_release(
                             PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNSVGMarkerComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_16RNSVGMarkerPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eca0
                             );
        }
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 008aff68 to 008aff7b has its CatchHandler @ 008b0260 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*(undefined8 *)
                         PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNSVGMarkerComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_16RNSVGMarkerPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec98
                   ,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
LAB_008affb4:
          (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
        }
        else if (local_b0 != (dynamic *)0x0) {
          lVar11 = 5;
          pdVar10 = local_b0;
          goto LAB_008affb4;
        }
        if (plVar8 != (long *)0x0) goto LAB_008affc8;
      }
      else {
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 008aff1c to 008aff2f has its CatchHandler @ 008b0288 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*param_4,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
        }
        else {
          if (local_b0 == (dynamic *)0x0) goto LAB_008affc8;
          lVar11 = 5;
          pdVar10 = local_b0;
        }
        (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
LAB_008affc8:
        lVar11 = FUN_00757990(0xffffffffffffffff,plVar8 + 1);
        if (lVar11 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 008afee4 to 008afeef has its CatchHandler @ 008b025c */
      pcVar9 = (char *)(**(code **)(*(long *)this + 0x10))(this);
      iVar6 = strcmp(PTR_RNSVGMarkerComponentName_0099f1d8,pcVar9);
      if (iVar6 != 0) goto LAB_008aff00;
      bVar3 = false;
    }
                    /* try { // try from 008afff4 to 008afff7 has its CatchHandler @ 008b02d4 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar7 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 008b0004 to 008b001f has its CatchHandler @ 008b0284 */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(plVar8 + 7));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 008b0160 to 008b016f has its CatchHandler @ 008b027c */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_008b0320;
      }
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (*(int *)(plVar4 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 008b0140 to 008b014f has its CatchHandler @ 008b02e0 */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_008b0320;
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
                    /* try { // try from 008b00a0 to 008b00ab has its CatchHandler @ 008b02e8 */
        folly::dynamic::dynamic(local_d0,(dynamic *)(plVar4 + 8));
        local_a0 = 0;
                    /* try { // try from 008b00b0 to 008b00c7 has its CatchHandler @ 008b02ec */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (this,param_3,uVar1,pcVar9,local_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 008b00d8 to 008b00e3 has its CatchHandler @ 008b02dc */
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
LAB_008b0320:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008b0324  FUN_008b0324 =====

void FUN_008b0324(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 008b032c  FUN_008b032c =====

void FUN_008b032c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 008b0334  FUN_008b0334 =====

void FUN_008b0334(undefined8 *param_1,long param_2,long param_3)

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
                    /* try { // try from 008b0378 to 008b037f has its CatchHandler @ 008b0580 */
  plVar6 = (long *)operator_new(0x68);
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&PTR_FUN_00992a08;
                    /* try { // try from 008b0398 to 008b03a3 has its CatchHandler @ 008b0568 */
  local_78 = FUN_008707fc(plVar6 + 3,&local_58,param_2 + 8);
  local_70 = plVar6;
  if ((local_50 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,local_50 + 1), lVar7 == 0)) {
    (**(code **)(*local_50 + 0x10))(local_50);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 008b03d8 to 008b03df has its CatchHandler @ 008b0558 */
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
                    /* try { // try from 008b042c to 008b0443 has its CatchHandler @ 008b0528 */
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
                    /* try { // try from 008b0498 to 008b04a3 has its CatchHandler @ 008b0508 */
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


// ===== 008b05a8  FUN_008b05a8 =====

void FUN_008b05a8(void)

{
  return;
}


// ===== 008b05ac  FUN_008b05ac =====

/* WARNING: Type propagation algorithm not settling */

void FUN_008b05ac(long param_1)

{
  byte bVar1;
  void *pvVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  if ((*(byte *)(param_1 + 0xa78) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0xa50);
  }
  else {
    operator_delete(*(void **)(param_1 + 0xa88));
    bVar1 = *(byte *)(param_1 + 0xa50);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0xa38);
  }
  else {
    operator_delete(*(void **)(param_1 + 0xa60));
    bVar1 = *(byte *)(param_1 + 0xa38);
  }
  if ((bVar1 & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0xa48));
  }
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
  FUN_0078917c(param_1,PTR_VTT_0099f1e8 + 8);
  return;
}


// ===== 008b07a4  FUN_008b07a4 =====

void FUN_008b07a4(long param_1)

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


// ===== 008b07f4  FUN_008b07f4 =====

void FUN_008b07f4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099a4e0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008b0804  FUN_008b0804 =====

void FUN_008b0804(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099a4e0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008b0834  FUN_008b0834 =====

void FUN_008b0834(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x008b083c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 008b0840  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008b0844  FUN_008b0844 =====

void FUN_008b0844(long *param_1)

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


// ===== 008b0904  FUN_008b0904 =====

void FUN_008b0904(long param_1)

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


// ===== 008b096c  FUN_008b096c =====

bool FUN_008b096c(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 008b0984  FUN_008b0984 =====

bool FUN_008b0984(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 008b099c  FUN_008b099c =====

void FUN_008b099c(long param_1)

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


// ===== 008b09ec  FUN_008b09ec =====

void FUN_008b09ec(void)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0xab0);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_0099a5f8;
  memset(__s,0,0xa98);
                    /* try { // try from 008b0a28 to 008b0a3b has its CatchHandler @ 008b0ba0 */
  FUN_00788b10(__s,PTR_VTT_0099f1e8 + 0x10);
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
  puVar1 = PTR_vtable_0099f1e0;
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
  *(undefined4 *)(puVar2 + 0x138) = 0;
  puVar2[0x139] = 0;
  *(undefined4 *)(puVar2 + 0x13e) = 0;
  puVar2[0x13f] = 0;
  *(undefined4 *)(puVar2 + 0x144) = 0;
  puVar2[0x145] = 0;
  *(undefined4 *)(puVar2 + 0x120) = 0;
  puVar2[0x11f] = 0;
  puVar2[0x11e] = 0;
  puVar2[0x11d] = 0;
  puVar2[0x11c] = 0;
  puVar2[0x11b] = 0;
  puVar2[0x11a] = 0;
  puVar2[0x14b] = 0;
  puVar2[0x14a] = 0;
  puVar2[0x14d] = 0;
  puVar2[0x14c] = 0;
  puVar2[0x14f] = 0;
  puVar2[0x14e] = 0;
  puVar2[0x151] = 0;
  puVar2[0x150] = 0;
  puVar2[0x153] = 0;
  puVar2[0x152] = 0;
  puVar1 = 
  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNSVGMarkerComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_16RNSVGMarkerPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ec98
  ;
  *(undefined8 *)((long)puVar2 + 0xaa4) = 0;
  *(undefined8 *)((long)puVar2 + 0xa9c) = 0;
  *(undefined8 **)puVar1 = __s;
  *(undefined8 **)(puVar1 + 8) = puVar2;
  return;
}


// ===== 008b0bbc  FUN_008b0bbc =====

void FUN_008b0bbc(long param_1)

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


// ===== 008b0c0c  FUN_008b0c0c =====

void FUN_008b0c0c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099a5f8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008b0c1c  FUN_008b0c1c =====

void FUN_008b0c1c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099a5f8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008b0c4c  FUN_008b0c4c =====

void FUN_008b0c4c(long param_1)

{
  FUN_008b05ac(param_1 + 0x18);
  return;
}


// ===== 008b0c54  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008b0c58  FUN_008b0c58 =====

void FUN_008b0c58(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099a648;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008b0c68  FUN_008b0c68 =====

void FUN_008b0c68(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099a648;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008b0c98  FUN_008b0c98 =====

void FUN_008b0c98(long param_1)

{
  FUN_008b05ac(param_1 + 0x18);
  return;
}


// ===== 008b0ca0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008b0ca4  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_23RNSVGConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGMaskComponentNameEEEENS0_14RNSVGMaskPropsEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENS8_14default_deleteISB_EEEERKNS0_29ComponentDescriptorParametersE =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_23RNSVGConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGMaskComponentNameEEEENS0_14RNSVGMaskPropsEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENS8_14default_deleteISB_EEEERKNS0_29ComponentDescriptorParametersE
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
  undefined4 local_16a0 [2];
  undefined8 *local_1698;
  void *local_1690;
  void *pvStack_1688;
  undefined8 local_1680;
  void *pvStack_1678;
  void *local_1670;
  undefined8 uStack_1668;
  void *local_1660;
  void *pvStack_1658;
  undefined8 uStack_1650;
  undefined8 uStack_1648;
  undefined *local_1640;
  undefined8 uStack_1638;
  undefined8 local_1630;
  undefined8 uStack_1628;
  undefined4 local_1620 [2];
  undefined8 local_1618;
  undefined8 uStack_1610;
  undefined8 local_1608;
  undefined8 uStack_1600;
  undefined4 local_15f8;
  undefined4 local_15f0;
  undefined1 local_15ec;
  undefined8 local_15eb;
  undefined8 local_15e3;
  undefined8 uStack_15db;
  undefined8 local_15d3;
  undefined8 uStack_15cb;
  undefined8 local_15c3;
  undefined8 uStack_15bb;
  undefined8 local_15b3;
  undefined6 uStack_15ab;
  undefined2 uStack_15a5;
  undefined6 uStack_15a3;
  undefined8 uStack_159d;
  undefined4 local_1595;
  undefined8 local_1591;
  undefined1 local_1589;
  undefined1 uStack_1588;
  undefined7 uStack_1587;
  undefined8 uStack_1580;
  undefined8 uStack_1578;
  undefined8 uStack_1570;
  undefined8 local_1568;
  undefined8 uStack_1560;
  undefined8 local_1558;
  undefined8 uStack_1550;
  undefined8 local_1548;
  undefined8 uStack_1540;
  undefined8 local_1538;
  undefined8 uStack_1530;
  undefined8 uStack_1528;
  undefined8 local_1520;
  undefined8 local_1518;
  undefined8 uStack_1510;
  undefined8 local_1508;
  undefined4 uStack_1500;
  undefined4 uStack_14fc;
  undefined4 uStack_14f8;
  undefined4 uStack_14f4;
  undefined4 uStack_14f0;
  undefined4 uStack_14ec;
  undefined8 local_14e8;
  undefined8 uStack_14e0;
  undefined4 local_14d8;
  undefined1 local_14d4;
  undefined4 local_14d0;
  undefined1 local_14cc;
  undefined4 local_14c8;
  undefined1 local_14c4;
  undefined4 local_14c0;
  undefined1 local_14bc;
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
  undefined1 local_1458;
  undefined1 local_1454;
  undefined1 local_1448;
  undefined8 local_1440;
  undefined8 uStack_1438;
  undefined8 uStack_1430;
  undefined8 uStack_1428;
  undefined8 local_1420;
  undefined8 uStack_1418;
  undefined8 uStack_1410;
  undefined1 uStack_1408;
  undefined7 local_1407;
  undefined1 uStack_1400;
  undefined8 uStack_13ff;
  undefined8 local_13f4;
  undefined8 uStack_13ec;
  undefined8 uStack_13e4;
  undefined8 uStack_13dc;
  undefined8 local_13d4;
  undefined8 uStack_13cc;
  undefined8 uStack_13c4;
  undefined8 uStack_13bc;
  undefined8 local_13b4;
  undefined8 uStack_13ac;
  undefined8 uStack_13a4;
  undefined5 uStack_139c;
  undefined3 local_1397;
  undefined5 uStack_1394;
  undefined1 local_138c;
  undefined1 local_1388;
  undefined1 local_1384;
  undefined1 local_1380;
  undefined1 local_137c;
  undefined1 local_1378;
  undefined1 local_1360;
  undefined8 local_1358;
  undefined8 uStack_1350;
  undefined8 local_1348;
  undefined4 local_1340;
  undefined1 local_133c;
  undefined4 local_133b;
  undefined1 local_1337;
  undefined1 local_1336;
  undefined8 local_1330;
  undefined8 uStack_1328;
  undefined8 uStack_1320;
  undefined8 uStack_1318;
  undefined8 local_1310;
  undefined7 uStack_1308;
  undefined4 uStack_1301;
  undefined8 local_12fc;
  undefined1 local_12f4;
  undefined1 local_12ec;
  undefined1 local_12e8;
  undefined1 local_12e0;
  undefined1 local_12dc;
  undefined1 local_12d4;
  undefined1 local_12d0;
  undefined1 local_12c8;
  undefined1 local_12c4;
  undefined1 local_12bc;
  undefined1 local_12b8;
  undefined1 local_12b0;
  undefined1 local_12ac;
  undefined1 local_12a4;
  undefined1 local_12a0;
  undefined1 local_1298;
  undefined1 local_1294;
  undefined1 local_128c;
  undefined1 local_1288;
  undefined1 local_1280;
  undefined1 local_127c;
  undefined1 local_1274;
  undefined1 local_1270;
  undefined1 local_1268;
  undefined1 local_1264;
  undefined1 local_125c;
  undefined1 local_1258;
  undefined1 local_1254;
  undefined1 local_1250;
  undefined1 local_124c;
  undefined1 local_1248;
  undefined1 local_1244;
  undefined1 local_1240;
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
  undefined8 local_11f8;
  undefined8 uStack_11f0;
  undefined8 local_11e8;
  undefined8 uStack_11e0;
  undefined8 uStack_11d8;
  undefined8 uStack_11d0;
  undefined2 local_11c8;
  undefined8 local_11c4;
  undefined1 local_11bc;
  undefined8 local_11b8;
  undefined8 local_11b0;
  undefined8 uStack_11a8;
  undefined1 local_11a0;
  undefined8 local_1198;
  undefined8 uStack_1190;
  undefined8 uStack_1188;
  undefined8 uStack_1180;
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
  undefined8 local_10e8;
  undefined8 uStack_10e0;
  undefined8 local_10d8;
  undefined8 uStack_10d0;
  undefined8 local_10c8;
  undefined8 uStack_10c0;
  undefined8 local_10b8;
  undefined8 uStack_10b0;
  undefined8 local_10a8;
  undefined6 uStack_10a0;
  undefined2 uStack_109a;
  undefined6 uStack_1098;
  undefined1 local_1090;
  undefined1 local_108c;
  undefined1 local_1088;
  undefined8 local_1084;
  undefined8 uStack_107c;
  undefined1 local_1074;
  undefined8 local_1070;
  undefined2 local_1068;
  undefined1 local_1066;
  undefined4 local_1064;
  undefined1 local_1060;
  undefined1 local_1000;
  undefined1 local_ff8;
  undefined1 local_f98;
  undefined4 local_f90;
  undefined2 local_f8c;
  undefined1 local_f88;
  undefined1 local_f84;
  undefined1 local_f80;
  undefined1 local_f7c;
  undefined1 local_f78;
  undefined1 local_f74;
  undefined1 local_f70;
  undefined1 local_f6c;
  undefined1 local_f68;
  undefined1 local_f64;
  undefined8 local_f60;
  undefined8 uStack_f58;
  undefined8 local_f50;
  undefined4 local_f48;
  undefined8 local_f40;
  undefined8 uStack_f38;
  undefined8 local_f30;
  undefined8 uStack_f28;
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
  undefined5 uStack_eb8;
  undefined3 uStack_eb3;
  undefined5 uStack_eb0;
  undefined8 local_ea8;
  undefined8 uStack_ea0;
  undefined8 local_e98;
  undefined8 uStack_e90;
  undefined8 uStack_e88;
  undefined8 uStack_e80;
  undefined4 local_e78;
  undefined4 local_e70;
  undefined8 local_e68;
  undefined8 local_e40;
  undefined4 local_e38;
  undefined8 local_e30;
  undefined4 local_e08;
  undefined4 local_e00;
  undefined8 local_df8;
  undefined8 local_dd0;
  undefined4 local_dc8;
  undefined8 local_dc0;
  undefined8 local_d98;
  undefined4 local_d90;
  undefined8 local_d88;
  undefined8 uStack_d80;
  undefined8 local_d78;
  undefined8 uStack_d70;
  undefined8 uStack_d68;
  undefined8 uStack_d60;
  undefined4 local_d58;
  undefined8 local_d50;
  undefined4 local_d28;
  undefined8 local_d20;
  undefined4 local_cf8;
  undefined8 local_cf0;
  undefined4 local_cc8;
  undefined8 local_cc0;
  undefined4 local_c98;
  undefined8 local_c90;
  undefined4 local_c68;
  undefined8 local_c60;
  undefined4 local_c38;
  undefined8 local_c30;
  undefined8 local_c08;
  undefined4 local_c00;
  undefined4 local_bf8 [2];
  undefined8 local_bf0;
  undefined8 uStack_be8;
  undefined8 local_be0;
  undefined8 local_bd8;
  undefined8 uStack_bd0;
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
  pvStack_1678 = (void *)0x0;
  local_1680 = 0;
  uStack_1668 = 0;
  local_1670 = (void *)0x0;
  pvStack_1658 = (void *)0x0;
  local_1660 = (void *)0x0;
  uStack_1648 = 0;
  uStack_1650 = 0;
  pvStack_1688 = (void *)0x0;
  local_1690 = (void *)0x0;
                    /* try { // try from 008b0cf8 to 008b0d03 has its CatchHandler @ 008b140c */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_1690);
  local_f8 = 0;
  *(undefined ***)this = &PTR_FUN_0099a698;
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
                    /* try { // try from 008b0d74 to 008b0d87 has its CatchHandler @ 008b143c */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1b0);
  local_100 = CONCAT44(local_100._4_4_,0x3f800000);
  local_16a0[0] = 0xffffffff;
  uStack_108 = 0;
  local_110 = (void *)0x0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_1698 = &local_1b0;
  facebook::react::RawProps::facebook::react::RawProps::parse(&local_f8,this + 0x38);
  memset(local_1620,0,0xa28);
  local_bf8[0] = 5;
  local_be0 = 0;
  local_1640 = *(undefined **)(PTR_VTT_0099f200 + 0x20);
  local_1620[0] = 5;
  uStack_1628 = 0;
  local_1630 = 0;
  local_bd8 = 0;
  uStack_1638 = 0;
  uStack_bd0 = 0x3f800000;
  uStack_be8 = 0;
  local_bf0 = 0;
  uStack_1610 = 0;
  local_1618 = 0;
  uStack_1600 = 0;
  local_1608 = 0;
  local_15f8 = 0x3f800000;
  folly::dynamic::folly::dynamic::destroy(local_bf8);
  local_15f0 = 0x10410710;
  local_15ec = 0;
  uStack_1500 = 0;
  local_1508 = 0;
  uStack_14ec = 0;
  uStack_1510 = 0;
  local_1518 = 0;
  uStack_1587 = 0;
  uStack_15db = 0;
  local_15e3 = 0;
  local_15eb = _s__00375408;
  uStack_15cb = 0;
  local_15d3 = 0;
  uStack_11a8 = _UNK_00371598;
  local_11b0 = _DAT_00371590;
  uStack_15bb = 0;
  local_15c3 = 0;
  uStack_15ab = 0;
  local_15b3 = 0;
  uStack_10b0 = _UNK_00488920;
  local_10b8 = _DAT_00488918;
  uStack_10c0 = _UNK_00488910;
  local_10c8 = _DAT_00488908;
  local_1595 = 0x40004;
  uStack_14f4 = 0;
  uStack_14f0 = 0;
  uStack_14fc = 0;
  uStack_14f8 = 0;
  uStack_14e0 = 0;
  local_14e8 = 0;
  local_14d8 = 0x7fc00000;
  local_14d0 = 0x7fc00000;
  local_14c8 = 0x7fc00000;
  local_14c0 = 0x7fc00000;
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
  uStack_13ff = 0;
  uStack_1400 = 0;
  uStack_13ec = 0;
  local_13f4 = 0;
  uStack_13dc = 0;
  uStack_13e4 = 0;
  uStack_13cc = 0;
  local_13d4 = 0;
  uStack_13bc = 0;
  uStack_13c4 = 0;
  uStack_13ac = 0;
  local_13b4 = 0;
  uStack_139c = 0;
  uStack_13a4 = 0;
  local_1397 = 0;
  uStack_1394 = 0;
  local_133c = 1;
  local_133b = 0;
  local_1336 = 0x23;
  local_12fc = 0x3f800000;
  uStack_11e0 = 0;
  local_11e8 = 0;
  uStack_11d0 = 0;
  uStack_11d8 = 0;
  uStack_11f0 = 0;
  local_11f8 = 0;
  uStack_10d0 = _UNK_00488900;
  local_10d8 = _DAT_004888f8;
  local_11c4 = 0;
  uStack_10e0 = _UNK_004888f0;
  local_10e8 = _DAT_004888e8;
  uStack_1190 = 0;
  local_1198 = 0;
  uStack_1180 = 0;
  uStack_1188 = 0;
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
  uStack_1098 = 0;
  uStack_10a0 = 0;
  uStack_109a = 0;
  local_10a8 = 0;
  uStack_159d = 0;
  uStack_15a5 = 0;
  uStack_15a3 = 0;
  local_1591 = 0;
  local_1589 = 0;
  uStack_1588 = 0;
  uStack_1578 = 0;
  uStack_1580 = 0;
  local_1568 = 0;
  uStack_1570 = 0;
  local_1558 = 0;
  uStack_1560 = 0;
  local_1548 = 0;
  uStack_1550 = 0;
  local_1538 = 0;
  uStack_1540 = 0;
  uStack_1528 = 0;
  uStack_1530 = 0;
  local_1520 = 0;
  local_14d4 = 0;
  local_14cc = 0;
  local_14c4 = 0;
  local_14bc = 0;
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
  local_1458 = 0;
  local_1454 = 0;
  local_1448 = 0;
  local_138c = 0;
  local_1388 = 0;
  local_1384 = 0;
  local_1380 = 0;
  local_137c = 0;
  local_1378 = 0;
  local_1360 = 0;
  uStack_1438 = 0;
  local_1440 = 0;
  uStack_1428 = 0;
  uStack_1430 = 0;
  uStack_1418 = 0;
  local_1420 = 0;
  uStack_1408 = 0;
  local_1407 = 0;
  uStack_1410 = 0;
  uStack_1350 = 0;
  local_1358 = 0;
  local_1348 = 0;
  local_1340 = 0;
  local_1337 = 0;
  uStack_1328 = 0;
  local_1330 = 0;
  uStack_1318 = 0;
  uStack_1320 = 0;
  uStack_1308 = 0;
  uStack_1301 = 0;
  local_1310 = 0;
  local_12f4 = 0;
  local_12ec = 0;
  local_12e8 = 0;
  local_12e0 = 0;
  local_12dc = 0;
  local_12d4 = 0;
  local_12d0 = 0;
  local_12c8 = 0;
  local_12c4 = 0;
  local_12bc = 0;
  local_12b8 = 0;
  local_12b0 = 0;
  local_12ac = 0;
  local_12a4 = 0;
  local_12a0 = 0;
  local_1298 = 0;
  local_1294 = 0;
  local_128c = 0;
  local_1288 = 0;
  local_1280 = 0;
  local_127c = 0;
  local_1274 = 0;
  local_1270 = 0;
  local_1268 = 0;
  local_1264 = 0;
  local_125c = 0;
  local_1258 = 0;
  local_1254 = 0;
  local_1250 = 0;
  local_124c = 0;
  local_1248 = 0;
  local_1244 = 0;
  local_1240 = 0;
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
  local_11b8 = 0;
  local_11c8 = 0;
  local_11bc = 0;
  local_11a0 = 0;
  local_1090 = 0;
  local_108c = 0;
  local_1088 = 0;
  local_1070 = 0;
  uStack_107c = 0;
  local_1084 = 0;
  local_1074 = 0;
  local_1068 = 0x101;
  local_1066 = 0;
  local_1064 = 0;
  local_1060 = 0;
  local_1000 = 0;
  local_ff8 = 0;
  local_f98 = 0;
  local_f88 = 0;
  local_f84 = 0;
  local_f80 = 0;
  local_f7c = 0;
  local_f78 = 0;
  local_f74 = 0;
  local_f70 = 0;
  local_f6c = 0;
  local_f68 = 0;
  local_f64 = 0;
  local_f8c = 0;
  local_f90 = 0;
  local_1640 = PTR_vtable_0099f1f8 + 0x20;
  local_f50 = 0;
  uStack_eb0 = 0;
  uStack_e90 = 0;
  local_e98 = 0;
  uStack_e80 = 0;
  uStack_e88 = 0;
  uStack_ea0 = 0;
  local_ea8 = 0;
  uStack_f58 = 0;
  local_f60 = 0;
  local_e40 = 0x13f800000;
  local_f48 = 0x3f800000;
  local_e70 = 0;
  local_e68 = 0;
  uStack_f38 = 0;
  local_f40 = 0;
  uStack_f28 = 0;
  local_f30 = 0;
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
  uStack_eb3 = 0;
  local_ec0 = 0;
  local_e78 = 0;
  local_e38 = 0;
  local_e30 = 0;
  local_e08 = 0x3f800000;
  local_e00 = 0;
  local_df8 = 0;
  local_dd0 = 0;
  local_dc8 = 0;
  local_dc0 = 0;
  local_d98 = 0;
  local_d90 = 0;
  local_d50 = 0;
  local_d28 = 0;
  local_d20 = 0;
  local_cf8 = 0;
  local_cf0 = 0;
  local_cc8 = 0;
  local_cc0 = 0;
  local_c98 = 0;
  local_c90 = 0;
  local_c68 = 0;
  local_c60 = 0;
  local_c38 = 0;
  local_c30 = 0;
  local_c08 = 0;
  local_c00 = 0;
  uStack_d70 = 0;
  local_d78 = 0;
  uStack_d60 = 0;
  uStack_d68 = 0;
  uStack_d80 = 0;
  local_d88 = 0;
  local_d58 = 0;
                    /* try { // try from 008b124c to 008b125f has its CatchHandler @ 008b143c */
  facebook::react::RNSVGMaskProps::RNSVGMaskProps
            ((RNSVGMaskProps *)local_bf8,(PropsParserContext *)local_16a0,
             (RNSVGMaskProps *)&local_1640,(RawProps *)&local_f8);
  FUN_008b1f00(local_bf8);
  FUN_008b1f00(&local_1640);
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
                    /* try { // try from 008b1364 to 008b136f has its CatchHandler @ 008b1440 */
        (*(code *)(&PTR_FUN_0098f088)[*(uint *)((long)pvVar3 + -8)])
                  (&local_1640,(void *)((long)pvVar3 + -0x38));
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
  if (local_1660 != (void *)0x0) {
    pvStack_1658 = local_1660;
    operator_delete(local_1660);
  }
  if (pvStack_1678 != (void *)0x0) {
    local_1670 = pvStack_1678;
    operator_delete(pvStack_1678);
  }
  if (local_1690 != (void *)0x0) {
    pvStack_1688 = local_1690;
    operator_delete(local_1690);
  }
  *param_1 = this;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008b1444  FUN_008b1444 =====

void FUN_008b1444(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 008b1468  FUN_008b1468 =====

undefined * FUN_008b1468(void)

{
  return PTR_RNSVGMaskComponentName_0099f1f0;
}


// ===== 008b1474  FUN_008b1474 =====

undefined * FUN_008b1474(void)

{
  return PTR_RNSVGMaskComponentName_0099f1f0;
}


// ===== 008b1480  FUN_008b1480 =====

undefined8 FUN_008b1480(void)

{
  return 0x61;
}


// ===== 008b1488  FUN_008b1488 =====

void FUN_008b1488(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

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
  *puVar4 = &PTR_FUN_0099a728;
                    /* try { // try from 008b14f4 to 008b1503 has its CatchHandler @ 008b1568 */
  facebook::react::RNSVGLayoutableShadowNode::RNSVGLayoutableShadowNode
            (pRVar1,param_3,param_4,uVar3);
  lVar5 = *param_2;
  puVar4[3] = &PTR_FUN_0099a778;
                    /* try { // try from 008b151c to 008b1527 has its CatchHandler @ 008b1558 */
  (**(code **)(lVar5 + 0x60))(param_2,pRVar1);
  *param_1 = pRVar1;
  param_1[1] = puVar4;
  if (*(long *)(lVar2 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008b1598  FUN_008b1598 =====

void FUN_008b1598(undefined8 *param_1,long *param_2,ShadowNode *param_3,ShadowNodeFragment *param_4)

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
  *plVar3 = (long)&PTR_FUN_0099a728;
                    /* try { // try from 008b15f0 to 008b15ff has its CatchHandler @ 008b16cc */
  facebook::react::RNSVGLayoutableShadowNode::RNSVGLayoutableShadowNode(pRVar1,param_3,param_4);
  plVar3[3] = (long)&PTR_FUN_0099a778;
  local_68 = pRVar1;
  local_60 = plVar3;
                    /* try { // try from 008b1610 to 008b161f has its CatchHandler @ 008b16e4 */
  facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::
  completeClone(pRVar1,param_3,param_4);
  local_78 = pRVar1;
  local_70 = plVar3;
  FUN_00757d00(1,plVar3 + 1);
                    /* try { // try from 008b1630 to 008b163f has its CatchHandler @ 008b16bc */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_78);
  plVar3 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar4 = FUN_00757990(0xffffffffffffffff,local_70 + 1), lVar4 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pRVar1 = local_68;
                    /* try { // try from 008b167c to 008b1687 has its CatchHandler @ 008b16e4 */
  (**(code **)(*param_2 + 0x60))(param_2,local_68);
  *param_1 = pRVar1;
  param_1[1] = local_60;
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008b170c  FUN_008b170c =====

void FUN_008b170c(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x008b171c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 008b1720  FUN_008b1720 =====

void FUN_008b1720(undefined8 *param_1,long param_2,PropsParserContext *param_3,long *param_4,
                 RawProps *param_5)

{
  RNSVGMaskProps *this;
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
  RNSVGMaskProps *pRVar12;
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
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGMaskComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGMaskPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ecb0
         & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGMaskComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGMaskPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ecb0
                                   ), iVar6 != 0)) {
                    /* try { // try from 008b1b54 to 008b1b57 has its CatchHandler @ 008b1b84 */
      FUN_008b22fc();
      __cxa_atexit(FUN_008b24b8,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGMaskComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGMaskPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eca8
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGMaskComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGMaskPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ecb0
                         );
    }
    lVar11 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGMaskComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGMaskPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eca8
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGMaskComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGMaskPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eca8
    ;
    param_1[1] = lVar11;
    if (lVar11 != 0) {
      FUN_00757d00(1,lVar11 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    pRVar12 = (RNSVGMaskProps *)*param_4;
    if (pRVar12 == (RNSVGMaskProps *)0x0) {
      if (((*
            PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGMaskComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGMaskPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ecb0
           & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGMaskComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGMaskPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ecb0
                                     ), iVar6 != 0)) {
                    /* try { // try from 008b1ad4 to 008b1ad7 has its CatchHandler @ 008b1b9c */
        FUN_008b22fc();
        __cxa_atexit(FUN_008b24b8,
                     PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGMaskComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGMaskPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eca8
                     ,&PTR_LOOP_008d5d30);
        __cxa_guard_release(
                           PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGMaskComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGMaskPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ecb0
                           );
      }
      pRVar12 = *(RNSVGMaskProps **)
                 PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGMaskComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGMaskPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eca8
      ;
    }
    plVar8 = (long *)operator_new(0xa60);
    this = (RNSVGMaskProps *)(plVar8 + 3);
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = (long)&PTR_FUN_0099a890;
                    /* try { // try from 008b1800 to 008b1813 has its CatchHandler @ 008b1c10 */
    facebook::react::RNSVGMaskProps::RNSVGMaskProps(this,param_3,pRVar12,param_5);
                    /* try { // try from 008b1818 to 008b182b has its CatchHandler @ 008b1c28 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if ((((uVar7 & 1) == 0) ||
        (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar7 & 1) == 0)) ||
       (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
                enablePropsUpdateReconciliationAndroid(), (uVar7 & 1) == 0)) {
LAB_008b1854:
      FUN_00757d00(1,plVar8 + 1);
      if (*param_4 == 0) {
        if (((*
              PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGMaskComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGMaskPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ecb0
             & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(
                                       PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGMaskComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGMaskPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ecb0
                                       ), iVar6 != 0)) {
                    /* try { // try from 008b1b14 to 008b1b17 has its CatchHandler @ 008b1b88 */
          FUN_008b22fc();
          __cxa_atexit(FUN_008b24b8,
                       PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGMaskComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGMaskPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eca8
                       ,&PTR_LOOP_008d5d30);
          __cxa_guard_release(
                             PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGMaskComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGMaskPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ecb0
                             );
        }
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 008b18bc to 008b18cf has its CatchHandler @ 008b1bb4 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*(undefined8 *)
                         PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGMaskComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGMaskPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eca8
                   ,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
LAB_008b1908:
          (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
        }
        else if (local_b0 != (dynamic *)0x0) {
          lVar11 = 5;
          pdVar10 = local_b0;
          goto LAB_008b1908;
        }
        if (plVar8 != (long *)0x0) goto LAB_008b191c;
      }
      else {
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 008b1870 to 008b1883 has its CatchHandler @ 008b1bdc */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*param_4,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
        }
        else {
          if (local_b0 == (dynamic *)0x0) goto LAB_008b191c;
          lVar11 = 5;
          pdVar10 = local_b0;
        }
        (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
LAB_008b191c:
        lVar11 = FUN_00757990(0xffffffffffffffff,plVar8 + 1);
        if (lVar11 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 008b1838 to 008b1843 has its CatchHandler @ 008b1bb0 */
      pcVar9 = (char *)(**(code **)(*(long *)this + 0x10))(this);
      iVar6 = strcmp(PTR_RNSVGMaskComponentName_0099f1f0,pcVar9);
      if (iVar6 != 0) goto LAB_008b1854;
      bVar3 = false;
    }
                    /* try { // try from 008b1948 to 008b194b has its CatchHandler @ 008b1c28 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar7 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 008b1958 to 008b1973 has its CatchHandler @ 008b1bd8 */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(plVar8 + 7));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 008b1ab4 to 008b1ac3 has its CatchHandler @ 008b1bd0 */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_008b1c74;
      }
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (*(int *)(plVar4 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 008b1a94 to 008b1aa3 has its CatchHandler @ 008b1c34 */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_008b1c74;
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
                    /* try { // try from 008b19f4 to 008b19ff has its CatchHandler @ 008b1c3c */
        folly::dynamic::dynamic(local_d0,(dynamic *)(plVar4 + 8));
        local_a0 = 0;
                    /* try { // try from 008b1a04 to 008b1a1b has its CatchHandler @ 008b1c40 */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (this,param_3,uVar1,pcVar9,local_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 008b1a2c to 008b1a37 has its CatchHandler @ 008b1c30 */
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
LAB_008b1c74:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008b1c78  FUN_008b1c78 =====

void FUN_008b1c78(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 008b1c80  FUN_008b1c80 =====

void FUN_008b1c80(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 008b1c88  FUN_008b1c88 =====

void FUN_008b1c88(undefined8 *param_1,long param_2,long param_3)

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
                    /* try { // try from 008b1ccc to 008b1cd3 has its CatchHandler @ 008b1ed4 */
  plVar6 = (long *)operator_new(0x68);
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&PTR_FUN_00992a08;
                    /* try { // try from 008b1cec to 008b1cf7 has its CatchHandler @ 008b1ebc */
  local_78 = FUN_008707fc(plVar6 + 3,&local_58,param_2 + 8);
  local_70 = plVar6;
  if ((local_50 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,local_50 + 1), lVar7 == 0)) {
    (**(code **)(*local_50 + 0x10))(local_50);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 008b1d2c to 008b1d33 has its CatchHandler @ 008b1eac */
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
                    /* try { // try from 008b1d80 to 008b1d97 has its CatchHandler @ 008b1e7c */
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
                    /* try { // try from 008b1dec to 008b1df7 has its CatchHandler @ 008b1e5c */
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


// ===== 008b1efc  FUN_008b1efc =====

void FUN_008b1efc(void)

{
  return;
}


// ===== 008b1f00  FUN_008b1f00 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_008b1f00(long param_1)

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
  FUN_0078917c(param_1,PTR_VTT_0099f200 + 8);
  return;
}


// ===== 008b20b4  FUN_008b20b4 =====

void FUN_008b20b4(long param_1)

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


// ===== 008b2104  FUN_008b2104 =====

void FUN_008b2104(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099a728;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008b2114  FUN_008b2114 =====

void FUN_008b2114(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099a728;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008b2144  FUN_008b2144 =====

void FUN_008b2144(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x008b214c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 008b2150  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008b2154  FUN_008b2154 =====

void FUN_008b2154(long *param_1)

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


// ===== 008b2214  FUN_008b2214 =====

void FUN_008b2214(long param_1)

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


// ===== 008b227c  FUN_008b227c =====

bool FUN_008b227c(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 008b2294  FUN_008b2294 =====

bool FUN_008b2294(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 008b22ac  FUN_008b22ac =====

void FUN_008b22ac(long param_1)

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


// ===== 008b22fc  FUN_008b22fc =====

void FUN_008b22fc(void)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0xa60);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_0099a840;
  memset(__s,0,0xa48);
                    /* try { // try from 008b2338 to 008b234b has its CatchHandler @ 008b249c */
  FUN_00788b10(__s,PTR_VTT_0099f200 + 0x10);
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
  puVar1 = PTR_vtable_0099f1f8;
  *(undefined4 *)(puVar2 + 0xd9) = 0;
  *(undefined2 *)((long)puVar2 + 0x6cc) = 0;
  puVar2[0xe1] = 0;
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
  puVar2[0x111] = 0;
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
  *(undefined4 *)(puVar2 + 0x138) = 0;
  puVar2[0x139] = 0;
  *(undefined4 *)(puVar2 + 0x13e) = 0;
  puVar2[0x13f] = 0;
  *(undefined4 *)(puVar2 + 0x144) = 0;
  puVar2[0x145] = 0;
  puVar2[0x14a] = 0;
  *(undefined4 *)(puVar2 + 0x14b) = 0;
  *(undefined4 *)(puVar2 + 0x120) = 0;
  puVar2[0x11f] = 0;
  puVar2[0x11e] = 0;
  puVar2[0x11d] = 0;
  puVar2[0x11c] = 0;
  puVar1 = 
  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGMaskComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGMaskPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099eca8
  ;
  puVar2[0x11b] = 0;
  puVar2[0x11a] = 0;
  *(undefined8 **)puVar1 = __s;
  *(undefined8 **)(puVar1 + 8) = puVar2;
  return;
}


// ===== 008b24b8  FUN_008b24b8 =====

void FUN_008b24b8(long param_1)

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


// ===== 008b2508  FUN_008b2508 =====

void FUN_008b2508(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099a840;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008b2518  FUN_008b2518 =====

void FUN_008b2518(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099a840;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008b2548  FUN_008b2548 =====

void FUN_008b2548(long param_1)

{
  FUN_008b1f00(param_1 + 0x18);
  return;
}


// ===== 008b2550  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008b2554  FUN_008b2554 =====

void FUN_008b2554(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099a890;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008b2564  FUN_008b2564 =====

void FUN_008b2564(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099a890;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008b2594  FUN_008b2594 =====

void FUN_008b2594(long param_1)

{
  FUN_008b1f00(param_1 + 0x18);
  return;
}


// ===== 008b259c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008b25a0  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_23RNSVGConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGPathComponentNameEEEENS0_14RNSVGPathPropsEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENS8_14default_deleteISB_EEEERKNS0_29ComponentDescriptorParametersE =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_23RNSVGConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGPathComponentNameEEEENS0_14RNSVGPathPropsEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENS8_14default_deleteISB_EEEERKNS0_29ComponentDescriptorParametersE
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
  undefined4 local_1410 [2];
  undefined8 *local_1408;
  void *local_1400;
  void *pvStack_13f8;
  undefined8 local_13f0;
  void *pvStack_13e8;
  void *local_13e0;
  undefined8 uStack_13d8;
  void *local_13d0;
  void *pvStack_13c8;
  undefined8 uStack_13c0;
  undefined8 uStack_13b8;
  undefined *local_13b0;
  undefined8 uStack_13a8;
  undefined8 local_13a0;
  undefined8 uStack_1398;
  undefined4 local_1390 [2];
  undefined8 local_1388;
  undefined8 uStack_1380;
  undefined8 local_1378;
  undefined8 uStack_1370;
  undefined4 local_1368;
  undefined4 local_1360;
  undefined1 local_135c;
  undefined8 local_135b;
  undefined8 local_1353;
  undefined8 uStack_134b;
  undefined8 local_1343;
  undefined8 uStack_133b;
  undefined8 local_1333;
  undefined8 uStack_132b;
  undefined8 local_1323;
  undefined6 uStack_131b;
  undefined2 uStack_1315;
  undefined6 uStack_1313;
  undefined8 uStack_130d;
  undefined4 local_1305;
  undefined8 local_1301;
  undefined1 local_12f9;
  undefined1 uStack_12f8;
  undefined7 uStack_12f7;
  undefined8 uStack_12f0;
  undefined8 uStack_12e8;
  undefined8 uStack_12e0;
  undefined8 local_12d8;
  undefined8 uStack_12d0;
  undefined8 local_12c8;
  undefined8 uStack_12c0;
  undefined8 local_12b8;
  undefined8 uStack_12b0;
  undefined8 local_12a8;
  undefined8 uStack_12a0;
  undefined8 uStack_1298;
  undefined8 local_1290;
  undefined8 local_1288;
  undefined8 uStack_1280;
  undefined8 local_1278;
  undefined4 uStack_1270;
  undefined4 uStack_126c;
  undefined4 uStack_1268;
  undefined4 uStack_1264;
  undefined4 uStack_1260;
  undefined4 uStack_125c;
  undefined8 local_1258;
  undefined8 uStack_1250;
  undefined4 local_1248;
  undefined1 local_1244;
  undefined4 local_1240;
  undefined1 local_123c;
  undefined4 local_1238;
  undefined1 local_1234;
  undefined4 local_1230;
  undefined1 local_122c;
  undefined4 local_1228;
  undefined1 local_1224;
  undefined4 local_1220;
  undefined1 local_121c;
  undefined4 local_1218;
  undefined1 local_1214;
  undefined4 local_1210;
  undefined1 local_120c;
  undefined4 local_1208;
  undefined1 local_1204;
  undefined4 local_1200;
  undefined1 local_11fc;
  undefined4 local_11f8;
  undefined1 local_11f4;
  undefined4 local_11f0;
  undefined1 local_11ec;
  undefined4 local_11e8;
  undefined1 local_11e4;
  undefined4 local_11e0;
  undefined1 local_11dc;
  undefined4 local_11d8;
  undefined1 local_11d4;
  undefined4 local_11d0;
  undefined1 local_11cc;
  undefined1 local_11c8;
  undefined1 local_11c4;
  undefined1 local_11b8;
  undefined8 local_11b0;
  undefined8 uStack_11a8;
  undefined8 uStack_11a0;
  undefined8 uStack_1198;
  undefined8 local_1190;
  undefined8 uStack_1188;
  undefined8 uStack_1180;
  undefined1 uStack_1178;
  undefined7 local_1177;
  undefined1 uStack_1170;
  undefined8 uStack_116f;
  undefined8 local_1164;
  undefined8 uStack_115c;
  undefined8 uStack_1154;
  undefined8 uStack_114c;
  undefined8 local_1144;
  undefined8 uStack_113c;
  undefined8 uStack_1134;
  undefined8 uStack_112c;
  undefined8 local_1124;
  undefined8 uStack_111c;
  undefined8 uStack_1114;
  undefined5 uStack_110c;
  undefined3 local_1107;
  undefined5 uStack_1104;
  undefined1 local_10fc;
  undefined1 local_10f8;
  undefined1 local_10f4;
  undefined1 local_10f0;
  undefined1 local_10ec;
  undefined1 local_10e8;
  undefined1 local_10d0;
  undefined8 local_10c8;
  undefined8 uStack_10c0;
  undefined8 local_10b8;
  undefined4 local_10b0;
  undefined1 local_10ac;
  undefined4 local_10ab;
  undefined1 local_10a7;
  undefined1 local_10a6;
  undefined8 local_10a0;
  undefined8 uStack_1098;
  undefined8 uStack_1090;
  undefined8 uStack_1088;
  undefined8 local_1080;
  undefined7 uStack_1078;
  undefined4 uStack_1071;
  undefined8 local_106c;
  undefined1 local_1064;
  undefined1 local_105c;
  undefined1 local_1058;
  undefined1 local_1050;
  undefined1 local_104c;
  undefined1 local_1044;
  undefined1 local_1040;
  undefined1 local_1038;
  undefined1 local_1034;
  undefined1 local_102c;
  undefined1 local_1028;
  undefined1 local_1020;
  undefined1 local_101c;
  undefined1 local_1014;
  undefined1 local_1010;
  undefined1 local_1008;
  undefined1 local_1004;
  undefined1 local_ffc;
  undefined1 local_ff8;
  undefined1 local_ff0;
  undefined1 local_fec;
  undefined1 local_fe4;
  undefined1 local_fe0;
  undefined1 local_fd8;
  undefined1 local_fd4;
  undefined1 local_fcc;
  undefined1 local_fc8;
  undefined1 local_fc4;
  undefined1 local_fc0;
  undefined1 local_fbc;
  undefined1 local_fb8;
  undefined1 local_fb4;
  undefined1 local_fb0;
  undefined1 local_fac;
  undefined1 local_fa8;
  undefined1 local_fa4;
  undefined1 local_fa0;
  undefined1 local_f9c;
  undefined1 local_f98;
  undefined1 local_f94;
  undefined1 local_f90;
  undefined1 local_f8c;
  undefined1 local_f88;
  undefined1 local_f84;
  undefined1 local_f80;
  undefined1 local_f7c;
  undefined1 local_f78;
  undefined1 local_f74;
  undefined1 local_f70;
  undefined1 local_f6c;
  undefined8 local_f68;
  undefined8 uStack_f60;
  undefined8 local_f58;
  undefined8 uStack_f50;
  undefined8 uStack_f48;
  undefined8 uStack_f40;
  undefined2 local_f38;
  undefined8 local_f34;
  undefined1 local_f2c;
  undefined8 local_f28;
  undefined8 local_f20;
  undefined8 uStack_f18;
  undefined1 local_f10;
  undefined8 local_f08;
  undefined8 uStack_f00;
  undefined8 uStack_ef8;
  undefined8 uStack_ef0;
  undefined8 local_ee8;
  undefined8 uStack_ee0;
  undefined8 uStack_ed8;
  undefined8 uStack_ed0;
  undefined8 local_ec8;
  undefined8 uStack_ec0;
  undefined8 uStack_eb8;
  undefined8 uStack_eb0;
  undefined8 local_ea8;
  undefined8 uStack_ea0;
  undefined8 uStack_e98;
  undefined8 uStack_e90;
  undefined8 local_e88;
  undefined8 uStack_e80;
  undefined8 uStack_e78;
  undefined8 uStack_e70;
  undefined8 local_e68;
  undefined8 uStack_e60;
  undefined8 local_e58;
  undefined8 uStack_e50;
  undefined8 local_e48;
  undefined8 uStack_e40;
  undefined8 local_e38;
  undefined8 uStack_e30;
  undefined8 local_e28;
  undefined8 uStack_e20;
  undefined8 local_e18;
  undefined6 uStack_e10;
  undefined2 uStack_e0a;
  undefined6 uStack_e08;
  undefined1 local_e00;
  undefined1 local_dfc;
  undefined1 local_df8;
  undefined8 local_df4;
  undefined8 uStack_dec;
  undefined1 local_de4;
  undefined8 local_de0;
  undefined2 local_dd8;
  undefined1 local_dd6;
  undefined4 local_dd4;
  undefined1 local_dd0;
  undefined1 local_d70;
  undefined1 local_d68;
  undefined1 local_d08;
  undefined4 local_d00;
  undefined2 local_cfc;
  undefined1 local_cf8;
  undefined1 local_cf4;
  undefined1 local_cf0;
  undefined1 local_cec;
  undefined1 local_ce8;
  undefined1 local_ce4;
  undefined1 local_ce0;
  undefined1 local_cdc;
  undefined1 local_cd8;
  undefined1 local_cd4;
  undefined8 local_cd0;
  undefined8 uStack_cc8;
  undefined8 local_cc0;
  undefined4 local_cb8;
  undefined8 local_cb0;
  undefined8 uStack_ca8;
  undefined8 local_ca0;
  undefined8 uStack_c98;
  undefined8 local_c90;
  undefined8 uStack_c88;
  undefined8 local_c80;
  undefined8 uStack_c78;
  undefined8 local_c70;
  undefined8 uStack_c68;
  undefined8 local_c60;
  undefined8 uStack_c58;
  undefined8 local_c50;
  undefined8 uStack_c48;
  undefined8 local_c40;
  undefined8 uStack_c38;
  undefined8 local_c30;
  undefined5 uStack_c28;
  undefined3 uStack_c23;
  undefined5 uStack_c20;
  undefined8 local_c18;
  undefined8 uStack_c10;
  undefined8 local_c08;
  undefined8 uStack_c00;
  undefined8 uStack_bf8;
  undefined8 uStack_bf0;
  undefined4 local_be8;
  undefined4 local_be0;
  undefined8 local_bd8;
  undefined8 local_bb0;
  undefined4 local_ba8;
  undefined8 local_ba0;
  undefined4 local_b78;
  undefined4 local_b70;
  undefined8 local_b68;
  undefined8 local_b40;
  undefined4 local_b38;
  undefined8 local_b30;
  undefined8 local_b08;
  undefined4 local_b00;
  undefined8 local_af8;
  undefined8 uStack_af0;
  undefined8 uStack_ae8;
  undefined8 uStack_ae0;
  undefined8 local_ad8;
  undefined8 uStack_ad0;
  undefined8 uStack_ac8;
  undefined8 uStack_ac0;
  undefined8 local_ab8;
  undefined4 local_ab0 [2];
  undefined8 local_aa8;
  undefined8 uStack_aa0;
  undefined8 local_a98;
  undefined8 local_a90;
  undefined8 uStack_a88;
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
  pvStack_13e8 = (void *)0x0;
  local_13f0 = 0;
  uStack_13d8 = 0;
  local_13e0 = (void *)0x0;
  pvStack_13c8 = (void *)0x0;
  local_13d0 = (void *)0x0;
  uStack_13b8 = 0;
  uStack_13c0 = 0;
  pvStack_13f8 = (void *)0x0;
  local_1400 = (void *)0x0;
                    /* try { // try from 008b25f4 to 008b25ff has its CatchHandler @ 008b2cc8 */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_1400);
  local_f8 = 0;
  *(undefined ***)this = &PTR_FUN_0099a8e0;
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
                    /* try { // try from 008b266c to 008b267f has its CatchHandler @ 008b2cf8 */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1b0);
  local_100 = CONCAT44(local_100._4_4_,0x3f800000);
  local_1410[0] = 0xffffffff;
  uStack_108 = 0;
  local_110 = (void *)0x0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_1408 = &local_1b0;
  facebook::react::RawProps::facebook::react::RawProps::parse(&local_f8,this + 0x38);
  memset(local_1390,0,0x8e0);
  local_ab0[0] = 5;
  local_a98 = 0;
  local_13b0 = *(undefined **)(PTR_VTT_0099f218 + 0x20);
  local_1390[0] = 5;
  uStack_1398 = 0;
  local_13a0 = 0;
  uStack_13a8 = 0;
  local_a90 = 0;
  uStack_a88 = 0x3f800000;
  uStack_aa0 = 0;
  local_aa8 = 0;
  uStack_1380 = 0;
  local_1388 = 0;
  uStack_1370 = 0;
  local_1378 = 0;
  local_1368 = 0x3f800000;
  folly::dynamic::folly::dynamic::destroy(local_ab0);
  local_1360 = 0x10410710;
  local_135c = 0;
  uStack_1270 = 0;
  local_1278 = 0;
  uStack_125c = 0;
  uStack_1280 = 0;
  local_1288 = 0;
  uStack_12f7 = 0;
  uStack_134b = 0;
  local_1353 = 0;
  local_135b = _s__00375408;
  uStack_133b = 0;
  local_1343 = 0;
  uStack_f18 = _UNK_00371598;
  local_f20 = _DAT_00371590;
  uStack_132b = 0;
  local_1333 = 0;
  uStack_131b = 0;
  local_1323 = 0;
  uStack_e20 = _UNK_00488920;
  local_e28 = _DAT_00488918;
  uStack_e30 = _UNK_00488910;
  local_e38 = _DAT_00488908;
  local_1305 = 0x40004;
  uStack_1264 = 0;
  uStack_1260 = 0;
  uStack_126c = 0;
  uStack_1268 = 0;
  uStack_1250 = 0;
  local_1258 = 0;
  local_1248 = 0x7fc00000;
  local_1240 = 0x7fc00000;
  local_1238 = 0x7fc00000;
  local_1230 = 0x7fc00000;
  local_1228 = 0x7fc00000;
  local_1220 = 0x7fc00000;
  local_1218 = 0x7fc00000;
  local_1210 = 0x7fc00000;
  local_1208 = 0x7fc00000;
  local_1200 = 0x7fc00000;
  local_11f8 = 0x7fc00000;
  local_11f0 = 0x7fc00000;
  local_11e8 = 0x7fc00000;
  local_11e0 = 0x7fc00000;
  local_11d8 = 0x7fc00000;
  local_11d0 = 0x7fc00000;
  uStack_116f = 0;
  uStack_1170 = 0;
  uStack_115c = 0;
  local_1164 = 0;
  uStack_114c = 0;
  uStack_1154 = 0;
  uStack_113c = 0;
  local_1144 = 0;
  uStack_112c = 0;
  uStack_1134 = 0;
  uStack_111c = 0;
  local_1124 = 0;
  uStack_110c = 0;
  uStack_1114 = 0;
  local_1107 = 0;
  uStack_1104 = 0;
  local_10ac = 1;
  local_10ab = 0;
  local_10a6 = 0x23;
  local_106c = 0x3f800000;
  uStack_f50 = 0;
  local_f58 = 0;
  uStack_f40 = 0;
  uStack_f48 = 0;
  uStack_f60 = 0;
  local_f68 = 0;
  uStack_e40 = _UNK_00488900;
  local_e48 = _DAT_004888f8;
  local_f34 = 0;
  uStack_e50 = _UNK_004888f0;
  local_e58 = _DAT_004888e8;
  uStack_f00 = 0;
  local_f08 = 0;
  uStack_ef0 = 0;
  uStack_ef8 = 0;
  uStack_ee0 = 0;
  local_ee8 = 0;
  uStack_ed0 = 0;
  uStack_ed8 = 0;
  uStack_ec0 = 0;
  local_ec8 = 0;
  uStack_eb0 = 0;
  uStack_eb8 = 0;
  uStack_ea0 = 0;
  local_ea8 = 0;
  uStack_e90 = 0;
  uStack_e98 = 0;
  uStack_e80 = 0;
  local_e88 = 0;
  uStack_e70 = 0;
  uStack_e78 = 0;
  uStack_e60 = 0;
  local_e68 = 0;
  uStack_e08 = 0;
  uStack_e10 = 0;
  uStack_e0a = 0;
  local_e18 = 0;
  uStack_130d = 0;
  uStack_1315 = 0;
  uStack_1313 = 0;
  local_1301 = 0;
  local_12f9 = 0;
  uStack_12f8 = 0;
  uStack_12e8 = 0;
  uStack_12f0 = 0;
  local_12d8 = 0;
  uStack_12e0 = 0;
  local_12c8 = 0;
  uStack_12d0 = 0;
  local_12b8 = 0;
  uStack_12c0 = 0;
  local_12a8 = 0;
  uStack_12b0 = 0;
  uStack_1298 = 0;
  uStack_12a0 = 0;
  local_1290 = 0;
  local_1244 = 0;
  local_123c = 0;
  local_1234 = 0;
  local_122c = 0;
  local_1224 = 0;
  local_121c = 0;
  local_1214 = 0;
  local_120c = 0;
  local_1204 = 0;
  local_11fc = 0;
  local_11f4 = 0;
  local_11ec = 0;
  local_11e4 = 0;
  local_11dc = 0;
  local_11d4 = 0;
  local_11cc = 0;
  local_11c8 = 0;
  local_11c4 = 0;
  local_11b8 = 0;
  local_10fc = 0;
  local_10f8 = 0;
  local_10f4 = 0;
  local_10f0 = 0;
  local_10ec = 0;
  local_10e8 = 0;
  local_10d0 = 0;
  uStack_11a8 = 0;
  local_11b0 = 0;
  uStack_1198 = 0;
  uStack_11a0 = 0;
  uStack_1188 = 0;
  local_1190 = 0;
  uStack_1178 = 0;
  local_1177 = 0;
  uStack_1180 = 0;
  uStack_10c0 = 0;
  local_10c8 = 0;
  local_10b8 = 0;
  local_10b0 = 0;
  local_10a7 = 0;
  uStack_1098 = 0;
  local_10a0 = 0;
  uStack_1088 = 0;
  uStack_1090 = 0;
  uStack_1078 = 0;
  uStack_1071 = 0;
  local_1080 = 0;
  local_1064 = 0;
  local_105c = 0;
  local_1058 = 0;
  local_1050 = 0;
  local_104c = 0;
  local_1044 = 0;
  local_1040 = 0;
  local_1038 = 0;
  local_1034 = 0;
  local_102c = 0;
  local_1028 = 0;
  local_1020 = 0;
  local_101c = 0;
  local_1014 = 0;
  local_1010 = 0;
  local_1008 = 0;
  local_1004 = 0;
  local_ffc = 0;
  local_ff8 = 0;
  local_ff0 = 0;
  local_fec = 0;
  local_fe4 = 0;
  local_fe0 = 0;
  local_fd8 = 0;
  local_fd4 = 0;
  local_fcc = 0;
  local_fc8 = 0;
  local_fc4 = 0;
  local_fc0 = 0;
  local_fbc = 0;
  local_fb8 = 0;
  local_fb4 = 0;
  local_fb0 = 0;
  local_fac = 0;
  local_fa8 = 0;
  local_fa4 = 0;
  local_fa0 = 0;
  local_f9c = 0;
  local_f98 = 0;
  local_f94 = 0;
  local_f90 = 0;
  local_f8c = 0;
  local_f88 = 0;
  local_f84 = 0;
  local_f80 = 0;
  local_f7c = 0;
  local_f78 = 0;
  local_f74 = 0;
  local_f70 = 0;
  local_f6c = 0;
  local_f28 = 0;
  local_f38 = 0;
  local_f2c = 0;
  local_f10 = 0;
  local_e00 = 0;
  local_dfc = 0;
  local_df8 = 0;
  local_de0 = 0;
  uStack_dec = 0;
  local_df4 = 0;
  local_de4 = 0;
  local_dd8 = 0x101;
  local_dd6 = 0;
  local_dd4 = 0;
  local_dd0 = 0;
  local_d70 = 0;
  local_d68 = 0;
  local_d08 = 0;
  local_cf8 = 0;
  local_cf4 = 0;
  local_cf0 = 0;
  local_cec = 0;
  local_ce8 = 0;
  local_ce4 = 0;
  local_ce0 = 0;
  local_cdc = 0;
  local_cd8 = 0;
  local_cd4 = 0;
  local_cfc = 0;
  local_d00 = 0;
  local_13b0 = PTR_vtable_0099f210 + 0x20;
  local_cc0 = 0;
  uStack_c20 = 0;
  uStack_c00 = 0;
  local_c08 = 0;
  uStack_bf0 = 0;
  uStack_bf8 = 0;
  uStack_c10 = 0;
  local_c18 = 0;
  uStack_cc8 = 0;
  local_cd0 = 0;
  local_bb0 = 0x13f800000;
  local_cb8 = 0x3f800000;
  local_be0 = 0;
  local_bd8 = 0;
  uStack_ca8 = 0;
  local_cb0 = 0;
  uStack_c98 = 0;
  local_ca0 = 0;
  uStack_c88 = 0;
  local_c90 = 0;
  uStack_c78 = 0;
  local_c80 = 0;
  uStack_c68 = 0;
  local_c70 = 0;
  uStack_c58 = 0;
  local_c60 = 0;
  uStack_c48 = 0;
  local_c50 = 0;
  uStack_c38 = 0;
  local_c40 = 0;
  uStack_c28 = 0;
  uStack_c23 = 0;
  local_c30 = 0;
  local_be8 = 0;
  local_ba8 = 0;
  local_ba0 = 0;
  local_b78 = 0x3f800000;
  local_b70 = 0;
  local_b68 = 0;
  local_b40 = 0;
  local_b38 = 0;
  local_b30 = 0;
  local_b08 = 0;
  local_b00 = 0;
  uStack_af0 = 0;
  local_af8 = 0;
  uStack_ae0 = 0;
  uStack_ae8 = 0;
  uStack_ad0 = 0;
  local_ad8 = 0;
  uStack_ac0 = 0;
  uStack_ac8 = 0;
  local_ab8 = 0;
                    /* try { // try from 008b2b0c to 008b2b1f has its CatchHandler @ 008b2cf8 */
  facebook::react::RNSVGPathProps::RNSVGPathProps
            ((RNSVGPathProps *)local_ab0,(PropsParserContext *)local_1410,
             (RNSVGPathProps *)&local_13b0,(RawProps *)&local_f8);
  FUN_008b37bc(local_ab0);
  FUN_008b37bc(&local_13b0);
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
                    /* try { // try from 008b2c24 to 008b2c2f has its CatchHandler @ 008b2cfc */
        (*(code *)(&PTR_FUN_0098f088)[*(uint *)((long)pvVar3 + -8)])
                  (&local_13b0,(void *)((long)pvVar3 + -0x38));
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
  if (local_13d0 != (void *)0x0) {
    pvStack_13c8 = local_13d0;
    operator_delete(local_13d0);
  }
  if (pvStack_13e8 != (void *)0x0) {
    local_13e0 = pvStack_13e8;
    operator_delete(pvStack_13e8);
  }
  if (local_1400 != (void *)0x0) {
    pvStack_13f8 = local_1400;
    operator_delete(local_1400);
  }
  *param_1 = this;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008b2d00  FUN_008b2d00 =====

void FUN_008b2d00(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 008b2d24  FUN_008b2d24 =====

undefined * FUN_008b2d24(void)

{
  return PTR_RNSVGPathComponentName_0099f208;
}


// ===== 008b2d30  FUN_008b2d30 =====

undefined * FUN_008b2d30(void)

{
  return PTR_RNSVGPathComponentName_0099f208;
}


// ===== 008b2d3c  FUN_008b2d3c =====

undefined8 FUN_008b2d3c(void)

{
  return 0x61;
}


// ===== 008b2d44  FUN_008b2d44 =====

void FUN_008b2d44(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

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
  *puVar4 = &PTR_FUN_0099a970;
                    /* try { // try from 008b2db0 to 008b2dbf has its CatchHandler @ 008b2e24 */
  facebook::react::RNSVGLayoutableShadowNode::RNSVGLayoutableShadowNode
            (pRVar1,param_3,param_4,uVar3);
  lVar5 = *param_2;
  puVar4[3] = &PTR_FUN_0099a9c0;
                    /* try { // try from 008b2dd8 to 008b2de3 has its CatchHandler @ 008b2e14 */
  (**(code **)(lVar5 + 0x60))(param_2,pRVar1);
  *param_1 = pRVar1;
  param_1[1] = puVar4;
  if (*(long *)(lVar2 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008b2e54  FUN_008b2e54 =====

void FUN_008b2e54(undefined8 *param_1,long *param_2,ShadowNode *param_3,ShadowNodeFragment *param_4)

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
  *plVar3 = (long)&PTR_FUN_0099a970;
                    /* try { // try from 008b2eac to 008b2ebb has its CatchHandler @ 008b2f88 */
  facebook::react::RNSVGLayoutableShadowNode::RNSVGLayoutableShadowNode(pRVar1,param_3,param_4);
  plVar3[3] = (long)&PTR_FUN_0099a9c0;
  local_68 = pRVar1;
  local_60 = plVar3;
                    /* try { // try from 008b2ecc to 008b2edb has its CatchHandler @ 008b2fa0 */
  facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::
  completeClone(pRVar1,param_3,param_4);
  local_78 = pRVar1;
  local_70 = plVar3;
  FUN_00757d00(1,plVar3 + 1);
                    /* try { // try from 008b2eec to 008b2efb has its CatchHandler @ 008b2f78 */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_78);
  plVar3 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar4 = FUN_00757990(0xffffffffffffffff,local_70 + 1), lVar4 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pRVar1 = local_68;
                    /* try { // try from 008b2f38 to 008b2f43 has its CatchHandler @ 008b2fa0 */
  (**(code **)(*param_2 + 0x60))(param_2,local_68);
  *param_1 = pRVar1;
  param_1[1] = local_60;
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008b2fc8  FUN_008b2fc8 =====

void FUN_008b2fc8(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x008b2fd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 008b2fdc  FUN_008b2fdc =====

void FUN_008b2fdc(undefined8 *param_1,long param_2,PropsParserContext *param_3,long *param_4,
                 RawProps *param_5)

{
  RNSVGPathProps *this;
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
  RNSVGPathProps *pRVar12;
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
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGPathComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGPathPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ecc0
         & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGPathComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGPathPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ecc0
                                   ), iVar6 != 0)) {
                    /* try { // try from 008b3410 to 008b3413 has its CatchHandler @ 008b3440 */
      FUN_008b3ba4();
      __cxa_atexit(FUN_008b3d28,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGPathComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGPathPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ecb8
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGPathComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGPathPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ecc0
                         );
    }
    lVar11 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGPathComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGPathPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ecb8
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGPathComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGPathPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ecb8
    ;
    param_1[1] = lVar11;
    if (lVar11 != 0) {
      FUN_00757d00(1,lVar11 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    pRVar12 = (RNSVGPathProps *)*param_4;
    if (pRVar12 == (RNSVGPathProps *)0x0) {
      if (((*
            PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGPathComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGPathPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ecc0
           & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGPathComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGPathPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ecc0
                                     ), iVar6 != 0)) {
                    /* try { // try from 008b3390 to 008b3393 has its CatchHandler @ 008b3458 */
        FUN_008b3ba4();
        __cxa_atexit(FUN_008b3d28,
                     PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGPathComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGPathPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ecb8
                     ,&PTR_LOOP_008d5d30);
        __cxa_guard_release(
                           PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGPathComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGPathPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ecc0
                           );
      }
      pRVar12 = *(RNSVGPathProps **)
                 PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGPathComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGPathPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ecb8
      ;
    }
    plVar8 = (long *)operator_new(0x918);
    this = (RNSVGPathProps *)(plVar8 + 3);
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = (long)&PTR_FUN_0099aad8;
                    /* try { // try from 008b30bc to 008b30cf has its CatchHandler @ 008b34cc */
    facebook::react::RNSVGPathProps::RNSVGPathProps(this,param_3,pRVar12,param_5);
                    /* try { // try from 008b30d4 to 008b30e7 has its CatchHandler @ 008b34e4 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if ((((uVar7 & 1) == 0) ||
        (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar7 & 1) == 0)) ||
       (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
                enablePropsUpdateReconciliationAndroid(), (uVar7 & 1) == 0)) {
LAB_008b3110:
      FUN_00757d00(1,plVar8 + 1);
      if (*param_4 == 0) {
        if (((*
              PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGPathComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGPathPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ecc0
             & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(
                                       PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGPathComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGPathPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ecc0
                                       ), iVar6 != 0)) {
                    /* try { // try from 008b33d0 to 008b33d3 has its CatchHandler @ 008b3444 */
          FUN_008b3ba4();
          __cxa_atexit(FUN_008b3d28,
                       PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGPathComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGPathPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ecb8
                       ,&PTR_LOOP_008d5d30);
          __cxa_guard_release(
                             PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGPathComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGPathPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ecc0
                             );
        }
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 008b3178 to 008b318b has its CatchHandler @ 008b3470 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*(undefined8 *)
                         PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGPathComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGPathPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ecb8
                   ,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
LAB_008b31c4:
          (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
        }
        else if (local_b0 != (dynamic *)0x0) {
          lVar11 = 5;
          pdVar10 = local_b0;
          goto LAB_008b31c4;
        }
        if (plVar8 != (long *)0x0) goto LAB_008b31d8;
      }
      else {
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 008b312c to 008b313f has its CatchHandler @ 008b3498 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*param_4,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
        }
        else {
          if (local_b0 == (dynamic *)0x0) goto LAB_008b31d8;
          lVar11 = 5;
          pdVar10 = local_b0;
        }
        (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
LAB_008b31d8:
        lVar11 = FUN_00757990(0xffffffffffffffff,plVar8 + 1);
        if (lVar11 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 008b30f4 to 008b30ff has its CatchHandler @ 008b346c */
      pcVar9 = (char *)(**(code **)(*(long *)this + 0x10))(this);
      iVar6 = strcmp(PTR_RNSVGPathComponentName_0099f208,pcVar9);
      if (iVar6 != 0) goto LAB_008b3110;
      bVar3 = false;
    }
                    /* try { // try from 008b3204 to 008b3207 has its CatchHandler @ 008b34e4 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar7 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 008b3214 to 008b322f has its CatchHandler @ 008b3494 */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(plVar8 + 7));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 008b3370 to 008b337f has its CatchHandler @ 008b348c */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_008b3530;
      }
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (*(int *)(plVar4 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 008b3350 to 008b335f has its CatchHandler @ 008b34f0 */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_008b3530;
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
                    /* try { // try from 008b32b0 to 008b32bb has its CatchHandler @ 008b34f8 */
        folly::dynamic::dynamic(local_d0,(dynamic *)(plVar4 + 8));
        local_a0 = 0;
                    /* try { // try from 008b32c0 to 008b32d7 has its CatchHandler @ 008b34fc */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (this,param_3,uVar1,pcVar9,local_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 008b32e8 to 008b32f3 has its CatchHandler @ 008b34ec */
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
LAB_008b3530:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008b3534  FUN_008b3534 =====

void FUN_008b3534(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 008b353c  FUN_008b353c =====

void FUN_008b353c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 008b3544  FUN_008b3544 =====

void FUN_008b3544(undefined8 *param_1,long param_2,long param_3)

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
                    /* try { // try from 008b3588 to 008b358f has its CatchHandler @ 008b3790 */
  plVar6 = (long *)operator_new(0x68);
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&PTR_FUN_00992a08;
                    /* try { // try from 008b35a8 to 008b35b3 has its CatchHandler @ 008b3778 */
  local_78 = FUN_008707fc(plVar6 + 3,&local_58,param_2 + 8);
  local_70 = plVar6;
  if ((local_50 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,local_50 + 1), lVar7 == 0)) {
    (**(code **)(*local_50 + 0x10))(local_50);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 008b35e8 to 008b35ef has its CatchHandler @ 008b3768 */
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
                    /* try { // try from 008b363c to 008b3653 has its CatchHandler @ 008b3738 */
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
                    /* try { // try from 008b36a8 to 008b36b3 has its CatchHandler @ 008b3718 */
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


// ===== 008b37b8  FUN_008b37b8 =====

void FUN_008b37b8(void)

{
  return;
}


// ===== 008b37bc  FUN_008b37bc =====

/* WARNING: Type propagation algorithm not settling */

void FUN_008b37bc(long param_1)

{
  byte bVar1;
  void *pvVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  if ((*(byte *)(param_1 + 0x8e8) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x8d0);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x8f8));
    bVar1 = *(byte *)(param_1 + 0x8d0);
  }
  if ((bVar1 & 1) == 0) {
    pbVar4 = *(byte **)(param_1 + 0x8b8);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x8e0));
    pbVar4 = *(byte **)(param_1 + 0x8b8);
  }
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
  FUN_0078917c(param_1,PTR_VTT_0099f218 + 8);
  return;
}


// ===== 008b395c  FUN_008b395c =====

void FUN_008b395c(long param_1)

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


// ===== 008b39ac  FUN_008b39ac =====

void FUN_008b39ac(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099a970;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008b39bc  FUN_008b39bc =====

void FUN_008b39bc(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099a970;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008b39ec  FUN_008b39ec =====

void FUN_008b39ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x008b39f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 008b39f8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008b39fc  FUN_008b39fc =====

void FUN_008b39fc(long *param_1)

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


// ===== 008b3abc  FUN_008b3abc =====

void FUN_008b3abc(long param_1)

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


// ===== 008b3b24  FUN_008b3b24 =====

bool FUN_008b3b24(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 008b3b3c  FUN_008b3b3c =====

bool FUN_008b3b3c(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 008b3b54  FUN_008b3b54 =====

void FUN_008b3b54(long param_1)

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


// ===== 008b3ba4  FUN_008b3ba4 =====

void FUN_008b3ba4(void)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x918);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_0099aa88;
  memset(__s,0,0x900);
                    /* try { // try from 008b3be0 to 008b3bf3 has its CatchHandler @ 008b3d0c */
  FUN_00788b10(__s,PTR_VTT_0099f218 + 0x10);
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
  puVar1 = PTR_vtable_0099f210;
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
  puVar2[0x122] = 0;
  puVar2[0x121] = 0;
  puVar2[0x120] = 0;
  puVar2[0x11f] = 0;
  puVar2[0x11e] = 0;
  puVar2[0x11d] = 0;
  puVar2[0x11c] = 0;
  puVar1 = 
  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGPathComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGPathPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ecb8
  ;
  puVar2[0x11b] = 0;
  puVar2[0x11a] = 0;
  *(undefined8 **)puVar1 = __s;
  *(undefined8 **)(puVar1 + 8) = puVar2;
  return;
}


// ===== 008b3d28  FUN_008b3d28 =====

void FUN_008b3d28(long param_1)

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


// ===== 008b3d78  FUN_008b3d78 =====

void FUN_008b3d78(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099aa88;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008b3d88  FUN_008b3d88 =====

void FUN_008b3d88(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099aa88;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008b3db8  FUN_008b3db8 =====

void FUN_008b3db8(long param_1)

{
  FUN_008b37bc(param_1 + 0x18);
  return;
}


// ===== 008b3dc0  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008b3dc4  FUN_008b3dc4 =====

void FUN_008b3dc4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099aad8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008b3dd4  FUN_008b3dd4 =====

void FUN_008b3dd4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099aad8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008b3e04  FUN_008b3e04 =====

void FUN_008b3e04(long param_1)

{
  FUN_008b37bc(param_1 + 0x18);
  return;
}


// ===== 008b3e0c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008b3e10  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_23RNSVGConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGPatternComponentNameEEEENS0_17RNSVGPatternPropsEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENS8_14default_deleteISB_EEEERKNS0_29ComponentDescriptorParametersE =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_23RNSVGConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGPatternComponentNameEEEENS0_17RNSVGPatternPropsEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENS8_14default_deleteISB_EEEERKNS0_29ComponentDescriptorParametersE
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
  undefined4 local_1720 [2];
  undefined8 *local_1718;
  void *local_1710;
  void *pvStack_1708;
  undefined8 local_1700;
  void *pvStack_16f8;
  void *local_16f0;
  undefined8 uStack_16e8;
  void *local_16e0;
  void *pvStack_16d8;
  undefined8 uStack_16d0;
  undefined8 uStack_16c8;
  undefined *local_16c0;
  undefined8 uStack_16b8;
  undefined8 local_16b0;
  undefined8 uStack_16a8;
  undefined4 local_16a0 [2];
  undefined8 local_1698;
  undefined8 uStack_1690;
  undefined8 local_1688;
  undefined8 uStack_1680;
  undefined4 local_1678;
  undefined4 local_1670;
  undefined1 local_166c;
  undefined8 local_166b;
  undefined8 local_1663;
  undefined8 uStack_165b;
  undefined8 local_1653;
  undefined8 uStack_164b;
  undefined8 local_1643;
  undefined8 uStack_163b;
  undefined8 local_1633;
  undefined6 uStack_162b;
  undefined2 uStack_1625;
  undefined6 uStack_1623;
  undefined8 uStack_161d;
  undefined4 local_1615;
  undefined8 local_1611;
  undefined1 local_1609;
  undefined1 uStack_1608;
  undefined7 uStack_1607;
  undefined8 uStack_1600;
  undefined8 uStack_15f8;
  undefined8 uStack_15f0;
  undefined8 local_15e8;
  undefined8 uStack_15e0;
  undefined8 local_15d8;
  undefined8 uStack_15d0;
  undefined8 local_15c8;
  undefined8 uStack_15c0;
  undefined8 local_15b8;
  undefined8 uStack_15b0;
  undefined8 uStack_15a8;
  undefined8 local_15a0;
  undefined8 local_1598;
  undefined8 uStack_1590;
  undefined8 local_1588;
  undefined4 uStack_1580;
  undefined4 uStack_157c;
  undefined4 uStack_1578;
  undefined4 uStack_1574;
  undefined4 uStack_1570;
  undefined4 uStack_156c;
  undefined8 local_1568;
  undefined8 uStack_1560;
  undefined4 local_1558;
  undefined1 local_1554;
  undefined4 local_1550;
  undefined1 local_154c;
  undefined4 local_1548;
  undefined1 local_1544;
  undefined4 local_1540;
  undefined1 local_153c;
  undefined4 local_1538;
  undefined1 local_1534;
  undefined4 local_1530;
  undefined1 local_152c;
  undefined4 local_1528;
  undefined1 local_1524;
  undefined4 local_1520;
  undefined1 local_151c;
  undefined4 local_1518;
  undefined1 local_1514;
  undefined4 local_1510;
  undefined1 local_150c;
  undefined4 local_1508;
  undefined1 local_1504;
  undefined4 local_1500;
  undefined1 local_14fc;
  undefined4 local_14f8;
  undefined1 local_14f4;
  undefined4 local_14f0;
  undefined1 local_14ec;
  undefined4 local_14e8;
  undefined1 local_14e4;
  undefined4 local_14e0;
  undefined1 local_14dc;
  undefined1 local_14d8;
  undefined1 local_14d4;
  undefined1 local_14c8;
  undefined8 local_14c0;
  undefined8 uStack_14b8;
  undefined8 uStack_14b0;
  undefined8 uStack_14a8;
  undefined8 local_14a0;
  undefined8 uStack_1498;
  undefined8 uStack_1490;
  undefined1 uStack_1488;
  undefined7 local_1487;
  undefined1 uStack_1480;
  undefined8 uStack_147f;
  undefined8 local_1474;
  undefined8 uStack_146c;
  undefined8 uStack_1464;
  undefined8 uStack_145c;
  undefined8 local_1454;
  undefined8 uStack_144c;
  undefined8 uStack_1444;
  undefined8 uStack_143c;
  undefined8 local_1434;
  undefined8 uStack_142c;
  undefined8 uStack_1424;
  undefined5 uStack_141c;
  undefined3 local_1417;
  undefined5 uStack_1414;
  undefined1 local_140c;
  undefined1 local_1408;
  undefined1 local_1404;
  undefined1 local_1400;
  undefined1 local_13fc;
  undefined1 local_13f8;
  undefined1 local_13e0;
  undefined8 local_13d8;
  undefined8 uStack_13d0;
  undefined8 local_13c8;
  undefined4 local_13c0;
  undefined1 local_13bc;
  undefined4 local_13bb;
  undefined1 local_13b7;
  undefined1 local_13b6;
  undefined8 local_13b0;
  undefined8 uStack_13a8;
  undefined8 uStack_13a0;
  undefined8 uStack_1398;
  undefined8 local_1390;
  undefined7 uStack_1388;
  undefined4 uStack_1381;
  undefined8 local_137c;
  undefined1 local_1374;
  undefined1 local_136c;
  undefined1 local_1368;
  undefined1 local_1360;
  undefined1 local_135c;
  undefined1 local_1354;
  undefined1 local_1350;
  undefined1 local_1348;
  undefined1 local_1344;
  undefined1 local_133c;
  undefined1 local_1338;
  undefined1 local_1330;
  undefined1 local_132c;
  undefined1 local_1324;
  undefined1 local_1320;
  undefined1 local_1318;
  undefined1 local_1314;
  undefined1 local_130c;
  undefined1 local_1308;
  undefined1 local_1300;
  undefined1 local_12fc;
  undefined1 local_12f4;
  undefined1 local_12f0;
  undefined1 local_12e8;
  undefined1 local_12e4;
  undefined1 local_12dc;
  undefined1 local_12d8;
  undefined1 local_12d4;
  undefined1 local_12d0;
  undefined1 local_12cc;
  undefined1 local_12c8;
  undefined1 local_12c4;
  undefined1 local_12c0;
  undefined1 local_12bc;
  undefined1 local_12b8;
  undefined1 local_12b4;
  undefined1 local_12b0;
  undefined1 local_12ac;
  undefined1 local_12a8;
  undefined1 local_12a4;
  undefined1 local_12a0;
  undefined1 local_129c;
  undefined1 local_1298;
  undefined1 local_1294;
  undefined1 local_1290;
  undefined1 local_128c;
  undefined1 local_1288;
  undefined1 local_1284;
  undefined1 local_1280;
  undefined1 local_127c;
  undefined8 local_1278;
  undefined8 uStack_1270;
  undefined8 local_1268;
  undefined8 uStack_1260;
  undefined8 uStack_1258;
  undefined8 uStack_1250;
  undefined2 local_1248;
  undefined8 local_1244;
  undefined1 local_123c;
  undefined8 local_1238;
  undefined8 local_1230;
  undefined8 uStack_1228;
  undefined1 local_1220;
  undefined8 local_1218;
  undefined8 uStack_1210;
  undefined8 uStack_1208;
  undefined8 uStack_1200;
  undefined8 local_11f8;
  undefined8 uStack_11f0;
  undefined8 uStack_11e8;
  undefined8 uStack_11e0;
  undefined8 local_11d8;
  undefined8 uStack_11d0;
  undefined8 uStack_11c8;
  undefined8 uStack_11c0;
  undefined8 local_11b8;
  undefined8 uStack_11b0;
  undefined8 uStack_11a8;
  undefined8 uStack_11a0;
  undefined8 local_1198;
  undefined8 uStack_1190;
  undefined8 uStack_1188;
  undefined8 uStack_1180;
  undefined8 local_1178;
  undefined8 uStack_1170;
  undefined8 local_1168;
  undefined8 uStack_1160;
  undefined8 local_1158;
  undefined8 uStack_1150;
  undefined8 local_1148;
  undefined8 uStack_1140;
  undefined8 local_1138;
  undefined8 uStack_1130;
  undefined8 local_1128;
  undefined6 uStack_1120;
  undefined2 uStack_111a;
  undefined6 uStack_1118;
  undefined1 local_1110;
  undefined1 local_110c;
  undefined1 local_1108;
  undefined8 local_1104;
  undefined8 uStack_10fc;
  undefined1 local_10f4;
  undefined8 local_10f0;
  undefined2 local_10e8;
  undefined1 local_10e6;
  undefined4 local_10e4;
  undefined1 local_10e0;
  undefined1 local_1080;
  undefined1 local_1078;
  undefined1 local_1018;
  undefined4 local_1010;
  undefined2 local_100c;
  undefined1 local_1008;
  undefined1 local_1004;
  undefined1 local_1000;
  undefined1 local_ffc;
  undefined1 local_ff8;
  undefined1 local_ff4;
  undefined1 local_ff0;
  undefined1 local_fec;
  undefined1 local_fe8;
  undefined1 local_fe4;
  undefined8 local_fe0;
  undefined8 uStack_fd8;
  undefined8 local_fd0;
  undefined4 local_fc8;
  undefined8 local_fc0;
  undefined8 uStack_fb8;
  undefined8 local_fb0;
  undefined8 uStack_fa8;
  undefined8 local_fa0;
  undefined8 uStack_f98;
  undefined8 local_f90;
  undefined8 uStack_f88;
  undefined8 local_f80;
  undefined8 uStack_f78;
  undefined8 local_f70;
  undefined8 uStack_f68;
  undefined8 local_f60;
  undefined8 uStack_f58;
  undefined8 local_f50;
  undefined8 uStack_f48;
  undefined8 local_f40;
  undefined5 uStack_f38;
  undefined3 uStack_f33;
  undefined5 uStack_f30;
  undefined8 local_f28;
  undefined8 uStack_f20;
  undefined8 local_f18;
  undefined8 uStack_f10;
  undefined8 uStack_f08;
  undefined8 uStack_f00;
  undefined4 local_ef8;
  undefined4 local_ef0;
  undefined8 local_ee8;
  undefined8 local_ec0;
  undefined4 local_eb8;
  undefined8 local_eb0;
  undefined4 local_e88;
  undefined4 local_e80;
  undefined8 local_e78;
  undefined8 local_e50;
  undefined4 local_e48;
  undefined8 local_e40;
  undefined8 local_e18;
  undefined4 local_e10;
  undefined8 local_e08;
  undefined8 uStack_e00;
  undefined8 local_df8;
  undefined8 uStack_df0;
  undefined8 uStack_de8;
  undefined8 uStack_de0;
  undefined4 local_dd8;
  undefined8 local_dd0;
  undefined4 local_da8;
  undefined8 local_da0;
  undefined4 local_d78;
  undefined8 local_d70;
  undefined4 local_d48;
  undefined8 local_d40;
  undefined4 local_d18;
  undefined8 local_d10;
  undefined4 local_ce8;
  undefined8 local_ce0;
  undefined4 local_cb8;
  undefined8 local_cb0;
  undefined8 local_c88;
  undefined8 uStack_c80;
  undefined8 uStack_c78;
  undefined8 uStack_c70;
  undefined8 local_c68;
  undefined8 uStack_c60;
  undefined8 uStack_c58;
  undefined4 uStack_c50;
  undefined4 local_c4c;
  undefined4 uStack_c48;
  undefined8 uStack_c44;
  undefined4 local_c38 [2];
  undefined8 local_c30;
  undefined8 uStack_c28;
  undefined8 local_c20;
  undefined8 local_c18;
  undefined8 uStack_c10;
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
  pvStack_16f8 = (void *)0x0;
  local_1700 = 0;
  uStack_16e8 = 0;
  local_16f0 = (void *)0x0;
  pvStack_16d8 = (void *)0x0;
  local_16e0 = (void *)0x0;
  uStack_16c8 = 0;
  uStack_16d0 = 0;
  pvStack_1708 = (void *)0x0;
  local_1710 = (void *)0x0;
                    /* try { // try from 008b3e64 to 008b3e6f has its CatchHandler @ 008b4580 */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_1710);
  local_f8 = 0;
  *(undefined ***)this = &PTR_FUN_0099ab28;
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
                    /* try { // try from 008b3ee0 to 008b3ef3 has its CatchHandler @ 008b45b0 */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1b0);
  local_100 = CONCAT44(local_100._4_4_,0x3f800000);
  local_1720[0] = 0xffffffff;
  uStack_108 = 0;
  local_110 = (void *)0x0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_1718 = &local_1b0;
  facebook::react::RawProps::facebook::react::RawProps::parse(&local_f8,this + 0x38);
  memset(local_16a0,0,0xa68);
  local_c38[0] = 5;
  local_c20 = 0;
  local_16c0 = *(undefined **)(PTR_VTT_0099f230 + 0x20);
  local_16a0[0] = 5;
  uStack_16a8 = 0;
  local_16b0 = 0;
  local_c18 = 0;
  uStack_16b8 = 0;
  uStack_c10 = 0x3f800000;
  uStack_c28 = 0;
  local_c30 = 0;
  uStack_1690 = 0;
  local_1698 = 0;
  uStack_1680 = 0;
  local_1688 = 0;
  local_1678 = 0x3f800000;
  folly::dynamic::folly::dynamic::destroy(local_c38);
  local_1670 = 0x10410710;
  local_166c = 0;
  uStack_1580 = 0;
  local_1588 = 0;
  uStack_156c = 0;
  uStack_1590 = 0;
  local_1598 = 0;
  uStack_1607 = 0;
  uStack_165b = 0;
  local_1663 = 0;
  local_166b = _s__00375408;
  uStack_164b = 0;
  local_1653 = 0;
  uStack_1228 = _UNK_00371598;
  local_1230 = _DAT_00371590;
  uStack_163b = 0;
  local_1643 = 0;
  uStack_162b = 0;
  local_1633 = 0;
  uStack_1130 = _UNK_00488920;
  local_1138 = _DAT_00488918;
  uStack_1140 = _UNK_00488910;
  local_1148 = _DAT_00488908;
  local_1615 = 0x40004;
  uStack_1574 = 0;
  uStack_1570 = 0;
  uStack_157c = 0;
  uStack_1578 = 0;
  uStack_1560 = 0;
  local_1568 = 0;
  local_1558 = 0x7fc00000;
  local_1550 = 0x7fc00000;
  local_1548 = 0x7fc00000;
  local_1540 = 0x7fc00000;
  local_1538 = 0x7fc00000;
  local_1530 = 0x7fc00000;
  local_1528 = 0x7fc00000;
  local_1520 = 0x7fc00000;
  local_1518 = 0x7fc00000;
  local_1510 = 0x7fc00000;
  local_1508 = 0x7fc00000;
  local_1500 = 0x7fc00000;
  local_14f8 = 0x7fc00000;
  local_14f0 = 0x7fc00000;
  local_14e8 = 0x7fc00000;
  local_14e0 = 0x7fc00000;
  uStack_147f = 0;
  uStack_1480 = 0;
  uStack_146c = 0;
  local_1474 = 0;
  uStack_145c = 0;
  uStack_1464 = 0;
  uStack_144c = 0;
  local_1454 = 0;
  uStack_143c = 0;
  uStack_1444 = 0;
  uStack_142c = 0;
  local_1434 = 0;
  uStack_141c = 0;
  uStack_1424 = 0;
  local_1417 = 0;
  uStack_1414 = 0;
  local_13bc = 1;
  local_13bb = 0;
  local_13b6 = 0x23;
  local_137c = 0x3f800000;
  uStack_1260 = 0;
  local_1268 = 0;
  uStack_1250 = 0;
  uStack_1258 = 0;
  uStack_1270 = 0;
  local_1278 = 0;
  uStack_1150 = _UNK_00488900;
  local_1158 = _DAT_004888f8;
  local_1244 = 0;
  uStack_1160 = _UNK_004888f0;
  local_1168 = _DAT_004888e8;
  uStack_1210 = 0;
  local_1218 = 0;
  uStack_1200 = 0;
  uStack_1208 = 0;
  uStack_11f0 = 0;
  local_11f8 = 0;
  uStack_11e0 = 0;
  uStack_11e8 = 0;
  uStack_11d0 = 0;
  local_11d8 = 0;
  uStack_11c0 = 0;
  uStack_11c8 = 0;
  uStack_11b0 = 0;
  local_11b8 = 0;
  uStack_11a0 = 0;
  uStack_11a8 = 0;
  uStack_1190 = 0;
  local_1198 = 0;
  uStack_1180 = 0;
  uStack_1188 = 0;
  uStack_1170 = 0;
  local_1178 = 0;
  uStack_1118 = 0;
  uStack_1120 = 0;
  uStack_111a = 0;
  local_1128 = 0;
  uStack_161d = 0;
  uStack_1625 = 0;
  uStack_1623 = 0;
  local_1611 = 0;
  local_1609 = 0;
  uStack_1608 = 0;
  uStack_15f8 = 0;
  uStack_1600 = 0;
  local_15e8 = 0;
  uStack_15f0 = 0;
  local_15d8 = 0;
  uStack_15e0 = 0;
  local_15c8 = 0;
  uStack_15d0 = 0;
  local_15b8 = 0;
  uStack_15c0 = 0;
  uStack_15a8 = 0;
  uStack_15b0 = 0;
  local_15a0 = 0;
  local_1554 = 0;
  local_154c = 0;
  local_1544 = 0;
  local_153c = 0;
  local_1534 = 0;
  local_152c = 0;
  local_1524 = 0;
  local_151c = 0;
  local_1514 = 0;
  local_150c = 0;
  local_1504 = 0;
  local_14fc = 0;
  local_14f4 = 0;
  local_14ec = 0;
  local_14e4 = 0;
  local_14dc = 0;
  local_14d8 = 0;
  local_14d4 = 0;
  local_14c8 = 0;
  local_140c = 0;
  local_1408 = 0;
  local_1404 = 0;
  local_1400 = 0;
  local_13fc = 0;
  local_13f8 = 0;
  local_13e0 = 0;
  uStack_14b8 = 0;
  local_14c0 = 0;
  uStack_14a8 = 0;
  uStack_14b0 = 0;
  uStack_1498 = 0;
  local_14a0 = 0;
  uStack_1488 = 0;
  local_1487 = 0;
  uStack_1490 = 0;
  uStack_13d0 = 0;
  local_13d8 = 0;
  local_13c8 = 0;
  local_13c0 = 0;
  local_13b7 = 0;
  uStack_13a8 = 0;
  local_13b0 = 0;
  uStack_1398 = 0;
  uStack_13a0 = 0;
  uStack_1388 = 0;
  uStack_1381 = 0;
  local_1390 = 0;
  local_1374 = 0;
  local_136c = 0;
  local_1368 = 0;
  local_1360 = 0;
  local_135c = 0;
  local_1354 = 0;
  local_1350 = 0;
  local_1348 = 0;
  local_1344 = 0;
  local_133c = 0;
  local_1338 = 0;
  local_1330 = 0;
  local_132c = 0;
  local_1324 = 0;
  local_1320 = 0;
  local_1318 = 0;
  local_1314 = 0;
  local_130c = 0;
  local_1308 = 0;
  local_1300 = 0;
  local_12fc = 0;
  local_12f4 = 0;
  local_12f0 = 0;
  local_12e8 = 0;
  local_12e4 = 0;
  local_12dc = 0;
  local_12d8 = 0;
  local_12d4 = 0;
  local_12d0 = 0;
  local_12cc = 0;
  local_12c8 = 0;
  local_12c4 = 0;
  local_12c0 = 0;
  local_12bc = 0;
  local_12b8 = 0;
  local_12b4 = 0;
  local_12b0 = 0;
  local_12ac = 0;
  local_12a8 = 0;
  local_12a4 = 0;
  local_12a0 = 0;
  local_129c = 0;
  local_1298 = 0;
  local_1294 = 0;
  local_1290 = 0;
  local_128c = 0;
  local_1288 = 0;
  local_1284 = 0;
  local_1280 = 0;
  local_127c = 0;
  local_1238 = 0;
  local_1248 = 0;
  local_123c = 0;
  local_1220 = 0;
  local_1110 = 0;
  local_110c = 0;
  local_1108 = 0;
  local_10f0 = 0;
  uStack_10fc = 0;
  local_1104 = 0;
  local_10f4 = 0;
  local_10e8 = 0x101;
  local_10e6 = 0;
  local_10e4 = 0;
  local_10e0 = 0;
  local_1080 = 0;
  local_1078 = 0;
  local_1018 = 0;
  local_1008 = 0;
  local_1004 = 0;
  local_1000 = 0;
  local_ffc = 0;
  local_ff8 = 0;
  local_ff4 = 0;
  local_ff0 = 0;
  local_fec = 0;
  local_fe8 = 0;
  local_fe4 = 0;
  local_100c = 0;
  local_1010 = 0;
  local_16c0 = PTR_vtable_0099f228 + 0x20;
  local_fd0 = 0;
  uStack_f30 = 0;
  uStack_f10 = 0;
  local_f18 = 0;
  uStack_f00 = 0;
  uStack_f08 = 0;
  uStack_f20 = 0;
  local_f28 = 0;
  uStack_fd8 = 0;
  local_fe0 = 0;
  local_ec0 = 0x13f800000;
  uStack_df0 = 0;
  local_df8 = 0;
  uStack_de0 = 0;
  uStack_de8 = 0;
  uStack_e00 = 0;
  local_e08 = 0;
  local_fc8 = 0x3f800000;
  local_ef0 = 0;
  local_ee8 = 0;
  uStack_fb8 = 0;
  local_fc0 = 0;
  uStack_fa8 = 0;
  local_fb0 = 0;
  uStack_f98 = 0;
  local_fa0 = 0;
  uStack_f88 = 0;
  local_f90 = 0;
  uStack_f78 = 0;
  local_f80 = 0;
  uStack_f68 = 0;
  local_f70 = 0;
  uStack_f58 = 0;
  local_f60 = 0;
  uStack_f48 = 0;
  local_f50 = 0;
  uStack_f38 = 0;
  uStack_f33 = 0;
  local_f40 = 0;
  local_ef8 = 0;
  local_eb8 = 0;
  local_eb0 = 0;
  local_e88 = 0x3f800000;
  local_e80 = 0;
  local_e78 = 0;
  local_e50 = 0;
  local_e48 = 0;
  local_e40 = 0;
  local_e18 = 0;
  local_e10 = 0;
  local_dd0 = 0;
  local_da8 = 0;
  local_da0 = 0;
  local_d78 = 0;
  local_d70 = 0;
  local_d48 = 0;
  local_d40 = 0;
  local_d18 = 0;
  local_d10 = 0;
  local_ce8 = 0;
  local_ce0 = 0;
  local_cb8 = 0;
  local_cb0 = 0;
  local_dd8 = 0;
  uStack_c80 = 0;
  local_c88 = 0;
  uStack_c70 = 0;
  uStack_c78 = 0;
  uStack_c60 = 0;
  local_c68 = 0;
  uStack_c50 = 0;
  uStack_c58 = 0;
  uStack_c44 = 0;
  local_c4c = 0;
  uStack_c48 = 0;
                    /* try { // try from 008b43c0 to 008b43d3 has its CatchHandler @ 008b45b0 */
  facebook::react::RNSVGPatternProps::RNSVGPatternProps
            ((RNSVGPatternProps *)local_c38,(PropsParserContext *)local_1720,
             (RNSVGPatternProps *)&local_16c0,(RawProps *)&local_f8);
  FUN_008b5074(local_c38);
  FUN_008b5074(&local_16c0);
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
                    /* try { // try from 008b44d8 to 008b44e3 has its CatchHandler @ 008b45b4 */
        (*(code *)(&PTR_FUN_0098f088)[*(uint *)((long)pvVar3 + -8)])
                  (&local_16c0,(void *)((long)pvVar3 + -0x38));
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
  if (local_16e0 != (void *)0x0) {
    pvStack_16d8 = local_16e0;
    operator_delete(local_16e0);
  }
  if (pvStack_16f8 != (void *)0x0) {
    local_16f0 = pvStack_16f8;
    operator_delete(pvStack_16f8);
  }
  if (local_1710 != (void *)0x0) {
    pvStack_1708 = local_1710;
    operator_delete(local_1710);
  }
  *param_1 = this;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008b45b8  FUN_008b45b8 =====

void FUN_008b45b8(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 008b45dc  FUN_008b45dc =====

undefined * FUN_008b45dc(void)

{
  return PTR_RNSVGPatternComponentName_0099f220;
}


// ===== 008b45e8  FUN_008b45e8 =====

undefined * FUN_008b45e8(void)

{
  return PTR_RNSVGPatternComponentName_0099f220;
}


// ===== 008b45f4  FUN_008b45f4 =====

undefined8 FUN_008b45f4(void)

{
  return 0x61;
}


// ===== 008b45fc  FUN_008b45fc =====

void FUN_008b45fc(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

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
  *puVar4 = &PTR_FUN_0099abb8;
                    /* try { // try from 008b4668 to 008b4677 has its CatchHandler @ 008b46dc */
  facebook::react::RNSVGLayoutableShadowNode::RNSVGLayoutableShadowNode
            (pRVar1,param_3,param_4,uVar3);
  lVar5 = *param_2;
  puVar4[3] = &PTR_FUN_0099ac08;
                    /* try { // try from 008b4690 to 008b469b has its CatchHandler @ 008b46cc */
  (**(code **)(lVar5 + 0x60))(param_2,pRVar1);
  *param_1 = pRVar1;
  param_1[1] = puVar4;
  if (*(long *)(lVar2 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008b470c  FUN_008b470c =====

void FUN_008b470c(undefined8 *param_1,long *param_2,ShadowNode *param_3,ShadowNodeFragment *param_4)

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
  *plVar3 = (long)&PTR_FUN_0099abb8;
                    /* try { // try from 008b4764 to 008b4773 has its CatchHandler @ 008b4840 */
  facebook::react::RNSVGLayoutableShadowNode::RNSVGLayoutableShadowNode(pRVar1,param_3,param_4);
  plVar3[3] = (long)&PTR_FUN_0099ac08;
  local_68 = pRVar1;
  local_60 = plVar3;
                    /* try { // try from 008b4784 to 008b4793 has its CatchHandler @ 008b4858 */
  facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::
  completeClone(pRVar1,param_3,param_4);
  local_78 = pRVar1;
  local_70 = plVar3;
  FUN_00757d00(1,plVar3 + 1);
                    /* try { // try from 008b47a4 to 008b47b3 has its CatchHandler @ 008b4830 */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_78);
  plVar3 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar4 = FUN_00757990(0xffffffffffffffff,local_70 + 1), lVar4 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pRVar1 = local_68;
                    /* try { // try from 008b47f0 to 008b47fb has its CatchHandler @ 008b4858 */
  (**(code **)(*param_2 + 0x60))(param_2,local_68);
  *param_1 = pRVar1;
  param_1[1] = local_60;
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008b4880  FUN_008b4880 =====

void FUN_008b4880(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x008b4890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 008b4894  FUN_008b4894 =====

void FUN_008b4894(undefined8 *param_1,long param_2,PropsParserContext *param_3,long *param_4,
                 RawProps *param_5)

{
  RNSVGPatternProps *this;
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
  RNSVGPatternProps *pRVar12;
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
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGPatternComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGPatternPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ecd0
         & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGPatternComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGPatternPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ecd0
                                   ), iVar6 != 0)) {
                    /* try { // try from 008b4cc8 to 008b4ccb has its CatchHandler @ 008b4cf8 */
      FUN_008b5490();
      __cxa_atexit(FUN_008b565c,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGPatternComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGPatternPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ecc8
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGPatternComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGPatternPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ecd0
                         );
    }
    lVar11 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGPatternComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGPatternPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ecc8
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGPatternComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGPatternPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ecc8
    ;
    param_1[1] = lVar11;
    if (lVar11 != 0) {
      FUN_00757d00(1,lVar11 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    pRVar12 = (RNSVGPatternProps *)*param_4;
    if (pRVar12 == (RNSVGPatternProps *)0x0) {
      if (((*
            PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGPatternComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGPatternPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ecd0
           & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGPatternComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGPatternPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ecd0
                                     ), iVar6 != 0)) {
                    /* try { // try from 008b4c48 to 008b4c4b has its CatchHandler @ 008b4d10 */
        FUN_008b5490();
        __cxa_atexit(FUN_008b565c,
                     PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGPatternComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGPatternPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ecc8
                     ,&PTR_LOOP_008d5d30);
        __cxa_guard_release(
                           PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGPatternComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGPatternPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ecd0
                           );
      }
      pRVar12 = *(RNSVGPatternProps **)
                 PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGPatternComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGPatternPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ecc8
      ;
    }
    plVar8 = (long *)operator_new(0xaa0);
    this = (RNSVGPatternProps *)(plVar8 + 3);
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = (long)&PTR_FUN_0099ad20;
                    /* try { // try from 008b4974 to 008b4987 has its CatchHandler @ 008b4d84 */
    facebook::react::RNSVGPatternProps::RNSVGPatternProps(this,param_3,pRVar12,param_5);
                    /* try { // try from 008b498c to 008b499f has its CatchHandler @ 008b4d9c */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if ((((uVar7 & 1) == 0) ||
        (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar7 & 1) == 0)) ||
       (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
                enablePropsUpdateReconciliationAndroid(), (uVar7 & 1) == 0)) {
LAB_008b49c8:
      FUN_00757d00(1,plVar8 + 1);
      if (*param_4 == 0) {
        if (((*
              PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGPatternComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGPatternPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ecd0
             & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(
                                       PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGPatternComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGPatternPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ecd0
                                       ), iVar6 != 0)) {
                    /* try { // try from 008b4c88 to 008b4c8b has its CatchHandler @ 008b4cfc */
          FUN_008b5490();
          __cxa_atexit(FUN_008b565c,
                       PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGPatternComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGPatternPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ecc8
                       ,&PTR_LOOP_008d5d30);
          __cxa_guard_release(
                             PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGPatternComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGPatternPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ecd0
                             );
        }
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 008b4a30 to 008b4a43 has its CatchHandler @ 008b4d28 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*(undefined8 *)
                         PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGPatternComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGPatternPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ecc8
                   ,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
LAB_008b4a7c:
          (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
        }
        else if (local_b0 != (dynamic *)0x0) {
          lVar11 = 5;
          pdVar10 = local_b0;
          goto LAB_008b4a7c;
        }
        if (plVar8 != (long *)0x0) goto LAB_008b4a90;
      }
      else {
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 008b49e4 to 008b49f7 has its CatchHandler @ 008b4d50 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*param_4,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
        }
        else {
          if (local_b0 == (dynamic *)0x0) goto LAB_008b4a90;
          lVar11 = 5;
          pdVar10 = local_b0;
        }
        (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
LAB_008b4a90:
        lVar11 = FUN_00757990(0xffffffffffffffff,plVar8 + 1);
        if (lVar11 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 008b49ac to 008b49b7 has its CatchHandler @ 008b4d24 */
      pcVar9 = (char *)(**(code **)(*(long *)this + 0x10))(this);
      iVar6 = strcmp(PTR_RNSVGPatternComponentName_0099f220,pcVar9);
      if (iVar6 != 0) goto LAB_008b49c8;
      bVar3 = false;
    }
                    /* try { // try from 008b4abc to 008b4abf has its CatchHandler @ 008b4d9c */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar7 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 008b4acc to 008b4ae7 has its CatchHandler @ 008b4d4c */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(plVar8 + 7));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 008b4c28 to 008b4c37 has its CatchHandler @ 008b4d44 */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_008b4de8;
      }
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (*(int *)(plVar4 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 008b4c08 to 008b4c17 has its CatchHandler @ 008b4da8 */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_008b4de8;
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
                    /* try { // try from 008b4b68 to 008b4b73 has its CatchHandler @ 008b4db0 */
        folly::dynamic::dynamic(local_d0,(dynamic *)(plVar4 + 8));
        local_a0 = 0;
                    /* try { // try from 008b4b78 to 008b4b8f has its CatchHandler @ 008b4db4 */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (this,param_3,uVar1,pcVar9,local_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 008b4ba0 to 008b4bab has its CatchHandler @ 008b4da4 */
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
LAB_008b4de8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008b4dec  FUN_008b4dec =====

void FUN_008b4dec(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 008b4df4  FUN_008b4df4 =====

void FUN_008b4df4(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 008b4dfc  FUN_008b4dfc =====

void FUN_008b4dfc(undefined8 *param_1,long param_2,long param_3)

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
                    /* try { // try from 008b4e40 to 008b4e47 has its CatchHandler @ 008b5048 */
  plVar6 = (long *)operator_new(0x68);
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&PTR_FUN_00992a08;
                    /* try { // try from 008b4e60 to 008b4e6b has its CatchHandler @ 008b5030 */
  local_78 = FUN_008707fc(plVar6 + 3,&local_58,param_2 + 8);
  local_70 = plVar6;
  if ((local_50 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,local_50 + 1), lVar7 == 0)) {
    (**(code **)(*local_50 + 0x10))(local_50);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 008b4ea0 to 008b4ea7 has its CatchHandler @ 008b5020 */
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
                    /* try { // try from 008b4ef4 to 008b4f0b has its CatchHandler @ 008b4ff0 */
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
                    /* try { // try from 008b4f60 to 008b4f6b has its CatchHandler @ 008b4fd0 */
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


// ===== 008b5070  FUN_008b5070 =====

void FUN_008b5070(void)

{
  return;
}


// ===== 008b5074  FUN_008b5074 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_008b5074(long param_1)

{
  byte bVar1;
  void *pvVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  if ((*(byte *)(param_1 + 0xa68) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0xa78));
  }
  pvVar2 = *(void **)(param_1 + 0xa40);
  if (pvVar2 != (void *)0x0) {
    *(void **)(param_1 + 0xa48) = pvVar2;
    operator_delete(pvVar2);
  }
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
  FUN_0078917c(param_1,PTR_VTT_0099f230 + 8);
  return;
}


// ===== 008b5248  FUN_008b5248 =====

void FUN_008b5248(long param_1)

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


// ===== 008b5298  FUN_008b5298 =====

void FUN_008b5298(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099abb8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008b52a8  FUN_008b52a8 =====

void FUN_008b52a8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099abb8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008b52d8  FUN_008b52d8 =====

void FUN_008b52d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x008b52e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 008b52e4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008b52e8  FUN_008b52e8 =====

void FUN_008b52e8(long *param_1)

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


// ===== 008b53a8  FUN_008b53a8 =====

void FUN_008b53a8(long param_1)

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


// ===== 008b5410  FUN_008b5410 =====

bool FUN_008b5410(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 008b5428  FUN_008b5428 =====

bool FUN_008b5428(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 008b5440  FUN_008b5440 =====

void FUN_008b5440(long param_1)

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


// ===== 008b5490  FUN_008b5490 =====

void FUN_008b5490(void)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0xaa0);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_0099acd0;
  memset(__s,0,0xa88);
                    /* try { // try from 008b54cc to 008b54df has its CatchHandler @ 008b5640 */
  FUN_00788b10(__s,PTR_VTT_0099f230 + 0x10);
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
  puVar1 = PTR_vtable_0099f228;
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
  *(undefined4 *)(puVar2 + 0x138) = 0;
  puVar2[0x139] = 0;
  *(undefined4 *)(puVar2 + 0x13e) = 0;
  puVar2[0x13f] = 0;
  *(undefined4 *)(puVar2 + 0x144) = 0;
  puVar2[0x145] = 0;
  *(undefined4 *)(puVar2 + 0x120) = 0;
  puVar2[0x11f] = 0;
  puVar2[0x11e] = 0;
  puVar2[0x11d] = 0;
  puVar2[0x11c] = 0;
  puVar2[0x11b] = 0;
  puVar2[0x11a] = 0;
  puVar2[0x14b] = 0;
  puVar2[0x14a] = 0;
  puVar2[0x14d] = 0;
  puVar2[0x14c] = 0;
  puVar2[0x14f] = 0;
  puVar2[0x14e] = 0;
  puVar2[0x151] = 0;
  puVar2[0x150] = 0;
  puVar1 = 
  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_25RNSVGPatternComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_17RNSVGPatternPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ecc8
  ;
  *(undefined8 *)((long)puVar2 + 0xa94) = 0;
  *(undefined8 *)((long)puVar2 + 0xa8c) = 0;
  *(undefined8 **)puVar1 = __s;
  *(undefined8 **)(puVar1 + 8) = puVar2;
  return;
}


// ===== 008b565c  FUN_008b565c =====

void FUN_008b565c(long param_1)

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


// ===== 008b56ac  FUN_008b56ac =====

void FUN_008b56ac(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099acd0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008b56bc  FUN_008b56bc =====

void FUN_008b56bc(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099acd0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008b56ec  FUN_008b56ec =====

void FUN_008b56ec(long param_1)

{
  FUN_008b5074(param_1 + 0x18);
  return;
}


// ===== 008b56f4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008b56f8  FUN_008b56f8 =====

void FUN_008b56f8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099ad20;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008b5708  FUN_008b5708 =====

void FUN_008b5708(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099ad20;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008b5738  FUN_008b5738 =====

void FUN_008b5738(long param_1)

{
  FUN_008b5074(param_1 + 0x18);
  return;
}


// ===== 008b5740  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008b5744  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_23RNSVGConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGRadialGradientComponentNameEEEENS0_24RNSVGRadialGradientPropsEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENS8_14default_deleteISB_EEEERKNS0_29ComponentDescriptorParametersE =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_23RNSVGConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGRadialGradientComponentNameEEEENS0_24RNSVGRadialGradientPropsEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENS8_14default_deleteISB_EEEERKNS0_29ComponentDescriptorParametersE
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
  undefined4 local_1450 [2];
  undefined8 *local_1448;
  void *local_1440;
  void *pvStack_1438;
  undefined8 local_1430;
  void *pvStack_1428;
  void *local_1420;
  undefined8 uStack_1418;
  void *local_1410;
  void *pvStack_1408;
  undefined8 uStack_1400;
  undefined8 uStack_13f8;
  undefined *local_13f0;
  undefined8 uStack_13e8;
  undefined8 local_13e0;
  undefined8 uStack_13d8;
  undefined4 local_13d0 [2];
  undefined8 local_13c8;
  undefined8 uStack_13c0;
  undefined8 local_13b8;
  undefined8 uStack_13b0;
  undefined4 local_13a8;
  undefined4 local_13a0;
  undefined1 local_139c;
  undefined8 local_139b;
  undefined8 local_1393;
  undefined8 uStack_138b;
  undefined8 local_1383;
  undefined8 uStack_137b;
  undefined8 local_1373;
  undefined8 uStack_136b;
  undefined8 local_1363;
  undefined6 uStack_135b;
  undefined2 uStack_1355;
  undefined6 uStack_1353;
  undefined8 uStack_134d;
  undefined4 local_1345;
  undefined8 local_1341;
  undefined1 local_1339;
  undefined1 uStack_1338;
  undefined7 uStack_1337;
  undefined8 uStack_1330;
  undefined8 uStack_1328;
  undefined8 uStack_1320;
  undefined8 local_1318;
  undefined8 uStack_1310;
  undefined8 local_1308;
  undefined8 uStack_1300;
  undefined8 local_12f8;
  undefined8 uStack_12f0;
  undefined8 local_12e8;
  undefined8 uStack_12e0;
  undefined8 uStack_12d8;
  undefined8 local_12d0;
  undefined8 local_12c8;
  undefined8 uStack_12c0;
  undefined8 local_12b8;
  undefined4 uStack_12b0;
  undefined4 uStack_12ac;
  undefined4 uStack_12a8;
  undefined4 uStack_12a4;
  undefined4 uStack_12a0;
  undefined4 uStack_129c;
  undefined8 local_1298;
  undefined8 uStack_1290;
  undefined4 local_1288;
  undefined1 local_1284;
  undefined4 local_1280;
  undefined1 local_127c;
  undefined4 local_1278;
  undefined1 local_1274;
  undefined4 local_1270;
  undefined1 local_126c;
  undefined4 local_1268;
  undefined1 local_1264;
  undefined4 local_1260;
  undefined1 local_125c;
  undefined4 local_1258;
  undefined1 local_1254;
  undefined4 local_1250;
  undefined1 local_124c;
  undefined4 local_1248;
  undefined1 local_1244;
  undefined4 local_1240;
  undefined1 local_123c;
  undefined4 local_1238;
  undefined1 local_1234;
  undefined4 local_1230;
  undefined1 local_122c;
  undefined4 local_1228;
  undefined1 local_1224;
  undefined4 local_1220;
  undefined1 local_121c;
  undefined4 local_1218;
  undefined1 local_1214;
  undefined4 local_1210;
  undefined1 local_120c;
  undefined1 local_1208;
  undefined1 local_1204;
  undefined1 local_11f8;
  undefined8 local_11f0;
  undefined8 uStack_11e8;
  undefined8 uStack_11e0;
  undefined8 uStack_11d8;
  undefined8 local_11d0;
  undefined8 uStack_11c8;
  undefined8 uStack_11c0;
  undefined1 uStack_11b8;
  undefined7 local_11b7;
  undefined1 uStack_11b0;
  undefined8 uStack_11af;
  undefined8 local_11a4;
  undefined8 uStack_119c;
  undefined8 uStack_1194;
  undefined8 uStack_118c;
  undefined8 local_1184;
  undefined8 uStack_117c;
  undefined8 uStack_1174;
  undefined8 uStack_116c;
  undefined8 local_1164;
  undefined8 uStack_115c;
  undefined8 uStack_1154;
  undefined5 uStack_114c;
  undefined3 local_1147;
  undefined5 uStack_1144;
  undefined1 local_113c;
  undefined1 local_1138;
  undefined1 local_1134;
  undefined1 local_1130;
  undefined1 local_112c;
  undefined1 local_1128;
  undefined1 local_1110;
  undefined8 local_1108;
  undefined8 uStack_1100;
  undefined8 local_10f8;
  undefined4 local_10f0;
  undefined1 local_10ec;
  undefined4 local_10eb;
  undefined1 local_10e7;
  undefined1 local_10e6;
  undefined8 local_10e0;
  undefined8 uStack_10d8;
  undefined8 uStack_10d0;
  undefined8 uStack_10c8;
  undefined8 local_10c0;
  undefined7 uStack_10b8;
  undefined4 uStack_10b1;
  undefined8 local_10ac;
  undefined1 local_10a4;
  undefined1 local_109c;
  undefined1 local_1098;
  undefined1 local_1090;
  undefined1 local_108c;
  undefined1 local_1084;
  undefined1 local_1080;
  undefined1 local_1078;
  undefined1 local_1074;
  undefined1 local_106c;
  undefined1 local_1068;
  undefined1 local_1060;
  undefined1 local_105c;
  undefined1 local_1054;
  undefined1 local_1050;
  undefined1 local_1048;
  undefined1 local_1044;
  undefined1 local_103c;
  undefined1 local_1038;
  undefined1 local_1030;
  undefined1 local_102c;
  undefined1 local_1024;
  undefined1 local_1020;
  undefined1 local_1018;
  undefined1 local_1014;
  undefined1 local_100c;
  undefined1 local_1008;
  undefined1 local_1004;
  undefined1 local_1000;
  undefined1 local_ffc;
  undefined1 local_ff8;
  undefined1 local_ff4;
  undefined1 local_ff0;
  undefined1 local_fec;
  undefined1 local_fe8;
  undefined1 local_fe4;
  undefined1 local_fe0;
  undefined1 local_fdc;
  undefined1 local_fd8;
  undefined1 local_fd4;
  undefined1 local_fd0;
  undefined1 local_fcc;
  undefined1 local_fc8;
  undefined1 local_fc4;
  undefined1 local_fc0;
  undefined1 local_fbc;
  undefined1 local_fb8;
  undefined1 local_fb4;
  undefined1 local_fb0;
  undefined1 local_fac;
  undefined8 local_fa8;
  undefined8 uStack_fa0;
  undefined8 local_f98;
  undefined8 uStack_f90;
  undefined8 uStack_f88;
  undefined8 uStack_f80;
  undefined2 local_f78;
  undefined8 local_f74;
  undefined1 local_f6c;
  undefined8 local_f68;
  undefined8 local_f60;
  undefined8 uStack_f58;
  undefined1 local_f50;
  undefined8 local_f48;
  undefined8 uStack_f40;
  undefined8 uStack_f38;
  undefined8 uStack_f30;
  undefined8 local_f28;
  undefined8 uStack_f20;
  undefined8 uStack_f18;
  undefined8 uStack_f10;
  undefined8 local_f08;
  undefined8 uStack_f00;
  undefined8 uStack_ef8;
  undefined8 uStack_ef0;
  undefined8 local_ee8;
  undefined8 uStack_ee0;
  undefined8 uStack_ed8;
  undefined8 uStack_ed0;
  undefined8 local_ec8;
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
  undefined8 local_e68;
  undefined8 uStack_e60;
  undefined8 local_e58;
  undefined6 uStack_e50;
  undefined2 uStack_e4a;
  undefined6 uStack_e48;
  undefined1 local_e40;
  undefined1 local_e3c;
  undefined1 local_e38;
  undefined8 local_e34;
  undefined8 uStack_e2c;
  undefined1 local_e24;
  undefined8 local_e20;
  undefined2 local_e18;
  undefined1 local_e16;
  undefined4 local_e14;
  undefined1 local_e10;
  undefined1 local_db0;
  undefined1 local_da8;
  undefined1 local_d48;
  undefined4 local_d40;
  undefined2 local_d3c;
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
  undefined8 local_d10;
  undefined8 uStack_d08;
  undefined8 local_d00;
  undefined4 local_cf8;
  undefined8 local_cf0;
  undefined8 uStack_ce8;
  undefined8 local_ce0;
  undefined8 uStack_cd8;
  undefined8 local_cd0;
  undefined8 uStack_cc8;
  undefined8 local_cc0;
  undefined8 uStack_cb8;
  undefined8 local_cb0;
  undefined8 uStack_ca8;
  undefined8 local_ca0;
  undefined8 uStack_c98;
  undefined8 local_c90;
  undefined8 uStack_c88;
  undefined8 local_c80;
  undefined8 uStack_c78;
  undefined8 local_c70;
  undefined5 uStack_c68;
  undefined3 uStack_c63;
  undefined5 uStack_c60;
  undefined8 local_c58;
  undefined8 uStack_c50;
  undefined8 local_c48;
  undefined8 uStack_c40;
  undefined8 uStack_c38;
  undefined8 uStack_c30;
  undefined4 local_c28;
  undefined8 local_c20;
  undefined4 local_bf8;
  undefined8 local_bf0;
  undefined4 local_bc8;
  undefined8 local_bc0;
  undefined4 local_b98;
  undefined8 local_b90;
  undefined4 local_b68;
  undefined8 local_b60;
  undefined4 local_b38;
  undefined8 local_b30;
  undefined8 local_b08;
  undefined8 uStack_b00;
  undefined8 local_af8;
  undefined4 local_af0;
  undefined8 local_ae8;
  undefined8 uStack_ae0;
  undefined8 local_ad8;
  undefined4 local_ad0 [2];
  undefined8 local_ac8;
  undefined8 uStack_ac0;
  undefined8 local_ab8;
  undefined8 local_ab0;
  undefined8 uStack_aa8;
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
  pvStack_1428 = (void *)0x0;
  local_1430 = 0;
  uStack_1418 = 0;
  local_1420 = (void *)0x0;
  pvStack_1408 = (void *)0x0;
  local_1410 = (void *)0x0;
  uStack_13f8 = 0;
  uStack_1400 = 0;
  pvStack_1438 = (void *)0x0;
  local_1440 = (void *)0x0;
                    /* try { // try from 008b5798 to 008b57a3 has its CatchHandler @ 008b5e5c */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_1440);
  local_f8 = 0;
  *(undefined ***)this = &PTR_FUN_0099ad70;
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
                    /* try { // try from 008b5810 to 008b5823 has its CatchHandler @ 008b5e8c */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1b0);
  local_100 = CONCAT44(local_100._4_4_,0x3f800000);
  local_1450[0] = 0xffffffff;
  uStack_108 = 0;
  local_110 = (void *)0x0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_1448 = &local_1b0;
  facebook::react::RawProps::facebook::react::RawProps::parse(&local_f8,this + 0x38);
  memset(local_13d0,0,0x900);
  local_ad0[0] = 5;
  local_ab8 = 0;
  local_13f0 = *(undefined **)(PTR_VTT_0099f248 + 0x20);
  local_13d0[0] = 5;
  uStack_13d8 = 0;
  local_13e0 = 0;
  uStack_13e8 = 0;
  local_ab0 = 0;
  uStack_aa8 = 0x3f800000;
  uStack_ac0 = 0;
  local_ac8 = 0;
  uStack_13c0 = 0;
  local_13c8 = 0;
  uStack_13b0 = 0;
  local_13b8 = 0;
  local_13a8 = 0x3f800000;
  folly::dynamic::folly::dynamic::destroy(local_ad0);
  local_139c = 0;
  local_1341 = 0;
  uStack_e60 = _UNK_00488920;
  local_e68 = _DAT_00488918;
  local_139b = _s__00375408;
  uStack_f58 = _UNK_00371598;
  local_f60 = _DAT_00371590;
  uStack_e70 = _UNK_00488910;
  local_e78 = _DAT_00488908;
  local_1284 = 0;
  uStack_e80 = _UNK_00488900;
  local_e88 = _DAT_004888f8;
  uStack_e90 = _UNK_004888f0;
  local_e98 = _DAT_004888e8;
  uStack_e48 = 0;
  local_127c = 0;
  uStack_12b0 = 0;
  local_12b8 = 0;
  uStack_129c = 0;
  uStack_12c0 = 0;
  local_12c8 = 0;
  uStack_e50 = 0;
  uStack_e4a = 0;
  local_e58 = 0;
  local_13a0 = 0x10410710;
  local_1345 = 0x40004;
  uStack_12a4 = 0;
  uStack_12a0 = 0;
  uStack_12ac = 0;
  uStack_12a8 = 0;
  uStack_1290 = 0;
  local_1298 = 0;
  local_1288 = 0x7fc00000;
  local_1280 = 0x7fc00000;
  local_1278 = 0x7fc00000;
  local_1270 = 0x7fc00000;
  local_1268 = 0x7fc00000;
  local_1260 = 0x7fc00000;
  local_1258 = 0x7fc00000;
  local_1250 = 0x7fc00000;
  local_1248 = 0x7fc00000;
  local_1240 = 0x7fc00000;
  local_1238 = 0x7fc00000;
  local_1230 = 0x7fc00000;
  local_1228 = 0x7fc00000;
  local_1220 = 0x7fc00000;
  local_1218 = 0x7fc00000;
  local_1210 = 0x7fc00000;
  uStack_11af = 0;
  uStack_11b0 = 0;
  uStack_119c = 0;
  local_11a4 = 0;
  uStack_118c = 0;
  uStack_1194 = 0;
  uStack_117c = 0;
  local_1184 = 0;
  uStack_116c = 0;
  uStack_1174 = 0;
  uStack_115c = 0;
  local_1164 = 0;
  uStack_114c = 0;
  uStack_1154 = 0;
  local_1147 = 0;
  uStack_1144 = 0;
  local_10ec = 1;
  local_10eb = 0;
  local_10e6 = 0x23;
  local_10ac = 0x3f800000;
  uStack_f90 = 0;
  local_f98 = 0;
  uStack_f80 = 0;
  uStack_f88 = 0;
  uStack_fa0 = 0;
  local_fa8 = 0;
  local_f74 = 0;
  uStack_f40 = 0;
  local_f48 = 0;
  uStack_f30 = 0;
  uStack_f38 = 0;
  uStack_f20 = 0;
  local_f28 = 0;
  uStack_f10 = 0;
  uStack_f18 = 0;
  uStack_f00 = 0;
  local_f08 = 0;
  uStack_ef0 = 0;
  uStack_ef8 = 0;
  uStack_ee0 = 0;
  local_ee8 = 0;
  uStack_ed0 = 0;
  uStack_ed8 = 0;
  uStack_ec0 = 0;
  local_ec8 = 0;
  uStack_eb0 = 0;
  uStack_eb8 = 0;
  uStack_ea0 = 0;
  local_ea8 = 0;
  uStack_1337 = 0;
  uStack_138b = 0;
  local_1393 = 0;
  uStack_137b = 0;
  local_1383 = 0;
  uStack_136b = 0;
  local_1373 = 0;
  uStack_135b = 0;
  local_1363 = 0;
  uStack_134d = 0;
  uStack_1355 = 0;
  uStack_1353 = 0;
  local_1339 = 0;
  uStack_1338 = 0;
  uStack_1328 = 0;
  uStack_1330 = 0;
  local_1318 = 0;
  uStack_1320 = 0;
  local_1308 = 0;
  uStack_1310 = 0;
  local_12f8 = 0;
  uStack_1300 = 0;
  local_12e8 = 0;
  uStack_12f0 = 0;
  uStack_12d8 = 0;
  uStack_12e0 = 0;
  local_12d0 = 0;
  local_1274 = 0;
  local_126c = 0;
  local_1264 = 0;
  local_125c = 0;
  local_1254 = 0;
  local_124c = 0;
  local_1244 = 0;
  local_123c = 0;
  local_1234 = 0;
  local_122c = 0;
  local_1224 = 0;
  local_121c = 0;
  local_1214 = 0;
  local_120c = 0;
  local_1208 = 0;
  local_1204 = 0;
  local_11f8 = 0;
  local_113c = 0;
  local_1138 = 0;
  local_1134 = 0;
  local_1130 = 0;
  local_112c = 0;
  local_1128 = 0;
  local_1110 = 0;
  uStack_11e8 = 0;
  local_11f0 = 0;
  uStack_11d8 = 0;
  uStack_11e0 = 0;
  uStack_11c8 = 0;
  local_11d0 = 0;
  uStack_11b8 = 0;
  local_11b7 = 0;
  uStack_11c0 = 0;
  uStack_1100 = 0;
  local_1108 = 0;
  local_10f8 = 0;
  local_10f0 = 0;
  local_10e7 = 0;
  uStack_10d8 = 0;
  local_10e0 = 0;
  uStack_10c8 = 0;
  uStack_10d0 = 0;
  uStack_10b8 = 0;
  uStack_10b1 = 0;
  local_10c0 = 0;
  local_10a4 = 0;
  local_109c = 0;
  local_1098 = 0;
  local_1090 = 0;
  local_108c = 0;
  local_1084 = 0;
  local_1080 = 0;
  local_1078 = 0;
  local_1074 = 0;
  local_106c = 0;
  local_1068 = 0;
  local_1060 = 0;
  local_105c = 0;
  local_1054 = 0;
  local_1050 = 0;
  local_1048 = 0;
  local_1044 = 0;
  local_103c = 0;
  local_1038 = 0;
  local_1030 = 0;
  local_102c = 0;
  local_1024 = 0;
  local_1020 = 0;
  local_1018 = 0;
  local_1014 = 0;
  local_100c = 0;
  local_1008 = 0;
  local_1004 = 0;
  local_1000 = 0;
  local_ffc = 0;
  local_ff8 = 0;
  local_ff4 = 0;
  local_ff0 = 0;
  local_fec = 0;
  local_fe8 = 0;
  local_fe4 = 0;
  local_fe0 = 0;
  local_fdc = 0;
  local_fd8 = 0;
  local_fd4 = 0;
  local_fd0 = 0;
  local_fcc = 0;
  local_fc8 = 0;
  local_fc4 = 0;
  local_fc0 = 0;
  local_fbc = 0;
  local_fb8 = 0;
  local_fb4 = 0;
  local_fb0 = 0;
  local_fac = 0;
  local_f68 = 0;
  local_f78 = 0;
  local_f6c = 0;
  local_f50 = 0;
  local_e40 = 0;
  local_e3c = 0;
  local_e38 = 0;
  local_e20 = 0;
  uStack_e2c = 0;
  local_e34 = 0;
  local_e24 = 0;
  local_e18 = 0x101;
  local_e16 = 0;
  local_e14 = 0;
  local_e10 = 0;
  local_db0 = 0;
  local_da8 = 0;
  local_d48 = 0;
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
  local_d3c = 0;
  local_d40 = 0;
  local_13f0 = PTR_vtable_0099f240 + 0x20;
  local_d00 = 0;
  uStack_ae0 = 0;
  local_ae8 = 0;
  uStack_c60 = 0;
  uStack_c40 = 0;
  local_c48 = 0;
  uStack_c30 = 0;
  uStack_c38 = 0;
  uStack_c50 = 0;
  local_c58 = 0;
  uStack_d08 = 0;
  local_d10 = 0;
  local_cf8 = 0x3f800000;
  local_c20 = 0;
  local_bf8 = 0;
  local_bf0 = 0;
  local_bc8 = 0;
  local_bc0 = 0;
  local_b98 = 0;
  local_b90 = 0;
  local_b68 = 0;
  local_b60 = 0;
  local_b38 = 0;
  local_b30 = 0;
  local_ad8 = 0;
  uStack_c68 = 0;
  uStack_c63 = 0;
  local_c70 = 0;
  uStack_c78 = 0;
  local_c80 = 0;
  uStack_c88 = 0;
  local_c90 = 0;
  uStack_c98 = 0;
  local_ca0 = 0;
  uStack_ca8 = 0;
  local_cb0 = 0;
  uStack_cb8 = 0;
  local_cc0 = 0;
  uStack_cc8 = 0;
  local_cd0 = 0;
  uStack_cd8 = 0;
  local_ce0 = 0;
  uStack_ce8 = 0;
  local_cf0 = 0;
  local_c28 = 0;
  uStack_b00 = 0;
  local_b08 = 0;
  local_af0 = 0;
  local_af8 = 0;
                    /* try { // try from 008b5ca0 to 008b5cb3 has its CatchHandler @ 008b5e8c */
  facebook::react::RNSVGRadialGradientProps::RNSVGRadialGradientProps
            ((RNSVGRadialGradientProps *)local_ad0,(PropsParserContext *)local_1450,
             (RNSVGRadialGradientProps *)&local_13f0,(RawProps *)&local_f8);
  FUN_008b6950(local_ad0);
  FUN_008b6950(&local_13f0);
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
                    /* try { // try from 008b5db8 to 008b5dc3 has its CatchHandler @ 008b5e90 */
        (*(code *)(&PTR_FUN_0098f088)[*(uint *)((long)pvVar3 + -8)])
                  (&local_13f0,(void *)((long)pvVar3 + -0x38));
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
  if (local_1410 != (void *)0x0) {
    pvStack_1408 = local_1410;
    operator_delete(local_1410);
  }
  if (pvStack_1428 != (void *)0x0) {
    local_1420 = pvStack_1428;
    operator_delete(pvStack_1428);
  }
  if (local_1440 != (void *)0x0) {
    pvStack_1438 = local_1440;
    operator_delete(local_1440);
  }
  *param_1 = this;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008b5e94  FUN_008b5e94 =====

void FUN_008b5e94(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 008b5eb8  FUN_008b5eb8 =====

undefined * FUN_008b5eb8(void)

{
  return PTR_RNSVGRadialGradientComponentName_0099f238;
}


// ===== 008b5ec4  FUN_008b5ec4 =====

undefined * FUN_008b5ec4(void)

{
  return PTR_RNSVGRadialGradientComponentName_0099f238;
}


// ===== 008b5ed0  FUN_008b5ed0 =====

undefined8 FUN_008b5ed0(void)

{
  return 0x61;
}


// ===== 008b5ed8  FUN_008b5ed8 =====

void FUN_008b5ed8(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

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
  *puVar4 = &PTR_FUN_0099ae00;
                    /* try { // try from 008b5f44 to 008b5f53 has its CatchHandler @ 008b5fb8 */
  facebook::react::RNSVGLayoutableShadowNode::RNSVGLayoutableShadowNode
            (pRVar1,param_3,param_4,uVar3);
  lVar5 = *param_2;
  puVar4[3] = &PTR_FUN_0099ae50;
                    /* try { // try from 008b5f6c to 008b5f77 has its CatchHandler @ 008b5fa8 */
  (**(code **)(lVar5 + 0x60))(param_2,pRVar1);
  *param_1 = pRVar1;
  param_1[1] = puVar4;
  if (*(long *)(lVar2 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008b5fe8  FUN_008b5fe8 =====

void FUN_008b5fe8(undefined8 *param_1,long *param_2,ShadowNode *param_3,ShadowNodeFragment *param_4)

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
  *plVar3 = (long)&PTR_FUN_0099ae00;
                    /* try { // try from 008b6040 to 008b604f has its CatchHandler @ 008b611c */
  facebook::react::RNSVGLayoutableShadowNode::RNSVGLayoutableShadowNode(pRVar1,param_3,param_4);
  plVar3[3] = (long)&PTR_FUN_0099ae50;
  local_68 = pRVar1;
  local_60 = plVar3;
                    /* try { // try from 008b6060 to 008b606f has its CatchHandler @ 008b6134 */
  facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::
  completeClone(pRVar1,param_3,param_4);
  local_78 = pRVar1;
  local_70 = plVar3;
  FUN_00757d00(1,plVar3 + 1);
                    /* try { // try from 008b6080 to 008b608f has its CatchHandler @ 008b610c */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_78);
  plVar3 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar4 = FUN_00757990(0xffffffffffffffff,local_70 + 1), lVar4 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pRVar1 = local_68;
                    /* try { // try from 008b60cc to 008b60d7 has its CatchHandler @ 008b6134 */
  (**(code **)(*param_2 + 0x60))(param_2,local_68);
  *param_1 = pRVar1;
  param_1[1] = local_60;
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008b615c  FUN_008b615c =====

void FUN_008b615c(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x008b616c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 008b6170  FUN_008b6170 =====

void FUN_008b6170(undefined8 *param_1,long param_2,PropsParserContext *param_3,long *param_4,
                 RawProps *param_5)

{
  RNSVGRadialGradientProps *this;
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
  RNSVGRadialGradientProps *pRVar12;
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
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGRadialGradientComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_24RNSVGRadialGradientPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ece0
         & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGRadialGradientComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_24RNSVGRadialGradientPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ece0
                                   ), iVar6 != 0)) {
                    /* try { // try from 008b65a4 to 008b65a7 has its CatchHandler @ 008b65d4 */
      FUN_008b6ce0();
      __cxa_atexit(FUN_008b6e4c,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGRadialGradientComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_24RNSVGRadialGradientPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ecd8
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGRadialGradientComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_24RNSVGRadialGradientPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ece0
                         );
    }
    lVar11 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGRadialGradientComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_24RNSVGRadialGradientPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ecd8
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGRadialGradientComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_24RNSVGRadialGradientPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ecd8
    ;
    param_1[1] = lVar11;
    if (lVar11 != 0) {
      FUN_00757d00(1,lVar11 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    pRVar12 = (RNSVGRadialGradientProps *)*param_4;
    if (pRVar12 == (RNSVGRadialGradientProps *)0x0) {
      if (((*
            PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGRadialGradientComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_24RNSVGRadialGradientPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ece0
           & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGRadialGradientComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_24RNSVGRadialGradientPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ece0
                                     ), iVar6 != 0)) {
                    /* try { // try from 008b6524 to 008b6527 has its CatchHandler @ 008b65ec */
        FUN_008b6ce0();
        __cxa_atexit(FUN_008b6e4c,
                     PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGRadialGradientComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_24RNSVGRadialGradientPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ecd8
                     ,&PTR_LOOP_008d5d30);
        __cxa_guard_release(
                           PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGRadialGradientComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_24RNSVGRadialGradientPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ece0
                           );
      }
      pRVar12 = *(RNSVGRadialGradientProps **)
                 PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGRadialGradientComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_24RNSVGRadialGradientPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ecd8
      ;
    }
    plVar8 = (long *)operator_new(0x938);
    this = (RNSVGRadialGradientProps *)(plVar8 + 3);
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = (long)&PTR_FUN_0099af68;
                    /* try { // try from 008b6250 to 008b6263 has its CatchHandler @ 008b6660 */
    facebook::react::RNSVGRadialGradientProps::RNSVGRadialGradientProps
              (this,param_3,pRVar12,param_5);
                    /* try { // try from 008b6268 to 008b627b has its CatchHandler @ 008b6678 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if ((((uVar7 & 1) == 0) ||
        (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar7 & 1) == 0)) ||
       (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
                enablePropsUpdateReconciliationAndroid(), (uVar7 & 1) == 0)) {
LAB_008b62a4:
      FUN_00757d00(1,plVar8 + 1);
      if (*param_4 == 0) {
        if (((*
              PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGRadialGradientComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_24RNSVGRadialGradientPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ece0
             & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(
                                       PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGRadialGradientComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_24RNSVGRadialGradientPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ece0
                                       ), iVar6 != 0)) {
                    /* try { // try from 008b6564 to 008b6567 has its CatchHandler @ 008b65d8 */
          FUN_008b6ce0();
          __cxa_atexit(FUN_008b6e4c,
                       PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGRadialGradientComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_24RNSVGRadialGradientPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ecd8
                       ,&PTR_LOOP_008d5d30);
          __cxa_guard_release(
                             PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGRadialGradientComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_24RNSVGRadialGradientPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ece0
                             );
        }
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 008b630c to 008b631f has its CatchHandler @ 008b6604 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*(undefined8 *)
                         PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGRadialGradientComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_24RNSVGRadialGradientPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ecd8
                   ,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
LAB_008b6358:
          (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
        }
        else if (local_b0 != (dynamic *)0x0) {
          lVar11 = 5;
          pdVar10 = local_b0;
          goto LAB_008b6358;
        }
        if (plVar8 != (long *)0x0) goto LAB_008b636c;
      }
      else {
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 008b62c0 to 008b62d3 has its CatchHandler @ 008b662c */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*param_4,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
        }
        else {
          if (local_b0 == (dynamic *)0x0) goto LAB_008b636c;
          lVar11 = 5;
          pdVar10 = local_b0;
        }
        (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
LAB_008b636c:
        lVar11 = FUN_00757990(0xffffffffffffffff,plVar8 + 1);
        if (lVar11 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 008b6288 to 008b6293 has its CatchHandler @ 008b6600 */
      pcVar9 = (char *)(**(code **)(*(long *)this + 0x10))(this);
      iVar6 = strcmp(PTR_RNSVGRadialGradientComponentName_0099f238,pcVar9);
      if (iVar6 != 0) goto LAB_008b62a4;
      bVar3 = false;
    }
                    /* try { // try from 008b6398 to 008b639b has its CatchHandler @ 008b6678 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar7 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 008b63a8 to 008b63c3 has its CatchHandler @ 008b6628 */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(plVar8 + 7));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 008b6504 to 008b6513 has its CatchHandler @ 008b6620 */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_008b66c4;
      }
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (*(int *)(plVar4 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 008b64e4 to 008b64f3 has its CatchHandler @ 008b6684 */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_008b66c4;
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
                    /* try { // try from 008b6444 to 008b644f has its CatchHandler @ 008b668c */
        folly::dynamic::dynamic(local_d0,(dynamic *)(plVar4 + 8));
        local_a0 = 0;
                    /* try { // try from 008b6454 to 008b646b has its CatchHandler @ 008b6690 */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (this,param_3,uVar1,pcVar9,local_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 008b647c to 008b6487 has its CatchHandler @ 008b6680 */
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
LAB_008b66c4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008b66c8  FUN_008b66c8 =====

void FUN_008b66c8(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 008b66d0  FUN_008b66d0 =====

void FUN_008b66d0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 008b66d8  FUN_008b66d8 =====

void FUN_008b66d8(undefined8 *param_1,long param_2,long param_3)

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
                    /* try { // try from 008b671c to 008b6723 has its CatchHandler @ 008b6924 */
  plVar6 = (long *)operator_new(0x68);
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&PTR_FUN_00992a08;
                    /* try { // try from 008b673c to 008b6747 has its CatchHandler @ 008b690c */
  local_78 = FUN_008707fc(plVar6 + 3,&local_58,param_2 + 8);
  local_70 = plVar6;
  if ((local_50 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,local_50 + 1), lVar7 == 0)) {
    (**(code **)(*local_50 + 0x10))(local_50);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 008b677c to 008b6783 has its CatchHandler @ 008b68fc */
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
                    /* try { // try from 008b67d0 to 008b67e7 has its CatchHandler @ 008b68cc */
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
                    /* try { // try from 008b683c to 008b6847 has its CatchHandler @ 008b68ac */
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


// ===== 008b694c  FUN_008b694c =====

void FUN_008b694c(void)

{
  return;
}


// ===== 008b6950  FUN_008b6950 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_008b6950(long param_1)

{
  byte bVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(param_1 + 0x908);
  if (pvVar2 != (void *)0x0) {
    *(void **)(param_1 + 0x910) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(param_1 + 0x8e8);
  if (pvVar2 != (void *)0x0) {
    *(void **)(param_1 + 0x8f0) = pvVar2;
    operator_delete(pvVar2);
  }
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x8b8);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x888);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x858);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x828);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x7f8);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x7c8);
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
  FUN_0078917c(param_1,PTR_VTT_0099f248 + 8);
  return;
}


// ===== 008b6a98  FUN_008b6a98 =====

void FUN_008b6a98(long param_1)

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


// ===== 008b6ae8  FUN_008b6ae8 =====

void FUN_008b6ae8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099ae00;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008b6af8  FUN_008b6af8 =====

void FUN_008b6af8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099ae00;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008b6b28  FUN_008b6b28 =====

void FUN_008b6b28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x008b6b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 008b6b34  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008b6b38  FUN_008b6b38 =====

void FUN_008b6b38(long *param_1)

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


// ===== 008b6bf8  FUN_008b6bf8 =====

void FUN_008b6bf8(long param_1)

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


// ===== 008b6c60  FUN_008b6c60 =====

bool FUN_008b6c60(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 008b6c78  FUN_008b6c78 =====

bool FUN_008b6c78(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 008b6c90  FUN_008b6c90 =====

void FUN_008b6c90(long param_1)

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


// ===== 008b6ce0  FUN_008b6ce0 =====

void FUN_008b6ce0(void)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x938);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_0099af18;
  memset(__s,0,0x920);
                    /* try { // try from 008b6d1c to 008b6d2f has its CatchHandler @ 008b6e30 */
  FUN_00788b10(__s,PTR_VTT_0099f248 + 0x10);
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
  puVar1 = PTR_vtable_0099f240;
  *(undefined4 *)(puVar2 + 0xd9) = 0;
  *(undefined2 *)((long)puVar2 + 0x6cc) = 0;
  puVar2[0xe1] = 0;
  puVar2[3] = puVar1 + 0x20;
  *(undefined4 *)(puVar2 + 0xe2) = 0x3f800000;
  puVar2[0xe0] = 0;
  puVar2[0xdf] = 0;
  puVar2[0xfd] = 0;
  *(undefined4 *)(puVar2 + 0x102) = 0;
  puVar2[0x103] = 0;
  *(undefined4 *)(puVar2 + 0x108) = 0;
  puVar2[0x109] = 0;
  *(undefined4 *)(puVar2 + 0x10e) = 0;
  puVar2[0x10f] = 0;
  *(undefined4 *)(puVar2 + 0x114) = 0;
  puVar2[0x115] = 0;
  *(undefined4 *)(puVar2 + 0x11a) = 0;
  puVar2[0x11b] = 0;
  puVar2[0x126] = 0;
  puVar2[0x125] = 0;
  puVar2[0x124] = 0;
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
  *(undefined4 *)(puVar2 + 0xfc) = 0;
  puVar2[0xfb] = 0;
  puVar2[0xfa] = 0;
  puVar2[0xf9] = 0;
  puVar2[0xf8] = 0;
  puVar2[0xf7] = 0;
  puVar2[0xf6] = 0;
  puVar2[0x121] = 0;
  puVar2[0x120] = 0;
  *(undefined4 *)(puVar2 + 0x123) = 0;
  puVar1 = 
  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGRadialGradientComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_24RNSVGRadialGradientPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ecd8
  ;
  puVar2[0x122] = 0;
  *(undefined8 **)puVar1 = __s;
  *(undefined8 **)(puVar1 + 8) = puVar2;
  return;
}


// ===== 008b6e4c  FUN_008b6e4c =====

void FUN_008b6e4c(long param_1)

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


// ===== 008b6e9c  FUN_008b6e9c =====

void FUN_008b6e9c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099af18;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008b6eac  FUN_008b6eac =====

void FUN_008b6eac(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099af18;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008b6edc  FUN_008b6edc =====

void FUN_008b6edc(long param_1)

{
  FUN_008b6950(param_1 + 0x18);
  return;
}


// ===== 008b6ee4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008b6ee8  FUN_008b6ee8 =====

void FUN_008b6ee8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099af68;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008b6ef8  FUN_008b6ef8 =====

void FUN_008b6ef8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099af68;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008b6f28  FUN_008b6f28 =====

void FUN_008b6f28(long param_1)

{
  FUN_008b6950(param_1 + 0x18);
  return;
}


// ===== 008b6f30  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008b6f34  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_23RNSVGConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGRectComponentNameEEEENS0_14RNSVGRectPropsEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENS8_14default_deleteISB_EEEERKNS0_29ComponentDescriptorParametersE =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_23RNSVGConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGRectComponentNameEEEENS0_14RNSVGRectPropsEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENS8_14default_deleteISB_EEEERKNS0_29ComponentDescriptorParametersE
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
  undefined4 local_1620 [2];
  undefined8 *local_1618;
  void *local_1610;
  void *pvStack_1608;
  undefined8 local_1600;
  void *pvStack_15f8;
  void *local_15f0;
  undefined8 uStack_15e8;
  void *local_15e0;
  void *pvStack_15d8;
  undefined8 uStack_15d0;
  undefined8 uStack_15c8;
  undefined *local_15c0;
  undefined8 uStack_15b8;
  undefined8 local_15b0;
  undefined8 uStack_15a8;
  undefined4 local_15a0 [2];
  undefined8 local_1598;
  undefined8 uStack_1590;
  undefined8 local_1588;
  undefined8 uStack_1580;
  undefined4 local_1578;
  undefined4 local_1570;
  undefined1 local_156c;
  undefined8 local_156b;
  undefined8 local_1563;
  undefined8 uStack_155b;
  undefined8 local_1553;
  undefined8 uStack_154b;
  undefined8 local_1543;
  undefined8 uStack_153b;
  undefined8 local_1533;
  undefined6 uStack_152b;
  undefined2 uStack_1525;
  undefined6 uStack_1523;
  undefined8 uStack_151d;
  undefined4 local_1515;
  undefined8 local_1511;
  undefined1 local_1509;
  undefined1 uStack_1508;
  undefined7 uStack_1507;
  undefined8 uStack_1500;
  undefined8 uStack_14f8;
  undefined8 uStack_14f0;
  undefined8 local_14e8;
  undefined8 uStack_14e0;
  undefined8 local_14d8;
  undefined8 uStack_14d0;
  undefined8 local_14c8;
  undefined8 uStack_14c0;
  undefined8 local_14b8;
  undefined8 uStack_14b0;
  undefined8 uStack_14a8;
  undefined8 local_14a0;
  undefined8 local_1498;
  undefined8 uStack_1490;
  undefined8 local_1488;
  undefined4 uStack_1480;
  undefined4 uStack_147c;
  undefined4 uStack_1478;
  undefined4 uStack_1474;
  undefined4 uStack_1470;
  undefined4 uStack_146c;
  undefined8 local_1468;
  undefined8 uStack_1460;
  undefined4 local_1458;
  undefined1 local_1454;
  undefined4 local_1450;
  undefined1 local_144c;
  undefined4 local_1448;
  undefined1 local_1444;
  undefined4 local_1440;
  undefined1 local_143c;
  undefined4 local_1438;
  undefined1 local_1434;
  undefined4 local_1430;
  undefined1 local_142c;
  undefined4 local_1428;
  undefined1 local_1424;
  undefined4 local_1420;
  undefined1 local_141c;
  undefined4 local_1418;
  undefined1 local_1414;
  undefined4 local_1410;
  undefined1 local_140c;
  undefined4 local_1408;
  undefined1 local_1404;
  undefined4 local_1400;
  undefined1 local_13fc;
  undefined4 local_13f8;
  undefined1 local_13f4;
  undefined4 local_13f0;
  undefined1 local_13ec;
  undefined4 local_13e8;
  undefined1 local_13e4;
  undefined4 local_13e0;
  undefined1 local_13dc;
  undefined1 local_13d8;
  undefined1 local_13d4;
  undefined1 local_13c8;
  undefined8 local_13c0;
  undefined8 uStack_13b8;
  undefined8 uStack_13b0;
  undefined8 uStack_13a8;
  undefined8 local_13a0;
  undefined8 uStack_1398;
  undefined8 uStack_1390;
  undefined1 uStack_1388;
  undefined7 local_1387;
  undefined1 uStack_1380;
  undefined8 uStack_137f;
  undefined8 local_1374;
  undefined8 uStack_136c;
  undefined8 uStack_1364;
  undefined8 uStack_135c;
  undefined8 local_1354;
  undefined8 uStack_134c;
  undefined8 uStack_1344;
  undefined8 uStack_133c;
  undefined8 local_1334;
  undefined8 uStack_132c;
  undefined8 uStack_1324;
  undefined5 uStack_131c;
  undefined3 local_1317;
  undefined5 uStack_1314;
  undefined1 local_130c;
  undefined1 local_1308;
  undefined1 local_1304;
  undefined1 local_1300;
  undefined1 local_12fc;
  undefined1 local_12f8;
  undefined1 local_12e0;
  undefined8 local_12d8;
  undefined8 uStack_12d0;
  undefined8 local_12c8;
  undefined4 local_12c0;
  undefined1 local_12bc;
  undefined4 local_12bb;
  undefined1 local_12b7;
  undefined1 local_12b6;
  undefined8 local_12b0;
  undefined8 uStack_12a8;
  undefined8 uStack_12a0;
  undefined8 uStack_1298;
  undefined8 local_1290;
  undefined7 uStack_1288;
  undefined4 uStack_1281;
  undefined8 local_127c;
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
  undefined1 local_1230;
  undefined1 local_122c;
  undefined1 local_1224;
  undefined1 local_1220;
  undefined1 local_1218;
  undefined1 local_1214;
  undefined1 local_120c;
  undefined1 local_1208;
  undefined1 local_1200;
  undefined1 local_11fc;
  undefined1 local_11f4;
  undefined1 local_11f0;
  undefined1 local_11e8;
  undefined1 local_11e4;
  undefined1 local_11dc;
  undefined1 local_11d8;
  undefined1 local_11d4;
  undefined1 local_11d0;
  undefined1 local_11cc;
  undefined1 local_11c8;
  undefined1 local_11c4;
  undefined1 local_11c0;
  undefined1 local_11bc;
  undefined1 local_11b8;
  undefined1 local_11b4;
  undefined1 local_11b0;
  undefined1 local_11ac;
  undefined1 local_11a8;
  undefined1 local_11a4;
  undefined1 local_11a0;
  undefined1 local_119c;
  undefined1 local_1198;
  undefined1 local_1194;
  undefined1 local_1190;
  undefined1 local_118c;
  undefined1 local_1188;
  undefined1 local_1184;
  undefined1 local_1180;
  undefined1 local_117c;
  undefined8 local_1178;
  undefined8 uStack_1170;
  undefined8 local_1168;
  undefined8 uStack_1160;
  undefined8 uStack_1158;
  undefined8 uStack_1150;
  undefined2 local_1148;
  undefined8 local_1144;
  undefined1 local_113c;
  undefined8 local_1138;
  undefined8 local_1130;
  undefined8 uStack_1128;
  undefined1 local_1120;
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
  undefined8 uStack_10c8;
  undefined8 uStack_10c0;
  undefined8 local_10b8;
  undefined8 uStack_10b0;
  undefined8 uStack_10a8;
  undefined8 uStack_10a0;
  undefined8 local_1098;
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
  undefined8 local_1038;
  undefined8 uStack_1030;
  undefined8 local_1028;
  undefined6 uStack_1020;
  undefined2 uStack_101a;
  undefined6 uStack_1018;
  undefined1 local_1010;
  undefined1 local_100c;
  undefined1 local_1008;
  undefined8 local_1004;
  undefined8 uStack_ffc;
  undefined1 local_ff4;
  undefined8 local_ff0;
  undefined2 local_fe8;
  undefined1 local_fe6;
  undefined4 local_fe4;
  undefined1 local_fe0;
  undefined1 local_f80;
  undefined1 local_f78;
  undefined1 local_f18;
  undefined4 local_f10;
  undefined2 local_f0c;
  undefined1 local_f08;
  undefined1 local_f04;
  undefined1 local_f00;
  undefined1 local_efc;
  undefined1 local_ef8;
  undefined1 local_ef4;
  undefined1 local_ef0;
  undefined1 local_eec;
  undefined1 local_ee8;
  undefined1 local_ee4;
  undefined8 local_ee0;
  undefined8 uStack_ed8;
  undefined8 local_ed0;
  undefined4 local_ec8;
  undefined8 local_ec0;
  undefined8 uStack_eb8;
  undefined8 local_eb0;
  undefined8 uStack_ea8;
  undefined8 local_ea0;
  undefined8 uStack_e98;
  undefined8 local_e90;
  undefined8 uStack_e88;
  undefined8 local_e80;
  undefined8 uStack_e78;
  undefined8 local_e70;
  undefined8 uStack_e68;
  undefined8 local_e60;
  undefined8 uStack_e58;
  undefined8 local_e50;
  undefined8 uStack_e48;
  undefined8 local_e40;
  undefined5 uStack_e38;
  undefined3 uStack_e33;
  undefined5 uStack_e30;
  undefined8 local_e28;
  undefined8 uStack_e20;
  undefined8 local_e18;
  undefined8 uStack_e10;
  undefined8 uStack_e08;
  undefined8 uStack_e00;
  undefined4 local_df8;
  undefined4 local_df0;
  undefined8 local_de8;
  undefined8 local_dc0;
  undefined4 local_db8;
  undefined8 local_db0;
  undefined4 local_d88;
  undefined4 local_d80;
  undefined8 local_d78;
  undefined8 local_d50;
  undefined4 local_d48;
  undefined8 local_d40;
  undefined8 local_d18;
  undefined4 local_d10;
  undefined8 local_d08;
  undefined8 uStack_d00;
  undefined8 local_cf8;
  undefined8 uStack_cf0;
  undefined8 uStack_ce8;
  undefined8 uStack_ce0;
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
  undefined4 local_be8;
  undefined8 local_be0;
  undefined4 local_bb8 [2];
  undefined8 local_bb0;
  undefined8 uStack_ba8;
  undefined8 local_ba0;
  undefined8 local_b98;
  undefined8 uStack_b90;
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
  pvStack_15f8 = (void *)0x0;
  local_1600 = 0;
  uStack_15e8 = 0;
  local_15f0 = (void *)0x0;
  pvStack_15d8 = (void *)0x0;
  local_15e0 = (void *)0x0;
  uStack_15c8 = 0;
  uStack_15d0 = 0;
  pvStack_1608 = (void *)0x0;
  local_1610 = (void *)0x0;
                    /* try { // try from 008b6f88 to 008b6f93 has its CatchHandler @ 008b768c */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_1610);
  local_f8 = 0;
  *(undefined ***)this = &PTR_FUN_0099afb8;
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
                    /* try { // try from 008b7004 to 008b7017 has its CatchHandler @ 008b76bc */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1b0);
  local_100 = CONCAT44(local_100._4_4_,0x3f800000);
  local_1620[0] = 0xffffffff;
  uStack_108 = 0;
  local_110 = (void *)0x0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_1618 = &local_1b0;
  facebook::react::RawProps::facebook::react::RawProps::parse(&local_f8,this + 0x38);
  memset(local_15a0,0,0x9e8);
  local_bb8[0] = 5;
  local_ba0 = 0;
  local_15c0 = *(undefined **)(PTR_VTT_0099f260 + 0x20);
  local_15a0[0] = 5;
  uStack_15a8 = 0;
  local_15b0 = 0;
  local_b98 = 0;
  uStack_15b8 = 0;
  uStack_b90 = 0x3f800000;
  uStack_ba8 = 0;
  local_bb0 = 0;
  uStack_1590 = 0;
  local_1598 = 0;
  uStack_1580 = 0;
  local_1588 = 0;
  local_1578 = 0x3f800000;
  folly::dynamic::folly::dynamic::destroy(local_bb8);
  local_1570 = 0x10410710;
  local_156c = 0;
  uStack_1480 = 0;
  local_1488 = 0;
  uStack_146c = 0;
  uStack_1490 = 0;
  local_1498 = 0;
  uStack_1507 = 0;
  uStack_155b = 0;
  local_1563 = 0;
  local_156b = _s__00375408;
  uStack_154b = 0;
  local_1553 = 0;
  uStack_1128 = _UNK_00371598;
  local_1130 = _DAT_00371590;
  uStack_153b = 0;
  local_1543 = 0;
  uStack_152b = 0;
  local_1533 = 0;
  uStack_1030 = _UNK_00488920;
  local_1038 = _DAT_00488918;
  uStack_1040 = _UNK_00488910;
  local_1048 = _DAT_00488908;
  local_1515 = 0x40004;
  uStack_1474 = 0;
  uStack_1470 = 0;
  uStack_147c = 0;
  uStack_1478 = 0;
  uStack_1460 = 0;
  local_1468 = 0;
  local_1458 = 0x7fc00000;
  local_1450 = 0x7fc00000;
  local_1448 = 0x7fc00000;
  local_1440 = 0x7fc00000;
  local_1438 = 0x7fc00000;
  local_1430 = 0x7fc00000;
  local_1428 = 0x7fc00000;
  local_1420 = 0x7fc00000;
  local_1418 = 0x7fc00000;
  local_1410 = 0x7fc00000;
  local_1408 = 0x7fc00000;
  local_1400 = 0x7fc00000;
  local_13f8 = 0x7fc00000;
  local_13f0 = 0x7fc00000;
  local_13e8 = 0x7fc00000;
  local_13e0 = 0x7fc00000;
  uStack_137f = 0;
  uStack_1380 = 0;
  uStack_136c = 0;
  local_1374 = 0;
  uStack_135c = 0;
  uStack_1364 = 0;
  uStack_134c = 0;
  local_1354 = 0;
  uStack_133c = 0;
  uStack_1344 = 0;
  uStack_132c = 0;
  local_1334 = 0;
  uStack_131c = 0;
  uStack_1324 = 0;
  local_1317 = 0;
  uStack_1314 = 0;
  local_12bc = 1;
  local_12bb = 0;
  local_12b6 = 0x23;
  local_127c = 0x3f800000;
  uStack_1160 = 0;
  local_1168 = 0;
  uStack_1150 = 0;
  uStack_1158 = 0;
  uStack_1170 = 0;
  local_1178 = 0;
  uStack_1050 = _UNK_00488900;
  local_1058 = _DAT_004888f8;
  local_1144 = 0;
  uStack_1060 = _UNK_004888f0;
  local_1068 = _DAT_004888e8;
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
  uStack_10c0 = 0;
  uStack_10c8 = 0;
  uStack_10b0 = 0;
  local_10b8 = 0;
  uStack_10a0 = 0;
  uStack_10a8 = 0;
  uStack_1090 = 0;
  local_1098 = 0;
  uStack_1080 = 0;
  uStack_1088 = 0;
  uStack_1070 = 0;
  local_1078 = 0;
  uStack_1018 = 0;
  uStack_1020 = 0;
  uStack_101a = 0;
  local_1028 = 0;
  uStack_151d = 0;
  uStack_1525 = 0;
  uStack_1523 = 0;
  local_1511 = 0;
  local_1509 = 0;
  uStack_1508 = 0;
  uStack_14f8 = 0;
  uStack_1500 = 0;
  local_14e8 = 0;
  uStack_14f0 = 0;
  local_14d8 = 0;
  uStack_14e0 = 0;
  local_14c8 = 0;
  uStack_14d0 = 0;
  local_14b8 = 0;
  uStack_14c0 = 0;
  uStack_14a8 = 0;
  uStack_14b0 = 0;
  local_14a0 = 0;
  local_1454 = 0;
  local_144c = 0;
  local_1444 = 0;
  local_143c = 0;
  local_1434 = 0;
  local_142c = 0;
  local_1424 = 0;
  local_141c = 0;
  local_1414 = 0;
  local_140c = 0;
  local_1404 = 0;
  local_13fc = 0;
  local_13f4 = 0;
  local_13ec = 0;
  local_13e4 = 0;
  local_13dc = 0;
  local_13d8 = 0;
  local_13d4 = 0;
  local_13c8 = 0;
  local_130c = 0;
  local_1308 = 0;
  local_1304 = 0;
  local_1300 = 0;
  local_12fc = 0;
  local_12f8 = 0;
  local_12e0 = 0;
  uStack_13b8 = 0;
  local_13c0 = 0;
  uStack_13a8 = 0;
  uStack_13b0 = 0;
  uStack_1398 = 0;
  local_13a0 = 0;
  uStack_1388 = 0;
  local_1387 = 0;
  uStack_1390 = 0;
  uStack_12d0 = 0;
  local_12d8 = 0;
  local_12c8 = 0;
  local_12c0 = 0;
  local_12b7 = 0;
  uStack_12a8 = 0;
  local_12b0 = 0;
  uStack_1298 = 0;
  uStack_12a0 = 0;
  uStack_1288 = 0;
  uStack_1281 = 0;
  local_1290 = 0;
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
  local_1230 = 0;
  local_122c = 0;
  local_1224 = 0;
  local_1220 = 0;
  local_1218 = 0;
  local_1214 = 0;
  local_120c = 0;
  local_1208 = 0;
  local_1200 = 0;
  local_11fc = 0;
  local_11f4 = 0;
  local_11f0 = 0;
  local_11e8 = 0;
  local_11e4 = 0;
  local_11dc = 0;
  local_11d8 = 0;
  local_11d4 = 0;
  local_11d0 = 0;
  local_11cc = 0;
  local_11c8 = 0;
  local_11c4 = 0;
  local_11c0 = 0;
  local_11bc = 0;
  local_11b8 = 0;
  local_11b4 = 0;
  local_11b0 = 0;
  local_11ac = 0;
  local_11a8 = 0;
  local_11a4 = 0;
  local_11a0 = 0;
  local_119c = 0;
  local_1198 = 0;
  local_1194 = 0;
  local_1190 = 0;
  local_118c = 0;
  local_1188 = 0;
  local_1184 = 0;
  local_1180 = 0;
  local_117c = 0;
  local_1138 = 0;
  local_1148 = 0;
  local_113c = 0;
  local_1120 = 0;
  local_1010 = 0;
  local_100c = 0;
  local_1008 = 0;
  local_ff0 = 0;
  uStack_ffc = 0;
  local_1004 = 0;
  local_ff4 = 0;
  local_fe8 = 0x101;
  local_fe6 = 0;
  local_fe4 = 0;
  local_fe0 = 0;
  local_f80 = 0;
  local_f78 = 0;
  local_f18 = 0;
  local_f08 = 0;
  local_f04 = 0;
  local_f00 = 0;
  local_efc = 0;
  local_ef8 = 0;
  local_ef4 = 0;
  local_ef0 = 0;
  local_eec = 0;
  local_ee8 = 0;
  local_ee4 = 0;
  local_f0c = 0;
  local_f10 = 0;
  local_15c0 = PTR_vtable_0099f258 + 0x20;
  local_ed0 = 0;
  uStack_e30 = 0;
  uStack_e10 = 0;
  local_e18 = 0;
  uStack_e00 = 0;
  uStack_e08 = 0;
  uStack_e20 = 0;
  local_e28 = 0;
  uStack_ed8 = 0;
  local_ee0 = 0;
  local_dc0 = 0x13f800000;
  local_ec8 = 0x3f800000;
  local_df0 = 0;
  local_de8 = 0;
  uStack_eb8 = 0;
  local_ec0 = 0;
  uStack_ea8 = 0;
  local_eb0 = 0;
  uStack_e98 = 0;
  local_ea0 = 0;
  uStack_e88 = 0;
  local_e90 = 0;
  uStack_e78 = 0;
  local_e80 = 0;
  uStack_e68 = 0;
  local_e70 = 0;
  uStack_e58 = 0;
  local_e60 = 0;
  uStack_e48 = 0;
  local_e50 = 0;
  uStack_e38 = 0;
  uStack_e33 = 0;
  local_e40 = 0;
  local_df8 = 0;
  local_db8 = 0;
  local_db0 = 0;
  local_d88 = 0x3f800000;
  local_d80 = 0;
  local_d78 = 0;
  local_d50 = 0;
  local_d48 = 0;
  local_d40 = 0;
  local_d18 = 0;
  local_d10 = 0;
  local_cd0 = 0;
  local_ca8 = 0;
  local_ca0 = 0;
  local_c78 = 0;
  local_c70 = 0;
  local_c48 = 0;
  local_c40 = 0;
  local_c18 = 0;
  local_c10 = 0;
  local_be8 = 0;
  local_be0 = 0;
  uStack_cf0 = 0;
  local_cf8 = 0;
  uStack_ce0 = 0;
  uStack_ce8 = 0;
  uStack_d00 = 0;
  local_d08 = 0;
  local_cd8 = 0;
                    /* try { // try from 008b74cc to 008b74df has its CatchHandler @ 008b76bc */
  facebook::react::RNSVGRectProps::RNSVGRectProps
            ((RNSVGRectProps *)local_bb8,(PropsParserContext *)local_1620,
             (RNSVGRectProps *)&local_15c0,(RawProps *)&local_f8);
  FUN_008b8180(local_bb8);
  FUN_008b8180(&local_15c0);
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
                    /* try { // try from 008b75e4 to 008b75ef has its CatchHandler @ 008b76c0 */
        (*(code *)(&PTR_FUN_0098f088)[*(uint *)((long)pvVar3 + -8)])
                  (&local_15c0,(void *)((long)pvVar3 + -0x38));
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
  if (local_15e0 != (void *)0x0) {
    pvStack_15d8 = local_15e0;
    operator_delete(local_15e0);
  }
  if (pvStack_15f8 != (void *)0x0) {
    local_15f0 = pvStack_15f8;
    operator_delete(pvStack_15f8);
  }
  if (local_1610 != (void *)0x0) {
    pvStack_1608 = local_1610;
    operator_delete(local_1610);
  }
  *param_1 = this;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008b76c4  FUN_008b76c4 =====

void FUN_008b76c4(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 008b76e8  FUN_008b76e8 =====

undefined * FUN_008b76e8(void)

{
  return PTR_RNSVGRectComponentName_0099f250;
}


// ===== 008b76f4  FUN_008b76f4 =====

undefined * FUN_008b76f4(void)

{
  return PTR_RNSVGRectComponentName_0099f250;
}


// ===== 008b7700  FUN_008b7700 =====

undefined8 FUN_008b7700(void)

{
  return 0x61;
}


// ===== 008b7708  FUN_008b7708 =====

void FUN_008b7708(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

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
  *puVar4 = &PTR_FUN_0099b048;
                    /* try { // try from 008b7774 to 008b7783 has its CatchHandler @ 008b77e8 */
  facebook::react::RNSVGLayoutableShadowNode::RNSVGLayoutableShadowNode
            (pRVar1,param_3,param_4,uVar3);
  lVar5 = *param_2;
  puVar4[3] = &PTR_FUN_0099b098;
                    /* try { // try from 008b779c to 008b77a7 has its CatchHandler @ 008b77d8 */
  (**(code **)(lVar5 + 0x60))(param_2,pRVar1);
  *param_1 = pRVar1;
  param_1[1] = puVar4;
  if (*(long *)(lVar2 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008b7818  FUN_008b7818 =====

void FUN_008b7818(undefined8 *param_1,long *param_2,ShadowNode *param_3,ShadowNodeFragment *param_4)

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
  *plVar3 = (long)&PTR_FUN_0099b048;
                    /* try { // try from 008b7870 to 008b787f has its CatchHandler @ 008b794c */
  facebook::react::RNSVGLayoutableShadowNode::RNSVGLayoutableShadowNode(pRVar1,param_3,param_4);
  plVar3[3] = (long)&PTR_FUN_0099b098;
  local_68 = pRVar1;
  local_60 = plVar3;
                    /* try { // try from 008b7890 to 008b789f has its CatchHandler @ 008b7964 */
  facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::
  completeClone(pRVar1,param_3,param_4);
  local_78 = pRVar1;
  local_70 = plVar3;
  FUN_00757d00(1,plVar3 + 1);
                    /* try { // try from 008b78b0 to 008b78bf has its CatchHandler @ 008b793c */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_78);
  plVar3 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar4 = FUN_00757990(0xffffffffffffffff,local_70 + 1), lVar4 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pRVar1 = local_68;
                    /* try { // try from 008b78fc to 008b7907 has its CatchHandler @ 008b7964 */
  (**(code **)(*param_2 + 0x60))(param_2,local_68);
  *param_1 = pRVar1;
  param_1[1] = local_60;
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008b798c  FUN_008b798c =====

void FUN_008b798c(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x008b799c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 008b79a0  FUN_008b79a0 =====

void FUN_008b79a0(undefined8 *param_1,long param_2,PropsParserContext *param_3,long *param_4,
                 RawProps *param_5)

{
  RNSVGRectProps *this;
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
  RNSVGRectProps *pRVar12;
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
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGRectComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGRectPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ecf0
         & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGRectComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGRectPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ecf0
                                   ), iVar6 != 0)) {
                    /* try { // try from 008b7dd4 to 008b7dd7 has its CatchHandler @ 008b7e04 */
      FUN_008b8574();
      __cxa_atexit(FUN_008b8720,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGRectComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGRectPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ece8
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGRectComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGRectPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ecf0
                         );
    }
    lVar11 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGRectComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGRectPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ece8
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGRectComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGRectPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ece8
    ;
    param_1[1] = lVar11;
    if (lVar11 != 0) {
      FUN_00757d00(1,lVar11 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    pRVar12 = (RNSVGRectProps *)*param_4;
    if (pRVar12 == (RNSVGRectProps *)0x0) {
      if (((*
            PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGRectComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGRectPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ecf0
           & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGRectComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGRectPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ecf0
                                     ), iVar6 != 0)) {
                    /* try { // try from 008b7d54 to 008b7d57 has its CatchHandler @ 008b7e1c */
        FUN_008b8574();
        __cxa_atexit(FUN_008b8720,
                     PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGRectComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGRectPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ece8
                     ,&PTR_LOOP_008d5d30);
        __cxa_guard_release(
                           PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGRectComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGRectPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ecf0
                           );
      }
      pRVar12 = *(RNSVGRectProps **)
                 PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGRectComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGRectPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ece8
      ;
    }
    plVar8 = (long *)operator_new(0xa20);
    this = (RNSVGRectProps *)(plVar8 + 3);
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = (long)&PTR_FUN_0099b1b0;
                    /* try { // try from 008b7a80 to 008b7a93 has its CatchHandler @ 008b7e90 */
    facebook::react::RNSVGRectProps::RNSVGRectProps(this,param_3,pRVar12,param_5);
                    /* try { // try from 008b7a98 to 008b7aab has its CatchHandler @ 008b7ea8 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if ((((uVar7 & 1) == 0) ||
        (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar7 & 1) == 0)) ||
       (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
                enablePropsUpdateReconciliationAndroid(), (uVar7 & 1) == 0)) {
LAB_008b7ad4:
      FUN_00757d00(1,plVar8 + 1);
      if (*param_4 == 0) {
        if (((*
              PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGRectComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGRectPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ecf0
             & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(
                                       PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGRectComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGRectPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ecf0
                                       ), iVar6 != 0)) {
                    /* try { // try from 008b7d94 to 008b7d97 has its CatchHandler @ 008b7e08 */
          FUN_008b8574();
          __cxa_atexit(FUN_008b8720,
                       PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGRectComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGRectPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ece8
                       ,&PTR_LOOP_008d5d30);
          __cxa_guard_release(
                             PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGRectComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGRectPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ecf0
                             );
        }
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 008b7b3c to 008b7b4f has its CatchHandler @ 008b7e34 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*(undefined8 *)
                         PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGRectComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGRectPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ece8
                   ,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
LAB_008b7b88:
          (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
        }
        else if (local_b0 != (dynamic *)0x0) {
          lVar11 = 5;
          pdVar10 = local_b0;
          goto LAB_008b7b88;
        }
        if (plVar8 != (long *)0x0) goto LAB_008b7b9c;
      }
      else {
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 008b7af0 to 008b7b03 has its CatchHandler @ 008b7e5c */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*param_4,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
        }
        else {
          if (local_b0 == (dynamic *)0x0) goto LAB_008b7b9c;
          lVar11 = 5;
          pdVar10 = local_b0;
        }
        (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
LAB_008b7b9c:
        lVar11 = FUN_00757990(0xffffffffffffffff,plVar8 + 1);
        if (lVar11 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 008b7ab8 to 008b7ac3 has its CatchHandler @ 008b7e30 */
      pcVar9 = (char *)(**(code **)(*(long *)this + 0x10))(this);
      iVar6 = strcmp(PTR_RNSVGRectComponentName_0099f250,pcVar9);
      if (iVar6 != 0) goto LAB_008b7ad4;
      bVar3 = false;
    }
                    /* try { // try from 008b7bc8 to 008b7bcb has its CatchHandler @ 008b7ea8 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar7 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 008b7bd8 to 008b7bf3 has its CatchHandler @ 008b7e58 */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(plVar8 + 7));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 008b7d34 to 008b7d43 has its CatchHandler @ 008b7e50 */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_008b7ef4;
      }
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (*(int *)(plVar4 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 008b7d14 to 008b7d23 has its CatchHandler @ 008b7eb4 */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_008b7ef4;
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
                    /* try { // try from 008b7c74 to 008b7c7f has its CatchHandler @ 008b7ebc */
        folly::dynamic::dynamic(local_d0,(dynamic *)(plVar4 + 8));
        local_a0 = 0;
                    /* try { // try from 008b7c84 to 008b7c9b has its CatchHandler @ 008b7ec0 */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (this,param_3,uVar1,pcVar9,local_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 008b7cac to 008b7cb7 has its CatchHandler @ 008b7eb0 */
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
LAB_008b7ef4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008b7ef8  FUN_008b7ef8 =====

void FUN_008b7ef8(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 008b7f00  FUN_008b7f00 =====

void FUN_008b7f00(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 008b7f08  FUN_008b7f08 =====

void FUN_008b7f08(undefined8 *param_1,long param_2,long param_3)

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
                    /* try { // try from 008b7f4c to 008b7f53 has its CatchHandler @ 008b8154 */
  plVar6 = (long *)operator_new(0x68);
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&PTR_FUN_00992a08;
                    /* try { // try from 008b7f6c to 008b7f77 has its CatchHandler @ 008b813c */
  local_78 = FUN_008707fc(plVar6 + 3,&local_58,param_2 + 8);
  local_70 = plVar6;
  if ((local_50 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,local_50 + 1), lVar7 == 0)) {
    (**(code **)(*local_50 + 0x10))(local_50);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 008b7fac to 008b7fb3 has its CatchHandler @ 008b812c */
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
                    /* try { // try from 008b8000 to 008b8017 has its CatchHandler @ 008b80fc */
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
                    /* try { // try from 008b806c to 008b8077 has its CatchHandler @ 008b80dc */
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


// ===== 008b817c  FUN_008b817c =====

void FUN_008b817c(void)

{
  return;
}


// ===== 008b8180  FUN_008b8180 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_008b8180(long param_1)

{
  byte bVar1;
  void *pvVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  
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
  FUN_0078917c(param_1,PTR_VTT_0099f260 + 8);
  return;
}


