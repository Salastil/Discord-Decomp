// ===== 008b832c  FUN_008b832c =====

void FUN_008b832c(long param_1)

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


// ===== 008b837c  FUN_008b837c =====

void FUN_008b837c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099b048;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008b838c  FUN_008b838c =====

void FUN_008b838c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099b048;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008b83bc  FUN_008b83bc =====

void FUN_008b83bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x008b83c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 008b83c8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008b83cc  FUN_008b83cc =====

void FUN_008b83cc(long *param_1)

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


// ===== 008b848c  FUN_008b848c =====

void FUN_008b848c(long param_1)

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


// ===== 008b84f4  FUN_008b84f4 =====

bool FUN_008b84f4(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 008b850c  FUN_008b850c =====

bool FUN_008b850c(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 008b8524  FUN_008b8524 =====

void FUN_008b8524(long param_1)

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


// ===== 008b8574  FUN_008b8574 =====

void FUN_008b8574(void)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0xa20);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_0099b160;
  memset(__s,0,0xa08);
                    /* try { // try from 008b85b0 to 008b85c3 has its CatchHandler @ 008b8704 */
  FUN_00788b10(__s,PTR_VTT_0099f260 + 0x10);
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
  puVar1 = PTR_vtable_0099f258;
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
  *(undefined4 *)(puVar2 + 0x120) = 0;
  puVar2[0x11f] = 0;
  puVar2[0x11e] = 0;
  puVar2[0x11d] = 0;
  puVar2[0x11c] = 0;
  puVar1 = 
  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGRectComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGRectPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ece8
  ;
  puVar2[0x11b] = 0;
  puVar2[0x11a] = 0;
  *(undefined8 **)puVar1 = __s;
  *(undefined8 **)(puVar1 + 8) = puVar2;
  return;
}


// ===== 008b8720  FUN_008b8720 =====

void FUN_008b8720(long param_1)

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


// ===== 008b8770  FUN_008b8770 =====

void FUN_008b8770(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099b160;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008b8780  FUN_008b8780 =====

void FUN_008b8780(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099b160;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008b87b0  FUN_008b87b0 =====

void FUN_008b87b0(long param_1)

{
  FUN_008b8180(param_1 + 0x18);
  return;
}


// ===== 008b87b8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008b87bc  FUN_008b87bc =====

void FUN_008b87bc(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099b1b0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008b87cc  FUN_008b87cc =====

void FUN_008b87cc(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099b1b0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008b87fc  FUN_008b87fc =====

void FUN_008b87fc(long param_1)

{
  FUN_008b8180(param_1 + 0x18);
  return;
}


// ===== 008b8804  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008b8808  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_32RNSVGSvgViewAndroidComponentNameEEEENS0_24RNSVGSvgViewAndroidPropsENS0_31RNSVGSvgViewAndroidEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_22ConcreteViewShadowNodeIXadsoKcL_ZNS0_32RNSVGSvgViewAndroidComponentNameEEEENS0_24RNSVGSvgViewAndroidPropsENS0_31RNSVGSvgViewAndroidEventEmitterENS0_9StateDataEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENSA_14default_deleteISD_EEEERKNS0_29ComponentDescriptorParametersE
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
  undefined4 local_1810 [2];
  undefined8 *local_1808;
  void *local_1800;
  void *pvStack_17f8;
  undefined8 local_17f0;
  void *pvStack_17e8;
  void *local_17e0;
  undefined8 uStack_17d8;
  void *local_17d0;
  void *pvStack_17c8;
  undefined8 uStack_17c0;
  undefined8 uStack_17b8;
  undefined *local_17b0;
  undefined8 uStack_17a8;
  undefined8 local_17a0;
  undefined8 uStack_1798;
  undefined4 local_1790 [2];
  undefined8 local_1788;
  undefined8 uStack_1780;
  undefined8 local_1778;
  undefined8 uStack_1770;
  undefined4 local_1768;
  undefined4 local_1760;
  undefined1 local_175c;
  undefined8 local_175b;
  undefined8 local_1753;
  undefined8 uStack_174b;
  undefined8 local_1743;
  undefined8 uStack_173b;
  undefined8 local_1733;
  undefined8 uStack_172b;
  undefined8 local_1723;
  undefined6 uStack_171b;
  undefined2 uStack_1715;
  undefined6 uStack_1713;
  undefined8 uStack_170d;
  undefined4 local_1705;
  undefined8 local_1701;
  undefined1 local_16f9;
  undefined1 uStack_16f8;
  undefined7 uStack_16f7;
  undefined8 uStack_16f0;
  undefined8 uStack_16e8;
  undefined8 uStack_16e0;
  undefined8 local_16d8;
  undefined8 uStack_16d0;
  undefined8 local_16c8;
  undefined8 uStack_16c0;
  undefined8 local_16b8;
  undefined8 uStack_16b0;
  undefined8 local_16a8;
  undefined8 uStack_16a0;
  undefined8 uStack_1698;
  undefined8 local_1690;
  undefined8 local_1688;
  undefined8 uStack_1680;
  undefined8 local_1678;
  undefined4 uStack_1670;
  undefined4 uStack_166c;
  undefined4 uStack_1668;
  undefined4 uStack_1664;
  undefined4 uStack_1660;
  undefined4 uStack_165c;
  undefined8 local_1658;
  undefined8 uStack_1650;
  undefined4 local_1648;
  undefined1 local_1644;
  undefined4 local_1640;
  undefined1 local_163c;
  undefined4 local_1638;
  undefined1 local_1634;
  undefined4 local_1630;
  undefined1 local_162c;
  undefined4 local_1628;
  undefined1 local_1624;
  undefined4 local_1620;
  undefined1 local_161c;
  undefined4 local_1618;
  undefined1 local_1614;
  undefined4 local_1610;
  undefined1 local_160c;
  undefined4 local_1608;
  undefined1 local_1604;
  undefined4 local_1600;
  undefined1 local_15fc;
  undefined4 local_15f8;
  undefined1 local_15f4;
  undefined4 local_15f0;
  undefined1 local_15ec;
  undefined4 local_15e8;
  undefined1 local_15e4;
  undefined4 local_15e0;
  undefined1 local_15dc;
  undefined4 local_15d8;
  undefined1 local_15d4;
  undefined4 local_15d0;
  undefined1 local_15cc;
  undefined1 local_15c8;
  undefined1 local_15c4;
  undefined1 local_15b8;
  undefined8 local_15b0;
  undefined8 uStack_15a8;
  undefined8 uStack_15a0;
  undefined8 uStack_1598;
  undefined8 local_1590;
  undefined8 uStack_1588;
  undefined8 uStack_1580;
  undefined1 uStack_1578;
  undefined7 local_1577;
  undefined1 uStack_1570;
  undefined8 uStack_156f;
  undefined8 local_1564;
  undefined8 uStack_155c;
  undefined8 uStack_1554;
  undefined8 uStack_154c;
  undefined8 local_1544;
  undefined8 uStack_153c;
  undefined8 uStack_1534;
  undefined8 uStack_152c;
  undefined8 local_1524;
  undefined8 uStack_151c;
  undefined8 uStack_1514;
  undefined5 uStack_150c;
  undefined3 local_1507;
  undefined5 uStack_1504;
  undefined1 local_14fc;
  undefined1 local_14f8;
  undefined1 local_14f4;
  undefined1 local_14f0;
  undefined1 local_14ec;
  undefined1 local_14e8;
  undefined1 local_14d0;
  undefined8 local_14c8;
  undefined8 uStack_14c0;
  undefined8 local_14b8;
  undefined4 local_14b0;
  undefined1 local_14ac;
  undefined4 local_14ab;
  undefined1 local_14a7;
  undefined1 local_14a6;
  undefined8 local_14a0;
  undefined8 uStack_1498;
  undefined8 uStack_1490;
  undefined8 uStack_1488;
  undefined8 local_1480;
  undefined7 uStack_1478;
  undefined4 uStack_1471;
  undefined8 local_146c;
  undefined1 local_1464;
  undefined1 local_145c;
  undefined1 local_1458;
  undefined1 local_1450;
  undefined1 local_144c;
  undefined1 local_1444;
  undefined1 local_1440;
  undefined1 local_1438;
  undefined1 local_1434;
  undefined1 local_142c;
  undefined1 local_1428;
  undefined1 local_1420;
  undefined1 local_141c;
  undefined1 local_1414;
  undefined1 local_1410;
  undefined1 local_1408;
  undefined1 local_1404;
  undefined1 local_13fc;
  undefined1 local_13f8;
  undefined1 local_13f0;
  undefined1 local_13ec;
  undefined1 local_13e4;
  undefined1 local_13e0;
  undefined1 local_13d8;
  undefined1 local_13d4;
  undefined1 local_13cc;
  undefined1 local_13c8;
  undefined1 local_13c4;
  undefined1 local_13c0;
  undefined1 local_13bc;
  undefined1 local_13b8;
  undefined1 local_13b4;
  undefined1 local_13b0;
  undefined1 local_13ac;
  undefined1 local_13a8;
  undefined1 local_13a4;
  undefined1 local_13a0;
  undefined1 local_139c;
  undefined1 local_1398;
  undefined1 local_1394;
  undefined1 local_1390;
  undefined1 local_138c;
  undefined1 local_1388;
  undefined1 local_1384;
  undefined1 local_1380;
  undefined1 local_137c;
  undefined1 local_1378;
  undefined1 local_1374;
  undefined1 local_1370;
  undefined1 local_136c;
  undefined8 local_1368;
  undefined8 uStack_1360;
  undefined8 local_1358;
  undefined8 uStack_1350;
  undefined8 uStack_1348;
  undefined8 uStack_1340;
  undefined2 local_1338;
  undefined8 local_1334;
  undefined1 local_132c;
  undefined8 local_1328;
  undefined8 local_1320;
  undefined8 uStack_1318;
  undefined1 local_1310;
  undefined8 local_1308;
  undefined8 uStack_1300;
  undefined8 uStack_12f8;
  undefined8 uStack_12f0;
  undefined8 local_12e8;
  undefined8 uStack_12e0;
  undefined8 uStack_12d8;
  undefined8 uStack_12d0;
  undefined8 local_12c8;
  undefined8 uStack_12c0;
  undefined8 uStack_12b8;
  undefined8 uStack_12b0;
  undefined8 local_12a8;
  undefined8 uStack_12a0;
  undefined8 uStack_1298;
  undefined8 uStack_1290;
  undefined8 local_1288;
  undefined8 uStack_1280;
  undefined8 uStack_1278;
  undefined8 uStack_1270;
  undefined8 local_1268;
  undefined8 uStack_1260;
  undefined8 local_1258;
  undefined8 uStack_1250;
  undefined8 local_1248;
  undefined8 uStack_1240;
  undefined8 local_1238;
  undefined8 uStack_1230;
  undefined8 local_1228;
  undefined8 uStack_1220;
  undefined8 local_1218;
  undefined6 uStack_1210;
  undefined2 uStack_120a;
  undefined6 uStack_1208;
  undefined1 local_1200;
  undefined1 local_11fc;
  undefined1 local_11f8;
  undefined8 local_11f4;
  undefined8 uStack_11ec;
  undefined1 local_11e4;
  undefined8 local_11e0;
  undefined2 local_11d8;
  undefined1 local_11d6;
  undefined4 local_11d4;
  undefined1 local_11d0;
  undefined1 local_1170;
  undefined1 local_1168;
  undefined1 local_1108;
  undefined4 local_1100;
  undefined2 local_10fc;
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
  undefined4 local_10d0;
  undefined8 local_10c8;
  undefined4 local_10a0;
  undefined8 local_1098;
  undefined8 local_1070;
  undefined8 uStack_1068;
  undefined8 local_1060;
  undefined8 uStack_1058;
  undefined8 local_1050;
  undefined8 uStack_1048;
  undefined8 uStack_1040;
  undefined1 uStack_1038;
  undefined7 local_1037;
  undefined1 uStack_1030;
  undefined8 uStack_102f;
  undefined8 local_1024;
  undefined8 uStack_101c;
  undefined8 local_1014;
  undefined1 local_100c;
  undefined8 local_1008;
  undefined1 local_1000;
  undefined8 local_ffc;
  undefined1 local_ff4;
  undefined8 local_ff0;
  undefined8 uStack_fe8;
  undefined5 uStack_fe0;
  undefined3 local_fdb;
  undefined5 uStack_fd8;
  undefined4 local_fd0;
  undefined8 local_fc8;
  undefined8 uStack_fc0;
  undefined5 uStack_fb8;
  undefined3 local_fb3;
  undefined5 uStack_fb0;
  undefined4 local_fa8;
  undefined8 local_fa0;
  undefined8 uStack_f98;
  undefined8 local_f90;
  undefined8 uStack_f88;
  undefined8 local_f80;
  undefined8 uStack_f78;
  undefined1 local_f70;
  undefined4 local_f68;
  undefined8 local_f60;
  undefined8 local_f38;
  undefined8 uStack_f30;
  undefined4 local_f28;
  undefined4 local_f20;
  undefined8 local_f18;
  undefined4 local_ef0;
  undefined8 local_ee8;
  undefined4 local_ec0;
  undefined8 local_eb8;
  undefined4 local_e90;
  undefined8 local_e88;
  undefined4 local_e60;
  undefined8 local_e58;
  undefined4 local_e30;
  undefined8 local_e28;
  undefined4 local_e00;
  undefined8 local_df8;
  undefined4 local_dd0;
  undefined8 local_dc8;
  undefined4 local_da0;
  undefined8 local_d98;
  undefined4 local_d70;
  undefined8 local_d68;
  undefined4 local_d40;
  undefined8 local_d38;
  undefined4 local_d10;
  undefined8 local_d08;
  undefined4 local_ce0;
  undefined8 local_cd8;
  undefined4 local_cb0 [2];
  undefined8 local_ca8;
  undefined8 uStack_ca0;
  undefined8 local_c98;
  undefined8 local_c90;
  undefined8 uStack_c88;
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
  pvStack_17e8 = (void *)0x0;
  local_17f0 = 0;
  uStack_17d8 = 0;
  local_17e0 = (void *)0x0;
  pvStack_17c8 = (void *)0x0;
  local_17d0 = (void *)0x0;
  uStack_17b8 = 0;
  uStack_17c0 = 0;
  pvStack_17f8 = (void *)0x0;
  local_1800 = (void *)0x0;
                    /* try { // try from 008b885c to 008b8867 has its CatchHandler @ 008b8f90 */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_1800);
  local_f8 = 0;
  *(undefined ***)this = &PTR_FUN_0099b200;
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
                    /* try { // try from 008b88d4 to 008b88e7 has its CatchHandler @ 008b8fc0 */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1b0);
  local_100 = CONCAT44(local_100._4_4_,0x3f800000);
  local_1810[0] = 0xffffffff;
  uStack_108 = 0;
  local_110 = (void *)0x0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_1808 = &local_1b0;
  facebook::react::RawProps::facebook::react::RawProps::parse(&local_f8,this + 0x38);
  memset(local_1790,0,0xae0);
  local_cb0[0] = 5;
  local_c98 = 0;
  local_17b0 = *(undefined **)(PTR_VTT_0099f278 + 0x20);
  local_1790[0] = 5;
  uStack_1798 = 0;
  local_17a0 = 0;
  uStack_17a8 = 0;
  local_c90 = 0;
  uStack_c88 = 0x3f800000;
  uStack_ca0 = 0;
  local_ca8 = 0;
  uStack_1780 = 0;
  local_1788 = 0;
  uStack_1770 = 0;
  local_1778 = 0;
  local_1768 = 0x3f800000;
  folly::dynamic::folly::dynamic::destroy(local_cb0);
  local_175c = 0;
  local_1701 = 0;
  uStack_1220 = _UNK_00488920;
  local_1228 = _DAT_00488918;
  local_175b = _s__00375408;
  uStack_1318 = _UNK_00371598;
  local_1320 = _DAT_00371590;
  uStack_1230 = _UNK_00488910;
  local_1238 = _DAT_00488908;
  local_1644 = 0;
  uStack_1240 = _UNK_00488900;
  local_1248 = _DAT_004888f8;
  uStack_1250 = _UNK_004888f0;
  local_1258 = _DAT_004888e8;
  uStack_1208 = 0;
  local_163c = 0;
  uStack_1670 = 0;
  local_1678 = 0;
  uStack_165c = 0;
  uStack_1680 = 0;
  local_1688 = 0;
  uStack_1210 = 0;
  uStack_120a = 0;
  local_1218 = 0;
  local_1760 = 0x10410710;
  local_1705 = 0x40004;
  uStack_1664 = 0;
  uStack_1660 = 0;
  uStack_166c = 0;
  uStack_1668 = 0;
  uStack_1650 = 0;
  local_1658 = 0;
  local_1648 = 0x7fc00000;
  local_1640 = 0x7fc00000;
  local_1638 = 0x7fc00000;
  local_1630 = 0x7fc00000;
  local_1628 = 0x7fc00000;
  local_1620 = 0x7fc00000;
  local_1618 = 0x7fc00000;
  local_1610 = 0x7fc00000;
  local_1608 = 0x7fc00000;
  local_1600 = 0x7fc00000;
  local_15f8 = 0x7fc00000;
  local_15f0 = 0x7fc00000;
  local_15e8 = 0x7fc00000;
  local_15e0 = 0x7fc00000;
  local_15d8 = 0x7fc00000;
  local_15d0 = 0x7fc00000;
  uStack_156f = 0;
  uStack_1570 = 0;
  uStack_155c = 0;
  local_1564 = 0;
  uStack_154c = 0;
  uStack_1554 = 0;
  uStack_153c = 0;
  local_1544 = 0;
  uStack_152c = 0;
  uStack_1534 = 0;
  uStack_151c = 0;
  local_1524 = 0;
  uStack_150c = 0;
  uStack_1514 = 0;
  local_1507 = 0;
  uStack_1504 = 0;
  local_14ac = 1;
  local_14ab = 0;
  local_14a6 = 0x23;
  local_146c = 0x3f800000;
  uStack_1350 = 0;
  local_1358 = 0;
  uStack_1340 = 0;
  uStack_1348 = 0;
  uStack_1360 = 0;
  local_1368 = 0;
  local_1334 = 0;
  uStack_1300 = 0;
  local_1308 = 0;
  uStack_12f0 = 0;
  uStack_12f8 = 0;
  uStack_12e0 = 0;
  local_12e8 = 0;
  uStack_12d0 = 0;
  uStack_12d8 = 0;
  uStack_12c0 = 0;
  local_12c8 = 0;
  uStack_12b0 = 0;
  uStack_12b8 = 0;
  uStack_12a0 = 0;
  local_12a8 = 0;
  uStack_1290 = 0;
  uStack_1298 = 0;
  uStack_1280 = 0;
  local_1288 = 0;
  uStack_1270 = 0;
  uStack_1278 = 0;
  uStack_1260 = 0;
  local_1268 = 0;
  uStack_16f7 = 0;
  uStack_174b = 0;
  local_1753 = 0;
  uStack_173b = 0;
  local_1743 = 0;
  uStack_172b = 0;
  local_1733 = 0;
  uStack_171b = 0;
  local_1723 = 0;
  uStack_170d = 0;
  uStack_1715 = 0;
  uStack_1713 = 0;
  local_16f9 = 0;
  uStack_16f8 = 0;
  uStack_16e8 = 0;
  uStack_16f0 = 0;
  local_16d8 = 0;
  uStack_16e0 = 0;
  local_16c8 = 0;
  uStack_16d0 = 0;
  local_16b8 = 0;
  uStack_16c0 = 0;
  local_16a8 = 0;
  uStack_16b0 = 0;
  uStack_1698 = 0;
  uStack_16a0 = 0;
  local_1690 = 0;
  local_1634 = 0;
  local_162c = 0;
  local_1624 = 0;
  local_161c = 0;
  local_1614 = 0;
  local_160c = 0;
  local_1604 = 0;
  local_15fc = 0;
  local_15f4 = 0;
  local_15ec = 0;
  local_15e4 = 0;
  local_15dc = 0;
  local_15d4 = 0;
  local_15cc = 0;
  local_15c8 = 0;
  local_15c4 = 0;
  local_15b8 = 0;
  local_14fc = 0;
  local_14f8 = 0;
  local_14f4 = 0;
  local_14f0 = 0;
  local_14ec = 0;
  local_14e8 = 0;
  local_14d0 = 0;
  uStack_15a8 = 0;
  local_15b0 = 0;
  uStack_1598 = 0;
  uStack_15a0 = 0;
  uStack_1588 = 0;
  local_1590 = 0;
  uStack_1578 = 0;
  local_1577 = 0;
  uStack_1580 = 0;
  uStack_14c0 = 0;
  local_14c8 = 0;
  local_14b8 = 0;
  local_14b0 = 0;
  local_14a7 = 0;
  uStack_1498 = 0;
  local_14a0 = 0;
  uStack_1488 = 0;
  uStack_1490 = 0;
  uStack_1478 = 0;
  uStack_1471 = 0;
  local_1480 = 0;
  local_1464 = 0;
  local_145c = 0;
  local_1458 = 0;
  local_1450 = 0;
  local_144c = 0;
  local_1444 = 0;
  local_1440 = 0;
  local_1438 = 0;
  local_1434 = 0;
  local_142c = 0;
  local_1428 = 0;
  local_1420 = 0;
  local_141c = 0;
  local_1414 = 0;
  local_1410 = 0;
  local_1408 = 0;
  local_1404 = 0;
  local_13fc = 0;
  local_13f8 = 0;
  local_13f0 = 0;
  local_13ec = 0;
  local_13e4 = 0;
  local_13e0 = 0;
  local_13d8 = 0;
  local_13d4 = 0;
  local_13cc = 0;
  local_13c8 = 0;
  local_13c4 = 0;
  local_13c0 = 0;
  local_13bc = 0;
  local_13b8 = 0;
  local_13b4 = 0;
  local_13b0 = 0;
  local_13ac = 0;
  local_13a8 = 0;
  local_13a4 = 0;
  local_13a0 = 0;
  local_139c = 0;
  local_1398 = 0;
  local_1394 = 0;
  local_1390 = 0;
  local_138c = 0;
  local_1388 = 0;
  local_1384 = 0;
  local_1380 = 0;
  local_137c = 0;
  local_1378 = 0;
  local_1374 = 0;
  local_1370 = 0;
  local_136c = 0;
  local_1328 = 0;
  local_1338 = 0;
  local_132c = 0;
  local_1310 = 0;
  local_1200 = 0;
  local_11fc = 0;
  local_11f8 = 0;
  local_11e0 = 0;
  uStack_11ec = 0;
  local_11f4 = 0;
  local_11e4 = 0;
  local_11d8 = 0x101;
  local_11d6 = 0;
  local_11d4 = 0;
  local_11d0 = 0;
  local_1170 = 0;
  local_1168 = 0;
  local_1108 = 0;
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
  local_10fc = 0;
  local_1100 = 0;
  local_17b0 = PTR_vtable_0099f270 + 0x20;
  local_10d0 = 0;
  uStack_102f = 0;
  uStack_1030 = 0;
  local_1014 = 0;
  uStack_101c = 0;
  local_1024 = 0;
  local_ffc = 0;
  uStack_fd8 = 0;
  uStack_fb0 = 0;
  uStack_fc0 = 0;
  local_fc8 = 0;
  local_10c8 = 0;
  local_10a0 = 0;
  local_1098 = 0;
  local_fd0 = 0;
  local_fa8 = 0;
  local_f68 = 0;
  local_f60 = 0;
  local_f20 = 0;
  local_f18 = 0;
  local_ef0 = 0;
  local_ee8 = 0;
  local_ec0 = 0;
  local_eb8 = 0;
  local_e90 = 0;
  local_e88 = 0;
  local_e60 = 0;
  local_e58 = 0;
  local_e30 = 0;
  local_e28 = 0;
  local_e00 = 0;
  local_df8 = 0;
  local_dd0 = 0;
  local_dc8 = 0;
  local_da0 = 0;
  local_d98 = 0;
  local_d70 = 0;
  local_d68 = 0;
  local_d40 = 0;
  local_d38 = 0;
  local_d10 = 0;
  local_d08 = 0;
  local_ce0 = 0;
  local_cd8 = 0;
  uStack_1038 = 0;
  local_1037 = 0;
  uStack_1040 = 0;
  uStack_1048 = 0;
  local_1050 = 0;
  uStack_1058 = 0;
  local_1060 = 0;
  uStack_1068 = 0;
  local_1070 = 0;
  local_100c = 0;
  local_1008 = 0;
  local_1000 = 0;
  local_ff4 = 0;
  uStack_fe0 = 0;
  local_fdb = 0;
  uStack_fe8 = 0;
  local_ff0 = 0;
  uStack_fb8 = 0;
  local_fb3 = 0;
  local_f70 = 0;
  uStack_f78 = 0;
  local_f80 = 0;
  uStack_f88 = 0;
  local_f90 = 0;
  uStack_f98 = 0;
  local_fa0 = 0;
  uStack_f30 = 0;
  local_f38 = 0;
  local_f28 = 0;
                    /* try { // try from 008b8dd4 to 008b8de7 has its CatchHandler @ 008b8fc0 */
  facebook::react::RNSVGSvgViewAndroidProps::RNSVGSvgViewAndroidProps
            ((RNSVGSvgViewAndroidProps *)local_cb0,(PropsParserContext *)local_1810,
             (RNSVGSvgViewAndroidProps *)&local_17b0,(RawProps *)&local_f8);
  FUN_008b9c54(local_cb0);
  FUN_008b9c54(&local_17b0);
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
                    /* try { // try from 008b8eec to 008b8ef7 has its CatchHandler @ 008b8fc4 */
        (*(code *)(&PTR_FUN_0098f088)[*(uint *)((long)pvVar3 + -8)])
                  (&local_17b0,(void *)((long)pvVar3 + -0x38));
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
  if (local_17d0 != (void *)0x0) {
    pvStack_17c8 = local_17d0;
    operator_delete(local_17d0);
  }
  if (pvStack_17e8 != (void *)0x0) {
    local_17e0 = pvStack_17e8;
    operator_delete(pvStack_17e8);
  }
  if (local_1800 != (void *)0x0) {
    pvStack_17f8 = local_1800;
    operator_delete(local_1800);
  }
  *param_1 = this;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008b8fc8  FUN_008b8fc8 =====

void FUN_008b8fc8(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 008b8fec  FUN_008b8fec =====

undefined * FUN_008b8fec(void)

{
  return PTR_RNSVGSvgViewAndroidComponentName_0099f268;
}


// ===== 008b8ff8  FUN_008b8ff8 =====

undefined * FUN_008b8ff8(void)

{
  return PTR_RNSVGSvgViewAndroidComponentName_0099f268;
}


// ===== 008b9004  FUN_008b9004 =====

undefined8 FUN_008b9004(void)

{
  return 0x61;
}


// ===== 008b900c  FUN_008b900c =====

void FUN_008b900c(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

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
  *puVar6 = &PTR_FUN_0099b290;
                    /* try { // try from 008b9078 to 008b9087 has its CatchHandler @ 008b9160 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4,uVar5);
  lVar7 = puVar6[4];
  puVar6[3] = &PTR_FUN_0099b2e0;
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
             *(char *)(lVar7 + 0x7b0) != '\0') << 0xb;
                    /* try { // try from 008b9114 to 008b911f has its CatchHandler @ 008b9150 */
  (**(code **)(lVar8 + 0x60))(param_2,pYVar1);
  *param_1 = pYVar1;
  param_1[1] = puVar6;
  if (*(long *)(lVar4 + 0x28) != lVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 008b9190  FUN_008b9190 =====

void FUN_008b9190(undefined8 *param_1,long *param_2,ShadowNode *param_3,ShadowNodeFragment *param_4)

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
  *plVar5 = (long)&PTR_FUN_0099b290;
                    /* try { // try from 008b91e8 to 008b91f7 has its CatchHandler @ 008b9338 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4);
  lVar6 = plVar5[4];
  plVar5[3] = (long)&PTR_FUN_0099b2e0;
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
             *(char *)(lVar6 + 0x7b0) != '\0') << 0xb;
  local_68 = pYVar1;
  local_60 = plVar5;
                    /* try { // try from 008b927c to 008b928b has its CatchHandler @ 008b9350 */
  facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::
  completeClone(pYVar1,param_3,param_4);
  local_78 = pYVar1;
  local_70 = plVar5;
  FUN_00757d00(1,plVar5 + 1);
                    /* try { // try from 008b929c to 008b92ab has its CatchHandler @ 008b9328 */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_78);
  plVar5 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar6 = FUN_00757990(0xffffffffffffffff,local_70 + 1), lVar6 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pYVar1 = local_68;
                    /* try { // try from 008b92e8 to 008b92f3 has its CatchHandler @ 008b9350 */
  (**(code **)(*param_2 + 0x60))(param_2,local_68);
  *param_1 = pYVar1;
  param_1[1] = local_60;
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 008b9378  FUN_008b9378 =====

void FUN_008b9378(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x008b9388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 008b938c  FUN_008b938c =====

void FUN_008b938c(undefined8 *param_1,long param_2,PropsParserContext *param_3,long *param_4,
                 RawProps *param_5)

{
  RNSVGSvgViewAndroidProps *this;
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
  RNSVGSvgViewAndroidProps *pRVar12;
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
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGSvgViewAndroidComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNSVGSvgViewAndroidPropsENS0_31RNSVGSvgViewAndroidEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed00
         & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGSvgViewAndroidComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNSVGSvgViewAndroidPropsENS0_31RNSVGSvgViewAndroidEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed00
                                   ), iVar6 != 0)) {
                    /* try { // try from 008b97c0 to 008b97c3 has its CatchHandler @ 008b97f0 */
      FUN_008b9fd4();
      __cxa_atexit(FUN_008ba1b0,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGSvgViewAndroidComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNSVGSvgViewAndroidPropsENS0_31RNSVGSvgViewAndroidEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ecf8
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGSvgViewAndroidComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNSVGSvgViewAndroidPropsENS0_31RNSVGSvgViewAndroidEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed00
                         );
    }
    lVar11 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGSvgViewAndroidComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNSVGSvgViewAndroidPropsENS0_31RNSVGSvgViewAndroidEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ecf8
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGSvgViewAndroidComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNSVGSvgViewAndroidPropsENS0_31RNSVGSvgViewAndroidEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ecf8
    ;
    param_1[1] = lVar11;
    if (lVar11 != 0) {
      FUN_00757d00(1,lVar11 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    pRVar12 = (RNSVGSvgViewAndroidProps *)*param_4;
    if (pRVar12 == (RNSVGSvgViewAndroidProps *)0x0) {
      if (((*
            PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGSvgViewAndroidComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNSVGSvgViewAndroidPropsENS0_31RNSVGSvgViewAndroidEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed00
           & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGSvgViewAndroidComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNSVGSvgViewAndroidPropsENS0_31RNSVGSvgViewAndroidEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed00
                                     ), iVar6 != 0)) {
                    /* try { // try from 008b9740 to 008b9743 has its CatchHandler @ 008b9808 */
        FUN_008b9fd4();
        __cxa_atexit(FUN_008ba1b0,
                     PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGSvgViewAndroidComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNSVGSvgViewAndroidPropsENS0_31RNSVGSvgViewAndroidEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ecf8
                     ,&PTR_LOOP_008d5d30);
        __cxa_guard_release(
                           PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGSvgViewAndroidComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNSVGSvgViewAndroidPropsENS0_31RNSVGSvgViewAndroidEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed00
                           );
      }
      pRVar12 = *(RNSVGSvgViewAndroidProps **)
                 PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGSvgViewAndroidComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNSVGSvgViewAndroidPropsENS0_31RNSVGSvgViewAndroidEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ecf8
      ;
    }
    plVar8 = (long *)operator_new(0xb18);
    this = (RNSVGSvgViewAndroidProps *)(plVar8 + 3);
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = (long)&PTR_FUN_0099b3f8;
                    /* try { // try from 008b946c to 008b947f has its CatchHandler @ 008b987c */
    facebook::react::RNSVGSvgViewAndroidProps::RNSVGSvgViewAndroidProps
              (this,param_3,pRVar12,param_5);
                    /* try { // try from 008b9484 to 008b9497 has its CatchHandler @ 008b9894 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if ((((uVar7 & 1) == 0) ||
        (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar7 & 1) == 0)) ||
       (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
                enablePropsUpdateReconciliationAndroid(), (uVar7 & 1) == 0)) {
LAB_008b94c0:
      FUN_00757d00(1,plVar8 + 1);
      if (*param_4 == 0) {
        if (((*
              PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGSvgViewAndroidComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNSVGSvgViewAndroidPropsENS0_31RNSVGSvgViewAndroidEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed00
             & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(
                                       PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGSvgViewAndroidComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNSVGSvgViewAndroidPropsENS0_31RNSVGSvgViewAndroidEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed00
                                       ), iVar6 != 0)) {
                    /* try { // try from 008b9780 to 008b9783 has its CatchHandler @ 008b97f4 */
          FUN_008b9fd4();
          __cxa_atexit(FUN_008ba1b0,
                       PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGSvgViewAndroidComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNSVGSvgViewAndroidPropsENS0_31RNSVGSvgViewAndroidEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ecf8
                       ,&PTR_LOOP_008d5d30);
          __cxa_guard_release(
                             PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGSvgViewAndroidComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNSVGSvgViewAndroidPropsENS0_31RNSVGSvgViewAndroidEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed00
                             );
        }
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 008b9528 to 008b953b has its CatchHandler @ 008b9820 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*(undefined8 *)
                         PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGSvgViewAndroidComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNSVGSvgViewAndroidPropsENS0_31RNSVGSvgViewAndroidEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ecf8
                   ,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
LAB_008b9574:
          (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
        }
        else if (local_b0 != (dynamic *)0x0) {
          lVar11 = 5;
          pdVar10 = local_b0;
          goto LAB_008b9574;
        }
        if (plVar8 != (long *)0x0) goto LAB_008b9588;
      }
      else {
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 008b94dc to 008b94ef has its CatchHandler @ 008b9848 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*param_4,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
        }
        else {
          if (local_b0 == (dynamic *)0x0) goto LAB_008b9588;
          lVar11 = 5;
          pdVar10 = local_b0;
        }
        (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
LAB_008b9588:
        lVar11 = FUN_00757990(0xffffffffffffffff,plVar8 + 1);
        if (lVar11 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 008b94a4 to 008b94af has its CatchHandler @ 008b981c */
      pcVar9 = (char *)(**(code **)(*(long *)this + 0x10))(this);
      iVar6 = strcmp(PTR_RNSVGSvgViewAndroidComponentName_0099f268,pcVar9);
      if (iVar6 != 0) goto LAB_008b94c0;
      bVar3 = false;
    }
                    /* try { // try from 008b95b4 to 008b95b7 has its CatchHandler @ 008b9894 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar7 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 008b95c4 to 008b95df has its CatchHandler @ 008b9844 */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(plVar8 + 7));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 008b9720 to 008b972f has its CatchHandler @ 008b983c */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_008b98e0;
      }
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (*(int *)(plVar4 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 008b9700 to 008b970f has its CatchHandler @ 008b98a0 */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_008b98e0;
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
                    /* try { // try from 008b9660 to 008b966b has its CatchHandler @ 008b98a8 */
        folly::dynamic::dynamic(local_d0,(dynamic *)(plVar4 + 8));
        local_a0 = 0;
                    /* try { // try from 008b9670 to 008b9687 has its CatchHandler @ 008b98ac */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (this,param_3,uVar1,pcVar9,local_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 008b9698 to 008b96a3 has its CatchHandler @ 008b989c */
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
LAB_008b98e0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008b98e4  FUN_008b98e4 =====

void FUN_008b98e4(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 008b98ec  FUN_008b98ec =====

void FUN_008b98ec(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 008b98f4  FUN_008b98f4 =====

void FUN_008b98f4(undefined8 *param_1,long param_2,long param_3)

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
                    /* try { // try from 008b993c to 008b9943 has its CatchHandler @ 008b9c28 */
  plVar5 = (long *)operator_new(0x68);
  *plVar5 = (long)&PTR_FUN_0099b448;
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
                    /* try { // try from 008b9980 to 008b998f has its CatchHandler @ 008b9bfc */
  facebook::react::EventEmitter::EventEmitter(pEVar1,&local_70,&local_80);
  *(undefined ***)pEVar1 = &PTR_FUN_0097ff10;
                    /* try { // try from 008b99a0 to 008b99a7 has its CatchHandler @ 008b9bec */
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
  plVar5[3] = (long)&PTR_FUN_0099b498;
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
                    /* try { // try from 008b9a58 to 008b9a5f has its CatchHandler @ 008b9bdc */
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
                    /* try { // try from 008b9aac to 008b9ac3 has its CatchHandler @ 008b9bac */
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
                    /* try { // try from 008b9b18 to 008b9b23 has its CatchHandler @ 008b9b8c */
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


// ===== 008b9c50  FUN_008b9c50 =====

void FUN_008b9c50(void)

{
  return;
}


// ===== 008b9c54  FUN_008b9c54 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_008b9c54(long param_1)

{
  byte bVar1;
  
  folly::dynamic::folly::dynamic::destroy(param_1 + 0xad0);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0xaa0);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0xa70);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0xa40);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0xa10);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x9e0);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x9b0);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x980);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x950);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x920);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x8f0);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x8c0);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x890);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x848);
  if ((*(byte *)(param_1 + 0x828) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x810);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x838));
    bVar1 = *(byte *)(param_1 + 0x810);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x7e8);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x820));
    bVar1 = *(byte *)(param_1 + 0x7e8);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x7c0);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x7f8));
    bVar1 = *(byte *)(param_1 + 0x7c0);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x770);
  }
  else {
    operator_delete(*(void **)(param_1 + 2000));
    bVar1 = *(byte *)(param_1 + 0x770);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0x750);
  }
  else {
    operator_delete(*(void **)(param_1 + 0x780));
    bVar1 = *(byte *)(param_1 + 0x750);
  }
  if ((bVar1 & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x760));
  }
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x710);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x6e0);
  FUN_0078917c(param_1,PTR_VTT_0099f278 + 8);
  return;
}


// ===== 008b9d8c  FUN_008b9d8c =====

void FUN_008b9d8c(long param_1)

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


// ===== 008b9ddc  FUN_008b9ddc =====

void FUN_008b9ddc(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099b290;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008b9dec  FUN_008b9dec =====

void FUN_008b9dec(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099b290;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008b9e1c  FUN_008b9e1c =====

void FUN_008b9e1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x008b9e24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 008b9e28  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008b9e2c  FUN_008b9e2c =====

void FUN_008b9e2c(long *param_1)

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


// ===== 008b9eec  FUN_008b9eec =====

void FUN_008b9eec(long param_1)

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


// ===== 008b9f54  FUN_008b9f54 =====

bool FUN_008b9f54(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 008b9f6c  FUN_008b9f6c =====

bool FUN_008b9f6c(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 008b9f84  FUN_008b9f84 =====

void FUN_008b9f84(long param_1)

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


// ===== 008b9fd4  FUN_008b9fd4 =====

void FUN_008b9fd4(void)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0xb18);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_0099b3a8;
  memset(__s,0,0xb00);
                    /* try { // try from 008ba010 to 008ba023 has its CatchHandler @ 008ba194 */
  FUN_00788b10(__s,PTR_VTT_0099f278 + 0x10);
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
  puVar1 = PTR_vtable_0099f270;
  puVar2[0xfd] = 0;
  *(undefined4 *)(puVar2 + 0xd9) = 0;
  *(undefined2 *)((long)puVar2 + 0x6cc) = 0;
  puVar2[3] = puVar1 + 0x20;
  puVar2[0xf2] = 0;
  puVar2[0xf1] = 0;
  *(undefined8 *)((long)puVar2 + 0x799) = 0;
  *(undefined8 *)((long)puVar2 + 0x791) = 0;
  *(undefined8 *)((long)puVar2 + 0x7b4) = 0;
  *(undefined8 *)((long)puVar2 + 0x7ac) = 0;
  *(undefined8 *)((long)puVar2 + 0x7a4) = 0;
  *(undefined8 *)((long)puVar2 + 0x7cc) = 0;
  *(undefined8 *)((long)puVar2 + 0x7ed) = 0;
  *(undefined4 *)(puVar2 + 0xdf) = 0;
  puVar2[0xe0] = 0;
  *(undefined4 *)(puVar2 + 0xe5) = 0;
  puVar2[0xe6] = 0;
  *(undefined4 *)(puVar2 + 0xff) = 0;
  *(undefined4 *)(puVar2 + 0x104) = 0;
  *(undefined4 *)(puVar2 + 0x10c) = 0;
  puVar2[0x10d] = 0;
  *(undefined4 *)(puVar2 + 0x115) = 0;
  puVar2[0x116] = 0;
  *(undefined4 *)(puVar2 + 0x11b) = 0;
  puVar2[0x11c] = 0;
  *(undefined4 *)(puVar2 + 0x121) = 0;
  puVar2[0x122] = 0;
  *(undefined4 *)(puVar2 + 0x127) = 0;
  puVar2[0x128] = 0;
  *(undefined4 *)(puVar2 + 0x12d) = 0;
  puVar2[0x12e] = 0;
  *(undefined4 *)(puVar2 + 0x133) = 0;
  puVar2[0x134] = 0;
  *(undefined4 *)(puVar2 + 0x139) = 0;
  puVar2[0x13a] = 0;
  *(undefined4 *)(puVar2 + 0x13f) = 0;
  puVar2[0x140] = 0;
  *(undefined4 *)(puVar2 + 0x145) = 0;
  puVar2[0x146] = 0;
  *(undefined4 *)(puVar2 + 0x14b) = 0;
  puVar2[0x14c] = 0;
  *(undefined4 *)(puVar2 + 0x151) = 0;
  puVar2[0x152] = 0;
  *(undefined4 *)(puVar2 + 0x157) = 0;
  puVar2[0x158] = 0;
  *(undefined4 *)(puVar2 + 0x15d) = 0;
  puVar2[0x15e] = 0;
  puVar2[0xf0] = 0;
  puVar2[0xef] = 0;
  puVar2[0xee] = 0;
  puVar2[0xed] = 0;
  puVar2[0xec] = 0;
  puVar2[0xeb] = 0;
  *(undefined1 *)((long)puVar2 + 0x7bc) = 0;
  *(undefined1 *)(puVar2 + 0xf9) = 0;
  puVar2[0xf8] = 0;
  *(undefined1 *)((long)puVar2 + 0x7d4) = 0;
  puVar2[0xfc] = 0;
  puVar2[0xfb] = 0;
  puVar2[0x101] = 0;
  puVar2[0x100] = 0;
  *(undefined8 *)((long)puVar2 + 0x815) = 0;
  puVar2[0x102] = 0;
  *(undefined1 *)(puVar2 + 0x10b) = 0;
  puVar2[0x10a] = 0;
  puVar2[0x109] = 0;
  puVar2[0x108] = 0;
  puVar2[0x107] = 0;
  puVar2[0x106] = 0;
  puVar2[0x105] = 0;
  *(undefined4 *)(puVar2 + 0x114) = 0;
  puVar1 = 
  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_32RNSVGSvgViewAndroidComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_24RNSVGSvgViewAndroidPropsENS0_31RNSVGSvgViewAndroidEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ecf8
  ;
  puVar2[0x113] = 0;
  puVar2[0x112] = 0;
  *(undefined8 **)puVar1 = __s;
  *(undefined8 **)(puVar1 + 8) = puVar2;
  return;
}


// ===== 008ba1b0  FUN_008ba1b0 =====

void FUN_008ba1b0(long param_1)

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


// ===== 008ba200  FUN_008ba200 =====

void FUN_008ba200(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099b3a8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008ba210  FUN_008ba210 =====

void FUN_008ba210(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099b3a8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008ba240  FUN_008ba240 =====

void FUN_008ba240(long param_1)

{
  FUN_008b9c54(param_1 + 0x18);
  return;
}


// ===== 008ba248  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008ba24c  FUN_008ba24c =====

void FUN_008ba24c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099b3f8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008ba25c  FUN_008ba25c =====

void FUN_008ba25c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099b3f8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008ba28c  FUN_008ba28c =====

void FUN_008ba28c(long param_1)

{
  FUN_008b9c54(param_1 + 0x18);
  return;
}


// ===== 008ba294  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008ba298  FUN_008ba298 =====

void FUN_008ba298(long param_1)

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


// ===== 008ba2e8  FUN_008ba2e8 =====

void FUN_008ba2e8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099b448;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008ba2f8  FUN_008ba2f8 =====

void FUN_008ba2f8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099b448;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008ba328  FUN_008ba328 =====

void FUN_008ba328(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x008ba330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 008ba334  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008ba338  FUN_008ba338 =====

void FUN_008ba338(long *param_1)

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


// ===== 008ba3f0  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_23RNSVGConcreteShadowNodeIXadsoKcL_ZNS0_24RNSVGSymbolComponentNameEEEENS0_16RNSVGSymbolPropsEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENS8_14default_deleteISB_EEEERKNS0_29ComponentDescriptorParametersE =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_23RNSVGConcreteShadowNodeIXadsoKcL_ZNS0_24RNSVGSymbolComponentNameEEEENS0_16RNSVGSymbolPropsEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENS8_14default_deleteISB_EEEERKNS0_29ComponentDescriptorParametersE
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
  undefined8 local_b88;
  undefined8 uStack_b80;
  undefined8 uStack_b78;
  undefined4 uStack_b70;
  undefined4 local_b6c;
  undefined4 uStack_b68;
  undefined8 uStack_b64;
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
                    /* try { // try from 008ba444 to 008ba44f has its CatchHandler @ 008bab3c */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_1550);
  local_f8 = 0;
  *(undefined ***)this = &PTR_FUN_0099b4d0;
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
                    /* try { // try from 008ba4c0 to 008ba4d3 has its CatchHandler @ 008bab6c */
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
  local_1500 = *(undefined **)(PTR_VTT_0099f290 + 0x20);
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
  local_1500 = PTR_vtable_0099f288 + 0x20;
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
  uStack_c30 = 0;
  local_c38 = 0;
  uStack_c20 = 0;
  uStack_c28 = 0;
  uStack_c40 = 0;
  local_c48 = 0;
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
  local_c18 = 0;
  uStack_b64 = 0;
  uStack_b68 = 0;
  uStack_b80 = 0;
  local_b88 = 0;
  uStack_b70 = 0;
  local_b6c = 0;
  uStack_b78 = 0;
                    /* try { // try from 008ba97c to 008ba98f has its CatchHandler @ 008bab6c */
  facebook::react::RNSVGSymbolProps::RNSVGSymbolProps
            ((RNSVGSymbolProps *)local_b58,(PropsParserContext *)local_1560,
             (RNSVGSymbolProps *)&local_1500,(RawProps *)&local_f8);
  FUN_008bb630(local_b58);
  FUN_008bb630(&local_1500);
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
                    /* try { // try from 008baa94 to 008baa9f has its CatchHandler @ 008bab70 */
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


// ===== 008bab74  FUN_008bab74 =====

void FUN_008bab74(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 008bab98  FUN_008bab98 =====

undefined * FUN_008bab98(void)

{
  return PTR_RNSVGSymbolComponentName_0099f280;
}


// ===== 008baba4  FUN_008baba4 =====

undefined * FUN_008baba4(void)

{
  return PTR_RNSVGSymbolComponentName_0099f280;
}


// ===== 008babb0  FUN_008babb0 =====

undefined8 FUN_008babb0(void)

{
  return 0x61;
}


// ===== 008babb8  FUN_008babb8 =====

void FUN_008babb8(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

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
  *puVar4 = &PTR_FUN_0099b560;
                    /* try { // try from 008bac24 to 008bac33 has its CatchHandler @ 008bac98 */
  facebook::react::RNSVGLayoutableShadowNode::RNSVGLayoutableShadowNode
            (pRVar1,param_3,param_4,uVar3);
  lVar5 = *param_2;
  puVar4[3] = &PTR_FUN_0099b5b0;
                    /* try { // try from 008bac4c to 008bac57 has its CatchHandler @ 008bac88 */
  (**(code **)(lVar5 + 0x60))(param_2,pRVar1);
  *param_1 = pRVar1;
  param_1[1] = puVar4;
  if (*(long *)(lVar2 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008bacc8  FUN_008bacc8 =====

void FUN_008bacc8(undefined8 *param_1,long *param_2,ShadowNode *param_3,ShadowNodeFragment *param_4)

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
  *plVar3 = (long)&PTR_FUN_0099b560;
                    /* try { // try from 008bad20 to 008bad2f has its CatchHandler @ 008badfc */
  facebook::react::RNSVGLayoutableShadowNode::RNSVGLayoutableShadowNode(pRVar1,param_3,param_4);
  plVar3[3] = (long)&PTR_FUN_0099b5b0;
  local_68 = pRVar1;
  local_60 = plVar3;
                    /* try { // try from 008bad40 to 008bad4f has its CatchHandler @ 008bae14 */
  facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::
  completeClone(pRVar1,param_3,param_4);
  local_78 = pRVar1;
  local_70 = plVar3;
  FUN_00757d00(1,plVar3 + 1);
                    /* try { // try from 008bad60 to 008bad6f has its CatchHandler @ 008badec */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_78);
  plVar3 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar4 = FUN_00757990(0xffffffffffffffff,local_70 + 1), lVar4 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pRVar1 = local_68;
                    /* try { // try from 008badac to 008badb7 has its CatchHandler @ 008bae14 */
  (**(code **)(*param_2 + 0x60))(param_2,local_68);
  *param_1 = pRVar1;
  param_1[1] = local_60;
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008bae3c  FUN_008bae3c =====

void FUN_008bae3c(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x008bae4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 008bae50  FUN_008bae50 =====

void FUN_008bae50(undefined8 *param_1,long param_2,PropsParserContext *param_3,long *param_4,
                 RawProps *param_5)

{
  RNSVGSymbolProps *this;
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
  RNSVGSymbolProps *pRVar12;
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
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNSVGSymbolComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_16RNSVGSymbolPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed10
         & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNSVGSymbolComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_16RNSVGSymbolPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed10
                                   ), iVar6 != 0)) {
                    /* try { // try from 008bb284 to 008bb287 has its CatchHandler @ 008bb2b4 */
      FUN_008bba1c();
      __cxa_atexit(FUN_008bbbc0,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNSVGSymbolComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_16RNSVGSymbolPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed08
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNSVGSymbolComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_16RNSVGSymbolPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed10
                         );
    }
    lVar11 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNSVGSymbolComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_16RNSVGSymbolPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed08
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNSVGSymbolComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_16RNSVGSymbolPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed08
    ;
    param_1[1] = lVar11;
    if (lVar11 != 0) {
      FUN_00757d00(1,lVar11 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    pRVar12 = (RNSVGSymbolProps *)*param_4;
    if (pRVar12 == (RNSVGSymbolProps *)0x0) {
      if (((*
            PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNSVGSymbolComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_16RNSVGSymbolPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed10
           & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNSVGSymbolComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_16RNSVGSymbolPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed10
                                     ), iVar6 != 0)) {
                    /* try { // try from 008bb204 to 008bb207 has its CatchHandler @ 008bb2cc */
        FUN_008bba1c();
        __cxa_atexit(FUN_008bbbc0,
                     PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNSVGSymbolComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_16RNSVGSymbolPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed08
                     ,&PTR_LOOP_008d5d30);
        __cxa_guard_release(
                           PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNSVGSymbolComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_16RNSVGSymbolPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed10
                           );
      }
      pRVar12 = *(RNSVGSymbolProps **)
                 PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNSVGSymbolComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_16RNSVGSymbolPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed08
      ;
    }
    plVar8 = (long *)operator_new(0x9c0);
    this = (RNSVGSymbolProps *)(plVar8 + 3);
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = (long)&PTR_FUN_0099b6c8;
                    /* try { // try from 008baf30 to 008baf43 has its CatchHandler @ 008bb340 */
    facebook::react::RNSVGSymbolProps::RNSVGSymbolProps(this,param_3,pRVar12,param_5);
                    /* try { // try from 008baf48 to 008baf5b has its CatchHandler @ 008bb358 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if ((((uVar7 & 1) == 0) ||
        (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar7 & 1) == 0)) ||
       (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
                enablePropsUpdateReconciliationAndroid(), (uVar7 & 1) == 0)) {
LAB_008baf84:
      FUN_00757d00(1,plVar8 + 1);
      if (*param_4 == 0) {
        if (((*
              PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNSVGSymbolComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_16RNSVGSymbolPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed10
             & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(
                                       PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNSVGSymbolComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_16RNSVGSymbolPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed10
                                       ), iVar6 != 0)) {
                    /* try { // try from 008bb244 to 008bb247 has its CatchHandler @ 008bb2b8 */
          FUN_008bba1c();
          __cxa_atexit(FUN_008bbbc0,
                       PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNSVGSymbolComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_16RNSVGSymbolPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed08
                       ,&PTR_LOOP_008d5d30);
          __cxa_guard_release(
                             PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNSVGSymbolComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_16RNSVGSymbolPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed10
                             );
        }
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 008bafec to 008bafff has its CatchHandler @ 008bb2e4 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*(undefined8 *)
                         PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNSVGSymbolComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_16RNSVGSymbolPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed08
                   ,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
LAB_008bb038:
          (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
        }
        else if (local_b0 != (dynamic *)0x0) {
          lVar11 = 5;
          pdVar10 = local_b0;
          goto LAB_008bb038;
        }
        if (plVar8 != (long *)0x0) goto LAB_008bb04c;
      }
      else {
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 008bafa0 to 008bafb3 has its CatchHandler @ 008bb30c */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*param_4,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
        }
        else {
          if (local_b0 == (dynamic *)0x0) goto LAB_008bb04c;
          lVar11 = 5;
          pdVar10 = local_b0;
        }
        (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
LAB_008bb04c:
        lVar11 = FUN_00757990(0xffffffffffffffff,plVar8 + 1);
        if (lVar11 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 008baf68 to 008baf73 has its CatchHandler @ 008bb2e0 */
      pcVar9 = (char *)(**(code **)(*(long *)this + 0x10))(this);
      iVar6 = strcmp(PTR_RNSVGSymbolComponentName_0099f280,pcVar9);
      if (iVar6 != 0) goto LAB_008baf84;
      bVar3 = false;
    }
                    /* try { // try from 008bb078 to 008bb07b has its CatchHandler @ 008bb358 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar7 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 008bb088 to 008bb0a3 has its CatchHandler @ 008bb308 */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(plVar8 + 7));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 008bb1e4 to 008bb1f3 has its CatchHandler @ 008bb300 */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_008bb3a4;
      }
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (*(int *)(plVar4 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 008bb1c4 to 008bb1d3 has its CatchHandler @ 008bb364 */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_008bb3a4;
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
                    /* try { // try from 008bb124 to 008bb12f has its CatchHandler @ 008bb36c */
        folly::dynamic::dynamic(local_d0,(dynamic *)(plVar4 + 8));
        local_a0 = 0;
                    /* try { // try from 008bb134 to 008bb14b has its CatchHandler @ 008bb370 */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (this,param_3,uVar1,pcVar9,local_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 008bb15c to 008bb167 has its CatchHandler @ 008bb360 */
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
LAB_008bb3a4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008bb3a8  FUN_008bb3a8 =====

void FUN_008bb3a8(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 008bb3b0  FUN_008bb3b0 =====

void FUN_008bb3b0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 008bb3b8  FUN_008bb3b8 =====

void FUN_008bb3b8(undefined8 *param_1,long param_2,long param_3)

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
                    /* try { // try from 008bb3fc to 008bb403 has its CatchHandler @ 008bb604 */
  plVar6 = (long *)operator_new(0x68);
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&PTR_FUN_00992a08;
                    /* try { // try from 008bb41c to 008bb427 has its CatchHandler @ 008bb5ec */
  local_78 = FUN_008707fc(plVar6 + 3,&local_58,param_2 + 8);
  local_70 = plVar6;
  if ((local_50 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,local_50 + 1), lVar7 == 0)) {
    (**(code **)(*local_50 + 0x10))(local_50);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 008bb45c to 008bb463 has its CatchHandler @ 008bb5dc */
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
                    /* try { // try from 008bb4b0 to 008bb4c7 has its CatchHandler @ 008bb5ac */
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
                    /* try { // try from 008bb51c to 008bb527 has its CatchHandler @ 008bb58c */
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


// ===== 008bb62c  FUN_008bb62c =====

void FUN_008bb62c(void)

{
  return;
}


// ===== 008bb630  FUN_008bb630 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_008bb630(long param_1)

{
  byte bVar1;
  void *pvVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  if ((*(byte *)(param_1 + 0x988) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x998));
  }
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
  FUN_0078917c(param_1,PTR_VTT_0099f290 + 8);
  return;
}


// ===== 008bb7d4  FUN_008bb7d4 =====

void FUN_008bb7d4(long param_1)

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


// ===== 008bb824  FUN_008bb824 =====

void FUN_008bb824(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099b560;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008bb834  FUN_008bb834 =====

void FUN_008bb834(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099b560;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008bb864  FUN_008bb864 =====

void FUN_008bb864(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x008bb86c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 008bb870  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008bb874  FUN_008bb874 =====

void FUN_008bb874(long *param_1)

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


// ===== 008bb934  FUN_008bb934 =====

void FUN_008bb934(long param_1)

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


// ===== 008bb99c  FUN_008bb99c =====

bool FUN_008bb99c(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 008bb9b4  FUN_008bb9b4 =====

bool FUN_008bb9b4(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 008bb9cc  FUN_008bb9cc =====

void FUN_008bb9cc(long param_1)

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


// ===== 008bba1c  FUN_008bba1c =====

void FUN_008bba1c(void)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x9c0);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_0099b678;
  memset(__s,0,0x9a8);
                    /* try { // try from 008bba58 to 008bba6b has its CatchHandler @ 008bbba4 */
  FUN_00788b10(__s,PTR_VTT_0099f290 + 0x10);
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
  puVar1 = PTR_vtable_0099f288;
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
  *(undefined4 *)(puVar2 + 0xe2) = 0x3f800000;
  *(undefined4 *)(puVar2 + 0x10a) = 0x3f800000;
  puVar2[0xe1] = 0;
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
  puVar2[0x11b] = 0;
  puVar2[0x11a] = 0;
  *(undefined8 *)((long)puVar2 + 0x9b4) = 0;
  *(undefined8 *)((long)puVar2 + 0x9ac) = 0;
  puVar2[0x135] = 0;
  puVar2[0x134] = 0;
  puVar1 = 
  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_24RNSVGSymbolComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_16RNSVGSymbolPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed08
  ;
  puVar2[0x133] = 0;
  puVar2[0x132] = 0;
  *(undefined8 **)puVar1 = __s;
  *(undefined8 **)(puVar1 + 8) = puVar2;
  return;
}


// ===== 008bbbc0  FUN_008bbbc0 =====

void FUN_008bbbc0(long param_1)

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


// ===== 008bbc10  FUN_008bbc10 =====

void FUN_008bbc10(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099b678;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008bbc20  FUN_008bbc20 =====

void FUN_008bbc20(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099b678;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008bbc50  FUN_008bbc50 =====

void FUN_008bbc50(long param_1)

{
  FUN_008bb630(param_1 + 0x18);
  return;
}


// ===== 008bbc58  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008bbc5c  FUN_008bbc5c =====

void FUN_008bbc5c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099b6c8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008bbc6c  FUN_008bbc6c =====

void FUN_008bbc6c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099b6c8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008bbc9c  FUN_008bbc9c =====

void FUN_008bbc9c(long param_1)

{
  FUN_008bb630(param_1 + 0x18);
  return;
}


// ===== 008bbca4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008bbca8  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_23RNSVGConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGTextComponentNameEEEENS0_14RNSVGTextPropsEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENS8_14default_deleteISB_EEEERKNS0_29ComponentDescriptorParametersE =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_23RNSVGConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGTextComponentNameEEEENS0_14RNSVGTextPropsEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENS8_14default_deleteISB_EEEERKNS0_29ComponentDescriptorParametersE
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
  undefined4 local_18c0 [2];
  undefined8 *local_18b8;
  void *local_18b0;
  void *pvStack_18a8;
  undefined8 local_18a0;
  void *pvStack_1898;
  void *local_1890;
  undefined8 uStack_1888;
  void *local_1880;
  void *pvStack_1878;
  undefined8 uStack_1870;
  undefined8 uStack_1868;
  undefined *local_1860;
  undefined8 uStack_1858;
  undefined8 local_1850;
  undefined8 uStack_1848;
  undefined4 local_1840 [2];
  undefined8 local_1838;
  undefined8 uStack_1830;
  undefined8 local_1828;
  undefined8 uStack_1820;
  undefined4 local_1818;
  undefined4 local_1810;
  undefined1 local_180c;
  undefined8 local_180b;
  undefined8 local_1803;
  undefined8 uStack_17fb;
  undefined8 local_17f3;
  undefined8 uStack_17eb;
  undefined8 local_17e3;
  undefined8 uStack_17db;
  undefined8 local_17d3;
  undefined6 uStack_17cb;
  undefined2 uStack_17c5;
  undefined6 uStack_17c3;
  undefined8 uStack_17bd;
  undefined4 local_17b5;
  undefined8 local_17b1;
  undefined1 local_17a9;
  undefined1 uStack_17a8;
  undefined7 uStack_17a7;
  undefined8 uStack_17a0;
  undefined8 uStack_1798;
  undefined8 uStack_1790;
  undefined8 local_1788;
  undefined8 uStack_1780;
  undefined8 local_1778;
  undefined8 uStack_1770;
  undefined8 local_1768;
  undefined8 uStack_1760;
  undefined8 local_1758;
  undefined8 uStack_1750;
  undefined8 uStack_1748;
  undefined8 local_1740;
  undefined8 local_1738;
  undefined8 uStack_1730;
  undefined8 local_1728;
  undefined4 uStack_1720;
  undefined4 uStack_171c;
  undefined4 uStack_1718;
  undefined4 uStack_1714;
  undefined4 uStack_1710;
  undefined4 uStack_170c;
  undefined8 local_1708;
  undefined8 uStack_1700;
  undefined4 local_16f8;
  undefined1 local_16f4;
  undefined4 local_16f0;
  undefined1 local_16ec;
  undefined4 local_16e8;
  undefined1 local_16e4;
  undefined4 local_16e0;
  undefined1 local_16dc;
  undefined4 local_16d8;
  undefined1 local_16d4;
  undefined4 local_16d0;
  undefined1 local_16cc;
  undefined4 local_16c8;
  undefined1 local_16c4;
  undefined4 local_16c0;
  undefined1 local_16bc;
  undefined4 local_16b8;
  undefined1 local_16b4;
  undefined4 local_16b0;
  undefined1 local_16ac;
  undefined4 local_16a8;
  undefined1 local_16a4;
  undefined4 local_16a0;
  undefined1 local_169c;
  undefined4 local_1698;
  undefined1 local_1694;
  undefined4 local_1690;
  undefined1 local_168c;
  undefined4 local_1688;
  undefined1 local_1684;
  undefined4 local_1680;
  undefined1 local_167c;
  undefined1 local_1678;
  undefined1 local_1674;
  undefined1 local_1668;
  undefined8 local_1660;
  undefined8 uStack_1658;
  undefined8 uStack_1650;
  undefined8 uStack_1648;
  undefined8 local_1640;
  undefined8 uStack_1638;
  undefined8 uStack_1630;
  undefined1 uStack_1628;
  undefined7 local_1627;
  undefined1 uStack_1620;
  undefined8 uStack_161f;
  undefined8 local_1614;
  undefined8 uStack_160c;
  undefined8 uStack_1604;
  undefined8 uStack_15fc;
  undefined8 local_15f4;
  undefined8 uStack_15ec;
  undefined8 uStack_15e4;
  undefined8 uStack_15dc;
  undefined8 local_15d4;
  undefined8 uStack_15cc;
  undefined8 uStack_15c4;
  undefined5 uStack_15bc;
  undefined3 local_15b7;
  undefined5 uStack_15b4;
  undefined1 local_15ac;
  undefined1 local_15a8;
  undefined1 local_15a4;
  undefined1 local_15a0;
  undefined1 local_159c;
  undefined1 local_1598;
  undefined1 local_1580;
  undefined8 local_1578;
  undefined8 uStack_1570;
  undefined8 local_1568;
  undefined4 local_1560;
  undefined1 local_155c;
  undefined4 local_155b;
  undefined1 local_1557;
  undefined1 local_1556;
  undefined8 local_1550;
  undefined8 uStack_1548;
  undefined8 uStack_1540;
  undefined8 uStack_1538;
  undefined8 local_1530;
  undefined7 uStack_1528;
  undefined4 uStack_1521;
  undefined8 local_151c;
  undefined1 local_1514;
  undefined1 local_150c;
  undefined1 local_1508;
  undefined1 local_1500;
  undefined1 local_14fc;
  undefined1 local_14f4;
  undefined1 local_14f0;
  undefined1 local_14e8;
  undefined1 local_14e4;
  undefined1 local_14dc;
  undefined1 local_14d8;
  undefined1 local_14d0;
  undefined1 local_14cc;
  undefined1 local_14c4;
  undefined1 local_14c0;
  undefined1 local_14b8;
  undefined1 local_14b4;
  undefined1 local_14ac;
  undefined1 local_14a8;
  undefined1 local_14a0;
  undefined1 local_149c;
  undefined1 local_1494;
  undefined1 local_1490;
  undefined1 local_1488;
  undefined1 local_1484;
  undefined1 local_147c;
  undefined1 local_1478;
  undefined1 local_1474;
  undefined1 local_1470;
  undefined1 local_146c;
  undefined1 local_1468;
  undefined1 local_1464;
  undefined1 local_1460;
  undefined1 local_145c;
  undefined1 local_1458;
  undefined1 local_1454;
  undefined1 local_1450;
  undefined1 local_144c;
  undefined1 local_1448;
  undefined1 local_1444;
  undefined1 local_1440;
  undefined1 local_143c;
  undefined1 local_1438;
  undefined1 local_1434;
  undefined1 local_1430;
  undefined1 local_142c;
  undefined1 local_1428;
  undefined1 local_1424;
  undefined1 local_1420;
  undefined1 local_141c;
  undefined8 local_1418;
  undefined8 uStack_1410;
  undefined8 local_1408;
  undefined8 uStack_1400;
  undefined8 uStack_13f8;
  undefined8 uStack_13f0;
  undefined2 local_13e8;
  undefined8 local_13e4;
  undefined1 local_13dc;
  undefined8 local_13d8;
  undefined8 local_13d0;
  undefined8 uStack_13c8;
  undefined1 local_13c0;
  undefined8 local_13b8;
  undefined8 uStack_13b0;
  undefined8 uStack_13a8;
  undefined8 uStack_13a0;
  undefined8 local_1398;
  undefined8 uStack_1390;
  undefined8 uStack_1388;
  undefined8 uStack_1380;
  undefined8 local_1378;
  undefined8 uStack_1370;
  undefined8 uStack_1368;
  undefined8 uStack_1360;
  undefined8 local_1358;
  undefined8 uStack_1350;
  undefined8 uStack_1348;
  undefined8 uStack_1340;
  undefined8 local_1338;
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
  undefined8 local_12d8;
  undefined8 uStack_12d0;
  undefined8 local_12c8;
  undefined6 uStack_12c0;
  undefined2 uStack_12ba;
  undefined6 uStack_12b8;
  undefined1 local_12b0;
  undefined1 local_12ac;
  undefined1 local_12a8;
  undefined8 local_12a4;
  undefined8 uStack_129c;
  undefined1 local_1294;
  undefined8 local_1290;
  undefined2 local_1288;
  undefined1 local_1286;
  undefined4 local_1284;
  undefined1 local_1280;
  undefined1 local_1220;
  undefined1 local_1218;
  undefined1 local_11b8;
  undefined4 local_11b0;
  undefined2 local_11ac;
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
  undefined8 local_1180;
  undefined8 uStack_1178;
  undefined8 local_1170;
  undefined4 local_1168;
  undefined8 local_1160;
  undefined8 uStack_1158;
  undefined8 local_1150;
  undefined8 uStack_1148;
  undefined8 local_1140;
  undefined8 uStack_1138;
  undefined8 local_1130;
  undefined8 uStack_1128;
  undefined8 local_1120;
  undefined8 uStack_1118;
  undefined8 local_1110;
  undefined8 uStack_1108;
  undefined8 local_1100;
  undefined8 uStack_10f8;
  undefined8 local_10f0;
  undefined8 uStack_10e8;
  undefined8 local_10e0;
  undefined5 uStack_10d8;
  undefined3 uStack_10d3;
  undefined5 uStack_10d0;
  undefined8 local_10c8;
  undefined8 uStack_10c0;
  undefined8 local_10b8;
  undefined8 uStack_10b0;
  undefined8 uStack_10a8;
  undefined8 uStack_10a0;
  undefined4 local_1098;
  undefined4 local_1090;
  undefined8 local_1088;
  undefined8 local_1060;
  undefined4 local_1058;
  undefined8 local_1050;
  undefined4 local_1028;
  undefined4 local_1020;
  undefined8 local_1018;
  undefined8 local_ff0;
  undefined4 local_fe8;
  undefined8 local_fe0;
  undefined8 local_fb8;
  undefined4 local_fb0;
  undefined8 local_fa8;
  undefined8 uStack_fa0;
  undefined8 local_f98;
  undefined8 uStack_f90;
  undefined8 uStack_f88;
  undefined8 uStack_f80;
  undefined4 local_f78;
  undefined8 local_f70;
  undefined4 local_f48;
  undefined8 local_f40;
  undefined4 local_f18;
  undefined8 local_f10;
  undefined4 local_ee8;
  undefined8 local_ee0;
  undefined4 local_eb8;
  undefined8 local_eb0;
  undefined4 local_e88;
  undefined8 local_e80;
  undefined4 local_e58;
  undefined8 local_e50;
  undefined4 local_e28;
  undefined8 local_e20;
  undefined4 local_df8;
  undefined8 local_df0;
  undefined4 local_dc8;
  undefined8 local_dc0;
  undefined4 local_d98;
  undefined8 local_d90;
  undefined8 local_d68;
  undefined8 uStack_d60;
  undefined8 uStack_d58;
  undefined8 uStack_d50;
  undefined8 local_d48;
  undefined8 uStack_d40;
  undefined4 local_d38;
  undefined8 local_d30;
  undefined4 local_d08 [2];
  undefined8 local_d00;
  undefined8 uStack_cf8;
  undefined8 local_cf0;
  undefined8 local_ce8;
  undefined8 uStack_ce0;
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
  pvStack_1898 = (void *)0x0;
  local_18a0 = 0;
  uStack_1888 = 0;
  local_1890 = (void *)0x0;
  pvStack_1878 = (void *)0x0;
  local_1880 = (void *)0x0;
  uStack_1868 = 0;
  uStack_1870 = 0;
  pvStack_18a8 = (void *)0x0;
  local_18b0 = (void *)0x0;
                    /* try { // try from 008bbcfc to 008bbd07 has its CatchHandler @ 008bc43c */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_18b0);
  local_f8 = 0;
  *(undefined ***)this = &PTR_FUN_0099b718;
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
                    /* try { // try from 008bbd78 to 008bbd8b has its CatchHandler @ 008bc46c */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1b0);
  local_100 = CONCAT44(local_100._4_4_,0x3f800000);
  local_18c0[0] = 0xffffffff;
  uStack_108 = 0;
  local_110 = (void *)0x0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_18b8 = &local_1b0;
  facebook::react::RawProps::facebook::react::RawProps::parse(&local_f8,this + 0x38);
  memset(local_1840,0,0xb38);
  local_d08[0] = 5;
  local_cf0 = 0;
  local_1860 = *(undefined **)(PTR_VTT_0099f2a8 + 0x20);
  local_1840[0] = 5;
  uStack_1848 = 0;
  local_1850 = 0;
  local_ce8 = 0;
  uStack_1858 = 0;
  uStack_ce0 = 0x3f800000;
  uStack_cf8 = 0;
  local_d00 = 0;
  uStack_1830 = 0;
  local_1838 = 0;
  uStack_1820 = 0;
  local_1828 = 0;
  local_1818 = 0x3f800000;
  folly::dynamic::folly::dynamic::destroy(local_d08);
  local_1810 = 0x10410710;
  local_180c = 0;
  uStack_1720 = 0;
  local_1728 = 0;
  uStack_170c = 0;
  uStack_1730 = 0;
  local_1738 = 0;
  uStack_17a7 = 0;
  uStack_17fb = 0;
  local_1803 = 0;
  local_180b = _s__00375408;
  uStack_17eb = 0;
  local_17f3 = 0;
  uStack_13c8 = _UNK_00371598;
  local_13d0 = _DAT_00371590;
  uStack_17db = 0;
  local_17e3 = 0;
  uStack_17cb = 0;
  local_17d3 = 0;
  uStack_12d0 = _UNK_00488920;
  local_12d8 = _DAT_00488918;
  uStack_12e0 = _UNK_00488910;
  local_12e8 = _DAT_00488908;
  local_17b5 = 0x40004;
  uStack_1714 = 0;
  uStack_1710 = 0;
  uStack_171c = 0;
  uStack_1718 = 0;
  uStack_1700 = 0;
  local_1708 = 0;
  local_16f8 = 0x7fc00000;
  local_16f0 = 0x7fc00000;
  local_16e8 = 0x7fc00000;
  local_16e0 = 0x7fc00000;
  local_16d8 = 0x7fc00000;
  local_16d0 = 0x7fc00000;
  local_16c8 = 0x7fc00000;
  local_16c0 = 0x7fc00000;
  local_16b8 = 0x7fc00000;
  local_16b0 = 0x7fc00000;
  local_16a8 = 0x7fc00000;
  local_16a0 = 0x7fc00000;
  local_1698 = 0x7fc00000;
  local_1690 = 0x7fc00000;
  local_1688 = 0x7fc00000;
  local_1680 = 0x7fc00000;
  uStack_161f = 0;
  uStack_1620 = 0;
  uStack_160c = 0;
  local_1614 = 0;
  uStack_15fc = 0;
  uStack_1604 = 0;
  uStack_15ec = 0;
  local_15f4 = 0;
  uStack_15dc = 0;
  uStack_15e4 = 0;
  uStack_15cc = 0;
  local_15d4 = 0;
  uStack_15bc = 0;
  uStack_15c4 = 0;
  local_15b7 = 0;
  uStack_15b4 = 0;
  local_155c = 1;
  local_155b = 0;
  local_1556 = 0x23;
  local_151c = 0x3f800000;
  uStack_1400 = 0;
  local_1408 = 0;
  uStack_13f0 = 0;
  uStack_13f8 = 0;
  uStack_1410 = 0;
  local_1418 = 0;
  uStack_12f0 = _UNK_00488900;
  local_12f8 = _DAT_004888f8;
  local_13e4 = 0;
  uStack_1300 = _UNK_004888f0;
  local_1308 = _DAT_004888e8;
  uStack_13b0 = 0;
  local_13b8 = 0;
  uStack_13a0 = 0;
  uStack_13a8 = 0;
  uStack_1390 = 0;
  local_1398 = 0;
  uStack_1380 = 0;
  uStack_1388 = 0;
  uStack_1370 = 0;
  local_1378 = 0;
  uStack_1360 = 0;
  uStack_1368 = 0;
  uStack_1350 = 0;
  local_1358 = 0;
  uStack_1340 = 0;
  uStack_1348 = 0;
  uStack_1330 = 0;
  local_1338 = 0;
  uStack_1320 = 0;
  uStack_1328 = 0;
  uStack_1310 = 0;
  local_1318 = 0;
  uStack_12b8 = 0;
  uStack_12c0 = 0;
  uStack_12ba = 0;
  local_12c8 = 0;
  uStack_17bd = 0;
  uStack_17c5 = 0;
  uStack_17c3 = 0;
  local_17b1 = 0;
  local_17a9 = 0;
  uStack_17a8 = 0;
  uStack_1798 = 0;
  uStack_17a0 = 0;
  local_1788 = 0;
  uStack_1790 = 0;
  local_1778 = 0;
  uStack_1780 = 0;
  local_1768 = 0;
  uStack_1770 = 0;
  local_1758 = 0;
  uStack_1760 = 0;
  uStack_1748 = 0;
  uStack_1750 = 0;
  local_1740 = 0;
  local_16f4 = 0;
  local_16ec = 0;
  local_16e4 = 0;
  local_16dc = 0;
  local_16d4 = 0;
  local_16cc = 0;
  local_16c4 = 0;
  local_16bc = 0;
  local_16b4 = 0;
  local_16ac = 0;
  local_16a4 = 0;
  local_169c = 0;
  local_1694 = 0;
  local_168c = 0;
  local_1684 = 0;
  local_167c = 0;
  local_1678 = 0;
  local_1674 = 0;
  local_1668 = 0;
  local_15ac = 0;
  local_15a8 = 0;
  local_15a4 = 0;
  local_15a0 = 0;
  local_159c = 0;
  local_1598 = 0;
  local_1580 = 0;
  uStack_1658 = 0;
  local_1660 = 0;
  uStack_1648 = 0;
  uStack_1650 = 0;
  uStack_1638 = 0;
  local_1640 = 0;
  uStack_1628 = 0;
  local_1627 = 0;
  uStack_1630 = 0;
  uStack_1570 = 0;
  local_1578 = 0;
  local_1568 = 0;
  local_1560 = 0;
  local_1557 = 0;
  uStack_1548 = 0;
  local_1550 = 0;
  uStack_1538 = 0;
  uStack_1540 = 0;
  uStack_1528 = 0;
  uStack_1521 = 0;
  local_1530 = 0;
  local_1514 = 0;
  local_150c = 0;
  local_1508 = 0;
  local_1500 = 0;
  local_14fc = 0;
  local_14f4 = 0;
  local_14f0 = 0;
  local_14e8 = 0;
  local_14e4 = 0;
  local_14dc = 0;
  local_14d8 = 0;
  local_14d0 = 0;
  local_14cc = 0;
  local_14c4 = 0;
  local_14c0 = 0;
  local_14b8 = 0;
  local_14b4 = 0;
  local_14ac = 0;
  local_14a8 = 0;
  local_14a0 = 0;
  local_149c = 0;
  local_1494 = 0;
  local_1490 = 0;
  local_1488 = 0;
  local_1484 = 0;
  local_147c = 0;
  local_1478 = 0;
  local_1474 = 0;
  local_1470 = 0;
  local_146c = 0;
  local_1468 = 0;
  local_1464 = 0;
  local_1460 = 0;
  local_145c = 0;
  local_1458 = 0;
  local_1454 = 0;
  local_1450 = 0;
  local_144c = 0;
  local_1448 = 0;
  local_1444 = 0;
  local_1440 = 0;
  local_143c = 0;
  local_1438 = 0;
  local_1434 = 0;
  local_1430 = 0;
  local_142c = 0;
  local_1428 = 0;
  local_1424 = 0;
  local_1420 = 0;
  local_141c = 0;
  local_13d8 = 0;
  local_13e8 = 0;
  local_13dc = 0;
  local_13c0 = 0;
  local_12b0 = 0;
  local_12ac = 0;
  local_12a8 = 0;
  local_1290 = 0;
  uStack_129c = 0;
  local_12a4 = 0;
  local_1294 = 0;
  local_1288 = 0x101;
  local_1286 = 0;
  local_1284 = 0;
  local_1280 = 0;
  local_1220 = 0;
  local_1218 = 0;
  local_11b8 = 0;
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
  local_11ac = 0;
  local_11b0 = 0;
  local_1860 = PTR_vtable_0099f2a0 + 0x20;
  local_1170 = 0;
  uStack_10d0 = 0;
  uStack_10b0 = 0;
  local_10b8 = 0;
  uStack_10a0 = 0;
  uStack_10a8 = 0;
  uStack_10c0 = 0;
  local_10c8 = 0;
  uStack_1178 = 0;
  local_1180 = 0;
  local_1060 = 0x13f800000;
  uStack_f90 = 0;
  local_f98 = 0;
  uStack_f80 = 0;
  uStack_f88 = 0;
  uStack_fa0 = 0;
  local_fa8 = 0;
  local_1168 = 0x3f800000;
  local_1090 = 0;
  local_1088 = 0;
  uStack_1158 = 0;
  local_1160 = 0;
  uStack_1148 = 0;
  local_1150 = 0;
  uStack_1138 = 0;
  local_1140 = 0;
  uStack_1128 = 0;
  local_1130 = 0;
  uStack_1118 = 0;
  local_1120 = 0;
  uStack_1108 = 0;
  local_1110 = 0;
  uStack_10f8 = 0;
  local_1100 = 0;
  uStack_10e8 = 0;
  local_10f0 = 0;
  uStack_10d8 = 0;
  uStack_10d3 = 0;
  local_10e0 = 0;
  local_1098 = 0;
  local_1058 = 0;
  local_1050 = 0;
  local_1028 = 0x3f800000;
  local_1020 = 0;
  local_1018 = 0;
  local_ff0 = 0;
  local_fe8 = 0;
  local_fe0 = 0;
  local_fb8 = 0;
  local_fb0 = 0;
  local_f70 = 0;
  local_f48 = 0;
  local_f40 = 0;
  local_f18 = 0;
  local_f10 = 0;
  local_ee8 = 0;
  local_ee0 = 0;
  local_eb8 = 0;
  local_eb0 = 0;
  local_e88 = 0;
  local_e80 = 0;
  local_e58 = 0;
  local_e50 = 0;
  local_e28 = 0;
  local_e20 = 0;
  local_df8 = 0;
  local_df0 = 0;
  local_dc8 = 0;
  local_dc0 = 0;
  local_d98 = 0;
  local_d90 = 0;
  local_d30 = 0;
  local_f78 = 0;
  uStack_d60 = 0;
  local_d68 = 0;
  uStack_d50 = 0;
  uStack_d58 = 0;
  uStack_d40 = 0;
  local_d48 = 0;
  local_d38 = 0;
                    /* try { // try from 008bc27c to 008bc28f has its CatchHandler @ 008bc46c */
  facebook::react::RNSVGTextProps::RNSVGTextProps
            ((RNSVGTextProps *)local_d08,(PropsParserContext *)local_18c0,
             (RNSVGTextProps *)&local_1860,(RawProps *)&local_f8);
  FUN_008bcf30(local_d08);
  FUN_008bcf30(&local_1860);
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
                    /* try { // try from 008bc394 to 008bc39f has its CatchHandler @ 008bc470 */
        (*(code *)(&PTR_FUN_0098f088)[*(uint *)((long)pvVar3 + -8)])
                  (&local_1860,(void *)((long)pvVar3 + -0x38));
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
  if (local_1880 != (void *)0x0) {
    pvStack_1878 = local_1880;
    operator_delete(local_1880);
  }
  if (pvStack_1898 != (void *)0x0) {
    local_1890 = pvStack_1898;
    operator_delete(pvStack_1898);
  }
  if (local_18b0 != (void *)0x0) {
    pvStack_18a8 = local_18b0;
    operator_delete(local_18b0);
  }
  *param_1 = this;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008bc474  FUN_008bc474 =====

void FUN_008bc474(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 008bc498  FUN_008bc498 =====

undefined * FUN_008bc498(void)

{
  return PTR_RNSVGTextComponentName_0099f298;
}


// ===== 008bc4a4  FUN_008bc4a4 =====

undefined * FUN_008bc4a4(void)

{
  return PTR_RNSVGTextComponentName_0099f298;
}


// ===== 008bc4b0  FUN_008bc4b0 =====

undefined8 FUN_008bc4b0(void)

{
  return 0x61;
}


// ===== 008bc4b8  FUN_008bc4b8 =====

void FUN_008bc4b8(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

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
  *puVar4 = &PTR_FUN_0099b7a8;
                    /* try { // try from 008bc524 to 008bc533 has its CatchHandler @ 008bc598 */
  facebook::react::RNSVGLayoutableShadowNode::RNSVGLayoutableShadowNode
            (pRVar1,param_3,param_4,uVar3);
  lVar5 = *param_2;
  puVar4[3] = &PTR_FUN_0099b7f8;
                    /* try { // try from 008bc54c to 008bc557 has its CatchHandler @ 008bc588 */
  (**(code **)(lVar5 + 0x60))(param_2,pRVar1);
  *param_1 = pRVar1;
  param_1[1] = puVar4;
  if (*(long *)(lVar2 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008bc5c8  FUN_008bc5c8 =====

void FUN_008bc5c8(undefined8 *param_1,long *param_2,ShadowNode *param_3,ShadowNodeFragment *param_4)

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
  *plVar3 = (long)&PTR_FUN_0099b7a8;
                    /* try { // try from 008bc620 to 008bc62f has its CatchHandler @ 008bc6fc */
  facebook::react::RNSVGLayoutableShadowNode::RNSVGLayoutableShadowNode(pRVar1,param_3,param_4);
  plVar3[3] = (long)&PTR_FUN_0099b7f8;
  local_68 = pRVar1;
  local_60 = plVar3;
                    /* try { // try from 008bc640 to 008bc64f has its CatchHandler @ 008bc714 */
  facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::
  completeClone(pRVar1,param_3,param_4);
  local_78 = pRVar1;
  local_70 = plVar3;
  FUN_00757d00(1,plVar3 + 1);
                    /* try { // try from 008bc660 to 008bc66f has its CatchHandler @ 008bc6ec */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_78);
  plVar3 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar4 = FUN_00757990(0xffffffffffffffff,local_70 + 1), lVar4 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pRVar1 = local_68;
                    /* try { // try from 008bc6ac to 008bc6b7 has its CatchHandler @ 008bc714 */
  (**(code **)(*param_2 + 0x60))(param_2,local_68);
  *param_1 = pRVar1;
  param_1[1] = local_60;
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008bc73c  FUN_008bc73c =====

void FUN_008bc73c(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x008bc74c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 008bc750  FUN_008bc750 =====

void FUN_008bc750(undefined8 *param_1,long param_2,PropsParserContext *param_3,long *param_4,
                 RawProps *param_5)

{
  RNSVGTextProps *this;
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
  RNSVGTextProps *pRVar12;
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
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGTextComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGTextPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed20
         & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGTextComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGTextPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed20
                                   ), iVar6 != 0)) {
                    /* try { // try from 008bcb84 to 008bcb87 has its CatchHandler @ 008bcbb4 */
      FUN_008bd374();
      __cxa_atexit(FUN_008bd55c,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGTextComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGTextPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed18
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGTextComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGTextPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed20
                         );
    }
    lVar11 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGTextComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGTextPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed18
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGTextComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGTextPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed18
    ;
    param_1[1] = lVar11;
    if (lVar11 != 0) {
      FUN_00757d00(1,lVar11 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    pRVar12 = (RNSVGTextProps *)*param_4;
    if (pRVar12 == (RNSVGTextProps *)0x0) {
      if (((*
            PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGTextComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGTextPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed20
           & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGTextComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGTextPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed20
                                     ), iVar6 != 0)) {
                    /* try { // try from 008bcb04 to 008bcb07 has its CatchHandler @ 008bcbcc */
        FUN_008bd374();
        __cxa_atexit(FUN_008bd55c,
                     PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGTextComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGTextPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed18
                     ,&PTR_LOOP_008d5d30);
        __cxa_guard_release(
                           PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGTextComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGTextPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed20
                           );
      }
      pRVar12 = *(RNSVGTextProps **)
                 PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGTextComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGTextPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed18
      ;
    }
    plVar8 = (long *)operator_new(0xb70);
    this = (RNSVGTextProps *)(plVar8 + 3);
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = (long)&PTR_FUN_0099b910;
                    /* try { // try from 008bc830 to 008bc843 has its CatchHandler @ 008bcc40 */
    facebook::react::RNSVGTextProps::RNSVGTextProps(this,param_3,pRVar12,param_5);
                    /* try { // try from 008bc848 to 008bc85b has its CatchHandler @ 008bcc58 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if ((((uVar7 & 1) == 0) ||
        (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar7 & 1) == 0)) ||
       (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
                enablePropsUpdateReconciliationAndroid(), (uVar7 & 1) == 0)) {
LAB_008bc884:
      FUN_00757d00(1,plVar8 + 1);
      if (*param_4 == 0) {
        if (((*
              PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGTextComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGTextPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed20
             & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(
                                       PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGTextComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGTextPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed20
                                       ), iVar6 != 0)) {
                    /* try { // try from 008bcb44 to 008bcb47 has its CatchHandler @ 008bcbb8 */
          FUN_008bd374();
          __cxa_atexit(FUN_008bd55c,
                       PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGTextComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGTextPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed18
                       ,&PTR_LOOP_008d5d30);
          __cxa_guard_release(
                             PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGTextComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGTextPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed20
                             );
        }
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 008bc8ec to 008bc8ff has its CatchHandler @ 008bcbe4 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*(undefined8 *)
                         PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGTextComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGTextPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed18
                   ,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
LAB_008bc938:
          (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
        }
        else if (local_b0 != (dynamic *)0x0) {
          lVar11 = 5;
          pdVar10 = local_b0;
          goto LAB_008bc938;
        }
        if (plVar8 != (long *)0x0) goto LAB_008bc94c;
      }
      else {
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 008bc8a0 to 008bc8b3 has its CatchHandler @ 008bcc0c */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*param_4,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
        }
        else {
          if (local_b0 == (dynamic *)0x0) goto LAB_008bc94c;
          lVar11 = 5;
          pdVar10 = local_b0;
        }
        (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
LAB_008bc94c:
        lVar11 = FUN_00757990(0xffffffffffffffff,plVar8 + 1);
        if (lVar11 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 008bc868 to 008bc873 has its CatchHandler @ 008bcbe0 */
      pcVar9 = (char *)(**(code **)(*(long *)this + 0x10))(this);
      iVar6 = strcmp(PTR_RNSVGTextComponentName_0099f298,pcVar9);
      if (iVar6 != 0) goto LAB_008bc884;
      bVar3 = false;
    }
                    /* try { // try from 008bc978 to 008bc97b has its CatchHandler @ 008bcc58 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar7 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 008bc988 to 008bc9a3 has its CatchHandler @ 008bcc08 */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(plVar8 + 7));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 008bcae4 to 008bcaf3 has its CatchHandler @ 008bcc00 */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_008bcca4;
      }
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (*(int *)(plVar4 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 008bcac4 to 008bcad3 has its CatchHandler @ 008bcc64 */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_008bcca4;
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
                    /* try { // try from 008bca24 to 008bca2f has its CatchHandler @ 008bcc6c */
        folly::dynamic::dynamic(local_d0,(dynamic *)(plVar4 + 8));
        local_a0 = 0;
                    /* try { // try from 008bca34 to 008bca4b has its CatchHandler @ 008bcc70 */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (this,param_3,uVar1,pcVar9,local_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 008bca5c to 008bca67 has its CatchHandler @ 008bcc60 */
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
LAB_008bcca4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008bcca8  FUN_008bcca8 =====

void FUN_008bcca8(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 008bccb0  FUN_008bccb0 =====

void FUN_008bccb0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 008bccb8  FUN_008bccb8 =====

void FUN_008bccb8(undefined8 *param_1,long param_2,long param_3)

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
                    /* try { // try from 008bccfc to 008bcd03 has its CatchHandler @ 008bcf04 */
  plVar6 = (long *)operator_new(0x68);
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&PTR_FUN_00992a08;
                    /* try { // try from 008bcd1c to 008bcd27 has its CatchHandler @ 008bceec */
  local_78 = FUN_008707fc(plVar6 + 3,&local_58,param_2 + 8);
  local_70 = plVar6;
  if ((local_50 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,local_50 + 1), lVar7 == 0)) {
    (**(code **)(*local_50 + 0x10))(local_50);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 008bcd5c to 008bcd63 has its CatchHandler @ 008bcedc */
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
                    /* try { // try from 008bcdb0 to 008bcdc7 has its CatchHandler @ 008bceac */
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
                    /* try { // try from 008bce1c to 008bce27 has its CatchHandler @ 008bce8c */
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


// ===== 008bcf2c  FUN_008bcf2c =====

void FUN_008bcf2c(void)

{
  return;
}


// ===== 008bcf30  FUN_008bcf30 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_008bcf30(long param_1)

{
  byte bVar1;
  void *pvVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  folly::dynamic::folly::dynamic::destroy(param_1 + 0xb28);
  if ((*(byte *)(param_1 + 0xb10) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0xb20));
  }
  if ((*(byte *)(param_1 + 0xaf8) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0xb08));
  }
  folly::dynamic::folly::dynamic::destroy(param_1 + 0xac8);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0xa98);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0xa68);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0xa38);
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
  FUN_0078917c(param_1,PTR_VTT_0099f2a8 + 8);
  return;
}


// ===== 008bd12c  FUN_008bd12c =====

void FUN_008bd12c(long param_1)

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


// ===== 008bd17c  FUN_008bd17c =====

void FUN_008bd17c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099b7a8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008bd18c  FUN_008bd18c =====

void FUN_008bd18c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099b7a8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008bd1bc  FUN_008bd1bc =====

void FUN_008bd1bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x008bd1c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 008bd1c8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008bd1cc  FUN_008bd1cc =====

void FUN_008bd1cc(long *param_1)

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


// ===== 008bd28c  FUN_008bd28c =====

void FUN_008bd28c(long param_1)

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


// ===== 008bd2f4  FUN_008bd2f4 =====

bool FUN_008bd2f4(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 008bd30c  FUN_008bd30c =====

bool FUN_008bd30c(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 008bd324  FUN_008bd324 =====

void FUN_008bd324(long param_1)

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


// ===== 008bd374  FUN_008bd374 =====

void FUN_008bd374(void)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0xb70);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_0099b8c0;
  memset(__s,0,0xb58);
                    /* try { // try from 008bd3b0 to 008bd3c3 has its CatchHandler @ 008bd540 */
  FUN_00788b10(__s,PTR_VTT_0099f2a8 + 0x10);
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
  puVar1 = PTR_vtable_0099f2a0;
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
  *(undefined4 *)(puVar2 + 0x14a) = 0;
  puVar2[0x14b] = 0;
  *(undefined4 *)(puVar2 + 0x150) = 0;
  puVar2[0x151] = 0;
  *(undefined4 *)(puVar2 + 0x156) = 0;
  puVar2[0x157] = 0;
  *(undefined4 *)(puVar2 + 0x15c) = 0;
  puVar2[0x15d] = 0;
  puVar2[0x169] = 0;
  *(undefined4 *)(puVar2 + 0x120) = 0;
  puVar2[0x11f] = 0;
  puVar2[0x11e] = 0;
  puVar2[0x11d] = 0;
  puVar2[0x11c] = 0;
  puVar2[0x11b] = 0;
  puVar2[0x11a] = 0;
  puVar2[0x163] = 0;
  puVar2[0x162] = 0;
  *(undefined4 *)(puVar2 + 0x168) = 0;
  puVar2[0x165] = 0;
  puVar2[0x164] = 0;
  puVar1 = 
  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_22RNSVGTextComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_14RNSVGTextPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed18
  ;
  puVar2[0x167] = 0;
  puVar2[0x166] = 0;
  *(undefined8 **)puVar1 = __s;
  *(undefined8 **)(puVar1 + 8) = puVar2;
  return;
}


// ===== 008bd55c  FUN_008bd55c =====

void FUN_008bd55c(long param_1)

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


// ===== 008bd5ac  FUN_008bd5ac =====

void FUN_008bd5ac(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099b8c0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008bd5bc  FUN_008bd5bc =====

void FUN_008bd5bc(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099b8c0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008bd5ec  FUN_008bd5ec =====

void FUN_008bd5ec(long param_1)

{
  FUN_008bcf30(param_1 + 0x18);
  return;
}


// ===== 008bd5f4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008bd5f8  FUN_008bd5f8 =====

void FUN_008bd5f8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099b910;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008bd608  FUN_008bd608 =====

void FUN_008bd608(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099b910;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008bd638  FUN_008bd638 =====

void FUN_008bd638(long param_1)

{
  FUN_008bcf30(param_1 + 0x18);
  return;
}


// ===== 008bd640  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008bd644  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_23RNSVGConcreteShadowNodeIXadsoKcL_ZNS0_26RNSVGTextPathComponentNameEEEENS0_18RNSVGTextPathPropsEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENS8_14default_deleteISB_EEEERKNS0_29ComponentDescriptorParametersE =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_23RNSVGConcreteShadowNodeIXadsoKcL_ZNS0_26RNSVGTextPathComponentNameEEEENS0_18RNSVGTextPathPropsEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENS8_14default_deleteISB_EEEERKNS0_29ComponentDescriptorParametersE
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
  undefined4 local_1a10 [2];
  undefined8 *local_1a08;
  void *local_1a00;
  void *pvStack_19f8;
  undefined8 local_19f0;
  void *pvStack_19e8;
  void *local_19e0;
  undefined8 uStack_19d8;
  void *local_19d0;
  void *pvStack_19c8;
  undefined8 uStack_19c0;
  undefined8 uStack_19b8;
  undefined *local_19b0;
  undefined8 uStack_19a8;
  undefined8 local_19a0;
  undefined8 uStack_1998;
  undefined4 local_1990 [2];
  undefined8 local_1988;
  undefined8 uStack_1980;
  undefined8 local_1978;
  undefined8 uStack_1970;
  undefined4 local_1968;
  undefined4 local_1960;
  undefined1 local_195c;
  undefined8 local_195b;
  undefined8 local_1953;
  undefined8 uStack_194b;
  undefined8 local_1943;
  undefined8 uStack_193b;
  undefined8 local_1933;
  undefined8 uStack_192b;
  undefined8 local_1923;
  undefined6 uStack_191b;
  undefined2 uStack_1915;
  undefined6 uStack_1913;
  undefined8 uStack_190d;
  undefined4 local_1905;
  undefined8 local_1901;
  undefined1 local_18f9;
  undefined1 uStack_18f8;
  undefined7 uStack_18f7;
  undefined8 uStack_18f0;
  undefined8 uStack_18e8;
  undefined8 uStack_18e0;
  undefined8 local_18d8;
  undefined8 uStack_18d0;
  undefined8 local_18c8;
  undefined8 uStack_18c0;
  undefined8 local_18b8;
  undefined8 uStack_18b0;
  undefined8 local_18a8;
  undefined8 uStack_18a0;
  undefined8 uStack_1898;
  undefined8 local_1890;
  undefined8 local_1888;
  undefined8 uStack_1880;
  undefined8 local_1878;
  undefined4 uStack_1870;
  undefined4 uStack_186c;
  undefined4 uStack_1868;
  undefined4 uStack_1864;
  undefined4 uStack_1860;
  undefined4 uStack_185c;
  undefined8 local_1858;
  undefined8 uStack_1850;
  undefined4 local_1848;
  undefined1 local_1844;
  undefined4 local_1840;
  undefined1 local_183c;
  undefined4 local_1838;
  undefined1 local_1834;
  undefined4 local_1830;
  undefined1 local_182c;
  undefined4 local_1828;
  undefined1 local_1824;
  undefined4 local_1820;
  undefined1 local_181c;
  undefined4 local_1818;
  undefined1 local_1814;
  undefined4 local_1810;
  undefined1 local_180c;
  undefined4 local_1808;
  undefined1 local_1804;
  undefined4 local_1800;
  undefined1 local_17fc;
  undefined4 local_17f8;
  undefined1 local_17f4;
  undefined4 local_17f0;
  undefined1 local_17ec;
  undefined4 local_17e8;
  undefined1 local_17e4;
  undefined4 local_17e0;
  undefined1 local_17dc;
  undefined4 local_17d8;
  undefined1 local_17d4;
  undefined4 local_17d0;
  undefined1 local_17cc;
  undefined1 local_17c8;
  undefined1 local_17c4;
  undefined1 local_17b8;
  undefined8 local_17b0;
  undefined8 uStack_17a8;
  undefined8 uStack_17a0;
  undefined8 uStack_1798;
  undefined8 local_1790;
  undefined8 uStack_1788;
  undefined8 uStack_1780;
  undefined1 uStack_1778;
  undefined7 local_1777;
  undefined1 uStack_1770;
  undefined8 uStack_176f;
  undefined8 local_1764;
  undefined8 uStack_175c;
  undefined8 uStack_1754;
  undefined8 uStack_174c;
  undefined8 local_1744;
  undefined8 uStack_173c;
  undefined8 uStack_1734;
  undefined8 uStack_172c;
  undefined8 local_1724;
  undefined8 uStack_171c;
  undefined8 uStack_1714;
  undefined5 uStack_170c;
  undefined3 local_1707;
  undefined5 uStack_1704;
  undefined1 local_16fc;
  undefined1 local_16f8;
  undefined1 local_16f4;
  undefined1 local_16f0;
  undefined1 local_16ec;
  undefined1 local_16e8;
  undefined1 local_16d0;
  undefined8 local_16c8;
  undefined8 uStack_16c0;
  undefined8 local_16b8;
  undefined4 local_16b0;
  undefined1 local_16ac;
  undefined4 local_16ab;
  undefined1 local_16a7;
  undefined1 local_16a6;
  undefined8 local_16a0;
  undefined8 uStack_1698;
  undefined8 uStack_1690;
  undefined8 uStack_1688;
  undefined8 local_1680;
  undefined7 uStack_1678;
  undefined4 uStack_1671;
  undefined8 local_166c;
  undefined1 local_1664;
  undefined1 local_165c;
  undefined1 local_1658;
  undefined1 local_1650;
  undefined1 local_164c;
  undefined1 local_1644;
  undefined1 local_1640;
  undefined1 local_1638;
  undefined1 local_1634;
  undefined1 local_162c;
  undefined1 local_1628;
  undefined1 local_1620;
  undefined1 local_161c;
  undefined1 local_1614;
  undefined1 local_1610;
  undefined1 local_1608;
  undefined1 local_1604;
  undefined1 local_15fc;
  undefined1 local_15f8;
  undefined1 local_15f0;
  undefined1 local_15ec;
  undefined1 local_15e4;
  undefined1 local_15e0;
  undefined1 local_15d8;
  undefined1 local_15d4;
  undefined1 local_15cc;
  undefined1 local_15c8;
  undefined1 local_15c4;
  undefined1 local_15c0;
  undefined1 local_15bc;
  undefined1 local_15b8;
  undefined1 local_15b4;
  undefined1 local_15b0;
  undefined1 local_15ac;
  undefined1 local_15a8;
  undefined1 local_15a4;
  undefined1 local_15a0;
  undefined1 local_159c;
  undefined1 local_1598;
  undefined1 local_1594;
  undefined1 local_1590;
  undefined1 local_158c;
  undefined1 local_1588;
  undefined1 local_1584;
  undefined1 local_1580;
  undefined1 local_157c;
  undefined1 local_1578;
  undefined1 local_1574;
  undefined1 local_1570;
  undefined1 local_156c;
  undefined8 local_1568;
  undefined8 uStack_1560;
  undefined8 local_1558;
  undefined8 uStack_1550;
  undefined8 uStack_1548;
  undefined8 uStack_1540;
  undefined2 local_1538;
  undefined8 local_1534;
  undefined1 local_152c;
  undefined8 local_1528;
  undefined8 local_1520;
  undefined8 uStack_1518;
  undefined1 local_1510;
  undefined8 local_1508;
  undefined8 uStack_1500;
  undefined8 uStack_14f8;
  undefined8 uStack_14f0;
  undefined8 local_14e8;
  undefined8 uStack_14e0;
  undefined8 uStack_14d8;
  undefined8 uStack_14d0;
  undefined8 local_14c8;
  undefined8 uStack_14c0;
  undefined8 uStack_14b8;
  undefined8 uStack_14b0;
  undefined8 local_14a8;
  undefined8 uStack_14a0;
  undefined8 uStack_1498;
  undefined8 uStack_1490;
  undefined8 local_1488;
  undefined8 uStack_1480;
  undefined8 uStack_1478;
  undefined8 uStack_1470;
  undefined8 local_1468;
  undefined8 uStack_1460;
  undefined8 local_1458;
  undefined8 uStack_1450;
  undefined8 local_1448;
  undefined8 uStack_1440;
  undefined8 local_1438;
  undefined8 uStack_1430;
  undefined8 local_1428;
  undefined8 uStack_1420;
  undefined8 local_1418;
  undefined6 uStack_1410;
  undefined2 uStack_140a;
  undefined6 uStack_1408;
  undefined1 local_1400;
  undefined1 local_13fc;
  undefined1 local_13f8;
  undefined8 local_13f4;
  undefined8 uStack_13ec;
  undefined1 local_13e4;
  undefined8 local_13e0;
  undefined2 local_13d8;
  undefined1 local_13d6;
  undefined4 local_13d4;
  undefined1 local_13d0;
  undefined1 local_1370;
  undefined1 local_1368;
  undefined1 local_1308;
  undefined4 local_1300;
  undefined2 local_12fc;
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
  undefined8 local_12d0;
  undefined8 uStack_12c8;
  undefined8 local_12c0;
  undefined4 local_12b8;
  undefined8 local_12b0;
  undefined8 uStack_12a8;
  undefined8 local_12a0;
  undefined8 uStack_1298;
  undefined8 local_1290;
  undefined8 uStack_1288;
  undefined8 local_1280;
  undefined8 uStack_1278;
  undefined8 local_1270;
  undefined8 uStack_1268;
  undefined8 local_1260;
  undefined8 uStack_1258;
  undefined8 local_1250;
  undefined8 uStack_1248;
  undefined8 local_1240;
  undefined8 uStack_1238;
  undefined8 local_1230;
  undefined5 uStack_1228;
  undefined3 uStack_1223;
  undefined5 uStack_1220;
  undefined8 local_1218;
  undefined8 uStack_1210;
  undefined8 local_1208;
  undefined8 uStack_1200;
  undefined8 uStack_11f8;
  undefined8 uStack_11f0;
  undefined4 local_11e8;
  undefined4 local_11e0;
  undefined8 local_11d8;
  undefined8 local_11b0;
  undefined4 local_11a8;
  undefined8 local_11a0;
  undefined4 local_1178;
  undefined4 local_1170;
  undefined8 local_1168;
  undefined8 local_1140;
  undefined4 local_1138;
  undefined8 local_1130;
  undefined8 local_1108;
  undefined4 local_1100;
  undefined8 local_10f8;
  undefined8 uStack_10f0;
  undefined8 local_10e8;
  undefined8 uStack_10e0;
  undefined8 uStack_10d8;
  undefined8 uStack_10d0;
  undefined4 local_10c8;
  undefined8 local_10c0;
  undefined4 local_1098;
  undefined8 local_1090;
  undefined4 local_1068;
  undefined8 local_1060;
  undefined4 local_1038;
  undefined8 local_1030;
  undefined4 local_1008;
  undefined8 local_1000;
  undefined4 local_fd8;
  undefined8 local_fd0;
  undefined4 local_fa8;
  undefined8 local_fa0;
  undefined4 local_f78;
  undefined8 local_f70;
  undefined4 local_f48;
  undefined8 local_f40;
  undefined4 local_f18;
  undefined8 local_f10;
  undefined4 local_ee8;
  undefined8 local_ee0;
  undefined8 local_eb8;
  undefined8 uStack_eb0;
  undefined8 uStack_ea8;
  undefined8 uStack_ea0;
  undefined8 local_e98;
  undefined8 uStack_e90;
  undefined4 local_e88;
  undefined8 local_e80;
  undefined8 local_e58;
  undefined8 uStack_e50;
  undefined8 uStack_e48;
  undefined8 uStack_e40;
  undefined8 local_e38;
  undefined8 uStack_e30;
  undefined8 uStack_e28;
  undefined8 uStack_e20;
  undefined8 local_e18;
  undefined8 uStack_e10;
  undefined8 uStack_e08;
  undefined8 uStack_e00;
  undefined8 local_df8;
  undefined4 uStack_df0;
  undefined4 uStack_dec;
  undefined4 uStack_de8;
  undefined8 uStack_de4;
  undefined8 local_dd8;
  undefined4 local_db0 [2];
  undefined8 local_da8;
  undefined8 uStack_da0;
  undefined8 local_d98;
  undefined8 local_d90;
  undefined8 uStack_d88;
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
  pvStack_19e8 = (void *)0x0;
  local_19f0 = 0;
  uStack_19d8 = 0;
  local_19e0 = (void *)0x0;
  pvStack_19c8 = (void *)0x0;
  local_19d0 = (void *)0x0;
  uStack_19b8 = 0;
  uStack_19c0 = 0;
  pvStack_19f8 = (void *)0x0;
  local_1a00 = (void *)0x0;
                    /* try { // try from 008bd698 to 008bd6a3 has its CatchHandler @ 008bddf0 */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_1a00);
  local_f8 = 0;
  *(undefined ***)this = &PTR_FUN_0099b960;
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
                    /* try { // try from 008bd710 to 008bd723 has its CatchHandler @ 008bde20 */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1b0);
  local_100 = CONCAT44(local_100._4_4_,0x3f800000);
  local_1a10[0] = 0xffffffff;
  uStack_108 = 0;
  local_110 = (void *)0x0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_1a08 = &local_1b0;
  facebook::react::RawProps::facebook::react::RawProps::parse(&local_f8,this + 0x38);
  memset(local_1990,0,0xbe0);
  local_db0[0] = 5;
  local_d98 = 0;
  local_19b0 = *(undefined **)(PTR_VTT_0099f2c0 + 0x20);
  local_1990[0] = 5;
  uStack_1998 = 0;
  local_19a0 = 0;
  uStack_19a8 = 0;
  local_d90 = 0;
  uStack_d88 = 0x3f800000;
  uStack_da0 = 0;
  local_da8 = 0;
  uStack_1980 = 0;
  local_1988 = 0;
  uStack_1970 = 0;
  local_1978 = 0;
  local_1968 = 0x3f800000;
  folly::dynamic::folly::dynamic::destroy(local_db0);
  local_1960 = 0x10410710;
  local_195c = 0;
  uStack_1870 = 0;
  local_1878 = 0;
  uStack_185c = 0;
  uStack_1880 = 0;
  local_1888 = 0;
  uStack_18f7 = 0;
  uStack_194b = 0;
  local_1953 = 0;
  local_195b = _s__00375408;
  uStack_193b = 0;
  local_1943 = 0;
  uStack_1518 = _UNK_00371598;
  local_1520 = _DAT_00371590;
  uStack_192b = 0;
  local_1933 = 0;
  uStack_191b = 0;
  local_1923 = 0;
  uStack_1420 = _UNK_00488920;
  local_1428 = _DAT_00488918;
  uStack_1430 = _UNK_00488910;
  local_1438 = _DAT_00488908;
  local_1905 = 0x40004;
  uStack_1864 = 0;
  uStack_1860 = 0;
  uStack_186c = 0;
  uStack_1868 = 0;
  uStack_1850 = 0;
  local_1858 = 0;
  local_1848 = 0x7fc00000;
  local_1840 = 0x7fc00000;
  local_1838 = 0x7fc00000;
  local_1830 = 0x7fc00000;
  local_1828 = 0x7fc00000;
  local_1820 = 0x7fc00000;
  local_1818 = 0x7fc00000;
  local_1810 = 0x7fc00000;
  local_1808 = 0x7fc00000;
  local_1800 = 0x7fc00000;
  local_17f8 = 0x7fc00000;
  local_17f0 = 0x7fc00000;
  local_17e8 = 0x7fc00000;
  local_17e0 = 0x7fc00000;
  local_17d8 = 0x7fc00000;
  local_17d0 = 0x7fc00000;
  uStack_176f = 0;
  uStack_1770 = 0;
  uStack_175c = 0;
  local_1764 = 0;
  uStack_174c = 0;
  uStack_1754 = 0;
  uStack_173c = 0;
  local_1744 = 0;
  uStack_172c = 0;
  uStack_1734 = 0;
  uStack_171c = 0;
  local_1724 = 0;
  uStack_170c = 0;
  uStack_1714 = 0;
  local_1707 = 0;
  uStack_1704 = 0;
  local_16ac = 1;
  local_16ab = 0;
  local_16a6 = 0x23;
  local_166c = 0x3f800000;
  uStack_1550 = 0;
  local_1558 = 0;
  uStack_1540 = 0;
  uStack_1548 = 0;
  uStack_1560 = 0;
  local_1568 = 0;
  uStack_1440 = _UNK_00488900;
  local_1448 = _DAT_004888f8;
  local_1534 = 0;
  uStack_1450 = _UNK_004888f0;
  local_1458 = _DAT_004888e8;
  uStack_1500 = 0;
  local_1508 = 0;
  uStack_14f0 = 0;
  uStack_14f8 = 0;
  uStack_14e0 = 0;
  local_14e8 = 0;
  uStack_14d0 = 0;
  uStack_14d8 = 0;
  uStack_14c0 = 0;
  local_14c8 = 0;
  uStack_14b0 = 0;
  uStack_14b8 = 0;
  uStack_14a0 = 0;
  local_14a8 = 0;
  uStack_1490 = 0;
  uStack_1498 = 0;
  uStack_1480 = 0;
  local_1488 = 0;
  uStack_1470 = 0;
  uStack_1478 = 0;
  uStack_1460 = 0;
  local_1468 = 0;
  uStack_1408 = 0;
  uStack_1410 = 0;
  uStack_140a = 0;
  local_1418 = 0;
  uStack_190d = 0;
  uStack_1915 = 0;
  uStack_1913 = 0;
  local_1901 = 0;
  local_18f9 = 0;
  uStack_18f8 = 0;
  uStack_18e8 = 0;
  uStack_18f0 = 0;
  local_18d8 = 0;
  uStack_18e0 = 0;
  local_18c8 = 0;
  uStack_18d0 = 0;
  local_18b8 = 0;
  uStack_18c0 = 0;
  local_18a8 = 0;
  uStack_18b0 = 0;
  uStack_1898 = 0;
  uStack_18a0 = 0;
  local_1890 = 0;
  local_1844 = 0;
  local_183c = 0;
  local_1834 = 0;
  local_182c = 0;
  local_1824 = 0;
  local_181c = 0;
  local_1814 = 0;
  local_180c = 0;
  local_1804 = 0;
  local_17fc = 0;
  local_17f4 = 0;
  local_17ec = 0;
  local_17e4 = 0;
  local_17dc = 0;
  local_17d4 = 0;
  local_17cc = 0;
  local_17c8 = 0;
  local_17c4 = 0;
  local_17b8 = 0;
  local_16fc = 0;
  local_16f8 = 0;
  local_16f4 = 0;
  local_16f0 = 0;
  local_16ec = 0;
  local_16e8 = 0;
  local_16d0 = 0;
  uStack_17a8 = 0;
  local_17b0 = 0;
  uStack_1798 = 0;
  uStack_17a0 = 0;
  uStack_1788 = 0;
  local_1790 = 0;
  uStack_1778 = 0;
  local_1777 = 0;
  uStack_1780 = 0;
  uStack_16c0 = 0;
  local_16c8 = 0;
  local_16b8 = 0;
  local_16b0 = 0;
  local_16a7 = 0;
  uStack_1698 = 0;
  local_16a0 = 0;
  uStack_1688 = 0;
  uStack_1690 = 0;
  uStack_1678 = 0;
  uStack_1671 = 0;
  local_1680 = 0;
  local_1664 = 0;
  local_165c = 0;
  local_1658 = 0;
  local_1650 = 0;
  local_164c = 0;
  local_1644 = 0;
  local_1640 = 0;
  local_1638 = 0;
  local_1634 = 0;
  local_162c = 0;
  local_1628 = 0;
  local_1620 = 0;
  local_161c = 0;
  local_1614 = 0;
  local_1610 = 0;
  local_1608 = 0;
  local_1604 = 0;
  local_15fc = 0;
  local_15f8 = 0;
  local_15f0 = 0;
  local_15ec = 0;
  local_15e4 = 0;
  local_15e0 = 0;
  local_15d8 = 0;
  local_15d4 = 0;
  local_15cc = 0;
  local_15c8 = 0;
  local_15c4 = 0;
  local_15c0 = 0;
  local_15bc = 0;
  local_15b8 = 0;
  local_15b4 = 0;
  local_15b0 = 0;
  local_15ac = 0;
  local_15a8 = 0;
  local_15a4 = 0;
  local_15a0 = 0;
  local_159c = 0;
  local_1598 = 0;
  local_1594 = 0;
  local_1590 = 0;
  local_158c = 0;
  local_1588 = 0;
  local_1584 = 0;
  local_1580 = 0;
  local_157c = 0;
  local_1578 = 0;
  local_1574 = 0;
  local_1570 = 0;
  local_156c = 0;
  local_1528 = 0;
  local_1538 = 0;
  local_152c = 0;
  local_1510 = 0;
  local_1400 = 0;
  local_13fc = 0;
  local_13f8 = 0;
  local_13e0 = 0;
  uStack_13ec = 0;
  local_13f4 = 0;
  local_13e4 = 0;
  local_13d8 = 0x101;
  local_13d6 = 0;
  local_13d4 = 0;
  local_13d0 = 0;
  local_1370 = 0;
  local_1368 = 0;
  local_1308 = 0;
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
  local_12fc = 0;
  local_1300 = 0;
  local_19b0 = PTR_vtable_0099f2b8 + 0x20;
  local_12c0 = 0;
  uStack_1220 = 0;
  uStack_1200 = 0;
  local_1208 = 0;
  uStack_11f0 = 0;
  uStack_11f8 = 0;
  uStack_1210 = 0;
  local_1218 = 0;
  uStack_12c8 = 0;
  local_12d0 = 0;
  local_11b0 = 0x13f800000;
  uStack_10e0 = 0;
  local_10e8 = 0;
  uStack_10d0 = 0;
  uStack_10d8 = 0;
  uStack_10f0 = 0;
  local_10f8 = 0;
  uStack_eb0 = 0;
  local_eb8 = 0;
  uStack_ea0 = 0;
  uStack_ea8 = 0;
  uStack_e90 = 0;
  local_e98 = 0;
  local_12b8 = 0x3f800000;
  local_11e0 = 0;
  local_11d8 = 0;
  uStack_12a8 = 0;
  local_12b0 = 0;
  uStack_1298 = 0;
  local_12a0 = 0;
  uStack_1288 = 0;
  local_1290 = 0;
  uStack_1278 = 0;
  local_1280 = 0;
  uStack_1268 = 0;
  local_1270 = 0;
  uStack_1258 = 0;
  local_1260 = 0;
  uStack_1248 = 0;
  local_1250 = 0;
  uStack_1238 = 0;
  local_1240 = 0;
  uStack_1228 = 0;
  uStack_1223 = 0;
  local_1230 = 0;
  local_11e8 = 0;
  local_11a8 = 0;
  local_11a0 = 0;
  local_1178 = 0x3f800000;
  local_1170 = 0;
  local_1168 = 0;
  local_1140 = 0;
  local_1138 = 0;
  local_1130 = 0;
  local_1108 = 0;
  local_1100 = 0;
  local_10c0 = 0;
  local_1098 = 0;
  local_1090 = 0;
  local_1068 = 0;
  local_1060 = 0;
  local_1038 = 0;
  local_1030 = 0;
  local_1008 = 0;
  local_1000 = 0;
  local_fd8 = 0;
  local_fd0 = 0;
  local_fa8 = 0;
  local_fa0 = 0;
  local_f78 = 0;
  local_f70 = 0;
  local_f48 = 0;
  local_f40 = 0;
  local_f18 = 0;
  local_f10 = 0;
  local_ee8 = 0;
  local_ee0 = 0;
  local_e80 = 0;
  local_dd8 = 0;
  local_10c8 = 0;
  local_e88 = 0;
  uStack_e50 = 0;
  local_e58 = 0;
  uStack_e40 = 0;
  uStack_e48 = 0;
  uStack_e30 = 0;
  local_e38 = 0;
  uStack_e20 = 0;
  uStack_e28 = 0;
  uStack_e10 = 0;
  local_e18 = 0;
  uStack_e00 = 0;
  uStack_e08 = 0;
  uStack_df0 = 0;
  local_df8 = 0;
  uStack_de4 = 0;
  uStack_dec = 0;
  uStack_de8 = 0;
                    /* try { // try from 008bdc34 to 008bdc47 has its CatchHandler @ 008bde20 */
  facebook::react::RNSVGTextPathProps::RNSVGTextPathProps
            ((RNSVGTextPathProps *)local_db0,(PropsParserContext *)local_1a10,
             (RNSVGTextPathProps *)&local_19b0,(RawProps *)&local_f8);
  FUN_008be8e4(local_db0);
  FUN_008be8e4(&local_19b0);
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
                    /* try { // try from 008bdd4c to 008bdd57 has its CatchHandler @ 008bde24 */
        (*(code *)(&PTR_FUN_0098f088)[*(uint *)((long)pvVar3 + -8)])
                  (&local_19b0,(void *)((long)pvVar3 + -0x38));
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
  if (local_19d0 != (void *)0x0) {
    pvStack_19c8 = local_19d0;
    operator_delete(local_19d0);
  }
  if (pvStack_19e8 != (void *)0x0) {
    local_19e0 = pvStack_19e8;
    operator_delete(pvStack_19e8);
  }
  if (local_1a00 != (void *)0x0) {
    pvStack_19f8 = local_1a00;
    operator_delete(local_1a00);
  }
  *param_1 = this;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008bde28  FUN_008bde28 =====

void FUN_008bde28(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 008bde4c  FUN_008bde4c =====

undefined * FUN_008bde4c(void)

{
  return PTR_RNSVGTextPathComponentName_0099f2b0;
}


// ===== 008bde58  FUN_008bde58 =====

undefined * FUN_008bde58(void)

{
  return PTR_RNSVGTextPathComponentName_0099f2b0;
}


// ===== 008bde64  FUN_008bde64 =====

undefined8 FUN_008bde64(void)

{
  return 0x61;
}


// ===== 008bde6c  FUN_008bde6c =====

void FUN_008bde6c(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

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
  *puVar4 = &PTR_FUN_0099b9f0;
                    /* try { // try from 008bded8 to 008bdee7 has its CatchHandler @ 008bdf4c */
  facebook::react::RNSVGLayoutableShadowNode::RNSVGLayoutableShadowNode
            (pRVar1,param_3,param_4,uVar3);
  lVar5 = *param_2;
  puVar4[3] = &PTR_FUN_0099ba40;
                    /* try { // try from 008bdf00 to 008bdf0b has its CatchHandler @ 008bdf3c */
  (**(code **)(lVar5 + 0x60))(param_2,pRVar1);
  *param_1 = pRVar1;
  param_1[1] = puVar4;
  if (*(long *)(lVar2 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008bdf7c  FUN_008bdf7c =====

void FUN_008bdf7c(undefined8 *param_1,long *param_2,ShadowNode *param_3,ShadowNodeFragment *param_4)

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
  *plVar3 = (long)&PTR_FUN_0099b9f0;
                    /* try { // try from 008bdfd4 to 008bdfe3 has its CatchHandler @ 008be0b0 */
  facebook::react::RNSVGLayoutableShadowNode::RNSVGLayoutableShadowNode(pRVar1,param_3,param_4);
  plVar3[3] = (long)&PTR_FUN_0099ba40;
  local_68 = pRVar1;
  local_60 = plVar3;
                    /* try { // try from 008bdff4 to 008be003 has its CatchHandler @ 008be0c8 */
  facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::
  completeClone(pRVar1,param_3,param_4);
  local_78 = pRVar1;
  local_70 = plVar3;
  FUN_00757d00(1,plVar3 + 1);
                    /* try { // try from 008be014 to 008be023 has its CatchHandler @ 008be0a0 */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_78);
  plVar3 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar4 = FUN_00757990(0xffffffffffffffff,local_70 + 1), lVar4 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pRVar1 = local_68;
                    /* try { // try from 008be060 to 008be06b has its CatchHandler @ 008be0c8 */
  (**(code **)(*param_2 + 0x60))(param_2,local_68);
  *param_1 = pRVar1;
  param_1[1] = local_60;
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008be0f0  FUN_008be0f0 =====

void FUN_008be0f0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x008be100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 008be104  FUN_008be104 =====

void FUN_008be104(undefined8 *param_1,long param_2,PropsParserContext *param_3,long *param_4,
                 RawProps *param_5)

{
  RNSVGTextPathProps *this;
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
  RNSVGTextPathProps *pRVar12;
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
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_26RNSVGTextPathComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_18RNSVGTextPathPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed30
         & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_26RNSVGTextPathComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_18RNSVGTextPathPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed30
                                   ), iVar6 != 0)) {
                    /* try { // try from 008be538 to 008be53b has its CatchHandler @ 008be568 */
      FUN_008beda4();
      __cxa_atexit(FUN_008befb4,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_26RNSVGTextPathComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_18RNSVGTextPathPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed28
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_26RNSVGTextPathComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_18RNSVGTextPathPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed30
                         );
    }
    lVar11 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_26RNSVGTextPathComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_18RNSVGTextPathPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed28
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_26RNSVGTextPathComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_18RNSVGTextPathPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed28
    ;
    param_1[1] = lVar11;
    if (lVar11 != 0) {
      FUN_00757d00(1,lVar11 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    pRVar12 = (RNSVGTextPathProps *)*param_4;
    if (pRVar12 == (RNSVGTextPathProps *)0x0) {
      if (((*
            PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_26RNSVGTextPathComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_18RNSVGTextPathPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed30
           & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_26RNSVGTextPathComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_18RNSVGTextPathPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed30
                                     ), iVar6 != 0)) {
                    /* try { // try from 008be4b8 to 008be4bb has its CatchHandler @ 008be580 */
        FUN_008beda4();
        __cxa_atexit(FUN_008befb4,
                     PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_26RNSVGTextPathComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_18RNSVGTextPathPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed28
                     ,&PTR_LOOP_008d5d30);
        __cxa_guard_release(
                           PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_26RNSVGTextPathComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_18RNSVGTextPathPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed30
                           );
      }
      pRVar12 = *(RNSVGTextPathProps **)
                 PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_26RNSVGTextPathComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_18RNSVGTextPathPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed28
      ;
    }
    plVar8 = (long *)operator_new(0xc18);
    this = (RNSVGTextPathProps *)(plVar8 + 3);
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = (long)&PTR_FUN_0099bb58;
                    /* try { // try from 008be1e4 to 008be1f7 has its CatchHandler @ 008be5f4 */
    facebook::react::RNSVGTextPathProps::RNSVGTextPathProps(this,param_3,pRVar12,param_5);
                    /* try { // try from 008be1fc to 008be20f has its CatchHandler @ 008be60c */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if ((((uVar7 & 1) == 0) ||
        (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar7 & 1) == 0)) ||
       (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
                enablePropsUpdateReconciliationAndroid(), (uVar7 & 1) == 0)) {
LAB_008be238:
      FUN_00757d00(1,plVar8 + 1);
      if (*param_4 == 0) {
        if (((*
              PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_26RNSVGTextPathComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_18RNSVGTextPathPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed30
             & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(
                                       PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_26RNSVGTextPathComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_18RNSVGTextPathPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed30
                                       ), iVar6 != 0)) {
                    /* try { // try from 008be4f8 to 008be4fb has its CatchHandler @ 008be56c */
          FUN_008beda4();
          __cxa_atexit(FUN_008befb4,
                       PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_26RNSVGTextPathComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_18RNSVGTextPathPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed28
                       ,&PTR_LOOP_008d5d30);
          __cxa_guard_release(
                             PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_26RNSVGTextPathComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_18RNSVGTextPathPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed30
                             );
        }
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 008be2a0 to 008be2b3 has its CatchHandler @ 008be598 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*(undefined8 *)
                         PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_26RNSVGTextPathComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_18RNSVGTextPathPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed28
                   ,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
LAB_008be2ec:
          (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
        }
        else if (local_b0 != (dynamic *)0x0) {
          lVar11 = 5;
          pdVar10 = local_b0;
          goto LAB_008be2ec;
        }
        if (plVar8 != (long *)0x0) goto LAB_008be300;
      }
      else {
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 008be254 to 008be267 has its CatchHandler @ 008be5c0 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*param_4,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
        }
        else {
          if (local_b0 == (dynamic *)0x0) goto LAB_008be300;
          lVar11 = 5;
          pdVar10 = local_b0;
        }
        (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
LAB_008be300:
        lVar11 = FUN_00757990(0xffffffffffffffff,plVar8 + 1);
        if (lVar11 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 008be21c to 008be227 has its CatchHandler @ 008be594 */
      pcVar9 = (char *)(**(code **)(*(long *)this + 0x10))(this);
      iVar6 = strcmp(PTR_RNSVGTextPathComponentName_0099f2b0,pcVar9);
      if (iVar6 != 0) goto LAB_008be238;
      bVar3 = false;
    }
                    /* try { // try from 008be32c to 008be32f has its CatchHandler @ 008be60c */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar7 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 008be33c to 008be357 has its CatchHandler @ 008be5bc */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(plVar8 + 7));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 008be498 to 008be4a7 has its CatchHandler @ 008be5b4 */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_008be658;
      }
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (*(int *)(plVar4 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 008be478 to 008be487 has its CatchHandler @ 008be618 */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_008be658;
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
                    /* try { // try from 008be3d8 to 008be3e3 has its CatchHandler @ 008be620 */
        folly::dynamic::dynamic(local_d0,(dynamic *)(plVar4 + 8));
        local_a0 = 0;
                    /* try { // try from 008be3e8 to 008be3ff has its CatchHandler @ 008be624 */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (this,param_3,uVar1,pcVar9,local_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 008be410 to 008be41b has its CatchHandler @ 008be614 */
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
LAB_008be658:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008be65c  FUN_008be65c =====

void FUN_008be65c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 008be664  FUN_008be664 =====

void FUN_008be664(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 008be66c  FUN_008be66c =====

void FUN_008be66c(undefined8 *param_1,long param_2,long param_3)

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
                    /* try { // try from 008be6b0 to 008be6b7 has its CatchHandler @ 008be8b8 */
  plVar6 = (long *)operator_new(0x68);
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&PTR_FUN_00992a08;
                    /* try { // try from 008be6d0 to 008be6db has its CatchHandler @ 008be8a0 */
  local_78 = FUN_008707fc(plVar6 + 3,&local_58,param_2 + 8);
  local_70 = plVar6;
  if ((local_50 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,local_50 + 1), lVar7 == 0)) {
    (**(code **)(*local_50 + 0x10))(local_50);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 008be710 to 008be717 has its CatchHandler @ 008be890 */
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
                    /* try { // try from 008be764 to 008be77b has its CatchHandler @ 008be860 */
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
                    /* try { // try from 008be7d0 to 008be7db has its CatchHandler @ 008be840 */
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


// ===== 008be8e0  FUN_008be8e0 =====

void FUN_008be8e0(void)

{
  return;
}


// ===== 008be8e4  FUN_008be8e4 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_008be8e4(long param_1)

{
  byte bVar1;
  void *pvVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  folly::dynamic::folly::dynamic::destroy(param_1 + 0xbd0);
  if ((*(byte *)(param_1 + 3000) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0xba0);
  }
  else {
    operator_delete(*(void **)(param_1 + 0xbc8));
    bVar1 = *(byte *)(param_1 + 0xba0);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0xb88);
  }
  else {
    operator_delete(*(void **)(param_1 + 0xbb0));
    bVar1 = *(byte *)(param_1 + 0xb88);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0xb70);
  }
  else {
    operator_delete(*(void **)(param_1 + 0xb98));
    bVar1 = *(byte *)(param_1 + 0xb70);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0xb58);
  }
  else {
    operator_delete(*(void **)(param_1 + 0xb80));
    bVar1 = *(byte *)(param_1 + 0xb58);
  }
  if ((bVar1 & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0xb68));
  }
  folly::dynamic::folly::dynamic::destroy(param_1 + 0xb28);
  if ((*(byte *)(param_1 + 0xb10) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0xb20));
  }
  if ((*(byte *)(param_1 + 0xaf8) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0xb08));
  }
  folly::dynamic::folly::dynamic::destroy(param_1 + 0xac8);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0xa98);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0xa68);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0xa38);
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
  FUN_0078917c(param_1,PTR_VTT_0099f2c0 + 8);
  return;
}


// ===== 008beb5c  FUN_008beb5c =====

void FUN_008beb5c(long param_1)

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


// ===== 008bebac  FUN_008bebac =====

void FUN_008bebac(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099b9f0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008bebbc  FUN_008bebbc =====

void FUN_008bebbc(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099b9f0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008bebec  FUN_008bebec =====

void FUN_008bebec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x008bebf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 008bebf8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008bebfc  FUN_008bebfc =====

void FUN_008bebfc(long *param_1)

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


// ===== 008becbc  FUN_008becbc =====

void FUN_008becbc(long param_1)

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


// ===== 008bed24  FUN_008bed24 =====

bool FUN_008bed24(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 008bed3c  FUN_008bed3c =====

bool FUN_008bed3c(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 008bed54  FUN_008bed54 =====

void FUN_008bed54(long param_1)

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


// ===== 008beda4  FUN_008beda4 =====

void FUN_008beda4(void)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0xc18);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_0099bb08;
  memset(__s,0,0xc00);
                    /* try { // try from 008bede0 to 008bedf3 has its CatchHandler @ 008bef98 */
  FUN_00788b10(__s,PTR_VTT_0099f2c0 + 0x10);
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
  puVar1 = PTR_vtable_0099f2b8;
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
  *(undefined4 *)(puVar2 + 0xe2) = 0x3f800000;
  *(undefined4 *)(puVar2 + 0x10a) = 0x3f800000;
  puVar2[0xe1] = 0;
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
  *(undefined4 *)(puVar2 + 0x14a) = 0;
  puVar2[0x14b] = 0;
  *(undefined4 *)(puVar2 + 0x150) = 0;
  puVar2[0x151] = 0;
  *(undefined4 *)(puVar2 + 0x156) = 0;
  puVar2[0x157] = 0;
  *(undefined4 *)(puVar2 + 0x15c) = 0;
  puVar2[0x15d] = 0;
  puVar2[0x169] = 0;
  puVar2[0x17e] = 0;
  *(undefined4 *)(puVar2 + 0x120) = 0;
  puVar2[0x11f] = 0;
  puVar2[0x11e] = 0;
  puVar2[0x11d] = 0;
  puVar2[0x11c] = 0;
  puVar2[0x11b] = 0;
  puVar2[0x11a] = 0;
  *(undefined4 *)(puVar2 + 0x168) = 0;
  puVar2[0x167] = 0;
  puVar2[0x166] = 0;
  puVar2[0x165] = 0;
  puVar2[0x164] = 0;
  puVar2[0x163] = 0;
  puVar2[0x162] = 0;
  puVar2[0x16f] = 0;
  puVar2[0x16e] = 0;
  *(undefined8 *)((long)puVar2 + 0xbe4) = 0;
  *(undefined8 *)((long)puVar2 + 0xbdc) = 0;
  puVar2[0x179] = 0;
  puVar2[0x178] = 0;
  puVar2[0x177] = 0;
  puVar2[0x176] = 0;
  puVar2[0x175] = 0;
  puVar2[0x174] = 0;
  puVar2[0x173] = 0;
  puVar2[0x172] = 0;
  puVar2[0x171] = 0;
  puVar2[0x170] = 0;
  puVar1 = 
  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_26RNSVGTextPathComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_18RNSVGTextPathPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed28
  ;
  puVar2[0x17b] = 0;
  puVar2[0x17a] = 0;
  *(undefined8 **)puVar1 = __s;
  *(undefined8 **)(puVar1 + 8) = puVar2;
  return;
}


// ===== 008befb4  FUN_008befb4 =====

void FUN_008befb4(long param_1)

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


// ===== 008bf004  FUN_008bf004 =====

void FUN_008bf004(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099bb08;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008bf014  FUN_008bf014 =====

void FUN_008bf014(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099bb08;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008bf044  FUN_008bf044 =====

void FUN_008bf044(long param_1)

{
  FUN_008be8e4(param_1 + 0x18);
  return;
}


// ===== 008bf04c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008bf050  FUN_008bf050 =====

void FUN_008bf050(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099bb58;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008bf060  FUN_008bf060 =====

void FUN_008bf060(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099bb58;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008bf090  FUN_008bf090 =====

void FUN_008bf090(long param_1)

{
  FUN_008be8e4(param_1 + 0x18);
  return;
}


// ===== 008bf098  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008bf09c  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_23RNSVGConcreteShadowNodeIXadsoKcL_ZNS0_23RNSVGTSpanComponentNameEEEENS0_15RNSVGTSpanPropsEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENS8_14default_deleteISB_EEEERKNS0_29ComponentDescriptorParametersE =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_23RNSVGConcreteShadowNodeIXadsoKcL_ZNS0_23RNSVGTSpanComponentNameEEEENS0_15RNSVGTSpanPropsEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENS8_14default_deleteISB_EEEERKNS0_29ComponentDescriptorParametersE
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
  undefined4 local_18f0 [2];
  undefined8 *local_18e8;
  void *local_18e0;
  void *pvStack_18d8;
  undefined8 local_18d0;
  void *pvStack_18c8;
  void *local_18c0;
  undefined8 uStack_18b8;
  void *local_18b0;
  void *pvStack_18a8;
  undefined8 uStack_18a0;
  undefined8 uStack_1898;
  undefined *local_1890;
  undefined8 uStack_1888;
  undefined8 local_1880;
  undefined8 uStack_1878;
  undefined4 local_1870 [2];
  undefined8 local_1868;
  undefined8 uStack_1860;
  undefined8 local_1858;
  undefined8 uStack_1850;
  undefined4 local_1848;
  undefined4 local_1840;
  undefined1 local_183c;
  undefined8 local_183b;
  undefined8 local_1833;
  undefined8 uStack_182b;
  undefined8 local_1823;
  undefined8 uStack_181b;
  undefined8 local_1813;
  undefined8 uStack_180b;
  undefined8 local_1803;
  undefined6 uStack_17fb;
  undefined2 uStack_17f5;
  undefined6 uStack_17f3;
  undefined8 uStack_17ed;
  undefined4 local_17e5;
  undefined8 local_17e1;
  undefined1 local_17d9;
  undefined1 uStack_17d8;
  undefined7 uStack_17d7;
  undefined8 uStack_17d0;
  undefined8 uStack_17c8;
  undefined8 uStack_17c0;
  undefined8 local_17b8;
  undefined8 uStack_17b0;
  undefined8 local_17a8;
  undefined8 uStack_17a0;
  undefined8 local_1798;
  undefined8 uStack_1790;
  undefined8 local_1788;
  undefined8 uStack_1780;
  undefined8 uStack_1778;
  undefined8 local_1770;
  undefined8 local_1768;
  undefined8 uStack_1760;
  undefined8 local_1758;
  undefined4 uStack_1750;
  undefined4 uStack_174c;
  undefined4 uStack_1748;
  undefined4 uStack_1744;
  undefined4 uStack_1740;
  undefined4 uStack_173c;
  undefined8 local_1738;
  undefined8 uStack_1730;
  undefined4 local_1728;
  undefined1 local_1724;
  undefined4 local_1720;
  undefined1 local_171c;
  undefined4 local_1718;
  undefined1 local_1714;
  undefined4 local_1710;
  undefined1 local_170c;
  undefined4 local_1708;
  undefined1 local_1704;
  undefined4 local_1700;
  undefined1 local_16fc;
  undefined4 local_16f8;
  undefined1 local_16f4;
  undefined4 local_16f0;
  undefined1 local_16ec;
  undefined4 local_16e8;
  undefined1 local_16e4;
  undefined4 local_16e0;
  undefined1 local_16dc;
  undefined4 local_16d8;
  undefined1 local_16d4;
  undefined4 local_16d0;
  undefined1 local_16cc;
  undefined4 local_16c8;
  undefined1 local_16c4;
  undefined4 local_16c0;
  undefined1 local_16bc;
  undefined4 local_16b8;
  undefined1 local_16b4;
  undefined4 local_16b0;
  undefined1 local_16ac;
  undefined1 local_16a8;
  undefined1 local_16a4;
  undefined1 local_1698;
  undefined8 local_1690;
  undefined8 uStack_1688;
  undefined8 uStack_1680;
  undefined8 uStack_1678;
  undefined8 local_1670;
  undefined8 uStack_1668;
  undefined8 uStack_1660;
  undefined1 uStack_1658;
  undefined7 local_1657;
  undefined1 uStack_1650;
  undefined8 uStack_164f;
  undefined8 local_1644;
  undefined8 uStack_163c;
  undefined8 uStack_1634;
  undefined8 uStack_162c;
  undefined8 local_1624;
  undefined8 uStack_161c;
  undefined8 uStack_1614;
  undefined8 uStack_160c;
  undefined8 local_1604;
  undefined8 uStack_15fc;
  undefined8 uStack_15f4;
  undefined5 uStack_15ec;
  undefined3 local_15e7;
  undefined5 uStack_15e4;
  undefined1 local_15dc;
  undefined1 local_15d8;
  undefined1 local_15d4;
  undefined1 local_15d0;
  undefined1 local_15cc;
  undefined1 local_15c8;
  undefined1 local_15b0;
  undefined8 local_15a8;
  undefined8 uStack_15a0;
  undefined8 local_1598;
  undefined4 local_1590;
  undefined1 local_158c;
  undefined4 local_158b;
  undefined1 local_1587;
  undefined1 local_1586;
  undefined8 local_1580;
  undefined8 uStack_1578;
  undefined8 uStack_1570;
  undefined8 uStack_1568;
  undefined8 local_1560;
  undefined7 uStack_1558;
  undefined4 uStack_1551;
  undefined8 local_154c;
  undefined1 local_1544;
  undefined1 local_153c;
  undefined1 local_1538;
  undefined1 local_1530;
  undefined1 local_152c;
  undefined1 local_1524;
  undefined1 local_1520;
  undefined1 local_1518;
  undefined1 local_1514;
  undefined1 local_150c;
  undefined1 local_1508;
  undefined1 local_1500;
  undefined1 local_14fc;
  undefined1 local_14f4;
  undefined1 local_14f0;
  undefined1 local_14e8;
  undefined1 local_14e4;
  undefined1 local_14dc;
  undefined1 local_14d8;
  undefined1 local_14d0;
  undefined1 local_14cc;
  undefined1 local_14c4;
  undefined1 local_14c0;
  undefined1 local_14b8;
  undefined1 local_14b4;
  undefined1 local_14ac;
  undefined1 local_14a8;
  undefined1 local_14a4;
  undefined1 local_14a0;
  undefined1 local_149c;
  undefined1 local_1498;
  undefined1 local_1494;
  undefined1 local_1490;
  undefined1 local_148c;
  undefined1 local_1488;
  undefined1 local_1484;
  undefined1 local_1480;
  undefined1 local_147c;
  undefined1 local_1478;
  undefined1 local_1474;
  undefined1 local_1470;
  undefined1 local_146c;
  undefined1 local_1468;
  undefined1 local_1464;
  undefined1 local_1460;
  undefined1 local_145c;
  undefined1 local_1458;
  undefined1 local_1454;
  undefined1 local_1450;
  undefined1 local_144c;
  undefined8 local_1448;
  undefined8 uStack_1440;
  undefined8 local_1438;
  undefined8 uStack_1430;
  undefined8 uStack_1428;
  undefined8 uStack_1420;
  undefined2 local_1418;
  undefined8 local_1414;
  undefined1 local_140c;
  undefined8 local_1408;
  undefined8 local_1400;
  undefined8 uStack_13f8;
  undefined1 local_13f0;
  undefined8 local_13e8;
  undefined8 uStack_13e0;
  undefined8 uStack_13d8;
  undefined8 uStack_13d0;
  undefined8 local_13c8;
  undefined8 uStack_13c0;
  undefined8 uStack_13b8;
  undefined8 uStack_13b0;
  undefined8 local_13a8;
  undefined8 uStack_13a0;
  undefined8 uStack_1398;
  undefined8 uStack_1390;
  undefined8 local_1388;
  undefined8 uStack_1380;
  undefined8 uStack_1378;
  undefined8 uStack_1370;
  undefined8 local_1368;
  undefined8 uStack_1360;
  undefined8 uStack_1358;
  undefined8 uStack_1350;
  undefined8 local_1348;
  undefined8 uStack_1340;
  undefined8 local_1338;
  undefined8 uStack_1330;
  undefined8 local_1328;
  undefined8 uStack_1320;
  undefined8 local_1318;
  undefined8 uStack_1310;
  undefined8 local_1308;
  undefined8 uStack_1300;
  undefined8 local_12f8;
  undefined6 uStack_12f0;
  undefined2 uStack_12ea;
  undefined6 uStack_12e8;
  undefined1 local_12e0;
  undefined1 local_12dc;
  undefined1 local_12d8;
  undefined8 local_12d4;
  undefined8 uStack_12cc;
  undefined1 local_12c4;
  undefined8 local_12c0;
  undefined2 local_12b8;
  undefined1 local_12b6;
  undefined4 local_12b4;
  undefined1 local_12b0;
  undefined1 local_1250;
  undefined1 local_1248;
  undefined1 local_11e8;
  undefined4 local_11e0;
  undefined2 local_11dc;
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
  undefined8 local_11b0;
  undefined8 uStack_11a8;
  undefined8 local_11a0;
  undefined4 local_1198;
  undefined8 local_1190;
  undefined8 uStack_1188;
  undefined8 local_1180;
  undefined8 uStack_1178;
  undefined8 local_1170;
  undefined8 uStack_1168;
  undefined8 local_1160;
  undefined8 uStack_1158;
  undefined8 local_1150;
  undefined8 uStack_1148;
  undefined8 local_1140;
  undefined8 uStack_1138;
  undefined8 local_1130;
  undefined8 uStack_1128;
  undefined8 local_1120;
  undefined8 uStack_1118;
  undefined8 local_1110;
  undefined5 uStack_1108;
  undefined3 uStack_1103;
  undefined5 uStack_1100;
  undefined8 local_10f8;
  undefined8 uStack_10f0;
  undefined8 local_10e8;
  undefined8 uStack_10e0;
  undefined8 uStack_10d8;
  undefined8 uStack_10d0;
  undefined4 local_10c8;
  undefined4 local_10c0;
  undefined8 local_10b8;
  undefined8 local_1090;
  undefined4 local_1088;
  undefined8 local_1080;
  undefined4 local_1058;
  undefined4 local_1050;
  undefined8 local_1048;
  undefined8 local_1020;
  undefined4 local_1018;
  undefined8 local_1010;
  undefined8 local_fe8;
  undefined4 local_fe0;
  undefined8 local_fd8;
  undefined8 uStack_fd0;
  undefined8 uStack_fc8;
  undefined8 uStack_fc0;
  undefined8 local_fb8;
  undefined8 uStack_fb0;
  undefined4 local_fa8;
  undefined8 local_fa0;
  undefined4 local_f78;
  undefined8 local_f70;
  undefined4 local_f48;
  undefined8 local_f40;
  undefined4 local_f18;
  undefined8 local_f10;
  undefined4 local_ee8;
  undefined8 local_ee0;
  undefined4 local_eb8;
  undefined8 local_eb0;
  undefined4 local_e88;
  undefined8 local_e80;
  undefined4 local_e58;
  undefined8 local_e50;
  undefined4 local_e28;
  undefined8 local_e20;
  undefined4 local_df8;
  undefined8 local_df0;
  undefined4 local_dc8;
  undefined8 local_dc0;
  undefined8 local_d98;
  undefined8 uStack_d90;
  undefined8 uStack_d88;
  undefined8 uStack_d80;
  undefined8 local_d78;
  undefined8 uStack_d70;
  undefined4 local_d68;
  undefined8 local_d60;
  undefined8 local_d38;
  undefined8 uStack_d30;
  undefined8 local_d28;
  undefined4 local_d20 [2];
  undefined8 local_d18;
  undefined8 uStack_d10;
  undefined8 local_d08;
  undefined8 local_d00;
  undefined8 uStack_cf8;
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
  pvStack_18c8 = (void *)0x0;
  local_18d0 = 0;
  uStack_18b8 = 0;
  local_18c0 = (void *)0x0;
  pvStack_18a8 = (void *)0x0;
  local_18b0 = (void *)0x0;
  uStack_1898 = 0;
  uStack_18a0 = 0;
  pvStack_18d8 = (void *)0x0;
  local_18e0 = (void *)0x0;
                    /* try { // try from 008bf0f0 to 008bf0fb has its CatchHandler @ 008bf838 */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_18e0);
  local_f8 = 0;
  *(undefined ***)this = &PTR_FUN_0099bba8;
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
                    /* try { // try from 008bf168 to 008bf17b has its CatchHandler @ 008bf868 */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1b0);
  local_100 = CONCAT44(local_100._4_4_,0x3f800000);
  local_18f0[0] = 0xffffffff;
  uStack_108 = 0;
  local_110 = (void *)0x0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_18e8 = &local_1b0;
  facebook::react::RawProps::facebook::react::RawProps::parse(&local_f8,this + 0x38);
  memset(local_1870,0,0xb50);
  local_d20[0] = 5;
  local_d08 = 0;
  local_1890 = *(undefined **)(PTR_VTT_0099f2d8 + 0x20);
  local_1870[0] = 5;
  uStack_1878 = 0;
  local_1880 = 0;
  uStack_1888 = 0;
  local_d00 = 0;
  uStack_cf8 = 0x3f800000;
  uStack_d10 = 0;
  local_d18 = 0;
  uStack_1860 = 0;
  local_1868 = 0;
  uStack_1850 = 0;
  local_1858 = 0;
  local_1848 = 0x3f800000;
  folly::dynamic::folly::dynamic::destroy(local_d20);
  local_1840 = 0x10410710;
  local_183c = 0;
  uStack_1750 = 0;
  local_1758 = 0;
  uStack_173c = 0;
  uStack_1760 = 0;
  local_1768 = 0;
  uStack_17d7 = 0;
  uStack_182b = 0;
  local_1833 = 0;
  local_183b = _s__00375408;
  uStack_181b = 0;
  local_1823 = 0;
  uStack_13f8 = _UNK_00371598;
  local_1400 = _DAT_00371590;
  uStack_180b = 0;
  local_1813 = 0;
  uStack_17fb = 0;
  local_1803 = 0;
  uStack_1300 = _UNK_00488920;
  local_1308 = _DAT_00488918;
  uStack_1310 = _UNK_00488910;
  local_1318 = _DAT_00488908;
  local_17e5 = 0x40004;
  uStack_1744 = 0;
  uStack_1740 = 0;
  uStack_174c = 0;
  uStack_1748 = 0;
  uStack_1730 = 0;
  local_1738 = 0;
  local_1728 = 0x7fc00000;
  local_1720 = 0x7fc00000;
  local_1718 = 0x7fc00000;
  local_1710 = 0x7fc00000;
  local_1708 = 0x7fc00000;
  local_1700 = 0x7fc00000;
  local_16f8 = 0x7fc00000;
  local_16f0 = 0x7fc00000;
  local_16e8 = 0x7fc00000;
  local_16e0 = 0x7fc00000;
  local_16d8 = 0x7fc00000;
  local_16d0 = 0x7fc00000;
  local_16c8 = 0x7fc00000;
  local_16c0 = 0x7fc00000;
  local_16b8 = 0x7fc00000;
  local_16b0 = 0x7fc00000;
  uStack_164f = 0;
  uStack_1650 = 0;
  uStack_163c = 0;
  local_1644 = 0;
  uStack_162c = 0;
  uStack_1634 = 0;
  uStack_161c = 0;
  local_1624 = 0;
  uStack_160c = 0;
  uStack_1614 = 0;
  uStack_15fc = 0;
  local_1604 = 0;
  uStack_15ec = 0;
  uStack_15f4 = 0;
  local_15e7 = 0;
  uStack_15e4 = 0;
  local_158c = 1;
  local_158b = 0;
  local_1586 = 0x23;
  local_154c = 0x3f800000;
  uStack_1430 = 0;
  local_1438 = 0;
  uStack_1420 = 0;
  uStack_1428 = 0;
  uStack_1440 = 0;
  local_1448 = 0;
  uStack_1320 = _UNK_00488900;
  local_1328 = _DAT_004888f8;
  local_1414 = 0;
  uStack_1330 = _UNK_004888f0;
  local_1338 = _DAT_004888e8;
  uStack_13e0 = 0;
  local_13e8 = 0;
  uStack_13d0 = 0;
  uStack_13d8 = 0;
  uStack_13c0 = 0;
  local_13c8 = 0;
  uStack_13b0 = 0;
  uStack_13b8 = 0;
  uStack_13a0 = 0;
  local_13a8 = 0;
  uStack_1390 = 0;
  uStack_1398 = 0;
  uStack_1380 = 0;
  local_1388 = 0;
  uStack_1370 = 0;
  uStack_1378 = 0;
  uStack_1360 = 0;
  local_1368 = 0;
  uStack_1350 = 0;
  uStack_1358 = 0;
  uStack_1340 = 0;
  local_1348 = 0;
  uStack_12e8 = 0;
  uStack_12f0 = 0;
  uStack_12ea = 0;
  local_12f8 = 0;
  uStack_17ed = 0;
  uStack_17f5 = 0;
  uStack_17f3 = 0;
  local_17e1 = 0;
  local_17d9 = 0;
  uStack_17d8 = 0;
  uStack_17c8 = 0;
  uStack_17d0 = 0;
  local_17b8 = 0;
  uStack_17c0 = 0;
  local_17a8 = 0;
  uStack_17b0 = 0;
  local_1798 = 0;
  uStack_17a0 = 0;
  local_1788 = 0;
  uStack_1790 = 0;
  uStack_1778 = 0;
  uStack_1780 = 0;
  local_1770 = 0;
  local_1724 = 0;
  local_171c = 0;
  local_1714 = 0;
  local_170c = 0;
  local_1704 = 0;
  local_16fc = 0;
  local_16f4 = 0;
  local_16ec = 0;
  local_16e4 = 0;
  local_16dc = 0;
  local_16d4 = 0;
  local_16cc = 0;
  local_16c4 = 0;
  local_16bc = 0;
  local_16b4 = 0;
  local_16ac = 0;
  local_16a8 = 0;
  local_16a4 = 0;
  local_1698 = 0;
  local_15dc = 0;
  local_15d8 = 0;
  local_15d4 = 0;
  local_15d0 = 0;
  local_15cc = 0;
  local_15c8 = 0;
  local_15b0 = 0;
  uStack_1688 = 0;
  local_1690 = 0;
  uStack_1678 = 0;
  uStack_1680 = 0;
  uStack_1668 = 0;
  local_1670 = 0;
  uStack_1658 = 0;
  local_1657 = 0;
  uStack_1660 = 0;
  uStack_15a0 = 0;
  local_15a8 = 0;
  local_1598 = 0;
  local_1590 = 0;
  local_1587 = 0;
  uStack_1578 = 0;
  local_1580 = 0;
  uStack_1568 = 0;
  uStack_1570 = 0;
  uStack_1558 = 0;
  uStack_1551 = 0;
  local_1560 = 0;
  local_1544 = 0;
  local_153c = 0;
  local_1538 = 0;
  local_1530 = 0;
  local_152c = 0;
  local_1524 = 0;
  local_1520 = 0;
  local_1518 = 0;
  local_1514 = 0;
  local_150c = 0;
  local_1508 = 0;
  local_1500 = 0;
  local_14fc = 0;
  local_14f4 = 0;
  local_14f0 = 0;
  local_14e8 = 0;
  local_14e4 = 0;
  local_14dc = 0;
  local_14d8 = 0;
  local_14d0 = 0;
  local_14cc = 0;
  local_14c4 = 0;
  local_14c0 = 0;
  local_14b8 = 0;
  local_14b4 = 0;
  local_14ac = 0;
  local_14a8 = 0;
  local_14a4 = 0;
  local_14a0 = 0;
  local_149c = 0;
  local_1498 = 0;
  local_1494 = 0;
  local_1490 = 0;
  local_148c = 0;
  local_1488 = 0;
  local_1484 = 0;
  local_1480 = 0;
  local_147c = 0;
  local_1478 = 0;
  local_1474 = 0;
  local_1470 = 0;
  local_146c = 0;
  local_1468 = 0;
  local_1464 = 0;
  local_1460 = 0;
  local_145c = 0;
  local_1458 = 0;
  local_1454 = 0;
  local_1450 = 0;
  local_144c = 0;
  local_1408 = 0;
  local_1418 = 0;
  local_140c = 0;
  local_13f0 = 0;
  local_12e0 = 0;
  local_12dc = 0;
  local_12d8 = 0;
  local_12c0 = 0;
  uStack_12cc = 0;
  local_12d4 = 0;
  local_12c4 = 0;
  local_12b8 = 0x101;
  local_12b6 = 0;
  local_12b4 = 0;
  local_12b0 = 0;
  local_1250 = 0;
  local_1248 = 0;
  local_11e8 = 0;
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
  local_11dc = 0;
  local_11e0 = 0;
  local_1890 = PTR_vtable_0099f2d0 + 0x20;
  local_11a0 = 0;
  uStack_1100 = 0;
  uStack_10e0 = 0;
  local_10e8 = 0;
  uStack_10d0 = 0;
  uStack_10d8 = 0;
  uStack_10f0 = 0;
  local_10f8 = 0;
  uStack_11a8 = 0;
  local_11b0 = 0;
  local_1090 = 0x13f800000;
  uStack_d30 = 0;
  local_d38 = 0;
  uStack_fd0 = 0;
  local_fd8 = 0;
  uStack_fc0 = 0;
  uStack_fc8 = 0;
  uStack_fb0 = 0;
  local_fb8 = 0;
  local_1198 = 0x3f800000;
  local_10c0 = 0;
  local_10b8 = 0;
  uStack_1188 = 0;
  local_1190 = 0;
  uStack_1178 = 0;
  local_1180 = 0;
  uStack_1168 = 0;
  local_1170 = 0;
  uStack_1158 = 0;
  local_1160 = 0;
  uStack_1148 = 0;
  local_1150 = 0;
  uStack_1138 = 0;
  local_1140 = 0;
  uStack_1128 = 0;
  local_1130 = 0;
  uStack_1118 = 0;
  local_1120 = 0;
  uStack_1108 = 0;
  uStack_1103 = 0;
  local_1110 = 0;
  local_10c8 = 0;
  local_1088 = 0;
  local_1080 = 0;
  local_1058 = 0x3f800000;
  local_1050 = 0;
  local_1048 = 0;
  local_1020 = 0;
  local_1018 = 0;
  local_1010 = 0;
  local_fe8 = 0;
  local_fe0 = 0;
  local_fa0 = 0;
  local_f78 = 0;
  local_f70 = 0;
  local_f48 = 0;
  local_f40 = 0;
  local_f18 = 0;
  local_f10 = 0;
  local_ee8 = 0;
  local_ee0 = 0;
  local_eb8 = 0;
  local_eb0 = 0;
  local_e88 = 0;
  local_e80 = 0;
  local_e58 = 0;
  local_e50 = 0;
  local_e28 = 0;
  local_e20 = 0;
  local_df8 = 0;
  local_df0 = 0;
  local_dc8 = 0;
  local_dc0 = 0;
  local_d60 = 0;
  local_d28 = 0;
  local_fa8 = 0;
  uStack_d90 = 0;
  local_d98 = 0;
  uStack_d80 = 0;
  uStack_d88 = 0;
  uStack_d70 = 0;
  local_d78 = 0;
  local_d68 = 0;
                    /* try { // try from 008bf67c to 008bf68f has its CatchHandler @ 008bf868 */
  facebook::react::RNSVGTSpanProps::RNSVGTSpanProps
            ((RNSVGTSpanProps *)local_d20,(PropsParserContext *)local_18f0,
             (RNSVGTSpanProps *)&local_1890,(RawProps *)&local_f8);
  FUN_008c032c(local_d20);
  FUN_008c032c(&local_1890);
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
                    /* try { // try from 008bf794 to 008bf79f has its CatchHandler @ 008bf86c */
        (*(code *)(&PTR_FUN_0098f088)[*(uint *)((long)pvVar3 + -8)])
                  (&local_1890,(void *)((long)pvVar3 + -0x38));
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
  if (local_18b0 != (void *)0x0) {
    pvStack_18a8 = local_18b0;
    operator_delete(local_18b0);
  }
  if (pvStack_18c8 != (void *)0x0) {
    local_18c0 = pvStack_18c8;
    operator_delete(pvStack_18c8);
  }
  if (local_18e0 != (void *)0x0) {
    pvStack_18d8 = local_18e0;
    operator_delete(local_18e0);
  }
  *param_1 = this;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008bf870  FUN_008bf870 =====

void FUN_008bf870(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 008bf894  FUN_008bf894 =====

undefined * FUN_008bf894(void)

{
  return PTR_RNSVGTSpanComponentName_0099f2c8;
}


// ===== 008bf8a0  FUN_008bf8a0 =====

undefined * FUN_008bf8a0(void)

{
  return PTR_RNSVGTSpanComponentName_0099f2c8;
}


// ===== 008bf8ac  FUN_008bf8ac =====

undefined8 FUN_008bf8ac(void)

{
  return 0x61;
}


// ===== 008bf8b4  FUN_008bf8b4 =====

void FUN_008bf8b4(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

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
  *puVar4 = &PTR_FUN_0099bc38;
                    /* try { // try from 008bf920 to 008bf92f has its CatchHandler @ 008bf994 */
  facebook::react::RNSVGLayoutableShadowNode::RNSVGLayoutableShadowNode
            (pRVar1,param_3,param_4,uVar3);
  lVar5 = *param_2;
  puVar4[3] = &PTR_FUN_0099bc88;
                    /* try { // try from 008bf948 to 008bf953 has its CatchHandler @ 008bf984 */
  (**(code **)(lVar5 + 0x60))(param_2,pRVar1);
  *param_1 = pRVar1;
  param_1[1] = puVar4;
  if (*(long *)(lVar2 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008bf9c4  FUN_008bf9c4 =====

void FUN_008bf9c4(undefined8 *param_1,long *param_2,ShadowNode *param_3,ShadowNodeFragment *param_4)

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
  *plVar3 = (long)&PTR_FUN_0099bc38;
                    /* try { // try from 008bfa1c to 008bfa2b has its CatchHandler @ 008bfaf8 */
  facebook::react::RNSVGLayoutableShadowNode::RNSVGLayoutableShadowNode(pRVar1,param_3,param_4);
  plVar3[3] = (long)&PTR_FUN_0099bc88;
  local_68 = pRVar1;
  local_60 = plVar3;
                    /* try { // try from 008bfa3c to 008bfa4b has its CatchHandler @ 008bfb10 */
  facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::
  completeClone(pRVar1,param_3,param_4);
  local_78 = pRVar1;
  local_70 = plVar3;
  FUN_00757d00(1,plVar3 + 1);
                    /* try { // try from 008bfa5c to 008bfa6b has its CatchHandler @ 008bfae8 */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_78);
  plVar3 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar4 = FUN_00757990(0xffffffffffffffff,local_70 + 1), lVar4 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pRVar1 = local_68;
                    /* try { // try from 008bfaa8 to 008bfab3 has its CatchHandler @ 008bfb10 */
  (**(code **)(*param_2 + 0x60))(param_2,local_68);
  *param_1 = pRVar1;
  param_1[1] = local_60;
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008bfb38  FUN_008bfb38 =====

void FUN_008bfb38(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x008bfb48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 008bfb4c  FUN_008bfb4c =====

void FUN_008bfb4c(undefined8 *param_1,long param_2,PropsParserContext *param_3,long *param_4,
                 RawProps *param_5)

{
  RNSVGTSpanProps *this;
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
  RNSVGTSpanProps *pRVar12;
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
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_23RNSVGTSpanComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_15RNSVGTSpanPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed40
         & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_23RNSVGTSpanComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_15RNSVGTSpanPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed40
                                   ), iVar6 != 0)) {
                    /* try { // try from 008bff80 to 008bff83 has its CatchHandler @ 008bffb0 */
      FUN_008c0780();
      __cxa_atexit(FUN_008c0970,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_23RNSVGTSpanComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_15RNSVGTSpanPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed38
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_23RNSVGTSpanComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_15RNSVGTSpanPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed40
                         );
    }
    lVar11 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_23RNSVGTSpanComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_15RNSVGTSpanPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed38
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_23RNSVGTSpanComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_15RNSVGTSpanPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed38
    ;
    param_1[1] = lVar11;
    if (lVar11 != 0) {
      FUN_00757d00(1,lVar11 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    pRVar12 = (RNSVGTSpanProps *)*param_4;
    if (pRVar12 == (RNSVGTSpanProps *)0x0) {
      if (((*
            PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_23RNSVGTSpanComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_15RNSVGTSpanPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed40
           & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_23RNSVGTSpanComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_15RNSVGTSpanPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed40
                                     ), iVar6 != 0)) {
                    /* try { // try from 008bff00 to 008bff03 has its CatchHandler @ 008bffc8 */
        FUN_008c0780();
        __cxa_atexit(FUN_008c0970,
                     PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_23RNSVGTSpanComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_15RNSVGTSpanPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed38
                     ,&PTR_LOOP_008d5d30);
        __cxa_guard_release(
                           PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_23RNSVGTSpanComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_15RNSVGTSpanPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed40
                           );
      }
      pRVar12 = *(RNSVGTSpanProps **)
                 PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_23RNSVGTSpanComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_15RNSVGTSpanPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed38
      ;
    }
    plVar8 = (long *)operator_new(0xb88);
    this = (RNSVGTSpanProps *)(plVar8 + 3);
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = (long)&PTR_FUN_0099bda0;
                    /* try { // try from 008bfc2c to 008bfc3f has its CatchHandler @ 008c003c */
    facebook::react::RNSVGTSpanProps::RNSVGTSpanProps(this,param_3,pRVar12,param_5);
                    /* try { // try from 008bfc44 to 008bfc57 has its CatchHandler @ 008c0054 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if ((((uVar7 & 1) == 0) ||
        (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar7 & 1) == 0)) ||
       (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
                enablePropsUpdateReconciliationAndroid(), (uVar7 & 1) == 0)) {
LAB_008bfc80:
      FUN_00757d00(1,plVar8 + 1);
      if (*param_4 == 0) {
        if (((*
              PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_23RNSVGTSpanComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_15RNSVGTSpanPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed40
             & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(
                                       PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_23RNSVGTSpanComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_15RNSVGTSpanPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed40
                                       ), iVar6 != 0)) {
                    /* try { // try from 008bff40 to 008bff43 has its CatchHandler @ 008bffb4 */
          FUN_008c0780();
          __cxa_atexit(FUN_008c0970,
                       PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_23RNSVGTSpanComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_15RNSVGTSpanPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed38
                       ,&PTR_LOOP_008d5d30);
          __cxa_guard_release(
                             PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_23RNSVGTSpanComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_15RNSVGTSpanPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed40
                             );
        }
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 008bfce8 to 008bfcfb has its CatchHandler @ 008bffe0 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*(undefined8 *)
                         PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_23RNSVGTSpanComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_15RNSVGTSpanPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed38
                   ,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
LAB_008bfd34:
          (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
        }
        else if (local_b0 != (dynamic *)0x0) {
          lVar11 = 5;
          pdVar10 = local_b0;
          goto LAB_008bfd34;
        }
        if (plVar8 != (long *)0x0) goto LAB_008bfd48;
      }
      else {
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 008bfc9c to 008bfcaf has its CatchHandler @ 008c0008 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*param_4,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
        }
        else {
          if (local_b0 == (dynamic *)0x0) goto LAB_008bfd48;
          lVar11 = 5;
          pdVar10 = local_b0;
        }
        (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
LAB_008bfd48:
        lVar11 = FUN_00757990(0xffffffffffffffff,plVar8 + 1);
        if (lVar11 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 008bfc64 to 008bfc6f has its CatchHandler @ 008bffdc */
      pcVar9 = (char *)(**(code **)(*(long *)this + 0x10))(this);
      iVar6 = strcmp(PTR_RNSVGTSpanComponentName_0099f2c8,pcVar9);
      if (iVar6 != 0) goto LAB_008bfc80;
      bVar3 = false;
    }
                    /* try { // try from 008bfd74 to 008bfd77 has its CatchHandler @ 008c0054 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar7 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 008bfd84 to 008bfd9f has its CatchHandler @ 008c0004 */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(plVar8 + 7));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 008bfee0 to 008bfeef has its CatchHandler @ 008bfffc */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_008c00a0;
      }
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (*(int *)(plVar4 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 008bfec0 to 008bfecf has its CatchHandler @ 008c0060 */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_008c00a0;
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
                    /* try { // try from 008bfe20 to 008bfe2b has its CatchHandler @ 008c0068 */
        folly::dynamic::dynamic(local_d0,(dynamic *)(plVar4 + 8));
        local_a0 = 0;
                    /* try { // try from 008bfe30 to 008bfe47 has its CatchHandler @ 008c006c */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (this,param_3,uVar1,pcVar9,local_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 008bfe58 to 008bfe63 has its CatchHandler @ 008c005c */
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
LAB_008c00a0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008c00a4  FUN_008c00a4 =====

void FUN_008c00a4(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 008c00ac  FUN_008c00ac =====

void FUN_008c00ac(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 008c00b4  FUN_008c00b4 =====

void FUN_008c00b4(undefined8 *param_1,long param_2,long param_3)

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
                    /* try { // try from 008c00f8 to 008c00ff has its CatchHandler @ 008c0300 */
  plVar6 = (long *)operator_new(0x68);
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&PTR_FUN_00992a08;
                    /* try { // try from 008c0118 to 008c0123 has its CatchHandler @ 008c02e8 */
  local_78 = FUN_008707fc(plVar6 + 3,&local_58,param_2 + 8);
  local_70 = plVar6;
  if ((local_50 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,local_50 + 1), lVar7 == 0)) {
    (**(code **)(*local_50 + 0x10))(local_50);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 008c0158 to 008c015f has its CatchHandler @ 008c02d8 */
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
                    /* try { // try from 008c01ac to 008c01c3 has its CatchHandler @ 008c02a8 */
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
                    /* try { // try from 008c0218 to 008c0223 has its CatchHandler @ 008c0288 */
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


// ===== 008c0328  FUN_008c0328 =====

void FUN_008c0328(void)

{
  return;
}


// ===== 008c032c  FUN_008c032c =====

/* WARNING: Type propagation algorithm not settling */

void FUN_008c032c(long param_1)

{
  byte bVar1;
  void *pvVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  if ((*(byte *)(param_1 + 0xb58) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0xb68));
  }
  folly::dynamic::folly::dynamic::destroy(param_1 + 0xb28);
  if ((*(byte *)(param_1 + 0xb10) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0xb20));
  }
  if ((*(byte *)(param_1 + 0xaf8) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0xb08));
  }
  folly::dynamic::folly::dynamic::destroy(param_1 + 0xac8);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0xa98);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0xa68);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0xa38);
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
  FUN_0078917c(param_1,PTR_VTT_0099f2d8 + 8);
  return;
}


// ===== 008c0538  FUN_008c0538 =====

void FUN_008c0538(long param_1)

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


// ===== 008c0588  FUN_008c0588 =====

void FUN_008c0588(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099bc38;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008c0598  FUN_008c0598 =====

void FUN_008c0598(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099bc38;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008c05c8  FUN_008c05c8 =====

void FUN_008c05c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x008c05d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 008c05d4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008c05d8  FUN_008c05d8 =====

void FUN_008c05d8(long *param_1)

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


// ===== 008c0698  FUN_008c0698 =====

void FUN_008c0698(long param_1)

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


// ===== 008c0700  FUN_008c0700 =====

bool FUN_008c0700(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 008c0718  FUN_008c0718 =====

bool FUN_008c0718(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 008c0730  FUN_008c0730 =====

void FUN_008c0730(long param_1)

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


// ===== 008c0780  FUN_008c0780 =====

void FUN_008c0780(void)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0xb88);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_0099bd50;
  memset(__s,0,0xb70);
                    /* try { // try from 008c07bc to 008c07cf has its CatchHandler @ 008c0954 */
  FUN_00788b10(__s,PTR_VTT_0099f2d8 + 0x10);
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
  puVar1 = PTR_vtable_0099f2d0;
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
  *(undefined4 *)(puVar2 + 0x14a) = 0;
  puVar2[0x14b] = 0;
  *(undefined4 *)(puVar2 + 0x150) = 0;
  puVar2[0x151] = 0;
  *(undefined4 *)(puVar2 + 0x156) = 0;
  puVar2[0x157] = 0;
  *(undefined4 *)(puVar2 + 0x15c) = 0;
  puVar2[0x15d] = 0;
  puVar2[0x169] = 0;
  puVar2[0x170] = 0;
  puVar2[0x16f] = 0;
  puVar2[0x16e] = 0;
  *(undefined4 *)(puVar2 + 0x120) = 0;
  puVar2[0x11f] = 0;
  puVar2[0x11e] = 0;
  puVar2[0x11d] = 0;
  puVar2[0x11c] = 0;
  puVar2[0x11b] = 0;
  puVar2[0x11a] = 0;
  puVar2[0x163] = 0;
  puVar2[0x162] = 0;
  *(undefined4 *)(puVar2 + 0x168) = 0;
  puVar2[0x165] = 0;
  puVar2[0x164] = 0;
  puVar1 = 
  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_23RNSVGTSpanComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_15RNSVGTSpanPropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed38
  ;
  puVar2[0x167] = 0;
  puVar2[0x166] = 0;
  *(undefined8 **)puVar1 = __s;
  *(undefined8 **)(puVar1 + 8) = puVar2;
  return;
}


// ===== 008c0970  FUN_008c0970 =====

void FUN_008c0970(long param_1)

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


// ===== 008c09c0  FUN_008c09c0 =====

void FUN_008c09c0(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099bd50;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008c09d0  FUN_008c09d0 =====

void FUN_008c09d0(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099bd50;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008c0a00  FUN_008c0a00 =====

void FUN_008c0a00(long param_1)

{
  FUN_008c032c(param_1 + 0x18);
  return;
}


// ===== 008c0a08  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008c0a0c  FUN_008c0a0c =====

void FUN_008c0a0c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099bda0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008c0a1c  FUN_008c0a1c =====

void FUN_008c0a1c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099bda0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008c0a4c  FUN_008c0a4c =====

void FUN_008c0a4c(long param_1)

{
  FUN_008c032c(param_1 + 0x18);
  return;
}


// ===== 008c0a54  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008c0a58  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_23RNSVGConcreteShadowNodeIXadsoKcL_ZNS0_21RNSVGUseComponentNameEEEENS0_13RNSVGUsePropsEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENS8_14default_deleteISB_EEEERKNS0_29ComponentDescriptorParametersE =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_27ConcreteComponentDescriptorINS0_23RNSVGConcreteShadowNodeIXadsoKcL_ZNS0_21RNSVGUseComponentNameEEEENS0_13RNSVGUsePropsEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENS8_14default_deleteISB_EEEERKNS0_29ComponentDescriptorParametersE
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
  undefined4 local_1590 [2];
  undefined8 *local_1588;
  void *local_1580;
  void *pvStack_1578;
  undefined8 local_1570;
  void *pvStack_1568;
  void *local_1560;
  undefined8 uStack_1558;
  void *local_1550;
  void *pvStack_1548;
  undefined8 uStack_1540;
  undefined8 uStack_1538;
  undefined *local_1530;
  undefined8 uStack_1528;
  undefined8 local_1520;
  undefined8 uStack_1518;
  undefined4 local_1510 [2];
  undefined8 local_1508;
  undefined8 uStack_1500;
  undefined8 local_14f8;
  undefined8 uStack_14f0;
  undefined4 local_14e8;
  undefined4 local_14e0;
  undefined1 local_14dc;
  undefined8 local_14db;
  undefined8 local_14d3;
  undefined8 uStack_14cb;
  undefined8 local_14c3;
  undefined8 uStack_14bb;
  undefined8 local_14b3;
  undefined8 uStack_14ab;
  undefined8 local_14a3;
  undefined6 uStack_149b;
  undefined2 uStack_1495;
  undefined6 uStack_1493;
  undefined8 uStack_148d;
  undefined4 local_1485;
  undefined8 local_1481;
  undefined1 local_1479;
  undefined1 uStack_1478;
  undefined7 uStack_1477;
  undefined8 uStack_1470;
  undefined8 uStack_1468;
  undefined8 uStack_1460;
  undefined8 local_1458;
  undefined8 uStack_1450;
  undefined8 local_1448;
  undefined8 uStack_1440;
  undefined8 local_1438;
  undefined8 uStack_1430;
  undefined8 local_1428;
  undefined8 uStack_1420;
  undefined8 uStack_1418;
  undefined8 local_1410;
  undefined8 local_1408;
  undefined8 uStack_1400;
  undefined8 local_13f8;
  undefined4 uStack_13f0;
  undefined4 uStack_13ec;
  undefined4 uStack_13e8;
  undefined4 uStack_13e4;
  undefined4 uStack_13e0;
  undefined4 uStack_13dc;
  undefined8 local_13d8;
  undefined8 uStack_13d0;
  undefined4 local_13c8;
  undefined1 local_13c4;
  undefined4 local_13c0;
  undefined1 local_13bc;
  undefined4 local_13b8;
  undefined1 local_13b4;
  undefined4 local_13b0;
  undefined1 local_13ac;
  undefined4 local_13a8;
  undefined1 local_13a4;
  undefined4 local_13a0;
  undefined1 local_139c;
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
  undefined1 local_1348;
  undefined1 local_1344;
  undefined1 local_1338;
  undefined8 local_1330;
  undefined8 uStack_1328;
  undefined8 uStack_1320;
  undefined8 uStack_1318;
  undefined8 local_1310;
  undefined8 uStack_1308;
  undefined8 uStack_1300;
  undefined1 uStack_12f8;
  undefined7 local_12f7;
  undefined1 uStack_12f0;
  undefined8 uStack_12ef;
  undefined8 local_12e4;
  undefined8 uStack_12dc;
  undefined8 uStack_12d4;
  undefined8 uStack_12cc;
  undefined8 local_12c4;
  undefined8 uStack_12bc;
  undefined8 uStack_12b4;
  undefined8 uStack_12ac;
  undefined8 local_12a4;
  undefined8 uStack_129c;
  undefined8 uStack_1294;
  undefined5 uStack_128c;
  undefined3 local_1287;
  undefined5 uStack_1284;
  undefined1 local_127c;
  undefined1 local_1278;
  undefined1 local_1274;
  undefined1 local_1270;
  undefined1 local_126c;
  undefined1 local_1268;
  undefined1 local_1250;
  undefined8 local_1248;
  undefined8 uStack_1240;
  undefined8 local_1238;
  undefined4 local_1230;
  undefined1 local_122c;
  undefined4 local_122b;
  undefined1 local_1227;
  undefined1 local_1226;
  undefined8 local_1220;
  undefined8 uStack_1218;
  undefined8 uStack_1210;
  undefined8 uStack_1208;
  undefined8 local_1200;
  undefined7 uStack_11f8;
  undefined4 uStack_11f1;
  undefined8 local_11ec;
  undefined1 local_11e4;
  undefined1 local_11dc;
  undefined1 local_11d8;
  undefined1 local_11d0;
  undefined1 local_11cc;
  undefined1 local_11c4;
  undefined1 local_11c0;
  undefined1 local_11b8;
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
  undefined1 local_1144;
  undefined1 local_1140;
  undefined1 local_113c;
  undefined1 local_1138;
  undefined1 local_1134;
  undefined1 local_1130;
  undefined1 local_112c;
  undefined1 local_1128;
  undefined1 local_1124;
  undefined1 local_1120;
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
  undefined8 local_10e8;
  undefined8 uStack_10e0;
  undefined8 local_10d8;
  undefined8 uStack_10d0;
  undefined8 uStack_10c8;
  undefined8 uStack_10c0;
  undefined2 local_10b8;
  undefined8 local_10b4;
  undefined1 local_10ac;
  undefined8 local_10a8;
  undefined8 local_10a0;
  undefined8 uStack_1098;
  undefined1 local_1090;
  undefined8 local_1088;
  undefined8 uStack_1080;
  undefined8 uStack_1078;
  undefined8 uStack_1070;
  undefined8 local_1068;
  undefined8 uStack_1060;
  undefined8 uStack_1058;
  undefined8 uStack_1050;
  undefined8 local_1048;
  undefined8 uStack_1040;
  undefined8 uStack_1038;
  undefined8 uStack_1030;
  undefined8 local_1028;
  undefined8 uStack_1020;
  undefined8 uStack_1018;
  undefined8 uStack_1010;
  undefined8 local_1008;
  undefined8 uStack_1000;
  undefined8 uStack_ff8;
  undefined8 uStack_ff0;
  undefined8 local_fe8;
  undefined8 uStack_fe0;
  undefined8 local_fd8;
  undefined8 uStack_fd0;
  undefined8 local_fc8;
  undefined8 uStack_fc0;
  undefined8 local_fb8;
  undefined8 uStack_fb0;
  undefined8 local_fa8;
  undefined8 uStack_fa0;
  undefined8 local_f98;
  undefined6 uStack_f90;
  undefined2 uStack_f8a;
  undefined6 uStack_f88;
  undefined1 local_f80;
  undefined1 local_f7c;
  undefined1 local_f78;
  undefined8 local_f74;
  undefined8 uStack_f6c;
  undefined1 local_f64;
  undefined8 local_f60;
  undefined2 local_f58;
  undefined1 local_f56;
  undefined4 local_f54;
  undefined1 local_f50;
  undefined1 local_ef0;
  undefined1 local_ee8;
  undefined1 local_e88;
  undefined4 local_e80;
  undefined2 local_e7c;
  undefined1 local_e78;
  undefined1 local_e74;
  undefined1 local_e70;
  undefined1 local_e6c;
  undefined1 local_e68;
  undefined1 local_e64;
  undefined1 local_e60;
  undefined1 local_e5c;
  undefined1 local_e58;
  undefined1 local_e54;
  undefined8 local_e50;
  undefined8 uStack_e48;
  undefined8 local_e40;
  undefined4 local_e38;
  undefined8 local_e30;
  undefined8 uStack_e28;
  undefined8 local_e20;
  undefined8 uStack_e18;
  undefined8 local_e10;
  undefined8 uStack_e08;
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
  undefined5 uStack_da8;
  undefined3 uStack_da3;
  undefined5 uStack_da0;
  undefined8 local_d98;
  undefined8 uStack_d90;
  undefined8 local_d88;
  undefined8 uStack_d80;
  undefined8 uStack_d78;
  undefined8 uStack_d70;
  undefined4 local_d68;
  undefined4 local_d60;
  undefined8 local_d58;
  undefined8 local_d30;
  undefined4 local_d28;
  undefined8 local_d20;
  undefined4 local_cf8;
  undefined4 local_cf0;
  undefined8 local_ce8;
  undefined8 local_cc0;
  undefined4 local_cb8;
  undefined8 local_cb0;
  undefined8 local_c88;
  undefined4 local_c80;
  undefined8 local_c78;
  undefined8 uStack_c70;
  undefined8 uStack_c68;
  undefined8 uStack_c60;
  undefined8 local_c58;
  undefined8 uStack_c50;
  undefined8 uStack_c48;
  undefined4 uStack_c40;
  undefined4 local_c3c;
  undefined4 uStack_c38;
  undefined8 uStack_c34;
  undefined8 local_c28;
  undefined4 local_c00;
  undefined8 local_bf8;
  undefined4 local_bd0;
  undefined8 local_bc8;
  undefined4 local_ba0;
  undefined8 local_b98;
  undefined4 local_b70 [2];
  undefined8 local_b68;
  undefined8 uStack_b60;
  undefined8 local_b58;
  undefined8 local_b50;
  undefined8 uStack_b48;
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
  pvStack_1568 = (void *)0x0;
  local_1570 = 0;
  uStack_1558 = 0;
  local_1560 = (void *)0x0;
  pvStack_1548 = (void *)0x0;
  local_1550 = (void *)0x0;
  uStack_1538 = 0;
  uStack_1540 = 0;
  pvStack_1578 = (void *)0x0;
  local_1580 = (void *)0x0;
                    /* try { // try from 008c0aac to 008c0ab7 has its CatchHandler @ 008c119c */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_1580);
  local_f8 = 0;
  *(undefined ***)this = &PTR_FUN_0099bdf0;
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
                    /* try { // try from 008c0b24 to 008c0b37 has its CatchHandler @ 008c11cc */
  std::__ndk1::__shared_mutex_base::__shared_mutex_base((__shared_mutex_base *)&local_1b0);
  local_100 = CONCAT44(local_100._4_4_,0x3f800000);
  local_1590[0] = 0xffffffff;
  uStack_108 = 0;
  local_110 = (void *)0x0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_1588 = &local_1b0;
  facebook::react::RawProps::facebook::react::RawProps::parse(&local_f8,this + 0x38);
  memset(local_1510,0,0x9a0);
  local_b70[0] = 5;
  local_b58 = 0;
  local_1530 = *(undefined **)(PTR_VTT_0099f2f0 + 0x20);
  local_1510[0] = 5;
  uStack_1518 = 0;
  local_1520 = 0;
  uStack_1528 = 0;
  local_b50 = 0;
  uStack_b48 = 0x3f800000;
  uStack_b60 = 0;
  local_b68 = 0;
  uStack_1500 = 0;
  local_1508 = 0;
  uStack_14f0 = 0;
  local_14f8 = 0;
  local_14e8 = 0x3f800000;
  folly::dynamic::folly::dynamic::destroy(local_b70);
  local_14e0 = 0x10410710;
  local_14dc = 0;
  uStack_13f0 = 0;
  local_13f8 = 0;
  uStack_13dc = 0;
  uStack_1400 = 0;
  local_1408 = 0;
  uStack_1477 = 0;
  uStack_14cb = 0;
  local_14d3 = 0;
  local_14db = _s__00375408;
  uStack_14bb = 0;
  local_14c3 = 0;
  uStack_1098 = _UNK_00371598;
  local_10a0 = _DAT_00371590;
  uStack_14ab = 0;
  local_14b3 = 0;
  uStack_149b = 0;
  local_14a3 = 0;
  uStack_fa0 = _UNK_00488920;
  local_fa8 = _DAT_00488918;
  uStack_fb0 = _UNK_00488910;
  local_fb8 = _DAT_00488908;
  local_1485 = 0x40004;
  uStack_13e4 = 0;
  uStack_13e0 = 0;
  uStack_13ec = 0;
  uStack_13e8 = 0;
  uStack_13d0 = 0;
  local_13d8 = 0;
  local_13c8 = 0x7fc00000;
  local_13c0 = 0x7fc00000;
  local_13b8 = 0x7fc00000;
  local_13b0 = 0x7fc00000;
  local_13a8 = 0x7fc00000;
  local_13a0 = 0x7fc00000;
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
  uStack_12ef = 0;
  uStack_12f0 = 0;
  uStack_12dc = 0;
  local_12e4 = 0;
  uStack_12cc = 0;
  uStack_12d4 = 0;
  uStack_12bc = 0;
  local_12c4 = 0;
  uStack_12ac = 0;
  uStack_12b4 = 0;
  uStack_129c = 0;
  local_12a4 = 0;
  uStack_128c = 0;
  uStack_1294 = 0;
  local_1287 = 0;
  uStack_1284 = 0;
  local_122c = 1;
  local_122b = 0;
  local_1226 = 0x23;
  local_11ec = 0x3f800000;
  uStack_10d0 = 0;
  local_10d8 = 0;
  uStack_10c0 = 0;
  uStack_10c8 = 0;
  uStack_10e0 = 0;
  local_10e8 = 0;
  uStack_fc0 = _UNK_00488900;
  local_fc8 = _DAT_004888f8;
  local_10b4 = 0;
  uStack_fd0 = _UNK_004888f0;
  local_fd8 = _DAT_004888e8;
  uStack_1080 = 0;
  local_1088 = 0;
  uStack_1070 = 0;
  uStack_1078 = 0;
  uStack_1060 = 0;
  local_1068 = 0;
  uStack_1050 = 0;
  uStack_1058 = 0;
  uStack_1040 = 0;
  local_1048 = 0;
  uStack_1030 = 0;
  uStack_1038 = 0;
  uStack_1020 = 0;
  local_1028 = 0;
  uStack_1010 = 0;
  uStack_1018 = 0;
  uStack_1000 = 0;
  local_1008 = 0;
  uStack_ff0 = 0;
  uStack_ff8 = 0;
  uStack_fe0 = 0;
  local_fe8 = 0;
  uStack_f88 = 0;
  uStack_f90 = 0;
  uStack_f8a = 0;
  local_f98 = 0;
  uStack_148d = 0;
  uStack_1495 = 0;
  uStack_1493 = 0;
  local_1481 = 0;
  local_1479 = 0;
  uStack_1478 = 0;
  uStack_1468 = 0;
  uStack_1470 = 0;
  local_1458 = 0;
  uStack_1460 = 0;
  local_1448 = 0;
  uStack_1450 = 0;
  local_1438 = 0;
  uStack_1440 = 0;
  local_1428 = 0;
  uStack_1430 = 0;
  uStack_1418 = 0;
  uStack_1420 = 0;
  local_1410 = 0;
  local_13c4 = 0;
  local_13bc = 0;
  local_13b4 = 0;
  local_13ac = 0;
  local_13a4 = 0;
  local_139c = 0;
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
  local_1348 = 0;
  local_1344 = 0;
  local_1338 = 0;
  local_127c = 0;
  local_1278 = 0;
  local_1274 = 0;
  local_1270 = 0;
  local_126c = 0;
  local_1268 = 0;
  local_1250 = 0;
  uStack_1328 = 0;
  local_1330 = 0;
  uStack_1318 = 0;
  uStack_1320 = 0;
  uStack_1308 = 0;
  local_1310 = 0;
  uStack_12f8 = 0;
  local_12f7 = 0;
  uStack_1300 = 0;
  uStack_1240 = 0;
  local_1248 = 0;
  local_1238 = 0;
  local_1230 = 0;
  local_1227 = 0;
  uStack_1218 = 0;
  local_1220 = 0;
  uStack_1208 = 0;
  uStack_1210 = 0;
  uStack_11f8 = 0;
  uStack_11f1 = 0;
  local_1200 = 0;
  local_11e4 = 0;
  local_11dc = 0;
  local_11d8 = 0;
  local_11d0 = 0;
  local_11cc = 0;
  local_11c4 = 0;
  local_11c0 = 0;
  local_11b8 = 0;
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
  local_1144 = 0;
  local_1140 = 0;
  local_113c = 0;
  local_1138 = 0;
  local_1134 = 0;
  local_1130 = 0;
  local_112c = 0;
  local_1128 = 0;
  local_1124 = 0;
  local_1120 = 0;
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
  local_10a8 = 0;
  local_10b8 = 0;
  local_10ac = 0;
  local_1090 = 0;
  local_f80 = 0;
  local_f7c = 0;
  local_f78 = 0;
  local_f60 = 0;
  uStack_f6c = 0;
  local_f74 = 0;
  local_f64 = 0;
  local_f58 = 0x101;
  local_f56 = 0;
  local_f54 = 0;
  local_f50 = 0;
  local_ef0 = 0;
  local_ee8 = 0;
  local_e88 = 0;
  local_e78 = 0;
  local_e74 = 0;
  local_e70 = 0;
  local_e6c = 0;
  local_e68 = 0;
  local_e64 = 0;
  local_e60 = 0;
  local_e5c = 0;
  local_e58 = 0;
  local_e54 = 0;
  local_e7c = 0;
  local_e80 = 0;
  local_1530 = PTR_vtable_0099f2e8 + 0x20;
  local_e40 = 0;
  uStack_da0 = 0;
  uStack_d80 = 0;
  local_d88 = 0;
  uStack_d70 = 0;
  uStack_d78 = 0;
  uStack_d90 = 0;
  local_d98 = 0;
  uStack_e48 = 0;
  local_e50 = 0;
  local_d30 = 0x13f800000;
  local_e38 = 0x3f800000;
  local_d60 = 0;
  local_d58 = 0;
  uStack_e28 = 0;
  local_e30 = 0;
  uStack_e18 = 0;
  local_e20 = 0;
  uStack_e08 = 0;
  local_e10 = 0;
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
  uStack_da3 = 0;
  local_db0 = 0;
  local_d68 = 0;
  local_d28 = 0;
  local_d20 = 0;
  local_cf8 = 0x3f800000;
  local_cf0 = 0;
  local_ce8 = 0;
  local_cc0 = 0;
  local_cb8 = 0;
  local_cb0 = 0;
  local_c88 = 0;
  local_c80 = 0;
  local_c28 = 0;
  local_c00 = 0;
  local_bf8 = 0;
  local_bd0 = 0;
  local_bc8 = 0;
  local_ba0 = 0;
  local_b98 = 0;
  uStack_c34 = 0;
  uStack_c38 = 0;
  uStack_c70 = 0;
  local_c78 = 0;
  uStack_c60 = 0;
  uStack_c68 = 0;
  uStack_c50 = 0;
  local_c58 = 0;
  uStack_c40 = 0;
  local_c3c = 0;
  uStack_c48 = 0;
                    /* try { // try from 008c0fe0 to 008c0ff3 has its CatchHandler @ 008c11cc */
  facebook::react::RNSVGUseProps::RNSVGUseProps
            ((RNSVGUseProps *)local_b70,(PropsParserContext *)local_1590,
             (RNSVGUseProps *)&local_1530,(RawProps *)&local_f8);
  FUN_008c1c90(local_b70);
  FUN_008c1c90(&local_1530);
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
                    /* try { // try from 008c10f8 to 008c1103 has its CatchHandler @ 008c11d0 */
        (*(code *)(&PTR_FUN_0098f088)[*(uint *)((long)pvVar3 + -8)])
                  (&local_1530,(void *)((long)pvVar3 + -0x38));
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
  if (local_1550 != (void *)0x0) {
    pvStack_1548 = local_1550;
    operator_delete(local_1550);
  }
  if (pvStack_1568 != (void *)0x0) {
    local_1560 = pvStack_1568;
    operator_delete(pvStack_1568);
  }
  if (local_1580 != (void *)0x0) {
    pvStack_1578 = local_1580;
    operator_delete(local_1580);
  }
  *param_1 = this;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008c11d4  FUN_008c11d4 =====

void FUN_008c11d4(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 008c11f8  FUN_008c11f8 =====

undefined * FUN_008c11f8(void)

{
  return PTR_RNSVGUseComponentName_0099f2e0;
}


// ===== 008c1204  FUN_008c1204 =====

undefined * FUN_008c1204(void)

{
  return PTR_RNSVGUseComponentName_0099f2e0;
}


// ===== 008c1210  FUN_008c1210 =====

undefined8 FUN_008c1210(void)

{
  return 0x61;
}


// ===== 008c1218  FUN_008c1218 =====

void FUN_008c1218(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

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
  *puVar4 = &PTR_FUN_0099be80;
                    /* try { // try from 008c1284 to 008c1293 has its CatchHandler @ 008c12f8 */
  facebook::react::RNSVGLayoutableShadowNode::RNSVGLayoutableShadowNode
            (pRVar1,param_3,param_4,uVar3);
  lVar5 = *param_2;
  puVar4[3] = &PTR_FUN_0099bed0;
                    /* try { // try from 008c12ac to 008c12b7 has its CatchHandler @ 008c12e8 */
  (**(code **)(lVar5 + 0x60))(param_2,pRVar1);
  *param_1 = pRVar1;
  param_1[1] = puVar4;
  if (*(long *)(lVar2 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008c1328  FUN_008c1328 =====

void FUN_008c1328(undefined8 *param_1,long *param_2,ShadowNode *param_3,ShadowNodeFragment *param_4)

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
  *plVar3 = (long)&PTR_FUN_0099be80;
                    /* try { // try from 008c1380 to 008c138f has its CatchHandler @ 008c145c */
  facebook::react::RNSVGLayoutableShadowNode::RNSVGLayoutableShadowNode(pRVar1,param_3,param_4);
  plVar3[3] = (long)&PTR_FUN_0099bed0;
  local_68 = pRVar1;
  local_60 = plVar3;
                    /* try { // try from 008c13a0 to 008c13af has its CatchHandler @ 008c1474 */
  facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::
  completeClone(pRVar1,param_3,param_4);
  local_78 = pRVar1;
  local_70 = plVar3;
  FUN_00757d00(1,plVar3 + 1);
                    /* try { // try from 008c13c0 to 008c13cf has its CatchHandler @ 008c144c */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_78);
  plVar3 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar4 = FUN_00757990(0xffffffffffffffff,local_70 + 1), lVar4 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pRVar1 = local_68;
                    /* try { // try from 008c140c to 008c1417 has its CatchHandler @ 008c1474 */
  (**(code **)(*param_2 + 0x60))(param_2,local_68);
  *param_1 = pRVar1;
  param_1[1] = local_60;
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008c149c  FUN_008c149c =====

void FUN_008c149c(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x008c14ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_3);
  return;
}


// ===== 008c14b0  FUN_008c14b0 =====

void FUN_008c14b0(undefined8 *param_1,long param_2,PropsParserContext *param_3,long *param_4,
                 RawProps *param_5)

{
  RNSVGUseProps *this;
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
  RNSVGUseProps *pRVar12;
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
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_21RNSVGUseComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_13RNSVGUsePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed50
         & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_21RNSVGUseComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_13RNSVGUsePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed50
                                   ), iVar6 != 0)) {
                    /* try { // try from 008c18e4 to 008c18e7 has its CatchHandler @ 008c1914 */
      FUN_008c2098();
      __cxa_atexit(FUN_008c223c,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_21RNSVGUseComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_13RNSVGUsePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed48
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_21RNSVGUseComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_13RNSVGUsePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed50
                         );
    }
    lVar11 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_21RNSVGUseComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_13RNSVGUsePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed48
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_21RNSVGUseComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_13RNSVGUsePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed48
    ;
    param_1[1] = lVar11;
    if (lVar11 != 0) {
      FUN_00757d00(1,lVar11 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    pRVar12 = (RNSVGUseProps *)*param_4;
    if (pRVar12 == (RNSVGUseProps *)0x0) {
      if (((*
            PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_21RNSVGUseComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_13RNSVGUsePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed50
           & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_21RNSVGUseComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_13RNSVGUsePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed50
                                     ), iVar6 != 0)) {
                    /* try { // try from 008c1864 to 008c1867 has its CatchHandler @ 008c192c */
        FUN_008c2098();
        __cxa_atexit(FUN_008c223c,
                     PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_21RNSVGUseComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_13RNSVGUsePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed48
                     ,&PTR_LOOP_008d5d30);
        __cxa_guard_release(
                           PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_21RNSVGUseComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_13RNSVGUsePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed50
                           );
      }
      pRVar12 = *(RNSVGUseProps **)
                 PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_21RNSVGUseComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_13RNSVGUsePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed48
      ;
    }
    plVar8 = (long *)operator_new(0x9d8);
    this = (RNSVGUseProps *)(plVar8 + 3);
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = (long)&PTR_FUN_0099bfe8;
                    /* try { // try from 008c1590 to 008c15a3 has its CatchHandler @ 008c19a0 */
    facebook::react::RNSVGUseProps::RNSVGUseProps(this,param_3,pRVar12,param_5);
                    /* try { // try from 008c15a8 to 008c15bb has its CatchHandler @ 008c19b8 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if ((((uVar7 & 1) == 0) ||
        (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar7 & 1) == 0)) ||
       (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
                enablePropsUpdateReconciliationAndroid(), (uVar7 & 1) == 0)) {
LAB_008c15e4:
      FUN_00757d00(1,plVar8 + 1);
      if (*param_4 == 0) {
        if (((*
              PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_21RNSVGUseComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_13RNSVGUsePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed50
             & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(
                                       PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_21RNSVGUseComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_13RNSVGUsePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed50
                                       ), iVar6 != 0)) {
                    /* try { // try from 008c18a4 to 008c18a7 has its CatchHandler @ 008c1918 */
          FUN_008c2098();
          __cxa_atexit(FUN_008c223c,
                       PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_21RNSVGUseComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_13RNSVGUsePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed48
                       ,&PTR_LOOP_008d5d30);
          __cxa_guard_release(
                             PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_21RNSVGUseComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_13RNSVGUsePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed50
                             );
        }
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 008c164c to 008c165f has its CatchHandler @ 008c1944 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*(undefined8 *)
                         PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_21RNSVGUseComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_13RNSVGUsePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed48
                   ,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
LAB_008c1698:
          (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
        }
        else if (local_b0 != (dynamic *)0x0) {
          lVar11 = 5;
          pdVar10 = local_b0;
          goto LAB_008c1698;
        }
        if (plVar8 != (long *)0x0) goto LAB_008c16ac;
      }
      else {
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 008c1600 to 008c1613 has its CatchHandler @ 008c196c */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*param_4,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
        }
        else {
          if (local_b0 == (dynamic *)0x0) goto LAB_008c16ac;
          lVar11 = 5;
          pdVar10 = local_b0;
        }
        (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
LAB_008c16ac:
        lVar11 = FUN_00757990(0xffffffffffffffff,plVar8 + 1);
        if (lVar11 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 008c15c8 to 008c15d3 has its CatchHandler @ 008c1940 */
      pcVar9 = (char *)(**(code **)(*(long *)this + 0x10))(this);
      iVar6 = strcmp(PTR_RNSVGUseComponentName_0099f2e0,pcVar9);
      if (iVar6 != 0) goto LAB_008c15e4;
      bVar3 = false;
    }
                    /* try { // try from 008c16d8 to 008c16db has its CatchHandler @ 008c19b8 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar7 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 008c16e8 to 008c1703 has its CatchHandler @ 008c1968 */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(plVar8 + 7));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 008c1844 to 008c1853 has its CatchHandler @ 008c1960 */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_008c1a04;
      }
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (*(int *)(plVar4 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 008c1824 to 008c1833 has its CatchHandler @ 008c19c4 */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_008c1a04;
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
                    /* try { // try from 008c1784 to 008c178f has its CatchHandler @ 008c19cc */
        folly::dynamic::dynamic(local_d0,(dynamic *)(plVar4 + 8));
        local_a0 = 0;
                    /* try { // try from 008c1794 to 008c17ab has its CatchHandler @ 008c19d0 */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (this,param_3,uVar1,pcVar9,local_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 008c17bc to 008c17c7 has its CatchHandler @ 008c19c0 */
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
LAB_008c1a04:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008c1a08  FUN_008c1a08 =====

void FUN_008c1a08(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 008c1a10  FUN_008c1a10 =====

void FUN_008c1a10(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


// ===== 008c1a18  FUN_008c1a18 =====

void FUN_008c1a18(undefined8 *param_1,long param_2,long param_3)

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
                    /* try { // try from 008c1a5c to 008c1a63 has its CatchHandler @ 008c1c64 */
  plVar6 = (long *)operator_new(0x68);
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)&PTR_FUN_00992a08;
                    /* try { // try from 008c1a7c to 008c1a87 has its CatchHandler @ 008c1c4c */
  local_78 = FUN_008707fc(plVar6 + 3,&local_58,param_2 + 8);
  local_70 = plVar6;
  if ((local_50 != (long *)0x0) &&
     (lVar7 = FUN_00757990(0xffffffffffffffff,local_50 + 1), lVar7 == 0)) {
    (**(code **)(*local_50 + 0x10))(local_50);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 008c1abc to 008c1ac3 has its CatchHandler @ 008c1c3c */
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
                    /* try { // try from 008c1b10 to 008c1b27 has its CatchHandler @ 008c1c0c */
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
                    /* try { // try from 008c1b7c to 008c1b87 has its CatchHandler @ 008c1bec */
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


// ===== 008c1c8c  FUN_008c1c8c =====

void FUN_008c1c8c(void)

{
  return;
}


// ===== 008c1c90  FUN_008c1c90 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_008c1c90(long param_1)

{
  byte bVar1;
  void *pvVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x990);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x960);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x930);
  folly::dynamic::folly::dynamic::destroy(param_1 + 0x900);
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
  FUN_0078917c(param_1,PTR_VTT_0099f2f0 + 8);
  return;
}


// ===== 008c1e50  FUN_008c1e50 =====

void FUN_008c1e50(long param_1)

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


// ===== 008c1ea0  FUN_008c1ea0 =====

void FUN_008c1ea0(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099be80;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008c1eb0  FUN_008c1eb0 =====

void FUN_008c1eb0(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099be80;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008c1ee0  FUN_008c1ee0 =====

void FUN_008c1ee0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x008c1ee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 008c1eec  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008c1ef0  FUN_008c1ef0 =====

void FUN_008c1ef0(long *param_1)

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


// ===== 008c1fb0  FUN_008c1fb0 =====

void FUN_008c1fb0(long param_1)

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


// ===== 008c2018  FUN_008c2018 =====

bool FUN_008c2018(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 008c2030  FUN_008c2030 =====

bool FUN_008c2030(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 008c2048  FUN_008c2048 =====

void FUN_008c2048(long param_1)

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


// ===== 008c2098  FUN_008c2098 =====

void FUN_008c2098(void)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x9d8);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_0099bf98;
  memset(__s,0,0x9c0);
                    /* try { // try from 008c20d4 to 008c20e7 has its CatchHandler @ 008c2220 */
  FUN_00788b10(__s,PTR_VTT_0099f2f0 + 0x10);
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
  puVar1 = PTR_vtable_0099f2e8;
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
  *(undefined4 *)(puVar2 + 0xe2) = 0x3f800000;
  *(undefined4 *)(puVar2 + 0x10a) = 0x3f800000;
  puVar2[0xe1] = 0;
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
  *(undefined4 *)(puVar2 + 0x10b) = 0;
  puVar2[0x10c] = 0;
  *(undefined4 *)(puVar2 + 0x112) = 0;
  puVar2[0x113] = 0;
  puVar2[0x118] = 0;
  *(undefined4 *)(puVar2 + 0x119) = 0;
  puVar2[0x124] = 0;
  *(undefined4 *)(puVar2 + 0x129) = 0;
  puVar2[0x12a] = 0;
  *(undefined4 *)(puVar2 + 0x12f) = 0;
  puVar2[0x130] = 0;
  *(undefined4 *)(puVar2 + 0x135) = 0;
  puVar2[0x136] = 0;
  *(undefined8 *)((long)puVar2 + 0x914) = 0;
  *(undefined8 *)((long)puVar2 + 0x90c) = 0;
  puVar2[0x121] = 0;
  puVar2[0x120] = 0;
  puVar2[0x11f] = 0;
  puVar2[0x11e] = 0;
  puVar2[0x11d] = 0;
  puVar2[0x11c] = 0;
  puVar1 = 
  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_21RNSVGUseComponentNameEEEENS0_25RNSVGLayoutableShadowNodeENS0_13RNSVGUsePropsENS0_20BaseViewEventEmitterENS0_9StateDataEE18defaultSharedPropsEvE18defaultSharedProps_0099ed48
  ;
  puVar2[0x11b] = 0;
  puVar2[0x11a] = 0;
  *(undefined8 **)puVar1 = __s;
  *(undefined8 **)(puVar1 + 8) = puVar2;
  return;
}


// ===== 008c223c  FUN_008c223c =====

void FUN_008c223c(long param_1)

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


// ===== 008c228c  FUN_008c228c =====

void FUN_008c228c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099bf98;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008c229c  FUN_008c229c =====

void FUN_008c229c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099bf98;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008c22cc  FUN_008c22cc =====

void FUN_008c22cc(long param_1)

{
  FUN_008c1c90(param_1 + 0x18);
  return;
}


// ===== 008c22d4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008c22d8  FUN_008c22d8 =====

void FUN_008c22d8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099bfe8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008c22e8  FUN_008c22e8 =====

void FUN_008c22e8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099bfe8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008c2318  FUN_008c2318 =====

void FUN_008c2318(long param_1)

{
  FUN_008c1c90(param_1 + 0x18);
  return;
}


// ===== 008c2320  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008c2324  facebook::react::registerComponents =====

/* WARNING: Unknown calling convention: __rustcall */
/* facebook::react::registerComponents */

void __rustcall facebook::react::registerComponents(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 local_70;
  long *local_68;
  undefined *local_60;
  undefined *puStack_58;
  undefined8 local_50;
  long *local_48;
  undefined *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_60 = PTR_SelectActionComponentViewComponentName_0099e080;
  puStack_58 = PTR_SelectActionComponentViewComponentName_0099e080;
  local_50 = 0;
  local_48 = (long *)0x0;
  local_40 = 
  PTR__ZN8facebook5react38concreteComponentDescriptorConstructorINS0_29SizingUtilComponentDescriptorINS0_20SizingUtilShadowNodeIXadsoKcL_ZNS0_38SelectActionComponentViewComponentNameEEEENS0_30SelectActionComponentViewPropsENS0_37SelectActionComponentViewEventEmitterEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENS9_14default_deleteISC_EEEERKNS0_29ComponentDescriptorParametersE_0099f310
  ;
                    /* try { // try from 008c2368 to 008c236f has its CatchHandler @ 008c2594 */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
  plVar2 = local_48;
  if ((local_48 != (long *)0x0) &&
     (lVar3 = FUN_00757990(0xffffffffffffffff,local_48 + 1), lVar3 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  local_60 = PTR_TextDisplayComponentViewComponentName_0099e0c8;
  puStack_58 = PTR_TextDisplayComponentViewComponentName_0099e0c8;
  local_50 = 0;
  local_48 = (long *)0x0;
  local_40 = 
  PTR__ZN8facebook5react38concreteComponentDescriptorConstructorINS0_29SizingUtilComponentDescriptorINS0_20SizingUtilShadowNodeIXadsoKcL_ZNS0_37TextDisplayComponentViewComponentNameEEEENS0_29TextDisplayComponentViewPropsENS0_36TextDisplayComponentViewEventEmitterEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENS9_14default_deleteISC_EEEERKNS0_29ComponentDescriptorParametersE_0099f318
  ;
                    /* try { // try from 008c23c0 to 008c23c7 has its CatchHandler @ 008c2590 */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
  plVar2 = local_48;
  if ((local_48 != (long *)0x0) &&
     (lVar3 = FUN_00757990(0xffffffffffffffff,local_48 + 1), lVar3 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  local_60 = PTR_DCDMessageViewComponentName_0099f378;
  puStack_58 = PTR_DCDMessageViewComponentName_0099f378;
  local_50 = 0;
  local_48 = (long *)0x0;
  local_40 = 
  PTR__ZN8facebook5react38concreteComponentDescriptorConstructorINS0_29SizingUtilComponentDescriptorINS0_20SizingUtilShadowNodeIXadsoKcL_ZNS0_27DCDMessageViewComponentNameEEEENS0_19DCDMessageViewPropsENS0_26DCDMessageViewEventEmitterEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENS9_14default_deleteISC_EEEERKNS0_29ComponentDescriptorParametersE_0099f320
  ;
                    /* try { // try from 008c2418 to 008c241f has its CatchHandler @ 008c258c */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
  plVar2 = local_48;
  if ((local_48 != (long *)0x0) &&
     (lVar3 = FUN_00757990(0xffffffffffffffff,local_48 + 1), lVar3 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  local_60 = PTR_DCDSystemMessageViewComponentName_0099f390;
  puStack_58 = PTR_DCDSystemMessageViewComponentName_0099f390;
  local_50 = 0;
  local_48 = (long *)0x0;
  local_40 = 
  PTR__ZN8facebook5react38concreteComponentDescriptorConstructorINS0_29SizingUtilComponentDescriptorINS0_20SizingUtilShadowNodeIXadsoKcL_ZNS0_33DCDSystemMessageViewComponentNameEEEENS0_25DCDSystemMessageViewPropsENS0_32DCDSystemMessageViewEventEmitterEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENS9_14default_deleteISC_EEEERKNS0_29ComponentDescriptorParametersE_0099f328
  ;
                    /* try { // try from 008c2470 to 008c2477 has its CatchHandler @ 008c2588 */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
  plVar2 = local_48;
  if ((local_48 != (long *)0x0) &&
     (lVar3 = FUN_00757990(0xffffffffffffffff,local_48 + 1), lVar3 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  local_60 = PTR_DCDAutoModerationSystemMessageViewComponentName_0099f3a8;
  puStack_58 = PTR_DCDAutoModerationSystemMessageViewComponentName_0099f3a8;
  local_50 = 0;
  local_48 = (long *)0x0;
  local_40 = 
  PTR__ZN8facebook5react38concreteComponentDescriptorConstructorINS0_29SizingUtilComponentDescriptorINS0_20SizingUtilShadowNodeIXadsoKcL_ZNS0_47DCDAutoModerationSystemMessageViewComponentNameEEEENS0_39DCDAutoModerationSystemMessageViewPropsENS0_46DCDAutoModerationSystemMessageViewEventEmitterEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENS9_14default_deleteISC_EEEERKNS0_29ComponentDescriptorParametersE_0099f330
  ;
                    /* try { // try from 008c24c8 to 008c24cf has its CatchHandler @ 008c2584 */
  ::facebook::react::ComponentDescriptorProviderRegistry::add
            ((ComponentDescriptorProvider *)*param_1);
  plVar2 = local_48;
  if ((local_48 != (long *)0x0) &&
     (lVar3 = FUN_00757990(0xffffffffffffffff,local_48 + 1), lVar3 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  local_70 = *param_1;
  local_68 = (long *)param_1[1];
  if (local_68 != (long *)0x0) {
    FUN_00757d00(1,local_68 + 1);
  }
                    /* try { // try from 008c2518 to 008c251f has its CatchHandler @ 008c2574 */
  autolinking_registerProviders(&local_70);
  plVar2 = local_68;
  if ((local_68 != (long *)0x0) &&
     (lVar3 = FUN_00757990(0xffffffffffffffff,local_68 + 1), lVar3 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008c25bc  FUN_008c25bc =====

void FUN_008c25bc(long param_1)

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


// ===== 008c260c  facebook::react::cxxModuleProvider =====

/* WARNING: Unknown calling convention: __rustcall */
/* facebook::react::cxxModuleProvider */

void __rustcall
facebook::react::cxxModuleProvider(undefined8 *param_1,ulong *param_2,undefined8 param_3)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  ulong local_70;
  ulong uStack_68;
  long *local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 uStack_39;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if ((*param_2 & 1) == 0) {
    uStack_68 = param_2[1];
    local_70 = *param_2;
    local_60 = (long *)param_2[2];
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_70,(char *)param_2[2],param_2[1]);
  }
  uVar1 = local_70 >> 1 & 0x7f;
  if ((local_70 & 1) != 0) {
    uVar1 = uStack_68;
  }
  if (uVar1 == 0xf) {
    plVar2 = (long *)((ulong)&local_70 | 1);
    if ((local_70 & 1) != 0) {
      plVar2 = local_60;
    }
    if (CONCAT17(s_Markdown_0036a2d8[0],s_Discord_0036a2d1) == *plVar2 &&
        CONCAT71(s_Markdown_0036a2d8._1_7_,s_Markdown_0036a2d8[0]) == *(long *)((long)plVar2 + 7)) {
                    /* try { // try from 008c26e4 to 008c26f3 has its CatchHandler @ 008c270c */
      FUN_00857cb0(&local_50,&uStack_39,param_3);
      param_1[1] = uStack_48;
      *param_1 = local_50;
      goto joined_r0x008c26b4;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
joined_r0x008c26b4:
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008c273c  facebook::react::javaModuleProvider =====

/* WARNING: Unknown calling convention: __rustcall */
/* facebook::react::javaModuleProvider */

void __rustcall facebook::react::javaModuleProvider(long *param_1,ulong *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong local_60;
  ulong uStack_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  ::facebook::react::facebook::react::FBReactNativeSpec_ModuleProvider(param_1);
  if (*param_1 != 0) goto LAB_008c2838;
  plVar3 = (long *)param_1[1];
  if ((plVar3 == (long *)0x0) || (lVar2 = FUN_00757990(0xffffffffffffffff,plVar3 + 1), lVar2 != 0))
  {
    if ((*param_2 & 1) == 0) goto LAB_008c279c;
LAB_008c27d0:
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    __init_copy_ctor_external
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_60,(char *)param_2[2],param_2[1]);
  }
  else {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    std::__ndk1::__shared_weak_count::__release_weak();
    if ((*param_2 & 1) != 0) goto LAB_008c27d0;
LAB_008c279c:
    uStack_58 = param_2[1];
    local_60 = *param_2;
    local_50 = (void *)param_2[2];
  }
                    /* try { // try from 008c27dc to 008c27eb has its CatchHandler @ 008c2860 */
  autolinking_ModuleProvider(param_1,&local_60,param_3);
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*param_1 == 0) {
    plVar3 = (long *)param_1[1];
    if ((plVar3 != (long *)0x0) && (lVar2 = FUN_00757990(0xffffffffffffffff,plVar3 + 1), lVar2 == 0)
       ) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
    *param_1 = 0;
    param_1[1] = 0;
  }
LAB_008c2838:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008c2890  JNI_OnLoad =====

undefined4 JNI_OnLoad(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined ***pppuVar3;
  long lVar4;
  undefined **local_60 [4];
  long *local_40;
  long local_28;
  
  local_40 = (long *)local_60;
  pppuVar3 = local_60;
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_60[0] = &PTR_FUN_0099d4a0;
  uVar2 = facebook::jni::facebook::jni::initialize(param_1,local_60);
  if ((undefined ***)local_40 == local_60) {
    lVar4 = 4;
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_008c28fc;
    lVar4 = 5;
    pppuVar3 = (undefined ***)local_40;
  }
  (**(code **)((long)*pppuVar3 + lVar4 * 8))(pppuVar3);
LAB_008c28fc:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008c2924  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_29SizingUtilComponentDescriptorINS0_20SizingUtilShadowNodeIXadsoKcL_ZNS0_38SelectActionComponentViewComponentNameEEEENS0_30SelectActionComponentViewPropsENS0_37SelectActionComponentViewEventEmitterEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENS9_14default_deleteISC_EEEERKNS0_29ComponentDescriptorParametersE =====

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_29SizingUtilComponentDescriptorINS0_20SizingUtilShadowNodeIXadsoKcL_ZNS0_38SelectActionComponentViewComponentNameEEEENS0_30SelectActionComponentViewPropsENS0_37SelectActionComponentViewEventEmitterEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENS9_14default_deleteISC_EEEERKNS0_29ComponentDescriptorParametersE
               (undefined8 *param_1,ComponentDescriptorParameters *param_2)

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
                    /* try { // try from 008c2968 to 008c2973 has its CatchHandler @ 008c29ec */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_90);
  *(undefined ***)this = &PTR_FUN_0099c0e0;
  FUN_007add28(this + 0x38);
  *(undefined ***)this = &PTR_FUN_0099c038;
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
  *param_1 = this;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008c2a1c  FUN_008c2a1c =====

void FUN_008c2a1c(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 008c2a40  FUN_008c2a40 =====

undefined * FUN_008c2a40(void)

{
  return PTR_SelectActionComponentViewComponentName_0099e080;
}


// ===== 008c2a4c  FUN_008c2a4c =====

undefined * FUN_008c2a4c(void)

{
  return PTR_SelectActionComponentViewComponentName_0099e080;
}


// ===== 008c2a58  FUN_008c2a58 =====

undefined8 FUN_008c2a58(void)

{
  return 0x61;
}


// ===== 008c2a60  FUN_008c2a60 =====

void FUN_008c2a60(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

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
  *puVar6 = &PTR_FUN_0099c168;
                    /* try { // try from 008c2acc to 008c2adb has its CatchHandler @ 008c2bc0 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4,uVar5);
  lVar8 = puVar6[4];
  puVar6[3] = &PTR_FUN_0099c298;
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
  puVar6[3] = &PTR_FUN_0099c1b8;
                    /* try { // try from 008c2b74 to 008c2b7f has its CatchHandler @ 008c2bb0 */
  (**(code **)(lVar9 + 0x60))(param_2,pYVar1);
  *param_1 = pYVar1;
  param_1[1] = puVar6;
  if (*(long *)(lVar4 + 0x28) != lVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 008c2bf0  FUN_008c2bf0 =====

void FUN_008c2bf0(undefined8 *param_1,long *param_2,ShadowNode *param_3,ShadowNodeFragment *param_4)

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
  *plVar8 = (long)&PTR_FUN_0099c168;
                    /* try { // try from 008c2c48 to 008c2c57 has its CatchHandler @ 008c2da4 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4);
  lVar9 = plVar8[4];
  plVar8[3] = (long)&PTR_FUN_0099c298;
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
  plVar8[3] = (long)&PTR_FUN_0099c1b8;
  *(uint *)((long)plVar8 + 0x6c) =
       uVar3 & 0xfffff000 |
       uVar3 & 0x7f8 | uVar2 | (uint)((cVar4 != '\0' || cVar5 != '\0') || cVar6 != '\0') << 0xb;
  local_68 = pYVar1;
  local_60 = plVar8;
                    /* try { // try from 008c2ce8 to 008c2cf7 has its CatchHandler @ 008c2dbc */
  facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::
  completeClone(pYVar1,param_3,param_4);
  local_78 = pYVar1;
  local_70 = plVar8;
  FUN_00757d00(1,plVar8 + 1);
                    /* try { // try from 008c2d08 to 008c2d17 has its CatchHandler @ 008c2d94 */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_78);
  plVar8 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar9 = FUN_00757990(0xffffffffffffffff,local_70 + 1), lVar9 == 0)) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pYVar1 = local_68;
                    /* try { // try from 008c2d54 to 008c2d5f has its CatchHandler @ 008c2dbc */
  (**(code **)(*param_2 + 0x60))(param_2,local_68);
  *param_1 = pYVar1;
  param_1[1] = local_60;
  if (*(long *)(lVar7 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 008c2de4  FUN_008c2de4 =====

void FUN_008c2de4(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::appendChild
            (*param_2,param_3);
  return;
}


// ===== 008c2df0  FUN_008c2df0 =====

void FUN_008c2df0(undefined8 *param_1,long param_2,PropsParserContext *param_3,long *param_4,
                 RawProps *param_5)

{
  SelectActionComponentViewProps *this;
  uint uVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  char *pcVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  char *pcVar10;
  dynamic *pdVar11;
  long lVar12;
  SelectActionComponentViewProps *pSVar13;
  undefined1 uStack_d1;
  dynamic local_d0 [32];
  dynamic *local_b0;
  uint local_a0;
  int local_98 [6];
  long *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((*param_4 == 0) && (uVar8 = facebook::react::RawProps::isEmpty(), (uVar8 & 1) != 0)) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_38SelectActionComponentViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_30SelectActionComponentViewPropsENS0_37SelectActionComponentViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f340
         & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_38SelectActionComponentViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_30SelectActionComponentViewPropsENS0_37SelectActionComponentViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f340
                                   ), iVar7 != 0)) {
                    /* try { // try from 008c3240 to 008c324f has its CatchHandler @ 008c327c */
      FUN_007af2bc(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_38SelectActionComponentViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_30SelectActionComponentViewPropsENS0_37SelectActionComponentViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f338
                   ,local_d0);
      __cxa_atexit(FUN_007af26c,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_38SelectActionComponentViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_30SelectActionComponentViewPropsENS0_37SelectActionComponentViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f338
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_38SelectActionComponentViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_30SelectActionComponentViewPropsENS0_37SelectActionComponentViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f340
                         );
    }
    lVar12 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_38SelectActionComponentViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_30SelectActionComponentViewPropsENS0_37SelectActionComponentViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f338
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_38SelectActionComponentViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_30SelectActionComponentViewPropsENS0_37SelectActionComponentViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f338
    ;
    param_1[1] = lVar12;
    if (lVar12 != 0) {
      FUN_00757d00(1,lVar12 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    pSVar13 = (SelectActionComponentViewProps *)*param_4;
    if (pSVar13 == (SelectActionComponentViewProps *)0x0) {
      if (((*
            PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_38SelectActionComponentViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_30SelectActionComponentViewPropsENS0_37SelectActionComponentViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f340
           & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_38SelectActionComponentViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_30SelectActionComponentViewPropsENS0_37SelectActionComponentViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f340
                                     ), iVar7 != 0)) {
                    /* try { // try from 008c31a8 to 008c31b7 has its CatchHandler @ 008c3294 */
        FUN_007af2bc(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_38SelectActionComponentViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_30SelectActionComponentViewPropsENS0_37SelectActionComponentViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f338
                     ,local_d0);
        __cxa_atexit(FUN_007af26c,
                     PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_38SelectActionComponentViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_30SelectActionComponentViewPropsENS0_37SelectActionComponentViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f338
                     ,&PTR_LOOP_008d5d30);
        __cxa_guard_release(
                           PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_38SelectActionComponentViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_30SelectActionComponentViewPropsENS0_37SelectActionComponentViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f340
                           );
      }
      pSVar13 = *(SelectActionComponentViewProps **)
                 PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_38SelectActionComponentViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_30SelectActionComponentViewPropsENS0_37SelectActionComponentViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f338
      ;
    }
    plVar9 = (long *)operator_new(0x710);
    puVar6 = PTR_DAT_0099dde8;
    this = (SelectActionComponentViewProps *)(plVar9 + 3);
    plVar9[1] = 0;
    plVar9[2] = 0;
    *plVar9 = (long)(puVar6 + 0x10);
                    /* try { // try from 008c2ed4 to 008c2ee7 has its CatchHandler @ 008c32fc */
    facebook::react::SelectActionComponentViewProps::SelectActionComponentViewProps
              (this,param_3,pSVar13,param_5);
                    /* try { // try from 008c2eec to 008c2eff has its CatchHandler @ 008c3314 */
    uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if ((((uVar8 & 1) == 0) ||
        (uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar8 & 1) == 0)) ||
       (uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
                enablePropsUpdateReconciliationAndroid(), (uVar8 & 1) == 0)) {
LAB_008c2f28:
      FUN_00757d00(1,plVar9 + 1);
      if (*param_4 == 0) {
        if (((*
              PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_38SelectActionComponentViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_30SelectActionComponentViewPropsENS0_37SelectActionComponentViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f340
             & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(
                                       PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_38SelectActionComponentViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_30SelectActionComponentViewPropsENS0_37SelectActionComponentViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f340
                                       ), iVar7 != 0)) {
                    /* try { // try from 008c31f4 to 008c3203 has its CatchHandler @ 008c3280 */
          FUN_007af2bc(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_38SelectActionComponentViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_30SelectActionComponentViewPropsENS0_37SelectActionComponentViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f338
                       ,local_d0);
          __cxa_atexit(FUN_007af26c,
                       PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_38SelectActionComponentViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_30SelectActionComponentViewPropsENS0_37SelectActionComponentViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f338
                       ,&PTR_LOOP_008d5d30);
          __cxa_guard_release(
                             PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_38SelectActionComponentViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_30SelectActionComponentViewPropsENS0_37SelectActionComponentViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f340
                             );
        }
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 008c2f90 to 008c2fa3 has its CatchHandler @ 008c32ac */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*(undefined8 *)
                         PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_38SelectActionComponentViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_30SelectActionComponentViewPropsENS0_37SelectActionComponentViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f338
                   ,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar12 = 4;
          pdVar11 = local_d0;
LAB_008c2fdc:
          (**(code **)(*(long *)pdVar11 + lVar12 * 8))();
        }
        else if (local_b0 != (dynamic *)0x0) {
          lVar12 = 5;
          pdVar11 = local_b0;
          goto LAB_008c2fdc;
        }
        if (plVar9 != (long *)0x0) goto LAB_008c2ff0;
      }
      else {
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 008c2f44 to 008c2f57 has its CatchHandler @ 008c32bc */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*param_4,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar12 = 4;
          pdVar11 = local_d0;
        }
        else {
          if (local_b0 == (dynamic *)0x0) goto LAB_008c2ff0;
          lVar12 = 5;
          pdVar11 = local_b0;
        }
        (**(code **)(*(long *)pdVar11 + lVar12 * 8))();
LAB_008c2ff0:
        lVar12 = FUN_00757990(0xffffffffffffffff,plVar9 + 1);
        if (lVar12 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 008c2f0c to 008c2f17 has its CatchHandler @ 008c32a8 */
      pcVar10 = (char *)(**(code **)(*(long *)this + 0x10))(this);
      iVar7 = strcmp(PTR_SelectActionComponentViewComponentName_0099e080,pcVar10);
      if (iVar7 != 0) goto LAB_008c2f28;
      bVar3 = false;
    }
                    /* try { // try from 008c301c to 008c301f has its CatchHandler @ 008c3314 */
    uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar8 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 008c302c to 008c3047 has its CatchHandler @ 008c32b8 */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(plVar9 + 7));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 008c3188 to 008c3197 has its CatchHandler @ 008c32b0 */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_008c3360;
      }
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (*(int *)(plVar4 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 008c3168 to 008c3177 has its CatchHandler @ 008c3320 */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_008c3360;
        }
        uVar1 = 0x811c9dc5;
        uVar8 = (ulong)(*(byte *)(plVar4 + 3) >> 1);
        pcVar5 = (char *)((long)plVar4 + 0x19);
        pcVar10 = (char *)((long)plVar4 + 0x19);
        if ((*(byte *)(plVar4 + 3) & 1) != 0) {
          uVar8 = plVar4[4];
          pcVar5 = (char *)plVar4[5];
          pcVar10 = (char *)plVar4[5];
        }
        for (; uVar8 != 0; uVar8 = uVar8 - 1) {
          uVar1 = (uVar1 ^ (int)*pcVar5) * 0x1000193;
          pcVar5 = pcVar5 + 1;
        }
                    /* try { // try from 008c30c8 to 008c30d3 has its CatchHandler @ 008c3328 */
        folly::dynamic::dynamic(local_d0,(dynamic *)(plVar4 + 8));
        local_a0 = 0;
                    /* try { // try from 008c30d8 to 008c30ef has its CatchHandler @ 008c332c */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (this,param_3,uVar1,pcVar10,local_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 008c3100 to 008c310b has its CatchHandler @ 008c331c */
          (*(code *)(&PTR_FUN_0099c148)[local_a0])(&uStack_d1,local_d0);
        }
      }
      folly::dynamic::folly::dynamic::destroy(local_98);
    }
    param_1[1] = plVar9;
    *param_1 = this;
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_008c3360:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008c3364  FUN_008c3364 =====

void FUN_008c3364(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
                    /* try { // try from 008c33b4 to 008c33bb has its CatchHandler @ 008c3470 */
  puVar3 = (undefined8 *)operator_new(0x50);
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_0099c330;
                    /* try { // try from 008c33d4 to 008c33df has its CatchHandler @ 008c3458 */
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


// ===== 008c3498  FUN_008c3498 =====

void FUN_008c3498(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
                    /* try { // try from 008c34d8 to 008c34e3 has its CatchHandler @ 008c35c4 */
  facebook::react::ShadowNodeFamily::getMostRecentState();
                    /* try { // try from 008c34e8 to 008c34ef has its CatchHandler @ 008c35b4 */
  puVar3 = (undefined8 *)operator_new(0x50);
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_0099c538;
                    /* try { // try from 008c3508 to 008c3513 has its CatchHandler @ 008c359c */
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


// ===== 008c35ec  FUN_008c35ec =====

void FUN_008c35ec(undefined8 *param_1,long param_2,long param_3)

{
  ShadowNodeFamily *pSVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  ShadowNodeFamily *local_98;
  long *local_90;
  long *local_88;
  long *local_80;
  undefined8 local_78;
  long local_70;
  long *local_68;
  long *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  FUN_0078a610(&local_68,&local_78,param_3 + 8,param_3 + 4);
                    /* try { // try from 008c3634 to 008c363b has its CatchHandler @ 008c3848 */
  plVar4 = (long *)operator_new(0x68);
  puVar3 = PTR_DAT_0099ddf0;
  plVar6 = plVar4 + 3;
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)(puVar3 + 0x10);
                    /* try { // try from 008c3658 to 008c3667 has its CatchHandler @ 008c3830 */
  FUN_007af548(plVar6,&local_68,param_2 + 8);
  local_88 = plVar6;
  local_80 = plVar4;
  if ((local_60 != (long *)0x0) &&
     (lVar5 = FUN_00757990(0xffffffffffffffff,local_60 + 1), lVar5 == 0)) {
    (**(code **)(*local_60 + 0x10))(local_60);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 008c369c to 008c36a3 has its CatchHandler @ 008c3820 */
  plVar6 = (long *)operator_new(0x1a0);
  puVar3 = PTR_DAT_0099dca0;
  pSVar1 = (ShadowNodeFamily *)(plVar6 + 4);
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)(puVar3 + 0x10);
  local_68 = local_88;
  local_60 = local_80;
  if (local_80 != (long *)0x0) {
    FUN_00757d00(1,local_80 + 1);
  }
  local_78 = *(undefined8 *)(param_2 + 8);
  local_70 = *(long *)(param_2 + 0x10);
  if (local_70 != 0) {
    FUN_00757d00(1,local_70 + 0x10);
  }
                    /* try { // try from 008c36f0 to 008c3707 has its CatchHandler @ 008c37f0 */
  facebook::react::ShadowNodeFamily::ShadowNodeFamily(pSVar1,param_3,&local_68,&local_78,param_2);
  if (local_70 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar4 = local_60;
  if ((local_60 != (long *)0x0) &&
     (lVar5 = FUN_00757990(0xffffffffffffffff,local_60 + 1), lVar5 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar4 = local_88;
  *param_1 = pSVar1;
  param_1[1] = plVar6;
  local_98 = pSVar1;
  local_90 = plVar6;
  FUN_00757d00(1,plVar6 + 2);
                    /* try { // try from 008c375c to 008c3767 has its CatchHandler @ 008c37d0 */
  facebook::react::EventEmitter::facebook::react::EventEmitter::setShadowNodeFamily
            (plVar4,&local_98);
  if (local_90 != (long *)0x0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar6 = local_80;
  if ((local_80 != (long *)0x0) &&
     (lVar5 = FUN_00757990(0xffffffffffffffff,local_80 + 1), lVar5 == 0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008c3870  FUN_008c3870 =====

void FUN_008c3870(undefined8 param_1,undefined8 param_2)

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
                    /* try { // try from 008c38e8 to 008c38ef has its CatchHandler @ 008c3960 */
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


// ===== 008c3988  FUN_008c3988 =====

void FUN_008c3988(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 008c39ac  FUN_008c39ac =====

void FUN_008c39ac(void)

{
  return;
}


// ===== 008c39b0  FUN_008c39b0 =====

void FUN_008c39b0(long param_1)

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


// ===== 008c3a00  FUN_008c3a00 =====

void FUN_008c3a00(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099c168;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008c3a10  FUN_008c3a10 =====

void FUN_008c3a10(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099c168;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008c3a40  FUN_008c3a40 =====

void FUN_008c3a40(long param_1)

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


// ===== 008c3b04  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008c3b08  FUN_008c3b08 =====

void FUN_008c3b08(long *param_1)

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


// ===== 008c3bc8  FUN_008c3bc8 =====

void FUN_008c3bc8(long param_1)

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


// ===== 008c3c30  FUN_008c3c30 =====

bool FUN_008c3c30(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 008c3c48  FUN_008c3c48 =====

bool FUN_008c3c48(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 008c3c60  FUN_008c3c60 =====

void FUN_008c3c60(long *param_1)

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


// ===== 008c3d20  FUN_008c3d20 =====

void FUN_008c3d20(long param_1)

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


// ===== 008c3d70  FUN_008c3d70 =====

void FUN_008c3d70(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099c330;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008c3d80  FUN_008c3d80 =====

void FUN_008c3d80(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099c330;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008c3db0  FUN_008c3db0 =====

void FUN_008c3db0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x008c3db8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 008c3dbc  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008c3dc0  FUN_008c3dc0 =====

/* WARNING: Removing unreachable block (ram,0x008c3e74) */
/* WARNING: Removing unreachable block (ram,0x008c3e84) */

State * FUN_008c3dc0(State *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long *plStack_48;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  plVar5 = (long *)param_2[1];
  uVar4 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = *param_3;
  lVar3 = param_3[1];
  if (lVar3 != 0) {
    FUN_00757d00(1,lVar3 + 0x10);
  }
                    /* try { // try from 008c3e14 to 008c3e23 has its CatchHandler @ 008c3ec4 */
  local_60 = uVar1;
  local_58 = lVar3;
  local_50 = uVar4;
  plStack_48 = plVar5;
  facebook::react::State::State(param_1,&local_50,&local_60);
  if (local_58 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar5 = plStack_48;
  if ((plStack_48 != (long *)0x0) &&
     (lVar3 = FUN_00757990(0xffffffffffffffff,plStack_48 + 1), lVar3 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *(undefined ***)param_1 = &PTR_FUN_0099c380;
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}


// ===== 008c3f04  FUN_008c3f04 =====

void FUN_008c3f04(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[4];
  *param_1 = (long)(PTR_DAT_0099e760 + 0x10);
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


// ===== 008c3f70  FUN_008c3f70 =====

void FUN_008c3f70(void)

{
  facebook::react::SizingUtilState::getDynamic();
  return;
}


// ===== 008c3f78  <EXTERNAL>::facebook::react::MapBufferBuilder::facebook::react::MapBufferBuilder::EMPTY =====

/* WARNING: Unknown calling convention: __rustcall */

void __rustcall facebook::react::MapBufferBuilder::facebook::react::MapBufferBuilder::EMPTY(void)

{
  (*(code *)PTR_EMPTY_009a0138)();
  return;
}


// ===== 008c3f7c  FUN_008c3f7c =====

void FUN_008c3f7c(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}


// ===== 008c3f84  FUN_008c3f84 =====

void FUN_008c3f84(long param_1,dynamic *param_2)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  long *plVar4;
  long *plVar5;
  undefined ***pppuVar6;
  undefined ****ppppuVar7;
  long lVar8;
  long lVar9;
  undefined1 uVar10;
  double dVar11;
  float fVar12;
  dynamic adStack_120 [48];
  undefined **local_f0;
  float local_e8;
  undefined1 local_e4;
  float local_e0;
  undefined1 local_dc;
  undefined ***local_d0;
  undefined **local_c0 [4];
  undefined ***local_a0 [2];
  long local_90;
  long *local_88;
  long local_80 [4];
  long *local_60;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  folly::dynamic::dynamic(adStack_120,param_2);
                    /* try { // try from 008c3fb8 to 008c40af has its CatchHandler @ 008c43a8 */
  piVar3 = (int *)folly::dynamic::get_ptr(adStack_120,"width","");
  if (piVar3 != (int *)0x0) {
    iVar1 = *piVar3;
    if (3 < iVar1) {
      if (iVar1 == 6) {
        dVar11 = (double)FUN_008111e4(piVar3 + 2);
      }
      else {
        if (iVar1 != 4) goto LAB_008c42f4;
        dVar11 = (double)FUN_008110a0(piVar3 + 2);
      }
LAB_008c4030:
      fVar12 = (float)dVar11;
      uVar10 = 1;
      goto LAB_008c4038;
    }
    if (iVar1 == 2) {
      dVar11 = (double)NEON_ucvtf((ulong)*(byte *)(piVar3 + 2));
      goto LAB_008c4030;
    }
    if (iVar1 == 3) {
      dVar11 = *(double *)(piVar3 + 2);
      goto LAB_008c4030;
    }
LAB_008c42f4:
    if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* try { // try from 008c4304 to 008c430f has its CatchHandler @ 008c43a8 */
                    /* WARNING: Subroutine does not return */
      FUN_00789f8c("int/double/bool/string");
    }
    goto LAB_008c43cc;
  }
  fVar12 = 0.0;
  uVar10 = 0;
LAB_008c4038:
  piVar3 = (int *)folly::dynamic::get_ptr(adStack_120,"height","");
  if (piVar3 == (int *)0x0) {
    local_e0 = 0.0;
    local_dc = 0;
  }
  else {
    iVar1 = *piVar3;
    if (iVar1 < 4) {
      if (iVar1 == 2) {
        dVar11 = (double)NEON_ucvtf((ulong)*(byte *)(piVar3 + 2));
      }
      else {
        if (iVar1 != 3) goto LAB_008c42f4;
        dVar11 = *(double *)(piVar3 + 2);
      }
    }
    else if (iVar1 == 6) {
      dVar11 = (double)FUN_008111e4(piVar3 + 2);
    }
    else {
      if (iVar1 != 4) goto LAB_008c42f4;
      dVar11 = (double)FUN_008110a0(piVar3 + 2);
    }
    local_e0 = (float)dVar11;
    local_dc = 1;
  }
  local_f0 = &PTR_FUN_0099c458;
  local_e8 = fVar12;
  local_e4 = uVar10;
  local_d0 = &local_f0;
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (plVar4 = (long *)std::__ndk1::__shared_weak_count::lock(), plVar4 != (long *)0x0)) {
    lVar9 = *(long *)(param_1 + 8);
    if (lVar9 != 0) {
      local_90 = lVar9;
      local_88 = plVar4;
      FUN_00757d00(1,plVar4 + 1);
      local_a0[0] = local_d0;
      if (local_d0 != (undefined ***)0x0) {
        if (local_d0 == &local_f0) {
          local_a0[0] = local_c0;
          (*(code *)local_f0[3])(&local_f0,local_c0);
        }
        else {
                    /* try { // try from 008c412c to 008c4153 has its CatchHandler @ 008c4314 */
          local_a0[0] = (undefined ***)(*(code *)(*local_d0)[2])();
        }
      }
      local_60 = (long *)0x0;
                    /* try { // try from 008c4158 to 008c415f has its CatchHandler @ 008c432c */
      plVar5 = (long *)operator_new(0x40);
      *plVar5 = (long)&PTR_FUN_0099c3d8;
      if (local_a0[0] == (undefined ***)0x0) {
        ppppuVar7 = (undefined ****)(plVar5 + 6);
LAB_008c4194:
        *ppppuVar7 = (undefined ***)0x0;
      }
      else {
        if (local_a0[0] != local_c0) {
          ppppuVar7 = local_a0;
          plVar5[6] = (long)local_a0[0];
          goto LAB_008c4194;
        }
        plVar5[6] = (long)(plVar5 + 2);
                    /* try { // try from 008c41a8 to 008c41b7 has its CatchHandler @ 008c4310 */
        (*(code *)local_c0[0][3])(local_c0);
      }
      local_60 = plVar5;
      if (local_a0[0] == local_c0) {
        lVar8 = 4;
        pppuVar6 = local_c0;
LAB_008c41e0:
        (*(code *)(*pppuVar6)[lVar8])(pppuVar6);
      }
      else if (local_a0[0] != (undefined ***)0x0) {
        lVar8 = 5;
        pppuVar6 = local_a0[0];
        goto LAB_008c41e0;
      }
                    /* try { // try from 008c41f0 to 008c41ff has its CatchHandler @ 008c431c */
      facebook::react::ShadowNodeFamily::facebook::react::ShadowNodeFamily::dispatchRawState
                (lVar9,&local_90,0);
      plVar5 = local_80;
      if (local_60 == plVar5) {
        lVar9 = 4;
LAB_008c4228:
        (**(code **)(*plVar5 + lVar9 * 8))();
      }
      else if (local_60 != (long *)0x0) {
        lVar9 = 5;
        plVar5 = local_60;
        goto LAB_008c4228;
      }
      plVar5 = local_88;
      if ((local_88 != (long *)0x0) &&
         (lVar9 = FUN_00757990(0xffffffffffffffff,local_88 + 1), lVar9 == 0)) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        std::__ndk1::__shared_weak_count::__release_weak();
      }
      if (plVar4 == (long *)0x0) goto LAB_008c4294;
    }
    lVar9 = FUN_00757990(0xffffffffffffffff,plVar4 + 1);
    if (lVar9 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      std::__ndk1::__shared_weak_count::__release_weak();
    }
  }
LAB_008c4294:
  if (local_d0 == &local_f0) {
    lVar9 = 4;
    pppuVar6 = &local_f0;
LAB_008c42b4:
    (*(code *)(*pppuVar6)[lVar9])();
  }
  else if (local_d0 != (undefined ***)0x0) {
    lVar9 = 5;
    pppuVar6 = local_d0;
    goto LAB_008c42b4;
  }
  folly::dynamic::folly::dynamic::destroy(adStack_120);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
LAB_008c43cc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008c43d0  FUN_008c43d0 =====

void FUN_008c43d0(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)param_1[6];
  plVar2 = param_1 + 2;
  *param_1 = &PTR_FUN_0099c3d8;
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
                    /* WARNING: Could not recover jumptable at 0x008c440c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + lVar3 * 8))();
  return;
}


// ===== 008c4414  FUN_008c4414 =====

void FUN_008c4414(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)param_1[6];
  plVar2 = param_1 + 2;
  *param_1 = &PTR_FUN_0099c3d8;
  if (plVar1 == plVar2) {
    lVar3 = 4;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_008c4460;
    lVar3 = 5;
    plVar2 = plVar1;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_008c4460:
  operator_delete(param_1);
  return;
}


// ===== 008c4470  FUN_008c4470 =====

undefined8 * FUN_008c4470(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  
  puVar1 = (undefined8 *)operator_new(0x40);
  plVar2 = *(long **)(param_1 + 0x30);
  *puVar1 = &PTR_FUN_0099c3d8;
  if (plVar2 != (long *)0x0) {
    if (plVar2 == (long *)(param_1 + 0x10)) {
      lVar3 = *plVar2;
      puVar1[6] = puVar1 + 2;
      (**(code **)(lVar3 + 0x18))();
      return puVar1;
    }
                    /* try { // try from 008c44b8 to 008c44d3 has its CatchHandler @ 008c44e4 */
    plVar2 = (long *)(**(code **)(*plVar2 + 0x10))();
  }
  puVar1[6] = plVar2;
  return puVar1;
}


// ===== 008c44f8  FUN_008c44f8 =====

void FUN_008c44f8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x30);
  *param_2 = &PTR_FUN_0099c3d8;
  if (plVar2 == (long *)0x0) {
    param_2[6] = 0;
  }
  else {
    if (plVar2 == (long *)(param_1 + 0x10)) {
      param_2[6] = param_2 + 2;
                    /* WARNING: Could not recover jumptable at 0x008c4568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x30) + 0x18))();
      return;
    }
    uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
    param_2[6] = uVar1;
  }
  return;
}


// ===== 008c456c  FUN_008c456c =====

void FUN_008c456c(long param_1)

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
                    /* WARNING: Could not recover jumptable at 0x008c459c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + lVar3 * 8))();
  return;
}


// ===== 008c45a4  FUN_008c45a4 =====

void FUN_008c45a4(void *param_1)

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
    if (plVar1 == (long *)0x0) goto LAB_008c45e4;
    lVar3 = 5;
    plVar2 = plVar1;
  }
  (**(code **)(*plVar2 + lVar3 * 8))();
LAB_008c45e4:
  operator_delete(param_1);
  return;
}


// ===== 008c45f4  FUN_008c45f4 =====

void FUN_008c45f4(long param_1,undefined8 *param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x30);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x008c4608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))(plVar1,*param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00785754();
}


// ===== 008c4618  FUN_008c4618 =====

long FUN_008c4618(long param_1,long param_2)

{
  param_1 = param_1 + 0x10;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_0099f348) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 008c4634  FUN_008c4634 =====

undefined * FUN_008c4634(void)

{
  return PTR_typeinfo_0099f350;
}


// ===== 008c4640  FUN_008c4640 =====

void FUN_008c4640(void)

{
  return;
}


// ===== 008c4644  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008c4648  FUN_008c4648 =====

void FUN_008c4648(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_0099c458;
  puVar1[2] = uVar3;
  puVar1[1] = uVar2;
  return;
}


// ===== 008c4680  FUN_008c4680 =====

void FUN_008c4680(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_0099c458;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}


// ===== 008c4698  FUN_008c4698 =====

void FUN_008c4698(void)

{
  return;
}


// ===== 008c469c  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008c46a0  FUN_008c46a0 =====

void FUN_008c46a0(long *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 8);
  *puVar1 = &PTR_FUN_0099c4d8;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[4] = uVar3;
  puVar1[3] = uVar2;
  *param_1 = (long)(puVar1 + 3);
  param_1[1] = (long)puVar1;
  return;
}


// ===== 008c46e8  FUN_008c46e8 =====

long FUN_008c46e8(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(undefined **)(param_2 + 8) != PTR_typeinfo_name_0099f358) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 008c4704  FUN_008c4704 =====

undefined * FUN_008c4704(void)

{
  return PTR_typeinfo_0099f360;
}


// ===== 008c4710  FUN_008c4710 =====

void FUN_008c4710(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099c4d8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008c4720  FUN_008c4720 =====

void FUN_008c4720(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099c4d8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008c4750  FUN_008c4750 =====

void FUN_008c4750(void)

{
  return;
}


// ===== 008c4754  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008c4758  FUN_008c4758 =====

void FUN_008c4758(long param_1)

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


// ===== 008c47a8  FUN_008c47a8 =====

void FUN_008c47a8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099c538;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008c47b8  FUN_008c47b8 =====

void FUN_008c47b8(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099c538;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008c47e8  FUN_008c47e8 =====

void FUN_008c47e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x008c47f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 008c47f4  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008c47f8  FUN_008c47f8 =====

/* WARNING: Removing unreachable block (ram,0x008c4878) */
/* WARNING: Removing unreachable block (ram,0x008c4888) */

State * FUN_008c47f8(State *param_1,undefined8 *param_2)

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
                    /* try { // try from 008c482c to 008c4833 has its CatchHandler @ 008c48c8 */
  facebook::react::State::State(param_1,&local_50);
  plVar2 = plStack_48;
  if ((plStack_48 != (long *)0x0) &&
     (lVar3 = FUN_00757990(0xffffffffffffffff,plStack_48 + 1), lVar3 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  *(undefined ***)param_1 = &PTR_FUN_0099c380;
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}


// ===== 008c48f8  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_29SizingUtilComponentDescriptorINS0_20SizingUtilShadowNodeIXadsoKcL_ZNS0_37TextDisplayComponentViewComponentNameEEEENS0_29TextDisplayComponentViewPropsENS0_36TextDisplayComponentViewEventEmitterEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENS9_14default_deleteISC_EEEERKNS0_29ComponentDescriptorParametersE =====

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_29SizingUtilComponentDescriptorINS0_20SizingUtilShadowNodeIXadsoKcL_ZNS0_37TextDisplayComponentViewComponentNameEEEENS0_29TextDisplayComponentViewPropsENS0_36TextDisplayComponentViewEventEmitterEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENS9_14default_deleteISC_EEEERKNS0_29ComponentDescriptorParametersE
               (undefined8 *param_1,ComponentDescriptorParameters *param_2)

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
                    /* try { // try from 008c493c to 008c4947 has its CatchHandler @ 008c49c0 */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_90);
  *(undefined ***)this = &PTR_FUN_0099c630;
  FUN_007b344c(this + 0x38);
  *(undefined ***)this = &PTR_FUN_0099c588;
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
  *param_1 = this;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008c49f0  FUN_008c49f0 =====

void FUN_008c49f0(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 008c4a14  FUN_008c4a14 =====

undefined * FUN_008c4a14(void)

{
  return PTR_TextDisplayComponentViewComponentName_0099e0c8;
}


// ===== 008c4a20  FUN_008c4a20 =====

undefined * FUN_008c4a20(void)

{
  return PTR_TextDisplayComponentViewComponentName_0099e0c8;
}


// ===== 008c4a2c  FUN_008c4a2c =====

undefined8 FUN_008c4a2c(void)

{
  return 0x61;
}


// ===== 008c4a34  FUN_008c4a34 =====

void FUN_008c4a34(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

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
  *puVar6 = &PTR_FUN_0099c6a8;
                    /* try { // try from 008c4aa0 to 008c4aaf has its CatchHandler @ 008c4b94 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4,uVar5);
  lVar8 = puVar6[4];
  puVar6[3] = &PTR_FUN_0099c7d8;
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
  puVar6[3] = &PTR_FUN_0099c6f8;
                    /* try { // try from 008c4b48 to 008c4b53 has its CatchHandler @ 008c4b84 */
  (**(code **)(lVar9 + 0x60))(param_2,pYVar1);
  *param_1 = pYVar1;
  param_1[1] = puVar6;
  if (*(long *)(lVar4 + 0x28) != lVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 008c4bc4  FUN_008c4bc4 =====

void FUN_008c4bc4(undefined8 *param_1,long *param_2,ShadowNode *param_3,ShadowNodeFragment *param_4)

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
  *plVar8 = (long)&PTR_FUN_0099c6a8;
                    /* try { // try from 008c4c1c to 008c4c2b has its CatchHandler @ 008c4d78 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4);
  lVar9 = plVar8[4];
  plVar8[3] = (long)&PTR_FUN_0099c7d8;
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
  plVar8[3] = (long)&PTR_FUN_0099c6f8;
  *(uint *)((long)plVar8 + 0x6c) =
       uVar3 & 0xfffff000 |
       uVar3 & 0x7f8 | uVar2 | (uint)((cVar4 != '\0' || cVar5 != '\0') || cVar6 != '\0') << 0xb;
  local_68 = pYVar1;
  local_60 = plVar8;
                    /* try { // try from 008c4cbc to 008c4ccb has its CatchHandler @ 008c4d90 */
  facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::
  completeClone(pYVar1,param_3,param_4);
  local_78 = pYVar1;
  local_70 = plVar8;
  FUN_00757d00(1,plVar8 + 1);
                    /* try { // try from 008c4cdc to 008c4ceb has its CatchHandler @ 008c4d68 */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_78);
  plVar8 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar9 = FUN_00757990(0xffffffffffffffff,local_70 + 1), lVar9 == 0)) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pYVar1 = local_68;
                    /* try { // try from 008c4d28 to 008c4d33 has its CatchHandler @ 008c4d90 */
  (**(code **)(*param_2 + 0x60))(param_2,local_68);
  *param_1 = pYVar1;
  param_1[1] = local_60;
  if (*(long *)(lVar7 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 008c4db8  FUN_008c4db8 =====

void FUN_008c4db8(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::appendChild
            (*param_2,param_3);
  return;
}


// ===== 008c4dc4  FUN_008c4dc4 =====

void FUN_008c4dc4(undefined8 *param_1,long param_2,PropsParserContext *param_3,long *param_4,
                 RawProps *param_5)

{
  TextDisplayComponentViewProps *this;
  uint uVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  char *pcVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  char *pcVar10;
  dynamic *pdVar11;
  long lVar12;
  TextDisplayComponentViewProps *pTVar13;
  undefined1 uStack_d1;
  dynamic local_d0 [32];
  dynamic *local_b0;
  uint local_a0;
  int local_98 [6];
  long *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((*param_4 == 0) && (uVar8 = facebook::react::RawProps::isEmpty(), (uVar8 & 1) != 0)) {
    if (((*
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37TextDisplayComponentViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29TextDisplayComponentViewPropsENS0_36TextDisplayComponentViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f370
         & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37TextDisplayComponentViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29TextDisplayComponentViewPropsENS0_36TextDisplayComponentViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f370
                                   ), iVar7 != 0)) {
                    /* try { // try from 008c5214 to 008c5223 has its CatchHandler @ 008c5250 */
      FUN_007b4a0c(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37TextDisplayComponentViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29TextDisplayComponentViewPropsENS0_36TextDisplayComponentViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f368
                   ,local_d0);
      __cxa_atexit(FUN_007b49bc,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37TextDisplayComponentViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29TextDisplayComponentViewPropsENS0_36TextDisplayComponentViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f368
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37TextDisplayComponentViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29TextDisplayComponentViewPropsENS0_36TextDisplayComponentViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f370
                         );
    }
    lVar12 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37TextDisplayComponentViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29TextDisplayComponentViewPropsENS0_36TextDisplayComponentViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f368
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37TextDisplayComponentViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29TextDisplayComponentViewPropsENS0_36TextDisplayComponentViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f368
    ;
    param_1[1] = lVar12;
    if (lVar12 != 0) {
      FUN_00757d00(1,lVar12 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    pTVar13 = (TextDisplayComponentViewProps *)*param_4;
    if (pTVar13 == (TextDisplayComponentViewProps *)0x0) {
      if (((*
            PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37TextDisplayComponentViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29TextDisplayComponentViewPropsENS0_36TextDisplayComponentViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f370
           & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37TextDisplayComponentViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29TextDisplayComponentViewPropsENS0_36TextDisplayComponentViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f370
                                     ), iVar7 != 0)) {
                    /* try { // try from 008c517c to 008c518b has its CatchHandler @ 008c5268 */
        FUN_007b4a0c(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37TextDisplayComponentViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29TextDisplayComponentViewPropsENS0_36TextDisplayComponentViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f368
                     ,local_d0);
        __cxa_atexit(FUN_007b49bc,
                     PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37TextDisplayComponentViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29TextDisplayComponentViewPropsENS0_36TextDisplayComponentViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f368
                     ,&PTR_LOOP_008d5d30);
        __cxa_guard_release(
                           PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37TextDisplayComponentViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29TextDisplayComponentViewPropsENS0_36TextDisplayComponentViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f370
                           );
      }
      pTVar13 = *(TextDisplayComponentViewProps **)
                 PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37TextDisplayComponentViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29TextDisplayComponentViewPropsENS0_36TextDisplayComponentViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f368
      ;
    }
    plVar9 = (long *)operator_new(0x730);
    puVar6 = PTR_DAT_0099de28;
    this = (TextDisplayComponentViewProps *)(plVar9 + 3);
    plVar9[1] = 0;
    plVar9[2] = 0;
    *plVar9 = (long)(puVar6 + 0x10);
                    /* try { // try from 008c4ea8 to 008c4ebb has its CatchHandler @ 008c52d0 */
    facebook::react::TextDisplayComponentViewProps::TextDisplayComponentViewProps
              (this,param_3,pTVar13,param_5);
                    /* try { // try from 008c4ec0 to 008c4ed3 has its CatchHandler @ 008c52e8 */
    uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if ((((uVar8 & 1) == 0) ||
        (uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar8 & 1) == 0)) ||
       (uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
                enablePropsUpdateReconciliationAndroid(), (uVar8 & 1) == 0)) {
LAB_008c4efc:
      FUN_00757d00(1,plVar9 + 1);
      if (*param_4 == 0) {
        if (((*
              PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37TextDisplayComponentViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29TextDisplayComponentViewPropsENS0_36TextDisplayComponentViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f370
             & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(
                                       PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37TextDisplayComponentViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29TextDisplayComponentViewPropsENS0_36TextDisplayComponentViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f370
                                       ), iVar7 != 0)) {
                    /* try { // try from 008c51c8 to 008c51d7 has its CatchHandler @ 008c5254 */
          FUN_007b4a0c(PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37TextDisplayComponentViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29TextDisplayComponentViewPropsENS0_36TextDisplayComponentViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f368
                       ,local_d0);
          __cxa_atexit(FUN_007b49bc,
                       PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37TextDisplayComponentViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29TextDisplayComponentViewPropsENS0_36TextDisplayComponentViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f368
                       ,&PTR_LOOP_008d5d30);
          __cxa_guard_release(
                             PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37TextDisplayComponentViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29TextDisplayComponentViewPropsENS0_36TextDisplayComponentViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f370
                             );
        }
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 008c4f64 to 008c4f77 has its CatchHandler @ 008c5280 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*(undefined8 *)
                         PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_37TextDisplayComponentViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_29TextDisplayComponentViewPropsENS0_36TextDisplayComponentViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f368
                   ,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar12 = 4;
          pdVar11 = local_d0;
LAB_008c4fb0:
          (**(code **)(*(long *)pdVar11 + lVar12 * 8))();
        }
        else if (local_b0 != (dynamic *)0x0) {
          lVar12 = 5;
          pdVar11 = local_b0;
          goto LAB_008c4fb0;
        }
        if (plVar9 != (long *)0x0) goto LAB_008c4fc4;
      }
      else {
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 008c4f18 to 008c4f2b has its CatchHandler @ 008c5290 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*param_4,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar12 = 4;
          pdVar11 = local_d0;
        }
        else {
          if (local_b0 == (dynamic *)0x0) goto LAB_008c4fc4;
          lVar12 = 5;
          pdVar11 = local_b0;
        }
        (**(code **)(*(long *)pdVar11 + lVar12 * 8))();
LAB_008c4fc4:
        lVar12 = FUN_00757990(0xffffffffffffffff,plVar9 + 1);
        if (lVar12 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 008c4ee0 to 008c4eeb has its CatchHandler @ 008c527c */
      pcVar10 = (char *)(**(code **)(*(long *)this + 0x10))(this);
      iVar7 = strcmp(PTR_TextDisplayComponentViewComponentName_0099e0c8,pcVar10);
      if (iVar7 != 0) goto LAB_008c4efc;
      bVar3 = false;
    }
                    /* try { // try from 008c4ff0 to 008c4ff3 has its CatchHandler @ 008c52e8 */
    uVar8 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar8 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 008c5000 to 008c501b has its CatchHandler @ 008c528c */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(plVar9 + 7));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 008c515c to 008c516b has its CatchHandler @ 008c5284 */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_008c5334;
      }
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (*(int *)(plVar4 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 008c513c to 008c514b has its CatchHandler @ 008c52f4 */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_008c5334;
        }
        uVar1 = 0x811c9dc5;
        uVar8 = (ulong)(*(byte *)(plVar4 + 3) >> 1);
        pcVar5 = (char *)((long)plVar4 + 0x19);
        pcVar10 = (char *)((long)plVar4 + 0x19);
        if ((*(byte *)(plVar4 + 3) & 1) != 0) {
          uVar8 = plVar4[4];
          pcVar5 = (char *)plVar4[5];
          pcVar10 = (char *)plVar4[5];
        }
        for (; uVar8 != 0; uVar8 = uVar8 - 1) {
          uVar1 = (uVar1 ^ (int)*pcVar5) * 0x1000193;
          pcVar5 = pcVar5 + 1;
        }
                    /* try { // try from 008c509c to 008c50a7 has its CatchHandler @ 008c52fc */
        folly::dynamic::dynamic(local_d0,(dynamic *)(plVar4 + 8));
        local_a0 = 0;
                    /* try { // try from 008c50ac to 008c50c3 has its CatchHandler @ 008c5300 */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (this,param_3,uVar1,pcVar10,local_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 008c50d4 to 008c50df has its CatchHandler @ 008c52f0 */
          (*(code *)(&PTR_FUN_0099c148)[local_a0])(&uStack_d1,local_d0);
        }
      }
      folly::dynamic::folly::dynamic::destroy(local_98);
    }
    param_1[1] = plVar9;
    *param_1 = this;
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_008c5334:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008c5338  FUN_008c5338 =====

void FUN_008c5338(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
                    /* try { // try from 008c5388 to 008c538f has its CatchHandler @ 008c5444 */
  puVar3 = (undefined8 *)operator_new(0x50);
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_0099c330;
                    /* try { // try from 008c53a8 to 008c53b3 has its CatchHandler @ 008c542c */
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


// ===== 008c546c  FUN_008c546c =====

void FUN_008c546c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
                    /* try { // try from 008c54ac to 008c54b7 has its CatchHandler @ 008c5598 */
  facebook::react::ShadowNodeFamily::getMostRecentState();
                    /* try { // try from 008c54bc to 008c54c3 has its CatchHandler @ 008c5588 */
  puVar3 = (undefined8 *)operator_new(0x50);
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_0099c538;
                    /* try { // try from 008c54dc to 008c54e7 has its CatchHandler @ 008c5570 */
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


// ===== 008c55c0  FUN_008c55c0 =====

void FUN_008c55c0(undefined8 *param_1,long param_2,long param_3)

{
  ShadowNodeFamily *pSVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  ShadowNodeFamily *local_98;
  long *local_90;
  long *local_88;
  long *local_80;
  undefined8 local_78;
  long local_70;
  long *local_68;
  long *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  FUN_0078a610(&local_68,&local_78,param_3 + 8,param_3 + 4);
                    /* try { // try from 008c5608 to 008c560f has its CatchHandler @ 008c581c */
  plVar4 = (long *)operator_new(0x68);
  puVar3 = PTR_DAT_0099de30;
  plVar6 = plVar4 + 3;
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)(puVar3 + 0x10);
                    /* try { // try from 008c562c to 008c563b has its CatchHandler @ 008c5804 */
  FUN_007b4cc4(plVar6,&local_68,param_2 + 8);
  local_88 = plVar6;
  local_80 = plVar4;
  if ((local_60 != (long *)0x0) &&
     (lVar5 = FUN_00757990(0xffffffffffffffff,local_60 + 1), lVar5 == 0)) {
    (**(code **)(*local_60 + 0x10))(local_60);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
                    /* try { // try from 008c5670 to 008c5677 has its CatchHandler @ 008c57f4 */
  plVar6 = (long *)operator_new(0x1a0);
  puVar3 = PTR_DAT_0099dca0;
  pSVar1 = (ShadowNodeFamily *)(plVar6 + 4);
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (long)(puVar3 + 0x10);
  local_68 = local_88;
  local_60 = local_80;
  if (local_80 != (long *)0x0) {
    FUN_00757d00(1,local_80 + 1);
  }
  local_78 = *(undefined8 *)(param_2 + 8);
  local_70 = *(long *)(param_2 + 0x10);
  if (local_70 != 0) {
    FUN_00757d00(1,local_70 + 0x10);
  }
                    /* try { // try from 008c56c4 to 008c56db has its CatchHandler @ 008c57c4 */
  facebook::react::ShadowNodeFamily::ShadowNodeFamily(pSVar1,param_3,&local_68,&local_78,param_2);
  if (local_70 != 0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar4 = local_60;
  if ((local_60 != (long *)0x0) &&
     (lVar5 = FUN_00757990(0xffffffffffffffff,local_60 + 1), lVar5 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar4 = local_88;
  *param_1 = pSVar1;
  param_1[1] = plVar6;
  local_98 = pSVar1;
  local_90 = plVar6;
  FUN_00757d00(1,plVar6 + 2);
                    /* try { // try from 008c5730 to 008c573b has its CatchHandler @ 008c57a4 */
  facebook::react::EventEmitter::facebook::react::EventEmitter::setShadowNodeFamily
            (plVar4,&local_98);
  if (local_90 != (long *)0x0) {
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  plVar6 = local_80;
  if ((local_80 != (long *)0x0) &&
     (lVar5 = FUN_00757990(0xffffffffffffffff,local_80 + 1), lVar5 == 0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008c5844  FUN_008c5844 =====

void FUN_008c5844(undefined8 param_1,undefined8 param_2)

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
                    /* try { // try from 008c58bc to 008c58c3 has its CatchHandler @ 008c5934 */
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


// ===== 008c595c  FUN_008c595c =====

void FUN_008c595c(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 008c5980  FUN_008c5980 =====

void FUN_008c5980(void)

{
  return;
}


// ===== 008c5984  FUN_008c5984 =====

void FUN_008c5984(long param_1)

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


// ===== 008c59d4  FUN_008c59d4 =====

void FUN_008c59d4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099c6a8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008c59e4  FUN_008c59e4 =====

void FUN_008c59e4(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099c6a8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008c5a14  FUN_008c5a14 =====

void FUN_008c5a14(long param_1)

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


// ===== 008c5ad8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008c5adc  FUN_008c5adc =====

void FUN_008c5adc(long *param_1)

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


// ===== 008c5b9c  FUN_008c5b9c =====

void FUN_008c5b9c(long param_1)

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


// ===== 008c5c04  FUN_008c5c04 =====

bool FUN_008c5c04(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 008c5c1c  FUN_008c5c1c =====

bool FUN_008c5c1c(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 008c5c34  FUN_008c5c34 =====

void FUN_008c5c34(long *param_1)

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


// ===== 008c5cf4  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_29SizingUtilComponentDescriptorINS0_20SizingUtilShadowNodeIXadsoKcL_ZNS0_27DCDMessageViewComponentNameEEEENS0_19DCDMessageViewPropsENS0_26DCDMessageViewEventEmitterEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENS9_14default_deleteISC_EEEERKNS0_29ComponentDescriptorParametersE =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_29SizingUtilComponentDescriptorINS0_20SizingUtilShadowNodeIXadsoKcL_ZNS0_27DCDMessageViewComponentNameEEEENS0_19DCDMessageViewPropsENS0_26DCDMessageViewEventEmitterEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENS9_14default_deleteISC_EEEERKNS0_29ComponentDescriptorParametersE
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
                    /* try { // try from 008c5d44 to 008c5d4f has its CatchHandler @ 008c63ac */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_ff0);
  local_f8 = 0;
  *(undefined ***)this = &PTR_FUN_0099c918;
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
                    /* try { // try from 008c5dc0 to 008c5dcb has its CatchHandler @ 008c63dc */
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
  local_fa0 = PTR_construction_vtable_0099e210 + 0x20;
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
  local_fa0 = PTR_vtable_0099e158 + 0x20;
  local_8b0 = (void *)0x0;
  uStack_8b8 = 0;
  local_8c0 = 0;
                    /* try { // try from 008c61bc to 008c61cf has its CatchHandler @ 008c63dc */
  facebook::react::DCDMessageViewProps::DCDMessageViewProps
            ((DCDMessageViewProps *)local_8a8,(PropsParserContext *)local_1000,
             (DCDMessageViewProps *)&local_fa0,(RawProps *)&local_f8);
  if ((local_1c8 & 1) != 0) {
    operator_delete(local_1b8);
  }
  puVar5 = PTR_PTR_0099e160;
  FUN_0078917c(local_8a8,PTR_PTR_0099e160 + 8);
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
                    /* try { // try from 008c62fc to 008c6307 has its CatchHandler @ 008c63e0 */
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
  *(undefined ***)this = &PTR_FUN_0099c870;
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


// ===== 008c63e4  FUN_008c63e4 =====

void FUN_008c63e4(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 008c6408  FUN_008c6408 =====

undefined * FUN_008c6408(void)

{
  return PTR_DCDMessageViewComponentName_0099f378;
}


// ===== 008c6414  FUN_008c6414 =====

undefined * FUN_008c6414(void)

{
  return PTR_DCDMessageViewComponentName_0099f378;
}


// ===== 008c6420  FUN_008c6420 =====

undefined8 FUN_008c6420(void)

{
  return 0x61;
}


// ===== 008c6428  FUN_008c6428 =====

void FUN_008c6428(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

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
  *puVar6 = &PTR_FUN_0099c990;
                    /* try { // try from 008c6494 to 008c64a3 has its CatchHandler @ 008c6588 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4,uVar5);
  lVar8 = puVar6[4];
  puVar6[3] = &PTR_FUN_0099cac0;
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
  puVar6[3] = &PTR_FUN_0099c9e0;
                    /* try { // try from 008c653c to 008c6547 has its CatchHandler @ 008c6578 */
  (**(code **)(lVar9 + 0x60))(param_2,pYVar1);
  *param_1 = pYVar1;
  param_1[1] = puVar6;
  if (*(long *)(lVar4 + 0x28) != lVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 008c65b8  FUN_008c65b8 =====

void FUN_008c65b8(undefined8 *param_1,long *param_2,ShadowNode *param_3,ShadowNodeFragment *param_4)

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
  *plVar8 = (long)&PTR_FUN_0099c990;
                    /* try { // try from 008c6610 to 008c661f has its CatchHandler @ 008c676c */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4);
  lVar9 = plVar8[4];
  plVar8[3] = (long)&PTR_FUN_0099cac0;
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
  plVar8[3] = (long)&PTR_FUN_0099c9e0;
  *(uint *)((long)plVar8 + 0x6c) =
       uVar3 & 0xfffff000 |
       uVar3 & 0x7f8 | uVar2 | (uint)((cVar4 != '\0' || cVar5 != '\0') || cVar6 != '\0') << 0xb;
  local_68 = pYVar1;
  local_60 = plVar8;
                    /* try { // try from 008c66b0 to 008c66bf has its CatchHandler @ 008c6784 */
  facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::
  completeClone(pYVar1,param_3,param_4);
  local_78 = pYVar1;
  local_70 = plVar8;
  FUN_00757d00(1,plVar8 + 1);
                    /* try { // try from 008c66d0 to 008c66df has its CatchHandler @ 008c675c */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_78);
  plVar8 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar9 = FUN_00757990(0xffffffffffffffff,local_70 + 1), lVar9 == 0)) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pYVar1 = local_68;
                    /* try { // try from 008c671c to 008c6727 has its CatchHandler @ 008c6784 */
  (**(code **)(*param_2 + 0x60))(param_2,local_68);
  *param_1 = pYVar1;
  param_1[1] = local_60;
  if (*(long *)(lVar7 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 008c67ac  FUN_008c67ac =====

void FUN_008c67ac(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::appendChild
            (*param_2,param_3);
  return;
}


// ===== 008c67b8  FUN_008c67b8 =====

void FUN_008c67b8(undefined8 *param_1,long param_2,PropsParserContext *param_3,long *param_4,
                 RawProps *param_5)

{
  DCDMessageViewProps *this;
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
  DCDMessageViewProps *pDVar12;
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
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27DCDMessageViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_19DCDMessageViewPropsENS0_26DCDMessageViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f388
         & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27DCDMessageViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_19DCDMessageViewPropsENS0_26DCDMessageViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f388
                                   ), iVar6 != 0)) {
                    /* try { // try from 008c6bec to 008c6bef has its CatchHandler @ 008c6c1c */
      FUN_008c7844();
      __cxa_atexit(FUN_008c77f4,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27DCDMessageViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_19DCDMessageViewPropsENS0_26DCDMessageViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f380
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27DCDMessageViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_19DCDMessageViewPropsENS0_26DCDMessageViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f388
                         );
    }
    lVar11 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27DCDMessageViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_19DCDMessageViewPropsENS0_26DCDMessageViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f380
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27DCDMessageViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_19DCDMessageViewPropsENS0_26DCDMessageViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f380
    ;
    param_1[1] = lVar11;
    if (lVar11 != 0) {
      FUN_00757d00(1,lVar11 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    pDVar12 = (DCDMessageViewProps *)*param_4;
    if (pDVar12 == (DCDMessageViewProps *)0x0) {
      if (((*
            PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27DCDMessageViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_19DCDMessageViewPropsENS0_26DCDMessageViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f388
           & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27DCDMessageViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_19DCDMessageViewPropsENS0_26DCDMessageViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f388
                                     ), iVar6 != 0)) {
                    /* try { // try from 008c6b6c to 008c6b6f has its CatchHandler @ 008c6c34 */
        FUN_008c7844();
        __cxa_atexit(FUN_008c77f4,
                     PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27DCDMessageViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_19DCDMessageViewPropsENS0_26DCDMessageViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f380
                     ,&PTR_LOOP_008d5d30);
        __cxa_guard_release(
                           PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27DCDMessageViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_19DCDMessageViewPropsENS0_26DCDMessageViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f388
                           );
      }
      pDVar12 = *(DCDMessageViewProps **)
                 PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27DCDMessageViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_19DCDMessageViewPropsENS0_26DCDMessageViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f380
      ;
    }
    plVar8 = (long *)operator_new(0x710);
    this = (DCDMessageViewProps *)(plVar8 + 3);
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = (long)&PTR_FUN_0099cba8;
                    /* try { // try from 008c6898 to 008c68ab has its CatchHandler @ 008c6ca8 */
    facebook::react::DCDMessageViewProps::DCDMessageViewProps(this,param_3,pDVar12,param_5);
                    /* try { // try from 008c68b0 to 008c68c3 has its CatchHandler @ 008c6cc0 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if ((((uVar7 & 1) == 0) ||
        (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar7 & 1) == 0)) ||
       (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
                enablePropsUpdateReconciliationAndroid(), (uVar7 & 1) == 0)) {
LAB_008c68ec:
      FUN_00757d00(1,plVar8 + 1);
      if (*param_4 == 0) {
        if (((*
              PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27DCDMessageViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_19DCDMessageViewPropsENS0_26DCDMessageViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f388
             & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(
                                       PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27DCDMessageViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_19DCDMessageViewPropsENS0_26DCDMessageViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f388
                                       ), iVar6 != 0)) {
                    /* try { // try from 008c6bac to 008c6baf has its CatchHandler @ 008c6c20 */
          FUN_008c7844();
          __cxa_atexit(FUN_008c77f4,
                       PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27DCDMessageViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_19DCDMessageViewPropsENS0_26DCDMessageViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f380
                       ,&PTR_LOOP_008d5d30);
          __cxa_guard_release(
                             PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27DCDMessageViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_19DCDMessageViewPropsENS0_26DCDMessageViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f388
                             );
        }
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 008c6954 to 008c6967 has its CatchHandler @ 008c6c4c */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*(undefined8 *)
                         PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27DCDMessageViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_19DCDMessageViewPropsENS0_26DCDMessageViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f380
                   ,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
LAB_008c69a0:
          (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
        }
        else if (local_b0 != (dynamic *)0x0) {
          lVar11 = 5;
          pdVar10 = local_b0;
          goto LAB_008c69a0;
        }
        if (plVar8 != (long *)0x0) goto LAB_008c69b4;
      }
      else {
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 008c6908 to 008c691b has its CatchHandler @ 008c6c74 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*param_4,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
        }
        else {
          if (local_b0 == (dynamic *)0x0) goto LAB_008c69b4;
          lVar11 = 5;
          pdVar10 = local_b0;
        }
        (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
LAB_008c69b4:
        lVar11 = FUN_00757990(0xffffffffffffffff,plVar8 + 1);
        if (lVar11 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 008c68d0 to 008c68db has its CatchHandler @ 008c6c48 */
      pcVar9 = (char *)(**(code **)(*(long *)this + 0x10))(this);
      iVar6 = strcmp(PTR_DCDMessageViewComponentName_0099f378,pcVar9);
      if (iVar6 != 0) goto LAB_008c68ec;
      bVar3 = false;
    }
                    /* try { // try from 008c69e0 to 008c69e3 has its CatchHandler @ 008c6cc0 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar7 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 008c69f0 to 008c6a0b has its CatchHandler @ 008c6c70 */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(plVar8 + 7));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 008c6b4c to 008c6b5b has its CatchHandler @ 008c6c68 */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_008c6d0c;
      }
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (*(int *)(plVar4 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 008c6b2c to 008c6b3b has its CatchHandler @ 008c6ccc */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_008c6d0c;
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
                    /* try { // try from 008c6a8c to 008c6a97 has its CatchHandler @ 008c6cd4 */
        folly::dynamic::dynamic(local_d0,(dynamic *)(plVar4 + 8));
        local_a0 = 0;
                    /* try { // try from 008c6a9c to 008c6ab3 has its CatchHandler @ 008c6cd8 */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (this,param_3,uVar1,pcVar9,local_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 008c6ac4 to 008c6acf has its CatchHandler @ 008c6cc8 */
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
LAB_008c6d0c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008c6d10  FUN_008c6d10 =====

void FUN_008c6d10(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
                    /* try { // try from 008c6d60 to 008c6d67 has its CatchHandler @ 008c6e1c */
  puVar3 = (undefined8 *)operator_new(0x50);
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_0099c330;
                    /* try { // try from 008c6d80 to 008c6d8b has its CatchHandler @ 008c6e04 */
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


// ===== 008c6e44  FUN_008c6e44 =====

void FUN_008c6e44(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
                    /* try { // try from 008c6e84 to 008c6e8f has its CatchHandler @ 008c6f70 */
  facebook::react::ShadowNodeFamily::getMostRecentState();
                    /* try { // try from 008c6e94 to 008c6e9b has its CatchHandler @ 008c6f60 */
  puVar3 = (undefined8 *)operator_new(0x50);
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_0099c538;
                    /* try { // try from 008c6eb4 to 008c6ebf has its CatchHandler @ 008c6f48 */
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


// ===== 008c6f98  FUN_008c6f98 =====

void FUN_008c6f98(undefined8 *param_1,long param_2,long param_3)

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
                    /* try { // try from 008c6fe0 to 008c6fe7 has its CatchHandler @ 008c72cc */
  plVar5 = (long *)operator_new(0x68);
  *plVar5 = (long)&PTR_FUN_0099cbf8;
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
                    /* try { // try from 008c7024 to 008c7033 has its CatchHandler @ 008c72a0 */
  facebook::react::EventEmitter::EventEmitter(pEVar1,&local_70,&local_80);
  *(undefined ***)pEVar1 = &PTR_FUN_0097ff10;
                    /* try { // try from 008c7044 to 008c704b has its CatchHandler @ 008c7290 */
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
  plVar5[3] = (long)&PTR_FUN_0099cc48;
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
                    /* try { // try from 008c70fc to 008c7103 has its CatchHandler @ 008c7280 */
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
                    /* try { // try from 008c7150 to 008c7167 has its CatchHandler @ 008c7250 */
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
                    /* try { // try from 008c71bc to 008c71c7 has its CatchHandler @ 008c7230 */
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


// ===== 008c72f4  FUN_008c72f4 =====

void FUN_008c72f4(undefined8 param_1,undefined8 param_2)

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
                    /* try { // try from 008c736c to 008c7373 has its CatchHandler @ 008c73e4 */
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


// ===== 008c740c  FUN_008c740c =====

void FUN_008c740c(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 008c7430  FUN_008c7430 =====

void FUN_008c7430(void)

{
  return;
}


// ===== 008c7434  FUN_008c7434 =====

void FUN_008c7434(long param_1)

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


// ===== 008c7484  FUN_008c7484 =====

void FUN_008c7484(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099c990;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008c7494  FUN_008c7494 =====

void FUN_008c7494(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099c990;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008c74c4  FUN_008c74c4 =====

void FUN_008c74c4(long param_1)

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


// ===== 008c7588  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008c758c  FUN_008c758c =====

void FUN_008c758c(long *param_1)

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


// ===== 008c764c  FUN_008c764c =====

void FUN_008c764c(long param_1)

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


// ===== 008c76b4  FUN_008c76b4 =====

bool FUN_008c76b4(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 008c76cc  FUN_008c76cc =====

bool FUN_008c76cc(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 008c76e4  FUN_008c76e4 =====

void FUN_008c76e4(long *param_1)

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


// ===== 008c77a4  FUN_008c77a4 =====

void FUN_008c77a4(long param_1)

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


// ===== 008c77f4  FUN_008c77f4 =====

void FUN_008c77f4(long param_1)

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


// ===== 008c7844  FUN_008c7844 =====

void FUN_008c7844(void)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x710);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_0099cb58;
  memset(__s,0,0x6f8);
                    /* try { // try from 008c7880 to 008c7893 has its CatchHandler @ 008c7910 */
  FUN_00788b10(__s,PTR_PTR_0099e160 + 0x10);
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
  puVar1 = PTR_vtable_0099e158;
  *(undefined4 *)(puVar2 + 0xd9) = 0;
  *(undefined2 *)((long)puVar2 + 0x6cc) = 0;
  puVar2[0xe1] = 0;
  puVar2[3] = puVar1 + 0x20;
  puVar1 = 
  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_27DCDMessageViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_19DCDMessageViewPropsENS0_26DCDMessageViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f380
  ;
  puVar2[0xe0] = 0;
  puVar2[0xdf] = 0;
  *(undefined8 **)puVar1 = __s;
  *(undefined8 **)(puVar1 + 8) = puVar2;
  return;
}


// ===== 008c792c  FUN_008c792c =====

void FUN_008c792c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099cb58;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008c793c  FUN_008c793c =====

void FUN_008c793c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099cb58;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008c796c  FUN_008c796c =====

void FUN_008c796c(long param_1)

{
  if ((*(byte *)(param_1 + 0x6f8) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x708));
  }
  FUN_0078917c(param_1 + 0x18,PTR_PTR_0099e160 + 8);
  return;
}


// ===== 008c79a8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008c79ac  FUN_008c79ac =====

void FUN_008c79ac(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099cba8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008c79bc  FUN_008c79bc =====

void FUN_008c79bc(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099cba8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008c79ec  FUN_008c79ec =====

void FUN_008c79ec(long param_1)

{
  if ((*(byte *)(param_1 + 0x6f8) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x708));
  }
  FUN_0078917c(param_1 + 0x18,PTR_PTR_0099e160 + 8);
  return;
}


// ===== 008c7a28  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008c7a2c  FUN_008c7a2c =====

void FUN_008c7a2c(long param_1)

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


// ===== 008c7a7c  FUN_008c7a7c =====

void FUN_008c7a7c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099cbf8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008c7a8c  FUN_008c7a8c =====

void FUN_008c7a8c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099cbf8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008c7abc  FUN_008c7abc =====

void FUN_008c7abc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x008c7ac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 008c7ac8  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008c7acc  FUN_008c7acc =====

void FUN_008c7acc(long *param_1)

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


// ===== 008c7b84  _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_29SizingUtilComponentDescriptorINS0_20SizingUtilShadowNodeIXadsoKcL_ZNS0_33DCDSystemMessageViewComponentNameEEEENS0_25DCDSystemMessageViewPropsENS0_32DCDSystemMessageViewEventEmitterEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENS9_14default_deleteISC_EEEERKNS0_29ComponentDescriptorParametersE =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN8facebook5react38concreteComponentDescriptorConstructorINS0_29SizingUtilComponentDescriptorINS0_20SizingUtilShadowNodeIXadsoKcL_ZNS0_33DCDSystemMessageViewComponentNameEEEENS0_25DCDSystemMessageViewPropsENS0_32DCDSystemMessageViewEventEmitterEEEEEEENSt6__ndk110unique_ptrIKNS0_19ComponentDescriptorENS9_14default_deleteISC_EEEERKNS0_29ComponentDescriptorParametersE
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
                    /* try { // try from 008c7bd4 to 008c7bdf has its CatchHandler @ 008c823c */
  facebook::react::ComponentDescriptor::ComponentDescriptor
            (this,param_2,(RawPropsParser *)&local_ff0);
  local_f8 = 0;
  *(undefined ***)this = &PTR_FUN_0099cd28;
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
                    /* try { // try from 008c7c50 to 008c7c5b has its CatchHandler @ 008c826c */
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
  local_fa0 = PTR_construction_vtable_0099e248 + 0x20;
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
  local_fa0 = PTR_vtable_0099e178 + 0x20;
  local_8b0 = (void *)0x0;
  uStack_8b8 = 0;
  local_8c0 = 0;
                    /* try { // try from 008c804c to 008c805f has its CatchHandler @ 008c826c */
  facebook::react::DCDSystemMessageViewProps::DCDSystemMessageViewProps
            ((DCDSystemMessageViewProps *)local_8a8,(PropsParserContext *)local_1000,
             (DCDSystemMessageViewProps *)&local_fa0,(RawProps *)&local_f8);
  if ((local_1c8 & 1) != 0) {
    operator_delete(local_1b8);
  }
  puVar5 = PTR_PTR_0099e180;
  FUN_0078917c(local_8a8,PTR_PTR_0099e180 + 8);
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
                    /* try { // try from 008c818c to 008c8197 has its CatchHandler @ 008c8270 */
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
  *(undefined ***)this = &PTR_FUN_0099cc80;
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


// ===== 008c8274  FUN_008c8274 =====

void FUN_008c8274(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 008c8298  FUN_008c8298 =====

undefined * FUN_008c8298(void)

{
  return PTR_DCDSystemMessageViewComponentName_0099f390;
}


// ===== 008c82a4  FUN_008c82a4 =====

undefined * FUN_008c82a4(void)

{
  return PTR_DCDSystemMessageViewComponentName_0099f390;
}


// ===== 008c82b0  FUN_008c82b0 =====

undefined8 FUN_008c82b0(void)

{
  return 0x61;
}


// ===== 008c82b8  FUN_008c82b8 =====

void FUN_008c82b8(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

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
  *puVar6 = &PTR_FUN_0099cda0;
                    /* try { // try from 008c8324 to 008c8333 has its CatchHandler @ 008c8418 */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4,uVar5);
  lVar8 = puVar6[4];
  puVar6[3] = &PTR_FUN_0099ced0;
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
  puVar6[3] = &PTR_FUN_0099cdf0;
                    /* try { // try from 008c83cc to 008c83d7 has its CatchHandler @ 008c8408 */
  (**(code **)(lVar9 + 0x60))(param_2,pYVar1);
  *param_1 = pYVar1;
  param_1[1] = puVar6;
  if (*(long *)(lVar4 + 0x28) != lVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 008c8448  FUN_008c8448 =====

void FUN_008c8448(undefined8 *param_1,long *param_2,ShadowNode *param_3,ShadowNodeFragment *param_4)

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
  *plVar8 = (long)&PTR_FUN_0099cda0;
                    /* try { // try from 008c84a0 to 008c84af has its CatchHandler @ 008c85fc */
  facebook::react::YogaLayoutableShadowNode::YogaLayoutableShadowNode(pYVar1,param_3,param_4);
  lVar9 = plVar8[4];
  plVar8[3] = (long)&PTR_FUN_0099ced0;
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
  plVar8[3] = (long)&PTR_FUN_0099cdf0;
  *(uint *)((long)plVar8 + 0x6c) =
       uVar3 & 0xfffff000 |
       uVar3 & 0x7f8 | uVar2 | (uint)((cVar4 != '\0' || cVar5 != '\0') || cVar6 != '\0') << 0xb;
  local_68 = pYVar1;
  local_60 = plVar8;
                    /* try { // try from 008c8540 to 008c854f has its CatchHandler @ 008c8614 */
  facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::
  completeClone(pYVar1,param_3,param_4);
  local_78 = pYVar1;
  local_70 = plVar8;
  FUN_00757d00(1,plVar8 + 1);
                    /* try { // try from 008c8560 to 008c856f has its CatchHandler @ 008c85ec */
  facebook::react::ShadowNode::transferRuntimeShadowNodeReference
            (param_3,(ShadowNodeFragment *)&local_78);
  plVar8 = local_70;
  if ((local_70 != (long *)0x0) &&
     (lVar9 = FUN_00757990(0xffffffffffffffff,local_70 + 1), lVar9 == 0)) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    std::__ndk1::__shared_weak_count::__release_weak();
  }
  pYVar1 = local_68;
                    /* try { // try from 008c85ac to 008c85b7 has its CatchHandler @ 008c8614 */
  (**(code **)(*param_2 + 0x60))(param_2,local_68);
  *param_1 = pYVar1;
  param_1[1] = local_60;
  if (*(long *)(lVar7 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 008c863c  FUN_008c863c =====

void FUN_008c863c(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  facebook::react::YogaLayoutableShadowNode::facebook::react::YogaLayoutableShadowNode::appendChild
            (*param_2,param_3);
  return;
}


// ===== 008c8648  FUN_008c8648 =====

void FUN_008c8648(undefined8 *param_1,long param_2,PropsParserContext *param_3,long *param_4,
                 RawProps *param_5)

{
  DCDSystemMessageViewProps *this;
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
  DCDSystemMessageViewProps *pDVar12;
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
          PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33DCDSystemMessageViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25DCDSystemMessageViewPropsENS0_32DCDSystemMessageViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f3a0
         & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(
                                   PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33DCDSystemMessageViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25DCDSystemMessageViewPropsENS0_32DCDSystemMessageViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f3a0
                                   ), iVar6 != 0)) {
                    /* try { // try from 008c8a7c to 008c8a7f has its CatchHandler @ 008c8aac */
      FUN_008c96d4();
      __cxa_atexit(FUN_008c9684,
                   PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33DCDSystemMessageViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25DCDSystemMessageViewPropsENS0_32DCDSystemMessageViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f398
                   ,&PTR_LOOP_008d5d30);
      __cxa_guard_release(
                         PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33DCDSystemMessageViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25DCDSystemMessageViewPropsENS0_32DCDSystemMessageViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f3a0
                         );
    }
    lVar11 = *(long *)(
                      PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33DCDSystemMessageViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25DCDSystemMessageViewPropsENS0_32DCDSystemMessageViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f398
                      + 8);
    *param_1 = *(undefined8 *)
                PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33DCDSystemMessageViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25DCDSystemMessageViewPropsENS0_32DCDSystemMessageViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f398
    ;
    param_1[1] = lVar11;
    if (lVar11 != 0) {
      FUN_00757d00(1,lVar11 + 8);
    }
  }
  else {
    facebook::react::RawProps::facebook::react::RawProps::parse(param_5,param_2 + 0x38);
    pDVar12 = (DCDSystemMessageViewProps *)*param_4;
    if (pDVar12 == (DCDSystemMessageViewProps *)0x0) {
      if (((*
            PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33DCDSystemMessageViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25DCDSystemMessageViewPropsENS0_32DCDSystemMessageViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f3a0
           & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(
                                     PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33DCDSystemMessageViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25DCDSystemMessageViewPropsENS0_32DCDSystemMessageViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f3a0
                                     ), iVar6 != 0)) {
                    /* try { // try from 008c89fc to 008c89ff has its CatchHandler @ 008c8ac4 */
        FUN_008c96d4();
        __cxa_atexit(FUN_008c9684,
                     PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33DCDSystemMessageViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25DCDSystemMessageViewPropsENS0_32DCDSystemMessageViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f398
                     ,&PTR_LOOP_008d5d30);
        __cxa_guard_release(
                           PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33DCDSystemMessageViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25DCDSystemMessageViewPropsENS0_32DCDSystemMessageViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f3a0
                           );
      }
      pDVar12 = *(DCDSystemMessageViewProps **)
                 PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33DCDSystemMessageViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25DCDSystemMessageViewPropsENS0_32DCDSystemMessageViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f398
      ;
    }
    plVar8 = (long *)operator_new(0x710);
    this = (DCDSystemMessageViewProps *)(plVar8 + 3);
    plVar8[1] = 0;
    plVar8[2] = 0;
    *plVar8 = (long)&PTR_FUN_0099cfb8;
                    /* try { // try from 008c8728 to 008c873b has its CatchHandler @ 008c8b38 */
    facebook::react::DCDSystemMessageViewProps::DCDSystemMessageViewProps
              (this,param_3,pDVar12,param_5);
                    /* try { // try from 008c8740 to 008c8753 has its CatchHandler @ 008c8b50 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableExclusivePropsUpdateAndroid();
    if ((((uVar7 & 1) == 0) ||
        (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags
                 ::enableAccumulatedUpdatesInRawPropsAndroid(), (uVar7 & 1) == 0)) ||
       (uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
                enablePropsUpdateReconciliationAndroid(), (uVar7 & 1) == 0)) {
LAB_008c877c:
      FUN_00757d00(1,plVar8 + 1);
      if (*param_4 == 0) {
        if (((*
              PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33DCDSystemMessageViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25DCDSystemMessageViewPropsENS0_32DCDSystemMessageViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f3a0
             & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(
                                       PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33DCDSystemMessageViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25DCDSystemMessageViewPropsENS0_32DCDSystemMessageViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f3a0
                                       ), iVar6 != 0)) {
                    /* try { // try from 008c8a3c to 008c8a3f has its CatchHandler @ 008c8ab0 */
          FUN_008c96d4();
          __cxa_atexit(FUN_008c9684,
                       PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33DCDSystemMessageViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25DCDSystemMessageViewPropsENS0_32DCDSystemMessageViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f398
                       ,&PTR_LOOP_008d5d30);
          __cxa_guard_release(
                             PTR__ZGVZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33DCDSystemMessageViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25DCDSystemMessageViewPropsENS0_32DCDSystemMessageViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f3a0
                             );
        }
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 008c87e4 to 008c87f7 has its CatchHandler @ 008c8adc */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*(undefined8 *)
                         PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33DCDSystemMessageViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25DCDSystemMessageViewPropsENS0_32DCDSystemMessageViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f398
                   ,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
LAB_008c8830:
          (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
        }
        else if (local_b0 != (dynamic *)0x0) {
          lVar11 = 5;
          pdVar10 = local_b0;
          goto LAB_008c8830;
        }
        if (plVar8 != (long *)0x0) goto LAB_008c8844;
      }
      else {
        local_b0 = (dynamic *)0x0;
                    /* try { // try from 008c8798 to 008c87ab has its CatchHandler @ 008c8b04 */
        facebook::react::Props::facebook::react::Props::initializeDynamicProps
                  (this,*param_4,param_5,local_d0);
        if (local_b0 == local_d0) {
          lVar11 = 4;
          pdVar10 = local_d0;
        }
        else {
          if (local_b0 == (dynamic *)0x0) goto LAB_008c8844;
          lVar11 = 5;
          pdVar10 = local_b0;
        }
        (**(code **)(*(long *)pdVar10 + lVar11 * 8))();
LAB_008c8844:
        lVar11 = FUN_00757990(0xffffffffffffffff,plVar8 + 1);
        if (lVar11 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          std::__ndk1::__shared_weak_count::__release_weak();
        }
      }
      bVar3 = true;
    }
    else {
                    /* try { // try from 008c8760 to 008c876b has its CatchHandler @ 008c8ad8 */
      pcVar9 = (char *)(**(code **)(*(long *)this + 0x10))(this);
      iVar6 = strcmp(PTR_DCDSystemMessageViewComponentName_0099f390,pcVar9);
      if (iVar6 != 0) goto LAB_008c877c;
      bVar3 = false;
    }
                    /* try { // try from 008c8870 to 008c8873 has its CatchHandler @ 008c8b50 */
    uVar7 = facebook::react::ReactNativeFeatureFlags::facebook::react::ReactNativeFeatureFlags::
            enableCppPropsIteratorSetter();
    if ((uVar7 & 1) != 0) {
      if (bVar3) {
                    /* try { // try from 008c8880 to 008c889b has its CatchHandler @ 008c8b00 */
        folly::dynamic::dynamic((dynamic *)local_98,(dynamic *)(plVar8 + 7));
      }
      else {
        facebook::react::RawProps::operator_cast_to_dynamic(param_5);
      }
      plVar4 = local_80;
      if (local_98[0] != 5) {
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 008c89dc to 008c89eb has its CatchHandler @ 008c8af8 */
                    /* WARNING: Subroutine does not return */
          FUN_00789f8c(*(undefined8 *)PTR_name_0099dea8);
        }
        goto LAB_008c8b9c;
      }
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (*(int *)(plVar4 + 2) != 6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 008c89bc to 008c89cb has its CatchHandler @ 008c8b5c */
                    /* WARNING: Subroutine does not return */
            FUN_00789f8c(*(undefined8 *)PTR_name_0099deb0);
          }
          goto LAB_008c8b9c;
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
                    /* try { // try from 008c891c to 008c8927 has its CatchHandler @ 008c8b64 */
        folly::dynamic::dynamic(local_d0,(dynamic *)(plVar4 + 8));
        local_a0 = 0;
                    /* try { // try from 008c892c to 008c8943 has its CatchHandler @ 008c8b68 */
        facebook::react::HostPlatformViewProps::facebook::react::HostPlatformViewProps::setProp
                  (this,param_3,uVar1,pcVar9,local_d0);
        if (local_a0 != 0xffffffff) {
                    /* try { // try from 008c8954 to 008c895f has its CatchHandler @ 008c8b58 */
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
LAB_008c8b9c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008c8ba0  FUN_008c8ba0 =====

void FUN_008c8ba0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
                    /* try { // try from 008c8bf0 to 008c8bf7 has its CatchHandler @ 008c8cac */
  puVar3 = (undefined8 *)operator_new(0x50);
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_0099c330;
                    /* try { // try from 008c8c10 to 008c8c1b has its CatchHandler @ 008c8c94 */
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


// ===== 008c8cd4  FUN_008c8cd4 =====

void FUN_008c8cd4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
                    /* try { // try from 008c8d14 to 008c8d1f has its CatchHandler @ 008c8e00 */
  facebook::react::ShadowNodeFamily::getMostRecentState();
                    /* try { // try from 008c8d24 to 008c8d2b has its CatchHandler @ 008c8df0 */
  puVar3 = (undefined8 *)operator_new(0x50);
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_0099c538;
                    /* try { // try from 008c8d44 to 008c8d4f has its CatchHandler @ 008c8dd8 */
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


// ===== 008c8e28  FUN_008c8e28 =====

void FUN_008c8e28(undefined8 *param_1,long param_2,long param_3)

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
                    /* try { // try from 008c8e70 to 008c8e77 has its CatchHandler @ 008c915c */
  plVar5 = (long *)operator_new(0x68);
  *plVar5 = (long)&PTR_FUN_0099d008;
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
                    /* try { // try from 008c8eb4 to 008c8ec3 has its CatchHandler @ 008c9130 */
  facebook::react::EventEmitter::EventEmitter(pEVar1,&local_70,&local_80);
  *(undefined ***)pEVar1 = &PTR_FUN_0097ff10;
                    /* try { // try from 008c8ed4 to 008c8edb has its CatchHandler @ 008c9120 */
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
  plVar5[3] = (long)&PTR_FUN_0099d058;
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
                    /* try { // try from 008c8f8c to 008c8f93 has its CatchHandler @ 008c9110 */
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
                    /* try { // try from 008c8fe0 to 008c8ff7 has its CatchHandler @ 008c90e0 */
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
                    /* try { // try from 008c904c to 008c9057 has its CatchHandler @ 008c90c0 */
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


// ===== 008c9184  FUN_008c9184 =====

void FUN_008c9184(undefined8 param_1,undefined8 param_2)

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
                    /* try { // try from 008c91fc to 008c9203 has its CatchHandler @ 008c9274 */
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


// ===== 008c929c  FUN_008c929c =====

void FUN_008c929c(void *param_1)

{
  FUN_007bae18();
  operator_delete(param_1);
  return;
}


// ===== 008c92c0  FUN_008c92c0 =====

void FUN_008c92c0(void)

{
  return;
}


// ===== 008c92c4  FUN_008c92c4 =====

void FUN_008c92c4(long param_1)

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


// ===== 008c9314  FUN_008c9314 =====

void FUN_008c9314(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099cda0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008c9324  FUN_008c9324 =====

void FUN_008c9324(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099cda0;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008c9354  FUN_008c9354 =====

void FUN_008c9354(long param_1)

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


// ===== 008c9418  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008c941c  FUN_008c941c =====

void FUN_008c941c(long *param_1)

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


// ===== 008c94dc  FUN_008c94dc =====

void FUN_008c94dc(long param_1)

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


// ===== 008c9544  FUN_008c9544 =====

bool FUN_008c9544(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(long *)(param_1 + 8) + 0x5b8);
  return cVar1 == '\0' || cVar1 == '\x03';
}


// ===== 008c955c  FUN_008c955c =====

bool FUN_008c955c(long param_1)

{
  return (*(byte *)(*(long *)(param_1 + 8) + 0x5b8) & 0xfd) == 0;
}


// ===== 008c9574  FUN_008c9574 =====

void FUN_008c9574(long *param_1)

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


// ===== 008c9634  FUN_008c9634 =====

void FUN_008c9634(long param_1)

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


// ===== 008c9684  FUN_008c9684 =====

void FUN_008c9684(long param_1)

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


// ===== 008c96d4  FUN_008c96d4 =====

void FUN_008c96d4(void)

{
  undefined8 *__s;
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x710);
  __s = puVar2 + 3;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_0099cf68;
  memset(__s,0,0x6f8);
                    /* try { // try from 008c9710 to 008c9723 has its CatchHandler @ 008c97a0 */
  FUN_00788b10(__s,PTR_PTR_0099e180 + 0x10);
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
  puVar1 = PTR_vtable_0099e178;
  *(undefined4 *)(puVar2 + 0xd9) = 0;
  *(undefined2 *)((long)puVar2 + 0x6cc) = 0;
  puVar2[0xe1] = 0;
  puVar2[3] = puVar1 + 0x20;
  puVar1 = 
  PTR__ZZN8facebook5react18ConcreteShadowNodeIXadsoKcL_ZNS0_33DCDSystemMessageViewComponentNameEEEENS0_24YogaLayoutableShadowNodeENS0_25DCDSystemMessageViewPropsENS0_32DCDSystemMessageViewEventEmitterENS0_15SizingUtilStateEE18defaultSharedPropsEvE18defaultSharedProps_0099f398
  ;
  puVar2[0xe0] = 0;
  puVar2[0xdf] = 0;
  *(undefined8 **)puVar1 = __s;
  *(undefined8 **)(puVar1 + 8) = puVar2;
  return;
}


// ===== 008c97bc  FUN_008c97bc =====

void FUN_008c97bc(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099cf68;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008c97cc  FUN_008c97cc =====

void FUN_008c97cc(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099cf68;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


// ===== 008c97fc  FUN_008c97fc =====

void FUN_008c97fc(long param_1)

{
  if ((*(byte *)(param_1 + 0x6f8) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x708));
  }
  FUN_0078917c(param_1 + 0x18,PTR_PTR_0099e180 + 8);
  return;
}


// ===== 008c9838  <EXTERNAL>::operator.delete =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_0099f950)();
  return;
}


// ===== 008c983c  FUN_008c983c =====

void FUN_008c983c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099cfb8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


// ===== 008c984c  FUN_008c984c =====

void FUN_008c984c(__shared_weak_count *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_0099cfb8;
  std::__ndk1::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


