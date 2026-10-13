// ===== 00b7b640  FUN_00b7b640 =====

void FUN_00b7b640(long param_1)

{
  FUN_00b7b398((void *)(param_1 + -0x40));
  operator_delete((void *)(param_1 + -0x40));
  return;
}


// ===== 00b7b674  FUN_00b7b674 =====

void FUN_00b7b674(undefined8 param_1,long param_2,uint param_3)

{
  long *plVar1;
  undefined1 *puVar2;
  ulong uVar3;
  long *plVar4;
  undefined1 auStack_198 [168];
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined1 *puStack_e0;
  undefined1 *puStack_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 *puStack_c0;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  
  puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
  local_f0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
  local_d0 = &DAT_aaaaaaaaaaaaaaaa;
  local_b8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00669500(&local_f0);
  for (plVar4 = *(long **)(param_2 + 0x50); plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
    while (*(uint *)(plVar4 + 4) <= param_3) {
      if (param_3 == *(uint *)(plVar4 + 4)) {
        if (plVar4 != (long *)(param_2 + 0x50)) {
          FUN_00b7b838(auStack_198,plVar4[5]);
          FUN_00b618b4(&local_f0,auStack_198);
          FUN_0066981c(auStack_198);
          if (&puStack_a8 != (undefined1 **)(param_2 + 0x130)) {
            FUN_005e2544();
          }
          plVar1 = *(long **)(param_2 + 0x178);
          for (plVar4 = *(long **)(param_2 + 0x170); plVar4 != plVar1; plVar4 = plVar4 + 0x1b) {
            (**(code **)(*plVar4 + 0x10))(auStack_198,plVar4);
            puVar2 = local_b8;
            if (local_b8 < local_b0) {
              if (local_b8 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                          );
              }
              FUN_006692f8(local_b8,auStack_198);
              local_b8 = puVar2 + 0x70;
            }
            else {
              local_b8 = (undefined1 *)FUN_00b63638(&puStack_c0,auStack_198);
            }
            FUN_00668620(auStack_198);
          }
          FUN_0066953c(param_1,&local_f0);
          goto LAB_00b7b7f0;
        }
        goto LAB_00b7b7b4;
      }
      plVar4 = (long *)plVar4[1];
      if (plVar4 == (long *)0x0) goto LAB_00b7b7b4;
    }
  }
LAB_00b7b7b4:
  uVar3 = FUN_004022fc();
  if ((uVar3 & 1) == 0) {
    FUN_00623bb0(&DAT_001fcbd8,"../../media/engine/webrtc_video_engine.cc",0x58ba,
                 "Attempting to get RTP receive parameters for stream with SSRC ",param_3,
                 " which doesn\'t exist.");
  }
  FUN_00669500(param_1);
LAB_00b7b7f0:
  FUN_0066981c(&local_f0);
  return;
}


// ===== 00b7b838  FUN_00b7b838 =====

void FUN_00b7b838(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 *local_68;
  undefined4 *local_60;
  undefined8 local_58;
  
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  *param_1 = &DAT_aaaaaaaaaaaaaaaa;
  param_1[3] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[5] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[4] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[7] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[6] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[9] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[8] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xb] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[10] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xd] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xc] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xf] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xe] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0x11] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0x10] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0x13] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0x12] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0x14] = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00669500(param_1);
  local_68 = (undefined4 *)0x0;
  local_60 = (undefined4 *)0x0;
  local_58 = 0;
  FUN_0088e194(param_2 + 0x38,&local_68);
  puVar2 = local_60;
  puVar4 = local_68;
  while( true ) {
    if (puVar4 == puVar2) {
      *(bool *)(param_1 + 0x13) = *(int *)(param_2 + 0x104) == 2;
      if (local_68 != (undefined4 *)0x0) {
        uVar6 = (ulong)((long)local_60 + (-4 - ((long)local_60 << 0x3e))) >> 2;
        uVar5 = (ulong)(((long)local_68 - (long)local_60 << 0x3e) -
                       ((long)local_68 - (long)local_60)) >> 2;
        if (uVar6 <= uVar5) {
          uVar5 = uVar6;
        }
        puVar4 = local_60;
        if ((1 < uVar5) && ((((int)local_68 - (int)local_60 | -(int)local_60) & 3U) == 0)) {
          uVar5 = uVar5 & 0x3ffffffffffffffe;
          puVar4 = local_60 + -uVar5;
          do {
            uVar5 = uVar5 - 2;
          } while (uVar5 != 0);
        }
        while (puVar4 != local_68) {
          puVar4 = puVar4 + -1;
          if (puVar4 == (undefined4 *)0x0) {
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
    uVar5 = param_1[0xd];
    uVar1 = *puVar4;
    if (uVar5 < (ulong)param_1[0xe]) {
      if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      FUN_00668fb0(uVar5);
      lVar3 = uVar5 + 0x130;
    }
    else {
      lVar3 = FUN_00b638cc(param_1 + 0xc);
    }
    param_1[0xd] = lVar3;
    if (param_1[0xc] == lVar3) break;
    puVar4 = puVar4 + 1;
    *(undefined4 *)(lVar3 + -0x130) = uVar1;
    *(undefined1 *)(lVar3 + -300) = 1;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__vector/vector.h:439: libc++ Hardening assertion !empty() failed: back() called on an empty vector\n"
            );
}


// ===== 00b7b9f0  FUN_00b7b9f0 =====

void FUN_00b7b9f0(long param_1)

{
  FUN_00b7b674(param_1 + -0x40);
  return;
}


// ===== 00b7b9fc  FUN_00b7b9fc =====

void FUN_00b7b9fc(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined1 auStack_a0 [112];
  
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  *param_1 = &DAT_aaaaaaaaaaaaaaaa;
  param_1[3] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[5] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[4] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[7] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[6] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[9] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[8] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xb] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[10] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xd] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xc] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xf] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0xe] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0x11] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0x10] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0x13] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0x12] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[0x14] = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00669500(param_1);
  if (*(long *)(param_2 + 0xa8) != 0) {
    uVar1 = param_1[0xd];
    if (uVar1 < (ulong)param_1[0xe]) {
      if (uVar1 == 0) {
LAB_00b7baec:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      FUN_00668fb0(uVar1);
      lVar4 = uVar1 + 0x130;
    }
    else {
      lVar4 = FUN_00b638cc(param_1 + 0xc);
    }
    plVar2 = *(long **)(param_2 + 0x170);
    plVar3 = *(long **)(param_2 + 0x178);
    param_1[0xd] = lVar4;
    for (; plVar2 != plVar3; plVar2 = plVar2 + 0x1b) {
      (**(code **)(*plVar2 + 0x10))(auStack_a0,plVar2);
      uVar1 = param_1[7];
      if (uVar1 < (ulong)param_1[8]) {
        if (uVar1 == 0) goto LAB_00b7baec;
        FUN_006692f8(uVar1,auStack_a0);
        lVar4 = uVar1 + 0x70;
      }
      else {
        lVar4 = FUN_00b63638(param_1 + 6,auStack_a0);
      }
      param_1[7] = lVar4;
      FUN_00668620(auStack_a0);
    }
  }
  return;
}


// ===== 00b7bb0c  FUN_00b7bb0c =====

void FUN_00b7bb0c(long param_1)

{
  FUN_00b7b9fc(param_1 + -0x40);
  return;
}


// ===== 00b7bb18  FUN_00b7bb18 =====

/* WARNING: Removing unreachable block (ram,0x00b7c188) */
/* WARNING: Removing unreachable block (ram,0x00b7be00) */
/* WARNING: Removing unreachable block (ram,0x00b7be1c) */
/* WARNING: Removing unreachable block (ram,0x00b7c52c) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_00b7bb18(long param_1,long param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  size_t __n;
  size_t sVar3;
  undefined8 *__s1;
  byte bVar4;
  byte bVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  bool bVar9;
  int iVar10;
  ulong uVar11;
  void *pvVar12;
  long lVar13;
  void *pvVar14;
  void *pvVar15;
  ulong uVar16;
  undefined8 *******pppppppuVar17;
  undefined8 *******pppppppuVar18;
  undefined4 uVar19;
  undefined8 *******pppppppuVar20;
  void *pvVar21;
  undefined1 *puVar22;
  void *pvVar23;
  void *pvVar24;
  long lVar25;
  void *pvVar26;
  void *pvVar27;
  undefined8 uVar28;
  undefined8 ******ppppppuVar29;
  undefined8 ******ppppppuVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined1 uStack_129;
  char *local_128;
  undefined8 local_120;
  undefined1 *local_118;
  char *local_110;
  char **ppcStack_108;
  undefined8 *******local_100;
  undefined8 *******pppppppuStack_f8;
  undefined1 *local_f0;
  char **local_e8;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined1 *puStack_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined8 *******local_90;
  undefined8 *******pppppppuStack_88;
  undefined1 *local_80;
  
  uVar11 = FUN_00b7059c(param_2 + 0x20);
  if ((uVar11 & 1) == 0) {
    return 0;
  }
  lVar25 = *(long *)(param_2 + 0x38);
  lVar7 = *(long *)(param_2 + 0x40) - lVar25;
  lVar13 = 0;
  if (lVar7 != 0) {
    lVar13 = lVar25;
  }
  lVar8 = *(long *)(param_1 + 0x138) - *(long *)(param_1 + 0x130);
  lVar25 = 0;
  if (lVar8 != 0) {
    lVar25 = *(long *)(param_1 + 0x130);
  }
  uVar11 = FUN_00b67838(lVar13,lVar7 >> 5,lVar25,lVar8 >> 5);
  if ((uVar11 & 1) == 0) {
    return 0;
  }
  puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_e0 = &DAT_aaaaaaaaaaaaaaaa;
  local_c8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  local_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00b707c0(&local_e0,param_2 + 0x20);
  puVar6 = local_b0;
  puVar22 = puStack_b8;
  if ((int)local_e0 != 0) {
    uVar11 = FUN_004249b0();
    if ((uVar11 & 1) == 0) {
      local_128 = "../../media/engine/webrtc_video_engine.cc";
      local_120 = 0x5a3b;
      local_118 = &uStack_129;
      ppcStack_108 = &local_128;
      local_110 = "GetChangedReceiverParameters called without valid video codecs, error =";
      FUN_00b86d14(&local_90,&local_e0);
      local_e8 = &local_110;
      pppppppuStack_f8 = pppppppuStack_88;
      local_100 = local_90;
      local_f0 = local_80;
      FUN_00623bb0(&DAT_001f6510,*ppcStack_108,*(undefined4 *)(ppcStack_108 + 1),local_110,
                   &local_100);
      if ((long)local_f0 < 0) {
        operator_delete(local_100);
      }
    }
    uVar19 = 0;
    goto LAB_00b7c4d8;
  }
  if (((ulong)local_a0 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
              );
  }
  uVar11 = (long)local_b0 - (long)puStack_b8;
  if (uVar11 == 0) {
    pvVar21 = (void *)0x0;
    pvVar12 = (void *)0x0;
  }
  else {
    if (0x108421084210842 < (ulong)(((long)uVar11 >> 3) * -0x1084210842108421)) goto LAB_00b7c5ac;
    pvVar12 = operator_new(uVar11);
    pvVar21 = pvVar12;
    do {
      if (pvVar21 == (void *)0x0) goto LAB_00b7c548;
      FUN_00890830(pvVar21,puVar22);
      puVar1 = (undefined8 *)(puVar22 + 0xe9);
      uVar28 = *(undefined8 *)(puVar22 + 0xe1);
      uVar32 = *(undefined8 *)(puVar22 + 0xe0);
      uVar31 = *(undefined8 *)(puVar22 + 0xd8);
      puVar22 = puVar22 + 0xf8;
      *(undefined8 *)((long)pvVar21 + 0xe9) = *puVar1;
      *(undefined8 *)((long)pvVar21 + 0xe1) = uVar28;
      *(undefined8 *)((long)pvVar21 + 0xe0) = uVar32;
      *(undefined8 *)((long)pvVar21 + 0xd8) = uVar31;
      pvVar21 = (void *)((long)pvVar21 + 0xf8);
    } while (puVar22 != puVar6);
  }
  if (*(char *)(param_2 + 0x58) == '\x01') {
    pppppppuStack_f8 = (undefined8 *******)&DAT_aaaaaaaaaaaaaaaa;
    local_100 = (undefined8 *******)&DAT_aaaaaaaaaaaaaaaa;
    local_f0 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00b6d4ec(&local_100,*(undefined8 *)(param_1 + 0xf8),1,*(undefined8 *)(param_1 + 0x68));
    pppppppuVar17 = local_100;
    for (pvVar24 = pvVar12; local_100 = pppppppuVar17, pvVar24 != pvVar21;
        pvVar24 = (void *)((long)pvVar24 + 0xf8)) {
      lVar13 = FUN_00892df4(&local_100,pvVar24);
      if (lVar13 == 0) {
        uVar11 = FUN_004249b0();
        if ((uVar11 & 1) == 0) {
          FUN_00891f68(&local_90,pvVar24);
          FUN_00623bb0(&DAT_001f4e90,"../../media/engine/webrtc_video_engine.cc",0x5abb,
                       "GetChangedReceiverParameters called with unsupported video codec: ",
                       &local_90);
        }
        local_90 = &local_100;
        FUN_00b831a4(&local_90);
        uVar19 = 0;
        goto LAB_00b7c4a4;
      }
      pppppppuVar17 = local_100;
    }
    pppppppuVar20 = pppppppuStack_f8;
    if (pppppppuVar17 != (undefined8 *******)0x0) {
      while (pppppppuVar17 != pppppppuVar20) {
        pppppppuVar20 = pppppppuVar20 + -0x1b;
        if (pppppppuVar20 == (undefined8 *******)0x0) goto LAB_00b7c55c;
        (*(code *)**pppppppuVar20)(pppppppuVar20);
      }
      pppppppuStack_f8 = pppppppuVar17;
      operator_delete(local_100);
    }
  }
  lVar13 = *(long *)(param_1 + 0x100);
  lVar25 = *(long *)(param_1 + 0x108);
  uVar11 = lVar25 - lVar13;
  if (uVar11 == 0) {
    pvVar24 = (void *)0x0;
    pvVar14 = (void *)0x0;
  }
  else {
    if (0x108421084210842 < (ulong)(((long)uVar11 >> 3) * -0x1084210842108421)) goto LAB_00b7c5ac;
    pvVar14 = operator_new(uVar11);
    pvVar24 = pvVar14;
    do {
      if (pvVar24 == (void *)0x0) goto LAB_00b7c548;
      FUN_00890830(pvVar24,lVar13);
      puVar1 = (undefined8 *)(lVar13 + 0xe9);
      uVar28 = *(undefined8 *)(lVar13 + 0xe1);
      uVar32 = *(undefined8 *)(lVar13 + 0xe0);
      uVar31 = *(undefined8 *)(lVar13 + 0xd8);
      lVar13 = lVar13 + 0xf8;
      *(undefined8 *)((long)pvVar24 + 0xe9) = *puVar1;
      *(undefined8 *)((long)pvVar24 + 0xe1) = uVar28;
      *(undefined8 *)((long)pvVar24 + 0xe0) = uVar32;
      *(undefined8 *)((long)pvVar24 + 0xd8) = uVar31;
      pvVar24 = (void *)((long)pvVar24 + 0xf8);
    } while (lVar13 != lVar25);
  }
  uVar11 = (long)pvVar21 - (long)pvVar12;
  if (uVar11 == 0) {
    pvVar15 = (void *)0x0;
    pvVar27 = (void *)0x0;
  }
  else {
    if (0x108421084210842 < (ulong)(((long)uVar11 >> 3) * -0x1084210842108421)) goto LAB_00b7c5ac;
    pvVar15 = operator_new(uVar11);
    pvVar23 = pvVar12;
    pvVar27 = pvVar15;
    do {
      if (pvVar27 == (void *)0x0) goto LAB_00b7c548;
      FUN_00890830(pvVar27,pvVar23);
      puVar1 = (undefined8 *)((long)pvVar23 + 0xe9);
      uVar28 = *(undefined8 *)((long)pvVar23 + 0xe1);
      uVar32 = *(undefined8 *)((long)pvVar23 + 0xe0);
      uVar31 = *(undefined8 *)((long)pvVar23 + 0xd8);
      pvVar23 = (void *)((long)pvVar23 + 0xf8);
      *(undefined8 *)((long)pvVar27 + 0xe9) = *puVar1;
      *(undefined8 *)((long)pvVar27 + 0xe1) = uVar28;
      *(undefined8 *)((long)pvVar27 + 0xe0) = uVar32;
      *(undefined8 *)((long)pvVar27 + 0xd8) = uVar31;
      pvVar27 = (void *)((long)pvVar27 + 0xf8);
    } while (pvVar23 != pvVar21);
  }
  if (pvVar14 != pvVar24) {
    FUN_00b83258(pvVar14,pvVar24,
                 LZCOUNT(((long)pvVar24 - (long)pvVar14 >> 3) * -0x1084210842108421) << 1 ^ 0x7e,1);
  }
  lVar13 = (long)pvVar27 - (long)pvVar15;
  if (pvVar15 != pvVar27) {
    FUN_00b83258(pvVar15,pvVar27,LZCOUNT((lVar13 >> 3) * -0x1084210842108421) << 1 ^ 0x7e,1);
  }
  bVar9 = (long)pvVar24 - (long)pvVar14 != lVar13;
  if ((pvVar24 != pvVar14) &&
     (pvVar23 = pvVar14, pvVar26 = pvVar15, (long)pvVar24 - (long)pvVar14 == lVar13)) {
    do {
      uVar16 = FUN_008911c8(pvVar23,pvVar26);
      if (((uVar16 & 1) == 0) ||
         ((uVar16 = FUN_008438fc((long)pvVar23 + 0xd8,(long)pvVar26 + 0xd8), (uVar16 & 1) == 0 ||
          (*(int *)((long)pvVar23 + 0xe8) != *(int *)((long)pvVar26 + 0xe8))))) {
LAB_00b7c014:
        bVar9 = true;
        goto LAB_00b7c01c;
      }
      bVar4 = *(byte *)((long)pvVar26 + 0xf0);
      if ((bVar4 & *(byte *)((long)pvVar23 + 0xf0)) == 0) {
        if (*(byte *)((long)pvVar23 + 0xf0) != bVar4) goto LAB_00b7c014;
      }
      else {
        if ((bVar4 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/optional:1064: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                    );
        }
        if (*(int *)((long)pvVar23 + 0xec) != *(int *)((long)pvVar26 + 0xec)) goto LAB_00b7c014;
      }
      pvVar23 = (void *)((long)pvVar23 + 0xf8);
      pvVar26 = (void *)((long)pvVar26 + 0xf8);
    } while (pvVar23 != pvVar24);
    bVar9 = false;
  }
LAB_00b7c01c:
  if (pvVar15 != (void *)0x0) {
    while (pvVar15 != pvVar27) {
      pvVar27 = (void *)((long)pvVar27 + -0xf8);
      if (pvVar27 == (void *)0x0) goto LAB_00b7c55c;
      FUN_00890cb8(pvVar27);
    }
    operator_delete(pvVar15);
  }
  if (pvVar14 != (void *)0x0) {
    while (pvVar14 != pvVar24) {
      pvVar24 = (void *)((long)pvVar24 + -0xf8);
      if (pvVar24 == (void *)0x0) goto LAB_00b7c55c;
      FUN_00890cb8(pvVar24);
    }
    operator_delete(pvVar14);
  }
  if (bVar9) {
    local_100 = (undefined8 *******)0x0;
    pppppppuStack_f8 = (undefined8 *******)0x0;
    local_f0 = (undefined1 *)0x0;
    pppppppuVar17 = pppppppuStack_f8;
    if (pvVar21 != pvVar12) {
      if (0x108421084210842 < (ulong)(((long)uVar11 >> 3) * -0x1084210842108421)) {
LAB_00b7c5ac:
                    /* WARNING: Subroutine does not return */
        FUN_00b81b14();
      }
      pppppppuVar17 = (undefined8 *******)operator_new(uVar11);
      local_f0 = (undefined1 *)((long)pppppppuVar17 + uVar11);
      pvVar24 = pvVar12;
      local_100 = pppppppuVar17;
      pppppppuStack_f8 = pppppppuVar17;
      do {
        if (pppppppuVar17 == (undefined8 *******)0x0) goto LAB_00b7c548;
        FUN_00890830(pppppppuVar17,pvVar24);
        puVar1 = (undefined8 *)((long)pvVar24 + 0xe9);
        uVar28 = *(undefined8 *)((long)pvVar24 + 0xe1);
        ppppppuVar30 = *(undefined8 *******)((long)pvVar24 + 0xe0);
        ppppppuVar29 = *(undefined8 *******)((long)pvVar24 + 0xd8);
        pvVar24 = (void *)((long)pvVar24 + 0xf8);
        *(undefined8 *)((long)pppppppuVar17 + 0xe9) = *puVar1;
        *(undefined8 *)((long)pppppppuVar17 + 0xe1) = uVar28;
        pppppppuVar17[0x1c] = ppppppuVar30;
        pppppppuVar17[0x1b] = ppppppuVar29;
        pppppppuVar17 = pppppppuVar17 + 0x1f;
      } while (pvVar24 != pvVar21);
    }
    pppppppuStack_f8 = pppppppuVar17;
    puVar22 = local_f0;
    pppppppuVar17 = pppppppuStack_f8;
    local_e8 = (char **)CONCAT71(local_e8._1_7_,1);
    if ((*(byte *)(param_3 + 3) & 1) == 0) {
      if (param_3 == (undefined8 *)0x0) {
LAB_00b7c548:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      pppppppuStack_f8 = (undefined8 *******)0x0;
      local_f0 = (undefined1 *)0x0;
      *param_3 = local_100;
      param_3[1] = pppppppuVar17;
      param_3[2] = puVar22;
      local_100 = (undefined8 *******)0x0;
      *(undefined1 *)(param_3 + 3) = 1;
    }
    else {
      FUN_00b84e5c(param_3,&local_100);
      if ((char)local_e8 != '\x01') goto LAB_00b7c24c;
    }
    pppppppuVar20 = local_100;
    pppppppuVar17 = pppppppuStack_f8;
    if (local_100 != (undefined8 *******)0x0) {
      while (pppppppuVar20 != pppppppuVar17) {
        pppppppuVar17 = pppppppuVar17 + -0x1f;
        if (pppppppuVar17 == (undefined8 *******)0x0) goto LAB_00b7c55c;
        FUN_00890cb8(pppppppuVar17);
      }
      pppppppuStack_f8 = pppppppuVar20;
      operator_delete(local_100);
    }
  }
LAB_00b7c24c:
  pppppppuStack_88 = (undefined8 *******)&DAT_aaaaaaaaaaaaaaaa;
  local_90 = (undefined8 *******)&DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00b67c80(&local_90,(long *)(param_2 + 0x38),PTR_FUN_00d52118,0,*(undefined8 *)(param_1 + 0x68)
              );
  pppppppuVar20 = pppppppuStack_88;
  pppppppuVar17 = local_90;
  lVar13 = *(long *)(param_1 + 0x130);
  uVar11 = (long)pppppppuStack_88 - (long)local_90;
  if (uVar11 == *(long *)(param_1 + 0x138) - lVar13) {
    if (local_90 != pppppppuStack_88) {
      lVar25 = 0;
      do {
        puVar1 = (undefined8 *)((long)pppppppuVar17 + lVar25);
        puVar2 = (undefined8 *)(lVar13 + lVar25);
        bVar4 = *(byte *)((long)puVar1 + 0x17);
        bVar5 = *(byte *)((long)puVar2 + 0x17);
        __n = puVar1[1];
        if (-1 < (char)bVar4) {
          __n = (ulong)bVar4;
        }
        sVar3 = puVar2[1];
        if (-1 < (char)bVar5) {
          sVar3 = (ulong)bVar5;
        }
        if (__n != sVar3) goto LAB_00b7c32c;
        __s1 = (undefined8 *)*puVar1;
        if (-1 < (char)bVar4) {
          __s1 = puVar1;
        }
        puVar1 = (undefined8 *)*puVar2;
        if (-1 < (char)bVar5) {
          puVar1 = puVar2;
        }
        iVar10 = memcmp(__s1,puVar1,__n);
        if (((iVar10 != 0) ||
            (*(int *)((long)pppppppuVar17 + lVar25 + 0x18) != *(int *)(lVar13 + lVar25 + 0x18))) ||
           (*(char *)((long)pppppppuVar17 + lVar25 + 0x1c) != *(char *)(lVar13 + lVar25 + 0x1c)))
        goto LAB_00b7c32c;
        lVar25 = lVar25 + 0x20;
      } while ((undefined8 *******)((long)pppppppuVar17 + lVar25) != pppppppuVar20);
    }
  }
  else {
LAB_00b7c32c:
    local_100 = (undefined8 *******)0x0;
    pppppppuStack_f8 = (undefined8 *******)0x0;
    local_f0 = (undefined1 *)0x0;
    pppppppuVar18 = pppppppuStack_f8;
    if (pppppppuVar20 != pppppppuVar17) {
      if ((long)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005e28a4();
      }
      pppppppuVar18 = (undefined8 *******)operator_new(uVar11);
      local_f0 = (undefined1 *)((long)pppppppuVar18 + uVar11);
      local_100 = pppppppuVar18;
      pppppppuStack_f8 = pppppppuVar18;
      do {
        if (pppppppuVar18 == (undefined8 *******)0x0) goto LAB_00b7c548;
        if (*(char *)((long)pppppppuVar17 + 0x17) < '\0') {
          FUN_005478d8(pppppppuVar18,*pppppppuVar17,pppppppuVar17[1]);
        }
        else {
          ppppppuVar30 = pppppppuVar17[1];
          ppppppuVar29 = *pppppppuVar17;
          pppppppuVar18[2] = pppppppuVar17[2];
          pppppppuVar18[1] = ppppppuVar30;
          *pppppppuVar18 = ppppppuVar29;
        }
        puVar22 = (undefined1 *)((long)pppppppuVar17 + 0x1c);
        uVar19 = *(undefined4 *)(pppppppuVar17 + 3);
        pppppppuVar17 = pppppppuVar17 + 4;
        *(undefined1 *)((long)pppppppuVar18 + 0x1c) = *puVar22;
        *(undefined4 *)(pppppppuVar18 + 3) = uVar19;
        pppppppuVar18 = pppppppuVar18 + 4;
      } while (pppppppuVar17 != pppppppuVar20);
    }
    pppppppuStack_f8 = pppppppuVar18;
    local_e8 = (char **)CONCAT71(local_e8._1_7_,1);
    FUN_00b72170(param_3 + 4,&local_100);
    pppppppuVar17 = local_100;
    if (((char)local_e8 == '\x01') &&
       (pppppppuVar20 = pppppppuStack_f8, local_100 != (undefined8 *******)0x0)) {
      while (pppppppuVar17 != pppppppuVar20) {
        pppppppuVar20 = pppppppuVar20 + -4;
        if (pppppppuVar20 == (undefined8 *******)0x0) goto LAB_00b7c55c;
        FUN_00668f8c(pppppppuVar20);
      }
      pppppppuStack_f8 = pppppppuVar17;
      operator_delete(local_100);
    }
  }
  pppppppuVar17 = local_90;
  if (pvVar21 == pvVar12) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__vector/vector.h:435: libc++ Hardening assertion !empty() failed: front() called on an empty vector\n"
              );
  }
  if (*(int *)((long)pvVar12 + 0xe4) != *(int *)(param_1 + 0x148)) {
    *(int *)(param_3 + 8) = *(int *)((long)pvVar12 + 0xe4);
    *(undefined1 *)((long)param_3 + 0x44) = 1;
  }
  if (*(char *)(param_2 + 0x59) != *(char *)(param_1 + 0x1a9)) {
    uVar19 = 1;
    if (*(char *)(param_2 + 0x59) != '\0') {
      uVar19 = 2;
    }
    *(undefined1 *)((long)param_3 + 0x4c) = 1;
    *(undefined4 *)(param_3 + 9) = uVar19;
  }
  pppppppuVar20 = pppppppuStack_88;
  if (local_90 != (undefined8 *******)0x0) {
    while (pppppppuVar17 != pppppppuVar20) {
      pppppppuVar20 = pppppppuVar20 + -4;
      if (pppppppuVar20 == (undefined8 *******)0x0) goto LAB_00b7c55c;
      FUN_00668f8c(pppppppuVar20);
    }
    pppppppuStack_88 = pppppppuVar17;
    operator_delete(local_90);
  }
  uVar19 = 1;
LAB_00b7c4a4:
  if (pvVar12 != (void *)0x0) {
    while (pvVar12 != pvVar21) {
      pvVar21 = (void *)((long)pvVar21 + -0xf8);
      if (pvVar21 == (void *)0x0) goto LAB_00b7c55c;
      FUN_00890cb8(pvVar21);
    }
    operator_delete(pvVar12);
  }
LAB_00b7c4d8:
  puVar22 = puStack_b8;
  if (((ulong)local_a0 & 1) == 0) {
    return uVar19;
  }
  puVar6 = local_b0;
  if (puStack_b8 == (undefined1 *)0x0) {
    return uVar19;
  }
  while( true ) {
    if (puVar22 == puVar6) {
      local_b0 = puVar22;
      operator_delete(puStack_b8);
      return uVar19;
    }
    puVar6 = puVar6 + -0xf8;
    if (puVar6 == (undefined1 *)0x0) break;
    FUN_00890cb8(puVar6);
  }
LAB_00b7c55c:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00b7c5b4  FUN_00b7c5b4 =====

uint FUN_00b7c5b4(long param_1,long param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  undefined8 uVar17;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char **local_88;
  char *local_80;
  char *pcStack_78;
  undefined8 local_6f;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined7 uStack_5f;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  if (((DAT_00dbacb8 & 1) == 0) && (iVar10 = FUN_0054fdd4(&DAT_00dbacb8), iVar10 != 0)) {
    DAT_00dbacb0 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00dbacb8);
  }
  local_88 = (char **)0x0;
  pcStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00dbacb0 != '\0') {
    FUN_0066d348(0x42,DAT_00dbacb0,"WebRtcVideoReceiveChannel::SetReceiverParameters",0,0,0,0,0,0);
    local_80 = DAT_00dbacb0;
    pcStack_78 = "WebRtcVideoReceiveChannel::SetReceiverParameters";
    local_88 = &local_80;
  }
  uVar11 = FUN_00417e08();
  if ((uVar11 & 1) == 0) {
    FUN_00b5884c(&local_e0,param_2);
    FUN_00623bb0(&DAT_001f4e90,"../../media/engine/webrtc_video_engine.cc",0x5bf1,
                 "SetReceiverParameters: ",&local_e0);
    if (local_d0._7_1_ < '\0') {
      operator_delete(local_e0);
    }
  }
  puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  local_e0 = (undefined1 *)0xaaaaaaaaaaaaaa00;
  local_c8 = 0xaaaaaaaaaaaaaa00;
  local_c0 = (undefined1 *)0xaaaaaaaaaaaaaa00;
  local_a8 = 0xaaaaaaaaaaaaaa00;
  local_a0 = 0xaaaaaa00aaaaaa00;
  uStack_98 = 0xaaaaaa00aaaaaa00;
  uVar9 = FUN_00b7bb18(param_1,param_2,&local_e0);
  if ((uVar9 & 1) != 0) {
    if (local_a0._4_1_ == '\x01') {
      *(undefined4 *)(param_1 + 0x148) = (undefined4)local_a0;
    }
    if ((char)local_a8 == '\x01') {
      if ((undefined1 **)(param_1 + 0x130) != &local_c0) {
        FUN_005e2544(param_1 + 0x130,local_c0,puStack_b8,(long)puStack_b8 - (long)local_c0 >> 5);
      }
      lVar3 = *(long *)(param_1 + 0x138) - *(long *)(param_1 + 0x130);
      lVar14 = 0;
      if (lVar3 != 0) {
        lVar14 = *(long *)(param_1 + 0x130);
      }
      FUN_007d87fc(&local_6f,lVar14,lVar3 >> 5);
      *(ulong *)(param_1 + 0x120) = CONCAT17(uStack_60,uStack_67);
      *(undefined8 *)(param_1 + 0x118) = local_6f;
      *(ulong *)(param_1 + 0x127) = CONCAT71(uStack_5f,uStack_60);
    }
    if (((char)local_c8 == '\x01') && ((undefined1 **)(param_1 + 0x100) != &local_e0)) {
      FUN_00b81f6c(param_1 + 0x100,local_e0,puStack_d8,
                   ((long)puStack_d8 - (long)local_e0 >> 3) * -0x1084210842108421);
    }
    plVar15 = *(long **)(param_1 + 0x48);
    while (plVar15 != (long *)(param_1 + 0x50)) {
      lVar14 = plVar15[5];
      if ((char)local_c8 == '\x01') {
        uVar11 = FUN_00b7fb94(lVar14,&local_e0);
        uVar11 = uVar11 & 0xffffffff;
      }
      else {
        uVar11 = 0;
      }
      if (local_a0._4_1_ == '\x01') {
        FUN_00b8016c(lVar14,local_a0 & 0xffffffff);
      }
      if ((uVar11 & 1) != 0) {
        FUN_00b80274(lVar14);
      }
      uVar11 = uStack_98;
      if (uStack_98._4_1_ == '\x01') {
        uVar7 = (undefined4)uStack_98;
        *(undefined4 *)(lVar14 + 0x104) = (undefined4)uStack_98;
        (**(code **)(**(long **)(lVar14 + 200) + 0x38))
                  (*(long **)(lVar14 + 200),uStack_98 & 0xffffffff);
        plVar12 = *(long **)(lVar14 + 0x208);
        *(undefined4 *)(lVar14 + 0x1f8) = uVar7;
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x18))(plVar12,uVar11 & 0xffffffff);
        }
      }
      plVar12 = (long *)plVar15[1];
      plVar16 = plVar15;
      if ((long *)plVar15[1] == (long *)0x0) {
        do {
          plVar15 = (long *)plVar16[2];
          bVar8 = plVar16 != (long *)*plVar15;
          plVar16 = plVar15;
        } while (bVar8);
      }
      else {
        do {
          plVar15 = plVar12;
          plVar12 = (long *)*plVar15;
        } while ((long *)*plVar15 != (long *)0x0);
      }
    }
    if (param_1 + 0x150 != param_2) {
      bVar1 = *(byte *)(param_2 + 0x1f);
      if (*(char *)(param_1 + 0x16f) < '\0') {
        uVar11 = *(ulong *)(param_2 + 0x10);
        puVar5 = *(undefined8 **)(param_2 + 8);
        if (-1 < (char)bVar1) {
          uVar11 = (ulong)bVar1;
          puVar5 = (undefined8 *)(param_2 + 8);
        }
        FUN_00547f08(param_1 + 0x158,puVar5,uVar11);
      }
      else if ((char)bVar1 < '\0') {
        FUN_00547fc0(param_1 + 0x158,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
      }
      else {
        uVar17 = *(undefined8 *)(param_2 + 0x10);
        uVar13 = *(undefined8 *)(param_2 + 8);
        *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_2 + 0x18);
        *(undefined8 *)(param_1 + 0x160) = uVar17;
        *(undefined8 *)(param_1 + 0x158) = uVar13;
      }
      FUN_0088fd38(param_1 + 0x170,*(long *)(param_2 + 0x20),*(long *)(param_2 + 0x28),
                   (*(long *)(param_2 + 0x28) - *(long *)(param_2 + 0x20) >> 3) *
                   -0x7b425ed097b425ed);
      FUN_005e2544(param_1 + 0x188,*(long *)(param_2 + 0x38),*(long *)(param_2 + 0x40),
                   *(long *)(param_2 + 0x40) - *(long *)(param_2 + 0x38) >> 5);
    }
    uVar13 = *(undefined8 *)(param_2 + 0x50);
    *(undefined4 *)(param_1 + 0x1a7) = *(undefined4 *)(param_2 + 0x57);
    *(undefined8 *)(param_1 + 0x1a0) = uVar13;
  }
  puVar6 = local_c0;
  if (((char)local_a8 == '\x01') && (puVar2 = puStack_b8, local_c0 != (undefined1 *)0x0)) {
    while (puVar6 != puVar2) {
      puVar2 = puVar2 + -0x20;
      if (puVar2 == (undefined1 *)0x0) goto LAB_00b7ca34;
      FUN_00668f8c(puVar2);
    }
    puStack_b8 = puVar6;
    operator_delete(local_c0);
  }
  puVar6 = local_e0;
  if (((char)local_c8 == '\x01') && (puVar2 = puStack_d8, local_e0 != (undefined1 *)0x0)) {
    while (puVar6 != puVar2) {
      puVar2 = puVar2 + -0xf8;
      if (puVar2 == (undefined1 *)0x0) {
LAB_00b7ca34:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      FUN_00890cb8(puVar2);
    }
    puStack_d8 = puVar6;
    operator_delete(local_e0);
  }
  if ((local_88 != (char **)0x0) && (**local_88 != '\0')) {
    FUN_0066d348(0x45,*local_88,local_88[1],0,0,0,0,0,0);
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return uVar9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00b7ca7c  FUN_00b7ca7c =====

void FUN_00b7ca7c(long param_1)

{
  FUN_00b7c5b4(param_1 + -0x40);
  return;
}


// ===== 00b7ca88  FUN_00b7ca88 =====

void FUN_00b7ca88(long param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  plVar4 = (long *)param_2[1];
  if (plVar4 != (long *)0x0) {
    do {
      while (*(uint *)(param_1 + 0x98) < *(uint *)((long)plVar4 + 0x1c)) {
        plVar4 = (long *)*plVar4;
        if (plVar4 == (long *)0x0) goto LAB_00b7cadc;
      }
      if (*(uint *)(param_1 + 0x98) == *(uint *)((long)plVar4 + 0x1c)) {
        if (plVar4 != param_2 + 1) {
          return;
        }
        break;
      }
      plVar4 = (long *)plVar4[1];
    } while (plVar4 != (long *)0x0);
  }
LAB_00b7cadc:
  if (param_2[2] == 0) {
    if (*(int *)(param_1 + 0x98) != 1) {
      plVar4 = *(long **)(param_1 + 0x48);
      *(undefined4 *)(param_1 + 0x98) = 1;
      while (plVar4 != (long *)(param_1 + 0x50)) {
        lVar6 = plVar4[5];
        *(undefined4 *)(lVar6 + 0xfc) = 1;
        (**(code **)(**(long **)(lVar6 + 0x30) + 0x90))
                  (*(long **)(lVar6 + 0x30),*(undefined8 *)(lVar6 + 200),1);
        if (*(long *)(lVar6 + 0x208) != 0) {
          (**(code **)(**(long **)(lVar6 + 0x30) + 0x98))
                    (*(long **)(lVar6 + 0x30),*(long *)(lVar6 + 0x208),1);
        }
        plVar2 = (long *)plVar4[1];
        plVar5 = plVar4;
        if ((long *)plVar4[1] == (long *)0x0) {
          do {
            plVar4 = (long *)plVar5[2];
            bVar3 = plVar5 != (long *)*plVar4;
            plVar5 = plVar4;
          } while (bVar3);
        }
        else {
          do {
            plVar4 = plVar2;
            plVar2 = (long *)*plVar4;
          } while ((long *)*plVar4 != (long *)0x0);
        }
      }
    }
  }
  else {
    iVar1 = *(int *)(*param_2 + 0x1c);
    if (iVar1 != *(int *)(param_1 + 0x98)) {
      plVar4 = *(long **)(param_1 + 0x48);
      *(int *)(param_1 + 0x98) = iVar1;
      while (plVar4 != (long *)(param_1 + 0x50)) {
        lVar6 = plVar4[5];
        *(int *)(lVar6 + 0xfc) = iVar1;
        (**(code **)(**(long **)(lVar6 + 0x30) + 0x90))
                  (*(long **)(lVar6 + 0x30),*(undefined8 *)(lVar6 + 200),iVar1);
        if (*(long *)(lVar6 + 0x208) != 0) {
          (**(code **)(**(long **)(lVar6 + 0x30) + 0x98))
                    (*(long **)(lVar6 + 0x30),*(long *)(lVar6 + 0x208),iVar1);
        }
        plVar2 = (long *)plVar4[1];
        plVar5 = plVar4;
        if ((long *)plVar4[1] == (long *)0x0) {
          do {
            plVar4 = (long *)plVar5[2];
            bVar3 = plVar5 != (long *)*plVar4;
            plVar5 = plVar4;
          } while (bVar3);
        }
        else {
          do {
            plVar4 = plVar2;
            plVar2 = (long *)*plVar4;
          } while ((long *)*plVar4 != (long *)0x0);
        }
      }
    }
  }
  return;
}


// ===== 00b7cc30  FUN_00b7cc30 =====

void FUN_00b7cc30(long param_1)

{
  FUN_00b7ca88(param_1 + -0x40);
  return;
}


// ===== 00b7cc3c  FUN_00b7cc3c =====

void FUN_00b7cc3c(long param_1,byte param_2)

{
  char *pcVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  char **local_58;
  char *local_50;
  char *pcStack_48;
  
  if (((DAT_00dbacc8 & 1) == 0) && (iVar3 = FUN_0054fdd4(&DAT_00dbacc8), iVar3 != 0)) {
    DAT_00dbacc0 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00dbacc8);
  }
  local_58 = (char **)0x0;
  pcStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00dbacc0 != '\0') {
    local_58 = &local_50;
    FUN_0066d348(0x42,DAT_00dbacc0,"WebRtcVideoReceiveChannel::SetReceive",0,0,0,0,0,0);
    local_50 = DAT_00dbacc0;
    pcStack_48 = "WebRtcVideoReceiveChannel::SetReceive";
  }
  uVar4 = FUN_0044075c();
  if ((uVar4 & 1) == 0) {
    pcVar1 = "true";
    if ((param_2 & 1) == 0) {
      pcVar1 = "false";
    }
    FUN_00623bb0(&DAT_001f4ed3,"../../media/engine/webrtc_video_engine.cc",0x5dc8,"SetReceive: ",
                 pcVar1);
  }
  plVar6 = *(long **)(param_1 + 0x48);
  do {
    while( true ) {
      if (plVar6 == (long *)(param_1 + 0x50)) {
        *(byte *)(param_1 + 0x9c) = param_2 & 1;
        if ((local_58 != (char **)0x0) && (**local_58 != '\0')) {
          FUN_0066d348(0x45,*local_58,local_58[1],0,0,0,0,0,0);
        }
        return;
      }
      lVar5 = plVar6[5];
      if ((param_2 & 1) != 0) break;
      *(undefined1 *)(lVar5 + 0x250) = 0;
      (**(code **)(**(long **)(lVar5 + 200) + 0x18))();
      FUN_00b80274(lVar5);
      plVar7 = (long *)plVar6[1];
      if ((long *)plVar6[1] == (long *)0x0) goto LAB_00b7cd88;
LAB_00b7cd78:
      do {
        plVar6 = plVar7;
        plVar7 = (long *)*plVar6;
      } while ((long *)*plVar6 != (long *)0x0);
    }
    *(undefined1 *)(lVar5 + 0x250) = 1;
    (**(code **)(**(long **)(lVar5 + 200) + 0x10))();
    plVar7 = (long *)plVar6[1];
    if ((long *)plVar6[1] != (long *)0x0) goto LAB_00b7cd78;
LAB_00b7cd88:
    do {
      plVar7 = (long *)plVar6[2];
      bVar2 = plVar6 != (long *)*plVar7;
      plVar6 = plVar7;
    } while (bVar2);
  } while( true );
}


// ===== 00b7ce2c  FUN_00b7ce2c =====

void FUN_00b7ce2c(long param_1)

{
  FUN_00b7cc3c(param_1 + -0x40);
  return;
}


// ===== 00b7ce38  FUN_00b7ce38 =====

void FUN_00b7ce38(undefined8 param_1,undefined8 param_2)

{
  FUN_00b7ce44(param_1,param_2,0);
  return;
}


// ===== 00b7ce44  FUN_00b7ce44 =====

/* WARNING: Removing unreachable block (ram,0x00b7d1cc) */
/* WARNING: Removing unreachable block (ram,0x00b7d2ec) */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00b7ce44(long param_1,long param_2,uint param_3)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  byte bVar4;
  undefined1 **ppuVar5;
  undefined1 **ppuVar6;
  undefined1 **ppuVar7;
  long *plVar8;
  bool bVar9;
  ulong uVar10;
  void *pvVar11;
  long lVar12;
  char *pcVar13;
  long *plVar14;
  uint *puVar15;
  long *plVar16;
  long *plVar17;
  undefined4 *puVar18;
  undefined8 uVar19;
  uint *puVar20;
  uint *puVar21;
  undefined8 local_2c4;
  undefined1 **local_1c8;
  undefined1 **local_1c0;
  undefined1 *local_1b0;
  undefined1 *puStack_1a8;
  undefined1 *local_1a0;
  undefined1 *puStack_198;
  undefined1 *local_190;
  undefined1 *puStack_188;
  undefined1 *local_180;
  undefined8 local_170;
  undefined1 *puStack_168;
  undefined4 *local_160;
  undefined1 *puStack_158;
  undefined1 *puStack_150;
  undefined1 *puStack_148;
  undefined1 *local_140;
  undefined1 *puStack_138;
  undefined1 *puStack_130;
  undefined1 *puStack_128;
  undefined1 *local_120;
  undefined1 *puStack_118;
  undefined1 *puStack_110;
  undefined1 *puStack_108;
  undefined1 *local_100;
  undefined1 *puStack_f8;
  undefined1 *puStack_f0;
  undefined1 *puStack_e8;
  undefined8 local_e0;
  undefined1 *puStack_d8;
  undefined1 *puStack_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  long *plStack_98;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 auStack_71 [17];
  
  uVar10 = FUN_00417e08();
  if ((uVar10 & 1) == 0) {
    local_170 = "../../media/engine/webrtc_video_engine.cc";
    puStack_168 = (undefined1 *)0x5ef9;
    local_160 = (undefined4 *)&local_2c4;
    local_1c8 = (undefined1 **)0x1dd9a8;
    pcVar13 = " (default stream)";
    if ((param_3 & 1) == 0) {
      pcVar13 = "";
    }
    local_1c0 = (undefined1 **)&local_170;
    FUN_0088d9e8(&local_1b0,param_2);
    FUN_00623bb0("\r\t\t\t\n",local_170,(ulong)puStack_168 & 0xffffffff,local_1c8,pcVar13,
                 &DAT_001c4dc3,&local_1b0);
    if ((long)local_1a0 < 0) {
      operator_delete(local_1b0);
    }
  }
  if (*(long *)(param_2 + 0x18) == *(long *)(param_2 + 0x20)) {
    FUN_0088cc4c(param_1 + 0x1c0,param_2);
  }
  else {
    uVar10 = FUN_00b761e4(param_2);
    if ((uVar10 & 1) == 0) {
      return 0;
    }
    puVar20 = *(uint **)(param_2 + 0x18);
    puVar21 = *(uint **)(param_2 + 0x20);
    if (puVar20 != puVar21) {
      do {
        plVar17 = *(long **)(param_1 + 0x50);
        if (plVar17 != (long *)0x0) {
          uVar3 = *puVar20;
LAB_00b7cf5c:
          do {
            if (uVar3 < *(uint *)(plVar17 + 4)) goto LAB_00b7cf54;
            if (uVar3 == *(uint *)(plVar17 + 4)) {
              if (plVar17 != (long *)(param_1 + 0x50)) {
                if (((param_3 & 1) == 0) &&
                   (plVar16 = (long *)plVar17[5], (*(byte *)(plVar16 + 0x1a) & 1) != 0)) {
                  puVar2 = (undefined4 *)plVar16[0xb];
                  for (puVar18 = (undefined4 *)plVar16[10]; puVar18 != puVar2; puVar18 = puVar18 + 1
                      ) {
                    local_170._4_4_ = (undefined4)((ulong)local_170 >> 0x20);
                    local_170 = (char *)CONCAT44(local_170._4_4_,*puVar18);
                    FUN_00b76be4(param_1 + 0xe0,&local_170);
                  }
                  if (plVar16 != (long *)0x0) {
                    (**(code **)(*plVar16 + 8))(plVar16);
                  }
                  plVar16 = plVar17;
                  plVar8 = (long *)plVar17[1];
                  if ((long *)plVar17[1] == (long *)0x0) {
                    do {
                      plVar14 = (long *)plVar16[2];
                      bVar9 = plVar16 != (long *)*plVar14;
                      plVar16 = plVar14;
                    } while (bVar9);
                  }
                  else {
                    do {
                      plVar14 = plVar8;
                      plVar8 = (long *)*plVar14;
                    } while ((long *)*plVar14 != (long *)0x0);
                  }
                  if (*(long **)(param_1 + 0x48) == plVar17) {
                    *(long **)(param_1 + 0x48) = plVar14;
                  }
                  *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + -1;
                  FUN_005d5d48(*(undefined8 *)(param_1 + 0x50),plVar17);
                  if (plVar17 == (long *)0xffffffffffffffe0) goto LAB_00b7d468;
                  operator_delete(plVar17);
                  break;
                }
                uVar10 = FUN_004249b0();
                if ((uVar10 & 1) != 0) {
                  return 0;
                }
                pcVar13 = "Receive stream for SSRC \'";
                uVar19 = 0x5f8b;
                goto LAB_00b7d45c;
              }
              break;
            }
            plVar17 = (long *)plVar17[1];
          } while (plVar17 != (long *)0x0);
        }
LAB_00b7cf38:
        puVar20 = puVar20 + 1;
      } while (puVar20 != puVar21);
      puVar20 = *(uint **)(param_2 + 0x18);
      puVar21 = *(uint **)(param_2 + 0x20);
    }
    if (puVar20 != puVar21) {
      plVar17 = *(long **)(param_1 + 0xe8);
      puVar15 = puVar20;
      do {
        if (plVar17 != (long *)0x0) {
          uVar3 = *puVar15;
          plVar16 = plVar17;
          do {
            while (uVar3 < *(uint *)((long)plVar16 + 0x1c)) {
              plVar16 = (long *)*plVar16;
              if (plVar16 == (long *)0x0) goto LAB_00b7d070;
            }
            if (uVar3 == *(uint *)((long)plVar16 + 0x1c)) {
              if (plVar16 != (long *)(param_1 + 0xe8)) {
                uVar10 = FUN_004249b0();
                if ((uVar10 & 1) != 0) {
                  return 0;
                }
                pcVar13 = "Receive stream with SSRC \'";
                uVar19 = 0x5e43;
LAB_00b7d45c:
                FUN_00623bb0(&DAT_001fcbd8,"../../media/engine/webrtc_video_engine.cc",uVar19,
                             pcVar13,uVar3,"\' already exists.");
                return 0;
              }
              break;
            }
            plVar16 = (long *)plVar16[1];
          } while (plVar16 != (long *)0x0);
        }
LAB_00b7d070:
        puVar15 = puVar15 + 1;
      } while (puVar15 != puVar21);
      do {
        puVar15 = puVar20 + 1;
        local_170 = (char *)CONCAT44(local_170._4_4_,*puVar20);
        FUN_0089740c(0,param_1 + 0xe0,param_1 + 0xe0,&local_170);
        puVar20 = puVar15;
      } while (puVar15 != puVar21);
    }
    puStack_158 = &DAT_aaaaaaaaaaaaaaaa;
    local_160 = (undefined4 *)&DAT_aaaaaaaaaaaaaaaa;
    puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_150 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
    local_140 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_130 = &DAT_aaaaaaaaaaaaaaaa;
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
    local_c8 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_d0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
    local_c0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_b0 = &DAT_aaaaaaaaaaaaaaaa;
    plStack_98 = (long *)&DAT_aaaaaaaaaaaaaaaa;
    local_a0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_168 = &DAT_aaaaaaaaaaaaaaaa;
    local_170 = &DAT_aaaaaaaaaaaaaaaa;
    local_80 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00846a20(&local_170,param_1 + 0x10,*(undefined8 *)(param_1 + 0xf8));
    local_180 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_188 = &DAT_aaaaaaaaaaaaaaaa;
    local_190 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_198 = &DAT_aaaaaaaaaaaaaaaa;
    local_1a0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_1a8 = &DAT_aaaaaaaaaaaaaaaa;
    local_1b0 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00842440(&local_1b0,param_1 + 0x10);
    FUN_00b7d4a0(param_1,&local_170,&local_1b0,param_2);
    puStack_b8 = (undefined1 *)CONCAT35(puStack_b8._5_3_,*(undefined5 *)(param_1 + 0x250));
    if (&puStack_b8 != (undefined1 **)(param_1 + 0x250)) {
      FUN_005d4868(&puStack_b0,*(long *)(param_1 + 600),*(long *)(param_1 + 0x260),
                   *(long *)(param_1 + 0x260) - *(long *)(param_1 + 600) >> 1);
    }
    local_e0._0_5_ = CONCAT14(*(undefined1 *)(param_1 + 0xb6),(undefined4)local_e0);
    FUN_0088e6d8(&local_1c8,param_2);
    ppuVar7 = local_1c0;
    ppuVar6 = local_1c8;
    ppuVar5 = local_1c0;
    if (local_1c8 != (undefined1 **)0x0) {
      do {
        if (local_1c8 == ppuVar5) {
          local_1c0 = local_1c8;
          operator_delete(local_1c8);
          goto LAB_00b7d1f8;
        }
        ppuVar5 = ppuVar5 + -3;
      } while (ppuVar5 != (undefined1 **)0x0);
LAB_00b7d468:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
LAB_00b7d1f8:
    if (ppuVar6 != ppuVar7) {
      FUN_0088e6d8(&local_1c8,param_2);
      if (local_1c0 == local_1c8) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                  );
      }
      if (&puStack_d8 != local_1c8) {
        bVar4 = *(byte *)((long)local_1c8 + 0x17);
        if ((long)local_c8 < 0) {
          puVar1 = local_1c8[1];
          ppuVar5 = (undefined1 **)*local_1c8;
          if (-1 < (char)bVar4) {
            puVar1 = (undefined1 *)(ulong)bVar4;
            ppuVar5 = local_1c8;
          }
          FUN_00547f08(&puStack_d8,ppuVar5,puVar1);
        }
        else if ((char)bVar4 < '\0') {
          FUN_00547fc0(&puStack_d8,*local_1c8,local_1c8[1]);
        }
        else {
          local_c8 = local_1c8[2];
          puStack_d0 = local_1c8[1];
          puStack_d8 = *local_1c8;
        }
      }
      ppuVar5 = local_1c0;
      if (local_1c8 != (undefined1 **)0x0) {
        do {
          if (local_1c8 == ppuVar5) {
            local_1c0 = local_1c8;
            operator_delete(local_1c8);
            goto LAB_00b7d314;
          }
          ppuVar5 = ppuVar5 + -3;
        } while (ppuVar5 != (undefined1 **)0x0);
        goto LAB_00b7d468;
      }
    }
LAB_00b7d314:
    plVar16 = *(long **)(param_1 + 0x270);
    plVar17 = plStack_98;
    if (((plVar16 != (long *)0x0) && (plStack_98 == (long *)0x0)) &&
       ((**(code **)*plVar16)(plVar16), plVar17 = plVar16, plStack_98 != (long *)0x0)) {
      (**(code **)(*plStack_98 + 8))();
    }
    plStack_98 = plVar17;
    pvVar11 = operator_new(600);
    uVar19 = *(undefined8 *)(param_1 + 0xa0);
    FUN_00846884((undefined4 *)((long)&local_2c4 + 4),&local_170);
    FUN_00b7f604(pvVar11,param_1 + 0x60,uVar19,param_2,(undefined4 *)((long)&local_2c4 + 4),
                 param_3 & 1,param_1 + 0x100,&local_1b0);
    FUN_00846ac4((undefined4 *)((long)&local_2c4 + 4));
    if (*(char *)(param_1 + 0x9c) == '\x01') {
      *(undefined1 *)((long)pvVar11 + 0x250) = 1;
      (**(code **)(**(long **)((long)pvVar11 + 200) + 0x10))();
    }
    if (*(undefined4 **)(param_2 + 0x18) == *(undefined4 **)(param_2 + 0x20)) {
      local_2c4._0_4_ = 0;
    }
    else {
      local_2c4._0_4_ = **(undefined4 **)(param_2 + 0x18);
    }
    local_1c8 = (undefined1 **)&local_2c4;
    lVar12 = FUN_00b8721c(0,param_1 + 0x48,param_1 + 0x48,&DAT_001f94c3,&local_1c8,auStack_71);
    *(void **)(lVar12 + 0x28) = pvVar11;
    FUN_008424f8(&local_1b0);
    FUN_00846ac4(&local_170);
  }
  return 1;
LAB_00b7cf54:
  plVar17 = (long *)*plVar17;
  if (plVar17 == (long *)0x0) goto LAB_00b7cf38;
  goto LAB_00b7cf5c;
}


// ===== 00b7d490  FUN_00b7d490 =====

void FUN_00b7d490(long param_1,undefined8 param_2)

{
  FUN_00b7ce44(param_1 + -0x40,param_2,0);
  return;
}


// ===== 00b7d4a0  FUN_00b7d4a0 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00b7d4a0(long param_1,long param_2,undefined4 *param_3,long param_4)

{
  long *plVar1;
  int iVar2;
  undefined *puVar3;
  bool bVar4;
  size_t sVar5;
  ulong uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 local_58;
  ulong local_50;
  byte bStack_41;
  
  if (*(int **)(param_4 + 0x18) == *(int **)(param_4 + 0x20)) {
    *(undefined4 *)(param_2 + 0x20) = 0;
    iVar8 = 0;
    iVar2 = *(int *)(param_1 + 0x98);
    *(int *)(param_2 + 0x24) = iVar2;
    if (iVar2 != 0) goto LAB_00b7d524;
LAB_00b7d51c:
    uVar7 = 1;
  }
  else {
    iVar8 = **(int **)(param_4 + 0x18);
    *(int *)(param_2 + 0x20) = iVar8;
    iVar2 = *(int *)(param_1 + 0x98);
    *(int *)(param_2 + 0x24) = iVar2;
    if (iVar8 != iVar2) goto LAB_00b7d524;
    if (iVar8 != 1) goto LAB_00b7d51c;
    uVar7 = 2;
  }
  *(undefined4 *)(param_2 + 0x24) = uVar7;
LAB_00b7d524:
  *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(param_1 + 0x284);
  puVar3 = PTR_DAT_00d52d08;
  sVar5 = strlen(PTR_DAT_00d52d08);
  FUN_0088e3d0(param_4,puVar3,sVar5,iVar8,param_2 + 0x3c);
  *param_3 = *(undefined4 *)(param_1 + 0x148);
  (**(code **)(**(long **)(param_1 + 0x68) + 0x10))
            (&local_58,*(long **)(param_1 + 0x68),"WebRTC-FlexFEC-03-Advertised",0x1c);
  if (-1 < (char)bStack_41) {
    local_50 = (ulong)bStack_41;
  }
  if (local_50 < 8) {
    bVar4 = false;
  }
  else {
    plVar1 = (long *)CONCAT44(local_58._4_4_,(int)local_58);
    if (-1 < (char)bStack_41) {
      plVar1 = &local_58;
    }
    bVar4 = *plVar1 == 0x64656c6261736944;
  }
  if ((char)bStack_41 < '\0') {
    operator_delete((void *)CONCAT44(local_58._4_4_,(int)local_58));
  }
  if (!bVar4) {
    sVar5 = strlen("FEC-FR");
    uVar6 = FUN_0088e3d0(param_4,"FEC-FR",sVar5,iVar8,param_3 + 1);
    if ((uVar6 & 1) != 0) {
      local_58._0_4_ = iVar8;
      FUN_005ec41c(param_3 + 4,&local_58,(int *)((long)&local_58 + 4),1);
      param_3[2] = *(undefined4 *)(param_2 + 0x24);
      param_3[10] = *(undefined4 *)(param_2 + 0x2c);
    }
  }
  return;
}


// ===== 00b7d65c  FUN_00b7d65c =====

undefined8 FUN_00b7d65c(long param_1,uint param_2)

{
  undefined4 *puVar1;
  long *plVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined4 *puVar8;
  undefined4 local_24;
  
  uVar4 = FUN_00417e08();
  if ((uVar4 & 1) == 0) {
    FUN_00623bb0(&DAT_001f6220,"../../media/engine/webrtc_video_engine.cc",0x61f9,
                 "RemoveRecvStream: ",param_2);
  }
  for (plVar6 = *(long **)(param_1 + 0x50); plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
    while (*(uint *)(plVar6 + 4) <= param_2) {
      if (param_2 == *(uint *)(plVar6 + 4)) {
        if (plVar6 != (long *)(param_1 + 0x50)) {
          plVar7 = (long *)plVar6[5];
          puVar1 = (undefined4 *)plVar7[0xb];
          for (puVar8 = (undefined4 *)plVar7[10]; puVar8 != puVar1; puVar8 = puVar8 + 1) {
            local_24 = *puVar8;
            FUN_00b76be4(param_1 + 0xe0,&local_24);
          }
          if (plVar7 != (long *)0x0) {
            (**(code **)(*plVar7 + 8))(plVar7);
          }
          plVar7 = plVar6;
          plVar2 = (long *)plVar6[1];
          if ((long *)plVar6[1] == (long *)0x0) {
            do {
              plVar5 = (long *)plVar7[2];
              bVar3 = plVar7 != (long *)*plVar5;
              plVar7 = plVar5;
            } while (bVar3);
          }
          else {
            do {
              plVar5 = plVar2;
              plVar2 = (long *)*plVar5;
            } while ((long *)*plVar5 != (long *)0x0);
          }
          if (*(long **)(param_1 + 0x48) == plVar6) {
            *(long **)(param_1 + 0x48) = plVar5;
          }
          *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + -1;
          FUN_005d5d48(*(undefined8 *)(param_1 + 0x50),plVar6);
          if (plVar6 == (long *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
          operator_delete(plVar6);
          return 1;
        }
        goto LAB_00b7d740;
      }
      plVar6 = (long *)plVar6[1];
      if (plVar6 == (long *)0x0) goto LAB_00b7d740;
    }
  }
LAB_00b7d740:
  uVar4 = FUN_004249b0();
  if ((uVar4 & 1) == 0) {
    FUN_00623bb0(&DAT_001f6220,"../../media/engine/webrtc_video_engine.cc",0x621b,
                 "Stream not found for ssrc: ",param_2);
  }
  return 0;
}


// ===== 00b7d7f8  FUN_00b7d7f8 =====

void FUN_00b7d7f8(long param_1)

{
  FUN_00b7d65c(param_1 + -0x40);
  return;
}


// ===== 00b7d804  FUN_00b7d804 =====

void FUN_00b7d804(long param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined4 *puVar9;
  undefined4 local_d0 [36];
  
  uVar3 = FUN_00417e08();
  if ((uVar3 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../media/engine/webrtc_video_engine.cc",0x6271,
                 "ResetUnsignaledRecvStream.");
  }
  FUN_0088d2b8(local_d0);
  FUN_0088d738(param_1 + 0x1c0,local_d0);
  FUN_0088d578(local_d0);
  if (*(char *)(param_1 + 0xd8) == '\x01') {
    *(undefined1 *)(param_1 + 0xd8) = 0;
  }
  plVar6 = *(long **)(param_1 + 0x48);
  while( true ) {
    while( true ) {
      if (plVar6 == (long *)(param_1 + 0x50)) {
        return;
      }
      plVar7 = (long *)plVar6[5];
      if ((char)plVar7[0x1a] == '\x01') break;
      plVar7 = (long *)plVar6[1];
      plVar5 = plVar6;
      if ((long *)plVar6[1] == (long *)0x0) {
        do {
          plVar6 = (long *)plVar5[2];
          bVar2 = plVar5 != (long *)*plVar6;
          plVar5 = plVar6;
        } while (bVar2);
      }
      else {
        do {
          plVar6 = plVar7;
          plVar7 = (long *)*plVar6;
        } while ((long *)*plVar6 != (long *)0x0);
      }
    }
    puVar1 = (undefined4 *)plVar7[0xb];
    for (puVar9 = (undefined4 *)plVar7[10]; puVar9 != puVar1; puVar9 = puVar9 + 1) {
      local_d0[0] = *puVar9;
      FUN_00b76be4(param_1 + 0xe0,local_d0);
    }
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))(plVar7);
    }
    plVar5 = (long *)plVar6[1];
    plVar7 = plVar5;
    plVar4 = plVar6;
    if (plVar5 == (long *)0x0) {
      do {
        plVar8 = (long *)plVar4[2];
        bVar2 = plVar4 != (long *)*plVar8;
        plVar7 = plVar6;
        plVar4 = plVar8;
      } while (bVar2);
      do {
        plVar4 = (long *)plVar7[2];
        bVar2 = plVar7 != (long *)*plVar4;
        plVar7 = plVar4;
      } while (bVar2);
    }
    else {
      do {
        plVar8 = plVar7;
        plVar7 = (long *)*plVar8;
      } while ((long *)*plVar8 != (long *)0x0);
      do {
        plVar4 = plVar5;
        plVar5 = (long *)*plVar4;
      } while ((long *)*plVar4 != (long *)0x0);
    }
    if (*(long **)(param_1 + 0x48) == plVar6) {
      *(long **)(param_1 + 0x48) = plVar4;
    }
    *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + -1;
    FUN_005d5d48(*(undefined8 *)(param_1 + 0x50),plVar6);
    if (plVar6 == (long *)0xffffffffffffffe0) break;
    operator_delete(plVar6);
    plVar6 = plVar8;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00b7d9cc  FUN_00b7d9cc =====

void FUN_00b7d9cc(long param_1)

{
  FUN_00b7d804(param_1 + -0x40);
  return;
}


// ===== 00b7d9d8  FUN_00b7d9d8 =====

ulong FUN_00b7d9d8(long param_1)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = *(long **)(param_1 + 0x48);
  while( true ) {
    if (plVar3 == (long *)(param_1 + 0x50)) {
      return 0xaaaaaa00aaaaaa00;
    }
    if (*(char *)(plVar3[5] + 0xd0) == '\x01') break;
    plVar4 = plVar3;
    plVar1 = (long *)plVar3[1];
    if ((long *)plVar3[1] == (long *)0x0) {
      do {
        plVar3 = (long *)plVar4[2];
        bVar2 = plVar4 != (long *)*plVar3;
        plVar4 = plVar3;
      } while (bVar2);
    }
    else {
      do {
        plVar3 = plVar1;
        plVar1 = (long *)*plVar3;
      } while ((long *)*plVar3 != (long *)0x0);
    }
  }
  return (ulong)*(uint *)(plVar3 + 4) | 0xaaaaaa0100000000;
}


// ===== 00b7da54  FUN_00b7da54 =====

ulong FUN_00b7da54(long param_1)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = *(long **)(param_1 + 8);
  while( true ) {
    if (plVar3 == (long *)(param_1 + 0x10)) {
      return 0xaaaaaa00;
    }
    if (*(char *)(plVar3[5] + 0xd0) == '\x01') break;
    plVar4 = plVar3;
    plVar1 = (long *)plVar3[1];
    if ((long *)plVar3[1] == (long *)0x0) {
      do {
        plVar3 = (long *)plVar4[2];
        bVar2 = plVar4 != (long *)*plVar3;
        plVar4 = plVar3;
      } while (bVar2);
    }
    else {
      do {
        plVar3 = plVar1;
        plVar1 = (long *)*plVar3;
      } while ((long *)*plVar3 != (long *)0x0);
    }
  }
  return (ulong)*(uint *)(plVar3 + 4) | 0x100000000;
}


// ===== 00b7dac8  FUN_00b7dac8 =====

void FUN_00b7dac8(long param_1)

{
  *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
  return;
}


// ===== 00b7dadc  FUN_00b7dadc =====

void FUN_00b7dadc(long param_1)

{
  *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
  return;
}


// ===== 00b7daf0  FUN_00b7daf0 =====

void FUN_00b7daf0(long param_1)

{
  *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 1;
  return;
}


// ===== 00b7db04  FUN_00b7db04 =====

void FUN_00b7db04(long param_1)

{
  *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
  return;
}


// ===== 00b7db18  FUN_00b7db18 =====

undefined8 FUN_00b7db18(long param_1,uint param_2,long param_3)

{
  char *pcVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    pcVar1 = "nullptr";
    if (param_3 != 0) {
      pcVar1 = "(ptr)";
    }
    FUN_00623bb0(&DAT_00232309,"../../media/engine/webrtc_video_engine.cc",0x63d1,"SetSink: ssrc:",
                 param_2,&DAT_001d5e07,pcVar1);
    plVar3 = *(long **)(param_1 + 0x50);
  }
  else {
    plVar3 = *(long **)(param_1 + 0x50);
  }
  do {
    if (plVar3 == (long *)0x0) {
      return 0;
    }
    while( true ) {
      if (param_2 < *(uint *)(plVar3 + 4)) break;
      if (param_2 == *(uint *)(plVar3 + 4)) {
        if (plVar3 == (long *)(param_1 + 0x50)) {
          return 0;
        }
        lVar4 = plVar3[5];
        pthread_mutex_lock((pthread_mutex_t *)(lVar4 + 0x210));
        *(long *)(lVar4 + 0x238) = param_3;
        pthread_mutex_unlock((pthread_mutex_t *)(lVar4 + 0x210));
        return 1;
      }
      plVar3 = (long *)plVar3[1];
      if (plVar3 == (long *)0x0) {
        return 0;
      }
    }
    plVar3 = (long *)*plVar3;
  } while( true );
}


// ===== 00b7dc18  FUN_00b7dc18 =====

void FUN_00b7dc18(long param_1)

{
  FUN_00b7db18(param_1 + -0x40);
  return;
}


// ===== 00b7dc24  FUN_00b7dc24 =====

void FUN_00b7dc24(long param_1,long param_2)

{
  char *pcVar1;
  ulong uVar2;
  
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    pcVar1 = "nullptr";
    if (param_2 != 0) {
      pcVar1 = "(ptr)";
    }
    FUN_00623bb0(&DAT_001f4ed3,"../../media/engine/webrtc_video_engine.cc",0x6449,"SetDefaultSink: "
                 ,pcVar1);
  }
  *(long *)(param_1 + 0xa8) = param_2;
  return;
}


// ===== 00b7dc90  FUN_00b7dc90 =====

void FUN_00b7dc90(long param_1,long param_2)

{
  char *pcVar1;
  ulong uVar2;
  
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    pcVar1 = "nullptr";
    if (param_2 != 0) {
      pcVar1 = "(ptr)";
    }
    FUN_00623bb0(&DAT_001f4ed3,"../../media/engine/webrtc_video_engine.cc",0x6449,"SetDefaultSink: "
                 ,pcVar1);
  }
  *(long *)(param_1 + 0x68) = param_2;
  return;
}


// ===== 00b7dcfc  FUN_00b7dcfc =====

undefined8 FUN_00b7dcfc(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  char **local_58;
  char *local_50;
  char *pcStack_48;
  long *local_28;
  
  if (((DAT_00dbacd8 & 1) == 0) && (iVar3 = FUN_0054fdd4(&DAT_00dbacd8), iVar3 != 0)) {
    DAT_00dbacd0 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00dbacd8);
  }
  local_58 = (char **)0x0;
  pcStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00dbacd0 != '\0') {
    local_58 = &local_50;
    FUN_0066d348(0x42,DAT_00dbacd0,"WebRtcVideoReceiveChannel::GetStats",0,0,0,0,0,0);
    local_50 = DAT_00dbacd0;
    pcStack_48 = "WebRtcVideoReceiveChannel::GetStats";
  }
  lVar1 = *param_2;
  lVar2 = param_2[1];
  while( true ) {
    if (lVar1 == lVar2) {
      plVar6 = param_2 + 4;
      local_28 = param_2 + 3;
      param_2[1] = lVar1;
      FUN_0088c818(&local_28,*plVar6);
      *plVar6 = 0;
      param_2[5] = 0;
      param_2[3] = (long)plVar6;
      if (*(long *)(param_1 + 0x58) != 0) {
        uVar4 = (**(code **)(**(long **)(param_1 + 0x70) + 0x10))();
        uVar5 = uVar4 / 1000;
        if (499 < uVar4 % 1000) {
          uVar5 = uVar5 + 1;
        }
        if ((uVar4 & 0x8000000000000000) != 0) {
          uVar5 = -(-uVar4 / 1000) - (ulong)(500 < -uVar4 % 1000);
        }
        if (*(long *)(param_1 + 0x1b0) == -1 || 10000 < (long)(uVar5 - *(long *)(param_1 + 0x1b0)))
        {
          *(ulong *)(param_1 + 0x1b0) = uVar5;
        }
        FUN_00b7df1c(param_1,param_2);
        FUN_00b7e008(param_1,param_2);
      }
      if ((local_58 != (char **)0x0) && (**local_58 != '\0')) {
        FUN_0066d348(0x45,*local_58,local_58[1],0,0,0,0,0,0);
      }
      return 1;
    }
    lVar2 = lVar2 + -0x330;
    if (lVar2 == 0) break;
    FUN_0088b060(lVar2);
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00b7df1c  FUN_00b7df1c =====

void FUN_00b7df1c(long param_1,long param_2,uint param_3)

{
  ulong uVar1;
  long *plVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined1 auStack_370 [816];
  
  plVar5 = *(long **)(param_1 + 0x48);
  do {
    if (plVar5 == (long *)(param_1 + 0x50)) {
      return;
    }
    FUN_00b7e120(auStack_370,plVar5[5],param_3 & 1);
    uVar1 = *(ulong *)(param_2 + 8);
    if (uVar1 < *(ulong *)(param_2 + 0x10)) {
      if (uVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      FUN_00b84f10(uVar1,auStack_370);
      lVar4 = uVar1 + 0x330;
    }
    else {
      lVar4 = FUN_00b8513c(param_2,auStack_370);
    }
    *(long *)(param_2 + 8) = lVar4;
    FUN_0088b060(auStack_370);
    plVar2 = (long *)plVar5[1];
    plVar6 = plVar5;
    if ((long *)plVar5[1] == (long *)0x0) {
      do {
        plVar5 = (long *)plVar6[2];
        bVar3 = plVar6 != (long *)*plVar5;
        plVar6 = plVar5;
      } while (bVar3);
    }
    else {
      do {
        plVar5 = plVar2;
        plVar2 = (long *)*plVar5;
      } while ((long *)*plVar5 != (long *)0x0);
    }
  } while( true );
}


// ===== 00b7e008  FUN_00b7e008 =====

void FUN_00b7e008(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined1 auStack_138 [112];
  undefined4 local_c8 [2];
  undefined1 auStack_c0 [112];
  long *local_38;
  
  lVar4 = *param_2;
  lVar1 = param_2[1];
  if (lVar4 != lVar1) {
    do {
      plVar3 = *(long **)(param_1 + 0x170);
      plVar2 = *(long **)(param_1 + 0x178);
      if (plVar3 == plVar2) {
LAB_00b7e084:
        if (plVar3 != plVar2) {
          (**(code **)(*plVar3 + 0x10))(auStack_138,plVar3);
          local_c8[0] = *(undefined4 *)((long)plVar3 + 0xc);
          FUN_006692f8(auStack_c0,auStack_138);
          local_38 = param_2 + 3;
          FUN_00b646c8(&local_38,local_c8,local_c8);
          FUN_00668620(auStack_c0);
          FUN_00668620(auStack_138);
        }
      }
      else {
        do {
          if ((*(char *)(lVar4 + 0xb4) != '\0') &&
             (*(int *)(lVar4 + 0xb0) == *(int *)((long)plVar3 + 0xc))) goto LAB_00b7e084;
          plVar3 = plVar3 + 0x1b;
        } while (plVar3 != plVar2);
      }
      lVar4 = lVar4 + 0x330;
    } while (lVar4 != lVar1);
  }
  return;
}


// ===== 00b7e0fc  FUN_00b7e0fc =====

undefined8 FUN_00b7e0fc(long param_1)

{
  FUN_00b7dcfc(param_1 + -0x40);
  return 1;
}


// ===== 00b7e120  FUN_00b7e120 =====

void FUN_00b7e120(long *param_1,long param_2,ulong param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  double dVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 *local_390;
  undefined1 *puStack_388;
  undefined1 *local_380;
  undefined1 *puStack_378;
  undefined1 *local_370;
  undefined1 *puStack_368;
  undefined1 *local_360;
  undefined1 *puStack_358;
  undefined1 *local_350;
  undefined1 *puStack_348;
  undefined1 *local_340;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined1 auStack_320 [32];
  undefined2 local_300;
  int local_2fc;
  int iStack_2f8;
  long local_2f4;
  undefined8 local_2ec;
  undefined4 local_2e4;
  long local_2e0;
  long local_2d8;
  long local_2d0;
  long lStack_2c8;
  undefined8 local_2c0;
  long local_2b8;
  undefined4 local_2b0;
  undefined4 local_2a8;
  long local_2a0;
  long lStack_298;
  long local_290;
  undefined4 local_288;
  long local_280;
  long lStack_278;
  long local_270;
  long lStack_268;
  undefined1 local_260;
  long local_258;
  undefined1 local_250;
  long local_248;
  undefined1 local_240;
  undefined4 local_238;
  int local_234;
  long local_22c;
  long local_224;
  long lStack_21c;
  undefined1 local_214;
  long local_210;
  undefined1 local_208;
  undefined4 local_1e0;
  uint local_1dc;
  long local_1d0;
  undefined1 local_1c8;
  long local_1c0;
  long lStack_1b8;
  long local_1b0;
  undefined4 uStack_1a8;
  long local_1a0;
  long lStack_198;
  undefined4 local_188;
  long local_184;
  long local_150;
  long local_148;
  long local_140;
  long local_138;
  long local_130;
  long lStack_128;
  char local_118;
  long local_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long local_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long local_d0;
  long lStack_c8;
  long local_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined1 local_a0;
  long local_98;
  undefined1 local_90;
  long local_88;
  undefined1 local_80;
  long local_78;
  undefined1 local_70;
  uint local_68;
  long local_60;
  long lStack_58;
  
  memcpy(param_1,&DAT_00256028,0x330);
  FUN_0088af1c(param_1);
  if (param_1 + 0x31 != (long *)(param_2 + 0x68)) {
    FUN_0088e978(param_1 + 0x31,*(long *)(param_2 + 0x68),*(long *)(param_2 + 0x70),
                 (*(long *)(param_2 + 0x70) - *(long *)(param_2 + 0x68) >> 4) * -0x5555555555555555)
    ;
  }
  plVar4 = (long *)param_1[0x18];
  uStack_328 = 0;
  local_330 = CONCAT44(0xaaaaaaaa,*(undefined4 *)(param_2 + 0xf8));
  if (plVar4 < (long *)param_1[0x19]) {
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    plVar6 = plVar4 + 2;
    plVar4[1] = 0;
    *plVar4 = local_330;
  }
  else {
    plVar6 = (long *)FUN_00b63a98(param_1 + 0x17,&local_330);
  }
  param_1[0x18] = (long)plVar6;
  memcpy(&local_330,&DAT_00256358,0x2e0);
  (**(code **)(**(long **)(param_2 + 200) + 0x40))(&local_330);
  FUN_005e7520(param_1 + 0x34,auStack_320);
  *(undefined2 *)(param_1 + 0x38) = local_300;
  if (local_234 != -1) {
    plVar4 = *(long **)(param_2 + 0xd8);
    plVar6 = *(long **)(param_2 + 0xe0);
    *(int *)(param_1 + 0x16) = local_234;
    *(undefined1 *)((long)param_1 + 0xb4) = 1;
    if (plVar4 == plVar6) {
LAB_00b7e254:
      if ((plVar4 != plVar6) && (param_1 + 0x13 != plVar4)) {
        bVar1 = *(byte *)((long)plVar4 + 0x17);
        if (*(char *)((long)param_1 + 0xaf) < '\0') {
          uVar5 = plVar4[1];
          plVar6 = (long *)*plVar4;
          if (-1 < (char)bVar1) {
            uVar5 = (ulong)bVar1;
            plVar6 = plVar4;
          }
          FUN_00547f08(param_1 + 0x13,plVar6,uVar5);
        }
        else if ((char)bVar1 < '\0') {
          FUN_00547fc0(param_1 + 0x13,*plVar4,plVar4[1]);
        }
        else {
          lVar11 = plVar4[1];
          lVar9 = *plVar4;
          param_1[0x15] = plVar4[2];
          param_1[0x14] = lVar11;
          param_1[0x13] = lVar9;
        }
      }
    }
    else {
      do {
        if ((int)plVar4[0xc] == local_234) goto LAB_00b7e254;
        plVar4 = plVar4 + 0xd;
      } while (plVar4 != plVar6);
    }
  }
  iVar2 = *(int *)PTR_DAT_00d52188;
  param_1[4] = lStack_198;
  param_1[3] = local_1a0;
  *(undefined4 *)(param_1 + 5) = local_1e0;
  *(undefined4 *)(param_1 + 0x3c) = (undefined4)uStack_328;
  param_1[0x3b] = local_330;
  param_1[0x3a] = local_22c;
  uVar3 = 0;
  if (iVar2 / 1000 != 0) {
    uVar3 = local_1dc / (uint)(iVar2 / 1000);
  }
  *(undefined4 *)(param_1 + 2) = uStack_1a8;
  *param_1 = lStack_1b8;
  param_1[1] = local_1b0 + local_1c0;
  *(uint *)(param_1 + 0x50) = uVar3;
  pthread_mutex_lock((pthread_mutex_t *)(param_2 + 0x210));
  param_1[0x55] = *(long *)(param_2 + 0x248);
  pthread_mutex_unlock((pthread_mutex_t *)(param_2 + 0x210));
  uVar10 = NEON_rev64(local_2ec,4);
  param_1[0x51] = local_2f4;
  *(undefined4 *)(param_1 + 0x52) = local_2e4;
  *(undefined8 *)((long)param_1 + 0x29c) = uVar10;
  if (local_2e0 == -0x8000000000000000) {
    dVar7 = -INFINITY;
  }
  else if (local_2e0 == 0x7fffffffffffffff) {
    dVar7 = INFINITY;
  }
  else {
    dVar7 = (double)local_2e0 * DAT_001f5658;
  }
  param_1[0xb] = (long)dVar7;
  if (local_2d8 == -0x8000000000000000) {
    dVar7 = -INFINITY;
  }
  else if (local_2d8 == 0x7fffffffffffffff) {
    dVar7 = INFINITY;
  }
  else {
    dVar7 = (double)local_2d8 * DAT_001f5658;
  }
  param_1[0xc] = (long)dVar7;
  param_1[0xe] = local_2d0;
  if (lStack_2c8 == -0x8000000000000000) {
    dVar7 = -INFINITY;
  }
  else if (lStack_2c8 == 0x7fffffffffffffff) {
    dVar7 = INFINITY;
  }
  else {
    dVar7 = (double)lStack_2c8 * DAT_001f5658;
  }
  param_1[0xd] = (long)dVar7;
  *(undefined8 *)((long)param_1 + 0x294) = local_2c0;
  *(int *)(param_1 + 0x3f) = local_2fc;
  *(undefined4 *)((long)param_1 + 0x1fc) = uStack_328._4_4_;
  *(int *)((long)param_1 + 0x1ec) = iStack_2f8 + local_2fc;
  param_1[0x48] = lStack_298;
  param_1[0x47] = local_2a0;
  param_1[0x40] = lStack_268;
  *(undefined4 *)((long)param_1 + 500) = local_2a8;
  *(undefined1 *)(param_1 + 0x43) = local_250;
  *(undefined1 *)(param_1 + 0x41) = local_260;
  param_1[0x44] = local_248;
  param_1[0x42] = local_258;
  *(undefined4 *)(param_1 + 0x46) = local_238;
  param_1[0x4c] = lStack_278;
  param_1[0x4b] = local_280;
  *(undefined4 *)(param_1 + 0x4a) = local_288;
  *(undefined1 *)(param_1 + 0x45) = local_240;
  param_1[0xf] = local_1d0;
  param_1[0x4f] = lStack_21c;
  param_1[0x4e] = local_224;
  param_1[0x49] = local_290;
  *(undefined1 *)(param_1 + 0x12) = local_208;
  param_1[0x39] = local_184;
  *(undefined1 *)(param_1 + 0x10) = local_1c8;
  param_1[0x11] = local_210;
  param_1[0x5c] = lStack_e8;
  param_1[0x5b] = local_f0;
  param_1[0x5e] = lStack_d8;
  param_1[0x5d] = lStack_e0;
  param_1[0x56] = local_270;
  param_1[0x4d] = local_2b8;
  param_1[0x58] = lStack_108;
  param_1[0x57] = local_110;
  param_1[0x5a] = lStack_f8;
  param_1[0x59] = lStack_100;
  *(undefined1 *)((long)param_1 + 0x284) = local_214;
  *(undefined1 *)(param_1 + 0x65) = local_a0;
  *(undefined4 *)(param_1 + 10) = local_188;
  *(undefined4 *)(param_1 + 0x3e) = local_2b0;
  *(undefined1 *)((long)param_1 + 0x54) = 1;
  param_1[0x62] = lStack_b8;
  param_1[0x61] = local_c0;
  param_1[100] = lStack_a8;
  param_1[99] = lStack_b0;
  param_1[0x60] = lStack_c8;
  param_1[0x5f] = local_d0;
  if (local_118 == '\x01') {
    param_1[6] = local_148;
    *(undefined1 *)(param_1 + 9) = 1;
    *(undefined1 *)(param_1 + 7) = 1;
    *param_1 = *param_1 + local_148;
    param_1[1] = local_140 + local_150 + param_1[1];
    param_1[8] = local_138;
    param_1[4] = param_1[4] + lStack_128;
    param_1[3] = param_1[3] + local_130;
    *(int *)(param_1 + 2) = (int)param_1[2] + (int)local_138;
  }
  if ((*(long **)(param_2 + 0x208) != (long *)0x0) &&
     (plVar4 = (long *)(**(code **)(**(long **)(param_2 + 0x208) + 0x30))(), plVar4 != (long *)0x0))
  {
    plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,*(undefined4 *)(param_2 + 0x1d4));
    if (plVar4 == (long *)0x0) {
      param_1[0x1d] = 0;
      if ((*(byte *)(param_1 + 0x1e) & 1) == 0) {
        *(undefined1 *)(param_1 + 0x1e) = 1;
      }
    }
    else {
      puStack_378 = &DAT_aaaaaaaaaaaaaaaa;
      local_380 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_368 = &DAT_aaaaaaaaaaaaaaaa;
      local_370 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_358 = &DAT_aaaaaaaaaaaaaaaa;
      local_360 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_348 = &DAT_aaaaaaaaaaaaaaaa;
      local_350 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_388 = &DAT_aaaaaaaaaaaaaaaa;
      local_390 = &DAT_aaaaaaaaaaaaaaaa;
      local_340 = &DAT_aaaaaaaaaaaaaaaa;
      (**(code **)(*plVar4 + 0x10))(&local_390);
      *(undefined1 *)(param_1 + 0x1e) = 1;
      param_1[0x21] = (long)puStack_368;
      *(undefined1 *)(param_1 + 0x22) = 1;
      param_1[0x1d] = (long)puStack_358;
      *param_1 = (long)(puStack_368 + *param_1);
      param_1[1] = (long)(local_360 + (long)local_370 + param_1[1]);
      param_1[4] = (long)(puStack_348 + param_1[4]);
      param_1[3] = (long)(local_350 + param_1[3]);
      *(int *)(param_1 + 2) = (int)param_1[2] + (int)puStack_358;
    }
  }
  param_1[0x24] = local_98;
  *(undefined1 *)(param_1 + 0x25) = local_90;
  param_1[0x26] = local_88;
  *(undefined1 *)(param_1 + 0x27) = local_80;
  param_1[0x28] = local_78;
  *(undefined1 *)(param_1 + 0x29) = local_70;
  param_1[0x2a] = (ulong)local_68;
  param_1[0x2c] = lStack_58;
  param_1[0x2b] = local_60;
  if (((param_3 & 1) != 0) && (uVar5 = FUN_00417e08(), (uVar5 & 1) == 0)) {
    uVar5 = (**(code **)(**(long **)(param_2 + 0x18) + 0x10))();
    if ((long)uVar5 < 0) {
      uVar8 = -(-uVar5 / 1000) - (ulong)(500 < -uVar5 % 1000);
    }
    else {
      uVar8 = uVar5 / 1000;
      if (499 < uVar5 % 1000) {
        uVar8 = uVar8 + 1;
      }
    }
    FUN_008454d8(&local_390,&local_330,uVar8);
    FUN_00623bb0(&DAT_001f627a,"../../media/engine/webrtc_video_engine.cc",0x7bb9,&local_390);
    if ((long)local_380 < 0) {
      operator_delete(local_390);
    }
  }
  FUN_0084546c(&local_330);
  return;
}


// ===== 00b7e794  FUN_00b7e794 =====

void FUN_00b7e794(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  undefined1 *puVar3;
  long *plVar4;
  long lVar5;
  undefined1 uStack_1a2;
  undefined1 uStack_1a1;
  long *local_1a0 [2];
  code *local_190;
  code *pcStack_188;
  undefined1 auStack_180 [144];
  long local_f0;
  undefined1 auStack_e8 [144];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)FUN_005d6490();
  plVar4 = *(long **)(param_1 + 0x88);
  if (plVar2 == plVar4) {
    FUN_007dc0a0(auStack_180,param_2);
    FUN_00b7e8e8(param_1,auStack_180);
    puVar3 = auStack_180;
  }
  else {
    lVar5 = *(long *)(param_1 + 0x90);
    if (lVar5 != 0) {
      FUN_00d0f740(1,lVar5);
    }
    local_f0 = param_1;
    FUN_007dc0a0(auStack_e8,param_2);
    plVar2 = (long *)operator_new(0x98);
    *plVar2 = local_f0;
    FUN_007dc0f4(plVar2 + 1,auStack_e8);
    local_1a0[0] = (long *)operator_new(0x30);
    *local_1a0[0] = lVar5;
    local_1a0[0][4] = (long)FUN_00b87390;
    local_1a0[0][5] = (long)FUN_00b87324;
    local_1a0[0][2] = (long)plVar2;
    local_190 = FUN_005db390;
    pcStack_188 = FUN_005db348;
    (**(code **)(*plVar4 + 8))(plVar4,local_1a0,&uStack_1a1,&uStack_1a2);
    (*local_190)(0,local_1a0,local_1a0);
    puVar3 = auStack_e8;
  }
  FUN_007dc1b4(puVar3);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00b7e8e8  FUN_00b7e8e8 =====

void FUN_00b7e8e8(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *local_100;
  undefined8 uStack_f8;
  code *local_f0;
  code *pcStack_e8;
  undefined1 auStack_e0 [144];
  undefined8 local_50;
  undefined7 uStack_48;
  undefined1 uStack_41;
  undefined7 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_50 = *(undefined8 *)(param_1 + 0x118);
  uStack_48 = (undefined7)*(undefined8 *)(param_1 + 0x120);
  uStack_41 = (undefined1)*(undefined8 *)(param_1 + 0x127);
  uStack_40 = (undefined7)((ulong)*(undefined8 *)(param_1 + 0x127) >> 8);
  FUN_007da028(param_2,&local_50);
  *(undefined4 *)(param_2 + 0x7c) = 90000;
  if (0xfffffffffffffffd < *(long *)(param_2 + 0x70) + 0x7fffffffffffffffU) {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x70) + 0x10))();
    *(undefined8 *)(param_2 + 0x70) = uVar2;
  }
  plVar3 = (long *)(**(code **)(**(long **)(param_1 + 0xa0) + 0x60))();
  FUN_007dc0f4(auStack_e0,param_2);
  local_100 = (undefined8 *)operator_new(0x18);
  *local_100 = FUN_00b7ea2c;
  local_100[1] = 0;
  local_100[2] = param_1;
  uStack_f8 = 0x18;
  local_f0 = FUN_005ea56c;
  pcStack_e8 = FUN_00b873f8;
  (**(code **)(*plVar3 + 8))(plVar3,1,auStack_e0,&local_100);
  (*local_f0)(0,&local_100,&local_100);
  FUN_007dc1b4(auStack_e0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00b7ea20  FUN_00b7ea20 =====

void FUN_00b7ea20(long param_1)

{
  FUN_00b7e794(param_1 + -0x40);
  return;
}


// ===== 00b7ea2c  FUN_00b7ea2c =====

undefined8 FUN_00b7ea2c(long *param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  if ((*(byte *)(param_1 + 0x37) & 1) == 0) {
    bVar1 = *(byte *)(param_2 + 1);
    if ((*(uint *)(param_1 + 0x29) != (uint)bVar1) &&
       (*(int *)((long)param_1 + 0xc4) == (int)param_1[0x19])) {
      for (lVar2 = param_1[0x20]; lVar2 != param_1[0x21]; lVar2 = lVar2 + 0xf8) {
        if (*(uint *)(lVar2 + 0xe0) == (uint)bVar1) {
          return 0;
        }
        if (*(uint *)(lVar2 + 0xd8) == (uint)bVar1) {
          return 0;
        }
        if (*(uint *)(lVar2 + 0xe8) == (uint)bVar1) {
          uVar4 = (**(code **)(*param_1 + 0x78))(param_1);
          if ((uVar4 >> 0x20 & 1) == 0) {
            return 0;
          }
          lVar2 = FUN_00b7ebdc(param_1,uVar4);
          (**(code **)(**(long **)(lVar2 + 200) + 0x98))
                    (*(long **)(lVar2 + 200),*(undefined4 *)(param_2 + 0xc));
          return 1;
        }
      }
      if ((char)param_1[0x1b] == '\x01') {
        lVar2 = FUN_00b77188(param_1[0xe]);
        if ((*(byte *)(param_1 + 0x1b) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_005dc08c();
        }
        if (lVar2 - param_1[0x1a] < 500) {
          uVar4 = FUN_004022fc();
          if ((uVar4 & 1) != 0) {
            return 0;
          }
          FUN_00623bb0(&DAT_001f4ed3,"../../media/engine/webrtc_video_engine.cc",0x6862,
                       "Another unsignalled ssrc packet arrived shortly after the ",
                       "creation of an unsignalled ssrc stream. Dropping packet.");
          return 0;
        }
      }
      FUN_00b7ec6c(param_1,*(undefined4 *)(param_2 + 0xc),0);
      uVar3 = (**(code **)(*(long *)param_1[0xe] + 0x10))();
      uVar4 = uVar3 / 1000;
      if (499 < uVar3 % 1000) {
        uVar4 = uVar4 + 1;
      }
      *(undefined1 *)(param_1 + 0x1b) = 1;
      if ((uVar3 & 0x8000000000000000) != 0) {
        uVar4 = -(-uVar3 / 1000) - (ulong)(500 < -uVar3 % 1000);
      }
      param_1[0x1a] = uVar4;
      return 1;
    }
  }
  return 0;
}


// ===== 00b7ebdc  FUN_00b7ebdc =====

/* WARNING: Type propagation algorithm not settling */

long FUN_00b7ebdc(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if ((int)param_2 == 0) {
    param_2 = (**(code **)(*param_1 + 0x78))(param_1);
    if ((param_2 >> 0x20 & 1) == 0) {
      return 0;
    }
    plVar1 = (long *)param_1[10];
  }
  else {
    plVar1 = (long *)param_1[10];
  }
  do {
    if (plVar1 == (long *)0x0) {
      return 0;
    }
    while( true ) {
      if ((uint)param_2 < *(uint *)(plVar1 + 4)) break;
      if ((uint)param_2 == *(uint *)(plVar1 + 4)) {
        if (plVar1 == param_1 + 10) {
          return 0;
        }
        return plVar1[5];
      }
      plVar1 = (long *)plVar1[1];
      if (plVar1 == (long *)0x0) {
        return 0;
      }
    }
    plVar1 = (long *)*plVar1;
  } while( true );
}


// ===== 00b7ec6c  FUN_00b7ec6c =====

void FUN_00b7ec6c(long *param_1,undefined4 param_2,ulong param_3)

{
  char *__s;
  undefined4 uVar1;
  ulong uVar2;
  ulong uVar3;
  size_t sVar4;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined4 *local_b0;
  undefined4 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined4 local_34;
  
  local_34 = param_2;
  uVar2 = (**(code **)(*param_1 + 0x78))();
  if ((uVar2 >> 0x20 & 1) != 0) {
    uVar3 = FUN_00417e08();
    if ((uVar3 & 1) == 0) {
      FUN_00623bb0(&DAT_001fcbd8,"../../media/engine/webrtc_video_engine.cc",0x6901,
                   "Destroying old default receive stream for SSRC=",param_2,&DAT_001ea377);
    }
    (**(code **)(*param_1 + 0x68))(param_1,uVar2 & 0xffffffff);
  }
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = (undefined4 *)&DAT_aaaaaaaaaaaaaaaa;
  local_b0 = (undefined4 *)&DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
  local_d0 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_0088d2d8(&local_d0,param_1 + 0x38);
  if (local_b0 < puStack_a8) {
    if (local_b0 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *local_b0 = param_2;
    local_b0 = local_b0 + 1;
    __s = PTR_DAT_00d52d08;
    uVar1 = local_34;
  }
  else {
    local_b0 = (undefined4 *)FUN_00852528(&puStack_b8,&local_34);
    __s = PTR_DAT_00d52d08;
    uVar1 = local_34;
  }
  PTR_DAT_00d52d08 = __s;
  local_34 = uVar1;
  if ((param_3 >> 0x20 & 1) != 0) {
    sVar4 = strlen(__s);
    FUN_0088e4b4(&local_d0,__s,sVar4,uVar1,param_3 & 0xffffffff);
  }
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    FUN_00623bb0(&DAT_001fcbd8,"../../media/engine/webrtc_video_engine.cc",0x6951,
                 "Creating default receive stream for SSRC=",local_34,&DAT_001ea377);
  }
  uVar2 = FUN_00b7ce44(param_1,&local_d0,1);
  if (((uVar2 & 1) == 0) && (uVar2 = FUN_004022fc(), (uVar2 & 1) == 0)) {
    FUN_00623bb0(&DAT_001f4e98,"../../media/engine/webrtc_video_engine.cc",0x696a,
                 "Could not create default receive stream.");
  }
  uVar2 = (**(code **)(*param_1 + 0xb8))(param_1,0);
  uVar1 = 0;
  if ((uVar2 & 0x100000000) != 0) {
    uVar1 = (undefined4)uVar2;
  }
  (**(code **)(*param_1 + 0xb0))(param_1,local_34,uVar1);
  (**(code **)(*param_1 + 0x90))(param_1,local_34,param_1[0x15]);
  FUN_0088d578(&local_d0);
  return;
}


// ===== 00b7ee64  FUN_00b7ee64 =====

void FUN_00b7ee64(long param_1)

{
  FUN_0088a664();
  FUN_0088a728(param_1,0,1,*(undefined4 *)(param_1 + 0x2d8));
  return;
}


// ===== 00b7ee9c  FUN_00b7ee9c =====

void FUN_00b7ee9c(long param_1)

{
  FUN_0088a664(param_1 + -0x40);
  FUN_0088a728(param_1 + -0x40,0,1,*(undefined4 *)(param_1 + 0x298));
  return;
}


// ===== 00b7eedc  FUN_00b7eedc =====

void FUN_00b7eedc(long param_1,uint param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *local_28;
  
  plVar1 = *(long **)(param_1 + 0x50);
  do {
    if (plVar1 == (long *)0x0) {
      return;
    }
    while (*(uint *)(plVar1 + 4) <= param_2) {
      if (param_2 == *(uint *)(plVar1 + 4)) {
        if (plVar1 == (long *)(param_1 + 0x50)) {
          return;
        }
        plVar2 = (long *)*param_3;
        lVar3 = plVar1[5];
        local_28 = plVar2;
        if (plVar2 == (long *)0x0) {
          FUN_00b7ef94(lVar3,&local_28);
          return;
        }
        (**(code **)*plVar2)(plVar2);
        FUN_00b7ef94(lVar3,&local_28);
                    /* WARNING: Could not recover jumptable at 0x00b7ef70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 8))(plVar2);
        return;
      }
      plVar1 = (long *)plVar1[1];
      if (plVar1 == (long *)0x0) {
        return;
      }
    }
    plVar1 = (long *)*plVar1;
  } while( true );
}


// ===== 00b7ef94  FUN_00b7ef94 =====

void FUN_00b7ef94(long param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *local_18;
  
  puVar3 = (undefined8 *)*param_2;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3);
  }
  if (*(long **)(param_1 + 0x188) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x188) + 8))();
  }
  *(undefined8 **)(param_1 + 0x188) = puVar3;
  if (*(long *)(param_1 + 200) != 0) {
    uVar1 = FUN_00417e08();
    if ((uVar1 & 1) == 0) {
      FUN_00623bb0(&DAT_001f6220,"../../media/engine/webrtc_video_engine.cc",0x7651,
                   "Setting FrameDecryptor (recv) because of SetFrameDecryptor, remote_ssrc=",
                   *(undefined4 *)(param_1 + 0xf8));
    }
    local_18 = (long *)*param_2;
    plVar2 = *(long **)(param_1 + 200);
    if (local_18 != (long *)0x0) {
      (**(code **)*local_18)();
    }
    (**(code **)(*plVar2 + 0x28))(plVar2,&local_18);
    if (local_18 != (long *)0x0) {
      (**(code **)(*local_18 + 8))();
    }
  }
  return;
}


// ===== 00b7f06c  FUN_00b7f06c =====

void FUN_00b7f06c(long param_1,uint param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *local_28;
  
  plVar1 = *(long **)(param_1 + 0x10);
  do {
    if (plVar1 == (long *)0x0) {
      return;
    }
    while (*(uint *)(plVar1 + 4) <= param_2) {
      if (param_2 == *(uint *)(plVar1 + 4)) {
        if (plVar1 == (long *)(param_1 + 0x10)) {
          return;
        }
        plVar2 = (long *)*param_3;
        lVar3 = plVar1[5];
        local_28 = plVar2;
        if (plVar2 == (long *)0x0) {
          FUN_00b7ef94(lVar3,&local_28);
          return;
        }
        (**(code **)*plVar2)(plVar2);
        FUN_00b7ef94(lVar3,&local_28);
                    /* WARNING: Could not recover jumptable at 0x00b7f100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 8))(plVar2);
        return;
      }
      plVar1 = (long *)plVar1[1];
      if (plVar1 == (long *)0x0) {
        return;
      }
    }
    plVar1 = (long *)*plVar1;
  } while( true );
}


// ===== 00b7f124  FUN_00b7f124 =====

undefined8 FUN_00b7f124(long *param_1,uint param_2,undefined4 param_3)

{
  ulong uVar1;
  long *plVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x78))();
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x16) = param_3;
    if ((uVar1 >> 0x20 & 1) == 0) {
      return 1;
    }
    param_2 = (uint)uVar1;
    plVar2 = (long *)param_1[10];
  }
  else {
    plVar2 = (long *)param_1[10];
  }
  for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
    while( true ) {
      if (param_2 < *(uint *)(plVar2 + 4)) break;
      if (param_2 == *(uint *)(plVar2 + 4)) {
        if (plVar2 != param_1 + 10) {
          plVar2 = *(long **)(plVar2[5] + 200);
          if (plVar2 == (long *)0x0) {
            return 1;
          }
          (**(code **)(*plVar2 + 0x48))(plVar2,param_3);
          return 1;
        }
        goto LAB_00b7f1c8;
      }
      plVar2 = (long *)plVar2[1];
      if (plVar2 == (long *)0x0) goto LAB_00b7f1c8;
    }
  }
LAB_00b7f1c8:
  uVar1 = FUN_004249b0();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../media/engine/webrtc_video_engine.cc",0x6b23,
                 "No stream found to set base minimum playout delay");
  }
  return 0;
}


// ===== 00b7f208  FUN_00b7f208 =====

undefined8 FUN_00b7f208(long param_1,uint param_2,undefined4 param_3)

{
  ulong uVar1;
  long *plVar2;
  
  uVar1 = (**(code **)(*(long *)(param_1 + -0x40) + 0x78))();
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x70) = param_3;
    if ((uVar1 >> 0x20 & 1) == 0) {
      return 1;
    }
    param_2 = (uint)uVar1;
    plVar2 = *(long **)(param_1 + 0x10);
  }
  else {
    plVar2 = *(long **)(param_1 + 0x10);
  }
  for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
    while( true ) {
      if (param_2 < *(uint *)(plVar2 + 4)) break;
      if (param_2 == *(uint *)(plVar2 + 4)) {
        if (plVar2 != (long *)(param_1 + 0x10)) {
          plVar2 = *(long **)(plVar2[5] + 200);
          if (plVar2 == (long *)0x0) {
            return 1;
          }
          (**(code **)(*plVar2 + 0x48))(plVar2,param_3);
          return 1;
        }
        goto LAB_00b7f2ac;
      }
      plVar2 = (long *)plVar2[1];
      if (plVar2 == (long *)0x0) goto LAB_00b7f2ac;
    }
  }
LAB_00b7f2ac:
  uVar1 = FUN_004249b0();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../media/engine/webrtc_video_engine.cc",0x6b23,
                 "No stream found to set base minimum playout delay");
  }
  return 0;
}


// ===== 00b7f2ec  FUN_00b7f2ec =====

ulong FUN_00b7f2ec(long param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  uint uVar4;
  
  if (param_2 == 0) {
    uVar1 = *(uint *)(param_1 + 0xb0);
    uVar2 = 0x100000000;
    uVar4 = uVar1 & 0xffffff00;
  }
  else {
    for (plVar3 = *(long **)(param_1 + 0x50); plVar3 != (long *)0x0; plVar3 = (long *)plVar3[1]) {
      while (param_2 < *(uint *)(plVar3 + 4)) {
        plVar3 = (long *)*plVar3;
        if (plVar3 == (long *)0x0) goto LAB_00b7f36c;
      }
      if (param_2 == *(uint *)(plVar3 + 4)) {
        if (plVar3 != (long *)(param_1 + 0x50)) {
          plVar3 = *(long **)(plVar3[5] + 200);
          if (plVar3 != (long *)0x0) {
            plVar3 = (long *)(**(code **)(*plVar3 + 0x50))();
          }
          uVar1 = (uint)plVar3;
          uVar4 = uVar1 & 0xffffff00;
          uVar2 = 0x100000000;
          goto LAB_00b7f3a8;
        }
        break;
      }
    }
LAB_00b7f36c:
    uVar2 = FUN_004249b0();
    if ((uVar2 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../media/engine/webrtc_video_engine.cc",0x6bab,
                   "No stream found to get base minimum playout delay");
    }
    uVar2 = 0;
    uVar1 = 0;
    uVar4 = 0;
  }
LAB_00b7f3a8:
  return uVar2 | (uVar4 | uVar1 & 0xff);
}


// ===== 00b7f3b8  FUN_00b7f3b8 =====

ulong FUN_00b7f3b8(long param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  uint uVar4;
  
  if (param_2 == 0) {
    uVar1 = *(uint *)(param_1 + 0x70);
    uVar2 = 0x100000000;
    uVar4 = uVar1 & 0xffffff00;
  }
  else {
    for (plVar3 = *(long **)(param_1 + 0x10); plVar3 != (long *)0x0; plVar3 = (long *)plVar3[1]) {
      while (param_2 < *(uint *)(plVar3 + 4)) {
        plVar3 = (long *)*plVar3;
        if (plVar3 == (long *)0x0) goto LAB_00b7f438;
      }
      if (param_2 == *(uint *)(plVar3 + 4)) {
        if (plVar3 != (long *)(param_1 + 0x10)) {
          plVar3 = *(long **)(plVar3[5] + 200);
          if (plVar3 != (long *)0x0) {
            plVar3 = (long *)(**(code **)(*plVar3 + 0x50))();
          }
          uVar1 = (uint)plVar3;
          uVar4 = uVar1 & 0xffffff00;
          uVar2 = 0x100000000;
          goto LAB_00b7f474;
        }
        break;
      }
    }
LAB_00b7f438:
    uVar2 = FUN_004249b0();
    if ((uVar2 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../media/engine/webrtc_video_engine.cc",0x6bab,
                   "No stream found to get base minimum playout delay");
    }
    uVar2 = 0;
    uVar1 = 0;
    uVar4 = 0;
  }
LAB_00b7f474:
  return uVar2 | (uVar4 | uVar1 & 0xff);
}


// ===== 00b7f484  FUN_00b7f484 =====

void FUN_00b7f484(undefined8 *param_1,long param_2,uint param_3)

{
  ulong uVar1;
  long *plVar2;
  
  for (plVar2 = *(long **)(param_2 + 0x50); plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
    while (*(uint *)(plVar2 + 4) <= param_3) {
      if (param_3 == *(uint *)(plVar2 + 4)) {
        if (plVar2 != (long *)(param_2 + 0x50)) {
                    /* WARNING: Could not recover jumptable at 0x00b7f4f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(**(long **)(plVar2[5] + 200) + 0x30))(param_1);
          return;
        }
        goto LAB_00b7f4f8;
      }
      plVar2 = (long *)plVar2[1];
      if (plVar2 == (long *)0x0) goto LAB_00b7f4f8;
    }
  }
LAB_00b7f4f8:
  uVar1 = FUN_004249b0();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001fcbd8,"../../media/engine/webrtc_video_engine.cc",0x6c0b,
                 "Attempting to get contributing sources for SSRC:",param_3," which doesn\'t exist."
                );
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// ===== 00b7f544  FUN_00b7f544 =====

void FUN_00b7f544(undefined8 *param_1,long param_2,uint param_3)

{
  ulong uVar1;
  long *plVar2;
  
  for (plVar2 = *(long **)(param_2 + 0x10); plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
    while (*(uint *)(plVar2 + 4) <= param_3) {
      if (param_3 == *(uint *)(plVar2 + 4)) {
        if (plVar2 != (long *)(param_2 + 0x10)) {
                    /* WARNING: Could not recover jumptable at 0x00b7f5b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(**(long **)(plVar2[5] + 200) + 0x30))(param_1);
          return;
        }
        goto LAB_00b7f5b8;
      }
      plVar2 = (long *)plVar2[1];
      if (plVar2 == (long *)0x0) goto LAB_00b7f5b8;
    }
  }
LAB_00b7f5b8:
  uVar1 = FUN_004249b0();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001fcbd8,"../../media/engine/webrtc_video_engine.cc",0x6c0b,
                 "Attempting to get contributing sources for SSRC:",param_3," which doesn\'t exist."
                );
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// ===== 00b7f604  FUN_00b7f604 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b7f604(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,byte param_6,long *param_7,undefined4 *param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  ulong uVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 uStack_59;
  int *local_58;
  
  *param_1 = &PTR_FUN_00d465e8;
  lVar6 = *param_2;
  param_1[1] = lVar6;
  if (lVar6 != 0) {
    FUN_00d0f740(1,lVar6 + 8);
  }
  lVar7 = param_2[4];
  lVar6 = param_2[3];
  lVar9 = param_2[2];
  lVar8 = param_2[1];
  param_1[6] = param_3;
  param_1[3] = lVar9;
  param_1[2] = lVar8;
  param_1[5] = lVar7;
  param_1[4] = lVar6;
  FUN_0088d2d8(param_1 + 7,param_4);
  param_1[0x19] = 0;
  *(byte *)(param_1 + 0x1a) = param_6 & 1;
  FUN_00846884(param_1 + 0x1b,param_5);
  FUN_00842468(param_1 + 0x3a,param_8);
  param_1[0x41] = 0;
  local_58 = (int *)&DAT_aaaaaaaaaaaaaaaa;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_58);
  pthread_mutex_init((pthread_mutex_t *)(param_1 + 0x42),(pthread_mutexattr_t *)&local_58);
  pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_58);
  param_1[0x47] = 0;
  uVar2 = _UNK_001f3058;
  uVar1 = _DAT_001f3050;
  *(undefined1 *)(param_1 + 0x4a) = 0;
  param_1[0x49] = uVar2;
  param_1[0x48] = uVar1;
  lVar7 = param_7[1] - *param_7;
  lVar6 = 0;
  if (lVar7 != 0) {
    lVar6 = *param_7;
  }
  FUN_00b7f800(lVar6,(lVar7 >> 3) * -0x1084210842108421,param_1 + 0x25,param_1 + 0x28,param_1 + 0x1b
              );
  lVar6 = *param_7;
  if (lVar6 != param_7[1]) {
    *(undefined4 *)((long)param_1 + 0x10c) = *(undefined4 *)(lVar6 + 0xd8);
    *(undefined4 *)(param_1 + 0x22) = *(undefined4 *)(lVar6 + 0xdc);
    bVar3 = FUN_00892808(lVar6);
    *(byte *)((long)param_1 + 0x10a) = bVar3 & 1;
    uVar4 = FUN_00892ac4(lVar6);
    uVar5 = 1000;
    if ((uVar4 & 1) == 0) {
      uVar5 = 0;
    }
    *(undefined4 *)(param_1 + 0x20) = uVar5;
    if (((uVar4 & 1) != 0) && ((*(byte *)(lVar6 + 0xf0) & 1) != 0)) {
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(lVar6 + 0xec);
    }
    bVar3 = FUN_00892c5c(lVar6);
    *(byte *)(param_1 + 0x21) = bVar3 & 1;
    if (*(int *)(lVar6 + 0xe0) != -1) {
      uVar5 = *(undefined4 *)(lVar6 + 0xdc);
      local_58 = (int *)(lVar6 + 0xe0);
      lVar6 = FUN_0066693c(0,param_1 + 0x25,param_1 + 0x25,&DAT_001f94c3,&local_58,&uStack_59);
      *(undefined4 *)(lVar6 + 0x20) = uVar5;
    }
    param_1[0x2c] = param_1;
    *(undefined4 *)(param_1 + 0x3a) = *param_8;
    FUN_00b7f9bc(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__vector/vector.h:435: libc++ Hardening assertion !empty() failed: front() called on an empty vector\n"
            );
}


// ===== 00b7f800  FUN_00b7f800 =====

void FUN_00b7f800(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined *__s;
  int iVar4;
  size_t __n;
  long lVar5;
  undefined8 *__s1;
  long lVar6;
  undefined1 auStack_130 [96];
  undefined1 auStack_d0 [96];
  long local_70;
  
  __s = PTR_DAT_00d52238;
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  if (param_2 * 0xf8 != 0) {
    lVar6 = 0;
    do {
      lVar1 = param_1 + lVar6;
      FUN_007b68d8(auStack_130,lVar1 + 0x10,lVar1 + 0xa8);
      uVar2 = *(ulong *)(param_5 + 8);
      if (uVar2 < *(ulong *)(param_5 + 0x10)) {
        if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        FUN_007b6ad4(auStack_d0,auStack_130);
        FUN_0084507c(uVar2,auStack_d0,*(undefined4 *)(lVar1 + 0xc));
        FUN_007b6d78(auStack_d0);
        lVar5 = uVar2 + 0x68;
      }
      else {
        lVar5 = FUN_00b85300(param_5,auStack_130,lVar1 + 0xc);
      }
      *(long *)(param_5 + 8) = lVar5;
      FUN_007b6d78(auStack_130);
      lVar5 = param_1 + lVar6;
      FUN_00b854e8(0,param_3,param_3,lVar5 + 0xe8,lVar1 + 0xc);
      if (*(char *)(lVar5 + 0x50) == '\x01') {
        __s1 = (undefined8 *)(lVar5 + 0x38);
        __n = strlen(__s);
        if ((long)*(char *)(lVar5 + 0x4f) < 0) {
          if (__n == *(size_t *)(param_1 + lVar6 + 0x40)) {
            if (__n == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
              FUN_005f5590();
            }
            __s1 = (undefined8 *)*__s1;
            goto LAB_00b7f92c;
          }
        }
        else if (__n == (long)*(char *)(lVar5 + 0x4f)) {
LAB_00b7f92c:
          iVar4 = memcmp(__s1,__s,__n);
          if (iVar4 == 0) {
            FUN_0066396c(0,param_4,param_4,lVar1 + 0xc);
          }
        }
      }
      lVar6 = lVar6 + 0xf8;
    } while (param_2 * 0xf8 != lVar6);
  }
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00b7f9bc  FUN_00b7f9bc =====

void FUN_00b7f9bc(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 auStack_258 [248];
  undefined1 *local_160;
  undefined1 *puStack_158;
  undefined1 *local_150;
  undefined1 *puStack_148;
  undefined1 *puStack_140;
  undefined1 *puStack_138;
  undefined1 *local_130;
  undefined1 *puStack_128;
  undefined1 *local_120;
  undefined1 *local_118;
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
  undefined1 *puStack_c0;
  undefined1 *puStack_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 auStack_68 [56];
  
  uVar1 = FUN_005ed180(param_1 + 0x1d0);
  if ((uVar1 & 1) != 0) {
    plVar3 = *(long **)(param_1 + 0x30);
    FUN_00842468(auStack_68,param_1 + 0x1d0);
    uVar2 = (**(code **)(*plVar3 + 0x48))(plVar3,auStack_68);
    *(undefined8 *)(param_1 + 0x208) = uVar2;
    FUN_008424f8(auStack_68);
  }
  puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
  local_150 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_140 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
  local_130 = &DAT_aaaaaaaaaaaaaaaa;
  local_118 = &DAT_aaaaaaaaaaaaaaaa;
  local_120 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
  local_110 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_100 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
  local_f0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
  local_d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_158 = &DAT_aaaaaaaaaaaaaaaa;
  local_160 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_008465fc(&local_160,param_1 + 0xd8);
  local_118 = *(undefined1 **)(param_1 + 0x208);
  plVar3 = *(long **)(param_1 + 0x30);
  local_120 = (undefined1 *)CONCAT71(local_120._1_7_,local_118 != (undefined1 *)0x0);
  FUN_00846884(auStack_258,&local_160);
  uVar2 = (**(code **)(*plVar3 + 0x38))(plVar3,auStack_258);
  *(undefined8 *)(param_1 + 200) = uVar2;
  FUN_00846ac4(auStack_258);
  FUN_00846ac4(&local_160);
  return;
}


// ===== 00b7fab0  FUN_00b7fab0 =====

void FUN_00b7fab0(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_00d465e8;
  (**(code **)(*(long *)param_1[6] + 0x40))((long *)param_1[6],param_1[0x19]);
  if (param_1[0x41] != 0) {
    (**(code **)(*(long *)param_1[6] + 0x50))();
  }
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x42));
  FUN_008424f8(param_1 + 0x3a);
  FUN_00846ac4(param_1 + 0x1b);
  FUN_0088d578(param_1 + 7);
  plVar2 = (long *)param_1[1];
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x00b7fb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))(plVar2);
    return;
  }
  return;
}


// ===== 00b7fb64  FUN_00b7fb64 =====

void FUN_00b7fb64(void *param_1)

{
  FUN_00b7fab0();
  operator_delete(param_1);
  return;
}


// ===== 00b7fb94  FUN_00b7fb94 =====

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_00b7fb94(long param_1,long *param_2)

{
  long lVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  undefined8 *******pppppppuVar4;
  long *plVar5;
  undefined8 **ppuVar6;
  bool bVar7;
  byte bVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  int iVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  undefined8 **ppuVar19;
  undefined8 **ppuVar20;
  undefined8 **ppuVar21;
  undefined8 **ppuVar22;
  undefined4 uVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined8 ***pppuVar26;
  undefined8 ***pppuVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined8 *******local_b8;
  undefined8 *******local_b0;
  long local_a8;
  undefined8 ***local_a0;
  undefined8 ***pppuStack_98;
  undefined8 local_90;
  undefined8 **local_88;
  undefined8 *local_80;
  long local_78;
  undefined8 *local_70;
  undefined8 *puStack_68;
  long local_60;
  undefined8 *******local_58;
  
  puVar24 = (undefined8 *)((ulong)&local_70 | 8);
  lVar1 = param_2[1] - *param_2;
  lVar16 = 0;
  if (lVar1 != 0) {
    lVar16 = *param_2;
  }
  puStack_68 = (undefined8 *)0x0;
  local_60 = 0;
  local_80 = (undefined8 *)0x0;
  local_78 = 0;
  local_90 = 0;
  local_a0 = (undefined8 ***)0x0;
  pppuStack_98 = (undefined8 ***)0x0;
  local_88 = &local_80;
  local_70 = puVar24;
  FUN_00b7f800(lVar16,(lVar1 >> 3) * -0x1084210842108421,&local_70,&local_88,&local_a0);
  lVar16 = *param_2;
  if (lVar16 == param_2[1]) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__vector/vector.h:435: libc++ Hardening assertion !empty() failed: front() called on an empty vector\n"
              );
  }
  if ((*(int *)(param_1 + 0x110) != *(int *)(lVar16 + 0xdc)) ||
     (*(int *)(param_1 + 0x10c) != *(int *)(lVar16 + 0xd8))) {
    *(int *)(param_1 + 0x10c) = *(int *)(lVar16 + 0xd8);
    *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(lVar16 + 0xdc);
    (**(code **)(**(long **)(param_1 + 200) + 0x80))();
  }
  bVar8 = FUN_00892808(lVar16);
  if (*(byte *)(param_1 + 0x10a) != (bVar8 & 1)) {
    *(byte *)(param_1 + 0x10a) = bVar8 & 1;
    (**(code **)(**(long **)(param_1 + 200) + 0x70))();
  }
  iVar13 = *(int *)(param_1 + 0x100);
  uVar9 = FUN_00892ac4(lVar16);
  iVar12 = 1000;
  if ((uVar9 & 1) == 0) {
    iVar12 = 0;
  }
  if (iVar12 != *(int *)(param_1 + 0x100)) {
    iVar13 = iVar12;
  }
  if ((*(char *)(lVar16 + 0xf0) == '\x01') && (iVar13 != 0)) {
    iVar13 = *(int *)(lVar16 + 0xec);
  }
  if (*(int *)(param_1 + 0x100) != iVar13) {
    *(int *)(param_1 + 0x100) = iVar13;
    (**(code **)(**(long **)(param_1 + 200) + 0x78))(*(long **)(param_1 + 200),(long)iVar13 * 1000);
  }
  bVar8 = FUN_00892c5c(lVar16);
  if (*(byte *)(param_1 + 0x108) != (bVar8 & 1)) {
    *(byte *)(param_1 + 0x108) = bVar8 & 1;
    (**(code **)(**(long **)(param_1 + 200) + 0x88))();
  }
  iVar12 = *(int *)(lVar16 + 0xe0);
  if (iVar12 != -1) {
    uVar23 = *(undefined4 *)(lVar16 + 0xdc);
    puVar11 = puVar24;
    puVar14 = puStack_68;
    while (puVar25 = puVar11, puVar14 != (undefined8 *)0x0) {
      while (puVar10 = puVar14, puVar11 = puVar10, *(int *)((long)puVar10 + 0x1c) <= iVar12) {
        if (iVar12 == *(int *)((long)puVar10 + 0x1c)) goto LAB_00b7fdb0;
        puVar14 = (undefined8 *)puVar10[1];
        if ((undefined8 *)puVar10[1] == (undefined8 *)0x0) {
          puVar25 = puVar10 + 1;
          goto LAB_00b7fd5c;
        }
      }
      puVar14 = (undefined8 *)*puVar10;
    }
LAB_00b7fd5c:
    puVar10 = (undefined8 *)operator_new(0x28);
    if (puVar10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *(int *)((long)puVar10 + 0x1c) = iVar12;
    *(undefined4 *)(puVar10 + 4) = 0;
    *puVar10 = 0;
    puVar10[1] = 0;
    puVar10[2] = puVar11;
    *puVar25 = puVar10;
    puVar11 = puVar10;
    if ((undefined8 *)*local_70 != (undefined8 *)0x0) {
      puVar11 = (undefined8 *)*puVar25;
      local_70 = (undefined8 *)*local_70;
    }
    FUN_005d5b94(puStack_68,puVar11);
    local_60 = local_60 + 1;
LAB_00b7fdb0:
    *(undefined4 *)(puVar10 + 4) = uVar23;
  }
  if (*(long *)(param_1 + 0x138) == local_60) {
    plVar17 = *(long **)(param_1 + 0x128);
    puVar11 = local_70;
    while (plVar17 != (long *)(param_1 + 0x130)) {
      if ((*(int *)((long)plVar17 + 0x1c) != *(int *)((long)puVar11 + 0x1c)) ||
         ((int)plVar17[4] != *(int *)(puVar11 + 4))) goto LAB_00b7fe60;
      plVar18 = plVar17;
      plVar5 = (long *)plVar17[1];
      if ((long *)plVar17[1] == (long *)0x0) {
        do {
          plVar17 = (long *)plVar18[2];
          bVar7 = plVar18 != (long *)*plVar17;
          plVar18 = plVar17;
        } while (bVar7);
      }
      else {
        do {
          plVar17 = plVar5;
          plVar5 = (long *)*plVar17;
        } while ((long *)*plVar17 != (long *)0x0);
      }
      puVar14 = puVar11;
      puVar25 = (undefined8 *)puVar11[1];
      if ((undefined8 *)puVar11[1] == (undefined8 *)0x0) {
        do {
          puVar11 = (undefined8 *)puVar14[2];
          bVar7 = puVar14 != (undefined8 *)*puVar11;
          puVar14 = puVar11;
        } while (bVar7);
      }
      else {
        do {
          puVar11 = puVar25;
          puVar25 = (undefined8 *)*puVar11;
        } while ((undefined8 *)*puVar11 != (undefined8 *)0x0);
      }
    }
  }
  else {
LAB_00b7fe60:
    plVar17 = *(long **)(param_1 + 200);
    local_b0 = (undefined8 *******)0x0;
    local_a8 = 0;
    local_b8 = &local_b0;
    if (local_60 != 0) {
      local_b0 = (undefined8 *******)FUN_005fa240(&local_b8,puStack_68,&local_b8);
      local_b0[2] = &local_b0;
      pppppppuVar4 = local_b0;
      do {
        local_b8 = pppppppuVar4;
        pppppppuVar4 = (undefined8 *******)*local_b8;
      } while ((undefined8 *******)*local_b8 != (undefined8 *******)0x0);
      local_a8 = local_60;
    }
    (**(code **)(*plVar17 + 0x90))(plVar17,&local_b8);
    local_58 = &local_b8;
    FUN_005fa2f8(&local_58,local_b0);
    puVar11 = *(undefined8 **)(param_1 + 0x128);
    puVar14 = *(undefined8 **)(param_1 + 0x130);
    lVar16 = *(long *)(param_1 + 0x138);
    *(undefined8 **)(param_1 + 0x130) = puStack_68;
    *(long *)(param_1 + 0x128) = (long)local_70;
    plVar17 = (long *)(param_1 + 0x130);
    *(long *)(param_1 + 0x138) = local_60;
    local_70 = puVar24;
    if (lVar16 != 0) {
      puVar14[2] = puVar24;
      local_60 = *(long *)(param_1 + 0x138);
      local_70 = puVar11;
    }
    puStack_68 = puVar14;
    if (local_60 == 0) {
      *(long *)(param_1 + 0x128) = (long)plVar17;
      local_60 = lVar16;
    }
    else {
      *(long **)(*plVar17 + 0x10) = plVar17;
      local_60 = lVar16;
    }
  }
  pppuVar3 = pppuStack_98;
  lVar16 = *(long *)(param_1 + 0x150);
  if (local_78 == lVar16) {
    if (local_88 != &local_80) {
      ppuVar19 = *(undefined8 ***)(param_1 + 0x140);
      ppuVar21 = ppuVar19;
      ppuVar22 = local_88;
      do {
        if (*(int *)((long)ppuVar22 + 0x1c) != *(int *)((long)ppuVar21 + 0x1c)) goto LAB_00b7ffc4;
        ppuVar20 = ppuVar22;
        ppuVar6 = (undefined8 **)ppuVar22[1];
        if ((undefined8 **)ppuVar22[1] == (undefined8 **)0x0) {
          do {
            ppuVar22 = (undefined8 **)ppuVar20[2];
            bVar7 = ppuVar20 != (undefined8 **)*ppuVar22;
            ppuVar20 = ppuVar22;
          } while (bVar7);
        }
        else {
          do {
            ppuVar22 = ppuVar6;
            ppuVar6 = (undefined8 **)*ppuVar22;
          } while ((undefined8 **)*ppuVar22 != (undefined8 **)0x0);
        }
        ppuVar20 = ppuVar21;
        ppuVar6 = (undefined8 **)ppuVar21[1];
        if ((undefined8 **)ppuVar21[1] == (undefined8 **)0x0) {
          do {
            ppuVar21 = (undefined8 **)ppuVar20[2];
            bVar7 = ppuVar20 != (undefined8 **)*ppuVar21;
            ppuVar20 = ppuVar21;
          } while (bVar7);
        }
        else {
          do {
            ppuVar21 = ppuVar6;
            ppuVar6 = (undefined8 **)*ppuVar21;
          } while ((undefined8 **)*ppuVar21 != (undefined8 **)0x0);
        }
      } while (ppuVar22 != &local_80);
    }
    uVar23 = 0;
    goto LAB_00b80014;
  }
  ppuVar19 = *(undefined8 ***)(param_1 + 0x140);
LAB_00b7ffc4:
  puVar24 = *(undefined8 **)(param_1 + 0x148);
  *(long *)(param_1 + 0x150) = local_78;
  *(undefined8 ***)(param_1 + 0x140) = local_88;
  *(undefined8 **)(param_1 + 0x148) = local_80;
  plVar17 = (long *)(param_1 + 0x148);
  if (lVar16 == 0) {
    local_88 = &local_80;
    if (local_78 != 0) goto LAB_00b7fff0;
LAB_00b8000c:
    *(long **)(param_1 + 0x140) = plVar17;
  }
  else {
    puVar24[2] = &local_80;
    local_88 = ppuVar19;
    if (*(long *)(param_1 + 0x150) == 0) goto LAB_00b8000c;
LAB_00b7fff0:
    *(long **)(*plVar17 + 0x10) = plVar17;
  }
  uVar23 = 1;
  local_80 = puVar24;
  local_78 = lVar16;
LAB_00b80014:
  pppuVar27 = *(undefined8 ****)(param_1 + 0xe0);
  pppuVar26 = *(undefined8 ****)(param_1 + 0xd8);
  auVar28._0_8_ = (long)pppuStack_98 - (long)local_a0;
  auVar28._8_8_ = (long)pppuVar27 - (long)pppuVar26;
  auVar29._8_8_ = auVar28._8_8_;
  auVar29._0_8_ = auVar28._8_8_;
  auVar29 = NEON_cmeq(auVar28,auVar29,8);
  pppuVar2 = local_a0;
  if ((auVar29 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
LAB_00b80084:
    uVar15 = *(undefined8 *)(param_1 + 0xe8);
    uVar23 = 1;
    *(undefined8 ****)(param_1 + 0xe0) = pppuStack_98;
    *(undefined8 ****)(param_1 + 0xd8) = local_a0;
    *(undefined8 *)(param_1 + 0xe8) = local_90;
    local_90 = uVar15;
    pppuStack_98 = pppuVar27;
    pppuVar27 = pppuVar26;
  }
  else {
    for (; pppuVar27 = local_a0, pppuVar2 != pppuVar3; pppuVar2 = pppuVar2 + 0xd) {
      uVar9 = FUN_0084514c(pppuVar2,pppuVar26);
      if ((uVar9 & 1) == 0) {
        pppuVar27 = *(undefined8 ****)(param_1 + 0xe0);
        pppuVar26 = *(undefined8 ****)(param_1 + 0xd8);
        goto LAB_00b80084;
      }
      pppuVar26 = pppuVar26 + 0xd;
    }
  }
  local_a0 = pppuVar27;
  pppuVar3 = pppuStack_98;
  if (pppuVar27 != (undefined8 ***)0x0) {
    while (pppuVar27 != pppuVar3) {
      pppuVar3 = pppuVar3 + -0xd;
      if (pppuVar3 == (undefined8 ***)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      thunk_FUN_007b6d78(pppuVar3);
    }
    pppuStack_98 = pppuVar27;
    operator_delete(local_a0);
  }
  local_a0 = &local_88;
  FUN_005fa1cc(&local_a0,local_80);
  local_88 = &local_70;
  FUN_005fa2f8(&local_88,puStack_68);
  return uVar23;
}


// ===== 00b8016c  FUN_00b8016c =====

void FUN_00b8016c(long param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined1 auStack_58 [56];
  
  if (*(long **)(param_1 + 0x208) == (long *)0x0) {
    if (param_2 == -1) {
      *(int *)(param_1 + 0x1d0) = -1;
    }
    else {
      *(int *)(param_1 + 0x1d0) = param_2;
      uVar2 = FUN_005ed180(param_1 + 0x1d0);
      if ((uVar2 & 1) != 0) {
        plVar4 = *(long **)(param_1 + 0x30);
        FUN_00842468(auStack_58,param_1 + 0x1d0);
        uVar3 = (**(code **)(*plVar4 + 0x48))(plVar4,auStack_58);
        *(undefined8 *)(param_1 + 0x208) = uVar3;
        FUN_008424f8(auStack_58);
        (**(code **)(**(long **)(param_1 + 200) + 0x68))
                  (*(long **)(param_1 + 200),*(undefined8 *)(param_1 + 0x208));
      }
    }
  }
  else {
    iVar1 = (**(code **)(**(long **)(param_1 + 0x208) + 0x28))();
    if (iVar1 != param_2) {
      *(int *)(param_1 + 0x1d0) = param_2;
      (**(code **)(**(long **)(param_1 + 0x208) + 0x20))(*(long **)(param_1 + 0x208),param_2);
      if (param_2 == -1) {
        (**(code **)(**(long **)(param_1 + 200) + 0x68))(*(long **)(param_1 + 200),0);
        (**(code **)(**(long **)(param_1 + 0x30) + 0x50))
                  (*(long **)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x208));
        *(undefined8 *)(param_1 + 0x208) = 0;
      }
    }
  }
  return;
}


// ===== 00b80274  FUN_00b80274 =====

void FUN_00b80274(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined1 *local_140;
  undefined1 *puStack_138;
  undefined8 local_130;
  undefined1 *puStack_128;
  undefined1 *local_120;
  undefined *local_118;
  undefined1 *local_110;
  undefined1 *puStack_108;
  undefined8 local_100 [3];
  long local_e8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  code *local_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined *puStack_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  plVar6 = *(long **)(param_1 + 200);
  puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
  local_140 = &DAT_aaaaaaaaaaaaaaaa;
  if (plVar6 == (long *)0x0) {
    puVar9 = &DAT_aaaaaaaaaaaaaaaa;
    uVar4 = 0xaaaaaa00;
    puVar8 = &DAT_aaaaaaaaaaaaaaaa;
    lVar5 = *(long *)(param_1 + 0x208);
    uVar2 = 0xaaaaaaaaaaaaaa00;
    puVar3 = &DAT_aaaaaaaaaaaaaaaa;
  }
  else {
    uVar4 = (**(code **)(*plVar6 + 0x50))(plVar6);
    uStack_b0 = 0;
    uStack_c8 = 0;
    local_d0 = 0;
    local_c0 = FUN_005fa1bc;
    puStack_b8 = &DAT_001fbc50;
    local_a8 = 0;
    (**(code **)(**(long **)(param_1 + 200) + 0x58))
              (&local_98,*(long **)(param_1 + 200),&local_d0,0);
    puVar8 = puStack_80;
    puVar9 = local_88;
    if (*(long *)(puStack_80 + 8) != 0) {
      local_88 = (undefined1 *)0x0;
      puStack_80 = &DAT_001fbc50;
    }
    if (*(code **)(puStack_b8 + 8) != (code *)0x0) {
      (**(code **)(puStack_b8 + 8))(local_d0);
    }
    (**(code **)(**(long **)(param_1 + 0x30) + 0x40))
              (*(long **)(param_1 + 0x30),*(undefined8 *)(param_1 + 200));
    *(undefined8 *)(param_1 + 200) = 0;
    lVar5 = *(long *)(param_1 + 0x208);
    uVar2 = local_98;
    puVar3 = puStack_90;
    puStack_138 = puStack_70;
    local_140 = local_78;
  }
  if (lVar5 != 0) {
    (**(code **)(**(long **)(param_1 + 0x30) + 0x50))();
    *(undefined8 *)(param_1 + 0x208) = 0;
  }
  FUN_00b7f9bc(param_1);
  puVar7 = puVar8;
  if (plVar6 != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 200) + 0x48))(*(long **)(param_1 + 200),uVar4);
    if (*(long *)(puVar8 + 8) != 0) {
      puVar7 = &DAT_001fbc50;
    }
    local_130 = uVar2;
    puStack_128 = puVar3;
    local_120 = puVar9;
    local_118 = puVar8;
    local_110 = local_140;
    puStack_108 = puStack_138;
    (**(code **)(**(long **)(param_1 + 200) + 0x58))
              (local_100,*(long **)(param_1 + 200),&local_130,0);
    if (*(code **)(local_e8 + 8) != (code *)0x0) {
      (**(code **)(local_e8 + 8))(local_100[0]);
    }
    if (*(code **)(local_118 + 8) != (code *)0x0) {
      (**(code **)(local_118 + 8))(local_130);
    }
  }
  if (*(char *)(param_1 + 0x250) == '\x01') {
    *(undefined1 *)(param_1 + 0x250) = 1;
    (**(code **)(**(long **)(param_1 + 200) + 0x10))();
  }
  if ((plVar6 != (long *)0x0) && (*(code **)(puVar7 + 8) != (code *)0x0)) {
    (**(code **)(puVar7 + 8))(uVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00b80488  FUN_00b80488 =====

int FUN_00b80488(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x210));
  uVar2 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
  uVar4 = uVar2 / 1000;
  if (499 < uVar2 % 1000) {
    uVar4 = uVar4 + 1;
  }
  if ((uVar2 & 0x8000000000000000) != 0) {
    uVar4 = -(-uVar2 / 1000) - (ulong)(500 < -uVar2 % 1000);
  }
  uVar2 = *(ulong *)(param_1 + 0x240);
  if ((long)*(ulong *)(param_1 + 0x240) < 0) {
    *(ulong *)(param_1 + 0x240) = uVar4;
    uVar2 = uVar4;
  }
  if (0 < *(long *)(param_2 + 0x18)) {
    *(ulong *)(param_1 + 0x248) = (*(long *)(param_2 + 0x18) - uVar4) + uVar2;
  }
  plVar3 = *(long **)(param_1 + 0x238);
  if (plVar3 == (long *)0x0) {
    uVar4 = FUN_004022fc();
    if ((uVar4 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../media/engine/webrtc_video_engine.cc",0x75ca,
                   "VideoReceiveStreamInterface not connected to a VideoSink.");
    }
  }
  else {
    (**(code **)(*plVar3 + 0x10))(plVar3,param_2);
  }
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x210));
  return iVar1;
}


// ===== 00b80590  FUN_00b80590 =====

void FUN_00b80590(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  long lStack_80;
  undefined1 local_78;
  undefined1 local_70;
  undefined8 local_68 [3];
  long local_50;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  plVar3 = *(long **)(param_1 + 200);
  if (plVar3 == (long *)0x0) {
    uVar4 = FUN_004249b0();
    if ((uVar4 & 1) == 0) {
      if (*(long *)(lVar2 + 0x28) == local_38) {
        FUN_00623bb0(&DAT_001f4e98,"../../media/engine/webrtc_video_engine.cc",0x7c23,
                     "Absent receive stream; ignoring setting encoded frame sink");
        return;
      }
      goto LAB_00b806c0;
    }
  }
  else {
    puVar5 = (undefined *)param_2[3];
    uVar1 = *param_2;
    uStack_90 = param_2[1];
    lStack_80 = param_2[3];
    local_88 = param_2[2];
    if (*(long *)(puVar5 + 8) != 0) {
      param_2[2] = 0;
      param_2[3] = &DAT_001fbc50;
      if (*(long *)(puVar5 + 8) != 0) {
        puVar5 = &DAT_001fbc50;
      }
    }
    local_78 = 0;
    local_70 = 0;
    local_98 = uVar1;
    (**(code **)(*plVar3 + 0x58))(local_68,plVar3,&local_98,1);
    if (*(code **)(local_50 + 8) != (code *)0x0) {
      (**(code **)(local_50 + 8))(local_68[0]);
    }
    if (*(code **)(lStack_80 + 8) != (code *)0x0) {
      (**(code **)(lStack_80 + 8))(local_98);
    }
    if (*(code **)(puVar5 + 8) != (code *)0x0) {
      (**(code **)(puVar5 + 8))(uVar1);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
LAB_00b806c0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00b806c4  FUN_00b806c4 =====

void FUN_00b806c4(long *param_1,ulong param_2,undefined8 *param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = param_2 & 0xffffffff;
  if (((int)param_2 != 0) ||
     (uVar2 = (**(code **)(*param_1 + 0x78))(param_1), (uVar2 >> 0x20 & 1) != 0)) {
    for (plVar4 = (long *)param_1[10]; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      while (*(uint *)(plVar4 + 4) <= (uint)uVar2) {
        if ((uint)uVar2 == *(uint *)(plVar4 + 4)) {
          if ((plVar4 == param_1 + 10) || (lVar3 = plVar4[5], lVar3 == 0)) goto LAB_00b807b0;
          uStack_58 = param_3[1];
          local_60 = *param_3;
          local_48 = param_3[3];
          uStack_50 = param_3[2];
          if (*(long *)(param_3[3] + 8) != 0) {
            param_3[2] = 0;
            param_3[3] = &DAT_001fbc50;
          }
          FUN_00b80590(lVar3,&local_60);
          if (*(code **)(local_48 + 8) == (code *)0x0) goto LAB_00b807b8;
          if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Could not recover jumptable at 0x00b807ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(local_48 + 8))(local_60);
            return;
          }
          goto LAB_00b80828;
        }
        plVar4 = (long *)plVar4[1];
        if (plVar4 == (long *)0x0) goto LAB_00b807b0;
      }
    }
  }
LAB_00b807b0:
  uVar2 = FUN_004249b0();
  if ((uVar2 & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == local_38) {
      FUN_00623bb0(&DAT_001f6220,"../../media/engine/webrtc_video_engine.cc",0x7f23,
                   "Absent receive stream; ignoring setting encoded frame sink for ssrc ",
                   param_2 & 0xffffffff);
      return;
    }
  }
  else {
LAB_00b807b8:
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
  }
LAB_00b80828:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00b8082c  FUN_00b8082c =====

void FUN_00b8082c(long param_1)

{
  FUN_00b806c4(param_1 + -0x40);
  return;
}


// ===== 00b80838  FUN_00b80838 =====

void FUN_00b80838(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 local_a0;
  undefined8 uStack_98;
  code *local_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_68 [3];
  long local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = param_2 & 0xffffffff;
  if (((int)param_2 != 0) ||
     (uVar2 = (**(code **)(*param_1 + 0x78))(param_1), (uVar2 >> 0x20 & 1) != 0)) {
    for (plVar3 = (long *)param_1[10]; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      while (*(uint *)(plVar3 + 4) <= (uint)uVar2) {
        if ((uint)uVar2 == *(uint *)(plVar3 + 4)) {
          if ((plVar3 == param_1 + 10) || (plVar3[5] == 0)) goto LAB_00b8092c;
          plVar3 = *(long **)(plVar3[5] + 200);
          if (plVar3 == (long *)0x0) {
            uVar2 = FUN_004249b0();
            if ((uVar2 & 1) == 0) {
              FUN_00623bb0(&DAT_001f4e98,"../../media/engine/webrtc_video_engine.cc",0x7c83,
                           "Absent receive stream; ignoring clearing encoded frame sink");
            }
          }
          else {
            uStack_78 = 0;
            uStack_80 = 0;
            uStack_98 = 0;
            local_a0 = 0;
            local_90 = FUN_005fa1bc;
            puStack_88 = &DAT_001fbc50;
            (**(code **)(*plVar3 + 0x58))(local_68,plVar3,&local_a0,0);
            if (*(code **)(local_50 + 8) != (code *)0x0) {
              (**(code **)(local_50 + 8))(local_68[0]);
            }
            if (*(code **)(puStack_88 + 8) != (code *)0x0) {
              (**(code **)(puStack_88 + 8))(local_a0);
            }
          }
          goto LAB_00b80934;
        }
        plVar3 = (long *)plVar3[1];
        if (plVar3 == (long *)0x0) goto LAB_00b8092c;
      }
    }
  }
LAB_00b8092c:
  uVar2 = FUN_004249b0();
  if ((uVar2 & 1) == 0) {
    if (*(long *)(lVar1 + 0x28) == local_38) {
      FUN_00623bb0(&DAT_001f6220,"../../media/engine/webrtc_video_engine.cc",0x7f8b,
                   "Absent receive stream; ignoring clearing encoded frame sink for ssrc ",
                   param_2 & 0xffffffff);
      return;
    }
  }
  else {
LAB_00b80934:
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00b809d4  FUN_00b809d4 =====

void FUN_00b809d4(long param_1)

{
  FUN_00b80838(param_1 + -0x40);
  return;
}


// ===== 00b809e0  FUN_00b809e0 =====

void FUN_00b809e0(long *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  
  uVar1 = param_2 & 0xffffffff;
  if (((int)param_2 != 0) ||
     (uVar1 = (**(code **)(*param_1 + 0x78))(param_1), (uVar1 >> 0x20 & 1) != 0)) {
    for (plVar2 = (long *)param_1[10]; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      while (*(uint *)(plVar2 + 4) <= (uint)uVar1) {
        if ((uint)uVar1 == *(uint *)(plVar2 + 4)) {
          if ((plVar2 != param_1 + 10) && (plVar2[5] != 0)) {
            plVar2 = *(long **)(plVar2[5] + 200);
            if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b80a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*plVar2 + 0x60))();
              return;
            }
            uVar1 = FUN_004249b0();
            if ((uVar1 & 1) != 0) {
              return;
            }
            FUN_00623bb0(&DAT_001f4e98,"../../media/engine/webrtc_video_engine.cc",0x7ccb,
                         "Absent receive stream; ignoring key frame generation request.");
            return;
          }
          goto LAB_00b80a74;
        }
        plVar2 = (long *)plVar2[1];
        if (plVar2 == (long *)0x0) goto LAB_00b80a74;
      }
    }
  }
LAB_00b80a74:
  uVar1 = FUN_004249b0();
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_00623bb0(&DAT_001f6220,"../../media/engine/webrtc_video_engine.cc",0x7feb,
               "Absent receive stream; ignoring key frame generation for ssrc ",param_2 & 0xffffffff
              );
  return;
}


// ===== 00b80af0  FUN_00b80af0 =====

void FUN_00b80af0(long param_1)

{
  FUN_00b809e0(param_1 + -0x40);
  return;
}


// ===== 00b80afc  FUN_00b80afc =====

void FUN_00b80afc(long param_1,uint param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long *local_18;
  
  if (param_2 == 0) {
    uVar2 = *param_3;
    *param_3 = 0;
    plVar1 = *(long **)(param_1 + 0x270);
    *(undefined8 *)(param_1 + 0x270) = uVar2;
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b80b74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 8))(plVar1);
      return;
    }
  }
  else {
    for (plVar1 = *(long **)(param_1 + 0x50); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
      while (*(uint *)(plVar1 + 4) <= param_2) {
        if (param_2 == *(uint *)(plVar1 + 4)) {
          if (plVar1 == (long *)(param_1 + 0x50)) {
            return;
          }
          plVar3 = (long *)*param_3;
          lVar4 = plVar1[5];
          *param_3 = 0;
          if (plVar3 != (long *)0x0) {
            (**(code **)*plVar3)(plVar3);
          }
          if (*(long **)(lVar4 + 0x1b0) != (long *)0x0) {
            (**(code **)(**(long **)(lVar4 + 0x1b0) + 8))();
          }
          plVar1 = *(long **)(lVar4 + 200);
          *(long **)(lVar4 + 0x1b0) = plVar3;
          if (plVar1 != (long *)0x0) {
            local_18 = plVar3;
            if (plVar3 != (long *)0x0) {
              (**(code **)*plVar3)(plVar3);
            }
            (**(code **)(*plVar1 + 0x20))(plVar1,&local_18);
            if (local_18 != (long *)0x0) {
              (**(code **)(*local_18 + 8))();
            }
          }
          if (plVar3 == (long *)0x0) {
            return;
          }
          (**(code **)(*plVar3 + 8))(plVar3);
          return;
        }
        plVar1 = (long *)plVar1[1];
        if (plVar1 == (long *)0x0) {
          return;
        }
      }
    }
  }
  return;
}


// ===== 00b80c28  FUN_00b80c28 =====

void FUN_00b80c28(long param_1)

{
  FUN_00b80afc(param_1 + -0x40);
  return;
}


// ===== 00b80c34  FUN_00b80c34 =====

void FUN_00b80c34(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00b80c44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))(param_1,1);
  return;
}


// ===== 00b80c48  FUN_00b80c48 =====

void FUN_00b80c48(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00b80c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))(param_1,1);
  return;
}


// ===== 00b80c5c  FUN_00b80c5c =====

undefined8 FUN_00b80c5c(void)

{
  return 1;
}


// ===== 00b80c68  FUN_00b80c68 =====

long FUN_00b80c68(long param_1)

{
  return param_1 + 0x40;
}


// ===== 00b80c74  FUN_00b80c74 =====

void FUN_00b80c74(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0061ff28();
}


// ===== 00b80c84  thunk_FUN_0088a760 =====

void thunk_FUN_0088a760(void)

{
  FUN_0088a760();
  return;
}


// ===== 00b80c8c  thunk_FUN_0088a748 =====

void thunk_FUN_0088a748(void)

{
  FUN_0088a748();
  return;
}


// ===== 00b80c94  thunk_FUN_0088a754 =====

void thunk_FUN_0088a754(void)

{
  FUN_0088a754();
  return;
}


// ===== 00b80c9c  FUN_00b80c9c =====

void FUN_00b80c9c(long param_1,long param_2)

{
  (**(code **)(param_1 + 0x370))(0,param_1 + 0x360,param_1 + 0x360);
  *(undefined8 *)(param_1 + 0x378) = 0;
  *(code **)(param_1 + 0x370) = FUN_00433984;
  (**(code **)(param_2 + 0x10))(1,param_2,param_1 + 0x360);
  *(undefined8 *)(param_1 + 0x370) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x378) = *(undefined8 *)(param_2 + 0x18);
  *(code **)(param_2 + 0x10) = FUN_00433984;
  *(undefined8 *)(param_2 + 0x18) = 0;
  return;
}


// ===== 00b80d18  FUN_00b80d18 =====

undefined4 FUN_00b80d18(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (*(char *)(param_1 + 0x2a9) != '\0') {
    uVar1 = 2;
  }
  return uVar1;
}


// ===== 00b80d30  FUN_00b80d30 =====

undefined8 FUN_00b80d30(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x1e0) == '\x01') {
    uVar1 = FUN_00892808(param_1 + 0xe8);
    return uVar1;
  }
  return 0;
}


// ===== 00b80d50  FUN_00b80d50 =====

undefined8 FUN_00b80d50(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x1e0) == '\x01') {
    uVar1 = FUN_00892ac4(param_1 + 0xe8);
    return uVar1;
  }
  return 0;
}


// ===== 00b80d70  FUN_00b80d70 =====

undefined8 FUN_00b80d70(long param_1)

{
  if (*(char *)(param_1 + 0x1e0) == '\x01') {
    return *(undefined8 *)(param_1 + 0x1d4);
  }
  return 0;
}


// ===== 00b80d94  FUN_00b80d94 =====

void FUN_00b80d94(void)

{
  return;
}


// ===== 00b80d9c  FUN_00b80d9c =====

void FUN_00b80d9c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0061ff28();
}


// ===== 00b80dac  FUN_00b80dac =====

undefined8 FUN_00b80dac(void)

{
  return 1;
}


// ===== 00b80db8  FUN_00b80db8 =====

void FUN_00b80db8(long param_1)

{
  FUN_0088a760(param_1 + -0x40);
  return;
}


// ===== 00b80dc4  FUN_00b80dc4 =====

void FUN_00b80dc4(long param_1)

{
  FUN_0088a748(param_1 + -0x40);
  return;
}


// ===== 00b80dd0  FUN_00b80dd0 =====

void FUN_00b80dd0(long param_1)

{
  FUN_0088a754(param_1 + -0x40);
  return;
}


// ===== 00b80ddc  FUN_00b80ddc =====

undefined8 FUN_00b80ddc(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x1a0) == '\x01') {
    uVar1 = FUN_00892ac4(param_1 + 0xa8);
    return uVar1;
  }
  return 0;
}


// ===== 00b80dfc  FUN_00b80dfc =====

void FUN_00b80dfc(long param_1,long param_2)

{
  (**(code **)(param_1 + 0x330))(0,param_1 + 800,param_1 + 800);
  *(undefined8 *)(param_1 + 0x338) = 0;
  *(code **)(param_1 + 0x330) = FUN_00433984;
  (**(code **)(param_2 + 0x10))(1,param_2,param_1 + 800);
  *(undefined8 *)(param_1 + 0x330) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x338) = *(undefined8 *)(param_2 + 0x18);
  *(code **)(param_2 + 0x10) = FUN_00433984;
  *(undefined8 *)(param_2 + 0x18) = 0;
  return;
}


// ===== 00b80e78  FUN_00b80e78 =====

undefined4 FUN_00b80e78(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (*(char *)(param_1 + 0x269) != '\0') {
    uVar1 = 2;
  }
  return uVar1;
}


// ===== 00b80e90  FUN_00b80e90 =====

undefined8 FUN_00b80e90(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x1a0) == '\x01') {
    uVar1 = FUN_00892808(param_1 + 0xa8);
    return uVar1;
  }
  return 0;
}


// ===== 00b80eb0  FUN_00b80eb0 =====

ulong FUN_00b80eb0(long param_1)

{
  if (*(char *)(param_1 + 0x1a0) == '\x01') {
    return *(ulong *)(param_1 + 0x194) & 0xffffffffff;
  }
  return 0;
}


// ===== 00b80ed8  FUN_00b80ed8 =====

undefined8 FUN_00b80ed8(void)

{
  return 1;
}


// ===== 00b80ee4  FUN_00b80ee4 =====

long FUN_00b80ee4(long param_1)

{
  return param_1 + 0x40;
}


// ===== 00b80ef0  FUN_00b80ef0 =====

void FUN_00b80ef0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0061ff28();
}


// ===== 00b80f00  FUN_00b80f00 =====

void FUN_00b80f00(undefined8 param_1,undefined8 param_2)

{
  FUN_00b7ce44(param_1,param_2,1);
  return;
}


// ===== 00b80f0c  FUN_00b80f0c =====

void FUN_00b80f0c(void)

{
  return;
}


// ===== 00b80f14  FUN_00b80f14 =====

void FUN_00b80f14(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0061ff28();
}


// ===== 00b80f24  FUN_00b80f24 =====

undefined8 FUN_00b80f24(void)

{
  return 1;
}


// ===== 00b80f30  FUN_00b80f30 =====

void FUN_00b80f30(long param_1,undefined8 param_2)

{
  FUN_00b7ce44(param_1 + -0x40,param_2,1);
  return;
}


// ===== 00b80f40  FUN_00b80f40 =====

long FUN_00b80f40(long *param_1,char *param_2,undefined4 *param_3,undefined1 *param_4,
                 undefined4 *param_5)

{
  size_t sVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  void *local_70;
  long local_68;
  long local_60;
  void *local_58;
  
  lVar6 = param_1[1] - *param_1;
  uVar2 = (lVar6 >> 3) * -0x3333333333333333 + 1;
  if (0x666666666666666 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00b615e4();
  }
  local_70 = (void *)0x0;
  lVar3 = param_1[2] - *param_1 >> 3;
  uVar4 = lVar3 * -0x6666666666666666;
  if (uVar4 < uVar2 || uVar4 - uVar2 == 0) {
    uVar4 = uVar2;
  }
  if (0x333333333333332 < (ulong)(lVar3 * -0x3333333333333333)) {
    uVar4 = 0x666666666666666;
  }
  if (uVar4 != 0) {
    if (0x666666666666666 < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    local_70 = operator_new(uVar4 * 0x28);
  }
  lVar6 = (long)local_70 + lVar6;
  local_58 = (void *)((long)local_70 + uVar4 * 0x28);
  local_68 = lVar6;
  if (lVar6 != 0) {
    if (param_2 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/string_view:278: libc++ Hardening assertion __s != nullptr failed: null pointer passed to non-null argument of char_traits<...>::length\n"
                );
    }
    sVar1 = strlen(param_2);
    FUN_00668c48(lVar6,param_2,sVar1,*param_3,*param_4,*param_5);
    local_60 = lVar6 + 0x28;
    FUN_00b614d4(param_1,&local_70);
    lVar3 = local_68;
    lVar5 = param_1[1];
    lVar6 = local_60;
    while( true ) {
      if (lVar3 == lVar6) {
        if (local_70 != (void *)0x0) {
          local_60 = lVar6;
          operator_delete(local_70);
        }
        return lVar5;
      }
      lVar6 = lVar6 + -0x28;
      if (lVar6 == 0) break;
      FUN_00668d5c(lVar6);
    }
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00b810f0  FUN_00b810f0 =====

long FUN_00b810f0(long *param_1,char *param_2,undefined4 *param_3,undefined4 *param_4)

{
  size_t sVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  void *local_60;
  long local_58;
  long local_50;
  void *local_48;
  
  lVar6 = param_1[1] - *param_1;
  uVar2 = (lVar6 >> 3) * -0x3333333333333333 + 1;
  if (0x666666666666666 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00b615e4();
  }
  local_60 = (void *)0x0;
  lVar3 = param_1[2] - *param_1 >> 3;
  uVar4 = lVar3 * -0x6666666666666666;
  if (uVar4 < uVar2 || uVar4 - uVar2 == 0) {
    uVar4 = uVar2;
  }
  if (0x333333333333332 < (ulong)(lVar3 * -0x3333333333333333)) {
    uVar4 = 0x666666666666666;
  }
  if (uVar4 != 0) {
    if (0x666666666666666 < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    local_60 = operator_new(uVar4 * 0x28);
  }
  lVar6 = (long)local_60 + lVar6;
  local_48 = (void *)((long)local_60 + uVar4 * 0x28);
  local_58 = lVar6;
  if (lVar6 != 0) {
    if (param_2 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/string_view:278: libc++ Hardening assertion __s != nullptr failed: null pointer passed to non-null argument of char_traits<...>::length\n"
                );
    }
    sVar1 = strlen(param_2);
    FUN_00668b3c(lVar6,param_2,sVar1,*param_3,*param_4);
    local_50 = lVar6 + 0x28;
    FUN_00b614d4(param_1,&local_60);
    lVar3 = local_58;
    lVar5 = param_1[1];
    lVar6 = local_50;
    while( true ) {
      if (lVar3 == lVar6) {
        if (local_60 != (void *)0x0) {
          local_50 = lVar6;
          operator_delete(local_60);
        }
        return lVar5;
      }
      lVar6 = lVar6 + -0x28;
      if (lVar6 == 0) break;
      FUN_00668d5c(lVar6);
    }
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00b81290  FUN_00b81290 =====

long FUN_00b81290(long *param_1,char *param_2,undefined4 *param_3,undefined4 *param_4)

{
  size_t sVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  void *local_60;
  long local_58;
  long local_50;
  void *local_48;
  
  lVar6 = param_1[1] - *param_1;
  uVar2 = (lVar6 >> 3) * -0x3333333333333333 + 1;
  if (0x666666666666666 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00b615e4();
  }
  local_60 = (void *)0x0;
  lVar3 = param_1[2] - *param_1 >> 3;
  uVar4 = lVar3 * -0x6666666666666666;
  if (uVar4 < uVar2 || uVar4 - uVar2 == 0) {
    uVar4 = uVar2;
  }
  if (0x333333333333332 < (ulong)(lVar3 * -0x3333333333333333)) {
    uVar4 = 0x666666666666666;
  }
  if (uVar4 != 0) {
    if (0x666666666666666 < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    local_60 = operator_new(uVar4 * 0x28);
  }
  lVar6 = (long)local_60 + lVar6;
  local_48 = (void *)((long)local_60 + uVar4 * 0x28);
  local_58 = lVar6;
  if (lVar6 != 0) {
    if (param_2 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/string_view:278: libc++ Hardening assertion __s != nullptr failed: null pointer passed to non-null argument of char_traits<...>::length\n"
                );
    }
    sVar1 = strlen(param_2);
    FUN_00668b3c(lVar6,param_2,sVar1,*param_3,*param_4);
    local_50 = lVar6 + 0x28;
    FUN_00b614d4(param_1,&local_60);
    lVar3 = local_58;
    lVar5 = param_1[1];
    lVar6 = local_50;
    while( true ) {
      if (lVar3 == lVar6) {
        if (local_60 != (void *)0x0) {
          local_50 = lVar6;
          operator_delete(local_60);
        }
        return lVar5;
      }
      lVar6 = lVar6 + -0x28;
      if (lVar6 == 0) break;
      FUN_00668d5c(lVar6);
    }
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00b81430  FUN_00b81430 =====

long FUN_00b81430(long *param_1,char *param_2,undefined4 *param_3,undefined4 *param_4)

{
  size_t sVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  void *local_60;
  long local_58;
  long local_50;
  void *local_48;
  
  lVar6 = param_1[1] - *param_1;
  uVar2 = (lVar6 >> 3) * -0x3333333333333333 + 1;
  if (0x666666666666666 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00b615e4();
  }
  local_60 = (void *)0x0;
  lVar3 = param_1[2] - *param_1 >> 3;
  uVar4 = lVar3 * -0x6666666666666666;
  if (uVar4 < uVar2 || uVar4 - uVar2 == 0) {
    uVar4 = uVar2;
  }
  if (0x333333333333332 < (ulong)(lVar3 * -0x3333333333333333)) {
    uVar4 = 0x666666666666666;
  }
  if (uVar4 != 0) {
    if (0x666666666666666 < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    local_60 = operator_new(uVar4 * 0x28);
  }
  lVar6 = (long)local_60 + lVar6;
  local_48 = (void *)((long)local_60 + uVar4 * 0x28);
  local_58 = lVar6;
  if (lVar6 != 0) {
    if (param_2 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/string_view:278: libc++ Hardening assertion __s != nullptr failed: null pointer passed to non-null argument of char_traits<...>::length\n"
                );
    }
    sVar1 = strlen(param_2);
    FUN_00668b3c(lVar6,param_2,sVar1,*param_3,*param_4);
    local_50 = lVar6 + 0x28;
    FUN_00b614d4(param_1,&local_60);
    lVar3 = local_58;
    lVar5 = param_1[1];
    lVar6 = local_50;
    while( true ) {
      if (lVar3 == lVar6) {
        if (local_60 != (void *)0x0) {
          local_50 = lVar6;
          operator_delete(local_60);
        }
        return lVar5;
      }
      lVar6 = lVar6 + -0x28;
      if (lVar6 == 0) break;
      FUN_00668d5c(lVar6);
    }
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00b815d0  FUN_00b815d0 =====

long FUN_00b815d0(long *param_1,char *param_2,undefined4 *param_3,undefined4 *param_4)

{
  size_t sVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  void *local_60;
  long local_58;
  long local_50;
  void *local_48;
  
  lVar6 = param_1[1] - *param_1;
  uVar2 = (lVar6 >> 3) * -0x3333333333333333 + 1;
  if (0x666666666666666 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00b615e4();
  }
  local_60 = (void *)0x0;
  lVar3 = param_1[2] - *param_1 >> 3;
  uVar4 = lVar3 * -0x6666666666666666;
  if (uVar4 < uVar2 || uVar4 - uVar2 == 0) {
    uVar4 = uVar2;
  }
  if (0x333333333333332 < (ulong)(lVar3 * -0x3333333333333333)) {
    uVar4 = 0x666666666666666;
  }
  if (uVar4 != 0) {
    if (0x666666666666666 < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    local_60 = operator_new(uVar4 * 0x28);
  }
  lVar6 = (long)local_60 + lVar6;
  local_48 = (void *)((long)local_60 + uVar4 * 0x28);
  local_58 = lVar6;
  if (lVar6 != 0) {
    if (param_2 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/string_view:278: libc++ Hardening assertion __s != nullptr failed: null pointer passed to non-null argument of char_traits<...>::length\n"
                );
    }
    sVar1 = strlen(param_2);
    FUN_00668b3c(lVar6,param_2,sVar1,*param_3,*param_4);
    local_50 = lVar6 + 0x28;
    FUN_00b614d4(param_1,&local_60);
    lVar3 = local_58;
    lVar5 = param_1[1];
    lVar6 = local_50;
    while( true ) {
      if (lVar3 == lVar6) {
        if (local_60 != (void *)0x0) {
          local_50 = lVar6;
          operator_delete(local_60);
        }
        return lVar5;
      }
      lVar6 = lVar6 + -0x28;
      if (lVar6 == 0) break;
      FUN_00668d5c(lVar6);
    }
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00b81770  FUN_00b81770 =====

undefined1  [16] FUN_00b81770(undefined8 *param_1,uint *param_2,undefined4 *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  
  plVar5 = (long *)*param_1;
  plVar3 = plVar5 + 1;
  plVar6 = plVar3;
  if ((long *)*plVar3 != (long *)0x0) {
    plVar1 = (long *)*plVar3;
    do {
      while (plVar2 = plVar1, plVar3 = plVar2, *param_2 < *(uint *)(plVar2 + 4)) {
        plVar1 = (long *)*plVar2;
        plVar6 = plVar2;
        if ((long *)*plVar2 == (long *)0x0) goto LAB_00b817d8;
      }
      if (*param_2 == *(uint *)(plVar2 + 4)) {
        uVar4 = 0;
        goto LAB_00b81860;
      }
      plVar1 = (long *)plVar2[1];
    } while ((long *)plVar2[1] != (long *)0x0);
    plVar6 = plVar2 + 1;
  }
LAB_00b817d8:
  plVar2 = (long *)operator_new(0x1f8);
  if ((plVar2 == (long *)0x0) || (*plVar2 = 0, plVar2 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  *(undefined4 *)(plVar2 + 4) = *param_3;
  memcpy(plVar2 + 5,param_3 + 2,0x1a1);
  FUN_0061ab04(plVar2 + 0x3a,param_3 + 0x6c);
  *plVar2 = 0;
  plVar2[1] = 0;
  plVar2[2] = (long)plVar3;
  *plVar6 = (long)plVar2;
  plVar3 = plVar2;
  if (*(long *)*plVar5 != 0) {
    *plVar5 = *(long *)*plVar5;
    plVar3 = (long *)*plVar6;
  }
  FUN_005d5b94(plVar5[1],plVar3);
  uVar4 = 1;
  plVar5[2] = plVar5[2] + 1;
LAB_00b81860:
  auVar7._8_8_ = uVar4;
  auVar7._0_8_ = plVar2;
  return auVar7;
}


// ===== 00b81890  FUN_00b81890 =====

long FUN_00b81890(long *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *local_50;
  long local_48;
  long local_40;
  void *local_38;
  
  lVar5 = param_1[1] - *param_1;
  uVar1 = (lVar5 >> 3) * -0x1084210842108421 + 1;
  if (0x108421084210842 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00b81b14();
  }
  local_50 = (void *)0x0;
  lVar2 = param_1[2] - *param_1 >> 3;
  uVar3 = lVar2 * -0x2108421084210842;
  if (uVar3 < uVar1 || uVar3 - uVar1 == 0) {
    uVar3 = uVar1;
  }
  if (0x84210842108420 < (ulong)(lVar2 * -0x1084210842108421)) {
    uVar3 = 0x108421084210842;
  }
  if (uVar3 != 0) {
    if (0x108421084210842 < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    local_50 = operator_new(uVar3 * 0xf8);
  }
  lVar5 = (long)local_50 + lVar5;
  local_38 = (void *)((long)local_50 + uVar3 * 0xf8);
  local_48 = lVar5;
  if (lVar5 != 0) {
    FUN_00890830(lVar5,param_2);
    uVar6 = *(undefined8 *)(param_2 + 0xe1);
    uVar8 = *(undefined8 *)(param_2 + 0xe0);
    uVar7 = *(undefined8 *)(param_2 + 0xd8);
    local_40 = lVar5 + 0xf8;
    *(undefined8 *)(lVar5 + 0xe9) = *(undefined8 *)(param_2 + 0xe9);
    *(undefined8 *)(lVar5 + 0xe1) = uVar6;
    *(undefined8 *)(lVar5 + 0xe0) = uVar8;
    *(undefined8 *)(lVar5 + 0xd8) = uVar7;
    FUN_00b81a1c(param_1,&local_50);
    lVar2 = local_48;
    lVar4 = param_1[1];
    lVar5 = local_40;
    while( true ) {
      if (lVar2 == lVar5) {
        if (local_50 != (void *)0x0) {
          local_40 = lVar5;
          operator_delete(local_50);
        }
        return lVar4;
      }
      lVar5 = lVar5 + -0xf8;
      if (lVar5 == 0) break;
      FUN_00890cb8(lVar5);
    }
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00b81a1c  FUN_00b81a1c =====

void FUN_00b81a1c(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar2 = *param_1;
  lVar4 = param_1[1];
  lVar3 = param_2[1] + (lVar2 - lVar4);
  lVar7 = lVar2;
  lVar5 = lVar3;
  if (lVar4 != lVar2) {
    do {
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      FUN_00890aa0(lVar5,lVar7);
      uVar6 = *(undefined8 *)(lVar7 + 0xe1);
      uVar9 = *(undefined8 *)(lVar7 + 0xe0);
      uVar8 = *(undefined8 *)(lVar7 + 0xd8);
      lVar1 = lVar7 + 0xf8;
      *(undefined8 *)(lVar5 + 0xe9) = *(undefined8 *)(lVar7 + 0xe9);
      *(undefined8 *)(lVar5 + 0xe1) = uVar6;
      *(undefined8 *)(lVar5 + 0xe0) = uVar9;
      *(undefined8 *)(lVar5 + 0xd8) = uVar8;
      lVar7 = lVar1;
      lVar5 = lVar5 + 0xf8;
    } while (lVar1 != lVar4);
    do {
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      FUN_00890cb8(lVar2);
      lVar2 = lVar2 + 0xf8;
    } while (lVar2 != lVar4);
  }
  param_2[1] = lVar3;
  lVar2 = *param_1;
  lVar4 = param_1[2];
  param_1[1] = lVar2;
  lVar7 = param_2[1];
  lVar3 = param_2[3];
  param_1[1] = param_2[2];
  *param_1 = lVar7;
  param_1[2] = lVar3;
  param_2[2] = lVar2;
  param_2[3] = lVar4;
  *param_2 = lVar2;
  param_2[1] = lVar2;
  return;
}


// ===== 00b81b14  FUN_00b81b14 =====

void FUN_00b81b14(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00b81b2c  FUN_00b81b2c =====

undefined1  [16] FUN_00b81b2c(undefined8 *param_1,int *param_2,undefined4 *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  
  plVar5 = (long *)*param_1;
  plVar3 = plVar5 + 1;
  plVar6 = plVar3;
  if ((long *)*plVar3 != (long *)0x0) {
    plVar1 = (long *)*plVar3;
    do {
      while (plVar2 = plVar1, plVar3 = plVar2, *param_2 < (int)plVar2[4]) {
        plVar1 = (long *)*plVar2;
        plVar6 = plVar2;
        if ((long *)*plVar2 == (long *)0x0) goto LAB_00b81b94;
      }
      if (*param_2 == (int)plVar2[4]) {
        uVar4 = 0;
        goto LAB_00b81c0c;
      }
      plVar1 = (long *)plVar2[1];
    } while ((long *)plVar2[1] != (long *)0x0);
    plVar6 = plVar2 + 1;
  }
LAB_00b81b94:
  plVar2 = (long *)operator_new(0x100);
  if ((plVar2 == (long *)0x0) || (*plVar2 = 0, plVar2 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  *(undefined4 *)(plVar2 + 4) = *param_3;
  FUN_00890aa0(plVar2 + 5,param_3 + 2);
  *plVar2 = 0;
  plVar2[1] = 0;
  plVar2[2] = (long)plVar3;
  *plVar6 = (long)plVar2;
  plVar3 = plVar2;
  if (*(long *)*plVar5 != 0) {
    *plVar5 = *(long *)*plVar5;
    plVar3 = (long *)*plVar6;
  }
  FUN_005d5b94(plVar5[1],plVar3);
  uVar4 = 1;
  plVar5[2] = plVar5[2] + 1;
LAB_00b81c0c:
  auVar7._8_8_ = uVar4;
  auVar7._0_8_ = plVar2;
  return auVar7;
}


// ===== 00b81c3c  FUN_00b81c3c =====

long FUN_00b81c3c(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  void *local_50;
  long local_48;
  long local_40;
  void *local_38;
  
  lVar5 = param_1[1] - *param_1;
  uVar1 = (lVar5 >> 3) * -0x1084210842108421 + 1;
  if (0x108421084210842 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00b81b14();
  }
  local_50 = (void *)0x0;
  lVar2 = param_1[2] - *param_1 >> 3;
  uVar3 = lVar2 * -0x2108421084210842;
  if (uVar3 < uVar1 || uVar3 - uVar1 == 0) {
    uVar3 = uVar1;
  }
  if (0x84210842108420 < (ulong)(lVar2 * -0x1084210842108421)) {
    uVar3 = 0x108421084210842;
  }
  if (uVar3 != 0) {
    if (0x108421084210842 < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    local_50 = operator_new(uVar3 * 0xf8);
  }
  lVar5 = (long)local_50 + lVar5;
  local_38 = (void *)((long)local_50 + uVar3 * 0xf8);
  local_48 = lVar5;
  if (lVar5 != 0) {
    FUN_00890830(lVar5,param_2);
    local_40 = lVar5 + 0xf8;
    *(undefined1 *)(lVar5 + 0xec) = 0;
    *(undefined1 *)(lVar5 + 0xf0) = 0;
    *(undefined4 *)(lVar5 + 0xe8) = 0xffffffff;
    *(undefined8 *)(lVar5 + 0xe0) = 0xffffffffffffffff;
    *(undefined8 *)(lVar5 + 0xd8) = 0xffffffffffffffff;
    FUN_00b81a1c(param_1,&local_50);
    lVar2 = local_48;
    lVar4 = param_1[1];
    lVar5 = local_40;
    while( true ) {
      if (lVar2 == lVar5) {
        if (local_50 != (void *)0x0) {
          local_40 = lVar5;
          operator_delete(local_50);
        }
        return lVar4;
      }
      lVar5 = lVar5 + -0xf8;
      if (lVar5 == 0) break;
      FUN_00890cb8(lVar5);
    }
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00b81dcc  FUN_00b81dcc =====

void FUN_00b81dcc(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_00b81dcc(param_1,*param_2);
      if (param_2 == (undefined8 *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      puVar1 = (undefined8 *)param_2[1];
      FUN_00890cb8(param_2 + 5);
      operator_delete(param_2);
      param_2 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
  }
  return;
}


// ===== 00b81e48  FUN_00b81e48 =====

void FUN_00b81e48(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_00b81e48(param_1,*param_2);
      if (param_2 == (undefined8 *)0xffffffffffffffe4) {
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


// ===== 00b81ebc  FUN_00b81ebc =====

long FUN_00b81ebc(long param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  cVar1 = *(char *)(param_1 + 0xf8);
  if (cVar1 == *(char *)(param_2 + 0xf8)) {
    if (cVar1 != '\0') {
      FUN_00890db8(param_1,param_2);
      uVar2 = *(undefined8 *)(param_2 + 0xd8);
      uVar4 = *(undefined8 *)(param_2 + 0xe9);
      uVar3 = *(undefined8 *)(param_2 + 0xe1);
      *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_2 + 0xe0);
      *(undefined8 *)(param_1 + 0xd8) = uVar2;
      *(undefined8 *)(param_1 + 0xe9) = uVar4;
      *(undefined8 *)(param_1 + 0xe1) = uVar3;
    }
  }
  else if (cVar1 == '\0') {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    FUN_00890830(param_1,param_2);
    uVar3 = *(undefined8 *)(param_2 + 0xe9);
    uVar2 = *(undefined8 *)(param_2 + 0xe1);
    uVar5 = *(undefined8 *)(param_2 + 0xe0);
    uVar4 = *(undefined8 *)(param_2 + 0xd8);
    *(undefined1 *)(param_1 + 0xf8) = 1;
    *(undefined8 *)(param_1 + 0xe9) = uVar3;
    *(undefined8 *)(param_1 + 0xe1) = uVar2;
    *(undefined8 *)(param_1 + 0xe0) = uVar5;
    *(undefined8 *)(param_1 + 0xd8) = uVar4;
  }
  else {
    FUN_00890cb8(param_1);
    *(undefined1 *)(param_1 + 0xf8) = 0;
  }
  return param_1;
}


// ===== 00b81f6c  FUN_00b81f6c =====

void FUN_00b81f6c(undefined8 *param_1,long param_2,long param_3,ulong param_4)

{
  undefined8 *puVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  void *pvVar5;
  void *pvVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar3 = param_1[2];
  pvVar5 = (void *)*param_1;
  if (param_4 <= (ulong)((lVar3 - (long)pvVar5 >> 3) * -0x1084210842108421)) {
    pvVar6 = (void *)param_1[1];
    if ((ulong)(((long)pvVar6 - (long)pvVar5 >> 3) * -0x1084210842108421) < param_4) {
      lVar3 = param_2;
      pvVar2 = pvVar6;
      if (pvVar6 != pvVar5) {
        lVar3 = param_2 + ((long)pvVar6 - (long)pvVar5);
        do {
          FUN_00890db8(pvVar5,param_2);
          puVar1 = (undefined8 *)(param_2 + 0xe0);
          uVar7 = *(undefined8 *)(param_2 + 0xd8);
          uVar9 = *(undefined8 *)(param_2 + 0xe9);
          uVar8 = *(undefined8 *)(param_2 + 0xe1);
          param_2 = param_2 + 0xf8;
          *(undefined8 *)((long)pvVar5 + 0xe0) = *puVar1;
          *(undefined8 *)((long)pvVar5 + 0xd8) = uVar7;
          *(undefined8 *)((long)pvVar5 + 0xe9) = uVar9;
          *(undefined8 *)((long)pvVar5 + 0xe1) = uVar8;
          pvVar5 = (void *)((long)pvVar5 + 0xf8);
        } while (param_2 != lVar3);
        pvVar6 = (void *)param_1[1];
        pvVar2 = pvVar6;
      }
      while( true ) {
        if (lVar3 == param_3) {
          param_1[1] = pvVar6;
          return;
        }
        if (pvVar2 == (void *)0x0) break;
        FUN_00890830(pvVar2,lVar3);
        uVar7 = *(undefined8 *)(lVar3 + 0xe1);
        uVar9 = *(undefined8 *)(lVar3 + 0xe0);
        uVar8 = *(undefined8 *)(lVar3 + 0xd8);
        pvVar6 = (void *)((long)pvVar6 + 0xf8);
        *(undefined8 *)((long)pvVar2 + 0xe9) = *(undefined8 *)(lVar3 + 0xe9);
        *(undefined8 *)((long)pvVar2 + 0xe1) = uVar7;
        *(undefined8 *)((long)pvVar2 + 0xe0) = uVar9;
        *(undefined8 *)((long)pvVar2 + 0xd8) = uVar8;
        lVar3 = lVar3 + 0xf8;
        pvVar2 = (void *)((long)pvVar2 + 0xf8);
      }
LAB_00b821e8:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    if (param_2 != param_3) {
      do {
        FUN_00890db8(pvVar5,param_2);
        puVar1 = (undefined8 *)(param_2 + 0xe0);
        uVar7 = *(undefined8 *)(param_2 + 0xd8);
        uVar9 = *(undefined8 *)(param_2 + 0xe9);
        uVar8 = *(undefined8 *)(param_2 + 0xe1);
        param_2 = param_2 + 0xf8;
        *(undefined8 *)((long)pvVar5 + 0xe0) = *puVar1;
        *(undefined8 *)((long)pvVar5 + 0xd8) = uVar7;
        *(undefined8 *)((long)pvVar5 + 0xe9) = uVar9;
        *(undefined8 *)((long)pvVar5 + 0xe1) = uVar8;
        pvVar5 = (void *)((long)pvVar5 + 0xf8);
      } while (param_2 != param_3);
      pvVar6 = (void *)param_1[1];
    }
    while (pvVar5 != pvVar6) {
      pvVar6 = (void *)((long)pvVar6 + -0xf8);
      if (pvVar6 == (void *)0x0) goto LAB_00b821fc;
      FUN_00890cb8(pvVar6);
    }
LAB_00b821c8:
    param_1[1] = pvVar5;
    return;
  }
  if (pvVar5 != (void *)0x0) {
    pvVar6 = (void *)param_1[1];
    pvVar2 = pvVar5;
    if (pvVar5 != pvVar6) {
      do {
        pvVar6 = (void *)((long)pvVar6 + -0xf8);
        if (pvVar6 == (void *)0x0) {
LAB_00b821fc:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        FUN_00890cb8(pvVar6);
      } while (pvVar6 != pvVar5);
      pvVar2 = (void *)*param_1;
    }
    param_1[1] = pvVar5;
    operator_delete(pvVar2);
    lVar3 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  if (param_4 < 0x108421084210843) {
    uVar4 = (lVar3 >> 3) * -0x2108421084210842;
    if (uVar4 < param_4 || uVar4 - param_4 == 0) {
      uVar4 = param_4;
    }
    if (0x84210842108420 < (ulong)((lVar3 >> 3) * -0x1084210842108421)) {
      uVar4 = 0x108421084210842;
    }
    if (uVar4 < 0x108421084210843) {
      pvVar5 = operator_new(uVar4 * 0xf8);
      *param_1 = pvVar5;
      param_1[1] = pvVar5;
      param_1[2] = (void *)((long)pvVar5 + uVar4 * 0xf8);
      if (param_2 != param_3) {
        do {
          if (pvVar5 == (void *)0x0) goto LAB_00b821e8;
          FUN_00890830(pvVar5,param_2);
          puVar1 = (undefined8 *)(param_2 + 0xe0);
          uVar7 = *(undefined8 *)(param_2 + 0xd8);
          uVar9 = *(undefined8 *)(param_2 + 0xe9);
          uVar8 = *(undefined8 *)(param_2 + 0xe1);
          param_2 = param_2 + 0xf8;
          *(undefined8 *)((long)pvVar5 + 0xe0) = *puVar1;
          *(undefined8 *)((long)pvVar5 + 0xd8) = uVar7;
          *(undefined8 *)((long)pvVar5 + 0xe9) = uVar9;
          *(undefined8 *)((long)pvVar5 + 0xe1) = uVar8;
          pvVar5 = (void *)((long)pvVar5 + 0xf8);
        } while (param_2 != param_3);
      }
      goto LAB_00b821c8;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00b81b14();
}


// ===== 00b82214  FUN_00b82214 =====

void FUN_00b82214(long *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined8 *puVar3;
  void *pvVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  void *pvVar11;
  void *pvVar12;
  
  lVar7 = param_1[2];
  if (param_1[3] == lVar7) {
    pvVar11 = (void *)*param_1;
    lVar8 = param_1[1];
    if (lVar8 - (long)pvVar11 == 0) {
      uVar6 = (param_1[3] - (long)pvVar11 >> 4) * -0x2492492492492492;
      if (lVar7 == lVar8) {
        uVar6 = 1;
      }
      if (0x249249249249249 < uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      pvVar4 = operator_new(uVar6 * 0x70);
      lVar10 = lVar7 - lVar8;
      pvVar12 = (void *)((long)pvVar4 + (uVar6 >> 2) * 0x70);
      pvVar2 = (void *)((long)pvVar4 + uVar6 * 0x70);
      if (lVar10 == 0) {
        *param_1 = (long)pvVar4;
        param_1[1] = (long)pvVar12;
        param_1[2] = (long)pvVar12;
        param_1[3] = (long)pvVar2;
      }
      else {
        lVar5 = (long)pvVar12 + lVar10;
        pvVar11 = pvVar12;
        do {
          if (pvVar11 == (void *)0x0) goto LAB_00b823f8;
          FUN_006692f8(pvVar11,lVar8);
          lVar10 = lVar10 + -0x70;
          pvVar11 = (void *)((long)pvVar11 + 0x70);
          lVar8 = lVar8 + 0x70;
        } while (lVar10 != 0);
        pvVar11 = (void *)*param_1;
        puVar3 = (undefined8 *)param_1[1];
        *param_1 = (long)pvVar4;
        param_1[1] = (long)pvVar12;
        puVar9 = (undefined8 *)param_1[2];
        param_1[2] = lVar5;
        param_1[3] = (long)pvVar2;
        while (puVar3 != puVar9) {
          puVar9 = puVar9 + -0xe;
          if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
          (**(code **)*puVar9)(puVar9);
        }
      }
      if (pvVar11 != (void *)0x0) {
        operator_delete(pvVar11);
      }
    }
    else {
      lVar5 = ((lVar8 - (long)pvVar11 >> 4) * 0x6db6db6db6db6db7 + 1) / 2;
      lVar10 = lVar8 + lVar5 * -0x70;
      if (lVar8 != lVar7) {
        do {
          FUN_00b61d90(lVar10,lVar8);
          puVar1 = (undefined4 *)(lVar8 + 0x68);
          lVar8 = lVar8 + 0x70;
          *(undefined4 *)(lVar10 + 0x68) = *puVar1;
          lVar10 = lVar10 + 0x70;
        } while (lVar8 != lVar7);
        lVar8 = param_1[1];
      }
      lVar7 = lVar10;
      param_1[1] = lVar8 + lVar5 * -0x70;
      param_1[2] = lVar7;
    }
  }
  if (lVar7 != 0) {
    FUN_006692f8(lVar7,param_2);
    param_1[2] = lVar7 + 0x70;
    return;
  }
LAB_00b823f8:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00b82424  FUN_00b82424 =====

undefined8 FUN_00b82424(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  
  puVar8 = (undefined8 *)param_1[1];
  uVar1 = param_2[1];
  lVar7 = param_2[2];
  puVar3 = param_3;
  if (param_3 != puVar8) {
    do {
      if (lVar7 == 0) goto LAB_00b82570;
      FUN_006692f8(lVar7,puVar3);
      puVar3 = puVar3 + 0xe;
      lVar7 = lVar7 + 0x70;
      puVar2 = param_3;
    } while (puVar3 != puVar8);
    do {
      if (puVar2 == (undefined8 *)0x0) goto LAB_00b82584;
      puVar3 = puVar2 + 0xe;
      (**(code **)*puVar2)();
      puVar2 = puVar3;
    } while (puVar3 != puVar8);
    lVar7 = param_2[2];
    puVar3 = (undefined8 *)param_1[1];
  }
  param_2[2] = (long)puVar3 + (lVar7 - (long)param_3);
  param_1[1] = param_3;
  puVar8 = (undefined8 *)*param_1;
  lVar7 = param_2[1] + ((long)puVar8 - (long)param_3);
  puVar3 = puVar8;
  lVar9 = lVar7;
  if ((long)puVar8 - (long)param_3 != 0) {
    do {
      if (lVar9 == 0) {
LAB_00b82570:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      FUN_006692f8(lVar9,puVar3);
      puVar3 = puVar3 + 0xe;
      lVar9 = lVar9 + 0x70;
    } while (puVar3 != param_3);
    do {
      if (puVar8 == (undefined8 *)0x0) {
LAB_00b82584:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      puVar3 = puVar8 + 0xe;
      (**(code **)*puVar8)(puVar8);
      puVar8 = puVar3;
    } while (puVar3 != param_3);
  }
  param_2[1] = lVar7;
  uVar4 = *param_1;
  uVar6 = param_1[2];
  param_1[1] = uVar4;
  uVar10 = param_2[1];
  uVar5 = param_2[3];
  param_1[1] = param_2[2];
  *param_1 = uVar10;
  param_1[2] = uVar5;
  param_2[1] = uVar4;
  param_2[2] = uVar4;
  param_2[3] = uVar6;
  *param_2 = uVar4;
  return uVar1;
}


// ===== 00b82598  FUN_00b82598 =====

void FUN_00b82598(undefined8 *param_1,long param_2,undefined1 *param_3)

{
  ulong uVar1;
  char cVar2;
  undefined8 ***pppuVar3;
  undefined8 **local_38;
  ulong local_30;
  ulong local_28;
  
  cVar2 = param_3[1];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (cVar2 == '\x01') {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/string:3022: libc++ Hardening assertion __s != nullptr failed: string::assign received nullptr\n"
                );
    }
    FUN_00547bf8(param_1,param_2);
    FUN_00547cac(param_1,&DAT_001c4dc3,2);
    if (param_3[1] == '\x01') {
      local_30 = 0;
      local_28 = 0;
      local_38 = (undefined8 ***)0x0;
      FUN_005f55c4(&local_38,0x16,*param_3);
    }
    else {
      FUN_005d3510(&local_38,&DAT_001b3348);
    }
    uVar1 = local_30;
    pppuVar3 = (undefined8 ***)local_38;
    if (-1 < (long)local_28) {
      uVar1 = local_28 >> 0x38;
      pppuVar3 = &local_38;
    }
    FUN_00547cac(param_1,pppuVar3,uVar1);
    if ((long)local_28 < 0) {
      operator_delete(local_38);
    }
    FUN_00547cac(param_1,&DAT_001e1644,2);
  }
  return;
}


// ===== 00b8269c  FUN_00b8269c =====

undefined1  [16]
FUN_00b8269c(undefined8 *param_1,uint *param_2,undefined8 param_3,undefined8 *param_4,
            undefined8 *param_5)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined1 auVar11 [16];
  
  plVar9 = (long *)*param_1;
  plVar2 = plVar9 + 1;
  plVar10 = plVar2;
  if ((long *)*plVar2 != (long *)0x0) {
    plVar4 = (long *)*plVar2;
    do {
      while (plVar1 = plVar4, plVar2 = plVar1, *param_2 < *(uint *)(plVar1 + 4)) {
        plVar4 = (long *)*plVar1;
        plVar10 = plVar1;
        if ((long *)*plVar1 == (long *)0x0) goto LAB_00b82708;
      }
      if (*param_2 == *(uint *)(plVar1 + 4)) {
        uVar3 = 0;
        goto LAB_00b827b4;
      }
      plVar4 = (long *)plVar1[1];
    } while ((long *)plVar1[1] != (long *)0x0);
    plVar10 = plVar1 + 1;
  }
LAB_00b82708:
  plVar1 = (long *)operator_new(0x40);
  if ((plVar1 == (long *)0x0) || (*plVar1 = 0, plVar1 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  plVar4 = (long *)*param_5;
  *(undefined4 *)(plVar1 + 4) = *(undefined4 *)*param_4;
  plVar1[5] = *plVar4;
  plVar5 = plVar4 + 1;
  lVar7 = *plVar5;
  plVar6 = plVar1 + 6;
  *plVar6 = lVar7;
  lVar8 = plVar4[2];
  plVar1[7] = lVar8;
  if (lVar8 == 0) {
    plVar1[5] = (long)plVar6;
  }
  else {
    *(long **)(lVar7 + 0x10) = plVar6;
    *plVar4 = (long)plVar5;
    *plVar5 = 0;
    plVar4[2] = 0;
  }
  *plVar1 = 0;
  plVar1[1] = 0;
  plVar1[2] = (long)plVar2;
  *plVar10 = (long)plVar1;
  plVar2 = plVar1;
  if (*(long *)*plVar9 != 0) {
    *plVar9 = *(long *)*plVar9;
    plVar2 = (long *)*plVar10;
  }
  FUN_005d5b94(plVar9[1],plVar2);
  uVar3 = 1;
  plVar9[2] = plVar9[2] + 1;
LAB_00b827b4:
  auVar11._8_8_ = uVar3;
  auVar11._0_8_ = plVar1;
  return auVar11;
}


// ===== 00b827e4  FUN_00b827e4 =====

void FUN_00b827e4(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long *local_50;
  long *plStack_48;
  long local_28;
  
  if (param_2 != param_3) {
    lVar3 = param_1[1];
    if (lVar3 == 0) {
      puVar1 = (undefined8 *)operator_new(0x38);
      if (puVar1 == (undefined8 *)0x0) {
LAB_00b828ec:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      puVar2 = puVar1 + 4;
      *puVar1 = 0;
      if (puVar2 == (undefined8 *)0x0) goto LAB_00b828ec;
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        FUN_005478d8(puVar2,*param_2,param_2[1]);
      }
      else {
        uVar6 = *param_2;
        uVar4 = param_2[2];
        puVar1[5] = param_2[1];
        *puVar2 = uVar6;
        puVar1[6] = uVar4;
      }
      plVar5 = (long *)*param_1;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = param_1 + 1;
      param_1[1] = (long)puVar1;
      if (*plVar5 != 0) {
        *param_1 = *plVar5;
      }
      FUN_005d5b94(puVar1,puVar1);
      param_2 = param_2 + 3;
      param_1[2] = param_1[2] + 1;
      lVar3 = param_1[1];
    }
    do {
      local_28 = lVar3;
      lVar3 = *(long *)(local_28 + 8);
    } while (*(long *)(local_28 + 8) != 0);
    if (param_2 != param_3) {
      do {
        local_50 = param_1;
        plStack_48 = &local_28;
        FUN_00b82900(&local_50,param_2,param_2);
        param_2 = param_2 + 3;
      } while (param_2 != param_3);
    }
  }
  return;
}


// ===== 00b82900  FUN_00b82900 =====

void FUN_00b82900(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  long *plVar2;
  size_t sVar3;
  ulong uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  
  plVar9 = (long *)*param_1;
  lVar10 = *(long *)param_1[1];
  uVar1 = *(ulong *)(lVar10 + 0x28);
  puVar6 = (undefined8 *)*(void **)(lVar10 + 0x20);
  if (-1 < (char)*(byte *)(lVar10 + 0x37)) {
    uVar1 = (ulong)*(byte *)(lVar10 + 0x37);
    puVar6 = (undefined8 *)(lVar10 + 0x20);
  }
  puVar7 = (undefined8 *)*param_2;
  uVar4 = param_2[1];
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    puVar7 = param_2;
    uVar4 = (ulong)*(byte *)((long)param_2 + 0x17);
  }
  sVar3 = uVar4;
  if (uVar1 <= uVar4) {
    sVar3 = uVar1;
  }
  iVar5 = memcmp(puVar6,puVar7,sVar3);
  if (iVar5 == 0) {
    if (uVar4 <= uVar1) goto LAB_00b829bc;
  }
  else if (-1 < iVar5) {
LAB_00b829bc:
    plVar11 = plVar9 + 1;
    plVar2 = (long *)*plVar11;
    plVar12 = plVar11;
    if ((long *)*plVar11 != (long *)0x0) {
      do {
        while( true ) {
          plVar11 = plVar2;
          plVar2 = (long *)plVar11[4];
          uVar1 = plVar11[5];
          if (-1 < (char)*(byte *)((long)plVar11 + 0x37)) {
            plVar2 = plVar11 + 4;
            uVar1 = (ulong)*(byte *)((long)plVar11 + 0x37);
          }
          sVar3 = uVar1;
          if (uVar4 <= uVar1) {
            sVar3 = uVar4;
          }
          iVar5 = memcmp(puVar7,plVar2,sVar3);
          if (iVar5 == 0) break;
          if (-1 < iVar5) goto LAB_00b829d0;
LAB_00b82a20:
          plVar2 = (long *)*plVar11;
          plVar12 = plVar11;
          if ((long *)*plVar11 == (long *)0x0) goto LAB_00b82a88;
        }
        if (uVar4 == uVar1) {
          return;
        }
        if (uVar4 < uVar1) goto LAB_00b82a20;
LAB_00b829d0:
        plVar2 = (long *)plVar11[1];
      } while ((long *)plVar11[1] != (long *)0x0);
      plVar12 = plVar11 + 1;
    }
LAB_00b82a88:
    puVar6 = (undefined8 *)operator_new(0x38);
    if (puVar6 != (undefined8 *)0x0) {
      puVar7 = puVar6 + 4;
      *puVar6 = 0;
      if (puVar7 != (undefined8 *)0x0) {
        if (*(char *)((long)param_3 + 0x17) < '\0') {
          FUN_005478d8(puVar7,*param_3,param_3[1]);
        }
        else {
          uVar13 = *param_3;
          uVar8 = param_3[2];
          puVar6[5] = param_3[1];
          *puVar7 = uVar13;
          puVar6[6] = uVar8;
        }
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar6[2] = plVar11;
        *plVar12 = (long)puVar6;
        if (*(long *)*plVar9 != 0) {
          *plVar9 = *(long *)*plVar9;
          puVar6 = (undefined8 *)*plVar12;
        }
        FUN_005d5b94(plVar9[1],puVar6);
        plVar9[2] = plVar9[2] + 1;
        return;
      }
    }
    goto LAB_00b82b18;
  }
  puVar6 = (undefined8 *)operator_new(0x38);
  if (puVar6 != (undefined8 *)0x0) {
    puVar7 = puVar6 + 4;
    *puVar6 = 0;
    if (puVar7 != (undefined8 *)0x0) {
      if (*(char *)((long)param_3 + 0x17) < '\0') {
        FUN_005478d8(puVar7,*param_3,param_3[1]);
        lVar10 = *(long *)param_1[1];
      }
      else {
        uVar13 = *param_3;
        uVar8 = param_3[2];
        puVar6[5] = param_3[1];
        *puVar7 = uVar13;
        puVar6[6] = uVar8;
      }
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = lVar10;
      *(undefined8 **)(lVar10 + 8) = puVar6;
      puVar7 = puVar6;
      if (*(long *)*plVar9 != 0) {
        *plVar9 = *(long *)*plVar9;
        puVar7 = *(undefined8 **)(lVar10 + 8);
      }
      FUN_005d5b94(plVar9[1],puVar7);
      plVar9[2] = plVar9[2] + 1;
      *(undefined8 **)param_1[1] = puVar6;
      return;
    }
  }
LAB_00b82b18:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00b82b2c  FUN_00b82b2c =====

void FUN_00b82b2c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *local_18;
  
  if (param_2 != (undefined8 *)0x0) {
    FUN_00b82b2c(param_1,*param_2);
    if (param_2 == (undefined8 *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    uVar1 = param_2[1];
    local_18 = param_2 + 5;
    FUN_00b16af4(&local_18,param_2[6]);
    operator_delete(param_2);
    FUN_00b82b2c(param_1,uVar1);
  }
  return;
}


// ===== 00b82bb4  FUN_00b82bb4 =====

long FUN_00b82bb4(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  void *pvVar8;
  void *pvVar9;
  long lVar10;
  
  lVar7 = param_1[1] - *param_1;
  uVar1 = (lVar7 >> 9) + 1;
  if (uVar1 >> 0x37 == 0) {
    uVar5 = param_1[2] - *param_1;
    uVar6 = (long)uVar5 >> 8;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7ffffffffffffdff < uVar5) {
      uVar6 = 0x7fffffffffffff;
    }
    if (uVar6 == 0) {
      pvVar4 = (void *)0x0;
    }
    else {
      if (uVar6 >> 0x37 != 0) goto LAB_00b82d20;
      pvVar4 = operator_new(uVar6 << 9);
      lVar7 = (long)pvVar4 + lVar7;
    }
    if (lVar7 == 0) {
LAB_00b82cf4:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    FUN_00b7aabc(lVar7,param_2);
    pvVar8 = (void *)*param_1;
    pvVar3 = (void *)param_1[1];
    lVar2 = (long)pvVar8 + (lVar7 - (long)pvVar3);
    pvVar9 = pvVar8;
    lVar10 = lVar2;
    if (pvVar3 != pvVar8) {
      do {
        if (lVar10 == 0) goto LAB_00b82cf4;
        FUN_00b7aabc(lVar10,pvVar9);
        pvVar9 = (void *)((long)pvVar9 + 0x200);
        lVar10 = lVar10 + 0x200;
      } while (pvVar9 != pvVar3);
      do {
        if (pvVar8 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        FUN_0088ae28(pvVar8);
        pvVar8 = (void *)((long)pvVar8 + 0x200);
      } while (pvVar8 != pvVar3);
      pvVar8 = (void *)*param_1;
    }
    *param_1 = lVar2;
    param_1[1] = lVar7 + 0x200;
    param_1[2] = (long)((long)pvVar4 + uVar6 * 0x200);
    if (pvVar8 != (void *)0x0) {
      operator_delete(pvVar8);
    }
    return lVar7 + 0x200;
  }
  FUN_00b82d24();
LAB_00b82d20:
                    /* WARNING: Subroutine does not return */
  FUN_005d55a4();
}


// ===== 00b82d24  FUN_00b82d24 =====

void FUN_00b82d24(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00b82d3c  FUN_00b82d3c =====

long FUN_00b82d3c(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  void *pvVar8;
  void *pvVar9;
  long lVar10;
  
  lVar7 = param_1[1] - *param_1;
  uVar1 = (lVar7 >> 9) + 1;
  if (uVar1 >> 0x37 == 0) {
    uVar5 = param_1[2] - *param_1;
    uVar6 = (long)uVar5 >> 8;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7ffffffffffffdff < uVar5) {
      uVar6 = 0x7fffffffffffff;
    }
    if (uVar6 == 0) {
      pvVar4 = (void *)0x0;
    }
    else {
      if (uVar6 >> 0x37 != 0) goto LAB_00b82ea8;
      pvVar4 = operator_new(uVar6 << 9);
      lVar7 = (long)pvVar4 + lVar7;
    }
    if (lVar7 == 0) {
LAB_00b82e7c:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    FUN_00b7aabc(lVar7,param_2);
    pvVar8 = (void *)*param_1;
    pvVar3 = (void *)param_1[1];
    lVar2 = (long)pvVar8 + (lVar7 - (long)pvVar3);
    pvVar9 = pvVar8;
    lVar10 = lVar2;
    if (pvVar3 != pvVar8) {
      do {
        if (lVar10 == 0) goto LAB_00b82e7c;
        FUN_00b7aabc(lVar10,pvVar9);
        pvVar9 = (void *)((long)pvVar9 + 0x200);
        lVar10 = lVar10 + 0x200;
      } while (pvVar9 != pvVar3);
      do {
        if (pvVar8 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        FUN_0088ae28(pvVar8);
        pvVar8 = (void *)((long)pvVar8 + 0x200);
      } while (pvVar8 != pvVar3);
      pvVar8 = (void *)*param_1;
    }
    *param_1 = lVar2;
    param_1[1] = lVar7 + 0x200;
    param_1[2] = (long)((long)pvVar4 + uVar6 * 0x200);
    if (pvVar8 != (void *)0x0) {
      operator_delete(pvVar8);
    }
    return lVar7 + 0x200;
  }
  FUN_00b82d24();
LAB_00b82ea8:
                    /* WARNING: Subroutine does not return */
  FUN_005d55a4();
}


// ===== 00b82eac  FUN_00b82eac =====

uint FUN_00b82eac(long param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  void *local_c0;
  undefined8 uStack_b8;
  long local_b0;
  char local_a8;
  undefined1 auStack_98 [96];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = *(long **)(param_3 + 0x130);
  FUN_007b68d8(auStack_98,param_1 + 0x10,param_1 + 0xa8);
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    FUN_005478d8(&local_c0,*param_2,param_2[1]);
  }
  else {
    uStack_b8 = param_2[1];
    local_c0 = (void *)*param_2;
    local_b0 = param_2[2];
  }
  local_a8 = '\x01';
  uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,auStack_98,&local_c0);
  if ((local_a8 == '\x01') && (local_b0 < 0)) {
    operator_delete(local_c0);
  }
  FUN_007b6d78(auStack_98);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00b82f94  FUN_00b82f94 =====

/* WARNING: Removing unreachable block (ram,0x00b82fe4) */
/* WARNING: Removing unreachable block (ram,0x00b83000) */

void FUN_00b82f94(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1[1];
  lVar3 = param_1[2];
  if (lVar1 != lVar3) {
    lVar2 = lVar3 + -0x20;
    do {
      lVar3 = lVar2;
      if (lVar3 == 0x30) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      if (*(char *)(lVar3 + 7) < '\0') {
        operator_delete(*(void **)(lVar3 + -0x10));
      }
      lVar2 = lVar3 + -0x50;
    } while (lVar3 + -0x30 != lVar1);
    lVar3 = lVar3 + -0x30;
  }
  param_1[2] = lVar3;
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete((void *)*param_1);
    return;
  }
  return;
}


// ===== 00b83068  FUN_00b83068 =====

void FUN_00b83068(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar3 = param_2;
  if (param_2 != param_3) {
    do {
      if (param_4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *param_4 = *puVar3;
      uVar5 = *(undefined8 *)(puVar3 + 4);
      uVar4 = *(undefined8 *)(puVar3 + 2);
      *(undefined8 *)(param_4 + 6) = *(undefined8 *)(puVar3 + 6);
      *(undefined8 *)(param_4 + 4) = uVar5;
      *(undefined8 *)(param_4 + 2) = uVar4;
      uVar5 = *(undefined8 *)(puVar3 + 10);
      uVar4 = *(undefined8 *)(puVar3 + 8);
      *(undefined8 *)(puVar3 + 4) = 0;
      *(undefined8 *)(puVar3 + 6) = 0;
      *(undefined8 *)(puVar3 + 2) = 0;
      *(undefined8 *)(param_4 + 0xc) = *(undefined8 *)(puVar3 + 0xc);
      *(undefined8 *)(param_4 + 10) = uVar5;
      *(undefined8 *)(param_4 + 8) = uVar4;
      uVar5 = *(undefined8 *)(puVar3 + 0x10);
      uVar4 = *(undefined8 *)(puVar3 + 0xe);
      *(undefined8 *)(puVar3 + 10) = 0;
      *(undefined8 *)(puVar3 + 0xc) = 0;
      *(undefined8 *)(puVar3 + 8) = 0;
      puVar1 = puVar3 + 0x14;
      *(undefined1 *)(param_4 + 0x12) = *(undefined1 *)(puVar3 + 0x12);
      *(undefined8 *)(param_4 + 0x10) = uVar5;
      *(undefined8 *)(param_4 + 0xe) = uVar4;
      param_4 = param_4 + 0x14;
      puVar3 = puVar1;
    } while (puVar1 != param_3);
    do {
      if (param_2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      if (*(char *)((long)param_2 + 0x37) < '\0') {
        operator_delete(*(void **)(param_2 + 8));
        cVar2 = *(char *)((long)param_2 + 0x1f);
      }
      else {
        cVar2 = *(char *)((long)param_2 + 0x1f);
      }
      if (cVar2 < '\0') {
        operator_delete(*(void **)(param_2 + 2));
      }
      param_2 = param_2 + 0x14;
    } while (param_2 != param_3);
  }
  return;
}


// ===== 00b83174  FUN_00b83174 =====

void FUN_00b83174(void *param_1)

{
  FUN_0088c128();
  operator_delete(param_1);
  return;
}


// ===== 00b831a4  FUN_00b831a4 =====

void FUN_00b831a4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)*param_1;
  puVar3 = (undefined8 *)*puVar2;
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  puVar1 = (undefined8 *)puVar2[1];
  while( true ) {
    if (puVar3 == puVar1) {
      puVar2[1] = puVar3;
      operator_delete(*(void **)*param_1);
      return;
    }
    puVar1 = puVar1 + -0x1b;
    if (puVar1 == (undefined8 *)0x0) break;
    (**(code **)*puVar1)(puVar1);
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00b83258  FUN_00b83258 =====

void FUN_00b83258(ulong param_1,ulong param_2,long param_3,uint param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 *local_270;
  undefined8 uStack_268;
  undefined1 *local_260;
  undefined1 *puStack_258;
  undefined1 *puStack_250;
  undefined1 *puStack_248;
  undefined1 *local_240;
  undefined1 *puStack_238;
  undefined1 *puStack_230;
  undefined1 *puStack_228;
  undefined1 *local_220;
  undefined1 *puStack_218;
  undefined1 *puStack_210;
  undefined1 *puStack_208;
  undefined1 *local_200;
  undefined1 *puStack_1f8;
  undefined1 *puStack_1f0;
  undefined1 *puStack_1e8;
  undefined1 *local_1e0;
  undefined1 *puStack_1d8;
  undefined1 *puStack_1d0;
  undefined1 *puStack_1c8;
  undefined1 *local_1c0;
  undefined1 *puStack_1b8;
  undefined1 *puStack_1b0;
  undefined1 *puStack_1a8;
  undefined1 *local_1a0;
  undefined1 *puStack_198;
  undefined1 uStack_190;
  undefined7 local_18f;
  undefined1 uStack_188;
  undefined7 uStack_187;
  undefined1 uStack_180;
  undefined7 uStack_17f;
  undefined1 *local_170;
  undefined8 uStack_168;
  undefined1 *local_160;
  undefined1 *puStack_158;
  undefined1 *puStack_150;
  undefined1 *puStack_148;
  undefined1 *local_140;
  undefined1 *puStack_138;
  undefined1 *puStack_130;
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
  undefined1 uStack_90;
  undefined7 local_8f;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  long local_78;
  
  lVar6 = tpidr_el0;
  local_78 = *(long *)(lVar6 + 0x28);
LAB_00b832a0:
  uVar10 = param_1;
LAB_00b832ac:
  do {
    param_1 = uVar10;
    uVar12 = param_2 - param_1;
    uVar10 = ((long)uVar12 >> 3) * -0x1084210842108421;
    if (uVar10 - 2 == 0 || (long)uVar10 < 2) {
      if (uVar10 < 2) goto LAB_00b840e0;
      if (uVar10 == 2) {
        if (*(int *)(param_1 + 0xc) < *(int *)(param_2 - 0xec)) {
          puStack_158 = &DAT_aaaaaaaaaaaaaaaa;
          local_160 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_150 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
          local_140 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_130 = &DAT_aaaaaaaaaaaaaaaa;
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
          uStack_88 = 0xaa;
          uStack_87 = 0xaaaaaaaaaaaaaa;
          uStack_90 = 0xaa;
          local_8f = 0xaaaaaaaaaaaaaa;
          uStack_168 = &DAT_aaaaaaaaaaaaaaaa;
          local_170 = &DAT_aaaaaaaaaaaaaaaa;
          uStack_80 = 0xaa;
          uStack_7f = 0xaaaaaaaaaaaaaa;
          FUN_00890aa0(&local_170,param_1);
          puStack_98 = *(undefined1 **)(param_1 + 0xd8);
          uStack_87 = (undefined7)*(undefined8 *)(param_1 + 0xe9);
          uStack_80 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0xe9) >> 0x38);
          uStack_88 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0xe1) >> 0x38);
          uStack_90 = (undefined1)*(undefined8 *)(param_1 + 0xe0);
          local_8f = (undefined7)((ulong)*(undefined8 *)(param_1 + 0xe0) >> 8);
          FUN_00890f48(param_1,param_2 - 0xf8);
          uVar16 = *(undefined8 *)(param_2 - 0x20);
          uVar18 = *(undefined8 *)(param_2 - 0xf);
          uVar17 = *(undefined8 *)(param_2 - 0x17);
          *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_2 - 0x18);
          *(undefined8 *)(param_1 + 0xd8) = uVar16;
          *(undefined8 *)(param_1 + 0xe9) = uVar18;
          *(undefined8 *)(param_1 + 0xe1) = uVar17;
          FUN_00890f48(param_2 - 0xf8,&local_170);
          *(ulong *)(param_2 - 0x18) = CONCAT71(local_8f,uStack_90);
          *(undefined1 **)(param_2 - 0x20) = puStack_98;
          *(ulong *)(param_2 - 0xf) = CONCAT17(uStack_80,uStack_87);
          *(ulong *)(param_2 - 0x17) = CONCAT17(uStack_88,local_8f);
LAB_00b8393c:
          FUN_00890cb8(&local_170);
        }
        goto LAB_00b840e0;
      }
    }
    else {
      if (uVar10 == 3) {
        FUN_00b84290(param_1,param_1 + 0xf8,param_2 - 0xf8);
        goto LAB_00b840e0;
      }
      if (uVar10 == 4) {
        FUN_00b84290(param_1,param_1 + 0xf8,param_1 + 0x1f0);
        if (*(int *)(param_1 + 0x1fc) < *(int *)(param_2 - 0xec)) {
          puStack_158 = &DAT_aaaaaaaaaaaaaaaa;
          local_160 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_150 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
          local_140 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_130 = &DAT_aaaaaaaaaaaaaaaa;
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
          uStack_88 = 0xaa;
          uStack_87 = 0xaaaaaaaaaaaaaa;
          uStack_90 = 0xaa;
          local_8f = 0xaaaaaaaaaaaaaa;
          uStack_168 = &DAT_aaaaaaaaaaaaaaaa;
          local_170 = &DAT_aaaaaaaaaaaaaaaa;
          uStack_80 = 0xaa;
          uStack_7f = 0xaaaaaaaaaaaaaa;
          FUN_00890aa0(&local_170,param_1 + 0x1f0);
          puVar2 = (undefined8 *)(param_1 + 0x2c8);
          puStack_98 = (undefined1 *)*puVar2;
          uStack_87 = (undefined7)*(undefined8 *)(param_1 + 0x2d9);
          uStack_80 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0x2d9) >> 0x38);
          uStack_88 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0x2d1) >> 0x38);
          uStack_90 = (undefined1)*(undefined8 *)(param_1 + 0x2d0);
          local_8f = (undefined7)((ulong)*(undefined8 *)(param_1 + 0x2d0) >> 8);
          FUN_00890f48(param_1 + 0x1f0,param_2 - 0xf8);
          uVar16 = *(undefined8 *)(param_2 - 0x20);
          uVar18 = *(undefined8 *)(param_2 - 0xf);
          uVar17 = *(undefined8 *)(param_2 - 0x17);
          *(undefined8 *)(param_1 + 0x2d0) = *(undefined8 *)(param_2 - 0x18);
          *puVar2 = uVar16;
          *(undefined8 *)(param_1 + 0x2d9) = uVar18;
          *(undefined8 *)(param_1 + 0x2d1) = uVar17;
          FUN_00890f48(param_2 - 0xf8,&local_170);
          *(ulong *)(param_2 - 0x18) = CONCAT71(local_8f,uStack_90);
          *(undefined1 **)(param_2 - 0x20) = puStack_98;
          *(ulong *)(param_2 - 0xf) = CONCAT17(uStack_80,uStack_87);
          *(ulong *)(param_2 - 0x17) = CONCAT17(uStack_88,local_8f);
          FUN_00890cb8(&local_170);
          if (*(int *)(param_1 + 0x104) < *(int *)(param_1 + 0x1fc)) {
            puStack_158 = &DAT_aaaaaaaaaaaaaaaa;
            local_160 = &DAT_aaaaaaaaaaaaaaaa;
            puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
            puStack_150 = &DAT_aaaaaaaaaaaaaaaa;
            puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
            local_140 = &DAT_aaaaaaaaaaaaaaaa;
            puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
            puStack_130 = &DAT_aaaaaaaaaaaaaaaa;
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
            uStack_88 = 0xaa;
            uStack_87 = 0xaaaaaaaaaaaaaa;
            uStack_90 = 0xaa;
            local_8f = 0xaaaaaaaaaaaaaa;
            uStack_168 = &DAT_aaaaaaaaaaaaaaaa;
            local_170 = &DAT_aaaaaaaaaaaaaaaa;
            uStack_80 = 0xaa;
            uStack_7f = 0xaaaaaaaaaaaaaa;
            FUN_00890aa0(&local_170,param_1 + 0xf8);
            puStack_98 = *(undefined1 **)(param_1 + 0x1d0);
            uStack_87 = (undefined7)*(undefined8 *)(param_1 + 0x1e1);
            uStack_80 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0x1e1) >> 0x38);
            uStack_88 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0x1d9) >> 0x38);
            uStack_90 = (undefined1)*(undefined8 *)(param_1 + 0x1d8);
            local_8f = (undefined7)((ulong)*(undefined8 *)(param_1 + 0x1d8) >> 8);
            FUN_00890f48(param_1 + 0xf8,param_1 + 0x1f0);
            *(undefined8 *)(param_1 + 0x1d8) = *(undefined8 *)(param_1 + 0x2d0);
            *(undefined8 *)(param_1 + 0x1d0) = *puVar2;
            *(undefined8 *)(param_1 + 0x1e1) = *(undefined8 *)(param_1 + 0x2d9);
            *(undefined8 *)(param_1 + 0x1d9) = *(undefined8 *)(param_1 + 0x2d1);
            FUN_00890f48(param_1 + 0x1f0,&local_170);
            *(ulong *)(param_1 + 0x2d0) = CONCAT71(local_8f,uStack_90);
            *puVar2 = puStack_98;
            *(ulong *)(param_1 + 0x2d9) = CONCAT17(uStack_80,uStack_87);
            *(ulong *)(param_1 + 0x2d1) = CONCAT17(uStack_88,local_8f);
            FUN_00890cb8(&local_170);
            if (*(int *)(param_1 + 0xc) < *(int *)(param_1 + 0x104)) {
              puStack_158 = &DAT_aaaaaaaaaaaaaaaa;
              local_160 = &DAT_aaaaaaaaaaaaaaaa;
              puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
              puStack_150 = &DAT_aaaaaaaaaaaaaaaa;
              puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
              local_140 = &DAT_aaaaaaaaaaaaaaaa;
              puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
              puStack_130 = &DAT_aaaaaaaaaaaaaaaa;
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
              uStack_88 = 0xaa;
              uStack_87 = 0xaaaaaaaaaaaaaa;
              uStack_90 = 0xaa;
              local_8f = 0xaaaaaaaaaaaaaa;
              uStack_168 = &DAT_aaaaaaaaaaaaaaaa;
              local_170 = &DAT_aaaaaaaaaaaaaaaa;
              uStack_80 = 0xaa;
              uStack_7f = 0xaaaaaaaaaaaaaa;
              FUN_00890aa0(&local_170,param_1);
              puStack_98 = *(undefined1 **)(param_1 + 0xd8);
              uStack_87 = (undefined7)*(undefined8 *)(param_1 + 0xe9);
              uStack_80 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0xe9) >> 0x38);
              uStack_88 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0xe1) >> 0x38);
              uStack_90 = (undefined1)*(undefined8 *)(param_1 + 0xe0);
              local_8f = (undefined7)((ulong)*(undefined8 *)(param_1 + 0xe0) >> 8);
              FUN_00890f48(param_1,param_1 + 0xf8);
              *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_1 + 0x1d8);
              *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_1 + 0x1d0);
              *(undefined8 *)(param_1 + 0xe9) = *(undefined8 *)(param_1 + 0x1e1);
              *(undefined8 *)(param_1 + 0xe1) = *(undefined8 *)(param_1 + 0x1d9);
              FUN_00890f48(param_1 + 0xf8,&local_170);
              *(ulong *)(param_1 + 0x1d8) = CONCAT71(local_8f,uStack_90);
              *(undefined8 *)(param_1 + 0x1d0) = puStack_98;
              *(ulong *)(param_1 + 0x1e1) = CONCAT17(uStack_80,uStack_87);
              *(ulong *)(param_1 + 0x1d9) = CONCAT17(uStack_88,local_8f);
              goto LAB_00b8393c;
            }
          }
        }
        goto LAB_00b840e0;
      }
      if (uVar10 == 5) {
        FUN_00b845a8(param_1,param_1 + 0xf8,param_1 + 0x1f0,param_1 + 0x2e8,param_2 - 0xf8);
        goto LAB_00b840e0;
      }
    }
    if ((long)uVar12 < 0x1740) {
      if ((param_4 & 1) == 0) {
        if ((param_1 != param_2) && (param_1 + 0xf8 != param_2)) {
          lVar11 = 0;
          uVar10 = param_1 + 0xf8;
          uVar12 = param_1;
          do {
            uVar15 = uVar10;
            if (*(int *)(uVar12 + 0xc) < *(int *)(uVar12 + 0x104)) {
              puStack_158 = &DAT_aaaaaaaaaaaaaaaa;
              local_160 = &DAT_aaaaaaaaaaaaaaaa;
              puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
              puStack_150 = &DAT_aaaaaaaaaaaaaaaa;
              puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
              local_140 = &DAT_aaaaaaaaaaaaaaaa;
              puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
              puStack_130 = &DAT_aaaaaaaaaaaaaaaa;
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
              uStack_88 = 0xaa;
              uStack_87 = 0xaaaaaaaaaaaaaa;
              uStack_90 = 0xaa;
              local_8f = 0xaaaaaaaaaaaaaa;
              uStack_168 = &DAT_aaaaaaaaaaaaaaaa;
              local_170 = &DAT_aaaaaaaaaaaaaaaa;
              uStack_80 = 0xaa;
              uStack_7f = 0xaaaaaaaaaaaaaa;
              FUN_00890aa0(&local_170,uVar15);
              puStack_98 = *(undefined1 **)(uVar12 + 0x1d0);
              uStack_87 = (undefined7)*(undefined8 *)(uVar12 + 0x1e1);
              uStack_80 = (undefined1)((ulong)*(undefined8 *)(uVar12 + 0x1e1) >> 0x38);
              uStack_88 = (undefined1)((ulong)*(undefined8 *)(uVar12 + 0x1d9) >> 0x38);
              uStack_90 = (undefined1)*(undefined8 *)(uVar12 + 0x1d8);
              local_8f = (undefined7)((ulong)*(undefined8 *)(uVar12 + 0x1d8) >> 8);
              lVar8 = lVar11;
              do {
                lVar3 = param_1 + lVar8;
                FUN_00890f48(lVar3 + 0xf8,param_1 + lVar8);
                *(undefined8 *)(lVar3 + 0x1d8) = *(undefined8 *)(lVar3 + 0xe0);
                *(undefined8 *)(lVar3 + 0x1d0) = *(undefined8 *)(lVar3 + 0xd8);
                *(undefined8 *)(lVar3 + 0x1e1) = *(undefined8 *)(lVar3 + 0xe9);
                *(undefined8 *)(lVar3 + 0x1d9) = *(undefined8 *)(lVar3 + 0xe1);
                if (lVar8 == -0xf8) {
                    /* WARNING: Subroutine does not return */
                  std::__Cr::__libcpp_verbose_abort
                            ("%s",
                             "gen/third_party/libc++/src/include/__algorithm/sort.h:293: libc++ Hardening assertion __k != __leftmost failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                            );
                }
                lVar8 = lVar8 + -0xf8;
              } while (*(int *)(lVar3 + -0xec) < uStack_168._4_4_);
              lVar8 = param_1 + lVar8;
              FUN_00890f48(lVar8 + 0xf8,&local_170);
              *(ulong *)(lVar8 + 0x1d8) = CONCAT71(local_8f,uStack_90);
              *(undefined1 **)(lVar8 + 0x1d0) = puStack_98;
              *(ulong *)(lVar8 + 0x1e1) = CONCAT17(uStack_80,uStack_87);
              *(ulong *)(lVar8 + 0x1d9) = CONCAT17(uStack_88,local_8f);
              FUN_00890cb8(&local_170);
            }
            lVar11 = lVar11 + 0xf8;
            uVar10 = uVar15 + 0xf8;
            uVar12 = uVar15;
          } while (uVar15 + 0xf8 != param_2);
        }
        goto LAB_00b840e0;
      }
      if ((param_1 == param_2) || (param_1 + 0xf8 == param_2)) goto LAB_00b840e0;
      lVar11 = 0;
      uVar10 = param_1 + 0xf8;
      uVar12 = param_1;
      break;
    }
    if (param_3 == 0) {
      if (param_1 == param_2) goto LAB_00b840e0;
      uVar9 = uVar10 - 2 >> 1;
      uVar15 = uVar9;
      goto LAB_00b83c68;
    }
    lVar11 = param_1 + (uVar10 >> 1) * 0xf8;
    if (uVar12 < 0x7c01) {
      FUN_00b84290(lVar11,param_1,param_2 - 0xf8);
      if ((param_4 & 1) == 0) goto LAB_00b83408;
LAB_00b83418:
      param_3 = param_3 + -1;
      puStack_258 = &DAT_aaaaaaaaaaaaaaaa;
      local_260 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_248 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_250 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_238 = &DAT_aaaaaaaaaaaaaaaa;
      local_240 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_228 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_230 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_218 = &DAT_aaaaaaaaaaaaaaaa;
      local_220 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_208 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_210 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_1f8 = &DAT_aaaaaaaaaaaaaaaa;
      local_200 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_1e8 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_1f0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_1d8 = &DAT_aaaaaaaaaaaaaaaa;
      local_1e0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_1c8 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_1d0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_1b8 = &DAT_aaaaaaaaaaaaaaaa;
      local_1c0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_1a8 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_1b0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_198 = &DAT_aaaaaaaaaaaaaaaa;
      local_1a0 = &DAT_aaaaaaaaaaaaaaaa;
      uStack_188 = 0xaa;
      uStack_187 = 0xaaaaaaaaaaaaaa;
      uStack_190 = 0xaa;
      local_18f = 0xaaaaaaaaaaaaaa;
      uStack_268 = &DAT_aaaaaaaaaaaaaaaa;
      local_270 = &DAT_aaaaaaaaaaaaaaaa;
      uStack_180 = 0xaa;
      uStack_17f = 0xaaaaaaaaaaaaaa;
      FUN_00890aa0(&local_270,param_1);
      puStack_198 = *(undefined1 **)(param_1 + 0xd8);
      lVar11 = 0;
      uStack_187 = (undefined7)*(undefined8 *)(param_1 + 0xe9);
      uStack_180 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0xe9) >> 0x38);
      uStack_188 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0xe1) >> 0x38);
      uStack_190 = (undefined1)*(undefined8 *)(param_1 + 0xe0);
      local_18f = (undefined7)((ulong)*(undefined8 *)(param_1 + 0xe0) >> 8);
      do {
        lVar8 = param_1 + lVar11;
        if (lVar8 + 0xf8U == param_2) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__algorithm/sort.h:603: libc++ Hardening assertion __first != __end failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                    );
        }
        lVar11 = lVar11 + 0xf8;
      } while (uStack_268._4_4_ < *(int *)(lVar8 + 0x104));
      uVar12 = param_1 + lVar11;
      uVar15 = param_2;
      if (lVar11 == 0xf8) {
        do {
          if (uVar15 <= uVar12) break;
          piVar1 = (int *)(uVar15 - 0xec);
          uVar15 = uVar15 - 0xf8;
        } while (*piVar1 <= uStack_268._4_4_);
      }
      else {
        do {
          if (uVar15 == param_1) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__algorithm/sort.h:615: libc++ Hardening assertion __last != __begin failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                      );
          }
          piVar1 = (int *)(uVar15 - 0xec);
          uVar15 = uVar15 - 0xf8;
        } while (*piVar1 <= uStack_268._4_4_);
      }
      uVar10 = uVar12;
      uVar9 = uVar12;
      uVar13 = uVar15;
      if (uVar12 < uVar15) {
        do {
          puStack_158 = &DAT_aaaaaaaaaaaaaaaa;
          local_160 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_150 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
          local_140 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_130 = &DAT_aaaaaaaaaaaaaaaa;
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
          uStack_88 = 0xaa;
          uStack_87 = 0xaaaaaaaaaaaaaa;
          uStack_90 = 0xaa;
          local_8f = 0xaaaaaaaaaaaaaa;
          uStack_168 = &DAT_aaaaaaaaaaaaaaaa;
          local_170 = &DAT_aaaaaaaaaaaaaaaa;
          uStack_80 = 0xaa;
          uStack_7f = 0xaaaaaaaaaaaaaa;
          FUN_00890aa0(&local_170,uVar9);
          puStack_98 = *(undefined1 **)(uVar9 + 0xd8);
          uStack_87 = (undefined7)*(undefined8 *)(uVar9 + 0xe9);
          uStack_80 = (undefined1)((ulong)*(undefined8 *)(uVar9 + 0xe9) >> 0x38);
          uStack_88 = (undefined1)((ulong)*(undefined8 *)(uVar9 + 0xe1) >> 0x38);
          uStack_90 = (undefined1)*(undefined8 *)(uVar9 + 0xe0);
          local_8f = (undefined7)((ulong)*(undefined8 *)(uVar9 + 0xe0) >> 8);
          FUN_00890f48(uVar9,uVar13);
          uVar16 = *(undefined8 *)(uVar13 + 0xd8);
          uVar18 = *(undefined8 *)(uVar13 + 0xe9);
          uVar17 = *(undefined8 *)(uVar13 + 0xe1);
          *(undefined8 *)(uVar9 + 0xe0) = *(undefined8 *)(uVar13 + 0xe0);
          *(undefined8 *)(uVar9 + 0xd8) = uVar16;
          *(undefined8 *)(uVar9 + 0xe9) = uVar18;
          *(undefined8 *)(uVar9 + 0xe1) = uVar17;
          FUN_00890f48(uVar13,&local_170);
          *(ulong *)(uVar13 + 0xe0) = CONCAT71(local_8f,uStack_90);
          *(undefined1 **)(uVar13 + 0xd8) = puStack_98;
          *(ulong *)(uVar13 + 0xe9) = CONCAT17(uStack_80,uStack_87);
          *(ulong *)(uVar13 + 0xe1) = CONCAT17(uStack_88,local_8f);
          FUN_00890cb8(&local_170);
          do {
            uVar10 = uVar9 + 0xf8;
            if (uVar10 == param_2) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__algorithm/sort.h:633: libc++ Hardening assertion __first != __end failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                        );
            }
            piVar1 = (int *)(uVar9 + 0x104);
            uVar9 = uVar10;
          } while (uStack_268._4_4_ < *piVar1);
          do {
            if (uVar13 == param_1) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__algorithm/sort.h:638: libc++ Hardening assertion __last != __begin failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                        );
            }
            piVar1 = (int *)(uVar13 - 0xec);
            uVar13 = uVar13 - 0xf8;
          } while (*piVar1 <= uStack_268._4_4_);
        } while (uVar10 < uVar13);
      }
      if (param_1 != uVar10 - 0xf8) {
        FUN_00890f48(param_1,uVar10 - 0xf8);
        uVar16 = *(undefined8 *)(uVar10 - 0x20);
        uVar18 = *(undefined8 *)(uVar10 - 0xf);
        uVar17 = *(undefined8 *)(uVar10 - 0x17);
        *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(uVar10 - 0x18);
        *(undefined8 *)(param_1 + 0xd8) = uVar16;
        *(undefined8 *)(param_1 + 0xe9) = uVar18;
        *(undefined8 *)(param_1 + 0xe1) = uVar17;
      }
      FUN_00890f48(uVar10 - 0xf8,&local_270);
      *(ulong *)(uVar10 - 0x18) = CONCAT71(local_18f,uStack_190);
      *(undefined1 **)(uVar10 - 0x20) = puStack_198;
      *(ulong *)(uVar10 - 0xf) = CONCAT17(uStack_180,uStack_187);
      *(ulong *)(uVar10 - 0x17) = CONCAT17(uStack_188,local_18f);
      FUN_00890cb8(&local_270);
      if (uVar15 <= uVar12) {
        uVar12 = FUN_00b84a30(param_1,uVar10 - 0xf8);
        uVar15 = FUN_00b84a30(uVar10,param_2);
        if ((uVar15 & 1) != 0) goto LAB_00b8384c;
        if ((uVar12 & 1) != 0) goto LAB_00b832ac;
      }
      FUN_00b83258(param_1,uVar10 - 0xf8,param_3,param_4 & 1);
      param_4 = 0;
      goto LAB_00b832ac;
    }
    FUN_00b84290(param_1,lVar11,param_2 - 0xf8);
    FUN_00b84290(param_1 + 0xf8,lVar11 + -0xf8,param_2 - 0x1f0);
    FUN_00b84290(param_1 + 0x1f0,lVar11 + 0xf8,param_2 - 0x2e8);
    FUN_00b84290(lVar11 + -0xf8,lVar11,lVar11 + 0xf8);
    uStack_80 = 0xaa;
    uStack_7f = 0xaaaaaaaaaaaaaa;
    puStack_158 = &DAT_aaaaaaaaaaaaaaaa;
    local_160 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_150 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
    local_140 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_130 = &DAT_aaaaaaaaaaaaaaaa;
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
    uStack_88 = 0xaa;
    uStack_87 = 0xaaaaaaaaaaaaaa;
    uStack_90 = 0xaa;
    local_8f = 0xaaaaaaaaaaaaaa;
    uStack_168 = &DAT_aaaaaaaaaaaaaaaa;
    local_170 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00890aa0(&local_170,param_1);
    puStack_98 = *(undefined1 **)(param_1 + 0xd8);
    uStack_87 = (undefined7)*(undefined8 *)(param_1 + 0xe9);
    uStack_80 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0xe9) >> 0x38);
    uStack_88 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0xe1) >> 0x38);
    uStack_90 = (undefined1)*(undefined8 *)(param_1 + 0xe0);
    local_8f = (undefined7)((ulong)*(undefined8 *)(param_1 + 0xe0) >> 8);
    FUN_00890f48(param_1,lVar11);
    uVar16 = *(undefined8 *)(lVar11 + 0xd8);
    uVar18 = *(undefined8 *)(lVar11 + 0xe9);
    uVar17 = *(undefined8 *)(lVar11 + 0xe1);
    *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(lVar11 + 0xe0);
    *(undefined8 *)(param_1 + 0xd8) = uVar16;
    *(undefined8 *)(param_1 + 0xe9) = uVar18;
    *(undefined8 *)(param_1 + 0xe1) = uVar17;
    FUN_00890f48(lVar11,&local_170);
    *(ulong *)(lVar11 + 0xe0) = CONCAT71(local_8f,uStack_90);
    *(undefined1 **)(lVar11 + 0xd8) = puStack_98;
    *(ulong *)(lVar11 + 0xe9) = CONCAT17(uStack_80,uStack_87);
    *(ulong *)(lVar11 + 0xe1) = CONCAT17(uStack_88,local_8f);
    FUN_00890cb8(&local_170);
    if ((param_4 & 1) != 0) goto LAB_00b83418;
LAB_00b83408:
    if (*(int *)(param_1 + 0xc) < *(int *)(param_1 - 0xec)) goto LAB_00b83418;
    puStack_258 = &DAT_aaaaaaaaaaaaaaaa;
    local_260 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_248 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_250 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_238 = &DAT_aaaaaaaaaaaaaaaa;
    local_240 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_228 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_230 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_218 = &DAT_aaaaaaaaaaaaaaaa;
    local_220 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_208 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_210 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_1f8 = &DAT_aaaaaaaaaaaaaaaa;
    local_200 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_1e8 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_1f0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_1d8 = &DAT_aaaaaaaaaaaaaaaa;
    local_1e0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_1c8 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_1d0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_1b8 = &DAT_aaaaaaaaaaaaaaaa;
    local_1c0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_1a8 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_1b0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_198 = &DAT_aaaaaaaaaaaaaaaa;
    local_1a0 = &DAT_aaaaaaaaaaaaaaaa;
    uStack_188 = 0xaa;
    uStack_187 = 0xaaaaaaaaaaaaaa;
    uStack_190 = 0xaa;
    local_18f = 0xaaaaaaaaaaaaaa;
    uStack_268 = &DAT_aaaaaaaaaaaaaaaa;
    local_270 = &DAT_aaaaaaaaaaaaaaaa;
    uStack_180 = 0xaa;
    uStack_17f = 0xaaaaaaaaaaaaaa;
    FUN_00890aa0(&local_270,param_1);
    puStack_198 = *(undefined1 **)(param_1 + 0xd8);
    uStack_187 = (undefined7)*(undefined8 *)(param_1 + 0xe9);
    uStack_180 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0xe9) >> 0x38);
    uStack_188 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0xe1) >> 0x38);
    uStack_190 = (undefined1)*(undefined8 *)(param_1 + 0xe0);
    local_18f = (undefined7)((ulong)*(undefined8 *)(param_1 + 0xe0) >> 8);
    uVar12 = param_1;
    if (*(int *)(param_2 - 0xec) < uStack_268._4_4_) {
      do {
        uVar10 = uVar12 + 0xf8;
        if (uVar10 == param_2) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__algorithm/sort.h:669: libc++ Hardening assertion __first != __end failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                    );
        }
        piVar1 = (int *)(uVar12 + 0x104);
        uVar12 = uVar10;
      } while (uStack_268._4_4_ <= *piVar1);
    }
    else {
      do {
        uVar10 = uVar12 + 0xf8;
        if (param_2 <= uVar10) break;
        piVar1 = (int *)(uVar12 + 0x104);
        uVar12 = uVar10;
      } while (uStack_268._4_4_ <= *piVar1);
    }
    uVar12 = param_2;
    if (uVar10 < param_2) {
      do {
        if (uVar12 == param_1) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__algorithm/sort.h:682: libc++ Hardening assertion __last != __begin failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                    );
        }
        piVar1 = (int *)(uVar12 - 0xec);
        uVar12 = uVar12 - 0xf8;
      } while (*piVar1 < uStack_268._4_4_);
    }
    while (uVar10 < uVar12) {
      puStack_158 = &DAT_aaaaaaaaaaaaaaaa;
      local_160 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_150 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
      local_140 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_130 = &DAT_aaaaaaaaaaaaaaaa;
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
      uStack_88 = 0xaa;
      uStack_87 = 0xaaaaaaaaaaaaaa;
      uStack_90 = 0xaa;
      local_8f = 0xaaaaaaaaaaaaaa;
      uStack_168 = &DAT_aaaaaaaaaaaaaaaa;
      local_170 = &DAT_aaaaaaaaaaaaaaaa;
      uStack_80 = 0xaa;
      uStack_7f = 0xaaaaaaaaaaaaaa;
      FUN_00890aa0(&local_170,uVar10);
      puStack_98 = *(undefined1 **)(uVar10 + 0xd8);
      uStack_87 = (undefined7)*(undefined8 *)(uVar10 + 0xe9);
      uStack_80 = (undefined1)((ulong)*(undefined8 *)(uVar10 + 0xe9) >> 0x38);
      uStack_88 = (undefined1)((ulong)*(undefined8 *)(uVar10 + 0xe1) >> 0x38);
      uStack_90 = (undefined1)*(undefined8 *)(uVar10 + 0xe0);
      local_8f = (undefined7)((ulong)*(undefined8 *)(uVar10 + 0xe0) >> 8);
      FUN_00890f48(uVar10,uVar12);
      uVar16 = *(undefined8 *)(uVar12 + 0xd8);
      uVar18 = *(undefined8 *)(uVar12 + 0xe9);
      uVar17 = *(undefined8 *)(uVar12 + 0xe1);
      *(undefined8 *)(uVar10 + 0xe0) = *(undefined8 *)(uVar12 + 0xe0);
      *(undefined8 *)(uVar10 + 0xd8) = uVar16;
      *(undefined8 *)(uVar10 + 0xe9) = uVar18;
      *(undefined8 *)(uVar10 + 0xe1) = uVar17;
      FUN_00890f48(uVar12,&local_170);
      *(ulong *)(uVar12 + 0xe0) = CONCAT71(local_8f,uStack_90);
      *(undefined1 **)(uVar12 + 0xd8) = puStack_98;
      *(ulong *)(uVar12 + 0xe9) = CONCAT17(uStack_80,uStack_87);
      *(ulong *)(uVar12 + 0xe1) = CONCAT17(uStack_88,local_8f);
      FUN_00890cb8(&local_170);
      uVar15 = uVar10;
      do {
        uVar10 = uVar15 + 0xf8;
        if (uVar10 == param_2) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__algorithm/sort.h:692: libc++ Hardening assertion __first != __end failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                    );
        }
        piVar1 = (int *)(uVar15 + 0x104);
        uVar15 = uVar10;
      } while (uStack_268._4_4_ <= *piVar1);
      do {
        if (uVar12 == param_1) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__algorithm/sort.h:697: libc++ Hardening assertion __last != __begin failed: Would read out of bounds, does your comparator satisfy the strict-weak ordering requirement?\n"
                    );
        }
        piVar1 = (int *)(uVar12 - 0xec);
        uVar12 = uVar12 - 0xf8;
      } while (*piVar1 < uStack_268._4_4_);
    }
    if (param_1 != uVar10 - 0xf8) {
      FUN_00890f48(param_1,uVar10 - 0xf8);
      uVar16 = *(undefined8 *)(uVar10 - 0x20);
      uVar18 = *(undefined8 *)(uVar10 - 0xf);
      uVar17 = *(undefined8 *)(uVar10 - 0x17);
      *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(uVar10 - 0x18);
      *(undefined8 *)(param_1 + 0xd8) = uVar16;
      *(undefined8 *)(param_1 + 0xe9) = uVar18;
      *(undefined8 *)(param_1 + 0xe1) = uVar17;
    }
    FUN_00890f48(uVar10 - 0xf8,&local_270);
    *(ulong *)(uVar10 - 0x18) = CONCAT71(local_18f,uStack_190);
    *(undefined1 **)(uVar10 - 0x20) = puStack_198;
    *(ulong *)(uVar10 - 0xf) = CONCAT17(uStack_180,uStack_187);
    *(ulong *)(uVar10 - 0x17) = CONCAT17(uStack_188,local_18f);
    FUN_00890cb8(&local_270);
    param_4 = 0;
    param_3 = param_3 + -1;
  } while( true );
  do {
    uVar15 = uVar10;
    if (*(int *)(uVar12 + 0xc) < *(int *)(uVar12 + 0x104)) {
      puStack_158 = &DAT_aaaaaaaaaaaaaaaa;
      local_160 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_150 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
      local_140 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_130 = &DAT_aaaaaaaaaaaaaaaa;
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
      uStack_88 = 0xaa;
      uStack_87 = 0xaaaaaaaaaaaaaa;
      uStack_90 = 0xaa;
      local_8f = 0xaaaaaaaaaaaaaa;
      uStack_168 = &DAT_aaaaaaaaaaaaaaaa;
      local_170 = &DAT_aaaaaaaaaaaaaaaa;
      uStack_80 = 0xaa;
      uStack_7f = 0xaaaaaaaaaaaaaa;
      FUN_00890aa0(&local_170,uVar15);
      puStack_98 = *(undefined1 **)(uVar12 + 0x1d0);
      uStack_87 = (undefined7)*(undefined8 *)(uVar12 + 0x1e1);
      uStack_80 = (undefined1)((ulong)*(undefined8 *)(uVar12 + 0x1e1) >> 0x38);
      uStack_88 = (undefined1)((ulong)*(undefined8 *)(uVar12 + 0x1d9) >> 0x38);
      uStack_90 = (undefined1)*(undefined8 *)(uVar12 + 0x1d8);
      local_8f = (undefined7)((ulong)*(undefined8 *)(uVar12 + 0x1d8) >> 8);
      lVar8 = lVar11;
      do {
        lVar3 = param_1 + lVar8;
        FUN_00890f48(lVar3 + 0xf8,param_1 + lVar8);
        *(undefined8 *)(lVar3 + 0x1d8) = *(undefined8 *)(lVar3 + 0xe0);
        *(undefined8 *)(lVar3 + 0x1d0) = *(undefined8 *)(lVar3 + 0xd8);
        *(undefined8 *)(lVar3 + 0x1e1) = *(undefined8 *)(lVar3 + 0xe9);
        *(undefined8 *)(lVar3 + 0x1d9) = *(undefined8 *)(lVar3 + 0xe1);
        uVar10 = param_1;
        if (lVar8 == 0) goto LAB_00b83b44;
        lVar8 = lVar8 + -0xf8;
      } while (*(int *)(lVar3 + -0xec) < uStack_168._4_4_);
      uVar10 = param_1 + lVar8 + 0xf8;
LAB_00b83b44:
      FUN_00890f48(uVar10,&local_170);
      *(ulong *)(lVar3 + 0xe0) = CONCAT71(local_8f,uStack_90);
      *(undefined1 **)(lVar3 + 0xd8) = puStack_98;
      *(ulong *)(lVar3 + 0xe9) = CONCAT17(uStack_80,uStack_87);
      *(ulong *)(lVar3 + 0xe1) = CONCAT17(uStack_88,local_8f);
      FUN_00890cb8(&local_170);
    }
    lVar11 = lVar11 + 0xf8;
    uVar10 = uVar15 + 0xf8;
    uVar12 = uVar15;
  } while (uVar15 + 0xf8 != param_2);
  goto LAB_00b840e0;
LAB_00b8384c:
  param_2 = uVar10 - 0xf8;
  if ((uVar12 & 1) != 0) goto LAB_00b840e0;
  goto LAB_00b832a0;
LAB_00b83c68:
  do {
    if (uVar15 <= uVar9) {
      uVar4 = (uVar15 & 0x3fffffffffffffff) << 1 | 1;
      uVar13 = uVar15 * 2 + 2;
      uVar14 = uVar4;
      if ((uVar13 < uVar10) &&
         (uVar14 = uVar13,
         *(int *)(param_1 + uVar4 * 0xf8 + 0xc) <= *(int *)(param_1 + uVar13 * 0xf8 + 0xc))) {
        uVar14 = uVar4;
      }
      lVar11 = param_1 + uVar15 * 0xf8;
      if (*(int *)(param_1 + uVar14 * 0xf8 + 0xc) <= *(int *)(lVar11 + 0xc)) {
        puStack_158 = &DAT_aaaaaaaaaaaaaaaa;
        local_160 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_150 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
        local_140 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_130 = &DAT_aaaaaaaaaaaaaaaa;
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
        uStack_88 = 0xaa;
        uStack_87 = 0xaaaaaaaaaaaaaa;
        uStack_90 = 0xaa;
        local_8f = 0xaaaaaaaaaaaaaa;
        uStack_168 = &DAT_aaaaaaaaaaaaaaaa;
        local_170 = &DAT_aaaaaaaaaaaaaaaa;
        uStack_80 = 0xaa;
        uStack_7f = 0xaaaaaaaaaaaaaa;
        FUN_00890aa0(&local_170,lVar11);
        puStack_98 = *(undefined1 **)(lVar11 + 0xd8);
        uStack_87 = (undefined7)*(undefined8 *)(lVar11 + 0xe9);
        uStack_80 = (undefined1)((ulong)*(undefined8 *)(lVar11 + 0xe9) >> 0x38);
        uStack_88 = (undefined1)((ulong)*(undefined8 *)(lVar11 + 0xe1) >> 0x38);
        uStack_90 = (undefined1)*(undefined8 *)(lVar11 + 0xe0);
        local_8f = (undefined7)((ulong)*(undefined8 *)(lVar11 + 0xe0) >> 8);
        uVar13 = uVar15;
        do {
          lVar11 = param_1 + uVar14 * 0xf8;
          lVar8 = param_1 + uVar13 * 0xf8;
          FUN_00890f48(lVar8,lVar11);
          uVar16 = *(undefined8 *)(lVar11 + 0xd8);
          uVar18 = *(undefined8 *)(lVar11 + 0xe9);
          uVar17 = *(undefined8 *)(lVar11 + 0xe1);
          *(undefined8 *)(lVar8 + 0xe0) = *(undefined8 *)(lVar11 + 0xe0);
          *(undefined8 *)(lVar8 + 0xd8) = uVar16;
          *(undefined8 *)(lVar8 + 0xe9) = uVar18;
          *(undefined8 *)(lVar8 + 0xe1) = uVar17;
          if ((long)uVar9 < (long)uVar14) break;
          uVar4 = (uVar14 & 0x3fffffffffffffff) << 1 | 1;
          uVar13 = uVar14 * 2 + 2;
          uVar7 = uVar4;
          if (((long)uVar13 < (long)uVar10) &&
             (uVar7 = uVar13,
             *(int *)(param_1 + uVar4 * 0xf8 + 0xc) <= *(int *)(param_1 + uVar13 * 0xf8 + 0xc))) {
            uVar7 = uVar4;
          }
          uVar13 = uVar14;
          uVar14 = uVar7;
        } while (*(int *)(param_1 + uVar7 * 0xf8 + 0xc) <= uStack_168._4_4_);
        FUN_00890f48(lVar11,&local_170);
        *(ulong *)(lVar11 + 0xe0) = CONCAT71(local_8f,uStack_90);
        *(undefined1 **)(lVar11 + 0xd8) = puStack_98;
        *(ulong *)(lVar11 + 0xe9) = CONCAT17(uStack_80,uStack_87);
        *(ulong *)(lVar11 + 0xe1) = CONCAT17(uStack_88,local_8f);
        FUN_00890cb8(&local_170);
      }
    }
    bVar5 = uVar15 != 0;
    uVar15 = uVar15 - 1;
  } while (bVar5);
  lVar11 = (uVar12 >> 3) * -0x1084210842108421;
  do {
    puStack_258 = &DAT_aaaaaaaaaaaaaaaa;
    local_260 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_248 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_250 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_238 = &DAT_aaaaaaaaaaaaaaaa;
    local_240 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_228 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_230 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_218 = &DAT_aaaaaaaaaaaaaaaa;
    local_220 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_208 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_210 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_1f8 = &DAT_aaaaaaaaaaaaaaaa;
    local_200 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_1e8 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_1f0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_1d8 = &DAT_aaaaaaaaaaaaaaaa;
    local_1e0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_1c8 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_1d0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_1b8 = &DAT_aaaaaaaaaaaaaaaa;
    local_1c0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_1a8 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_1b0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_198 = &DAT_aaaaaaaaaaaaaaaa;
    local_1a0 = &DAT_aaaaaaaaaaaaaaaa;
    uStack_188 = 0xaa;
    uStack_187 = 0xaaaaaaaaaaaaaa;
    uStack_190 = 0xaa;
    local_18f = 0xaaaaaaaaaaaaaa;
    uStack_268 = &DAT_aaaaaaaaaaaaaaaa;
    local_270 = &DAT_aaaaaaaaaaaaaaaa;
    uStack_180 = 0xaa;
    uStack_17f = 0xaaaaaaaaaaaaaa;
    FUN_00890aa0(&local_270,param_1);
    puStack_198 = *(undefined1 **)(param_1 + 0xd8);
    uVar12 = 0;
    uStack_187 = (undefined7)*(undefined8 *)(param_1 + 0xe9);
    uStack_180 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0xe9) >> 0x38);
    uStack_188 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0xe1) >> 0x38);
    uStack_190 = (undefined1)*(undefined8 *)(param_1 + 0xe0);
    local_18f = (undefined7)((ulong)*(undefined8 *)(param_1 + 0xe0) >> 8);
    uVar10 = param_1;
    do {
      lVar8 = uVar10 + uVar12 * 0xf8;
      uVar9 = uVar12 << 1 | 1;
      uVar15 = uVar12 * 2 + 2;
      uVar13 = lVar8 + 0xf8U;
      uVar12 = uVar9;
      if (((long)uVar15 < lVar11) &&
         (uVar13 = lVar8 + 0x1f0, uVar12 = uVar15,
         *(int *)(lVar8 + 0x104) <= *(int *)(lVar8 + 0x1fc))) {
        uVar13 = lVar8 + 0xf8U;
        uVar12 = uVar9;
      }
      FUN_00890f48(uVar10,uVar13);
      uVar16 = *(undefined8 *)(uVar13 + 0xd8);
      uVar18 = *(undefined8 *)(uVar13 + 0xe9);
      uVar17 = *(undefined8 *)(uVar13 + 0xe1);
      *(undefined8 *)(uVar10 + 0xe0) = *(undefined8 *)(uVar13 + 0xe0);
      *(undefined8 *)(uVar10 + 0xd8) = uVar16;
      *(undefined8 *)(uVar10 + 0xe9) = uVar18;
      *(undefined8 *)(uVar10 + 0xe1) = uVar17;
      uVar10 = uVar13;
    } while ((long)uVar12 <= (long)(lVar11 - 2U >> 1));
    if (uVar13 == param_2 - 0xf8) {
      FUN_00890f48(uVar13,&local_270);
      *(ulong *)(uVar13 + 0xe0) = CONCAT71(local_18f,uStack_190);
      *(undefined1 **)(uVar13 + 0xd8) = puStack_198;
      *(ulong *)(uVar13 + 0xe9) = CONCAT17(uStack_180,uStack_187);
      *(ulong *)(uVar13 + 0xe1) = CONCAT17(uStack_188,local_18f);
    }
    else {
      FUN_00890f48(uVar13,param_2 - 0xf8);
      uVar16 = *(undefined8 *)(param_2 - 0x20);
      uVar18 = *(undefined8 *)(param_2 - 0xf);
      uVar17 = *(undefined8 *)(param_2 - 0x17);
      *(undefined8 *)(uVar13 + 0xe0) = *(undefined8 *)(param_2 - 0x18);
      *(undefined8 *)(uVar13 + 0xd8) = uVar16;
      *(undefined8 *)(uVar13 + 0xe9) = uVar18;
      *(undefined8 *)(uVar13 + 0xe1) = uVar17;
      FUN_00890f48(param_2 - 0xf8,&local_270);
      uVar10 = (uVar13 - param_1) + 0xf8;
      *(ulong *)(param_2 - 0x18) = CONCAT71(local_18f,uStack_190);
      *(undefined1 **)(param_2 - 0x20) = puStack_198;
      *(ulong *)(param_2 - 0xf) = CONCAT17(uStack_180,uStack_187);
      *(ulong *)(param_2 - 0x17) = CONCAT17(uStack_188,local_18f);
      if (0xf8 < (long)uVar10) {
        uVar12 = (uVar10 >> 3) * -0x1084210842108421 - 2 >> 1;
        uVar10 = param_1 + uVar12 * 0xf8;
        if (*(int *)(uVar13 + 0xc) < *(int *)(uVar10 + 0xc)) {
          puStack_158 = &DAT_aaaaaaaaaaaaaaaa;
          local_160 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_150 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
          local_140 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_130 = &DAT_aaaaaaaaaaaaaaaa;
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
          uStack_88 = 0xaa;
          uStack_87 = 0xaaaaaaaaaaaaaa;
          uStack_90 = 0xaa;
          local_8f = 0xaaaaaaaaaaaaaa;
          uStack_168 = &DAT_aaaaaaaaaaaaaaaa;
          local_170 = &DAT_aaaaaaaaaaaaaaaa;
          uStack_80 = 0xaa;
          uStack_7f = 0xaaaaaaaaaaaaaa;
          FUN_00890aa0(&local_170,uVar13);
          puStack_98 = *(undefined1 **)(uVar13 + 0xd8);
          uStack_87 = (undefined7)*(undefined8 *)(uVar13 + 0xe9);
          uStack_80 = (undefined1)((ulong)*(undefined8 *)(uVar13 + 0xe9) >> 0x38);
          uStack_88 = (undefined1)((ulong)*(undefined8 *)(uVar13 + 0xe1) >> 0x38);
          uStack_90 = (undefined1)*(undefined8 *)(uVar13 + 0xe0);
          local_8f = (undefined7)((ulong)*(undefined8 *)(uVar13 + 0xe0) >> 8);
          do {
            uVar15 = uVar10;
            FUN_00890f48(uVar13,uVar15);
            uVar16 = *(undefined8 *)(uVar15 + 0xd8);
            uVar18 = *(undefined8 *)(uVar15 + 0xe9);
            uVar17 = *(undefined8 *)(uVar15 + 0xe1);
            *(undefined8 *)(uVar13 + 0xe0) = *(undefined8 *)(uVar15 + 0xe0);
            *(undefined8 *)(uVar13 + 0xd8) = uVar16;
            *(undefined8 *)(uVar13 + 0xe9) = uVar18;
            *(undefined8 *)(uVar13 + 0xe1) = uVar17;
            if (uVar12 == 0) break;
            uVar12 = uVar12 - 1 >> 1;
            uVar10 = param_1 + uVar12 * 0xf8;
            uVar13 = uVar15;
          } while (uStack_168._4_4_ < *(int *)(uVar10 + 0xc));
          FUN_00890f48(uVar15,&local_170);
          *(ulong *)(uVar15 + 0xe0) = CONCAT71(local_8f,uStack_90);
          *(undefined1 **)(uVar15 + 0xd8) = puStack_98;
          *(ulong *)(uVar15 + 0xe9) = CONCAT17(uStack_80,uStack_87);
          *(ulong *)(uVar15 + 0xe1) = CONCAT17(uStack_88,local_8f);
          FUN_00890cb8(&local_170);
        }
      }
    }
    FUN_00890cb8(&local_270);
    bVar5 = 2 < lVar11;
    param_2 = param_2 - 0xf8;
    lVar11 = lVar11 + -1;
  } while (bVar5);
LAB_00b840e0:
  if (*(long *)(lVar6 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00b841a8  FUN_00b841a8 =====

void FUN_00b841a8(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *local_140;
  undefined1 *puStack_138;
  undefined1 *local_130;
  undefined1 *puStack_128;
  undefined1 *puStack_120;
  undefined1 *puStack_118;
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
  undefined1 *puStack_c0;
  undefined1 *puStack_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 uStack_60;
  undefined7 local_5f;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined7 uStack_4f;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = *param_1;
  lVar3 = *param_2;
  uStack_50 = 0xaa;
  uStack_4f = 0xaaaaaaaaaaaaaa;
  puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
  local_130 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_120 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
  local_110 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_100 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
  local_f0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
  local_d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_58 = 0xaa;
  uStack_57 = 0xaaaaaaaaaaaaaa;
  uStack_60 = 0xaa;
  local_5f = 0xaaaaaaaaaaaaaa;
  puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
  local_140 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00890aa0(&local_140,lVar2);
  puStack_68 = *(undefined1 **)(lVar2 + 0xd8);
  uStack_57 = (undefined7)*(undefined8 *)(lVar2 + 0xe9);
  uStack_50 = (undefined1)((ulong)*(undefined8 *)(lVar2 + 0xe9) >> 0x38);
  uStack_58 = (undefined1)((ulong)*(undefined8 *)(lVar2 + 0xe1) >> 0x38);
  uStack_60 = (undefined1)*(undefined8 *)(lVar2 + 0xe0);
  local_5f = (undefined7)((ulong)*(undefined8 *)(lVar2 + 0xe0) >> 8);
  FUN_00890f48(lVar2,lVar3);
  uVar4 = *(undefined8 *)(lVar3 + 0xd8);
  uVar6 = *(undefined8 *)(lVar3 + 0xe9);
  uVar5 = *(undefined8 *)(lVar3 + 0xe1);
  *(undefined8 *)(lVar2 + 0xe0) = *(undefined8 *)(lVar3 + 0xe0);
  *(undefined8 *)(lVar2 + 0xd8) = uVar4;
  *(undefined8 *)(lVar2 + 0xe9) = uVar6;
  *(undefined8 *)(lVar2 + 0xe1) = uVar5;
  FUN_00890f48(lVar3,&local_140);
  *(ulong *)(lVar3 + 0xe0) = CONCAT71(local_5f,uStack_60);
  *(undefined1 **)(lVar3 + 0xd8) = puStack_68;
  *(ulong *)(lVar3 + 0xe9) = CONCAT17(uStack_50,uStack_57);
  *(ulong *)(lVar3 + 0xe1) = CONCAT17(uStack_58,local_5f);
  FUN_00890cb8(&local_140);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00b84290  FUN_00b84290 =====

void FUN_00b84290(long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *local_140;
  undefined1 *puStack_138;
  undefined1 *local_130;
  undefined1 *puStack_128;
  undefined1 *puStack_120;
  undefined1 *puStack_118;
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
  undefined1 *puStack_c0;
  undefined1 *puStack_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 uStack_60;
  undefined7 local_5f;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined7 uStack_4f;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  iVar1 = *(int *)(param_2 + 0xc);
  if (*(int *)(param_1 + 0xc) < iVar1) {
    if (iVar1 < *(int *)(param_3 + 0xc)) {
      puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
      local_130 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_120 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
      local_110 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_100 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
      local_f0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_e0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
      local_d0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_c0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
      local_b0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
      local_90 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
      local_70 = &DAT_aaaaaaaaaaaaaaaa;
      uStack_58 = 0xaa;
      uStack_57 = 0xaaaaaaaaaaaaaa;
      uStack_60 = 0xaa;
      local_5f = 0xaaaaaaaaaaaaaa;
      puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
      local_140 = &DAT_aaaaaaaaaaaaaaaa;
      uStack_50 = 0xaa;
      uStack_4f = 0xaaaaaaaaaaaaaa;
      FUN_00890aa0(&local_140,param_1);
      puStack_68 = *(undefined1 **)(param_1 + 0xd8);
      uStack_60 = (undefined1)*(undefined8 *)(param_1 + 0xe0);
      uStack_57 = (undefined7)*(undefined8 *)(param_1 + 0xe9);
      uStack_50 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0xe9) >> 0x38);
      local_5f = (undefined7)*(undefined8 *)(param_1 + 0xe1);
      uStack_58 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0xe1) >> 0x38);
      FUN_00890f48(param_1,param_3);
      uVar3 = *(undefined8 *)(param_3 + 0xd8);
      uVar5 = *(undefined8 *)(param_3 + 0xe9);
      uVar4 = *(undefined8 *)(param_3 + 0xe1);
      *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_3 + 0xe0);
      *(undefined8 *)(param_1 + 0xd8) = uVar3;
      *(undefined8 *)(param_1 + 0xe9) = uVar5;
      *(undefined8 *)(param_1 + 0xe1) = uVar4;
    }
    else {
      puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
      local_130 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_120 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
      local_110 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_100 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
      local_f0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_e0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
      local_d0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_c0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
      local_b0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
      local_90 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
      local_70 = &DAT_aaaaaaaaaaaaaaaa;
      uStack_58 = 0xaa;
      uStack_57 = 0xaaaaaaaaaaaaaa;
      uStack_60 = 0xaa;
      local_5f = 0xaaaaaaaaaaaaaa;
      puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
      local_140 = &DAT_aaaaaaaaaaaaaaaa;
      uStack_50 = 0xaa;
      uStack_4f = 0xaaaaaaaaaaaaaa;
      FUN_00890aa0(&local_140,param_1);
      puStack_68 = *(undefined1 **)(param_1 + 0xd8);
      uStack_60 = (undefined1)*(undefined8 *)(param_1 + 0xe0);
      uStack_57 = (undefined7)*(undefined8 *)(param_1 + 0xe9);
      uStack_50 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0xe9) >> 0x38);
      local_5f = (undefined7)*(undefined8 *)(param_1 + 0xe1);
      uStack_58 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0xe1) >> 0x38);
      FUN_00890f48(param_1,param_2);
      uVar3 = *(undefined8 *)(param_2 + 0xd8);
      uVar5 = *(undefined8 *)(param_2 + 0xe9);
      uVar4 = *(undefined8 *)(param_2 + 0xe1);
      *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_2 + 0xe0);
      *(undefined8 *)(param_1 + 0xd8) = uVar3;
      *(undefined8 *)(param_1 + 0xe9) = uVar5;
      *(undefined8 *)(param_1 + 0xe1) = uVar4;
      FUN_00890f48(param_2,&local_140);
      *(ulong *)(param_2 + 0xe0) = CONCAT71(local_5f,uStack_60);
      *(undefined1 **)(param_2 + 0xd8) = puStack_68;
      *(ulong *)(param_2 + 0xe9) = CONCAT17(uStack_50,uStack_57);
      *(ulong *)(param_2 + 0xe1) = CONCAT17(uStack_58,local_5f);
      FUN_00890cb8(&local_140);
      if (*(int *)(param_3 + 0xc) <= *(int *)(param_2 + 0xc)) goto LAB_00b84578;
      puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
      local_130 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_120 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
      local_110 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_100 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
      local_f0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_e0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
      local_d0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_c0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
      local_b0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
      local_90 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
      local_70 = &DAT_aaaaaaaaaaaaaaaa;
      uStack_58 = 0xaa;
      uStack_57 = 0xaaaaaaaaaaaaaa;
      uStack_60 = 0xaa;
      local_5f = 0xaaaaaaaaaaaaaa;
      puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
      local_140 = &DAT_aaaaaaaaaaaaaaaa;
      uStack_50 = 0xaa;
      uStack_4f = 0xaaaaaaaaaaaaaa;
      FUN_00890aa0(&local_140,param_2);
      puStack_68 = *(undefined1 **)(param_2 + 0xd8);
      uStack_60 = (undefined1)*(undefined8 *)(param_2 + 0xe0);
      uStack_57 = (undefined7)*(undefined8 *)(param_2 + 0xe9);
      uStack_50 = (undefined1)((ulong)*(undefined8 *)(param_2 + 0xe9) >> 0x38);
      local_5f = (undefined7)*(undefined8 *)(param_2 + 0xe1);
      uStack_58 = (undefined1)((ulong)*(undefined8 *)(param_2 + 0xe1) >> 0x38);
      FUN_00890f48(param_2,param_3);
      uVar3 = *(undefined8 *)(param_3 + 0xd8);
      uVar5 = *(undefined8 *)(param_3 + 0xe9);
      uVar4 = *(undefined8 *)(param_3 + 0xe1);
      *(undefined8 *)(param_2 + 0xe0) = *(undefined8 *)(param_3 + 0xe0);
      *(undefined8 *)(param_2 + 0xd8) = uVar3;
      *(undefined8 *)(param_2 + 0xe9) = uVar5;
      *(undefined8 *)(param_2 + 0xe1) = uVar4;
    }
    FUN_00890f48(param_3,&local_140);
    *(ulong *)(param_3 + 0xe0) = CONCAT71(local_5f,uStack_60);
    *(undefined1 **)(param_3 + 0xd8) = puStack_68;
    *(ulong *)(param_3 + 0xe9) = CONCAT17(uStack_50,uStack_57);
    *(ulong *)(param_3 + 0xe1) = CONCAT17(uStack_58,local_5f);
  }
  else {
    if (*(int *)(param_3 + 0xc) <= iVar1) goto LAB_00b84578;
    puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
    local_130 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_120 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
    local_110 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_100 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
    local_f0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_e0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
    local_d0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_c0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
    local_b0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
    local_90 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
    local_70 = &DAT_aaaaaaaaaaaaaaaa;
    uStack_58 = 0xaa;
    uStack_57 = 0xaaaaaaaaaaaaaa;
    uStack_60 = 0xaa;
    local_5f = 0xaaaaaaaaaaaaaa;
    puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
    local_140 = &DAT_aaaaaaaaaaaaaaaa;
    uStack_50 = 0xaa;
    uStack_4f = 0xaaaaaaaaaaaaaa;
    FUN_00890aa0(&local_140,param_2);
    puStack_68 = *(undefined1 **)(param_2 + 0xd8);
    uStack_60 = (undefined1)*(undefined8 *)(param_2 + 0xe0);
    uStack_57 = (undefined7)*(undefined8 *)(param_2 + 0xe9);
    uStack_50 = (undefined1)((ulong)*(undefined8 *)(param_2 + 0xe9) >> 0x38);
    local_5f = (undefined7)*(undefined8 *)(param_2 + 0xe1);
    uStack_58 = (undefined1)((ulong)*(undefined8 *)(param_2 + 0xe1) >> 0x38);
    FUN_00890f48(param_2,param_3);
    uVar3 = *(undefined8 *)(param_3 + 0xd8);
    uVar5 = *(undefined8 *)(param_3 + 0xe9);
    uVar4 = *(undefined8 *)(param_3 + 0xe1);
    *(undefined8 *)(param_2 + 0xe0) = *(undefined8 *)(param_3 + 0xe0);
    *(undefined8 *)(param_2 + 0xd8) = uVar3;
    *(undefined8 *)(param_2 + 0xe9) = uVar5;
    *(undefined8 *)(param_2 + 0xe1) = uVar4;
    FUN_00890f48(param_3,&local_140);
    *(ulong *)(param_3 + 0xe0) = CONCAT71(local_5f,uStack_60);
    *(undefined1 **)(param_3 + 0xd8) = puStack_68;
    *(ulong *)(param_3 + 0xe9) = CONCAT17(uStack_50,uStack_57);
    *(ulong *)(param_3 + 0xe1) = CONCAT17(uStack_58,local_5f);
    FUN_00890cb8(&local_140);
    if (*(int *)(param_2 + 0xc) <= *(int *)(param_1 + 0xc)) goto LAB_00b84578;
    puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
    local_130 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_120 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
    local_110 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_100 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
    local_f0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_e0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
    local_d0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_c0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
    local_b0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
    local_90 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
    local_70 = &DAT_aaaaaaaaaaaaaaaa;
    uStack_58 = 0xaa;
    uStack_57 = 0xaaaaaaaaaaaaaa;
    uStack_60 = 0xaa;
    local_5f = 0xaaaaaaaaaaaaaa;
    puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
    local_140 = &DAT_aaaaaaaaaaaaaaaa;
    uStack_50 = 0xaa;
    uStack_4f = 0xaaaaaaaaaaaaaa;
    FUN_00890aa0(&local_140,param_1);
    puStack_68 = *(undefined1 **)(param_1 + 0xd8);
    uStack_60 = (undefined1)*(undefined8 *)(param_1 + 0xe0);
    uStack_57 = (undefined7)*(undefined8 *)(param_1 + 0xe9);
    uStack_50 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0xe9) >> 0x38);
    local_5f = (undefined7)*(undefined8 *)(param_1 + 0xe1);
    uStack_58 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0xe1) >> 0x38);
    FUN_00890f48(param_1,param_2);
    uVar3 = *(undefined8 *)(param_2 + 0xd8);
    uVar5 = *(undefined8 *)(param_2 + 0xe9);
    uVar4 = *(undefined8 *)(param_2 + 0xe1);
    *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_2 + 0xe0);
    *(undefined8 *)(param_1 + 0xd8) = uVar3;
    *(undefined8 *)(param_1 + 0xe9) = uVar5;
    *(undefined8 *)(param_1 + 0xe1) = uVar4;
    FUN_00890f48(param_2,&local_140);
    *(ulong *)(param_2 + 0xe0) = CONCAT71(local_5f,uStack_60);
    *(undefined1 **)(param_2 + 0xd8) = puStack_68;
    *(ulong *)(param_2 + 0xe9) = CONCAT17(uStack_50,uStack_57);
    *(ulong *)(param_2 + 0xe1) = CONCAT17(uStack_58,local_5f);
  }
  FUN_00890cb8(&local_140);
LAB_00b84578:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00b845a8  FUN_00b845a8 =====

void FUN_00b845a8(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *local_150;
  undefined1 *puStack_148;
  undefined1 *local_140;
  undefined1 *puStack_138;
  undefined1 *puStack_130;
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
  undefined1 uStack_70;
  undefined7 local_6f;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined7 uStack_5f;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_00b84290();
  if (*(int *)(param_3 + 0xc) < *(int *)(param_4 + 0xc)) {
    puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
    local_140 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_130 = &DAT_aaaaaaaaaaaaaaaa;
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
    uStack_68 = 0xaa;
    uStack_67 = 0xaaaaaaaaaaaaaa;
    uStack_70 = 0xaa;
    local_6f = 0xaaaaaaaaaaaaaa;
    puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
    local_150 = &DAT_aaaaaaaaaaaaaaaa;
    uStack_60 = 0xaa;
    uStack_5f = 0xaaaaaaaaaaaaaa;
    FUN_00890aa0(&local_150,param_3);
    puStack_78 = *(undefined1 **)(param_3 + 0xd8);
    uStack_70 = (undefined1)*(undefined8 *)(param_3 + 0xe0);
    uStack_67 = (undefined7)*(undefined8 *)(param_3 + 0xe9);
    uStack_60 = (undefined1)((ulong)*(undefined8 *)(param_3 + 0xe9) >> 0x38);
    local_6f = (undefined7)*(undefined8 *)(param_3 + 0xe1);
    uStack_68 = (undefined1)((ulong)*(undefined8 *)(param_3 + 0xe1) >> 0x38);
    FUN_00890f48(param_3,param_4);
    uVar2 = *(undefined8 *)(param_4 + 0xd8);
    uVar4 = *(undefined8 *)(param_4 + 0xe9);
    uVar3 = *(undefined8 *)(param_4 + 0xe1);
    *(undefined8 *)(param_3 + 0xe0) = *(undefined8 *)(param_4 + 0xe0);
    *(undefined8 *)(param_3 + 0xd8) = uVar2;
    *(undefined8 *)(param_3 + 0xe9) = uVar4;
    *(undefined8 *)(param_3 + 0xe1) = uVar3;
    FUN_00890f48(param_4,&local_150);
    *(ulong *)(param_4 + 0xe0) = CONCAT71(local_6f,uStack_70);
    *(undefined1 **)(param_4 + 0xd8) = puStack_78;
    *(ulong *)(param_4 + 0xe9) = CONCAT17(uStack_60,uStack_67);
    *(ulong *)(param_4 + 0xe1) = CONCAT17(uStack_68,local_6f);
    FUN_00890cb8(&local_150);
    if (*(int *)(param_2 + 0xc) < *(int *)(param_3 + 0xc)) {
      puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
      local_140 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_130 = &DAT_aaaaaaaaaaaaaaaa;
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
      uStack_68 = 0xaa;
      uStack_67 = 0xaaaaaaaaaaaaaa;
      uStack_70 = 0xaa;
      local_6f = 0xaaaaaaaaaaaaaa;
      puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
      local_150 = &DAT_aaaaaaaaaaaaaaaa;
      uStack_60 = 0xaa;
      uStack_5f = 0xaaaaaaaaaaaaaa;
      FUN_00890aa0(&local_150,param_2);
      puStack_78 = *(undefined1 **)(param_2 + 0xd8);
      uStack_70 = (undefined1)*(undefined8 *)(param_2 + 0xe0);
      uStack_67 = (undefined7)*(undefined8 *)(param_2 + 0xe9);
      uStack_60 = (undefined1)((ulong)*(undefined8 *)(param_2 + 0xe9) >> 0x38);
      local_6f = (undefined7)*(undefined8 *)(param_2 + 0xe1);
      uStack_68 = (undefined1)((ulong)*(undefined8 *)(param_2 + 0xe1) >> 0x38);
      FUN_00890f48(param_2,param_3);
      uVar2 = *(undefined8 *)(param_3 + 0xd8);
      uVar4 = *(undefined8 *)(param_3 + 0xe9);
      uVar3 = *(undefined8 *)(param_3 + 0xe1);
      *(undefined8 *)(param_2 + 0xe0) = *(undefined8 *)(param_3 + 0xe0);
      *(undefined8 *)(param_2 + 0xd8) = uVar2;
      *(undefined8 *)(param_2 + 0xe9) = uVar4;
      *(undefined8 *)(param_2 + 0xe1) = uVar3;
      FUN_00890f48(param_3,&local_150);
      *(ulong *)(param_3 + 0xe0) = CONCAT71(local_6f,uStack_70);
      *(undefined1 **)(param_3 + 0xd8) = puStack_78;
      *(ulong *)(param_3 + 0xe9) = CONCAT17(uStack_60,uStack_67);
      *(ulong *)(param_3 + 0xe1) = CONCAT17(uStack_68,local_6f);
      FUN_00890cb8(&local_150);
      if (*(int *)(param_1 + 0xc) < *(int *)(param_2 + 0xc)) {
        puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
        local_140 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_130 = &DAT_aaaaaaaaaaaaaaaa;
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
        uStack_68 = 0xaa;
        uStack_67 = 0xaaaaaaaaaaaaaa;
        uStack_70 = 0xaa;
        local_6f = 0xaaaaaaaaaaaaaa;
        puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
        local_150 = &DAT_aaaaaaaaaaaaaaaa;
        uStack_60 = 0xaa;
        uStack_5f = 0xaaaaaaaaaaaaaa;
        FUN_00890aa0(&local_150,param_1);
        puStack_78 = *(undefined1 **)(param_1 + 0xd8);
        uStack_70 = (undefined1)*(undefined8 *)(param_1 + 0xe0);
        uStack_67 = (undefined7)*(undefined8 *)(param_1 + 0xe9);
        uStack_60 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0xe9) >> 0x38);
        local_6f = (undefined7)*(undefined8 *)(param_1 + 0xe1);
        uStack_68 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0xe1) >> 0x38);
        FUN_00890f48(param_1,param_2);
        uVar2 = *(undefined8 *)(param_2 + 0xd8);
        uVar4 = *(undefined8 *)(param_2 + 0xe9);
        uVar3 = *(undefined8 *)(param_2 + 0xe1);
        *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_2 + 0xe0);
        *(undefined8 *)(param_1 + 0xd8) = uVar2;
        *(undefined8 *)(param_1 + 0xe9) = uVar4;
        *(undefined8 *)(param_1 + 0xe1) = uVar3;
        FUN_00890f48(param_2,&local_150);
        *(ulong *)(param_2 + 0xe0) = CONCAT71(local_6f,uStack_70);
        *(undefined1 **)(param_2 + 0xd8) = puStack_78;
        *(ulong *)(param_2 + 0xe9) = CONCAT17(uStack_60,uStack_67);
        *(ulong *)(param_2 + 0xe1) = CONCAT17(uStack_68,local_6f);
        FUN_00890cb8(&local_150);
      }
    }
  }
  if (*(int *)(param_4 + 0xc) < *(int *)(param_5 + 0xc)) {
    puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
    local_140 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_130 = &DAT_aaaaaaaaaaaaaaaa;
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
    uStack_68 = 0xaa;
    uStack_67 = 0xaaaaaaaaaaaaaa;
    uStack_70 = 0xaa;
    local_6f = 0xaaaaaaaaaaaaaa;
    puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
    local_150 = &DAT_aaaaaaaaaaaaaaaa;
    uStack_60 = 0xaa;
    uStack_5f = 0xaaaaaaaaaaaaaa;
    FUN_00890aa0(&local_150,param_4);
    puStack_78 = *(undefined1 **)(param_4 + 0xd8);
    uStack_70 = (undefined1)*(undefined8 *)(param_4 + 0xe0);
    uStack_67 = (undefined7)*(undefined8 *)(param_4 + 0xe9);
    uStack_60 = (undefined1)((ulong)*(undefined8 *)(param_4 + 0xe9) >> 0x38);
    local_6f = (undefined7)*(undefined8 *)(param_4 + 0xe1);
    uStack_68 = (undefined1)((ulong)*(undefined8 *)(param_4 + 0xe1) >> 0x38);
    FUN_00890f48(param_4,param_5);
    uVar2 = *(undefined8 *)(param_5 + 0xd8);
    uVar4 = *(undefined8 *)(param_5 + 0xe9);
    uVar3 = *(undefined8 *)(param_5 + 0xe1);
    *(undefined8 *)(param_4 + 0xe0) = *(undefined8 *)(param_5 + 0xe0);
    *(undefined8 *)(param_4 + 0xd8) = uVar2;
    *(undefined8 *)(param_4 + 0xe9) = uVar4;
    *(undefined8 *)(param_4 + 0xe1) = uVar3;
    FUN_00890f48(param_5,&local_150);
    *(ulong *)(param_5 + 0xe0) = CONCAT71(local_6f,uStack_70);
    *(undefined1 **)(param_5 + 0xd8) = puStack_78;
    *(ulong *)(param_5 + 0xe9) = CONCAT17(uStack_60,uStack_67);
    *(ulong *)(param_5 + 0xe1) = CONCAT17(uStack_68,local_6f);
    FUN_00890cb8(&local_150);
    if (*(int *)(param_3 + 0xc) < *(int *)(param_4 + 0xc)) {
      puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
      local_140 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_130 = &DAT_aaaaaaaaaaaaaaaa;
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
      uStack_68 = 0xaa;
      uStack_67 = 0xaaaaaaaaaaaaaa;
      uStack_70 = 0xaa;
      local_6f = 0xaaaaaaaaaaaaaa;
      puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
      local_150 = &DAT_aaaaaaaaaaaaaaaa;
      uStack_60 = 0xaa;
      uStack_5f = 0xaaaaaaaaaaaaaa;
      FUN_00890aa0(&local_150,param_3);
      puStack_78 = *(undefined1 **)(param_3 + 0xd8);
      uStack_70 = (undefined1)*(undefined8 *)(param_3 + 0xe0);
      uStack_67 = (undefined7)*(undefined8 *)(param_3 + 0xe9);
      uStack_60 = (undefined1)((ulong)*(undefined8 *)(param_3 + 0xe9) >> 0x38);
      local_6f = (undefined7)*(undefined8 *)(param_3 + 0xe1);
      uStack_68 = (undefined1)((ulong)*(undefined8 *)(param_3 + 0xe1) >> 0x38);
      FUN_00890f48(param_3,param_4);
      uVar2 = *(undefined8 *)(param_4 + 0xd8);
      uVar4 = *(undefined8 *)(param_4 + 0xe9);
      uVar3 = *(undefined8 *)(param_4 + 0xe1);
      *(undefined8 *)(param_3 + 0xe0) = *(undefined8 *)(param_4 + 0xe0);
      *(undefined8 *)(param_3 + 0xd8) = uVar2;
      *(undefined8 *)(param_3 + 0xe9) = uVar4;
      *(undefined8 *)(param_3 + 0xe1) = uVar3;
      FUN_00890f48(param_4,&local_150);
      *(ulong *)(param_4 + 0xe0) = CONCAT71(local_6f,uStack_70);
      *(undefined1 **)(param_4 + 0xd8) = puStack_78;
      *(ulong *)(param_4 + 0xe9) = CONCAT17(uStack_60,uStack_67);
      *(ulong *)(param_4 + 0xe1) = CONCAT17(uStack_68,local_6f);
      FUN_00890cb8(&local_150);
      if (*(int *)(param_2 + 0xc) < *(int *)(param_3 + 0xc)) {
        puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
        local_140 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_130 = &DAT_aaaaaaaaaaaaaaaa;
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
        uStack_68 = 0xaa;
        uStack_67 = 0xaaaaaaaaaaaaaa;
        uStack_70 = 0xaa;
        local_6f = 0xaaaaaaaaaaaaaa;
        puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
        local_150 = &DAT_aaaaaaaaaaaaaaaa;
        uStack_60 = 0xaa;
        uStack_5f = 0xaaaaaaaaaaaaaa;
        FUN_00890aa0(&local_150,param_2);
        puStack_78 = *(undefined1 **)(param_2 + 0xd8);
        uStack_70 = (undefined1)*(undefined8 *)(param_2 + 0xe0);
        uStack_67 = (undefined7)*(undefined8 *)(param_2 + 0xe9);
        uStack_60 = (undefined1)((ulong)*(undefined8 *)(param_2 + 0xe9) >> 0x38);
        local_6f = (undefined7)*(undefined8 *)(param_2 + 0xe1);
        uStack_68 = (undefined1)((ulong)*(undefined8 *)(param_2 + 0xe1) >> 0x38);
        FUN_00890f48(param_2,param_3);
        uVar2 = *(undefined8 *)(param_3 + 0xd8);
        uVar4 = *(undefined8 *)(param_3 + 0xe9);
        uVar3 = *(undefined8 *)(param_3 + 0xe1);
        *(undefined8 *)(param_2 + 0xe0) = *(undefined8 *)(param_3 + 0xe0);
        *(undefined8 *)(param_2 + 0xd8) = uVar2;
        *(undefined8 *)(param_2 + 0xe9) = uVar4;
        *(undefined8 *)(param_2 + 0xe1) = uVar3;
        FUN_00890f48(param_3,&local_150);
        *(ulong *)(param_3 + 0xe0) = CONCAT71(local_6f,uStack_70);
        *(undefined1 **)(param_3 + 0xd8) = puStack_78;
        *(ulong *)(param_3 + 0xe9) = CONCAT17(uStack_60,uStack_67);
        *(ulong *)(param_3 + 0xe1) = CONCAT17(uStack_68,local_6f);
        FUN_00890cb8(&local_150);
        if (*(int *)(param_1 + 0xc) < *(int *)(param_2 + 0xc)) {
          puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
          local_140 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_130 = &DAT_aaaaaaaaaaaaaaaa;
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
          uStack_68 = 0xaa;
          uStack_67 = 0xaaaaaaaaaaaaaa;
          uStack_70 = 0xaa;
          local_6f = 0xaaaaaaaaaaaaaa;
          puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
          local_150 = &DAT_aaaaaaaaaaaaaaaa;
          uStack_60 = 0xaa;
          uStack_5f = 0xaaaaaaaaaaaaaa;
          FUN_00890aa0(&local_150,param_1);
          puStack_78 = *(undefined1 **)(param_1 + 0xd8);
          uStack_70 = (undefined1)*(undefined8 *)(param_1 + 0xe0);
          uStack_67 = (undefined7)*(undefined8 *)(param_1 + 0xe9);
          uStack_60 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0xe9) >> 0x38);
          local_6f = (undefined7)*(undefined8 *)(param_1 + 0xe1);
          uStack_68 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0xe1) >> 0x38);
          FUN_00890f48(param_1,param_2);
          uVar2 = *(undefined8 *)(param_2 + 0xd8);
          uVar4 = *(undefined8 *)(param_2 + 0xe9);
          uVar3 = *(undefined8 *)(param_2 + 0xe1);
          *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_2 + 0xe0);
          *(undefined8 *)(param_1 + 0xd8) = uVar2;
          *(undefined8 *)(param_1 + 0xe9) = uVar4;
          *(undefined8 *)(param_1 + 0xe1) = uVar3;
          FUN_00890f48(param_2,&local_150);
          *(ulong *)(param_2 + 0xe0) = CONCAT71(local_6f,uStack_70);
          *(undefined1 **)(param_2 + 0xd8) = puStack_78;
          *(ulong *)(param_2 + 0xe9) = CONCAT17(uStack_60,uStack_67);
          *(ulong *)(param_2 + 0xe1) = CONCAT17(uStack_68,local_6f);
          FUN_00890cb8(&local_150);
        }
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00b84a30  FUN_00b84a30 =====

bool FUN_00b84a30(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long local_180;
  long lStack_178;
  undefined1 *local_170;
  undefined8 uStack_168;
  undefined1 *local_160;
  undefined1 *puStack_158;
  undefined1 *puStack_150;
  undefined1 *puStack_148;
  undefined1 *local_140;
  undefined1 *puStack_138;
  undefined1 *puStack_130;
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
  undefined1 uStack_90;
  undefined7 local_8f;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  long local_78;
  
  lVar2 = tpidr_el0;
  uVar5 = (param_2 - param_1 >> 3) * -0x1084210842108421;
  local_78 = *(long *)(lVar2 + 0x28);
  if ((long)uVar5 < 3) {
    if (uVar5 < 2) goto LAB_00b84e04;
    if (uVar5 == 2) {
      if (*(int *)(param_1 + 0xc) < *(int *)(param_2 + -0xec)) {
        puStack_158 = &DAT_aaaaaaaaaaaaaaaa;
        local_160 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_150 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
        local_140 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_130 = &DAT_aaaaaaaaaaaaaaaa;
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
        uStack_88 = 0xaa;
        uStack_87 = 0xaaaaaaaaaaaaaa;
        uStack_90 = 0xaa;
        local_8f = 0xaaaaaaaaaaaaaa;
        uStack_168 = &DAT_aaaaaaaaaaaaaaaa;
        local_170 = &DAT_aaaaaaaaaaaaaaaa;
        uStack_80 = 0xaa;
        uStack_7f = 0xaaaaaaaaaaaaaa;
        FUN_00890aa0(&local_170,param_1);
        puStack_98 = *(undefined1 **)(param_1 + 0xd8);
        uStack_90 = (undefined1)*(undefined8 *)(param_1 + 0xe0);
        uStack_87 = (undefined7)*(undefined8 *)(param_1 + 0xe9);
        uStack_80 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0xe9) >> 0x38);
        local_8f = (undefined7)*(undefined8 *)(param_1 + 0xe1);
        uStack_88 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0xe1) >> 0x38);
        FUN_00890f48(param_1,param_2 + -0xf8);
        uVar11 = *(undefined8 *)(param_2 + -0x20);
        uVar13 = *(undefined8 *)(param_2 + -0xf);
        uVar12 = *(undefined8 *)(param_2 + -0x17);
        *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_2 + -0x18);
        *(undefined8 *)(param_1 + 0xd8) = uVar11;
        *(undefined8 *)(param_1 + 0xe9) = uVar13;
        *(undefined8 *)(param_1 + 0xe1) = uVar12;
        FUN_00890f48(param_2 + -0xf8,&local_170);
        *(ulong *)(param_2 + -0x18) = CONCAT71(local_8f,uStack_90);
        *(undefined1 **)(param_2 + -0x20) = puStack_98;
        *(ulong *)(param_2 + -0xf) = CONCAT17(uStack_80,uStack_87);
        *(ulong *)(param_2 + -0x17) = CONCAT17(uStack_88,local_8f);
        FUN_00890cb8(&local_170);
      }
      goto LAB_00b84e04;
    }
  }
  else {
    if (uVar5 == 3) {
      FUN_00b84290(param_1,param_1 + 0xf8,param_2 + -0xf8);
      goto LAB_00b84e04;
    }
    if (uVar5 == 4) {
      local_180 = param_1 + 0xf8;
      lStack_178 = param_1;
      FUN_00b84290(param_1,param_1 + 0xf8,param_1 + 0x1f0);
      if (*(int *)(param_1 + 0x1fc) < *(int *)(param_2 + -0xec)) {
        puStack_158 = &DAT_aaaaaaaaaaaaaaaa;
        local_160 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_150 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
        local_140 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_130 = &DAT_aaaaaaaaaaaaaaaa;
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
        uStack_88 = 0xaa;
        uStack_87 = 0xaaaaaaaaaaaaaa;
        uStack_90 = 0xaa;
        local_8f = 0xaaaaaaaaaaaaaa;
        uStack_168 = &DAT_aaaaaaaaaaaaaaaa;
        local_170 = &DAT_aaaaaaaaaaaaaaaa;
        uStack_80 = 0xaa;
        uStack_7f = 0xaaaaaaaaaaaaaa;
        FUN_00890aa0(&local_170,param_1 + 0x1f0);
        puVar1 = (undefined8 *)(param_1 + 0x2c8);
        puStack_98 = (undefined1 *)*puVar1;
        uStack_90 = (undefined1)*(undefined8 *)(param_1 + 0x2d0);
        uStack_87 = (undefined7)*(undefined8 *)(param_1 + 0x2d9);
        uStack_80 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0x2d9) >> 0x38);
        local_8f = (undefined7)*(undefined8 *)(param_1 + 0x2d1);
        uStack_88 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0x2d1) >> 0x38);
        FUN_00890f48(param_1 + 0x1f0,param_2 + -0xf8);
        uVar11 = *(undefined8 *)(param_2 + -0x20);
        uVar13 = *(undefined8 *)(param_2 + -0xf);
        uVar12 = *(undefined8 *)(param_2 + -0x17);
        *(undefined8 *)(param_1 + 0x2d0) = *(undefined8 *)(param_2 + -0x18);
        *puVar1 = uVar11;
        *(undefined8 *)(param_1 + 0x2d9) = uVar13;
        *(undefined8 *)(param_1 + 0x2d1) = uVar12;
        FUN_00890f48(param_2 + -0xf8,&local_170);
        *(ulong *)(param_2 + -0x18) = CONCAT71(local_8f,uStack_90);
        *(undefined1 **)(param_2 + -0x20) = puStack_98;
        *(ulong *)(param_2 + -0xf) = CONCAT17(uStack_80,uStack_87);
        *(ulong *)(param_2 + -0x17) = CONCAT17(uStack_88,local_8f);
        FUN_00890cb8(&local_170);
        if (*(int *)(param_1 + 0x104) < *(int *)(param_1 + 0x1fc)) {
          puStack_158 = &DAT_aaaaaaaaaaaaaaaa;
          local_160 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_150 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
          local_140 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_130 = &DAT_aaaaaaaaaaaaaaaa;
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
          uStack_88 = 0xaa;
          uStack_87 = 0xaaaaaaaaaaaaaa;
          uStack_90 = 0xaa;
          local_8f = 0xaaaaaaaaaaaaaa;
          uStack_168 = &DAT_aaaaaaaaaaaaaaaa;
          local_170 = &DAT_aaaaaaaaaaaaaaaa;
          uStack_80 = 0xaa;
          uStack_7f = 0xaaaaaaaaaaaaaa;
          FUN_00890aa0(&local_170,param_1 + 0xf8);
          puStack_98 = *(undefined1 **)(param_1 + 0x1d0);
          uStack_90 = (undefined1)*(undefined8 *)(param_1 + 0x1d8);
          uStack_87 = (undefined7)*(undefined8 *)(param_1 + 0x1e1);
          uStack_80 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0x1e1) >> 0x38);
          local_8f = (undefined7)*(undefined8 *)(param_1 + 0x1d9);
          uStack_88 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0x1d9) >> 0x38);
          FUN_00890f48(param_1 + 0xf8,param_1 + 0x1f0);
          *(undefined8 *)(param_1 + 0x1d8) = *(undefined8 *)(param_1 + 0x2d0);
          *(undefined8 *)(param_1 + 0x1d0) = *puVar1;
          *(undefined8 *)(param_1 + 0x1e1) = *(undefined8 *)(param_1 + 0x2d9);
          *(undefined8 *)(param_1 + 0x1d9) = *(undefined8 *)(param_1 + 0x2d1);
          FUN_00890f48(param_1 + 0x1f0,&local_170);
          *(ulong *)(param_1 + 0x2d0) = CONCAT71(local_8f,uStack_90);
          *puVar1 = puStack_98;
          *(ulong *)(param_1 + 0x2d9) = CONCAT17(uStack_80,uStack_87);
          *(ulong *)(param_1 + 0x2d1) = CONCAT17(uStack_88,local_8f);
          FUN_00890cb8(&local_170);
          if (*(int *)(param_1 + 0xc) < *(int *)(param_1 + 0x104)) {
            FUN_00b841a8(&lStack_178,&local_180);
          }
        }
      }
      goto LAB_00b84e04;
    }
    if (uVar5 == 5) {
      FUN_00b845a8(param_1,param_1 + 0xf8,param_1 + 0x1f0,param_1 + 0x2e8,param_2 + -0xf8);
      goto LAB_00b84e04;
    }
  }
  FUN_00b84290(param_1,param_1 + 0xf8,param_1 + 0x1f0);
  if (param_1 + 0x2e8 != param_2) {
    lVar7 = 0;
    iVar8 = 0;
    lVar10 = param_1 + 0x2e8;
    lVar9 = param_1 + 0x1f0;
    do {
      lVar6 = lVar10;
      if (*(int *)(lVar9 + 0xc) < *(int *)(lVar6 + 0xc)) {
        puStack_158 = &DAT_aaaaaaaaaaaaaaaa;
        local_160 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_150 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
        local_140 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_130 = &DAT_aaaaaaaaaaaaaaaa;
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
        uStack_88 = 0xaa;
        uStack_87 = 0xaaaaaaaaaaaaaa;
        uStack_90 = 0xaa;
        local_8f = 0xaaaaaaaaaaaaaa;
        uStack_168 = &DAT_aaaaaaaaaaaaaaaa;
        local_170 = &DAT_aaaaaaaaaaaaaaaa;
        uStack_80 = 0xaa;
        uStack_7f = 0xaaaaaaaaaaaaaa;
        FUN_00890aa0(&local_170,lVar6);
        puStack_98 = *(undefined1 **)(lVar6 + 0xd8);
        uStack_90 = (undefined1)*(undefined8 *)(lVar6 + 0xe0);
        uStack_87 = (undefined7)*(undefined8 *)(lVar6 + 0xe9);
        uStack_80 = (undefined1)((ulong)*(undefined8 *)(lVar6 + 0xe9) >> 0x38);
        local_8f = (undefined7)*(undefined8 *)(lVar6 + 0xe1);
        uStack_88 = (undefined1)((ulong)*(undefined8 *)(lVar6 + 0xe1) >> 0x38);
        lVar10 = lVar7;
        do {
          lVar9 = param_1 + lVar10;
          FUN_00890f48(lVar9 + 0x2e8,lVar9 + 0x1f0);
          *(undefined8 *)(lVar9 + 0x3c8) = *(undefined8 *)(lVar9 + 0x2d0);
          *(undefined8 *)(lVar9 + 0x3c0) = *(undefined8 *)(lVar9 + 0x2c8);
          *(undefined8 *)(lVar9 + 0x3d1) = *(undefined8 *)(lVar9 + 0x2d9);
          *(undefined8 *)(lVar9 + 0x3c9) = *(undefined8 *)(lVar9 + 0x2d1);
          lVar4 = param_1;
          if (lVar10 == -0x1f0) goto LAB_00b84c70;
          lVar10 = lVar10 + -0xf8;
        } while (*(int *)(lVar9 + 0x104) < uStack_168._4_4_);
        lVar4 = param_1 + lVar10 + 0x2e8;
LAB_00b84c70:
        FUN_00890f48(lVar4,&local_170);
        iVar8 = iVar8 + 1;
        *(ulong *)(lVar9 + 0x2d0) = CONCAT71(local_8f,uStack_90);
        *(undefined8 *)(lVar9 + 0x2c8) = puStack_98;
        *(ulong *)(lVar9 + 0x2d9) = CONCAT17(uStack_80,uStack_87);
        *(ulong *)(lVar9 + 0x2d1) = CONCAT17(uStack_88,local_8f);
        if (iVar8 == 8) {
          bVar3 = lVar6 + 0xf8 == param_2;
          FUN_00890cb8(&local_170);
          goto LAB_00b84e08;
        }
        FUN_00890cb8(&local_170);
      }
      lVar7 = lVar7 + 0xf8;
      lVar10 = lVar6 + 0xf8;
      lVar9 = lVar6;
    } while (lVar6 + 0xf8 != param_2);
  }
LAB_00b84e04:
  bVar3 = true;
LAB_00b84e08:
  if (*(long *)(lVar2 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar3;
}


// ===== 00b84e5c  FUN_00b84e5c =====

undefined8 * FUN_00b84e5c(undefined8 *param_1,undefined8 *param_2)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar3 = (void *)*param_1;
  if (pvVar3 != (void *)0x0) {
    pvVar2 = (void *)param_1[1];
    pvVar1 = pvVar3;
    if (pvVar3 != pvVar2) {
      do {
        pvVar2 = (void *)((long)pvVar2 + -0xf8);
        if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        FUN_00890cb8(pvVar2);
      } while (pvVar2 != pvVar3);
      pvVar1 = (void *)*param_1;
    }
    param_1[1] = pvVar3;
    operator_delete(pvVar1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_1;
}


// ===== 00b84f10  FUN_00b84f10 =====

void FUN_00b84f10(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  void *pvVar3;
  void *pvVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar8 = param_2[4];
  uVar7 = param_2[7];
  uVar5 = param_2[6];
  uVar10 = param_2[1];
  uVar9 = *param_2;
  uVar12 = param_2[3];
  uVar11 = param_2[2];
  param_1[5] = param_2[5];
  param_1[4] = uVar8;
  param_1[7] = uVar7;
  param_1[6] = uVar5;
  param_1[1] = uVar10;
  *param_1 = uVar9;
  param_1[3] = uVar12;
  param_1[2] = uVar11;
  uVar8 = param_2[0xc];
  uVar7 = param_2[0xf];
  uVar5 = param_2[0xe];
  uVar10 = param_2[9];
  uVar9 = param_2[8];
  uVar12 = param_2[0xb];
  uVar11 = param_2[10];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar8;
  param_1[0xf] = uVar7;
  param_1[0xe] = uVar5;
  param_1[9] = uVar10;
  param_1[8] = uVar9;
  param_1[0xb] = uVar12;
  param_1[10] = uVar11;
  uVar7 = param_2[0x11];
  uVar5 = param_2[0x10];
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x12);
  param_1[0x11] = uVar7;
  param_1[0x10] = uVar5;
  if (*(char *)((long)param_2 + 0xaf) < '\0') {
    FUN_005478d8(param_1 + 0x13,param_2[0x13],param_2[0x14]);
  }
  else {
    uVar7 = param_2[0x14];
    uVar5 = param_2[0x13];
    param_1[0x15] = param_2[0x15];
    param_1[0x14] = uVar7;
    param_1[0x13] = uVar5;
  }
  uVar5 = param_2[0x16];
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x16] = uVar5;
  param_1[0x17] = 0;
  pvVar4 = (void *)param_2[0x17];
  uVar2 = param_2[0x18] - (long)pvVar4;
  if (uVar2 != 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00b633e4();
    }
    pvVar3 = operator_new(uVar2);
    param_1[0x17] = pvVar3;
    param_1[0x18] = pvVar3;
    param_1[0x19] = (long)pvVar3 + uVar2;
    memcpy(pvVar3,pvVar4,uVar2);
    param_1[0x18] = (long)pvVar3 + uVar2;
  }
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  pvVar4 = (void *)param_2[0x1a];
  uVar2 = param_2[0x1b] - (long)pvVar4;
  if (uVar2 != 0) {
    if ((long)uVar2 < 0) {
      FUN_00b63280();
      goto LAB_00b85138;
    }
    pvVar3 = operator_new(uVar2);
    param_1[0x1a] = pvVar3;
    param_1[0x1b] = pvVar3;
    param_1[0x1c] = (long)pvVar3 + uVar2;
    memcpy(pvVar3,pvVar4,uVar2);
    param_1[0x1b] = (long)pvVar3 + uVar2;
  }
  uVar5 = param_2[0x1f];
  uVar8 = param_2[0x1e];
  uVar7 = param_2[0x1d];
  uVar10 = param_2[0x22];
  uVar9 = param_2[0x21];
  uVar12 = param_2[0x24];
  uVar11 = param_2[0x23];
  param_1[0x20] = param_2[0x20];
  param_1[0x1f] = uVar5;
  param_1[0x1e] = uVar8;
  param_1[0x1d] = uVar7;
  param_1[0x22] = uVar10;
  param_1[0x21] = uVar9;
  param_1[0x24] = uVar12;
  param_1[0x23] = uVar11;
  uVar8 = param_2[0x29];
  uVar7 = param_2[0x2c];
  uVar5 = param_2[0x2b];
  uVar10 = param_2[0x26];
  uVar9 = param_2[0x25];
  uVar12 = param_2[0x28];
  uVar11 = param_2[0x27];
  param_1[0x2a] = param_2[0x2a];
  param_1[0x29] = uVar8;
  param_1[0x2c] = uVar7;
  param_1[0x2b] = uVar5;
  param_1[0x26] = uVar10;
  param_1[0x25] = uVar9;
  param_1[0x28] = uVar12;
  param_1[0x27] = uVar11;
  uVar7 = *(undefined8 *)((long)param_2 + 0x17c);
  uVar5 = *(undefined8 *)((long)param_2 + 0x174);
  uVar9 = param_2[0x2e];
  uVar8 = param_2[0x2d];
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x31] = 0;
  *(undefined8 *)((long)param_1 + 0x17c) = uVar7;
  *(undefined8 *)((long)param_1 + 0x174) = uVar5;
  param_1[0x2e] = uVar9;
  param_1[0x2d] = uVar8;
  lVar6 = param_2[0x31];
  lVar1 = param_2[0x32];
  uVar2 = lVar1 - lVar6;
  if (uVar2 != 0) {
    if (0x555555555555555 < (ulong)(((long)uVar2 >> 4) * -0x5555555555555555)) {
LAB_00b85138:
                    /* WARNING: Subroutine does not return */
      FUN_0088e848();
    }
    pvVar4 = operator_new(uVar2);
    param_1[0x31] = pvVar4;
    param_1[0x32] = pvVar4;
    param_1[0x33] = (long)pvVar4 + uVar2;
    do {
      if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      FUN_0088cec4(pvVar4,lVar6);
      lVar6 = lVar6 + 0x30;
      pvVar4 = (void *)((long)pvVar4 + 0x30);
    } while (lVar6 != lVar1);
    param_1[0x32] = pvVar4;
  }
  *(undefined1 *)(param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 0x37) = 0;
  if (*(char *)(param_2 + 0x37) == '\x01') {
    if (*(char *)((long)param_2 + 0x1b7) < '\0') {
      FUN_005478d8(param_1 + 0x34,param_2[0x34],param_2[0x35]);
    }
    else {
      uVar7 = param_2[0x35];
      uVar5 = param_2[0x34];
      param_1[0x36] = param_2[0x36];
      param_1[0x35] = uVar7;
      param_1[0x34] = uVar5;
    }
    *(undefined1 *)(param_1 + 0x37) = 1;
  }
  memcpy(param_1 + 0x38,param_2 + 0x38,0x169);
  return;
}


// ===== 00b8513c  FUN_00b8513c =====

long FUN_00b8513c(long *param_1,undefined8 param_2)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  void *pvVar7;
  void *pvVar8;
  long lVar9;
  
  lVar6 = param_1[1] - *param_1;
  uVar3 = (lVar6 >> 4) * -0x505050505050505 + 1;
  if (0x50505050505050 < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_00b852e8();
  }
  lVar4 = param_1[2] - *param_1 >> 4;
  uVar5 = lVar4 * -0xa0a0a0a0a0a0a0a;
  if (uVar5 < uVar3 || uVar5 - uVar3 == 0) {
    uVar5 = uVar3;
  }
  if (0x28282828282827 < (ulong)(lVar4 * -0x505050505050505)) {
    uVar5 = 0x50505050505050;
  }
  if (uVar5 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (0x50505050505050 < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    pvVar2 = operator_new(uVar5 * 0x330);
    lVar6 = (long)pvVar2 + lVar6;
  }
  if (lVar6 == 0) {
LAB_00b852b8:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  FUN_00b84f10(lVar6,param_2);
  pvVar7 = (void *)*param_1;
  pvVar1 = (void *)param_1[1];
  lVar4 = (long)pvVar7 + (lVar6 - (long)pvVar1);
  pvVar8 = pvVar7;
  lVar9 = lVar4;
  if (pvVar1 != pvVar7) {
    do {
      if (lVar9 == 0) goto LAB_00b852b8;
      FUN_00b84f10(lVar9,pvVar8);
      pvVar8 = (void *)((long)pvVar8 + 0x330);
      lVar9 = lVar9 + 0x330;
    } while (pvVar8 != pvVar1);
    do {
      if (pvVar7 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      FUN_0088b060(pvVar7);
      pvVar7 = (void *)((long)pvVar7 + 0x330);
    } while (pvVar7 != pvVar1);
    pvVar7 = (void *)*param_1;
  }
  *param_1 = lVar4;
  param_1[1] = lVar6 + 0x330;
  param_1[2] = (long)((long)pvVar2 + uVar5 * 0x330);
  if (pvVar7 != (void *)0x0) {
    operator_delete(pvVar7);
  }
  return lVar6 + 0x330;
}


// ===== 00b852e8  FUN_00b852e8 =====

void FUN_00b852e8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00b85300  FUN_00b85300 =====

long FUN_00b85300(long *param_1,undefined8 param_2,undefined4 *param_3)

{
  void *pvVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  void *pvVar8;
  void *pvVar9;
  long lVar10;
  undefined1 auStack_c8 [96];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar7 = param_1[1] - *param_1;
  uVar4 = (lVar7 >> 3) * 0x4ec4ec4ec4ec4ec5 + 1;
  if (uVar4 < 0x276276276276277) {
    lVar5 = param_1[2] - *param_1 >> 3;
    uVar6 = lVar5 * -0x6276276276276276;
    if (uVar6 < uVar4 || uVar6 - uVar4 == 0) {
      uVar6 = uVar4;
    }
    if (0x13b13b13b13b13a < (ulong)(lVar5 * 0x4ec4ec4ec4ec4ec5)) {
      uVar6 = 0x276276276276276;
    }
    if (uVar6 == 0) {
      pvVar3 = (void *)0x0;
    }
    else {
      if (0x276276276276276 < uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      pvVar3 = operator_new(uVar6 * 0x68);
      lVar7 = (long)pvVar3 + lVar7;
    }
    if (lVar7 == 0) {
LAB_00b854b4:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    FUN_007b6ad4(auStack_c8,param_2);
    FUN_0084507c(lVar7,auStack_c8,*param_3);
    FUN_007b6d78(auStack_c8);
    pvVar8 = (void *)*param_1;
    pvVar1 = (void *)param_1[1];
    lVar5 = (long)pvVar8 + (lVar7 - (long)pvVar1);
    pvVar9 = pvVar8;
    lVar10 = lVar5;
    if (pvVar1 != pvVar8) {
      do {
        if (lVar10 == 0) goto LAB_00b854b4;
        FUN_00845110(lVar10,pvVar9);
        pvVar9 = (void *)((long)pvVar9 + 0x68);
        lVar10 = lVar10 + 0x68;
      } while (pvVar9 != pvVar1);
      do {
        if (pvVar8 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        thunk_FUN_007b6d78(pvVar8);
        pvVar8 = (void *)((long)pvVar8 + 0x68);
      } while (pvVar8 != pvVar1);
      pvVar8 = (void *)*param_1;
    }
    *param_1 = lVar5;
    param_1[1] = lVar7 + 0x68;
    param_1[2] = (long)((long)pvVar3 + uVar6 * 0x68);
    if (pvVar8 != (void *)0x0) {
      operator_delete(pvVar8);
    }
    if (*(long *)(lVar2 + 0x28) == local_68) {
      return lVar7 + 0x68;
    }
  }
  else {
    FUN_00847600();
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00b854e8  FUN_00b854e8 =====

undefined1  [16]
FUN_00b854e8(undefined8 param_1,long *param_2,undefined8 param_3,int *param_4,undefined4 *param_5)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  
  plVar5 = param_2 + 1;
  plVar7 = plVar5;
  if ((long *)*plVar5 != (long *)0x0) {
    plVar3 = (long *)*plVar5;
    do {
      while (plVar4 = plVar3, plVar5 = plVar4, *param_4 < *(int *)((long)plVar4 + 0x1c)) {
        plVar3 = (long *)*plVar4;
        plVar7 = plVar4;
        if ((long *)*plVar4 == (long *)0x0) goto LAB_00b85554;
      }
      if (*param_4 == *(int *)((long)plVar4 + 0x1c)) {
        uVar6 = 0;
        goto LAB_00b855b8;
      }
      plVar3 = (long *)plVar4[1];
    } while ((long *)plVar4[1] != (long *)0x0);
    plVar7 = plVar4 + 1;
  }
LAB_00b85554:
  plVar4 = (long *)operator_new(0x28);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  iVar1 = *param_4;
  uVar2 = *param_5;
  *plVar4 = 0;
  plVar4[1] = 0;
  *(int *)((long)plVar4 + 0x1c) = iVar1;
  *(undefined4 *)(plVar4 + 4) = uVar2;
  plVar4[2] = (long)plVar5;
  *plVar7 = (long)plVar4;
  plVar5 = plVar4;
  if (*(long *)*param_2 != 0) {
    *param_2 = *(long *)*param_2;
    plVar5 = (long *)*plVar7;
  }
  FUN_005d5b94(param_2[1],plVar5);
  uVar6 = 1;
  param_2[2] = param_2[2] + 1;
LAB_00b855b8:
  auVar8._8_8_ = uVar6;
  auVar8._0_8_ = plVar4;
  return auVar8;
}


// ===== 00b855e8  FUN_00b855e8 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00b855e8(int *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  void *pvVar1;
  int *piVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  undefined1 *puVar6;
  size_t sVar7;
  undefined1 *puVar8;
  undefined8 *******pppppppuVar9;
  ulong *puVar10;
  undefined1 *puVar11;
  undefined1 *local_280;
  undefined1 *puStack_278;
  undefined1 *local_270;
  undefined1 *puStack_268;
  undefined8 local_260;
  undefined1 *local_258;
  void *local_250 [2];
  char cStack_239;
  int local_238;
  undefined4 uStack_234;
  void *local_230;
  ulong uStack_228;
  void *local_220;
  undefined4 local_218;
  undefined3 uStack_214;
  char cStack_209;
  undefined1 auStack_208 [216];
  undefined1 *local_130;
  undefined1 *puStack_128;
  undefined8 *******local_120;
  undefined1 *puStack_118;
  undefined8 uStack_110;
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
  undefined1 *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
  local_120 = (undefined8 *******)&DAT_aaaaaaaaaaaaaaaa;
  puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_110 = &DAT_aaaaaaaaaaaaaaaa;
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
  FUN_00893408(&local_130);
  puStack_268 = &DAT_aaaaaaaaaaaaaaaa;
  local_270 = &DAT_aaaaaaaaaaaaaaaa;
  local_258 = &DAT_aaaaaaaaaaaaaaaa;
  local_260 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_278 = &DAT_aaaaaaaaaaaaaaaa;
  local_280 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00890830(auStack_208,&local_130);
  FUN_00b65618(&local_280,param_3,auStack_208,0);
  FUN_00890cb8(auStack_208);
  if ((int)local_280 != 0) {
    local_238 = (int)local_280;
    if ((long)puStack_268 < 0) {
      FUN_005478d8(&local_230,puStack_278,local_270);
    }
    else {
      puVar10 = (ulong *)((ulong)&local_280 | 8);
      uStack_228 = puVar10[1];
      local_230 = (void *)*puVar10;
      local_220 = (void *)puVar10[2];
    }
    local_218 = (int)local_260;
    *param_1 = local_238;
    uStack_214 = (undefined3)((ulong)local_260 >> 0x20);
    if ((long)local_220 < 0) {
      FUN_005478d8(param_1 + 2,local_230,uStack_228);
      *(undefined1 *)(param_1 + 10) = 0;
      param_1[8] = local_218;
      *(uint *)((long)param_1 + 0x23) = CONCAT31(uStack_214,local_218._3_1_);
      *(undefined1 *)(param_1 + 0x40) = 0;
      if ((long)local_220 < 0) {
        operator_delete(local_230);
      }
    }
    else {
      *(undefined1 *)(param_1 + 10) = 0;
      *(ulong *)(param_1 + 4) = uStack_228;
      *(void **)(param_1 + 2) = local_230;
      *(void **)(param_1 + 6) = local_220;
      param_1[8] = local_218;
      *(undefined4 *)((long)param_1 + 0x23) = local_260._3_4_;
      *(undefined1 *)(param_1 + 0x40) = 0;
    }
    goto LAB_00b85cc8;
  }
  if (((ulong)local_258 & 0x100) == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
              );
  }
  puStack_128 = (undefined1 *)(ulong)CONCAT14(local_258._0_1_,puStack_128._0_4_);
  puVar6 = (undefined1 *)strlen(PTR_DAT_00d51fd8);
  puVar8 = uStack_110;
  puVar11 = (undefined1 *)(long)uStack_110._7_1_;
  if ((long)puVar11 < 0) {
    if (puVar6 == puStack_118) {
      pppppppuVar9 = local_120;
      if (puVar6 == (undefined1 *)0xffffffffffffffff) goto LAB_00b85d74;
      goto LAB_00b857ac;
    }
LAB_00b857bc:
    puVar6 = (undefined1 *)strlen("ulpfec");
    if ((long)puVar8 < 0) {
      if (puVar6 == puStack_118) {
        pppppppuVar9 = local_120;
        if (puVar6 == (undefined1 *)0xffffffffffffffff) goto LAB_00b85d74;
        goto LAB_00b857f8;
      }
    }
    else {
      pppppppuVar9 = &local_120;
      if (puVar6 == puVar11) {
LAB_00b857f8:
        iVar5 = memcmp(pppppppuVar9,"ulpfec",(size_t)puVar6);
        if (iVar5 == 0) goto LAB_00b85ca0;
      }
    }
    sVar7 = strlen("goog-remb");
    FUN_005d3510(local_250,PTR_DAT_00d52230);
    FUN_008929a0(&local_238,"goog-remb",sVar7,local_250);
    FUN_008918f8(&local_130,&local_238);
    if (cStack_209 < '\0') {
      operator_delete(local_220);
    }
    if ((long)uStack_228 < 0) {
      operator_delete((void *)CONCAT44(uStack_234,local_238));
    }
    if (cStack_239 < '\0') {
      operator_delete(local_250[0]);
    }
    sVar7 = strlen("transport-cc");
    FUN_005d3510(local_250,PTR_DAT_00d52230);
    FUN_008929a0(&local_238,"transport-cc",sVar7,local_250);
    FUN_008918f8(&local_130,&local_238);
    if (cStack_209 < '\0') {
      operator_delete(local_220);
    }
    if ((long)uStack_228 < 0) {
      operator_delete((void *)CONCAT44(uStack_234,local_238));
    }
    if (cStack_239 < '\0') {
      operator_delete(local_250[0]);
    }
    puVar8 = (undefined1 *)strlen("flexfec-03");
    if ((long)uStack_110._7_1_ < 0) {
      if (puVar8 == puStack_118) {
        pppppppuVar9 = local_120;
        if (puVar8 == (undefined1 *)0xffffffffffffffff) goto LAB_00b85d74;
        goto LAB_00b85988;
      }
    }
    else {
      pppppppuVar9 = &local_120;
      if (puVar8 == (undefined1 *)(long)uStack_110._7_1_) {
LAB_00b85988:
        iVar5 = memcmp(pppppppuVar9,"flexfec-03",(size_t)puVar8);
        if (iVar5 == 0) goto LAB_00b85ca0;
      }
    }
    sVar7 = strlen("ccm");
    FUN_005d3510(local_250,PTR_DAT_00d52270);
    FUN_008929a0(&local_238,&DAT_001ff285,sVar7,local_250);
    FUN_008918f8(&local_130,&local_238);
    if (cStack_209 < '\0') {
      operator_delete(local_220);
    }
    if ((long)uStack_228 < 0) {
      operator_delete((void *)CONCAT44(uStack_234,local_238));
    }
    if (cStack_239 < '\0') {
      operator_delete(local_250[0]);
    }
    sVar7 = strlen("nack");
    FUN_005d3510(local_250,PTR_DAT_00d52230);
    FUN_008929a0(&local_238,&DAT_001ff265,sVar7,local_250);
    FUN_008918f8(&local_130,&local_238);
    if (cStack_209 < '\0') {
      operator_delete(local_220);
    }
    if ((long)uStack_228 < 0) {
      operator_delete((void *)CONCAT44(uStack_234,local_238));
    }
    if (cStack_239 < '\0') {
      operator_delete(local_250[0]);
    }
    FUN_005d3510(local_250,PTR_DAT_00d52250);
    FUN_008929a0(&local_238,&DAT_001ff265,sVar7,local_250);
    FUN_008918f8(&local_130,&local_238);
    if (cStack_209 < '\0') {
      operator_delete(local_220);
    }
    if ((long)uStack_228 < 0) {
      operator_delete((void *)CONCAT44(uStack_234,local_238));
    }
    if (cStack_239 < '\0') {
      operator_delete(local_250[0]);
    }
    puVar8 = (undefined1 *)strlen("VP8");
    if ((long)uStack_110._7_1_ < 0) {
      if (puVar8 == puStack_118) {
        pppppppuVar9 = local_120;
        if (puVar8 == (undefined1 *)0xffffffffffffffff) {
LAB_00b85d74:
                    /* WARNING: Subroutine does not return */
          FUN_005f5590();
        }
        goto LAB_00b85ba0;
      }
    }
    else {
      pppppppuVar9 = &local_120;
      if (puVar8 == (undefined1 *)(long)uStack_110._7_1_) {
LAB_00b85ba0:
        iVar5 = memcmp(pppppppuVar9,PTR_DAT_00d51c98,(size_t)puVar8);
        if (iVar5 == 0) {
          (**(code **)(*param_4 + 0x10))(&local_238,param_4,"WebRTC-RtcpLossNotification",0x1b);
          pvVar1 = local_230;
          if (-1 < (long)uStack_228) {
            pvVar1 = (void *)(uStack_228 >> 0x38);
          }
          if (pvVar1 < (void *)0x7) {
            bVar4 = false;
          }
          else {
            piVar2 = (int *)CONCAT44(uStack_234,local_238);
            if (-1 < (long)uStack_228) {
              piVar2 = &local_238;
            }
            bVar4 = *piVar2 == 0x62616e45 && *(int *)((long)piVar2 + 3) == 0x64656c62;
          }
          if ((long)uStack_228 < 0) {
            operator_delete((void *)CONCAT44(uStack_234,local_238));
          }
          if (bVar4) {
            sVar7 = strlen("goog-lntf");
            FUN_005d3510(local_250,PTR_DAT_00d52230);
            FUN_008929a0(&local_238,"goog-lntf",sVar7,local_250);
            FUN_008918f8(&local_130,&local_238);
            if (cStack_209 < '\0') {
              operator_delete(local_220);
            }
            if ((long)uStack_228 < 0) {
              operator_delete((void *)CONCAT44(uStack_234,local_238));
            }
            if (cStack_239 < '\0') {
              operator_delete(local_250[0]);
            }
          }
        }
      }
    }
  }
  else {
    pppppppuVar9 = &local_120;
    if (puVar6 != puVar11) goto LAB_00b857bc;
LAB_00b857ac:
    iVar5 = memcmp(pppppppuVar9,&DAT_001ff1bc,(size_t)puVar6);
    if (iVar5 != 0) goto LAB_00b857bc;
  }
LAB_00b85ca0:
  *param_1 = 0;
  *(undefined1 *)((long)param_1 + 0x26) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((long)param_1 + 0x1d) = 0;
  FUN_00890aa0(param_1 + 10,&local_130);
  *(undefined1 *)(param_1 + 0x40) = 1;
LAB_00b85cc8:
  if ((long)puStack_268 < 0) {
    operator_delete(puStack_278);
  }
  FUN_00890cb8(&local_130);
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00b85d78  FUN_00b85d78 =====

void FUN_00b85d78(int *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  void *local_250;
  undefined8 uStack_248;
  long local_240;
  undefined4 local_238;
  undefined3 uStack_234;
  undefined1 *local_230;
  undefined1 *puStack_228;
  undefined1 *local_220;
  undefined1 *puStack_218;
  undefined8 local_210;
  undefined1 *local_208;
  undefined1 auStack_1f8 [216];
  undefined1 *local_120;
  undefined1 *puStack_118;
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
  undefined1 *puStack_c0;
  undefined1 *puStack_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
  local_110 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_100 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
  local_f0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
  local_d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
  local_120 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_008922b8(0xffffffff,*(undefined4 *)(param_2 + 0xc));
  puStack_218 = &DAT_aaaaaaaaaaaaaaaa;
  local_220 = &DAT_aaaaaaaaaaaaaaaa;
  local_208 = &DAT_aaaaaaaaaaaaaaaa;
  local_210 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_228 = &DAT_aaaaaaaaaaaaaaaa;
  local_230 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00890830(auStack_1f8,&local_120);
  FUN_00b65618(&local_230,param_3,auStack_1f8,0);
  FUN_00890cb8(auStack_1f8);
  iVar2 = (int)local_230;
  if ((int)local_230 == 0) {
    if (((ulong)local_208 & 0x100) == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                );
    }
    *param_1 = 0;
    *(undefined1 *)((long)param_1 + 0x26) = 0;
    puStack_118 = (undefined1 *)(ulong)CONCAT14(local_208._0_1_,puStack_118._0_4_);
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined8 *)((long)param_1 + 0x1d) = 0;
    FUN_00890aa0(param_1 + 10,&local_120);
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  else {
    if ((long)puStack_218 < 0) {
      FUN_005478d8(&local_250,puStack_228,local_220);
    }
    else {
      puVar3 = (undefined8 *)((ulong)&local_230 | 8);
      uStack_248 = puVar3[1];
      local_250 = (void *)*puVar3;
      local_240 = puVar3[2];
    }
    local_238 = (int)local_210;
    *param_1 = iVar2;
    uStack_234 = (undefined3)((ulong)local_210 >> 0x20);
    if (local_240 < 0) {
      FUN_005478d8(param_1 + 2,local_250,uStack_248);
      *(undefined1 *)(param_1 + 10) = 0;
      param_1[8] = local_238;
      *(uint *)((long)param_1 + 0x23) = CONCAT31(uStack_234,local_238._3_1_);
      *(undefined1 *)(param_1 + 0x40) = 0;
      if (local_240 < 0) {
        operator_delete(local_250);
      }
    }
    else {
      *(undefined1 *)(param_1 + 10) = 0;
      *(undefined8 *)(param_1 + 4) = uStack_248;
      *(void **)(param_1 + 2) = local_250;
      *(long *)(param_1 + 6) = local_240;
      param_1[8] = local_238;
      *(undefined4 *)((long)param_1 + 0x23) = local_210._3_4_;
      *(undefined1 *)(param_1 + 0x40) = 0;
    }
  }
  if ((long)puStack_218 < 0) {
    operator_delete(puStack_228);
  }
  FUN_00890cb8(&local_120);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00b85f9c  FUN_00b85f9c =====

void FUN_00b85f9c(undefined8 *param_1)

{
  ulong uVar1;
  ulong __n;
  ulong uVar2;
  undefined8 ***pppuVar3;
  undefined8 **__src;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *__dest;
  undefined8 *local_70;
  ulong uStack_68;
  ulong local_60;
  undefined8 **local_58;
  ulong uStack_50;
  byte bStack_41;
  
  local_70 = (undefined8 *)0x0;
  uStack_68 = 0;
  local_60 = 0;
  FUN_007b6dd8(&local_58);
  pppuVar3 = (undefined8 ***)local_58;
  if (-1 < (char)bStack_41) {
    uStack_50 = (ulong)bStack_41;
    pppuVar3 = &local_58;
  }
  thunk_FUN_00547cac(&local_70,pppuVar3,uStack_50);
  if ((char)bStack_41 < '\0') {
    operator_delete(local_58);
  }
  uVar5 = local_60;
  puVar4 = local_70;
  __n = uStack_68;
  __src = (undefined8 **)local_70;
  if (-1 < (long)local_60) {
    __n = local_60 >> 0x38;
    __src = &local_70;
  }
  if ((__src == (undefined8 **)0x0) && (__n != 0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/string:1081: libc++ Hardening assertion __n == 0 || __s != nullptr failed: basic_string(const char*, n) detected nullptr\n"
              );
  }
  if (0x7ffffffffffffff6 < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (__n < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)__n;
    __dest = param_1;
  }
  else {
    uVar1 = (__n & 0x7ffffffffffffff8) + 8;
    uVar2 = 0x19;
    if (uVar1 != 0x18) {
      uVar2 = uVar1;
    }
    __dest = (undefined8 *)operator_new(uVar2);
    *param_1 = __dest;
    param_1[1] = __n;
    param_1[2] = uVar2 | 0x8000000000000000;
  }
  if ((undefined8 *)((long)__dest + __n) < __dest) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
              );
  }
  if ((__dest <= __src) && (__src < (undefined8 *)((long)__dest + __n))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
              );
  }
  memmove(__dest,__src,__n);
  *(undefined1 *)((long)__dest + __n) = 0;
  if ((long)uVar5 < 0) {
    operator_delete(puVar4);
  }
  return;
}


// ===== 00b86118  FUN_00b86118 =====

long FUN_00b86118(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  
  lVar6 = param_1[1] - *param_1;
  uVar3 = (lVar6 >> 3) * -0x7b425ed097b425ed + 1;
  if (0x12f684bda12f684 < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_0088fd20();
  }
  lVar4 = param_1[2] - *param_1 >> 3;
  uVar5 = lVar4 * 0x97b425ed097b426;
  if (uVar5 < uVar3 || uVar5 - uVar3 == 0) {
    uVar5 = uVar3;
  }
  if (0x97b425ed097b41 < (ulong)(lVar4 * -0x7b425ed097b425ed)) {
    uVar5 = 0x12f684bda12f684;
  }
  if (uVar5 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (0x12f684bda12f684 < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    pvVar2 = operator_new(uVar5 * 0xd8);
    lVar6 = (long)pvVar2 + lVar6;
  }
  if (lVar6 == 0) {
LAB_00b862a0:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  FUN_00890aa0(lVar6,param_2);
  puVar7 = (undefined8 *)*param_1;
  puVar1 = (undefined8 *)param_1[1];
  lVar4 = (long)puVar7 + (lVar6 - (long)puVar1);
  puVar8 = puVar7;
  lVar9 = lVar4;
  if (puVar1 != puVar7) {
    do {
      if (lVar9 == 0) goto LAB_00b862a0;
      FUN_00890aa0(lVar9,puVar8);
      puVar8 = puVar8 + 0x1b;
      lVar9 = lVar9 + 0xd8;
    } while (puVar8 != puVar1);
    do {
      if (puVar7 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      puVar8 = puVar7 + 0x1b;
      (**(code **)*puVar7)(puVar7);
      puVar7 = puVar8;
    } while (puVar8 != puVar1);
    puVar7 = (undefined8 *)*param_1;
  }
  *param_1 = lVar4;
  param_1[1] = lVar6 + 0xd8;
  param_1[2] = (long)((long)pvVar2 + uVar5 * 0xd8);
  if (puVar7 != (undefined8 *)0x0) {
    operator_delete(puVar7);
  }
  return lVar6 + 0xd8;
}


// ===== 00b862d0  FUN_00b862d0 =====

void FUN_00b862d0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_00b862d0(param_1,*param_2);
      if (param_2 == (undefined8 *)0xffffffffffffffe0) {
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


// ===== 00b86344  FUN_00b86344 =====

void FUN_00b86344(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *local_50;
  long *plStack_48;
  long local_28;
  
  if (param_2 != param_3) {
    lVar4 = param_1[1];
    if (lVar4 == 0) {
      puVar2 = (undefined8 *)operator_new(0x40);
      if (puVar2 == (undefined8 *)0x0) {
LAB_00b86454:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      puVar3 = puVar2 + 4;
      *puVar2 = 0;
      if (puVar3 == (undefined8 *)0x0) goto LAB_00b86454;
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        FUN_005478d8(puVar3,*param_2,param_2[1]);
      }
      else {
        uVar6 = *param_2;
        uVar5 = param_2[2];
        puVar2[5] = param_2[1];
        *puVar3 = uVar6;
        puVar2[6] = uVar5;
      }
      uVar1 = *(undefined4 *)(param_2 + 3);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = param_1 + 1;
      *(undefined4 *)(puVar2 + 7) = uVar1;
      param_1[1] = (long)puVar2;
      if (*(long *)*param_1 != 0) {
        *param_1 = *(long *)*param_1;
      }
      FUN_005d5b94(puVar2,puVar2);
      param_2 = param_2 + 4;
      param_1[2] = param_1[2] + 1;
      lVar4 = param_1[1];
    }
    do {
      local_28 = lVar4;
      lVar4 = *(long *)(local_28 + 8);
    } while (*(long *)(local_28 + 8) != 0);
    if (param_2 != param_3) {
      do {
        local_50 = param_1;
        plStack_48 = &local_28;
        FUN_00b86468(&local_50,param_2,param_2);
        param_2 = param_2 + 4;
      } while (param_2 != param_3);
    }
  }
  return;
}


// ===== 00b86468  FUN_00b86468 =====

void FUN_00b86468(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  size_t sVar2;
  undefined4 uVar3;
  ulong uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  
  plVar11 = (long *)param_1[1];
  plVar10 = (long *)*param_1;
  lVar8 = *plVar11;
  uVar1 = *(ulong *)(lVar8 + 0x28);
  puVar6 = (undefined8 *)*(void **)(lVar8 + 0x20);
  if (-1 < (char)*(byte *)(lVar8 + 0x37)) {
    uVar1 = (ulong)*(byte *)(lVar8 + 0x37);
    puVar6 = (undefined8 *)(lVar8 + 0x20);
  }
  puVar7 = (undefined8 *)*param_2;
  uVar4 = param_2[1];
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    puVar7 = param_2;
    uVar4 = (ulong)*(byte *)((long)param_2 + 0x17);
  }
  sVar2 = uVar4;
  if (uVar1 <= uVar4) {
    sVar2 = uVar1;
  }
  iVar5 = memcmp(puVar6,puVar7,sVar2);
  if (iVar5 == 0) {
    if (uVar4 <= uVar1) goto LAB_00b86520;
  }
  else if (-1 < iVar5) {
LAB_00b86520:
    plVar12 = plVar10 + 1;
    plVar11 = (long *)*plVar12;
    plVar13 = plVar12;
    if ((long *)*plVar12 != (long *)0x0) {
      do {
        while( true ) {
          plVar12 = plVar11;
          plVar11 = (long *)plVar12[4];
          uVar1 = plVar12[5];
          if (-1 < (char)*(byte *)((long)plVar12 + 0x37)) {
            plVar11 = plVar12 + 4;
            uVar1 = (ulong)*(byte *)((long)plVar12 + 0x37);
          }
          sVar2 = uVar1;
          if (uVar4 <= uVar1) {
            sVar2 = uVar4;
          }
          iVar5 = memcmp(puVar7,plVar11,sVar2);
          if (iVar5 == 0) break;
          if (-1 < iVar5) goto LAB_00b86534;
LAB_00b86584:
          plVar11 = (long *)*plVar12;
          plVar13 = plVar12;
          if ((long *)*plVar12 == (long *)0x0) goto LAB_00b865f4;
        }
        if (uVar4 == uVar1) {
          return;
        }
        if (uVar4 < uVar1) goto LAB_00b86584;
LAB_00b86534:
        plVar11 = (long *)plVar12[1];
      } while ((long *)plVar12[1] != (long *)0x0);
      plVar13 = plVar12 + 1;
    }
LAB_00b865f4:
    puVar6 = (undefined8 *)operator_new(0x40);
    if (puVar6 != (undefined8 *)0x0) {
      puVar7 = puVar6 + 4;
      *puVar6 = 0;
      if (puVar7 != (undefined8 *)0x0) {
        if (*(char *)((long)param_3 + 0x17) < '\0') {
          FUN_005478d8(puVar7,*param_3,param_3[1]);
        }
        else {
          uVar14 = *param_3;
          uVar9 = param_3[2];
          puVar6[5] = param_3[1];
          *puVar7 = uVar14;
          puVar6[6] = uVar9;
        }
        uVar3 = *(undefined4 *)(param_3 + 3);
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar6[2] = plVar12;
        *(undefined4 *)(puVar6 + 7) = uVar3;
        *plVar13 = (long)puVar6;
        if (*(long *)*plVar10 != 0) {
          *plVar10 = *(long *)*plVar10;
          puVar6 = (undefined8 *)*plVar13;
        }
        FUN_005d5b94(plVar10[1],puVar6);
        plVar10[2] = plVar10[2] + 1;
        return;
      }
    }
    goto LAB_00b8668c;
  }
  puVar6 = (undefined8 *)operator_new(0x40);
  if (puVar6 != (undefined8 *)0x0) {
    puVar7 = puVar6 + 4;
    *puVar6 = 0;
    if (puVar7 != (undefined8 *)0x0) {
      if (*(char *)((long)param_3 + 0x17) < '\0') {
        FUN_005478d8(puVar7,*param_3,param_3[1]);
        plVar11 = (long *)param_1[1];
      }
      else {
        uVar14 = *param_3;
        uVar9 = param_3[2];
        puVar6[5] = param_3[1];
        *puVar7 = uVar14;
        puVar6[6] = uVar9;
      }
      *(undefined4 *)(puVar6 + 7) = *(undefined4 *)(param_3 + 3);
      lVar8 = *plVar11;
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = lVar8;
      *(undefined8 **)(lVar8 + 8) = puVar6;
      puVar7 = puVar6;
      if (*(long *)*plVar10 != 0) {
        *plVar10 = *(long *)*plVar10;
        puVar7 = *(undefined8 **)(lVar8 + 8);
      }
      FUN_005d5b94(plVar10[1],puVar7);
      plVar10[2] = plVar10[2] + 1;
      *(undefined8 **)param_1[1] = puVar6;
      return;
    }
  }
LAB_00b8668c:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00b866a0  FUN_00b866a0 =====

void FUN_00b866a0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_00b866a0(param_1,*param_2);
      if (param_2 == (undefined8 *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      puVar1 = (undefined8 *)param_2[1];
      if (*(char *)((long)param_2 + 0x37) < '\0') {
        operator_delete((void *)param_2[4]);
      }
      operator_delete(param_2);
      param_2 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
  }
  return;
}


// ===== 00b86734  FUN_00b86734 =====

void FUN_00b86734(void *param_1)

{
  FUN_006627a0();
  operator_delete(param_1);
  return;
}


// ===== 00b86764  FUN_00b86764 =====

long * FUN_00b86764(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  if (param_2 == (undefined8 *)0x0) {
    return (long *)0x0;
  }
  plVar2 = (long *)operator_new(0x40);
  if (plVar2 != (long *)0x0) {
    plVar3 = plVar2 + 4;
    *plVar2 = 0;
    if (plVar3 != (long *)0x0) {
      if (*(char *)((long)param_2 + 0x37) < '\0') {
        FUN_005478d8(plVar3,param_2[4],param_2[5]);
      }
      else {
        lVar4 = param_2[4];
        lVar6 = param_2[6];
        plVar2[5] = param_2[5];
        *plVar3 = lVar4;
        plVar2[6] = lVar6;
      }
      uVar5 = *param_2;
      *(undefined4 *)(plVar2 + 7) = *(undefined4 *)(param_2 + 7);
      lVar6 = FUN_00b86764(param_1,uVar5,param_3);
      lVar4 = FUN_00b86764(param_1,param_2[1],param_3);
      uVar1 = *(undefined1 *)(param_2 + 3);
      *plVar2 = lVar6;
      plVar2[1] = lVar4;
      *(undefined1 *)(plVar2 + 3) = uVar1;
      if (lVar6 != 0) {
        *(long **)(lVar6 + 0x10) = plVar2;
        lVar4 = plVar2[1];
      }
      if (lVar4 == 0) {
        return plVar2;
      }
      *(long **)(lVar4 + 0x10) = plVar2;
      return plVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00b8684c  FUN_00b8684c =====

void FUN_00b8684c(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *local_58;
  long *plStack_50;
  char local_48;
  long local_28;
  
  if (param_2 != param_3) {
    plVar5 = param_1 + 1;
    if (*plVar5 == 0) {
      FUN_00b869f8(&local_58,param_1,param_2 + 4);
      plVar4 = local_58;
      local_58 = (long *)0x0;
      *plVar4 = 0;
      plVar4[1] = 0;
      plVar4[2] = (long)plVar5;
      param_1[1] = (long)plVar4;
      if (*(long *)*param_1 != 0) {
        *param_1 = *(long *)*param_1;
      }
      FUN_005d5b94(plVar4,plVar4);
      plVar4 = local_58;
      local_58 = (long *)0x0;
      param_1[2] = param_1[2] + 1;
      if (plVar4 != (long *)0x0) {
        if (local_48 == '\x01') {
          if (plVar4 == (long *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
          if (*(char *)((long)plVar4 + 0x4f) < '\0') {
            operator_delete((void *)plVar4[7]);
          }
          if (*(char *)((long)plVar4 + 0x37) < '\0') {
            operator_delete((void *)plVar4[4]);
          }
        }
        operator_delete(plVar4);
      }
      plVar4 = (long *)param_2[1];
      plVar3 = param_2;
      if ((long *)param_2[1] == (long *)0x0) {
        do {
          param_2 = (long *)plVar3[2];
          bVar2 = plVar3 != (long *)*param_2;
          plVar3 = param_2;
        } while (bVar2);
      }
      else {
        do {
          param_2 = plVar4;
          plVar4 = (long *)*param_2;
        } while ((long *)*param_2 != (long *)0x0);
      }
    }
    lVar1 = *plVar5;
    do {
      local_28 = lVar1;
      lVar1 = *(long *)(local_28 + 8);
    } while (*(long *)(local_28 + 8) != 0);
    if (param_2 != param_3) {
      do {
        local_58 = param_1;
        plStack_50 = &local_28;
        FUN_00b86abc(&local_58,param_2 + 4,param_2 + 4);
        plVar5 = (long *)param_2[1];
        plVar4 = param_2;
        if ((long *)param_2[1] == (long *)0x0) {
          do {
            param_2 = (long *)plVar4[2];
            bVar2 = plVar4 != (long *)*param_2;
            plVar4 = param_2;
          } while (bVar2);
        }
        else {
          do {
            param_2 = plVar5;
            plVar5 = (long *)*param_2;
          } while ((long *)*param_2 != (long *)0x0);
        }
      } while (param_2 != param_3);
    }
  }
  return;
}


// ===== 00b869f8  FUN_00b869f8 =====

void FUN_00b869f8(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  puVar2 = (undefined8 *)operator_new(0x50);
  *param_1 = puVar2;
  param_1[1] = param_2;
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = puVar2 + 4;
    *puVar2 = 0;
    if (puVar3 != (undefined8 *)0x0) {
      if (*(char *)((long)param_3 + 0x17) < '\0') {
        FUN_005478d8(puVar3,*param_3,param_3[1]);
        cVar1 = *(char *)((long)param_3 + 0x2f);
      }
      else {
        uVar5 = *param_3;
        uVar4 = param_3[2];
        puVar2[5] = param_3[1];
        *puVar3 = uVar5;
        puVar2[6] = uVar4;
        cVar1 = *(char *)((long)param_3 + 0x2f);
      }
      if (cVar1 < '\0') {
        FUN_005478d8(puVar2 + 7,param_3[3],param_3[4]);
      }
      else {
        uVar5 = param_3[3];
        uVar4 = param_3[5];
        puVar2[8] = param_3[4];
        puVar2[7] = uVar5;
        puVar2[9] = uVar4;
      }
      *(undefined1 *)(param_1 + 2) = 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00b86abc  FUN_00b86abc =====

void FUN_00b86abc(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 *__s2;
  long *plVar2;
  size_t sVar3;
  char cVar4;
  ulong uVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  
  plVar9 = (long *)*param_1;
  lVar8 = *(long *)param_1[1];
  uVar1 = *(ulong *)(lVar8 + 0x28);
  puVar7 = (undefined8 *)*(void **)(lVar8 + 0x20);
  if (-1 < (char)*(byte *)(lVar8 + 0x37)) {
    uVar1 = (ulong)*(byte *)(lVar8 + 0x37);
    puVar7 = (undefined8 *)(lVar8 + 0x20);
  }
  __s2 = (undefined8 *)*param_2;
  uVar5 = param_2[1];
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    __s2 = param_2;
    uVar5 = (ulong)*(byte *)((long)param_2 + 0x17);
  }
  sVar3 = uVar5;
  if (uVar1 <= uVar5) {
    sVar3 = uVar1;
  }
  iVar6 = memcmp(puVar7,__s2,sVar3);
  if (iVar6 == 0) {
    if (uVar5 <= uVar1) goto LAB_00b86bb0;
  }
  else if (-1 < iVar6) {
LAB_00b86bb0:
    plVar10 = plVar9 + 1;
    plVar2 = (long *)*plVar10;
    plVar11 = plVar10;
    if ((long *)*plVar10 != (long *)0x0) {
      do {
        while( true ) {
          plVar10 = plVar2;
          plVar2 = (long *)plVar10[4];
          uVar1 = plVar10[5];
          if (-1 < (char)*(byte *)((long)plVar10 + 0x37)) {
            plVar2 = plVar10 + 4;
            uVar1 = (ulong)*(byte *)((long)plVar10 + 0x37);
          }
          sVar3 = uVar1;
          if (uVar5 <= uVar1) {
            sVar3 = uVar5;
          }
          iVar6 = memcmp(__s2,plVar2,sVar3);
          if (iVar6 != 0) break;
          if (uVar5 == uVar1) {
            return;
          }
          if (uVar1 <= uVar5) goto LAB_00b86bc4;
LAB_00b86c14:
          plVar2 = (long *)*plVar10;
          plVar11 = plVar10;
          if ((long *)*plVar10 == (long *)0x0) goto LAB_00b86c28;
        }
        if (iVar6 < 0) goto LAB_00b86c14;
LAB_00b86bc4:
        plVar2 = (long *)plVar10[1];
      } while ((long *)plVar10[1] != (long *)0x0);
      plVar11 = plVar10 + 1;
    }
LAB_00b86c28:
    puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00b869f8(&local_60,plVar9,param_3);
    puVar7 = local_60;
    local_60 = (undefined8 *)0x0;
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = plVar10;
    *plVar11 = (long)puVar7;
    if (*(long *)*plVar9 != 0) {
      *plVar9 = *(long *)*plVar9;
      puVar7 = (undefined8 *)*plVar11;
    }
    FUN_005d5b94(plVar9[1],puVar7);
    plVar9[2] = plVar9[2] + 1;
    goto LAB_00b86c80;
  }
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00b869f8(&local_60,plVar9,param_3);
  lVar8 = *(long *)param_1[1];
  *local_60 = 0;
  local_60[1] = 0;
  local_60[2] = lVar8;
  *(undefined8 **)(lVar8 + 8) = local_60;
  puVar7 = local_60;
  if (*(long *)*plVar9 != 0) {
    *plVar9 = *(long *)*plVar9;
    puVar7 = *(undefined8 **)(lVar8 + 8);
  }
  FUN_005d5b94(plVar9[1],puVar7);
  puVar7 = local_60;
  plVar9[2] = plVar9[2] + 1;
  local_60 = (undefined8 *)0x0;
  *(undefined8 **)param_1[1] = puVar7;
LAB_00b86c80:
  puVar7 = local_60;
  local_60 = (undefined8 *)0x0;
  if (puVar7 != (undefined8 *)0x0) {
    if (((ulong)local_50 & 1) != 0) {
      if (puVar7 == (undefined8 *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      if (*(char *)((long)puVar7 + 0x4f) < '\0') {
        operator_delete((void *)puVar7[7]);
        cVar4 = *(char *)((long)puVar7 + 0x37);
      }
      else {
        cVar4 = *(char *)((long)puVar7 + 0x37);
      }
      if (cVar4 < '\0') {
        operator_delete((void *)puVar7[4]);
      }
    }
    operator_delete(puVar7);
  }
  return;
}


// ===== 00b86d14  FUN_00b86d14 =====

void FUN_00b86d14(undefined8 *****param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 ****__n;
  ulong uVar2;
  undefined8 *****__src;
  undefined8 ****ppppuVar3;
  ulong uVar4;
  undefined8 *****__dest;
  undefined8 ****local_58;
  undefined8 ***pppuStack_50;
  ulong local_48;
  
  local_58 = (undefined8 *****)0x0;
  pppuStack_50 = (undefined8 ****)0x0;
  local_48 = 0;
  FUN_00b86e5c(&local_58,param_2);
  uVar4 = local_48;
  ppppuVar3 = local_58;
  __n = (undefined8 ****)pppuStack_50;
  __src = (undefined8 *****)local_58;
  if (-1 < (long)local_48) {
    __n = (undefined8 ****)(local_48 >> 0x38);
    __src = &local_58;
  }
  if (__src == (undefined8 *****)0x0 && __n != (undefined8 ****)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/string:1081: libc++ Hardening assertion __n == 0 || __s != nullptr failed: basic_string(const char*, n) detected nullptr\n"
              );
  }
  if ((undefined8 ****)0x7ffffffffffffff6 < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (__n < (undefined8 ****)0x17) {
    *(char *)((long)param_1 + 0x17) = (char)__n;
    __dest = param_1;
  }
  else {
    uVar1 = ((ulong)__n & 0x7ffffffffffffff8) + 8;
    uVar2 = 0x19;
    if (uVar1 != 0x18) {
      uVar2 = uVar1;
    }
    __dest = (undefined8 *****)operator_new(uVar2);
    *param_1 = __dest;
    param_1[1] = __n;
    param_1[2] = (undefined8 ****)(uVar2 | 0x8000000000000000);
  }
  if ((undefined8 *****)((long)__dest + (long)__n) < __dest) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
              );
  }
  if ((__dest <= __src) && (__src < (undefined8 *****)((long)__dest + (long)__n))) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
              );
  }
  memmove(__dest,__src,(size_t)__n);
  *(undefined1 *)((long)__dest + (long)__n) = 0;
  if ((long)uVar4 < 0) {
    operator_delete(ppppuVar3);
  }
  return;
}


// ===== 00b86e5c  FUN_00b86e5c =====

void FUN_00b86e5c(undefined8 param_1,undefined4 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  
  auVar3 = FUN_005eceec(*param_2);
  thunk_FUN_00547cac(param_1,auVar3._0_8_,auVar3._8_8_);
  uVar1 = *(ulong *)(param_2 + 4);
  if ((*(byte *)((long)param_2 + 0x1f) & 0x80) == 0) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x1f);
  }
  if (uVar1 == 0) {
    return;
  }
  thunk_FUN_00547cac(param_1," with message: \"",0x10);
  uVar1 = *(ulong *)(param_2 + 4);
  puVar2 = *(undefined8 **)(param_2 + 2);
  if (-1 < (char)*(byte *)((long)param_2 + 0x1f)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x1f);
    puVar2 = (undefined8 *)(param_2 + 2);
  }
  thunk_FUN_00547cac(param_1,puVar2,uVar1);
  thunk_FUN_00547cac(param_1,&DAT_001d6255,1);
  return;
}


// ===== 00b86f14  FUN_00b86f14 =====

void FUN_00b86f14(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00b86f24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0xd8))();
  return;
}


// ===== 00b86f28  FUN_00b86f28 =====

void FUN_00b86f28(undefined8 *param_1)

{
  param_1 = (undefined8 *)*param_1;
                    /* WARNING: Could not recover jumptable at 0x00b86f44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0xe0))
            ((long *)*param_1,param_1 + 1,*(undefined1 *)(param_1 + 0xd));
  return;
}


// ===== 00b86f48  FUN_00b86f48 =====

void FUN_00b86f48(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  void *pvVar2;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0xb86fb0);
      (*pcVar1)();
    }
    pvVar2 = (void *)*param_2;
    if (pvVar2 != (void *)0x0) {
      FUN_007b6d78((long)pvVar2 + 8);
      operator_delete(pvVar2);
      return;
    }
  }
  return;
}


// ===== 00b86fb0  FUN_00b86fb0 =====

undefined1  [16]
FUN_00b86fb0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  uint *puVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  
  puVar6 = (uint *)*param_5;
  plVar4 = param_2 + 1;
  plVar7 = plVar4;
  if ((long *)*plVar4 != (long *)0x0) {
    uVar1 = *puVar6;
    plVar2 = (long *)*plVar4;
    do {
      while (plVar3 = plVar2, plVar4 = plVar3, uVar1 < *(uint *)(plVar3 + 4)) {
        plVar2 = (long *)*plVar3;
        plVar7 = plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_00b87018;
      }
      if (uVar1 == *(uint *)(plVar3 + 4)) {
        uVar5 = 0;
        goto LAB_00b87088;
      }
      plVar2 = (long *)plVar3[1];
    } while ((long *)plVar3[1] != (long *)0x0);
    plVar7 = plVar3 + 1;
  }
LAB_00b87018:
  plVar3 = (long *)operator_new(0x30);
  if ((plVar3 == (long *)0x0) || (*plVar3 = 0, plVar3 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  uVar1 = *puVar6;
  plVar3[5] = 0;
  *plVar3 = 0;
  plVar3[1] = 0;
  *(uint *)(plVar3 + 4) = uVar1;
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
LAB_00b87088:
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = plVar3;
  return auVar8;
}


// ===== 00b870b8  FUN_00b870b8 =====

void FUN_00b870b8(undefined8 *param_1)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar4 = (long *)*param_1;
  plVar3 = (long *)(**(code **)(**(long **)(*plVar4 + 0x90) + 0x68))();
  uVar1 = plVar4[2];
  plVar2 = (long *)plVar4[1];
  if (-1 < (char)*(byte *)((long)plVar4 + 0x1f)) {
    uVar1 = (ulong)*(byte *)((long)plVar4 + 0x1f);
    plVar2 = plVar4 + 1;
  }
  (**(code **)(*plVar3 + 0x78))(plVar3,plVar2,uVar1,plVar4 + 4);
                    /* WARNING: Could not recover jumptable at 0x00b8712c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 200))(plVar3,(long)(int)plVar4[8]);
  return;
}


// ===== 00b87130  FUN_00b87130 =====

void FUN_00b87130(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  void *pvVar2;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0xb871a8);
      (*pcVar1)();
    }
    pvVar2 = (void *)*param_2;
    if (pvVar2 != (void *)0x0) {
      if (*(char *)((long)pvVar2 + 0x1f) < '\0') {
        operator_delete(*(void **)((long)pvVar2 + 8));
      }
      operator_delete(pvVar2);
      return;
    }
  }
  return;
}


// ===== 00b871a8  FUN_00b871a8 =====

void FUN_00b871a8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_00b871a8(param_1,*param_2);
      if (param_2 == (undefined8 *)0xffffffffffffffe0) {
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


// ===== 00b8721c  FUN_00b8721c =====

undefined1  [16]
FUN_00b8721c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  uint *puVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  
  puVar6 = (uint *)*param_5;
  plVar4 = param_2 + 1;
  plVar7 = plVar4;
  if ((long *)*plVar4 != (long *)0x0) {
    uVar1 = *puVar6;
    plVar2 = (long *)*plVar4;
    do {
      while (plVar3 = plVar2, plVar4 = plVar3, uVar1 < *(uint *)(plVar3 + 4)) {
        plVar2 = (long *)*plVar3;
        plVar7 = plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_00b87284;
      }
      if (uVar1 == *(uint *)(plVar3 + 4)) {
        uVar5 = 0;
        goto LAB_00b872f4;
      }
      plVar2 = (long *)plVar3[1];
    } while ((long *)plVar3[1] != (long *)0x0);
    plVar7 = plVar3 + 1;
  }
LAB_00b87284:
  plVar3 = (long *)operator_new(0x30);
  if ((plVar3 == (long *)0x0) || (*plVar3 = 0, plVar3 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  uVar1 = *puVar6;
  plVar3[5] = 0;
  *plVar3 = 0;
  plVar3[1] = 0;
  *(uint *)(plVar3 + 4) = uVar1;
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
LAB_00b872f4:
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = plVar3;
  return auVar8;
}


// ===== 00b87324  FUN_00b87324 =====

void FUN_00b87324(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_b8 [144];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = *(undefined8 *)*param_1;
  FUN_007dc0f4(auStack_b8,(undefined8 *)*param_1 + 1);
  FUN_00b7e8e8(uVar2,auStack_b8);
  FUN_007dc1b4(auStack_b8);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00b87390  FUN_00b87390 =====

void FUN_00b87390(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  void *pvVar2;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0xb873f8);
      (*pcVar1)();
    }
    pvVar2 = (void *)*param_2;
    if (pvVar2 != (void *)0x0) {
      FUN_007dc1b4((long)pvVar2 + 8);
      operator_delete(pvVar2);
      return;
    }
  }
  return;
}


// ===== 00b873f8  FUN_00b873f8 =====

void FUN_00b873f8(long *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  param_1 = (long *)*param_1;
  UNRECOVERED_JUMPTABLE = (code *)*param_1;
  if ((param_1[1] & 1U) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(param_1[2] + (param_1[1] >> 1)));
  }
                    /* WARNING: Could not recover jumptable at 0x00b87418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


// ===== 00b8741c  FUN_00b8741c =====

void FUN_00b8741c(long *param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_140 [247];
  undefined1 uStack_49;
  long local_48;
  long *local_40;
  long *local_38;
  
  if ((*(long *)(param_2 + 0x10) == 0) || (uVar1 = FUN_007e18fc(), (uVar1 & 1) != 0)) {
    local_40 = (long *)&DAT_aaaaaaaaaaaaaaaa;
    FUN_00b1e9c4(auStack_140,param_2);
    FUN_00b89a70(&local_40,auStack_140);
    FUN_00b1eafc(auStack_140);
    plVar3 = local_40;
    if (local_40 == (long *)0x0) {
      *param_1 = 0;
    }
    else {
      auVar4 = *(undefined1 (*) [16])(local_40[6] + 0x30);
      (**(code **)*local_40)(local_40);
      puVar2 = (undefined8 *)operator_new(0x28);
      puVar2[3] = plVar3;
      auVar4 = NEON_ext(auVar4,auVar4,8,1);
      *puVar2 = &PTR_FUN_00d46688;
      *(undefined4 *)(puVar2 + 4) = 0;
      puVar2[2] = auVar4._8_8_;
      puVar2[1] = auVar4._0_8_;
      if (puVar2 != (undefined8 *)0x0) {
        FUN_00d0f740(1,puVar2 + 4);
      }
      *param_1 = (long)puVar2;
      if (local_40 != (long *)0x0) {
        (**(code **)(*local_40 + 8))();
      }
    }
  }
  else {
    plVar3 = *(long **)(param_2 + 0x10);
    local_38 = &local_48;
    *param_1 = 0;
    local_48 = param_2;
    local_40 = param_1;
    (**(code **)(*plVar3 + 0x60))(plVar3,&local_40,FUN_00b87540,&uStack_49);
  }
  return;
}


// ===== 00b87540  FUN_00b87540 =====

void FUN_00b87540(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *local_118;
  undefined1 auStack_110 [240];
  
  FUN_00b1e9c4(auStack_110,*(undefined8 *)param_1[1]);
  FUN_00b8741c(&local_118,auStack_110);
  FUN_00b1eafc(auStack_110);
  plVar1 = local_118;
  local_118 = (long *)0x0;
  plVar2 = *(long **)*param_1;
  *(long **)*param_1 = plVar1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (local_118 != (long *)0x0) {
    (**(code **)(*local_118 + 8))();
  }
  return;
}


// ===== 00b875c8  FUN_00b875c8 =====

void FUN_00b875c8(long param_1)

{
  FUN_00d0f740(1,param_1 + 0x20);
  return;
}


// ===== 00b875ec  FUN_00b875ec =====

bool FUN_00b875ec(long *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d0f7a0(0xffffffff,param_1 + 4);
  if ((param_1 != (long *)0x0) && (iVar1 == 1)) {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return iVar1 != 1;
}


// ===== 00b87644  FUN_00b87644 =====

void FUN_00b87644(undefined8 *param_1)

{
  undefined8 *local_98;
  code *pcStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *puStack_30;
  undefined1 *puStack_28;
  
  *param_1 = &PTR_FUN_00d46710;
  pcStack_90 = FUN_00b87fc8;
  local_88 = 0;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_28 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_30 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = param_1;
  FUN_0066f1ac((long)&local_80 + 4);
  FUN_00b88004(&local_98,param_1[1]);
  FUN_0066f2b0((long)&local_80 + 4);
  if ((long *)param_1[3] != (long *)0x0) {
    (**(code **)(*(long *)param_1[3] + 8))();
  }
  return;
}


// ===== 00b876d0  FUN_00b876d0 =====

void FUN_00b876d0(undefined8 *param_1)

{
  ulong uVar1;
  code *pcVar2;
  long *plVar3;
  undefined8 *local_c8;
  code *local_c0;
  ulong local_b8;
  undefined8 local_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined8 **local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  *param_1 = &PTR_FUN_00d46710;
  local_c0 = FUN_00b87fc8;
  local_b8 = 0;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_c8 = param_1;
  FUN_0066f1ac((long)&local_b0 + 4);
  plVar3 = (long *)param_1[1];
  uVar1 = FUN_007e18fc(plVar3);
  if ((uVar1 & 1) == 0) {
    local_40 = FUN_004473ec;
    pcStack_38 = FUN_00b880c8;
    local_50[0] = &local_c8;
    (**(code **)(*plVar3 + 8))(plVar3,local_50,&uStack_11,&uStack_12);
    (*local_40)(0,local_50,local_50);
    FUN_0066f318((long)&local_b0 + 4,0x7fffffffffffffff,3000000);
  }
  else {
    pcVar2 = local_c0;
    if ((local_b8 & 1) != 0) {
      pcVar2 = *(code **)(local_c0 + *(long *)((long)local_c8 + ((long)local_b8 >> 1)));
    }
    (*pcVar2)();
  }
  FUN_0066f2b0((long)&local_b0 + 4);
  if ((long *)param_1[3] != (long *)0x0) {
    (**(code **)(*(long *)param_1[3] + 8))();
  }
  operator_delete(param_1);
  return;
}


// ===== 00b877f0  FUN_00b877f0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b877f0(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  long *plVar4;
  undefined1 uStack_e2;
  undefined1 uStack_e1;
  long *local_e0 [2];
  code *local_d0;
  code *pcStack_c8;
  long local_c0;
  code *local_b8;
  ulong uStack_b0;
  undefined1 *local_a8;
  undefined8 uStack_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  undefined1 *local_48;
  undefined1 *puStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = *(long *)(param_1 + 0x18);
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_b0 = _UNK_001f31d8;
  local_b8 = _DAT_001f31d0;
  uStack_a0 = param_2;
  FUN_0066f1ac(&local_98);
  plVar4 = *(long **)(param_1 + 8);
  uVar2 = FUN_007e18fc(plVar4);
  if ((uVar2 & 1) == 0) {
    local_d0 = FUN_004473ec;
    pcStack_c8 = FUN_00b8810c;
    local_e0[0] = &local_c0;
    (**(code **)(*plVar4 + 8))(plVar4,local_e0,&uStack_e1,&uStack_e2);
    (*local_d0)(0,local_e0,local_e0);
    FUN_0066f318(&local_98,0x7fffffffffffffff,3000000);
  }
  else {
    plVar4 = (long *)(local_c0 + ((long)uStack_b0 >> 1));
    pcVar3 = local_b8;
    if ((uStack_b0 & 1) != 0) {
      pcVar3 = *(code **)(local_b8 + *plVar4);
    }
    (*pcVar3)(plVar4,uStack_a0);
  }
  FUN_0066f2b0(&local_98);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00b87920  FUN_00b87920 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b87920(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  void *pvStack_d0;
  undefined8 local_c8;
  undefined5 uStack_c0;
  undefined2 uStack_bb;
  char cStack_b9;
  undefined5 uStack_b8;
  undefined1 uStack_b3;
  undefined1 uStack_b2;
  undefined1 uStack_b1;
  long *plStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  undefined1 *local_48;
  undefined1 *puStack_40;
  undefined1 *local_38;
  
  local_f0 = *(undefined8 *)(param_2 + 0x18);
  uStack_b3 = 0xaa;
  uStack_b1 = 0xaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_d8 = 0xaaaaaaaa0000000a;
  uStack_e0 = _UNK_001f46e8;
  local_e8 = _DAT_001f46e0;
  uStack_b2 = 0;
  pvStack_d0 = (void *)0x0;
  local_c8 = 0;
  uStack_c0 = 0;
  uStack_bb = 0;
  cStack_b9 = '\0';
  uStack_b8 = 0;
  plStack_b0 = (long *)0xaaaaaaaaaaaaaa00;
  local_a8 = 0xaaaaaaaaaaaaaa00;
  uStack_a0 = param_3;
  local_98 = param_4;
  FUN_0066f1ac(&puStack_90);
  FUN_00b88154(param_1,&local_f0,*(undefined8 *)(param_2 + 8));
  FUN_0066f2b0(&puStack_90);
  if (((char)local_a8 == '\x01') && (plStack_b0 != (long *)0x0)) {
    (**(code **)(*plStack_b0 + 8))();
  }
  if (cStack_b9 < '\0') {
    operator_delete(pvStack_d0);
  }
  return;
}


// ===== 00b87a1c  FUN_00b87a1c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b87a1c(undefined8 param_1,long param_2,undefined4 param_3)

{
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 *local_e8;
  undefined1 *puStack_e0;
  undefined1 *local_d8;
  undefined1 *puStack_d0;
  undefined1 *local_c8;
  undefined1 *puStack_c0;
  undefined1 *local_b8;
  undefined1 *puStack_b0;
  undefined1 *local_a8;
  undefined4 *puStack_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  undefined1 *local_48;
  undefined1 *puStack_40;
  undefined4 local_34;
  
  local_100 = *(undefined8 *)(param_2 + 0x18);
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = (undefined4 *)&DAT_aaaaaaaaaaaaaaaa;
  local_a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b0 = &DAT_aaaaaaaaaaaaaaaa;
  local_b8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_c0 = &DAT_aaaaaaaaaaaaaaaa;
  local_c8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d0 = &DAT_aaaaaaaaaaaaaaaa;
  local_d8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e0 = &DAT_aaaaaaaaaaaaaaaa;
  local_e8 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_f0 = _UNK_001f4c48;
  local_f8 = _DAT_001f4c40;
  local_34 = param_3;
  FUN_00669368(&local_e8);
  puStack_a0 = &local_34;
  FUN_0066f1ac(&local_98);
  FUN_00b8848c(param_1,&local_100,*(undefined8 *)(param_2 + 8));
  FUN_0066f2b0(&local_98);
  FUN_00669380(&local_e8);
  return;
}


// ===== 00b87ad8  FUN_00b87ad8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b87ad8(undefined8 param_1,long param_2,undefined4 param_3)

{
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 *local_e8;
  undefined1 *puStack_e0;
  undefined1 *local_d8;
  undefined1 *puStack_d0;
  undefined1 *local_c8;
  undefined1 *puStack_c0;
  undefined1 *local_b8;
  undefined1 *puStack_b0;
  undefined1 *local_a8;
  undefined4 *puStack_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  undefined1 *local_48;
  undefined1 *puStack_40;
  undefined4 local_34;
  
  local_100 = *(undefined8 *)(param_2 + 0x18);
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = (undefined4 *)&DAT_aaaaaaaaaaaaaaaa;
  local_a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b0 = &DAT_aaaaaaaaaaaaaaaa;
  local_b8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_c0 = &DAT_aaaaaaaaaaaaaaaa;
  local_c8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d0 = &DAT_aaaaaaaaaaaaaaaa;
  local_d8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e0 = &DAT_aaaaaaaaaaaaaaaa;
  local_e8 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_f0 = _UNK_001f46f8;
  local_f8 = _DAT_001f46f0;
  local_34 = param_3;
  FUN_00669368(&local_e8);
  puStack_a0 = &local_34;
  FUN_0066f1ac(&local_98);
  FUN_00b8848c(param_1,&local_100,*(undefined8 *)(param_2 + 8));
  FUN_0066f2b0(&local_98);
  FUN_00669380(&local_e8);
  return;
}


// ===== 00b87b94  FUN_00b87b94 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b87b94(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long *local_a0;
  undefined8 uStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  
  local_b8 = *(undefined8 *)(param_2 + 0x18);
  local_a0 = (long *)0x0;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_a8 = _UNK_001f2798;
  local_b0 = _DAT_001f2790;
  uStack_98 = param_3;
  FUN_0066f1ac(&local_90);
  FUN_00b89254(param_1,&local_b8,*(undefined8 *)(param_2 + 8));
  FUN_0066f2b0(&local_90);
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 8))();
  }
  return;
}


// ===== 00b87c2c  FUN_00b87c2c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b87c2c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long *local_a0;
  undefined8 uStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  
  local_b8 = *(undefined8 *)(param_2 + 0x18);
  local_a0 = (long *)0x0;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_a8 = _UNK_001f2338;
  local_b0 = _DAT_001f2330;
  uStack_98 = param_3;
  FUN_0066f1ac(&local_90);
  FUN_00b893e4(param_1,&local_b8,*(undefined8 *)(param_2 + 8));
  FUN_0066f2b0(&local_90);
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 8))();
  }
  return;
}


// ===== 00b87cc4  FUN_00b87cc4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b87cc4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  long *local_b8;
  undefined8 uStack_b0;
  undefined8 *local_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_d0 = *(undefined8 *)(param_2 + 0x18);
  local_a8 = &local_40;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_b8 = (long *)0x0;
  uStack_c0 = _UNK_001f3ab8;
  local_c8 = _DAT_001f3ab0;
  uStack_b0 = param_3;
  local_40 = param_4;
  uStack_38 = param_5;
  FUN_0066f1ac(&local_a0);
  FUN_00b89574(param_1,&local_d0,*(undefined8 *)(param_2 + 8));
  FUN_0066f2b0(&local_a0);
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 8))();
  }
  return;
}


// ===== 00b87d68  FUN_00b87d68 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b87d68(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  long *local_a8;
  undefined8 uStack_a0;
  undefined8 *local_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  undefined8 local_18;
  
  local_c0 = *(undefined8 *)(param_2 + 0x18);
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &local_18;
  local_a8 = (long *)0x0;
  uStack_b0 = _UNK_001f3d98;
  local_b8 = _DAT_001f3d90;
  uStack_a0 = param_3;
  local_18 = param_4;
  FUN_0066f1ac(&local_90);
  FUN_00b89764(param_1,&local_c0,*(undefined8 *)(param_2 + 8));
  FUN_0066f2b0(&local_90);
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 8))();
  }
  return;
}


// ===== 00b87e0c  FUN_00b87e0c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00b87e0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 *local_a8;
  undefined8 *puStack_a0;
  undefined8 *local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  undefined1 *local_48;
  undefined1 *puStack_40;
  undefined1 *local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_c0 = *(undefined8 *)(param_1 + 0x18);
  puStack_a0 = &uStack_28;
  local_a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &local_30;
  uStack_b0 = _UNK_001f1cc8;
  local_b8 = _DAT_001f1cc0;
  local_30 = param_3;
  uStack_28 = param_2;
  FUN_0066f1ac(&puStack_90);
  uVar1 = FUN_00b898fc(&local_c0,*(undefined8 *)(param_1 + 0x10));
  FUN_0066f2b0(&puStack_90);
  return uVar1 & 1;
}


// ===== 00b87eac  FUN_00b87eac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b87eac(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  long *plVar3;
  long local_c0;
  code *local_b8;
  ulong uStack_b0;
  undefined8 local_a8;
  undefined1 *puStack_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined1 *local_40 [2];
  code *local_30;
  code *pcStack_28;
  
  local_c0 = *(long *)(param_1 + 0x18);
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
  local_a8 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_b0 = _UNK_001f2918;
  local_b8 = _DAT_001f2910;
  FUN_0066f1ac((long)&local_a8 + 4);
  plVar3 = *(long **)(param_1 + 0x10);
  uVar1 = FUN_007e18fc(plVar3);
  if ((uVar1 & 1) == 0) {
    local_30 = FUN_004473ec;
    pcStack_28 = FUN_00b89a2c;
    local_40[0] = (undefined1 *)&local_c0;
    (**(code **)(*plVar3 + 8))(plVar3,local_40,&uStack_41,&uStack_42);
    (*local_30)(0,local_40,local_40);
    FUN_0066f318((long)&local_a8 + 4,0x7fffffffffffffff,3000000);
  }
  else {
    pcVar2 = local_b8;
    if ((uStack_b0 & 1) != 0) {
      pcVar2 = *(code **)(local_b8 + *(long *)(local_c0 + ((long)uStack_b0 >> 1)));
    }
    (*pcVar2)();
  }
  FUN_0066f2b0((long)&local_a8 + 4);
  return;
}


// ===== 00b87fa8  FUN_00b87fa8 =====

bool FUN_00b87fa8(long param_1)

{
  return (int)*(undefined8 *)(param_1 + 0x20) == 1;
}


// ===== 00b87fc0  FUN_00b87fc0 =====

void FUN_00b87fc0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xb87fc8);
  (*pcVar1)();
}


// ===== 00b87fc8  FUN_00b87fc8 =====

void FUN_00b87fc8(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}


// ===== 00b88004  FUN_00b88004 =====

void FUN_00b88004(long *param_1,long *param_2)

{
  ulong uVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uStack_42;
  undefined1 uStack_41;
  long *local_40 [2];
  code *local_30;
  code *pcStack_28;
  
  uVar1 = FUN_007e18fc(param_2);
  if ((uVar1 & 1) != 0) {
    UNRECOVERED_JUMPTABLE = (code *)param_1[1];
    if ((param_1[2] & 1U) != 0) {
      UNRECOVERED_JUMPTABLE =
           *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(*param_1 + (param_1[2] >> 1)));
    }
                    /* WARNING: Could not recover jumptable at 0x00b88054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  local_30 = FUN_004473ec;
  pcStack_28 = FUN_00b880c8;
  local_40[0] = param_1;
  (**(code **)(*param_2 + 8))(param_2,local_40,&uStack_41,&uStack_42);
  (*local_30)(0,local_40,local_40);
  FUN_0066f318((long)param_1 + 0x1c,0x7fffffffffffffff,3000000);
  return;
}


// ===== 00b880c8  FUN_00b880c8 =====

void FUN_00b880c8(undefined8 *param_1)

{
  code *pcVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_1;
  pcVar1 = (code *)plVar2[1];
  if ((plVar2[2] & 1U) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(*plVar2 + (plVar2[2] >> 1)));
  }
  (*pcVar1)();
  FUN_0066f2dc((long)plVar2 + 0x1c);
  return;
}


// ===== 00b8810c  FUN_00b8810c =====

void FUN_00b8810c(undefined8 *param_1)

{
  long *plVar1;
  code *pcVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  pcVar2 = (code *)plVar3[1];
  plVar1 = (long *)(*plVar3 + (plVar3[2] >> 1));
  if ((plVar3[2] & 1U) != 0) {
    pcVar2 = *(code **)(pcVar2 + *plVar1);
  }
  (*pcVar2)(plVar1,plVar3[4]);
  FUN_0066f2dc(plVar3 + 5);
  return;
}


// ===== 00b88154  FUN_00b88154 =====

void FUN_00b88154(undefined4 *param_1,undefined8 *param_2,long *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  uVar4 = FUN_007e18fc(param_3);
  if ((uVar4 & 1) == 0) {
    local_40 = FUN_004473ec;
    pcStack_38 = FUN_00b88450;
    local_50[0] = param_2;
    (**(code **)(*param_3 + 8))(param_3,local_50,&uStack_11,&uStack_12);
    (*local_40)(0,local_50,local_50);
    FUN_0066f318(param_2 + 0xc,0x7fffffffffffffff,3000000);
  }
  else {
    FUN_00b88278(param_2 + 3,*param_2,param_2[1],param_2[2],param_2[10],param_2[0xb]);
  }
  cVar3 = *(char *)((long)param_2 + 0x37);
  *param_1 = *(undefined4 *)(param_2 + 3);
  if (cVar3 < '\0') {
    FUN_005478d8(param_1 + 2,param_2[4],param_2[5]);
  }
  else {
    uVar6 = param_2[4];
    uVar5 = param_2[6];
    *(undefined8 *)(param_1 + 4) = param_2[5];
    *(undefined8 *)(param_1 + 2) = uVar6;
    *(undefined8 *)(param_1 + 6) = uVar5;
  }
  cVar3 = *(char *)(param_2 + 9);
  uVar1 = *(undefined4 *)(param_2 + 7);
  uVar2 = *(undefined4 *)((long)param_2 + 0x3b);
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[8] = uVar1;
  *(undefined4 *)((long)param_1 + 0x23) = uVar2;
  *(undefined1 *)(param_1 + 0xc) = 0;
  if (cVar3 == '\x01') {
    uVar5 = param_2[8];
    param_2[8] = 0;
    *(undefined1 *)(param_1 + 0xc) = 1;
    *(undefined8 *)(param_1 + 10) = uVar5;
  }
  return;
}


// ===== 00b88278  FUN_00b88278 =====

/* WARNING: Removing unreachable block (ram,0x00b88300) */

void FUN_00b88278(undefined8 param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5,
                 undefined8 param_6)

{
  long *plVar1;
  undefined1 auStack_c0 [88];
  undefined1 auStack_68 [40];
  long *local_40;
  char local_38;
  
  plVar1 = (long *)(param_2 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(param_3 + *plVar1);
  }
  FUN_00b1e7f0(auStack_c0,param_6);
  (*param_3)(auStack_68,plVar1,param_5,auStack_c0);
  FUN_00b88330(param_1,auStack_68);
  if ((local_38 == '\x01') && (local_40 != (long *)0x0)) {
    (**(code **)(*local_40 + 8))();
  }
  FUN_00b1e878(auStack_c0);
  return;
}


// ===== 00b88330  FUN_00b88330 =====

undefined4 * FUN_00b88330(undefined4 *param_1,undefined4 *param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined4 uVar3;
  byte bVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  
  puVar7 = (undefined8 *)(param_1 + 2);
  *param_1 = *param_2;
  if (param_1 != param_2) {
    bVar4 = *(byte *)((long)param_2 + 0x1f);
    if (*(char *)((long)param_1 + 0x1f) < '\0') {
      uVar2 = *(ulong *)(param_2 + 4);
      puVar6 = *(undefined8 **)(param_2 + 2);
      if (-1 < (char)bVar4) {
        uVar2 = (ulong)bVar4;
        puVar6 = (undefined8 *)(param_2 + 2);
      }
      FUN_00547f08(puVar7,puVar6,uVar2);
    }
    else if ((char)bVar4 < '\0') {
      FUN_00547fc0(puVar7,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
    }
    else {
      uVar11 = *(undefined8 *)(param_2 + 4);
      uVar9 = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
      *(undefined8 *)(param_1 + 4) = uVar11;
      *puVar7 = uVar9;
    }
  }
  uVar3 = param_2[8];
  *(undefined4 *)((long)param_1 + 0x23) = *(undefined4 *)((long)param_2 + 0x23);
  param_1[8] = uVar3;
  cVar5 = *(char *)(param_1 + 0xc);
  plVar1 = (long *)(param_1 + 10);
  if (cVar5 == *(char *)(param_2 + 0xc)) {
    if (cVar5 != '\0') {
      lVar10 = *(long *)(param_2 + 10);
      *(undefined8 *)(param_2 + 10) = 0;
      plVar8 = (long *)*plVar1;
      *plVar1 = lVar10;
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 8))();
      }
    }
  }
  else if (cVar5 == '\0') {
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    uVar9 = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(param_2 + 10) = 0;
    *(undefined1 *)(param_1 + 0xc) = 1;
    *(undefined8 *)(param_1 + 10) = uVar9;
  }
  else {
    if ((long *)*plVar1 != (long *)0x0) {
      (**(code **)(*(long *)*plVar1 + 8))();
    }
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  return param_1;
}


// ===== 00b88450  FUN_00b88450 =====

void FUN_00b88450(undefined8 *param_1)

{
  param_1 = (undefined8 *)*param_1;
  FUN_00b88278(param_1 + 3,*param_1,param_1[1],param_1[2],param_1[10],param_1[0xb]);
  FUN_0066f2dc(param_1 + 0xc);
  return;
}


// ===== 00b8848c  FUN_00b8848c =====

void FUN_00b8848c(undefined8 *param_1,long param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  void *__src;
  long lVar3;
  ulong uVar4;
  void *__dest;
  long *plVar5;
  code *pcVar6;
  long lStack_d8;
  long lStack_d0;
  long lStack_c0;
  long lStack_b8;
  long lStack_a8;
  long lStack_a0;
  undefined1 *puStack_90;
  code *pcStack_88;
  void *pvStack_80;
  ulong uStack_70;
  undefined8 *puStack_68;
  undefined1 uStack_52;
  undefined1 uStack_51;
  long local_50 [2];
  code *local_40;
  code *pcStack_38;
  
  uVar4 = FUN_007e18fc(param_3);
  if ((uVar4 & 1) == 0) {
    local_40 = FUN_004473ec;
    pcStack_38 = FUN_00b8900c;
    local_50[0] = param_2;
    (**(code **)(*param_3 + 8))(param_3,local_50,&uStack_51,&uStack_52);
    (*local_40)(0,local_50,local_50);
    FUN_0066f318(param_2 + 0x68,0x7fffffffffffffff,3000000);
  }
  else {
    FUN_00b885b4(param_2,0);
  }
  lVar2 = *(long *)(param_2 + 0x18);
  lVar3 = *(long *)(param_2 + 0x20);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_00b89124(param_1,lVar2,lVar3,(lVar3 - lVar2 >> 5) * -0x3333333333333333);
  FUN_00b89040(param_1 + 3,param_2 + 0x30);
  __src = *(void **)(param_2 + 0x48);
  lVar2 = *(long *)(param_2 + 0x50);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  uVar4 = lVar2 - (long)__src;
  if (uVar4 != 0) {
    if ((long)uVar4 < 0) {
      plVar5 = (long *)FUN_00b88ff4();
      pcStack_88 = FUN_00b885b4;
      pcVar6 = (code *)plVar5[1];
      plVar1 = (long *)(*plVar5 + (plVar5[2] >> 1));
      if ((plVar5[2] & 1U) != 0) {
        pcVar6 = *(code **)(pcVar6 + *plVar1);
      }
      puStack_90 = &stack0xffffffffffffffd0;
      pvStack_80 = __src;
      uStack_70 = uVar4;
      puStack_68 = param_1;
      (*pcVar6)(&lStack_d8,plVar1,*(undefined4 *)plVar5[0xc]);
      if (plVar5 + 3 != &lStack_d8) {
        FUN_00b88674(plVar5 + 3,lStack_d8,lStack_d0,
                     (lStack_d0 - lStack_d8 >> 5) * -0x3333333333333333);
        FUN_00b88a58(plVar5 + 6,lStack_c0,lStack_b8,
                     (lStack_b8 - lStack_c0 >> 3) * -0x3333333333333333);
        FUN_00b88dcc(plVar5 + 9,lStack_a8,lStack_a0,lStack_a0 - lStack_a8 >> 2);
      }
      FUN_00669380(&lStack_d8);
      return;
    }
    __dest = operator_new(uVar4);
    param_1[6] = __dest;
    param_1[7] = __dest;
    param_1[8] = (long)__dest + uVar4;
    memcpy(__dest,__src,uVar4);
    param_1[7] = (long)__dest + uVar4;
  }
  return;
}


// ===== 00b885b4  FUN_00b885b4 =====

void FUN_00b885b4(long *param_1)

{
  long *plVar1;
  code *pcVar2;
  long local_78;
  long lStack_70;
  long local_60;
  long lStack_58;
  long local_48;
  long lStack_40;
  
  pcVar2 = (code *)param_1[1];
  plVar1 = (long *)(*param_1 + (param_1[2] >> 1));
  if ((param_1[2] & 1U) != 0) {
    pcVar2 = *(code **)(pcVar2 + *plVar1);
  }
  (*pcVar2)(&local_78,plVar1,*(undefined4 *)param_1[0xc]);
  if (param_1 + 3 != &local_78) {
    FUN_00b88674(param_1 + 3,local_78,lStack_70,(lStack_70 - local_78 >> 5) * -0x3333333333333333);
    FUN_00b88a58(param_1 + 6,local_60,lStack_58,(lStack_58 - local_60 >> 3) * -0x3333333333333333);
    FUN_00b88dcc(param_1 + 9,local_48,lStack_40,lStack_40 - local_48 >> 2);
  }
  FUN_00669380(&local_78);
  return;
}


// ===== 00b88674  FUN_00b88674 =====

void FUN_00b88674(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  undefined *puVar1;
  long *plVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar5 = param_1[2];
  puVar10 = (undefined8 *)*param_1;
  if (param_4 <= (ulong)((lVar5 - (long)puVar10 >> 5) * -0x3333333333333333)) {
    puVar6 = (undefined8 *)param_1[1];
    if ((ulong)(((long)puVar6 - (long)puVar10 >> 5) * -0x3333333333333333) < param_4) {
      puVar4 = param_2;
      if (puVar6 != puVar10) {
        puVar4 = (undefined8 *)((long)param_2 + ((long)puVar6 - (long)puVar10));
        param_2 = param_2 + 0xf;
        do {
          FUN_00b61d90(puVar10,param_2 + -0xf);
          uVar3 = *(undefined1 *)((long)param_2 + -0xc);
          *(undefined4 *)(puVar10 + 0xd) = *(undefined4 *)(param_2 + -2);
          *(undefined1 *)((long)puVar10 + 0x6c) = uVar3;
          if (puVar10 != param_2 + -0xf) {
            puVar6 = param_2;
            if ((param_2[-1] & 1) != 0) {
              puVar6 = (undefined8 *)*param_2;
            }
            FUN_007b802c(puVar10 + 0xe,puVar6,(ulong)param_2[-1] >> 1);
          }
          puVar6 = param_2 + 5;
          puVar10 = puVar10 + 0x14;
          param_2 = param_2 + 0x14;
        } while (puVar6 != puVar4);
        puVar6 = (undefined8 *)param_1[1];
      }
      if (puVar4 != param_3) {
        lVar5 = 0;
        puVar1 = PTR_DAT_00d52108 + 0x10;
        do {
          if ((long)puVar6 + lVar5 == 0) goto LAB_00b88a14;
          plVar2 = (long *)((long)puVar6 + lVar5);
          FUN_006684dc((long)puVar6 + lVar5,(long)puVar4 + lVar5);
          *plVar2 = (long)puVar1;
          lVar7 = *(long *)((long)puVar4 + lVar5 + 0x68);
          puVar12 = (ulong *)(plVar2 + 0xe);
          *puVar12 = 0;
          plVar2[0xd] = lVar7;
          puVar11 = (ulong *)((long)puVar4 + lVar5 + 0x70);
          uVar9 = *puVar11;
          if (1 < uVar9) {
            if ((uVar9 & 1) == 0) {
              *puVar12 = uVar9;
              uVar13 = *(undefined8 *)((long)puVar4 + lVar5 + 0x90);
              uVar8 = *(undefined8 *)((long)puVar4 + lVar5 + 0x88);
              uVar15 = *(undefined8 *)((long)puVar4 + lVar5 + 0x80);
              uVar14 = *(undefined8 *)((long)puVar4 + lVar5 + 0x78);
              *(undefined8 *)((long)puVar6 + lVar5 + 0x98) =
                   *(undefined8 *)((long)puVar4 + lVar5 + 0x98);
              *(undefined8 *)((long)puVar6 + lVar5 + 0x90) = uVar13;
              *(undefined8 *)((long)puVar6 + lVar5 + 0x88) = uVar8;
              *(undefined8 *)((long)puVar6 + lVar5 + 0x80) = uVar15;
              *(undefined8 *)((long)puVar6 + lVar5 + 0x78) = uVar14;
            }
            else {
              FUN_007b7fb0(puVar12,puVar11);
            }
          }
          lVar5 = lVar5 + 0xa0;
        } while ((undefined8 *)((long)puVar4 + lVar5) != param_3);
        puVar6 = (undefined8 *)((long)puVar6 + lVar5);
      }
      param_1[1] = puVar6;
      return;
    }
    if (param_2 != param_3) {
      param_2 = param_2 + 0xf;
      do {
        FUN_00b61d90(puVar10,param_2 + -0xf);
        uVar3 = *(undefined1 *)((long)param_2 + -0xc);
        *(undefined4 *)(puVar10 + 0xd) = *(undefined4 *)(param_2 + -2);
        *(undefined1 *)((long)puVar10 + 0x6c) = uVar3;
        if (puVar10 != param_2 + -0xf) {
          puVar6 = param_2;
          if ((param_2[-1] & 1) != 0) {
            puVar6 = (undefined8 *)*param_2;
          }
          FUN_007b802c(puVar10 + 0xe,puVar6,(ulong)param_2[-1] >> 1);
        }
        puVar6 = param_2 + 5;
        puVar10 = puVar10 + 0x14;
        param_2 = param_2 + 0x14;
      } while (puVar6 != param_3);
      puVar6 = (undefined8 *)param_1[1];
    }
    while (puVar10 != puVar6) {
      puVar6 = puVar6 + -0x14;
      if (puVar6 == (undefined8 *)0x0) goto LAB_00b88a28;
      (**(code **)*puVar6)(puVar6);
    }
LAB_00b889f4:
    param_1[1] = puVar10;
    return;
  }
  if (puVar10 != (undefined8 *)0x0) {
    puVar6 = (undefined8 *)param_1[1];
    puVar4 = puVar10;
    if (puVar10 != puVar6) {
      do {
        puVar6 = puVar6 + -0x14;
        if (puVar6 == (undefined8 *)0x0) {
LAB_00b88a28:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        (**(code **)*puVar6)(puVar6);
      } while (puVar6 != puVar10);
      puVar4 = (undefined8 *)*param_1;
    }
    param_1[1] = puVar10;
    operator_delete(puVar4);
    lVar5 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  if (param_4 < 0x19999999999999a) {
    uVar9 = (lVar5 >> 5) * -0x6666666666666666;
    if (uVar9 < param_4 || uVar9 - param_4 == 0) {
      uVar9 = param_4;
    }
    if (0xcccccccccccccb < (ulong)((lVar5 >> 5) * -0x3333333333333333)) {
      uVar9 = 0x199999999999999;
    }
    if (uVar9 < 0x19999999999999a) {
      puVar10 = (undefined8 *)operator_new(uVar9 * 0xa0);
      *param_1 = puVar10;
      param_1[1] = puVar10;
      param_1[2] = puVar10 + uVar9 * 0x14;
      if (param_2 != param_3) {
        lVar5 = 0;
        puVar1 = PTR_DAT_00d52108 + 0x10;
        do {
          if ((long)puVar10 + lVar5 == 0) {
LAB_00b88a14:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          plVar2 = (long *)((long)puVar10 + lVar5);
          FUN_006684dc((long)puVar10 + lVar5,(long)param_2 + lVar5);
          puVar12 = (ulong *)((long)param_2 + lVar5 + 0x70);
          uVar9 = *puVar12;
          lVar7 = *(long *)((long)param_2 + lVar5 + 0x68);
          *plVar2 = (long)puVar1;
          plVar2[0xd] = lVar7;
          puVar11 = (ulong *)(plVar2 + 0xe);
          *puVar11 = 0;
          if (1 < uVar9) {
            if ((uVar9 & 1) == 0) {
              *puVar11 = uVar9;
              uVar13 = *(undefined8 *)((long)param_2 + lVar5 + 0x78);
              uVar15 = *(undefined8 *)((long)param_2 + lVar5 + 0x90);
              uVar14 = *(undefined8 *)((long)param_2 + lVar5 + 0x88);
              uVar8 = *(undefined8 *)((long)param_2 + lVar5 + 0x98);
              *(undefined8 *)((long)puVar10 + lVar5 + 0x80) =
                   *(undefined8 *)((long)param_2 + lVar5 + 0x80);
              *(undefined8 *)((long)puVar10 + lVar5 + 0x78) = uVar13;
              *(undefined8 *)((long)puVar10 + lVar5 + 0x90) = uVar15;
              *(undefined8 *)((long)puVar10 + lVar5 + 0x88) = uVar14;
              *(undefined8 *)((long)puVar10 + lVar5 + 0x98) = uVar8;
            }
            else {
              FUN_007b7fb0(puVar11,puVar12);
            }
          }
          lVar5 = lVar5 + 0xa0;
        } while ((undefined8 *)((long)param_2 + lVar5) != param_3);
        puVar10 = (undefined8 *)((long)puVar10 + lVar5);
      }
      goto LAB_00b889f4;
    }
  }
  FUN_00b88a40();
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00b88a40  FUN_00b88a40 =====

void FUN_00b88a40(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00b88a58  FUN_00b88a58 =====

void FUN_00b88a58(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  
  lVar6 = param_1[2];
  puVar8 = (undefined8 *)*param_1;
  if ((ulong)((lVar6 - (long)puVar8 >> 3) * -0x3333333333333333) < param_4) {
    if (puVar8 != (undefined8 *)0x0) {
      puVar9 = (undefined8 *)param_1[1];
      puVar4 = puVar8;
      if (puVar8 != puVar9) {
        do {
          puVar9 = puVar9 + -5;
          if (puVar9 == (undefined8 *)0x0) goto LAB_00b88db4;
          FUN_00668d5c(puVar9);
        } while (puVar9 != puVar8);
        puVar4 = (undefined8 *)*param_1;
      }
      param_1[1] = puVar8;
      operator_delete(puVar4);
      lVar6 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if (param_4 < 0x666666666666667) {
      uVar7 = (lVar6 >> 3) * -0x6666666666666666;
      if (uVar7 < param_4 || uVar7 - param_4 == 0) {
        uVar7 = param_4;
      }
      if (0x333333333333332 < (ulong)((lVar6 >> 3) * -0x3333333333333333)) {
        uVar7 = 0x666666666666666;
      }
      if (uVar7 < 0x666666666666667) {
        puVar8 = (undefined8 *)operator_new(uVar7 * 0x28);
        *param_1 = puVar8;
        param_1[1] = puVar8;
        param_1[2] = puVar8 + uVar7 * 5;
        if (param_2 != param_3) {
          do {
            if (puVar8 == (undefined8 *)0x0) goto LAB_00b88da0;
            if (*(char *)((long)param_2 + 0x17) < '\0') {
              FUN_005478d8(puVar8,*param_2,param_2[1]);
            }
            else {
              uVar11 = *param_2;
              uVar5 = param_2[2];
              puVar8[1] = param_2[1];
              *puVar8 = uVar11;
              puVar8[2] = uVar5;
            }
            puVar9 = param_2 + 4;
            uVar5 = param_2[3];
            param_2 = param_2 + 5;
            puVar8[4] = *puVar9;
            puVar8[3] = uVar5;
            puVar8 = puVar8 + 5;
          } while (param_2 != param_3);
        }
        goto LAB_00b88d38;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_00b615e4();
  }
  puVar9 = (undefined8 *)param_1[1];
  lVar6 = (long)puVar9 - (long)puVar8;
  if ((ulong)((lVar6 >> 3) * -0x3333333333333333) < param_4) {
    puVar4 = param_2;
    puVar1 = puVar9;
    if (puVar9 != puVar8) {
      lVar10 = 0;
      puVar4 = (undefined8 *)((long)param_2 + lVar6);
      do {
        puVar9 = (undefined8 *)((long)puVar8 + lVar10);
        puVar1 = (undefined8 *)((long)param_2 + lVar10);
        if (param_2 != puVar8) {
          bVar2 = *(byte *)((long)puVar1 + 0x17);
          if (*(char *)((long)puVar9 + 0x17) < '\0') {
            uVar7 = ((long *)((long)param_2 + lVar10))[1];
            puVar3 = *(undefined8 **)((long)param_2 + lVar10);
            if (-1 < (char)bVar2) {
              uVar7 = (ulong)bVar2;
              puVar3 = puVar1;
            }
            FUN_00547f08((long)puVar8 + lVar10,puVar3,uVar7);
          }
          else if ((char)bVar2 < '\0') {
            FUN_00547fc0((long)puVar8 + lVar10,*(undefined8 *)((long)param_2 + lVar10),
                         ((undefined8 *)((long)param_2 + lVar10))[1]);
          }
          else {
            uVar11 = puVar1[1];
            uVar5 = *puVar1;
            puVar9[2] = puVar1[2];
            puVar9[1] = uVar11;
            *puVar9 = uVar5;
          }
        }
        uVar5 = puVar1[3];
        lVar10 = lVar10 + 0x28;
        puVar9[4] = puVar1[4];
        puVar9[3] = uVar5;
      } while (lVar6 != lVar10);
      puVar9 = (undefined8 *)param_1[1];
      puVar1 = puVar9;
    }
    while( true ) {
      if (puVar4 == param_3) {
        param_1[1] = puVar9;
        return;
      }
      if (puVar1 == (undefined8 *)0x0) break;
      if (*(char *)((long)puVar4 + 0x17) < '\0') {
        FUN_005478d8(puVar1,*puVar4,puVar4[1]);
      }
      else {
        uVar11 = puVar4[1];
        uVar5 = *puVar4;
        puVar1[2] = puVar4[2];
        puVar1[1] = uVar11;
        *puVar1 = uVar5;
      }
      uVar5 = puVar4[3];
      puVar9 = puVar9 + 5;
      puVar1[4] = puVar4[4];
      puVar1[3] = uVar5;
      puVar4 = puVar4 + 5;
      puVar1 = puVar1 + 5;
    }
LAB_00b88da0:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  if (param_2 == param_3) {
    if (puVar8 == puVar9) goto LAB_00b88d38;
  }
  else {
    do {
      if (param_2 != puVar8) {
        bVar2 = *(byte *)((long)param_2 + 0x17);
        if (*(char *)((long)puVar8 + 0x17) < '\0') {
          uVar7 = param_2[1];
          puVar9 = (undefined8 *)*param_2;
          if (-1 < (char)bVar2) {
            uVar7 = (ulong)bVar2;
            puVar9 = param_2;
          }
          FUN_00547f08(puVar8,puVar9,uVar7);
        }
        else if ((char)bVar2 < '\0') {
          FUN_00547fc0(puVar8,*param_2,param_2[1]);
        }
        else {
          uVar11 = param_2[1];
          uVar5 = *param_2;
          puVar8[2] = param_2[2];
          puVar8[1] = uVar11;
          *puVar8 = uVar5;
        }
      }
      puVar9 = param_2 + 4;
      uVar5 = param_2[3];
      param_2 = param_2 + 5;
      puVar8[4] = *puVar9;
      puVar8[3] = uVar5;
      puVar8 = puVar8 + 5;
    } while (param_2 != param_3);
    puVar9 = (undefined8 *)param_1[1];
    if (puVar8 == puVar9) goto LAB_00b88d38;
  }
  do {
    puVar9 = puVar9 + -5;
    if (puVar9 == (undefined8 *)0x0) {
LAB_00b88db4:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    FUN_00668d5c(puVar9);
  } while (puVar9 != puVar8);
LAB_00b88d38:
  param_1[1] = puVar8;
  return;
}


// ===== 00b88dcc  FUN_00b88dcc =====

void FUN_00b88dcc(undefined8 *param_1,void *param_2,long param_3,ulong param_4)

{
  size_t __n;
  long lVar1;
  ulong uVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  size_t __n_00;
  void *pvVar6;
  
  uVar2 = param_1[2];
  pvVar6 = (void *)*param_1;
  if ((ulong)((long)(uVar2 - (long)pvVar6) >> 2) < param_4) {
    if (pvVar6 == (void *)0x0) {
LAB_00b88f70:
      if (param_4 >> 0x3e == 0) {
        uVar5 = (long)uVar2 >> 1;
        if ((ulong)((long)uVar2 >> 1) <= param_4) {
          uVar5 = param_4;
        }
        if (0x7ffffffffffffffb < uVar2) {
          uVar5 = 0x3fffffffffffffff;
        }
        if (uVar5 >> 0x3e == 0) {
          pvVar6 = operator_new(uVar5 * 4);
          *param_1 = pvVar6;
          param_1[1] = pvVar6;
          param_1[2] = (void *)((long)pvVar6 + uVar5 * 4);
          memcpy(pvVar6,param_2,param_3 - (long)param_2);
          lVar1 = (long)pvVar6 + (param_3 - (long)param_2);
          goto LAB_00b88fcc;
        }
      }
      FUN_00b88ff4();
                    /* WARNING: Subroutine does not return */
      FUN_005d34a4("vector");
    }
    pvVar3 = (void *)param_1[1];
    uVar5 = (ulong)((long)pvVar3 + (-4 - ((long)pvVar3 << 0x3e))) >> 2;
    uVar2 = (ulong)(((long)pvVar6 - (long)pvVar3 << 0x3e) - ((long)pvVar6 - (long)pvVar3)) >> 2;
    if (uVar5 <= uVar2) {
      uVar2 = uVar5;
    }
    if ((1 < uVar2) && ((((int)pvVar6 - (int)pvVar3 | -(int)pvVar3) & 3U) == 0)) {
      uVar2 = uVar2 & 0x3ffffffffffffffe;
      pvVar3 = (void *)((long)pvVar3 + uVar2 * -4);
      do {
        uVar2 = uVar2 - 2;
      } while (uVar2 != 0);
    }
    do {
      if (pvVar3 == pvVar6) {
        param_1[1] = pvVar6;
        operator_delete(pvVar6);
        uVar2 = 0;
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        goto LAB_00b88f70;
      }
      pvVar3 = (void *)((long)pvVar3 + -4);
    } while (pvVar3 != (void *)0x0);
  }
  else {
    __n = param_1[1] - (long)pvVar6;
    if ((ulong)((long)__n >> 2) < param_4) {
      memmove(pvVar6,param_2,__n);
      pvVar6 = (void *)param_1[1];
      __n_00 = param_3 - (long)((long)param_2 + __n);
      memmove(pvVar6,(void *)((long)param_2 + __n),__n_00);
      lVar1 = (long)pvVar6 + __n_00;
LAB_00b88fcc:
      param_1[1] = lVar1;
      return;
    }
    memmove(pvVar6,param_2,param_3 - (long)param_2);
    lVar1 = param_1[1];
    lVar4 = (long)pvVar6 + (param_3 - (lVar1 + (long)param_2));
    uVar2 = (ulong)((lVar4 << 0x3e) - lVar4) >> 2;
    uVar5 = (lVar1 - (lVar1 << 0x3e)) - 4U >> 2;
    if (uVar5 <= uVar2) {
      uVar2 = uVar5;
    }
    lVar4 = (long)pvVar6 + (param_3 - (long)param_2);
    if ((1 < uVar2) &&
       (((((int)pvVar6 + (int)param_3) - ((int)lVar1 + (int)param_2) | -(int)lVar1) & 3U) == 0)) {
      uVar2 = uVar2 & 0x3ffffffffffffffe;
      lVar1 = lVar1 + uVar2 * -4;
      do {
        uVar2 = uVar2 - 2;
      } while (uVar2 != 0);
    }
    do {
      if (lVar1 == lVar4) {
        param_1[1] = lVar4;
        return;
      }
      lVar1 = lVar1 + -4;
    } while (lVar1 != 0);
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00b88ff4  FUN_00b88ff4 =====

void FUN_00b88ff4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00b8900c  FUN_00b8900c =====

void FUN_00b8900c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  FUN_00b885b4(lVar1,0);
  FUN_0066f2dc(lVar1 + 0x68);
  return;
}


// ===== 00b89040  FUN_00b89040 =====

void FUN_00b89040(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar5 = (undefined8 *)*param_2;
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = (long)puVar1 - (long)puVar5;
  if (uVar2 != 0) {
    if (0x666666666666666 < (ulong)(((long)uVar2 >> 3) * -0x3333333333333333)) {
                    /* WARNING: Subroutine does not return */
      FUN_00b615e4();
    }
    puVar4 = (undefined8 *)operator_new(uVar2);
    *param_1 = puVar4;
    param_1[1] = puVar4;
    param_1[2] = (long)puVar4 + uVar2;
    do {
      if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      if (*(char *)((long)puVar5 + 0x17) < '\0') {
        FUN_005478d8(puVar4,*puVar5,puVar5[1]);
      }
      else {
        uVar7 = puVar5[1];
        uVar6 = *puVar5;
        puVar4[2] = puVar5[2];
        puVar4[1] = uVar7;
        *puVar4 = uVar6;
      }
      puVar3 = puVar5 + 4;
      uVar6 = puVar5[3];
      puVar5 = puVar5 + 5;
      puVar4[4] = *puVar3;
      puVar4[3] = uVar6;
      puVar4 = puVar4 + 5;
    } while (puVar5 != puVar1);
    param_1[1] = puVar4;
  }
  return;
}


// ===== 00b89124  FUN_00b89124 =====

void FUN_00b89124(undefined8 *param_1,long param_2,long param_3,ulong param_4)

{
  undefined *puVar1;
  void *pvVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *extraout_x8;
  long lVar7;
  undefined8 uVar8;
  code *pcVar9;
  ulong *puVar10;
  ulong *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  long *aplStack_a0 [2];
  code *pcStack_90;
  code *pcStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 uStack_62;
  undefined1 uStack_61;
  
  if (param_4 != 0) {
    if (0x199999999999999 < param_4) {
      auVar16 = FUN_00b88a40();
      plVar5 = auVar16._8_8_;
      plVar3 = auVar16._0_8_;
      pcStack_78 = FUN_00b89254;
      puStack_80 = &stack0xffffffffffffffb0;
      uVar6 = FUN_007e18fc(plVar5);
      if ((uVar6 & 1) == 0) {
        pcStack_90 = FUN_004473ec;
        pcStack_88 = FUN_00b89360;
        aplStack_a0[0] = plVar3;
        (**(code **)(*plVar5 + 8))(plVar5,aplStack_a0,&uStack_61,&uStack_62);
        (*pcStack_90)(0,aplStack_a0,aplStack_a0);
        FUN_0066f318(plVar3 + 5,0x7fffffffffffffff,3000000);
      }
      else {
        pcVar9 = (code *)plVar3[1];
        plVar5 = (long *)(*plVar3 + (plVar3[2] >> 1));
        if ((plVar3[2] & 1U) != 0) {
          pcVar9 = *(code **)(pcVar9 + *plVar5);
        }
        (*pcVar9)(aplStack_a0,plVar5,plVar3[4]);
        plVar5 = aplStack_a0[0];
        plVar4 = (long *)plVar3[3];
        aplStack_a0[0] = (long *)0x0;
        plVar3[3] = (long)plVar5;
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 8))();
          if (aplStack_a0[0] != (long *)0x0) {
            (**(code **)(*aplStack_a0[0] + 8))();
          }
        }
      }
      lVar12 = plVar3[3];
      plVar3[3] = 0;
      *extraout_x8 = lVar12;
      return;
    }
    pvVar2 = operator_new(param_4 * 0xa0);
    *param_1 = pvVar2;
    param_1[1] = pvVar2;
    param_1[2] = (void *)((long)pvVar2 + param_4 * 0xa0);
    if (param_2 != param_3) {
      lVar12 = 0;
      puVar1 = PTR_DAT_00d52108 + 0x10;
      do {
        if ((long)pvVar2 + lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        plVar3 = (long *)((long)pvVar2 + lVar12);
        FUN_006684dc((long)pvVar2 + lVar12,param_2 + lVar12);
        puVar11 = (ulong *)(param_2 + lVar12 + 0x70);
        uVar6 = *puVar11;
        lVar7 = *(long *)(param_2 + lVar12 + 0x68);
        *plVar3 = (long)puVar1;
        plVar3[0xd] = lVar7;
        puVar10 = (ulong *)(plVar3 + 0xe);
        *puVar10 = 0;
        if (1 < uVar6) {
          if ((uVar6 & 1) == 0) {
            lVar7 = param_2 + lVar12;
            *puVar10 = uVar6;
            uVar13 = *(undefined8 *)(lVar7 + 0x78);
            uVar15 = *(undefined8 *)(lVar7 + 0x90);
            uVar14 = *(undefined8 *)(lVar7 + 0x88);
            uVar8 = *(undefined8 *)(lVar7 + 0x98);
            *(undefined8 *)((long)pvVar2 + lVar12 + 0x80) = *(undefined8 *)(lVar7 + 0x80);
            *(undefined8 *)((long)pvVar2 + lVar12 + 0x78) = uVar13;
            *(undefined8 *)((long)pvVar2 + lVar12 + 0x90) = uVar15;
            *(undefined8 *)((long)pvVar2 + lVar12 + 0x88) = uVar14;
            *(undefined8 *)((long)pvVar2 + lVar12 + 0x98) = uVar8;
          }
          else {
            FUN_007b7fb0(puVar10,puVar11);
          }
        }
        lVar12 = lVar12 + 0xa0;
      } while (param_2 + lVar12 != param_3);
      pvVar2 = (void *)((long)pvVar2 + lVar12);
    }
    param_1[1] = pvVar2;
  }
  return;
}


// ===== 00b89254  FUN_00b89254 =====

void FUN_00b89254(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  code *pcVar5;
  long *local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  uVar2 = FUN_007e18fc(param_3);
  if ((uVar2 & 1) == 0) {
    local_40 = FUN_004473ec;
    pcStack_38 = FUN_00b89360;
    local_50[0] = param_2;
    (**(code **)(*param_3 + 8))(param_3,local_50,&uStack_11,&uStack_12);
    (*local_40)(0,local_50,local_50);
    FUN_0066f318(param_2 + 5,0x7fffffffffffffff,3000000);
  }
  else {
    pcVar5 = (code *)param_2[1];
    plVar1 = (long *)(*param_2 + (param_2[2] >> 1));
    if ((param_2[2] & 1U) != 0) {
      pcVar5 = *(code **)(pcVar5 + *plVar1);
    }
    (*pcVar5)(local_50,plVar1,param_2[4]);
    plVar1 = local_50[0];
    plVar3 = (long *)param_2[3];
    local_50[0] = (long *)0x0;
    param_2[3] = (long)plVar1;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
      if (local_50[0] != (long *)0x0) {
        (**(code **)(*local_50[0] + 8))();
      }
    }
  }
  lVar4 = param_2[3];
  param_2[3] = 0;
  *param_1 = lVar4;
  return;
}


// ===== 00b89360  FUN_00b89360 =====

void FUN_00b89360(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  long *plVar4;
  long *local_8;
  
  plVar4 = (long *)*param_1;
  pcVar3 = (code *)plVar4[1];
  plVar1 = (long *)(*plVar4 + (plVar4[2] >> 1));
  if ((plVar4[2] & 1U) != 0) {
    pcVar3 = *(code **)(pcVar3 + *plVar1);
  }
  (*pcVar3)(&local_8,plVar1,plVar4[4]);
  plVar1 = local_8;
  local_8 = (long *)0x0;
  plVar2 = (long *)plVar4[3];
  plVar4[3] = (long)plVar1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
    if (local_8 != (long *)0x0) {
      (**(code **)(*local_8 + 8))();
    }
  }
  FUN_0066f2dc(plVar4 + 5);
  return;
}


// ===== 00b893e4  FUN_00b893e4 =====

void FUN_00b893e4(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  code *pcVar5;
  long *local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  uVar2 = FUN_007e18fc(param_3);
  if ((uVar2 & 1) == 0) {
    local_40 = FUN_004473ec;
    pcStack_38 = FUN_00b894f0;
    local_50[0] = param_2;
    (**(code **)(*param_3 + 8))(param_3,local_50,&uStack_11,&uStack_12);
    (*local_40)(0,local_50,local_50);
    FUN_0066f318(param_2 + 5,0x7fffffffffffffff,3000000);
  }
  else {
    pcVar5 = (code *)param_2[1];
    plVar1 = (long *)(*param_2 + (param_2[2] >> 1));
    if ((param_2[2] & 1U) != 0) {
      pcVar5 = *(code **)(pcVar5 + *plVar1);
    }
    (*pcVar5)(local_50,plVar1,param_2[4]);
    plVar1 = local_50[0];
    plVar3 = (long *)param_2[3];
    local_50[0] = (long *)0x0;
    param_2[3] = (long)plVar1;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
      if (local_50[0] != (long *)0x0) {
        (**(code **)(*local_50[0] + 8))();
      }
    }
  }
  lVar4 = param_2[3];
  param_2[3] = 0;
  *param_1 = lVar4;
  return;
}


// ===== 00b894f0  FUN_00b894f0 =====

void FUN_00b894f0(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  long *plVar4;
  long *local_8;
  
  plVar4 = (long *)*param_1;
  pcVar3 = (code *)plVar4[1];
  plVar1 = (long *)(*plVar4 + (plVar4[2] >> 1));
  if ((plVar4[2] & 1U) != 0) {
    pcVar3 = *(code **)(pcVar3 + *plVar1);
  }
  (*pcVar3)(&local_8,plVar1,plVar4[4]);
  plVar1 = local_8;
  local_8 = (long *)0x0;
  plVar2 = (long *)plVar4[3];
  plVar4[3] = (long)plVar1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
    if (local_8 != (long *)0x0) {
      (**(code **)(*local_8 + 8))();
    }
  }
  FUN_0066f2dc(plVar4 + 5);
  return;
}


// ===== 00b89574  FUN_00b89574 =====

void FUN_00b89574(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  code *pcVar6;
  undefined1 uStack_51;
  long *local_50 [2];
  code *local_40;
  code *pcStack_38;
  long *local_18;
  
  uVar3 = FUN_007e18fc(param_3);
  if ((uVar3 & 1) == 0) {
    local_40 = FUN_004473ec;
    pcStack_38 = FUN_00b896a8;
    local_50[0] = param_2;
    (**(code **)(*param_3 + 8))(param_3,local_50,&local_18,&uStack_51);
    (*local_40)(0,local_50,local_50);
    FUN_0066f318(param_2 + 6,0x7fffffffffffffff,3000000);
  }
  else {
    pcVar6 = (code *)param_2[1];
    puVar2 = (undefined8 *)param_2[5];
    plVar1 = (long *)(*param_2 + (param_2[2] >> 1));
    if ((param_2[2] & 1U) != 0) {
      pcVar6 = *(code **)(pcVar6 + *plVar1);
    }
    local_18 = *(long **)param_2[4];
    *(undefined8 *)param_2[4] = 0;
    (*pcVar6)(local_50,plVar1,&local_18,*puVar2,puVar2[1]);
    plVar1 = local_50[0];
    plVar4 = (long *)param_2[3];
    local_50[0] = (long *)0x0;
    param_2[3] = (long)plVar1;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
      if (local_50[0] != (long *)0x0) {
        (**(code **)(*local_50[0] + 8))();
      }
    }
    if (local_18 != (long *)0x0) {
      (**(code **)(*local_18 + 8))();
    }
  }
  lVar5 = param_2[3];
  param_2[3] = 0;
  *param_1 = lVar5;
  return;
}


// ===== 00b896a8  FUN_00b896a8 =====

void FUN_00b896a8(void)

{
  FUN_00b896b0();
  return;
}


// ===== 00b896b0  FUN_00b896b0 =====

void FUN_00b896b0(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  code *pcVar4;
  long *plVar5;
  long *local_28;
  long *local_8;
  
  plVar5 = (long *)*param_1;
  pcVar4 = (code *)plVar5[1];
  puVar2 = (undefined8 *)plVar5[5];
  plVar1 = (long *)(*plVar5 + (plVar5[2] >> 1));
  if ((plVar5[2] & 1U) != 0) {
    pcVar4 = *(code **)(pcVar4 + *plVar1);
  }
  local_28 = *(long **)plVar5[4];
  *(undefined8 *)plVar5[4] = 0;
  (*pcVar4)(&local_8,plVar1,&local_28,*puVar2,puVar2[1]);
  plVar1 = local_8;
  local_8 = (long *)0x0;
  plVar3 = (long *)plVar5[3];
  plVar5[3] = (long)plVar1;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
    if (local_8 != (long *)0x0) {
      (**(code **)(*local_8 + 8))();
    }
  }
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 8))();
  }
  FUN_0066f2dc(plVar5 + 6);
  return;
}


// ===== 00b89764  FUN_00b89764 =====

void FUN_00b89764(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  code *pcVar5;
  long *local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  uVar2 = FUN_007e18fc(param_3);
  if ((uVar2 & 1) == 0) {
    local_40 = FUN_004473ec;
    pcStack_38 = FUN_00b89874;
    local_50[0] = param_2;
    (**(code **)(*param_3 + 8))(param_3,local_50,&uStack_11,&uStack_12);
    (*local_40)(0,local_50,local_50);
    FUN_0066f318(param_2 + 6,0x7fffffffffffffff,3000000);
  }
  else {
    pcVar5 = (code *)param_2[1];
    plVar1 = (long *)(*param_2 + (param_2[2] >> 1));
    if ((param_2[2] & 1U) != 0) {
      pcVar5 = *(code **)(pcVar5 + *plVar1);
    }
    (*pcVar5)(local_50,plVar1,param_2[4],*(undefined8 *)param_2[5]);
    plVar1 = local_50[0];
    plVar3 = (long *)param_2[3];
    local_50[0] = (long *)0x0;
    param_2[3] = (long)plVar1;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
      if (local_50[0] != (long *)0x0) {
        (**(code **)(*local_50[0] + 8))();
      }
    }
  }
  lVar4 = param_2[3];
  param_2[3] = 0;
  *param_1 = lVar4;
  return;
}


// ===== 00b89874  FUN_00b89874 =====

void FUN_00b89874(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  long *plVar4;
  long *local_8;
  
  plVar4 = (long *)*param_1;
  pcVar3 = (code *)plVar4[1];
  plVar1 = (long *)(*plVar4 + (plVar4[2] >> 1));
  if ((plVar4[2] & 1U) != 0) {
    pcVar3 = *(code **)(pcVar3 + *plVar1);
  }
  (*pcVar3)(&local_8,plVar1,plVar4[4],*(undefined8 *)plVar4[5]);
  plVar1 = local_8;
  local_8 = (long *)0x0;
  plVar2 = (long *)plVar4[3];
  plVar4[3] = (long)plVar1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
    if (local_8 != (long *)0x0) {
      (**(code **)(*local_8 + 8))();
    }
  }
  FUN_0066f2dc(plVar4 + 6);
  return;
}


// ===== 00b898fc  FUN_00b898fc =====

byte FUN_00b898fc(long *param_1,long *param_2)

{
  long *plVar1;
  byte bVar2;
  ulong uVar3;
  code *pcVar4;
  undefined1 uStack_42;
  undefined1 uStack_41;
  long *local_40 [2];
  code *local_30;
  code *pcStack_28;
  
  uVar3 = FUN_007e18fc(param_2);
  if ((uVar3 & 1) == 0) {
    local_30 = FUN_004473ec;
    pcStack_28 = FUN_00b899d0;
    local_40[0] = param_1;
    (**(code **)(*param_2 + 8))(param_2,local_40,&uStack_41,&uStack_42);
    (*local_30)(0,local_40,local_40);
    FUN_0066f318(param_1 + 6,0x7fffffffffffffff,3000000);
    bVar2 = *(byte *)(param_1 + 3);
  }
  else {
    pcVar4 = (code *)param_1[1];
    plVar1 = (long *)(*param_1 + (param_1[2] >> 1));
    if ((param_1[2] & 1U) != 0) {
      pcVar4 = *(code **)(pcVar4 + *plVar1);
    }
    bVar2 = (*pcVar4)(plVar1,*(undefined8 *)param_1[4],*(undefined8 *)param_1[5]);
    *(byte *)(param_1 + 3) = bVar2 & 1;
  }
  return bVar2 & 1;
}


// ===== 00b899d0  FUN_00b899d0 =====

void FUN_00b899d0(undefined8 *param_1)

{
  long *plVar1;
  byte bVar2;
  code *pcVar3;
  long *plVar4;
  
  plVar4 = (long *)*param_1;
  pcVar3 = (code *)plVar4[1];
  plVar1 = (long *)(*plVar4 + (plVar4[2] >> 1));
  if ((plVar4[2] & 1U) != 0) {
    pcVar3 = *(code **)(pcVar3 + *plVar1);
  }
  bVar2 = (*pcVar3)(plVar1,*(undefined8 *)plVar4[4],*(undefined8 *)plVar4[5]);
  *(byte *)(plVar4 + 3) = bVar2 & 1;
  FUN_0066f2dc(plVar4 + 6);
  return;
}


// ===== 00b89a2c  FUN_00b89a2c =====

void FUN_00b89a2c(undefined8 *param_1)

{
  code *pcVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_1;
  pcVar1 = (code *)plVar2[1];
  if ((plVar2[2] & 1U) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(*plVar2 + (plVar2[2] >> 1)));
  }
  (*pcVar1)();
  FUN_0066f2dc((long)plVar2 + 0x1c);
  return;
}


// ===== 00b89a70  FUN_00b89a70 =====

void FUN_00b89a70(undefined8 *param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  undefined8 *puVar3;
  long *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  long *local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_18;
  
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
    local_40 = 0;
    uStack_58 = 0;
    local_60 = (long *)0x0;
    uStack_48 = 0;
    uStack_50 = 0;
    FUN_008b60e8(&local_90,&local_60);
    plVar1 = local_60;
    if ((local_60 != (long *)0x0) && (iVar2 = FUN_00d0f7a0(0xffffffff,local_60 + 1), iVar2 == 1)) {
      (**(code **)(*plVar1 + 8))(plVar1);
    }
  }
  else {
    local_90 = *(long **)(param_2 + 0x20);
    puStack_80 = *(undefined1 **)(param_2 + 0x30);
    puStack_88 = *(undefined1 **)(param_2 + 0x28);
    puStack_70 = *(undefined1 **)(param_2 + 0x40);
    local_78 = *(undefined1 **)(param_2 + 0x38);
    *(undefined8 *)(param_2 + 0x20) = 0;
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  local_60 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  FUN_00b96ab0(&local_60,&local_90,param_2);
  if (local_60 == (long *)0x0) {
    *param_1 = 0;
  }
  else {
    local_18 = param_2;
    puVar3 = (undefined8 *)operator_new(0xf0);
    FUN_00b8b4d0(puVar3,&local_90,&local_60,&local_18);
    *param_1 = puVar3;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3);
    }
    plVar1 = local_60;
    if ((local_60 != (long *)0x0) && (iVar2 = FUN_00d0f7a0(0xffffffff,local_60), iVar2 == 1)) {
      FUN_00b96ecc(plVar1);
      operator_delete(plVar1);
    }
  }
  plVar1 = local_90;
  if ((local_90 != (long *)0x0) && (iVar2 = FUN_00d0f7a0(0xffffffff,local_90 + 1), iVar2 == 1)) {
    (**(code **)(*plVar1 + 8))(plVar1);
  }
  return;
}


// ===== 00b89be0  FUN_00b89be0 =====

void FUN_00b89be0(undefined8 *param_1,long *param_2,long *param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_00d46790;
  lVar1 = *param_2;
  param_1[1] = lVar1;
  if (lVar1 != 0) {
    FUN_00d0f740(1,lVar1 + 8);
  }
  lVar3 = param_2[4];
  lVar1 = param_2[3];
  lVar4 = param_2[1];
  param_1[3] = param_2[2];
  param_1[2] = lVar4;
  param_1[5] = lVar3;
  param_1[4] = lVar1;
  if (*param_3 == 0) {
    FUN_00b96ab0(param_1 + 6,param_1 + 1,param_4);
  }
  else {
    param_1[6] = *param_3;
    FUN_00d0f740(1);
  }
  *(undefined2 *)(param_1 + 7) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = DAT_001f51d0;
  FUN_00bda938(param_1 + 9,*(undefined8 *)(param_1[6] + 0x40),*(undefined1 *)(param_1[6] + 0xb8),
               param_1[2]);
  uVar2 = *(undefined8 *)(param_4 + 0x58);
  *(undefined8 *)(param_4 + 0x58) = 0;
  param_1[0x15] = uVar2;
  uVar2 = *(undefined8 *)(param_4 + 0x60);
  *(undefined8 *)(param_4 + 0x60) = 0;
  param_1[0x16] = uVar2;
  uVar2 = *(undefined8 *)(param_4 + 0x68);
  *(undefined8 *)(param_4 + 0x68) = 0;
  param_1[0x17] = uVar2;
  uVar2 = *(undefined8 *)(param_4 + 0x70);
  *(undefined8 *)(param_4 + 0x70) = 0;
  param_1[0x18] = uVar2;
  uVar2 = *(undefined8 *)(param_4 + 0x88);
  *(undefined8 *)(param_4 + 0x88) = 0;
  param_1[0x19] = uVar2;
  uVar2 = *(undefined8 *)(param_4 + 0x98);
  *(undefined8 *)(param_4 + 0x98) = 0;
  param_1[0x1a] = uVar2;
  uVar2 = *(undefined8 *)(param_4 + 0xa0);
  *(undefined8 *)(param_4 + 0xa0) = 0;
  param_1[0x1b] = uVar2;
  param_1[0x1c] = 0;
  return;
}


// ===== 00b89cf8  FUN_00b89cf8 =====

void FUN_00b89cf8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)param_1[9];
  if (puVar3 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)param_1[10];
    puVar1 = puVar3;
    if (puVar3 != puVar2) {
      do {
        puVar2 = puVar2 + -0x1b;
        if (puVar2 == (undefined8 *)0x0) goto LAB_00b89e84;
        (**(code **)*puVar2)(puVar2);
      } while (puVar2 != puVar3);
      puVar1 = (undefined8 *)param_1[9];
    }
    param_1[10] = puVar3;
    operator_delete(puVar1);
  }
  puVar3 = (undefined8 *)param_1[6];
  if (puVar3 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)param_1[7];
    puVar1 = puVar3;
    if (puVar3 != puVar2) {
      do {
        puVar2 = puVar2 + -0x1b;
        if (puVar2 == (undefined8 *)0x0) goto LAB_00b89e84;
        (**(code **)*puVar2)(puVar2);
      } while (puVar2 != puVar3);
      puVar1 = (undefined8 *)param_1[6];
    }
    param_1[7] = puVar3;
    operator_delete(puVar1);
  }
  puVar3 = (undefined8 *)param_1[3];
  if (puVar3 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)param_1[4];
    puVar1 = puVar3;
    if (puVar3 != puVar2) {
      do {
        puVar2 = puVar2 + -0x1b;
        if (puVar2 == (undefined8 *)0x0) goto LAB_00b89e84;
        (**(code **)*puVar2)(puVar2);
      } while (puVar2 != puVar3);
      puVar1 = (undefined8 *)param_1[3];
    }
    param_1[4] = puVar3;
    operator_delete(puVar1);
  }
  puVar3 = (undefined8 *)*param_1;
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  puVar2 = (undefined8 *)param_1[1];
  puVar1 = puVar3;
  if (puVar3 != puVar2) {
    do {
      puVar2 = puVar2 + -0x1b;
      if (puVar2 == (undefined8 *)0x0) {
LAB_00b89e84:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      (**(code **)*puVar2)(puVar2);
    } while (puVar2 != puVar3);
    puVar1 = (undefined8 *)*param_1;
  }
  param_1[1] = puVar3;
  operator_delete(puVar1);
  return;
}


// ===== 00b89e98  FUN_00b89e98 =====

void FUN_00b89e98(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xb89ea0);
  (*pcVar1)();
}


// ===== 00b89ea0  FUN_00b89ea0 =====

void FUN_00b89ea0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  return;
}


// ===== 00b89eb8  FUN_00b89eb8 =====

void FUN_00b89eb8(undefined8 param_1,long param_2,int param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 **ppuVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 local_38;
  
  if (param_3 == 1) {
    local_48 = (undefined8 *)0x0;
    local_40 = (undefined8 *)0x0;
    local_38 = 0;
    ppuVar3 = (undefined8 **)FUN_00bd76f0(param_2 + 0x48);
    if (&local_48 != ppuVar3) {
      FUN_0088fd38(&local_48,*ppuVar3,ppuVar3[1],
                   ((long)ppuVar3[1] - (long)*ppuVar3 >> 3) * -0x7b425ed097b425ed);
    }
    puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    uVar4 = (**(code **)(**(long **)(*(long *)(param_2 + 0x30) + 0x40) + 0x38))();
    FUN_00b6ae38(&local_60,uVar4,0);
    FUN_00bdf224(param_1,&local_48,&local_60);
    puVar2 = local_60;
    puVar1 = puStack_58;
    if (local_60 != (undefined1 *)0x0) {
      while (puVar2 != puVar1) {
        puVar1 = puVar1 + -0x20;
        if (puVar1 == (undefined1 *)0x0) goto LAB_00b8a138;
        FUN_00668f8c(puVar1);
      }
      puStack_58 = puVar2;
      operator_delete(local_60);
    }
    puVar6 = local_48;
    puVar5 = local_40;
    if (local_48 == (undefined8 *)0x0) {
      return;
    }
    while (puVar6 != puVar5) {
      puVar5 = puVar5 + -0x1b;
      if (puVar5 == (undefined8 *)0x0) goto LAB_00b8a138;
      (**(code **)*puVar5)(puVar5);
    }
  }
  else {
    if (param_3 != 0) {
      FUN_00669368(param_1);
      return;
    }
    local_48 = (undefined8 *)0x0;
    local_40 = (undefined8 *)0x0;
    local_38 = 0;
    ppuVar3 = (undefined8 **)FUN_00bd76dc(param_2 + 0x48);
    if (&local_48 != ppuVar3) {
      FUN_0088fd38(&local_48,*ppuVar3,ppuVar3[1],
                   ((long)ppuVar3[1] - (long)*ppuVar3 >> 3) * -0x7b425ed097b425ed);
    }
    puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    uVar4 = (**(code **)(**(long **)(*(long *)(param_2 + 0x30) + 0x40) + 0x30))();
    FUN_00b6ae38(&local_60,uVar4,0);
    FUN_00bdf224(param_1,&local_48,&local_60);
    puVar2 = local_60;
    puVar1 = puStack_58;
    if (local_60 != (undefined1 *)0x0) {
      while (puVar2 != puVar1) {
        puVar1 = puVar1 + -0x20;
        if (puVar1 == (undefined1 *)0x0) goto LAB_00b8a138;
        FUN_00668f8c(puVar1);
      }
      puStack_58 = puVar2;
      operator_delete(local_60);
    }
    puVar6 = local_48;
    puVar5 = local_40;
    if (local_48 == (undefined8 *)0x0) {
      return;
    }
    while (puVar6 != puVar5) {
      puVar5 = puVar5 + -0x1b;
      if (puVar5 == (undefined8 *)0x0) {
LAB_00b8a138:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      (**(code **)*puVar5)(puVar5);
    }
  }
  local_40 = puVar6;
  operator_delete(local_48);
  return;
}


// ===== 00b8a14c  FUN_00b8a14c =====

void FUN_00b8a14c(undefined8 param_1,long param_2,int param_3)

{
  long lVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined8 **ppuVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  long local_48;
  
  if (param_3 == 1) {
    plVar7 = (long *)FUN_00bd76e4(param_2 + 0x48);
    local_50 = (undefined8 *)0x0;
    local_48 = 0;
    local_58 = (undefined8 *)0x0;
    lVar10 = *plVar7;
    lVar1 = plVar7[1];
    uVar3 = lVar1 - lVar10;
    puVar8 = local_50;
    if (uVar3 != 0) {
      if (0x12f684bda12f684 < (ulong)(((long)uVar3 >> 3) * -0x7b425ed097b425ed)) {
                    /* WARNING: Subroutine does not return */
        FUN_0088fd20();
      }
      puVar8 = (undefined8 *)operator_new(uVar3);
      local_48 = (long)puVar8 + uVar3;
      local_58 = puVar8;
      do {
        if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        FUN_00890830(puVar8,lVar10);
        lVar10 = lVar10 + 0xd8;
        puVar8 = puVar8 + 0x1b;
      } while (lVar10 != lVar1);
    }
    local_50 = puVar8;
    puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
    local_70 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    uVar6 = (**(code **)(**(long **)(*(long *)(param_2 + 0x30) + 0x40) + 0x38))();
    FUN_00b6ae38(&local_70,uVar6,0);
    FUN_00bdf224(param_1,&local_58,&local_70);
    puVar4 = local_70;
    puVar2 = puStack_68;
    if (local_70 != (undefined1 *)0x0) {
      while (puVar4 != puVar2) {
        puVar2 = puVar2 + -0x20;
        if (puVar2 == (undefined1 *)0x0) goto LAB_00b8a41c;
        FUN_00668f8c(puVar2);
      }
      puStack_68 = puVar4;
      operator_delete(local_70);
    }
    puVar9 = local_58;
    puVar8 = local_50;
    if (local_58 == (undefined8 *)0x0) {
      return;
    }
    while (puVar9 != puVar8) {
      puVar8 = puVar8 + -0x1b;
      if (puVar8 == (undefined8 *)0x0) goto LAB_00b8a41c;
      (**(code **)*puVar8)(puVar8);
    }
  }
  else {
    if (param_3 != 0) {
      FUN_00669368(param_1);
      return;
    }
    local_58 = (undefined8 *)0x0;
    local_50 = (undefined8 *)0x0;
    local_48 = 0;
    ppuVar5 = (undefined8 **)FUN_00bd76d0(param_2 + 0x48);
    if (&local_58 != ppuVar5) {
      FUN_0088fd38(&local_58,*ppuVar5,ppuVar5[1],
                   ((long)ppuVar5[1] - (long)*ppuVar5 >> 3) * -0x7b425ed097b425ed);
    }
    puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
    local_70 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    uVar6 = (**(code **)(**(long **)(*(long *)(param_2 + 0x30) + 0x40) + 0x30))();
    FUN_00b6ae38(&local_70,uVar6,0);
    FUN_00bdf224(param_1,&local_58,&local_70);
    puVar4 = local_70;
    puVar2 = puStack_68;
    if (local_70 != (undefined1 *)0x0) {
      while (puVar4 != puVar2) {
        puVar2 = puVar2 + -0x20;
        if (puVar2 == (undefined1 *)0x0) goto LAB_00b8a41c;
        FUN_00668f8c(puVar2);
      }
      puStack_68 = puVar4;
      operator_delete(local_70);
    }
    puVar9 = local_58;
    puVar8 = local_50;
    if (local_58 == (undefined8 *)0x0) {
      return;
    }
    while (puVar9 != puVar8) {
      puVar8 = puVar8 + -0x1b;
      if (puVar8 == (undefined8 *)0x0) {
LAB_00b8a41c:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      (**(code **)*puVar8)(puVar8);
    }
  }
  local_50 = puVar9;
  operator_delete(local_58);
  return;
}


// ===== 00b8a448  FUN_00b8a448 =====

void FUN_00b8a448(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *local_8;
  
  local_8 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00bdfdd0(&local_8,param_3);
  *param_1 = local_8;
  return;
}


// ===== 00b8a488  FUN_00b8a488 =====

uint FUN_00b8a488(long *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  void *pvVar7;
  undefined8 local_28;
  
  if (param_1[0x1c] == 0) {
    plVar4 = (long *)operator_new(8);
    lVar5 = param_1[6];
    if (lVar5 != 0) {
      FUN_00d0f740(1,lVar5);
    }
    *plVar4 = lVar5;
    if (*(long *)(lVar5 + 0x40) != 0) {
      FUN_00b9709c(lVar5);
    }
    plVar6 = (long *)param_1[0x1c];
    param_1[0x1c] = (long)plVar4;
    if (plVar6 != (long *)0x0) {
      pvVar7 = (void *)*plVar6;
      if (*(long *)((long)pvVar7 + 0x40) != 0) {
        FUN_00b970c4(pvVar7);
        pvVar7 = (void *)*plVar6;
      }
      if ((pvVar7 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar7), iVar1 == 1)) {
        FUN_00b96ecc(pvVar7);
        operator_delete(pvVar7);
      }
      operator_delete(plVar6);
    }
  }
  else {
    uVar3 = FUN_004022fc();
    if ((uVar3 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../pc/peer_connection_factory.cc",0x61a,
                   "Replacing ongoing AEC dump.");
    }
  }
  plVar4 = (long *)FUN_00b96b10(param_1[0x1c]);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x20))();
  local_28 = param_2;
  uVar2 = (**(code **)(*plVar4 + 0x60))(plVar4,&local_28,param_3);
  FUN_0065a730(&local_28);
  if ((uVar2 & 1) == 0) {
    (**(code **)(*param_1 + 0x68))(param_1);
  }
  return uVar2 & 1;
}


// ===== 00b8a5d8  FUN_00b8a5d8 =====

void FUN_00b8a5d8(long param_1)

{
  int iVar1;
  long *plVar2;
  void *pvVar3;
  
  if (*(long *)(param_1 + 0xe0) != 0) {
    plVar2 = (long *)FUN_00b96b10();
    plVar2 = (long *)(**(code **)(*plVar2 + 0x20))();
    (**(code **)(*plVar2 + 0x68))();
    plVar2 = *(long **)(param_1 + 0xe0);
    *(undefined8 *)(param_1 + 0xe0) = 0;
    if (plVar2 != (long *)0x0) {
      pvVar3 = (void *)*plVar2;
      if (*(long *)((long)pvVar3 + 0x40) != 0) {
        FUN_00b970c4(pvVar3);
        pvVar3 = (void *)*plVar2;
      }
      if ((pvVar3 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar3), iVar1 == 1)) {
        FUN_00b96ecc(pvVar3);
        operator_delete(pvVar3);
      }
      operator_delete(plVar2);
      return;
    }
  }
  return;
}


// ===== 00b8a688  FUN_00b8a688 =====

/* WARNING: Removing unreachable block (ram,0x00b8a8e4) */
/* WARNING: Removing unreachable block (ram,0x00b8a810) */
/* WARNING: Removing unreachable block (ram,0x00b8a86c) */
/* WARNING: Removing unreachable block (ram,0x00b8a87c) */
/* WARNING: Removing unreachable block (ram,0x00b8a880) */
/* WARNING: Removing unreachable block (ram,0x00b8a964) */
/* WARNING: Removing unreachable block (ram,0x00b8a838) */

void FUN_00b8a688(int *param_1,undefined1 *param_2,long param_3,long *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 ***pppuVar6;
  void *pvVar7;
  undefined8 **ppuVar8;
  int iVar9;
  ulong uVar10;
  undefined8 uVar11;
  void *pvVar12;
  long *plVar13;
  char *pcVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  void *local_208;
  undefined1 uStack_1f9;
  undefined1 *local_1f8;
  undefined8 ****ppppuStack_1f0;
  long local_1e8;
  undefined8 ***local_1e0;
  undefined1 *puStack_1d8;
  undefined1 *puStack_1d0;
  undefined1 *puStack_1c8;
  undefined1 *local_1c0;
  void *local_1b0;
  void *local_1a8;
  undefined8 local_1a0;
  undefined8 *puStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 **local_180;
  undefined1 *puStack_178;
  undefined1 *puStack_170;
  undefined1 *local_168;
  undefined1 *local_160;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined1 **local_70;
  undefined8 local_68;
  
  if ((*(int *)(param_3 + 0xf0) == 0) && (uVar10 = FUN_004022fc(), (uVar10 & 1) == 0)) {
    FUN_00623bb0(&DAT_001f4e98,"../../pc/peer_connection_factory.cc",0x72a,
                 "PeerConnection constructed with legacy SDP semantics!");
  }
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00be0744(&local_180,param_3);
  FUN_00be0a60(&local_a0,&local_180);
  FUN_00be08b0(&local_180);
  if ((int)local_a0 != 0) {
    uVar10 = FUN_004249b0();
    if ((uVar10 & 1) == 0) {
      uVar11 = FUN_005ecd5c(&local_a0);
      FUN_00623bb0(&DAT_001f4ed3,"../../pc/peer_connection_factory.cc",0x75b,
                   "Invalid ICE configuration: ",uVar11);
    }
    *param_1 = (int)local_a0;
    puVar16 = (undefined8 *)((ulong)&local_a0 | 8);
    uVar17 = *puVar16;
    uVar11 = puVar16[2];
    *(undefined8 *)(param_1 + 4) = puVar16[1];
    *(undefined8 *)(param_1 + 2) = uVar17;
    *(undefined8 *)(param_1 + 6) = uVar11;
    iVar9 = (int)local_80;
    *(undefined1 *)(param_1 + 10) = 0;
    *(undefined1 *)(param_1 + 0xc) = 0;
    param_1[8] = iVar9;
    *(undefined4 *)((long)param_1 + 0x23) = local_80._3_4_;
    return;
  }
  puStack_198 = &local_190;
  local_190 = 0;
  uStack_188 = 0;
  local_1a0 = 0;
  local_1b0 = (void *)0x0;
  local_1a8 = (void *)0x0;
  FUN_00be2190(&local_180,param_3,&puStack_198,&local_1b0);
  puVar16 = (undefined8 *)((ulong)&local_a0 | 8);
  local_a0 = (undefined1 *)CONCAT44(local_a0._4_4_,(int)local_180);
  if ((long)local_168 < 0) {
    FUN_00547fc0(puVar16,puStack_178,puStack_170);
    local_80._0_7_ = SUB87(local_160,0);
    if ((long)local_168 < 0) {
      operator_delete(puStack_178);
      iVar9 = (int)local_a0;
      uVar11 = local_80;
    }
    else {
      iVar9 = (int)local_a0;
      uVar11 = local_80;
    }
  }
  else {
    puVar16[2] = local_168;
    puVar16[1] = puStack_170;
    *puVar16 = puStack_178;
    local_80._0_7_ = SUB87(local_160,0);
    iVar9 = (int)local_180;
    uVar11 = local_80;
  }
  local_80 = (undefined1 *)uVar11;
  if (iVar9 != 0) {
    *param_1 = iVar9;
    uVar18 = *puVar16;
    uVar17 = puVar16[2];
    *(undefined8 *)(param_1 + 4) = puVar16[1];
    *(undefined8 *)(param_1 + 2) = uVar18;
    *(undefined8 *)(param_1 + 6) = uVar17;
    local_80._0_4_ = (int)uVar11;
    iVar9 = (int)local_80;
    local_80._3_4_ = (undefined4)((ulong)uVar11 >> 0x18);
    *(undefined1 *)(param_1 + 10) = 0;
    *(undefined1 *)(param_1 + 0xc) = 0;
    param_1[8] = iVar9;
    *(undefined4 *)((long)param_1 + 0x23) = local_80._3_4_;
    goto LAB_00b8a904;
  }
  if (*param_4 == 0) {
    uVar10 = FUN_004249b0();
    if ((uVar10 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../pc/peer_connection_factory.cc",0x7c3,
                   "PeerConnection initialized without a PeerConnectionObserver");
    }
    pcVar14 = (char *)operator_new(0x38);
    uVar4 = s_Attempt_to_create_a_PeerConnecti_001aa7e1._32_8_;
    uVar3 = s_Attempt_to_create_a_PeerConnecti_001aa7e1._24_8_;
    uVar18 = s_Attempt_to_create_a_PeerConnecti_001aa7e1._16_8_;
    uVar17 = s_Attempt_to_create_a_PeerConnecti_001aa7e1._8_8_;
    uVar11 = s_Attempt_to_create_a_PeerConnecti_001aa7e1._0_8_;
    if (pcVar14 + 0x36 < pcVar14) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
                );
    }
    if ((pcVar14 < "ttempt to create a PeerConnection without an observer") &&
       ("Attempt to create a PeerConnection without an observer" < pcVar14 + 0x36)) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                );
    }
    uVar1 = CONCAT26(s_Attempt_to_create_a_PeerConnecti_001aa7e1._46_2_,
                     s_Attempt_to_create_a_PeerConnecti_001aa7e1._40_6_);
    uVar2 = CONCAT62(s_Attempt_to_create_a_PeerConnecti_001aa7e1._48_6_,
                     s_Attempt_to_create_a_PeerConnecti_001aa7e1._46_2_);
    pcVar14[0x36] = '\0';
    *(undefined8 *)(pcVar14 + 0x28) = uVar1;
    *(undefined8 *)(pcVar14 + 0x20) = uVar4;
    *(undefined8 *)(pcVar14 + 0x2e) = uVar2;
    *(undefined8 *)(pcVar14 + 8) = uVar17;
    *(undefined8 *)pcVar14 = uVar11;
    *(undefined8 *)(pcVar14 + 0x18) = uVar3;
    *(undefined8 *)(pcVar14 + 0x10) = uVar18;
    *param_1 = 3;
    FUN_005478d8(param_1 + 2,pcVar14,0x36);
    param_1[8] = 0;
    *(undefined1 *)(param_1 + 9) = 0;
    *(undefined1 *)((long)param_1 + 0x26) = 0;
    *(undefined1 *)(param_1 + 10) = 0;
    *(undefined1 *)(param_1 + 0xc) = 0;
    operator_delete(pcVar14);
    goto LAB_00b8a904;
  }
  puStack_178 = &DAT_aaaaaaaaaaaaaaaa;
  local_180 = (undefined8 **)&DAT_aaaaaaaaaaaaaaaa;
  local_168 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_170 = &DAT_aaaaaaaaaaaaaaaa;
  local_160 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_008b5e28(&local_180,param_2 + 8);
  lVar15 = param_4[10];
  param_4[10] = 0;
  FUN_008b5e88(&local_180,lVar15);
  if (*(long *)(param_2 + 0xa8) != 0) {
    local_1e0 = &local_180;
    puStack_1d8 = param_2;
    (**(code **)(**(long **)(*(long *)(param_2 + 0x30) + 0x30) + 0x60))
              (*(long **)(*(long *)(param_2 + 0x30) + 0x30),&local_1e0,FUN_00b8b96c,&local_1f8);
  }
  puStack_1d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_1e0 = (undefined8 ***)&DAT_aaaaaaaaaaaaaaaa;
  puStack_1c8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1d0 = &DAT_aaaaaaaaaaaaaaaa;
  local_1c0 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_008b60e8(&local_1e0,&local_180);
  if (param_4[6] == 0) {
    uVar11 = *(undefined8 *)(*(long *)(param_2 + 0x30) + 0x38);
    uVar17 = *(undefined8 *)(*(long *)(param_2 + 0x30) + 0x20);
    pvVar12 = operator_new(0x18);
    FUN_00b22614(pvVar12,uVar11,uVar17);
    plVar13 = (long *)param_4[6];
    param_4[6] = (long)pvVar12;
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 8))();
    }
  }
  if (param_4[2] == 0) {
    puVar16 = (undefined8 *)operator_new(8);
    param_4[2] = (long)puVar16;
    *puVar16 = &PTR_FUN_00d50138;
    if (param_4[1] == 0) goto LAB_00b8acc8;
LAB_00b8aa50:
    lVar15 = param_4[3];
  }
  else {
    if (param_4[1] != 0) goto LAB_00b8aa50;
LAB_00b8acc8:
    uVar11 = *(undefined8 *)(*(long *)(param_2 + 0x30) + 0x98);
    uVar17 = *(undefined8 *)(*(long *)(param_2 + 0x30) + 0xa8);
    pvVar12 = operator_new(0x140);
    FUN_00ce6950(pvVar12,&local_1e0,uVar11,uVar17,*(undefined8 *)(param_3 + 0xe0),0,0);
    plVar13 = (long *)param_4[1];
    param_4[1] = (long)pvVar12;
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 8))();
      pvVar12 = (void *)param_4[1];
    }
    iVar9 = *(int *)(param_3 + 0x16c);
    if (*(int *)(param_3 + 0x168) <= iVar9) {
      *(int *)((long)pvVar12 + 0x10) = *(int *)(param_3 + 0x168);
      *(int *)((long)pvVar12 + 0x14) = iVar9;
      pvVar12 = (void *)param_4[1];
    }
    *(undefined4 *)((long)pvVar12 + 0xc) = *(undefined4 *)(param_3 + 0x170);
    lVar15 = param_4[3];
  }
  if (lVar15 == 0) {
    puVar16 = (undefined8 *)operator_new(8);
    param_4[3] = (long)puVar16;
    *puVar16 = &PTR_FUN_00d51058;
  }
  (**(code **)(*(long *)param_4[1] + 0x20))((long *)param_4[1],*(undefined4 *)(param_2 + 0x3c));
  (**(code **)(*(long *)param_4[1] + 0x30))((long *)param_4[1],param_3 + 0x150);
  ppppuStack_1f0 = &local_1e0;
  local_78 = &local_68;
  local_70 = &local_1f8;
  local_68 = 0;
  local_1f8 = param_2;
  local_1e8 = param_3;
  (**(code **)(**(long **)(*(long *)(param_2 + 0x30) + 0x30) + 0x60))
            (*(long **)(*(long *)(param_2 + 0x30) + 0x30),&local_78,FUN_00b8ba00,&uStack_1f9);
  uVar11 = local_68;
  local_208 = *(void **)(param_2 + 0x30);
  local_1f8 = &DAT_aaaaaaaaaaaaaaaa;
  if (local_208 != (void *)0x0) {
    FUN_00d0f740(1);
  }
  FUN_00be5ef0(&local_1f8,&local_1e0,&local_208,param_2 + 0x38,uVar11,param_3,param_4,&puStack_198,
               &local_1b0);
  pvVar12 = local_208;
  if ((local_208 != (void *)0x0) && (iVar9 = FUN_00d0f7a0(0xffffffff,local_208), iVar9 == 1)) {
    FUN_00b96ecc(pvVar12);
    operator_delete(pvVar12);
  }
  puVar5 = local_1f8;
  uVar11 = *(undefined8 *)(*(long *)(param_2 + 0x30) + 0x38);
  uVar17 = *(undefined8 *)(*(long *)(param_2 + 0x30) + 0x20);
  puVar16 = (undefined8 *)operator_new(0x28);
  puVar16[2] = uVar17;
  puVar16[3] = puVar5;
  *puVar16 = &PTR_FUN_00d46898;
  puVar16[1] = uVar11;
  *(undefined4 *)(puVar16 + 4) = 0;
  if (puVar16 != (undefined8 *)0x0) {
    FUN_00d0f740(1,puVar16 + 4);
  }
  pppuVar6 = local_1e0;
  *param_1 = 0;
  *(undefined1 *)((long)param_1 + 0x26) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((long)param_1 + 0x1d) = 0;
  *(undefined8 **)(param_1 + 10) = puVar16;
  *(undefined1 *)(param_1 + 0xc) = 1;
  if ((local_1e0 != (undefined8 ***)0x0) &&
     (iVar9 = FUN_00d0f7a0(0xffffffff,local_1e0 + 1), iVar9 == 1)) {
    (*(code *)(*pppuVar6)[1])(pppuVar6);
  }
  ppuVar8 = local_180;
  if ((local_180 != (undefined8 **)0x0) &&
     (iVar9 = FUN_00d0f7a0(0xffffffff,local_180 + 1), iVar9 == 1)) {
    (*(code *)(*ppuVar8)[1])(ppuVar8);
  }
LAB_00b8a904:
  pvVar7 = local_1b0;
  pvVar12 = local_1a8;
  if (local_1b0 != (void *)0x0) {
    while (pvVar7 != pvVar12) {
      pvVar12 = (void *)((long)pvVar12 + -0xa0);
      if (pvVar12 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      FUN_00be2ca4(pvVar12);
    }
    local_1a8 = pvVar7;
    operator_delete(local_1b0);
  }
  local_180 = &puStack_198;
  FUN_00b8b8d8(&local_180,local_190);
  return;
}


// ===== 00b8ad9c  FUN_00b8ad9c =====

void FUN_00b8ad9c(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 local_38;
  
  uVar2 = *(undefined8 *)(*(long *)(param_2 + 0x30) + 0x38);
  FUN_00c17d18(&local_38,param_3);
  puVar1 = (undefined8 *)operator_new(0x28);
  puVar1[2] = uVar2;
  puVar1[3] = local_38;
  *puVar1 = &PTR_FUN_00d46cd0;
  puVar1[1] = &PTR_FUN_00d46d60;
  *(undefined4 *)(puVar1 + 4) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_00d0f740(1,puVar1 + 4);
  }
  *param_1 = puVar1;
  return;
}


// ===== 00b8ae20  FUN_00b8ae20 =====

void FUN_00b8ae20(undefined8 *param_1,long param_2,long *param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  long *local_40;
  long *local_38;
  
  local_40 = (long *)*param_3;
  if (local_40 != (long *)0x0) {
    (**(code **)*local_40)();
  }
  FUN_00c1ee10(&local_38,param_4,param_5,&local_40,*(undefined8 *)(*(long *)(param_2 + 0x30) + 0x30)
              );
  plVar1 = local_38;
  local_38 = (long *)0x0;
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 8))();
  }
  auVar3 = *(undefined1 (*) [16])(*(long *)(param_2 + 0x30) + 0x30);
  if (plVar1 != (long *)0x0) {
    (**(code **)*plVar1)(plVar1);
  }
  puVar2 = (undefined8 *)operator_new(0x38);
  puVar2[5] = plVar1;
  auVar3 = NEON_ext(auVar3,auVar3,8,1);
  *puVar2 = &PTR_FUN_00d46e48;
  puVar2[1] = &PTR_FUN_00d46ee8;
  puVar2[2] = &PTR_FUN_00d46f18;
  *(undefined4 *)(puVar2 + 6) = 0;
  puVar2[4] = auVar3._8_8_;
  puVar2[3] = auVar3._0_8_;
  if (puVar2 != (undefined8 *)0x0) {
    FUN_00d0f740(1,puVar2 + 6);
  }
  *param_1 = puVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1);
  }
  return;
}


// ===== 00b8af30  FUN_00b8af30 =====

void FUN_00b8af30(undefined8 *param_1,long param_2,undefined8 *param_3,long *param_4)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *local_40;
  long *local_38;
  
  uVar1 = param_3[1];
  puVar3 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar3 = param_3;
  }
  local_40 = param_4;
  if (param_4 != (long *)0x0) {
    (**(code **)*param_4)(param_4);
  }
  FUN_00c1a484(&local_38,puVar3,uVar1,&local_40);
  plVar2 = local_38;
  local_38 = (long *)0x0;
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 8))();
  }
  uVar4 = *(undefined8 *)(*(long *)(param_2 + 0x30) + 0x38);
  if (plVar2 != (long *)0x0) {
    (**(code **)*plVar2)(plVar2);
  }
  puVar3 = (undefined8 *)operator_new(0x28);
  puVar3[2] = uVar4;
  puVar3[3] = plVar2;
  *puVar3 = &PTR_FUN_00d47050;
  puVar3[1] = &PTR_FUN_00d470e8;
  *(undefined4 *)(puVar3 + 4) = 0;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_00d0f740(1,puVar3 + 4);
  }
  *param_1 = puVar3;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  return;
}


// ===== 00b8b02c  FUN_00b8b02c =====

undefined8 FUN_00b8b02c(long param_1,long param_2,long param_3)

{
  long ****pppplVar1;
  long *****ppppplVar2;
  undefined8 *****pppppuVar3;
  long ***ppplVar4;
  bool bVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  char *pcVar12;
  undefined1 *local_2c8;
  undefined1 *local_2c0;
  undefined1 *puStack_2b8;
  undefined1 *puStack_2b0;
  undefined1 *puStack_2a8;
  undefined1 *local_2a0;
  undefined4 local_298;
  long ***local_290;
  undefined1 *local_288;
  undefined1 *puStack_280;
  undefined1 *local_278;
  undefined1 *puStack_270;
  undefined1 *local_268;
  undefined1 *puStack_260;
  undefined1 *local_258;
  undefined1 *puStack_250;
  undefined1 *puStack_248;
  undefined1 uStack_240;
  undefined7 local_23f;
  undefined1 uStack_238;
  undefined8 uStack_237;
  undefined8 ****local_228;
  ulong uStack_220;
  byte bStack_211;
  long ***local_210;
  undefined1 *puStack_208;
  undefined1 *local_200;
  undefined1 *puStack_1f8;
  undefined1 *local_1f0;
  undefined1 *puStack_1e8;
  undefined1 *local_1e0;
  undefined1 *puStack_1d8;
  char *local_1d0;
  long ***local_1c0;
  undefined1 *puStack_1b8;
  undefined1 *puStack_1b0;
  undefined1 *puStack_1a8;
  undefined1 *local_1a0;
  undefined1 *puStack_198;
  undefined1 *puStack_190;
  undefined1 *puStack_188;
  undefined1 *local_180;
  long ***local_170;
  undefined1 *puStack_168;
  undefined1 *puStack_160;
  undefined1 *puStack_158;
  undefined1 *local_150;
  undefined1 *puStack_148;
  undefined1 *puStack_140;
  undefined1 *puStack_138;
  undefined1 *local_130;
  undefined1 *local_120;
  undefined1 *puStack_118;
  undefined1 *puStack_110;
  undefined1 *puStack_108;
  undefined1 *local_100;
  undefined8 uStack_f8;
  undefined1 *local_f0;
  long ***local_e8;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 local_90;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  undefined7 uStack_87;
  long ****local_78;
  long ***local_70;
  long ***local_68;
  
  puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
  local_120 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_110 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
  local_100 = &DAT_aaaaaaaaaaaaaaaa;
  local_e8 = (long ***)&DAT_aaaaaaaaaaaaaaaa;
  local_f0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_e0 = &DAT_aaaaaaaaaaaaaaaa;
  local_c8 = &DAT_aaaaaaaaaaaaaaaa;
  local_d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_98 = 0xaa;
  uStack_97 = 0xaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_88 = 0xaa;
  uStack_87 = 0xaaaaaaaaaaaaaa;
  local_90 = 0xaa;
  uStack_8f = 0xaaaaaaaaaaaaaa;
  FUN_0084228c(&local_120,param_2,*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x20));
  plVar6 = *(long **)(*(long *)(param_1 + 0x30) + 0x40);
  if ((plVar6 == (long *)0x0) || (*(long *)(*(long *)(param_1 + 0x30) + 0xa0) == 0)) {
    uVar8 = 0;
  }
  else {
    plVar6 = (long *)(**(code **)(*plVar6 + 0x30))();
    (**(code **)(*plVar6 + 0x28))(&local_170);
    ppplVar4 = local_e8;
    local_e8 = local_170;
    local_170 = (long ***)0x0;
    if ((ppplVar4 != (long ***)0x0) &&
       ((**(code **)((long)*ppplVar4 + 8))(), (long ****)local_170 != (long ****)0x0)) {
      (*(code *)(*local_170)[1])();
    }
    local_130 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_168 = &DAT_aaaaaaaaaaaaaaaa;
    local_170 = (long ***)&DAT_aaaaaaaaaaaaaaaa;
    puStack_158 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_160 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
    local_150 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_140 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00661054(&local_170,&DAT_001b6c38,3);
    pppplVar1 = (long ****)(PTR_DAT_00d520c0 + 0x10);
    local_180 = &DAT_aaaaaaaaaaaaaaaa;
    local_130 = (undefined1 *)0x7530;
    puStack_1b8 = &DAT_aaaaaaaaaaaaaaaa;
    local_1c0 = (long ***)&DAT_aaaaaaaaaaaaaaaa;
    puStack_1a8 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_1b0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_198 = &DAT_aaaaaaaaaaaaaaaa;
    local_1a0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_188 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_190 = &DAT_aaaaaaaaaaaaaaaa;
    local_170 = (long ***)pppplVar1;
    FUN_00661054(&local_1c0,"start",5);
    local_180 = (undefined1 *)0x493e0;
    local_1d0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_1d8 = &DAT_aaaaaaaaaaaaaaaa;
    local_1e0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_1e8 = &DAT_aaaaaaaaaaaaaaaa;
    local_1f0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_1f8 = &DAT_aaaaaaaaaaaaaaaa;
    local_200 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_208 = &DAT_aaaaaaaaaaaaaaaa;
    local_210 = (long ***)&DAT_aaaaaaaaaaaaaaaa;
    local_1c0 = (long ***)pppplVar1;
    FUN_00661054(&local_210,&DAT_001e4381,3);
    local_1d0 = "nt read_session_ticket";
    local_210 = (long ***)pppplVar1;
    local_78 = &local_170;
    local_70 = (long ***)&local_1c0;
    local_68 = (long ***)&local_210;
    (**(code **)(**(long **)(param_2 + 8) + 0x10))
              (&local_228,*(long **)(param_2 + 8),"WebRTC-PcFactoryDefaultBitrates",0x1f);
    pppppuVar3 = (undefined8 *****)local_228;
    if (-1 < (char)bStack_211) {
      uStack_220 = (ulong)bStack_211;
      pppppuVar3 = &local_228;
    }
    FUN_00661cc0(&local_78,3,pppppuVar3,uStack_220);
    if ((char)bStack_211 < '\0') {
      operator_delete(local_228);
    }
    uVar9 = 2;
    if ((long)local_130 < 0x80000000) {
      uVar9 = 0;
    }
    if ((long)local_130 < -0x80000000) {
      uVar9 = uVar9 + 1;
    }
    if (uVar9 < 2) {
      puVar11 = local_130;
      if (uVar9 != 0) {
        puVar11 = (undefined1 *)0x80000000;
      }
    }
    else {
      if (uVar9 != 2) goto LAB_00b8b4cc;
      puVar11 = (undefined1 *)0x7fffffff;
    }
    uStack_f8 = (undefined1 *)CONCAT44(uStack_f8._4_4_,(int)puVar11);
    uVar9 = 2;
    if ((long)local_180 < 0x80000000) {
      uVar9 = 0;
    }
    if ((long)local_180 < -0x80000000) {
      uVar9 = uVar9 + 1;
    }
    if (uVar9 < 2) {
      puVar10 = local_180;
      if (uVar9 != 0) {
        puVar10 = (undefined1 *)0x80000000;
      }
    }
    else {
      if (uVar9 != 2) goto LAB_00b8b4cc;
      puVar10 = (undefined1 *)0x7fffffff;
    }
    uStack_f8 = (undefined1 *)CONCAT44((int)puVar10,(int)puVar11);
    uVar9 = 2;
    if ((long)local_1d0 < 0x80000000) {
      uVar9 = 0;
    }
    if ((long)local_1d0 < -0x80000000) {
      uVar9 = uVar9 + 1;
    }
    if (uVar9 < 2) {
      pcVar12 = local_1d0;
      if (uVar9 != 0) {
        pcVar12 = (char *)0x80000000;
      }
    }
    else {
      if (uVar9 != 2) {
LAB_00b8b4cc:
                    /* WARNING: Subroutine does not return */
        FUN_0061ff28();
      }
      pcVar12 = (char *)0x7fffffff;
    }
    local_d0 = *(undefined1 **)(param_1 + 0xb8);
    puStack_d8 = *(undefined1 **)(param_1 + 0xb0);
    puStack_b8 = *(undefined1 **)(param_1 + 200);
    local_f0 = (undefined1 *)CONCAT44(local_f0._4_4_,(int)pcVar12);
    (**(code **)(**(long **)(param_1 + 0x10) + 0x10))
              (&local_78,*(long **)(param_1 + 0x10),"WebRTC-Bwe-InjectedCongestionController",0x27);
    pppplVar1 = (long ****)local_70;
    if (-1 < (long)local_68) {
      pppplVar1 = (long ****)((ulong)local_68 >> 0x38);
    }
    if (pppplVar1 < (long ****)0x7) {
      bVar5 = false;
    }
    else {
      ppppplVar2 = (long *****)local_78;
      if (-1 < (long)local_68) {
        ppppplVar2 = &local_78;
      }
      bVar5 = *(int *)ppppplVar2 == 0x62616e45 && *(int *)((long)ppppplVar2 + 3) == 0x64656c62;
    }
    if ((long)local_68 < 0) {
      operator_delete(local_78);
    }
    uVar7 = FUN_00417e08();
    if (bVar5) {
      if ((uVar7 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../pc/peer_connection_factory.cc",0xbc9,
                     "Using pcf injected network controller factory");
      }
      local_c0 = *(undefined1 **)(param_1 + 0xc0);
    }
    else if ((uVar7 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../pc/peer_connection_factory.cc",0xbe9,
                   "Using default network controller factory");
    }
    puStack_270 = local_c8;
    puStack_248 = *(undefined1 **)(param_1 + 0xd8);
    puStack_250 = *(undefined1 **)(param_1 + 0xd0);
    uStack_238 = *(undefined1 *)(param_3 + 0x180);
    uStack_98 = (undefined1)*(undefined8 *)(param_3 + 0x178);
    uStack_97 = (undefined7)((ulong)*(undefined8 *)(param_3 + 0x178) >> 8);
    plVar6 = *(long **)(*(long *)(param_1 + 0x30) + 0xa0);
    puStack_2b8 = puStack_110;
    local_2c0 = puStack_118;
    puStack_2a8 = local_100;
    puStack_2b0 = puStack_108;
    local_2c8 = local_120;
    puStack_280 = puStack_d8;
    local_288 = local_e0;
    uStack_237 = CONCAT17(uStack_88,uStack_8f);
    local_298 = local_f0._0_4_;
    local_290 = local_e8;
    local_2a0 = uStack_f8;
    local_120 = (undefined1 *)0x0;
    local_e8 = (long ***)0x0;
    local_c8 = (undefined1 *)0x0;
    local_278 = local_d0;
    local_258 = local_b0;
    puStack_260 = puStack_b8;
    local_268 = local_c0;
    uStack_240 = uStack_98;
    local_23f = uStack_97;
    puStack_a8 = puStack_250;
    local_a0 = puStack_248;
    local_90 = uStack_238;
    uVar8 = (**(code **)(*plVar6 + 0x10))(plVar6,&local_2c8);
    FUN_008423b8(&local_2c8);
    FUN_006634ac(&local_210);
    FUN_006634ac(&local_1c0);
    FUN_006634ac(&local_170);
  }
  FUN_008423b8(&local_120);
  return uVar8;
}


// ===== 00b8b4d0  FUN_00b8b4d0 =====

void FUN_00b8b4d0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  long *plVar2;
  void *pvVar3;
  long *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  void *local_28;
  
  plVar2 = (long *)*param_2;
  local_68 = plVar2;
  if (plVar2 != (long *)0x0) {
    FUN_00d0f740(1,plVar2 + 1);
  }
  uStack_58 = param_2[2];
  local_60 = param_2[1];
  uStack_48 = param_2[4];
  uStack_50 = param_2[3];
  pvVar3 = (void *)*param_3;
  local_28 = pvVar3;
  if (pvVar3 == (void *)0x0) {
    FUN_00b89be0(param_1,&local_68,&local_28,*param_4);
  }
  else {
    FUN_00d0f740(1,pvVar3);
    FUN_00b89be0(param_1,&local_68,&local_28,*param_4);
    iVar1 = FUN_00d0f7a0(0xffffffff,pvVar3);
    if (iVar1 == 1) {
      FUN_00b96ecc(pvVar3);
      operator_delete(pvVar3);
    }
  }
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  *param_1 = &PTR_FUN_00d46810;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  return;
}


// ===== 00b8b5e4  FUN_00b8b5e4 =====

void FUN_00b8b5e4(long param_1)

{
  FUN_00d0f740(1,param_1 + 0xe8);
  return;
}


// ===== 00b8b608  FUN_00b8b608 =====

bool FUN_00b8b608(long *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d0f7a0(0xffffffff,param_1 + 0x1d);
  if ((param_1 != (long *)0x0) && (iVar1 == 1)) {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return iVar1 != 1;
}


// ===== 00b8b660  FUN_00b8b660 =====

void FUN_00b8b660(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  void *pvVar3;
  undefined1 uStack_31;
  undefined8 *local_18;
  
  *param_1 = &PTR_FUN_00d46790;
  local_18 = param_1;
  (**(code **)(**(long **)(param_1[6] + 0x30) + 0x60))
            (*(long **)(param_1[6] + 0x30),&local_18,FUN_00b8b878,&uStack_31);
  plVar2 = (long *)param_1[0x1c];
  param_1[0x1c] = 0;
  if (plVar2 != (long *)0x0) {
    pvVar3 = (void *)*plVar2;
    if (*(long *)((long)pvVar3 + 0x40) != 0) {
      FUN_00b970c4(pvVar3);
      pvVar3 = (void *)*plVar2;
    }
    if ((pvVar3 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar3), iVar1 == 1)) {
      FUN_00b96ecc(pvVar3);
      operator_delete(pvVar3);
    }
    operator_delete(plVar2);
  }
  plVar2 = (long *)param_1[0x1b];
  param_1[0x1b] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)param_1[0x1a];
  param_1[0x1a] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)param_1[0x19];
  param_1[0x19] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)param_1[0x18];
  param_1[0x18] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)param_1[0x17];
  param_1[0x17] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x10))();
  }
  plVar2 = (long *)param_1[0x16];
  param_1[0x16] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)param_1[0x15];
  param_1[0x15] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_00b89cf8(param_1 + 9);
  pvVar3 = (void *)param_1[6];
  if ((pvVar3 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar3), iVar1 == 1)) {
    FUN_00b96ecc(pvVar3);
    operator_delete(pvVar3);
  }
  plVar2 = (long *)param_1[1];
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  return;
}


// ===== 00b8b830  FUN_00b8b830 =====

void FUN_00b8b830(void *param_1)

{
  FUN_00b8b660();
  operator_delete(param_1);
  return;
}


// ===== 00b8b860  FUN_00b8b860 =====

bool FUN_00b8b860(long param_1)

{
  return (int)*(undefined8 *)(param_1 + 0xe8) == 1;
}


// ===== 00b8b878  FUN_00b8b878 =====

void FUN_00b8b878(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_1;
  plVar1 = (long *)plVar2[0x1a];
  plVar2[0x1a] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)plVar2[0x1b];
  plVar2[0x1b] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
                    /* WARNING: Could not recover jumptable at 0x00b8b8d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x68))(plVar2);
  return;
}


// ===== 00b8b8d8  FUN_00b8b8d8 =====

void FUN_00b8b8d8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_00b8b8d8(param_1,*param_2);
      if (param_2 == (undefined8 *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      puVar1 = (undefined8 *)param_2[1];
      if (*(char *)((long)param_2 + 0x37) < '\0') {
        operator_delete((void *)param_2[4]);
      }
      operator_delete(param_2);
      param_2 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
  }
  return;
}


// ===== 00b8b96c  FUN_00b8b96c =====

void FUN_00b8b96c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  
  lVar1 = param_1[1];
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_008b60e8(&local_50,*param_1);
  uVar5 = *param_1;
  uVar4 = (**(code **)(**(long **)(lVar1 + 0xa8) + 0x10))(*(long **)(lVar1 + 0xa8),&local_50);
  FUN_008b5efc(uVar5,uVar4);
  plVar2 = local_50;
  if ((local_50 != (long *)0x0) && (iVar3 = FUN_00d0f7a0(0xffffffff,local_50 + 1), iVar3 == 1)) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  return;
}


// ===== 00b8ba00  FUN_00b8ba00 =====

void FUN_00b8ba00(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  
  puVar2 = (undefined8 *)param_1[1];
  lVar1 = FUN_00b8b02c(*puVar2,puVar2[1],puVar2[2]);
  plVar3 = *(long **)*param_1;
  *(long *)*param_1 = lVar1;
  if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b8ba4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0xe8))(plVar3);
    return;
  }
  return;
}


// ===== 00b8ba60  FUN_00b8ba60 =====

void FUN_00b8ba60(long param_1)

{
  FUN_00d0f740(1,param_1 + 0x20);
  return;
}


// ===== 00b8ba84  FUN_00b8ba84 =====

bool FUN_00b8ba84(long *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00d0f7a0(0xffffffff,param_1 + 4);
  if ((param_1 != (long *)0x0) && (iVar1 == 1)) {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return iVar1 != 1;
}


// ===== 00b8badc  FUN_00b8badc =====

void FUN_00b8badc(undefined8 *param_1)

{
  undefined8 *local_98;
  code *pcStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *puStack_30;
  undefined1 *puStack_28;
  
  *param_1 = &PTR_FUN_00d46ab8;
  pcStack_90 = FUN_00b8ed0c;
  local_88 = 0;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_28 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_30 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = param_1;
  FUN_0066f1ac((long)&local_80 + 4);
  FUN_00b8ed48(&local_98,param_1[1]);
  FUN_0066f2b0((long)&local_80 + 4);
  if ((long *)param_1[3] != (long *)0x0) {
    (**(code **)(*(long *)param_1[3] + 8))();
  }
  return;
}


// ===== 00b8bb68  FUN_00b8bb68 =====

void FUN_00b8bb68(undefined8 *param_1)

{
  ulong uVar1;
  code *pcVar2;
  long *plVar3;
  undefined8 *local_c8;
  code *local_c0;
  ulong local_b8;
  undefined8 local_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined8 **local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  *param_1 = &PTR_FUN_00d46ab8;
  local_c0 = FUN_00b8ed0c;
  local_b8 = 0;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_c8 = param_1;
  FUN_0066f1ac((long)&local_b0 + 4);
  plVar3 = (long *)param_1[1];
  uVar1 = FUN_007e18fc(plVar3);
  if ((uVar1 & 1) == 0) {
    local_40 = FUN_004473ec;
    pcStack_38 = FUN_00b8ee0c;
    local_50[0] = &local_c8;
    (**(code **)(*plVar3 + 8))(plVar3,local_50,&uStack_11,&uStack_12);
    (*local_40)(0,local_50,local_50);
    FUN_0066f318((long)&local_b0 + 4,0x7fffffffffffffff,3000000);
  }
  else {
    pcVar2 = local_c0;
    if ((local_b8 & 1) != 0) {
      pcVar2 = *(code **)(local_c0 + *(long *)((long)local_c8 + ((long)local_b8 >> 1)));
    }
    (*pcVar2)();
  }
  FUN_0066f2b0((long)&local_b0 + 4);
  if ((long *)param_1[3] != (long *)0x0) {
    (**(code **)(*(long *)param_1[3] + 8))();
  }
  operator_delete(param_1);
  return;
}


// ===== 00b8bc88  FUN_00b8bc88 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b8bc88(undefined8 param_1,long param_2)

{
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  long *local_98;
  undefined8 local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  
  local_b0 = *(undefined8 *)(param_2 + 0x18);
  local_98 = (long *)0x0;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_a0 = _UNK_001f31d8;
  local_a8 = _DAT_001f31d0;
  FUN_0066f1ac((long)&local_90 + 4);
  FUN_00b8ee50(param_1,&local_b0,*(undefined8 *)(param_2 + 8));
  FUN_0066f2b0((long)&local_90 + 4);
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 8))();
  }
  return;
}


// ===== 00b8bd20  FUN_00b8bd20 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b8bd20(undefined8 param_1,long param_2)

{
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  long *local_98;
  undefined8 local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  
  local_b0 = *(undefined8 *)(param_2 + 0x18);
  local_98 = (long *)0x0;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_a0 = _UNK_001f46e8;
  local_a8 = _DAT_001f46e0;
  FUN_0066f1ac((long)&local_90 + 4);
  FUN_00b8ee50(param_1,&local_b0,*(undefined8 *)(param_2 + 8));
  FUN_0066f2b0((long)&local_90 + 4);
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 8))();
  }
  return;
}


// ===== 00b8bdb8  FUN_00b8bdb8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_00b8bdb8(long param_1,undefined8 param_2)

{
  byte bVar1;
  ulong uVar2;
  code *pcVar3;
  long *plVar4;
  long local_d8;
  code *local_d0;
  ulong uStack_c8;
  undefined1 *local_c0;
  undefined8 *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined8 local_50;
  undefined1 uStack_42;
  undefined1 uStack_41;
  long *local_40 [2];
  code *local_30;
  code *pcStack_28;
  
  local_d8 = *(long *)(param_1 + 0x18);
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b8 = &local_50;
  uStack_c8 = _UNK_001f4c48;
  local_d0 = _DAT_001f4c40;
  local_50 = param_2;
  FUN_0066f1ac(&puStack_b0);
  plVar4 = *(long **)(param_1 + 8);
  uVar2 = FUN_007e18fc(plVar4);
  if ((uVar2 & 1) == 0) {
    local_30 = FUN_004473ec;
    pcStack_28 = FUN_00b8efd8;
    local_40[0] = &local_d8;
    (**(code **)(*plVar4 + 8))(plVar4,local_40,&uStack_41,&uStack_42);
    (*local_30)(0,local_40,local_40);
    FUN_0066f318(&puStack_b0,0x7fffffffffffffff,3000000);
    bVar1 = (byte)local_c0;
  }
  else {
    plVar4 = (long *)(local_d8 + ((long)uStack_c8 >> 1));
    pcVar3 = local_d0;
    if ((uStack_c8 & 1) != 0) {
      pcVar3 = *(code **)(local_d0 + *plVar4);
    }
    bVar1 = (*pcVar3)(plVar4,*puStack_b8);
    local_c0 = (undefined1 *)(CONCAT71(local_c0._1_7_,bVar1) & 0xffffffffffffff01);
  }
  FUN_0066f2b0(&puStack_b0);
  return bVar1 & 1;
}


// ===== 00b8bed4  FUN_00b8bed4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b8bed4(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 local_f0;
  undefined1 uStack_e2;
  undefined1 uStack_e1;
  long *local_e0 [2];
  code *local_d0;
  code *pcStack_c8;
  long local_c0;
  code *local_b8;
  ulong uStack_b0;
  undefined1 *local_a8;
  undefined8 *puStack_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  undefined1 *local_48;
  undefined1 *puStack_40;
  long local_38;
  
  puStack_a0 = &local_f0;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_c0 = *(long *)(param_1 + 0x18);
  local_a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_b0 = _UNK_001f46f8;
  local_b8 = _DAT_001f46f0;
  local_f0 = param_2;
  FUN_0066f1ac(&local_98);
  plVar4 = *(long **)(param_1 + 8);
  uVar2 = FUN_007e18fc(plVar4);
  if ((uVar2 & 1) == 0) {
    local_d0 = FUN_004473ec;
    pcStack_c8 = FUN_00b8f030;
    local_e0[0] = &local_c0;
    (**(code **)(*plVar4 + 8))(plVar4,local_e0,&uStack_e1,&uStack_e2);
    (*local_d0)(0,local_e0,local_e0);
    FUN_0066f318(&local_98,0x7fffffffffffffff,3000000);
  }
  else {
    plVar4 = (long *)(local_c0 + ((long)uStack_b0 >> 1));
    pcVar3 = local_b8;
    if ((uStack_b0 & 1) != 0) {
      pcVar3 = *(code **)(local_b8 + *plVar4);
    }
    (*pcVar3)(plVar4,*puStack_a0);
  }
  FUN_0066f2b0(&local_98);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00b8c010  FUN_00b8c010 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b8c010(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  void *pvStack_d0;
  undefined8 local_c8;
  undefined5 uStack_c0;
  undefined2 uStack_bb;
  char cStack_b9;
  undefined5 uStack_b8;
  undefined1 uStack_b3;
  undefined1 uStack_b2;
  undefined1 uStack_b1;
  long *plStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  undefined1 *local_48;
  undefined1 *puStack_40;
  undefined1 *local_38;
  
  local_f0 = *(undefined8 *)(param_2 + 0x18);
  uStack_b3 = 0xaa;
  uStack_b1 = 0xaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_d8 = 0xaaaaaaaa0000000a;
  uStack_e0 = _UNK_001f2798;
  local_e8 = _DAT_001f2790;
  uStack_b2 = 0;
  pvStack_d0 = (void *)0x0;
  local_c8 = 0;
  uStack_c0 = 0;
  uStack_bb = 0;
  cStack_b9 = '\0';
  uStack_b8 = 0;
  plStack_b0 = (long *)0xaaaaaaaaaaaaaa00;
  local_a8 = 0xaaaaaaaaaaaaaa00;
  uStack_a0 = param_3;
  local_98 = param_4;
  FUN_0066f1ac(&puStack_90);
  FUN_00b8f07c(param_1,&local_f0,*(undefined8 *)(param_2 + 8));
  FUN_0066f2b0(&puStack_90);
  if (((char)local_a8 == '\x01') && (plStack_b0 != (long *)0x0)) {
    (**(code **)(*plStack_b0 + 8))();
  }
  if (cStack_b9 < '\0') {
    operator_delete(pvStack_d0);
  }
  return;
}


// ===== 00b8c10c  FUN_00b8c10c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b8c10c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  void *pvStack_d8;
  undefined8 uStack_d0;
  undefined5 local_c8;
  undefined2 uStack_c3;
  char cStack_c1;
  undefined5 local_c0;
  undefined1 uStack_bb;
  undefined1 uStack_ba;
  undefined1 uStack_b9;
  long *plStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  
  local_f8 = *(undefined8 *)(param_2 + 0x18);
  uStack_bb = 0xaa;
  uStack_b9 = 0xaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_e0 = 0xaaaaaaaa0000000a;
  uStack_e8 = _UNK_001f2338;
  local_f0 = _DAT_001f2330;
  uStack_ba = 0;
  pvStack_d8 = (void *)0x0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c3 = 0;
  cStack_c1 = '\0';
  local_c0 = 0;
  plStack_b8 = (long *)0xaaaaaaaaaaaaaa00;
  local_b0 = 0xaaaaaaaaaaaaaa00;
  local_a8 = param_3;
  local_a0 = param_4;
  uStack_98 = param_5;
  FUN_0066f1ac(&local_90);
  FUN_00b8f3a4(param_1,&local_f8,*(undefined8 *)(param_2 + 8));
  FUN_0066f2b0(&local_90);
  if (((char)local_b0 == '\x01') && (plStack_b8 != (long *)0x0)) {
    (**(code **)(*plStack_b8 + 8))();
  }
  if (cStack_c1 < '\0') {
    operator_delete(pvStack_d8);
  }
  return;
}


// ===== 00b8c200  FUN_00b8c200 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b8c200(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  void *pvStack_b8;
  undefined8 uStack_b0;
  undefined5 local_a8;
  undefined2 uStack_a3;
  char cStack_a1;
  undefined5 local_a0;
  undefined1 uStack_9b;
  undefined1 uStack_9a;
  undefined1 uStack_99;
  undefined8 uStack_98;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  
  local_d8 = *(undefined8 *)(param_2 + 0x18);
  uStack_9b = 0xaa;
  uStack_99 = 0xaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = 0xaaaaaaaa00000000;
  uStack_c8 = _UNK_001f3ab8;
  local_d0 = _DAT_001f3ab0;
  uStack_9a = 0;
  pvStack_b8 = (void *)0x0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a3 = 0;
  cStack_a1 = '\0';
  local_a0 = 0;
  uStack_98 = param_3;
  FUN_0066f1ac(&puStack_90);
  FUN_00b8f5b0(param_1,&local_d8,*(undefined8 *)(param_2 + 8));
  FUN_0066f2b0(&puStack_90);
  if (cStack_a1 < '\0') {
    operator_delete(pvStack_b8);
  }
  return;
}


// ===== 00b8c2bc  FUN_00b8c2bc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b8c2bc(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  void *pvStack_c8;
  undefined8 uStack_c0;
  undefined5 local_b8;
  undefined2 uStack_b3;
  char cStack_b1;
  undefined5 local_b0;
  undefined1 uStack_ab;
  undefined1 uStack_aa;
  undefined1 uStack_a9;
  long *plStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  
  local_e8 = *(undefined8 *)(param_2 + 0x18);
  uStack_ab = 0xaa;
  uStack_a9 = 0xaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_d0 = 0xaaaaaaaa0000000a;
  uStack_d8 = _UNK_001f3d98;
  local_e0 = _DAT_001f3d90;
  uStack_aa = 0;
  pvStack_c8 = (void *)0x0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b3 = 0;
  cStack_b1 = '\0';
  local_b0 = 0;
  plStack_a8 = (long *)0xaaaaaaaaaaaaaa00;
  local_a0 = 0xaaaaaaaaaaaaaa00;
  local_98 = param_3;
  FUN_0066f1ac(&local_90);
  FUN_00b8f7e8(param_1,&local_e8,*(undefined8 *)(param_2 + 8));
  FUN_0066f2b0(&local_90);
  if (((char)local_a0 == '\x01') && (plStack_a8 != (long *)0x0)) {
    (**(code **)(*plStack_a8 + 8))();
  }
  if (cStack_b1 < '\0') {
    operator_delete(pvStack_c8);
  }
  return;
}


// ===== 00b8c3a8  FUN_00b8c3a8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b8c3a8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  void *pvStack_d0;
  undefined8 local_c8;
  undefined5 uStack_c0;
  undefined2 uStack_bb;
  char cStack_b9;
  undefined5 uStack_b8;
  undefined1 uStack_b3;
  undefined1 uStack_b2;
  undefined1 uStack_b1;
  long *plStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  undefined1 *local_48;
  undefined1 *puStack_40;
  undefined1 *local_38;
  
  local_f0 = *(undefined8 *)(param_2 + 0x18);
  uStack_b3 = 0xaa;
  uStack_b1 = 0xaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_d8 = 0xaaaaaaaa0000000a;
  uStack_e0 = _UNK_001f1cc8;
  local_e8 = _DAT_001f1cc0;
  uStack_b2 = 0;
  pvStack_d0 = (void *)0x0;
  local_c8 = 0;
  uStack_c0 = 0;
  uStack_bb = 0;
  cStack_b9 = '\0';
  uStack_b8 = 0;
  plStack_b0 = (long *)0xaaaaaaaaaaaaaa00;
  local_a8 = 0xaaaaaaaaaaaaaa00;
  uStack_a0 = param_3;
  local_98 = param_4;
  FUN_0066f1ac(&puStack_90);
  FUN_00b8fb10(param_1,&local_f0,*(undefined8 *)(param_2 + 8));
  FUN_0066f2b0(&puStack_90);
  if (((char)local_a8 == '\x01') && (plStack_b0 != (long *)0x0)) {
    (**(code **)(*plStack_b0 + 8))();
  }
  if (cStack_b9 < '\0') {
    operator_delete(pvStack_d0);
  }
  return;
}


// ===== 00b8c4a4  FUN_00b8c4a4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b8c4a4(undefined8 param_1,long param_2,undefined4 param_3)

{
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  void *pvStack_d0;
  undefined8 local_c8;
  undefined5 uStack_c0;
  undefined2 uStack_bb;
  char cStack_b9;
  undefined5 uStack_b8;
  undefined1 uStack_b3;
  undefined1 uStack_b2;
  undefined1 uStack_b1;
  long *plStack_b0;
  undefined8 local_a8;
  undefined4 *puStack_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  undefined1 *local_48;
  undefined1 *puStack_40;
  undefined4 local_34;
  
  local_f0 = *(undefined8 *)(param_2 + 0x18);
  uStack_b3 = 0xaa;
  uStack_b1 = 0xaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_d8 = 0xaaaaaaaa0000000a;
  puStack_a0 = &local_34;
  uStack_e0 = _UNK_001f2918;
  local_e8 = _DAT_001f2910;
  uStack_b2 = 0;
  pvStack_d0 = (void *)0x0;
  local_c8 = 0;
  uStack_c0 = 0;
  uStack_bb = 0;
  cStack_b9 = '\0';
  uStack_b8 = 0;
  plStack_b0 = (long *)0xaaaaaaaaaaaaaa00;
  local_a8 = 0xaaaaaaaaaaaaaa00;
  local_34 = param_3;
  FUN_0066f1ac(&local_98);
  FUN_00b8fd18(param_1,&local_f0,*(undefined8 *)(param_2 + 8));
  FUN_0066f2b0(&local_98);
  if (((char)local_a8 == '\x01') && (plStack_b0 != (long *)0x0)) {
    (**(code **)(*plStack_b0 + 8))();
  }
  if (cStack_b9 < '\0') {
    operator_delete(pvStack_d0);
  }
  return;
}


// ===== 00b8c5a4  FUN_00b8c5a4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b8c5a4(undefined8 param_1,long param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  void *pvStack_d8;
  undefined8 uStack_d0;
  undefined5 local_c8;
  undefined2 uStack_c3;
  char cStack_c1;
  undefined5 local_c0;
  undefined1 uStack_bb;
  undefined1 uStack_ba;
  undefined1 uStack_b9;
  long *plStack_b8;
  undefined8 local_b0;
  undefined4 *local_a8;
  undefined8 local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined4 local_34;
  
  local_f8 = *(undefined8 *)(param_2 + 0x18);
  uStack_bb = 0xaa;
  uStack_b9 = 0xaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_e0 = 0xaaaaaaaa0000000a;
  local_a8 = &local_34;
  uStack_e8 = _UNK_001f1ac8;
  local_f0 = _DAT_001f1ac0;
  uStack_ba = 0;
  pvStack_d8 = (void *)0x0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c3 = 0;
  cStack_c1 = '\0';
  local_c0 = 0;
  plStack_b8 = (long *)0xaaaaaaaaaaaaaa00;
  local_b0 = 0xaaaaaaaaaaaaaa00;
  local_a0 = param_4;
  local_34 = param_3;
  FUN_0066f1ac(&puStack_98);
  FUN_00b8ff3c(param_1,&local_f8,*(undefined8 *)(param_2 + 8));
  FUN_0066f2b0(&puStack_98);
  if (((char)local_b0 == '\x01') && (plStack_b8 != (long *)0x0)) {
    (**(code **)(*plStack_b8 + 8))();
  }
  if (cStack_c1 < '\0') {
    operator_delete(pvStack_d8);
  }
  return;
}


// ===== 00b8c69c  FUN_00b8c69c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b8c69c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  long *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  
  local_c0 = *(undefined8 *)(param_2 + 0x18);
  local_a8 = (long *)0x0;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_b0 = _UNK_001f4898;
  local_b8 = _DAT_001f4890;
  uStack_a0 = param_3;
  local_98 = param_4;
  FUN_0066f1ac(&local_90);
  FUN_00b90160(param_1,&local_c0,*(undefined8 *)(param_2 + 8));
  FUN_0066f2b0(&local_90);
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 8))();
  }
  return;
}


// ===== 00b8c738  FUN_00b8c738 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b8c738(undefined8 param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  long *local_a8;
  long *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  
  local_c0 = *(undefined8 *)(param_2 + 0x18);
  local_a8 = (long *)0x0;
  local_a0 = (long *)0x0;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = 0;
  uStack_b0 = _UNK_001f42b8;
  local_b8 = _DAT_001f42b0;
  FUN_0066f1ac((long)&local_90 + 4);
  FUN_00b902f0(param_1,&local_c0,*(undefined8 *)(param_2 + 8));
  FUN_0066f2b0((long)&local_90 + 4);
  plVar1 = local_a8;
  plVar2 = local_a0;
  if (local_a8 != (long *)0x0) {
    while (plVar1 != plVar2) {
      plVar2 = plVar2 + -1;
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      if ((long *)*plVar2 != (long *)0x0) {
        (**(code **)(*(long *)*plVar2 + 8))();
      }
    }
    local_a0 = plVar1;
    operator_delete(local_a8);
  }
  return;
}


// ===== 00b8c830  FUN_00b8c830 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b8c830(undefined8 param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  long *local_a8;
  long *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  
  local_c0 = *(undefined8 *)(param_2 + 0x18);
  local_a8 = (long *)0x0;
  local_a0 = (long *)0x0;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = 0;
  uStack_b0 = _UNK_001f3508;
  local_b8 = _DAT_001f3500;
  FUN_0066f1ac((long)&local_90 + 4);
  FUN_00b90588(param_1,&local_c0,*(undefined8 *)(param_2 + 8));
  FUN_0066f2b0((long)&local_90 + 4);
  plVar1 = local_a8;
  plVar2 = local_a0;
  if (local_a8 != (long *)0x0) {
    while (plVar1 != plVar2) {
      plVar2 = plVar2 + -1;
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      if ((long *)*plVar2 != (long *)0x0) {
        (**(code **)(*(long *)*plVar2 + 8))();
      }
    }
    local_a0 = plVar1;
    operator_delete(local_a8);
  }
  return;
}


// ===== 00b8c928  FUN_00b8c928 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b8c928(undefined8 param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  long *local_a8;
  long *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  
  local_c0 = *(undefined8 *)(param_2 + 0x18);
  local_a8 = (long *)0x0;
  local_a0 = (long *)0x0;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = 0;
  uStack_b0 = _UNK_001f3008;
  local_b8 = _DAT_001f3000;
  FUN_0066f1ac((long)&local_90 + 4);
  FUN_00b90820(param_1,&local_c0,*(undefined8 *)(param_2 + 8));
  FUN_0066f2b0((long)&local_90 + 4);
  plVar1 = local_a8;
  plVar2 = local_a0;
  if (local_a8 != (long *)0x0) {
    while (plVar1 != plVar2) {
      plVar2 = plVar2 + -1;
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      if ((long *)*plVar2 != (long *)0x0) {
        (**(code **)(*(long *)*plVar2 + 8))();
      }
    }
    local_a0 = plVar1;
    operator_delete(local_a8);
  }
  return;
}


// ===== 00b8ca20  FUN_00b8ca20 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00b8ca20(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 *local_b8;
  undefined8 *puStack_b0;
  undefined8 *local_a8;
  undefined4 *puStack_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  undefined1 *local_48;
  undefined1 *puStack_40;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_d0 = *(undefined8 *)(param_1 + 0x18);
  puStack_b0 = &uStack_28;
  local_b8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = &local_34;
  local_a8 = &local_30;
  uStack_c0 = _UNK_001f2e88;
  local_c8 = _DAT_001f2e80;
  local_34 = param_4;
  local_30 = param_3;
  uStack_28 = param_2;
  FUN_0066f1ac(&local_98);
  uVar1 = FUN_00b90ab8(&local_d0,*(undefined8 *)(param_1 + 8));
  FUN_0066f2b0(&local_98);
  return uVar1 & 1;
}


// ===== 00b8cac8  FUN_00b8cac8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b8cac8(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 local_f0;
  undefined1 uStack_e2;
  undefined1 uStack_e1;
  long *local_e0 [2];
  code *local_d0;
  code *pcStack_c8;
  long local_c0;
  code *local_b8;
  ulong uStack_b0;
  undefined1 *local_a8;
  undefined8 *puStack_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  undefined1 *local_48;
  undefined1 *puStack_40;
  long local_38;
  
  puStack_a0 = &local_f0;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_c0 = *(long *)(param_1 + 0x18);
  local_a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_b0 = _UNK_001f3ac8;
  local_b8 = _DAT_001f3ac0;
  local_f0 = param_2;
  FUN_0066f1ac(&local_98);
  plVar4 = *(long **)(param_1 + 8);
  uVar2 = FUN_007e18fc(plVar4);
  if ((uVar2 & 1) == 0) {
    local_d0 = FUN_004473ec;
    pcStack_c8 = FUN_00b90bf8;
    local_e0[0] = &local_c0;
    (**(code **)(*plVar4 + 8))(plVar4,local_e0,&uStack_e1,&uStack_e2);
    (*local_d0)(0,local_e0,local_e0);
    FUN_0066f318(&local_98,0x7fffffffffffffff,3000000);
  }
  else {
    plVar4 = (long *)(local_c0 + ((long)uStack_b0 >> 1));
    pcVar3 = local_b8;
    if ((uStack_b0 & 1) != 0) {
      pcVar3 = *(code **)(local_b8 + *plVar4);
    }
    (*pcVar3)(plVar4,*puStack_a0);
  }
  FUN_0066f2b0(&local_98);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00b8cc04  FUN_00b8cc04 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b8cc04(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 *local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_c8 = *(undefined8 *)(param_1 + 0x18);
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_b8 = _UNK_001f3ad8;
  local_c0 = _DAT_001f3ad0;
  uStack_a8 = param_2;
  uStack_a0 = param_3;
  FUN_0066f1ac(&puStack_98);
  FUN_00b90c44(&local_c8,*(undefined8 *)(param_1 + 8));
  FUN_0066f2b0(&puStack_98);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00b8cca8  FUN_00b8cca8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b8cca8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 *local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_c8 = *(undefined8 *)(param_1 + 0x18);
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_b8 = _UNK_001f3f38;
  local_c0 = _DAT_001f3f30;
  uStack_a8 = param_2;
  uStack_a0 = param_3;
  FUN_0066f1ac(&puStack_98);
  FUN_00b90de4(&local_c8,*(undefined8 *)(param_1 + 8));
  FUN_0066f2b0(&puStack_98);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00b8cd4c  FUN_00b8cd4c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b8cd4c(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  long *plVar3;
  long local_c0;
  code *local_b8;
  ulong uStack_b0;
  undefined8 local_a8;
  undefined1 *puStack_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined1 *local_40 [2];
  code *local_30;
  code *pcStack_28;
  
  local_c0 = *(long *)(param_1 + 0x18);
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
  local_a8 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_b0 = _UNK_001f4a88;
  local_b8 = _DAT_001f4a80;
  FUN_0066f1ac((long)&local_a8 + 4);
  plVar3 = *(long **)(param_1 + 8);
  uVar1 = FUN_007e18fc(plVar3);
  if ((uVar1 & 1) == 0) {
    local_30 = FUN_004473ec;
    pcStack_28 = FUN_00b90f84;
    local_40[0] = (undefined1 *)&local_c0;
    (**(code **)(*plVar3 + 8))(plVar3,local_40,&uStack_41,&uStack_42);
    (*local_30)(0,local_40,local_40);
    FUN_0066f318((long)&local_a8 + 4,0x7fffffffffffffff,3000000);
  }
  else {
    pcVar2 = local_b8;
    if ((uStack_b0 & 1) != 0) {
      pcVar2 = *(code **)(local_b8 + *(long *)(local_c0 + ((long)uStack_b0 >> 1)));
    }
    (*pcVar2)();
  }
  FUN_0066f2b0((long)&local_a8 + 4);
  return;
}


// ===== 00b8ce48  FUN_00b8ce48 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b8ce48(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  void *pvStack_d8;
  undefined8 uStack_d0;
  undefined5 local_c8;
  undefined2 uStack_c3;
  char cStack_c1;
  undefined5 local_c0;
  undefined1 uStack_bb;
  undefined1 uStack_ba;
  undefined1 uStack_b9;
  long *plStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined8 local_38;
  
  local_f8 = *(undefined8 *)(param_2 + 0x18);
  uStack_bb = 0xaa;
  uStack_b9 = 0xaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_e0 = 0xaaaaaaaa0000000a;
  local_a0 = &local_38;
  uStack_e8 = _UNK_001f3818;
  local_f0 = _DAT_001f3810;
  uStack_ba = 0;
  pvStack_d8 = (void *)0x0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c3 = 0;
  cStack_c1 = '\0';
  local_c0 = 0;
  plStack_b8 = (long *)0xaaaaaaaaaaaaaa00;
  local_b0 = 0xaaaaaaaaaaaaaa00;
  local_a8 = param_3;
  local_38 = param_4;
  FUN_0066f1ac(&puStack_98);
  FUN_00b90fc8(param_1,&local_f8,*(undefined8 *)(param_2 + 8));
  FUN_0066f2b0(&puStack_98);
  if (((char)local_b0 == '\x01') && (plStack_b8 != (long *)0x0)) {
    (**(code **)(*plStack_b8 + 8))();
  }
  if (cStack_c1 < '\0') {
    operator_delete(pvStack_d8);
  }
  return;
}


// ===== 00b8cf40  FUN_00b8cf40 =====

void FUN_00b8cf40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00b8cf50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 200))();
  return;
}


// ===== 00b8cf54  FUN_00b8cf54 =====

void FUN_00b8cf54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00b8cf64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0xd0))();
  return;
}


// ===== 00b8cf68  FUN_00b8cf68 =====

void FUN_00b8cf68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00b8cf78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0xd8))();
  return;
}


// ===== 00b8cf7c  FUN_00b8cf7c =====

void FUN_00b8cf7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00b8cf8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0xe0))();
  return;
}


// ===== 00b8cf90  FUN_00b8cf90 =====

void FUN_00b8cf90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00b8cfa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0xe8))();
  return;
}


// ===== 00b8cfa4  FUN_00b8cfa4 =====

void FUN_00b8cfa4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00b8cfb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0xf0))();
  return;
}


// ===== 00b8cfb8  FUN_00b8cfb8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b8cfb8(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  long *plVar3;
  long local_c0;
  code *local_b8;
  ulong uStack_b0;
  undefined8 local_a8;
  undefined1 *puStack_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined1 *local_40 [2];
  code *local_30;
  code *pcStack_28;
  
  local_c0 = *(long *)(param_1 + 0x18);
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
  local_a8 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_b0 = _UNK_001f31e8;
  local_b8 = _DAT_001f31e0;
  FUN_0066f1ac((long)&local_a8 + 4);
  plVar3 = *(long **)(param_1 + 8);
  uVar1 = FUN_007e18fc(plVar3);
  if ((uVar1 & 1) == 0) {
    local_30 = FUN_004473ec;
    pcStack_28 = FUN_00b90f84;
    local_40[0] = (undefined1 *)&local_c0;
    (**(code **)(*plVar3 + 8))(plVar3,local_40,&uStack_41,&uStack_42);
    (*local_30)(0,local_40,local_40);
    FUN_0066f318((long)&local_a8 + 4,0x7fffffffffffffff,3000000);
  }
  else {
    pcVar2 = local_b8;
    if ((uStack_b0 & 1) != 0) {
      pcVar2 = *(code **)(local_b8 + *(long *)(local_c0 + ((long)uStack_b0 >> 1)));
    }
    (*pcVar2)();
  }
  FUN_0066f2b0((long)&local_a8 + 4);
  return;
}


// ===== 00b8d0b4  FUN_00b8d0b4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b8d0b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 local_100;
  undefined1 uStack_f2;
  undefined1 uStack_f1;
  long *local_f0 [2];
  code *local_e0;
  code *pcStack_d8;
  long local_c8;
  code *local_c0;
  ulong uStack_b8;
  undefined1 *local_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  long local_38;
  
  puStack_a8 = &local_100;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_c8 = *(long *)(param_1 + 0x18);
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_b8 = _UNK_001f3da8;
  local_c0 = _DAT_001f3da0;
  local_100 = param_2;
  uStack_a0 = param_3;
  FUN_0066f1ac(&puStack_98);
  plVar4 = *(long **)(param_1 + 8);
  uVar2 = FUN_007e18fc(plVar4);
  if ((uVar2 & 1) == 0) {
    local_e0 = FUN_004473ec;
    pcStack_d8 = FUN_00b9130c;
    local_f0[0] = &local_c8;
    (**(code **)(*plVar4 + 8))(plVar4,local_f0,&uStack_f1,&uStack_f2);
    (*local_e0)(0,local_f0,local_f0);
    FUN_0066f318(&puStack_98,0x7fffffffffffffff,3000000);
  }
  else {
    plVar4 = (long *)(local_c8 + ((long)uStack_b8 >> 1));
    pcVar3 = local_c0;
    if ((uStack_b8 & 1) != 0) {
      pcVar3 = *(code **)(local_c0 + *plVar4);
    }
    (*pcVar3)(plVar4,*puStack_a8,uStack_a0);
  }
  FUN_0066f2b0(&puStack_98);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00b8d1f0  FUN_00b8d1f0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b8d1f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 local_100;
  undefined1 uStack_f2;
  undefined1 uStack_f1;
  long *local_f0 [2];
  code *local_e0;
  code *pcStack_d8;
  long local_c8;
  code *local_c0;
  ulong uStack_b8;
  undefined1 *local_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  long local_38;
  
  puStack_a8 = &local_100;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_c8 = *(long *)(param_1 + 0x18);
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_b8 = _UNK_001f2cb8;
  local_c0 = _DAT_001f2cb0;
  local_100 = param_2;
  uStack_a0 = param_3;
  FUN_0066f1ac(&puStack_98);
  plVar4 = *(long **)(param_1 + 8);
  uVar2 = FUN_007e18fc(plVar4);
  if ((uVar2 & 1) == 0) {
    local_e0 = FUN_004473ec;
    pcStack_d8 = FUN_00b9130c;
    local_f0[0] = &local_c8;
    (**(code **)(*plVar4 + 8))(plVar4,local_f0,&uStack_f1,&uStack_f2);
    (*local_e0)(0,local_f0,local_f0);
    FUN_0066f318(&puStack_98,0x7fffffffffffffff,3000000);
  }
  else {
    plVar4 = (long *)(local_c8 + ((long)uStack_b8 >> 1));
    pcVar3 = local_c0;
    if ((uStack_b8 & 1) != 0) {
      pcVar3 = *(code **)(local_c0 + *plVar4);
    }
    (*pcVar3)(plVar4,*puStack_a8,uStack_a0);
  }
  FUN_0066f2b0(&puStack_98);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00b8d32c  FUN_00b8d32c =====

void FUN_00b8d32c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  long *local_18;
  
  local_18 = (long *)*param_3;
  plVar1 = *(long **)(param_1 + 0x18);
  *param_3 = 0;
  (**(code **)(*plVar1 + 0x110))(plVar1,param_2,&local_18);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  return;
}


// ===== 00b8d380  FUN_00b8d380 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b8d380(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 *local_a8;
  undefined8 uStack_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  undefined1 *local_48;
  undefined1 *puStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = *(undefined8 *)(param_1 + 0x18);
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_b0 = _UNK_001f2e98;
  local_b8 = _DAT_001f2e90;
  uStack_a0 = param_2;
  FUN_0066f1ac(&local_98);
  FUN_00b91358(&local_c0,*(undefined8 *)(param_1 + 8));
  FUN_0066f2b0(&local_98);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00b8d42c  FUN_00b8d42c =====

void FUN_00b8d42c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00b8d43c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x120))();
  return;
}


// ===== 00b8d440  FUN_00b8d440 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b8d440(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 local_f0;
  undefined1 uStack_e2;
  undefined1 uStack_e1;
  long *local_e0 [2];
  code *local_d0;
  code *pcStack_c8;
  long local_c0;
  code *local_b8;
  ulong uStack_b0;
  undefined1 *local_a8;
  undefined8 *puStack_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  undefined1 *local_48;
  undefined1 *puStack_40;
  long local_38;
  
  puStack_a0 = &local_f0;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_c0 = *(long *)(param_1 + 0x18);
  local_a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_b0 = _UNK_001f1ad8;
  local_b8 = _DAT_001f1ad0;
  local_f0 = param_2;
  FUN_0066f1ac(&local_98);
  plVar4 = *(long **)(param_1 + 8);
  uVar2 = FUN_007e18fc(plVar4);
  if ((uVar2 & 1) == 0) {
    local_d0 = FUN_004473ec;
    pcStack_c8 = FUN_00b914a8;
    local_e0[0] = &local_c0;
    (**(code **)(*plVar4 + 8))(plVar4,local_e0,&uStack_e1,&uStack_e2);
    (*local_d0)(0,local_e0,local_e0);
    FUN_0066f318(&local_98,0x7fffffffffffffff,3000000);
  }
  else {
    plVar4 = (long *)(local_c0 + ((long)uStack_b0 >> 1));
    pcVar3 = local_b8;
    if ((uStack_b0 & 1) != 0) {
      pcVar3 = *(code **)(local_b8 + *plVar4);
    }
    (*pcVar3)(plVar4,*puStack_a0);
  }
  FUN_0066f2b0(&local_98);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00b8d57c  FUN_00b8d57c =====

void FUN_00b8d57c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  long *local_18;
  
  local_18 = (long *)*param_3;
  plVar1 = *(long **)(param_1 + 0x18);
  *param_3 = 0;
  (**(code **)(*plVar1 + 0x130))(plVar1,param_2,&local_18);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  return;
}


// ===== 00b8d5d0  FUN_00b8d5d0 =====

void FUN_00b8d5d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00b8d5e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x138))();
  return;
}


// ===== 00b8d5e4  FUN_00b8d5e4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_00b8d5e4(long param_1,undefined4 param_2)

{
  byte bVar1;
  ulong uVar2;
  code *pcVar3;
  long *plVar4;
  long local_d0;
  code *local_c8;
  ulong uStack_c0;
  undefined1 *local_b8;
  undefined4 *puStack_b0;
  undefined1 *local_a8;
  undefined1 *puStack_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  undefined4 local_48;
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined1 *local_40 [2];
  code *local_30;
  code *pcStack_28;
  
  local_d0 = *(long *)(param_1 + 0x18);
  local_b8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
  local_a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b0 = &local_48;
  uStack_c0 = _UNK_001f31f8;
  local_c8 = _DAT_001f31f0;
  local_48 = param_2;
  FUN_0066f1ac(&local_a8);
  plVar4 = *(long **)(param_1 + 8);
  uVar2 = FUN_007e18fc(plVar4);
  if ((uVar2 & 1) == 0) {
    local_30 = FUN_004473ec;
    pcStack_28 = FUN_00b914f4;
    local_40[0] = (undefined1 *)&local_d0;
    (**(code **)(*plVar4 + 8))(plVar4,local_40,&uStack_41,&uStack_42);
    (*local_30)(0,local_40,local_40);
    FUN_0066f318(&local_a8,0x7fffffffffffffff,3000000);
    bVar1 = (byte)local_b8;
  }
  else {
    plVar4 = (long *)(local_d0 + ((long)uStack_c0 >> 1));
    pcVar3 = local_c8;
    if ((uStack_c0 & 1) != 0) {
      pcVar3 = *(code **)(local_c8 + *plVar4);
    }
    bVar1 = (*pcVar3)(plVar4,*puStack_b0);
    local_b8 = (undefined1 *)(CONCAT71(local_b8._1_7_,bVar1) & 0xffffffffffffff01);
  }
  FUN_0066f2b0(&local_a8);
  return bVar1 & 1;
}


// ===== 00b8d70c  FUN_00b8d70c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b8d70c(undefined8 param_1,long param_2)

{
  undefined8 local_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined1 *local_230;
  undefined1 *puStack_228;
  undefined1 *local_220;
  undefined1 *puStack_218;
  undefined1 *puStack_210;
  undefined1 *puStack_208;
  undefined1 *local_200;
  undefined1 *puStack_1f8;
  undefined1 *puStack_1f0;
  undefined1 *puStack_1e8;
  undefined1 *local_1e0;
  undefined1 *puStack_1d8;
  undefined1 *puStack_1d0;
  undefined1 *puStack_1c8;
  undefined1 *local_1c0;
  undefined1 *puStack_1b8;
  undefined1 *local_1b0;
  undefined1 *puStack_1a8;
  undefined1 *local_1a0;
  undefined1 *puStack_198;
  undefined1 *local_190;
  undefined1 *puStack_188;
  undefined1 *local_180;
  undefined1 *puStack_178;
  undefined1 *local_170;
  undefined1 *puStack_168;
  undefined1 *local_160;
  undefined1 *puStack_158;
  undefined1 *local_150;
  undefined1 *puStack_148;
  undefined1 *local_140;
  undefined1 *puStack_138;
  undefined1 *puStack_130;
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
  undefined8 local_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  
  local_248 = *(undefined8 *)(param_2 + 0x18);
  puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
  local_140 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_130 = &DAT_aaaaaaaaaaaaaaaa;
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
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
  local_150 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_158 = &DAT_aaaaaaaaaaaaaaaa;
  local_160 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_168 = &DAT_aaaaaaaaaaaaaaaa;
  local_170 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_178 = &DAT_aaaaaaaaaaaaaaaa;
  local_180 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_188 = &DAT_aaaaaaaaaaaaaaaa;
  local_190 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_198 = &DAT_aaaaaaaaaaaaaaaa;
  local_1a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_1b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_1c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_218 = &DAT_aaaaaaaaaaaaaaaa;
  local_220 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_208 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_210 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1f8 = &DAT_aaaaaaaaaaaaaaaa;
  local_200 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1e8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1f0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_1e0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1c8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_228 = &DAT_aaaaaaaaaaaaaaaa;
  local_230 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_238 = _UNK_001f4448;
  local_240 = _DAT_001f4440;
  FUN_00b1e018(&local_230);
  FUN_0066f1ac((long)&local_a0 + 4);
  FUN_00b9154c(param_1,&local_248,*(undefined8 *)(param_2 + 8));
  FUN_0066f2b0((long)&local_a0 + 4);
  FUN_00b1e590(&local_230);
  return;
}


// ===== 00b8d7ec  FUN_00b8d7ec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b8d7ec(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  void *pvStack_b8;
  undefined8 uStack_b0;
  undefined5 local_a8;
  undefined2 uStack_a3;
  char cStack_a1;
  undefined5 local_a0;
  undefined1 uStack_9b;
  undefined1 uStack_9a;
  undefined1 uStack_99;
  undefined8 uStack_98;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  
  local_d8 = *(undefined8 *)(param_2 + 0x18);
  uStack_9b = 0xaa;
  uStack_99 = 0xaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = 0xaaaaaaaa00000000;
  uStack_c8 = _UNK_001f4458;
  local_d0 = _DAT_001f4450;
  uStack_9a = 0;
  pvStack_b8 = (void *)0x0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a3 = 0;
  cStack_a1 = '\0';
  local_a0 = 0;
  uStack_98 = param_3;
  FUN_0066f1ac(&puStack_90);
  FUN_00b92348(param_1,&local_d8,*(undefined8 *)(param_2 + 8));
  FUN_0066f2b0(&puStack_90);
  if (cStack_a1 < '\0') {
    operator_delete(pvStack_b8);
  }
  return;
}


// ===== 00b8d8a8  FUN_00b8d8a8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_00b8d8a8(long param_1,undefined8 param_2)

{
  byte bVar1;
  ulong uVar2;
  code *pcVar3;
  long *plVar4;
  long local_d8;
  code *local_d0;
  ulong uStack_c8;
  undefined1 *local_c0;
  undefined8 *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined8 local_50;
  undefined1 uStack_42;
  undefined1 uStack_41;
  long *local_40 [2];
  code *local_30;
  code *pcStack_28;
  
  local_d8 = *(long *)(param_1 + 0x18);
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b8 = &local_50;
  uStack_c8 = _UNK_001f2ea8;
  local_d0 = _DAT_001f2ea0;
  local_50 = param_2;
  FUN_0066f1ac(&puStack_b0);
  plVar4 = *(long **)(param_1 + 8);
  uVar2 = FUN_007e18fc(plVar4);
  if ((uVar2 & 1) == 0) {
    local_30 = FUN_004473ec;
    pcStack_28 = FUN_00b92558;
    local_40[0] = &local_d8;
    (**(code **)(*plVar4 + 8))(plVar4,local_40,&uStack_41,&uStack_42);
    (*local_30)(0,local_40,local_40);
    FUN_0066f318(&puStack_b0,0x7fffffffffffffff,3000000);
    bVar1 = (byte)local_c0;
  }
  else {
    plVar4 = (long *)(local_d8 + ((long)uStack_c8 >> 1));
    pcVar3 = local_d0;
    if ((uStack_c8 & 1) != 0) {
      pcVar3 = *(code **)(local_d0 + *plVar4);
    }
    bVar1 = (*pcVar3)(plVar4,*puStack_b8);
    local_c0 = (undefined1 *)(CONCAT71(local_c0._1_7_,bVar1) & 0xffffffffffffff01);
  }
  FUN_0066f2b0(&puStack_b0);
  return bVar1 & 1;
}


// ===== 00b8d9c4  FUN_00b8d9c4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b8d9c4(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined8 uStack_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  long local_38;
  
  puStack_a8 = (undefined1 *)&local_d0;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uStack_c8 = *(undefined8 *)(param_1 + 0x18);
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_b8 = _UNK_001f1cd8;
  local_c0 = _DAT_001f1cd0;
  local_d0 = param_2;
  uStack_a0 = param_3;
  FUN_0066f1ac(&puStack_98);
  FUN_00b925b0(&uStack_c8,*(undefined8 *)(param_1 + 8));
  FUN_0066f2b0(&puStack_98);
  puVar2 = local_d0;
  local_d0 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    FUN_00aff0f8(puVar2 + 4);
    if (*(char *)((long)puVar2 + 0x17) < '\0') {
      operator_delete((void *)*puVar2);
    }
    operator_delete(puVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00b8daa4  FUN_00b8daa4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_00b8daa4(long param_1,undefined8 param_2)

{
  byte bVar1;
  ulong uVar2;
  code *pcVar3;
  long *plVar4;
  long local_d8;
  code *local_d0;
  ulong uStack_c8;
  undefined1 *local_c0;
  undefined8 *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined8 local_50;
  undefined1 uStack_42;
  undefined1 uStack_41;
  long *local_40 [2];
  code *local_30;
  code *pcStack_28;
  
  local_d8 = *(long *)(param_1 + 0x18);
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b8 = &local_50;
  uStack_c8 = _UNK_001f40c8;
  local_d0 = _DAT_001f40c0;
  local_50 = param_2;
  FUN_0066f1ac(&puStack_b0);
  plVar4 = *(long **)(param_1 + 8);
  uVar2 = FUN_007e18fc(plVar4);
  if ((uVar2 & 1) == 0) {
    local_30 = FUN_004473ec;
    pcStack_28 = FUN_00b92558;
    local_40[0] = &local_d8;
    (**(code **)(*plVar4 + 8))(plVar4,local_40,&uStack_41,&uStack_42);
    (*local_30)(0,local_40,local_40);
    FUN_0066f318(&puStack_b0,0x7fffffffffffffff,3000000);
    bVar1 = (byte)local_c0;
  }
  else {
    plVar4 = (long *)(local_d8 + ((long)uStack_c8 >> 1));
    pcVar3 = local_d0;
    if ((uStack_c8 & 1) != 0) {
      pcVar3 = *(code **)(local_d0 + *plVar4);
    }
    bVar1 = (*pcVar3)(plVar4,*puStack_b8);
    local_c0 = (undefined1 *)(CONCAT71(local_c0._1_7_,bVar1) & 0xffffffffffffff01);
  }
  FUN_0066f2b0(&puStack_b0);
  return bVar1 & 1;
}


// ===== 00b8dbc0  FUN_00b8dbc0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b8dbc0(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  void *pvStack_b8;
  undefined8 uStack_b0;
  undefined5 local_a8;
  undefined2 uStack_a3;
  char cStack_a1;
  undefined5 local_a0;
  undefined1 uStack_9b;
  undefined1 uStack_9a;
  undefined1 uStack_99;
  undefined8 uStack_98;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  
  local_d8 = *(undefined8 *)(param_2 + 0x18);
  uStack_9b = 0xaa;
  uStack_99 = 0xaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = 0xaaaaaaaa00000000;
  uStack_c8 = _UNK_001f1ce8;
  local_d0 = _DAT_001f1ce0;
  uStack_9a = 0;
  pvStack_b8 = (void *)0x0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a3 = 0;
  cStack_a1 = '\0';
  local_a0 = 0;
  uStack_98 = param_3;
  FUN_0066f1ac(&puStack_90);
  FUN_00b92788(param_1,&local_d8,*(undefined8 *)(param_2 + 8));
  FUN_0066f2b0(&puStack_90);
  if (cStack_a1 < '\0') {
    operator_delete(pvStack_b8);
  }
  return;
}


// ===== 00b8dc7c  FUN_00b8dc7c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b8dc7c(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  long *plVar4;
  undefined1 uStack_e2;
  undefined1 uStack_e1;
  long *local_e0 [2];
  code *local_d0;
  code *pcStack_c8;
  long local_c0;
  code *local_b8;
  ulong uStack_b0;
  undefined1 *local_a8;
  undefined8 uStack_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  undefined1 *local_48;
  undefined1 *puStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = *(long *)(param_1 + 0x18);
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_b0 = _UNK_001f3828;
  local_b8 = _DAT_001f3820;
  uStack_a0 = param_2;
  FUN_0066f1ac(&local_98);
  plVar4 = *(long **)(param_1 + 8);
  uVar2 = FUN_007e18fc(plVar4);
  if ((uVar2 & 1) == 0) {
    local_d0 = FUN_004473ec;
    pcStack_c8 = FUN_00b92998;
    local_e0[0] = &local_c0;
    (**(code **)(*plVar4 + 8))(plVar4,local_e0,&uStack_e1,&uStack_e2);
    (*local_d0)(0,local_e0,local_e0);
    FUN_0066f318(&local_98,0x7fffffffffffffff,3000000);
  }
  else {
    plVar4 = (long *)(local_c0 + ((long)uStack_b0 >> 1));
    pcVar3 = local_b8;
    if ((uStack_b0 & 1) != 0) {
      pcVar3 = *(code **)(local_b8 + *plVar4);
    }
    (*pcVar3)(plVar4,uStack_a0);
  }
  FUN_0066f2b0(&local_98);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00b8ddac  FUN_00b8ddac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b8ddac(long param_1,undefined1 param_2)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  long *plVar4;
  undefined1 local_e4 [2];
  undefined1 uStack_e2;
  undefined1 uStack_e1;
  long *local_e0 [2];
  code *local_d0;
  code *pcStack_c8;
  long local_c0;
  code *local_b8;
  ulong uStack_b0;
  undefined1 *local_a8;
  undefined1 *puStack_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  undefined1 *local_48;
  undefined1 *puStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_c0 = *(long *)(param_1 + 0x18);
  local_a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = local_e4;
  uStack_b0 = _UNK_001f1fe8;
  local_b8 = _DAT_001f1fe0;
  local_e4[0] = param_2;
  FUN_0066f1ac(&local_98);
  plVar4 = *(long **)(param_1 + 8);
  uVar2 = FUN_007e18fc(plVar4);
  if ((uVar2 & 1) == 0) {
    local_d0 = FUN_004473ec;
    pcStack_c8 = FUN_00b929e0;
    local_e0[0] = &local_c0;
    (**(code **)(*plVar4 + 8))(plVar4,local_e0,&uStack_e1,&uStack_e2);
    (*local_d0)(0,local_e0,local_e0);
    FUN_0066f318(&local_98,0x7fffffffffffffff,3000000);
  }
  else {
    plVar4 = (long *)(local_c0 + ((long)uStack_b0 >> 1));
    pcVar3 = local_b8;
    if ((uStack_b0 & 1) != 0) {
      pcVar3 = *(code **)(local_b8 + *plVar4);
    }
    (*pcVar3)(plVar4,*puStack_a0);
  }
  FUN_0066f2b0(&local_98);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00b8dee8  FUN_00b8dee8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b8dee8(long param_1,undefined1 param_2)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  long *plVar4;
  undefined1 local_e4 [2];
  undefined1 uStack_e2;
  undefined1 uStack_e1;
  long *local_e0 [2];
  code *local_d0;
  code *pcStack_c8;
  long local_c0;
  code *local_b8;
  ulong uStack_b0;
  undefined1 *local_a8;
  undefined1 *puStack_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  undefined1 *local_48;
  undefined1 *puStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_c0 = *(long *)(param_1 + 0x18);
  local_a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = local_e4;
  uStack_b0 = _UNK_001f2928;
  local_b8 = _DAT_001f2920;
  local_e4[0] = param_2;
  FUN_0066f1ac(&local_98);
  plVar4 = *(long **)(param_1 + 8);
  uVar2 = FUN_007e18fc(plVar4);
  if ((uVar2 & 1) == 0) {
    local_d0 = FUN_004473ec;
    pcStack_c8 = FUN_00b929e0;
    local_e0[0] = &local_c0;
    (**(code **)(*plVar4 + 8))(plVar4,local_e0,&uStack_e1,&uStack_e2);
    (*local_d0)(0,local_e0,local_e0);
    FUN_0066f318(&local_98,0x7fffffffffffffff,3000000);
  }
  else {
    plVar4 = (long *)(local_c0 + ((long)uStack_b0 >> 1));
    pcVar3 = local_b8;
    if ((uStack_b0 & 1) != 0) {
      pcVar3 = *(code **)(local_b8 + *plVar4);
    }
    (*pcVar3)(plVar4,*puStack_a0);
  }
  FUN_0066f2b0(&local_98);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00b8e024  FUN_00b8e024 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b8e024(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long *local_a0;
  undefined8 uStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  
  local_b8 = *(undefined8 *)(param_2 + 0x18);
  local_a0 = (long *)0x0;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_a8 = _UNK_001f1ff8;
  local_b0 = _DAT_001f1ff0;
  uStack_98 = param_3;
  FUN_0066f1ac(&local_90);
  FUN_00b92a2c(param_1,&local_b8,*(undefined8 *)(param_2 + 0x10));
  FUN_0066f2b0(&local_90);
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 8))();
  }
  return;
}


// ===== 00b8e0bc  FUN_00b8e0bc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b8e0bc(undefined8 param_1,long param_2)

{
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  long *local_98;
  undefined8 local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  
  local_b0 = *(undefined8 *)(param_2 + 0x18);
  local_98 = (long *)0x0;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_a0 = _UNK_001f2cc8;
  local_a8 = _DAT_001f2cc0;
  FUN_0066f1ac((long)&local_90 + 4);
  FUN_00b92bbc(param_1,&local_b0,*(undefined8 *)(param_2 + 0x10));
  FUN_0066f2b0((long)&local_90 + 4);
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 8))();
  }
  return;
}


// ===== 00b8e154  FUN_00b8e154 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_00b8e154(long param_1)

{
  ulong uVar1;
  undefined1 *puVar2;
  code *pcVar3;
  long *plVar4;
  long local_c8;
  code *local_c0;
  ulong uStack_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 uStack_42;
  undefined1 uStack_41;
  long *local_40 [2];
  code *local_30;
  code *pcStack_28;
  
  local_c8 = *(long *)(param_1 + 0x18);
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_b8 = _UNK_001f1ae8;
  local_c0 = _DAT_001f1ae0;
  FUN_0066f1ac(&puStack_a8);
  plVar4 = *(long **)(param_1 + 8);
  uVar1 = FUN_007e18fc(plVar4);
  if ((uVar1 & 1) == 0) {
    local_30 = FUN_004473ec;
    pcStack_28 = FUN_00b92d44;
    local_40[0] = &local_c8;
    (**(code **)(*plVar4 + 8))(plVar4,local_40,&uStack_41,&uStack_42);
    (*local_30)(0,local_40,local_40);
    FUN_0066f318(&puStack_a8,0x7fffffffffffffff,3000000);
    puVar2 = local_b0;
  }
  else {
    pcVar3 = local_c0;
    if ((uStack_b8 & 1) != 0) {
      pcVar3 = *(code **)(local_c0 + *(long *)(local_c8 + ((long)uStack_b8 >> 1)));
    }
    puVar2 = (undefined1 *)(*pcVar3)();
    local_b0 = (undefined1 *)CONCAT44(local_b0._4_4_,(int)puVar2);
  }
  FUN_0066f2b0(&puStack_a8);
  return (ulong)puVar2 & 0xffffffff;
}


// ===== 00b8e258  FUN_00b8e258 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_00b8e258(long param_1)

{
  ulong uVar1;
  undefined1 *puVar2;
  code *pcVar3;
  long *plVar4;
  long local_c8;
  code *local_c0;
  ulong uStack_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 uStack_42;
  undefined1 uStack_41;
  long *local_40 [2];
  code *local_30;
  code *pcStack_28;
  
  local_c8 = *(long *)(param_1 + 0x18);
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_b8 = _UNK_001f3c78;
  local_c0 = _DAT_001f3c70;
  FUN_0066f1ac(&puStack_a8);
  plVar4 = *(long **)(param_1 + 8);
  uVar1 = FUN_007e18fc(plVar4);
  if ((uVar1 & 1) == 0) {
    local_30 = FUN_004473ec;
    pcStack_28 = FUN_00b92d90;
    local_40[0] = &local_c8;
    (**(code **)(*plVar4 + 8))(plVar4,local_40,&uStack_41,&uStack_42);
    (*local_30)(0,local_40,local_40);
    FUN_0066f318(&puStack_a8,0x7fffffffffffffff,3000000);
    puVar2 = local_b0;
  }
  else {
    pcVar3 = local_c0;
    if ((uStack_b8 & 1) != 0) {
      pcVar3 = *(code **)(local_c0 + *(long *)(local_c8 + ((long)uStack_b8 >> 1)));
    }
    puVar2 = (undefined1 *)(*pcVar3)();
    local_b0 = (undefined1 *)CONCAT44(local_b0._4_4_,(int)puVar2);
  }
  FUN_0066f2b0(&puStack_a8);
  return (ulong)puVar2 & 0xffffffff;
}


// ===== 00b8e35c  FUN_00b8e35c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_00b8e35c(long param_1)

{
  ulong uVar1;
  undefined1 *puVar2;
  code *pcVar3;
  long *plVar4;
  long local_c8;
  code *local_c0;
  ulong uStack_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 uStack_42;
  undefined1 uStack_41;
  long *local_40 [2];
  code *local_30;
  code *pcStack_28;
  
  local_c8 = *(long *)(param_1 + 0x18);
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_b8 = _UNK_001f2008;
  local_c0 = _DAT_001f2000;
  FUN_0066f1ac(&puStack_a8);
  plVar4 = *(long **)(param_1 + 8);
  uVar1 = FUN_007e18fc(plVar4);
  if ((uVar1 & 1) == 0) {
    local_30 = FUN_004473ec;
    pcStack_28 = FUN_00b92d90;
    local_40[0] = &local_c8;
    (**(code **)(*plVar4 + 8))(plVar4,local_40,&uStack_41,&uStack_42);
    (*local_30)(0,local_40,local_40);
    FUN_0066f318(&puStack_a8,0x7fffffffffffffff,3000000);
    puVar2 = local_b0;
  }
  else {
    pcVar3 = local_c0;
    if ((uStack_b8 & 1) != 0) {
      pcVar3 = *(code **)(local_c0 + *(long *)(local_c8 + ((long)uStack_b8 >> 1)));
    }
    puVar2 = (undefined1 *)(*pcVar3)();
    local_b0 = (undefined1 *)CONCAT44(local_b0._4_4_,(int)puVar2);
  }
  FUN_0066f2b0(&puStack_a8);
  return (ulong)puVar2 & 0xffffffff;
}


// ===== 00b8e460  FUN_00b8e460 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_00b8e460(long param_1)

{
  ulong uVar1;
  undefined1 *puVar2;
  code *pcVar3;
  long *plVar4;
  long local_c8;
  code *local_c0;
  ulong uStack_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 uStack_42;
  undefined1 uStack_41;
  long *local_40 [2];
  code *local_30;
  code *pcStack_28;
  
  local_c8 = *(long *)(param_1 + 0x18);
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_b8 = _UNK_001f42c8;
  local_c0 = _DAT_001f42c0;
  FUN_0066f1ac(&puStack_a8);
  plVar4 = *(long **)(param_1 + 8);
  uVar1 = FUN_007e18fc(plVar4);
  if ((uVar1 & 1) == 0) {
    local_30 = FUN_004473ec;
    pcStack_28 = FUN_00b92ddc;
    local_40[0] = &local_c8;
    (**(code **)(*plVar4 + 8))(plVar4,local_40,&uStack_41,&uStack_42);
    (*local_30)(0,local_40,local_40);
    FUN_0066f318(&puStack_a8,0x7fffffffffffffff,3000000);
    puVar2 = local_b0;
  }
  else {
    pcVar3 = local_c0;
    if ((uStack_b8 & 1) != 0) {
      pcVar3 = *(code **)(local_c0 + *(long *)(local_c8 + ((long)uStack_b8 >> 1)));
    }
    puVar2 = (undefined1 *)(*pcVar3)();
    local_b0 = (undefined1 *)CONCAT44(local_b0._4_4_,(int)puVar2);
  }
  FUN_0066f2b0(&puStack_a8);
  return (ulong)puVar2 & 0xffffffff;
}


// ===== 00b8e564  FUN_00b8e564 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_00b8e564(long param_1)

{
  ulong uVar1;
  undefined1 *puVar2;
  code *pcVar3;
  long *plVar4;
  long local_c8;
  code *local_c0;
  ulong uStack_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 uStack_42;
  undefined1 uStack_41;
  long *local_40 [2];
  code *local_30;
  code *pcStack_28;
  
  local_c8 = *(long *)(param_1 + 0x18);
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_b8 = _UNK_001f27a8;
  local_c0 = _DAT_001f27a0;
  FUN_0066f1ac(&puStack_a8);
  plVar4 = *(long **)(param_1 + 8);
  uVar1 = FUN_007e18fc(plVar4);
  if ((uVar1 & 1) == 0) {
    local_30 = FUN_004473ec;
    pcStack_28 = FUN_00b92e28;
    local_40[0] = &local_c8;
    (**(code **)(*plVar4 + 8))(plVar4,local_40,&uStack_41,&uStack_42);
    (*local_30)(0,local_40,local_40);
    FUN_0066f318(&puStack_a8,0x7fffffffffffffff,3000000);
    puVar2 = local_b0;
  }
  else {
    pcVar3 = local_c0;
    if ((uStack_b8 & 1) != 0) {
      pcVar3 = *(code **)(local_c0 + *(long *)(local_c8 + ((long)uStack_b8 >> 1)));
    }
    puVar2 = (undefined1 *)(*pcVar3)();
    local_b0 = (undefined1 *)CONCAT44(local_b0._4_4_,(int)puVar2);
  }
  FUN_0066f2b0(&puStack_a8);
  return (ulong)puVar2 & 0xffffffff;
}


// ===== 00b8e668  FUN_00b8e668 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_00b8e668(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  long *plVar4;
  long local_c0;
  code *local_b8;
  ulong uStack_b0;
  undefined8 local_a8;
  undefined1 *puStack_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined1 *local_40 [2];
  code *local_30;
  code *pcStack_28;
  
  local_c0 = *(long *)(param_1 + 0x18);
  puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a8 = 0xaaaaaaaaaaaa0000;
  uStack_b0 = _UNK_001f3018;
  local_b8 = _DAT_001f3010;
  FUN_0066f1ac((long)&local_a8 + 4);
  plVar4 = *(long **)(param_1 + 8);
  uVar1 = FUN_007e18fc(plVar4);
  if ((uVar1 & 1) == 0) {
    local_30 = FUN_004473ec;
    pcStack_28 = FUN_00b92e74;
    local_40[0] = (undefined1 *)&local_c0;
    (**(code **)(*plVar4 + 8))(plVar4,local_40,&uStack_41,&uStack_42);
    (*local_30)(0,local_40,local_40);
    FUN_0066f318((long)&local_a8 + 4,0x7fffffffffffffff,3000000);
    uVar1 = local_a8 & 0xffff;
  }
  else {
    pcVar3 = local_b8;
    if ((uStack_b0 & 1) != 0) {
      pcVar3 = *(code **)(local_b8 + *(long *)(local_c0 + ((long)uStack_b0 >> 1)));
    }
    uVar2 = (*pcVar3)();
    uVar1 = uVar2 & 0xffffffff;
    local_a8 = CONCAT62(local_a8._2_6_,(short)uVar2);
  }
  FUN_0066f2b0((long)&local_a8 + 4);
  return uVar1;
}


// ===== 00b8e778  FUN_00b8e778 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b8e778(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 *local_a8;
  undefined8 uStack_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  undefined1 *local_48;
  undefined1 *puStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = *(undefined8 *)(param_1 + 0x18);
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_b0 = _UNK_001f2af8;
  local_b8 = _DAT_001f2af0;
  uStack_a0 = param_2;
  FUN_0066f1ac(&local_98);
  FUN_00b92ec0(&local_c0,*(undefined8 *)(param_1 + 8));
  FUN_0066f2b0(&local_98);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00b8e824  FUN_00b8e824 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00b8e824(long param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  uint uVar2;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 *local_a8;
  long **pplStack_a0;
  undefined8 *local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  undefined1 *local_48;
  undefined1 *puStack_40;
  undefined1 *local_38;
  undefined8 local_30;
  long *local_28;
  
  local_c0 = *(undefined8 *)(param_1 + 0x18);
  pplStack_a0 = &local_28;
  local_a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &local_30;
  uStack_b0 = _UNK_001f3c88;
  local_b8 = _DAT_001f3c80;
  local_30 = param_3;
  local_28 = param_2;
  FUN_0066f1ac(&puStack_90);
  uVar2 = FUN_00b93010(&local_c0,*(undefined8 *)(param_1 + 8));
  FUN_0066f2b0(&puStack_90);
  plVar1 = local_28;
  local_28 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return uVar2 & 1;
}


// ===== 00b8e8dc  FUN_00b8e8dc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00b8e8dc(long param_1,long *param_2)

{
  long *plVar1;
  uint uVar2;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 *local_98;
  long **pplStack_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  undefined1 *local_48;
  undefined1 *puStack_40;
  undefined1 *local_38;
  undefined1 *puStack_30;
  long *local_28;
  
  local_b0 = *(undefined8 *)(param_1 + 0x18);
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_30 = &DAT_aaaaaaaaaaaaaaaa;
  local_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  pplStack_90 = &local_28;
  uStack_a0 = _UNK_001f2b08;
  local_a8 = _DAT_001f2b00;
  local_28 = param_2;
  FUN_0066f1ac(&local_88);
  uVar2 = FUN_00b93148(&local_b0,*(undefined8 *)(param_1 + 8));
  FUN_0066f2b0(&local_88);
  plVar1 = local_28;
  local_28 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return uVar2 & 1;
}


// ===== 00b8e988  FUN_00b8e988 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b8e988(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  long *plVar3;
  long local_c0;
  code *local_b8;
  ulong uStack_b0;
  undefined8 local_a8;
  undefined1 *puStack_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined1 *local_40 [2];
  code *local_30;
  code *pcStack_28;
  
  local_c0 = *(long *)(param_1 + 0x18);
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
  local_a8 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_b0 = _UNK_001f27b8;
  local_b8 = _DAT_001f27b0;
  FUN_0066f1ac((long)&local_a8 + 4);
  plVar3 = *(long **)(param_1 + 8);
  uVar1 = FUN_007e18fc(plVar3);
  if ((uVar1 & 1) == 0) {
    local_30 = FUN_004473ec;
    pcStack_28 = FUN_00b90f84;
    local_40[0] = (undefined1 *)&local_c0;
    (**(code **)(*plVar3 + 8))(plVar3,local_40,&uStack_41,&uStack_42);
    (*local_30)(0,local_40,local_40);
    FUN_0066f318((long)&local_a8 + 4,0x7fffffffffffffff,3000000);
  }
  else {
    pcVar2 = local_b8;
    if ((uStack_b0 & 1) != 0) {
      pcVar2 = *(code **)(local_b8 + *(long *)(local_c0 + ((long)uStack_b0 >> 1)));
    }
    (*pcVar2)();
  }
  FUN_0066f2b0((long)&local_a8 + 4);
  return;
}


// ===== 00b8ea84  FUN_00b8ea84 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b8ea84(long param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long *plVar5;
  long *local_f0;
  undefined1 uStack_e2;
  undefined1 uStack_e1;
  long *local_e0 [2];
  code *local_d0;
  code *pcStack_c8;
  long local_c0;
  code *local_b8;
  ulong uStack_b0;
  undefined1 *local_a8;
  undefined8 *puStack_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  undefined1 *local_48;
  undefined1 *puStack_40;
  long local_38;
  
  puStack_a0 = &local_f0;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_c0 = *(long *)(param_1 + 0x18);
  local_a8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_b0 = _UNK_001f4468;
  local_b8 = _DAT_001f4460;
  local_f0 = param_2;
  FUN_0066f1ac(&local_98);
  plVar5 = *(long **)(param_1 + 8);
  uVar2 = FUN_007e18fc(plVar5);
  if ((uVar2 & 1) == 0) {
    local_d0 = FUN_004473ec;
    pcStack_c8 = FUN_00b93278;
    local_e0[0] = &local_c0;
    (**(code **)(*plVar5 + 8))(plVar5,local_e0,&uStack_e1,&uStack_e2);
    (*local_d0)(0,local_e0,local_e0);
    FUN_0066f318(&local_98,0x7fffffffffffffff,3000000);
  }
  else {
    plVar5 = (long *)(local_c0 + ((long)uStack_b0 >> 1));
    pcVar4 = local_b8;
    if ((uStack_b0 & 1) != 0) {
      pcVar4 = *(code **)(local_b8 + *plVar5);
    }
    uVar3 = *puStack_a0;
    *puStack_a0 = 0;
    (*pcVar4)(plVar5,uVar3);
  }
  FUN_0066f2b0(&local_98);
  plVar5 = local_f0;
  local_f0 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00b8ebdc  FUN_00b8ebdc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b8ebdc(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  long *plVar3;
  long local_c0;
  code *local_b8;
  ulong uStack_b0;
  undefined8 local_a8;
  undefined1 *puStack_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  undefined1 *puStack_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined1 *local_40 [2];
  code *local_30;
  code *pcStack_28;
  
  local_c0 = *(long *)(param_1 + 0x18);
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  local_98 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a0 = &DAT_aaaaaaaaaaaaaaaa;
  local_a8 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_b0 = _UNK_001f3ae8;
  local_b8 = _DAT_001f3ae0;
  FUN_0066f1ac((long)&local_a8 + 4);
  plVar3 = *(long **)(param_1 + 8);
  uVar1 = FUN_007e18fc(plVar3);
  if ((uVar1 & 1) == 0) {
    local_30 = FUN_004473ec;
    pcStack_28 = FUN_00b90f84;
    local_40[0] = (undefined1 *)&local_c0;
    (**(code **)(*plVar3 + 8))(plVar3,local_40,&uStack_41,&uStack_42);
    (*local_30)(0,local_40,local_40);
    FUN_0066f318((long)&local_a8 + 4,0x7fffffffffffffff,3000000);
  }
  else {
    pcVar2 = local_b8;
    if ((uStack_b0 & 1) != 0) {
      pcVar2 = *(code **)(local_b8 + *(long *)(local_c0 + ((long)uStack_b0 >> 1)));
    }
    (*pcVar2)();
  }
  FUN_0066f2b0((long)&local_a8 + 4);
  return;
}


// ===== 00b8ecd8  FUN_00b8ecd8 =====

void FUN_00b8ecd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00b8ece8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x200))();
  return;
}


// ===== 00b8ecec  FUN_00b8ecec =====

bool FUN_00b8ecec(long param_1)

{
  return (int)*(undefined8 *)(param_1 + 0x20) == 1;
}


// ===== 00b8ed04  FUN_00b8ed04 =====

void FUN_00b8ed04(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xb8ed0c);
  (*pcVar1)();
}


// ===== 00b8ed0c  FUN_00b8ed0c =====

void FUN_00b8ed0c(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}


// ===== 00b8ed48  FUN_00b8ed48 =====

void FUN_00b8ed48(long *param_1,long *param_2)

{
  ulong uVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uStack_42;
  undefined1 uStack_41;
  long *local_40 [2];
  code *local_30;
  code *pcStack_28;
  
  uVar1 = FUN_007e18fc(param_2);
  if ((uVar1 & 1) != 0) {
    UNRECOVERED_JUMPTABLE = (code *)param_1[1];
    if ((param_1[2] & 1U) != 0) {
      UNRECOVERED_JUMPTABLE =
           *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(*param_1 + (param_1[2] >> 1)));
    }
                    /* WARNING: Could not recover jumptable at 0x00b8ed98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  local_30 = FUN_004473ec;
  pcStack_28 = FUN_00b8ee0c;
  local_40[0] = param_1;
  (**(code **)(*param_2 + 8))(param_2,local_40,&uStack_41,&uStack_42);
  (*local_30)(0,local_40,local_40);
  FUN_0066f318((long)param_1 + 0x1c,0x7fffffffffffffff,3000000);
  return;
}


// ===== 00b8ee0c  FUN_00b8ee0c =====

void FUN_00b8ee0c(undefined8 *param_1)

{
  code *pcVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_1;
  pcVar1 = (code *)plVar2[1];
  if ((plVar2[2] & 1U) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(*plVar2 + (plVar2[2] >> 1)));
  }
  (*pcVar1)();
  FUN_0066f2dc((long)plVar2 + 0x1c);
  return;
}


// ===== 00b8ee50  FUN_00b8ee50 =====

void FUN_00b8ee50(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  code *pcVar5;
  long *local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  uVar2 = FUN_007e18fc(param_3);
  if ((uVar2 & 1) == 0) {
    local_40 = FUN_004473ec;
    pcStack_38 = FUN_00b8ef58;
    local_50[0] = param_2;
    (**(code **)(*param_3 + 8))(param_3,local_50,&uStack_11,&uStack_12);
    (*local_40)(0,local_50,local_50);
    FUN_0066f318((long)param_2 + 0x24,0x7fffffffffffffff,3000000);
  }
  else {
    pcVar5 = (code *)param_2[1];
    if ((param_2[2] & 1U) != 0) {
      pcVar5 = *(code **)(pcVar5 + *(long *)(*param_2 + (param_2[2] >> 1)));
    }
    (*pcVar5)(local_50);
    plVar1 = local_50[0];
    plVar3 = (long *)param_2[3];
    local_50[0] = (long *)0x0;
    param_2[3] = (long)plVar1;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
      if (local_50[0] != (long *)0x0) {
        (**(code **)(*local_50[0] + 8))();
      }
    }
  }
  lVar4 = param_2[3];
  param_2[3] = 0;
  *param_1 = lVar4;
  return;
}


// ===== 00b8ef58  FUN_00b8ef58 =====

void FUN_00b8ef58(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  long *plVar4;
  long *local_8;
  
  plVar4 = (long *)*param_1;
  pcVar3 = (code *)plVar4[1];
  if ((plVar4[2] & 1U) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(*plVar4 + (plVar4[2] >> 1)));
  }
  (*pcVar3)(&local_8);
  plVar1 = local_8;
  local_8 = (long *)0x0;
  plVar2 = (long *)plVar4[3];
  plVar4[3] = (long)plVar1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
    if (local_8 != (long *)0x0) {
      (**(code **)(*local_8 + 8))();
    }
  }
  FUN_0066f2dc((long)plVar4 + 0x24);
  return;
}


// ===== 00b8efd8  FUN_00b8efd8 =====

void FUN_00b8efd8(undefined8 *param_1)

{
  long *plVar1;
  byte bVar2;
  code *pcVar3;
  long *plVar4;
  
  plVar4 = (long *)*param_1;
  pcVar3 = (code *)plVar4[1];
  plVar1 = (long *)(*plVar4 + (plVar4[2] >> 1));
  if ((plVar4[2] & 1U) != 0) {
    pcVar3 = *(code **)(pcVar3 + *plVar1);
  }
  bVar2 = (*pcVar3)(plVar1,*(undefined8 *)plVar4[4]);
  *(byte *)(plVar4 + 3) = bVar2 & 1;
  FUN_0066f2dc(plVar4 + 5);
  return;
}


// ===== 00b8f030  FUN_00b8f030 =====

void FUN_00b8f030(undefined8 *param_1)

{
  long *plVar1;
  code *pcVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  pcVar2 = (code *)plVar3[1];
  plVar1 = (long *)(*plVar3 + (plVar3[2] >> 1));
  if ((plVar3[2] & 1U) != 0) {
    pcVar2 = *(code **)(pcVar2 + *plVar1);
  }
  (*pcVar2)(plVar1,*(undefined8 *)plVar3[4]);
  FUN_0066f2dc(plVar3 + 5);
  return;
}


// ===== 00b8f07c  FUN_00b8f07c =====

void FUN_00b8f07c(undefined4 *param_1,long param_2,long *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  uVar4 = FUN_007e18fc(param_3);
  if ((uVar4 & 1) == 0) {
    local_40 = FUN_004473ec;
    pcStack_38 = FUN_00b8f370;
    local_50[0] = param_2;
    (**(code **)(*param_3 + 8))(param_3,local_50,&uStack_11,&uStack_12);
    (*local_40)(0,local_50,local_50);
    FUN_0066f318(param_2 + 0x60,0x7fffffffffffffff,3000000);
  }
  else {
    FUN_00b8f198(param_2,0);
  }
  cVar3 = *(char *)(param_2 + 0x37);
  *param_1 = *(undefined4 *)(param_2 + 0x18);
  if (cVar3 < '\0') {
    FUN_005478d8(param_1 + 2,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28));
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 0x20);
    uVar5 = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 2) = uVar6;
    *(undefined8 *)(param_1 + 6) = uVar5;
  }
  cVar3 = *(char *)(param_2 + 0x48);
  uVar1 = *(undefined4 *)(param_2 + 0x38);
  uVar2 = *(undefined4 *)(param_2 + 0x3b);
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[8] = uVar1;
  *(undefined4 *)((long)param_1 + 0x23) = uVar2;
  *(undefined1 *)(param_1 + 0xc) = 0;
  if (cVar3 == '\x01') {
    uVar5 = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined1 *)(param_1 + 0xc) = 1;
    *(undefined8 *)(param_1 + 10) = uVar5;
  }
  return;
}


// ===== 00b8f198  FUN_00b8f198 =====

void FUN_00b8f198(long *param_1)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined1 auStack_58 [8];
  void *local_50;
  char cStack_39;
  long *local_30;
  char local_28;
  long *local_8;
  
  pcVar3 = (code *)param_1[1];
  lVar2 = param_1[0xb];
  plVar1 = (long *)(*param_1 + (param_1[2] >> 1));
  if ((param_1[2] & 1U) != 0) {
    pcVar3 = *(code **)(pcVar3 + *plVar1);
  }
  local_8 = *(long **)param_1[10];
  *(undefined8 *)param_1[10] = 0;
  (*pcVar3)(auStack_58,plVar1,&local_8,lVar2);
  FUN_00b8f250(param_1 + 3,auStack_58);
  if ((local_28 == '\x01') && (local_30 != (long *)0x0)) {
    (**(code **)(*local_30 + 8))();
  }
  if (cStack_39 < '\0') {
    operator_delete(local_50);
  }
  if (local_8 != (long *)0x0) {
    (**(code **)(*local_8 + 8))();
  }
  return;
}


// ===== 00b8f250  FUN_00b8f250 =====

undefined4 * FUN_00b8f250(undefined4 *param_1,undefined4 *param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined4 uVar3;
  byte bVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  
  puVar7 = (undefined8 *)(param_1 + 2);
  *param_1 = *param_2;
  if (param_1 != param_2) {
    bVar4 = *(byte *)((long)param_2 + 0x1f);
    if (*(char *)((long)param_1 + 0x1f) < '\0') {
      uVar2 = *(ulong *)(param_2 + 4);
      puVar6 = *(undefined8 **)(param_2 + 2);
      if (-1 < (char)bVar4) {
        uVar2 = (ulong)bVar4;
        puVar6 = (undefined8 *)(param_2 + 2);
      }
      FUN_00547f08(puVar7,puVar6,uVar2);
    }
    else if ((char)bVar4 < '\0') {
      FUN_00547fc0(puVar7,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
    }
    else {
      uVar11 = *(undefined8 *)(param_2 + 4);
      uVar9 = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
      *(undefined8 *)(param_1 + 4) = uVar11;
      *puVar7 = uVar9;
    }
  }
  uVar3 = param_2[8];
  *(undefined4 *)((long)param_1 + 0x23) = *(undefined4 *)((long)param_2 + 0x23);
  param_1[8] = uVar3;
  cVar5 = *(char *)(param_1 + 0xc);
  plVar1 = (long *)(param_1 + 10);
  if (cVar5 == *(char *)(param_2 + 0xc)) {
    if (cVar5 != '\0') {
      lVar10 = *(long *)(param_2 + 10);
      *(undefined8 *)(param_2 + 10) = 0;
      plVar8 = (long *)*plVar1;
      *plVar1 = lVar10;
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 8))();
      }
    }
  }
  else if (cVar5 == '\0') {
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    uVar9 = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(param_2 + 10) = 0;
    *(undefined1 *)(param_1 + 0xc) = 1;
    *(undefined8 *)(param_1 + 10) = uVar9;
  }
  else {
    if ((long *)*plVar1 != (long *)0x0) {
      (**(code **)(*(long *)*plVar1 + 8))();
    }
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  return param_1;
}


// ===== 00b8f370  FUN_00b8f370 =====

void FUN_00b8f370(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  FUN_00b8f198(lVar1,0);
  FUN_0066f2dc(lVar1 + 0x60);
  return;
}


// ===== 00b8f3a4  FUN_00b8f3a4 =====

void FUN_00b8f3a4(undefined4 *param_1,long param_2,long *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  uVar4 = FUN_007e18fc(param_3);
  if ((uVar4 & 1) == 0) {
    local_40 = FUN_004473ec;
    pcStack_38 = FUN_00b8f57c;
    local_50[0] = param_2;
    (**(code **)(*param_3 + 8))(param_3,local_50,&uStack_11,&uStack_12);
    (*local_40)(0,local_50,local_50);
    FUN_0066f318(param_2 + 0x68,0x7fffffffffffffff,3000000);
  }
  else {
    FUN_00b8f4c0(param_2,0);
  }
  cVar3 = *(char *)(param_2 + 0x37);
  *param_1 = *(undefined4 *)(param_2 + 0x18);
  if (cVar3 < '\0') {
    FUN_005478d8(param_1 + 2,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28));
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 0x20);
    uVar5 = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 2) = uVar6;
    *(undefined8 *)(param_1 + 6) = uVar5;
  }
  cVar3 = *(char *)(param_2 + 0x48);
  uVar1 = *(undefined4 *)(param_2 + 0x38);
  uVar2 = *(undefined4 *)(param_2 + 0x3b);
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[8] = uVar1;
  *(undefined4 *)((long)param_1 + 0x23) = uVar2;
  *(undefined1 *)(param_1 + 0xc) = 0;
  if (cVar3 == '\x01') {
    uVar5 = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined1 *)(param_1 + 0xc) = 1;
    *(undefined8 *)(param_1 + 10) = uVar5;
  }
  return;
}


// ===== 00b8f4c0  FUN_00b8f4c0 =====

void FUN_00b8f4c0(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined1 auStack_58 [8];
  void *local_50;
  char cStack_39;
  long *local_30;
  char local_28;
  long *local_8;
  
  pcVar4 = (code *)param_1[1];
  lVar2 = param_1[0xb];
  lVar3 = param_1[0xc];
  plVar1 = (long *)(*param_1 + (param_1[2] >> 1));
  if ((param_1[2] & 1U) != 0) {
    pcVar4 = *(code **)(pcVar4 + *plVar1);
  }
  local_8 = *(long **)param_1[10];
  *(undefined8 *)param_1[10] = 0;
  (*pcVar4)(auStack_58,plVar1,&local_8,lVar2,lVar3);
  FUN_00b8f250(param_1 + 3,auStack_58);
  if ((local_28 == '\x01') && (local_30 != (long *)0x0)) {
    (**(code **)(*local_30 + 8))();
  }
  if (cStack_39 < '\0') {
    operator_delete(local_50);
  }
  if (local_8 != (long *)0x0) {
    (**(code **)(*local_8 + 8))();
  }
  return;
}


// ===== 00b8f57c  FUN_00b8f57c =====

void FUN_00b8f57c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  FUN_00b8f4c0(lVar1,0);
  FUN_0066f2dc(lVar1 + 0x68);
  return;
}


// ===== 00b8f5b0  FUN_00b8f5b0 =====

void FUN_00b8f5b0(undefined4 *param_1,long param_2,long *param_3)

{
  undefined4 uVar1;
  char cVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  uVar3 = FUN_007e18fc(param_3);
  if ((uVar3 & 1) == 0) {
    local_40 = FUN_004473ec;
    pcStack_38 = FUN_00b8f7b4;
    local_50[0] = param_2;
    (**(code **)(*param_3 + 8))(param_3,local_50,&uStack_11,&uStack_12);
    (*local_40)(0,local_50,local_50);
    FUN_0066f318(param_2 + 0x48,0x7fffffffffffffff,3000000);
  }
  else {
    FUN_00b8f6a4(param_2,0);
  }
  cVar2 = *(char *)(param_2 + 0x37);
  *param_1 = *(undefined4 *)(param_2 + 0x18);
  if (cVar2 < '\0') {
    FUN_005478d8(param_1 + 2,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28));
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x20);
    uVar4 = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 2) = uVar5;
    *(undefined8 *)(param_1 + 6) = uVar4;
  }
  uVar1 = *(undefined4 *)(param_2 + 0x3b);
  param_1[8] = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)((long)param_1 + 0x23) = uVar1;
  return;
}


// ===== 00b8f6a4  FUN_00b8f6a4 =====

void FUN_00b8f6a4(long *param_1)

{
  long *plVar1;
  undefined8 ***pppuVar2;
  code *pcVar3;
  undefined4 local_58 [2];
  undefined8 **local_50;
  ulong uStack_48;
  undefined7 local_40;
  byte bStack_39;
  undefined4 local_38;
  undefined3 uStack_34;
  long *local_18;
  
  pcVar3 = (code *)param_1[1];
  plVar1 = (long *)(*param_1 + (param_1[2] >> 1));
  if ((param_1[2] & 1U) != 0) {
    pcVar3 = *(code **)(pcVar3 + *plVar1);
  }
  local_18 = *(long **)param_1[8];
  *(undefined8 *)param_1[8] = 0;
  (*pcVar3)(local_58,plVar1,&local_18);
  *(undefined4 *)(param_1 + 3) = local_58[0];
  if (param_1 + 3 != (long *)local_58) {
    if (*(char *)((long)param_1 + 0x37) < '\0') {
      pppuVar2 = (undefined8 ***)local_50;
      if (-1 < (char)bStack_39) {
        uStack_48 = (ulong)bStack_39;
        pppuVar2 = &local_50;
      }
      FUN_00547f08(param_1 + 4,pppuVar2,uStack_48);
    }
    else if ((char)bStack_39 < '\0') {
      FUN_00547fc0(param_1 + 4,local_50,uStack_48);
    }
    else {
      param_1[5] = uStack_48;
      param_1[4] = (long)local_50;
      param_1[6] = CONCAT17(bStack_39,local_40);
    }
  }
  *(undefined4 *)(param_1 + 7) = local_38;
  *(uint *)((long)param_1 + 0x3b) = CONCAT31(uStack_34,local_38._3_1_);
  if ((char)bStack_39 < '\0') {
    operator_delete(local_50);
  }
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 8))();
  }
  return;
}


// ===== 00b8f7b4  FUN_00b8f7b4 =====

void FUN_00b8f7b4(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  FUN_00b8f6a4(lVar1,0);
  FUN_0066f2dc(lVar1 + 0x48);
  return;
}


// ===== 00b8f7e8  FUN_00b8f7e8 =====

void FUN_00b8f7e8(undefined4 *param_1,long param_2,long *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  uVar4 = FUN_007e18fc(param_3);
  if ((uVar4 & 1) == 0) {
    local_40 = FUN_004473ec;
    pcStack_38 = FUN_00b8fadc;
    local_50[0] = param_2;
    (**(code **)(*param_3 + 8))(param_3,local_50,&uStack_11,&uStack_12);
    (*local_40)(0,local_50,local_50);
    FUN_0066f318(param_2 + 0x58,0x7fffffffffffffff,3000000);
  }
  else {
    FUN_00b8f904(param_2,0);
  }
  cVar3 = *(char *)(param_2 + 0x37);
  *param_1 = *(undefined4 *)(param_2 + 0x18);
  if (cVar3 < '\0') {
    FUN_005478d8(param_1 + 2,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28));
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 0x20);
    uVar5 = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 2) = uVar6;
    *(undefined8 *)(param_1 + 6) = uVar5;
  }
  cVar3 = *(char *)(param_2 + 0x48);
  uVar1 = *(undefined4 *)(param_2 + 0x38);
  uVar2 = *(undefined4 *)(param_2 + 0x3b);
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[8] = uVar1;
  *(undefined4 *)((long)param_1 + 0x23) = uVar2;
  *(undefined1 *)(param_1 + 0xc) = 0;
  if (cVar3 == '\x01') {
    uVar5 = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined1 *)(param_1 + 0xc) = 1;
    *(undefined8 *)(param_1 + 10) = uVar5;
  }
  return;
}


// ===== 00b8f904  FUN_00b8f904 =====

void FUN_00b8f904(long *param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined1 auStack_58 [8];
  void *local_50;
  char cStack_39;
  long *local_30;
  char local_28;
  long *local_8;
  
  pcVar2 = (code *)param_1[1];
  plVar1 = (long *)(*param_1 + (param_1[2] >> 1));
  if ((param_1[2] & 1U) != 0) {
    pcVar2 = *(code **)(pcVar2 + *plVar1);
  }
  local_8 = *(long **)param_1[10];
  *(undefined8 *)param_1[10] = 0;
  (*pcVar2)(auStack_58,plVar1,&local_8);
  FUN_00b8f9bc(param_1 + 3,auStack_58);
  if ((local_28 == '\x01') && (local_30 != (long *)0x0)) {
    (**(code **)(*local_30 + 8))();
  }
  if (cStack_39 < '\0') {
    operator_delete(local_50);
  }
  if (local_8 != (long *)0x0) {
    (**(code **)(*local_8 + 8))();
  }
  return;
}


// ===== 00b8f9bc  FUN_00b8f9bc =====

undefined4 * FUN_00b8f9bc(undefined4 *param_1,undefined4 *param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined4 uVar3;
  byte bVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  
  puVar7 = (undefined8 *)(param_1 + 2);
  *param_1 = *param_2;
  if (param_1 != param_2) {
    bVar4 = *(byte *)((long)param_2 + 0x1f);
    if (*(char *)((long)param_1 + 0x1f) < '\0') {
      uVar2 = *(ulong *)(param_2 + 4);
      puVar6 = *(undefined8 **)(param_2 + 2);
      if (-1 < (char)bVar4) {
        uVar2 = (ulong)bVar4;
        puVar6 = (undefined8 *)(param_2 + 2);
      }
      FUN_00547f08(puVar7,puVar6,uVar2);
    }
    else if ((char)bVar4 < '\0') {
      FUN_00547fc0(puVar7,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
    }
    else {
      uVar11 = *(undefined8 *)(param_2 + 4);
      uVar9 = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
      *(undefined8 *)(param_1 + 4) = uVar11;
      *puVar7 = uVar9;
    }
  }
  uVar3 = param_2[8];
  *(undefined4 *)((long)param_1 + 0x23) = *(undefined4 *)((long)param_2 + 0x23);
  param_1[8] = uVar3;
  cVar5 = *(char *)(param_1 + 0xc);
  plVar1 = (long *)(param_1 + 10);
  if (cVar5 == *(char *)(param_2 + 0xc)) {
    if (cVar5 != '\0') {
      lVar10 = *(long *)(param_2 + 10);
      *(undefined8 *)(param_2 + 10) = 0;
      plVar8 = (long *)*plVar1;
      *plVar1 = lVar10;
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 8))();
      }
    }
  }
  else if (cVar5 == '\0') {
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    uVar9 = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(param_2 + 10) = 0;
    *(undefined1 *)(param_1 + 0xc) = 1;
    *(undefined8 *)(param_1 + 10) = uVar9;
  }
  else {
    if ((long *)*plVar1 != (long *)0x0) {
      (**(code **)(*(long *)*plVar1 + 8))();
    }
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  return param_1;
}


// ===== 00b8fadc  FUN_00b8fadc =====

void FUN_00b8fadc(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  FUN_00b8f904(lVar1,0);
  FUN_0066f2dc(lVar1 + 0x58);
  return;
}


// ===== 00b8fb10  FUN_00b8fb10 =====

void FUN_00b8fb10(undefined4 *param_1,long param_2,long *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  uVar4 = FUN_007e18fc(param_3);
  if ((uVar4 & 1) == 0) {
    local_40 = FUN_004473ec;
    pcStack_38 = FUN_00b8fce4;
    local_50[0] = param_2;
    (**(code **)(*param_3 + 8))(param_3,local_50,&uStack_11,&uStack_12);
    (*local_40)(0,local_50,local_50);
    FUN_0066f318(param_2 + 0x60,0x7fffffffffffffff,3000000);
  }
  else {
    FUN_00b8fc2c(param_2,0);
  }
  cVar3 = *(char *)(param_2 + 0x37);
  *param_1 = *(undefined4 *)(param_2 + 0x18);
  if (cVar3 < '\0') {
    FUN_005478d8(param_1 + 2,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28));
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 0x20);
    uVar5 = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 2) = uVar6;
    *(undefined8 *)(param_1 + 6) = uVar5;
  }
  cVar3 = *(char *)(param_2 + 0x48);
  uVar1 = *(undefined4 *)(param_2 + 0x38);
  uVar2 = *(undefined4 *)(param_2 + 0x3b);
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[8] = uVar1;
  *(undefined4 *)((long)param_1 + 0x23) = uVar2;
  *(undefined1 *)(param_1 + 0xc) = 0;
  if (cVar3 == '\x01') {
    uVar5 = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined1 *)(param_1 + 0xc) = 1;
    *(undefined8 *)(param_1 + 10) = uVar5;
  }
  return;
}


// ===== 00b8fc2c  FUN_00b8fc2c =====

void FUN_00b8fc2c(long *param_1)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined1 auStack_58 [8];
  void *local_50;
  char cStack_39;
  long *local_30;
  char local_28;
  long *local_8;
  
  pcVar3 = (code *)param_1[1];
  lVar2 = param_1[0xb];
  plVar1 = (long *)(*param_1 + (param_1[2] >> 1));
  if ((param_1[2] & 1U) != 0) {
    pcVar3 = *(code **)(pcVar3 + *plVar1);
  }
  local_8 = *(long **)param_1[10];
  *(undefined8 *)param_1[10] = 0;
  (*pcVar3)(auStack_58,plVar1,&local_8,lVar2);
  FUN_00b8f9bc(param_1 + 3,auStack_58);
  if ((local_28 == '\x01') && (local_30 != (long *)0x0)) {
    (**(code **)(*local_30 + 8))();
  }
  if (cStack_39 < '\0') {
    operator_delete(local_50);
  }
  if (local_8 != (long *)0x0) {
    (**(code **)(*local_8 + 8))();
  }
  return;
}


// ===== 00b8fce4  FUN_00b8fce4 =====

void FUN_00b8fce4(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  FUN_00b8fc2c(lVar1,0);
  FUN_0066f2dc(lVar1 + 0x60);
  return;
}


// ===== 00b8fd18  FUN_00b8fd18 =====

void FUN_00b8fd18(undefined4 *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  ulong uVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  long *local_70;
  void *local_68;
  code *local_60;
  code *local_58;
  long *local_48;
  char local_40;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  uVar4 = FUN_007e18fc(param_3);
  if ((uVar4 & 1) == 0) {
    local_60 = FUN_004473ec;
    local_58 = FUN_00b8fe94;
    local_70 = param_2;
    (**(code **)(*param_3 + 8))(param_3,&local_70,&uStack_11,&uStack_12);
    (*local_60)(0,&local_70,&local_70);
    FUN_0066f318(param_2 + 0xb,0x7fffffffffffffff,3000000);
  }
  else {
    pcVar6 = (code *)param_2[1];
    plVar1 = (long *)(*param_2 + (param_2[2] >> 1));
    if ((param_2[2] & 1U) != 0) {
      pcVar6 = *(code **)(pcVar6 + *plVar1);
    }
    (*pcVar6)(&local_70,plVar1,*(undefined4 *)param_2[10]);
    FUN_00b8f9bc(param_2 + 3,&local_70);
    if ((local_40 == '\x01') && (local_48 != (long *)0x0)) {
      (**(code **)(*local_48 + 8))();
    }
    if ((long)local_58 < 0) {
      operator_delete(local_68);
    }
  }
  cVar3 = *(char *)((long)param_2 + 0x37);
  *param_1 = (int)param_2[3];
  if (cVar3 < '\0') {
    FUN_005478d8(param_1 + 2,param_2[4],param_2[5]);
  }
  else {
    lVar7 = param_2[4];
    lVar5 = param_2[6];
    *(long *)(param_1 + 4) = param_2[5];
    *(long *)(param_1 + 2) = lVar7;
    *(long *)(param_1 + 6) = lVar5;
  }
  lVar5 = param_2[9];
  lVar7 = param_2[7];
  uVar2 = *(undefined4 *)((long)param_2 + 0x3b);
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[8] = (int)lVar7;
  *(undefined4 *)((long)param_1 + 0x23) = uVar2;
  *(undefined1 *)(param_1 + 0xc) = 0;
  if ((char)lVar5 == '\x01') {
    lVar5 = param_2[8];
    param_2[8] = 0;
    *(undefined1 *)(param_1 + 0xc) = 1;
    *(long *)(param_1 + 10) = lVar5;
  }
  return;
}


// ===== 00b8fe94  FUN_00b8fe94 =====

void FUN_00b8fe94(void)

{
  FUN_00b8fe9c();
  return;
}


// ===== 00b8fe9c  FUN_00b8fe9c =====

void FUN_00b8fe9c(undefined8 *param_1)

{
  long *plVar1;
  code *pcVar2;
  long *plVar3;
  undefined1 auStack_58 [8];
  void *local_50;
  char cStack_39;
  long *local_30;
  char local_28;
  
  plVar3 = (long *)*param_1;
  pcVar2 = (code *)plVar3[1];
  plVar1 = (long *)(*plVar3 + (plVar3[2] >> 1));
  if ((plVar3[2] & 1U) != 0) {
    pcVar2 = *(code **)(pcVar2 + *plVar1);
  }
  (*pcVar2)(auStack_58,plVar1,*(undefined4 *)plVar3[10]);
  FUN_00b8f9bc(plVar3 + 3,auStack_58);
  if ((local_28 == '\x01') && (local_30 != (long *)0x0)) {
    (**(code **)(*local_30 + 8))();
  }
  if (cStack_39 < '\0') {
    operator_delete(local_50);
  }
  FUN_0066f2dc(plVar3 + 0xb);
  return;
}


// ===== 00b8ff3c  FUN_00b8ff3c =====

void FUN_00b8ff3c(undefined4 *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  ulong uVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  long *local_70;
  void *local_68;
  code *local_60;
  code *local_58;
  long *local_48;
  char local_40;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  uVar4 = FUN_007e18fc(param_3);
  if ((uVar4 & 1) == 0) {
    local_60 = FUN_004473ec;
    local_58 = FUN_00b900b8;
    local_70 = param_2;
    (**(code **)(*param_3 + 8))(param_3,&local_70,&uStack_11,&uStack_12);
    (*local_60)(0,&local_70,&local_70);
    FUN_0066f318(param_2 + 0xc,0x7fffffffffffffff,3000000);
  }
  else {
    pcVar6 = (code *)param_2[1];
    plVar1 = (long *)(*param_2 + (param_2[2] >> 1));
    if ((param_2[2] & 1U) != 0) {
      pcVar6 = *(code **)(pcVar6 + *plVar1);
    }
    (*pcVar6)(&local_70,plVar1,*(undefined4 *)param_2[10],param_2[0xb]);
    FUN_00b8f9bc(param_2 + 3,&local_70);
    if ((local_40 == '\x01') && (local_48 != (long *)0x0)) {
      (**(code **)(*local_48 + 8))();
    }
    if ((long)local_58 < 0) {
      operator_delete(local_68);
    }
  }
  cVar3 = *(char *)((long)param_2 + 0x37);
  *param_1 = (int)param_2[3];
  if (cVar3 < '\0') {
    FUN_005478d8(param_1 + 2,param_2[4],param_2[5]);
  }
  else {
    lVar7 = param_2[4];
    lVar5 = param_2[6];
    *(long *)(param_1 + 4) = param_2[5];
    *(long *)(param_1 + 2) = lVar7;
    *(long *)(param_1 + 6) = lVar5;
  }
  lVar5 = param_2[9];
  lVar7 = param_2[7];
  uVar2 = *(undefined4 *)((long)param_2 + 0x3b);
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[8] = (int)lVar7;
  *(undefined4 *)((long)param_1 + 0x23) = uVar2;
  *(undefined1 *)(param_1 + 0xc) = 0;
  if ((char)lVar5 == '\x01') {
    lVar5 = param_2[8];
    param_2[8] = 0;
    *(undefined1 *)(param_1 + 0xc) = 1;
    *(long *)(param_1 + 10) = lVar5;
  }
  return;
}


// ===== 00b900b8  FUN_00b900b8 =====

void FUN_00b900b8(void)

{
  FUN_00b900c0();
  return;
}


// ===== 00b900c0  FUN_00b900c0 =====

void FUN_00b900c0(undefined8 *param_1)

{
  long *plVar1;
  code *pcVar2;
  long *plVar3;
  undefined1 auStack_58 [8];
  void *local_50;
  char cStack_39;
  long *local_30;
  char local_28;
  
  plVar3 = (long *)*param_1;
  pcVar2 = (code *)plVar3[1];
  plVar1 = (long *)(*plVar3 + (plVar3[2] >> 1));
  if ((plVar3[2] & 1U) != 0) {
    pcVar2 = *(code **)(pcVar2 + *plVar1);
  }
  (*pcVar2)(auStack_58,plVar1,*(undefined4 *)plVar3[10],plVar3[0xb]);
  FUN_00b8f9bc(plVar3 + 3,auStack_58);
  if ((local_28 == '\x01') && (local_30 != (long *)0x0)) {
    (**(code **)(*local_30 + 8))();
  }
  if (cStack_39 < '\0') {
    operator_delete(local_50);
  }
  FUN_0066f2dc(plVar3 + 0xc);
  return;
}


// ===== 00b90160  FUN_00b90160 =====

void FUN_00b90160(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  code *pcVar5;
  long *local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  uVar2 = FUN_007e18fc(param_3);
  if ((uVar2 & 1) == 0) {
    local_40 = FUN_004473ec;
    pcStack_38 = FUN_00b9026c;
    local_50[0] = param_2;
    (**(code **)(*param_3 + 8))(param_3,local_50,&uStack_11,&uStack_12);
    (*local_40)(0,local_50,local_50);
    FUN_0066f318(param_2 + 6,0x7fffffffffffffff,3000000);
  }
  else {
    pcVar5 = (code *)param_2[1];
    plVar1 = (long *)(*param_2 + (param_2[2] >> 1));
    if ((param_2[2] & 1U) != 0) {
      pcVar5 = *(code **)(pcVar5 + *plVar1);
    }
    (*pcVar5)(local_50,plVar1,param_2[4],param_2[5]);
    plVar1 = local_50[0];
    plVar3 = (long *)param_2[3];
    local_50[0] = (long *)0x0;
    param_2[3] = (long)plVar1;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
      if (local_50[0] != (long *)0x0) {
        (**(code **)(*local_50[0] + 8))();
      }
    }
  }
  lVar4 = param_2[3];
  param_2[3] = 0;
  *param_1 = lVar4;
  return;
}


// ===== 00b9026c  FUN_00b9026c =====

void FUN_00b9026c(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  long *plVar4;
  long *local_8;
  
  plVar4 = (long *)*param_1;
  pcVar3 = (code *)plVar4[1];
  plVar1 = (long *)(*plVar4 + (plVar4[2] >> 1));
  if ((plVar4[2] & 1U) != 0) {
    pcVar3 = *(code **)(pcVar3 + *plVar1);
  }
  (*pcVar3)(&local_8,plVar1,plVar4[4],plVar4[5]);
  plVar1 = local_8;
  local_8 = (long *)0x0;
  plVar2 = (long *)plVar4[3];
  plVar4[3] = (long)plVar1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
    if (local_8 != (long *)0x0) {
      (**(code **)(*local_8 + 8))();
    }
  }
  FUN_0066f2dc(plVar4 + 6);
  return;
}


// ===== 00b902f0  FUN_00b902f0 =====

void FUN_00b902f0(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  uVar1 = FUN_007e18fc(param_3);
  if ((uVar1 & 1) == 0) {
    local_40 = FUN_004473ec;
    pcStack_38 = FUN_00b90550;
    local_50[0] = param_2;
    (**(code **)(*param_3 + 8))(param_3,local_50,&uStack_11,&uStack_12);
    (*local_40)(0,local_50,local_50);
    FUN_0066f318((long)param_2 + 0x34,0x7fffffffffffffff,3000000);
  }
  else {
    FUN_00b903c0(param_2 + 3,*param_2,param_2[1],param_2[2]);
  }
  uVar4 = param_2[4];
  uVar3 = param_2[3];
  uVar2 = param_2[5];
  param_2[4] = 0;
  param_2[5] = 0;
  param_1[1] = uVar4;
  *param_1 = uVar3;
  param_1[2] = uVar2;
  param_2[3] = 0;
  return;
}


// ===== 00b903c0  FUN_00b903c0 =====

void FUN_00b903c0(undefined8 param_1,long param_2,code *param_3,ulong param_4)

{
  long *plVar1;
  long *plVar2;
  long *local_38;
  long *local_30;
  
  plVar2 = (long *)(param_2 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(param_3 + *plVar2);
  }
  (*param_3)(&local_38,plVar2);
  FUN_00b90484(param_1,&local_38);
  plVar1 = local_38;
  plVar2 = local_30;
  if (local_38 != (long *)0x0) {
    while (plVar1 != plVar2) {
      plVar2 = plVar2 + -1;
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      if ((long *)*plVar2 != (long *)0x0) {
        (**(code **)(*(long *)*plVar2 + 8))();
      }
    }
    local_30 = plVar1;
    operator_delete(local_38);
  }
  return;
}


// ===== 00b90484  FUN_00b90484 =====

undefined8 * FUN_00b90484(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  if (plVar3 != (long *)0x0) {
    plVar2 = (long *)param_1[1];
    plVar1 = plVar3;
    if (plVar3 != plVar2) {
      do {
        plVar2 = plVar2 + -1;
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        if ((long *)*plVar2 != (long *)0x0) {
          (**(code **)(*(long *)*plVar2 + 8))();
        }
      } while (plVar2 != plVar3);
      plVar1 = (long *)*param_1;
    }
    param_1[1] = plVar3;
    operator_delete(plVar1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_1;
}


// ===== 00b90550  FUN_00b90550 =====

void FUN_00b90550(undefined8 *param_1)

{
  param_1 = (undefined8 *)*param_1;
  FUN_00b903c0(param_1 + 3,*param_1,param_1[1],param_1[2]);
  FUN_0066f2dc((long)param_1 + 0x34);
  return;
}


// ===== 00b90588  FUN_00b90588 =====

void FUN_00b90588(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  uVar1 = FUN_007e18fc(param_3);
  if ((uVar1 & 1) == 0) {
    local_40 = FUN_004473ec;
    pcStack_38 = FUN_00b907e8;
    local_50[0] = param_2;
    (**(code **)(*param_3 + 8))(param_3,local_50,&uStack_11,&uStack_12);
    (*local_40)(0,local_50,local_50);
    FUN_0066f318((long)param_2 + 0x34,0x7fffffffffffffff,3000000);
  }
  else {
    FUN_00b90658(param_2 + 3,*param_2,param_2[1],param_2[2]);
  }
  uVar4 = param_2[4];
  uVar3 = param_2[3];
  uVar2 = param_2[5];
  param_2[4] = 0;
  param_2[5] = 0;
  param_1[1] = uVar4;
  *param_1 = uVar3;
  param_1[2] = uVar2;
  param_2[3] = 0;
  return;
}


// ===== 00b90658  FUN_00b90658 =====

void FUN_00b90658(undefined8 param_1,long param_2,code *param_3,ulong param_4)

{
  long *plVar1;
  long *plVar2;
  long *local_38;
  long *local_30;
  
  plVar2 = (long *)(param_2 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(param_3 + *plVar2);
  }
  (*param_3)(&local_38,plVar2);
  FUN_00b9071c(param_1,&local_38);
  plVar1 = local_38;
  plVar2 = local_30;
  if (local_38 != (long *)0x0) {
    while (plVar1 != plVar2) {
      plVar2 = plVar2 + -1;
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      if ((long *)*plVar2 != (long *)0x0) {
        (**(code **)(*(long *)*plVar2 + 8))();
      }
    }
    local_30 = plVar1;
    operator_delete(local_38);
  }
  return;
}


// ===== 00b9071c  FUN_00b9071c =====

undefined8 * FUN_00b9071c(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  if (plVar3 != (long *)0x0) {
    plVar2 = (long *)param_1[1];
    plVar1 = plVar3;
    if (plVar3 != plVar2) {
      do {
        plVar2 = plVar2 + -1;
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        if ((long *)*plVar2 != (long *)0x0) {
          (**(code **)(*(long *)*plVar2 + 8))();
        }
      } while (plVar2 != plVar3);
      plVar1 = (long *)*param_1;
    }
    param_1[1] = plVar3;
    operator_delete(plVar1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_1;
}


// ===== 00b907e8  FUN_00b907e8 =====

void FUN_00b907e8(undefined8 *param_1)

{
  param_1 = (undefined8 *)*param_1;
  FUN_00b90658(param_1 + 3,*param_1,param_1[1],param_1[2]);
  FUN_0066f2dc((long)param_1 + 0x34);
  return;
}


// ===== 00b90820  FUN_00b90820 =====

void FUN_00b90820(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  uVar1 = FUN_007e18fc(param_3);
  if ((uVar1 & 1) == 0) {
    local_40 = FUN_004473ec;
    pcStack_38 = FUN_00b90a80;
    local_50[0] = param_2;
    (**(code **)(*param_3 + 8))(param_3,local_50,&uStack_11,&uStack_12);
    (*local_40)(0,local_50,local_50);
    FUN_0066f318((long)param_2 + 0x34,0x7fffffffffffffff,3000000);
  }
  else {
    FUN_00b908f0(param_2 + 3,*param_2,param_2[1],param_2[2]);
  }
  uVar4 = param_2[4];
  uVar3 = param_2[3];
  uVar2 = param_2[5];
  param_2[4] = 0;
  param_2[5] = 0;
  param_1[1] = uVar4;
  *param_1 = uVar3;
  param_1[2] = uVar2;
  param_2[3] = 0;
  return;
}


// ===== 00b908f0  FUN_00b908f0 =====

void FUN_00b908f0(undefined8 param_1,long param_2,code *param_3,ulong param_4)

{
  long *plVar1;
  long *plVar2;
  long *local_38;
  long *local_30;
  
  plVar2 = (long *)(param_2 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(param_3 + *plVar2);
  }
  (*param_3)(&local_38,plVar2);
  FUN_00b909b4(param_1,&local_38);
  plVar1 = local_38;
  plVar2 = local_30;
  if (local_38 != (long *)0x0) {
    while (plVar1 != plVar2) {
      plVar2 = plVar2 + -1;
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      if ((long *)*plVar2 != (long *)0x0) {
        (**(code **)(*(long *)*plVar2 + 8))();
      }
    }
    local_30 = plVar1;
    operator_delete(local_38);
  }
  return;
}


// ===== 00b909b4  FUN_00b909b4 =====

undefined8 * FUN_00b909b4(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  if (plVar3 != (long *)0x0) {
    plVar2 = (long *)param_1[1];
    plVar1 = plVar3;
    if (plVar3 != plVar2) {
      do {
        plVar2 = plVar2 + -1;
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        if ((long *)*plVar2 != (long *)0x0) {
          (**(code **)(*(long *)*plVar2 + 8))();
        }
      } while (plVar2 != plVar3);
      plVar1 = (long *)*param_1;
    }
    param_1[1] = plVar3;
    operator_delete(plVar1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_1;
}


// ===== 00b90a80  FUN_00b90a80 =====

void FUN_00b90a80(undefined8 *param_1)

{
  param_1 = (undefined8 *)*param_1;
  FUN_00b908f0(param_1 + 3,*param_1,param_1[1],param_1[2]);
  FUN_0066f2dc((long)param_1 + 0x34);
  return;
}


// ===== 00b90ab8  FUN_00b90ab8 =====

byte FUN_00b90ab8(long *param_1,long *param_2)

{
  long *plVar1;
  byte bVar2;
  ulong uVar3;
  code *pcVar4;
  undefined1 uStack_42;
  undefined1 uStack_41;
  long *local_40 [2];
  code *local_30;
  code *pcStack_28;
  
  uVar3 = FUN_007e18fc(param_2);
  if ((uVar3 & 1) == 0) {
    local_30 = FUN_004473ec;
    pcStack_28 = FUN_00b90b94;
    local_40[0] = param_1;
    (**(code **)(*param_2 + 8))(param_2,local_40,&uStack_41,&uStack_42);
    (*local_30)(0,local_40,local_40);
    FUN_0066f318(param_1 + 7,0x7fffffffffffffff,3000000);
    bVar2 = *(byte *)(param_1 + 3);
  }
  else {
    pcVar4 = (code *)param_1[1];
    plVar1 = (long *)(*param_1 + (param_1[2] >> 1));
    if ((param_1[2] & 1U) != 0) {
      pcVar4 = *(code **)(pcVar4 + *plVar1);
    }
    bVar2 = (*pcVar4)(plVar1,*(undefined8 *)param_1[4],*(undefined8 *)param_1[5],
                      *(undefined4 *)param_1[6]);
    *(byte *)(param_1 + 3) = bVar2 & 1;
  }
  return bVar2 & 1;
}


// ===== 00b90b94  FUN_00b90b94 =====

void FUN_00b90b94(undefined8 *param_1)

{
  long *plVar1;
  byte bVar2;
  code *pcVar3;
  long *plVar4;
  
  plVar4 = (long *)*param_1;
  pcVar3 = (code *)plVar4[1];
  plVar1 = (long *)(*plVar4 + (plVar4[2] >> 1));
  if ((plVar4[2] & 1U) != 0) {
    pcVar3 = *(code **)(pcVar3 + *plVar1);
  }
  bVar2 = (*pcVar3)(plVar1,*(undefined8 *)plVar4[4],*(undefined8 *)plVar4[5],
                    *(undefined4 *)plVar4[6]);
  *(byte *)(plVar4 + 3) = bVar2 & 1;
  FUN_0066f2dc(plVar4 + 7);
  return;
}


// ===== 00b90bf8  FUN_00b90bf8 =====

void FUN_00b90bf8(undefined8 *param_1)

{
  long *plVar1;
  code *pcVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  pcVar2 = (code *)plVar3[1];
  plVar1 = (long *)(*plVar3 + (plVar3[2] >> 1));
  if ((plVar3[2] & 1U) != 0) {
    pcVar2 = *(code **)(pcVar2 + *plVar1);
  }
  (*pcVar2)(plVar1,*(undefined8 *)plVar3[4]);
  FUN_0066f2dc(plVar3 + 5);
  return;
}


// ===== 00b90c44  FUN_00b90c44 =====

void FUN_00b90c44(long *param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  ulong uVar3;
  code *pcVar4;
  undefined1 uStack_49;
  long *local_48;
  long *local_40 [2];
  code *local_30;
  code *pcStack_28;
  
  uVar3 = FUN_007e18fc(param_2);
  if ((uVar3 & 1) == 0) {
    local_30 = FUN_004473ec;
    pcStack_28 = FUN_00b90d48;
    local_40[0] = param_1;
    (**(code **)(*param_2 + 8))(param_2,local_40,&local_48,&uStack_49);
    (*local_30)(0,local_40,local_40);
    FUN_0066f318(param_1 + 6,0x7fffffffffffffff,3000000);
  }
  else {
    pcVar4 = (code *)param_1[1];
    puVar2 = (undefined8 *)param_1[5];
    plVar1 = (long *)(*param_1 + (param_1[2] >> 1));
    if ((param_1[2] & 1U) != 0) {
      pcVar4 = *(code **)(pcVar4 + *plVar1);
    }
    local_40[0] = *(long **)param_1[4];
    *(undefined8 *)param_1[4] = 0;
    local_48 = (long *)*puVar2;
    *puVar2 = 0;
    (*pcVar4)(plVar1,local_40,&local_48);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 8))();
    }
    if (local_40[0] != (long *)0x0) {
      (**(code **)(*local_40[0] + 8))();
    }
  }
  return;
}


// ===== 00b90d48  FUN_00b90d48 =====

void FUN_00b90d48(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long *plVar4;
  long *local_28;
  long *local_8;
  
  plVar4 = (long *)*param_1;
  pcVar3 = (code *)plVar4[1];
  puVar2 = (undefined8 *)plVar4[5];
  plVar1 = (long *)(*plVar4 + (plVar4[2] >> 1));
  if ((plVar4[2] & 1U) != 0) {
    pcVar3 = *(code **)(pcVar3 + *plVar1);
  }
  local_8 = *(long **)plVar4[4];
  *(undefined8 *)plVar4[4] = 0;
  local_28 = (long *)*puVar2;
  *puVar2 = 0;
  (*pcVar3)(plVar1,&local_8,&local_28);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 8))();
  }
  if (local_8 != (long *)0x0) {
    (**(code **)(*local_8 + 8))();
  }
  FUN_0066f2dc(plVar4 + 6);
  return;
}


// ===== 00b90de4  FUN_00b90de4 =====

void FUN_00b90de4(long *param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  ulong uVar3;
  code *pcVar4;
  undefined1 uStack_49;
  long *local_48;
  long *local_40 [2];
  code *local_30;
  code *pcStack_28;
  
  uVar3 = FUN_007e18fc(param_2);
  if ((uVar3 & 1) == 0) {
    local_30 = FUN_004473ec;
    pcStack_28 = FUN_00b90ee8;
    local_40[0] = param_1;
    (**(code **)(*param_2 + 8))(param_2,local_40,&local_48,&uStack_49);
    (*local_30)(0,local_40,local_40);
    FUN_0066f318(param_1 + 6,0x7fffffffffffffff,3000000);
  }
  else {
    pcVar4 = (code *)param_1[1];
    puVar2 = (undefined8 *)param_1[5];
    plVar1 = (long *)(*param_1 + (param_1[2] >> 1));
    if ((param_1[2] & 1U) != 0) {
      pcVar4 = *(code **)(pcVar4 + *plVar1);
    }
    local_40[0] = *(long **)param_1[4];
    *(undefined8 *)param_1[4] = 0;
    local_48 = (long *)*puVar2;
    *puVar2 = 0;
    (*pcVar4)(plVar1,local_40,&local_48);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 8))();
    }
    if (local_40[0] != (long *)0x0) {
      (**(code **)(*local_40[0] + 8))();
    }
  }
  return;
}


// ===== 00b90ee8  FUN_00b90ee8 =====

void FUN_00b90ee8(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long *plVar4;
  long *local_28;
  long *local_8;
  
  plVar4 = (long *)*param_1;
  pcVar3 = (code *)plVar4[1];
  puVar2 = (undefined8 *)plVar4[5];
  plVar1 = (long *)(*plVar4 + (plVar4[2] >> 1));
  if ((plVar4[2] & 1U) != 0) {
    pcVar3 = *(code **)(pcVar3 + *plVar1);
  }
  local_8 = *(long **)plVar4[4];
  *(undefined8 *)plVar4[4] = 0;
  local_28 = (long *)*puVar2;
  *puVar2 = 0;
  (*pcVar3)(plVar1,&local_8,&local_28);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 8))();
  }
  if (local_8 != (long *)0x0) {
    (**(code **)(*local_8 + 8))();
  }
  FUN_0066f2dc(plVar4 + 6);
  return;
}


// ===== 00b90f84  FUN_00b90f84 =====

void FUN_00b90f84(undefined8 *param_1)

{
  code *pcVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_1;
  pcVar1 = (code *)plVar2[1];
  if ((plVar2[2] & 1U) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(*plVar2 + (plVar2[2] >> 1)));
  }
  (*pcVar1)();
  FUN_0066f2dc((long)plVar2 + 0x1c);
  return;
}


// ===== 00b90fc8  FUN_00b90fc8 =====

void FUN_00b90fc8(undefined4 *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  ulong uVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  long *local_70;
  void *local_68;
  code *local_60;
  code *local_58;
  long *local_48;
  char local_40;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  uVar4 = FUN_007e18fc(param_3);
  if ((uVar4 & 1) == 0) {
    local_60 = FUN_004473ec;
    local_58 = FUN_00b91264;
    local_70 = param_2;
    (**(code **)(*param_3 + 8))(param_3,&local_70,&uStack_11,&uStack_12);
    (*local_60)(0,&local_70,&local_70);
    FUN_0066f318(param_2 + 0xc,0x7fffffffffffffff,3000000);
  }
  else {
    pcVar6 = (code *)param_2[1];
    plVar1 = (long *)(*param_2 + (param_2[2] >> 1));
    if ((param_2[2] & 1U) != 0) {
      pcVar6 = *(code **)(pcVar6 + *plVar1);
    }
    (*pcVar6)(&local_70,plVar1,param_2[10],*(undefined8 *)param_2[0xb]);
    FUN_00b91144(param_2 + 3,&local_70);
    if ((local_40 == '\x01') && (local_48 != (long *)0x0)) {
      (**(code **)(*local_48 + 8))();
    }
    if ((long)local_58 < 0) {
      operator_delete(local_68);
    }
  }
  cVar3 = *(char *)((long)param_2 + 0x37);
  *param_1 = (int)param_2[3];
  if (cVar3 < '\0') {
    FUN_005478d8(param_1 + 2,param_2[4],param_2[5]);
  }
  else {
    lVar7 = param_2[4];
    lVar5 = param_2[6];
    *(long *)(param_1 + 4) = param_2[5];
    *(long *)(param_1 + 2) = lVar7;
    *(long *)(param_1 + 6) = lVar5;
  }
  lVar5 = param_2[9];
  lVar7 = param_2[7];
  uVar2 = *(undefined4 *)((long)param_2 + 0x3b);
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[8] = (int)lVar7;
  *(undefined4 *)((long)param_1 + 0x23) = uVar2;
  *(undefined1 *)(param_1 + 0xc) = 0;
  if ((char)lVar5 == '\x01') {
    lVar5 = param_2[8];
    param_2[8] = 0;
    *(undefined1 *)(param_1 + 0xc) = 1;
    *(long *)(param_1 + 10) = lVar5;
  }
  return;
}


// ===== 00b91144  FUN_00b91144 =====

undefined4 * FUN_00b91144(undefined4 *param_1,undefined4 *param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined4 uVar3;
  byte bVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  
  puVar7 = (undefined8 *)(param_1 + 2);
  *param_1 = *param_2;
  if (param_1 != param_2) {
    bVar4 = *(byte *)((long)param_2 + 0x1f);
    if (*(char *)((long)param_1 + 0x1f) < '\0') {
      uVar2 = *(ulong *)(param_2 + 4);
      puVar6 = *(undefined8 **)(param_2 + 2);
      if (-1 < (char)bVar4) {
        uVar2 = (ulong)bVar4;
        puVar6 = (undefined8 *)(param_2 + 2);
      }
      FUN_00547f08(puVar7,puVar6,uVar2);
    }
    else if ((char)bVar4 < '\0') {
      FUN_00547fc0(puVar7,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
    }
    else {
      uVar11 = *(undefined8 *)(param_2 + 4);
      uVar9 = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
      *(undefined8 *)(param_1 + 4) = uVar11;
      *puVar7 = uVar9;
    }
  }
  uVar3 = param_2[8];
  *(undefined4 *)((long)param_1 + 0x23) = *(undefined4 *)((long)param_2 + 0x23);
  param_1[8] = uVar3;
  cVar5 = *(char *)(param_1 + 0xc);
  plVar1 = (long *)(param_1 + 10);
  if (cVar5 == *(char *)(param_2 + 0xc)) {
    if (cVar5 != '\0') {
      lVar10 = *(long *)(param_2 + 10);
      *(undefined8 *)(param_2 + 10) = 0;
      plVar8 = (long *)*plVar1;
      *plVar1 = lVar10;
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 8))();
      }
    }
  }
  else if (cVar5 == '\0') {
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    uVar9 = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(param_2 + 10) = 0;
    *(undefined1 *)(param_1 + 0xc) = 1;
    *(undefined8 *)(param_1 + 10) = uVar9;
  }
  else {
    if ((long *)*plVar1 != (long *)0x0) {
      (**(code **)(*(long *)*plVar1 + 8))();
    }
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  return param_1;
}


// ===== 00b91264  FUN_00b91264 =====

void FUN_00b91264(void)

{
  FUN_00b9126c();
  return;
}


// ===== 00b9126c  FUN_00b9126c =====

void FUN_00b9126c(undefined8 *param_1)

{
  long *plVar1;
  code *pcVar2;
  long *plVar3;
  undefined1 auStack_58 [8];
  void *local_50;
  char cStack_39;
  long *local_30;
  char local_28;
  
  plVar3 = (long *)*param_1;
  pcVar2 = (code *)plVar3[1];
  plVar1 = (long *)(*plVar3 + (plVar3[2] >> 1));
  if ((plVar3[2] & 1U) != 0) {
    pcVar2 = *(code **)(pcVar2 + *plVar1);
  }
  (*pcVar2)(auStack_58,plVar1,plVar3[10],*(undefined8 *)plVar3[0xb]);
  FUN_00b91144(plVar3 + 3,auStack_58);
  if ((local_28 == '\x01') && (local_30 != (long *)0x0)) {
    (**(code **)(*local_30 + 8))();
  }
  if (cStack_39 < '\0') {
    operator_delete(local_50);
  }
  FUN_0066f2dc(plVar3 + 0xc);
  return;
}


// ===== 00b9130c  FUN_00b9130c =====

void FUN_00b9130c(undefined8 *param_1)

{
  long *plVar1;
  code *pcVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  pcVar2 = (code *)plVar3[1];
  plVar1 = (long *)(*plVar3 + (plVar3[2] >> 1));
  if ((plVar3[2] & 1U) != 0) {
    pcVar2 = *(code **)(pcVar2 + *plVar1);
  }
  (*pcVar2)(plVar1,*(undefined8 *)plVar3[4],plVar3[5]);
  FUN_0066f2dc(plVar3 + 6);
  return;
}


// ===== 00b91358  FUN_00b91358 =====

void FUN_00b91358(long *param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  code *pcVar3;
  undefined1 uStack_42;
  undefined1 uStack_41;
  long *local_40 [2];
  code *local_30;
  code *pcStack_28;
  
  uVar2 = FUN_007e18fc(param_2);
  if ((uVar2 & 1) == 0) {
    local_30 = FUN_004473ec;
    pcStack_28 = FUN_00b91438;
    local_40[0] = param_1;
    (**(code **)(*param_2 + 8))(param_2,local_40,&uStack_41,&uStack_42);
    (*local_30)(0,local_40,local_40);
    FUN_0066f318(param_1 + 5,0x7fffffffffffffff,3000000);
  }
  else {
    pcVar3 = (code *)param_1[1];
    plVar1 = (long *)(*param_1 + (param_1[2] >> 1));
    if ((param_1[2] & 1U) != 0) {
      pcVar3 = *(code **)(pcVar3 + *plVar1);
    }
    local_40[0] = *(long **)param_1[4];
    *(undefined8 *)param_1[4] = 0;
    (*pcVar3)(plVar1,local_40);
    if (local_40[0] != (long *)0x0) {
      (**(code **)(*local_40[0] + 8))();
    }
  }
  return;
}


// ===== 00b91438  FUN_00b91438 =====

void FUN_00b91438(undefined8 *param_1)

{
  long *plVar1;
  code *pcVar2;
  long *plVar3;
  long *local_8;
  
  plVar3 = (long *)*param_1;
  pcVar2 = (code *)plVar3[1];
  plVar1 = (long *)(*plVar3 + (plVar3[2] >> 1));
  if ((plVar3[2] & 1U) != 0) {
    pcVar2 = *(code **)(pcVar2 + *plVar1);
  }
  local_8 = *(long **)plVar3[4];
  *(undefined8 *)plVar3[4] = 0;
  (*pcVar2)(plVar1,&local_8);
  if (local_8 != (long *)0x0) {
    (**(code **)(*local_8 + 8))();
  }
  FUN_0066f2dc(plVar3 + 5);
  return;
}


// ===== 00b914a8  FUN_00b914a8 =====

void FUN_00b914a8(undefined8 *param_1)

{
  long *plVar1;
  code *pcVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  pcVar2 = (code *)plVar3[1];
  plVar1 = (long *)(*plVar3 + (plVar3[2] >> 1));
  if ((plVar3[2] & 1U) != 0) {
    pcVar2 = *(code **)(pcVar2 + *plVar1);
  }
  (*pcVar2)(plVar1,*(undefined8 *)plVar3[4]);
  FUN_0066f2dc(plVar3 + 5);
  return;
}


// ===== 00b914f4  FUN_00b914f4 =====

void FUN_00b914f4(undefined8 *param_1)

{
  long *plVar1;
  byte bVar2;
  code *pcVar3;
  long *plVar4;
  
  plVar4 = (long *)*param_1;
  pcVar3 = (code *)plVar4[1];
  plVar1 = (long *)(*plVar4 + (plVar4[2] >> 1));
  if ((plVar4[2] & 1U) != 0) {
    pcVar3 = *(code **)(pcVar3 + *plVar1);
  }
  bVar2 = (*pcVar3)(plVar1,*(undefined4 *)plVar4[4]);
  *(byte *)(plVar4 + 3) = bVar2 & 1;
  FUN_0066f2dc(plVar4 + 5);
  return;
}


// ===== 00b9154c  FUN_00b9154c =====

void FUN_00b9154c(undefined8 param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 uStack_1d1;
  long *local_1d0 [2];
  code *local_1c0;
  code *pcStack_1b8;
  undefined1 uStack_31;
  
  uVar1 = FUN_007e18fc(param_3);
  if ((uVar1 & 1) == 0) {
    local_1c0 = FUN_004473ec;
    pcStack_1b8 = FUN_00b922e0;
    local_1d0[0] = param_2;
    (**(code **)(*param_3 + 8))(param_3,local_1d0,&uStack_31,&uStack_1d1);
    (*local_1c0)(0,local_1d0,local_1d0);
    FUN_0066f318((long)param_2 + 0x1ac,0x7fffffffffffffff,3000000);
  }
  else {
    pcVar2 = (code *)param_2[1];
    if ((param_2[2] & 1U) != 0) {
      pcVar2 = *(code **)(pcVar2 + *(long *)(*param_2 + (param_2[2] >> 1)));
    }
    (*pcVar2)(local_1d0);
    FUN_00b91634(param_2 + 3,local_1d0);
    FUN_00b1e590(local_1d0);
  }
  FUN_00b1e168(param_1,param_2 + 3);
  return;
}


// ===== 00b91634  FUN_00b91634 =====

long * FUN_00b91634(long *param_1,long *param_2)

{
  ulong uVar1;
  byte bVar2;
  undefined1 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  if (param_1 == param_2) {
    lVar5 = param_2[3];
    *(int *)(param_1 + 4) = (int)param_2[4];
    param_1[3] = lVar5;
    lVar7 = param_2[0x14];
    lVar6 = param_2[0x17];
    lVar5 = param_2[0x16];
    lVar11 = param_2[0x11];
    lVar10 = param_2[0x10];
    lVar9 = param_2[0x13];
    lVar8 = param_2[0x12];
    param_1[0x15] = param_2[0x15];
    param_1[0x14] = lVar7;
    param_1[0x17] = lVar6;
    param_1[0x16] = lVar5;
    param_1[0x11] = lVar11;
    param_1[0x10] = lVar10;
    param_1[0x13] = lVar9;
    param_1[0x12] = lVar8;
    lVar8 = param_2[0x1b];
    lVar7 = param_2[0x1a];
    lVar6 = param_2[0x1d];
    lVar5 = param_2[0x1c];
    lVar10 = param_2[0x19];
    lVar9 = param_2[0x18];
    *(int *)(param_1 + 0x1e) = (int)param_2[0x1e];
    param_1[0x1b] = lVar8;
    param_1[0x1a] = lVar7;
    param_1[0x1d] = lVar6;
    param_1[0x1c] = lVar5;
    param_1[0x19] = lVar10;
    param_1[0x18] = lVar9;
    lVar7 = param_2[0xc];
    lVar6 = param_2[0xf];
    lVar5 = param_2[0xe];
    lVar9 = param_2[9];
    lVar8 = param_2[8];
    lVar11 = param_2[0xb];
    lVar10 = param_2[10];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = lVar7;
    param_1[0xf] = lVar6;
    param_1[0xe] = lVar5;
    param_1[9] = lVar9;
    param_1[8] = lVar8;
    param_1[0xb] = lVar11;
    param_1[10] = lVar10;
    uVar3 = *(undefined1 *)((long)param_2 + 0xfc);
    *(int *)(param_1 + 0x1f) = (int)param_2[0x1f];
    *(undefined1 *)((long)param_1 + 0xfc) = uVar3;
    *(char *)(param_1 + 0x23) = (char)param_2[0x23];
    lVar6 = param_2[0x28];
    lVar5 = param_2[0x27];
    param_1[0x29] = param_2[0x29];
    param_1[0x28] = lVar6;
    param_1[0x27] = lVar5;
  }
  else {
    FUN_00b91838(param_1,*param_2,param_2[1],(param_2[1] - *param_2 >> 4) * 0x2e8ba2e8ba2e8ba3);
    lVar5 = param_2[3];
    *(int *)(param_1 + 4) = (int)param_2[4];
    param_1[3] = lVar5;
    FUN_00b91c94(param_1 + 5,param_2[5],param_2[6],param_2[6] - param_2[5] >> 3);
    lVar7 = param_2[0xc];
    lVar6 = param_2[0xf];
    lVar5 = param_2[0xe];
    lVar9 = param_2[9];
    lVar8 = param_2[8];
    lVar11 = param_2[0xb];
    lVar10 = param_2[10];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = lVar7;
    param_1[0xf] = lVar6;
    param_1[0xe] = lVar5;
    param_1[9] = lVar9;
    param_1[8] = lVar8;
    param_1[0xb] = lVar11;
    param_1[10] = lVar10;
    lVar7 = param_2[0x14];
    lVar6 = param_2[0x17];
    lVar5 = param_2[0x16];
    lVar9 = param_2[0x11];
    lVar8 = param_2[0x10];
    lVar11 = param_2[0x13];
    lVar10 = param_2[0x12];
    param_1[0x15] = param_2[0x15];
    param_1[0x14] = lVar7;
    param_1[0x17] = lVar6;
    param_1[0x16] = lVar5;
    param_1[0x11] = lVar9;
    param_1[0x10] = lVar8;
    param_1[0x13] = lVar11;
    param_1[0x12] = lVar10;
    lVar10 = param_2[0x1b];
    lVar9 = param_2[0x1a];
    lVar6 = param_2[0x1d];
    lVar5 = param_2[0x1c];
    lVar8 = param_2[0x19];
    lVar7 = param_2[0x18];
    *(int *)(param_1 + 0x1e) = (int)param_2[0x1e];
    param_1[0x1b] = lVar10;
    param_1[0x1a] = lVar9;
    param_1[0x1d] = lVar6;
    param_1[0x1c] = lVar5;
    param_1[0x19] = lVar8;
    param_1[0x18] = lVar7;
    lVar5 = param_2[0x1f];
    *(undefined1 *)((long)param_1 + 0xfc) = *(undefined1 *)((long)param_2 + 0xfc);
    *(int *)(param_1 + 0x1f) = (int)lVar5;
    FUN_005d4868(param_1 + 0x20,param_2[0x20],param_2[0x21],param_2[0x21] - param_2[0x20] >> 1);
    *(char *)(param_1 + 0x23) = (char)param_2[0x23];
    bVar2 = *(byte *)((long)param_2 + 0x137);
    if (*(char *)((long)param_1 + 0x137) < '\0') {
      uVar1 = param_2[0x25];
      plVar4 = (long *)param_2[0x24];
      if (-1 < (char)bVar2) {
        uVar1 = (ulong)bVar2;
        plVar4 = param_2 + 0x24;
      }
      FUN_00547f08(param_1 + 0x24,plVar4,uVar1);
    }
    else if ((char)bVar2 < '\0') {
      FUN_00547fc0(param_1 + 0x24,param_2[0x24],param_2[0x25]);
    }
    else {
      lVar6 = param_2[0x25];
      lVar5 = param_2[0x24];
      param_1[0x26] = param_2[0x26];
      param_1[0x25] = lVar6;
      param_1[0x24] = lVar5;
    }
    lVar6 = param_2[0x28];
    lVar5 = param_2[0x27];
    param_1[0x29] = param_2[0x29];
    param_1[0x28] = lVar6;
    param_1[0x27] = lVar5;
    FUN_00b91fc8(param_1 + 0x2a,param_2[0x2a],param_2[0x2b],
                 (param_2[0x2b] - param_2[0x2a] >> 3) * -0x3333333333333333);
  }
  lVar8 = param_2[0x2e];
  lVar7 = param_2[0x2d];
  lVar6 = param_2[0x30];
  lVar5 = param_2[0x2f];
  param_1[0x31] = param_2[0x31];
  param_1[0x2e] = lVar8;
  param_1[0x2d] = lVar7;
  param_1[0x30] = lVar6;
  param_1[0x2f] = lVar5;
  return param_1;
}


// ===== 00b91838  FUN_00b91838 =====

undefined8 * FUN_00b91838(undefined8 *param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  
  lVar5 = param_1[2];
  puVar7 = (undefined8 *)*param_1;
  if (param_4 <= (ulong)((lVar5 - (long)puVar7 >> 4) * 0x2e8ba2e8ba2e8ba3)) {
    puVar8 = (undefined8 *)param_1[1];
    lVar5 = (long)puVar8 - (long)puVar7;
    if ((ulong)((lVar5 >> 4) * 0x2e8ba2e8ba2e8ba3) < param_4) {
      puVar4 = param_1;
      lVar1 = param_2;
      puVar3 = puVar8;
      if (puVar8 != puVar7) {
        lVar1 = param_2 + lVar5;
        do {
          puVar4 = (undefined8 *)FUN_00b91aa0(puVar7,param_2);
          lVar5 = lVar5 + -0xb0;
          param_2 = param_2 + 0xb0;
          puVar7 = puVar7 + 0x16;
        } while (lVar5 != 0);
        puVar8 = (undefined8 *)param_1[1];
        puVar3 = puVar8;
      }
      while( true ) {
        if (lVar1 == param_3) {
          param_1[1] = puVar3;
          return puVar4;
        }
        if (puVar8 == (undefined8 *)0x0) break;
        puVar4 = (undefined8 *)FUN_00b1dd34(puVar8,lVar1);
        puVar8 = puVar8 + 0x16;
        lVar1 = lVar1 + 0xb0;
        puVar3 = puVar3 + 0x16;
      }
LAB_00b91a74:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    puVar4 = param_1;
    if (param_2 != param_3) {
      do {
        puVar4 = (undefined8 *)FUN_00b91aa0(puVar7,param_2);
        param_2 = param_2 + 0xb0;
        puVar7 = puVar7 + 0x16;
      } while (param_2 != param_3);
      puVar8 = (undefined8 *)param_1[1];
    }
    while (puVar7 != puVar8) {
      puVar8 = puVar8 + -0x16;
      if (puVar8 == (undefined8 *)0x0) goto LAB_00b91a88;
      puVar4 = (undefined8 *)FUN_00b1de28(puVar8);
    }
LAB_00b91a54:
    param_1[1] = puVar7;
    return puVar4;
  }
  if (puVar7 != (undefined8 *)0x0) {
    puVar8 = (undefined8 *)param_1[1];
    puVar4 = puVar7;
    if (puVar7 != puVar8) {
      do {
        puVar8 = puVar8 + -0x16;
        if (puVar8 == (undefined8 *)0x0) {
LAB_00b91a88:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        FUN_00b1de28(puVar8);
      } while (puVar8 != puVar7);
      puVar4 = (undefined8 *)*param_1;
    }
    param_1[1] = puVar7;
    operator_delete(puVar4);
    lVar5 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  if (param_4 < 0x1745d1745d1745e) {
    uVar6 = (lVar5 >> 4) * 0x5d1745d1745d1746;
    if (uVar6 < param_4 || uVar6 - param_4 == 0) {
      uVar6 = param_4;
    }
    if (0xba2e8ba2e8ba2d < (ulong)((lVar5 >> 4) * 0x2e8ba2e8ba2e8ba3)) {
      uVar6 = 0x1745d1745d1745d;
    }
    if (uVar6 < 0x1745d1745d1745e) {
      puVar4 = (undefined8 *)operator_new(uVar6 * 0xb0);
      *param_1 = puVar4;
      param_1[1] = puVar4;
      param_1[2] = puVar4 + uVar6 * 0x16;
      puVar7 = puVar4;
      if (param_2 != param_3) {
        do {
          if (puVar7 == (undefined8 *)0x0) goto LAB_00b91a74;
          puVar4 = (undefined8 *)FUN_00b1dd34(puVar7,param_2);
          param_2 = param_2 + 0xb0;
          puVar7 = puVar7 + 0x16;
        } while (param_2 != param_3);
      }
      goto LAB_00b91a54;
    }
  }
  auVar11 = FUN_00afb604();
  puVar8 = auVar11._8_8_;
  puVar7 = auVar11._0_8_;
  if (puVar7 == puVar8) {
    *(undefined4 *)(puVar7 + 0xc) = *(undefined4 *)(puVar8 + 0xc);
  }
  else {
    bVar2 = *(byte *)((long)puVar8 + 0x17);
    if (*(char *)((long)puVar7 + 0x17) < '\0') {
      uVar6 = puVar8[1];
      puVar4 = (undefined8 *)*puVar8;
      if (-1 < (char)bVar2) {
        uVar6 = (ulong)bVar2;
        puVar4 = puVar8;
      }
      FUN_00547f08(puVar7,puVar4,uVar6);
    }
    else if ((char)bVar2 < '\0') {
      FUN_00547fc0(puVar7,*puVar8,puVar8[1]);
    }
    else {
      uVar10 = puVar8[1];
      uVar9 = *puVar8;
      puVar7[2] = puVar8[2];
      puVar7[1] = uVar10;
      *puVar7 = uVar9;
    }
    FUN_007eeac8(puVar7 + 3,puVar8[3],puVar8[4],
                 ((long)(puVar8[4] - puVar8[3]) >> 3) * -0x5555555555555555);
    bVar2 = *(byte *)((long)puVar8 + 0x47);
    if (*(char *)((long)puVar7 + 0x47) < '\0') {
      uVar6 = puVar8[7];
      puVar4 = (undefined8 *)puVar8[6];
      if (-1 < (char)bVar2) {
        uVar6 = (ulong)bVar2;
        puVar4 = puVar8 + 6;
      }
      FUN_00547f08(puVar7 + 6,puVar4,uVar6);
    }
    else if ((char)bVar2 < '\0') {
      FUN_00547fc0(puVar7 + 6,puVar8[6],puVar8[7]);
    }
    else {
      uVar10 = puVar8[7];
      uVar9 = puVar8[6];
      puVar7[8] = puVar8[8];
      puVar7[7] = uVar10;
      puVar7[6] = uVar9;
    }
    bVar2 = *(byte *)((long)puVar8 + 0x5f);
    if (*(char *)((long)puVar7 + 0x5f) < '\0') {
      uVar6 = puVar8[10];
      puVar4 = (undefined8 *)puVar8[9];
      if (-1 < (char)bVar2) {
        uVar6 = (ulong)bVar2;
        puVar4 = puVar8 + 9;
      }
      FUN_00547f08(puVar7 + 9,puVar4,uVar6);
    }
    else if ((char)bVar2 < '\0') {
      FUN_00547fc0(puVar7 + 9,puVar8[9],puVar8[10]);
    }
    else {
      uVar10 = puVar8[10];
      uVar9 = puVar8[9];
      puVar7[0xb] = puVar8[0xb];
      puVar7[10] = uVar10;
      puVar7[9] = uVar9;
    }
    *(undefined4 *)(puVar7 + 0xc) = *(undefined4 *)(puVar8 + 0xc);
    bVar2 = *(byte *)((long)puVar8 + 0x7f);
    if (*(char *)((long)puVar7 + 0x7f) < '\0') {
      uVar6 = puVar8[0xe];
      puVar4 = (undefined8 *)puVar8[0xd];
      if (-1 < (char)bVar2) {
        uVar6 = (ulong)bVar2;
        puVar4 = puVar8 + 0xd;
      }
      FUN_00547f08(puVar7 + 0xd,puVar4,uVar6);
    }
    else if ((char)bVar2 < '\0') {
      FUN_00547fc0(puVar7 + 0xd,puVar8[0xd],puVar8[0xe]);
    }
    else {
      uVar10 = puVar8[0xe];
      uVar9 = puVar8[0xd];
      puVar7[0xf] = puVar8[0xf];
      puVar7[0xe] = uVar10;
      puVar7[0xd] = uVar9;
    }
    FUN_007eeac8(puVar7 + 0x10,puVar8[0x10],puVar8[0x11],
                 ((long)(puVar8[0x11] - puVar8[0x10]) >> 3) * -0x5555555555555555);
    FUN_007eeac8(puVar7 + 0x13,puVar8[0x13],puVar8[0x14],
                 ((long)(puVar8[0x14] - puVar8[0x13]) >> 3) * -0x5555555555555555);
  }
  return puVar7;
}


// ===== 00b91aa0  FUN_00b91aa0 =====

undefined8 * FUN_00b91aa0(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_1 == param_2) {
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  }
  else {
    bVar2 = *(byte *)((long)param_2 + 0x17);
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      uVar1 = param_2[1];
      puVar3 = (undefined8 *)*param_2;
      if (-1 < (char)bVar2) {
        uVar1 = (ulong)bVar2;
        puVar3 = param_2;
      }
      FUN_00547f08(param_1,puVar3,uVar1);
    }
    else if ((char)bVar2 < '\0') {
      FUN_00547fc0(param_1,*param_2,param_2[1]);
    }
    else {
      uVar5 = param_2[1];
      uVar4 = *param_2;
      param_1[2] = param_2[2];
      param_1[1] = uVar5;
      *param_1 = uVar4;
    }
    FUN_007eeac8(param_1 + 3,param_2[3],param_2[4],
                 ((long)(param_2[4] - param_2[3]) >> 3) * -0x5555555555555555);
    bVar2 = *(byte *)((long)param_2 + 0x47);
    if (*(char *)((long)param_1 + 0x47) < '\0') {
      uVar1 = param_2[7];
      puVar3 = (undefined8 *)param_2[6];
      if (-1 < (char)bVar2) {
        uVar1 = (ulong)bVar2;
        puVar3 = param_2 + 6;
      }
      FUN_00547f08(param_1 + 6,puVar3,uVar1);
    }
    else if ((char)bVar2 < '\0') {
      FUN_00547fc0(param_1 + 6,param_2[6],param_2[7]);
    }
    else {
      uVar5 = param_2[7];
      uVar4 = param_2[6];
      param_1[8] = param_2[8];
      param_1[7] = uVar5;
      param_1[6] = uVar4;
    }
    bVar2 = *(byte *)((long)param_2 + 0x5f);
    if (*(char *)((long)param_1 + 0x5f) < '\0') {
      uVar1 = param_2[10];
      puVar3 = (undefined8 *)param_2[9];
      if (-1 < (char)bVar2) {
        uVar1 = (ulong)bVar2;
        puVar3 = param_2 + 9;
      }
      FUN_00547f08(param_1 + 9,puVar3,uVar1);
    }
    else if ((char)bVar2 < '\0') {
      FUN_00547fc0(param_1 + 9,param_2[9],param_2[10]);
    }
    else {
      uVar5 = param_2[10];
      uVar4 = param_2[9];
      param_1[0xb] = param_2[0xb];
      param_1[10] = uVar5;
      param_1[9] = uVar4;
    }
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
    bVar2 = *(byte *)((long)param_2 + 0x7f);
    if (*(char *)((long)param_1 + 0x7f) < '\0') {
      uVar1 = param_2[0xe];
      puVar3 = (undefined8 *)param_2[0xd];
      if (-1 < (char)bVar2) {
        uVar1 = (ulong)bVar2;
        puVar3 = param_2 + 0xd;
      }
      FUN_00547f08(param_1 + 0xd,puVar3,uVar1);
    }
    else if ((char)bVar2 < '\0') {
      FUN_00547fc0(param_1 + 0xd,param_2[0xd],param_2[0xe]);
    }
    else {
      uVar5 = param_2[0xe];
      uVar4 = param_2[0xd];
      param_1[0xf] = param_2[0xf];
      param_1[0xe] = uVar5;
      param_1[0xd] = uVar4;
    }
    FUN_007eeac8(param_1 + 0x10,param_2[0x10],param_2[0x11],
                 ((long)(param_2[0x11] - param_2[0x10]) >> 3) * -0x5555555555555555);
    FUN_007eeac8(param_1 + 0x13,param_2[0x13],param_2[0x14],
                 ((long)(param_2[0x14] - param_2[0x13]) >> 3) * -0x5555555555555555);
  }
  return param_1;
}


// ===== 00b91c94  FUN_00b91c94 =====

void FUN_00b91c94(undefined8 *param_1,long *param_2,long *param_3,ulong param_4)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  void *pvVar13;
  long *plVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  
  uVar7 = param_1[2];
  plVar15 = (long *)*param_1;
  if ((ulong)((long)(uVar7 - (long)plVar15) >> 3) < param_4) {
    plVar14 = param_3;
    uVar10 = param_4;
    if (plVar15 != (long *)0x0) {
      plVar8 = (long *)param_1[1];
      plVar3 = plVar15;
      if (plVar15 != plVar8) {
        do {
          plVar8 = plVar8 + -1;
          if (plVar8 == (long *)0x0) goto LAB_00b91fb0;
          pvVar13 = (void *)*plVar8;
          if ((pvVar13 != (void *)0x0) && (iVar2 = FUN_00d0f7a0(0xffffffff,pvVar13), iVar2 == 1)) {
            FUN_00833e18(pvVar13);
            operator_delete(pvVar13);
          }
        } while (plVar8 != plVar15);
        plVar3 = (long *)*param_1;
      }
      param_1[1] = plVar15;
      operator_delete(plVar3);
      uVar7 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if (param_4 >> 0x3d == 0) {
      uVar11 = (long)uVar7 >> 2;
      if ((ulong)((long)uVar7 >> 2) <= param_4) {
        uVar11 = param_4;
      }
      if (0x7ffffffffffffff7 < uVar7) {
        uVar11 = 0x1fffffffffffffff;
      }
      if (uVar11 >> 0x3d == 0) {
        plVar15 = (long *)operator_new(uVar11 * 8);
        *param_1 = plVar15;
        param_1[1] = plVar15;
        param_1[2] = plVar15 + uVar11;
        if (param_2 != param_3) {
          do {
            if (plVar15 == (long *)0x0) goto LAB_00b91f9c;
            lVar6 = *param_2;
            *plVar15 = lVar6;
            if (lVar6 != 0) {
              FUN_00d0f740(1);
            }
            param_2 = param_2 + 1;
            plVar15 = plVar15 + 1;
          } while (param_2 != param_3);
        }
        param_1[1] = plVar15;
        return;
      }
    }
    auVar18 = FUN_00afb440();
    plVar15 = auVar18._8_8_;
    puVar4 = auVar18._0_8_;
    lVar6 = puVar4[2];
    puVar5 = (undefined8 *)*puVar4;
    if ((ulong)((lVar6 - (long)puVar5 >> 3) * -0x3333333333333333) < uVar10) {
      if (puVar5 == (undefined8 *)0x0) {
LAB_00b92210:
        if (uVar10 < 0x666666666666667) {
          uVar7 = (lVar6 >> 3) * -0x6666666666666666;
          if (uVar7 < uVar10 || uVar7 - uVar10 == 0) {
            uVar7 = uVar10;
          }
          if (0x333333333333332 < (ulong)((lVar6 >> 3) * -0x3333333333333333)) {
            uVar7 = 0x666666666666666;
          }
          if (uVar7 < 0x666666666666667) {
            puVar5 = (undefined8 *)operator_new(uVar7 * 0x28);
            *puVar4 = puVar5;
            puVar4[1] = puVar5;
            puVar4[2] = puVar5 + uVar7 * 5;
            for (; plVar15 != plVar14; plVar15 = plVar15 + 5) {
              if (puVar5 == (undefined8 *)0x0) goto LAB_00b922c8;
              lVar6 = plVar15[1];
              uVar17 = *(undefined8 *)((long)plVar15 + 0x14);
              uVar16 = *(undefined8 *)((long)plVar15 + 0xc);
              lVar12 = plVar15[4];
              *puVar5 = &PTR_FUN_00d385d8;
              *(int *)(puVar5 + 1) = (int)lVar6;
              *(undefined8 *)((long)puVar5 + 0x14) = uVar17;
              *(undefined8 *)((long)puVar5 + 0xc) = uVar16;
              *(int *)(puVar5 + 4) = (int)lVar12;
              puVar5 = puVar5 + 5;
            }
LAB_00b922b0:
            puVar4[1] = puVar5;
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_00b1ed34();
      }
      puVar9 = (undefined8 *)puVar4[1];
      uVar7 = (ulong)(((long)puVar5 - (long)puVar9) * 0x1333333333333333) >> 3;
      uVar11 = (long)puVar9 * -0x1333333333333333 - 8U >> 3;
      if (uVar11 <= uVar7) {
        uVar7 = uVar11;
      }
      if ((1 < uVar7) && ((((int)puVar5 - (int)puVar9 | -(int)puVar9) & 7U) == 0)) {
        uVar7 = uVar7 & 0x1ffffffffffffffe;
        puVar9 = puVar9 + uVar7 * -5;
        do {
          uVar7 = uVar7 - 2;
        } while (uVar7 != 0);
      }
      do {
        if (puVar9 == puVar5) {
          puVar4[1] = puVar5;
          operator_delete(puVar5);
          lVar6 = 0;
          *puVar4 = 0;
          puVar4[1] = 0;
          puVar4[2] = 0;
          goto LAB_00b92210;
        }
        puVar9 = puVar9 + -5;
      } while (puVar9 != (undefined8 *)0x0);
    }
    else {
      puVar9 = (undefined8 *)puVar4[1];
      lVar6 = (long)puVar9 - (long)puVar5;
      if ((ulong)((lVar6 >> 3) * -0x3333333333333333) < uVar10) {
        puVar1 = puVar9;
        plVar8 = plVar15;
        if (puVar9 != puVar5) {
          plVar8 = (long *)((long)plVar15 + lVar6);
          puVar5 = puVar5 + 4;
          plVar15 = plVar15 + 4;
          do {
            lVar6 = lVar6 + -0x28;
            *(int *)(puVar5 + -3) = (int)plVar15[-3];
            uVar16 = *(undefined8 *)((long)plVar15 + -0x14);
            *(undefined8 *)((long)puVar5 + -0xc) = *(undefined8 *)((long)plVar15 + -0xc);
            *(undefined8 *)((long)puVar5 + -0x14) = uVar16;
            *(int *)puVar5 = (int)*plVar15;
            puVar5 = puVar5 + 5;
            plVar15 = plVar15 + 5;
          } while (lVar6 != 0);
          puVar9 = (undefined8 *)puVar4[1];
          puVar1 = puVar9;
        }
        while( true ) {
          if (plVar8 == plVar14) {
            puVar4[1] = puVar9;
            return;
          }
          if (puVar1 == (undefined8 *)0x0) break;
          *puVar1 = &PTR_FUN_00d385d8;
          puVar9 = puVar9 + 5;
          *(int *)(puVar1 + 1) = (int)plVar8[1];
          uVar16 = *(undefined8 *)((long)plVar8 + 0xc);
          *(undefined8 *)((long)puVar1 + 0x14) = *(undefined8 *)((long)plVar8 + 0x14);
          *(undefined8 *)((long)puVar1 + 0xc) = uVar16;
          *(int *)(puVar1 + 4) = (int)plVar8[4];
          puVar1 = puVar1 + 5;
          plVar8 = plVar8 + 5;
        }
LAB_00b922c8:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      if (plVar15 != plVar14) {
        do {
          *(int *)(puVar5 + 1) = (int)plVar15[1];
          uVar16 = *(undefined8 *)((long)plVar15 + 0xc);
          *(undefined8 *)((long)puVar5 + 0x14) = *(undefined8 *)((long)plVar15 + 0x14);
          *(undefined8 *)((long)puVar5 + 0xc) = uVar16;
          plVar8 = plVar15 + 4;
          plVar15 = plVar15 + 5;
          *(int *)(puVar5 + 4) = (int)*plVar8;
          puVar5 = puVar5 + 5;
        } while (plVar15 != plVar14);
        puVar9 = (undefined8 *)puVar4[1];
      }
      uVar7 = (ulong)(((long)puVar5 - (long)puVar9) * 0x1333333333333333) >> 3;
      uVar10 = (long)puVar9 * -0x1333333333333333 - 8U >> 3;
      if (uVar10 <= uVar7) {
        uVar7 = uVar10;
      }
      if ((1 < uVar7) && ((((int)puVar5 - (int)puVar9 | -(int)puVar9) & 7U) == 0)) {
        uVar7 = uVar7 & 0x1ffffffffffffffe;
        puVar9 = puVar9 + uVar7 * -5;
        do {
          uVar7 = uVar7 - 2;
        } while (uVar7 != 0);
      }
      do {
        if (puVar9 == puVar5) goto LAB_00b922b0;
        puVar9 = puVar9 + -5;
      } while (puVar9 != (undefined8 *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
  plVar14 = (long *)param_1[1];
  lVar6 = (long)plVar14 - (long)plVar15;
  if ((ulong)(lVar6 >> 3) < param_4) {
    plVar8 = param_2;
    plVar3 = plVar14;
    if (plVar14 != plVar15) {
      plVar8 = (long *)((long)param_2 + lVar6);
      do {
        lVar12 = *param_2;
        if (lVar12 != 0) {
          FUN_00d0f740(1,lVar12);
        }
        pvVar13 = (void *)*plVar15;
        if ((pvVar13 != (void *)0x0) && (iVar2 = FUN_00d0f7a0(0xffffffff,pvVar13), iVar2 == 1)) {
          FUN_00833e18(pvVar13);
          operator_delete(pvVar13);
        }
        lVar6 = lVar6 + -8;
        param_2 = param_2 + 1;
        *plVar15 = lVar12;
        plVar15 = plVar15 + 1;
      } while (lVar6 != 0);
      plVar14 = (long *)param_1[1];
      plVar3 = plVar14;
    }
    while( true ) {
      if (plVar8 == param_3) {
        param_1[1] = plVar3;
        return;
      }
      if (plVar14 == (long *)0x0) break;
      lVar6 = *plVar8;
      *plVar14 = lVar6;
      if (lVar6 != 0) {
        FUN_00d0f740(1);
      }
      plVar14 = plVar14 + 1;
      plVar8 = plVar8 + 1;
      plVar3 = plVar3 + 1;
    }
LAB_00b91f9c:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  plVar8 = plVar15;
  if (param_2 == param_3) {
    if (plVar15 == plVar14) goto LAB_00b91edc;
  }
  else {
    do {
      lVar6 = *param_2;
      if (lVar6 != 0) {
        FUN_00d0f740(1,lVar6);
      }
      pvVar13 = (void *)*plVar8;
      if ((pvVar13 != (void *)0x0) && (iVar2 = FUN_00d0f7a0(0xffffffff,pvVar13), iVar2 == 1)) {
        FUN_00833e18(pvVar13);
        operator_delete(pvVar13);
      }
      param_2 = param_2 + 1;
      plVar15 = plVar8 + 1;
      *plVar8 = lVar6;
      plVar8 = plVar15;
    } while (param_2 != param_3);
    plVar14 = (long *)param_1[1];
    if (plVar15 == plVar14) goto LAB_00b91edc;
  }
  do {
    plVar14 = plVar14 + -1;
    if (plVar14 == (long *)0x0) {
LAB_00b91fb0:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    pvVar13 = (void *)*plVar14;
    if ((pvVar13 != (void *)0x0) && (iVar2 = FUN_00d0f7a0(0xffffffff,pvVar13), iVar2 == 1)) {
      FUN_00833e18(pvVar13);
      operator_delete(pvVar13);
    }
  } while (plVar14 != plVar15);
LAB_00b91edc:
  param_1[1] = plVar15;
  return;
}


// ===== 00b91fc8  FUN_00b91fc8 =====

void FUN_00b91fc8(undefined8 *param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar6 = param_1[2];
  puVar5 = (undefined8 *)*param_1;
  if ((ulong)((lVar6 - (long)puVar5 >> 3) * -0x3333333333333333) < param_4) {
    if (puVar5 == (undefined8 *)0x0) {
LAB_00b92210:
      if (param_4 < 0x666666666666667) {
        uVar8 = (lVar6 >> 3) * -0x6666666666666666;
        if (uVar8 < param_4 || uVar8 - param_4 == 0) {
          uVar8 = param_4;
        }
        if (0x333333333333332 < (ulong)((lVar6 >> 3) * -0x3333333333333333)) {
          uVar8 = 0x666666666666666;
        }
        if (uVar8 < 0x666666666666667) {
          puVar5 = (undefined8 *)operator_new(uVar8 * 0x28);
          *param_1 = puVar5;
          param_1[1] = puVar5;
          param_1[2] = puVar5 + uVar8 * 5;
          if (param_2 != param_3) {
            do {
              if (puVar5 == (undefined8 *)0x0) goto LAB_00b922c8;
              uVar2 = *(undefined4 *)(param_2 + 8);
              uVar12 = *(undefined8 *)(param_2 + 0x14);
              uVar11 = *(undefined8 *)(param_2 + 0xc);
              uVar3 = *(undefined4 *)(param_2 + 0x20);
              param_2 = param_2 + 0x28;
              *puVar5 = &PTR_FUN_00d385d8;
              *(undefined4 *)(puVar5 + 1) = uVar2;
              *(undefined8 *)((long)puVar5 + 0x14) = uVar12;
              *(undefined8 *)((long)puVar5 + 0xc) = uVar11;
              *(undefined4 *)(puVar5 + 4) = uVar3;
              puVar5 = puVar5 + 5;
            } while (param_2 != param_3);
          }
LAB_00b922b0:
          param_1[1] = puVar5;
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_00b1ed34();
    }
    puVar7 = (undefined8 *)param_1[1];
    uVar8 = (ulong)(((long)puVar5 - (long)puVar7) * 0x1333333333333333) >> 3;
    uVar9 = (long)puVar7 * -0x1333333333333333 - 8U >> 3;
    if (uVar9 <= uVar8) {
      uVar8 = uVar9;
    }
    if ((1 < uVar8) && ((((int)puVar5 - (int)puVar7 | -(int)puVar7) & 7U) == 0)) {
      uVar8 = uVar8 & 0x1ffffffffffffffe;
      puVar7 = puVar7 + uVar8 * -5;
      do {
        uVar8 = uVar8 - 2;
      } while (uVar8 != 0);
    }
    do {
      if (puVar7 == puVar5) {
        param_1[1] = puVar5;
        operator_delete(puVar5);
        lVar6 = 0;
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        goto LAB_00b92210;
      }
      puVar7 = puVar7 + -5;
    } while (puVar7 != (undefined8 *)0x0);
  }
  else {
    puVar7 = (undefined8 *)param_1[1];
    lVar6 = (long)puVar7 - (long)puVar5;
    if ((ulong)((lVar6 >> 3) * -0x3333333333333333) < param_4) {
      puVar4 = puVar7;
      lVar1 = param_2;
      if (puVar7 != puVar5) {
        lVar1 = param_2 + lVar6;
        puVar5 = puVar5 + 4;
        puVar10 = (undefined4 *)(param_2 + 0x20);
        do {
          lVar6 = lVar6 + -0x28;
          *(undefined4 *)(puVar5 + -3) = puVar10[-6];
          uVar11 = *(undefined8 *)(puVar10 + -5);
          *(undefined8 *)((long)puVar5 + -0xc) = *(undefined8 *)(puVar10 + -3);
          *(undefined8 *)((long)puVar5 + -0x14) = uVar11;
          *(undefined4 *)puVar5 = *puVar10;
          puVar5 = puVar5 + 5;
          puVar10 = puVar10 + 10;
        } while (lVar6 != 0);
        puVar7 = (undefined8 *)param_1[1];
        puVar4 = puVar7;
      }
      while( true ) {
        if (lVar1 == param_3) {
          param_1[1] = puVar7;
          return;
        }
        if (puVar4 == (undefined8 *)0x0) break;
        *puVar4 = &PTR_FUN_00d385d8;
        puVar7 = puVar7 + 5;
        *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(lVar1 + 8);
        uVar11 = *(undefined8 *)(lVar1 + 0xc);
        *(undefined8 *)((long)puVar4 + 0x14) = *(undefined8 *)(lVar1 + 0x14);
        *(undefined8 *)((long)puVar4 + 0xc) = uVar11;
        *(undefined4 *)(puVar4 + 4) = *(undefined4 *)(lVar1 + 0x20);
        puVar4 = puVar4 + 5;
        lVar1 = lVar1 + 0x28;
      }
LAB_00b922c8:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    if (param_2 != param_3) {
      do {
        *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(param_2 + 8);
        uVar11 = *(undefined8 *)(param_2 + 0xc);
        *(undefined8 *)((long)puVar5 + 0x14) = *(undefined8 *)(param_2 + 0x14);
        *(undefined8 *)((long)puVar5 + 0xc) = uVar11;
        puVar10 = (undefined4 *)(param_2 + 0x20);
        param_2 = param_2 + 0x28;
        *(undefined4 *)(puVar5 + 4) = *puVar10;
        puVar5 = puVar5 + 5;
      } while (param_2 != param_3);
      puVar7 = (undefined8 *)param_1[1];
    }
    uVar8 = (ulong)(((long)puVar5 - (long)puVar7) * 0x1333333333333333) >> 3;
    uVar9 = (long)puVar7 * -0x1333333333333333 - 8U >> 3;
    if (uVar9 <= uVar8) {
      uVar8 = uVar9;
    }
    if ((1 < uVar8) && ((((int)puVar5 - (int)puVar7 | -(int)puVar7) & 7U) == 0)) {
      uVar8 = uVar8 & 0x1ffffffffffffffe;
      puVar7 = puVar7 + uVar8 * -5;
      do {
        uVar8 = uVar8 - 2;
      } while (uVar8 != 0);
    }
    do {
      if (puVar7 == puVar5) goto LAB_00b922b0;
      puVar7 = puVar7 + -5;
    } while (puVar7 != (undefined8 *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00b922e0  FUN_00b922e0 =====

void FUN_00b922e0(undefined8 *param_1)

{
  code *pcVar1;
  long *plVar2;
  undefined1 auStack_1b0 [400];
  
  plVar2 = (long *)*param_1;
  pcVar1 = (code *)plVar2[1];
  if ((plVar2[2] & 1U) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(*plVar2 + (plVar2[2] >> 1)));
  }
  (*pcVar1)(auStack_1b0);
  FUN_00b91634(plVar2 + 3,auStack_1b0);
  FUN_00b1e590(auStack_1b0);
  FUN_0066f2dc((long)plVar2 + 0x1ac);
  return;
}


// ===== 00b92348  FUN_00b92348 =====

void FUN_00b92348(undefined4 *param_1,undefined8 *param_2,long *param_3)

{
  undefined4 uVar1;
  char cVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  uVar3 = FUN_007e18fc(param_3);
  if ((uVar3 & 1) == 0) {
    local_40 = FUN_004473ec;
    pcStack_38 = FUN_00b9251c;
    local_50[0] = param_2;
    (**(code **)(*param_3 + 8))(param_3,local_50,&uStack_11,&uStack_12);
    (*local_40)(0,local_50,local_50);
    FUN_0066f318(param_2 + 9,0x7fffffffffffffff,3000000);
  }
  else {
    FUN_00b92444(param_2 + 3,*param_2,param_2[1],param_2[2],param_2[8]);
  }
  cVar2 = *(char *)((long)param_2 + 0x37);
  *param_1 = *(undefined4 *)(param_2 + 3);
  if (cVar2 < '\0') {
    FUN_005478d8(param_1 + 2,param_2[4],param_2[5]);
  }
  else {
    uVar5 = param_2[4];
    uVar4 = param_2[6];
    *(undefined8 *)(param_1 + 4) = param_2[5];
    *(undefined8 *)(param_1 + 2) = uVar5;
    *(undefined8 *)(param_1 + 6) = uVar4;
  }
  uVar1 = *(undefined4 *)((long)param_2 + 0x3b);
  param_1[8] = *(undefined4 *)(param_2 + 7);
  *(undefined4 *)((long)param_1 + 0x23) = uVar1;
  return;
}


// ===== 00b92444  FUN_00b92444 =====

void FUN_00b92444(undefined4 *param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5)

{
  undefined8 ***pppuVar1;
  long *plVar2;
  undefined4 local_48 [2];
  undefined8 **local_40;
  ulong uStack_38;
  undefined7 local_30;
  byte bStack_29;
  undefined4 local_28;
  undefined3 uStack_24;
  
  plVar2 = (long *)(param_2 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(param_3 + *plVar2);
  }
  (*param_3)(local_48,plVar2,param_5);
  plVar2 = (long *)(param_1 + 2);
  *param_1 = local_48[0];
  if (param_1 != local_48) {
    if (*(char *)((long)param_1 + 0x1f) < '\0') {
      pppuVar1 = (undefined8 ***)local_40;
      if (-1 < (char)bStack_29) {
        uStack_38 = (ulong)bStack_29;
        pppuVar1 = &local_40;
      }
      FUN_00547f08(plVar2,pppuVar1,uStack_38);
    }
    else if ((char)bStack_29 < '\0') {
      FUN_00547fc0(plVar2,local_40,uStack_38);
    }
    else {
      *(ulong *)(param_1 + 4) = uStack_38;
      *plVar2 = (long)local_40;
      *(ulong *)(param_1 + 6) = CONCAT17(bStack_29,local_30);
    }
  }
  param_1[8] = local_28;
  *(uint *)((long)param_1 + 0x23) = CONCAT31(uStack_24,local_28._3_1_);
  if ((char)bStack_29 < '\0') {
    operator_delete(local_40);
  }
  return;
}


// ===== 00b9251c  FUN_00b9251c =====

void FUN_00b9251c(undefined8 *param_1)

{
  param_1 = (undefined8 *)*param_1;
  FUN_00b92444(param_1 + 3,*param_1,param_1[1],param_1[2],param_1[8]);
  FUN_0066f2dc(param_1 + 9);
  return;
}


// ===== 00b92558  FUN_00b92558 =====

void FUN_00b92558(undefined8 *param_1)

{
  long *plVar1;
  byte bVar2;
  code *pcVar3;
  long *plVar4;
  
  plVar4 = (long *)*param_1;
  pcVar3 = (code *)plVar4[1];
  plVar1 = (long *)(*plVar4 + (plVar4[2] >> 1));
  if ((plVar4[2] & 1U) != 0) {
    pcVar3 = *(code **)(pcVar3 + *plVar1);
  }
  bVar2 = (*pcVar3)(plVar1,*(undefined8 *)plVar4[4]);
  *(byte *)(plVar4 + 3) = bVar2 & 1;
  FUN_0066f2dc(plVar4 + 5);
  return;
}


// ===== 00b925b0  FUN_00b925b0 =====

void FUN_00b925b0(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined1 uStack_62;
  undefined1 uStack_61;
  long *local_60;
  long lStack_58;
  code *local_50;
  code *local_48;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  uVar4 = FUN_007e18fc(param_2);
  if ((uVar4 & 1) == 0) {
    local_50 = FUN_004473ec;
    local_48 = FUN_00b926d4;
    local_60 = param_1;
    (**(code **)(*param_2 + 8))(param_2,&local_60,&uStack_61,&uStack_62);
    (*local_50)(0,&local_60,&local_60);
    FUN_0066f318(param_1 + 6,0x7fffffffffffffff,3000000);
  }
  else {
    pcVar6 = (code *)param_1[1];
    plVar2 = (long *)param_1[5];
    plVar1 = (long *)(*param_1 + (param_1[2] >> 1));
    if ((param_1[2] & 1U) != 0) {
      pcVar6 = *(code **)(pcVar6 + *plVar1);
    }
    uVar5 = *(undefined8 *)param_1[4];
    *(undefined8 *)param_1[4] = 0;
    lStack_58 = plVar2[1];
    local_60 = (long *)*plVar2;
    local_48 = (code *)plVar2[3];
    local_50 = (code *)plVar2[2];
    if (*(long *)(plVar2[3] + 8) != 0) {
      plVar2[2] = 0;
      plVar2[3] = (long)&DAT_001fbc50;
    }
    (*pcVar6)(plVar1,uVar5,&local_60);
    if (*(code **)(local_48 + 8) != (code *)0x0) {
      (**(code **)(local_48 + 8))(local_60);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00b926d4  FUN_00b926d4 =====

void FUN_00b926d4(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  long *plVar6;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long local_38;
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  plVar6 = (long *)*param_1;
  pcVar5 = (code *)plVar6[1];
  puVar2 = (undefined8 *)plVar6[5];
  plVar1 = (long *)(*plVar6 + (plVar6[2] >> 1));
  if ((plVar6[2] & 1U) != 0) {
    pcVar5 = *(code **)(pcVar5 + *plVar1);
  }
  uVar4 = *(undefined8 *)plVar6[4];
  *(undefined8 *)plVar6[4] = 0;
  uStack_48 = puVar2[1];
  local_50 = *puVar2;
  local_38 = puVar2[3];
  uStack_40 = puVar2[2];
  if (*(long *)(puVar2[3] + 8) != 0) {
    puVar2[2] = 0;
    puVar2[3] = &DAT_001fbc50;
  }
  (*pcVar5)(plVar1,uVar4,&local_50);
  if (*(code **)(local_38 + 8) != (code *)0x0) {
    (**(code **)(local_38 + 8))(local_50);
  }
  FUN_0066f2dc(plVar6 + 6);
  if (*(long *)(lVar3 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00b92788  FUN_00b92788 =====

void FUN_00b92788(undefined4 *param_1,undefined8 *param_2,long *param_3)

{
  undefined4 uVar1;
  char cVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  uVar3 = FUN_007e18fc(param_3);
  if ((uVar3 & 1) == 0) {
    local_40 = FUN_004473ec;
    pcStack_38 = FUN_00b9295c;
    local_50[0] = param_2;
    (**(code **)(*param_3 + 8))(param_3,local_50,&uStack_11,&uStack_12);
    (*local_40)(0,local_50,local_50);
    FUN_0066f318(param_2 + 9,0x7fffffffffffffff,3000000);
  }
  else {
    FUN_00b92884(param_2 + 3,*param_2,param_2[1],param_2[2],param_2[8]);
  }
  cVar2 = *(char *)((long)param_2 + 0x37);
  *param_1 = *(undefined4 *)(param_2 + 3);
  if (cVar2 < '\0') {
    FUN_005478d8(param_1 + 2,param_2[4],param_2[5]);
  }
  else {
    uVar5 = param_2[4];
    uVar4 = param_2[6];
    *(undefined8 *)(param_1 + 4) = param_2[5];
    *(undefined8 *)(param_1 + 2) = uVar5;
    *(undefined8 *)(param_1 + 6) = uVar4;
  }
  uVar1 = *(undefined4 *)((long)param_2 + 0x3b);
  param_1[8] = *(undefined4 *)(param_2 + 7);
  *(undefined4 *)((long)param_1 + 0x23) = uVar1;
  return;
}


// ===== 00b92884  FUN_00b92884 =====

void FUN_00b92884(undefined4 *param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5)

{
  undefined8 ***pppuVar1;
  long *plVar2;
  undefined4 local_48 [2];
  undefined8 **local_40;
  ulong uStack_38;
  undefined7 local_30;
  byte bStack_29;
  undefined4 local_28;
  undefined3 uStack_24;
  
  plVar2 = (long *)(param_2 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(param_3 + *plVar2);
  }
  (*param_3)(local_48,plVar2,param_5);
  plVar2 = (long *)(param_1 + 2);
  *param_1 = local_48[0];
  if (param_1 != local_48) {
    if (*(char *)((long)param_1 + 0x1f) < '\0') {
      pppuVar1 = (undefined8 ***)local_40;
      if (-1 < (char)bStack_29) {
        uStack_38 = (ulong)bStack_29;
        pppuVar1 = &local_40;
      }
      FUN_00547f08(plVar2,pppuVar1,uStack_38);
    }
    else if ((char)bStack_29 < '\0') {
      FUN_00547fc0(plVar2,local_40,uStack_38);
    }
    else {
      *(ulong *)(param_1 + 4) = uStack_38;
      *plVar2 = (long)local_40;
      *(ulong *)(param_1 + 6) = CONCAT17(bStack_29,local_30);
    }
  }
  param_1[8] = local_28;
  *(uint *)((long)param_1 + 0x23) = CONCAT31(uStack_24,local_28._3_1_);
  if ((char)bStack_29 < '\0') {
    operator_delete(local_40);
  }
  return;
}


// ===== 00b9295c  FUN_00b9295c =====

void FUN_00b9295c(undefined8 *param_1)

{
  param_1 = (undefined8 *)*param_1;
  FUN_00b92884(param_1 + 3,*param_1,param_1[1],param_1[2],param_1[8]);
  FUN_0066f2dc(param_1 + 9);
  return;
}


// ===== 00b92998  FUN_00b92998 =====

void FUN_00b92998(undefined8 *param_1)

{
  long *plVar1;
  code *pcVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  pcVar2 = (code *)plVar3[1];
  plVar1 = (long *)(*plVar3 + (plVar3[2] >> 1));
  if ((plVar3[2] & 1U) != 0) {
    pcVar2 = *(code **)(pcVar2 + *plVar1);
  }
  (*pcVar2)(plVar1,plVar3[4]);
  FUN_0066f2dc(plVar3 + 5);
  return;
}


// ===== 00b929e0  FUN_00b929e0 =====

void FUN_00b929e0(undefined8 *param_1)

{
  long *plVar1;
  code *pcVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  pcVar2 = (code *)plVar3[1];
  plVar1 = (long *)(*plVar3 + (plVar3[2] >> 1));
  if ((plVar3[2] & 1U) != 0) {
    pcVar2 = *(code **)(pcVar2 + *plVar1);
  }
  (*pcVar2)(plVar1,*(undefined1 *)plVar3[4]);
  FUN_0066f2dc(plVar3 + 5);
  return;
}


// ===== 00b92a2c  FUN_00b92a2c =====

void FUN_00b92a2c(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  code *pcVar5;
  long *local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  uVar2 = FUN_007e18fc(param_3);
  if ((uVar2 & 1) == 0) {
    local_40 = FUN_004473ec;
    pcStack_38 = FUN_00b92b38;
    local_50[0] = param_2;
    (**(code **)(*param_3 + 8))(param_3,local_50,&uStack_11,&uStack_12);
    (*local_40)(0,local_50,local_50);
    FUN_0066f318(param_2 + 5,0x7fffffffffffffff,3000000);
  }
  else {
    pcVar5 = (code *)param_2[1];
    plVar1 = (long *)(*param_2 + (param_2[2] >> 1));
    if ((param_2[2] & 1U) != 0) {
      pcVar5 = *(code **)(pcVar5 + *plVar1);
    }
    (*pcVar5)(local_50,plVar1,param_2[4]);
    plVar1 = local_50[0];
    plVar3 = (long *)param_2[3];
    local_50[0] = (long *)0x0;
    param_2[3] = (long)plVar1;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
      if (local_50[0] != (long *)0x0) {
        (**(code **)(*local_50[0] + 8))();
      }
    }
  }
  lVar4 = param_2[3];
  param_2[3] = 0;
  *param_1 = lVar4;
  return;
}


// ===== 00b92b38  FUN_00b92b38 =====

void FUN_00b92b38(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  long *plVar4;
  long *local_8;
  
  plVar4 = (long *)*param_1;
  pcVar3 = (code *)plVar4[1];
  plVar1 = (long *)(*plVar4 + (plVar4[2] >> 1));
  if ((plVar4[2] & 1U) != 0) {
    pcVar3 = *(code **)(pcVar3 + *plVar1);
  }
  (*pcVar3)(&local_8,plVar1,plVar4[4]);
  plVar1 = local_8;
  local_8 = (long *)0x0;
  plVar2 = (long *)plVar4[3];
  plVar4[3] = (long)plVar1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
    if (local_8 != (long *)0x0) {
      (**(code **)(*local_8 + 8))();
    }
  }
  FUN_0066f2dc(plVar4 + 5);
  return;
}


// ===== 00b92bbc  FUN_00b92bbc =====

void FUN_00b92bbc(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  code *pcVar5;
  long *local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  uVar2 = FUN_007e18fc(param_3);
  if ((uVar2 & 1) == 0) {
    local_40 = FUN_004473ec;
    pcStack_38 = FUN_00b92cc4;
    local_50[0] = param_2;
    (**(code **)(*param_3 + 8))(param_3,local_50,&uStack_11,&uStack_12);
    (*local_40)(0,local_50,local_50);
    FUN_0066f318((long)param_2 + 0x24,0x7fffffffffffffff,3000000);
  }
  else {
    pcVar5 = (code *)param_2[1];
    if ((param_2[2] & 1U) != 0) {
      pcVar5 = *(code **)(pcVar5 + *(long *)(*param_2 + (param_2[2] >> 1)));
    }
    (*pcVar5)(local_50);
    plVar1 = local_50[0];
    plVar3 = (long *)param_2[3];
    local_50[0] = (long *)0x0;
    param_2[3] = (long)plVar1;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
      if (local_50[0] != (long *)0x0) {
        (**(code **)(*local_50[0] + 8))();
      }
    }
  }
  lVar4 = param_2[3];
  param_2[3] = 0;
  *param_1 = lVar4;
  return;
}


// ===== 00b92cc4  FUN_00b92cc4 =====

void FUN_00b92cc4(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  long *plVar4;
  long *local_8;
  
  plVar4 = (long *)*param_1;
  pcVar3 = (code *)plVar4[1];
  if ((plVar4[2] & 1U) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(*plVar4 + (plVar4[2] >> 1)));
  }
  (*pcVar3)(&local_8);
  plVar1 = local_8;
  local_8 = (long *)0x0;
  plVar2 = (long *)plVar4[3];
  plVar4[3] = (long)plVar1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
    if (local_8 != (long *)0x0) {
      (**(code **)(*local_8 + 8))();
    }
  }
  FUN_0066f2dc((long)plVar4 + 0x24);
  return;
}


// ===== 00b92d44  FUN_00b92d44 =====

void FUN_00b92d44(undefined8 *param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  pcVar2 = (code *)plVar3[1];
  if ((plVar3[2] & 1U) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(*plVar3 + (plVar3[2] >> 1)));
  }
  uVar1 = (*pcVar2)();
  *(undefined4 *)(plVar3 + 3) = uVar1;
  FUN_0066f2dc(plVar3 + 4);
  return;
}


// ===== 00b92d90  FUN_00b92d90 =====

void FUN_00b92d90(undefined8 *param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  pcVar2 = (code *)plVar3[1];
  if ((plVar3[2] & 1U) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(*plVar3 + (plVar3[2] >> 1)));
  }
  uVar1 = (*pcVar2)();
  *(undefined4 *)(plVar3 + 3) = uVar1;
  FUN_0066f2dc(plVar3 + 4);
  return;
}


// ===== 00b92ddc  FUN_00b92ddc =====

void FUN_00b92ddc(undefined8 *param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  pcVar2 = (code *)plVar3[1];
  if ((plVar3[2] & 1U) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(*plVar3 + (plVar3[2] >> 1)));
  }
  uVar1 = (*pcVar2)();
  *(undefined4 *)(plVar3 + 3) = uVar1;
  FUN_0066f2dc(plVar3 + 4);
  return;
}


// ===== 00b92e28  FUN_00b92e28 =====

void FUN_00b92e28(undefined8 *param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  pcVar2 = (code *)plVar3[1];
  if ((plVar3[2] & 1U) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(*plVar3 + (plVar3[2] >> 1)));
  }
  uVar1 = (*pcVar2)();
  *(undefined4 *)(plVar3 + 3) = uVar1;
  FUN_0066f2dc(plVar3 + 4);
  return;
}


// ===== 00b92e74  FUN_00b92e74 =====

void FUN_00b92e74(undefined8 *param_1)

{
  undefined2 uVar1;
  code *pcVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  pcVar2 = (code *)plVar3[1];
  if ((plVar3[2] & 1U) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(*plVar3 + (plVar3[2] >> 1)));
  }
  uVar1 = (*pcVar2)();
  *(undefined2 *)(plVar3 + 3) = uVar1;
  FUN_0066f2dc((long)plVar3 + 0x1c);
  return;
}


// ===== 00b92ec0  FUN_00b92ec0 =====

void FUN_00b92ec0(long *param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  code *pcVar3;
  undefined1 uStack_42;
  undefined1 uStack_41;
  long *local_40 [2];
  code *local_30;
  code *pcStack_28;
  
  uVar2 = FUN_007e18fc(param_2);
  if ((uVar2 & 1) == 0) {
    local_30 = FUN_004473ec;
    pcStack_28 = FUN_00b92fa0;
    local_40[0] = param_1;
    (**(code **)(*param_2 + 8))(param_2,local_40,&uStack_41,&uStack_42);
    (*local_30)(0,local_40,local_40);
    FUN_0066f318(param_1 + 5,0x7fffffffffffffff,3000000);
  }
  else {
    pcVar3 = (code *)param_1[1];
    plVar1 = (long *)(*param_1 + (param_1[2] >> 1));
    if ((param_1[2] & 1U) != 0) {
      pcVar3 = *(code **)(pcVar3 + *plVar1);
    }
    local_40[0] = *(long **)param_1[4];
    *(undefined8 *)param_1[4] = 0;
    (*pcVar3)(plVar1,local_40);
    if (local_40[0] != (long *)0x0) {
      (**(code **)(*local_40[0] + 8))();
    }
  }
  return;
}


// ===== 00b92fa0  FUN_00b92fa0 =====

void FUN_00b92fa0(undefined8 *param_1)

{
  long *plVar1;
  code *pcVar2;
  long *plVar3;
  long *local_8;
  
  plVar3 = (long *)*param_1;
  pcVar2 = (code *)plVar3[1];
  plVar1 = (long *)(*plVar3 + (plVar3[2] >> 1));
  if ((plVar3[2] & 1U) != 0) {
    pcVar2 = *(code **)(pcVar2 + *plVar1);
  }
  local_8 = *(long **)plVar3[4];
  *(undefined8 *)plVar3[4] = 0;
  (*pcVar2)(plVar1,&local_8);
  if (local_8 != (long *)0x0) {
    (**(code **)(*local_8 + 8))();
  }
  FUN_0066f2dc(plVar3 + 5);
  return;
}


