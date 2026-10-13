// ===== 00864960  FUN_00864960 =====

undefined8 FUN_00864960(long param_1,uint param_2)

{
  uint uVar1;
  undefined1 auStack_68 [72];
  
  uVar1 = FUN_00855838(param_1 + 0x50);
  if ((param_2 & 1) != (uVar1 & 1)) {
    FUN_008646a0(auStack_68,param_1);
    FUN_00855874(param_1 + 0x50,auStack_68,param_2 & 1);
    FUN_00853bb0(auStack_68);
  }
  return 0;
}


// ===== 008649cc  FUN_008649cc =====

void FUN_008649cc(long param_1)

{
  FUN_00855838(param_1 + 0x50);
  return;
}


// ===== 008649d8  FUN_008649d8 =====

void FUN_008649d8(long param_1)

{
  FUN_00869c04(*(long *)(param_1 + 0x40) + 0x440);
  return;
}


// ===== 008649e8  FUN_008649e8 =====

undefined8 FUN_008649e8(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    uVar1 = FUN_00869c3c(*(long *)(param_1 + 0x40) + 0x440);
    return uVar1;
  }
  return 0;
}


// ===== 00864a04  FUN_00864a04 =====

undefined8 FUN_00864a04(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    uVar1 = FUN_00869c78(*(long *)(param_1 + 0x40) + 0x440);
    return uVar1;
  }
  return 0;
}


// ===== 00864a20  FUN_00864a20 =====

void FUN_00864a20(long param_1,uint param_2)

{
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_0086d148(*(long *)(param_1 + 0x40) + 0x1a8,param_2 & 1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../modules/rtp_rtcp/source/rtp_rtcp_impl2.cc",0x139,"rtp_sender_",&DAT_001f5fa0);
}


// ===== 00864a64  FUN_00864a64 =====

uint FUN_00864a64(long param_1,undefined4 param_2,long param_3,uint param_4,byte param_5)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined1 uStack_b1;
  long *local_b0 [2];
  code *local_a0;
  code *pcStack_98;
  undefined1 uStack_61;
  
  uVar3 = FUN_00855838(param_1 + 0x50);
  if ((uVar3 & 1) != 0) {
    lVar9 = *(long *)(param_1 + 0x38);
    uVar1 = param_4;
    if (param_4 == 0xffffffff || (int)(param_4 + 1) < 0 != SCARRY4(param_4,1)) {
      uVar1 = 0xaaaaaa00;
    }
    lVar8 = -0x5555555555555600;
    lVar2 = lVar8;
    if (0 < param_3) {
      lVar8 = param_3 * 1000;
      lVar2 = -0x55555555555555ff;
    }
    lVar4 = FUN_005d6490();
    if (lVar4 == lVar9) {
      FUN_00856188(param_1 + 0x50,param_2,lVar8,lVar2,
                   (uVar1 & 0xff | 0x100) & ((int)param_4 >> 0x1f ^ 0xffffffffU));
      uVar6 = FUN_0085647c(param_1 + 0x50,param_5 & 1);
      if ((uVar6 & 1) != 0) {
        FUN_008646a0(local_b0,param_1);
        FUN_00856540(param_1 + 0x50,local_b0,1,0,0);
        FUN_00853bb0(local_b0);
      }
    }
    else {
      lVar9 = *(long *)(param_1 + 0x558);
      plVar7 = *(long **)(param_1 + 0x38);
      if (lVar9 != 0) {
        FUN_00d0f740(1,lVar9);
      }
      plVar5 = (long *)operator_new(0x30);
      *plVar5 = param_1;
      plVar5[2] = lVar8;
      plVar5[3] = lVar2;
      *(undefined4 *)(plVar5 + 1) = param_2;
      *(undefined4 *)((long)plVar5 + 0xc) = 0xaaaaaaaa;
      *(uint *)(plVar5 + 4) = uVar1;
      *(byte *)((long)plVar5 + 0x24) = (byte)~(byte)(param_4 >> 0x18) >> 7;
      *(undefined2 *)((long)plVar5 + 0x25) = 0xaaaa;
      *(undefined1 *)((long)plVar5 + 0x27) = 0xaa;
      *(byte *)(plVar5 + 5) = param_5 & 1;
      *(undefined4 *)((long)plVar5 + 0x29) = 0xaaaaaaaa;
      *(undefined2 *)((long)plVar5 + 0x2d) = 0xaaaa;
      *(undefined1 *)((long)plVar5 + 0x2f) = 0xaa;
      local_b0[0] = (long *)operator_new(0x30);
      local_b0[0][2] = (long)plVar5;
      local_b0[0][3] = 0x30;
      local_b0[0][4] = (long)FUN_005ea56c;
      local_b0[0][5] = (long)FUN_0086604c;
      *local_b0[0] = lVar9;
      local_a0 = FUN_005db390;
      pcStack_98 = FUN_005db348;
      (**(code **)(*plVar7 + 8))(plVar7,local_b0,&uStack_61,&uStack_b1);
      (*local_a0)(0,local_b0,local_b0);
    }
  }
  return uVar3 & 1;
}


// ===== 00864c58  FUN_00864c58 =====

undefined8 FUN_00864c58(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00869c3c(*(long *)(param_1 + 0x40) + 0x440);
  if (((uVar1 & 1) == 0) ||
     (((((*(uint *)(param_2 + 0x80) & 1) != 0 && (*(long *)(param_2 + 0x78) == 4)) &&
       (*(int *)(param_2 + 0xc) == *(int *)(*(long *)(param_1 + 0x40) + 0x454))) &&
      (uVar1 = FUN_00868734(*(long *)(param_1 + 0x40) + 0x168), (uVar1 & 1) == 0)))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


// ===== 00864cd0  FUN_00864cd0 =====

void FUN_00864cd0(long param_1,long param_2)

{
  long lVar1;
  
  if (((*(uint *)(param_2 + 0x80) & 1) == 0) || (*(long *)(param_2 + 0x78) != 3)) {
    lVar1 = *(long *)(param_1 + 0x40);
  }
  else {
    lVar1 = *(long *)(param_1 + 0x40);
    if (((*(ulong *)(lVar1 + 0x460) >> 0x20 & 1) != 0) &&
       (*(int *)(param_2 + 0xc) == (int)*(ulong *)(lVar1 + 0x460))) {
      return;
    }
  }
  FUN_008683bc(lVar1 + 0x168);
  return;
}


// ===== 00864d10  FUN_00864d10 =====

void FUN_00864d10(long param_1)

{
  FUN_0086bc18(*(long *)(param_1 + 0x40) + 0x1a8);
  return;
}


// ===== 00864d20  FUN_00864d20 =====

undefined8 FUN_00864d20(long param_1,void *param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  
  if (param_2 == (void *)0x0) {
    return 0;
  }
  uVar1 = FUN_00869c3c(*(long *)(param_1 + 0x40) + 0x440);
  if ((uVar1 & 1) == 0) {
LAB_00864dbc:
    FUN_007dc854(param_2);
    operator_delete(param_2);
    return 0;
  }
  lVar2 = *(long *)((long)param_2 + 0x78);
  uVar1 = *(ulong *)((long)param_2 + 0x80);
  if (((uVar1 & 1) == 0) || (lVar2 != 4)) {
LAB_00864d8c:
    if (((uVar1 & 1) == 0) || (lVar2 != 3)) goto LAB_00864dd8;
    lVar2 = *(long *)(param_1 + 0x40);
    if (((*(ulong *)(lVar2 + 0x460) >> 0x20 & 1) != 0) &&
       (*(int *)((long)param_2 + 0xc) == (int)*(ulong *)(lVar2 + 0x460))) goto LAB_00864dec;
  }
  else {
    if (*(int *)((long)param_2 + 0xc) == *(int *)(*(long *)(param_1 + 0x40) + 0x454)) {
      uVar1 = FUN_00868734(*(long *)(param_1 + 0x40) + 0x168);
      if ((uVar1 & 1) == 0) goto LAB_00864dbc;
      lVar2 = *(long *)((long)param_2 + 0x78);
      uVar1 = *(ulong *)((long)param_2 + 0x80);
      goto LAB_00864d8c;
    }
LAB_00864dd8:
    lVar2 = *(long *)(param_1 + 0x40);
  }
  FUN_008683bc(lVar2 + 0x168,param_2);
  lVar2 = *(long *)(param_1 + 0x40);
LAB_00864dec:
  FUN_0086bc18(lVar2 + 0x1a8,param_2,param_3);
  return 1;
}


// ===== 00864e14  FUN_00864e14 =====

void FUN_00864e14(long param_1)

{
  FUN_0086c8f8(*(long *)(param_1 + 0x40) + 0x1a8);
  return;
}


// ===== 00864e24  FUN_00864e24 =====

void FUN_00864e24(long param_1)

{
  FUN_0086d320(*(long *)(param_1 + 0x40) + 0x1a8);
  return;
}


// ===== 00864e34  FUN_00864e34 =====

void FUN_00864e34(long param_1)

{
  FUN_0086c174(*(long *)(param_1 + 0x40) + 0x1a8);
  return;
}


// ===== 00864e44  FUN_00864e44 =====

void FUN_00864e44(long param_1)

{
  FUN_0086d38c(*(long *)(param_1 + 0x40) + 0x1a8);
  return;
}


// ===== 00864e54  FUN_00864e54 =====

void FUN_00864e54(long param_1)

{
  FUN_0086704c(*(undefined8 *)(param_1 + 0x40));
  return;
}


// ===== 00864e60  FUN_00864e60 =====

void FUN_00864e60(long param_1)

{
  FUN_008691e8(*(long *)(param_1 + 0x40) + 0x440);
  return;
}


// ===== 00864e70  FUN_00864e70 =====

void FUN_00864e70(long param_1)

{
  FUN_00869238(*(long *)(param_1 + 0x40) + 0x440);
  return;
}


// ===== 00864e80  FUN_00864e80 =====

void FUN_00864e80(undefined8 param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_2 + 0x40);
  uVar1 = FUN_0086d154(lVar3 + 0x1a8);
  uVar2 = FUN_00868734(*(long *)(param_2 + 0x40) + 0x168);
  FUN_00869298(param_1,lVar3 + 0x440,param_3,uVar1 & 1,uVar2 & 1);
  return;
}


// ===== 00864ee8  FUN_00864ee8 =====

void FUN_00864ee8(long param_1)

{
  FUN_0086d16c(*(long *)(param_1 + 0x40) + 0x1a8);
  return;
}


// ===== 00864ef8  FUN_00864ef8 =====

undefined8 FUN_00864ef8(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    uVar1 = FUN_00869974(*(long *)(param_1 + 0x40) + 0x440);
    return uVar1;
  }
  return 0;
}


// ===== 00864f14  FUN_00864f14 =====

void FUN_00864f14(void)

{
  return;
}


// ===== 00864f1c  FUN_00864f1c =====

void FUN_00864f1c(long param_1)

{
  FUN_00868d8c(*(long *)(param_1 + 0x40) + 0x440);
  return;
}


// ===== 00864f2c  FUN_00864f2c =====

void FUN_00864f2c(long param_1)

{
  FUN_00855710(param_1 + 0x50);
  return;
}


// ===== 00864f38  FUN_00864f38 =====

void FUN_00864f38(long param_1)

{
  FUN_0085574c(param_1 + 0x50);
  return;
}


// ===== 00864f44  FUN_00864f44 =====

void FUN_00864f44(long param_1)

{
  FUN_00856350(param_1 + 0x50);
  return;
}


// ===== 00864f50  FUN_00864f50 =====

undefined1  [16] FUN_00864f50(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  uVar2 = 0xaaaaaaaaaaaaaa00;
  auVar4 = FUN_0085a248(param_1 + 0x300);
  lVar1 = auVar4._0_8_;
  if ((auVar4 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
    pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x528));
    lVar3 = *(long *)(param_1 + 0x550);
    pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x528));
    if (0 < lVar3) {
      uVar2 = 0xaaaaaaaaaaaaaa01;
      lVar1 = lVar3 * 1000;
    }
  }
  else {
    uVar2 = 0xaaaaaaaaaaaaaa01;
  }
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = lVar1;
  return auVar4;
}


// ===== 00864fd0  FUN_00864fd0 =====

long FUN_00864fd0(long param_1)

{
  long lVar1;
  undefined1 auVar2 [12];
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x528));
  lVar1 = *(long *)(param_1 + 0x550);
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x528));
  if (lVar1 < 1) {
    auVar2 = FUN_0085a19c(param_1 + 0x300);
    lVar1 = auVar2._0_8_;
    if ((auVar2 & (undefined1  [12])0x1) == (undefined1  [12])0x0) {
      lVar1 = 0x1e848;
    }
  }
  else {
    lVar1 = lVar1 * 1000;
  }
  return lVar1;
}


// ===== 00865034  FUN_00865034 =====

undefined4 FUN_00865034(long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [72];
  
  FUN_008646a0(auStack_68);
  uVar1 = FUN_00856540(param_1 + 0x50,auStack_68,param_2,0,0);
  FUN_00853bb0(auStack_68);
  return uVar1;
}


// ===== 00865094  FUN_00865094 =====

void FUN_00865094(long param_1)

{
  FUN_0086d008(*(long *)(param_1 + 0x40) + 0x1a8);
  return;
}


// ===== 008650a4  FUN_008650a4 =====

void FUN_008650a4(long param_1)

{
  FUN_0085a9b4(param_1 + 0x300);
  return;
}


// ===== 008650b0  FUN_008650b0 =====

void FUN_008650b0(long param_1)

{
  FUN_0085a664(param_1 + 0x300);
  return;
}


// ===== 008650bc  FUN_008650bc =====

void FUN_008650bc(undefined8 *param_1,long param_2)

{
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  undefined1 *local_28;
  
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_28 = &DAT_aaaaaaaaaaaaaaaa;
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_0085a2f0(&local_40,param_2 + 0x300);
  param_1[2] = local_30;
  *param_1 = local_40;
  *(char *)(param_1 + 1) = (char)puStack_38;
  *(undefined4 *)(param_1 + 3) = local_28._0_4_;
  *(undefined1 *)(param_1 + 4) = 1;
  return;
}


// ===== 00865120  FUN_00865120 =====

void FUN_00865120(long param_1,undefined8 param_2,undefined8 *param_3)

{
  void *pvVar1;
  ulong uVar2;
  ulong uVar3;
  void *local_30;
  void *pvStack_28;
  undefined8 local_20;
  
  pvStack_28 = (void *)param_3[1];
  local_30 = (void *)*param_3;
  local_20 = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  FUN_00855dfc(param_1 + 0x50,param_2,&local_30);
  if (local_30 != (void *)0x0) {
    uVar3 = (ulong)((long)pvStack_28 + (-4 - ((long)pvStack_28 << 0x3e))) >> 2;
    uVar2 = (ulong)(((long)local_30 - (long)pvStack_28 << 0x3e) -
                   ((long)local_30 - (long)pvStack_28)) >> 2;
    if (uVar3 <= uVar2) {
      uVar2 = uVar3;
    }
    pvVar1 = pvStack_28;
    if ((1 < uVar2) && ((((int)local_30 - (int)pvStack_28 | -(int)pvStack_28) & 3U) == 0)) {
      uVar2 = uVar2 & 0x3ffffffffffffffe;
      pvVar1 = (void *)((long)pvStack_28 + uVar2 * -4);
      do {
        uVar2 = uVar2 - 2;
      } while (uVar2 != 0);
    }
    while (pvVar1 != local_30) {
      pvVar1 = (void *)((long)pvVar1 + -4);
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    pvStack_28 = local_30;
    operator_delete(local_30);
  }
  return;
}


// ===== 008651f4  FUN_008651f4 =====

void FUN_008651f4(long param_1)

{
  FUN_00855fdc(param_1 + 0x50);
  return;
}


// ===== 00865200  FUN_00865200 =====

void FUN_00865200(long param_1)

{
  FUN_00868c00(*(long *)(param_1 + 0x40) + 0x440);
  return;
}


// ===== 00865210  FUN_00865210 =====

void FUN_00865210(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00868c38(*(long *)(param_1 + 0x40) + 0x440);
  if ((uVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../modules/rtp_rtcp/source/rtp_rtcp_impl2.cc",0x23c,"registered",&DAT_001f5fa0);
}


// ===== 00865258  FUN_00865258 =====

void FUN_00865258(long param_1)

{
  FUN_00868cd0(*(long *)(param_1 + 0x40) + 0x440);
  return;
}


// ===== 00865268  FUN_00865268 =====

void FUN_00865268(long param_1,undefined8 *param_2)

{
  void *pvVar1;
  ulong uVar2;
  ulong uVar3;
  void *local_30;
  void *pvStack_28;
  undefined8 local_20;
  
  pvStack_28 = (void *)param_2[1];
  local_30 = (void *)*param_2;
  local_20 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  FUN_00856a3c(param_1 + 0x50,&local_30);
  if (local_30 != (void *)0x0) {
    uVar2 = (ulong)(((long)local_30 - (long)pvStack_28) * 0x1555555555555555) >> 3;
    uVar3 = (long)pvStack_28 * -0x1555555555555555 - 8U >> 3;
    if (uVar3 <= uVar2) {
      uVar2 = uVar3;
    }
    pvVar1 = pvStack_28;
    if ((1 < uVar2) && ((((int)local_30 - (int)pvStack_28 | -(int)pvStack_28) & 7U) == 0)) {
      uVar2 = uVar2 & 0x1ffffffffffffffe;
      pvVar1 = (void *)((long)pvStack_28 + uVar2 * -0x18);
      do {
        uVar2 = uVar2 - 2;
      } while (uVar2 != 0);
    }
    while (pvVar1 != local_30) {
      pvVar1 = (void *)((long)pvVar1 + -0x18);
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    pvStack_28 = local_30;
    operator_delete(local_30);
  }
  return;
}


// ===== 0086534c  FUN_0086534c =====

void FUN_0086534c(long param_1,undefined8 *param_2)

{
  void *pvVar1;
  ulong uVar2;
  ulong uVar3;
  void *local_30;
  void *pvStack_28;
  undefined8 local_20;
  
  pvStack_28 = (void *)param_2[1];
  local_30 = (void *)*param_2;
  local_20 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  FUN_00856a3c(param_1 + 0x48,&local_30);
  if (local_30 != (void *)0x0) {
    uVar2 = (ulong)(((long)local_30 - (long)pvStack_28) * 0x1555555555555555) >> 3;
    uVar3 = (long)pvStack_28 * -0x1555555555555555 - 8U >> 3;
    if (uVar3 <= uVar2) {
      uVar2 = uVar3;
    }
    pvVar1 = pvStack_28;
    if ((1 < uVar2) && ((((int)local_30 - (int)pvStack_28 | -(int)pvStack_28) & 7U) == 0)) {
      uVar2 = uVar2 & 0x1ffffffffffffffe;
      pvVar1 = (void *)((long)pvStack_28 + uVar2 * -0x18);
      do {
        uVar2 = uVar2 - 2;
      } while (uVar2 != 0);
    }
    while (pvVar1 != local_30) {
      pvVar1 = (void *)((long)pvVar1 + -0x18);
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    pvStack_28 = local_30;
    operator_delete(local_30);
  }
  return;
}


// ===== 00865430  FUN_00865430 =====

undefined4 FUN_00865430(long param_1,long param_2,ulong param_3)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_88 [72];
  
  uVar6 = param_3 & 0xffffffff;
  uVar3 = (**(code **)(**(long **)(param_1 + 0x20) + 0x10))();
  uVar4 = uVar3 / 1000;
  if (499 < uVar3 % 1000) {
    uVar4 = uVar4 + 1;
  }
  if ((uVar3 & 0x8000000000000000) != 0) {
    uVar4 = -(-uVar3 / 1000) - (ulong)(500 < -uVar3 % 1000);
  }
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x528));
  lVar7 = *(long *)(param_1 + 0x550);
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x528));
  if (lVar7 == 0) {
    auVar8 = FUN_0085a19c(param_1 + 0x300);
    uVar3 = auVar8._0_8_;
    if ((auVar8 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
      uVar5 = uVar3 / 1000;
      if (499 < uVar3 % 1000) {
        uVar5 = uVar5 + 1;
      }
      if ((auVar8 & (undefined1  [16])0x8000000000000000) != (undefined1  [16])0x0) {
        uVar5 = -(-uVar3 / 1000) - (ulong)(500 < -uVar3 % 1000);
      }
      if (uVar5 != 0) {
        lVar7 = uVar5 + ((long)uVar5 >> 1) + 5;
        goto LAB_00865550;
      }
    }
    lVar7 = 100;
  }
  else {
    lVar7 = (lVar7 * 3 >> 1) + 5;
  }
LAB_00865550:
  if (lVar7 < (long)(uVar4 - *(long *)(param_1 + 0x508))) {
    uVar3 = 0;
    *(ulong *)(param_1 + 0x508) = uVar4;
  }
  else {
    if (*(short *)(param_1 + 0x510) == *(short *)(param_2 + (param_3 & 0xffff) * 2 + -2)) {
      return 0;
    }
    if ((param_3 & 0xffff) != 0) {
      uVar4 = 0;
      do {
        if (*(short *)(param_1 + 0x510) == *(short *)(param_2 + uVar4 * 2)) {
          uVar3 = (ulong)((int)uVar4 + 1);
          goto LAB_008655bc;
        }
        uVar4 = uVar4 + 1;
      } while ((param_3 & 0xffff) != uVar4);
    }
    uVar3 = 0;
LAB_008655bc:
    uVar6 = (ulong)(uint)((int)param_3 - (int)uVar3);
    uVar3 = uVar3 & 0xffff;
  }
  param_2 = param_2 + uVar3 * 2;
  uVar1 = (uint)uVar6 & 0xffff;
  lVar7 = 0;
  if ((uVar6 & 0xffff) != 0) {
    lVar7 = param_2;
  }
  if (0xfc < uVar1) {
    uVar1 = 0xfd;
  }
  *(undefined2 *)(param_1 + 0x510) = *(undefined2 *)(param_2 + (ulong)uVar1 * 2 + -2);
  FUN_008646a0(auStack_88,param_1);
  uVar2 = FUN_00856540(param_1 + 0x50,auStack_88,0x40,lVar7,(ulong)uVar1);
  FUN_00853bb0(auStack_88);
  return uVar2;
}


// ===== 00865638  FUN_00865638 =====

void FUN_00865638(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_68 [72];
  
  FUN_008646a0(auStack_68);
  lVar2 = param_2[1] - *param_2;
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = *param_2;
  }
  FUN_00856540(param_1 + 0x50,auStack_68,0x40,lVar1,lVar2 >> 1);
  FUN_00853bb0(auStack_68);
  return;
}


// ===== 00865698  FUN_00865698 =====

void FUN_00865698(long param_1,uint param_2,undefined2 param_3)

{
  FUN_008662c8(*(undefined8 *)(param_1 + 0x40),param_2 & 1,param_3);
  return;
}


// ===== 008656ac  FUN_008656ac =====

void FUN_008656ac(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *local_40;
  long *plStack_38;
  undefined8 local_30;
  
  plStack_38 = (long *)param_2[1];
  local_40 = (long *)*param_2;
  local_30 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  FUN_00856f54(param_1 + 0x50,&local_40);
  plVar1 = local_40;
  plVar3 = plStack_38;
  if (local_40 != (long *)0x0) {
    while (plVar1 != plVar3) {
      plVar3 = plVar3 + -1;
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      plVar2 = (long *)*plVar3;
      *plVar3 = 0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
    }
    plStack_38 = plVar1;
    operator_delete(local_40);
  }
  return;
}


// ===== 0086576c  FUN_0086576c =====

undefined4
FUN_0086576c(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  undefined1 auStack_88 [72];
  
  FUN_008646a0(auStack_88);
  uVar1 = FUN_008558e4(param_1 + 0x50,auStack_88,param_2,param_3,param_4,param_5);
  FUN_00853bb0(auStack_88);
  return uVar1;
}


// ===== 008657ec  FUN_008657ec =====

void FUN_008657ec(long param_1,undefined4 param_2)

{
  FUN_00856318(param_1 + 0x50);
  FUN_0085a110(param_1 + 0x300,param_2);
  return;
}


// ===== 00865824  FUN_00865824 =====

void FUN_00865824(long param_1,undefined4 param_2)

{
  FUN_0085a14c(param_1 + 0x300);
  FUN_008562e0(param_1 + 0x50,param_2);
  return;
}


// ===== 0086585c  FUN_0086585c =====

void FUN_0086585c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_2 + 0x40);
  uVar1 = (**(code **)(**(long **)(param_2 + 0x20) + 0x10))(*(long **)(param_2 + 0x20));
  FUN_0086cebc(param_1,lVar2 + 0x1a8,uVar1);
  return;
}


// ===== 008658a4  FUN_008658a4 =====

void FUN_008658a4(long param_1)

{
  undefined1 auStack_68 [72];
  
  FUN_008646a0(auStack_68);
  FUN_00856540(param_1 + 0x50,auStack_68,2,0,0);
  FUN_00853bb0(auStack_68);
  return;
}


// ===== 008658f8  FUN_008658f8 =====

void FUN_008658f8(long param_1)

{
  undefined1 auStack_68 [72];
  
  FUN_008646a0(auStack_68,param_1 + -8);
  FUN_00856540(param_1 + 0x48,auStack_68,2,0,0);
  FUN_00853bb0(auStack_68);
  return;
}


// ===== 00865950  FUN_00865950 =====

void FUN_00865950(long param_1,long *param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  if (((*(long *)(param_1 + 0x40) != 0) && (iVar1 = FUN_00866370(), iVar1 != 0)) &&
     (*param_2 != param_2[1])) {
    pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x528));
    uVar3 = *(ulong *)(param_1 + 0x550);
    pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x528));
    if (uVar3 == 0) {
      auVar4 = FUN_0085a19c(param_1 + 0x300);
      uVar2 = auVar4._0_8_;
      if ((auVar4 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
        uVar3 = 0;
      }
      else if ((long)uVar2 < 0) {
        uVar3 = -(-uVar2 / 1000) - (ulong)(500 < -uVar2 % 1000);
      }
      else {
        uVar3 = uVar2 / 1000;
        if (499 < uVar2 % 1000) {
          uVar3 = uVar3 + 1;
        }
      }
    }
    FUN_00869130(*(long *)(param_1 + 0x40) + 0x440,param_2,uVar3);
    return;
  }
  return;
}


// ===== 00865a54  FUN_00865a54 =====

void FUN_00865a54(long param_1)

{
  FUN_00865950(param_1 + -8);
  return;
}


// ===== 00865a60  FUN_00865a60 =====

void FUN_00865a60(long param_1,long param_2,ulong param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  long lVar5;
  uint uVar6;
  undefined8 uVar7;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    iVar2 = FUN_008562a4(param_1 + 0x50);
    iVar3 = FUN_00868e14(*(long *)(param_1 + 0x40) + 0x440);
    if (iVar3 == 0) {
      uVar6 = 0;
      uVar7 = 0xaaaaaa00;
    }
    else {
      uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x458);
      uVar6 = (uint)((ulong)uVar7 >> 0x20) & 1;
    }
    if ((param_3 & 0x3ffffffffffffff) != 0) {
      lVar5 = param_3 << 6;
      puVar4 = (undefined4 *)(param_2 + 0x10);
      do {
        if (iVar2 == puVar4[-3]) {
          FUN_008690a0(*(long *)(param_1 + 0x40) + 0x440,*puVar4);
        }
        else {
          uVar1 = 0;
          if ((int)uVar7 == puVar4[-3]) {
            uVar1 = uVar6;
          }
          if (uVar1 == 1) {
            FUN_008690e8(*(long *)(param_1 + 0x40) + 0x440,*puVar4);
          }
        }
        lVar5 = lVar5 + -0x40;
        puVar4 = puVar4 + 0x10;
      } while (lVar5 != 0);
    }
  }
  return;
}


// ===== 00865b44  FUN_00865b44 =====

void FUN_00865b44(long param_1)

{
  FUN_008562a4(param_1 + 0x50);
  return;
}


// ===== 00865b50  FUN_00865b50 =====

void FUN_00865b50(long param_1)

{
  FUN_00865a60(param_1 + -8);
  return;
}


// ===== 00865b5c  FUN_00865b5c =====

void FUN_00865b5c(long param_1)

{
  FUN_00856b68(param_1 + 0x50);
  return;
}


// ===== 00865b68  FUN_00865b68 =====

long FUN_00865b68(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x40) != 0) {
    lVar1 = *(long *)(param_1 + 0x40) + 0x440;
  }
  return lVar1;
}


// ===== 00865b80  FUN_00865b80 =====

long FUN_00865b80(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x40) != 0) {
    lVar1 = *(long *)(param_1 + 0x40) + 0x440;
  }
  return lVar1;
}


// ===== 00865b98  FUN_00865b98 =====

void FUN_00865b98(long param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  lVar3 = (**(code **)(**(long **)(param_1 + 0x20) + 0x10))();
  lVar1 = lVar3;
  if (lVar3 != -0x8000000000000000) {
    lVar1 = lVar3 + -1000000;
  }
  if (lVar3 != 0x7fffffffffffffff) {
    lVar3 = lVar1;
  }
  uVar2 = FUN_00855838(param_1 + 0x50);
  auVar7 = FUN_0085a3d4(param_1 + 0x300,lVar3,uVar2 & 1);
  uVar4 = auVar7._0_8_;
  if ((auVar7 & (undefined1  [16])0x1) != (undefined1  [16])0x0) {
    plVar5 = *(long **)(param_1 + 0x518);
    if (plVar5 != (long *)0x0) {
      uVar6 = (uVar4 >> 3) / 0x7d;
      if (499 < uVar4 + uVar6 * -1000) {
        uVar6 = uVar6 + 1;
      }
      if ((auVar7 & (undefined1  [16])0x8000000000000000) != (undefined1  [16])0x0) {
        uVar6 = -(-uVar4 / 1000) - (ulong)(500 < -uVar4 % 1000);
      }
      (**(code **)(*plVar5 + 0x10))(plVar5,uVar6);
    }
    uVar6 = (uVar4 >> 3) / 0x7d;
    if (499 < uVar4 + uVar6 * -1000) {
      uVar6 = uVar6 + 1;
    }
    if ((auVar7 & (undefined1  [16])0x8000000000000000) != (undefined1  [16])0x0) {
      uVar6 = -(-uVar4 / 1000) - (ulong)(500 < -uVar4 % 1000);
    }
    pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x528));
    *(ulong *)(param_1 + 0x550) = uVar6;
    pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x528));
    if (*(long *)(param_1 + 0x40) != 0) {
      FUN_008663ac(*(long *)(param_1 + 0x40),uVar6 * 1000);
      return;
    }
  }
  return;
}


// ===== 00865d00  FUN_00865d00 =====

void FUN_00865d00(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long *local_90 [2];
  code *local_80;
  code *pcStack_78;
  undefined1 uStack_45;
  undefined1 local_44 [4];
  
  lVar2 = (**(code **)(**(long **)(param_1 + 0x20) + 0x10))();
  if (lVar2 < param_2) {
    lVar5 = *(long *)(param_1 + 0x558);
    plVar4 = *(long **)(param_1 + 0x38);
    if (lVar5 != 0) {
      FUN_00d0f740(1,lVar5);
    }
    local_90[0] = (long *)operator_new(0x30);
    lVar1 = -0x7ffffffffffffc1a;
    if (param_2 != 0x7fffffffffffffff && lVar2 != -0x8000000000000000) {
      lVar1 = (param_2 - lVar2) + 999;
    }
    *local_90[0] = lVar5;
    local_90[0][2] = param_1;
    local_90[0][3] = param_2;
    local_90[0][4] = (long)FUN_004473ec;
    local_90[0][5] = (long)FUN_00866144;
    local_44[0] = 0;
    local_80 = FUN_005db390;
    pcStack_78 = FUN_005db348;
    (**(code **)(*plVar4 + 0x10))(plVar4,local_90,(lVar1 / 1000) * 1000,local_44,&uStack_45);
    (*local_80)(0,local_90,local_90);
  }
  else {
    uVar3 = FUN_0085647c(param_1 + 0x50,0);
    if ((uVar3 & 1) != 0) {
      FUN_008646a0(local_90,param_1);
      FUN_00856540(param_1 + 0x50,local_90,1,0,0);
      FUN_00853bb0(local_90);
    }
  }
  return;
}


// ===== 00865e74  FUN_00865e74 =====

void FUN_00865e74(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *local_60 [2];
  code *local_50;
  code *pcStack_48;
  undefined1 local_24 [3];
  undefined1 uStack_21;
  
  if (param_2 == 0) {
    lVar3 = *(long *)(param_1 + 0x558);
    plVar2 = *(long **)(param_1 + 0x38);
    if (lVar3 != 0) {
      FUN_00d0f740(1,lVar3);
    }
    local_60[0] = (long *)operator_new(0x30);
    *local_60[0] = lVar3;
    local_60[0][4] = (long)FUN_004473ec;
    local_60[0][5] = (long)FUN_008660dc;
    local_60[0][2] = param_1;
    local_50 = FUN_005db390;
    pcStack_48 = FUN_005db348;
    (**(code **)(*plVar2 + 8))(plVar2,local_60,local_24,&uStack_21);
  }
  else {
    lVar1 = (**(code **)(**(long **)(param_1 + 0x20) + 0x10))();
    lVar3 = 0x7fffffffffffffff;
    if ((param_2 != 0x7fffffffffffffff) && (lVar1 != 0x7fffffffffffffff)) {
      lVar3 = -0x8000000000000000;
      if (lVar1 != -0x8000000000000000 && param_2 != -0x8000000000000000) {
        lVar3 = lVar1 + param_2;
      }
    }
    lVar1 = *(long *)(param_1 + 0x558);
    plVar2 = *(long **)(param_1 + 0x38);
    if (lVar1 != 0) {
      FUN_00d0f740(1,lVar1);
    }
    local_60[0] = (long *)operator_new(0x30);
    *local_60[0] = lVar1;
    local_60[0][2] = param_1;
    local_60[0][3] = lVar3;
    local_60[0][4] = (long)FUN_004473ec;
    local_60[0][5] = (long)FUN_00866144;
    local_24[0] = 0;
    local_50 = FUN_005db390;
    pcStack_48 = FUN_005db348;
    (**(code **)(*plVar2 + 0x10))
              (plVar2,local_60,((param_2 + 999) / 1000) * 1000,local_24,&uStack_21);
  }
  (*local_50)(0,local_60,local_60);
  return;
}


// ===== 00866014  FUN_00866014 =====

void FUN_00866014(undefined8 *param_1,undefined8 *param_2)

{
  FUN_00865e74(*param_1,*param_2);
  return;
}


// ===== 00866024  FUN_00866024 =====

undefined8 FUN_00866024(undefined8 *param_1)

{
  FUN_00865b98(*param_1);
  return 1000000;
}


// ===== 0086604c  FUN_0086604c =====

void FUN_0086604c(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined1 auStack_68 [72];
  
  plVar3 = (long *)*param_1;
  lVar2 = *plVar3;
  uVar1 = (ulong)*(byte *)(plVar3 + 4) | 0x100;
  if (*(char *)((long)plVar3 + 0x24) == '\0') {
    uVar1 = 0;
  }
  FUN_00856188(lVar2 + 0x50,(int)plVar3[1],plVar3[2],plVar3[3],uVar1);
  uVar1 = FUN_0085647c(lVar2 + 0x50,(char)plVar3[5]);
  if ((uVar1 & 1) != 0) {
    FUN_008646a0(auStack_68,lVar2);
    FUN_00856540(lVar2 + 0x50,auStack_68,1,0,0);
    FUN_00853bb0(auStack_68);
  }
  return;
}


// ===== 008660dc  FUN_008660dc =====

void FUN_008660dc(long *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined1 auStack_68 [72];
  
  lVar2 = *param_1;
  uVar1 = FUN_0085647c(lVar2 + 0x50,0);
  if ((uVar1 & 1) != 0) {
    FUN_008646a0(auStack_68,lVar2);
    FUN_00856540(lVar2 + 0x50,auStack_68,1,0,0);
    FUN_00853bb0(auStack_68);
  }
  return;
}


// ===== 00866144  FUN_00866144 =====

void FUN_00866144(undefined8 *param_1)

{
  FUN_00865d00(*param_1,param_1[1]);
  return;
}


// ===== 00866154  FUN_00866154 =====

int FUN_00866154(undefined8 *param_1,long param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 *local_8;
  
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 1) = param_3;
  *param_1 = uVar2;
  local_8 = &DAT_aaaaaaaaaaaaaaaa;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_8);
  pthread_mutex_init((pthread_mutex_t *)((long)param_1 + 0xc),(pthread_mutexattr_t *)&local_8);
  iVar1 = pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_8);
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  param_1[9] = 0x8000000000000000;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((long)param_1 + 0x81) = 0;
  *(undefined8 *)((long)param_1 + 0x79) = 0;
  return iVar1;
}


// ===== 008661cc  FUN_008661cc =====

int FUN_008661cc(long param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  if (*(char *)(param_1 + 0x158) == '\x01') {
    FUN_007dc854(param_1 + 0x88);
  }
  FUN_00867228(param_1 + 0x50);
  puVar5 = *(undefined8 **)(param_1 + 0x58);
  puVar6 = *(undefined8 **)(param_1 + 0x60);
  if (puVar5 != puVar6) {
    do {
      puVar4 = puVar5 + 1;
      operator_delete((void *)*puVar5);
      puVar5 = puVar4;
    } while (puVar4 != puVar6);
    puVar5 = *(undefined8 **)(param_1 + 0x58);
    puVar6 = *(undefined8 **)(param_1 + 0x60);
  }
  uVar3 = (ulong)((long)puVar6 + (-8 - ((long)puVar6 << 0x3d))) >> 3;
  uVar2 = (ulong)(((long)puVar5 - (long)puVar6 << 0x3d) - ((long)puVar5 - (long)puVar6)) >> 3;
  if (uVar3 <= uVar2) {
    uVar2 = uVar3;
  }
  if ((1 < uVar2) && ((((int)puVar5 - (int)puVar6 | -(int)puVar6) & 7U) == 0)) {
    uVar2 = uVar2 & 0x1ffffffffffffffe;
    puVar6 = puVar6 + -uVar2;
    do {
      uVar2 = uVar2 - 2;
    } while (uVar2 != 0);
  }
  do {
    if (puVar6 == puVar5) {
      *(undefined8 **)(param_1 + 0x60) = puVar6;
      if (*(void **)(param_1 + 0x50) != (void *)0x0) {
        operator_delete(*(void **)(param_1 + 0x50));
      }
      iVar1 = pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0xc));
      return iVar1;
    }
    puVar6 = puVar6 + -1;
  } while (puVar6 != (undefined8 *)0x0);
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 008662c8  FUN_008662c8 =====

int FUN_008662c8(long param_1,int param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0xc));
  if (((param_2 != 0) && (*(int *)(param_1 + 0x40) != 0)) &&
     (uVar2 = FUN_004022fc(iVar1), (uVar2 & 1) == 0)) {
    FUN_00623bb0(&DAT_001f4e98,"../../modules/rtp_rtcp/source/rtp_packet_history.cc",0x26a,
                 "Purging packet history in order to re-set status.");
  }
  FUN_00867228(param_1 + 0x50);
  if (*(char *)(param_1 + 0x158) == '\x01') {
    FUN_007dc854(param_1 + 0x88);
    *(undefined1 *)(param_1 + 0x158) = 0;
  }
  *(int *)(param_1 + 0x40) = param_2;
  if (0x257f < param_3) {
    param_3 = 0x2580;
  }
  *(ulong *)(param_1 + 0x38) = param_3;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0xc));
  return iVar1;
}


// ===== 00866370  FUN_00866370 =====

undefined4 FUN_00866370(long param_1)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0xc));
  uVar1 = *(undefined4 *)(param_1 + 0x40);
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0xc));
  return uVar1;
}


// ===== 008663ac  FUN_008663ac =====

int FUN_008663ac(long param_1,undefined8 param_2)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0xc));
  *(undefined8 *)(param_1 + 0x48) = param_2;
  if (*(int *)(param_1 + 0x40) != 0) {
    FUN_008663f4(param_1);
  }
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0xc));
  return iVar1;
}


// ===== 008663f4  FUN_008663f4 =====

void FUN_008663f4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  void *pvVar9;
  long lVar10;
  long local_68;
  
  lVar3 = (**(code **)(*(long *)*param_1 + 0x10))();
  plVar6 = (long *)&UNK_0021fc40;
  if (param_1[9] + 0x7fffffffffffffff < 0xfffffffffffffffe) {
    local_68 = param_1[9] * 3;
    if (999999 < local_68) {
      plVar6 = &local_68;
    }
  }
  uVar4 = param_1[0xf];
  if (uVar4 != 0) {
    lVar10 = *plVar6;
    lVar2 = lVar10 * 3;
    do {
      if (uVar4 >> 7 < 0x4b) {
        puVar8 = (undefined8 *)
                 (*(long *)(param_1[0xb] + ((ulong)param_1[0xe] / 0x66) * 8) +
                 ((ulong)param_1[0xe] % 0x66) * 0x28);
        if ((*(byte *)(puVar8 + 1) & 1) != 0) {
          return;
        }
        lVar7 = puVar8[2];
        lVar5 = -0x8000000000000000;
        if (lVar10 != -0x8000000000000000 && lVar7 != -0x8000000000000000) {
          lVar5 = lVar7 + lVar10;
        }
        lVar1 = 0x7fffffffffffffff;
        if (lVar10 != 0x7fffffffffffffff && lVar7 != 0x7fffffffffffffff) {
          lVar1 = lVar5;
        }
        if (lVar3 < lVar1) {
          return;
        }
        if (uVar4 < (ulong)param_1[7]) {
          lVar5 = -0x8000000000000000;
          if (lVar2 != -0x8000000000000000 && lVar7 != -0x8000000000000000) {
            lVar5 = lVar7 + lVar2;
          }
          lVar1 = 0x7fffffffffffffff;
          if (lVar2 != 0x7fffffffffffffff && lVar7 != 0x7fffffffffffffff) {
            lVar1 = lVar5;
          }
          if (lVar3 < lVar1) {
            return;
          }
        }
        pvVar9 = (void *)*puVar8;
        *puVar8 = 0;
        lVar5 = param_1[0xf];
        while ((lVar5 != 0 &&
               (*(long *)(*(long *)(param_1[0xb] + ((ulong)param_1[0xe] / 0x66) * 8) +
                         ((ulong)param_1[0xe] % 0x66) * 0x28) == 0))) {
          FUN_00867394(param_1 + 10);
          lVar5 = param_1[0xf];
        }
      }
      else {
        lVar7 = *(long *)(param_1[0xb] + ((ulong)param_1[0xe] / 0x66) * 8);
        lVar5 = ((ulong)param_1[0xe] % 0x66) * 0x28;
        pvVar9 = *(void **)(lVar7 + lVar5);
        *(undefined8 *)(lVar7 + lVar5) = 0;
        lVar5 = param_1[0xf];
        while ((lVar5 != 0 &&
               (*(long *)(*(long *)(param_1[0xb] + ((ulong)param_1[0xe] / 0x66) * 8) +
                         ((ulong)param_1[0xe] % 0x66) * 0x28) == 0))) {
          FUN_00867394(param_1 + 10);
          lVar5 = param_1[0xf];
        }
      }
      if (pvVar9 != (void *)0x0) {
        FUN_007dc854(pvVar9);
        operator_delete(pvVar9);
      }
      uVar4 = param_1[0xf];
    } while (uVar4 != 0);
  }
  return;
}


// ===== 00866618  FUN_00866618 =====

void * FUN_00866618(long param_1,void *param_2,undefined8 param_3)

{
  ulong uVar1;
  long *plVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  void *pvVar12;
  undefined8 *puVar13;
  uint uVar14;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0xc));
  if (*(int *)(param_1 + 0x40) == 0) {
    uVar7 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0xc));
    if (param_2 != (void *)0x0) {
      FUN_007dc854(param_2);
      operator_delete(param_2);
      return param_2;
    }
    return (void *)(ulong)uVar7;
  }
  FUN_008663f4(param_1);
  uVar8 = *(ulong *)(param_1 + 0x78);
  uVar3 = *(ushort *)((long)param_2 + 4);
  uVar7 = (uint)uVar3;
  if (uVar8 == 0) {
LAB_008666a8:
    uVar14 = 0;
LAB_008666ac:
    uVar11 = (ulong)uVar14;
    if ((uVar11 < uVar8) &&
       (uVar1 = *(long *)(param_1 + 0x70) + uVar11,
       *(long *)(*(long *)(*(long *)(param_1 + 0x58) + (uVar1 / 0x66) * 8) + (uVar1 % 0x66) * 0x28)
       != 0)) {
      uVar8 = FUN_004022fc();
      if ((uVar8 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e94,"../../modules/rtp_rtcp/source/rtp_packet_history.cc",0x3b2,
                     "Duplicate packet inserted: ",uVar3);
      }
      if (*(ulong *)(param_1 + 0x78) <= uVar11) goto LAB_00866a8c;
      uVar11 = *(long *)(param_1 + 0x70) + uVar11;
      lVar9 = (uVar11 % 0x66) * 0x28;
      lVar10 = *(long *)(*(long *)(param_1 + 0x58) + (uVar11 / 0x66) * 8);
      pvVar12 = *(void **)(lVar10 + lVar9);
      *(undefined8 *)(lVar10 + lVar9) = 0;
      if (uVar14 == 0) {
        lVar9 = *(long *)(param_1 + 0x78);
        while ((lVar9 != 0 &&
               (*(long *)(*(long *)(*(long *)(param_1 + 0x58) +
                                   (*(ulong *)(param_1 + 0x70) / 0x66) * 8) +
                         (*(ulong *)(param_1 + 0x70) % 0x66) * 0x28) == 0))) {
          FUN_00867394(param_1 + 0x50);
          lVar9 = *(long *)(param_1 + 0x78);
        }
      }
      if (pvVar12 != (void *)0x0) {
        FUN_007dc854(pvVar12);
        operator_delete(pvVar12);
      }
      uVar8 = *(ulong *)(param_1 + 0x78);
      if (uVar8 != 0) {
        uVar4 = *(ushort *)
                 (*(long *)(*(long *)(*(long *)(param_1 + 0x58) +
                                     (*(ulong *)(param_1 + 0x70) / 0x66) * 8) +
                           (*(ulong *)(param_1 + 0x70) % 0x66) * 0x28) + 4);
        if (uVar4 != uVar7) {
          uVar14 = uVar7 - uVar4;
          if (uVar14 == 0x8000) {
            if (uVar3 <= uVar4) goto LAB_008667bc;
LAB_008668a8:
            if (uVar7 < uVar4) {
              uVar14 = uVar14 + 0x10000;
              goto LAB_00866954;
            }
          }
          else {
            if ((uVar14 >> 0xf & 1) == 0) goto LAB_008668a8;
LAB_008667bc:
            if (uVar4 <= uVar7 && uVar3 != uVar4) goto LAB_0086681c;
          }
          if ((int)uVar14 < 0) goto LAB_008668bc;
          goto LAB_00866954;
        }
      }
      goto LAB_00866940;
    }
  }
  else {
    uVar4 = *(ushort *)
             (*(long *)(*(long *)(*(long *)(param_1 + 0x58) +
                                 (*(ulong *)(param_1 + 0x70) / 0x66) * 8) +
                       (*(ulong *)(param_1 + 0x70) % 0x66) * 0x28) + 4);
    if ((uint)uVar4 == (uint)uVar3) goto LAB_008666a8;
    uVar14 = (uint)uVar3 - (uint)uVar4;
    if (uVar14 == 0x8000) {
      if (uVar7 <= uVar4) goto LAB_00866814;
LAB_00866844:
      if (uVar4 <= uVar7) goto LAB_00866854;
      uVar14 = uVar14 + 0x10000;
      goto LAB_008666ac;
    }
    if ((uVar14 >> 0xf & 1) == 0) goto LAB_00866844;
LAB_00866814:
    if (uVar7 < uVar4 || uVar7 == uVar4) {
LAB_00866854:
      if (-1 < (int)uVar14) goto LAB_008666ac;
    }
    else {
LAB_0086681c:
      uVar14 = uVar14 - 0x10000;
    }
LAB_008668bc:
    uVar11 = *(ulong *)(param_1 + 0x70);
    do {
      if (uVar11 == 0) {
        FUN_0086748c(param_1 + 0x50);
        uVar11 = *(ulong *)(param_1 + 0x70);
      }
      plVar2 = (long *)(*(long *)(param_1 + 0x58) + (uVar11 / 0x66) * 8);
      lVar10 = *plVar2;
      lVar9 = 0;
      if (*(long *)(param_1 + 0x58) != *(long *)(param_1 + 0x60)) {
        lVar9 = lVar10 + (uVar11 % 0x66) * 0x28;
      }
      if (lVar9 == lVar10) {
        lVar9 = plVar2[-1] + 0xff0;
      }
      if ((undefined8 *)(lVar9 + -0x28) == (undefined8 *)0x0) goto LAB_00866a78;
      *(undefined8 *)(lVar9 + -8) = 0;
      bVar6 = uVar14 != 0xffffffff;
      uVar14 = uVar14 + 1;
      *(undefined8 *)(lVar9 + -0x20) = 0;
      *(undefined8 *)(lVar9 + -0x28) = 0;
      *(undefined8 *)(lVar9 + -0x10) = 0;
      *(undefined8 *)(lVar9 + -0x18) = 0;
      uVar11 = *(long *)(param_1 + 0x70) - 1;
      uVar8 = *(long *)(param_1 + 0x78) + 1;
      *(ulong *)(param_1 + 0x70) = uVar11;
      *(ulong *)(param_1 + 0x78) = uVar8;
    } while (bVar6);
LAB_00866940:
    uVar14 = 0;
  }
LAB_00866954:
  while ((int)uVar8 <= (int)uVar14) {
    FUN_00866aa0(param_1 + 0x50);
    uVar8 = *(ulong *)(param_1 + 0x78);
  }
  if (*(int *)(param_1 + 8) != 1) goto LAB_008669b4;
  if (*(char *)(param_1 + 0x158) == '\x01') {
    if (*(ulong *)(param_1 + 0xa0) < *(long *)((long)param_2 + 0x18) + 100U) {
LAB_0086698c:
      FUN_007dc854(param_1 + 0x88);
      *(undefined1 *)(param_1 + 0x158) = 0;
      goto LAB_00866998;
    }
    uVar3 = *(ushort *)((long)param_2 + 4);
    uVar7 = *(ushort *)(param_1 + 0x8c) + 0x2000;
    uVar5 = (uint)uVar3 - (uVar7 & 0xffff);
    if (uVar5 == 0x8000) {
      if ((uVar7 & 0xffff) < (uint)uVar3) goto LAB_0086698c;
    }
    else if (((uint)uVar3 != (uVar7 & 0xffff)) && ((uVar5 >> 0xf & 1) == 0)) goto LAB_0086698c;
  }
  else {
LAB_00866998:
    if (param_1 == -0x88) {
LAB_00866a78:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    FUN_007dc744(param_1 + 0x88,param_2);
    uVar8 = *(ulong *)(param_1 + 0x78);
    *(undefined1 *)(param_1 + 0x158) = 1;
  }
LAB_008669b4:
  lVar9 = *(long *)(param_1 + 0x80);
  *(long *)(param_1 + 0x80) = lVar9 + 1;
  if (uVar14 < uVar8) {
    uVar8 = *(long *)(param_1 + 0x70) + (ulong)uVar14;
    puVar13 = (undefined8 *)
              (*(long *)(*(long *)(param_1 + 0x58) + (uVar8 / 0x66) * 8) + (uVar8 % 0x66) * 0x28);
    pvVar12 = (void *)*puVar13;
    *puVar13 = param_2;
    if (pvVar12 != (void *)0x0) {
      FUN_007dc854(pvVar12);
      operator_delete(pvVar12);
    }
    *(undefined1 *)(puVar13 + 1) = 0;
    puVar13[2] = param_3;
    puVar13[3] = lVar9;
    puVar13[4] = 0;
    uVar7 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0xc));
    return (void *)(ulong)uVar7;
  }
LAB_00866a8c:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/deque:1532: libc++ Hardening assertion __i < size() failed: deque::operator[] index out of bounds\n"
            );
}


// ===== 00866aa0  FUN_00866aa0 =====

long FUN_00866aa0(long param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 8);
  lVar4 = *(long *)(param_1 + 0x10);
  lVar5 = 0;
  if (lVar4 != lVar6) {
    lVar5 = (lVar4 - lVar6 >> 3) * 0x66 + -1;
  }
  if (lVar5 == *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) {
    FUN_00868134(param_1);
    lVar6 = *(long *)(param_1 + 8);
    lVar4 = *(long *)(param_1 + 0x10);
  }
  if ((lVar6 != lVar4) &&
     (uVar1 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20),
     puVar3 = (undefined8 *)(*(long *)(lVar6 + (uVar1 / 0x66) * 8) + (uVar1 % 0x66) * 0x28),
     puVar3 != (undefined8 *)0x0)) {
    puVar3[4] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    lVar5 = *(long *)(param_1 + 0x28) + 1;
    uVar1 = *(long *)(param_1 + 0x20) + lVar5;
    *(long *)(param_1 + 0x28) = lVar5;
    plVar2 = (long *)(*(long *)(param_1 + 8) + (uVar1 / 0x66) * 8);
    lVar6 = *plVar2;
    lVar5 = 0;
    if (*(long *)(param_1 + 8) != *(long *)(param_1 + 0x10)) {
      lVar5 = lVar6 + (uVar1 % 0x66) * 0x28;
    }
    if (lVar5 == lVar6) {
      lVar5 = plVar2[-1] + 0xff0;
    }
    return lVar5 + -0x28;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00866bb8  FUN_00866bb8 =====

long FUN_00866bb8(undefined8 *param_1,uint param_2,undefined8 param_3,code *param_4)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  ushort uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  
  pthread_mutex_lock((pthread_mutex_t *)((long)param_1 + 0xc));
  if (*(int *)(param_1 + 8) != 0) {
    if (param_1[0xf] == 0) {
LAB_00866c40:
      uVar6 = 0;
    }
    else {
      uVar2 = param_2 & 0xffff;
      uVar4 = *(ushort *)
               (*(long *)(*(long *)(param_1[0xb] + ((ulong)param_1[0xe] / 0x66) * 8) +
                         ((ulong)param_1[0xe] % 0x66) * 0x28) + 4);
      if (uVar4 == uVar2) goto LAB_00866c40;
      uVar6 = (param_2 & 0xffff) - (uint)uVar4;
      uVar7 = (uint)uVar4;
      if (uVar6 == 0x8000) {
        if (uVar7 < uVar2) {
          uVar6 = 0x8000;
        }
        else {
LAB_00866cf0:
          lVar8 = 0;
          if ((uVar7 < uVar2) || ((int)uVar6 < 0)) goto LAB_00866c98;
        }
      }
      else {
        if ((uVar6 >> 0xf & 1) != 0) goto LAB_00866cf0;
        if (uVar2 < uVar7) {
          uVar6 = uVar6 + 0x10000;
        }
        else if ((int)uVar6 < 0) goto LAB_00866c94;
      }
    }
    if ((((ulong)uVar6 < (ulong)param_1[0xf]) &&
        (uVar1 = param_1[0xe] + (ulong)uVar6,
        plVar9 = (long *)(*(long *)(param_1[0xb] + (uVar1 / 0x66) * 8) + (uVar1 % 0x66) * 0x28),
        *plVar9 != 0 && plVar9 != (long *)0x0)) && ((*(byte *)(plVar9 + 1) & 1) == 0)) {
      if (((plVar9[4] != 0) &&
          (lVar8 = (**(code **)(*(long *)*param_1 + 0x10))(), lVar8 != 0x7fffffffffffffff)) &&
         (lVar5 = plVar9[2], lVar5 != -0x8000000000000000)) {
        lVar3 = -0x8000000000000000;
        if (lVar5 != 0x7fffffffffffffff && lVar8 != -0x8000000000000000) {
          lVar3 = lVar8 - lVar5;
        }
        if (lVar3 < (long)param_1[9]) goto LAB_00866c94;
      }
      lVar8 = (*param_4)(param_3,*plVar9);
      if (lVar8 != 0) {
        *(undefined1 *)(plVar9 + 1) = 1;
      }
      goto LAB_00866c98;
    }
  }
LAB_00866c94:
  lVar8 = 0;
LAB_00866c98:
  pthread_mutex_unlock((pthread_mutex_t *)((long)param_1 + 0xc));
  return lVar8;
}


// ===== 00866d80  FUN_00866d80 =====

int FUN_00866d80(undefined8 *param_1,uint param_2)

{
  ulong uVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  long *plVar8;
  
  pthread_mutex_lock((pthread_mutex_t *)((long)param_1 + 0xc));
  if (*(int *)(param_1 + 8) == 0) goto LAB_00866e68;
  if (param_1[0xf] == 0) {
LAB_00866df8:
    uVar6 = 0;
  }
  else {
    uVar2 = param_2 & 0xffff;
    uVar3 = *(ushort *)
             (*(long *)(*(long *)(param_1[0xb] + ((ulong)param_1[0xe] / 0x66) * 8) +
                       ((ulong)param_1[0xe] % 0x66) * 0x28) + 4);
    if (uVar3 == uVar2) goto LAB_00866df8;
    uVar6 = (param_2 & 0xffff) - (uint)uVar3;
    uVar7 = (uint)uVar3;
    if (uVar6 == 0x8000) {
      if (uVar2 <= uVar7) {
LAB_00866eb0:
        if (uVar7 < uVar2) goto LAB_00866e68;
        goto LAB_00866eb8;
      }
      uVar6 = 0x8000;
    }
    else {
      if ((uVar6 >> 0xf & 1) != 0) goto LAB_00866eb0;
      if (uVar2 < uVar7) {
        uVar6 = uVar6 + 0x10000;
        goto LAB_00866dfc;
      }
LAB_00866eb8:
      if ((int)uVar6 < 0) goto LAB_00866e68;
    }
  }
LAB_00866dfc:
  if (((ulong)uVar6 < (ulong)param_1[0xf]) &&
     (uVar1 = param_1[0xe] + (ulong)uVar6,
     plVar8 = (long *)(*(long *)(param_1[0xb] + (uVar1 / 0x66) * 8) + (uVar1 % 0x66) * 0x28),
     *plVar8 != 0 && plVar8 != (long *)0x0)) {
    lVar5 = (**(code **)(*(long *)*param_1 + 0x10))();
    plVar8[2] = lVar5;
    *(undefined1 *)(plVar8 + 1) = 0;
    plVar8[4] = plVar8[4] + 1;
  }
LAB_00866e68:
  iVar4 = pthread_mutex_unlock((pthread_mutex_t *)((long)param_1 + 0xc));
  return iVar4;
}


// ===== 00866ec0  FUN_00866ec0 =====

long FUN_00866ec0(undefined8 *param_1,undefined8 param_2,code *param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  pthread_mutex_lock((pthread_mutex_t *)((long)param_1 + 0xc));
  if (*(int *)(param_1 + 8) != 0) {
    if ((*(int *)(param_1 + 1) == 1) && (*(char *)(param_1 + 0x2b) == '\x01')) {
      lVar2 = (*param_3)(param_2,param_1 + 0x11);
      goto LAB_00866ff4;
    }
    if (param_1[0xf] != 0) {
      uVar5 = param_1[0xe];
      uVar1 = uVar5 + param_1[0xf];
      lVar2 = param_1[0xb];
      plVar4 = (long *)(lVar2 + (uVar1 / 0x66) * 8);
      if (lVar2 == param_1[0xc]) {
        lVar7 = 0;
      }
      else {
        lVar7 = *plVar4 + (uVar1 % 0x66) * 0x28;
      }
      while( true ) {
        if (lVar2 == param_1[0xc]) {
          if (lVar7 == 0) goto LAB_00866ff0;
        }
        else if (*(long *)(lVar2 + (uVar5 / 0x66) * 8) + (uVar5 % 0x66) * 0x28 == lVar7)
        goto LAB_00866ff0;
        if (lVar7 == *plVar4) {
          plVar4 = plVar4 + -1;
          lVar6 = *(long *)(*plVar4 + 0xfc8);
          lVar7 = *plVar4 + 0xff0;
        }
        else {
          lVar6 = *(long *)(lVar7 + -0x28);
        }
        if (lVar6 != 0) break;
        lVar7 = lVar7 + -0x28;
      }
      if (((undefined8 *)(lVar7 + -0x28) != (undefined8 *)0x0) &&
         ((*(byte *)(lVar7 + -0x20) & 1) == 0)) {
        lVar2 = (*param_3)(param_2,*(undefined8 *)(lVar7 + -0x28));
        if (lVar2 != 0) {
          uVar3 = (**(code **)(*(long *)*param_1 + 0x10))();
          *(undefined8 *)(lVar7 + -0x18) = uVar3;
          *(long *)(lVar7 + -8) = *(long *)(lVar7 + -8) + 1;
        }
        goto LAB_00866ff4;
      }
    }
  }
LAB_00866ff0:
  lVar2 = 0;
LAB_00866ff4:
  pthread_mutex_unlock((pthread_mutex_t *)((long)param_1 + 0xc));
  return lVar2;
}


// ===== 0086704c  FUN_0086704c =====

int FUN_0086704c(long param_1,ushort *param_2,ulong param_3)

{
  ushort *puVar1;
  ulong uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  void *pvVar9;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0xc));
  if ((param_3 & 0x7fffffffffffffff) != 0) {
    puVar1 = param_2 + param_3;
    do {
      if (*(ulong *)(param_1 + 0x78) == 0) {
LAB_008670e8:
        uVar7 = 0;
LAB_008670ec:
        if ((ulong)uVar7 < *(ulong *)(param_1 + 0x78)) {
          uVar2 = *(long *)(param_1 + 0x70) + (ulong)uVar7;
          lVar8 = *(long *)(*(long *)(param_1 + 0x58) + (uVar2 / 0x66) * 8);
          lVar6 = (uVar2 % 0x66) * 0x28;
          pvVar9 = *(void **)(lVar8 + lVar6);
          *(undefined8 *)(lVar8 + lVar6) = 0;
          if (uVar7 == 0) {
            while ((*(long *)(param_1 + 0x78) != 0 &&
                   (*(long *)(*(long *)(*(long *)(param_1 + 0x58) +
                                       (*(ulong *)(param_1 + 0x70) / 0x66) * 8) +
                             (*(ulong *)(param_1 + 0x70) % 0x66) * 0x28) == 0))) {
              FUN_00867394(param_1 + 0x50);
            }
          }
          if (pvVar9 != (void *)0x0) {
            FUN_007dc854(pvVar9);
            operator_delete(pvVar9);
          }
        }
      }
      else {
        uVar3 = *param_2;
        uVar4 = *(ushort *)
                 (*(long *)(*(long *)(*(long *)(param_1 + 0x58) +
                                     (*(ulong *)(param_1 + 0x70) / 0x66) * 8) +
                           (*(ulong *)(param_1 + 0x70) % 0x66) * 0x28) + 4);
        if ((uint)uVar4 == (uint)uVar3) goto LAB_008670e8;
        uVar7 = (uint)uVar3 - (uint)uVar4;
        if (uVar7 != 0x8000) {
          if ((uVar7 >> 0xf & 1) != 0) goto LAB_008671a8;
          if (uVar3 < uVar4) {
            uVar7 = uVar7 + 0x10000;
            goto LAB_008670ec;
          }
LAB_008671b0:
          if ((int)uVar7 < 0) goto LAB_008670a4;
          goto LAB_008670ec;
        }
        if (uVar4 < uVar3) {
          uVar7 = 0x8000;
          goto LAB_008670ec;
        }
LAB_008671a8:
        if (uVar3 <= uVar4) goto LAB_008671b0;
      }
LAB_008670a4:
      param_2 = param_2 + 1;
    } while (param_2 != puVar1);
  }
  iVar5 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0xc));
  return iVar5;
}


// ===== 008671d8  FUN_008671d8 =====

int FUN_008671d8(long param_1)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0xc));
  FUN_00867228(param_1 + 0x50);
  if (*(char *)(param_1 + 0x158) == '\x01') {
    FUN_007dc854(param_1 + 0x88);
    *(undefined1 *)(param_1 + 0x158) = 0;
  }
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0xc));
  return iVar1;
}


// ===== 00867228  FUN_00867228 =====

void FUN_00867228(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar6;
  void *pvVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar5;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  if (puVar2 != puVar5) {
    uVar6 = *(ulong *)(param_1 + 0x20);
    uVar1 = *(long *)(param_1 + 0x28) + uVar6;
    plVar8 = puVar2 + uVar6 / 0x66;
    puVar10 = (undefined8 *)(*plVar8 + (uVar6 % 0x66) * 0x28);
    puVar9 = (undefined8 *)(puVar2[uVar1 / 0x66] + (uVar1 % 0x66) * 0x28);
    if (puVar10 != puVar9) {
      do {
        if (puVar10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        pvVar7 = (void *)*puVar10;
        *puVar10 = 0;
        if (pvVar7 != (void *)0x0) {
          FUN_007dc854(pvVar7);
          operator_delete(pvVar7);
        }
        puVar10 = puVar10 + 5;
        if ((long)puVar10 - *plVar8 == 0xff0) {
          plVar8 = plVar8 + 1;
          puVar10 = (undefined8 *)*plVar8;
        }
      } while (puVar10 != puVar9);
      puVar2 = *(undefined8 **)(param_1 + 8);
      puVar5 = *(undefined8 **)(param_1 + 0x10);
    }
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  lVar4 = (long)puVar5 - (long)puVar2;
  while (uVar1 = lVar4 >> 3, 2 < uVar1) {
    operator_delete((void *)*puVar2);
    puVar2 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
    *(undefined8 **)(param_1 + 8) = puVar2;
    lVar4 = *(long *)(param_1 + 0x10) - (long)puVar2;
  }
  if (uVar1 == 1) {
    uVar3 = 0x33;
  }
  else {
    if (uVar1 != 2) {
      return;
    }
    uVar3 = 0x66;
  }
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  return;
}


// ===== 00867394  FUN_00867394 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00867394(long param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  ulong uVar3;
  
  if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/deque:2185: libc++ Hardening assertion !empty() failed: deque::pop_front called on an empty deque\n"
              );
  }
  puVar1 = (undefined8 *)
           (*(long *)(*(long *)(param_1 + 8) + (*(ulong *)(param_1 + 0x20) / 0x66) * 8) +
           (*(ulong *)(param_1 + 0x20) % 0x66) * 0x28);
  if (puVar1 != (undefined8 *)0x0) {
    pvVar2 = (void *)*puVar1;
    *puVar1 = 0;
    if (pvVar2 != (void *)0x0) {
      FUN_007dc854(pvVar2);
      operator_delete(pvVar2);
    }
    uVar3 = *(long *)(param_1 + 0x20) + _DAT_001f2940;
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + _UNK_001f2948;
    *(ulong *)(param_1 + 0x20) = uVar3;
    if (0xcb < uVar3) {
      operator_delete((void *)**(undefined8 **)(param_1 + 8));
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -0x66;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 0086748c  FUN_0086748c =====

void FUN_0086748c(long *param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  void *local_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  undefined1 *puStack_28;
  
  lVar5 = param_1[1];
  lVar6 = param_1[2];
  lVar3 = 0;
  if (lVar6 != lVar5) {
    lVar3 = (lVar6 - lVar5 >> 3) * 0x66 + -1;
  }
  if ((ulong)(lVar3 - (param_1[5] + param_1[4])) < 0x66) {
    lVar3 = *param_1;
    uVar7 = param_1[3] - lVar3;
    if (uVar7 <= (ulong)(lVar6 - lVar5)) {
      uVar7 = (long)uVar7 >> 2;
      if (param_1[3] == lVar3) {
        uVar7 = 1;
      }
      puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
      local_40 = &DAT_aaaaaaaaaaaaaaaa;
      local_30 = &DAT_aaaaaaaaaaaaaaaa;
      if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      local_40 = (undefined1 *)operator_new(uVar7 * 8);
      puStack_28 = local_40 + uVar7 * 8;
      puStack_38 = local_40;
      local_30 = local_40;
      local_48 = operator_new(0xff0);
      FUN_00867c24(&local_40,&local_48);
      lVar3 = param_1[1];
      puVar4 = (undefined1 *)param_1[2];
      if ((undefined1 *)lVar3 != puVar4) {
        do {
          FUN_00867eac(&local_40,lVar3);
          puVar4 = (undefined1 *)param_1[2];
          lVar3 = lVar3 + 8;
        } while ((undefined1 *)lVar3 != puVar4);
        lVar3 = param_1[1];
      }
      puVar1 = (undefined1 *)*param_1;
      lVar5 = param_1[3];
      param_1[1] = (long)puStack_38;
      *param_1 = (long)local_40;
      param_1[3] = (long)puStack_28;
      param_1[2] = (long)local_30;
      if ((long)local_30 - (long)puStack_38 == 8) {
        lVar6 = 0x33;
      }
      else {
        lVar6 = param_1[4] + 0x66;
      }
      param_1[4] = lVar6;
      uVar8 = ((long)puVar4 - ((long)puVar4 << 0x3d)) - 8U >> 3;
      uVar7 = (ulong)((lVar3 - (long)puVar4 << 0x3d) - (lVar3 - (long)puVar4)) >> 3;
      if (uVar8 <= uVar7) {
        uVar7 = uVar8;
      }
      local_30 = puVar4;
      if ((1 < uVar7) && ((((int)lVar3 - (int)puVar4 | -(int)puVar4) & 7U) == 0)) {
        uVar7 = uVar7 & 0x1ffffffffffffffe;
        local_30 = (undefined1 *)((long)puVar4 + uVar7 * -8);
        do {
          uVar7 = uVar7 - 2;
        } while (uVar7 != 0);
      }
      do {
        local_40 = puVar1;
        puStack_38 = (undefined1 *)lVar3;
        puStack_28 = (undefined1 *)lVar5;
        if (local_30 == (undefined1 *)lVar3) {
          if (puVar1 == (undefined1 *)0x0) {
            return;
          }
          operator_delete(puVar1);
          return;
        }
        local_30 = (undefined1 *)((long)local_30 + -8);
      } while (local_30 != (undefined1 *)0x0);
      goto LAB_00867654;
    }
    if (lVar5 == lVar3) {
      local_40 = (undefined1 *)operator_new(0xff0);
      FUN_00867c24(param_1,&local_40);
      puVar2 = (undefined8 *)(param_1[2] + -8);
      local_40 = (undefined1 *)*puVar2;
      puVar4 = local_30;
      if (puVar2 == (undefined8 *)0x0) goto LAB_00867654;
      param_1[2] = (long)puVar2;
      FUN_008676ec(param_1,&local_40);
    }
    else {
      local_40 = (undefined1 *)operator_new(0xff0);
      FUN_00867988(param_1,&local_40);
    }
    if (param_1[2] - param_1[1] == 8) {
      lVar3 = 0x33;
    }
    else {
      lVar3 = param_1[4] + 0x66;
    }
    param_1[4] = lVar3;
  }
  else {
    param_1[4] = param_1[4] + 0x66;
    puVar2 = (undefined8 *)(lVar6 + -8);
    local_40 = (undefined1 *)*puVar2;
    puVar4 = local_30;
    if (puVar2 == (undefined8 *)0x0) {
LAB_00867654:
      local_30 = puVar4;
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    param_1[2] = (long)puVar2;
    FUN_008676ec(param_1,&local_40);
  }
  return;
}


// ===== 008676ec  FUN_008676ec =====

void FUN_008676ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  size_t __n;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined8 *__src;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  puVar4 = (undefined8 *)*param_1;
  __src = (undefined8 *)param_1[1];
  if (__src == puVar4) {
    puVar18 = (undefined8 *)param_1[2];
    lVar16 = param_1[3] - (long)puVar18;
    if (lVar16 == 0) {
      uVar7 = param_1[3] - (long)puVar4 >> 2;
      if (puVar18 == __src) {
        uVar7 = 1;
      }
      if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      uVar19 = uVar7 + 3 >> 2;
      pvVar6 = operator_new(uVar7 * 8);
      puVar1 = (undefined8 *)((long)pvVar6 + uVar19 * 8);
      lVar16 = (long)puVar18 - (long)__src;
      iVar17 = (int)puVar18;
      puVar8 = puVar1;
      if (lVar16 != 0) {
        uVar14 = lVar16 - 8U >> 3;
        uVar12 = uVar14;
        if ((ulong)-(long)puVar1 >> 3 <= uVar14) {
          uVar12 = (ulong)-(long)puVar1 >> 3;
        }
        puVar8 = (undefined8 *)((long)puVar1 + lVar16);
        puVar9 = puVar1;
        puVar11 = __src;
        if (0x31 < uVar12) {
          if ((ulong)-(long)puVar1 >> 3 <= uVar14) {
            uVar14 = (ulong)-(long)puVar1 >> 3;
          }
          if ((((((iVar17 - (int)__src | -(int)pvVar6) & 7U) == 0) && (puVar1 <= puVar1 + uVar14))
              && (__src <= __src + uVar14)) && (0x1f < (long)pvVar6 + (uVar19 * 8 - (long)__src))) {
            uVar2 = uVar12 + 1 & 3;
            puVar15 = (undefined8 *)((long)pvVar6 + uVar19 * 8 + 0x10);
            uVar19 = 4;
            if (uVar2 != 0) {
              uVar19 = uVar2;
            }
            puVar13 = __src + 2;
            lVar10 = (uVar12 + 1) - uVar19;
            lVar16 = ~uVar14 + uVar19;
            puVar9 = puVar1 + lVar10;
            puVar11 = __src + lVar10;
            do {
              puVar5 = puVar13 + -1;
              uVar20 = puVar13[-2];
              uVar22 = puVar13[1];
              uVar21 = *puVar13;
              lVar16 = lVar16 + 4;
              puVar13 = puVar13 + 4;
              puVar15[-1] = *puVar5;
              puVar15[-2] = uVar20;
              puVar15[1] = uVar22;
              *puVar15 = uVar21;
              puVar15 = puVar15 + 4;
            } while (lVar16 != 0);
          }
        }
        do {
          if (puVar9 == (undefined8 *)0x0) goto LAB_00867970;
          puVar15 = puVar9 + 1;
          *puVar9 = *puVar11;
          puVar9 = puVar15;
          puVar11 = puVar11 + 1;
        } while (puVar15 != puVar8);
      }
      *param_1 = pvVar6;
      param_1[1] = puVar1;
      uVar12 = (ulong)((long)puVar18 + (-8 - ((long)puVar18 << 0x3d))) >> 3;
      uVar19 = (ulong)(((long)__src - (long)puVar18 << 0x3d) - ((long)__src - (long)puVar18)) >> 3;
      param_1[2] = puVar8;
      param_1[3] = (void *)((long)pvVar6 + uVar7 * 8);
      if (uVar12 <= uVar19) {
        uVar19 = uVar12;
      }
      if ((1 < uVar19) && ((((int)__src - iVar17 | -iVar17) & 7U) == 0)) {
        uVar19 = uVar19 & 0x1ffffffffffffffe;
        puVar18 = puVar18 + -uVar19;
        do {
          uVar19 = uVar19 - 2;
        } while (uVar19 != 0);
      }
      while (puVar18 != __src) {
        puVar18 = puVar18 + -1;
        if (puVar18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      bVar3 = __src != (undefined8 *)0x0;
      __src = puVar1;
      if (bVar3) {
        operator_delete(puVar4);
        __src = (undefined8 *)param_1[1];
      }
    }
    else {
      __n = (long)puVar18 - (long)__src;
      lVar16 = (lVar16 >> 3) + 1;
      puVar18 = puVar18 + ((ulong)(lVar16 - (lVar16 >> 0x3f)) >> 1);
      memmove((void *)((long)puVar18 - __n),__src,__n);
      param_1[1] = (undefined8 *)((long)puVar18 - __n);
      param_1[2] = puVar18;
      __src = (undefined8 *)((long)puVar18 - __n);
    }
  }
  if (__src + -1 != (undefined8 *)0x0) {
    __src[-1] = *param_2;
    param_1[1] = param_1[1] + -8;
    return;
  }
LAB_00867970:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00867988  FUN_00867988 =====

void FUN_00867988(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  size_t __n;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined8 *__src;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  puVar4 = (undefined8 *)*param_1;
  __src = (undefined8 *)param_1[1];
  if (__src == puVar4) {
    puVar18 = (undefined8 *)param_1[2];
    lVar16 = param_1[3] - (long)puVar18;
    if (lVar16 == 0) {
      uVar7 = param_1[3] - (long)puVar4 >> 2;
      if (puVar18 == __src) {
        uVar7 = 1;
      }
      if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      uVar19 = uVar7 + 3 >> 2;
      pvVar6 = operator_new(uVar7 * 8);
      puVar1 = (undefined8 *)((long)pvVar6 + uVar19 * 8);
      lVar16 = (long)puVar18 - (long)__src;
      iVar17 = (int)puVar18;
      puVar8 = puVar1;
      if (lVar16 != 0) {
        uVar14 = lVar16 - 8U >> 3;
        uVar12 = uVar14;
        if ((ulong)-(long)puVar1 >> 3 <= uVar14) {
          uVar12 = (ulong)-(long)puVar1 >> 3;
        }
        puVar8 = (undefined8 *)((long)puVar1 + lVar16);
        puVar9 = puVar1;
        puVar11 = __src;
        if (0x31 < uVar12) {
          if ((ulong)-(long)puVar1 >> 3 <= uVar14) {
            uVar14 = (ulong)-(long)puVar1 >> 3;
          }
          if ((((((iVar17 - (int)__src | -(int)pvVar6) & 7U) == 0) && (puVar1 <= puVar1 + uVar14))
              && (__src <= __src + uVar14)) && (0x1f < (long)pvVar6 + (uVar19 * 8 - (long)__src))) {
            uVar2 = uVar12 + 1 & 3;
            puVar15 = (undefined8 *)((long)pvVar6 + uVar19 * 8 + 0x10);
            uVar19 = 4;
            if (uVar2 != 0) {
              uVar19 = uVar2;
            }
            puVar13 = __src + 2;
            lVar10 = (uVar12 + 1) - uVar19;
            lVar16 = ~uVar14 + uVar19;
            puVar9 = puVar1 + lVar10;
            puVar11 = __src + lVar10;
            do {
              puVar5 = puVar13 + -1;
              uVar20 = puVar13[-2];
              uVar22 = puVar13[1];
              uVar21 = *puVar13;
              lVar16 = lVar16 + 4;
              puVar13 = puVar13 + 4;
              puVar15[-1] = *puVar5;
              puVar15[-2] = uVar20;
              puVar15[1] = uVar22;
              *puVar15 = uVar21;
              puVar15 = puVar15 + 4;
            } while (lVar16 != 0);
          }
        }
        do {
          if (puVar9 == (undefined8 *)0x0) goto LAB_00867c0c;
          puVar15 = puVar9 + 1;
          *puVar9 = *puVar11;
          puVar9 = puVar15;
          puVar11 = puVar11 + 1;
        } while (puVar15 != puVar8);
      }
      *param_1 = pvVar6;
      param_1[1] = puVar1;
      uVar12 = (ulong)((long)puVar18 + (-8 - ((long)puVar18 << 0x3d))) >> 3;
      uVar19 = (ulong)(((long)__src - (long)puVar18 << 0x3d) - ((long)__src - (long)puVar18)) >> 3;
      param_1[2] = puVar8;
      param_1[3] = (void *)((long)pvVar6 + uVar7 * 8);
      if (uVar12 <= uVar19) {
        uVar19 = uVar12;
      }
      if ((1 < uVar19) && ((((int)__src - iVar17 | -iVar17) & 7U) == 0)) {
        uVar19 = uVar19 & 0x1ffffffffffffffe;
        puVar18 = puVar18 + -uVar19;
        do {
          uVar19 = uVar19 - 2;
        } while (uVar19 != 0);
      }
      while (puVar18 != __src) {
        puVar18 = puVar18 + -1;
        if (puVar18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      bVar3 = __src != (undefined8 *)0x0;
      __src = puVar1;
      if (bVar3) {
        operator_delete(puVar4);
        __src = (undefined8 *)param_1[1];
      }
    }
    else {
      __n = (long)puVar18 - (long)__src;
      lVar16 = (lVar16 >> 3) + 1;
      puVar18 = puVar18 + ((ulong)(lVar16 - (lVar16 >> 0x3f)) >> 1);
      memmove((void *)((long)puVar18 - __n),__src,__n);
      param_1[1] = (undefined8 *)((long)puVar18 - __n);
      param_1[2] = puVar18;
      __src = (undefined8 *)((long)puVar18 - __n);
    }
  }
  if (__src + -1 != (undefined8 *)0x0) {
    __src[-1] = *param_2;
    param_1[1] = param_1[1] + -8;
    return;
  }
LAB_00867c0c:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00867c24  FUN_00867c24 =====

void FUN_00867c24(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  undefined8 *__src;
  undefined8 *puVar3;
  void *pvVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  int iVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  puVar17 = (undefined8 *)param_1[2];
  if ((undefined8 *)param_1[3] == puVar17) {
    pvVar2 = (void *)*param_1;
    __src = (undefined8 *)param_1[1];
    if ((long)__src - (long)pvVar2 == 0) {
      uVar5 = (long)param_1[3] - (long)pvVar2 >> 2;
      if (puVar17 == __src) {
        uVar5 = 1;
      }
      if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      uVar18 = uVar5 >> 2;
      pvVar4 = operator_new(uVar5 * 8);
      puVar6 = (undefined8 *)((long)pvVar4 + uVar18 * 8);
      lVar15 = (long)puVar17 - (long)__src;
      iVar16 = (int)puVar17;
      puVar7 = puVar6;
      if (lVar15 != 0) {
        uVar13 = lVar15 - 8U >> 3;
        uVar11 = uVar13;
        if ((ulong)-(long)puVar6 >> 3 <= uVar13) {
          uVar11 = (ulong)-(long)puVar6 >> 3;
        }
        puVar7 = (undefined8 *)((long)puVar6 + lVar15);
        puVar8 = puVar6;
        puVar10 = __src;
        if (0x31 < uVar11) {
          if ((ulong)-(long)puVar6 >> 3 <= uVar13) {
            uVar13 = (ulong)-(long)puVar6 >> 3;
          }
          if ((((((iVar16 - (int)__src | -(int)pvVar4) & 7U) == 0) && (puVar6 <= puVar6 + uVar13))
              && (__src <= __src + uVar13)) && (0x1f < (long)pvVar4 + (uVar18 * 8 - (long)__src))) {
            uVar1 = uVar11 + 1 & 3;
            puVar14 = (undefined8 *)((long)pvVar4 + uVar18 * 8 + 0x10);
            uVar18 = 4;
            if (uVar1 != 0) {
              uVar18 = uVar1;
            }
            puVar12 = __src + 2;
            lVar9 = (uVar11 + 1) - uVar18;
            lVar15 = ~uVar13 + uVar18;
            puVar8 = puVar6 + lVar9;
            puVar10 = __src + lVar9;
            do {
              puVar3 = puVar12 + -1;
              uVar19 = puVar12[-2];
              uVar21 = puVar12[1];
              uVar20 = *puVar12;
              lVar15 = lVar15 + 4;
              puVar12 = puVar12 + 4;
              puVar14[-1] = *puVar3;
              puVar14[-2] = uVar19;
              puVar14[1] = uVar21;
              *puVar14 = uVar20;
              puVar14 = puVar14 + 4;
            } while (lVar15 != 0);
          }
        }
        do {
          if (puVar8 == (undefined8 *)0x0) goto LAB_00867e94;
          puVar14 = puVar8 + 1;
          *puVar8 = *puVar10;
          puVar8 = puVar14;
          puVar10 = puVar10 + 1;
        } while (puVar14 != puVar7);
      }
      *param_1 = pvVar4;
      param_1[1] = puVar6;
      uVar11 = (ulong)((long)puVar17 + (-8 - ((long)puVar17 << 0x3d))) >> 3;
      uVar18 = (ulong)(((long)__src - (long)puVar17 << 0x3d) - ((long)__src - (long)puVar17)) >> 3;
      param_1[2] = puVar7;
      param_1[3] = (void *)((long)pvVar4 + uVar5 * 8);
      if (uVar11 <= uVar18) {
        uVar18 = uVar11;
      }
      puVar6 = puVar17;
      if ((1 < uVar18) && ((((int)__src - iVar16 | -iVar16) & 7U) == 0)) {
        uVar18 = uVar18 & 0x1ffffffffffffffe;
        puVar6 = puVar17 + -uVar18;
        do {
          uVar18 = uVar18 - 2;
        } while (uVar18 != 0);
      }
      while (puVar6 != __src) {
        puVar6 = puVar6 + -1;
        if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      if (__src != (undefined8 *)0x0) {
        operator_delete(pvVar2);
      }
    }
    else {
      lVar15 = ((long)__src - (long)pvVar2 >> 3) + 1;
      uVar5 = (ulong)(lVar15 - (lVar15 >> 0x3f)) >> 1;
      memmove(__src + -uVar5,__src,(long)puVar17 - (long)__src);
      puVar17 = puVar17 + -uVar5;
      param_1[1] = param_1[1] + uVar5 * -8;
      param_1[2] = puVar17;
    }
  }
  if (puVar17 != (undefined8 *)0x0) {
    *puVar17 = *param_2;
    param_1[2] = puVar17 + 1;
    return;
  }
LAB_00867e94:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00867eac  FUN_00867eac =====

void FUN_00867eac(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  undefined8 *__src;
  undefined8 *puVar3;
  void *pvVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  int iVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  puVar17 = (undefined8 *)param_1[2];
  if ((undefined8 *)param_1[3] == puVar17) {
    pvVar2 = (void *)*param_1;
    __src = (undefined8 *)param_1[1];
    if ((long)__src - (long)pvVar2 == 0) {
      uVar5 = (long)param_1[3] - (long)pvVar2 >> 2;
      if (puVar17 == __src) {
        uVar5 = 1;
      }
      if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      uVar18 = uVar5 >> 2;
      pvVar4 = operator_new(uVar5 * 8);
      puVar6 = (undefined8 *)((long)pvVar4 + uVar18 * 8);
      lVar15 = (long)puVar17 - (long)__src;
      iVar16 = (int)puVar17;
      puVar7 = puVar6;
      if (lVar15 != 0) {
        uVar13 = lVar15 - 8U >> 3;
        uVar11 = uVar13;
        if ((ulong)-(long)puVar6 >> 3 <= uVar13) {
          uVar11 = (ulong)-(long)puVar6 >> 3;
        }
        puVar7 = (undefined8 *)((long)puVar6 + lVar15);
        puVar8 = puVar6;
        puVar10 = __src;
        if (0x31 < uVar11) {
          if ((ulong)-(long)puVar6 >> 3 <= uVar13) {
            uVar13 = (ulong)-(long)puVar6 >> 3;
          }
          if ((((((iVar16 - (int)__src | -(int)pvVar4) & 7U) == 0) && (puVar6 <= puVar6 + uVar13))
              && (__src <= __src + uVar13)) && (0x1f < (long)pvVar4 + (uVar18 * 8 - (long)__src))) {
            uVar1 = uVar11 + 1 & 3;
            puVar14 = (undefined8 *)((long)pvVar4 + uVar18 * 8 + 0x10);
            uVar18 = 4;
            if (uVar1 != 0) {
              uVar18 = uVar1;
            }
            puVar12 = __src + 2;
            lVar9 = (uVar11 + 1) - uVar18;
            lVar15 = ~uVar13 + uVar18;
            puVar8 = puVar6 + lVar9;
            puVar10 = __src + lVar9;
            do {
              puVar3 = puVar12 + -1;
              uVar19 = puVar12[-2];
              uVar21 = puVar12[1];
              uVar20 = *puVar12;
              lVar15 = lVar15 + 4;
              puVar12 = puVar12 + 4;
              puVar14[-1] = *puVar3;
              puVar14[-2] = uVar19;
              puVar14[1] = uVar21;
              *puVar14 = uVar20;
              puVar14 = puVar14 + 4;
            } while (lVar15 != 0);
          }
        }
        do {
          if (puVar8 == (undefined8 *)0x0) goto LAB_0086811c;
          puVar14 = puVar8 + 1;
          *puVar8 = *puVar10;
          puVar8 = puVar14;
          puVar10 = puVar10 + 1;
        } while (puVar14 != puVar7);
      }
      *param_1 = pvVar4;
      param_1[1] = puVar6;
      uVar11 = (ulong)((long)puVar17 + (-8 - ((long)puVar17 << 0x3d))) >> 3;
      uVar18 = (ulong)(((long)__src - (long)puVar17 << 0x3d) - ((long)__src - (long)puVar17)) >> 3;
      param_1[2] = puVar7;
      param_1[3] = (void *)((long)pvVar4 + uVar5 * 8);
      if (uVar11 <= uVar18) {
        uVar18 = uVar11;
      }
      puVar6 = puVar17;
      if ((1 < uVar18) && ((((int)__src - iVar16 | -iVar16) & 7U) == 0)) {
        uVar18 = uVar18 & 0x1ffffffffffffffe;
        puVar6 = puVar17 + -uVar18;
        do {
          uVar18 = uVar18 - 2;
        } while (uVar18 != 0);
      }
      while (puVar6 != __src) {
        puVar6 = puVar6 + -1;
        if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      if (__src != (undefined8 *)0x0) {
        operator_delete(pvVar2);
      }
    }
    else {
      lVar15 = ((long)__src - (long)pvVar2 >> 3) + 1;
      uVar5 = (ulong)(lVar15 - (lVar15 >> 0x3f)) >> 1;
      memmove(__src + -uVar5,__src,(long)puVar17 - (long)__src);
      puVar17 = puVar17 + -uVar5;
      param_1[1] = param_1[1] + uVar5 * -8;
      param_1[2] = puVar17;
    }
  }
  if (puVar17 != (undefined8 *)0x0) {
    *puVar17 = *param_2;
    param_1[2] = puVar17 + 1;
    return;
  }
LAB_0086811c:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00868134  FUN_00868134 =====

void FUN_00868134(long *param_1)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  void *local_18;
  
  if ((ulong)param_1[4] < 0x66) {
    lVar2 = param_1[3];
    uVar6 = param_1[2] - param_1[1];
    uVar4 = lVar2 - *param_1;
    if (uVar4 <= uVar6) {
      uVar4 = (long)uVar4 >> 2;
      if (lVar2 == *param_1) {
        uVar4 = 1;
      }
      puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
      local_50 = &DAT_aaaaaaaaaaaaaaaa;
      local_40 = &DAT_aaaaaaaaaaaaaaaa;
      if (uVar4 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      local_50 = (undefined1 *)operator_new(uVar4 * 8);
      puStack_48 = local_50 + uVar6;
      puStack_38 = local_50 + uVar4 * 8;
      local_40 = puStack_48;
      local_18 = operator_new(0xff0);
      FUN_00867c24(&local_50,&local_18);
      lVar2 = param_1[1];
      lVar5 = param_1[2];
      if (lVar5 != lVar2) {
        do {
          lVar5 = lVar5 + -8;
          FUN_008676ec(&local_50,lVar5);
          lVar2 = param_1[1];
        } while (lVar5 != lVar2);
        lVar5 = param_1[2];
      }
      puVar1 = (undefined1 *)*param_1;
      uVar6 = (lVar5 - (lVar5 << 0x3d)) - 8U >> 3;
      uVar4 = (ulong)((lVar2 - lVar5 << 0x3d) - (lVar2 - lVar5)) >> 3;
      lVar3 = param_1[3];
      param_1[1] = (long)puStack_48;
      *param_1 = (long)local_50;
      param_1[3] = (long)puStack_38;
      param_1[2] = (long)local_40;
      if (uVar6 <= uVar4) {
        uVar4 = uVar6;
      }
      local_40 = (undefined1 *)lVar5;
      if ((1 < uVar4) && ((((int)lVar2 - (int)lVar5 | -(int)lVar5) & 7U) == 0)) {
        uVar4 = uVar4 & 0x1ffffffffffffffe;
        local_40 = (undefined1 *)(lVar5 + uVar4 * -8);
        do {
          uVar4 = uVar4 - 2;
        } while (uVar4 != 0);
      }
      while (local_50 = puVar1, puStack_48 = (undefined1 *)lVar2, puStack_38 = (undefined1 *)lVar3,
            local_40 != (undefined1 *)lVar2) {
        local_40 = (undefined1 *)((long)local_40 + -8);
        if (local_40 == (undefined1 *)0x0) {
          local_40 = (undefined1 *)lVar5;
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      if (puVar1 == (undefined1 *)0x0) {
        return;
      }
      operator_delete(puVar1);
      return;
    }
    if (lVar2 != param_1[2]) {
      local_50 = (undefined1 *)operator_new(0xff0);
      FUN_00867c24(param_1,&local_50);
      return;
    }
    local_50 = (undefined1 *)operator_new(0xff0);
    FUN_00867988(param_1,&local_50);
    local_50 = *(undefined1 **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  else {
    param_1[4] = param_1[4] - 0x66;
    local_50 = *(undefined1 **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  FUN_00867eac(param_1,&local_50);
  return;
}


// ===== 0086831c  FUN_0086831c =====

void FUN_0086831c(undefined4 *param_1,undefined4 param_2,undefined8 param_3,undefined1 param_4,
                 long *param_5)

{
  undefined2 uVar1;
  undefined8 uVar2;
  undefined1 *local_8;
  
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 1) = param_3;
  *(undefined1 *)(param_1 + 3) = param_4;
  *(long **)(param_1 + 4) = param_5;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0xff;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 10) = 0x8000000000000000;
  local_8 = &DAT_aaaaaaaaaaaaaaaa;
  uVar2 = (**(code **)(*param_5 + 0x10))(param_5);
  FUN_00889c98(&local_8,uVar2);
  uVar1 = FUN_00889ce0(&local_8,1,0x7fff);
  *(undefined2 *)(param_1 + 6) = uVar1;
  uVar1 = FUN_00889ce0(&local_8,1,0x7fff);
  *(undefined2 *)((long)param_1 + 0x1a) = uVar1;
  return;
}


// ===== 008683bc  FUN_008683bc =====

void FUN_008683bc(int *param_1,undefined1 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  
  if (*(int *)(param_2 + 0xc) == *param_1) {
    if (((*(uint *)(param_2 + 0x80) & 1) == 0) || (*(long *)(param_2 + 0x78) != 2)) {
      if ((*(uint *)(param_2 + 0x80) & (uint)(*(long *)(param_2 + 0x78) == 4)) == 1) {
        FUN_00868550(param_1,param_2);
      }
      *(short *)(param_1 + 6) = (short)param_1[6] + 1;
      FUN_007daabc(param_2);
      if (((*(uint *)(param_2 + 0x80) & 1) == 0) || (*(long *)(param_2 + 0x78) != 4)) {
        *(undefined1 *)(param_1 + 0xe) = *param_2;
        if (param_2[0xbb] == '\x01') {
          lVar1 = *(long *)(param_2 + 0x10);
          uVar2 = *(undefined8 *)(param_2 + 0x18);
          puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
          local_50 = &DAT_aaaaaaaaaaaaaaaa;
          local_40 = &DAT_aaaaaaaaaaaaaaaa;
          FUN_007b53e4(&local_50,param_2 + 0x58);
          puStack_48 = puStack_48 + lVar1;
          if (local_50 == (undefined1 *)0x0) {
            puVar3 = (undefined1 *)0x0;
          }
          else {
            puVar3 = puStack_48 + *(long *)(local_50 + 0x10);
          }
          *(undefined1 *)(param_1 + 7) = *puVar3;
          local_40 = (undefined1 *)uVar2;
          FUN_007b5554(&local_50);
        }
        else {
          *(undefined1 *)(param_1 + 7) = param_2[1];
        }
        param_1[8] = *(int *)(param_2 + 8);
        uVar2 = (**(code **)(**(long **)(param_1 + 4) + 0x10))();
        *(undefined8 *)(param_1 + 0xc) = uVar2;
        *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 0x70);
      }
    }
  }
  else if (((char)param_1[2] == '\x01') && (*(int *)(param_2 + 0xc) == param_1[1])) {
    if (((*(uint *)(param_2 + 0x80) & 1) != 0) && (*(long *)(param_2 + 0x78) == 4)) {
      FUN_00868550(param_1,param_2);
    }
    *(short *)((long)param_1 + 0x1a) = *(short *)((long)param_1 + 0x1a) + 1;
    FUN_007daabc(param_2);
    return;
  }
  return;
}


// ===== 00868550  FUN_00868550 =====

void FUN_00868550(int *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  
  if (*(int *)(param_2 + 0xc) == *param_1) {
    FUN_007dab68(param_2,param_1[8]);
    *(undefined8 *)(param_2 + 0x70) = *(undefined8 *)(param_1 + 10);
    FUN_007daa40(param_2,(char)param_1[7]);
    return;
  }
  if (*(long *)(param_2 + 0x18) != 0) {
    return;
  }
  FUN_007dab68(param_2,param_1[8]);
  *(undefined8 *)(param_2 + 0x70) = *(undefined8 *)(param_1 + 10);
  if (*(long *)(param_1 + 0xc) < 1) {
    return;
  }
  lVar3 = (**(code **)(**(long **)(param_1 + 4) + 0x10))();
  if ((lVar3 == 0x7fffffffffffffff) ||
     (lVar5 = *(long *)(param_1 + 0xc), lVar5 == -0x8000000000000000)) {
    iVar4 = *(int *)(param_2 + 8);
    uVar7 = 0x7fffffffffffffff;
LAB_00868634:
    iVar6 = (int)(uVar7 / 1000);
    if (499 < uVar7 % 1000) {
      iVar6 = iVar6 + 1;
    }
  }
  else {
    if ((lVar3 == -0x8000000000000000) || (lVar5 == 0x7fffffffffffffff)) {
      iVar4 = *(int *)(param_2 + 8);
      uVar7 = 0x8000000000000000;
    }
    else {
      uVar7 = lVar3 - lVar5;
      iVar4 = *(int *)(param_2 + 8);
      if (-1 < (long)uVar7) goto LAB_00868634;
    }
    iVar6 = -(int)(-uVar7 / 1000) - (uint)(500 < -uVar7 % 1000);
  }
  FUN_007dab68(param_2,iVar4 + iVar6 * 0x5a);
  lVar3 = *(long *)(param_2 + 0x70);
  if (0 < lVar3) {
    uVar1 = uVar7;
    if (uVar7 != 0x8000000000000000) {
      uVar1 = lVar3 + uVar7;
    }
    uVar2 = 0x7fffffffffffffff;
    if (lVar3 != 0x7fffffffffffffff && uVar7 != 0x7fffffffffffffff) {
      uVar2 = uVar1;
    }
    *(ulong *)(param_2 + 0x70) = uVar2;
  }
  return;
}


// ===== 008686e4  FUN_008686e4 =====

void FUN_008686e4(long param_1,undefined2 *param_2)

{
  *(undefined2 *)(param_1 + 0x18) = *param_2;
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0xc);
  return;
}


// ===== 0086870c  FUN_0086870c =====

void FUN_0086870c(long param_1,undefined2 *param_2)

{
  *param_2 = *(undefined2 *)(param_1 + 0x18);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x20);
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_2 + 0xc) = *(undefined8 *)(param_1 + 0x30);
  return;
}


// ===== 00868734  FUN_00868734 =====

undefined8 FUN_00868734(long param_1)

{
  if ((*(char *)(param_1 + 0x1c) != -1) &&
     ((*(char *)(param_1 + 0xc) != '\x01' || (*(char *)(param_1 + 0x38) == '\x01')))) {
    return 1;
  }
  return 0;
}


// ===== 0086876c  FUN_0086876c =====

void FUN_0086876c(undefined8 *param_1,long param_2,undefined1 *param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 *local_38;
  
  plVar3 = *(long **)(param_2 + 0x10);
  *param_1 = plVar3;
  uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3);
  FUN_00889c98(param_1 + 1,uVar2);
  *(undefined1 *)(param_1 + 2) = *param_3;
  *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)(param_3 + 0xb4);
  param_1[3] = *(undefined8 *)(param_3 + 0xb8);
  if (*(long **)(param_3 + 0x68) == (long *)0x0) {
    *(undefined1 *)(param_1 + 4) = 0;
    *(undefined1 *)((long)param_1 + 0x24) = 0;
  }
  else {
    uVar2 = (**(code **)(**(long **)(param_3 + 0x68) + 0x18))();
    *(int *)(param_1 + 4) = (int)uVar2;
    *(char *)((long)param_1 + 0x24) = (char)((ulong)uVar2 >> 0x20);
  }
  param_1[5] = param_4;
  param_1[6] = param_5;
  local_38 = &DAT_aaaaaaaaaaaaaaaa;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_38);
  pthread_mutex_init((pthread_mutex_t *)(param_1 + 7),(pthread_mutexattr_t *)&local_38);
  pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_38);
  *(undefined1 *)(param_1 + 0xc) = 1;
  param_1[0xd] = 0x5c0;
  FUN_007d87e8(param_1 + 0xe,param_3[0xb1]);
  if ((char)param_3[0xdf] < '\0') {
    FUN_005478d8(param_1 + 0x14,*(undefined8 *)(param_3 + 200),*(undefined8 *)(param_3 + 0xd0));
  }
  else {
    uVar5 = *(undefined8 *)(param_3 + 0xd0);
    uVar2 = *(undefined8 *)(param_3 + 200);
    param_1[0x16] = *(undefined8 *)(param_3 + 0xd8);
    param_1[0x15] = uVar5;
    param_1[0x14] = uVar2;
  }
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  uVar1 = param_3[0xb2];
  *(undefined2 *)((long)param_1 + 0xd1) = 0;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x1a) = uVar1;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  uVar4 = param_1[1] ^ (ulong)param_1[1] >> 0xc;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  uVar4 = uVar4 ^ uVar4 << 0x19;
  param_1[0x1d] = param_1 + 0x1e;
  *(undefined1 *)(param_1 + 0x20) = 0;
  uVar4 = uVar4 ^ uVar4 >> 0x1b;
  param_1[0x21] = *(undefined8 *)(param_3 + 0x88);
  param_1[1] = uVar4;
  *(int *)(param_1 + 0x13) = (int)uVar4 * 0x4f6cdd1d;
  FUN_008688e4(param_1);
  return;
}


// ===== 008688e4  FUN_008688e4 =====

void FUN_008688e4(long param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  byte bVar6;
  char cVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  byte bVar12;
  long lVar13;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  
  lVar1 = *(long *)(param_1 + 0xd8) * 4 + 0xc;
  iVar3 = FUN_00863de8(&DAT_0021fc60,6,param_1 + 0x70);
  *(long *)(param_1 + 0x90) = lVar1 + iVar3;
  if (*(char *)(param_1 + 0x1c) == '\x01') {
    if ((*(byte *)(param_1 + 0xd0) & 1) != 0) {
      bVar6 = 1;
      bVar12 = 1;
      goto LAB_00868970;
    }
    bVar6 = *(byte *)(param_1 + 0xd2) ^ 1;
  }
  else {
    bVar6 = 0;
    if ((*(byte *)(param_1 + 0xd0) & 1) != 0) {
      bVar12 = 1;
      goto LAB_00868970;
    }
  }
  bVar12 = *(byte *)(param_1 + 0xd1) ^ 1;
LAB_00868970:
  bVar2 = *(char *)(param_1 + 0x10) == '\0';
  puVar9 = (undefined8 *)&UNK_0021fcf8;
  if (bVar2) {
    puVar9 = (undefined8 *)&DAT_0021fc90;
  }
  lVar13 = 0x38;
  if (bVar2) {
    lVar13 = 0x68;
  }
  local_68 = (undefined8 *)0x0;
  local_60 = (undefined8 *)0x0;
  local_58 = (undefined8 *)0x0;
  puVar5 = (undefined8 *)0x0;
  do {
    puVar4 = puVar5;
    switch(*(undefined4 *)puVar9) {
    case 0:
    case 4:
    case 6:
    case 7:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
      break;
    case 1:
    case 2:
    case 3:
    case 5:
    case 8:
    case 9:
    case 0x11:
    case 0x12:
code_r0x008689fc:
      if (puVar5 < local_58) {
        if (puVar5 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        puVar4 = puVar5 + 1;
        *puVar5 = *puVar9;
        local_60 = puVar4;
      }
      else {
        puVar4 = (undefined8 *)FUN_0086a42c(&local_68,puVar9);
        local_60 = puVar4;
      }
      break;
    case 0xe:
      if ((bVar12 & 1) != 0) {
LAB_00868a2c:
        cVar7 = *(char *)(param_1 + 0xb7);
        if (cVar7 < '\0') {
          lVar8 = *(long *)(param_1 + 0xa8);
          goto joined_r0x00868a5c;
        }
LAB_00868a50:
        if (cVar7 != '\0') goto code_r0x008689fc;
      }
      break;
    case 0xf:
      if (((bVar6 ^ 1 | bVar12) & 1) == 0) goto LAB_00868a2c;
      break;
    case 0x10:
      if (((bVar12 | bVar6) & 1) != 0) {
        cVar7 = *(char *)(param_1 + 0xcf);
        if (-1 < cVar7) goto LAB_00868a50;
        lVar8 = *(long *)(param_1 + 0xc0);
joined_r0x00868a5c:
        if (lVar8 != 0) goto code_r0x008689fc;
      }
      break;
    default:
                    /* WARNING: Subroutine does not return */
      FUN_0061ff28();
    }
    lVar13 = lVar13 + -8;
    puVar9 = puVar9 + 1;
    puVar5 = puVar4;
    if (lVar13 == 0) {
      puVar9 = (undefined8 *)0x0;
      if ((long)puVar4 - (long)local_68 != 0) {
        puVar9 = local_68;
      }
      iVar3 = FUN_00863de8(puVar9,(long)puVar4 - (long)local_68 >> 3,param_1 + 0x70);
      lVar1 = lVar1 + iVar3;
      *(long *)(param_1 + 0x88) = lVar1;
      if ((*(byte *)(param_1 + 0x1c) & 1) != 0) {
        *(long *)(param_1 + 0x88) = lVar1 + 2;
      }
      if (local_68 != (undefined8 *)0x0) {
        uVar11 = (ulong)((long)local_60 + (-8 - ((long)local_60 << 0x3d))) >> 3;
        uVar10 = (ulong)(((long)local_68 - (long)local_60 << 0x3d) -
                        ((long)local_68 - (long)local_60)) >> 3;
        if (uVar11 <= uVar10) {
          uVar10 = uVar11;
        }
        puVar9 = local_60;
        if ((1 < uVar10) && ((((int)local_68 - (int)local_60 | -(int)local_60) & 7U) == 0)) {
          uVar10 = uVar10 & 0x1ffffffffffffffe;
          puVar9 = local_60 + -uVar10;
          do {
            uVar10 = uVar10 - 2;
          } while (uVar10 != 0);
        }
        while (puVar9 != local_68) {
          puVar9 = puVar9 + -1;
          if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
        }
        local_60 = local_68;
        operator_delete(local_68);
      }
      return;
    }
  } while( true );
}


// ===== 00868b5c  FUN_00868b5c =====

int FUN_00868b5c(long param_1)

{
  char cVar1;
  int iVar2;
  long local_8;
  
  local_8 = param_1 + 0xe8;
  FUN_0086a538(&local_8,*(undefined8 *)(param_1 + 0xf0));
  if (*(char *)(param_1 + 0xcf) < '\0') {
    operator_delete(*(void **)(param_1 + 0xb8));
    cVar1 = *(char *)(param_1 + 0xb7);
  }
  else {
    cVar1 = *(char *)(param_1 + 0xb7);
  }
  if (cVar1 < '\0') {
    operator_delete(*(void **)(param_1 + 0xa0));
  }
  iVar2 = pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x38));
  return iVar2;
}


// ===== 00868bd8  FUN_00868bd8 =====

undefined1  [16] FUN_00868bd8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 6;
  auVar1._0_8_ = &DAT_0021fc60;
  return auVar1;
}


// ===== 00868bec  FUN_00868bec =====

undefined1  [16] FUN_00868bec(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xd;
  auVar1._0_8_ = &DAT_0021fc90;
  return auVar1;
}


// ===== 00868c00  FUN_00868c00 =====

int FUN_00868c00(long param_1,undefined1 param_2)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x38));
  *(undefined1 *)(param_1 + 0x86) = param_2;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x38));
  return iVar1;
}


// ===== 00868c38  FUN_00868c38 =====

uint FUN_00868c38(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  bool bVar1;
  uint uVar2;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x38));
  uVar2 = FUN_007d886c(param_1 + 0x70,param_4,param_2,param_3);
  bVar1 = true;
  if (((*(char *)(param_1 + 0x78) == '\0') && (*(char *)(param_1 + 0x79) == '\0')) &&
     (*(char *)(param_1 + 0x75) == '\0')) {
    bVar1 = *(char *)(param_1 + 0x71) != '\0';
  }
  *(bool *)(param_1 + 0x100) = bVar1;
  FUN_008688e4(param_1);
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x38));
  return uVar2 & 1;
}


// ===== 00868cd0  FUN_00868cd0 =====

int FUN_00868cd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x38));
  FUN_007d8cbc(param_1 + 0x70,param_2,param_3);
  bVar1 = true;
  if (((*(char *)(param_1 + 0x78) == '\0') && (*(char *)(param_1 + 0x79) == '\0')) &&
     (*(char *)(param_1 + 0x75) == '\0')) {
    bVar1 = *(char *)(param_1 + 0x71) != '\0';
  }
  *(bool *)(param_1 + 0x100) = bVar1;
  FUN_008688e4(param_1);
  iVar2 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x38));
  return iVar2;
}


// ===== 00868d54  FUN_00868d54 =====

int FUN_00868d54(long param_1,undefined8 param_2)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x38));
  *(undefined8 *)(param_1 + 0x68) = param_2;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x38));
  return iVar1;
}


// ===== 00868d8c  FUN_00868d8c =====

undefined8 FUN_00868d8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}


// ===== 00868d98  FUN_00868d98 =====

int FUN_00868d98(long param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x38));
  if ((param_2 == 0) || ((*(char *)(param_1 + 0x1c) == '\x01' && (*(long *)(param_1 + 0xf8) != 0))))
  {
    *(int *)(param_1 + 0xe0) = param_2;
  }
  else {
    uVar2 = FUN_004249b0(iVar1);
    if ((uVar2 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../modules/rtp_rtcp/source/rtp_sender.cc",0x7eb,
                   "Failed to enable RTX without RTX SSRC or payload types.");
    }
  }
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x38));
  return iVar1;
}


// ===== 00868e14  FUN_00868e14 =====

undefined4 FUN_00868e14(long param_1)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x38));
  uVar1 = *(undefined4 *)(param_1 + 0xe0);
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x38));
  return uVar1;
}


// ===== 00868e50  FUN_00868e50 =====

int FUN_00868e50(long param_1,int param_2,undefined1 param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined1 local_34 [3];
  undefined1 uStack_31;
  undefined1 *local_18;
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x38));
  if (param_2 < 0) {
    uVar3 = FUN_004249b0(iVar1);
    if ((uVar3 & 1) == 0) {
      FUN_00623bb0(&DAT_001f1906,"../../modules/rtp_rtcp/source/rtp_sender.cc",0x87b,
                   "Invalid RTX payload type: ",param_2,&DAT_001ea377);
    }
  }
  else {
    local_18 = local_34;
    local_34[0] = param_3;
    lVar2 = FUN_0086a5ac(0,param_1 + 0xe8,param_1 + 0xe8,&DAT_001f94c3,&local_18,&uStack_31);
    *(char *)(lVar2 + 0x1a) = (char)param_2;
  }
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x38));
  return iVar1;
}


// ===== 00868f08  FUN_00868f08 =====

int FUN_00868f08(long param_1,undefined4 param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  void *pvVar3;
  long *plVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  int *local_48;
  long lStack_40;
  byte *local_38;
  byte local_18 [4];
  int local_14;
  
  local_14 = 0;
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x38));
  bVar1 = *(byte *)(param_1 + 0xe0);
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x38));
  local_18[0] = bVar1 & 1;
  local_48 = &local_14;
  local_38 = local_18;
  lStack_40 = param_1;
  pvVar3 = (void *)FUN_00866bb8(*(undefined8 *)(param_1 + 0x28),param_2,&local_48,FUN_0086a6b0);
  if (local_14 == 0) {
    iVar5 = 0;
    if (pvVar3 != (void *)0x0) {
      FUN_007dc854(pvVar3);
      operator_delete(pvVar3);
      iVar5 = 0;
    }
  }
  else if (pvVar3 == (void *)0x0) {
    iVar5 = -1;
  }
  else {
    FUN_007dc8a8(pvVar3,2);
    *(undefined1 *)((long)pvVar3 + 0xba) = 0;
    local_60 = (undefined8 *)operator_new(8);
    if (local_60 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    plVar4 = *(long **)(param_1 + 0x30);
    *local_60 = pvVar3;
    local_58 = local_60 + 1;
    local_50 = local_58;
    (**(code **)(*plVar4 + 0x10))(plVar4,&local_60);
    puVar2 = local_60;
    iVar5 = local_14;
    puVar6 = local_58;
    if (local_60 != (undefined8 *)0x0) {
      while (puVar2 != puVar6) {
        puVar6 = puVar6 + -1;
        if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        pvVar3 = (void *)*puVar6;
        *puVar6 = 0;
        if (pvVar3 != (void *)0x0) {
          FUN_007dc854(pvVar3);
          operator_delete(pvVar3);
        }
      }
      local_58 = puVar2;
      operator_delete(local_60);
      iVar5 = local_14;
    }
  }
  return iVar5;
}


// ===== 008690a0  FUN_008690a0 =====

int FUN_008690a0(long param_1)

{
  byte bVar1;
  int iVar2;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x38));
  bVar1 = *(byte *)(param_1 + 0xd1);
  *(undefined1 *)(param_1 + 0xd1) = 1;
  if ((bVar1 & 1) == 0) {
    FUN_008688e4(param_1);
  }
  iVar2 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x38));
  return iVar2;
}


// ===== 008690e8  FUN_008690e8 =====

int FUN_008690e8(long param_1)

{
  byte bVar1;
  int iVar2;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x38));
  bVar1 = *(byte *)(param_1 + 0xd2);
  *(undefined1 *)(param_1 + 0xd2) = 1;
  if ((bVar1 & 1) == 0) {
    FUN_008688e4(param_1);
  }
  iVar2 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x38));
  return iVar2;
}


// ===== 00869130  FUN_00869130 =====

void FUN_00869130(long param_1,undefined8 *param_2,long param_3)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  int iVar4;
  ulong uVar5;
  
  FUN_008663ac(*(undefined8 *)(param_1 + 0x28),param_3 * 1000 + 5000);
  puVar1 = (undefined2 *)param_2[1];
  puVar3 = (undefined2 *)*param_2;
  do {
    if (puVar3 == puVar1) {
      return;
    }
    uVar2 = *puVar3;
    iVar4 = FUN_00868f08(param_1,uVar2);
    puVar3 = puVar3 + 1;
  } while (-1 < iVar4);
  uVar5 = FUN_004022fc();
  if ((uVar5 & 1) != 0) {
    return;
  }
  FUN_00623bb0(&DAT_001f1906,"../../modules/rtp_rtcp/source/rtp_sender.cc",0xb12,
               "Failed resending RTP packet ",uVar2,", Discard rest of packets.");
  return;
}


// ===== 008691e8  FUN_008691e8 =====

byte FUN_008691e8(long param_1)

{
  byte bVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x38));
  if (*(char *)(param_1 + 0x60) == '\x01') {
    bVar1 = *(byte *)(param_1 + 0x100);
  }
  else {
    bVar1 = 0;
  }
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x38));
  return bVar1 & 1;
}


// ===== 00869238  FUN_00869238 =====

byte FUN_00869238(long param_1)

{
  byte bVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x38));
  if ((*(char *)(param_1 + 0x60) == '\x01') && (*(char *)(param_1 + 0x100) == '\x01')) {
    bVar1 = *(byte *)(param_1 + 0xe0) >> 1 & 1;
  }
  else {
    bVar1 = 0;
  }
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x38));
  return bVar1;
}


// ===== 00869298  FUN_00869298 =====

void FUN_00869298(long **param_1,long param_2,ulong param_3,ulong param_4,ulong param_5)

{
  uint uVar1;
  char cVar2;
  ulong uVar3;
  undefined1 *puVar4;
  long *plVar5;
  bool bVar6;
  ulong *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  void *pvVar13;
  undefined1 auVar14 [16];
  ulong *local_a8;
  ulong *puStack_a0;
  long local_98;
  undefined1 *local_90;
  ulong local_88;
  long *local_80;
  long *plStack_78;
  long *local_70;
  ulong uStack_68;
  
  local_70 = (long *)0x0;
  local_80 = (long *)0x0;
  plStack_78 = (long *)0x0;
  local_88 = param_3;
  uStack_68 = param_3;
  pthread_mutex_lock((pthread_mutex_t *)(param_2 + 0x38));
  if ((*(char *)(param_2 + 0x60) == '\x01') && ((*(byte *)(param_2 + 0x100) & 1) != 0)) {
    uVar1 = *(uint *)(param_2 + 0xe0);
    pthread_mutex_unlock((pthread_mutex_t *)(param_2 + 0x38));
    if (((uVar1 >> 1 & 1) != 0) && (0x31 < param_3)) {
      do {
        local_90 = &DAT_aaaaaaaaaaaaaaaa;
        local_a8 = &uStack_68;
        puStack_a0 = &local_88;
        local_98 = param_2;
        local_90 = (undefined1 *)
                   FUN_00866ec0(*(undefined8 *)(param_2 + 0x28),&local_a8,FUN_0086a77c);
        if (local_90 == (undefined1 *)0x0) break;
        bVar6 = *(ulong *)(local_90 + 0x18) <= local_88;
        uVar11 = local_88 - *(ulong *)(local_90 + 0x18);
        local_88 = 0;
        if (bVar6) {
          local_88 = uVar11;
        }
        FUN_007dc8a8(local_90,4);
        puVar4 = local_90;
        if (plStack_78 < local_70) {
          if (plStack_78 == (long *)0x0) goto LAB_008697bc;
          local_90 = (undefined1 *)0x0;
          plVar8 = plStack_78 + 1;
          *plStack_78 = (long)puVar4;
        }
        else {
          plVar8 = (long *)FUN_0086a31c(&local_80,&local_90);
        }
        puVar4 = local_90;
        local_90 = (undefined1 *)0x0;
        plStack_78 = plVar8;
        if (puVar4 != (undefined1 *)0x0) {
          FUN_007dc854(puVar4);
          operator_delete(puVar4);
        }
      } while (0x31 < local_88);
    }
  }
  else {
    pthread_mutex_unlock((pthread_mutex_t *)(param_2 + 0x38));
  }
  pthread_mutex_lock((pthread_mutex_t *)(param_2 + 0x38));
  if (*(char *)(param_2 + 0x60) == '\x01') {
    uVar11 = *(long *)(param_2 + 0x68) - *(long *)(param_2 + 0x90);
    if (*(char *)(param_2 + 0x10) == '\x01') {
      if (local_88 <= uVar11) {
        uVar11 = local_88;
      }
      if (0xfe < uVar11) {
        uVar11 = 0xff;
      }
      if (local_88 < 0x33) {
        uVar11 = 0x32;
      }
    }
    else if (0xfe < uVar11) {
      uVar11 = 0xff;
    }
    if (local_88 != 0) {
      do {
        local_a8 = (ulong *)&DAT_aaaaaaaaaaaaaaaa;
        puVar7 = (ulong *)operator_new(0xd0);
        FUN_007dc674(puVar7,param_2 + 0x70);
        local_a8 = puVar7;
        FUN_007dc8a8(puVar7,4);
        FUN_007da930(local_a8,0);
        if (*(int *)(param_2 + 0xe0) == 0) {
          if ((param_5 & 1) == 0) goto LAB_00869528;
          FUN_007dabd4(local_a8,*(undefined4 *)(param_2 + 0x14));
          if (((*(byte *)(param_2 + 0xd0) & 1) != 0) || ((*(byte *)(param_2 + 0xd1) & 1) == 0)) {
            lVar10 = (long)*(char *)(param_2 + 0xcf);
            lVar12 = lVar10;
            if (lVar10 < 0) {
              lVar12 = *(long *)(param_2 + 0xc0);
            }
            if (lVar12 != 0) {
              lVar12 = *(long *)(param_2 + 0xc0);
              if (-1 < *(char *)(param_2 + 0xcf)) {
                lVar12 = lVar10;
              }
              auVar14 = FUN_007dbacc(local_a8,0x10,lVar12);
              if (auVar14._8_8_ != 0) {
                uVar3 = *(ulong *)(param_2 + 0xc0);
                lVar12 = *(long *)(param_2 + 0xb8);
                if (-1 < (char)*(byte *)(param_2 + 0xcf)) {
                  uVar3 = (ulong)*(byte *)(param_2 + 0xcf);
                  lVar12 = param_2 + 0xb8;
                }
                FUN_007d9944(auVar14._0_8_,auVar14._8_8_,lVar12,uVar3);
              }
            }
            cVar2 = *(char *)(param_2 + 0xb7);
            lVar10 = (long)cVar2;
            lVar12 = lVar10;
            if (lVar10 < 0) {
              lVar12 = *(long *)(param_2 + 0xa8);
            }
            if (lVar12 != 0) {
              lVar12 = *(long *)(param_2 + 0xa8);
              uVar9 = 0xe;
              goto LAB_0086960c;
            }
          }
LAB_00869634:
          auVar14 = FUN_007dbacc(local_a8,8,2);
          if (auVar14._8_8_ != 0) {
            *auVar14._0_8_ = 0;
          }
          auVar14 = FUN_007dbacc(local_a8,1,3);
          if (auVar14._8_8_ != 0) {
            *(undefined1 *)(auVar14._0_8_ + 1) = 0;
            *auVar14._0_8_ = 0;
          }
          auVar14 = FUN_007dbacc(local_a8,5,3);
          if (auVar14._8_8_ != 0) {
            *(undefined1 *)(auVar14._0_8_ + 1) = 0;
            *auVar14._0_8_ = 0;
          }
          FUN_007db83c(local_a8,uVar11);
          puVar7 = local_a8;
          bVar6 = uVar11 <= local_88;
          uVar3 = local_88 - uVar11;
          local_88 = 0;
          if (bVar6) {
            local_88 = uVar3;
          }
          if (plStack_78 < local_70) {
            if (plStack_78 == (long *)0x0) {
LAB_008697bc:
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                        );
            }
            local_a8 = (ulong *)0x0;
            plVar8 = plStack_78 + 1;
            *plStack_78 = (long)puVar7;
          }
          else {
            plVar8 = (long *)FUN_0086a31c(&local_80,&local_a8);
          }
          bVar6 = false;
          plStack_78 = plVar8;
        }
        else {
          if ((((param_4 & 1) != 0) || (*(char *)(param_2 + 0x75) != '\0')) ||
             (*(char *)(param_2 + 0x78) != '\0')) {
            if ((*(byte *)(param_2 + 0x1c) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/optional:1064: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                        );
            }
            FUN_007dabd4(local_a8,*(undefined4 *)(param_2 + 0x18));
            FUN_007daa40(local_a8,*(undefined1 *)(*(long *)(param_2 + 0xe8) + 0x1a));
            if (((*(byte *)(param_2 + 0xd0) & 1) != 0) || ((*(byte *)(param_2 + 0xd2) & 1) == 0)) {
              lVar10 = (long)*(char *)(param_2 + 0xcf);
              lVar12 = lVar10;
              if (lVar10 < 0) {
                lVar12 = *(long *)(param_2 + 0xc0);
              }
              if (lVar12 != 0) {
                lVar12 = *(long *)(param_2 + 0xc0);
                if (-1 < *(char *)(param_2 + 0xcf)) {
                  lVar12 = lVar10;
                }
                auVar14 = FUN_007dbacc(local_a8,0x10,lVar12);
                if (auVar14._8_8_ != 0) {
                  uVar3 = *(ulong *)(param_2 + 0xc0);
                  lVar12 = *(long *)(param_2 + 0xb8);
                  if (-1 < (char)*(byte *)(param_2 + 0xcf)) {
                    uVar3 = (ulong)*(byte *)(param_2 + 0xcf);
                    lVar12 = param_2 + 0xb8;
                  }
                  FUN_007d9944(auVar14._0_8_,auVar14._8_8_,lVar12,uVar3);
                }
              }
              cVar2 = *(char *)(param_2 + 0xb7);
              lVar10 = (long)cVar2;
              lVar12 = lVar10;
              if (lVar10 < 0) {
                lVar12 = *(long *)(param_2 + 0xa8);
              }
              if (lVar12 != 0) {
                lVar12 = *(long *)(param_2 + 0xa8);
                uVar9 = 0xf;
LAB_0086960c:
                if (-1 < cVar2) {
                  lVar12 = lVar10;
                }
                auVar14 = FUN_007dbacc(local_a8,uVar9,lVar12);
                if (auVar14._8_8_ != 0) {
                  uVar3 = *(ulong *)(param_2 + 0xa8);
                  lVar12 = *(long *)(param_2 + 0xa0);
                  if (-1 < (char)*(byte *)(param_2 + 0xb7)) {
                    uVar3 = (ulong)*(byte *)(param_2 + 0xb7);
                    lVar12 = param_2 + 0xa0;
                  }
                  FUN_007d9944(auVar14._0_8_,auVar14._8_8_,lVar12,uVar3);
                }
              }
            }
            goto LAB_00869634;
          }
LAB_00869528:
          bVar6 = true;
        }
        puVar7 = local_a8;
        local_a8 = (ulong *)0x0;
        if (puVar7 != (ulong *)0x0) {
          FUN_007dc854(puVar7);
          operator_delete(puVar7);
        }
        if (local_88 == 0) {
          bVar6 = true;
        }
      } while (!bVar6);
    }
    param_1[1] = plStack_78;
    *param_1 = local_80;
    param_1[2] = local_70;
    param_1 = &local_80;
  }
  *param_1 = (long *)0x0;
  param_1[1] = (long *)0x0;
  param_1[2] = (long *)0x0;
  pthread_mutex_unlock((pthread_mutex_t *)(param_2 + 0x38));
  plVar5 = local_80;
  plVar8 = plStack_78;
  if (local_80 != (long *)0x0) {
    while (plVar5 != plVar8) {
      plVar8 = plVar8 + -1;
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      pvVar13 = (void *)*plVar8;
      *plVar8 = 0;
      if (pvVar13 != (void *)0x0) {
        FUN_007dc854(pvVar13);
        operator_delete(pvVar13);
      }
    }
    plStack_78 = plVar5;
    operator_delete(local_80);
  }
  return;
}


// ===== 008697e4  FUN_008697e4 =====

void FUN_008697e4(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  void *pvVar5;
  long *local_48;
  long *local_40;
  undefined8 local_38;
  
  uVar2 = (**(code **)(*(long *)*param_1 + 0x10))();
  local_48 = (long *)*param_2;
  local_40 = (long *)param_2[1];
  if (local_48 != local_40) {
    do {
      lVar4 = *local_48;
      if ((*(uint *)(lVar4 + 0x80) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0061fd88("../../modules/rtp_rtcp/source/rtp_sender.cc",0x1ef,
                     "packet->packet_type().has_value()",&DAT_001fbee0,
                     "Packet type must be set before sending.");
      }
      if (*(long *)(lVar4 + 0x70) < 1) {
        *(undefined8 *)(lVar4 + 0x70) = uVar2;
      }
      local_48 = local_48 + 1;
    } while (local_48 != local_40);
    local_48 = (long *)*param_2;
    local_40 = (long *)param_2[1];
  }
  local_38 = param_2[2];
  plVar3 = (long *)param_1[6];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  (**(code **)(*plVar3 + 0x10))(plVar3,&local_48);
  plVar1 = local_48;
  plVar3 = local_40;
  if (local_48 != (long *)0x0) {
    while (plVar1 != plVar3) {
      plVar3 = plVar3 + -1;
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      pvVar5 = (void *)*plVar3;
      *plVar3 = 0;
      if (pvVar5 != (void *)0x0) {
        FUN_007dc854(pvVar5);
        operator_delete(pvVar5);
      }
    }
    local_40 = plVar1;
    operator_delete(local_48);
  }
  return;
}


// ===== 00869938  FUN_00869938 =====

undefined8 FUN_00869938(long param_1)

{
  undefined8 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x38));
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x38));
  return uVar1;
}


// ===== 00869974  FUN_00869974 =====

undefined8 FUN_00869974(long param_1)

{
  undefined8 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x38));
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x38));
  return uVar1;
}


// ===== 008699b0  FUN_008699b0 =====

void * FUN_008699b0(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  void *pvVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x38));
  if (*(ulong *)(param_1 + 0xd8) < param_3) {
    *(ulong *)(param_1 + 0xd8) = param_3;
    FUN_008688e4(param_1);
  }
  pvVar3 = operator_new(0xd0);
  FUN_007dc6dc(pvVar3,param_1 + 0x70,*(undefined8 *)(param_1 + 0x68));
  FUN_007dabd4(pvVar3,*(undefined4 *)(param_1 + 0x14));
  FUN_007dad8c(pvVar3,param_2,param_3);
  auVar5 = FUN_007dbacc(pvVar3,5,3);
  if (auVar5._8_8_ != 0) {
    *(undefined1 *)(auVar5._0_8_ + 1) = 0;
    *auVar5._0_8_ = 0;
  }
  auVar5 = FUN_007dbacc(pvVar3,1,3);
  if (auVar5._8_8_ != 0) {
    *(undefined1 *)(auVar5._0_8_ + 1) = 0;
    *auVar5._0_8_ = 0;
  }
  auVar5 = FUN_007dbacc(pvVar3,8,2);
  if (auVar5._8_8_ != 0) {
    *auVar5._0_8_ = 0;
  }
  if (((*(byte *)(param_1 + 0xd0) & 1) != 0) || ((*(byte *)(param_1 + 0xd1) & 1) == 0)) {
    lVar4 = (long)*(char *)(param_1 + 0xcf);
    lVar1 = lVar4;
    if (lVar4 < 0) {
      lVar1 = *(long *)(param_1 + 0xc0);
    }
    if (lVar1 != 0) {
      lVar1 = *(long *)(param_1 + 0xc0);
      if (-1 < *(char *)(param_1 + 0xcf)) {
        lVar1 = lVar4;
      }
      auVar5 = FUN_007dbacc(pvVar3,0x10,lVar1);
      if (auVar5._8_8_ != 0) {
        uVar2 = *(ulong *)(param_1 + 0xc0);
        lVar1 = *(long *)(param_1 + 0xb8);
        if (-1 < (char)*(byte *)(param_1 + 0xcf)) {
          uVar2 = (ulong)*(byte *)(param_1 + 0xcf);
          lVar1 = param_1 + 0xb8;
        }
        FUN_007d9944(auVar5._0_8_,auVar5._8_8_,lVar1,uVar2);
      }
    }
    lVar4 = (long)*(char *)(param_1 + 0xb7);
    lVar1 = lVar4;
    if (lVar4 < 0) {
      lVar1 = *(long *)(param_1 + 0xa8);
    }
    if (lVar1 != 0) {
      lVar1 = *(long *)(param_1 + 0xa8);
      if (-1 < *(char *)(param_1 + 0xb7)) {
        lVar1 = lVar4;
      }
      auVar5 = FUN_007dbacc(pvVar3,0xe,lVar1);
      if (auVar5._8_8_ != 0) {
        uVar2 = *(ulong *)(param_1 + 0xa8);
        lVar1 = *(long *)(param_1 + 0xa0);
        if (-1 < (char)*(byte *)(param_1 + 0xb7)) {
          uVar2 = (ulong)*(byte *)(param_1 + 0xb7);
          lVar1 = param_1 + 0xa0;
        }
        FUN_007d9944(auVar5._0_8_,auVar5._8_8_,lVar1,uVar2);
      }
    }
  }
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x38));
  return pvVar3;
}


// ===== 00869b54  FUN_00869b54 =====

long FUN_00869b54(long param_1)

{
  long lVar1;
  long lVar2;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x38));
  if (*(int *)(param_1 + 0xe0) == 0) {
    lVar1 = 0;
    goto LAB_00869bb4;
  }
  if ((((*(byte *)(param_1 + 0xd0) & 1) != 0) || ((*(byte *)(param_1 + 0xd2) & 1) != 0)) ||
     (*(char *)(param_1 + 0xd1) != '\x01')) {
    lVar1 = 2;
    goto LAB_00869bb4;
  }
  lVar1 = (long)*(char *)(param_1 + 0xcf);
  if (lVar1 < 0) {
    lVar1 = *(long *)(param_1 + 0xc0);
    if (lVar1 != 0) goto LAB_00869bd8;
  }
  else if (*(char *)(param_1 + 0xcf) == '\0') {
    lVar1 = 0;
  }
  else {
LAB_00869bd8:
    lVar1 = lVar1 + 2;
  }
  lVar2 = (long)*(char *)(param_1 + 0xb7);
  if (lVar2 < 0) {
    lVar2 = *(long *)(param_1 + 0xa8);
    if (lVar2 != 0) goto LAB_00869be8;
  }
  else if (*(char *)(param_1 + 0xb7) != '\0') {
LAB_00869be8:
    lVar1 = lVar1 + lVar2 + 2;
  }
  lVar1 = lVar1 + 5;
LAB_00869bb4:
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x38));
  return lVar1;
}


// ===== 00869c04  FUN_00869c04 =====

int FUN_00869c04(long param_1,undefined1 param_2)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x38));
  *(undefined1 *)(param_1 + 0x60) = param_2;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x38));
  return iVar1;
}


// ===== 00869c3c  FUN_00869c3c =====

undefined1 FUN_00869c3c(long param_1)

{
  undefined1 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x38));
  uVar1 = *(undefined1 *)(param_1 + 0x60);
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x38));
  return uVar1;
}


// ===== 00869c78  FUN_00869c78 =====

undefined1 FUN_00869c78(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}


// ===== 00869c84  FUN_00869c84 =====

int FUN_00869c84(long param_1,undefined4 param_2)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x38));
  *(undefined4 *)(param_1 + 0x98) = param_2;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x38));
  return iVar1;
}


// ===== 00869cbc  FUN_00869cbc =====

undefined4 FUN_00869cbc(long param_1)

{
  undefined4 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x38));
  uVar1 = *(undefined4 *)(param_1 + 0x98);
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x38));
  return uVar1;
}


// ===== 00869cf8  FUN_00869cf8 =====

int FUN_00869cf8(long param_1,undefined8 ***param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  int iVar4;
  undefined8 ***__dest;
  undefined8 **local_58;
  ulong uStack_50;
  undefined8 local_48;
  
  iVar4 = pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x38));
  if (0x7ffffffffffffff6 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec(iVar4);
  }
  if (param_3 < 0x17) {
    local_48 = CONCAT17((char)param_3,(undefined7)local_48);
    __dest = &local_58;
  }
  else {
    uVar1 = (param_3 & 0x7ffffffffffffff8) + 8;
    uVar2 = 0x19;
    if (uVar1 != 0x18) {
      uVar2 = uVar1;
    }
    __dest = (undefined8 ***)operator_new(uVar2);
    local_48 = uVar2 | 0x8000000000000000;
    local_58 = __dest;
    uStack_50 = param_3;
  }
  if (__dest <= (undefined8 ***)((long)__dest + param_3)) {
    if ((__dest <= param_2) && (param_2 < (undefined8 ***)((long)__dest + param_3))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                );
    }
    memmove(__dest,param_2,param_3);
    cVar3 = *(char *)(param_1 + 0xcf);
    *(undefined1 *)((long)__dest + param_3) = 0;
    if (cVar3 < '\0') {
      operator_delete(*(void **)(param_1 + 0xb8));
    }
    *(ulong *)(param_1 + 0xc0) = uStack_50;
    *(undefined8 ***)(param_1 + 0xb8) = local_58;
    *(ulong *)(param_1 + 200) = local_48;
    FUN_008688e4(param_1);
    iVar4 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x38));
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
            );
}


// ===== 00869e28  FUN_00869e28 =====

void * FUN_00869e28(long param_1,undefined1 *param_2)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  ushort *puVar4;
  size_t __n;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  void *local_58;
  void *local_50;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x38));
  if ((*(byte *)(param_1 + 0x60) & 1) != 0) {
    plVar9 = *(long **)(param_1 + 0xf0);
    if (plVar9 != (long *)0x0) {
      do {
        while ((char)param_2[1] < *(char *)((long)plVar9 + 0x19)) {
          plVar9 = (long *)*plVar9;
          if (plVar9 == (long *)0x0) goto LAB_00869f98;
        }
        if (param_2[1] == *(char *)((long)plVar9 + 0x19)) {
          if (plVar9 != (long *)(param_1 + 0xf0)) {
            pvVar3 = operator_new(0xd0);
            FUN_007dc6dc(pvVar3,param_1 + 0x70,*(undefined8 *)(param_1 + 0x68));
            FUN_007daa40(pvVar3,*(undefined1 *)((long)plVar9 + 0x1a));
            if ((*(byte *)(param_1 + 0x1c) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/optional:1064: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                        );
            }
            FUN_007dabd4(pvVar3,*(undefined4 *)(param_1 + 0x18));
            FUN_007da930(pvVar3,*param_2);
            FUN_007dab68(pvVar3,*(undefined4 *)(param_2 + 8));
            FUN_007da710(&local_58,param_2);
            pvVar1 = (void *)0x0;
            if ((long)local_50 - (long)local_58 != 0) {
              pvVar1 = local_58;
            }
            FUN_007dad8c(pvVar3,pvVar1,(long)local_50 - (long)local_58 >> 2);
            if (local_58 != (void *)0x0) {
              uVar8 = (ulong)((long)local_50 + (-4 - ((long)local_50 << 0x3e))) >> 2;
              uVar7 = (ulong)(((long)local_58 - (long)local_50 << 0x3e) -
                             ((long)local_58 - (long)local_50)) >> 2;
              if (uVar8 <= uVar7) {
                uVar7 = uVar8;
              }
              if ((1 < uVar7) && ((((int)local_58 - (int)local_50 | -(int)local_50) & 3U) == 0)) {
                uVar7 = uVar7 & 0x3ffffffffffffffe;
                local_50 = (void *)((long)local_50 + uVar7 * -4);
                do {
                  uVar7 = uVar7 - 2;
                } while (uVar7 != 0);
              }
              while (local_50 != local_58) {
                local_50 = (void *)((long)local_50 + -4);
                if (local_50 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                  std::__Cr::__libcpp_verbose_abort
                            ("%s",
                             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                            );
                }
              }
              local_50 = local_58;
              operator_delete(local_58);
            }
            iVar2 = 1;
            do {
              if (((iVar2 != 0xe) && (iVar2 != 0x10)) &&
                 (uVar7 = FUN_007dbb58(param_2,iVar2), (uVar7 & 1) != 0)) {
                auVar10 = FUN_007dba34(param_2,iVar2);
                __n = auVar10._8_8_;
                auVar11 = FUN_007dbacc(pvVar3,iVar2,__n);
                if ((auVar11._8_8_ != 0) && (__n == auVar11._8_8_)) {
                  memcpy(auVar11._0_8_,auVar10._0_8_,__n);
                }
              }
              iVar2 = iVar2 + 1;
            } while (iVar2 != 0x16);
            if (((*(byte *)(param_1 + 0xd0) & 1) != 0) || ((*(byte *)(param_1 + 0xd2) & 1) == 0)) {
              lVar5 = (long)*(char *)(param_1 + 0xcf);
              lVar6 = lVar5;
              if (lVar5 < 0) {
                lVar6 = *(long *)(param_1 + 0xc0);
              }
              if (lVar6 != 0) {
                lVar6 = *(long *)(param_1 + 0xc0);
                if (-1 < *(char *)(param_1 + 0xcf)) {
                  lVar6 = lVar5;
                }
                auVar10 = FUN_007dbacc(pvVar3,0x10,lVar6);
                if (auVar10._8_8_ != 0) {
                  uVar7 = *(ulong *)(param_1 + 0xc0);
                  lVar6 = *(long *)(param_1 + 0xb8);
                  if (-1 < (char)*(byte *)(param_1 + 0xcf)) {
                    uVar7 = (ulong)*(byte *)(param_1 + 0xcf);
                    lVar6 = param_1 + 0xb8;
                  }
                  FUN_007d9944(auVar10._0_8_,auVar10._8_8_,lVar6,uVar7);
                }
              }
              lVar5 = (long)*(char *)(param_1 + 0xb7);
              lVar6 = lVar5;
              if (lVar5 < 0) {
                lVar6 = *(long *)(param_1 + 0xa8);
              }
              if (lVar6 != 0) {
                lVar6 = *(long *)(param_1 + 0xa8);
                if (-1 < *(char *)(param_1 + 0xb7)) {
                  lVar6 = lVar5;
                }
                auVar10 = FUN_007dbacc(pvVar3,0xf,lVar6);
                if (auVar10._8_8_ != 0) {
                  uVar7 = *(ulong *)(param_1 + 0xa8);
                  lVar6 = *(long *)(param_1 + 0xa0);
                  if (-1 < (char)*(byte *)(param_1 + 0xb7)) {
                    uVar7 = (ulong)*(byte *)(param_1 + 0xb7);
                    lVar6 = param_1 + 0xa0;
                  }
                  FUN_007d9944(auVar10._0_8_,auVar10._8_8_,lVar6,uVar7);
                }
              }
            }
            pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x38));
            puVar4 = (ushort *)FUN_007db6a0(pvVar3,*(long *)(param_2 + 0x18) + 2);
            if (puVar4 != (ushort *)0x0) {
              *puVar4 = *(ushort *)(param_2 + 4) >> 8 |
                        (ushort)((*(ushort *)(param_2 + 4) & 0xff00ff) << 8);
              lVar6 = *(long *)(param_2 + 0x58);
              if (lVar6 != 0) {
                lVar6 = *(long *)(lVar6 + 0x10) + *(long *)(param_2 + 0x60);
              }
              if (*(size_t *)(param_2 + 0x18) != 0) {
                memcpy(puVar4 + 1,(void *)(lVar6 + *(long *)(param_2 + 0x10)),
                       *(size_t *)(param_2 + 0x18));
              }
              lVar6 = *(long *)(param_2 + 0xb0);
              if (lVar6 != 0) {
                FUN_00d0f740(1,lVar6 + 8);
              }
              plVar9 = *(long **)((long)pvVar3 + 0xb0);
              *(long *)((long)pvVar3 + 0xb0) = lVar6;
              if ((plVar9 != (long *)0x0) &&
                 (iVar2 = FUN_00d0f7a0(0xffffffff,plVar9 + 1), iVar2 == 1)) {
                (**(code **)(*plVar9 + 8))(plVar9);
              }
              *(undefined8 *)((long)pvVar3 + 0x70) = *(undefined8 *)(param_2 + 0x70);
              return pvVar3;
            }
                    /* WARNING: Subroutine does not return */
            FUN_0061fd88("../../modules/rtp_rtcp/source/rtp_sender.cc",0x2ce,"rtx_payload",
                         &DAT_001f5fa0);
          }
          break;
        }
        plVar9 = (long *)plVar9[1];
      } while (plVar9 != (long *)0x0);
    }
  }
LAB_00869f98:
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x38));
  return (void *)0x0;
}


// ===== 0086a1dc  FUN_0086a1dc =====

int FUN_0086a1dc(long param_1,long param_2)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x38));
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 4);
  *(undefined1 *)(param_1 + 0xd1) = *(undefined1 *)(param_2 + 0x20);
  FUN_008688e4(param_1);
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x38));
  return iVar1;
}


// ===== 0086a228  FUN_0086a228 =====

int FUN_0086a228(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int iVar3;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_2 + 0x38));
  uVar1 = *(undefined4 *)(param_2 + 0x98);
  uVar2 = *(undefined1 *)(param_2 + 0xd1);
  param_1[4] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  *param_1 = &DAT_aaaaaaaaaaaaaaaa;
  param_1[3] = 0x8000000000000000;
  param_1[2] = 0x8000000000000000;
  *(undefined2 *)param_1 = 0;
  *(undefined4 *)((long)param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 4) = uVar2;
  iVar3 = pthread_mutex_unlock((pthread_mutex_t *)(param_2 + 0x38));
  return iVar3;
}


// ===== 0086a284  FUN_0086a284 =====

int FUN_0086a284(long param_1,long param_2)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x38));
  *(undefined1 *)(param_1 + 0xd2) = *(undefined1 *)(param_2 + 0x20);
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x38));
  return iVar1;
}


// ===== 0086a2c0  FUN_0086a2c0 =====

int FUN_0086a2c0(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int iVar3;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_2 + 0x38));
  uVar1 = *(undefined4 *)(param_2 + 0x98);
  uVar2 = *(undefined1 *)(param_2 + 0xd2);
  param_1[4] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  *param_1 = &DAT_aaaaaaaaaaaaaaaa;
  param_1[3] = 0x8000000000000000;
  param_1[2] = 0x8000000000000000;
  *(undefined2 *)param_1 = 0;
  *(undefined4 *)((long)param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 4) = uVar2;
  iVar3 = pthread_mutex_unlock((pthread_mutex_t *)(param_2 + 0x38));
  return iVar3;
}


// ===== 0086a31c  FUN_0086a31c =====

undefined8 * FUN_0086a31c(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  size_t __n;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  void *__dest;
  
  puVar7 = (undefined8 *)(param_1[1] - *param_1);
  uVar1 = ((long)puVar7 >> 3) + 1;
  if (uVar1 >> 0x3d != 0) {
    FUN_0086a414();
LAB_0086a410:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  uVar4 = param_1[2] - *param_1;
  uVar6 = (long)uVar4 >> 2;
  if (uVar6 <= uVar1) {
    uVar6 = uVar1;
  }
  if (0x7ffffffffffffff7 < uVar4) {
    uVar6 = 0x1fffffffffffffff;
  }
  if (uVar6 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (uVar6 >> 0x3d != 0) goto LAB_0086a410;
    pvVar2 = operator_new(uVar6 << 3);
    puVar7 = (undefined8 *)((long)pvVar2 + (long)puVar7);
  }
  if (puVar7 != (undefined8 *)0x0) {
    uVar5 = *param_2;
    *param_2 = 0;
    *puVar7 = uVar5;
    __n = param_1[1] - *param_1;
    __dest = (void *)((long)puVar7 - __n);
    memcpy(__dest,(void *)*param_1,__n);
    pvVar3 = (void *)*param_1;
    *param_1 = (long)__dest;
    param_1[1] = (long)(puVar7 + 1);
    param_1[2] = (long)((long)pvVar2 + uVar6 * 8);
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    return puVar7 + 1;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0086a414  FUN_0086a414 =====

void FUN_0086a414(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 0086a42c  FUN_0086a42c =====

undefined8 * FUN_0086a42c(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  size_t __n;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  void *__dest;
  
  puVar6 = (undefined8 *)(param_1[1] - *param_1);
  uVar1 = ((long)puVar6 >> 3) + 1;
  if (uVar1 >> 0x3d != 0) {
    FUN_0086a520();
LAB_0086a51c:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  uVar4 = param_1[2] - *param_1;
  uVar5 = (long)uVar4 >> 2;
  if (uVar5 <= uVar1) {
    uVar5 = uVar1;
  }
  if (0x7ffffffffffffff7 < uVar4) {
    uVar5 = 0x1fffffffffffffff;
  }
  if (uVar5 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (uVar5 >> 0x3d != 0) goto LAB_0086a51c;
    pvVar2 = operator_new(uVar5 << 3);
    puVar6 = (undefined8 *)((long)pvVar2 + (long)puVar6);
  }
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = *param_2;
    __n = param_1[1] - *param_1;
    __dest = (void *)((long)puVar6 - __n);
    memcpy(__dest,(void *)*param_1,__n);
    pvVar3 = (void *)*param_1;
    *param_1 = (long)__dest;
    param_1[1] = (long)(puVar6 + 1);
    param_1[2] = (long)((long)pvVar2 + uVar5 * 8);
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    return puVar6 + 1;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0086a520  FUN_0086a520 =====

void FUN_0086a520(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 0086a538  FUN_0086a538 =====

void FUN_0086a538(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_0086a538(param_1,*param_2);
      if (param_2 == (undefined8 *)0xffffffffffffffe7) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      puVar1 = (undefined8 *)param_2[1];
      operator_delete(param_2);
      param_2 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
  }
  return;
}


// ===== 0086a5ac  FUN_0086a5ac =====

undefined1  [16]
FUN_0086a5ac(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5)

{
  char cVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  char *pcVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  
  pcVar6 = (char *)*param_5;
  plVar4 = param_2 + 1;
  plVar7 = plVar4;
  if ((long *)*plVar4 != (long *)0x0) {
    cVar1 = *pcVar6;
    plVar2 = (long *)*plVar4;
    do {
      while (plVar3 = plVar2, plVar4 = plVar3, cVar1 < *(char *)((long)plVar3 + 0x19)) {
        plVar2 = (long *)*plVar3;
        plVar7 = plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_0086a61c;
      }
      if (cVar1 == *(char *)((long)plVar3 + 0x19)) {
        uVar5 = 0;
        goto LAB_0086a680;
      }
      plVar2 = (long *)plVar3[1];
    } while ((long *)plVar3[1] != (long *)0x0);
    plVar7 = plVar3 + 1;
  }
LAB_0086a61c:
  plVar3 = (long *)operator_new(0x20);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  cVar1 = *pcVar6;
  *(undefined1 *)((long)plVar3 + 0x1a) = 0;
  *plVar3 = 0;
  plVar3[1] = 0;
  *(char *)((long)plVar3 + 0x19) = cVar1;
  plVar3[2] = (long)plVar4;
  *plVar7 = (long)plVar3;
  plVar4 = plVar3;
  if (*(long *)*param_2 != 0) {
    *param_2 = *(long *)*param_2;
    plVar4 = (long *)*plVar7;
  }
  FUN_005d5b94(param_2[1],plVar4);
  uVar5 = 1;
  param_2[2] = param_2[2] + 1;
LAB_0086a680:
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = plVar3;
  return auVar8;
}


// ===== 0086a6b0  FUN_0086a6b0 =====

void * FUN_0086a6b0(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  long lVar4;
  ulong uVar5;
  void *pvVar6;
  
  lVar1 = param_1[1];
  *(uint *)*param_1 =
       *(int *)(param_2 + 0x18) + *(int *)(param_2 + 0x10) + (uint)*(byte *)(param_2 + 2);
  lVar4 = *(long *)(lVar1 + 0x108);
  if ((lVar4 == 0) || (uVar5 = FUN_00889dc4(lVar4,(long)*(int *)*param_1), (uVar5 & 1) != 0)) {
    if (*(char *)param_1[2] == '\x01') {
      pvVar6 = (void *)FUN_00869e28(lVar1,param_2);
    }
    else {
      pvVar6 = operator_new(0xd0);
      FUN_007dc744(pvVar6,param_2);
    }
    if (pvVar6 != (void *)0x0) {
      uVar3 = *(undefined2 *)(param_2 + 4);
      *(undefined1 *)((long)pvVar6 + 0xac) = 1;
      *(undefined2 *)((long)pvVar6 + 0xaa) = uVar3;
      uVar2 = *(undefined4 *)(param_2 + 0xc);
      *(undefined1 *)((long)pvVar6 + 0x94) = 1;
      *(undefined4 *)((long)pvVar6 + 0x90) = uVar2;
    }
  }
  else {
    pvVar6 = (void *)0x0;
  }
  return pvVar6;
}


// ===== 0086a77c  FUN_0086a77c =====

undefined8 FUN_0086a77c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  double dVar2;
  
  dVar2 = (double)NEON_ucvtf(*(undefined8 *)*param_1);
  if ((ulong)(*(long *)param_1[1] + (long)(dVar2 + dVar2 + 0.5)) < *(long *)(param_2 + 0x18) + 2U) {
    return 0;
  }
  uVar1 = FUN_00869e28(param_1[2]);
  return uVar1;
}


// ===== 0086a7c4  FUN_0086a7c4 =====

void FUN_0086a7c4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *local_38;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  local_38 = &DAT_aaaaaaaaaaaaaaaa;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_38);
  pthread_mutex_init((pthread_mutex_t *)(param_1 + 2),(pthread_mutexattr_t *)&local_38);
  pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_38);
  *(undefined2 *)(param_1 + 7) = 0;
  *(undefined1 *)((long)param_1 + 0x3a) = 0xff;
  *(undefined4 *)((long)param_1 + 0x3c) = 8000;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  FUN_0086b36c(param_1 + 0xc);
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined4 *)((long)param_1 + 0xa1) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0xa5) = 0xff;
  *(undefined1 *)(param_1 + 0x15) = 0;
  local_38 = &DAT_aaaaaaaaaaaaaaaa;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_38);
  pthread_mutex_init((pthread_mutex_t *)((long)param_1 + 0xac),(pthread_mutexattr_t *)&local_38);
  pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_38);
  *(undefined1 *)((long)param_1 + 0xd4) = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  FUN_0086b60c(param_1 + 0x1c,param_2);
  return;
}


// ===== 0086a894  FUN_0086a894 =====

int FUN_0086a894(long param_1)

{
  int iVar1;
  
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0xac));
  FUN_0086b3c0(param_1 + 0x60);
  iVar1 = pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x10));
  return iVar1;
}


// ===== 0086a8cc  FUN_0086a8cc =====

undefined4 FUN_0086a8cc(long param_1,int *param_2,long param_3,undefined1 param_4,int param_5)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_0061ff84(param_2,param_3,&DAT_001e58e5,2);
  if ((uVar1 & 1) == 0) {
    uVar1 = FUN_0061ff84(param_2,param_3,"telephone-event",0xf);
    if ((uVar1 & 1) == 0) {
      if ((param_3 != 5) || (*param_2 != 0x69647561 || (char)param_2[1] != 'o')) {
        return 0;
      }
      pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x10));
      uVar2 = 0;
      *(int *)(param_1 + 0xd4) = param_5;
      *(undefined1 *)(param_1 + 0xd8) = 1;
    }
    else {
      pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x10));
      uVar2 = 0;
      *(undefined1 *)(param_1 + 0x3a) = param_4;
      *(int *)(param_1 + 0x3c) = param_5;
    }
  }
  else {
    pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x10));
    uVar2 = 0xffffffff;
    if (param_5 < 32000) {
      if (param_5 == 8000) {
        uVar2 = 0;
        *(undefined1 *)(param_1 + 0xa1) = param_4;
      }
      else if (param_5 == 16000) {
        uVar2 = 0;
        *(undefined1 *)(param_1 + 0xa2) = param_4;
      }
    }
    else if (param_5 == 32000) {
      uVar2 = 0;
      *(undefined1 *)(param_1 + 0xa3) = param_4;
    }
    else if (param_5 == 48000) {
      uVar2 = 0;
      *(undefined1 *)(param_1 + 0xa4) = param_4;
    }
  }
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x10));
  return uVar2;
}


// ===== 0086aa38  FUN_0086aa38 =====

bool FUN_0086aa38(undefined8 *param_1,int *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  long *plVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  void *pvVar12;
  bool bVar13;
  long *plVar14;
  undefined4 uVar15;
  undefined1 auVar16 [16];
  long *local_98;
  long *local_90;
  long *local_88;
  undefined8 local_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  undefined8 local_60;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined7 uStack_4f;
  char local_48;
  undefined7 uStack_47;
  
  uStack_58 = 0xaa;
  uStack_57 = 0xaaaaaaaaaaaaaa;
  uStack_47 = 0xaaaaaaaaaaaaaa;
  uStack_50 = 0xaa;
  uStack_4f = 0xaaaaaaaaaaaaaa;
  local_60 = 0xaaaaaaaaaaaaaa00;
  local_48 = '\0';
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 2));
  uVar1 = *(uint *)((long)param_1 + 0x3c);
  if ((char)param_2[10] == '\x01') {
    iVar7 = param_2[7];
    uVar2 = *(undefined4 *)(param_1[1] + 0x14);
    if (*(char *)(param_1 + 0x1b) == '\x01') {
      uVar15 = *(undefined4 *)((long)param_1 + 0xd4);
    }
    else {
      uVar15 = 0;
    }
    uVar8 = (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,*(undefined8 *)(param_2 + 8));
    FUN_0086b630(&local_80,param_1 + 0x1c,uVar2,iVar7,uVar15,uVar8,0,1,0);
    uStack_58 = uStack_78;
    local_60 = local_80;
    uStack_4f = (undefined7)uStack_6f;
    local_48 = (char)((ulong)uStack_6f >> 0x38);
    uStack_57 = uStack_77;
    uStack_50 = uStack_70;
  }
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 2));
  if (((*(byte *)(param_1 + 7) & 1) == 0) && (uVar9 = FUN_0086b5cc(param_1 + 0xc), (uVar9 & 1) != 0)
     ) {
    uVar10 = (**(code **)(*(long *)*param_1 + 0x10))();
    uVar9 = uVar10 / 1000;
    if (499 < uVar10 % 1000) {
      uVar9 = uVar9 + 1;
    }
    if ((uVar10 & 0x8000000000000000) != 0) {
      uVar9 = -(-uVar10 / 1000) - (ulong)(500 < -uVar10 % 1000);
    }
    if (0x32 < (long)(uVar9 - param_1[9])) {
      *(int *)(param_1 + 8) = param_2[7];
      uVar9 = FUN_0086b504(param_1 + 0xc,(long)param_1 + 0x54);
      if ((uVar9 & 1) != 0) {
        *(undefined2 *)(param_1 + 7) = 1;
        *(uint *)((long)param_1 + 0x44) = (uVar1 / 1000) * (uint)*(ushort *)((long)param_1 + 0x54);
      }
    }
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    if (*param_2 == 0) {
      iVar7 = param_2[7];
      if ((uint)(iVar7 - *(int *)(param_1 + 10)) < (uVar1 * 0x32) / 1000) {
        return true;
      }
    }
    else {
      iVar7 = param_2[7];
    }
    *(int *)(param_1 + 10) = iVar7;
    uVar1 = *(uint *)((long)param_1 + 0x44);
    uVar5 = param_2[7] - *(int *)(param_1 + 8);
    if (uVar5 < uVar1) {
      if (param_2[7] == *(int *)(param_1 + 8)) {
        return true;
      }
    }
    else {
      *(undefined1 *)(param_1 + 7) = 0;
      uVar9 = (**(code **)(*(long *)*param_1 + 0x10))();
      if ((long)uVar9 < 0) {
        uVar10 = -(-uVar9 / 1000) - (ulong)(500 < -uVar9 % 1000);
      }
      else {
        uVar10 = uVar9 / 1000;
        if (499 < uVar9 % 1000) {
          uVar10 = uVar10 + 1;
        }
      }
      param_1[9] = uVar10;
    }
    if (uVar5 < 0x10000) {
      FUN_0086b020(param_1,uVar1 <= uVar5,*(undefined4 *)(param_1 + 8),uVar5,
                   (*(byte *)((long)param_1 + 0x39) ^ 0xff) & 1);
      *(undefined1 *)((long)param_1 + 0x39) = 1;
    }
    else {
      FUN_0086b020(param_1,uVar1 <= uVar5,*(undefined4 *)(param_1 + 8),0xffff,0);
      iVar7 = param_2[7];
      *(int *)(param_1 + 8) = iVar7;
      *(int *)((long)param_1 + 0x44) = *(int *)((long)param_1 + 0x44) + -0xffff;
      FUN_0086b020(param_1,uVar1 <= uVar5,iVar7,uVar5 + 1,0);
    }
    return true;
  }
  if (*(long *)(param_2 + 4) == 0) {
    return *param_2 == 0;
  }
  lVar11 = FUN_008699b0(param_1[1],*(undefined8 *)(param_2 + 0xe),*(undefined8 *)(param_2 + 0x10));
  iVar7 = *param_2;
  cVar3 = (char)param_2[6];
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 2));
  cVar4 = *(char *)((long)param_1 + 0xa5);
  bVar13 = cVar4 != cVar3;
  if (cVar4 == cVar3) {
LAB_0086ac3c:
    if (iVar7 == 2) {
      *(undefined1 *)(param_1 + 0x14) = 1;
    }
    else if (*(char *)(param_1 + 0x14) == '\x01') {
      bVar13 = true;
      *(undefined1 *)(param_1 + 0x14) = 0;
    }
  }
  else {
    if ((cVar3 == -1) ||
       ((((*(char *)((long)param_1 + 0xa1) != cVar3 && (*(char *)((long)param_1 + 0xa2) != cVar3))
         && (*(char *)((long)param_1 + 0xa3) != cVar3)) &&
        (*(char *)((long)param_1 + 0xa4) != cVar3)))) {
      if (cVar4 != -1) goto LAB_0086ac3c;
      bVar13 = true;
      if (iVar7 != 2) goto LAB_0086ad48;
      *(undefined1 *)(param_1 + 0x14) = 1;
    }
    bVar13 = false;
  }
LAB_0086ad48:
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 2));
  FUN_007da930(lVar11,bVar13);
  FUN_007daa40(lVar11,param_2[6]);
  FUN_007dab68(lVar11,param_2[7]);
  uVar8 = (**(code **)(*(long *)*param_1 + 0x10))();
  *(undefined8 *)(lVar11 + 0x70) = uVar8;
  iVar7 = param_2[0xc];
  if ((char)param_2[0xd] == '\0') {
    iVar7 = 0x7f;
  }
  FUN_00659684(&local_80,*param_2 == 1,iVar7);
  auVar16 = FUN_007dbacc(lVar11,2,1);
  if (auVar16._8_8_ != 0) {
    FUN_007d8f1c(auVar16._0_8_,auVar16._8_8_,&local_80);
  }
  if (local_48 == '\x01') {
    uVar8 = FUN_007d8e00(&local_60);
    auVar16 = FUN_007dbacc(lVar11,6,uVar8);
    if (auVar16._8_8_ != 0) {
      FUN_007d8e1c(auVar16._0_8_,auVar16._8_8_,&local_60);
    }
  }
  FUN_007db7a0(lVar11,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 2));
  *(char *)((long)param_1 + 0xa5) = (char)param_2[6];
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 2));
  FUN_007dc8a8(lVar11,0);
  *(undefined1 *)(lVar11 + 0xa8) = 1;
  local_98 = (long *)operator_new(8);
  if (local_98 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  local_90 = local_98 + 1;
  *local_98 = lVar11;
  local_88 = local_90;
  FUN_008697e4(param_1[1],&local_98);
  plVar6 = local_98;
  plVar14 = local_90;
  if (local_98 != (long *)0x0) {
    while (plVar6 != plVar14) {
      plVar14 = plVar14 + -1;
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      pvVar12 = (void *)*plVar14;
      *plVar14 = 0;
      if (pvVar12 != (void *)0x0) {
        FUN_007dc854(pvVar12);
        operator_delete(pvVar12);
      }
    }
    local_90 = plVar6;
    operator_delete(local_98);
  }
  pthread_mutex_lock((pthread_mutex_t *)((long)param_1 + 0xac));
  if (*(char *)(param_1 + 0x15) == '\x01') {
    pthread_mutex_unlock((pthread_mutex_t *)((long)param_1 + 0xac));
    return true;
  }
  *(undefined1 *)(param_1 + 0x15) = 1;
  iVar7 = pthread_mutex_unlock((pthread_mutex_t *)((long)param_1 + 0xac));
  uVar9 = FUN_00417e08(iVar7);
  if ((uVar9 & 1) != 0) {
    return true;
  }
  FUN_00623bb0(&DAT_001f4e98,"../../modules/rtp_rtcp/source/rtp_sender_audio.cc",0x871,
               "First audio RTP packet sent to pacer");
  return true;
}


// ===== 0086b020  FUN_0086b020 =====

undefined8
FUN_0086b020(undefined8 *param_1,ulong param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  byte bVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  bool bVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  byte bVar8;
  void *pvVar9;
  long lVar10;
  undefined8 *local_a0;
  undefined8 *puStack_98;
  undefined8 *local_90;
  undefined1 *local_88;
  undefined8 *local_80;
  undefined8 *puStack_78;
  undefined8 *local_70;
  
  bVar4 = (param_2 & 1) == 0;
  lVar10 = 3;
  if (bVar4) {
    lVar10 = 1;
  }
  bVar8 = 0x80;
  if (bVar4) {
    bVar8 = 0;
  }
  local_80 = (undefined8 *)operator_new(lVar10 * 8);
  local_70 = local_80 + lVar10;
  puStack_78 = local_80;
  do {
    local_88 = &DAT_aaaaaaaaaaaaaaaa;
    puVar5 = (undefined1 *)operator_new(0xd0);
    FUN_007dc6dc(puVar5,0,0x10);
    local_88 = puVar5;
    FUN_007daa40(puVar5,*(undefined1 *)((long)param_1 + 0x56));
    FUN_007da930(local_88,param_5 & 1);
    FUN_007dabd4(local_88,*(undefined4 *)(param_1[1] + 0x14));
    FUN_007dab68(local_88,param_3);
    puVar5 = local_88;
    uVar6 = (**(code **)(*(long *)*param_1 + 0x10))();
    *(undefined8 *)(puVar5 + 0x70) = uVar6;
    puVar5 = (undefined1 *)FUN_007db6a0(local_88,4);
    bVar1 = *(byte *)(param_1 + 0xb);
    uVar2 = *(undefined1 *)((long)param_1 + 0x57);
    puVar5[2] = (char)((uint)param_4 >> 8);
    *puVar5 = uVar2;
    puVar5[1] = bVar1 | bVar8;
    puVar5[3] = (char)param_4;
    FUN_007dc8a8(local_88,0);
    puVar5 = local_88;
    local_88[0xa8] = 1;
    if (puStack_78 < local_70) {
      if (puStack_78 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      local_88 = (undefined1 *)0x0;
      puVar7 = puStack_78 + 1;
      *puStack_78 = puVar5;
    }
    else {
      puVar7 = (undefined8 *)FUN_0086a31c(&local_80,&local_88);
    }
    puVar5 = local_88;
    local_88 = (undefined1 *)0x0;
    puStack_78 = puVar7;
    if (puVar5 != (undefined1 *)0x0) {
      FUN_007dc854(puVar5);
      operator_delete(puVar5);
    }
    local_90 = local_70;
    puStack_98 = puStack_78;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  puStack_78 = (undefined8 *)0x0;
  local_70 = (undefined8 *)0x0;
  local_a0 = local_80;
  local_80 = (undefined8 *)0x0;
  FUN_008697e4(param_1[1],&local_a0);
  puVar3 = local_a0;
  puVar7 = puStack_98;
  if (local_a0 != (undefined8 *)0x0) {
    while (puVar3 != puVar7) {
      puVar7 = puVar7 + -1;
      if (puVar7 == (undefined8 *)0x0) goto LAB_0086b2c4;
      pvVar9 = (void *)*puVar7;
      *puVar7 = 0;
      if (pvVar9 != (void *)0x0) {
        FUN_007dc854(pvVar9);
        operator_delete(pvVar9);
      }
    }
    puStack_98 = puVar3;
    operator_delete(local_a0);
  }
  puVar3 = local_80;
  puVar7 = puStack_78;
  if (local_80 != (undefined8 *)0x0) {
    while (puVar3 != puVar7) {
      puVar7 = puVar7 + -1;
      if (puVar7 == (undefined8 *)0x0) {
LAB_0086b2c4:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      pvVar9 = (void *)*puVar7;
      *puVar7 = 0;
      if (pvVar9 != (void *)0x0) {
        FUN_007dc854(pvVar9);
        operator_delete(pvVar9);
      }
    }
    puStack_78 = puVar3;
    operator_delete(local_80);
  }
  return 1;
}


// ===== 0086b2d8  FUN_0086b2d8 =====

int FUN_0086b2d8(long param_1,undefined1 param_2,undefined2 param_3,undefined1 param_4)

{
  uint uVar1;
  int iVar2;
  undefined2 local_38;
  char local_36;
  undefined1 local_35;
  undefined2 local_34;
  
  local_34 = 0xaaaa;
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x10));
  local_36 = *(char *)(param_1 + 0x3a);
  if (local_36 < '\0') {
    pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x10));
    iVar2 = -1;
  }
  else {
    pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x10));
    local_34 = CONCAT11(local_34._1_1_,param_4);
    local_38 = param_3;
    local_35 = param_2;
    uVar1 = FUN_0086b458(param_1 + 0x60,&local_38);
    iVar2 = (uVar1 & 1) - 1;
  }
  return iVar2;
}


// ===== 0086b36c  FUN_0086b36c =====

int FUN_0086b36c(pthread_mutex_t *param_1)

{
  int iVar1;
  undefined1 *local_8;
  
  local_8 = &DAT_aaaaaaaaaaaaaaaa;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_8);
  pthread_mutex_init(param_1,(pthread_mutexattr_t *)&local_8);
  iVar1 = pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_8);
  param_1[1].__align = (long)(param_1 + 1);
  *(pthread_mutex_t **)((long)param_1 + 0x30) = param_1 + 1;
  *(undefined8 *)((long)param_1 + 0x38) = 0;
  return iVar1;
}


// ===== 0086b3c0  FUN_0086b3c0 =====

int FUN_0086b3c0(pthread_mutex_t *param_1)

{
  pthread_mutex_t *ppVar1;
  int iVar2;
  long *plVar3;
  pthread_mutex_t *ppVar4;
  
  if (*(long *)((long)param_1 + 0x38) != 0) {
    ppVar1 = *(pthread_mutex_t **)((long)param_1 + 0x30);
    plVar3 = *(long **)(param_1[1].__align + 8);
    *(long **)(ppVar1->__align + 8) = plVar3;
    *plVar3 = ppVar1->__align;
    *(undefined8 *)((long)param_1 + 0x38) = 0;
    while (ppVar1 != param_1 + 1) {
      if ((ppVar1 == (pthread_mutex_t *)0xfffffffffffffff0) || (ppVar1 == (pthread_mutex_t *)0x0)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      ppVar4 = *(pthread_mutex_t **)&(ppVar1->__data).__owner;
      operator_delete(ppVar1);
      ppVar1 = ppVar4;
    }
  }
  iVar2 = pthread_mutex_destroy(param_1);
  return iVar2;
}


// ===== 0086b458  FUN_0086b458 =====

bool FUN_0086b458(pthread_mutex_t *param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  
  pthread_mutex_lock(param_1);
  uVar4 = *(ulong *)((long)param_1 + 0x38);
  if (uVar4 < 0x14) {
    plVar2 = (long *)operator_new(0x18);
    if ((plVar2 == (long *)0x0) || (plVar2 + 2 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    uVar1 = *(undefined2 *)(param_2 + 1);
    lVar3 = param_1[1].__align;
    *(undefined4 *)(plVar2 + 2) = *param_2;
    *(undefined2 *)((long)plVar2 + 0x14) = uVar1;
    *plVar2 = lVar3;
    plVar2[1] = (long)(param_1 + 1);
    *(long **)(lVar3 + 8) = plVar2;
    *(long **)(param_1 + 1) = plVar2;
    *(long *)((long)param_1 + 0x38) = *(long *)((long)param_1 + 0x38) + 1;
  }
  pthread_mutex_unlock(param_1);
  return uVar4 < 0x14;
}


// ===== 0086b504  FUN_0086b504 =====

bool FUN_0086b504(pthread_mutex_t *param_1,undefined4 *param_2)

{
  long *plVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  
  pthread_mutex_lock(param_1);
  lVar4 = *(long *)((long)param_1 + 0x38);
  if (lVar4 != 0) {
    uVar2 = *(undefined4 *)(*(long *)((long)param_1 + 0x30) + 0x10);
    *(undefined1 *)(param_2 + 1) = *(undefined1 *)(*(long *)((long)param_1 + 0x30) + 0x14);
    *param_2 = uVar2;
    if (*(long *)((long)param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/list:1394: libc++ Hardening assertion !empty() failed: list::pop_front() called with empty list\n"
                );
    }
    plVar3 = *(long **)((long)param_1 + 0x30);
    plVar1 = (long *)plVar3[1];
    *(long **)(*plVar3 + 8) = plVar1;
    *plVar1 = *plVar3;
    *(long *)((long)param_1 + 0x38) = *(long *)((long)param_1 + 0x38) + -1;
    if ((plVar3 == (long *)0xfffffffffffffff0) || (plVar3 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    operator_delete(plVar3);
  }
  pthread_mutex_unlock(param_1);
  return lVar4 != 0;
}


// ===== 0086b5cc  FUN_0086b5cc =====

bool FUN_0086b5cc(pthread_mutex_t *param_1)

{
  long lVar1;
  
  pthread_mutex_lock(param_1);
  lVar1 = *(long *)((long)param_1 + 0x38);
  pthread_mutex_unlock(param_1);
  return lVar1 != 0;
}


// ===== 0086b60c  FUN_0086b60c =====

void FUN_0086b60c(undefined8 *param_1,undefined8 param_2)

{
  param_1[4] = 0;
  *param_1 = param_2;
  param_1[1] = 0x8000000000000000;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  return;
}


// ===== 0086b628  thunk_FUN_0084ab88 =====

void thunk_FUN_0084ab88(void)

{
  FUN_0084ab88();
  return;
}


// ===== 0086b630  FUN_0086b630 =====

void FUN_0086b630(long *param_1,undefined8 *param_2,int param_3,undefined4 param_4,int param_5,
                 long param_6,long param_7,byte param_8,uint param_9)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined1 uVar4;
  long lVar5;
  
  lVar3 = (**(code **)(*(long *)*param_2 + 0x10))();
  if ((((((param_9 & 1) == 0) &&
        (lVar5 = param_2[1], lVar3 != 0x7fffffffffffffff && lVar5 != -0x8000000000000000)) &&
       ((lVar3 == -0x8000000000000000 ||
        ((lVar5 == 0x7fffffffffffffff || (lVar3 - lVar5 < 0xf4241)))))) &&
      (*(int *)(param_2 + 2) == param_3)) && ((0 < param_5 && (*(int *)(param_2 + 3) == param_5))))
  {
    if ((*(byte *)(param_2 + 6) & param_8) == 0) {
      if (*(byte *)(param_2 + 6) == param_8) goto LAB_0086b71c;
    }
    else {
      if ((param_8 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/optional:1064: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                  );
      }
      if (param_2[5] == param_7) {
LAB_0086b71c:
        lVar5 = FUN_0084b268(param_4,param_5,*(undefined4 *)((long)param_2 + 0x14),param_2[4]);
        uVar2 = param_6 - lVar5;
        uVar1 = -uVar2;
        if (-1 < (long)uVar2) {
          uVar1 = uVar2;
        }
        if ((long)((double)uVar1 * 2.3283064365386963e-07) < 2) {
          uVar4 = 0;
          *(undefined1 *)param_1 = 0;
          goto LAB_0086b77c;
        }
      }
    }
  }
  *(int *)(param_2 + 3) = param_5;
  param_2[4] = param_6;
  param_2[5] = param_7;
  *(int *)(param_2 + 2) = param_3;
  *(undefined4 *)((long)param_2 + 0x14) = param_4;
  uVar4 = 1;
  *(byte *)(param_2 + 6) = param_8;
  param_2[1] = lVar3;
  *param_1 = param_6;
  param_1[1] = param_7;
  *(byte *)(param_1 + 2) = param_8;
LAB_0086b77c:
  *(undefined1 *)(param_1 + 3) = uVar4;
  return;
}


// ===== 0086b7c4  FUN_0086b7c4 =====

void FUN_0086b7c4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined2 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_00d3abe8;
  param_1[1] = param_2;
  param_1[3] = param_3;
  param_1[4] = param_4;
  FUN_007ebca0(param_1 + 5);
  return;
}


// ===== 0086b7f8  FUN_0086b7f8 =====

void FUN_0086b7f8(undefined8 *param_1)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = &PTR_FUN_00d3abe8;
  FUN_007ebdcc(param_1[5]);
  pvVar2 = (void *)param_1[5];
  if ((pvVar2 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar2), iVar1 == 1)) {
    operator_delete(pvVar2);
    return;
  }
  return;
}


// ===== 0086b864  FUN_0086b864 =====

void FUN_0086b864(undefined8 *param_1)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = &PTR_FUN_00d3abe8;
  FUN_007ebdcc(param_1[5]);
  pvVar2 = (void *)param_1[5];
  if ((pvVar2 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar2), iVar1 == 1)) {
    operator_delete(pvVar2);
  }
  operator_delete(param_1);
  return;
}


// ===== 0086b8cc  FUN_0086b8cc =====

void FUN_0086b8cc(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long *local_78;
  long *local_70;
  undefined1 *local_68;
  long *local_60;
  long *plStack_58;
  code *local_50;
  code *pcStack_48;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  lVar6 = param_1[1];
  lVar3 = FUN_005d6490();
  if (lVar3 == lVar6) {
    puVar1 = (undefined8 *)param_2[1];
    for (puVar9 = (undefined8 *)*param_2; puVar9 != puVar1; puVar9 = puVar9 + 1) {
      FUN_0086bb58(param_1,*puVar9);
      lVar3 = param_1[3];
      uVar8 = *puVar9;
      *puVar9 = 0;
      FUN_0086e350(&local_60);
      FUN_0086bc18(lVar3,uVar8,&local_60);
    }
    plStack_58 = (long *)&DAT_aaaaaaaaaaaaaaaa;
    local_60 = (long *)&DAT_aaaaaaaaaaaaaaaa;
    local_50 = (code *)&DAT_aaaaaaaaaaaaaaaa;
    if (*(long **)(param_1[3] + 0x68) != (long *)0x0) {
      (**(code **)(**(long **)(param_1[3] + 0x68) + 0x40))(&local_60);
      pcVar2 = local_50;
      if (local_60 != plStack_58) {
        local_78 = local_60;
        local_70 = plStack_58;
        plStack_58 = (long *)0x0;
        local_50 = (code *)0x0;
        local_68 = pcVar2;
        local_60 = (long *)0x0;
        (**(code **)(*param_1 + 0x10))(param_1,&local_78);
        plVar4 = local_78;
        plVar7 = local_70;
        if (local_78 != (long *)0x0) {
          while (plVar4 != plVar7) {
            plVar7 = plVar7 + -1;
            if (plVar7 == (long *)0x0) goto LAB_0086bb44;
            pvVar5 = (void *)*plVar7;
            *plVar7 = 0;
            if (pvVar5 != (void *)0x0) {
              FUN_007dc854(pvVar5);
              operator_delete(pvVar5);
            }
          }
          local_70 = plVar4;
          operator_delete(local_78);
        }
      }
      plVar4 = local_60;
      plVar7 = plStack_58;
      if (local_60 != (long *)0x0) {
        while (plVar4 != plVar7) {
          plVar7 = plVar7 + -1;
          if (plVar7 == (long *)0x0) {
LAB_0086bb44:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
          pvVar5 = (void *)*plVar7;
          *plVar7 = 0;
          if (pvVar5 != (void *)0x0) {
            FUN_007dc854(pvVar5);
            operator_delete(pvVar5);
          }
        }
        plStack_58 = plVar4;
        operator_delete(local_60);
      }
    }
  }
  else {
    lVar3 = param_1[5];
    plVar7 = (long *)param_1[1];
    if (lVar3 != 0) {
      FUN_00d0f740(1,lVar3);
    }
    lVar11 = param_2[1];
    lVar10 = *param_2;
    lVar6 = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    plVar4 = (long *)operator_new(0x20);
    *plVar4 = (long)param_1;
    plVar4[3] = lVar6;
    plVar4[2] = lVar11;
    plVar4[1] = lVar10;
    local_60 = (long *)operator_new(0x30);
    *local_60 = lVar3;
    local_60[4] = (long)FUN_0086d9bc;
    local_60[5] = (long)FUN_0086d8e0;
    local_60[2] = (long)plVar4;
    local_50 = FUN_005db390;
    pcStack_48 = FUN_005db348;
    (**(code **)(*plVar7 + 8))(plVar7,&local_60,&uStack_21,&uStack_22);
    (*local_50)(0,&local_60,&local_60);
  }
  return;
}


// ===== 0086bb58  FUN_0086bb58 =====

void FUN_0086bb58(long param_1,long param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = *(ulong *)(*(long *)(param_1 + 0x18) + 0x44);
  if (((uVar1 >> 0x20 & 1) == 0) || (*(int *)(param_2 + 0xc) != (int)uVar1)) {
    FUN_008683bc(*(undefined8 *)(param_1 + 0x20),param_2);
  }
  *(short *)(param_1 + 0x10) = *(short *)(param_1 + 0x10) + 1;
  auVar2 = FUN_007dbacc(param_2,8,2);
  if ((auVar2._8_8_ == 0) ||
     (uVar1 = FUN_007d9028(auVar2._0_8_,auVar2._8_8_,*(undefined2 *)(param_1 + 0x10)),
     (uVar1 & 1) == 0)) {
    *(short *)(param_1 + 0x10) = *(short *)(param_1 + 0x10) + -1;
  }
  auVar2 = FUN_007dbacc(param_2,1,3);
  if (auVar2._8_8_ != 0) {
    *(undefined1 *)(auVar2._0_8_ + 1) = 0;
    *auVar2._0_8_ = 0;
  }
  auVar2 = FUN_007dbacc(param_2,5,3);
  if (auVar2._8_8_ != 0) {
    *(undefined1 *)(auVar2._0_8_ + 1) = 0;
    *auVar2._0_8_ = 0;
  }
  return;
}


// ===== 0086bc18  FUN_0086bc18 =====

void FUN_0086bc18(long param_1,undefined1 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined2 uVar2;
  long lVar3;
  bool bVar4;
  undefined4 uVar5;
  long lVar6;
  long *plVar7;
  void *__dest;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  undefined1 auVar18 [16];
  undefined1 *local_170;
  undefined1 *puStack_168;
  undefined1 *local_160;
  undefined8 local_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined1 *local_130;
  undefined1 *puStack_128;
  undefined1 *local_120;
  undefined1 *puStack_118;
  undefined1 *puStack_110;
  undefined1 *puStack_108;
  undefined1 *local_100;
  undefined1 *puStack_f8;
  undefined1 *puStack_f0;
  undefined1 *puStack_e8;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined1 *puStack_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if ((*(int *)(param_2 + 0xc) == *(int *)(param_1 + 0x38)) &&
     (((*(uint *)(param_2 + 0x80) & 1) == 0 || (*(long *)(param_2 + 0x78) != 2)))) {
    uVar2 = *(undefined2 *)(param_2 + 4);
    *(undefined1 *)(param_1 + 0x72) = 1;
    *(undefined2 *)(param_1 + 0x70) = uVar2;
  }
  else if ((*(char *)(param_1 + 0x40) == '\x01') &&
          (*(int *)(param_2 + 0xc) == *(int *)(param_1 + 0x3c))) {
    uVar2 = *(undefined2 *)(param_2 + 4);
    *(undefined1 *)(param_1 + 0x76) = 1;
    *(undefined2 *)(param_1 + 0x74) = uVar2;
  }
  lVar6 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
  if (((*(char *)(param_1 + 0x61) == '\x01') && ((*(uint *)(param_2 + 0x80) & 1) != 0)) &&
     (*(long *)(param_2 + 0x78) == 1)) {
    FUN_00870bac(*(undefined8 *)(param_1 + 0x238),*(undefined2 *)(param_2 + 4),
                 (ulong)CONCAT15(*param_2,CONCAT14(param_2[0xb8],
                                                   *(int *)(param_2 + 8) - *(int *)(param_1 + 0x9c))
                                ));
  }
  plVar7 = *(long **)(param_1 + 0x68);
  if ((plVar7 != (long *)0x0) && (param_2[0xba] == '\x01')) {
    uStack_148 = 0xaaaaaaaa;
    uStack_13c = 0xaaaaaaaa;
    uStack_144 = 0xaaaaaaaa;
    local_140 = 0xaaaaaaaa;
    local_150 = 0xaaaaaaaaaaaaaa00;
    local_138 = 0xaaaaaa00;
    if (*(char *)(param_1 + 0x230) != '\0') {
      local_150 = *(undefined8 *)(param_1 + 0x218);
      local_138 = 0xaaaaaa01;
      local_140 = (undefined4)*(undefined8 *)(param_1 + 0x228);
      uStack_13c = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x228) >> 0x20);
      uStack_148 = (undefined4)*(undefined8 *)(param_1 + 0x220);
      uStack_144 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x220) >> 0x20);
      *(undefined1 *)(param_1 + 0x230) = 0;
      (**(code **)(*plVar7 + 0x30))(plVar7,&local_150,(ulong)&local_150 | 0xc);
    }
    if (param_2[0xbb] == '\x01') {
      puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
      local_120 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_110 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
      local_100 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_f0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
      local_e0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_d0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
      local_c0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_b0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
      local_a0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
      local_80 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
      local_130 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_007dc744(&local_130,param_2);
      local_160 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_168 = &DAT_aaaaaaaaaaaaaaaa;
      local_170 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_007b53e4(&local_170,param_2 + 0x58);
      puVar14 = local_170;
      if (local_170 != (undefined1 *)0x0) {
        puVar14 = puStack_168 + *(long *)(local_170 + 0x10);
      }
      FUN_007daa40(&local_130,puVar14[*(long *)(param_2 + 0x10)]);
      __dest = (void *)FUN_007db738(&local_130,*(long *)(param_2 + 0x18) + -1);
      if (*(long *)(param_2 + 0x58) == 0) {
        lVar9 = *(long *)(param_2 + 0x10);
        lVar12 = *(long *)(param_2 + 0x18);
        lVar15 = 0;
        bVar4 = lVar12 == 0;
        lVar16 = 0;
        if (!bVar4) {
          lVar16 = lVar9;
        }
      }
      else {
        lVar9 = *(long *)(param_2 + 0x10);
        lVar12 = *(long *)(param_2 + 0x18);
        lVar15 = *(long *)(*(long *)(param_2 + 0x58) + 0x10) + *(long *)(param_2 + 0x60);
        bVar4 = lVar12 == 0;
        lVar16 = 0;
        if (!bVar4) {
          lVar16 = lVar15 + lVar9;
        }
      }
      lVar1 = 0;
      if (!bVar4) {
        lVar1 = lVar15 + lVar9;
      }
      memmove(__dest,(void *)(lVar16 + 1),(lVar1 + lVar12) - (lVar16 + 1));
      (**(code **)(**(long **)(param_1 + 0x68) + 0x38))(*(long **)(param_1 + 0x68),&local_130);
      FUN_007b5554(&local_170);
      FUN_007dc854(&local_130);
    }
    else {
      (**(code **)(**(long **)(param_1 + 0x68) + 0x38))(*(long **)(param_1 + 0x68),param_2);
    }
  }
  uVar8 = FUN_007dbb58(param_2,1);
  if (((uVar8 & 1) != 0) && (lVar15 = *(long *)(param_2 + 0x70), 0 < lVar15)) {
    uVar8 = 0x7fffffffffffffff;
    if ((lVar6 == 0x7fffffffffffffff) ||
       (((uVar8 = 0x8000000000000000, lVar6 != -0x8000000000000000 && (lVar15 != 0x7fffffffffffffff)
         ) && (uVar8 = lVar6 - lVar15, -1 < (long)uVar8)))) {
      iVar17 = (int)(uVar8 / 1000);
      if (499 < uVar8 % 1000) {
        iVar17 = iVar17 + 1;
      }
    }
    else {
      iVar17 = -(int)(-uVar8 / 1000) - (uint)(500 < -uVar8 % 1000);
    }
    auVar18 = FUN_007dbacc(param_2,1,3);
    if (auVar18._8_8_ != 0) {
      FUN_007d8fdc(auVar18._0_8_,auVar18._8_8_,iVar17 * 0x5a);
    }
  }
  uVar8 = FUN_007dbb58(param_2,5);
  if ((uVar8 & 1) != 0) {
    uVar8 = (**(code **)(**(long **)(param_1 + 0x10) + 0x18))(*(long **)(param_1 + 0x10),lVar6);
    auVar18 = FUN_007dbacc(param_2,5,3);
    if (auVar18._8_8_ != 0) {
      FUN_007d8d8c(auVar18._0_8_,auVar18._8_8_,uVar8 >> 0xe & 0xffffff);
    }
  }
  uVar8 = FUN_007dbb58(param_2,8);
  if (((uVar8 & 1) != 0) && ((*(uint *)(param_2 + 0xa0) & 1) != 0)) {
    uVar8 = *(ulong *)(param_2 + 0x98);
    auVar18 = FUN_007dbacc(param_2,8,2);
    if (auVar18._8_8_ != 0) {
      FUN_007d9028(auVar18._0_8_,auVar18._8_8_,uVar8 & 0xffffffff);
    }
  }
  uVar8 = FUN_007dbb58(param_2,0xd);
  if ((uVar8 & 1) != 0) {
    lVar15 = *(long *)(param_2 + 0x70);
    if (*(char *)(param_1 + 0x4c) == '\x01') {
      lVar9 = 0x7fffffffffffffff;
      if (lVar6 != 0x7fffffffffffffff && lVar15 != -0x8000000000000000) {
        lVar9 = -0x8000000000000000;
        if (lVar15 != 0x7fffffffffffffff && lVar6 != -0x8000000000000000) {
          lVar9 = lVar6 - lVar15;
        }
      }
      uVar5 = FUN_00659dd8(lVar9);
      auVar18 = FUN_007dbacc(param_2,0xd,0xd);
      if (auVar18._8_8_ != 0) {
        uVar11 = 0xb;
LAB_0086c07c:
        FUN_007d937c(auVar18._0_8_,auVar18._8_8_,uVar5,uVar11);
      }
    }
    else {
      lVar9 = 0x7fffffffffffffff;
      if (lVar6 != 0x7fffffffffffffff && lVar15 != -0x8000000000000000) {
        lVar9 = -0x8000000000000000;
        if (lVar15 != 0x7fffffffffffffff && lVar6 != -0x8000000000000000) {
          lVar9 = lVar6 - lVar15;
        }
      }
      uVar5 = FUN_00659dd8(lVar9);
      auVar18 = FUN_007dbacc(param_2,0xd,0xd);
      if (auVar18._8_8_ != 0) {
        uVar11 = 7;
        goto LAB_0086c07c;
      }
    }
  }
  local_120 = (undefined1 *)param_3[1];
  puStack_128 = (undefined1 *)*param_3;
  puStack_118 = (undefined1 *)param_3[2];
  local_130 = param_2;
  puStack_110 = (undefined1 *)lVar6;
  if ((*(char *)(param_1 + 0x28) == '\x01') && ((*(byte *)(param_1 + 0x60) & 1) == 0)) {
    puVar13 = *(undefined8 **)(param_1 + 0x250);
    if (puVar13 < *(undefined8 **)(param_1 + 600)) {
      if (puVar13 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      local_130 = (undefined1 *)0x0;
      puVar10 = puVar13 + 5;
      *puVar13 = param_2;
      puVar13[4] = lVar6;
      puVar13[3] = puStack_118;
      puVar13[2] = local_120;
      puVar13[1] = puStack_128;
    }
    else {
      puVar10 = (undefined8 *)FUN_0086d50c(param_1 + 0x248,&local_130);
    }
    param_2 = local_130;
    *(undefined8 **)(param_1 + 0x250) = puVar10;
    local_130 = (undefined1 *)0x0;
    if (param_2 == (undefined1 *)0x0) goto LAB_0086c0d4;
  }
  else {
    FUN_0086c610(param_1,&local_130,0);
    local_130 = (undefined1 *)0x0;
    if (param_2 == (undefined1 *)0x0) goto LAB_0086c0d4;
  }
  local_130 = (undefined1 *)0x0;
  FUN_007dc854(param_2);
  operator_delete(param_2);
LAB_0086c0d4:
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0086c174  FUN_0086c174 =====

void FUN_0086c174(undefined8 *param_1,long param_2)

{
  if (*(long **)(param_2 + 0x68) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0086c188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_2 + 0x68) + 0x40))();
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// ===== 0086c198  FUN_0086c198 =====

void FUN_0086c198(long *param_1,long *param_2,undefined1 *param_3,long param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  void *pvVar4;
  long lVar5;
  void *pvVar6;
  long lVar7;
  long lVar8;
  undefined1 uStack_b1;
  long *local_b0 [2];
  code *local_a0;
  code *pcStack_98;
  void *local_90 [12];
  
  lVar5 = *param_2;
  *param_1 = lVar5;
  if (lVar5 != 0) {
    FUN_00d0f740(1,lVar5 + 8);
  }
  lVar5 = param_2[3];
  lVar8 = param_2[2];
  lVar7 = param_2[1];
  param_1[4] = param_2[4];
  param_1[3] = lVar5;
  param_1[2] = lVar8;
  param_1[1] = lVar7;
  *(undefined1 *)(param_1 + 5) = param_3[0xe0];
  lVar5 = FUN_005d6490();
  param_1[6] = lVar5;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_3 + 0xb4);
  *(undefined8 *)((long)param_1 + 0x3c) = *(undefined8 *)(param_3 + 0xb8);
  if (*(long **)(param_3 + 0x68) == (long *)0x0) {
    *(undefined1 *)((long)param_1 + 0x44) = 0;
    *(undefined1 *)(param_1 + 9) = 0;
  }
  else {
    uVar3 = (**(code **)(**(long **)(param_3 + 0x68) + 0x18))();
    *(int *)((long)param_1 + 0x44) = (int)uVar3;
    *(char *)(param_1 + 9) = (char)((ulong)uVar3 >> 0x20);
  }
  uVar1 = param_3[0x9c];
  param_1[10] = param_4;
  *(undefined1 *)((long)param_1 + 0x4c) = uVar1;
  param_1[0xb] = *(long *)(param_3 + 0x10);
  *(undefined1 *)(param_1 + 0xc) = *param_3;
  *(undefined1 *)((long)param_1 + 0x61) = param_3[0xc0];
  lVar5 = *(long *)(param_3 + 0x68);
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)((long)param_1 + 0x72) = 0;
  *(undefined1 *)((long)param_1 + 0x74) = 0;
  *(undefined1 *)((long)param_1 + 0x76) = 0;
  param_1[0xd] = lVar5;
  param_1[0xf] = *(long *)(param_3 + 0x78);
  param_1[0x10] = *(long *)(param_3 + 0x80);
  param_1[0x11] = *(long *)(param_3 + 0x90);
  lVar5 = *(long *)(param_3 + 0x70);
  *(undefined2 *)(param_1 + 0x13) = 0;
  *(undefined4 *)((long)param_1 + 0x9c) = 0;
  param_1[0x12] = lVar5;
  FUN_007ccda0(param_1 + 0x14);
  FUN_007ccda0(param_1 + 0x2a);
  FUN_008531f8(local_90,1000000);
  pvVar4 = operator_new(0x1e0);
  param_1[0x40] = (long)pvVar4;
  param_1[0x41] = (long)pvVar4;
  param_1[0x42] = (long)pvVar4 + 0x1e0;
  if (pvVar4 != (void *)0x0) {
    FUN_007de7f0(pvVar4,local_90);
    if ((long)pvVar4 + 0x60 != 0) {
      FUN_007de7f0((long)pvVar4 + 0x60,local_90);
      if ((long)pvVar4 + 0xc0 != 0) {
        FUN_007de7f0((long)pvVar4 + 0xc0,local_90);
        if ((long)pvVar4 + 0x120 != 0) {
          FUN_007de7f0((long)pvVar4 + 0x120,local_90);
          if ((long)pvVar4 + 0x180 != 0) {
            FUN_007de7f0((long)pvVar4 + 0x180,local_90);
            param_1[0x41] = (long)pvVar4 + 0x1e0;
            FUN_007de938(local_90);
            *(undefined1 *)(param_1 + 0x43) = 0;
            *(undefined1 *)(param_1 + 0x46) = 0;
            if (*(char *)((long)param_1 + 0x61) == '\x01') {
              pvVar4 = operator_new(0x38);
              FUN_00870998(pvVar4,0x2000);
            }
            else {
              pvVar4 = (void *)0x0;
            }
            param_1[0x47] = (long)pvVar4;
            param_1[0x49] = 0;
            param_1[0x48] = 0;
            param_1[0x4b] = 0;
            param_1[0x4a] = 0;
            FUN_007ebca0(param_1 + 0x4c);
            if (param_1[0x12] != 0) {
              lVar5 = param_1[6];
              local_a0 = FUN_004473ec;
              pcStack_98 = FUN_0086daa4;
              local_b0[0] = param_1;
              uVar3 = FUN_00622394();
              FUN_00841954(local_90,lVar5,1000000,local_b0,0,uVar3,&uStack_b1);
              pvVar4 = local_90[0];
              pvVar6 = (void *)param_1[0x48];
              local_90[0] = (void *)0x0;
              param_1[0x48] = (long)pvVar4;
              if (pvVar6 != (void *)0x0) {
                iVar2 = FUN_00d0f7a0(0xffffffff,pvVar6);
                if (iVar2 == 1) {
                  operator_delete(pvVar6);
                }
                pvVar4 = local_90[0];
                if ((local_90[0] != (void *)0x0) &&
                   (iVar2 = FUN_00d0f7a0(0xffffffff,local_90[0]), iVar2 == 1)) {
                  operator_delete(pvVar4);
                }
              }
              (*local_a0)(0,local_b0,local_b0);
            }
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0086c458  FUN_0086c458 =====

void FUN_0086c458(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 *puVar4;
  long *plVar5;
  void *pvVar6;
  void *pvVar7;
  undefined8 *puVar8;
  
  FUN_00841cf8(param_1 + 0x48);
  FUN_007ebdcc(param_1[0x4c]);
  pvVar6 = (void *)param_1[0x4c];
  if ((pvVar6 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar6), iVar1 == 1)) {
    operator_delete(pvVar6);
  }
  puVar8 = (undefined8 *)param_1[0x49];
  if (puVar8 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)param_1[0x4a];
    puVar2 = puVar8;
    if (puVar8 != puVar4) {
      do {
        puVar4 = puVar4 + -5;
        if (puVar4 == (undefined8 *)0x0) goto LAB_0086c5fc;
        pvVar6 = (void *)*puVar4;
        *puVar4 = 0;
        if (pvVar6 != (void *)0x0) {
          FUN_007dc854(pvVar6);
          operator_delete(pvVar6);
        }
      } while (puVar4 != puVar8);
      puVar2 = (undefined8 *)param_1[0x49];
    }
    param_1[0x4a] = puVar8;
    operator_delete(puVar2);
  }
  pvVar6 = (void *)param_1[0x48];
  if ((pvVar6 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar6), iVar1 == 1)) {
    operator_delete(pvVar6);
  }
  pvVar6 = (void *)param_1[0x47];
  param_1[0x47] = 0;
  if (pvVar6 != (void *)0x0) {
    FUN_008709b4(pvVar6);
    operator_delete(pvVar6);
  }
  pvVar6 = (void *)param_1[0x40];
  if (pvVar6 != (void *)0x0) {
    pvVar7 = (void *)param_1[0x41];
    pvVar3 = pvVar6;
    if (pvVar6 != pvVar7) {
      do {
        pvVar7 = (void *)((long)pvVar7 + -0x60);
        if (pvVar7 == (void *)0x0) {
LAB_0086c5fc:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        FUN_007de938(pvVar7);
      } while (pvVar7 != pvVar6);
      pvVar3 = (void *)param_1[0x40];
    }
    param_1[0x41] = pvVar6;
    operator_delete(pvVar3);
  }
  plVar5 = (long *)*param_1;
  if ((plVar5 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar5 + 1), iVar1 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x0086c5e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 8))(plVar5);
    return;
  }
  return;
}


// ===== 0086c610  FUN_0086c610 =====

void FUN_0086c610(long param_1,long *param_2,undefined1 param_3)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  void *pvVar5;
  byte bVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 *puStack_c0;
  undefined1 *puStack_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *local_50;
  undefined8 uStack_48;
  
  if (*param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../modules/rtp_rtcp/source/rtp_sender_egress.cc",0x10c,"packet",&DAT_001f5fa0);
  }
  uStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_005d34d8(&local_50);
  lVar2 = *param_2;
  uStack_48._0_3_ = CONCAT12(*(undefined1 *)(param_1 + 0x99),(undefined2)uStack_48);
  if (((*(uint *)(lVar2 + 0x80) & 1) == 0) || (*(long *)(lVar2 + 0x78) != 0)) {
    bVar6 = (byte)*(uint *)(lVar2 + 0x80) & *(long *)(lVar2 + 0x78) == 1;
  }
  else {
    bVar6 = 1;
  }
  uStack_48 = (undefined1 *)CONCAT71(uStack_48._1_7_,bVar6);
  local_90 = (undefined1 *)CONCAT44(local_90._4_4_,0xaa00aa00);
  auVar9 = FUN_007dba34(lVar2,8);
  if (auVar9._8_8_ != 0) {
    local_90 = (undefined1 *)CONCAT53(local_90._3_5_,0x10000);
    uVar3 = FUN_007d9000(auVar9._0_8_,auVar9._8_8_,&local_90);
    if (((uVar3 & 1) == 0) && (((ulong)local_90 & 0x10000) != 0)) {
      local_90._0_3_ = (uint3)(ushort)local_90;
    }
  }
  if (((uint)local_90 >> 0x10 & 1) == 0) {
    lVar2 = *param_2;
    if ((*(uint *)(lVar2 + 0xa0) & 1) != 0) {
      local_50 = *(undefined1 **)(lVar2 + 0x98);
    }
  }
  else {
    local_50 = (undefined1 *)((ulong)local_90 & 0xffff);
    lVar2 = *param_2;
    uStack_48._0_3_ = CONCAT21(0x101,(char)uStack_48);
  }
  if (((((*(uint *)(lVar2 + 0x80) & 1) == 0) ||
       (*(long *)(lVar2 + 0x78) != 4 && *(long *)(lVar2 + 0x78) != 2)) &&
      (plVar4 = *(long **)(param_1 + 0x78), plVar4 != (long *)0x0)) &&
     (*(long *)(lVar2 + 0x70) + 0x7fffffffffffffffU < 0xfffffffffffffffe)) {
    (**(code **)(*plVar4 + 0x10))
              (plVar4,(uint)local_90 & 0xffffff | 0xaa000000,*(long *)(lVar2 + 0x70),
               *(undefined4 *)(lVar2 + 0xc));
    lVar2 = *param_2;
  }
  uVar8 = uStack_48;
  uStack_48._0_4_ = CONCAT13(*(undefined1 *)(lVar2 + 0xbc),(undefined3)uStack_48);
  if (*(char *)(param_1 + 0x28) == '\x01') {
    bVar6 = *(byte *)(param_1 + 0x60) ^ 1;
  }
  else {
    bVar6 = 0;
  }
  uStack_48._5_3_ = SUB83(uVar8,5);
  uStack_48 = (undefined1 *)
              (CONCAT35(uStack_48._5_3_,CONCAT14(bVar6,(undefined4)uStack_48)) & 0xffffff01ffffffff)
  ;
  uStack_48 = (undefined1 *)
              (CONCAT26(uStack_48._6_2_,CONCAT15(param_3,(undefined5)uStack_48)) &
              0xffff01ffffffffff);
  uVar3 = FUN_0086c9e0(param_1,lVar2,&local_50,param_2 + 1);
  lVar2 = *param_2;
  if (((char)uStack_48 == '\x01') && (*(char *)(lVar2 + 0xa8) == '\x01')) {
    uVar8 = *(undefined8 *)(param_1 + 0x50);
    pvVar5 = operator_new(0xd0);
    FUN_007dc744(pvVar5,lVar2);
    FUN_00866618(uVar8,pvVar5,param_2[4]);
  }
  else if ((*(uint *)(lVar2 + 0xaa) >> 0x10 & 1) != 0) {
    FUN_00866d80(*(undefined8 *)(param_1 + 0x50));
  }
  if ((uVar3 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x98) = 1;
    lVar2 = *param_2;
    if ((*(uint *)(lVar2 + 0x80) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1074: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                );
    }
    plVar4 = *(long **)(param_1 + 0x80);
    lVar7 = *(long *)(lVar2 + 0x78);
    if ((plVar4 != (long *)0x0) && (lVar7 == 0)) {
      uVar1 = *(undefined4 *)(lVar2 + 8);
      uVar8 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
      (**(code **)(*plVar4 + 0x10))(plVar4,uVar1,uVar8);
      lVar2 = *param_2;
    }
    puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
    local_80 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
    local_70 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
    local_90 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_007ccde0(&local_90,lVar2);
    lVar2 = *param_2;
    puStack_c8 = puStack_88;
    local_d0 = local_90;
    puStack_b8 = puStack_78;
    puStack_c0 = local_80;
    puStack_a8 = puStack_68;
    local_b0 = local_70;
    local_a0 = local_60;
    FUN_0086cac0(param_1,param_2[4],*(undefined4 *)(lVar2 + 0xc),lVar7,&local_d0,
                 *(long *)(lVar2 + 0x18) + *(long *)(lVar2 + 0x10) + (ulong)*(byte *)(lVar2 + 2));
  }
  FUN_005d3508(&local_50);
  return;
}


// ===== 0086c8f8  FUN_0086c8f8 =====

void FUN_0086c8f8(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 0x248);
  puVar2 = *(undefined8 **)(param_1 + 0x250);
  if (puVar1 != puVar2) {
    do {
      if (*(long *)(param_1 + 0x248) == *(long *)(param_1 + 0x250)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__vector/vector.h:439: libc++ Hardening assertion !empty() failed: back() called on an empty vector\n"
                  );
      }
      FUN_0086c610(param_1,puVar1,puVar1 == (undefined8 *)(*(long *)(param_1 + 0x250) + -0x28));
      puVar1 = puVar1 + 5;
    } while (puVar1 != puVar2);
    puVar2 = *(undefined8 **)(param_1 + 0x250);
    puVar1 = *(undefined8 **)(param_1 + 0x248);
  }
  while( true ) {
    if (puVar1 == puVar2) {
      *(undefined8 **)(param_1 + 0x250) = puVar1;
      return;
    }
    puVar2 = puVar2 + -5;
    if (puVar2 == (undefined8 *)0x0) break;
    pvVar3 = (void *)*puVar2;
    *puVar2 = 0;
    if (pvVar3 != (void *)0x0) {
      FUN_007dc854(pvVar3);
      operator_delete(pvVar3);
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 0086c9e0  FUN_0086c9e0 =====

undefined8 FUN_0086c9e0(long param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  void *pvVar5;
  long lVar6;
  long *plVar7;
  
  puVar3 = *(undefined8 **)(param_1 + 0x58);
  if (puVar3 != (undefined8 *)0x0) {
    lVar6 = *(long *)(param_2 + 0x58);
    if (lVar6 != 0) {
      lVar6 = *(long *)(lVar6 + 0x10) + *(long *)(param_2 + 0x60);
    }
    lVar1 = *(long *)(param_2 + 0x18) + *(long *)(param_2 + 0x10) + (ulong)*(byte *)(param_2 + 2);
    lVar2 = 0;
    if (lVar1 != 0) {
      lVar2 = lVar6;
    }
    uVar4 = (**(code **)*puVar3)(puVar3,lVar2,lVar1,param_3);
    if ((uVar4 & 1) != 0) {
      plVar7 = *(long **)(param_1 + 0x20);
      pvVar5 = operator_new(0x88);
      FUN_00889bf8(pvVar5,param_2,*(undefined4 *)(param_4 + 8),0);
      (**(code **)(*plVar7 + 0x28))(plVar7,pvVar5);
      return 1;
    }
  }
  uVar4 = FUN_004022fc();
  if ((uVar4 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../modules/rtp_rtcp/source/rtp_sender_egress.cc",0xe2a,
                 "Transport failed to send packet.");
  }
  return 0;
}


// ===== 0086cac0  FUN_0086cac0 =====

void FUN_0086cac0(long param_1,long param_2,int param_3,ulong param_4,long *param_5,
                 undefined8 param_6)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long local_100;
  long lStack_f8;
  ulong local_f0;
  long lStack_e8;
  long local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  plVar1 = *(long **)(param_1 + 0x88);
  if (plVar1 == (long *)0x0) {
    lVar4 = 0x150;
    if ((*(byte *)(param_1 + 0x40) & param_3 == *(int *)(param_1 + 0x3c)) == 0) {
      lVar4 = 0xa0;
    }
    plVar1 = (long *)(param_1 + lVar4);
  }
  else {
    (**(code **)(*plVar1 + 0x10))(&local_100,plVar1,param_3);
    plVar1 = (long *)(param_1 + 0xa0);
    *(undefined8 *)(param_1 + 0x128) = uStack_78;
    *(undefined8 *)(param_1 + 0x120) = local_80;
    *(undefined8 *)(param_1 + 0x138) = uStack_68;
    *(undefined8 *)(param_1 + 0x130) = uStack_70;
    *(undefined8 *)(param_1 + 0x148) = uStack_58;
    *(undefined8 *)(param_1 + 0x140) = local_60;
    *(undefined8 *)(param_1 + 0xe8) = uStack_b8;
    *(undefined8 *)(param_1 + 0xe0) = local_c0;
    *(undefined8 *)(param_1 + 0xf8) = uStack_a8;
    *(undefined8 *)(param_1 + 0xf0) = uStack_b0;
    *(undefined8 *)(param_1 + 0x108) = uStack_98;
    *(undefined8 *)(param_1 + 0x100) = local_a0;
    *(undefined8 *)(param_1 + 0x118) = uStack_88;
    *(undefined8 *)(param_1 + 0x110) = uStack_90;
    *(long *)(param_1 + 0xa8) = lStack_f8;
    *(long *)(param_1 + 0xa0) = local_100;
    *(long *)(param_1 + 0xb8) = lStack_e8;
    *(ulong *)(param_1 + 0xb0) = local_f0;
    *(undefined8 *)(param_1 + 200) = uStack_d8;
    *(long *)(param_1 + 0xc0) = local_e0;
    *(undefined8 *)(param_1 + 0xd8) = uStack_c8;
    *(undefined8 *)(param_1 + 0xd0) = uStack_d0;
  }
  if (*plVar1 == 0x7fffffffffffffff) {
    *plVar1 = param_2;
  }
  if (param_4 == 2) {
    plVar1[8] = plVar1[8] + *param_5;
    plVar1[9] = plVar1[9] + param_5[1];
    plVar1[10] = plVar1[10] + param_5[2];
    plVar1[0xb] = plVar1[0xb] + param_5[3];
    lVar5 = plVar1[0xe];
    plVar1[0xc] = plVar1[0xc] + param_5[4];
    plVar1[0xd] = plVar1[0xd] + param_5[5];
    lVar4 = 0x7fffffffffffffff;
    if ((lVar5 != 0x7fffffffffffffff) && (lVar6 = param_5[6], lVar6 != 0x7fffffffffffffff)) {
      lVar4 = -0x8000000000000000;
      if (lVar6 != -0x8000000000000000 && lVar5 != -0x8000000000000000) {
        lVar4 = lVar5 + lVar6;
      }
    }
    plVar1[0xe] = lVar4;
  }
  else if (param_4 == 3) {
    plVar1[0xf] = plVar1[0xf] + *param_5;
    plVar1[0x10] = plVar1[0x10] + param_5[1];
    plVar1[0x11] = plVar1[0x11] + param_5[2];
    plVar1[0x12] = plVar1[0x12] + param_5[3];
    lVar5 = plVar1[0x15];
    plVar1[0x13] = plVar1[0x13] + param_5[4];
    plVar1[0x14] = plVar1[0x14] + param_5[5];
    lVar4 = 0x7fffffffffffffff;
    if ((lVar5 != 0x7fffffffffffffff) && (lVar6 = param_5[6], lVar6 != 0x7fffffffffffffff)) {
      lVar4 = -0x8000000000000000;
      if (lVar6 != -0x8000000000000000 && lVar5 != -0x8000000000000000) {
        lVar4 = lVar5 + lVar6;
      }
    }
    plVar1[0x15] = lVar4;
  }
  plVar1[1] = plVar1[1] + *param_5;
  plVar1[2] = plVar1[2] + param_5[1];
  plVar1[3] = plVar1[3] + param_5[2];
  plVar1[4] = plVar1[4] + param_5[3];
  lVar5 = plVar1[7];
  plVar1[5] = plVar1[5] + param_5[4];
  plVar1[6] = plVar1[6] + param_5[5];
  lVar4 = 0x7fffffffffffffff;
  if ((lVar5 != 0x7fffffffffffffff) && (lVar6 = param_5[6], lVar6 != 0x7fffffffffffffff)) {
    lVar4 = -0x8000000000000000;
    if (lVar6 != -0x8000000000000000 && lVar5 != -0x8000000000000000) {
      lVar4 = lVar5 + lVar6;
    }
  }
  plVar1[7] = lVar4;
  if (param_4 < (ulong)((*(long *)(param_1 + 0x208) - *(long *)(param_1 + 0x200) >> 5) *
                       -0x5555555555555555)) {
    FUN_008532e0(*(long *)(param_1 + 0x200) + param_4 * 0x60,param_6,param_2);
    if (*(long *)(param_1 + 0x90) == 0) {
      plVar2 = *(long **)(param_1 + 0x88);
      lStack_f8 = 0;
      local_f0 = 0;
      lStack_e8 = 0;
      local_e0 = 0;
      local_100 = 0;
    }
    else {
      FUN_0086cebc(&local_100,param_1,param_2);
      plVar2 = *(long **)(param_1 + 0x88);
    }
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plVar2,plVar1,param_3);
    }
    plVar1 = *(long **)(param_1 + 0x90);
    if (plVar1 != (long *)0x0) {
      iVar3 = -1;
      if ((local_100 != 0x7fffffffffffffff) && (lStack_f8 != 0x7fffffffffffffff)) {
        lVar4 = -0x8000000000000000;
        if (local_100 != -0x8000000000000000 && lStack_f8 != -0x8000000000000000) {
          lVar4 = local_100 + lStack_f8;
        }
        if ((lVar4 != 0x7fffffffffffffff) && (local_f0 != 0x7fffffffffffffff)) {
          lVar5 = -0x8000000000000000;
          if (local_f0 != 0x8000000000000000 && lVar4 != -0x8000000000000000) {
            lVar5 = lVar4 + local_f0;
          }
          if ((lVar5 != 0x7fffffffffffffff) && (lStack_e8 != 0x7fffffffffffffff)) {
            lVar4 = -0x8000000000000000;
            if (lStack_e8 != -0x8000000000000000 && lVar5 != -0x8000000000000000) {
              lVar4 = lVar5 + lStack_e8;
            }
            if ((lVar4 != 0x7fffffffffffffff) && (local_e0 != 0x7fffffffffffffff)) {
              iVar3 = 0;
              if (local_e0 != -0x8000000000000000 && lVar4 != -0x8000000000000000) {
                iVar3 = (int)lVar4 + (int)local_e0;
              }
            }
          }
        }
      }
      (**(code **)(*plVar1 + 0x10))
                (plVar1,iVar3,local_f0 & 0xffffffff,*(undefined4 *)(param_1 + 0x38));
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
            );
}


// ===== 0086cebc  FUN_0086cebc =====

void FUN_0086cebc(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  lVar3 = *(long *)(param_2 + 0x208);
  lVar1 = *(long *)(param_2 + 0x200);
  param_1[4] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[3] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  if (lVar3 != lVar1) {
    auVar4 = FUN_00853260();
    uVar2 = auVar4._0_8_;
    lVar3 = *(long *)(param_2 + 0x208);
    lVar1 = *(long *)(param_2 + 0x200);
    if ((auVar4 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
      uVar2 = 0;
    }
    *param_1 = uVar2;
    if (1 < (ulong)((lVar3 - lVar1 >> 5) * -0x5555555555555555)) {
      auVar4 = FUN_00853260(lVar1 + 0x60,param_3);
      uVar2 = auVar4._0_8_;
      lVar3 = *(long *)(param_2 + 0x208);
      lVar1 = *(long *)(param_2 + 0x200);
      if ((auVar4 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
        uVar2 = 0;
      }
      param_1[1] = uVar2;
      if (2 < (ulong)((lVar3 - lVar1 >> 5) * -0x5555555555555555)) {
        auVar4 = FUN_00853260(lVar1 + 0xc0,param_3);
        uVar2 = auVar4._0_8_;
        lVar3 = *(long *)(param_2 + 0x208);
        lVar1 = *(long *)(param_2 + 0x200);
        if ((auVar4 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
          uVar2 = 0;
        }
        param_1[2] = uVar2;
        if (3 < (ulong)((lVar3 - lVar1 >> 5) * -0x5555555555555555)) {
          auVar4 = FUN_00853260(lVar1 + 0x120,param_3);
          uVar2 = auVar4._0_8_;
          lVar3 = *(long *)(param_2 + 0x208);
          lVar1 = *(long *)(param_2 + 0x200);
          if ((auVar4 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
            uVar2 = 0;
          }
          param_1[3] = uVar2;
          if (4 < (ulong)((lVar3 - lVar1 >> 5) * -0x5555555555555555)) {
            auVar4 = FUN_00853260(lVar1 + 0x180,param_3);
            uVar2 = auVar4._0_8_;
            if ((auVar4 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
              uVar2 = 0;
            }
            param_1[4] = uVar2;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
            );
}


// ===== 0086d008  FUN_0086d008 =====

void FUN_0086d008(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  plVar1 = *(long **)(param_1 + 0x88);
  if (plVar1 == (long *)0x0) {
    uVar4 = *(undefined8 *)(param_1 + 0xc0);
    uVar3 = *(undefined8 *)(param_1 + 0xd8);
    uVar2 = *(undefined8 *)(param_1 + 0xd0);
    uVar6 = *(undefined8 *)(param_1 + 0xa8);
    uVar5 = *(undefined8 *)(param_1 + 0xa0);
    uVar8 = *(undefined8 *)(param_1 + 0xb8);
    uVar7 = *(undefined8 *)(param_1 + 0xb0);
    param_2[5] = *(undefined8 *)(param_1 + 200);
    param_2[4] = uVar4;
    param_2[7] = uVar3;
    param_2[6] = uVar2;
    param_2[1] = uVar6;
    *param_2 = uVar5;
    param_2[3] = uVar8;
    param_2[2] = uVar7;
    uVar4 = *(undefined8 *)(param_1 + 0x100);
    uVar3 = *(undefined8 *)(param_1 + 0x118);
    uVar2 = *(undefined8 *)(param_1 + 0x110);
    uVar6 = *(undefined8 *)(param_1 + 0xe8);
    uVar5 = *(undefined8 *)(param_1 + 0xe0);
    uVar8 = *(undefined8 *)(param_1 + 0xf8);
    uVar7 = *(undefined8 *)(param_1 + 0xf0);
    param_2[0xd] = *(undefined8 *)(param_1 + 0x108);
    param_2[0xc] = uVar4;
    param_2[0xf] = uVar3;
    param_2[0xe] = uVar2;
    param_2[9] = uVar6;
    param_2[8] = uVar5;
    param_2[0xb] = uVar8;
    param_2[10] = uVar7;
    uVar5 = *(undefined8 *)(param_1 + 0x138);
    uVar4 = *(undefined8 *)(param_1 + 0x130);
    uVar3 = *(undefined8 *)(param_1 + 0x148);
    uVar2 = *(undefined8 *)(param_1 + 0x140);
    uVar6 = *(undefined8 *)(param_1 + 0x120);
    param_2[0x11] = *(undefined8 *)(param_1 + 0x128);
    param_2[0x10] = uVar6;
    param_2[0x13] = uVar5;
    param_2[0x12] = uVar4;
    param_2[0x15] = uVar3;
    param_2[0x14] = uVar2;
    uVar4 = *(undefined8 *)(param_1 + 0x170);
    uVar3 = *(undefined8 *)(param_1 + 0x188);
    uVar2 = *(undefined8 *)(param_1 + 0x180);
    uVar6 = *(undefined8 *)(param_1 + 0x158);
    uVar5 = *(undefined8 *)(param_1 + 0x150);
    uVar8 = *(undefined8 *)(param_1 + 0x168);
    uVar7 = *(undefined8 *)(param_1 + 0x160);
    param_3[5] = *(undefined8 *)(param_1 + 0x178);
    param_3[4] = uVar4;
    param_3[7] = uVar3;
    param_3[6] = uVar2;
    param_3[1] = uVar6;
    *param_3 = uVar5;
    param_3[3] = uVar8;
    param_3[2] = uVar7;
    uVar4 = *(undefined8 *)(param_1 + 0x1b0);
    uVar3 = *(undefined8 *)(param_1 + 0x1c8);
    uVar2 = *(undefined8 *)(param_1 + 0x1c0);
    uVar6 = *(undefined8 *)(param_1 + 0x198);
    uVar5 = *(undefined8 *)(param_1 + 400);
    uVar8 = *(undefined8 *)(param_1 + 0x1a8);
    uVar7 = *(undefined8 *)(param_1 + 0x1a0);
    param_3[0xd] = *(undefined8 *)(param_1 + 0x1b8);
    param_3[0xc] = uVar4;
    param_3[0xf] = uVar3;
    param_3[0xe] = uVar2;
    param_3[9] = uVar6;
    param_3[8] = uVar5;
    param_3[0xb] = uVar8;
    param_3[10] = uVar7;
    uVar4 = *(undefined8 *)(param_1 + 0x1e0);
    uVar3 = *(undefined8 *)(param_1 + 0x1f8);
    uVar2 = *(undefined8 *)(param_1 + 0x1f0);
    uVar6 = *(undefined8 *)(param_1 + 0x1d8);
    uVar5 = *(undefined8 *)(param_1 + 0x1d0);
    param_3[0x13] = *(undefined8 *)(param_1 + 0x1e8);
    param_3[0x12] = uVar4;
    param_3[0x15] = uVar3;
    param_3[0x14] = uVar2;
    param_3[0x11] = uVar6;
    param_3[0x10] = uVar5;
  }
  else {
    (**(code **)(*plVar1 + 0x10))(&local_e0,plVar1,*(undefined4 *)(param_1 + 0x38));
    param_2[0x15] = uStack_38;
    param_2[0x14] = local_40;
    param_2[0x11] = uStack_58;
    param_2[0x10] = local_60;
    param_2[0x13] = uStack_48;
    param_2[0x12] = uStack_50;
    param_2[9] = uStack_98;
    param_2[8] = local_a0;
    param_2[0xb] = uStack_88;
    param_2[10] = uStack_90;
    param_2[0xd] = uStack_78;
    param_2[0xc] = local_80;
    param_2[0xf] = uStack_68;
    param_2[0xe] = uStack_70;
    param_2[1] = uStack_d8;
    *param_2 = local_e0;
    param_2[3] = uStack_c8;
    param_2[2] = uStack_d0;
    param_2[5] = uStack_b8;
    param_2[4] = local_c0;
    param_2[7] = uStack_a8;
    param_2[6] = uStack_b0;
    if (*(char *)(param_1 + 0x40) == '\x01') {
      (**(code **)(**(long **)(param_1 + 0x88) + 0x10))
                (&local_e0,*(long **)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x3c));
      param_3[0x15] = uStack_38;
      param_3[0x14] = local_40;
      param_3[0x11] = uStack_58;
      param_3[0x10] = local_60;
      param_3[0x13] = uStack_48;
      param_3[0x12] = uStack_50;
      param_3[9] = uStack_98;
      param_3[8] = local_a0;
      param_3[0xb] = uStack_88;
      param_3[10] = uStack_90;
      param_3[0xd] = uStack_78;
      param_3[0xc] = local_80;
      param_3[0xf] = uStack_68;
      param_3[0xe] = uStack_70;
      param_3[1] = uStack_d8;
      *param_3 = local_e0;
      param_3[3] = uStack_c8;
      param_3[2] = uStack_d0;
      param_3[5] = uStack_b8;
      param_3[4] = local_c0;
      param_3[7] = uStack_a8;
      param_3[6] = uStack_b0;
    }
  }
  return;
}


// ===== 0086d148  FUN_0086d148 =====

void FUN_0086d148(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x99) = param_2;
  return;
}


// ===== 0086d154  FUN_0086d154 =====

undefined1 FUN_0086d154(long param_1)

{
  return *(undefined1 *)(param_1 + 0x98);
}


// ===== 0086d160  FUN_0086d160 =====

void FUN_0086d160(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x9c) = param_2;
  return;
}


// ===== 0086d16c  FUN_0086d16c =====

void FUN_0086d16c(undefined8 *param_1,long param_2,undefined2 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [12];
  undefined8 local_70;
  undefined1 local_68;
  undefined8 *local_60;
  undefined8 *puStack_58;
  undefined8 *local_50;
  
  if ((*(byte *)(param_2 + 0x61) & 1) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    puStack_58 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
    local_60 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
    if (param_4 == (undefined8 *)0x0) {
      local_50 = (undefined8 *)0x0;
      puVar1 = (undefined8 *)0x0;
      local_60 = (undefined8 *)0x0;
    }
    else {
      if ((ulong)param_4 >> 0x3d != 0) {
        auVar6 = FUN_0086d7d4();
        lVar5 = auVar6._0_8_;
        if (*(char *)(lVar5 + 0x230) == '\x01') {
          *(undefined1 *)(lVar5 + 0x230) = 0;
        }
        if ((undefined8 *)(lVar5 + 0x218) != (undefined8 *)0x0) {
          uVar4 = *auVar6._8_8_;
          *(undefined4 *)(lVar5 + 0x220) = *(undefined4 *)(auVar6._8_8_ + 1);
          *(undefined8 *)(lVar5 + 0x218) = uVar4;
          uVar4 = *param_4;
          *(undefined4 *)(lVar5 + 0x22c) = *(undefined4 *)(param_4 + 1);
          *(undefined8 *)(lVar5 + 0x224) = uVar4;
          *(undefined1 *)(lVar5 + 0x230) = 1;
          return;
        }
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      local_60 = (undefined8 *)operator_new((long)param_4 * 8);
      lVar5 = (long)param_4 << 1;
      local_50 = local_60 + (long)param_4;
      puStack_58 = local_60;
      do {
        auVar7 = FUN_008718a8(*(undefined8 *)(param_2 + 0x238),*param_3);
        local_70 = auVar7._0_8_;
        local_68 = auVar7[8];
        if ((auVar7 & (undefined1  [12])0x1) == (undefined1  [12])0x0) {
          *param_1 = 0;
          param_1[1] = 0;
          param_1[2] = 0;
          if (local_60 == (undefined8 *)0x0) {
            return;
          }
          uVar3 = (ulong)((long)puStack_58 + (-8 - ((long)puStack_58 << 0x3d))) >> 3;
          uVar2 = (ulong)(((long)local_60 - (long)puStack_58 << 0x3d) -
                         ((long)local_60 - (long)puStack_58)) >> 3;
          if (uVar3 <= uVar2) {
            uVar2 = uVar3;
          }
          puVar1 = puStack_58;
          if ((1 < uVar2) && ((((int)local_60 - (int)puStack_58 | -(int)puStack_58) & 7U) == 0)) {
            uVar2 = uVar2 & 0x1ffffffffffffffe;
            puVar1 = puStack_58 + -uVar2;
            do {
              uVar2 = uVar2 - 2;
            } while (uVar2 != 0);
          }
          do {
            if (puVar1 == local_60) {
              puStack_58 = local_60;
              operator_delete(local_60);
              return;
            }
            puVar1 = puVar1 + -1;
          } while (puVar1 != (undefined8 *)0x0);
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        if (puStack_58 < local_50) {
          if (puStack_58 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          puVar1 = puStack_58 + 1;
          *puStack_58 = local_70;
        }
        else {
          puVar1 = (undefined8 *)FUN_0086d7ec(&local_60,&local_70);
        }
        lVar5 = lVar5 + -2;
        param_3 = param_3 + 1;
        puStack_58 = puVar1;
      } while (lVar5 != 0);
    }
    *param_1 = local_60;
    param_1[1] = puVar1;
    param_1[2] = local_50;
  }
  return;
}


// ===== 0086d320  FUN_0086d320 =====

void FUN_0086d320(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x230) == '\x01') {
    *(undefined1 *)(param_1 + 0x230) = 0;
  }
  if ((undefined8 *)(param_1 + 0x218) != (undefined8 *)0x0) {
    uVar1 = *param_2;
    *(undefined4 *)(param_1 + 0x220) = *(undefined4 *)(param_2 + 1);
    *(undefined8 *)(param_1 + 0x218) = uVar1;
    uVar1 = *param_3;
    *(undefined4 *)(param_1 + 0x22c) = *(undefined4 *)(param_3 + 1);
    *(undefined8 *)(param_1 + 0x224) = uVar1;
    *(undefined1 *)(param_1 + 0x230) = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0086d38c  FUN_0086d38c =====

void FUN_0086d38c(long param_1,undefined2 *param_2,long param_3)

{
  for (param_3 = param_3 << 1; param_3 != 0; param_3 = param_3 + -2) {
    FUN_00866d80(*(undefined8 *)(param_1 + 0x50),*param_2);
    param_2 = param_2 + 1;
  }
  return;
}


// ===== 0086d3d8  FUN_0086d3d8 =====

void FUN_0086d3d8(long param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  uVar3 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
  FUN_0086cebc(&local_50,param_1,uVar3);
  if ((local_50 == (undefined1 *)0x7fffffffffffffff) ||
     (puStack_48 == (undefined1 *)0x7fffffffffffffff)) {
    iVar4 = -1;
  }
  else {
    iVar4 = -1;
    puVar2 = (undefined1 *)0x8000000000000000;
    if (puStack_48 != (undefined1 *)0x8000000000000000 &&
        local_50 != (undefined1 *)0x8000000000000000) {
      puVar2 = puStack_48 + (long)local_50;
    }
    if ((puVar2 != (undefined1 *)0x7fffffffffffffff) &&
       (local_40 != (undefined1 *)0x7fffffffffffffff)) {
      puVar1 = (undefined1 *)0x8000000000000000;
      if (local_40 != (undefined1 *)0x8000000000000000 && puVar2 != (undefined1 *)0x8000000000000000
         ) {
        puVar1 = local_40 + (long)puVar2;
      }
      if ((puVar1 != (undefined1 *)0x7fffffffffffffff) &&
         (local_38 != (undefined1 *)0x7fffffffffffffff)) {
        puVar2 = (undefined1 *)0x8000000000000000;
        if (local_38 != (undefined1 *)0x8000000000000000 &&
            puVar1 != (undefined1 *)0x8000000000000000) {
          puVar2 = local_38 + (long)puVar1;
        }
        if ((puVar2 != (undefined1 *)0x7fffffffffffffff) &&
           (local_30 != (undefined1 *)0x7fffffffffffffff)) {
          iVar4 = 0;
          if (local_30 != (undefined1 *)0x8000000000000000 &&
              puVar2 != (undefined1 *)0x8000000000000000) {
            iVar4 = (int)local_30 + (int)puVar2;
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0086d464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x90) + 0x10))
            (*(long **)(param_1 + 0x90),iVar4,local_40,*(undefined4 *)(param_1 + 0x38));
  return;
}


// ===== 0086d504  FUN_0086d504 =====

void FUN_0086d504(void)

{
  return;
}


// ===== 0086d50c  FUN_0086d50c =====

long FUN_0086d50c(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  void *pvVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  void *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  void *local_38;
  
  lVar7 = param_1[1] - *param_1;
  uVar2 = (lVar7 >> 3) * -0x3333333333333333 + 1;
  if (0x666666666666666 < uVar2) {
    FUN_0086d7bc();
LAB_0086d6a8:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  local_50 = (void *)0x0;
  lVar4 = param_1[2] - *param_1 >> 3;
  uVar5 = lVar4 * -0x6666666666666666;
  if (uVar5 < uVar2 || uVar5 - uVar2 == 0) {
    uVar5 = uVar2;
  }
  if (0x333333333333332 < (ulong)(lVar4 * -0x3333333333333333)) {
    uVar5 = 0x666666666666666;
  }
  if (uVar5 != 0) {
    if (0x666666666666666 < uVar5) goto LAB_0086d6a8;
    local_50 = operator_new(uVar5 * 0x28);
  }
  local_38 = (void *)((long)local_50 + uVar5 * 0x28);
  local_48 = (undefined8 *)((long)local_50 + lVar7);
  if (local_48 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  uVar3 = *param_2;
  *param_2 = 0;
  *local_48 = uVar3;
  local_40 = local_48 + 5;
  uVar3 = param_2[3];
  uVar10 = param_2[2];
  uVar9 = param_2[1];
  local_48[4] = param_2[4];
  local_48[3] = uVar3;
  local_48[2] = uVar10;
  local_48[1] = uVar9;
  FUN_0086d6ac(param_1,&local_50);
  puVar1 = local_48;
  lVar7 = param_1[1];
  puVar8 = local_40;
  while( true ) {
    if (puVar1 == puVar8) {
      if (local_50 != (void *)0x0) {
        local_40 = puVar8;
        operator_delete(local_50);
      }
      return lVar7;
    }
    puVar8 = puVar8 + -5;
    if (puVar8 == (undefined8 *)0x0) break;
    pvVar6 = (void *)*puVar8;
    *puVar8 = 0;
    if (pvVar6 != (void *)0x0) {
      FUN_007dc854(pvVar6);
      operator_delete(pvVar6);
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 0086d6ac  FUN_0086d6ac =====

void FUN_0086d6ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *pvVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  
  puVar10 = (undefined8 *)*param_1;
  puVar3 = (undefined8 *)param_1[1];
  puVar2 = (undefined8 *)((long)puVar10 + (param_2[1] - (long)puVar3));
  puVar4 = puVar10;
  puVar5 = puVar2;
  if (puVar3 != puVar10) {
    do {
      if (puVar5 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      uVar7 = *puVar4;
      *puVar4 = 0;
      *puVar5 = uVar7;
      uVar7 = puVar4[3];
      uVar8 = puVar4[2];
      uVar6 = puVar4[1];
      puVar1 = puVar4 + 5;
      puVar5[4] = puVar4[4];
      puVar5[3] = uVar7;
      puVar5[2] = uVar8;
      puVar5[1] = uVar6;
      puVar4 = puVar1;
      puVar5 = puVar5 + 5;
    } while (puVar1 != puVar3);
    do {
      if (puVar10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      pvVar9 = (void *)*puVar10;
      *puVar10 = 0;
      if (pvVar9 != (void *)0x0) {
        FUN_007dc854(pvVar9);
        operator_delete(pvVar9);
      }
      puVar10 = puVar10 + 5;
    } while (puVar10 != puVar3);
  }
  param_2[1] = puVar2;
  uVar7 = *param_1;
  uVar8 = param_1[2];
  param_1[1] = uVar7;
  uVar11 = param_2[1];
  uVar6 = param_2[3];
  param_1[1] = param_2[2];
  *param_1 = uVar11;
  param_1[2] = uVar6;
  param_2[2] = uVar7;
  param_2[3] = uVar8;
  *param_2 = uVar7;
  param_2[1] = uVar7;
  return;
}


// ===== 0086d7bc  FUN_0086d7bc =====

void FUN_0086d7bc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 0086d7d4  FUN_0086d7d4 =====

void FUN_0086d7d4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 0086d7ec  FUN_0086d7ec =====

undefined8 * FUN_0086d7ec(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  size_t __n;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  void *__dest;
  
  puVar6 = (undefined8 *)(param_1[1] - *param_1);
  uVar1 = ((long)puVar6 >> 3) + 1;
  if (uVar1 >> 0x3d != 0) {
    FUN_0086d7d4();
LAB_0086d8dc:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  uVar4 = param_1[2] - *param_1;
  uVar5 = (long)uVar4 >> 2;
  if (uVar5 <= uVar1) {
    uVar5 = uVar1;
  }
  if (0x7ffffffffffffff7 < uVar4) {
    uVar5 = 0x1fffffffffffffff;
  }
  if (uVar5 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (uVar5 >> 0x3d != 0) goto LAB_0086d8dc;
    pvVar2 = operator_new(uVar5 << 3);
    puVar6 = (undefined8 *)((long)pvVar2 + (long)puVar6);
  }
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = *param_2;
    __n = param_1[1] - *param_1;
    __dest = (void *)((long)puVar6 - __n);
    memcpy(__dest,(void *)*param_1,__n);
    pvVar3 = (void *)*param_1;
    *param_1 = (long)__dest;
    param_1[1] = (long)(puVar6 + 1);
    param_1[2] = (long)((long)pvVar2 + uVar5 * 8);
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    return puVar6 + 1;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0086d8e0  FUN_0086d8e0 =====

void FUN_0086d8e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined8 *local_50;
  undefined8 *puStack_48;
  undefined8 local_40;
  
  param_1 = (undefined8 *)*param_1;
  puStack_48 = (undefined8 *)param_1[2];
  local_50 = (undefined8 *)param_1[1];
  local_40 = param_1[3];
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,&local_50);
  puVar1 = local_50;
  puVar3 = puStack_48;
  if (local_50 != (undefined8 *)0x0) {
    while (puVar1 != puVar3) {
      puVar3 = puVar3 + -1;
      if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      pvVar2 = (void *)*puVar3;
      *puVar3 = 0;
      if (pvVar2 != (void *)0x0) {
        FUN_007dc854(pvVar2);
        operator_delete(pvVar2);
      }
    }
    puStack_48 = puVar1;
    operator_delete(local_50);
  }
  return;
}


// ===== 0086d9bc  FUN_0086d9bc =====

void FUN_0086d9bc(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  void *pvVar5;
  undefined8 *puVar6;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x86daa4);
      (*pcVar1)();
    }
    pvVar4 = (void *)*param_2;
    if (pvVar4 != (void *)0x0) {
      puVar6 = *(undefined8 **)((long)pvVar4 + 8);
      if (puVar6 != (undefined8 *)0x0) {
        puVar3 = *(undefined8 **)((long)pvVar4 + 0x10);
        puVar2 = puVar6;
        if (puVar6 != puVar3) {
          do {
            puVar3 = puVar3 + -1;
            if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                        );
            }
            pvVar5 = (void *)*puVar3;
            *puVar3 = 0;
            if (pvVar5 != (void *)0x0) {
              FUN_007dc854(pvVar5);
              operator_delete(pvVar5);
            }
          } while (puVar3 != puVar6);
          puVar2 = *(undefined8 **)((long)pvVar4 + 8);
        }
        *(undefined8 **)((long)pvVar4 + 0x10) = puVar6;
        operator_delete(puVar2);
      }
      operator_delete(pvVar4);
      return;
    }
  }
  return;
}


// ===== 0086daa4  FUN_0086daa4 =====

undefined8 FUN_0086daa4(undefined8 *param_1)

{
  FUN_0086d3d8(*param_1);
  return 1000000;
}


// ===== 0086dacc  FUN_0086dacc =====

void FUN_0086dacc(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = 0x7fffffffffffffff;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}


// ===== 0086db00  FUN_0086db00 =====

void FUN_0086db00(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar3 = param_2[4];
  uVar2 = param_2[7];
  uVar1 = param_2[6];
  uVar5 = param_2[1];
  uVar4 = *param_2;
  uVar7 = param_2[3];
  uVar6 = param_2[2];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  param_1[1] = uVar5;
  *param_1 = uVar4;
  param_1[3] = uVar7;
  param_1[2] = uVar6;
  uVar1 = *(undefined8 *)((long)param_2 + 0x39);
  *(undefined8 *)((long)param_1 + 0x41) = *(undefined8 *)((long)param_2 + 0x41);
  *(undefined8 *)((long)param_1 + 0x39) = uVar1;
  return;
}


// ===== 0086db20  FUN_0086db20 =====

void FUN_0086db20(void)

{
  return;
}


// ===== 0086db28  FUN_0086db28 =====

void FUN_0086db28(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 0x7fffffffffffffff;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  return;
}


// ===== 0086db50  FUN_0086db50 =====

void FUN_0086db50(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = param_2[3];
  uVar5 = param_2[2];
  uVar2 = param_2[5];
  uVar1 = param_2[4];
  uVar4 = param_2[1];
  uVar3 = *param_2;
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  param_1[3] = uVar6;
  param_1[2] = uVar5;
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  param_1[1] = uVar4;
  *param_1 = uVar3;
  return;
}


// ===== 0086db70  FUN_0086db70 =====

void FUN_0086db70(void)

{
  return;
}


// ===== 0086db78  FUN_0086db78 =====

void FUN_0086db78(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[1] = 0x7ff8000000000000;
  *param_1 = 0x7ff8000000000000;
  return;
}


// ===== 0086dba4  FUN_0086dba4 =====

void FUN_0086dba4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = *param_2;
  uVar2 = param_2[6];
  uVar1 = param_2[5];
  uVar4 = param_2[2];
  uVar3 = param_2[1];
  uVar6 = param_2[4];
  uVar5 = param_2[3];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  param_1[6] = uVar2;
  param_1[5] = uVar1;
  param_1[4] = uVar6;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
  param_1[1] = uVar3;
  return;
}


// ===== 0086dbd4  FUN_0086dbd4 =====

void FUN_0086dbd4(void)

{
  return;
}


// ===== 0086dbdc  FUN_0086dbdc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0086dbdc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0x7fffffffffffffff;
  param_1[1] = 0;
  uVar2 = _UNK_001f3448;
  uVar1 = _DAT_001f3440;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  uVar2 = _UNK_001f1c18;
  uVar1 = _DAT_001f1c10;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[9] = uVar2;
  param_1[8] = uVar1;
  *(undefined1 *)((long)param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((long)param_1 + 100) = 0;
  return;
}


// ===== 0086dc20  FUN_0086dc20 =====

void FUN_0086dc20(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar3 = param_2[4];
  uVar2 = param_2[7];
  uVar1 = param_2[6];
  uVar5 = param_2[1];
  uVar4 = *param_2;
  uVar7 = param_2[3];
  uVar6 = param_2[2];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  param_1[1] = uVar5;
  *param_1 = uVar4;
  param_1[3] = uVar7;
  param_1[2] = uVar6;
  uVar5 = param_2[9];
  uVar4 = param_2[8];
  uVar3 = param_2[0xb];
  uVar2 = param_2[10];
  uVar1 = *(undefined8 *)((long)param_2 + 0x5d);
  *(undefined8 *)((long)param_1 + 0x65) = *(undefined8 *)((long)param_2 + 0x65);
  *(undefined8 *)((long)param_1 + 0x5d) = uVar1;
  param_1[9] = uVar5;
  param_1[8] = uVar4;
  param_1[0xb] = uVar3;
  param_1[10] = uVar2;
  return;
}


// ===== 0086dc48  FUN_0086dc48 =====

void FUN_0086dc48(void)

{
  return;
}


// ===== 0086dc50  FUN_0086dc50 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0086dc50(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 2) = 0;
  uVar1 = _DAT_001f2c30;
  param_1[1] = _UNK_001f2c38;
  *param_1 = uVar1;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  return;
}


// ===== 0086dc78  FUN_0086dc78 =====

void FUN_0086dc78(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  void *pvVar5;
  long lVar6;
  void *pvVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  uVar2 = *(undefined1 *)(param_2 + 2);
  uVar12 = param_2[1];
  uVar11 = *param_2;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 2) = uVar2;
  param_1[1] = uVar12;
  *param_1 = uVar11;
  param_1[3] = 0;
  puVar10 = (undefined8 *)param_2[3];
  puVar1 = (undefined8 *)param_2[4];
  uVar8 = (long)puVar1 - (long)puVar10;
  if (uVar8 != 0) {
    if (0x249249249249249 < (ulong)(((long)uVar8 >> 4) * 0x6db6db6db6db6db7)) {
      FUN_0086e3fc();
      goto LAB_0086dda4;
    }
    puVar4 = (undefined8 *)operator_new(uVar8);
    param_1[3] = puVar4;
    param_1[4] = puVar4;
    param_1[5] = (long)puVar4 + uVar8;
    do {
      if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      uVar13 = puVar10[4];
      uVar12 = puVar10[7];
      uVar11 = puVar10[6];
      uVar15 = puVar10[1];
      uVar14 = *puVar10;
      uVar17 = puVar10[3];
      uVar16 = puVar10[2];
      puVar4[5] = puVar10[5];
      puVar4[4] = uVar13;
      puVar4[7] = uVar12;
      puVar4[6] = uVar11;
      puVar4[1] = uVar15;
      *puVar4 = uVar14;
      puVar4[3] = uVar17;
      puVar4[2] = uVar16;
      uVar15 = puVar10[9];
      uVar14 = puVar10[8];
      uVar13 = puVar10[0xb];
      uVar12 = puVar10[10];
      puVar3 = (undefined8 *)((long)puVar10 + 0x65);
      uVar11 = *(undefined8 *)((long)puVar10 + 0x5d);
      puVar10 = puVar10 + 0xe;
      *(undefined8 *)((long)puVar4 + 0x65) = *puVar3;
      *(undefined8 *)((long)puVar4 + 0x5d) = uVar11;
      puVar4[9] = uVar15;
      puVar4[8] = uVar14;
      puVar4[0xb] = uVar13;
      puVar4[10] = uVar12;
      puVar4 = puVar4 + 0xe;
    } while (puVar10 != puVar1);
    param_1[4] = puVar4;
  }
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  pvVar7 = (void *)param_2[6];
  uVar8 = param_2[7] - (long)pvVar7;
  if (uVar8 != 0) {
    if ((long)uVar8 < 0) {
LAB_0086dda4:
      lVar6 = FUN_0061ef74();
      pvVar7 = *(void **)(lVar6 + 0x30);
      if (pvVar7 == (void *)0x0) {
LAB_0086de3c:
        pvVar7 = *(void **)(lVar6 + 0x18);
        if (pvVar7 == (void *)0x0) {
          return;
        }
        pvVar5 = *(void **)(lVar6 + 0x20);
        uVar8 = (ulong)(((long)pvVar7 - (long)pvVar5) * 0x249249249249249) >> 4;
        uVar9 = (long)pvVar5 * -0x249249249249249 - 0x10U >> 4;
        if (uVar9 <= uVar8) {
          uVar8 = uVar9;
        }
        if ((1 < uVar8) && ((((int)pvVar7 - (int)pvVar5 | -(int)pvVar5) & 0xfU) == 0)) {
          uVar8 = uVar8 & 0xffffffffffffffe;
          pvVar5 = (void *)((long)pvVar5 + uVar8 * -0x70);
          do {
            uVar8 = uVar8 - 2;
          } while (uVar8 != 0);
        }
        do {
          if (pvVar5 == pvVar7) {
            *(void **)(lVar6 + 0x20) = pvVar7;
            operator_delete(pvVar7);
            return;
          }
          pvVar5 = (void *)((long)pvVar5 + -0x70);
        } while (pvVar5 != (void *)0x0);
      }
      else {
        pvVar5 = *(void **)(lVar6 + 0x38);
        uVar9 = (ulong)((long)pvVar5 + (-8 - ((long)pvVar5 << 0x3d))) >> 3;
        uVar8 = (ulong)(((long)pvVar7 - (long)pvVar5 << 0x3d) - ((long)pvVar7 - (long)pvVar5)) >> 3;
        if (uVar9 <= uVar8) {
          uVar8 = uVar9;
        }
        if ((1 < uVar8) && ((((int)pvVar7 - (int)pvVar5 | -(int)pvVar5) & 7U) == 0)) {
          uVar8 = uVar8 & 0x1ffffffffffffffe;
          pvVar5 = (void *)((long)pvVar5 + uVar8 * -8);
          do {
            uVar8 = uVar8 - 2;
          } while (uVar8 != 0);
        }
        do {
          if (pvVar5 == pvVar7) {
            *(void **)(lVar6 + 0x38) = pvVar7;
            operator_delete(pvVar7);
            goto LAB_0086de3c;
          }
          pvVar5 = (void *)((long)pvVar5 + -8);
        } while (pvVar5 != (void *)0x0);
      }
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    pvVar5 = operator_new(uVar8);
    param_1[6] = pvVar5;
    param_1[7] = pvVar5;
    param_1[8] = (long)pvVar5 + uVar8;
    memcpy(pvVar5,pvVar7,uVar8);
    param_1[7] = (long)pvVar5 + uVar8;
  }
  return;
}


// ===== 0086dda8  FUN_0086dda8 =====

void FUN_0086dda8(long param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  pvVar1 = *(void **)(param_1 + 0x30);
  if (pvVar1 == (void *)0x0) {
LAB_0086de3c:
    pvVar1 = *(void **)(param_1 + 0x18);
    if (pvVar1 == (void *)0x0) {
      return;
    }
    pvVar2 = *(void **)(param_1 + 0x20);
    uVar3 = (ulong)(((long)pvVar1 - (long)pvVar2) * 0x249249249249249) >> 4;
    uVar4 = (long)pvVar2 * -0x249249249249249 - 0x10U >> 4;
    if (uVar4 <= uVar3) {
      uVar3 = uVar4;
    }
    if ((1 < uVar3) && ((((int)pvVar1 - (int)pvVar2 | -(int)pvVar2) & 0xfU) == 0)) {
      uVar3 = uVar3 & 0xffffffffffffffe;
      pvVar2 = (void *)((long)pvVar2 + uVar3 * -0x70);
      do {
        uVar3 = uVar3 - 2;
      } while (uVar3 != 0);
    }
    do {
      if (pvVar2 == pvVar1) {
        *(void **)(param_1 + 0x20) = pvVar1;
        operator_delete(pvVar1);
        return;
      }
      pvVar2 = (void *)((long)pvVar2 + -0x70);
    } while (pvVar2 != (void *)0x0);
  }
  else {
    pvVar2 = *(void **)(param_1 + 0x38);
    uVar4 = (ulong)((long)pvVar2 + (-8 - ((long)pvVar2 << 0x3d))) >> 3;
    uVar3 = (ulong)(((long)pvVar1 - (long)pvVar2 << 0x3d) - ((long)pvVar1 - (long)pvVar2)) >> 3;
    if (uVar4 <= uVar3) {
      uVar3 = uVar4;
    }
    if ((1 < uVar3) && ((((int)pvVar1 - (int)pvVar2 | -(int)pvVar2) & 7U) == 0)) {
      uVar3 = uVar3 & 0x1ffffffffffffffe;
      pvVar2 = (void *)((long)pvVar2 + uVar3 * -8);
      do {
        uVar3 = uVar3 - 2;
      } while (uVar3 != 0);
    }
    do {
      if (pvVar2 == pvVar1) {
        *(void **)(param_1 + 0x38) = pvVar1;
        operator_delete(pvVar1);
        goto LAB_0086de3c;
      }
      pvVar2 = (void *)((long)pvVar2 + -8);
    } while (pvVar2 != (void *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 0086df08  FUN_0086df08 =====

void FUN_0086df08(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar3 = *(undefined8 **)(param_2 + 0x18);
  puVar1 = *(undefined8 **)(param_2 + 0x20);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (puVar3 != puVar1) {
    puVar2 = (undefined8 *)0x0;
    do {
      if (puVar3[9] != 0x7fffffffffffffff) {
        if (puVar2 < (undefined8 *)param_1[2]) {
          if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          uVar6 = puVar3[4];
          uVar5 = puVar3[7];
          uVar4 = puVar3[6];
          uVar8 = puVar3[1];
          uVar7 = *puVar3;
          uVar10 = puVar3[3];
          uVar9 = puVar3[2];
          puVar2[5] = puVar3[5];
          puVar2[4] = uVar6;
          puVar2[7] = uVar5;
          puVar2[6] = uVar4;
          puVar2[1] = uVar8;
          *puVar2 = uVar7;
          puVar2[3] = uVar10;
          puVar2[2] = uVar9;
          uVar8 = puVar3[9];
          uVar7 = puVar3[8];
          uVar6 = puVar3[0xb];
          uVar5 = puVar3[10];
          uVar4 = *(undefined8 *)((long)puVar3 + 0x5d);
          *(undefined8 *)((long)puVar2 + 0x65) = *(undefined8 *)((long)puVar3 + 0x65);
          *(undefined8 *)((long)puVar2 + 0x5d) = uVar4;
          puVar2[9] = uVar8;
          puVar2[8] = uVar7;
          puVar2[0xb] = uVar6;
          puVar2[10] = uVar5;
          puVar2 = puVar2 + 0xe;
        }
        else {
          puVar2 = (undefined8 *)FUN_0086e414(param_1,puVar3);
        }
        param_1[1] = puVar2;
      }
      puVar3 = puVar3 + 0xe;
    } while (puVar3 != puVar1);
  }
  return;
}


// ===== 0086dfc8  FUN_0086dfc8 =====

void FUN_0086dfc8(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong *extraout_x8;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auStack_64 [4];
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  ulong uStack_40;
  undefined8 *puStack_38;
  
  puVar6 = *(undefined8 **)(param_2 + 0x18);
  puVar1 = *(undefined8 **)(param_2 + 0x20);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar3 = (long)puVar1 - (long)puVar6;
  if (uVar3 != 0) {
    if (0x249249249249249 < (ulong)(((long)uVar3 >> 4) * 0x6db6db6db6db6db7)) {
      lVar5 = FUN_0086e3fc();
      pcStack_58 = FUN_0086e09c;
      puVar4 = *(undefined8 **)(lVar5 + 0x18);
      puVar2 = *(undefined8 **)(lVar5 + 0x20);
      *extraout_x8 = 0;
      extraout_x8[1] = 0;
      extraout_x8[2] = 0;
      if (puVar4 != puVar2) {
        puVar7 = (undefined8 *)0x0;
        puStack_60 = &stack0xffffffffffffffd0;
        puStack_50 = puVar1;
        puStack_48 = puVar6;
        uStack_40 = uVar3;
        puStack_38 = param_1;
        do {
          if (puVar4[9] != 0x7fffffffffffffff) {
            if (puVar7 < (undefined8 *)extraout_x8[2]) {
              if (puVar7 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                          );
              }
              uVar10 = puVar4[4];
              uVar9 = puVar4[7];
              uVar8 = puVar4[6];
              uVar12 = puVar4[1];
              uVar11 = *puVar4;
              uVar14 = puVar4[3];
              uVar13 = puVar4[2];
              puVar7[5] = puVar4[5];
              puVar7[4] = uVar10;
              puVar7[7] = uVar9;
              puVar7[6] = uVar8;
              puVar7[1] = uVar12;
              *puVar7 = uVar11;
              puVar7[3] = uVar14;
              puVar7[2] = uVar13;
              uVar12 = puVar4[9];
              uVar11 = puVar4[8];
              uVar10 = puVar4[0xb];
              uVar9 = puVar4[10];
              uVar8 = *(undefined8 *)((long)puVar4 + 0x5d);
              *(undefined8 *)((long)puVar7 + 0x65) = *(undefined8 *)((long)puVar4 + 0x65);
              *(undefined8 *)((long)puVar7 + 0x5d) = uVar8;
              puVar7[9] = uVar12;
              puVar7[8] = uVar11;
              puVar7[0xb] = uVar10;
              puVar7[10] = uVar9;
              puVar7 = puVar7 + 0xe;
            }
            else {
              puVar7 = (undefined8 *)FUN_0086e414(extraout_x8,puVar4);
            }
            extraout_x8[1] = (ulong)puVar7;
          }
          puVar4 = puVar4 + 0xe;
        } while (puVar4 != puVar2);
        puVar6 = (undefined8 *)*extraout_x8;
        auStack_64[0] = 0;
        if (puVar6 != puVar7) {
          FUN_0086e634(puVar6,puVar7,auStack_64,
                       LZCOUNT(((long)puVar7 - (long)puVar6 >> 4) * 0x6db6db6db6db6db7) << 1 ^ 0x7e,
                       1);
        }
      }
      return;
    }
    puVar4 = (undefined8 *)operator_new(uVar3);
    *param_1 = puVar4;
    param_1[2] = (long)puVar4 + uVar3;
    do {
      if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      uVar10 = puVar6[4];
      uVar9 = puVar6[7];
      uVar8 = puVar6[6];
      uVar12 = puVar6[1];
      uVar11 = *puVar6;
      uVar14 = puVar6[3];
      uVar13 = puVar6[2];
      puVar4[5] = puVar6[5];
      puVar4[4] = uVar10;
      puVar4[7] = uVar9;
      puVar4[6] = uVar8;
      puVar4[1] = uVar12;
      *puVar4 = uVar11;
      puVar4[3] = uVar14;
      puVar4[2] = uVar13;
      uVar12 = puVar6[9];
      uVar11 = puVar6[8];
      uVar10 = puVar6[0xb];
      uVar9 = puVar6[10];
      puVar2 = (undefined8 *)((long)puVar6 + 0x65);
      uVar8 = *(undefined8 *)((long)puVar6 + 0x5d);
      puVar6 = puVar6 + 0xe;
      *(undefined8 *)((long)puVar4 + 0x65) = *puVar2;
      *(undefined8 *)((long)puVar4 + 0x5d) = uVar8;
      puVar4[9] = uVar12;
      puVar4[8] = uVar11;
      puVar4[0xb] = uVar10;
      puVar4[10] = uVar9;
      puVar4 = puVar4 + 0xe;
    } while (puVar6 != puVar1);
    param_1[1] = puVar4;
  }
  return;
}


// ===== 0086e09c  FUN_0086e09c =====

void FUN_0086e09c(ulong *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 local_34 [4];
  
  puVar2 = *(undefined8 **)(param_2 + 0x18);
  puVar1 = *(undefined8 **)(param_2 + 0x20);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (puVar2 != puVar1) {
    puVar3 = (undefined8 *)0x0;
    do {
      if (puVar2[9] != 0x7fffffffffffffff) {
        if (puVar3 < (undefined8 *)param_1[2]) {
          if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          uVar6 = puVar2[4];
          uVar5 = puVar2[7];
          uVar4 = puVar2[6];
          uVar8 = puVar2[1];
          uVar7 = *puVar2;
          uVar10 = puVar2[3];
          uVar9 = puVar2[2];
          puVar3[5] = puVar2[5];
          puVar3[4] = uVar6;
          puVar3[7] = uVar5;
          puVar3[6] = uVar4;
          puVar3[1] = uVar8;
          *puVar3 = uVar7;
          puVar3[3] = uVar10;
          puVar3[2] = uVar9;
          uVar8 = puVar2[9];
          uVar7 = puVar2[8];
          uVar6 = puVar2[0xb];
          uVar5 = puVar2[10];
          uVar4 = *(undefined8 *)((long)puVar2 + 0x5d);
          *(undefined8 *)((long)puVar3 + 0x65) = *(undefined8 *)((long)puVar2 + 0x65);
          *(undefined8 *)((long)puVar3 + 0x5d) = uVar4;
          puVar3[9] = uVar8;
          puVar3[8] = uVar7;
          puVar3[0xb] = uVar6;
          puVar3[10] = uVar5;
          puVar3 = puVar3 + 0xe;
        }
        else {
          puVar3 = (undefined8 *)FUN_0086e414(param_1,puVar2);
        }
        param_1[1] = (ulong)puVar3;
      }
      puVar2 = puVar2 + 0xe;
    } while (puVar2 != puVar1);
    puVar2 = (undefined8 *)*param_1;
    local_34[0] = 0;
    if (puVar2 != puVar3) {
      FUN_0086e634(puVar2,puVar3,local_34,
                   LZCOUNT(((long)puVar3 - (long)puVar2 >> 4) * 0x6db6db6db6db6db7) << 1 ^ 0x7e,1);
    }
  }
  return;
}


// ===== 0086e1ac  FUN_0086e1ac =====

void FUN_0086e1ac(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[8] = 0;
  param_1[0x10] = 0;
  param_1[0x30] = 0;
  param_1[0x90] = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  param_1[0x50] = 0;
  return;
}


// ===== 0086e1d4  FUN_0086e1d4 =====

void FUN_0086e1d4(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  void *pvVar2;
  long lVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar12 = param_2[3];
  uVar11 = param_2[2];
  uVar8 = param_2[5];
  uVar7 = param_2[4];
  uVar1 = *(undefined1 *)(param_2 + 6);
  uVar10 = param_2[1];
  uVar9 = *param_2;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 6) = uVar1;
  param_1[3] = uVar12;
  param_1[2] = uVar11;
  param_1[5] = uVar8;
  param_1[4] = uVar7;
  param_1[1] = uVar10;
  *param_1 = uVar9;
  param_1[7] = 0;
  pvVar4 = (void *)param_2[7];
  uVar5 = param_2[8] - (long)pvVar4;
  if (uVar5 != 0) {
    if (0x666666666666666 < (ulong)(((long)uVar5 >> 3) * -0x3333333333333333)) {
      lVar3 = FUN_00870980();
      pvVar4 = *(void **)(lVar3 + 0x38);
      if (pvVar4 == (void *)0x0) {
        return;
      }
      pvVar2 = *(void **)(lVar3 + 0x40);
      uVar5 = (ulong)(((long)pvVar4 - (long)pvVar2) * 0x1333333333333333) >> 3;
      uVar6 = (long)pvVar2 * -0x1333333333333333 - 8U >> 3;
      if (uVar6 <= uVar5) {
        uVar5 = uVar6;
      }
      if ((1 < uVar5) && ((((int)pvVar4 - (int)pvVar2 | -(int)pvVar2) & 7U) == 0)) {
        uVar5 = uVar5 & 0x1ffffffffffffffe;
        pvVar2 = (void *)((long)pvVar2 + uVar5 * -0x28);
        do {
          uVar5 = uVar5 - 2;
        } while (uVar5 != 0);
      }
      do {
        if (pvVar2 == pvVar4) {
          *(void **)(lVar3 + 0x40) = pvVar4;
          operator_delete(pvVar4);
          return;
        }
        pvVar2 = (void *)((long)pvVar2 + -0x28);
      } while (pvVar2 != (void *)0x0);
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    pvVar2 = operator_new(uVar5);
    param_1[7] = pvVar2;
    param_1[8] = pvVar2;
    param_1[9] = (long)pvVar2 + uVar5;
    memcpy(pvVar2,pvVar4,uVar5);
    param_1[8] = (long)pvVar2 + uVar5;
  }
  uVar9 = param_2[0xe];
  uVar8 = param_2[0x11];
  uVar7 = param_2[0x10];
  uVar11 = param_2[0xb];
  uVar10 = param_2[10];
  uVar13 = param_2[0xd];
  uVar12 = param_2[0xc];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar9;
  param_1[0x11] = uVar8;
  param_1[0x10] = uVar7;
  param_1[0xb] = uVar11;
  param_1[10] = uVar10;
  param_1[0xd] = uVar13;
  param_1[0xc] = uVar12;
  param_1[0x12] = param_2[0x12];
  return;
}


// ===== 0086e298  FUN_0086e298 =====

void FUN_0086e298(long param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  pvVar1 = *(void **)(param_1 + 0x38);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  pvVar2 = *(void **)(param_1 + 0x40);
  uVar3 = (ulong)(((long)pvVar1 - (long)pvVar2) * 0x1333333333333333) >> 3;
  uVar4 = (long)pvVar2 * -0x1333333333333333 - 8U >> 3;
  if (uVar4 <= uVar3) {
    uVar3 = uVar4;
  }
  if ((1 < uVar3) && ((((int)pvVar1 - (int)pvVar2 | -(int)pvVar2) & 7U) == 0)) {
    uVar3 = uVar3 & 0x1ffffffffffffffe;
    pvVar2 = (void *)((long)pvVar2 + uVar3 * -0x28);
    do {
      uVar3 = uVar3 - 2;
    } while (uVar3 != 0);
  }
  do {
    if (pvVar2 == pvVar1) {
      *(void **)(param_1 + 0x40) = pvVar1;
      operator_delete(pvVar1);
      return;
    }
    pvVar2 = (void *)((long)pvVar2 + -0x28);
  } while (pvVar2 != (void *)0x0);
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 0086e350  FUN_0086e350 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0086e350(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  uVar1 = _DAT_001f3440;
  param_1[2] = _UNK_001f3448;
  param_1[1] = uVar1;
  return;
}


// ===== 0086e368  FUN_0086e368 =====

void FUN_0086e368(undefined8 *param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  
  lVar1 = 1000000;
  if (param_5 != 0) {
    lVar1 = param_5;
  }
  *param_1 = param_2;
  param_1[1] = (long)(&uleb128_003d0900 + lVar1 * param_3) / 8000000;
  param_1[2] = param_5;
  param_1[3] = (long)(&uleb128_003d0900 + lVar1 * param_4) / 8000000;
  return;
}


// ===== 0086e3c0  FUN_0086e3c0 =====

bool FUN_0086e3c0(long param_1)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 == *(long *)(param_1 + 0x20)) {
    return false;
  }
  do {
    lVar3 = lVar1 + 0x70;
    bVar2 = *(char *)(lVar1 + 0x60) == '\x03';
    if (bVar2) {
      return bVar2;
    }
    lVar1 = lVar3;
  } while (lVar3 != *(long *)(param_1 + 0x20));
  return bVar2;
}


// ===== 0086e3fc  FUN_0086e3fc =====

void FUN_0086e3fc(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 0086e414  FUN_0086e414 =====

undefined8 * FUN_0086e414(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  puVar12 = (undefined8 *)(param_1[1] - *param_1);
  uVar6 = ((long)puVar12 >> 4) * 0x6db6db6db6db6db7 + 1;
  if (uVar6 < 0x24924924924924a) {
    lVar7 = param_1[2] - *param_1 >> 4;
    uVar8 = lVar7 * -0x2492492492492492;
    if (uVar8 < uVar6 || uVar8 - uVar6 == 0) {
      uVar8 = uVar6;
    }
    if (0x124924924924923 < (ulong)(lVar7 * 0x6db6db6db6db6db7)) {
      uVar8 = 0x249249249249249;
    }
    if (uVar8 == 0) {
      pvVar4 = (void *)0x0;
    }
    else {
      if (0x249249249249249 < uVar8) goto LAB_0086e630;
      pvVar4 = operator_new(uVar8 * 0x70);
      puVar12 = (undefined8 *)((long)pvVar4 + (long)puVar12);
    }
    if (puVar12 == (undefined8 *)0x0) {
LAB_0086e604:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    uVar15 = param_2[4];
    uVar14 = param_2[7];
    uVar13 = param_2[6];
    uVar17 = param_2[1];
    uVar16 = *param_2;
    uVar19 = param_2[3];
    uVar18 = param_2[2];
    puVar12[5] = param_2[5];
    puVar12[4] = uVar15;
    puVar12[7] = uVar14;
    puVar12[6] = uVar13;
    puVar12[1] = uVar17;
    *puVar12 = uVar16;
    puVar12[3] = uVar19;
    puVar12[2] = uVar18;
    uVar17 = param_2[9];
    uVar16 = param_2[8];
    uVar15 = param_2[0xb];
    uVar14 = param_2[10];
    uVar13 = *(undefined8 *)((long)param_2 + 0x5d);
    *(undefined8 *)((long)puVar12 + 0x65) = *(undefined8 *)((long)param_2 + 0x65);
    *(undefined8 *)((long)puVar12 + 0x5d) = uVar13;
    puVar12[9] = uVar17;
    puVar12[8] = uVar16;
    puVar12[0xb] = uVar15;
    puVar12[10] = uVar14;
    puVar5 = (undefined8 *)*param_1;
    puVar3 = (undefined8 *)param_1[1];
    puVar2 = (undefined8 *)((long)puVar12 + ((long)puVar5 - (long)puVar3));
    puVar9 = puVar5;
    puVar10 = puVar2;
    if ((long)puVar5 - (long)puVar3 != 0) {
      do {
        if (puVar10 == (undefined8 *)0x0) goto LAB_0086e604;
        uVar15 = puVar9[4];
        uVar14 = puVar9[7];
        uVar13 = puVar9[6];
        uVar17 = puVar9[1];
        uVar16 = *puVar9;
        uVar19 = puVar9[3];
        uVar18 = puVar9[2];
        puVar10[5] = puVar9[5];
        puVar10[4] = uVar15;
        puVar10[7] = uVar14;
        puVar10[6] = uVar13;
        puVar10[1] = uVar17;
        *puVar10 = uVar16;
        puVar10[3] = uVar19;
        puVar10[2] = uVar18;
        uVar17 = puVar9[9];
        uVar16 = puVar9[8];
        uVar15 = puVar9[0xb];
        uVar14 = puVar9[10];
        uVar13 = *(undefined8 *)((long)puVar9 + 0x5d);
        puVar1 = puVar9 + 0xe;
        *(undefined8 *)((long)puVar10 + 0x65) = *(undefined8 *)((long)puVar9 + 0x65);
        *(undefined8 *)((long)puVar10 + 0x5d) = uVar13;
        puVar10[9] = uVar17;
        puVar10[8] = uVar16;
        puVar10[0xb] = uVar15;
        puVar10[10] = uVar14;
        puVar9 = puVar1;
        puVar10 = puVar10 + 0xe;
      } while (puVar1 != puVar3);
      uVar6 = (ulong)((long)puVar5 * -0xdb6db6db6db6db7) >> 4;
      uVar11 = ((long)puVar3 - (long)puVar5) * 0xdb6db6db6db6db7 - 0x10U >> 4;
      if (uVar11 <= uVar6) {
        uVar6 = uVar11;
      }
      if ((1 < uVar6) && ((((int)puVar3 - (int)puVar5 | -(int)puVar5) & 0xfU) == 0)) {
        uVar6 = uVar6 & 0xffffffffffffffe;
        puVar5 = puVar5 + uVar6 * 0xe;
        do {
          uVar6 = uVar6 - 2;
        } while (uVar6 != 0);
      }
      do {
        if (puVar5 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        puVar5 = puVar5 + 0xe;
      } while (puVar5 != puVar3);
      puVar5 = (undefined8 *)*param_1;
    }
    *param_1 = (long)puVar2;
    param_1[1] = (long)(puVar12 + 0xe);
    param_1[2] = (long)((long)pvVar4 + uVar8 * 0x70);
    if (puVar5 != (undefined8 *)0x0) {
      operator_delete(puVar5);
    }
    return puVar12 + 0xe;
  }
  FUN_0086e3fc();
LAB_0086e630:
                    /* WARNING: Subroutine does not return */
  FUN_005d55a4();
}


// ===== 0086e634  FUN_0086e634 =====

void FUN_0086e634(long *param_1,long *param_2,undefined8 param_3,long param_4,uint param_5)

{
  bool bVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  undefined1 auVar27 [16];
  undefined5 uStack_70;
  undefined3 uStack_6b;
  undefined5 uStack_68;
  
LAB_0086e67c:
  plVar4 = param_2 + -0xe;
  do {
    param_4 = -param_4;
    plVar9 = param_1;
    do {
      param_1 = plVar9;
      param_4 = param_4 + 1;
      uVar5 = (long)param_2 - (long)param_1;
      uVar7 = ((long)uVar5 >> 4) * 0x6db6db6db6db6db7;
      if ((long)uVar7 < 3) {
        if (uVar7 < 2) {
          return;
        }
        if (uVar7 == 2) {
          lVar6 = param_2[-5];
          lVar8 = param_1[9];
          bVar1 = SBORROW8(lVar6,lVar8);
          bVar2 = lVar6 - lVar8 < 0;
          if (lVar6 == lVar8) {
            lVar8 = *param_1;
            lVar6 = param_2[-0xe];
            bVar1 = SBORROW8(lVar6,lVar8);
            bVar2 = lVar6 - lVar8 < 0;
            if (lVar6 == lVar8) {
              bVar1 = SBORROW8(param_2[-7],param_1[7]);
              bVar2 = param_2[-7] - param_1[7] < 0;
            }
          }
          if (bVar2 == bVar1) {
            return;
          }
          lVar15 = param_1[5];
          lVar12 = param_1[4];
          lVar10 = param_1[7];
          lVar6 = param_1[6];
          lVar21 = param_1[1];
          lVar18 = *param_1;
          lVar25 = param_1[3];
          lVar23 = param_1[2];
          lVar22 = param_1[9];
          lVar19 = param_1[8];
          lVar16 = param_1[0xb];
          lVar13 = param_1[10];
          uStack_6b = (undefined3)*(undefined8 *)((long)param_1 + 0x65);
          uStack_68 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0x65) >> 0x18);
          uStack_70 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0x5d) >> 0x18);
          lVar14 = param_2[-10];
          lVar11 = param_2[-7];
          lVar8 = param_2[-8];
          lVar20 = param_2[-0xd];
          lVar17 = *plVar4;
          lVar26 = param_2[-0xb];
          lVar24 = param_2[-0xc];
          param_1[5] = param_2[-9];
          param_1[4] = lVar14;
          param_1[7] = lVar11;
          param_1[6] = lVar8;
          param_1[1] = lVar20;
          *param_1 = lVar17;
          param_1[3] = lVar26;
          param_1[2] = lVar24;
          lVar17 = param_2[-3];
          lVar14 = param_2[-4];
          lVar11 = param_2[-1];
          lVar8 = param_2[-2];
          lVar20 = param_2[-6];
          param_1[9] = param_2[-5];
          param_1[8] = lVar20;
          param_1[0xb] = lVar17;
          param_1[10] = lVar14;
          param_1[0xd] = lVar11;
          param_1[0xc] = lVar8;
          param_2[-1] = CONCAT17(0xaa,CONCAT25(0xaaaa,uStack_68));
          param_2[-2] = CONCAT35(uStack_6b,uStack_70);
          param_2[-5] = lVar22;
          param_2[-6] = lVar19;
          param_2[-3] = lVar16;
          param_2[-4] = lVar13;
          param_2[-0xd] = lVar21;
          *plVar4 = lVar18;
          param_2[-0xb] = lVar25;
          param_2[-0xc] = lVar23;
          param_2[-9] = lVar15;
          param_2[-10] = lVar12;
          param_2[-7] = lVar10;
          param_2[-8] = lVar6;
          return;
        }
      }
      else {
        if (uVar7 == 3) {
          FUN_0086ec7c(param_1,param_1 + 0xe,plVar4,param_3);
          return;
        }
        if (uVar7 == 4) {
          plVar9 = param_1 + 0x1c;
          FUN_0086ec7c(param_1,param_1 + 0xe,param_1 + 0x1c,param_3);
          lVar6 = param_2[-5];
          lVar8 = param_1[0x25];
          bVar1 = SBORROW8(lVar6,lVar8);
          bVar2 = lVar6 - lVar8 < 0;
          if (lVar6 == lVar8) {
            lVar8 = *plVar9;
            lVar6 = param_2[-0xe];
            bVar1 = SBORROW8(lVar6,lVar8);
            bVar2 = lVar6 - lVar8 < 0;
            if (lVar6 == lVar8) {
              bVar1 = SBORROW8(param_2[-7],param_1[0x23]);
              bVar2 = param_2[-7] - param_1[0x23] < 0;
            }
          }
          if (bVar2 == bVar1) {
            return;
          }
          lVar15 = param_1[0x21];
          lVar12 = param_1[0x20];
          lVar10 = param_1[0x23];
          lVar6 = param_1[0x22];
          lVar21 = param_1[0x1d];
          lVar18 = *plVar9;
          lVar25 = param_1[0x1f];
          lVar23 = param_1[0x1e];
          lVar22 = param_1[0x25];
          lVar19 = param_1[0x24];
          lVar16 = param_1[0x27];
          lVar13 = param_1[0x26];
          uStack_6b = (undefined3)*(undefined8 *)((long)param_1 + 0x145);
          uStack_68 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0x145) >> 0x18);
          uStack_70 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0x13d) >> 0x18);
          lVar14 = param_2[-10];
          lVar11 = param_2[-7];
          lVar8 = param_2[-8];
          lVar20 = param_2[-0xd];
          lVar17 = *plVar4;
          lVar26 = param_2[-0xb];
          lVar24 = param_2[-0xc];
          param_1[0x21] = param_2[-9];
          param_1[0x20] = lVar14;
          param_1[0x23] = lVar11;
          param_1[0x22] = lVar8;
          param_1[0x1d] = lVar20;
          *plVar9 = lVar17;
          param_1[0x1f] = lVar26;
          param_1[0x1e] = lVar24;
          lVar17 = param_2[-3];
          lVar14 = param_2[-4];
          lVar11 = param_2[-1];
          lVar8 = param_2[-2];
          lVar20 = param_2[-6];
          param_1[0x25] = param_2[-5];
          param_1[0x24] = lVar20;
          param_1[0x27] = lVar17;
          param_1[0x26] = lVar14;
          param_1[0x29] = lVar11;
          param_1[0x28] = lVar8;
          param_2[-1] = CONCAT17(0xaa,CONCAT25(0xaaaa,uStack_68));
          param_2[-2] = CONCAT35(uStack_6b,uStack_70);
          param_2[-5] = lVar22;
          param_2[-6] = lVar19;
          param_2[-3] = lVar16;
          param_2[-4] = lVar13;
          param_2[-0xd] = lVar21;
          *plVar4 = lVar18;
          param_2[-0xb] = lVar25;
          param_2[-0xc] = lVar23;
          param_2[-9] = lVar15;
          param_2[-10] = lVar12;
          param_2[-7] = lVar10;
          param_2[-8] = lVar6;
          lVar6 = param_1[0x25];
          lVar8 = param_1[0x17];
          bVar1 = SBORROW8(lVar6,lVar8);
          bVar2 = lVar6 - lVar8 < 0;
          if (lVar6 == lVar8) {
            lVar6 = *plVar9;
            lVar8 = param_1[0xe];
            bVar1 = SBORROW8(lVar6,lVar8);
            bVar2 = lVar6 - lVar8 < 0;
            if (lVar6 == lVar8) {
              bVar1 = SBORROW8(param_1[0x23],param_1[0x15]);
              bVar2 = param_1[0x23] - param_1[0x15] < 0;
            }
          }
          if (bVar2 == bVar1) {
            return;
          }
          lVar14 = param_1[0x13];
          lVar12 = param_1[0x12];
          lVar11 = param_1[0x15];
          lVar10 = param_1[0x14];
          lVar18 = param_1[0xf];
          lVar16 = param_1[0xe];
          lVar21 = param_1[0x11];
          lVar20 = param_1[0x10];
          lVar19 = param_1[0x17];
          lVar17 = param_1[0x16];
          lVar15 = param_1[0x19];
          lVar13 = param_1[0x18];
          uStack_6b = (undefined3)*(undefined8 *)((long)param_1 + 0xd5);
          uStack_68 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0xd5) >> 0x18);
          uStack_70 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0xcd) >> 0x18);
          lVar8 = param_1[9];
          param_1[0x1b] = param_1[0x29];
          param_1[0x1a] = param_1[0x28];
          param_1[0x17] = param_1[0x25];
          param_1[0x16] = param_1[0x24];
          param_1[0x19] = param_1[0x27];
          param_1[0x18] = param_1[0x26];
          lVar6 = param_1[0x17];
          param_1[0xf] = param_1[0x1d];
          param_1[0xe] = *plVar9;
          param_1[0x11] = param_1[0x1f];
          param_1[0x10] = param_1[0x1e];
          bVar1 = SBORROW8(lVar6,lVar8);
          bVar2 = lVar6 - lVar8 < 0;
          param_1[0x13] = param_1[0x21];
          param_1[0x12] = param_1[0x20];
          param_1[0x15] = param_1[0x23];
          param_1[0x14] = param_1[0x22];
          param_1[0x21] = lVar14;
          param_1[0x20] = lVar12;
          param_1[0x23] = lVar11;
          param_1[0x22] = lVar10;
          param_1[0x1d] = lVar18;
          *plVar9 = lVar16;
          param_1[0x1f] = lVar21;
          param_1[0x1e] = lVar20;
          param_1[0x25] = lVar19;
          param_1[0x24] = lVar17;
          param_1[0x27] = lVar15;
          param_1[0x26] = lVar13;
          param_1[0x29] = CONCAT17(0xaa,CONCAT25(0xaaaa,uStack_68));
          param_1[0x28] = CONCAT35(uStack_6b,uStack_70);
          if (lVar6 == lVar8) {
            lVar6 = param_1[0xe];
            lVar8 = *param_1;
            bVar1 = SBORROW8(lVar6,lVar8);
            bVar2 = lVar6 - lVar8 < 0;
            if (lVar6 == lVar8) {
              bVar1 = SBORROW8(param_1[0x15],param_1[7]);
              bVar2 = param_1[0x15] - param_1[7] < 0;
            }
          }
          if (bVar2 == bVar1) {
            return;
          }
          lVar12 = param_1[5];
          lVar10 = param_1[4];
          lVar8 = param_1[7];
          lVar6 = param_1[6];
          lVar16 = param_1[1];
          lVar14 = *param_1;
          lVar19 = param_1[3];
          lVar18 = param_1[2];
          lVar17 = param_1[9];
          lVar15 = param_1[8];
          lVar13 = param_1[0xb];
          lVar11 = param_1[10];
          uStack_6b = (undefined3)*(undefined8 *)((long)param_1 + 0x65);
          uStack_68 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0x65) >> 0x18);
          uStack_70 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0x5d) >> 0x18);
          param_1[0xd] = param_1[0x1b];
          param_1[0xc] = param_1[0x1a];
          param_1[9] = param_1[0x17];
          param_1[8] = param_1[0x16];
          param_1[0xb] = param_1[0x19];
          param_1[10] = param_1[0x18];
          param_1[1] = param_1[0xf];
          *param_1 = param_1[0xe];
          param_1[3] = param_1[0x11];
          param_1[2] = param_1[0x10];
          param_1[5] = param_1[0x13];
          param_1[4] = param_1[0x12];
          param_1[7] = param_1[0x15];
          param_1[6] = param_1[0x14];
          param_1[0x13] = lVar12;
          param_1[0x12] = lVar10;
          param_1[0x15] = lVar8;
          param_1[0x14] = lVar6;
          param_1[0xf] = lVar16;
          param_1[0xe] = lVar14;
          param_1[0x11] = lVar19;
          param_1[0x10] = lVar18;
          param_1[0x17] = lVar17;
          param_1[0x16] = lVar15;
          param_1[0x19] = lVar13;
          param_1[0x18] = lVar11;
          param_1[0x1b] = CONCAT17(0xaa,CONCAT25(0xaaaa,uStack_68));
          param_1[0x1a] = CONCAT35(uStack_6b,uStack_70);
          return;
        }
        if (uVar7 == 5) {
          FUN_0086efc8(param_1,param_1 + 0xe,param_1 + 0x1c,param_1 + 0x2a,plVar4,param_3);
          return;
        }
      }
      if ((long)uVar5 < 0xa80) {
        if ((param_5 & 1) == 0) {
          FUN_0086f618(param_1,param_2,param_3);
          return;
        }
        FUN_0086f47c();
        return;
      }
      if (param_4 == 1) {
        if (param_1 == param_2) {
          return;
        }
        FUN_008702e0(param_1,param_2,param_2,param_3);
        return;
      }
      plVar9 = param_1 + (uVar7 >> 1) * 0xe;
      if (uVar5 < 0x3801) {
        FUN_0086ec7c(plVar9,param_1,param_2 + -0xe,param_3);
      }
      else {
        FUN_0086ec7c(param_1,plVar9,param_2 + -0xe,param_3);
        FUN_0086ec7c(param_1 + 0xe,plVar9 + -0xe,param_2 + -0x1c,param_3);
        FUN_0086ec7c(param_1 + 0x1c,plVar9 + 0xe,param_2 + -0x2a,param_3);
        FUN_0086ec7c(plVar9 + -0xe,plVar9,plVar9 + 0xe,param_3);
        lVar15 = param_1[5];
        lVar12 = param_1[4];
        lVar10 = param_1[7];
        lVar6 = param_1[6];
        lVar21 = param_1[1];
        lVar18 = *param_1;
        lVar25 = param_1[3];
        lVar23 = param_1[2];
        lVar22 = param_1[9];
        lVar19 = param_1[8];
        lVar16 = param_1[0xb];
        lVar13 = param_1[10];
        uStack_6b = (undefined3)*(undefined8 *)((long)param_1 + 0x65);
        uStack_68 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0x65) >> 0x18);
        uStack_70 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0x5d) >> 0x18);
        lVar11 = plVar9[9];
        lVar8 = plVar9[8];
        lVar17 = plVar9[0xb];
        lVar14 = plVar9[10];
        lVar20 = plVar9[0xc];
        param_1[0xd] = plVar9[0xd];
        param_1[0xc] = lVar20;
        param_1[9] = lVar11;
        param_1[8] = lVar8;
        param_1[0xb] = lVar17;
        param_1[10] = lVar14;
        lVar14 = plVar9[4];
        lVar11 = plVar9[7];
        lVar8 = plVar9[6];
        lVar20 = plVar9[1];
        lVar17 = *plVar9;
        lVar26 = plVar9[3];
        lVar24 = plVar9[2];
        param_1[5] = plVar9[5];
        param_1[4] = lVar14;
        param_1[7] = lVar11;
        param_1[6] = lVar8;
        param_1[1] = lVar20;
        *param_1 = lVar17;
        param_1[3] = lVar26;
        param_1[2] = lVar24;
        plVar9[5] = lVar15;
        plVar9[4] = lVar12;
        plVar9[7] = lVar10;
        plVar9[6] = lVar6;
        plVar9[1] = lVar21;
        *plVar9 = lVar18;
        plVar9[3] = lVar25;
        plVar9[2] = lVar23;
        plVar9[9] = lVar22;
        plVar9[8] = lVar19;
        plVar9[0xb] = lVar16;
        plVar9[10] = lVar13;
        plVar9[0xd] = CONCAT17(0xaa,CONCAT25(0xaaaa,uStack_68));
        plVar9[0xc] = CONCAT35(uStack_6b,uStack_70);
      }
      if ((param_5 & 1) == 0) {
        lVar6 = param_1[-5];
        lVar8 = param_1[9];
        bVar1 = SBORROW8(lVar6,lVar8);
        bVar2 = lVar6 - lVar8 < 0;
        if (lVar6 == lVar8) {
          lVar6 = param_1[-0xe];
          lVar8 = *param_1;
          bVar1 = SBORROW8(lVar6,lVar8);
          bVar2 = lVar6 - lVar8 < 0;
          if (lVar6 == lVar8) {
            bVar1 = SBORROW8(param_1[-7],param_1[7]);
            bVar2 = param_1[-7] - param_1[7] < 0;
          }
        }
        if (bVar2 == bVar1) {
          param_1 = (long *)FUN_0086f7b8(param_1,param_2,param_3);
          goto LAB_0086e888;
        }
      }
      auVar27 = FUN_0086faa8(param_1,param_2,param_3);
      plVar3 = auVar27._0_8_;
      if ((auVar27 & (undefined1  [16])0x1) == (undefined1  [16])0x0) break;
      uVar5 = FUN_0086fda4(param_1,plVar3,param_3);
      uVar7 = FUN_0086fda4(plVar3 + 0xe,param_2,param_3);
      if ((uVar7 & 1) != 0) {
        param_4 = -param_4;
        param_2 = plVar3;
        if ((uVar5 & 1) != 0) {
          return;
        }
        goto LAB_0086e67c;
      }
      plVar9 = plVar3 + 0xe;
    } while ((uVar5 & 1) != 0);
    FUN_0086e634(param_1,plVar3,param_3,-param_4,param_5 & 1);
    param_1 = plVar3 + 0xe;
LAB_0086e888:
    param_5 = 0;
    param_4 = -param_4;
  } while( true );
}


// ===== 0086ec7c  FUN_0086ec7c =====

undefined8 FUN_0086ec7c(long *param_1,long *param_2,long *param_3)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long local_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long local_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_20;
  undefined5 uStack_18;
  undefined3 local_13;
  undefined5 uStack_10;
  undefined3 uStack_b;
  undefined5 uStack_8;
  
  lVar3 = param_2[9];
  lVar4 = param_1[9];
  bVar1 = SBORROW8(lVar3,lVar4);
  bVar2 = lVar3 - lVar4 < 0;
  if (lVar3 == lVar4) {
    lVar4 = *param_2;
    lVar5 = *param_1;
    bVar1 = SBORROW8(lVar4,lVar5);
    bVar2 = lVar4 - lVar5 < 0;
    if (lVar4 == lVar5) {
      bVar1 = SBORROW8(param_2[7],param_1[7]);
      bVar2 = param_2[7] - param_1[7] < 0;
    }
  }
  if (bVar2 != bVar1) {
    lVar4 = param_3[9];
    bVar1 = SBORROW8(lVar4,lVar3);
    bVar2 = lVar4 - lVar3 < 0;
    if (lVar4 == lVar3) {
      lVar3 = *param_3;
      lVar4 = *param_2;
      bVar1 = SBORROW8(lVar3,lVar4);
      bVar2 = lVar3 - lVar4 < 0;
      if (lVar3 == lVar4) {
        bVar1 = SBORROW8(param_3[7],param_2[7]);
        bVar2 = param_3[7] - param_2[7] < 0;
      }
    }
    if (bVar2 != bVar1) {
      lVar5 = param_1[9];
      lVar3 = param_1[8];
      lStack_20 = param_1[10];
      uStack_18 = (undefined5)param_1[0xb];
      lStack_68 = param_1[1];
      local_70 = *param_1;
      lStack_58 = param_1[3];
      lStack_60 = param_1[2];
      uStack_b = (undefined3)*(undefined8 *)((long)param_1 + 0x65);
      uStack_8 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0x65) >> 0x18);
      local_13 = (undefined3)*(undefined8 *)((long)param_1 + 0x5d);
      uStack_10 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0x5d) >> 0x18);
      lVar4 = *param_3;
      lVar9 = param_3[3];
      lVar8 = param_3[2];
      lVar11 = param_3[5];
      lVar10 = param_3[4];
      lVar7 = param_3[7];
      lVar6 = param_3[6];
      param_1[1] = param_3[1];
      *param_1 = lVar4;
      param_1[3] = lVar9;
      param_1[2] = lVar8;
      lStack_48 = param_1[5];
      local_50 = param_1[4];
      lStack_38 = param_1[7];
      lStack_40 = param_1[6];
      param_1[5] = lVar11;
      param_1[4] = lVar10;
      param_1[7] = lVar7;
      param_1[6] = lVar6;
      lVar4 = param_3[10];
      lVar7 = param_3[0xd];
      lVar6 = param_3[0xc];
      lVar9 = param_3[9];
      lVar8 = param_3[8];
      param_1[0xb] = param_3[0xb];
      param_1[10] = lVar4;
      param_1[0xd] = lVar7;
      param_1[0xc] = lVar6;
      param_1[9] = lVar9;
      param_1[8] = lVar8;
      goto LAB_0086ef94;
    }
    lVar7 = param_1[9];
    lVar3 = param_1[8];
    lVar10 = param_1[10];
    uStack_18 = (undefined5)param_1[0xb];
    lVar8 = param_1[1];
    lVar4 = *param_1;
    lVar12 = param_1[3];
    lVar11 = param_1[2];
    uStack_b = (undefined3)*(undefined8 *)((long)param_1 + 0x65);
    uStack_8 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0x65) >> 0x18);
    local_13 = (undefined3)*(undefined8 *)((long)param_1 + 0x5d);
    uStack_10 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0x5d) >> 0x18);
    lVar5 = *param_2;
    lVar9 = param_2[3];
    lVar6 = param_2[2];
    lVar18 = param_2[5];
    lVar16 = param_2[4];
    lVar14 = param_2[7];
    lVar13 = param_2[6];
    param_1[1] = param_2[1];
    *param_1 = lVar5;
    param_1[3] = lVar9;
    param_1[2] = lVar6;
    lVar9 = param_1[5];
    lVar6 = param_1[4];
    lVar17 = param_1[7];
    lVar15 = param_1[6];
    param_1[5] = lVar18;
    param_1[4] = lVar16;
    param_1[7] = lVar14;
    param_1[6] = lVar13;
    lVar5 = param_2[10];
    lVar14 = param_2[0xd];
    lVar13 = param_2[0xc];
    lVar18 = param_2[9];
    lVar16 = param_2[8];
    param_1[0xb] = param_2[0xb];
    param_1[10] = lVar5;
    param_1[0xd] = lVar14;
    param_1[0xc] = lVar13;
    param_1[9] = lVar18;
    param_1[8] = lVar16;
    param_2[9] = lVar7;
    param_2[8] = lVar3;
    param_2[0xb] = CONCAT35(local_13,uStack_18);
    param_2[10] = lVar10;
    param_2[0xd] = CONCAT17(0xaa,CONCAT25(0xaaaa,uStack_8));
    param_2[0xc] = CONCAT35(uStack_b,uStack_10);
    lVar5 = param_2[9];
    param_2[1] = lVar8;
    *param_2 = lVar4;
    param_2[3] = lVar12;
    param_2[2] = lVar11;
    param_2[5] = lVar9;
    param_2[4] = lVar6;
    param_2[7] = lVar17;
    param_2[6] = lVar15;
    lVar4 = param_3[9];
    bVar2 = SBORROW8(lVar4,lVar5);
    lVar3 = lVar4 - lVar5;
    if (lVar4 == lVar5) {
      lVar4 = *param_3;
      lVar5 = *param_2;
      bVar2 = SBORROW8(lVar4,lVar5);
      lVar3 = lVar4 - lVar5;
      if (lVar4 != lVar5) goto LAB_0086ef3c;
      if (param_2[7] <= param_3[7]) {
        return 1;
      }
    }
    else {
LAB_0086ef3c:
      if (lVar3 < 0 == bVar2) {
        return 1;
      }
    }
    lVar5 = param_2[9];
    lVar3 = param_2[8];
    lStack_20 = param_2[10];
    uStack_18 = (undefined5)param_2[0xb];
    lStack_68 = param_2[1];
    local_70 = *param_2;
    lStack_58 = param_2[3];
    lStack_60 = param_2[2];
    uStack_b = (undefined3)*(undefined8 *)((long)param_2 + 0x65);
    uStack_8 = (undefined5)((ulong)*(undefined8 *)((long)param_2 + 0x65) >> 0x18);
    local_13 = (undefined3)*(undefined8 *)((long)param_2 + 0x5d);
    uStack_10 = (undefined5)((ulong)*(undefined8 *)((long)param_2 + 0x5d) >> 0x18);
    lVar4 = *param_3;
    lVar9 = param_3[3];
    lVar8 = param_3[2];
    lVar11 = param_3[5];
    lVar10 = param_3[4];
    lVar7 = param_3[7];
    lVar6 = param_3[6];
    param_2[1] = param_3[1];
    *param_2 = lVar4;
    param_2[3] = lVar9;
    param_2[2] = lVar8;
    lStack_48 = param_2[5];
    local_50 = param_2[4];
    lStack_38 = param_2[7];
    lStack_40 = param_2[6];
    param_2[5] = lVar11;
    param_2[4] = lVar10;
    param_2[7] = lVar7;
    param_2[6] = lVar6;
    lVar4 = param_3[10];
    lVar7 = param_3[0xd];
    lVar6 = param_3[0xc];
    lVar9 = param_3[9];
    lVar8 = param_3[8];
    param_2[0xb] = param_3[0xb];
    param_2[10] = lVar4;
    param_2[0xd] = lVar7;
    param_2[0xc] = lVar6;
    param_2[9] = lVar9;
    param_2[8] = lVar8;
LAB_0086ef94:
    param_3[9] = lVar5;
    param_3[8] = lVar3;
    param_3[0xb] = CONCAT35(local_13,uStack_18);
    param_3[10] = lStack_20;
    param_3[0xd] = CONCAT17(0xaa,CONCAT25(0xaaaa,uStack_8));
    param_3[0xc] = CONCAT35(uStack_b,uStack_10);
    param_3[1] = lStack_68;
    *param_3 = local_70;
    param_3[3] = lStack_58;
    param_3[2] = lStack_60;
    param_3[5] = lStack_48;
    param_3[4] = local_50;
    param_3[7] = lStack_38;
    param_3[6] = lStack_40;
    return 1;
  }
  lVar5 = param_3[9];
  bVar2 = SBORROW8(lVar5,lVar3);
  lVar4 = lVar5 - lVar3;
  if (lVar5 == lVar3) {
    lVar3 = *param_3;
    lVar5 = *param_2;
    bVar2 = SBORROW8(lVar3,lVar5);
    lVar4 = lVar3 - lVar5;
    if (lVar3 != lVar5) goto LAB_0086ed70;
    if (param_2[7] <= param_3[7]) {
      return 0;
    }
  }
  else {
LAB_0086ed70:
    if (lVar4 < 0 == bVar2) {
      return 0;
    }
  }
  lVar7 = param_2[9];
  lVar3 = param_2[8];
  lVar10 = param_2[10];
  uStack_18 = (undefined5)param_2[0xb];
  lVar8 = param_2[1];
  lVar4 = *param_2;
  lVar12 = param_2[3];
  lVar11 = param_2[2];
  uStack_b = (undefined3)*(undefined8 *)((long)param_2 + 0x65);
  uStack_8 = (undefined5)((ulong)*(undefined8 *)((long)param_2 + 0x65) >> 0x18);
  local_13 = (undefined3)*(undefined8 *)((long)param_2 + 0x5d);
  uStack_10 = (undefined5)((ulong)*(undefined8 *)((long)param_2 + 0x5d) >> 0x18);
  lVar5 = *param_3;
  lVar14 = param_3[3];
  lVar9 = param_3[2];
  lVar18 = param_3[5];
  lVar16 = param_3[4];
  lVar13 = param_3[7];
  lVar6 = param_3[6];
  param_2[1] = param_3[1];
  *param_2 = lVar5;
  param_2[3] = lVar14;
  param_2[2] = lVar9;
  lVar9 = param_2[5];
  lVar5 = param_2[4];
  lVar17 = param_2[7];
  lVar15 = param_2[6];
  param_2[5] = lVar18;
  param_2[4] = lVar16;
  param_2[7] = lVar13;
  param_2[6] = lVar6;
  lVar6 = param_3[10];
  lVar14 = param_3[0xd];
  lVar13 = param_3[0xc];
  lVar18 = param_3[9];
  lVar16 = param_3[8];
  param_2[0xb] = param_3[0xb];
  param_2[10] = lVar6;
  param_2[0xd] = lVar14;
  param_2[0xc] = lVar13;
  param_2[9] = lVar18;
  param_2[8] = lVar16;
  param_3[9] = lVar7;
  param_3[8] = lVar3;
  param_3[0xb] = CONCAT35(local_13,uStack_18);
  param_3[10] = lVar10;
  param_3[0xd] = CONCAT17(0xaa,CONCAT25(0xaaaa,uStack_8));
  param_3[0xc] = CONCAT35(uStack_b,uStack_10);
  param_3[1] = lVar8;
  *param_3 = lVar4;
  param_3[3] = lVar12;
  param_3[2] = lVar11;
  param_3[5] = lVar9;
  param_3[4] = lVar5;
  param_3[7] = lVar17;
  param_3[6] = lVar15;
  lVar4 = param_2[9];
  lVar5 = param_1[9];
  bVar2 = SBORROW8(lVar4,lVar5);
  lVar3 = lVar4 - lVar5;
  if (lVar4 == lVar5) {
    lVar4 = *param_2;
    lVar5 = *param_1;
    bVar2 = SBORROW8(lVar4,lVar5);
    lVar3 = lVar4 - lVar5;
    if (lVar4 == lVar5) {
      if (param_1[7] <= param_2[7]) {
        return 1;
      }
      goto LAB_0086eec0;
    }
  }
  if (lVar3 < 0 == bVar2) {
    return 1;
  }
LAB_0086eec0:
  lVar7 = param_1[9];
  lVar3 = param_1[8];
  lVar10 = param_1[10];
  uStack_18 = (undefined5)param_1[0xb];
  lVar8 = param_1[1];
  lVar4 = *param_1;
  lVar12 = param_1[3];
  lVar11 = param_1[2];
  uStack_b = (undefined3)*(undefined8 *)((long)param_1 + 0x65);
  uStack_8 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0x65) >> 0x18);
  local_13 = (undefined3)*(undefined8 *)((long)param_1 + 0x5d);
  uStack_10 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0x5d) >> 0x18);
  lVar5 = *param_2;
  lVar14 = param_2[3];
  lVar9 = param_2[2];
  lVar18 = param_2[5];
  lVar16 = param_2[4];
  lVar13 = param_2[7];
  lVar6 = param_2[6];
  param_1[1] = param_2[1];
  *param_1 = lVar5;
  param_1[3] = lVar14;
  param_1[2] = lVar9;
  lVar9 = param_1[5];
  lVar5 = param_1[4];
  lVar17 = param_1[7];
  lVar15 = param_1[6];
  param_1[5] = lVar18;
  param_1[4] = lVar16;
  param_1[7] = lVar13;
  param_1[6] = lVar6;
  lVar6 = param_2[10];
  lVar14 = param_2[0xd];
  lVar13 = param_2[0xc];
  lVar18 = param_2[9];
  lVar16 = param_2[8];
  param_1[0xb] = param_2[0xb];
  param_1[10] = lVar6;
  param_1[0xd] = lVar14;
  param_1[0xc] = lVar13;
  param_1[9] = lVar18;
  param_1[8] = lVar16;
  param_2[9] = lVar7;
  param_2[8] = lVar3;
  param_2[0xb] = CONCAT35(local_13,uStack_18);
  param_2[10] = lVar10;
  param_2[0xd] = CONCAT17(0xaa,CONCAT25(0xaaaa,uStack_8));
  param_2[0xc] = CONCAT35(uStack_b,uStack_10);
  param_2[1] = lVar8;
  *param_2 = lVar4;
  param_2[3] = lVar12;
  param_2[2] = lVar11;
  param_2[5] = lVar9;
  param_2[4] = lVar5;
  param_2[7] = lVar17;
  param_2[6] = lVar15;
  return 1;
}


// ===== 0086efc8  FUN_0086efc8 =====

void FUN_0086efc8(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined5 uStack_58;
  undefined3 local_53;
  undefined5 uStack_50;
  undefined3 uStack_4b;
  undefined5 uStack_48;
  
  FUN_0086ec7c();
  lVar3 = param_4[9];
  lVar4 = param_3[9];
  bVar1 = SBORROW8(lVar3,lVar4);
  bVar2 = lVar3 - lVar4 < 0;
  if (lVar3 == lVar4) {
    lVar3 = *param_4;
    lVar4 = *param_3;
    bVar1 = SBORROW8(lVar3,lVar4);
    bVar2 = lVar3 - lVar4 < 0;
    if (lVar3 == lVar4) {
      bVar1 = SBORROW8(param_4[7],param_3[7]);
      bVar2 = param_4[7] - param_3[7] < 0;
    }
  }
  if (bVar2 != bVar1) {
    lVar7 = param_3[9];
    lVar3 = param_3[8];
    lVar10 = param_3[10];
    uStack_58 = (undefined5)param_3[0xb];
    lVar8 = param_3[1];
    lVar4 = *param_3;
    lVar12 = param_3[3];
    lVar11 = param_3[2];
    uStack_4b = (undefined3)*(undefined8 *)((long)param_3 + 0x65);
    uStack_48 = (undefined5)((ulong)*(undefined8 *)((long)param_3 + 0x65) >> 0x18);
    local_53 = (undefined3)*(undefined8 *)((long)param_3 + 0x5d);
    uStack_50 = (undefined5)((ulong)*(undefined8 *)((long)param_3 + 0x5d) >> 0x18);
    lVar5 = *param_4;
    lVar14 = param_4[3];
    lVar9 = param_4[2];
    lVar18 = param_4[5];
    lVar16 = param_4[4];
    lVar13 = param_4[7];
    lVar6 = param_4[6];
    param_3[1] = param_4[1];
    *param_3 = lVar5;
    param_3[3] = lVar14;
    param_3[2] = lVar9;
    lVar9 = param_3[5];
    lVar5 = param_3[4];
    lVar17 = param_3[7];
    lVar15 = param_3[6];
    param_3[5] = lVar18;
    param_3[4] = lVar16;
    param_3[7] = lVar13;
    param_3[6] = lVar6;
    lVar6 = param_4[10];
    lVar14 = param_4[0xd];
    lVar13 = param_4[0xc];
    lVar18 = param_4[9];
    lVar16 = param_4[8];
    param_3[0xb] = param_4[0xb];
    param_3[10] = lVar6;
    param_3[0xd] = lVar14;
    param_3[0xc] = lVar13;
    param_3[9] = lVar18;
    param_3[8] = lVar16;
    param_4[9] = lVar7;
    param_4[8] = lVar3;
    param_4[0xb] = CONCAT35(local_53,uStack_58);
    param_4[10] = lVar10;
    param_4[0xd] = CONCAT17(0xaa,CONCAT25(0xaaaa,uStack_48));
    param_4[0xc] = CONCAT35(uStack_4b,uStack_50);
    param_4[1] = lVar8;
    *param_4 = lVar4;
    param_4[3] = lVar12;
    param_4[2] = lVar11;
    param_4[5] = lVar9;
    param_4[4] = lVar5;
    param_4[7] = lVar17;
    param_4[6] = lVar15;
    lVar3 = param_3[9];
    lVar4 = param_2[9];
    bVar1 = SBORROW8(lVar3,lVar4);
    bVar2 = lVar3 - lVar4 < 0;
    if (lVar3 == lVar4) {
      lVar3 = *param_3;
      lVar4 = *param_2;
      bVar1 = SBORROW8(lVar3,lVar4);
      bVar2 = lVar3 - lVar4 < 0;
      if (lVar3 == lVar4) {
        bVar1 = SBORROW8(param_3[7],param_2[7]);
        bVar2 = param_3[7] - param_2[7] < 0;
      }
    }
    if (bVar2 != bVar1) {
      lVar7 = param_2[9];
      lVar3 = param_2[8];
      lVar10 = param_2[10];
      uStack_58 = (undefined5)param_2[0xb];
      lVar8 = param_2[1];
      lVar4 = *param_2;
      lVar12 = param_2[3];
      lVar11 = param_2[2];
      uStack_4b = (undefined3)*(undefined8 *)((long)param_2 + 0x65);
      uStack_48 = (undefined5)((ulong)*(undefined8 *)((long)param_2 + 0x65) >> 0x18);
      local_53 = (undefined3)*(undefined8 *)((long)param_2 + 0x5d);
      uStack_50 = (undefined5)((ulong)*(undefined8 *)((long)param_2 + 0x5d) >> 0x18);
      lVar5 = *param_3;
      lVar14 = param_3[3];
      lVar9 = param_3[2];
      lVar18 = param_3[5];
      lVar16 = param_3[4];
      lVar13 = param_3[7];
      lVar6 = param_3[6];
      param_2[1] = param_3[1];
      *param_2 = lVar5;
      param_2[3] = lVar14;
      param_2[2] = lVar9;
      lVar9 = param_2[5];
      lVar5 = param_2[4];
      lVar17 = param_2[7];
      lVar15 = param_2[6];
      param_2[5] = lVar18;
      param_2[4] = lVar16;
      param_2[7] = lVar13;
      param_2[6] = lVar6;
      lVar6 = param_3[10];
      lVar14 = param_3[0xd];
      lVar13 = param_3[0xc];
      lVar18 = param_3[9];
      lVar16 = param_3[8];
      param_2[0xb] = param_3[0xb];
      param_2[10] = lVar6;
      param_2[0xd] = lVar14;
      param_2[0xc] = lVar13;
      param_2[9] = lVar18;
      param_2[8] = lVar16;
      param_3[9] = lVar7;
      param_3[8] = lVar3;
      param_3[0xb] = CONCAT35(local_53,uStack_58);
      param_3[10] = lVar10;
      param_3[0xd] = CONCAT17(0xaa,CONCAT25(0xaaaa,uStack_48));
      param_3[0xc] = CONCAT35(uStack_4b,uStack_50);
      param_3[1] = lVar8;
      *param_3 = lVar4;
      param_3[3] = lVar12;
      param_3[2] = lVar11;
      param_3[5] = lVar9;
      param_3[4] = lVar5;
      param_3[7] = lVar17;
      param_3[6] = lVar15;
      lVar3 = param_2[9];
      lVar4 = param_1[9];
      bVar1 = SBORROW8(lVar3,lVar4);
      bVar2 = lVar3 - lVar4 < 0;
      if (lVar3 == lVar4) {
        lVar3 = *param_2;
        lVar4 = *param_1;
        bVar1 = SBORROW8(lVar3,lVar4);
        bVar2 = lVar3 - lVar4 < 0;
        if (lVar3 == lVar4) {
          bVar1 = SBORROW8(param_2[7],param_1[7]);
          bVar2 = param_2[7] - param_1[7] < 0;
        }
      }
      if (bVar2 != bVar1) {
        lVar7 = param_1[9];
        lVar3 = param_1[8];
        lVar10 = param_1[10];
        uStack_58 = (undefined5)param_1[0xb];
        lVar8 = param_1[1];
        lVar4 = *param_1;
        lVar12 = param_1[3];
        lVar11 = param_1[2];
        uStack_4b = (undefined3)*(undefined8 *)((long)param_1 + 0x65);
        uStack_48 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0x65) >> 0x18);
        local_53 = (undefined3)*(undefined8 *)((long)param_1 + 0x5d);
        uStack_50 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0x5d) >> 0x18);
        lVar5 = *param_2;
        lVar14 = param_2[3];
        lVar9 = param_2[2];
        lVar18 = param_2[5];
        lVar16 = param_2[4];
        lVar13 = param_2[7];
        lVar6 = param_2[6];
        param_1[1] = param_2[1];
        *param_1 = lVar5;
        param_1[3] = lVar14;
        param_1[2] = lVar9;
        lVar9 = param_1[5];
        lVar5 = param_1[4];
        lVar17 = param_1[7];
        lVar15 = param_1[6];
        param_1[5] = lVar18;
        param_1[4] = lVar16;
        param_1[7] = lVar13;
        param_1[6] = lVar6;
        lVar6 = param_2[10];
        lVar14 = param_2[0xd];
        lVar13 = param_2[0xc];
        lVar18 = param_2[9];
        lVar16 = param_2[8];
        param_1[0xb] = param_2[0xb];
        param_1[10] = lVar6;
        param_1[0xd] = lVar14;
        param_1[0xc] = lVar13;
        param_1[9] = lVar18;
        param_1[8] = lVar16;
        param_2[9] = lVar7;
        param_2[8] = lVar3;
        param_2[0xb] = CONCAT35(local_53,uStack_58);
        param_2[10] = lVar10;
        param_2[0xd] = CONCAT17(0xaa,CONCAT25(0xaaaa,uStack_48));
        param_2[0xc] = CONCAT35(uStack_4b,uStack_50);
        param_2[1] = lVar8;
        *param_2 = lVar4;
        param_2[3] = lVar12;
        param_2[2] = lVar11;
        param_2[5] = lVar9;
        param_2[4] = lVar5;
        param_2[7] = lVar17;
        param_2[6] = lVar15;
      }
    }
  }
  lVar3 = param_5[9];
  lVar4 = param_4[9];
  bVar1 = SBORROW8(lVar3,lVar4);
  bVar2 = lVar3 - lVar4 < 0;
  if (lVar3 == lVar4) {
    lVar3 = *param_5;
    lVar4 = *param_4;
    bVar1 = SBORROW8(lVar3,lVar4);
    bVar2 = lVar3 - lVar4 < 0;
    if (lVar3 == lVar4) {
      bVar1 = SBORROW8(param_5[7],param_4[7]);
      bVar2 = param_5[7] - param_4[7] < 0;
    }
  }
  if (bVar2 != bVar1) {
    lVar7 = param_4[9];
    lVar3 = param_4[8];
    lVar10 = param_4[10];
    uStack_58 = (undefined5)param_4[0xb];
    lVar8 = param_4[1];
    lVar4 = *param_4;
    lVar12 = param_4[3];
    lVar11 = param_4[2];
    uStack_4b = (undefined3)*(undefined8 *)((long)param_4 + 0x65);
    uStack_48 = (undefined5)((ulong)*(undefined8 *)((long)param_4 + 0x65) >> 0x18);
    local_53 = (undefined3)*(undefined8 *)((long)param_4 + 0x5d);
    uStack_50 = (undefined5)((ulong)*(undefined8 *)((long)param_4 + 0x5d) >> 0x18);
    lVar5 = *param_5;
    lVar14 = param_5[3];
    lVar9 = param_5[2];
    lVar18 = param_5[5];
    lVar16 = param_5[4];
    lVar13 = param_5[7];
    lVar6 = param_5[6];
    param_4[1] = param_5[1];
    *param_4 = lVar5;
    param_4[3] = lVar14;
    param_4[2] = lVar9;
    lVar9 = param_4[5];
    lVar5 = param_4[4];
    lVar17 = param_4[7];
    lVar15 = param_4[6];
    param_4[5] = lVar18;
    param_4[4] = lVar16;
    param_4[7] = lVar13;
    param_4[6] = lVar6;
    lVar6 = param_5[10];
    lVar14 = param_5[0xd];
    lVar13 = param_5[0xc];
    lVar18 = param_5[9];
    lVar16 = param_5[8];
    param_4[0xb] = param_5[0xb];
    param_4[10] = lVar6;
    param_4[0xd] = lVar14;
    param_4[0xc] = lVar13;
    param_4[9] = lVar18;
    param_4[8] = lVar16;
    param_5[9] = lVar7;
    param_5[8] = lVar3;
    param_5[0xb] = CONCAT35(local_53,uStack_58);
    param_5[10] = lVar10;
    param_5[0xd] = CONCAT17(0xaa,CONCAT25(0xaaaa,uStack_48));
    param_5[0xc] = CONCAT35(uStack_4b,uStack_50);
    param_5[1] = lVar8;
    *param_5 = lVar4;
    param_5[3] = lVar12;
    param_5[2] = lVar11;
    param_5[5] = lVar9;
    param_5[4] = lVar5;
    param_5[7] = lVar17;
    param_5[6] = lVar15;
    lVar3 = param_4[9];
    lVar4 = param_3[9];
    bVar1 = SBORROW8(lVar3,lVar4);
    bVar2 = lVar3 - lVar4 < 0;
    if (lVar3 == lVar4) {
      lVar3 = *param_4;
      lVar4 = *param_3;
      bVar1 = SBORROW8(lVar3,lVar4);
      bVar2 = lVar3 - lVar4 < 0;
      if (lVar3 == lVar4) {
        bVar1 = SBORROW8(param_4[7],param_3[7]);
        bVar2 = param_4[7] - param_3[7] < 0;
      }
    }
    if (bVar2 != bVar1) {
      lVar7 = param_3[9];
      lVar3 = param_3[8];
      lVar10 = param_3[10];
      uStack_58 = (undefined5)param_3[0xb];
      lVar8 = param_3[1];
      lVar4 = *param_3;
      lVar12 = param_3[3];
      lVar11 = param_3[2];
      uStack_4b = (undefined3)*(undefined8 *)((long)param_3 + 0x65);
      uStack_48 = (undefined5)((ulong)*(undefined8 *)((long)param_3 + 0x65) >> 0x18);
      local_53 = (undefined3)*(undefined8 *)((long)param_3 + 0x5d);
      uStack_50 = (undefined5)((ulong)*(undefined8 *)((long)param_3 + 0x5d) >> 0x18);
      lVar5 = *param_4;
      lVar14 = param_4[3];
      lVar9 = param_4[2];
      lVar18 = param_4[5];
      lVar16 = param_4[4];
      lVar13 = param_4[7];
      lVar6 = param_4[6];
      param_3[1] = param_4[1];
      *param_3 = lVar5;
      param_3[3] = lVar14;
      param_3[2] = lVar9;
      lVar9 = param_3[5];
      lVar5 = param_3[4];
      lVar17 = param_3[7];
      lVar15 = param_3[6];
      param_3[5] = lVar18;
      param_3[4] = lVar16;
      param_3[7] = lVar13;
      param_3[6] = lVar6;
      lVar6 = param_4[10];
      lVar14 = param_4[0xd];
      lVar13 = param_4[0xc];
      lVar18 = param_4[9];
      lVar16 = param_4[8];
      param_3[0xb] = param_4[0xb];
      param_3[10] = lVar6;
      param_3[0xd] = lVar14;
      param_3[0xc] = lVar13;
      param_3[9] = lVar18;
      param_3[8] = lVar16;
      param_4[9] = lVar7;
      param_4[8] = lVar3;
      param_4[0xb] = CONCAT35(local_53,uStack_58);
      param_4[10] = lVar10;
      param_4[0xd] = CONCAT17(0xaa,CONCAT25(0xaaaa,uStack_48));
      param_4[0xc] = CONCAT35(uStack_4b,uStack_50);
      param_4[1] = lVar8;
      *param_4 = lVar4;
      param_4[3] = lVar12;
      param_4[2] = lVar11;
      param_4[5] = lVar9;
      param_4[4] = lVar5;
      param_4[7] = lVar17;
      param_4[6] = lVar15;
      lVar3 = param_3[9];
      lVar4 = param_2[9];
      bVar1 = SBORROW8(lVar3,lVar4);
      bVar2 = lVar3 - lVar4 < 0;
      if (lVar3 == lVar4) {
        lVar3 = *param_3;
        lVar4 = *param_2;
        bVar1 = SBORROW8(lVar3,lVar4);
        bVar2 = lVar3 - lVar4 < 0;
        if (lVar3 == lVar4) {
          bVar1 = SBORROW8(param_3[7],param_2[7]);
          bVar2 = param_3[7] - param_2[7] < 0;
        }
      }
      if (bVar2 != bVar1) {
        lVar7 = param_2[9];
        lVar3 = param_2[8];
        lVar10 = param_2[10];
        uStack_58 = (undefined5)param_2[0xb];
        lVar8 = param_2[1];
        lVar4 = *param_2;
        lVar12 = param_2[3];
        lVar11 = param_2[2];
        uStack_4b = (undefined3)*(undefined8 *)((long)param_2 + 0x65);
        uStack_48 = (undefined5)((ulong)*(undefined8 *)((long)param_2 + 0x65) >> 0x18);
        local_53 = (undefined3)*(undefined8 *)((long)param_2 + 0x5d);
        uStack_50 = (undefined5)((ulong)*(undefined8 *)((long)param_2 + 0x5d) >> 0x18);
        lVar5 = *param_3;
        lVar14 = param_3[3];
        lVar9 = param_3[2];
        lVar18 = param_3[5];
        lVar16 = param_3[4];
        lVar13 = param_3[7];
        lVar6 = param_3[6];
        param_2[1] = param_3[1];
        *param_2 = lVar5;
        param_2[3] = lVar14;
        param_2[2] = lVar9;
        lVar9 = param_2[5];
        lVar5 = param_2[4];
        lVar17 = param_2[7];
        lVar15 = param_2[6];
        param_2[5] = lVar18;
        param_2[4] = lVar16;
        param_2[7] = lVar13;
        param_2[6] = lVar6;
        lVar6 = param_3[10];
        lVar14 = param_3[0xd];
        lVar13 = param_3[0xc];
        lVar18 = param_3[9];
        lVar16 = param_3[8];
        param_2[0xb] = param_3[0xb];
        param_2[10] = lVar6;
        param_2[0xd] = lVar14;
        param_2[0xc] = lVar13;
        param_2[9] = lVar18;
        param_2[8] = lVar16;
        param_3[9] = lVar7;
        param_3[8] = lVar3;
        param_3[0xb] = CONCAT35(local_53,uStack_58);
        param_3[10] = lVar10;
        param_3[0xd] = CONCAT17(0xaa,CONCAT25(0xaaaa,uStack_48));
        param_3[0xc] = CONCAT35(uStack_4b,uStack_50);
        param_3[1] = lVar8;
        *param_3 = lVar4;
        param_3[3] = lVar12;
        param_3[2] = lVar11;
        param_3[5] = lVar9;
        param_3[4] = lVar5;
        param_3[7] = lVar17;
        param_3[6] = lVar15;
        lVar3 = param_2[9];
        lVar4 = param_1[9];
        bVar1 = SBORROW8(lVar3,lVar4);
        bVar2 = lVar3 - lVar4 < 0;
        if (lVar3 == lVar4) {
          lVar3 = *param_2;
          lVar4 = *param_1;
          bVar1 = SBORROW8(lVar3,lVar4);
          bVar2 = lVar3 - lVar4 < 0;
          if (lVar3 == lVar4) {
            bVar1 = SBORROW8(param_2[7],param_1[7]);
            bVar2 = param_2[7] - param_1[7] < 0;
          }
        }
        if (bVar2 != bVar1) {
          lVar7 = param_1[9];
          lVar3 = param_1[8];
          lVar10 = param_1[10];
          uStack_58 = (undefined5)param_1[0xb];
          lVar8 = param_1[1];
          lVar4 = *param_1;
          lVar12 = param_1[3];
          lVar11 = param_1[2];
          uStack_4b = (undefined3)*(undefined8 *)((long)param_1 + 0x65);
          uStack_48 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0x65) >> 0x18);
          local_53 = (undefined3)*(undefined8 *)((long)param_1 + 0x5d);
          uStack_50 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0x5d) >> 0x18);
          lVar5 = *param_2;
          lVar14 = param_2[3];
          lVar9 = param_2[2];
          lVar18 = param_2[5];
          lVar16 = param_2[4];
          lVar13 = param_2[7];
          lVar6 = param_2[6];
          param_1[1] = param_2[1];
          *param_1 = lVar5;
          param_1[3] = lVar14;
          param_1[2] = lVar9;
          lVar9 = param_1[5];
          lVar5 = param_1[4];
          lVar17 = param_1[7];
          lVar15 = param_1[6];
          param_1[5] = lVar18;
          param_1[4] = lVar16;
          param_1[7] = lVar13;
          param_1[6] = lVar6;
          lVar6 = param_2[10];
          lVar14 = param_2[0xd];
          lVar13 = param_2[0xc];
          lVar18 = param_2[9];
          lVar16 = param_2[8];
          param_1[0xb] = param_2[0xb];
          param_1[10] = lVar6;
          param_1[0xd] = lVar14;
          param_1[0xc] = lVar13;
          param_1[9] = lVar18;
          param_1[8] = lVar16;
          param_2[9] = lVar7;
          param_2[8] = lVar3;
          param_2[0xb] = CONCAT35(local_53,uStack_58);
          param_2[10] = lVar10;
          param_2[0xd] = CONCAT17(0xaa,CONCAT25(0xaaaa,uStack_48));
          param_2[0xc] = CONCAT35(uStack_4b,uStack_50);
          param_2[1] = lVar8;
          *param_2 = lVar4;
          param_2[3] = lVar12;
          param_2[2] = lVar11;
          param_2[5] = lVar9;
          param_2[4] = lVar5;
          param_2[7] = lVar17;
          param_2[6] = lVar15;
        }
      }
    }
  }
  return;
}


// ===== 0086f47c  FUN_0086f47c =====

void FUN_0086f47c(long *param_1,long *param_2)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  undefined5 local_40;
  undefined3 uStack_3b;
  undefined5 uStack_38;
  
  if ((param_1 != param_2) && (param_1 + 0xe != param_2)) {
    lVar3 = 0;
    plVar4 = param_1;
    plVar6 = param_1 + 0xe;
    do {
      lVar5 = plVar4[0x17];
      if (lVar5 == plVar4[9]) {
        lVar7 = *plVar6;
        lVar8 = *plVar4;
        bVar2 = SBORROW8(lVar7,lVar8);
        lVar16 = lVar7 - lVar8;
        if (lVar7 == lVar8) {
          bVar2 = SBORROW8(plVar4[0x15],plVar4[7]);
          lVar16 = plVar4[0x15] - plVar4[7];
        }
        if (lVar16 < 0 != bVar2) {
LAB_0086f528:
          lVar26 = plVar4[0xc];
          lVar13 = plVar4[0x14];
          lVar11 = plVar4[0x13];
          lVar17 = plVar4[0x12];
          lVar15 = plVar4[0x11];
          lVar21 = plVar4[0x10];
          lVar18 = plVar4[0xf];
          lVar22 = plVar4[0x19];
          lVar19 = plVar4[0x18];
          lVar14 = plVar4[0x16];
          lVar12 = plVar4[0x15];
          lVar8 = plVar4[0x15];
          lVar28 = plVar4[5];
          lVar27 = plVar4[4];
          lVar25 = plVar4[7];
          lVar24 = plVar4[6];
          uStack_3b = (undefined3)*(undefined8 *)((long)plVar4 + 0xd5);
          uStack_38 = (undefined5)((ulong)*(undefined8 *)((long)plVar4 + 0xd5) >> 0x18);
          local_40 = (undefined5)((ulong)*(undefined8 *)((long)plVar4 + 0xcd) >> 0x18);
          lVar23 = plVar4[9];
          lVar20 = plVar4[8];
          lVar10 = plVar4[0xb];
          lVar16 = plVar4[10];
          plVar6[0xd] = plVar4[0xd];
          plVar6[0xc] = lVar26;
          plVar6[7] = lVar25;
          plVar6[6] = lVar24;
          plVar6[9] = lVar23;
          plVar6[8] = lVar20;
          plVar6[0xb] = lVar10;
          plVar6[10] = lVar16;
          lVar16 = *plVar4;
          lVar20 = plVar4[3];
          lVar10 = plVar4[2];
          plVar6[1] = plVar4[1];
          *plVar6 = lVar16;
          plVar6[3] = lVar20;
          plVar6[2] = lVar10;
          plVar6[5] = lVar28;
          plVar6[4] = lVar27;
          plVar9 = param_1;
          lVar16 = lVar3;
          if (plVar4 != param_1) {
            do {
              plVar1 = (long *)((long)param_1 + lVar16);
              plVar9 = plVar4;
              if (lVar5 == plVar1[-5]) {
                lVar10 = plVar1[-0xe];
                if (lVar7 == lVar10) {
                  if (*(long *)((long)param_1 + lVar16 + -0x38) <= lVar8) break;
                }
                else if (lVar10 <= lVar7) {
                  plVar9 = (long *)((long)param_1 + lVar16);
                  break;
                }
              }
              else if (plVar1[-5] <= lVar5) break;
              lVar16 = lVar16 + -0x70;
              plVar4 = plVar4 + -0xe;
              plVar1[9] = plVar1[-5];
              plVar1[8] = plVar1[-6];
              plVar1[0xb] = plVar1[-3];
              plVar1[10] = plVar1[-4];
              plVar1[0xd] = plVar1[-1];
              plVar1[0xc] = plVar1[-2];
              plVar1[1] = plVar1[-0xd];
              *plVar1 = plVar1[-0xe];
              plVar1[3] = plVar1[-0xb];
              plVar1[2] = plVar1[-0xc];
              plVar1[5] = plVar1[-9];
              plVar1[4] = plVar1[-10];
              plVar1[7] = plVar1[-7];
              plVar1[6] = plVar1[-8];
              plVar9 = param_1;
            } while (lVar16 != 0);
          }
          *plVar9 = lVar7;
          plVar9[8] = lVar14;
          plVar9[7] = lVar12;
          plVar9[9] = lVar5;
          plVar9[4] = lVar17;
          plVar9[3] = lVar15;
          plVar9[2] = lVar21;
          plVar9[1] = lVar18;
          plVar9[6] = lVar13;
          plVar9[5] = lVar11;
          plVar9[0xb] = lVar22;
          plVar9[10] = lVar19;
          plVar9[0xd] = CONCAT35(0xaaaaaa,uStack_38);
          plVar9[0xc] = CONCAT35(uStack_3b,local_40);
        }
      }
      else if (lVar5 < plVar4[9]) {
        lVar7 = *plVar6;
        goto LAB_0086f528;
      }
      plVar9 = plVar6 + 0xe;
      lVar3 = lVar3 + 0x70;
      plVar4 = plVar6;
      plVar6 = plVar9;
    } while (plVar9 != param_2);
  }
  return;
}


// ===== 0086f618  FUN_0086f618 =====

void FUN_0086f618(long *param_1,long *param_2)

{
  long *plVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  undefined5 local_50;
  undefined3 uStack_4b;
  undefined5 uStack_48;
  
  if ((param_1 != param_2) && (param_1 + 0xe != param_2)) {
    lVar4 = 0;
    plVar5 = param_1;
    plVar7 = param_1 + 0xe;
    do {
      lVar6 = plVar5[0x17];
      if (lVar6 == plVar5[9]) {
        lVar8 = *plVar7;
        lVar9 = *plVar5;
        bVar2 = SBORROW8(lVar8,lVar9);
        lVar10 = lVar8 - lVar9;
        if (lVar8 == lVar9) {
          bVar2 = SBORROW8(plVar5[0x15],plVar5[7]);
          lVar10 = plVar5[0x15] - plVar5[7];
        }
        if (lVar10 < 0 != bVar2) {
LAB_0086f6d0:
          lVar26 = plVar5[0xc];
          lVar14 = plVar5[0x14];
          lVar12 = plVar5[0x13];
          lVar17 = plVar5[0x12];
          lVar16 = plVar5[0x11];
          lVar21 = plVar5[0x10];
          lVar18 = plVar5[0xf];
          lVar22 = plVar5[0x19];
          lVar19 = plVar5[0x18];
          lVar15 = plVar5[0x16];
          lVar13 = plVar5[0x15];
          lVar9 = plVar5[0x15];
          lVar28 = plVar5[5];
          lVar27 = plVar5[4];
          lVar25 = plVar5[7];
          lVar24 = plVar5[6];
          uStack_4b = (undefined3)*(undefined8 *)((long)plVar5 + 0xd5);
          uStack_48 = (undefined5)((ulong)*(undefined8 *)((long)plVar5 + 0xd5) >> 0x18);
          local_50 = (undefined5)((ulong)*(undefined8 *)((long)plVar5 + 0xcd) >> 0x18);
          lVar23 = plVar5[9];
          lVar20 = plVar5[8];
          lVar11 = plVar5[0xb];
          lVar10 = plVar5[10];
          plVar7[0xd] = plVar5[0xd];
          plVar7[0xc] = lVar26;
          plVar7[7] = lVar25;
          plVar7[6] = lVar24;
          plVar7[9] = lVar23;
          plVar7[8] = lVar20;
          plVar7[0xb] = lVar11;
          plVar7[10] = lVar10;
          lVar10 = *plVar5;
          lVar20 = plVar5[3];
          lVar11 = plVar5[2];
          plVar7[1] = plVar5[1];
          *plVar7 = lVar10;
          plVar7[3] = lVar20;
          plVar7[2] = lVar11;
          plVar7[5] = lVar28;
          plVar7[4] = lVar27;
          lVar10 = lVar4;
          if (plVar5 == param_1 + -0xe) {
LAB_0086f794:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__algorithm/sort.h:293: libc++ Hardening assertion __k != __leftmost failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                      );
          }
          while( true ) {
            plVar5 = (long *)((long)param_1 + lVar10);
            lVar11 = plVar5[-5];
            bVar3 = SBORROW8(lVar6,lVar11);
            bVar2 = lVar6 - lVar11 < 0;
            if (lVar6 == lVar11) {
              lVar11 = plVar5[-0xe];
              bVar3 = SBORROW8(lVar8,lVar11);
              bVar2 = lVar8 - lVar11 < 0;
              if (lVar8 == lVar11) {
                lVar11 = *(long *)((long)param_1 + lVar10 + -0x38);
                bVar3 = SBORROW8(lVar9,lVar11);
                bVar2 = lVar9 - lVar11 < 0;
              }
            }
            if (bVar2 == bVar3) break;
            lVar10 = lVar10 + -0x70;
            plVar5[9] = plVar5[-5];
            plVar5[8] = plVar5[-6];
            plVar5[0xb] = plVar5[-3];
            plVar5[10] = plVar5[-4];
            plVar5[0xd] = plVar5[-1];
            plVar5[0xc] = plVar5[-2];
            plVar5[1] = plVar5[-0xd];
            *plVar5 = plVar5[-0xe];
            plVar5[3] = plVar5[-0xb];
            plVar5[2] = plVar5[-0xc];
            plVar5[5] = plVar5[-9];
            plVar5[4] = plVar5[-10];
            plVar5[7] = plVar5[-7];
            plVar5[6] = plVar5[-8];
            if (lVar10 == -0x70) goto LAB_0086f794;
          }
          plVar5 = (long *)((long)param_1 + lVar10);
          plVar5[8] = lVar15;
          plVar5[7] = lVar13;
          *plVar5 = lVar8;
          plVar5[2] = lVar21;
          plVar5[1] = lVar18;
          plVar5[4] = lVar17;
          plVar5[3] = lVar16;
          plVar5[6] = lVar14;
          plVar5[5] = lVar12;
          plVar5[9] = lVar6;
          plVar5[0xb] = lVar22;
          plVar5[10] = lVar19;
          plVar5[0xd] = CONCAT35(0xaaaaaa,uStack_48);
          plVar5[0xc] = CONCAT35(uStack_4b,local_50);
        }
      }
      else if (lVar6 < plVar5[9]) {
        lVar8 = *plVar7;
        goto LAB_0086f6d0;
      }
      plVar1 = plVar7 + 0xe;
      lVar4 = lVar4 + 0x70;
      plVar5 = plVar7;
      plVar7 = plVar1;
    } while (plVar1 != param_2);
  }
  return;
}


// ===== 0086f7b8  FUN_0086f7b8 =====

long * FUN_0086f7b8(long *param_1,long *param_2)

{
  long *plVar1;
  bool bVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  undefined5 uStack_c8;
  undefined3 uStack_c3;
  undefined5 uStack_c0;
  undefined3 uStack_bb;
  undefined5 uStack_b8;
  undefined5 uStack_20;
  undefined3 uStack_1b;
  undefined5 uStack_18;
  
  lVar13 = param_1[2];
  lVar10 = param_1[1];
  lVar19 = param_1[4];
  lVar16 = param_1[3];
  lVar5 = param_1[9];
  lVar7 = param_2[-5];
  lVar6 = *param_1;
  lVar14 = param_1[6];
  lVar11 = param_1[5];
  lVar17 = param_1[10];
  bVar2 = SBORROW8(lVar5,lVar7);
  bVar3 = lVar5 - lVar7 < 0;
  lVar8 = param_1[7];
  lVar15 = param_1[8];
  lVar12 = param_1[7];
  uStack_c8 = (undefined5)param_1[0xb];
  uStack_bb = (undefined3)*(undefined8 *)((long)param_1 + 0x65);
  uStack_b8 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0x65) >> 0x18);
  uStack_c3 = (undefined3)*(undefined8 *)((long)param_1 + 0x5d);
  uStack_c0 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0x5d) >> 0x18);
  if (lVar5 == lVar7) {
    lVar7 = param_2[-0xe];
    bVar2 = SBORROW8(lVar6,lVar7);
    bVar3 = lVar6 - lVar7 < 0;
    if (lVar6 == lVar7) {
      bVar2 = SBORROW8(lVar8,param_2[-7]);
      bVar3 = lVar8 - param_2[-7] < 0;
    }
  }
  if (bVar3 == bVar2) {
    for (plVar4 = param_1 + 0xe; plVar4 < param_2; plVar4 = plVar4 + 0xe) {
      lVar7 = plVar4[9];
      bVar2 = SBORROW8(lVar5,lVar7);
      bVar3 = lVar5 - lVar7 < 0;
      if (lVar5 == lVar7) {
        lVar7 = *plVar4;
        bVar2 = SBORROW8(lVar6,lVar7);
        bVar3 = lVar6 - lVar7 < 0;
        if (lVar6 == lVar7) {
          bVar2 = SBORROW8(lVar8,plVar4[7]);
          bVar3 = lVar8 - plVar4[7] < 0;
        }
      }
      if (bVar3 != bVar2) break;
    }
  }
  else {
    plVar4 = param_1 + 0xe;
    while( true ) {
      if (plVar4 == param_2) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__algorithm/sort.h:669: libc++ Hardening assertion __first != __end failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                  );
      }
      lVar7 = plVar4[9];
      bVar2 = SBORROW8(lVar5,lVar7);
      bVar3 = lVar5 - lVar7 < 0;
      if (lVar5 == lVar7) {
        lVar7 = *plVar4;
        bVar2 = SBORROW8(lVar6,lVar7);
        bVar3 = lVar6 - lVar7 < 0;
        if (lVar6 == lVar7) {
          bVar2 = SBORROW8(lVar8,plVar4[7]);
          bVar3 = lVar8 - plVar4[7] < 0;
        }
      }
      if (bVar3 != bVar2) break;
      plVar4 = plVar4 + 0xe;
    }
  }
  plVar9 = param_2;
  if (plVar4 < param_2) {
    if (param_2 != param_1) {
      plVar9 = param_2 + -0xe;
      do {
        lVar7 = plVar9[9];
        bVar2 = SBORROW8(lVar5,lVar7);
        bVar3 = lVar5 - lVar7 < 0;
        if (lVar5 == lVar7) {
          lVar7 = *plVar9;
          bVar2 = SBORROW8(lVar6,lVar7);
          bVar3 = lVar6 - lVar7 < 0;
          if (lVar6 == lVar7) {
            bVar2 = SBORROW8(lVar8,plVar9[7]);
            bVar3 = lVar8 - plVar9[7] < 0;
          }
        }
        if (bVar3 == bVar2) goto LAB_0086f918;
        bVar3 = plVar9 != param_1;
        plVar9 = plVar9 + -0xe;
      } while (bVar3);
    }
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__algorithm/sort.h:682: libc++ Hardening assertion __last != __begin failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
              );
  }
LAB_0086f918:
  if (plVar4 < plVar9) {
    do {
      lVar25 = plVar4[5];
      lVar22 = plVar4[4];
      lVar20 = plVar4[7];
      lVar7 = plVar4[6];
      lVar31 = plVar4[1];
      lVar28 = *plVar4;
      lVar35 = plVar4[3];
      lVar33 = plVar4[2];
      lVar32 = plVar4[9];
      lVar29 = plVar4[8];
      lVar26 = plVar4[0xb];
      lVar23 = plVar4[10];
      uStack_1b = (undefined3)*(undefined8 *)((long)plVar4 + 0x65);
      uStack_18 = (undefined5)((ulong)*(undefined8 *)((long)plVar4 + 0x65) >> 0x18);
      uStack_20 = (undefined5)((ulong)*(undefined8 *)((long)plVar4 + 0x5d) >> 0x18);
      lVar21 = plVar9[9];
      lVar18 = plVar9[8];
      lVar27 = plVar9[0xb];
      lVar24 = plVar9[10];
      lVar30 = plVar9[0xc];
      plVar4[0xd] = plVar9[0xd];
      plVar4[0xc] = lVar30;
      plVar4[9] = lVar21;
      plVar4[8] = lVar18;
      plVar4[0xb] = lVar27;
      plVar4[10] = lVar24;
      lVar24 = plVar9[4];
      lVar21 = plVar9[7];
      lVar18 = plVar9[6];
      lVar30 = plVar9[1];
      lVar27 = *plVar9;
      lVar36 = plVar9[3];
      lVar34 = plVar9[2];
      plVar4[5] = plVar9[5];
      plVar4[4] = lVar24;
      plVar4[7] = lVar21;
      plVar4[6] = lVar18;
      plVar4[1] = lVar30;
      *plVar4 = lVar27;
      plVar4[3] = lVar36;
      plVar4[2] = lVar34;
      plVar9[5] = lVar25;
      plVar9[4] = lVar22;
      plVar9[7] = lVar20;
      plVar9[6] = lVar7;
      plVar9[1] = lVar31;
      *plVar9 = lVar28;
      plVar9[3] = lVar35;
      plVar9[2] = lVar33;
      plVar9[9] = lVar32;
      plVar9[8] = lVar29;
      plVar9[0xb] = lVar26;
      plVar9[10] = lVar23;
      plVar9[0xd] = CONCAT17(0xaa,CONCAT25(0xaaaa,uStack_18));
      plVar9[0xc] = CONCAT35(uStack_1b,uStack_20);
      do {
        plVar4 = plVar4 + 0xe;
        if (plVar4 == param_2) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__algorithm/sort.h:692: libc++ Hardening assertion __first != __end failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                    );
        }
        lVar7 = plVar4[9];
        bVar2 = SBORROW8(lVar5,lVar7);
        bVar3 = lVar5 - lVar7 < 0;
        if (lVar5 == lVar7) {
          lVar7 = *plVar4;
          bVar2 = SBORROW8(lVar6,lVar7);
          bVar3 = lVar6 - lVar7 < 0;
          if (lVar6 == lVar7) {
            bVar2 = SBORROW8(lVar8,plVar4[7]);
            bVar3 = lVar8 - plVar4[7] < 0;
          }
        }
        plVar1 = plVar9;
      } while (bVar3 == bVar2);
      do {
        if (plVar1 == param_1) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__algorithm/sort.h:697: libc++ Hardening assertion __last != __begin failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                    );
        }
        plVar9 = plVar1 + -0xe;
        lVar7 = plVar1[-5];
        bVar2 = SBORROW8(lVar5,lVar7);
        bVar3 = lVar5 - lVar7 < 0;
        if (lVar5 == lVar7) {
          lVar7 = *plVar9;
          bVar2 = SBORROW8(lVar6,lVar7);
          bVar3 = lVar6 - lVar7 < 0;
          if (lVar6 == lVar7) {
            bVar2 = SBORROW8(lVar8,plVar1[-7]);
            bVar3 = lVar8 - plVar1[-7] < 0;
          }
        }
        plVar1 = plVar9;
      } while (bVar3 != bVar2);
    } while (plVar4 < plVar9);
  }
  if (param_1 != plVar4 + -0xe) {
    lVar18 = plVar4[-10];
    lVar8 = plVar4[-7];
    lVar7 = plVar4[-8];
    lVar21 = plVar4[-0xd];
    lVar20 = plVar4[-0xe];
    lVar23 = plVar4[-0xb];
    lVar22 = plVar4[-0xc];
    param_1[5] = plVar4[-9];
    param_1[4] = lVar18;
    param_1[7] = lVar8;
    param_1[6] = lVar7;
    param_1[1] = lVar21;
    *param_1 = lVar20;
    param_1[3] = lVar23;
    param_1[2] = lVar22;
    lVar20 = plVar4[-3];
    lVar18 = plVar4[-4];
    lVar8 = plVar4[-1];
    lVar7 = plVar4[-2];
    lVar21 = plVar4[-6];
    param_1[9] = plVar4[-5];
    param_1[8] = lVar21;
    param_1[0xb] = lVar20;
    param_1[10] = lVar18;
    param_1[0xd] = lVar8;
    param_1[0xc] = lVar7;
  }
  plVar4[-0xe] = lVar6;
  plVar4[-6] = lVar15;
  plVar4[-7] = lVar12;
  plVar4[-8] = lVar14;
  plVar4[-9] = lVar11;
  plVar4[-10] = lVar19;
  plVar4[-0xb] = lVar16;
  plVar4[-0xc] = lVar13;
  plVar4[-0xd] = lVar10;
  plVar4[-5] = lVar5;
  plVar4[-3] = CONCAT35(uStack_c3,uStack_c8);
  plVar4[-4] = lVar17;
  plVar4[-1] = CONCAT17(0xaa,CONCAT25(0xaaaa,uStack_b8));
  plVar4[-2] = CONCAT35(uStack_bb,uStack_c0);
  return plVar4;
}


// ===== 0086faa8  FUN_0086faa8 =====

undefined1  [16] FUN_0086faa8(long *param_1,long *param_2)

{
  long *plVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  undefined1 auVar39 [16];
  undefined5 uStack_c8;
  undefined3 uStack_c3;
  undefined5 uStack_c0;
  undefined3 uStack_bb;
  undefined5 uStack_b8;
  undefined5 uStack_20;
  undefined3 uStack_1b;
  undefined5 uStack_18;
  
  lVar15 = param_1[2];
  lVar13 = param_1[1];
  lVar19 = param_1[4];
  lVar17 = param_1[3];
  lVar26 = param_1[6];
  lVar22 = param_1[5];
  lVar18 = param_1[10];
  lVar5 = *param_1;
  lVar16 = param_1[8];
  lVar14 = param_1[7];
  uStack_c8 = (undefined5)param_1[0xb];
  lVar4 = param_1[7];
  lVar6 = param_1[9];
  uStack_bb = (undefined3)*(undefined8 *)((long)param_1 + 0x65);
  uStack_b8 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0x65) >> 0x18);
  uStack_c3 = (undefined3)*(undefined8 *)((long)param_1 + 0x5d);
  uStack_c0 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0x5d) >> 0x18);
  if (param_1 + 0xe != param_2) {
    lVar9 = 0;
    do {
      lVar8 = *(long *)((long)param_1 + lVar9 + 0xb8);
      bVar2 = SBORROW8(lVar8,lVar6);
      bVar3 = lVar8 - lVar6 < 0;
      if (lVar8 == lVar6) {
        lVar8 = *(long *)((long)param_1 + lVar9 + 0x70);
        bVar2 = SBORROW8(lVar8,lVar5);
        bVar3 = lVar8 - lVar5 < 0;
        if (lVar8 == lVar5) {
          lVar8 = *(long *)((long)param_1 + lVar9 + 0xa8);
          bVar2 = SBORROW8(lVar8,lVar4);
          bVar3 = lVar8 - lVar4 < 0;
        }
      }
      if (bVar3 == bVar2) {
        plVar1 = (long *)((long)param_1 + lVar9 + 0x70);
        if (lVar9 == 0) {
          plVar7 = param_2;
          if (plVar1 < param_2) {
            plVar7 = param_2 + -0xe;
            while( true ) {
              lVar9 = plVar7[9];
              bVar2 = SBORROW8(lVar9,lVar6);
              bVar3 = lVar9 - lVar6 < 0;
              if (lVar9 == lVar6) {
                lVar9 = *plVar7;
                bVar2 = SBORROW8(lVar9,lVar5);
                bVar3 = lVar9 - lVar5 < 0;
                if (lVar9 == lVar5) {
                  bVar2 = SBORROW8(plVar7[7],lVar4);
                  bVar3 = plVar7[7] - lVar4 < 0;
                }
              }
              if ((bVar3 != bVar2) || (plVar7 <= plVar1)) break;
              plVar7 = plVar7 + -0xe;
            }
          }
        }
        else {
          if (param_2 == param_1) goto LAB_0086fba8;
          plVar7 = param_2 + -0xe;
          while( true ) {
            lVar9 = plVar7[9];
            bVar2 = SBORROW8(lVar9,lVar6);
            bVar3 = lVar9 - lVar6 < 0;
            if (lVar9 == lVar6) {
              lVar9 = *plVar7;
              bVar2 = SBORROW8(lVar9,lVar5);
              bVar3 = lVar9 - lVar5 < 0;
              if (lVar9 == lVar5) {
                bVar2 = SBORROW8(plVar7[7],lVar4);
                bVar3 = plVar7[7] - lVar4 < 0;
              }
            }
            if (bVar3 != bVar2) break;
            bVar3 = plVar7 == param_1;
            plVar7 = plVar7 + -0xe;
            if (bVar3) {
LAB_0086fba8:
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__algorithm/sort.h:615: libc++ Hardening assertion __last != __begin failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                        );
            }
          }
        }
        plVar10 = plVar1;
        plVar11 = plVar7;
        if (plVar1 < plVar7) {
          do {
            lVar27 = plVar10[5];
            lVar23 = plVar10[4];
            lVar20 = plVar10[7];
            lVar9 = plVar10[6];
            lVar33 = plVar10[1];
            lVar30 = *plVar10;
            lVar37 = plVar10[3];
            lVar35 = plVar10[2];
            lVar34 = plVar10[9];
            lVar31 = plVar10[8];
            lVar28 = plVar10[0xb];
            lVar24 = plVar10[10];
            uStack_1b = (undefined3)*(undefined8 *)((long)plVar10 + 0x65);
            uStack_18 = (undefined5)((ulong)*(undefined8 *)((long)plVar10 + 0x65) >> 0x18);
            uStack_20 = (undefined5)((ulong)*(undefined8 *)((long)plVar10 + 0x5d) >> 0x18);
            lVar21 = plVar11[9];
            lVar8 = plVar11[8];
            lVar29 = plVar11[0xb];
            lVar25 = plVar11[10];
            lVar32 = plVar11[0xc];
            plVar10[0xd] = plVar11[0xd];
            plVar10[0xc] = lVar32;
            plVar10[9] = lVar21;
            plVar10[8] = lVar8;
            plVar10[0xb] = lVar29;
            plVar10[10] = lVar25;
            lVar25 = plVar11[4];
            lVar21 = plVar11[7];
            lVar8 = plVar11[6];
            lVar32 = plVar11[1];
            lVar29 = *plVar11;
            lVar38 = plVar11[3];
            lVar36 = plVar11[2];
            plVar10[5] = plVar11[5];
            plVar10[4] = lVar25;
            plVar10[7] = lVar21;
            plVar10[6] = lVar8;
            plVar10[1] = lVar32;
            *plVar10 = lVar29;
            plVar10[3] = lVar38;
            plVar10[2] = lVar36;
            plVar11[5] = lVar27;
            plVar11[4] = lVar23;
            plVar11[7] = lVar20;
            plVar11[6] = lVar9;
            plVar11[1] = lVar33;
            *plVar11 = lVar30;
            plVar11[3] = lVar37;
            plVar11[2] = lVar35;
            plVar11[9] = lVar34;
            plVar11[8] = lVar31;
            plVar11[0xb] = lVar28;
            plVar11[10] = lVar24;
            plVar11[0xd] = CONCAT17(0xaa,CONCAT25(0xaaaa,uStack_18));
            plVar11[0xc] = CONCAT35(uStack_1b,uStack_20);
            do {
              plVar10 = plVar10 + 0xe;
              if (plVar10 == param_2) {
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/__algorithm/sort.h:633: libc++ Hardening assertion __first != __end failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                          );
              }
              lVar9 = plVar10[9];
              bVar2 = SBORROW8(lVar9,lVar6);
              bVar3 = lVar9 - lVar6 < 0;
              if (lVar9 == lVar6) {
                lVar9 = *plVar10;
                bVar2 = SBORROW8(lVar9,lVar5);
                bVar3 = lVar9 - lVar5 < 0;
                if (lVar9 == lVar5) {
                  bVar2 = SBORROW8(plVar10[7],lVar4);
                  bVar3 = plVar10[7] - lVar4 < 0;
                }
              }
            } while (bVar3 != bVar2);
            do {
              if (plVar11 == param_1) {
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/__algorithm/sort.h:638: libc++ Hardening assertion __last != __begin failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                          );
              }
              plVar12 = plVar11 + -0xe;
              lVar9 = plVar11[-5];
              bVar2 = SBORROW8(lVar9,lVar6);
              bVar3 = lVar9 - lVar6 < 0;
              if (lVar9 == lVar6) {
                lVar9 = *plVar12;
                bVar2 = SBORROW8(lVar9,lVar5);
                bVar3 = lVar9 - lVar5 < 0;
                if (lVar9 == lVar5) {
                  bVar2 = SBORROW8(plVar11[-7],lVar4);
                  bVar3 = plVar11[-7] - lVar4 < 0;
                }
              }
              plVar11 = plVar12;
            } while (bVar3 == bVar2);
          } while (plVar10 < plVar12);
        }
        plVar11 = plVar10 + -0xe;
        if (param_1 != plVar11) {
          lVar8 = plVar10[-10];
          lVar9 = plVar10[-7];
          lVar4 = plVar10[-8];
          lVar21 = plVar10[-0xd];
          lVar20 = *plVar11;
          lVar24 = plVar10[-0xb];
          lVar23 = plVar10[-0xc];
          param_1[5] = plVar10[-9];
          param_1[4] = lVar8;
          param_1[7] = lVar9;
          param_1[6] = lVar4;
          param_1[1] = lVar21;
          *param_1 = lVar20;
          param_1[3] = lVar24;
          param_1[2] = lVar23;
          lVar20 = plVar10[-3];
          lVar8 = plVar10[-4];
          lVar9 = plVar10[-1];
          lVar4 = plVar10[-2];
          lVar21 = plVar10[-6];
          param_1[9] = plVar10[-5];
          param_1[8] = lVar21;
          param_1[0xb] = lVar20;
          param_1[10] = lVar8;
          param_1[0xd] = lVar9;
          param_1[0xc] = lVar4;
        }
        plVar10[-0xe] = lVar5;
        plVar10[-6] = lVar16;
        plVar10[-7] = lVar14;
        plVar10[-8] = lVar26;
        plVar10[-9] = lVar22;
        plVar10[-10] = lVar19;
        plVar10[-0xb] = lVar17;
        plVar10[-0xc] = lVar15;
        plVar10[-0xd] = lVar13;
        plVar10[-5] = lVar6;
        plVar10[-3] = CONCAT35(uStack_c3,uStack_c8);
        plVar10[-4] = lVar18;
        plVar10[-1] = CONCAT17(0xaa,CONCAT25(0xaaaa,uStack_b8));
        plVar10[-2] = CONCAT35(uStack_bb,uStack_c0);
        auVar39[8] = plVar7 <= plVar1;
        auVar39._0_8_ = plVar11;
        auVar39._9_7_ = 0;
        return auVar39;
      }
      lVar8 = lVar9 + 0xe0;
      lVar9 = lVar9 + 0x70;
    } while ((long *)((long)param_1 + lVar8) != param_2);
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__algorithm/sort.h:603: libc++ Hardening assertion __first != __end failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
            );
}


// ===== 0086fda4  FUN_0086fda4 =====

bool FUN_0086fda4(long *param_1,long *param_2,undefined8 param_3)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  undefined5 uStack_c8;
  undefined3 uStack_c3;
  undefined5 uStack_c0;
  undefined3 uStack_bb;
  undefined5 uStack_b8;
  undefined5 uStack_58;
  undefined3 local_53;
  undefined5 uStack_50;
  undefined3 uStack_4b;
  undefined5 uStack_48;
  
  uVar4 = ((long)param_2 - (long)param_1 >> 4) * 0x6db6db6db6db6db7;
  if ((long)uVar4 < 3) {
    if (uVar4 < 2) {
      return true;
    }
    if (uVar4 == 2) {
      lVar5 = param_2[-5];
      lVar7 = param_1[9];
      bVar1 = SBORROW8(lVar5,lVar7);
      bVar2 = lVar5 - lVar7 < 0;
      plVar11 = param_2 + -0xe;
      if (lVar5 == lVar7) {
        lVar5 = *plVar11;
        lVar7 = *param_1;
        bVar1 = SBORROW8(lVar5,lVar7);
        bVar2 = lVar5 - lVar7 < 0;
        if (lVar5 == lVar7) {
          bVar1 = SBORROW8(param_2[-7],param_1[7]);
          bVar2 = param_2[-7] - param_1[7] < 0;
        }
      }
      if (bVar2 == bVar1) {
        return true;
      }
      lVar10 = param_1[9];
      lVar5 = param_1[8];
      lVar17 = param_1[10];
      uStack_58 = (undefined5)param_1[0xb];
      lVar14 = param_1[1];
      lVar7 = *param_1;
      lVar19 = param_1[3];
      lVar16 = param_1[2];
      uStack_4b = (undefined3)*(undefined8 *)((long)param_1 + 0x65);
      uStack_48 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0x65) >> 0x18);
      local_53 = (undefined3)*(undefined8 *)((long)param_1 + 0x5d);
      uStack_50 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0x5d) >> 0x18);
      lVar9 = *plVar11;
      lVar20 = param_2[-0xb];
      lVar15 = param_2[-0xc];
      lVar23 = param_2[-9];
      lVar21 = param_2[-10];
      lVar18 = param_2[-7];
      lVar13 = param_2[-8];
      param_1[1] = param_2[-0xd];
      *param_1 = lVar9;
      param_1[3] = lVar20;
      param_1[2] = lVar15;
      lVar15 = param_1[5];
      lVar9 = param_1[4];
      lVar22 = param_1[7];
      lVar3 = param_1[6];
      param_1[5] = lVar23;
      param_1[4] = lVar21;
      param_1[7] = lVar18;
      param_1[6] = lVar13;
      lVar13 = param_2[-4];
      lVar20 = param_2[-1];
      lVar18 = param_2[-2];
      lVar23 = param_2[-5];
      lVar21 = param_2[-6];
      param_1[0xb] = param_2[-3];
      param_1[10] = lVar13;
      param_1[0xd] = lVar20;
      param_1[0xc] = lVar18;
      param_1[9] = lVar23;
      param_1[8] = lVar21;
      param_2[-5] = lVar10;
      param_2[-6] = lVar5;
      param_2[-3] = CONCAT35(local_53,uStack_58);
      param_2[-4] = lVar17;
      param_2[-1] = CONCAT17(0xaa,CONCAT25(0xaaaa,uStack_48));
      param_2[-2] = CONCAT35(uStack_4b,uStack_50);
      param_2[-0xd] = lVar14;
      *plVar11 = lVar7;
      param_2[-0xb] = lVar19;
      param_2[-0xc] = lVar16;
      param_2[-9] = lVar15;
      param_2[-10] = lVar9;
      param_2[-7] = lVar22;
      param_2[-8] = lVar3;
      return true;
    }
  }
  else {
    if (uVar4 == 3) {
      FUN_0086ec7c(param_1,param_1 + 0xe,param_2 + -0xe,param_3);
      return true;
    }
    if (uVar4 == 4) {
      plVar11 = param_1 + 0x1c;
      plVar12 = param_2 + -0xe;
      FUN_0086ec7c(param_1,param_1 + 0xe,param_1 + 0x1c,param_3);
      lVar5 = param_2[-5];
      lVar7 = param_1[0x25];
      bVar1 = SBORROW8(lVar5,lVar7);
      bVar2 = lVar5 - lVar7 < 0;
      if (lVar5 == lVar7) {
        lVar5 = *plVar12;
        lVar7 = *plVar11;
        bVar1 = SBORROW8(lVar5,lVar7);
        bVar2 = lVar5 - lVar7 < 0;
        if (lVar5 == lVar7) {
          bVar1 = SBORROW8(param_2[-7],param_1[0x23]);
          bVar2 = param_2[-7] - param_1[0x23] < 0;
        }
      }
      if (bVar2 == bVar1) {
        return true;
      }
      lVar10 = param_1[0x25];
      lVar5 = param_1[0x24];
      lVar17 = param_1[0x26];
      uStack_58 = (undefined5)param_1[0x27];
      lVar14 = param_1[0x1d];
      lVar7 = *plVar11;
      lVar19 = param_1[0x1f];
      lVar16 = param_1[0x1e];
      uStack_4b = (undefined3)*(undefined8 *)((long)param_1 + 0x145);
      uStack_48 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0x145) >> 0x18);
      local_53 = (undefined3)*(undefined8 *)((long)param_1 + 0x13d);
      uStack_50 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0x13d) >> 0x18);
      lVar9 = *plVar12;
      lVar20 = param_2[-0xb];
      lVar15 = param_2[-0xc];
      lVar23 = param_2[-9];
      lVar21 = param_2[-10];
      lVar18 = param_2[-7];
      lVar13 = param_2[-8];
      param_1[0x1d] = param_2[-0xd];
      *plVar11 = lVar9;
      param_1[0x1f] = lVar20;
      param_1[0x1e] = lVar15;
      lVar15 = param_1[0x21];
      lVar9 = param_1[0x20];
      lVar22 = param_1[0x23];
      lVar3 = param_1[0x22];
      param_1[0x21] = lVar23;
      param_1[0x20] = lVar21;
      param_1[0x23] = lVar18;
      param_1[0x22] = lVar13;
      lVar13 = param_2[-4];
      lVar20 = param_2[-1];
      lVar18 = param_2[-2];
      lVar23 = param_2[-5];
      lVar21 = param_2[-6];
      param_1[0x27] = param_2[-3];
      param_1[0x26] = lVar13;
      param_1[0x29] = lVar20;
      param_1[0x28] = lVar18;
      param_1[0x25] = lVar23;
      param_1[0x24] = lVar21;
      param_2[-5] = lVar10;
      param_2[-6] = lVar5;
      param_2[-3] = CONCAT35(local_53,uStack_58);
      param_2[-4] = lVar17;
      param_2[-1] = CONCAT17(0xaa,CONCAT25(0xaaaa,uStack_48));
      param_2[-2] = CONCAT35(uStack_4b,uStack_50);
      param_2[-0xd] = lVar14;
      *plVar12 = lVar7;
      param_2[-0xb] = lVar19;
      param_2[-0xc] = lVar16;
      param_2[-9] = lVar15;
      param_2[-10] = lVar9;
      param_2[-7] = lVar22;
      param_2[-8] = lVar3;
      lVar5 = param_1[0x25];
      lVar7 = param_1[0x17];
      bVar1 = SBORROW8(lVar5,lVar7);
      bVar2 = lVar5 - lVar7 < 0;
      if (lVar5 == lVar7) {
        lVar5 = *plVar11;
        lVar7 = param_1[0xe];
        bVar1 = SBORROW8(lVar5,lVar7);
        bVar2 = lVar5 - lVar7 < 0;
        if (lVar5 == lVar7) {
          bVar1 = SBORROW8(param_1[0x23],param_1[0x15]);
          bVar2 = param_1[0x23] - param_1[0x15] < 0;
        }
      }
      if (bVar2 == bVar1) {
        return true;
      }
      lVar14 = param_1[0x17];
      lVar9 = param_1[0x16];
      lVar16 = param_1[0x18];
      uStack_58 = (undefined5)param_1[0x19];
      lVar15 = param_1[0xf];
      lVar13 = param_1[0xe];
      lVar19 = param_1[0x11];
      lVar18 = param_1[0x10];
      uStack_4b = (undefined3)*(undefined8 *)((long)param_1 + 0xd5);
      uStack_48 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0xd5) >> 0x18);
      local_53 = (undefined3)*(undefined8 *)((long)param_1 + 0xcd);
      uStack_50 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0xcd) >> 0x18);
      lVar7 = param_1[9];
      lVar3 = param_1[0x13];
      lVar20 = param_1[0x12];
      lVar17 = param_1[0x15];
      lVar10 = param_1[0x14];
      param_1[0x17] = param_1[0x25];
      param_1[0x16] = param_1[0x24];
      lVar5 = param_1[0x17];
      bVar1 = SBORROW8(lVar5,lVar7);
      bVar2 = lVar5 - lVar7 < 0;
      param_1[0x13] = param_1[0x21];
      param_1[0x12] = param_1[0x20];
      param_1[0x15] = param_1[0x23];
      param_1[0x14] = param_1[0x22];
      param_1[0xf] = param_1[0x1d];
      param_1[0xe] = *plVar11;
      param_1[0x11] = param_1[0x1f];
      param_1[0x10] = param_1[0x1e];
      param_1[0x19] = param_1[0x27];
      param_1[0x18] = param_1[0x26];
      param_1[0x1b] = param_1[0x29];
      param_1[0x1a] = param_1[0x28];
      param_1[0x21] = lVar3;
      param_1[0x20] = lVar20;
      param_1[0x23] = lVar17;
      param_1[0x22] = lVar10;
      param_1[0x1d] = lVar15;
      *plVar11 = lVar13;
      param_1[0x1f] = lVar19;
      param_1[0x1e] = lVar18;
      param_1[0x27] = CONCAT35(local_53,uStack_58);
      param_1[0x26] = lVar16;
      param_1[0x29] = CONCAT17(0xaa,CONCAT25(0xaaaa,uStack_48));
      param_1[0x28] = CONCAT35(uStack_4b,uStack_50);
      param_1[0x25] = lVar14;
      param_1[0x24] = lVar9;
      if (lVar5 == lVar7) {
        lVar5 = param_1[0xe];
        lVar7 = *param_1;
        bVar1 = SBORROW8(lVar5,lVar7);
        bVar2 = lVar5 - lVar7 < 0;
        if (lVar5 == lVar7) {
          bVar1 = SBORROW8(param_1[0x15],param_1[7]);
          bVar2 = param_1[0x15] - param_1[7] < 0;
        }
      }
      if (bVar2 == bVar1) {
        return true;
      }
      lVar13 = param_1[9];
      lVar5 = param_1[8];
      lVar15 = param_1[10];
      uStack_58 = (undefined5)param_1[0xb];
      lVar10 = param_1[1];
      lVar7 = *param_1;
      lVar16 = param_1[3];
      lVar17 = param_1[2];
      uStack_4b = (undefined3)*(undefined8 *)((long)param_1 + 0x65);
      uStack_48 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0x65) >> 0x18);
      local_53 = (undefined3)*(undefined8 *)((long)param_1 + 0x5d);
      uStack_50 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0x5d) >> 0x18);
      lVar19 = param_1[5];
      lVar18 = param_1[4];
      lVar14 = param_1[7];
      lVar9 = param_1[6];
      param_1[9] = param_1[0x17];
      param_1[8] = param_1[0x16];
      param_1[0xb] = param_1[0x19];
      param_1[10] = param_1[0x18];
      param_1[5] = param_1[0x13];
      param_1[4] = param_1[0x12];
      param_1[7] = param_1[0x15];
      param_1[6] = param_1[0x14];
      param_1[0x17] = lVar13;
      param_1[0x16] = lVar5;
      param_1[1] = param_1[0xf];
      *param_1 = param_1[0xe];
      param_1[3] = param_1[0x11];
      param_1[2] = param_1[0x10];
      param_1[0x13] = lVar19;
      param_1[0x12] = lVar18;
      param_1[0x15] = lVar14;
      param_1[0x14] = lVar9;
      param_1[0xf] = lVar10;
      param_1[0xe] = lVar7;
      param_1[0x11] = lVar16;
      param_1[0x10] = lVar17;
      param_1[0xd] = param_1[0x1b];
      param_1[0xc] = param_1[0x1a];
      param_1[0x19] = CONCAT35(local_53,uStack_58);
      param_1[0x18] = lVar15;
      param_1[0x1b] = CONCAT17(0xaa,CONCAT25(0xaaaa,uStack_48));
      param_1[0x1a] = CONCAT35(uStack_4b,uStack_50);
      return true;
    }
    if (uVar4 == 5) {
      FUN_0086efc8(param_1,param_1 + 0xe,param_1 + 0x1c,param_1 + 0x2a,param_2 + -0xe);
      return true;
    }
  }
  FUN_0086ec7c(param_1,param_1 + 0xe,param_1 + 0x1c,param_3);
  if (param_1 + 0x2a != param_2) {
    lVar5 = 0;
    iVar8 = 0;
    plVar11 = param_1 + 0x2a;
    plVar12 = param_1 + 0x1c;
    do {
      plVar6 = plVar11;
      lVar7 = plVar6[9];
      if (lVar7 == plVar12[9]) {
        lVar9 = *plVar6;
        if (lVar9 == *plVar12) {
          if (plVar6[7] < plVar12[7]) {
LAB_0086ffc8:
            lVar16 = plVar6[6];
            lVar14 = plVar6[5];
            lVar20 = plVar6[4];
            lVar19 = plVar6[3];
            lVar23 = plVar6[2];
            lVar21 = plVar6[1];
            lVar15 = plVar6[10];
            lVar10 = plVar6[7];
            uStack_c8 = (undefined5)plVar6[0xb];
            lVar25 = plVar12[7];
            lVar24 = plVar12[6];
            lVar22 = plVar12[9];
            lVar3 = plVar12[8];
            uStack_bb = (undefined3)*(undefined8 *)((long)plVar6 + 0x65);
            uStack_b8 = (undefined5)((ulong)*(undefined8 *)((long)plVar6 + 0x65) >> 0x18);
            uStack_c3 = (undefined3)*(undefined8 *)((long)plVar6 + 0x5d);
            uStack_c0 = (undefined5)((ulong)*(undefined8 *)((long)plVar6 + 0x5d) >> 0x18);
            lVar18 = plVar12[10];
            lVar17 = plVar12[0xd];
            lVar13 = plVar12[0xc];
            plVar6[0xb] = plVar12[0xb];
            plVar6[10] = lVar18;
            plVar6[0xd] = lVar17;
            plVar6[0xc] = lVar13;
            lVar18 = plVar6[8];
            lVar17 = plVar6[7];
            plVar6[7] = lVar25;
            plVar6[6] = lVar24;
            plVar6[9] = lVar22;
            plVar6[8] = lVar3;
            lVar22 = plVar12[2];
            lVar3 = plVar12[5];
            lVar13 = plVar12[4];
            lVar25 = plVar12[1];
            lVar24 = *plVar12;
            plVar6[3] = plVar12[3];
            plVar6[2] = lVar22;
            plVar6[5] = lVar3;
            plVar6[4] = lVar13;
            plVar6[1] = lVar25;
            *plVar6 = lVar24;
            plVar11 = param_1;
            lVar13 = lVar5;
            if (plVar12 != param_1) {
              do {
                lVar3 = *(long *)((long)param_1 + lVar13 + 0xb8);
                plVar11 = plVar12;
                if (lVar7 == lVar3) {
                  lVar3 = *(long *)((long)param_1 + lVar13 + 0x70);
                  if (lVar9 == lVar3) {
                    if (*(long *)((long)param_1 + lVar13 + 0xa8) <= lVar10) break;
                  }
                  else if (lVar3 <= lVar9) {
                    plVar11 = (long *)((long)param_1 + lVar13 + 0xe0);
                    break;
                  }
                }
                else if (lVar3 <= lVar7) break;
                lVar3 = lVar13 + -0x70;
                plVar12 = plVar12 + -0xe;
                *(undefined8 *)((long)param_1 + lVar13 + 0x128) =
                     *(undefined8 *)((long)param_1 + lVar13 + 0xb8);
                *(undefined8 *)((long)param_1 + lVar13 + 0x120) =
                     *(undefined8 *)((long)param_1 + lVar13 + 0xb0);
                *(undefined8 *)((long)param_1 + lVar13 + 0x138) =
                     *(undefined8 *)((long)param_1 + lVar13 + 200);
                *(undefined8 *)((long)param_1 + lVar13 + 0x130) =
                     *(undefined8 *)((long)param_1 + lVar13 + 0xc0);
                *(undefined8 *)((long)param_1 + lVar13 + 0x148) =
                     *(undefined8 *)((long)param_1 + lVar13 + 0xd8);
                *(undefined8 *)((long)param_1 + lVar13 + 0x140) =
                     *(undefined8 *)((long)param_1 + lVar13 + 0xd0);
                *(undefined8 *)((long)param_1 + lVar13 + 0xe8) =
                     *(undefined8 *)((long)param_1 + lVar13 + 0x78);
                *(undefined8 *)((long)param_1 + lVar13 + 0xe0) =
                     *(undefined8 *)((long)param_1 + lVar13 + 0x70);
                *(undefined8 *)((long)param_1 + lVar13 + 0xf8) =
                     *(undefined8 *)((long)param_1 + lVar13 + 0x88);
                *(undefined8 *)((long)param_1 + lVar13 + 0xf0) =
                     *(undefined8 *)((long)param_1 + lVar13 + 0x80);
                *(undefined8 *)((long)param_1 + lVar13 + 0x108) =
                     *(undefined8 *)((long)param_1 + lVar13 + 0x98);
                *(undefined8 *)((long)param_1 + lVar13 + 0x100) =
                     *(undefined8 *)((long)param_1 + lVar13 + 0x90);
                *(undefined8 *)((long)param_1 + lVar13 + 0x118) =
                     *(undefined8 *)((long)param_1 + lVar13 + 0xa8);
                *(undefined8 *)((long)param_1 + lVar13 + 0x110) =
                     *(undefined8 *)((long)param_1 + lVar13 + 0xa0);
                plVar11 = param_1;
                lVar13 = lVar3;
              } while (lVar3 != -0xe0);
            }
            *plVar11 = lVar9;
            iVar8 = iVar8 + 1;
            plVar11[8] = lVar18;
            plVar11[7] = lVar17;
            plVar11[9] = lVar7;
            plVar11[4] = lVar20;
            plVar11[3] = lVar19;
            plVar11[2] = lVar23;
            plVar11[1] = lVar21;
            plVar11[6] = lVar16;
            plVar11[5] = lVar14;
            plVar11[0xb] = CONCAT35(uStack_c3,uStack_c8);
            plVar11[10] = lVar15;
            plVar11[0xd] = CONCAT17(0xaa,CONCAT25(0xaaaa,uStack_b8));
            plVar11[0xc] = CONCAT35(uStack_bb,uStack_c0);
            if (iVar8 == 8) {
              return plVar6 + 0xe == param_2;
            }
          }
        }
        else if (lVar9 < *plVar12) goto LAB_0086ffc8;
      }
      else if (lVar7 < plVar12[9]) {
        lVar9 = *plVar6;
        goto LAB_0086ffc8;
      }
      lVar5 = lVar5 + 0x70;
      plVar11 = plVar6 + 0xe;
      plVar12 = plVar6;
    } while (plVar6 + 0xe != param_2);
  }
  return true;
}


// ===== 008702e0  FUN_008702e0 =====

long * FUN_008702e0(long *param_1,long *param_2,long *param_3,undefined8 param_4)

{
  ulong uVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  undefined5 uStack_78;
  undefined3 local_73;
  undefined5 uStack_70;
  undefined3 uStack_6b;
  undefined5 uStack_68;
  
  if (param_1 != param_2) {
    lVar11 = ((long)param_2 - (long)param_1 >> 4) * 0x6db6db6db6db6db7;
    if (0x70 < (long)param_2 - (long)param_1) {
      uVar12 = lVar11 - 2U >> 1;
      do {
        FUN_008705f8(param_1,param_4,lVar11,uVar12);
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0xffffffffffffffff);
    }
    plVar6 = param_2;
    if (param_2 != param_3) {
      do {
        lVar4 = plVar6[9];
        lVar7 = param_1[9];
        bVar2 = SBORROW8(lVar4,lVar7);
        bVar3 = lVar4 - lVar7 < 0;
        if (lVar4 == lVar7) {
          lVar4 = *plVar6;
          lVar7 = *param_1;
          bVar2 = SBORROW8(lVar4,lVar7);
          bVar3 = lVar4 - lVar7 < 0;
          if (lVar4 == lVar7) {
            bVar2 = SBORROW8(plVar6[7],param_1[7]);
            bVar3 = plVar6[7] - param_1[7] < 0;
          }
        }
        if (bVar3 != bVar2) {
          lVar15 = plVar6[9];
          lVar4 = plVar6[8];
          lVar18 = plVar6[10];
          uStack_78 = (undefined5)plVar6[0xb];
          lVar16 = plVar6[1];
          lVar7 = *plVar6;
          lVar21 = plVar6[3];
          lVar19 = plVar6[2];
          uStack_6b = (undefined3)*(undefined8 *)((long)plVar6 + 0x65);
          uStack_68 = (undefined5)((ulong)*(undefined8 *)((long)plVar6 + 0x65) >> 0x18);
          local_73 = (undefined3)*(undefined8 *)((long)plVar6 + 0x5d);
          uStack_70 = (undefined5)((ulong)*(undefined8 *)((long)plVar6 + 0x5d) >> 0x18);
          lVar13 = *param_1;
          lVar9 = param_1[3];
          lVar17 = param_1[2];
          lVar24 = param_1[5];
          lVar20 = param_1[4];
          lVar22 = param_1[7];
          lVar14 = param_1[6];
          plVar6[1] = param_1[1];
          *plVar6 = lVar13;
          plVar6[3] = lVar9;
          plVar6[2] = lVar17;
          lVar17 = plVar6[5];
          lVar13 = plVar6[4];
          lVar23 = plVar6[7];
          lVar10 = plVar6[6];
          plVar6[5] = lVar24;
          plVar6[4] = lVar20;
          plVar6[7] = lVar22;
          plVar6[6] = lVar14;
          lVar14 = param_1[10];
          lVar9 = param_1[0xd];
          lVar22 = param_1[0xc];
          lVar24 = param_1[9];
          lVar20 = param_1[8];
          plVar6[0xb] = param_1[0xb];
          plVar6[10] = lVar14;
          plVar6[0xd] = lVar9;
          plVar6[0xc] = lVar22;
          plVar6[9] = lVar24;
          plVar6[8] = lVar20;
          param_1[9] = lVar15;
          param_1[8] = lVar4;
          param_1[0xb] = CONCAT35(local_73,uStack_78);
          param_1[10] = lVar18;
          param_1[0xd] = CONCAT17(0xaa,CONCAT25(0xaaaa,uStack_68));
          param_1[0xc] = CONCAT35(uStack_6b,uStack_70);
          param_1[1] = lVar16;
          *param_1 = lVar7;
          param_1[3] = lVar21;
          param_1[2] = lVar19;
          param_1[5] = lVar17;
          param_1[4] = lVar13;
          param_1[7] = lVar23;
          param_1[6] = lVar10;
          FUN_008705f8(param_1,param_4,lVar11,0);
        }
        plVar6 = plVar6 + 0xe;
      } while (plVar6 != param_3);
    }
    param_3 = plVar6;
    if (0x70 < (long)param_2 - (long)param_1) {
      lVar11 = ((ulong)((long)param_2 - (long)param_1) >> 4) * 0x6db6db6db6db6db7;
      do {
        lVar14 = param_1[9];
        lVar4 = param_1[8];
        lVar17 = param_1[10];
        uStack_78 = (undefined5)param_1[0xb];
        lVar15 = param_1[1];
        lVar7 = *param_1;
        lVar19 = param_1[3];
        lVar18 = param_1[2];
        uStack_6b = (undefined3)*(undefined8 *)((long)param_1 + 0x65);
        uStack_68 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0x65) >> 0x18);
        local_73 = (undefined3)*(undefined8 *)((long)param_1 + 0x5d);
        uStack_70 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0x5d) >> 0x18);
        lVar21 = param_1[5];
        lVar22 = param_1[4];
        lVar16 = param_1[7];
        lVar13 = param_1[6];
        plVar6 = param_1;
        uVar12 = 0;
        do {
          uVar8 = uVar12 << 1 | 1;
          uVar1 = uVar12 * 2 + 2;
          plVar5 = plVar6 + uVar12 * 0xe + 0xe;
          if ((long)uVar1 < lVar11) {
            lVar9 = plVar6[uVar12 * 0xe + 0x17];
            lVar10 = plVar6[uVar12 * 0xe + 0x25];
            bVar2 = SBORROW8(lVar9,lVar10);
            bVar3 = lVar9 - lVar10 < 0;
            if (lVar9 == lVar10) {
              lVar9 = plVar6[uVar12 * 0xe + 0xe];
              lVar10 = plVar6[uVar12 * 0xe + 0x1c];
              bVar2 = SBORROW8(lVar9,lVar10);
              bVar3 = lVar9 - lVar10 < 0;
              if (lVar9 == lVar10) {
                bVar2 = SBORROW8(plVar6[uVar12 * 0xe + 0x15],plVar6[uVar12 * 0xe + 0x23]);
                bVar3 = plVar6[uVar12 * 0xe + 0x15] - plVar6[uVar12 * 0xe + 0x23] < 0;
              }
            }
            if (bVar3 != bVar2) {
              plVar5 = plVar6 + uVar12 * 0xe + 0x1c;
              uVar8 = uVar1;
            }
          }
          lVar20 = plVar5[4];
          lVar10 = plVar5[7];
          lVar9 = plVar5[6];
          lVar24 = plVar5[1];
          lVar23 = *plVar5;
          lVar26 = plVar5[3];
          lVar25 = plVar5[2];
          plVar6[5] = plVar5[5];
          plVar6[4] = lVar20;
          plVar6[7] = lVar10;
          plVar6[6] = lVar9;
          plVar6[1] = lVar24;
          *plVar6 = lVar23;
          plVar6[3] = lVar26;
          plVar6[2] = lVar25;
          lVar23 = plVar5[0xb];
          lVar20 = plVar5[10];
          lVar10 = plVar5[0xd];
          lVar9 = plVar5[0xc];
          lVar24 = plVar5[8];
          plVar6[9] = plVar5[9];
          plVar6[8] = lVar24;
          plVar6[0xb] = lVar23;
          plVar6[10] = lVar20;
          plVar6[0xd] = lVar10;
          plVar6[0xc] = lVar9;
          plVar6 = plVar5;
          uVar12 = uVar8;
        } while ((long)uVar8 <= (long)(lVar11 - 2U >> 1));
        plVar6 = param_2 + -0xe;
        if (plVar5 == plVar6) {
          plVar5[5] = lVar21;
          plVar5[4] = lVar22;
          plVar5[7] = lVar16;
          plVar5[6] = lVar13;
          plVar5[1] = lVar15;
          *plVar5 = lVar7;
          plVar5[3] = lVar19;
          plVar5[2] = lVar18;
          plVar5[9] = lVar14;
          plVar5[8] = lVar4;
          plVar5[0xb] = CONCAT35(local_73,uStack_78);
          plVar5[10] = lVar17;
          plVar5[0xd] = CONCAT17(0xaa,CONCAT25(0xaaaa,uStack_68));
          plVar5[0xc] = CONCAT35(uStack_6b,uStack_70);
        }
        else {
          lVar20 = param_2[-10];
          lVar10 = param_2[-7];
          lVar9 = param_2[-8];
          lVar24 = param_2[-0xd];
          lVar23 = *plVar6;
          lVar26 = param_2[-0xb];
          lVar25 = param_2[-0xc];
          plVar5[5] = param_2[-9];
          plVar5[4] = lVar20;
          plVar5[7] = lVar10;
          plVar5[6] = lVar9;
          plVar5[1] = lVar24;
          *plVar5 = lVar23;
          plVar5[3] = lVar26;
          plVar5[2] = lVar25;
          lVar23 = param_2[-3];
          lVar20 = param_2[-4];
          lVar10 = param_2[-1];
          lVar9 = param_2[-2];
          lVar24 = param_2[-6];
          plVar5[9] = param_2[-5];
          plVar5[8] = lVar24;
          plVar5[0xb] = lVar23;
          plVar5[10] = lVar20;
          plVar5[0xd] = lVar10;
          plVar5[0xc] = lVar9;
          param_2[-5] = lVar14;
          param_2[-6] = lVar4;
          param_2[-3] = CONCAT35(local_73,uStack_78);
          param_2[-4] = lVar17;
          param_2[-1] = CONCAT17(0xaa,CONCAT25(0xaaaa,uStack_68));
          param_2[-2] = CONCAT35(uStack_6b,uStack_70);
          param_2[-0xd] = lVar15;
          *plVar6 = lVar7;
          param_2[-0xb] = lVar19;
          param_2[-0xc] = lVar18;
          param_2[-9] = lVar21;
          param_2[-10] = lVar22;
          param_2[-7] = lVar16;
          param_2[-8] = lVar13;
          FUN_00870820(param_1,plVar5 + 0xe,param_4,
                       ((long)(plVar5 + 0xe) - (long)param_1 >> 4) * 0x6db6db6db6db6db7);
        }
        bVar3 = 2 < lVar11;
        param_2 = plVar6;
        lVar11 = lVar11 + -1;
      } while (bVar3);
    }
  }
  return param_3;
}


// ===== 008705f8  FUN_008705f8 =====

void FUN_008705f8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  undefined5 uStack_48;
  undefined3 uStack_43;
  undefined5 uStack_40;
  undefined3 uStack_3b;
  undefined5 uStack_38;
  
  if ((1 < param_3) && (uVar7 = param_3 - 2U >> 1, param_4 <= (long)uVar7)) {
    uVar2 = param_4 << 1 | 1;
    uVar1 = param_4 * 2 + 2;
    uVar8 = uVar2;
    if ((long)uVar1 < param_3) {
      plVar10 = (long *)(param_1 + uVar2 * 0x70);
      plVar12 = (long *)(param_1 + uVar1 * 0x70);
      lVar14 = plVar10[9];
      lVar15 = plVar12[9];
      bVar3 = SBORROW8(lVar14,lVar15);
      bVar4 = lVar14 - lVar15 < 0;
      if (lVar14 == lVar15) {
        lVar14 = *plVar10;
        lVar15 = *plVar12;
        bVar3 = SBORROW8(lVar14,lVar15);
        bVar4 = lVar14 - lVar15 < 0;
        if (lVar14 == lVar15) {
          bVar3 = SBORROW8(plVar10[7],plVar12[7]);
          bVar4 = plVar10[7] - plVar12[7] < 0;
        }
      }
      uVar8 = uVar1;
      if (bVar4 == bVar3) {
        uVar8 = uVar2;
      }
    }
    plVar10 = (long *)(param_1 + uVar8 * 0x70);
    plVar12 = (long *)(param_1 + param_4 * 0x70);
    lVar14 = plVar12[9];
    if (plVar10[9] == lVar14) {
      lVar11 = *plVar10;
      lVar15 = *plVar12;
      if (lVar11 == lVar15) {
        lVar15 = lVar11;
        if (plVar12[7] <= plVar10[7]) {
LAB_008706c4:
          lVar18 = plVar12[2];
          lVar16 = plVar12[1];
          lVar21 = plVar12[4];
          lVar20 = plVar12[3];
          lVar25 = plVar12[6];
          lVar22 = plVar12[5];
          lVar30 = plVar10[5];
          lVar29 = plVar10[4];
          lVar32 = plVar10[7];
          lVar31 = plVar10[6];
          lVar5 = *plVar10;
          lVar19 = plVar10[3];
          lVar17 = plVar10[2];
          lVar23 = plVar12[10];
          lVar11 = plVar12[7];
          plVar12[1] = plVar10[1];
          *plVar12 = lVar5;
          uStack_48 = (undefined5)plVar12[0xb];
          lVar26 = plVar10[9];
          lVar24 = plVar10[8];
          lVar6 = plVar10[0xb];
          lVar5 = plVar10[10];
          uStack_3b = (undefined3)*(undefined8 *)((long)plVar12 + 0x65);
          uStack_38 = (undefined5)((ulong)*(undefined8 *)((long)plVar12 + 0x65) >> 0x18);
          uStack_43 = (undefined3)*(undefined8 *)((long)plVar12 + 0x5d);
          uStack_40 = (undefined5)((ulong)*(undefined8 *)((long)plVar12 + 0x5d) >> 0x18);
          lVar28 = plVar10[0xd];
          lVar27 = plVar10[0xc];
          plVar12[3] = lVar19;
          plVar12[2] = lVar17;
          plVar12[5] = lVar30;
          plVar12[4] = lVar29;
          lVar19 = plVar12[8];
          lVar17 = plVar12[7];
          plVar12[7] = lVar32;
          plVar12[6] = lVar31;
          plVar12[9] = lVar26;
          plVar12[8] = lVar24;
          plVar12[0xb] = lVar6;
          plVar12[10] = lVar5;
          plVar12[0xd] = lVar28;
          plVar12[0xc] = lVar27;
          while ((long)uVar8 <= (long)uVar7) {
            uVar2 = uVar8 << 1 | 1;
            uVar1 = uVar8 * 2 + 2;
            uVar9 = uVar2;
            if ((long)uVar1 < param_3) {
              plVar13 = (long *)(param_1 + uVar2 * 0x70);
              plVar12 = (long *)(param_1 + uVar1 * 0x70);
              lVar5 = plVar13[9];
              lVar6 = plVar12[9];
              bVar3 = SBORROW8(lVar5,lVar6);
              bVar4 = lVar5 - lVar6 < 0;
              if (lVar5 == lVar6) {
                lVar5 = *plVar13;
                lVar6 = *plVar12;
                bVar3 = SBORROW8(lVar5,lVar6);
                bVar4 = lVar5 - lVar6 < 0;
                if (lVar5 == lVar6) {
                  bVar3 = SBORROW8(plVar13[7],plVar12[7]);
                  bVar4 = plVar13[7] - plVar12[7] < 0;
                }
              }
              uVar9 = uVar1;
              if (bVar4 == bVar3) {
                uVar9 = uVar2;
              }
            }
            plVar12 = (long *)(param_1 + uVar9 * 0x70);
            lVar5 = plVar12[9];
            bVar3 = SBORROW8(lVar5,lVar14);
            bVar4 = lVar5 - lVar14 < 0;
            if (lVar5 == lVar14) {
              lVar5 = *plVar12;
              bVar3 = SBORROW8(lVar5,lVar15);
              bVar4 = lVar5 - lVar15 < 0;
              if (lVar5 == lVar15) {
                bVar3 = SBORROW8(plVar12[7],lVar11);
                bVar4 = plVar12[7] - lVar11 < 0;
              }
            }
            if (bVar4 != bVar3) break;
            plVar10 = (long *)(param_1 + uVar8 * 0x70);
            lVar26 = plVar12[5];
            lVar24 = plVar12[4];
            lVar6 = plVar12[7];
            lVar5 = plVar12[6];
            lVar27 = *plVar12;
            lVar29 = plVar12[3];
            lVar28 = plVar12[2];
            plVar10[1] = plVar12[1];
            *plVar10 = lVar27;
            plVar10[3] = lVar29;
            plVar10[2] = lVar28;
            plVar10[5] = lVar26;
            plVar10[4] = lVar24;
            plVar10[7] = lVar6;
            plVar10[6] = lVar5;
            lVar26 = plVar12[0xb];
            lVar24 = plVar12[10];
            lVar6 = plVar12[0xd];
            lVar5 = plVar12[0xc];
            lVar27 = plVar12[8];
            plVar10[9] = plVar12[9];
            plVar10[8] = lVar27;
            plVar10[0xb] = lVar26;
            plVar10[10] = lVar24;
            plVar10[0xd] = lVar6;
            plVar10[0xc] = lVar5;
            plVar10 = plVar12;
            uVar8 = uVar9;
          }
          *plVar10 = lVar15;
          plVar10[8] = lVar19;
          plVar10[7] = lVar17;
          plVar10[9] = lVar14;
          plVar10[4] = lVar21;
          plVar10[3] = lVar20;
          plVar10[2] = lVar18;
          plVar10[1] = lVar16;
          plVar10[6] = lVar25;
          plVar10[5] = lVar22;
          plVar10[0xb] = CONCAT35(uStack_43,uStack_48);
          plVar10[10] = lVar23;
          plVar10[0xd] = CONCAT17(0xaa,CONCAT25(0xaaaa,uStack_38));
          plVar10[0xc] = CONCAT35(uStack_3b,uStack_40);
          return;
        }
      }
      else if (lVar15 <= lVar11) goto LAB_008706c4;
    }
    else if (lVar14 <= plVar10[9]) {
      lVar15 = *plVar12;
      goto LAB_008706c4;
    }
  }
  return;
}


// ===== 00870820  FUN_00870820 =====

void FUN_00870820(long param_1,long param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  undefined5 uStack_48;
  undefined3 uStack_43;
  undefined5 uStack_40;
  undefined3 uStack_3b;
  undefined5 uStack_38;
  
  if (1 < param_4) {
    uVar5 = param_4 - 2U >> 1;
    lVar4 = *(long *)(param_2 + -0x28);
    plVar7 = (long *)(param_2 + -0x70);
    plVar3 = (long *)(param_1 + uVar5 * 0x70);
    if (plVar3[9] == lVar4) {
      lVar6 = *plVar3;
      lVar8 = *plVar7;
      if (lVar6 == lVar8) {
        lVar8 = lVar6;
        if (plVar3[7] < *(long *)(param_2 + -0x38)) {
LAB_00870884:
          lVar12 = *(long *)(param_2 + -0x60);
          lVar10 = *(long *)(param_2 + -0x68);
          lVar16 = *(long *)(param_2 + -0x50);
          lVar14 = *(long *)(param_2 + -0x58);
          lVar20 = *(long *)(param_2 + -0x40);
          lVar18 = *(long *)(param_2 + -0x48);
          lVar15 = *(long *)(param_2 + -0x20);
          lVar13 = *(long *)(param_2 + -0x30);
          lVar11 = *(long *)(param_2 + -0x38);
          lVar6 = *(long *)(param_2 + -0x38);
          lVar25 = plVar3[0xd];
          lVar24 = plVar3[0xc];
          uStack_48 = (undefined5)*(undefined8 *)(param_2 + -0x18);
          lVar9 = plVar3[8];
          lVar21 = plVar3[0xb];
          lVar19 = plVar3[10];
          uStack_3b = (undefined3)*(undefined8 *)(param_2 + -0xb);
          uStack_38 = (undefined5)((ulong)*(undefined8 *)(param_2 + -0xb) >> 0x18);
          uStack_43 = (undefined3)*(undefined8 *)(param_2 + -0x13);
          uStack_40 = (undefined5)((ulong)*(undefined8 *)(param_2 + -0x13) >> 0x18);
          *(long *)(param_2 + -0x28) = plVar3[9];
          *(long *)(param_2 + -0x30) = lVar9;
          lVar23 = plVar3[1];
          lVar22 = *plVar3;
          lVar17 = plVar3[3];
          lVar9 = plVar3[2];
          lVar27 = plVar3[5];
          lVar26 = plVar3[4];
          lVar29 = plVar3[7];
          lVar28 = plVar3[6];
          *(long *)(param_2 + -0x18) = lVar21;
          *(long *)(param_2 + -0x20) = lVar19;
          *(long *)(param_2 + -8) = lVar25;
          *(long *)(param_2 + -0x10) = lVar24;
          *(long *)(param_2 + -0x68) = lVar23;
          *plVar7 = lVar22;
          *(long *)(param_2 + -0x58) = lVar17;
          *(long *)(param_2 + -0x60) = lVar9;
          *(long *)(param_2 + -0x48) = lVar27;
          *(long *)(param_2 + -0x50) = lVar26;
          *(long *)(param_2 + -0x38) = lVar29;
          *(long *)(param_2 + -0x40) = lVar28;
          while (uVar5 != 0) {
            uVar5 = uVar5 - 1 >> 1;
            plVar7 = (long *)(param_1 + uVar5 * 0x70);
            lVar9 = plVar7[9];
            bVar1 = SBORROW8(lVar9,lVar4);
            bVar2 = lVar9 - lVar4 < 0;
            if (lVar9 == lVar4) {
              lVar9 = *plVar7;
              bVar1 = SBORROW8(lVar9,lVar8);
              bVar2 = lVar9 - lVar8 < 0;
              if (lVar9 == lVar8) {
                bVar1 = SBORROW8(plVar7[7],lVar6);
                bVar2 = plVar7[7] - lVar6 < 0;
              }
            }
            if (bVar2 == bVar1) break;
            lVar19 = plVar7[4];
            lVar17 = plVar7[7];
            lVar9 = plVar7[6];
            lVar22 = plVar7[1];
            lVar21 = *plVar7;
            lVar24 = plVar7[3];
            lVar23 = plVar7[2];
            plVar3[5] = plVar7[5];
            plVar3[4] = lVar19;
            plVar3[7] = lVar17;
            plVar3[6] = lVar9;
            plVar3[1] = lVar22;
            *plVar3 = lVar21;
            plVar3[3] = lVar24;
            plVar3[2] = lVar23;
            lVar21 = plVar7[0xb];
            lVar19 = plVar7[10];
            lVar17 = plVar7[0xd];
            lVar9 = plVar7[0xc];
            lVar22 = plVar7[8];
            plVar3[9] = plVar7[9];
            plVar3[8] = lVar22;
            plVar3[0xb] = lVar21;
            plVar3[10] = lVar19;
            plVar3[0xd] = lVar17;
            plVar3[0xc] = lVar9;
            plVar3 = plVar7;
          }
          *plVar3 = lVar8;
          plVar3[8] = lVar13;
          plVar3[7] = lVar11;
          plVar3[9] = lVar4;
          plVar3[4] = lVar16;
          plVar3[3] = lVar14;
          plVar3[2] = lVar12;
          plVar3[1] = lVar10;
          plVar3[6] = lVar20;
          plVar3[5] = lVar18;
          plVar3[0xb] = CONCAT35(uStack_43,uStack_48);
          plVar3[10] = lVar15;
          plVar3[0xd] = CONCAT17(0xaa,CONCAT25(0xaaaa,uStack_38));
          plVar3[0xc] = CONCAT35(uStack_3b,uStack_40);
          return;
        }
      }
      else if (lVar6 < lVar8) goto LAB_00870884;
    }
    else if (plVar3[9] < lVar4) {
      lVar8 = *plVar7;
      goto LAB_00870884;
    }
  }
  return;
}


// ===== 00870980  FUN_00870980 =====

void FUN_00870980(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00870998  FUN_00870998 =====

void FUN_00870998(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  return;
}


// ===== 008709b4  FUN_008709b4 =====

void FUN_008709b4(long param_1)

{
  FUN_008709c0(param_1 + 8);
  return;
}


// ===== 008709c0  FUN_008709c0 =====

void FUN_008709c0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  puVar9 = (undefined8 *)param_1[1];
  puVar2 = (undefined8 *)param_1[2];
  if (puVar9 != puVar2) {
    uVar5 = param_1[4];
    plVar3 = puVar9 + uVar5 / 0x155;
    lVar6 = *plVar3;
    lVar4 = lVar6 + (uVar5 % 0x155) * 0xc;
    while (lVar4 != puVar9[(param_1[5] + uVar5) / 0x155] + ((param_1[5] + uVar5) % 0x155) * 0xc) {
      if (lVar4 == 0) goto LAB_00870b5c;
      lVar4 = lVar4 + 0xc;
      if (lVar4 - lVar6 == 0xffc) {
        plVar3 = plVar3 + 1;
        lVar6 = *plVar3;
        lVar4 = lVar6;
      }
    }
  }
  param_1[5] = 0;
  lVar4 = (long)puVar2 - (long)puVar9;
  while (uVar5 = lVar4 >> 3, 2 < uVar5) {
    operator_delete((void *)*puVar9);
    puVar2 = (undefined8 *)param_1[2];
    puVar9 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = puVar9;
    lVar4 = (long)puVar2 - (long)puVar9;
  }
  if (uVar5 == 1) {
    uVar1 = 0xaa;
  }
  else {
    if (uVar5 != 2) goto LAB_00870ad4;
    uVar1 = 0x155;
  }
  param_1[4] = uVar1;
LAB_00870ad4:
  puVar8 = puVar2;
  if (puVar9 != puVar2) {
    do {
      puVar8 = puVar9 + 1;
      operator_delete((void *)*puVar9);
      puVar9 = puVar8;
    } while (puVar8 != puVar2);
    puVar2 = (undefined8 *)param_1[1];
    puVar8 = (undefined8 *)param_1[2];
  }
  uVar7 = (ulong)((long)puVar8 + (-8 - ((long)puVar8 << 0x3d))) >> 3;
  uVar5 = (ulong)(((long)puVar2 - (long)puVar8 << 0x3d) - ((long)puVar2 - (long)puVar8)) >> 3;
  if (uVar7 <= uVar5) {
    uVar5 = uVar7;
  }
  if ((1 < uVar5) && ((((int)puVar2 - (int)puVar8 | -(int)puVar8) & 7U) == 0)) {
    uVar5 = uVar5 & 0x1ffffffffffffffe;
    puVar8 = puVar8 + -uVar5;
    do {
      uVar5 = uVar5 - 2;
    } while (uVar5 != 0);
  }
  do {
    if (puVar8 == puVar2) {
      param_1[2] = puVar8;
      if ((void *)*param_1 != (void *)0x0) {
        operator_delete((void *)*param_1);
        return;
      }
      return;
    }
    puVar8 = puVar8 + -1;
  } while (puVar8 != (undefined8 *)0x0);
LAB_00870b5c:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00870bac  FUN_00870bac =====

void FUN_00870bac(long *param_1,ushort param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  ushort uVar3;
  int iVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ushort *puVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  ushort *puVar14;
  ushort *puVar15;
  long lVar16;
  ulong uVar17;
  ushort *puVar18;
  long lVar19;
  long lVar20;
  ushort local_4c [2];
  undefined8 local_48;
  
  lVar16 = param_1[6];
  local_4c[0] = param_2;
  local_48 = param_3;
  if (lVar16 == 0) goto LAB_00870f4c;
  uVar17 = param_1[5];
  lVar9 = param_1[2];
  plVar11 = (long *)(lVar9 + (uVar17 / 0x155) * 8);
  puVar14 = (ushort *)*plVar11;
  puVar10 = puVar14 + (uVar17 % 0x155) * 6;
  uVar1 = (uint)param_2;
  uVar3 = *puVar10;
  iVar4 = (int)(short)(param_2 - uVar3);
  bVar5 = uVar3 < uVar1;
  if (uVar1 - uVar3 != 0x8000) {
    bVar5 = iVar4 != -1 && iVar4 + 1 < 0 == SCARRY4(iVar4,1);
  }
  if (bVar5) {
    uVar12 = (lVar16 + uVar17) - 1;
    uVar3 = *(ushort *)(*(long *)(lVar9 + (uVar12 / 0x155) * 8) + (uVar12 % 0x155) * 0xc);
    iVar4 = (int)(short)(uVar3 - param_2);
    bVar5 = (uint)param_2 <= (uint)uVar3 && (uint)uVar3 != (uint)param_2;
    if (uVar3 - uVar1 != 0x8000) {
      bVar5 = iVar4 != -1 && iVar4 + 1 < 0 == SCARRY4(iVar4,1);
    }
    if (bVar5) {
      uVar17 = FUN_004022fc();
      if ((uVar17 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../modules/rtp_rtcp/source/rtp_sequence_number_map.cc",0x192,
                     "Sequence number wrapped-around unexpectedly.");
      }
      puVar2 = (undefined8 *)param_1[2];
      if (puVar2 != (undefined8 *)param_1[3]) {
        uVar17 = param_1[5];
        plVar11 = puVar2 + uVar17 / 0x155;
        lVar9 = *plVar11;
        lVar16 = lVar9 + (uVar17 % 0x155) * 0xc;
        while (lVar16 != puVar2[(param_1[6] + uVar17) / 0x155] +
                         ((param_1[6] + uVar17) % 0x155) * 0xc) {
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
          lVar16 = lVar16 + 0xc;
          if (lVar16 - lVar9 == 0xffc) {
            plVar11 = plVar11 + 1;
            lVar9 = *plVar11;
            lVar16 = lVar9;
          }
        }
      }
      param_1[6] = 0;
      lVar16 = param_1[3] - (long)puVar2;
      while (uVar17 = lVar16 >> 3, 2 < uVar17) {
        operator_delete((void *)*puVar2);
        puVar2 = (undefined8 *)(param_1[2] + 8);
        param_1[2] = (long)puVar2;
        lVar16 = param_1[3] - (long)puVar2;
      }
      if (uVar17 == 1) {
        param_1[5] = 0xaa;
      }
      else if (uVar17 == 2) {
        param_1[5] = 0x155;
      }
      goto LAB_00870f4c;
    }
  }
  lVar13 = param_1[3];
  puVar15 = (ushort *)0x0;
  if (lVar9 != lVar13) {
    puVar15 = puVar10;
  }
  plVar6 = plVar11;
  if ((lVar16 == *param_1) && (lVar20 = lVar16 - ((ulong)(lVar16 * 3) >> 2), lVar20 != 0)) {
    uVar12 = lVar20 + ((long)puVar15 - (long)puVar14 >> 2) * -0x5555555555555555;
    if ((long)uVar12 < 1) {
      lVar20 = 0x154 - uVar12;
      lVar19 = SUB168(SEXT816(lVar20) * SEXT816(0x3fcff3fcff3fcff3),8) - lVar20;
      puVar14 = (ushort *)plVar11[(lVar19 >> 8) - (lVar19 >> 0x3f)];
      puVar15 = puVar14 + ((lVar20 / 0x155) * 0x155 - lVar20) * 6 + 0x7f8;
      plVar6 = plVar11 + ((lVar19 >> 8) - (lVar19 >> 0x3f));
    }
    else {
      puVar14 = (ushort *)plVar11[uVar12 / 0x155];
      puVar15 = puVar14 + (uVar12 % 0x155) * 6;
      plVar6 = plVar11 + uVar12 / 0x155;
    }
  }
  plVar7 = (long *)(lVar9 + ((uVar17 + lVar16) / 0x155) * 8);
  if (lVar9 == lVar13) {
    puVar18 = (ushort *)0x0;
    if (puVar15 != (ushort *)0x0) goto LAB_00870dd4;
  }
  else {
    puVar18 = (ushort *)(*plVar7 + ((uVar17 + lVar16) % 0x155) * 0xc);
    if (puVar15 != puVar18) {
LAB_00870dd4:
      uVar17 = ((long)plVar7 - (long)plVar6 >> 3) * 0x155 +
               ((long)puVar18 - *plVar7 >> 2) * -0x5555555555555555 +
               ((long)puVar15 - (long)puVar14 >> 2) * 0x5555555555555555;
      while (uVar12 = uVar17, uVar12 != 0) {
        uVar17 = uVar12 >> 1;
        plVar7 = plVar6;
        puVar18 = puVar15;
        if (uVar17 != 0) {
          uVar8 = uVar17 + ((long)puVar15 - (long)puVar14 >> 2) * -0x5555555555555555;
          if ((long)uVar8 < 1) {
            lVar16 = 0x154 - uVar8;
            lVar20 = SUB168(SEXT816(lVar16) * SEXT816(0x3fcff3fcff3fcff3),8) - lVar16;
            plVar7 = plVar6 + ((lVar20 >> 8) - (lVar20 >> 0x3f));
            puVar18 = (ushort *)(*plVar7 + ((lVar16 / 0x155) * 0x155 - lVar16) * 0xc + 0xff0);
          }
          else {
            plVar7 = plVar6 + uVar8 / 0x155;
            puVar18 = (ushort *)(*plVar7 + (uVar8 % 0x155) * 0xc);
          }
        }
        uVar3 = *puVar18;
        if (uVar3 != param_2) {
          iVar4 = (int)(short)(uVar3 - param_2);
          bVar5 = (uint)param_2 < (uint)uVar3;
          if (uVar3 - uVar1 != 0x8000) {
            bVar5 = iVar4 != -1 && iVar4 + 1 < 0 == SCARRY4(iVar4,1);
          }
          if (bVar5) {
            puVar15 = puVar18 + 6;
            puVar14 = (ushort *)*plVar7;
            if ((long)puVar15 - *plVar7 == 0xffc) {
              plVar7 = plVar7 + 1;
              puVar15 = (ushort *)*plVar7;
              puVar14 = puVar15;
            }
            uVar17 = uVar12 + ~uVar17;
            plVar6 = plVar7;
          }
        }
      }
    }
  }
  puVar14 = (ushort *)0x0;
  if (lVar9 != lVar13) {
    puVar14 = puVar10;
  }
  FUN_008711e8(param_1 + 1,plVar11,puVar14);
LAB_00870f4c:
  FUN_008710ac(param_1 + 1,local_4c,&local_48);
  return;
}


// ===== 008710ac  FUN_008710ac =====

long FUN_008710ac(long param_1,undefined2 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  long *plVar2;
  undefined2 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 8);
  lVar4 = *(long *)(param_1 + 0x10);
  lVar5 = 0;
  if (lVar4 != lVar7) {
    lVar5 = (lVar4 - lVar7 >> 3) * 0x155 + -1;
  }
  if (lVar5 == *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) {
    FUN_00871b4c(param_1);
    lVar7 = *(long *)(param_1 + 8);
    lVar4 = *(long *)(param_1 + 0x10);
  }
  if ((lVar7 != lVar4) &&
     (uVar1 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20),
     puVar3 = (undefined2 *)(*(long *)(lVar7 + (uVar1 / 0x155) * 8) + (uVar1 % 0x155) * 0xc),
     puVar3 != (undefined2 *)0x0)) {
    uVar6 = *param_3;
    *puVar3 = *param_2;
    *(undefined8 *)(puVar3 + 2) = uVar6;
    lVar5 = *(long *)(param_1 + 0x28) + 1;
    uVar1 = *(long *)(param_1 + 0x20) + lVar5;
    *(long *)(param_1 + 0x28) = lVar5;
    plVar2 = (long *)(*(long *)(param_1 + 8) + (uVar1 / 0x155) * 8);
    lVar7 = *plVar2;
    lVar5 = 0;
    if (*(long *)(param_1 + 8) != *(long *)(param_1 + 0x10)) {
      lVar5 = lVar7 + (uVar1 % 0x155) * 0xc;
    }
    if (lVar5 == lVar7) {
      lVar5 = plVar2[-1] + 0xffc;
    }
    return lVar5 + -0xc;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 008711e8  FUN_008711e8 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_008711e8(long param_1,long *param_2,ulong param_3,long *param_4,ulong param_5)

{
  long *plVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong *local_60;
  ulong local_58;
  
  if ((param_4 <= param_2) && ((param_2 != param_4 || (param_5 < param_3)))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/deque:2353: libc++ Hardening assertion __f <= __l failed: deque::erase(first, last) called with an invalid range\n"
              );
  }
  if (param_5 == param_3) {
    lVar13 = 0;
  }
  else {
    lVar13 = ((long)param_4 - (long)param_2 >> 3) * 0x155 +
             ((long)(param_5 - *param_4) >> 2) * -0x5555555555555555 +
             ((long)(param_3 - *param_2) >> 2) * 0x5555555555555555;
  }
  uVar4 = *(ulong *)(param_1 + 0x20);
  lVar5 = *(long *)(param_1 + 8);
  puVar3 = (ulong *)(lVar5 + (uVar4 / 0x155) * 8);
  puVar2 = puVar3;
  if (lVar5 == *(long *)(param_1 + 0x10)) {
    uVar11 = 0;
    if (param_3 != 0) goto LAB_008712c4;
LAB_00871358:
    uVar12 = 0;
    uVar7 = uVar11;
  }
  else {
    uVar11 = *puVar3 + (uVar4 % 0x155) * 0xc;
    if (param_3 == uVar11) goto LAB_00871358;
LAB_008712c4:
    lVar8 = (long)(uVar11 - *puVar3) >> 2;
    uVar12 = ((long)param_2 - (long)puVar3 >> 3) * 0x155 +
             ((long)(param_3 - *param_2) >> 2) * -0x5555555555555555 + lVar8 * 0x5555555555555555;
    uVar7 = uVar11;
    if (uVar12 != 0) {
      uVar7 = uVar12 + lVar8 * -0x5555555555555555;
      if ((long)uVar7 < 1) {
        lVar8 = 0x154 - uVar7;
        lVar10 = SUB168(SEXT816(lVar8) * SEXT816(0x3fcff3fcff3fcff3),8) - lVar8;
        puVar2 = puVar3 + ((lVar10 >> 8) - (lVar10 >> 0x3f));
        uVar7 = puVar3[(lVar10 >> 8) - (lVar10 >> 0x3f)] + ((lVar8 / 0x155) * 0x155 - lVar8) * 0xc +
                0xff0;
      }
      else {
        puVar2 = puVar3 + uVar7 / 0x155;
        uVar7 = puVar3[uVar7 / 0x155] + (uVar7 % 0x155) * 0xc;
      }
    }
  }
  if (lVar13 < 1) {
    return;
  }
  uVar9 = lVar13 + ((long)(uVar7 - *puVar2) >> 2) * -0x5555555555555555;
  if (uVar12 <= (ulong)(*(long *)(param_1 + 0x28) - lVar13) >> 1) {
    if ((long)uVar9 < 1) {
      lVar5 = 0x154 - uVar9;
      lVar8 = SUB168(SEXT816(lVar5) * SEXT816(0x3fcff3fcff3fcff3),8) - lVar5;
      local_60 = puVar2 + ((lVar8 >> 8) - (lVar8 >> 0x3f));
      local_58 = *local_60 + ((lVar5 / 0x155) * 0x155 - lVar5) * 0xc + 0xff0;
    }
    else {
      local_60 = puVar2 + uVar9 / 0x155;
      local_58 = *local_60 + (uVar9 % 0x155) * 0xc;
    }
    FUN_0087277c(puVar3,uVar11,puVar2,uVar7,&local_60);
    while( true ) {
      if (local_58 == uVar11) {
        uVar4 = *(long *)(param_1 + 0x20) + lVar13;
        puVar6 = *(undefined8 **)(param_1 + 8);
        *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) - lVar13;
        *(ulong *)(param_1 + 0x20) = uVar4;
        while (0x2a9 < uVar4) {
          operator_delete((void *)*puVar6);
          puVar6 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
          uVar4 = *(long *)(param_1 + 0x20) - 0x155;
          *(undefined8 **)(param_1 + 8) = puVar6;
          *(ulong *)(param_1 + 0x20) = uVar4;
        }
        return;
      }
      if (uVar11 == 0) break;
      uVar11 = uVar11 + 0xc;
      if (uVar11 - *puVar3 == 0xffc) {
        puVar3 = puVar3 + 1;
        uVar11 = *puVar3;
      }
    }
    goto LAB_00871894;
  }
  if ((long)uVar9 < 1) {
    lVar8 = 0x154 - uVar9;
    lVar10 = SUB168(SEXT816(lVar8) * SEXT816(0x3fcff3fcff3fcff3),8) - lVar8;
    puVar3 = puVar2 + ((lVar10 >> 8) - (lVar10 >> 0x3f));
    lVar8 = *puVar3 + ((lVar8 / 0x155) * 0x155 - lVar8) * 0xc + 0xff0;
  }
  else {
    puVar3 = puVar2 + uVar9 / 0x155;
    lVar8 = *puVar3 + (uVar9 % 0x155) * 0xc;
  }
  uVar4 = *(long *)(param_1 + 0x28) + uVar4;
  plVar1 = (long *)(lVar5 + (uVar4 / 0x155) * 8);
  if (lVar5 == *(long *)(param_1 + 0x10)) {
    lVar5 = 0;
  }
  else {
    lVar5 = *plVar1 + (uVar4 % 0x155) * 0xc;
  }
  local_60 = puVar2;
  local_58 = uVar7;
  FUN_00872a2c(puVar3,lVar8,plVar1,lVar5,&local_60);
  lVar5 = *(long *)(param_1 + 8);
  lVar8 = *(long *)(param_1 + 0x10);
  uVar4 = local_58;
  puVar3 = local_60;
  if (lVar5 == lVar8) {
    uVar11 = 0;
    if (local_58 != 0) goto LAB_008716cc;
  }
  else {
    uVar11 = *(long *)(param_1 + 0x20) + *(long *)(param_1 + 0x28);
    uVar11 = *(long *)(lVar5 + (uVar11 / 0x155) * 8) + (uVar11 % 0x155) * 0xc;
    if (local_58 != uVar11) {
LAB_008716cc:
      do {
        if (uVar4 == 0) goto LAB_00871894;
        uVar4 = uVar4 + 0xc;
        if (uVar4 - *puVar3 == 0xffc) {
          puVar3 = puVar3 + 1;
          uVar4 = *puVar3;
        }
      } while (uVar4 != uVar11);
    }
  }
  lVar13 = *(long *)(param_1 + 0x28) - lVar13;
  *(long *)(param_1 + 0x28) = lVar13;
  lVar10 = 0;
  if (lVar8 != lVar5) {
    lVar10 = (lVar8 - lVar5 >> 3) * 0x155 + -1;
  }
  uVar4 = lVar10 - (lVar13 + *(long *)(param_1 + 0x20));
  while( true ) {
    if (uVar4 < 0x2aa) {
      return;
    }
    operator_delete(*(void **)(lVar8 + -8));
    lVar8 = *(long *)(param_1 + 0x10) + -8;
    if (lVar8 == 0) break;
    *(long *)(param_1 + 0x10) = lVar8;
    lVar5 = lVar8 - *(long *)(param_1 + 8);
    lVar13 = 0;
    if (lVar5 != 0) {
      lVar13 = (lVar5 >> 3) * 0x155 + -1;
    }
    uVar4 = lVar13 - (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20));
  }
LAB_00871894:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 008718a8  FUN_008718a8 =====

undefined1  [16] FUN_008718a8(long param_1,short param_2)

{
  long lVar1;
  short sVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  short *psVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  short *psVar9;
  short *psVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  undefined1 auVar17 [16];
  
  lVar7 = *(long *)(param_1 + 0x30);
  if (lVar7 == 0) {
    return ZEXT816(0);
  }
  uVar8 = *(ulong *)(param_1 + 0x28);
  lVar1 = *(long *)(param_1 + 0x10);
  plVar11 = (long *)(lVar1 + (uVar8 / 0x155) * 8);
  psVar9 = (short *)*plVar11;
  psVar10 = psVar9 + (uVar8 % 0x155) * 6;
  if (lVar1 == *(long *)(param_1 + 0x18)) {
    psVar10 = (short *)0x0;
  }
  else {
    plVar15 = (long *)(lVar1 + ((uVar8 + lVar7) / 0x155) * 8);
    psVar5 = (short *)(*plVar15 + ((uVar8 + lVar7) % 0x155) * 0xc);
    if ((psVar10 != psVar5) &&
       (uVar6 = ((long)plVar15 - (long)plVar11 >> 3) * 0x155 +
                ((long)psVar10 - (long)psVar9 >> 2) * 0x5555555555555555 +
                ((long)psVar5 - *plVar15 >> 2) * -0x5555555555555555, uVar6 != 0)) {
      sVar2 = *psVar10;
      do {
        uVar12 = uVar6 >> 1;
        plVar15 = plVar11;
        psVar5 = psVar10;
        if (uVar12 != 0) {
          uVar13 = uVar12 + ((long)psVar10 - (long)psVar9 >> 2) * -0x5555555555555555;
          if ((long)uVar13 < 1) {
            lVar14 = 0x154 - uVar13;
            lVar16 = SUB168(SEXT816(lVar14) * SEXT816(0x3fcff3fcff3fcff3),8) - lVar14;
            plVar15 = plVar11 + ((lVar16 >> 8) - (lVar16 >> 0x3f));
            psVar5 = (short *)(*plVar15 + ((lVar14 / 0x155) * 0x155 - lVar14) * 0xc + 0xff0);
          }
          else {
            plVar15 = plVar11 + uVar13 / 0x155;
            psVar5 = (short *)(*plVar15 + (uVar13 % 0x155) * 0xc);
          }
        }
        if ((ushort)(*psVar5 - sVar2) < (ushort)(param_2 - sVar2)) {
          psVar10 = psVar5 + 6;
          psVar9 = (short *)*plVar15;
          plVar11 = plVar15;
          if ((long)psVar10 - *plVar15 == 0xffc) {
            plVar11 = plVar15 + 1;
            psVar10 = (short *)*plVar11;
            psVar9 = psVar10;
          }
          uVar12 = uVar6 + ~uVar12;
        }
        uVar6 = uVar12;
      } while (uVar6 != 0);
    }
  }
  if (lVar1 == *(long *)(param_1 + 0x18)) {
    if (psVar10 != (short *)0x0) goto LAB_00871b1c;
  }
  else if (psVar10 !=
           (short *)(*(long *)(lVar1 + ((uVar8 + lVar7) / 0x155) * 8) +
                    ((uVar8 + lVar7) % 0x155) * 0xc)) {
LAB_00871b1c:
    if (*psVar10 == param_2) {
      uVar3 = *(undefined8 *)(psVar10 + 2);
      uVar4 = 1;
      goto LAB_00871b3c;
    }
  }
  uVar4 = 0;
  uVar3 = 0;
LAB_00871b3c:
  auVar17._8_8_ = uVar4;
  auVar17._0_8_ = uVar3;
  return auVar17;
}


// ===== 00871b4c  FUN_00871b4c =====

void FUN_00871b4c(long *param_1)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  void *local_18;
  
  if ((ulong)param_1[4] < 0x155) {
    lVar2 = param_1[3];
    uVar6 = param_1[2] - param_1[1];
    uVar4 = lVar2 - *param_1;
    if (uVar4 <= uVar6) {
      uVar4 = (long)uVar4 >> 2;
      if (lVar2 == *param_1) {
        uVar4 = 1;
      }
      puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
      local_50 = &DAT_aaaaaaaaaaaaaaaa;
      local_40 = &DAT_aaaaaaaaaaaaaaaa;
      if (uVar4 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      local_50 = (undefined1 *)operator_new(uVar4 * 8);
      puStack_48 = local_50 + uVar6;
      puStack_38 = local_50 + uVar4 * 8;
      local_40 = puStack_48;
      local_18 = operator_new(0xffc);
      FUN_00871fbc(&local_50,&local_18);
      lVar2 = param_1[1];
      lVar5 = param_1[2];
      if (lVar5 != lVar2) {
        do {
          lVar5 = lVar5 + -8;
          FUN_008724e0(&local_50,lVar5);
          lVar2 = param_1[1];
        } while (lVar5 != lVar2);
        lVar5 = param_1[2];
      }
      puVar1 = (undefined1 *)*param_1;
      uVar6 = (lVar5 - (lVar5 << 0x3d)) - 8U >> 3;
      uVar4 = (ulong)((lVar2 - lVar5 << 0x3d) - (lVar2 - lVar5)) >> 3;
      lVar3 = param_1[3];
      param_1[1] = (long)puStack_48;
      *param_1 = (long)local_50;
      param_1[3] = (long)puStack_38;
      param_1[2] = (long)local_40;
      if (uVar6 <= uVar4) {
        uVar4 = uVar6;
      }
      local_40 = (undefined1 *)lVar5;
      if ((1 < uVar4) && ((((int)lVar2 - (int)lVar5 | -(int)lVar5) & 7U) == 0)) {
        uVar4 = uVar4 & 0x1ffffffffffffffe;
        local_40 = (undefined1 *)(lVar5 + uVar4 * -8);
        do {
          uVar4 = uVar4 - 2;
        } while (uVar4 != 0);
      }
      while (local_50 = puVar1, puStack_48 = (undefined1 *)lVar2, puStack_38 = (undefined1 *)lVar3,
            local_40 != (undefined1 *)lVar2) {
        local_40 = (undefined1 *)((long)local_40 + -8);
        if (local_40 == (undefined1 *)0x0) {
          local_40 = (undefined1 *)lVar5;
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      if (puVar1 == (undefined1 *)0x0) {
        return;
      }
      operator_delete(puVar1);
      return;
    }
    if (lVar2 != param_1[2]) {
      local_50 = (undefined1 *)operator_new(0xffc);
      FUN_00871fbc(param_1,&local_50);
      return;
    }
    local_50 = (undefined1 *)operator_new(0xffc);
    FUN_00872244(param_1,&local_50);
    local_50 = *(undefined1 **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  else {
    param_1[4] = param_1[4] - 0x155;
    local_50 = *(undefined1 **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  FUN_00871d34(param_1,&local_50);
  return;
}


// ===== 00871d34  FUN_00871d34 =====

void FUN_00871d34(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  undefined8 *__src;
  undefined8 *puVar3;
  void *pvVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  int iVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  puVar17 = (undefined8 *)param_1[2];
  if ((undefined8 *)param_1[3] == puVar17) {
    pvVar2 = (void *)*param_1;
    __src = (undefined8 *)param_1[1];
    if ((long)__src - (long)pvVar2 == 0) {
      uVar5 = (long)param_1[3] - (long)pvVar2 >> 2;
      if (puVar17 == __src) {
        uVar5 = 1;
      }
      if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      uVar18 = uVar5 >> 2;
      pvVar4 = operator_new(uVar5 * 8);
      puVar6 = (undefined8 *)((long)pvVar4 + uVar18 * 8);
      lVar15 = (long)puVar17 - (long)__src;
      iVar16 = (int)puVar17;
      puVar7 = puVar6;
      if (lVar15 != 0) {
        uVar13 = lVar15 - 8U >> 3;
        uVar11 = uVar13;
        if ((ulong)-(long)puVar6 >> 3 <= uVar13) {
          uVar11 = (ulong)-(long)puVar6 >> 3;
        }
        puVar7 = (undefined8 *)((long)puVar6 + lVar15);
        puVar8 = puVar6;
        puVar10 = __src;
        if (0x31 < uVar11) {
          if ((ulong)-(long)puVar6 >> 3 <= uVar13) {
            uVar13 = (ulong)-(long)puVar6 >> 3;
          }
          if ((((((iVar16 - (int)__src | -(int)pvVar4) & 7U) == 0) && (puVar6 <= puVar6 + uVar13))
              && (__src <= __src + uVar13)) && (0x1f < (long)pvVar4 + (uVar18 * 8 - (long)__src))) {
            uVar1 = uVar11 + 1 & 3;
            puVar14 = (undefined8 *)((long)pvVar4 + uVar18 * 8 + 0x10);
            uVar18 = 4;
            if (uVar1 != 0) {
              uVar18 = uVar1;
            }
            puVar12 = __src + 2;
            lVar9 = (uVar11 + 1) - uVar18;
            lVar15 = ~uVar13 + uVar18;
            puVar8 = puVar6 + lVar9;
            puVar10 = __src + lVar9;
            do {
              puVar3 = puVar12 + -1;
              uVar19 = puVar12[-2];
              uVar21 = puVar12[1];
              uVar20 = *puVar12;
              lVar15 = lVar15 + 4;
              puVar12 = puVar12 + 4;
              puVar14[-1] = *puVar3;
              puVar14[-2] = uVar19;
              puVar14[1] = uVar21;
              *puVar14 = uVar20;
              puVar14 = puVar14 + 4;
            } while (lVar15 != 0);
          }
        }
        do {
          if (puVar8 == (undefined8 *)0x0) goto LAB_00871fa4;
          puVar14 = puVar8 + 1;
          *puVar8 = *puVar10;
          puVar8 = puVar14;
          puVar10 = puVar10 + 1;
        } while (puVar14 != puVar7);
      }
      *param_1 = pvVar4;
      param_1[1] = puVar6;
      uVar11 = (ulong)((long)puVar17 + (-8 - ((long)puVar17 << 0x3d))) >> 3;
      uVar18 = (ulong)(((long)__src - (long)puVar17 << 0x3d) - ((long)__src - (long)puVar17)) >> 3;
      param_1[2] = puVar7;
      param_1[3] = (void *)((long)pvVar4 + uVar5 * 8);
      if (uVar11 <= uVar18) {
        uVar18 = uVar11;
      }
      puVar6 = puVar17;
      if ((1 < uVar18) && ((((int)__src - iVar16 | -iVar16) & 7U) == 0)) {
        uVar18 = uVar18 & 0x1ffffffffffffffe;
        puVar6 = puVar17 + -uVar18;
        do {
          uVar18 = uVar18 - 2;
        } while (uVar18 != 0);
      }
      while (puVar6 != __src) {
        puVar6 = puVar6 + -1;
        if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      if (__src != (undefined8 *)0x0) {
        operator_delete(pvVar2);
      }
    }
    else {
      lVar15 = ((long)__src - (long)pvVar2 >> 3) + 1;
      uVar5 = (ulong)(lVar15 - (lVar15 >> 0x3f)) >> 1;
      memmove(__src + -uVar5,__src,(long)puVar17 - (long)__src);
      puVar17 = puVar17 + -uVar5;
      param_1[1] = param_1[1] + uVar5 * -8;
      param_1[2] = puVar17;
    }
  }
  if (puVar17 != (undefined8 *)0x0) {
    *puVar17 = *param_2;
    param_1[2] = puVar17 + 1;
    return;
  }
LAB_00871fa4:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00871fbc  FUN_00871fbc =====

void FUN_00871fbc(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  undefined8 *__src;
  undefined8 *puVar3;
  void *pvVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  int iVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  puVar17 = (undefined8 *)param_1[2];
  if ((undefined8 *)param_1[3] == puVar17) {
    pvVar2 = (void *)*param_1;
    __src = (undefined8 *)param_1[1];
    if ((long)__src - (long)pvVar2 == 0) {
      uVar5 = (long)param_1[3] - (long)pvVar2 >> 2;
      if (puVar17 == __src) {
        uVar5 = 1;
      }
      if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      uVar18 = uVar5 >> 2;
      pvVar4 = operator_new(uVar5 * 8);
      puVar6 = (undefined8 *)((long)pvVar4 + uVar18 * 8);
      lVar15 = (long)puVar17 - (long)__src;
      iVar16 = (int)puVar17;
      puVar7 = puVar6;
      if (lVar15 != 0) {
        uVar13 = lVar15 - 8U >> 3;
        uVar11 = uVar13;
        if ((ulong)-(long)puVar6 >> 3 <= uVar13) {
          uVar11 = (ulong)-(long)puVar6 >> 3;
        }
        puVar7 = (undefined8 *)((long)puVar6 + lVar15);
        puVar8 = puVar6;
        puVar10 = __src;
        if (0x31 < uVar11) {
          if ((ulong)-(long)puVar6 >> 3 <= uVar13) {
            uVar13 = (ulong)-(long)puVar6 >> 3;
          }
          if ((((((iVar16 - (int)__src | -(int)pvVar4) & 7U) == 0) && (puVar6 <= puVar6 + uVar13))
              && (__src <= __src + uVar13)) && (0x1f < (long)pvVar4 + (uVar18 * 8 - (long)__src))) {
            uVar1 = uVar11 + 1 & 3;
            puVar14 = (undefined8 *)((long)pvVar4 + uVar18 * 8 + 0x10);
            uVar18 = 4;
            if (uVar1 != 0) {
              uVar18 = uVar1;
            }
            puVar12 = __src + 2;
            lVar9 = (uVar11 + 1) - uVar18;
            lVar15 = ~uVar13 + uVar18;
            puVar8 = puVar6 + lVar9;
            puVar10 = __src + lVar9;
            do {
              puVar3 = puVar12 + -1;
              uVar19 = puVar12[-2];
              uVar21 = puVar12[1];
              uVar20 = *puVar12;
              lVar15 = lVar15 + 4;
              puVar12 = puVar12 + 4;
              puVar14[-1] = *puVar3;
              puVar14[-2] = uVar19;
              puVar14[1] = uVar21;
              *puVar14 = uVar20;
              puVar14 = puVar14 + 4;
            } while (lVar15 != 0);
          }
        }
        do {
          if (puVar8 == (undefined8 *)0x0) goto LAB_0087222c;
          puVar14 = puVar8 + 1;
          *puVar8 = *puVar10;
          puVar8 = puVar14;
          puVar10 = puVar10 + 1;
        } while (puVar14 != puVar7);
      }
      *param_1 = pvVar4;
      param_1[1] = puVar6;
      uVar11 = (ulong)((long)puVar17 + (-8 - ((long)puVar17 << 0x3d))) >> 3;
      uVar18 = (ulong)(((long)__src - (long)puVar17 << 0x3d) - ((long)__src - (long)puVar17)) >> 3;
      param_1[2] = puVar7;
      param_1[3] = (void *)((long)pvVar4 + uVar5 * 8);
      if (uVar11 <= uVar18) {
        uVar18 = uVar11;
      }
      puVar6 = puVar17;
      if ((1 < uVar18) && ((((int)__src - iVar16 | -iVar16) & 7U) == 0)) {
        uVar18 = uVar18 & 0x1ffffffffffffffe;
        puVar6 = puVar17 + -uVar18;
        do {
          uVar18 = uVar18 - 2;
        } while (uVar18 != 0);
      }
      while (puVar6 != __src) {
        puVar6 = puVar6 + -1;
        if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      if (__src != (undefined8 *)0x0) {
        operator_delete(pvVar2);
      }
    }
    else {
      lVar15 = ((long)__src - (long)pvVar2 >> 3) + 1;
      uVar5 = (ulong)(lVar15 - (lVar15 >> 0x3f)) >> 1;
      memmove(__src + -uVar5,__src,(long)puVar17 - (long)__src);
      puVar17 = puVar17 + -uVar5;
      param_1[1] = param_1[1] + uVar5 * -8;
      param_1[2] = puVar17;
    }
  }
  if (puVar17 != (undefined8 *)0x0) {
    *puVar17 = *param_2;
    param_1[2] = puVar17 + 1;
    return;
  }
LAB_0087222c:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00872244  FUN_00872244 =====

void FUN_00872244(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  size_t __n;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined8 *__src;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  puVar4 = (undefined8 *)*param_1;
  __src = (undefined8 *)param_1[1];
  if (__src == puVar4) {
    puVar18 = (undefined8 *)param_1[2];
    lVar16 = param_1[3] - (long)puVar18;
    if (lVar16 == 0) {
      uVar7 = param_1[3] - (long)puVar4 >> 2;
      if (puVar18 == __src) {
        uVar7 = 1;
      }
      if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      uVar19 = uVar7 + 3 >> 2;
      pvVar6 = operator_new(uVar7 * 8);
      puVar1 = (undefined8 *)((long)pvVar6 + uVar19 * 8);
      lVar16 = (long)puVar18 - (long)__src;
      iVar17 = (int)puVar18;
      puVar8 = puVar1;
      if (lVar16 != 0) {
        uVar14 = lVar16 - 8U >> 3;
        uVar12 = uVar14;
        if ((ulong)-(long)puVar1 >> 3 <= uVar14) {
          uVar12 = (ulong)-(long)puVar1 >> 3;
        }
        puVar8 = (undefined8 *)((long)puVar1 + lVar16);
        puVar9 = puVar1;
        puVar11 = __src;
        if (0x31 < uVar12) {
          if ((ulong)-(long)puVar1 >> 3 <= uVar14) {
            uVar14 = (ulong)-(long)puVar1 >> 3;
          }
          if ((((((iVar17 - (int)__src | -(int)pvVar6) & 7U) == 0) && (puVar1 <= puVar1 + uVar14))
              && (__src <= __src + uVar14)) && (0x1f < (long)pvVar6 + (uVar19 * 8 - (long)__src))) {
            uVar2 = uVar12 + 1 & 3;
            puVar15 = (undefined8 *)((long)pvVar6 + uVar19 * 8 + 0x10);
            uVar19 = 4;
            if (uVar2 != 0) {
              uVar19 = uVar2;
            }
            puVar13 = __src + 2;
            lVar10 = (uVar12 + 1) - uVar19;
            lVar16 = ~uVar14 + uVar19;
            puVar9 = puVar1 + lVar10;
            puVar11 = __src + lVar10;
            do {
              puVar5 = puVar13 + -1;
              uVar20 = puVar13[-2];
              uVar22 = puVar13[1];
              uVar21 = *puVar13;
              lVar16 = lVar16 + 4;
              puVar13 = puVar13 + 4;
              puVar15[-1] = *puVar5;
              puVar15[-2] = uVar20;
              puVar15[1] = uVar22;
              *puVar15 = uVar21;
              puVar15 = puVar15 + 4;
            } while (lVar16 != 0);
          }
        }
        do {
          if (puVar9 == (undefined8 *)0x0) goto LAB_008724c8;
          puVar15 = puVar9 + 1;
          *puVar9 = *puVar11;
          puVar9 = puVar15;
          puVar11 = puVar11 + 1;
        } while (puVar15 != puVar8);
      }
      *param_1 = pvVar6;
      param_1[1] = puVar1;
      uVar12 = (ulong)((long)puVar18 + (-8 - ((long)puVar18 << 0x3d))) >> 3;
      uVar19 = (ulong)(((long)__src - (long)puVar18 << 0x3d) - ((long)__src - (long)puVar18)) >> 3;
      param_1[2] = puVar8;
      param_1[3] = (void *)((long)pvVar6 + uVar7 * 8);
      if (uVar12 <= uVar19) {
        uVar19 = uVar12;
      }
      if ((1 < uVar19) && ((((int)__src - iVar17 | -iVar17) & 7U) == 0)) {
        uVar19 = uVar19 & 0x1ffffffffffffffe;
        puVar18 = puVar18 + -uVar19;
        do {
          uVar19 = uVar19 - 2;
        } while (uVar19 != 0);
      }
      while (puVar18 != __src) {
        puVar18 = puVar18 + -1;
        if (puVar18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      bVar3 = __src != (undefined8 *)0x0;
      __src = puVar1;
      if (bVar3) {
        operator_delete(puVar4);
        __src = (undefined8 *)param_1[1];
      }
    }
    else {
      __n = (long)puVar18 - (long)__src;
      lVar16 = (lVar16 >> 3) + 1;
      puVar18 = puVar18 + ((ulong)(lVar16 - (lVar16 >> 0x3f)) >> 1);
      memmove((void *)((long)puVar18 - __n),__src,__n);
      param_1[1] = (undefined8 *)((long)puVar18 - __n);
      param_1[2] = puVar18;
      __src = (undefined8 *)((long)puVar18 - __n);
    }
  }
  if (__src + -1 != (undefined8 *)0x0) {
    __src[-1] = *param_2;
    param_1[1] = param_1[1] + -8;
    return;
  }
LAB_008724c8:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 008724e0  FUN_008724e0 =====

void FUN_008724e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  size_t __n;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined8 *__src;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  puVar4 = (undefined8 *)*param_1;
  __src = (undefined8 *)param_1[1];
  if (__src == puVar4) {
    puVar18 = (undefined8 *)param_1[2];
    lVar16 = param_1[3] - (long)puVar18;
    if (lVar16 == 0) {
      uVar7 = param_1[3] - (long)puVar4 >> 2;
      if (puVar18 == __src) {
        uVar7 = 1;
      }
      if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      uVar19 = uVar7 + 3 >> 2;
      pvVar6 = operator_new(uVar7 * 8);
      puVar1 = (undefined8 *)((long)pvVar6 + uVar19 * 8);
      lVar16 = (long)puVar18 - (long)__src;
      iVar17 = (int)puVar18;
      puVar8 = puVar1;
      if (lVar16 != 0) {
        uVar14 = lVar16 - 8U >> 3;
        uVar12 = uVar14;
        if ((ulong)-(long)puVar1 >> 3 <= uVar14) {
          uVar12 = (ulong)-(long)puVar1 >> 3;
        }
        puVar8 = (undefined8 *)((long)puVar1 + lVar16);
        puVar9 = puVar1;
        puVar11 = __src;
        if (0x31 < uVar12) {
          if ((ulong)-(long)puVar1 >> 3 <= uVar14) {
            uVar14 = (ulong)-(long)puVar1 >> 3;
          }
          if ((((((iVar17 - (int)__src | -(int)pvVar6) & 7U) == 0) && (puVar1 <= puVar1 + uVar14))
              && (__src <= __src + uVar14)) && (0x1f < (long)pvVar6 + (uVar19 * 8 - (long)__src))) {
            uVar2 = uVar12 + 1 & 3;
            puVar15 = (undefined8 *)((long)pvVar6 + uVar19 * 8 + 0x10);
            uVar19 = 4;
            if (uVar2 != 0) {
              uVar19 = uVar2;
            }
            puVar13 = __src + 2;
            lVar10 = (uVar12 + 1) - uVar19;
            lVar16 = ~uVar14 + uVar19;
            puVar9 = puVar1 + lVar10;
            puVar11 = __src + lVar10;
            do {
              puVar5 = puVar13 + -1;
              uVar20 = puVar13[-2];
              uVar22 = puVar13[1];
              uVar21 = *puVar13;
              lVar16 = lVar16 + 4;
              puVar13 = puVar13 + 4;
              puVar15[-1] = *puVar5;
              puVar15[-2] = uVar20;
              puVar15[1] = uVar22;
              *puVar15 = uVar21;
              puVar15 = puVar15 + 4;
            } while (lVar16 != 0);
          }
        }
        do {
          if (puVar9 == (undefined8 *)0x0) goto LAB_00872764;
          puVar15 = puVar9 + 1;
          *puVar9 = *puVar11;
          puVar9 = puVar15;
          puVar11 = puVar11 + 1;
        } while (puVar15 != puVar8);
      }
      *param_1 = pvVar6;
      param_1[1] = puVar1;
      uVar12 = (ulong)((long)puVar18 + (-8 - ((long)puVar18 << 0x3d))) >> 3;
      uVar19 = (ulong)(((long)__src - (long)puVar18 << 0x3d) - ((long)__src - (long)puVar18)) >> 3;
      param_1[2] = puVar8;
      param_1[3] = (void *)((long)pvVar6 + uVar7 * 8);
      if (uVar12 <= uVar19) {
        uVar19 = uVar12;
      }
      if ((1 < uVar19) && ((((int)__src - iVar17 | -iVar17) & 7U) == 0)) {
        uVar19 = uVar19 & 0x1ffffffffffffffe;
        puVar18 = puVar18 + -uVar19;
        do {
          uVar19 = uVar19 - 2;
        } while (uVar19 != 0);
      }
      while (puVar18 != __src) {
        puVar18 = puVar18 + -1;
        if (puVar18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      bVar3 = __src != (undefined8 *)0x0;
      __src = puVar1;
      if (bVar3) {
        operator_delete(puVar4);
        __src = (undefined8 *)param_1[1];
      }
    }
    else {
      __n = (long)puVar18 - (long)__src;
      lVar16 = (lVar16 >> 3) + 1;
      puVar18 = puVar18 + ((ulong)(lVar16 - (lVar16 >> 0x3f)) >> 1);
      memmove((void *)((long)puVar18 - __n),__src,__n);
      param_1[1] = (undefined8 *)((long)puVar18 - __n);
      param_1[2] = puVar18;
      __src = (undefined8 *)((long)puVar18 - __n);
    }
  }
  if (__src + -1 != (undefined8 *)0x0) {
    __src[-1] = *param_2;
    param_1[1] = param_1[1] + -8;
    return;
  }
LAB_00872764:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0087277c  FUN_0087277c =====

void FUN_0087277c(long *param_1,void *param_2,long *param_3,void *param_4,undefined8 *param_5)

{
  long lVar1;
  long lVar2;
  void *__dest;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  
  plVar3 = (long *)*param_5;
  __dest = (void *)param_5[1];
  if (param_1 == param_3) {
    if (param_2 == param_4) goto LAB_00872a08;
    lVar1 = *plVar3;
    while( true ) {
      lVar2 = ((long)__dest - lVar1 >> 2) * -0x5555555555555555;
      lVar1 = ((long)param_4 - (long)param_2 >> 2) * -0x5555555555555555;
      if (lVar2 <= lVar1) {
        lVar1 = lVar2;
      }
      param_4 = (void *)((long)param_4 + lVar1 * -0xc);
      __dest = (void *)((long)__dest + lVar1 * -0xc);
      memmove(__dest,param_4,lVar1 * 0xc);
      if (param_2 == param_4) break;
      plVar3 = plVar3 + -1;
      lVar1 = *plVar3;
      __dest = (void *)(lVar1 + 0xffc);
    }
  }
  else {
    pvVar4 = (void *)*param_3;
    if (pvVar4 != param_4) {
      lVar1 = *plVar3;
      while( true ) {
        lVar2 = ((long)__dest - lVar1 >> 2) * -0x5555555555555555;
        lVar1 = ((long)param_4 - (long)pvVar4 >> 2) * -0x5555555555555555;
        if (lVar2 <= lVar1) {
          lVar1 = lVar2;
        }
        param_4 = (void *)((long)param_4 + lVar1 * -0xc);
        __dest = (void *)((long)__dest + lVar1 * -0xc);
        memmove(__dest,param_4,lVar1 * 0xc);
        if (pvVar4 == param_4) break;
        plVar3 = plVar3 + -1;
        lVar1 = *plVar3;
        __dest = (void *)(lVar1 + 0xffc);
      }
      if ((plVar3 != (long *)0x0) && (__dest == (void *)(*plVar3 + 0xffc))) {
        plVar3 = plVar3 + 1;
        __dest = (void *)*plVar3;
      }
    }
    *param_5 = plVar3;
    param_5[1] = __dest;
    for (param_3 = param_3 + -1; param_1 != param_3; param_3 = param_3 + -1) {
      pvVar5 = (void *)*param_3;
      lVar1 = *plVar3;
      pvVar4 = (void *)((long)pvVar5 + 0xffc);
      while( true ) {
        lVar2 = ((long)__dest - lVar1 >> 2) * -0x5555555555555555;
        lVar1 = ((long)pvVar4 - (long)pvVar5 >> 2) * -0x5555555555555555;
        if (lVar2 <= lVar1) {
          lVar1 = lVar2;
        }
        pvVar4 = (void *)((long)pvVar4 + lVar1 * -0xc);
        __dest = (void *)((long)__dest + lVar1 * -0xc);
        memmove(__dest,pvVar4,lVar1 * 0xc);
        if (pvVar5 == pvVar4) break;
        plVar3 = plVar3 + -1;
        lVar1 = *plVar3;
        __dest = (void *)(lVar1 + 0xffc);
      }
      if ((plVar3 != (long *)0x0) && (__dest == (void *)(*plVar3 + 0xffc))) {
        plVar3 = plVar3 + 1;
        __dest = (void *)*plVar3;
      }
      *param_5 = plVar3;
      param_5[1] = __dest;
    }
    pvVar4 = (void *)(*param_3 + 0xffc);
    if (param_2 == pvVar4) goto LAB_00872a08;
    lVar1 = *plVar3;
    while( true ) {
      lVar2 = ((long)__dest - lVar1 >> 2) * -0x5555555555555555;
      lVar1 = ((long)pvVar4 - (long)param_2 >> 2) * -0x5555555555555555;
      if (lVar2 <= lVar1) {
        lVar1 = lVar2;
      }
      pvVar4 = (void *)((long)pvVar4 + lVar1 * -0xc);
      __dest = (void *)((long)__dest + lVar1 * -0xc);
      memmove(__dest,pvVar4,lVar1 * 0xc);
      if (param_2 == pvVar4) break;
      plVar3 = plVar3 + -1;
      lVar1 = *plVar3;
      __dest = (void *)(lVar1 + 0xffc);
    }
  }
  if ((plVar3 != (long *)0x0) && (__dest == (void *)(*plVar3 + 0xffc))) {
    plVar3 = plVar3 + 1;
    __dest = (void *)*plVar3;
  }
LAB_00872a08:
  *param_5 = plVar3;
  param_5[1] = __dest;
  return;
}


// ===== 00872a2c  FUN_00872a2c =====

void FUN_00872a2c(long *param_1,void *param_2,long *param_3,void *param_4,undefined8 *param_5)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  void *pvVar4;
  long lVar5;
  void *pvVar6;
  void *pvVar7;
  void *__dest;
  size_t sVar8;
  
  if (param_1 == param_3) {
    plVar3 = (long *)*param_5;
    __dest = (void *)param_5[1];
    if (param_2 == param_4) goto LAB_00872cbc;
    pvVar7 = (void *)*plVar3;
    plVar2 = plVar3;
    while( true ) {
      plVar2 = plVar2 + 1;
      lVar5 = ((long)param_4 - (long)param_2 >> 2) * -0x5555555555555555;
      lVar1 = ((long)pvVar7 + (0xffc - (long)__dest) >> 2) * -0x5555555555555555;
      if (lVar1 <= lVar5) {
        lVar5 = lVar1;
      }
      sVar8 = lVar5 * 0xc;
      memmove(__dest,param_2,sVar8);
      if (param_4 == (void *)((long)param_2 + sVar8)) break;
      pvVar7 = (void *)*plVar2;
      param_2 = (void *)((long)param_2 + sVar8);
      __dest = pvVar7;
    }
  }
  else {
    pvVar7 = (void *)(*param_1 + 0xffc);
    plVar2 = (long *)*param_5;
    __dest = (void *)param_5[1];
    if (param_2 != pvVar7) {
      pvVar4 = (void *)*plVar2;
      while( true ) {
        plVar3 = plVar2 + 1;
        lVar5 = ((long)pvVar7 - (long)param_2 >> 2) * -0x5555555555555555;
        lVar1 = ((long)pvVar4 + (0xffc - (long)__dest) >> 2) * -0x5555555555555555;
        if (lVar1 <= lVar5) {
          lVar5 = lVar1;
        }
        sVar8 = lVar5 * 0xc;
        memmove(__dest,param_2,sVar8);
        if (pvVar7 == (void *)((long)param_2 + sVar8)) break;
        pvVar4 = (void *)*plVar3;
        param_2 = (void *)((long)param_2 + sVar8);
        __dest = pvVar4;
        plVar2 = plVar3;
      }
      __dest = (void *)((long)__dest + sVar8);
      if ((plVar2 != (long *)0x0) && (__dest == (void *)(*plVar2 + 0xffc))) {
        __dest = (void *)*plVar3;
        plVar2 = plVar3;
      }
    }
    *param_5 = plVar2;
    param_5[1] = __dest;
    for (param_1 = param_1 + 1; param_1 != param_3; param_1 = param_1 + 1) {
      pvVar6 = (void *)*plVar2;
      pvVar7 = (void *)(*param_1 + 0xffc);
      pvVar4 = (void *)*param_1;
      while( true ) {
        plVar3 = plVar2 + 1;
        lVar5 = ((long)pvVar7 - (long)pvVar4 >> 2) * -0x5555555555555555;
        lVar1 = ((long)pvVar6 + (0xffc - (long)__dest) >> 2) * -0x5555555555555555;
        if (lVar1 <= lVar5) {
          lVar5 = lVar1;
        }
        sVar8 = lVar5 * 0xc;
        memmove(__dest,pvVar4,sVar8);
        if (pvVar7 == (void *)((long)pvVar4 + sVar8)) break;
        pvVar6 = (void *)*plVar3;
        pvVar4 = (void *)((long)pvVar4 + sVar8);
        __dest = pvVar6;
        plVar2 = plVar3;
      }
      __dest = (void *)((long)__dest + sVar8);
      if ((plVar2 != (long *)0x0) && (__dest == (void *)(*plVar2 + 0xffc))) {
        __dest = (void *)*plVar3;
        plVar2 = plVar3;
      }
      *param_5 = plVar2;
      param_5[1] = __dest;
    }
    plVar3 = plVar2;
    if ((void *)*param_1 == param_4) goto LAB_00872cbc;
    pvVar4 = (void *)*plVar2;
    pvVar7 = (void *)*param_1;
    while( true ) {
      plVar2 = plVar2 + 1;
      lVar5 = ((long)param_4 - (long)pvVar7 >> 2) * -0x5555555555555555;
      lVar1 = ((long)pvVar4 + (0xffc - (long)__dest) >> 2) * -0x5555555555555555;
      if (lVar1 <= lVar5) {
        lVar5 = lVar1;
      }
      sVar8 = lVar5 * 0xc;
      memmove(__dest,pvVar7,sVar8);
      if (param_4 == (void *)((long)pvVar7 + sVar8)) break;
      pvVar4 = (void *)*plVar2;
      pvVar7 = (void *)((long)pvVar7 + sVar8);
      __dest = pvVar4;
    }
  }
  plVar3 = plVar2 + -1;
  __dest = (void *)((long)__dest + sVar8);
  if ((plVar3 != (long *)0x0) && (__dest == (void *)(*plVar3 + 0xffc))) {
    __dest = (void *)*plVar2;
    plVar3 = plVar2;
  }
LAB_00872cbc:
  *param_5 = plVar3;
  param_5[1] = __dest;
  return;
}


// ===== 00872ce0  FUN_00872ce0 =====

void FUN_00872ce0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 param_5,undefined4 param_6)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_00d3ac18;
  param_1[1] = param_2;
  uVar1 = *param_4;
  *param_4 = 0;
  *(undefined4 *)(param_1 + 4) = param_6;
  param_1[2] = uVar1;
  param_1[3] = param_5;
  param_1[5] = param_3;
  *(undefined1 *)(param_1 + 6) = 0;
  return;
}


// ===== 00872d0c  FUN_00872d0c =====

void FUN_00872d0c(long *param_1)

{
  long *plVar1;
  long *local_28;
  
  plVar1 = (long *)param_1[2];
  local_28 = param_1;
  if (param_1 != (long *)0x0) {
    (**(code **)*param_1)(param_1);
  }
  (**(code **)(*plVar1 + 0x30))(plVar1,&local_28,(int)param_1[4]);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 8))();
  }
  return;
}


// ===== 00872d80  FUN_00872d80 =====

void FUN_00872d80(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x10) + 0x40))
            (*(long **)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x20));
  if (*(long **)(param_1 + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x10) + 8))();
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}


// ===== 00872dd0  FUN_00872dd0 =====

void FUN_00872dd0(long param_1,void *param_2)

{
  long *plVar1;
  void *pvVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  if (*(char *)(param_1 + 0x30) == '\x01') {
    plVar1 = *(long **)(param_1 + 8);
    UNRECOVERED_JUMPTABLE = *(code **)*plVar1;
    pvVar2 = param_2;
  }
  else {
    plVar1 = *(long **)(param_1 + 0x10);
    pvVar2 = operator_new(0x738);
    FUN_00873608(pvVar2,param_2,*(undefined4 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 8));
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x20);
  }
                    /* WARNING: Could not recover jumptable at 0x00872e4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,pvVar2);
  return;
}


// ===== 00872e50  FUN_00872e50 =====

void FUN_00872e50(undefined8 *param_1,undefined8 param_2)

{
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined8 *local_40;
  undefined8 uStack_38;
  code *local_30;
  code *pcStack_28;
  
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1);
  }
  local_30 = FUN_00874214;
  pcStack_28 = FUN_008741fc;
  local_40 = param_1;
  uStack_38 = param_2;
  (**(code **)(*(long *)param_1[3] + 8))((long *)param_1[3],&local_40,&uStack_41,&uStack_42);
  (*local_30)(0,&local_40,&local_40);
  return;
}


// ===== 00872edc  FUN_00872edc =====

void FUN_00872edc(undefined8 *param_1)

{
  undefined8 *local_40 [2];
  code *local_30;
  code *pcStack_28;
  undefined1 uStack_2;
  undefined1 uStack_1;
  
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1);
  }
  local_30 = FUN_008742b8;
  pcStack_28 = FUN_008742a4;
  local_40[0] = param_1;
  (**(code **)(*(long *)param_1[3] + 8))((long *)param_1[3],local_40,&uStack_1,&uStack_2);
  (*local_30)(0,local_40,local_40);
  return;
}


// ===== 00872f64  FUN_00872f64 =====

void FUN_00872f64(long param_1,long *param_2)

{
  long lVar1;
  void *pvVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  void *pvVar13;
  void *pvVar14;
  void *pvVar15;
  long lVar16;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong uVar17;
  void *pvVar18;
  void *pvVar19;
  void *pvVar20;
  undefined1 auVar21 [16];
  long *local_fa8;
  undefined1 *local_fa0;
  undefined4 local_f98;
  undefined2 local_f94;
  long *local_f90;
  void *local_f88;
  undefined1 auStack_f80 [167];
  undefined1 local_ed9;
  undefined1 auStack_ea8 [1760];
  undefined1 auStack_7c8 [56];
  undefined1 auStack_790 [40];
  byte local_768;
  void *local_760;
  byte local_738;
  void *local_730;
  undefined1 auStack_700 [1640];
  byte local_98;
  void *local_88;
  void *local_80;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 8) == 0) {
LAB_00872ff0:
    if (param_2 != (long *)0x0) {
      if (*(long *)(lVar1 + 0x28) == local_70) {
                    /* WARNING: Could not recover jumptable at 0x00873030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_2 + 8))(param_2);
        return;
      }
      goto LAB_008734bc;
    }
  }
  else {
    iVar5 = (**(code **)(*param_2 + 0x60))(param_2);
    if (iVar5 == 1) {
      lVar16 = param_2[1];
      param_2[1] = 0;
      puVar11 = *(undefined8 **)(param_1 + 8);
      if ((undefined8 *)param_2[0xe6] != puVar11) {
        *(undefined2 *)(lVar16 + 0x11e4) = *(undefined2 *)(lVar16 + 0x9e0);
        *(undefined2 *)(lVar16 + 0x11e6) = *(undefined2 *)(lVar16 + 0x9e0);
        puVar11 = *(undefined8 **)(param_1 + 8);
      }
      (**(code **)*puVar11)();
      goto LAB_00872ff0;
    }
    iVar5 = (**(code **)(*param_2 + 0x60))(param_2);
    if (iVar5 != 2) {
      uVar6 = (**(code **)(*param_2 + 0x60))(param_2);
                    /* WARNING: Subroutine does not return */
      FUN_0061fd88("../../modules/rtp_rtcp/source/rtp_video_stream_receiver_frame_transformer_delegate.cc"
                   ,0xdc,"frame->GetDirection() == TransformableFrameInterface::Direction::kSender",
                   &DAT_001fbedc,uVar6,2);
    }
    memset(auStack_790,0xaa,0x720);
    (**(code **)(*param_2 + 0xa8))(auStack_790,param_2);
    memcpy(auStack_f80,&DAT_0021fd30,0x7f0);
    FUN_007dcae0(auStack_f80,auStack_790);
    local_f94 = 0xaaff;
    local_f98 = 0xaaaaaaaa;
    local_fa0 = &DAT_aaaaaaaaaaaaaaaa;
    auVar21 = (**(code **)(*param_2 + 0x10))(param_2);
    uVar12 = (**(code **)(**(long **)(param_1 + 0x28) + 0x10))();
    if ((long)uVar12 < 0) {
      uVar17 = -(-uVar12 / 1000) - (ulong)(500 < -uVar12 % 1000);
    }
    else {
      uVar17 = uVar12 / 1000;
      if (499 < uVar12 % 1000) {
        uVar17 = uVar17 + 1;
      }
    }
    puVar11 = *(undefined8 **)(param_1 + 8);
    uVar6 = FUN_007de144(auStack_790);
    uVar7 = FUN_007de144(auStack_790);
    uVar8 = (**(code **)(*param_2 + 0x40))(param_2);
    uVar3 = (**(code **)(*param_2 + 0x20))(param_2);
    uVar9 = FUN_007de22c(auStack_790);
    uVar10 = FUN_007de114(auStack_790);
    uVar4 = FUN_007de12c(auStack_790);
    FUN_007bc67c(&local_fa8,auVar21._0_8_,auVar21._8_8_);
    pvVar13 = operator_new(0x1210);
    local_f90 = local_fa8;
    local_f88 = (void *)0x0;
    if ((extraout_x1 & 1) == 0) {
      uVar6 = 0;
    }
    if ((extraout_x1_00 & 1) == 0) {
      uVar7 = 0;
    }
    local_fa8 = (long *)0x0;
    FUN_0084f06c(pvVar13,uVar6,uVar7,local_ed9,0,uVar17,uVar17,uVar8,0,&local_fa0,uVar3,uVar9,uVar10
                 ,uVar4,auStack_f80,auStack_ea8,auStack_7c8,&local_f88,&local_f90);
    if (local_f90 != (long *)0x0) {
      (**(code **)(*local_f90 + 8))();
    }
    pvVar2 = local_f88;
    if ((local_f88 != (void *)0x0) && (iVar5 = FUN_00d0f7a0(0xffffffff,local_f88), iVar5 == 1)) {
      pvVar20 = *(void **)((long)pvVar2 + 8);
      if (pvVar20 != (void *)0x0) {
        pvVar15 = pvVar20;
        pvVar18 = *(void **)((long)pvVar2 + 0x10);
        if (pvVar20 != *(void **)((long)pvVar2 + 0x10)) {
          do {
            pvVar15 = (void *)((long)pvVar18 + -0x68);
            if (pvVar15 == (void *)0x0) goto LAB_008733e0;
            pvVar14 = *(void **)((long)pvVar18 + -0x60);
            if (pvVar14 != (void *)0x0) {
              pvVar19 = *(void **)((long)pvVar18 + -0x58);
              uVar17 = (ulong)((long)pvVar19 + (-4 - ((long)pvVar19 << 0x3e))) >> 2;
              uVar12 = (ulong)(((long)pvVar14 - (long)pvVar19 << 0x3e) -
                              ((long)pvVar14 - (long)pvVar19)) >> 2;
              if (uVar17 <= uVar12) {
                uVar12 = uVar17;
              }
              if ((1 < uVar12) && ((((int)pvVar14 - (int)pvVar19 | -(int)pvVar19) & 3U) == 0)) {
                uVar12 = uVar12 & 0x3ffffffffffffffe;
                pvVar19 = (void *)((long)pvVar19 + uVar12 * -4);
                do {
                  uVar12 = uVar12 - 2;
                } while (uVar12 != 0);
              }
              while (pvVar19 != pvVar14) {
                pvVar19 = (void *)((long)pvVar19 + -4);
                if (pvVar19 == (void *)0x0) goto LAB_008733e0;
              }
              *(void **)((long)pvVar18 + -0x58) = pvVar14;
              operator_delete(pvVar14);
            }
            pvVar18 = pvVar15;
          } while (pvVar20 != pvVar15);
          pvVar15 = *(void **)((long)pvVar2 + 8);
        }
        *(void **)((long)pvVar2 + 0x10) = pvVar20;
        operator_delete(pvVar15);
      }
      operator_delete(pvVar2);
    }
    (**(code **)*puVar11)(puVar11,pvVar13);
    if (local_fa8 != (long *)0x0) {
      (**(code **)(*local_fa8 + 8))();
    }
    FUN_007dd190(auStack_f80);
    if (local_88 != (void *)0x0) {
      uVar17 = (ulong)((long)local_80 + (-4 - ((long)local_80 << 0x3e))) >> 2;
      uVar12 = (ulong)(((long)local_88 - (long)local_80 << 0x3e) - ((long)local_88 - (long)local_80)
                      ) >> 2;
      if (uVar17 <= uVar12) {
        uVar12 = uVar17;
      }
      if ((1 < uVar12) && ((((int)local_88 - (int)local_80 | -(int)local_80) & 3U) == 0)) {
        uVar12 = uVar12 & 0x3ffffffffffffffe;
        local_80 = (void *)((long)local_80 + uVar12 * -4);
        do {
          uVar12 = uVar12 - 2;
        } while (uVar12 != 0);
      }
      while (local_80 != local_88) {
        local_80 = (void *)((long)local_80 + -4);
        if (local_80 == (void *)0x0) {
LAB_008733e0:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      local_80 = local_88;
      operator_delete(local_88);
    }
    if ((ulong)local_98 != 0xff) {
      (*(code *)(&PTR_FUN_00d3ac48)[local_98])(auStack_f80,auStack_700);
    }
    local_98 = 0xff;
    if ((local_738 & 1) != 0) {
      operator_delete(local_730);
    }
    if ((local_768 & 1) != 0) {
      operator_delete(local_760);
    }
    if (param_2 != (long *)0x0) {
      (**(code **)(*param_2 + 8))(param_2);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return;
  }
LAB_008734bc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 008734f8  FUN_008734f8 =====

void FUN_008734f8(long param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 uStack_1;
  
  pvVar1 = *(void **)(param_1 + 0x708);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = *(void **)(param_1 + 0x710);
    uVar4 = (ulong)((long)pvVar2 + (-4 - ((long)pvVar2 << 0x3e))) >> 2;
    uVar3 = (ulong)(((long)pvVar1 - (long)pvVar2 << 0x3e) - ((long)pvVar1 - (long)pvVar2)) >> 2;
    if (uVar4 <= uVar3) {
      uVar3 = uVar4;
    }
    if ((1 < uVar3) && ((((int)pvVar1 - (int)pvVar2 | -(int)pvVar2) & 3U) == 0)) {
      uVar3 = uVar3 & 0x3ffffffffffffffe;
      pvVar2 = (void *)((long)pvVar2 + uVar3 * -4);
      do {
        uVar3 = uVar3 - 2;
      } while (uVar3 != 0);
    }
    while (pvVar2 != pvVar1) {
      pvVar2 = (void *)((long)pvVar2 + -4);
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    *(void **)(param_1 + 0x710) = pvVar1;
    operator_delete(pvVar1);
  }
  if ((ulong)*(byte *)(param_1 + 0x6f8) != 0xff) {
    (*(code *)(&PTR_FUN_00d3ac48)[*(byte *)(param_1 + 0x6f8)])(&uStack_1,param_1 + 0x90);
  }
  *(undefined1 *)(param_1 + 0x6f8) = 0xff;
  if ((*(byte *)(param_1 + 0x58) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x60));
  }
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x30));
  }
  return;
}


// ===== 00873600  FUN_00873600 =====

void FUN_00873600(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x873608);
  (*pcVar1)();
}


// ===== 00873608  FUN_00873608 =====

void FUN_00873608(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  void *pvVar1;
  ulong uVar2;
  ulong uVar3;
  void *pvVar4;
  void *local_48;
  void *local_40;
  void *local_38;
  
  FUN_007dc8e8(param_1,0);
  *param_1 = &PTR_FUN_00d3ac78;
  param_1[1] = param_2;
  FUN_0084f840(param_2);
  FUN_007dd2d8(param_1 + 2);
  param_1[0xe6] = param_4;
  FUN_007de2ec(param_1 + 2,param_3);
  local_40 = (void *)0x0;
  local_38 = (void *)0x0;
  local_48 = (void *)0x0;
  pvVar4 = *(void **)(param_1[1] + 0x11f0);
  uVar2 = *(long *)(param_1[1] + 0x11f8) - (long)pvVar4;
  if (uVar2 != 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005da79c();
    }
    local_48 = operator_new(uVar2);
    pvVar1 = (void *)((long)local_48 + uVar2);
    local_38 = pvVar1;
    memcpy(local_48,pvVar4,uVar2);
    local_40 = pvVar1;
  }
  FUN_007de368(param_1 + 2,&local_48);
  if (local_48 != (void *)0x0) {
    uVar3 = (ulong)((long)local_40 + (-4 - ((long)local_40 << 0x3e))) >> 2;
    uVar2 = (ulong)(((long)local_48 - (long)local_40 << 0x3e) - ((long)local_48 - (long)local_40))
            >> 2;
    if (uVar3 <= uVar2) {
      uVar2 = uVar3;
    }
    pvVar4 = local_40;
    if ((1 < uVar2) && ((((int)local_48 - (int)local_40 | -(int)local_40) & 3U) == 0)) {
      uVar2 = uVar2 & 0x3ffffffffffffffe;
      pvVar4 = (void *)((long)local_40 + uVar2 * -4);
      do {
        uVar2 = uVar2 - 2;
      } while (uVar2 != 0);
    }
    while (pvVar4 != local_48) {
      pvVar4 = (void *)((long)pvVar4 + -4);
      if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    local_40 = local_48;
    operator_delete(local_48);
  }
  return;
}


// ===== 00873760  FUN_00873760 =====

void FUN_00873760(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_00d3ac78;
  FUN_008734f8(param_1 + 2);
  plVar1 = (long *)param_1[1];
  param_1[1] = 0;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x008737a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}


// ===== 008737b8  FUN_008737b8 =====

void FUN_008737b8(undefined8 *param_1)

{
  void *pvVar1;
  long *plVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 uStack_1;
  
  pvVar1 = (void *)param_1[0xe3];
  *param_1 = &PTR_FUN_00d3ac78;
  if (pvVar1 != (void *)0x0) {
    pvVar3 = (void *)param_1[0xe4];
    uVar5 = (ulong)((long)pvVar3 + (-4 - ((long)pvVar3 << 0x3e))) >> 2;
    uVar4 = (ulong)(((long)pvVar1 - (long)pvVar3 << 0x3e) - ((long)pvVar1 - (long)pvVar3)) >> 2;
    if (uVar5 <= uVar4) {
      uVar4 = uVar5;
    }
    if ((1 < uVar4) && ((((int)pvVar1 - (int)pvVar3 | -(int)pvVar3) & 3U) == 0)) {
      uVar4 = uVar4 & 0x3ffffffffffffffe;
      pvVar3 = (void *)((long)pvVar3 + uVar4 * -4);
      do {
        uVar4 = uVar4 - 2;
      } while (uVar4 != 0);
    }
    while (pvVar3 != pvVar1) {
      pvVar3 = (void *)((long)pvVar3 + -4);
      if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    param_1[0xe4] = pvVar1;
    operator_delete(pvVar1);
  }
  if ((ulong)*(byte *)(param_1 + 0xe1) != 0xff) {
    (*(code *)(&PTR_FUN_00d3ac48)[*(byte *)(param_1 + 0xe1)])(&uStack_1,param_1 + 0x14);
  }
  *(undefined1 *)(param_1 + 0xe1) = 0xff;
  if ((*(byte *)(param_1 + 0xd) & 1) != 0) {
    operator_delete((void *)param_1[0xe]);
  }
  if ((*(byte *)(param_1 + 7) & 1) != 0) {
    operator_delete((void *)param_1[8]);
  }
  plVar2 = (long *)param_1[1];
  param_1[1] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  operator_delete(param_1);
  return;
}


// ===== 008738f0  FUN_008738f0 =====

undefined1  [16] FUN_008738f0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  
  plVar4 = *(long **)(*(long *)(param_1 + 8) + 0x90);
  if (plVar4 != (long *)0x0) {
    (**(code **)*plVar4)(plVar4);
  }
  uVar2 = (**(code **)(*plVar4 + 0x20))(plVar4);
  lVar3 = (**(code **)(*plVar4 + 0x28))(plVar4);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  uVar1 = 0;
  if (lVar3 != 0) {
    uVar1 = uVar2;
  }
  auVar5._8_8_ = lVar3;
  auVar5._0_8_ = uVar1;
  return auVar5;
}


// ===== 0087397c  FUN_0087397c =====

void FUN_0087397c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long *local_28;
  
  lVar3 = *(long *)(param_1 + 8);
  FUN_007bc67c(&local_28,param_2,param_3);
  plVar1 = local_28;
  local_28 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)*plVar1)(plVar1);
  }
  if (*(long **)(lVar3 + 0x90) != (long *)0x0) {
    (**(code **)(**(long **)(lVar3 + 0x90) + 8))();
  }
  *(long **)(lVar3 + 0x90) = plVar1;
  uVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
  *(undefined8 *)(lVar3 + 0x98) = uVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1);
  }
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 8))();
  }
  return;
}


// ===== 00873a28  FUN_00873a28 =====

undefined1 FUN_00873a28(long param_1)

{
  return *(undefined1 *)(*(long *)(param_1 + 8) + 0x1c8);
}


// ===== 00873a38  FUN_00873a38 =====

undefined4 FUN_00873a38(long *param_1)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 uStack_759;
  undefined1 auStack_758 [40];
  byte local_730;
  void *local_728;
  byte local_700;
  void *local_6f8;
  undefined1 auStack_6c8 [1640];
  byte local_60;
  void *local_50;
  void *local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_1 + 0xa8))(auStack_758);
  uVar2 = FUN_007de2e0(auStack_758);
  if (local_50 != (void *)0x0) {
    uVar4 = (ulong)((long)local_48 + (-4 - ((long)local_48 << 0x3e))) >> 2;
    uVar3 = (ulong)(((long)local_50 - (long)local_48 << 0x3e) - ((long)local_50 - (long)local_48))
            >> 2;
    if (uVar4 <= uVar3) {
      uVar3 = uVar4;
    }
    if ((1 < uVar3) && ((((int)local_50 - (int)local_48 | -(int)local_48) & 3U) == 0)) {
      uVar3 = uVar3 & 0x3ffffffffffffffe;
      local_48 = (void *)((long)local_48 + uVar3 * -4);
      do {
        uVar3 = uVar3 - 2;
      } while (uVar3 != 0);
    }
    while (local_48 != local_50) {
      local_48 = (void *)((long)local_48 + -4);
      if (local_48 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    local_48 = local_50;
    operator_delete(local_50);
  }
  if ((ulong)local_60 != 0xff) {
    (*(code *)(&PTR_FUN_00d3ac48)[local_60])(&uStack_759,auStack_6c8);
  }
  local_60 = 0xff;
  if ((local_700 & 1) != 0) {
    operator_delete(local_6f8);
  }
  if ((local_730 & 1) != 0) {
    operator_delete(local_728);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00873b98  FUN_00873b98 =====

undefined4 FUN_00873b98(long param_1)

{
  return *(undefined4 *)(*(long *)(param_1 + 8) + 0xa0);
}


// ===== 00873ba8  FUN_00873ba8 =====

void FUN_00873ba8(long param_1,undefined4 param_2)

{
  *(undefined4 *)(*(long *)(param_1 + 8) + 0xa0) = param_2;
  return;
}


// ===== 00873bb8  FUN_00873bb8 =====

undefined8 FUN_00873bb8(void)

{
  return 1;
}


// ===== 00873bc4  FUN_00873bc4 =====

void FUN_00873bc4(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 *puVar2;
  char *__s;
  size_t sVar3;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined8 local_40;
  undefined1 uStack_31;
  
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_005d3510(&local_50,"video/");
  FUN_0084f808(*(undefined8 *)(param_2 + 8));
  __s = (char *)FUN_007b8c54();
  if (__s != (char *)0x0) {
    ppuVar1 = (undefined1 **)local_50;
    if (-1 < (long)local_40._7_1_) {
      ppuVar1 = &local_50;
    }
    puVar2 = puStack_48;
    if (-1 < (long)local_40) {
      puVar2 = (undefined1 *)(long)local_40._7_1_;
    }
    sVar3 = strlen(__s);
    FUN_005ff514(param_1,&uStack_31,ppuVar1,puVar2,__s,sVar3);
    if ((long)local_40 < 0) {
      operator_delete(local_50);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/string_view:278: libc++ Hardening assertion __s != nullptr failed: null pointer passed to non-null argument of char_traits<...>::length\n"
            );
}


// ===== 00873c94  FUN_00873c94 =====

void FUN_00873c94(long param_1)

{
  FUN_008500e4(*(undefined8 *)(param_1 + 8));
  return;
}


// ===== 00873cb8  FUN_00873cb8 =====

undefined1  [16] FUN_00873cb8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  lVar1 = FUN_0084f840(*(undefined8 *)(param_1 + 8));
  if ((*(char *)(lVar1 + 0x7b0) == '\x01') && (*(ulong *)(lVar1 + 0x798) != 0)) {
    uVar2 = 1;
    lVar1 = (long)((double)*(ulong *)(lVar1 + 0x798) * 0.00023283064365386963);
  }
  else {
    lVar1 = 0;
    uVar2 = 0;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = lVar1;
  return auVar3;
}


// ===== 00873d14  FUN_00873d14 =====

undefined1  [16] FUN_00873d14(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  lVar1 = FUN_0084f840(*(undefined8 *)(param_1 + 8));
  if ((*(char *)(lVar1 + 0x7b0) == '\x01') && (*(char *)(lVar1 + 0x7a8) == '\x01')) {
    uVar2 = 1;
    lVar1 = (long)((double)*(long *)(lVar1 + 0x7a0) * 0.00023283064365386963);
  }
  else {
    lVar1 = 0;
    uVar2 = 0;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = lVar1;
  return auVar3;
}


// ===== 00873d78  FUN_00873d78 =====

bool FUN_00873d78(long param_1)

{
  return *(int *)(*(long *)(param_1 + 8) + 0x20) == 3;
}


// ===== 00873d90  FUN_00873d90 =====

void FUN_00873d90(undefined8 param_1,long param_2)

{
  FUN_00873f58(param_1,param_2 + 0x10);
  return;
}


// ===== 00873da0  FUN_00873da0 =====

void FUN_00873da0(long *param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 uStack_769;
  undefined1 auStack_768 [40];
  byte local_740;
  void *local_738;
  byte local_710;
  void *local_708;
  undefined1 auStack_6d8 [1640];
  byte local_70;
  void *local_60;
  void *local_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  memset(auStack_768,0xaa,0x720);
  (**(code **)(*param_1 + 0xa8))(auStack_768,param_1);
  auVar4 = FUN_007de144(param_2);
  FUN_007de154(auStack_768,auVar4._0_8_,auVar4._8_8_ & 0xff);
  auVar4 = FUN_007de194(param_2);
  FUN_007de1b8(auStack_768,auVar4._0_8_,auVar4._8_8_);
  FUN_0084f84c(param_1[1],auStack_768);
  if (local_60 != (void *)0x0) {
    uVar3 = (ulong)((long)local_58 + (-4 - ((long)local_58 << 0x3e))) >> 2;
    uVar2 = (ulong)(((long)local_60 - (long)local_58 << 0x3e) - ((long)local_60 - (long)local_58))
            >> 2;
    if (uVar3 <= uVar2) {
      uVar2 = uVar3;
    }
    if ((1 < uVar2) && ((((int)local_60 - (int)local_58 | -(int)local_58) & 3U) == 0)) {
      uVar2 = uVar2 & 0x3ffffffffffffffe;
      local_58 = (void *)((long)local_58 + uVar2 * -4);
      do {
        uVar2 = uVar2 - 2;
      } while (uVar2 != 0);
    }
    while (local_58 != local_60) {
      local_58 = (void *)((long)local_58 + -4);
      if (local_58 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    local_58 = local_60;
    operator_delete(local_60);
  }
  if ((ulong)local_70 != 0xff) {
    (*(code *)(&PTR_FUN_00d3ac48)[local_70])(&uStack_769,auStack_6d8);
  }
  local_70 = 0xff;
  if ((local_710 & 1) != 0) {
    operator_delete(local_708);
  }
  if ((local_740 & 1) != 0) {
    operator_delete(local_738);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00873f58  FUN_00873f58 =====

void FUN_00873f58(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  byte bVar2;
  void *__dest;
  ulong uVar3;
  undefined8 uVar4;
  void *__src;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *local_38;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  uVar5 = param_2[3];
  uVar4 = param_2[2];
  param_1[4] = param_2[4];
  param_1[1] = uVar7;
  *param_1 = uVar6;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
  param_1[5] = 0;
  uVar3 = param_2[5];
  if (1 < uVar3) {
    if ((uVar3 & 1) == 0) {
      param_1[5] = uVar3;
      uVar7 = param_2[7];
      uVar6 = param_2[6];
      uVar5 = param_2[9];
      uVar4 = param_2[8];
      param_1[10] = param_2[10];
      param_1[7] = uVar7;
      param_1[6] = uVar6;
      param_1[9] = uVar5;
      param_1[8] = uVar4;
    }
    else {
      FUN_007ddd18();
    }
  }
  param_1[0xb] = 0;
  uVar3 = param_2[0xb];
  if (1 < uVar3) {
    if ((uVar3 & 1) == 0) {
      param_1[0xb] = uVar3;
      uVar7 = param_2[0xd];
      uVar6 = param_2[0xc];
      uVar5 = param_2[0xf];
      uVar4 = param_2[0xe];
      param_1[0x10] = param_2[0x10];
      param_1[0xd] = uVar7;
      param_1[0xc] = uVar6;
      param_1[0xf] = uVar5;
      param_1[0xe] = uVar4;
    }
    else {
      FUN_007ddc94();
    }
  }
  uVar4 = param_2[0x11];
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x11] = uVar4;
  *(undefined1 *)(param_1 + 0xdf) = 0xff;
  bVar2 = *(byte *)(param_2 + 0xdf);
  if ((ulong)bVar2 != 0xff) {
    local_38 = param_1 + 0x12;
    (*(code *)(&PTR_FUN_00d3ad30)[bVar2])(&local_38,param_2 + 0x12);
    *(byte *)(param_1 + 0xdf) = bVar2;
  }
  uVar1 = *(undefined4 *)(param_2 + 0xe0);
  param_1[0xe1] = 0;
  param_1[0xe3] = 0;
  *(undefined4 *)(param_1 + 0xe0) = uVar1;
  param_1[0xe2] = 0;
  __src = (void *)param_2[0xe1];
  uVar3 = param_2[0xe2] - (long)__src;
  if (uVar3 != 0) {
    if ((long)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005da79c();
    }
    __dest = operator_new(uVar3);
    param_1[0xe1] = __dest;
    param_1[0xe2] = __dest;
    param_1[0xe3] = (long)__dest + uVar3;
    memcpy(__dest,__src,uVar3);
    param_1[0xe2] = (long)__dest + uVar3;
  }
  return;
}


// ===== 008740a0  FUN_008740a0 =====

void FUN_008740a0(long *param_1)

{
  if (*param_1 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 008740d0  FUN_008740d0 =====

void FUN_008740d0(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_2[1];
    uVar2 = *param_2;
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 2);
    puVar1[1] = uVar3;
    *puVar1 = uVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00874110  FUN_00874110 =====

void FUN_00874110(undefined8 *param_1,void *param_2)

{
  if ((void *)*param_1 != (void *)0x0) {
    memcpy((void *)*param_1,param_2,0x668);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00874144  FUN_00874144 =====

void FUN_00874144(undefined8 *param_1,undefined8 *param_2)

{
  void *__src;
  ulong __n;
  void *__dest;
  undefined8 uVar1;
  
  param_1 = (undefined8 *)*param_1;
  if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  uVar1 = *param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = uVar1;
  param_1[1] = 0;
  __src = (void *)param_2[1];
  __n = param_2[2] - (long)__src;
  if (__n != 0) {
    if (0x1555555555555555 < (ulong)(((long)__n >> 2) * -0x5555555555555555)) {
                    /* WARNING: Subroutine does not return */
      FUN_007dd920();
    }
    __dest = operator_new(__n);
    param_1[1] = __dest;
    param_1[2] = __dest;
    param_1[3] = (long)__dest + __n;
    memcpy(__dest,__src,__n);
    param_1[2] = (long)__dest + __n;
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  return;
}


// ===== 008741fc  FUN_008741fc =====

void FUN_008741fc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1[1];
  param_1[1] = 0;
  FUN_00872f64(*param_1,uVar1);
  return;
}


// ===== 00874214  FUN_00874214 =====

void FUN_00874214(uint param_1,long *param_2,long *param_3)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  
  if ((param_1 & 0xff) - 1 < 2) {
    lVar3 = *param_2;
    *param_2 = 0;
    *param_3 = lVar3;
    lVar3 = param_2[1];
    param_2[1] = 0;
    param_3[1] = lVar3;
  }
  else if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x8742a4);
    (*pcVar1)();
  }
  plVar2 = (long *)param_2[1];
  param_2[1] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if ((long *)*param_2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0087428c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)*param_2 + 8))();
    return;
  }
  return;
}


// ===== 008742a4  FUN_008742a4 =====

void FUN_008742a4(long *param_1)

{
  *(undefined1 *)(*param_1 + 0x30) = 1;
  return;
}


// ===== 008742b8  FUN_008742b8 =====

void FUN_008742b8(uint param_1,long *param_2,long *param_3)

{
  code *pcVar1;
  long lVar2;
  
  if ((param_1 & 0xff) - 1 < 2) {
    lVar2 = *param_2;
    *param_2 = 0;
    *param_3 = lVar2;
  }
  else if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x8742fc);
    (*pcVar1)();
  }
  if ((long *)*param_2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x008742f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)*param_2 + 8))();
    return;
  }
  return;
}


// ===== 008742fc  FUN_008742fc =====

void FUN_008742fc(undefined8 *param_1,undefined8 param_2)

{
  param_1[7] = 0;
  *param_1 = param_2;
  param_1[1] = param_1 + 1;
  param_1[2] = param_1 + 1;
  *(undefined4 *)(param_1 + 8) = 0x3f800000;
  param_1[0x10] = FUN_00433984;
  param_1[0x11] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)((long)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[10] = 0;
  FUN_007ebca0(param_1 + 0x12);
  return;
}


// ===== 0087435c  FUN_0087435c =====

void FUN_0087435c(undefined8 *param_1,long *param_2,long param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  void *__dest;
  void *pvVar9;
  size_t sVar10;
  ulong uVar11;
  long *plVar12;
  uint *puVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  undefined4 *puVar18;
  void *__dest_00;
  void *pvVar19;
  ulong uVar20;
  uint *puVar21;
  void *pvVar22;
  undefined8 uVar23;
  long lVar24;
  char **local_a8;
  char *local_a0;
  char *pcStack_98;
  undefined8 local_90;
  code *local_80;
  code *pcStack_78;
  undefined1 uStack_62;
  undefined1 uStack_61;
  
  if (((DAT_00d803d0 & 1) == 0) && (iVar8 = FUN_0054fdd4(&DAT_00d803d0), iVar8 != 0)) {
    DAT_00d803c8 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00d803d0);
  }
  local_a8 = (char **)0x0;
  pcStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00d803c8 != '\0') {
    local_a8 = &local_a0;
    FUN_0066d348(0x42,DAT_00d803c8,"SourceTracker::OnFrameDelivered",0,0,0,0,0,0);
    local_a0 = DAT_00d803c8;
    pcStack_98 = "SourceTracker::OnFrameDelivered";
  }
  if (*param_2 == 0) {
    plVar12 = DAT_00d60288;
    if (((DAT_00d60290 & 1) == 0) &&
       (iVar8 = FUN_0054fdd4(&DAT_00d60290), plVar12 = DAT_00d60288, iVar8 != 0)) {
      DAT_00d60288 = (long *)operator_new(0x18);
      DAT_00d60288[1] = 0;
      DAT_00d60288[2] = 0;
      *DAT_00d60288 = 0;
      FUN_0054ff1c(&DAT_00d60290);
      plVar12 = DAT_00d60288;
    }
  }
  else {
    plVar12 = (long *)(*param_2 + 8);
  }
  if (*plVar12 != plVar12[1]) {
    if (param_3 + 0x8000000000000001U < 2) {
      param_3 = (**(code **)(*(long *)*param_1 + 0x10))();
    }
    pvVar9 = (void *)param_1[10];
    pvVar19 = (void *)param_1[0xb];
    uVar20 = param_1[9];
    uVar11 = (long)pvVar19 - (long)pvVar9;
    if (uVar11 == 0) {
      pvVar22 = (void *)0x0;
      __dest = (void *)0x0;
    }
    else {
      if ((long)uVar11 < 0) {
LAB_00874944:
                    /* WARNING: Subroutine does not return */
        FUN_005da79c();
      }
      __dest = operator_new(uVar11);
      pvVar22 = (void *)((long)__dest + uVar11);
      memcpy(__dest,pvVar9,uVar11);
    }
    uVar15 = (uint)(uVar20 >> 0x20) & 0xff;
    uVar16 = (ulong)((long)pvVar19 + (-4 - ((long)pvVar19 << 0x3e))) >> 2;
    uVar11 = (ulong)(((long)pvVar9 - (long)pvVar19 << 0x3e) - ((long)pvVar9 - (long)pvVar19)) >> 2;
    if (uVar16 <= uVar11) {
      uVar11 = uVar16;
    }
    if ((1 < uVar11) && ((((int)pvVar9 - (int)pvVar19 | -(int)pvVar19) & 3U) == 0)) {
      uVar11 = uVar11 & 0x3ffffffffffffffe;
      pvVar19 = (void *)((long)pvVar19 + uVar11 * -4);
      do {
        uVar11 = uVar11 - 2;
      } while (uVar11 != 0);
    }
    while (pvVar19 != pvVar9) {
      pvVar19 = (void *)((long)pvVar19 + -4);
      if (pvVar19 == (void *)0x0) goto LAB_008744f4;
    }
    param_1[0xb] = pvVar9;
    if (*param_2 == 0) {
      if (((DAT_00d60290 & 1) == 0) && (iVar8 = FUN_0054fdd4(&DAT_00d60290), iVar8 != 0)) {
        DAT_00d60288 = (long *)operator_new(0x18);
        DAT_00d60288[1] = 0;
        DAT_00d60288[2] = 0;
        *DAT_00d60288 = 0;
        FUN_0054ff1c(&DAT_00d60290);
      }
      puVar21 = (uint *)*DAT_00d60288;
      if (*param_2 == 0) {
        plVar12 = DAT_00d60288;
        if (((DAT_00d60290 & 1) == 0) &&
           (iVar8 = FUN_0054fdd4(&DAT_00d60290), plVar12 = DAT_00d60288, iVar8 != 0)) {
          DAT_00d60288 = (long *)operator_new(0x18);
          DAT_00d60288[1] = 0;
          DAT_00d60288[2] = 0;
          *DAT_00d60288 = 0;
          FUN_0054ff1c(&DAT_00d60290);
          plVar12 = DAT_00d60288;
        }
      }
      else {
        plVar12 = (long *)(*param_2 + 8);
      }
    }
    else {
      plVar12 = (long *)(*param_2 + 8);
      puVar21 = (uint *)*plVar12;
    }
    puVar13 = (uint *)plVar12[1];
    for (; puVar21 != puVar13; puVar21 = puVar21 + 0x1a) {
      puVar3 = *(undefined4 **)(puVar21 + 4);
      for (puVar1 = *(undefined4 **)(puVar21 + 2); puVar1 != puVar3; puVar1 = puVar1 + 1) {
        uVar5 = *puVar1;
        local_90 = (long *)CONCAT44(uVar5,1);
        plVar12 = (long *)FUN_008749ec(param_1,&local_90);
        puVar2 = (undefined4 *)param_1[0xb];
        if (puVar2 < (undefined4 *)param_1[0xc]) {
          if (puVar2 == (undefined4 *)0x0) {
LAB_00874880:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          puVar18 = puVar2 + 1;
          *puVar2 = uVar5;
        }
        else {
          lVar17 = (long)puVar2 - param_1[10];
          uVar11 = (lVar17 >> 2) + 1;
          if (uVar11 >> 0x3e != 0) goto LAB_00874944;
          uVar14 = (long)param_1[0xc] - param_1[10];
          uVar16 = (long)uVar14 >> 1;
          if (uVar16 <= uVar11) {
            uVar16 = uVar11;
          }
          if (0x7ffffffffffffffb < uVar14) {
            uVar16 = 0x3fffffffffffffff;
          }
          if (uVar16 == 0) {
            pvVar9 = (void *)0x0;
          }
          else {
            if (uVar16 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_005d55a4();
            }
            pvVar9 = operator_new(uVar16 << 2);
          }
          puVar2 = (undefined4 *)((long)pvVar9 + lVar17);
          if (puVar2 == (undefined4 *)0x0) goto LAB_00874880;
          puVar18 = puVar2 + 1;
          *puVar2 = uVar5;
          sVar10 = param_1[0xb] - (long)param_1[10];
          __dest_00 = (void *)((long)puVar2 - sVar10);
          memcpy(__dest_00,(void *)param_1[10],sVar10);
          pvVar19 = (void *)param_1[10];
          param_1[10] = __dest_00;
          param_1[0xb] = puVar18;
          param_1[0xc] = (void *)((long)pvVar9 + uVar16 * 4);
          if (pvVar19 != (void *)0x0) {
            operator_delete(pvVar19);
          }
        }
        param_1[0xb] = puVar18;
        *plVar12 = param_3;
        *(short *)(plVar12 + 1) = (short)puVar21[0xc];
        uVar23 = *(undefined8 *)((long)puVar21 + 0x41);
        lVar24 = *(long *)(puVar21 + 0x10);
        lVar17 = *(long *)(puVar21 + 0xe);
        *(undefined8 *)((long)plVar12 + 0x21) = *(undefined8 *)((long)puVar21 + 0x49);
        *(undefined8 *)((long)plVar12 + 0x19) = uVar23;
        plVar12[3] = lVar24;
        plVar12[2] = lVar17;
        lVar17 = *(long *)(puVar21 + 0x16);
        *(char *)(plVar12 + 7) = (char)puVar21[0x18];
        plVar12[6] = lVar17;
        *(uint *)(plVar12 + 8) = puVar21[8];
      }
      local_90 = (long *)((ulong)*puVar21 << 0x20);
      plVar12 = (long *)FUN_008749ec(param_1,&local_90);
      uVar4 = *puVar21;
      *(undefined1 *)((long)param_1 + 0x4c) = 1;
      *(uint *)(param_1 + 9) = uVar4;
      *plVar12 = param_3;
      *(short *)(plVar12 + 1) = (short)puVar21[0xc];
      uVar23 = *(undefined8 *)((long)puVar21 + 0x41);
      lVar24 = *(long *)(puVar21 + 0x10);
      lVar17 = *(long *)(puVar21 + 0xe);
      *(undefined8 *)((long)plVar12 + 0x21) = *(undefined8 *)((long)puVar21 + 0x49);
      *(undefined8 *)((long)plVar12 + 0x19) = uVar23;
      plVar12[3] = lVar24;
      plVar12[2] = lVar17;
      uVar4 = puVar21[0x18];
      plVar12[6] = *(long *)(puVar21 + 0x16);
      *(char *)(plVar12 + 7) = (char)uVar4;
      *(uint *)(plVar12 + 8) = puVar21[8];
    }
    FUN_00874bc4(param_1,param_3);
    bVar6 = *(byte *)((long)param_1 + 0x4c) == uVar15;
    if ((*(byte *)((long)param_1 + 0x4c) & uVar15) != 0) {
      if ((uVar20 >> 0x20 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/optional:1064: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                  );
      }
      bVar6 = *(int *)(param_1 + 9) == (int)uVar20;
    }
    sVar10 = param_1[0xb] - (long)param_1[10];
    if (sVar10 == (long)pvVar22 - (long)__dest) {
      iVar8 = memcmp((void *)param_1[10],__dest,sVar10);
      bVar7 = iVar8 != 0;
      if (bVar7 || !bVar6) goto LAB_00874780;
    }
    else {
      bVar7 = true;
LAB_00874780:
      if (param_1[0x11] != 0) {
        plVar12 = (long *)FUN_005d6490();
        lVar17 = param_1[0x12];
        if (lVar17 != 0) {
          FUN_00d0f740(1,lVar17);
        }
        local_90 = (long *)operator_new(0x30);
        *local_90 = lVar17;
        local_90[4] = (long)FUN_004473ec;
        local_90[5] = (long)FUN_00874f4c;
        local_90[2] = (long)param_1;
        *(bool *)(local_90 + 3) = !bVar6;
        *(bool *)((long)local_90 + 0x19) = bVar7;
        local_80 = FUN_005db390;
        pcStack_78 = FUN_005db348;
        (**(code **)(*plVar12 + 8))(plVar12,&local_90,&uStack_61,&uStack_62);
        (*local_80)(0,&local_90,&local_90);
      }
    }
    if (__dest != (void *)0x0) {
      uVar20 = (ulong)((long)pvVar22 + (-4 - ((long)pvVar22 << 0x3e))) >> 2;
      uVar11 = (ulong)(((long)__dest - (long)pvVar22 << 0x3e) - ((long)__dest - (long)pvVar22)) >> 2
      ;
      if (uVar20 <= uVar11) {
        uVar11 = uVar20;
      }
      if ((1 < uVar11) && ((((int)__dest - (int)pvVar22 | -(int)pvVar22) & 3U) == 0)) {
        uVar11 = uVar11 & 0x3ffffffffffffffe;
        pvVar22 = (void *)((long)pvVar22 + uVar11 * -4);
        do {
          uVar11 = uVar11 - 2;
        } while (uVar11 != 0);
      }
      do {
        if (pvVar22 == __dest) {
          operator_delete(__dest);
          goto LAB_008748a0;
        }
        pvVar22 = (void *)((long)pvVar22 + -4);
      } while (pvVar22 != (void *)0x0);
LAB_008744f4:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
  }
LAB_008748a0:
  if ((local_a8 != (char **)0x0) && (**local_a8 != '\0')) {
    FUN_0066d348(0x45,*local_a8,local_a8[1],0,0,0,0,0,0);
  }
  return;
}


// ===== 008749ec  FUN_008749ec =====

long FUN_008749ec(long param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long *local_38;
  long *local_18;
  
  uVar2 = *(ulong *)(param_1 + 0x28);
  if ((uVar2 != 0) && (*(long *)(param_1 + 0x38) != 0)) {
    uVar7 = uVar2 - 1;
    uVar6 = (long)(int)*param_2 + (ulong)*(uint *)((long)param_2 + 4) * -0x6648a16b02f96787;
    if ((uVar2 & uVar7) == 0) {
      uVar8 = uVar6 & uVar7;
    }
    else {
      uVar8 = uVar6;
      if (uVar2 <= uVar6) {
        uVar8 = 0;
        if (uVar2 != 0) {
          uVar8 = uVar6 / uVar2;
        }
        uVar8 = uVar6 - uVar8 * uVar2;
      }
    }
    plVar9 = *(long **)(*(long *)(param_1 + 0x20) + uVar8 * 8);
    if (plVar9 != (long *)0x0) {
      do {
        while( true ) {
          plVar9 = (long *)*plVar9;
          if (plVar9 == (long *)0x0) goto LAB_00874a70;
          uVar10 = plVar9[1];
          if (uVar10 != uVar6) break;
          if ((*(int *)(plVar9 + 2) == (int)*param_2) &&
             (*(uint *)((long)plVar9 + 0x14) == *(uint *)((long)param_2 + 4))) {
            plVar3 = *(long **)(param_1 + 0x10);
            plVar9 = (long *)plVar9[3];
            if ((plVar9 != plVar3) && (plVar5 = (long *)plVar9[1], plVar3 != plVar5)) {
              *(long **)(*plVar9 + 8) = plVar5;
              *plVar5 = *plVar9;
              *(long **)(*plVar3 + 8) = plVar9;
              *plVar9 = *plVar3;
              *plVar3 = (long)plVar9;
              plVar9[1] = (long)plVar3;
            }
            goto LAB_00874ad4;
          }
        }
        if ((uVar2 & uVar7) == 0) {
          uVar10 = uVar10 & uVar7;
        }
        else if (uVar2 <= uVar10) {
          uVar1 = 0;
          if (uVar2 != 0) {
            uVar1 = uVar10 / uVar2;
          }
          uVar10 = uVar10 - uVar1 * uVar2;
        }
      } while (uVar10 == uVar8);
    }
  }
LAB_00874a70:
  local_38 = (long *)operator_new(0x60);
  if ((local_38 == (long *)0x0) || (local_38 == (long *)0xfffffffffffffff0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  local_38[2] = *param_2;
  local_38[3] = -0x8000000000000000;
  puVar4 = *(undefined8 **)(param_1 + 0x10);
  local_38[5] = 0;
  local_38[4] = 0;
  local_38[7] = 0;
  local_38[6] = 0;
  local_38[9] = 0;
  local_38[8] = 0;
  local_38[0xb] = 0;
  local_38[10] = 0;
  *local_38 = param_1 + 8;
  local_38[1] = (long)puVar4;
  *puVar4 = local_38;
  *(long **)(param_1 + 0x10) = local_38;
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
  local_18 = (long *)(param_1 + 0x20);
  FUN_00874f70(&local_18,param_2,param_2,&local_38);
LAB_00874ad4:
  if (*(long *)(param_1 + 0x18) != 0) {
    return *(long *)(param_1 + 0x10) + 0x18;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/list:830: libc++ Hardening assertion !empty() failed: list::front called on empty list\n"
            );
}


// ===== 00874bc4  FUN_00874bc4 =====

void FUN_00874bc4(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  if (9999999 < param_2) {
    lVar3 = *(long *)(param_1 + 0x18);
    if (param_2 != 0x7fffffffffffffff) {
      param_2 = param_2 + -10000000;
    }
    while ((lVar3 != 0 && (*(long *)(*(long *)(param_1 + 8) + 0x18) < param_2))) {
      FUN_008753ac(param_1 + 0x20,*(long *)(param_1 + 8) + 0x10);
      if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/list:1403: libc++ Hardening assertion !empty() failed: list::pop_back() called on an empty list\n"
                  );
      }
      plVar2 = *(long **)(param_1 + 8);
      plVar1 = (long *)plVar2[1];
      *(long **)(*plVar2 + 8) = plVar1;
      *plVar1 = *plVar2;
      *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + -1;
      if ((plVar2 == (long *)0xfffffffffffffff0) || (plVar2 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      operator_delete(plVar2);
      lVar3 = *(long *)(param_1 + 0x18);
    }
  }
  return;
}


// ===== 00874c9c  FUN_00874c9c =====

void FUN_00874c9c(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined2 local_68;
  undefined6 uStack_66;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined7 local_57;
  undefined1 uStack_50;
  undefined7 uStack_4f;
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined8 local_40;
  undefined1 local_38;
  undefined7 uStack_37;
  
  uVar2 = (**(code **)(*(long *)*param_2 + 0x10))();
  FUN_00874bc4(param_2,uVar2);
  puVar4 = (undefined8 *)param_2[2];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (puVar4 != param_2 + 1) {
    puVar3 = (undefined8 *)0x0;
    do {
      local_68 = *(undefined2 *)(puVar4 + 4);
      uVar2 = puVar4[6];
      uStack_60 = puVar4[5];
      uStack_4f = (undefined7)*(undefined8 *)((long)puVar4 + 0x39);
      uStack_48 = (undefined1)((ulong)*(undefined8 *)((long)puVar4 + 0x39) >> 0x38);
      uStack_50 = (undefined1)((ulong)*(undefined8 *)((long)puVar4 + 0x31) >> 0x38);
      uStack_58 = (undefined1)uVar2;
      local_57 = (undefined7)((ulong)uVar2 >> 8);
      local_38 = *(undefined1 *)(puVar4 + 10);
      local_40 = puVar4[9];
      if (puVar3 < (undefined8 *)param_1[2]) {
        if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        uVar1 = *(undefined4 *)(puVar4 + 0xb);
        uVar5 = NEON_rev64(puVar4[2],4);
        *puVar3 = puVar4[3];
        *(undefined4 *)(puVar3 + 9) = uVar1;
        puVar3[1] = uVar5;
        puVar3[3] = uStack_60;
        puVar3[2] = CONCAT62(uStack_66,local_68);
        puVar3[5] = CONCAT71(uStack_4f,uStack_50);
        puVar3[4] = uVar2;
        puVar3[7] = local_40;
        puVar3[6] = CONCAT71(uStack_47,uStack_48);
        puVar3[8] = CONCAT71(uStack_37,local_38);
        puVar3 = puVar3 + 10;
      }
      else {
        puVar3 = (undefined8 *)
                 FUN_00874dcc(param_1,puVar4 + 3,(long)puVar4 + 0x14,puVar4 + 2,puVar4 + 0xb,
                              &local_68);
      }
      param_1[1] = puVar3;
      puVar4 = (undefined8 *)puVar4[1];
    } while (puVar4 != param_2 + 1);
  }
  return;
}


// ===== 00874dcc  FUN_00874dcc =====

undefined8 *
FUN_00874dcc(long *param_1,undefined8 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5,undefined8 *param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *pvVar4;
  void *pvVar5;
  size_t __n;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  void *__dest;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar10 = (undefined8 *)(param_1[1] - *param_1);
  uVar6 = ((long)puVar10 >> 4) * -0x3333333333333333 + 1;
  if (0x333333333333333 < uVar6) {
    FUN_00874f34();
LAB_00874f30:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  lVar8 = param_1[2] - *param_1 >> 4;
  uVar9 = lVar8 * -0x6666666666666666;
  if (uVar9 < uVar6 || uVar9 - uVar6 == 0) {
    uVar9 = uVar6;
  }
  if (0x199999999999998 < (ulong)(lVar8 * -0x3333333333333333)) {
    uVar9 = 0x333333333333333;
  }
  if (uVar9 == 0) {
    pvVar4 = (void *)0x0;
  }
  else {
    if (0x333333333333333 < uVar9) goto LAB_00874f30;
    pvVar4 = operator_new(uVar9 * 0x50);
    puVar10 = (undefined8 *)((long)pvVar4 + (long)puVar10);
  }
  if (puVar10 != (undefined8 *)0x0) {
    uVar1 = *param_3;
    uVar2 = *param_4;
    uVar3 = *param_5;
    *puVar10 = *param_2;
    *(undefined4 *)(puVar10 + 1) = uVar1;
    *(undefined4 *)((long)puVar10 + 0xc) = uVar2;
    uVar16 = param_6[3];
    uVar15 = param_6[2];
    uVar12 = param_6[5];
    uVar11 = param_6[4];
    uVar7 = param_6[6];
    uVar14 = param_6[1];
    uVar13 = *param_6;
    *(undefined4 *)(puVar10 + 9) = uVar3;
    puVar10[8] = uVar7;
    puVar10[5] = uVar16;
    puVar10[4] = uVar15;
    puVar10[7] = uVar12;
    puVar10[6] = uVar11;
    puVar10[3] = uVar14;
    puVar10[2] = uVar13;
    __n = param_1[1] - *param_1;
    __dest = (void *)((long)puVar10 - __n);
    memcpy(__dest,(void *)*param_1,__n);
    pvVar5 = (void *)*param_1;
    *param_1 = (long)__dest;
    param_1[1] = (long)(puVar10 + 10);
    param_1[2] = (long)((long)pvVar4 + uVar9 * 0x50);
    if (pvVar5 != (void *)0x0) {
      operator_delete(pvVar5);
    }
    return puVar10 + 10;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00874f34  FUN_00874f34 =====

void FUN_00874f34(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00874f4c  FUN_00874f4c =====

void FUN_00874f4c(long *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x88);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00874f68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(*param_1 + 0x70,(char)param_1[1],*(undefined1 *)((long)param_1 + 9));
    return;
  }
  return;
}


// ===== 00874f70  FUN_00874f70 =====

undefined1  [16] FUN_00874f70(undefined8 *param_1,int *param_2,long *param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  long *plVar8;
  long *plVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 auVar13 [16];
  
  plVar8 = (long *)*param_1;
  puVar10 = (undefined1 *)plVar8[1];
  puVar11 = (undefined1 *)((long)*param_2 + (ulong)(uint)param_2[1] * -0x6648a16b02f96787);
  if (puVar10 == (undefined1 *)0x0) {
    puVar12 = &DAT_aaaaaaaaaaaaaaaa;
  }
  else {
    puVar5 = puVar10 + -1;
    if (((ulong)puVar10 & (ulong)puVar5) == 0) {
      puVar12 = (undefined1 *)((ulong)puVar11 & (ulong)puVar5);
    }
    else {
      puVar12 = puVar11;
      if (puVar10 <= puVar11) {
        uVar3 = 0;
        if (puVar10 != (undefined1 *)0x0) {
          uVar3 = (ulong)puVar11 / (ulong)puVar10;
        }
        puVar12 = puVar11 + -(uVar3 * (long)puVar10);
      }
    }
    puVar6 = *(undefined8 **)(*plVar8 + (long)puVar12 * 8);
    if (puVar6 != (undefined8 *)0x0) {
      for (plVar9 = (long *)*puVar6; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
        puVar7 = (undefined1 *)plVar9[1];
        if (puVar7 == puVar11) {
          if (((int)plVar9[2] == *param_2) && (*(uint *)((long)plVar9 + 0x14) == param_2[1])) {
            uVar1 = 0;
            goto LAB_00875224;
          }
        }
        else {
          if (((ulong)puVar10 & (ulong)puVar5) == 0) {
            puVar7 = (undefined1 *)((ulong)puVar7 & (ulong)puVar5);
          }
          else if (puVar10 <= puVar7) {
            uVar3 = 0;
            if (puVar10 != (undefined1 *)0x0) {
              uVar3 = (ulong)puVar7 / (ulong)puVar10;
            }
            puVar7 = puVar7 + -(uVar3 * (long)puVar10);
          }
          if (puVar7 != puVar12) break;
        }
      }
    }
  }
  plVar9 = (long *)operator_new(0x20);
  if (plVar9 == (long *)0x0) {
LAB_00875244:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  *plVar9 = 0;
  plVar9[1] = (long)puVar11;
  if (plVar9 == (long *)0xfffffffffffffff0) goto LAB_00875244;
  lVar2 = *param_4;
  plVar9[2] = *param_3;
  plVar9[3] = lVar2;
  if ((float)(plVar8[3] + 1) <= *(float *)(plVar8 + 4) * (float)puVar10) goto LAB_008751ac;
  if (puVar10 < (undefined1 *)0x3) {
    uVar3 = 1;
  }
  else {
    uVar3 = (ulong)(((ulong)puVar10 & (ulong)(puVar10 + -1)) != 0);
  }
  puVar12 = (undefined1 *)(uVar3 | (long)puVar10 << 1);
  puVar5 = (undefined1 *)(long)((float)(plVar8[3] + 1) / *(float *)(plVar8 + 4));
  if (puVar12 <= puVar5) {
    puVar12 = puVar5;
  }
  if (puVar12 + -1 == (undefined1 *)0x0) {
    puVar12 = (undefined1 *)0x2;
  }
  else if (((ulong)puVar12 & (ulong)(puVar12 + -1)) != 0) {
    puVar12 = (undefined1 *)FUN_005204f8(puVar12);
    puVar10 = (undefined1 *)plVar8[1];
  }
  if (puVar10 < puVar12) {
LAB_00875104:
    FUN_00875258(plVar8,puVar12);
  }
  else if (puVar12 < puVar10) {
    puVar5 = (undefined1 *)(long)((float)(ulong)plVar8[3] / *(float *)(plVar8 + 4));
    if ((puVar10 < (undefined1 *)0x3) || (((ulong)puVar10 & (ulong)(puVar10 + -1)) != 0)) {
      puVar5 = (undefined1 *)FUN_005204f8();
    }
    else if ((undefined1 *)0x1 < puVar5) {
      puVar5 = (undefined1 *)(1L << (-LZCOUNT(puVar5 + -1) & 0x3fU));
    }
    if (puVar12 <= puVar5) {
      puVar12 = puVar5;
    }
    if (puVar12 < puVar10) goto LAB_00875104;
  }
  puVar10 = (undefined1 *)plVar8[1];
  if (((ulong)puVar10 & (ulong)(puVar10 + -1)) == 0) {
    puVar12 = (undefined1 *)((ulong)(puVar10 + -1) & (ulong)puVar11);
  }
  else {
    puVar12 = puVar11;
    if (puVar10 <= puVar11) {
      uVar3 = 0;
      if (puVar10 != (undefined1 *)0x0) {
        uVar3 = (ulong)puVar11 / (ulong)puVar10;
      }
      puVar12 = puVar11 + -(uVar3 * (long)puVar10);
    }
  }
LAB_008751ac:
  lVar2 = *plVar8;
  plVar4 = *(long **)(lVar2 + (long)puVar12 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = plVar8 + 2;
    *plVar9 = *plVar4;
    *plVar4 = (long)plVar9;
    *(long **)(lVar2 + (long)puVar12 * 8) = plVar4;
    if (*plVar9 != 0) {
      puVar11 = *(undefined1 **)(*plVar9 + 8);
      if (((ulong)puVar10 & (ulong)(puVar10 + -1)) == 0) {
        puVar11 = (undefined1 *)((ulong)puVar11 & (ulong)(puVar10 + -1));
      }
      else if (puVar10 <= puVar11) {
        uVar3 = 0;
        if (puVar10 != (undefined1 *)0x0) {
          uVar3 = (ulong)puVar11 / (ulong)puVar10;
        }
        puVar11 = puVar11 + -(uVar3 * (long)puVar10);
      }
      *(long **)(*plVar8 + (long)puVar11 * 8) = plVar9;
    }
  }
  else {
    *plVar9 = *plVar4;
    *plVar4 = (long)plVar9;
  }
  uVar1 = 1;
  plVar8[3] = plVar8[3] + 1;
LAB_00875224:
  auVar13._8_8_ = uVar1;
  auVar13._0_8_ = plVar9;
  return auVar13;
}


// ===== 00875258  FUN_00875258 =====

void FUN_00875258(long *param_1,ulong param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  
  if (param_2 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    pvVar2 = operator_new(param_2 << 3);
  }
  pvVar3 = (void *)*param_1;
  *param_1 = (long)pvVar2;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  param_1[1] = param_2;
  if (param_2 != 0) {
    uVar4 = 0;
    do {
      *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (param_2 != uVar4);
    plVar6 = (long *)param_1[2];
    if (plVar6 != (long *)0x0) {
      uVar5 = param_2 - 1;
      uVar4 = plVar6[1];
      if ((param_2 & uVar5) == 0) {
        uVar4 = uVar4 & uVar5;
      }
      else if (param_2 <= uVar4) {
        uVar8 = 0;
        if (param_2 != 0) {
          uVar8 = uVar4 / param_2;
        }
        uVar4 = uVar4 - uVar8 * param_2;
      }
      *(long **)(*param_1 + uVar4 * 8) = param_1 + 2;
      for (plVar7 = (long *)*plVar6; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        uVar8 = plVar7[1];
        if ((param_2 & uVar5) == 0) {
          uVar8 = uVar8 & uVar5;
        }
        else if (param_2 <= uVar8) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar8 / param_2;
          }
          uVar8 = uVar8 - uVar1 * param_2;
        }
        if (uVar8 != uVar4) {
          if (*(long *)(*param_1 + uVar8 * 8) == 0) {
            *(long **)(*param_1 + uVar8 * 8) = plVar6;
            uVar4 = uVar8;
          }
          else {
            *plVar6 = *plVar7;
            *plVar7 = **(undefined8 **)(*param_1 + uVar8 * 8);
            **(long **)(*param_1 + uVar8 * 8) = (long)plVar7;
            plVar7 = plVar6;
          }
        }
        plVar6 = plVar7;
      }
    }
  }
  return;
}


// ===== 008753ac  FUN_008753ac =====

undefined8 FUN_008753ac(long *param_1,int *param_2)

{
  ulong uVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  void *local_28 [2];
  byte local_18;
  
  uVar3 = param_1[1];
  if ((uVar3 != 0) && (param_1[3] != 0)) {
    uVar5 = uVar3 - 1;
    uVar4 = (long)*param_2 + (ulong)(uint)param_2[1] * -0x6648a16b02f96787;
    if ((uVar3 & uVar5) == 0) {
      uVar6 = uVar4 & uVar5;
    }
    else {
      uVar6 = uVar4;
      if (uVar3 <= uVar4) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar4 / uVar3;
        }
        uVar6 = uVar4 - uVar6 * uVar3;
      }
    }
    plVar7 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar7 != (long *)0x0) {
      for (plVar7 = (long *)*plVar7; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        uVar8 = plVar7[1];
        if (uVar8 == uVar4) {
          if ((*(int *)(plVar7 + 2) == *param_2) && (*(uint *)((long)plVar7 + 0x14) == param_2[1]))
          {
            FUN_008754d8(local_28);
            pvVar2 = local_28[0];
            local_28[0] = (void *)0x0;
            if (pvVar2 != (void *)0x0) {
              if ((pvVar2 == (void *)0xfffffffffffffff0) && ((local_18 & 1) != 0)) {
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                          );
              }
              operator_delete(pvVar2);
            }
            return 1;
          }
        }
        else {
          if ((uVar3 & uVar5) == 0) {
            uVar8 = uVar8 & uVar5;
          }
          else if (uVar3 <= uVar8) {
            uVar1 = 0;
            if (uVar3 != 0) {
              uVar1 = uVar8 / uVar3;
            }
            uVar8 = uVar8 - uVar1 * uVar3;
          }
          if (uVar8 != uVar6) {
            return 0;
          }
        }
      }
    }
  }
  return 0;
}


// ===== 008754d8  FUN_008754d8 =====

void FUN_008754d8(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar5 = uVar4 - 1;
  if ((uVar4 & uVar5) == 0) {
    uVar3 = uVar5 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  plVar2 = *(long **)(*param_2 + uVar3 * 8);
  do {
    plVar7 = plVar2;
    plVar2 = (long *)*plVar7;
  } while ((long *)*plVar7 != param_3);
  if (plVar7 != param_2 + 2) {
    uVar8 = plVar7[1];
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_00875590;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_00875590;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_00875590:
  lVar6 = *param_3;
  if (lVar6 != 0) {
    uVar8 = *(ulong *)(lVar6 + 8);
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar5 = 0;
      if (uVar4 != 0) {
        uVar5 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar5 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(*param_2 + uVar8 * 8) = plVar7;
      lVar6 = *param_3;
    }
  }
  *plVar7 = lVar6;
  *param_3 = 0;
  lVar6 = param_2[3];
  *param_1 = param_3;
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 2) = 1;
  param_2[3] = lVar6 + -1;
  return;
}


// ===== 0087560c  FUN_0087560c =====

void FUN_0087560c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  float *pfVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  float *pfVar8;
  long lVar9;
  float *pfVar10;
  undefined4 *puVar11;
  bool bVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  float *pfVar16;
  ulong uVar17;
  ulong uVar18;
  float fVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 local_90;
  long lStack_88;
  undefined8 local_80;
  undefined4 *local_68;
  
  puVar14 = (undefined8 *)*param_2;
  puVar5 = (undefined8 *)param_2[1];
  if (puVar14 != puVar5) {
    do {
      if (puVar14[1] == 0) {
        lVar9 = (long)puVar5 - (long)(puVar14 + 3);
        puVar6 = puVar5;
        if (puVar5 != puVar14 + 3) {
          memmove(puVar14,puVar14 + 3,lVar9 - 6);
          puVar6 = (undefined8 *)param_2[1];
        }
        uVar18 = (long)puVar6 * -0x1555555555555555 - 8U >> 3;
        uVar17 = ((long)puVar5 - (long)puVar6) * 0x1555555555555555 + 8U >> 3;
        if (uVar18 <= uVar17) {
          uVar17 = uVar18;
        }
        if ((1 < uVar17) && ((((int)puVar5 - (int)puVar6 | -(int)puVar6) & 7U) == 0)) {
          uVar17 = uVar17 & 0x1ffffffffffffffe;
          puVar6 = puVar6 + uVar17 * -3;
          do {
            uVar17 = uVar17 - 2;
          } while (uVar17 != 0);
        }
        puVar5 = (undefined8 *)((long)puVar14 + lVar9);
        while (puVar6 != puVar5) {
          puVar6 = puVar6 + -3;
          if (puVar6 == (undefined8 *)0x0) goto LAB_00875da8;
        }
        param_2[1] = (ulong)puVar5;
      }
      else {
        puVar14 = puVar14 + 3;
      }
    } while (puVar14 != puVar5);
    puVar14 = (undefined8 *)*param_2;
  }
  uVar17 = ((long)puVar5 - (long)puVar14 >> 3) * -0x5555555555555555;
  if (uVar17 < 2) {
    uVar17 = param_2[2];
    *param_1 = (ulong)puVar14;
    param_1[1] = (ulong)puVar5;
    *param_2 = 0;
    param_2[1] = 0;
    param_1[2] = uVar17;
    param_2[2] = 0;
    return;
  }
  if (puVar14 != puVar5) {
    FUN_00875ee4(puVar14,puVar5,LZCOUNT(uVar17) << 1 ^ 0x7e,1);
    puVar14 = (undefined8 *)*param_2;
    puVar5 = (undefined8 *)param_2[1];
  }
  if (puVar14 != puVar5) {
    do {
      puVar6 = puVar14 + 3;
      if ((puVar5 != puVar6) && (*(short *)(puVar14 + 5) == *(short *)(puVar14 + 2))) {
        puVar3 = puVar14 + 6;
        do {
          puVar6 = puVar3;
          uVar17 = uVar17 - 1;
          if ((ulong)puVar6[-2] < (ulong)puVar14[1]) {
            puVar14[1] = 0;
            puVar14 = puVar6 + -3;
          }
          else {
            puVar6[-2] = 0;
          }
          puVar5 = (undefined8 *)param_2[1];
        } while ((puVar6 != puVar5) &&
                (puVar3 = puVar6 + 3, *(short *)(puVar6 + 2) == *(short *)(puVar14 + 2)));
      }
      puVar14 = puVar6;
    } while (puVar6 != puVar5);
    puVar14 = (undefined8 *)*param_2;
  }
  for (; puVar6 = puVar5, puVar14 != puVar5; puVar14 = puVar14 + 3) {
    puVar6 = puVar14;
    if (puVar14[1] != 0) goto joined_r0x00875ccc;
  }
LAB_00875840:
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (uVar17 == 0) {
    puVar11 = (undefined4 *)0x0;
    pfVar4 = (float *)0x0;
    pfVar16 = (float *)0x0;
    local_68 = (undefined4 *)0x0;
LAB_00875a2c:
    puVar5 = (undefined8 *)FUN_008634f4(param_1,puVar6);
  }
  else {
    if (0xaaaaaaaaaaaaaaa < uVar17) {
                    /* WARNING: Subroutine does not return */
      FUN_00857430();
    }
    puVar14 = (undefined8 *)operator_new(uVar17 * 0x18);
    uVar15 = uVar17 * 4;
    *param_1 = (ulong)puVar14;
    param_1[1] = (ulong)puVar14;
    param_1[2] = (ulong)(puVar14 + uVar17 * 3);
    local_68 = (undefined4 *)operator_new(uVar15);
    uVar13 = uVar15 - 4 >> 2;
    uVar18 = uVar13;
    if ((ulong)-(long)local_68 >> 2 <= uVar13) {
      uVar18 = (ulong)-(long)local_68 >> 2;
    }
    puVar11 = local_68;
    if ((7 < uVar18) && ((-(int)local_68 & 3U) == 0)) {
      uVar1 = uVar18 + 1 & 7;
      uVar2 = 8;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      puVar5 = (undefined8 *)(local_68 + 4);
      lVar9 = (uVar18 + 1) - uVar2;
      puVar11 = local_68 + lVar9;
      do {
        lVar9 = lVar9 + -8;
        puVar5[-1] = 0;
        puVar5[-2] = 0;
        puVar5[1] = 0;
        *puVar5 = 0;
        puVar5 = puVar5 + 4;
      } while (lVar9 != 0);
    }
    do {
      if (puVar11 == (undefined4 *)0x0) goto LAB_00875cfc;
      puVar7 = puVar11 + 1;
      *puVar11 = 0;
      puVar11 = puVar7;
    } while (puVar7 != local_68 + uVar17);
    puVar11 = local_68 + uVar17;
    pfVar4 = (float *)operator_new(uVar15);
    pfVar16 = pfVar4 + uVar17;
    if ((ulong)-(long)pfVar4 >> 2 <= uVar13) {
      uVar13 = (ulong)-(long)pfVar4 >> 2;
    }
    pfVar8 = pfVar4;
    if ((7 < uVar13) && ((-(int)pfVar4 & 3U) == 0)) {
      uVar18 = uVar13 + 1 & 7;
      uVar15 = 8;
      if (uVar18 != 0) {
        uVar15 = uVar18;
      }
      pfVar10 = pfVar4 + 4;
      lVar9 = (uVar13 + 1) - uVar15;
      pfVar8 = pfVar4 + lVar9;
      do {
        lVar9 = lVar9 + -8;
        pfVar10[-2] = 0.0;
        pfVar10[-1] = 0.0;
        pfVar10[-4] = 0.0;
        pfVar10[-3] = 0.0;
        pfVar10[2] = 0.0;
        pfVar10[3] = 0.0;
        pfVar10[0] = 0.0;
        pfVar10[1] = 0.0;
        pfVar10 = pfVar10 + 8;
      } while (lVar9 != 0);
    }
    do {
      if (pfVar8 == (float *)0x0) goto LAB_00875cfc;
      pfVar10 = pfVar8 + 1;
      *pfVar8 = 0.0;
      pfVar8 = pfVar10;
    } while (pfVar10 != pfVar16);
    if (puVar14 + uVar17 * 3 <= puVar14) goto LAB_00875a2c;
    if (puVar14 == (undefined8 *)0x0) {
LAB_00875cfc:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    uVar21 = puVar6[1];
    uVar20 = *puVar6;
    puVar5 = puVar14 + 3;
    puVar14[2] = puVar6[2];
    puVar14[1] = uVar21;
    *puVar14 = uVar20;
  }
  param_1[1] = (ulong)puVar5;
  if ((long)puVar11 - (long)local_68 != 0) {
    *local_68 = 0;
    uVar18 = param_1[1];
    if (*param_1 == uVar18) {
LAB_00875dbc:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__vector/vector.h:439: libc++ Hardening assertion !empty() failed: back() called on an empty vector\n"
                );
    }
    if (*(ushort *)(uVar18 - 8) == 0) {
      if (pfVar16 != pfVar4) {
        fVar19 = 3.4028235e+38;
        goto LAB_00875a68;
      }
    }
    else if (pfVar16 != pfVar4) {
      fVar19 = (float)*(ulong *)(uVar18 - 0x10) / (float)*(ushort *)(uVar18 - 8);
LAB_00875a68:
      *pfVar4 = fVar19;
      puVar6[1] = 0;
      lVar9 = uVar17 - 1;
      uVar17 = *param_2;
      uVar18 = param_2[1];
      if (uVar17 != uVar18) {
        do {
          if (*(long *)(uVar17 + 8) != 0) {
            if (*param_1 == param_1[1]) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__vector/vector.h:431: libc++ Hardening assertion !empty() failed: front() called on an empty vector\n"
                        );
            }
            if (*(ushort *)(uVar17 + 0x10) < *(ushort *)(*param_1 + 0x10)) {
              *(undefined8 *)(uVar17 + 8) = 0;
              lVar9 = lVar9 + -1;
              uVar18 = param_2[1];
            }
          }
          uVar17 = uVar17 + 0x18;
        } while (uVar17 != uVar18);
      }
      local_90 = 0xaaaaaaaa00000000;
      lStack_88 = 0;
      local_80 = 0xaaaaaaaaaaaa0000;
      if (lVar9 != 0) {
        uVar17 = (long)puVar11 - (long)local_68 >> 2;
        uVar18 = (long)pfVar16 - (long)pfVar4 >> 2;
        bVar12 = true;
LAB_00875b04:
        do {
          if (bVar12) {
            for (puVar14 = (undefined8 *)*param_2; puVar14 != (undefined8 *)param_2[1];
                puVar14 = puVar14 + 3) {
              if (puVar14[1] != 0) {
                lStack_88 = puVar14[1];
                local_90 = *puVar14;
                local_80 = CONCAT62(local_80._2_6_,*(undefined2 *)(puVar14 + 2));
                puVar14[1] = 0;
                break;
              }
            }
          }
          puVar14 = (undefined8 *)param_1[1];
          if ((undefined8 *)*param_1 == puVar14) goto LAB_00875dbc;
          uVar13 = ((long)puVar14 - (long)*param_1 >> 3) * -0x5555555555555555 - 1;
          if (uVar17 <= uVar13) goto LAB_00875d10;
          fVar19 = (float)(ulong)(lStack_88 - puVar14[-2]) /
                   (float)(int)((uint)(ushort)local_80 - (uint)*(ushort *)(puVar14 + -1));
          bVar12 = (float)local_68[uVar13] < fVar19;
          if (fVar19 <= (float)local_68[uVar13]) {
            if (puVar14 + -3 == (undefined8 *)0x0) goto LAB_00875da8;
            param_1[1] = (ulong)(puVar14 + -3);
            if (lVar9 == 0) break;
            goto LAB_00875b04;
          }
          if (uVar18 <= uVar13) goto LAB_00875d10;
          if (fVar19 < pfVar4[uVar13]) {
            if (puVar14 < (undefined8 *)param_1[2]) {
              if (puVar14 == (undefined8 *)0x0) goto LAB_00875cfc;
              puVar5 = puVar14 + 3;
              puVar14[2] = local_80;
              puVar14[1] = lStack_88;
              *puVar14 = local_90;
            }
            else {
              puVar5 = (undefined8 *)FUN_008634f4(param_1,&local_90);
            }
            param_1[1] = (ulong)puVar5;
            uVar13 = ((long)((long)puVar5 - *param_1) >> 3) * -0x5555555555555555 - 1;
            if (uVar17 <= uVar13) goto LAB_00875d10;
            local_68[uVar13] = fVar19;
            uVar13 = param_1[1];
            if (*param_1 == uVar13) goto LAB_00875dbc;
            uVar15 = ((long)(uVar13 - *param_1) >> 3) * -0x5555555555555555 - 1;
            if (uVar18 <= uVar15) goto LAB_00875d10;
            fVar19 = (float)NEON_ucvtf((uint)*(ushort *)(uVar13 - 8));
            pfVar4[uVar15] = (float)*(ulong *)(uVar13 - 0x10) / fVar19;
          }
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      if (pfVar4 == (float *)0x0) {
LAB_00875d44:
        if (local_68 == (undefined4 *)0x0) {
          return;
        }
        uVar18 = (ulong)((long)puVar11 + (-4 - ((long)puVar11 << 0x3e))) >> 2;
        uVar17 = (ulong)(((long)local_68 - (long)puVar11 << 0x3e) - ((long)local_68 - (long)puVar11)
                        ) >> 2;
        if (uVar18 <= uVar17) {
          uVar17 = uVar18;
        }
        if ((1 < uVar17) && ((((int)local_68 - (int)puVar11 | -(int)puVar11) & 3U) == 0)) {
          uVar17 = uVar17 & 0x3ffffffffffffffe;
          puVar11 = puVar11 + -uVar17;
          do {
            uVar17 = uVar17 - 2;
          } while (uVar17 != 0);
        }
        do {
          if (puVar11 == local_68) {
            operator_delete(local_68);
            return;
          }
          puVar11 = puVar11 + -1;
        } while (puVar11 != (undefined4 *)0x0);
      }
      else {
        uVar18 = (ulong)((long)pfVar16 + (-4 - ((long)pfVar16 << 0x3e))) >> 2;
        uVar17 = (ulong)(((long)pfVar4 - (long)pfVar16 << 0x3e) - ((long)pfVar4 - (long)pfVar16)) >>
                 2;
        if (uVar18 <= uVar17) {
          uVar17 = uVar18;
        }
        if ((1 < uVar17) && ((((int)pfVar4 - (int)pfVar16 | -(int)pfVar16) & 3U) == 0)) {
          uVar17 = uVar17 & 0x3ffffffffffffffe;
          pfVar16 = pfVar16 + -uVar17;
          do {
            uVar17 = uVar17 - 2;
          } while (uVar17 != 0);
        }
        do {
          if (pfVar16 == pfVar4) {
            operator_delete(pfVar4);
            goto LAB_00875d44;
          }
          pfVar16 = pfVar16 + -1;
        } while (pfVar16 != (float *)0x0);
      }
LAB_00875da8:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
  }
LAB_00875d10:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
            );
joined_r0x00875ccc:
  for (; puVar14 != puVar5; puVar14 = puVar14 + 3) {
    if ((puVar14[1] != 0) && ((ulong)puVar14[1] <= (ulong)puVar6[1])) {
      puVar6 = puVar14;
    }
  }
  goto LAB_00875840;
}


// ===== 00875df8  FUN_00875df8 =====

bool FUN_00875df8(long *param_1,int param_2)

{
  int *piVar1;
  bool bVar2;
  int *piVar3;
  
  piVar1 = (int *)*param_1;
  if (piVar1 == (int *)param_1[1]) {
    return false;
  }
  do {
    piVar3 = piVar1 + 6;
    bVar2 = *piVar1 == param_2;
    if (*piVar1 == param_2) {
      return bVar2;
    }
    piVar1 = piVar3;
  } while (piVar3 != (int *)param_1[1]);
  return bVar2;
}


// ===== 00875e34  FUN_00875e34 =====

ulong FUN_00875e34(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  
  lVar6 = *param_1;
  lVar3 = param_1[1];
  if (lVar6 == lVar3) {
    return 0xffffffffffffffff;
  }
  lVar4 = (lVar3 + -0x18) - lVar6;
  if (lVar4 == 0) {
    uVar5 = 0xffffffffffffffff;
  }
  else {
    puVar8 = (ulong *)(lVar6 + 0x20);
    uVar1 = ((ulong)(lVar4 * 0xaaaaaaaaaaaaaab) >> 3) + 1;
    uVar10 = uVar1 & 0x3ffffffffffffffe;
    lVar6 = lVar6 + (uVar1 & 0x3ffffffffffffffe) * 0x18;
    uVar7 = 0xffffffffffffffff;
    uVar9 = 0xffffffffffffffff;
    do {
      uVar5 = puVar8[-3];
      if (uVar7 <= puVar8[-3]) {
        uVar5 = uVar7;
      }
      uVar2 = *puVar8;
      if (uVar9 <= *puVar8) {
        uVar2 = uVar9;
      }
      uVar10 = uVar10 - 2;
      uVar7 = uVar5;
      puVar8 = puVar8 + 6;
      uVar9 = uVar2;
    } while (uVar10 != 0);
    if (uVar2 <= uVar5) {
      uVar5 = uVar2;
    }
    if (uVar1 == (uVar1 & 0x3ffffffffffffffe)) {
      return uVar5;
    }
  }
  do {
    puVar8 = (ulong *)(lVar6 + 8);
    lVar6 = lVar6 + 0x18;
    uVar1 = *puVar8;
    if (uVar5 <= *puVar8) {
      uVar1 = uVar5;
    }
    uVar5 = uVar1;
  } while (lVar6 != lVar3);
  return uVar1;
}


// ===== 00875ee4  FUN_00875ee4 =====

void FUN_00875ee4(undefined8 *param_1,undefined8 *param_2,long param_3,uint param_4)

{
  ushort *puVar1;
  ulong uVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ushort uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  ushort uVar9;
  ushort uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined4 uVar16;
  ulong uVar17;
  undefined8 uVar18;
  ulong uVar19;
  long lVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  ulong uVar24;
  ulong uVar25;
  undefined8 *puVar26;
  long lVar27;
  undefined1 uVar28;
  undefined8 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined8 *puVar33;
  undefined4 uVar34;
  undefined8 uVar35;
  
LAB_00875f20:
  puVar26 = param_2 + -3;
  puVar14 = param_1;
LAB_00875f28:
  do {
    param_1 = puVar14;
    uVar17 = (long)param_2 - (long)param_1;
    uVar15 = ((long)uVar17 >> 3) * -0x5555555555555555;
    if (uVar15 - 2 == 0 || (long)uVar15 < 2) {
      if (uVar15 < 2) {
        return;
      }
      if (uVar15 == 2) {
        uVar9 = *(ushort *)(param_1 + 2);
        if (uVar9 <= *(ushort *)(param_2 + -1)) {
          return;
        }
        uVar35 = param_2[-2];
        uVar29 = param_2[-3];
        uVar16 = *(undefined4 *)param_1;
        uVar34 = *(undefined4 *)((long)param_1 + 4);
        *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + -1);
        uVar18 = param_1[1];
        param_1[1] = uVar35;
        *param_1 = uVar29;
        *(undefined4 *)(param_2 + -3) = uVar16;
        *(undefined4 *)((long)param_2 + -0x14) = uVar34;
        param_2[-2] = uVar18;
LAB_00876de4:
        *(ushort *)(param_2 + -1) = uVar9;
        return;
      }
    }
    else {
      if (uVar15 == 3) {
        uVar10 = *(ushort *)(param_1 + 5);
        uVar9 = *(ushort *)(param_1 + 2);
        if (uVar9 <= uVar10) {
          if (uVar10 <= *(ushort *)(param_2 + -1)) {
            return;
          }
          uVar16 = *(undefined4 *)(param_1 + 3);
          uVar34 = *(undefined4 *)((long)param_1 + 0x1c);
          uVar29 = *puVar26;
          uVar18 = param_1[4];
          uVar7 = *(undefined2 *)(param_2 + -1);
          param_1[4] = param_2[-2];
          param_1[3] = uVar29;
          *(undefined2 *)(param_1 + 5) = uVar7;
          *(undefined4 *)(param_2 + -3) = uVar16;
          *(undefined4 *)((long)param_2 + -0x14) = uVar34;
          param_2[-2] = uVar18;
          *(ushort *)(param_2 + -1) = uVar10;
          if (*(ushort *)(param_1 + 2) <= *(ushort *)(param_1 + 5)) {
            return;
          }
          uVar16 = *(undefined4 *)param_1;
          uVar18 = param_1[1];
          uVar7 = *(undefined2 *)(param_1 + 5);
          *(ushort *)(param_1 + 5) = *(ushort *)(param_1 + 2);
          param_1[1] = param_1[4];
          *param_1 = param_1[3];
          *(undefined2 *)(param_1 + 2) = uVar7;
          *(undefined4 *)(param_1 + 3) = uVar16;
          *(undefined4 *)((long)param_1 + 0x1c) = *(undefined4 *)((long)param_1 + 4);
          param_1[4] = uVar18;
          return;
        }
        uVar16 = *(undefined4 *)param_1;
        uVar28 = *(undefined1 *)((long)param_1 + 4);
        uVar30 = *(undefined1 *)((long)param_1 + 5);
        uVar31 = *(undefined1 *)((long)param_1 + 6);
        uVar32 = *(undefined1 *)((long)param_1 + 7);
        uVar18 = param_1[1];
        if (*(ushort *)(param_2 + -1) < uVar10) {
          uVar35 = param_2[-2];
          uVar29 = *puVar26;
          *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + -1);
          param_1[1] = uVar35;
          *param_1 = uVar29;
        }
        else {
          uVar29 = param_1[3];
          *(undefined4 *)(param_1 + 3) = uVar16;
          *(undefined1 *)((long)param_1 + 0x1c) = uVar28;
          param_1[1] = param_1[4];
          *param_1 = uVar29;
          *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_1 + 5);
          *(undefined1 *)((long)param_1 + 0x1d) = uVar30;
          *(undefined1 *)((long)param_1 + 0x1e) = uVar31;
          *(undefined1 *)((long)param_1 + 0x1f) = uVar32;
          param_1[4] = uVar18;
          *(ushort *)(param_1 + 5) = uVar9;
          if (uVar9 <= *(ushort *)(param_2 + -1)) {
            return;
          }
          uVar35 = param_2[-2];
          uVar29 = *puVar26;
          *(undefined2 *)(param_1 + 5) = *(undefined2 *)(param_2 + -1);
          param_1[4] = uVar35;
          param_1[3] = uVar29;
        }
        *(undefined4 *)(param_2 + -3) = uVar16;
        *(undefined1 *)((long)param_2 + -0x14) = uVar28;
        *(undefined1 *)((long)param_2 + -0x13) = uVar30;
        *(undefined1 *)((long)param_2 + -0x12) = uVar31;
        *(undefined1 *)((long)param_2 + -0x11) = uVar32;
        param_2[-2] = uVar18;
        goto LAB_00876de4;
      }
      if (uVar15 == 4) {
        FUN_00876e6c(param_1,param_1 + 3,param_1 + 6,puVar26);
        return;
      }
      if (uVar15 == 5) {
        FUN_00877024(param_1,param_1 + 3,param_1 + 6,param_1 + 9,puVar26);
        return;
      }
    }
    if ((long)uVar17 < 0x240) {
      if ((param_4 & 1) == 0) {
        if (param_1 == param_2) {
          return;
        }
        if (param_1 + 3 == param_2) {
          return;
        }
        lVar20 = 0;
        puVar14 = param_1 + 3;
        puVar26 = param_1;
        do {
          puVar21 = puVar14;
          uVar10 = *(ushort *)(puVar26 + 5);
          if (uVar10 < *(ushort *)(puVar26 + 2)) {
            uVar34 = *(undefined4 *)((long)puVar26 + 0x1c);
            uVar16 = *(undefined4 *)puVar21;
            uVar18 = puVar26[4];
            lVar11 = lVar20;
            do {
              lVar27 = lVar11;
              puVar14 = (undefined8 *)((long)param_1 + lVar27);
              puVar14[4] = puVar14[1];
              puVar14[3] = *puVar14;
              *(undefined2 *)(puVar14 + 5) = *(undefined2 *)(puVar14 + 2);
              if (lVar27 == -0x18) {
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/__algorithm/sort.h:293: libc++ Hardening assertion __k != __leftmost failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                          );
              }
              lVar11 = lVar27 + -0x18;
            } while (uVar10 < *(ushort *)(puVar14 + -1));
            *(undefined4 *)((long)param_1 + lVar27) = uVar16;
            *(undefined8 *)((long)param_1 + lVar27 + 8) = uVar18;
            *(ushort *)((long)param_1 + lVar27 + 0x10) = uVar10;
            *(undefined4 *)((long)param_1 + lVar27 + 4) = uVar34;
          }
          lVar20 = lVar20 + 0x18;
          puVar14 = puVar21 + 3;
          puVar26 = puVar21;
        } while (puVar21 + 3 != param_2);
        return;
      }
      if (param_1 == param_2) {
        return;
      }
      if (param_1 + 3 == param_2) {
        return;
      }
      lVar20 = 0;
      puVar14 = param_1 + 3;
      puVar26 = param_1;
      break;
    }
    if (param_3 == 0) {
      if (param_1 == param_2) {
        return;
      }
      uVar19 = uVar15 - 2 >> 1;
      uVar24 = uVar19;
      goto LAB_008769ec;
    }
    uVar10 = *(ushort *)(param_2 + -1);
    puVar14 = param_1 + (uVar15 >> 1) * 3;
    if (0xc00 < uVar17) {
      uVar9 = *(ushort *)(puVar14 + 2);
      uVar6 = *(ushort *)(param_1 + 2);
      if (uVar9 < uVar6) {
        uVar16 = *(undefined4 *)param_1;
        uVar28 = *(undefined1 *)((long)param_1 + 4);
        uVar30 = *(undefined1 *)((long)param_1 + 5);
        uVar31 = *(undefined1 *)((long)param_1 + 6);
        uVar32 = *(undefined1 *)((long)param_1 + 7);
        uVar18 = param_1[1];
        if (uVar10 < uVar9) {
          uVar35 = param_2[-2];
          uVar29 = *puVar26;
          *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + -1);
          param_1[1] = uVar35;
          *param_1 = uVar29;
        }
        else {
          uVar35 = puVar14[1];
          uVar29 = *puVar14;
          *(undefined2 *)(param_1 + 2) = *(undefined2 *)(puVar14 + 2);
          param_1[1] = uVar35;
          *param_1 = uVar29;
          *(undefined4 *)puVar14 = uVar16;
          *(undefined1 *)((long)puVar14 + 4) = uVar28;
          *(undefined1 *)((long)puVar14 + 5) = uVar30;
          *(undefined1 *)((long)puVar14 + 6) = uVar31;
          *(undefined1 *)((long)puVar14 + 7) = uVar32;
          puVar14[1] = uVar18;
          *(ushort *)(puVar14 + 2) = uVar6;
          if (uVar6 <= *(ushort *)(param_2 + -1)) goto LAB_00876144;
          uVar35 = param_2[-2];
          uVar29 = *puVar26;
          *(undefined2 *)(puVar14 + 2) = *(undefined2 *)(param_2 + -1);
          puVar14[1] = uVar35;
          *puVar14 = uVar29;
        }
        *(undefined4 *)(param_2 + -3) = uVar16;
        *(undefined1 *)((long)param_2 + -0x14) = uVar28;
        *(undefined1 *)((long)param_2 + -0x13) = uVar30;
        *(undefined1 *)((long)param_2 + -0x12) = uVar31;
        *(undefined1 *)((long)param_2 + -0x11) = uVar32;
        param_2[-2] = uVar18;
        *(ushort *)(param_2 + -1) = uVar6;
      }
      else if (uVar10 < uVar9) {
        uVar35 = param_2[-2];
        uVar29 = *puVar26;
        uVar16 = *(undefined4 *)puVar14;
        uVar34 = *(undefined4 *)((long)puVar14 + 4);
        *(undefined2 *)(puVar14 + 2) = *(undefined2 *)(param_2 + -1);
        uVar18 = puVar14[1];
        puVar14[1] = uVar35;
        *puVar14 = uVar29;
        *(undefined4 *)(param_2 + -3) = uVar16;
        *(undefined4 *)((long)param_2 + -0x14) = uVar34;
        param_2[-2] = uVar18;
        *(ushort *)(param_2 + -1) = uVar9;
        uVar10 = *(ushort *)(param_1 + 2);
        if (*(ushort *)(puVar14 + 2) < uVar10) {
          uVar35 = puVar14[1];
          uVar29 = *puVar14;
          uVar16 = *(undefined4 *)param_1;
          uVar34 = *(undefined4 *)((long)param_1 + 4);
          *(undefined2 *)(param_1 + 2) = *(undefined2 *)(puVar14 + 2);
          uVar18 = param_1[1];
          param_1[1] = uVar35;
          *param_1 = uVar29;
          *(undefined4 *)puVar14 = uVar16;
          *(undefined4 *)((long)puVar14 + 4) = uVar34;
          puVar14[1] = uVar18;
          *(ushort *)(puVar14 + 2) = uVar10;
        }
      }
LAB_00876144:
      uVar9 = *(ushort *)(puVar14 + -1);
      uVar10 = *(ushort *)(param_1 + 5);
      puVar21 = puVar14 + -3;
      if (uVar9 < uVar10) {
        uVar16 = *(undefined4 *)(param_1 + 3);
        uVar28 = *(undefined1 *)((long)param_1 + 0x1c);
        uVar30 = *(undefined1 *)((long)param_1 + 0x1d);
        uVar31 = *(undefined1 *)((long)param_1 + 0x1e);
        uVar32 = *(undefined1 *)((long)param_1 + 0x1f);
        uVar18 = param_1[4];
        if (*(ushort *)(param_2 + -4) < uVar9) {
          uVar35 = param_2[-5];
          uVar29 = param_2[-6];
          *(undefined2 *)(param_1 + 5) = *(undefined2 *)(param_2 + -4);
          param_1[4] = uVar35;
          param_1[3] = uVar29;
        }
        else {
          uVar35 = puVar14[-2];
          uVar29 = *puVar21;
          *(undefined2 *)(param_1 + 5) = *(undefined2 *)(puVar14 + -1);
          param_1[4] = uVar35;
          param_1[3] = uVar29;
          *(undefined4 *)(puVar14 + -3) = uVar16;
          *(undefined1 *)((long)puVar14 + -0x14) = uVar28;
          *(undefined1 *)((long)puVar14 + -0x13) = uVar30;
          *(undefined1 *)((long)puVar14 + -0x12) = uVar31;
          *(undefined1 *)((long)puVar14 + -0x11) = uVar32;
          puVar14[-2] = uVar18;
          *(ushort *)(puVar14 + -1) = uVar10;
          if (uVar10 <= *(ushort *)(param_2 + -4)) goto LAB_008762dc;
          uVar35 = param_2[-5];
          uVar29 = param_2[-6];
          *(undefined2 *)(puVar14 + -1) = *(undefined2 *)(param_2 + -4);
          puVar14[-2] = uVar35;
          *puVar21 = uVar29;
        }
        *(undefined4 *)(param_2 + -6) = uVar16;
        *(undefined1 *)((long)param_2 + -0x2c) = uVar28;
        *(undefined1 *)((long)param_2 + -0x2b) = uVar30;
        *(undefined1 *)((long)param_2 + -0x2a) = uVar31;
        *(undefined1 *)((long)param_2 + -0x29) = uVar32;
        param_2[-5] = uVar18;
        *(ushort *)(param_2 + -4) = uVar10;
      }
      else if (*(ushort *)(param_2 + -4) < uVar9) {
        uVar18 = puVar14[-2];
        uVar16 = *(undefined4 *)(puVar14 + -3);
        uVar34 = *(undefined4 *)((long)puVar14 + -0x14);
        uVar29 = param_2[-6];
        uVar7 = *(undefined2 *)(param_2 + -4);
        puVar14[-2] = param_2[-5];
        *puVar21 = uVar29;
        *(undefined2 *)(puVar14 + -1) = uVar7;
        *(undefined4 *)(param_2 + -6) = uVar16;
        *(undefined4 *)((long)param_2 + -0x2c) = uVar34;
        param_2[-5] = uVar18;
        *(ushort *)(param_2 + -4) = uVar9;
        uVar10 = *(ushort *)(param_1 + 5);
        if (*(ushort *)(puVar14 + -1) < uVar10) {
          uVar16 = *(undefined4 *)(param_1 + 3);
          uVar34 = *(undefined4 *)((long)param_1 + 0x1c);
          uVar29 = *puVar21;
          uVar18 = param_1[4];
          uVar7 = *(undefined2 *)(puVar14 + -1);
          param_1[4] = puVar14[-2];
          param_1[3] = uVar29;
          *(undefined2 *)(param_1 + 5) = uVar7;
          *(undefined4 *)(puVar14 + -3) = uVar16;
          *(undefined4 *)((long)puVar14 + -0x14) = uVar34;
          puVar14[-2] = uVar18;
          *(ushort *)(puVar14 + -1) = uVar10;
        }
      }
LAB_008762dc:
      uVar10 = *(ushort *)(puVar14 + 5);
      uVar9 = *(ushort *)(param_1 + 8);
      if (uVar10 < uVar9) {
        uVar16 = *(undefined4 *)(param_1 + 6);
        uVar28 = *(undefined1 *)((long)param_1 + 0x34);
        uVar30 = *(undefined1 *)((long)param_1 + 0x35);
        uVar31 = *(undefined1 *)((long)param_1 + 0x36);
        uVar32 = *(undefined1 *)((long)param_1 + 0x37);
        uVar18 = param_1[7];
        if (*(ushort *)(param_2 + -7) < uVar10) {
          uVar35 = param_2[-8];
          uVar29 = param_2[-9];
          *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_2 + -7);
          param_1[7] = uVar35;
          param_1[6] = uVar29;
        }
        else {
          uVar35 = puVar14[4];
          uVar29 = puVar14[3];
          *(undefined2 *)(param_1 + 8) = *(undefined2 *)(puVar14 + 5);
          param_1[7] = uVar35;
          param_1[6] = uVar29;
          *(undefined4 *)(puVar14 + 3) = uVar16;
          *(undefined1 *)((long)puVar14 + 0x1c) = uVar28;
          *(undefined1 *)((long)puVar14 + 0x1d) = uVar30;
          *(undefined1 *)((long)puVar14 + 0x1e) = uVar31;
          *(undefined1 *)((long)puVar14 + 0x1f) = uVar32;
          puVar14[4] = uVar18;
          *(ushort *)(puVar14 + 5) = uVar9;
          if (uVar9 <= *(ushort *)(param_2 + -7)) goto LAB_008763f8;
          uVar35 = param_2[-8];
          uVar29 = param_2[-9];
          *(undefined2 *)(puVar14 + 5) = *(undefined2 *)(param_2 + -7);
          puVar14[4] = uVar35;
          puVar14[3] = uVar29;
        }
        *(undefined4 *)(param_2 + -9) = uVar16;
        *(undefined1 *)((long)param_2 + -0x44) = uVar28;
        *(undefined1 *)((long)param_2 + -0x43) = uVar30;
        *(undefined1 *)((long)param_2 + -0x42) = uVar31;
        *(undefined1 *)((long)param_2 + -0x41) = uVar32;
        param_2[-8] = uVar18;
        *(ushort *)(param_2 + -7) = uVar9;
      }
      else if (*(ushort *)(param_2 + -7) < uVar10) {
        uVar18 = puVar14[4];
        uVar16 = *(undefined4 *)(puVar14 + 3);
        uVar34 = *(undefined4 *)((long)puVar14 + 0x1c);
        uVar29 = param_2[-9];
        uVar7 = *(undefined2 *)(param_2 + -7);
        puVar14[4] = param_2[-8];
        puVar14[3] = uVar29;
        *(undefined2 *)(puVar14 + 5) = uVar7;
        *(undefined4 *)(param_2 + -9) = uVar16;
        *(undefined4 *)((long)param_2 + -0x44) = uVar34;
        param_2[-8] = uVar18;
        *(ushort *)(param_2 + -7) = uVar10;
        uVar10 = *(ushort *)(param_1 + 8);
        if (*(ushort *)(puVar14 + 5) < uVar10) {
          uVar16 = *(undefined4 *)(param_1 + 6);
          uVar34 = *(undefined4 *)((long)param_1 + 0x34);
          uVar29 = puVar14[3];
          uVar18 = param_1[7];
          uVar7 = *(undefined2 *)(puVar14 + 5);
          param_1[7] = puVar14[4];
          param_1[6] = uVar29;
          *(undefined2 *)(param_1 + 8) = uVar7;
          *(undefined4 *)(puVar14 + 3) = uVar16;
          *(undefined4 *)((long)puVar14 + 0x1c) = uVar34;
          puVar14[4] = uVar18;
          *(ushort *)(puVar14 + 5) = uVar10;
        }
      }
LAB_008763f8:
      uVar10 = *(ushort *)(puVar14 + 2);
      uVar6 = *(ushort *)(puVar14 + -1);
      uVar9 = *(ushort *)(puVar14 + 5);
      if (uVar10 < uVar6) {
        uVar16 = *(undefined4 *)(puVar14 + -3);
        uVar18 = puVar14[-2];
        if (uVar9 < uVar10) {
          uVar29 = puVar14[3];
          *(undefined4 *)(puVar14 + 3) = uVar16;
          puVar14[-2] = puVar14[4];
          *puVar21 = uVar29;
          *(undefined2 *)(puVar14 + -1) = *(undefined2 *)(puVar14 + 5);
        }
        else {
          uVar29 = *puVar14;
          *(undefined4 *)puVar14 = uVar16;
          puVar14[-2] = puVar14[1];
          *puVar21 = uVar29;
          *(undefined2 *)(puVar14 + -1) = *(undefined2 *)(puVar14 + 2);
          *(undefined1 *)((long)puVar14 + 4) = *(undefined1 *)((long)puVar14 + -0x14);
          *(undefined1 *)((long)puVar14 + 5) = *(undefined1 *)((long)puVar14 + -0x13);
          *(undefined1 *)((long)puVar14 + 6) = *(undefined1 *)((long)puVar14 + -0x12);
          *(undefined1 *)((long)puVar14 + 7) = *(undefined1 *)((long)puVar14 + -0x11);
          puVar14[1] = uVar18;
          *(ushort *)(puVar14 + 2) = uVar6;
          if (uVar6 <= uVar9) goto LAB_00876500;
          uVar29 = puVar14[3];
          *(undefined4 *)(puVar14 + 3) = uVar16;
          puVar14[1] = puVar14[4];
          *puVar14 = uVar29;
          *(undefined2 *)(puVar14 + 2) = *(undefined2 *)(puVar14 + 5);
        }
        *(undefined1 *)((long)puVar14 + 0x1c) = *(undefined1 *)((long)puVar14 + -0x14);
        *(undefined1 *)((long)puVar14 + 0x1d) = *(undefined1 *)((long)puVar14 + -0x13);
        *(undefined1 *)((long)puVar14 + 0x1e) = *(undefined1 *)((long)puVar14 + -0x12);
        *(undefined1 *)((long)puVar14 + 0x1f) = *(undefined1 *)((long)puVar14 + -0x11);
        puVar14[4] = uVar18;
        *(ushort *)(puVar14 + 5) = uVar6;
      }
      else if (uVar9 < uVar10) {
        uVar9 = *(ushort *)(puVar14 + 5);
        uVar18 = puVar14[1];
        uVar16 = *(undefined4 *)puVar14;
        puVar14[1] = puVar14[4];
        *puVar14 = puVar14[3];
        *(ushort *)(puVar14 + 2) = uVar9;
        *(undefined4 *)(puVar14 + 3) = uVar16;
        *(undefined4 *)((long)puVar14 + 0x1c) = *(undefined4 *)((long)puVar14 + 4);
        puVar14[4] = uVar18;
        *(ushort *)(puVar14 + 5) = uVar10;
        if (uVar9 < uVar6) {
          uVar16 = *(undefined4 *)(puVar14 + -3);
          uVar7 = *(undefined2 *)(puVar14 + 2);
          uVar18 = puVar14[-2];
          *(ushort *)(puVar14 + 2) = uVar6;
          *(undefined2 *)(puVar14 + -1) = uVar7;
          puVar14[-2] = puVar14[1];
          *puVar21 = *puVar14;
          *(undefined4 *)puVar14 = uVar16;
          *(undefined4 *)((long)puVar14 + 4) = *(undefined4 *)((long)puVar14 + -0x14);
          puVar14[1] = uVar18;
        }
      }
LAB_00876500:
      uVar16 = *(undefined4 *)param_1;
      uVar34 = *(undefined4 *)((long)param_1 + 4);
      uVar29 = *puVar14;
      uVar18 = param_1[1];
      uVar7 = *(undefined2 *)(puVar14 + 2);
      uVar8 = *(undefined2 *)(param_1 + 2);
      param_1[1] = puVar14[1];
      *param_1 = uVar29;
      *(undefined2 *)(param_1 + 2) = uVar7;
      *(undefined4 *)puVar14 = uVar16;
      *(undefined4 *)((long)puVar14 + 4) = uVar34;
      puVar14[1] = uVar18;
      *(undefined2 *)(puVar14 + 2) = uVar8;
joined_r0x0087652c:
      if ((param_4 & 1) == 0) goto LAB_00876530;
LAB_00876268:
      uVar16 = *(undefined4 *)param_1;
      uVar10 = *(ushort *)(param_1 + 2);
LAB_00876544:
      param_3 = param_3 + -1;
      uVar34 = *(undefined4 *)((long)param_1 + 4);
      uVar18 = param_1[1];
      lVar20 = 0;
      do {
        if ((undefined8 *)((long)param_1 + lVar20 + 0x18) == param_2) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__algorithm/sort.h:603: libc++ Hardening assertion __first != __end failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                    );
        }
        lVar11 = lVar20 + 0x28;
        lVar20 = lVar20 + 0x18;
      } while (*(ushort *)((long)param_1 + lVar11) < uVar10);
      puVar21 = (undefined8 *)((long)param_1 + lVar20);
      puVar22 = param_2;
      if (lVar20 == 0x18) {
        do {
          if (puVar22 <= puVar21) break;
          puVar1 = (ushort *)(puVar22 + -1);
          puVar22 = puVar22 + -3;
        } while (uVar10 <= *puVar1);
      }
      else {
        do {
          if (puVar22 == param_1) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__algorithm/sort.h:615: libc++ Hardening assertion __last != __begin failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                      );
          }
          puVar1 = (ushort *)(puVar22 + -1);
          puVar22 = puVar22 + -3;
        } while (uVar10 <= *puVar1);
      }
      puVar23 = puVar22;
      puVar14 = puVar21;
      puVar33 = puVar21;
      if (puVar21 < puVar22) {
        do {
          uVar35 = *puVar23;
          uVar29 = puVar33[1];
          uVar7 = *(undefined2 *)(puVar23 + 2);
          uVar4 = *(undefined4 *)puVar33;
          uVar5 = *(undefined4 *)((long)puVar33 + 4);
          uVar8 = *(undefined2 *)(puVar33 + 2);
          puVar33[1] = puVar23[1];
          *puVar33 = uVar35;
          *(undefined2 *)(puVar33 + 2) = uVar7;
          puVar23[1] = uVar29;
          *(undefined4 *)puVar23 = uVar4;
          *(undefined4 *)((long)puVar23 + 4) = uVar5;
          *(undefined2 *)(puVar23 + 2) = uVar8;
          do {
            puVar14 = puVar33 + 3;
            if (puVar14 == param_2) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__algorithm/sort.h:633: libc++ Hardening assertion __first != __end failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                        );
            }
            puVar1 = (ushort *)(puVar33 + 5);
            puVar33 = puVar14;
          } while (*puVar1 < uVar10);
          do {
            if (puVar23 == param_1) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__algorithm/sort.h:638: libc++ Hardening assertion __last != __begin failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                        );
            }
            puVar1 = (ushort *)(puVar23 + -1);
            puVar23 = puVar23 + -3;
          } while (uVar10 <= *puVar1);
        } while (puVar14 < puVar23);
      }
      puVar33 = puVar14 + -3;
      if (param_1 != puVar33) {
        uVar35 = puVar14[-2];
        uVar29 = *puVar33;
        *(undefined2 *)(param_1 + 2) = *(undefined2 *)(puVar14 + -1);
        param_1[1] = uVar35;
        *param_1 = uVar29;
      }
      *(undefined4 *)(puVar14 + -3) = uVar16;
      puVar14[-2] = uVar18;
      *(ushort *)(puVar14 + -1) = uVar10;
      *(undefined4 *)((long)puVar14 - 0x14) = uVar34;
      if (puVar22 <= puVar21) {
        uVar15 = FUN_0087713c(param_1,puVar14 + -3);
        uVar17 = FUN_0087713c(puVar14,param_2);
        if ((uVar17 & 1) != 0) goto LAB_008767f8;
        if ((uVar15 & 1) != 0) goto LAB_00875f28;
      }
      FUN_00875ee4(param_1,puVar14 + -3,param_3,param_4 & 1);
      param_4 = 0;
      goto LAB_00875f28;
    }
    uVar9 = *(ushort *)(param_1 + 2);
    uVar6 = *(ushort *)(puVar14 + 2);
    if (uVar9 < uVar6) {
      uVar16 = *(undefined4 *)puVar14;
      uVar28 = *(undefined1 *)((long)puVar14 + 4);
      uVar30 = *(undefined1 *)((long)puVar14 + 5);
      uVar31 = *(undefined1 *)((long)puVar14 + 6);
      uVar32 = *(undefined1 *)((long)puVar14 + 7);
      uVar18 = puVar14[1];
      if (uVar10 < uVar9) {
        uVar35 = param_2[-2];
        uVar29 = *puVar26;
        *(undefined2 *)(puVar14 + 2) = *(undefined2 *)(param_2 + -1);
        puVar14[1] = uVar35;
        *puVar14 = uVar29;
      }
      else {
        uVar35 = param_1[1];
        uVar29 = *param_1;
        *(undefined2 *)(puVar14 + 2) = *(undefined2 *)(param_1 + 2);
        puVar14[1] = uVar35;
        *puVar14 = uVar29;
        *(undefined4 *)param_1 = uVar16;
        *(undefined1 *)((long)param_1 + 4) = uVar28;
        *(undefined1 *)((long)param_1 + 5) = uVar30;
        *(undefined1 *)((long)param_1 + 6) = uVar31;
        *(undefined1 *)((long)param_1 + 7) = uVar32;
        param_1[1] = uVar18;
        *(ushort *)(param_1 + 2) = uVar6;
        if (uVar6 <= *(ushort *)(param_2 + -1)) goto LAB_00876260;
        uVar35 = param_2[-2];
        uVar29 = *puVar26;
        *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + -1);
        param_1[1] = uVar35;
        *param_1 = uVar29;
      }
      *(undefined4 *)(param_2 + -3) = uVar16;
      *(undefined1 *)((long)param_2 + -0x14) = uVar28;
      *(undefined1 *)((long)param_2 + -0x13) = uVar30;
      *(undefined1 *)((long)param_2 + -0x12) = uVar31;
      *(undefined1 *)((long)param_2 + -0x11) = uVar32;
      param_2[-2] = uVar18;
      *(ushort *)(param_2 + -1) = uVar6;
    }
    else if (uVar10 < uVar9) {
      uVar35 = param_2[-2];
      uVar29 = *puVar26;
      uVar16 = *(undefined4 *)param_1;
      uVar34 = *(undefined4 *)((long)param_1 + 4);
      *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + -1);
      uVar18 = param_1[1];
      param_1[1] = uVar35;
      *param_1 = uVar29;
      *(undefined4 *)(param_2 + -3) = uVar16;
      *(undefined4 *)((long)param_2 + -0x14) = uVar34;
      param_2[-2] = uVar18;
      *(ushort *)(param_2 + -1) = uVar9;
      uVar10 = *(ushort *)(puVar14 + 2);
      if (*(ushort *)(param_1 + 2) < uVar10) {
        uVar35 = param_1[1];
        uVar29 = *param_1;
        uVar16 = *(undefined4 *)puVar14;
        uVar34 = *(undefined4 *)((long)puVar14 + 4);
        *(undefined2 *)(puVar14 + 2) = *(undefined2 *)(param_1 + 2);
        uVar18 = puVar14[1];
        puVar14[1] = uVar35;
        *puVar14 = uVar29;
        *(undefined4 *)param_1 = uVar16;
        *(undefined4 *)((long)param_1 + 4) = uVar34;
        param_1[1] = uVar18;
        *(ushort *)(param_1 + 2) = uVar10;
        goto joined_r0x0087652c;
      }
    }
LAB_00876260:
    if ((param_4 & 1) != 0) goto LAB_00876268;
LAB_00876530:
    uVar10 = *(ushort *)(param_1 + 2);
    uVar16 = *(undefined4 *)param_1;
    if (*(ushort *)(param_1 + -1) < uVar10) goto LAB_00876544;
    uVar34 = *(undefined4 *)((long)param_1 + 4);
    uVar18 = param_1[1];
    puVar21 = param_1;
    if (uVar10 < *(ushort *)(param_2 + -1)) {
      do {
        puVar14 = puVar21 + 3;
        if (puVar14 == param_2) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__algorithm/sort.h:669: libc++ Hardening assertion __first != __end failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                    );
        }
        puVar1 = (ushort *)(puVar21 + 5);
        puVar21 = puVar14;
      } while (*puVar1 <= uVar10);
    }
    else {
      do {
        puVar14 = puVar21 + 3;
        if (param_2 <= puVar14) break;
        puVar1 = (ushort *)(puVar21 + 5);
        puVar21 = puVar14;
      } while (*puVar1 <= uVar10);
    }
    puVar21 = param_2;
    if (puVar14 < param_2) {
      do {
        if (puVar21 == param_1) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__algorithm/sort.h:682: libc++ Hardening assertion __last != __begin failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                    );
        }
        puVar1 = (ushort *)(puVar21 + -1);
        puVar21 = puVar21 + -3;
      } while (uVar10 < *puVar1);
    }
    while (puVar14 < puVar21) {
      uVar35 = *puVar21;
      uVar29 = puVar14[1];
      uVar7 = *(undefined2 *)(puVar21 + 2);
      uVar4 = *(undefined4 *)puVar14;
      uVar5 = *(undefined4 *)((long)puVar14 + 4);
      uVar8 = *(undefined2 *)(puVar14 + 2);
      puVar14[1] = puVar21[1];
      *puVar14 = uVar35;
      *(undefined2 *)(puVar14 + 2) = uVar7;
      puVar21[1] = uVar29;
      *(undefined4 *)puVar21 = uVar4;
      *(undefined4 *)((long)puVar21 + 4) = uVar5;
      *(undefined2 *)(puVar21 + 2) = uVar8;
      puVar22 = puVar14;
      do {
        puVar14 = puVar22 + 3;
        if (puVar14 == param_2) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__algorithm/sort.h:692: libc++ Hardening assertion __first != __end failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                    );
        }
        puVar1 = (ushort *)(puVar22 + 5);
        puVar22 = puVar14;
      } while (*puVar1 <= uVar10);
      do {
        if (puVar21 == param_1) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__algorithm/sort.h:697: libc++ Hardening assertion __last != __begin failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                    );
        }
        puVar1 = (ushort *)(puVar21 + -1);
        puVar21 = puVar21 + -3;
      } while (uVar10 < *puVar1);
    }
    if (param_1 != puVar14 + -3) {
      uVar35 = puVar14[-2];
      uVar29 = puVar14[-3];
      *(undefined2 *)(param_1 + 2) = *(undefined2 *)(puVar14 + -1);
      param_1[1] = uVar35;
      *param_1 = uVar29;
    }
    param_4 = 0;
    *(undefined4 *)(puVar14 + -3) = uVar16;
    puVar14[-2] = uVar18;
    *(ushort *)(puVar14 + -1) = uVar10;
    *(undefined4 *)((long)puVar14 + -0x14) = uVar34;
    param_3 = param_3 + -1;
  } while( true );
LAB_0087695c:
  puVar21 = puVar14;
  uVar10 = *(ushort *)(puVar26 + 5);
  if (uVar10 < *(ushort *)(puVar26 + 2)) {
    uVar34 = *(undefined4 *)((long)puVar26 + 0x1c);
    uVar16 = *(undefined4 *)puVar21;
    uVar18 = puVar26[4];
    lVar11 = lVar20;
    do {
      lVar27 = lVar11;
      puVar14 = (undefined8 *)((long)param_1 + lVar27);
      puVar14[4] = puVar14[1];
      puVar14[3] = *puVar14;
      *(undefined2 *)(puVar14 + 5) = *(undefined2 *)(puVar14 + 2);
      puVar26 = param_1;
      if (lVar27 == 0) goto LAB_00876934;
      lVar11 = lVar27 + -0x18;
    } while (uVar10 < *(ushort *)(puVar14 + -1));
    puVar26 = (undefined8 *)((long)param_1 + lVar27);
LAB_00876934:
    *(undefined4 *)puVar26 = uVar16;
    puVar26[1] = uVar18;
    *(ushort *)(puVar26 + 2) = uVar10;
    *(undefined4 *)((long)puVar26 + 4) = uVar34;
  }
  lVar20 = lVar20 + 0x18;
  puVar14 = puVar21 + 3;
  puVar26 = puVar21;
  if (puVar21 + 3 == param_2) {
    return;
  }
  goto LAB_0087695c;
LAB_008769ec:
  do {
    if (uVar24 <= uVar19) {
      uVar2 = (uVar24 & 0x3fffffffffffffff) << 1 | 1;
      uVar13 = uVar24 * 2 + 2;
      uVar25 = uVar2;
      if ((uVar13 < uVar15) &&
         (uVar25 = uVar13,
         *(ushort *)(param_1 + uVar13 * 3 + 2) <= *(ushort *)(param_1 + uVar2 * 3 + 2))) {
        uVar25 = uVar2;
      }
      puVar14 = param_1 + uVar24 * 3;
      uVar10 = *(ushort *)(puVar14 + 2);
      if (uVar10 <= *(ushort *)(param_1 + uVar25 * 3 + 2)) {
        uVar34 = *(undefined4 *)((long)puVar14 + 4);
        uVar16 = *(undefined4 *)puVar14;
        uVar18 = puVar14[1];
        uVar13 = uVar24;
        do {
          puVar26 = param_1 + uVar25 * 3;
          puVar14 = param_1 + uVar13 * 3;
          uVar35 = puVar26[1];
          uVar29 = *puVar26;
          *(undefined2 *)(puVar14 + 2) = *(undefined2 *)(puVar26 + 2);
          puVar14[1] = uVar35;
          *puVar14 = uVar29;
          if ((long)uVar19 < (long)uVar25) break;
          uVar2 = (uVar25 & 0x3fffffffffffffff) << 1 | 1;
          uVar13 = uVar25 * 2 + 2;
          uVar12 = uVar2;
          if (((long)uVar13 < (long)uVar15) &&
             (uVar12 = uVar13,
             *(ushort *)(param_1 + uVar13 * 3 + 2) <= *(ushort *)(param_1 + uVar2 * 3 + 2))) {
            uVar12 = uVar2;
          }
          uVar13 = uVar25;
          uVar25 = uVar12;
        } while (uVar10 <= *(ushort *)(param_1 + uVar12 * 3 + 2));
        *(undefined4 *)puVar26 = uVar16;
        puVar26[1] = uVar18;
        *(ushort *)(puVar26 + 2) = uVar10;
        *(undefined4 *)((long)puVar26 + 4) = uVar34;
      }
    }
    bVar3 = uVar24 != 0;
    uVar24 = uVar24 - 1;
  } while (bVar3);
  lVar20 = (uVar17 >> 3) * -0x5555555555555555;
  do {
    uVar16 = *(undefined4 *)param_1;
    uVar28 = *(undefined1 *)((long)param_1 + 4);
    uVar30 = *(undefined1 *)((long)param_1 + 5);
    uVar31 = *(undefined1 *)((long)param_1 + 6);
    uVar32 = *(undefined1 *)((long)param_1 + 7);
    uVar18 = param_1[1];
    uVar10 = *(ushort *)(param_1 + 2);
    uVar15 = 0;
    puVar14 = param_1;
    do {
      uVar24 = uVar15 << 1 | 1;
      uVar17 = uVar15 * 2 + 2;
      uVar19 = uVar24;
      puVar26 = puVar14 + uVar15 * 3 + 3;
      if (((long)uVar17 < lVar20) &&
         (uVar19 = uVar17, puVar26 = puVar14 + uVar15 * 3 + 6,
         *(ushort *)(puVar14 + uVar15 * 3 + 8) <= *(ushort *)(puVar14 + uVar15 * 3 + 5))) {
        uVar19 = uVar24;
        puVar26 = puVar14 + uVar15 * 3 + 3;
      }
      uVar35 = puVar26[1];
      uVar29 = *puVar26;
      *(undefined2 *)(puVar14 + 2) = *(undefined2 *)(puVar26 + 2);
      puVar14[1] = uVar35;
      *puVar14 = uVar29;
      uVar15 = uVar19;
      puVar14 = puVar26;
    } while ((long)uVar19 <= (long)(lVar20 - 2U >> 1));
    puVar14 = param_2 + -3;
    if (puVar26 == puVar14) {
      *(undefined4 *)puVar26 = uVar16;
LAB_00876ae4:
      *(undefined1 *)((long)puVar26 + 4) = uVar28;
      *(undefined1 *)((long)puVar26 + 5) = uVar30;
      *(undefined1 *)((long)puVar26 + 6) = uVar31;
      *(undefined1 *)((long)puVar26 + 7) = uVar32;
      puVar26[1] = uVar18;
      *(ushort *)(puVar26 + 2) = uVar10;
    }
    else {
      uVar35 = param_2[-2];
      uVar29 = *puVar14;
      *(undefined2 *)(puVar26 + 2) = *(undefined2 *)(param_2 + -1);
      puVar26[1] = uVar35;
      *puVar26 = uVar29;
      *(undefined1 *)((long)param_2 - 0x14) = uVar28;
      uVar15 = (long)puVar26 + (0x18 - (long)param_1);
      *(undefined4 *)(param_2 + -3) = uVar16;
      *(undefined1 *)((long)param_2 - 0x13) = uVar30;
      *(undefined1 *)((long)param_2 - 0x12) = uVar31;
      *(undefined1 *)((long)param_2 - 0x11) = uVar32;
      param_2[-2] = uVar18;
      *(ushort *)(param_2 + -1) = uVar10;
      if (0x18 < (long)uVar15) {
        uVar15 = (uVar15 >> 3) * -0x5555555555555555 - 2 >> 1;
        uVar10 = *(ushort *)(puVar26 + 2);
        if (*(ushort *)(param_1 + uVar15 * 3 + 2) < uVar10) {
          uVar16 = *(undefined4 *)puVar26;
          uVar28 = *(undefined1 *)((long)puVar26 + 4);
          uVar30 = *(undefined1 *)((long)puVar26 + 5);
          uVar31 = *(undefined1 *)((long)puVar26 + 6);
          uVar32 = *(undefined1 *)((long)puVar26 + 7);
          uVar18 = puVar26[1];
          puVar21 = param_1 + uVar15 * 3;
          puVar22 = puVar26;
          do {
            puVar26 = puVar21;
            uVar35 = puVar26[1];
            uVar29 = *puVar26;
            *(undefined2 *)(puVar22 + 2) = *(undefined2 *)(puVar26 + 2);
            puVar22[1] = uVar35;
            *puVar22 = uVar29;
            if (uVar15 == 0) break;
            uVar15 = uVar15 - 1 >> 1;
            puVar21 = param_1 + uVar15 * 3;
            puVar22 = puVar26;
          } while (*(ushort *)(param_1 + uVar15 * 3 + 2) < uVar10);
          *(undefined4 *)puVar26 = uVar16;
          goto LAB_00876ae4;
        }
      }
    }
    bVar3 = lVar20 < 3;
    lVar20 = lVar20 + -1;
    param_2 = puVar14;
    if (bVar3) {
      return;
    }
  } while( true );
LAB_008767f8:
  param_2 = puVar33;
  if ((uVar15 & 1) != 0) {
    return;
  }
  goto LAB_00875f20;
}


// ===== 00876e6c  FUN_00876e6c =====

void FUN_00876e6c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar7 = *(ushort *)(param_2 + 2);
  uVar8 = *(ushort *)(param_1 + 2);
  uVar9 = *(ushort *)(param_3 + 2);
  if (uVar7 < uVar8) {
    uVar2 = *(undefined4 *)param_1;
    uVar3 = *(undefined1 *)((long)param_1 + 4);
    uVar4 = *(undefined1 *)((long)param_1 + 5);
    uVar5 = *(undefined1 *)((long)param_1 + 6);
    uVar6 = *(undefined1 *)((long)param_1 + 7);
    uVar10 = param_1[1];
    if (uVar9 < uVar7) {
      uVar12 = param_3[1];
      uVar11 = *param_3;
      *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_3 + 2);
      param_1[1] = uVar12;
      *param_1 = uVar11;
    }
    else {
      uVar12 = param_2[1];
      uVar11 = *param_2;
      *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
      param_1[1] = uVar12;
      *param_1 = uVar11;
      *(undefined4 *)param_2 = uVar2;
      *(undefined1 *)((long)param_2 + 4) = uVar3;
      *(undefined1 *)((long)param_2 + 5) = uVar4;
      *(undefined1 *)((long)param_2 + 6) = uVar5;
      *(undefined1 *)((long)param_2 + 7) = uVar6;
      param_2[1] = uVar10;
      *(ushort *)(param_2 + 2) = uVar8;
      uVar9 = *(ushort *)(param_3 + 2);
      if (uVar8 <= *(ushort *)(param_3 + 2)) goto LAB_00876f88;
      uVar12 = param_3[1];
      uVar11 = *param_3;
      *(undefined2 *)(param_2 + 2) = *(undefined2 *)(param_3 + 2);
      param_2[1] = uVar12;
      *param_2 = uVar11;
    }
    *(undefined4 *)param_3 = uVar2;
    *(undefined1 *)((long)param_3 + 4) = uVar3;
    *(undefined1 *)((long)param_3 + 5) = uVar4;
    *(undefined1 *)((long)param_3 + 6) = uVar5;
    *(undefined1 *)((long)param_3 + 7) = uVar6;
    param_3[1] = uVar10;
    *(ushort *)(param_3 + 2) = uVar8;
    uVar9 = uVar8;
  }
  else if (uVar9 < uVar7) {
    uVar12 = param_3[1];
    uVar11 = *param_3;
    uVar2 = *(undefined4 *)param_2;
    uVar1 = *(undefined4 *)((long)param_2 + 4);
    *(undefined2 *)(param_2 + 2) = *(undefined2 *)(param_3 + 2);
    uVar10 = param_2[1];
    param_2[1] = uVar12;
    *param_2 = uVar11;
    *(undefined4 *)param_3 = uVar2;
    *(undefined4 *)((long)param_3 + 4) = uVar1;
    param_3[1] = uVar10;
    *(ushort *)(param_3 + 2) = uVar7;
    uVar8 = *(ushort *)(param_1 + 2);
    uVar9 = uVar7;
    if (*(ushort *)(param_2 + 2) < uVar8) {
      uVar12 = param_2[1];
      uVar11 = *param_2;
      uVar2 = *(undefined4 *)param_1;
      uVar1 = *(undefined4 *)((long)param_1 + 4);
      *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
      uVar10 = param_1[1];
      param_1[1] = uVar12;
      *param_1 = uVar11;
      *(undefined4 *)param_2 = uVar2;
      *(undefined4 *)((long)param_2 + 4) = uVar1;
      param_2[1] = uVar10;
      *(ushort *)(param_2 + 2) = uVar8;
      uVar9 = *(ushort *)(param_3 + 2);
    }
  }
LAB_00876f88:
  if (*(ushort *)(param_4 + 2) < uVar9) {
    uVar12 = param_4[1];
    uVar11 = *param_4;
    uVar2 = *(undefined4 *)param_3;
    uVar1 = *(undefined4 *)((long)param_3 + 4);
    *(undefined2 *)(param_3 + 2) = *(undefined2 *)(param_4 + 2);
    uVar10 = param_3[1];
    param_3[1] = uVar12;
    *param_3 = uVar11;
    *(undefined4 *)param_4 = uVar2;
    *(undefined4 *)((long)param_4 + 4) = uVar1;
    param_4[1] = uVar10;
    *(ushort *)(param_4 + 2) = uVar9;
    uVar7 = *(ushort *)(param_2 + 2);
    if (*(ushort *)(param_3 + 2) < uVar7) {
      uVar12 = param_3[1];
      uVar11 = *param_3;
      uVar2 = *(undefined4 *)param_2;
      uVar1 = *(undefined4 *)((long)param_2 + 4);
      *(undefined2 *)(param_2 + 2) = *(undefined2 *)(param_3 + 2);
      uVar10 = param_2[1];
      param_2[1] = uVar12;
      *param_2 = uVar11;
      *(undefined4 *)param_3 = uVar2;
      *(undefined4 *)((long)param_3 + 4) = uVar1;
      param_3[1] = uVar10;
      *(ushort *)(param_3 + 2) = uVar7;
      uVar7 = *(ushort *)(param_1 + 2);
      if (*(ushort *)(param_2 + 2) < uVar7) {
        uVar12 = param_2[1];
        uVar11 = *param_2;
        uVar2 = *(undefined4 *)param_1;
        uVar1 = *(undefined4 *)((long)param_1 + 4);
        *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
        uVar10 = param_1[1];
        param_1[1] = uVar12;
        *param_1 = uVar11;
        *(undefined4 *)param_2 = uVar2;
        *(undefined4 *)((long)param_2 + 4) = uVar1;
        param_2[1] = uVar10;
        *(ushort *)(param_2 + 2) = uVar7;
      }
    }
  }
  return;
}


// ===== 00877024  FUN_00877024 =====

void FUN_00877024(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  FUN_00876e6c();
  uVar3 = *(ushort *)(param_4 + 2);
  if (*(ushort *)(param_5 + 2) < uVar3) {
    uVar6 = param_5[1];
    uVar5 = *param_5;
    uVar1 = *(undefined4 *)param_4;
    uVar2 = *(undefined4 *)((long)param_4 + 4);
    *(undefined2 *)(param_4 + 2) = *(undefined2 *)(param_5 + 2);
    uVar4 = param_4[1];
    param_4[1] = uVar6;
    *param_4 = uVar5;
    *(undefined4 *)param_5 = uVar1;
    *(undefined4 *)((long)param_5 + 4) = uVar2;
    param_5[1] = uVar4;
    *(ushort *)(param_5 + 2) = uVar3;
    uVar3 = *(ushort *)(param_3 + 2);
    if (*(ushort *)(param_4 + 2) < uVar3) {
      uVar6 = param_4[1];
      uVar5 = *param_4;
      uVar1 = *(undefined4 *)param_3;
      uVar2 = *(undefined4 *)((long)param_3 + 4);
      *(undefined2 *)(param_3 + 2) = *(undefined2 *)(param_4 + 2);
      uVar4 = param_3[1];
      param_3[1] = uVar6;
      *param_3 = uVar5;
      *(undefined4 *)param_4 = uVar1;
      *(undefined4 *)((long)param_4 + 4) = uVar2;
      param_4[1] = uVar4;
      *(ushort *)(param_4 + 2) = uVar3;
      uVar3 = *(ushort *)(param_2 + 2);
      if (*(ushort *)(param_3 + 2) < uVar3) {
        uVar6 = param_3[1];
        uVar5 = *param_3;
        uVar1 = *(undefined4 *)param_2;
        uVar2 = *(undefined4 *)((long)param_2 + 4);
        *(undefined2 *)(param_2 + 2) = *(undefined2 *)(param_3 + 2);
        uVar4 = param_2[1];
        param_2[1] = uVar6;
        *param_2 = uVar5;
        *(undefined4 *)param_3 = uVar1;
        *(undefined4 *)((long)param_3 + 4) = uVar2;
        param_3[1] = uVar4;
        *(ushort *)(param_3 + 2) = uVar3;
        uVar3 = *(ushort *)(param_1 + 2);
        if (*(ushort *)(param_2 + 2) < uVar3) {
          uVar6 = param_2[1];
          uVar5 = *param_2;
          uVar1 = *(undefined4 *)param_1;
          uVar2 = *(undefined4 *)((long)param_1 + 4);
          *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
          uVar4 = param_1[1];
          param_1[1] = uVar6;
          *param_1 = uVar5;
          *(undefined4 *)param_2 = uVar1;
          *(undefined4 *)((long)param_2 + 4) = uVar2;
          param_2[1] = uVar4;
          *(ushort *)(param_2 + 2) = uVar3;
        }
      }
    }
  }
  return;
}


// ===== 0087713c  FUN_0087713c =====

bool FUN_0087713c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  undefined2 uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  int iVar17;
  long lVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  uVar12 = ((long)param_2 - (long)param_1 >> 3) * -0x5555555555555555;
  if ((long)uVar12 < 3) {
    if (uVar12 < 2) {
      return true;
    }
    if (uVar12 == 2) {
      uVar7 = *(ushort *)(param_1 + 2);
      if (uVar7 <= *(ushort *)(param_2 + -1)) {
        return true;
      }
      uVar21 = param_2[-2];
      uVar20 = param_2[-3];
      uVar2 = *(undefined4 *)param_1;
      uVar19 = *(undefined4 *)((long)param_1 + 4);
      *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + -1);
      uVar13 = param_1[1];
      param_1[1] = uVar21;
      *param_1 = uVar20;
      *(undefined4 *)(param_2 + -3) = uVar2;
      *(undefined4 *)((long)param_2 + -0x14) = uVar19;
      param_2[-2] = uVar13;
LAB_008773a8:
      *(ushort *)(param_2 + -1) = uVar7;
      return true;
    }
  }
  else {
    if (uVar12 == 3) {
      uVar8 = *(ushort *)(param_1 + 5);
      uVar7 = *(ushort *)(param_1 + 2);
      puVar14 = param_2 + -3;
      if (uVar7 <= uVar8) {
        if (uVar8 <= *(ushort *)(param_2 + -1)) {
          return true;
        }
        uVar2 = *(undefined4 *)(param_1 + 3);
        uVar19 = *(undefined4 *)((long)param_1 + 0x1c);
        uVar20 = *puVar14;
        uVar13 = param_1[4];
        uVar10 = *(undefined2 *)(param_2 + -1);
        param_1[4] = param_2[-2];
        param_1[3] = uVar20;
        *(undefined2 *)(param_1 + 5) = uVar10;
        *(undefined4 *)(param_2 + -3) = uVar2;
        *(undefined4 *)((long)param_2 + -0x14) = uVar19;
        param_2[-2] = uVar13;
        *(ushort *)(param_2 + -1) = uVar8;
        if (*(ushort *)(param_1 + 2) <= *(ushort *)(param_1 + 5)) {
          return true;
        }
        uVar2 = *(undefined4 *)param_1;
        uVar13 = param_1[1];
        uVar10 = *(undefined2 *)(param_1 + 5);
        *(ushort *)(param_1 + 5) = *(ushort *)(param_1 + 2);
        param_1[1] = param_1[4];
        *param_1 = param_1[3];
        *(undefined2 *)(param_1 + 2) = uVar10;
        *(undefined4 *)(param_1 + 3) = uVar2;
        *(undefined4 *)((long)param_1 + 0x1c) = *(undefined4 *)((long)param_1 + 4);
        param_1[4] = uVar13;
        return true;
      }
      uVar2 = *(undefined4 *)param_1;
      uVar3 = *(undefined1 *)((long)param_1 + 4);
      uVar4 = *(undefined1 *)((long)param_1 + 5);
      uVar5 = *(undefined1 *)((long)param_1 + 6);
      uVar6 = *(undefined1 *)((long)param_1 + 7);
      uVar13 = param_1[1];
      if (*(ushort *)(param_2 + -1) < uVar8) {
        uVar21 = param_2[-2];
        uVar20 = *puVar14;
        *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + -1);
        param_1[1] = uVar21;
        *param_1 = uVar20;
      }
      else {
        uVar20 = param_1[3];
        *(undefined4 *)(param_1 + 3) = uVar2;
        *(undefined1 *)((long)param_1 + 0x1c) = uVar3;
        param_1[1] = param_1[4];
        *param_1 = uVar20;
        *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_1 + 5);
        *(undefined1 *)((long)param_1 + 0x1d) = uVar4;
        *(undefined1 *)((long)param_1 + 0x1e) = uVar5;
        *(undefined1 *)((long)param_1 + 0x1f) = uVar6;
        param_1[4] = uVar13;
        *(ushort *)(param_1 + 5) = uVar7;
        if (uVar7 <= *(ushort *)(param_2 + -1)) {
          return true;
        }
        uVar21 = param_2[-2];
        uVar20 = *puVar14;
        *(undefined2 *)(param_1 + 5) = *(undefined2 *)(param_2 + -1);
        param_1[4] = uVar21;
        param_1[3] = uVar20;
      }
      *(undefined4 *)(param_2 + -3) = uVar2;
      *(undefined1 *)((long)param_2 + -0x14) = uVar3;
      *(undefined1 *)((long)param_2 + -0x13) = uVar4;
      *(undefined1 *)((long)param_2 + -0x12) = uVar5;
      *(undefined1 *)((long)param_2 + -0x11) = uVar6;
      param_2[-2] = uVar13;
      goto LAB_008773a8;
    }
    if (uVar12 == 4) {
      FUN_00876e6c(param_1,param_1 + 3,param_1 + 6,param_2 + -3);
      return true;
    }
    if (uVar12 == 5) {
      FUN_00877024(param_1,param_1 + 3,param_1 + 6,param_1 + 9,param_2 + -3);
      return true;
    }
  }
  uVar8 = *(ushort *)(param_1 + 5);
  uVar7 = *(ushort *)(param_1 + 2);
  puVar14 = param_1 + 6;
  uVar9 = *(ushort *)(param_1 + 8);
  if (uVar8 < uVar7) {
    uVar2 = *(undefined4 *)param_1;
    uVar13 = param_1[1];
    if (uVar9 < uVar8) {
      uVar20 = *puVar14;
      *(undefined4 *)(param_1 + 6) = uVar2;
      param_1[1] = param_1[7];
      *param_1 = uVar20;
      *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_1 + 8);
    }
    else {
      uVar20 = param_1[3];
      *(undefined4 *)(param_1 + 3) = uVar2;
      param_1[1] = param_1[4];
      *param_1 = uVar20;
      *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_1 + 5);
      *(undefined1 *)((long)param_1 + 0x1c) = *(undefined1 *)((long)param_1 + 4);
      *(undefined1 *)((long)param_1 + 0x1d) = *(undefined1 *)((long)param_1 + 5);
      *(undefined1 *)((long)param_1 + 0x1e) = *(undefined1 *)((long)param_1 + 6);
      *(undefined1 *)((long)param_1 + 0x1f) = *(undefined1 *)((long)param_1 + 7);
      param_1[4] = uVar13;
      *(ushort *)(param_1 + 5) = uVar7;
      if (uVar7 <= uVar9) goto LAB_00877414;
      uVar20 = *puVar14;
      *(undefined4 *)(param_1 + 6) = uVar2;
      param_1[4] = param_1[7];
      param_1[3] = uVar20;
      *(undefined2 *)(param_1 + 5) = *(undefined2 *)(param_1 + 8);
    }
    *(undefined1 *)((long)param_1 + 0x34) = *(undefined1 *)((long)param_1 + 4);
    *(undefined1 *)((long)param_1 + 0x35) = *(undefined1 *)((long)param_1 + 5);
    *(undefined1 *)((long)param_1 + 0x36) = *(undefined1 *)((long)param_1 + 6);
    *(undefined1 *)((long)param_1 + 0x37) = *(undefined1 *)((long)param_1 + 7);
    param_1[7] = uVar13;
    *(ushort *)(param_1 + 8) = uVar7;
  }
  else if (uVar9 < uVar8) {
    uVar10 = *(undefined2 *)(param_1 + 8);
    *(ushort *)(param_1 + 8) = uVar8;
    uVar2 = *(undefined4 *)(param_1 + 3);
    *(undefined2 *)(param_1 + 5) = uVar10;
    uVar13 = param_1[4];
    param_1[4] = param_1[7];
    param_1[3] = *puVar14;
    *(undefined4 *)(param_1 + 6) = uVar2;
    *(undefined4 *)((long)param_1 + 0x34) = *(undefined4 *)((long)param_1 + 0x1c);
    param_1[7] = uVar13;
    if (*(ushort *)(param_1 + 5) < uVar7) {
      uVar2 = *(undefined4 *)param_1;
      uVar13 = param_1[1];
      uVar10 = *(undefined2 *)(param_1 + 5);
      *(ushort *)(param_1 + 5) = uVar7;
      param_1[1] = param_1[4];
      *param_1 = param_1[3];
      *(undefined2 *)(param_1 + 2) = uVar10;
      *(undefined4 *)(param_1 + 3) = uVar2;
      *(undefined4 *)((long)param_1 + 0x1c) = *(undefined4 *)((long)param_1 + 4);
      param_1[4] = uVar13;
    }
  }
LAB_00877414:
  if (param_1 + 9 != param_2) {
    lVar16 = 0;
    iVar17 = 0;
    puVar15 = param_1 + 9;
    do {
      uVar8 = *(ushort *)(puVar15 + 2);
      if (uVar8 < *(ushort *)(puVar14 + 2)) {
        uVar19 = *(undefined4 *)((long)puVar15 + 4);
        uVar2 = *(undefined4 *)puVar15;
        uVar13 = puVar15[1];
        lVar11 = lVar16;
        do {
          lVar18 = lVar11;
          *(undefined8 *)((long)param_1 + lVar18 + 0x50) =
               *(undefined8 *)((long)param_1 + lVar18 + 0x38);
          *(undefined8 *)((long)param_1 + lVar18 + 0x48) =
               *(undefined8 *)((long)param_1 + lVar18 + 0x30);
          *(undefined2 *)((long)param_1 + lVar18 + 0x58) =
               *(undefined2 *)((long)param_1 + lVar18 + 0x40);
          puVar14 = param_1;
          if (lVar18 == -0x30) goto LAB_00877430;
          lVar11 = lVar18 + -0x18;
        } while (uVar8 < *(ushort *)((long)param_1 + lVar18 + 0x28));
        puVar14 = (undefined8 *)((long)param_1 + lVar18 + 0x30);
LAB_00877430:
        iVar17 = iVar17 + 1;
        *(undefined4 *)puVar14 = uVar2;
        puVar14[1] = uVar13;
        *(ushort *)(puVar14 + 2) = uVar8;
        *(undefined4 *)((long)puVar14 + 4) = uVar19;
        if (iVar17 == 8) {
          return puVar15 + 3 == param_2;
        }
      }
      puVar1 = puVar15 + 3;
      lVar16 = lVar16 + 0x18;
      puVar14 = puVar15;
      puVar15 = puVar1;
    } while (puVar1 != param_2);
  }
  return true;
}


// ===== 008774e8  FUN_008774e8 =====

void FUN_008774e8(undefined8 *param_1)

{
  FUN_0084dfe8(param_1,0xc0,0x30);
  *param_1 = &PTR_thunk_FUN_0084e000_00d3ad60;
  return;
}


// ===== 00877524  thunk_FUN_0084e000 =====

void thunk_FUN_0084e000(void)

{
  FUN_0084e000();
  return;
}


// ===== 0087752c  FUN_0087752c =====

void FUN_0087752c(void *param_1)

{
  FUN_0084e000();
  operator_delete(param_1);
  return;
}


// ===== 0087755c  FUN_0087755c =====

bool FUN_0087755c(undefined8 param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  bool bVar4;
  long lVar5;
  byte *pbVar6;
  long lVar7;
  ulong uVar8;
  undefined4 local_48;
  ushort local_44;
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar7 = *(long *)(param_2 + 0xa0);
  lVar5 = *(long *)(lVar7 + 8);
  if (lVar5 == 0) {
    pbVar6 = (byte *)0x0;
  }
  else {
    FUN_007b5788((long *)(lVar7 + 8),*(long *)(lVar5 + 8) - *(long *)(lVar7 + 0x10));
    plVar1 = (long *)(lVar7 + 8);
    plVar3 = (long *)(lVar7 + 0x10);
    lVar7 = *(long *)(param_2 + 0xa0);
    pbVar6 = (byte *)(*(long *)(*plVar1 + 0x10) + *plVar3);
  }
  uVar8 = *(ulong *)(lVar7 + 0x18);
  if (0xb < uVar8) {
    bVar4 = (*pbVar6 & 0x40) != 0;
    uVar2 = 0xe;
    if (bVar4) {
      uVar2 = 0x12;
    }
    local_48 = *(undefined4 *)(param_2 + 0x20);
    *(undefined8 *)(param_2 + 0x28) = uVar2;
    uStack_38 = 2;
    if (bVar4) {
      uStack_38 = 6;
    }
    local_44 = *(ushort *)(pbVar6 + 2) >> 8 | (ushort)((*(ushort *)(pbVar6 + 2) & 0xff00ff) << 8);
    local_40 = 0xc;
    FUN_0084e710(param_2 + 0x30,&local_48,1);
    *(ulong *)(param_2 + 0x98) =
         (ulong)((uint)(*(ushort *)(pbVar6 + 10) >> 8) | (*(ushort *)(pbVar6 + 10) & 0xff00ff) << 8)
    ;
    *(undefined2 *)(pbVar6 + 2) = *(undefined2 *)(pbVar6 + 8);
  }
  return 0xb < uVar8;
}


// ===== 00877644  FUN_00877644 =====

void FUN_00877644(undefined8 *param_1)

{
  FUN_0084e010(param_1,0x30,0x30,0x12);
  *param_1 = &PTR_thunk_FUN_0084e028_00d3ad88;
  return;
}


// ===== 00877684  thunk_FUN_0084e028 =====

void thunk_FUN_0084e028(void)

{
  FUN_0084e028();
  return;
}


// ===== 0087768c  FUN_0087768c =====

void FUN_0087768c(void *param_1)

{
  FUN_0084e028();
  operator_delete(param_1);
  return;
}


// ===== 008776bc  FUN_008776bc =====

undefined8 FUN_008776bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}


// ===== 008776c8  FUN_008776c8 =====

undefined8 FUN_008776c8(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0xe;
  if (2 < param_2) {
    uVar1 = 0x12;
  }
  return uVar1;
}


// ===== 008776e0  FUN_008776e0 =====

void FUN_008776e0(long *param_1,long param_2,long param_3,long param_4)

{
  byte bVar1;
  void *__src;
  size_t __n;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  byte *pbVar6;
  
  if (param_3 == 1) {
    uVar2 = *(undefined2 *)(param_2 + 4);
    __src = *(void **)(param_2 + 8);
    __n = *(size_t *)(param_2 + 0x10);
    lVar5 = *(long *)(param_4 + 8);
    if (lVar5 == 0) {
      pbVar6 = (byte *)0x0;
    }
    else {
      FUN_007b5788((long *)(param_4 + 8),*(long *)(lVar5 + 8) - *(long *)(param_4 + 0x10));
      pbVar6 = (byte *)(*(long *)(*(long *)(param_4 + 8) + 0x10) + *(long *)(param_4 + 0x10));
    }
    pbVar6[3] = (byte)uVar2;
    *(undefined2 *)(pbVar6 + 8) = *(undefined2 *)(pbVar6 + 2);
    pbVar6[2] = (byte)((ushort)uVar2 >> 8);
    bVar1 = *pbVar6 & 0x3f | 0x40;
    if (__n != 6) {
      bVar1 = *pbVar6 & 0x3f;
    }
    *pbVar6 = bVar1;
    iVar4 = (**(code **)(*param_1 + 0x18))(param_1,__n);
    uVar3 = *(int *)(param_4 + 0x18) - iVar4;
    *(ushort *)(pbVar6 + 10) = (ushort)(uVar3 >> 8) & 0xff | (ushort)((uVar3 & 0xff00ff) << 8);
    memcpy(pbVar6 + 0xc,__src,__n);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../modules/rtp_rtcp/source/ulpfec_header_reader_writer.cc",0x74,
               "protected_streams.size() == 1",&DAT_001fbca2,param_3,1);
}


// ===== 008777e4  FUN_008777e4 =====

void FUN_008777e4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined8 *)(param_1 + 2) = param_5;
  *(undefined8 *)(param_1 + 4) = param_4;
  uVar1 = FUN_0084be04(param_2);
  *(undefined8 *)(param_1 + 6) = uVar1;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 **)(param_1 + 0xe) = param_1 + 0xe;
  *(undefined4 **)(param_1 + 0x10) = param_1 + 0xe;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0x8000000000000000;
  return;
}


// ===== 0087783c  FUN_0087783c =====

void FUN_0087783c(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  void *pvVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long *plVar11;
  
  if (*(long *)(param_1 + 0x70) != -0x8000000000000000) {
    lVar2 = (**(code **)(**(long **)(param_1 + 8) + 0x10))();
    lVar4 = *(long *)(param_1 + 0x70);
    uVar9 = 0x7fffffffffffffff;
    if ((lVar2 == 0x7fffffffffffffff || lVar4 == -0x8000000000000000) ||
       (((lVar2 != -0x8000000000000000 && (lVar4 != 0x7fffffffffffffff)) &&
        (uVar9 = lVar2 - lVar4, 9999999 < (long)uVar9)))) {
      if ((*(long *)(param_1 + 0x50) != 0) &&
         (lVar2 = FUN_0066631c("WebRTC.Video.ReceivedFecPacketsInPercent",0x28,0x65), lVar2 != 0)) {
        uVar5 = 0;
        if (*(ulong *)(param_1 + 0x50) != 0) {
          uVar5 = (ulong)(*(long *)(param_1 + 0x60) * 100) / *(ulong *)(param_1 + 0x50);
        }
        FUN_00666568(lVar2,uVar5);
      }
      if ((*(long *)(param_1 + 0x60) != 0) &&
         (lVar2 = FUN_0066631c("WebRTC.Video.RecoveredMediaPacketsInPercentOfFec",0x30,0x65),
         lVar2 != 0)) {
        uVar5 = 0;
        if (*(ulong *)(param_1 + 0x60) != 0) {
          uVar5 = (ulong)(*(long *)(param_1 + 0x68) * 100) / *(ulong *)(param_1 + 0x60);
        }
        FUN_00666568(lVar2,uVar5);
      }
      if (*(int *)(param_1 + 4) != -1) {
        lVar2 = DAT_00d803d8;
        if (DAT_00d803d8 == 0) {
          lVar2 = FUN_006660d0("WebRTC.Video.FecBitrateReceivedInKbps",0x25,1,10000,0x32);
          FUN_00d0f5e0(0,lVar2,&DAT_00d803d8);
          if (lVar2 == 0) goto LAB_008779dc;
        }
        uVar5 = uVar9 / 1000000;
        if (499999 < uVar9 % 1000000) {
          uVar5 = uVar5 + 1;
        }
        uVar9 = 0;
        if (uVar5 != 0) {
          uVar9 = (ulong)(*(long *)(param_1 + 0x58) << 3) / uVar5;
        }
        FUN_00666568(lVar2,uVar9 / 1000);
      }
    }
  }
LAB_008779dc:
  puVar10 = *(undefined8 **)(param_1 + 0x20);
  puVar3 = *(undefined8 **)(param_1 + 0x28);
  while (puVar10 != puVar3) {
    puVar3 = puVar3 + -1;
    if (puVar3 == (undefined8 *)0x0) goto LAB_00877b60;
    pvVar8 = (void *)*puVar3;
    *puVar3 = 0;
    if (pvVar8 != (void *)0x0) {
      FUN_0084bc00(pvVar8);
      operator_delete(pvVar8);
    }
  }
  *(undefined8 **)(param_1 + 0x28) = puVar10;
  FUN_0084cd44(*(undefined8 *)(param_1 + 0x18),param_1 + 0x38);
  if (*(long *)(param_1 + 0x48) != 0) {
    plVar1 = *(long **)(param_1 + 0x40);
    plVar6 = *(long **)(*(long *)(param_1 + 0x38) + 8);
    *(long **)(*plVar1 + 8) = plVar6;
    *plVar6 = *plVar1;
    *(undefined8 *)(param_1 + 0x48) = 0;
    while (plVar1 != (long *)(param_1 + 0x38)) {
      plVar6 = plVar1 + 2;
      if (plVar6 == (long *)0x0) goto LAB_00877b60;
      pvVar8 = (void *)*plVar6;
      plVar11 = (long *)plVar1[1];
      *plVar6 = 0;
      if (pvVar8 != (void *)0x0) {
        FUN_0084bc1c(pvVar8);
        operator_delete(pvVar8);
      }
      if (plVar1 == (long *)0x0) goto LAB_00877b60;
      operator_delete(plVar1);
      plVar1 = plVar11;
    }
  }
  puVar10 = *(undefined8 **)(param_1 + 0x20);
  if (puVar10 != (undefined8 *)0x0) {
    puVar7 = *(undefined8 **)(param_1 + 0x28);
    puVar3 = puVar10;
    if (puVar10 != puVar7) {
      do {
        puVar7 = puVar7 + -1;
        if (puVar7 == (undefined8 *)0x0) {
LAB_00877b60:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        pvVar8 = (void *)*puVar7;
        *puVar7 = 0;
        if (pvVar8 != (void *)0x0) {
          FUN_0084bc00(pvVar8);
          operator_delete(pvVar8);
        }
      } while (puVar7 != puVar10);
      puVar3 = *(undefined8 **)(param_1 + 0x20);
    }
    *(undefined8 **)(param_1 + 0x28) = puVar10;
    operator_delete(puVar3);
  }
  pvVar8 = *(void **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (pvVar8 != (void *)0x0) {
    FUN_0084bd28(pvVar8);
    operator_delete(pvVar8);
    return;
  }
  return;
}


// ===== 00877b74  FUN_00877b74 =====

bool FUN_00877b74(int *param_1,long param_2)

{
  bool bVar1;
  uint uVar2;
  byte *pbVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined4 uVar7;
  uint uVar8;
  byte bVar9;
  undefined2 uVar10;
  undefined1 *puVar11;
  int iVar12;
  ulong uVar13;
  undefined4 *puVar14;
  long *plVar15;
  void *pvVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  char *pcVar19;
  long lVar20;
  void *pvVar21;
  long lVar22;
  undefined8 uVar23;
  undefined1 auStack_78 [24];
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined4 *local_48;
  
  if (*(int *)(param_2 + 0xc) != *param_1) {
    uVar13 = FUN_004022fc();
    if ((uVar13 & 1) != 0) {
      return false;
    }
    pcVar19 = "Received RED packet with different SSRC than expected; dropping.";
    uVar18 = 0x3ca;
LAB_00877c08:
    FUN_00623bb0(&DAT_001f4e98,"../../modules/rtp_rtcp/source/ulpfec_receiver.cc",uVar18,pcVar19);
    return false;
  }
  if (0x5dc < *(long *)(param_2 + 0x18) + *(long *)(param_2 + 0x10) + (ulong)*(byte *)(param_2 + 2))
  {
    uVar13 = FUN_004022fc();
    if ((uVar13 & 1) != 0) {
      return false;
    }
    pcVar19 = "Received RED packet with length exceeds maximum IP packet size; dropping.";
    uVar18 = 0x3f2;
    goto LAB_00877c08;
  }
  if (*(long *)(param_2 + 0x18) == 0) {
    uVar13 = FUN_004022fc();
    if ((uVar13 & 1) != 0) {
      return false;
    }
    pcVar19 = "Corrupt/truncated FEC packet.";
    uVar18 = 0x432;
    goto LAB_00877c08;
  }
  puVar14 = (undefined4 *)operator_new(0x30);
  FUN_0084bbd0();
  local_48 = puVar14;
  plVar15 = (long *)operator_new(0x28);
  FUN_0084bae8();
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x10))(plVar15);
  }
  if (*(long **)(puVar14 + 10) != (long *)0x0) {
    (**(code **)(**(long **)(puVar14 + 10) + 0x18))();
  }
  *(long **)(puVar14 + 10) = plVar15;
  plVar15 = (long *)(param_2 + 0x58);
  lVar20 = *plVar15;
  if (lVar20 == 0) {
    lVar22 = 0;
  }
  else {
    lVar22 = *(long *)(lVar20 + 0x10) + *(long *)(param_2 + 0x60);
  }
  lVar4 = *(long *)(param_2 + 0x10);
  lVar6 = *(long *)(param_2 + 0x18);
  uVar7 = *(undefined4 *)(param_2 + 0xc);
  uVar23 = *(undefined8 *)(param_2 + 0x28);
  uVar18 = *(undefined8 *)(param_2 + 0x20);
  pbVar3 = (byte *)0x0;
  if (lVar6 != 0) {
    pbVar3 = (byte *)(lVar22 + lVar4);
  }
  bVar9 = *pbVar3;
  uVar8 = param_1[1];
  *(undefined1 *)((long)puVar14 + 9) = *(undefined1 *)(param_2 + 0x80);
  uVar10 = *(undefined2 *)(param_2 + 4);
  *puVar14 = uVar7;
  uVar2 = bVar9 & 0x7f;
  *(undefined8 *)((long)puVar14 + 0x12) = uVar23;
  *(undefined8 *)((long)puVar14 + 10) = uVar18;
  *(undefined2 *)(puVar14 + 1) = uVar10;
  *(bool *)(puVar14 + 2) = uVar8 == uVar2;
  *(undefined8 *)((long)puVar14 + 0x19) = *(undefined8 *)(param_2 + 0x2f);
  if (lVar20 != 0) {
    lVar20 = *(long *)(lVar20 + 0x10) + *(long *)(param_2 + 0x60);
  }
  pcVar19 = (char *)0x0;
  if (lVar6 != 0) {
    pcVar19 = (char *)(lVar20 + lVar4);
  }
  iVar12 = (int)*pcVar19;
  bVar1 = iVar12 != -1 && iVar12 + 1 < 0 == SCARRY4(iVar12,1);
  if (*pcVar19 < '\0') {
    uVar13 = FUN_004022fc();
    if ((uVar13 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../modules/rtp_rtcp/source/ulpfec_receiver.cc",0x4d2,
                   "More than 1 block in RED packet is not supported.");
    }
    goto LAB_00877f80;
  }
  *(long *)(param_1 + 0x14) = *(long *)(param_1 + 0x14) + 1;
  *(ulong *)(param_1 + 0x16) =
       *(long *)(param_2 + 0x18) + *(long *)(param_2 + 0x10) +
       (ulong)*(byte *)(param_2 + 2) + *(long *)(param_1 + 0x16);
  if (*(long *)(param_1 + 0x1c) == -0x8000000000000000) {
    uVar18 = (**(code **)(**(long **)(param_1 + 2) + 0x10))();
    bVar9 = *(byte *)(puVar14 + 2);
    *(undefined8 *)(param_1 + 0x1c) = uVar18;
    if ((bVar9 & 1) == 0) goto LAB_00877d9c;
LAB_00877e0c:
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
    FUN_007b53e4(auStack_78,plVar15);
    lVar20 = *(long *)(param_2 + 0x10);
    lVar22 = *(long *)(param_2 + 0x18);
    puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_007b53e4(&local_60,auStack_78);
    puVar11 = local_60;
    local_50 = (undefined1 *)(lVar22 + -1);
    lVar22 = *(long *)(puVar14 + 10);
    local_60 = (undefined1 *)0x0;
    puStack_58 = puStack_58 + lVar20 + 1;
    pvVar21 = *(void **)(lVar22 + 8);
    *(undefined1 **)(lVar22 + 8) = puVar11;
    if ((pvVar21 != (void *)0x0) &&
       (iVar12 = FUN_00d0f7a0(0xffffffff,(long)pvVar21 + 0x18), iVar12 == 1)) {
      pvVar16 = *(void **)((long)pvVar21 + 0x10);
      *(undefined8 *)((long)pvVar21 + 0x10) = 0;
      if (pvVar16 != (void *)0x0) {
        operator_delete__(pvVar16);
      }
      operator_delete(pvVar21);
    }
    *(undefined1 **)(lVar22 + 0x10) = puStack_58;
    *(undefined1 **)(lVar22 + 0x18) = local_50;
    *(undefined8 *)((ulong)&local_60 | 8) = 0;
    ((undefined8 *)((ulong)&local_60 | 8))[1] = 0;
    FUN_007b5554(&local_60);
    FUN_007b5554(auStack_78);
    puVar14 = local_48;
  }
  else {
    if (uVar8 == uVar2) goto LAB_00877e0c;
LAB_00877d9c:
    FUN_007b5880(*(long *)(puVar14 + 10) + 8,
                 *(long *)(param_2 + 0x10) + *(long *)(param_2 + 0x18) +
                 (ulong)*(byte *)(param_2 + 2) + -1);
    if (*(long *)(param_2 + 0x58) == 0) {
      lVar20 = 0;
    }
    else {
      lVar20 = *(long *)(*(long *)(param_2 + 0x58) + 0x10) + *(long *)(param_2 + 0x60);
    }
    FUN_007da49c(*(long *)(puVar14 + 10) + 8,lVar20,*(undefined8 *)(param_2 + 0x10));
    lVar22 = *(long *)(puVar14 + 10);
    lVar20 = *(long *)(lVar22 + 8);
    if (lVar20 != 0) {
      FUN_007b5788((long *)(lVar22 + 8),*(long *)(lVar20 + 8) - *(long *)(lVar22 + 0x10));
      lVar20 = *(long *)(*(long *)(lVar22 + 8) + 0x10) + *(long *)(lVar22 + 0x10);
    }
    puVar14 = local_48;
    *(byte *)(lVar20 + 1) = *(byte *)(lVar20 + 1) & 0x80 | (byte)uVar2;
    lVar20 = *plVar15;
    if (lVar20 != 0) {
      lVar20 = *(long *)(lVar20 + 0x10) + *(long *)(param_2 + 0x60);
    }
    FUN_00877fc4(*(long *)(local_48 + 10) + 8,lVar20 + *(long *)(param_2 + 0x10) + 1,
                 *(long *)(param_2 + 0x18) + (ulong)*(byte *)(param_2 + 2) + -1);
  }
  if (*(long *)(*(long *)(puVar14 + 10) + 0x18) != 0) {
    puVar5 = *(undefined8 **)(param_1 + 10);
    if (puVar5 < *(undefined8 **)(param_1 + 0xc)) {
      if (puVar5 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      local_48 = (undefined4 *)0x0;
      puVar17 = puVar5 + 1;
      *puVar5 = puVar14;
    }
    else {
      puVar17 = (undefined8 *)FUN_0087849c(param_1 + 8,&local_48);
    }
    *(undefined8 **)(param_1 + 10) = puVar17;
    puVar14 = local_48;
  }
LAB_00877f80:
  local_48 = (undefined4 *)0x0;
  if (puVar14 != (undefined4 *)0x0) {
    FUN_0084bc00(puVar14);
    operator_delete(puVar14);
    return bVar1;
  }
  return bVar1;
}


// ===== 00877fc4  FUN_00877fc4 =====

void FUN_00877fc4(long *param_1,void *param_2,ulong param_3)

{
  ulong uVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  size_t __n;
  void *pvVar5;
  ulong *puVar6;
  
  if (*param_1 == 0) {
    puVar6 = (ulong *)operator_new(0x20);
    *puVar6 = param_3;
    puVar6[1] = param_3;
    if (param_3 == 0) {
      pvVar2 = (void *)0x0;
    }
    else {
      pvVar2 = operator_new__(param_3);
      memcpy(pvVar2,param_2,param_3);
    }
    puVar6[2] = (ulong)pvVar2;
    *(undefined4 *)(puVar6 + 3) = 0;
    if (puVar6 != (ulong *)0x0) {
      FUN_00d0f740(1,puVar6 + 3);
    }
    *param_1 = (long)puVar6;
    param_1[1] = 0;
    param_1[2] = param_3;
  }
  else {
    uVar3 = *(long *)(*param_1 + 8) - param_1[1];
    if (uVar3 <= param_1[2] + param_3) {
      uVar3 = param_1[2] + param_3;
    }
    FUN_007b5788(param_1,uVar3);
    puVar6 = (ulong *)*param_1;
    uVar4 = puVar6[1];
    uVar3 = param_1[2] + param_1[1];
    if (uVar4 < uVar3) {
      uVar4 = uVar4 + (uVar4 >> 1);
      uVar1 = uVar3;
      if (uVar3 <= uVar4) {
        uVar1 = uVar4;
      }
      pvVar2 = operator_new__(uVar1);
      pvVar5 = (void *)puVar6[2];
      if (pvVar5 == (void *)0x0) {
        puVar6[2] = (ulong)pvVar2;
      }
      else {
        memcpy(pvVar2,pvVar5,*puVar6);
        puVar6[2] = (ulong)pvVar2;
        operator_delete__(pvVar5);
      }
      puVar6[1] = uVar1;
    }
    *puVar6 = uVar3;
    if (param_3 != 0) {
      puVar6 = (ulong *)*param_1;
      __n = *puVar6;
      uVar4 = puVar6[1];
      uVar3 = __n + param_3;
      if (uVar4 < uVar3) {
        uVar4 = uVar4 + (uVar4 >> 1);
        uVar1 = uVar3;
        if (uVar3 <= uVar4) {
          uVar1 = uVar4;
        }
        pvVar2 = operator_new__(uVar1);
        pvVar5 = (void *)puVar6[2];
        if (pvVar5 == (void *)0x0) {
          puVar6[2] = (ulong)pvVar2;
        }
        else {
          memcpy(pvVar2,pvVar5,__n);
          puVar6[2] = (ulong)pvVar2;
          operator_delete__(pvVar5);
          __n = *puVar6;
        }
        puVar6[1] = uVar1;
      }
      memcpy((void *)(puVar6[2] + __n),param_2,param_3);
      *puVar6 = uVar3;
    }
    param_1[2] = param_1[2] + param_3;
  }
  return;
}


// ===== 0087817c  FUN_0087817c =====

void FUN_0087817c(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  ulong uVar5;
  void *pvVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  void *pvVar12;
  long lVar13;
  undefined1 auStack_158 [24];
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined1 auStack_128 [24];
  undefined1 *local_110;
  undefined1 *puStack_108;
  undefined1 *puStack_100;
  undefined1 *puStack_f8;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined1 *puStack_e0;
  undefined1 *puStack_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  plVar1 = *(long **)(param_1 + 0x20);
  plVar9 = *(long **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (plVar1 == plVar9) {
    if (plVar1 == (long *)0x0) goto LAB_00878450;
  }
  else {
    lVar10 = 0;
    lVar11 = 0;
    plVar8 = plVar1;
    do {
      lVar7 = *plVar8;
      if ((*(byte *)(lVar7 + 8) & 1) == 0) {
        lVar13 = *(long *)(lVar7 + 0x28);
        puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
        local_c0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_b0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
        local_a0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
        local_90 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
        local_d0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
        local_110 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_100 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
        local_f0 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_e0 = &DAT_aaaaaaaaaaaaaaaa;
        FUN_007dc060(&local_110,lVar7 + 10,0x8000000000000000);
        FUN_007b5434(auStack_128,lVar13 + 8);
        uVar5 = FUN_007da648(&local_110,auStack_128);
        FUN_007b5554(auStack_128);
        if ((uVar5 & 1) != 0) {
          (**(code **)**(undefined8 **)(param_1 + 0x10))
                    (*(undefined8 **)(param_1 + 0x10),&local_110);
          FUN_007dac40(&local_110);
          FUN_007b53e4(&local_140,&puStack_b8);
          uVar3 = local_140;
          local_140 = 0;
          pvVar12 = *(void **)(lVar13 + 8);
          *(undefined8 *)(lVar13 + 8) = uVar3;
          if ((pvVar12 != (void *)0x0) &&
             (iVar4 = FUN_00d0f7a0(0xffffffff,(long)pvVar12 + 0x18), iVar4 == 1)) {
            pvVar6 = *(void **)((long)pvVar12 + 0x10);
            *(undefined8 *)((long)pvVar12 + 0x10) = 0;
            if (pvVar6 != (void *)0x0) {
              operator_delete__(pvVar6);
            }
            operator_delete(pvVar12);
          }
          *(undefined8 *)(lVar13 + 0x10) = local_138;
          *(undefined8 *)(lVar13 + 0x18) = local_130;
          local_138 = 0;
          local_130 = 0;
          FUN_007b5554(&local_140);
          FUN_007dc1b4(&local_110);
          lVar7 = *plVar8;
          goto LAB_008782ec;
        }
        uVar5 = FUN_004022fc();
        if ((uVar5 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4e98,"../../modules/rtp_rtcp/source/ulpfec_receiver.cc",0x6ba,
                       "Corrupted media packet");
        }
        FUN_007dc1b4(&local_110);
      }
      else {
LAB_008782ec:
        if ((*(byte *)(lVar7 + 9) & 1) == 0) {
          lVar10 = FUN_0084df04(*(undefined8 *)(param_1 + 0x18),lVar7,param_1 + 0x38);
          lVar11 = lVar10 + lVar11;
          lVar10 = *plVar8 + 10;
        }
      }
      plVar8 = plVar8 + 1;
    } while (plVar8 != plVar9);
    if (lVar11 != 0) {
      for (lVar11 = *(long *)(param_1 + 0x40); lVar11 != param_1 + 0x38;
          lVar11 = *(long *)(lVar11 + 8)) {
        if ((*(byte *)(*(long *)(lVar11 + 0x10) + 9) & 1) == 0) {
          lVar7 = *(long *)(*(long *)(lVar11 + 0x10) + 0x10);
          *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + 1;
          *(undefined1 *)(*(long *)(lVar11 + 0x10) + 9) = 1;
          puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
          local_c0 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_b0 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
          local_a0 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
          local_90 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
          local_d0 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
          local_110 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_100 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
          local_f0 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_e0 = &DAT_aaaaaaaaaaaaaaaa;
          FUN_007dc060(&local_110,lVar10,0x8000000000000000);
          FUN_007b53e4(auStack_158,lVar7 + 8);
          uVar5 = FUN_007da648(&local_110,auStack_158);
          FUN_007b5554(auStack_158);
          if ((uVar5 & 1) != 0) {
            local_90 = (undefined1 *)CONCAT71(local_90._1_7_,1);
            (**(code **)**(undefined8 **)(param_1 + 0x10))
                      (*(undefined8 **)(param_1 + 0x10),&local_110);
          }
          FUN_007dc1b4(&local_110);
        }
      }
    }
    if (plVar1 == (long *)0x0) goto LAB_00878450;
    do {
      plVar9 = plVar9 + -1;
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      pvVar12 = (void *)*plVar9;
      *plVar9 = 0;
      if (pvVar12 != (void *)0x0) {
        FUN_0084bc00(pvVar12);
        operator_delete(pvVar12);
      }
    } while (plVar9 != plVar1);
  }
  operator_delete(plVar1);
LAB_00878450:
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0087849c  FUN_0087849c =====

undefined8 * FUN_0087849c(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  size_t __n;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  void *__dest;
  
  puVar7 = (undefined8 *)(param_1[1] - *param_1);
  uVar1 = ((long)puVar7 >> 3) + 1;
  if (uVar1 >> 0x3d != 0) {
    FUN_00878594();
LAB_00878590:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  uVar4 = param_1[2] - *param_1;
  uVar6 = (long)uVar4 >> 2;
  if (uVar6 <= uVar1) {
    uVar6 = uVar1;
  }
  if (0x7ffffffffffffff7 < uVar4) {
    uVar6 = 0x1fffffffffffffff;
  }
  if (uVar6 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (uVar6 >> 0x3d != 0) goto LAB_00878590;
    pvVar2 = operator_new(uVar6 << 3);
    puVar7 = (undefined8 *)((long)pvVar2 + (long)puVar7);
  }
  if (puVar7 != (undefined8 *)0x0) {
    uVar5 = *param_2;
    *param_2 = 0;
    *puVar7 = uVar5;
    __n = param_1[1] - *param_1;
    __dest = (void *)((long)puVar7 - __n);
    memcpy(__dest,(void *)*param_1,__n);
    pvVar3 = (void *)*param_1;
    *param_1 = (long)__dest;
    param_1[1] = (long)(puVar7 + 1);
    param_1[2] = (long)((long)pvVar2 + uVar6 * 8);
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    return puVar7 + 1;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00878594  FUN_00878594 =====

void FUN_00878594(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 008785ac  FUN_008785ac =====

void FUN_008785ac(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  byte *pbVar1;
  undefined8 *puVar2;
  byte bVar3;
  byte bVar4;
  undefined1 uVar5;
  ulong uVar6;
  uint uVar7;
  undefined1 *puVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  ulong uVar12;
  size_t *****pppppsVar13;
  size_t *****pppppsVar14;
  ulong *puVar15;
  size_t ****ppppsVar16;
  void *pvVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  size_t ****ppppsVar21;
  ulong uVar22;
  undefined8 uVar23;
  size_t ****ppppsVar24;
  size_t *****pppppsVar25;
  size_t ****ppppsVar26;
  size_t ****ppppsVar27;
  size_t *****pppppsVar28;
  ulong uVar29;
  size_t ****ppppsVar30;
  ulong uVar31;
  size_t *****pppppsVar32;
  long lVar33;
  void *__dest;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  size_t ***local_390;
  byte local_384 [4];
  undefined1 *local_380;
  undefined1 *puStack_378;
  undefined1 *local_370;
  undefined1 *puStack_368;
  size_t ***local_360;
  size_t ***pppsStack_358;
  undefined1 *local_350;
  size_t ****appppsStack_348 [14];
  undefined1 *puStack_2d8;
  undefined1 *local_2d0;
  undefined1 *puStack_2c8;
  undefined1 *puStack_2c0;
  undefined1 *puStack_2b8;
  undefined1 *local_2b0;
  undefined1 *puStack_2a8;
  undefined1 *puStack_2a0;
  undefined1 *puStack_298;
  undefined1 *local_290;
  undefined1 *puStack_288;
  undefined1 *puStack_280;
  undefined1 *puStack_278;
  undefined1 *local_270;
  undefined1 *puStack_268;
  undefined1 *puStack_260;
  undefined1 *puStack_258;
  undefined1 *local_250;
  undefined1 *puStack_248;
  undefined1 *puStack_240;
  undefined1 *puStack_238;
  undefined1 *local_230;
  undefined1 *puStack_228;
  undefined1 *puStack_220;
  undefined1 *puStack_218;
  undefined1 *local_210;
  undefined1 *puStack_208;
  undefined1 *puStack_200;
  undefined1 *puStack_1f8;
  undefined1 *local_1f0;
  undefined1 *local_1e0;
  size_t ****local_1d8 [14];
  undefined1 *local_168;
  undefined1 *puStack_160;
  undefined1 *local_158;
  undefined1 *puStack_150;
  undefined1 *local_148;
  undefined1 *puStack_140;
  undefined1 *local_138;
  undefined1 *puStack_130;
  undefined1 *local_128;
  undefined1 *puStack_120;
  undefined1 *local_118;
  undefined1 *puStack_110;
  undefined1 *local_108;
  undefined1 *puStack_100;
  undefined1 *local_f8;
  undefined1 *puStack_f0;
  undefined1 *local_e8;
  undefined1 *puStack_e0;
  undefined1 *local_d8;
  undefined1 *puStack_d0;
  undefined1 *puStack_c8;
  undefined1 *puStack_c0;
  undefined1 *local_b8;
  undefined1 *puStack_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  long local_78;
  
  lVar19 = tpidr_el0;
  local_78 = *(long *)(lVar19 + 0x28);
  local_1f0 = &DAT_aaaaaaaaaaaaaaaa;
  appppsStack_348[0] = (size_t ****)&DAT_aaaaaaaaaaaaaaaa;
  local_350 = &DAT_aaaaaaaaaaaaaaaa;
  appppsStack_348[2] = (size_t ****)&DAT_aaaaaaaaaaaaaaaa;
  appppsStack_348[1] = (size_t ****)&DAT_aaaaaaaaaaaaaaaa;
  appppsStack_348[4] = (size_t ****)&DAT_aaaaaaaaaaaaaaaa;
  appppsStack_348[3] = (size_t ****)&DAT_aaaaaaaaaaaaaaaa;
  appppsStack_348[6] = (size_t ****)&DAT_aaaaaaaaaaaaaaaa;
  appppsStack_348[5] = (size_t ****)&DAT_aaaaaaaaaaaaaaaa;
  appppsStack_348[8] = (size_t ****)&DAT_aaaaaaaaaaaaaaaa;
  appppsStack_348[7] = (size_t ****)&DAT_aaaaaaaaaaaaaaaa;
  appppsStack_348[10] = (size_t ****)&DAT_aaaaaaaaaaaaaaaa;
  appppsStack_348[9] = (size_t ****)&DAT_aaaaaaaaaaaaaaaa;
  appppsStack_348[0xc] = (size_t ****)&DAT_aaaaaaaaaaaaaaaa;
  appppsStack_348[0xb] = (size_t ****)&DAT_aaaaaaaaaaaaaaaa;
  puStack_2d8 = &DAT_aaaaaaaaaaaaaaaa;
  appppsStack_348[0xd] = (size_t ****)&DAT_aaaaaaaaaaaaaaaa;
  puStack_2c8 = &DAT_aaaaaaaaaaaaaaaa;
  local_2d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_2b8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_2c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_2a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_2b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_298 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_2a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_288 = &DAT_aaaaaaaaaaaaaaaa;
  local_290 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_278 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_280 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_268 = &DAT_aaaaaaaaaaaaaaaa;
  local_270 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_258 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_260 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_248 = &DAT_aaaaaaaaaaaaaaaa;
  local_250 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_238 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_240 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_228 = &DAT_aaaaaaaaaaaaaaaa;
  local_230 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_218 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_220 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_208 = &DAT_aaaaaaaaaaaaaaaa;
  local_210 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1f8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_200 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d0 = &DAT_aaaaaaaaaaaaaaaa;
  local_d8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b0 = &DAT_aaaaaaaaaaaaaaaa;
  local_b8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e0 = &DAT_aaaaaaaaaaaaaaaa;
  local_e8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_f0 = &DAT_aaaaaaaaaaaaaaaa;
  local_f8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_100 = &DAT_aaaaaaaaaaaaaaaa;
  local_108 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_110 = &DAT_aaaaaaaaaaaaaaaa;
  local_118 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_120 = &DAT_aaaaaaaaaaaaaaaa;
  local_128 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_130 = &DAT_aaaaaaaaaaaaaaaa;
  local_138 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_140 = &DAT_aaaaaaaaaaaaaaaa;
  local_148 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_150 = &DAT_aaaaaaaaaaaaaaaa;
  local_158 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_160 = &DAT_aaaaaaaaaaaaaaaa;
  local_168 = &DAT_aaaaaaaaaaaaaaaa;
  local_1d8[0xd] = (size_t ****)&DAT_aaaaaaaaaaaaaaaa;
  local_1d8[0xc] = (size_t ****)&DAT_aaaaaaaaaaaaaaaa;
  local_1d8[0xb] = (size_t ****)&DAT_aaaaaaaaaaaaaaaa;
  local_1d8[10] = (size_t ****)&DAT_aaaaaaaaaaaaaaaa;
  local_1d8[9] = (size_t ****)&DAT_aaaaaaaaaaaaaaaa;
  local_1d8[8] = (size_t ****)&DAT_aaaaaaaaaaaaaaaa;
  local_1d8[7] = (size_t ****)&DAT_aaaaaaaaaaaaaaaa;
  local_1d8[6] = (size_t ****)&DAT_aaaaaaaaaaaaaaaa;
  local_1d8[5] = (size_t ****)&DAT_aaaaaaaaaaaaaaaa;
  local_1d8[4] = (size_t ****)&DAT_aaaaaaaaaaaaaaaa;
  local_1d8[3] = (size_t ****)&DAT_aaaaaaaaaaaaaaaa;
  local_1d8[2] = (size_t ****)&DAT_aaaaaaaaaaaaaaaa;
  local_1d8[1] = (size_t ****)&DAT_aaaaaaaaaaaaaaaa;
  local_1d8[0] = (size_t ****)&DAT_aaaaaaaaaaaaaaaa;
  local_1e0 = (undefined1 *)0x0;
  puVar8 = (undefined1 *)(param_4 * 0x10);
  if ((undefined1 *)(param_4 * 0x10) != (undefined1 *)0x0) {
    bVar10 = false;
    puVar2 = param_3 + param_4 * 2;
    do {
      puStack_378 = &DAT_aaaaaaaaaaaaaaaa;
      local_380 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_368 = &DAT_aaaaaaaaaaaaaaaa;
      local_370 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_00879324(&local_380,*param_3,param_3[1]);
      local_384[0] = 0xaa;
      uVar12 = FUN_0087934c(&local_380,local_384);
      bVar3 = local_384[0];
      if (((uVar12 & 1) == 0) || (bVar10 != (char)local_384[0] < '\0')) {
LAB_008788cc:
        local_350 = (undefined1 *)0x0;
        puVar8 = local_350;
        goto LAB_008789d0;
      }
      uVar7 = local_384[0] >> 4 & 3;
      if (puStack_368 == local_370) {
        if (uVar7 != 1) goto LAB_008788cc;
        if (-1 < (char)local_384[0]) {
          ppppsVar24 = (size_t ****)(undefined1 *)0x4;
          if (((ulong)local_1e0 & 1) != 0) {
            ppppsVar24 = local_1d8[1];
          }
          if ((size_t ****)((ulong)local_1e0 >> 1) == ppppsVar24) {
            FUN_00878ed8(&local_1e0);
          }
          else {
            pppppsVar14 = local_1d8;
            if (((ulong)local_1e0 & 1) != 0) {
              pppppsVar14 = (size_t *****)local_1d8[0];
            }
            pppppsVar14 = pppppsVar14 + (long)((ulong)local_1e0 >> 1) * 0xb;
            if (pppppsVar14 == (size_t *****)0x0) goto LAB_008789b0;
            pppppsVar14[10] = (size_t ****)0x0;
            pppppsVar14[3] = (size_t ****)0x0;
            pppppsVar14[2] = (size_t ****)0x0;
            pppppsVar14[5] = (size_t ****)0x0;
            pppppsVar14[4] = (size_t ****)0x0;
            pppppsVar14[7] = (size_t ****)0x0;
            pppppsVar14[6] = (size_t ****)0x0;
            pppppsVar14[9] = (size_t ****)0x0;
            pppppsVar14[8] = (size_t ****)0x0;
            pppppsVar14[1] = (size_t ****)0x0;
            *pppppsVar14 = (size_t ****)0x0;
            local_1e0 = local_1e0 + 2;
          }
        }
      }
      else {
        iVar11 = 0;
        do {
          if (((char)bVar3 < '\0') && (iVar11 == 0)) {
            if (local_1e0 < (undefined1 *)0x2) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x878d80);
              (*pcVar9)();
            }
            pppppsVar14 = local_1d8;
            if (((ulong)local_1e0 & 1) != 0) {
              pppppsVar14 = (size_t *****)local_1d8[0];
            }
            pppppsVar14 = pppppsVar14 + ((ulong)local_1e0 >> 1) * 0xb + -0xb;
          }
          else {
            ppppsVar24 = (size_t ****)(undefined1 *)0x4;
            if (((ulong)local_1e0 & 1) != 0) {
              ppppsVar24 = local_1d8[1];
            }
            if ((size_t ****)((ulong)local_1e0 >> 1) == ppppsVar24) {
              pppppsVar14 = (size_t *****)FUN_00878ed8(&local_1e0);
            }
            else {
              pppppsVar14 = local_1d8;
              if (((ulong)local_1e0 & 1) != 0) {
                pppppsVar14 = (size_t *****)local_1d8[0];
              }
              pppppsVar14 = pppppsVar14 + (long)((ulong)local_1e0 >> 1) * 0xb;
              if (pppppsVar14 == (size_t *****)0x0) goto LAB_008789b0;
              pppppsVar14[10] = (size_t ****)0x0;
              pppppsVar14[3] = (size_t ****)0x0;
              pppppsVar14[2] = (size_t ****)0x0;
              pppppsVar14[5] = (size_t ****)0x0;
              pppppsVar14[4] = (size_t ****)0x0;
              pppppsVar14[7] = (size_t ****)0x0;
              pppppsVar14[6] = (size_t ****)0x0;
              pppppsVar14[9] = (size_t ****)0x0;
              pppppsVar14[8] = (size_t ****)0x0;
              pppppsVar14[1] = (size_t ****)0x0;
              *pppppsVar14 = (size_t ****)0x0;
              local_1e0 = local_1e0 + 2;
            }
          }
          local_390 = (size_t ***)&DAT_aaaaaaaaaaaaaaaa;
          if (uVar7 - 1 == iVar11) {
            local_390 = (size_t ***)(puStack_368 + -(long)local_370);
          }
          else {
            uVar12 = FUN_00879450(&local_380,&local_390);
            if (((uVar12 & 1) == 0) || (puStack_368 + -(long)local_370 < local_390))
            goto LAB_008788cc;
          }
          if ((size_t ****)local_390 != (size_t ****)0x0) {
            pppsStack_358 = (size_t ***)(local_380 + (long)local_370);
            pppppsVar13 = pppppsVar14 + 6;
            if (((ulong)*pppppsVar13 & 1) == 0) {
              pppppsVar28 = pppppsVar14 + 7;
              ppppsVar24 = (size_t ****)0x2;
            }
            else {
              pppppsVar28 = (size_t *****)pppppsVar14[7];
              ppppsVar24 = pppppsVar14[8];
            }
            ppppsVar30 = (size_t ****)((ulong)*pppppsVar13 >> 1);
            local_360 = local_390;
            if (ppppsVar30 == ppppsVar24) {
              FUN_00879118(pppppsVar13,&pppsStack_358,&local_360);
            }
            else {
              pppppsVar28 = pppppsVar28 + (long)ppppsVar30 * 2;
              if (pppppsVar28 == (size_t *****)0x0) goto LAB_008789b0;
              *pppppsVar28 = (size_t ****)pppsStack_358;
              pppppsVar28[1] = (size_t ****)local_390;
              *pppppsVar13 = (size_t ****)((long)*pppppsVar13 + 2);
            }
            pppppsVar14[5] = (size_t ****)((long)pppppsVar14[5] + (long)local_360);
            FUN_0087972c(&local_380,local_390);
          }
          iVar11 = iVar11 + 1;
        } while (puStack_368 != local_370);
      }
      param_3 = param_3 + 2;
      bVar10 = (bool)(local_384[0] >> 6 & 1);
    } while (param_3 != puVar2);
    if ((local_384[0] >> 6 & 1) == 0) {
      local_350 = (undefined1 *)0x0;
      if (((ulong)local_1e0 & 1) != 0) {
        local_350 = local_1e0;
        appppsStack_348[0] = local_1d8[0];
        appppsStack_348[1] = local_1d8[1];
        goto LAB_008789e4;
      }
      puVar8 = local_1e0;
      if (local_1e0 != (undefined1 *)0x0) {
        uVar12 = (ulong)local_1e0 >> 1;
        lVar33 = 0;
        uVar22 = (long)&local_350 * -0xe8ba2e8ba2e8ba3 + 0x8ba2e8ba2e8ba2e8U >> 3;
        do {
          if (uVar22 == 0) {
LAB_008789b0:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          uVar34 = *(undefined8 *)((long)local_1d8 + lVar33);
          uVar36 = *(undefined8 *)((long)local_1d8 + lVar33 + 0x18);
          uVar35 = *(undefined8 *)((long)local_1d8 + lVar33 + 0x10);
          uVar20 = *(undefined8 *)((long)local_1d8 + lVar33 + 0x20);
          uVar31 = *(ulong *)((long)local_1d8 + lVar33 + 0x30);
          uVar23 = *(undefined8 *)((long)local_1d8 + lVar33 + 0x28);
          *(undefined8 *)((long)appppsStack_348 + lVar33 + 8) =
               *(undefined8 *)((long)local_1d8 + lVar33 + 8);
          *(undefined8 *)((long)appppsStack_348 + lVar33) = uVar34;
          *(undefined8 *)((long)appppsStack_348 + lVar33 + 0x18) = uVar36;
          *(undefined8 *)((long)appppsStack_348 + lVar33 + 0x10) = uVar35;
          *(undefined8 *)((long)appppsStack_348 + lVar33 + 0x20) = uVar20;
          puVar15 = (ulong *)((long)appppsStack_348 + lVar33 + 0x30);
          *puVar15 = 0;
          *(undefined8 *)((long)appppsStack_348 + lVar33 + 0x28) = uVar23;
          if (1 < uVar31) {
            if ((uVar31 & 1) == 0) {
              *puVar15 = uVar31;
              uVar20 = *(undefined8 *)((long)local_1d8 + lVar33 + 0x38);
              uVar34 = *(undefined8 *)((long)local_1d8 + lVar33 + 0x50);
              uVar23 = *(undefined8 *)((long)local_1d8 + lVar33 + 0x48);
              *(undefined8 *)((long)appppsStack_348 + lVar33 + 0x40) =
                   *(undefined8 *)((long)local_1d8 + lVar33 + 0x40);
              *(undefined8 *)((long)appppsStack_348 + lVar33 + 0x38) = uVar20;
              *(undefined8 *)((long)appppsStack_348 + lVar33 + 0x50) = uVar34;
              *(undefined8 *)((long)appppsStack_348 + lVar33 + 0x48) = uVar23;
            }
            else {
              FUN_00879090();
            }
          }
          uVar12 = uVar12 - 1;
          lVar33 = lVar33 + 0x58;
          uVar22 = uVar22 - 1;
        } while (uVar12 != 0);
        puVar8 = (undefined1 *)((ulong)local_1e0 & 0xfffffffffffffffe);
      }
    }
    else {
      local_350 = (undefined1 *)0x0;
      puVar8 = local_350;
    }
  }
LAB_008789d0:
  local_350 = puVar8;
  if (local_1e0 != (undefined1 *)0x0) {
    FUN_00879214(&local_1e0);
  }
LAB_008789e4:
  if (local_350 < (undefined1 *)0x2) {
LAB_008789ec:
    *param_1 = 0;
  }
  else {
    uVar22 = (ulong)local_350 >> 1;
    lVar33 = 0;
    uVar12 = 0;
    do {
      pppppsVar14 = (size_t *****)((ulong)&local_350 | 8);
      if (((ulong)local_350 & 1) != 0) {
        pppppsVar14 = (size_t *****)appppsStack_348[0];
      }
      pppppsVar14 = pppppsVar14 + uVar12 * 0xb;
      ppppsVar24 = pppppsVar14[6];
      if (ppppsVar24 < (size_t ****)0x2) goto LAB_008789ec;
      pppppsVar13 = pppppsVar14 + 7;
      pppppsVar28 = pppppsVar14 + 7;
      if (((ulong)ppppsVar24 & 1) != 0) {
        pppppsVar28 = (size_t *****)*pppppsVar13;
      }
      bVar4 = *(byte *)*pppppsVar28;
      *pppppsVar14 = (size_t ****)0x1;
      bVar3 = bVar4;
      if (uVar12 != uVar22 - 1) {
        bVar3 = bVar4 | 2;
      }
      *(byte *)(pppppsVar14 + 1) = bVar3;
      ppppsVar30 = pppppsVar28[1];
      lVar18 = 0;
      if (ppppsVar30 == (size_t ****)0x1) {
        lVar18 = 0x10;
      }
      ppppsVar26 = (size_t ****)(ulong)(ppppsVar30 != (size_t ****)0x1);
      pppppsVar25 = (size_t *****)((long)pppppsVar28 + lVar18);
      if ((bVar4 >> 2 & 1) == 0) {
        ppppsVar30 = (size_t ****)0x1;
        if ((bVar4 >> 1 & 1) == 0) goto LAB_00878ad8;
LAB_00878b44:
        uVar29 = 0;
        uVar31 = 0;
        ppppsVar16 = (size_t ****)0x0;
        ppppsVar21 = ppppsVar30;
        ppppsVar27 = ppppsVar26;
        do {
          pppppsVar28 = pppppsVar14 + 7;
          if (((ulong)ppppsVar24 & 1) != 0) {
            pppppsVar28 = (size_t *****)*pppppsVar13;
          }
          if ((ppppsVar27 == (size_t ****)0x0 &&
               pppppsVar25 == pppppsVar28 + ((ulong)ppppsVar24 & 0xfffffffffffffffe)) ||
             (7 < uVar31)) goto LAB_008789ec;
          uVar31 = uVar31 + 1;
          ppppsVar21 = (size_t ****)((long)ppppsVar21 + 1);
          pbVar1 = (byte *)((long)*pppppsVar25 + (long)ppppsVar27);
          bVar10 = (size_t ****)((long)ppppsVar27 + 1) != pppppsVar25[1];
          lVar18 = 0x10;
          if (bVar10) {
            lVar18 = 0;
          }
          ppppsVar26 = (size_t ****)0x0;
          if (bVar10) {
            ppppsVar26 = (size_t ****)((long)ppppsVar27 + 1);
          }
          pppppsVar25 = (size_t *****)((long)pppppsVar25 + lVar18);
          uVar6 = uVar29 & 0x3f;
          uVar29 = uVar29 + 7;
          ppppsVar16 = (size_t ****)(((ulong)*pbVar1 & 0x7f) << uVar6 | (ulong)ppppsVar16);
          ppppsVar27 = ppppsVar26;
        } while ((char)*pbVar1 < '\0');
        pppppsVar14[2] = (size_t ****)((long)pppppsVar14[5] - (long)ppppsVar21);
        if ((size_t ****)((long)pppppsVar14[5] - (long)ppppsVar21) != ppppsVar16) goto LAB_008789ec;
      }
      else {
        pppppsVar32 = pppppsVar14 + 7;
        if (((ulong)ppppsVar24 & 1) != 0) {
          pppppsVar32 = (size_t *****)*pppppsVar13;
        }
        if ((ppppsVar30 == (size_t ****)0x1) &&
           (pppppsVar25 == pppppsVar32 + ((ulong)ppppsVar24 & 0xfffffffffffffffe)))
        goto LAB_008789ec;
        uVar5 = *(undefined1 *)((long)*pppppsVar25 + (long)ppppsVar26);
        *pppppsVar14 = (size_t ****)0x2;
        *(undefined1 *)((long)pppppsVar14 + 9) = uVar5;
        lVar18 = 8;
        if (ppppsVar30 == (size_t ****)0x1) {
          lVar18 = 0x18;
        }
        ppppsVar21 = (size_t ****)0x1;
        if (ppppsVar30 != (size_t ****)0x1) {
          ppppsVar21 = (size_t ****)0x2;
        }
        bVar10 = ppppsVar21 != *(size_t *****)((long)pppppsVar28 + lVar18);
        lVar18 = 0x10;
        if (bVar10) {
          lVar18 = 0;
        }
        pppppsVar25 = (size_t *****)((long)pppppsVar25 + lVar18);
        ppppsVar26 = (size_t ****)0x0;
        if (bVar10) {
          ppppsVar26 = ppppsVar21;
        }
        ppppsVar30 = (size_t ****)0x2;
        if ((bVar4 >> 1 & 1) != 0) goto LAB_00878b44;
LAB_00878ad8:
        ppppsVar16 = (size_t ****)((long)pppppsVar14[5] - (long)ppppsVar30);
        pppppsVar14[2] = ppppsVar16;
      }
      pppppsVar14[3] = (size_t ****)pppppsVar25;
      pppppsVar14[4] = ppppsVar26;
      if (uVar12 != uVar22 - 1) {
        iVar11 = FUN_00879890(ppppsVar16,(byte *)((long)(pppppsVar14 + 1) + (long)ppppsVar30));
        ppppsVar30 = (size_t ****)((long)*pppppsVar14 + (long)iVar11);
        ppppsVar16 = pppppsVar14[2];
        *pppppsVar14 = ppppsVar30;
      }
      uVar12 = uVar12 + 1;
      lVar33 = (long)ppppsVar30 + lVar33 + (long)ppppsVar16;
      uVar22 = (ulong)local_350 >> 1;
    } while (uVar12 < uVar22);
    *param_1 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_007bc600(param_1,lVar33);
    pvVar17 = (void *)FUN_007bc78c(*param_1);
    pppppsVar14 = (size_t *****)((ulong)&local_350 | 8);
    if (((ulong)local_350 & 1) != 0) {
      pppppsVar14 = (size_t *****)appppsStack_348[0];
    }
    if (((ulong)local_350 >> 1) * 0x58 != 0) {
      pppppsVar13 = pppppsVar14 + ((ulong)local_350 >> 1) * 0xb;
      do {
        memcpy(pvVar17,pppppsVar14 + 1,(size_t)*pppppsVar14);
        pppppsVar28 = pppppsVar14 + 7;
        if (((ulong)pppppsVar14[6] & 1) != 0) {
          pppppsVar28 = (size_t *****)pppppsVar14[7];
        }
        pppppsVar25 = (size_t *****)pppppsVar14[3];
        ppppsVar24 = pppppsVar14[4];
        pvVar17 = (void *)((long)pvVar17 + (long)*pppppsVar14);
        if (pppppsVar28 + ((ulong)pppppsVar14[6] & 0xfffffffffffffffe) != pppppsVar25 ||
            ppppsVar24 != (size_t ****)0x0) {
          ppppsVar30 = pppppsVar25[1];
          memcpy(pvVar17,(void *)((long)*pppppsVar25 + (long)ppppsVar24),
                 (long)ppppsVar30 - (long)ppppsVar24);
          __dest = (void *)((long)pvVar17 + ((long)ppppsVar30 - (long)ppppsVar24));
          while( true ) {
            pppppsVar32 = pppppsVar25 + 2;
            pppppsVar28 = pppppsVar14 + 7;
            if (((ulong)pppppsVar14[6] & 1) != 0) {
              pppppsVar28 = (size_t *****)pppppsVar14[7];
            }
            if (pppppsVar32 == pppppsVar28 + ((ulong)pppppsVar14[6] & 0xfffffffffffffffe)) break;
            memcpy(__dest,*pppppsVar32,(size_t)pppppsVar25[3]);
            __dest = (void *)((long)__dest + (long)pppppsVar25[3]);
            pppppsVar25 = pppppsVar32;
          }
        }
        pppppsVar28 = pppppsVar14 + 2;
        pppppsVar14 = pppppsVar14 + 0xb;
        pvVar17 = (void *)((long)pvVar17 + (long)*pppppsVar28);
      } while (pppppsVar14 != pppppsVar13);
    }
    lVar33 = FUN_007bc78c(*param_1);
    lVar18 = (**(code **)(*(long *)*param_1 + 0x28))((long *)*param_1);
    if (((long)pvVar17 - lVar33 < 0) || ((long)pvVar17 - lVar33 != lVar18)) {
      lVar19 = FUN_007bc78c(*param_1);
      uVar20 = (**(code **)(*(long *)*param_1 + 0x28))((long *)*param_1);
                    /* WARNING: Subroutine does not return */
      FUN_0061fd88("../../modules/rtp_rtcp/source/video_rtp_depacketizer_av1.cc",0x178,
                   "write_at - bitstream->data() == bitstream->size()",&DAT_00220d30,
                   (long)pvVar17 - lVar19,uVar20);
    }
  }
  if (local_350 != (undefined1 *)0x0) {
    FUN_00879214(&local_350);
  }
  if (*(long *)(lVar19 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00878d84  FUN_00878d84 =====

void FUN_00878d84(undefined1 *param_1,undefined8 param_2,undefined8 *param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  void *pvVar4;
  byte *pbVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  void *pvVar8;
  undefined8 uVar9;
  
  if (param_3[2] != 0) {
    pbVar5 = (byte *)*param_3;
    if (pbVar5 != (byte *)0x0) {
      pbVar5 = (byte *)(*(long *)(pbVar5 + 0x10) + param_3[1]);
    }
    bVar1 = *pbVar5;
    if (((bVar1 ^ 0xffffffff) & 0x88) != 0) {
      memcpy(param_1,&DAT_00220520,0x810);
      memset(param_1,0,0x808);
      FUN_007dcfa0(param_1);
      FUN_007b53d4(param_1 + 0x7f0);
      uVar7 = *param_3;
      pvVar8 = *(void **)(param_1 + 0x7f0);
      param_1[0x808] = 1;
      *param_3 = 0;
      *(undefined8 *)(param_1 + 0x7f0) = uVar7;
      if ((pvVar8 != (void *)0x0) &&
         (iVar3 = FUN_00d0f7a0(0xffffffff,(long)pvVar8 + 0x18), iVar3 == 1)) {
        pvVar4 = *(void **)((long)pvVar8 + 0x10);
        *(undefined8 *)((long)pvVar8 + 0x10) = 0;
        if (pvVar4 != (void *)0x0) {
          operator_delete__(pvVar4);
        }
        operator_delete(pvVar8);
      }
      uVar9 = param_3[2];
      uVar7 = param_3[1];
      bVar2 = param_1[0x808];
      param_3[1] = 0;
      param_3[2] = 0;
      *(undefined8 *)(param_1 + 0x800) = uVar9;
      *(undefined8 *)(param_1 + 0x7f8) = uVar7;
      if ((bVar2 & 1) != 0) {
        uVar6 = 3;
        *(undefined4 *)(param_1 + 0xac) = 3;
        param_1[0xa5] = (byte)(~(uint)bVar1 >> 7) & 1;
        if ((bVar1 & 8) == 0) {
          uVar6 = 4;
        }
        param_1[0xa6] = (bVar1 >> 6 ^ 0xff) & 1;
        *(undefined4 *)(param_1 + 0x98) = uVar6;
        return;
      }
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                );
    }
  }
  *param_1 = 0;
  param_1[0x808] = 0;
  return;
}


// ===== 00878ec4  FUN_00878ec4 =====

void FUN_00878ec4(void)

{
  return;
}


// ===== 00878ecc  FUN_00878ecc =====

void FUN_00878ecc(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00878ed8  FUN_00878ed8 =====

undefined8 * FUN_00878ed8(ulong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  ulong *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar10 = param_1 + 1;
  uVar11 = *param_1;
  if ((uVar11 & 1) == 0) {
    uVar8 = 8;
  }
  else {
    uVar8 = param_1[2] << 1;
    if (0x2e8ba2e8ba2e8ba < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    puVar10 = (ulong *)param_1[1];
  }
  uVar9 = uVar11 >> 1;
  pvVar3 = operator_new(uVar8 * 0x58);
  puVar7 = (undefined8 *)((long)pvVar3 + uVar9 * 0x58);
  if (puVar7 != (undefined8 *)0x0) {
    puVar7[10] = 0;
    puVar7[3] = 0;
    puVar7[2] = 0;
    puVar7[5] = 0;
    puVar7[4] = 0;
    puVar7[7] = 0;
    puVar7[6] = 0;
    puVar7[9] = 0;
    puVar7[8] = 0;
    puVar7[1] = 0;
    *puVar7 = 0;
    if (uVar9 != 0) {
      lVar12 = 0;
      uVar11 = uVar9;
      do {
        puVar1 = (undefined8 *)((long)pvVar3 + lVar12);
        if (puVar1 == (undefined8 *)0x0) goto LAB_00879064;
        puVar2 = (undefined8 *)((long)puVar10 + lVar12);
        uVar15 = puVar2[1];
        uVar14 = *puVar2;
        uVar13 = puVar2[3];
        uVar5 = puVar2[2];
        puVar1[4] = puVar2[4];
        puVar1[1] = uVar15;
        *puVar1 = uVar14;
        puVar1[3] = uVar13;
        puVar1[2] = uVar5;
        uVar5 = puVar2[5];
        puVar4 = (ulong *)((long)pvVar3 + lVar12 + 0x30);
        *puVar4 = 0;
        *(undefined8 *)((long)pvVar3 + lVar12 + 0x28) = uVar5;
        uVar6 = puVar2[6];
        if (1 < uVar6) {
          if ((uVar6 & 1) == 0) {
            *puVar4 = uVar6;
            uVar5 = *(undefined8 *)((long)puVar10 + lVar12 + 0x48);
            uVar14 = *(undefined8 *)((long)puVar10 + lVar12 + 0x40);
            uVar13 = *(undefined8 *)((long)puVar10 + lVar12 + 0x38);
            *(undefined8 *)((long)pvVar3 + lVar12 + 0x50) =
                 *(undefined8 *)((long)puVar10 + lVar12 + 0x50);
            *(undefined8 *)((long)pvVar3 + lVar12 + 0x48) = uVar5;
            *(undefined8 *)((long)pvVar3 + lVar12 + 0x40) = uVar14;
            *(undefined8 *)((long)pvVar3 + lVar12 + 0x38) = uVar13;
          }
          else {
            FUN_00879090();
          }
        }
        uVar11 = uVar11 - 1;
        lVar12 = lVar12 + 0x58;
      } while (uVar11 != 0);
      puVar10 = puVar10 + uVar9 * 0xb;
      do {
        if (puVar10 + -0xb == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        if ((puVar10[-5] & 1) != 0) {
          operator_delete((void *)puVar10[-4]);
        }
        uVar9 = uVar9 - 1;
        puVar10 = puVar10 + -0xb;
      } while (uVar9 != 0);
      uVar11 = *param_1;
    }
    if ((uVar11 & 1) != 0) {
      operator_delete((void *)param_1[1]);
      uVar11 = *param_1;
    }
    param_1[1] = (ulong)pvVar3;
    param_1[2] = uVar8;
    *param_1 = (uVar11 | 1) + 2;
    return puVar7;
  }
LAB_00879064:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00879090  FUN_00879090 =====

void FUN_00879090(ulong *param_1,ulong *param_2)

{
  code *pcVar1;
  ulong *__dest;
  ulong *__src;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *param_2;
  uVar3 = uVar2 >> 1;
  if (uVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x879114);
    (*pcVar1)();
  }
  if ((uVar2 & 1) == 0) {
    __dest = param_1 + 1;
    __src = param_2 + 1;
  }
  else {
    if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    uVar2 = uVar3;
    if (uVar3 < 5) {
      uVar2 = 4;
    }
    __dest = (ulong *)operator_new(uVar2 << 4);
    param_1[1] = (ulong)__dest;
    param_1[2] = uVar2;
    __src = (ulong *)param_2[1];
  }
  memcpy(__dest,__src,uVar3 << 4);
  *param_1 = *param_2;
  return;
}


// ===== 00879118  FUN_00879118 =====

ulong * FUN_00879118(ulong *param_1,ulong *param_2,ulong *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  
  puVar7 = param_1 + 1;
  uVar6 = *param_1;
  if ((uVar6 & 1) == 0) {
    uVar5 = 4;
  }
  else {
    if ((param_1[2] >> 0x3b & 0xf) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    puVar7 = (ulong *)param_1[1];
    uVar5 = param_1[2] << 1;
  }
  uVar8 = uVar6 >> 1;
  puVar3 = (ulong *)operator_new(uVar5 << 4);
  puVar1 = puVar3 + uVar8 * 2;
  if (puVar1 != (ulong *)0x0) {
    uVar4 = *param_3;
    uVar9 = 0;
    if (uVar4 != 0) {
      uVar9 = *param_2;
    }
    *puVar1 = uVar9;
    puVar1[1] = uVar4;
    puVar2 = puVar3;
    while( true ) {
      if (uVar8 == 0) {
        if ((uVar6 & 1) != 0) {
          operator_delete((void *)param_1[1]);
          uVar6 = *param_1;
        }
        param_1[1] = (ulong)puVar3;
        param_1[2] = uVar5;
        *param_1 = (uVar6 | 1) + 2;
        return puVar1;
      }
      if (puVar2 == (ulong *)0x0) break;
      uVar9 = *puVar7;
      uVar8 = uVar8 - 1;
      puVar2[1] = puVar7[1];
      *puVar2 = uVar9;
      puVar2 = puVar2 + 2;
      puVar7 = puVar7 + 2;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00879214  FUN_00879214 =====

void FUN_00879214(ulong *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  puVar1 = param_1 + 1;
  uVar2 = *param_1;
  if ((uVar2 & 1) != 0) {
    puVar1 = (ulong *)*puVar1;
  }
  uVar3 = uVar2 >> 1;
  if (uVar3 != 0) {
    puVar1 = puVar1 + uVar3 * 0xb;
    do {
      if (puVar1 + -0xb == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      if ((puVar1[-5] & 1) != 0) {
        operator_delete((void *)puVar1[-4]);
      }
      uVar3 = uVar3 - 1;
      puVar1 = puVar1 + -0xb;
    } while (uVar3 != 0);
    uVar2 = *param_1;
  }
  if ((uVar2 & 1) == 0) {
    return;
  }
  operator_delete((void *)param_1[1]);
  return;
}


// ===== 008792d8  FUN_008792d8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008792d8(undefined8 *param_1)

{
  undefined8 uVar1;
  void *pvVar2;
  
  pvVar2 = operator_new__(0x1000);
  param_1[2] = pvVar2;
  uVar1 = _DAT_001f1fb0;
  param_1[1] = _UNK_001f1fb8;
  *param_1 = uVar1;
  return;
}


// ===== 00879314  FUN_00879314 =====

void FUN_00879314(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_00879754();
  return;
}


// ===== 00879324  FUN_00879324 =====

void FUN_00879324(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = 0;
  param_1[3] = param_3;
  return;
}


// ===== 00879334  FUN_00879334 =====

void FUN_00879334(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *param_1 = param_2[2];
  param_1[1] = uVar1;
  param_1[2] = 0;
  param_1[3] = uVar1;
  return;
}


// ===== 0087934c  FUN_0087934c =====

bool FUN_0087934c(long *param_1,undefined1 *param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_2 != (undefined1 *)0x0) {
    lVar1 = param_1[2];
    lVar2 = param_1[3];
    if (lVar2 != lVar1) {
      *param_2 = *(undefined1 *)(*param_1 + lVar1);
      param_1[2] = param_1[2] + 1;
    }
    return lVar2 != lVar1;
  }
  return false;
}


// ===== 0087938c  FUN_0087938c =====

undefined8 FUN_0087938c(long *param_1,ushort *param_2)

{
  long lVar1;
  ushort uVar2;
  
  if ((param_2 != (ushort *)0x0) && (lVar1 = param_1[2], 1 < (ulong)(param_1[3] - lVar1))) {
    uVar2 = *(ushort *)(*param_1 + lVar1);
    param_1[2] = lVar1 + 2;
    *param_2 = uVar2 >> 8 | (ushort)((uVar2 & 0xff00ff) << 8);
    return 1;
  }
  return 0;
}


// ===== 008793d0  FUN_008793d0 =====

undefined8 FUN_008793d0(long *param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  
  if ((param_2 != (uint *)0x0) && (lVar1 = param_1[2], 3 < (ulong)(param_1[3] - lVar1))) {
    uVar2 = *(uint *)(*param_1 + lVar1);
    param_1[2] = lVar1 + 4;
    uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    *param_2 = uVar2 >> 0x10 | uVar2 << 0x10;
    return 1;
  }
  return 0;
}


// ===== 00879410  FUN_00879410 =====

undefined8 FUN_00879410(long *param_1,ulong *param_2)

{
  long lVar1;
  ulong uVar2;
  
  if ((param_2 != (ulong *)0x0) && (lVar1 = param_1[2], 7 < (ulong)(param_1[3] - lVar1))) {
    uVar2 = *(ulong *)(*param_1 + lVar1);
    param_1[2] = lVar1 + 8;
    uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    *param_2 = uVar2 >> 0x20 | uVar2 << 0x20;
    return 1;
  }
  return 0;
}


// ===== 00879450  FUN_00879450 =====

undefined8 FUN_00879450(long *param_1,ulong *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  char cVar5;
  ulong uVar6;
  long lVar7;
  
  if (param_2 != (ulong *)0x0) {
    lVar2 = param_1[2];
    lVar3 = param_1[3];
    if (lVar3 != lVar2) {
      lVar7 = *param_1;
      lVar1 = lVar2 + 1;
      bVar4 = *(byte *)(lVar7 + lVar2);
      param_1[2] = lVar1;
      uVar6 = (ulong)bVar4 & 0x7f;
      if (-1 < (char)bVar4) {
LAB_00879484:
        *param_2 = uVar6;
        return 1;
      }
      if (lVar3 != lVar1) {
        cVar5 = *(char *)(lVar7 + lVar1);
        lVar1 = lVar2 + 2;
        param_1[2] = lVar1;
        uVar6 = uVar6 | (ulong)((int)cVar5 & 0x7f) << 7;
        if (-1 < cVar5) goto LAB_00879484;
        if (lVar3 != lVar1) {
          cVar5 = *(char *)(lVar7 + lVar1);
          lVar1 = lVar2 + 3;
          param_1[2] = lVar1;
          uVar6 = uVar6 | (ulong)((int)cVar5 & 0x7f) << 0xe;
          if (-1 < cVar5) goto LAB_00879484;
          if (lVar3 != lVar1) {
            cVar5 = *(char *)(lVar7 + lVar1);
            lVar1 = lVar2 + 4;
            param_1[2] = lVar1;
            uVar6 = uVar6 | (ulong)((int)cVar5 & 0x7f) << 0x15;
            if (-1 < cVar5) goto LAB_00879484;
            if (lVar3 != lVar1) {
              cVar5 = *(char *)(lVar7 + lVar1);
              lVar1 = lVar2 + 5;
              param_1[2] = lVar1;
              uVar6 = uVar6 | (ulong)((int)cVar5 & 0x7f) << 0x1c;
              if (-1 < cVar5) goto LAB_00879484;
              if (lVar3 != lVar1) {
                cVar5 = *(char *)(lVar7 + lVar1);
                lVar1 = lVar2 + 6;
                param_1[2] = lVar1;
                uVar6 = uVar6 | (ulong)((int)cVar5 & 0x7f) << 0x23;
                if (-1 < cVar5) goto LAB_00879484;
                if (lVar3 != lVar1) {
                  cVar5 = *(char *)(lVar7 + lVar1);
                  lVar1 = lVar2 + 7;
                  param_1[2] = lVar1;
                  uVar6 = uVar6 | (ulong)((int)cVar5 & 0x7f) << 0x2a;
                  if (-1 < cVar5) goto LAB_00879484;
                  if (lVar3 != lVar1) {
                    cVar5 = *(char *)(lVar7 + lVar1);
                    lVar1 = lVar2 + 8;
                    param_1[2] = lVar1;
                    uVar6 = uVar6 | (ulong)((int)cVar5 & 0x7f) << 0x31;
                    if (-1 < cVar5) goto LAB_00879484;
                    if (lVar3 != lVar1) {
                      cVar5 = *(char *)(lVar7 + lVar1);
                      lVar1 = lVar2 + 9;
                      param_1[2] = lVar1;
                      uVar6 = uVar6 | (ulong)((int)cVar5 & 0x7f) << 0x38;
                      if (-1 < cVar5) goto LAB_00879484;
                      if (lVar3 != lVar1) {
                        bVar4 = *(byte *)(lVar7 + lVar1);
                        param_1[2] = lVar2 + 10;
                        if (-1 < (char)bVar4) {
                          uVar6 = uVar6 | (ulong)bVar4 << 0x3f;
                          goto LAB_00879484;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}


// ===== 008795b0  FUN_008795b0 =====

bool FUN_008795b0(long *param_1,long param_2,ulong param_3)

{
  bool bVar1;
  
  if (param_2 == 0) {
    return false;
  }
  bVar1 = param_3 <= (ulong)(param_1[3] - param_1[2]);
  if (bVar1) {
    FUN_00547cac(param_2,*param_1 + param_1[2],param_3);
    param_1[2] = param_1[2] + param_3;
  }
  return bVar1;
}


// ===== 00879628  FUN_00879628 =====

undefined8 FUN_00879628(long *param_1,long *param_2,ulong param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((param_2 == (long *)0x0) || ((ulong)(param_1[3] - param_1[2]) < param_3)) {
    uVar2 = 0;
  }
  else {
    if ((long)param_3 < 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/string_view:331: libc++ Hardening assertion __len <= static_cast<size_type>(numeric_limits<difference_type>::max()) failed: string_view::string_view(_CharT *, size_t): length does not fit in difference_type\n"
                );
    }
    lVar1 = *param_1 + param_1[2];
    if ((param_3 != 0) && (lVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/string_view:333: libc++ Hardening assertion __len == 0 || __s != nullptr failed: string_view::string_view(_CharT *, size_t): received nullptr\n"
                );
    }
    *param_2 = lVar1;
    param_2[1] = param_3;
    param_1[2] = param_1[2] + param_3;
    uVar2 = 1;
  }
  return uVar2;
}


// ===== 008796ac  FUN_008796ac =====

bool FUN_008796ac(long *param_1,void *param_2,ulong param_3)

{
  ulong uVar1;
  
  if (param_3 != 0) {
    uVar1 = param_1[3] - param_1[2];
    if (param_3 - 1 < uVar1) {
      memcpy(param_2,(void *)(*param_1 + param_1[2]),param_3);
      param_1[2] = param_1[2] + param_3;
    }
    return param_3 <= uVar1;
  }
  return true;
}


// ===== 0087972c  FUN_0087972c =====

bool FUN_0087972c(long param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
  if (param_2 <= uVar1) {
    *(ulong *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  }
  return param_2 <= uVar1;
}


// ===== 00879754  FUN_00879754 =====

void FUN_00879754(ulong *param_1,void *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  void *pvVar4;
  size_t __n;
  void *pvVar5;
  
  if (param_2 == (void *)0x0) {
    if (param_1[1] < param_3) {
      pvVar4 = operator_new__(param_3);
      pvVar5 = (void *)param_1[2];
      if (pvVar5 == (void *)0x0) {
        param_1[2] = (ulong)pvVar4;
      }
      else {
        memcpy(pvVar4,pvVar5,*param_1);
        param_1[2] = (ulong)pvVar4;
        operator_delete__(pvVar5);
      }
      param_1[1] = param_3;
    }
  }
  else if (param_3 != 0) {
    __n = *param_1;
    uVar3 = param_1[1];
    uVar1 = __n + param_3;
    if (uVar3 < uVar1) {
      uVar3 = uVar3 + (uVar3 >> 1);
      uVar2 = uVar1;
      if (uVar1 <= uVar3) {
        uVar2 = uVar3;
      }
      pvVar4 = operator_new__(uVar2);
      pvVar5 = (void *)param_1[2];
      if (pvVar5 == (void *)0x0) {
        param_1[2] = (ulong)pvVar4;
      }
      else {
        memcpy(pvVar4,pvVar5,__n);
        param_1[2] = (ulong)pvVar4;
        operator_delete__(pvVar5);
        __n = *param_1;
      }
      param_1[1] = uVar2;
    }
    memcpy((void *)(param_1[2] + __n),param_2,param_3);
    *param_1 = uVar1;
  }
  return;
}


// ===== 00879860  FUN_00879860 =====

int FUN_00879860(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  
  if (0x7f < param_1) {
    iVar1 = 1;
    do {
      uVar2 = param_1 >> 0xe;
      param_1 = param_1 >> 7;
      iVar1 = iVar1 + 1;
    } while (uVar2 != 0);
    return iVar1;
  }
  return 1;
}


// ===== 00879890  FUN_00879890 =====

int FUN_00879890(ulong param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  if (param_1 < 0x80) {
    lVar2 = 0;
  }
  else {
    lVar2 = 0;
    uVar1 = param_1;
    do {
      uVar3 = uVar1 >> 0xe;
      param_1 = uVar1 >> 7;
      *(byte *)(param_2 + lVar2) = (byte)uVar1 | 0x80;
      lVar2 = lVar2 + 1;
      uVar1 = param_1;
    } while (uVar3 != 0);
  }
  *(char *)(param_2 + (int)lVar2) = (char)param_1;
  return (int)lVar2 + 1;
}


// ===== 008798d4  FUN_008798d4 =====

void FUN_008798d4(undefined1 *param_1,undefined8 param_2,long *param_3)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  undefined1 *puVar4;
  int iVar5;
  void *pvVar6;
  ulong uVar7;
  byte *pbVar8;
  long lVar9;
  long lVar10;
  undefined1 *local_880;
  undefined1 *puStack_878;
  undefined1 *local_870;
  undefined1 auStack_868 [152];
  int local_7d0;
  undefined4 uStack_7cc;
  byte local_7c3;
  undefined4 local_7bc;
  ushort local_740 [820];
  byte local_d8;
  undefined1 *local_78;
  undefined1 *local_70;
  long lStack_68;
  byte local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if (param_3[2] == 0) {
    uVar7 = FUN_004022fc();
    if ((uVar7 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../modules/rtp_rtcp/source/video_rtp_depacketizer_generic.cc",
                   0x142,"Empty payload.");
    }
    *param_1 = 0;
    param_1[0x808] = 0;
    goto LAB_00879b40;
  }
  memcpy(auStack_868,&DAT_00220d38,0x810);
  memset(auStack_868,0,0x808);
  FUN_007dcfa0(auStack_868);
  FUN_007b53d4(&local_78);
  local_60 = 1;
  if (*param_3 == 0) {
    pbVar8 = (byte *)0x0;
  }
  else {
    pbVar8 = (byte *)(*(long *)(*param_3 + 0x10) + param_3[1]);
  }
  bVar1 = *pbVar8;
  local_7bc = 0;
  local_7c3 = bVar1 >> 1 & 1;
  local_7d0 = 4 - (bVar1 & 1);
  uVar7 = param_3[2];
  uStack_7cc = 0;
  if ((bVar1 >> 2 & 1) == 0) {
    lVar9 = 1;
LAB_00879a54:
    lVar10 = uVar7 - lVar9;
    puStack_878 = &DAT_aaaaaaaaaaaaaaaa;
    local_880 = &DAT_aaaaaaaaaaaaaaaa;
    local_870 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_007b53e4(&local_880,param_3);
    puVar4 = local_78;
    local_78 = local_880;
    puStack_878 = puStack_878 + lVar9;
    local_870 = (undefined1 *)lVar10;
    if ((local_60 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                );
    }
    local_880 = (undefined1 *)0x0;
    if ((puVar4 != (undefined1 *)0x0) &&
       (iVar5 = FUN_00d0f7a0(0xffffffff,puVar4 + 0x18), iVar5 == 1)) {
      pvVar6 = *(void **)(puVar4 + 0x10);
      *(undefined8 *)(puVar4 + 0x10) = 0;
      if (pvVar6 != (void *)0x0) {
        operator_delete__(pvVar6);
      }
      operator_delete(puVar4);
    }
    *(undefined8 *)((ulong)&local_880 | 8) = 0;
    ((undefined8 *)((ulong)&local_880 | 8))[1] = 0;
    lStack_68 = (long)local_870;
    local_70 = puStack_878;
    FUN_007b5554(&local_880);
    *param_1 = 0;
    param_1[0x808] = 0;
    if (local_60 == 1) {
      if (param_1 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      FUN_007dd000(param_1,auStack_868);
      FUN_007b5434(param_1 + 0x7f0,&local_78);
      param_1[0x808] = 1;
    }
  }
  else {
    if (2 < uVar7) {
      bVar1 = pbVar8[1];
      bVar2 = pbVar8[2];
      if ((ulong)local_d8 != 0xff) {
        (*(code *)(&PTR_FUN_00d3ae10)[local_d8])(&local_880,local_740);
        uVar7 = param_3[2];
      }
      lVar9 = 3;
      local_d8 = 4;
      local_740[0] = (ushort)bVar2 | (ushort)((bVar1 & 0x7f) << 8);
      goto LAB_00879a54;
    }
    uVar7 = FUN_004022fc();
    if ((uVar7 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../modules/rtp_rtcp/source/video_rtp_depacketizer_generic.cc",
                   0x1e2,"Too short payload for generic header.");
    }
    *param_1 = 0;
    param_1[0x808] = 0;
  }
  if (local_60 == 1) {
    FUN_007b5554(&local_78);
    FUN_007dd190(auStack_868);
  }
LAB_00879b40:
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00879b9c  FUN_00879b9c =====

void FUN_00879b9c(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00879ba8  FUN_00879ba8 =====

void FUN_00879ba8(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  size_t __n;
  long lVar5;
  void *__dest;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  if (param_4 * 0x10 != 0) {
    uVar6 = param_4 * 0x10 - 0x10;
    if (uVar6 < 0x40) {
      lVar5 = 0;
      puVar7 = param_3;
    }
    else {
      lVar5 = 0;
      lVar12 = 0;
      lVar13 = 0;
      lVar14 = 0;
      uVar6 = (uVar6 >> 4) + 1;
      uVar3 = uVar6 & 3;
      uVar4 = 4;
      if (uVar3 != 0) {
        uVar4 = uVar3;
      }
      plVar9 = param_3 + 5;
      lVar8 = uVar6 - uVar4;
      puVar7 = param_3 + lVar8 * 2;
      do {
        plVar1 = plVar9 + -4;
        lVar15 = *plVar9;
        plVar10 = plVar9 + -2;
        plVar2 = plVar9 + 2;
        lVar8 = lVar8 + -4;
        plVar9 = plVar9 + 8;
        lVar5 = *plVar1 + lVar5;
        lVar12 = *plVar10 + lVar12;
        lVar13 = lVar15 + lVar13;
        lVar14 = *plVar2 + lVar14;
      } while (lVar8 != 0);
      lVar5 = lVar13 + lVar5 + lVar14 + lVar12;
    }
    do {
      plVar9 = puVar7 + 1;
      puVar7 = puVar7 + 2;
      lVar5 = *plVar9 + lVar5;
    } while (puVar7 != param_3 + param_4 * 2);
    *param_1 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_007bc600(param_1,lVar5);
    __dest = (void *)FUN_007bc78c(*param_1);
    puVar7 = param_3;
    do {
      puVar11 = puVar7 + 2;
      __n = puVar7[1];
      memcpy(__dest,(void *)*puVar7,__n);
      __dest = (void *)((long)__dest + __n);
      puVar7 = puVar11;
    } while (puVar11 != param_3 + param_4 * 2);
    return;
  }
  *param_1 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_007bc600(param_1,0);
  FUN_007bc78c(*param_1);
  return;
}


// ===== 00879cd4  FUN_00879cd4 =====

void FUN_00879cd4(undefined1 *param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  byte *pbVar2;
  bool bVar3;
  byte *__src;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  long lVar7;
  size_t __n;
  long lVar8;
  byte bVar9;
  byte *pbVar10;
  undefined1 *puVar11;
  code *pcVar12;
  bool bVar13;
  int iVar14;
  ulong uVar15;
  undefined8 *puVar16;
  void *pvVar17;
  byte *pbVar18;
  byte **ppbVar19;
  undefined8 uVar20;
  char *pcVar21;
  undefined4 uVar22;
  byte *pbVar23;
  byte *pbVar24;
  byte *pbVar25;
  ulong uVar26;
  long *plVar27;
  void *pvVar28;
  long *plVar29;
  long *plVar30;
  undefined4 uVar31;
  byte *pbVar32;
  undefined1 auVar33 [16];
  byte *local_940;
  long local_938;
  byte *pbStack_930;
  byte *local_928;
  undefined1 *local_920;
  ulong uStack_918;
  undefined1 *local_910;
  undefined1 *puStack_908;
  undefined1 *local_900;
  undefined1 *puStack_8f8;
  undefined1 *puStack_8f0;
  undefined8 uStack_8e8;
  uint local_8e0;
  byte *local_8d0;
  byte *local_8c8;
  byte *local_8c0;
  undefined1 *local_8b8;
  ushort local_8ac [2];
  int local_8a8;
  undefined4 uStack_8a4;
  int local_8a0;
  undefined4 uStack_89c;
  undefined8 *local_898;
  undefined8 local_890;
  undefined8 uStack_888;
  undefined1 *local_880;
  undefined4 local_7f8;
  undefined4 local_7f4;
  undefined1 local_7eb;
  undefined1 local_7e8;
  undefined4 local_7e4;
  undefined8 local_768;
  undefined8 uStack_760;
  undefined8 *local_758;
  undefined8 *local_750;
  undefined8 local_748;
  byte local_100;
  byte *local_a0;
  long local_98;
  byte *pbStack_90;
  byte local_88;
  long local_78;
  
  lVar8 = tpidr_el0;
  local_78 = *(long *)(lVar8 + 0x28);
  if (param_3[2] == 0) {
    uVar15 = FUN_004249b0();
    if ((uVar15 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../modules/rtp_rtcp/source/video_rtp_depacketizer_h264.cc",
                   0x94b,"Empty payload.");
    }
    *param_1 = 0;
    param_1[0x808] = 0;
    goto LAB_0087aa58;
  }
  pbVar23 = (byte *)*param_3;
  if (pbVar23 != (byte *)0x0) {
    pbVar23 = (byte *)(*(long *)(pbVar23 + 0x10) + param_3[1]);
  }
  if ((*pbVar23 & 0x1f) == 0x1c) {
    FUN_007b5434(&local_928);
    if (uStack_918 < 2) {
      uVar15 = FUN_004249b0();
      if ((uVar15 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../modules/rtp_rtcp/source/video_rtp_depacketizer_h264.cc",
                     0x743,"FU-A NAL units truncated.");
      }
      *param_1 = 0;
      ppbVar19 = &local_928;
      param_1[0x808] = 0;
    }
    else {
      memcpy(param_1,&DAT_00221548,0x810);
      memset(param_1,0,0x808);
      FUN_007dcfa0(param_1);
      puVar16 = (undefined8 *)(param_1 + 0x7f0);
      FUN_007b53d4(param_1 + 0x7f0);
      pbVar23 = (byte *)0x1;
      param_1[0x808] = 1;
      if (local_928 == (byte *)0x0) {
        pbVar25 = (byte *)0x0;
      }
      else {
        pbVar25 = local_920 + *(long *)(local_928 + 0x10);
        pbVar23 = pbVar25 + 1;
      }
      bVar4 = *pbVar23;
      bVar6 = pbVar25[1];
      bVar9 = bVar4 & 0x1f;
      if ((char)bVar6 < '\0') {
        bVar5 = *pbVar25;
        if ((bVar4 & 0x1b) == 1) {
          pbVar23 = local_928;
          if (local_928 != (byte *)0x0) {
            pbVar23 = local_920 + *(long *)(local_928 + 0x10);
          }
          if (uStack_918 < 2) {
LAB_0087a938:
                    /* WARNING: Does not return */
            pcVar12 = (code *)SoftwareBreakpoint(1,0x87a93c);
            (*pcVar12)();
          }
          pbVar25 = (byte *)0x0;
          if (uStack_918 - 2 != 0) {
            pbVar25 = pbVar23 + 2;
          }
          auVar33 = FUN_0087b390(pbVar25,uStack_918 - 2);
          if ((auVar33 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
            uVar15 = FUN_004022fc();
            if ((uVar15 & 1) == 0) {
              FUN_00623bb0(&DAT_001f4e94,
                           "../../modules/rtp_rtcp/source/video_rtp_depacketizer_h264.cc",0x7fa,
                           "Failed to parse PPS from first fragment of FU-A NAL unit with original type: "
                           ,bVar9);
            }
            goto LAB_0087a214;
          }
          bVar13 = auVar33._0_4_ == 0;
          uVar31 = auVar33._4_4_;
        }
        else {
LAB_0087a214:
          bVar13 = false;
          uVar31 = 0xffffffff;
        }
        uStack_888 = &DAT_aaaaaaaaaaaaaaaa;
        local_890 = &DAT_aaaaaaaaaaaaaaaa;
        local_880 = &DAT_aaaaaaaaaaaaaaaa;
        FUN_007b53e4(&local_890,&local_928);
        pbVar23 = local_928;
        uStack_888 = uStack_888 + 1;
        local_928 = local_890;
        local_890 = (undefined1 *)0x0;
        local_880 = (undefined1 *)(uStack_918 - 1);
        if ((pbVar23 != (byte *)0x0) &&
           (iVar14 = FUN_00d0f7a0(0xffffffff,pbVar23 + 0x18), iVar14 == 1)) {
          pvVar28 = *(void **)(pbVar23 + 0x10);
          pbVar23[0x10] = 0;
          pbVar23[0x11] = 0;
          pbVar23[0x12] = 0;
          pbVar23[0x13] = 0;
          pbVar23[0x14] = 0;
          pbVar23[0x15] = 0;
          pbVar23[0x16] = 0;
          pbVar23[0x17] = 0;
          if (pvVar28 != (void *)0x0) {
            operator_delete__(pvVar28);
          }
          operator_delete(pbVar23);
        }
        *(undefined8 *)((ulong)&local_890 | 8) = 0;
        ((undefined8 *)((ulong)&local_890 | 8))[1] = 0;
        uStack_918 = (ulong)local_880;
        local_920 = uStack_888;
        FUN_007b5554(&local_890);
        pbVar23 = local_928;
        if (local_928 != (byte *)0x0) {
          FUN_007b5788(&local_928,*(long *)(local_928 + 8) - (long)local_920);
          pbVar23 = local_920 + *(long *)(local_928 + 0x10);
        }
        pbVar25 = local_928;
        *pbVar23 = bVar9 | bVar5 & 0xe0;
        if ((param_1[0x808] & 1) == 0) goto LAB_0087a924;
        pvVar28 = (void *)*puVar16;
        local_928 = (byte *)0x0;
        *puVar16 = pbVar25;
        if ((pvVar28 != (void *)0x0) &&
           (iVar14 = FUN_00d0f7a0(0xffffffff,(long)pvVar28 + 0x18), iVar14 == 1)) {
          pvVar17 = *(void **)((long)pvVar28 + 0x10);
          *(undefined8 *)((long)pvVar28 + 0x10) = 0;
          if (pvVar17 != (void *)0x0) {
            operator_delete__(pvVar17);
          }
          operator_delete(pvVar28);
        }
        *(ulong *)(param_1 + 0x800) = uStack_918;
        *(undefined1 **)(param_1 + 0x7f8) = local_920;
        local_920 = (undefined1 *)0x0;
        uStack_918 = 0;
      }
      else {
        uVar15 = uStack_918 - 2;
        uStack_888 = &DAT_aaaaaaaaaaaaaaaa;
        local_890 = &DAT_aaaaaaaaaaaaaaaa;
        local_880 = &DAT_aaaaaaaaaaaaaaaa;
        FUN_007b53e4(&local_890,&local_928);
        puVar11 = local_890;
        uStack_888 = uStack_888 + 2;
        local_880 = (undefined1 *)uVar15;
        if ((param_1[0x808] & 1) == 0) goto LAB_0087a924;
        pvVar28 = (void *)*puVar16;
        local_890 = (undefined1 *)0x0;
        *puVar16 = puVar11;
        if ((pvVar28 != (void *)0x0) &&
           (iVar14 = FUN_00d0f7a0(0xffffffff,(long)pvVar28 + 0x18), iVar14 == 1)) {
          pvVar17 = *(void **)((long)pvVar28 + 0x10);
          *(undefined8 *)((long)pvVar28 + 0x10) = 0;
          if (pvVar17 != (void *)0x0) {
            operator_delete__(pvVar17);
          }
          operator_delete(pvVar28);
        }
        *(undefined8 *)((ulong)&local_890 | 8) = 0;
        ((undefined8 *)((ulong)&local_890 | 8))[1] = 0;
        *(undefined1 **)(param_1 + 0x800) = local_880;
        *(undefined1 **)(param_1 + 0x7f8) = uStack_888;
        FUN_007b5554(&local_890);
        bVar13 = false;
        uVar31 = 0xffffffff;
      }
      if (bVar9 == 5) {
        if ((param_1[0x808] & 1) == 0) {
LAB_0087a924:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                    );
        }
        uVar22 = 3;
      }
      else {
        if ((param_1[0x808] & 1) == 0) goto LAB_0087a924;
        uVar22 = 4;
      }
      *(undefined4 *)(param_1 + 0x98) = uVar22;
      *(undefined4 *)(param_1 + 0x9c) = 0;
      *(undefined4 *)(param_1 + 0xac) = 4;
      param_1[0xa8] = 0;
      param_1[0xa5] = bVar13;
      if ((ulong)(byte)param_1[0x790] != 0xff) {
        (*(code *)(&PTR_FUN_00d3ae68)[(byte)param_1[0x790]])(&local_890,param_1 + 0x128);
      }
      *(undefined8 *)(param_1 + 0x148) = 0;
      param_1[0x790] = 3;
      *(undefined8 *)(param_1 + 0x130) = 0;
      *(undefined8 *)(param_1 + 0x128) = 0;
      *(undefined8 *)(param_1 + 0x140) = 0;
      *(undefined8 *)(param_1 + 0x138) = 0;
      *(undefined4 *)(param_1 + 300) = 2;
      param_1[0x128] = bVar9;
      if ((char)bVar6 < '\0') {
        uStack_888 = (undefined1 *)CONCAT44(uStack_888._4_4_,uVar31);
        local_890 = (byte *)(CONCAT71(0xffffffff00aaaa,bVar4) & 0xffffffffffffff1f);
        local_890._0_4_ = CONCAT13(0xaa,(undefined3)local_890);
        FUN_0087aa9c(param_1 + 0x130,&local_890,(long)&uStack_888 + 4,1);
      }
      ppbVar19 = &local_928;
    }
  }
  else {
    FUN_007b5434(&local_940);
    pbVar25 = pbStack_930;
    pbVar23 = local_940;
    if (local_940 != (byte *)0x0) {
      pbVar23 = (byte *)(*(long *)(local_940 + 0x10) + local_938);
    }
    __src = (byte *)0x0;
    if (pbStack_930 != (byte *)0x0) {
      __src = pbVar23;
    }
    memcpy(&local_890,&DAT_00221548,0x810);
    memset(&local_890,0,0x808);
    FUN_007dcfa0(&local_890);
    FUN_007b53d4(&local_a0);
    local_8d0 = (byte *)0x0;
    local_8c8 = (byte *)0x0;
    local_88 = 1;
    local_8c0 = (byte *)0x0;
    if (local_940 != (byte *)0x0) {
      FUN_00d0f740(1,local_940 + 0x18);
    }
    if ((local_a0 != (byte *)0x0) &&
       (iVar14 = FUN_00d0f7a0(0xffffffff,local_a0 + 0x18), iVar14 == 1)) {
      pvVar28 = *(void **)(local_a0 + 0x10);
      local_a0[0x10] = 0;
      local_a0[0x11] = 0;
      local_a0[0x12] = 0;
      local_a0[0x13] = 0;
      local_a0[0x14] = 0;
      local_a0[0x15] = 0;
      local_a0[0x16] = 0;
      local_a0[0x17] = 0;
      if (pvVar28 != (void *)0x0) {
        operator_delete__(pvVar28);
      }
      operator_delete(local_a0);
    }
    local_a0 = local_940;
    pbStack_90 = pbStack_930;
    local_98 = local_938;
    if ((local_88 & 1) == 0) goto LAB_0087a924;
    local_7f4 = 0;
    local_7e4 = 4;
    local_7e8 = 0;
    local_7eb = 0;
    if ((ulong)local_100 != 0xff) {
      (*(code *)(&PTR_FUN_00d3ae68)[local_100])(&local_910,&local_768);
    }
    local_748 = 0;
    local_100 = 3;
    uStack_760 = 0;
    local_768 = 0;
    local_750 = (undefined8 *)0x0;
    local_758 = (undefined8 *)0x0;
    if ((*__src & 0x1f) == 0x18) {
      local_8a8 = 0;
      uStack_8a4 = 0;
      local_8a0 = 0;
      uStack_89c = 0;
      local_898 = (undefined8 *)0x0;
      puStack_908 = &DAT_aaaaaaaaaaaaaaaa;
      local_910 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_8f8 = &DAT_aaaaaaaaaaaaaaaa;
      local_900 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_00879324(&local_910,__src,pbVar25);
      uVar15 = FUN_0087972c(&local_910,1);
      if (((uVar15 & 1) == 0) || (puStack_8f8 == local_900)) {
LAB_0087a960:
        plVar27 = (long *)0x0;
        plVar30 = (long *)0x0;
      }
      else {
        do {
          local_8ac[0] = 0xaaaa;
          uVar15 = FUN_0087938c(&local_910,local_8ac);
          if (((uVar15 & 1) == 0) ||
             ((uVar15 = (ulong)local_8ac[0], uVar15 == 0 ||
              ((ulong)((long)puStack_8f8 - (long)local_900) < uVar15)))) {
            pvVar28 = (void *)CONCAT44(uStack_8a4,local_8a8);
            if (pvVar28 == (void *)0x0) goto LAB_0087a960;
            pvVar17 = (void *)CONCAT44(uStack_89c,local_8a0);
            uVar26 = (ulong)((long)pvVar17 + (-0x10 - ((long)pvVar17 << 0x3c))) >> 4;
            uVar15 = (ulong)(((long)pvVar28 - (long)pvVar17 << 0x3c) -
                            ((long)pvVar28 - (long)pvVar17)) >> 4;
            if (uVar26 <= uVar15) {
              uVar15 = uVar26;
            }
            if ((1 < uVar15) && (((local_8a8 - local_8a0 | -local_8a0) & 0xfU) == 0)) {
              uVar15 = uVar15 & 0xffffffffffffffe;
              pvVar17 = (void *)((long)pvVar17 + uVar15 * -0x10);
              do {
                uVar15 = uVar15 - 2;
              } while (uVar15 != 0);
            }
            goto LAB_0087a1d4;
          }
          puVar16 = (undefined8 *)CONCAT44(uStack_89c,local_8a0);
          local_8b8 = local_910 + (long)local_900;
          if (puVar16 < local_898) {
            if (puVar16 == (undefined8 *)0x0) goto LAB_0087a93c;
            *puVar16 = local_8b8;
            puVar16[1] = uVar15;
            puVar16 = puVar16 + 2;
          }
          else {
            puVar16 = (undefined8 *)FUN_0087ad50(&local_8a8,&local_8b8,local_8ac);
          }
          local_8a0 = (int)puVar16;
          uStack_89c = (undefined4)((ulong)puVar16 >> 0x20);
          FUN_0087972c(&local_910,local_8ac[0]);
        } while (puStack_8f8 != local_900);
        plVar27 = (long *)CONCAT44(uStack_8a4,local_8a8);
        plVar30 = (long *)CONCAT44(uStack_89c,local_8a0);
        if (plVar27 != plVar30) {
          local_768 = CONCAT44(1,(undefined4)local_768);
          local_768 = CONCAT71(local_768._1_7_,*(undefined1 *)*plVar27) & 0xffffffffffffff1f;
          goto joined_r0x0087a03c;
        }
      }
      uVar15 = FUN_004249b0();
      if ((uVar15 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../modules/rtp_rtcp/source/video_rtp_depacketizer_h264.cc",
                     0x2b3,"Incorrect StapA packet.");
      }
LAB_0087a994:
      *param_1 = 0;
      param_1[0x808] = 0;
    }
    else {
      local_768 = (ulong)*__src & 0xffffffffffffff1f;
      plVar27 = (long *)operator_new(0x10);
      if (plVar27 == (long *)0x0) goto LAB_0087a93c;
      plVar30 = plVar27 + 2;
      *plVar27 = (long)__src;
      plVar27[1] = (long)pbVar25;
joined_r0x0087a03c:
      if ((local_88 & 1) == 0) goto LAB_0087a924;
      local_7f8 = 4;
      if (plVar27 == plVar30) {
        *param_1 = 0;
        param_1[0x808] = 0;
      }
      else {
        bVar13 = false;
        plVar29 = plVar27;
        do {
          uStack_8a4 = 0xffffffff;
          local_8a0 = -1;
          bVar9 = *(byte *)*plVar29 & 0x1f;
          local_8a8 = CONCAT31(0xaaaaaa,bVar9);
          if (plVar29[1] == 0) goto LAB_0087a938;
          lVar7 = plVar29[1] + -1;
          if (lVar7 == 0) {
            uVar15 = FUN_004022fc();
            if ((uVar15 & 1) == 0) {
              FUN_00623bb0(&DAT_001f4e98,
                           "../../modules/rtp_rtcp/source/video_rtp_depacketizer_h264.cc",0x35a,
                           "Skipping empty NAL unit.");
            }
          }
          else {
            pbVar23 = (byte *)(*plVar29 + 1);
            if (bVar9 < 7) {
              if (bVar9 != 1) {
                if (bVar9 != 5) {
                  if (bVar9 != 6) goto LAB_0087a7ec;
                  goto LAB_0087a5d8;
                }
                if ((local_88 & 1) == 0) goto LAB_0087a924;
                local_7f8 = 3;
              }
              auVar33 = FUN_0087b390(pbVar23,lVar7);
              if ((auVar33 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
                uVar15 = FUN_004022fc();
                if ((uVar15 & 1) == 0) {
                  FUN_00623bb0(&DAT_001f4e94,
                               "../../modules/rtp_rtcp/source/video_rtp_depacketizer_h264.cc",0x622,
                               "Failed to parse PPS id from slice of type: ",(undefined1)local_8a8);
                }
                goto LAB_0087a994;
              }
              local_8a0 = auVar33._4_4_;
              if (auVar33._0_4_ == 0) goto LAB_0087a5d8;
            }
            else if (bVar9 < 9) {
              if (bVar9 == 7) {
                pbVar2 = (byte *)(*plVar29 + 1);
                local_8d0 = (byte *)0x0;
                pbVar32 = pbVar2 + -(long)__src;
                if ((__src != pbVar23) && (pbVar2 != __src)) {
                  if (local_8c8 < pbVar32) {
                    pbVar2 = pbVar32;
                    if (pbVar32 <= local_8c8 + ((ulong)local_8c8 >> 1)) {
                      pbVar2 = local_8c8 + ((ulong)local_8c8 >> 1);
                    }
                    pbVar18 = (byte *)operator_new__((ulong)pbVar2);
                    pbVar24 = local_8c0;
                    bVar3 = local_8c0 != (byte *)0x0;
                    local_8c0 = pbVar18;
                    if (bVar3) {
                      operator_delete__(pbVar24);
                      pbVar24 = local_8d0;
                    }
                  }
                  else {
                    pbVar24 = (byte *)0x0;
                    pbVar2 = local_8c8;
                  }
                  local_8c8 = pbVar2;
                  memcpy(local_8c0 + (long)pbVar24,__src,(size_t)pbVar32);
                  local_8d0 = pbVar32;
                }
                puStack_8f8 = &DAT_aaaaaaaaaaaaaaaa;
                local_900 = &DAT_aaaaaaaaaaaaaaaa;
                uStack_8e8 = &DAT_aaaaaaaaaaaaaaaa;
                puStack_8f0 = &DAT_aaaaaaaaaaaaaaaa;
                puStack_908 = &DAT_aaaaaaaaaaaaaaaa;
                local_910 = (undefined1 *)0xaaaaaaaaaaaaaa00;
                local_8e0 = 0xaaaaaa00;
                iVar14 = FUN_0087cf40(pbVar23,lVar7,&local_910,0,&local_8d0,0);
                if (iVar14 == 2) {
                  if ((bVar13) && (uVar15 = FUN_004022fc(), (uVar15 & 1) == 0)) {
                    FUN_00623bb0(&DAT_001f4e98,
                                 "../../modules/rtp_rtcp/source/video_rtp_depacketizer_h264.cc",
                                 0x43a,
                                 "More than one H264 SPS NAL units needing rewriting found within a single STAP-A packet. Keeping the first and rewriting the last."
                                );
                  }
                  pbVar23 = local_8d0;
                  if (local_768._4_4_ == 1) {
                    uVar1 = ((int)local_8d0 - (int)pbVar32) + 1;
                    *(ushort *)(local_8c0 + (long)pbVar32 + -3) =
                         (ushort)(uVar1 >> 8) & 0xff | (ushort)((uVar1 & 0xff00ff) << 8);
                  }
                  pbVar32 = pbVar32 + lVar7;
                  __n = (long)pbVar25 - (long)pbVar32;
                  if (pbVar25 < pbVar32) goto LAB_0087a938;
                  if (__n != 0) {
                    pbVar2 = local_8d0 + __n;
                    pbVar24 = local_8c8;
                    pbVar18 = local_8c0;
                    if (local_8c8 < pbVar2) {
                      pbVar24 = pbVar2;
                      if (pbVar2 <= local_8c8 + ((ulong)local_8c8 >> 1)) {
                        pbVar24 = local_8c8 + ((ulong)local_8c8 >> 1);
                      }
                      pbVar18 = (byte *)operator_new__((ulong)pbVar24);
                      pbVar10 = local_8c0;
                      if (local_8c0 != (byte *)0x0) {
                        memcpy(pbVar18,local_8c0,(size_t)pbVar23);
                        local_8c0 = pbVar18;
                        operator_delete__(pbVar10);
                        pbVar23 = local_8d0;
                        pbVar18 = local_8c0;
                      }
                    }
                    local_8c0 = pbVar18;
                    local_8c8 = pbVar24;
                    memcpy(local_8c0 + (long)pbVar23,__src + (long)pbVar32,__n);
                    local_8d0 = pbVar2;
                  }
                  bVar13 = true;
LAB_0087a7a4:
                  if ((local_8e0 & 1) == 0) goto LAB_0087a924;
                  uStack_8a4 = uStack_8e8._4_4_;
                  if ((local_88 & 1) == 0) goto LAB_0087a924;
                  local_7f4 = CONCAT22((short)((ulong)local_910 >> 0x20),(short)local_910);
                  local_7f8 = 3;
LAB_0087a7d0:
                  bVar3 = true;
                  local_7eb = 1;
                }
                else {
                  if (iVar14 == 1) goto LAB_0087a7a4;
                  if (iVar14 != 0) {
                    if ((local_88 & 1) != 0) goto LAB_0087a7d0;
                    goto LAB_0087a924;
                  }
                  uVar15 = FUN_004022fc();
                  if ((uVar15 & 1) == 0) {
                    FUN_00623bb0(&DAT_001f4e98,
                                 "../../modules/rtp_rtcp/source/video_rtp_depacketizer_h264.cc",
                                 0x41a,"Failed to parse SPS NAL unit.");
                  }
                  bVar3 = false;
                  *param_1 = 0;
                  param_1[0x808] = 0;
                }
                if ((local_8e0 & 1) != 0) {
                  FUN_0087d8c4(&local_910);
                }
                if (!bVar3) goto LAB_0087a99c;
              }
              else if (bVar9 == 8) {
                local_910 = (undefined1 *)CONCAT44(local_910._4_4_,0xaaaaaaaa);
                local_8b8 = (undefined1 *)CONCAT44(local_8b8._4_4_,0xaaaaaaaa);
                uVar15 = FUN_0087b298(pbVar23,lVar7,&local_910,&local_8b8);
                if ((uVar15 & 1) != 0) {
                  uStack_8a4 = local_8b8._0_4_;
                  local_8a0 = (int)local_910;
                  if ((local_88 & 1) != 0) goto LAB_0087a5e0;
                  goto LAB_0087a924;
                }
                uVar15 = FUN_004022fc();
                if ((uVar15 & 1) == 0) {
                  pcVar21 = "Failed to parse PPS id and SPS id from PPS slice.";
                  uVar20 = 0x582;
                  goto LAB_0087a910;
                }
                goto LAB_0087a994;
              }
            }
            else if (bVar9 == 9) {
LAB_0087a5d8:
              if ((local_88 & 1) == 0) goto LAB_0087a924;
LAB_0087a5e0:
              local_7eb = 1;
            }
            else if ((bVar9 == 0x18) || (bVar9 == 0x1c)) {
              uVar15 = FUN_004022fc();
              if ((uVar15 & 1) == 0) {
                pcVar21 = "Unexpected STAP-A or FU-A received.";
                uVar20 = 0x6ba;
LAB_0087a910:
                FUN_00623bb0(&DAT_001f4e98,
                             "../../modules/rtp_rtcp/source/video_rtp_depacketizer_h264.cc",uVar20,
                             pcVar21);
              }
              goto LAB_0087a994;
            }
LAB_0087a7ec:
            if (local_758 < local_750) {
              if (local_758 == (undefined8 *)0x0) goto LAB_0087a93c;
              *(int *)(local_758 + 1) = local_8a0;
              *local_758 = CONCAT44(uStack_8a4,local_8a8);
              local_758 = (undefined8 *)((long)local_758 + 0xc);
            }
            else {
              local_758 = (undefined8 *)FUN_0087ae5c(&uStack_760,&local_8a8);
            }
          }
          plVar29 = plVar29 + 2;
        } while (plVar29 != plVar30);
        if (bVar13) {
          if ((local_88 & 1) == 0) goto LAB_0087a924;
          FUN_007da49c(&local_a0,local_8c0,local_8d0);
          *param_1 = 0;
          param_1[0x808] = 0;
          bVar9 = local_88 & 1;
        }
        else {
          *param_1 = 0;
          param_1[0x808] = 0;
          bVar9 = local_88;
        }
        if (bVar9 == 0) goto LAB_0087a99c;
      }
      if (param_1 == (undefined1 *)0x0) {
LAB_0087a93c:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      FUN_007dd000(param_1,&local_890);
      FUN_007b5434(param_1 + 0x7f0,&local_a0);
      param_1[0x808] = 1;
    }
LAB_0087a99c:
    if (plVar27 != (long *)0x0) {
      uVar26 = (ulong)((long)plVar30 + (-0x10 - ((long)plVar30 << 0x3c))) >> 4;
      uVar15 = (ulong)(((long)plVar27 - (long)plVar30 << 0x3c) - ((long)plVar27 - (long)plVar30)) >>
               4;
      if (uVar26 <= uVar15) {
        uVar15 = uVar26;
      }
      if ((1 < uVar15) && ((((int)plVar27 - (int)plVar30 | -(int)plVar30) & 0xfU) == 0)) {
        uVar15 = uVar15 & 0xffffffffffffffe;
        plVar30 = plVar30 + uVar15 * -2;
        do {
          uVar15 = uVar15 - 2;
        } while (uVar15 != 0);
      }
      do {
        if (plVar30 == plVar27) {
          operator_delete(plVar27);
          goto LAB_0087aa20;
        }
        plVar30 = plVar30 + -2;
      } while (plVar30 != (long *)0x0);
LAB_0087aa00:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
LAB_0087aa20:
    pbVar23 = local_8c0;
    local_8c0 = (byte *)0x0;
    if (pbVar23 != (byte *)0x0) {
      operator_delete__(pbVar23);
    }
    if (local_88 == 1) {
      FUN_007b5554(&local_a0);
      FUN_007dd190(&local_890);
    }
    ppbVar19 = &local_940;
  }
  FUN_007b5554(ppbVar19);
LAB_0087aa58:
  if (*(long *)(lVar8 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
  while (pvVar17 = (void *)((long)pvVar17 + -0x10), pvVar17 != (void *)0x0) {
LAB_0087a1d4:
    if (pvVar17 == pvVar28) {
      local_8a0 = local_8a8;
      uStack_89c = uStack_8a4;
      operator_delete(pvVar28);
      goto LAB_0087a960;
    }
  }
  goto LAB_0087aa00;
}


// ===== 0087aa90  FUN_0087aa90 =====

void FUN_0087aa90(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0087aa9c  FUN_0087aa9c =====

void FUN_0087aa9c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  size_t __n;
  undefined8 uVar6;
  long lVar7;
  void *pvVar8;
  ulong uVar9;
  ulong uVar10;
  void *__dest;
  
  lVar7 = param_1[2];
  __dest = (void *)*param_1;
  if ((ulong)((lVar7 - (long)__dest >> 2) * -0x5555555555555555) < param_4) {
    if (__dest == (void *)0x0) {
LAB_0087ac90:
      if (param_4 < 0x1555555555555556) {
        uVar9 = (lVar7 >> 2) * 0x5555555555555556;
        if (uVar9 < param_4 || uVar9 - param_4 == 0) {
          uVar9 = param_4;
        }
        if (0xaaaaaaaaaaaaaa9 < (ulong)((lVar7 >> 2) * -0x5555555555555555)) {
          uVar9 = 0x1555555555555555;
        }
        if (uVar9 < 0x1555555555555556) {
          puVar5 = (undefined8 *)operator_new(uVar9 * 0xc);
          *param_1 = puVar5;
          param_1[1] = puVar5;
          param_1[2] = (void *)((long)puVar5 + uVar9 * 0xc);
          if (param_2 != param_3) {
            do {
              if (puVar5 == (undefined8 *)0x0) goto LAB_0087ad38;
              uVar6 = *param_2;
              uVar2 = *(undefined4 *)(param_2 + 1);
              param_2 = (undefined8 *)((long)param_2 + 0xc);
              *puVar5 = uVar6;
              *(undefined4 *)(puVar5 + 1) = uVar2;
              puVar5 = (undefined8 *)((long)puVar5 + 0xc);
            } while (param_2 != param_3);
          }
          param_1[1] = puVar5;
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_007dd920();
    }
    pvVar8 = (void *)param_1[1];
    uVar10 = (long)pvVar8 * -0x1555555555555555 - 4U >> 2;
    uVar9 = (ulong)(((long)__dest - (long)pvVar8) * 0x1555555555555555) >> 2;
    if (uVar10 <= uVar9) {
      uVar9 = uVar10;
    }
    if ((1 < uVar9) && ((((int)__dest - (int)pvVar8 | -(int)pvVar8) & 3U) == 0)) {
      uVar9 = uVar9 & 0x3ffffffffffffffe;
      pvVar8 = (void *)((long)pvVar8 + uVar9 * -0xc);
      do {
        uVar9 = uVar9 - 2;
      } while (uVar9 != 0);
    }
    do {
      if (pvVar8 == __dest) {
        param_1[1] = __dest;
        operator_delete(__dest);
        lVar7 = 0;
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        goto LAB_0087ac90;
      }
      pvVar8 = (void *)((long)pvVar8 + -0xc);
    } while (pvVar8 != (void *)0x0);
  }
  else {
    __n = param_1[1] - (long)__dest;
    if ((ulong)(((long)__n >> 2) * -0x5555555555555555) < param_4) {
      memmove(__dest,param_2,__n);
      puVar5 = (undefined8 *)param_1[1];
      puVar3 = (undefined8 *)((long)param_2 + __n);
      puVar4 = puVar5;
      while( true ) {
        if (puVar3 == param_3) {
          param_1[1] = puVar5;
          return;
        }
        if (puVar4 == (undefined8 *)0x0) break;
        uVar6 = *puVar3;
        puVar5 = (undefined8 *)((long)puVar5 + 0xc);
        *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar3 + 1);
        *puVar4 = uVar6;
        puVar3 = (undefined8 *)((long)puVar3 + 0xc);
        puVar4 = (undefined8 *)((long)puVar4 + 0xc);
      }
LAB_0087ad38:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    memmove(__dest,param_2,(long)param_3 - (long)param_2);
    lVar7 = param_1[1];
    uVar9 = (ulong)((((long)__dest + (long)param_3) - (lVar7 + (long)param_2)) * 0x1555555555555555)
            >> 2;
    uVar10 = lVar7 * -0x1555555555555555 - 4U >> 2;
    if (uVar10 <= uVar9) {
      uVar9 = uVar10;
    }
    lVar1 = (long)__dest + ((long)param_3 - (long)param_2);
    if ((1 < uVar9) &&
       (((((int)__dest + (int)param_3) - ((int)lVar7 + (int)param_2) | -(int)lVar7) & 3U) == 0)) {
      uVar9 = uVar9 & 0x3ffffffffffffffe;
      lVar7 = lVar7 + uVar9 * -0xc;
      do {
        uVar9 = uVar9 - 2;
      } while (uVar9 != 0);
    }
    do {
      if (lVar7 == lVar1) {
        param_1[1] = lVar1;
        return;
      }
      lVar7 = lVar7 + -0xc;
    } while (lVar7 != 0);
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 0087ad50  FUN_0087ad50 =====

undefined8 * FUN_0087ad50(long *param_1,undefined8 *param_2,ushort *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ushort uVar3;
  void *pvVar4;
  void *pvVar5;
  size_t __n;
  ulong uVar6;
  ulong uVar7;
  void *__dest;
  undefined8 *puVar8;
  
  puVar8 = (undefined8 *)(param_1[1] - *param_1);
  uVar1 = ((long)puVar8 >> 4) + 1;
  if (uVar1 >> 0x3c != 0) {
    FUN_0060aa38();
LAB_0087ae58:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  uVar6 = param_1[2] - *param_1;
  uVar7 = (long)uVar6 >> 3;
  if (uVar7 <= uVar1) {
    uVar7 = uVar1;
  }
  if (0x7fffffffffffffef < uVar6) {
    uVar7 = 0xfffffffffffffff;
  }
  if (uVar7 == 0) {
    pvVar4 = (void *)0x0;
  }
  else {
    if (uVar7 >> 0x3c != 0) goto LAB_0087ae58;
    pvVar4 = operator_new(uVar7 << 4);
    puVar8 = (undefined8 *)((long)pvVar4 + (long)puVar8);
  }
  if (puVar8 != (undefined8 *)0x0) {
    uVar3 = *param_3;
    uVar2 = 0;
    if (uVar3 != 0) {
      uVar2 = *param_2;
    }
    *puVar8 = uVar2;
    puVar8[1] = (ulong)uVar3;
    __n = param_1[1] - *param_1;
    __dest = (void *)((long)puVar8 - __n);
    memcpy(__dest,(void *)*param_1,__n);
    pvVar5 = (void *)*param_1;
    *param_1 = (long)__dest;
    param_1[1] = (long)(puVar8 + 2);
    param_1[2] = (long)((long)pvVar4 + uVar7 * 0x10);
    if (pvVar5 != (void *)0x0) {
      operator_delete(pvVar5);
    }
    return puVar8 + 2;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0087ae5c  FUN_0087ae5c =====

long FUN_0087ae5c(long *param_1,undefined8 *param_2)

{
  void *pvVar1;
  void *pvVar2;
  size_t __n;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  void *__dest;
  
  puVar7 = (undefined8 *)(param_1[1] - *param_1);
  uVar3 = ((long)puVar7 >> 2) * -0x5555555555555555 + 1;
  if (0x1555555555555555 < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_007dd920();
  }
  lVar4 = param_1[2] - *param_1 >> 2;
  uVar6 = lVar4 * 0x5555555555555556;
  if (uVar6 < uVar3 || uVar6 - uVar3 == 0) {
    uVar6 = uVar3;
  }
  if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar4 * -0x5555555555555555)) {
    uVar6 = 0x1555555555555555;
  }
  if (uVar6 == 0) {
    pvVar1 = (void *)0x0;
  }
  else {
    if (0x1555555555555555 < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    pvVar1 = operator_new(uVar6 * 0xc);
    puVar7 = (undefined8 *)((long)pvVar1 + (long)puVar7);
  }
  if (puVar7 != (undefined8 *)0x0) {
    uVar5 = *param_2;
    *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(param_2 + 1);
    *puVar7 = uVar5;
    __n = param_1[1] - *param_1;
    __dest = (void *)((long)puVar7 - __n);
    memcpy(__dest,(void *)*param_1,__n);
    pvVar2 = (void *)*param_1;
    *param_1 = (long)__dest;
    param_1[1] = (long)puVar7 + 0xc;
    param_1[2] = (long)((long)pvVar1 + uVar6 * 0xc);
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
    return (long)puVar7 + 0xc;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0087af7c  FUN_0087af7c =====

void FUN_0087af7c(undefined8 param_1)

{
  void *pvVar1;
  void *local_38;
  void *local_30;
  
  FUN_0087b608(&local_38);
  pvVar1 = (void *)0x0;
  if ((long)local_30 - (long)local_38 != 0) {
    pvVar1 = local_38;
  }
  FUN_0087b004(param_1,pvVar1,(long)local_30 - (long)local_38);
  if (local_38 != (void *)0x0) {
    if ((long)local_30 - 1U < (ulong)((long)local_30 - (long)local_38)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    local_30 = local_38;
    operator_delete(local_38);
  }
  return;
}


// ===== 0087b004  FUN_0087b004 =====

void FUN_0087b004(undefined1 *param_1,undefined8 param_2,ulong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined1 uVar11;
  undefined8 local_70;
  undefined8 local_68;
  
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = param_2;
  if ((param_3 >> 0x1c & 0x1ffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../rtc_base/numerics/safe_conversions.h",0x24,
                 "IsValueInRangeForNumericType<Dst>(value)",&DAT_001f5fa0);
  }
  local_68 = (undefined1 *)CONCAT44(0xaaaaaa01,(int)(param_3 << 3));
  uVar1 = FUN_007d6508(&local_70);
  uVar2 = FUN_007d6508(&local_70);
  iVar3 = FUN_007d60c4(&local_70);
  iVar4 = FUN_007d60c4(&local_70);
  uVar5 = FUN_007d6508(&local_70);
  if (uVar5 == 0) {
LAB_0087b178:
    uVar5 = FUN_007d6508(&local_70);
    uVar6 = FUN_007d6508(&local_70);
    local_68._0_5_ = CONCAT14(1,(int)local_68);
    if (((uVar6 | uVar5) < 0x20) && (-1 < (int)local_68)) {
      iVar7 = FUN_007d60c4(&local_70);
      uVar8 = FUN_007d5db0(&local_70,2);
      iVar9 = FUN_007d6670(&local_70);
      local_68._0_5_ = CONCAT14(1,(int)local_68);
      if ((iVar9 + 0x1aU < 0x34) && (-1 < (int)local_68)) {
        FUN_007d6508(&local_70);
        FUN_007d6508(&local_70);
        FUN_007d6120(&local_70,2);
        uVar10 = FUN_007d60c4(&local_70);
        if (-1 < (int)local_68) {
          *param_1 = iVar4 != 0;
          param_1[3] = 0xaa;
          uVar11 = 1;
          param_1[1] = iVar7 != 0;
          param_1[2] = iVar3 != 0;
          *(uint *)(param_1 + 4) = uVar5;
          *(uint *)(param_1 + 8) = uVar6;
          *(undefined4 *)(param_1 + 0xc) = uVar8;
          *(undefined4 *)(param_1 + 0x10) = uVar10;
          *(int *)(param_1 + 0x14) = iVar9;
          *(undefined4 *)(param_1 + 0x18) = uVar1;
          *(undefined4 *)(param_1 + 0x1c) = uVar2;
          goto LAB_0087b250;
        }
      }
    }
  }
  else {
    uVar6 = FUN_007d6508(&local_70);
    if (uVar6 == 0) {
      do {
        local_68._0_5_ = CONCAT14(1,(int)local_68);
        if ((int)local_68 < 0) break;
        FUN_007d6508(&local_70);
        uVar6 = uVar6 + 1;
      } while (uVar6 <= uVar5);
      goto LAB_0087b178;
    }
    if (uVar6 == 1) goto LAB_0087b178;
    if (uVar6 == 2) {
      uVar6 = 0;
      do {
        local_68._0_5_ = CONCAT14(1,(int)local_68);
        if ((int)local_68 < 0) break;
        FUN_007d6508(&local_70);
        FUN_007d6508(&local_70);
        uVar6 = uVar6 + 1;
      } while (uVar6 <= uVar5);
      goto LAB_0087b178;
    }
    if (uVar6 - 3 < 3) {
      FUN_007d6120(&local_70,1);
      FUN_007d6508(&local_70);
      goto LAB_0087b178;
    }
    if (uVar6 != 6) goto LAB_0087b178;
    iVar7 = FUN_007d6508(&local_70);
    local_68._0_5_ = CONCAT14(1,(int)local_68);
    if ((-1 < (int)local_68) &&
       ((ulong)(iVar7 + 1) * (ulong)(0x21 - (int)LZCOUNT(uVar5)) >> 0x1f == 0)) {
      FUN_007d6120(&local_70);
      goto LAB_0087b178;
    }
  }
  uVar11 = 0;
  *param_1 = 0;
LAB_0087b250:
  param_1[0x20] = uVar11;
  return;
}


// ===== 0087b298  FUN_0087b298 =====

uint FUN_0087b298(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4)

{
  ulong uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 *local_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_0087b608(&local_40);
  uVar1 = (long)puStack_38 - (long)local_40;
  local_50 = (undefined1 *)0x0;
  if (uVar1 != 0) {
    local_50 = local_40;
  }
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  if ((uVar1 >> 0x1c & 0x1ffffffff) == 0) {
    local_48 = (undefined1 *)CONCAT44(0xaaaaaa01,(int)uVar1 * 8);
    uVar3 = FUN_007d6508(&local_50);
    *param_3 = uVar3;
    uVar3 = FUN_007d6508(&local_50);
    uVar2 = (uint)local_48;
    *param_4 = uVar3;
    if (local_40 != (undefined1 *)0x0) {
      if (puStack_38 + -1 < puStack_38 + -(long)local_40) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      puStack_38 = local_40;
      operator_delete(local_40);
    }
    return ~uVar2 >> 0x1f;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../rtc_base/numerics/safe_conversions.h",0x24,
               "IsValueInRangeForNumericType<Dst>(value)",&DAT_001f5fa0);
}


// ===== 0087b390  FUN_0087b390 =====

undefined1  [16] FUN_0087b390(void)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined1 *local_60;
  undefined8 local_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_0087b608(&local_50);
  uVar4 = (long)puStack_48 - (long)local_50;
  local_60 = (undefined1 *)0x0;
  if (uVar4 != 0) {
    local_60 = local_50;
  }
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  if ((uVar4 >> 0x1c & 0x1ffffffff) == 0) {
    local_58 = (undefined1 *)CONCAT44(0xaaaaaa01,(int)uVar4 * 8);
    uVar2 = FUN_007d6508(&local_60);
    FUN_007d6508(&local_60);
    lVar3 = FUN_007d6508(&local_60);
    uVar1 = (uint)local_58;
    if (local_50 != (undefined1 *)0x0) {
      if (puStack_48 + -1 < puStack_48 + -(long)local_50) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      puStack_48 = local_50;
      operator_delete(local_50);
    }
    uVar4 = (ulong)(uVar2 & 0xffffff00) | lVar3 << 0x20;
    if (uVar1 == 0xffffffff || (int)(uVar1 + 1) < 0 != SCARRY4(uVar1,1)) {
      uVar4 = 0;
    }
    auVar5._0_8_ = uVar4 | uVar2 & ((int)uVar1 >> 0x1f ^ 0xffffffffU) & 0xff;
    auVar5._8_4_ = ~uVar1 >> 0x1f;
    auVar5._12_4_ = 0;
    return auVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../rtc_base/numerics/safe_conversions.h",0x24,
               "IsValueInRangeForNumericType<Dst>(value)",&DAT_001f5fa0);
}


// ===== 0087b4ac  FUN_0087b4ac =====

void FUN_0087b4ac(undefined8 *param_1,long param_2,ulong param_3)

{
  char *pcVar1;
  ulong *puVar2;
  ulong *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong local_58;
  ulong uStack_50;
  undefined8 local_48;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if ((2 < param_3) && (param_3 != 3)) {
    puVar2 = (ulong *)0x0;
    uVar6 = 0;
    do {
      pcVar1 = (char *)(param_2 + uVar6);
      if ((byte)pcVar1[2] < 2) {
        if (pcVar1[2] == 1) {
          if ((pcVar1[1] == '\0') && (*pcVar1 == '\0')) {
            uStack_50 = uVar6 + 3;
            local_48 = 0;
            local_58 = uVar6;
            if (uVar6 == 0) {
              uVar5 = 0;
            }
            else {
              uVar5 = uVar6;
              if (*(char *)(param_2 + (uVar6 - 1)) == '\0') {
                uVar5 = uVar6 - 1;
                local_58 = uVar6 - 1;
              }
            }
            puVar3 = puVar2;
            if (puVar2 != (ulong *)*param_1) {
              puVar2[-1] = uVar5 - puVar2[-2];
              puVar3 = (ulong *)param_1[1];
            }
            if (puVar3 < (ulong *)param_1[2]) {
              if (puVar3 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                          );
              }
              puVar3[2] = 0;
              puVar2 = puVar3 + 3;
              puVar3[1] = uStack_50;
              *puVar3 = local_58;
            }
            else {
              puVar2 = (ulong *)FUN_0087b904(param_1,&local_58);
            }
            param_1[1] = puVar2;
          }
          goto LAB_0087b4fc;
        }
        lVar4 = 1;
      }
      else {
LAB_0087b4fc:
        lVar4 = 3;
      }
      uVar6 = uVar6 + lVar4;
    } while (uVar6 < param_3 - 3);
    if (puVar2 != (ulong *)*param_1) {
      puVar2[-1] = param_3 - puVar2[-2];
    }
  }
  return;
}


// ===== 0087b5fc  FUN_0087b5fc =====

uint FUN_0087b5fc(uint param_1)

{
  return param_1 & 0x1f;
}


// ===== 0087b608  FUN_0087b608 =====

void FUN_0087b608(undefined8 *param_1,long param_2,ulong param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  ulong uVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_3 != 0) {
    if ((long)param_3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d34c0();
    }
    pcVar1 = (char *)operator_new(param_3);
    uVar4 = 0;
    *param_1 = pcVar1;
    param_1[1] = pcVar1;
    param_1[2] = pcVar1 + param_3;
    do {
      while ((((param_3 - uVar4 < 3 || (*(char *)(param_2 + uVar4) != '\0')) ||
              (pcVar3 = (char *)(param_2 + uVar4 + 1), *pcVar3 != '\0')) ||
             (((char *)(param_2 + uVar4))[2] != '\x03'))) {
        if (pcVar1 < (char *)param_1[2]) {
          if (pcVar1 == (char *)0x0) goto LAB_0087b73c;
          *pcVar1 = *(char *)(param_2 + uVar4);
          pcVar1 = pcVar1 + 1;
        }
        else {
          pcVar1 = (char *)FUN_0087ba3c(param_1,param_2 + uVar4);
        }
        uVar4 = uVar4 + 1;
        param_1[1] = pcVar1;
        if (param_3 <= uVar4) {
          return;
        }
      }
      if (pcVar1 < (char *)param_1[2]) {
        if (pcVar1 == (char *)0x0) goto LAB_0087b73c;
        pcVar2 = pcVar1 + 1;
        *pcVar1 = '\0';
      }
      else {
        pcVar2 = (char *)FUN_0087ba3c(param_1,param_2 + uVar4);
      }
      param_1[1] = pcVar2;
      if (pcVar2 < (char *)param_1[2]) {
        if (pcVar2 == (char *)0x0) {
LAB_0087b73c:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        pcVar1 = pcVar2 + 1;
        *pcVar2 = *pcVar3;
      }
      else {
        pcVar1 = (char *)FUN_0087ba3c(param_1,pcVar3);
      }
      param_1[1] = pcVar1;
      uVar4 = uVar4 + 3;
    } while (uVar4 < param_3);
  }
  return;
}


// ===== 0087b754  FUN_0087b754 =====

void FUN_0087b754(byte *param_1,long param_2,ulong *param_3)

{
  ulong uVar1;
  size_t __n;
  byte bVar2;
  void *pvVar3;
  ulong uVar4;
  void *pvVar5;
  ulong uVar6;
  ulong __n_00;
  ulong uVar7;
  
  __n = *param_3;
  uVar6 = __n + param_2;
  if (param_3[1] < uVar6) {
    pvVar3 = operator_new__(uVar6);
    pvVar5 = (void *)param_3[2];
    if (pvVar5 == (void *)0x0) {
      param_3[2] = (ulong)pvVar3;
    }
    else {
      memcpy(pvVar3,pvVar5,__n);
      param_3[2] = (ulong)pvVar3;
      operator_delete__(pvVar5);
    }
    param_3[1] = uVar6;
  }
  if (param_2 != 0) {
    uVar6 = *param_3;
    uVar7 = 0;
    do {
      bVar2 = *param_1;
      uVar4 = param_3[1];
      __n_00 = uVar6;
      if ((bVar2 < 4) && (1 < uVar7)) {
        __n_00 = uVar6 + 1;
        if (uVar4 < __n_00) {
          uVar4 = uVar4 + (uVar4 >> 1);
          uVar7 = __n_00;
          if (__n_00 <= uVar4) {
            uVar7 = uVar4;
          }
          pvVar3 = operator_new__(uVar7);
          pvVar5 = (void *)param_3[2];
          if (pvVar5 == (void *)0x0) {
            param_3[2] = (ulong)pvVar3;
          }
          else {
            memcpy(pvVar3,pvVar5,uVar6);
            param_3[2] = (ulong)pvVar3;
            operator_delete__(pvVar5);
            uVar6 = *param_3;
          }
          param_3[1] = uVar7;
        }
        uVar7 = 0;
        *(undefined1 *)(param_3[2] + uVar6) = 3;
        uVar4 = param_3[1];
        *param_3 = __n_00;
      }
      uVar6 = __n_00 + 1;
      if (uVar4 < uVar6) {
        uVar4 = uVar4 + (uVar4 >> 1);
        uVar1 = uVar6;
        if (uVar6 <= uVar4) {
          uVar1 = uVar4;
        }
        pvVar3 = operator_new__(uVar1);
        pvVar5 = (void *)param_3[2];
        if (pvVar5 == (void *)0x0) {
          param_3[2] = (ulong)pvVar3;
        }
        else {
          memcpy(pvVar3,pvVar5,__n_00);
          param_3[2] = (ulong)pvVar3;
          operator_delete__(pvVar5);
          __n_00 = *param_3;
        }
        param_3[1] = uVar1;
      }
      param_1 = param_1 + 1;
      uVar4 = 0;
      if (bVar2 == 0) {
        uVar4 = uVar7 + 1;
      }
      param_2 = param_2 + -1;
      *(byte *)(param_3[2] + __n_00) = bVar2;
      *param_3 = uVar6;
      uVar7 = uVar4;
    } while (param_2 != 0);
  }
  return;
}


// ===== 0087b904  FUN_0087b904 =====

undefined8 * FUN_0087b904(long *param_1,undefined8 *param_2)

{
  void *pvVar1;
  void *pvVar2;
  size_t __n;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  void *__dest;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar6 = (undefined8 *)(param_1[1] - *param_1);
  uVar3 = ((long)puVar6 >> 3) * -0x5555555555555555 + 1;
  if (0xaaaaaaaaaaaaaaa < uVar3) {
    FUN_0087ba24();
LAB_0087ba20:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  lVar4 = param_1[2] - *param_1 >> 3;
  uVar5 = lVar4 * 0x5555555555555556;
  if (uVar5 < uVar3 || uVar5 - uVar3 == 0) {
    uVar5 = uVar3;
  }
  if (0x555555555555554 < (ulong)(lVar4 * -0x5555555555555555)) {
    uVar5 = 0xaaaaaaaaaaaaaaa;
  }
  if (uVar5 == 0) {
    pvVar1 = (void *)0x0;
  }
  else {
    if (0xaaaaaaaaaaaaaaa < uVar5) goto LAB_0087ba20;
    pvVar1 = operator_new(uVar5 * 0x18);
    puVar6 = (undefined8 *)((long)pvVar1 + (long)puVar6);
  }
  if (puVar6 != (undefined8 *)0x0) {
    uVar8 = param_2[1];
    uVar7 = *param_2;
    puVar6[2] = param_2[2];
    puVar6[1] = uVar8;
    *puVar6 = uVar7;
    __n = param_1[1] - *param_1;
    __dest = (void *)((long)puVar6 - __n);
    memcpy(__dest,(void *)*param_1,__n);
    pvVar2 = (void *)*param_1;
    *param_1 = (long)__dest;
    param_1[1] = (long)(puVar6 + 3);
    param_1[2] = (long)((long)pvVar1 + uVar5 * 0x18);
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
    return puVar6 + 3;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0087ba24  FUN_0087ba24 =====

void FUN_0087ba24(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 0087ba3c  FUN_0087ba3c =====

undefined1 * FUN_0087ba3c(long *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  void *pvVar2;
  void *pvVar3;
  size_t __n;
  ulong uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  
  puVar6 = (undefined1 *)(param_1[1] - *param_1);
  puVar1 = puVar6 + 1;
  if ((long)puVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_005d34c0();
  }
  uVar4 = param_1[2] - *param_1;
  puVar5 = (undefined1 *)(uVar4 * 2);
  if (puVar5 < puVar1 || (long)puVar5 - (long)puVar1 == 0) {
    puVar5 = puVar1;
  }
  if (0x3ffffffffffffffe < uVar4) {
    puVar5 = (undefined1 *)0x7fffffffffffffff;
  }
  if (puVar5 == (undefined1 *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = operator_new((ulong)puVar5);
    puVar6 = (undefined1 *)((long)pvVar2 + (long)puVar6);
  }
  if (puVar6 != (undefined1 *)0x0) {
    *puVar6 = *param_2;
    __n = param_1[1] - *param_1;
    memcpy(puVar6 + -__n,(void *)*param_1,__n);
    pvVar3 = (void *)*param_1;
    *param_1 = (long)(puVar6 + -__n);
    param_1[1] = (long)(puVar6 + 1);
    param_1[2] = (long)((long)pvVar2 + (long)puVar5);
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    return puVar6 + 1;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0087bb1c  FUN_0087bb1c =====

void FUN_0087bb1c(int param_1,int param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_1 == 0) {
    lVar1 = FUN_0066631c("WebRTC.Video.H264.SpsValid",0x1a,8);
    if (lVar1 == 0) {
      return;
    }
    uVar2 = 7;
    uVar3 = 3;
  }
  else {
    if (param_1 == 1) {
      lVar1 = FUN_0066631c("WebRTC.Video.H264.SpsValid",0x1a,8);
      if (lVar1 == 0) {
        return;
      }
      uVar3 = 5;
      if (param_2 == 0) {
        uVar3 = 1;
      }
      goto LAB_0087bbbc;
    }
    if ((param_1 != 2) || (lVar1 = FUN_0066631c("WebRTC.Video.H264.SpsValid",0x1a,8), lVar1 == 0)) {
      return;
    }
    uVar2 = 6;
    uVar3 = 2;
  }
  if (param_2 != 0) {
    uVar3 = uVar2;
  }
LAB_0087bbbc:
  FUN_00666568(lVar1,uVar3);
  return;
}


// ===== 0087bbdc  FUN_0087bbdc =====

undefined4
FUN_0087bbdc(undefined8 param_1,long param_2,undefined8 *param_3,long param_4,long param_5)

{
  size_t __n;
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  void *pvVar14;
  ulong uVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong uVar18;
  void *pvVar19;
  undefined8 uVar20;
  char *pcVar21;
  uint uVar22;
  int local_128;
  uint local_11c;
  uint local_118;
  uint local_114;
  ulong local_100;
  ulong local_f8;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined1 *puStack_e0;
  undefined1 *puStack_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined8 local_b0;
  undefined1 *puStack_a8;
  uint local_a0;
  undefined1 *local_90;
  undefined8 local_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_0087b608(&local_80);
  uVar18 = (long)puStack_78 - (long)local_80;
  local_90 = (undefined1 *)0x0;
  if (uVar18 != 0) {
    local_90 = local_80;
  }
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  if ((uVar18 >> 0x1c & 0x1ffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../rtc_base/numerics/safe_conversions.h",0x24,
                 "IsValueInRangeForNumericType<Dst>(value)",&DAT_001f5fa0);
  }
  local_88 = (undefined1 *)CONCAT44(0xaaaaaa01,(int)uVar18 * 8);
  local_a0 = 0xaaaaaaaa;
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
  local_d0 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_0087d9a4(&local_d0,&local_90);
  if ((local_a0 & 1) == 0) {
    uVar13 = 0;
    goto LAB_0087ce74;
  }
  if (*(char *)(param_3 + 6) == '\0') {
    if (param_3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    FUN_0087d8ac(param_3,&local_d0);
    *(undefined1 *)(param_3 + 6) = 1;
    if (param_2 == -0x40) goto LAB_0087bccc;
LAB_0087bc94:
    pvVar14 = operator_new__(param_2 + 0x40);
  }
  else {
    param_3[5] = puStack_a8;
    param_3[4] = local_b0;
    param_3[1] = puStack_c8;
    *param_3 = local_d0;
    param_3[3] = puStack_b8;
    param_3[2] = local_c0;
    if (param_2 != -0x40) goto LAB_0087bc94;
LAB_0087bccc:
    pvVar14 = (void *)0x0;
  }
  uVar18 = param_2 + 0x40;
  puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
  local_f0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e0 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_007d76d8(&local_f0,pvVar14,uVar18);
  local_100 = ((long)puStack_78 - (long)local_80) * 8 - (long)(int)(uint)local_88;
  local_f8 = local_100 >> 3;
  local_100 = local_100 & 7;
  local_88._0_5_ = CONCAT14(1,(uint)local_88);
  __n = local_f8;
  if (local_100 != 0) {
    __n = local_f8 + 1;
  }
  memcpy(pvVar14,local_80,__n);
  if (local_100 == 0) {
    local_100 = 7;
    local_f8 = local_f8 - 1;
  }
  else {
    local_100 = local_100 - 1;
  }
  FUN_007d7774(&local_f0,local_f8);
  if ((local_a0 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
              );
  }
  uVar15 = FUN_007d785c(&local_f0,1,1);
  if ((uVar15 & 1) == 0) {
    uVar18 = FUN_004249b0();
    if ((uVar18 & 1) == 0) {
      pcVar21 = ") FAILED: destination.WriteBits(1, 1)";
      uVar16 = 0x933;
      uVar20 = 0x126;
      goto LAB_0087ce2c;
    }
    goto LAB_0087ce30;
  }
  if ((int)puStack_a8 == 0) {
    uVar15 = FUN_007d785c(&local_f0,0,2);
    if ((uVar15 & 1) == 0) {
      uVar18 = FUN_004249b0();
      if ((uVar18 & 1) == 0) {
        pcVar21 = ") FAILED: destination.WriteBits(0, 2)";
        uVar16 = 0x97b;
        uVar20 = 0x12f;
        goto LAB_0087ce2c;
      }
    }
    else {
      if (param_4 == 0) {
        uVar15 = FUN_007d785c(&local_f0,0,1);
        if ((uVar15 & 1) == 0) goto LAB_0087c45c;
LAB_0087c3e0:
        uVar15 = FUN_007d785c(&local_f0,0,5);
        if ((uVar15 & 1) != 0) {
          uVar15 = FUN_007d785c(&local_f0,1,1);
          if ((uVar15 & 1) == 0) {
            uVar18 = FUN_004249b0();
            if ((uVar18 & 1) == 0) {
              pcVar21 = ") FAILED: destination.WriteBits(1, 1)";
              uVar16 = 0x9eb;
              uVar20 = 0x13d;
              goto LAB_0087ce2c;
            }
            goto LAB_0087ce30;
          }
          uVar15 = FUN_0087d4c8(&local_f0,local_b0._4_4_);
          if ((uVar15 & 1) == 0) {
            uVar18 = FUN_004249b0();
            if ((uVar18 & 1) == 0) {
              pcVar21 = ") FAILED: AddBitstreamRestriction(&destination, sps.max_num_ref_frames)";
              uVar16 = 0x9fb;
              uVar20 = 0x13f;
              goto LAB_0087ce2c;
            }
            goto LAB_0087ce30;
          }
          goto LAB_0087cb0c;
        }
        uVar18 = FUN_004249b0();
        if ((uVar18 & 1) != 0) goto LAB_0087ce30;
        pcVar21 = ") FAILED: destination.WriteBits(0, 5)";
        uVar16 = 0x9db;
        uVar20 = 0x13b;
        goto LAB_0087ce2c;
      }
      iVar4 = FUN_00659b84(param_4);
      if (((iVar4 == 2) || (cVar2 = FUN_00659b60(param_4), cVar2 != '\x02')) ||
         (cVar2 = FUN_00659b6c(param_4), cVar2 != '\x02')) {
        bVar1 = true;
      }
      else {
        cVar2 = FUN_00659b78(param_4);
        bVar1 = cVar2 != '\x02';
      }
      uVar15 = FUN_007d785c(&local_f0,bVar1,1);
      if ((uVar15 & 1) == 0) {
LAB_0087c45c:
        uVar18 = FUN_004249b0();
        if ((uVar18 & 1) == 0) {
          pcVar21 = ") FAILED: destination.WriteBits(video_signal_type_present_flag, 1)";
          uVar16 = 0x9a3;
          uVar20 = 0x134;
          goto LAB_0087ce2c;
        }
      }
      else {
        if (bVar1 == false) goto LAB_0087c3e0;
        uVar15 = FUN_007d785c(&local_f0,5,3);
        if ((uVar15 & 1) == 0) {
          uVar18 = FUN_004249b0();
          if ((uVar18 & 1) == 0) {
            pcVar21 = ") FAILED: destination.WriteBits(5, 3)";
            uVar16 = 0xef3;
            uVar20 = 0x1de;
LAB_0087cde8:
            FUN_00623bb0(&DAT_00221d58,"../../common_video/h264/sps_vui_rewriter.cc",uVar16,
                         "AddVideoSignalTypeInfo",&DAT_001c4dc3," (line:",uVar20,pcVar21);
          }
        }
        else {
          iVar4 = FUN_00659b84(param_4);
          uVar15 = FUN_007d785c(&local_f0,iVar4 == 2,1);
          if ((uVar15 & 1) == 0) {
            uVar18 = FUN_004249b0();
            if ((uVar18 & 1) == 0) {
              pcVar21 = 
              ") FAILED: destination.WriteBits( color_space.range() == ColorSpace::RangeID::kFull ? 1 : 0, 1)"
              ;
              uVar16 = 0xf0b;
              uVar20 = 0x1e1;
              goto LAB_0087cde8;
            }
          }
          else {
            uVar15 = FUN_007d785c(&local_f0,1,1);
            if ((uVar15 & 1) == 0) {
              uVar18 = FUN_004249b0();
              if ((uVar18 & 1) == 0) {
                pcVar21 = ") FAILED: destination.WriteBits(1, 1)";
                uVar16 = 0xf1b;
                uVar20 = 0x1e3;
                goto LAB_0087cde8;
              }
            }
            else {
              uVar13 = FUN_00659b60(param_4);
              uVar15 = FUN_007d77b4(&local_f0,uVar13);
              if ((uVar15 & 1) == 0) {
                uVar18 = FUN_004249b0();
                if ((uVar18 & 1) == 0) {
                  pcVar21 = 
                  ") FAILED: destination.WriteUInt8(static_cast<uint8_t>(color_space.primaries()))";
                  uVar16 = 0xf33;
                  uVar20 = 0x1e6;
                  goto LAB_0087cde8;
                }
              }
              else {
                uVar13 = FUN_00659b6c(param_4);
                uVar15 = FUN_007d77b4(&local_f0,uVar13);
                if ((uVar15 & 1) == 0) {
                  uVar18 = FUN_004249b0();
                  if ((uVar18 & 1) == 0) {
                    pcVar21 = 
                    ") FAILED: destination.WriteUInt8(static_cast<uint8_t>(color_space.transfer()))"
                    ;
                    uVar16 = 0xf4b;
                    uVar20 = 0x1e9;
                    goto LAB_0087cde8;
                  }
                }
                else {
                  uVar13 = FUN_00659b78(param_4);
                  uVar15 = FUN_007d77b4(&local_f0,uVar13);
                  if ((uVar15 & 1) != 0) goto LAB_0087c3e0;
                  uVar18 = FUN_004249b0();
                  if ((uVar18 & 1) == 0) {
                    pcVar21 = 
                    ") FAILED: destination.WriteUInt8(static_cast<uint8_t>(color_space.matrix()))";
                    uVar16 = 0xf63;
                    uVar20 = 0x1ec;
                    goto LAB_0087cde8;
                  }
                }
              }
            }
          }
        }
        uVar18 = FUN_004249b0();
        if ((uVar18 & 1) == 0) {
          pcVar21 = ") FAILED: AddVideoSignalTypeInfo(destination, *color_space)";
          uVar16 = 0x9b3;
          uVar20 = 0x136;
          goto LAB_0087ce2c;
        }
      }
    }
LAB_0087ce30:
    uVar18 = FUN_004249b0();
    if ((uVar18 & 1) == 0) {
      uVar16 = 0x5a3;
LAB_0087ce60:
      FUN_00623bb0(&DAT_001f4e98,"../../common_video/h264/sps_vui_rewriter.cc",uVar16,
                   "Failed to parse/copy SPS VUI.");
    }
joined_r0x0087ce3c:
    uVar13 = 0;
  }
  else {
    uVar16 = FUN_007d5db0(&local_90,1);
    uVar15 = FUN_007d785c(&local_f0,uVar16,1);
    if ((uVar15 & 1) == 0) {
      local_88 = (undefined1 *)CONCAT44(local_88._4_4_,0xffffffff);
    }
    if ((int)uVar16 != 0) {
      uVar3 = FUN_007d5db0(&local_90,8);
      uVar15 = FUN_007d77b4(&local_f0,uVar3);
      if ((uVar15 & 1) == 0) {
        local_88 = (undefined1 *)CONCAT44(local_88._4_4_,0xffffffff);
      }
      if (((uVar3 ^ 0xffffffff) & 0xff) == 0) {
        uVar16 = FUN_007d5db0(&local_90,0x20);
        uVar15 = FUN_007d785c(&local_f0,uVar16,0x20);
        if ((uVar15 & 1) == 0) {
          local_88 = (undefined1 *)CONCAT44(local_88._4_4_,0xffffffff);
        }
      }
    }
    uVar16 = FUN_007d5db0(&local_90,1);
    uVar15 = FUN_007d785c(&local_f0,uVar16,1);
    if ((uVar15 & 1) == 0) {
      local_88 = (undefined1 *)CONCAT44(local_88._4_4_,0xffffffff);
    }
    if ((int)uVar16 != 0) {
      uVar16 = FUN_007d5db0(&local_90,1);
      uVar15 = FUN_007d785c(&local_f0,uVar16,1);
      if ((uVar15 & 1) == 0) {
        local_88 = (undefined1 *)CONCAT44(local_88._4_4_,0xffffffff);
      }
    }
    iVar4 = FUN_007d60c4(&local_90);
    if (iVar4 == 0) {
      uVar3 = 0;
      uVar6 = 0;
      iVar5 = 5;
LAB_0087bf88:
      uVar7 = 3;
      uVar8 = 3;
      uVar9 = 3;
    }
    else {
      iVar5 = FUN_007d5db0(&local_90,3);
      uVar3 = FUN_007d60c4(&local_90);
      uVar6 = FUN_007d60c4(&local_90);
      if (uVar6 == 0) goto LAB_0087bf88;
      uVar7 = FUN_007d5db0(&local_90,8);
      uVar8 = FUN_007d5db0(&local_90,8);
      uVar9 = FUN_007d5db0(&local_90,8);
    }
    local_88._0_5_ = CONCAT14(1,(uint)local_88);
    if ((int)(uint)local_88 < 0) {
      uVar15 = FUN_004249b0();
      if ((uVar15 & 1) == 0) {
        pcVar21 = ") FAILED: source.Ok()";
        uVar16 = 0x103b;
        uVar20 = 0x207;
        goto LAB_0087c77c;
      }
      goto LAB_0087c780;
    }
    local_114 = uVar3;
    local_11c = uVar8;
    iVar11 = iVar5;
    local_118 = uVar7;
    uVar22 = uVar6;
    uVar12 = uVar9;
    if (param_4 == 0) {
      uVar15 = FUN_007d785c(&local_f0,iVar4,1);
      if ((uVar15 & 1) == 0) goto LAB_0087c254;
      local_128 = iVar4;
      if (iVar4 != 0) goto LAB_0087c188;
LAB_0087c534:
      local_128 = 0;
LAB_0087c550:
      bVar1 = (((((local_128 == iVar4 && iVar11 == iVar5) && local_114 == uVar3) && uVar22 == uVar6)
               && (local_118 & 0xff) == (uVar7 & 0xff)) && (local_11c & 0xff) == (uVar8 & 0xff)) &&
              (uVar12 & 0xff) == (uVar9 & 0xff);
    }
    else {
      iVar10 = FUN_00659b84(param_4);
      if (((iVar10 == 2) || (cVar2 = FUN_00659b60(param_4), cVar2 != '\x02')) ||
         ((cVar2 = FUN_00659b6c(param_4), cVar2 != '\x02' ||
          (cVar2 = FUN_00659b78(param_4), cVar2 != '\x02')))) {
        iVar11 = FUN_00659b84(param_4);
        cVar2 = FUN_00659b60(param_4);
        if ((cVar2 == '\x02') && (cVar2 = FUN_00659b6c(param_4), cVar2 == '\x02')) {
          cVar2 = FUN_00659b78(param_4);
          uVar22 = (uint)(cVar2 != '\x02');
        }
        else {
          uVar22 = 1;
        }
        local_118 = FUN_00659b60(param_4);
        local_11c = FUN_00659b6c(param_4);
        uVar12 = FUN_00659b78(param_4);
        local_128 = 1;
        uVar15 = FUN_007d785c(&local_f0,1,1);
        if ((uVar15 & 1) == 0) goto LAB_0087c254;
        local_114 = (uint)(iVar11 == 2);
        iVar11 = 5;
LAB_0087c188:
        uVar15 = FUN_007d785c(&local_f0,iVar11,3);
        if ((uVar15 & 1) == 0) {
          uVar15 = FUN_004249b0();
          if ((uVar15 & 1) != 0) goto LAB_0087c780;
          pcVar21 = ") FAILED: destination.WriteBits(video_format_override, 3)";
          uVar16 = 0x1193;
          uVar20 = 0x232;
          goto LAB_0087c77c;
        }
        uVar15 = FUN_007d785c(&local_f0,local_114,1);
        if ((uVar15 & 1) == 0) {
          uVar15 = FUN_004249b0();
          if ((uVar15 & 1) == 0) {
            pcVar21 = ") FAILED: destination.WriteBits(video_full_range_flag_override, 1)";
            uVar16 = 0x11a3;
            uVar20 = 0x234;
            goto LAB_0087c77c;
          }
        }
        else {
          uVar15 = FUN_007d785c(&local_f0,uVar22,1);
          if ((uVar15 & 1) == 0) {
            uVar15 = FUN_004249b0();
            if ((uVar15 & 1) == 0) {
              pcVar21 = 
              ") FAILED: destination.WriteBits(colour_description_present_flag_override, 1)";
              uVar16 = 0x11b3;
              uVar20 = 0x236;
              goto LAB_0087c77c;
            }
          }
          else {
            if (uVar22 == 0) goto LAB_0087c550;
            uVar15 = FUN_007d77b4(&local_f0,local_118);
            if ((uVar15 & 1) == 0) {
              uVar15 = FUN_004249b0();
              if ((uVar15 & 1) == 0) {
                pcVar21 = ") FAILED: destination.WriteUInt8(colour_primaries_override)";
                uVar16 = 0x11c3;
                uVar20 = 0x238;
                goto LAB_0087c77c;
              }
            }
            else {
              uVar15 = FUN_007d77b4(&local_f0,local_11c);
              if ((uVar15 & 1) == 0) {
                uVar15 = FUN_004249b0();
                if ((uVar15 & 1) == 0) {
                  pcVar21 = ") FAILED: destination.WriteUInt8(transfer_characteristics_override)";
                  uVar16 = 0x11d3;
                  uVar20 = 0x23a;
                  goto LAB_0087c77c;
                }
              }
              else {
                uVar15 = FUN_007d77b4(&local_f0,uVar12);
                if ((uVar15 & 1) != 0) goto LAB_0087c550;
                uVar15 = FUN_004249b0();
                if ((uVar15 & 1) == 0) {
                  pcVar21 = ") FAILED: destination.WriteUInt8(matrix_coefficients_override)";
                  uVar16 = 0x11e3;
                  uVar20 = 0x23c;
                  goto LAB_0087c77c;
                }
              }
            }
          }
        }
      }
      else {
        uVar15 = FUN_007d785c(&local_f0,0,1);
        if ((uVar15 & 1) != 0) goto LAB_0087c534;
LAB_0087c254:
        uVar15 = FUN_004249b0();
        if ((uVar15 & 1) == 0) {
          pcVar21 = ") FAILED: destination.WriteBits(video_signal_type_present_flag_override, 1)";
          uVar16 = 0x1183;
          uVar20 = 0x230;
LAB_0087c77c:
          FUN_00623bb0(&DAT_00221d58,"../../common_video/h264/sps_vui_rewriter.cc",uVar16,
                       "CopyOrRewriteVideoSignalTypeInfo",&DAT_001c4dc3," (line:",uVar20,pcVar21);
        }
      }
LAB_0087c780:
      bVar1 = true;
    }
    uVar16 = FUN_007d5db0(&local_90,1);
    uVar15 = FUN_007d785c(&local_f0,uVar16,1);
    if ((uVar15 & 1) == 0) {
      local_88 = (undefined1 *)CONCAT44(local_88._4_4_,0xffffffff);
    }
    if ((int)uVar16 == 1) {
      uVar13 = FUN_007d6508(&local_90);
      uVar15 = FUN_007d7c84(&local_f0,uVar13);
      if ((uVar15 & 1) == 0) {
        local_88 = (undefined1 *)CONCAT44(local_88._4_4_,0xffffffff);
      }
      uVar13 = FUN_007d6508(&local_90);
      uVar15 = FUN_007d7c84(&local_f0,uVar13);
      if ((uVar15 & 1) == 0) {
        local_88 = (undefined1 *)CONCAT44(local_88._4_4_,0xffffffff);
      }
    }
    uVar16 = FUN_007d5db0(&local_90,1);
    uVar15 = FUN_007d785c(&local_f0,uVar16,1);
    if ((uVar15 & 1) == 0) {
      local_88 = (undefined1 *)CONCAT44(local_88._4_4_,0xffffffff);
    }
    if ((int)uVar16 == 1) {
      uVar16 = FUN_007d5db0(&local_90,0x20);
      uVar15 = FUN_007d785c(&local_f0,uVar16,0x20);
      if ((uVar15 & 1) == 0) {
        local_88 = (undefined1 *)CONCAT44(local_88._4_4_,0xffffffff);
      }
      uVar16 = FUN_007d5db0(&local_90,0x20);
      uVar15 = FUN_007d785c(&local_f0,uVar16,0x20);
      if ((uVar15 & 1) == 0) {
        local_88 = (undefined1 *)CONCAT44(local_88._4_4_,0xffffffff);
      }
      uVar16 = FUN_007d5db0(&local_90,1);
      uVar15 = FUN_007d785c(&local_f0,uVar16,1);
      if ((uVar15 & 1) == 0) {
        local_88 = (undefined1 *)CONCAT44(local_88._4_4_,0xffffffff);
      }
    }
    uVar15 = FUN_007d5db0(&local_90,1);
    uVar17 = FUN_007d785c(&local_f0,uVar15,1);
    if ((uVar17 & 1) == 0) {
      local_88 = (undefined1 *)CONCAT44(local_88._4_4_,0xffffffff);
    }
    if ((uVar15 & 0xffffffff) == 1) {
      FUN_0087d748(&local_90,&local_f0);
    }
    uVar16 = FUN_007d5db0(&local_90,1);
    uVar17 = FUN_007d785c(&local_f0,uVar16,1);
    if ((uVar17 & 1) == 0) {
      local_88 = (undefined1 *)CONCAT44(local_88._4_4_,0xffffffff);
    }
    if ((int)uVar16 == 1) {
      FUN_0087d748(&local_90,&local_f0);
LAB_0087c934:
      uVar16 = FUN_007d5db0(&local_90,1);
      uVar15 = FUN_007d785c(&local_f0,uVar16,1);
      if ((uVar15 & 1) == 0) {
        local_88 = (undefined1 *)CONCAT44(local_88._4_4_,0xffffffff);
      }
    }
    else if ((uVar15 & 0xffffffff) == 1) goto LAB_0087c934;
    uVar16 = FUN_007d5db0(&local_90,1);
    uVar15 = FUN_007d785c(&local_f0,uVar16,1);
    if ((uVar15 & 1) == 0) {
      local_88 = (undefined1 *)CONCAT44(local_88._4_4_,0xffffffff);
    }
    iVar4 = FUN_007d60c4(&local_90);
    uVar15 = FUN_007d785c(&local_f0,1,1);
    if ((uVar15 & 1) == 0) {
      uVar18 = FUN_004249b0();
      if ((uVar18 & 1) == 0) {
        pcVar21 = ") FAILED: destination.WriteBits(1, 1)";
        uVar16 = 0xbe3;
        uVar20 = 0x17c;
        goto LAB_0087ce2c;
      }
      goto LAB_0087ce30;
    }
    if (iVar4 == 0) {
      uVar15 = FUN_0087d4c8(&local_f0,local_b0._4_4_);
      if ((uVar15 & 1) == 0) {
        uVar18 = FUN_004249b0();
        if ((uVar18 & 1) == 0) {
          pcVar21 = ") FAILED: AddBitstreamRestriction(&destination, sps.max_num_ref_frames)";
          uVar16 = 0xc03;
          uVar20 = 0x180;
          goto LAB_0087ce2c;
        }
        goto LAB_0087ce30;
      }
LAB_0087cb0c:
      local_88._0_5_ = CONCAT14(1,(uint)local_88);
      uVar3 = (uint)local_88;
      if ((int)(uint)local_88 < 0) goto LAB_0087ce30;
LAB_0087cb1c:
      if (uVar3 == 0) {
        local_88._0_5_ = CONCAT14(1,(uint)local_88);
LAB_0087ccbc:
        FUN_007d7704(&local_f0,&local_f8,&local_100);
        if (local_100 != 0) {
          FUN_007d785c(&local_f0,0,8 - local_100);
          local_f8 = local_f8 + 1;
          local_100 = 0;
        }
        uVar15 = local_f8;
        if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0061fd88("../../common_video/h264/sps_vui_rewriter.cc",0xcb,"destination != nullptr",
                       &DAT_001f5fa0);
        }
        pvVar19 = pvVar14;
        if (uVar18 < local_f8) {
          uVar18 = uVar18 + (uVar18 >> 1);
          uVar17 = local_f8;
          if (local_f8 <= uVar18) {
            uVar17 = uVar18;
          }
          pvVar19 = operator_new__(uVar17);
          if (pvVar14 != (void *)0x0) {
            operator_delete__(pvVar14);
          }
        }
        pvVar14 = (void *)0x0;
        if (uVar15 != 0) {
          pvVar14 = pvVar19;
        }
        FUN_0087b754(pvVar14,uVar15,param_5);
        uVar13 = 2;
        pvVar14 = pvVar19;
        goto joined_r0x0087ce3c;
      }
      if ((uVar3 & 7) == 0) goto LAB_0087cb64;
      local_88._0_5_ = CONCAT14(1,(uint)local_88);
      uVar16 = FUN_007d5db0(&local_90,uVar3 & 7);
      uVar15 = FUN_007d785c(&local_f0,uVar16,uVar3 & 7);
      if ((uVar15 & 1) == 0) {
LAB_0087cc7c:
        local_88 = (undefined1 *)CONCAT35(local_88._5_3_,0x1ffffffff);
      }
      else {
        uVar3 = (uint)local_88;
        uVar16 = local_88;
        while (local_88 = (undefined1 *)uVar16, 0 < (int)uVar3) {
LAB_0087cb64:
          local_88._0_5_ = CONCAT14(1,(uint)local_88);
          if (0x1f < uVar3) {
            uVar3 = 0x20;
          }
          uVar16 = FUN_007d5db0(&local_90,uVar3);
          uVar15 = FUN_007d785c(&local_f0,uVar16,uVar3);
          if ((uVar15 & 1) == 0) goto LAB_0087cc7c;
          uVar3 = (uint)local_88;
          local_88._0_5_ = (uint5)(uint)local_88;
          uVar16 = local_88;
        }
        local_88._5_3_ = (undefined3)((ulong)uVar16 >> 0x28);
        local_88._0_4_ = (uint)uVar16;
        local_88._0_5_ = CONCAT14(1,(uint)local_88);
        if (uVar3 == 0) goto LAB_0087ccbc;
      }
      uVar18 = FUN_004249b0();
      if ((uVar18 & 1) == 0) {
        uVar16 = 0x5f3;
        goto LAB_0087ce60;
      }
      goto joined_r0x0087ce3c;
    }
    uVar16 = FUN_007d5db0(&local_90,1);
    uVar15 = FUN_007d785c(&local_f0,uVar16,1);
    if ((uVar15 & 1) == 0) {
      local_88 = (undefined1 *)CONCAT44(local_88._4_4_,0xffffffff);
    }
    uVar13 = FUN_007d6508(&local_90);
    uVar15 = FUN_007d7c84(&local_f0,uVar13);
    if ((uVar15 & 1) == 0) {
      local_88 = (undefined1 *)CONCAT44(local_88._4_4_,0xffffffff);
    }
    uVar13 = FUN_007d6508(&local_90);
    uVar15 = FUN_007d7c84(&local_f0,uVar13);
    if ((uVar15 & 1) == 0) {
      local_88 = (undefined1 *)CONCAT44(local_88._4_4_,0xffffffff);
    }
    uVar13 = FUN_007d6508(&local_90);
    uVar15 = FUN_007d7c84(&local_f0,uVar13);
    if ((uVar15 & 1) == 0) {
      local_88 = (undefined1 *)CONCAT44(local_88._4_4_,0xffffffff);
    }
    uVar13 = FUN_007d6508(&local_90);
    uVar15 = FUN_007d7c84(&local_f0,uVar13);
    if ((uVar15 & 1) == 0) {
      local_88 = (undefined1 *)CONCAT44(local_88._4_4_,0xffffffff);
    }
    iVar4 = FUN_007d6508(&local_90);
    uVar3 = FUN_007d6508(&local_90);
    uVar15 = FUN_007d7c84(&local_f0,0);
    if ((uVar15 & 1) == 0) {
      uVar18 = FUN_004249b0();
      if ((uVar18 & 1) == 0) {
        pcVar21 = ") FAILED: destination.WriteExponentialGolomb(0)";
        uVar16 = 0xcb3;
        uVar20 = 0x196;
LAB_0087ce2c:
        FUN_00623bb0(&DAT_00221d58,"../../common_video/h264/sps_vui_rewriter.cc",uVar16,
                     "CopyAndRewriteVui",&DAT_001c4dc3," (line:",uVar20,pcVar21);
      }
      goto LAB_0087ce30;
    }
    uVar15 = FUN_007d7c84(&local_f0,local_b0._4_4_);
    if ((uVar15 & 1) == 0) {
      uVar18 = FUN_004249b0();
      if ((uVar18 & 1) == 0) {
        pcVar21 = ") FAILED: destination.WriteExponentialGolomb(sps.max_num_ref_frames)";
        uVar16 = 0xcc3;
        uVar20 = 0x198;
        goto LAB_0087ce2c;
      }
      goto LAB_0087ce30;
    }
    if ((iVar4 != 0) || (local_b0._4_4_ < uVar3)) goto LAB_0087cb0c;
    local_88._0_5_ = CONCAT14(1,(uint)local_88);
    if ((int)(uint)local_88 < 0) goto LAB_0087ce30;
    uVar3 = (uint)local_88;
    if (!bVar1) goto LAB_0087cb1c;
    uVar13 = 1;
  }
joined_r0x0087ce3c:
  if (pvVar14 != (void *)0x0) {
    operator_delete__(pvVar14);
  }
LAB_0087ce74:
  if ((local_a0 & 1) != 0) {
    FUN_0087d8c4(&local_d0);
  }
  if (local_80 != (undefined1 *)0x0) {
    if (puStack_78 + -1 < puStack_78 + -(long)local_80) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    puStack_78 = local_80;
    operator_delete(local_80);
  }
  return uVar13;
}


// ===== 0087cf40  FUN_0087cf40 =====

ulong FUN_0087cf40(void)

{
  ulong uVar1;
  undefined4 in_w5;
  
  uVar1 = FUN_0087bbdc();
  FUN_0087bb1c(uVar1,in_w5);
  return uVar1 & 0xffffffff;
}


// ===== 0087cf78  FUN_0087cf78 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0087cf78(ulong *param_1,long param_2,ulong param_3,undefined8 param_4)

{
  ulong *puVar1;
  size_t __n;
  undefined1 *puVar2;
  size_t sVar3;
  undefined8 uVar4;
  char cVar5;
  undefined8 uVar6;
  void *pvVar7;
  void *pvVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  void *__n_00;
  void *pvVar12;
  undefined1 *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  void *local_f0;
  void *local_e8;
  size_t local_e0;
  undefined8 uStack_d8;
  undefined1 *local_d0;
  undefined8 local_c0;
  undefined1 *puStack_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  undefined1 *puStack_98;
  uint local_90;
  ulong *local_80;
  ulong *puStack_78;
  undefined1 *local_70;
  
  puStack_78 = (ulong *)&DAT_aaaaaaaaaaaaaaaa;
  local_80 = (ulong *)&DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_0087b4ac(&local_80);
  puVar9 = puStack_78;
  puVar14 = local_80;
  local_e8 = (void *)(param_3 +
                     ((ulong)((long)puStack_78 - (long)local_80) >> 3) * -0x5555555555555540);
  *param_1 = 0;
  param_1[1] = (ulong)local_e8;
  local_f0 = local_e8;
  if (local_e8 != (void *)0x0) {
    local_f0 = operator_new__((ulong)local_e8);
  }
  param_1[2] = (ulong)local_f0;
  uVar4 = _UNK_001f1d08;
  if (puVar14 != puVar9) {
    __n_00 = (void *)0x0;
    puVar15 = puVar14 + 2;
    do {
      uVar10 = puVar15[-2];
      uVar11 = puVar15[-1];
      sVar3 = param_3 - uVar10;
      if (uVar11 - uVar10 <= param_3 - uVar10) {
        sVar3 = uVar11 - uVar10;
      }
      pvVar12 = (void *)0x0;
      if (sVar3 != 0) {
        pvVar12 = (void *)(param_2 + uVar10);
      }
      __n = 0;
      if (uVar10 < param_3) {
        __n = sVar3;
      }
      pvVar8 = (void *)0x0;
      if (uVar10 < param_3) {
        pvVar8 = pvVar12;
      }
      sVar3 = param_3 - uVar11;
      if (uVar11 <= param_3 && sVar3 != 0) {
        puVar13 = (undefined1 *)(param_2 + uVar11);
        if (*puVar15 <= sVar3) {
          sVar3 = *puVar15;
        }
        if (sVar3 != 0) {
          cVar5 = FUN_0087b5fc(*puVar13);
          if (cVar5 == '\a') {
            puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
            local_b0 = &DAT_aaaaaaaaaaaaaaaa;
            puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
            puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
            puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
            local_c0 = 0xaaaaaaaaaaaaaa00;
            local_90 = 0xaaaaaa00;
            local_d0 = (undefined1 *)operator_new__(1);
            uStack_d8 = uVar4;
            *local_d0 = *puVar13;
            puVar2 = (undefined1 *)0x0;
            if (sVar3 - 1 != 0) {
              puVar2 = puVar13 + 1;
            }
            local_e0 = 1;
            uVar6 = FUN_0087bbdc(puVar2,sVar3 - 1,&local_c0,param_4,&local_e0);
            FUN_0087bb1c(uVar6,1);
            puVar2 = local_d0;
            if ((int)uVar6 == 2) {
              if (__n != 0) {
                pvVar12 = (void *)((long)__n_00 + __n);
                if (local_e8 < pvVar12) {
                  pvVar7 = (void *)((long)local_e8 + ((ulong)local_e8 >> 1));
                  local_e8 = pvVar12;
                  if (pvVar12 <= pvVar7) {
                    local_e8 = pvVar7;
                  }
                  pvVar7 = operator_new__((ulong)local_e8);
                  if (local_f0 == (void *)0x0) {
                    param_1[2] = (ulong)pvVar7;
                  }
                  else {
                    memcpy(pvVar7,local_f0,(size_t)__n_00);
                    param_1[2] = (ulong)pvVar7;
                    operator_delete__(local_f0);
                  }
                  param_1[1] = (ulong)local_e8;
                  local_f0 = pvVar7;
                }
                memcpy((void *)((long)local_f0 + (long)__n_00),pvVar8,__n);
                *param_1 = (ulong)pvVar12;
                __n_00 = pvVar12;
              }
              puVar13 = local_d0;
              sVar3 = local_e0;
              if (local_e0 != 0) {
                pvVar12 = (void *)((long)__n_00 + local_e0);
                if (local_e8 < pvVar12) {
                  pvVar8 = (void *)((long)local_e8 + ((ulong)local_e8 >> 1));
                  local_e8 = pvVar12;
                  if (pvVar12 <= pvVar8) {
                    local_e8 = pvVar8;
                  }
                  pvVar8 = operator_new__((ulong)local_e8);
                  if (local_f0 == (void *)0x0) {
                    param_1[2] = (ulong)pvVar8;
                  }
                  else {
                    memcpy(pvVar8,local_f0,(size_t)__n_00);
                    param_1[2] = (ulong)pvVar8;
                    operator_delete__(local_f0);
                  }
                  param_1[1] = (ulong)local_e8;
                  local_f0 = pvVar8;
                }
                memcpy((void *)((long)local_f0 + (long)__n_00),puVar13,sVar3);
                *param_1 = (ulong)pvVar12;
                __n_00 = pvVar12;
                puVar13 = local_d0;
              }
              local_d0 = (undefined1 *)0x0;
              if (puVar13 != (undefined1 *)0x0) {
                operator_delete__(puVar13);
              }
              if ((local_90 & 1) != 0) {
                FUN_0087d8c4(&local_c0);
              }
            }
            else {
              local_d0 = (undefined1 *)0x0;
              if (puVar2 != (undefined1 *)0x0) {
                operator_delete__(puVar2);
              }
              if ((local_90 & 1) != 0) {
                FUN_0087d8c4(&local_c0);
              }
joined_r0x0087d1ac:
              pvVar12 = __n_00;
              if (__n != 0) {
                pvVar12 = (void *)((long)__n_00 + __n);
                if (local_e8 < pvVar12) {
                  pvVar7 = (void *)((long)local_e8 + ((ulong)local_e8 >> 1));
                  local_e8 = pvVar12;
                  if (pvVar12 <= pvVar7) {
                    local_e8 = pvVar7;
                  }
                  pvVar7 = operator_new__((ulong)local_e8);
                  if (local_f0 == (void *)0x0) {
                    param_1[2] = (ulong)pvVar7;
                  }
                  else {
                    memcpy(pvVar7,local_f0,(size_t)__n_00);
                    param_1[2] = (ulong)pvVar7;
                    operator_delete__(local_f0);
                  }
                  param_1[1] = (ulong)local_e8;
                  local_f0 = pvVar7;
                }
                memcpy((void *)((long)local_f0 + (long)__n_00),pvVar8,__n);
                *param_1 = (ulong)pvVar12;
              }
              __n_00 = (void *)((long)pvVar12 + sVar3);
              if (local_e8 < __n_00) {
                pvVar8 = (void *)((long)local_e8 + ((ulong)local_e8 >> 1));
                local_e8 = __n_00;
                if (__n_00 <= pvVar8) {
                  local_e8 = pvVar8;
                }
                pvVar8 = operator_new__((ulong)local_e8);
                if (local_f0 == (void *)0x0) {
                  param_1[2] = (ulong)pvVar8;
                }
                else {
                  memcpy(pvVar8,local_f0,(size_t)pvVar12);
                  param_1[2] = (ulong)pvVar8;
                  operator_delete__(local_f0);
                }
                param_1[1] = (ulong)local_e8;
                local_f0 = pvVar8;
              }
              memcpy((void *)((long)local_f0 + (long)pvVar12),puVar13,sVar3);
              *param_1 = (ulong)__n_00;
            }
          }
          else {
            cVar5 = FUN_0087b5fc(*puVar13);
            if (cVar5 != '\t') goto joined_r0x0087d1ac;
          }
        }
      }
      puVar1 = puVar15 + 1;
      puVar15 = puVar15 + 3;
      puVar14 = local_80;
    } while (puVar1 != puVar9);
  }
  if (puVar14 != (ulong *)0x0) {
    uVar10 = (ulong)(((long)puVar14 - (long)puStack_78) * 0x1555555555555555) >> 3;
    uVar11 = (long)puStack_78 * -0x1555555555555555 - 8U >> 3;
    if (uVar11 <= uVar10) {
      uVar10 = uVar11;
    }
    puVar9 = puStack_78;
    if ((1 < uVar10) && ((((int)puVar14 - (int)puStack_78 | -(int)puStack_78) & 7U) == 0)) {
      uVar10 = uVar10 & 0x1ffffffffffffffe;
      puVar9 = puStack_78 + uVar10 * -3;
      do {
        uVar10 = uVar10 - 2;
      } while (uVar10 != 0);
    }
    while (puVar9 != puVar14) {
      puVar9 = puVar9 + -3;
      if (puVar9 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    puStack_78 = puVar14;
    operator_delete(puVar14);
  }
  return;
}


// ===== 0087d4c8  FUN_0087d4c8 =====

undefined8 FUN_0087d4c8(undefined8 param_1,undefined4 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  
  uVar1 = FUN_007d785c(param_1,1,1);
  if ((uVar1 & 1) == 0) {
    uVar1 = FUN_004249b0();
    if ((uVar1 & 1) != 0) {
      return 0;
    }
    pcVar4 = ") FAILED: destination->WriteBits(1, 1)";
    uVar2 = 0xdfb;
    uVar3 = 0x1bf;
  }
  else {
    uVar1 = FUN_007d7c84(param_1,2);
    if ((uVar1 & 1) == 0) {
      uVar1 = FUN_004249b0();
      if ((uVar1 & 1) != 0) {
        return 0;
      }
      pcVar4 = ") FAILED: destination->WriteExponentialGolomb(2)";
      uVar2 = 0xe13;
      uVar3 = 0x1c2;
    }
    else {
      uVar1 = FUN_007d7c84(param_1,1);
      if ((uVar1 & 1) == 0) {
        uVar1 = FUN_004249b0();
        if ((uVar1 & 1) != 0) {
          return 0;
        }
        pcVar4 = ") FAILED: destination->WriteExponentialGolomb(1)";
        uVar2 = 0xe2b;
        uVar3 = 0x1c5;
      }
      else {
        uVar1 = FUN_007d7c84(param_1,0x10);
        if ((uVar1 & 1) == 0) {
          uVar1 = FUN_004249b0();
          if ((uVar1 & 1) != 0) {
            return 0;
          }
          pcVar4 = ") FAILED: destination->WriteExponentialGolomb(16)";
          uVar2 = 0xe4b;
          uVar3 = 0x1c9;
        }
        else {
          uVar1 = FUN_007d7c84(param_1,0x10);
          if ((uVar1 & 1) == 0) {
            uVar1 = FUN_004249b0();
            if ((uVar1 & 1) != 0) {
              return 0;
            }
            pcVar4 = ") FAILED: destination->WriteExponentialGolomb(16)";
            uVar2 = 0xe53;
            uVar3 = 0x1ca;
          }
          else {
            uVar1 = FUN_007d7c84(param_1,0);
            if ((uVar1 & 1) == 0) {
              uVar1 = FUN_004249b0();
              if ((uVar1 & 1) != 0) {
                return 0;
              }
              pcVar4 = ") FAILED: destination->WriteExponentialGolomb(0)";
              uVar2 = 0xe73;
              uVar3 = 0x1ce;
            }
            else {
              uVar1 = FUN_007d7c84(param_1,param_2);
              if ((uVar1 & 1) != 0) {
                return 1;
              }
              uVar1 = FUN_004249b0();
              if ((uVar1 & 1) != 0) {
                return 0;
              }
              pcVar4 = ") FAILED: destination->WriteExponentialGolomb(max_num_ref_frames)";
              uVar2 = 0xe83;
              uVar3 = 0x1d0;
            }
          }
        }
      }
    }
  }
  FUN_00623bb0(&DAT_00221d58,"../../common_video/h264/sps_vui_rewriter.cc",uVar2,
               "AddBitstreamRestriction",&DAT_001c4dc3," (line:",uVar3,pcVar4);
  return 0;
}


// ===== 0087d748  FUN_0087d748 =====

void FUN_0087d748(long param_1,undefined8 param_2)

{
  bool bVar1;
  undefined4 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  int *piVar7;
  
  uVar3 = FUN_007d6508();
  uVar4 = FUN_007d7c84(param_2,uVar3 & 0xffffffff);
  if ((uVar4 & 1) == 0) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
  }
  uVar5 = FUN_007d5db0(param_1,8);
  uVar4 = FUN_007d785c(param_2,uVar5,8);
  if ((uVar4 & 1) == 0) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  else {
    piVar7 = (int *)(param_1 + 8);
    *(undefined1 *)(param_1 + 0xc) = 1;
    if (-1 < *piVar7) {
      uVar4 = 0;
      while( true ) {
        uVar2 = FUN_007d6508(param_1);
        uVar6 = FUN_007d7c84(param_2,uVar2);
        if ((uVar6 & 1) == 0) {
          *piVar7 = -1;
        }
        uVar2 = FUN_007d6508(param_1);
        uVar6 = FUN_007d7c84(param_2,uVar2);
        if ((uVar6 & 1) == 0) {
          *piVar7 = -1;
        }
        uVar5 = FUN_007d5db0(param_1,1);
        uVar6 = FUN_007d785c(param_2,uVar5,1);
        if ((uVar6 & 1) == 0) break;
        *(undefined1 *)(param_1 + 0xc) = 1;
        if ((*(int *)(param_1 + 8) < 0) ||
           (bVar1 = (uVar3 & 0xffffffff) <= uVar4, uVar4 = uVar4 + 1, bVar1)) goto LAB_0087d868;
      }
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      *(undefined1 *)(param_1 + 0xc) = 1;
    }
  }
LAB_0087d868:
  uVar5 = FUN_007d5db0(param_1,0x14);
  uVar3 = FUN_007d785c(param_2,uVar5,0x14);
  if ((uVar3 & 1) == 0) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
  }
  return;
}


// ===== 0087d8ac  FUN_0087d8ac =====

void FUN_0087d8ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar2 = param_2[5];
  uVar1 = param_2[4];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  return;
}


// ===== 0087d8c4  FUN_0087d8c4 =====

void FUN_0087d8c4(void)

{
  return;
}


// ===== 0087d8cc  FUN_0087d8cc =====

void FUN_0087d8cc(undefined8 param_1)

{
  ulong uVar1;
  undefined1 *local_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_0087b608(&local_40);
  uVar1 = (long)puStack_38 - (long)local_40;
  local_50 = (undefined1 *)0x0;
  if (uVar1 != 0) {
    local_50 = local_40;
  }
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  if ((uVar1 >> 0x1c & 0x1ffffffff) == 0) {
    local_48 = (undefined1 *)CONCAT44(0xaaaaaa01,(int)uVar1 * 8);
    FUN_0087d9a4(param_1,&local_50);
    if (local_40 != (undefined1 *)0x0) {
      if (puStack_38 + -1 < puStack_38 + -(long)local_40) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      puStack_38 = local_40;
      operator_delete(local_40);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../rtc_base/numerics/safe_conversions.h",0x24,
               "IsValueInRangeForNumericType<Dst>(value)",&DAT_001f5fa0);
}


// ===== 0087d9a4  FUN_0087d9a4 =====

void FUN_0087d9a4(int *param_1,long param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined1 uVar19;
  uint uVar20;
  ulong uVar21;
  uint uVar22;
  int local_78;
  
  cVar2 = FUN_007d5db0(param_2,8);
  FUN_007d6120(param_2,0x10);
  iVar3 = FUN_007d6508(param_2);
  iVar5 = 0;
  uVar4 = 1;
  switch(cVar2) {
  case ',':
  case 'S':
  case 'V':
  case 'd':
  case 'n':
  case 'v':
  case 'z':
  case -0x80:
  case -0x7a:
  case -0x76:
  case -0x75:
code_r0x0087da28:
    uVar4 = FUN_007d6508(param_2);
    if (uVar4 == 3) {
      iVar5 = FUN_007d60c4(param_2);
    }
    else {
      iVar5 = 0;
    }
    FUN_007d6508(param_2);
    FUN_007d6508(param_2);
    FUN_007d6120(param_2,1);
    iVar8 = FUN_007d60c4(param_2);
    if (iVar8 != 0) {
      uVar7 = 0;
      uVar9 = 0xc;
      if (uVar4 != 3) {
        uVar9 = 8;
      }
      do {
        iVar8 = FUN_007d60c4(param_2);
        if (iVar8 != 0) {
          uVar20 = 8;
          uVar22 = 8;
          iVar8 = 0x10;
          if (5 < uVar7) {
            iVar8 = 0x40;
          }
          do {
            if (uVar20 != 0) {
              iVar6 = FUN_007d6670(param_2);
              *(undefined1 *)(param_2 + 0xc) = 1;
              if ((iVar6 != (char)iVar6) || (*(int *)(param_2 + 8) < 0)) goto LAB_0087dd10;
              uVar20 = iVar6 + uVar22 & 0xff;
              if (uVar20 != 0) {
                uVar22 = uVar20;
              }
            }
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 != uVar9);
    }
    break;
  case '-':
  case '.':
  case '/':
  case '0':
  case '1':
  case '2':
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9':
  case ':':
  case ';':
  case '<':
  case '=':
  case '>':
  case '?':
  case '@':
  case 'A':
  case 'B':
  case 'C':
  case 'D':
  case 'E':
  case 'F':
  case 'G':
  case 'H':
  case 'I':
  case 'J':
  case 'K':
  case 'L':
  case 'M':
  case 'N':
  case 'O':
  case 'P':
  case 'Q':
  case 'R':
  case 'T':
  case 'U':
  case 'W':
  case 'X':
  case 'Y':
  case 'Z':
  case '[':
  case '\\':
  case ']':
  case '^':
  case '_':
  case '`':
  case 'a':
  case 'b':
  case 'c':
  case 'e':
  case 'f':
  case 'g':
  case 'h':
  case 'i':
  case 'j':
  case 'k':
  case 'l':
  case 'm':
  case 'o':
  case 'p':
  case 'q':
  case 'r':
  case 's':
  case 't':
  case 'u':
  case 'w':
  case 'x':
  case 'y':
  case '{':
  case '|':
  case '}':
  case '~':
  case '\x7f':
  case -0x7f:
  case -0x7e:
  case -0x7d:
  case -0x7c:
  case -0x7b:
  case -0x79:
  case -0x78:
  case -0x77:
    break;
  default:
    if (cVar2 == -0xc) goto code_r0x0087da28;
  }
  uVar7 = FUN_007d6508(param_2);
  *(undefined1 *)(param_2 + 0xc) = 1;
  if ((uVar7 < 0xd) && (-1 < *(int *)(param_2 + 8))) {
    iVar8 = FUN_007d6508(param_2);
    if (iVar8 == 1) {
      local_78 = FUN_007d60c4(param_2);
      FUN_007d6508(param_2);
      FUN_007d6508(param_2);
      uVar9 = FUN_007d6508(param_2);
      if (uVar9 != 0) {
        uVar21 = (ulong)uVar9;
        do {
          FUN_007d6508(param_2);
          *(undefined1 *)(param_2 + 0xc) = 1;
          if (*(int *)(param_2 + 8) < 0) goto LAB_0087dd10;
          uVar21 = uVar21 - 1;
        } while (uVar21 != 0);
      }
      iVar6 = 4;
    }
    else {
      if (iVar8 == 0) {
        uVar9 = FUN_007d6508(param_2);
        *(undefined1 *)(param_2 + 0xc) = 1;
        if ((0xc < uVar9) || (*(int *)(param_2 + 8) < 0)) goto LAB_0087dd10;
        iVar6 = uVar9 + 4;
      }
      else {
        iVar6 = 4;
      }
      local_78 = 0;
    }
    iVar10 = FUN_007d6508(param_2);
    FUN_007d6120(param_2,1);
    iVar11 = FUN_007d6508(param_2);
    iVar12 = FUN_007d6508(param_2);
    iVar13 = FUN_007d60c4(param_2);
    if (iVar13 == 0) {
      FUN_007d6120(param_2,1);
    }
    FUN_007d6120(param_2,1);
    iVar14 = FUN_007d60c4(param_2);
    if (iVar14 == 0) {
      iVar14 = 0;
      iVar15 = 0;
      iVar16 = 0;
      iVar17 = 0;
    }
    else {
      iVar14 = FUN_007d6508(param_2);
      iVar15 = FUN_007d6508(param_2);
      iVar16 = FUN_007d6508(param_2);
      iVar17 = FUN_007d6508(param_2);
    }
    iVar18 = FUN_007d60c4(param_2);
    *(undefined1 *)(param_2 + 0xc) = 1;
    if (-1 < *(int *)(param_2 + 8)) {
      iVar1 = iVar13 * -0x10 + 0x20;
      if ((uVar4 == 0) || (iVar5 != 0)) {
        iVar17 = iVar17 * (2 - iVar13);
        iVar16 = iVar16 * (2 - iVar13);
      }
      else {
        iVar14 = iVar14 << (uVar4 < 3);
        iVar15 = iVar15 << (ulong)(uVar4 < 3);
        if (uVar4 == 1) {
          iVar16 = iVar16 << 1;
          iVar17 = iVar17 << 1;
        }
      }
      param_1[6] = uVar7 + 4;
      param_1[0xb] = iVar3;
      *param_1 = (iVar11 * 0x10 - (iVar14 + iVar15)) + 0x10;
      param_1[1] = (iVar1 + iVar1 * iVar12) - (iVar16 + iVar17);
      param_1[2] = local_78;
      param_1[3] = uVar4;
      param_1[4] = iVar5;
      param_1[5] = iVar13;
      param_1[7] = iVar6;
      param_1[8] = iVar8;
      param_1[9] = iVar10;
      param_1[10] = iVar18;
      uVar19 = 1;
      goto LAB_0087dd18;
    }
  }
LAB_0087dd10:
  uVar19 = 0;
  *(undefined1 *)param_1 = 0;
LAB_0087dd18:
  *(undefined1 *)(param_1 + 0xc) = uVar19;
  return;
}


// ===== 0087dd9c  FUN_0087dd9c =====

void FUN_0087dd9c(void *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  void *pvVar4;
  
  memcpy(param_1,&DAT_00221dc0,0x810);
  memset(param_1,0,0x808);
  FUN_007dcfa0(param_1);
  FUN_007b53d4((long)param_1 + 0x7f0);
  uVar3 = *param_3;
  pvVar4 = *(void **)((long)param_1 + 0x7f0);
  *(undefined1 *)((long)param_1 + 0x808) = 1;
  *param_3 = 0;
  *(undefined8 *)((long)param_1 + 0x7f0) = uVar3;
  if ((pvVar4 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,(long)pvVar4 + 0x18), iVar1 == 1))
  {
    pvVar2 = *(void **)((long)pvVar4 + 0x10);
    *(undefined8 *)((long)pvVar4 + 0x10) = 0;
    if (pvVar2 != (void *)0x0) {
      operator_delete__(pvVar2);
    }
    operator_delete(pvVar4);
  }
  uVar3 = param_3[1];
  *(undefined8 *)((long)param_1 + 0x800) = param_3[2];
  *(undefined8 *)((long)param_1 + 0x7f8) = uVar3;
  param_3[1] = 0;
  param_3[2] = 0;
  return;
}


// ===== 0087de5c  FUN_0087de5c =====

void FUN_0087de5c(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0087de68  FUN_0087de68 =====

void FUN_0087de68(undefined1 *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  long lVar7;
  long lVar8;
  undefined1 *local_880;
  undefined1 *puStack_878;
  undefined1 *local_870;
  undefined1 auStack_868 [2032];
  undefined1 *local_78;
  undefined1 *local_70;
  long lStack_68;
  byte local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (*param_3 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = *(long *)(*param_3 + 0x10) + param_3[1];
  }
  lVar7 = param_3[2];
  memcpy(auStack_868,&DAT_002225d0,0x810);
  memset(auStack_868,0,0x808);
  FUN_007dcfa0(auStack_868);
  FUN_007b53d4(&local_78);
  lVar1 = 0;
  if (lVar7 != 0) {
    lVar1 = lVar8;
  }
  local_60 = 1;
  uVar4 = FUN_0087e070(lVar1,lVar7,auStack_868);
  if (uVar4 == 0) {
    *param_1 = 0;
    param_1[0x808] = 0;
  }
  else {
    lVar8 = param_3[2] - (ulong)uVar4;
    puStack_878 = &DAT_aaaaaaaaaaaaaaaa;
    local_880 = &DAT_aaaaaaaaaaaaaaaa;
    local_870 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_007b53e4(&local_880,param_3);
    puVar3 = local_78;
    local_78 = local_880;
    puStack_878 = puStack_878 + uVar4;
    local_870 = (undefined1 *)lVar8;
    if ((local_60 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                );
    }
    local_880 = (undefined1 *)0x0;
    if ((puVar3 != (undefined1 *)0x0) &&
       (iVar5 = FUN_00d0f7a0(0xffffffff,puVar3 + 0x18), iVar5 == 1)) {
      pvVar6 = *(void **)(puVar3 + 0x10);
      *(undefined8 *)(puVar3 + 0x10) = 0;
      if (pvVar6 != (void *)0x0) {
        operator_delete__(pvVar6);
      }
      operator_delete(puVar3);
    }
    *(undefined8 *)((ulong)&local_880 | 8) = 0;
    ((undefined8 *)((ulong)&local_880 | 8))[1] = 0;
    lStack_68 = (long)local_870;
    local_70 = puStack_878;
    FUN_007b5554(&local_880);
    *param_1 = 0;
    param_1[0x808] = 0;
    if (local_60 == 1) {
      if (param_1 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      FUN_007dd000(param_1,auStack_868);
      FUN_007b5434(param_1 + 0x7f0,&local_78);
      param_1[0x808] = 1;
    }
  }
  if (local_60 == 1) {
    FUN_007b5554(&local_78);
    FUN_007dd190(auStack_868);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0087e070  FUN_0087e070 =====

ulong FUN_0087e070(byte *param_1,long param_2,long param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ulong uVar5;
  undefined8 uVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
  byte *pbVar10;
  undefined1 uStack_31;
  
  if (param_2 == 0) {
    uVar5 = FUN_004249b0();
    if ((uVar5 & 1) != 0) {
      return 0;
    }
    pcVar7 = "Empty rtp payload.";
    uVar6 = 0x4f3;
  }
  else {
    *(undefined1 *)(param_3 + 0xa8) = 0;
    *(undefined4 *)(param_3 + 0xac) = 1;
    if ((ulong)*(byte *)(param_3 + 0x790) != 0xff) {
      (*(code *)(&PTR_FUN_00d3aef0)[*(byte *)(param_3 + 0x790)])(&uStack_31,param_3 + 0x128);
    }
    *(undefined1 *)(param_3 + 0x790) = 0xff;
    if ((undefined8 *)(param_3 + 0x128) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    uVar5 = 1;
    *(undefined8 *)(param_3 + 0x128) = 0;
    *(undefined8 *)(param_3 + 0x130) = 0;
    *(undefined4 *)(param_3 + 0x138) = 0;
    *(undefined1 *)(param_3 + 0x790) = 1;
    *(undefined4 *)(param_3 + 0x12a) = 0xffffffff;
    *(undefined1 *)(param_3 + 0x12e) = 0xff;
    *(undefined4 *)(param_3 + 0x130) = 0xffffffff;
    *(undefined1 *)(param_3 + 0x138) = 0;
    bVar4 = *param_1;
    *(byte *)(param_3 + 0x128) = (byte)((uint)(int)(char)bVar4 >> 5) & 1;
    bVar1 = *param_1;
    *(byte *)(param_3 + 0x138) = bVar1 >> 4 & 1;
    bVar2 = *param_1;
    *(uint *)(param_3 + 0x134) = bVar2 & 7;
    if ((char)bVar4 < 0) {
      if (param_2 == 1) {
        return 0;
      }
      bVar4 = param_1[1];
      pbVar10 = param_1 + 2;
      lVar8 = param_2 + -2;
      if ((char)bVar4 < '\0') {
        if (lVar8 == 0) {
          return 0;
        }
        bVar3 = *pbVar10;
        *(short *)(param_3 + 0x12a) = (short)(bVar3 & 0x7f);
        if ((char)*pbVar10 < '\0') {
          lVar8 = param_2 + -3;
          if (lVar8 == 0) {
            return 0;
          }
          uVar5 = 4;
          *(ushort *)(param_3 + 0x12a) = (ushort)param_1[3] | (ushort)((bVar3 & 0x7f) << 8);
          lVar9 = 3;
        }
        else {
          uVar5 = 3;
          lVar9 = 2;
        }
        lVar8 = lVar8 + -1;
        pbVar10 = param_1 + lVar9 + 1;
      }
      else {
        uVar5 = 2;
      }
      if ((bVar4 >> 6 & 1) != 0) {
        if (lVar8 == 0) {
          return 0;
        }
        uVar5 = (ulong)((int)uVar5 + 1);
        lVar8 = lVar8 + -1;
        *(ushort *)(param_3 + 300) = (ushort)*pbVar10;
        pbVar10 = pbVar10 + 1;
      }
      if ((bVar4 & 0x30) != 0) {
        if (lVar8 == 0) {
          return 0;
        }
        if ((bVar4 >> 5 & 1) != 0) {
          *(byte *)(param_3 + 0x12e) = *pbVar10 >> 6;
          *(byte *)(param_3 + 0x12f) = *pbVar10 >> 5 & 1;
        }
        if ((bVar4 >> 4 & 1) != 0) {
          *(uint *)(param_3 + 0x130) = *pbVar10 & 0x1f;
        }
        uVar5 = (ulong)((int)uVar5 + 1);
      }
    }
    bVar1 = (bVar2 & 7) == 0 & bVar1 >> 4;
    *(byte *)(param_3 + 0xa5) = bVar1;
    if ((int)param_2 != (int)uVar5) {
      if ((bVar1 != 0) && (param_1 = param_1 + uVar5, (*param_1 & 1) == 0)) {
        *(undefined4 *)(param_3 + 0x98) = 3;
        if ((int)param_2 - (int)uVar5 < 10) {
          return 0;
        }
        *(ushort *)(param_3 + 0x9c) = (ushort)param_1[6] | (ushort)((param_1[7] & 0x3f) << 8);
        *(ushort *)(param_3 + 0x9e) = (ushort)param_1[8] | (ushort)((param_1[9] & 0x3f) << 8);
        return uVar5;
      }
      *(undefined8 *)(param_3 + 0x98) = 4;
      return uVar5;
    }
    uVar5 = FUN_004022fc();
    if ((uVar5 & 1) != 0) {
      return 0;
    }
    pcVar7 = "Empty vp8 payload.";
    uVar6 = 0x5a2;
  }
  FUN_00623bb0(&DAT_001f4e98,"../../modules/rtp_rtcp/source/video_rtp_depacketizer_vp8.cc",uVar6,
               pcVar7);
  return 0;
}


// ===== 0087e2e4  FUN_0087e2e4 =====

void FUN_0087e2e4(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0087e2f0  FUN_0087e2f0 =====

void FUN_0087e2f0(undefined1 *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  int iVar4;
  void *pvVar5;
  long lVar6;
  undefined1 *local_880;
  undefined1 *puStack_878;
  undefined1 *local_870;
  undefined1 auStack_868 [2032];
  undefined1 *local_78;
  undefined1 *local_70;
  long lStack_68;
  byte local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  memcpy(auStack_868,&DAT_00222de0,0x810);
  memset(auStack_868,0,0x808);
  FUN_007dcfa0(auStack_868);
  FUN_007b53d4(&local_78);
  lVar6 = *param_3;
  local_60 = 1;
  if (lVar6 != 0) {
    lVar6 = *(long *)(lVar6 + 0x10) + param_3[1];
  }
  lVar1 = 0;
  if (param_3[2] != 0) {
    lVar1 = lVar6;
  }
  iVar4 = FUN_0087e4ec(lVar1,param_3[2],auStack_868);
  if (iVar4 == 0) {
    *param_1 = 0;
    param_1[0x808] = 0;
  }
  else {
    lVar6 = param_3[2] - (long)iVar4;
    puStack_878 = &DAT_aaaaaaaaaaaaaaaa;
    local_880 = &DAT_aaaaaaaaaaaaaaaa;
    local_870 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_007b53e4(&local_880,param_3);
    puVar3 = local_78;
    local_78 = local_880;
    puStack_878 = puStack_878 + iVar4;
    local_870 = (undefined1 *)lVar6;
    if ((local_60 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                );
    }
    local_880 = (undefined1 *)0x0;
    if ((puVar3 != (undefined1 *)0x0) &&
       (iVar4 = FUN_00d0f7a0(0xffffffff,puVar3 + 0x18), iVar4 == 1)) {
      pvVar5 = *(void **)(puVar3 + 0x10);
      *(undefined8 *)(puVar3 + 0x10) = 0;
      if (pvVar5 != (void *)0x0) {
        operator_delete__(pvVar5);
      }
      operator_delete(puVar3);
    }
    *(undefined8 *)((ulong)&local_880 | 8) = 0;
    ((undefined8 *)((ulong)&local_880 | 8))[1] = 0;
    lStack_68 = (long)local_870;
    local_70 = puStack_878;
    FUN_007b5554(&local_880);
    *param_1 = 0;
    param_1[0x808] = 0;
    if (local_60 == 1) {
      if (param_1 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      FUN_007dd000(param_1,auStack_868);
      FUN_007b5434(param_1 + 0x7f0,&local_78);
      param_1[0x808] = 1;
    }
  }
  if (local_60 == 1) {
    FUN_007b5554(&local_78);
    FUN_007dd190(auStack_868);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0087e4ec  FUN_0087e4ec =====

int FUN_0087e4ec(undefined8 param_1,ulong param_2,long param_3)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  code *pcVar5;
  byte bVar6;
  undefined1 uVar7;
  undefined2 uVar8;
  ushort uVar9;
  undefined2 uVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined1 *puVar17;
  long lVar18;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 uStack_61;
  
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = param_1;
  if ((param_2 >> 0x1c & 0x1ffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../rtc_base/numerics/safe_conversions.h",0x24,
                 "IsValueInRangeForNumericType<Dst>(value)",&DAT_001f5fa0);
  }
  local_70 = (undefined1 *)CONCAT35(0xaaaaaa,CONCAT14(1,(int)(param_2 << 3)));
  uVar11 = FUN_007d5db0(&local_78,8);
  *(undefined4 *)(param_3 + 0x9c) = 0;
  *(undefined1 *)(param_3 + 0xa8) = 0;
  *(undefined4 *)(param_3 + 0xac) = 2;
  if ((ulong)*(byte *)(param_3 + 0x790) != 0xff) {
    (*(code *)(&PTR_FUN_00d3af48)[*(byte *)(param_3 + 0x790)])(&uStack_61,param_3 + 0x128);
  }
  *(undefined1 *)(param_3 + 0x790) = 0xff;
  if (param_3 == -0x128) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  bVar3 = (byte)(uVar11 >> 3) & 1;
  bVar4 = (byte)(uVar11 >> 2) & 1;
  memset((void *)(param_3 + 0x138),0,0x658);
  *(undefined1 *)(param_3 + 0x790) = 2;
  *(undefined2 *)(param_3 + 0x132) = 0xffff;
  *(char *)(param_3 + 0x128) = (char)((uVar11 & 0x40) >> 6);
  *(undefined1 *)(param_3 + 0x138) = 0xff;
  *(undefined4 *)(param_3 + 0x12e) = 0x7fffffff;
  *(undefined4 *)(param_3 + 0x134) = 0xffff;
  *(undefined8 *)(param_3 + 0x148) = 1;
  *(undefined1 *)(param_3 + 0x788) = 1;
  *(byte *)(param_3 + 0x129) = (byte)(uVar11 >> 4) & 1;
  *(byte *)(param_3 + 0x12a) = bVar3;
  *(byte *)(param_3 + 299) = bVar4;
  *(char *)(param_3 + 300) = (char)((uVar11 & 2) >> 1);
  *(byte *)(param_3 + 0x12d) = (byte)uVar11 & 1;
  if ((char)(byte)uVar11 < '\0') {
    iVar12 = FUN_007d60c4(&local_78);
    uVar15 = 7;
    if (iVar12 != 0) {
      uVar15 = 0xf;
    }
    uVar10 = 0x7f;
    if (iVar12 != 0) {
      uVar10 = 0x7fff;
    }
    uVar8 = FUN_007d5db0(&local_78,uVar15);
    *(undefined2 *)(param_3 + 0x130) = uVar10;
    *(undefined2 *)(param_3 + 0x12e) = uVar8;
  }
  if ((uVar11 >> 5 & 1) != 0) {
    uVar7 = FUN_007d5db0(&local_78,3);
    *(undefined1 *)(param_3 + 0x134) = uVar7;
    iVar12 = FUN_007d60c4(&local_78);
    *(bool *)(param_3 + 0x136) = iVar12 != 0;
    uVar7 = FUN_007d5db0(&local_78,3);
    *(undefined1 *)(param_3 + 0x135) = uVar7;
    iVar12 = FUN_007d60c4(&local_78);
    *(bool *)(param_3 + 0x137) = iVar12 != 0;
    if (*(byte *)(param_3 + 0x135) < 5) {
      if ((*(byte *)(param_3 + 0x129) & 1) == 0) {
        uVar9 = FUN_007d5db0(&local_78,8);
        *(ushort *)(param_3 + 0x132) = uVar9 & 0xff;
      }
    }
    else {
      local_70 = (undefined1 *)CONCAT44(local_70._4_4_,0xffffffff);
    }
  }
  if (((uVar11 ^ 0xffffffff) & 0x50) == 0) {
    if (*(short *)(param_3 + 0x12e) != -1) {
      *(undefined1 *)(param_3 + 0x139) = 0;
      do {
        bVar6 = FUN_007d5db0(&local_78,7);
        iVar12 = FUN_007d60c4(&local_78);
        bVar2 = *(byte *)(param_3 + 0x139);
        if (2 < bVar2) goto LAB_0087ea40;
        uVar9 = *(ushort *)(param_3 + 0x12e);
        *(byte *)(param_3 + 0x13a + (ulong)(uint)bVar2) = bVar6;
        if (uVar9 < bVar6) {
          uVar9 = uVar9 + *(short *)(param_3 + 0x130) + 1;
        }
        iVar1 = bVar2 + 1;
        *(ushort *)(param_3 + 0x13e + (ulong)(uint)bVar2 * 2) = uVar9 - bVar6;
        *(char *)(param_3 + 0x139) = (char)iVar1;
        if (iVar12 == 0) goto LAB_0087e774;
      } while (iVar1 != 3);
    }
    local_70 = (undefined1 *)CONCAT44(local_70._4_4_,0xffffffff);
  }
LAB_0087e774:
  if ((uVar11 & 2) != 0) {
    lVar13 = FUN_007d5db0(&local_78,3);
    *(long *)(param_3 + 0x148) = lVar13 + 1;
    iVar12 = FUN_007d60c4(&local_78);
    *(bool *)(param_3 + 0x158) = iVar12 != 0;
    iVar12 = FUN_007d60c4(&local_78);
    FUN_007d6120(&local_78,3);
    *(undefined8 *)(param_3 + 0x180) = 0;
    if ((*(char *)(param_3 + 0x158) == '\x01') && (*(long *)(param_3 + 0x148) != 0)) {
      uVar10 = FUN_007d5db0(&local_78,0x10);
      *(undefined2 *)(param_3 + 0x15a) = uVar10;
      uVar10 = FUN_007d5db0(&local_78,0x10);
      *(undefined2 *)(param_3 + 0x16a) = uVar10;
      if (1 < *(ulong *)(param_3 + 0x148)) {
        uVar10 = FUN_007d5db0(&local_78,0x10);
        *(undefined2 *)(param_3 + 0x15c) = uVar10;
        uVar10 = FUN_007d5db0(&local_78,0x10);
        *(undefined2 *)(param_3 + 0x16c) = uVar10;
        if (2 < *(ulong *)(param_3 + 0x148)) {
          uVar10 = FUN_007d5db0(&local_78,0x10);
          *(undefined2 *)(param_3 + 0x15e) = uVar10;
          uVar10 = FUN_007d5db0(&local_78,0x10);
          *(undefined2 *)(param_3 + 0x16e) = uVar10;
          if (3 < *(ulong *)(param_3 + 0x148)) {
            uVar10 = FUN_007d5db0(&local_78,0x10);
            *(undefined2 *)(param_3 + 0x160) = uVar10;
            uVar10 = FUN_007d5db0(&local_78,0x10);
            *(undefined2 *)(param_3 + 0x170) = uVar10;
            if (4 < *(ulong *)(param_3 + 0x148)) {
              uVar10 = FUN_007d5db0(&local_78,0x10);
              *(undefined2 *)(param_3 + 0x162) = uVar10;
              uVar10 = FUN_007d5db0(&local_78,0x10);
              *(undefined2 *)(param_3 + 0x172) = uVar10;
              if (5 < *(ulong *)(param_3 + 0x148)) {
                uVar10 = FUN_007d5db0(&local_78,0x10);
                *(undefined2 *)(param_3 + 0x164) = uVar10;
                uVar10 = FUN_007d5db0(&local_78,0x10);
                *(undefined2 *)(param_3 + 0x174) = uVar10;
                if (6 < *(ulong *)(param_3 + 0x148)) {
                  uVar10 = FUN_007d5db0(&local_78,0x10);
                  *(undefined2 *)(param_3 + 0x166) = uVar10;
                  uVar10 = FUN_007d5db0(&local_78,0x10);
                  *(undefined2 *)(param_3 + 0x176) = uVar10;
                  if (7 < *(ulong *)(param_3 + 0x148)) {
                    uVar16 = 0x10;
                    uVar10 = FUN_007d5db0(&local_78,0x10);
                    *(undefined2 *)(param_3 + 0x168) = uVar10;
                    uVar10 = FUN_007d5db0(&local_78,0x10);
                    *(undefined2 *)(param_3 + 0x178) = uVar10;
                    if (8 < *(ulong *)(param_3 + 0x148)) {
LAB_0087ea34:
                      FUN_007d5db0(&local_78,uVar16);
LAB_0087ea40:
                    /* WARNING: Does not return */
                      pcVar5 = (code *)SoftwareBreakpoint(0x5512,0x87ea44);
                      (*pcVar5)();
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    if (iVar12 == 0) {
      uVar14 = *(ulong *)(param_3 + 0x180);
    }
    else {
      uVar14 = FUN_007d5db0(&local_78,8);
      uVar14 = uVar14 & 0xff;
      *(ulong *)(param_3 + 0x180) = uVar14;
    }
    if (uVar14 != 0) {
      lVar13 = param_3 + 0x287;
      puVar17 = (undefined1 *)(param_3 + 0x487);
      lVar18 = 0x386;
      do {
        uVar7 = FUN_007d5db0(&local_78,3);
        if (lVar18 == 0x485) goto LAB_0087ea40;
        *(undefined1 *)(lVar13 + -0xff) = uVar7;
        iVar12 = FUN_007d60c4(&local_78);
        *(bool *)lVar13 = iVar12 != 0;
        uVar7 = FUN_007d5db0(&local_78,2);
        *(undefined1 *)(lVar13 + 0xff) = uVar7;
        FUN_007d6120(&local_78,2);
        if (*(char *)(lVar13 + 0xff) != '\0') {
          uVar7 = FUN_007d5db0(&local_78,8);
          puVar17[-2] = uVar7;
          if (1 < *(byte *)(lVar13 + 0xff)) {
            uVar7 = FUN_007d5db0(&local_78,8);
            puVar17[-1] = uVar7;
            if (2 < *(byte *)(lVar13 + 0xff)) {
              uVar16 = 8;
              uVar7 = FUN_007d5db0(&local_78,8);
              *puVar17 = uVar7;
              if (3 < *(byte *)(lVar13 + 0xff)) goto LAB_0087ea34;
            }
          }
        }
        uVar14 = lVar18 - 0x385;
        lVar18 = lVar18 + 1;
        lVar13 = lVar13 + 1;
        puVar17 = puVar17 + 3;
      } while (uVar14 < *(ulong *)(param_3 + 0x180));
    }
    if (*(char *)(param_3 + 0x158) == '\x01') {
      *(undefined2 *)(param_3 + 0x9c) = *(undefined2 *)(param_3 + 0x15a);
      *(undefined2 *)(param_3 + 0x9e) = *(undefined2 *)(param_3 + 0x16a);
    }
  }
  *(byte *)(param_3 + 0xa5) = bVar3;
  iVar12 = (int)param_2 - ((uint)local_70 >> 3);
  uVar15 = 3;
  if ((uVar11 & 0x40) != 0 || (*(byte *)(param_3 + 0x137) & 1) != 0) {
    uVar15 = 4;
  }
  *(undefined4 *)(param_3 + 0x98) = uVar15;
  if ((int)(uint)local_70 < 1) {
    iVar12 = 0;
  }
  *(byte *)(param_3 + 0xa6) = bVar4;
  return iVar12;
}


// ===== 0087eaf8  FUN_0087eaf8 =====

void FUN_0087eaf8(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0087eb04  FUN_0087eb04 =====

void FUN_0087eb04(undefined1 *param_1,undefined8 param_2,undefined8 *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  long lVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  void *pvVar11;
  byte **ppbVar12;
  long *plVar13;
  undefined8 uVar14;
  char *pcVar15;
  undefined4 uVar16;
  byte *pbVar17;
  byte *pbVar18;
  ulong uVar19;
  undefined1 *puVar20;
  byte *pbVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  byte *local_9a0;
  long local_998;
  ulong local_990;
  byte *local_988;
  undefined1 *local_980;
  ulong uStack_978;
  undefined1 *local_970;
  undefined1 *puStack_968;
  undefined1 *puStack_960;
  undefined1 *puStack_958;
  undefined1 *local_950;
  undefined1 *puStack_948;
  undefined1 *puStack_940;
  undefined1 *puStack_938;
  undefined1 *local_930;
  undefined1 *puStack_928;
  undefined1 *local_920;
  undefined1 *local_918;
  undefined1 *local_910;
  undefined1 *puStack_908;
  undefined1 *local_900;
  undefined1 *local_8f8;
  undefined1 *local_8f0;
  undefined1 *puStack_8e8;
  undefined1 *puStack_8e0;
  undefined1 *puStack_8d8;
  undefined1 *local_8d0;
  undefined1 *local_8c0;
  undefined1 *puStack_8b8;
  undefined1 *local_8b0;
  long *local_8a8;
  long *local_8a0;
  long *local_898;
  byte *local_890;
  undefined1 *puStack_888;
  undefined1 *local_880;
  undefined4 local_7f8;
  undefined4 local_7f4;
  undefined1 local_7eb;
  undefined4 local_7e4;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  byte local_88;
  long local_78;
  
  lVar5 = tpidr_el0;
  local_78 = *(long *)(lVar5 + 0x28);
  if (param_3[2] == 0) {
    uVar10 = FUN_004249b0();
    if ((uVar10 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../modules/rtp_rtcp/source/video_rtp_depacketizer_h265.cc",
                   0x81b,"Empty payload.");
    }
  }
  else {
    pbVar17 = (byte *)*param_3;
    if (pbVar17 != (byte *)0x0) {
      pbVar17 = (byte *)(*(long *)(pbVar17 + 0x10) + param_3[1]);
    }
    bVar1 = *pbVar17 >> 1 & 0x3f;
    if (bVar1 != 0x32) {
      if (bVar1 == 0x31) {
        FUN_007b5434(&local_988);
        if (uStack_978 < 3) {
          uVar10 = FUN_004249b0();
          if ((uVar10 & 1) == 0) {
            FUN_00623bb0(&DAT_001f4e98,
                         "../../modules/rtp_rtcp/source/video_rtp_depacketizer_h265.cc",0x61b,
                         "FU NAL units truncated.");
          }
          *param_1 = 0;
          ppbVar12 = &local_988;
          param_1[0x808] = 0;
        }
        else {
          memcpy(param_1,&DAT_002235f8,0x810);
          memset(param_1,0,0x808);
          FUN_007dcfa0(param_1);
          ppbVar12 = (byte **)(param_1 + 0x7f0);
          FUN_007b53d4(param_1 + 0x7f0);
          pbVar17 = (byte *)0x1;
          param_1[0x808] = 1;
          if (local_988 == (byte *)0x0) {
            pbVar18 = (byte *)0x0;
            pbVar21 = (byte *)0x2;
          }
          else {
            pbVar18 = local_980 + *(long *)(local_988 + 0x10);
            pbVar17 = pbVar18 + 1;
            pbVar21 = pbVar18 + 2;
          }
          bVar1 = *pbVar21;
          if ((char)pbVar18[2] < '\0') {
            uVar9 = bVar1 & 0x3f;
            bVar2 = *pbVar17;
            bVar3 = *pbVar18;
            if (uVar9 < 0x20) {
              pbVar17 = local_988;
              if (local_988 != (byte *)0x0) {
                pbVar17 = local_980 + *(long *)(local_988 + 0x10);
              }
              pbVar21 = (byte *)0x0;
              if (uStack_978 - 3 != 0) {
                pbVar21 = pbVar17 + 3;
              }
              uVar8 = FUN_00882ff4(pbVar21,uStack_978 - 3);
              bVar6 = ((uVar8 ^ 0xffffffff) & 0x101) == 0;
            }
            else {
              bVar6 = false;
            }
            puStack_888 = &DAT_aaaaaaaaaaaaaaaa;
            local_890 = &DAT_aaaaaaaaaaaaaaaa;
            local_880 = &DAT_aaaaaaaaaaaaaaaa;
            FUN_007b53e4(&local_890,&local_988);
            pbVar17 = local_988;
            puStack_888 = puStack_888 + 1;
            local_988 = local_890;
            local_890 = (byte *)0x0;
            local_880 = (undefined1 *)(uStack_978 - 1);
            if ((pbVar17 != (byte *)0x0) &&
               (iVar7 = FUN_00d0f7a0(0xffffffff,pbVar17 + 0x18), iVar7 == 1)) {
              pvVar11 = *(void **)(pbVar17 + 0x10);
              pbVar17[0x10] = 0;
              pbVar17[0x11] = 0;
              pbVar17[0x12] = 0;
              pbVar17[0x13] = 0;
              pbVar17[0x14] = 0;
              pbVar17[0x15] = 0;
              pbVar17[0x16] = 0;
              pbVar17[0x17] = 0;
              if (pvVar11 != (void *)0x0) {
                operator_delete__(pvVar11);
              }
              operator_delete(pbVar17);
            }
            *(undefined8 *)((ulong)&local_890 | 8) = 0;
            ((undefined8 *)((ulong)&local_890 | 8))[1] = 0;
            uStack_978 = (ulong)local_880;
            local_980 = puStack_888;
            FUN_007b5554(&local_890);
            pbVar17 = local_988;
            if (local_988 != (byte *)0x0) {
              FUN_007b5788(&local_988,*(long *)(local_988 + 8) - (long)local_980);
              pbVar17 = local_980 + *(long *)(local_988 + 0x10);
            }
            *pbVar17 = bVar3 & 0x81 | (byte)(uVar9 << 1);
            pbVar17 = local_988;
            if (local_988 != (byte *)0x0) {
              FUN_007b5788(&local_988,*(long *)(local_988 + 8) - (long)local_980);
              pbVar17 = local_980 + *(long *)(local_988 + 0x10);
            }
            pbVar17[1] = bVar2;
            local_880 = &DAT_aaaaaaaaaaaaaaaa;
            puStack_888 = &DAT_aaaaaaaaaaaaaaaa;
            local_890 = &DAT_aaaaaaaaaaaaaaaa;
            FUN_007b53d4(&local_890);
            FUN_00877fc4(&local_890,&DAT_002235f0,4);
            if (local_988 == (byte *)0x0) {
              puVar20 = (undefined1 *)0x0;
            }
            else {
              puVar20 = local_980 + *(long *)(local_988 + 0x10);
            }
            FUN_00877fc4(&local_890,puVar20,uStack_978);
            pbVar17 = local_890;
            if ((param_1[0x808] & 1) == 0) goto LAB_0087f644;
            if (&local_890 != ppbVar12) {
              if (local_890 != (byte *)0x0) {
                FUN_00d0f740(1,local_890 + 0x18);
              }
              pbVar21 = *ppbVar12;
              if ((pbVar21 != (byte *)0x0) &&
                 (iVar7 = FUN_00d0f7a0(0xffffffff,pbVar21 + 0x18), iVar7 == 1)) {
                pvVar11 = *(void **)(pbVar21 + 0x10);
                pbVar21[0x10] = 0;
                pbVar21[0x11] = 0;
                pbVar21[0x12] = 0;
                pbVar21[0x13] = 0;
                pbVar21[0x14] = 0;
                pbVar21[0x15] = 0;
                pbVar21[0x16] = 0;
                pbVar21[0x17] = 0;
                if (pvVar11 != (void *)0x0) {
                  operator_delete__(pvVar11);
                }
                operator_delete(pbVar21);
              }
              *(byte **)(param_1 + 0x7f0) = pbVar17;
              *(undefined1 **)(param_1 + 0x800) = local_880;
              *(undefined1 **)(param_1 + 0x7f8) = puStack_888;
            }
            FUN_007b5554(&local_890);
          }
          else {
            puVar20 = (undefined1 *)(uStack_978 - 3);
            puStack_888 = &DAT_aaaaaaaaaaaaaaaa;
            local_890 = &DAT_aaaaaaaaaaaaaaaa;
            local_880 = &DAT_aaaaaaaaaaaaaaaa;
            FUN_007b53e4(&local_890,&local_988);
            pbVar17 = local_890;
            puStack_888 = puStack_888 + 3;
            local_880 = puVar20;
            if ((param_1[0x808] & 1) == 0) goto LAB_0087f644;
            pbVar21 = *ppbVar12;
            local_890 = (byte *)0x0;
            *ppbVar12 = pbVar17;
            if ((pbVar21 != (byte *)0x0) &&
               (iVar7 = FUN_00d0f7a0(0xffffffff,pbVar21 + 0x18), iVar7 == 1)) {
              pvVar11 = *(void **)(pbVar21 + 0x10);
              pbVar21[0x10] = 0;
              pbVar21[0x11] = 0;
              pbVar21[0x12] = 0;
              pbVar21[0x13] = 0;
              pbVar21[0x14] = 0;
              pbVar21[0x15] = 0;
              pbVar21[0x16] = 0;
              pbVar21[0x17] = 0;
              if (pvVar11 != (void *)0x0) {
                operator_delete__(pvVar11);
              }
              operator_delete(pbVar21);
            }
            *(undefined8 *)((ulong)&local_890 | 8) = 0;
            ((undefined8 *)((ulong)&local_890 | 8))[1] = 0;
            *(undefined1 **)(param_1 + 0x800) = local_880;
            *(undefined1 **)(param_1 + 0x7f8) = puStack_888;
            FUN_007b5554(&local_890);
            bVar6 = false;
          }
          if ((bVar1 & 0x38) == 0x10) {
            if ((param_1[0x808] & 1) == 0) goto LAB_0087f644;
            uVar16 = 3;
          }
          else {
            if ((param_1[0x808] & 1) == 0) goto LAB_0087f644;
            uVar16 = 4;
          }
          *(undefined4 *)(param_1 + 0x98) = uVar16;
          *(undefined4 *)(param_1 + 0x9c) = 0;
          ppbVar12 = &local_988;
          *(undefined4 *)(param_1 + 0xac) = 5;
          param_1[0xa5] = bVar6;
        }
      }
      else {
        FUN_007b5434(&local_9a0);
        if (local_990 < 2) {
          uVar10 = FUN_004249b0();
          if ((uVar10 & 1) == 0) {
            FUN_00623bb0(&DAT_001f4e98,
                         "../../modules/rtp_rtcp/source/video_rtp_depacketizer_h265.cc",0x21b,
                         "RTP payload truncated.");
          }
          *param_1 = 0;
          param_1[0x808] = 0;
        }
        else {
          if (local_9a0 == (byte *)0x0) {
            pbVar17 = (byte *)0x0;
          }
          else {
            pbVar17 = (byte *)(*(long *)(local_9a0 + 0x10) + local_998);
          }
          memcpy(&local_890,&DAT_002235f8,0x810);
          memset(&local_890,0,0x808);
          FUN_007dcfa0(&local_890);
          FUN_007b53d4(&local_a0);
          uVar10 = local_990;
          local_7f4 = 0;
          local_88 = 1;
          local_7e4 = 5;
          local_7eb = 0;
          bVar1 = *pbVar17;
          local_8a8 = (long *)0x0;
          local_8a0 = (long *)0x0;
          local_898 = (long *)0x0;
          local_8b0 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_8b8 = &DAT_aaaaaaaaaaaaaaaa;
          local_8c0 = &DAT_aaaaaaaaaaaaaaaa;
          FUN_007b53d4(&local_8c0);
          if ((bVar1 & 0x7e) == 0x60) {
            if (local_990 < 5) {
              uVar10 = FUN_004249b0();
              if ((uVar10 & 1) == 0) {
                pcVar15 = "Aggregated packet header truncated.";
                uVar14 = 0x2b3;
LAB_0087f294:
                FUN_00623bb0(&DAT_001f4e98,
                             "../../modules/rtp_rtcp/source/video_rtp_depacketizer_h265.cc",uVar14,
                             pcVar15);
              }
            }
            else {
              uVar10 = uVar10 - 2;
              if (1 < uVar10) {
                lVar24 = 0;
                pbVar21 = pbVar17;
                do {
                  uVar4 = *(ushort *)(pbVar21 + 2);
                  uVar23 = (ulong)((uint)(uVar4 >> 8) | (uVar4 & 0xff00ff) << 8);
                  uVar19 = uVar10 - 2;
                  uVar10 = uVar19 - uVar23;
                  if (uVar19 < uVar23) goto LAB_0087f270;
                  local_970 = (undefined1 *)(lVar24 + 4);
                  if (local_8a0 < local_898) {
                    if (local_8a0 == (long *)0x0) goto LAB_0087f66c;
                    plVar13 = local_8a0 + 1;
                    *local_8a0 = (long)local_970;
                  }
                  else {
                    plVar13 = (long *)FUN_0087f6b0(&local_8a8,&local_970);
                  }
                  pbVar21 = (byte *)((long)(pbVar21 + 2) + uVar23);
                  lVar24 = lVar24 + uVar23 + 2;
                  local_8a0 = plVar13;
                } while (1 < uVar10);
              }
              if (uVar10 == 0) goto LAB_0087eec0;
LAB_0087f270:
              uVar10 = FUN_004249b0();
              if ((uVar10 & 1) == 0) {
                pcVar15 = "Aggregated packet with incorrect NALU packet lengths.";
                uVar14 = 0x2db;
                goto LAB_0087f294;
              }
            }
            *param_1 = 0;
LAB_0087f29c:
            param_1[0x808] = 0;
          }
          else {
            local_970 = (undefined1 *)0x0;
            if (local_8a0 < local_898) {
              if (local_8a0 == (long *)0x0) goto LAB_0087f66c;
              *local_8a0 = 0;
              local_8a0 = local_8a0 + 1;
            }
            else {
              local_8a0 = (long *)FUN_0087f6b0(&local_8a8,&local_970);
            }
LAB_0087eec0:
            if ((local_88 & 1) == 0) {
LAB_0087f644:
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                        );
            }
            local_7f8 = 4;
            local_970 = (undefined1 *)(local_990 + 2);
            if (local_8a0 < local_898) {
              if (local_8a0 == (long *)0x0) goto LAB_0087f66c;
              plVar13 = local_8a0 + 1;
              *local_8a0 = (long)local_970;
            }
            else {
              plVar13 = (long *)FUN_0087f6b0(&local_8a8,&local_970);
            }
            local_8a0 = plVar13;
            if ((long)plVar13 - (long)local_8a8 != 8) {
              uVar19 = (long)plVar13 - (long)local_8a8 >> 3;
              uVar10 = 0;
              do {
                if ((uVar19 <= uVar10) || (uVar23 = uVar10 + 1, uVar19 <= uVar23)) {
                    /* WARNING: Subroutine does not return */
                  std::__Cr::__libcpp_verbose_abort
                            ("%s",
                             "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                            );
                }
                lVar22 = local_8a8[uVar10];
                lVar24 = local_8a8[uVar23] + -2;
                if ((ulong)(lVar24 - lVar22) < 2) {
                  uVar10 = FUN_004249b0();
                  if ((uVar10 & 1) == 0) {
                    pcVar15 = "Aggregated packet too short";
                    uVar14 = 0x373;
LAB_0087f604:
                    FUN_00623bb0(&DAT_001f4e98,
                                 "../../modules/rtp_rtcp/source/video_rtp_depacketizer_h265.cc",
                                 uVar14,pcVar15);
                  }
LAB_0087f608:
                  *param_1 = 0;
                  goto LAB_0087f29c;
                }
                FUN_00877fc4(&local_8c0,&DAT_002235f0,4);
                FUN_00877fc4(&local_8c0,pbVar17 + lVar22,lVar24 - lVar22);
                bVar1 = pbVar17[lVar22];
                lVar24 = lVar24 - (lVar22 + 2);
                uVar9 = bVar1 >> 1 & 0x3f;
                pbVar21 = (byte *)0x0;
                if (lVar24 != 0) {
                  pbVar21 = pbVar17 + lVar22 + 2;
                }
                if (uVar9 - 0x10 < 6) {
                  if ((local_88 & 1) == 0) goto LAB_0087f644;
                  local_7f8 = 3;
                }
                else if (uVar9 == 0x21) {
                  puStack_968 = &DAT_aaaaaaaaaaaaaaaa;
                  local_970 = &DAT_aaaaaaaaaaaaaaaa;
                  puStack_958 = &DAT_aaaaaaaaaaaaaaaa;
                  puStack_960 = &DAT_aaaaaaaaaaaaaaaa;
                  puStack_948 = &DAT_aaaaaaaaaaaaaaaa;
                  local_950 = &DAT_aaaaaaaaaaaaaaaa;
                  puStack_938 = &DAT_aaaaaaaaaaaaaaaa;
                  puStack_940 = &DAT_aaaaaaaaaaaaaaaa;
                  puStack_928 = &DAT_aaaaaaaaaaaaaaaa;
                  local_930 = &DAT_aaaaaaaaaaaaaaaa;
                  local_918 = &DAT_aaaaaaaaaaaaaaaa;
                  local_920 = &DAT_aaaaaaaaaaaaaaaa;
                  puStack_908 = &DAT_aaaaaaaaaaaaaaaa;
                  local_910 = &DAT_aaaaaaaaaaaaaaaa;
                  local_8f8 = &DAT_aaaaaaaaaaaaaaaa;
                  local_900 = &DAT_aaaaaaaaaaaaaaaa;
                  puStack_8e8 = &DAT_aaaaaaaaaaaaaaaa;
                  local_8f0 = &DAT_aaaaaaaaaaaaaaaa;
                  puStack_8d8 = &DAT_aaaaaaaaaaaaaaaa;
                  puStack_8e0 = &DAT_aaaaaaaaaaaaaaaa;
                  local_8d0 = &DAT_aaaaaaaaaaaaaaaa;
                  FUN_008854a8(&local_970,pbVar21,lVar24);
                  if (((ulong)local_8d0 & 1) == 0) {
                    uVar10 = FUN_004022fc();
                    if ((uVar10 & 1) == 0) {
                      FUN_00623bb0(&DAT_001f4e98,
                                   "../../modules/rtp_rtcp/source/video_rtp_depacketizer_h265.cc",
                                   0x492,"Failed to parse SPS from SPS slice.");
                    }
                  }
                  else {
                    if ((local_88 & 1) == 0) goto LAB_0087f644;
                    local_7f4 = CONCAT22((short)puStack_8e8,(short)((ulong)local_8f0 >> 0x20));
                  }
                  if (((ulong)local_8d0 & 1) != 0) {
                    if (puStack_908 != (undefined1 *)0x0) {
                      uVar10 = (ulong)(((long)puStack_908 - (long)local_900 << 0x3e) -
                                      ((long)puStack_908 - (long)local_900)) >> 2;
                      if ((ulong)(local_900 + (-4 - ((long)local_900 << 0x3e))) >> 2 <= uVar10) {
                        uVar10 = (ulong)(local_900 + (-4 - ((long)local_900 << 0x3e))) >> 2;
                      }
                      puVar20 = local_900;
                      if ((1 < uVar10) &&
                         ((((int)puStack_908 - (int)local_900 | -(int)local_900) & 3U) == 0)) {
                        uVar10 = uVar10 & 0x3ffffffffffffffe;
                        puVar20 = local_900 + uVar10 * -4;
                        do {
                          uVar10 = uVar10 - 2;
                        } while (uVar10 != 0);
                      }
                      while (puVar20 != puStack_908) {
                        puVar20 = puVar20 + -4;
                        if (puVar20 == (undefined1 *)0x0) goto LAB_0087f314;
                      }
                      local_900 = puStack_908;
                      operator_delete(puStack_908);
                    }
                    if (puStack_928 != (undefined1 *)0x0) {
                      uVar10 = (ulong)(((long)puStack_928 - (long)local_920) * 0x3d08e5500fd08e55)
                               >> 2;
                      uVar19 = (long)local_920 * -0x3d08e5500fd08e55 - 4U >> 2;
                      if (uVar19 <= uVar10) {
                        uVar10 = uVar19;
                      }
                      puVar20 = local_920;
                      if ((1 < uVar10) &&
                         ((((int)puStack_928 - (int)local_920 | -(int)local_920) & 3U) == 0)) {
                        uVar10 = uVar10 & 0x3ffffffffffffffe;
                        puVar20 = local_920 + uVar10 * -0x40c;
                        do {
                          uVar10 = uVar10 - 2;
                        } while (uVar10 != 0);
                      }
                      while (puVar20 != puStack_928) {
                        puVar20 = puVar20 + -0x40c;
                        if (puVar20 == (undefined1 *)0x0) goto LAB_0087f314;
                      }
                      local_920 = puStack_928;
                      operator_delete(puStack_928);
                    }
                  }
                }
                else if (uVar9 - 0x30 < 3) {
                  uVar10 = FUN_004022fc();
                  if ((uVar10 & 1) == 0) {
                    pcVar15 = "Unexpected AP, FU or PACI received.";
                    uVar14 = 0x542;
                    goto LAB_0087f604;
                  }
                  goto LAB_0087f608;
                }
                if ((((bVar1 & 0x78) == 0x40) || (uVar9 == 0x27)) ||
                   ((uVar9 < 0x20 &&
                    (uVar9 = FUN_00882ff4(pbVar21,lVar24), ((uVar9 ^ 0xffffffff) & 0x101) == 0)))) {
                  if ((local_88 & 1) == 0) goto LAB_0087f644;
                  local_7eb = 1;
                }
                uVar19 = (long)local_8a0 - (long)local_8a8 >> 3;
                uVar10 = uVar23;
              } while (uVar23 < uVar19 - 1);
            }
            puVar20 = local_8c0;
            if ((local_88 & 1) == 0) goto LAB_0087f644;
            if (local_8c0 != (undefined1 *)0x0) {
              FUN_00d0f740(1,local_8c0 + 0x18);
            }
            if ((local_a0 != (undefined1 *)0x0) &&
               (iVar7 = FUN_00d0f7a0(0xffffffff,local_a0 + 0x18), iVar7 == 1)) {
              pvVar11 = *(void **)(local_a0 + 0x10);
              *(undefined8 *)(local_a0 + 0x10) = 0;
              if (pvVar11 != (void *)0x0) {
                operator_delete__(pvVar11);
              }
              operator_delete(local_a0);
            }
            local_a0 = puVar20;
            puStack_90 = local_8b0;
            local_98 = puStack_8b8;
            *param_1 = 0;
            param_1[0x808] = 0;
            if (local_88 == 1) {
              if (param_1 == (undefined1 *)0x0) {
LAB_0087f66c:
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                          );
              }
              FUN_007dd000(param_1,&local_890);
              FUN_007b5434(param_1 + 0x7f0,&local_a0);
              param_1[0x808] = 1;
            }
          }
          FUN_007b5554(&local_8c0);
          if (local_8a8 != (long *)0x0) {
            uVar19 = (ulong)((long)local_8a0 + (-8 - ((long)local_8a0 << 0x3d))) >> 3;
            uVar10 = (ulong)(((long)local_8a8 - (long)local_8a0 << 0x3d) -
                            ((long)local_8a8 - (long)local_8a0)) >> 3;
            if (uVar19 <= uVar10) {
              uVar10 = uVar19;
            }
            plVar13 = local_8a0;
            if ((1 < uVar10) && ((((int)local_8a8 - (int)local_8a0 | -(int)local_8a0) & 7U) == 0)) {
              uVar10 = uVar10 & 0x1ffffffffffffffe;
              plVar13 = local_8a0 + -uVar10;
              do {
                uVar10 = uVar10 - 2;
              } while (uVar10 != 0);
            }
            while (plVar13 != local_8a8) {
              plVar13 = plVar13 + -1;
              if (plVar13 == (long *)0x0) {
LAB_0087f314:
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                          );
              }
            }
            local_8a0 = local_8a8;
            operator_delete(local_8a8);
          }
          if (local_88 == 1) {
            FUN_007b5554(&local_a0);
            FUN_007dd190(&local_890);
          }
        }
        ppbVar12 = &local_9a0;
      }
      FUN_007b5554(ppbVar12);
      goto LAB_0087f520;
    }
    uVar10 = FUN_004249b0();
    if ((uVar10 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e94,"../../modules/rtp_rtcp/source/video_rtp_depacketizer_h265.cc",
                   0x873,"Not support type:",0x32);
    }
  }
  *param_1 = 0;
  param_1[0x808] = 0;
LAB_0087f520:
  if (*(long *)(lVar5 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0087f6a4  FUN_0087f6a4 =====

void FUN_0087f6a4(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0087f6b0  FUN_0087f6b0 =====

undefined8 * FUN_0087f6b0(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  size_t __n;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  void *__dest;
  
  puVar6 = (undefined8 *)(param_1[1] - *param_1);
  uVar1 = ((long)puVar6 >> 3) + 1;
  if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_005ff43c();
  }
  uVar4 = param_1[2] - *param_1;
  uVar5 = (long)uVar4 >> 2;
  if (uVar5 <= uVar1) {
    uVar5 = uVar1;
  }
  if (0x7ffffffffffffff7 < uVar4) {
    uVar5 = 0x1fffffffffffffff;
  }
  if (uVar5 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    pvVar2 = operator_new(uVar5 << 3);
    puVar6 = (undefined8 *)((long)pvVar2 + (long)puVar6);
  }
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = *param_2;
    __n = param_1[1] - *param_1;
    __dest = (void *)((long)puVar6 - __n);
    memcpy(__dest,(void *)*param_1,__n);
    pvVar3 = (void *)*param_1;
    *param_1 = (long)__dest;
    param_1[1] = (long)(puVar6 + 1);
    param_1[2] = (long)((long)pvVar2 + uVar5 * 8);
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    return puVar6 + 1;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0087f7a4  FUN_0087f7a4 =====

void FUN_0087f7a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d3afb0;
  *(undefined1 *)((long)param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)((long)param_1 + 0x5c) = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  *(undefined8 *)((long)param_1 + 0x49) = 0;
  *(undefined8 *)((long)param_1 + 0x41) = 0;
  return;
}


// ===== 0087f7dc  FUN_0087f7dc =====

void FUN_0087f7dc(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  void *pvVar6;
  
  pvVar1 = (void *)param_1[7];
  *param_1 = &PTR_FUN_00d3afb0;
  if (pvVar1 == (void *)0x0) {
LAB_0087f890:
    puVar5 = param_1 + 4;
    pvVar1 = (void *)*puVar5;
    if (pvVar1 != (void *)0x0) {
      pvVar6 = (void *)param_1[5];
      pvVar2 = pvVar1;
      if (pvVar1 != pvVar6) {
        do {
          pvVar6 = (void *)((long)pvVar6 + -0xa8);
          FUN_00883364(puVar5,pvVar6);
        } while (pvVar6 != pvVar1);
        pvVar2 = (void *)*puVar5;
      }
      param_1[5] = pvVar1;
      operator_delete(pvVar2);
    }
    pvVar1 = (void *)param_1[1];
    if (pvVar1 == (void *)0x0) {
      return;
    }
    pvVar2 = (void *)param_1[2];
    uVar4 = (ulong)((long)pvVar2 + (-8 - ((long)pvVar2 << 0x3d))) >> 3;
    uVar3 = (ulong)(((long)pvVar1 - (long)pvVar2 << 0x3d) - ((long)pvVar1 - (long)pvVar2)) >> 3;
    if (uVar4 <= uVar3) {
      uVar3 = uVar4;
    }
    if ((1 < uVar3) && ((((int)pvVar1 - (int)pvVar2 | -(int)pvVar2) & 7U) == 0)) {
      uVar3 = uVar3 & 0x1ffffffffffffffe;
      pvVar2 = (void *)((long)pvVar2 + uVar3 * -8);
      do {
        uVar3 = uVar3 - 2;
      } while (uVar3 != 0);
    }
    do {
      if (pvVar2 == pvVar1) {
        param_1[2] = pvVar1;
        operator_delete(pvVar1);
        return;
      }
      pvVar2 = (void *)((long)pvVar2 + -8);
    } while (pvVar2 != (void *)0x0);
  }
  else {
    pvVar2 = (void *)param_1[8];
    uVar3 = (ulong)(((long)pvVar1 - (long)pvVar2) * 0x1333333333333333) >> 3;
    uVar4 = (long)pvVar2 * -0x1333333333333333 - 8U >> 3;
    if (uVar4 <= uVar3) {
      uVar3 = uVar4;
    }
    if ((1 < uVar3) && ((((int)pvVar1 - (int)pvVar2 | -(int)pvVar2) & 7U) == 0)) {
      uVar3 = uVar3 & 0x1ffffffffffffffe;
      pvVar2 = (void *)((long)pvVar2 + uVar3 * -0x28);
      do {
        uVar3 = uVar3 - 2;
      } while (uVar3 != 0);
    }
    do {
      if (pvVar2 == pvVar1) {
        param_1[8] = pvVar1;
        operator_delete(pvVar1);
        goto LAB_0087f890;
      }
      pvVar2 = (void *)((long)pvVar2 + -0x28);
    } while (pvVar2 != (void *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 0087f98c  FUN_0087f98c =====

void FUN_0087f98c(void *param_1)

{
  FUN_0087f7dc();
  operator_delete(param_1);
  return;
}


// ===== 0087f9bc  FUN_0087f9bc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0087f9bc(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined1 (*pauVar1) [16];
  uint *puVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  code *pcVar11;
  bool bVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined4 uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  undefined *puVar23;
  char *pcVar24;
  undefined8 uVar25;
  char *pcVar26;
  undefined8 uVar27;
  ulong uVar28;
  ulong uVar29;
  uint *puVar30;
  uint *puVar31;
  ulong uVar32;
  undefined1 (*pauVar33) [16];
  ulong uVar34;
  long lVar35;
  ulong uVar36;
  undefined8 uVar37;
  char **ppcVar38;
  uint *puVar39;
  uint *puVar40;
  uint uVar41;
  double dVar42;
  int iVar43;
  int iVar44;
  int iVar46;
  int iVar47;
  undefined1 auVar45 [16];
  int iVar48;
  undefined1 auVar49 [16];
  long lVar50;
  long lVar51;
  long lVar52;
  uint5 uVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  uint5 uVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined8 in_stack_fffffffffffff660;
  uint local_96c;
  undefined1 uStack_959;
  char *local_958;
  char **ppcStack_950;
  char *local_948;
  char **ppcStack_940;
  char *local_938;
  undefined8 uStack_930;
  char **local_928;
  byte local_52c;
  undefined8 local_528;
  char **ppcStack_520;
  char *local_118;
  char **local_110;
  undefined8 local_108;
  char *local_100;
  char **local_f8;
  undefined1 *local_f0;
  undefined8 local_e8;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined1 *local_d0;
  bool local_c8 [16];
  undefined8 local_b8;
  bool bStack_b0;
  bool bStack_af;
  bool bStack_ae;
  bool bStack_ad;
  bool bStack_ac;
  bool bStack_ab;
  bool bStack_aa;
  undefined8 local_a8;
  bool bStack_a0;
  bool bStack_9f;
  bool bStack_9e;
  bool bStack_9d;
  bool bStack_9c;
  bool bStack_9b;
  bool bStack_9a;
  undefined8 local_98;
  bool local_90;
  bool local_8f;
  bool local_8e;
  bool local_8d;
  bool local_8c;
  bool local_8b;
  bool local_8a;
  undefined1 uStack_89;
  long local_88;
  
  lVar3 = tpidr_el0;
  local_88 = *(long *)(lVar3 + 0x28);
  if (*(char *)(param_1 + 0x54) == '\x01') {
    *(undefined1 *)(param_1 + 0x54) = 0;
  }
  if (*(char *)(param_1 + 0x5c) == '\x01') {
    *(undefined1 *)(param_1 + 0x5c) = 0;
  }
  auVar55[8] = 0xaa;
  auVar55._0_8_ = &DAT_aaaaaaaaaaaaaaaa;
  auVar55[9] = 0xaa;
  auVar55[10] = 0xaa;
  auVar55[0xb] = 0xaa;
  auVar55[0xc] = 0xaa;
  auVar55[0xd] = 0xaa;
  auVar55[0xe] = 0xaa;
  auVar55[0xf] = 0xaa;
  puStack_d8 = auVar55._8_8_;
  local_e0 = &DAT_aaaaaaaaaaaaaaaa;
  local_d0 = &DAT_aaaaaaaaaaaaaaaa;
  thunk_FUN_0087b608(&local_e0,param_2,param_3);
  uVar28 = (long)puStack_d8 - (long)local_e0;
  if (uVar28 < 2) {
    uVar37 = 1;
    goto joined_r0x0087fc34;
  }
  local_f0 = (undefined1 *)0x0;
  if (puStack_d8 != local_e0) {
    local_f0 = local_e0;
  }
  local_e8 = &DAT_aaaaaaaaaaaaaaaa;
  if ((uVar28 >> 0x1c & 0x1ffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../rtc_base/numerics/safe_conversions.h",0x24,
                 "IsValueInRangeForNumericType<Dst>(value)",&DAT_001f5fa0);
  }
  local_e8 = (undefined1 *)CONCAT44(0xaaaaaa01,(int)uVar28 * 8);
  FUN_007d6120(&local_f0,0x10);
  iVar14 = FUN_007d60c4(&local_f0);
  if ((param_4 & 0xf8) == 0x10) {
    FUN_007d6120(&local_f0,1);
  }
  uVar15 = FUN_007d6508(&local_f0);
  uVar19 = (undefined4)((ulong)in_stack_fffffffffffff660 >> 0x20);
  local_e8._0_5_ = CONCAT14(1,(uint)local_e8);
  if ((uVar15 < 0x40) && (-1 < (int)(uint)local_e8)) {
    puVar40 = *(uint **)(param_1 + 0x38);
    lVar35 = (long)*(uint **)(param_1 + 0x40) - (long)puVar40;
    if (lVar35 != 0) {
      uVar28 = (lVar35 >> 3) * -0x3333333333333333;
      puVar39 = puVar40;
      do {
        uVar32 = uVar28 >> 1;
        puVar40 = puVar39 + uVar32 * 10 + 10;
        uVar28 = uVar28 + ~uVar32;
        if (uVar15 <= puVar39[uVar32 * 10]) {
          puVar40 = puVar39;
          uVar28 = uVar32;
        }
        puVar39 = puVar40;
      } while (uVar28 != 0);
    }
    if ((puVar40 == *(uint **)(param_1 + 0x40)) || (uVar15 < *puVar40)) {
      uVar28 = FUN_004022fc();
      if ((uVar28 & 1) == 0) {
        FUN_00623bb0(&DAT_001f6220,"../../common_video/h265/h265_bitstream_parser.cc",0xfd2,
                     "Requested a nonexistent PPS id ",uVar15);
      }
      local_e8._0_5_ = CONCAT14(1,(uint)local_e8);
LAB_0087fb64:
      uVar28 = FUN_004022fc();
      if ((uVar28 & 1) != 0) goto LAB_0087fc2c;
      pcVar24 = "pps";
      uVar37 = 0x372;
    }
    else {
      if (puVar40 + 1 == (uint *)0x0) goto LAB_0087fb64;
      puVar39 = *(uint **)(param_1 + 0x20);
      uVar16 = puVar40[8];
      lVar35 = (long)*(uint **)(param_1 + 0x28) - (long)puVar39;
      if (lVar35 != 0) {
        uVar28 = (lVar35 >> 3) * -0x30c30c30c30c30c3;
        puVar30 = puVar39;
        do {
          uVar32 = uVar28 >> 1;
          puVar39 = puVar30 + uVar32 * 0x2a + 0x2a;
          uVar28 = uVar28 + ~uVar32;
          if (uVar16 <= puVar30[uVar32 * 0x2a]) {
            puVar39 = puVar30;
            uVar28 = uVar32;
          }
          puVar30 = puVar39;
        } while (uVar28 != 0);
      }
      if ((puVar39 == *(uint **)(param_1 + 0x28)) || (uVar16 < *puVar39)) {
        uVar28 = FUN_004022fc();
        if ((uVar28 & 1) == 0) {
          FUN_00623bb0(&DAT_001f6220,"../../common_video/h265/h265_bitstream_parser.cc",0x1022,
                       "Requested a nonexistent SPS id ",uVar16);
        }
        local_e8._0_5_ = CONCAT14(1,(uint)local_e8);
LAB_0087fd38:
        uVar28 = FUN_004022fc();
        if ((uVar28 & 1) != 0) goto LAB_0087fc2c;
        pcVar24 = "sps";
        uVar37 = 0x382;
      }
      else {
        if (puVar39 + 2 == (uint *)0x0) goto LAB_0087fd38;
        if (iVar14 != 0) {
LAB_0087fd74:
          if (puVar40[2] != 0) {
            uVar16 = 0;
            do {
              FUN_007d6120(&local_f0,1);
              uVar16 = uVar16 + 1;
            } while (uVar16 < puVar40[2]);
          }
          uVar16 = FUN_007d6508(&local_f0);
          uVar19 = (undefined4)((ulong)in_stack_fffffffffffff660 >> 0x20);
          local_e8._0_5_ = CONCAT14(1,(uint)local_e8);
          if ((2 < uVar16) || ((int)(uint)local_e8 < 0)) {
            uVar28 = FUN_004022fc();
            if ((uVar28 & 1) == 0) {
              uStack_930 = 0x49a;
              pcVar24 = "Error in stream: invalid value, expected slice_type to be";
              uVar37 = 0x49a;
              uVar27 = 2;
              local_100 = "Error in stream: invalid value, expected slice_type to be";
              uVar25 = CONCAT44(uVar19,uVar16);
              goto LAB_0087fc24;
            }
            goto LAB_0087fc2c;
          }
          if (*(char *)((long)puVar40 + 6) == '\x01') {
            FUN_007d6120(&local_f0,1);
          }
          if (puVar39[4] != 0) {
            FUN_007d6120(&local_f0,2);
          }
          local_110 = (char **)0x0;
          local_118 = (char *)0x0;
          local_108 = 0;
          memset(&local_528,0xaa,0x40c);
          FUN_00885498(&local_528);
          if ((param_4 & 0xff) - 0x15 < 0xfffffffe) {
            FUN_007d6120(&local_f0,puVar39[7] + 4);
            iVar14 = FUN_007d60c4(&local_f0);
            bVar12 = iVar14 != 0;
            if (iVar14 == 0) {
              memset(&local_938,0xaa,0x410);
              uVar17 = puVar39[2];
              if (6 < uVar17) goto LAB_00881a0c;
              FUN_00886fb4(&local_938,puVar39[0x12],puVar39[0x12],puVar39 + 0x14,
                           puVar39[(ulong)uVar17 + 8],&local_f0);
              local_e8._0_5_ = CONCAT14(1,(uint)local_e8);
              if ((-1 < (int)(uint)local_e8) && ((local_52c & 1) != 0)) {
                memcpy(&local_528,&local_938,0x40c);
                goto LAB_00880118;
              }
              uVar28 = FUN_004022fc();
              if ((uVar28 & 1) == 0) {
                FUN_00623bb0(&DAT_001f4ed3,"../../common_video/h265/h265_bitstream_parser.cc",0x59a,
                             "Error in stream: invalid value, expected ","ref_pic_set");
              }
              goto LAB_00880748;
            }
            if (puVar39[0x12] < 2) {
LAB_00880118:
              uVar17 = 0;
LAB_0088011c:
              uVar18 = puVar39[0x1a];
joined_r0x0088050c:
              if (uVar18 == 0) {
                local_96c = 0;
                uVar18 = 0;
LAB_00880518:
                if (puVar39[0x22] == 0) goto LAB_00880078;
                iVar14 = FUN_007d60c4(&local_f0);
                bVar13 = iVar14 != 0;
                uVar21 = puVar39[0x11];
                goto joined_r0x00880538;
              }
              if (puVar39[0x1b] == 0) {
                uVar18 = 0;
LAB_0088021c:
                local_96c = FUN_007d6508(&local_f0);
                uVar19 = (undefined4)((ulong)in_stack_fffffffffffff660 >> 0x20);
                uVar21 = 0x20 - uVar18;
                local_e8._0_5_ = CONCAT14(1,(uint)local_e8);
                if ((local_96c <= uVar21) && (-1 < (int)(uint)local_e8)) {
                  FUN_008822e8(&local_118,local_96c + uVar18,0);
                  if (local_96c + uVar18 != 0) {
                    ppcVar38 = (char **)0x0;
                    do {
                      if (ppcVar38 < (char **)(ulong)uVar18) {
                        if (puVar39[0x1b] < 2) {
                          uVar20 = 0;
                        }
                        else {
                          uVar19 = FUN_00885340();
                          uVar20 = FUN_007d5db0(&local_f0,uVar19);
                          uVar19 = (undefined4)((ulong)in_stack_fffffffffffff660 >> 0x20);
                          local_e8._0_5_ = CONCAT14(1,(uint)local_e8);
                          if (((int)(uint)local_e8 < 0) || (puVar39[0x1b] - 1 < uVar20)) {
                            uVar28 = FUN_004022fc();
                            if ((uVar28 & 1) != 0) goto LAB_00880748;
                            uStack_930 = 0x6da;
                            pcVar24 = "Error in stream: invalid value, expected lt_idx_sps to be";
                            local_958 = "Error in stream: invalid value, expected lt_idx_sps to be";
                            uVar21 = puVar39[0x1b];
                            uVar27 = CONCAT44(uVar19,uVar20);
                            uVar37 = 0x6da;
                            goto LAB_0087ff10;
                          }
                        }
                        if ((ulong)(*(long *)(puVar39 + 0x1e) - *(long *)(puVar39 + 0x1c) >> 2) <=
                            (ulong)uVar20) {
                    /* WARNING: Subroutine does not return */
                          std::__Cr::__libcpp_verbose_abort
                                    ("%s",
                                     "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                                    );
                        }
                        if (local_110 <= ppcVar38) goto LAB_00881c58;
                        uVar28 = 1L << ((ulong)ppcVar38 & 0x3f);
                        if (*(int *)(*(long *)(puVar39 + 0x1c) + (ulong)uVar20 * 4) == 0)
                        goto LAB_00880364;
LAB_0088031c:
                        uVar28 = *(ulong *)(local_118 + ((ulong)ppcVar38 >> 6) * 8) | uVar28;
                      }
                      else {
                        FUN_007d6120(&local_f0,puVar39[7] + 4);
                        iVar14 = FUN_007d60c4(&local_f0);
                        if (local_110 <= ppcVar38) goto LAB_00881c58;
                        uVar28 = 1L << ((ulong)ppcVar38 & 0x3f);
                        if (iVar14 != 0) goto LAB_0088031c;
LAB_00880364:
                        uVar28 = *(ulong *)(local_118 + ((ulong)ppcVar38 >> 6) * 8) &
                                 (uVar28 ^ 0xffffffffffffffff);
                      }
                      *(ulong *)(local_118 + ((ulong)ppcVar38 >> 6) * 8) = uVar28;
                      iVar14 = FUN_007d60c4(&local_f0);
                      if (iVar14 != 0) {
                        uVar21 = FUN_007d6508(&local_f0);
                        local_e8._0_5_ = CONCAT14(1,(uint)local_e8);
                        if (((int)((uint)local_e8 | uVar21) < 0) ||
                           (dVar42 = exp2((double)(0x1c - puVar39[7])), dVar42 < (double)uVar21)) {
                          uVar28 = FUN_004022fc();
                          if ((uVar28 & 1) == 0) {
                            local_938 = "../../common_video/h265/h265_bitstream_parser.cc";
                            uStack_930 = 0x772;
                            ppcStack_950 = &local_938;
                            local_958 = 
                            "Error in stream: invalid value, expected delta_poc_msb_cycle_lt to be";
                            ppcStack_940 = &local_958;
                            local_928 = (char **)&local_98;
                            local_948 = " in range [";
                            local_f8 = &local_948;
                            local_100 = (char *)0x0;
                            exp2((double)(0x1c - puVar39[7]));
                            FUN_00623bb0(&DAT_00223e1e,
                                         "../../common_video/h265/h265_bitstream_parser.cc",0x772,
                                         "Error in stream: invalid value, expected delta_poc_msb_cycle_lt to be"
                                         ," in range [",0,&DAT_001ca603,&DAT_0019fa9e," found ",
                                         uVar21," instead");
                          }
                          goto LAB_00880748;
                        }
                      }
                      ppcVar38 = (char **)((long)ppcVar38 + 1);
                    } while ((char **)(ulong)(local_96c + uVar18) != ppcVar38);
                  }
                  goto LAB_00880518;
                }
                uVar28 = FUN_004022fc();
                if ((uVar28 & 1) != 0) goto LAB_00880748;
                uStack_930 = 0x67a;
                pcVar24 = "Error in stream: invalid value, expected num_long_term_pics to be";
                ppcStack_950 = &local_938;
                local_928 = (char **)&local_98;
                local_958 = "Error in stream: invalid value, expected num_long_term_pics to be";
                uVar25 = 0;
                local_948 = " in range [";
                local_f8 = &local_948;
                puVar23 = &DAT_00223e13;
                uVar27 = CONCAT44(uVar19,local_96c);
                local_100 = (char *)0x0;
                uVar37 = 0x67a;
              }
              else {
                uVar18 = FUN_007d6508(&local_f0);
                uVar19 = (undefined4)((ulong)in_stack_fffffffffffff660 >> 0x20);
                local_e8._0_5_ = CONCAT14(1,(uint)local_e8);
                if ((-1 < (int)(uint)local_e8) && (uVar18 <= puVar39[0x1b])) goto LAB_0088021c;
                uVar28 = FUN_004022fc();
                if ((uVar28 & 1) != 0) goto LAB_00880748;
                uStack_930 = 0x652;
                pcVar24 = "Error in stream: invalid value, expected num_long_term_sps to be";
                ppcStack_950 = &local_938;
                local_958 = "Error in stream: invalid value, expected num_long_term_sps to be";
                local_928 = (char **)&local_98;
                local_948 = " in range [";
                local_f8 = &local_948;
                uVar25 = 0;
                local_100 = (char *)0x0;
                puVar23 = &DAT_00223e13;
                uVar27 = CONCAT44(uVar19,uVar18);
                uVar37 = 0x652;
                uVar21 = puVar39[0x1b];
              }
            }
            else {
              uVar17 = FUN_00885340();
              if ((uint)(1 << (ulong)(uVar17 & 0x1f)) < puVar39[0x12]) {
                uVar17 = uVar17 + 1;
              }
              if (uVar17 == 0) {
                uVar17 = 0;
                uVar18 = puVar39[0x1a];
                goto joined_r0x0088050c;
              }
              uVar17 = FUN_007d5db0(&local_f0);
              uVar19 = (undefined4)((ulong)in_stack_fffffffffffff660 >> 0x20);
              local_e8._0_5_ = CONCAT14(1,(uint)local_e8);
              if ((-1 < (int)(uint)local_e8) && (uVar17 <= puVar39[0x12] - 1)) goto LAB_0088011c;
              uVar28 = FUN_004022fc();
              if ((uVar28 & 1) != 0) goto LAB_00880748;
              uStack_930 = 0x612;
              pcVar24 = "Error in stream: invalid value, expected short_term_ref_pic_set_idx to be";
              local_958 = 
              "Error in stream: invalid value, expected short_term_ref_pic_set_idx to be";
              uVar21 = puVar39[0x12];
              uVar27 = CONCAT44(uVar19,uVar17);
              uVar37 = 0x612;
LAB_0087ff10:
              local_f8 = &local_948;
              local_928 = (char **)&local_98;
              ppcStack_950 = &local_938;
              local_100 = (char *)0x0;
              local_948 = " in range [";
              uVar21 = uVar21 - 1;
LAB_008806a0:
              puVar23 = &DAT_00223e13;
              uVar25 = 0;
            }
            goto LAB_00880744;
          }
          uVar17 = 0;
          local_96c = 0;
          bVar12 = false;
          uVar18 = 0;
LAB_00880078:
          bVar13 = false;
          uVar21 = puVar39[0x11];
joined_r0x00880538:
          if (((uVar21 != 0) && (FUN_007d6120(&local_f0,1), puVar39[4] == 0)) && (puVar39[3] != 0))
          {
            FUN_007d6120(&local_f0,1);
          }
          uVar19 = (undefined4)((ulong)in_stack_fffffffffffff660 >> 0x20);
          if (1 < uVar16) {
LAB_00881e2c:
            if (local_118 != (char *)0x0) {
              operator_delete(local_118);
            }
            goto LAB_00881e40;
          }
          iVar14 = FUN_007d60c4(&local_f0);
          uVar21 = puVar40[4];
          if (iVar14 == 0) {
            uVar20 = puVar40[3];
LAB_008805b0:
            uVar19 = (undefined4)((ulong)in_stack_fffffffffffff660 >> 0x20);
            if (!bVar12) {
              uVar17 = puVar39[0x12];
            }
            uVar32 = (ulong)uVar17;
            local_e8._0_5_ = CONCAT14(1,(uint)local_e8);
            uVar28 = (*(long *)(puVar39 + 0x16) - *(long *)(puVar39 + 0x14) >> 2) *
                     0x2f71aaff02f71ab;
            puVar31 = (uint *)(*(long *)(puVar39 + 0x14) + (ulong)uVar17 * 0x40c);
            puVar30 = puVar31;
            if (uVar28 < uVar32 || uVar28 - uVar32 == 0) {
              puVar30 = (uint *)&local_528;
            }
            if (((int)(uint)local_e8 < 0) || (0x40 < *puVar30)) {
              uVar28 = FUN_004022fc();
              if ((uVar28 & 1) == 0) {
                uStack_930 = 0x94a;
                pcVar24 = 
                "Error in stream: invalid value, expected ref_pic_set->num_negative_pics to be";
                local_98._0_1_ = 0xbf;
                local_98._1_1_ = 0x6d;
                local_98._2_1_ = 0x1a;
                local_98._3_1_ = 0;
                local_98._4_1_ = 0;
                local_98._5_1_ = 0;
                local_98._6_1_ = 0;
                local_98._7_1_ = 0;
                local_90 = SUB81(&local_938,0);
                local_8f = SUB81((ulong)&local_938 >> 8,0);
                local_8e = SUB81((ulong)&local_938 >> 0x10,0);
                local_8d = SUB81((ulong)&local_938 >> 0x18,0);
                local_8c = SUB81((ulong)&local_938 >> 0x20,0);
                local_8b = SUB81((ulong)&local_938 >> 0x28,0);
                local_8a = SUB81((ulong)&local_938 >> 0x30,0);
                uStack_89 = (undefined1)((ulong)&local_938 >> 0x38);
                local_100 = ":";
                local_f8 = &local_948;
                uVar37 = 0x94a;
                uVar15 = *puVar30;
LAB_0088068c:
                local_98._7_1_ = 0;
                local_98._6_1_ = 0;
                local_98._5_1_ = 0;
                local_98._4_1_ = 0;
                local_98._3_1_ = 0;
                local_928 = (char **)&local_a8;
                ppcStack_950 = (char **)&local_98;
                local_100 = ":";
                local_948 = (char *)0x0;
                local_958 = " in range [";
                uVar21 = 0x40;
                uVar27 = CONCAT44(uVar19,uVar15);
                goto LAB_008806a0;
              }
            }
            else {
              puVar2 = puVar31;
              if (uVar28 < uVar32 || uVar28 - uVar32 == 0) {
                puVar2 = (uint *)&local_528;
              }
              uVar17 = puVar2[1];
              uVar29 = (ulong)uVar17;
              if (uVar17 < 0x41) {
                uVar41 = *puVar30;
                uVar34 = (ulong)uVar41;
                if (uVar41 == 0) {
                  uVar41 = 0;
                }
                else {
                  puVar30 = puVar31;
                  if (uVar28 < uVar32 || uVar28 - uVar32 == 0) {
                    puVar30 = (uint *)&local_528;
                  }
                  if (uVar41 - 0x41 < 0xffffffc0) goto LAB_00881a0c;
                  if (uVar41 < 8) {
                    uVar36 = 0;
                    uVar41 = 0;
                  }
                  else {
                    puVar2 = puVar31;
                    if (uVar28 < uVar32 || uVar28 - uVar32 == 0) {
                      puVar2 = (uint *)&local_528;
                    }
                    auVar55 = NEON_cmeq(*(undefined1 (*) [16])(puVar30 + 0x42),0,2);
                    uVar36 = uVar34 & 0x78;
                    auVar58 = NEON_cmeq(*(undefined1 (*) [16])(puVar2 + 0x46),0,2);
                    auVar62._0_5_ = CONCAT14(~auVar55[4],(uint)(~auVar55[0] & 1)) & 0x1ffffffff;
                    auVar62._5_3_ = 0;
                    auVar62[8] = ~auVar55[8] & 1;
                    auVar62._9_3_ = 0;
                    auVar62[0xc] = ~auVar55[0xc] & 1;
                    auVar62._13_3_ = 0;
                    auVar45._0_5_ = CONCAT14(~auVar58[4],(uint)(~auVar58[0] & 1)) & 0x1ffffffff;
                    auVar45._5_3_ = 0;
                    auVar45[8] = ~auVar58[8] & 1;
                    auVar45._9_3_ = 0;
                    auVar45[0xc] = ~auVar58[0xc] & 1;
                    auVar45._13_3_ = 0;
                    auVar58 = auVar62;
                    auVar60 = auVar45;
                    if (uVar36 != 8) {
                      puVar2 = puVar31;
                      if (uVar28 < uVar32 || uVar28 - uVar32 == 0) {
                        puVar2 = (uint *)&local_528;
                      }
                      auVar55 = NEON_cmtst(*(undefined1 (*) [16])(puVar2 + 0x4a),
                                           *(undefined1 (*) [16])(puVar2 + 0x4a),4);
                      auVar49 = NEON_cmtst(*(undefined1 (*) [16])(puVar2 + 0x4e),
                                           *(undefined1 (*) [16])(puVar2 + 0x4e),4);
                      auVar58._0_4_ = (int)auVar62._0_5_ - auVar55._0_4_;
                      auVar58._4_4_ = (uint)(byte)(auVar62._0_5_ >> 0x20) - auVar55._4_4_;
                      auVar58._8_4_ = (uint)auVar62[8] - auVar55._8_4_;
                      auVar58._12_4_ = (uint)auVar62[0xc] - auVar55._12_4_;
                      auVar60._0_4_ = (int)auVar45._0_5_ - auVar49._0_4_;
                      auVar60._4_4_ = (uint)(byte)(auVar45._0_5_ >> 0x20) - auVar49._4_4_;
                      auVar60._8_4_ = (uint)auVar45[8] - auVar49._8_4_;
                      auVar60._12_4_ = (uint)auVar45[0xc] - auVar49._12_4_;
                      if (uVar36 != 0x10) {
                        puVar2 = puVar31;
                        if (uVar28 < uVar32 || uVar28 - uVar32 == 0) {
                          puVar2 = (uint *)&local_528;
                        }
                        auVar55 = NEON_cmtst(*(undefined1 (*) [16])(puVar2 + 0x52),
                                             *(undefined1 (*) [16])(puVar2 + 0x52),4);
                        auVar62 = NEON_cmtst(*(undefined1 (*) [16])(puVar2 + 0x56),
                                             *(undefined1 (*) [16])(puVar2 + 0x56),4);
                        auVar58._0_4_ = auVar58._0_4_ - auVar55._0_4_;
                        auVar58._4_4_ = auVar58._4_4_ - auVar55._4_4_;
                        auVar58._8_4_ = auVar58._8_4_ - auVar55._8_4_;
                        auVar58._12_4_ = auVar58._12_4_ - auVar55._12_4_;
                        auVar60._0_4_ = auVar60._0_4_ - auVar62._0_4_;
                        auVar60._4_4_ = auVar60._4_4_ - auVar62._4_4_;
                        auVar60._8_4_ = auVar60._8_4_ - auVar62._8_4_;
                        auVar60._12_4_ = auVar60._12_4_ - auVar62._12_4_;
                        if (uVar36 != 0x18) {
                          puVar2 = puVar31;
                          if (uVar28 < uVar32 || uVar28 - uVar32 == 0) {
                            puVar2 = (uint *)&local_528;
                          }
                          auVar55 = NEON_cmtst(*(undefined1 (*) [16])(puVar2 + 0x5a),
                                               *(undefined1 (*) [16])(puVar2 + 0x5a),4);
                          auVar62 = NEON_cmtst(*(undefined1 (*) [16])(puVar2 + 0x5e),
                                               *(undefined1 (*) [16])(puVar2 + 0x5e),4);
                          auVar58._0_4_ = auVar58._0_4_ - auVar55._0_4_;
                          auVar58._4_4_ = auVar58._4_4_ - auVar55._4_4_;
                          auVar58._8_4_ = auVar58._8_4_ - auVar55._8_4_;
                          auVar58._12_4_ = auVar58._12_4_ - auVar55._12_4_;
                          auVar60._0_4_ = auVar60._0_4_ - auVar62._0_4_;
                          auVar60._4_4_ = auVar60._4_4_ - auVar62._4_4_;
                          auVar60._8_4_ = auVar60._8_4_ - auVar62._8_4_;
                          auVar60._12_4_ = auVar60._12_4_ - auVar62._12_4_;
                          if (uVar36 != 0x20) {
                            puVar2 = puVar31;
                            if (uVar28 < uVar32 || uVar28 - uVar32 == 0) {
                              puVar2 = (uint *)&local_528;
                            }
                            auVar55 = NEON_cmtst(*(undefined1 (*) [16])(puVar2 + 0x62),
                                                 *(undefined1 (*) [16])(puVar2 + 0x62),4);
                            auVar62 = NEON_cmtst(*(undefined1 (*) [16])(puVar2 + 0x66),
                                                 *(undefined1 (*) [16])(puVar2 + 0x66),4);
                            auVar58._0_4_ = auVar58._0_4_ - auVar55._0_4_;
                            auVar58._4_4_ = auVar58._4_4_ - auVar55._4_4_;
                            auVar58._8_4_ = auVar58._8_4_ - auVar55._8_4_;
                            auVar58._12_4_ = auVar58._12_4_ - auVar55._12_4_;
                            auVar60._0_4_ = auVar60._0_4_ - auVar62._0_4_;
                            auVar60._4_4_ = auVar60._4_4_ - auVar62._4_4_;
                            auVar60._8_4_ = auVar60._8_4_ - auVar62._8_4_;
                            auVar60._12_4_ = auVar60._12_4_ - auVar62._12_4_;
                            if (uVar36 != 0x28) {
                              puVar2 = puVar31;
                              if (uVar28 < uVar32 || uVar28 - uVar32 == 0) {
                                puVar2 = (uint *)&local_528;
                              }
                              auVar55 = NEON_cmtst(*(undefined1 (*) [16])(puVar2 + 0x6a),
                                                   *(undefined1 (*) [16])(puVar2 + 0x6a),4);
                              auVar62 = NEON_cmtst(*(undefined1 (*) [16])(puVar2 + 0x6e),
                                                   *(undefined1 (*) [16])(puVar2 + 0x6e),4);
                              auVar58._0_4_ = auVar58._0_4_ - auVar55._0_4_;
                              auVar58._4_4_ = auVar58._4_4_ - auVar55._4_4_;
                              auVar58._8_4_ = auVar58._8_4_ - auVar55._8_4_;
                              auVar58._12_4_ = auVar58._12_4_ - auVar55._12_4_;
                              auVar60._0_4_ = auVar60._0_4_ - auVar62._0_4_;
                              auVar60._4_4_ = auVar60._4_4_ - auVar62._4_4_;
                              auVar60._8_4_ = auVar60._8_4_ - auVar62._8_4_;
                              auVar60._12_4_ = auVar60._12_4_ - auVar62._12_4_;
                              if (uVar36 != 0x30) {
                                puVar2 = puVar31;
                                if (uVar28 < uVar32 || uVar28 - uVar32 == 0) {
                                  puVar2 = (uint *)&local_528;
                                }
                                auVar55 = NEON_cmtst(*(undefined1 (*) [16])(puVar2 + 0x72),
                                                     *(undefined1 (*) [16])(puVar2 + 0x72),4);
                                auVar62 = NEON_cmtst(*(undefined1 (*) [16])(puVar2 + 0x76),
                                                     *(undefined1 (*) [16])(puVar2 + 0x76),4);
                                auVar58._0_4_ = auVar58._0_4_ - auVar55._0_4_;
                                auVar58._4_4_ = auVar58._4_4_ - auVar55._4_4_;
                                auVar58._8_4_ = auVar58._8_4_ - auVar55._8_4_;
                                auVar58._12_4_ = auVar58._12_4_ - auVar55._12_4_;
                                auVar60._0_4_ = auVar60._0_4_ - auVar62._0_4_;
                                auVar60._4_4_ = auVar60._4_4_ - auVar62._4_4_;
                                auVar60._8_4_ = auVar60._8_4_ - auVar62._8_4_;
                                auVar60._12_4_ = auVar60._12_4_ - auVar62._12_4_;
                                if (uVar36 != 0x38) {
                                  puVar2 = puVar31;
                                  if (uVar28 < uVar32 || uVar28 - uVar32 == 0) {
                                    puVar2 = (uint *)&local_528;
                                  }
                                  auVar55 = NEON_cmtst(*(undefined1 (*) [16])(puVar2 + 0x7a),
                                                       *(undefined1 (*) [16])(puVar2 + 0x7a),4);
                                  auVar62 = NEON_cmtst(*(undefined1 (*) [16])(puVar2 + 0x7e),
                                                       *(undefined1 (*) [16])(puVar2 + 0x7e),4);
                                  auVar58._0_4_ = auVar58._0_4_ - auVar55._0_4_;
                                  auVar58._4_4_ = auVar58._4_4_ - auVar55._4_4_;
                                  auVar58._8_4_ = auVar58._8_4_ - auVar55._8_4_;
                                  auVar58._12_4_ = auVar58._12_4_ - auVar55._12_4_;
                                  auVar60._0_4_ = auVar60._0_4_ - auVar62._0_4_;
                                  auVar60._4_4_ = auVar60._4_4_ - auVar62._4_4_;
                                  auVar60._8_4_ = auVar60._8_4_ - auVar62._8_4_;
                                  auVar60._12_4_ = auVar60._12_4_ - auVar62._12_4_;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    uVar41 = auVar60._0_4_ + auVar58._0_4_ + auVar60._4_4_ + auVar58._4_4_ +
                             auVar60._8_4_ + auVar58._8_4_ + auVar60._12_4_ + auVar58._12_4_;
                    if (uVar36 == uVar34) goto LAB_00880a94;
                  }
                  lVar35 = uVar34 - uVar36;
                  puVar30 = puVar30 + uVar36 + 0x42;
                  do {
                    if (*puVar30 != 0) {
                      uVar41 = uVar41 + 1;
                    }
                    lVar35 = lVar35 + -1;
                    puVar30 = puVar30 + 1;
                  } while (lVar35 != 0);
                }
LAB_00880a94:
                if (uVar17 != 0) {
                  if (uVar28 < uVar32 || uVar28 - uVar32 == 0) {
                    puVar31 = (uint *)&local_528;
                  }
                  if (uVar17 < 8) {
                    uVar32 = 0;
                  }
                  else {
                    iVar44 = 0;
                    iVar46 = 0;
                    iVar47 = 0;
                    iVar48 = 0;
                    uVar32 = uVar29 & 0x78;
                    pauVar33 = (undefined1 (*) [16])(puVar31 + 0xc6);
                    uVar28 = uVar29 & 0x78;
                    iVar14 = 0;
                    iVar22 = 0;
                    iVar43 = 0;
                    do {
                      pauVar1 = pauVar33 + -1;
                      auVar55 = *pauVar33;
                      uVar28 = uVar28 - 8;
                      pauVar33 = pauVar33 + 2;
                      auVar58 = NEON_cmtst(*pauVar1,*pauVar1,4);
                      auVar55 = NEON_cmtst(auVar55,auVar55,4);
                      uVar41 = uVar41 - auVar58._0_4_;
                      iVar14 = iVar14 - auVar58._4_4_;
                      iVar22 = iVar22 - auVar58._8_4_;
                      iVar43 = iVar43 - auVar58._12_4_;
                      iVar44 = iVar44 - auVar55._0_4_;
                      iVar46 = iVar46 - auVar55._4_4_;
                      iVar47 = iVar47 - auVar55._8_4_;
                      iVar48 = iVar48 - auVar55._12_4_;
                    } while (uVar28 != 0);
                    uVar41 = iVar44 + uVar41 + iVar46 + iVar14 + iVar47 + iVar22 + iVar48 + iVar43;
                    if (uVar32 == uVar29) goto LAB_00880b20;
                  }
                  lVar35 = uVar29 - uVar32;
                  puVar30 = puVar31 + uVar32 + 0xc2;
                  do {
                    if (*puVar30 != 0) {
                      uVar41 = uVar41 + 1;
                    }
                    lVar35 = lVar35 + -1;
                    puVar30 = puVar30 + 1;
                  } while (lVar35 != 0);
                }
LAB_00880b20:
                uVar18 = uVar18 + local_96c;
                uVar28 = (ulong)uVar18;
                if (uVar18 != 0) {
                  if (local_110 <= (char **)(ulong)(uVar18 - 1)) {
LAB_00881c58:
                    /* WARNING: Subroutine does not return */
                    std::__Cr::__libcpp_verbose_abort
                              ("%s",
                               "gen/third_party/libc++/src/include/__vector/vector_bool.h:297: libc++ Hardening assertion __n < size() failed: vector<bool>::operator[] index out of bounds\n"
                              );
                  }
                  if (uVar18 < 8) {
                    uVar29 = 0;
                  }
                  else {
                    iVar44 = 0;
                    iVar46 = 0;
                    iVar47 = 0;
                    iVar48 = 0;
                    iVar14 = 0;
                    iVar22 = 0;
                    iVar43 = 0;
                    uVar32 = 0;
                    uVar29 = uVar28 & 0xfffffff8;
                    lVar35 = _DAT_001f3b10;
                    lVar50 = _UNK_001f3b18;
                    lVar51 = _DAT_001f1d00;
                    lVar52 = _UNK_001f1d08;
                    do {
                      bVar9 = (byte)lVar35;
                      bVar10 = (byte)lVar50;
                      bVar7 = (byte)lVar51;
                      bVar8 = (byte)lVar52;
                      uVar34 = uVar32 >> 6;
                      auVar59[0] = bVar7 & 0x3f;
                      auVar59._1_7_ = 0;
                      auVar59[8] = bVar8 & 0x3f;
                      auVar59._9_7_ = 0;
                      auVar61[0] = bVar9 & 0x3f;
                      auVar61._1_7_ = 0;
                      auVar61[8] = bVar10 & 0x3f;
                      auVar61._9_7_ = 0;
                      uVar32 = uVar32 + 8;
                      lVar35 = lVar35 + 8;
                      lVar50 = lVar50 + 8;
                      lVar51 = lVar51 + 8;
                      lVar52 = lVar52 + 8;
                      auVar57[0] = bVar7 + 4 & 0x3f;
                      auVar57._1_7_ = 0;
                      auVar57[8] = bVar8 + 4 & 0x3f;
                      auVar57._9_7_ = 0;
                      auVar54[0] = bVar9 + 4 & 0x3f;
                      auVar54._1_7_ = 0;
                      auVar54[8] = bVar10 + 4 & 0x3f;
                      auVar54._9_7_ = 0;
                      auVar62 = NEON_neg(auVar61,8);
                      uVar37 = *(undefined8 *)(local_118 + uVar34 * 8);
                      auVar60 = NEON_neg(auVar59,8);
                      auVar55 = NEON_neg(auVar54,8);
                      auVar58 = NEON_neg(auVar57,8);
                      auVar49._8_8_ = uVar37;
                      auVar49._0_8_ = uVar37;
                      auVar62 = NEON_ushl(auVar49,auVar62,8);
                      auVar4._8_8_ = uVar37;
                      auVar4._0_8_ = uVar37;
                      auVar60 = NEON_ushl(auVar4,auVar60,8);
                      auVar5._8_8_ = uVar37;
                      auVar5._0_8_ = uVar37;
                      auVar55 = NEON_ushl(auVar5,auVar55,8);
                      auVar6._8_8_ = uVar37;
                      auVar6._0_8_ = uVar37;
                      auVar58 = NEON_ushl(auVar6,auVar58,8);
                      uVar56 = CONCAT14(auVar60[8],(uint)(auVar60[0] & 1)) & 0x1ffffffff;
                      uVar53 = CONCAT14(auVar58[8],(uint)(auVar58[0] & 1)) & 0x1ffffffff;
                      uVar41 = (int)uVar56 + uVar41;
                      iVar14 = (uint)(byte)(uVar56 >> 0x20) + iVar14;
                      iVar22 = (uint)(auVar62[0] & 1) + iVar22;
                      iVar43 = (uint)(auVar62[8] & 1) + iVar43;
                      iVar44 = (int)uVar53 + iVar44;
                      iVar46 = (uint)(byte)(uVar53 >> 0x20) + iVar46;
                      iVar47 = (uint)(auVar55[0] & 1) + iVar47;
                      iVar48 = (uint)(auVar55[8] & 1) + iVar48;
                    } while (uVar29 != uVar32);
                    uVar41 = iVar44 + uVar41 + iVar46 + iVar14 + iVar47 + iVar22 + iVar48 + iVar43;
                    if (uVar29 == uVar28) goto LAB_00880c38;
                  }
                  do {
                    uVar34 = uVar29 >> 6;
                    uVar32 = uVar29 & 0x3f;
                    uVar29 = uVar29 + 1;
                    uVar41 = ((uint)(*(ulong *)(local_118 + uVar34 * 8) >> uVar32) & 1) + uVar41;
                  } while (uVar28 != uVar29);
                }
LAB_00880c38:
                if ((*(char *)((long)puVar40 + 0x1a) == '\x01') && (1 < uVar41)) {
                  uVar17 = FUN_00885340(uVar41);
                  if ((uint)(1 << (ulong)(uVar17 & 0x1f)) < uVar41) {
                    uVar17 = uVar17 + 1;
                  }
                  iVar14 = FUN_007d60c4(&local_f0);
                  uVar18 = uVar20;
                  if (iVar14 != 0) {
                    for (; uVar18 != 0; uVar18 = uVar18 - 1) {
                      FUN_007d6120(&local_f0,uVar17);
                    }
                  }
                  if (uVar16 == 0) {
                    iVar14 = FUN_007d60c4(&local_f0);
                    uVar18 = uVar21;
                    if (iVar14 != 0) {
                      for (; uVar18 != 0; uVar18 = uVar18 - 1) {
                        FUN_007d6120(&local_f0,uVar17);
                      }
                    }
                    goto LAB_00880cd0;
                  }
LAB_00880cc8:
                  bVar12 = false;
                }
                else {
                  if (uVar16 != 0) goto LAB_00880cc8;
LAB_00880cd0:
                  bVar12 = true;
                  FUN_007d6120(&local_f0,1);
                }
                if (*(char *)((long)puVar40 + 5) == '\x01') {
                  FUN_007d6120(&local_f0,1);
                }
                if (bVar13) {
                  bVar13 = bVar12;
                  if (bVar12 != false) {
                    iVar14 = FUN_007d60c4(&local_f0);
                    bVar13 = iVar14 != 0;
                    if ((iVar14 != 0) && (uVar20 != 0)) {
                      uVar17 = FUN_007d6508(&local_f0);
                      uVar19 = (undefined4)((ulong)in_stack_fffffffffffff660 >> 0x20);
                      local_e8._0_5_ = CONCAT14(1,(uint)local_e8);
                      if (((int)(uint)local_e8 < 0) || (uVar20 < uVar17)) {
                        uVar28 = FUN_004022fc();
                        if ((uVar28 & 1) == 0) {
                          uStack_930 = 0xb5a;
                          pcVar24 = 
                          "Error in stream: invalid value, expected collocated_ref_idx to be";
                          ppcStack_950 = &local_938;
                          local_958 = 
                          "Error in stream: invalid value, expected collocated_ref_idx to be";
                          local_928 = (char **)&local_98;
                          local_948 = " in range [";
                          local_f8 = &local_948;
                          local_100 = (char *)0x0;
                          uVar25 = 0;
                          puVar23 = &DAT_00223e13;
                          uVar27 = CONCAT44(uVar19,uVar17);
                          uVar37 = 0xb5a;
                          uVar21 = uVar20;
                          goto LAB_00880744;
                        }
                        goto LAB_00880748;
                      }
                      goto LAB_00880df8;
                    }
                  }
                  if ((bVar13 != false) || (uVar21 == 0)) goto LAB_00880df8;
                  uVar17 = FUN_007d6508(&local_f0);
                  uVar19 = (undefined4)((ulong)in_stack_fffffffffffff660 >> 0x20);
                  if (uVar16 != 0) goto LAB_00880df8;
                  local_e8._0_5_ = CONCAT14(1,(uint)local_e8);
                  if (((int)(uint)local_e8 < 0) || (uVar21 < uVar17)) {
                    uVar28 = FUN_004022fc();
                    if ((uVar28 & 1) == 0) {
                      uStack_930 = 0xb7a;
                      pcVar24 = "Error in stream: invalid value, expected collocated_ref_idx to be";
                      ppcStack_950 = &local_938;
                      local_958 = 
                      "Error in stream: invalid value, expected collocated_ref_idx to be";
                      local_928 = (char **)&local_98;
                      local_948 = " in range [";
                      local_f8 = &local_948;
                      local_100 = (char *)0x0;
                      uVar25 = 0;
                      puVar23 = &DAT_00223e13;
                      uVar27 = CONCAT44(uVar19,uVar17);
                      uVar37 = 0xb7a;
                      goto LAB_00880744;
                    }
                    goto LAB_00880748;
                  }
LAB_00880e08:
                  uVar19 = (undefined4)((ulong)in_stack_fffffffffffff660 >> 0x20);
                  if ((bVar12 & *(byte *)((long)puVar40 + 0x19)) == 1) goto LAB_00880e1c;
LAB_00881e08:
                  uVar16 = FUN_007d6508(&local_f0);
                  local_e8._0_5_ = CONCAT14(1,(uint)local_e8);
                  if ((uVar16 < 5) && (-1 < (int)(uint)local_e8)) goto LAB_00881e2c;
                  uVar28 = FUN_004022fc();
                  if ((uVar28 & 1) != 0) goto LAB_00880748;
                  uStack_930 = 0xefa;
                  pcVar24 = 
                  "Error in stream: invalid value, expected 5 - five_minus_max_num_merge_cand to be"
                  ;
                  local_928 = (char **)&local_a8;
                  local_98._0_1_ = 0x54;
                  local_98._1_1_ = 0x6e;
                  local_98._2_1_ = 0x1a;
                  local_98._3_1_ = 0;
                  local_98._4_1_ = 0;
                  local_98._5_1_ = 0;
                  local_98._6_1_ = 0;
                  local_98._7_1_ = 0;
                  local_90 = SUB81(&local_938,0);
                  local_8f = SUB81((ulong)&local_938 >> 8,0);
                  local_8e = SUB81((ulong)&local_938 >> 0x10,0);
                  local_8d = SUB81((ulong)&local_938 >> 0x18,0);
                  local_8c = SUB81((ulong)&local_938 >> 0x20,0);
                  local_8b = SUB81((ulong)&local_938 >> 0x28,0);
                  local_8a = SUB81((ulong)&local_938 >> 0x30,0);
                  uStack_89 = (undefined1)((ulong)&local_938 >> 0x38);
                  ppcStack_950 = (char **)&local_98;
                  local_958 = " in range [";
                  local_948 = (char *)0x1;
                  local_f8 = &local_948;
                  local_100 = ":";
                  puVar23 = &DAT_00223e08;
                  uVar27 = CONCAT44(uVar19,5 - uVar16);
                  uVar37 = 0xefa;
                  uVar25 = 1;
                  uVar21 = 5;
                }
                else {
LAB_00880df8:
                  if ((uVar16 != 1) || ((puVar40[6] & 1) == 0)) goto LAB_00880e08;
LAB_00880e1c:
                  uVar16 = FUN_007d6508(&local_f0);
                  uVar19 = (undefined4)((ulong)in_stack_fffffffffffff660 >> 0x20);
                  local_e8._0_5_ = CONCAT14(1,(uint)local_e8);
                  if ((7 < uVar16) || ((int)(uint)local_e8 < 0)) {
                    uVar28 = FUN_004022fc();
                    if ((uVar28 & 1) == 0) {
                      uStack_930 = 0xbc2;
                      pcVar24 = 
                      "Error in stream: invalid value, expected luma_log2_weight_denom to be";
                      local_958 = 
                      "Error in stream: invalid value, expected luma_log2_weight_denom to be";
                      puVar23 = &DAT_00223e08;
                      uVar37 = 0xbc2;
                      uVar27 = CONCAT44(uVar19,uVar16);
LAB_00881444:
                      local_f8 = &local_948;
                      local_928 = (char **)&local_98;
                      ppcStack_950 = &local_938;
                      local_100 = (char *)0x0;
                      local_948 = " in range [";
                      uVar25 = 0;
                      uVar21 = 7;
                      goto LAB_00880744;
                    }
                    goto LAB_00880748;
                  }
                  if (puVar39[4] == 0) {
                    bVar13 = true;
                    if (puVar39[3] == 0) goto LAB_00880e50;
                    iVar14 = FUN_007d6670(&local_f0);
                    uVar19 = (undefined4)((ulong)in_stack_fffffffffffff660 >> 0x20);
                    local_e8._0_5_ = CONCAT14(1,(uint)local_e8);
                    if ((iVar14 + 7U < 0xf) && (-1 < (int)(uint)local_e8)) {
                      if (iVar14 + uVar16 < 8) {
                        bVar13 = false;
                        goto LAB_00880e50;
                      }
                      uVar28 = FUN_004022fc();
                      if ((uVar28 & 1) == 0) {
                        uStack_930 = 0xc4a;
                        pcVar24 = 
                        "Error in stream: invalid value, expected chroma_log2_weight_denom to be";
                        local_958 = 
                        "Error in stream: invalid value, expected chroma_log2_weight_denom to be";
                        puVar23 = &DAT_00223e29;
                        uVar27 = CONCAT44(uVar19,iVar14 + uVar16);
                        uVar37 = 0xc4a;
                        goto LAB_00881444;
                      }
                      goto LAB_00880748;
                    }
                    uVar28 = FUN_004022fc();
                    if ((uVar28 & 1) != 0) goto LAB_00880748;
                    uStack_930 = 0xc32;
                    pcVar24 = 
                    "Error in stream: invalid value, expected delta_chroma_log2_weight_denom to be";
                    local_958 = 
                    "Error in stream: invalid value, expected delta_chroma_log2_weight_denom to be";
                    local_928 = (char **)&local_98;
                    local_100 = (char *)0xfffffff9;
                    uVar27 = CONCAT44(uVar19,iVar14);
                    uVar37 = 0xc32;
                    uVar25 = 0xfffffff9;
                    uVar21 = 7;
                  }
                  else {
                    bVar13 = true;
LAB_00880e50:
                    local_8f = false;
                    local_8e = false;
                    local_8d = false;
                    local_8c = false;
                    local_8b = false;
                    local_8a = false;
                    local_98._1_1_ = 0;
                    local_98._2_1_ = 0;
                    local_98._3_1_ = 0;
                    local_98._4_1_ = 0;
                    local_98._5_1_ = 0;
                    local_98._6_1_ = 0;
                    local_98._7_1_ = 0;
                    local_90 = false;
                    uVar16 = uVar20 + 1;
                    bStack_a0 = false;
                    bStack_9f = false;
                    bStack_9e = false;
                    bStack_9d = false;
                    bStack_9c = false;
                    bStack_9b = false;
                    bStack_9a = false;
                    local_a8._0_1_ = 0;
                    local_a8._1_1_ = 0;
                    local_a8._2_1_ = 0;
                    local_a8._3_1_ = 0;
                    local_a8._4_1_ = 0;
                    local_a8._5_1_ = 0;
                    local_a8._6_1_ = 0;
                    local_a8._7_1_ = 0;
                    iVar14 = FUN_007d60c4(&local_f0);
                    local_98._0_1_ = iVar14 != 0;
                    if (uVar20 != 0) {
                      iVar14 = FUN_007d60c4(&local_f0);
                      local_98._1_1_ = iVar14 != 0;
                      if (uVar16 == 2) goto LAB_00881044;
                      iVar14 = FUN_007d60c4(&local_f0);
                      local_98._2_1_ = iVar14 != 0;
                      if (uVar16 == 3) goto LAB_00881044;
                      iVar14 = FUN_007d60c4(&local_f0);
                      local_98._3_1_ = iVar14 != 0;
                      if (uVar16 == 4) goto LAB_00881044;
                      iVar14 = FUN_007d60c4(&local_f0);
                      local_98._4_1_ = iVar14 != 0;
                      if (uVar16 == 5) goto LAB_00881044;
                      iVar14 = FUN_007d60c4(&local_f0);
                      local_98._5_1_ = iVar14 != 0;
                      if (uVar16 == 6) goto LAB_00881044;
                      iVar14 = FUN_007d60c4(&local_f0);
                      local_98._6_1_ = iVar14 != 0;
                      if (uVar16 == 7) goto LAB_00881044;
                      iVar14 = FUN_007d60c4(&local_f0);
                      local_98._7_1_ = iVar14 != 0;
                      if (uVar16 == 8) goto LAB_00881044;
                      iVar14 = FUN_007d60c4(&local_f0);
                      local_90 = iVar14 != 0;
                      if (uVar16 == 9) goto LAB_00881044;
                      iVar14 = FUN_007d60c4(&local_f0);
                      local_8f = iVar14 != 0;
                      if (uVar16 == 10) goto LAB_00881044;
                      iVar14 = FUN_007d60c4(&local_f0);
                      local_8e = iVar14 != 0;
                      if (uVar16 == 0xb) goto LAB_00881044;
                      iVar14 = FUN_007d60c4(&local_f0);
                      local_8d = iVar14 != 0;
                      if (uVar16 == 0xc) goto LAB_00881044;
                      iVar14 = FUN_007d60c4(&local_f0);
                      local_8c = iVar14 != 0;
                      if (uVar16 == 0xd) goto LAB_00881044;
                      iVar14 = FUN_007d60c4(&local_f0);
                      local_8b = iVar14 != 0;
                      if (uVar16 == 0xe) goto LAB_00881044;
                      iVar14 = FUN_007d60c4(&local_f0);
                      local_8a = iVar14 != 0;
                      if (uVar16 == 0xf) goto LAB_00881044;
LAB_00881a04:
                      FUN_007d60c4(&local_f0);
LAB_00881a0c:
                    /* WARNING: Does not return */
                      pcVar11 = (code *)SoftwareBreakpoint(0x5512,0x881a10);
                      (*pcVar11)();
                    }
LAB_00881044:
                    if (!bVar13) {
                      iVar14 = FUN_007d60c4(&local_f0);
                      local_a8._0_1_ = iVar14 != 0;
                      if (uVar20 != 0) {
                        iVar14 = FUN_007d60c4(&local_f0);
                        local_a8._1_1_ = iVar14 != 0;
                        if (uVar16 != 2) {
                          iVar14 = FUN_007d60c4(&local_f0);
                          local_a8._2_1_ = iVar14 != 0;
                          if (uVar16 != 3) {
                            iVar14 = FUN_007d60c4(&local_f0);
                            local_a8._3_1_ = iVar14 != 0;
                            if (uVar16 != 4) {
                              iVar14 = FUN_007d60c4(&local_f0);
                              local_a8._4_1_ = iVar14 != 0;
                              if (uVar16 != 5) {
                                iVar14 = FUN_007d60c4(&local_f0);
                                local_a8._5_1_ = iVar14 != 0;
                                if (uVar16 != 6) {
                                  iVar14 = FUN_007d60c4(&local_f0);
                                  local_a8._6_1_ = iVar14 != 0;
                                  if (uVar16 != 7) {
                                    iVar14 = FUN_007d60c4(&local_f0);
                                    local_a8._7_1_ = iVar14 != 0;
                                    if (uVar16 != 8) {
                                      iVar14 = FUN_007d60c4(&local_f0);
                                      bStack_a0 = iVar14 != 0;
                                      if (uVar16 != 9) {
                                        iVar14 = FUN_007d60c4(&local_f0);
                                        bStack_9f = iVar14 != 0;
                                        if (uVar16 != 10) {
                                          iVar14 = FUN_007d60c4(&local_f0);
                                          bStack_9e = iVar14 != 0;
                                          if (uVar16 != 0xb) {
                                            iVar14 = FUN_007d60c4(&local_f0);
                                            bStack_9d = iVar14 != 0;
                                            if (uVar16 != 0xc) {
                                              iVar14 = FUN_007d60c4(&local_f0);
                                              bStack_9c = iVar14 != 0;
                                              if (uVar16 != 0xd) {
                                                iVar14 = FUN_007d60c4(&local_f0);
                                                bStack_9b = iVar14 != 0;
                                                if (uVar16 != 0xe) {
                                                  iVar14 = FUN_007d60c4(&local_f0);
                                                  bStack_9a = iVar14 != 0;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    uVar28 = 0;
                    do {
                      if (uVar28 == 0xf) goto LAB_00881a0c;
                      if (*(char *)((long)&local_98 + uVar28) == '\x01') {
                        iVar14 = FUN_007d6670(&local_f0);
                        uVar19 = (undefined4)((ulong)in_stack_fffffffffffff660 >> 0x20);
                        local_e8._0_5_ = CONCAT14(1,(uint)local_e8);
                        if ((iVar14 != (char)iVar14) || ((int)(uint)local_e8 < 0)) {
                          uVar28 = FUN_004022fc();
                          if ((uVar28 & 1) != 0) goto LAB_00880748;
                          uStack_930 = 0xd12;
                          pcVar24 = 
                          "Error in stream: invalid value, expected delta_luma_weight_l0[i] to be";
                          local_958 = 
                          "Error in stream: invalid value, expected delta_luma_weight_l0[i] to be";
                          local_928 = (char **)&local_b8;
                          uVar37 = 0xd12;
                          uVar27 = CONCAT44(uVar19,iVar14);
                          goto LAB_00881bb8;
                        }
                        iVar14 = FUN_007d6670(&local_f0);
                        uVar19 = (undefined4)((ulong)in_stack_fffffffffffff660 >> 0x20);
                        local_e8._0_5_ = CONCAT14(1,(uint)local_e8);
                        if ((iVar14 != (char)iVar14) || ((int)(uint)local_e8 < 0)) {
                          uVar28 = FUN_004022fc();
                          if ((uVar28 & 1) != 0) goto LAB_00880748;
                          uStack_930 = 0xd2a;
                          pcVar24 = 
                          "Error in stream: invalid value, expected luma_offset_l0[i] to be";
                          local_958 = 
                          "Error in stream: invalid value, expected luma_offset_l0[i] to be";
                          local_928 = (char **)&local_b8;
                          uVar27 = CONCAT44(uVar19,iVar14);
                          uVar37 = 0xd2a;
                          goto LAB_00881bb8;
                        }
                      }
                      if (*(char *)((long)&local_a8 + uVar28) == '\x01') {
                        iVar14 = FUN_007d6670(&local_f0);
                        uVar19 = (undefined4)((ulong)in_stack_fffffffffffff660 >> 0x20);
                        local_e8._0_5_ = CONCAT14(1,(uint)local_e8);
                        if ((iVar14 == (char)iVar14) && (-1 < (int)(uint)local_e8)) {
                          iVar14 = FUN_007d6670(&local_f0);
                          uVar19 = (undefined4)((ulong)in_stack_fffffffffffff660 >> 0x20);
                          local_e8._0_5_ = CONCAT14(1,(uint)local_e8);
                          if ((0xfffffbff < iVar14 - 0x200U) && (-1 < (int)(uint)local_e8)) {
                            iVar14 = FUN_007d6670(&local_f0);
                            uVar19 = (undefined4)((ulong)in_stack_fffffffffffff660 >> 0x20);
                            local_e8._0_5_ = CONCAT14(1,(uint)local_e8);
                            if ((iVar14 != (char)iVar14) || ((int)(uint)local_e8 < 0))
                            goto LAB_008815c4;
                            iVar14 = FUN_007d6670(&local_f0);
                            uVar19 = (undefined4)((ulong)in_stack_fffffffffffff660 >> 0x20);
                            local_e8._0_5_ = CONCAT14(1,(uint)local_e8);
                            if ((0xfffffbff < iVar14 - 0x200U) && (-1 < (int)(uint)local_e8))
                            goto LAB_0088122c;
                          }
                          uVar28 = FUN_004022fc();
                          if ((uVar28 & 1) != 0) goto LAB_00880748;
                          uStack_930 = 0xd82;
                          pcVar24 = 
                          "Error in stream: invalid value, expected delta_chroma_offset_l0[i][j] to be"
                          ;
                          local_958 = 
                          "Error in stream: invalid value, expected delta_chroma_offset_l0[i][j] to be"
                          ;
                          local_928 = (char **)&local_b8;
                          uVar27 = CONCAT44(uVar19,iVar14);
                          uVar37 = 0xd82;
                          goto LAB_008813b0;
                        }
LAB_008815c4:
                        uVar28 = FUN_004022fc();
                        if ((uVar28 & 1) != 0) goto LAB_00880748;
                        uStack_930 = 0xd5a;
                        pcVar24 = 
                        "Error in stream: invalid value, expected delta_chroma_weight_l0[i][j] to be"
                        ;
                        local_958 = 
                        "Error in stream: invalid value, expected delta_chroma_weight_l0[i][j] to be"
                        ;
                        local_928 = (char **)&local_b8;
                        uVar27 = CONCAT44(uVar19,iVar14);
                        uVar37 = 0xd5a;
                        goto LAB_00881bb8;
                      }
LAB_0088122c:
                      uVar19 = (undefined4)((ulong)in_stack_fffffffffffff660 >> 0x20);
                      uVar28 = uVar28 + 1;
                    } while (uVar16 != uVar28);
                    if (bVar12 == false) goto LAB_00881e08;
                    bStack_b0 = false;
                    bStack_af = false;
                    bStack_ae = false;
                    bStack_ad = false;
                    bStack_ac = false;
                    bStack_ab = false;
                    bStack_aa = false;
                    local_b8._0_1_ = 0;
                    local_b8._1_1_ = 0;
                    local_b8._2_1_ = 0;
                    local_b8._3_1_ = 0;
                    local_b8._4_1_ = 0;
                    local_b8._5_1_ = 0;
                    local_b8._6_1_ = 0;
                    local_b8._7_1_ = 0;
                    local_c8[8] = false;
                    local_c8[9] = false;
                    local_c8[10] = false;
                    local_c8[0xb] = false;
                    local_c8[0xc] = false;
                    local_c8[0xd] = false;
                    local_c8[0xe] = false;
                    local_c8[0] = false;
                    local_c8[1] = false;
                    local_c8[2] = false;
                    local_c8[3] = false;
                    local_c8[4] = false;
                    local_c8[5] = false;
                    local_c8[6] = false;
                    local_c8[7] = false;
                    if (uVar21 != 0) {
                      iVar14 = FUN_007d60c4(&local_f0);
                      local_b8._0_1_ = iVar14 != 0;
                      if (uVar21 != 1) {
                        iVar14 = FUN_007d60c4(&local_f0);
                        local_b8._1_1_ = iVar14 != 0;
                        if (uVar21 != 2) {
                          iVar14 = FUN_007d60c4(&local_f0);
                          local_b8._2_1_ = iVar14 != 0;
                          if (uVar21 != 3) {
                            iVar14 = FUN_007d60c4(&local_f0);
                            local_b8._3_1_ = iVar14 != 0;
                            if (uVar21 != 4) {
                              iVar14 = FUN_007d60c4(&local_f0);
                              local_b8._4_1_ = iVar14 != 0;
                              if (uVar21 != 5) {
                                iVar14 = FUN_007d60c4(&local_f0);
                                local_b8._5_1_ = iVar14 != 0;
                                if (uVar21 != 6) {
                                  iVar14 = FUN_007d60c4(&local_f0);
                                  local_b8._6_1_ = iVar14 != 0;
                                  if (uVar21 != 7) {
                                    iVar14 = FUN_007d60c4(&local_f0);
                                    local_b8._7_1_ = iVar14 != 0;
                                    if (uVar21 != 8) {
                                      iVar14 = FUN_007d60c4(&local_f0);
                                      bStack_b0 = iVar14 != 0;
                                      if (uVar21 != 9) {
                                        iVar14 = FUN_007d60c4(&local_f0);
                                        bStack_af = iVar14 != 0;
                                        if (uVar21 != 10) {
                                          iVar14 = FUN_007d60c4(&local_f0);
                                          bStack_ae = iVar14 != 0;
                                          if (uVar21 != 0xb) {
                                            iVar14 = FUN_007d60c4(&local_f0);
                                            bStack_ad = iVar14 != 0;
                                            if (uVar21 != 0xc) {
                                              iVar14 = FUN_007d60c4(&local_f0);
                                              bStack_ac = iVar14 != 0;
                                              if (uVar21 != 0xd) {
                                                iVar14 = FUN_007d60c4(&local_f0);
                                                bStack_ab = iVar14 != 0;
                                                if (uVar21 != 0xe) {
                                                  iVar14 = FUN_007d60c4(&local_f0);
                                                  bStack_aa = iVar14 != 0;
                                                  if (uVar21 != 0xf) goto LAB_00881a04;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    uVar16 = uVar21 + 1;
                    if (!bVar13) {
                      iVar14 = FUN_007d60c4(&local_f0);
                      local_c8[0] = iVar14 != 0;
                      if (uVar21 == 0) {
                        uVar16 = 1;
                      }
                      else {
                        iVar14 = FUN_007d60c4(&local_f0);
                        local_c8[1] = iVar14 != 0;
                        if (uVar16 != 2) {
                          iVar14 = FUN_007d60c4(&local_f0);
                          local_c8[2] = iVar14 != 0;
                          if (uVar16 != 3) {
                            iVar14 = FUN_007d60c4(&local_f0);
                            local_c8[3] = iVar14 != 0;
                            if (uVar16 != 4) {
                              iVar14 = FUN_007d60c4(&local_f0);
                              local_c8[4] = iVar14 != 0;
                              if (uVar16 != 5) {
                                iVar14 = FUN_007d60c4(&local_f0);
                                local_c8[5] = iVar14 != 0;
                                if (uVar16 != 6) {
                                  iVar14 = FUN_007d60c4(&local_f0);
                                  local_c8[6] = iVar14 != 0;
                                  if (uVar16 != 7) {
                                    iVar14 = FUN_007d60c4(&local_f0);
                                    local_c8[7] = iVar14 != 0;
                                    if (uVar16 != 8) {
                                      iVar14 = FUN_007d60c4(&local_f0);
                                      local_c8[8] = iVar14 != 0;
                                      if (uVar16 != 9) {
                                        iVar14 = FUN_007d60c4(&local_f0);
                                        local_c8[9] = iVar14 != 0;
                                        if (uVar16 != 10) {
                                          iVar14 = FUN_007d60c4(&local_f0);
                                          local_c8[10] = iVar14 != 0;
                                          if (uVar16 != 0xb) {
                                            iVar14 = FUN_007d60c4(&local_f0);
                                            local_c8[0xb] = iVar14 != 0;
                                            if (uVar16 != 0xc) {
                                              iVar14 = FUN_007d60c4(&local_f0);
                                              local_c8[0xc] = iVar14 != 0;
                                              if (uVar16 != 0xd) {
                                                iVar14 = FUN_007d60c4(&local_f0);
                                                local_c8[0xd] = iVar14 != 0;
                                                if (uVar16 != 0xe) {
                                                  iVar14 = FUN_007d60c4(&local_f0);
                                                  local_c8[0xe] = iVar14 != 0;
                                                  if (uVar16 != 0xf) goto LAB_00881a04;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    uVar28 = 0;
LAB_00881c8c:
                    if (uVar28 == 0xf) goto LAB_00881a0c;
                    if (*(char *)((long)&local_b8 + uVar28) == '\x01') {
                      iVar14 = FUN_007d6670(&local_f0);
                      uVar19 = (undefined4)((ulong)in_stack_fffffffffffff660 >> 0x20);
                      local_e8._0_5_ = CONCAT14(1,(uint)local_e8);
                      if ((iVar14 != (char)iVar14) || ((int)(uint)local_e8 < 0)) {
                        uVar28 = FUN_004022fc();
                        if ((uVar28 & 1) != 0) goto LAB_00880748;
                        uStack_930 = 0xe3a;
                        pcVar24 = 
                        "Error in stream: invalid value, expected delta_luma_weight_l1[i] to be";
                        local_958 = 
                        "Error in stream: invalid value, expected delta_luma_weight_l1[i] to be";
                        local_928 = (char **)&uStack_959;
                        uVar27 = CONCAT44(uVar19,iVar14);
                        uVar37 = 0xe3a;
                        goto LAB_00881bb8;
                      }
                      iVar14 = FUN_007d6670(&local_f0);
                      uVar19 = (undefined4)((ulong)in_stack_fffffffffffff660 >> 0x20);
                      local_e8._0_5_ = CONCAT14(1,(uint)local_e8);
                      if ((iVar14 != (char)iVar14) || ((int)(uint)local_e8 < 0)) {
                        uVar28 = FUN_004022fc();
                        if ((uVar28 & 1) != 0) goto LAB_00880748;
                        uStack_930 = 0xe52;
                        pcVar24 = "Error in stream: invalid value, expected luma_offset_l1[i] to be"
                        ;
                        local_958 = 
                        "Error in stream: invalid value, expected luma_offset_l1[i] to be";
                        local_928 = (char **)&uStack_959;
                        uVar27 = CONCAT44(uVar19,iVar14);
                        uVar37 = 0xe52;
                        goto LAB_00881bb8;
                      }
                    }
                    if (local_c8[uVar28] != true) goto LAB_00881c80;
                    iVar14 = FUN_007d6670(&local_f0);
                    uVar19 = (undefined4)((ulong)in_stack_fffffffffffff660 >> 0x20);
                    local_e8._0_5_ = CONCAT14(1,(uint)local_e8);
                    if ((iVar14 == (char)iVar14) && (-1 < (int)(uint)local_e8)) {
                      iVar14 = FUN_007d6670(&local_f0);
                      uVar19 = (undefined4)((ulong)in_stack_fffffffffffff660 >> 0x20);
                      local_e8._0_5_ = CONCAT14(1,(uint)local_e8);
                      if ((0xfffffbff < iVar14 - 0x200U) && (-1 < (int)(uint)local_e8)) {
                        iVar14 = FUN_007d6670(&local_f0);
                        uVar19 = (undefined4)((ulong)in_stack_fffffffffffff660 >> 0x20);
                        local_e8._0_5_ = CONCAT14(1,(uint)local_e8);
                        if ((iVar14 != (char)iVar14) || ((int)(uint)local_e8 < 0))
                        goto LAB_00882038;
                        iVar14 = FUN_007d6670(&local_f0);
                        uVar19 = (undefined4)((ulong)in_stack_fffffffffffff660 >> 0x20);
                        local_e8._0_5_ = CONCAT14(1,(uint)local_e8);
                        if ((0xfffffbff < iVar14 - 0x200U) && (-1 < (int)(uint)local_e8))
                        goto LAB_00881c80;
                      }
                      uVar28 = FUN_004022fc();
                      if ((uVar28 & 1) == 0) {
                        uStack_930 = 0xeaa;
                        pcVar24 = 
                        "Error in stream: invalid value, expected delta_chroma_offset_l1[i][j] to be"
                        ;
                        local_958 = 
                        "Error in stream: invalid value, expected delta_chroma_offset_l1[i][j] to be"
                        ;
                        local_928 = (char **)&uStack_959;
                        uVar37 = 0xeaa;
                        uVar27 = CONCAT44(uVar19,iVar14);
LAB_008813b0:
                        local_100 = (char *)0xfffffe00;
                        uVar25 = 0xfffffe00;
                        uVar21 = 0x1ff;
                        goto LAB_00881bc0;
                      }
                      goto LAB_00880748;
                    }
LAB_00882038:
                    uVar28 = FUN_004022fc();
                    if ((uVar28 & 1) != 0) goto LAB_00880748;
                    uStack_930 = 0xe82;
                    pcVar24 = 
                    "Error in stream: invalid value, expected delta_chroma_weight_l1[i][j] to be";
                    local_958 = 
                    "Error in stream: invalid value, expected delta_chroma_weight_l1[i][j] to be";
                    local_928 = (char **)&uStack_959;
                    uVar27 = CONCAT44(uVar19,iVar14);
                    uVar37 = 0xe82;
LAB_00881bb8:
                    local_100 = (char *)0xffffff80;
                    uVar25 = 0xffffff80;
                    uVar21 = 0x7f;
                  }
LAB_00881bc0:
                  local_f8 = &local_948;
                  ppcStack_950 = &local_938;
                  local_948 = " in range [";
                  puVar23 = &DAT_00223e29;
                }
LAB_00880744:
                ppcStack_940 = &local_958;
                local_938 = "../../common_video/h265/h265_bitstream_parser.cc";
                FUN_00623bb0(puVar23,"../../common_video/h265/h265_bitstream_parser.cc",uVar37,
                             pcVar24," in range [",uVar25,&DAT_001ca603,uVar21,&DAT_0019fa9e,
                             " found ",uVar27," instead");
              }
              else {
                uVar28 = FUN_004022fc();
                if ((uVar28 & 1) == 0) {
                  uStack_930 = 0x95a;
                  pcVar24 = 
                  "Error in stream: invalid value, expected ref_pic_set->num_positive_pics to be";
                  local_98._0_1_ = 8;
                  local_98._1_1_ = 0xe2;
                  local_98._2_1_ = 0x19;
                  local_98._3_1_ = 0;
                  local_98._4_1_ = 0;
                  local_98._5_1_ = 0;
                  local_98._6_1_ = 0;
                  local_98._7_1_ = 0;
                  local_90 = SUB81(&local_938,0);
                  local_8f = SUB81((ulong)&local_938 >> 8,0);
                  local_8e = SUB81((ulong)&local_938 >> 0x10,0);
                  local_8d = SUB81((ulong)&local_938 >> 0x18,0);
                  local_8c = SUB81((ulong)&local_938 >> 0x20,0);
                  local_8b = SUB81((ulong)&local_938 >> 0x28,0);
                  local_8a = SUB81((ulong)&local_938 >> 0x30,0);
                  uStack_89 = (undefined1)((ulong)&local_938 >> 0x38);
                  local_100 = ":";
                  local_f8 = &local_948;
                  uVar37 = 0x95a;
                  uVar15 = puVar2[1];
                  goto LAB_0088068c;
                }
              }
            }
          }
          else {
            uVar20 = FUN_007d6508(&local_f0);
            uVar19 = (undefined4)((ulong)in_stack_fffffffffffff660 >> 0x20);
            local_e8._0_5_ = CONCAT14(1,(uint)local_e8);
            if ((uVar20 < 0xf) && (-1 < (int)(uint)local_e8)) {
              if (uVar16 == 0) {
                uVar21 = FUN_007d6508(&local_f0);
                uVar19 = (undefined4)((ulong)in_stack_fffffffffffff660 >> 0x20);
                local_e8._0_5_ = CONCAT14(1,(uint)local_e8);
                if ((0xe < uVar21) || ((int)(uint)local_e8 < 0)) {
                  uVar28 = FUN_004022fc();
                  if ((uVar28 & 1) == 0) {
                    uStack_930 = 0x8a2;
                    pcVar24 = 
                    "Error in stream: invalid value, expected num_ref_idx_l1_active_minus1 to be";
                    local_958 = 
                    "Error in stream: invalid value, expected num_ref_idx_l1_active_minus1 to be";
                    uVar27 = CONCAT44(uVar19,uVar21);
                    uVar37 = 0x8a2;
                    goto LAB_0088073c;
                  }
                  goto LAB_00880748;
                }
              }
              goto LAB_008805b0;
            }
            uVar28 = FUN_004022fc();
            if ((uVar28 & 1) == 0) {
              uStack_930 = 0x87a;
              pcVar24 = 
              "Error in stream: invalid value, expected num_ref_idx_l0_active_minus1 to be";
              local_958 = 
              "Error in stream: invalid value, expected num_ref_idx_l0_active_minus1 to be";
              uVar37 = 0x87a;
              uVar27 = CONCAT44(uVar19,uVar20);
LAB_0088073c:
              local_f8 = &local_948;
              local_928 = (char **)&local_98;
              ppcStack_950 = &local_938;
              local_100 = (char *)0x0;
              local_948 = " in range [";
              puVar23 = &DAT_00223e08;
              uVar25 = 0;
              uVar21 = 0xe;
              goto LAB_00880744;
            }
          }
LAB_00880748:
          if (local_118 != (char *)0x0) {
            operator_delete(local_118);
          }
          goto LAB_0087fc2c;
        }
        if ((char)puVar40[1] == '\x01') {
          iVar14 = FUN_007d60c4(&local_f0);
          bVar12 = iVar14 != 0;
        }
        else {
          bVar12 = false;
        }
        uVar16 = puVar39[0xf] + puVar39[0x10] + 3;
        uVar18 = -1 << (ulong)(uVar16 & 0x1f);
        uVar17 = puVar39[5] >> (ulong)(uVar16 & 0x1f);
        uVar16 = puVar39[6] >> (ulong)(uVar16 & 0x1f);
        if ((puVar39[5] & (uVar18 ^ 0xffffffff)) != 0) {
          uVar17 = uVar17 + 1;
        }
        if ((puVar39[6] & (uVar18 ^ 0xffffffff)) != 0) {
          uVar16 = uVar16 + 1;
        }
        iVar14 = FUN_00885340(uVar16 * uVar17);
        local_e8._0_5_ = CONCAT14(1,(uint)local_e8);
        if ((iVar14 != -1) && (-1 < (int)(uint)local_e8)) {
          FUN_007d6120(&local_f0,iVar14);
          uVar19 = (undefined4)((ulong)in_stack_fffffffffffff660 >> 0x20);
          if (!bVar12) goto LAB_0087fd74;
LAB_00881e40:
          iVar22 = FUN_007d6670(&local_f0);
          iVar14 = -iVar22;
          if (-1 < iVar22) {
            iVar14 = iVar22;
          }
          local_e8._0_5_ = CONCAT14(1,(uint)local_e8);
          if ((iVar14 < 0x34) && (-1 < (int)(uint)local_e8)) {
            iVar14 = iVar22 + 0x1a + puVar40[5];
            if (((int)(iVar14 + puVar40[9]) < 0 == SBORROW4(iVar14,-puVar40[9])) && (iVar14 < 0x34))
            {
              uVar37 = 0;
              *(int *)(param_1 + 0x50) = iVar22;
              *(undefined1 *)(param_1 + 0x54) = 1;
              *(uint *)(param_1 + 0x58) = uVar15;
              *(undefined1 *)(param_1 + 0x5c) = 1;
              local_e8._0_5_ = CONCAT14(1,(uint)local_e8);
              goto joined_r0x0087fc34;
            }
            uVar28 = FUN_004022fc();
            if ((uVar28 & 1) == 0) {
              uStack_930 = 0xf62;
              pcVar24 = 
              "Error in stream: invalid value, expected 26 + pps->init_qp_minus26 + last_slice_qp_delta to be"
              ;
              ppcStack_950 = &local_938;
              local_928 = (char **)&local_98;
              local_958 = 
              "Error in stream: invalid value, expected 26 + pps->init_qp_minus26 + last_slice_qp_delta to be"
              ;
              ppcStack_940 = &local_958;
              local_948 = " in range [";
              local_118 = ":";
              puVar23 = &DAT_00223e29;
              uVar37 = 0xf62;
              pcVar26 = (char *)(ulong)-puVar40[9];
              local_f8 = &local_948;
              uVar27 = 0x33;
              local_528 = 0x33;
              uVar25 = CONCAT44(uVar19,iVar22 + 0x1a + puVar40[5]);
              local_100 = pcVar26;
              goto LAB_0087fc28;
            }
          }
          else {
            uVar28 = FUN_004249b0();
            if ((uVar28 & 1) == 0) {
              FUN_00623bb0(&DAT_001f4e98,"../../common_video/h265/h265_bitstream_parser.cc",0xf3b,
                           "Parsed QP value out of range.");
            }
          }
          goto LAB_0087fc2c;
        }
        uVar28 = FUN_004022fc();
        if ((uVar28 & 1) != 0) goto LAB_0087fc2c;
        pcVar24 = "slice_segment_address_bits != std::numeric_limits<uint32_t>::max()";
        uVar37 = 0x442;
      }
    }
    FUN_00623bb0(&DAT_001f4ed3,"../../common_video/h265/h265_bitstream_parser.cc",uVar37,
                 "Error in stream: invalid value, expected ",pcVar24);
  }
  else {
    uVar28 = FUN_004022fc();
    if ((uVar28 & 1) == 0) {
      uStack_930 = 0x362;
      pcVar24 = "Error in stream: invalid value, expected pps_id to be";
      uVar37 = 0x362;
      uVar27 = 0x3f;
      local_100 = "Error in stream: invalid value, expected pps_id to be";
      uVar25 = CONCAT44(uVar19,uVar15);
LAB_0087fc24:
      local_f8 = &local_938;
      local_928 = &local_948;
      local_118 = " in range [";
      local_528 = 0;
      puVar23 = &DAT_00223e08;
      pcVar26 = (char *)0x0;
LAB_0087fc28:
      local_110 = &local_100;
      ppcStack_520 = &local_118;
      local_938 = "../../common_video/h265/h265_bitstream_parser.cc";
      FUN_00623bb0(puVar23,"../../common_video/h265/h265_bitstream_parser.cc",uVar37,pcVar24,
                   " in range [",pcVar26,&DAT_001ca603,uVar27,&DAT_0019fa9e," found ",uVar25,
                   " instead");
    }
  }
LAB_0087fc2c:
  uVar37 = 1;
joined_r0x0087fc34:
  if (local_e0 != (undefined1 *)0x0) {
    if (puStack_d8 + -1 < puStack_d8 + -(long)local_e0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    puStack_d8 = local_e0;
    operator_delete(local_e0);
  }
  if (*(long *)(lVar3 + 0x28) == local_88) {
    return uVar37;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00881c80:
  uVar19 = (undefined4)((ulong)in_stack_fffffffffffff660 >> 0x20);
  uVar28 = uVar28 + 1;
  if (uVar16 == uVar28) goto LAB_00881e08;
  goto LAB_00881c8c;
}


// ===== 00882224  FUN_00882224 =====

uint * FUN_00882224(long param_1,uint param_2)

{
  long lVar1;
  uint *puVar2;
  uint *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  puVar2 = *(uint **)(param_1 + 0x20);
  lVar1 = (long)*(uint **)(param_1 + 0x28) - (long)puVar2;
  if (lVar1 != 0) {
    uVar4 = (lVar1 >> 3) * -0x30c30c30c30c30c3;
    puVar3 = puVar2;
    do {
      uVar5 = uVar4 >> 1;
      puVar2 = puVar3 + uVar5 * 0x2a + 0x2a;
      uVar4 = uVar4 + ~uVar5;
      if (param_2 <= puVar3[uVar5 * 0x2a]) {
        puVar2 = puVar3;
        uVar4 = uVar5;
      }
      puVar3 = puVar2;
    } while (uVar4 != 0);
  }
  if ((puVar2 == *(uint **)(param_1 + 0x28)) || (param_2 < *puVar2)) {
    uVar4 = FUN_004022fc();
    if ((uVar4 & 1) == 0) {
      FUN_00623bb0(&DAT_001f6220,"../../common_video/h265/h265_bitstream_parser.cc",0x1022,
                   "Requested a nonexistent SPS id ",param_2);
      puVar2 = (uint *)0x0;
    }
    else {
      puVar2 = (uint *)0x0;
    }
  }
  else {
    puVar2 = puVar2 + 2;
  }
  return puVar2;
}


// ===== 008822e8  FUN_008822e8 =====

void FUN_008822e8(long *param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  ulong *puVar2;
  size_t __n;
  void *__dest;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  void *__src;
  ulong *puVar6;
  ulong uVar7;
  
  uVar7 = param_1[1];
  if (uVar7 <= param_2) {
    uVar3 = uVar7;
    if ((ulong)(param_1[2] * 0x40) < param_2) {
      if ((long)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00632a3c();
      }
      lVar1 = (param_2 - 1 >> 6) + 1;
      __dest = operator_new(lVar1 * 8);
      __src = (void *)*param_1;
      __n = 0;
      if (uVar7 != 0) {
        __n = (uVar7 - 1 >> 3 & 0x1ffffffffffffff8) + 8;
      }
      memmove(__dest,__src,__n);
      *param_1 = (long)__dest;
      param_1[2] = lVar1;
      if (__src != (void *)0x0) {
        operator_delete(__src);
        uVar3 = param_1[1];
      }
    }
    uVar7 = param_2 - uVar7;
    if (uVar7 == 0) goto LAB_008824bc;
    uVar4 = uVar3 & 0x3f;
    puVar2 = (ulong *)(*param_1 + (uVar3 >> 6) * 8);
    puVar6 = puVar2;
    if ((param_3 & 1) == 0) {
      if (uVar4 != 0) {
        uVar5 = 0x40 - uVar4;
        uVar3 = uVar7;
        if (uVar5 <= uVar7) {
          uVar3 = uVar5;
        }
        if (0x3f < (uint)((int)(uVar5 - uVar3) + (int)uVar4)) goto LAB_008824dc;
        uVar7 = uVar7 - uVar3;
        puVar6 = puVar2 + 1;
        *puVar2 = *puVar2 & (((0xffffffffffffffffU >> (uVar5 - uVar3 & 0x3f)) >> uVar4) << uVar4 ^
                            0xffffffffffffffff);
      }
      uVar3 = uVar7 >> 6;
      if (uVar3 != 0) {
        memset(puVar6,0,uVar3 << 3);
      }
      if ((uVar7 & 0x3f) == 0) goto LAB_008824bc;
      if ((uVar7 & 0x3f) == 0) goto LAB_008824dc;
      uVar7 = puVar6[uVar3] &
              (0xffffffffffffffffU >> ((ulong)-((uint)uVar7 & 0x3f) & 0x3f) ^ 0xffffffffffffffff);
    }
    else {
      if (uVar4 != 0) {
        uVar5 = 0x40 - uVar4;
        uVar3 = uVar7;
        if (uVar5 <= uVar7) {
          uVar3 = uVar5;
        }
        if (0x3f < (uint)((int)(uVar5 - uVar3) + (int)uVar4)) goto LAB_008824dc;
        uVar7 = uVar7 - uVar3;
        puVar6 = puVar2 + 1;
        *puVar2 = *puVar2 | ((0xffffffffffffffffU >> (uVar5 - uVar3 & 0x3f)) >> uVar4) << uVar4;
      }
      uVar3 = uVar7 >> 6;
      if (uVar3 != 0) {
        memset(puVar6,0xff,uVar3 << 3);
      }
      if ((uVar7 & 0x3f) == 0) goto LAB_008824bc;
      if ((uVar7 & 0x3f) == 0) {
LAB_008824dc:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__bit_reference:113: libc++ Hardening assertion __ctz + __clz < sizeof(_StorageType) * 8 failed: __fill_masked_range called with invalid range\n"
                  );
      }
      uVar7 = puVar6[uVar3] | 0xffffffffffffffffU >> ((ulong)-((uint)uVar7 & 0x3f) & 0x3f);
    }
    puVar6[uVar3] = uVar7;
  }
LAB_008824bc:
  param_1[1] = param_2;
  return;
}


// ===== 008824f4  FUN_008824f4 =====

void FUN_008824f4(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if ((ulong)(param_1[1] - (long)pvVar1) <= param_1[1] - 1) {
    param_1[1] = pvVar1;
    operator_delete(pvVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 0088254c  FUN_0088254c =====

void FUN_0088254c(long param_1,undefined1 *param_2,ulong param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  uint *puVar7;
  char *pcVar8;
  undefined8 uVar9;
  void *pvVar10;
  undefined1 *puVar11;
  ulong uVar12;
  uint *puVar13;
  undefined1 uStack_201;
  char *local_200;
  char **ppcStack_1f8;
  char *local_1f0;
  char **ppcStack_1e8;
  undefined8 local_1e0;
  char **ppcStack_1d8;
  undefined1 *local_1d0;
  undefined8 local_1c8;
  undefined1 *local_1c0;
  undefined1 *puStack_1b8;
  undefined1 *local_1b0;
  char *local_1a8;
  undefined1 *puStack_1a0;
  undefined1 *local_198;
  undefined5 uStack_190;
  undefined3 uStack_18b;
  undefined5 uStack_188;
  void *local_160;
  void *local_158;
  void *local_140;
  void *local_138;
  char local_108;
  undefined8 local_100;
  undefined1 *puStack_f8;
  undefined1 *local_f0;
  undefined5 uStack_e8;
  undefined3 uStack_e3;
  undefined4 local_e0;
  uint uStack_dc;
  undefined1 *puStack_d8;
  undefined1 *puStack_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined8 uStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  ulong local_60;
  
  if (param_3 == 0) {
    uVar4 = FUN_004022fc();
    if ((uVar4 & 1) != 0) {
      return;
    }
    FUN_00623bb0(&DAT_001f4e98,"../../common_video/h265/h265_bitstream_parser.cc",0x106a,
                 "Empty slice in H265 bitstream.");
    return;
  }
  uVar4 = FUN_0088532c(*param_2);
  uVar3 = (uint)uVar4 & 0xff;
  if (0x31 < uVar3) {
LAB_00882664:
    if (uVar3 == 0x20) {
      local_100 = (char *)CONCAT44(0xaaaaaaaa,(uint)local_100);
      if (param_3 != 1) {
        param_2 = param_2 + 2;
        if (param_3 < 2 || param_3 - 2 == 0) {
          param_2 = (undefined1 *)0x0;
        }
        uVar4 = FUN_008888ac(param_2,param_3 - 2);
        local_100._0_5_ = (undefined5)uVar4;
        uVar5 = local_100;
        if ((uVar4 >> 0x20 & 1) != 0) {
          puVar7 = *(uint **)(param_1 + 8);
          lVar1 = (long)*(uint **)(param_1 + 0x10) - (long)puVar7;
          local_100._0_4_ = (uint)uVar4;
          if (lVar1 != 0) {
            uVar4 = lVar1 >> 3;
            puVar13 = puVar7;
            do {
              uVar12 = uVar4 >> 1;
              puVar7 = puVar13 + uVar12 * 2 + 2;
              uVar4 = uVar4 + ~uVar12;
              if ((uint)local_100 <= puVar13[uVar12 * 2]) {
                puVar7 = puVar13;
                uVar4 = uVar12;
              }
              puVar13 = puVar7;
            } while (uVar4 != 0);
          }
          if ((puVar7 == *(uint **)(param_1 + 0x10)) || ((uint)local_100 < *puVar7)) {
            local_100 = (char *)uVar5;
            FUN_008888a0(&local_1a8);
            puVar7 = (uint *)FUN_00883b8c((long *)(param_1 + 8),puVar7,&local_100,&local_1a8);
          }
          puVar7[1] = (uint)local_100;
          return;
        }
      }
      uVar4 = FUN_004022fc();
      if ((uVar4 & 1) != 0) {
        return;
      }
      FUN_00623bb0(&DAT_001f4e98,"../../common_video/h265/h265_bitstream_parser.cc",0x10d2,
                   "Unable to parse VPS from H265 bitstream.");
      return;
    }
    iVar2 = FUN_0087f9bc(param_1,param_2,param_3);
    if (iVar2 == 0) {
      return;
    }
    uVar4 = FUN_00417e08();
    if ((uVar4 & 1) != 0) {
      return;
    }
    FUN_00623bb0(&DAT_001f6220,"../../common_video/h265/h265_bitstream_parser.cc",0x1269,
                 "Failed to parse bitstream. Error: ",1);
    return;
  }
  if ((0x3018800000000U >> (uVar4 & 0x3f) & 1) != 0) {
    return;
  }
  if ((uVar4 & 0xff) != 0x21) {
    if ((uVar4 & 0xff) != 0x22) goto LAB_00882664;
    puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
    local_100 = &DAT_aaaaaaaaaaaaaaaa;
    uStack_e8 = 0xaaaaaaaaaa;
    uStack_e3 = 0xaaaaaa;
    local_f0 = &DAT_aaaaaaaaaaaaaaaa;
    local_e0 = 0xaaaaaaaa;
    uStack_dc = 0xaaaaaaaa;
    if (param_3 == 1) {
LAB_008825d4:
      uVar4 = FUN_004022fc();
      if ((uVar4 & 1) != 0) {
        return;
      }
      FUN_00623bb0(&DAT_001f4e98,"../../common_video/h265/h265_bitstream_parser.cc",0x11f2,
                   "Unable to parse PPS from H265 bitstream.");
      return;
    }
    param_2 = param_2 + 2;
    lVar1 = param_3 - 2;
    puStack_1b8 = &DAT_aaaaaaaaaaaaaaaa;
    local_1c0 = &DAT_aaaaaaaaaaaaaaaa;
    if (param_3 < 2 || lVar1 == 0) {
      param_2 = (undefined1 *)0x0;
    }
    local_1b0 = &DAT_aaaaaaaaaaaaaaaa;
    thunk_FUN_0087b608(&local_1c0,param_2,lVar1);
    uVar4 = (long)puStack_1b8 - (long)local_1c0;
    local_1d0 = (undefined1 *)0x0;
    if (uVar4 != 0) {
      local_1d0 = local_1c0;
    }
    local_1c8 = &DAT_aaaaaaaaaaaaaaaa;
    if ((uVar4 >> 0x1c & 0x1ffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0061fd88("../../rtc_base/numerics/safe_conversions.h",0x24,
                   "IsValueInRangeForNumericType<Dst>(value)",&DAT_001f5fa0);
    }
    local_1c8 = (undefined1 *)CONCAT44(0xaaaaaa01,(int)uVar4 * 8);
    uVar3 = FUN_007d6508(&local_1d0);
    local_1c8._0_5_ = CONCAT14(1,(int)local_1c8);
    if ((uVar3 < 0x40) && (-1 < (int)local_1c8)) {
      uVar3 = FUN_007d6508(&local_1d0);
      local_1c8._0_5_ = CONCAT14(1,(int)local_1c8);
      if ((uVar3 < 0x10) && (-1 < (int)local_1c8)) {
        uVar5 = FUN_00882224(param_1,uVar3);
        FUN_0088898c(&local_1a8,param_2,lVar1,uVar5);
        puStack_f8 = puStack_1a0;
        local_100 = local_1a8;
        uStack_e8 = uStack_190;
        local_f0 = local_198;
        uStack_e3 = uStack_18b;
        local_e0 = (undefined4)uStack_188;
        uStack_dc._0_1_ = (undefined1)((uint5)uStack_188 >> 0x20);
        FUN_008824f4(&local_1c0);
        if ((uStack_dc & 1) != 0) {
          puVar6 = (undefined8 *)FUN_00882f50(param_1 + 0x38,&uStack_e8);
          *(undefined4 *)(puVar6 + 4) = local_e0;
          puVar6[1] = puStack_f8;
          *puVar6 = local_100;
          puVar6[3] = CONCAT35(uStack_e3,uStack_e8);
          puVar6[2] = local_f0;
          return;
        }
        goto LAB_008825d4;
      }
      uVar4 = FUN_004022fc();
      if ((uVar4 & 1) != 0) goto LAB_00882a84;
      puStack_1a0 = (undefined1 *)0x11c2;
      pcVar8 = "Error in stream: invalid value, expected sps_id to be";
      local_200 = "Error in stream: invalid value, expected sps_id to be";
      uVar5 = 0x11c2;
      uVar9 = 0xf;
    }
    else {
      uVar4 = FUN_004022fc();
      if ((uVar4 & 1) != 0) goto LAB_00882a84;
      puStack_1a0 = (undefined1 *)0x11aa;
      pcVar8 = "Error in stream: invalid value, expected pps_id to be";
      local_200 = "Error in stream: invalid value, expected pps_id to be";
      uVar5 = 0x11aa;
      uVar9 = 0x3f;
    }
    local_198 = &uStack_201;
    ppcStack_1d8 = &local_1f0;
    ppcStack_1e8 = &local_200;
    ppcStack_1f8 = &local_1a8;
    local_1a8 = "../../common_video/h265/h265_bitstream_parser.cc";
    local_1e0 = 0;
    local_1f0 = " in range [";
    FUN_00623bb0(&DAT_00223e08,"../../common_video/h265/h265_bitstream_parser.cc",uVar5,pcVar8,
                 " in range [",0,&DAT_001ca603,uVar9,&DAT_0019fa9e," found ",uVar3," instead");
LAB_00882a84:
    FUN_008824f4(&local_1c0);
    return;
  }
  puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_e0 = 0xaaaaaaaa;
  uStack_dc = 0xaaaaaaaa;
  puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  local_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_e8 = 0xaaaaaaaaaa;
  uStack_e3 = 0xaaaaaa;
  local_f0 = &DAT_aaaaaaaaaaaaaaaa;
  local_100 = (char *)0xaaaaaaaaaaaaaa00;
  local_60 = 0xaaaaaaaaaaaaaa00;
  if (param_3 == 1) {
LAB_00882bc4:
    uVar4 = FUN_004022fc();
    if ((uVar4 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../common_video/h265/h265_bitstream_parser.cc",0x113a,
                   "Unable to parse SPS from H265 bitstream.");
    }
  }
  else {
    param_2 = param_2 + 2;
    if (param_3 < 2 || param_3 - 2 == 0) {
      param_2 = (undefined1 *)0x0;
    }
    FUN_008854a8(&local_1a8,param_2,param_3 - 2);
    FUN_008834c8(&local_100,&local_1a8);
    if (local_108 == '\x01') {
      if (local_140 != (void *)0x0) {
        uVar12 = (ulong)((long)local_138 + (-4 - ((long)local_138 << 0x3e))) >> 2;
        uVar4 = (ulong)(((long)local_140 - (long)local_138 << 0x3e) -
                       ((long)local_140 - (long)local_138)) >> 2;
        if (uVar12 <= uVar4) {
          uVar4 = uVar12;
        }
        pvVar10 = local_138;
        if ((1 < uVar4) && ((((int)local_140 - (int)local_138 | -(int)local_138) & 3U) == 0)) {
          uVar4 = uVar4 & 0x3ffffffffffffffe;
          pvVar10 = (void *)((long)local_138 + uVar4 * -4);
          do {
            uVar4 = uVar4 - 2;
          } while (uVar4 != 0);
        }
        do {
          if (pvVar10 == local_140) {
            local_138 = local_140;
            operator_delete(local_140);
            goto LAB_00882aa0;
          }
          pvVar10 = (void *)((long)pvVar10 + -4);
        } while (pvVar10 != (void *)0x0);
        goto LAB_00882d14;
      }
LAB_00882aa0:
      if (local_160 != (void *)0x0) {
        uVar4 = (ulong)(((long)local_160 - (long)local_158) * 0x3d08e5500fd08e55) >> 2;
        uVar12 = (long)local_158 * -0x3d08e5500fd08e55 - 4U >> 2;
        if (uVar12 <= uVar4) {
          uVar4 = uVar12;
        }
        pvVar10 = local_158;
        if ((1 < uVar4) && ((((int)local_160 - (int)local_158 | -(int)local_158) & 3U) == 0)) {
          uVar4 = uVar4 & 0x3ffffffffffffffe;
          pvVar10 = (void *)((long)local_158 + uVar4 * -0x40c);
          do {
            uVar4 = uVar4 - 2;
          } while (uVar4 != 0);
        }
        do {
          if (pvVar10 == local_160) {
            local_158 = local_160;
            operator_delete(local_160);
            goto LAB_00882b40;
          }
          pvVar10 = (void *)((long)pvVar10 + -0x40c);
        } while (pvVar10 != (void *)0x0);
        goto LAB_00882d14;
      }
    }
LAB_00882b40:
    if ((local_60 & 1) == 0) goto LAB_00882bc4;
    puVar6 = (undefined8 *)FUN_00882d5c(param_1 + 0x20,(long)&uStack_78 + 4);
    puVar6[5] = puStack_d8;
    puVar6[4] = CONCAT44(uStack_dc,local_e0);
    puVar6[7] = puStack_c8;
    puVar6[6] = puStack_d0;
    puVar6[1] = puStack_f8;
    *puVar6 = local_100;
    puVar6[3] = CONCAT35(uStack_e3,uStack_e8);
    puVar6[2] = local_f0;
    *(undefined4 *)(puVar6 + 8) = local_c0._0_4_;
    if (puVar6 == &local_100) {
      puVar6[0xc] = local_a0;
    }
    else {
      FUN_008838c8(puVar6 + 9,puStack_b8,local_b0,
                   ((long)local_b0 - (long)puStack_b8 >> 2) * 0x2f71aaff02f71ab);
      puVar6[0xc] = local_a0;
      FUN_005e72f8(puVar6 + 0xd,puStack_98,local_90,(long)local_90 - (long)puStack_98 >> 2);
    }
    puVar6[0x11] = uStack_78;
    puVar6[0x10] = local_80;
    puVar6[0x13] = puStack_68;
    puVar6[0x12] = puStack_70;
  }
  if ((local_60 & 1) == 0) {
    return;
  }
  if (puStack_98 == (undefined1 *)0x0) {
LAB_00882c88:
    if (puStack_b8 == (undefined1 *)0x0) {
      return;
    }
    uVar4 = (ulong)(((long)puStack_b8 - (long)local_b0) * 0x3d08e5500fd08e55) >> 2;
    uVar12 = (long)local_b0 * -0x3d08e5500fd08e55 - 4U >> 2;
    if (uVar12 <= uVar4) {
      uVar4 = uVar12;
    }
    puVar11 = local_b0;
    if ((1 < uVar4) && ((((int)puStack_b8 - (int)local_b0 | -(int)local_b0) & 3U) == 0)) {
      uVar4 = uVar4 & 0x3ffffffffffffffe;
      puVar11 = local_b0 + uVar4 * -0x40c;
      do {
        uVar4 = uVar4 - 2;
      } while (uVar4 != 0);
    }
    do {
      if (puVar11 == puStack_b8) {
        local_b0 = puStack_b8;
        operator_delete(puStack_b8);
        return;
      }
      puVar11 = puVar11 + -0x40c;
    } while (puVar11 != (undefined1 *)0x0);
  }
  else {
    uVar4 = (ulong)(((long)puStack_98 - (long)local_90 << 0x3e) -
                   ((long)puStack_98 - (long)local_90)) >> 2;
    if ((ulong)(local_90 + (-4 - ((long)local_90 << 0x3e))) >> 2 <= uVar4) {
      uVar4 = (ulong)(local_90 + (-4 - ((long)local_90 << 0x3e))) >> 2;
    }
    puVar11 = local_90;
    if ((1 < uVar4) && ((((int)puStack_98 - (int)local_90 | -(int)local_90) & 3U) == 0)) {
      uVar4 = uVar4 & 0x3ffffffffffffffe;
      puVar11 = local_90 + uVar4 * -4;
      do {
        uVar4 = uVar4 - 2;
      } while (uVar4 != 0);
    }
    do {
      if (puVar11 == puStack_98) {
        local_90 = puStack_98;
        operator_delete(puStack_98);
        goto LAB_00882c88;
      }
      puVar11 = puVar11 + -4;
    } while (puVar11 != (undefined1 *)0x0);
  }
LAB_00882d14:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00882d5c  FUN_00882d5c =====

uint * FUN_00882d5c(long *param_1,uint *param_2)

{
  long lVar1;
  uint *puVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  uint *puVar6;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  void *pvStack_78;
  void *local_70;
  undefined8 local_68;
  undefined8 local_60;
  void *pvStack_58;
  void *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar2 = (uint *)*param_1;
  lVar1 = param_1[1] - (long)puVar2;
  if (lVar1 != 0) {
    uVar4 = (lVar1 >> 3) * -0x30c30c30c30c30c3;
    puVar6 = puVar2;
    do {
      uVar5 = uVar4 >> 1;
      puVar2 = puVar6 + uVar5 * 0x2a + 0x2a;
      uVar4 = uVar4 + ~uVar5;
      if (*param_2 <= puVar6[uVar5 * 0x2a]) {
        puVar2 = puVar6;
        uVar4 = uVar5;
      }
      puVar6 = puVar2;
    } while (uVar4 != 0);
  }
  if ((puVar2 != (uint *)param_1[1]) && (*puVar2 <= *param_2)) {
LAB_00882f38:
    return puVar2 + 2;
  }
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  pvStack_78 = (void *)0x0;
  local_80 = 0;
  local_68 = 0;
  local_70 = (void *)0x0;
  pvStack_58 = (void *)0x0;
  local_60 = 0;
  local_48 = 0;
  local_50 = (void *)0x0;
  uStack_38 = 0;
  local_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  puVar2 = (uint *)FUN_00884218(param_1,puVar2,param_2,&local_c0);
  if (pvStack_58 == (void *)0x0) {
LAB_00882e88:
    if (pvStack_78 == (void *)0x0) goto LAB_00882f38;
    uVar4 = (ulong)(((long)pvStack_78 - (long)local_70) * 0x3d08e5500fd08e55) >> 2;
    uVar5 = (long)local_70 * -0x3d08e5500fd08e55 - 4U >> 2;
    if (uVar5 <= uVar4) {
      uVar4 = uVar5;
    }
    pvVar3 = local_70;
    if ((1 < uVar4) && ((((int)pvStack_78 - (int)local_70 | -(int)local_70) & 3U) == 0)) {
      uVar4 = uVar4 & 0x3ffffffffffffffe;
      pvVar3 = (void *)((long)local_70 + uVar4 * -0x40c);
      do {
        uVar4 = uVar4 - 2;
      } while (uVar4 != 0);
    }
    do {
      if (pvVar3 == pvStack_78) {
        local_70 = pvStack_78;
        operator_delete(pvStack_78);
        goto LAB_00882f38;
      }
      pvVar3 = (void *)((long)pvVar3 + -0x40c);
    } while (pvVar3 != (void *)0x0);
  }
  else {
    uVar5 = (ulong)((long)local_50 + (-4 - ((long)local_50 << 0x3e))) >> 2;
    uVar4 = (ulong)(((long)pvStack_58 - (long)local_50 << 0x3e) -
                   ((long)pvStack_58 - (long)local_50)) >> 2;
    if (uVar5 <= uVar4) {
      uVar4 = uVar5;
    }
    pvVar3 = local_50;
    if ((1 < uVar4) && ((((int)pvStack_58 - (int)local_50 | -(int)local_50) & 3U) == 0)) {
      uVar4 = uVar4 & 0x3ffffffffffffffe;
      pvVar3 = (void *)((long)local_50 + uVar4 * -4);
      do {
        uVar4 = uVar4 - 2;
      } while (uVar4 != 0);
    }
    do {
      if (pvVar3 == pvStack_58) {
        local_50 = pvStack_58;
        operator_delete(pvStack_58);
        goto LAB_00882e88;
      }
      pvVar3 = (void *)((long)pvVar3 + -4);
    } while (pvVar3 != (void *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00882f50  FUN_00882f50 =====

uint * FUN_00882f50(long *param_1,uint *param_2)

{
  long lVar1;
  uint *puVar2;
  uint *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 local_20;
  
  puVar2 = (uint *)*param_1;
  lVar1 = param_1[1] - (long)puVar2;
  if (lVar1 != 0) {
    uVar4 = (lVar1 >> 3) * -0x3333333333333333;
    puVar3 = puVar2;
    do {
      uVar5 = uVar4 >> 1;
      puVar2 = puVar3 + uVar5 * 10 + 10;
      uVar4 = uVar4 + ~uVar5;
      if (*param_2 <= puVar3[uVar5 * 10]) {
        puVar2 = puVar3;
        uVar4 = uVar5;
      }
      puVar3 = puVar2;
    } while (uVar4 != 0);
  }
  if ((puVar2 == (uint *)param_1[1]) || (*param_2 < *puVar2)) {
    local_20 = 0;
    uStack_38 = 0;
    local_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    puVar2 = (uint *)FUN_00884cbc(param_1,puVar2,param_2,&local_40);
  }
  return puVar2 + 1;
}


// ===== 00882ff4  FUN_00882ff4 =====

uint FUN_00882ff4(void)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  undefined1 *local_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  thunk_FUN_0087b608(&local_40);
  uVar2 = (long)puStack_38 - (long)local_40;
  local_50 = (undefined1 *)0x0;
  if (uVar2 != 0) {
    local_50 = local_40;
  }
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  if ((uVar2 >> 0x1c & 0x1ffffffff) == 0) {
    local_48 = (undefined1 *)CONCAT44(0xaaaaaa01,(int)uVar2 * 8);
    iVar4 = FUN_007d60c4(&local_50);
    uVar3 = (uint)local_48;
    if (local_40 != (undefined1 *)0x0) {
      if (puStack_38 + -1 < puStack_38 + -(long)local_40) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      puStack_38 = local_40;
      operator_delete(local_40);
    }
    uVar1 = (uVar3 >> 0x17 ^ 0xffffffff) & 0x100;
    if (iVar4 != 0 && (uVar3 != 0xffffffff && (int)(uVar3 + 1) < 0 == SCARRY4(uVar3,1))) {
      uVar1 = uVar1 + 1;
    }
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../rtc_base/numerics/safe_conversions.h",0x24,
               "IsValueInRangeForNumericType<Dst>(value)",&DAT_001f5fa0);
}


// ===== 008830e4  FUN_008830e4 =====

void FUN_008830e4(undefined8 param_1,long param_2,ulong param_3)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_0088518c(&local_60,param_2,param_3);
  puVar1 = puStack_58;
  for (puVar3 = local_60; puVar3 != puVar1; puVar3 = puVar3 + 0x18) {
    uVar5 = *(ulong *)(puVar3 + 8);
    uVar4 = param_3 - uVar5;
    if (param_3 < uVar5 || uVar4 == 0) {
      uVar4 = 0;
      lVar2 = 0;
    }
    else {
      if (*(ulong *)(puVar3 + 0x10) <= uVar4) {
        uVar4 = *(ulong *)(puVar3 + 0x10);
      }
      lVar2 = 0;
      if (uVar4 != 0) {
        lVar2 = uVar5 + param_2;
      }
    }
    FUN_0088254c(param_1,lVar2,uVar4);
  }
  if (local_60 != (undefined1 *)0x0) {
    uVar4 = (ulong)(((long)local_60 - (long)puStack_58) * 0x1555555555555555) >> 3;
    uVar5 = (long)puStack_58 * -0x1555555555555555 - 8U >> 3;
    if (uVar5 <= uVar4) {
      uVar4 = uVar5;
    }
    puVar3 = puStack_58;
    if ((1 < uVar4) && ((((int)local_60 - (int)puStack_58 | -(int)puStack_58) & 7U) == 0)) {
      uVar4 = uVar4 & 0x1ffffffffffffffe;
      puVar3 = puStack_58 + uVar4 * -0x18;
      do {
        uVar4 = uVar4 - 2;
      } while (uVar4 != 0);
    }
    while (puVar3 != local_60) {
      puVar3 = puVar3 + -0x18;
      if (puVar3 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    puStack_58 = local_60;
    operator_delete(local_60);
  }
  return;
}


// ===== 00883240  FUN_00883240 =====

ulong FUN_00883240(long param_1)

{
  uint uVar1;
  long lVar2;
  uint *puVar3;
  uint *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  if ((*(char *)(param_1 + 0x54) == '\x01') && (*(char *)(param_1 + 0x5c) == '\x01')) {
    puVar4 = *(uint **)(param_1 + 0x38);
    uVar1 = *(uint *)(param_1 + 0x58);
    lVar2 = (long)*(uint **)(param_1 + 0x40) - (long)puVar4;
    if (lVar2 != 0) {
      uVar5 = (lVar2 >> 3) * -0x3333333333333333;
      puVar3 = puVar4;
      do {
        uVar6 = uVar5 >> 1;
        puVar4 = puVar3 + uVar6 * 10 + 10;
        uVar5 = uVar5 + ~uVar6;
        if (uVar1 <= puVar3[uVar6 * 10]) {
          puVar4 = puVar3;
          uVar5 = uVar6;
        }
        puVar3 = puVar4;
      } while (uVar5 != 0);
    }
    if ((puVar4 == *(uint **)(param_1 + 0x40)) || (uVar1 < *puVar4)) {
      uVar5 = FUN_004022fc();
      if ((uVar5 & 1) == 0) {
        FUN_00623bb0(&DAT_001f6220,"../../common_video/h265/h265_bitstream_parser.cc",0xfd2,
                     "Requested a nonexistent PPS id ",uVar1);
      }
    }
    else if (puVar4 != (uint *)0xfffffffffffffffc) {
      uVar1 = puVar4[5] + *(int *)(param_1 + 0x50) + 0x1a;
      if (uVar1 < 0x34) {
        return (ulong)uVar1 | 0x100000000;
      }
      uVar5 = FUN_004249b0();
      if ((uVar5 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../common_video/h265/h265_bitstream_parser.cc",0x1473,
                     "Parsed invalid QP from bitstream.");
      }
    }
    return 0;
  }
  return 0;
}


// ===== 00883364  FUN_00883364 =====

void FUN_00883364(undefined8 param_1,long param_2)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_2 != 0) {
    pvVar1 = *(void **)(param_2 + 0x70);
    if (pvVar1 == (void *)0x0) {
LAB_008833fc:
      pvVar1 = *(void **)(param_2 + 0x50);
      if (pvVar1 == (void *)0x0) {
        return;
      }
      pvVar2 = *(void **)(param_2 + 0x58);
      uVar3 = (ulong)(((long)pvVar1 - (long)pvVar2) * 0x3d08e5500fd08e55) >> 2;
      uVar4 = (long)pvVar2 * -0x3d08e5500fd08e55 - 4U >> 2;
      if (uVar4 <= uVar3) {
        uVar3 = uVar4;
      }
      if ((1 < uVar3) && ((((int)pvVar1 - (int)pvVar2 | -(int)pvVar2) & 3U) == 0)) {
        uVar3 = uVar3 & 0x3ffffffffffffffe;
        pvVar2 = (void *)((long)pvVar2 + uVar3 * -0x40c);
        do {
          uVar3 = uVar3 - 2;
        } while (uVar3 != 0);
      }
      do {
        if (pvVar2 == pvVar1) {
          *(void **)(param_2 + 0x58) = pvVar1;
          operator_delete(pvVar1);
          return;
        }
        pvVar2 = (void *)((long)pvVar2 + -0x40c);
      } while (pvVar2 != (void *)0x0);
    }
    else {
      pvVar2 = *(void **)(param_2 + 0x78);
      uVar4 = (ulong)((long)pvVar2 + (-4 - ((long)pvVar2 << 0x3e))) >> 2;
      uVar3 = (ulong)(((long)pvVar1 - (long)pvVar2 << 0x3e) - ((long)pvVar1 - (long)pvVar2)) >> 2;
      if (uVar4 <= uVar3) {
        uVar3 = uVar4;
      }
      if ((1 < uVar3) && ((((int)pvVar1 - (int)pvVar2 | -(int)pvVar2) & 3U) == 0)) {
        uVar3 = uVar3 & 0x3ffffffffffffffe;
        pvVar2 = (void *)((long)pvVar2 + uVar3 * -4);
        do {
          uVar3 = uVar3 - 2;
        } while (uVar3 != 0);
      }
      do {
        if (pvVar2 == pvVar1) {
          *(void **)(param_2 + 0x78) = pvVar1;
          operator_delete(pvVar1);
          goto LAB_008833fc;
        }
        pvVar2 = (void *)((long)pvVar2 + -4);
      } while (pvVar2 != (void *)0x0);
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 008834c8  FUN_008834c8 =====

void FUN_008834c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  char cVar2;
  void *pvVar3;
  void *pvVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  cVar2 = *(char *)(param_1 + 0x14);
  if (cVar2 == *(char *)(param_2 + 0x14)) {
    if (cVar2 != '\0') {
      FUN_008836e4(param_1);
      return;
    }
  }
  else {
    if (cVar2 != '\0') {
      pvVar3 = (void *)param_1[0xd];
      if (pvVar3 == (void *)0x0) {
LAB_00883618:
        pvVar3 = (void *)param_1[9];
        if (pvVar3 == (void *)0x0) {
LAB_008836c8:
          *(undefined1 *)(param_1 + 0x14) = 0;
          return;
        }
        pvVar4 = (void *)param_1[10];
        uVar6 = (ulong)(((long)pvVar3 - (long)pvVar4) * 0x3d08e5500fd08e55) >> 2;
        uVar7 = (long)pvVar4 * -0x3d08e5500fd08e55 - 4U >> 2;
        if (uVar7 <= uVar6) {
          uVar6 = uVar7;
        }
        if ((1 < uVar6) && ((((int)pvVar3 - (int)pvVar4 | -(int)pvVar4) & 3U) == 0)) {
          uVar6 = uVar6 & 0x3ffffffffffffffe;
          pvVar4 = (void *)((long)pvVar4 + uVar6 * -0x40c);
          do {
            uVar6 = uVar6 - 2;
          } while (uVar6 != 0);
        }
        do {
          if (pvVar4 == pvVar3) {
            param_1[10] = pvVar3;
            operator_delete(pvVar3);
            goto LAB_008836c8;
          }
          pvVar4 = (void *)((long)pvVar4 + -0x40c);
        } while (pvVar4 != (void *)0x0);
      }
      else {
        pvVar4 = (void *)param_1[0xe];
        uVar7 = (ulong)((long)pvVar4 + (-4 - ((long)pvVar4 << 0x3e))) >> 2;
        uVar6 = (ulong)(((long)pvVar3 - (long)pvVar4 << 0x3e) - ((long)pvVar3 - (long)pvVar4)) >> 2;
        if (uVar7 <= uVar6) {
          uVar6 = uVar7;
        }
        if ((1 < uVar6) && ((((int)pvVar3 - (int)pvVar4 | -(int)pvVar4) & 3U) == 0)) {
          uVar6 = uVar6 & 0x3ffffffffffffffe;
          pvVar4 = (void *)((long)pvVar4 + uVar6 * -4);
          do {
            uVar6 = uVar6 - 2;
          } while (uVar6 != 0);
        }
        do {
          if (pvVar4 == pvVar3) {
            param_1[0xe] = pvVar3;
            operator_delete(pvVar3);
            goto LAB_00883618;
          }
          pvVar4 = (void *)((long)pvVar4 + -4);
        } while (pvVar4 != (void *)0x0);
      }
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    uVar9 = param_2[4];
    uVar8 = param_2[7];
    uVar5 = param_2[6];
    uVar11 = param_2[1];
    uVar10 = *param_2;
    uVar13 = param_2[3];
    uVar12 = param_2[2];
    param_1[5] = param_2[5];
    param_1[4] = uVar9;
    param_1[7] = uVar8;
    param_1[6] = uVar5;
    param_1[1] = uVar11;
    *param_1 = uVar10;
    param_1[3] = uVar13;
    param_1[2] = uVar12;
    uVar1 = *(undefined4 *)(param_2 + 8);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[9] = 0;
    *(undefined4 *)(param_1 + 8) = uVar1;
    param_1[9] = param_2[9];
    param_1[10] = param_2[10];
    param_1[0xb] = param_2[0xb];
    uVar5 = param_2[0xc];
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[9] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0xc] = uVar5;
    param_1[0xd] = 0;
    param_1[0xd] = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xf] = param_2[0xf];
    uVar10 = param_2[0x11];
    uVar9 = param_2[0x10];
    uVar8 = param_2[0x13];
    uVar5 = param_2[0x12];
    param_2[0xd] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    *(undefined1 *)(param_1 + 0x14) = 1;
    param_1[0x11] = uVar10;
    param_1[0x10] = uVar9;
    param_1[0x13] = uVar8;
    param_1[0x12] = uVar5;
  }
  return;
}


// ===== 008836e4  FUN_008836e4 =====

undefined8 * FUN_008836e4(undefined8 *param_1,undefined8 *param_2)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar7 = param_2[4];
  uVar6 = param_2[7];
  uVar5 = param_2[6];
  uVar9 = param_2[1];
  uVar8 = *param_2;
  uVar11 = param_2[3];
  uVar10 = param_2[2];
  param_1[5] = param_2[5];
  param_1[4] = uVar7;
  param_1[7] = uVar6;
  param_1[6] = uVar5;
  param_1[1] = uVar9;
  *param_1 = uVar8;
  param_1[3] = uVar11;
  param_1[2] = uVar10;
  pvVar1 = (void *)param_1[9];
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  if (pvVar1 == (void *)0x0) {
LAB_008837c4:
    param_1[9] = param_2[9];
    param_1[10] = param_2[10];
    param_1[0xb] = param_2[0xb];
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    pvVar1 = (void *)param_1[0xd];
    param_1[0xc] = param_2[0xc];
    if (pvVar1 == (void *)0x0) {
LAB_00883888:
      param_1[0xd] = param_2[0xd];
      param_1[0xe] = param_2[0xe];
      param_1[0xf] = param_2[0xf];
      uVar7 = param_2[0x10];
      uVar6 = param_2[0x13];
      uVar5 = param_2[0x12];
      param_2[0xd] = 0;
      param_2[0xe] = 0;
      param_2[0xf] = 0;
      param_1[0x11] = param_2[0x11];
      param_1[0x10] = uVar7;
      param_1[0x13] = uVar6;
      param_1[0x12] = uVar5;
      return param_1;
    }
    pvVar2 = (void *)param_1[0xe];
    uVar4 = (ulong)((long)pvVar2 + (-4 - ((long)pvVar2 << 0x3e))) >> 2;
    uVar3 = (ulong)(((long)pvVar1 - (long)pvVar2 << 0x3e) - ((long)pvVar1 - (long)pvVar2)) >> 2;
    if (uVar4 <= uVar3) {
      uVar3 = uVar4;
    }
    if ((1 < uVar3) && ((((int)pvVar1 - (int)pvVar2 | -(int)pvVar2) & 3U) == 0)) {
      uVar3 = uVar3 & 0x3ffffffffffffffe;
      pvVar2 = (void *)((long)pvVar2 + uVar3 * -4);
      do {
        uVar3 = uVar3 - 2;
      } while (uVar3 != 0);
    }
    do {
      if (pvVar2 == pvVar1) {
        param_1[0xe] = pvVar1;
        operator_delete(pvVar1);
        param_1[0xd] = 0;
        param_1[0xe] = 0;
        param_1[0xf] = 0;
        goto LAB_00883888;
      }
      pvVar2 = (void *)((long)pvVar2 + -4);
    } while (pvVar2 != (void *)0x0);
  }
  else {
    pvVar2 = (void *)param_1[10];
    uVar3 = (ulong)(((long)pvVar1 - (long)pvVar2) * 0x3d08e5500fd08e55) >> 2;
    uVar4 = (long)pvVar2 * -0x3d08e5500fd08e55 - 4U >> 2;
    if (uVar4 <= uVar3) {
      uVar3 = uVar4;
    }
    if ((1 < uVar3) && ((((int)pvVar1 - (int)pvVar2 | -(int)pvVar2) & 3U) == 0)) {
      uVar3 = uVar3 & 0x3ffffffffffffffe;
      pvVar2 = (void *)((long)pvVar2 + uVar3 * -0x40c);
      do {
        uVar3 = uVar3 - 2;
      } while (uVar3 != 0);
    }
    do {
      if (pvVar2 == pvVar1) {
        param_1[10] = pvVar1;
        operator_delete(pvVar1);
        param_1[9] = 0;
        param_1[10] = 0;
        param_1[0xb] = 0;
        goto LAB_008837c4;
      }
      pvVar2 = (void *)((long)pvVar2 + -0x40c);
    } while (pvVar2 != (void *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 008838c8  FUN_008838c8 =====

void FUN_008838c8(undefined8 *param_1,void *param_2,long param_3,ulong param_4)

{
  long lVar1;
  size_t __n;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  size_t __n_00;
  void *pvVar6;
  
  lVar2 = param_1[2];
  pvVar6 = (void *)*param_1;
  if ((ulong)((lVar2 - (long)pvVar6 >> 2) * 0x2f71aaff02f71ab) < param_4) {
    if (pvVar6 == (void *)0x0) {
LAB_00883acc:
      if (param_4 < 0x3f42395403f424) {
        uVar4 = (lVar2 >> 2) * 0x5ee355fe05ee356;
        if (uVar4 < param_4 || uVar4 - param_4 == 0) {
          uVar4 = param_4;
        }
        if (0x1fa11caa01fa10 < (ulong)((lVar2 >> 2) * 0x2f71aaff02f71ab)) {
          uVar4 = 0x3f42395403f423;
        }
        if (uVar4 < 0x3f42395403f424) {
          pvVar6 = operator_new(uVar4 * 0x40c);
          *param_1 = pvVar6;
          param_1[1] = pvVar6;
          param_1[2] = (void *)((long)pvVar6 + uVar4 * 0x40c);
          memcpy(pvVar6,param_2,param_3 - (long)param_2);
          lVar2 = (long)pvVar6 + (param_3 - (long)param_2);
          goto LAB_00883b4c;
        }
      }
      FUN_00883b74();
                    /* WARNING: Subroutine does not return */
      FUN_005d34a4("vector");
    }
    pvVar3 = (void *)param_1[1];
    uVar4 = (ulong)(((long)pvVar6 - (long)pvVar3) * 0x3d08e5500fd08e55) >> 2;
    uVar5 = (long)pvVar3 * -0x3d08e5500fd08e55 - 4U >> 2;
    if (uVar5 <= uVar4) {
      uVar4 = uVar5;
    }
    if ((1 < uVar4) && ((((int)pvVar6 - (int)pvVar3 | -(int)pvVar3) & 3U) == 0)) {
      uVar4 = uVar4 & 0x3ffffffffffffffe;
      pvVar3 = (void *)((long)pvVar3 + uVar4 * -0x40c);
      do {
        uVar4 = uVar4 - 2;
      } while (uVar4 != 0);
    }
    do {
      if (pvVar3 == pvVar6) {
        param_1[1] = pvVar6;
        operator_delete(pvVar6);
        lVar2 = 0;
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        goto LAB_00883acc;
      }
      pvVar3 = (void *)((long)pvVar3 + -0x40c);
    } while (pvVar3 != (void *)0x0);
  }
  else {
    __n = param_1[1] - (long)pvVar6;
    if ((ulong)(((long)__n >> 2) * 0x2f71aaff02f71ab) < param_4) {
      memmove(pvVar6,param_2,__n);
      pvVar6 = (void *)param_1[1];
      __n_00 = param_3 - (long)((long)param_2 + __n);
      memmove(pvVar6,(void *)((long)param_2 + __n),__n_00);
      lVar2 = (long)pvVar6 + __n_00;
LAB_00883b4c:
      param_1[1] = lVar2;
      return;
    }
    memmove(pvVar6,param_2,param_3 - (long)param_2);
    lVar2 = param_1[1];
    uVar4 = (ulong)(((long)pvVar6 + (param_3 - (lVar2 + (long)param_2))) * 0x3d08e5500fd08e55) >> 2;
    uVar5 = lVar2 * -0x3d08e5500fd08e55 - 4U >> 2;
    if (uVar5 <= uVar4) {
      uVar4 = uVar5;
    }
    lVar1 = (long)pvVar6 + (param_3 - (long)param_2);
    if ((1 < uVar4) &&
       (((((int)pvVar6 + (int)param_3) - ((int)lVar2 + (int)param_2) | -(int)lVar2) & 3U) == 0)) {
      uVar4 = uVar4 & 0x3ffffffffffffffe;
      lVar2 = lVar2 + uVar4 * -0x40c;
      do {
        uVar4 = uVar4 - 2;
      } while (uVar4 != 0);
    }
    do {
      if (lVar2 == lVar1) {
        param_1[1] = lVar1;
        return;
      }
      lVar2 = lVar2 + -0x40c;
    } while (lVar2 != 0);
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00883b74  FUN_00883b74 =====

void FUN_00883b74(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00883b8c  FUN_00883b8c =====

undefined8 * FUN_00883b8c(long *param_1,undefined8 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  size_t __n;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  void *__dest;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  void *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  void *pvStack_48;
  
  puVar4 = (undefined8 *)param_1[1];
  if ((undefined8 *)param_1[2] <= puVar4) {
    lVar13 = *param_1;
    uVar8 = ((long)puVar4 - lVar13 >> 3) + 1;
    if (uVar8 >> 0x3d == 0) {
      uVar12 = param_1[2] - lVar13;
      local_60 = (void *)0x0;
      uVar11 = (long)uVar12 >> 2;
      if (uVar11 <= uVar8) {
        uVar11 = uVar8;
      }
      if (0x7ffffffffffffff7 < uVar12) {
        uVar11 = 0x1fffffffffffffff;
      }
      if (uVar11 != 0) {
        if (uVar11 >> 0x3d != 0) goto LAB_00883e20;
        local_60 = operator_new(uVar11 << 3);
      }
      pvStack_48 = (void *)((long)local_60 + uVar11 * 8);
      local_58 = (undefined8 *)((long)local_60 + ((long)param_2 - lVar13));
      local_50 = local_58;
      FUN_00883e24(&local_60,param_3,param_4);
      puVar4 = local_58;
      memcpy(local_50,param_2,param_1[1] - (long)param_2);
      lVar13 = param_1[1];
      param_1[1] = (long)param_2;
      __n = (long)param_2 - *param_1;
      __dest = (void *)((long)local_58 - __n);
      local_50 = (undefined8 *)((long)local_50 + (lVar13 - (long)param_2));
      memcpy(__dest,(void *)*param_1,__n);
      local_60 = (void *)*param_1;
      lVar13 = param_1[2];
      *param_1 = (long)__dest;
      param_1[2] = (long)pvStack_48;
      param_1[1] = (long)local_50;
      if (local_60 == (void *)0x0) {
        return puVar4;
      }
      local_58 = (undefined8 *)local_60;
      local_50 = (undefined8 *)local_60;
      pvStack_48 = (void *)lVar13;
      operator_delete(local_60);
      return puVar4;
    }
    FUN_00884200();
LAB_00883e20:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  if (param_2 == puVar4) {
    if (param_2 != (undefined8 *)0x0) {
      *(undefined4 *)puVar4 = *param_3;
      *(undefined4 *)((long)puVar4 + 4) = *param_4;
      param_1[1] = (long)(puVar4 + 1);
      return param_2;
    }
LAB_00883e08:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  puVar3 = puVar4 + -1;
  uVar1 = *param_3;
  uVar2 = *param_4;
  puVar5 = puVar4;
  if (puVar3 < puVar4) {
    puVar7 = puVar4;
    puVar9 = puVar4 + -1;
    do {
      if (puVar7 == (undefined8 *)0x0) goto LAB_00883e08;
      puVar10 = puVar9 + 1;
      puVar5 = puVar7 + 1;
      *puVar7 = *puVar9;
      puVar7 = puVar5;
      puVar9 = puVar10;
    } while (puVar10 < puVar4);
  }
  param_1[1] = (long)puVar5;
  if (puVar4 != param_2 + 1) {
    uVar8 = (long)puVar4 + (-0x10 - (long)param_2);
    puVar5 = puVar4;
    if ((((0x137 < uVar8) &&
         (uVar11 = uVar8 & 0xfffffffffffffff8, (undefined8 *)((long)puVar3 - uVar11) <= puVar3)) &&
        ((undefined4 *)((long)((long)puVar4 - 4U) - uVar11) <= (undefined4 *)((long)puVar4 - 4U)))
       && (((undefined4 *)((long)((long)puVar4 - 0xcU) - uVar11) <=
            (undefined4 *)((long)puVar4 - 0xcU) &&
           ((uVar11 = (long)puVar4 + (-0x10 - (long)param_2) & 0xfffffffffffffff8,
            puVar4 <= (undefined8 *)((long)puVar4 + (-0x10 - uVar11)) ||
            (puVar3 <= (undefined8 *)((long)puVar4 + (-8 - uVar11)))))))) {
      uVar8 = (uVar8 >> 3) + 1;
      uVar11 = uVar8 & 0x3ffffffffffffffc;
      uVar12 = uVar8 & 0x3ffffffffffffffc;
      puVar5 = puVar4 + -uVar11;
      puVar3 = puVar3 + -uVar11;
      puVar7 = puVar4 + -5;
      do {
        uVar16 = *puVar7;
        uVar15 = puVar7[3];
        uVar14 = puVar7[2];
        uVar12 = uVar12 - 4;
        puVar4[-3] = puVar7[1];
        puVar4[-4] = uVar16;
        puVar4[-1] = uVar15;
        puVar4[-2] = uVar14;
        puVar7 = puVar7 + -4;
        puVar4 = puVar4 + -4;
      } while (uVar12 != 0);
      if (uVar8 == uVar11) goto LAB_00883c3c;
    }
    puVar6 = (undefined4 *)((long)puVar5 - 4);
    do {
      puVar4 = puVar3 + -1;
      puVar6[-1] = *(undefined4 *)puVar4;
      *puVar6 = *(undefined4 *)((long)puVar3 + -4);
      puVar3 = puVar4;
      puVar6 = puVar6 + -2;
    } while (puVar4 != param_2);
  }
LAB_00883c3c:
  *(undefined4 *)param_2 = uVar1;
  *(undefined4 *)((long)param_2 + 4) = uVar2;
  return param_2;
}


// ===== 00883e24  FUN_00883e24 =====

void FUN_00883e24(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  ulong uVar1;
  void *pvVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  
  puVar18 = (undefined8 *)param_1[2];
  if ((undefined8 *)param_1[3] != puVar18) goto LAB_00884000;
  pvVar2 = (void *)*param_1;
  puVar19 = (undefined8 *)param_1[1];
  if ((long)puVar19 - (long)pvVar2 == 0) {
    uVar10 = (long)param_1[3] - (long)pvVar2 >> 2;
    if (puVar18 == puVar19) {
      uVar10 = 1;
    }
    if (uVar10 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    uVar16 = uVar10 >> 2;
    pvVar4 = operator_new(uVar10 * 8);
    puVar5 = (undefined8 *)((long)pvVar4 + uVar16 * 8);
    lVar6 = (long)puVar18 - (long)puVar19;
    iVar17 = (int)puVar18;
    puVar7 = puVar5;
    if (lVar6 != 0) {
      uVar14 = lVar6 - 8U >> 3;
      uVar12 = uVar14;
      if ((ulong)-(long)puVar5 >> 3 <= uVar14) {
        uVar12 = (ulong)-(long)puVar5 >> 3;
      }
      puVar7 = (undefined8 *)((long)puVar5 + lVar6);
      puVar8 = puVar5;
      puVar11 = puVar19;
      if (0x31 < uVar12) {
        if ((ulong)-(long)puVar5 >> 3 <= uVar14) {
          uVar14 = (ulong)-(long)puVar5 >> 3;
        }
        if ((((((iVar17 - (int)puVar19 | -(int)pvVar4) & 7U) == 0) && (puVar5 <= puVar5 + uVar14))
            && (puVar19 <= puVar19 + uVar14)) &&
           (0x1f < (long)pvVar4 + (uVar16 * 8 - (long)puVar19))) {
          uVar1 = uVar12 + 1 & 3;
          puVar15 = (undefined8 *)((long)pvVar4 + uVar16 * 8 + 0x10);
          uVar16 = 4;
          if (uVar1 != 0) {
            uVar16 = uVar1;
          }
          puVar13 = puVar19 + 2;
          lVar9 = (uVar12 + 1) - uVar16;
          lVar6 = ~uVar14 + uVar16;
          puVar8 = puVar5 + lVar9;
          puVar11 = puVar19 + lVar9;
          do {
            puVar3 = puVar13 + -1;
            uVar20 = puVar13[-2];
            uVar22 = puVar13[1];
            uVar21 = *puVar13;
            lVar6 = lVar6 + 4;
            puVar13 = puVar13 + 4;
            puVar15[-1] = *puVar3;
            puVar15[-2] = uVar20;
            puVar15[1] = uVar22;
            *puVar15 = uVar21;
            puVar15 = puVar15 + 4;
          } while (lVar6 != 0);
        }
      }
      do {
        if (puVar8 == (undefined8 *)0x0) goto LAB_008841d8;
        puVar15 = puVar8 + 1;
        *puVar8 = *puVar11;
        puVar8 = puVar15;
        puVar11 = puVar11 + 1;
      } while (puVar15 != puVar7);
    }
    *param_1 = pvVar4;
    param_1[1] = puVar5;
    uVar12 = (ulong)((long)puVar18 + (-8 - ((long)puVar18 << 0x3d))) >> 3;
    uVar16 = (ulong)(((long)puVar19 - (long)puVar18 << 0x3d) - ((long)puVar19 - (long)puVar18)) >> 3
    ;
    param_1[2] = puVar7;
    param_1[3] = (void *)((long)pvVar4 + uVar10 * 8);
    if (uVar12 <= uVar16) {
      uVar16 = uVar12;
    }
    puVar5 = puVar18;
    if ((1 < uVar16) && ((((int)puVar19 - iVar17 | -iVar17) & 7U) == 0)) {
      uVar16 = uVar16 & 0x1ffffffffffffffe;
      puVar5 = puVar18 + -uVar16;
      do {
        uVar16 = uVar16 - 2;
      } while (uVar16 != 0);
    }
    while (puVar5 != puVar19) {
      puVar5 = puVar5 + -1;
      if (puVar5 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    if (puVar19 != (undefined8 *)0x0) {
      operator_delete(pvVar2);
    }
    goto LAB_00884000;
  }
  lVar6 = (((long)puVar19 - (long)pvVar2 >> 3) + 1) / 2;
  puVar5 = puVar19 + -lVar6;
  if (puVar19 != puVar18) {
    uVar10 = (long)puVar18 + (-8 - (long)puVar19);
    if (uVar10 < 0x1d8) {
LAB_00883fd0:
      do {
        *(undefined4 *)puVar5 = *(undefined4 *)puVar19;
        puVar7 = puVar19 + 1;
        *(undefined4 *)((long)puVar5 + 4) = *(undefined4 *)((long)puVar19 + 4);
        puVar5 = puVar5 + 1;
        puVar19 = puVar7;
      } while (puVar7 != puVar18);
    }
    else {
      uVar12 = uVar10 & 0xfffffffffffffff8;
      uVar16 = (long)puVar19 + lVar6 * -8 + 4;
      puVar7 = (undefined8 *)((long)puVar19 + uVar12);
      if (((undefined8 *)((long)puVar5 + uVar12) < puVar5 || uVar16 + uVar12 < uVar16) ||
          puVar7 < puVar19) goto LAB_00883fd0;
      puVar8 = (undefined8 *)((long)puVar7 + lVar6 * -8 + 4);
      puVar11 = (undefined8 *)((long)puVar19 + 4);
      puVar13 = puVar11 + -lVar6;
      puVar15 = puVar7 + (1 - lVar6);
      if (((puVar13 < puVar8 && puVar5 < puVar15) ||
          (puVar5 < (undefined8 *)((long)puVar7 + 4U) && puVar19 < puVar8)) ||
         ((puVar5 < puVar7 + 1 && puVar11 < puVar8 ||
          ((puVar13 < (undefined8 *)((long)puVar7 + 4U) && puVar19 < puVar15 ||
           (puVar13 < puVar7 + 1 && puVar11 < puVar15)))))) goto LAB_00883fd0;
      uVar10 = (uVar10 >> 3) + 1;
      uVar12 = uVar10 & 0x3ffffffffffffff8;
      uVar16 = uVar10 & 0x3ffffffffffffff8;
      puVar5 = puVar5 + uVar12;
      puVar7 = puVar19 + uVar12;
      do {
        puVar11 = puVar19 + 1;
        uVar20 = *puVar19;
        uVar22 = puVar19[3];
        uVar21 = puVar19[2];
        puVar8 = puVar19 + -lVar6;
        uVar26 = puVar19[5];
        uVar25 = puVar19[4];
        uVar24 = puVar19[7];
        uVar23 = puVar19[6];
        uVar16 = uVar16 - 8;
        puVar19 = puVar19 + 8;
        puVar8[1] = *puVar11;
        *puVar8 = uVar20;
        puVar8[3] = uVar22;
        puVar8[2] = uVar21;
        puVar8[5] = uVar26;
        puVar8[4] = uVar25;
        puVar8[7] = uVar24;
        puVar8[6] = uVar23;
      } while (uVar16 != 0);
      puVar19 = puVar7;
      if (uVar10 != uVar12) goto LAB_00883fd0;
    }
    puVar19 = (undefined8 *)param_1[1];
  }
  param_1[1] = puVar19 + -lVar6;
  param_1[2] = puVar5;
  puVar18 = puVar5;
LAB_00884000:
  if (puVar18 != (undefined8 *)0x0) {
    *(undefined4 *)puVar18 = *param_2;
    *(undefined4 *)((long)puVar18 + 4) = *param_3;
    param_1[2] = puVar18 + 1;
    return;
  }
LAB_008841d8:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00884200  FUN_00884200 =====

void FUN_00884200(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00884218  FUN_00884218 =====

undefined4 * FUN_00884218(long *param_1,undefined4 *param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  void *pvVar5;
  undefined4 *puVar6;
  void *pvVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined4 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 local_8c;
  undefined8 uStack_84;
  undefined8 local_7c;
  undefined8 uStack_74;
  undefined4 local_6c;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  puVar6 = (undefined4 *)param_1[1];
  if (puVar6 < (undefined4 *)param_1[2]) {
    if (param_2 != puVar6) {
      uVar2 = *param_3;
      uVar10 = param_4[0xb];
      uVar23 = param_4[0xc];
      param_4[0xb] = 0;
      uVar13 = param_4[0xf];
      local_6c = *(undefined4 *)(param_4 + 8);
      uStack_a8._4_4_ = (undefined4)param_4[1];
      uStack_a0._0_4_ = (undefined4)((ulong)param_4[1] >> 0x20);
      uStack_ac = (undefined4)*param_4;
      uStack_a8._0_4_ = (undefined4)((ulong)*param_4 >> 0x20);
      uVar18 = param_4[0xe];
      uVar16 = param_4[0xd];
      uStack_98._4_4_ = (undefined4)param_4[3];
      uStack_90 = (undefined4)((ulong)param_4[3] >> 0x20);
      uStack_a0._4_4_ = (undefined4)param_4[2];
      uStack_98._0_4_ = (undefined4)((ulong)param_4[2] >> 0x20);
      uVar24 = param_4[10];
      uVar20 = param_4[9];
      param_4[9] = 0;
      param_4[10] = 0;
      uStack_84 = param_4[5];
      local_8c = param_4[4];
      uStack_74 = param_4[7];
      local_7c = param_4[6];
      param_4[0xe] = 0;
      param_4[0xf] = 0;
      param_4[0xd] = 0;
      puVar15 = (undefined4 *)param_1[1];
      uVar25 = param_4[0x11];
      uVar21 = param_4[0x10];
      uVar19 = param_4[0x13];
      uVar17 = param_4[0x12];
      puVar1 = puVar15;
      for (puVar6 = puVar15 + -0x2a; puVar6 < puVar15; puVar6 = puVar6 + 0x2a) {
        if (puVar1 == (undefined4 *)0x0) goto LAB_008846f8;
        *puVar1 = *puVar6;
        uVar11 = *(undefined8 *)(puVar6 + 0xe);
        uVar26 = *(undefined8 *)(puVar6 + 0xc);
        uVar22 = *(undefined8 *)(puVar6 + 10);
        uVar28 = *(undefined8 *)(puVar6 + 4);
        uVar27 = *(undefined8 *)(puVar6 + 2);
        uVar30 = *(undefined8 *)(puVar6 + 8);
        uVar29 = *(undefined8 *)(puVar6 + 6);
        *(undefined8 *)(puVar1 + 0x10) = *(undefined8 *)(puVar6 + 0x10);
        *(undefined8 *)(puVar1 + 0xe) = uVar11;
        *(undefined8 *)(puVar1 + 0xc) = uVar26;
        *(undefined8 *)(puVar1 + 10) = uVar22;
        *(undefined8 *)(puVar1 + 8) = uVar30;
        *(undefined8 *)(puVar1 + 6) = uVar29;
        *(undefined8 *)(puVar1 + 4) = uVar28;
        *(undefined8 *)(puVar1 + 2) = uVar27;
        uVar3 = puVar6[0x12];
        *(undefined8 *)(puVar1 + 0x16) = 0;
        *(undefined8 *)(puVar1 + 0x18) = 0;
        *(undefined8 *)(puVar1 + 0x14) = 0;
        puVar1[0x12] = uVar3;
        *(undefined8 *)(puVar1 + 0x14) = *(undefined8 *)(puVar6 + 0x14);
        *(undefined8 *)(puVar1 + 0x16) = *(undefined8 *)(puVar6 + 0x16);
        *(undefined8 *)(puVar1 + 0x18) = *(undefined8 *)(puVar6 + 0x18);
        uVar11 = *(undefined8 *)(puVar6 + 0x1a);
        *(undefined8 *)(puVar6 + 0x16) = 0;
        *(undefined8 *)(puVar6 + 0x18) = 0;
        *(undefined8 *)(puVar6 + 0x14) = 0;
        *(undefined8 *)(puVar1 + 0x1e) = 0;
        *(undefined8 *)(puVar1 + 0x20) = 0;
        *(undefined8 *)(puVar1 + 0x1a) = uVar11;
        *(undefined8 *)(puVar1 + 0x1c) = 0;
        *(undefined8 *)(puVar1 + 0x1c) = *(undefined8 *)(puVar6 + 0x1c);
        *(undefined8 *)(puVar1 + 0x1e) = *(undefined8 *)(puVar6 + 0x1e);
        *(undefined8 *)(puVar1 + 0x20) = *(undefined8 *)(puVar6 + 0x20);
        uVar11 = *(undefined8 *)(puVar6 + 0x26);
        uVar26 = *(undefined8 *)(puVar6 + 0x24);
        uVar22 = *(undefined8 *)(puVar6 + 0x22);
        *(undefined8 *)(puVar6 + 0x1c) = 0;
        *(undefined8 *)(puVar6 + 0x1e) = 0;
        *(undefined8 *)(puVar6 + 0x20) = 0;
        *(undefined8 *)(puVar1 + 0x28) = *(undefined8 *)(puVar6 + 0x28);
        *(undefined8 *)(puVar1 + 0x26) = uVar11;
        *(undefined8 *)(puVar1 + 0x24) = uVar26;
        *(undefined8 *)(puVar1 + 0x22) = uVar22;
        puVar1 = puVar1 + 0x2a;
      }
      param_1[1] = (long)puVar1;
      if (puVar15 != param_2 + 0x2a) {
        lVar14 = 0;
        do {
          *(undefined4 *)((long)puVar15 + lVar14 + -0xa8) =
               *(undefined4 *)((long)puVar15 + lVar14 + -0x150);
          FUN_008836e4((long)puVar15 + lVar14 + -0xa0,(long)puVar15 + lVar14 + -0x148);
          lVar9 = lVar14 + -0x150;
          lVar14 = lVar14 + -0xa8;
        } while ((undefined4 *)((long)puVar15 + lVar9) != param_2);
      }
      *param_2 = uVar2;
      pvVar5 = *(void **)(param_2 + 0x14);
      param_2[0x12] = local_6c;
      *(ulong *)(param_2 + 4) = CONCAT44((undefined4)uStack_a0,uStack_a8._4_4_);
      *(ulong *)(param_2 + 2) = CONCAT44((undefined4)uStack_a8,uStack_ac);
      *(ulong *)(param_2 + 8) = CONCAT44(uStack_90,uStack_98._4_4_);
      *(ulong *)(param_2 + 6) = CONCAT44((undefined4)uStack_98,uStack_a0._4_4_);
      *(undefined8 *)(param_2 + 0xc) = uStack_84;
      *(undefined8 *)(param_2 + 10) = local_8c;
      *(undefined8 *)(param_2 + 0x10) = uStack_74;
      *(undefined8 *)(param_2 + 0xe) = local_7c;
      if (pvVar5 == (void *)0x0) {
LAB_0088466c:
        pvVar5 = *(void **)(param_2 + 0x1c);
        *(undefined8 *)(param_2 + 0x18) = uVar10;
        *(undefined8 *)(param_2 + 0x1a) = uVar23;
        *(undefined8 *)(param_2 + 0x16) = uVar24;
        *(undefined8 *)(param_2 + 0x14) = uVar20;
        if (pvVar5 == (void *)0x0) {
LAB_0088471c:
          *(undefined8 *)(param_2 + 0x20) = uVar13;
          *(undefined8 *)(param_2 + 0x1e) = uVar18;
          *(undefined8 *)(param_2 + 0x1c) = uVar16;
          *(undefined8 *)(param_2 + 0x24) = uVar25;
          *(undefined8 *)(param_2 + 0x22) = uVar21;
          *(undefined8 *)(param_2 + 0x28) = uVar19;
          *(undefined8 *)(param_2 + 0x26) = uVar17;
          goto LAB_00884624;
        }
        pvVar7 = *(void **)(param_2 + 0x1e);
        uVar12 = (ulong)((long)pvVar7 + (-4 - ((long)pvVar7 << 0x3e))) >> 2;
        uVar8 = (ulong)(((long)pvVar5 - (long)pvVar7 << 0x3e) - ((long)pvVar5 - (long)pvVar7)) >> 2;
        if (uVar12 <= uVar8) {
          uVar8 = uVar12;
        }
        if ((1 < uVar8) && ((((int)pvVar5 - (int)pvVar7 | -(int)pvVar7) & 3U) == 0)) {
          uVar8 = uVar8 & 0x3ffffffffffffffe;
          pvVar7 = (void *)((long)pvVar7 + uVar8 * -4);
          do {
            uVar8 = uVar8 - 2;
          } while (uVar8 != 0);
        }
        do {
          if (pvVar7 == pvVar5) {
            *(void **)(param_2 + 0x1e) = pvVar5;
            operator_delete(pvVar5);
            goto LAB_0088471c;
          }
          pvVar7 = (void *)((long)pvVar7 + -4);
        } while (pvVar7 != (void *)0x0);
      }
      else {
        pvVar7 = *(void **)(param_2 + 0x16);
        uVar8 = (ulong)(((long)pvVar5 - (long)pvVar7) * 0x3d08e5500fd08e55) >> 2;
        uVar12 = (long)pvVar7 * -0x3d08e5500fd08e55 - 4U >> 2;
        if (uVar12 <= uVar8) {
          uVar8 = uVar12;
        }
        if ((1 < uVar8) && ((((int)pvVar5 - (int)pvVar7 | -(int)pvVar7) & 3U) == 0)) {
          uVar8 = uVar8 & 0x3ffffffffffffffe;
          pvVar7 = (void *)((long)pvVar7 + uVar8 * -0x40c);
          do {
            uVar8 = uVar8 - 2;
          } while (uVar8 != 0);
        }
        do {
          if (pvVar7 == pvVar5) {
            *(void **)(param_2 + 0x16) = pvVar5;
            operator_delete(pvVar5);
            goto LAB_0088466c;
          }
          pvVar7 = (void *)((long)pvVar7 + -0x40c);
        } while (pvVar7 != (void *)0x0);
      }
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    if (param_2 == (undefined4 *)0x0) {
LAB_008846f8:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *puVar6 = *param_3;
    uVar13 = param_4[5];
    uVar23 = param_4[4];
    uVar10 = param_4[6];
    uVar17 = param_4[1];
    uVar16 = *param_4;
    uVar19 = param_4[3];
    uVar18 = param_4[2];
    *(undefined8 *)(puVar6 + 0x10) = param_4[7];
    *(undefined8 *)(puVar6 + 0xe) = uVar10;
    *(undefined8 *)(puVar6 + 0xc) = uVar13;
    *(undefined8 *)(puVar6 + 10) = uVar23;
    *(undefined8 *)(puVar6 + 8) = uVar19;
    *(undefined8 *)(puVar6 + 6) = uVar18;
    *(undefined8 *)(puVar6 + 4) = uVar17;
    *(undefined8 *)(puVar6 + 2) = uVar16;
    uVar2 = *(undefined4 *)(param_4 + 8);
    *(undefined8 *)(puVar6 + 0x16) = 0;
    *(undefined8 *)(puVar6 + 0x18) = 0;
    *(undefined8 *)(puVar6 + 0x14) = 0;
    puVar6[0x12] = uVar2;
    *(undefined8 *)(puVar6 + 0x14) = param_4[9];
    *(undefined8 *)(puVar6 + 0x16) = param_4[10];
    *(undefined8 *)(puVar6 + 0x18) = param_4[0xb];
    uVar10 = param_4[0xc];
    param_4[10] = 0;
    param_4[0xb] = 0;
    param_4[9] = 0;
    *(undefined8 *)(puVar6 + 0x1e) = 0;
    *(undefined8 *)(puVar6 + 0x20) = 0;
    *(undefined8 *)(puVar6 + 0x1a) = uVar10;
    *(undefined8 *)(puVar6 + 0x1c) = 0;
    *(undefined8 *)(puVar6 + 0x1c) = param_4[0xd];
    *(undefined8 *)(puVar6 + 0x1e) = param_4[0xe];
    *(undefined8 *)(puVar6 + 0x20) = param_4[0xf];
    uVar13 = param_4[0x11];
    uVar23 = param_4[0x10];
    uVar10 = param_4[0x12];
    param_4[0xd] = 0;
    param_4[0xe] = 0;
    param_4[0xf] = 0;
    *(undefined8 *)(puVar6 + 0x28) = param_4[0x13];
    *(undefined8 *)(puVar6 + 0x26) = uVar10;
    *(undefined8 *)(puVar6 + 0x24) = uVar13;
    *(undefined8 *)(puVar6 + 0x22) = uVar23;
    param_1[1] = (long)(puVar6 + 0x2a);
  }
  else {
    lVar14 = *param_1;
    uVar8 = ((long)puVar6 - lVar14 >> 3) * -0x30c30c30c30c30c3 + 1;
    if (0x186186186186186 < uVar8) {
      FUN_00884ca4();
LAB_00884740:
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    local_b0 = 0;
    uStack_ac = 0;
    lVar9 = param_1[2] - lVar14 >> 3;
    uVar12 = lVar9 * -0x6186186186186186;
    if (uVar12 < uVar8 || uVar12 - uVar8 == 0) {
      uVar12 = uVar8;
    }
    if (0xc30c30c30c30c2 < (ulong)(lVar9 * -0x30c30c30c30c30c3)) {
      uVar12 = 0x186186186186186;
    }
    if (uVar12 == 0) {
      pvVar5 = (void *)0x0;
    }
    else {
      if (0x186186186186186 < uVar12) goto LAB_00884740;
      pvVar5 = operator_new(uVar12 * 0xa8);
      local_b0 = SUB84(pvVar5,0);
      uStack_ac = (undefined4)((ulong)pvVar5 >> 0x20);
    }
    uStack_98 = (void *)((long)pvVar5 + uVar12 * 0xa8);
    uStack_a8 = (long)pvVar5 + ((long)param_2 - lVar14);
    uStack_a0 = uStack_a8;
    FUN_00884744(&local_b0,param_3,param_4);
    param_2 = (undefined4 *)FUN_00884a58(param_1,&local_b0,param_2);
    lVar9 = uStack_a8;
    lVar14 = uStack_a0;
    while (lVar9 != lVar14) {
      lVar14 = lVar14 + -0xa8;
      FUN_00883364(&local_b0,lVar14);
    }
    uStack_a0._0_4_ = (undefined4)lVar14;
    uStack_a0._4_4_ = (undefined4)((ulong)lVar14 >> 0x20);
    if ((void *)CONCAT44(uStack_ac,local_b0) != (void *)0x0) {
      operator_delete((void *)CONCAT44(uStack_ac,local_b0));
    }
  }
LAB_00884624:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_2;
}


// ===== 00884744  FUN_00884744 =====

void FUN_00884744(long *param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  void *pvVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  void *local_80;
  undefined4 *puStack_78;
  undefined4 *local_70;
  undefined4 *puStack_68;
  
  puVar13 = (undefined4 *)param_1[3];
  puVar11 = (undefined4 *)param_1[2];
  if (puVar13 == puVar11) {
    pvVar9 = (void *)*param_1;
    puVar10 = (undefined4 *)param_1[1];
    if ((long)puVar10 - (long)pvVar9 == 0) {
      uVar5 = ((long)puVar13 - (long)pvVar9 >> 3) * -0x6186186186186186;
      puStack_78 = (undefined4 *)0x0;
      local_80 = (void *)0x0;
      puStack_68 = (undefined4 *)0x0;
      local_70 = (undefined4 *)0x0;
      if (puVar11 == puVar10) {
        uVar5 = 1;
      }
      if (0x186186186186186 < uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      pvVar3 = operator_new(uVar5 * 0xa8);
      puVar6 = (undefined4 *)((long)pvVar3 + (uVar5 >> 2) * 0xa8);
      puVar8 = puVar6;
      puVar12 = puVar11;
      if ((long)puVar11 - (long)puVar10 != 0) {
        puVar8 = (undefined4 *)((long)puVar6 + ((long)puVar11 - (long)puVar10));
        puVar13 = puVar6;
        do {
          if (puVar13 == (undefined4 *)0x0) goto LAB_00884a40;
          *puVar13 = *puVar10;
          uVar7 = *(undefined8 *)(puVar10 + 0xe);
          uVar15 = *(undefined8 *)(puVar10 + 0xc);
          uVar14 = *(undefined8 *)(puVar10 + 10);
          uVar17 = *(undefined8 *)(puVar10 + 4);
          uVar16 = *(undefined8 *)(puVar10 + 2);
          uVar19 = *(undefined8 *)(puVar10 + 8);
          uVar18 = *(undefined8 *)(puVar10 + 6);
          *(undefined8 *)(puVar13 + 0x10) = *(undefined8 *)(puVar10 + 0x10);
          *(undefined8 *)(puVar13 + 0xe) = uVar7;
          *(undefined8 *)(puVar13 + 0xc) = uVar15;
          *(undefined8 *)(puVar13 + 10) = uVar14;
          *(undefined8 *)(puVar13 + 8) = uVar19;
          *(undefined8 *)(puVar13 + 6) = uVar18;
          *(undefined8 *)(puVar13 + 4) = uVar17;
          *(undefined8 *)(puVar13 + 2) = uVar16;
          puVar13[0x12] = puVar10[0x12];
          *(undefined8 *)(puVar13 + 0x14) = *(undefined8 *)(puVar10 + 0x14);
          *(undefined8 *)(puVar13 + 0x16) = *(undefined8 *)(puVar10 + 0x16);
          *(undefined8 *)(puVar13 + 0x18) = *(undefined8 *)(puVar10 + 0x18);
          *(undefined8 *)(puVar10 + 0x14) = 0;
          *(undefined8 *)(puVar10 + 0x16) = 0;
          *(undefined8 *)(puVar10 + 0x18) = 0;
          *(undefined8 *)(puVar13 + 0x1a) = *(undefined8 *)(puVar10 + 0x1a);
          *(undefined8 *)(puVar13 + 0x1c) = *(undefined8 *)(puVar10 + 0x1c);
          *(undefined8 *)(puVar13 + 0x1e) = *(undefined8 *)(puVar10 + 0x1e);
          *(undefined8 *)(puVar13 + 0x20) = *(undefined8 *)(puVar10 + 0x20);
          puVar2 = (undefined8 *)(puVar10 + 0x28);
          uVar7 = *(undefined8 *)(puVar10 + 0x26);
          uVar15 = *(undefined8 *)(puVar10 + 0x24);
          uVar14 = *(undefined8 *)(puVar10 + 0x22);
          *(undefined8 *)(puVar10 + 0x1c) = 0;
          *(undefined8 *)(puVar10 + 0x1e) = 0;
          *(undefined8 *)(puVar10 + 0x20) = 0;
          puVar10 = puVar10 + 0x2a;
          *(undefined8 *)(puVar13 + 0x28) = *puVar2;
          *(undefined8 *)(puVar13 + 0x26) = uVar7;
          *(undefined8 *)(puVar13 + 0x24) = uVar15;
          *(undefined8 *)(puVar13 + 0x22) = uVar14;
          puVar13 = puVar13 + 0x2a;
        } while (puVar13 != puVar8);
        pvVar9 = (void *)*param_1;
        puVar10 = (undefined4 *)param_1[1];
        puVar13 = (undefined4 *)param_1[3];
        puVar12 = (undefined4 *)param_1[2];
      }
      *param_1 = (long)pvVar3;
      param_1[1] = (long)puVar6;
      param_1[2] = (long)puVar8;
      param_1[3] = (long)((long)pvVar3 + uVar5 * 0xa8);
      local_80 = pvVar9;
      puStack_78 = puVar10;
      local_70 = puVar12;
      puStack_68 = puVar13;
      while (puVar10 != puVar12) {
        puVar12 = puVar12 + -0x2a;
        FUN_00883364(&local_80,puVar12);
      }
      local_70 = puVar12;
      if (local_80 != (void *)0x0) {
        operator_delete(local_80);
      }
    }
    else {
      lVar4 = (((long)puVar10 - (long)pvVar9 >> 3) * -0x30c30c30c30c30c3 + 1) / 2;
      puVar13 = puVar10 + lVar4 * -0x2a;
      puVar8 = puVar13;
      if (puVar10 != puVar11) {
        do {
          puVar12 = puVar10 + 0x2a;
          puVar13 = puVar8 + 0x2a;
          *puVar8 = *puVar10;
          FUN_008836e4(puVar8 + 2,puVar10 + 2);
          puVar8 = puVar13;
          puVar10 = puVar12;
        } while (puVar12 != puVar11);
        puVar10 = (undefined4 *)param_1[1];
      }
      param_1[1] = (long)(puVar10 + lVar4 * -0x2a);
      param_1[2] = (long)puVar13;
      puVar11 = puVar13;
    }
  }
  if (puVar11 != (undefined4 *)0x0) {
    *puVar11 = *param_2;
    uVar15 = param_3[5];
    uVar14 = param_3[4];
    uVar7 = param_3[6];
    uVar17 = param_3[1];
    uVar16 = *param_3;
    uVar19 = param_3[3];
    uVar18 = param_3[2];
    *(undefined8 *)(puVar11 + 0x10) = param_3[7];
    *(undefined8 *)(puVar11 + 0xe) = uVar7;
    *(undefined8 *)(puVar11 + 0xc) = uVar15;
    *(undefined8 *)(puVar11 + 10) = uVar14;
    *(undefined8 *)(puVar11 + 8) = uVar19;
    *(undefined8 *)(puVar11 + 6) = uVar18;
    *(undefined8 *)(puVar11 + 4) = uVar17;
    *(undefined8 *)(puVar11 + 2) = uVar16;
    uVar1 = *(undefined4 *)(param_3 + 8);
    *(undefined8 *)(puVar11 + 0x16) = 0;
    *(undefined8 *)(puVar11 + 0x18) = 0;
    *(undefined8 *)(puVar11 + 0x14) = 0;
    puVar11[0x12] = uVar1;
    *(undefined8 *)(puVar11 + 0x14) = param_3[9];
    *(undefined8 *)(puVar11 + 0x16) = param_3[10];
    *(undefined8 *)(puVar11 + 0x18) = param_3[0xb];
    uVar7 = param_3[0xc];
    param_3[10] = 0;
    param_3[0xb] = 0;
    param_3[9] = 0;
    *(undefined8 *)(puVar11 + 0x1e) = 0;
    *(undefined8 *)(puVar11 + 0x20) = 0;
    *(undefined8 *)(puVar11 + 0x1a) = uVar7;
    *(undefined8 *)(puVar11 + 0x1c) = 0;
    *(undefined8 *)(puVar11 + 0x1c) = param_3[0xd];
    *(undefined8 *)(puVar11 + 0x1e) = param_3[0xe];
    *(undefined8 *)(puVar11 + 0x20) = param_3[0xf];
    uVar15 = param_3[0x11];
    uVar14 = param_3[0x10];
    uVar7 = param_3[0x12];
    param_3[0xd] = 0;
    param_3[0xe] = 0;
    param_3[0xf] = 0;
    *(undefined8 *)(puVar11 + 0x28) = param_3[0x13];
    *(undefined8 *)(puVar11 + 0x26) = uVar7;
    *(undefined8 *)(puVar11 + 0x24) = uVar15;
    *(undefined8 *)(puVar11 + 0x22) = uVar14;
    param_1[2] = (long)(puVar11 + 0x2a);
    return;
  }
LAB_00884a40:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00884a58  FUN_00884a58 =====

undefined8 FUN_00884a58(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar11 = (undefined4 *)param_1[1];
  uVar2 = param_2[1];
  puVar5 = (undefined4 *)param_2[2];
  puVar6 = param_3;
  if (param_3 != puVar11) {
    do {
      if (puVar5 == (undefined4 *)0x0) goto LAB_00884c90;
      *puVar5 = *puVar6;
      uVar9 = *(undefined8 *)(puVar6 + 0xe);
      uVar10 = *(undefined8 *)(puVar6 + 0xc);
      uVar8 = *(undefined8 *)(puVar6 + 10);
      uVar13 = *(undefined8 *)(puVar6 + 4);
      uVar12 = *(undefined8 *)(puVar6 + 2);
      uVar15 = *(undefined8 *)(puVar6 + 8);
      uVar14 = *(undefined8 *)(puVar6 + 6);
      *(undefined8 *)(puVar5 + 0x10) = *(undefined8 *)(puVar6 + 0x10);
      *(undefined8 *)(puVar5 + 0xe) = uVar9;
      *(undefined8 *)(puVar5 + 0xc) = uVar10;
      *(undefined8 *)(puVar5 + 10) = uVar8;
      *(undefined8 *)(puVar5 + 8) = uVar15;
      *(undefined8 *)(puVar5 + 6) = uVar14;
      *(undefined8 *)(puVar5 + 4) = uVar13;
      *(undefined8 *)(puVar5 + 2) = uVar12;
      uVar3 = puVar6[0x12];
      *(undefined8 *)(puVar5 + 0x16) = 0;
      *(undefined8 *)(puVar5 + 0x18) = 0;
      *(undefined8 *)(puVar5 + 0x14) = 0;
      puVar5[0x12] = uVar3;
      *(undefined8 *)(puVar5 + 0x14) = *(undefined8 *)(puVar6 + 0x14);
      *(undefined8 *)(puVar5 + 0x16) = *(undefined8 *)(puVar6 + 0x16);
      *(undefined8 *)(puVar5 + 0x18) = *(undefined8 *)(puVar6 + 0x18);
      uVar9 = *(undefined8 *)(puVar6 + 0x1a);
      *(undefined8 *)(puVar6 + 0x16) = 0;
      *(undefined8 *)(puVar6 + 0x18) = 0;
      *(undefined8 *)(puVar6 + 0x14) = 0;
      *(undefined8 *)(puVar5 + 0x1e) = 0;
      *(undefined8 *)(puVar5 + 0x20) = 0;
      *(undefined8 *)(puVar5 + 0x1a) = uVar9;
      *(undefined8 *)(puVar5 + 0x1c) = 0;
      *(undefined8 *)(puVar5 + 0x1c) = *(undefined8 *)(puVar6 + 0x1c);
      *(undefined8 *)(puVar5 + 0x1e) = *(undefined8 *)(puVar6 + 0x1e);
      *(undefined8 *)(puVar5 + 0x20) = *(undefined8 *)(puVar6 + 0x20);
      puVar4 = (undefined8 *)(puVar6 + 0x28);
      uVar9 = *(undefined8 *)(puVar6 + 0x26);
      uVar10 = *(undefined8 *)(puVar6 + 0x24);
      uVar8 = *(undefined8 *)(puVar6 + 0x22);
      *(undefined8 *)(puVar6 + 0x1c) = 0;
      *(undefined8 *)(puVar6 + 0x1e) = 0;
      *(undefined8 *)(puVar6 + 0x20) = 0;
      puVar6 = puVar6 + 0x2a;
      *(undefined8 *)(puVar5 + 0x28) = *puVar4;
      *(undefined8 *)(puVar5 + 0x26) = uVar9;
      *(undefined8 *)(puVar5 + 0x24) = uVar10;
      *(undefined8 *)(puVar5 + 0x22) = uVar8;
      puVar5 = puVar5 + 0x2a;
      puVar7 = param_3;
    } while (puVar6 != puVar11);
    do {
      FUN_00883364(param_1,puVar7);
      puVar7 = puVar7 + 0x2a;
    } while (puVar7 != puVar11);
    puVar6 = (undefined4 *)param_1[1];
    puVar5 = (undefined4 *)param_2[2];
  }
  param_2[2] = (long)puVar5 + ((long)puVar6 - (long)param_3);
  param_1[1] = param_3;
  puVar6 = (undefined4 *)*param_1;
  puVar5 = (undefined4 *)(param_2[1] + ((long)puVar6 - (long)param_3));
  puVar11 = puVar6;
  puVar7 = puVar5;
  if ((long)puVar6 - (long)param_3 != 0) {
    do {
      if (puVar7 == (undefined4 *)0x0) {
LAB_00884c90:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *puVar7 = *puVar11;
      uVar9 = *(undefined8 *)(puVar11 + 0xe);
      uVar10 = *(undefined8 *)(puVar11 + 0xc);
      uVar8 = *(undefined8 *)(puVar11 + 10);
      uVar13 = *(undefined8 *)(puVar11 + 4);
      uVar12 = *(undefined8 *)(puVar11 + 2);
      uVar15 = *(undefined8 *)(puVar11 + 8);
      uVar14 = *(undefined8 *)(puVar11 + 6);
      *(undefined8 *)(puVar7 + 0x10) = *(undefined8 *)(puVar11 + 0x10);
      *(undefined8 *)(puVar7 + 0xe) = uVar9;
      *(undefined8 *)(puVar7 + 0xc) = uVar10;
      *(undefined8 *)(puVar7 + 10) = uVar8;
      *(undefined8 *)(puVar7 + 8) = uVar15;
      *(undefined8 *)(puVar7 + 6) = uVar14;
      *(undefined8 *)(puVar7 + 4) = uVar13;
      *(undefined8 *)(puVar7 + 2) = uVar12;
      uVar3 = puVar11[0x12];
      *(undefined8 *)(puVar7 + 0x16) = 0;
      *(undefined8 *)(puVar7 + 0x18) = 0;
      *(undefined8 *)(puVar7 + 0x14) = 0;
      puVar7[0x12] = uVar3;
      *(undefined8 *)(puVar7 + 0x14) = *(undefined8 *)(puVar11 + 0x14);
      *(undefined8 *)(puVar7 + 0x16) = *(undefined8 *)(puVar11 + 0x16);
      *(undefined8 *)(puVar7 + 0x18) = *(undefined8 *)(puVar11 + 0x18);
      uVar9 = *(undefined8 *)(puVar11 + 0x1a);
      *(undefined8 *)(puVar11 + 0x16) = 0;
      *(undefined8 *)(puVar11 + 0x18) = 0;
      *(undefined8 *)(puVar11 + 0x14) = 0;
      *(undefined8 *)(puVar7 + 0x1e) = 0;
      *(undefined8 *)(puVar7 + 0x20) = 0;
      *(undefined8 *)(puVar7 + 0x1a) = uVar9;
      *(undefined8 *)(puVar7 + 0x1c) = 0;
      *(undefined8 *)(puVar7 + 0x1c) = *(undefined8 *)(puVar11 + 0x1c);
      *(undefined8 *)(puVar7 + 0x1e) = *(undefined8 *)(puVar11 + 0x1e);
      *(undefined8 *)(puVar7 + 0x20) = *(undefined8 *)(puVar11 + 0x20);
      uVar9 = *(undefined8 *)(puVar11 + 0x26);
      uVar10 = *(undefined8 *)(puVar11 + 0x24);
      uVar8 = *(undefined8 *)(puVar11 + 0x22);
      *(undefined8 *)(puVar11 + 0x1c) = 0;
      *(undefined8 *)(puVar11 + 0x1e) = 0;
      *(undefined8 *)(puVar11 + 0x20) = 0;
      puVar1 = puVar11 + 0x2a;
      *(undefined8 *)(puVar7 + 0x28) = *(undefined8 *)(puVar11 + 0x28);
      *(undefined8 *)(puVar7 + 0x26) = uVar9;
      *(undefined8 *)(puVar7 + 0x24) = uVar10;
      *(undefined8 *)(puVar7 + 0x22) = uVar8;
      puVar11 = puVar1;
      puVar7 = puVar7 + 0x2a;
    } while (puVar1 != param_3);
    do {
      FUN_00883364(param_1,puVar6);
      puVar6 = puVar6 + 0x2a;
    } while (puVar6 != param_3);
  }
  param_2[1] = puVar5;
  uVar9 = *param_1;
  uVar10 = param_1[2];
  param_1[1] = uVar9;
  uVar12 = param_2[1];
  uVar8 = param_2[3];
  param_1[1] = param_2[2];
  *param_1 = uVar12;
  param_1[2] = uVar8;
  param_2[1] = uVar9;
  param_2[2] = uVar9;
  param_2[3] = uVar10;
  *param_2 = uVar9;
  return uVar2;
}


// ===== 00884ca4  FUN_00884ca4 =====

void FUN_00884ca4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00884cbc  FUN_00884cbc =====

undefined8 * FUN_00884cbc(long *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  size_t __n;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  void *__dest;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  void *local_70;
  undefined8 *puStack_68;
  undefined8 *local_60;
  void *pvStack_58;
  undefined4 local_50;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    puVar8 = param_2;
    if (param_2 == puVar2) {
      if (param_2 == (undefined8 *)0x0) {
LAB_00884f0c:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *(undefined4 *)puVar2 = *param_3;
      uVar13 = param_4[1];
      uVar12 = *param_4;
      uVar11 = param_4[3];
      uVar10 = param_4[2];
      *(undefined4 *)((long)puVar2 + 0x24) = *(undefined4 *)(param_4 + 4);
      *(undefined8 *)((long)puVar2 + 0x1c) = uVar11;
      *(undefined8 *)((long)puVar2 + 0x14) = uVar10;
      *(undefined8 *)((long)puVar2 + 0xc) = uVar13;
      *(undefined8 *)((long)puVar2 + 4) = uVar12;
      param_1[1] = (long)(puVar2 + 5);
    }
    else {
      puStack_68 = (undefined8 *)param_4[1];
      local_70 = (void *)*param_4;
      pvStack_58 = (void *)param_4[3];
      local_60 = (undefined8 *)param_4[2];
      local_50 = *(undefined4 *)(param_4 + 4);
      uVar3 = *param_3;
      puVar1 = puVar2;
      for (puVar5 = puVar2 + -5; puVar5 < puVar2; puVar5 = puVar5 + 5) {
        if (puVar1 == (undefined8 *)0x0) goto LAB_00884f0c;
        uVar13 = puVar5[1];
        uVar12 = *puVar5;
        uVar11 = puVar5[3];
        uVar10 = puVar5[2];
        puVar1[4] = puVar5[4];
        puVar1[1] = uVar13;
        *puVar1 = uVar12;
        puVar1[3] = uVar11;
        puVar1[2] = uVar10;
        puVar1 = puVar1 + 5;
      }
      param_1[1] = (long)puVar1;
      if (puVar2 != param_2 + 5) {
        lVar9 = 0;
        do {
          *(undefined4 *)((long)puVar2 + lVar9 + -0x28) =
               *(undefined4 *)((long)puVar2 + lVar9 + -0x50);
          lVar4 = lVar9 + -0x50;
          *(undefined4 *)((long)puVar2 + lVar9 + -4) = *(undefined4 *)((long)puVar2 + lVar9 + -0x2c)
          ;
          *(undefined8 *)((long)puVar2 + lVar9 + -0xc) =
               *(undefined8 *)((long)puVar2 + lVar9 + -0x34);
          *(undefined8 *)((long)puVar2 + lVar9 + -0x14) =
               *(undefined8 *)((long)puVar2 + lVar9 + -0x3c);
          *(undefined8 *)((long)puVar2 + lVar9 + -0x1c) =
               *(undefined8 *)((long)puVar2 + lVar9 + -0x44);
          *(undefined8 *)((long)puVar2 + lVar9 + -0x24) =
               *(undefined8 *)((long)puVar2 + lVar9 + -0x4c);
          lVar9 = lVar9 + -0x28;
        } while ((undefined8 *)((long)puVar2 + lVar4) != param_2);
      }
      *(undefined4 *)param_2 = uVar3;
      *(undefined8 **)((long)param_2 + 0xc) = puStack_68;
      *(void **)((long)param_2 + 4) = local_70;
      *(void **)((long)param_2 + 0x1c) = pvStack_58;
      *(undefined8 **)((long)param_2 + 0x14) = local_60;
      *(undefined4 *)((long)param_2 + 0x24) = local_50;
    }
  }
  else {
    lVar9 = *param_1;
    uVar6 = ((long)puVar2 - lVar9 >> 3) * -0x3333333333333333 + 1;
    if (0x666666666666666 < uVar6) {
      FUN_00885174();
LAB_00884f24:
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    local_70 = (void *)0x0;
    lVar4 = param_1[2] - lVar9 >> 3;
    uVar7 = lVar4 * -0x6666666666666666;
    if (uVar7 < uVar6 || uVar7 - uVar6 == 0) {
      uVar7 = uVar6;
    }
    if (0x333333333333332 < (ulong)(lVar4 * -0x3333333333333333)) {
      uVar7 = 0x666666666666666;
    }
    if (uVar7 != 0) {
      if (0x666666666666666 < uVar7) goto LAB_00884f24;
      local_70 = operator_new(uVar7 * 0x28);
    }
    pvStack_58 = (void *)((long)local_70 + uVar7 * 0x28);
    puStack_68 = (undefined8 *)((long)local_70 + ((long)param_2 - lVar9));
    local_60 = puStack_68;
    FUN_00884f28(&local_70,param_3,param_4);
    puVar8 = puStack_68;
    memcpy(local_60,param_2,param_1[1] - (long)param_2);
    lVar9 = param_1[1];
    param_1[1] = (long)param_2;
    __n = (long)param_2 - *param_1;
    __dest = (void *)((long)puStack_68 - __n);
    local_60 = (undefined8 *)((long)local_60 + (lVar9 - (long)param_2));
    memcpy(__dest,(void *)*param_1,__n);
    local_70 = (void *)*param_1;
    lVar9 = param_1[2];
    *param_1 = (long)__dest;
    param_1[2] = (long)pvStack_58;
    param_1[1] = (long)local_60;
    if (local_70 != (void *)0x0) {
      puStack_68 = (undefined8 *)local_70;
      local_60 = (undefined8 *)local_70;
      pvStack_58 = (void *)lVar9;
      operator_delete(local_70);
    }
  }
  return puVar8;
}


// ===== 00884f28  FUN_00884f28 =====

void FUN_00884f28(undefined8 *param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *pvVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  puVar12 = (undefined8 *)param_1[2];
  if ((undefined8 *)param_1[3] == puVar12) {
    pvVar3 = (void *)*param_1;
    puVar13 = (undefined8 *)param_1[1];
    if ((long)puVar13 - (long)pvVar3 == 0) {
      uVar6 = ((long)param_1[3] - (long)pvVar3 >> 3) * -0x6666666666666666;
      if (puVar12 == puVar13) {
        uVar6 = 1;
      }
      if (0x666666666666666 < uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      pvVar4 = operator_new(uVar6 * 0x28);
      lVar5 = (long)puVar12 - (long)puVar13;
      puVar7 = (undefined8 *)((long)pvVar4 + (uVar6 >> 2) * 0x28);
      puVar8 = puVar7;
      if (lVar5 != 0) {
        puVar8 = (undefined8 *)((long)puVar7 + lVar5);
        puVar9 = puVar7;
        puVar11 = puVar13;
        do {
          if (puVar9 == (undefined8 *)0x0) goto LAB_0088515c;
          uVar17 = puVar11[1];
          uVar16 = *puVar11;
          uVar15 = puVar11[3];
          uVar14 = puVar11[2];
          lVar5 = lVar5 + -0x28;
          puVar2 = puVar11 + 4;
          puVar11 = puVar11 + 5;
          puVar9[4] = *puVar2;
          puVar9[1] = uVar17;
          *puVar9 = uVar16;
          puVar9[3] = uVar15;
          puVar9[2] = uVar14;
          puVar9 = puVar9 + 5;
        } while (lVar5 != 0);
      }
      *param_1 = pvVar4;
      param_1[1] = puVar7;
      param_1[2] = puVar8;
      param_1[3] = (void *)((long)pvVar4 + uVar6 * 0x28);
      uVar6 = (ulong)(((long)puVar13 - (long)puVar12) * 0x1333333333333333) >> 3;
      uVar10 = (long)puVar12 * -0x1333333333333333 - 8U >> 3;
      if (uVar10 <= uVar6) {
        uVar6 = uVar10;
      }
      puVar8 = puVar12;
      if ((1 < uVar6) && ((((int)puVar13 - (int)puVar12 | -(int)puVar12) & 7U) == 0)) {
        uVar6 = uVar6 & 0x1ffffffffffffffe;
        puVar8 = puVar12 + uVar6 * -5;
        do {
          uVar6 = uVar6 - 2;
        } while (uVar6 != 0);
      }
      while (puVar8 != puVar13) {
        puVar8 = puVar8 + -5;
        if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      if (puVar13 != (undefined8 *)0x0) {
        operator_delete(pvVar3);
      }
    }
    else {
      lVar5 = (((long)puVar13 - (long)pvVar3 >> 3) * -0x3333333333333333 + 1) / 2;
      puVar8 = puVar13 + lVar5 * -5;
      if (puVar13 != puVar12) {
        do {
          *(undefined4 *)puVar8 = *(undefined4 *)puVar13;
          puVar1 = (undefined4 *)((long)puVar13 + 0x24);
          uVar15 = *(undefined8 *)((long)puVar13 + 0x1c);
          uVar14 = *(undefined8 *)((long)puVar13 + 0x14);
          uVar17 = *(undefined8 *)((long)puVar13 + 0xc);
          uVar16 = *(undefined8 *)((long)puVar13 + 4);
          puVar13 = puVar13 + 5;
          *(undefined4 *)((long)puVar8 + 0x24) = *puVar1;
          *(undefined8 *)((long)puVar8 + 0x1c) = uVar15;
          *(undefined8 *)((long)puVar8 + 0x14) = uVar14;
          *(undefined8 *)((long)puVar8 + 0xc) = uVar17;
          *(undefined8 *)((long)puVar8 + 4) = uVar16;
          puVar8 = puVar8 + 5;
        } while (puVar13 != puVar12);
        puVar13 = (undefined8 *)param_1[1];
      }
      param_1[1] = puVar13 + lVar5 * -5;
      param_1[2] = puVar8;
      puVar12 = puVar8;
    }
  }
  if (puVar12 != (undefined8 *)0x0) {
    *(undefined4 *)puVar12 = *param_2;
    uVar17 = param_3[1];
    uVar16 = *param_3;
    uVar15 = param_3[3];
    uVar14 = param_3[2];
    *(undefined4 *)((long)puVar12 + 0x24) = *(undefined4 *)(param_3 + 4);
    *(undefined8 *)((long)puVar12 + 0x1c) = uVar15;
    *(undefined8 *)((long)puVar12 + 0x14) = uVar14;
    *(undefined8 *)((long)puVar12 + 0xc) = uVar17;
    *(undefined8 *)((long)puVar12 + 4) = uVar16;
    param_1[2] = puVar12 + 5;
    return;
  }
LAB_0088515c:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00885174  FUN_00885174 =====

void FUN_00885174(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 0088518c  FUN_0088518c =====

undefined8 * FUN_0088518c(undefined8 *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 *local_50;
  undefined8 *puStack_48;
  undefined1 *local_40;
  
  puStack_48 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
  local_50 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  puVar3 = (undefined8 *)FUN_0087b4ac(&local_50);
  puVar1 = puStack_48;
  puVar5 = local_50;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar6 = (long)puStack_48 - (long)local_50;
  if (uVar6 != 0) {
    if (0xaaaaaaaaaaaaaaa < (ulong)(((long)uVar6 >> 3) * -0x5555555555555555)) {
      uVar2 = FUN_00885360();
      return (undefined8 *)(ulong)(uVar2 >> 1 & 0x3f);
    }
    puVar4 = (undefined8 *)operator_new(uVar6);
    *param_1 = puVar4;
    param_1[1] = puVar4;
    param_1[2] = (undefined1 *)((long)puVar4 + uVar6);
    do {
      uStack_68 = puVar5[1];
      local_70 = *puVar5;
      local_60 = puVar5[2];
      if (puVar4 < (undefined8 *)param_1[2]) {
        if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        puVar4[2] = local_60;
        puVar3 = puVar4 + 3;
        puVar4[1] = uStack_68;
        *puVar4 = local_70;
      }
      else {
        puVar3 = (undefined8 *)FUN_00885378(param_1,&local_70);
      }
      puVar5 = puVar5 + 3;
      param_1[1] = puVar3;
      puVar4 = puVar3;
    } while (puVar5 != puVar1);
  }
  if (local_50 != (undefined8 *)0x0) {
    uVar6 = (ulong)(((long)local_50 - (long)puStack_48) * 0x1555555555555555) >> 3;
    uVar7 = (long)puStack_48 * -0x1555555555555555 - 8U >> 3;
    if (uVar7 <= uVar6) {
      uVar6 = uVar7;
    }
    puVar5 = puStack_48;
    if ((1 < uVar6) && ((((int)local_50 - (int)puStack_48 | -(int)puStack_48) & 7U) == 0)) {
      uVar6 = uVar6 & 0x1ffffffffffffffe;
      puVar5 = puStack_48 + uVar6 * -3;
      do {
        uVar6 = uVar6 - 2;
      } while (uVar6 != 0);
    }
    while (puVar5 != local_50) {
      puVar5 = puVar5 + -3;
      if (puVar5 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    puStack_48 = local_50;
    operator_delete(local_50);
    puVar3 = local_50;
  }
  return puVar3;
}


// ===== 0088532c  FUN_0088532c =====

uint FUN_0088532c(uint param_1)

{
  return param_1 >> 1 & 0x3f;
}


// ===== 00885338  thunk_FUN_0087b608 =====

void thunk_FUN_0087b608(void)

{
  FUN_0087b608();
  return;
}


