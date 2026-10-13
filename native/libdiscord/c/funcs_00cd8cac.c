// ===== 00cd8cac  FUN_00cd8cac =====

/* WARNING: Removing unreachable block (ram,0x00cd9228) */
/* WARNING: Removing unreachable block (ram,0x00cd976c) */

void FUN_00cd8cac(long *param_1,ulong param_2,long param_3,undefined4 *param_4,long param_5,
                 undefined8 param_6,long param_7,long param_8)

{
  undefined1 *puVar1;
  undefined **ppuVar2;
  long *plVar3;
  int *piVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined4 uVar7;
  byte bVar8;
  undefined *__s;
  bool bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  void *pvVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  undefined8 uVar24;
  ulong uVar25;
  size_t sVar26;
  undefined8 *puVar27;
  ulong uVar28;
  int *piVar29;
  long lVar30;
  int *extraout_x8;
  undefined8 *puVar31;
  void *pvVar32;
  long *plVar33;
  void *pvVar34;
  undefined8 unaff_x24;
  void *pvVar35;
  undefined8 *puVar36;
  byte unaff_w25;
  undefined8 unaff_x26;
  void *pvVar37;
  long *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auVar38 [16];
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  long lStack_168;
  undefined1 auStack_160 [16];
  undefined1 *puStack_150;
  undefined1 *puStack_148;
  undefined8 uStack_140;
  char cStack_131;
  undefined8 *puStack_128;
  undefined8 *puStack_120;
  long lStack_118;
  char *pcStack_110;
  undefined1 *puStack_108;
  undefined1 *puStack_100;
  undefined1 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined1 *puStack_d8;
  undefined1 *puStack_d0;
  undefined1 auStack_c1 [17];
  undefined1 *puStack_b0;
  code *pcStack_a8;
  
  pvVar32 = (void *)*param_1;
  if (param_2 <= (ulong)((param_1[2] - (long)pvVar32 >> 4) * -0x5555555555555555)) {
    return;
  }
  if (param_2 < 0x555555555555556) {
    pvVar37 = (void *)param_1[1];
    pvVar16 = operator_new(param_2 * 0x30);
    lVar17 = (long)pvVar37 - (long)pvVar32;
    pvVar34 = pvVar32;
    pvVar35 = pvVar16;
    if (lVar17 != 0) {
      do {
        if (pvVar35 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        FUN_00b16c08(pvVar35,pvVar34);
        pvVar34 = (void *)((long)pvVar34 + 0x30);
        pvVar35 = (void *)((long)pvVar35 + 0x30);
      } while (pvVar34 != pvVar37);
      do {
        if (pvVar32 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        FUN_00b16cf4(pvVar32);
        pvVar32 = (void *)((long)pvVar32 + 0x30);
      } while (pvVar32 != pvVar37);
      pvVar32 = (void *)*param_1;
    }
    *param_1 = (long)pvVar16;
    param_1[1] = (long)pvVar16 + lVar17;
    param_1[2] = (long)((long)pvVar16 + param_2 * 0x30);
    if (pvVar32 == (void *)0x0) {
      return;
    }
    operator_delete(pvVar32);
    return;
  }
  auVar38 = FUN_00b09644();
  piVar29 = auVar38._8_8_;
  lVar17 = auVar38._0_8_;
  pcStack_a8 = FUN_00cd8de8;
  puStack_b0 = &stack0xffffffffffffffb0;
  if (param_4 == (undefined4 *)0x0) {
LAB_00cd9868:
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../pc/media_session.cc",0x531,
                 "IsMediaContentOfType(offer_content, media_description_options.type)",&DAT_001f5fa0
                );
  }
  iVar6 = *piVar29;
  puStack_b0 = &stack0xffffffffffffffb0;
  lVar18 = FUN_00b174c8(param_4);
  if (lVar18 == 0) goto LAB_00cd9868;
  plVar19 = (long *)FUN_00b174c8(param_4);
  iVar10 = (**(code **)(*plVar19 + 0x10))();
  if (iVar10 != iVar6) goto LAB_00cd9868;
  iVar6 = *piVar29;
  plVar19 = (long *)FUN_00b174c8(param_4);
  lVar18 = 0x20;
  if (iVar6 != 0) {
    lVar18 = 0x30;
  }
  lVar18 = (**(code **)(*plVar19 + lVar18))();
  bVar8 = *(byte *)(param_4 + 1);
  if (param_5 == 0) {
    lVar30 = 0;
    if (param_7 == 0) goto LAB_00cd8f18;
LAB_00cd8edc:
    uVar25 = *(ulong *)(piVar29 + 4);
    piVar4 = *(int **)(piVar29 + 2);
    if (-1 < (char)*(byte *)((long)piVar29 + 0x1f)) {
      uVar25 = (ulong)*(byte *)((long)piVar29 + 0x1f);
      piVar4 = piVar29 + 2;
    }
    lVar21 = FUN_00b17900(param_7,piVar4,uVar25);
    lVar20 = 0;
    if (lVar21 != 0) {
      lVar20 = lVar21 + 0x18;
    }
  }
  else {
    uVar25 = *(ulong *)(piVar29 + 4);
    piVar4 = *(int **)(piVar29 + 2);
    if (-1 < (char)*(byte *)((long)piVar29 + 0x1f)) {
      uVar25 = (ulong)*(byte *)((long)piVar29 + 0x1f);
      piVar4 = piVar29 + 2;
    }
    lVar20 = FUN_00b17900(param_5,piVar4,uVar25);
    lVar30 = 0;
    if (lVar20 != 0) {
      lVar30 = lVar20 + 0x18;
    }
    if (param_7 != 0) goto LAB_00cd8edc;
LAB_00cd8f18:
    lVar20 = 0;
  }
  pvVar32 = (void *)FUN_00cd55a4(*(undefined8 *)(lVar17 + 0x20),lVar30,(long)piVar29 + 0x25,
                                 param_8 == 0 & (bVar8 ^ 1),lVar20,unaff_x24);
  if (pvVar32 == (void *)0x0) {
    uVar25 = FUN_004249b0();
    if ((uVar25 & 1) == 0) {
      pcStack_110 = "../../pc/media_session.cc";
      puStack_108 = (undefined1 *)0x2a1b;
      puStack_100 = auStack_c1;
      auStack_160 = FUN_005eceec(10);
      FUN_00623bb0(&DAT_00255ab0,pcStack_110,(ulong)puStack_108 & 0xffffffff,
                   "Failed to create transport answer, transport is missing",&DAT_001a2df6,
                   auStack_160,&DAT_001ca519);
    }
    FUN_00b0092c(extraout_x8,10,"Failed to create transport answer, transport is missing",0x37);
    return;
  }
  iVar6 = piVar29[8];
  uVar7 = *(undefined4 *)(lVar18 + 0x74);
  uVar11 = FUN_00bde288(uVar7);
  uVar12 = FUN_00bde298(uVar7);
  uVar13 = FUN_00bde288(iVar6);
  uVar14 = FUN_00bde298(iVar6);
  uVar15 = FUN_00bde24c(uVar12 & uVar13 & 1,uVar11 & uVar14 & 1);
  puStack_d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e8 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
  uStack_f0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e0 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
  puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
  pcStack_110 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_100 = &DAT_aaaaaaaaaaaaaaaa;
  uVar22 = (**(code **)(**(long **)(lVar17 + 0x30) + 0x18))(*(long **)(lVar17 + 0x30));
  puStack_120 = (undefined8 *)0x0;
  lStack_118 = 0;
  puStack_128 = (undefined8 *)0x0;
  lVar30 = *(long *)(lVar18 + 0x110);
  lVar20 = *(long *)(lVar18 + 0x118);
  uVar25 = lVar20 - lVar30;
  puVar23 = puStack_120;
  if (uVar25 != 0) {
    if (0x12f684bda12f684 < (ulong)(((long)uVar25 >> 3) * -0x7b425ed097b425ed)) {
                    /* WARNING: Subroutine does not return */
      FUN_0088fd20();
    }
    puVar23 = (undefined8 *)operator_new(uVar25);
    lStack_118 = (long)puVar23 + uVar25;
    puStack_128 = puVar23;
    do {
      if (puVar23 == (undefined8 *)0x0) goto LAB_00cd9840;
      FUN_00890830(puVar23,lVar30);
      lVar30 = lVar30 + 0xd8;
      puVar23 = puVar23 + 0x1b;
    } while (lVar30 != lVar20);
  }
  puStack_120 = puVar23;
  uVar24 = (**(code **)(**(long **)(lVar17 + 0x30) + 0x10))();
  FUN_00bd8970(&pcStack_110,uVar22,piVar29,param_3,uVar7,uVar15,param_6,&puStack_128,uVar24);
  puVar36 = puStack_128;
  puVar23 = puStack_120;
  if (puStack_128 != (undefined8 *)0x0) {
    while (puVar36 != puVar23) {
      puVar23 = puVar23 + -0x1b;
      if (puVar23 == (undefined8 *)0x0) goto LAB_00cd982c;
      (**(code **)*puVar23)(puVar23);
    }
    puStack_120 = puVar36;
    operator_delete(puStack_128);
  }
  puVar23 = puStack_e0;
  puVar36 = puStack_e8;
  __s = PTR_DAT_00d52148;
  if ((int)pcStack_110 != 0) {
    *extraout_x8 = (int)pcStack_110;
    puVar23 = (undefined8 *)((ulong)&pcStack_110 | 8);
    uVar24 = *puVar23;
    uVar22 = puVar23[2];
    *(undefined8 *)(extraout_x8 + 4) = puVar23[1];
    *(undefined8 *)(extraout_x8 + 2) = uVar24;
    *(undefined8 *)(extraout_x8 + 6) = uVar22;
    iVar6 = (int)uStack_f0;
    puVar23 = (undefined8 *)0x0;
    puVar36 = (undefined8 *)0x0;
    extraout_x8[8] = iVar6;
    *(undefined4 *)((long)extraout_x8 + 0x23) = uStack_f0._3_4_;
    goto LAB_00cd9700;
  }
  if (((ulong)puStack_d0 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
              );
  }
  puStack_e0 = (undefined8 *)0x0;
  puStack_d8 = (undefined1 *)0x0;
  bVar9 = puStack_e8 == puVar23;
  puStack_e8 = (undefined8 *)0x0;
  puVar31 = puVar36;
  if (bVar9) {
    bVar9 = true;
  }
  else {
    do {
      uVar25 = FUN_00891aec(puVar31);
      if ((uVar25 & 1) != 0) {
        uVar25 = puVar31[3];
        puVar27 = (undefined8 *)puVar31[2];
        if (-1 < (char)*(byte *)((long)puVar31 + 0x27)) {
          uVar25 = (ulong)*(byte *)((long)puVar31 + 0x27);
          puVar27 = puVar31 + 2;
        }
        sVar26 = strlen(__s);
        uVar25 = FUN_0061ff84(puVar27,uVar25,__s,sVar26);
        puVar27 = puVar31;
        if ((uVar25 & 1) == 0) break;
      }
      puVar31 = puVar31 + 0x1b;
      puVar27 = puVar23;
    } while (puVar31 != puVar23);
    bVar9 = puVar27 == puVar23;
  }
  sVar26 = strlen("BUNDLE");
  FUN_00b17a18(param_5,"BUNDLE",sVar26);
  iVar6 = *piVar29;
  plVar19 = (long *)operator_new(0x128);
  plVar19[0x24] = 0;
  plVar19[1] = 0;
  *plVar19 = 0;
  plVar19[3] = 0;
  plVar19[2] = 0;
  plVar19[5] = 0;
  plVar19[4] = 0;
  plVar19[7] = 0;
  plVar19[6] = 0;
  plVar19[9] = 0;
  plVar19[8] = 0;
  plVar19[0xb] = 0;
  plVar19[10] = 0;
  plVar19[0xd] = 0;
  plVar19[0xc] = 0;
  plVar19[0xf] = 0;
  plVar19[0xe] = 0;
  plVar19[0x11] = 0;
  plVar19[0x10] = 0;
  plVar19[0x13] = 0;
  plVar19[0x12] = 0;
  plVar19[0x15] = 0;
  plVar19[0x14] = 0;
  plVar19[0x17] = 0;
  plVar19[0x16] = 0;
  plVar19[0x19] = 0;
  plVar19[0x18] = 0;
  plVar19[0x1b] = 0;
  plVar19[0x1a] = 0;
  plVar19[0x1d] = 0;
  plVar19[0x1c] = 0;
  plVar19[0x1f] = 0;
  plVar19[0x1e] = 0;
  plVar19[0x21] = 0;
  plVar19[0x20] = 0;
  plVar19[0x23] = 0;
  plVar19[0x22] = 0;
  FUN_00cdc740();
  ppuVar2 = &PTR_FUN_00d42ed8;
  if (iVar6 != 0) {
    ppuVar2 = &PTR_FUN_00d42fd8;
  }
  *plVar19 = (long)ppuVar2;
  if (((*(char *)(lVar18 + 0x23) == '\x01') && ((unaff_w25 & 1) != 0)) &&
     ((*(byte *)(lVar17 + 1) & 1) != 0)) {
    *(undefined1 *)((long)plVar19 + 0x23) = 1;
    if (puVar36 != puVar23) {
      sVar26 = strlen("transport-cc");
      puVar31 = puVar36;
      do {
        FUN_00bf4a50(auStack_160,"transport-cc",sVar26);
        FUN_0089042c(puVar31 + 0x18,auStack_160);
        if (cStack_131 < '\0') {
          operator_delete(puStack_148);
        }
        if ((long)puStack_150 < 0) {
          operator_delete((void *)auStack_160._0_8_);
        }
        puVar31 = puVar31 + 0x1b;
      } while (puVar31 != puVar23);
      goto LAB_00cd9398;
    }
    uVar24 = *(undefined8 *)(lVar17 + 0x10);
    uVar22 = *(undefined8 *)(*(long *)(lVar17 + 0x20) + 0x10);
  }
  else {
LAB_00cd9398:
    uVar24 = *(undefined8 *)(lVar17 + 0x10);
    uVar22 = *(undefined8 *)(*(long *)(lVar17 + 0x20) + 0x10);
    if (puVar36 != puVar23) {
      uVar25 = plVar19[0x23];
      puVar31 = puVar36;
      do {
        if (uVar25 < (ulong)plVar19[0x24]) {
          if (uVar25 == 0) goto LAB_00cd9840;
          FUN_00890830(uVar25,puVar31);
          uVar25 = uVar25 + 0xd8;
        }
        else {
          uVar25 = FUN_00b14350(plVar19 + 0x22,puVar31);
        }
        puVar31 = puVar31 + 0x1b;
        plVar19[0x23] = uVar25;
      } while (puVar31 != puVar23);
    }
  }
  lVar30 = (long)*(char *)(lVar18 + 0x1f);
  if (lVar30 < 0) {
    lVar20 = *(long *)(lVar18 + 8);
    lVar30 = *(long *)(lVar18 + 0x10);
  }
  else {
    lVar20 = lVar18 + 8;
  }
  (**(code **)(*plVar19 + 0x58))(plVar19,lVar20,lVar30);
  FUN_00cdc018(piVar29 + 10,param_3 + 8,uVar24,unaff_x30,plVar19,uVar22);
  puVar31 = (undefined8 *)*unaff_x29;
  puVar5 = (undefined8 *)unaff_x29[1];
  puStack_170 = (undefined8 *)0x0;
  lStack_168 = 0;
  puStack_178 = (undefined8 *)0x0;
  uVar25 = (long)puVar5 - (long)puVar31;
  puVar27 = puStack_170;
  if (uVar25 != 0) {
    if ((long)uVar25 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005e28a4();
    }
    puVar27 = (undefined8 *)operator_new(uVar25);
    lStack_168 = (long)puVar27 + uVar25;
    puStack_178 = puVar27;
    puStack_170 = puVar27;
    do {
      if (puVar27 == (undefined8 *)0x0) {
LAB_00cd9840:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      if (*(char *)((long)puVar31 + 0x17) < '\0') {
        FUN_005478d8(puVar27,*puVar31,puVar31[1]);
      }
      else {
        uVar24 = puVar31[1];
        uVar22 = *puVar31;
        puVar27[2] = puVar31[2];
        puVar27[1] = uVar24;
        *puVar27 = uVar22;
      }
      puVar1 = (undefined1 *)((long)puVar31 + 0x1c);
      uVar7 = *(undefined4 *)(puVar31 + 3);
      puVar31 = puVar31 + 4;
      *(undefined1 *)((long)puVar27 + 0x1c) = *puVar1;
      *(undefined4 *)(puVar27 + 3) = uVar7;
      puVar27 = puVar27 + 4;
    } while (puVar31 != puVar5);
  }
  puStack_170 = puVar27;
  FUN_00cd5d48(auStack_160,lVar17,&puStack_178);
  FUN_00cda9a0(lVar18,piVar29,param_3,auStack_160,*(undefined1 *)(lVar17 + 0x18),plVar19);
  uVar22 = auStack_160._0_8_;
  puVar1 = (undefined1 *)auStack_160._8_8_;
  if ((undefined1 *)auStack_160._0_8_ != (undefined1 *)0x0) {
    while ((undefined1 *)uVar22 != puVar1) {
      puVar1 = puVar1 + -0x20;
      if (puVar1 == (undefined1 *)0x0) goto LAB_00cd982c;
      FUN_00668f8c(puVar1);
    }
    auStack_160._8_8_ = uVar22;
    operator_delete((void *)auStack_160._0_8_);
  }
  puVar27 = puStack_178;
  puVar31 = puStack_170;
  if (puStack_178 != (undefined8 *)0x0) {
    while (puVar27 != puVar31) {
      puVar31 = puVar31 + -4;
      if (puVar31 == (undefined8 *)0x0) goto LAB_00cd982c;
      FUN_00668f8c(puVar31);
    }
    puStack_170 = puVar27;
    operator_delete(puStack_178);
  }
  plVar3 = (long *)((long)pvVar32 + 0x50);
  if (param_8 != 0) {
    plVar3 = (long *)(param_8 + 0x68);
  }
  if (((*(byte *)(piVar29 + 9) & 1) != 0) || (bVar9 || (*(byte *)(param_4 + 1) & 1) != 0)) {
LAB_00cd95c8:
    uVar25 = FUN_00417e08();
    if ((uVar25 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4eff,"../../pc/media_session.cc",0x2c59,"m= section \'",piVar29 + 2,
                   "\' being rejected in answer.");
    }
    uVar25 = 1;
  }
  else {
    uVar25 = (ulong)*(char *)((long)plVar19 + 0x1f);
    if ((long)uVar25 < 0) {
      plVar33 = (long *)plVar19[1];
      uVar25 = plVar19[2];
      if (uVar25 != 0) goto LAB_00cd97fc;
    }
    else {
      plVar33 = plVar19 + 1;
      if (uVar25 == 0) {
        uVar25 = 0;
      }
      else {
LAB_00cd97fc:
        if (((*plVar3 == 0) || (uVar28 = FUN_00b19850(plVar33,uVar25), (uVar28 & 1) == 0)) &&
           (uVar25 = FUN_00b19954(plVar33,uVar25), (uVar25 & 1) == 0)) goto LAB_00cd95c8;
        uVar25 = 0;
      }
    }
  }
  auStack_160._8_8_ = &DAT_aaaaaaaaaaaaaaaa;
  auStack_160._0_8_ = &DAT_aaaaaaaaaaaaaaaa;
  puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_150 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_140 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00cda6e4(auStack_160);
  if (auStack_160._0_4_ == 0) {
    piVar4 = *(int **)(piVar29 + 2);
    uVar28 = *(ulong *)(piVar29 + 4);
    if (-1 < (char)*(byte *)((long)piVar29 + 0x1f)) {
      piVar4 = piVar29 + 2;
      uVar28 = (ulong)*(byte *)((long)piVar29 + 0x1f);
    }
    FUN_00b174e0(unaff_x26,piVar4,uVar28,*param_4,uVar25 & 0xffffffff,plVar19);
    FUN_005ecd48(extraout_x8);
    plVar19 = (long *)0x0;
  }
  else {
    *extraout_x8 = auStack_160._0_4_;
    if ((long)puStack_148 < 0) {
      FUN_005478d8(extraout_x8 + 2,auStack_160._8_8_,puStack_150);
    }
    else {
      puVar31 = (undefined8 *)((ulong)auStack_160 | 8);
      uVar24 = *puVar31;
      uVar22 = puVar31[2];
      *(undefined8 *)(extraout_x8 + 4) = puVar31[1];
      *(undefined8 *)(extraout_x8 + 2) = uVar24;
      *(undefined8 *)(extraout_x8 + 6) = uVar22;
    }
    iVar6 = (int)uStack_140;
    extraout_x8[8] = iVar6;
    *(undefined4 *)((long)extraout_x8 + 0x23) = uStack_140._3_4_;
  }
  if ((long)puStack_148 < 0) {
    operator_delete((void *)auStack_160._8_8_);
  }
  if (plVar19 != (long *)0x0) {
    (**(code **)(*plVar19 + 8))(plVar19);
  }
LAB_00cd9700:
  puVar31 = puStack_e8;
  if ((((ulong)puStack_d0 & 1) != 0) && (puVar27 = puStack_e0, puStack_e8 != (undefined8 *)0x0)) {
    while (puVar31 != puVar27) {
      puVar27 = puVar27 + -0x1b;
      if (puVar27 == (undefined8 *)0x0) goto LAB_00cd982c;
      (**(code **)*puVar27)(puVar27);
    }
    puStack_e0 = puVar31;
    operator_delete(puStack_e8);
  }
  if (puVar36 != (undefined8 *)0x0) {
    while (puVar36 != puVar23) {
      puVar23 = puVar23 + -0x1b;
      if (puVar23 == (undefined8 *)0x0) {
LAB_00cd982c:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      (**(code **)*puVar23)(puVar23);
    }
    operator_delete(puVar36);
  }
  FUN_00b194c8(pvVar32);
  operator_delete(pvVar32);
  return;
}


// ===== 00cd8de8  FUN_00cd8de8 =====

/* WARNING: Removing unreachable block (ram,0x00cd9228) */
/* WARNING: Removing unreachable block (ram,0x00cd976c) */

void FUN_00cd8de8(int *param_1,long param_2,int *param_3,long param_4,undefined4 *param_5,
                 long param_6,undefined8 param_7,long param_8,long param_9,long *param_10,
                 undefined8 param_11,undefined8 param_12,byte param_13,undefined8 param_14)

{
  undefined1 *puVar1;
  undefined **ppuVar2;
  long *plVar3;
  int *piVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined4 uVar7;
  byte bVar8;
  undefined *__s;
  bool bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  void *pvVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  ulong uVar24;
  size_t sVar25;
  undefined8 *puVar26;
  ulong uVar27;
  long lVar28;
  undefined8 *puVar29;
  long *plVar30;
  undefined8 *puVar31;
  undefined8 *local_128;
  undefined8 *local_120;
  long local_118;
  undefined1 local_110 [16];
  undefined1 *local_100;
  undefined1 *local_f8;
  undefined8 local_f0;
  char cStack_e1;
  undefined8 *local_d8;
  undefined8 *local_d0;
  long local_c8;
  char *local_c0;
  undefined1 *puStack_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined8 *puStack_98;
  undefined8 *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 auStack_71 [17];
  
  if (param_5 == (undefined4 *)0x0) {
LAB_00cd9868:
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../pc/media_session.cc",0x531,
                 "IsMediaContentOfType(offer_content, media_description_options.type)",&DAT_001f5fa0
                );
  }
  iVar6 = *param_3;
  lVar16 = FUN_00b174c8(param_5);
  if (lVar16 == 0) goto LAB_00cd9868;
  plVar17 = (long *)FUN_00b174c8(param_5);
  iVar10 = (**(code **)(*plVar17 + 0x10))();
  if (iVar10 != iVar6) goto LAB_00cd9868;
  iVar6 = *param_3;
  plVar17 = (long *)FUN_00b174c8(param_5);
  lVar16 = 0x20;
  if (iVar6 != 0) {
    lVar16 = 0x30;
  }
  lVar16 = (**(code **)(*plVar17 + lVar16))();
  bVar8 = *(byte *)(param_5 + 1);
  if (param_6 == 0) {
    lVar28 = 0;
    if (param_8 == 0) goto LAB_00cd8f18;
LAB_00cd8edc:
    uVar24 = *(ulong *)(param_3 + 4);
    piVar4 = *(int **)(param_3 + 2);
    if (-1 < (char)*(byte *)((long)param_3 + 0x1f)) {
      uVar24 = (ulong)*(byte *)((long)param_3 + 0x1f);
      piVar4 = param_3 + 2;
    }
    lVar19 = FUN_00b17900(param_8,piVar4,uVar24);
    lVar18 = 0;
    if (lVar19 != 0) {
      lVar18 = lVar19 + 0x18;
    }
  }
  else {
    uVar24 = *(ulong *)(param_3 + 4);
    piVar4 = *(int **)(param_3 + 2);
    if (-1 < (char)*(byte *)((long)param_3 + 0x1f)) {
      uVar24 = (ulong)*(byte *)((long)param_3 + 0x1f);
      piVar4 = param_3 + 2;
    }
    lVar18 = FUN_00b17900(param_6,piVar4,uVar24);
    lVar28 = 0;
    if (lVar18 != 0) {
      lVar28 = lVar18 + 0x18;
    }
    if (param_8 != 0) goto LAB_00cd8edc;
LAB_00cd8f18:
    lVar18 = 0;
  }
  pvVar20 = (void *)FUN_00cd55a4(*(undefined8 *)(param_2 + 0x20),lVar28,(long)param_3 + 0x25,
                                 param_9 == 0 & (bVar8 ^ 1),lVar18,param_14);
  if (pvVar20 == (void *)0x0) {
    uVar24 = FUN_004249b0();
    if ((uVar24 & 1) == 0) {
      local_c0 = "../../pc/media_session.cc";
      puStack_b8 = (undefined1 *)0x2a1b;
      local_b0 = auStack_71;
      local_110 = FUN_005eceec(10);
      FUN_00623bb0(&DAT_00255ab0,local_c0,(ulong)puStack_b8 & 0xffffffff,
                   "Failed to create transport answer, transport is missing",&DAT_001a2df6,local_110
                   ,&DAT_001ca519);
    }
    FUN_00b0092c(param_1,10,"Failed to create transport answer, transport is missing",0x37);
    return;
  }
  iVar6 = param_3[8];
  uVar7 = *(undefined4 *)(lVar16 + 0x74);
  uVar11 = FUN_00bde288(uVar7);
  uVar12 = FUN_00bde298(uVar7);
  uVar13 = FUN_00bde288(iVar6);
  uVar14 = FUN_00bde298(iVar6);
  uVar15 = FUN_00bde24c(uVar12 & uVar13 & 1,uVar11 & uVar14 & 1);
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  local_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  uVar21 = (**(code **)(**(long **)(param_2 + 0x30) + 0x18))(*(long **)(param_2 + 0x30));
  local_d0 = (undefined8 *)0x0;
  local_c8 = 0;
  local_d8 = (undefined8 *)0x0;
  lVar28 = *(long *)(lVar16 + 0x110);
  lVar18 = *(long *)(lVar16 + 0x118);
  uVar24 = lVar18 - lVar28;
  puVar22 = local_d0;
  if (uVar24 != 0) {
    if (0x12f684bda12f684 < (ulong)(((long)uVar24 >> 3) * -0x7b425ed097b425ed)) {
                    /* WARNING: Subroutine does not return */
      FUN_0088fd20();
    }
    puVar22 = (undefined8 *)operator_new(uVar24);
    local_c8 = (long)puVar22 + uVar24;
    local_d8 = puVar22;
    do {
      if (puVar22 == (undefined8 *)0x0) goto LAB_00cd9840;
      FUN_00890830(puVar22,lVar28);
      lVar28 = lVar28 + 0xd8;
      puVar22 = puVar22 + 0x1b;
    } while (lVar28 != lVar18);
  }
  local_d0 = puVar22;
  uVar23 = (**(code **)(**(long **)(param_2 + 0x30) + 0x10))();
  FUN_00bd8970(&local_c0,uVar21,param_3,param_4,uVar7,uVar15,param_7,&local_d8,uVar23);
  puVar31 = local_d8;
  puVar22 = local_d0;
  if (local_d8 != (undefined8 *)0x0) {
    while (puVar31 != puVar22) {
      puVar22 = puVar22 + -0x1b;
      if (puVar22 == (undefined8 *)0x0) goto LAB_00cd982c;
      (**(code **)*puVar22)(puVar22);
    }
    local_d0 = puVar31;
    operator_delete(local_d8);
  }
  puVar22 = local_90;
  puVar31 = puStack_98;
  __s = PTR_DAT_00d52148;
  if ((int)local_c0 != 0) {
    *param_1 = (int)local_c0;
    puVar22 = (undefined8 *)((ulong)&local_c0 | 8);
    uVar23 = *puVar22;
    uVar21 = puVar22[2];
    *(undefined8 *)(param_1 + 4) = puVar22[1];
    *(undefined8 *)(param_1 + 2) = uVar23;
    *(undefined8 *)(param_1 + 6) = uVar21;
    iVar6 = (int)local_a0;
    puVar22 = (undefined8 *)0x0;
    puVar31 = (undefined8 *)0x0;
    param_1[8] = iVar6;
    *(undefined4 *)((long)param_1 + 0x23) = local_a0._3_4_;
    goto LAB_00cd9700;
  }
  if (((ulong)local_80 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
              );
  }
  local_90 = (undefined8 *)0x0;
  local_88 = (undefined1 *)0x0;
  bVar9 = puStack_98 == puVar22;
  puStack_98 = (undefined8 *)0x0;
  puVar29 = puVar31;
  if (bVar9) {
    bVar9 = true;
  }
  else {
    do {
      uVar24 = FUN_00891aec(puVar29);
      if ((uVar24 & 1) != 0) {
        uVar24 = puVar29[3];
        puVar26 = (undefined8 *)puVar29[2];
        if (-1 < (char)*(byte *)((long)puVar29 + 0x27)) {
          uVar24 = (ulong)*(byte *)((long)puVar29 + 0x27);
          puVar26 = puVar29 + 2;
        }
        sVar25 = strlen(__s);
        uVar24 = FUN_0061ff84(puVar26,uVar24,__s,sVar25);
        puVar26 = puVar29;
        if ((uVar24 & 1) == 0) break;
      }
      puVar29 = puVar29 + 0x1b;
      puVar26 = puVar22;
    } while (puVar29 != puVar22);
    bVar9 = puVar26 == puVar22;
  }
  sVar25 = strlen("BUNDLE");
  FUN_00b17a18(param_6,"BUNDLE",sVar25);
  iVar6 = *param_3;
  plVar17 = (long *)operator_new(0x128);
  plVar17[0x24] = 0;
  plVar17[1] = 0;
  *plVar17 = 0;
  plVar17[3] = 0;
  plVar17[2] = 0;
  plVar17[5] = 0;
  plVar17[4] = 0;
  plVar17[7] = 0;
  plVar17[6] = 0;
  plVar17[9] = 0;
  plVar17[8] = 0;
  plVar17[0xb] = 0;
  plVar17[10] = 0;
  plVar17[0xd] = 0;
  plVar17[0xc] = 0;
  plVar17[0xf] = 0;
  plVar17[0xe] = 0;
  plVar17[0x11] = 0;
  plVar17[0x10] = 0;
  plVar17[0x13] = 0;
  plVar17[0x12] = 0;
  plVar17[0x15] = 0;
  plVar17[0x14] = 0;
  plVar17[0x17] = 0;
  plVar17[0x16] = 0;
  plVar17[0x19] = 0;
  plVar17[0x18] = 0;
  plVar17[0x1b] = 0;
  plVar17[0x1a] = 0;
  plVar17[0x1d] = 0;
  plVar17[0x1c] = 0;
  plVar17[0x1f] = 0;
  plVar17[0x1e] = 0;
  plVar17[0x21] = 0;
  plVar17[0x20] = 0;
  plVar17[0x23] = 0;
  plVar17[0x22] = 0;
  FUN_00cdc740();
  ppuVar2 = &PTR_FUN_00d42ed8;
  if (iVar6 != 0) {
    ppuVar2 = &PTR_FUN_00d42fd8;
  }
  *plVar17 = (long)ppuVar2;
  if (((*(char *)(lVar16 + 0x23) == '\x01') && ((param_13 & 1) != 0)) &&
     ((*(byte *)(param_2 + 1) & 1) != 0)) {
    *(undefined1 *)((long)plVar17 + 0x23) = 1;
    if (puVar31 != puVar22) {
      sVar25 = strlen("transport-cc");
      puVar29 = puVar31;
      do {
        FUN_00bf4a50(local_110,"transport-cc",sVar25);
        FUN_0089042c(puVar29 + 0x18,local_110);
        if (cStack_e1 < '\0') {
          operator_delete(local_f8);
        }
        if ((long)local_100 < 0) {
          operator_delete((void *)local_110._0_8_);
        }
        puVar29 = puVar29 + 0x1b;
      } while (puVar29 != puVar22);
      goto LAB_00cd9398;
    }
    uVar23 = *(undefined8 *)(param_2 + 0x10);
    uVar21 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x10);
  }
  else {
LAB_00cd9398:
    uVar23 = *(undefined8 *)(param_2 + 0x10);
    uVar21 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x10);
    if (puVar31 != puVar22) {
      uVar24 = plVar17[0x23];
      puVar29 = puVar31;
      do {
        if (uVar24 < (ulong)plVar17[0x24]) {
          if (uVar24 == 0) goto LAB_00cd9840;
          FUN_00890830(uVar24,puVar29);
          uVar24 = uVar24 + 0xd8;
        }
        else {
          uVar24 = FUN_00b14350(plVar17 + 0x22,puVar29);
        }
        puVar29 = puVar29 + 0x1b;
        plVar17[0x23] = uVar24;
      } while (puVar29 != puVar22);
    }
  }
  lVar28 = (long)*(char *)(lVar16 + 0x1f);
  if (lVar28 < 0) {
    lVar18 = *(long *)(lVar16 + 8);
    lVar28 = *(long *)(lVar16 + 0x10);
  }
  else {
    lVar18 = lVar16 + 8;
  }
  (**(code **)(*plVar17 + 0x58))(plVar17,lVar18,lVar28);
  FUN_00cdc018(param_3 + 10,param_4 + 8,uVar23,param_11,plVar17,uVar21);
  puVar29 = (undefined8 *)*param_10;
  puVar5 = (undefined8 *)param_10[1];
  local_120 = (undefined8 *)0x0;
  local_118 = 0;
  local_128 = (undefined8 *)0x0;
  uVar24 = (long)puVar5 - (long)puVar29;
  puVar26 = local_120;
  if (uVar24 != 0) {
    if ((long)uVar24 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005e28a4();
    }
    puVar26 = (undefined8 *)operator_new(uVar24);
    local_118 = (long)puVar26 + uVar24;
    local_128 = puVar26;
    local_120 = puVar26;
    do {
      if (puVar26 == (undefined8 *)0x0) {
LAB_00cd9840:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      if (*(char *)((long)puVar29 + 0x17) < '\0') {
        FUN_005478d8(puVar26,*puVar29,puVar29[1]);
      }
      else {
        uVar23 = puVar29[1];
        uVar21 = *puVar29;
        puVar26[2] = puVar29[2];
        puVar26[1] = uVar23;
        *puVar26 = uVar21;
      }
      puVar1 = (undefined1 *)((long)puVar29 + 0x1c);
      uVar7 = *(undefined4 *)(puVar29 + 3);
      puVar29 = puVar29 + 4;
      *(undefined1 *)((long)puVar26 + 0x1c) = *puVar1;
      *(undefined4 *)(puVar26 + 3) = uVar7;
      puVar26 = puVar26 + 4;
    } while (puVar29 != puVar5);
  }
  local_120 = puVar26;
  FUN_00cd5d48(local_110,param_2,&local_128);
  FUN_00cda9a0(lVar16,param_3,param_4,local_110,*(undefined1 *)(param_2 + 0x18),plVar17);
  uVar21 = local_110._0_8_;
  puVar1 = (undefined1 *)local_110._8_8_;
  if ((undefined1 *)local_110._0_8_ != (undefined1 *)0x0) {
    while ((undefined1 *)uVar21 != puVar1) {
      puVar1 = puVar1 + -0x20;
      if (puVar1 == (undefined1 *)0x0) goto LAB_00cd982c;
      FUN_00668f8c(puVar1);
    }
    local_110._8_8_ = uVar21;
    operator_delete((void *)local_110._0_8_);
  }
  puVar26 = local_128;
  puVar29 = local_120;
  if (local_128 != (undefined8 *)0x0) {
    while (puVar26 != puVar29) {
      puVar29 = puVar29 + -4;
      if (puVar29 == (undefined8 *)0x0) goto LAB_00cd982c;
      FUN_00668f8c(puVar29);
    }
    local_120 = puVar26;
    operator_delete(local_128);
  }
  plVar3 = (long *)((long)pvVar20 + 0x50);
  if (param_9 != 0) {
    plVar3 = (long *)(param_9 + 0x68);
  }
  if (((*(byte *)(param_3 + 9) & 1) != 0) || (bVar9 || (*(byte *)(param_5 + 1) & 1) != 0)) {
LAB_00cd95c8:
    uVar24 = FUN_00417e08();
    if ((uVar24 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4eff,"../../pc/media_session.cc",0x2c59,"m= section \'",param_3 + 2,
                   "\' being rejected in answer.");
    }
    uVar24 = 1;
  }
  else {
    uVar24 = (ulong)*(char *)((long)plVar17 + 0x1f);
    if ((long)uVar24 < 0) {
      plVar30 = (long *)plVar17[1];
      uVar24 = plVar17[2];
      if (uVar24 != 0) goto LAB_00cd97fc;
    }
    else {
      plVar30 = plVar17 + 1;
      if (uVar24 == 0) {
        uVar24 = 0;
      }
      else {
LAB_00cd97fc:
        if (((*plVar3 == 0) || (uVar27 = FUN_00b19850(plVar30,uVar24), (uVar27 & 1) == 0)) &&
           (uVar24 = FUN_00b19954(plVar30,uVar24), (uVar24 & 1) == 0)) goto LAB_00cd95c8;
        uVar24 = 0;
      }
    }
  }
  local_110._8_8_ = &DAT_aaaaaaaaaaaaaaaa;
  local_110._0_8_ = &DAT_aaaaaaaaaaaaaaaa;
  local_f8 = &DAT_aaaaaaaaaaaaaaaa;
  local_100 = &DAT_aaaaaaaaaaaaaaaa;
  local_f0 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00cda6e4(local_110);
  if (local_110._0_4_ == 0) {
    piVar4 = *(int **)(param_3 + 2);
    uVar27 = *(ulong *)(param_3 + 4);
    if (-1 < (char)*(byte *)((long)param_3 + 0x1f)) {
      piVar4 = param_3 + 2;
      uVar27 = (ulong)*(byte *)((long)param_3 + 0x1f);
    }
    FUN_00b174e0(param_12,piVar4,uVar27,*param_5,uVar24 & 0xffffffff,plVar17);
    FUN_005ecd48(param_1);
    plVar17 = (long *)0x0;
  }
  else {
    *param_1 = local_110._0_4_;
    if ((long)local_f8 < 0) {
      FUN_005478d8(param_1 + 2,local_110._8_8_,local_100);
    }
    else {
      puVar29 = (undefined8 *)((ulong)local_110 | 8);
      uVar23 = *puVar29;
      uVar21 = puVar29[2];
      *(undefined8 *)(param_1 + 4) = puVar29[1];
      *(undefined8 *)(param_1 + 2) = uVar23;
      *(undefined8 *)(param_1 + 6) = uVar21;
    }
    iVar6 = (int)local_f0;
    param_1[8] = iVar6;
    *(undefined4 *)((long)param_1 + 0x23) = local_f0._3_4_;
  }
  if ((long)local_f8 < 0) {
    operator_delete((void *)local_110._8_8_);
  }
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 8))(plVar17);
  }
LAB_00cd9700:
  puVar29 = puStack_98;
  if ((((ulong)local_80 & 1) != 0) && (puVar26 = local_90, puStack_98 != (undefined8 *)0x0)) {
    while (puVar29 != puVar26) {
      puVar26 = puVar26 + -0x1b;
      if (puVar26 == (undefined8 *)0x0) goto LAB_00cd982c;
      (**(code **)*puVar26)(puVar26);
    }
    local_90 = puVar29;
    operator_delete(puStack_98);
  }
  if (puVar31 != (undefined8 *)0x0) {
    while (puVar31 != puVar22) {
      puVar22 = puVar22 + -0x1b;
      if (puVar22 == (undefined8 *)0x0) {
LAB_00cd982c:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      (**(code **)*puVar22)(puVar22);
    }
    operator_delete(puVar31);
  }
  FUN_00b194c8(pvVar20);
  operator_delete(pvVar20);
  return;
}


// ===== 00cd9890  FUN_00cd9890 =====

void FUN_00cd9890(int *param_1,long param_2,long param_3,long param_4,undefined4 *param_5,
                 long param_6,long param_7,long param_8,long param_9,undefined8 param_10,
                 undefined8 param_11,undefined8 param_12)

{
  void *pvVar1;
  int iVar2;
  byte bVar3;
  undefined1 uVar4;
  char *__n;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  void *pvVar10;
  size_t sVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  undefined8 uVar15;
  ulong uVar16;
  void *pvVar17;
  char *__dest;
  long *plVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  char *local_f0;
  char *pcStack_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  undefined8 local_d0;
  char *local_c0;
  char *pcStack_b8;
  undefined1 *local_b0;
  char local_a8;
  void *local_a0;
  void *local_98;
  void *local_90;
  char local_88;
  undefined1 local_80 [16];
  undefined1 auStack_69 [9];
  
  bVar3 = *(byte *)(param_5 + 1);
  if (param_6 == 0) {
    lVar12 = 0;
    if (param_8 == 0) goto LAB_00cd9964;
LAB_00cd9924:
    uVar16 = *(ulong *)(param_3 + 0x10);
    lVar8 = *(long *)(param_3 + 8);
    if (-1 < (char)*(byte *)(param_3 + 0x1f)) {
      uVar16 = (ulong)*(byte *)(param_3 + 0x1f);
      lVar8 = param_3 + 8;
    }
    lVar9 = FUN_00b17900(param_8,lVar8,uVar16);
    lVar8 = 0;
    if (lVar9 != 0) {
      lVar8 = lVar9 + 0x18;
    }
  }
  else {
    uVar16 = *(ulong *)(param_3 + 0x10);
    lVar12 = *(long *)(param_3 + 8);
    if (-1 < (char)*(byte *)(param_3 + 0x1f)) {
      uVar16 = (ulong)*(byte *)(param_3 + 0x1f);
      lVar12 = param_3 + 8;
    }
    lVar8 = FUN_00b17900(param_6,lVar12,uVar16);
    lVar12 = 0;
    if (lVar8 != 0) {
      lVar12 = lVar8 + 0x18;
    }
    if (param_8 != 0) goto LAB_00cd9924;
LAB_00cd9964:
    lVar8 = 0;
  }
  pvVar10 = (void *)FUN_00cd55a4(*(undefined8 *)(param_2 + 0x20),lVar12,param_3 + 0x25,
                                 param_9 == 0 & (bVar3 ^ 1),lVar8,param_12);
  puVar5 = PTR_s_BUNDLE_00d52600;
  if (pvVar10 == (void *)0x0) {
    uVar16 = FUN_004249b0();
    if ((uVar16 & 1) == 0) {
      local_f0 = "../../pc/media_session.cc";
      pcStack_e8 = (char *)0x2d63;
      local_e0 = auStack_69;
      local_80 = FUN_005eceec(10);
      FUN_00623bb0(&DAT_00255ab0,local_f0,(ulong)pcStack_e8 & 0xffffffff,
                   "Failed to create transport answer, data transport is missing",&DAT_001a2df6,
                   local_80,&DAT_001ca519);
    }
    FUN_00b0092c(param_1,10,"Failed to create transport answer, data transport is missing",0x3c);
    return;
  }
  sVar11 = strlen(PTR_s_BUNDLE_00d52600);
  FUN_00b17a18(param_6,puVar5,sVar11);
  if ((param_5 == (undefined4 *)0x0) || (lVar12 = FUN_00b174c8(param_5), lVar12 == 0)) {
LAB_00cd9f40:
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../pc/media_session.cc",0x5b1,
                 "IsMediaContentOfType(offer_content, MediaType::DATA)",&DAT_001f5fa0);
  }
  plVar13 = (long *)FUN_00b174c8(param_5);
  iVar6 = (**(code **)(*plVar13 + 0x10))();
  if (iVar6 != 2) goto LAB_00cd9f40;
  plVar13 = (long *)FUN_00b174c8(param_5);
  lVar12 = (**(code **)(*plVar13 + 0x40))();
  if (lVar12 == 0) {
    plVar13 = (long *)0x0;
  }
  else {
    plVar13 = (long *)operator_new(0x158);
    FUN_00cdc740();
    *plVar13 = (long)&PTR_FUN_00d43058;
    *(undefined1 *)(plVar13 + 0x25) = 1;
    *(undefined1 *)(plVar13 + 0x27) = 0;
    *(undefined8 *)((long)plVar13 + 300) = 0x1000000001388;
    *(undefined1 *)(plVar13 + 0x2a) = 0;
    plVar14 = (long *)FUN_00b174c8(param_5);
    lVar8 = (**(code **)(*plVar14 + 0x40))();
    uVar15 = (**(code **)(*plVar13 + 0x38))(plVar13);
    lVar12 = (long)*(char *)(lVar8 + 0x1f);
    if (lVar12 < 0) {
      lVar9 = *(long *)(lVar8 + 8);
      lVar12 = *(long *)(lVar8 + 0x10);
    }
    else {
      lVar9 = lVar8 + 8;
    }
    FUN_00b0df30(uVar15,lVar9,lVar12);
    iVar2 = *(int *)(lVar8 + 0x130);
    lVar12 = (**(code **)(*plVar13 + 0x38))(plVar13);
    iVar6 = 0x40000;
    if ((0 < iVar2) && (iVar6 = *(int *)(lVar8 + 0x130), 0x3ffff < iVar6)) {
      iVar6 = 0x40000;
    }
    *(int *)(lVar12 + 0x130) = iVar6;
    local_f0 = (char *)0x0;
    pcStack_e8 = (char *)0x0;
    local_e0 = (undefined1 *)0x0;
    FUN_00cda9a0(lVar8,param_3,param_4,&local_f0,*(undefined1 *)(param_2 + 0x18),plVar13);
    uVar4 = *(undefined1 *)(lVar8 + 0x128);
    lVar12 = (**(code **)(*plVar13 + 0x38))(plVar13);
    *(undefined1 *)(lVar12 + 0x128) = uVar4;
    if ((*(char *)(param_4 + 0x71) == '\x01') && (*(char *)(lVar8 + 0x150) == '\x01')) {
      pvVar1 = *(void **)(lVar8 + 0x138);
      uVar16 = *(long *)(lVar8 + 0x140) - (long)pvVar1;
      if (uVar16 != 0) {
        if ((long)uVar16 < 0) goto LAB_00cd9f74;
        pvVar17 = operator_new(uVar16);
        memcpy(pvVar17,pvVar1,uVar16);
        if (pvVar17 != (void *)0x0) {
          if ((long)pvVar17 + (uVar16 - 1) < uVar16) goto LAB_00cd9f60;
          operator_delete(pvVar17);
        }
      }
      if ((param_7 != 0) && (lVar12 = FUN_00b174c8(param_7), lVar12 != 0)) {
        plVar14 = (long *)FUN_00b174c8(param_7);
        lVar12 = (**(code **)(*plVar14 + 0x40))();
        lVar8 = (**(code **)(*plVar13 + 0x38))(plVar13);
        local_a0 = (void *)((ulong)local_a0 & 0xffffffffffffff00);
        local_88 = '\0';
        if (*(char *)(lVar12 + 0x150) == '\x01') {
          local_a0 = (void *)0x0;
          local_98 = (void *)0x0;
          local_90 = (void *)0x0;
          pvVar1 = *(void **)(lVar12 + 0x138);
          uVar16 = *(long *)(lVar12 + 0x140) - (long)pvVar1;
          if (uVar16 != 0) {
            if ((long)uVar16 < 0) goto LAB_00cd9f74;
            local_a0 = operator_new(uVar16);
            pvVar17 = (void *)((long)local_a0 + uVar16);
            local_90 = pvVar17;
            memcpy(local_a0,pvVar1,uVar16);
            local_98 = pvVar17;
          }
          local_88 = '\x01';
        }
        FUN_00b149f4(lVar8 + 0x138,&local_a0);
        if ((local_88 == '\x01') && (local_a0 != (void *)0x0)) {
          if ((long)local_98 - 1U < (ulong)((long)local_98 - (long)local_a0)) goto LAB_00cd9f60;
          local_98 = local_a0;
          operator_delete(local_a0);
        }
      }
      lVar12 = (**(code **)(*plVar13 + 0x38))(plVar13);
      if (*(char *)(lVar12 + 0x150) == '\x01') {
        pvVar1 = *(void **)(lVar12 + 0x138);
        __n = (char *)(*(long *)(lVar12 + 0x140) - (long)pvVar1);
        if (__n != (char *)0x0) {
          if ((long)__n < 0) {
LAB_00cd9f74:
                    /* WARNING: Subroutine does not return */
            FUN_005d34c0();
          }
          __dest = (char *)operator_new((ulong)__n);
          memcpy(__dest,pvVar1,(size_t)__n);
          if (__dest != (char *)0x0) {
            if (__dest + (long)(__n + -1) < __n) goto LAB_00cd9f60;
            goto LAB_00cd9db8;
          }
        }
      }
      else {
        lVar12 = (**(code **)(*plVar13 + 0x38))(plVar13);
        (**(code **)(**(long **)(param_2 + 0x28) + 0x18))
                  (&local_f0,*(long **)(param_2 + 0x28),param_2 + 0x40);
        local_b0 = local_e0;
        pcStack_b8 = pcStack_e8;
        pcStack_e8 = (char *)0x0;
        local_e0 = (undefined1 *)0x0;
        local_c0 = local_f0;
        local_f0 = (char *)0x0;
        local_a8 = '\x01';
        FUN_00b149f4(lVar12 + 0x138,&local_c0);
        if ((local_a8 == '\x01') && (local_c0 != (char *)0x0)) {
          if (pcStack_b8 + -1 < pcStack_b8 + -(long)local_c0) goto LAB_00cd9f60;
          pcStack_b8 = local_c0;
          operator_delete(local_c0);
        }
        if (local_f0 != (char *)0x0) {
          if (pcStack_e8 + -1 < pcStack_e8 + -(long)local_f0) {
LAB_00cd9f60:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
          pcStack_e8 = local_f0;
          __dest = local_f0;
LAB_00cd9db8:
          operator_delete(__dest);
        }
      }
    }
  }
  plVar14 = (long *)((long)pvVar10 + 0x50);
  if (param_9 != 0) {
    plVar14 = (long *)(param_9 + 0x68);
  }
  if (((*(byte *)(param_3 + 0x24) & 1) != 0) || ((*(byte *)(param_5 + 1) & 1) != 0)) {
    uVar7 = 1;
    goto LAB_00cd9e24;
  }
  if (*(char *)((long)plVar13 + 0x1f) < '\0') {
    plVar18 = (long *)plVar13[1];
    if (plVar13[2] == 0) goto LAB_00cd9e14;
LAB_00cd9dfc:
    if (*plVar14 == 0) {
      uVar7 = FUN_00b19690(plVar18);
    }
    else {
      uVar7 = FUN_00b195f0();
    }
  }
  else {
    plVar18 = plVar13 + 1;
    if (*(char *)((long)plVar13 + 0x1f) != '\0') goto LAB_00cd9dfc;
LAB_00cd9e14:
    uVar7 = 1;
  }
  uVar7 = uVar7 ^ 1;
LAB_00cd9e24:
  pcStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
  local_f0 = &DAT_aaaaaaaaaaaaaaaa;
  local_d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_e0 = &DAT_aaaaaaaaaaaaaaaa;
  local_d0 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00cda6e4(&local_f0);
  if ((int)local_f0 == 0) {
    lVar12 = *(long *)(param_3 + 8);
    uVar16 = *(ulong *)(param_3 + 0x10);
    if (-1 < (char)*(byte *)(param_3 + 0x1f)) {
      lVar12 = param_3 + 8;
      uVar16 = (ulong)*(byte *)(param_3 + 0x1f);
    }
    FUN_00b174e0(param_11,lVar12,uVar16,*param_5,uVar7 & 1,plVar13);
    FUN_005ecd48(param_1);
    plVar13 = (long *)0x0;
  }
  else {
    *param_1 = (int)local_f0;
    if ((long)local_d8 < 0) {
      FUN_005478d8(param_1 + 2,pcStack_e8,local_e0);
    }
    else {
      puVar19 = (undefined8 *)((ulong)&local_f0 | 8);
      uVar20 = *puVar19;
      uVar15 = puVar19[2];
      *(undefined8 *)(param_1 + 4) = puVar19[1];
      *(undefined8 *)(param_1 + 2) = uVar20;
      *(undefined8 *)(param_1 + 6) = uVar15;
    }
    iVar6 = (int)local_d0;
    param_1[8] = iVar6;
    *(undefined4 *)((long)param_1 + 0x23) = local_d0._3_4_;
  }
  if ((long)local_d8 < 0) {
    operator_delete(pcStack_e8);
  }
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))(plVar13);
  }
  FUN_00b194c8(pvVar10);
  operator_delete(pvVar10);
  return;
}


// ===== 00cd9f78  FUN_00cd9f78 =====

void FUN_00cd9f78(int *param_1,long param_2,long param_3,undefined8 param_4,undefined4 *param_5,
                 long param_6,undefined8 param_7,long param_8,long param_9,undefined8 param_10,
                 undefined8 param_11)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  void *pvVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  char *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined8 local_80;
  undefined1 local_78 [16];
  undefined1 uStack_61;
  
  bVar2 = *(byte *)(param_5 + 1);
  lVar1 = param_3 + 8;
  if (param_6 == 0) {
    lVar7 = 0;
  }
  else {
    uVar9 = *(ulong *)(param_3 + 0x10);
    lVar7 = *(long *)(param_3 + 8);
    if (-1 < (char)*(byte *)(param_3 + 0x1f)) {
      uVar9 = (ulong)*(byte *)(param_3 + 0x1f);
      lVar7 = lVar1;
    }
    lVar4 = FUN_00b17900(param_6,lVar7,uVar9);
    lVar7 = 0;
    if (lVar4 != 0) {
      lVar7 = lVar4 + 0x18;
    }
  }
  if (param_8 == 0) {
    lVar4 = 0;
  }
  else {
    uVar9 = *(ulong *)(param_3 + 0x10);
    lVar4 = *(long *)(param_3 + 8);
    if (-1 < (char)*(byte *)(param_3 + 0x1f)) {
      uVar9 = (ulong)*(byte *)(param_3 + 0x1f);
      lVar4 = lVar1;
    }
    lVar5 = FUN_00b17900(param_8,lVar4,uVar9);
    lVar4 = 0;
    if (lVar5 != 0) {
      lVar4 = lVar5 + 0x18;
    }
  }
  pvVar6 = (void *)FUN_00cd55a4(*(undefined8 *)(param_2 + 0x20),lVar7,param_3 + 0x25,
                                param_9 == 0 & (bVar2 ^ 1),lVar4,param_11);
  if (pvVar6 == (void *)0x0) {
    uVar9 = FUN_004249b0();
    if ((uVar9 & 1) == 0) {
      local_a0 = "../../pc/media_session.cc";
      puStack_98 = (undefined1 *)0x304b;
      local_90 = &uStack_61;
      local_78 = FUN_005eceec(10);
      FUN_00623bb0(&DAT_00255ab0,local_a0,(ulong)puStack_98 & 0xffffffff,
                   "Failed to create transport answer, unsupported transport is missing",
                   &DAT_001a2df6,local_78,&DAT_001ca519);
    }
    FUN_00b0092c(param_1,10,"Failed to create transport answer, unsupported transport is missing",
                 0x43);
    return;
  }
  if ((param_5 != (undefined4 *)0x0) && (lVar7 = FUN_00b174c8(param_5), lVar7 != 0)) {
    plVar8 = (long *)FUN_00b174c8(param_5);
    iVar3 = (**(code **)(*plVar8 + 0x10))();
    if (iVar3 == 3) {
      plVar8 = (long *)FUN_00b174c8(param_5);
      lVar4 = (**(code **)(*plVar8 + 0x50))();
      plVar8 = (long *)operator_new(0x140);
      uVar9 = *(ulong *)(lVar4 + 0x130);
      lVar7 = *(long *)(lVar4 + 0x128);
      if (-1 < (char)*(byte *)(lVar4 + 0x13f)) {
        uVar9 = (ulong)*(byte *)(lVar4 + 0x13f);
        lVar7 = lVar4 + 0x128;
      }
      FUN_00cdc888(plVar8,lVar7,uVar9);
      lVar7 = (long)*(char *)(lVar4 + 0x1f);
      if (lVar7 < 0) {
        lVar5 = *(long *)(lVar4 + 8);
        lVar7 = *(long *)(lVar4 + 0x10);
      }
      else {
        lVar5 = lVar4 + 8;
      }
      uVar10 = (**(code **)(*plVar8 + 0x58))(plVar8,lVar5,lVar7);
      local_80 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
      local_a0 = &DAT_aaaaaaaaaaaaaaaa;
      local_88 = &DAT_aaaaaaaaaaaaaaaa;
      local_90 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_00cda6e4(&local_a0,uVar10,param_3 + 8,pvVar6,param_10);
      if ((int)local_a0 == 0) {
        uVar9 = *(ulong *)(param_3 + 0x10);
        lVar7 = *(long *)(param_3 + 8);
        if (-1 < (char)*(byte *)(param_3 + 0x1f)) {
          uVar9 = (ulong)*(byte *)(param_3 + 0x1f);
          lVar7 = lVar1;
        }
        FUN_00b174e0(param_10,lVar7,uVar9,*param_5,1,plVar8);
        FUN_005ecd48(param_1);
        plVar8 = (long *)0x0;
      }
      else {
        *param_1 = (int)local_a0;
        if ((long)local_88 < 0) {
          FUN_005478d8(param_1 + 2,puStack_98,local_90);
        }
        else {
          puVar11 = (undefined8 *)((ulong)&local_a0 | 8);
          uVar12 = *puVar11;
          uVar10 = puVar11[2];
          *(undefined8 *)(param_1 + 4) = puVar11[1];
          *(undefined8 *)(param_1 + 2) = uVar12;
          *(undefined8 *)(param_1 + 6) = uVar10;
        }
        iVar3 = (int)local_80;
        param_1[8] = iVar3;
        *(undefined4 *)((long)param_1 + 0x23) = local_80._3_4_;
      }
      if ((long)local_88 < 0) {
        operator_delete(puStack_98);
      }
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 8))(plVar8);
      }
      FUN_00b194c8(pvVar6);
      operator_delete(pvVar6);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../pc/media_session.cc",0x60b,
               "IsMediaContentOfType(offer_content, MediaType::UNSUPPORTED)",&DAT_001f5fa0);
}


// ===== 00cda2a4  FUN_00cda2a4 =====

void FUN_00cda2a4(undefined8 *param_1,ulong param_2,long param_3,long param_4,long *param_5)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  undefined1 **ppuVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined8 local_68;
  int local_44;
  
  puVar2 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)param_1[1];
  do {
    if (puVar2 == puVar4) {
      return;
    }
    puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
    local_80 = &DAT_aaaaaaaaaaaaaaaa;
    local_68 = &DAT_aaaaaaaaaaaaaaaa;
    local_70 = &DAT_aaaaaaaaaaaaaaaa;
    if (*(char *)((long)puVar2 + 0x17) < '\0') {
      FUN_005478d8(&local_80,*puVar2,puVar2[1]);
    }
    else {
      local_70 = (undefined1 *)puVar2[2];
      puStack_78 = (undefined1 *)puVar2[1];
      local_80 = (undefined1 *)*puVar2;
    }
    local_68 = (undefined1 *)
               CONCAT44(CONCAT31(local_68._5_3_,*(undefined1 *)((long)puVar2 + 0x1c)),
                        *(undefined4 *)(puVar2 + 3));
    puVar1 = puStack_78;
    ppuVar8 = (undefined1 **)local_80;
    if (-1 < (long)local_70) {
      puVar1 = (undefined1 *)((ulong)local_70 >> 0x38);
      ppuVar8 = &local_80;
    }
    lVar7 = FUN_0066a064(param_3,ppuVar8,puVar1,*(undefined1 *)((long)puVar2 + 0x1c));
    if ((lVar7 == 0) && (((param_2 & 1) != 0 || (local_68._4_1_ == '\0')))) {
      puVar1 = puStack_78;
      ppuVar8 = (undefined1 **)local_80;
      if (-1 < (long)local_70) {
        puVar1 = (undefined1 *)((ulong)local_70 >> 0x38);
        ppuVar8 = &local_80;
      }
      ppuVar8 = (undefined1 **)FUN_0066a064(param_4,ppuVar8,puVar1);
      if (ppuVar8 == (undefined1 **)0x0) {
        iVar6 = (int)local_68;
        if (((int)local_68 <= *(int *)((long)param_5 + 0xc)) && ((int)param_5[1] <= (int)local_68))
        {
          uVar9 = (**(code **)(*param_5 + 0x10))(param_5,(ulong)local_68 & 0xffffffff);
          if ((uVar9 & 1) != 0) {
            iVar6 = (**(code **)(*param_5 + 0x18))(param_5);
            local_68 = (undefined1 *)CONCAT44(local_68._4_4_,iVar6);
          }
          local_44 = iVar6;
          FUN_0066396c(0,param_5 + 3,param_5 + 3,&local_44);
        }
        puVar3 = *(undefined8 **)(param_4 + 8);
        if (puVar3 < *(undefined8 **)(param_4 + 0x10)) {
          if (puVar3 == (undefined8 *)0x0) goto LAB_00cda540;
          if ((long)local_70 < 0) {
            FUN_005478d8(puVar3,local_80,puStack_78);
          }
          else {
            puVar3[2] = local_70;
            puVar3[1] = puStack_78;
            *puVar3 = local_80;
          }
          puVar10 = puVar3 + 4;
          *(char *)((long)puVar3 + 0x1c) = local_68._4_1_;
          *(int *)(puVar3 + 3) = (int)local_68;
        }
        else {
          puVar10 = (undefined8 *)FUN_0066a5f0(param_4,&local_80);
        }
        *(undefined8 **)(param_4 + 8) = puVar10;
        puVar3 = *(undefined8 **)(param_3 + 8);
        ppuVar8 = &local_80;
        if (*(undefined8 **)(param_3 + 0x10) <= puVar3) goto LAB_00cda514;
        if (puVar3 == (undefined8 *)0x0) goto LAB_00cda540;
        if ((long)local_70 < 0) {
          FUN_005478d8(puVar3,local_80,puStack_78);
        }
        else {
          puVar3[2] = local_70;
          puVar3[1] = puStack_78;
          *puVar3 = local_80;
        }
        puVar10 = puVar3 + 4;
        *(char *)((long)puVar3 + 0x1c) = local_68._4_1_;
        *(int *)(puVar3 + 3) = (int)local_68;
      }
      else {
        puVar3 = *(undefined8 **)(param_3 + 8);
        if (puVar3 < *(undefined8 **)(param_3 + 0x10)) {
          if (puVar3 == (undefined8 *)0x0) {
LAB_00cda540:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          if (*(char *)((long)ppuVar8 + 0x17) < '\0') {
            FUN_005478d8(puVar3,*ppuVar8,ppuVar8[1]);
          }
          else {
            uVar12 = ppuVar8[1];
            uVar11 = *ppuVar8;
            puVar3[2] = ppuVar8[2];
            puVar3[1] = uVar12;
            *puVar3 = uVar11;
          }
          uVar5 = *(undefined4 *)(ppuVar8 + 3);
          puVar10 = puVar3 + 4;
          *(undefined1 *)((long)puVar3 + 0x1c) = *(undefined1 *)((long)ppuVar8 + 0x1c);
          *(undefined4 *)(puVar3 + 3) = uVar5;
        }
        else {
LAB_00cda514:
          puVar10 = (undefined8 *)FUN_0066a5f0(param_3,ppuVar8);
        }
      }
      *(undefined8 **)(param_3 + 8) = puVar10;
    }
    FUN_00668f8c(&local_80);
    puVar2 = puVar2 + 4;
  } while( true );
}


// ===== 00cda554  FUN_00cda554 =====

void FUN_00cda554(undefined8 *param_1)

{
  undefined8 *local_18;
  
  *param_1 = &PTR_FUN_00d500d0;
  local_18 = param_1 + 3;
  FUN_005fa1cc(&local_18,param_1[4]);
  return;
}


// ===== 00cda594  FUN_00cda594 =====

void FUN_00cda594(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 param_4,
                 long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  void *local_b0;
  undefined8 uStack_a8;
  long local_a0;
  undefined1 auStack_98 [88];
  
  if (param_5 == 0) {
    lVar5 = 0;
  }
  else {
    uVar4 = param_3[1];
    puVar1 = (undefined8 *)*param_3;
    if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
      uVar4 = (ulong)*(byte *)((long)param_3 + 0x17);
      puVar1 = param_3;
    }
    lVar2 = FUN_00b17900(param_5,puVar1,uVar4);
    lVar5 = 0;
    if (lVar2 != 0) {
      lVar5 = lVar2 + 0x18;
    }
  }
  pvVar3 = (void *)FUN_00cd51f8(*(undefined8 *)(param_2 + 0x20),param_4,lVar5,param_7);
  if ((pvVar3 == (void *)0x0) && (uVar4 = FUN_004249b0(), (uVar4 & 1) == 0)) {
    FUN_00623bb0(&DAT_001f4e90,"../../pc/media_session.cc",0x231b,
                 "Failed to AddTransportOffer, content name=",param_3);
  }
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    FUN_005478d8(&local_b0,*param_3,param_3[1]);
  }
  else {
    uStack_a8 = param_3[1];
    local_b0 = (void *)*param_3;
    local_a0 = param_3[2];
  }
  FUN_00b193dc(auStack_98,pvVar3);
  FUN_00b17860(param_6,&local_b0);
  FUN_00b194c8(auStack_98);
  if (local_a0 < 0) {
    operator_delete(local_b0);
  }
  FUN_005ecd48(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00b194c8(pvVar3);
    operator_delete(pvVar3);
  }
  return;
}


// ===== 00cda6e4  FUN_00cda6e4 =====

void FUN_00cda6e4(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 param_5)

{
  void *local_a0;
  undefined8 uStack_98;
  long local_90;
  undefined1 auStack_88 [88];
  
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    FUN_005478d8(&local_a0,*param_3,param_3[1]);
  }
  else {
    uStack_98 = param_3[1];
    local_a0 = (void *)*param_3;
    local_90 = param_3[2];
  }
  FUN_00b193dc(auStack_88,param_4);
  FUN_00b17860(param_5,&local_a0);
  FUN_00b194c8(auStack_88);
  if (local_90 < 0) {
    operator_delete(local_a0);
  }
  FUN_005ecd48(param_1);
  return;
}


// ===== 00cda790  FUN_00cda790 =====

void FUN_00cda790(undefined8 param_1,long param_2,long param_3,undefined8 *param_4,long param_5)

{
  size_t __n;
  size_t sVar1;
  undefined8 *__s1;
  undefined8 *__s2;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  undefined8 *puVar8;
  size_t sVar9;
  void *pvVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  
  local_78 = (undefined8 *)0x0;
  puVar8 = (undefined8 *)0x0;
  local_70 = (undefined8 *)0x0;
  local_68 = (undefined8 *)0x0;
  *(undefined1 *)(param_5 + 0x20) = *(undefined1 *)(param_3 + 1);
  *(undefined1 *)(param_5 + 0x21) = 1;
  puVar2 = (undefined8 *)param_4[1];
  for (param_4 = (undefined8 *)*param_4; param_4 != puVar2; param_4 = param_4 + 4) {
    puVar3 = *(undefined8 **)(param_2 + 0x60);
    for (puVar11 = *(undefined8 **)(param_2 + 0x58); puVar11 != puVar3; puVar11 = puVar11 + 5) {
      bVar5 = *(byte *)((long)param_4 + 0x17);
      bVar6 = *(byte *)((long)puVar11 + 0x17);
      sVar9 = param_4[1];
      __n = sVar9;
      if (-1 < (char)bVar5) {
        __n = (ulong)bVar5;
      }
      sVar1 = puVar11[1];
      if (-1 < (char)bVar6) {
        sVar1 = (ulong)bVar6;
      }
      if (__n == sVar1) {
        pvVar10 = (void *)*param_4;
        __s1 = (undefined8 *)pvVar10;
        if (-1 < (char)bVar5) {
          __s1 = param_4;
        }
        __s2 = (undefined8 *)*puVar11;
        if (-1 < (char)bVar6) {
          __s2 = puVar11;
        }
        iVar7 = memcmp(__s1,__s2,__n);
        if (((iVar7 == 0) && (*(char *)((long)param_4 + 0x1c) == *(char *)(puVar11 + 4))) &&
           (*(int *)((long)puVar11 + 0x24) != 4)) {
          if (puVar8 < local_68) {
            if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                        );
            }
            if ((char)bVar5 < '\0') {
              FUN_005478d8(puVar8,pvVar10,sVar9);
            }
            else {
              uVar13 = param_4[1];
              uVar12 = *param_4;
              puVar8[2] = param_4[2];
              puVar8[1] = uVar13;
              *puVar8 = uVar12;
            }
            uVar4 = *(undefined4 *)(param_4 + 3);
            *(undefined1 *)((long)puVar8 + 0x1c) = *(undefined1 *)((long)param_4 + 0x1c);
            *(undefined4 *)(puVar8 + 3) = uVar4;
            puVar8 = puVar8 + 4;
            local_70 = puVar8;
          }
          else {
            puVar8 = (undefined8 *)FUN_0066a5f0(&local_78,param_4);
            local_70 = puVar8;
          }
        }
      }
    }
  }
  if ((undefined8 **)(param_5 + 0x40) != &local_78) {
    FUN_005e2544(param_5 + 0x40,local_78,puVar8,(long)puVar8 - (long)local_78 >> 5);
  }
  FUN_00cdc5dc(param_2,param_5);
  FUN_005ecd48(param_1);
  puVar2 = local_78;
  puVar8 = local_70;
  if (local_78 != (undefined8 *)0x0) {
    while (puVar2 != puVar8) {
      puVar8 = puVar8 + -4;
      if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      FUN_00668f8c(puVar8);
    }
    local_70 = puVar2;
    operator_delete(local_78);
  }
  return;
}


// ===== 00cda9a0  FUN_00cda9a0 =====

void FUN_00cda9a0(long param_1,long param_2,long param_3,undefined8 *param_4,uint param_5,
                 long param_6)

{
  size_t __n;
  size_t sVar1;
  long *__s1;
  undefined8 *__s2;
  undefined4 uVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  byte bVar15;
  undefined8 *puVar16;
  long *plVar17;
  long *plVar18;
  size_t sVar19;
  long *plVar20;
  long *plVar21;
  long lVar22;
  undefined8 uVar23;
  long lVar24;
  undefined8 uVar25;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  
  if ((*(int *)(param_1 + 0xc0) != 2) || (*(int *)(param_6 + 0xc0) != 1)) {
    *(int *)(param_6 + 0xc0) = *(int *)(param_1 + 0xc0);
  }
  plVar17 = (long *)*param_4;
  plVar21 = (long *)param_4[1];
  param_5 = param_5 & 1;
  local_78 = (long *)0x0;
  local_70 = (long *)0x0;
  local_68 = (long *)0x0;
  if (plVar17 == plVar21) {
    bVar5 = false;
    bVar6 = false;
    local_90 = (undefined8 *)0x0;
    local_88 = (undefined8 *)0x0;
    local_80 = (undefined8 *)0x0;
LAB_00cdad4c:
    uVar13 = FUN_00669f10("https://aomediacodec.github.io/av1-rtp-spec/#dependency-descriptor-rtp-header-extension"
                          ,0x57);
    uVar8 = param_5;
    if ((uVar13 & 1) == 0) {
      uVar8 = 0;
    }
    puVar14 = (undefined8 *)
              FUN_00669f90(param_1 + 0x40,
                           "https://aomediacodec.github.io/av1-rtp-spec/#dependency-descriptor-rtp-header-extension"
                           ,0x57,uVar8);
    puVar16 = local_88;
    if (puVar14 != (undefined8 *)0x0) {
      if (local_88 < local_80) {
        if (local_88 == (undefined8 *)0x0) goto LAB_00cdb05c;
        if (*(char *)((long)puVar14 + 0x17) < '\0') {
          FUN_005478d8(local_88,*puVar14,puVar14[1]);
        }
        else {
          uVar25 = puVar14[1];
          uVar23 = *puVar14;
          local_88[2] = puVar14[2];
          local_88[1] = uVar25;
          *local_88 = uVar23;
        }
        uVar12 = *(undefined4 *)(puVar14 + 3);
        local_88 = puVar16 + 4;
        *(undefined1 *)((long)puVar16 + 0x1c) = *(undefined1 *)((long)puVar14 + 0x1c);
        *(undefined4 *)(puVar16 + 3) = uVar12;
      }
      else {
        local_88 = (undefined8 *)FUN_0066a5f0(&local_90,puVar14);
      }
    }
  }
  else {
    plVar18 = (long *)0x0;
    do {
      puVar16 = *(undefined8 **)(param_2 + 0x58);
      puVar14 = *(undefined8 **)(param_2 + 0x60);
      if (puVar16 != puVar14) {
        bVar15 = *(byte *)((long)plVar17 + 0x17);
        sVar19 = plVar17[1];
        __n = sVar19;
        if (-1 < (char)bVar15) {
          __n = (ulong)bVar15;
        }
        do {
          bVar3 = *(byte *)((long)puVar16 + 0x17);
          sVar1 = puVar16[1];
          if (-1 < (char)bVar3) {
            sVar1 = (ulong)bVar3;
          }
          if (__n == sVar1) {
            plVar20 = (long *)*plVar17;
            __s1 = plVar20;
            if (-1 < (char)bVar15) {
              __s1 = plVar17;
            }
            __s2 = (undefined8 *)*puVar16;
            if (-1 < (char)bVar3) {
              __s2 = puVar16;
            }
            iVar7 = memcmp(__s1,__s2,__n);
            if (((iVar7 == 0) && (*(char *)((long)plVar17 + 0x1c) == *(char *)(puVar16 + 4))) &&
               (*(int *)((long)puVar16 + 0x24) != 4)) {
              if (plVar18 < local_68) {
                if (plVar18 == (long *)0x0) goto LAB_00cdb05c;
                if ((char)bVar15 < '\0') {
                  FUN_005478d8(plVar18,plVar20,sVar19);
                }
                else {
                  lVar24 = plVar17[1];
                  lVar22 = *plVar17;
                  plVar18[2] = plVar17[2];
                  plVar18[1] = lVar24;
                  *plVar18 = lVar22;
                }
                lVar22 = plVar17[3];
                *(undefined1 *)((long)plVar18 + 0x1c) = *(undefined1 *)((long)plVar17 + 0x1c);
                *(int *)(plVar18 + 3) = (int)lVar22;
                plVar18 = plVar18 + 4;
                local_70 = plVar18;
              }
              else {
                plVar18 = (long *)FUN_0066a5f0(&local_78,plVar17);
                local_70 = plVar18;
              }
              break;
            }
          }
          puVar16 = puVar16 + 5;
        } while (puVar16 != puVar14);
      }
      plVar17 = plVar17 + 4;
    } while (plVar17 != plVar21);
    bVar5 = false;
    local_90 = (undefined8 *)0x0;
    local_88 = (undefined8 *)0x0;
    local_80 = (undefined8 *)0x0;
    if (local_78 == plVar18) {
      bVar6 = false;
      goto LAB_00cdad4c;
    }
    bVar4 = false;
    bVar6 = false;
    plVar17 = local_78;
    do {
      lVar22 = (long)*(char *)((long)plVar17 + 0x17);
      plVar21 = plVar17;
      if (lVar22 < 0) {
        plVar21 = (long *)*plVar17;
        lVar22 = plVar17[1];
        if (lVar22 == 0x3d) {
          bVar6 = (bool)((((((((*plVar21 == 0x772f2f3a70747468 && plVar21[1] == 0x74726265772e7777)
                              && plVar21[2] == 0x78652f67726f2e63) &&
                             plVar21[3] == 0x746e656d69726570) && plVar21[4] == 0x64682d7074722f73)
                           && plVar21[5] == 0x7362612f74786572) && plVar21[6] == 0x657275747061632d)
                         && *(long *)((long)plVar21 + 0x35) == 0x656d69742d657275) | bVar6);
        }
        else if (lVar22 == 0x57) {
          iVar7 = memcmp(plVar21,
                         "https://aomediacodec.github.io/av1-rtp-spec/#dependency-descriptor-rtp-header-extension"
                         ,0x57);
          if (iVar7 == 0) {
            bVar4 = true;
            lVar22 = 0x57;
          }
        }
        else if ((lVar22 == 0x48) &&
                (iVar7 = memcmp(plVar21,
                                "http://www.webrtc.org/experiments/rtp-hdrext/generic-frame-descriptor-00"
                                ,0x48), iVar7 == 0)) {
          bVar5 = true;
          lVar22 = 0x48;
        }
      }
      uVar13 = FUN_00669f10(plVar21,lVar22);
      uVar8 = param_5;
      if ((uVar13 & 1) == 0) {
        uVar8 = 0;
      }
      puVar14 = (undefined8 *)FUN_00669f90(param_1 + 0x40,plVar21,lVar22,uVar8);
      puVar16 = local_88;
      if ((puVar14 != (undefined8 *)0x0) &&
         (*(char *)((long)puVar14 + 0x1c) == *(char *)((long)plVar17 + 0x1c))) {
        if (local_88 < local_80) {
          if (local_88 == (undefined8 *)0x0) goto LAB_00cdb05c;
          if (*(char *)((long)puVar14 + 0x17) < '\0') {
            FUN_005478d8(local_88,*puVar14,puVar14[1]);
          }
          else {
            uVar25 = puVar14[1];
            uVar23 = *puVar14;
            local_88[2] = puVar14[2];
            local_88[1] = uVar25;
            *local_88 = uVar23;
          }
          uVar12 = *(undefined4 *)(puVar14 + 3);
          local_88 = puVar16 + 4;
          *(undefined1 *)((long)puVar16 + 0x1c) = *(undefined1 *)((long)puVar14 + 0x1c);
          *(undefined4 *)(puVar16 + 3) = uVar12;
        }
        else {
          local_88 = (undefined8 *)FUN_0066a5f0(&local_90,puVar14);
        }
      }
      plVar17 = plVar17 + 4;
    } while (plVar17 != plVar18);
    if (!bVar4) goto LAB_00cdad4c;
  }
  if (!bVar5) {
    uVar13 = FUN_00669f10("http://www.webrtc.org/experiments/rtp-hdrext/generic-frame-descriptor-00"
                          ,0x48);
    uVar8 = param_5;
    if ((uVar13 & 1) == 0) {
      uVar8 = 0;
    }
    puVar14 = (undefined8 *)
              FUN_00669f90(param_1 + 0x40,
                           "http://www.webrtc.org/experiments/rtp-hdrext/generic-frame-descriptor-00"
                           ,0x48,uVar8);
    puVar16 = local_88;
    if (puVar14 != (undefined8 *)0x0) {
      if (local_88 < local_80) {
        if (local_88 == (undefined8 *)0x0) goto LAB_00cdb05c;
        if (*(char *)((long)puVar14 + 0x17) < '\0') {
          FUN_005478d8(local_88,*puVar14,puVar14[1]);
        }
        else {
          uVar25 = puVar14[1];
          uVar23 = *puVar14;
          local_88[2] = puVar14[2];
          local_88[1] = uVar25;
          *local_88 = uVar23;
        }
        uVar12 = *(undefined4 *)(puVar14 + 3);
        local_88 = puVar16 + 4;
        *(undefined1 *)((long)puVar16 + 0x1c) = *(undefined1 *)((long)puVar14 + 0x1c);
        *(undefined4 *)(puVar16 + 3) = uVar12;
      }
      else {
        local_88 = (undefined8 *)FUN_0066a5f0(&local_90,puVar14);
      }
    }
  }
  if (!bVar6) {
    uVar13 = FUN_00669f10("http://www.webrtc.org/experiments/rtp-hdrext/abs-capture-time",0x3d);
    if ((uVar13 & 1) == 0) {
      param_5 = 0;
    }
    puVar14 = (undefined8 *)
              FUN_00669f90(param_1 + 0x40,
                           "http://www.webrtc.org/experiments/rtp-hdrext/abs-capture-time",0x3d,
                           param_5);
    puVar16 = local_88;
    if (puVar14 != (undefined8 *)0x0) {
      if (local_88 < local_80) {
        if (local_88 == (undefined8 *)0x0) {
LAB_00cdb05c:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        if (*(char *)((long)puVar14 + 0x17) < '\0') {
          FUN_005478d8(local_88,*puVar14,puVar14[1]);
        }
        else {
          uVar25 = puVar14[1];
          uVar23 = *puVar14;
          local_88[2] = puVar14[2];
          local_88[1] = uVar25;
          *local_88 = uVar23;
        }
        uVar12 = *(undefined4 *)(puVar14 + 3);
        local_88 = puVar16 + 4;
        *(undefined1 *)((long)puVar16 + 0x1c) = *(undefined1 *)((long)puVar14 + 0x1c);
        *(undefined4 *)(puVar16 + 3) = uVar12;
      }
      else {
        local_88 = (undefined8 *)FUN_0066a5f0(&local_90,puVar14);
      }
    }
  }
  if ((undefined8 **)(param_6 + 0x40) != &local_90) {
    FUN_005e2544(param_6 + 0x40,local_90,local_88,(long)local_88 - (long)local_90 >> 5);
  }
  if ((*(byte *)(param_3 + 1) & 1) == 0) {
    bVar15 = 0;
  }
  else {
    bVar15 = *(byte *)(param_1 + 0x20);
  }
  *(byte *)(param_6 + 0x20) = bVar15 & 1;
  *(undefined1 *)(param_6 + 0x21) = *(undefined1 *)(param_1 + 0x21);
  *(undefined1 *)(param_6 + 0x22) = *(undefined1 *)(param_1 + 0x22);
  FUN_00cdc5dc(param_2,param_6);
  uVar12 = *(undefined4 *)(param_1 + 0x74);
  uVar2 = *(undefined4 *)(param_2 + 0x20);
  uVar8 = FUN_00bde288(uVar12);
  uVar9 = FUN_00bde298(uVar12);
  uVar10 = FUN_00bde288(uVar2);
  uVar11 = FUN_00bde298(uVar2);
  uVar12 = FUN_00bde24c(uVar9 & uVar10 & 1,uVar8 & uVar11 & 1);
  puVar14 = local_90;
  *(undefined4 *)(param_6 + 0x74) = uVar12;
  puVar16 = local_88;
  if (local_90 != (undefined8 *)0x0) {
    while (puVar14 != puVar16) {
      puVar16 = puVar16 + -4;
      if (puVar16 == (undefined8 *)0x0) goto LAB_00cdb048;
      FUN_00668f8c(puVar16);
    }
    local_88 = puVar14;
    operator_delete(local_90);
  }
  plVar21 = local_78;
  plVar17 = local_70;
  if (local_78 != (long *)0x0) {
    while (plVar21 != plVar17) {
      plVar17 = plVar17 + -4;
      if (plVar17 == (long *)0x0) {
LAB_00cdb048:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      FUN_00668f8c(plVar17);
    }
    local_70 = plVar21;
    operator_delete(local_78);
  }
  return;
}


// ===== 00cdb0a0  FUN_00cdb0a0 =====

ulong FUN_00cdb0a0(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  
  uVar2 = param_1;
  if ((param_1 != 0) && (uVar2 = FUN_00b174c8(), uVar2 != 0)) {
    plVar3 = (long *)FUN_00b174c8(param_1);
    iVar1 = (**(code **)(*plVar3 + 0x10))();
    uVar2 = (ulong)(iVar1 == 0);
  }
  return uVar2;
}


// ===== 00cdb0f0  FUN_00cdb0f0 =====

ulong FUN_00cdb0f0(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  
  uVar2 = param_1;
  if ((param_1 != 0) && (uVar2 = FUN_00b174c8(), uVar2 != 0)) {
    plVar3 = (long *)FUN_00b174c8(param_1);
    iVar1 = (**(code **)(*plVar3 + 0x10))();
    uVar2 = (ulong)(iVar1 == 1);
  }
  return uVar2;
}


// ===== 00cdb140  FUN_00cdb140 =====

ulong FUN_00cdb140(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  
  uVar2 = param_1;
  if ((param_1 != 0) && (uVar2 = FUN_00b174c8(), uVar2 != 0)) {
    plVar3 = (long *)FUN_00b174c8(param_1);
    iVar1 = (**(code **)(*plVar3 + 0x10))();
    uVar2 = (ulong)(iVar1 == 3);
  }
  return uVar2;
}


// ===== 00cdb190  FUN_00cdb190 =====

long FUN_00cdb190(long *param_1,int param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  do {
    if (lVar1 == lVar2) {
      return 0;
    }
    if ((lVar1 != 0) && (lVar4 = FUN_00b174c8(lVar1), lVar4 != 0)) {
      plVar5 = (long *)FUN_00b174c8(lVar1);
      iVar3 = (**(code **)(*plVar5 + 0x10))();
      if (iVar3 == param_2) {
        return lVar1;
      }
    }
    lVar1 = lVar1 + 0x28;
  } while( true );
}


// ===== 00cdb210  FUN_00cdb210 =====

long FUN_00cdb210(long *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  lVar5 = *param_1;
  lVar1 = param_1[1];
  do {
    if (lVar5 == lVar1) {
      return 0;
    }
    if ((lVar5 != 0) && (lVar3 = FUN_00b174c8(lVar5), lVar3 != 0)) {
      plVar4 = (long *)FUN_00b174c8(lVar5);
      iVar2 = (**(code **)(*plVar4 + 0x10))();
      if (iVar2 == 2) {
        return lVar5;
      }
    }
    lVar5 = lVar5 + 0x28;
  } while( true );
}


// ===== 00cdb27c  FUN_00cdb27c =====

long FUN_00cdb27c(long *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  if (param_1 != (long *)0x0) {
    lVar1 = param_1[1];
    for (lVar5 = *param_1; lVar5 != lVar1; lVar5 = lVar5 + 0x28) {
      if ((lVar5 != 0) && (lVar3 = FUN_00b174c8(lVar5), lVar3 != 0)) {
        plVar4 = (long *)FUN_00b174c8(lVar5);
        iVar2 = (**(code **)(*plVar4 + 0x10))();
        if (iVar2 == 0) {
          return lVar5;
        }
      }
    }
  }
  return 0;
}


// ===== 00cdb2e8  FUN_00cdb2e8 =====

long FUN_00cdb2e8(long *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  if (param_1 != (long *)0x0) {
    lVar1 = param_1[1];
    for (lVar5 = *param_1; lVar5 != lVar1; lVar5 = lVar5 + 0x28) {
      if ((lVar5 != 0) && (lVar3 = FUN_00b174c8(lVar5), lVar3 != 0)) {
        plVar4 = (long *)FUN_00b174c8(lVar5);
        iVar2 = (**(code **)(*plVar4 + 0x10))();
        if (iVar2 == 1) {
          return lVar5;
        }
      }
    }
  }
  return 0;
}


// ===== 00cdb358  FUN_00cdb358 =====

long FUN_00cdb358(long *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  if (param_1 != (long *)0x0) {
    lVar1 = param_1[1];
    for (lVar5 = *param_1; lVar5 != lVar1; lVar5 = lVar5 + 0x28) {
      if ((lVar5 != 0) && (lVar3 = FUN_00b174c8(lVar5), lVar3 != 0)) {
        plVar4 = (long *)FUN_00b174c8(lVar5);
        iVar2 = (**(code **)(*plVar4 + 0x10))();
        if (iVar2 == 2) {
          return lVar5;
        }
      }
    }
  }
  return 0;
}


// ===== 00cdb3c8  FUN_00cdb3c8 =====

undefined8 FUN_00cdb3c8(long *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  
  if (param_1 != (long *)0x0) {
    lVar1 = param_1[1];
    for (lVar6 = *param_1; lVar6 != lVar1; lVar6 = lVar6 + 0x28) {
      if ((lVar6 != 0) && (lVar3 = FUN_00b174c8(lVar6), lVar3 != 0)) {
        plVar4 = (long *)FUN_00b174c8(lVar6);
        iVar2 = (**(code **)(*plVar4 + 0x10))();
        if (iVar2 == 0) {
          plVar4 = (long *)FUN_00b174c8(lVar6);
          if (plVar4 == (long *)0x0) {
            return 0;
          }
                    /* WARNING: Could not recover jumptable at 0x00cdb438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar5 = (**(code **)(*plVar4 + 0x20))();
          return uVar5;
        }
      }
    }
  }
  return 0;
}


// ===== 00cdb450  FUN_00cdb450 =====

undefined8 FUN_00cdb450(long *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  
  if (param_1 != (long *)0x0) {
    lVar1 = param_1[1];
    for (lVar6 = *param_1; lVar6 != lVar1; lVar6 = lVar6 + 0x28) {
      if ((lVar6 != 0) && (lVar3 = FUN_00b174c8(lVar6), lVar3 != 0)) {
        plVar4 = (long *)FUN_00b174c8(lVar6);
        iVar2 = (**(code **)(*plVar4 + 0x10))();
        if (iVar2 == 1) {
          plVar4 = (long *)FUN_00b174c8(lVar6);
          if (plVar4 == (long *)0x0) {
            return 0;
          }
                    /* WARNING: Could not recover jumptable at 0x00cdb4c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar5 = (**(code **)(*plVar4 + 0x30))();
          return uVar5;
        }
      }
    }
  }
  return 0;
}


// ===== 00cdb4dc  FUN_00cdb4dc =====

undefined8 FUN_00cdb4dc(long *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  
  if (param_1 != (long *)0x0) {
    lVar1 = param_1[1];
    for (lVar6 = *param_1; lVar6 != lVar1; lVar6 = lVar6 + 0x28) {
      if ((lVar6 != 0) && (lVar3 = FUN_00b174c8(lVar6), lVar3 != 0)) {
        plVar4 = (long *)FUN_00b174c8(lVar6);
        iVar2 = (**(code **)(*plVar4 + 0x10))();
        if (iVar2 == 2) {
          plVar4 = (long *)FUN_00b174c8(lVar6);
          if (plVar4 == (long *)0x0) {
            return 0;
          }
                    /* WARNING: Could not recover jumptable at 0x00cdb550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar5 = (**(code **)(*plVar4 + 0x40))();
          return uVar5;
        }
      }
    }
  }
  return 0;
}


// ===== 00cdb568  FUN_00cdb568 =====

undefined8 * FUN_00cdb568(long *param_1,undefined8 *param_2)

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
    FUN_00cdb65c();
LAB_00cdb658:
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
    if (uVar5 >> 0x3d != 0) goto LAB_00cdb658;
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


// ===== 00cdb65c  FUN_00cdb65c =====

void FUN_00cdb65c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00cdb674  FUN_00cdb674 =====

void FUN_00cdb674(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00cdb68c  FUN_00cdb68c =====

void FUN_00cdb68c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined8 *)param_1[1];
  puVar3 = (undefined8 *)param_1[2];
  while (puVar1 != puVar3) {
    puVar3 = puVar3 + -1;
    if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    puVar2 = (undefined8 *)*puVar3;
    *puVar3 = 0;
    if (puVar2 != (undefined8 *)0x0) {
      FUN_00b194c8(puVar2 + 3);
      if (*(char *)((long)puVar2 + 0x17) < '\0') {
        operator_delete((void *)*puVar2);
      }
      operator_delete(puVar2);
    }
  }
  param_1[2] = puVar3;
  if ((void *)*param_1 == (void *)0x0) {
    return;
  }
  operator_delete((void *)*param_1);
  return;
}


// ===== 00cdb75c  FUN_00cdb75c =====

long FUN_00cdb75c(long param_1,char ****param_2)

{
  ulong uVar1;
  ulong uVar2;
  size_t __n;
  char ****__dest;
  char ***local_58;
  size_t sStack_50;
  undefined8 local_48;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  if (param_2 == (char ****)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/string:1063: libc++ Hardening assertion __s != nullptr failed: basic_string(const char*) detected nullptr\n"
              );
  }
  __n = strlen((char *)param_2);
  if (0x7ffffffffffffff6 < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (__n < 0x17) {
    local_48 = CONCAT17((char)__n,(undefined7)local_48);
    __dest = &local_58;
  }
  else {
    uVar1 = (__n & 0x7ffffffffffffff8) + 8;
    uVar2 = 0x19;
    if (uVar1 != 0x18) {
      uVar2 = uVar1;
    }
    __dest = (char ****)operator_new(uVar2);
    local_48 = uVar2 | 0x8000000000000000;
    local_58 = (char ***)__dest;
    sStack_50 = __n;
  }
  if (__dest <= (char ****)((long)__dest + __n)) {
    if ((__dest <= param_2) && (param_2 < (char ****)((long)__dest + __n))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                );
    }
    memcpy(__dest,param_2,__n);
    *(undefined1 *)((long)__dest + __n) = 0;
    FUN_00b16b88(param_1,&local_58);
    if ((long)local_48 < 0) {
      operator_delete(local_58);
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
            );
}


// ===== 00cdb8ac  FUN_00cdb8ac =====

long FUN_00cdb8ac(long *param_1,undefined8 param_2)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  void *pvVar6;
  long lVar7;
  void *pvVar8;
  long lVar9;
  
  lVar7 = param_1[1] - *param_1;
  uVar3 = (lVar7 >> 4) * -0x5555555555555555 + 1;
  if (0x555555555555555 < uVar3) {
    FUN_00b09644();
LAB_00cdba2c:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  lVar4 = param_1[2] - *param_1 >> 4;
  uVar5 = lVar4 * 0x5555555555555556;
  if (uVar5 < uVar3 || uVar5 - uVar3 == 0) {
    uVar5 = uVar3;
  }
  if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar4 * -0x5555555555555555)) {
    uVar5 = 0x555555555555555;
  }
  if (uVar5 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (0x555555555555555 < uVar5) goto LAB_00cdba2c;
    pvVar2 = operator_new(uVar5 * 0x30);
  }
  lVar7 = (long)pvVar2 + lVar7;
  FUN_00cdb75c(lVar7,param_2);
  pvVar6 = (void *)*param_1;
  pvVar1 = (void *)param_1[1];
  lVar4 = lVar7 + ((long)pvVar6 - (long)pvVar1);
  pvVar8 = pvVar6;
  lVar9 = lVar4;
  if ((long)pvVar6 - (long)pvVar1 != 0) {
    do {
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      FUN_00b16c08(lVar9,pvVar8);
      pvVar8 = (void *)((long)pvVar8 + 0x30);
      lVar9 = lVar9 + 0x30;
    } while (pvVar8 != pvVar1);
    do {
      if (pvVar6 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      FUN_00b16cf4(pvVar6);
      pvVar6 = (void *)((long)pvVar6 + 0x30);
    } while (pvVar6 != pvVar1);
    pvVar6 = (void *)*param_1;
  }
  *param_1 = lVar4;
  param_1[1] = lVar7 + 0x30;
  param_1[2] = (long)((long)pvVar2 + uVar5 * 0x30);
  if (pvVar6 != (void *)0x0) {
    operator_delete(pvVar6);
  }
  return lVar7 + 0x30;
}


// ===== 00cdba30  FUN_00cdba30 =====

undefined8 * FUN_00cdba30(long *param_1)

{
  ulong uVar1;
  void *pvVar2;
  size_t __n;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long local_50;
  undefined8 *local_48;
  long local_40;
  void *local_38;
  
  lVar5 = param_1[1] - *param_1;
  uVar1 = (lVar5 >> 3) + 1;
  if (uVar1 >> 0x3d == 0) {
    local_50 = 0;
    uVar3 = param_1[2] - *param_1;
    uVar4 = (long)uVar3 >> 2;
    if (uVar4 <= uVar1) {
      uVar4 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar3) {
      uVar4 = 0x1fffffffffffffff;
    }
    if (uVar4 == 0) {
      pvVar2 = (void *)0x0;
    }
    else {
      if (uVar4 >> 0x3d != 0) goto LAB_00cdbb30;
      pvVar2 = operator_new(uVar4 << 3);
    }
    local_38 = (void *)((long)pvVar2 + uVar4 * 8);
    local_48 = (undefined8 *)((long)pvVar2 + lVar5);
    if (local_48 != (undefined8 *)0x0) {
      puVar6 = local_48 + 1;
      *local_48 = 0;
      __n = param_1[1] - *param_1;
      pvVar2 = (void *)((long)local_48 - __n);
      memcpy(pvVar2,(void *)*param_1,__n);
      local_50 = *param_1;
      lVar5 = param_1[2];
      *param_1 = (long)pvVar2;
      param_1[1] = (long)puVar6;
      param_1[2] = (long)local_38;
      local_48 = (undefined8 *)local_50;
      local_40 = local_50;
      local_38 = (void *)lVar5;
      FUN_00cdb68c(&local_50);
      return puVar6;
    }
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  FUN_00cdb674();
LAB_00cdbb30:
                    /* WARNING: Subroutine does not return */
  FUN_005d55a4();
}


// ===== 00cdbb34  FUN_00cdbb34 =====

long FUN_00cdbb34(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  void *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  void *local_38;
  
  lVar7 = param_1[1] - *param_1;
  uVar1 = (lVar7 >> 5) + 1;
  if (uVar1 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_005e28a4();
  }
  local_50 = (void *)0x0;
  uVar5 = param_1[2] - *param_1;
  uVar6 = (long)uVar5 >> 4;
  if (uVar6 <= uVar1) {
    uVar6 = uVar1;
  }
  if (0x7fffffffffffffdf < uVar5) {
    uVar6 = 0x7ffffffffffffff;
  }
  if (uVar6 != 0) {
    if (uVar6 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    local_50 = operator_new(uVar6 << 5);
  }
  local_38 = (void *)((long)local_50 + uVar6 * 0x20);
  puVar2 = (undefined8 *)((long)local_50 + lVar7);
  local_48 = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      FUN_005478d8(puVar2,*param_2,param_2[1]);
    }
    else {
      uVar9 = param_2[1];
      uVar8 = *param_2;
      puVar2[2] = param_2[2];
      puVar2[1] = uVar9;
      *puVar2 = uVar8;
    }
    uVar3 = *(undefined4 *)(param_2 + 3);
    *(undefined1 *)((long)puVar2 + 0x1c) = *(undefined1 *)((long)param_2 + 0x1c);
    local_40 = puVar2 + 4;
    *(undefined4 *)(puVar2 + 3) = uVar3;
    FUN_00b09c50(param_1,&local_50);
    puVar4 = local_48;
    lVar7 = param_1[1];
    puVar2 = local_40;
    while( true ) {
      if (puVar4 == puVar2) {
        if (local_50 != (void *)0x0) {
          local_40 = puVar2;
          operator_delete(local_50);
        }
        return lVar7;
      }
      puVar2 = puVar2 + -4;
      if (puVar2 == (undefined8 *)0x0) break;
      FUN_00668f8c(puVar2);
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


// ===== 00cdbca0  FUN_00cdbca0 =====

ulong FUN_00cdbca0(long *param_1,ulong param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if (param_3 <= param_2 && param_2 != param_3) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__vector/vector.h:1170: libc++ Hardening assertion __first <= __last failed: vector::erase(first, last) called with invalid range\n"
              );
  }
  if (param_2 == param_3) {
    return param_2;
  }
  uVar5 = param_1[1];
  if (param_3 == uVar5) {
    uVar7 = param_2;
    if (param_2 == uVar5) goto LAB_00cdbda0;
  }
  else {
    lVar6 = *param_1;
    lVar9 = -lVar6;
    lVar8 = lVar6 + param_2;
    lVar10 = lVar6 + param_3;
    do {
      puVar1 = (undefined8 *)(lVar8 + lVar9);
      puVar2 = (undefined8 *)(lVar10 + lVar9);
      if (lVar10 != lVar8) {
        bVar3 = *(byte *)((long)puVar2 + 0x17);
        if (*(char *)((long)puVar1 + 0x17) < '\0') {
          uVar7 = ((long *)(lVar10 + lVar9))[1];
          puVar4 = *(undefined8 **)(lVar10 + lVar9);
          if (-1 < (char)bVar3) {
            uVar7 = (ulong)bVar3;
            puVar4 = puVar2;
          }
          FUN_00547f08(lVar8 + lVar9,puVar4,uVar7);
        }
        else if ((char)bVar3 < '\0') {
          FUN_00547fc0(lVar8 + lVar9,*(undefined8 *)(lVar10 + lVar9),
                       ((undefined8 *)(lVar10 + lVar9))[1]);
        }
        else {
          uVar12 = puVar2[1];
          uVar11 = *puVar2;
          puVar1[2] = puVar2[2];
          puVar1[1] = uVar12;
          *puVar1 = uVar11;
        }
      }
      lVar10 = lVar10 + 0x28;
      uVar11 = puVar2[3];
      lVar8 = lVar8 + 0x28;
      puVar1[4] = puVar2[4];
      puVar1[3] = uVar11;
    } while (lVar10 + lVar9 != uVar5);
    uVar5 = param_1[1];
    uVar7 = lVar8 - lVar6;
    if (uVar7 == uVar5) goto LAB_00cdbda0;
  }
  do {
    uVar5 = uVar5 - 0x28;
    if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    FUN_00668d5c(uVar5);
  } while (uVar5 != uVar7);
LAB_00cdbda0:
  param_1[1] = uVar7;
  return param_2;
}


// ===== 00cdbe00  FUN_00cdbe00 =====

void FUN_00cdbe00(undefined8 *param_1)

{
  undefined8 *local_8;
  
  *param_1 = &PTR_FUN_00d500d0;
  local_8 = param_1 + 3;
  FUN_005fa1cc(&local_8,param_1[4]);
  operator_delete(param_1);
  return;
}


// ===== 00cdbe50  FUN_00cdbe50 =====

bool FUN_00cdbe50(long param_1,int param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = (long *)(param_1 + 0x20);
  plVar2 = (long *)*plVar1;
  if (plVar2 == (long *)0x0) {
    return false;
  }
  do {
    while (*(int *)((long)plVar2 + 0x1c) <= param_2) {
      plVar3 = plVar2;
      if ((param_2 == *(int *)((long)plVar2 + 0x1c)) ||
         (plVar2 = (long *)plVar2[1], plVar3 = plVar1, plVar2 == (long *)0x0)) goto LAB_00cdbe88;
    }
    plVar2 = (long *)*plVar2;
    plVar3 = plVar1;
  } while (plVar2 != (long *)0x0);
LAB_00cdbe88:
  return plVar3 != plVar1;
}


// ===== 00cdbe94  FUN_00cdbe94 =====

undefined4 FUN_00cdbe94(long *param_1)

{
  ulong uVar1;
  long lVar2;
  
  if (*(int *)((long)param_1 + 0x34) < 0xf) {
    lVar2 = *param_1;
    while ((uVar1 = (**(code **)(lVar2 + 0x10))(param_1), (uVar1 & 1) != 0 &&
           ((int)param_1[1] <= *(int *)((long)param_1 + 0x34)))) {
      lVar2 = *param_1;
      *(int *)((long)param_1 + 0x34) = *(int *)((long)param_1 + 0x34) + -1;
    }
  }
  if ((int)param_1[6] == 1) {
    if (*(int *)((long)param_1 + 0x34) < (int)param_1[1]) {
      *(undefined4 *)((long)param_1 + 0x34) = 0x10;
    }
    else if (*(int *)((long)param_1 + 0x34) < 0xf) goto LAB_00cdbf4c;
    lVar2 = *param_1;
    while ((uVar1 = (**(code **)(lVar2 + 0x10))(param_1), (uVar1 & 1) != 0 &&
           (*(int *)((long)param_1 + 0x34) <= *(int *)((long)param_1 + 0xc)))) {
      lVar2 = *param_1;
      *(int *)((long)param_1 + 0x34) = *(int *)((long)param_1 + 0x34) + 1;
    }
  }
LAB_00cdbf4c:
  return *(undefined4 *)((long)param_1 + 0x34);
}


// ===== 00cdbf60  FUN_00cdbf60 =====

void FUN_00cdbf60(undefined8 *param_1)

{
  undefined8 *local_8;
  
  *param_1 = &PTR_FUN_00d500d0;
  local_8 = param_1 + 3;
  FUN_005fa1cc(&local_8,param_1[4]);
  operator_delete(param_1);
  return;
}


// ===== 00cdbfb0  FUN_00cdbfb0 =====

undefined4 FUN_00cdbfb0(long *param_1)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x10))(param_1,(int)param_1[2]);
  while (((uVar1 & 1) != 0 && ((int)param_1[1] <= (int)param_1[2]))) {
    *(int *)(param_1 + 2) = (int)param_1[2] + -1;
    uVar1 = (**(code **)(*param_1 + 0x10))(param_1);
  }
  return (int)param_1[2];
}


// ===== 00cdc018  FUN_00cdc018 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00cdc018(undefined8 *param_1,undefined1 **param_2,undefined8 param_3,undefined8 *param_4,
                 long param_5,long *param_6)

{
  undefined1 *puVar1;
  undefined8 *__s2;
  int *******pppppppiVar2;
  undefined1 **ppuVar3;
  undefined8 *puVar4;
  byte bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  ulong uVar10;
  undefined8 uVar11;
  char *pcVar12;
  long lVar13;
  undefined1 **ppuVar14;
  undefined1 **ppuVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined1 *puVar19;
  undefined1 *local_110;
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
  int *******local_80;
  ulong local_78;
  byte bStack_69;
  
  if (*(char *)(param_5 + 0x1f) < '\0') {
    uVar10 = FUN_00b196bc(*(undefined8 *)(param_5 + 8),*(undefined8 *)(param_5 + 0x10));
  }
  else {
    uVar10 = FUN_00b196bc(param_5 + 8);
  }
  if ((uVar10 & 1) != 0) {
    return;
  }
  lVar16 = *(long *)(param_5 + 0x110);
  lVar13 = *(long *)(param_5 + 0x118);
  if (lVar16 == lVar13) {
    bVar7 = false;
    if (lVar16 == lVar13) goto LAB_00cdc100;
  }
  else {
    do {
      iVar9 = FUN_00891b68(lVar16);
      lVar17 = lVar16;
      if (iVar9 == 4) break;
      lVar16 = lVar16 + 0xd8;
      lVar17 = lVar13;
    } while (lVar16 != lVar13);
    lVar13 = *(long *)(param_5 + 0x118);
    bVar7 = lVar17 != lVar13;
    lVar16 = *(long *)(param_5 + 0x110);
    if (lVar16 == lVar13) {
LAB_00cdc100:
      bVar8 = false;
      goto LAB_00cdc104;
    }
  }
  do {
    iVar9 = FUN_00891b68(lVar16);
    lVar17 = lVar16;
    if (iVar9 == 3) break;
    lVar16 = lVar16 + 0xd8;
    lVar17 = lVar13;
  } while (lVar16 != lVar13);
  bVar8 = lVar17 != *(long *)(param_5 + 0x118);
LAB_00cdc104:
  ppuVar14 = (undefined1 **)*param_1;
  ppuVar3 = (undefined1 **)param_1[1];
  if (ppuVar14 != ppuVar3) {
    do {
      puVar19 = (undefined1 *)(long)*(char *)((long)ppuVar14 + 0x17);
      ppuVar15 = ppuVar14;
      if ((long)puVar19 < 0) {
        puVar19 = ppuVar14[1];
        ppuVar15 = (undefined1 **)*ppuVar14;
      }
      puVar18 = (undefined8 *)*param_4;
      puVar4 = (undefined8 *)param_4[1];
      if (puVar18 == puVar4) {
LAB_00cdc1b8:
        if ((puVar18 == puVar4) || (puVar18 == (undefined8 *)0x0)) goto LAB_00cdc1f8;
        FUN_0088e6e8(puVar18,ppuVar14 + 3);
        uVar10 = *(ulong *)(param_5 + 0x60);
        if (uVar10 < *(ulong *)(param_5 + 0x68)) {
          if (uVar10 == 0) goto LAB_00cdc5c8;
          FUN_0088d2d8(uVar10,puVar18);
          lVar16 = uVar10 + 0x90;
        }
        else {
          lVar16 = FUN_00b16610(param_5 + 0x58,puVar18);
        }
        *(long *)(param_5 + 0x60) = lVar16;
      }
      else {
        do {
          bVar5 = *(byte *)((long)puVar18 + 0x17);
          puVar1 = (undefined1 *)puVar18[1];
          if (-1 < (char)bVar5) {
            puVar1 = (undefined1 *)(ulong)bVar5;
          }
          if (puVar19 == puVar1) {
            __s2 = (undefined8 *)*puVar18;
            if (-1 < (char)bVar5) {
              __s2 = puVar18;
            }
            iVar9 = memcmp(ppuVar15,__s2,(size_t)puVar19);
            if (iVar9 == 0) goto LAB_00cdc1b8;
          }
          puVar18 = puVar18 + 0x12;
        } while (puVar18 != puVar4);
LAB_00cdc1f8:
        if (ppuVar14[6] == ppuVar14[7]) {
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
          puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
          local_110 = &DAT_aaaaaaaaaaaaaaaa;
          FUN_0088d2b8(&local_110);
          if (&local_110 != ppuVar14) {
            bVar5 = *(byte *)((long)ppuVar14 + 0x17);
            if ((long)local_100 < 0) {
              puVar19 = ppuVar14[1];
              ppuVar15 = (undefined1 **)*ppuVar14;
              if (-1 < (char)bVar5) {
                puVar19 = (undefined1 *)(ulong)bVar5;
                ppuVar15 = ppuVar14;
              }
              FUN_00547f08(&local_110,ppuVar15,puVar19);
            }
            else if ((char)bVar5 < '\0') {
              FUN_00547fc0(&local_110,*ppuVar14,ppuVar14[1]);
            }
            else {
              local_100 = ppuVar14[2];
              puStack_108 = ppuVar14[1];
              local_110 = *ppuVar14;
            }
          }
          bVar6 = false;
          if (1 < *(int *)(ppuVar14 + 0xc)) {
            bVar6 = bVar8;
          }
          if (bVar6) {
            uVar10 = FUN_004022fc();
            if ((uVar10 & 1) == 0) {
              uVar11 = 0x572;
              pcVar12 = 
              "Our FlexFEC implementation only supports protecting a single media streams. This session has multiple media streams however, so no FlexFEC SSRC will be generated."
              ;
LAB_00cdc3dc:
              FUN_00623bb0(&DAT_001f4e98,"../../pc/media_session.cc",uVar11,pcVar12);
            }
LAB_00cdc490:
            uVar11 = 0;
          }
          else {
            if (!bVar8) goto LAB_00cdc490;
            (**(code **)(*param_6 + 0x10))(&local_80,param_6,"WebRTC-FlexFEC-03",0x11);
            uVar10 = local_78;
            if (-1 < (char)bStack_69) {
              uVar10 = (ulong)bStack_69;
            }
            if (uVar10 < 7) {
              bVar6 = false;
            }
            else {
              pppppppiVar2 = local_80;
              if (-1 < (char)bStack_69) {
                pppppppiVar2 = (int *******)&local_80;
              }
              bVar6 = *(int *)pppppppiVar2 == 0x62616e45 &&
                      *(int *)((long)pppppppiVar2 + 3) == 0x64656c62;
            }
            if ((char)bStack_69 < '\0') {
              operator_delete(local_80);
            }
            if (!bVar6) {
              uVar10 = FUN_004022fc();
              if ((uVar10 & 1) == 0) {
                uVar11 = 0x5aa;
                pcVar12 = "WebRTC-FlexFEC trial is not enabled, not sending FlexFEC";
                goto LAB_00cdc3dc;
              }
              goto LAB_00cdc490;
            }
            uVar11 = 1;
          }
          FUN_0088de20(&local_110,*(undefined4 *)(ppuVar14 + 0xc),bVar7,uVar11,param_3);
          if (&puStack_c8 != param_2) {
            bVar5 = *(byte *)((long)param_2 + 0x17);
            if ((long)puStack_b8 < 0) {
              puVar19 = param_2[1];
              ppuVar15 = (undefined1 **)*param_2;
              if (-1 < (char)bVar5) {
                puVar19 = (undefined1 *)(ulong)bVar5;
                ppuVar15 = param_2;
              }
              FUN_00547f08(&puStack_c8,ppuVar15,puVar19);
            }
            else if ((char)bVar5 < '\0') {
              FUN_00547fc0(&puStack_c8,*param_2,param_2[1]);
            }
            else {
              local_c0 = param_2[1];
              puStack_c8 = *param_2;
              puStack_b8 = param_2[2];
            }
          }
          FUN_0088e6e8(&local_110,ppuVar14 + 3);
        }
        else {
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
          puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
          local_110 = &DAT_aaaaaaaaaaaaaaaa;
          FUN_0088d2b8(&local_110);
          if (&local_110 != ppuVar14) {
            bVar5 = *(byte *)((long)ppuVar14 + 0x17);
            if ((long)local_100 < 0) {
              puVar19 = ppuVar14[1];
              ppuVar15 = (undefined1 **)*ppuVar14;
              if (-1 < (char)bVar5) {
                puVar19 = (undefined1 *)(ulong)bVar5;
                ppuVar15 = ppuVar14;
              }
              FUN_00547f08(&local_110,ppuVar15,puVar19);
            }
            else if ((char)bVar5 < '\0') {
              FUN_00547fc0(&local_110,*ppuVar14,ppuVar14[1]);
            }
            else {
              local_100 = ppuVar14[2];
              puStack_108 = ppuVar14[1];
              local_110 = *ppuVar14;
            }
          }
          if (&puStack_c8 != param_2) {
            bVar5 = *(byte *)((long)param_2 + 0x17);
            if ((long)puStack_b8 < 0) {
              puVar19 = param_2[1];
              ppuVar15 = (undefined1 **)*param_2;
              if (-1 < (char)bVar5) {
                puVar19 = (undefined1 *)(ulong)bVar5;
                ppuVar15 = param_2;
              }
              FUN_00547f08(&puStack_c8,ppuVar15,puVar19);
            }
            else if ((char)bVar5 < '\0') {
              FUN_00547fc0(&puStack_c8,*param_2,param_2[1]);
            }
            else {
              local_c0 = param_2[1];
              puStack_c8 = *param_2;
              puStack_b8 = param_2[2];
            }
          }
          FUN_0088e6e8(&local_110,ppuVar14 + 3);
          if ((1 < (ulong)(((long)ppuVar14[7] - (long)ppuVar14[6] >> 4) * -0x3333333333333333)) &&
             (&puStack_98 != ppuVar14 + 6)) {
            FUN_0088ec84(&puStack_98);
          }
        }
        uVar10 = *(ulong *)(param_5 + 0x60);
        if (uVar10 < *(ulong *)(param_5 + 0x68)) {
          if (uVar10 == 0) goto LAB_00cdc5c8;
          FUN_0088d2d8(uVar10,&local_110);
          lVar16 = uVar10 + 0x90;
        }
        else {
          lVar16 = FUN_00b16610(param_5 + 0x58,&local_110);
        }
        *(long *)(param_5 + 0x60) = lVar16;
        uVar10 = param_4[1];
        if (uVar10 < (ulong)param_4[2]) {
          if (uVar10 == 0) {
LAB_00cdc5c8:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          FUN_0088d2d8(uVar10,&local_110);
          lVar16 = uVar10 + 0x90;
        }
        else {
          lVar16 = FUN_00b16610(param_4,&local_110);
        }
        param_4[1] = lVar16;
        FUN_0088d578(&local_110);
      }
      ppuVar14 = ppuVar14 + 0xd;
    } while (ppuVar14 != ppuVar3);
  }
  return;
}


// ===== 00cdc5dc  FUN_00cdc5dc =====

void FUN_00cdc5dc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  void *local_60;
  long lStack_58;
  undefined8 local_50;
  void *pvStack_48;
  long lStack_40;
  undefined8 local_38;
  
  lVar2 = *(long *)(param_2 + 0x58);
  lVar1 = lVar2;
  while( true ) {
    if (lVar1 == *(long *)(param_2 + 0x60)) {
      return;
    }
    if (*(long *)(lVar1 + 0x78) != *(long *)(lVar1 + 0x80)) break;
    lVar1 = lVar1 + 0x90;
  }
  if ((ulong)((*(long *)(lVar2 + 0x80) - *(long *)(lVar2 + 0x78) >> 4) * -0x3333333333333333) < 2) {
    return;
  }
  lVar1 = *(long *)(param_1 + 0x28);
  pvStack_48 = (void *)0x0;
  local_50 = 0;
  local_38 = 0;
  lStack_40 = 0;
  lStack_58 = 0;
  local_60 = (void *)0x0;
  if (*(long *)(param_1 + 0x30) == lVar1) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
              );
  }
  if (&local_60 != (void **)(lVar1 + 0x48)) {
    FUN_00b15650(&local_60,*(long *)(lVar1 + 0x48),*(long *)(lVar1 + 0x50),
                 (*(long *)(lVar1 + 0x50) - *(long *)(lVar1 + 0x48) >> 3) * -0x5555555555555555);
  }
  if ((void **)(param_2 + 200) != &local_60) {
    FUN_00b15650(param_2 + 200,local_60,lStack_58,
                 (lStack_58 - (long)local_60 >> 3) * -0x5555555555555555);
    FUN_00b15650(param_2 + 0xe0,pvStack_48,lStack_40,
                 (lStack_40 - (long)pvStack_48 >> 3) * -0x5555555555555555);
  }
  if (pvStack_48 != (void *)0x0) {
    FUN_00b0e588(&pvStack_48);
    operator_delete(pvStack_48);
  }
  if (local_60 == (void *)0x0) {
    return;
  }
  FUN_00b0e588(&local_60);
  operator_delete(local_60);
  return;
}


// ===== 00cdc740  FUN_00cdc740 =====

void FUN_00cdc740(undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  size_t __n;
  undefined8 *__dest;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_00d42f58;
  param_1[1] = 0;
  param_1[4] = 0xffffffff00000000;
  puVar3 = PTR_DAT_00d52308;
  __n = strlen(PTR_DAT_00d52308);
  if (0x7ffffffffffffff6 < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (__n < 0x17) {
    __dest = param_1 + 5;
    *(char *)((long)param_1 + 0x3f) = (char)__n;
  }
  else {
    uVar1 = (__n & 0x7ffffffffffffff8) + 8;
    uVar2 = 0x19;
    if (uVar1 != 0x18) {
      uVar2 = uVar1;
    }
    __dest = (undefined8 *)operator_new(uVar2);
    param_1[5] = __dest;
    param_1[6] = __n;
    param_1[7] = uVar2 | 0x8000000000000000;
  }
  if (__dest <= (undefined8 *)((long)__dest + __n)) {
    if ((__dest <= puVar3) && (puVar3 < (undefined8 *)((long)__dest + __n))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                );
    }
    memcpy(__dest,PTR_DAT_00d52308,__n);
    *(undefined1 *)((long)__dest + __n) = 0;
    *(undefined4 *)((long)param_1 + 0x74) = 0;
    *(undefined1 *)(param_1 + 0xe) = 0;
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    FUN_007e8a64(param_1 + 0xf);
    param_1[0x1a] = 0;
    param_1[0x19] = 0;
    *(undefined4 *)(param_1 + 0x18) = 2;
    param_1[0x1c] = 0;
    param_1[0x1b] = 0;
    param_1[0x1e] = 0;
    param_1[0x1d] = 0;
    param_1[0x20] = 0;
    param_1[0x1f] = 0;
    param_1[0x22] = 0;
    param_1[0x21] = 0;
    param_1[0x24] = 0;
    param_1[0x23] = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
            );
}


// ===== 00cdc888  FUN_00cdc888 =====

void FUN_00cdc888(undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *__dest;
  
  FUN_00cdc740();
  *param_1 = &PTR_FUN_00d432a0;
  if (0x7ffffffffffffff6 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  if (param_3 < 0x17) {
    __dest = param_1 + 0x25;
    *(char *)((long)param_1 + 0x13f) = (char)param_3;
  }
  else {
    uVar1 = (param_3 & 0x7ffffffffffffff8) + 8;
    uVar2 = 0x19;
    if (uVar1 != 0x18) {
      uVar2 = uVar1;
    }
    __dest = (undefined8 *)operator_new(uVar2);
    param_1[0x25] = __dest;
    param_1[0x26] = param_3;
    param_1[0x27] = uVar2 | 0x8000000000000000;
  }
  if (__dest <= (undefined8 *)((long)__dest + param_3)) {
    if ((__dest <= param_2) && (param_2 < (undefined8 *)((long)__dest + param_3))) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                );
    }
    memmove(__dest,param_2,param_3);
    *(undefined1 *)((long)__dest + param_3) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
            );
}


// ===== 00cdc980  FUN_00cdc980 =====

void FUN_00cdc980(undefined8 *param_1,long *param_2,undefined8 param_3,byte param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,long param_10)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_00d50100;
  lVar1 = *param_2;
  param_1[1] = lVar1;
  if (lVar1 != 0) {
    FUN_00d0f740(1,lVar1 + 8);
  }
  lVar2 = param_2[4];
  lVar1 = param_2[3];
  lVar4 = param_2[2];
  lVar3 = param_2[1];
  param_1[10] = 0;
  param_1[3] = lVar4;
  param_1[2] = lVar3;
  param_1[5] = lVar2;
  param_1[4] = lVar1;
  param_1[8] = 0;
  param_1[9] = param_1 + 10;
  param_1[0xd] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = param_1 + 0xd;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  *(byte *)((long)param_1 + 0xd9) = param_4 & 1;
  param_1[0x1c] = param_3;
  param_1[0x1d] = param_5;
  param_1[0x1e] = param_6;
  param_1[0x1f] = param_7;
  param_1[0x20] = param_8;
  param_1[0x21] = param_9;
  (**(code **)(param_10 + 0x10))(1,param_10,param_1 + 0x22);
  param_1[0x24] = *(undefined8 *)(param_10 + 0x10);
  param_1[0x25] = *(undefined8 *)(param_10 + 0x18);
  *(code **)(param_10 + 0x10) = FUN_00433984;
  *(undefined8 *)(param_10 + 0x18) = 0;
  FUN_009881bc(param_1 + 0x26);
  param_1[0x27] = param_1;
  return;
}


// ===== 00cdcaa4  FUN_00cdcaa4 =====

void FUN_00cdcaa4(long param_1)

{
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined1 *)(param_1 + 0xd8) = 1;
  return;
}


// ===== 00cdcab8  FUN_00cdcab8 =====

void FUN_00cdcab8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00cdcac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x128))(param_1 + 0x110);
  return;
}


// ===== 00cdcac8  FUN_00cdcac8 =====

undefined8 FUN_00cdcac8(void)

{
  undefined8 uVar1;
  long *local_28;
  
  FUN_00cdcb20(&local_28);
  uVar1 = FUN_00c0f23c(local_28[2]);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 8))(local_28);
  }
  return uVar1;
}


// ===== 00cdcb20  FUN_00cdcb20 =====

void FUN_00cdcb20(undefined8 *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  lVar9 = *(long *)(param_2 + 0x30);
  lVar1 = *(long *)(param_2 + 0x38);
  uVar2 = lVar1 - lVar9;
  if (uVar2 != 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00bf3e88();
    }
    puVar5 = (undefined8 *)operator_new(uVar2);
    lVar8 = 0;
    do {
      if ((long *)((long)puVar5 + lVar8) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      puVar6 = *(undefined8 **)(lVar9 + lVar8);
      *(long *)((long)puVar5 + lVar8) = (long)puVar6;
      if (puVar6 != (undefined8 *)0x0) {
        (**(code **)*puVar6)();
      }
      lVar8 = lVar8 + 8;
    } while (lVar9 + lVar8 != lVar1);
    lVar9 = lVar8;
    puVar6 = puVar5;
    if (lVar8 == 0) {
      bVar3 = true;
    }
    else {
      do {
        plVar7 = (long *)*puVar6;
        if (plVar7 != (long *)0x0) {
          (**(code **)*plVar7)(plVar7);
        }
        iVar4 = (**(code **)(*plVar7 + 0x20))(plVar7);
        bVar3 = iVar4 != 0;
        if (iVar4 == 0) break;
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 8))(plVar7);
        }
        lVar9 = lVar9 + -8;
        puVar6 = puVar6 + 1;
      } while (lVar9 != 0);
      *param_1 = plVar7;
    }
    if (puVar5 != (undefined8 *)0x0) {
      if (lVar8 != 0) {
        plVar7 = (long *)((long)puVar5 + lVar8);
        lVar8 = -lVar8;
        do {
          plVar7 = plVar7 + -1;
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
          if ((long *)*plVar7 != (long *)0x0) {
            (**(code **)(*(long *)*plVar7 + 8))();
          }
          lVar8 = lVar8 + 8;
        } while (lVar8 != 0);
      }
      operator_delete(puVar5);
    }
    if (!bVar3) {
      return;
    }
  }
  *param_1 = 0;
  return;
}


// ===== 00cdccac  FUN_00cdccac =====

undefined8 FUN_00cdccac(void)

{
  undefined8 uVar1;
  long *local_28;
  
  FUN_00cdcd04(&local_28);
  uVar1 = FUN_00c0f220(local_28[2]);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 8))(local_28);
  }
  return uVar1;
}


// ===== 00cdcd04  FUN_00cdcd04 =====

void FUN_00cdcd04(undefined8 *param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  lVar9 = *(long *)(param_2 + 0x30);
  lVar2 = *(long *)(param_2 + 0x38);
  uVar3 = lVar2 - lVar9;
  if (uVar3 != 0) {
    if ((long)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00bf3e88();
    }
    puVar5 = (undefined8 *)operator_new(uVar3);
    lVar8 = 0;
    do {
      if ((long *)((long)puVar5 + lVar8) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      puVar6 = *(undefined8 **)(lVar9 + lVar8);
      *(long *)((long)puVar5 + lVar8) = (long)puVar6;
      if (puVar6 != (undefined8 *)0x0) {
        (**(code **)*puVar6)();
      }
      lVar8 = lVar8 + 8;
    } while (lVar9 + lVar8 != lVar2);
    lVar9 = lVar8;
    puVar6 = puVar5;
    if (lVar8 == 0) {
      bVar1 = true;
    }
    else {
      do {
        plVar7 = (long *)*puVar6;
        if (plVar7 != (long *)0x0) {
          (**(code **)*plVar7)(plVar7);
        }
        iVar4 = (**(code **)(*plVar7 + 0x20))(plVar7);
        bVar1 = iVar4 != 1;
        if (iVar4 == 1) break;
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 8))(plVar7);
        }
        lVar9 = lVar9 + -8;
        puVar6 = puVar6 + 1;
      } while (lVar9 != 0);
      *param_1 = plVar7;
    }
    if (puVar5 != (undefined8 *)0x0) {
      if (lVar8 != 0) {
        plVar7 = (long *)((long)puVar5 + lVar8);
        lVar8 = -lVar8;
        do {
          plVar7 = plVar7 + -1;
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
          if ((long *)*plVar7 != (long *)0x0) {
            (**(code **)(*(long *)*plVar7 + 8))();
          }
          lVar8 = lVar8 + 8;
        } while (lVar8 != 0);
      }
      operator_delete(puVar5);
    }
    if (!bVar1) {
      return;
    }
  }
  *param_1 = 0;
  return;
}


// ===== 00cdce90  FUN_00cdce90 =====

/* WARNING: Removing unreachable block (ram,0x00cdd5e0) */
/* WARNING: Removing unreachable block (ram,0x00cdd5f8) */
/* WARNING: Removing unreachable block (ram,0x00cdd1bc) */
/* WARNING: Removing unreachable block (ram,0x00cdd1e4) */
/* WARNING: Removing unreachable block (ram,0x00cdd594) */
/* WARNING: Type propagation algorithm not settling */

void FUN_00cdce90(undefined4 *param_1,long param_2,long *param_3,undefined8 *param_4,long *param_5)

{
  size_t sVar1;
  long *__s1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  long *******ppppppplVar5;
  void *pvVar6;
  long *******ppppppplVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  undefined8 uVar11;
  long *plVar12;
  void *pvVar13;
  long *plVar14;
  undefined1 auVar15 [8];
  undefined4 uVar16;
  ulong uVar17;
  long *plVar18;
  long ******pppppplVar19;
  size_t sVar20;
  undefined8 *puVar21;
  long lVar22;
  long lVar23;
  void *local_108;
  void *local_100;
  void *local_f8;
  long *local_f0;
  long *local_e8;
  long *******local_e0;
  long *plStack_d8;
  long *plStack_d0;
  undefined5 local_c8;
  undefined2 uStack_c3;
  undefined4 uStack_c1;
  undefined1 uStack_bd;
  undefined1 uStack_bc;
  undefined1 uStack_bb;
  undefined1 uStack_ba;
  undefined4 local_b8 [2];
  long *local_b0;
  long *plStack_a8;
  long local_a0;
  undefined4 local_98;
  undefined3 uStack_94;
  undefined1 local_90 [8];
  long *local_88;
  long *plStack_80;
  long local_78;
  undefined4 local_70;
  undefined3 uStack_6c;
  
  plVar12 = (long *)*param_4;
  plVar14 = (long *)param_4[1];
  if (1 < (ulong)(((long)plVar14 - (long)plVar12 >> 3) * -0x5555555555555555)) {
    uStack_ba = 0;
    local_e0 = (long *******)CONCAT44(local_e0._4_4_,1);
    plStack_d0 = (long *)0x0;
    local_c8 = 0;
    plStack_d8 = (long *)0x0;
    uStack_c3 = 0;
    uStack_c1 = 0;
    uStack_bd = 0;
    uStack_bc = 0;
    FUN_00547cac(&plStack_d8,
                 "AddTrack with more than one stream is not supported with Plan B semantics.",0x4a);
    local_b8[0] = local_e0._0_4_;
    if ((char)uStack_c1 < '\0') {
      FUN_005478d8(&local_b0,plStack_d8,plStack_d0);
    }
    else {
      local_a0 = CONCAT17((char)uStack_c1,CONCAT25(uStack_c3,local_c8));
      plStack_a8 = plStack_d0;
      local_b0 = plStack_d8;
    }
    local_98 = CONCAT13(uStack_bd,uStack_c1._1_3_);
    uStack_94 = (undefined3)
                (CONCAT13(uStack_ba,CONCAT12(uStack_bb,CONCAT11(uStack_bc,uStack_bd))) >> 8);
    uVar11 = FUN_005ecd5c(local_b8);
    _local_90 = FUN_005eceec(local_b8[0]);
    FUN_00623bb0(&DAT_00255ab0,"../../pc/rtp_transmission_manager.cc",0x56b,uVar11,&DAT_001a2df6,
                 local_90,&DAT_001ca519);
    local_90._0_4_ = local_b8[0];
    if (local_a0 < 0) {
      FUN_005478d8(&local_88,local_b0,plStack_a8);
      uVar16 = local_90._0_4_;
    }
    else {
      plStack_80 = plStack_a8;
      local_88 = local_b0;
      local_78 = local_a0;
      uVar16 = local_b8[0];
    }
    *param_1 = uVar16;
    local_70 = local_98;
    uStack_6c = uStack_94;
    *(undefined1 *)(param_1 + 10) = 0;
    *(long **)(param_1 + 4) = plStack_80;
    *(long **)(param_1 + 2) = local_88;
    *(long *)(param_1 + 6) = local_78;
    param_1[8] = local_98;
    *(uint *)((long)param_1 + 0x23) = CONCAT31(uStack_94,local_98._3_1_);
    *(undefined1 *)(param_1 + 0xc) = 0;
    if (local_a0 < 0) {
      operator_delete(local_b0);
      auVar15 = (undefined1  [8])plStack_d8;
    }
    else {
      auVar15 = (undefined1  [8])plStack_d8;
    }
    plStack_d8 = (long *)auVar15;
    if (-1 < (char)uStack_c1) {
      return;
    }
    goto LAB_00cdd5b8;
  }
  local_90 = (undefined1  [8])0x0;
  local_88 = (long *)0x0;
  plStack_80 = (long *)0x0;
  if (plVar12 == plVar14) {
    FUN_00835cc0(&local_e0);
    if (local_88 < plStack_80) {
      if (local_88 == (long *)0x0) goto LAB_00cdd5fc;
      plVar12 = local_88 + 3;
      local_88[2] = (long)plStack_d0;
      local_88[1] = (long)plStack_d8;
      *local_88 = (long)local_e0;
      plStack_d8 = (long *)0x0;
      plStack_d0 = (long *)0x0;
      local_e0 = (long *******)0x0;
    }
    else {
      plVar12 = (long *)FUN_00ad3390(local_90,&local_e0);
    }
    local_88 = plVar12;
    if ((long)plStack_d0 < 0) {
      operator_delete(local_e0);
    }
  }
  else {
    local_90 = (undefined1  [8])operator_new((long)plVar14 - (long)plVar12);
    plStack_80 = (long *)((long)local_90 + ((long)plVar14 - (long)plVar12));
    plVar18 = (long *)local_90;
    local_88 = (long *)local_90;
    do {
      if (local_90 != (undefined1  [8])plVar18) {
        auVar15 = local_90;
        sVar20 = plVar12[1];
        plVar10 = (long *)*plVar12;
        if (-1 < (char)*(byte *)((long)plVar12 + 0x17)) {
          sVar20 = (ulong)*(byte *)((long)plVar12 + 0x17);
          plVar10 = plVar12;
        }
        do {
          bVar4 = *(byte *)((long)auVar15 + 0x17);
          sVar1 = *(size_t *)((long)auVar15 + 8);
          if (-1 < (char)bVar4) {
            sVar1 = (ulong)bVar4;
          }
          if (sVar1 == sVar20) {
            __s1 = *(long **)auVar15;
            if (-1 < (char)bVar4) {
              __s1 = (long *)auVar15;
            }
            iVar8 = memcmp(__s1,plVar10,sVar20);
            if (iVar8 == 0) {
              plVar10 = plVar18;
              if (auVar15 != (undefined1  [8])plVar18) goto LAB_00cdcf7c;
              break;
            }
          }
          auVar15 = (undefined1  [8])((long)auVar15 + 0x18);
        } while (auVar15 != (undefined1  [8])plVar18);
      }
      if (plVar18 < plStack_80) {
        if (plVar18 == (long *)0x0) goto LAB_00cdd5fc;
        if (*(char *)((long)plVar12 + 0x17) < '\0') {
          FUN_005478d8(plVar18,*plVar12,plVar12[1]);
          plVar10 = plVar18 + 3;
          local_88 = plVar10;
        }
        else {
          lVar23 = plVar12[1];
          lVar22 = *plVar12;
          plVar18[2] = plVar12[2];
          plVar10 = plVar18 + 3;
          plVar18[1] = lVar23;
          *plVar18 = lVar22;
          local_88 = plVar10;
        }
      }
      else {
        plVar10 = (long *)FUN_009d56fc(local_90,plVar12);
        local_88 = plVar10;
      }
LAB_00cdcf7c:
      plVar12 = plVar12 + 3;
      plVar18 = plVar10;
    } while (plVar12 != plVar14);
  }
  iVar8 = FUN_00cdd64c(param_3);
  if (iVar8 == 0) {
    FUN_00cdcb20(&local_e0,param_2);
  }
  else {
    FUN_00cdcd04(param_2);
  }
  pppppplVar19 = local_e0[2];
  if (local_e0 != (long *******)0x0) {
    (*(code *)(*local_e0)[1])();
  }
  plVar12 = (long *)*param_3;
  local_e8 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  local_f0 = plVar12;
  if (plVar12 != (long *)0x0) {
    (**(code **)*plVar12)();
    plVar12 = (long *)*param_3;
  }
  (**(code **)(*plVar12 + 0x28))(&local_e0);
  plVar12 = plStack_d8;
  ppppppplVar5 = local_e0;
  if (-1 < (long)plStack_d0) {
    plVar12 = (long *)((ulong)plStack_d0 >> 0x38);
    ppppppplVar5 = (long *******)&local_e0;
  }
  if (param_5 == (long *)0x0) {
    local_108 = operator_new(0x130);
    pvVar13 = (void *)((long)local_108 + 0x130);
    local_100 = local_108;
    local_f8 = pvVar13;
    if (local_108 == (void *)0x0) {
LAB_00cdd5fc:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    FUN_00668fb0();
  }
  else {
    lVar22 = *param_5;
    lVar23 = param_5[1];
    local_108 = (void *)0x0;
    local_100 = (void *)0x0;
    local_f8 = (void *)0x0;
    uVar17 = lVar23 - lVar22;
    pvVar13 = local_100;
    if (uVar17 != 0) {
      if (0xd79435e50d7943 < (ulong)(((long)uVar17 >> 4) * -0x79435e50d79435e5)) {
                    /* WARNING: Subroutine does not return */
        FUN_0066a5d8();
      }
      pvVar13 = operator_new(uVar17);
      local_f8 = (void *)((long)pvVar13 + uVar17);
      local_108 = pvVar13;
      local_100 = pvVar13;
      do {
        if (pvVar13 == (void *)0x0) goto LAB_00cdd5fc;
        FUN_00669028(pvVar13,lVar22);
        lVar22 = lVar22 + 0x130;
        pvVar13 = (void *)((long)pvVar13 + 0x130);
      } while (lVar22 != lVar23);
    }
  }
  local_100 = pvVar13;
  FUN_00c0c544(&local_e8,pppppplVar19,&local_f0,ppppppplVar5,plVar12,local_90,&local_108);
  pvVar6 = local_108;
  pvVar13 = local_100;
  if (local_108 != (void *)0x0) {
    while (pvVar6 != pvVar13) {
      pvVar13 = (void *)((long)pvVar13 + -0x130);
      if (pvVar13 == (void *)0x0) goto LAB_00cdd610;
      FUN_0066919c(pvVar13);
    }
    local_100 = pvVar6;
    operator_delete(local_108);
  }
  if ((long)plStack_d0 < 0) {
    operator_delete(local_e0);
  }
  if (local_f0 != (long *)0x0) {
    (**(code **)(*local_f0 + 8))();
  }
  lVar22 = 0xa8;
  if (iVar8 != 0) {
    lVar22 = 0xc0;
  }
  if ((undefined1  [8])local_88 == local_90) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
              );
  }
  sVar20 = (size_t)*(char *)((long)local_90 + 0x17);
  auVar15 = local_90;
  if ((long)sVar20 < 0) {
    auVar15 = *(undefined1 (*) [8])local_90;
    sVar20 = *(size_t *)((long)local_90 + 8);
  }
  (**(code **)(*(long *)*param_3 + 0x28))(&local_e0);
  plVar14 = plStack_d0;
  ppppppplVar7 = local_e0;
  puVar21 = *(undefined8 **)(param_2 + lVar22);
  puVar3 = (undefined8 *)((undefined8 *)(param_2 + lVar22))[1];
  plVar12 = plStack_d8;
  ppppppplVar5 = local_e0;
  if (-1 < (long)plStack_d0) {
    plVar12 = (long *)((ulong)plStack_d0 >> 0x38);
    ppppppplVar5 = (long *******)&local_e0;
  }
  if (puVar21 == puVar3) {
LAB_00cdd41c:
    if (puVar21 == puVar3) goto LAB_00cdd4b8;
    uVar17 = (ulong)*(uint *)(puVar21 + 6) | 0x100000000;
  }
  else {
    do {
      bVar4 = *(byte *)((long)puVar21 + 0x17);
      uVar17 = puVar21[1];
      if (-1 < (char)bVar4) {
        uVar17 = (ulong)bVar4;
      }
      if (sVar20 == uVar17) {
        puVar2 = (undefined8 *)*puVar21;
        if (-1 < (char)bVar4) {
          puVar2 = puVar21;
        }
        iVar9 = memcmp((void *)auVar15,puVar2,sVar20);
        if (iVar9 == 0) {
          bVar4 = *(byte *)((long)puVar21 + 0x2f);
          plVar18 = (long *)puVar21[4];
          if (-1 < (char)bVar4) {
            plVar18 = (long *)(ulong)bVar4;
          }
          if (plVar12 == plVar18) {
            puVar2 = (undefined8 *)puVar21[3];
            if (-1 < (char)bVar4) {
              puVar2 = puVar21 + 3;
            }
            iVar9 = memcmp(ppppppplVar5,puVar2,(size_t)plVar12);
            if (iVar9 == 0) goto LAB_00cdd41c;
          }
        }
      }
      puVar21 = puVar21 + 7;
    } while (puVar21 != puVar3);
LAB_00cdd4b8:
    uVar17 = 0;
  }
  if ((long)plVar14 < 0) {
    operator_delete(ppppppplVar7);
  }
  if (uVar17 >> 0x20 != 0) {
    (**(code **)(*(long *)local_e8[3] + 200))((long *)local_e8[3],uVar17 & 0xffffffff);
  }
  uVar16 = 8;
  if (iVar8 != 0) {
    uVar16 = 0x10;
  }
  FUN_00ce1c44(*(undefined8 *)(param_2 + 0xf8),uVar16);
  plVar12 = local_e8;
  if (local_e8 == (long *)0x0) {
    plVar14 = (long *)0x0;
  }
  else {
    (**(code **)*local_e8)(local_e8);
    plVar14 = local_e8;
  }
  *param_1 = 0;
  *(undefined1 *)((long)param_1 + 0x26) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)((long)param_1 + 0x1d) = 0;
  *(long **)(param_1 + 10) = plVar12;
  *(undefined1 *)(param_1 + 0xc) = 1;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 8))();
  }
  plVar12 = local_88;
  if (local_90 == (undefined1  [8])0x0) {
    return;
  }
  while (local_90 != (undefined1  [8])plVar12) {
    plVar12 = plVar12 + -3;
    if (plVar12 == (long *)0x0) {
LAB_00cdd610:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
  }
  local_88 = (long *)local_90;
  auVar15 = local_90;
LAB_00cdd5b8:
  operator_delete((void *)auVar15);
  return;
}


// ===== 00cdd64c  FUN_00cdd64c =====

bool FUN_00cdd64c(undefined8 *param_1)

{
  undefined *__s2;
  bool bVar1;
  int iVar2;
  size_t __n;
  void *local_38;
  size_t local_30;
  char cStack_21;
  
  (**(code **)(*(long *)*param_1 + 0x20))(&local_38);
  __s2 = PTR_s_audio_00d48a78;
  if (PTR_s_audio_00d48a78 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/string:3571: libc++ Hardening assertion __rhs != nullptr failed: operator==(basic_string, char*): received nullptr\n"
              );
  }
  __n = strlen(PTR_s_audio_00d48a78);
  if ((long)cStack_21 < 0) {
    if (__n == local_30) {
      if (__n == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
        FUN_005f5590();
      }
      iVar2 = memcmp(local_38,__s2,__n);
      bVar1 = iVar2 != 0;
    }
    else {
      bVar1 = true;
    }
    operator_delete(local_38);
  }
  else if (__n == (long)cStack_21) {
    iVar2 = memcmp(&local_38,__s2,__n);
    bVar1 = iVar2 != 0;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}


// ===== 00cdd730  FUN_00cdd730 =====

/* WARNING: Removing unreachable block (ram,0x00cdd9b4) */
/* WARNING: Removing unreachable block (ram,0x00cddd60) */
/* WARNING: Removing unreachable block (ram,0x00cddccc) */
/* WARNING: Removing unreachable block (ram,0x00cdddc0) */
/* WARNING: Removing unreachable block (ram,0x00cdde4c) */
/* WARNING: Removing unreachable block (ram,0x00cdde64) */
/* WARNING: Removing unreachable block (ram,0x00cdd934) */
/* WARNING: Removing unreachable block (ram,0x00cddc7c) */
/* WARNING: Removing unreachable block (ram,0x00cdd830) */
/* WARNING: Type propagation algorithm not settling */

void FUN_00cdd730(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8,
                 undefined8 param_9,long *param_10)

{
  undefined1 *puVar1;
  long lVar2;
  long *******ppppppplVar3;
  void *pvVar4;
  undefined4 uVar5;
  int iVar6;
  ulong uVar7;
  void *pvVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined1 local_228 [8];
  undefined1 *puStack_220;
  void **ppvStack_218;
  long local_210;
  undefined4 local_208;
  undefined3 uStack_204;
  void *local_f8;
  void *local_f0;
  void *local_e8;
  long *local_e0;
  long *local_d8;
  long *******local_d0;
  undefined1 *puStack_c8;
  void **ppvStack_c0;
  undefined5 local_b8;
  undefined3 uStack_b3;
  undefined4 local_b0;
  undefined1 uStack_ac;
  undefined1 uStack_ab;
  undefined1 local_aa;
  undefined4 local_a8 [2];
  undefined1 *local_a0;
  void **ppvStack_98;
  long local_90;
  undefined4 local_88;
  undefined3 uStack_84;
  long *local_80;
  long *local_78 [3];
  
  plVar10 = (long *)*param_8;
  local_78[0] = (long *)&DAT_aaaaaaaaaaaaaaaa;
  local_80 = plVar10;
  if (plVar10 == (long *)0x0) {
    FUN_00cddea4(local_78,param_2,&local_80,param_10);
    if (local_78[0] == (long *)0x0) goto LAB_00cdd8cc;
LAB_00cdd7c8:
    plVar10 = local_78[0];
    uVar7 = FUN_00417e08();
    if ((uVar7 & 1) == 0) {
      local_228 = (undefined1  [8])0x1c77ec;
      puStack_220 = (undefined1 *)0x6f1;
      ppvStack_218 = &local_f8;
      (**(code **)(*plVar10 + 0x20))(plVar10);
      FUN_00667e40(&local_d0);
      FUN_00623bb0(&DAT_001f4eff,local_228,(ulong)puStack_220 & 0xffffffff,"Reusing an existing ",
                   &local_d0," transceiver for AddTrack.");
    }
    uVar7 = (**(code **)(*plVar10 + 0x48))(plVar10);
    if ((uVar7 & 1) != 0) {
      local_aa = 0;
      local_d0 = (long *******)CONCAT44(local_d0._4_4_,3);
      puStack_c8 = (undefined1 *)0x0;
      ppvStack_c0 = (void **)0x0;
      local_b8 = 0;
      uStack_b3 = 0;
      local_b0 = 0;
      uStack_ac = 0;
      FUN_00547cac(&puStack_c8,"The existing transceiver is stopping.",0x25);
      local_a8[0] = local_d0._0_4_;
      local_90 = CONCAT35(uStack_b3,local_b8);
      ppvStack_98 = ppvStack_c0;
      local_a0 = puStack_c8;
      uStack_84 = CONCAT12(local_aa,CONCAT11(uStack_ab,uStack_ac));
      local_88 = local_b0;
      uVar9 = FUN_005ecd5c(local_a8);
      _local_228 = FUN_005eceec(local_a8[0]);
      FUN_00623bb0(&DAT_00255ab0,"../../pc/rtp_transmission_manager.cc",0x71b,uVar9,&DAT_001a2df6,
                   local_228,&DAT_001ca519);
      local_228._0_4_ = local_a8[0];
      ppvStack_218 = ppvStack_98;
      puStack_220 = local_a0;
      local_210 = local_90;
      *param_1 = local_a8[0];
      local_208 = local_88;
      uStack_204 = uStack_84;
      if (local_90 < 0) {
        FUN_005478d8(param_1 + 2,local_a0,ppvStack_98);
        *(undefined1 *)(param_1 + 10) = 0;
        param_1[8] = local_208;
        *(uint *)((long)param_1 + 0x23) = CONCAT31(uStack_204,local_208._3_1_);
        *(undefined1 *)(param_1 + 0xc) = 0;
        if (local_210 < 0) {
          operator_delete(puStack_220);
        }
      }
      else {
        *(undefined1 *)(param_1 + 10) = 0;
        *(void ***)(param_1 + 4) = ppvStack_98;
        *(undefined1 **)(param_1 + 2) = local_a0;
        *(long *)(param_1 + 6) = local_90;
        param_1[8] = local_88;
        *(uint *)((long)param_1 + 0x23) = CONCAT31(uStack_84,local_88._3_1_);
        *(undefined1 *)(param_1 + 0xc) = 0;
      }
      goto LAB_00cdde00;
    }
    iVar6 = (**(code **)(*plVar10 + 0x50))(plVar10);
    if (iVar6 == 2) {
      uVar5 = 0;
LAB_00cddad0:
      *(undefined4 *)(plVar10[2] + 0x84) = uVar5;
    }
    else {
      iVar6 = (**(code **)(*plVar10 + 0x50))(plVar10);
      if (iVar6 == 3) {
        uVar5 = 1;
        goto LAB_00cddad0;
      }
    }
    (**(code **)(*plVar10 + 0x30))(local_228,plVar10);
    (*(code *)(*(long *******)local_228)[4])(local_228,*param_8);
    if (local_228 != (undefined1  [8])0x0) {
      (*(code *)(*(long *******)local_228)[1])();
    }
    FUN_00c0ca58(local_228,plVar10[2]);
    (*(code *)(*(long *******)local_228)[0x1a])(local_228,param_9);
    if (local_228 != (undefined1  [8])0x0) {
      (*(code *)(*(long *******)local_228)[1])();
    }
    *(undefined1 *)(plVar10[2] + 0xe9) = 1;
  }
  else {
    (**(code **)*plVar10)(plVar10);
    FUN_00cddea4(local_78,param_2,&local_80,param_10);
    (**(code **)(*plVar10 + 8))(plVar10);
    if (local_78[0] != (long *)0x0) goto LAB_00cdd7c8;
LAB_00cdd8cc:
    uVar5 = FUN_00cdd64c(param_8);
    uVar7 = FUN_00417e08();
    if ((uVar7 & 1) == 0) {
      local_228 = (undefined1  [8])0x1c77ec;
      puStack_220 = (undefined1 *)0x791;
      ppvStack_218 = &local_f8;
      FUN_00667e40(&local_d0,uVar5);
      FUN_00623bb0(&DAT_001f4eff,local_228,(ulong)puStack_220 & 0xffffffff,"Adding ",&local_d0,
                   " transceiver in response to a call to AddTrack.");
    }
    ppvStack_c0 = (void **)&DAT_aaaaaaaaaaaaaaaa;
    puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
    local_d0 = (long *******)&DAT_aaaaaaaaaaaaaaaa;
    (**(code **)(*(long *)*param_8 + 0x28))(&local_d0);
    puVar1 = puStack_c8;
    ppppppplVar3 = local_d0;
    if (-1 < (long)ppvStack_c0) {
      puVar1 = (undefined1 *)((ulong)ppvStack_c0 >> 0x38);
      ppppppplVar3 = (long *******)&local_d0;
    }
    FUN_00cde118(local_228,param_2,ppppppplVar3,puVar1);
    if (local_228 != (undefined1  [8])0x0) {
      (*(code *)(*(long *******)local_228)[1])();
      FUN_00835cc0(local_228);
      puStack_c8 = puStack_220;
      local_d0 = (long *******)local_228;
      ppvStack_c0 = ppvStack_218;
    }
    plVar10 = (long *)*param_8;
    local_e0 = plVar10;
    if (plVar10 != (long *)0x0) {
      (**(code **)*plVar10)(plVar10);
    }
    if (param_10 == (long *)0x0) {
      FUN_00668fb0(local_228);
      local_f8 = operator_new(0x130);
      pvVar8 = (void *)((long)local_f8 + 0x130);
      local_e8 = pvVar8;
      if (local_f8 == (void *)0x0) {
LAB_00cdde78:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      FUN_00669028(local_f8,local_228);
    }
    else {
      lVar11 = *param_10;
      lVar2 = param_10[1];
      local_f8 = (void *)0x0;
      local_f0 = (void *)0x0;
      local_e8 = (void *)0x0;
      uVar7 = lVar2 - lVar11;
      pvVar8 = local_f0;
      if (uVar7 != 0) {
        if (0xd79435e50d7943 < (ulong)(((long)uVar7 >> 4) * -0x79435e50d79435e5)) {
                    /* WARNING: Subroutine does not return */
          FUN_0066a5d8();
        }
        pvVar8 = operator_new(uVar7);
        local_e8 = (void *)((long)pvVar8 + uVar7);
        local_f8 = pvVar8;
        do {
          if (pvVar8 == (void *)0x0) goto LAB_00cdde78;
          FUN_00669028(pvVar8,lVar11);
          lVar11 = lVar11 + 0x130;
          pvVar8 = (void *)((long)pvVar8 + 0x130);
        } while (lVar11 != lVar2);
      }
    }
    local_f0 = pvVar8;
    local_240 = 0;
    uStack_238 = 0;
    puVar1 = puStack_c8;
    ppppppplVar3 = local_d0;
    if (-1 < (long)ppvStack_c0) {
      puVar1 = (undefined1 *)((ulong)ppvStack_c0 >> 0x38);
      ppppppplVar3 = (long *******)&local_d0;
    }
    local_230 = 0;
    FUN_00cde44c(&local_d8,param_2,param_3,param_4,param_5,param_6,param_7,uVar5,&local_e0,param_9,
                 &local_f8,&local_240,ppppppplVar3,puVar1,&DAT_001b3348,0);
    local_78[0] = local_d8;
    pvVar4 = local_f8;
    local_d8 = (long *)0x0;
    pvVar8 = local_f0;
    if (local_f8 != (void *)0x0) {
      while (pvVar4 != pvVar8) {
        pvVar8 = (void *)((long)pvVar8 + -0x130);
        if (pvVar8 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        FUN_0066919c(pvVar8);
      }
      local_f0 = pvVar4;
      operator_delete(local_f8);
    }
    if (param_10 == (long *)0x0) {
      FUN_0066919c(local_228);
    }
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))(plVar10);
    }
    *(undefined1 *)(local_78[0][2] + 0xe8) = 1;
    *(undefined4 *)(local_78[0][2] + 0x84) = 0;
    plVar10 = local_78[0];
  }
  (**(code **)(*plVar10 + 0x30))(&local_d0,plVar10);
  *param_1 = 0;
  *(undefined1 *)((long)param_1 + 0x26) = 0;
  *(long ********)(param_1 + 10) = local_d0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)((long)param_1 + 0x1d) = 0;
  *(undefined1 *)(param_1 + 0xc) = 1;
  if (plVar10 == (long *)0x0) {
    return;
  }
LAB_00cdde00:
  (**(code **)(*plVar10 + 8))(plVar10);
  return;
}


// ===== 00cddea4  FUN_00cddea4 =====

void FUN_00cddea4(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *local_68;
  long *local_48;
  
  if (param_4 == 0) {
    iVar3 = FUN_00cdd64c(param_3);
    lVar11 = *(long *)(param_2 + 0x30);
    lVar1 = *(long *)(param_2 + 0x38);
    uVar7 = lVar1 - lVar11;
    if (uVar7 != 0) {
      if ((long)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00bf3e88();
      }
      pvVar5 = operator_new(uVar7);
      lVar8 = 0;
      do {
        lVar10 = lVar8;
        if ((long *)((long)pvVar5 + lVar10) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        puVar6 = *(undefined8 **)(lVar11 + lVar10);
        *(long *)((long)pvVar5 + lVar10) = (long)puVar6;
        if (puVar6 != (undefined8 *)0x0) {
          (**(code **)*puVar6)();
        }
        lVar8 = lVar10 + 8;
      } while (lVar11 + lVar8 != lVar1);
      if (lVar8 != 0) {
        lVar11 = 0;
        do {
          (**(code **)(**(long **)((long)pvVar5 + lVar11) + 0x30))(&local_68);
          (**(code **)(*local_68 + 0x28))(&local_48);
          if (local_48 == (long *)0x0) {
            iVar4 = (**(code **)(**(long **)((long)pvVar5 + lVar11) + 0x20))();
            if ((iVar4 != iVar3) ||
               (uVar7 = (**(code **)(**(long **)((long)pvVar5 + lVar11) + 0x40))(), (uVar7 & 1) != 0
               )) {
              if (local_48 != (long *)0x0) goto LAB_00cddfec;
              goto LAB_00cddff8;
            }
            bVar2 = *(byte *)(*(long *)(*(long *)((long)pvVar5 + lVar11) + 0x10) + 0xea);
            if (local_48 != (long *)0x0) {
              (**(code **)(*local_48 + 8))();
            }
            if (local_68 != (long *)0x0) {
              (**(code **)(*local_68 + 8))();
            }
            if ((bVar2 & 1) == 0) {
              puVar6 = *(undefined8 **)((long)pvVar5 + lVar11);
              *param_1 = (long)puVar6;
              if (puVar6 != (undefined8 *)0x0) {
                (**(code **)*puVar6)();
              }
              if (pvVar5 == (void *)0x0) {
                return;
              }
              while ((long)pvVar5 + lVar10 != 0) {
                if (*(long **)((long)pvVar5 + lVar10) != (long *)0x0) {
                  (**(code **)(**(long **)((long)pvVar5 + lVar10) + 8))();
                }
                lVar10 = lVar10 + -8;
                if (lVar10 == -8) {
                  operator_delete(pvVar5);
                  return;
                }
              }
              goto LAB_00cde100;
            }
          }
          else {
LAB_00cddfec:
            (**(code **)(*local_48 + 8))();
LAB_00cddff8:
            if (local_68 != (long *)0x0) {
              (**(code **)(*local_68 + 8))();
            }
          }
          lVar11 = lVar11 + 8;
        } while (lVar10 + 8 != lVar11);
      }
      if (pvVar5 != (void *)0x0) {
        if (lVar8 != 0) {
          lVar8 = -lVar8;
          plVar9 = (long *)(lVar10 + (long)pvVar5);
          do {
            if (plVar9 == (long *)0x0) {
LAB_00cde100:
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                        );
            }
            if ((long *)*plVar9 != (long *)0x0) {
              (**(code **)(*(long *)*plVar9 + 8))();
            }
            lVar8 = lVar8 + 8;
            plVar9 = plVar9 + -1;
          } while (lVar8 != 0);
        }
        operator_delete(pvVar5);
      }
    }
  }
  *param_1 = 0;
  return;
}


// ===== 00cde118  FUN_00cde118 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00cde118(undefined8 *param_1,long param_2,void *param_3,size_t param_4)

{
  size_t sVar1;
  undefined8 *******__s2;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  byte bVar6;
  long *plVar7;
  bool bVar8;
  int iVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  undefined8 *******local_78;
  size_t local_70;
  byte bStack_61;
  
  lVar2 = *(long *)(param_2 + 0x30);
  lVar3 = *(long *)(param_2 + 0x38);
  uVar5 = lVar3 - lVar2;
  if (uVar5 != 0) {
    if ((long)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00bf3e88();
    }
    plVar10 = (long *)operator_new(uVar5);
    lVar15 = 0;
    do {
      lVar20 = lVar15;
      if ((long *)((long)plVar10 + lVar20) == (long *)0x0) {
LAB_00cde40c:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      puVar11 = *(undefined8 **)(lVar2 + lVar20);
      *(long *)((long)plVar10 + lVar20) = (long)puVar11;
      if (puVar11 != (undefined8 *)0x0) {
        (**(code **)*puVar11)();
      }
      lVar15 = lVar20 + 8;
    } while (lVar2 + lVar15 != lVar3);
    if (lVar15 == 0) {
      bVar8 = true;
    }
    else {
      plVar17 = (long *)*param_1;
      plVar16 = plVar10;
      do {
        plVar19 = *(long **)(*(long *)(*plVar16 + 0x10) + 0x50);
        plVar4 = *(long **)(*(long *)(*plVar16 + 0x10) + 0x58);
        uVar5 = (long)plVar4 - (long)plVar19;
        if (uVar5 != 0) {
          if ((long)uVar5 < 0) {
            *param_1 = plVar17;
                    /* WARNING: Subroutine does not return */
            FUN_00bf4944();
          }
          plVar12 = (long *)operator_new(uVar5);
          lVar3 = 8;
          plVar7 = plVar12;
          lVar2 = 0;
          do {
            lVar14 = lVar2;
            plVar13 = plVar7;
            lVar18 = lVar3;
            if ((long *)((long)plVar12 + lVar14) == (long *)0x0) {
              *param_1 = plVar17;
              goto LAB_00cde40c;
            }
            puVar11 = (undefined8 *)*plVar19;
            *(long *)((long)plVar12 + lVar14) = (long)puVar11;
            if (puVar11 != (undefined8 *)0x0) {
              (**(code **)*puVar11)();
            }
            plVar19 = plVar19 + 1;
            lVar2 = lVar14 + 8;
            lVar3 = lVar18 + 8;
            plVar7 = plVar13 + 1;
          } while (plVar19 != plVar4);
          plVar19 = plVar12;
          if (lVar2 == 0) {
            bVar8 = true;
          }
          else {
            do {
              plVar17 = (long *)*plVar19;
              if (plVar17 != (long *)0x0) {
                (**(code **)*plVar17)(plVar17);
              }
              (**(code **)(*plVar17 + 0x48))(&local_78,plVar17);
              bVar6 = bStack_61;
              sVar1 = local_70;
              if (-1 < (char)bStack_61) {
                sVar1 = (ulong)bStack_61;
              }
              if (param_4 == sVar1) {
                __s2 = local_78;
                if (-1 < (char)bStack_61) {
                  __s2 = &local_78;
                }
                iVar9 = memcmp(param_3,__s2,param_4);
                bVar8 = iVar9 == 0;
              }
              else {
                bVar8 = false;
              }
              if ((char)bVar6 < '\0') {
                operator_delete(local_78);
              }
              if (bVar8) break;
              if (plVar17 != (long *)0x0) {
                (**(code **)(*plVar17 + 8))(plVar17);
              }
              lVar18 = lVar18 + -8;
              plVar19 = plVar19 + 1;
            } while (lVar18 != 0);
            bVar8 = (bool)(bVar8 ^ 1);
          }
          if (plVar12 != (long *)0x0) {
            if (lVar2 != 0) {
              lVar14 = -8 - lVar14;
              do {
                if (plVar13 == (long *)0x0) {
                  *param_1 = plVar17;
                  goto LAB_00cde428;
                }
                if ((long *)*plVar13 != (long *)0x0) {
                  (**(code **)(*(long *)*plVar13 + 8))();
                }
                lVar14 = lVar14 + 8;
                plVar13 = plVar13 + -1;
              } while (lVar14 != 0);
            }
            operator_delete(plVar12);
          }
          if (!bVar8) {
            bVar8 = false;
            goto LAB_00cde38c;
          }
        }
        bVar8 = (long *)((long)plVar10 + lVar20) != plVar16;
        plVar16 = plVar16 + 1;
      } while (bVar8);
      bVar8 = true;
LAB_00cde38c:
      *param_1 = plVar17;
    }
    if (plVar10 != (long *)0x0) {
      if (lVar15 != 0) {
        lVar15 = -lVar15;
        plVar16 = (long *)((long)plVar10 + lVar20);
        do {
          if (plVar16 == (long *)0x0) {
LAB_00cde428:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
          if ((long *)*plVar16 != (long *)0x0) {
            (**(code **)(*(long *)*plVar16 + 8))();
          }
          lVar15 = lVar15 + 8;
          plVar16 = plVar16 + -1;
        } while (lVar15 != 0);
      }
      operator_delete(plVar10);
    }
    if (!bVar8) {
      return;
    }
  }
  *param_1 = 0;
  return;
}


// ===== 00cde44c  FUN_00cde44c =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00cde44c(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,int param_8,long *param_9,
                 undefined8 param_10,undefined8 param_11,long *param_12,undefined8 param_13,
                 undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  long lVar1;
  char cVar2;
  undefined8 *puVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  int *******pppppppiVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  int *******pppppppiVar11;
  long *plVar12;
  undefined4 uVar13;
  long lVar14;
  int *******pppppppiVar15;
  long lVar16;
  int ******ppppppiVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  int ******ppppppiVar21;
  undefined8 uVar22;
  code *local_108;
  long *local_c8;
  undefined1 auStack_c0 [8];
  int ******local_b8;
  int *******local_b0;
  int *******local_a8;
  code *local_a0;
  code *pcStack_98;
  int *******local_88;
  int *******local_80;
  code *local_78;
  long *local_70 [2];
  
  puVar8 = (undefined8 *)*param_12;
  puVar9 = (undefined8 *)param_12[1];
  uVar10 = (long)puVar9 - (long)puVar8;
  if (uVar10 == 0) {
    pppppppiVar11 = (int *******)0x0;
    pppppppiVar7 = (int *******)0x0;
    local_108 = (code *)0x0;
  }
  else {
    if (0x666666666666666 < (ulong)(((long)uVar10 >> 3) * -0x3333333333333333)) {
                    /* WARNING: Subroutine does not return */
      FUN_00b615e4();
    }
    pppppppiVar7 = (int *******)operator_new(uVar10);
    local_108 = (code *)((long)pppppppiVar7 + uVar10);
    pppppppiVar11 = pppppppiVar7;
    do {
      if (pppppppiVar11 == (int *******)0x0) goto LAB_00cdea28;
      if (*(char *)((long)puVar8 + 0x17) < '\0') {
        FUN_005478d8(pppppppiVar11,*puVar8,puVar8[1]);
      }
      else {
        ppppppiVar21 = (int ******)puVar8[1];
        ppppppiVar17 = (int ******)*puVar8;
        pppppppiVar11[2] = (int ******)puVar8[2];
        pppppppiVar11[1] = ppppppiVar21;
        *pppppppiVar11 = ppppppiVar17;
      }
      puVar3 = puVar8 + 4;
      ppppppiVar17 = (int ******)puVar8[3];
      puVar8 = puVar8 + 5;
      pppppppiVar11[4] = (int ******)*puVar3;
      pppppppiVar11[3] = ppppppiVar17;
      pppppppiVar11 = pppppppiVar11 + 5;
    } while (puVar8 != puVar9);
  }
  (**(code **)(**(long **)(param_2 + 0x10) + 0x10))
            (&local_b0,*(long **)(param_2 + 0x10),"WebRTC-HeaderExtensionNegotiateMemory",0x25);
  pppppppiVar15 = local_a8;
  if (-1 < (long)local_a0) {
    pppppppiVar15 = (int *******)((ulong)local_a0 >> 0x38);
  }
  if (pppppppiVar15 < (int *******)0x7) {
    bVar5 = false;
  }
  else {
    pppppppiVar15 = local_b0;
    if (-1 < (long)local_a0) {
      pppppppiVar15 = (int *******)&local_b0;
    }
    bVar5 = *(int *)pppppppiVar15 == 0x62616e45 && *(int *)((long)pppppppiVar15 + 3) == 0x64656c62;
  }
  if ((long)local_a0 < 0) {
    operator_delete(local_b0);
  }
  if (!bVar5) goto LAB_00cde700;
  lVar1 = *(long *)(param_2 + 0x30);
  lVar14 = *(long *)(param_2 + 0x38);
  uVar10 = lVar14 - lVar1;
  if (uVar10 == 0) goto LAB_00cde700;
  if ((long)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00bf3e88();
  }
  puVar8 = (undefined8 *)operator_new(uVar10);
  lVar16 = 0;
  do {
    if ((long *)((long)puVar8 + lVar16) == (long *)0x0) goto LAB_00cdea28;
    puVar9 = *(undefined8 **)(lVar1 + lVar16);
    *(long *)((long)puVar8 + lVar16) = (long)puVar9;
    if (puVar9 != (undefined8 *)0x0) {
      (**(code **)*puVar9)();
    }
    lVar16 = lVar16 + 8;
    lVar4 = lVar16;
    puVar9 = puVar8;
  } while (lVar1 + lVar16 != lVar14);
  for (; lVar4 != 0; lVar4 = lVar4 + -8) {
    iVar6 = (**(code **)(*(long *)*puVar9 + 0x20))();
    if ((iVar6 == param_8) && (uVar10 = (**(code **)(*(long *)*puVar9 + 0x48))(), (uVar10 & 1) == 0)
       ) {
      (**(code **)(*(long *)*puVar9 + 0xa8))(&local_b0);
      if (pppppppiVar7 == (int *******)0x0) goto LAB_00cde6a8;
      goto joined_r0x00cde67c;
    }
    puVar9 = puVar9 + 1;
  }
  goto LAB_00cde6b4;
joined_r0x00cde67c:
  if (pppppppiVar7 == pppppppiVar11) goto LAB_00cde698;
  pppppppiVar11 = pppppppiVar11 + -5;
  if (pppppppiVar11 == (int *******)0x0) goto LAB_00cdea3c;
  FUN_00668d5c(pppppppiVar11);
  goto joined_r0x00cde67c;
LAB_00cde698:
  operator_delete(pppppppiVar7);
LAB_00cde6a8:
  local_108 = local_a0;
  pppppppiVar7 = local_b0;
  pppppppiVar11 = local_a8;
LAB_00cde6b4:
  if (puVar8 != (undefined8 *)0x0) {
    if (lVar16 != 0) {
      plVar12 = (long *)((long)puVar8 + lVar16);
      lVar16 = -lVar16;
      do {
        plVar12 = plVar12 + -1;
        if (plVar12 == (long *)0x0) goto LAB_00cdea3c;
        if ((long *)*plVar12 != (long *)0x0) {
          (**(code **)(*(long *)*plVar12 + 8))();
        }
        lVar16 = lVar16 + 8;
      } while (lVar16 != 0);
    }
    operator_delete(puVar8);
  }
LAB_00cde700:
  pppppppiVar15 = pppppppiVar7;
  if (pppppppiVar7 == pppppppiVar11) {
    lVar1 = 0x30;
    if (param_8 != 0) {
      lVar1 = 0x38;
    }
    plVar12 = (long *)(**(code **)(**(long **)(*(long *)(param_2 + 0xe8) + 0x40) + lVar1))();
    (**(code **)(*plVar12 + 0x10))(&local_b0,plVar12,*(undefined8 *)(param_2 + 0x10));
    bVar5 = pppppppiVar11 != (int *******)0x0;
    pppppppiVar15 = local_b0;
    local_108 = local_a0;
    pppppppiVar11 = local_a8;
    if (bVar5) {
      operator_delete(pppppppiVar7);
      pppppppiVar15 = local_b0;
      local_108 = local_a0;
      pppppppiVar11 = local_a8;
    }
  }
  cVar2 = *(char *)(param_2 + 0xd9);
  lVar14 = *(long *)(*(long *)(param_2 + 0xe8) + 0x38);
  *param_1 = &DAT_aaaaaaaaaaaaaaaa;
  lVar1 = param_2;
  if (cVar2 == '\0') {
    lVar1 = 0;
  }
  FUN_00988288(&local_b0,param_2 + 0x130);
  ppppppiVar17 = *(int *******)(param_2 + 0x138);
  FUN_00988398(auStack_c0,&local_b0);
  local_b8 = ppppppiVar17;
  FUN_00988108(&local_b0);
  puVar8 = (undefined8 *)operator_new(0x210);
  uVar18 = *(undefined8 *)(param_2 + 0xe0);
  local_70[0] = (long *)*param_9;
  if (local_70[0] != (long *)0x0) {
    (**(code **)*local_70[0])();
  }
  uVar22 = *(undefined8 *)(param_2 + 0xf0);
  uVar20 = *(undefined8 *)(param_2 + 0xe8);
  uVar19 = *(undefined8 *)(param_2 + 0x108);
  local_88 = pppppppiVar15;
  local_80 = pppppppiVar11;
  local_78 = local_108;
  pppppppiVar11 = (int *******)operator_new(0x10);
  FUN_0098815c(pppppppiVar11,auStack_c0);
  pppppppiVar11[1] = local_b8;
  local_a0 = FUN_00ce1bdc;
  pcStack_98 = FUN_00ce1b78;
  local_b0 = pppppppiVar11;
  FUN_00c0ac40(puVar8,param_2 + 8,uVar18,param_3,param_13,param_14,param_15,param_16,param_8,
               local_70,param_10,param_11,uVar20,uVar22,uVar19,lVar1,param_4,param_5,param_6,param_7
               ,&local_88,&local_b0);
  (*local_a0)(0,&local_b0,&local_b0);
  pppppppiVar7 = local_88;
  pppppppiVar11 = local_80;
  if (local_88 != (int *******)0x0) {
    while (pppppppiVar7 != pppppppiVar11) {
      pppppppiVar11 = pppppppiVar11 + -5;
      if (pppppppiVar11 == (int *******)0x0) {
LAB_00cdea3c:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      FUN_00668d5c(pppppppiVar11);
    }
    local_80 = pppppppiVar7;
    operator_delete(local_88);
  }
  if (local_70[0] != (long *)0x0) {
    (**(code **)(*local_70[0] + 8))();
  }
  *(undefined4 *)(puVar8 + 0x40) = 0;
  *puVar8 = &PTR_FUN_00d498d8;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_00d0f740(1,puVar8 + 0x40);
  }
  plVar12 = (long *)operator_new(0x20);
  *plVar12 = (long)&PTR_FUN_00d49730;
  plVar12[1] = lVar14;
  plVar12[2] = (long)puVar8;
  *(undefined4 *)(plVar12 + 3) = 0;
  *param_1 = plVar12;
  if (plVar12 == (long *)0x0) {
    FUN_00988344(auStack_c0);
    local_c8 = (long *)0x0;
  }
  else {
    FUN_00d0f740(1,plVar12 + 3);
    FUN_00988344(auStack_c0);
    local_c8 = plVar12;
    (**(code **)*plVar12)(plVar12);
  }
  puVar8 = *(undefined8 **)(param_2 + 0x38);
  if (puVar8 < *(undefined8 **)(param_2 + 0x40)) {
    if (puVar8 == (undefined8 *)0x0) {
LAB_00cdea28:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *puVar8 = plVar12;
    if (plVar12 != (long *)0x0) {
      (**(code **)*plVar12)(plVar12);
    }
    puVar8 = puVar8 + 1;
  }
  else {
    puVar8 = (undefined8 *)FUN_00bf3be4(param_2 + 0x30,&local_c8);
  }
  *(undefined8 **)(param_2 + 0x38) = puVar8;
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 8))(local_c8);
  }
  uVar13 = 8;
  if (param_8 != 0) {
    uVar13 = 0x10;
  }
  FUN_00ce1c44(*(undefined8 *)(param_2 + 0xf8),uVar13);
  return;
}


// ===== 00cdea68  FUN_00cdea68 =====

void FUN_00cdea68(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  bool bVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  
  lVar1 = *(long *)(param_2 + 0x30);
  lVar2 = *(long *)(param_2 + 0x38);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar7 = lVar2 - lVar1;
  if (uVar7 != 0) {
    if ((long)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00bf3e88();
    }
    plVar5 = (long *)operator_new(uVar7);
    lVar10 = 0;
    do {
      lVar13 = lVar10;
      if ((long *)((long)plVar5 + lVar13) == (long *)0x0) {
LAB_00cdec94:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      puVar6 = *(undefined8 **)(lVar1 + lVar13);
      *(long *)((long)plVar5 + lVar13) = (long)puVar6;
      if (puVar6 != (undefined8 *)0x0) {
        (**(code **)*puVar6)();
      }
      lVar10 = lVar13 + 8;
    } while (lVar1 + lVar10 != lVar2);
    plVar12 = plVar5;
    if (lVar10 != 0) {
      do {
        if ((*(char *)(param_2 + 0xd9) != '\x01') ||
           (uVar7 = (**(code **)(**(long **)(*plVar12 + 0x10) + 0x40))(), (uVar7 & 1) == 0)) {
          plVar9 = *(long **)(*(long *)(*plVar12 + 0x10) + 0x50);
          plVar3 = *(long **)(*(long *)(*plVar12 + 0x10) + 0x58);
          uVar7 = (long)plVar3 - (long)plVar9;
          if (uVar7 == 0) {
            plVar8 = (long *)0x0;
            plVar11 = (long *)0x0;
          }
          else {
            if ((long)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00bf4944();
            }
            plVar8 = (long *)operator_new(uVar7);
            plVar11 = plVar8;
            do {
              if (plVar11 == (long *)0x0) goto LAB_00cdec94;
              puVar6 = (undefined8 *)*plVar9;
              *plVar11 = (long)puVar6;
              if (puVar6 != (undefined8 *)0x0) {
                (**(code **)*puVar6)();
              }
              plVar9 = plVar9 + 1;
              plVar11 = plVar11 + 1;
            } while (plVar9 != plVar3);
          }
          FUN_00ce0b54(param_1,param_1[1],plVar8,plVar11,(long)plVar11 - (long)plVar8 >> 3);
          if (plVar8 != (long *)0x0) {
            while (plVar8 != plVar11) {
              plVar11 = plVar11 + -1;
              if (plVar11 == (long *)0x0) goto LAB_00cdeca8;
              if ((long *)*plVar11 != (long *)0x0) {
                (**(code **)(*(long *)*plVar11 + 8))();
              }
            }
            operator_delete(plVar8);
          }
        }
        bVar4 = (long *)((long)plVar5 + lVar13) != plVar12;
        plVar12 = plVar12 + 1;
      } while (bVar4);
    }
    if (plVar5 != (long *)0x0) {
      if (lVar10 != 0) {
        lVar10 = -lVar10;
        plVar12 = (long *)((long)plVar5 + lVar13);
        do {
          if (plVar12 == (long *)0x0) {
LAB_00cdeca8:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
          if ((long *)*plVar12 != (long *)0x0) {
            (**(code **)(*(long *)*plVar12 + 8))();
          }
          lVar10 = lVar10 + 8;
          plVar12 = plVar12 + -1;
        } while (lVar10 != 0);
      }
      operator_delete(plVar5);
      return;
    }
  }
  return;
}


// ===== 00cdecc4  FUN_00cdecc4 =====

void FUN_00cdecc4(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  bool bVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  
  lVar1 = *(long *)(param_2 + 0x30);
  lVar2 = *(long *)(param_2 + 0x38);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar7 = lVar2 - lVar1;
  if (uVar7 != 0) {
    if ((long)uVar7 < 0) {
LAB_00cdef1c:
                    /* WARNING: Subroutine does not return */
      FUN_00bf3e88();
    }
    plVar5 = (long *)operator_new(uVar7);
    lVar10 = 0;
    do {
      lVar13 = lVar10;
      if ((long *)((long)plVar5 + lVar13) == (long *)0x0) {
LAB_00cdeef0:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      puVar6 = *(undefined8 **)(lVar1 + lVar13);
      *(long *)((long)plVar5 + lVar13) = (long)puVar6;
      if (puVar6 != (undefined8 *)0x0) {
        (**(code **)*puVar6)();
      }
      lVar10 = lVar13 + 8;
    } while (lVar1 + lVar10 != lVar2);
    plVar12 = plVar5;
    if (lVar10 != 0) {
      do {
        if ((*(char *)(param_2 + 0xd9) != '\x01') ||
           (uVar7 = (**(code **)(**(long **)(*plVar12 + 0x10) + 0x40))(), (uVar7 & 1) == 0)) {
          plVar9 = *(long **)(*(long *)(*plVar12 + 0x10) + 0x68);
          plVar3 = *(long **)(*(long *)(*plVar12 + 0x10) + 0x70);
          uVar7 = (long)plVar3 - (long)plVar9;
          if (uVar7 == 0) {
            plVar8 = (long *)0x0;
            plVar11 = (long *)0x0;
          }
          else {
            if ((long)uVar7 < 0) {
              FUN_00bf495c();
              goto LAB_00cdef1c;
            }
            plVar8 = (long *)operator_new(uVar7);
            plVar11 = plVar8;
            do {
              if (plVar11 == (long *)0x0) goto LAB_00cdeef0;
              puVar6 = (undefined8 *)*plVar9;
              *plVar11 = (long)puVar6;
              if (puVar6 != (undefined8 *)0x0) {
                (**(code **)*puVar6)();
              }
              plVar9 = plVar9 + 1;
              plVar11 = plVar11 + 1;
            } while (plVar9 != plVar3);
          }
          FUN_00ce1280(param_1,param_1[1],plVar8,plVar11,(long)plVar11 - (long)plVar8 >> 3);
          if (plVar8 != (long *)0x0) {
            while (plVar8 != plVar11) {
              plVar11 = plVar11 + -1;
              if (plVar11 == (long *)0x0) goto LAB_00cdef04;
              if ((long *)*plVar11 != (long *)0x0) {
                (**(code **)(*(long *)*plVar11 + 8))();
              }
            }
            operator_delete(plVar8);
          }
        }
        bVar4 = (long *)((long)plVar5 + lVar13) != plVar12;
        plVar12 = plVar12 + 1;
      } while (bVar4);
    }
    if (plVar5 != (long *)0x0) {
      if (lVar10 != 0) {
        lVar10 = -lVar10;
        plVar12 = (long *)((long)plVar5 + lVar13);
        do {
          if (plVar12 == (long *)0x0) {
LAB_00cdef04:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
          if ((long *)*plVar12 != (long *)0x0) {
            (**(code **)(*(long *)*plVar12 + 8))();
          }
          lVar10 = lVar10 + 8;
          plVar12 = plVar12 + -1;
        } while (lVar10 != 0);
      }
      operator_delete(plVar5);
      return;
    }
  }
  return;
}


// ===== 00cdef20  FUN_00cdef20 =====

/* WARNING: Removing unreachable block (ram,0x00cdf3b0) */
/* WARNING: Removing unreachable block (ram,0x00cdf3c8) */
/* WARNING: Removing unreachable block (ram,0x00cdf1d0) */
/* WARNING: Removing unreachable block (ram,0x00cdf3e4) */
/* WARNING: Removing unreachable block (ram,0x00cdf028) */
/* WARNING: Type propagation algorithm not settling */

void FUN_00cdef20(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  long *******ppppppplVar2;
  long *******ppppppplVar3;
  undefined8 *******pppppppuVar4;
  long *******ppppppplVar5;
  undefined8 *******pppppppuVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  byte bVar9;
  void *pvVar10;
  undefined8 *******__s1;
  void *pvVar11;
  undefined8 *******pppppppuVar12;
  undefined8 *******pppppppuVar13;
  int iVar14;
  long *plVar15;
  ulong uVar16;
  long *plVar17;
  long ******pppppplVar18;
  undefined8 *puVar19;
  void *local_d0;
  void *local_c8;
  undefined8 local_c0;
  undefined8 ******local_b8;
  undefined8 ******ppppppuStack_b0;
  undefined7 local_a8;
  char cStack_a1;
  long *local_a0;
  long *local_98;
  undefined8 *******local_90;
  undefined8 *******pppppppuStack_88;
  undefined8 *******local_80;
  long *******local_78;
  long *******local_70;
  long *******local_68;
  long *local_60;
  long *plStack_58;
  
  local_60 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  plStack_58 = param_2;
  FUN_00cdf444(&local_60);
  plVar17 = local_60;
  if (local_60 != (long *)0x0) {
    plVar15 = (long *)local_60[3];
    (**(code **)(*param_3 + 0x20))(&local_90,param_3);
    local_78 = (long *******)operator_new(0x18);
    local_70 = local_78 + 3;
    local_68 = local_70;
    if (local_78 == (long *******)0x0) goto LAB_00cdf430;
    if ((long)local_80 < 0) {
      FUN_005478d8(local_78,local_90,pppppppuStack_88);
    }
    else {
      local_78[1] = (long ******)pppppppuStack_88;
      *local_78 = (long ******)local_90;
      local_78[2] = (long ******)local_80;
    }
    (**(code **)(*plVar15 + 0xd0))(plVar15,&local_78);
    ppppppplVar2 = local_70;
    if (local_78 != (long *******)0x0) {
      do {
        if (local_78 == ppppppplVar2) {
          local_70 = local_78;
          operator_delete(local_78);
          goto LAB_00cdf050;
        }
        ppppppplVar2 = ppppppplVar2 + -3;
      } while (ppppppplVar2 != (long *******)0x0);
      goto LAB_00cdf41c;
    }
LAB_00cdf050:
    if ((long)local_80 < 0) {
      operator_delete(local_90);
    }
    goto LAB_00cdf364;
  }
  iVar14 = FUN_00cdf73c(&plStack_58);
  if (iVar14 == 0) {
    FUN_00cdcb20(&local_78,param_1);
  }
  else {
    FUN_00cdcd04(param_1);
  }
  pppppplVar18 = local_78[2];
  if (local_78 != (long *******)0x0) {
    (*(code *)(*local_78)[1])();
  }
  local_98 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  local_a0 = param_2;
  if (param_2 != (long *)0x0) {
    (**(code **)*param_2)(param_2);
  }
  (**(code **)(*param_2 + 0x28))(&local_78,param_2);
  ppppppplVar2 = local_70;
  if (-1 < (long)local_68) {
    ppppppplVar2 = (long *******)((ulong)local_68 >> 0x38);
  }
  ppppppplVar3 = local_78;
  if (-1 < (long)local_68) {
    ppppppplVar3 = (long *******)&local_78;
  }
  (**(code **)(*param_3 + 0x20))(&local_b8,param_3);
  local_90 = (undefined8 *******)operator_new(0x18);
  pppppppuVar4 = local_90 + 3;
  pppppppuStack_88 = local_90;
  local_80 = pppppppuVar4;
  if (local_90 == (undefined8 *******)0x0) {
LAB_00cdf430:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  if (cStack_a1 < '\0') {
    FUN_005478d8(local_90,local_b8,ppppppuStack_b0);
  }
  else {
    local_90[1] = ppppppuStack_b0;
    *local_90 = local_b8;
    local_90[2] = (undefined8 ******)CONCAT17(cStack_a1,local_a8);
  }
  local_d0 = (void *)0x0;
  local_c8 = (void *)0x0;
  local_c0 = 0;
  pppppppuStack_88 = pppppppuVar4;
  FUN_00c0c544(&local_98,pppppplVar18,&local_a0,ppppppplVar3,ppppppplVar2,&local_90,&local_d0);
  pvVar11 = local_d0;
  pvVar10 = local_c8;
  if (local_d0 != (void *)0x0) {
    while (pvVar11 != pvVar10) {
      pvVar10 = (void *)((long)pvVar10 + -0x130);
      if (pvVar10 == (void *)0x0) goto LAB_00cdf41c;
      FUN_0066919c(pvVar10);
    }
    local_c8 = pvVar11;
    operator_delete(local_d0);
  }
  pppppppuVar4 = pppppppuStack_88;
  if (local_90 != (undefined8 *******)0x0) {
    do {
      if (local_90 == pppppppuVar4) {
        pppppppuStack_88 = local_90;
        operator_delete(local_90);
        goto LAB_00cdf1f8;
      }
      pppppppuVar4 = pppppppuVar4 + -3;
    } while (pppppppuVar4 != (undefined8 *******)0x0);
LAB_00cdf41c:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
LAB_00cdf1f8:
  if (cStack_a1 < '\0') {
    operator_delete(local_b8);
  }
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 8))();
  }
  lVar1 = 0xa8;
  if (iVar14 != 0) {
    lVar1 = 0xc0;
  }
  (**(code **)(*param_3 + 0x20))(&local_78,param_3);
  ppppppplVar2 = local_70;
  if (-1 < (long)local_68) {
    ppppppplVar2 = (long *******)((ulong)local_68 >> 0x38);
  }
  ppppppplVar3 = local_78;
  if (-1 < (long)local_68) {
    ppppppplVar3 = (long *******)&local_78;
  }
  (**(code **)(*param_2 + 0x28))(&local_90,param_2);
  pppppppuVar13 = local_80;
  pppppppuVar12 = local_90;
  puVar19 = *(undefined8 **)(param_1 + lVar1);
  puVar8 = (undefined8 *)((undefined8 *)(param_1 + lVar1))[1];
  pppppppuVar4 = pppppppuStack_88;
  __s1 = local_90;
  if (-1 < (long)local_80) {
    pppppppuVar4 = (undefined8 *******)((ulong)local_80 >> 0x38);
    __s1 = &local_90;
  }
  if (puVar19 == puVar8) {
LAB_00cdf29c:
    if (puVar19 == puVar8) goto LAB_00cdf338;
    uVar16 = (ulong)*(uint *)(puVar19 + 6) | 0x100000000;
  }
  else {
    do {
      bVar9 = *(byte *)((long)puVar19 + 0x17);
      ppppppplVar5 = (long *******)puVar19[1];
      if (-1 < (char)bVar9) {
        ppppppplVar5 = (long *******)(ulong)bVar9;
      }
      if (ppppppplVar2 == ppppppplVar5) {
        puVar7 = (undefined8 *)*puVar19;
        if (-1 < (char)bVar9) {
          puVar7 = puVar19;
        }
        iVar14 = memcmp(ppppppplVar3,puVar7,(size_t)ppppppplVar2);
        if (iVar14 == 0) {
          bVar9 = *(byte *)((long)puVar19 + 0x2f);
          pppppppuVar6 = (undefined8 *******)puVar19[4];
          if (-1 < (char)bVar9) {
            pppppppuVar6 = (undefined8 *******)(ulong)bVar9;
          }
          if (pppppppuVar4 == pppppppuVar6) {
            puVar7 = (undefined8 *)puVar19[3];
            if (-1 < (char)bVar9) {
              puVar7 = puVar19 + 3;
            }
            iVar14 = memcmp(__s1,puVar7,(size_t)pppppppuVar4);
            if (iVar14 == 0) goto LAB_00cdf29c;
          }
        }
      }
      puVar19 = puVar19 + 7;
    } while (puVar19 != puVar8);
LAB_00cdf338:
    uVar16 = 0;
  }
  if ((long)pppppppuVar13 < 0) {
    operator_delete(pppppppuVar12);
  }
  plVar17 = local_60;
  if (uVar16 >> 0x20 != 0) {
    (**(code **)(*(long *)local_98[3] + 200))((long *)local_98[3],uVar16 & 0xffffffff);
    plVar17 = local_60;
  }
  local_60 = plVar17;
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 8))();
    plVar17 = local_60;
  }
LAB_00cdf364:
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 8))(plVar17);
  }
  return;
}


// ===== 00cdf444  FUN_00cdf444 =====

void FUN_00cdf444(undefined8 *param_1,long param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  bool bVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long *plStack_68;
  
  lVar1 = *(long *)(param_2 + 0x30);
  lVar2 = *(long *)(param_2 + 0x38);
  uVar4 = lVar2 - lVar1;
  if (uVar4 != 0) {
    if ((long)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00bf3e88();
    }
    plVar7 = (long *)operator_new(uVar4);
    lVar13 = 0;
    do {
      lVar17 = lVar13;
      if ((long *)((long)plVar7 + lVar17) == (long *)0x0) {
LAB_00cdf6fc:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      puVar8 = *(undefined8 **)(lVar1 + lVar17);
      *(long *)((long)plVar7 + lVar17) = (long)puVar8;
      if (puVar8 != (undefined8 *)0x0) {
        (**(code **)*puVar8)();
      }
      lVar13 = lVar17 + 8;
    } while (lVar1 + lVar13 != lVar2);
    if (lVar13 == 0) {
      bVar6 = true;
    }
    else {
      plVar15 = (long *)*param_1;
      plVar10 = plVar7;
      do {
        plVar14 = *(long **)(*(long *)(*plVar10 + 0x10) + 0x50);
        plVar3 = *(long **)(*(long *)(*plVar10 + 0x10) + 0x58);
        uVar4 = (long)plVar3 - (long)plVar14;
        if (uVar4 != 0) {
          if ((long)uVar4 < 0) {
            *param_1 = plVar15;
                    /* WARNING: Subroutine does not return */
            FUN_00bf4944();
          }
          plVar9 = (long *)operator_new(uVar4);
          lVar2 = 8;
          plVar5 = plVar9;
          lVar1 = 0;
          do {
            lVar11 = lVar1;
            plVar12 = plVar5;
            lVar16 = lVar2;
            if ((long *)((long)plVar9 + lVar11) == (long *)0x0) {
              *param_1 = plVar15;
              goto LAB_00cdf6fc;
            }
            puVar8 = (undefined8 *)*plVar14;
            *(long *)((long)plVar9 + lVar11) = (long)puVar8;
            if (puVar8 != (undefined8 *)0x0) {
              (**(code **)*puVar8)();
            }
            plVar14 = plVar14 + 1;
            lVar1 = lVar11 + 8;
            lVar2 = lVar16 + 8;
            plVar5 = plVar12 + 1;
          } while (plVar14 != plVar3);
          plVar14 = plVar9;
          if (lVar1 == 0) {
            bVar6 = true;
          }
          else {
            do {
              plVar15 = (long *)*plVar14;
              if (plVar15 != (long *)0x0) {
                (**(code **)*plVar15)(plVar15);
              }
              (**(code **)(*plVar15 + 0x28))(&plStack_68,plVar15);
              plVar3 = plStack_68;
              bVar6 = plStack_68 != param_3;
              if (plStack_68 != (long *)0x0) {
                (**(code **)(*plStack_68 + 8))(plStack_68);
              }
              if (plVar3 == param_3) break;
              if (plVar15 != (long *)0x0) {
                (**(code **)(*plVar15 + 8))(plVar15);
              }
              lVar16 = lVar16 + -8;
              plVar14 = plVar14 + 1;
            } while (lVar16 != 0);
          }
          if (plVar9 != (long *)0x0) {
            if (lVar1 != 0) {
              lVar11 = -8 - lVar11;
              do {
                if (plVar12 == (long *)0x0) {
                  *param_1 = plVar15;
                  goto LAB_00cdf718;
                }
                if ((long *)*plVar12 != (long *)0x0) {
                  (**(code **)(*(long *)*plVar12 + 8))();
                }
                lVar11 = lVar11 + 8;
                plVar12 = plVar12 + -1;
              } while (lVar11 != 0);
            }
            operator_delete(plVar9);
          }
          if (!bVar6) {
            bVar6 = false;
            goto LAB_00cdf67c;
          }
        }
        bVar6 = (long *)((long)plVar7 + lVar17) != plVar10;
        plVar10 = plVar10 + 1;
      } while (bVar6);
      bVar6 = true;
LAB_00cdf67c:
      *param_1 = plVar15;
    }
    if (plVar7 != (long *)0x0) {
      if (lVar13 != 0) {
        lVar13 = -lVar13;
        plVar10 = (long *)((long)plVar7 + lVar17);
        do {
          if (plVar10 == (long *)0x0) {
LAB_00cdf718:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
          if ((long *)*plVar10 != (long *)0x0) {
            (**(code **)(*(long *)*plVar10 + 8))();
          }
          lVar13 = lVar13 + 8;
          plVar10 = plVar10 + -1;
        } while (lVar13 != 0);
      }
      operator_delete(plVar7);
    }
    if (!bVar6) {
      return;
    }
  }
  *param_1 = 0;
  return;
}


// ===== 00cdf73c  FUN_00cdf73c =====

bool FUN_00cdf73c(undefined8 *param_1)

{
  undefined *__s2;
  bool bVar1;
  int iVar2;
  size_t __n;
  void *local_38;
  size_t local_30;
  char cStack_21;
  
  (**(code **)(*(long *)*param_1 + 0x20))(&local_38);
  __s2 = PTR_s_audio_00d48a78;
  if (PTR_s_audio_00d48a78 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/string:3571: libc++ Hardening assertion __rhs != nullptr failed: operator==(basic_string, char*): received nullptr\n"
              );
  }
  __n = strlen(PTR_s_audio_00d48a78);
  if ((long)cStack_21 < 0) {
    if (__n == local_30) {
      if (__n == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
        FUN_005f5590();
      }
      iVar2 = memcmp(local_38,__s2,__n);
      bVar1 = iVar2 != 0;
    }
    else {
      bVar1 = true;
    }
    operator_delete(local_38);
  }
  else if (__n == (long)cStack_21) {
    iVar2 = memcmp(&local_38,__s2,__n);
    bVar1 = iVar2 != 0;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}


// ===== 00cdf820  FUN_00cdf820 =====

void FUN_00cdf820(undefined8 param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long *local_50 [2];
  char cStack_39;
  long *local_38;
  long *local_18;
  
  local_38 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  local_18 = param_2;
  FUN_00cdf444(&local_38);
  plVar1 = local_38;
  if (local_38 != (long *)0x0) {
    iVar2 = FUN_00cdf73c(&local_18);
    if (iVar2 == 0) {
      FUN_00cdcb20(local_50,param_1);
    }
    else {
      FUN_00cdcd04(param_1);
    }
    lVar4 = local_50[0][2];
    if (local_50[0] != (long *)0x0) {
      (**(code **)(*local_50[0] + 8))();
    }
    FUN_00c0c634(lVar4,plVar1);
                    /* WARNING: Could not recover jumptable at 0x00cdf93c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))(plVar1);
    return;
  }
  uVar3 = FUN_004022fc();
  if ((uVar3 & 1) == 0) {
    (**(code **)(*param_2 + 0x28))(local_50,param_2);
    FUN_00623bb0(&DAT_001f4eff,"../../pc/rtp_transmission_manager.cc",0xe22,
                 "RtpSender for track with id ",local_50," doesn\'t exist.");
    if (cStack_39 < '\0') {
      operator_delete(local_50[0]);
    }
  }
  return;
}


// ===== 00cdf940  FUN_00cdf940 =====

void FUN_00cdf940(long param_1,long *param_2,long param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auVar9 [16];
  long *local_68;
  long *local_60;
  long *local_58;
  undefined8 local_50;
  long *local_48;
  
  local_60 = (long *)0x0;
  local_58 = (long *)0x0;
  local_50 = 0;
  local_48 = param_2;
  if (param_2 != (long *)0x0) {
    (**(code **)*param_2)(param_2);
  }
  local_58 = (long *)FUN_00cc7abc(&local_60,&local_48);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 8))(local_48);
  }
  plVar5 = (long *)(param_3 + 0x18);
  uVar7 = *(undefined8 *)(*(long *)(param_1 + 0xe8) + 0x30);
  FUN_00cdcb20(&local_48,param_1);
  plVar6 = local_48;
  uVar3 = FUN_00c0f274(local_48[2]);
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))(plVar6);
  }
  puVar4 = (undefined8 *)operator_new(0xd0);
  uVar1 = *(ulong *)(param_3 + 0x20);
  plVar6 = *(long **)(param_3 + 0x18);
  if (-1 < (char)*(byte *)(param_3 + 0x2f)) {
    uVar1 = (ulong)*(byte *)(param_3 + 0x2f);
    plVar6 = plVar5;
  }
  FUN_00c14c2c(puVar4,uVar7,plVar6,uVar1,&local_60,0,uVar3);
  *(undefined4 *)(puVar4 + 0x19) = 0;
  *puVar4 = &PTR_FUN_00d4a270;
  puVar4[1] = &PTR_FUN_00d4a378;
  puVar4[2] = &PTR_FUN_00d4a3a0;
  puVar4[3] = &PTR_FUN_00d4a4a0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_00d0f740(1,puVar4 + 0x19);
  }
  if (*(char *)(param_3 + 0x2f) < '\0') {
    if (*(long *)(param_3 + 0x20) == 9) {
      plVar5 = (long *)*plVar5;
      goto LAB_00cdfa7c;
    }
  }
  else if (*(char *)(param_3 + 0x2f) == '\t') {
LAB_00cdfa7c:
    if (*plVar5 == 0x61746c7561666564 && (char)plVar5[1] == '0') {
      FUN_00c15a60(puVar4);
      goto LAB_00cdfab0;
    }
  }
  FUN_00c158fc(puVar4,*(undefined4 *)(param_3 + 0x30));
LAB_00cdfab0:
  puVar2 = (undefined8 *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    puVar2 = puVar4 + 2;
  }
  auVar9 = *(undefined1 (*) [16])(*(long *)(param_1 + 0xe8) + 0x30);
  plVar5 = (long *)operator_new(0x30);
  plVar5[4] = (long)puVar2;
  auVar9 = NEON_ext(auVar9,auVar9,8,1);
  *plVar5 = (long)&PTR_FUN_00d4a0c8;
  plVar5[1] = (long)&PTR_FUN_00d4a178;
  *(undefined4 *)(plVar5 + 5) = 0;
  plVar5[3] = auVar9._8_8_;
  plVar5[2] = auVar9._0_8_;
  if (plVar5 != (long *)0x0) {
    FUN_00d0f740(1,plVar5 + 5);
  }
  FUN_00cdcb20(&local_48,param_1);
  plVar6 = local_48;
  lVar8 = local_48[2];
  local_68 = plVar5;
  if (plVar5 != (long *)0x0) {
    FUN_00d0f740(1,plVar5 + 5);
  }
  FUN_00c0c7f4(lVar8,&local_68);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 8))();
  }
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))(plVar6);
  }
  plVar6 = *(long **)(param_1 + 0x100);
  local_48 = plVar5;
  if (plVar5 != (long *)0x0) {
    (**(code **)*plVar5)(plVar5);
  }
  (**(code **)(*plVar6 + 0x88))(plVar6,&local_48,&local_60);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 8))();
  }
  FUN_00ce1c44(*(undefined8 *)(param_1 + 0xf8),8);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))(plVar5);
  }
  plVar6 = local_60;
  plVar5 = local_58;
  if (local_60 != (long *)0x0) {
    while (plVar6 != plVar5) {
      plVar5 = plVar5 + -1;
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      if ((long *)*plVar5 != (long *)0x0) {
        (**(code **)(*(long *)*plVar5 + 8))();
      }
    }
    local_58 = plVar6;
    operator_delete(local_60);
  }
  return;
}


// ===== 00cdfc60  FUN_00cdfc60 =====

void FUN_00cdfc60(long param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  long *local_60;
  long *local_58;
  long *local_50;
  undefined8 local_48;
  long *local_28;
  
  local_58 = (long *)0x0;
  local_50 = (long *)0x0;
  local_48 = 0;
  local_28 = param_2;
  if (param_2 != (long *)0x0) {
    (**(code **)*param_2)(param_2);
  }
  local_50 = (long *)FUN_00cc7abc(&local_58,&local_28);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 8))(local_28);
  }
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0xe8) + 0x30);
  puVar1 = (undefined8 *)operator_new(0xb8);
  plVar6 = (long *)(param_3 + 0x18);
  uVar3 = *(ulong *)(param_3 + 0x20);
  plVar2 = (long *)*plVar6;
  if (-1 < (char)*(byte *)(param_3 + 0x2f)) {
    uVar3 = (ulong)*(byte *)(param_3 + 0x2f);
    plVar2 = plVar6;
  }
  FUN_00c1b268(puVar1,uVar4,plVar2,uVar3,&local_58,0);
  *(undefined4 *)((long)puVar1 + 0xb4) = 0;
  *puVar1 = &PTR_FUN_00d4a4c8;
  puVar1[1] = &PTR_FUN_00d4a5d0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_00d0f740(1,(long)puVar1 + 0xb4);
  }
  if (*(char *)(param_3 + 0x2f) < '\0') {
    if (*(long *)(param_3 + 0x20) == 9) {
      plVar6 = (long *)*plVar6;
      goto LAB_00cdfd58;
    }
  }
  else if (*(char *)(param_3 + 0x2f) == '\t') {
LAB_00cdfd58:
    if (*plVar6 == 0x76746c7561666564 && (char)plVar6[1] == '0') {
      uVar3 = 0;
      goto LAB_00cdfd88;
    }
  }
  uVar3 = (ulong)*(uint *)(param_3 + 0x30) | 0x100000000;
LAB_00cdfd88:
  FUN_00cdcd04(&local_28,param_1);
  plVar2 = local_28;
  uVar4 = FUN_00c0f258(local_28[2]);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  FUN_00c1c8c4(puVar1,uVar3,uVar4);
  auVar7 = *(undefined1 (*) [16])(*(long *)(param_1 + 0xe8) + 0x30);
  plVar2 = (long *)operator_new(0x30);
  plVar2[4] = (long)puVar1;
  auVar7 = NEON_ext(auVar7,auVar7,8,1);
  *plVar2 = (long)&PTR_FUN_00d4a0c8;
  plVar2[1] = (long)&PTR_FUN_00d4a178;
  *(undefined4 *)(plVar2 + 5) = 0;
  plVar2[3] = auVar7._8_8_;
  plVar2[2] = auVar7._0_8_;
  if (plVar2 != (long *)0x0) {
    FUN_00d0f740(1,plVar2 + 5);
  }
  FUN_00cdcd04(&local_28,param_1);
  plVar6 = local_28;
  lVar5 = local_28[2];
  local_60 = plVar2;
  if (plVar2 != (long *)0x0) {
    FUN_00d0f740(1,plVar2 + 5);
  }
  FUN_00c0c7f4(lVar5,&local_60);
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 8))();
  }
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))(plVar6);
  }
  plVar6 = *(long **)(param_1 + 0x100);
  local_28 = plVar2;
  if (plVar2 != (long *)0x0) {
    (**(code **)*plVar2)(plVar2);
  }
  (**(code **)(*plVar6 + 0x88))(plVar6,&local_28,&local_58);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 8))();
  }
  FUN_00ce1c44(*(undefined8 *)(param_1 + 0xf8),0x10);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  plVar6 = local_58;
  plVar2 = local_50;
  if (local_58 != (long *)0x0) {
    while (plVar6 != plVar2) {
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
    local_50 = plVar6;
    operator_delete(local_58);
  }
  return;
}


// ===== 00cdff6c  FUN_00cdff6c =====

void FUN_00cdff6c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *local_40;
  long *local_38;
  
  puVar5 = (undefined8 *)(param_3 + 0x18);
  local_38 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  uVar4 = *(ulong *)(param_3 + 0x20);
  puVar1 = (undefined8 *)*puVar5;
  if (-1 < (char)*(byte *)(param_3 + 0x2f)) {
    uVar4 = (ulong)*(byte *)(param_3 + 0x2f);
    puVar1 = puVar5;
  }
  FUN_00ce0068(&local_38,param_2,puVar1,uVar4);
  plVar2 = local_38;
  if (local_38 == (long *)0x0) {
    uVar4 = FUN_004022fc();
    if ((uVar4 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4eff,"../../pc/rtp_transmission_manager.cc",0x1052,
                   "RtpReceiver for track with id ",puVar5," doesn\'t exist.");
    }
  }
  else {
    iVar3 = (**(code **)(*local_38 + 0x40))(local_38);
    if (iVar3 == 0) {
      FUN_00cdcb20(&local_40,param_2);
    }
    else {
      FUN_00cdcd04(param_2);
    }
    FUN_00c0c868(local_40[2],plVar2);
    if (local_40 != (long *)0x0) {
      (**(code **)(*local_40 + 8))(local_40);
    }
  }
  *param_1 = plVar2;
  return;
}


// ===== 00ce0068  FUN_00ce0068 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00ce0068(undefined8 *param_1,long param_2,void *param_3,size_t param_4)

{
  size_t sVar1;
  undefined8 *******__s2;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  byte bVar6;
  long *plVar7;
  bool bVar8;
  int iVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  undefined8 *******local_78;
  size_t local_70;
  byte bStack_61;
  
  lVar2 = *(long *)(param_2 + 0x30);
  lVar3 = *(long *)(param_2 + 0x38);
  uVar5 = lVar3 - lVar2;
  if (uVar5 != 0) {
    if ((long)uVar5 < 0) {
LAB_00ce0398:
                    /* WARNING: Subroutine does not return */
      FUN_00bf3e88();
    }
    plVar10 = (long *)operator_new(uVar5);
    lVar15 = 0;
    do {
      lVar20 = lVar15;
      if ((long *)((long)plVar10 + lVar20) == (long *)0x0) {
LAB_00ce035c:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      puVar11 = *(undefined8 **)(lVar2 + lVar20);
      *(long *)((long)plVar10 + lVar20) = (long)puVar11;
      if (puVar11 != (undefined8 *)0x0) {
        (**(code **)*puVar11)();
      }
      lVar15 = lVar20 + 8;
    } while (lVar2 + lVar15 != lVar3);
    if (lVar15 == 0) {
      bVar8 = true;
    }
    else {
      plVar17 = (long *)*param_1;
      plVar16 = plVar10;
      do {
        plVar19 = *(long **)(*(long *)(*plVar16 + 0x10) + 0x68);
        plVar4 = *(long **)(*(long *)(*plVar16 + 0x10) + 0x70);
        uVar5 = (long)plVar4 - (long)plVar19;
        if (uVar5 != 0) {
          if ((long)uVar5 < 0) {
            *param_1 = plVar17;
            FUN_00bf495c();
            goto LAB_00ce0398;
          }
          plVar12 = (long *)operator_new(uVar5);
          lVar3 = 8;
          plVar7 = plVar12;
          lVar2 = 0;
          do {
            lVar14 = lVar2;
            plVar13 = plVar7;
            lVar18 = lVar3;
            if ((long *)((long)plVar12 + lVar14) == (long *)0x0) {
              *param_1 = plVar17;
              goto LAB_00ce035c;
            }
            puVar11 = (undefined8 *)*plVar19;
            *(long *)((long)plVar12 + lVar14) = (long)puVar11;
            if (puVar11 != (undefined8 *)0x0) {
              (**(code **)*puVar11)();
            }
            plVar19 = plVar19 + 1;
            lVar2 = lVar14 + 8;
            lVar3 = lVar18 + 8;
            plVar7 = plVar13 + 1;
          } while (plVar19 != plVar4);
          plVar19 = plVar12;
          if (lVar2 == 0) {
            bVar8 = true;
          }
          else {
            do {
              plVar17 = (long *)*plVar19;
              if (plVar17 != (long *)0x0) {
                (**(code **)*plVar17)(plVar17);
              }
              (**(code **)(*plVar17 + 0x48))(&local_78,plVar17);
              bVar6 = bStack_61;
              sVar1 = local_70;
              if (-1 < (char)bStack_61) {
                sVar1 = (ulong)bStack_61;
              }
              if (param_4 == sVar1) {
                __s2 = local_78;
                if (-1 < (char)bStack_61) {
                  __s2 = &local_78;
                }
                iVar9 = memcmp(param_3,__s2,param_4);
                bVar8 = iVar9 == 0;
              }
              else {
                bVar8 = false;
              }
              if ((char)bVar6 < '\0') {
                operator_delete(local_78);
              }
              if (bVar8) break;
              if (plVar17 != (long *)0x0) {
                (**(code **)(*plVar17 + 8))(plVar17);
              }
              lVar18 = lVar18 + -8;
              plVar19 = plVar19 + 1;
            } while (lVar18 != 0);
            bVar8 = (bool)(bVar8 ^ 1);
          }
          if (plVar12 != (long *)0x0) {
            if (lVar2 != 0) {
              lVar14 = -8 - lVar14;
              do {
                if (plVar13 == (long *)0x0) {
                  *param_1 = plVar17;
                  goto LAB_00ce0378;
                }
                if ((long *)*plVar13 != (long *)0x0) {
                  (**(code **)(*(long *)*plVar13 + 8))();
                }
                lVar14 = lVar14 + 8;
                plVar13 = plVar13 + -1;
              } while (lVar14 != 0);
            }
            operator_delete(plVar12);
          }
          if (!bVar8) {
            bVar8 = false;
            goto LAB_00ce02dc;
          }
        }
        bVar8 = (long *)((long)plVar10 + lVar20) != plVar16;
        plVar16 = plVar16 + 1;
      } while (bVar8);
      bVar8 = true;
LAB_00ce02dc:
      *param_1 = plVar17;
    }
    if (plVar10 != (long *)0x0) {
      if (lVar15 != 0) {
        lVar15 = -lVar15;
        plVar16 = (long *)((long)plVar10 + lVar20);
        do {
          if (plVar16 == (long *)0x0) {
LAB_00ce0378:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
          if ((long *)*plVar16 != (long *)0x0) {
            (**(code **)(*(long *)*plVar16 + 8))();
          }
          lVar15 = lVar15 + 8;
          plVar16 = plVar16 + -1;
        } while (lVar15 != 0);
      }
      operator_delete(plVar10);
    }
    if (!bVar8) {
      return;
    }
  }
  *param_1 = 0;
  return;
}


// ===== 00ce039c  FUN_00ce039c =====

void FUN_00ce039c(undefined8 param_1,long param_2,undefined8 param_3,int param_4)

{
  ulong uVar1;
  void *local_68 [2];
  char cStack_51;
  undefined1 uStack_49;
  char *local_48;
  ulong local_40;
  undefined1 *local_38;
  
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    local_48 = "../../pc/rtp_transmission_manager.cc";
    local_40 = 0x10e1;
    local_38 = &uStack_49;
    FUN_00667e40(local_68,param_4);
    FUN_00623bb0("\r\t\n\t\n\t\n",local_48,local_40 & 0xffffffff,"Creating ",local_68,
                 " receiver for track_id=",param_2 + 0x18," and stream_id=",param_2);
    if (cStack_51 < '\0') {
      operator_delete(local_68[0]);
    }
  }
  if (param_4 == 1) {
    FUN_00cdfc60(param_1,param_3,param_2);
  }
  else if (param_4 == 0) {
    FUN_00cdf940(param_1,param_3,param_2);
  }
  return;
}


// ===== 00ce0490  FUN_00ce0490 =====

void FUN_00ce0490(long param_1,long param_2,long *param_3,int param_4)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *local_58;
  long *local_50;
  long *local_48 [2];
  char cStack_31;
  
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    FUN_00667e40(local_48,param_4);
    FUN_00623bb0("\r\t\n\t\n\t\n","../../pc/rtp_transmission_manager.cc",0x1179,"Removing ",local_48
                 ," receiver for track_id=",param_2 + 0x18," and stream_id=",param_2);
    if (-1 < cStack_31) goto LAB_00ce0510;
    operator_delete(local_48[0]);
    if (param_4 == 1) goto LAB_00ce05c0;
LAB_00ce0518:
    if (param_4 != 0) {
      return;
    }
    FUN_00cdff6c(local_48,param_1,param_2);
    plVar3 = local_48[0];
    local_48[0] = (long *)&DAT_aaaaaaaaaaaaaaaa;
    (**(code **)(*param_3 + 0x38))(local_48,param_3,param_2 + 0x18);
    if (local_48[0] == (long *)0x0) goto LAB_00ce062c;
    local_50 = local_48[0];
    (**(code **)*local_48[0])();
    (**(code **)(*param_3 + 0x58))(param_3,&local_50);
    plVar2 = local_50;
  }
  else {
LAB_00ce0510:
    if (param_4 != 1) goto LAB_00ce0518;
LAB_00ce05c0:
    FUN_00cdff6c(local_48,param_1,param_2);
    plVar3 = local_48[0];
    local_48[0] = (long *)&DAT_aaaaaaaaaaaaaaaa;
    (**(code **)(*param_3 + 0x40))(local_48,param_3,param_2 + 0x18);
    if (local_48[0] == (long *)0x0) goto LAB_00ce062c;
    local_58 = local_48[0];
    (**(code **)*local_48[0])();
    (**(code **)(*param_3 + 0x60))(param_3,&local_58);
    plVar2 = local_58;
  }
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (local_48[0] != (long *)0x0) {
    (**(code **)(*local_48[0] + 8))();
  }
LAB_00ce062c:
  if (plVar3 != (long *)0x0) {
    plVar2 = *(long **)(param_1 + 0x100);
    local_48[0] = plVar3;
    (**(code **)*plVar3)(plVar3);
    (**(code **)(*plVar2 + 0x98))(plVar2,local_48);
    if (local_48[0] != (long *)0x0) {
      (**(code **)(*local_48[0] + 8))();
    }
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  return;
}


// ===== 00ce0698  FUN_00ce0698 =====

/* WARNING: Removing unreachable block (ram,0x00ce0834) */

void FUN_00ce0698(undefined8 param_1,undefined8 *param_2,int param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  void *local_70;
  undefined8 uStack_68;
  long local_60;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  long *local_38;
  
  puVar5 = param_2 + 3;
  local_38 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  uVar4 = param_2[4];
  puVar1 = (undefined8 *)*puVar5;
  if (-1 < (char)*(byte *)((long)param_2 + 0x2f)) {
    uVar4 = (ulong)*(byte *)((long)param_2 + 0x2f);
    puVar1 = puVar5;
  }
  FUN_00cde118(&local_38,param_1,puVar1,uVar4);
  plVar2 = local_38;
  if (local_38 == (long *)0x0) {
    uVar4 = FUN_004022fc();
    if ((uVar4 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4eff,"../../pc/rtp_transmission_manager.cc",0x12c2,
                   "An unknown RtpSender with id ",puVar5,
                   " has been configured in the local description.");
      return;
    }
  }
  else {
    iVar3 = (**(code **)(*local_38 + 0x40))(local_38);
    if (iVar3 == param_3) {
      plVar6 = (long *)plVar2[3];
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        FUN_005478d8(&local_70,*param_2,param_2[1]);
      }
      else {
        uStack_68 = param_2[1];
        local_70 = (void *)*param_2;
        local_60 = param_2[2];
      }
      local_50 = (undefined8 *)operator_new(0x18);
      puVar1 = local_50 + 3;
      local_40 = puVar1;
      if (local_50 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      if (local_60 < 0) {
        FUN_005478d8(local_50,local_70,uStack_68);
      }
      else {
        local_50[1] = uStack_68;
        *local_50 = local_70;
        local_50[2] = local_60;
      }
      local_48 = puVar1;
      (**(code **)(*plVar6 + 0xd0))(plVar6,&local_50);
      puVar1 = local_48;
      if (local_50 != (undefined8 *)0x0) {
        while (local_50 != puVar1) {
          puVar1 = puVar1 + -3;
          if (puVar1 == (undefined8 *)0x0) {
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
      if (local_60 < 0) {
        operator_delete(local_70);
      }
      (**(code **)(*(long *)plVar2[3] + 200))((long *)plVar2[3],*(undefined4 *)(param_2 + 6));
    }
    else {
      uVar4 = FUN_004022fc();
      if ((uVar4 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../pc/rtp_transmission_manager.cc",0x12fa,
                     "An RtpSender has been configured in the local description with an unexpected media type."
                    );
      }
    }
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  return;
}


// ===== 00ce08d8  FUN_00ce08d8 =====

void FUN_00ce08d8(undefined8 param_1,long param_2,int param_3)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  long *local_28;
  
  local_28 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  uVar3 = *(ulong *)(param_2 + 0x20);
  plVar1 = (long *)*(long *)(param_2 + 0x18);
  if (-1 < (char)*(byte *)(param_2 + 0x2f)) {
    uVar3 = (ulong)*(byte *)(param_2 + 0x2f);
    plVar1 = (long *)(param_2 + 0x18);
  }
  FUN_00cde118(&local_28,param_1,plVar1,uVar3);
  plVar1 = local_28;
  if (local_28 == (long *)0x0) {
    return;
  }
  iVar2 = (**(code **)(*local_28 + 0x40))(local_28);
  if (iVar2 == param_3) {
    (**(code **)(*(long *)plVar1[3] + 200))((long *)plVar1[3],0);
  }
  else {
    uVar3 = FUN_004022fc();
    if ((uVar3 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../pc/rtp_transmission_manager.cc",0x13ba,
                   "An RtpSender has been configured in the local description with an unexpected media type."
                  );
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00ce09ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 8))(plVar1);
  return;
}


// ===== 00ce09b0  FUN_00ce09b0 =====

long FUN_00ce09b0(long param_1,int param_2)

{
  long lVar1;
  
  lVar1 = 0x78;
  if (param_2 != 0) {
    lVar1 = 0x90;
  }
  return param_1 + lVar1;
}


// ===== 00ce09cc  FUN_00ce09cc =====

long FUN_00ce09cc(long param_1,int param_2)

{
  long lVar1;
  
  lVar1 = 0xa8;
  if (param_2 != 0) {
    lVar1 = 0xc0;
  }
  return param_1 + lVar1;
}


// ===== 00ce09e8  FUN_00ce09e8 =====

void FUN_00ce09e8(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *local_18;
  
  *param_1 = &PTR_FUN_00d50100;
  param_1[0x27] = 0;
  FUN_009881c8(param_1 + 0x26);
  (*(code *)param_1[0x24])(0,param_1 + 0x22,param_1 + 0x22);
  FUN_00ce19ac(param_1 + 0x18);
  FUN_00ce19ac(param_1 + 0x15);
  FUN_00ce19ac(param_1 + 0x12);
  FUN_00ce19ac(param_1 + 0xf);
  local_18 = param_1 + 0xc;
  FUN_00ce1a80(&local_18,param_1[0xd]);
  local_18 = param_1 + 9;
  FUN_00cc392c(&local_18,param_1[10]);
  plVar4 = (long *)param_1[6];
  if (plVar4 != (long *)0x0) {
    plVar3 = (long *)param_1[7];
    plVar2 = plVar4;
    if (plVar4 != plVar3) {
      do {
        plVar3 = plVar3 + -1;
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        if ((long *)*plVar3 != (long *)0x0) {
          (**(code **)(*(long *)*plVar3 + 8))();
        }
      } while (plVar3 != plVar4);
      plVar2 = (long *)param_1[6];
    }
    param_1[7] = plVar4;
    operator_delete(plVar2);
  }
  plVar4 = (long *)param_1[1];
  if ((plVar4 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar4 + 1), iVar1 == 1)) {
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  return;
}


// ===== 00ce0b24  FUN_00ce0b24 =====

void FUN_00ce0b24(void *param_1)

{
  FUN_00ce09e8();
  operator_delete(param_1);
  return;
}


// ===== 00ce0b54  FUN_00ce0b54 =====

long * FUN_00ce0b54(long *param_1,long *param_2,long *param_3,long *param_4,long param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  void *local_80;
  long *local_78;
  long *local_70;
  void *local_68;
  
  if (0 < param_5) {
    plVar11 = (long *)param_1[1];
    if (param_1[2] - (long)plVar11 >> 3 < param_5) {
      lVar12 = *param_1;
      uVar1 = param_5 + ((long)plVar11 - lVar12 >> 3);
      if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00bf4944();
      }
      uVar5 = param_1[2] - lVar12;
      local_80 = (void *)0x0;
      uVar8 = (long)uVar5 >> 2;
      if (uVar8 <= uVar1) {
        uVar8 = uVar1;
      }
      if (0x7ffffffffffffff7 < uVar5) {
        uVar8 = 0x1fffffffffffffff;
      }
      if (uVar8 != 0) {
        if (uVar8 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_005d55a4();
        }
        local_80 = operator_new(uVar8 << 3);
      }
      local_68 = (void *)((long)local_80 + uVar8 * 8);
      lVar13 = param_5 * 8;
      plVar11 = (long *)((long)local_80 + ((long)param_2 - lVar12));
      plVar4 = plVar11;
      local_78 = plVar11;
      if (lVar13 != 0) {
        plVar4 = plVar11 + param_5;
        do {
          if (plVar11 == (long *)0x0) {
LAB_00ce0ef4:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          puVar2 = (undefined8 *)*param_3;
          *plVar11 = (long)puVar2;
          if (puVar2 != (undefined8 *)0x0) {
            (**(code **)*puVar2)();
          }
          lVar13 = lVar13 + -8;
          plVar11 = plVar11 + 1;
          param_3 = param_3 + 1;
        } while (lVar13 != 0);
      }
      local_70 = plVar4;
      param_2 = (long *)FUN_00ce0f24(param_1,&local_80,param_2);
      plVar4 = local_78;
      plVar11 = local_70;
      while (plVar4 != plVar11) {
        plVar11 = plVar11 + -1;
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        if ((long *)*plVar11 != (long *)0x0) {
          (**(code **)(*(long *)*plVar11 + 8))();
        }
      }
      if (local_80 != (void *)0x0) {
        local_70 = plVar11;
        operator_delete(local_80);
      }
    }
    else {
      lVar12 = (long)plVar11 - (long)param_2;
      if (lVar12 >> 3 < param_5) {
        plVar14 = plVar11;
        plVar3 = plVar11;
        for (plVar4 = (long *)((long)param_3 + lVar12); plVar4 != param_4; plVar4 = plVar4 + 1) {
          if (plVar14 == (long *)0x0) goto LAB_00ce0ef4;
          puVar2 = (undefined8 *)*plVar4;
          *plVar14 = (long)puVar2;
          if (puVar2 != (undefined8 *)0x0) {
            (**(code **)*puVar2)();
          }
          plVar14 = plVar14 + 1;
          plVar3 = plVar3 + 1;
        }
        param_1[1] = (long)plVar3;
        if (0 < lVar12 >> 3) {
          plVar7 = plVar3 + -param_5;
          plVar4 = plVar3;
          if (plVar7 < plVar11) {
            plVar6 = plVar3;
            plVar9 = plVar3 + -param_5;
            do {
              if (plVar6 == (long *)0x0) goto LAB_00ce0ef4;
              lVar13 = *plVar9;
              plVar10 = plVar9 + 1;
              *plVar9 = 0;
              plVar4 = plVar6 + 1;
              *plVar6 = lVar13;
              plVar6 = plVar4;
              plVar9 = plVar10;
            } while (plVar10 < plVar11);
          }
          param_1[1] = (long)plVar4;
          if (plVar14 != param_2 + param_5) {
            do {
              plVar3 = plVar3 + -1;
              plVar7 = plVar7 + -1;
              lVar13 = *plVar7;
              *plVar7 = 0;
              plVar4 = (long *)*plVar3;
              *plVar3 = lVar13;
              if (plVar4 != (long *)0x0) {
                (**(code **)(*plVar4 + 8))();
              }
            } while (plVar7 != param_2);
          }
          plVar4 = param_2;
          if (plVar11 != param_2) {
            do {
              puVar2 = (undefined8 *)*param_3;
              if (puVar2 != (undefined8 *)0x0) {
                (**(code **)*puVar2)(puVar2);
              }
              if ((long *)*plVar4 != (long *)0x0) {
                (**(code **)(*(long *)*plVar4 + 8))();
              }
              lVar12 = lVar12 + -8;
              param_3 = param_3 + 1;
              *plVar4 = (long)puVar2;
              plVar4 = plVar4 + 1;
            } while (lVar12 != 0);
          }
        }
      }
      else {
        lVar12 = param_5 * 8;
        plVar14 = plVar11 + -param_5;
        plVar4 = plVar11;
        if (plVar14 < plVar11) {
          plVar3 = plVar11;
          plVar7 = plVar11 + -param_5;
          do {
            if (plVar3 == (long *)0x0) goto LAB_00ce0ef4;
            lVar13 = *plVar7;
            plVar6 = plVar7 + 1;
            *plVar7 = 0;
            plVar4 = plVar3 + 1;
            *plVar3 = lVar13;
            plVar3 = plVar4;
            plVar7 = plVar6;
          } while (plVar6 < plVar11);
        }
        param_1[1] = (long)plVar4;
        plVar4 = param_2;
        if (plVar11 != param_2 + param_5) {
          do {
            plVar11 = plVar11 + -1;
            plVar14 = plVar14 + -1;
            lVar13 = *plVar14;
            *plVar14 = 0;
            plVar3 = (long *)*plVar11;
            *plVar11 = lVar13;
            if (plVar3 != (long *)0x0) {
              (**(code **)(*plVar3 + 8))();
            }
          } while (plVar14 != param_2);
        }
        do {
          puVar2 = (undefined8 *)*param_3;
          if (puVar2 != (undefined8 *)0x0) {
            (**(code **)*puVar2)(puVar2);
          }
          if ((long *)*plVar4 != (long *)0x0) {
            (**(code **)(*(long *)*plVar4 + 8))();
          }
          lVar12 = lVar12 + -8;
          param_3 = param_3 + 1;
          *plVar4 = (long)puVar2;
          plVar4 = plVar4 + 1;
        } while (lVar12 != 0);
      }
    }
  }
  return param_2;
}


// ===== 00ce0f24  FUN_00ce0f24 =====

undefined8 FUN_00ce0f24(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  
  plVar16 = (long *)param_1[1];
  uVar3 = param_2[1];
  plVar5 = (long *)param_2[2];
  plVar17 = param_3;
  if (param_3 != plVar16) {
    uVar9 = (ulong)((long)plVar16 + (-8 - (long)param_3)) >> 3;
    uVar1 = (ulong)-(long)plVar5 >> 3;
    if (uVar9 <= (ulong)-(long)plVar5 >> 3) {
      uVar1 = uVar9;
    }
    if (0x2d < uVar1) {
      uVar15 = (ulong)-(long)plVar5 >> 3;
      if (uVar9 <= uVar15) {
        uVar15 = uVar9;
      }
      if (((((int)plVar16 - (int)param_3 | (uint)-(long)plVar5) & 7) == 0) &&
         (param_3 <= param_3 + uVar15 && plVar5 <= plVar5 + uVar15)) {
        uVar15 = (ulong)-(long)plVar5 >> 3;
        if (uVar9 <= (ulong)-(long)plVar5 >> 3) {
          uVar15 = uVar9;
        }
        if ((plVar5 + uVar15 + 1 <= param_3) || (param_3 + uVar15 + 1 <= plVar5)) {
          uVar9 = uVar1 + 1 & 3;
          uVar15 = 4;
          if (uVar9 != 0) {
            uVar15 = uVar9;
          }
          lVar11 = (uVar1 + 1) - uVar15;
          plVar17 = param_3 + lVar11;
          plVar8 = plVar5 + lVar11;
          plVar4 = plVar5 + 2;
          plVar14 = param_3 + 2;
          do {
            lVar13 = plVar14[-1];
            lVar6 = plVar14[-2];
            lVar20 = plVar14[1];
            lVar19 = *plVar14;
            lVar11 = lVar11 + -4;
            plVar14[-1] = 0;
            plVar14[-2] = 0;
            plVar14[1] = 0;
            *plVar14 = 0;
            plVar4[-1] = lVar13;
            plVar4[-2] = lVar6;
            plVar4[1] = lVar20;
            *plVar4 = lVar19;
            plVar4 = plVar4 + 4;
            plVar5 = plVar8;
            plVar14 = plVar14 + 4;
          } while (lVar11 != 0);
        }
      }
    }
    do {
      if (plVar5 == (long *)0x0) goto LAB_00ce1258;
      lVar11 = *plVar17;
      plVar8 = plVar17 + 1;
      *plVar17 = 0;
      *plVar5 = lVar11;
      plVar5 = plVar5 + 1;
      plVar17 = plVar8;
      plVar4 = param_3;
    } while (plVar8 != plVar16);
    do {
      if (plVar4 == (long *)0x0) goto LAB_00ce126c;
      if ((long *)*plVar4 != (long *)0x0) {
        (**(code **)(*(long *)*plVar4 + 8))();
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar16);
    plVar5 = (long *)param_2[2];
    plVar17 = (long *)param_1[1];
  }
  param_2[2] = (long)plVar5 + ((long)plVar17 - (long)param_3);
  plVar5 = (long *)*param_1;
  param_1[1] = param_3;
  lVar6 = param_2[1];
  lVar11 = (long)param_3 - (long)plVar5;
  plVar17 = (long *)(lVar6 - ((long)param_3 - (long)plVar5));
  if (lVar11 != 0) {
    uVar9 = lVar11 - 8U >> 3;
    uVar15 = (ulong)(lVar11 - lVar6) >> 3;
    uVar1 = uVar9;
    if (uVar15 <= uVar9) {
      uVar1 = uVar15;
    }
    plVar16 = plVar5;
    plVar4 = plVar17;
    if (0x31 < uVar1) {
      uVar2 = uVar9;
      if (uVar15 <= uVar9) {
        uVar2 = uVar15;
      }
      if ((((((int)param_3 - (int)plVar5 | -(int)lVar6) & 7U) == 0) && (plVar5 <= plVar5 + uVar2))
         && (plVar17 <= plVar17 + uVar2)) {
        if (uVar15 <= uVar9) {
          uVar9 = uVar15;
        }
        if (((long *)(lVar6 + ((uVar9 * 8 + 8) - lVar11)) <= plVar5) ||
           (plVar5 + uVar9 + 1 <= plVar17)) {
          uVar9 = uVar1 + 1 & 3;
          uVar15 = 4;
          if (uVar9 != 0) {
            uVar15 = uVar9;
          }
          lVar13 = (uVar1 + 1) - uVar15;
          plVar16 = plVar5 + lVar13;
          plVar4 = plVar17 + lVar13;
          plVar8 = (long *)(lVar6 + (lVar11 >> 3) * -8 + 0x10);
          plVar14 = plVar5 + 2;
          do {
            lVar6 = plVar14[-1];
            lVar11 = plVar14[-2];
            lVar20 = plVar14[1];
            lVar19 = *plVar14;
            lVar13 = lVar13 + -4;
            plVar14[-1] = 0;
            plVar14[-2] = 0;
            plVar14[1] = 0;
            *plVar14 = 0;
            plVar8[-1] = lVar6;
            plVar8[-2] = lVar11;
            plVar8[1] = lVar20;
            *plVar8 = lVar19;
            plVar8 = plVar8 + 4;
            plVar14 = plVar14 + 4;
          } while (lVar13 != 0);
        }
      }
    }
    do {
      if (plVar4 == (long *)0x0) {
LAB_00ce1258:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      lVar11 = *plVar16;
      plVar8 = plVar16 + 1;
      *plVar16 = 0;
      *plVar4 = lVar11;
      plVar16 = plVar8;
      plVar4 = plVar4 + 1;
    } while (plVar8 != param_3);
    do {
      if (plVar5 == (long *)0x0) {
LAB_00ce126c:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      if ((long *)*plVar5 != (long *)0x0) {
        (**(code **)(*(long *)*plVar5 + 8))();
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != param_3);
  }
  param_2[1] = plVar17;
  uVar7 = *param_1;
  uVar12 = param_1[2];
  param_1[1] = uVar7;
  uVar18 = param_2[1];
  uVar10 = param_2[3];
  param_1[1] = param_2[2];
  *param_1 = uVar18;
  param_1[2] = uVar10;
  param_2[1] = uVar7;
  param_2[2] = uVar7;
  param_2[3] = uVar12;
  *param_2 = uVar7;
  return uVar3;
}


// ===== 00ce1280  FUN_00ce1280 =====

long * FUN_00ce1280(long *param_1,long *param_2,long *param_3,long *param_4,long param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  void *local_80;
  long *local_78;
  long *local_70;
  void *local_68;
  
  if (0 < param_5) {
    plVar11 = (long *)param_1[1];
    if (param_1[2] - (long)plVar11 >> 3 < param_5) {
      lVar12 = *param_1;
      uVar1 = param_5 + ((long)plVar11 - lVar12 >> 3);
      if (uVar1 >> 0x3d != 0) {
        FUN_00bf495c();
LAB_00ce164c:
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      uVar5 = param_1[2] - lVar12;
      local_80 = (void *)0x0;
      uVar8 = (long)uVar5 >> 2;
      if (uVar8 <= uVar1) {
        uVar8 = uVar1;
      }
      if (0x7ffffffffffffff7 < uVar5) {
        uVar8 = 0x1fffffffffffffff;
      }
      if (uVar8 != 0) {
        if (uVar8 >> 0x3d != 0) goto LAB_00ce164c;
        local_80 = operator_new(uVar8 << 3);
      }
      local_68 = (void *)((long)local_80 + uVar8 * 8);
      lVar13 = param_5 * 8;
      plVar11 = (long *)((long)local_80 + ((long)param_2 - lVar12));
      plVar4 = plVar11;
      local_78 = plVar11;
      if (lVar13 != 0) {
        plVar4 = plVar11 + param_5;
        do {
          if (plVar11 == (long *)0x0) {
LAB_00ce1620:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          puVar2 = (undefined8 *)*param_3;
          *plVar11 = (long)puVar2;
          if (puVar2 != (undefined8 *)0x0) {
            (**(code **)*puVar2)();
          }
          lVar13 = lVar13 + -8;
          plVar11 = plVar11 + 1;
          param_3 = param_3 + 1;
        } while (lVar13 != 0);
      }
      local_70 = plVar4;
      param_2 = (long *)FUN_00ce1650(param_1,&local_80,param_2);
      plVar4 = local_78;
      plVar11 = local_70;
      while (plVar4 != plVar11) {
        plVar11 = plVar11 + -1;
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        if ((long *)*plVar11 != (long *)0x0) {
          (**(code **)(*(long *)*plVar11 + 8))();
        }
      }
      if (local_80 != (void *)0x0) {
        local_70 = plVar11;
        operator_delete(local_80);
      }
    }
    else {
      lVar12 = (long)plVar11 - (long)param_2;
      if (lVar12 >> 3 < param_5) {
        plVar14 = plVar11;
        plVar3 = plVar11;
        for (plVar4 = (long *)((long)param_3 + lVar12); plVar4 != param_4; plVar4 = plVar4 + 1) {
          if (plVar14 == (long *)0x0) goto LAB_00ce1620;
          puVar2 = (undefined8 *)*plVar4;
          *plVar14 = (long)puVar2;
          if (puVar2 != (undefined8 *)0x0) {
            (**(code **)*puVar2)();
          }
          plVar14 = plVar14 + 1;
          plVar3 = plVar3 + 1;
        }
        param_1[1] = (long)plVar3;
        if (0 < lVar12 >> 3) {
          plVar7 = plVar3 + -param_5;
          plVar4 = plVar3;
          if (plVar7 < plVar11) {
            plVar6 = plVar3;
            plVar9 = plVar3 + -param_5;
            do {
              if (plVar6 == (long *)0x0) goto LAB_00ce1620;
              lVar13 = *plVar9;
              plVar10 = plVar9 + 1;
              *plVar9 = 0;
              plVar4 = plVar6 + 1;
              *plVar6 = lVar13;
              plVar6 = plVar4;
              plVar9 = plVar10;
            } while (plVar10 < plVar11);
          }
          param_1[1] = (long)plVar4;
          if (plVar14 != param_2 + param_5) {
            do {
              plVar3 = plVar3 + -1;
              plVar7 = plVar7 + -1;
              lVar13 = *plVar7;
              *plVar7 = 0;
              plVar4 = (long *)*plVar3;
              *plVar3 = lVar13;
              if (plVar4 != (long *)0x0) {
                (**(code **)(*plVar4 + 8))();
              }
            } while (plVar7 != param_2);
          }
          plVar4 = param_2;
          if (plVar11 != param_2) {
            do {
              puVar2 = (undefined8 *)*param_3;
              if (puVar2 != (undefined8 *)0x0) {
                (**(code **)*puVar2)(puVar2);
              }
              if ((long *)*plVar4 != (long *)0x0) {
                (**(code **)(*(long *)*plVar4 + 8))();
              }
              lVar12 = lVar12 + -8;
              param_3 = param_3 + 1;
              *plVar4 = (long)puVar2;
              plVar4 = plVar4 + 1;
            } while (lVar12 != 0);
          }
        }
      }
      else {
        lVar12 = param_5 * 8;
        plVar14 = plVar11 + -param_5;
        plVar4 = plVar11;
        if (plVar14 < plVar11) {
          plVar3 = plVar11;
          plVar7 = plVar11 + -param_5;
          do {
            if (plVar3 == (long *)0x0) goto LAB_00ce1620;
            lVar13 = *plVar7;
            plVar6 = plVar7 + 1;
            *plVar7 = 0;
            plVar4 = plVar3 + 1;
            *plVar3 = lVar13;
            plVar3 = plVar4;
            plVar7 = plVar6;
          } while (plVar6 < plVar11);
        }
        param_1[1] = (long)plVar4;
        plVar4 = param_2;
        if (plVar11 != param_2 + param_5) {
          do {
            plVar11 = plVar11 + -1;
            plVar14 = plVar14 + -1;
            lVar13 = *plVar14;
            *plVar14 = 0;
            plVar3 = (long *)*plVar11;
            *plVar11 = lVar13;
            if (plVar3 != (long *)0x0) {
              (**(code **)(*plVar3 + 8))();
            }
          } while (plVar14 != param_2);
        }
        do {
          puVar2 = (undefined8 *)*param_3;
          if (puVar2 != (undefined8 *)0x0) {
            (**(code **)*puVar2)(puVar2);
          }
          if ((long *)*plVar4 != (long *)0x0) {
            (**(code **)(*(long *)*plVar4 + 8))();
          }
          lVar12 = lVar12 + -8;
          param_3 = param_3 + 1;
          *plVar4 = (long)puVar2;
          plVar4 = plVar4 + 1;
        } while (lVar12 != 0);
      }
    }
  }
  return param_2;
}


// ===== 00ce1650  FUN_00ce1650 =====

undefined8 FUN_00ce1650(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  
  plVar16 = (long *)param_1[1];
  uVar3 = param_2[1];
  plVar5 = (long *)param_2[2];
  plVar17 = param_3;
  if (param_3 != plVar16) {
    uVar9 = (ulong)((long)plVar16 + (-8 - (long)param_3)) >> 3;
    uVar1 = (ulong)-(long)plVar5 >> 3;
    if (uVar9 <= (ulong)-(long)plVar5 >> 3) {
      uVar1 = uVar9;
    }
    if (0x2d < uVar1) {
      uVar15 = (ulong)-(long)plVar5 >> 3;
      if (uVar9 <= uVar15) {
        uVar15 = uVar9;
      }
      if (((((int)plVar16 - (int)param_3 | (uint)-(long)plVar5) & 7) == 0) &&
         (param_3 <= param_3 + uVar15 && plVar5 <= plVar5 + uVar15)) {
        uVar15 = (ulong)-(long)plVar5 >> 3;
        if (uVar9 <= (ulong)-(long)plVar5 >> 3) {
          uVar15 = uVar9;
        }
        if ((plVar5 + uVar15 + 1 <= param_3) || (param_3 + uVar15 + 1 <= plVar5)) {
          uVar9 = uVar1 + 1 & 3;
          uVar15 = 4;
          if (uVar9 != 0) {
            uVar15 = uVar9;
          }
          lVar11 = (uVar1 + 1) - uVar15;
          plVar17 = param_3 + lVar11;
          plVar8 = plVar5 + lVar11;
          plVar4 = plVar5 + 2;
          plVar14 = param_3 + 2;
          do {
            lVar13 = plVar14[-1];
            lVar6 = plVar14[-2];
            lVar20 = plVar14[1];
            lVar19 = *plVar14;
            lVar11 = lVar11 + -4;
            plVar14[-1] = 0;
            plVar14[-2] = 0;
            plVar14[1] = 0;
            *plVar14 = 0;
            plVar4[-1] = lVar13;
            plVar4[-2] = lVar6;
            plVar4[1] = lVar20;
            *plVar4 = lVar19;
            plVar4 = plVar4 + 4;
            plVar5 = plVar8;
            plVar14 = plVar14 + 4;
          } while (lVar11 != 0);
        }
      }
    }
    do {
      if (plVar5 == (long *)0x0) goto LAB_00ce1984;
      lVar11 = *plVar17;
      plVar8 = plVar17 + 1;
      *plVar17 = 0;
      *plVar5 = lVar11;
      plVar5 = plVar5 + 1;
      plVar17 = plVar8;
      plVar4 = param_3;
    } while (plVar8 != plVar16);
    do {
      if (plVar4 == (long *)0x0) goto LAB_00ce1998;
      if ((long *)*plVar4 != (long *)0x0) {
        (**(code **)(*(long *)*plVar4 + 8))();
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar16);
    plVar5 = (long *)param_2[2];
    plVar17 = (long *)param_1[1];
  }
  param_2[2] = (long)plVar5 + ((long)plVar17 - (long)param_3);
  plVar5 = (long *)*param_1;
  param_1[1] = param_3;
  lVar6 = param_2[1];
  lVar11 = (long)param_3 - (long)plVar5;
  plVar17 = (long *)(lVar6 - ((long)param_3 - (long)plVar5));
  if (lVar11 != 0) {
    uVar9 = lVar11 - 8U >> 3;
    uVar15 = (ulong)(lVar11 - lVar6) >> 3;
    uVar1 = uVar9;
    if (uVar15 <= uVar9) {
      uVar1 = uVar15;
    }
    plVar16 = plVar5;
    plVar4 = plVar17;
    if (0x31 < uVar1) {
      uVar2 = uVar9;
      if (uVar15 <= uVar9) {
        uVar2 = uVar15;
      }
      if ((((((int)param_3 - (int)plVar5 | -(int)lVar6) & 7U) == 0) && (plVar5 <= plVar5 + uVar2))
         && (plVar17 <= plVar17 + uVar2)) {
        if (uVar15 <= uVar9) {
          uVar9 = uVar15;
        }
        if (((long *)(lVar6 + ((uVar9 * 8 + 8) - lVar11)) <= plVar5) ||
           (plVar5 + uVar9 + 1 <= plVar17)) {
          uVar9 = uVar1 + 1 & 3;
          uVar15 = 4;
          if (uVar9 != 0) {
            uVar15 = uVar9;
          }
          lVar13 = (uVar1 + 1) - uVar15;
          plVar16 = plVar5 + lVar13;
          plVar4 = plVar17 + lVar13;
          plVar8 = (long *)(lVar6 + (lVar11 >> 3) * -8 + 0x10);
          plVar14 = plVar5 + 2;
          do {
            lVar6 = plVar14[-1];
            lVar11 = plVar14[-2];
            lVar20 = plVar14[1];
            lVar19 = *plVar14;
            lVar13 = lVar13 + -4;
            plVar14[-1] = 0;
            plVar14[-2] = 0;
            plVar14[1] = 0;
            *plVar14 = 0;
            plVar8[-1] = lVar6;
            plVar8[-2] = lVar11;
            plVar8[1] = lVar20;
            *plVar8 = lVar19;
            plVar8 = plVar8 + 4;
            plVar14 = plVar14 + 4;
          } while (lVar13 != 0);
        }
      }
    }
    do {
      if (plVar4 == (long *)0x0) {
LAB_00ce1984:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      lVar11 = *plVar16;
      plVar8 = plVar16 + 1;
      *plVar16 = 0;
      *plVar4 = lVar11;
      plVar16 = plVar8;
      plVar4 = plVar4 + 1;
    } while (plVar8 != param_3);
    do {
      if (plVar5 == (long *)0x0) {
LAB_00ce1998:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      if ((long *)*plVar5 != (long *)0x0) {
        (**(code **)(*(long *)*plVar5 + 8))();
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != param_3);
  }
  param_2[1] = plVar17;
  uVar7 = *param_1;
  uVar12 = param_1[2];
  param_1[1] = uVar7;
  uVar18 = param_2[1];
  uVar10 = param_2[3];
  param_1[1] = param_2[2];
  *param_1 = uVar18;
  param_1[2] = uVar10;
  param_2[1] = uVar7;
  param_2[2] = uVar7;
  param_2[3] = uVar12;
  *param_2 = uVar7;
  return uVar3;
}


// ===== 00ce19ac  FUN_00ce19ac =====

void FUN_00ce19ac(undefined8 *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)*param_1;
  if (puVar4 == (undefined8 *)0x0) {
    return;
  }
  puVar3 = (undefined8 *)param_1[1];
  puVar2 = puVar4;
  if (puVar4 != puVar3) {
    do {
      puVar2 = puVar3 + -7;
      if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      if (*(char *)((long)puVar3 + -9) < '\0') {
        operator_delete((void *)puVar3[-4]);
        cVar1 = *(char *)((long)puVar3 + -0x21);
      }
      else {
        cVar1 = *(char *)((long)puVar3 + -0x21);
      }
      if (cVar1 < '\0') {
        operator_delete((void *)*puVar2);
      }
      puVar3 = puVar2;
    } while (puVar2 != puVar4);
    puVar2 = (undefined8 *)*param_1;
  }
  param_1[1] = puVar4;
  operator_delete(puVar2);
  return;
}


// ===== 00ce1a80  FUN_00ce1a80 =====

/* WARNING: Removing unreachable block (ram,0x00ce1b0c) */

void FUN_00ce1a80(undefined8 param_1,undefined8 *param_2)

{
  void *pvVar1;
  long *plVar2;
  void *pvVar3;
  undefined8 *puVar4;
  void *pvVar5;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_00ce1a80(param_1,*param_2);
      if (param_2 + 4 == (long *)0x0) {
LAB_00ce1b64:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      pvVar5 = (void *)param_2[5];
      puVar4 = (undefined8 *)param_2[1];
      if (pvVar5 != (void *)0x0) {
        pvVar3 = (void *)param_2[6];
        pvVar1 = pvVar5;
        if (pvVar5 != pvVar3) {
          do {
            pvVar3 = (void *)((long)pvVar3 + -0x18);
            if (pvVar3 == (void *)0x0) goto LAB_00ce1b64;
          } while (pvVar3 != pvVar5);
          pvVar1 = (void *)param_2[5];
        }
        param_2[6] = pvVar5;
        operator_delete(pvVar1);
      }
      plVar2 = (long *)param_2[4];
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      operator_delete(param_2);
      param_2 = puVar4;
    } while (puVar4 != (undefined8 *)0x0);
  }
  return;
}


// ===== 00ce1b78  FUN_00ce1b78 =====

void FUN_00ce1b78(long *param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *param_1;
  uVar1 = FUN_009881a4(lVar2);
  if (((uVar1 & 1) != 0) && (*(long *)(lVar2 + 8) != 0)) {
    uVar1 = FUN_009881a4(lVar2);
    lVar2 = *(long *)(lVar2 + 8);
    if ((uVar1 & 1) == 0) {
      lVar2 = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x00ce1bc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x128))(lVar2 + 0x110);
    return;
  }
  return;
}


// ===== 00ce1bdc  FUN_00ce1bdc =====

void FUN_00ce1bdc(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  void *pvVar2;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0xce1c44);
      (*pcVar1)();
    }
    pvVar2 = (void *)*param_2;
    if (pvVar2 != (void *)0x0) {
      FUN_00988344(pvVar2);
      operator_delete(pvVar2);
      return;
    }
  }
  return;
}


// ===== 00ce1c44  FUN_00ce1c44 =====

void FUN_00ce1c44(uint *param_1,uint param_2)

{
  *param_1 = *param_1 | param_2;
  return;
}


// ===== 00ce1c58  FUN_00ce1c58 =====

void FUN_00ce1c58(undefined4 *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = thunk_FUN_0066631c("WebRTC.PeerConnection.UsagePattern",0x22,0x80000);
  if (lVar1 != 0) {
    FUN_00666568(lVar1,*param_1);
  }
  if (param_2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00ce1cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0xa0))(param_2,*param_1);
    return;
  }
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) != 0) {
    return;
  }
  FUN_00623bb0(&DAT_001f1906,"../../pc/usage_pattern.cc",0x109,"Interesting usage signature ",
               *param_1," observed after observer shutdown");
  return;
}


// ===== 00ce1d04  FUN_00ce1d04 =====

/* WARNING: Removing unreachable block (ram,0x00ce258c) */
/* WARNING: Removing unreachable block (ram,0x00ce2598) */
/* WARNING: Removing unreachable block (ram,0x00ce2638) */
/* WARNING: Removing unreachable block (ram,0x00ce2644) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffec0 : 0x00ce264c */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_00ce1d04(int *param_1,long param_2)

{
  undefined8 *__s2;
  size_t sVar1;
  undefined8 *puVar2;
  char *****__n;
  char *****pppppcVar3;
  char ******__s1;
  char ******__s2_00;
  void *__src;
  byte bVar4;
  byte bVar5;
  long lVar6;
  undefined *puVar7;
  undefined *__s;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  long *plVar14;
  long *plVar15;
  void *__dest;
  void *pvVar16;
  void **ppvVar17;
  char *******pppppppcVar18;
  char *******pppppppcVar19;
  char **ppcVar20;
  undefined8 *puVar21;
  ulong uVar22;
  ulong uVar23;
  size_t sVar24;
  ulong uVar25;
  undefined8 uVar26;
  uint uVar27;
  int iVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long *extraout_x10;
  long *plVar32;
  ulong uVar33;
  undefined8 *puVar34;
  char ******ppppppcVar35;
  long lVar36;
  ulong uVar37;
  long *plVar38;
  char *pcVar39;
  char ******ppppppcVar40;
  undefined8 *puVar41;
  long *plVar42;
  long lVar43;
  undefined8 *puVar44;
  long *plVar45;
  undefined8 *local_240;
  undefined8 *local_210;
  void *local_200 [2];
  char cStack_1e9;
  char *local_1e8;
  char *******pppppppcStack_1e0;
  long local_1d8;
  undefined1 uStack_1c9;
  char *local_1c8;
  char **ppcStack_1c0;
  ulong local_1b8;
  char **ppcStack_1b0;
  char *local_1a8;
  ulong *puStack_1a0;
  char *local_198;
  char **local_190;
  char **local_188;
  char *******local_180;
  char **ppcStack_178;
  undefined8 local_170;
  void *local_168;
  char cStack_151;
  char *******local_150;
  char *******pppppppcStack_148;
  undefined8 local_140;
  size_t local_138;
  char local_129;
  byte local_100;
  long local_70;
  
  lVar6 = tpidr_el0;
  local_70 = *(long *)(lVar6 + 0x28);
  if ((param_1 == (int *)0x0) || (plVar32 = *(long **)(param_1 + 0xe), plVar32 == (long *)0x0)) {
    uVar33 = FUN_004022fc();
    if ((uVar33 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../pc/sdp_munging_detector.cc",0x12d2,
                   "SDP munging: Failed to parse session description.");
      iVar11 = 5;
    }
    else {
      iVar11 = 5;
    }
    goto LAB_00ce1e14;
  }
  if ((param_2 == 0) || (plVar45 = *(long **)(param_2 + 0x38), plVar45 == (long *)0x0)) {
    uVar33 = FUN_004022fc();
    if ((uVar33 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../pc/sdp_munging_detector.cc",0x1312,
                   "SDP munging: SetLocalDescription called without CreateOffer or CreateAnswer.");
    }
    iVar11 = 2;
    if (*param_1 == 0) {
      iVar11 = 3;
    }
    goto LAB_00ce1e14;
  }
  if (plVar32 == plVar45) {
    iVar11 = 0;
    goto LAB_00ce1e14;
  }
  lVar36 = *plVar45;
  if (plVar45[1] - lVar36 == plVar32[1] - *plVar32) {
    if (plVar45[1] != lVar36) {
      uVar33 = 0;
      do {
        if ((ulong)((plVar32[1] - *plVar32 >> 3) * -0x3333333333333333) <= uVar33)
        goto LAB_00ce3f98;
        lVar36 = lVar36 + uVar33 * 0x28;
        lVar29 = *plVar32 + uVar33 * 0x28;
        bVar4 = *(byte *)(lVar36 + 0x1f);
        bVar5 = *(byte *)(lVar29 + 0x1f);
        sVar24 = *(size_t *)(lVar36 + 0x10);
        if (-1 < (char)bVar4) {
          sVar24 = (ulong)bVar4;
        }
        sVar1 = *(size_t *)(lVar29 + 0x10);
        if (-1 < (char)bVar5) {
          sVar1 = (ulong)bVar5;
        }
        if (sVar24 != sVar1) {
LAB_00ce337c:
          uVar33 = FUN_004022fc();
          if ((uVar33 & 1) == 0) {
            FUN_00623bb0(&DAT_001f4e98,"../../pc/sdp_munging_detector.cc",0xf3a,
                         "SDP munging: mid does not match last created description.");
            iVar11 = 0x19;
          }
          else {
            iVar11 = 0x19;
          }
          goto LAB_00ce1e14;
        }
        puVar44 = (undefined8 *)*(void **)(lVar36 + 8);
        if (-1 < (char)bVar4) {
          puVar44 = (undefined8 *)(lVar36 + 8);
        }
        puVar41 = (undefined8 *)*(void **)(lVar29 + 8);
        if (-1 < (char)bVar5) {
          puVar41 = (undefined8 *)(lVar29 + 8);
        }
        iVar11 = memcmp(puVar44,puVar41,sVar24);
        if (iVar11 != 0) goto LAB_00ce337c;
        plVar14 = (long *)FUN_00b174c8(lVar36);
        if ((ulong)((plVar32[1] - *plVar32 >> 3) * -0x3333333333333333) <= uVar33)
        goto LAB_00ce3f98;
        plVar15 = (long *)FUN_00b174c8(*plVar32 + uVar33 * 0x28);
        if ((plVar14 != (long *)0x0) && (plVar15 != (long *)0x0)) {
          uVar12 = (**(code **)(*plVar14 + 0x10))(plVar14);
          __s = PTR_DAT_00d52d18;
          puVar7 = PTR_DAT_00d52248;
          if (uVar12 == 2) {
            lVar36 = (**(code **)(*plVar14 + 0x40))(plVar14);
            lVar29 = (**(code **)(*plVar15 + 0x40))(plVar15);
            plVar14 = plVar45;
            if (*(char *)(lVar36 + 0x150) == '\x01') {
              pvVar16 = *(void **)(lVar36 + 0x138);
              uVar25 = *(long *)(lVar36 + 0x140) - (long)pvVar16;
              if (uVar25 == 0) {
                plVar15 = (long *)0x0;
                __dest = (void *)0x0;
              }
              else {
                if ((long)uVar25 < 0) goto LAB_00ce4314;
                __dest = operator_new(uVar25);
                plVar15 = (long *)((long)__dest + uVar25);
                memcpy(__dest,pvVar16,uVar25);
                plVar14 = plVar15;
              }
              uVar12 = 1;
            }
            else {
              uVar12 = 0;
              __dest = (void *)0x0;
              plVar15 = extraout_x10;
            }
            if (*(char *)(lVar29 + 0x150) == '\x01') {
              __src = *(void **)(lVar29 + 0x138);
              uVar25 = *(long *)(lVar29 + 0x140) - (long)__src;
              if (uVar25 == 0) {
                plVar14 = (long *)0x0;
                pvVar16 = (void *)0x0;
                uVar27 = 1;
              }
              else {
                if ((long)uVar25 < 0) {
LAB_00ce4314:
                    /* WARNING: Subroutine does not return */
                  FUN_005d34c0();
                }
                pvVar16 = operator_new(uVar25);
                plVar14 = (long *)((long)pvVar16 + uVar25);
                memcpy(pvVar16,__src,uVar25);
                uVar27 = 1;
              }
            }
            else {
              uVar27 = 0;
              pvVar16 = (void *)0x0;
            }
            if ((uVar27 & uVar12) == 0) {
              bVar8 = uVar12 != uVar27;
              if (uVar27 != 0) goto LAB_00ce2318;
            }
            else {
              if (uVar27 == 0) {
LAB_00ce42e4:
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/optional:1064: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                          );
              }
              if ((long)plVar15 - (long)__dest == (long)plVar14 - (long)pvVar16) {
                iVar11 = memcmp(__dest,pvVar16,(long)plVar15 - (long)__dest);
                bVar8 = iVar11 != 0;
              }
              else {
                bVar8 = true;
              }
LAB_00ce2318:
              if (pvVar16 != (void *)0x0) {
                if ((long)plVar14 - 1U < (ulong)((long)plVar14 - (long)pvVar16)) goto LAB_00ce3f64;
                operator_delete(pvVar16);
              }
            }
            if ((__dest != (void *)0x0) && (uVar12 != 0)) {
              if ((long)plVar15 - 1U < (ulong)((long)plVar15 - (long)__dest)) {
LAB_00ce3f64:
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                          );
              }
              operator_delete(__dest);
            }
            if (bVar8) {
              uVar33 = FUN_004249b0();
              if ((uVar33 & 1) == 0) {
                FUN_00623bb0(&DAT_001f4e98,"../../pc/sdp_munging_detector.cc",0xe13,
                             "SDP munging: sctp-init does not match last created description.");
                iVar11 = 100;
              }
              else {
                iVar11 = 100;
              }
              goto LAB_00ce1e14;
            }
            if (*(int *)(lVar36 + 0x130) == *(int *)(lVar29 + 0x130)) {
              if (*(int *)(lVar36 + 300) == *(int *)(lVar29 + 300)) goto LAB_00ce1e4c;
              uVar33 = FUN_004022fc();
              if ((uVar33 & 1) == 0) {
                pcVar39 = "SDP munging: sctp-port does not match last created description.";
                uVar26 = 0xe82;
                goto LAB_00ce3cd8;
              }
            }
            else {
              uVar33 = FUN_004022fc();
              if ((uVar33 & 1) == 0) {
                pcVar39 = "SDP munging: max-message-size does not match last created description.";
                uVar26 = 0xe4a;
LAB_00ce3cd8:
                FUN_00623bb0(&DAT_001f4e98,"../../pc/sdp_munging_detector.cc",uVar26,pcVar39);
                iVar11 = 0x65;
                goto LAB_00ce1e14;
              }
            }
            iVar11 = 0x65;
            goto LAB_00ce1e14;
          }
          if (uVar12 < 2) {
            lVar36 = plVar14[0x22];
            lVar29 = plVar14[0x23];
            if (uVar12 == 1) {
              lVar31 = plVar15[0x22];
              lVar43 = plVar15[0x23];
              lVar30 = lVar43 - lVar31 >> 3;
              uVar25 = (lVar29 - lVar36 >> 3) * -0x7b425ed097b425ed;
              bVar8 = (ulong)(lVar30 * -0x7b425ed097b425ed) <= uVar25;
              if (bVar8 && uVar25 + lVar30 * 0x7b425ed097b425ed != 0) {
                uVar33 = FUN_004022fc();
                if ((uVar33 & 1) == 0) {
                  FUN_00623bb0(&DAT_001f4e98,"../../pc/sdp_munging_detector.cc",0xb6a,
                               "SDP munging: video codecs removed.");
                  iVar11 = 0x50;
                }
                else {
                  iVar11 = 0x50;
                }
                goto LAB_00ce1e14;
              }
              if (!bVar8) {
                if (lVar36 != lVar29) goto LAB_00ce3e1c;
                bVar8 = true;
                goto LAB_00ce412c;
              }
              lVar31 = plVar14[0xb];
              if ((plVar14[0xc] - lVar31 == 0x90) && (plVar15[0xc] - plVar15[0xb] == 0x90)) {
                lVar36 = *(long *)(lVar31 + 0x30);
                lVar29 = *(long *)(lVar31 + 0x38);
                if (lVar36 == lVar29) {
                  bVar8 = true;
                }
                else {
                  do {
                    FUN_0088cec4(&local_150,lVar36);
                    pppppppcVar18 = (char *******)strlen(__s);
                    if ((long)local_140._7_1_ < 0) {
                      if (pppppppcVar18 == pppppppcStack_148) {
                        pppppppcVar19 = local_150;
                        if (pppppppcVar18 != (char *******)0xffffffffffffffff) goto LAB_00ce209c;
                        goto LAB_00ce4310;
                      }
LAB_00ce2040:
                      FUN_0088cfa4(&local_150);
                    }
                    else {
                      if (pppppppcVar18 != (char *******)(long)local_140._7_1_) goto LAB_00ce2040;
                      pppppppcVar19 = (char *******)&local_150;
LAB_00ce209c:
                      iVar11 = memcmp(pppppppcVar19,__s,(size_t)pppppppcVar18);
                      FUN_0088cfa4(&local_150);
                      lVar31 = lVar36;
                      if (iVar11 == 0) break;
                    }
                    lVar36 = lVar36 + 0x30;
                    lVar31 = lVar29;
                  } while (lVar36 != lVar29);
                  if (plVar14[0xc] == plVar14[0xb]) goto LAB_00ce3f98;
                  bVar8 = lVar31 == *(long *)(plVar14[0xb] + 0x38);
                }
                lVar36 = plVar15[0xb];
                if (plVar15[0xc] == lVar36) goto LAB_00ce3f98;
                lVar29 = *(long *)(lVar36 + 0x30);
                lVar36 = *(long *)(lVar36 + 0x38);
                if (lVar29 != lVar36) {
                  do {
                    FUN_0088cec4(&local_150,lVar29);
                    pppppppcVar18 = (char *******)strlen(__s);
                    if ((long)local_140._7_1_ < 0) {
                      if (pppppppcVar18 == pppppppcStack_148) {
                        pppppppcVar19 = local_150;
                        if (pppppppcVar18 != (char *******)0xffffffffffffffff) goto LAB_00ce2ac0;
                        goto LAB_00ce4310;
                      }
LAB_00ce2a64:
                      FUN_0088cfa4(&local_150);
                    }
                    else {
                      if (pppppppcVar18 != (char *******)(long)local_140._7_1_) goto LAB_00ce2a64;
                      pppppppcVar19 = (char *******)&local_150;
LAB_00ce2ac0:
                      iVar11 = memcmp(pppppppcVar19,__s,(size_t)pppppppcVar18);
                      FUN_0088cfa4(&local_150);
                      lVar31 = lVar29;
                      if (iVar11 == 0) break;
                    }
                    lVar29 = lVar29 + 0x30;
                    lVar31 = lVar36;
                  } while (lVar29 != lVar36);
                  if (plVar15[0xc] == plVar15[0xb]) goto LAB_00ce3f98;
                  bVar10 = false;
                  if (lVar31 != *(long *)(plVar15[0xb] + 0x38)) {
                    bVar10 = bVar8;
                  }
                  if (bVar10) {
                    uVar33 = FUN_004022fc();
                    if ((uVar33 & 1) == 0) {
                      FUN_00623bb0(&DAT_001f4e98,"../../pc/sdp_munging_detector.cc",0xcba,
                                   "SDP munging: legacy simulcast group created.");
                      iVar11 = 0x53;
                    }
                    else {
                      iVar11 = 0x53;
                    }
                    goto LAB_00ce1e14;
                  }
                }
                lVar36 = plVar14[0x22];
                lVar29 = plVar14[0x23];
              }
              if (lVar36 == lVar29) {
                bVar8 = true;
                pcVar39 = PTR_DAT_00d51c78;
              }
              else {
                do {
                  FUN_00890830(&local_150,lVar36);
                  local_180 = (char *******)0x0;
                  ppcStack_178 = (char **)0x0;
                  local_170 = (undefined1 *)0x0;
                  sVar24 = strlen("H264");
                  if ((long)local_129 < 0) {
                    if (sVar24 == local_138) {
                      ppvVar17 = local_140;
                      if (sVar24 != 0xffffffffffffffff) goto LAB_00ce2b80;
                      goto LAB_00ce4310;
                    }
LAB_00ce2b1c:
                    FUN_00890cb8(&local_150);
                  }
                  else {
                    ppvVar17 = (void **)&local_140;
                    if (sVar24 != (long)local_129) goto LAB_00ce2b1c;
LAB_00ce2b80:
                    iVar11 = memcmp(ppvVar17,&DAT_001ff313,sVar24);
                    if (iVar11 != 0) goto LAB_00ce2b1c;
                    FUN_005d3510(&local_198,PTR_s_sps_pps_idr_in_keyframe_00d52000);
                    uVar25 = FUN_00891570(&local_150,&local_198,&local_180);
                    if ((uVar25 & 1) == 0) {
LAB_00ce2c08:
                      bVar8 = false;
                    }
                    else {
                      ppcVar20 = (char **)strlen("1");
                      if ((long)local_170._7_1_ < 0) {
                        if (ppcVar20 != ppcStack_178) goto LAB_00ce2c08;
                        pppppppcVar18 = local_180;
                        if (ppcVar20 == (char **)0xffffffffffffffff) goto LAB_00ce4310;
                      }
                      else {
                        if (ppcVar20 != (char **)(long)local_170._7_1_) goto LAB_00ce2c08;
                        pppppppcVar18 = (char *******)&local_180;
                      }
                      iVar11 = memcmp(pppppppcVar18,&DAT_001ff254,(size_t)ppcVar20);
                      bVar8 = iVar11 == 0;
                    }
                    if ((long)local_188 < 0) {
                      operator_delete(local_198);
                    }
                    if ((long)local_170 < 0) {
                      operator_delete(local_180);
                    }
                    FUN_00890cb8(&local_150);
                    lVar31 = lVar36;
                    if (bVar8) break;
                  }
                  lVar36 = lVar36 + 0xd8;
                  lVar31 = lVar29;
                } while (lVar36 != lVar29);
                bVar8 = lVar31 == plVar14[0x23];
                pcVar39 = "H264";
              }
              lVar36 = plVar15[0x22];
              lVar29 = plVar15[0x23];
              if (lVar36 != lVar29) {
                do {
                  FUN_00890830(&local_150,lVar36);
                  local_180 = (char *******)0x0;
                  ppcStack_178 = (char **)0x0;
                  local_170 = (undefined1 *)0x0;
                  sVar24 = strlen(pcVar39);
                  if ((long)local_129 < 0) {
                    if (sVar24 == local_138) {
                      ppvVar17 = local_140;
                      if (sVar24 != 0xffffffffffffffff) goto LAB_00ce2cec;
                      goto LAB_00ce4310;
                    }
LAB_00ce2c88:
                    FUN_00890cb8(&local_150);
                  }
                  else {
                    ppvVar17 = (void **)&local_140;
                    if (sVar24 != (long)local_129) goto LAB_00ce2c88;
LAB_00ce2cec:
                    iVar11 = memcmp(ppvVar17,pcVar39,sVar24);
                    if (iVar11 != 0) goto LAB_00ce2c88;
                    FUN_005d3510(&local_198,PTR_s_sps_pps_idr_in_keyframe_00d52000);
                    uVar25 = FUN_00891570(&local_150,&local_198,&local_180);
                    if ((uVar25 & 1) == 0) {
LAB_00ce2d74:
                      bVar10 = false;
                    }
                    else {
                      ppcVar20 = (char **)strlen("1");
                      if ((long)local_170._7_1_ < 0) {
                        if (ppcVar20 != ppcStack_178) goto LAB_00ce2d74;
                        pppppppcVar18 = local_180;
                        if (ppcVar20 == (char **)0xffffffffffffffff) {
LAB_00ce4310:
                    /* WARNING: Subroutine does not return */
                          FUN_005f5590();
                        }
                      }
                      else {
                        if (ppcVar20 != (char **)(long)local_170._7_1_) goto LAB_00ce2d74;
                        pppppppcVar18 = (char *******)&local_180;
                      }
                      iVar11 = memcmp(pppppppcVar18,&DAT_001ff254,(size_t)ppcVar20);
                      bVar10 = iVar11 == 0;
                    }
                    if ((long)local_188 < 0) {
                      operator_delete(local_198);
                    }
                    if ((long)local_170 < 0) {
                      operator_delete(local_180);
                    }
                    FUN_00890cb8(&local_150);
                    lVar31 = lVar36;
                    if (bVar10) break;
                  }
                  lVar36 = lVar36 + 0xd8;
                  lVar31 = lVar29;
                } while (lVar36 != lVar29);
                bVar8 = (bool)(bVar8 ^ 1);
                if (lVar31 == plVar15[0x23]) {
                  bVar8 = true;
                }
                if (!bVar8) {
                  uVar33 = FUN_004022fc();
                  if ((uVar33 & 1) == 0) {
                    FUN_00623bb0(&DAT_001f4e98,"../../pc/sdp_munging_detector.cc",0xd7a,
                                 "SDP munging: sps-pps-idr-in-keyframe enabled.");
                    iVar11 = 0x54;
                  }
                  else {
                    iVar11 = 0x54;
                  }
                  goto LAB_00ce1e14;
                }
              }
            }
            else {
              lVar31 = plVar15[0x22];
              lVar43 = plVar15[0x23];
              if ((ulong)(lVar43 - lVar31) < (ulong)(lVar29 - lVar36)) {
                uVar33 = FUN_004022fc();
                if ((uVar33 & 1) == 0) {
                  FUN_00623bb0(&DAT_001f4e98,"../../pc/sdp_munging_detector.cc",0x3aa,
                               "SDP munging: audio codecs removed.");
                  iVar11 = 0x3c;
                }
                else {
                  iVar11 = 0x3c;
                }
                goto LAB_00ce1e14;
              }
              if (lVar36 == lVar29) {
                bVar8 = true;
              }
              else {
                do {
                  FUN_00890830(&local_150,lVar36);
                  local_180 = (char *******)0x0;
                  ppcStack_178 = (char **)0x0;
                  local_170 = (undefined1 *)0x0;
                  sVar24 = strlen(PTR_DAT_00d521c8);
                  if ((long)local_129 < 0) {
                    if (sVar24 == local_138) {
                      ppvVar17 = local_140;
                      if (sVar24 != 0xffffffffffffffff) goto LAB_00ce214c;
                      goto LAB_00ce4310;
                    }
LAB_00ce20e4:
                    FUN_00890cb8(&local_150);
                  }
                  else {
                    ppvVar17 = (void **)&local_140;
                    if (sVar24 != (long)local_129) goto LAB_00ce20e4;
LAB_00ce214c:
                    iVar11 = memcmp(ppvVar17,&DAT_001ff1f2,sVar24);
                    if (iVar11 != 0) goto LAB_00ce20e4;
                    FUN_005d3510(&local_198,PTR_s_stereo_00d52208);
                    uVar25 = FUN_00891570(&local_150,&local_198,&local_180);
                    if ((uVar25 & 1) == 0) {
LAB_00ce21d8:
                      bVar8 = false;
                    }
                    else {
                      ppcVar20 = (char **)strlen("1");
                      if ((long)local_170._7_1_ < 0) {
                        if (ppcVar20 != ppcStack_178) goto LAB_00ce21d8;
                        pppppppcVar18 = local_180;
                        if (ppcVar20 == (char **)0xffffffffffffffff) goto LAB_00ce4310;
                      }
                      else {
                        if (ppcVar20 != (char **)(long)local_170._7_1_) goto LAB_00ce21d8;
                        pppppppcVar18 = (char *******)&local_180;
                      }
                      iVar11 = memcmp(pppppppcVar18,&DAT_001ff254,(size_t)ppcVar20);
                      bVar8 = iVar11 == 0;
                    }
                    if ((long)local_188 < 0) {
                      operator_delete(local_198);
                    }
                    if ((long)local_170 < 0) {
                      operator_delete(local_180);
                    }
                    FUN_00890cb8(&local_150);
                    lVar30 = lVar36;
                    if (bVar8) break;
                  }
                  lVar36 = lVar36 + 0xd8;
                  lVar30 = lVar29;
                } while (lVar36 != lVar29);
                lVar31 = plVar15[0x22];
                lVar43 = plVar15[0x23];
                bVar8 = lVar30 == plVar14[0x23];
              }
              if (lVar31 != lVar43) {
                do {
                  FUN_00890830(&local_150,lVar31);
                  local_180 = (char *******)0x0;
                  ppcStack_178 = (char **)0x0;
                  local_170 = (undefined1 *)0x0;
                  sVar24 = strlen(PTR_DAT_00d521c8);
                  if ((long)local_129 < 0) {
                    if (sVar24 == local_138) {
                      ppvVar17 = local_140;
                      if (sVar24 != 0xffffffffffffffff) goto LAB_00ce244c;
                      goto LAB_00ce4310;
                    }
LAB_00ce23e0:
                    FUN_00890cb8(&local_150);
                  }
                  else {
                    ppvVar17 = (void **)&local_140;
                    if (sVar24 != (long)local_129) goto LAB_00ce23e0;
LAB_00ce244c:
                    iVar11 = memcmp(ppvVar17,&DAT_001ff1f2,sVar24);
                    if (iVar11 != 0) goto LAB_00ce23e0;
                    FUN_005d3510(&local_198,PTR_s_stereo_00d52208);
                    uVar25 = FUN_00891570(&local_150,&local_198,&local_180);
                    if ((uVar25 & 1) == 0) {
LAB_00ce24d8:
                      bVar10 = false;
                    }
                    else {
                      ppcVar20 = (char **)strlen("1");
                      if ((long)local_170._7_1_ < 0) {
                        if (ppcVar20 != ppcStack_178) goto LAB_00ce24d8;
                        pppppppcVar18 = local_180;
                        if (ppcVar20 == (char **)0xffffffffffffffff) goto LAB_00ce4310;
                      }
                      else {
                        if (ppcVar20 != (char **)(long)local_170._7_1_) goto LAB_00ce24d8;
                        pppppppcVar18 = (char *******)&local_180;
                      }
                      iVar11 = memcmp(pppppppcVar18,&DAT_001ff254,(size_t)ppcVar20);
                      bVar10 = iVar11 == 0;
                    }
                    if ((long)local_188 < 0) {
                      operator_delete(local_198);
                    }
                    if ((long)local_170 < 0) {
                      operator_delete(local_180);
                    }
                    FUN_00890cb8(&local_150);
                    lVar36 = lVar31;
                    if (bVar10) break;
                  }
                  lVar31 = lVar31 + 0xd8;
                  lVar36 = lVar43;
                } while (lVar31 != lVar43);
                lVar43 = plVar15[0x23];
                bVar8 = (bool)(bVar8 ^ 1);
                if (lVar36 == lVar43) {
                  bVar8 = true;
                }
                if (!bVar8) {
                  uVar33 = FUN_004022fc();
                  if ((uVar33 & 1) == 0) {
                    FUN_00623bb0(&DAT_001f4e98,"../../pc/sdp_munging_detector.cc",0x46a,
                                 "SDP munging: Opus stereo enabled.");
                    iVar11 = 0x44;
                  }
                  else {
                    iVar11 = 0x44;
                  }
                  goto LAB_00ce1e14;
                }
              }
              lVar36 = plVar14[0x22];
              lVar29 = plVar14[0x23];
              if (lVar36 == lVar29) {
                bVar8 = true;
              }
              else {
                do {
                  FUN_00890830(&local_150,lVar36);
                  if (local_129 == '\t') {
                    bVar8 = local_140 == (void **)0x75706f69746c756d;
                    bVar10 = (char)local_138 == 's';
                    FUN_00890cb8(&local_150);
                    lVar31 = lVar36;
                    if (bVar8 && bVar10) break;
                  }
                  else {
                    FUN_00890cb8(&local_150);
                  }
                  lVar36 = lVar36 + 0xd8;
                  lVar31 = lVar29;
                } while (lVar36 != lVar29);
                lVar43 = plVar15[0x23];
                bVar8 = lVar31 == plVar14[0x23];
              }
              lVar36 = plVar15[0x22];
              if (lVar36 != lVar43) {
                do {
                  FUN_00890830(&local_150,lVar36);
                  if (local_129 == '\t') {
                    bVar10 = local_140 == (void **)0x75706f69746c756d;
                    bVar9 = (char)local_138 == 's';
                    FUN_00890cb8(&local_150);
                    lVar29 = lVar36;
                    if (bVar10 && bVar9) break;
                  }
                  else {
                    FUN_00890cb8(&local_150);
                  }
                  lVar36 = lVar36 + 0xd8;
                  lVar29 = lVar43;
                } while (lVar36 != lVar43);
                lVar43 = plVar15[0x23];
                bVar8 = (bool)(bVar8 ^ 1);
                if (lVar29 == lVar43) {
                  bVar8 = true;
                }
                if (!bVar8) {
                  uVar33 = FUN_004022fc();
                  if ((uVar33 & 1) == 0) {
                    FUN_00623bb0(&DAT_001f4e98,"../../pc/sdp_munging_detector.cc",0x4ea,
                                 "SDP munging: multiopus enabled.");
                    iVar11 = 0x3f;
                  }
                  else {
                    iVar11 = 0x3f;
                  }
                  goto LAB_00ce1e14;
                }
              }
              lVar36 = plVar14[0x22];
              lVar29 = plVar14[0x23];
              if (lVar36 == lVar29) {
                bVar8 = true;
              }
              else {
                do {
                  FUN_00890830(&local_150,lVar36);
                  sVar24 = strlen("L16");
                  if ((long)local_129 < 0) {
                    if (sVar24 == local_138) {
                      ppvVar17 = local_140;
                      if (sVar24 != 0xffffffffffffffff) goto LAB_00ce2718;
                      goto LAB_00ce4310;
                    }
LAB_00ce26b8:
                    FUN_00890cb8(&local_150);
                  }
                  else {
                    ppvVar17 = (void **)&local_140;
                    if (sVar24 != (long)local_129) goto LAB_00ce26b8;
LAB_00ce2718:
                    iVar11 = memcmp(ppvVar17,&DAT_001ff1f7,sVar24);
                    FUN_00890cb8(&local_150);
                    lVar31 = lVar36;
                    if (iVar11 == 0) break;
                  }
                  lVar36 = lVar36 + 0xd8;
                  lVar31 = lVar29;
                } while (lVar36 != lVar29);
                lVar43 = plVar15[0x23];
                bVar8 = lVar31 == plVar14[0x23];
              }
              lVar36 = plVar15[0x22];
              if (lVar36 != lVar43) {
                do {
                  FUN_00890830(&local_150,lVar36);
                  sVar24 = strlen("L16");
                  if ((long)local_129 < 0) {
                    if (sVar24 == local_138) {
                      ppvVar17 = local_140;
                      if (sVar24 != 0xffffffffffffffff) goto LAB_00ce27c8;
                      goto LAB_00ce4310;
                    }
LAB_00ce2768:
                    FUN_00890cb8(&local_150);
                  }
                  else {
                    ppvVar17 = (void **)&local_140;
                    if (sVar24 != (long)local_129) goto LAB_00ce2768;
LAB_00ce27c8:
                    iVar11 = memcmp(ppvVar17,&DAT_001ff1f7,sVar24);
                    FUN_00890cb8(&local_150);
                    lVar29 = lVar36;
                    if (iVar11 == 0) break;
                  }
                  lVar36 = lVar36 + 0xd8;
                  lVar29 = lVar43;
                } while (lVar36 != lVar43);
                bVar8 = (bool)(bVar8 ^ 1);
                lVar43 = plVar15[0x23];
                if (lVar29 == lVar43) {
                  bVar8 = true;
                }
                if (!bVar8) {
                  uVar33 = FUN_004022fc();
                  if ((uVar33 & 1) == 0) {
                    FUN_00623bb0(&DAT_001f4e98,"../../pc/sdp_munging_detector.cc",0x562,
                                 "SDP munging: L16 enabled.");
                    iVar11 = 0x40;
                  }
                  else {
                    iVar11 = 0x40;
                  }
                  goto LAB_00ce1e14;
                }
              }
              lVar29 = plVar15[0x22];
              lVar36 = plVar14[0x22];
              lVar31 = plVar14[0x23];
              if ((ulong)(lVar31 - lVar36) < (ulong)(lVar43 - lVar29)) {
                uVar33 = FUN_004022fc();
                if ((uVar33 & 1) == 0) {
                  FUN_00623bb0(&DAT_001f4e98,"../../pc/sdp_munging_detector.cc",0x592,
                               "SDP munging: audio codecs added.");
                  iVar11 = 0x3d;
                }
                else {
                  iVar11 = 0x3d;
                }
                goto LAB_00ce1e14;
              }
              if (lVar36 == lVar31) {
                bVar8 = true;
              }
              else {
                do {
                  FUN_00890830(&local_150,lVar36);
                  sVar24 = strlen(puVar7);
                  FUN_00bf4a50(&local_180,puVar7,sVar24);
                  uVar25 = FUN_00891978(&local_150,&local_180);
                  if (cStack_151 < '\0') {
                    operator_delete(local_168);
                  }
                  if ((long)local_170 < 0) {
                    operator_delete(local_180);
                  }
                  FUN_00890cb8(&local_150);
                  lVar30 = lVar36;
                } while (((uVar25 & 1) == 0) &&
                        (lVar36 = lVar36 + 0xd8, lVar30 = lVar31, lVar36 != lVar31));
                lVar29 = plVar15[0x22];
                lVar43 = plVar15[0x23];
                bVar8 = lVar30 == plVar14[0x23];
              }
              if (lVar29 != lVar43) {
                do {
                  FUN_00890830(&local_150,lVar29);
                  sVar24 = strlen(puVar7);
                  FUN_00bf4a50(&local_180,puVar7,sVar24);
                  uVar25 = FUN_00891978(&local_150,&local_180);
                  if (cStack_151 < '\0') {
                    operator_delete(local_168);
                  }
                  if ((long)local_170 < 0) {
                    operator_delete(local_180);
                  }
                  FUN_00890cb8(&local_150);
                  lVar36 = lVar29;
                } while (((uVar25 & 1) == 0) &&
                        (lVar29 = lVar29 + 0xd8, lVar36 = lVar43, lVar29 != lVar43));
                bVar8 = (bool)(bVar8 ^ 1);
                if (lVar36 == plVar15[0x23]) {
                  bVar8 = true;
                }
                if (!bVar8) {
                  uVar33 = FUN_004022fc();
                  if ((uVar33 & 1) == 0) {
                    FUN_00623bb0(&DAT_001f4e98,"../../pc/sdp_munging_detector.cc",0x612,
                                 "SDP munging: audio nack enabled.");
                    iVar11 = 0x41;
                  }
                  else {
                    iVar11 = 0x41;
                  }
                  goto LAB_00ce1e14;
                }
              }
              lVar36 = FUN_00ce4c78(plVar14 + 0x22);
              lVar31 = plVar14[0x23];
              lVar29 = FUN_00ce4d78(plVar15 + 0x22);
              if ((lVar31 == lVar36) && (plVar15[0x23] != lVar29)) {
                uVar33 = FUN_004022fc();
                if ((uVar33 & 1) == 0) {
                  FUN_00623bb0(&DAT_001f4e98,"../../pc/sdp_munging_detector.cc",0x692,
                               "SDP munging: audio rrtr enabled.");
                  iVar11 = 0x48;
                }
                else {
                  iVar11 = 0x48;
                }
                goto LAB_00ce1e14;
              }
              lVar36 = FUN_00ce4e78(plVar14 + 0x22);
              lVar31 = plVar14[0x23];
              lVar29 = FUN_00ce5054(plVar15 + 0x22);
              if ((lVar31 != lVar36) && (plVar15[0x23] == lVar29)) {
                uVar33 = FUN_004022fc();
                if ((uVar33 & 1) == 0) {
                  FUN_00623bb0(&DAT_001f4e98,"../../pc/sdp_munging_detector.cc",0x752,
                               "SDP munging: Opus FEC disabled.");
                  iVar11 = 0x42;
                }
                else {
                  iVar11 = 0x42;
                }
                goto LAB_00ce1e14;
              }
              lVar36 = FUN_00ce5230(plVar14 + 0x22);
              lVar31 = plVar14[0x23];
              lVar29 = FUN_00ce540c(plVar15 + 0x22);
              if ((lVar31 == lVar36) && (plVar15[0x23] != lVar29)) {
                uVar33 = FUN_004022fc();
                if ((uVar33 & 1) == 0) {
                  FUN_00623bb0(&DAT_001f4e98,"../../pc/sdp_munging_detector.cc",0x802,
                               "SDP munging: Opus DTX enabled.");
                  iVar11 = 0x45;
                }
                else {
                  iVar11 = 0x45;
                }
                goto LAB_00ce1e14;
              }
              lVar36 = FUN_00ce55e8(plVar14 + 0x22);
              lVar31 = plVar14[0x23];
              lVar29 = FUN_00ce57c4(plVar15 + 0x22);
              if ((lVar31 == lVar36) && (plVar15[0x23] != lVar29)) {
                uVar33 = FUN_004022fc();
                if ((uVar33 & 1) == 0) {
                  FUN_00623bb0(&DAT_001f4e98,"../../pc/sdp_munging_detector.cc",0x8ba,
                               "SDP munging: Opus CBR enabled.");
                  iVar11 = 0x43;
                }
                else {
                  iVar11 = 0x43;
                }
                goto LAB_00ce1e14;
              }
            }
            if ((char)plVar14[4] == (char)plVar15[4]) {
              if (*(char *)((long)plVar14 + 0x21) == *(char *)((long)plVar15 + 0x21)) {
                iVar13 = (**(code **)(*plVar14 + 0x10))(plVar14);
                lVar36 = plVar14[0x22];
                lVar29 = plVar14[0x23];
                uVar25 = lVar29 - lVar36;
                if (uVar25 == 0) {
                  local_210 = (undefined8 *)0x0;
                  puVar44 = (undefined8 *)0x0;
                }
                else {
                  if (0x12f684bda12f684 < (ulong)(((long)uVar25 >> 3) * -0x7b425ed097b425ed))
                  goto LAB_00ce4318;
                  local_210 = (undefined8 *)operator_new(uVar25);
                  puVar44 = local_210;
                  do {
                    if (puVar44 == (undefined8 *)0x0) goto LAB_00ce3e00;
                    FUN_00890830(puVar44,lVar36);
                    lVar36 = lVar36 + 0xd8;
                    puVar44 = puVar44 + 0x1b;
                  } while (lVar36 != lVar29);
                }
                lVar36 = plVar15[0x22];
                lVar29 = plVar15[0x23];
                uVar25 = lVar29 - lVar36;
                if (uVar25 == 0) {
                  puVar21 = (undefined8 *)0x0;
                  puVar41 = (undefined8 *)0x0;
                }
                else {
                  if (0x12f684bda12f684 < (ulong)(((long)uVar25 >> 3) * -0x7b425ed097b425ed)) {
LAB_00ce4318:
                    /* WARNING: Subroutine does not return */
                    FUN_0088fd20();
                  }
                  puVar21 = (undefined8 *)operator_new(uVar25);
                  puVar41 = puVar21;
                  do {
                    if (puVar41 == (undefined8 *)0x0) {
LAB_00ce3e00:
                    /* WARNING: Subroutine does not return */
                      std::__Cr::__libcpp_verbose_abort
                                ("%s",
                                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                                );
                    }
                    FUN_00890830(puVar41,lVar36);
                    lVar36 = lVar36 + 0xd8;
                    puVar41 = puVar41 + 0x1b;
                  } while (lVar36 != lVar29);
                }
                lVar36 = (long)puVar44 - (long)local_210;
                iVar11 = 0;
                if ((lVar36 != 0) && (lVar36 == (long)puVar41 - (long)puVar21)) {
                  uVar25 = 0;
                  uVar37 = (lVar36 >> 3) * -0x7b425ed097b425ed;
                  local_240 = puVar21;
                  do {
                    puVar2 = local_210 + uVar25 * 0x1b;
                    uVar22 = FUN_008911c8(puVar2);
                    puVar34 = local_240;
                    uVar23 = uVar25;
                    if ((uVar22 & 1) != 0) goto LAB_00ce2f6c;
                    while (uVar23 + 1 < uVar37) {
                      uVar22 = FUN_008911c8(puVar2,puVar34 + 0x1b);
                      puVar34 = puVar34 + 0x1b;
                      uVar23 = uVar23 + 1;
                      if ((uVar22 & 1) != 0) {
                        iVar11 = 0x3e;
                        if (iVar13 != 0) {
                          iVar11 = 0x52;
                        }
                        goto joined_r0x00ce3124;
                      }
                    }
                    bVar4 = *(byte *)((long)puVar2 + 0x27);
                    bVar5 = *(byte *)((long)puVar21 + uVar25 * 0xd8 + 0x27);
                    sVar24 = puVar2[3];
                    if (-1 < (char)bVar4) {
                      sVar24 = (ulong)bVar4;
                    }
                    sVar1 = puVar21[uVar25 * 0x1b + 3];
                    if (-1 < (char)bVar5) {
                      sVar1 = (ulong)bVar5;
                    }
                    if (sVar24 == sVar1) {
                      puVar34 = (undefined8 *)puVar2[2];
                      if (-1 < (char)bVar4) {
                        puVar34 = puVar2 + 2;
                      }
                      __s2 = (undefined8 *)puVar21[uVar25 * 0x1b + 2];
                      if (-1 < (char)bVar5) {
                        __s2 = puVar21 + uVar25 * 0x1b + 2;
                      }
                      iVar11 = memcmp(puVar34,__s2,sVar24);
                      if ((iVar11 == 0) &&
                         (*(int *)((long)puVar2 + 0xc) !=
                          *(int *)((long)puVar21 + uVar25 * 0xd8 + 0xc))) {
                        iVar11 = 0x1a;
                        goto joined_r0x00ce3124;
                      }
                    }
                    if ((puVar2[0x17] != puVar21[uVar25 * 0x1b + 0x17]) ||
                       (uVar23 = FUN_00667cd4(puVar2[0x15],puVar2 + 0x16,
                                              puVar21[uVar25 * 0x1b + 0x15]), (uVar23 & 1) == 0)) {
                      iVar11 = 0x46;
                      iVar28 = 0x55;
LAB_00ce331c:
                      if (iVar13 != 0) {
                        iVar11 = iVar28;
                      }
                      goto joined_r0x00ce3124;
                    }
                    uVar23 = FUN_00890098(puVar2 + 0x18,puVar21 + uVar25 * 0x1b + 0x18);
                    if ((uVar23 & 1) == 0) {
                      iVar11 = 0x47;
                      iVar28 = 0x56;
                      goto LAB_00ce331c;
                    }
                    if (iVar13 == 1) {
                      bVar4 = *(byte *)(puVar21 + uVar25 * 0x1b + 10);
                      if ((bVar4 & *(byte *)(puVar2 + 10)) == 0) {
                        if (*(byte *)(puVar2 + 10) == bVar4) goto LAB_00ce2f6c;
                      }
                      else {
                        if ((bVar4 & 1) == 0) goto LAB_00ce42e4;
                        bVar4 = *(byte *)((long)puVar2 + 0x4f);
                        bVar5 = *(byte *)((long)puVar21 + uVar25 * 0xd8 + 0x4f);
                        sVar24 = puVar2[8];
                        if (-1 < (char)bVar4) {
                          sVar24 = (ulong)bVar4;
                        }
                        sVar1 = puVar21[uVar25 * 0x1b + 8];
                        if (-1 < (char)bVar5) {
                          sVar1 = (ulong)bVar5;
                        }
                        if (sVar24 == sVar1) {
                          puVar34 = (undefined8 *)puVar2[7];
                          if (-1 < (char)bVar4) {
                            puVar34 = puVar2 + 7;
                          }
                          puVar2 = (undefined8 *)puVar21[uVar25 * 0x1b + 7];
                          if (-1 < (char)bVar5) {
                            puVar2 = puVar21 + uVar25 * 0x1b + 7;
                          }
                          iVar11 = memcmp(puVar34,puVar2,sVar24);
                          if (iVar11 == 0) goto LAB_00ce2f6c;
                        }
                      }
                      iVar11 = 0x58;
                      goto joined_r0x00ce3124;
                    }
LAB_00ce2f6c:
                    uVar25 = uVar25 + 1;
                    local_240 = local_240 + 0x1b;
                  } while (uVar25 != uVar37);
                  iVar11 = 0;
                }
joined_r0x00ce3124:
                if (puVar21 != (undefined8 *)0x0) {
                  while (puVar21 != puVar41) {
                    puVar41 = puVar41 + -0x1b;
                    if (puVar41 == (undefined8 *)0x0) goto LAB_00ce3f64;
                    (**(code **)*puVar41)(puVar41);
                  }
                  operator_delete(puVar21);
                }
                if (local_210 != (undefined8 *)0x0) {
                  while (local_210 != puVar44) {
                    puVar44 = puVar44 + -0x1b;
                    if (puVar44 == (undefined8 *)0x0) goto LAB_00ce3f64;
                    (**(code **)*puVar44)(puVar44);
                  }
                  operator_delete(local_210);
                }
                if (iVar11 == 0) {
                  if (*(int *)((long)plVar14 + 0x74) == *(int *)((long)plVar15 + 0x74)) {
                    lVar36 = plVar14[0xb];
                    lVar29 = plVar14[0xc] - lVar36;
                    if (lVar29 == plVar15[0xc] - plVar15[0xb]) {
                      if (plVar14[0xc] != lVar36) {
                        plVar38 = (long *)(plVar15[0xb] + 0x20);
                        plVar42 = (long *)(lVar36 + 0x20);
                        lVar36 = (lVar29 >> 4) * -0x71c71c71c71c71c7;
                        do {
                          sVar24 = *plVar42 - plVar42[-1];
                          if ((sVar24 != *plVar38 - plVar38[-1]) ||
                             (iVar11 = memcmp((void *)plVar42[-1],(void *)plVar38[-1],sVar24),
                             iVar11 != 0)) {
                            uVar33 = FUN_004022fc();
                            if ((uVar33 & 1) != 0) goto LAB_00ce3394;
                            pcVar39 = "SDP munging: SSRCs do not match last created description.";
                            uVar26 = 0x1172;
                            goto LAB_00ce388c;
                          }
                          lVar36 = lVar36 + -1;
                          plVar38 = plVar38 + 0x12;
                          plVar42 = plVar42 + 0x12;
                        } while (lVar36 != 0);
                      }
                      pppppppcStack_148 = (char *******)&DAT_aaaaaaaaaaaaaaaa;
                      local_150 = (char *******)&DAT_aaaaaaaaaaaaaaaa;
                      local_140 = (void **)&DAT_aaaaaaaaaaaaaaaa;
                      FUN_0066974c(&local_150,plVar14 + 8);
                      local_170 = &DAT_aaaaaaaaaaaaaaaa;
                      ppcStack_178 = (char **)&DAT_aaaaaaaaaaaaaaaa;
                      local_180 = (char *******)&DAT_aaaaaaaaaaaaaaaa;
                      FUN_0066974c(&local_180,plVar15 + 8);
                      uVar25 = (long)pppppppcStack_148 - (long)local_150 >> 5;
                      uVar37 = (long)ppcStack_178 - (long)local_180 >> 5;
                      if (uVar25 < uVar37) {
                        uVar33 = FUN_004022fc();
                        if ((uVar33 & 1) == 0) {
                          FUN_00623bb0(&DAT_001f4e98,"../../pc/sdp_munging_detector.cc",0x11ca,
                                       "SDP munging: RTP header extension added.");
                        }
                        iVar11 = 0x29;
                      }
                      else if (uVar37 < uVar25) {
                        uVar33 = FUN_004022fc();
                        if ((uVar33 & 1) == 0) {
                          FUN_00623bb0(&DAT_001f4e98,"../../pc/sdp_munging_detector.cc",0x11ea,
                                       "SDP munging: RTP header extension removed.");
                        }
                        iVar11 = 0x28;
                      }
                      else {
                        if (pppppppcStack_148 != local_150) {
                          pppppppcVar18 = local_180 + 3;
                          pppppppcVar19 = local_150 + 3;
                          do {
                            if (*(int *)pppppppcVar19 != *(int *)pppppppcVar18) {
                              uVar33 = FUN_004022fc();
                              if ((uVar33 & 1) == 0) {
                                FUN_00623bb0(&DAT_001f4e98,"../../pc/sdp_munging_detector.cc",0x1212
                                             ,"SDP munging: header extension modified.");
                              }
                              iVar11 = 0x2a;
                              goto LAB_00ce3988;
                            }
                            uVar25 = uVar25 - 1;
                            pppppppcVar18 = pppppppcVar18 + 4;
                            pppppppcVar19 = pppppppcVar19 + 4;
                          } while (uVar25 != 0);
                        }
                        if (*(int *)((long)plVar14 + 0x24) == *(int *)((long)plVar15 + 0x24)) {
                          FUN_00ce4be4(&local_180);
                          FUN_00ce4be4(&local_150);
                          goto LAB_00ce1e4c;
                        }
                        uVar33 = FUN_004022fc();
                        if ((uVar33 & 1) == 0) {
                          FUN_00623bb0(&DAT_001f4e98,"../../pc/sdp_munging_detector.cc",0x1252,
                                       "SDP munging: modifying bandwidth in SLD does not have an effect locally."
                                      );
                        }
                        iVar11 = 0x22;
                      }
LAB_00ce3988:
                      FUN_00ce4be4(&local_180);
                      FUN_00ce4be4(&local_150);
                    }
                    else {
                      uVar33 = FUN_004022fc();
                      if ((uVar33 & 1) == 0) {
                        pcVar39 = 
                        "SDP munging: streams size does not match last created description.";
                        uVar26 = 0x1132;
LAB_00ce388c:
                        FUN_00623bb0(&DAT_001f4e98,"../../pc/sdp_munging_detector.cc",uVar26,pcVar39
                                    );
                        iVar11 = 0x1b;
                      }
                      else {
LAB_00ce3394:
                        iVar11 = 0x1b;
                      }
                    }
                  }
                  else {
                    uVar33 = FUN_004022fc();
                    if ((uVar33 & 1) == 0) {
                      FUN_00623bb0(&DAT_001f4e98,"../../pc/sdp_munging_detector.cc",0x10fa,
                                   "SDP munging: transceiver direction modified.");
                      iVar11 = 0x1d;
                    }
                    else {
                      iVar11 = 0x1d;
                    }
                  }
                }
              }
              else {
                uVar33 = FUN_004022fc();
                if ((uVar33 & 1) == 0) {
                  FUN_00623bb0(&DAT_001f4e98,"../../pc/sdp_munging_detector.cc",0x952,
                               "SDP munging: rtcp-rsize modified.");
                }
                iVar13 = (**(code **)(*plVar14 + 0x10))(plVar14);
                iVar11 = 0x49;
                if (iVar13 != 0) {
                  iVar11 = 0x59;
                }
              }
            }
            else {
              uVar33 = FUN_004022fc();
              if ((uVar33 & 1) == 0) {
                FUN_00623bb0(&DAT_001f4e98,"../../pc/sdp_munging_detector.cc",0x91a,
                             "SDP munging: rtcp-mux modified.");
                iVar11 = 0x1e;
              }
              else {
                iVar11 = 0x1e;
              }
            }
            goto LAB_00ce1e14;
          }
        }
LAB_00ce1e4c:
        lVar36 = *plVar45;
        uVar33 = uVar33 + 1;
      } while (uVar33 < (ulong)((plVar45[1] - lVar36 >> 3) * -0x3333333333333333));
      plVar45 = *(long **)(param_2 + 0x38);
      plVar32 = *(long **)(param_1 + 0xe);
    }
    lVar36 = plVar45[3];
    lVar29 = plVar32[3];
    lVar31 = plVar45[4] - lVar36;
    if (lVar31 == plVar32[4] - lVar29) {
      if (plVar45[4] != lVar36) {
        uVar33 = 0;
        do {
          lVar43 = lVar36 + uVar33 * 0x70;
          lVar30 = lVar29 + uVar33 * 0x70;
          bVar4 = *(byte *)(lVar43 + 0x47);
          bVar5 = *(byte *)(lVar30 + 0x47);
          sVar24 = *(size_t *)(lVar43 + 0x38);
          if (-1 < (char)bVar4) {
            sVar24 = (ulong)bVar4;
          }
          sVar1 = *(size_t *)(lVar30 + 0x38);
          if (-1 < (char)bVar5) {
            sVar1 = (ulong)bVar5;
          }
          if (sVar24 != sVar1) {
LAB_00ce3af8:
            uVar33 = FUN_004022fc();
            if ((uVar33 & 1) == 0) {
              FUN_00623bb0(&DAT_001f4e98,"../../pc/sdp_munging_detector.cc",0x1a2,
                           "SDP munging: ice-ufrag does not match last created description.");
            }
            iVar11 = 0x16;
            goto LAB_00ce1e14;
          }
          puVar44 = (undefined8 *)*(void **)(lVar43 + 0x30);
          if (-1 < (char)bVar4) {
            puVar44 = (undefined8 *)(lVar43 + 0x30);
          }
          puVar41 = (undefined8 *)*(void **)(lVar30 + 0x30);
          if (-1 < (char)bVar5) {
            puVar41 = (undefined8 *)(lVar30 + 0x30);
          }
          iVar11 = memcmp(puVar44,puVar41,sVar24);
          if (iVar11 != 0) goto LAB_00ce3af8;
          bVar4 = *(byte *)(lVar43 + 0x5f);
          bVar5 = *(byte *)(lVar30 + 0x5f);
          sVar24 = *(size_t *)(lVar43 + 0x50);
          if (-1 < (char)bVar4) {
            sVar24 = (ulong)bVar4;
          }
          sVar1 = *(size_t *)(lVar30 + 0x50);
          if (-1 < (char)bVar5) {
            sVar1 = (ulong)bVar5;
          }
          if (sVar24 != sVar1) {
LAB_00ce3b2c:
            uVar33 = FUN_004022fc();
            if ((uVar33 & 1) == 0) {
              FUN_00623bb0(&DAT_001f4e98,"../../pc/sdp_munging_detector.cc",0x1d2,
                           "SDP munging: ice-pwd does not match last created description.");
            }
            iVar11 = 0x15;
            goto LAB_00ce1e14;
          }
          puVar44 = (undefined8 *)*(void **)(lVar43 + 0x48);
          if (-1 < (char)bVar4) {
            puVar44 = (undefined8 *)(lVar43 + 0x48);
          }
          puVar41 = (undefined8 *)*(void **)(lVar30 + 0x48);
          if (-1 < (char)bVar5) {
            puVar41 = (undefined8 *)(lVar30 + 0x48);
          }
          iVar11 = memcmp(puVar44,puVar41,sVar24);
          if (iVar11 != 0) goto LAB_00ce3b2c;
          if (*(int *)(lVar43 + 0x60) != *(int *)(lVar30 + 0x60)) {
            uVar33 = FUN_004022fc();
            if ((uVar33 & 1) == 0) {
              FUN_00623bb0(&DAT_001f4e98,"../../pc/sdp_munging_detector.cc",0x202,
                           "SDP munging: ice mode does not match last created description.");
            }
            iVar11 = 0x17;
            goto LAB_00ce1e14;
          }
          if (*(int *)(lVar43 + 100) != *(int *)(lVar30 + 100)) {
            uVar33 = FUN_004022fc();
            if ((uVar33 & 1) == 0) {
              FUN_00623bb0(&DAT_001f4e98,"../../pc/sdp_munging_detector.cc",0x232,
                           "SDP munging: DTLS role does not match last created description.");
            }
            iVar11 = 0x18;
            goto LAB_00ce1e14;
          }
          puVar44 = *(undefined8 **)(lVar43 + 0x18);
          puVar21 = *(undefined8 **)(lVar43 + 0x20);
          puVar41 = *(undefined8 **)(lVar30 + 0x18);
          if ((long)puVar21 - (long)puVar44 != *(long *)(lVar30 + 0x20) - (long)puVar41) {
LAB_00ce3770:
            uVar25 = FUN_004022fc();
            if ((uVar25 & 1) == 0) {
              FUN_00623bb0(&DAT_001f4e98,"../../pc/sdp_munging_detector.cc",0x262,
                           "SDP munging: ice_options does not match last created description.");
            }
            if ((ulong)((plVar45[4] - plVar45[3] >> 4) * 0x6db6db6db6db6db7) <= uVar33)
            goto LAB_00ce3f98;
            lVar36 = FUN_00ce59a0(plVar45[3] + uVar33 * 0x70 + 0x18,&PTR_s_renomination_00d50118);
            if (((ulong)((plVar45[4] - plVar45[3] >> 4) * 0x6db6db6db6db6db7) <= uVar33) ||
               ((ulong)((plVar32[4] - plVar32[3] >> 4) * 0x6db6db6db6db6db7) <= uVar33))
            goto LAB_00ce3f98;
            lVar31 = *(long *)(plVar45[3] + uVar33 * 0x70 + 0x20);
            lVar29 = FUN_00ce59a0(plVar32[3] + uVar33 * 0x70 + 0x18,&PTR_s_renomination_00d50118);
            if ((ulong)((plVar32[4] - plVar32[3] >> 4) * 0x6db6db6db6db6db7) <= uVar33)
            goto LAB_00ce3f98;
            if ((lVar31 == lVar36) && (*(long *)(plVar32[3] + uVar33 * 0x70 + 0x20) != lVar29)) {
              iVar11 = 0x1c;
              goto LAB_00ce1e14;
            }
            if ((ulong)((plVar45[4] - plVar45[3] >> 4) * 0x6db6db6db6db6db7) <= uVar33)
            goto LAB_00ce3f98;
            lVar36 = FUN_00ce59a0(plVar45[3] + uVar33 * 0x70 + 0x18,&PTR_s_trickle_00d50120);
            if (((ulong)((plVar45[4] - plVar45[3] >> 4) * 0x6db6db6db6db6db7) <= uVar33) ||
               ((ulong)((plVar32[4] - plVar32[3] >> 4) * 0x6db6db6db6db6db7) <= uVar33))
            goto LAB_00ce3f98;
            lVar31 = *(long *)(plVar45[3] + uVar33 * 0x70 + 0x20);
            lVar29 = FUN_00ce59a0(plVar32[3] + uVar33 * 0x70 + 0x18,&PTR_s_trickle_00d50120);
            if ((ulong)((plVar32[4] - plVar32[3] >> 4) * 0x6db6db6db6db6db7) <= uVar33) {
LAB_00ce3f98:
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                        );
            }
            iVar11 = 0x14;
            if (*(long *)(plVar32[3] + uVar33 * 0x70 + 0x20) == lVar29 && lVar31 != lVar36) {
              iVar11 = 0x1f;
            }
            goto LAB_00ce1e14;
          }
          for (; puVar44 != puVar21; puVar44 = puVar44 + 3) {
            bVar4 = *(byte *)((long)puVar44 + 0x17);
            bVar5 = *(byte *)((long)puVar41 + 0x17);
            sVar24 = puVar44[1];
            if (-1 < (char)bVar4) {
              sVar24 = (ulong)bVar4;
            }
            sVar1 = puVar41[1];
            if (-1 < (char)bVar5) {
              sVar1 = (ulong)bVar5;
            }
            if (sVar24 != sVar1) goto LAB_00ce3770;
            puVar2 = (undefined8 *)*puVar44;
            if (-1 < (char)bVar4) {
              puVar2 = puVar44;
            }
            puVar34 = (undefined8 *)*puVar41;
            if (-1 < (char)bVar5) {
              puVar34 = puVar41;
            }
            iVar11 = memcmp(puVar2,puVar34,sVar24);
            if (iVar11 != 0) goto LAB_00ce3770;
            puVar41 = puVar41 + 3;
          }
          uVar33 = uVar33 + 1;
        } while (uVar33 != (lVar31 >> 4) * 0x6db6db6db6db6db7);
      }
      if (plVar45[1] != *plVar45) {
        pcVar39 = (char *)0x0;
        do {
          plVar32 = (long *)FUN_00afce38(param_1,pcVar39);
          lVar36 = *plVar32;
          lVar29 = plVar32[1];
          plVar32 = (long *)FUN_00afce38(param_2,pcVar39);
          if (lVar29 - lVar36 != plVar32[1] - *plVar32) {
            uVar33 = FUN_004022fc();
            if ((uVar33 & 1) == 0) {
              local_150 = (char *******)0x1ad6b5;
              pppppppcStack_148 = (char *******)0x147a;
              local_140 = local_200;
              pppppppcStack_1e0 = (char *******)&local_150;
              local_1e8 = "SDP munging: media section ";
              local_190 = &local_1e8;
              ppcStack_178 = &local_198;
              local_180 = (char *******)0x1db09d;
              local_198 = pcVar39;
              plVar32 = (long *)FUN_00afce38(param_2,pcVar39);
              lVar36 = *plVar32;
              lVar29 = plVar32[1];
              plVar32 = (long *)FUN_00afce38(param_1,pcVar39);
              puVar44 = *(undefined8 **)(ppcStack_178[1] + 8);
              FUN_00623bb0(&DAT_0025a327,*puVar44,*(undefined4 *)(puVar44 + 1),
                           *(undefined8 *)ppcStack_178[1],*ppcStack_178,local_180,
                           lVar29 - lVar36 >> 3,&DAT_0019fec4,plVar32[1] - *plVar32 >> 3,
                           " candidates");
            }
            iVar11 = 0x20;
            goto LAB_00ce1e14;
          }
          plVar45 = *(long **)(param_2 + 0x38);
          pcVar39 = pcVar39 + 1;
        } while (pcVar39 < (char *)((plVar45[1] - *plVar45 >> 3) * -0x3333333333333333));
      }
      puVar7 = PTR_s_BUNDLE_00d52600;
      pppppppcStack_148 = (char *******)&DAT_aaaaaaaaaaaaaaaa;
      local_150 = (char *******)&DAT_aaaaaaaaaaaaaaaa;
      local_140 = (void **)&DAT_aaaaaaaaaaaaaaaa;
      sVar24 = strlen(PTR_s_BUNDLE_00d52600);
      FUN_00b17aa4(&local_150,plVar45,puVar7,sVar24);
      local_170 = &DAT_aaaaaaaaaaaaaaaa;
      ppcStack_178 = (char **)&DAT_aaaaaaaaaaaaaaaa;
      local_180 = (char *******)&DAT_aaaaaaaaaaaaaaaa;
      FUN_00b17aa4(&local_180,*(undefined8 *)(param_1 + 0xe),puVar7,sVar24);
      if ((long)pppppppcStack_148 - (long)local_150 == (long)ppcStack_178 - (long)local_180) {
        if (pppppppcStack_148 != local_150) {
          uVar33 = 0;
          do {
            if ((ulong)((long)ppcStack_178 - (long)local_180 >> 3) <= uVar33) goto LAB_00ce42f8;
            ppppppcVar35 = local_180[uVar33];
            ppppppcVar40 = local_150[uVar33];
            bVar4 = *(byte *)((long)ppppppcVar35 + 0x17);
            bVar5 = *(byte *)((long)ppppppcVar40 + 0x17);
            __n = ppppppcVar35[1];
            if (-1 < (char)bVar4) {
              __n = (char *****)(ulong)bVar4;
            }
            pppppcVar3 = ppppppcVar40[1];
            if (-1 < (char)bVar5) {
              pppppcVar3 = (char *****)(ulong)bVar5;
            }
            if (__n != pppppcVar3) {
LAB_00ce3b60:
              uVar25 = FUN_004022fc();
              if ((uVar25 & 1) == 0) {
                local_198 = "../../pc/sdp_munging_detector.cc";
                local_190 = (char **)0x151a;
                local_188 = (char **)&uStack_1c9;
                ppcStack_1c0 = &local_198;
                local_1c8 = "SDP munging: Content of bundle group ";
                ppcStack_1b0 = &local_1c8;
                puStack_1a0 = &local_1b8;
                local_1a8 = " changed from ";
                local_1b8 = uVar33;
                if (((ulong)((long)pppppppcStack_148 - (long)local_150 >> 3) <= uVar33) ||
                   (FUN_00b17090(&local_1e8,local_150[uVar33]),
                   (ulong)((long)ppcStack_178 - (long)local_180 >> 3) <= uVar33)) {
LAB_00ce42f8:
                    /* WARNING: Subroutine does not return */
                  std::__Cr::__libcpp_verbose_abort
                            ("%s",
                             "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                            );
                }
                FUN_00b17090(local_200,local_180[uVar33]);
                puVar44 = (undefined8 *)((undefined8 *)puStack_1a0[1])[1];
                FUN_00623bb0(&DAT_0025a330,*puVar44,*(undefined4 *)(puVar44 + 1),
                             *(undefined8 *)puStack_1a0[1],*puStack_1a0,local_1a8,&local_1e8,
                             &DAT_0019fec4,local_200);
                if (cStack_1e9 < '\0') {
                  operator_delete(local_200[0]);
                }
                if (local_1d8 < 0) {
                  operator_delete(local_1e8);
                }
              }
              goto LAB_00ce3c44;
            }
            __s1 = (char ******)*ppppppcVar35;
            if (-1 < (char)bVar4) {
              __s1 = ppppppcVar35;
            }
            __s2_00 = (char ******)*ppppppcVar40;
            if (-1 < (char)bVar5) {
              __s2_00 = ppppppcVar40;
            }
            iVar11 = memcmp(__s1,__s2_00,(size_t)__n);
            if ((iVar11 != 0) ||
               (uVar25 = FUN_00bf3b30(ppppppcVar35 + 3,ppppppcVar40 + 3), (uVar25 & 1) == 0))
            goto LAB_00ce3b60;
            uVar33 = uVar33 + 1;
          } while (uVar33 < (ulong)((long)pppppppcStack_148 - (long)local_150 >> 3));
        }
        local_198 = (char *)0x0;
        local_190 = (char **)0x0;
        local_188 = (char **)0x0;
        local_1e8 = (char *)0x0;
        pppppppcStack_1e0 = (char *******)0x0;
        local_1d8 = 0;
        uVar33 = FUN_00ce431c(param_1,&local_198);
        if ((((uVar33 & 1) == 0) || (uVar33 = FUN_00ce431c(param_2,&local_1e8), (uVar33 & 1) == 0))
           || (uVar33 = FUN_005f0614(&local_198,&local_1e8), (uVar33 & 1) == 0)) {
          iVar11 = 1;
        }
        else {
          iVar11 = 0;
        }
        if (local_1d8 < 0) {
          operator_delete(local_1e8);
        }
        if ((long)local_188 < 0) {
          operator_delete(local_198);
        }
      }
      else {
        uVar33 = FUN_004022fc();
        if ((uVar33 & 1) == 0) {
          local_188 = &local_1e8;
          local_198 = "../../pc/sdp_munging_detector.cc";
          local_190 = (char **)0x14ea;
          FUN_00623bb0(&DAT_001fd8a8,"../../pc/sdp_munging_detector.cc",0x14ea,
                       "SDP munging: number of bundle groups changed from ",
                       (long)pppppppcStack_148 - (long)local_150 >> 3,&DAT_0019fec4,
                       (long)ppcStack_178 - (long)local_180 >> 3);
        }
LAB_00ce3c44:
        iVar11 = 0x21;
      }
      FUN_00ce439c(&local_180);
      FUN_00ce439c(&local_150);
      goto LAB_00ce1e14;
    }
    uVar33 = FUN_004249b0();
    if ((uVar33 & 1) != 0) goto LAB_00ce334c;
    pcVar39 = "SDP munging: Number of transport-infos does not match last created description.";
    uVar26 = 0x15b;
  }
  else {
    uVar33 = FUN_004249b0();
    if ((uVar33 & 1) != 0) {
LAB_00ce334c:
      iVar11 = 4;
      goto LAB_00ce1e14;
    }
    pcVar39 = "SDP munging: Number of m= sections does not match last created description.";
    uVar26 = 0xeeb;
  }
  FUN_00623bb0(&DAT_001f4e98,"../../pc/sdp_munging_detector.cc",uVar26,pcVar39);
  iVar11 = 4;
LAB_00ce1e14:
  if (*(long *)(lVar6 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar11;
  while (lVar36 = lVar36 + 0xd8, lVar30 = lVar29, lVar36 != lVar29) {
LAB_00ce3e1c:
    FUN_00890830(&local_150,lVar36);
    bVar4 = local_100;
    FUN_00890cb8(&local_150);
    lVar30 = lVar36;
    if ((bVar4 & 1) != 0) break;
  }
  lVar31 = plVar15[0x22];
  lVar43 = plVar15[0x23];
  bVar8 = lVar30 == plVar14[0x23];
LAB_00ce412c:
  if (lVar31 != lVar43) {
    do {
      FUN_00890830(&local_150,lVar31);
      bVar4 = local_100;
      FUN_00890cb8(&local_150);
      lVar36 = lVar31;
      if ((bVar4 & 1) != 0) break;
      lVar31 = lVar31 + 0xd8;
      lVar36 = lVar43;
    } while (lVar31 != lVar43);
    bVar8 = (bool)(bVar8 ^ 1);
    if (lVar36 == plVar15[0x23]) {
      bVar8 = true;
    }
    if (!bVar8) {
      uVar33 = FUN_004022fc();
      if ((uVar33 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../pc/sdp_munging_detector.cc",0xbf2,
                     "SDP munging: video codecs with raw packetization added.");
        iVar11 = 0x57;
      }
      else {
        iVar11 = 0x57;
      }
      goto LAB_00ce1e14;
    }
  }
  uVar33 = FUN_004022fc();
  if ((uVar33 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../pc/sdp_munging_detector.cc",0xc12,
                 "SDP munging: video codecs added.");
    iVar11 = 0x51;
  }
  else {
    iVar11 = 0x51;
  }
  goto LAB_00ce1e14;
}


// ===== 00ce431c  FUN_00ce431c =====

bool FUN_00ce431c(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  if (param_2 != (undefined8 *)0x0) {
    thunk_FUN_00b00c84(&local_38);
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      operator_delete((void *)*param_2);
    }
    param_2[2] = local_28;
    lVar1 = (long)*(char *)((long)param_2 + 0x17);
    param_2[1] = uStack_30;
    *param_2 = local_38;
    if (lVar1 < 0) {
      lVar1 = param_2[1];
    }
    return lVar1 != 0;
  }
  return false;
}


// ===== 00ce439c  FUN_00ce439c =====

void FUN_00ce439c(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  pvVar2 = (void *)param_1[1];
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
      param_1[1] = pvVar1;
      operator_delete(pvVar1);
      return;
    }
    pvVar2 = (void *)((long)pvVar2 + -8);
  } while (pvVar2 != (void *)0x0);
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00ce4444  FUN_00ce4444 =====

ulong FUN_00ce4444(long param_1,long param_2)

{
  size_t sVar1;
  size_t sVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 uVar9;
  char *pcVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 local_48;
  
  if ((param_1 == 0) || (*(long *)(param_1 + 0x38) == 0)) {
    uVar14 = FUN_004022fc();
    if ((uVar14 & 1) == 0) {
      pcVar10 = "SDP munging: Failed to parse session description.";
      uVar9 = 0x15e2;
LAB_00ce460c:
      FUN_00623bb0(&DAT_001f4e98,"../../pc/sdp_munging_detector.cc",uVar9,pcVar10);
    }
  }
  else {
    if ((param_2 != 0) && (lVar11 = *(long *)(param_2 + 0x38), lVar11 != 0)) {
      local_58 = (undefined8 *)0x0;
      local_50 = (undefined8 *)0x0;
      local_48 = 0;
      FUN_00b17cac(&local_58,*(long *)(lVar11 + 0x18),*(long *)(lVar11 + 0x20),
                   (*(long *)(lVar11 + 0x20) - *(long *)(lVar11 + 0x18) >> 4) * 0x6db6db6db6db6db7);
      local_68 = (undefined8 *)0x0;
      local_60 = 0;
      local_70 = (undefined8 *)0x0;
      lVar11 = *(long *)(*(long *)(param_1 + 0x38) + 0x18);
      lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 0x20);
      FUN_00b17cac(&local_70,lVar11,lVar3,(lVar3 - lVar11 >> 4) * 0x6db6db6db6db6db7);
      puVar16 = local_58;
      puVar6 = local_68;
      puVar7 = local_70;
      uVar12 = ((long)local_50 - (long)local_58 >> 4) * 0x6db6db6db6db6db7;
      uVar14 = ((long)local_68 - (long)local_70 >> 4) * 0x6db6db6db6db6db7;
      if (uVar12 <= uVar14) {
        uVar14 = uVar12;
      }
      if (uVar14 != 0) {
        lVar11 = 0;
        do {
          bVar4 = *(byte *)((long)puVar16 + lVar11 + 0x47);
          bVar5 = *(byte *)((long)puVar7 + lVar11 + 0x47);
          sVar1 = *(size_t *)((long)puVar16 + lVar11 + 0x38);
          if (-1 < (char)bVar4) {
            sVar1 = (ulong)bVar4;
          }
          sVar2 = *(size_t *)((long)puVar7 + lVar11 + 0x38);
          if (-1 < (char)bVar5) {
            sVar2 = (ulong)bVar5;
          }
          if (sVar1 != sVar2) {
LAB_00ce4634:
            uVar14 = 1;
            goto LAB_00ce4638;
          }
          puVar13 = (undefined8 *)((long)puVar16 + lVar11 + 0x30);
          puVar15 = (undefined8 *)((long)puVar7 + lVar11 + 0x30);
          puVar17 = (undefined8 *)*puVar13;
          if (-1 < (char)bVar4) {
            puVar17 = puVar13;
          }
          puVar13 = (undefined8 *)*puVar15;
          if (-1 < (char)bVar5) {
            puVar13 = puVar15;
          }
          iVar8 = memcmp(puVar17,puVar13,sVar1);
          if (iVar8 != 0) goto LAB_00ce4634;
          bVar4 = *(byte *)((long)puVar16 + lVar11 + 0x5f);
          bVar5 = *(byte *)((long)puVar7 + lVar11 + 0x5f);
          sVar1 = *(size_t *)((long)puVar16 + lVar11 + 0x50);
          if (-1 < (char)bVar4) {
            sVar1 = (ulong)bVar4;
          }
          sVar2 = *(size_t *)((long)puVar7 + lVar11 + 0x50);
          if (-1 < (char)bVar5) {
            sVar2 = (ulong)bVar5;
          }
          if (sVar1 != sVar2) goto LAB_00ce4634;
          puVar13 = (undefined8 *)((long)puVar16 + lVar11 + 0x48);
          puVar15 = (undefined8 *)((long)puVar7 + lVar11 + 0x48);
          puVar17 = (undefined8 *)*puVar13;
          if (-1 < (char)bVar4) {
            puVar17 = puVar13;
          }
          puVar13 = (undefined8 *)*puVar15;
          if (-1 < (char)bVar5) {
            puVar13 = puVar15;
          }
          iVar8 = memcmp(puVar17,puVar13,sVar1);
          if (iVar8 != 0) goto LAB_00ce4634;
          uVar14 = uVar14 - 1;
          lVar11 = lVar11 + 0x70;
        } while (uVar14 != 0);
        uVar14 = 0;
      }
LAB_00ce4638:
      puVar17 = puVar7;
      if (puVar7 != (undefined8 *)0x0) {
        while (puVar7 != puVar6) {
          puVar16 = puVar6 + -0xe;
          if (puVar16 == (undefined8 *)0x0) goto LAB_00ce4708;
          FUN_00b194c8(puVar6 + -0xb);
          pcVar10 = (char *)((long)puVar6 + -0x59);
          puVar17 = local_70;
          puVar6 = puVar16;
          if (*pcVar10 < '\0') {
            operator_delete((void *)*puVar16);
            puVar17 = local_70;
          }
        }
        local_68 = puVar7;
        operator_delete(puVar17);
        puVar16 = local_58;
      }
      puVar6 = puVar16;
      puVar7 = local_50;
      if (puVar16 != (undefined8 *)0x0) {
        while (puVar16 != puVar7) {
          puVar17 = puVar7 + -0xe;
          if (puVar17 == (undefined8 *)0x0) {
LAB_00ce4708:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
          FUN_00b194c8(puVar7 + -0xb);
          pcVar10 = (char *)((long)puVar7 + -0x59);
          puVar6 = local_58;
          puVar7 = puVar17;
          if (*pcVar10 < '\0') {
            operator_delete((void *)*puVar17);
            puVar6 = local_58;
          }
        }
        local_50 = puVar16;
        operator_delete(puVar6);
      }
      goto LAB_00ce4614;
    }
    uVar14 = FUN_004022fc();
    if ((uVar14 & 1) == 0) {
      pcVar10 = "SDP munging: SetLocalDescription called without CreateOffer or CreateAnswer.";
      uVar9 = 0x160a;
      goto LAB_00ce460c;
    }
  }
  uVar14 = 0;
LAB_00ce4614:
  return uVar14 & 0xffffffff;
}


// ===== 00ce471c  FUN_00ce471c =====

/* WARNING: Type propagation algorithm not settling */

bool FUN_00ce471c(int param_1,long *param_2)

{
  undefined8 *******pppppppuVar1;
  long lVar2;
  int ******ppppppiVar3;
  undefined1 *puVar4;
  bool bVar5;
  int iVar6;
  int *******pppppppiVar7;
  ulong uVar8;
  ulong uVar9;
  int *******pppppppiVar10;
  int *******pppppppiVar11;
  int *******pppppppiVar12;
  int *******local_b8;
  int *******pppppppiStack_b0;
  undefined1 local_a8;
  int *******local_a0;
  int *******pppppppiStack_98;
  undefined1 *local_90;
  undefined8 *******local_80;
  int ******ppppppiStack_78;
  undefined1 *local_70;
  int *******local_60;
  int *******pppppppiStack_58;
  undefined1 *local_50;
  undefined1 uStack_41;
  
  if (param_1 == 0) {
    return true;
  }
  if ((param_1 == 100) || (param_1 == 4)) {
    return false;
  }
  ppppppiStack_78 = (int ******)&DAT_aaaaaaaaaaaaaaaa;
  local_80 = (undefined8 *******)&DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_005490bc(&local_80);
  pppppppiStack_98 = (int *******)0x0;
  local_90 = (undefined1 *)0x0;
  local_a0 = (int *******)0x0;
  (**(code **)(*param_2 + 0x10))(&local_60,param_2,"WebRTC-NoSdpMangleReject",0x18);
  pppppppiVar7 = pppppppiStack_58;
  if (-1 < (long)local_50) {
    pppppppiVar7 = (int *******)((ulong)local_50 >> 0x38);
  }
  if (pppppppiVar7 < (int *******)0x7) {
    bVar5 = false;
    if (-1 < (long)local_50) goto LAB_00ce47fc;
LAB_00ce48ec:
    operator_delete(local_60);
    if (bVar5) goto LAB_00ce4800;
  }
  else {
    pppppppiVar7 = local_60;
    if (-1 < (long)local_50) {
      pppppppiVar7 = (int *******)&local_60;
    }
    bVar5 = *(int *)pppppppiVar7 == 0x62616e45 && *(int *)((long)pppppppiVar7 + 3) == 0x64656c62;
    if ((long)local_50 < 0) goto LAB_00ce48ec;
LAB_00ce47fc:
    if (bVar5) {
LAB_00ce4800:
      (**(code **)(*param_2 + 0x10))(&local_60,param_2,"WebRTC-NoSdpMangleReject",0x18);
      if ((long)local_90 < 0) {
        operator_delete(local_a0);
      }
      puVar4 = local_50;
      pppppppiStack_b0 = pppppppiStack_58;
      local_b8 = local_60;
      local_90 = local_50;
      pppppppiVar7 = (int *******)((ulong)local_50 >> 0x38);
      pppppppiStack_98 = pppppppiStack_58;
      local_a0 = local_60;
      local_50 = &DAT_aaaaaaaaaaaaaaaa;
      pppppppiStack_58 = (int *******)&DAT_aaaaaaaaaaaaaaaa;
      local_60 = (int *******)&DAT_aaaaaaaaaaaaaaaa;
      if (-1 < (long)puVar4) {
        pppppppiStack_b0 = pppppppiVar7;
        local_b8 = (int *******)&local_a0;
      }
      local_a8 = 0x2c;
      FUN_00ccce30(&local_60,&uStack_41,&local_b8);
      pppppppiVar7 = pppppppiStack_58;
      pppppppiVar10 = local_60;
      lVar2 = (long)local_60 - (long)pppppppiStack_58;
      if (lVar2 == 0) {
        bVar5 = true;
      }
      else {
        pppppppiVar11 = local_60;
        ppppppiVar3 = ppppppiStack_78;
        pppppppuVar1 = local_80;
        if (-1 < (long)local_70) {
          ppppppiVar3 = (int ******)((ulong)local_70 >> 0x38);
          pppppppuVar1 = &local_80;
        }
        do {
          if ((pppppppiVar11[1] == ppppppiVar3) &&
             (iVar6 = memcmp(*pppppppiVar11,pppppppuVar1,(size_t)ppppppiVar3),
             pppppppiVar12 = pppppppiVar11, iVar6 == 0)) break;
          pppppppiVar11 = pppppppiVar11 + 2;
          pppppppiVar12 = pppppppiVar7;
        } while (pppppppiVar11 != pppppppiVar7);
        bVar5 = pppppppiVar12 == pppppppiVar7;
      }
      if (pppppppiVar10 != (int *******)0x0) {
        uVar9 = (ulong)((lVar2 << 0x3c) - lVar2) >> 4;
        uVar8 = (ulong)((long)pppppppiVar7 + (-0x10 - ((long)pppppppiVar7 << 0x3c))) >> 4;
        if (uVar8 <= uVar9) {
          uVar9 = uVar8;
        }
        if ((1 < uVar9) &&
           ((((int)pppppppiVar10 - (uint)pppppppiVar7 | (uint)pppppppiVar7) >> 3 & 1) == 0)) {
          uVar9 = uVar9 & 0xffffffffffffffe;
          pppppppiVar7 = pppppppiVar7 + uVar9 * -2;
          do {
            uVar9 = uVar9 - 2;
          } while (uVar9 != 0);
        }
        do {
          if (pppppppiVar7 == pppppppiVar10) goto LAB_00ce4b80;
          pppppppiVar7 = pppppppiVar7 + -2;
        } while (pppppppiVar7 != (int *******)0x0);
        goto LAB_00ce4b6c;
      }
      goto LAB_00ce4b94;
    }
  }
  (**(code **)(*param_2 + 0x10))(&local_60,param_2,"WebRTC-NoSdpMangleAllowForTesting",0x21);
  pppppppiVar7 = pppppppiStack_58;
  if (-1 < (long)local_50) {
    pppppppiVar7 = (int *******)((ulong)local_50 >> 0x38);
  }
  if (pppppppiVar7 < (int *******)0x7) {
    bVar5 = false;
  }
  else {
    pppppppiVar7 = local_60;
    if (-1 < (long)local_50) {
      pppppppiVar7 = (int *******)&local_60;
    }
    bVar5 = *(int *)pppppppiVar7 == 0x62616e45 && *(int *)((long)pppppppiVar7 + 3) == 0x64656c62;
  }
  if ((long)local_50 < 0) {
    operator_delete(local_60);
  }
  if (bVar5) {
    (**(code **)(*param_2 + 0x10))(&local_60,param_2,"WebRTC-NoSdpMangleAllowForTesting",0x21);
    if ((long)local_90 < 0) {
      operator_delete(local_a0);
    }
    puVar4 = local_50;
    pppppppiStack_b0 = pppppppiStack_58;
    local_b8 = local_60;
    local_90 = local_50;
    pppppppiVar7 = (int *******)((ulong)local_50 >> 0x38);
    pppppppiStack_98 = pppppppiStack_58;
    local_a0 = local_60;
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    pppppppiStack_58 = (int *******)&DAT_aaaaaaaaaaaaaaaa;
    local_60 = (int *******)&DAT_aaaaaaaaaaaaaaaa;
    if (-1 < (long)puVar4) {
      pppppppiStack_b0 = pppppppiVar7;
      local_b8 = (int *******)&local_a0;
    }
    local_a8 = 0x2c;
    FUN_00ccce30(&local_60,&uStack_41,&local_b8);
    pppppppiVar7 = pppppppiStack_58;
    pppppppiVar10 = local_60;
    lVar2 = (long)local_60 - (long)pppppppiStack_58;
    if (lVar2 == 0) {
      bVar5 = false;
    }
    else {
      pppppppiVar11 = local_60;
      ppppppiVar3 = ppppppiStack_78;
      pppppppuVar1 = local_80;
      if (-1 < (long)local_70) {
        ppppppiVar3 = (int ******)((ulong)local_70 >> 0x38);
        pppppppuVar1 = &local_80;
      }
      do {
        if ((pppppppiVar11[1] == ppppppiVar3) &&
           (iVar6 = memcmp(*pppppppiVar11,pppppppuVar1,(size_t)ppppppiVar3),
           pppppppiVar12 = pppppppiVar11, iVar6 == 0)) break;
        pppppppiVar11 = pppppppiVar11 + 2;
        pppppppiVar12 = pppppppiVar7;
      } while (pppppppiVar11 != pppppppiVar7);
      bVar5 = pppppppiVar12 != pppppppiVar7;
    }
    if (pppppppiVar10 != (int *******)0x0) {
      uVar9 = (ulong)((lVar2 << 0x3c) - lVar2) >> 4;
      uVar8 = (ulong)((long)pppppppiVar7 + (-0x10 - ((long)pppppppiVar7 << 0x3c))) >> 4;
      if (uVar8 <= uVar9) {
        uVar9 = uVar8;
      }
      if ((1 < uVar9) &&
         ((((int)pppppppiVar10 - (uint)pppppppiVar7 | (uint)pppppppiVar7) >> 3 & 1) == 0)) {
        uVar9 = uVar9 & 0xffffffffffffffe;
        pppppppiVar7 = pppppppiVar7 + uVar9 * -2;
        do {
          uVar9 = uVar9 - 2;
        } while (uVar9 != 0);
      }
      do {
        if (pppppppiVar7 == pppppppiVar10) goto LAB_00ce4b80;
        pppppppiVar7 = pppppppiVar7 + -2;
      } while (pppppppiVar7 != (int *******)0x0);
LAB_00ce4b6c:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
  }
  else {
    bVar5 = true;
  }
LAB_00ce4b94:
  if ((long)local_90 < 0) {
    operator_delete(local_a0);
  }
  if ((long)local_70 < 0) {
    operator_delete(local_80);
  }
  return bVar5;
LAB_00ce4b80:
  pppppppiStack_58 = pppppppiVar10;
  operator_delete(pppppppiVar10);
  goto LAB_00ce4b94;
}


// ===== 00ce4be4  FUN_00ce4be4 =====

void FUN_00ce4be4(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar3 = (void *)*param_1;
  if (pvVar3 == (void *)0x0) {
    return;
  }
  pvVar2 = (void *)param_1[1];
  pvVar1 = pvVar3;
  if (pvVar3 != pvVar2) {
    do {
      pvVar2 = (void *)((long)pvVar2 + -0x20);
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      FUN_00668f8c(pvVar2);
    } while (pvVar2 != pvVar3);
    pvVar1 = (void *)*param_1;
  }
  param_1[1] = pvVar3;
  operator_delete(pvVar1);
  return;
}


// ===== 00ce4c78  FUN_00ce4c78 =====

long FUN_00ce4c78(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  size_t sVar4;
  ulong uVar5;
  long lVar6;
  void *local_150 [2];
  char cStack_139;
  void *local_138;
  char cStack_121;
  undefined1 auStack_120 [216];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  lVar2 = param_1[1];
  lVar1 = *param_1;
  lVar6 = lVar1;
  for (; lVar1 != lVar2; lVar1 = lVar1 + 0xd8) {
    FUN_00890830(auStack_120,lVar1);
    sVar4 = strlen("rrtr");
    FUN_00bf4a50(local_150,&DAT_001ff28d,sVar4);
    uVar5 = FUN_00891978(auStack_120,local_150);
    if (cStack_121 < '\0') {
      operator_delete(local_138);
    }
    if (cStack_139 < '\0') {
      operator_delete(local_150[0]);
    }
    FUN_00890cb8(auStack_120);
    lVar6 = lVar1;
    if ((uVar5 & 1) != 0) break;
    lVar6 = lVar2;
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar6;
}


// ===== 00ce4d78  FUN_00ce4d78 =====

long FUN_00ce4d78(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  size_t sVar4;
  ulong uVar5;
  long lVar6;
  void *local_150 [2];
  char cStack_139;
  void *local_138;
  char cStack_121;
  undefined1 auStack_120 [216];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  lVar2 = param_1[1];
  lVar1 = *param_1;
  lVar6 = lVar1;
  for (; lVar1 != lVar2; lVar1 = lVar1 + 0xd8) {
    FUN_00890830(auStack_120,lVar1);
    sVar4 = strlen("rrtr");
    FUN_00bf4a50(local_150,&DAT_001ff28d,sVar4);
    uVar5 = FUN_00891978(auStack_120,local_150);
    if (cStack_121 < '\0') {
      operator_delete(local_138);
    }
    if (cStack_139 < '\0') {
      operator_delete(local_150[0]);
    }
    FUN_00890cb8(auStack_120);
    lVar6 = lVar1;
    if ((uVar5 & 1) != 0) break;
    lVar6 = lVar2;
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar6;
}


// ===== 00ce4e78  FUN_00ce4e78 =====

long FUN_00ce4e78(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined *__s;
  undefined *puVar3;
  undefined *__s_00;
  bool bVar4;
  int iVar5;
  size_t sVar6;
  ulong uVar7;
  undefined8 ******ppppppuVar8;
  long lVar9;
  long lVar10;
  void *local_170 [2];
  char cStack_159;
  undefined8 *****local_158;
  size_t local_150;
  undefined8 local_148;
  undefined1 auStack_140 [16];
  undefined8 *****local_130;
  size_t local_128;
  char local_119;
  long local_68;
  
  __s_00 = PTR_DAT_00d52228;
  puVar3 = PTR_s_useinbandfec_00d52210;
  __s = PTR_DAT_00d521c8;
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar9 = *param_1;
  lVar1 = param_1[1];
  lVar10 = lVar9;
  if (lVar9 != lVar1) {
    do {
      FUN_00890830(auStack_140,lVar9);
      local_158 = (undefined8 ******)0x0;
      local_150 = 0;
      local_148 = 0;
      sVar6 = strlen(__s);
      if ((long)local_119 < 0) {
        if (sVar6 == local_128) {
          ppppppuVar8 = (undefined8 ******)local_130;
          if (sVar6 == 0xffffffffffffffff) goto LAB_00ce504c;
          goto LAB_00ce4f3c;
        }
LAB_00ce4ed8:
        FUN_00890cb8(auStack_140);
      }
      else {
        ppppppuVar8 = &local_130;
        if (sVar6 != (long)local_119) goto LAB_00ce4ed8;
LAB_00ce4f3c:
        iVar5 = memcmp(ppppppuVar8,__s,sVar6);
        if (iVar5 != 0) goto LAB_00ce4ed8;
        FUN_005d3510(local_170,puVar3);
        uVar7 = FUN_00891570(auStack_140,local_170,&local_158);
        if ((uVar7 & 1) == 0) {
LAB_00ce4fc0:
          bVar4 = false;
        }
        else {
          sVar6 = strlen(__s_00);
          if ((long)local_148._7_1_ < 0) {
            if (sVar6 != local_150) goto LAB_00ce4fc0;
            ppppppuVar8 = (undefined8 ******)local_158;
            if (sVar6 == 0xffffffffffffffff) {
LAB_00ce504c:
                    /* WARNING: Subroutine does not return */
              FUN_005f5590();
            }
          }
          else {
            if (sVar6 != (long)local_148._7_1_) goto LAB_00ce4fc0;
            ppppppuVar8 = &local_158;
          }
          iVar5 = memcmp(ppppppuVar8,__s_00,sVar6);
          bVar4 = iVar5 == 0;
        }
        if (cStack_159 < '\0') {
          operator_delete(local_170[0]);
        }
        if (local_148 < 0) {
          operator_delete(local_158);
        }
        FUN_00890cb8(auStack_140);
        lVar10 = lVar9;
        if (bVar4) break;
      }
      lVar9 = lVar9 + 0xd8;
      lVar10 = lVar1;
    } while (lVar9 != lVar1);
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar10;
}


// ===== 00ce5054  FUN_00ce5054 =====

long FUN_00ce5054(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined *__s;
  undefined *puVar3;
  undefined *__s_00;
  bool bVar4;
  int iVar5;
  size_t sVar6;
  ulong uVar7;
  undefined8 ******ppppppuVar8;
  long lVar9;
  long lVar10;
  void *local_170 [2];
  char cStack_159;
  undefined8 *****local_158;
  size_t local_150;
  undefined8 local_148;
  undefined1 auStack_140 [16];
  undefined8 *****local_130;
  size_t local_128;
  char local_119;
  long local_68;
  
  __s_00 = PTR_DAT_00d52228;
  puVar3 = PTR_s_useinbandfec_00d52210;
  __s = PTR_DAT_00d521c8;
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar9 = *param_1;
  lVar1 = param_1[1];
  lVar10 = lVar9;
  if (lVar9 != lVar1) {
    do {
      FUN_00890830(auStack_140,lVar9);
      local_158 = (undefined8 ******)0x0;
      local_150 = 0;
      local_148 = 0;
      sVar6 = strlen(__s);
      if ((long)local_119 < 0) {
        if (sVar6 == local_128) {
          ppppppuVar8 = (undefined8 ******)local_130;
          if (sVar6 == 0xffffffffffffffff) goto LAB_00ce5228;
          goto LAB_00ce5118;
        }
LAB_00ce50b4:
        FUN_00890cb8(auStack_140);
      }
      else {
        ppppppuVar8 = &local_130;
        if (sVar6 != (long)local_119) goto LAB_00ce50b4;
LAB_00ce5118:
        iVar5 = memcmp(ppppppuVar8,__s,sVar6);
        if (iVar5 != 0) goto LAB_00ce50b4;
        FUN_005d3510(local_170,puVar3);
        uVar7 = FUN_00891570(auStack_140,local_170,&local_158);
        if ((uVar7 & 1) == 0) {
LAB_00ce519c:
          bVar4 = false;
        }
        else {
          sVar6 = strlen(__s_00);
          if ((long)local_148._7_1_ < 0) {
            if (sVar6 != local_150) goto LAB_00ce519c;
            ppppppuVar8 = (undefined8 ******)local_158;
            if (sVar6 == 0xffffffffffffffff) {
LAB_00ce5228:
                    /* WARNING: Subroutine does not return */
              FUN_005f5590();
            }
          }
          else {
            if (sVar6 != (long)local_148._7_1_) goto LAB_00ce519c;
            ppppppuVar8 = &local_158;
          }
          iVar5 = memcmp(ppppppuVar8,__s_00,sVar6);
          bVar4 = iVar5 == 0;
        }
        if (cStack_159 < '\0') {
          operator_delete(local_170[0]);
        }
        if (local_148 < 0) {
          operator_delete(local_158);
        }
        FUN_00890cb8(auStack_140);
        lVar10 = lVar9;
        if (bVar4) break;
      }
      lVar9 = lVar9 + 0xd8;
      lVar10 = lVar1;
    } while (lVar9 != lVar1);
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar10;
}


// ===== 00ce5230  FUN_00ce5230 =====

long FUN_00ce5230(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined *__s;
  undefined *puVar3;
  undefined *__s_00;
  bool bVar4;
  int iVar5;
  size_t sVar6;
  ulong uVar7;
  undefined8 ******ppppppuVar8;
  long lVar9;
  long lVar10;
  void *local_170 [2];
  char cStack_159;
  undefined8 *****local_158;
  size_t local_150;
  undefined8 local_148;
  undefined1 auStack_140 [16];
  undefined8 *****local_130;
  size_t local_128;
  char local_119;
  long local_68;
  
  __s_00 = PTR_DAT_00d52228;
  puVar3 = PTR_s_usedtx_00d52218;
  __s = PTR_DAT_00d521c8;
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar9 = *param_1;
  lVar1 = param_1[1];
  lVar10 = lVar9;
  if (lVar9 != lVar1) {
    do {
      FUN_00890830(auStack_140,lVar9);
      local_158 = (undefined8 ******)0x0;
      local_150 = 0;
      local_148 = 0;
      sVar6 = strlen(__s);
      if ((long)local_119 < 0) {
        if (sVar6 == local_128) {
          ppppppuVar8 = (undefined8 ******)local_130;
          if (sVar6 == 0xffffffffffffffff) goto LAB_00ce5404;
          goto LAB_00ce52f4;
        }
LAB_00ce5290:
        FUN_00890cb8(auStack_140);
      }
      else {
        ppppppuVar8 = &local_130;
        if (sVar6 != (long)local_119) goto LAB_00ce5290;
LAB_00ce52f4:
        iVar5 = memcmp(ppppppuVar8,__s,sVar6);
        if (iVar5 != 0) goto LAB_00ce5290;
        FUN_005d3510(local_170,puVar3);
        uVar7 = FUN_00891570(auStack_140,local_170,&local_158);
        if ((uVar7 & 1) == 0) {
LAB_00ce5378:
          bVar4 = false;
        }
        else {
          sVar6 = strlen(__s_00);
          if ((long)local_148._7_1_ < 0) {
            if (sVar6 != local_150) goto LAB_00ce5378;
            ppppppuVar8 = (undefined8 ******)local_158;
            if (sVar6 == 0xffffffffffffffff) {
LAB_00ce5404:
                    /* WARNING: Subroutine does not return */
              FUN_005f5590();
            }
          }
          else {
            if (sVar6 != (long)local_148._7_1_) goto LAB_00ce5378;
            ppppppuVar8 = &local_158;
          }
          iVar5 = memcmp(ppppppuVar8,__s_00,sVar6);
          bVar4 = iVar5 == 0;
        }
        if (cStack_159 < '\0') {
          operator_delete(local_170[0]);
        }
        if (local_148 < 0) {
          operator_delete(local_158);
        }
        FUN_00890cb8(auStack_140);
        lVar10 = lVar9;
        if (bVar4) break;
      }
      lVar9 = lVar9 + 0xd8;
      lVar10 = lVar1;
    } while (lVar9 != lVar1);
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar10;
}


// ===== 00ce540c  FUN_00ce540c =====

long FUN_00ce540c(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined *__s;
  undefined *puVar3;
  undefined *__s_00;
  bool bVar4;
  int iVar5;
  size_t sVar6;
  ulong uVar7;
  undefined8 ******ppppppuVar8;
  long lVar9;
  long lVar10;
  void *local_170 [2];
  char cStack_159;
  undefined8 *****local_158;
  size_t local_150;
  undefined8 local_148;
  undefined1 auStack_140 [16];
  undefined8 *****local_130;
  size_t local_128;
  char local_119;
  long local_68;
  
  __s_00 = PTR_DAT_00d52228;
  puVar3 = PTR_s_usedtx_00d52218;
  __s = PTR_DAT_00d521c8;
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar9 = *param_1;
  lVar1 = param_1[1];
  lVar10 = lVar9;
  if (lVar9 != lVar1) {
    do {
      FUN_00890830(auStack_140,lVar9);
      local_158 = (undefined8 ******)0x0;
      local_150 = 0;
      local_148 = 0;
      sVar6 = strlen(__s);
      if ((long)local_119 < 0) {
        if (sVar6 == local_128) {
          ppppppuVar8 = (undefined8 ******)local_130;
          if (sVar6 == 0xffffffffffffffff) goto LAB_00ce55e0;
          goto LAB_00ce54d0;
        }
LAB_00ce546c:
        FUN_00890cb8(auStack_140);
      }
      else {
        ppppppuVar8 = &local_130;
        if (sVar6 != (long)local_119) goto LAB_00ce546c;
LAB_00ce54d0:
        iVar5 = memcmp(ppppppuVar8,__s,sVar6);
        if (iVar5 != 0) goto LAB_00ce546c;
        FUN_005d3510(local_170,puVar3);
        uVar7 = FUN_00891570(auStack_140,local_170,&local_158);
        if ((uVar7 & 1) == 0) {
LAB_00ce5554:
          bVar4 = false;
        }
        else {
          sVar6 = strlen(__s_00);
          if ((long)local_148._7_1_ < 0) {
            if (sVar6 != local_150) goto LAB_00ce5554;
            ppppppuVar8 = (undefined8 ******)local_158;
            if (sVar6 == 0xffffffffffffffff) {
LAB_00ce55e0:
                    /* WARNING: Subroutine does not return */
              FUN_005f5590();
            }
          }
          else {
            if (sVar6 != (long)local_148._7_1_) goto LAB_00ce5554;
            ppppppuVar8 = &local_158;
          }
          iVar5 = memcmp(ppppppuVar8,__s_00,sVar6);
          bVar4 = iVar5 == 0;
        }
        if (cStack_159 < '\0') {
          operator_delete(local_170[0]);
        }
        if (local_148 < 0) {
          operator_delete(local_158);
        }
        FUN_00890cb8(auStack_140);
        lVar10 = lVar9;
        if (bVar4) break;
      }
      lVar9 = lVar9 + 0xd8;
      lVar10 = lVar1;
    } while (lVar9 != lVar1);
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar10;
}


// ===== 00ce55e8  FUN_00ce55e8 =====

long FUN_00ce55e8(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined *__s;
  undefined *puVar3;
  undefined *__s_00;
  bool bVar4;
  int iVar5;
  size_t sVar6;
  ulong uVar7;
  undefined8 ******ppppppuVar8;
  long lVar9;
  long lVar10;
  void *local_170 [2];
  char cStack_159;
  undefined8 *****local_158;
  size_t local_150;
  undefined8 local_148;
  undefined1 auStack_140 [16];
  undefined8 *****local_130;
  size_t local_128;
  char local_119;
  long local_68;
  
  __s_00 = PTR_DAT_00d52228;
  puVar3 = PTR_DAT_00d52220;
  __s = PTR_DAT_00d521c8;
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar9 = *param_1;
  lVar1 = param_1[1];
  lVar10 = lVar9;
  if (lVar9 != lVar1) {
    do {
      FUN_00890830(auStack_140,lVar9);
      local_158 = (undefined8 ******)0x0;
      local_150 = 0;
      local_148 = 0;
      sVar6 = strlen(__s);
      if ((long)local_119 < 0) {
        if (sVar6 == local_128) {
          ppppppuVar8 = (undefined8 ******)local_130;
          if (sVar6 == 0xffffffffffffffff) goto LAB_00ce57bc;
          goto LAB_00ce56ac;
        }
LAB_00ce5648:
        FUN_00890cb8(auStack_140);
      }
      else {
        ppppppuVar8 = &local_130;
        if (sVar6 != (long)local_119) goto LAB_00ce5648;
LAB_00ce56ac:
        iVar5 = memcmp(ppppppuVar8,__s,sVar6);
        if (iVar5 != 0) goto LAB_00ce5648;
        FUN_005d3510(local_170,puVar3);
        uVar7 = FUN_00891570(auStack_140,local_170,&local_158);
        if ((uVar7 & 1) == 0) {
LAB_00ce5730:
          bVar4 = false;
        }
        else {
          sVar6 = strlen(__s_00);
          if ((long)local_148._7_1_ < 0) {
            if (sVar6 != local_150) goto LAB_00ce5730;
            ppppppuVar8 = (undefined8 ******)local_158;
            if (sVar6 == 0xffffffffffffffff) {
LAB_00ce57bc:
                    /* WARNING: Subroutine does not return */
              FUN_005f5590();
            }
          }
          else {
            if (sVar6 != (long)local_148._7_1_) goto LAB_00ce5730;
            ppppppuVar8 = &local_158;
          }
          iVar5 = memcmp(ppppppuVar8,__s_00,sVar6);
          bVar4 = iVar5 == 0;
        }
        if (cStack_159 < '\0') {
          operator_delete(local_170[0]);
        }
        if (local_148 < 0) {
          operator_delete(local_158);
        }
        FUN_00890cb8(auStack_140);
        lVar10 = lVar9;
        if (bVar4) break;
      }
      lVar9 = lVar9 + 0xd8;
      lVar10 = lVar1;
    } while (lVar9 != lVar1);
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar10;
}


// ===== 00ce57c4  FUN_00ce57c4 =====

long FUN_00ce57c4(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined *__s;
  undefined *puVar3;
  undefined *__s_00;
  bool bVar4;
  int iVar5;
  size_t sVar6;
  ulong uVar7;
  undefined8 ******ppppppuVar8;
  long lVar9;
  long lVar10;
  void *local_170 [2];
  char cStack_159;
  undefined8 *****local_158;
  size_t local_150;
  undefined8 local_148;
  undefined1 auStack_140 [16];
  undefined8 *****local_130;
  size_t local_128;
  char local_119;
  long local_68;
  
  __s_00 = PTR_DAT_00d52228;
  puVar3 = PTR_DAT_00d52220;
  __s = PTR_DAT_00d521c8;
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar9 = *param_1;
  lVar1 = param_1[1];
  lVar10 = lVar9;
  if (lVar9 != lVar1) {
    do {
      FUN_00890830(auStack_140,lVar9);
      local_158 = (undefined8 ******)0x0;
      local_150 = 0;
      local_148 = 0;
      sVar6 = strlen(__s);
      if ((long)local_119 < 0) {
        if (sVar6 == local_128) {
          ppppppuVar8 = (undefined8 ******)local_130;
          if (sVar6 == 0xffffffffffffffff) goto LAB_00ce5998;
          goto LAB_00ce5888;
        }
LAB_00ce5824:
        FUN_00890cb8(auStack_140);
      }
      else {
        ppppppuVar8 = &local_130;
        if (sVar6 != (long)local_119) goto LAB_00ce5824;
LAB_00ce5888:
        iVar5 = memcmp(ppppppuVar8,__s,sVar6);
        if (iVar5 != 0) goto LAB_00ce5824;
        FUN_005d3510(local_170,puVar3);
        uVar7 = FUN_00891570(auStack_140,local_170,&local_158);
        if ((uVar7 & 1) == 0) {
LAB_00ce590c:
          bVar4 = false;
        }
        else {
          sVar6 = strlen(__s_00);
          if ((long)local_148._7_1_ < 0) {
            if (sVar6 != local_150) goto LAB_00ce590c;
            ppppppuVar8 = (undefined8 ******)local_158;
            if (sVar6 == 0xffffffffffffffff) {
LAB_00ce5998:
                    /* WARNING: Subroutine does not return */
              FUN_005f5590();
            }
          }
          else {
            if (sVar6 != (long)local_148._7_1_) goto LAB_00ce590c;
            ppppppuVar8 = &local_158;
          }
          iVar5 = memcmp(ppppppuVar8,__s_00,sVar6);
          bVar4 = iVar5 == 0;
        }
        if (cStack_159 < '\0') {
          operator_delete(local_170[0]);
        }
        if (local_148 < 0) {
          operator_delete(local_158);
        }
        FUN_00890cb8(auStack_140);
        lVar10 = lVar9;
        if (bVar4) break;
      }
      lVar9 = lVar9 + 0xd8;
      lVar10 = lVar1;
    } while (lVar9 != lVar1);
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar10;
}


// ===== 00ce59a0  FUN_00ce59a0 =====

undefined8 * FUN_00ce59a0(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  size_t __n;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char *__s;
  
  puVar4 = (undefined8 *)*param_1;
  puVar1 = (undefined8 *)param_1[1];
  puVar3 = puVar4;
  if (puVar4 != puVar1) {
    __s = (char *)*param_2;
    if (__s == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/string:3571: libc++ Hardening assertion __rhs != nullptr failed: operator==(basic_string, char*): received nullptr\n"
                );
    }
    __n = strlen(__s);
    do {
      if ((long)*(char *)((long)puVar4 + 0x17) < 0) {
        if (__n == puVar4[1]) {
          if (__n == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            FUN_005f5590();
          }
          puVar3 = (undefined8 *)*puVar4;
          goto LAB_00ce59d8;
        }
      }
      else {
        puVar3 = puVar4;
        if (__n == (long)*(char *)((long)puVar4 + 0x17)) {
LAB_00ce59d8:
          iVar2 = memcmp(puVar3,__s,__n);
          if (iVar2 == 0) {
            return puVar4;
          }
        }
      }
      puVar4 = puVar4 + 3;
      puVar3 = puVar1;
    } while (puVar4 != puVar1);
  }
  return puVar3;
}


// ===== 00ce5a5c  FUN_00ce5a5c =====

void FUN_00ce5a5c(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  long *local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  lVar1 = *param_1;
  plVar2 = (long *)param_1[1];
  if (lVar1 != 0) {
    FUN_00d0f740(1,lVar1);
  }
  if (param_2 != (undefined8 *)0x0) {
    (**(code **)*param_2)(param_2);
  }
  local_50[0] = (long *)operator_new(0x30);
  *local_50[0] = lVar1;
  local_50[0][4] = (long)FUN_00ce604c;
  local_50[0][5] = (long)FUN_00ce6038;
  local_50[0][2] = (long)param_2;
  local_40 = FUN_005db390;
  pcStack_38 = FUN_005db348;
  (**(code **)(*plVar2 + 8))(plVar2,local_50,&uStack_11,&uStack_12);
  (*local_40)(0,local_50,local_50);
  return;
}


// ===== 00ce5b24  FUN_00ce5b24 =====

/* WARNING: Removing unreachable block (ram,0x00ce5ca4) */

void FUN_00ce5b24(long *param_1,undefined8 *param_2,undefined4 *param_3)

{
  long lVar1;
  long *plVar2;
  undefined4 uVar3;
  long *plVar4;
  void *local_90;
  long lStack_88;
  long local_80;
  undefined4 local_78;
  undefined3 uStack_74;
  long *local_70 [2];
  code *local_60;
  code *pcStack_58;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  lVar1 = *param_1;
  plVar2 = (long *)param_1[1];
  if (lVar1 != 0) {
    FUN_00d0f740(1,lVar1);
  }
  if (param_2 != (undefined8 *)0x0) {
    (**(code **)*param_2)(param_2);
  }
  uVar3 = *param_3;
  if (*(char *)((long)param_3 + 0x1f) < '\0') {
    FUN_005478d8(&local_90,*(undefined8 *)(param_3 + 2),*(undefined8 *)(param_3 + 4));
  }
  else {
    lStack_88 = *(long *)(param_3 + 4);
    local_90 = *(void **)(param_3 + 2);
    local_80 = *(long *)(param_3 + 6);
  }
  local_78._0_3_ = (undefined3)param_3[8];
  local_78._3_1_ = (undefined1)*(undefined4 *)((long)param_3 + 0x23);
  uStack_74 = (undefined3)((uint)*(undefined4 *)((long)param_3 + 0x23) >> 8);
  plVar4 = (long *)operator_new(0x30);
  *plVar4 = (long)param_2;
  *(undefined4 *)(plVar4 + 1) = uVar3;
  if (local_80 < 0) {
    FUN_005478d8(plVar4 + 2,local_90,lStack_88);
  }
  else {
    plVar4[3] = lStack_88;
    plVar4[2] = (long)local_90;
    plVar4[4] = local_80;
  }
  *(undefined4 *)(plVar4 + 5) = local_78;
  *(uint *)((long)plVar4 + 0x2b) = CONCAT31(uStack_74,local_78._3_1_);
  local_70[0] = (long *)operator_new(0x30);
  *local_70[0] = lVar1;
  local_70[0][4] = (long)FUN_00ce6130;
  local_70[0][5] = (long)FUN_00ce6090;
  local_70[0][2] = (long)plVar4;
  local_60 = FUN_005db390;
  pcStack_58 = FUN_005db348;
  (**(code **)(*plVar2 + 8))(plVar2,local_70,&uStack_31,&uStack_32);
  (*local_60)(0,local_70,local_70);
  if (local_80 < 0) {
    operator_delete(local_90);
  }
  return;
}


// ===== 00ce5cd0  FUN_00ce5cd0 =====

void FUN_00ce5cd0(long param_1,long *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  long *plVar2;
  undefined1 uStack_99;
  long *local_98;
  undefined4 local_90;
  void *local_88;
  long lStack_80;
  long local_78;
  undefined4 local_70;
  undefined3 uStack_6c;
  undefined1 uStack_61;
  long *local_60 [2];
  code *local_50;
  code *pcStack_48;
  
  plVar2 = *(long **)(param_1 + 8);
  local_98 = param_2;
  if (param_2 != (undefined8 *)0x0) {
    (**(code **)*param_2)(param_2);
  }
  local_90 = *param_3;
  if (*(char *)((long)param_3 + 0x1f) < '\0') {
    FUN_005478d8(&local_88,*(undefined8 *)(param_3 + 2),*(undefined8 *)(param_3 + 4));
    param_2 = local_98;
  }
  else {
    lStack_80 = *(long *)(param_3 + 4);
    local_88 = *(void **)(param_3 + 2);
    local_78 = *(long *)(param_3 + 6);
  }
  uVar1 = local_90;
  local_70._0_3_ = (undefined3)param_3[8];
  local_70._3_1_ = (undefined1)*(undefined4 *)((long)param_3 + 0x23);
  uStack_6c = (undefined3)((uint)*(undefined4 *)((long)param_3 + 0x23) >> 8);
  local_60[0] = (long *)operator_new(0x30);
  local_98 = (long *)0x0;
  *local_60[0] = (long)param_2;
  *(undefined4 *)(local_60[0] + 1) = uVar1;
  if (local_78 < 0) {
    FUN_005478d8(local_60[0] + 2,local_88,lStack_80);
  }
  else {
    local_60[0][3] = lStack_80;
    local_60[0][2] = (long)local_88;
    local_60[0][4] = local_78;
  }
  *(undefined4 *)(local_60[0] + 5) = local_70;
  *(uint *)((long)local_60[0] + 0x2b) = CONCAT31(uStack_6c,local_70._3_1_);
  local_50 = FUN_00ce625c;
  pcStack_48 = FUN_00ce61bc;
  (**(code **)(*plVar2 + 8))(plVar2,local_60,&uStack_61,&uStack_99);
  (*local_50)(0,local_60,local_60);
  if (local_78 < 0) {
    operator_delete(local_88);
  }
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 8))();
  }
  return;
}


// ===== 00ce5e40  FUN_00ce5e40 =====

void FUN_00ce5e40(long *param_1,undefined8 *param_2,long param_3,undefined8 *param_4)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined1 uStack_62;
  undefined1 uStack_61;
  long *local_60 [2];
  code *local_50;
  code *pcStack_48;
  
  lVar1 = *param_1;
  plVar2 = (long *)param_1[1];
  if (lVar1 != 0) {
    FUN_00d0f740(1,lVar1);
  }
  if (param_2 != (undefined8 *)0x0) {
    (**(code **)*param_2)(param_2);
  }
  if (param_4 != (undefined8 *)0x0) {
    (**(code **)*param_4)(param_4);
  }
  plVar3 = (long *)operator_new(0x18);
  *plVar3 = (long)param_2;
  plVar3[1] = param_3;
  plVar3[2] = (long)param_4;
  local_60[0] = (long *)operator_new(0x30);
  *local_60[0] = lVar1;
  local_60[0][4] = (long)FUN_00ce63d4;
  local_60[0][5] = (long)FUN_00ce62e8;
  local_60[0][2] = (long)plVar3;
  local_50 = FUN_005db390;
  pcStack_48 = FUN_005db348;
  (**(code **)(*plVar2 + 8))(plVar2,local_60,&uStack_61,&uStack_62);
  (*local_50)(0,local_60,local_60);
  return;
}


// ===== 00ce5f40  FUN_00ce5f40 =====

void FUN_00ce5f40(long *param_1,undefined8 *param_2,int param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *local_60 [2];
  code *local_50;
  code *pcStack_48;
  undefined1 local_24 [3];
  undefined1 uStack_21;
  
  lVar1 = *param_1;
  plVar2 = (long *)param_1[1];
  if (lVar1 != 0) {
    FUN_00d0f740(1,lVar1);
  }
  puVar3 = (undefined8 *)operator_new(0x20);
  uVar5 = *param_2;
  uVar7 = param_2[3];
  uVar6 = param_2[2];
  lVar4 = param_2[3];
  puVar3[1] = param_2[1];
  *puVar3 = uVar5;
  puVar3[3] = uVar7;
  puVar3[2] = uVar6;
  if (*(long *)(lVar4 + 8) != 0) {
    param_2[2] = 0;
    param_2[3] = &DAT_001fbc50;
  }
  local_60[0] = (long *)operator_new(0x30);
  *local_60[0] = lVar1;
  local_60[0][4] = (long)FUN_00ce646c;
  local_60[0][5] = (long)FUN_00ce645c;
  local_60[0][2] = (long)puVar3;
  local_50 = FUN_005db390;
  pcStack_48 = FUN_005db348;
  local_24[0] = 0;
  (**(code **)(*plVar2 + 0x10))(plVar2,local_60,(long)param_3 * 1000,local_24,&uStack_21);
  (*local_50)(0,local_60,local_60);
  return;
}


// ===== 00ce6038  FUN_00ce6038 =====

void FUN_00ce6038(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00ce6048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x20))();
  return;
}


// ===== 00ce604c  FUN_00ce604c =====

void FUN_00ce604c(uint param_1,long *param_2,long *param_3)

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
    pcVar1 = (code *)SoftwareBreakpoint(1,0xce6090);
    (*pcVar1)();
  }
  if ((long *)*param_2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00ce6084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)*param_2 + 8))();
    return;
  }
  return;
}


// ===== 00ce6090  FUN_00ce6090 =====

void FUN_00ce6090(undefined8 *param_1)

{
  long *plVar1;
  undefined4 local_48 [2];
  void *local_40;
  undefined8 uStack_38;
  long local_30;
  undefined3 local_28;
  undefined1 uStack_25;
  undefined3 uStack_24;
  
  param_1 = (undefined8 *)*param_1;
  local_48[0] = *(undefined4 *)(param_1 + 1);
  plVar1 = (long *)*param_1;
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    FUN_005478d8(&local_40,param_1[2],param_1[3]);
  }
  else {
    local_30 = param_1[4];
    uStack_38 = param_1[3];
    local_40 = (void *)param_1[2];
  }
  local_28 = (undefined3)*(undefined4 *)(param_1 + 5);
  uStack_25 = (undefined1)*(undefined4 *)((long)param_1 + 0x2b);
  uStack_24 = (undefined3)((uint)*(undefined4 *)((long)param_1 + 0x2b) >> 8);
  (**(code **)(*plVar1 + 0x28))(plVar1,local_48);
  if (local_30 < 0) {
    operator_delete(local_40);
  }
  return;
}


// ===== 00ce6130  FUN_00ce6130 =====

void FUN_00ce6130(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  long *plVar2;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0xce61bc);
      (*pcVar1)();
    }
    plVar2 = (long *)*param_2;
    if (plVar2 != (long *)0x0) {
      if (*(char *)((long)plVar2 + 0x27) < '\0') {
        operator_delete((void *)plVar2[2]);
      }
      if ((long *)*plVar2 != (long *)0x0) {
        (**(code **)(*(long *)*plVar2 + 8))();
      }
      operator_delete(plVar2);
      return;
    }
  }
  return;
}


// ===== 00ce61bc  FUN_00ce61bc =====

void FUN_00ce61bc(undefined8 *param_1)

{
  long *plVar1;
  undefined4 local_48 [2];
  void *local_40;
  undefined8 uStack_38;
  long local_30;
  undefined3 local_28;
  undefined1 uStack_25;
  undefined3 uStack_24;
  
  param_1 = (undefined8 *)*param_1;
  local_48[0] = *(undefined4 *)(param_1 + 1);
  plVar1 = (long *)*param_1;
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    FUN_005478d8(&local_40,param_1[2],param_1[3]);
  }
  else {
    local_30 = param_1[4];
    uStack_38 = param_1[3];
    local_40 = (void *)param_1[2];
  }
  local_28 = (undefined3)*(undefined4 *)(param_1 + 5);
  uStack_25 = (undefined1)*(undefined4 *)((long)param_1 + 0x2b);
  uStack_24 = (undefined3)((uint)*(undefined4 *)((long)param_1 + 0x2b) >> 8);
  (**(code **)(*plVar1 + 0x28))(plVar1,local_48);
  if (local_30 < 0) {
    operator_delete(local_40);
  }
  return;
}


// ===== 00ce625c  FUN_00ce625c =====

void FUN_00ce625c(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  long *plVar2;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0xce62e8);
      (*pcVar1)();
    }
    plVar2 = (long *)*param_2;
    if (plVar2 != (long *)0x0) {
      if (*(char *)((long)plVar2 + 0x27) < '\0') {
        operator_delete((void *)plVar2[2]);
      }
      if ((long *)*plVar2 != (long *)0x0) {
        (**(code **)(*(long *)*plVar2 + 8))();
      }
      operator_delete(plVar2);
      return;
    }
  }
  return;
}


// ===== 00ce62e8  FUN_00ce62e8 =====

void FUN_00ce62e8(undefined8 *param_1)

{
  void *pvVar1;
  ulong uVar2;
  ulong uVar3;
  void *local_38;
  void *local_30;
  undefined8 local_28;
  
  param_1 = (undefined8 *)*param_1;
  local_30 = (void *)0x0;
  local_28 = 0;
  local_38 = (void *)0x0;
  (**(code **)(*(long *)param_1[1] + 0x20))((long *)param_1[1],param_1[2],&local_38);
  (**(code **)(*(long *)*param_1 + 0x20))((long *)*param_1,&local_38);
  if (local_38 != (void *)0x0) {
    uVar3 = (ulong)((long)local_30 + (-8 - ((long)local_30 << 0x3d))) >> 3;
    uVar2 = (ulong)(((long)local_38 - (long)local_30 << 0x3d) - ((long)local_38 - (long)local_30))
            >> 3;
    if (uVar3 <= uVar2) {
      uVar2 = uVar3;
    }
    pvVar1 = local_30;
    if ((1 < uVar2) && ((((int)local_38 - (int)local_30 | -(int)local_30) & 7U) == 0)) {
      uVar2 = uVar2 & 0x1ffffffffffffffe;
      pvVar1 = (void *)((long)local_30 + uVar2 * -8);
      do {
        uVar2 = uVar2 - 2;
      } while (uVar2 != 0);
    }
    while (pvVar1 != local_38) {
      pvVar1 = (void *)((long)pvVar1 + -8);
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    local_30 = local_38;
    operator_delete(local_38);
  }
  return;
}


// ===== 00ce63d4  FUN_00ce63d4 =====

void FUN_00ce63d4(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  long *plVar2;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0xce645c);
      (*pcVar1)();
    }
    plVar2 = (long *)*param_2;
    if (plVar2 != (long *)0x0) {
      if ((long *)plVar2[2] != (long *)0x0) {
        (**(code **)(*(long *)plVar2[2] + 8))();
      }
      if ((long *)*plVar2 != (long *)0x0) {
        (**(code **)(*(long *)*plVar2 + 8))();
      }
      operator_delete(plVar2);
      return;
    }
  }
  return;
}


// ===== 00ce645c  FUN_00ce645c =====

void FUN_00ce645c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00ce6468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}


// ===== 00ce646c  FUN_00ce646c =====

void FUN_00ce646c(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0xce64e0);
      (*pcVar1)();
    }
    param_2 = (undefined8 *)*param_2;
    if (param_2 != (undefined8 *)0x0) {
      if (*(code **)(param_2[3] + 8) != (code *)0x0) {
        (**(code **)(param_2[3] + 8))(*param_2);
      }
      operator_delete(param_2);
      return;
    }
  }
  return;
}


// ===== 00ce64e0  FUN_00ce64e0 =====

void FUN_00ce64e0(void)

{
  FUN_00ce6520();
  return;
}


// ===== 00ce6520  FUN_00ce6520 =====

void FUN_00ce6520(long param_1,undefined8 *param_2,long *param_3,long *param_4,long *param_5,
                 undefined4 param_6)

{
  ulong uVar1;
  long lVar2;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long alStack_98 [9];
  undefined1 *local_50;
  
  if (param_3[1] - *param_3 == 0x18) {
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    uStack_a8 = 0;
    local_b0 = 0;
    alStack_98[0] = 0;
    local_a0 = 0;
    alStack_98[2] = 0;
    alStack_98[1] = 0;
    alStack_98[4] = 0;
    alStack_98[3] = 0;
    alStack_98[6] = 0;
    alStack_98[5] = 0;
    alStack_98[8] = 0;
    alStack_98[7] = 0;
    if (&local_b0 != param_2) {
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        FUN_00547fc0(&local_b0,*param_2,param_2[1]);
      }
      else {
        uStack_a8 = param_2[1];
        local_b0 = *param_2;
        local_a0 = param_2[2];
      }
    }
    if (alStack_98 != param_3) {
      FUN_007eeac8();
    }
    if (alStack_98 + 6 != param_5) {
      FUN_00b15650(alStack_98 + 6,*param_5,param_5[1],
                   (param_5[1] - *param_5 >> 3) * -0x5555555555555555);
    }
    if (alStack_98 + 3 != param_4) {
      FUN_0088ec84();
    }
    uVar1 = *(ulong *)(param_1 + 0x30);
    local_50 = (undefined1 *)CONCAT44(local_50._4_4_,param_6);
    if (uVar1 < *(ulong *)(param_1 + 0x38)) {
      FUN_00ce66b0(uVar1,&local_b0);
      lVar2 = uVar1 + 0x68;
    }
    else {
      lVar2 = FUN_00cc71fc(param_1 + 0x28,&local_b0);
    }
    *(long *)(param_1 + 0x30) = lVar2;
    FUN_00cc6db0(&local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../pc/media_options.cc",0x43,"stream_ids.size() == 1U",&DAT_001f5fa0);
}


// ===== 00ce66a8  thunk_FUN_00ce6520 =====

void thunk_FUN_00ce6520(void)

{
  FUN_00ce6520();
  return;
}


// ===== 00ce66b0  FUN_00ce66b0 =====

undefined8 * FUN_00ce66b0(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  void *pvVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (param_1 != (undefined8 *)0x0) {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      FUN_005478d8(param_1,*param_2,param_2[1]);
    }
    else {
      uVar6 = param_2[1];
      uVar5 = *param_2;
      param_1[2] = param_2[2];
      param_1[1] = uVar6;
      *param_1 = uVar5;
    }
    FUN_00843ef4(param_1 + 3,param_2 + 3);
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    lVar4 = param_2[6];
    lVar1 = param_2[7];
    uVar2 = lVar1 - lVar4;
    if (uVar2 != 0) {
      if (0x333333333333333 < (ulong)(((long)uVar2 >> 4) * -0x3333333333333333)) {
                    /* WARNING: Subroutine does not return */
        FUN_0088e860();
      }
      pvVar3 = operator_new(uVar2);
      param_1[6] = pvVar3;
      param_1[7] = pvVar3;
      param_1[8] = (long)pvVar3 + uVar2;
      do {
        if (pvVar3 == (void *)0x0) goto LAB_00ce67a8;
        FUN_0088f9d8(pvVar3,lVar4);
        lVar4 = lVar4 + 0x50;
        pvVar3 = (void *)((long)pvVar3 + 0x50);
      } while (lVar4 != lVar1);
      param_1[7] = pvVar3;
    }
    FUN_00b0e8d8(param_1 + 9,param_2 + 9);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
    return param_1;
  }
LAB_00ce67a8:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00ce67c0  FUN_00ce67c0 =====

void * FUN_00ce67c0(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0xb0);
  FUN_007eac60();
  return pvVar1;
}


// ===== 00ce67f4  FUN_00ce67f4 =====

long * FUN_00ce67f4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_50 [16];
  code *local_40;
  undefined8 uStack_38;
  
  plVar1 = (long *)operator_new(0xb0);
  FUN_007eac60();
  (**(code **)(param_3 + 0x10))(1,param_3,auStack_50);
  uStack_38 = *(undefined8 *)(param_3 + 0x18);
  local_40 = *(code **)(param_3 + 0x10);
  lVar2 = *plVar1;
  *(code **)(param_3 + 0x10) = FUN_00433984;
  *(undefined8 *)(param_3 + 0x18) = 0;
  (**(code **)(lVar2 + 0x10))(plVar1,param_2,auStack_50);
  (*local_40)(0,auStack_50,auStack_50);
  return plVar1;
}


// ===== 00ce6894  FUN_00ce6894 =====

long * FUN_00ce6894(undefined8 param_1,undefined8 param_2,undefined4 param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_50 [16];
  code *local_40;
  undefined8 uStack_38;
  
  plVar1 = (long *)operator_new(0xb0);
  FUN_007eac60();
  (**(code **)(param_4 + 0x10))(1,param_4,auStack_50);
  uStack_38 = *(undefined8 *)(param_4 + 0x18);
  local_40 = *(code **)(param_4 + 0x10);
  lVar2 = *plVar1;
  *(code **)(param_4 + 0x10) = FUN_00433984;
  *(undefined8 *)(param_4 + 0x18) = 0;
  (**(code **)(lVar2 + 0x18))(plVar1,param_2,param_3,auStack_50);
  (*local_40)(0,auStack_50,auStack_50);
  return plVar1;
}


// ===== 00ce693c  FUN_00ce693c =====

void FUN_00ce693c(void)

{
  return;
}


// ===== 00ce6944  FUN_00ce6944 =====

void FUN_00ce6944(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00ce6950  FUN_00ce6950 =====

void FUN_00ce6950(undefined8 *param_1,long *param_2,undefined8 param_3,long param_4,
                 undefined8 param_5,long *param_6,undefined8 param_7)

{
  undefined8 **ppuVar1;
  undefined8 **ppuVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 **local_80;
  undefined8 **local_78;
  undefined8 local_70;
  undefined8 *puStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_38 [4];
  undefined1 local_34;
  
  FUN_00be31dc();
  *param_1 = &PTR_FUN_00d50170;
  lVar4 = *param_2;
  param_1[0x1d] = lVar4;
  if (lVar4 != 0) {
    FUN_00d0f740(1,lVar4 + 8);
  }
  lVar5 = param_2[4];
  lVar4 = param_2[3];
  lVar7 = param_2[2];
  lVar6 = param_2[1];
  param_1[0x22] = param_3;
  param_1[0x23] = param_4;
  param_1[0x1f] = lVar7;
  param_1[0x1e] = lVar6;
  param_1[0x21] = lVar5;
  param_1[0x20] = lVar4;
  *(undefined4 *)(param_1 + 0x24) = 0x10;
  if (param_6 == (long *)0x0) {
    plVar3 = (long *)operator_new(8);
    *plVar3 = (long)(PTR_DAT_00d53040 + 0x10);
    param_6 = plVar3;
  }
  else {
    plVar3 = (long *)0x0;
  }
  param_1[0x25] = plVar3;
  param_1[0x26] = param_6;
  param_1[0x27] = param_7;
  if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../p2p/client/basic_port_allocator.cc",0xc1,"socket_factory_",&DAT_001f5fa0);
  }
  puStack_68 = &local_60;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  local_80 = (undefined8 **)0x0;
  local_78 = (undefined8 **)0x0;
  local_38[0] = 0;
  local_34 = 0;
  FUN_00be33c8(param_1,&puStack_68,&local_80,0,0,param_5,local_38);
  ppuVar2 = local_80;
  ppuVar1 = local_78;
  if (local_80 != (undefined8 **)0x0) {
    while (ppuVar2 != ppuVar1) {
      ppuVar1 = ppuVar1 + -0x14;
      if (ppuVar1 == (undefined8 **)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      FUN_00be2ca4(ppuVar1);
    }
    local_78 = ppuVar2;
    operator_delete(local_80);
  }
  local_80 = &puStack_68;
  FUN_00b8b8d8(&local_80,local_60);
  return;
}


// ===== 00ce6ae4  FUN_00ce6ae4 =====

void FUN_00ce6ae4(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_00d50170;
  FUN_00be3ecc();
  plVar2 = (long *)param_1[0x27];
  param_1[0x27] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)param_1[0x25];
  param_1[0x25] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)param_1[0x1d];
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  FUN_00be3294(param_1);
  return;
}


// ===== 00ce6b78  FUN_00ce6b78 =====

void FUN_00ce6b78(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_00d50170;
  FUN_00be3ecc();
  plVar2 = (long *)param_1[0x27];
  param_1[0x27] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)param_1[0x25];
  param_1[0x25] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)param_1[0x1d];
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  FUN_00be3294(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00ce6c18  FUN_00ce6c18 =====

void FUN_00ce6c18(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x120) = param_2;
  return;
}


// ===== 00ce6c24  FUN_00ce6c24 =====

/* WARNING: Removing unreachable block (ram,0x00ce6ebc) */
/* WARNING: Removing unreachable block (ram,0x00ce6ed4) */

void * FUN_00ce6c24(undefined8 param_1,undefined8 *****param_2,ulong param_3,undefined4 param_4,
                   undefined8 *****param_5,ulong param_6,undefined8 *****param_7,ulong param_8)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  void *pvVar5;
  undefined8 *****pppppuVar6;
  undefined8 *****pppppuVar7;
  undefined8 *****__dest;
  undefined8 ****local_a8;
  ulong uStack_a0;
  undefined8 local_98;
  undefined8 ****local_90;
  ulong uStack_88;
  undefined8 local_80;
  undefined8 ****local_78;
  ulong uStack_70;
  undefined8 local_68;
  
  pvVar5 = operator_new(0x1e0);
  if (param_3 < 0x7ffffffffffffff7) {
    if (param_3 < 0x17) {
      local_68 = CONCAT17((char)param_3,(undefined7)local_68);
      pppppuVar6 = &local_78;
    }
    else {
      uVar1 = (param_3 & 0x7ffffffffffffff8) + 8;
      uVar2 = 0x19;
      if (uVar1 != 0x18) {
        uVar2 = uVar1;
      }
      pppppuVar6 = (undefined8 *****)operator_new(uVar2);
      local_68 = uVar2 | 0x8000000000000000;
      local_78 = pppppuVar6;
      uStack_70 = param_3;
    }
    if ((undefined8 *****)((long)pppppuVar6 + param_3) < pppppuVar6) {
LAB_00ce6ee8:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
                );
    }
    if ((param_2 < pppppuVar6) || ((undefined8 *****)((long)pppppuVar6 + param_3) <= param_2)) {
      memmove(pppppuVar6,param_2,param_3);
      *(undefined1 *)((long)pppppuVar6 + param_3) = 0;
      uVar1 = uStack_70;
      pppppuVar6 = (undefined8 *****)local_78;
      if (-1 < (long)local_68) {
        uVar1 = local_68 >> 0x38;
        pppppuVar6 = &local_78;
      }
      if (0x7ffffffffffffff6 < param_6) goto LAB_00ce6f10;
      if (param_6 < 0x17) {
        local_80 = CONCAT17((char)param_6,(undefined7)local_80);
        pppppuVar7 = &local_90;
      }
      else {
        uVar2 = (param_6 & 0x7ffffffffffffff8) + 8;
        uVar3 = 0x19;
        if (uVar2 != 0x18) {
          uVar3 = uVar2;
        }
        pppppuVar7 = (undefined8 *****)operator_new(uVar3);
        local_80 = uVar3 | 0x8000000000000000;
        local_90 = pppppuVar7;
        uStack_88 = param_6;
      }
      if ((undefined8 *****)((long)pppppuVar7 + param_6) < pppppuVar7) goto LAB_00ce6ee8;
      if ((param_5 < pppppuVar7) || ((undefined8 *****)((long)pppppuVar7 + param_6) <= param_5)) {
        memmove(pppppuVar7,param_5,param_6);
        *(undefined1 *)((long)pppppuVar7 + param_6) = 0;
        uVar2 = uStack_88;
        pppppuVar7 = (undefined8 *****)local_90;
        if (-1 < (long)local_80) {
          uVar2 = local_80 >> 0x38;
          pppppuVar7 = &local_90;
        }
        if (0x7ffffffffffffff6 < param_8) goto LAB_00ce6f10;
        if (param_8 < 0x17) {
          local_98 = CONCAT17((char)param_8,(undefined7)local_98);
          __dest = &local_a8;
        }
        else {
          uVar3 = (param_8 & 0x7ffffffffffffff8) + 8;
          uVar4 = 0x19;
          if (uVar3 != 0x18) {
            uVar4 = uVar3;
          }
          __dest = (undefined8 *****)operator_new(uVar4);
          local_98 = uVar4 | 0x8000000000000000;
          local_a8 = __dest;
          uStack_a0 = param_8;
        }
        if ((undefined8 *****)((long)__dest + param_8) < __dest) goto LAB_00ce6ee8;
        if ((param_7 < __dest) || ((undefined8 *****)((long)__dest + param_8) <= param_7)) {
          memmove(__dest,param_7,param_8);
          *(undefined1 *)((long)__dest + param_8) = 0;
          FUN_00ce6f14(pvVar5,param_1,pppppuVar6,uVar1,param_4,pppppuVar7,uVar2);
          if ((long)local_98 < 0) {
            operator_delete(local_a8);
          }
          return pvVar5;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
              );
  }
LAB_00ce6f10:
                    /* WARNING: Subroutine does not return */
  FUN_005d45ec();
}


// ===== 00ce6f14  FUN_00ce6f14 =====

void FUN_00ce6f14(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  long *local_70 [2];
  code *local_60;
  code *pcStack_58;
  char **local_48;
  char *local_40;
  char *pcStack_38;
  
  uVar5 = *(uint *)(param_2 + 0xc);
  FUN_00be2e84(param_1,param_3,param_4,param_5,param_6,param_7,param_9,param_10,uVar5);
  param_1[0x29] = param_2;
  *param_1 = &PTR_FUN_00d501d8;
  uVar3 = FUN_007e06bc();
  param_1[0x2a] = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x118);
  *(undefined2 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)((long)param_1 + 0x162) = 0;
  param_1[0x2b] = uVar3;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  param_1[0x32] = 0;
  param_1[0x31] = 0;
  param_1[0x34] = 0;
  param_1[0x33] = 0;
  param_1[0x36] = 0;
  param_1[0x35] = 0;
  param_1[0x38] = 0;
  param_1[0x37] = 0;
  uVar3 = DAT_001f58a0;
  *(undefined4 *)(param_1 + 0x39) = 7;
  uVar1 = *(undefined4 *)(param_2 + 0x98);
  param_1[0x3a] = uVar3;
  *(undefined4 *)((long)param_1 + 0x1cc) = uVar1;
  FUN_007ebca0(param_1 + 0x3b);
  if (((DAT_00dbb748 & 1) == 0) && (iVar2 = FUN_0054fdd4(&DAT_00dbb748), iVar2 != 0)) {
    DAT_00dbb740 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00dbb748);
  }
  local_48 = (char **)0x0;
  pcStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00dbb740 != '\0') {
    uVar5 = uVar5 & 0xffffff00;
    FUN_0066d348(0x42,DAT_00dbb740,"BasicPortAllocatorSession::BasicPortAllocatorSession",0,0,0,0,0,
                 uVar5);
    local_40 = DAT_00dbb740;
    pcStack_38 = "BasicPortAllocatorSession::BasicPortAllocatorSession";
    local_48 = &local_40;
  }
  lVar4 = param_1[0x3b];
  uVar3 = *(undefined8 *)(param_1[0x29] + 0x110);
  if (lVar4 != 0) {
    FUN_00d0f740(1,lVar4);
  }
  local_70[0] = (long *)operator_new(0x30);
  *local_70[0] = lVar4;
  local_70[0][4] = (long)FUN_004473ec;
  local_70[0][5] = (long)FUN_00cef4f0;
  local_70[0][2] = (long)param_1;
  local_60 = FUN_00cee090;
  pcStack_58 = FUN_00cee048;
  FUN_00bc97d0(uVar3,param_1,local_70);
  (*local_60)(0,local_70,local_70);
  (**(code **)(**(long **)(param_1[0x29] + 0x110) + 0x20))();
  if ((local_48 != (char **)0x0) && (**local_48 != '\0')) {
    FUN_0066d348(0x45,*local_48,local_48[1],0,0,0,0,0,uVar5 & 0xffffff00);
  }
  return;
}


// ===== 00ce7138  FUN_00ce7138 =====

void FUN_00ce7138(undefined8 *param_1)

{
  bool bVar1;
  int iVar2;
  void *pvVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  void *pvVar12;
  void *pvVar13;
  undefined8 *puVar14;
  char **local_48;
  char *local_40;
  char *pcStack_38;
  
  *param_1 = &PTR_FUN_00d501d8;
  if (((DAT_00dbb758 & 1) == 0) && (iVar2 = FUN_0054fdd4(&DAT_00dbb758), iVar2 != 0)) {
    DAT_00dbb750 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00dbb758);
  }
  local_48 = (char **)0x0;
  pcStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00dbb750 != '\0') {
    local_48 = &local_40;
    FUN_0066d348(0x42,DAT_00dbb750,"BasicPortAllocatorSession::~BasicPortAllocatorSession",0,0,0,0,0
                 ,0);
    local_40 = DAT_00dbb750;
    pcStack_38 = "BasicPortAllocatorSession::~BasicPortAllocatorSession";
  }
  (**(code **)(**(long **)(param_1[0x29] + 0x110) + 0x28))();
  FUN_00bc9868(*(undefined8 *)(param_1[0x29] + 0x110),param_1);
  lVar5 = param_1[0x30];
  if (param_1[0x31] != lVar5) {
    uVar9 = 0;
    uVar10 = 1;
    do {
      FUN_00ce7570(*(undefined8 *)(lVar5 + uVar9 * 8));
      lVar5 = param_1[0x30];
      bVar1 = uVar10 < (ulong)(param_1[0x31] - lVar5 >> 3);
      uVar9 = uVar10;
      uVar10 = (ulong)((int)uVar10 + 1);
    } while (bVar1);
  }
  plVar6 = (long *)param_1[0x34];
  for (plVar11 = (long *)param_1[0x33]; plVar11 != plVar6; plVar11 = plVar11 + 3) {
    if ((long *)*plVar11 != (long *)0x0) {
      (**(code **)(*(long *)*plVar11 + 8))();
      plVar6 = (long *)param_1[0x34];
    }
  }
  puVar14 = (undefined8 *)param_1[0x2d];
  puVar4 = (undefined8 *)param_1[0x2e];
  while (puVar14 != puVar4) {
    puVar4 = puVar4 + -1;
    if (puVar4 == (undefined8 *)0x0) goto LAB_00ce7494;
    pvVar12 = (void *)*puVar4;
    *puVar4 = 0;
    if (pvVar12 != (void *)0x0) {
      FUN_00cef404(pvVar12);
      operator_delete(pvVar12);
    }
  }
  lVar5 = param_1[0x30];
  lVar7 = param_1[0x31];
  param_1[0x2e] = puVar14;
  if (lVar7 != lVar5) {
    uVar9 = 0;
    uVar10 = 1;
    do {
      pvVar12 = *(void **)(lVar5 + uVar9 * 8);
      if (pvVar12 != (void *)0x0) {
        FUN_00ce76fc(pvVar12);
        operator_delete(pvVar12);
        lVar5 = param_1[0x30];
        lVar7 = param_1[0x31];
      }
      bVar1 = uVar10 < (ulong)(lVar7 - lVar5 >> 3);
      uVar9 = uVar10;
      uVar10 = (ulong)((int)uVar10 + 1);
    } while (bVar1);
  }
  if ((local_48 != (char **)0x0) && (**local_48 != '\0')) {
    FUN_0066d348(0x45,*local_48,local_48[1],0,0,0,0,0,0);
  }
  FUN_007ebdcc(param_1[0x3b]);
  pvVar12 = (void *)param_1[0x3b];
  if ((pvVar12 != (void *)0x0) && (iVar2 = FUN_00d0f7a0(0xffffffff,pvVar12), iVar2 == 1)) {
    operator_delete(pvVar12);
  }
  pvVar12 = (void *)param_1[0x36];
  if (pvVar12 != (void *)0x0) {
    pvVar13 = (void *)param_1[0x37];
    pvVar3 = pvVar12;
    if (pvVar12 != pvVar13) {
      do {
        pvVar13 = (void *)((long)pvVar13 + -0x58);
        FUN_00cef0f8(pvVar13);
      } while (pvVar13 != pvVar12);
      pvVar3 = (void *)param_1[0x36];
    }
    param_1[0x37] = pvVar12;
    operator_delete(pvVar3);
  }
  pvVar12 = (void *)param_1[0x33];
  if (pvVar12 == (void *)0x0) {
LAB_00ce7428:
    pvVar12 = (void *)param_1[0x30];
    if (pvVar12 == (void *)0x0) {
LAB_00ce74b8:
      puVar14 = (undefined8 *)param_1[0x2d];
      if (puVar14 != (undefined8 *)0x0) {
        puVar8 = (undefined8 *)param_1[0x2e];
        puVar4 = puVar14;
        if (puVar14 != puVar8) {
          do {
            puVar8 = puVar8 + -1;
            if (puVar8 == (undefined8 *)0x0) goto LAB_00ce7494;
            pvVar12 = (void *)*puVar8;
            *puVar8 = 0;
            if (pvVar12 != (void *)0x0) {
              FUN_00cef404(pvVar12);
              operator_delete(pvVar12);
            }
          } while (puVar8 != puVar14);
          puVar4 = (undefined8 *)param_1[0x2d];
        }
        param_1[0x2e] = puVar14;
        operator_delete(puVar4);
      }
      FUN_00be30d8(param_1);
      return;
    }
    pvVar3 = (void *)param_1[0x31];
    uVar10 = (ulong)((long)pvVar3 + (-8 - ((long)pvVar3 << 0x3d))) >> 3;
    uVar9 = (ulong)(((long)pvVar12 - (long)pvVar3 << 0x3d) - ((long)pvVar12 - (long)pvVar3)) >> 3;
    if (uVar10 <= uVar9) {
      uVar9 = uVar10;
    }
    if ((1 < uVar9) && ((((int)pvVar12 - (int)pvVar3 | -(int)pvVar3) & 7U) == 0)) {
      uVar9 = uVar9 & 0x1ffffffffffffffe;
      pvVar3 = (void *)((long)pvVar3 + uVar9 * -8);
      do {
        uVar9 = uVar9 - 2;
      } while (uVar9 != 0);
    }
    do {
      if (pvVar3 == pvVar12) {
        param_1[0x31] = pvVar12;
        operator_delete(pvVar12);
        goto LAB_00ce74b8;
      }
      pvVar3 = (void *)((long)pvVar3 + -8);
    } while (pvVar3 != (void *)0x0);
  }
  else {
    pvVar3 = (void *)param_1[0x34];
    uVar9 = (ulong)(((long)pvVar12 - (long)pvVar3) * 0x1555555555555555) >> 3;
    uVar10 = (long)pvVar3 * -0x1555555555555555 - 8U >> 3;
    if (uVar10 <= uVar9) {
      uVar9 = uVar10;
    }
    if ((1 < uVar9) && ((((int)pvVar12 - (int)pvVar3 | -(int)pvVar3) & 7U) == 0)) {
      uVar9 = uVar9 & 0x1ffffffffffffffe;
      pvVar3 = (void *)((long)pvVar3 + uVar9 * -0x18);
      do {
        uVar9 = uVar9 - 2;
      } while (uVar9 != 0);
    }
    do {
      if (pvVar3 == pvVar12) {
        param_1[0x34] = pvVar12;
        operator_delete(pvVar12);
        goto LAB_00ce7428;
      }
      pvVar3 = (void *)((long)pvVar3 + -0x18);
    } while (pvVar3 != (void *)0x0);
  }
LAB_00ce7494:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00ce7570  FUN_00ce7570 =====

void FUN_00ce7570(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  char **ppcVar6;
  char *local_40;
  char *pcStack_38;
  
  if (((DAT_00dbb768 & 1) == 0) && (iVar2 = FUN_0054fdd4(&DAT_00dbb768), iVar2 != 0)) {
    DAT_00dbb760 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00dbb768);
  }
  pcStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00dbb760 == '\0') {
    ppcVar6 = (char **)0x0;
  }
  else {
    ppcVar6 = &local_40;
    FUN_0066d348(0x42,DAT_00dbb760,"AllocationSequence::Clear",0,0,0,0,0,0);
    local_40 = DAT_00dbb760;
    pcStack_38 = "AllocationSequence::Clear";
  }
  lVar1 = *(long *)(param_1 + 0x70);
  lVar3 = *(long *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x68) = 0;
  uVar5 = (lVar3 - (lVar3 << 0x3d)) - 8U >> 3;
  uVar4 = (ulong)((lVar1 - lVar3 << 0x3d) - (lVar1 - lVar3)) >> 3;
  if (uVar5 <= uVar4) {
    uVar4 = uVar5;
  }
  if ((1 < uVar4) && ((((int)lVar1 - (int)lVar3 | -(int)lVar3) & 7U) == 0)) {
    uVar4 = uVar4 & 0x1ffffffffffffffe;
    lVar3 = lVar3 + uVar4 * -8;
    do {
      uVar4 = uVar4 - 2;
    } while (uVar4 != 0);
  }
  do {
    if (lVar3 == lVar1) {
      *(long *)(param_1 + 0x78) = lVar1;
      if (ppcVar6 != (char **)0x0) {
        if (**ppcVar6 != '\0') {
          FUN_0066d348(0x45,*ppcVar6,ppcVar6[1],0,0,0,0,0,0);
        }
      }
      return;
    }
    lVar3 = lVar3 + -8;
  } while (lVar3 != 0);
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00ce76fc  FUN_00ce76fc =====

void FUN_00ce76fc(long param_1)

{
  int iVar1;
  long *plVar2;
  code *pcVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  void *pvVar7;
  
  FUN_007ebdcc(*(undefined8 *)(param_1 + 0xb8));
  pvVar7 = *(void **)(param_1 + 0xb8);
  if ((pvVar7 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar7), iVar1 == 1)) {
    operator_delete(pvVar7);
  }
  pcVar3 = *(code **)(*(long *)(param_1 + 0xa8) + 8);
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(*(undefined8 *)(param_1 + 0x90));
  }
  pvVar7 = *(void **)(param_1 + 0x70);
  if (pvVar7 == (void *)0x0) {
LAB_00ce77d4:
    plVar2 = *(long **)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = 0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    pvVar7 = *(void **)(param_1 + 0x48);
    if (pvVar7 == (void *)0x0) {
      return;
    }
    pvVar4 = *(void **)(param_1 + 0x50);
    uVar6 = (ulong)((long)pvVar4 + (-4 - ((long)pvVar4 << 0x3e))) >> 2;
    uVar5 = (ulong)(((long)pvVar7 - (long)pvVar4 << 0x3e) - ((long)pvVar7 - (long)pvVar4)) >> 2;
    if (uVar6 <= uVar5) {
      uVar5 = uVar6;
    }
    if ((1 < uVar5) && ((((int)pvVar7 - (int)pvVar4 | -(int)pvVar4) & 3U) == 0)) {
      uVar5 = uVar5 & 0x3ffffffffffffffe;
      pvVar4 = (void *)((long)pvVar4 + uVar5 * -4);
      do {
        uVar5 = uVar5 - 2;
      } while (uVar5 != 0);
    }
    do {
      if (pvVar4 == pvVar7) {
        *(void **)(param_1 + 0x50) = pvVar7;
        operator_delete(pvVar7);
        return;
      }
      pvVar4 = (void *)((long)pvVar4 + -4);
    } while (pvVar4 != (void *)0x0);
  }
  else {
    pvVar4 = *(void **)(param_1 + 0x78);
    uVar6 = (ulong)((long)pvVar4 + (-8 - ((long)pvVar4 << 0x3d))) >> 3;
    uVar5 = (ulong)(((long)pvVar7 - (long)pvVar4 << 0x3d) - ((long)pvVar7 - (long)pvVar4)) >> 3;
    if (uVar6 <= uVar5) {
      uVar5 = uVar6;
    }
    if ((1 < uVar5) && ((((int)pvVar7 - (int)pvVar4 | -(int)pvVar4) & 7U) == 0)) {
      uVar5 = uVar5 & 0x1ffffffffffffffe;
      pvVar4 = (void *)((long)pvVar4 + uVar5 * -8);
      do {
        uVar5 = uVar5 - 2;
      } while (uVar5 != 0);
    }
    do {
      if (pvVar4 == pvVar7) {
        *(void **)(param_1 + 0x78) = pvVar7;
        operator_delete(pvVar7);
        goto LAB_00ce77d4;
      }
      pvVar4 = (void *)((long)pvVar4 + -8);
    } while (pvVar4 != (void *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00ce7898  FUN_00ce7898 =====

void FUN_00ce7898(void *param_1)

{
  FUN_00ce7138();
  operator_delete(param_1);
  return;
}


// ===== 00ce78c8  FUN_00ce78c8 =====

undefined8 FUN_00ce78c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x148);
}


// ===== 00ce78d4  FUN_00ce78d4 =====

void FUN_00ce78d4(long *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  uint uVar12;
  long *local_78;
  long **pplStack_70;
  long local_68;
  
  uVar4 = *(uint *)(param_1 + 0x39);
  if (param_2 != uVar4) {
    puVar1 = (undefined8 *)param_1[0x33];
    puVar2 = (undefined8 *)param_1[0x34];
    *(uint *)(param_1 + 0x39) = param_2;
    for (; puVar1 != puVar2; puVar1 = puVar1 + 3) {
      uVar5 = *(uint *)((long)puVar1 + 0x14);
      if ((uVar5 & 0xfffffffe) != 2) {
        plVar10 = (long *)*puVar1;
        plVar8 = (long *)(**(code **)(*plVar10 + 0x88))(plVar10);
        lVar11 = *plVar8;
        lVar3 = plVar8[1];
        if (lVar11 == lVar3) {
          *(uint *)((long)puVar1 + 0x14) = uVar5;
        }
        else {
          uVar12 = 0;
          bVar6 = false;
          do {
            uVar9 = (**(code **)(*param_1 + 0x40))(param_1);
            if ((uVar9 & 1) == 0) {
              uVar9 = FUN_007e95f8(lVar11 + 0x50);
              if ((uVar9 & 1) != 0) goto LAB_00ce79d8;
              uVar9 = FUN_00aff31c(lVar11);
              if ((uVar9 & 1) == 0) {
                uVar9 = FUN_00aff2f4(lVar11);
                if ((uVar9 & 1) != 0) {
                  uVar7 = uVar4 >> 1;
                  goto joined_r0x00ce7a04;
                }
                uVar9 = FUN_00aff2e0(lVar11);
                if ((uVar9 & 1) != 0) {
                  uVar7 = uVar4;
                  if ((uVar4 >> 1 & 1) == 0) goto joined_r0x00ce7a04;
                  uVar9 = FUN_007e9674(lVar11 + 0x50);
                  if (((uVar4 & 1) != 0) || ((uVar9 & 1) == 0)) goto LAB_00ce7998;
                }
              }
              else {
                uVar7 = uVar4 >> 2;
joined_r0x00ce7a04:
                if ((uVar7 & 1) != 0) goto LAB_00ce7998;
              }
LAB_00ce79d8:
              uVar9 = FUN_007e95f8(lVar11 + 0x50);
              if ((uVar9 & 1) == 0) {
                uVar9 = FUN_00aff31c(lVar11);
                if ((uVar9 & 1) == 0) {
                  uVar9 = FUN_00aff2f4(lVar11);
                  if ((uVar9 & 1) != 0) {
                    uVar7 = param_2 >> 1;
                    goto joined_r0x00ce7a2c;
                  }
                  uVar9 = FUN_00aff2e0(lVar11);
                  if ((uVar9 & 1) == 0) goto LAB_00ce7998;
                  if ((param_2 >> 1 & 1) == 0) {
                    uVar7 = param_2 & 1;
                    goto joined_r0x00ce7a64;
                  }
                  uVar9 = FUN_007e9674(lVar11 + 0x50);
                  if (((param_2 & 1) == 0) && ((uVar9 & 1) != 0)) goto LAB_00ce7998;
                }
                else {
                  uVar7 = param_2 >> 2;
joined_r0x00ce7a2c:
                  uVar7 = uVar7 & 1;
joined_r0x00ce7a64:
                  if (uVar7 == 0) goto LAB_00ce7998;
                }
                if (!bVar6) {
                  *(undefined4 *)((long)puVar1 + 0x14) = 0;
                }
                pplStack_70 = &local_78;
                local_78 = plVar10;
                local_68 = lVar11;
                FUN_007b6160(plVar10 + 0x39,&pplStack_70,FUN_00cee12c);
                bVar6 = true;
              }
            }
LAB_00ce7998:
            uVar7 = FUN_00ce7ac8(param_1,lVar11,plVar10);
            lVar11 = lVar11 + 0x198;
            uVar12 = uVar7 | uVar12;
          } while (lVar11 != lVar3);
          *(uint *)((long)puVar1 + 0x14) = uVar5;
          if ((uVar12 & 1) != 0) goto LAB_00ce792c;
        }
        *(undefined1 *)(puVar1 + 2) = 0;
      }
LAB_00ce792c:
    }
  }
  return;
}


// ===== 00ce7ac8  FUN_00ce7ac8 =====

uint FUN_00ce7ac8(long param_1,long param_2,long *param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  size_t __n;
  uint uVar4;
  undefined8 *__s1;
  uint uVar5;
  
  uVar5 = *(uint *)(param_1 + 0x1c8);
  uVar3 = FUN_007e95f8(param_2 + 0x50);
  if ((uVar3 & 1) == 0) {
    uVar3 = FUN_00aff31c(param_2);
    if ((uVar3 & 1) == 0) {
      uVar3 = FUN_00aff2f4(param_2);
      if ((uVar3 & 1) == 0) {
        uVar3 = FUN_00aff2e0(param_2);
        if ((uVar3 & 1) == 0) goto LAB_00ce7afc;
        if (((uVar5 >> 1 & 1) == 0) || (uVar3 = FUN_007e9674(param_2 + 0x50), (uVar3 & 1) != 0)) {
          uVar5 = uVar5 & 1;
        }
        else {
          uVar5 = 1;
        }
      }
      else {
        uVar5 = uVar5 >> 1 & 1;
      }
    }
    else {
      uVar5 = uVar5 >> 2 & 1;
    }
  }
  else {
LAB_00ce7afc:
    uVar5 = 0;
  }
  uVar1 = FUN_007e95f8(param_2 + 0x50);
  uVar3 = (**(code **)(*param_3 + 0x40))(param_3);
  if ((uVar3 & 1) != 0) {
    uVar4 = 1;
    goto joined_r0x00ce7bdc;
  }
  __s1 = (undefined8 *)(param_2 + 0x20);
  __n = strlen(PTR_DAT_00d528f0);
  if ((long)*(char *)(param_2 + 0x37) < 0) {
    if (__n != *(size_t *)(param_2 + 0x28)) goto LAB_00ce7be4;
    if (__n == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_005f5590();
    }
    __s1 = (undefined8 *)*__s1;
  }
  else if (__n != (long)*(char *)(param_2 + 0x37)) {
LAB_00ce7be4:
    uVar4 = 0;
    goto joined_r0x00ce7bdc;
  }
  iVar2 = memcmp(__s1,PTR_DAT_00d528f0,__n);
  uVar4 = (uint)(iVar2 == 0);
joined_r0x00ce7bdc:
  if (uVar5 == 0) {
    uVar5 = uVar1 & uVar4 & *(uint *)(param_1 + 0x1c8);
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}


// ===== 00ce7c14  FUN_00ce7c14 =====

void FUN_00ce7c14(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  lVar3 = *(long *)(param_1 + 0x1d8);
  plVar2 = *(long **)(param_1 + 0x150);
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  if (lVar3 != 0) {
    FUN_00d0f740(1,lVar3);
  }
  local_50[0] = (long *)operator_new(0x30);
  *local_50[0] = lVar3;
  local_50[0][4] = (long)FUN_004473ec;
  local_50[0][5] = (long)FUN_00cef4fc;
  local_50[0][2] = param_1;
  local_40 = FUN_005db390;
  pcStack_38 = FUN_005db348;
  (**(code **)(*plVar2 + 8))(plVar2,local_50,&uStack_11,&uStack_12);
  (*local_40)(0,local_50,local_50);
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    FUN_00623bb0(&DAT_001f6220,"../../p2p/client/basic_port_allocator.cc",0xba1,
                 "Start getting ports with turn_port_prune_policy ",*(undefined4 *)(param_1 + 0x1cc)
                );
  }
  return;
}


// ===== 00ce7cfc  FUN_00ce7cfc =====

void FUN_00ce7cfc(long *param_1)

{
  (**(code **)(*param_1 + 0x30))();
  *(undefined4 *)(param_1 + 0x3a) = 2;
  return;
}


// ===== 00ce7d34  FUN_00ce7d34 =====

void FUN_00ce7d34(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar6;
  long lVar7;
  long *local_50 [2];
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_12;
  undefined1 uStack_11;
  ulong uVar5;
  
  lVar7 = *(long *)(param_1 + 0x180);
  lVar2 = *(long *)(param_1 + 0x188);
  *(int *)(param_1 + 0x1d4) = *(int *)(param_1 + 0x1d4) + 1;
  if (lVar2 != lVar7) {
    uVar1 = 1;
    uVar5 = 0;
    do {
      uVar3 = uVar1;
      lVar4 = *(long *)(lVar7 + uVar5 * 8);
      if (*(int *)(lVar4 + 0x40) == 1) {
        *(undefined4 *)(lVar4 + 0x40) = 2;
        *(int *)(lVar4 + 0xb0) = *(int *)(lVar4 + 0xb0) + 1;
        lVar7 = *(long *)(param_1 + 0x180);
        lVar2 = *(long *)(param_1 + 0x188);
      }
      uVar1 = (ulong)((int)uVar3 + 1);
      uVar5 = uVar3;
    } while (uVar3 < (ulong)(lVar2 - lVar7 >> 3));
  }
  lVar7 = *(long *)(param_1 + 0x1d8);
  plVar6 = *(long **)(param_1 + 0x150);
  if (lVar7 != 0) {
    FUN_00d0f740(1,lVar7);
  }
  local_50[0] = (long *)operator_new(0x30);
  *local_50[0] = lVar7;
  local_50[0][4] = (long)FUN_004473ec;
  local_50[0][5] = (long)FUN_00cef510;
  local_50[0][2] = param_1;
  local_40 = FUN_005db390;
  pcStack_38 = FUN_005db348;
  (**(code **)(*plVar6 + 8))(plVar6,local_50,&uStack_11,&uStack_12);
  (*local_40)(0,local_50,local_50);
  *(undefined4 *)(param_1 + 0x1d0) = 1;
  return;
}


// ===== 00ce7e58  FUN_00ce7e58 =====

bool FUN_00ce7e58(long param_1)

{
  return *(int *)(param_1 + 0x1d0) == 0;
}


// ===== 00ce7e6c  FUN_00ce7e6c =====

bool FUN_00ce7e6c(long param_1)

{
  return *(int *)(param_1 + 0x1d0) == 1;
}


// ===== 00ce7e80  FUN_00ce7e80 =====

bool FUN_00ce7e80(long param_1)

{
  return *(int *)(param_1 + 0x1d0) == 2;
}


// ===== 00ce7e94  FUN_00ce7e94 =====

void FUN_00ce7e94(long *param_1,long param_2)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  undefined8 ****ppppuVar3;
  undefined8 *puVar4;
  undefined8 ***pppuVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined8 ****ppppuVar13;
  long lVar14;
  undefined8 ****ppppuVar15;
  undefined8 ***local_b0;
  undefined8 ***local_a8;
  long local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  long local_88;
  undefined8 ***local_80;
  undefined8 ***local_78;
  long local_70;
  undefined8 ***local_68;
  
  param_1[1] = (long)&DAT_aaaaaaaaaaaaaaaa;
  *param_1 = (long)&DAT_aaaaaaaaaaaaaaaa;
  param_1[2] = (long)&DAT_aaaaaaaaaaaaaaaa;
  FUN_00ce827c();
  plVar7 = *(long **)(param_2 + 0x198);
  plVar11 = *(long **)(param_2 + 0x1a0);
  local_98 = &local_90;
  local_90 = 0;
  local_88 = 0;
  if (plVar7 == plVar11) {
LAB_00ce7fe8:
    local_b0 = &local_a8;
    local_a0 = 0;
    local_a8 = (undefined8 ****)0x0;
    plVar7 = (long *)*param_1;
    plVar11 = (long *)param_1[1];
    ppppuVar13 = (undefined8 ****)0x0;
    local_78 = (undefined8 ****)0x0;
    local_70 = 0;
    plVar12 = plVar11;
    local_80 = &local_78;
    if (plVar7 != plVar11) {
LAB_00ce80e4:
      do {
        if (ppppuVar13 != (undefined8 ****)0x0) {
          lVar14 = *plVar7;
          ppppuVar15 = ppppuVar13;
          puVar4 = (undefined8 *)*(void **)(lVar14 + 0x10);
          pppuVar2 = *(undefined8 ****)(lVar14 + 0x18);
          if (-1 < (char)*(byte *)(lVar14 + 0x27)) {
            puVar4 = (undefined8 *)(lVar14 + 0x10);
            pppuVar2 = (undefined8 ***)(ulong)*(byte *)(lVar14 + 0x27);
          }
          do {
            while( true ) {
              ppppuVar3 = (undefined8 ****)ppppuVar15[4];
              pppuVar5 = ppppuVar15[5];
              if (-1 < (char)*(byte *)((long)ppppuVar15 + 0x37)) {
                ppppuVar3 = ppppuVar15 + 4;
                pppuVar5 = (undefined8 ***)(ulong)*(byte *)((long)ppppuVar15 + 0x37);
              }
              pppuVar1 = pppuVar5;
              if (pppuVar2 <= pppuVar5) {
                pppuVar1 = pppuVar2;
              }
              iVar6 = memcmp(puVar4,ppppuVar3,(size_t)pppuVar1);
              if (iVar6 != 0) break;
              if (pppuVar2 == pppuVar5) {
                plVar12 = plVar11;
                if (ppppuVar15 != &local_78) goto LAB_00ce8008;
                goto LAB_00ce80d8;
              }
              if (pppuVar5 <= pppuVar2) goto LAB_00ce8110;
LAB_00ce8160:
              ppppuVar15 = (undefined8 ****)*ppppuVar15;
              if (ppppuVar15 == (undefined8 ****)0x0) goto LAB_00ce80d8;
            }
            if (iVar6 < 0) goto LAB_00ce8160;
LAB_00ce8110:
            ppppuVar3 = ppppuVar15 + 1;
            ppppuVar15 = (undefined8 ****)*ppppuVar3;
          } while ((undefined8 ****)*ppppuVar3 != (undefined8 ****)0x0);
        }
LAB_00ce80d8:
        plVar7 = plVar7 + 1;
      } while (plVar7 != plVar11);
      goto LAB_00ce8170;
    }
  }
  else {
    do {
      if (((long *)*plVar7)[0x1b] != 0) {
        lVar14 = (**(code **)(*(long *)*plVar7 + 0x18))();
        local_80 = (undefined8 ***)&local_98;
        FUN_00b07310(&local_80,lVar14 + 0x10,lVar14 + 0x10);
      }
      plVar7 = plVar7 + 3;
    } while (plVar7 != plVar11);
    local_a8 = (undefined8 ***)0x0;
    local_a0 = 0;
    if (local_88 == 0) goto LAB_00ce7fe8;
    local_b0 = &local_a8;
    local_a8 = (undefined8 ***)FUN_00cee148(&local_b0,local_90,&local_b0);
    ((undefined8 ****)local_a8)[2] = &local_a8;
    ppppuVar13 = (undefined8 ****)local_a8;
    do {
      local_b0 = ppppuVar13;
      ppppuVar13 = (undefined8 ****)*local_b0;
    } while ((undefined8 ****)*local_b0 != (undefined8 ****)0x0);
    plVar7 = (long *)*param_1;
    plVar11 = (long *)param_1[1];
    local_78 = (undefined8 ****)0x0;
    local_70 = 0;
    local_a0 = local_88;
    plVar12 = plVar11;
    local_80 = &local_78;
    if (local_88 != 0) {
      ppppuVar13 = (undefined8 ****)FUN_00cee148(&local_80,local_a8,&local_80);
      ppppuVar13[2] = &local_78;
      ppppuVar15 = ppppuVar13;
      do {
        local_80 = ppppuVar15;
        ppppuVar15 = (undefined8 ****)*local_80;
      } while ((undefined8 ****)*local_80 != (undefined8 ****)0x0);
      local_70 = local_a0;
      local_78 = ppppuVar13;
      if (plVar7 == plVar11) goto LAB_00ce8008;
      goto LAB_00ce80e4;
    }
    ppppuVar13 = (undefined8 ****)0x0;
    if (plVar7 != plVar11) goto LAB_00ce80e4;
  }
LAB_00ce8008:
  plVar10 = plVar7;
  plVar11 = plVar12;
  if (plVar7 != plVar12) {
LAB_00ce8020:
    plVar7 = plVar7 + 1;
    plVar11 = plVar10;
    if (plVar7 != plVar12) {
      lVar14 = *plVar7;
      if ((undefined8 ****)local_78 != (undefined8 ****)0x0) {
        ppppuVar13 = (undefined8 ****)local_78;
        puVar4 = (undefined8 *)*(void **)(lVar14 + 0x10);
        pppuVar2 = *(undefined8 ****)(lVar14 + 0x18);
        if (-1 < (char)*(byte *)(lVar14 + 0x27)) {
          puVar4 = (undefined8 *)(lVar14 + 0x10);
          pppuVar2 = (undefined8 ***)(ulong)*(byte *)(lVar14 + 0x27);
        }
        do {
          while( true ) {
            ppppuVar15 = (undefined8 ****)ppppuVar13[4];
            pppuVar5 = ppppuVar13[5];
            if (-1 < (char)*(byte *)((long)ppppuVar13 + 0x37)) {
              ppppuVar15 = ppppuVar13 + 4;
              pppuVar5 = (undefined8 ***)(ulong)*(byte *)((long)ppppuVar13 + 0x37);
            }
            pppuVar1 = pppuVar5;
            if (pppuVar2 <= pppuVar5) {
              pppuVar1 = pppuVar2;
            }
            iVar6 = memcmp(puVar4,ppppuVar15,(size_t)pppuVar1);
            if (iVar6 != 0) break;
            if (pppuVar2 == pppuVar5) {
              if (ppppuVar13 != &local_78) goto LAB_00ce8020;
              goto LAB_00ce8018;
            }
            if (pppuVar5 <= pppuVar2) goto LAB_00ce8058;
LAB_00ce80a8:
            ppppuVar13 = (undefined8 ****)*ppppuVar13;
            if (ppppuVar13 == (undefined8 ****)0x0) goto LAB_00ce8018;
          }
          if (iVar6 < 0) goto LAB_00ce80a8;
LAB_00ce8058:
          ppppuVar15 = ppppuVar13 + 1;
          ppppuVar13 = (undefined8 ****)*ppppuVar15;
        } while ((undefined8 ****)*ppppuVar15 != (undefined8 ****)0x0);
      }
LAB_00ce8018:
      *plVar10 = lVar14;
      plVar10 = plVar10 + 1;
      goto LAB_00ce8020;
    }
  }
LAB_00ce8170:
  plVar7 = (long *)param_1[1];
  if (plVar7 < plVar11) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__vector/vector.h:1170: libc++ Hardening assertion __first <= __last failed: vector::erase(first, last) called with invalid range\n"
              );
  }
  if (plVar11 != plVar7) {
    memmove(plVar11,plVar7,0);
    plVar7 = (long *)param_1[1];
    uVar9 = (ulong)((long)plVar7 + (-8 - ((long)plVar7 << 0x3d))) >> 3;
    uVar8 = (ulong)(((long)plVar11 - (long)plVar7 << 0x3d) - ((long)plVar11 - (long)plVar7)) >> 3;
    if (uVar9 <= uVar8) {
      uVar8 = uVar9;
    }
    if ((1 < uVar8) && ((((int)plVar11 - (int)plVar7 | -(int)plVar7) & 7U) == 0)) {
      uVar8 = uVar8 & 0x1ffffffffffffffe;
      plVar7 = plVar7 + -uVar8;
      do {
        uVar8 = uVar8 - 2;
      } while (uVar8 != 0);
    }
    while (plVar7 != plVar11) {
      plVar7 = plVar7 + -1;
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    param_1[1] = (long)plVar11;
  }
  local_68 = &local_80;
  FUN_00b16af4(&local_68,local_78);
  local_80 = &local_b0;
  FUN_00b16af4(&local_80,local_a8);
  local_80 = (undefined8 ***)&local_98;
  FUN_00b16af4(&local_80,local_90);
  return;
}


// ===== 00ce827c  FUN_00ce827c =====

/* WARNING: Removing unreachable block (ram,0x00ce8504) */
/* WARNING: Removing unreachable block (ram,0x00ce8b60) */
/* WARNING: Removing unreachable block (ram,0x00ce8b8c) */

void FUN_00ce827c(long *param_1,long *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  void *pvVar7;
  code *pcVar8;
  long lVar9;
  void *pvVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  ulong *__dest;
  ulong uVar15;
  ulong *puVar16;
  undefined8 uVar17;
  long lVar18;
  code *local_1b8;
  code *local_1b0;
  code *pcStack_1a8;
  code *local_1a0;
  code *pcStack_198;
  code *local_190;
  undefined **local_188;
  undefined1 *local_180;
  undefined1 *puStack_178;
  long local_170;
  code *local_168;
  code *pcStack_160;
  code *pcStack_158;
  undefined **ppuStack_150;
  undefined8 local_148;
  undefined1 *puStack_140;
  undefined8 uStack_138;
  long *local_130;
  long *plStack_128;
  code *local_120;
  undefined **local_118;
  undefined1 *local_110;
  undefined1 *puStack_108;
  long local_100;
  long *local_f0;
  long *plStack_e8;
  code *local_e0;
  undefined **local_d8;
  char local_d0 [8];
  undefined8 uStack_c8;
  long local_c0;
  long *local_b0;
  long *plStack_a8;
  code *local_a0;
  undefined **local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  lVar9 = param_2[0x29];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  plVar14 = *(long **)(lVar9 + 0x110);
  iVar5 = (**(code **)(*plVar14 + 0x38))(plVar14);
  if (iVar5 == 1) {
    *(uint *)(param_2 + 1) = *(uint *)(param_2 + 1) | 0x400;
LAB_00ce8378:
    (**(code **)(*plVar14 + 0x40))(&local_b0,plVar14);
    pvVar7 = (void *)*param_1;
    if (pvVar7 != (void *)0x0) {
      pvVar10 = (void *)param_1[1];
      uVar13 = (ulong)((long)pvVar10 + (-8 - ((long)pvVar10 << 0x3d))) >> 3;
      uVar12 = (ulong)(((long)pvVar7 - (long)pvVar10 << 0x3d) - ((long)pvVar7 - (long)pvVar10)) >> 3
      ;
      if (uVar13 <= uVar12) {
        uVar12 = uVar13;
      }
      if ((1 < uVar12) && ((((int)pvVar7 - (int)pvVar10 | -(int)pvVar10) & 7U) == 0)) {
        uVar12 = uVar12 & 0x1ffffffffffffffe;
        pvVar10 = (void *)((long)pvVar10 + uVar12 * -8);
        do {
          uVar12 = uVar12 - 2;
        } while (uVar12 != 0);
      }
      do {
        if (pvVar10 == pvVar7) {
          param_1[1] = (long)pvVar7;
          operator_delete(pvVar7);
          goto LAB_00ce841c;
        }
        pvVar10 = (void *)((long)pvVar10 + -8);
      } while (pvVar10 != (void *)0x0);
      goto LAB_00ce83f8;
    }
LAB_00ce841c:
    param_1[1] = (long)plStack_a8;
    *param_1 = (long)local_b0;
    param_1[2] = (long)local_a0;
  }
  else {
    if ((*(uint *)(param_2 + 1) >> 10 & 1) != 0) goto LAB_00ce8378;
    (**(code **)(*plVar14 + 0x30))(&local_b0,plVar14);
    pvVar7 = (void *)*param_1;
    if (pvVar7 != (void *)0x0) {
      pvVar10 = (void *)param_1[1];
      uVar13 = (ulong)((long)pvVar10 + (-8 - ((long)pvVar10 << 0x3d))) >> 3;
      uVar12 = (ulong)(((long)pvVar7 - (long)pvVar10 << 0x3d) - ((long)pvVar7 - (long)pvVar10)) >> 3
      ;
      if (uVar13 <= uVar12) {
        uVar12 = uVar13;
      }
      if ((1 < uVar12) && ((((int)pvVar7 - (int)pvVar10 | -(int)pvVar10) & 7U) == 0)) {
        uVar12 = uVar12 & 0x1ffffffffffffffe;
        pvVar10 = (void *)((long)pvVar10 + uVar12 * -8);
        do {
          uVar12 = uVar12 - 2;
        } while (uVar12 != 0);
      }
      do {
        if (pvVar10 == pvVar7) {
          param_1[1] = (long)pvVar7;
          operator_delete(pvVar7);
          goto LAB_00ce8948;
        }
        pvVar10 = (void *)((long)pvVar10 + -8);
      } while (pvVar10 != (void *)0x0);
      goto LAB_00ce83f8;
    }
LAB_00ce8948:
    param_1[2] = (long)local_a0;
    param_1[1] = (long)plStack_a8;
    *param_1 = (long)local_b0;
    if ((local_b0 == plStack_a8) || (*(char *)((long)param_2 + 9) < '\0')) {
      plStack_a8 = (long *)&DAT_aaaaaaaaaaaaaaaa;
      local_b0 = (long *)&DAT_aaaaaaaaaaaaaaaa;
      local_a0 = (code *)&DAT_aaaaaaaaaaaaaaaa;
      (**(code **)(*plVar14 + 0x40))(&local_b0,plVar14);
      FUN_00cee6d0(param_1,param_1[1],local_b0,plStack_a8,(long)plStack_a8 - (long)local_b0 >> 3);
      if (local_b0 != (long *)0x0) {
        uVar13 = (ulong)((long)plStack_a8 + (-8 - ((long)plStack_a8 << 0x3d))) >> 3;
        uVar12 = (ulong)(((long)local_b0 - (long)plStack_a8 << 0x3d) -
                        ((long)local_b0 - (long)plStack_a8)) >> 3;
        if (uVar13 <= uVar12) {
          uVar12 = uVar13;
        }
        plVar14 = plStack_a8;
        if ((1 < uVar12) && ((((int)local_b0 - (int)plStack_a8 | -(int)plStack_a8) & 7U) == 0)) {
          uVar12 = uVar12 & 0x1ffffffffffffffe;
          plVar14 = plStack_a8 + -uVar12;
          do {
            uVar12 = uVar12 - 2;
          } while (uVar12 != 0);
        }
        do {
          if (plVar14 == local_b0) {
            plStack_a8 = local_b0;
            operator_delete(local_b0);
            goto LAB_00ce8acc;
          }
          plVar14 = plVar14 + -1;
        } while (plVar14 != (long *)0x0);
        goto LAB_00ce83f8;
      }
    }
LAB_00ce8acc:
    uVar12 = FUN_00417e08();
    if ((uVar12 & 1) == 0) {
      FUN_00623bb0(&DAT_001f6643,"../../p2p/client/basic_port_allocator.cc",0x15c9,
                   "Count of networks: ",param_1[1] - *param_1 >> 3);
    }
    puVar3 = (undefined8 *)param_1[1];
    for (puVar2 = (undefined8 *)*param_1; puVar2 != puVar3; puVar2 = puVar2 + 1) {
      uVar17 = *puVar2;
      uVar12 = FUN_00417e08();
      if ((uVar12 & 1) == 0) {
        FUN_00bcc3dc(&local_b0,uVar17);
        FUN_00623bb0(&DAT_001f627a,"../../p2p/client/basic_port_allocator.cc",0x15d9,&local_b0);
      }
    }
  }
  if ((*(byte *)((long)param_2 + 10) & 1) != 0) {
    plStack_a8 = (long *)&DAT_aaaaaaaaaaaaaaaa;
    uStack_90 = &DAT_aaaaaaaaaaaaaaaa;
    uStack_80 = &DAT_aaaaaaaaaaaaaaaa;
    local_88 = &DAT_aaaaaaaaaaaaaaaa;
    local_a0 = FUN_00cee9ec;
    local_98 = &PTR_FUN_00d50280;
    plVar14 = (long *)operator_new(0x20);
    plVar14[2] = (long)FUN_00cef694;
    plVar14[3] = (long)&DAT_0025a510;
    uStack_80 = (undefined1 *)CONCAT17(10,(undefined7)uStack_80);
    local_b0 = plVar14;
    if ((&uStack_90 < "ink-local") && ("link-local" < (char *)((long)&local_88 + 2U)))
    goto LAB_00ce8be4;
    uVar12 = (ulong)local_88 >> 0x10;
    local_88 = (undefined1 *)CONCAT62((uint6)uVar12 & 0xffffffffff00,0x6c61);
    uStack_90._0_1_ = s_link_local_001f17c7[0];
    uStack_90._1_1_ = s_link_local_001f17c7[1];
    uStack_90._2_1_ = s_link_local_001f17c7[2];
    uStack_90._3_1_ = s_link_local_001f17c7[3];
    uStack_90._4_1_ = s_link_local_001f17c7[4];
    uStack_90._5_1_ = s_link_local_001f17c7[5];
    uStack_90._6_1_ = s_link_local_001f17c7[6];
    uStack_90._7_1_ = s_link_local_001f17c7[7];
    plStack_e8 = plStack_a8;
    local_e0 = FUN_00cee9ec;
    local_d8 = &PTR_FUN_00d50280;
    local_f0 = plVar14;
    local_f0 = (long *)operator_new(0x20);
    lVar18 = plVar14[1];
    lVar9 = *plVar14;
    local_f0[2] = (long)FUN_00cef694;
    local_f0[3] = (long)&DAT_0025a510;
    local_f0[1] = lVar18;
    *local_f0 = lVar9;
    uStack_c8 = local_88;
    local_d0[0] = (char)uStack_90;
    local_d0[1] = uStack_90._1_1_;
    local_d0[2] = uStack_90._2_1_;
    local_d0[3] = uStack_90._3_1_;
    local_d0[4] = uStack_90._4_1_;
    local_d0[5] = uStack_90._5_1_;
    local_d0[6] = uStack_90._6_1_;
    local_d0[7] = uStack_90._7_1_;
    local_c0 = (long)uStack_80;
    FUN_00cea72c(param_1,&local_f0);
    if ((code *)local_d8[1] != (code *)0x0) {
      (*(code *)local_d8[1])(local_f0);
    }
    if (plVar14 != (long *)0x0) {
      if (*(code **)(plVar14[3] + 8) != (code *)0x0) {
        (**(code **)(plVar14[3] + 8))(*plVar14);
      }
      operator_delete(plVar14);
    }
  }
  plStack_a8 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  uStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = FUN_00cee9ec;
  local_98 = &PTR_FUN_00d50280;
  plVar14 = (long *)operator_new(0x20);
  *plVar14 = (long)param_2;
  plVar14[2] = (long)FUN_00cef6a0;
  plVar14[3] = (long)&DAT_0025a530;
  uStack_80 = (undefined1 *)CONCAT17(7,(undefined7)uStack_80);
  local_b0 = plVar14;
  if ((&uStack_90 < "gnored") && ("ignored" < (char *)((long)&uStack_90 + 7U))) {
LAB_00ce8be4:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
              );
  }
  uStack_90 = (undefined1 *)0x6465726f6e6769;
  plStack_128 = plStack_a8;
  local_120 = FUN_00cee9ec;
  local_118 = &PTR_FUN_00d50280;
  local_130 = plVar14;
  local_130 = (long *)operator_new(0x20);
  lVar18 = plVar14[1];
  lVar9 = *plVar14;
  local_130[2] = (long)FUN_00cef6a0;
  local_130[3] = (long)&DAT_0025a530;
  local_130[1] = lVar18;
  *local_130 = lVar9;
  puStack_108 = local_88;
  local_110 = uStack_90;
  local_100 = (long)uStack_80;
  FUN_00cea72c(param_1,&local_130);
  if (local_100 < 0) {
    operator_delete(local_110);
  }
  if ((code *)local_118[1] != (code *)0x0) {
    (*(code *)local_118[1])(local_130);
  }
  __dest = (ulong *)*param_1;
  puVar16 = (ulong *)param_1[1];
  if ((*(byte *)((long)param_2 + 9) >> 5 & 1) != 0) {
    if (__dest == puVar16) {
      uVar12 = 999;
    }
    else {
      uVar12 = 999;
      do {
        uVar15 = *__dest;
        FUN_00bca960(&local_168,uVar15);
        uVar13 = FUN_007ea660(&local_168);
        if ((uVar13 & 1) == 0) {
          lVar9 = (**(code **)(*param_2 + 0x98))(param_2);
          uVar6 = FUN_00bccb90(uVar15,*(undefined8 *)(lVar9 + 0xf0));
          uVar1 = uVar6 & 0xffff;
          if ((uint)uVar12 <= (uVar6 & 0xffff)) {
            uVar1 = (uint)uVar12;
          }
          uVar12 = (ulong)uVar1;
        }
        __dest = __dest + 1;
      } while (__dest != puVar16);
    }
    pcStack_160 = (code *)&DAT_aaaaaaaaaaaaaaaa;
    local_148 = &DAT_aaaaaaaaaaaaaaaa;
    uStack_138 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_140 = &DAT_aaaaaaaaaaaaaaaa;
    pcStack_158 = FUN_00cee9ec;
    ppuStack_150 = &PTR_FUN_00d50280;
    pcVar8 = (code *)operator_new(0x20);
    *(ulong *)pcVar8 = uVar12;
    *(long **)(pcVar8 + 8) = param_2;
    *(code **)(pcVar8 + 0x10) = FUN_00cef6dc;
    *(undefined **)(pcVar8 + 0x18) = &DAT_0025a550;
    uStack_138 = (undefined1 *)CONCAT17(6,(undefined7)uStack_138);
    local_168 = pcVar8;
    if ((&local_148 < "ostly") && ("costly" < (char *)((long)&local_148 + 6U))) goto LAB_00ce8be4;
    local_148 = (undefined1 *)CONCAT17(local_148._7_1_,0x796c74736f63);
    pcStack_198 = pcStack_160;
    local_190 = FUN_00cee9ec;
    local_188 = &PTR_FUN_00d50280;
    local_1a0 = pcVar8;
    local_1a0 = (code *)operator_new(0x20);
    uVar13 = *(ulong *)(pcVar8 + 8);
    uVar12 = *(ulong *)pcVar8;
    *(code **)(local_1a0 + 0x10) = FUN_00cef6dc;
    *(undefined **)(local_1a0 + 0x18) = &DAT_0025a550;
    *(ulong *)(local_1a0 + 8) = uVar13;
    *(ulong *)local_1a0 = uVar12;
    puStack_178 = puStack_140;
    local_180 = local_148;
    local_170 = (long)uStack_138;
    FUN_00cea72c(param_1,&local_1a0);
    if (local_170 < 0) {
      operator_delete(local_180);
    }
    if ((code *)local_188[1] != (code *)0x0) {
      (*(code *)local_188[1])(local_1a0);
    }
    if (pcVar8 != (code *)0x0) {
      if (*(code **)(*(ulong *)(pcVar8 + 0x18) + 8) != (code *)0x0) {
        (**(code **)(*(ulong *)(pcVar8 + 0x18) + 8))(*(ulong *)pcVar8);
      }
      operator_delete(pcVar8);
    }
    __dest = (ulong *)*param_1;
    puVar16 = (ulong *)param_1[1];
  }
  local_168 = (code *)0x0;
  pcStack_160 = (code *)0x0;
  pcStack_158 = (code *)0x0;
  if (__dest != puVar16) {
    do {
      if (*(int *)(*__dest + 0x48) == 10) {
        if (pcStack_160 < pcStack_158) {
          if (pcStack_160 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          pcVar8 = pcStack_160 + 8;
          *(ulong *)pcStack_160 = *__dest;
        }
        else {
          pcVar8 = (code *)FUN_00ceeab8(&local_168,__dest);
        }
        puVar16 = (ulong *)param_1[1];
        pcStack_160 = pcVar8;
        if (__dest == puVar16) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__vector/vector.h:1160: libc++ Hardening assertion __position != end() failed: vector::erase(iterator) called with a non-dereferenceable iterator\n"
                    );
        }
        memmove(__dest,__dest + 1,(long)puVar16 - (long)(__dest + 1));
        puVar11 = (ulong *)param_1[1];
        uVar13 = (ulong)((long)puVar11 + (-8 - ((long)puVar11 << 0x3d))) >> 3;
        uVar12 = (((long)puVar16 - (long)puVar11 << 0x3d) - ((long)puVar16 - (long)puVar11)) + 8U >>
                 3;
        if (uVar13 <= uVar12) {
          uVar12 = uVar13;
        }
        if ((1 < uVar12) && ((-(int)puVar11 & 7U) == 0)) {
          uVar12 = uVar12 & 0x1ffffffffffffffe;
          puVar11 = puVar11 + -uVar12;
          do {
            uVar12 = uVar12 - 2;
          } while (uVar12 != 0);
        }
        puVar16 = puVar16 + -1;
        while (puVar11 != puVar16) {
          puVar11 = puVar11 + -1;
          if (puVar11 == (ulong *)0x0) goto LAB_00ce83f8;
        }
        param_1[1] = (long)puVar16;
      }
      else {
        __dest = __dest + 1;
      }
    } while (__dest != puVar16);
  }
  FUN_00cea9ac(&local_1b8,&local_168,*(undefined4 *)(param_2[0x29] + 0x18));
  if (local_168 == (code *)0x0) {
LAB_00ce8a24:
    pcStack_158 = pcStack_1a8;
    pcStack_160 = local_1b0;
    local_168 = local_1b8;
    FUN_00cee6d0(param_1,param_1[1],local_1b8,local_1b0,(long)local_1b0 - (long)local_1b8 >> 3);
    if (local_168 == (code *)0x0) {
LAB_00ce8b84:
      if ((code *)local_98[1] != (code *)0x0) {
        (*(code *)local_98[1])(local_b0);
      }
      if (*(long *)(lVar4 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    uVar12 = (ulong)(((long)local_168 - (long)pcStack_160 << 0x3d) -
                    ((long)local_168 - (long)pcStack_160)) >> 3;
    if ((ulong)(pcStack_160 + (-8 - ((long)pcStack_160 << 0x3d))) >> 3 <= uVar12) {
      uVar12 = (ulong)(pcStack_160 + (-8 - ((long)pcStack_160 << 0x3d))) >> 3;
    }
    pcVar8 = pcStack_160;
    if ((1 < uVar12) && ((((int)local_168 - (int)pcStack_160 | -(int)pcStack_160) & 7U) == 0)) {
      uVar12 = uVar12 & 0x1ffffffffffffffe;
      pcVar8 = pcStack_160 + uVar12 * -8;
      do {
        uVar12 = uVar12 - 2;
      } while (uVar12 != 0);
    }
    do {
      if (pcVar8 == local_168) {
        pcStack_160 = local_168;
        operator_delete(local_168);
        goto LAB_00ce8b84;
      }
      pcVar8 = pcVar8 + -8;
    } while (pcVar8 != (code *)0x0);
  }
  else {
    uVar12 = (ulong)(((long)local_168 - (long)pcStack_160 << 0x3d) -
                    ((long)local_168 - (long)pcStack_160)) >> 3;
    if ((ulong)(pcStack_160 + (-8 - ((long)pcStack_160 << 0x3d))) >> 3 <= uVar12) {
      uVar12 = (ulong)(pcStack_160 + (-8 - ((long)pcStack_160 << 0x3d))) >> 3;
    }
    pcVar8 = pcStack_160;
    if ((1 < uVar12) && ((((int)local_168 - (int)pcStack_160 | -(int)pcStack_160) & 7U) == 0)) {
      uVar12 = uVar12 & 0x1ffffffffffffffe;
      pcVar8 = pcStack_160 + uVar12 * -8;
      do {
        uVar12 = uVar12 - 2;
      } while (uVar12 != 0);
    }
    do {
      if (pcVar8 == local_168) {
        pcStack_160 = local_168;
        operator_delete(local_168);
        goto LAB_00ce8a24;
      }
      pcVar8 = pcVar8 + -8;
    } while (pcVar8 != (code *)0x0);
  }
LAB_00ce83f8:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00ce8c24  FUN_00ce8c24 =====

void FUN_00ce8c24(long param_1)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  uint uVar9;
  undefined1 *puVar10;
  long *local_40;
  long *plStack_38;
  undefined1 *local_30;
  
  plStack_38 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  local_40 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00ce7e94(&local_40);
  if (local_40 != plStack_38) {
    uVar3 = FUN_00417e08();
    if ((uVar3 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../p2p/client/basic_port_allocator.cc",0xdd1,
                   "Regather candidates on failed networks");
    }
    plVar2 = *(long **)(param_1 + 0x188);
    for (plVar4 = *(long **)(param_1 + 0x180); plVar4 != plVar2; plVar4 = plVar4 + 1) {
      lVar6 = *plVar4;
      if (((*(byte *)(lVar6 + 8) & 1) == 0) && (local_40 != plStack_38)) {
        puVar10 = (undefined1 *)((long)plStack_38 + (-8 - (long)local_40));
        lVar8 = *(long *)(lVar6 + 0x10);
        uVar9 = (uint)puVar10;
        plVar7 = local_40;
        if ((~uVar9 & 0x18) != 0) {
          uVar3 = (ulong)((uVar9 >> 3) + 1) & 3;
          do {
            if (*plVar7 == lVar8) goto joined_r0x00ce8d50;
            uVar3 = uVar3 - 1;
            plVar7 = plVar7 + 1;
          } while (uVar3 != 0);
        }
        if ((undefined1 *)0x17 < puVar10) {
          plVar7 = plVar7 + 2;
          while( true ) {
            if (plVar7[-2] == lVar8) {
              plVar7 = plVar7 + -2;
              goto joined_r0x00ce8d50;
            }
            if (plVar7[-1] == lVar8) break;
            if (*plVar7 == lVar8) goto joined_r0x00ce8d50;
            if (plVar7[1] == lVar8) {
              plVar7 = plVar7 + 1;
              goto joined_r0x00ce8d50;
            }
            plVar1 = plVar7 + 2;
            plVar7 = plVar7 + 4;
            if (plVar1 == plStack_38) goto LAB_00ce8c98;
          }
          plVar7 = plVar7 + -1;
joined_r0x00ce8d50:
          if (plVar7 != plStack_38) {
            *(undefined1 *)(lVar6 + 8) = 1;
          }
        }
      }
LAB_00ce8c98:
    }
    FUN_00ce8e30(param_1,&local_40,1);
  }
  if (local_40 != (long *)0x0) {
    uVar5 = (ulong)((long)plStack_38 + (-8 - ((long)plStack_38 << 0x3d))) >> 3;
    uVar3 = (ulong)(((long)local_40 - (long)plStack_38 << 0x3d) -
                   ((long)local_40 - (long)plStack_38)) >> 3;
    if (uVar5 <= uVar3) {
      uVar3 = uVar5;
    }
    plVar4 = plStack_38;
    if ((1 < uVar3) && ((((int)local_40 - (int)plStack_38 | -(int)plStack_38) & 7U) == 0)) {
      uVar3 = uVar3 & 0x1ffffffffffffffe;
      plVar4 = plStack_38 + -uVar3;
      do {
        uVar3 = uVar3 - 2;
      } while (uVar3 != 0);
    }
    while (plVar4 != local_40) {
      plVar4 = plVar4 + -1;
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    plStack_38 = local_40;
    operator_delete(local_40);
  }
  return;
}


// ===== 00ce8e30  FUN_00ce8e30 =====

void FUN_00ce8e30(long *param_1,long *param_2,undefined4 param_3)

{
  long *plVar1;
  long **pplVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  long **pplVar10;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined4 local_54;
  long **local_50;
  undefined4 *puStack_48;
  long *local_28;
  
  pplVar10 = (long **)param_1[0x33];
  pplVar2 = (long **)param_1[0x34];
  local_70 = (undefined8 *)0x0;
  local_68 = (undefined8 *)0x0;
  local_60 = (undefined8 *)0x0;
  if (pplVar10 != pplVar2) {
    puVar4 = (undefined8 *)0x0;
    do {
      if (*(int *)((long)pplVar10 + 0x14) != 3) {
        plVar5 = (long *)*param_2;
        plVar3 = (long *)param_2[1];
        if (plVar5 != plVar3) {
          uVar8 = (long)plVar3 + (-8 - (long)plVar5);
          uVar7 = (uint)uVar8;
          lVar6 = pplVar10[1][2];
          if ((~uVar7 & 0x18) != 0) {
            uVar9 = (ulong)((uVar7 >> 3) + 1) & 3;
            do {
              if (*plVar5 == lVar6) goto joined_r0x00ce8f50;
              uVar9 = uVar9 - 1;
              plVar5 = plVar5 + 1;
            } while (uVar9 != 0);
          }
          if (0x17 < uVar8) {
            plVar5 = plVar5 + 2;
            while( true ) {
              if (plVar5[-2] == lVar6) {
                plVar5 = plVar5 + -2;
                goto joined_r0x00ce8f50;
              }
              if (plVar5[-1] == lVar6) break;
              if (*plVar5 == lVar6) goto joined_r0x00ce8f50;
              if (plVar5[1] == lVar6) {
                plVar5 = plVar5 + 1;
                goto joined_r0x00ce8f50;
              }
              plVar1 = plVar5 + 2;
              plVar5 = plVar5 + 4;
              if (plVar1 == plVar3) goto LAB_00ce8e84;
            }
            plVar5 = plVar5 + -1;
joined_r0x00ce8f50:
            if (plVar5 != plVar3) {
              local_50 = pplVar10;
              if (puVar4 < local_60) {
                if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
                  std::__Cr::__libcpp_verbose_abort
                            ("%s",
                             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                            );
                }
                local_68 = puVar4 + 1;
                *puVar4 = pplVar10;
                puVar4 = local_68;
              }
              else {
                puVar4 = (undefined8 *)FUN_00cef1b4(&local_70,&local_50);
                local_68 = puVar4;
              }
            }
          }
        }
      }
LAB_00ce8e84:
      pplVar10 = pplVar10 + 3;
    } while (pplVar10 != pplVar2);
    if (local_70 != puVar4) {
      uVar8 = FUN_00417e08();
      if ((uVar8 & 1) == 0) {
        FUN_00623bb0(&DAT_001f6d4b,"../../p2p/client/basic_port_allocator.cc",0xe89,"Prune ",
                     (long)local_68 - (long)local_70 >> 3," ports");
      }
      FUN_00ce90f0(param_1,&local_70);
    }
  }
  if ((((char)param_1[0x2c] == '\x01') && (*(char *)((long)param_1 + 0x161) == '\x01')) &&
     (uVar8 = (**(code **)(*param_1 + 0x40))(param_1), (uVar8 & 1) == 0)) {
    local_50 = &local_28;
    puStack_48 = &local_54;
    local_54 = param_3;
    local_28 = param_1;
    FUN_007b6160(param_1 + 0x25,&local_50,FUN_00cee228);
    FUN_00ce9364(param_1);
  }
  if (local_70 != (undefined8 *)0x0) {
    uVar9 = (ulong)((long)local_68 + (-8 - ((long)local_68 << 0x3d))) >> 3;
    uVar8 = (ulong)(((long)local_70 - (long)local_68 << 0x3d) - ((long)local_70 - (long)local_68))
            >> 3;
    if (uVar9 <= uVar8) {
      uVar8 = uVar9;
    }
    puVar4 = local_68;
    if ((1 < uVar8) && ((((int)local_70 - (int)local_68 | -(int)local_68) & 7U) == 0)) {
      uVar8 = uVar8 & 0x1ffffffffffffffe;
      puVar4 = local_68 + -uVar8;
      do {
        uVar8 = uVar8 - 2;
      } while (uVar8 != 0);
    }
    while (puVar4 != local_70) {
      puVar4 = puVar4 + -1;
      if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    local_68 = local_70;
    operator_delete(local_70);
  }
  return;
}


// ===== 00ce90f0  FUN_00ce90f0 =====

void FUN_00ce90f0(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *local_80;
  long *local_78;
  undefined8 local_70;
  long *local_68;
  long *local_60;
  long *local_58;
  long *local_50;
  long **pplStack_48;
  long local_28;
  
  puVar6 = (undefined8 *)*param_2;
  puVar1 = (undefined8 *)param_2[1];
  local_68 = (long *)0x0;
  local_60 = (long *)0x0;
  local_58 = (long *)0x0;
  local_80 = (long *)0x0;
  local_78 = (long *)0x0;
  local_70 = 0;
  if (puVar6 != puVar1) {
    do {
      plVar5 = (long *)*puVar6;
      *(undefined4 *)((long)plVar5 + 0x14) = 3;
      if (*plVar5 == 0) {
        local_50 = (long *)0x0;
      }
      else {
        FUN_00cfbdbc();
        local_50 = (long *)*plVar5;
      }
      if (local_60 < local_58) {
        if (local_60 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        plVar2 = local_60 + 1;
        *local_60 = (long)local_50;
      }
      else {
        plVar2 = (long *)FUN_00cee4cc(&local_68,&local_50);
      }
      local_60 = plVar2;
      if ((char)plVar5[2] == '\x01') {
        FUN_00ce9ea8(param_1,plVar5,&local_80);
        *(undefined1 *)(plVar5 + 2) = 0;
      }
      puVar6 = puVar6 + 1;
    } while (puVar6 != puVar1);
    if (local_68 != local_60) {
      local_50 = &local_28;
      pplStack_48 = &local_68;
      local_28 = param_1;
      FUN_007b6160(param_1 + 0x88,&local_50,FUN_00cef2dc);
    }
  }
  if (local_80 != local_78) {
    uVar3 = FUN_00417e08();
    if ((uVar3 & 1) == 0) {
      FUN_00623bb0(&DAT_001f6d4b,"../../p2p/client/basic_port_allocator.cc",0x26e1,"Removed ",
                   ((long)local_78 - (long)local_80 >> 3) * -0x505050505050505," candidates");
    }
    local_50 = &local_28;
    pplStack_48 = &local_80;
    local_28 = param_1;
    FUN_007b6160(param_1 + 0xe8,&local_50,FUN_00ceee24);
  }
  plVar2 = local_80;
  plVar5 = local_78;
  if (local_80 != (long *)0x0) {
    while (plVar2 != plVar5) {
      plVar5 = plVar5 + -0x33;
      if (plVar5 == (long *)0x0) goto LAB_00ce9310;
      FUN_00aff0f8(plVar5);
    }
    local_78 = plVar2;
    operator_delete(local_80);
  }
  if (local_68 != (long *)0x0) {
    uVar4 = (ulong)((long)local_60 + (-8 - ((long)local_60 << 0x3d))) >> 3;
    uVar3 = (ulong)(((long)local_68 - (long)local_60 << 0x3d) - ((long)local_68 - (long)local_60))
            >> 3;
    if (uVar4 <= uVar3) {
      uVar3 = uVar4;
    }
    plVar5 = local_60;
    if ((1 < uVar3) && ((((int)local_68 - (int)local_60 | -(int)local_60) & 7U) == 0)) {
      uVar3 = uVar3 & 0x1ffffffffffffffe;
      plVar5 = local_60 + -uVar3;
      do {
        uVar3 = uVar3 - 2;
      } while (uVar3 != 0);
    }
    while (plVar5 != local_68) {
      plVar5 = plVar5 + -1;
      if (plVar5 == (long *)0x0) {
LAB_00ce9310:
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


// ===== 00ce9364  FUN_00ce9364 =====

void FUN_00ce9364(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  int iVar13;
  uint uVar14;
  ulong uVar15;
  uint local_c4;
  long *local_c0;
  undefined8 uStack_b8;
  long local_b0;
  long *local_a0;
  long *plStack_98;
  undefined1 *local_90;
  undefined1 uStack_82;
  undefined1 uStack_81;
  long *local_80;
  int iStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  plStack_98 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  local_a0 = (long *)&DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00ce827c(&local_a0);
  if (local_a0 == plStack_98) {
    uVar5 = FUN_004022fc();
    if ((uVar5 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../p2p/client/basic_port_allocator.cc",0x190a,
                   "Machine has no networks; no ports will be allocated");
    }
  }
  else {
    uVar5 = FUN_00417e08();
    plVar11 = plStack_98;
    if ((uVar5 & 1) == 0) {
      local_80 = (long *)0x0;
      iStack_78 = 0;
      uStack_74 = 0;
      local_70 = 0;
      uStack_6c = 0;
      local_c0 = local_80;
      for (plVar6 = local_a0; local_80 = local_c0, plVar6 != plVar11; plVar6 = plVar6 + 1) {
        lVar9 = *plVar6;
        lVar8 = (long)*(char *)(lVar9 + 0x27);
        if (lVar8 < 0) {
          lVar12 = *(long *)(lVar9 + 0x10);
          lVar8 = *(long *)(lVar9 + 0x18);
        }
        else {
          lVar12 = lVar9 + 0x10;
        }
        FUN_00547cac(&local_80,lVar12,lVar8);
        FUN_00547cac(&local_80,&DAT_001d5e07,1);
        local_c0 = local_80;
      }
      uStack_b8 = CONCAT44(uStack_74,iStack_78);
      local_b0 = CONCAT44(uStack_6c,local_70);
      FUN_00623bb0(&DAT_001f4e90,"../../p2p/client/basic_port_allocator.cc",0x1929,
                   "Allocate ports on ",&local_c0);
      if (local_b0 < 0) {
        operator_delete(local_c0);
      }
    }
    if (*(long *)(param_1 + 0x168) == *(long *)(param_1 + 0x170)) {
      lVar8 = 0;
    }
    else {
      lVar8 = *(long *)(*(long *)(param_1 + 0x170) + -8);
    }
    if (plStack_98 == local_a0) goto LAB_00ce9548;
    uVar14 = *(uint *)(param_1 + 8);
    local_c4 = uVar14;
    if (((uVar14 ^ 0xffffffff) & 0xf) != 0) {
      bVar3 = false;
      iVar13 = 0;
      uVar5 = 0;
      do {
        if ((lVar8 == 0) || (*(long *)(lVar8 + 0x98) == *(long *)(lVar8 + 0xa0))) {
          local_c4 = uVar14 | 4;
          uVar2 = uVar14 & 0x40;
          uVar14 = local_c4;
          if (uVar2 == 0) goto LAB_00ce9628;
LAB_00ce9644:
          if ((uVar14 >> 0xe & 1) == 0) {
            if ((ulong)((long)plStack_98 - (long)local_a0 >> 3) <= uVar5) goto LAB_00ce98e4;
            FUN_00bca960(&local_80,local_a0[uVar5]);
            if (iStack_78 == 10) {
              if ((ulong)((long)plStack_98 - (long)local_a0 >> 3) <= uVar5) goto LAB_00ce98e4;
              if (*(int *)(local_a0[uVar5] + 0xa0) == 2) goto LAB_00ce95e0;
            }
          }
          if ((ulong)((long)plStack_98 - (long)local_a0 >> 3) <= uVar5) {
LAB_00ce98e4:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                      );
          }
          lVar9 = *(long *)(param_1 + 0x180);
          if (*(long *)(param_1 + 0x188) != lVar9) {
            lVar12 = local_a0[uVar5];
            uVar10 = 0;
            uVar15 = 1;
            do {
              uVar14 = local_c4;
              if (((local_c4 ^ 0xffffffff) & 0xf) == 0) break;
              FUN_00ceb38c(*(undefined8 *)(lVar9 + uVar10 * 8),lVar12,lVar8,&local_c4);
              lVar9 = *(long *)(param_1 + 0x180);
              bVar4 = uVar15 < (ulong)(*(long *)(param_1 + 0x188) - lVar9 >> 3);
              uVar10 = uVar15;
              uVar15 = (ulong)((int)uVar15 + 1);
              uVar14 = local_c4;
            } while (bVar4);
          }
          if (((uVar14 ^ 0xffffffff) & 0xf) == 0) goto LAB_00ce95e0;
          plVar11 = (long *)operator_new(0xc0);
          if ((ulong)((long)plStack_98 - (long)local_a0 >> 3) <= uVar5) goto LAB_00ce98e4;
          lVar9 = *(long *)(param_1 + 0x1d8);
          lVar12 = local_a0[uVar5];
          if (lVar9 != 0) {
            FUN_00d0f740(1,lVar9);
          }
          plVar6 = (long *)operator_new(0x10);
          plVar11[2] = lVar12;
          plVar11[3] = (long)&PTR_FUN_00d385d8;
          *plVar11 = param_1;
          plVar11[0x14] = (long)FUN_00cef730;
          plVar11[0x15] = (long)&PTR_FUN_00d502a0;
          *plVar6 = param_1;
          plVar6[1] = lVar9;
          *(undefined1 *)(plVar11 + 1) = 0;
          plVar11[4] = 0;
          plVar11[5] = 0;
          *(undefined4 *)(plVar11 + 6) = 0;
          plVar11[7] = lVar8;
          *(undefined4 *)(plVar11 + 8) = 0;
          *(uint *)((long)plVar11 + 0x44) = uVar14;
          plVar11[10] = 0;
          plVar11[9] = 0;
          plVar11[0xc] = 0;
          plVar11[0xb] = 0;
          plVar11[0xe] = 0;
          plVar11[0xd] = 0;
          plVar11[0x10] = 0;
          plVar11[0xf] = 0;
          *(undefined4 *)(plVar11 + 0x11) = 0;
          plVar11[0x12] = (long)plVar6;
          *(undefined4 *)(plVar11 + 0x16) = 0;
          FUN_007ebca0(plVar11 + 0x17);
          local_c0 = plVar11;
          FUN_00cead44(plVar11);
          plVar11 = local_c0;
          *(undefined4 *)(local_c0 + 8) = 1;
          lVar9 = local_c0[0x17];
          plVar6 = *(long **)(*local_c0 + 0x150);
          if (lVar9 != 0) {
            FUN_00d0f740(1,lVar9);
          }
          lVar12 = plVar11[0x16];
          local_80 = (long *)operator_new(0x30);
          local_70 = 0x5db390;
          uStack_6c = 0;
          uStack_68 = 0x5db348;
          uStack_64 = 0;
          *local_80 = lVar9;
          local_80[2] = (long)plVar11;
          *(int *)(local_80 + 3) = (int)lVar12;
          local_80[4] = (long)FUN_004473ec;
          local_80[5] = (long)FUN_00cef908;
          (**(code **)(*plVar6 + 8))(plVar6,&local_80,&uStack_81,&uStack_82);
          (*(code *)CONCAT44(uStack_6c,local_70))(0,&local_80,&local_80);
          FUN_00bca960(&local_80,plVar11[2]);
          *(int *)(plVar11 + 4) = iStack_78;
          *(ulong *)((long)plVar11 + 0x2c) = CONCAT44(uStack_68,uStack_6c);
          *(ulong *)((long)plVar11 + 0x24) = CONCAT44(local_70,uStack_74);
          puVar1 = *(undefined8 **)(param_1 + 0x188);
          if (puVar1 < *(undefined8 **)(param_1 + 400)) {
            if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                        );
            }
            puVar7 = puVar1 + 1;
            *puVar1 = local_c0;
          }
          else {
            puVar7 = (undefined8 *)FUN_00ceebac(param_1 + 0x180,&local_c0);
          }
          uVar5 = (ulong)(iVar13 + 1);
          *(undefined8 **)(param_1 + 0x188) = puVar7;
          if ((ulong)((long)plStack_98 - (long)local_a0 >> 3) <= uVar5) break;
          bVar3 = true;
        }
        else {
          local_c4 = uVar14;
          if ((uVar14 >> 6 & 1) != 0) goto LAB_00ce9644;
LAB_00ce9628:
          uVar14 = local_c4;
          FUN_00bca960(&local_80,local_a0[uVar5]);
          if (iStack_78 != 10) goto LAB_00ce9644;
LAB_00ce95e0:
          uVar5 = (ulong)(iVar13 + 1);
          if ((ulong)((long)plStack_98 - (long)local_a0 >> 3) <= uVar5) {
            if (!bVar3) goto LAB_00ce9548;
            break;
          }
        }
        uVar14 = *(uint *)(param_1 + 8);
        iVar13 = (int)uVar5;
        local_c4 = uVar14;
      } while (((uVar14 ^ 0xffffffff) & 0xf) != 0);
    }
  }
  lVar8 = *(long *)(param_1 + 0x1d8);
  plVar11 = *(long **)(param_1 + 0x150);
  if (lVar8 != 0) {
    FUN_00d0f740(1,lVar8);
  }
  local_80 = (long *)operator_new(0x30);
  *local_80 = lVar8;
  local_80[4] = (long)FUN_004473ec;
  local_80[5] = (long)FUN_00cef820;
  local_80[2] = param_1;
  local_70 = 0x5db390;
  uStack_6c = 0;
  uStack_68 = 0x5db348;
  uStack_64 = 0;
  (**(code **)(*plVar11 + 8))(plVar11,&local_80,&local_c0,&local_c4);
  (*(code *)CONCAT44(uStack_6c,local_70))(0,&local_80,&local_80);
LAB_00ce9548:
  if (local_a0 != (long *)0x0) {
    uVar10 = (ulong)((long)plStack_98 + (-8 - ((long)plStack_98 << 0x3d))) >> 3;
    uVar5 = (ulong)(((long)local_a0 - (long)plStack_98 << 0x3d) -
                   ((long)local_a0 - (long)plStack_98)) >> 3;
    if (uVar10 <= uVar5) {
      uVar5 = uVar10;
    }
    plVar11 = plStack_98;
    if ((1 < uVar5) && ((((int)local_a0 - (int)plStack_98 | -(int)plStack_98) & 7U) == 0)) {
      uVar5 = uVar5 & 0x1ffffffffffffffe;
      plVar11 = plStack_98 + -uVar5;
      do {
        uVar5 = uVar5 - 2;
      } while (uVar5 != 0);
    }
    while (plVar11 != local_a0) {
      plVar11 = plVar11 + -1;
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    plStack_98 = local_a0;
    operator_delete(local_a0);
  }
  return;
}


// ===== 00ce990c  FUN_00ce990c =====

void FUN_00ce990c(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  void *pvVar12;
  long *plVar13;
  void *pvVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long *plVar21;
  void *pvVar22;
  undefined1 auStack_400 [408];
  undefined1 auStack_268 [408];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 *local_90;
  undefined8 *puStack_88;
  undefined1 *local_80;
  
  puStack_88 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
  local_90 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  (**(code **)(*param_1 + 0x60))(&local_90);
  puVar10 = puStack_88;
  uVar5 = DAT_001f58f0;
  for (puVar17 = local_90; puVar17 != puVar10; puVar17 = puVar17 + 1) {
    plVar21 = (long *)*puVar17;
    plVar13 = (long *)(**(code **)(*plVar21 + 0x88))(plVar21);
    lVar15 = *plVar13;
    lVar2 = plVar13[1];
    uVar18 = lVar2 - lVar15;
    if (uVar18 != 0) {
      if (0xa0a0a0a0a0a0a0 < (ulong)(((long)uVar18 >> 3) * -0x505050505050505)) {
                    /* WARNING: Subroutine does not return */
        FUN_00b07624();
      }
      pvVar14 = operator_new(uVar18);
      lVar11 = 0x198;
      pvVar12 = pvVar14;
      lVar1 = 0;
      do {
        lVar20 = lVar1;
        pvVar22 = pvVar12;
        lVar16 = lVar11;
        if ((long)pvVar14 + lVar20 == 0) goto LAB_00ce9bc4;
        FUN_00afef10((long)pvVar14 + lVar20,lVar15);
        lVar15 = lVar15 + 0x198;
        lVar1 = lVar20 + 0x198;
        lVar11 = lVar16 + 0x198;
        pvVar12 = (void *)((long)pvVar22 + 0x198);
        pvVar3 = pvVar14;
        lVar4 = lVar1;
      } while (lVar15 != lVar2);
      while (lVar4 != 0) {
        local_b0 = uVar5;
        uStack_a0 = 0xffffffffffffffff;
        uStack_a8 = 0xffffffffffffffff;
        local_98 = 0xaaaaaaaaaaaaaa00;
        (**(code **)(*plVar21 + 0x118))(plVar21,&local_b0);
        memcpy(auStack_268,&DAT_0025a338,0x1b8);
        FUN_00be4140(auStack_400,param_1[0x29],pvVar3);
        uVar9 = local_98;
        uVar8 = uStack_a0;
        uVar7 = uStack_a8;
        uVar6 = local_b0;
        FUN_00afef10(auStack_268,auStack_400);
        uStack_c8 = uVar7;
        local_d0 = uVar6;
        uStack_b8 = uVar9;
        uStack_c0 = uVar8;
        FUN_00aff0f8(auStack_400);
        uVar18 = *(ulong *)(param_2 + 8);
        if (uVar18 < *(ulong *)(param_2 + 0x10)) {
          if (uVar18 == 0) {
LAB_00ce9bc4:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          FUN_00afef10(uVar18,auStack_268);
          lVar15 = uVar18 + 0x1b8;
          *(undefined8 *)(uVar18 + 0x1a0) = uStack_c8;
          *(undefined8 *)(uVar18 + 0x198) = local_d0;
          *(undefined8 *)(uVar18 + 0x1b0) = uStack_b8;
          *(undefined8 *)(uVar18 + 0x1a8) = uStack_c0;
        }
        else {
          lVar15 = FUN_00cee248(param_2,auStack_268);
        }
        *(long *)(param_2 + 8) = lVar15;
        FUN_00aff0f8(auStack_268);
        lVar16 = lVar16 + -0x198;
        pvVar3 = (void *)((long)pvVar3 + 0x198);
        lVar4 = lVar16;
      }
      if (pvVar14 != (void *)0x0) {
        if (lVar1 != 0) {
          lVar20 = -0x198 - lVar20;
          do {
            if (pvVar22 == (void *)0x0) goto LAB_00ce9bb0;
            FUN_00aff0f8(pvVar22);
            lVar20 = lVar20 + 0x198;
            pvVar22 = (void *)((long)pvVar22 + -0x198);
          } while (lVar20 != 0);
        }
        operator_delete(pvVar14);
      }
    }
  }
  if (local_90 != (undefined8 *)0x0) {
    uVar19 = (ulong)((long)puStack_88 + (-8 - ((long)puStack_88 << 0x3d))) >> 3;
    uVar18 = (ulong)(((long)local_90 - (long)puStack_88 << 0x3d) -
                    ((long)local_90 - (long)puStack_88)) >> 3;
    if (uVar19 <= uVar18) {
      uVar18 = uVar19;
    }
    puVar17 = puStack_88;
    if ((1 < uVar18) && ((((int)local_90 - (int)puStack_88 | -(int)puStack_88) & 7U) == 0)) {
      uVar18 = uVar18 & 0x1ffffffffffffffe;
      puVar17 = puStack_88 + -uVar18;
      do {
        uVar18 = uVar18 - 2;
      } while (uVar18 != 0);
    }
    while (puVar17 != local_90) {
      puVar17 = puVar17 + -1;
      if (puVar17 == (undefined8 *)0x0) {
LAB_00ce9bb0:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    puStack_88 = local_90;
    operator_delete(local_90);
  }
  return;
}


// ===== 00ce9c18  FUN_00ce9c18 =====

void FUN_00ce9c18(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *local_50;
  undefined8 *puStack_48;
  undefined1 *local_40;
  
  puStack_48 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
  local_50 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  (**(code **)(*param_1 + 0x60))(&local_50);
  puVar1 = puStack_48;
  for (puVar3 = local_50; puVar3 != puVar1; puVar3 = puVar3 + 1) {
    plVar6 = (long *)*puVar3;
    iVar2 = (**(code **)(*plVar6 + 0x10))(plVar6);
    if ((iVar2 == 1) ||
       ((iVar2 = (**(code **)(*plVar6 + 0x10))(plVar6), iVar2 == 0 &&
        (iVar2 = (**(code **)(*plVar6 + 0x80))(plVar6), iVar2 == 0)))) {
      FUN_00cfe91c(plVar6,param_2);
    }
  }
  if (local_50 != (undefined8 *)0x0) {
    uVar5 = (ulong)((long)puStack_48 + (-8 - ((long)puStack_48 << 0x3d))) >> 3;
    uVar4 = (ulong)(((long)local_50 - (long)puStack_48 << 0x3d) -
                   ((long)local_50 - (long)puStack_48)) >> 3;
    if (uVar5 <= uVar4) {
      uVar4 = uVar5;
    }
    puVar3 = puStack_48;
    if ((1 < uVar4) && ((((int)local_50 - (int)puStack_48 | -(int)puStack_48) & 7U) == 0)) {
      uVar4 = uVar4 & 0x1ffffffffffffffe;
      puVar3 = puStack_48 + -uVar4;
      do {
        uVar4 = uVar4 - 2;
      } while (uVar4 != 0);
    }
    while (puVar3 != local_50) {
      puVar3 = puVar3 + -1;
      if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    puStack_48 = local_50;
    operator_delete(local_50);
  }
  return;
}


// ===== 00ce9d70  FUN_00ce9d70 =====

void FUN_00ce9d70(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 local_18;
  
  puVar4 = *(undefined8 **)(param_2 + 0x198);
  puVar1 = *(undefined8 **)(param_2 + 0x1a0);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (puVar4 != puVar1) {
    puVar3 = (undefined8 *)0x0;
    do {
      puVar2 = puVar3;
      if ((*(char *)(puVar4 + 2) == '\x01') && (*(int *)((long)puVar4 + 0x14) - 4U < 0xfffffffe)) {
        local_18 = *puVar4;
        if (puVar3 < (undefined8 *)param_1[2]) {
          if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          puVar2 = puVar3 + 1;
          *puVar3 = local_18;
        }
        else {
          puVar2 = (undefined8 *)FUN_00cee4cc(param_1,&local_18);
        }
        param_1[1] = puVar2;
      }
      puVar4 = puVar4 + 3;
      puVar3 = puVar2;
    } while (puVar4 != puVar1);
  }
  return;
}


// ===== 00ce9e24  FUN_00ce9e24 =====

void FUN_00ce9e24(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_2 + 0x198);
  lVar2 = *(long *)(param_2 + 0x1a0);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  for (; lVar1 != lVar2; lVar1 = lVar1 + 0x18) {
    if ((*(char *)(lVar1 + 0x10) == '\x01') && (*(int *)(lVar1 + 0x14) - 4U < 0xfffffffe)) {
      FUN_00ce9ea8(param_2,lVar1,param_1);
    }
  }
  return;
}


// ===== 00ce9ea8  FUN_00ce9ea8 =====

void FUN_00ce9ea8(long param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_1d8 [408];
  
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../p2p/client/basic_port_allocator.cc",0x217,"candidates != nullptr",
                 &DAT_001f5fa0);
  }
  plVar3 = (long *)(**(code **)(*(long *)*param_2 + 0x88))();
  lVar6 = *plVar3;
  lVar1 = plVar3[1];
  do {
    if (lVar6 == lVar1) {
      return;
    }
    uVar2 = *(uint *)(param_1 + 0x1c8);
    uVar4 = FUN_007e95f8(lVar6 + 0x50);
    if ((uVar4 & 1) == 0) {
      uVar4 = FUN_00aff31c(lVar6);
      if ((uVar4 & 1) == 0) {
        uVar4 = FUN_00aff2f4(lVar6);
        if ((uVar4 & 1) != 0) {
          uVar2 = uVar2 >> 1;
          goto joined_r0x00ce9ee8;
        }
        uVar4 = FUN_00aff2e0(lVar6);
        if ((uVar4 & 1) == 0) goto LAB_00ce9eec;
        if (((uVar2 >> 1 & 1) == 0) || (uVar4 = FUN_007e9674(lVar6 + 0x50), (uVar4 & 1) != 0))
        goto joined_r0x00ce9ee8;
      }
      else {
        uVar2 = uVar2 >> 2;
joined_r0x00ce9ee8:
        if ((uVar2 & 1) == 0) goto LAB_00ce9eec;
      }
      FUN_00be4140(auStack_1d8,*(undefined8 *)(param_1 + 0x148),lVar6);
      uVar4 = *(ulong *)(param_3 + 8);
      if (uVar4 < *(ulong *)(param_3 + 0x10)) {
        if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        FUN_00afef10(uVar4,auStack_1d8);
        lVar5 = uVar4 + 0x198;
      }
      else {
        lVar5 = FUN_00b14508(param_3,auStack_1d8);
      }
      *(long *)(param_3 + 8) = lVar5;
      FUN_00aff0f8(auStack_1d8);
    }
LAB_00ce9eec:
    lVar6 = lVar6 + 0x198;
  } while( true );
}


// ===== 00ce9fec  FUN_00ce9fec =====

bool FUN_00ce9fec(long param_1)

{
  long lVar1;
  
  lVar1 = (**(code **)(**(long **)(param_1 + 0x110) + 0x50))();
  return lVar1 != 0;
}


// ===== 00cea01c  FUN_00cea01c =====

bool FUN_00cea01c(long param_1)

{
  int *piVar1;
  long *plVar2;
  bool bVar3;
  long lVar4;
  
  if (*(char *)(param_1 + 0x162) == '\x01') {
    plVar2 = *(long **)(param_1 + 0x180);
    do {
      if (plVar2 == *(long **)(param_1 + 0x188)) {
        lVar4 = *(long *)(param_1 + 0x198);
        if (lVar4 == *(long *)(param_1 + 0x1a0)) {
          return true;
        }
        do {
          piVar1 = (int *)(lVar4 + 0x14);
          bVar3 = *piVar1 != 0;
          if (lVar4 + 0x18 == *(long *)(param_1 + 0x1a0)) {
            return bVar3;
          }
          lVar4 = lVar4 + 0x18;
        } while (*piVar1 != 0);
        return bVar3;
      }
      lVar4 = *plVar2;
      plVar2 = plVar2 + 1;
    } while (*(int *)(lVar4 + 0x40) != 1);
  }
  return false;
}


// ===== 00cea090  FUN_00cea090 =====

void FUN_00cea090(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 **ppuVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 *local_60;
  ulong uStack_58;
  ulong local_50;
  
  puVar2 = *(undefined8 **)(param_1 + 0x198);
  puVar3 = *(undefined8 **)(param_1 + 0x1a0);
  do {
    if (puVar2 == puVar3) {
      return;
    }
    uVar9 = *puVar2;
    if (*(char *)(param_1 + 0x27) < '\0') {
      FUN_005478d8(&local_60,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
    }
    else {
      uStack_58 = *(ulong *)(param_1 + 0x18);
      local_60 = *(undefined1 **)(param_1 + 0x10);
      local_50 = *(ulong *)(param_1 + 0x20);
    }
    uVar1 = uStack_58;
    ppuVar4 = (undefined1 **)local_60;
    if (-1 < (long)local_50) {
      uVar1 = local_50 >> 0x38;
      ppuVar4 = &local_60;
    }
    FUN_00cea18c(uVar9,ppuVar4,uVar1);
    if ((long)local_50 < 0) {
      operator_delete(local_60);
    }
    lVar6 = (long)*(char *)(param_1 + 0x47);
    if (lVar6 < 0) {
      lVar5 = *(long *)(param_1 + 0x30);
      lVar6 = *(long *)(param_1 + 0x38);
      lVar8 = (long)*(char *)(param_1 + 0x5f);
      if (lVar8 < 0) goto LAB_00cea168;
LAB_00cea0c4:
      lVar7 = param_1 + 0x48;
    }
    else {
      lVar5 = param_1 + 0x30;
      lVar8 = (long)*(char *)(param_1 + 0x5f);
      if (-1 < lVar8) goto LAB_00cea0c4;
LAB_00cea168:
      lVar7 = *(long *)(param_1 + 0x48);
      lVar8 = *(long *)(param_1 + 0x50);
    }
    FUN_00cf9208(*puVar2,*(undefined4 *)(param_1 + 0x28),lVar5,lVar6,lVar7,lVar8);
    puVar2 = puVar2 + 3;
  } while( true );
}


// ===== 00cea18c  FUN_00cea18c =====

void FUN_00cea18c(long param_1,undefined8 ***param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  undefined8 ***__dest;
  undefined8 **local_58;
  ulong uStack_50;
  undefined8 local_48;
  
  if (0x7ffffffffffffff6 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
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
    cVar3 = *(char *)(param_1 + 0x77);
    *(undefined1 *)((long)__dest + param_3) = 0;
    if (cVar3 < '\0') {
      operator_delete(*(void **)(param_1 + 0x60));
    }
    *(ulong *)(param_1 + 0x68) = uStack_50;
    *(undefined8 ***)(param_1 + 0x60) = local_58;
    *(ulong *)(param_1 + 0x70) = local_48;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
            );
}


// ===== 00cea2a4  FUN_00cea2a4 =====

void FUN_00cea2a4(long *param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  void *pvVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long *local_60 [2];
  code *local_50;
  code *pcStack_48;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  lVar7 = param_1[0x29];
  lVar3 = (**(code **)(*param_1 + 0x98))();
  uVar5 = *(undefined8 *)(lVar3 + 0xf0);
  pvVar4 = operator_new(0xb0);
  uVar8 = param_1[7];
  plVar6 = (long *)param_1[6];
  if (-1 < (char)*(byte *)((long)param_1 + 0x47)) {
    uVar8 = (ulong)*(byte *)((long)param_1 + 0x47);
    plVar6 = param_1 + 6;
  }
  uVar1 = param_1[10];
  plVar2 = (long *)param_1[9];
  if (-1 < (char)*(byte *)((long)param_1 + 0x5f)) {
    uVar1 = (ulong)*(byte *)((long)param_1 + 0x5f);
    plVar2 = param_1 + 9;
  }
  FUN_00cedc10(pvVar4,lVar7 + 0x48,plVar6,uVar8,plVar2,uVar1,uVar5);
  lVar3 = *(long *)(param_1[0x29] + 0x60);
  lVar7 = *(long *)(param_1[0x29] + 0x68);
  if (lVar3 != lVar7) {
    uVar8 = *(ulong *)((long)pvVar4 + 0xa0);
    do {
      if (uVar8 < *(ulong *)((long)pvVar4 + 0xa8)) {
        if (uVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        FUN_00be2b28(uVar8,lVar3);
        uVar8 = uVar8 + 0xa0;
      }
      else {
        uVar8 = FUN_00be2700((long)pvVar4 + 0x98,lVar3);
      }
      lVar3 = lVar3 + 0xa0;
      *(ulong *)((long)pvVar4 + 0xa0) = uVar8;
    } while (lVar3 != lVar7);
  }
  lVar3 = param_1[0x3b];
  plVar6 = (long *)param_1[0x2a];
  if (lVar3 != 0) {
    FUN_00d0f740(1,lVar3);
  }
  local_60[0] = (long *)operator_new(0x30);
  *local_60[0] = lVar3;
  local_60[0][4] = (long)FUN_00cef5b4;
  local_60[0][5] = (long)FUN_00cef59c;
  local_60[0][2] = (long)param_1;
  local_60[0][3] = (long)pvVar4;
  local_50 = FUN_005db390;
  pcStack_48 = FUN_005db348;
  (**(code **)(*plVar6 + 8))(plVar6,local_60,&uStack_21,&uStack_22);
  (*local_50)(0,local_60,local_60);
  return;
}


// ===== 00cea440  FUN_00cea440 =====

void FUN_00cea440(long param_1,void *param_2)

{
  undefined4 uVar1;
  void *pvVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  void *local_60;
  undefined1 uStack_52;
  undefined1 uStack_51;
  long *local_50 [2];
  code *local_40;
  code *pcStack_38;
  
  local_60 = param_2;
  if (param_2 != (void *)0x0) {
    plVar4 = *(long **)(param_1 + 0x170);
    if (plVar4 < *(long **)(param_1 + 0x178)) {
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      local_60 = (void *)0x0;
      plVar3 = plVar4 + 1;
      *plVar4 = (long)param_2;
    }
    else {
      plVar3 = (long *)FUN_00cee5c0(param_1 + 0x168,&local_60);
    }
    *(long **)(param_1 + 0x170) = plVar3;
  }
  lVar5 = *(long *)(param_1 + 0x1d8);
  plVar4 = *(long **)(param_1 + 0x150);
  if (lVar5 != 0) {
    FUN_00d0f740(1,lVar5);
  }
  uVar1 = *(undefined4 *)(param_1 + 0x1d4);
  local_50[0] = (long *)operator_new(0x30);
  *local_50[0] = lVar5;
  local_50[0][4] = (long)FUN_004473ec;
  local_50[0][5] = (long)FUN_00cef630;
  local_50[0][2] = param_1;
  *(undefined4 *)(local_50[0] + 3) = uVar1;
  local_40 = FUN_005db390;
  pcStack_38 = FUN_005db348;
  (**(code **)(*plVar4 + 8))(plVar4,local_50,&uStack_51,&uStack_52);
  (*local_40)(0,local_50,local_50);
  pvVar2 = local_60;
  local_60 = (void *)0x0;
  if (pvVar2 != (void *)0x0) {
    FUN_00cef404(pvVar2);
    operator_delete(pvVar2);
  }
  return;
}


// ===== 00cea568  FUN_00cea568 =====

void FUN_00cea568(long *param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *local_90;
  long lStack_88;
  long local_80;
  long **local_78;
  long local_70;
  undefined1 *local_68;
  char *local_60;
  long ***ppplStack_58;
  long **local_50;
  char **ppcStack_48;
  undefined1 uStack_21;
  
  uVar2 = (**(code **)(*param_1 + 0x70))();
  if ((uVar2 & 1) != 0) {
    lVar4 = param_1[0xc];
    uVar2 = FUN_00417e08();
    if ((char)lVar4 == '\x01') {
      if ((uVar2 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../p2p/client/basic_port_allocator.cc",0x2499,
                     "All candidates gathered for pooled session.");
      }
    }
    else if ((uVar2 & 1) == 0) {
      local_78 = (long **)0x1bc002;
      local_70 = 0x24a9;
      local_68 = &uStack_21;
      ppplStack_58 = &local_78;
      local_60 = "All candidates gathered for ";
      if (*(char *)((long)param_1 + 0x27) < '\0') {
        FUN_005478d8(&local_90,param_1[2],param_1[3]);
      }
      else {
        lStack_88 = param_1[3];
        local_90 = (long *)param_1[2];
        local_80 = param_1[4];
      }
      local_50 = &local_90;
      ppcStack_48 = &local_60;
      lVar4 = param_1[5];
      uVar1 = (**(code **)(*param_1 + 0x80))(param_1);
      FUN_00623bb0(&DAT_001f6e20,*(undefined8 *)ppcStack_48[1],*(undefined4 *)(ppcStack_48[1] + 8),
                   *ppcStack_48,local_50,&DAT_001ca603,(int)lVar4,&DAT_001ca603,uVar1);
      if (local_80 < 0) {
        operator_delete(local_90);
      }
    }
    lVar4 = param_1[0x36];
    lVar3 = param_1[0x37];
    if (lVar4 != lVar3) {
      do {
        local_90 = param_1;
        local_78 = &local_90;
        local_70 = lVar4;
        FUN_007b6160(param_1 + 0x19,&local_78,FUN_00cef198);
        lVar4 = lVar4 + 0x58;
      } while (lVar4 != lVar3);
      lVar4 = param_1[0x36];
      lVar3 = param_1[0x37];
    }
    while (lVar4 != lVar3) {
      lVar3 = lVar3 + -0x58;
      FUN_00cef0f8(lVar3);
    }
    local_78 = &local_90;
    param_1[0x37] = lVar4;
    local_90 = param_1;
    FUN_007b6160(param_1 + 0x21,&local_78,FUN_00cef2c0);
  }
  return;
}


// ===== 00cea72c  FUN_00cea72c =====

void FUN_00cea72c(long *param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *__dest;
  undefined8 *puVar6;
  undefined8 *puVar7;
  void *local_98 [2];
  char cStack_81;
  undefined8 local_80;
  undefined8 uStack_78;
  code *local_70;
  long local_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uStack_78 = param_2[1];
  local_80 = *param_2;
  local_68 = param_2[3];
  local_70 = (code *)param_2[2];
  __dest = (undefined8 *)*param_1;
  puVar3 = (undefined8 *)param_1[1];
  if (*(code **)param_2[3] != (code *)0x0) {
    local_80 = (**(code **)param_2[3])(*param_2);
  }
  puVar7 = __dest;
  if (__dest != puVar3) {
    do {
      while (uVar2 = (*local_70)(&local_80,*puVar7), (uVar2 & 1) == 0) {
        do {
          puVar3 = puVar3 + -1;
          __dest = puVar7;
          if (puVar3 == puVar7) goto LAB_00cea7f0;
          uVar2 = (*local_70)(&local_80,*puVar3);
        } while ((uVar2 & 1) == 0);
        uVar4 = *puVar7;
        puVar6 = puVar7 + 1;
        *puVar7 = *puVar3;
        *puVar3 = uVar4;
        __dest = puVar3;
        puVar7 = puVar6;
        if (puVar3 == puVar6) goto LAB_00cea7f0;
      }
      puVar7 = puVar7 + 1;
      __dest = puVar3;
    } while (puVar7 != puVar3);
  }
LAB_00cea7f0:
  if (*(code **)(local_68 + 8) != (code *)0x0) {
    (**(code **)(local_68 + 8))(local_80);
  }
  if (__dest != (undefined8 *)param_1[1]) {
    uVar2 = FUN_00417e08();
    if ((uVar2 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4eff,"../../p2p/client/basic_port_allocator.cc",0x3e9,"Filtered out ",
                   param_2 + 4," networks:");
    }
    puVar7 = __dest;
    puVar6 = __dest;
    puVar3 = __dest;
    if (__dest != (undefined8 *)param_1[1]) {
      do {
        uVar2 = FUN_00417e08();
        if ((uVar2 & 1) == 0) {
          FUN_00bcc3dc(local_98,*puVar3);
          FUN_00623bb0(&DAT_001f627a,"../../p2p/client/basic_port_allocator.cc",0x3f9,local_98);
          if (cStack_81 < '\0') {
            operator_delete(local_98[0]);
          }
        }
        puVar3 = puVar3 + 1;
        puVar7 = puVar6 + 1;
        puVar6 = puVar6 + 1;
      } while (puVar3 != (undefined8 *)param_1[1]);
    }
    if (puVar3 < __dest) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__vector/vector.h:1170: libc++ Hardening assertion __first <= __last failed: vector::erase(first, last) called with invalid range\n"
                );
    }
    if (__dest != puVar3) {
      memmove(__dest,puVar7,0);
      puVar3 = (undefined8 *)param_1[1];
      uVar5 = (ulong)((long)puVar3 + (-8 - ((long)puVar3 << 0x3d))) >> 3;
      uVar2 = (ulong)(((long)__dest - (long)puVar3 << 0x3d) - ((long)__dest - (long)puVar3)) >> 3;
      if (uVar5 <= uVar2) {
        uVar2 = uVar5;
      }
      if ((1 < uVar2) && ((((int)__dest - (int)puVar3 | -(int)puVar3) & 7U) == 0)) {
        uVar2 = uVar2 & 0x1ffffffffffffffe;
        puVar3 = puVar3 + -uVar2;
        do {
          uVar2 = uVar2 - 2;
        } while (uVar2 != 0);
      }
      while (puVar3 != __dest) {
        puVar3 = puVar3 + -1;
        if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      param_1[1] = (long)__dest;
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00cea9ac  FUN_00cea9ac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00cea9ac(long *param_1,long *param_2,int param_3)

{
  void *pvVar1;
  undefined4 *puVar2;
  long *plVar3;
  long *plVar4;
  void *pvVar5;
  long *plVar6;
  long lVar7;
  void *pvVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  size_t __n;
  long lVar13;
  uint uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  long *aplStack_120 [2];
  code *pcStack_110;
  code *pcStack_108;
  undefined1 auStack_f8 [32];
  void *apvStack_d8 [2];
  char cStack_c1;
  undefined1 *puStack_90;
  code *pcStack_88;
  
  pvVar1 = (void *)*param_2;
  pvVar5 = (void *)param_2[1];
  uVar12 = (long)pvVar5 - (long)pvVar1;
  if ((int)(uVar12 >> 3) <= param_3) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    if (pvVar5 != pvVar1) {
      if ((long)uVar12 < 0) {
        plVar3 = (long *)FUN_00bcd79c();
        if ((*(byte *)((long)plVar3 + 0x45) & 1) != 0) {
          pcStack_88 = FUN_00cead44;
          puStack_90 = &stack0xffffffffffffffa0;
          lVar7 = (**(code **)(*(long *)*plVar3 + 0x98))();
          plVar6 = *(long **)(*plVar3 + 0x158);
          FUN_00bca960(auStack_f8,plVar3[2]);
          FUN_007e8cac(apvStack_d8,auStack_f8,0);
          lVar7 = (**(code **)(*plVar6 + 0x10))
                            (plVar6,lVar7 + 0xe8,apvStack_d8,*(undefined4 *)(lVar7 + 0x10),
                             *(undefined4 *)(lVar7 + 0x14));
          plVar6 = (long *)plVar3[0xc];
          plVar3[0xc] = lVar7;
          if (plVar6 != (long *)0x0) {
            (**(code **)(*plVar6 + 8))(plVar6);
          }
          if (cStack_c1 < '\0') {
            operator_delete(apvStack_d8[0]);
          }
          if (plVar3[0xc] != 0) {
            pcStack_110 = FUN_004473ec;
            pcStack_108 = FUN_00cef8fc;
            aplStack_120[0] = plVar3;
            FUN_00897e08(plVar3[0xc],aplStack_120);
            (*pcStack_110)(0,aplStack_120,aplStack_120);
          }
        }
        return;
      }
      pvVar5 = operator_new(uVar12);
      *param_1 = (long)pvVar5;
      param_1[2] = (long)pvVar5 + uVar12;
      memcpy(pvVar5,pvVar1,uVar12);
      param_1[1] = (long)pvVar5 + uVar12;
    }
    return;
  }
  puVar2 = (undefined4 *)operator_new(0x1c);
  if (((((puVar2 != (undefined4 *)0x0) && (*puVar2 = 1, puVar2 != (undefined4 *)0xfffffffffffffffc))
       && (puVar2[1] = 0x10, puVar2 != (undefined4 *)0xfffffffffffffff8)) &&
      ((puVar2[2] = 2, puVar2 != (undefined4 *)0xfffffffffffffff4 &&
       (puVar2[3] = 4, puVar2 != (undefined4 *)0xfffffffffffffff0)))) &&
     (puVar2[4] = 8, puVar2 != (undefined4 *)0xffffffffffffffec)) {
    puVar2[5] = 0;
    if (puVar2 + 6 != (undefined4 *)0x0) {
      param_1[1] = 0;
      param_1[2] = 0;
      puVar2[6] = 0x20;
      *param_1 = 0;
      if ((0 < param_3) && (0 < param_3 * 7)) {
        lVar7 = 0;
        plVar3 = (long *)0x0;
        uVar14 = 0;
        do {
          plVar6 = (long *)*param_2;
          lVar9 = (long)pvVar5 - (long)plVar6 >> 3;
          if (0 < (int)lVar9) {
            uVar12 = (ulong)((long)pvVar5 - (long)plVar6) >> 3 & 0x7fffffff;
            lVar13 = 0;
LAB_00ceaaec:
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                        );
            }
            uVar11 = *(uint *)(*plVar6 + 0xa0);
            if ((puVar2[uVar14 % 7] != uVar11) &&
               ((((puVar2[uVar14 % 7] != 4 || ((uVar11 ^ uVar11 - 1) <= uVar11 - 1)) ||
                 (uVar11 = (uVar11 & 0xaaaaaaaa) >> 1 | (uVar11 & 0x55555555) << 1,
                 uVar11 = (uVar11 & 0xcccccccc) >> 2 | (uVar11 & 0x33333333) << 2,
                 uVar11 = (uVar11 & 0xf0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f) << 4,
                 uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8,
                 uVar11 = (uint)LZCOUNT(uVar11 >> 0x10 | uVar11 << 0x10), 9 < uVar11)) ||
                ((0x3c4U >> (ulong)(uVar11 & 0x1f) & 1) == 0)))) goto LAB_00ceaad8;
            if (plVar3 < (long *)param_1[2]) {
              if (plVar3 == (long *)0x0) goto LAB_00cead04;
              plVar4 = plVar3 + 1;
              *plVar3 = *plVar6;
            }
            else {
              plVar4 = (long *)FUN_00ceeab8(param_1);
            }
            lVar7 = *param_2;
            pvVar1 = (void *)param_2[1];
            param_1[1] = (long)plVar4;
            pvVar5 = (void *)(lVar7 + lVar13);
            if (pvVar5 == pvVar1) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__vector/vector.h:1160: libc++ Hardening assertion __position != end() failed: vector::erase(iterator) called with a non-dereferenceable iterator\n"
                        );
            }
            __n = (long)pvVar1 + (-lVar13 - lVar7) + -8;
            memmove(pvVar5,(void *)((long)pvVar5 + 8),__n);
            pvVar8 = (void *)param_2[1];
            uVar10 = (ulong)((long)pvVar8 + (-8 - ((long)pvVar8 << 0x3d))) >> 3;
            uVar12 = (((long)pvVar1 - (long)pvVar8 << 0x3d) - ((long)pvVar1 - (long)pvVar8)) + 8U >>
                     3;
            if (uVar10 <= uVar12) {
              uVar12 = uVar10;
            }
            if ((1 < uVar12) && ((-(int)pvVar8 & 7U) == 0)) {
              uVar12 = uVar12 & 0x1ffffffffffffffe;
              pvVar8 = (void *)((long)pvVar8 + uVar12 * -8);
              do {
                uVar12 = uVar12 - 2;
              } while (uVar12 != 0);
            }
            pvVar5 = (void *)((long)pvVar5 + __n);
            while (pvVar8 != pvVar5) {
              pvVar8 = (void *)((long)pvVar8 + -8);
              if (pvVar8 == (void *)0x0) goto LAB_00ceacf0;
            }
            lVar7 = *param_1;
            plVar3 = (long *)param_1[1];
            param_2[1] = (long)pvVar5;
          }
LAB_00ceabf0:
        } while (((int)((ulong)((long)plVar3 - lVar7) >> 3) < param_3) &&
                (uVar14 = uVar14 + 1,
                (int)(uVar14 + param_3 * -7) < 0 != SBORROW4(uVar14,param_3 * 7)));
      }
      auVar17._0_8_ = (long)puVar2 + _DAT_001f39c0;
      auVar17._8_8_ = (long)puVar2 + _UNK_001f39c8;
      auVar15._0_8_ = (long)puVar2 + _DAT_001f4720;
      auVar15._8_8_ = (long)puVar2 + _UNK_001f4728;
      auVar15 = NEON_cmeq(auVar15,0,8);
      auVar17 = NEON_cmeq(auVar17,0,8);
      auVar16._4_4_ = auVar17._8_4_;
      auVar16._0_4_ = auVar17._0_4_;
      auVar16._8_4_ = auVar15._0_4_;
      auVar16._12_4_ = auVar15._8_4_;
      uVar14 = NEON_umaxv(auVar16,4);
      if (((uVar14 & 1) == 0) &&
         ((puVar2 != (undefined4 *)0xfffffffffffffff8 &&
          (puVar2 != (undefined4 *)0xfffffffffffffffc)))) {
        operator_delete(puVar2);
        return;
      }
LAB_00ceacf0:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
  }
LAB_00cead04:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
LAB_00ceaad8:
  uVar12 = uVar12 - 1;
  plVar6 = plVar6 + 1;
  lVar13 = lVar13 + 8;
  lVar9 = lVar9 + -1;
  if (uVar12 == 0) goto LAB_00ceabf0;
  goto LAB_00ceaaec;
}


// ===== 00cead44  FUN_00cead44 =====

void FUN_00cead44(long *param_1)

{
  long lVar1;
  long *plVar2;
  long *local_c0 [2];
  code *local_b0;
  code *pcStack_a8;
  undefined1 auStack_98 [32];
  void *local_78 [2];
  char cStack_61;
  
  if ((*(byte *)((long)param_1 + 0x45) & 1) != 0) {
    lVar1 = (**(code **)(*(long *)*param_1 + 0x98))();
    plVar2 = *(long **)(*param_1 + 0x158);
    FUN_00bca960(auStack_98,param_1[2]);
    FUN_007e8cac(local_78,auStack_98,0);
    lVar1 = (**(code **)(*plVar2 + 0x10))
                      (plVar2,lVar1 + 0xe8,local_78,*(undefined4 *)(lVar1 + 0x10),
                       *(undefined4 *)(lVar1 + 0x14));
    plVar2 = (long *)param_1[0xc];
    param_1[0xc] = lVar1;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))(plVar2);
    }
    if (cStack_61 < '\0') {
      operator_delete(local_78[0]);
    }
    if (param_1[0xc] != 0) {
      local_b0 = FUN_004473ec;
      pcStack_a8 = FUN_00cef8fc;
      local_c0[0] = param_1;
      FUN_00897e08(param_1[0xc],local_c0);
      (*local_b0)(0,local_c0,local_c0);
    }
  }
  return;
}


// ===== 00ceae4c  FUN_00ceae4c =====

void FUN_00ceae4c(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long **pplVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  uint uVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long **pplVar11;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  undefined8 *local_70;
  undefined8 *puStack_68;
  undefined1 *local_60;
  undefined4 local_54;
  long **local_50;
  undefined4 *puStack_48;
  long *local_28;
  
  puStack_68 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
  local_70 = (undefined8 *)&DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00ce827c(&local_70);
  plVar5 = (long *)param_1[0x30];
  plVar2 = (long *)param_1[0x31];
  local_88 = (long *)0x0;
  local_80 = (long *)0x0;
  local_78 = (long *)0x0;
  for (; plVar5 != plVar2; plVar5 = plVar5 + 1) {
    lVar6 = *plVar5;
    if ((*(byte *)(lVar6 + 8) & 1) == 0) {
      local_a0 = *(undefined8 **)(lVar6 + 0x10);
      if (local_70 != puStack_68) {
        puVar8 = (undefined1 *)((long)puStack_68 + (-8 - (long)local_70));
        uVar7 = (uint)puVar8;
        puVar4 = local_70;
        if ((~uVar7 & 0x18) != 0) {
          uVar10 = (ulong)((uVar7 >> 3) + 1) & 3;
          do {
            if ((undefined8 *)*puVar4 == local_a0) goto LAB_00ceaea4;
            uVar10 = uVar10 - 1;
            puVar4 = puVar4 + 1;
          } while (uVar10 != 0);
        }
        if ((undefined1 *)0x17 < puVar8) {
          puVar4 = puVar4 + 2;
          while( true ) {
            if ((undefined8 *)puVar4[-2] == local_a0) {
              puVar4 = puVar4 + -2;
              goto LAB_00ceaea4;
            }
            if ((undefined8 *)puVar4[-1] == local_a0) break;
            if ((undefined8 *)*puVar4 == local_a0) goto LAB_00ceaea4;
            if ((undefined8 *)puVar4[1] == local_a0) {
              puVar4 = puVar4 + 1;
              goto LAB_00ceaea4;
            }
            puVar1 = puVar4 + 2;
            puVar4 = puVar4 + 4;
            if (puVar1 == puStack_68) goto LAB_00ceaf14;
          }
          puVar4 = puVar4 + -1;
LAB_00ceaea4:
          if (puVar4 != puStack_68) goto LAB_00ceaeac;
        }
      }
LAB_00ceaf14:
      *(undefined1 *)(lVar6 + 8) = 1;
      if (*(int *)(lVar6 + 0x40) == 1) {
        *(undefined4 *)(lVar6 + 0x40) = 2;
        *(int *)(lVar6 + 0xb0) = *(int *)(lVar6 + 0xb0) + 1;
      }
      if (local_80 < local_78) {
        if (local_80 == (long *)0x0) goto LAB_00ceb34c;
        *local_80 = (long)local_a0;
        local_80 = local_80 + 1;
      }
      else {
        local_80 = (long *)FUN_00bcd6a8(&local_88,&local_a0);
      }
    }
LAB_00ceaeac:
  }
  pplVar11 = (long **)param_1[0x33];
  pplVar3 = (long **)param_1[0x34];
  local_a0 = (undefined8 *)0x0;
  local_98 = (undefined8 *)0x0;
  local_90 = (undefined8 *)0x0;
  if (pplVar11 != pplVar3) {
    puVar4 = (undefined8 *)0x0;
    do {
      if ((*(int *)((long)pplVar11 + 0x14) != 3) && (local_88 != local_80)) {
        uVar10 = (long)local_80 + (-8 - (long)local_88);
        uVar7 = (uint)uVar10;
        lVar6 = pplVar11[1][2];
        plVar5 = local_88;
        if ((~uVar7 & 0x18) != 0) {
          uVar9 = (ulong)((uVar7 >> 3) + 1) & 3;
          do {
            if (*plVar5 == lVar6) goto joined_r0x00ceb0a4;
            uVar9 = uVar9 - 1;
            plVar5 = plVar5 + 1;
          } while (uVar9 != 0);
        }
        if (0x17 < uVar10) {
          plVar5 = plVar5 + 2;
          while( true ) {
            if (plVar5[-2] == lVar6) {
              plVar5 = plVar5 + -2;
              goto joined_r0x00ceb0a4;
            }
            if (plVar5[-1] == lVar6) break;
            if (*plVar5 == lVar6) goto joined_r0x00ceb0a4;
            if (plVar5[1] == lVar6) {
              plVar5 = plVar5 + 1;
              goto joined_r0x00ceb0a4;
            }
            plVar2 = plVar5 + 2;
            plVar5 = plVar5 + 4;
            if (plVar2 == local_80) goto LAB_00ceafe8;
          }
          plVar5 = plVar5 + -1;
joined_r0x00ceb0a4:
          if (plVar5 != local_80) {
            local_50 = pplVar11;
            if (puVar4 < local_90) {
              if (puVar4 == (undefined8 *)0x0) {
LAB_00ceb34c:
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                          );
              }
              local_98 = puVar4 + 1;
              *puVar4 = pplVar11;
              puVar4 = local_98;
            }
            else {
              puVar4 = (undefined8 *)FUN_00cef1b4(&local_a0,&local_50);
              local_98 = puVar4;
            }
          }
        }
      }
LAB_00ceafe8:
      pplVar11 = pplVar11 + 3;
    } while (pplVar11 != pplVar3);
    if (local_a0 != puVar4) {
      uVar10 = FUN_00417e08();
      if ((uVar10 & 1) == 0) {
        FUN_00623bb0(&DAT_001f6d4b,"../../p2p/client/basic_port_allocator.cc",0x1b71,"Prune ",
                     (long)local_98 - (long)local_a0 >> 3," ports because their networks were gone")
        ;
      }
      FUN_00ce90f0(param_1,&local_a0);
    }
  }
  if (((char)param_1[0x2c] == '\x01') &&
     (uVar10 = (**(code **)(*param_1 + 0x40))(param_1), (uVar10 & 1) == 0)) {
    if (*(char *)((long)param_1 + 0x161) == '\x01') {
      local_50 = &local_28;
      puStack_48 = &local_54;
      local_54 = 0;
      local_28 = param_1;
      FUN_007b6160(param_1 + 0x25,&local_50,FUN_00cee228);
    }
    FUN_00ce9364(param_1);
  }
  if ((*(byte *)((long)param_1 + 0x161) & 1) == 0) {
    uVar10 = FUN_00417e08();
    if ((uVar10 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../p2p/client/basic_port_allocator.cc",0x1be9,
                   "Network manager has started");
    }
    *(undefined1 *)((long)param_1 + 0x161) = 1;
  }
  if (local_a0 == (undefined8 *)0x0) {
LAB_00ceb24c:
    if (local_88 == (long *)0x0) {
LAB_00ceb2cc:
      if (local_70 == (undefined8 *)0x0) {
        return;
      }
      uVar9 = (ulong)((long)puStack_68 + (-8 - ((long)puStack_68 << 0x3d))) >> 3;
      uVar10 = (ulong)(((long)local_70 - (long)puStack_68 << 0x3d) -
                      ((long)local_70 - (long)puStack_68)) >> 3;
      if (uVar9 <= uVar10) {
        uVar10 = uVar9;
      }
      puVar4 = puStack_68;
      if ((1 < uVar10) && ((((int)local_70 - (int)puStack_68 | -(int)puStack_68) & 7U) == 0)) {
        uVar10 = uVar10 & 0x1ffffffffffffffe;
        puVar4 = puStack_68 + -uVar10;
        do {
          uVar10 = uVar10 - 2;
        } while (uVar10 != 0);
      }
      do {
        if (puVar4 == local_70) {
          puStack_68 = local_70;
          operator_delete(local_70);
          return;
        }
        puVar4 = puVar4 + -1;
      } while (puVar4 != (undefined8 *)0x0);
    }
    else {
      uVar9 = (ulong)((long)local_80 + (-8 - ((long)local_80 << 0x3d))) >> 3;
      uVar10 = (ulong)(((long)local_88 - (long)local_80 << 0x3d) - ((long)local_88 - (long)local_80)
                      ) >> 3;
      if (uVar9 <= uVar10) {
        uVar10 = uVar9;
      }
      plVar5 = local_80;
      if ((1 < uVar10) && ((((int)local_88 - (int)local_80 | -(int)local_80) & 7U) == 0)) {
        uVar10 = uVar10 & 0x1ffffffffffffffe;
        plVar5 = local_80 + -uVar10;
        do {
          uVar10 = uVar10 - 2;
        } while (uVar10 != 0);
      }
      do {
        if (plVar5 == local_88) {
          local_80 = local_88;
          operator_delete(local_88);
          goto LAB_00ceb2cc;
        }
        plVar5 = plVar5 + -1;
      } while (plVar5 != (long *)0x0);
    }
  }
  else {
    uVar9 = (ulong)((long)local_98 + (-8 - ((long)local_98 << 0x3d))) >> 3;
    uVar10 = (ulong)(((long)local_a0 - (long)local_98 << 0x3d) - ((long)local_a0 - (long)local_98))
             >> 3;
    if (uVar9 <= uVar10) {
      uVar10 = uVar9;
    }
    puVar4 = local_98;
    if ((1 < uVar10) && ((((int)local_a0 - (int)local_98 | -(int)local_98) & 7U) == 0)) {
      uVar10 = uVar10 & 0x1ffffffffffffffe;
      puVar4 = local_98 + -uVar10;
      do {
        uVar10 = uVar10 - 2;
      } while (uVar10 != 0);
    }
    do {
      if (puVar4 == local_a0) {
        local_98 = local_a0;
        operator_delete(local_a0);
        goto LAB_00ceb24c;
      }
      puVar4 = puVar4 + -1;
    } while (puVar4 != (undefined8 *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00ceb38c  FUN_00ceb38c =====

void FUN_00ceb38c(long *param_1,long param_2,long param_3,uint *param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 **ppuVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 **ppuVar10;
  undefined8 **ppuVar11;
  undefined8 **local_88;
  undefined8 local_80;
  long local_78;
  undefined8 *local_70;
  undefined8 local_68;
  long local_60;
  undefined8 ***local_38;
  
  if (((*(byte *)(param_1 + 1) & 1) == 0) && (param_2 == param_1[2])) {
    FUN_00bca960(&local_70,param_2);
    uVar6 = FUN_007e9cb8(param_1 + 3,&local_70);
    if ((uVar6 & 1) != 0) {
      puVar1 = *(undefined8 **)(*param_1 + 0x1a0);
      for (puVar9 = *(undefined8 **)(*param_1 + 0x198); puVar9 != puVar1; puVar9 = puVar9 + 3) {
        if ((((*(int *)((long)puVar9 + 0x14) != 3) &&
             (lVar7 = (**(code **)(*(long *)*puVar9 + 0x18))(), lVar7 == param_1[2])) &&
            (iVar5 = (**(code **)(*(long *)*puVar9 + 0x80))(), iVar5 == 0)) &&
           ((iVar5 = (**(code **)(*(long *)*puVar9 + 0x10))(), iVar5 == 0 &&
            (*(int *)((long)puVar9 + 0x14) != 2)))) {
          *param_4 = *param_4 | 1;
          break;
        }
      }
      puVar1 = *(undefined8 **)(*param_1 + 0x1a0);
      for (puVar9 = *(undefined8 **)(*param_1 + 0x198); puVar9 != puVar1; puVar9 = puVar9 + 3) {
        if (((*(int *)((long)puVar9 + 0x14) != 3) &&
            (lVar7 = (**(code **)(*(long *)*puVar9 + 0x18))(), lVar7 == param_1[2])) &&
           ((iVar5 = (**(code **)(*(long *)*puVar9 + 0x80))(), iVar5 == 2 &&
            ((iVar5 = (**(code **)(*(long *)*puVar9 + 0x10))(), iVar5 == 0 &&
             (*(int *)((long)puVar9 + 0x14) != 2)))))) {
          *param_4 = *param_4 | 8;
          break;
        }
      }
      if ((param_3 != 0) && (param_1[7] != 0)) {
        FUN_00cec6b0(&local_70);
        FUN_00cec6b0(&local_88,param_3);
        if (local_60 == local_78) {
          ppuVar11 = local_88;
          puVar9 = local_70;
          while (puVar9 != &local_68) {
            uVar6 = FUN_007e973c(puVar9 + 4,ppuVar11 + 4);
            if ((uVar6 & 1) == 0) goto LAB_00ceb5b4;
            puVar1 = (undefined8 *)puVar9[1];
            puVar8 = puVar9;
            if ((undefined8 *)puVar9[1] == (undefined8 *)0x0) {
              do {
                puVar9 = (undefined8 *)puVar8[2];
                bVar4 = puVar8 != (undefined8 *)*puVar9;
                puVar8 = puVar9;
              } while (bVar4);
            }
            else {
              do {
                puVar9 = puVar1;
                puVar1 = (undefined8 *)*puVar9;
              } while ((undefined8 *)*puVar9 != (undefined8 *)0x0);
            }
            ppuVar3 = (undefined8 **)ppuVar11[1];
            ppuVar10 = ppuVar11;
            if ((undefined8 **)ppuVar11[1] == (undefined8 **)0x0) {
              do {
                ppuVar11 = (undefined8 **)ppuVar10[2];
                bVar4 = ppuVar10 != (undefined8 **)*ppuVar11;
                ppuVar10 = ppuVar11;
              } while (bVar4);
            }
            else {
              do {
                ppuVar11 = ppuVar3;
                ppuVar3 = (undefined8 **)*ppuVar11;
              } while ((undefined8 **)*ppuVar11 != (undefined8 **)0x0);
            }
          }
          uVar2 = *param_4;
          local_38 = &local_88;
          FUN_00b8b8d8(&local_38,local_80);
          local_88 = &local_70;
          FUN_00b8b8d8(&local_88,local_68);
          if ((uVar2 & 1) != 0) {
            *param_4 = *param_4 | 2;
          }
        }
        else {
LAB_00ceb5b4:
          local_38 = &local_88;
          FUN_00b8b8d8(&local_38,local_80);
          local_88 = &local_70;
          FUN_00b8b8d8(&local_88,local_68);
        }
        if (*(long *)(param_1[7] + 0x98) != *(long *)(param_1[7] + 0xa0)) {
          *param_4 = *param_4 | 4;
        }
      }
    }
  }
  return;
}


// ===== 00ceb650  FUN_00ceb650 =====

void FUN_00ceb650(long *param_1,long *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *local_100 [2];
  code *local_f0;
  code *pcStack_e8;
  long *local_e0 [2];
  code *local_d0;
  code *pcStack_c8;
  long *local_c0 [2];
  code *local_b0;
  code *pcStack_a8;
  void *local_a0;
  long lStack_98;
  long local_90;
  undefined8 local_88;
  long *local_80;
  long *local_78 [2];
  code *local_68;
  undefined *local_60;
  long *local_58 [2];
  code *local_48;
  undefined *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_88 = param_3;
  local_80 = param_2;
  uVar4 = FUN_00417e08();
  if ((uVar4 & 1) == 0) {
    if (*(char *)((long)param_1 + 0x27) < '\0') {
      FUN_005478d8(&local_a0,param_1[2],param_1[3]);
    }
    else {
      lStack_98 = param_1[3];
      local_a0 = (void *)param_1[2];
      local_90 = param_1[4];
    }
    FUN_00623bb0(&DAT_001f4e90,"../../p2p/client/basic_port_allocator.cc",0x1c99,
                 "Adding allocated port for ",&local_a0);
    param_2 = local_80;
    if (local_90 < 0) {
      operator_delete(local_a0);
      param_2 = local_80;
    }
  }
  *(int *)(param_2 + 0xf) = (int)param_1[5];
  uVar3 = (**(code **)(*param_1 + 0x80))(param_1);
  (**(code **)(*param_2 + 0x148))(param_2,uVar3);
  *(byte *)((long)param_2 + 0x4c) = (byte)(*(uint *)(param_1 + 1) >> 9) & 1;
  puVar1 = (undefined8 *)param_1[0x34];
  if (puVar1 < (undefined8 *)param_1[0x35]) {
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *(undefined1 *)(puVar1 + 2) = 0;
    puVar5 = puVar1 + 3;
    *(undefined4 *)((long)puVar1 + 0x14) = 0;
    *puVar1 = param_2;
    puVar1[1] = local_88;
  }
  else {
    puVar5 = (undefined8 *)FUN_00ceecb8(param_1 + 0x33,&local_80,&local_88);
  }
  param_1[0x34] = (long)puVar5;
  local_b0 = FUN_004473ec;
  pcStack_a8 = FUN_00cef834;
  local_c0[0] = param_1;
  FUN_00cf9c50(local_80,param_1,local_c0);
  (*local_b0)(0,local_c0,local_c0);
  local_48 = FUN_00cef840;
  local_40 = &DAT_0025a570;
  local_58[0] = param_1;
  FUN_00cf9b84(local_80,param_1,local_58);
  if (*(code **)(local_40 + 8) != (code *)0x0) {
    (**(code **)(local_40 + 8))(local_58[0]);
  }
  local_d0 = FUN_004473ec;
  pcStack_c8 = FUN_00cef8d8;
  local_e0[0] = param_1;
  FUN_00cf9aec(local_80,param_1,local_e0);
  (*local_d0)(0,local_e0,local_e0);
  local_68 = FUN_00cef8e4;
  local_60 = &DAT_0025a590;
  local_78[0] = param_1;
  (**(code **)(*local_80 + 0xc0))(local_80,param_1,local_78);
  if (*(code **)(local_60 + 8) != (code *)0x0) {
    (**(code **)(local_60 + 8))(local_78[0]);
  }
  local_f0 = FUN_004473ec;
  pcStack_e8 = FUN_00cef8f0;
  local_100[0] = param_1;
  FUN_00cf9ce8(local_80,param_1,local_100);
  (*local_f0)(0,local_100,local_100);
  uVar4 = FUN_00417e08();
  if ((uVar4 & 1) == 0) {
    (**(code **)(*local_80 + 0x110))(&local_a0);
    FUN_00623bb0(&DAT_00223e94,"../../p2p/client/basic_port_allocator.cc",0x1d49,&local_a0,
                 ": Added port to allocator");
    if (local_90 < 0) {
      operator_delete(local_a0);
    }
  }
  (**(code **)(*local_80 + 0x50))();
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00ceb930  FUN_00ceb930 =====

/* WARNING: Removing unreachable block (ram,0x00ceba2c) */
/* WARNING: Removing unreachable block (ram,0x00ceba44) */

void FUN_00ceb930(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long **local_210;
  long **local_208;
  undefined1 *local_200;
  long *local_78 [3];
  long *local_60;
  long *local_58;
  undefined8 local_50;
  undefined1 uStack_41;
  
  for (puVar7 = (undefined8 *)param_1[0x33]; puVar7 != (undefined8 *)param_1[0x34];
      puVar7 = puVar7 + 3) {
    if ((long *)*puVar7 == param_2) goto LAB_00ceb980;
  }
  puVar7 = (undefined8 *)0x0;
LAB_00ceb980:
  uVar6 = FUN_00417e08();
  if ((uVar6 & 1) == 0) {
    local_210 = (long **)0x1bc002;
    local_208 = (long **)0x1dd1;
    local_200 = &uStack_41;
    (**(code **)(*param_2 + 0x110))(&local_60,param_2);
    FUN_00aff5b4(local_78,param_3,1);
    FUN_00623bb0(&DAT_0025987e,local_210,(ulong)local_208 & 0xffffffff,&local_60,
                 ": Gathered candidate: ",local_78);
  }
  if (*(int *)((long)puVar7 + 0x14) != 0) {
    uVar6 = FUN_004022fc();
    if ((uVar6 & 1) != 0) {
      return;
    }
    FUN_00623bb0(&DAT_001f4e98,"../../p2p/client/basic_port_allocator.cc",0x1dfa,
                 "Discarding candidate because port is already done gathering.");
    return;
  }
  uVar6 = FUN_00ce7ac8(param_1,param_3,param_2);
  if (((uVar6 & 1) == 0) || ((*(byte *)(puVar7 + 2) & 1) != 0)) {
    uVar5 = 0;
  }
  else {
    *(undefined1 *)(puVar7 + 2) = 1;
    iVar4 = (**(code **)(*param_2 + 0x10))(param_2);
    if (iVar4 == 3) {
      if (*(int *)((long)param_1 + 0x1cc) == 1) {
        uVar5 = FUN_00cebe78(param_1,param_2);
      }
      else {
        if (*(int *)((long)param_1 + 0x1cc) != 2) goto LAB_00cebb3c;
        uVar5 = FUN_00cebce4(param_1,puVar7);
      }
    }
    else {
LAB_00cebb3c:
      uVar5 = 0;
    }
    if (*(int *)((long)puVar7 + 0x14) != 3) {
      uVar6 = FUN_00417e08();
      if ((uVar6 & 1) == 0) {
        (**(code **)(*param_2 + 0x110))(&local_210,param_2);
        FUN_00623bb0(&DAT_00223e94,"../../p2p/client/basic_port_allocator.cc",0x1ed9,&local_210,
                     ": Port ready.");
        if ((long)local_200 < 0) {
          operator_delete(local_210);
        }
      }
      local_210 = &local_60;
      local_208 = local_78;
      local_78[0] = param_2;
      local_60 = param_1;
      FUN_007b6160(param_1 + 0xd,&local_210,FUN_00ceee04);
      FUN_00cfbda0(param_2);
    }
  }
  if ((*(char *)(puVar7 + 2) == '\x01') && (*(int *)((long)puVar7 + 0x14) - 4U < 0xfffffffe)) {
    uVar1 = *(uint *)(param_1 + 0x39);
    uVar6 = FUN_007e95f8(param_3 + 0x50);
    if ((uVar6 & 1) == 0) {
      uVar6 = FUN_00aff31c(param_3);
      if ((uVar6 & 1) == 0) {
        uVar6 = FUN_00aff2f4(param_3);
        if ((uVar6 & 1) != 0) {
          uVar1 = uVar1 >> 1;
          goto joined_r0x00cebb50;
        }
        uVar6 = FUN_00aff2e0(param_3);
        if ((uVar6 & 1) == 0) goto LAB_00cebaa8;
        if (((uVar1 >> 1 & 1) == 0) || (uVar6 = FUN_007e9674(param_3 + 0x50), (uVar6 & 1) != 0))
        goto joined_r0x00cebb50;
      }
      else {
        uVar1 = uVar1 >> 2;
joined_r0x00cebb50:
        if ((uVar1 & 1) == 0) goto LAB_00cebaa8;
      }
      local_60 = (long *)0x0;
      local_58 = (long *)0x0;
      local_50 = 0;
      FUN_00be4140(&local_210,param_1[0x29],param_3);
      local_58 = (long *)FUN_00b14508(&local_60,&local_210);
      FUN_00aff0f8(&local_210);
      local_210 = local_78;
      local_208 = &local_60;
      local_78[0] = param_1;
      FUN_007b6160(param_1 + 0x15,&local_210,FUN_00ceee24);
      plVar3 = local_60;
      plVar2 = local_58;
      if (local_60 != (long *)0x0) {
        while (plVar3 != plVar2) {
          plVar2 = plVar2 + -0x33;
          if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
          FUN_00aff0f8(plVar2);
        }
        local_58 = plVar3;
        operator_delete(local_60);
      }
      goto LAB_00cebad0;
    }
  }
LAB_00cebaa8:
  uVar6 = FUN_00417e08();
  if ((uVar6 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4e98,"../../p2p/client/basic_port_allocator.cc",0x1f31,
                 "Discarding candidate because it doesn\'t match filter.");
  }
LAB_00cebad0:
  if ((uVar5 & 1) != 0) {
    FUN_00cea568(param_1);
  }
  return;
}


// ===== 00cebce4  FUN_00cebce4 =====

undefined8 FUN_00cebce4(long param_1,long *param_2)

{
  size_t __n;
  size_t sVar1;
  undefined8 *__s1;
  undefined8 *__s2;
  long *plVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  void *local_58 [2];
  char cStack_41;
  
  lVar6 = (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2);
  plVar9 = *(long **)(param_1 + 0x198);
  plVar2 = *(long **)(param_1 + 0x1a0);
  if (plVar9 != plVar2) {
    do {
      lVar7 = (**(code **)(*(long *)*plVar9 + 0x18))();
      bVar3 = *(byte *)(lVar7 + 0x27);
      bVar4 = *(byte *)(lVar6 + 0x27);
      __n = *(size_t *)(lVar7 + 0x18);
      if (-1 < (char)bVar3) {
        __n = (ulong)bVar3;
      }
      sVar1 = *(size_t *)(lVar6 + 0x18);
      if (-1 < (char)bVar4) {
        sVar1 = (ulong)bVar4;
      }
      if (__n == sVar1) {
        __s1 = (undefined8 *)*(void **)(lVar7 + 0x10);
        if (-1 < (char)bVar3) {
          __s1 = (undefined8 *)(lVar7 + 0x10);
        }
        __s2 = (undefined8 *)*(void **)(lVar6 + 0x10);
        if (-1 < (char)bVar4) {
          __s2 = (undefined8 *)(lVar6 + 0x10);
        }
        iVar5 = memcmp(__s1,__s2,__n);
        if ((((iVar5 == 0) && (iVar5 = (**(code **)(*(long *)*plVar9 + 0x10))(), iVar5 == 3)) &&
            ((char)plVar9[2] == '\x01')) &&
           ((plVar9 != param_2 && ((*(uint *)((long)plVar9 + 0x14) & 0xfffffffe) != 2)))) {
          uVar8 = FUN_00417e08();
          if ((uVar8 & 1) == 0) {
            (**(code **)(*(long *)*param_2 + 0x110))(local_58);
            FUN_00623bb0(&DAT_001f4e90,"../../p2p/client/basic_port_allocator.cc",0x20b9,
                         "Port pruned: ",local_58);
            if (cStack_41 < '\0') {
              operator_delete(local_58[0]);
            }
          }
          *(undefined4 *)((long)param_2 + 0x14) = 3;
          if (*param_2 != 0) {
            FUN_00cfbdbc();
            return 1;
          }
          return 1;
        }
      }
      plVar9 = plVar9 + 3;
    } while (plVar9 != plVar2);
  }
  return 0;
}


// ===== 00cebe78  FUN_00cebe78 =====

undefined4 FUN_00cebe78(long param_1,long *param_2)

{
  size_t __n;
  size_t sVar1;
  undefined8 *__s2;
  long *plVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined4 uVar12;
  long *plVar13;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  long *local_48;
  
  lVar6 = (**(code **)(*param_2 + 0x18))(param_2);
  lVar9 = (long)*(char *)(lVar6 + 0x27);
  if (lVar9 < 0) {
    lVar7 = *(long *)(lVar6 + 0x10);
    lVar9 = *(long *)(lVar6 + 0x18);
  }
  else {
    lVar7 = lVar6 + 0x10;
  }
  lVar9 = FUN_00cec134(param_1,lVar7,lVar9);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../p2p/client/basic_port_allocator.cc",0x428,"best_turn_port != nullptr",
                 &DAT_001f5fa0);
  }
  plVar13 = *(long **)(param_1 + 0x198);
  plVar2 = *(long **)(param_1 + 0x1a0);
  local_78 = (undefined8 *)0x0;
  local_70 = (undefined8 *)0x0;
  local_68 = (undefined8 *)0x0;
  if (plVar13 == plVar2) {
    uVar12 = 0;
  }
  else {
    uVar12 = 0;
    do {
      lVar7 = (**(code **)(*(long *)*plVar13 + 0x18))();
      bVar3 = *(byte *)(lVar7 + 0x27);
      bVar4 = *(byte *)(lVar6 + 0x27);
      __n = *(size_t *)(lVar7 + 0x18);
      if (-1 < (char)bVar3) {
        __n = (ulong)bVar3;
      }
      sVar1 = *(size_t *)(lVar6 + 0x18);
      if (-1 < (char)bVar4) {
        sVar1 = (ulong)bVar4;
      }
      if (__n == sVar1) {
        puVar10 = (undefined8 *)*(void **)(lVar7 + 0x10);
        if (-1 < (char)bVar3) {
          puVar10 = (undefined8 *)(lVar7 + 0x10);
        }
        __s2 = (undefined8 *)*(void **)(lVar6 + 0x10);
        if (-1 < (char)bVar4) {
          __s2 = (undefined8 *)(lVar6 + 0x10);
        }
        iVar5 = memcmp(puVar10,__s2,__n);
        if ((((iVar5 == 0) && (iVar5 = (**(code **)(*(long *)*plVar13 + 0x10))(), iVar5 == 3)) &&
            (*(int *)((long)plVar13 + 0x14) != 3)) &&
           (iVar5 = FUN_00cec22c(*plVar13,lVar9), iVar5 < 0)) {
          if ((long *)*plVar13 == param_2) {
            *(undefined4 *)((long)plVar13 + 0x14) = 3;
            if (param_2 != (long *)0x0) {
              FUN_00cfbdbc();
            }
          }
          else {
            local_48 = plVar13;
            if (local_70 < local_68) {
              if (local_70 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
                std::__Cr::__libcpp_verbose_abort
                          ("%s",
                           "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                          );
              }
              *local_70 = plVar13;
              local_70 = local_70 + 1;
            }
            else {
              local_70 = (undefined8 *)FUN_00cef1b4(&local_78,&local_48);
            }
          }
          uVar12 = 1;
        }
      }
      plVar13 = plVar13 + 3;
    } while (plVar13 != plVar2);
    if (local_78 != local_70) {
      uVar8 = FUN_00417e08();
      if ((uVar8 & 1) == 0) {
        FUN_00623bb0(&DAT_001f6d4b,"../../p2p/client/basic_port_allocator.cc",0x21d9,"Prune ",
                     (long)local_70 - (long)local_78 >> 3," low-priority TURN ports");
      }
      FUN_00ce90f0(param_1,&local_78);
    }
    if (local_78 != (undefined8 *)0x0) {
      uVar11 = (ulong)((long)local_70 + (-8 - ((long)local_70 << 0x3d))) >> 3;
      uVar8 = (ulong)(((long)local_78 - (long)local_70 << 0x3d) - ((long)local_78 - (long)local_70))
              >> 3;
      if (uVar11 <= uVar8) {
        uVar8 = uVar11;
      }
      puVar10 = local_70;
      if ((1 < uVar8) && ((((int)local_78 - (int)local_70 | -(int)local_70) & 7U) == 0)) {
        uVar8 = uVar8 & 0x1ffffffffffffffe;
        puVar10 = local_70 + -uVar8;
        do {
          uVar8 = uVar8 - 2;
        } while (uVar8 != 0);
      }
      while (puVar10 != local_78) {
        puVar10 = puVar10 + -1;
        if (puVar10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      local_70 = local_78;
      operator_delete(local_78);
    }
  }
  return uVar12;
}


// ===== 00cec134  FUN_00cec134 =====

long FUN_00cec134(long param_1,void *param_2,size_t param_3)

{
  void *__s2;
  long *plVar1;
  int iVar2;
  long lVar3;
  size_t sVar4;
  long lVar5;
  long *plVar6;
  
  plVar6 = *(long **)(param_1 + 0x198);
  plVar1 = *(long **)(param_1 + 0x1a0);
  if (plVar6 == plVar1) {
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    do {
      lVar3 = (**(code **)(*(long *)*plVar6 + 0x18))();
      sVar4 = (size_t)*(char *)(lVar3 + 0x27);
      if ((long)sVar4 < 0) {
        __s2 = *(void **)(lVar3 + 0x10);
        sVar4 = *(size_t *)(lVar3 + 0x18);
      }
      else {
        __s2 = (void *)(lVar3 + 0x10);
      }
      if ((((param_3 == sVar4) && (iVar2 = memcmp(param_2,__s2,param_3), iVar2 == 0)) &&
          (iVar2 = (**(code **)(*(long *)*plVar6 + 0x10))(), iVar2 == 3)) &&
         ((((char)plVar6[2] == '\x01' && (*(int *)((long)plVar6 + 0x14) - 4U < 0xfffffffe)) &&
          ((lVar5 == 0 || (iVar2 = FUN_00cec22c(*plVar6,lVar5), 0 < iVar2)))))) {
        lVar5 = *plVar6;
      }
      plVar6 = plVar6 + 3;
    } while (plVar6 != plVar1);
  }
  return lVar5;
}


// ===== 00cec22c  FUN_00cec22c =====

int FUN_00cec22c(long *param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_60 [8];
  int local_58;
  
  iVar1 = (**(code **)(*param_1 + 0x80))();
  uVar4 = 2;
  uVar3 = uVar4;
  if (iVar1 != 0) {
    uVar3 = (uint)(iVar1 == 2);
  }
  iVar2 = (**(code **)(*param_2 + 0x80))(param_2);
  iVar1 = -2;
  if (iVar2 != 0) {
    iVar1 = -(uint)(iVar2 == 2);
  }
  iVar1 = iVar1 + uVar3;
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0x18))(param_1);
    FUN_00bca960(auStack_60);
    if (local_58 != 10) {
      uVar4 = (uint)(local_58 == 2);
    }
    (**(code **)(*param_2 + 0x18))(param_2);
    FUN_00bca960(auStack_60);
    iVar1 = -2;
    if (local_58 != 10) {
      iVar1 = -(uint)(local_58 == 2);
    }
    iVar1 = iVar1 + uVar4;
  }
  return iVar1;
}


// ===== 00cec314  FUN_00cec314 =====

void FUN_00cec314(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x1a0);
  for (plVar1 = *(long **)(param_1 + 0x198); plVar1 != plVar2; plVar1 = plVar1 + 3) {
    *(undefined4 *)((long)plVar1 + 0x14) = 3;
    if (*plVar1 != 0) {
      FUN_00cfbdbc();
    }
  }
  return;
}


// ===== 00cec370  FUN_00cec370 =====

void FUN_00cec370(long param_1,long *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *local_38 [2];
  char cStack_21;
  
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    (**(code **)(*param_2 + 0x110))(local_38,param_2);
    FUN_00623bb0(&DAT_00223e94,"../../p2p/client/basic_port_allocator.cc",0x2259,local_38,
                 ": Port completed gathering candidates.");
    if (cStack_21 < '\0') {
      operator_delete(local_38[0]);
    }
  }
  for (puVar2 = *(undefined8 **)(param_1 + 0x198); puVar2 != *(undefined8 **)(param_1 + 0x1a0);
      puVar2 = puVar2 + 3) {
    if ((long *)*puVar2 == param_2) goto LAB_00cec40c;
  }
  puVar2 = (undefined8 *)0x0;
LAB_00cec40c:
  if (*(int *)((long)puVar2 + 0x14) == 0) {
    *(undefined4 *)((long)puVar2 + 0x14) = 1;
    FUN_00cea568(param_1);
  }
  return;
}


// ===== 00cec438  FUN_00cec438 =====

void FUN_00cec438(long param_1,long *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *local_38 [2];
  char cStack_21;
  
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    (**(code **)(*param_2 + 0x110))(local_38,param_2);
    FUN_00623bb0(&DAT_00223e94,"../../p2p/client/basic_port_allocator.cc",0x22e9,local_38,
                 ": Port encountered error while gathering candidates.");
    if (cStack_21 < '\0') {
      operator_delete(local_38[0]);
    }
  }
  for (puVar2 = *(undefined8 **)(param_1 + 0x198); puVar2 != *(undefined8 **)(param_1 + 0x1a0);
      puVar2 = puVar2 + 3) {
    if ((long *)*puVar2 == param_2) goto LAB_00cec4d4;
  }
  puVar2 = (undefined8 *)0x0;
LAB_00cec4d4:
  if (*(int *)((long)puVar2 + 0x14) == 0) {
    *(undefined4 *)((long)puVar2 + 0x14) = 2;
    FUN_00cea568(param_1);
  }
  return;
}


// ===== 00cec500  FUN_00cec500 =====

void FUN_00cec500(long param_1,long *param_2)

{
  long *plVar1;
  size_t __n;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *__dest;
  void *local_70 [2];
  char cStack_59;
  char *local_58;
  ulong local_50;
  undefined1 *local_48;
  undefined1 uStack_21;
  
  __dest = *(long **)(param_1 + 0x198);
  plVar1 = *(long **)(param_1 + 0x1a0);
  if (__dest != plVar1) {
    __n = (long)plVar1 - (long)__dest;
    do {
      __n = __n - 0x18;
      if (param_2 == (long *)*__dest) {
        memmove(__dest,__dest + 3,__n);
        lVar2 = *(long *)(param_1 + 0x1a0);
        uVar3 = ((long)plVar1 - lVar2) * 0x1555555555555555 + 8U >> 3;
        uVar4 = lVar2 * -0x1555555555555555 - 8U >> 3;
        if (uVar4 <= uVar3) {
          uVar3 = uVar4;
        }
        if ((1 < uVar3) && ((-(int)lVar2 & 7U) == 0)) {
          uVar3 = uVar3 & 0x1ffffffffffffffe;
          lVar2 = lVar2 + uVar3 * -0x18;
          do {
            uVar3 = uVar3 - 2;
          } while (uVar3 != 0);
        }
        while (lVar2 != (long)__dest + __n) {
          lVar2 = lVar2 + -0x18;
          if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
        }
        *(size_t *)(param_1 + 0x1a0) = (long)__dest + __n;
        uVar3 = FUN_00417e08();
        if ((uVar3 & 1) != 0) {
          return;
        }
        local_58 = "../../p2p/client/basic_port_allocator.cc";
        local_50 = 0x2531;
        local_48 = &uStack_21;
        (**(code **)(*param_2 + 0x110))(local_70,param_2);
        FUN_00623bb0(&DAT_00256769,local_58,local_50 & 0xffffffff,local_70,
                     ": Removed port from allocator (",
                     (int)((ulong)(*(long *)(param_1 + 0x1a0) - *(long *)(param_1 + 0x198)) >> 3) *
                     -0x55555555," remaining)");
        if (-1 < cStack_59) {
          return;
        }
        operator_delete(local_70[0]);
        return;
      }
      __dest = __dest + 3;
    } while (__dest != plVar1);
  }
  return;
}


// ===== 00cec69c  FUN_00cec69c =====

void FUN_00cec69c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00cec6ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x110) + 0x58))();
  return;
}


// ===== 00cec6b0  FUN_00cec6b0 =====

void FUN_00cec6b0(long *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long local_28;
  
  uVar1 = FUN_007e8e30();
  if ((uVar1 & 1) == 0) {
    plVar5 = (long *)(param_2 + 0x50);
    plVar6 = plVar5;
    plVar4 = (long *)*plVar5;
    while (plVar4 != (long *)0x0) {
      uVar1 = FUN_007e97f4(param_2,plVar4 + 4);
      if ((uVar1 & 1) == 0) {
        uVar1 = FUN_007e97f4(plVar4 + 4,param_2);
        if ((uVar1 & 1) == 0) {
          if (((long *)*plVar6 != (long *)0x0) && ((long *)*plVar6 != plVar5)) goto LAB_00cec74c;
          break;
        }
        plVar6 = plVar4 + 1;
        plVar4 = (long *)plVar4[1];
      }
      else {
        plVar6 = plVar4;
        plVar4 = (long *)*plVar4;
      }
    }
    local_28 = param_2 + 0x48;
    FUN_00cefc98(&local_28,param_2,param_2);
  }
LAB_00cec74c:
  if ((*(long *)(param_2 + 0x58) == 0) || (*(char *)(param_2 + 0x90) != '\x01')) {
    FUN_00cede9c(param_2,0);
    FUN_00cede9c(param_2,1);
    lVar2 = *(long *)(param_2 + 0x58);
    param_1[2] = 0;
    plVar6 = param_1 + 1;
    *plVar6 = 0;
    *param_1 = (long)plVar6;
    if (lVar2 == 0) {
      return;
    }
    lVar2 = FUN_00be483c(param_1,*(undefined8 *)(param_2 + 0x50),param_1);
    param_1[1] = lVar2;
    *(long **)(lVar2 + 0x10) = plVar6;
    plVar6 = (long *)param_1[1];
    do {
      plVar4 = plVar6;
      plVar6 = (long *)*plVar4;
    } while ((long *)*plVar4 != (long *)0x0);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x50);
    plVar6 = param_1 + 1;
    *plVar6 = 0;
    *param_1 = (long)plVar6;
    param_1[2] = 0;
    lVar2 = FUN_00be483c(param_1,uVar3,param_1);
    *plVar6 = lVar2;
    *(long **)(lVar2 + 0x10) = plVar6;
    plVar6 = (long *)*plVar6;
    do {
      plVar4 = plVar6;
      plVar6 = (long *)*plVar4;
    } while ((long *)*plVar4 != (long *)0x0);
  }
  lVar2 = *(long *)(param_2 + 0x58);
  *param_1 = (long)plVar4;
  param_1[2] = lVar2;
  return;
}


// ===== 00cec818  FUN_00cec818 =====

void FUN_00cec818(long *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *local_60 [2];
  undefined8 local_50;
  code *pcStack_48;
  undefined1 local_24 [3];
  undefined1 uStack_21;
  
  if (param_2 == (int)param_1[0x16]) {
    uVar4 = FUN_00417e08();
    if ((uVar4 & 1) == 0) {
      FUN_00bcc3dc(local_60,param_1[2]);
      if (3 < *(uint *)(param_1 + 0x11)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(0x5512,0xceca00);
        (*pcVar3)();
      }
      FUN_00623bb0(&DAT_0025a5b0,"../../p2p/client/basic_port_allocator.cc",0x2be1,local_60,
                   ": Allocation Phase=",
                   &DAT_0025a4f0 + *(int *)(&DAT_0025a4f0 + (ulong)*(uint *)(param_1 + 0x11) * 4));
      if (local_50._7_1_ < '\0') {
        operator_delete(local_60[0]);
      }
    }
    iVar1 = (int)param_1[0x11];
    if (iVar1 == 2) {
      FUN_00ced2b8(param_1);
      *(undefined4 *)(param_1 + 8) = 3;
    }
    else if (iVar1 == 1) {
      FUN_00ced1d8(param_1);
    }
    else if (iVar1 == 0) {
      FUN_00ceca00(param_1);
      FUN_00cecf30(param_1);
    }
    if ((int)param_1[8] == 1) {
      lVar7 = param_1[0x17];
      *(int *)(param_1 + 0x11) = (int)param_1[0x11] + 1;
      plVar6 = *(long **)(*param_1 + 0x150);
      if (lVar7 != 0) {
        FUN_00d0f740(1,lVar7);
      }
      lVar2 = param_1[0x16];
      plVar5 = (long *)operator_new(0x30);
      *plVar5 = lVar7;
      plVar5[2] = (long)param_1;
      *(int *)(plVar5 + 3) = (int)lVar2;
      param_1 = (long *)*param_1;
      plVar5[4] = (long)FUN_004473ec;
      plVar5[5] = (long)FUN_00cef91c;
      lVar7 = (**(code **)(*param_1 + 0x98))();
      local_50 = FUN_005db390;
      pcStack_48 = FUN_005db348;
      local_24[0] = 0;
      local_60[0] = plVar5;
      (**(code **)(*plVar6 + 0x10))
                (plVar6,local_60,(ulong)*(uint *)(lVar7 + 0x1c) * 1000,local_24,&uStack_21);
      (*local_50)(0,local_60,local_60);
    }
    else {
      *(int *)(param_1 + 0x16) = (int)param_1[0x16] + 1;
      (*(code *)param_1[0x14])(param_1 + 0x12);
    }
  }
  return;
}


// ===== 00ceca00  FUN_00ceca00 =====

void FUN_00ceca00(long *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long **local_120;
  ulong uStack_118;
  ulong local_110;
  long *local_108;
  undefined8 local_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long local_e0;
  long local_d8;
  long lStack_d0;
  long *local_c8;
  long lStack_c0;
  long *local_b8;
  long lStack_b0;
  long **local_a8;
  ulong uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long *local_78 [2];
  code *local_68;
  undefined *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  uVar1 = *(uint *)((long)param_1 + 0x44);
  if ((uVar1 & 1) == 0) {
    if (((uVar1 >> 8 & 1) == 0) || (param_1[0xc] == 0)) {
      lVar6 = (**(code **)(*(long *)*param_1 + 0x98))();
      local_108 = *(long **)(lVar6 + 0xe8);
      if (local_108 != (long *)0x0) {
        FUN_00d0f740(1,local_108 + 1);
      }
      lStack_f8 = *(long *)(lVar6 + 0xf8);
      local_100 = *(undefined8 *)(lVar6 + 0xf0);
      uStack_e8 = *(undefined8 *)(lVar6 + 0x108);
      uStack_f0 = *(undefined8 *)(lVar6 + 0x100);
      plVar7 = (long *)*param_1;
      lStack_d0 = param_1[2];
      local_e0 = plVar7[0x2a];
      local_d8 = plVar7[0x2b];
      lStack_c0 = (long)*(char *)((long)plVar7 + 0x47);
      if (lStack_c0 < 0) {
        local_c8 = (long *)plVar7[6];
        lStack_c0 = plVar7[7];
      }
      else {
        local_c8 = plVar7 + 6;
      }
      lStack_b0 = (long)*(char *)((long)plVar7 + 0x5f);
      if (lStack_b0 < 0) {
        local_b8 = (long *)plVar7[9];
        lStack_b0 = plVar7[10];
      }
      else {
        local_b8 = plVar7 + 9;
      }
      if (*(char *)((long)plVar7 + 0x27) < '\0') {
        FUN_005478d8(&local_120,plVar7[2],plVar7[3]);
        plVar7 = (long *)*param_1;
      }
      else {
        local_110 = plVar7[4];
        uStack_118 = plVar7[3];
        local_120 = (long **)plVar7[2];
      }
      uStack_a0 = uStack_118;
      local_a8 = local_120;
      if (-1 < (long)local_110) {
        uStack_a0 = local_110 >> 0x38;
        local_a8 = (long **)&local_120;
      }
      lVar6 = (**(code **)(*plVar7 + 0x98))();
      local_98 = *(undefined8 *)(lVar6 + 0x138);
      lVar6 = (**(code **)(*(long *)*param_1 + 0x98))();
      uVar2 = *(undefined4 *)(lVar6 + 0x10);
      lVar6 = (**(code **)(*(long *)*param_1 + 0x98))((long *)*param_1);
      uVar3 = *(undefined4 *)(lVar6 + 0x14);
      lVar6 = (**(code **)(*(long *)*param_1 + 0x98))((long *)*param_1);
      uStack_88 = *(undefined8 *)(lVar6 + 0xb0);
      local_90 = *(undefined8 *)(lVar6 + 0xa8);
      plVar7 = (long *)operator_new(0x350);
      FUN_00cfdd98(plVar7,&local_108,0,uVar2,uVar3,(uVar1 & 0x800) == 0);
    }
    else {
      lVar6 = (**(code **)(*(long *)*param_1 + 0x98))();
      local_108 = *(long **)(lVar6 + 0xe8);
      if (local_108 != (long *)0x0) {
        FUN_00d0f740(1,local_108 + 1);
      }
      lStack_f8 = *(long *)(lVar6 + 0xf8);
      local_100 = *(undefined8 *)(lVar6 + 0xf0);
      uStack_e8 = *(undefined8 *)(lVar6 + 0x108);
      uStack_f0 = *(undefined8 *)(lVar6 + 0x100);
      plVar7 = (long *)*param_1;
      lStack_d0 = param_1[2];
      local_e0 = plVar7[0x2a];
      local_d8 = plVar7[0x2b];
      lStack_c0 = (long)*(char *)((long)plVar7 + 0x47);
      if (lStack_c0 < 0) {
        local_c8 = (long *)plVar7[6];
        lStack_c0 = plVar7[7];
      }
      else {
        local_c8 = plVar7 + 6;
      }
      lStack_b0 = (long)*(char *)((long)plVar7 + 0x5f);
      if (lStack_b0 < 0) {
        local_b8 = (long *)plVar7[9];
        lStack_b0 = plVar7[10];
      }
      else {
        local_b8 = plVar7 + 9;
      }
      if (*(char *)((long)plVar7 + 0x27) < '\0') {
        FUN_005478d8(&local_120,plVar7[2],plVar7[3]);
        plVar7 = (long *)*param_1;
      }
      else {
        local_110 = plVar7[4];
        uStack_118 = plVar7[3];
        local_120 = (long **)plVar7[2];
      }
      uStack_a0 = uStack_118;
      local_a8 = local_120;
      if (-1 < (long)local_110) {
        uStack_a0 = local_110 >> 0x38;
        local_a8 = (long **)&local_120;
      }
      lVar6 = (**(code **)(*plVar7 + 0x98))();
      local_98 = *(undefined8 *)(lVar6 + 0x138);
      lVar11 = param_1[0xc];
      lVar6 = (**(code **)(*(long *)*param_1 + 0x98))();
      uStack_88 = *(undefined8 *)(lVar6 + 0xb0);
      local_90 = *(undefined8 *)(lVar6 + 0xa8);
      plVar7 = (long *)operator_new(0x350);
      FUN_00cfdc80(plVar7,&local_108,0,lVar11,(uVar1 & 0x800) == 0);
    }
    FUN_00cfe91c(plVar7,&local_90);
    uVar8 = FUN_00cfdea4(plVar7);
    if (((uVar8 & 1) == 0) && (plVar7 != (long *)0x0)) {
      (**(code **)(*plVar7 + 8))(plVar7);
      plVar7 = (long *)0x0;
    }
    plVar10 = local_108;
    if ((local_108 != (long *)0x0) && (iVar5 = FUN_00d0f7a0(0xffffffff,local_108 + 1), iVar5 == 1))
    {
      (**(code **)(*plVar10 + 8))(plVar10);
    }
    if ((long)local_110 < 0) {
      operator_delete(local_120);
    }
    if (plVar7 != (long *)0x0) {
      lVar6 = (**(code **)(*(long *)*param_1 + 0x98))();
      (**(code **)(*plVar7 + 0x30))(plVar7,*(undefined8 *)(lVar6 + 0xe0));
      if ((*(byte *)((long)param_1 + 0x45) & 1) != 0) {
        param_1[0xd] = (long)plVar7;
        local_68 = FUN_00cef930;
        local_60 = &DAT_0025a5b8;
        local_78[0] = param_1;
        (**(code **)(*plVar7 + 0xc0))(plVar7,param_1,local_78);
        if (*(code **)(local_60 + 8) != (code *)0x0) {
          (**(code **)(local_60 + 8))(local_78[0]);
        }
        if (((*(byte *)((long)param_1 + 0x44) >> 1 & 1) == 0) && (param_1[7] != 0)) {
          FUN_00cec6b0(&local_108);
          lVar6 = lStack_f8;
          local_120 = &local_108;
          FUN_00b8b8d8(&local_120,local_100);
          if (lVar6 != 0) {
            uVar8 = FUN_00417e08();
            if ((uVar8 & 1) == 0) {
              FUN_00623bb0(&DAT_001f4e98,"../../p2p/client/basic_port_allocator.cc",0x2e99,
                           "AllocationSequence: UDPPort will be handling the STUN candidate generation."
                          );
            }
            FUN_00cec6b0(&local_108,param_1[7]);
            if ((long **)(plVar7 + 0x4c) != &local_108) {
              if (plVar7[0x4e] == 0) {
                lVar6 = FUN_00be483c(plVar7 + 0x4c,local_100,plVar7 + 0x4c);
                plVar10 = plVar7 + 0x4d;
                plVar7[0x4d] = lVar6;
                if (lVar6 != 0) {
                  *(long **)(lVar6 + 0x10) = plVar10;
                  plVar9 = (long *)*plVar10;
                  goto LAB_00ceceb8;
                }
              }
              else {
                plVar9 = (long *)FUN_00be4748(plVar7 + 0x4c,plVar7[0x4d],local_100,0,plVar7 + 0x4c);
                plVar7[0x4d] = (long)plVar9;
LAB_00ceceb8:
                if (plVar9 == (long *)0x0) {
                  plVar10 = plVar7 + 0x4d;
                }
                else {
                  do {
                    plVar10 = plVar9;
                    plVar9 = (long *)*plVar10;
                  } while ((long *)*plVar10 != (long *)0x0);
                }
              }
              plVar7[0x4c] = (long)plVar10;
              plVar7[0x4e] = lStack_f8;
            }
            local_120 = &local_108;
            FUN_00b8b8d8(&local_120,local_100);
          }
        }
      }
      FUN_00ceb650(*param_1,plVar7,param_1);
    }
  }
  else {
    uVar8 = FUN_0044075c();
    if ((uVar8 & 1) == 0) {
      if (*(long *)(lVar4 + 0x28) == local_58) {
        FUN_00623bb0(&DAT_001f4e98,"../../p2p/client/basic_port_allocator.cc",0x2d10,
                     "AllocationSequence: UDP ports disabled, skipping.");
        return;
      }
      goto LAB_00cecf2c;
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
LAB_00cecf2c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00cecf30  FUN_00cecf30 =====

void FUN_00cecf30(long *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long ***ppplVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined1 auStack_e8 [8];
  undefined8 local_e0;
  long ****local_d0;
  ulong uStack_c8;
  ulong local_c0;
  long ***local_b0;
  undefined8 local_a8;
  long lStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  long local_88;
  long local_80;
  long lStack_78;
  long *local_70;
  long lStack_68;
  long *local_60;
  long lStack_58;
  long ****local_50;
  ulong uStack_48;
  undefined8 local_40;
  undefined1 *local_38;
  
  if ((*(uint *)((long)param_1 + 0x44) >> 1 & 1) == 0) {
    if ((*(uint *)((long)param_1 + 0x44) >> 8 & 1) == 0) {
      if (param_1[7] != 0) {
        FUN_00cec6b0(&local_b0);
        local_d0 = &local_b0;
        FUN_00b8b8d8(&local_d0,local_a8);
        if (lStack_a0 != 0) {
          lVar5 = (**(code **)(*(long *)*param_1 + 0x98))();
          local_b0 = *(long ****)(lVar5 + 0xe8);
          if ((long ****)local_b0 != (long ****)0x0) {
            FUN_00d0f740(1,(long ****)local_b0 + 1);
          }
          lStack_a0 = *(undefined8 *)(lVar5 + 0xf8);
          local_a8 = *(undefined8 *)(lVar5 + 0xf0);
          uStack_90 = *(undefined8 *)(lVar5 + 0x108);
          local_98 = *(undefined8 *)(lVar5 + 0x100);
          plVar6 = (long *)*param_1;
          lStack_78 = param_1[2];
          local_88 = plVar6[0x2a];
          local_80 = plVar6[0x2b];
          lStack_68 = (long)*(char *)((long)plVar6 + 0x47);
          if (lStack_68 < 0) {
            local_70 = (long *)plVar6[6];
            lStack_68 = plVar6[7];
          }
          else {
            local_70 = plVar6 + 6;
          }
          lStack_58 = (long)*(char *)((long)plVar6 + 0x5f);
          if (lStack_58 < 0) {
            local_60 = (long *)plVar6[9];
            lStack_58 = plVar6[10];
          }
          else {
            local_60 = plVar6 + 9;
          }
          if (*(char *)((long)plVar6 + 0x27) < '\0') {
            FUN_005478d8(&local_d0,plVar6[2],plVar6[3]);
            plVar6 = (long *)*param_1;
          }
          else {
            local_c0 = plVar6[4];
            uStack_c8 = plVar6[3];
            local_d0 = (long ****)plVar6[2];
          }
          uStack_48 = uStack_c8;
          local_50 = local_d0;
          if (-1 < (long)local_c0) {
            uStack_48 = local_c0 >> 0x38;
            local_50 = (long ****)&local_d0;
          }
          lVar5 = (**(code **)(*plVar6 + 0x98))();
          local_40 = *(undefined8 *)(lVar5 + 0x138);
          lVar5 = (**(code **)(*(long *)*param_1 + 0x98))();
          uVar1 = *(undefined4 *)(lVar5 + 0x10);
          lVar5 = (**(code **)(*(long *)*param_1 + 0x98))((long *)*param_1);
          uVar2 = *(undefined4 *)(lVar5 + 0x14);
          FUN_00cec6b0(auStack_e8,param_1[7]);
          lVar5 = (**(code **)(*(long *)*param_1 + 0x98))();
          plVar6 = (long *)FUN_00cff820(&local_b0,uVar1,uVar2,auStack_e8,
                                        *(undefined8 *)(lVar5 + 0xa8),*(undefined8 *)(lVar5 + 0xb0))
          ;
          local_38 = auStack_e8;
          FUN_00b8b8d8(&local_38,local_e0);
          ppplVar3 = local_b0;
          if (((long ****)local_b0 != (long ****)0x0) &&
             (iVar4 = FUN_00d0f7a0(0xffffffff,local_b0 + 1), iVar4 == 1)) {
            (*(code *)(*ppplVar3)[1])(ppplVar3);
          }
          if ((long)local_c0 < 0) {
            operator_delete(local_d0);
          }
          if (plVar6 == (long *)0x0) {
            return;
          }
          lVar5 = (**(code **)(*(long *)*param_1 + 0x98))();
          (**(code **)(*plVar6 + 0x30))(plVar6,*(undefined8 *)(lVar5 + 0xe0));
          FUN_00ceb650(*param_1,plVar6,param_1);
          return;
        }
      }
      uVar7 = FUN_004022fc();
      if ((uVar7 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../p2p/client/basic_port_allocator.cc",0x3012,
                     "AllocationSequence: No STUN server configured, skipping.");
      }
    }
  }
  else {
    uVar7 = FUN_0044075c();
    if ((uVar7 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../p2p/client/basic_port_allocator.cc",0x2fc8,
                   "AllocationSequence: STUN ports disabled, skipping.");
      return;
    }
  }
  return;
}


// ===== 00ced1d8  FUN_00ced1d8 =====

void FUN_00ced1d8(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  
  if ((*(byte *)(param_1 + 0x44) >> 2 & 1) == 0) {
    lVar5 = *(long *)(param_1 + 0x38);
    if (lVar5 != 0) {
      lVar6 = *(long *)(lVar5 + 0x98);
      lVar5 = *(long *)(lVar5 + 0xa0);
      if (lVar6 != lVar5) {
        iVar1 = (int)((ulong)(lVar5 - lVar6) >> 5) * -0x33333333;
        do {
          FUN_00ced4e4(param_1,lVar6,iVar1);
          lVar6 = lVar6 + 0xa0;
          iVar1 = iVar1 + -1;
        } while (lVar6 != lVar5);
        return;
      }
    }
    uVar2 = FUN_004022fc();
    if ((uVar2 & 1) == 0) {
      pcVar4 = "AllocationSequence: No relay server configured, skipping.";
      uVar3 = 0x3142;
LAB_00ced2a4:
      FUN_00623bb0(&DAT_001f4e98,"../../p2p/client/basic_port_allocator.cc",uVar3,pcVar4);
      return;
    }
  }
  else {
    uVar2 = FUN_0044075c();
    if ((uVar2 & 1) == 0) {
      pcVar4 = "AllocationSequence: Relay ports disabled, skipping.";
      uVar3 = 0x30f0;
      goto LAB_00ced2a4;
    }
  }
  return;
}


// ===== 00ced2b8  FUN_00ced2b8 =====

void FUN_00ced2b8(long *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  undefined1 *local_d0;
  ulong uStack_c8;
  ulong local_c0;
  long *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long local_90;
  long local_88;
  long lStack_80;
  long *local_78;
  long lStack_70;
  long *local_68;
  long lStack_60;
  undefined1 *local_58;
  ulong uStack_50;
  undefined8 local_48;
  
  if ((*(byte *)((long)param_1 + 0x44) >> 3 & 1) == 0) {
    lVar5 = (**(code **)(*(long *)*param_1 + 0x98))();
    local_b8 = *(long **)(lVar5 + 0xe8);
    if (local_b8 != (long *)0x0) {
      FUN_00d0f740(1,local_b8 + 1);
    }
    uStack_a8 = *(undefined8 *)(lVar5 + 0xf8);
    local_b0 = *(undefined8 *)(lVar5 + 0xf0);
    uStack_98 = *(undefined8 *)(lVar5 + 0x108);
    uStack_a0 = *(undefined8 *)(lVar5 + 0x100);
    plVar6 = (long *)*param_1;
    lStack_80 = param_1[2];
    local_90 = plVar6[0x2a];
    local_88 = plVar6[0x2b];
    lStack_70 = (long)*(char *)((long)plVar6 + 0x47);
    if (lStack_70 < 0) {
      local_78 = (long *)plVar6[6];
      lStack_70 = plVar6[7];
    }
    else {
      local_78 = plVar6 + 6;
    }
    lStack_60 = (long)*(char *)((long)plVar6 + 0x5f);
    if (lStack_60 < 0) {
      local_68 = (long *)plVar6[9];
      lStack_60 = plVar6[10];
    }
    else {
      local_68 = plVar6 + 9;
    }
    if (*(char *)((long)plVar6 + 0x27) < '\0') {
      FUN_005478d8(&local_d0,plVar6[2],plVar6[3]);
      plVar6 = (long *)*param_1;
    }
    else {
      local_c0 = plVar6[4];
      uStack_c8 = plVar6[3];
      local_d0 = (undefined1 *)plVar6[2];
    }
    local_48 = 0;
    uStack_50 = uStack_c8;
    local_58 = local_d0;
    if (-1 < (long)local_c0) {
      uStack_50 = local_c0 >> 0x38;
      local_58 = (undefined1 *)&local_d0;
    }
    lVar5 = (**(code **)(*plVar6 + 0x98))();
    uVar1 = *(undefined4 *)(lVar5 + 0x10);
    lVar5 = (**(code **)(*(long *)*param_1 + 0x98))((long *)*param_1);
    uVar2 = *(undefined4 *)(lVar5 + 0x14);
    lVar5 = (**(code **)(*(long *)*param_1 + 0x98))((long *)*param_1);
    uVar3 = *(undefined1 *)(lVar5 + 0x20);
    plVar8 = (long *)operator_new(0x2b0);
    FUN_00d00a00(plVar8,&local_b8,uVar1,uVar2,uVar3);
    plVar6 = local_b8;
    if ((local_b8 != (long *)0x0) && (iVar4 = FUN_00d0f7a0(0xffffffff,local_b8 + 1), iVar4 == 1)) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
    if ((long)local_c0 < 0) {
      operator_delete(local_d0);
    }
    if (plVar8 != (long *)0x0) {
      lVar5 = (**(code **)(*(long *)*param_1 + 0x98))();
      (**(code **)(*plVar8 + 0x30))(plVar8,*(undefined8 *)(lVar5 + 0xe0));
      FUN_00ceb650(*param_1,plVar8,param_1);
    }
  }
  else {
    uVar7 = FUN_0044075c();
    if ((uVar7 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../p2p/client/basic_port_allocator.cc",0x2f08,
                   "AllocationSequence: TCP ports disabled, skipping.");
      return;
    }
  }
  return;
}


// ===== 00ced4e4  FUN_00ced4e4 =====

/* WARNING: Removing unreachable block (ram,0x00ced73c) */
/* WARNING: Removing unreachable block (ram,0x00ced8f4) */
/* WARNING: Removing unreachable block (ram,0x00ced61c) */
/* WARNING: Removing unreachable block (ram,0x00ced754) */

void FUN_00ced4e4(long *param_1,long *param_2,undefined4 param_3)

{
  undefined1 **ppuVar1;
  long *plVar2;
  undefined4 uVar3;
  byte bVar4;
  long lVar5;
  undefined1 **ppuVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  long *local_1b0;
  undefined1 *puStack_1a8;
  undefined1 *local_1a0;
  undefined1 *puStack_198;
  undefined1 *puStack_190;
  undefined1 *local_188;
  undefined1 *puStack_180;
  undefined1 *puStack_178;
  undefined1 *puStack_170;
  long *plStack_168;
  undefined1 *local_160;
  undefined1 *puStack_158;
  undefined1 *local_150;
  undefined1 *local_148;
  undefined1 *puStack_140;
  undefined1 *puStack_138;
  long *plStack_130;
  undefined1 *puStack_128;
  undefined4 local_120;
  int iStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined1 *local_108;
  undefined1 local_f8 [24];
  undefined1 local_e0 [31];
  undefined1 uStack_c1;
  long *local_c0;
  undefined8 uStack_b8;
  undefined1 *local_b0;
  char *local_a0;
  long **pplStack_98;
  long *local_90 [2];
  code *local_80;
  undefined *local_78;
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  lVar12 = *param_2;
  if (lVar12 != param_2[1]) {
    do {
      if (((*(byte *)((long)param_1 + 0x45) >> 4 & 1) == 0) || (*(int *)(lVar12 + 0x48) != 0)) {
        lVar8 = FUN_007e8ea8(lVar12);
        iVar7 = *(int *)(lVar8 + 8);
        FUN_00bca960(&local_1b0,param_1[2]);
        if ((iVar7 == 0) || (iVar7 == (int)puStack_1a8)) {
          puStack_198 = &DAT_aaaaaaaaaaaaaaaa;
          local_1a0 = &DAT_aaaaaaaaaaaaaaaa;
          local_188 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_190 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_178 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_180 = &DAT_aaaaaaaaaaaaaaaa;
          plStack_168 = (long *)&DAT_aaaaaaaaaaaaaaaa;
          puStack_170 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_158 = &DAT_aaaaaaaaaaaaaaaa;
          local_160 = &DAT_aaaaaaaaaaaaaaaa;
          local_148 = &DAT_aaaaaaaaaaaaaaaa;
          local_150 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_140 = &DAT_aaaaaaaaaaaaaaaa;
          puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
          plStack_130 = (long *)&DAT_aaaaaaaaaaaaaaaa;
          uStack_118 = 0xaaaaaaaa;
          uStack_114 = 0xaaaaaaaa;
          local_120 = 0xaaaaaaaa;
          iStack_11c = 0xaaaaaaaa;
          local_108 = &DAT_aaaaaaaaaaaaaaaa;
          local_110 = 0xaaaaaaaa;
          uStack_10c = 0xaaaaaaaa;
          puStack_1a8 = &DAT_aaaaaaaaaaaaaaaa;
          local_1b0 = (long *)&DAT_aaaaaaaaaaaaaaaa;
          lVar8 = (**(code **)(*(long *)*param_1 + 0x98))();
          local_1b0 = *(long **)(lVar8 + 0xe8);
          if (local_1b0 != (long *)0x0) {
            FUN_00d0f740(1,local_1b0 + 1);
          }
          local_1a0 = *(undefined1 **)(lVar8 + 0xf8);
          puStack_1a8 = *(undefined1 **)(lVar8 + 0xf0);
          puStack_190 = *(undefined1 **)(lVar8 + 0x108);
          puStack_198 = *(undefined1 **)(lVar8 + 0x100);
          lVar8 = *param_1;
          local_108 = (undefined1 *)0x0;
          puStack_178 = (undefined1 *)param_1[2];
          puStack_170 = (undefined1 *)0x0;
          local_160 = (undefined1 *)0x0;
          plStack_168 = (long *)0x0;
          local_150 = (undefined1 *)0x0;
          puStack_158 = (undefined1 *)0x0;
          puStack_140 = (undefined1 *)0x0;
          local_148 = (undefined1 *)0x0;
          plStack_130 = (long *)0x0;
          puStack_138 = (undefined1 *)0x0;
          local_120 = 0;
          puStack_128 = (undefined1 *)0x0;
          uStack_114 = 0;
          local_110 = 0;
          iStack_11c = 0;
          uStack_118 = 0;
          local_188 = *(undefined1 **)(lVar8 + 0x150);
          puStack_180 = *(undefined1 **)(lVar8 + 0x158);
          if (&local_160 != (undefined1 **)(lVar8 + 0x30)) {
            if (*(char *)(lVar8 + 0x47) < '\0') {
              FUN_00547fc0(&local_160,*(undefined8 *)(lVar8 + 0x30),*(undefined8 *)(lVar8 + 0x38));
              lVar8 = *param_1;
            }
            else {
              local_150 = *(undefined1 **)(lVar8 + 0x40);
              puStack_158 = *(undefined1 **)(lVar8 + 0x38);
              local_160 = *(undefined1 **)(lVar8 + 0x30);
            }
          }
          ppuVar1 = (undefined1 **)(lVar8 + 0x48);
          if (&local_148 != ppuVar1) {
            bVar4 = *(byte *)(lVar8 + 0x5f);
            if ((long)puStack_138 < 0) {
              uVar9 = *(ulong *)(lVar8 + 0x50);
              ppuVar6 = *(undefined1 ***)(lVar8 + 0x48);
              if (-1 < (char)bVar4) {
                uVar9 = (ulong)bVar4;
                ppuVar6 = ppuVar1;
              }
              FUN_00547f08(&local_148,ppuVar6,uVar9);
            }
            else if ((char)bVar4 < '\0') {
              FUN_00547fc0(&local_148,*(undefined8 *)(lVar8 + 0x48),*(undefined8 *)(lVar8 + 0x50));
            }
            else {
              puStack_138 = *(undefined1 **)(lVar8 + 0x58);
              puStack_140 = *(undefined1 **)(lVar8 + 0x50);
              local_148 = *ppuVar1;
            }
          }
          lVar8 = *param_1;
          if (*(char *)(lVar8 + 0x27) < '\0') {
            FUN_005478d8(&local_c0,*(undefined8 *)(lVar8 + 0x10),*(undefined8 *)(lVar8 + 0x18));
          }
          else {
            local_b0 = *(undefined1 **)(lVar8 + 0x20);
            uStack_b8 = *(undefined8 *)(lVar8 + 0x18);
            local_c0 = *(long **)(lVar8 + 0x10);
          }
          if (iStack_11c < 0) {
            operator_delete(plStack_130);
          }
          puStack_128 = (undefined1 *)uStack_b8;
          plStack_130 = local_c0;
          local_120 = SUB84(local_b0,0);
          iStack_11c = (int)((ulong)local_b0 >> 0x20);
          puStack_170 = (undefined1 *)lVar12;
          plStack_168 = param_2;
          lVar8 = (**(code **)(*(long *)*param_1 + 0x98))();
          uStack_118 = (undefined4)*(undefined8 *)(lVar8 + 0xa0);
          uStack_114 = (undefined4)((ulong)*(undefined8 *)(lVar8 + 0xa0) >> 0x20);
          local_110 = param_3;
          lVar8 = (**(code **)(*(long *)*param_1 + 0x98))((long *)*param_1);
          local_108 = *(undefined1 **)(lVar8 + 0x138);
          if ((((*(byte *)((long)param_1 + 0x45) & 1) == 0) || (*(int *)(lVar12 + 0x48) != 0)) ||
             (param_1[0xc] == 0)) {
            lVar8 = (**(code **)(*(long *)*param_1 + 0x98))();
            plVar13 = *(long **)(lVar8 + 0x130);
            lVar8 = (**(code **)(*(long *)*param_1 + 0x98))((long *)*param_1);
            uVar3 = *(undefined4 *)(lVar8 + 0x10);
            lVar8 = (**(code **)(*(long *)*param_1 + 0x98))((long *)*param_1);
            plVar13 = (long *)(**(code **)(*plVar13 + 0x18))
                                        (plVar13,&local_1b0,uVar3,*(undefined4 *)(lVar8 + 0x14));
            if (plVar13 != (long *)0x0) goto LAB_00ced868;
            uVar9 = FUN_004022fc();
            if ((uVar9 & 1) == 0) {
              FUN_007e924c(&local_c0,puStack_170);
              uVar11 = 0x33ba;
              goto LAB_00ced8e0;
            }
          }
          else {
            lVar8 = (**(code **)(*(long *)*param_1 + 0x98))();
            plVar13 = (long *)(**(code **)(**(long **)(lVar8 + 0x130) + 0x10))
                                        (*(long **)(lVar8 + 0x130),&local_1b0,param_1[0xc]);
            if (plVar13 == (long *)0x0) {
              uVar9 = FUN_004022fc();
              if ((uVar9 & 1) == 0) {
                FUN_007e924c(&local_c0,puStack_170);
                uVar11 = 0x333a;
LAB_00ced8e0:
                FUN_00623bb0(&DAT_001f4e90,"../../p2p/client/basic_port_allocator.cc",uVar11,
                             "Failed to create relay port with ",&local_c0);
              }
            }
            else {
              plVar2 = (long *)param_1[0xf];
              local_c0 = plVar13;
              if (plVar2 < (long *)param_1[0x10]) {
                if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  std::__Cr::__libcpp_verbose_abort
                            ("%s",
                             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                            );
                }
                plVar10 = plVar2 + 1;
                *plVar2 = (long)plVar13;
              }
              else {
                plVar10 = (long *)FUN_00cef2f8(param_1 + 0xe,&local_c0);
              }
              param_1[0xf] = (long)plVar10;
              local_80 = FUN_00cefae4;
              local_78 = &DAT_0025a5d8;
              local_90[0] = param_1;
              (**(code **)(*plVar13 + 0xc0))(plVar13,param_1,local_90);
              if (*(code **)(local_78 + 8) != (code *)0x0) {
                (**(code **)(local_78 + 8))(local_90[0]);
              }
LAB_00ced868:
              lVar8 = (**(code **)(*(long *)*param_1 + 0x98))();
              (**(code **)(*plVar13 + 0x30))(plVar13,*(undefined8 *)(lVar8 + 0xe0));
              FUN_00ceb650(*param_1,plVar13,param_1);
            }
          }
          if (iStack_11c < 0) {
            operator_delete(plStack_130);
          }
          if ((long)puStack_138 < 0) {
            operator_delete(local_148);
          }
          plVar13 = local_1b0;
          if ((long)local_150 < 0) {
            operator_delete(local_160);
            plVar13 = local_1b0;
          }
          local_1b0 = plVar13;
          if ((plVar13 != (long *)0x0) && (iVar7 = FUN_00d0f7a0(0xffffffff,plVar13 + 1), iVar7 == 1)
             ) {
            (**(code **)(*plVar13 + 8))(plVar13);
          }
        }
        else {
          uVar9 = FUN_00417e08();
          if ((uVar9 & 1) == 0) {
            local_c0 = (long *)0x1bc002;
            uStack_b8 = 0x3231;
            local_b0 = &uStack_c1;
            pplStack_98 = &local_c0;
            local_a0 = "Server and local address families are not compatible. Server address: ";
            FUN_007e8ea8(lVar12);
            FUN_007e9f18(local_e0);
            FUN_00bca960(&local_1b0,param_1[2]);
            FUN_007e9f18(local_f8,&local_1b0);
            FUN_00623bb0("\r\t\n\t\n",*pplStack_98,*(undefined4 *)(pplStack_98 + 1),local_a0,
                         local_e0," Local address: ",local_f8);
          }
        }
      }
      lVar12 = lVar12 + 0x50;
    } while (lVar12 != param_2[1]);
  }
  if (*(long *)(lVar5 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00cedac4  FUN_00cedac4 =====

void FUN_00cedac4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  
  puVar7 = *(undefined8 **)(param_1 + 0x70);
  puVar1 = *(undefined8 **)(param_1 + 0x78);
  if (puVar7 == puVar1) {
    plVar5 = *(long **)(param_1 + 0x68);
    if (plVar5 != (long *)0x0) {
LAB_00cedbb0:
                    /* WARNING: Could not recover jumptable at 0x00cedbd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x1a0))(plVar5,param_2,param_3);
      return;
    }
  }
  else {
    bVar2 = false;
    do {
      plVar5 = (long *)*puVar7;
      uVar3 = (**(code **)(*plVar5 + 0x1a8))(plVar5,*(undefined8 *)(param_3 + 0x20));
      if ((uVar3 & 1) != 0) {
        uVar3 = (**(code **)(*plVar5 + 0x1a0))(plVar5,param_2,param_3);
        if ((uVar3 & 1) != 0) {
          return;
        }
        bVar2 = true;
      }
      puVar7 = puVar7 + 1;
    } while (puVar7 != puVar1);
    plVar5 = *(long **)(param_1 + 0x68);
    if (plVar5 != (long *)0x0) {
      if (!bVar2) goto LAB_00cedbb0;
      if ((long *)plVar5[0x4d] != (long *)0x0) {
        uVar6 = *(undefined8 *)(param_3 + 0x20);
        plVar4 = (long *)plVar5[0x4d];
        plVar9 = plVar5 + 0x4d;
        do {
          plVar8 = plVar4;
          uVar3 = FUN_007e97f4(uVar6,plVar8 + 4);
          if ((uVar3 & 1) == 0) {
            uVar3 = FUN_007e97f4(plVar8 + 4,uVar6);
            if ((uVar3 & 1) == 0) {
              if ((long *)*plVar9 == (long *)0x0) {
                return;
              }
              if ((long *)*plVar9 == plVar5 + 0x4d) {
                return;
              }
              plVar5 = *(long **)(param_1 + 0x68);
              goto LAB_00cedbb0;
            }
            plVar8 = plVar8 + 1;
            plVar4 = (long *)*plVar8;
          }
          else {
            plVar4 = (long *)*plVar8;
          }
          plVar9 = plVar8;
        } while (plVar4 != (long *)0x0);
      }
    }
  }
  return;
}


// ===== 00cedc10  FUN_00cedc10 =====

void FUN_00cedc10(long param_1,long *param_2,void *param_3,ulong param_4,void *param_5,ulong param_6
                 ,long *param_7)

{
  ulong uVar1;
  ulong uVar2;
  long *****ppppplVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  void *pvVar7;
  long *plVar8;
  long *plVar9;
  long ****local_78;
  ulong local_70;
  byte bStack_61;
  
  FUN_007e8a64();
  plVar9 = (long *)(param_1 + 0x50);
  *plVar9 = 0;
  puVar5 = (undefined8 *)(param_1 + 0x48);
  *puVar5 = plVar9;
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (param_2[2] != 0) {
    lVar6 = FUN_00be483c(puVar5,param_2[1],puVar5);
    *plVar9 = lVar6;
    *(long **)(lVar6 + 0x10) = plVar9;
    plVar9 = (long *)*plVar9;
    do {
      plVar8 = plVar9;
      plVar9 = (long *)*plVar8;
    } while (plVar9 != (long *)0x0);
    *(long **)(param_1 + 0x48) = plVar8;
    *(long *)(param_1 + 0x58) = param_2[2];
  }
  if (param_4 < 0x7ffffffffffffff7) {
    if (param_4 < 0x17) {
      pvVar7 = (void *)(param_1 + 0x60);
      *(char *)(param_1 + 0x77) = (char)param_4;
    }
    else {
      uVar1 = (param_4 & 0x7ffffffffffffff8) + 8;
      uVar2 = 0x19;
      if (uVar1 != 0x18) {
        uVar2 = uVar1;
      }
      pvVar7 = operator_new(uVar2);
      *(void **)(param_1 + 0x60) = pvVar7;
      *(ulong *)(param_1 + 0x68) = param_4;
      *(ulong *)(param_1 + 0x70) = uVar2 | 0x8000000000000000;
    }
    if ((void *)((long)pvVar7 + param_4) < pvVar7) {
LAB_00cede70:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
                );
    }
    if ((param_3 < pvVar7) || ((void *)((long)pvVar7 + param_4) <= param_3)) {
      memmove(pvVar7,param_3,param_4);
      *(undefined1 *)((long)pvVar7 + param_4) = 0;
      if (0x7ffffffffffffff6 < param_6) goto LAB_00cede98;
      if (param_6 < 0x17) {
        pvVar7 = (void *)(param_1 + 0x78);
        *(char *)(param_1 + 0x8f) = (char)param_6;
      }
      else {
        uVar1 = (param_6 & 0x7ffffffffffffff8) + 8;
        uVar2 = 0x19;
        if (uVar1 != 0x18) {
          uVar2 = uVar1;
        }
        pvVar7 = operator_new(uVar2);
        *(void **)(param_1 + 0x78) = pvVar7;
        *(ulong *)(param_1 + 0x80) = param_6;
        *(ulong *)(param_1 + 0x88) = uVar2 | 0x8000000000000000;
      }
      if ((void *)((long)pvVar7 + param_6) < pvVar7) goto LAB_00cede70;
      if ((param_5 < pvVar7) || ((void *)((long)pvVar7 + param_6) <= param_5)) {
        memmove(pvVar7,param_5,param_6);
        *(undefined1 *)((long)pvVar7 + param_6) = 0;
        *(undefined1 *)(param_1 + 0x90) = 0;
        *(undefined8 *)(param_1 + 0xa0) = 0;
        *(undefined8 *)(param_1 + 0xa8) = 0;
        *(undefined8 *)(param_1 + 0x98) = 0;
        if (param_2[2] != 0) {
          FUN_007e8d84(param_1,*param_2 + 0x20);
        }
        if (param_7 != (long *)0x0) {
          (**(code **)(*param_7 + 0x10))(&local_78,param_7,"WebRTC-UseTurnServerAsStunServer",0x20);
          if (-1 < (char)bStack_61) {
            local_70 = (ulong)bStack_61;
          }
          if (local_70 < 8) {
            bVar4 = false;
          }
          else {
            ppppplVar3 = (long *****)local_78;
            if (-1 < (char)bStack_61) {
              ppppplVar3 = &local_78;
            }
            bVar4 = *ppppplVar3 == (long ****)0x64656c6261736944;
          }
          if ((char)bStack_61 < '\0') {
            operator_delete(local_78);
          }
          *(bool *)(param_1 + 0x90) = bVar4;
        }
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
              );
  }
LAB_00cede98:
                    /* WARNING: Subroutine does not return */
  FUN_005d45ec();
}


// ===== 00cede9c  FUN_00cede9c =====

void FUN_00cede9c(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 **local_38;
  
  lVar8 = *(long *)(param_1 + 0x98);
  lVar6 = *(long *)(param_1 + 0xa0);
  local_60 = 0;
  local_58 = 0;
  local_68 = &local_60;
  if (lVar6 != lVar8) {
    uVar12 = 0;
    do {
      plVar9 = (long *)(lVar8 + uVar12 * 0xa0);
      lVar2 = *plVar9;
      for (lVar1 = lVar2; lVar1 != plVar9[1]; lVar1 = lVar1 + 0x50) {
        if (*(int *)(lVar1 + 0x48) == param_2) {
          local_38 = &local_68;
          FUN_00cefc98(&local_38,lVar2,lVar2);
          lVar8 = *(long *)(param_1 + 0x98);
          lVar6 = *(long *)(param_1 + 0xa0);
          break;
        }
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < (ulong)((lVar6 - lVar8 >> 5) * -0x3333333333333333));
    if (local_68 != &local_60) {
      plVar9 = (long *)(param_1 + 0x50);
      puVar11 = local_68;
      do {
        plVar3 = plVar9;
        plVar4 = (long *)*plVar9;
        while (plVar4 != (long *)0x0) {
          uVar12 = FUN_007e97f4(puVar11 + 4,plVar4 + 4);
          if ((uVar12 & 1) == 0) {
            uVar12 = FUN_007e97f4(plVar4 + 4,puVar11 + 4);
            if ((uVar12 & 1) == 0) {
              if (((long *)*plVar3 != (long *)0x0) && ((long *)*plVar3 != plVar9)) {
                puVar7 = (undefined8 *)puVar11[1];
                goto joined_r0x00cedfcc;
              }
              break;
            }
            plVar3 = plVar4 + 1;
            plVar4 = (long *)plVar4[1];
          }
          else {
            plVar3 = plVar4;
            plVar4 = (long *)*plVar4;
          }
        }
        local_38 = (undefined8 **)(param_1 + 0x48);
        FUN_00cefc98(&local_38,puVar11 + 4,puVar11 + 4);
        puVar7 = (undefined8 *)puVar11[1];
joined_r0x00cedfcc:
        puVar10 = puVar11;
        if (puVar7 == (undefined8 *)0x0) {
          do {
            puVar11 = (undefined8 *)puVar10[2];
            bVar5 = puVar10 != (undefined8 *)*puVar11;
            puVar10 = puVar11;
          } while (bVar5);
        }
        else {
          do {
            puVar11 = puVar7;
            puVar7 = (undefined8 *)*puVar11;
          } while ((undefined8 *)*puVar11 != (undefined8 *)0x0);
        }
      } while (puVar11 != &local_60);
    }
  }
  local_38 = &local_68;
  FUN_00b8b8d8(&local_38,local_60);
  return;
}


// ===== 00cee048  FUN_00cee048 =====

void FUN_00cee048(undefined8 *param_1)

{
  ulong uVar1;
  
  param_1 = (undefined8 *)*param_1;
  uVar1 = FUN_007ebde8(*param_1);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00cee07c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)param_1[5])(param_1 + 2);
    return;
  }
  return;
}


// ===== 00cee090  FUN_00cee090 =====

void FUN_00cee090(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  int iVar2;
  void *pvVar3;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
  }
  else {
    if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0xcee12c);
      (*pcVar1)();
    }
    param_2 = (undefined8 *)*param_2;
    if (param_2 != (undefined8 *)0x0) {
      (*(code *)param_2[4])(0,param_2 + 2,param_2 + 2);
      pvVar3 = (void *)*param_2;
      if ((pvVar3 != (void *)0x0) && (iVar2 = FUN_00d0f7a0(0xffffffff,pvVar3), iVar2 == 1)) {
        operator_delete(pvVar3);
      }
      operator_delete(param_2);
      return;
    }
  }
  return;
}


// ===== 00cee12c  FUN_00cee12c =====

void FUN_00cee12c(undefined8 *param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00cee144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x20))(param_2,*(undefined8 *)*param_1,param_1[1]);
  return;
}


// ===== 00cee148  FUN_00cee148 =====

long * FUN_00cee148(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  if (param_2 == (undefined8 *)0x0) {
    return (long *)0x0;
  }
  plVar2 = (long *)operator_new(0x38);
  if (plVar2 != (long *)0x0) {
    plVar3 = plVar2 + 4;
    *plVar2 = 0;
    if (plVar3 != (long *)0x0) {
      if (*(char *)((long)param_2 + 0x37) < '\0') {
        FUN_005478d8(plVar3,param_2[4],param_2[5]);
      }
      else {
        lVar4 = param_2[4];
        lVar5 = param_2[6];
        plVar2[5] = param_2[5];
        *plVar3 = lVar4;
        plVar2[6] = lVar5;
      }
      lVar5 = FUN_00cee148(param_1,*param_2,param_3);
      lVar4 = FUN_00cee148(param_1,param_2[1],param_3);
      uVar1 = *(undefined1 *)(param_2 + 3);
      *plVar2 = lVar5;
      plVar2[1] = lVar4;
      *(undefined1 *)(plVar2 + 3) = uVar1;
      if (lVar5 != 0) {
        *(long **)(lVar5 + 0x10) = plVar2;
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


// ===== 00cee228  FUN_00cee228 =====

void FUN_00cee228(undefined8 *param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00cee244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x20))(param_2,*(undefined8 *)*param_1,*(undefined4 *)param_1[1]);
  return;
}


// ===== 00cee248  FUN_00cee248 =====

long FUN_00cee248(long *param_1,long param_2)

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
  uVar1 = (lVar5 >> 3) * 0x6fb586fb586fb587 + 1;
  if (uVar1 < 0x94f2094f2094f3) {
    local_50 = (void *)0x0;
    lVar2 = param_1[2] - *param_1 >> 3;
    uVar3 = lVar2 * -0x2094f2094f2094f2;
    if (uVar3 < uVar1 || uVar3 - uVar1 == 0) {
      uVar3 = uVar1;
    }
    if (0x4a7904a7904a78 < (ulong)(lVar2 * 0x6fb586fb586fb587)) {
      uVar3 = 0x94f2094f2094f2;
    }
    if (uVar3 != 0) {
      if (0x94f2094f2094f2 < uVar3) goto LAB_00cee3d0;
      local_50 = operator_new(uVar3 * 0x1b8);
    }
    lVar5 = (long)local_50 + lVar5;
    local_38 = (void *)((long)local_50 + uVar3 * 0x1b8);
    local_48 = lVar5;
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    FUN_00afef10(lVar5,param_2);
    local_40 = lVar5 + 0x1b8;
    uVar8 = *(undefined8 *)(param_2 + 0x198);
    uVar7 = *(undefined8 *)(param_2 + 0x1b0);
    uVar6 = *(undefined8 *)(param_2 + 0x1a8);
    *(undefined8 *)(lVar5 + 0x1a0) = *(undefined8 *)(param_2 + 0x1a0);
    *(undefined8 *)(lVar5 + 0x198) = uVar8;
    *(undefined8 *)(lVar5 + 0x1b0) = uVar7;
    *(undefined8 *)(lVar5 + 0x1a8) = uVar6;
    FUN_00cee3d4(param_1,&local_50);
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
      lVar5 = lVar5 + -0x1b8;
      if (lVar5 == 0) break;
      FUN_00aff0f8(lVar5);
    }
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
  FUN_00c721bc();
LAB_00cee3d0:
                    /* WARNING: Subroutine does not return */
  FUN_005d55a4();
}


// ===== 00cee3d4  FUN_00cee3d4 =====

void FUN_00cee3d4(long *param_1,long *param_2)

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
      FUN_00afef10(lVar5,lVar7);
      lVar1 = lVar7 + 0x1b8;
      uVar9 = *(undefined8 *)(lVar7 + 0x198);
      uVar8 = *(undefined8 *)(lVar7 + 0x1b0);
      uVar6 = *(undefined8 *)(lVar7 + 0x1a8);
      *(undefined8 *)(lVar5 + 0x1a0) = *(undefined8 *)(lVar7 + 0x1a0);
      *(undefined8 *)(lVar5 + 0x198) = uVar9;
      *(undefined8 *)(lVar5 + 0x1b0) = uVar8;
      *(undefined8 *)(lVar5 + 0x1a8) = uVar6;
      lVar7 = lVar1;
      lVar5 = lVar5 + 0x1b8;
    } while (lVar1 != lVar4);
    do {
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      FUN_00aff0f8(lVar2);
      lVar2 = lVar2 + 0x1b8;
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


// ===== 00cee4cc  FUN_00cee4cc =====

undefined8 * FUN_00cee4cc(long *param_1,undefined8 *param_2)

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
    FUN_00c59d1c();
LAB_00cee5bc:
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
    if (uVar5 >> 0x3d != 0) goto LAB_00cee5bc;
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


// ===== 00cee5c0  FUN_00cee5c0 =====

undefined8 * FUN_00cee5c0(long *param_1,undefined8 *param_2)

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
    FUN_00cee6b8();
LAB_00cee6b4:
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
    if (uVar6 >> 0x3d != 0) goto LAB_00cee6b4;
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


// ===== 00cee6b8  FUN_00cee6b8 =====

void FUN_00cee6b8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00cee6d0  FUN_00cee6d0 =====

undefined8 *
FUN_00cee6d0(long *param_1,undefined8 *param_2,undefined8 *param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  ulong uVar2;
  void *pvVar3;
  void *pvVar4;
  size_t sVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  size_t __n;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  puVar12 = param_2;
  if (0 < param_5) {
    puVar13 = (undefined8 *)param_1[1];
    if (param_1[2] - (long)puVar13 >> 3 < param_5) {
      lVar14 = *param_1;
      uVar2 = param_5 + ((long)puVar13 - lVar14 >> 3);
      if (uVar2 >> 0x3d != 0) {
        FUN_00bcd79c();
LAB_00cee9e8:
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      uVar6 = param_1[2] - lVar14;
      uVar7 = (long)uVar6 >> 2;
      if (uVar7 <= uVar2) {
        uVar7 = uVar2;
      }
      if (0x7ffffffffffffff7 < uVar6) {
        uVar7 = 0x1fffffffffffffff;
      }
      if (uVar7 == 0) {
        pvVar3 = (void *)0x0;
      }
      else {
        if (uVar7 >> 0x3d != 0) goto LAB_00cee9e8;
        pvVar3 = operator_new(uVar7 << 3);
      }
      puVar12 = (undefined8 *)((long)pvVar3 + ((long)param_2 - lVar14));
      puVar9 = puVar12;
      if (param_5 * 8 != 0) {
        uVar11 = param_5 * 8 - 8U >> 3;
        uVar6 = (ulong)(lVar14 - ((long)pvVar3 + (long)param_2)) >> 3;
        uVar2 = uVar6;
        if (uVar11 <= uVar6) {
          uVar2 = uVar11;
        }
        puVar13 = puVar12;
        if (0x2b < uVar2) {
          if (uVar11 <= uVar6) {
            uVar6 = uVar11;
          }
          if (((((-(int)((long)pvVar3 + (long)param_2) & 7U) == 0) && (puVar12 <= puVar12 + uVar6))
              && (param_3 <= param_3 + uVar6)) &&
             (0x1f < (ulong)((((long)pvVar3 + (long)param_2) - (long)param_3) - lVar14))) {
            uVar6 = uVar2 + 1 & 3;
            puVar9 = (undefined8 *)((long)pvVar3 + ((long)param_2 - lVar14) + 0x10);
            uVar11 = 4;
            if (uVar6 != 0) {
              uVar11 = uVar6;
            }
            puVar8 = param_3 + 2;
            lVar14 = (uVar2 + 1) - uVar11;
            puVar13 = puVar12 + lVar14;
            param_3 = param_3 + lVar14;
            do {
              puVar1 = puVar8 + -1;
              uVar15 = puVar8[-2];
              uVar17 = puVar8[1];
              uVar16 = *puVar8;
              lVar14 = lVar14 + -4;
              puVar8 = puVar8 + 4;
              puVar9[-1] = *puVar1;
              puVar9[-2] = uVar15;
              puVar9[1] = uVar17;
              *puVar9 = uVar16;
              puVar9 = puVar9 + 4;
            } while (lVar14 != 0);
          }
        }
        do {
          if (puVar13 == (undefined8 *)0x0) {
LAB_00cee9d0:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          puVar9 = puVar13 + 1;
          *puVar13 = *param_3;
          puVar13 = puVar9;
          param_3 = param_3 + 1;
        } while (puVar9 != puVar12 + param_5);
        puVar13 = (undefined8 *)param_1[1];
        puVar9 = puVar12 + param_5;
      }
      memcpy(puVar9,param_2,(long)puVar13 - (long)param_2);
      lVar14 = param_1[1];
      param_1[1] = (long)param_2;
      sVar5 = (long)param_2 - *param_1;
      memcpy((void *)((long)puVar12 - sVar5),(void *)*param_1,sVar5);
      pvVar4 = (void *)*param_1;
      *param_1 = (long)puVar12 - sVar5;
      param_1[1] = (long)puVar9 + (lVar14 - (long)param_2);
      param_1[2] = (long)((long)pvVar3 + uVar7 * 8);
      if (pvVar4 != (void *)0x0) {
        operator_delete(pvVar4);
      }
    }
    else {
      sVar5 = (long)puVar13 - (long)param_2;
      if ((long)sVar5 >> 3 < param_5) {
        __n = param_4 - ((long)param_3 + sVar5);
        memmove(puVar13,(void *)((long)param_3 + sVar5),__n);
        lVar14 = (long)puVar13 + __n;
        param_1[1] = lVar14;
        if (0 < (long)sVar5 >> 3) {
          lVar10 = lVar14;
          if ((undefined8 *)(lVar14 + param_5 * -8) < puVar13) {
            puVar8 = (undefined8 *)(param_4 + (long)param_2);
            lVar10 = -(long)param_3;
            puVar9 = puVar8 + -param_5;
            do {
              if (puVar8 == param_3) goto LAB_00cee9d0;
              puVar1 = (undefined8 *)((long)puVar9 + lVar10);
              puVar9 = puVar9 + 1;
              *(undefined8 *)((long)puVar8 + lVar10) = *puVar1;
              puVar8 = puVar8 + 1;
            } while ((undefined8 *)((long)puVar9 + lVar10) < puVar13);
            lVar10 = (long)puVar8 - (long)param_3;
          }
          param_1[1] = lVar10;
          memmove((void *)(lVar14 - (lVar14 - (long)(param_2 + param_5))),param_2,
                  lVar14 - (long)(param_2 + param_5));
          memmove(param_2,param_3,sVar5);
        }
      }
      else {
        puVar9 = puVar13;
        for (puVar8 = puVar13 + -param_5; puVar8 < puVar13; puVar8 = puVar8 + 1) {
          if (puVar9 == (undefined8 *)0x0) goto LAB_00cee9d0;
          *puVar9 = *puVar8;
          puVar9 = puVar9 + 1;
        }
        param_1[1] = (long)puVar9;
        memmove((void *)((long)puVar13 - ((long)puVar13 - (long)(param_2 + param_5))),param_2,
                (long)puVar13 - (long)(param_2 + param_5));
        memmove(param_2,param_3,param_5 * 8);
      }
    }
  }
  return puVar12;
}


// ===== 00cee9ec  FUN_00cee9ec =====

uint FUN_00cee9ec(long *param_1)

{
  uint uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x10))();
  return (uVar1 ^ 0xffffffff) & 1;
}


// ===== 00ceea18  FUN_00ceea18 =====

undefined8 * FUN_00ceea18(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  uVar2 = *param_1;
  uVar5 = param_1[3];
  uVar4 = param_1[2];
  pcVar3 = *(code **)param_1[3];
  puVar1[1] = param_1[1];
  *puVar1 = uVar2;
  puVar1[3] = uVar5;
  puVar1[2] = uVar4;
  if (pcVar3 != (code *)0x0) {
    uVar2 = (*pcVar3)(*param_1);
    *puVar1 = uVar2;
  }
  return puVar1;
}


// ===== 00ceea6c  FUN_00ceea6c =====

void FUN_00ceea6c(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    if (*(code **)(param_1[3] + 8) != (code *)0x0) {
      (**(code **)(param_1[3] + 8))(*param_1);
    }
    operator_delete(param_1);
    return;
  }
  return;
}


// ===== 00ceeab8  FUN_00ceeab8 =====

undefined8 * FUN_00ceeab8(long *param_1,undefined8 *param_2)

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
    FUN_00bcd79c();
LAB_00ceeba8:
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
    if (uVar5 >> 0x3d != 0) goto LAB_00ceeba8;
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


// ===== 00ceebac  FUN_00ceebac =====

undefined8 * FUN_00ceebac(long *param_1,undefined8 *param_2)

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
    FUN_00ceeca0();
LAB_00ceec9c:
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
    if (uVar5 >> 0x3d != 0) goto LAB_00ceec9c;
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


// ===== 00ceeca0  FUN_00ceeca0 =====

void FUN_00ceeca0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00ceecb8  FUN_00ceecb8 =====

undefined8 * FUN_00ceecb8(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  void *pvVar1;
  void *pvVar2;
  size_t __n;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  void *__dest;
  undefined8 *puVar8;
  
  puVar8 = (undefined8 *)(param_1[1] - *param_1);
  uVar3 = ((long)puVar8 >> 3) * -0x5555555555555555 + 1;
  if (0xaaaaaaaaaaaaaaa < uVar3) {
    FUN_00ceedec();
LAB_00ceede8:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  lVar5 = param_1[2] - *param_1 >> 3;
  uVar7 = lVar5 * 0x5555555555555556;
  if (uVar7 < uVar3 || uVar7 - uVar3 == 0) {
    uVar7 = uVar3;
  }
  if (0x555555555555554 < (ulong)(lVar5 * -0x5555555555555555)) {
    uVar7 = 0xaaaaaaaaaaaaaaa;
  }
  if (uVar7 == 0) {
    pvVar1 = (void *)0x0;
  }
  else {
    if (0xaaaaaaaaaaaaaaa < uVar7) goto LAB_00ceede8;
    pvVar1 = operator_new(uVar7 * 0x18);
    puVar8 = (undefined8 *)((long)pvVar1 + (long)puVar8);
  }
  if (puVar8 != (undefined8 *)0x0) {
    uVar4 = *param_2;
    uVar6 = *param_3;
    *(undefined1 *)(puVar8 + 2) = 0;
    *puVar8 = uVar4;
    puVar8[1] = uVar6;
    *(undefined4 *)((long)puVar8 + 0x14) = 0;
    __n = param_1[1] - *param_1;
    __dest = (void *)((long)puVar8 - __n);
    memcpy(__dest,(void *)*param_1,__n);
    pvVar2 = (void *)*param_1;
    *param_1 = (long)__dest;
    param_1[1] = (long)(puVar8 + 3);
    param_1[2] = (long)((long)pvVar1 + uVar7 * 0x18);
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
    return puVar8 + 3;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00ceedec  FUN_00ceedec =====

void FUN_00ceedec(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00ceee04  FUN_00ceee04 =====

void FUN_00ceee04(undefined8 *param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00ceee20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x20))(param_2,*(undefined8 *)*param_1,*(undefined8 *)param_1[1]);
  return;
}


// ===== 00ceee24  FUN_00ceee24 =====

void FUN_00ceee24(undefined8 *param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00ceee3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x20))(param_2,*(undefined8 *)*param_1,param_1[1]);
  return;
}


// ===== 00ceee40  FUN_00ceee40 =====

void FUN_00ceee40(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    FUN_005478d8(param_2,*param_3,param_3[1]);
  }
  else {
    uVar2 = param_3[1];
    uVar1 = *param_3;
    param_2[2] = param_3[2];
    param_2[1] = uVar2;
    *param_2 = uVar1;
  }
  *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_3 + 3);
  if (*(char *)((long)param_3 + 0x37) < '\0') {
    FUN_005478d8(param_2 + 4,param_3[4],param_3[5]);
  }
  else {
    uVar2 = param_3[5];
    uVar1 = param_3[4];
    param_2[6] = param_3[6];
    param_2[5] = uVar2;
    param_2[4] = uVar1;
  }
  *(undefined4 *)(param_2 + 7) = *(undefined4 *)(param_3 + 7);
  if (-1 < *(char *)((long)param_3 + 0x57)) {
    uVar2 = param_3[9];
    uVar1 = param_3[8];
    param_2[10] = param_3[10];
    param_2[9] = uVar2;
    param_2[8] = uVar1;
    return;
  }
  FUN_005478d8(param_2 + 8,param_3[8],param_3[9]);
  return;
}


// ===== 00ceef10  FUN_00ceef10 =====

long FUN_00ceef10(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar10 = param_1[1] - *param_1;
  uVar5 = (lVar10 >> 3) * 0x2e8ba2e8ba2e8ba3 + 1;
  if (0x2e8ba2e8ba2e8ba < uVar5) {
    FUN_00cef0e0();
LAB_00cef0dc:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  lVar7 = param_1[2] - *param_1 >> 3;
  uVar8 = lVar7 * 0x5d1745d1745d1746;
  if (uVar8 < uVar5 || uVar8 - uVar5 == 0) {
    uVar8 = uVar5;
  }
  if (0x1745d1745d1745c < (ulong)(lVar7 * 0x2e8ba2e8ba2e8ba3)) {
    uVar8 = 0x2e8ba2e8ba2e8ba;
  }
  if (uVar8 == 0) {
    pvVar3 = (void *)0x0;
  }
  else {
    if (0x2e8ba2e8ba2e8ba < uVar8) goto LAB_00cef0dc;
    pvVar3 = operator_new(uVar8 * 0x58);
  }
  lVar10 = (long)pvVar3 + lVar10;
  FUN_00ceee40(param_1,lVar10,param_2);
  puVar9 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)((long)puVar9 + (lVar10 - (long)puVar2));
  puVar4 = puVar9;
  puVar6 = puVar1;
  if (puVar2 != puVar9) {
    do {
      if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      uVar12 = puVar4[1];
      uVar11 = *puVar4;
      puVar6[2] = puVar4[2];
      puVar6[1] = uVar12;
      *puVar6 = uVar11;
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = 0;
      *(undefined4 *)(puVar6 + 3) = *(undefined4 *)(puVar4 + 3);
      uVar12 = puVar4[5];
      uVar11 = puVar4[4];
      puVar6[6] = puVar4[6];
      puVar6[5] = uVar12;
      puVar6[4] = uVar11;
      puVar4[5] = 0;
      puVar4[6] = 0;
      puVar4[4] = 0;
      *(undefined4 *)(puVar6 + 7) = *(undefined4 *)(puVar4 + 7);
      uVar12 = puVar4[9];
      uVar11 = puVar4[8];
      puVar6[10] = puVar4[10];
      puVar6[9] = uVar12;
      puVar6[8] = uVar11;
      puVar4[9] = 0;
      puVar4[10] = 0;
      puVar4[8] = 0;
      puVar4 = puVar4 + 0xb;
      puVar6 = puVar6 + 0xb;
    } while (puVar4 != puVar2);
    do {
      FUN_00cef0f8(puVar9);
      puVar9 = puVar9 + 0xb;
    } while (puVar9 != puVar2);
    puVar9 = (undefined8 *)*param_1;
  }
  *param_1 = (long)puVar1;
  param_1[1] = lVar10 + 0x58;
  param_1[2] = (long)((long)pvVar3 + uVar8 * 0x58);
  if (puVar9 != (undefined8 *)0x0) {
    operator_delete(puVar9);
  }
  return lVar10 + 0x58;
}


// ===== 00cef0e0  FUN_00cef0e0 =====

void FUN_00cef0e0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00cef0f8  FUN_00cef0f8 =====

void FUN_00cef0f8(undefined8 *param_1)

{
  char cVar1;
  
  if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    operator_delete((void *)param_1[8]);
    cVar1 = *(char *)((long)param_1 + 0x37);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x37);
  }
  if (cVar1 < '\0') {
    operator_delete((void *)param_1[4]);
    cVar1 = *(char *)((long)param_1 + 0x17);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x17);
  }
  if (-1 < cVar1) {
    return;
  }
  operator_delete((void *)*param_1);
  return;
}


// ===== 00cef198  FUN_00cef198 =====

void FUN_00cef198(undefined8 *param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00cef1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x20))(param_2,*(undefined8 *)*param_1,param_1[1]);
  return;
}


// ===== 00cef1b4  FUN_00cef1b4 =====

undefined8 * FUN_00cef1b4(long *param_1,undefined8 *param_2)

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
    FUN_00cef2a8();
LAB_00cef2a4:
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
    if (uVar5 >> 0x3d != 0) goto LAB_00cef2a4;
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


// ===== 00cef2a8  FUN_00cef2a8 =====

void FUN_00cef2a8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00cef2c0  FUN_00cef2c0 =====

void FUN_00cef2c0(undefined8 *param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00cef2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x20))(param_2,*(undefined8 *)*param_1);
  return;
}


// ===== 00cef2dc  FUN_00cef2dc =====

void FUN_00cef2dc(undefined8 *param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00cef2f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x20))(param_2,*(undefined8 *)*param_1,param_1[1]);
  return;
}


// ===== 00cef2f8  FUN_00cef2f8 =====

undefined8 * FUN_00cef2f8(long *param_1,undefined8 *param_2)

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
    FUN_00cef3ec();
LAB_00cef3e8:
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
    if (uVar5 >> 0x3d != 0) goto LAB_00cef3e8;
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


// ===== 00cef3ec  FUN_00cef3ec =====

void FUN_00cef3ec(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00cef404  FUN_00cef404 =====

void FUN_00cef404(undefined8 *param_1)

{
  char cVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  undefined8 *local_18;
  
  pvVar4 = (void *)param_1[0x13];
  if (pvVar4 != (void *)0x0) {
    pvVar3 = (void *)param_1[0x14];
    pvVar2 = pvVar4;
    if (pvVar4 != pvVar3) {
      do {
        pvVar3 = (void *)((long)pvVar3 + -0xa0);
        if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        FUN_00be2ca4(pvVar3);
      } while (pvVar3 != pvVar4);
      pvVar2 = (void *)param_1[0x13];
    }
    param_1[0x14] = pvVar4;
    operator_delete(pvVar2);
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    operator_delete((void *)param_1[0xf]);
    cVar1 = *(char *)((long)param_1 + 0x77);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x77);
  }
  if (cVar1 < '\0') {
    operator_delete((void *)param_1[0xc]);
  }
  local_18 = param_1 + 9;
  FUN_00b8b8d8(&local_18,param_1[10]);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    operator_delete((void *)*param_1);
  }
  return;
}


// ===== 00cef4f0  FUN_00cef4f0 =====

void FUN_00cef4f0(undefined8 *param_1)

{
  FUN_00ceae4c(*param_1);
  return;
}


// ===== 00cef4fc  FUN_00cef4fc =====

void FUN_00cef4fc(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00cef50c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0xa0))();
  return;
}


// ===== 00cef510  FUN_00cef510 =====

void FUN_00cef510(long *param_1)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *param_1;
  lVar4 = *(long *)(lVar3 + 0x198);
  lVar5 = *(long *)(lVar3 + 0x1a0);
  if (lVar4 == lVar5) {
    bVar2 = false;
  }
  else {
    bVar2 = false;
    do {
      if (*(int *)(lVar4 + 0x14) == 0) {
        *(undefined4 *)(lVar4 + 0x14) = 2;
        bVar2 = true;
        lVar5 = *(long *)(lVar3 + 0x1a0);
      }
      lVar4 = lVar4 + 0x18;
    } while (lVar4 != lVar5);
  }
  plVar1 = *(long **)(lVar3 + 0x180);
  if ((plVar1 != *(long **)(lVar3 + 0x188)) && (!bVar2)) {
    do {
      lVar4 = *plVar1;
      bVar2 = *(int *)(lVar4 + 0x40) == 2;
      if (plVar1 + 1 == *(long **)(lVar3 + 0x188)) break;
      plVar1 = plVar1 + 1;
    } while (*(int *)(lVar4 + 0x40) != 2);
  }
  if (!bVar2) {
    return;
  }
  FUN_00cea568();
  return;
}


// ===== 00cef59c  FUN_00cef59c =====

void FUN_00cef59c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1[1];
  param_1[1] = 0;
  FUN_00cea440(*param_1,uVar1);
  return;
}


// ===== 00cef5b4  FUN_00cef5b4 =====

void FUN_00cef5b4(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  void *pvVar3;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
    uVar2 = param_2[1];
    param_2[1] = 0;
    param_3[1] = uVar2;
  }
  else if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xcef630);
    (*pcVar1)();
  }
  pvVar3 = (void *)param_2[1];
  param_2[1] = 0;
  if (pvVar3 != (void *)0x0) {
    FUN_00cef404(pvVar3);
    operator_delete(pvVar3);
    return;
  }
  return;
}


// ===== 00cef630  FUN_00cef630 =====

void FUN_00cef630(undefined8 *param_1)

{
  ulong uVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_1;
  if (*(int *)(param_1 + 1) == *(int *)((long)plVar2 + 0x1d4)) {
    if ((*(char *)((long)plVar2 + 0x161) == '\x01') &&
       (uVar1 = (**(code **)(*plVar2 + 0x40))(plVar2), (uVar1 & 1) == 0)) {
      FUN_00ce9364(plVar2);
    }
    *(undefined1 *)(plVar2 + 0x2c) = 1;
  }
  return;
}


// ===== 00cef694  FUN_00cef694 =====

void FUN_00cef694(undefined8 param_1,long param_2)

{
  FUN_007ea660(param_2 + 0x40);
  return;
}


// ===== 00cef6a0  FUN_00cef6a0 =====

bool FUN_00cef6a0(long *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *(uint *)(*(long *)(*param_1 + 0x148) + 0x120);
  iVar3 = *(int *)(*(long *)(*param_1 + 0x148) + 0x44);
  uVar1 = uVar2;
  if (iVar3 == 1) {
    uVar1 = uVar2 | 0xfffffff7;
  }
  uVar2 = uVar2 | 8;
  if (iVar3 != 2) {
    uVar2 = uVar1;
  }
  return (*(uint *)(param_2 + 0xa0) & uVar2) != 0;
}


// ===== 00cef6dc  FUN_00cef6dc =====

bool FUN_00cef6dc(ushort *param_1,undefined8 param_2)

{
  ushort uVar1;
  long lVar2;
  
  lVar2 = (**(code **)(**(long **)(param_1 + 4) + 0x98))();
  uVar1 = FUN_00bccb90(param_2,*(undefined8 *)(lVar2 + 0xf0));
  return *param_1 + 10 < (uint)uVar1;
}


// ===== 00cef730  FUN_00cef730 =====

void FUN_00cef730(undefined8 *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = *(undefined8 *)*param_1;
  uVar2 = FUN_007ebde8(((undefined8 *)*param_1)[1]);
  if ((uVar2 & 1) != 0) {
    FUN_00cea568(uVar1);
    return;
  }
  return;
}


// ===== 00cef774  FUN_00cef774 =====

undefined8 * FUN_00cef774(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  lVar2 = param_1[1];
  uVar3 = *param_1;
  puVar1[1] = param_1[1];
  *puVar1 = uVar3;
  if (lVar2 != 0) {
    FUN_00d0f740(1);
  }
  return puVar1;
}


// ===== 00cef7c0  FUN_00cef7c0 =====

void FUN_00cef7c0(void *param_1)

{
  int iVar1;
  void *pvVar2;
  
  if (param_1 != (void *)0x0) {
    pvVar2 = *(void **)((long)param_1 + 8);
    if ((pvVar2 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar2), iVar1 == 1)) {
      operator_delete(pvVar2);
    }
    operator_delete(param_1);
    return;
  }
  return;
}


// ===== 00cef820  FUN_00cef820 =====

void FUN_00cef820(long *param_1)

{
  *(undefined1 *)(*param_1 + 0x162) = 1;
  FUN_00cea568();
  return;
}


// ===== 00cef834  FUN_00cef834 =====

void FUN_00cef834(undefined8 *param_1)

{
  FUN_00ceb930(*param_1);
  return;
}


// ===== 00cef840  FUN_00cef840 =====

void FUN_00cef840(long *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long local_38;
  long *plStack_30;
  long local_28;
  
  lVar3 = *param_1;
  uVar1 = *(ulong *)(param_3 + 8);
  if ((*(byte *)(param_3 + 0x17) & 0x80) == 0) {
    uVar1 = (ulong)*(byte *)(param_3 + 0x17);
  }
  if (uVar1 == 0) {
    uVar1 = *(ulong *)(lVar3 + 0x1b8);
    if (uVar1 < *(ulong *)(lVar3 + 0x1c0)) {
      FUN_00ceee40(lVar3 + 0x1b0,uVar1);
      *(ulong *)(lVar3 + 0x1b8) = uVar1 + 0x58;
    }
    else {
      uVar2 = FUN_00ceef10(lVar3 + 0x1b0,param_3);
      *(undefined8 *)(lVar3 + 0x1b8) = uVar2;
    }
  }
  else {
    plStack_30 = &local_38;
    local_38 = lVar3;
    local_28 = param_3;
    FUN_007b6160(lVar3 + 200,&plStack_30,FUN_00cef198);
  }
  return;
}


// ===== 00cef8d8  FUN_00cef8d8 =====

void FUN_00cef8d8(undefined8 *param_1)

{
  FUN_00cec370(*param_1);
  return;
}


// ===== 00cef8e4  FUN_00cef8e4 =====

void FUN_00cef8e4(undefined8 *param_1)

{
  FUN_00cec500(*param_1);
  return;
}


// ===== 00cef8f0  FUN_00cef8f0 =====

void FUN_00cef8f0(undefined8 *param_1)

{
  FUN_00cec438(*param_1);
  return;
}


// ===== 00cef8fc  FUN_00cef8fc =====

void FUN_00cef8fc(undefined8 *param_1)

{
  FUN_00cedac4(*param_1);
  return;
}


// ===== 00cef908  FUN_00cef908 =====

void FUN_00cef908(undefined8 *param_1)

{
  FUN_00cec818(*param_1,*(undefined4 *)(param_1 + 1));
  return;
}


// ===== 00cef91c  FUN_00cef91c =====

void FUN_00cef91c(undefined8 *param_1)

{
  FUN_00cec818(*param_1,*(undefined4 *)(param_1 + 1));
  return;
}


// ===== 00cef930  FUN_00cef930 =====

void FUN_00cef930(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  lVar7 = *param_1;
  if (*(long *)(lVar7 + 0x68) == param_2) {
    *(undefined8 *)(lVar7 + 0x68) = 0;
  }
  else {
    plVar5 = *(long **)(lVar7 + 0x70);
    plVar2 = *(long **)(lVar7 + 0x78);
    if (plVar5 == plVar2) {
joined_r0x00cef9f4:
      if (plVar5 != plVar2) {
        memmove(plVar5,plVar5 + 1,(long)plVar2 - (long)(plVar5 + 1));
        plVar5 = *(long **)(lVar7 + 0x78);
        uVar6 = (ulong)((long)plVar5 + (-8 - ((long)plVar5 << 0x3d))) >> 3;
        uVar4 = (((long)plVar2 - (long)plVar5 << 0x3d) - ((long)plVar2 - (long)plVar5)) + 8U >> 3;
        if (uVar6 <= uVar4) {
          uVar4 = uVar6;
        }
        if ((1 < uVar4) && ((-(int)plVar5 & 7U) == 0)) {
          uVar4 = uVar4 & 0x1ffffffffffffffe;
          plVar5 = plVar5 + -uVar4;
          do {
            uVar4 = uVar4 - 2;
          } while (uVar4 != 0);
        }
        do {
          if (plVar5 == plVar2 + -1) {
            *(long **)(lVar7 + 0x78) = plVar2 + -1;
            return;
          }
          plVar5 = plVar5 + -1;
        } while (plVar5 != (long *)0x0);
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    else {
      uVar4 = (long)plVar2 + (-8 - (long)plVar5);
      uVar3 = (uint)uVar4;
      if ((~uVar3 & 0x18) != 0) {
        uVar6 = (ulong)((uVar3 >> 3) + 1) & 3;
        do {
          if (*plVar5 == param_2) goto joined_r0x00cef9f4;
          uVar6 = uVar6 - 1;
          plVar5 = plVar5 + 1;
        } while (uVar6 != 0);
      }
      if (0x17 < uVar4) {
        plVar5 = plVar5 + 2;
        do {
          if (plVar5[-2] == param_2) {
            plVar5 = plVar5 + -2;
            goto joined_r0x00cef9f4;
          }
          if (plVar5[-1] == param_2) {
            plVar5 = plVar5 + -1;
            goto joined_r0x00cef9f4;
          }
          if (*plVar5 == param_2) goto joined_r0x00cef9f4;
          if (plVar5[1] == param_2) {
            plVar5 = plVar5 + 1;
            goto joined_r0x00cef9f4;
          }
          plVar1 = plVar5 + 2;
          plVar5 = plVar5 + 4;
        } while (plVar1 != plVar2);
      }
    }
    uVar4 = FUN_004249b0();
    if ((uVar4 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../p2p/client/basic_port_allocator.cc",0x3573,
                   "Unexpected OnPortDestroyed for nonexistent port.");
      return;
    }
  }
  return;
}


// ===== 00cefae4  FUN_00cefae4 =====

void FUN_00cefae4(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  lVar7 = *param_1;
  if (*(long *)(lVar7 + 0x68) == param_2) {
    *(undefined8 *)(lVar7 + 0x68) = 0;
  }
  else {
    plVar5 = *(long **)(lVar7 + 0x70);
    plVar2 = *(long **)(lVar7 + 0x78);
    if (plVar5 == plVar2) {
joined_r0x00cefba8:
      if (plVar5 != plVar2) {
        memmove(plVar5,plVar5 + 1,(long)plVar2 - (long)(plVar5 + 1));
        plVar5 = *(long **)(lVar7 + 0x78);
        uVar6 = (ulong)((long)plVar5 + (-8 - ((long)plVar5 << 0x3d))) >> 3;
        uVar4 = (((long)plVar2 - (long)plVar5 << 0x3d) - ((long)plVar2 - (long)plVar5)) + 8U >> 3;
        if (uVar6 <= uVar4) {
          uVar4 = uVar6;
        }
        if ((1 < uVar4) && ((-(int)plVar5 & 7U) == 0)) {
          uVar4 = uVar4 & 0x1ffffffffffffffe;
          plVar5 = plVar5 + -uVar4;
          do {
            uVar4 = uVar4 - 2;
          } while (uVar4 != 0);
        }
        do {
          if (plVar5 == plVar2 + -1) {
            *(long **)(lVar7 + 0x78) = plVar2 + -1;
            return;
          }
          plVar5 = plVar5 + -1;
        } while (plVar5 != (long *)0x0);
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    else {
      uVar4 = (long)plVar2 + (-8 - (long)plVar5);
      uVar3 = (uint)uVar4;
      if ((~uVar3 & 0x18) != 0) {
        uVar6 = (ulong)((uVar3 >> 3) + 1) & 3;
        do {
          if (*plVar5 == param_2) goto joined_r0x00cefba8;
          uVar6 = uVar6 - 1;
          plVar5 = plVar5 + 1;
        } while (uVar6 != 0);
      }
      if (0x17 < uVar4) {
        plVar5 = plVar5 + 2;
        do {
          if (plVar5[-2] == param_2) {
            plVar5 = plVar5 + -2;
            goto joined_r0x00cefba8;
          }
          if (plVar5[-1] == param_2) {
            plVar5 = plVar5 + -1;
            goto joined_r0x00cefba8;
          }
          if (*plVar5 == param_2) goto joined_r0x00cefba8;
          if (plVar5[1] == param_2) {
            plVar5 = plVar5 + 1;
            goto joined_r0x00cefba8;
          }
          plVar1 = plVar5 + 2;
          plVar5 = plVar5 + 4;
        } while (plVar1 != plVar2);
      }
    }
    uVar4 = FUN_004249b0();
    if ((uVar4 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../p2p/client/basic_port_allocator.cc",0x3573,
                   "Unexpected OnPortDestroyed for nonexistent port.");
      return;
    }
  }
  return;
}


// ===== 00cefc98  FUN_00cefc98 =====

undefined1  [16] FUN_00cefc98(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  
  plVar6 = (long *)*param_1;
  plVar7 = plVar6 + 1;
  plVar8 = plVar7;
  plVar1 = (long *)*plVar7;
joined_r0x00cefcc0:
  do {
    if (plVar1 == (long *)0x0) {
LAB_00cefd10:
      puVar3 = (undefined8 *)operator_new(0x68);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = 0;
        if (puVar3 + 4 != (undefined8 *)0x0) {
          FUN_007e8cec(puVar3 + 4,param_3);
          *puVar3 = 0;
          puVar3[1] = 0;
          puVar3[2] = plVar8;
          *plVar7 = (long)puVar3;
          puVar4 = puVar3;
          if (*(long *)*plVar6 != 0) {
            *plVar6 = *(long *)*plVar6;
            puVar4 = (undefined8 *)*plVar7;
          }
          FUN_005d5b94(plVar6[1],puVar4);
          uVar5 = 1;
          plVar6[2] = plVar6[2] + 1;
LAB_00cefd6c:
          auVar9._8_8_ = uVar5;
          auVar9._0_8_ = puVar3;
          return auVar9;
        }
      }
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    uVar2 = FUN_007e97f4(param_2,plVar1 + 4);
    plVar8 = plVar1;
    if ((uVar2 & 1) != 0) {
      plVar7 = plVar1;
      plVar1 = (long *)*plVar1;
      goto joined_r0x00cefcc0;
    }
    uVar2 = FUN_007e97f4(plVar1 + 4,param_2);
    if ((uVar2 & 1) == 0) {
      puVar3 = (undefined8 *)*plVar7;
      if (puVar3 != (undefined8 *)0x0) {
        uVar5 = 0;
        goto LAB_00cefd6c;
      }
      goto LAB_00cefd10;
    }
    plVar7 = plVar1 + 1;
    plVar1 = (long *)*plVar7;
  } while( true );
}


// ===== 00cefdac  FUN_00cefdac =====

void FUN_00cefdac(void)

{
  return;
}


// ===== 00cefdb4  FUN_00cefdb4 =====

void FUN_00cefdb4(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00cefdc0  FUN_00cefdc0 =====

long * FUN_00cefdc0(undefined8 param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  plVar1 = (long *)FUN_00cefe34(param_2,param_3);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x1d0))(plVar1,*(undefined4 *)(*(long *)(param_2 + 0x48) + 0x48));
    lVar4 = *(long *)(param_2 + 0x48);
    lVar3 = (long)*(char *)(lVar4 + 0x9f);
    if (lVar3 < 0) {
      lVar2 = *(long *)(lVar4 + 0x88);
      lVar3 = *(long *)(lVar4 + 0x90);
    }
    else {
      lVar2 = lVar4 + 0x88;
    }
    FUN_00cf0ef0(plVar1,lVar2,lVar3);
  }
  return plVar1;
}


// ===== 00cefe34  FUN_00cefe34 =====

void * FUN_00cefe34(long *param_1,undefined8 param_2)

{
  long lVar1;
  byte bVar2;
  long *plVar3;
  int iVar4;
  ulong uVar5;
  void *pvVar6;
  long *local_a8;
  long local_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long local_80;
  long lStack_78;
  long local_70;
  long *plStack_68;
  ulong local_60;
  long *plStack_58;
  ulong local_50;
  long *plStack_48;
  ulong local_40;
  long lStack_38;
  
  uVar5 = FUN_00cf0160();
  if ((uVar5 & 1) == 0) {
    pvVar6 = (void *)0x0;
  }
  else {
    pvVar6 = operator_new(0x470);
    local_a8 = (long *)*param_1;
    if (local_a8 != (long *)0x0) {
      FUN_00d0f740(1,local_a8 + 1);
    }
    lStack_98 = param_1[2];
    local_a0 = param_1[1];
    lStack_88 = param_1[4];
    lStack_90 = param_1[3];
    lStack_78 = param_1[6];
    local_80 = param_1[5];
    local_70 = param_1[7];
    local_60 = param_1[0xb];
    plStack_68 = (long *)param_1[10];
    if (-1 < (char)*(byte *)((long)param_1 + 0x67)) {
      local_60 = (ulong)*(byte *)((long)param_1 + 0x67);
      plStack_68 = param_1 + 10;
    }
    bVar2 = *(byte *)((long)param_1 + 0x97);
    local_50 = param_1[0xe];
    plStack_58 = (long *)param_1[0xd];
    if (-1 < (char)*(byte *)((long)param_1 + 0x7f)) {
      local_50 = (ulong)*(byte *)((long)param_1 + 0x7f);
      plStack_58 = param_1 + 0xd;
    }
    plStack_48 = (long *)param_1[0x10];
    if (-1 < (char)bVar2) {
      plStack_48 = param_1 + 0x10;
    }
    lStack_38 = param_1[0x15];
    local_40 = param_1[0x11];
    if (-1 < (char)bVar2) {
      local_40 = (ulong)bVar2;
    }
    lVar1 = param_1[9];
    FUN_00cf0238(pvVar6,&local_a8,param_2,param_1[8],lVar1 + 0x18,(int)param_1[0x14],lVar1 + 0x50,
                 lVar1 + 0x68,param_1[0x13],*(undefined8 *)(lVar1 + 0x80));
    plVar3 = local_a8;
    if ((local_a8 != (long *)0x0) && (iVar4 = FUN_00d0f7a0(0xffffffff,local_a8 + 1), iVar4 == 1)) {
      (**(code **)(*plVar3 + 8))(plVar3);
    }
  }
  return pvVar6;
}


// ===== 00ceff88  FUN_00ceff88 =====

long * FUN_00ceff88(undefined8 param_1,long param_2,undefined4 param_3,undefined4 param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  plVar1 = (long *)FUN_00cf0000(param_2,param_3,param_4);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x1d0))(plVar1,*(undefined4 *)(*(long *)(param_2 + 0x48) + 0x48));
    lVar4 = *(long *)(param_2 + 0x48);
    lVar3 = (long)*(char *)(lVar4 + 0x9f);
    if (lVar3 < 0) {
      lVar2 = *(long *)(lVar4 + 0x88);
      lVar3 = *(long *)(lVar4 + 0x90);
    }
    else {
      lVar2 = lVar4 + 0x88;
    }
    FUN_00cf0ef0(plVar1,lVar2,lVar3);
  }
  return plVar1;
}


// ===== 00cf0000  FUN_00cf0000 =====

void * FUN_00cf0000(long *param_1,undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  byte bVar2;
  long *plVar3;
  int iVar4;
  ulong uVar5;
  void *pvVar6;
  long *local_a8;
  long local_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long local_80;
  long lStack_78;
  long local_70;
  long *plStack_68;
  ulong local_60;
  long *plStack_58;
  ulong local_50;
  long *plStack_48;
  ulong local_40;
  long lStack_38;
  
  uVar5 = FUN_00cf0160();
  if ((uVar5 & 1) == 0) {
    pvVar6 = (void *)0x0;
  }
  else {
    pvVar6 = operator_new(0x470);
    local_a8 = (long *)*param_1;
    if (local_a8 != (long *)0x0) {
      FUN_00d0f740(1,local_a8 + 1);
    }
    lStack_98 = param_1[2];
    local_a0 = param_1[1];
    lStack_88 = param_1[4];
    lStack_90 = param_1[3];
    lStack_78 = param_1[6];
    local_80 = param_1[5];
    local_70 = param_1[7];
    local_60 = param_1[0xb];
    plStack_68 = (long *)param_1[10];
    if (-1 < (char)*(byte *)((long)param_1 + 0x67)) {
      local_60 = (ulong)*(byte *)((long)param_1 + 0x67);
      plStack_68 = param_1 + 10;
    }
    bVar2 = *(byte *)((long)param_1 + 0x97);
    local_50 = param_1[0xe];
    plStack_58 = (long *)param_1[0xd];
    if (-1 < (char)*(byte *)((long)param_1 + 0x7f)) {
      local_50 = (ulong)*(byte *)((long)param_1 + 0x7f);
      plStack_58 = param_1 + 0xd;
    }
    plStack_48 = (long *)param_1[0x10];
    if (-1 < (char)bVar2) {
      plStack_48 = param_1 + 0x10;
    }
    lStack_38 = param_1[0x15];
    local_40 = param_1[0x11];
    if (-1 < (char)bVar2) {
      local_40 = (ulong)bVar2;
    }
    lVar1 = param_1[9];
    FUN_00cf06e4(pvVar6,&local_a8,param_2,param_3,param_1[8],lVar1 + 0x18,(int)param_1[0x14],
                 lVar1 + 0x50,lVar1 + 0x68,param_1[0x13],*(undefined8 *)(lVar1 + 0x80));
    plVar3 = local_a8;
    if ((local_a8 != (long *)0x0) && (iVar4 = FUN_00d0f7a0(0xffffffff,local_a8 + 1), iVar4 == 1)) {
      (**(code **)(*plVar3 + 8))(plVar3);
    }
  }
  return pvVar6;
}


// ===== 00cf0160  FUN_00cf0160 =====

undefined8 FUN_00cf0160(long param_1)

{
  undefined2 uVar1;
  ulong uVar2;
  long lVar3;
  
  if ((*(char *)(*(long *)(param_1 + 0x48) + 0x2f) < '\0') &&
     (0x1fd < *(ulong *)(*(long *)(param_1 + 0x48) + 0x20))) {
    uVar2 = FUN_004249b0();
    if ((uVar2 & 1) == 0) {
      lVar3 = (long)*(char *)(*(long *)(param_1 + 0x48) + 0x2f);
      if (lVar3 < 0) {
        lVar3 = *(long *)(*(long *)(param_1 + 0x48) + 0x20);
      }
      FUN_00623bb0(&DAT_0025992d,"../../p2p/base/turn_port.h",0x22b,
                   "Attempt to use TURN with a too long username ","of length ",lVar3);
    }
  }
  else {
    uVar1 = FUN_007e8eb4(*(undefined8 *)(param_1 + 0x40));
    uVar2 = FUN_00cf15b4(uVar1);
    if ((uVar2 & 1) != 0) {
      return 1;
    }
    uVar2 = FUN_004249b0();
    if ((uVar2 & 1) == 0) {
      uVar1 = FUN_007e8eb4(*(undefined8 *)(param_1 + 0x40));
      FUN_00623bb0(&DAT_001f4e94,"../../p2p/base/turn_port.h",0x263,
                   "Attempt to use TURN to connect to port ",uVar1);
    }
  }
  return 0;
}


// ===== 00cf0238  FUN_00cf0238 =====

void FUN_00cf0238(undefined8 *param_1,long param_2,undefined8 param_3,long param_4,
                 undefined8 *param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *local_88 [2];
  code *local_78;
  undefined *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  FUN_00cf877c(param_1,param_2,3);
  *param_1 = &PTR_FUN_00d50300;
  FUN_007e8cec(param_1 + 0x4c,param_4);
  *(undefined4 *)(param_1 + 0x55) = *(undefined4 *)(param_4 + 0x48);
  FUN_00cf0438(param_1 + 0x56,param_1);
  *(undefined4 *)(param_1 + 0x59) = 0;
  FUN_00843ef4(param_1 + 0x5a,param_7);
  FUN_00843ef4(param_1 + 0x5d,param_8);
  param_1[0x60] = param_10;
  if (*(char *)((long)param_5 + 0x17) < '\0') {
    FUN_005478d8(param_1 + 0x61,*param_5,param_5[1]);
  }
  else {
    uVar3 = param_5[1];
    uVar2 = *param_5;
    param_1[99] = param_5[2];
    param_1[0x62] = uVar3;
    param_1[0x61] = uVar2;
  }
  if (*(char *)((long)param_5 + 0x2f) < '\0') {
    FUN_005478d8(param_1 + 100,param_5[3],param_5[4]);
  }
  else {
    uVar3 = param_5[4];
    uVar2 = param_5[3];
    param_1[0x66] = param_5[5];
    param_1[0x65] = uVar3;
    param_1[100] = uVar2;
  }
  param_1[0x6a] = param_3;
  param_1[0x67] = param_1 + 0x68;
  param_1[0x6b] = 0;
  param_1[0x6d] = 0;
  param_1[0x6f] = 0;
  param_1[0x6e] = 0;
  param_1[0x6c] = param_1 + 0x6d;
  param_1[0x69] = 0;
  param_1[0x68] = 0;
  local_78 = FUN_00cf7e04;
  local_70 = &DAT_0025a5f8;
  param_1[0x70] = 0xffffffff00000000;
  local_88[0] = param_1;
  FUN_00c68a38(param_1 + 0x71,*(undefined8 *)(param_2 + 0x28),local_88);
  if (*(code **)(local_70 + 8) != (code *)0x0) {
    (**(code **)(local_70 + 8))(local_88[0]);
  }
  param_1[0x81] = 0;
  param_1[0x83] = 0;
  param_1[0x85] = 0;
  param_1[0x84] = 0;
  param_1[0x7a] = 0;
  param_1[0x79] = 0;
  param_1[0x7c] = 0;
  param_1[0x7b] = 0;
  param_1[0x7e] = 0;
  param_1[0x7d] = 0;
  param_1[0x80] = 0;
  param_1[0x7f] = 0;
  *(undefined4 *)(param_1 + 0x82) = 0x4000;
  *(undefined4 *)(param_1 + 0x86) = 0;
  *(undefined4 *)((long)param_1 + 0x434) = param_6;
  param_1[0x87] = 0;
  param_1[0x88] = param_9;
  param_1[0x89] = 0;
  param_1[0x8b] = 0;
  param_1[0x8a] = 0;
  FUN_007ebca0(param_1 + 0x8c);
  param_1[0x8d] = 0;
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00cf0438  FUN_00cf0438 =====

/* WARNING: Removing unreachable block (ram,0x00cf0620) */
/* WARNING: Removing unreachable block (ram,0x00cf04dc) */
/* WARNING: Removing unreachable block (ram,0x00cf04fc) */
/* WARNING: Removing unreachable block (ram,0x00cf06d0) */

void FUN_00cf0438(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined8 ***pppuVar4;
  undefined1 **ppuVar5;
  undefined2 uVar6;
  undefined8 ****ppppuVar7;
  undefined4 uVar8;
  undefined1 *local_b0;
  ulong uStack_a8;
  byte bStack_99;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 ***local_80;
  undefined1 *puStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined1 *puStack_58;
  undefined8 local_50;
  undefined8 ***local_48;
  ulong uStack_40;
  ulong local_38;
  
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = (undefined8 ***)&DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_005d3510(&local_60,&DAT_0019f030);
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = (undefined8 ***)&DAT_aaaaaaaaaaaaaaaa;
  FUN_005d3510(&local_80,&DAT_001c78c9);
  iVar3 = *(int *)(param_2 + 0x2a8);
  if (iVar3 - 3U < 2) {
    local_50 = (undefined1 *)CONCAT17(5,(undefined7)local_50);
    ppppuVar7 = (undefined8 ****)&local_60;
    uVar8 = 0x6e727574;
                    /* WARNING: Ignoring partial resolution of indirect */
    local_60._4_2_ = 0x73;
  }
  else {
    if (iVar3 != 0) {
      if (iVar3 != 1) goto LAB_00cf054c;
      local_50 = (undefined1 *)CONCAT17(5,(undefined7)local_50);
                    /* WARNING: Ignoring partial resolution of indirect */
      local_60._4_2_ = 0x73;
                    /* WARNING: Ignoring partial resolution of indirect */
      local_60._0_4_ = 0x6e727574;
    }
    if ((long)local_70 < 0) {
      puStack_78 = (undefined1 *)0x3;
      ppppuVar7 = (undefined8 ****)local_80;
    }
    else {
      local_70 = (undefined1 *)CONCAT17(3,(undefined7)local_70);
      ppppuVar7 = &local_80;
    }
    uVar8 = 0x706475;
  }
  *(undefined4 *)ppppuVar7 = uVar8;
LAB_00cf054c:
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  puVar2 = puStack_58;
  pppuVar4 = local_60;
  if (-1 < (long)local_50) {
    puVar2 = (undefined1 *)((ulong)local_50 >> 0x38);
    pppuVar4 = (undefined8 ***)&local_60;
  }
  FUN_00547cac(&local_98,pppuVar4,puVar2);
  FUN_00547cac(&local_98,&DAT_001ca603,1);
  FUN_007e8ec0(&local_b0,param_2 + 0x260);
  ppuVar5 = (undefined1 **)local_b0;
  if (-1 < (char)bStack_99) {
    uStack_a8 = (ulong)bStack_99;
    ppuVar5 = &local_b0;
  }
  FUN_00547cac(&local_98,ppuVar5,uStack_a8);
  FUN_00547cac(&local_98,&DAT_001ca603,1);
  uVar6 = FUN_007e8eb4(param_2 + 0x260);
  local_48 = (undefined8 ****)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_005f55c4(&local_48,0x16,uVar6);
  uVar1 = uStack_40;
  ppppuVar7 = (undefined8 ****)local_48;
  if (-1 < (long)local_38) {
    uVar1 = local_38 >> 0x38;
    ppppuVar7 = &local_48;
  }
  FUN_00547cac(&local_98,ppppuVar7,uVar1);
  FUN_00547cac(&local_98,"?transport=",0xb);
  puVar2 = puStack_78;
  ppppuVar7 = (undefined8 ****)local_80;
  if (-1 < (long)local_70) {
    puVar2 = (undefined1 *)((ulong)local_70 >> 0x38);
    ppppuVar7 = &local_80;
  }
  FUN_00547cac(&local_98,ppppuVar7,puVar2);
  if ((char)bStack_99 < '\0') {
    operator_delete(local_b0);
  }
  param_1[1] = uStack_90;
  *param_1 = local_98;
  param_1[2] = local_88;
  if ((long)local_70 < 0) {
    operator_delete(local_80);
  }
  return;
}


// ===== 00cf06e4  FUN_00cf06e4 =====

void FUN_00cf06e4(undefined8 *param_1,long param_2,undefined4 param_3,undefined4 param_4,
                 long param_5,undefined8 *param_6,undefined4 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *local_88 [2];
  code *local_78;
  undefined *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  FUN_00cf8790(param_1,param_2,3,param_3,param_4,0);
  *param_1 = &PTR_FUN_00d50300;
  FUN_007e8cec(param_1 + 0x4c,param_5);
  *(undefined4 *)(param_1 + 0x55) = *(undefined4 *)(param_5 + 0x48);
  FUN_00cf0438(param_1 + 0x56,param_1);
  *(undefined4 *)(param_1 + 0x59) = 0;
  FUN_00843ef4(param_1 + 0x5a,param_8);
  FUN_00843ef4(param_1 + 0x5d,param_9);
  param_1[0x60] = param_11;
  if (*(char *)((long)param_6 + 0x17) < '\0') {
    FUN_005478d8(param_1 + 0x61,*param_6,param_6[1]);
  }
  else {
    uVar3 = param_6[1];
    uVar2 = *param_6;
    param_1[99] = param_6[2];
    param_1[0x62] = uVar3;
    param_1[0x61] = uVar2;
  }
  if (*(char *)((long)param_6 + 0x2f) < '\0') {
    FUN_005478d8(param_1 + 100,param_6[3],param_6[4]);
  }
  else {
    uVar3 = param_6[4];
    uVar2 = param_6[3];
    param_1[0x66] = param_6[5];
    param_1[0x65] = uVar3;
    param_1[100] = uVar2;
  }
  param_1[0x6d] = 0;
  param_1[0x67] = param_1 + 0x68;
  param_1[0x6c] = param_1 + 0x6d;
  param_1[0x6f] = 0;
  param_1[0x6e] = 0;
  param_1[0x70] = 0xffffffff00000000;
  local_78 = FUN_00cf7e10;
  local_70 = &DAT_0025a618;
  param_1[0x69] = 0;
  param_1[0x68] = 0;
  param_1[0x6b] = 0;
  param_1[0x6a] = 0;
  local_88[0] = param_1;
  FUN_00c68a38(param_1 + 0x71,*(undefined8 *)(param_2 + 0x28),local_88);
  if (*(code **)(local_70 + 8) != (code *)0x0) {
    (**(code **)(local_70 + 8))(local_88[0]);
  }
  param_1[0x81] = 0;
  param_1[0x83] = 0;
  param_1[0x85] = 0;
  param_1[0x84] = 0;
  param_1[0x7a] = 0;
  param_1[0x79] = 0;
  param_1[0x7c] = 0;
  param_1[0x7b] = 0;
  param_1[0x7e] = 0;
  param_1[0x7d] = 0;
  param_1[0x80] = 0;
  param_1[0x7f] = 0;
  *(undefined4 *)(param_1 + 0x82) = 0x4000;
  *(undefined4 *)(param_1 + 0x86) = 0;
  *(undefined4 *)((long)param_1 + 0x434) = param_7;
  param_1[0x87] = 0;
  param_1[0x88] = param_10;
  param_1[0x89] = 0;
  param_1[0x8b] = 0;
  param_1[0x8a] = 0;
  FUN_007ebca0(param_1 + 0x8c);
  param_1[0x8d] = 0;
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00cf08e4  FUN_00cf08e4 =====

/* WARNING: Removing unreachable block (ram,0x00cf0c0c) */
/* WARNING: Removing unreachable block (ram,0x00cf0c6c) */

void FUN_00cf08e4(undefined8 *param_1)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  long *plVar4;
  void *pvVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  void *pvVar8;
  undefined8 *puVar9;
  undefined8 *local_38;
  
  *param_1 = &PTR_FUN_00d50300;
  if (*(int *)(param_1 + 0x86) == 2) {
    FUN_00c68c6c(param_1 + 0x71);
    pvVar3 = operator_new(0x68);
    FUN_00cf5c50(pvVar3,param_1,0);
    FUN_00c68ac8(param_1 + 0x71,pvVar3,0);
    *(undefined4 *)(param_1 + 0x86) = 3;
  }
  puVar6 = (undefined8 *)param_1[0x84];
  puVar9 = (undefined8 *)param_1[0x83];
  while (puVar9 != puVar6) {
    puVar6 = puVar6 + -1;
    if (puVar6 == (undefined8 *)0x0) goto LAB_00cf0cc8;
    pvVar3 = (void *)*puVar6;
    *puVar6 = 0;
    if (pvVar3 != (void *)0x0) {
      FUN_00cf7aac(pvVar3);
      operator_delete(pvVar3);
    }
  }
  param_1[0x84] = puVar9;
  if (param_1[0x6a] != 0) {
    FUN_007b5df8(param_1[0x6a] + 0x70,param_1);
    FUN_007b5df8(param_1[0x6a] + 0x90,param_1);
    FUN_007b5df8(param_1[0x6a] + 0x50,param_1);
    FUN_00897dfc(param_1[0x6a],param_1);
  }
  FUN_007ebdcc(param_1[0x8c]);
  pvVar3 = (void *)param_1[0x8c];
  if ((pvVar3 != (void *)0x0) && (iVar2 = FUN_00d0f7a0(0xffffffff,pvVar3), iVar2 == 1)) {
    operator_delete(pvVar3);
  }
  if (*(char *)((long)param_1 + 0x45f) < '\0') {
    operator_delete((void *)param_1[0x89]);
    puVar6 = (undefined8 *)param_1[0x83];
  }
  else {
    puVar6 = (undefined8 *)param_1[0x83];
  }
  if (puVar6 == (undefined8 *)0x0) {
    cVar1 = *(char *)((long)param_1 + 0x40f);
  }
  else {
    puVar7 = (undefined8 *)param_1[0x84];
    puVar9 = puVar6;
    if (puVar6 != puVar7) {
      do {
        puVar7 = puVar7 + -1;
        if (puVar7 == (undefined8 *)0x0) goto LAB_00cf0cc8;
        pvVar3 = (void *)*puVar7;
        *puVar7 = 0;
        if (pvVar3 != (void *)0x0) {
          FUN_00cf7aac(pvVar3);
          operator_delete(pvVar3);
        }
      } while (puVar7 != puVar6);
      puVar9 = (undefined8 *)param_1[0x83];
    }
    param_1[0x84] = puVar6;
    operator_delete(puVar9);
    cVar1 = *(char *)((long)param_1 + 0x40f);
  }
  if (cVar1 < '\0') {
    operator_delete((void *)param_1[0x7f]);
    cVar1 = *(char *)((long)param_1 + 0x3f7);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x3f7);
  }
  if (cVar1 < '\0') {
    operator_delete((void *)param_1[0x7c]);
    cVar1 = *(char *)((long)param_1 + 0x3df);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x3df);
  }
  if (cVar1 < '\0') {
    operator_delete((void *)param_1[0x79]);
  }
  FUN_00c68a7c(param_1 + 0x71);
  plVar4 = (long *)param_1[0x6f];
  param_1[0x6f] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  local_38 = param_1 + 0x6c;
  FUN_00c5aabc(&local_38,param_1[0x6d]);
  plVar4 = (long *)param_1[0x6b];
  param_1[0x6b] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  local_38 = param_1 + 0x67;
  FUN_00b8b8d8(&local_38,param_1[0x68]);
  if (*(char *)((long)param_1 + 0x337) < '\0') {
    operator_delete((void *)param_1[100]);
    cVar1 = *(char *)((long)param_1 + 799);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 799);
  }
  if (cVar1 < '\0') {
    operator_delete((void *)param_1[0x61]);
    pvVar3 = (void *)param_1[0x5d];
  }
  else {
    pvVar3 = (void *)param_1[0x5d];
  }
  if (pvVar3 == (void *)0x0) {
    pvVar3 = (void *)param_1[0x5a];
  }
  else {
    pvVar8 = (void *)param_1[0x5e];
    pvVar5 = pvVar3;
    if (pvVar3 != pvVar8) {
      do {
        pvVar8 = (void *)((long)pvVar8 + -0x18);
        if (pvVar8 == (void *)0x0) goto LAB_00cf0cc8;
      } while (pvVar8 != pvVar3);
      pvVar5 = (void *)param_1[0x5d];
    }
    param_1[0x5e] = pvVar3;
    operator_delete(pvVar5);
    pvVar3 = (void *)param_1[0x5a];
  }
  if (pvVar3 == (void *)0x0) {
    cVar1 = *(char *)((long)param_1 + 0x2c7);
  }
  else {
    pvVar8 = (void *)param_1[0x5b];
    pvVar5 = pvVar3;
    if (pvVar3 != pvVar8) {
      do {
        pvVar8 = (void *)((long)pvVar8 + -0x18);
        if (pvVar8 == (void *)0x0) {
LAB_00cf0cc8:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      } while (pvVar8 != pvVar3);
      pvVar5 = (void *)param_1[0x5a];
    }
    param_1[0x5b] = pvVar3;
    operator_delete(pvVar5);
    cVar1 = *(char *)((long)param_1 + 0x2c7);
  }
  if (cVar1 < '\0') {
    operator_delete((void *)param_1[0x56]);
    cVar1 = *(char *)((long)param_1 + 0x277);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x277);
  }
  if (cVar1 < '\0') {
    operator_delete((void *)param_1[0x4c]);
  }
  FUN_00cf8d60(param_1);
  return;
}


// ===== 00cf0cdc  FUN_00cf0cdc =====

void FUN_00cf0cdc(void *param_1)

{
  FUN_00cf08e4();
  operator_delete(param_1);
  return;
}


// ===== 00cf0d0c  FUN_00cf0d0c =====

void FUN_00cf0d0c(long param_1,undefined8 *****param_2,ulong param_3)

{
  ulong uVar1;
  char cVar2;
  int iVar3;
  undefined8 *****__dest;
  void *__s2;
  ulong uVar4;
  undefined8 ****local_68;
  ulong uStack_60;
  undefined8 local_58;
  
  if (param_3 == 0) {
    uVar4 = FUN_004022fc();
    if ((uVar4 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4ed3,"../../p2p/base/turn_port.cc",0x9c2,
                   "Setting realm to the empty string, ","this is not supported.");
      return;
    }
  }
  else {
    cVar2 = *(char *)(param_1 + 0x3df);
    uVar4 = (ulong)cVar2;
    if ((long)uVar4 < 0) {
      __s2 = *(void **)(param_1 + 0x3c8);
      uVar4 = *(ulong *)(param_1 + 0x3d0);
    }
    else {
      __s2 = (void *)(param_1 + 0x3c8);
    }
    if ((param_3 != uVar4) || (iVar3 = memcmp(param_2,__s2,param_3), iVar3 != 0)) {
      if (0x7ffffffffffffff6 < param_3) {
                    /* WARNING: Subroutine does not return */
        FUN_005d45ec();
      }
      if (param_3 < 0x17) {
        local_58 = CONCAT17((char)param_3,(undefined7)local_58);
        __dest = &local_68;
      }
      else {
        uVar4 = (param_3 & 0x7ffffffffffffff8) + 8;
        uVar1 = 0x19;
        if (uVar4 != 0x18) {
          uVar1 = uVar4;
        }
        __dest = (undefined8 *****)operator_new(uVar1);
        local_58 = uVar1 | 0x8000000000000000;
        local_68 = __dest;
        uStack_60 = param_3;
      }
      if ((undefined8 *****)((long)__dest + param_3) < __dest) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
                  );
      }
      if ((__dest <= param_2) && (param_2 < (undefined8 *****)((long)__dest + param_3))) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
                  );
      }
      memmove(__dest,param_2,param_3);
      *(undefined1 *)((long)__dest + param_3) = 0;
      if (cVar2 < '\0') {
        operator_delete(*(void **)(param_1 + 0x3c8));
      }
      *(ulong *)(param_1 + 0x3d0) = uStack_60;
      *(undefined8 *****)(param_1 + 0x3c8) = local_68;
      *(ulong *)(param_1 + 0x3d8) = local_58;
      FUN_00c6ddac(param_1 + 0x308,param_1 + 0x3c8,param_1 + 800,param_1 + 0x3f8);
    }
  }
  return;
}


// ===== 00cf0ecc  FUN_00cf0ecc =====

undefined4 FUN_00cf0ecc(long param_1)

{
  return *(undefined4 *)(param_1 + 0x2a8);
}


// ===== 00cf0ed8  FUN_00cf0ed8 =====

undefined4 FUN_00cf0ed8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x2c8);
}


// ===== 00cf0ee4  FUN_00cf0ee4 =====

void FUN_00cf0ee4(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2c8) = param_2;
  return;
}


// ===== 00cf0ef0  FUN_00cf0ef0 =====

void FUN_00cf0ef0(long param_1,undefined8 ***param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  undefined8 ***__dest;
  undefined8 **local_58;
  ulong uStack_50;
  undefined8 local_48;
  
  if (0x7ffffffffffffff6 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
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
    cVar3 = *(char *)(param_1 + 0x45f);
    *(undefined1 *)((long)__dest + param_3) = 0;
    if (cVar3 < '\0') {
      operator_delete(*(void **)(param_1 + 0x448));
    }
    *(ulong *)(param_1 + 0x450) = uStack_50;
    *(undefined8 ***)(param_1 + 0x448) = local_58;
    *(ulong *)(param_1 + 0x458) = local_48;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
            );
}


// ===== 00cf100c  FUN_00cf100c =====

void FUN_00cf100c(undefined8 param_1,long param_2)

{
  FUN_00843ef4(param_1,param_2 + 0x2d0);
  return;
}


// ===== 00cf101c  FUN_00cf101c =====

void FUN_00cf101c(undefined8 param_1,long param_2)

{
  FUN_00843ef4(param_1,param_2 + 0x2e8);
  return;
}


// ===== 00cf102c  FUN_00cf102c =====

void FUN_00cf102c(long *param_1)

{
  short sVar1;
  ushort uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined8 uVar9;
  long *local_c0 [2];
  code *local_b0;
  code *pcStack_a8;
  void *local_98;
  undefined4 local_90;
  char cStack_81;
  void *local_78 [2];
  char cStack_61;
  undefined1 uStack_59;
  char *local_58;
  undefined8 local_50;
  undefined1 *local_48;
  void **local_40;
  char **ppcStack_38;
  char *local_30;
  void ***pppvStack_28;
  
  if (*(char *)((long)param_1 + 799) < '\0') {
    if (param_1[0x62] != 0) goto LAB_00cf105c;
  }
  else if (*(char *)((long)param_1 + 799) != '\0') {
LAB_00cf105c:
    if (*(char *)((long)param_1 + 0x337) < '\0') {
      if (param_1[0x65] == 0) goto LAB_00cf10c8;
    }
    else if (*(char *)((long)param_1 + 0x337) == '\0') goto LAB_00cf10c8;
    sVar1 = FUN_007e8eb4(param_1 + 0x4c);
    if (sVar1 == 0) {
      FUN_007e8c58(param_1 + 0x4c,0xd96);
    }
    uVar2 = FUN_007e8eb4(param_1 + 0x4c);
    if ((((uVar2 < 0x400) && (uVar2 != 0x35)) && (uVar2 != 0x50)) && (uVar2 != 0x1bb)) {
      uVar5 = FUN_004249b0();
      if ((uVar5 & 1) == 0) {
        (**(code **)(*param_1 + 0x110))(&local_98,param_1);
        uVar3 = FUN_007e8eb4(param_1 + 0x4c);
        FUN_00623bb0(&DAT_00259892,"../../p2p/base/turn_port.cc",0xb83,&local_98,
                     ": Attempt to start allocation with disallowed port# ",uVar3);
        if (cStack_81 < '\0') {
          operator_delete(local_98);
        }
      }
      pcVar8 = "Attempt to start allocation to a disallowed port.";
      uVar7 = 500;
      uVar9 = 0x31;
    }
    else {
      uVar5 = FUN_007e95a4(param_1 + 0x4c);
      if ((uVar5 & 1) != 0) {
        FUN_00cf15dc(param_1);
        return;
      }
      uVar5 = FUN_00cfb3f8(param_1,param_1 + 0x4c);
      if ((uVar5 & 1) != 0) {
        lVar6 = FUN_0066631c("WebRTC.PeerConnection.Turn.ServerAddressType",0x2c,4);
        if (lVar6 != 0) {
          uVar4 = FUN_007e9680(param_1 + 0x4c);
          FUN_00666568(lVar6,uVar4);
        }
        local_b0 = FUN_004473ec;
        pcStack_a8 = FUN_00cf7e1c;
        local_c0[0] = param_1;
        FUN_00cfc664(param_1,param_1 + 0x4c,local_c0);
        (*local_b0)(0,local_c0,local_c0);
        return;
      }
      uVar5 = FUN_004249b0();
      if ((uVar5 & 1) == 0) {
        local_58 = "../../p2p/base/turn_port.cc";
        local_50 = 0xbfb;
        local_48 = &uStack_59;
        (**(code **)(*param_1 + 0x110))(local_78,param_1);
        ppcStack_38 = &local_58;
        pppvStack_28 = &local_40;
        lVar6 = param_1[0x50];
        local_30 = ": IP address family does not match. Server: ";
        local_40 = local_78;
        (**(code **)(*param_1 + 0x18))(param_1);
        FUN_00bca960(&local_98);
        FUN_00623bb0(&DAT_00259883,*pppvStack_28[1],*(undefined4 *)(pppvStack_28[1] + 1),
                     *pppvStack_28,local_30,(int)lVar6," local: ",local_90);
        if (cStack_61 < '\0') {
          operator_delete(local_78[0]);
        }
      }
      pcVar8 = "TURN server address is incompatible.";
      uVar7 = 0;
      uVar9 = 0x24;
    }
    goto LAB_00cf1134;
  }
LAB_00cf10c8:
  uVar5 = FUN_004249b0();
  if ((uVar5 & 1) == 0) {
    (**(code **)(*param_1 + 0x110))(&local_98,param_1);
    FUN_00623bb0(&DAT_00223e94,"../../p2p/base/turn_port.cc",0xb03,&local_98,
                 ": Allocation can\'t be started without setting the TURN server credentials for the user."
                );
    if (cStack_81 < '\0') {
      operator_delete(local_98);
    }
  }
  pcVar8 = "Missing TURN server credentials.";
  uVar7 = 0x191;
  uVar9 = 0x20;
LAB_00cf1134:
  FUN_00cf1328(param_1,uVar7,pcVar8,uVar9);
  return;
}


// ===== 00cf1328  FUN_00cf1328 =====

/* WARNING: Removing unreachable block (ram,0x00cf159c) */
/* WARNING: Removing unreachable block (ram,0x00cf15b0) */
/* WARNING: Removing unreachable block (ram,0x00cf1570) */
/* WARNING: Type propagation algorithm not settling */

void FUN_00cf1328(long *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined8 *******pppppppuVar2;
  undefined2 uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 in_x7;
  long lVar6;
  long *local_c0 [2];
  code *local_b0;
  code *pcStack_a8;
  void *local_a0;
  char cStack_89;
  void *local_80;
  char cStack_69;
  undefined8 *******local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 uStack_41;
  
  plVar4 = (long *)(**(code **)(*param_1 + 0x130))();
  lVar6 = param_1[0x8c];
  if (lVar6 != 0) {
    FUN_00d0f740(1,lVar6);
  }
  local_c0[0] = (long *)operator_new(0x30);
  *local_c0[0] = lVar6;
  local_c0[0][4] = (long)FUN_004473ec;
  local_c0[0][5] = (long)FUN_00cf83c4;
  local_c0[0][2] = (long)param_1;
  local_b0 = FUN_005db390;
  pcStack_a8 = FUN_005db348;
  (**(code **)(*plVar4 + 8))(plVar4,local_c0,&local_60,&uStack_41);
  (*local_b0)(0,local_c0,local_c0);
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = (undefined8 *******)&DAT_aaaaaaaaaaaaaaaa;
  if ((long *)param_1[0x6a] == (long *)0x0) {
    FUN_007e8a64(local_c0);
  }
  else {
    (**(code **)(*(long *)param_1[0x6a] + 0x10))(local_c0);
  }
  FUN_007e9004(&local_60,local_c0);
  if ((long)local_b0 < 0) {
    operator_delete(local_c0[0]);
    plVar4 = (long *)param_1[0x6a];
  }
  else {
    plVar4 = (long *)param_1[0x6a];
  }
  if (plVar4 == (long *)0x0) {
    FUN_007e8a64(local_c0);
  }
  else {
    (**(code **)(*plVar4 + 0x10))(local_c0);
  }
  uVar3 = FUN_007e8eb4(local_c0);
  if ((long)local_b0 < 0) {
    operator_delete(local_c0[0]);
  }
  if (((int)param_1[0x55] == 2) && (uVar5 = FUN_007e9674(param_1 + 0x4c), (uVar5 & 1) != 0)) {
    uVar3 = 0;
    local_60 = (undefined8 *******)((ulong)local_60 & 0xffffffffffffff00);
    local_50 = (undefined1 *)((ulong)local_50 & 0xffffffffffffff);
  }
  if (param_2 != 0) {
    lVar6 = (long)*(char *)((long)param_1 + 0x2c7);
    puVar1 = puStack_58;
    pppppppuVar2 = local_60;
    if (-1 < (long)local_50) {
      puVar1 = (undefined1 *)((ulong)local_50 >> 0x38);
      pppppppuVar2 = &local_60;
    }
    if (lVar6 < 0) {
      plVar4 = (long *)param_1[0x56];
      lVar6 = param_1[0x57];
    }
    else {
      plVar4 = param_1 + 0x56;
    }
    FUN_00cf3f18(local_c0,pppppppuVar2,puVar1,uVar3,plVar4,lVar6,param_2,in_x7,param_3,param_4);
    FUN_00cf9c10(param_1,local_c0);
    if (cStack_69 < '\0') {
      operator_delete(local_80);
    }
    if (cStack_89 < '\0') {
      operator_delete(local_a0);
    }
    if ((long)local_b0 < 0) {
      operator_delete(local_c0[0]);
    }
  }
  return;
}


// ===== 00cf15b4  FUN_00cf15b4 =====

bool FUN_00cf15b4(int param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  
  bVar1 = param_1 == 0x35;
  bVar2 = param_1 == 0x50;
  bVar3 = param_1 == 0x1bb;
  return (((bVar1 || bVar2) || bVar3) || param_1 != 0x3ff) &&
         (((!bVar1 && !bVar2) && !bVar3) && param_1 + -0x3ff < 0) ==
         (((!bVar1 && !bVar2) && !bVar3) && SBORROW4(param_1,0x3ff));
}


// ===== 00cf15dc  FUN_00cf15dc =====

/* WARNING: Removing unreachable block (ram,0x00cf1738) */

void FUN_00cf15dc(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *local_80 [2];
  code *local_70;
  code *pcStack_68;
  void *local_60 [2];
  char cStack_49;
  undefined1 local_48 [24];
  
  if (param_1[0x6f] != 0) {
    return;
  }
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    (**(code **)(*param_1 + 0x110))(local_48,param_1);
    FUN_007e924c(local_60,param_2);
    FUN_00623bb0(&DAT_0025987e,"../../p2p/base/turn_port.cc",0x1b79,local_48,
                 ": Starting TURN host lookup for ",local_60);
    if (cStack_49 < '\0') {
      operator_delete(local_60[0]);
    }
  }
  plVar2 = (long *)(**(code **)(*param_1 + 0x138))(param_1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x28))();
  plVar4 = (long *)param_1[0x6f];
  param_1[0x6f] = (long)plVar2;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))(plVar4);
    plVar2 = (long *)param_1[0x6f];
  }
  lVar3 = (**(code **)(*param_1 + 0x18))(param_1);
  local_70 = FUN_004473ec;
  pcStack_68 = FUN_00cf81ec;
  local_80[0] = param_1;
  (**(code **)(*plVar2 + 0x18))(plVar2,param_2,*(undefined4 *)(lVar3 + 0x48),local_80);
  (*local_70)(0,local_80,local_80);
  return;
}


// ===== 00cf174c  FUN_00cf174c =====

/* WARNING: Removing unreachable block (ram,0x00cf189c) */

void FUN_00cf174c(long *param_1)

{
  ulong uVar1;
  void *pvVar2;
  void *local_98 [2];
  char cStack_81;
  undefined1 local_80 [16];
  void *local_70 [2];
  char cStack_59;
  long *local_58;
  undefined8 local_50;
  undefined1 *local_48;
  void **local_40;
  long **pplStack_38;
  undefined1 uStack_11;
  
  local_58 = param_1 + 0x67;
  FUN_00cefc98(&local_58,param_1 + 0x4c,param_1 + 0x4c);
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    local_58 = (long *)0x1db146;
    local_50 = 0xd11;
    local_48 = &uStack_11;
    (**(code **)(*param_1 + 0x110))(local_70,param_1);
    local_40 = local_70;
    pplStack_38 = &local_58;
    local_80 = FUN_00b00a9c((int)param_1[0x55]);
    FUN_007e9344(local_98,param_1 + 0x4c);
    FUN_00623bb0(&DAT_0025a638,*pplStack_38,*(undefined4 *)(pplStack_38 + 1),local_40,
                 ": Trying to connect to TURN server via ",local_80,&DAT_001ef21c,local_98);
    if (cStack_81 < '\0') {
      operator_delete(local_98[0]);
    }
    if (cStack_59 < '\0') {
      operator_delete(local_70[0]);
    }
  }
  uVar1 = FUN_00cf1908(param_1);
  if ((uVar1 & 1) == 0) {
    uVar1 = FUN_004249b0();
    if ((uVar1 & 1) == 0) {
      (**(code **)(*param_1 + 0x110))(&local_58,param_1);
      FUN_00623bb0(&DAT_00223e94,"../../p2p/base/turn_port.cc",0xd33,&local_58,
                   ": Failed to create TURN client socket");
    }
    FUN_00cf1328(param_1,0x2bd,"Failed to create TURN client socket.",0x24);
  }
  else if ((int)param_1[0x55] == 0) {
    pvVar2 = operator_new(0x68);
    FUN_00cf4b4c(pvVar2,param_1);
    FUN_00c68ac8(param_1 + 0x71,pvVar2,0);
  }
  return;
}


// ===== 00cf1908  FUN_00cf1908 =====

/* WARNING: Removing unreachable block (ram,0x00cf1bb0) */
/* WARNING: Removing unreachable block (ram,0x00cf1e38) */

void FUN_00cf1908(long *param_1)

{
  long lVar1;
  long *plVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  undefined4 uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long *local_170;
  long lStack_168;
  code *local_160;
  code *pcStack_158;
  long *local_150 [2];
  code *local_140;
  code *pcStack_138;
  undefined1 auStack_130 [32];
  undefined8 local_110;
  long local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  long lStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  long local_d8;
  long *local_d0;
  code *pcStack_c8;
  code *local_c0;
  long *local_88 [2];
  code *local_78;
  undefined *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  iVar7 = (int)param_1[0x55];
  if (iVar7 == 0) {
    uVar4 = (**(code **)(*param_1 + 0x40))(param_1);
    if ((uVar4 & 1) == 0) {
      plVar5 = (long *)(**(code **)(*param_1 + 0x138))(param_1);
      (**(code **)(*param_1 + 0x18))(param_1);
      FUN_00bca960(&local_110);
      FUN_007e8cac(&local_d0,&local_110,0);
      lVar6 = (**(code **)(*plVar5 + 0x10))
                        (plVar5,param_1 + 1,&local_d0,(short)param_1[0xb],
                         *(undefined2 *)((long)param_1 + 0x5a));
      plVar5 = (long *)param_1[0x6b];
      param_1[0x6b] = lVar6;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
      param_1[0x6a] = param_1[0x6b];
      lVar6 = param_1[0x6a];
      goto joined_r0x00cf1bd4;
    }
    iVar7 = (int)param_1[0x55];
  }
  if (iVar7 == 4) {
    uVar8 = 0xc;
    if ((int)param_1[0x59] != 1) {
      uVar8 = 6;
    }
LAB_00cf1aa0:
    local_d8 = 0;
    local_110 = CONCAT44(0xaaaaaaaa,uVar8);
    uStack_100 = 0;
    local_108 = 0;
    lStack_f0 = 0;
    local_f8 = 0;
    uStack_e0 = 0;
    local_e8 = 0;
    if (&local_108 != param_1 + 0x5a) {
      FUN_007eeac8(&local_108,param_1[0x5a],param_1[0x5b],
                   (param_1[0x5b] - param_1[0x5a] >> 3) * -0x5555555555555555);
    }
    if (&lStack_f0 != param_1 + 0x5d) {
      FUN_007eeac8();
    }
    local_d8 = param_1[0x60];
    plVar5 = (long *)(**(code **)(*param_1 + 0x138))(param_1);
    (**(code **)(*param_1 + 0x18))(param_1);
    FUN_00bca960(auStack_130);
    FUN_007e8cac(&local_d0,auStack_130,0);
    lVar6 = (**(code **)(*plVar5 + 0x20))(plVar5,param_1 + 1,&local_d0,param_1 + 0x4c,&local_110);
LAB_00cf1b8c:
    plVar5 = (long *)param_1[0x6b];
    param_1[0x6b] = lVar6;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
    param_1[0x6a] = param_1[0x6b];
    FUN_00cf1eac(&local_110);
  }
  else {
    if (iVar7 == 2) {
      uVar8 = 4;
      goto LAB_00cf1aa0;
    }
    if (iVar7 == 1) {
      uVar8 = 0x14;
      if ((int)param_1[0x59] != 1) {
        uVar8 = 0x24;
      }
      local_d8 = 0;
      uStack_e0 = 0;
      local_e8 = 0;
      uStack_100 = 0;
      local_108 = 0;
      lStack_f0 = 0;
      local_f8 = 0;
      local_110 = CONCAT44(0xaaaaaaaa,uVar8);
      if (&local_108 != param_1 + 0x5a) {
        FUN_007eeac8(&local_108,param_1[0x5a],param_1[0x5b],
                     (param_1[0x5b] - param_1[0x5a] >> 3) * -0x5555555555555555);
      }
      if (&lStack_f0 != param_1 + 0x5d) {
        FUN_007eeac8();
      }
      local_d8 = param_1[0x60];
      plVar5 = (long *)(**(code **)(*param_1 + 0x138))(param_1);
      (**(code **)(*param_1 + 0x18))(param_1);
      FUN_00bca960(auStack_130);
      FUN_007e8cac(&local_d0,auStack_130,0);
      lVar6 = (**(code **)(*plVar5 + 0x30))
                        (plVar5,param_1 + 1,&local_d0,param_1 + 0x4c,(short)param_1[0xb],
                         *(undefined2 *)((long)param_1 + 0x5a),&local_110);
      goto LAB_00cf1b8c;
    }
  }
  lVar6 = param_1[0x6a];
joined_r0x00cf1bd4:
  if (lVar6 == 0) {
    *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  }
  else {
    plVar5 = (long *)param_1[0x6c];
    while (plVar5 != param_1 + 0x6d) {
      (**(code **)(*(long *)param_1[0x6a] + 0x48))
                ((long *)param_1[0x6a],*(undefined4 *)((long)plVar5 + 0x1c),(int)plVar5[4]);
      plVar2 = (long *)plVar5[1];
      plVar10 = plVar5;
      if ((long *)plVar5[1] == (long *)0x0) {
        do {
          plVar5 = (long *)plVar10[2];
          bVar3 = plVar10 != (long *)*plVar5;
          plVar10 = plVar5;
        } while (bVar3);
      }
      else {
        do {
          plVar5 = plVar2;
          plVar2 = (long *)*plVar5;
        } while ((long *)*plVar5 != (long *)0x0);
      }
    }
    uVar4 = (**(code **)(*param_1 + 0x40))(param_1);
    if ((uVar4 & 1) == 0) {
      local_140 = FUN_004473ec;
      pcStack_138 = FUN_00cf7f08;
      local_150[0] = param_1;
      FUN_00897e08(param_1[0x6a],local_150);
      (*local_140)(0,local_150,local_150);
    }
    lVar9 = param_1[0x8c];
    lVar11 = param_1[0x6a];
    if (lVar9 != 0) {
      FUN_00d0f740(1,lVar9);
    }
    local_d0 = (long *)operator_new(0x20);
    *local_d0 = (long)param_1;
    local_d0[1] = lVar9;
    local_d0[2] = (long)FUN_00cf7f6c;
    local_d0[3] = (long)FUN_00cf7f1c;
    pcStack_c8 = FUN_00cf7ca4;
    local_c0 = FUN_00cf7cb4;
    FUN_007b5b08(lVar11 + 0x90,param_1,&local_d0);
    lStack_168 = param_1[0x8c];
    lVar9 = param_1[0x6a];
    if (lStack_168 != 0) {
      FUN_00d0f740(1,lStack_168);
    }
    local_160 = FUN_00cf8054;
    pcStack_158 = FUN_00cf7ff0;
    local_170 = param_1;
    FUN_00897f10(lVar9,param_1,&local_170);
    (*local_160)(0,&local_170,&local_170);
    if ((*(uint *)(param_1 + 0x55) < 5) &&
       ((0x16U >> (ulong)(*(uint *)(param_1 + 0x55) & 0x1f) & 1) != 0)) {
      lVar9 = param_1[0x6a];
      local_d0 = (long *)operator_new(0x20);
      *local_d0 = (long)param_1;
      local_d0[2] = (long)FUN_004473ec;
      local_d0[3] = (long)FUN_00cf80d8;
      pcStack_c8 = FUN_00cf7ca4;
      local_c0 = FUN_00cf7cb4;
      FUN_007b5b08(lVar9 + 0x50,param_1,&local_d0);
      local_78 = FUN_00cf80e4;
      local_70 = &DAT_0025a640;
      local_88[0] = param_1;
      FUN_00897d70(param_1[0x6a],param_1,local_88);
      if (*(code **)(local_70 + 8) != (code *)0x0) {
        (**(code **)(local_70 + 8))(local_88[0]);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x86) = 1;
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar6 != 0);
  }
  return;
}


// ===== 00cf1eac  FUN_00cf1eac =====

/* WARNING: Removing unreachable block (ram,0x00cf1efc) */
/* WARNING: Removing unreachable block (ram,0x00cf1f5c) */

void FUN_00cf1eac(long param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar3 = *(void **)(param_1 + 0x20);
  if (pvVar3 != (void *)0x0) {
    pvVar2 = *(void **)(param_1 + 0x28);
    pvVar1 = pvVar3;
    if (pvVar3 != pvVar2) {
      do {
        pvVar2 = (void *)((long)pvVar2 + -0x18);
        if (pvVar2 == (void *)0x0) goto LAB_00cf1fa8;
      } while (pvVar2 != pvVar3);
      pvVar1 = *(void **)(param_1 + 0x20);
    }
    *(void **)(param_1 + 0x28) = pvVar3;
    operator_delete(pvVar1);
  }
  pvVar3 = *(void **)(param_1 + 8);
  if (pvVar3 == (void *)0x0) {
    return;
  }
  pvVar2 = *(void **)(param_1 + 0x10);
  pvVar1 = pvVar3;
  if (pvVar3 != pvVar2) {
    do {
      pvVar2 = (void *)((long)pvVar2 + -0x18);
      if (pvVar2 == (void *)0x0) {
LAB_00cf1fa8:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    } while (pvVar2 != pvVar3);
    pvVar1 = *(void **)(param_1 + 8);
  }
  *(void **)(param_1 + 0x10) = pvVar3;
  operator_delete(pvVar1);
  return;
}


// ===== 00cf1fbc  FUN_00cf1fbc =====

/* WARNING: Removing unreachable block (ram,0x00cf2310) */
/* WARNING: Removing unreachable block (ram,0x00cf2328) */
/* WARNING: Removing unreachable block (ram,0x00cf2074) */
/* WARNING: Removing unreachable block (ram,0x00cf216c) */
/* WARNING: Removing unreachable block (ram,0x00cf248c) */
/* WARNING: Removing unreachable block (ram,0x00cf2380) */
/* WARNING: Removing unreachable block (ram,0x00cf230c) */

void FUN_00cf1fbc(long *param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  void *pvVar6;
  void **ppvVar7;
  char *pcVar8;
  void **ppvVar9;
  long lVar10;
  void *local_168 [2];
  char cStack_151;
  void *local_150 [2];
  char cStack_139;
  void **local_138;
  char **ppcStack_130;
  char *local_128;
  void ***pppvStack_120;
  void *local_118 [2];
  char cStack_101;
  undefined1 local_d0 [72];
  char *local_88;
  undefined8 local_80;
  undefined1 *local_78;
  undefined1 uStack_21;
  
  (**(code **)(*param_2 + 0x10))(local_d0,param_2);
  lVar2 = (**(code **)(*param_1 + 0x18))(param_1);
  FUN_007e8cec(local_118,local_d0);
  lVar10 = *(long *)(lVar2 + 0x80);
  lVar2 = *(long *)(lVar2 + 0x88);
  FUN_007e8cec(&local_88,local_118);
  if (lVar10 == lVar2) {
    uVar1 = 1;
  }
  else {
    do {
      uVar3 = FUN_007e8ea8(&local_88);
      uVar1 = FUN_007e9cb8(uVar3,lVar10);
      if ((uVar1 & 1) != 0) break;
      lVar10 = lVar10 + 0x20;
    } while (lVar10 != lVar2);
    uVar1 = uVar1 ^ 1;
  }
  if (cStack_101 < '\0') {
    operator_delete(local_118[0]);
  }
  if ((uVar1 & 1) != 0) {
    (**(code **)(*param_2 + 0x10))(&local_88,param_2);
    uVar5 = FUN_007e9604(&local_88);
    if ((uVar5 & 1) == 0) {
      (**(code **)(*param_1 + 0x18))(param_1);
      FUN_00bca960(&local_88);
      uVar5 = FUN_007ea478(&local_88);
      uVar4 = FUN_004022fc();
      if ((uVar5 & 1) == 0) {
        if ((uVar4 & 1) == 0) {
          local_88 = "../../p2p/base/turn_port.cc";
          local_80 = 0x120a;
          local_78 = &uStack_21;
          (**(code **)(*param_1 + 0x110))(local_118,param_1);
          ppcStack_130 = &local_88;
          pppvStack_120 = &local_138;
          local_128 = ": Socket is bound to the address:";
          local_138 = local_118;
          FUN_007e9344(local_150,local_d0);
          (**(code **)(*param_1 + 0x18))(param_1);
          FUN_00bcc3dc(local_168);
          FUN_00623bb0("\r\n\t\n\t\n\t",*pppvStack_120[1],*(undefined4 *)(pppvStack_120[1] + 1),
                       *pppvStack_120,local_128,local_150,
                       ", rather than an address associated with network:",local_168,
                       ". Discarding TURN port.");
          if (cStack_151 < '\0') {
            operator_delete(local_168[0]);
          }
          if (cStack_139 < '\0') {
            operator_delete(local_150[0]);
          }
          if (cStack_101 < '\0') {
            operator_delete(local_118[0]);
          }
        }
        FUN_00cf1328(param_1,0x2bd,"Address not associated with the desired network interface.",0x3a
                    );
        return;
      }
      if ((uVar4 & 1) != 0) goto LAB_00cf226c;
      local_88 = "../../p2p/base/turn_port.cc";
      local_80 = 0x11ca;
      local_78 = &uStack_21;
      (**(code **)(*param_1 + 0x110))(local_118,param_1);
      ppcStack_130 = &local_88;
      pppvStack_120 = &local_138;
      local_128 = ": Socket is bound to the address:";
      local_138 = local_118;
      FUN_007e9344(local_150,local_d0);
      (**(code **)(*param_1 + 0x18))(param_1);
      FUN_00bcc3dc(local_168);
      ppvVar7 = *pppvStack_120;
      ppvVar9 = pppvStack_120[1];
      pcVar8 = 
      ". Still allowing it since it\'s the \'any\' address, possibly caused by multiple_routes being disabled."
      ;
    }
    else {
      uVar5 = FUN_004022fc();
      if ((uVar5 & 1) != 0) goto LAB_00cf226c;
      local_88 = "../../p2p/base/turn_port.cc";
      local_80 = 0x119a;
      local_78 = &uStack_21;
      (**(code **)(*param_1 + 0x110))(local_118,param_1);
      ppcStack_130 = &local_88;
      pppvStack_120 = &local_138;
      local_128 = ": Socket is bound to the address:";
      local_138 = local_118;
      FUN_007e9344(local_150,local_d0);
      (**(code **)(*param_1 + 0x18))(param_1);
      FUN_00bcc3dc(local_168);
      ppvVar7 = *pppvStack_120;
      ppvVar9 = pppvStack_120[1];
      pcVar8 = ". Still allowing it since it\'s localhost.";
    }
    FUN_00623bb0("\r\n\t\n\t\n\t",*ppvVar9,*(undefined4 *)(ppvVar9 + 1),ppvVar7,local_128,local_150,
                 ", rather than an address associated with network:",local_168,pcVar8);
    if (cStack_151 < '\0') {
      operator_delete(local_168[0]);
    }
    if (cStack_139 < '\0') {
      operator_delete(local_150[0]);
    }
    if (cStack_101 < '\0') {
      operator_delete(local_118[0]);
    }
  }
LAB_00cf226c:
  *(undefined4 *)(param_1 + 0x86) = 1;
  uVar5 = FUN_007e95a4(param_1 + 0x4c);
  if ((uVar5 & 1) != 0) {
    (**(code **)(*(long *)param_1[0x6a] + 0x18))(&local_88);
    FUN_007e8d84(param_1 + 0x4c,&local_88);
  }
  uVar5 = FUN_00417e08();
  if ((uVar5 & 1) == 0) {
    (**(code **)(*param_2 + 0x18))(&local_88,param_2);
    FUN_007e924c(local_118,&local_88);
    FUN_00623bb0(&DAT_001f4eff,"../../p2p/base/turn_port.cc",0x1289,"TurnPort connected to ",
                 local_118," using tcp or dtls.");
    if (cStack_101 < '\0') {
      operator_delete(local_118[0]);
    }
  }
  pvVar6 = operator_new(0x68);
  FUN_00cf4b4c(pvVar6,param_1);
  FUN_00c68ac8(param_1 + 0x71,pvVar6,0);
  return;
}


// ===== 00cf2518  FUN_00cf2518 =====

void FUN_00cf2518(long *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  int iVar3;
  ulong uVar4;
  void *local_38 [2];
  char cStack_21;
  
  uVar4 = FUN_004022fc();
  if ((uVar4 & 1) == 0) {
    (**(code **)(*param_1 + 0x110))(local_38,param_1);
    FUN_00623bb0(&DAT_00259892,"../../p2p/base/turn_port.cc",0x12c2,local_38,
                 ": Connection with server failed with error: ",param_3);
    if (cStack_21 < '\0') {
      operator_delete(local_38[0]);
    }
  }
  if ((int)param_1[0x86] != 2) {
    iVar3 = (**(code **)(*param_1 + 0x80))(param_1);
    uVar1 = 0;
    if (iVar3 != 0) {
      uVar1 = 0x1e;
    }
    pcVar2 = "";
    if (iVar3 != 0) {
      pcVar2 = "Failed to establish connection";
    }
    FUN_00cf1328(param_1,0x2bd,pcVar2,uVar1);
  }
  FUN_00c68c6c(param_1 + 0x71);
  *(undefined4 *)(param_1 + 0x86) = 4;
  FUN_00cf8ff0(param_1);
  if ((long *)param_1[0x8d] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x8d] + 0x20))();
  }
  return;
}


// ===== 00cf2618  FUN_00cf2618 =====

void FUN_00cf2618(long *param_1)

{
  char cVar1;
  ulong uVar2;
  long *plVar3;
  void *local_38 [2];
  char cStack_21;
  
  if ((ulong)param_1[0x87] < 2) {
    uVar2 = FUN_00417e08();
    if ((uVar2 & 1) == 0) {
      (**(code **)(*param_1 + 0x110))(local_38,param_1);
      FUN_00623bb0(&DAT_0025a66e,"../../p2p/base/turn_port.cc",0x1349,local_38,
                   ": Allocating a new socket after STUN_ERROR_ALLOCATION_MISMATCH, retry: ",
                   param_1[0x87] + 1);
      if (cStack_21 < '\0') {
        operator_delete(local_38[0]);
      }
    }
    FUN_00897dfc(param_1[0x6a],param_1);
    uVar2 = (**(code **)(*param_1 + 0x40))(param_1);
    if ((uVar2 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x1f) = 0;
    }
    plVar3 = (long *)param_1[0x6b];
    param_1[0x6b] = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    param_1[0x6a] = 0;
    if (*(char *)((long)param_1 + 0x40f) < '\0') {
      *(undefined1 *)param_1[0x7f] = 0;
      param_1[0x80] = 0;
      cVar1 = *(char *)((long)param_1 + 0x3f7);
    }
    else {
      *(undefined1 *)(param_1 + 0x7f) = 0;
      *(undefined1 *)((long)param_1 + 0x40f) = 0;
      cVar1 = *(char *)((long)param_1 + 0x3f7);
    }
    if (cVar1 < '\0') {
      *(undefined1 *)param_1[0x7c] = 0;
      param_1[0x7d] = 0;
      cVar1 = *(char *)((long)param_1 + 0x3df);
    }
    else {
      *(undefined1 *)(param_1 + 0x7c) = 0;
      *(undefined1 *)((long)param_1 + 0x3f7) = 0;
      cVar1 = *(char *)((long)param_1 + 0x3df);
    }
    if (cVar1 < '\0') {
      *(undefined1 *)param_1[0x79] = 0;
      param_1[0x7a] = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0x79) = 0;
      *(undefined1 *)((long)param_1 + 0x3df) = 0;
    }
    (**(code **)(*param_1 + 0x50))(param_1);
    param_1[0x87] = param_1[0x87] + 1;
    return;
  }
  uVar2 = FUN_004022fc();
  if ((uVar2 & 1) == 0) {
    (**(code **)(*param_1 + 0x110))(local_38,param_1);
    FUN_00623bb0(&DAT_0025a668,"../../p2p/base/turn_port.cc",0x130a,local_38,
                 ": Giving up on the port after ",param_1[0x87],
                 " retries for STUN_ERROR_ALLOCATION_MISMATCH");
    if (cStack_21 < '\0') {
      operator_delete(local_38[0]);
    }
  }
  FUN_00cf1328(param_1,0x1b5,"Maximum retries reached for allocation mismatch.",0x30);
  return;
}


// ===== 00cf27f4  FUN_00cf27f4 =====

void * FUN_00cf27f4(long *param_1,long param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  size_t __n;
  long *plVar4;
  ulong uVar5;
  void *pvVar6;
  long lVar7;
  undefined1 auStack_68 [8];
  long local_60;
  undefined1 auStack_58 [8];
  long local_50;
  undefined1 auStack_48 [8];
  
  uVar3 = *(ulong *)(param_2 + 0x28);
  plVar4 = (long *)*(long *)(param_2 + 0x20);
  if (-1 < (char)*(byte *)(param_2 + 0x37)) {
    uVar3 = (ulong)*(byte *)(param_2 + 0x37);
    plVar4 = (long *)(param_2 + 0x20);
  }
  uVar3 = (**(code **)(*param_1 + 0x48))(param_1,plVar4,uVar3);
  if (((uVar3 & 1) != 0) && (1 < (int)param_1[0x86] - 3U)) {
    uVar3 = *(ulong *)(param_2 + 0x58);
    plVar4 = (long *)*(long *)(param_2 + 0x50);
    if (-1 < (char)*(byte *)(param_2 + 0x67)) {
      uVar3 = (ulong)*(byte *)(param_2 + 0x67);
      plVar4 = (long *)(param_2 + 0x50);
    }
    __n = strlen(PTR_s__local_00d52670);
    if ((__n != 0) &&
       (((uVar3 < __n ||
         (iVar2 = memcmp((void *)((long)plVar4 + (uVar3 - __n)),PTR_s__local_00d52670,__n),
         iVar2 != 0)) &&
        (plVar4 = (long *)(**(code **)(*param_1 + 0x88))(param_1), plVar4[1] != *plVar4)))) {
      uVar3 = 0;
      lVar7 = 0x70;
      do {
        plVar4 = (long *)(**(code **)(*param_1 + 0x88))(param_1);
        lVar1 = *plVar4;
        if ((ulong)((plVar4[1] - lVar1 >> 3) * -0x505050505050505) <= uVar3) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__vector/vector.h:416: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                    );
        }
        uVar5 = FUN_00aff31c(lVar1 + lVar7 + -0x70);
        if (((uVar5 & 1) != 0) && (*(int *)(lVar1 + lVar7) == *(int *)(param_2 + 0x70))) {
          pvVar6 = operator_new(0xb30);
          FUN_00988288(auStack_48,param_1 + 0x4a);
          lVar7 = param_1[0x4b];
          FUN_00988398(auStack_68,auStack_48);
          local_60 = lVar7;
          FUN_00988108(auStack_48);
          FUN_0098815c(auStack_58,auStack_68);
          local_50 = local_60;
          FUN_00c680d4(pvVar6,param_1 + 1,auStack_58,uVar3,param_2);
          FUN_00988344(auStack_58);
          FUN_00988344(auStack_68);
          uVar3 = FUN_00cf2a30(param_1,pvVar6,(int)param_1[0x82]);
          if ((uVar3 & 1) != 0) {
            *(int *)(param_1 + 0x82) = (int)param_1[0x82] + 1;
          }
          FUN_00cf9d80(param_1,pvVar6);
          return pvVar6;
        }
        uVar3 = uVar3 + 1;
        plVar4 = (long *)(**(code **)(*param_1 + 0x88))(param_1);
        lVar7 = lVar7 + 0x198;
      } while (uVar3 < (ulong)((plVar4[1] - *plVar4 >> 3) * -0x505050505050505));
    }
  }
  return (void *)0x0;
}


// ===== 00cf2a30  FUN_00cf2a30 =====

undefined8 FUN_00cf2a30(long param_1,long *param_2,undefined4 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  void *local_48;
  
  lVar1 = (**(code **)(*param_2 + 0x18))(param_2);
  plVar7 = *(long **)(param_1 + 0x418);
  plVar9 = *(long **)(param_1 + 0x420);
  plVar8 = plVar7;
  if (plVar7 != plVar9) {
    do {
      uVar2 = FUN_007e973c(*plVar8 + 0x30,lVar1 + 0x50);
      plVar7 = plVar8;
      if ((uVar2 & 1) != 0) break;
      plVar8 = plVar8 + 1;
      plVar7 = plVar9;
    } while (plVar8 != plVar9);
    plVar9 = *(long **)(param_1 + 0x420);
  }
  if ((plVar7 == plVar9) || (*plVar7 == 0)) {
    pvVar4 = operator_new(0xa0);
    FUN_00cf79dc(pvVar4,param_1,param_2,param_3);
    puVar5 = *(undefined8 **)(param_1 + 0x420);
    local_48 = pvVar4;
    if (puVar5 < *(undefined8 **)(param_1 + 0x428)) {
      if (puVar5 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      local_48 = (void *)0x0;
      puVar6 = puVar5 + 1;
      *puVar5 = pvVar4;
    }
    else {
      puVar6 = (undefined8 *)FUN_00cf7cf4(param_1 + 0x418,&local_48);
    }
    pvVar4 = local_48;
    *(undefined8 **)(param_1 + 0x420) = puVar6;
    local_48 = (void *)0x0;
    if (pvVar4 != (void *)0x0) {
      FUN_00cf7aac(pvVar4);
      operator_delete(pvVar4);
    }
    uVar3 = 1;
  }
  else {
    FUN_00cf4790(*plVar7,param_2);
    uVar3 = 0;
  }
  return uVar3;
}


// ===== 00cf2b68  FUN_00cf2b68 =====

undefined8 FUN_00cf2b68(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  int local_28;
  undefined1 uStack_21;
  int *local_8;
  
  local_28 = (int)param_2;
  if (local_28 == 5) {
    *(undefined4 *)(param_1 + 900) = param_3;
  }
  plVar3 = *(long **)(param_1 + 0x350);
  if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00cf2bb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*plVar3 + 0x48))(plVar3,param_2,param_3);
    return uVar1;
  }
  local_8 = &local_28;
  lVar2 = FUN_00cf80f0(0,param_1 + 0x360,param_1 + 0x360,&DAT_001f94c3,&local_8,&uStack_21);
  *(undefined4 *)(lVar2 + 0x20) = param_3;
  return 0;
}


// ===== 00cf2c04  FUN_00cf2c04 =====

undefined8 FUN_00cf2c04(long param_1,int param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x350);
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00cf2c1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*plVar2 + 0x40))(plVar2);
    return uVar1;
  }
  plVar2 = *(long **)(param_1 + 0x368);
  if (plVar2 != (long *)0x0) {
    do {
      while (param_2 < *(int *)((long)plVar2 + 0x1c)) {
        plVar2 = (long *)*plVar2;
        if (plVar2 == (long *)0x0) {
          return 0xffffffff;
        }
      }
      if (param_2 <= *(int *)((long)plVar2 + 0x1c)) {
        if (plVar2 == (long *)(param_1 + 0x368)) {
          return 0xffffffff;
        }
        *param_3 = (int)plVar2[4];
        return 0;
      }
      plVar2 = (long *)plVar2[1];
    } while (plVar2 != (long *)0x0);
  }
  return 0xffffffff;
}


// ===== 00cf2c78  FUN_00cf2c78 =====

undefined4 FUN_00cf2c78(long param_1)

{
  return *(undefined4 *)(param_1 + 0x380);
}


// ===== 00cf2c84  FUN_00cf2c84 =====

ulong FUN_00cf2c84(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,uint param_6)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined1 *local_c0;
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
  
  plVar5 = *(long **)(param_1 + 0x418);
  plVar7 = *(long **)(param_1 + 0x420);
  plVar6 = plVar5;
  if (plVar5 != plVar7) {
    do {
      uVar3 = FUN_007e973c(*plVar6 + 0x30,param_4);
      plVar5 = plVar6;
      if ((uVar3 & 1) != 0) break;
      plVar6 = plVar6 + 1;
      plVar5 = plVar7;
    } while (plVar6 != plVar7);
    plVar7 = *(long **)(param_1 + 0x420);
  }
  if (plVar5 == plVar7) {
    lVar4 = 0;
  }
  else {
    lVar4 = *plVar5;
  }
  if (*(int *)(param_1 + 0x430) == 2) {
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
    puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
    local_c0 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00897be8(&local_c0,param_5);
    FUN_00cfc5f0(param_1,&puStack_80);
    iVar1 = FUN_00cf2db8(lVar4,param_2,param_3,param_6 & 1,&local_c0);
    if (iVar1 < 1) {
      uVar2 = (**(code **)(**(long **)(param_1 + 0x350) + 0x50))();
      param_3 = 0xffffffff;
      *(undefined4 *)(param_1 + 0x380) = uVar2;
    }
    FUN_00897c8c(&local_c0);
  }
  else {
    param_3 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x380) = 0x6b;
  }
  return param_3 & 0xffffffff;
}


// ===== 00cf2db8  FUN_00cf2db8 =====

undefined4 FUN_00cf2db8(long param_1,void *param_2,size_t param_3,uint param_4,undefined8 param_5)

{
  undefined1 *puVar1;
  ushort uVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  long *plVar5;
  ulong uVar6;
  undefined1 *puVar7;
  void *pvVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *local_100;
  undefined1 *puStack_f8;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_008792d8(&local_80);
  if (*(int *)(param_1 + 0x78) == 2) {
    plVar5 = *(long **)(*(long *)(param_1 + 0x20) + 0x440);
    if ((plVar5 == (long *)0x0) ||
       (uVar6 = (**(code **)(*plVar5 + 8))
                          (plVar5,*(long *)(param_1 + 0x20),param_2,param_3,param_4 & 1),
       (uVar6 & 1) != 0)) {
      puVar13 = local_80;
      uVar2 = *(ushort *)(param_1 + 0x28);
      puVar12 = local_80 + 2;
      puVar10 = puVar13;
      puVar1 = puStack_78;
      puVar7 = local_70;
      if (puStack_78 < puVar12) {
        puVar1 = puVar12;
        if (puVar12 <= puStack_78 + ((ulong)puStack_78 >> 1)) {
          puVar1 = puStack_78 + ((ulong)puStack_78 >> 1);
        }
        puVar7 = (undefined1 *)operator_new__((ulong)puVar1);
        puVar3 = local_70;
        if (local_70 != (undefined1 *)0x0) {
          memcpy(puVar7,local_70,(size_t)puVar13);
          local_70 = puVar7;
          operator_delete__(puVar3);
          puVar10 = local_80;
          puVar7 = local_70;
        }
      }
      local_70 = puVar7;
      puStack_78 = puVar1;
      puVar13 = puVar13 + 4;
      *(ushort *)(local_70 + (long)puVar10) = uVar2 >> 8 | (ushort)((uVar2 & 0xff00ff) << 8);
      puVar1 = puStack_78;
      puVar10 = local_70;
      if (puStack_78 < puVar13) {
        puVar1 = puVar13;
        if (puVar13 <= puStack_78 + ((ulong)puStack_78 >> 1)) {
          puVar1 = puStack_78 + ((ulong)puStack_78 >> 1);
        }
        local_80 = puVar12;
        puVar10 = (undefined1 *)operator_new__((ulong)puVar1);
        puVar7 = local_70;
        if (local_70 != (undefined1 *)0x0) {
          memcpy(puVar10,local_70,(size_t)puVar12);
          local_70 = puVar10;
          operator_delete__(puVar7);
          puVar12 = local_80;
          puVar10 = local_70;
        }
      }
      local_70 = puVar10;
      puStack_78 = puVar1;
      *(ushort *)(local_70 + (long)puVar12) =
           (ushort)(param_3 >> 8) & 0xff | (ushort)(((uint)param_3 & 0xff00ff) << 8);
      local_80 = puVar13;
      if (param_3 != 0) {
        puVar12 = puVar13 + param_3;
        puVar1 = puStack_78;
        puVar10 = local_70;
        if (puStack_78 < puVar12) {
          puVar1 = puVar12;
          if (puVar12 <= puStack_78 + ((ulong)puStack_78 >> 1)) {
            puVar1 = puStack_78 + ((ulong)puStack_78 >> 1);
          }
          puVar10 = (undefined1 *)operator_new__((ulong)puVar1);
          puVar7 = local_70;
          if (local_70 != (undefined1 *)0x0) {
            memcpy(puVar10,local_70,(size_t)puVar13);
            local_70 = puVar10;
            operator_delete__(puVar7);
            puVar13 = local_80;
            puVar10 = local_70;
          }
        }
        local_70 = puVar10;
        puStack_78 = puVar1;
        memcpy(local_70 + (long)puVar13,param_2,param_3);
        local_80 = puVar12;
      }
      goto LAB_00cf3094;
    }
  }
  puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
  local_100 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
  local_f0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_e0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
  local_d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00c69ccc(&local_100,0x16);
  local_100 = PTR_DAT_00d52cb8 + 0x10;
  pvVar8 = operator_new(0x60);
  FUN_00c6c0e8(pvVar8,0x12,param_1 + 0x30);
  FUN_00c69d80(&local_100,pvVar8);
  pvVar8 = operator_new(0x18);
  FUN_00c6c94c(pvVar8,0x13,param_2,param_3);
  FUN_00c69d80(&local_100,pvVar8);
  puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x20) + 0x440);
  if (puVar9 != (undefined8 *)0x0) {
    (**(code **)*puVar9)(puVar9,*(long *)(param_1 + 0x20),&local_100);
  }
  FUN_00c6a9c0(&local_100,&local_80);
  if (((param_4 & 1) != 0) && (*(int *)(param_1 + 0x78) == 0)) {
    lVar11 = *(long *)(param_1 + 0x20);
    pvVar8 = operator_new(0xc0);
    FUN_00cf6ff0(pvVar8,lVar11,param_1,*(undefined2 *)(param_1 + 0x28),param_1 + 0x30);
    FUN_00c68ac8(lVar11 + 0x388,pvVar8,0);
    *(undefined4 *)(param_1 + 0x78) = 1;
  }
  FUN_00c6e5fc(&local_100);
LAB_00cf3094:
  puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
  local_f0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_e0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
  local_d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
  local_100 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00897be8(&local_100,param_5);
  puStack_a8 = (undefined1 *)((long)local_80 - param_3);
  plVar5 = *(long **)(*(long *)(param_1 + 0x20) + 0x350);
  uVar4 = (**(code **)(*plVar5 + 0x28))
                    (plVar5,local_70,local_80,*(long *)(param_1 + 0x20) + 0x260,&local_100);
  FUN_00897c8c(&local_100);
  puVar12 = local_70;
  local_70 = (undefined1 *)0x0;
  if (puVar12 != (undefined1 *)0x0) {
    operator_delete__(puVar12);
  }
  return uVar4;
}


// ===== 00cf3124  FUN_00cf3124 =====

void FUN_00cf3124(long param_1)

{
  FUN_007e973c(param_1 + 0x260);
  return;
}


// ===== 00cf3130  FUN_00cf3130 =====

void FUN_00cf3130(long *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x58))(param_1,param_3);
  if (lVar1 != 0) {
    FUN_00cfb9f0(param_1,param_2,param_3,param_4,param_5,param_6);
    return;
  }
  return;
}


// ===== 00cf31bc  FUN_00cf31bc =====

/* WARNING: Removing unreachable block (ram,0x00cf3348) */

undefined8 FUN_00cf31bc(long *param_1,long param_2,undefined8 *param_3)

{
  ushort uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  char *pcVar5;
  void *local_a0 [2];
  char cStack_89;
  void *local_88 [2];
  char cStack_71;
  void *local_70 [2];
  char cStack_59;
  char *local_58;
  undefined8 local_50;
  undefined1 *local_48;
  void **local_40;
  char **ppcStack_38;
  undefined1 uStack_11;
  
  if (param_2 != param_1[0x6a]) {
    return 0;
  }
  uVar3 = FUN_007e973c(param_3[4],param_1 + 0x4c);
  if ((uVar3 & 1) == 0) {
    uVar3 = FUN_004022fc();
    if ((uVar3 & 1) == 0) {
      local_58 = "../../p2p/base/turn_port.cc";
      local_50 = 0x1802;
      local_48 = &uStack_11;
      (**(code **)(*param_1 + 0x110))(local_70,param_1);
      ppcStack_38 = &local_58;
      local_40 = local_70;
      FUN_007e9344(local_88,param_3[4]);
      FUN_007e9344(local_a0,param_1 + 0x4c);
      FUN_00623bb0("\r\n\t\n\t\n",*ppcStack_38,*(undefined4 *)(ppcStack_38 + 1),local_40,
                   ": Discarding TURN message from unknown address: ",local_88," server_address_: ",
                   local_a0);
      if (cStack_89 < '\0') {
        operator_delete(local_a0[0]);
      }
      if (cStack_71 < '\0') {
        operator_delete(local_88[0]);
      }
      if (cStack_59 < '\0') {
        operator_delete(local_70[0]);
      }
    }
  }
  else {
    if ((ulong)param_3[1] < 4) {
      uVar3 = FUN_004022fc();
      if ((uVar3 & 1) != 0) {
        return 0;
      }
      (**(code **)(*param_1 + 0x110))(&local_58,param_1);
      pcVar5 = ": Received TURN message that was too short";
      uVar4 = 0x1852;
    }
    else if ((int)param_1[0x86] == 4) {
      uVar3 = FUN_004022fc();
      if ((uVar3 & 1) != 0) {
        return 0;
      }
      (**(code **)(*param_1 + 0x110))(&local_58,param_1);
      pcVar5 = ": Received TURN message while the TURN port is disconnected";
      uVar4 = 0x1882;
    }
    else {
      uVar1 = *(ushort *)*param_3;
      uVar2 = (uVar1 & 0xff00ff) << 8;
      if ((uVar1 & 0xc0) == 0x40) {
        FUN_00cf3474(param_1,uVar1 >> 8 | uVar2,param_3);
        return 1;
      }
      if (uVar1 == 0x1700) {
        FUN_00cf362c(param_1,param_3);
        return 1;
      }
      uVar3 = (**(code **)(*param_1 + 0x40))(param_1);
      if (((uVar1 >> 8 & 0xffef | uVar2) != 0x101) || ((uVar3 & 1) == 0)) {
        FUN_00c69178(param_1 + 0x71,*param_3,param_3[1]);
        return 1;
      }
      uVar3 = FUN_0044075c();
      if ((uVar3 & 1) != 0) {
        return 0;
      }
      (**(code **)(*param_1 + 0x110))(&local_58,param_1);
      pcVar5 = ": Ignoring STUN binding response message on shared socket.";
      uVar4 = 0x1928;
    }
    FUN_00623bb0(&DAT_00223e94,"../../p2p/base/turn_port.cc",uVar4,&local_58,pcVar5);
  }
  return 0;
}


// ===== 00cf3474  FUN_00cf3474 =====

void FUN_00cf3474(long *param_1,uint param_2,long *param_3)

{
  ulong uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined8 local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *puStack_38;
  
  uVar1 = param_3[1];
  uVar2 = *(ushort *)(*param_3 + 2);
  uVar9 = (ulong)((uint)(uVar2 >> 8) | (uVar2 & 0xff00ff) << 8);
  uVar6 = uVar1 - 4;
  if (uVar6 < uVar9) {
    uVar6 = FUN_004022fc();
    if ((uVar6 & 1) != 0) {
      return;
    }
    (**(code **)(*param_1 + 0x110))(&local_60,param_1);
    pcVar5 = ": Received TURN channel data message with incorrect length, len: ";
    uVar4 = 0x231a;
  }
  else {
    plVar7 = (long *)param_1[0x83];
    plVar8 = (long *)param_1[0x84];
    if (plVar7 == plVar8) {
LAB_00cf3528:
      if ((plVar7 != plVar8) && (*plVar7 != 0)) {
        lVar3 = *param_3 + 4;
        if (uVar9 <= uVar6) {
          uVar6 = uVar9;
        }
        uVar9 = uVar6;
        if (uVar1 < 5) {
          uVar9 = 0;
        }
        if (uVar6 == 0 || uVar1 < 5) {
          lVar3 = 0;
        }
        puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
        local_50 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
        local_40 = &DAT_aaaaaaaaaaaaaaaa;
        puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
        local_60 = &DAT_aaaaaaaaaaaaaaaa;
        FUN_00bd3350(&local_60,lVar3,uVar9,*plVar7 + 0x30,param_3[2],(char)param_3[3],
                     (char)param_3[5],*(undefined4 *)((long)param_3 + 0x2c));
        lVar3 = (**(code **)(*param_1 + 0x58))(param_1,local_40);
        if (lVar3 != 0) {
          FUN_00c62f8c();
          return;
        }
        FUN_00cf9f10(param_1,&local_60,0);
        return;
      }
    }
    else {
      do {
        if ((uint)*(ushort *)(*plVar7 + 0x28) == (param_2 & 0xffff)) goto LAB_00cf3528;
        plVar7 = plVar7 + 1;
      } while (plVar7 != plVar8);
    }
    uVar6 = FUN_004022fc();
    if ((uVar6 & 1) != 0) {
      return;
    }
    (**(code **)(*param_1 + 0x110))(&local_60,param_1);
    pcVar5 = ": Received TURN channel data message for invalid channel, channel_id: ";
    uVar9 = (ulong)(param_2 & 0xffff);
    uVar4 = 0x236a;
  }
  FUN_00623bb0(&DAT_00259892,"../../p2p/base/turn_port.cc",uVar4,&local_60,pcVar5,uVar9);
  if (local_50._7_1_ < '\0') {
    operator_delete(local_60);
  }
  return;
}


// ===== 00cf362c  FUN_00cf362c =====

void FUN_00cf362c(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  long *plVar8;
  undefined1 *local_190;
  undefined1 *puStack_188;
  undefined8 local_180;
  undefined1 *puStack_178;
  undefined1 *local_170;
  undefined1 *puStack_168;
  void *local_158 [2];
  char cStack_141;
  undefined1 *local_140;
  undefined1 *puStack_138;
  undefined1 *local_130;
  undefined1 *puStack_128;
  undefined1 *local_120;
  undefined1 *puStack_118;
  undefined1 *puStack_110;
  undefined1 *puStack_108;
  undefined1 *local_100;
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
  
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00879324(&local_70,*param_2,param_2[1]);
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
  FUN_00c69b30(&local_f0);
  local_f0 = PTR_DAT_00d52cb8 + 0x10;
  uVar2 = FUN_00c6af90(&local_f0,&local_70);
  if ((uVar2 & 1) == 0) {
    uVar2 = FUN_004022fc();
    if ((uVar2 & 1) != 0) goto LAB_00cf38e4;
    (**(code **)(*param_1 + 0x110))(&local_140,param_1);
    pcVar7 = ": Received invalid TURN data indication";
    uVar5 = 0x214a;
LAB_00cf38c8:
    FUN_00623bb0(&DAT_00223e94,"../../p2p/base/turn_port.cc",uVar5,&local_140,pcVar7);
  }
  else {
    lVar3 = FUN_00c69f04(&local_f0,0x12);
    if (lVar3 == 0) {
      uVar2 = FUN_004022fc();
      if ((uVar2 & 1) != 0) goto LAB_00cf38e4;
      (**(code **)(*param_1 + 0x110))(&local_140,param_1);
      pcVar7 = ": Missing STUN_ATTR_XOR_PEER_ADDRESS attribute in data indication.";
      uVar5 = 0x2192;
      goto LAB_00cf38c8;
    }
    lVar4 = FUN_00c69fe8(&local_f0,0x13);
    if (lVar4 == 0) {
      uVar2 = FUN_004022fc();
      if ((uVar2 & 1) != 0) goto LAB_00cf38e4;
      (**(code **)(*param_1 + 0x110))(&local_140,param_1);
      pcVar7 = ": Missing STUN_ATTR_DATA attribute in data indication.";
      uVar5 = 0x21d2;
      goto LAB_00cf38c8;
    }
    puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
    local_140 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
    local_130 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
    local_120 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_110 = &DAT_aaaaaaaaaaaaaaaa;
    local_100 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_007e8cec(&local_140,lVar3 + 0x10);
    uVar5 = FUN_007e8ea8(&local_140);
    plVar8 = (long *)param_1[0x84];
    plVar1 = (long *)param_1[0x83];
    do {
      if (plVar1 == plVar8) {
        uVar2 = FUN_004022fc();
        if ((uVar2 & 1) == 0) {
          (**(code **)(*param_1 + 0x110))(&local_190,param_1);
          FUN_007e924c(local_158,&local_140);
          FUN_00623bb0(&DAT_0025987e,"../../p2p/base/turn_port.cc",0x2222,&local_190,
                       ": Received TURN data indication with unknown peer address, addr: ",local_158
                      );
          if (cStack_141 < '\0') {
            operator_delete(local_158[0]);
          }
          if (local_180._7_1_ < '\0') {
            operator_delete(local_190);
          }
        }
        break;
      }
      uVar6 = FUN_007e8ea8(*plVar1 + 0x30);
      uVar2 = FUN_007e9cb8(uVar6,uVar5);
      plVar1 = plVar1 + 1;
    } while ((uVar2 & 1) == 0);
    puStack_178 = &DAT_aaaaaaaaaaaaaaaa;
    local_180 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_168 = &DAT_aaaaaaaaaaaaaaaa;
    local_170 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_188 = &DAT_aaaaaaaaaaaaaaaa;
    local_190 = &DAT_aaaaaaaaaaaaaaaa;
    uVar5 = 0;
    if (*(short *)(lVar4 + 10) != 0) {
      uVar5 = *(undefined8 *)(lVar4 + 0x10);
    }
    FUN_00bd3350(&local_190,uVar5,*(short *)(lVar4 + 10),&local_140,param_2[2],
                 *(undefined1 *)(param_2 + 3),*(undefined1 *)(param_2 + 5),
                 *(undefined4 *)((long)param_2 + 0x2c));
    lVar3 = (**(code **)(*param_1 + 0x58))(param_1,local_170);
    if (lVar3 == 0) {
      FUN_00cf9f10(param_1,&local_190,0);
    }
    else {
      FUN_00c62f8c();
    }
  }
  if ((long)local_130 < 0) {
    operator_delete(local_140);
  }
LAB_00cf38e4:
  FUN_00c6e5fc(&local_f0);
  return;
}


// ===== 00cf3924  FUN_00cf3924 =====

void FUN_00cf3924(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00cf3930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1a0))();
  return;
}


// ===== 00cf3934  FUN_00cf3934 =====

void FUN_00cf3934(long *param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00cf3944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x108))(param_1,param_3);
  return;
}


// ===== 00cf3948  FUN_00cf3948 =====

void FUN_00cf3948(long param_1)

{
  if (*(int *)(param_1 + 0x430) == 2) {
    FUN_00cfa32c();
    return;
  }
  return;
}


// ===== 00cf3960  FUN_00cf3960 =====

bool FUN_00cf3960(undefined8 param_1,void *param_2,size_t param_3)

{
  bool bVar1;
  int iVar2;
  size_t __n;
  
  __n = strlen(PTR_DAT_00d528e8);
  if (param_3 == __n) {
    iVar2 = memcmp(param_2,PTR_DAT_00d528e8,__n);
    bVar1 = iVar2 == 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


// ===== 00cf39c0  FUN_00cf39c0 =====

/* WARNING: Removing unreachable block (ram,0x00cf3ccc) */
/* WARNING: Removing unreachable block (ram,0x00cf3cb4) */
/* WARNING: Removing unreachable block (ram,0x00cf3aa0) */

undefined8 FUN_00cf39c0(long *param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  char *pcVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_a0;
  void *local_98 [2];
  char cStack_81;
  undefined1 local_80 [24];
  undefined1 *local_68;
  long **pplStack_60;
  undefined1 local_58 [24];
  undefined1 uStack_21;
  
  if ((long *)param_1[0x68] != (long *)0x0) {
    plVar5 = (long *)param_1[0x68];
    plVar7 = param_1 + 0x68;
    do {
      plVar6 = plVar5;
      uVar2 = FUN_007e97f4(param_2,plVar6 + 4);
      if ((uVar2 & 1) == 0) {
        uVar2 = FUN_007e97f4(plVar6 + 4,param_2);
        if ((uVar2 & 1) == 0) {
          if (((long *)*plVar7 != (long *)0x0) && ((long *)*plVar7 != param_1 + 0x68)) {
            uVar2 = FUN_004022fc();
            if ((uVar2 & 1) != 0) {
              return 0;
            }
            (**(code **)(*param_1 + 0x110))(&local_e8,param_1);
            FUN_007e9344(local_58,param_2);
            FUN_00623bb0("\r\n\t\n\t","../../p2p/base/turn_port.cc",0x1a52,&local_e8,
                         ": Redirection to [",local_58,"] ignored, allocation failed.");
            goto joined_r0x00cf3ab4;
          }
          break;
        }
        plVar6 = plVar6 + 1;
        plVar5 = (long *)*plVar6;
      }
      else {
        plVar5 = (long *)*plVar6;
      }
      plVar7 = plVar6;
    } while (plVar5 != (long *)0x0);
  }
  uVar2 = FUN_00cfb3f8(param_1,param_2);
  if ((uVar2 & 1) == 0) {
    uVar2 = FUN_004022fc();
    if ((uVar2 & 1) != 0) {
      return 0;
    }
    (**(code **)(*param_1 + 0x110))(&local_e8,param_1);
    pcVar4 = ": Server IP address family does not match with local host address family type";
    uVar3 = 0x1a92;
  }
  else {
    uVar2 = FUN_007e9604(param_2);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_00417e08();
      if ((uVar2 & 1) == 0) {
        local_e8 = (long *)0x1db146;
        local_e0 = 0x1b01;
        local_d8 = &uStack_21;
        (**(code **)(*param_1 + 0x110))(local_58,param_1);
        pplStack_60 = &local_e8;
        local_68 = local_58;
        FUN_007e9344(local_80,param_1 + 0x4c);
        FUN_007e9344(local_98,param_2);
        FUN_00623bb0("\r\n\t\n\t\n\t",*pplStack_60,*(undefined4 *)(pplStack_60 + 1),local_68,
                     ": Redirecting from TURN server [",local_80,"] to TURN server [",local_98,
                     &DAT_0019fa9e);
        if (cStack_81 < '\0') {
          operator_delete(local_98[0]);
        }
      }
      lVar1 = param_1[0x55];
      FUN_007e8cec(&local_e8,param_2);
      local_a0 = (int)lVar1;
      FUN_007e8d84(param_1 + 0x4c,&local_e8);
      *(undefined4 *)(param_1 + 0x55) = local_a0;
      if ((long)local_d8 < 0) {
        operator_delete(local_e8);
      }
      local_e8 = param_1 + 0x67;
      FUN_00cefc98(&local_e8,param_1 + 0x4c,param_1 + 0x4c);
      return 1;
    }
    uVar2 = FUN_004022fc();
    if ((uVar2 & 1) != 0) {
      return 0;
    }
    (**(code **)(*param_1 + 0x110))(&local_e8,param_1);
    pcVar4 = ": Blocking attempted redirect to loopback address.";
    uVar3 = 0x1ada;
  }
  FUN_00623bb0(&DAT_00223e94,"../../p2p/base/turn_port.cc",uVar3,&local_e8,pcVar4);
joined_r0x00cf3ab4:
  if (local_d8._7_1_ < '\0') {
    operator_delete(local_e8);
  }
  return 0;
}


// ===== 00cf3ce0  FUN_00cf3ce0 =====

void FUN_00cf3ce0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  void *local_b8 [2];
  char cStack_a1;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  uVar1 = (**(code **)(*param_1 + 0x170))();
  FUN_00897b90(&local_a0,uVar1);
  uStack_60 = (undefined1 *)CONCAT44(5,(undefined4)uStack_60);
  FUN_00cfc5f0(param_1,&uStack_60);
  iVar2 = (**(code **)(*(long *)param_1[0x6a] + 0x28))
                    ((long *)param_1[0x6a],param_2,param_3,param_1 + 0x4c,&local_a0);
  if ((iVar2 < 0) && (uVar3 = FUN_004249b0(), (uVar3 & 1) == 0)) {
    (**(code **)(*param_1 + 0x110))(local_b8,param_1);
    uVar1 = (**(code **)(*(long *)param_1[0x6a] + 0x50))();
    FUN_00623bb0(&DAT_00259892,"../../p2p/base/turn_port.cc",0x1cf3,local_b8,
                 ": Failed to send TURN message, error: ",uVar1);
    if (cStack_a1 < '\0') {
      operator_delete(local_b8[0]);
    }
  }
  FUN_00897c8c(&local_a0);
  return;
}


// ===== 00cf3df8  FUN_00cf3df8 =====

void FUN_00cf3df8(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  size_t sVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  
  *(undefined4 *)(param_1 + 0x430) = 2;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_50 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_007e8cec(&local_80,param_3);
  sVar2 = strlen("udp");
  auVar6 = FUN_00b00a9c(*(undefined4 *)(param_1 + 0x2a8));
  uVar1 = *(int *)(param_1 + 0x2a8) - 1;
  if (uVar1 < 4) {
    uVar3 = *(undefined4 *)(&DAT_001f6858 + (ulong)uVar1 * 4);
  }
  else {
    uVar3 = 3;
  }
  lVar4 = (long)*(char *)(param_1 + 0x2c7);
  if (lVar4 < 0) {
    lVar5 = *(long *)(param_1 + 0x2b0);
    lVar4 = *(long *)(param_1 + 0x2b8);
  }
  else {
    lVar5 = param_1 + 0x2b0;
  }
  FUN_00cf9524(param_1,param_2,param_2,&local_80,PTR_DAT_00d528e8,sVar2,auVar6._0_8_,auVar6._8_8_,
               &DAT_001b3348,0,3,uVar3,*(undefined4 *)(param_1 + 0x434),lVar5,lVar4,1);
  if ((long)local_70 < 0) {
    operator_delete(local_80);
  }
  return;
}


// ===== 00cf3f18  FUN_00cf3f18 =====

void FUN_00cf3f18(undefined8 *param_1,undefined8 *param_2,ulong param_3,undefined4 param_4,
                 undefined8 *param_5,ulong param_6,undefined4 param_7,undefined8 param_8,
                 undefined8 *param_9,ulong param_10)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  if (param_3 < 0x7ffffffffffffff7) {
    if (param_3 < 0x17) {
      *(char *)((long)param_1 + 0x17) = (char)param_3;
      puVar3 = param_1;
    }
    else {
      uVar1 = (param_3 & 0x7ffffffffffffff8) + 8;
      uVar2 = 0x19;
      if (uVar1 != 0x18) {
        uVar2 = uVar1;
      }
      puVar3 = (undefined8 *)operator_new(uVar2);
      *param_1 = puVar3;
      param_1[1] = param_3;
      param_1[2] = uVar2 | 0x8000000000000000;
    }
    if ((undefined8 *)((long)puVar3 + param_3) < puVar3) {
LAB_00cf40f0:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
                );
    }
    if ((param_2 < puVar3) || ((undefined8 *)((long)puVar3 + param_3) <= param_2)) {
      memmove(puVar3,param_2,param_3);
      *(undefined1 *)((long)puVar3 + param_3) = 0;
      *(undefined4 *)(param_1 + 3) = param_4;
      if (0x7ffffffffffffff6 < param_6) goto LAB_00cf4118;
      if (param_6 < 0x17) {
        puVar3 = param_1 + 4;
        *(char *)((long)param_1 + 0x37) = (char)param_6;
      }
      else {
        uVar1 = (param_6 & 0x7ffffffffffffff8) + 8;
        uVar2 = 0x19;
        if (uVar1 != 0x18) {
          uVar2 = uVar1;
        }
        puVar3 = (undefined8 *)operator_new(uVar2);
        param_1[4] = puVar3;
        param_1[5] = param_6;
        param_1[6] = uVar2 | 0x8000000000000000;
      }
      if ((undefined8 *)((long)puVar3 + param_6) < puVar3) goto LAB_00cf40f0;
      if ((param_5 < puVar3) || ((undefined8 *)((long)puVar3 + param_6) <= param_5)) {
        memmove(puVar3,param_5,param_6);
        *(undefined1 *)((long)puVar3 + param_6) = 0;
        *(undefined4 *)(param_1 + 7) = param_7;
        if (0x7ffffffffffffff6 < param_10) goto LAB_00cf4118;
        if (param_10 < 0x17) {
          puVar3 = param_1 + 8;
          *(char *)((long)param_1 + 0x57) = (char)param_10;
        }
        else {
          uVar1 = (param_10 & 0x7ffffffffffffff8) + 8;
          uVar2 = 0x19;
          if (uVar1 != 0x18) {
            uVar2 = uVar1;
          }
          puVar3 = (undefined8 *)operator_new(uVar2);
          param_1[8] = puVar3;
          param_1[9] = param_10;
          param_1[10] = uVar2 | 0x8000000000000000;
        }
        if ((undefined8 *)((long)puVar3 + param_10) < puVar3) goto LAB_00cf40f0;
        if ((param_9 < puVar3) || ((undefined8 *)((long)puVar3 + param_10) <= param_9)) {
          memmove(puVar3,param_9,param_10);
          *(undefined1 *)((long)puVar3 + param_10) = 0;
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
              );
  }
LAB_00cf4118:
                    /* WARNING: Subroutine does not return */
  FUN_005d45ec();
}


// ===== 00cf411c  FUN_00cf411c =====

void FUN_00cf411c(long param_1)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *local_38;
  
  FUN_00c68c6c(param_1 + 0x388);
  *(undefined4 *)(param_1 + 0x430) = 3;
  plVar2 = *(long **)(param_1 + 200);
  do {
    while( true ) {
      if (plVar2 == (long *)(param_1 + 0xd0)) {
        return;
      }
      puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
      local_70 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_60 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
      local_50 = &DAT_aaaaaaaaaaaaaaaa;
      local_38 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
      local_80 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_007e8cec(&local_80,plVar2 + 4);
      local_38 = (undefined1 *)plVar2[0xd];
      FUN_00c654b0();
      if (-1 < (long)local_70) break;
      operator_delete(local_80);
      plVar3 = (long *)plVar2[1];
      if ((long *)plVar2[1] != (long *)0x0) goto LAB_00cf41cc;
LAB_00cf41dc:
      do {
        plVar3 = (long *)plVar2[2];
        bVar1 = plVar2 != (long *)*plVar3;
        plVar2 = plVar3;
      } while (bVar1);
    }
    plVar3 = (long *)plVar2[1];
    if ((long *)plVar2[1] == (long *)0x0) goto LAB_00cf41dc;
LAB_00cf41cc:
    do {
      plVar2 = plVar3;
      plVar3 = (long *)*plVar2;
    } while (plVar3 != (long *)0x0);
  } while( true );
}


// ===== 00cf41f4  FUN_00cf41f4 =====

undefined4 FUN_00cf41f4(long param_1)

{
  return *(undefined4 *)(param_1 + 900);
}


// ===== 00cf4200  FUN_00cf4200 =====

undefined8 FUN_00cf4200(long *param_1,uint param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 uVar6;
  void *local_48 [2];
  char cStack_31;
  
  if (param_2 < 0x78) {
    uVar1 = FUN_004022fc();
    if ((uVar1 & 1) == 0) {
      (**(code **)(*param_1 + 0x110))(local_48,param_1);
      FUN_00623bb0(&DAT_0025677e,"../../p2p/base/turn_port.cc",0x246a,local_48,
                   ": Received response with short lifetime: ",param_2," seconds.");
      if (cStack_31 < '\0') {
        operator_delete(local_48[0]);
      }
    }
    uVar5 = param_2 * 500;
  }
  else if (param_2 < 0xe11) {
    uVar5 = param_2 * 1000 - 60000;
  }
  else {
    uVar1 = FUN_004022fc();
    uVar5 = 0x360420;
    if ((uVar1 & 1) == 0) {
      (**(code **)(*param_1 + 0x110))(local_48,param_1);
      FUN_00623bb0(&DAT_0025677e,"../../p2p/base/turn_port.cc",0x24a2,local_48,
                   ": Received response with long lifetime: ",param_2," seconds.");
      if (cStack_31 < '\0') {
        operator_delete(local_48[0]);
        uVar5 = 0x360420;
      }
    }
  }
  puVar2 = (undefined8 *)operator_new(0x68);
  plVar3 = (long *)operator_new(0x80);
  FUN_00c69ccc(plVar3,4);
  *plVar3 = (long)(PTR_DAT_00d52cb8 + 0x10);
  FUN_00c69328(puVar2,param_1 + 1,param_1 + 0x71,plVar3);
  uVar6 = puVar2[7];
  *puVar2 = &PTR_FUN_00d50550;
  puVar2[0xc] = param_1;
  FUN_00cf4430(param_1,uVar6);
  puVar4 = *(undefined8 **)(puVar2[0xc] + 0x440);
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,puVar2[0xc],uVar6);
  }
  FUN_00c68ac8(param_1 + 0x71,puVar2,(ulong)uVar5 * 1000);
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    (**(code **)(*param_1 + 0x110))(local_48,param_1);
    FUN_00623bb0(&DAT_00256769,"../../p2p/base/turn_port.cc",0x24f9,local_48,
                 ": Scheduled refresh in ",uVar5,&DAT_0019c2e7);
    if (cStack_31 < '\0') {
      operator_delete(local_48[0]);
    }
  }
  return 1;
}


// ===== 00cf4430  FUN_00cf4430 =====

void FUN_00cf4430(long param_1,undefined8 param_2)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  
  pvVar2 = operator_new(0x18);
  uVar1 = *(ulong *)(param_1 + 0x310);
  lVar4 = *(long *)(param_1 + 0x308);
  if (-1 < (char)*(byte *)(param_1 + 799)) {
    uVar1 = (ulong)*(byte *)(param_1 + 799);
    lVar4 = param_1 + 0x308;
  }
  FUN_00c6c8e0(pvVar2,6,lVar4,uVar1);
  FUN_00c69d80(param_2,pvVar2);
  pvVar2 = operator_new(0x18);
  uVar1 = *(ulong *)(param_1 + 0x3d0);
  lVar4 = *(long *)(param_1 + 0x3c8);
  if (-1 < (char)*(byte *)(param_1 + 0x3df)) {
    uVar1 = (ulong)*(byte *)(param_1 + 0x3df);
    lVar4 = param_1 + 0x3c8;
  }
  FUN_00c6c8e0(pvVar2,0x14,lVar4,uVar1);
  FUN_00c69d80(param_2,pvVar2);
  pvVar2 = operator_new(0x18);
  uVar1 = *(ulong *)(param_1 + 1000);
  lVar4 = *(long *)(param_1 + 0x3e0);
  if (-1 < (char)*(byte *)(param_1 + 0x3f7)) {
    uVar1 = (ulong)*(byte *)(param_1 + 0x3f7);
    lVar4 = param_1 + 0x3e0;
  }
  FUN_00c6c8e0(pvVar2,0x15,lVar4,uVar1);
  FUN_00c69d80(param_2,pvVar2);
  lVar4 = (long)*(char *)(param_1 + 0x40f);
  if (lVar4 < 0) {
    lVar3 = *(long *)(param_1 + 0x3f8);
    lVar4 = *(long *)(param_1 + 0x400);
  }
  else {
    lVar3 = param_1 + 0x3f8;
  }
  FUN_00c6a5dc(param_2,lVar3,lVar4);
  return;
}


// ===== 00cf453c  FUN_00cf453c =====

undefined8 FUN_00cf453c(long *param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  char *pcVar4;
  void *local_38 [2];
  char cStack_21;
  
  lVar1 = FUN_00c69fe8(param_2,0x14);
  if (lVar1 == 0) {
    uVar2 = FUN_004249b0();
    if ((uVar2 & 1) != 0) {
      return 0;
    }
    (**(code **)(*param_1 + 0x110))(local_38,param_1);
    pcVar4 = ": Missing STUN_ATTR_REALM attribute in stale nonce error response.";
    uVar3 = 0x263b;
LAB_00cf462c:
    FUN_00623bb0(&DAT_00223e94,"../../p2p/base/turn_port.cc",uVar3,local_38,pcVar4);
    if (cStack_21 < '\0') {
      operator_delete(local_38[0]);
    }
    return 0;
  }
  if ((*(long *)(lVar1 + 0x10) != 0) || (*(short *)(lVar1 + 10) == 0)) {
    FUN_00cf0d0c(param_1);
    lVar1 = FUN_00c69fe8(param_2,0x15);
    if (lVar1 == 0) {
      uVar2 = FUN_004249b0();
      if ((uVar2 & 1) != 0) {
        return 0;
      }
      (**(code **)(*param_1 + 0x110))(local_38,param_1);
      pcVar4 = ": Missing STUN_ATTR_NONCE attribute in stale nonce error response.";
      uVar3 = 0x268b;
      goto LAB_00cf462c;
    }
    if ((*(long *)(lVar1 + 0x10) != 0) || (*(short *)(lVar1 + 10) == 0)) {
      FUN_00cf4674(param_1);
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/string_view:333: libc++ Hardening assertion __len == 0 || __s != nullptr failed: string_view::string_view(_CharT *, size_t): received nullptr\n"
            );
}


// ===== 00cf4674  FUN_00cf4674 =====

void FUN_00cf4674(long param_1,undefined8 ***param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  undefined8 ***__dest;
  undefined8 **local_58;
  ulong uStack_50;
  undefined8 local_48;
  
  if (0x7ffffffffffffff6 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
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
    cVar3 = *(char *)(param_1 + 0x3f7);
    *(undefined1 *)((long)__dest + param_3) = 0;
    if (cVar3 < '\0') {
      operator_delete(*(void **)(param_1 + 0x3e0));
    }
    *(ulong *)(param_1 + 1000) = uStack_50;
    *(undefined8 ***)(param_1 + 0x3e0) = local_58;
    *(ulong *)(param_1 + 0x3f0) = local_48;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
            );
}


// ===== 00cf4790  FUN_00cf4790 =====

void FUN_00cf4790(long param_1,undefined8 param_2)

{
  void *pvVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  void *pvVar5;
  void *local_38;
  undefined8 local_18;
  
  puVar3 = *(undefined8 **)(param_1 + 0x88);
  local_18 = param_2;
  if (*(undefined8 **)(param_1 + 0x80) == puVar3) {
    FUN_007ebca0(&local_38);
    FUN_007ebdcc(*(undefined8 *)(param_1 + 0x98));
    pvVar1 = local_38;
    pvVar5 = *(void **)(param_1 + 0x98);
    local_38 = (void *)0x0;
    *(void **)(param_1 + 0x98) = pvVar1;
    if (pvVar5 != (void *)0x0) {
      iVar2 = FUN_00d0f7a0(0xffffffff,pvVar5);
      if (iVar2 == 1) {
        operator_delete(pvVar5);
      }
      pvVar1 = local_38;
      if ((local_38 != (void *)0x0) && (iVar2 = FUN_00d0f7a0(0xffffffff,local_38), iVar2 == 1)) {
        operator_delete(pvVar1);
      }
    }
    puVar3 = *(undefined8 **)(param_1 + 0x88);
  }
  if (puVar3 < *(undefined8 **)(param_1 + 0x90)) {
    if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    puVar4 = puVar3 + 1;
    *puVar3 = local_18;
  }
  else {
    puVar4 = (undefined8 *)FUN_00c598a0((ulong *)(param_1 + 0x80),&local_18);
  }
  *(undefined8 **)(param_1 + 0x88) = puVar4;
  return;
}


// ===== 00cf4888  FUN_00cf4888 =====

void FUN_00cf4888(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  uint uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  void *pvVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *local_60 [2];
  code *local_50;
  code *pcStack_48;
  undefined1 local_24 [3];
  undefined1 uStack_21;
  
  lVar3 = (**(code **)(*param_2 + 0x18))(param_2);
  plVar11 = (long *)param_1[0x83];
  plVar12 = (long *)param_1[0x84];
  plVar5 = plVar11;
  if (plVar11 != plVar12) {
    do {
      uVar4 = FUN_007e973c(*plVar5 + 0x30,lVar3 + 0x50);
      plVar11 = plVar5;
      if ((uVar4 & 1) != 0) break;
      plVar5 = plVar5 + 1;
      plVar11 = plVar12;
    } while (plVar5 != plVar12);
    plVar12 = (long *)param_1[0x84];
  }
  if (plVar11 == plVar12) {
    lVar3 = 0;
  }
  else {
    lVar3 = *plVar11;
  }
  puVar7 = *(undefined8 **)(lVar3 + 0x80);
  puVar9 = *(undefined8 **)(lVar3 + 0x88);
  if (puVar7 == puVar9) {
LAB_00cf49c4:
    if (puVar7 != puVar9) {
      memmove(puVar7,puVar7 + 1,(long)puVar9 - (long)(puVar7 + 1));
      puVar7 = *(undefined8 **)(lVar3 + 0x88);
      uVar8 = (ulong)((long)puVar7 + (-8 - ((long)puVar7 << 0x3d))) >> 3;
      uVar4 = (((long)puVar9 - (long)puVar7 << 0x3d) - ((long)puVar9 - (long)puVar7)) + 8U >> 3;
      if (uVar8 <= uVar4) {
        uVar4 = uVar8;
      }
      puVar9 = puVar9 + -1;
      if ((1 < uVar4) && ((-(int)puVar7 & 7U) == 0)) {
        uVar4 = uVar4 & 0x1ffffffffffffffe;
        puVar7 = puVar7 + -uVar4;
        do {
          uVar4 = uVar4 - 2;
        } while (uVar4 != 0);
      }
      do {
        if (puVar7 == puVar9) {
          *(undefined8 **)(lVar3 + 0x88) = puVar9;
          if ((*(undefined8 **)(lVar3 + 0x80) == puVar9) &&
             (pvVar10 = *(void **)(lVar3 + 0x98), pvVar10 != (void *)0x0)) {
            FUN_00d0f740(1,pvVar10);
            plVar5 = (long *)(**(code **)(*param_1 + 0x130))(param_1);
            FUN_00d0f740(1,pvVar10);
            local_60[0] = (undefined8 *)operator_new(0x30);
            *local_60[0] = pvVar10;
            local_60[0][4] = FUN_004473ec;
            local_60[0][5] = FUN_00cf842c;
            local_60[0][2] = param_1;
            local_60[0][3] = lVar3;
            local_50 = FUN_005db390;
            pcStack_48 = FUN_005db348;
            local_24[0] = 0;
            (**(code **)(*plVar5 + 0x10))(plVar5,local_60,300000000,local_24,&uStack_21);
            (*local_50)(0,local_60,local_60);
            iVar2 = FUN_00d0f7a0(0xffffffff,pvVar10);
            if (iVar2 == 1) {
              operator_delete(pvVar10);
            }
          }
          return;
        }
        puVar7 = puVar7 + -1;
      } while (puVar7 != (undefined8 *)0x0);
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
  }
  else {
    uVar4 = (long)puVar9 + (-8 - (long)puVar7);
    uVar6 = (uint)uVar4;
    if ((~uVar6 & 0x18) != 0) {
      uVar8 = (ulong)((uVar6 >> 3) + 1) & 3;
      do {
        if ((long *)*puVar7 == param_2) goto LAB_00cf49c4;
        uVar8 = uVar8 - 1;
        puVar7 = puVar7 + 1;
      } while (uVar8 != 0);
    }
    if (0x17 < uVar4) {
      puVar7 = puVar7 + 2;
      do {
        if ((long *)puVar7[-2] == param_2) {
          puVar7 = puVar7 + -2;
          goto LAB_00cf49c4;
        }
        if ((long *)puVar7[-1] == param_2) {
          puVar7 = puVar7 + -1;
          goto LAB_00cf49c4;
        }
        if ((long *)*puVar7 == param_2) goto LAB_00cf49c4;
        if ((long *)puVar7[1] == param_2) {
          puVar7 = puVar7 + 1;
          goto LAB_00cf49c4;
        }
        puVar1 = puVar7 + 2;
        puVar7 = puVar7 + 4;
      } while (puVar1 != puVar9);
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__vector/vector.h:1160: libc++ Hardening assertion __position != end() failed: vector::erase(iterator) called with a non-dereferenceable iterator\n"
            );
}


// ===== 00cf4b4c  FUN_00cf4b4c =====

void FUN_00cf4b4c(undefined8 *param_1,long param_2)

{
  long lVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  void *pvVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  plVar5 = (long *)operator_new(0x80);
  FUN_00c69ccc(plVar5,3);
  *plVar5 = (long)(PTR_DAT_00d52cb8 + 0x10);
  FUN_00c69328(param_1,param_2 + 8,param_2 + 0x388,plVar5);
  uVar9 = param_1[7];
  *param_1 = &PTR_FUN_00d50508;
  param_1[0xc] = param_2;
  lVar6 = FUN_00c6bab4(0x19);
  *(undefined4 *)(lVar6 + 0xc) = 0x11000000;
  FUN_00c69d80(uVar9,lVar6);
  lVar6 = param_1[0xc];
  if (*(char *)(lVar6 + 0x40f) < '\0') {
    if (*(long *)(lVar6 + 0x400) == 0) goto LAB_00cf4c78;
  }
  else if (*(char *)(lVar6 + 0x40f) == '\0') {
LAB_00cf4c78:
    *(undefined1 *)(param_1 + 0xb) = 0;
    cVar2 = *(char *)(lVar6 + 0x45f);
    goto joined_r0x00cf4bf8;
  }
  FUN_00cf4430(lVar6,uVar9);
  lVar6 = param_1[0xc];
  cVar2 = *(char *)(lVar6 + 0x45f);
joined_r0x00cf4bf8:
  lVar4 = (long)cVar2;
  lVar1 = lVar4;
  if (lVar4 < 0) {
    lVar1 = *(long *)(lVar6 + 0x450);
  }
  if (lVar1 != 0) {
    pvVar7 = operator_new(0x18);
    lVar1 = *(long *)(lVar6 + 0x450);
    lVar3 = *(long *)(lVar6 + 0x448);
    if (-1 < cVar2) {
      lVar1 = lVar4;
      lVar3 = lVar6 + 0x448;
    }
    FUN_00c6c8e0(pvVar7,0xff05,lVar3,lVar1);
    FUN_00c69d80(uVar9,pvVar7);
    lVar6 = param_1[0xc];
  }
  puVar8 = *(undefined8 **)(lVar6 + 0x440);
  if (puVar8 == (undefined8 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00cf4c6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar8)(puVar8,lVar6,uVar9);
  return;
}


// ===== 00cf4ca8  FUN_00cf4ca8 =====

void FUN_00cf4ca8(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  void *local_68 [2];
  char cStack_51;
  void *local_50 [2];
  char cStack_39;
  char *local_38;
  ulong local_30;
  undefined1 *local_28;
  undefined1 uStack_1;
  
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    local_38 = "../../p2p/base/turn_port.cc";
    local_30 = 0x2b69;
    local_28 = &uStack_1;
    (**(code **)(**(long **)(param_1 + 0x60) + 0x110))(local_50);
    lVar4 = *(long *)(param_1 + 0x38);
    lVar3 = (long)*(char *)(lVar4 + 0x3f);
    if (lVar3 < 0) {
      lVar2 = *(long *)(lVar4 + 0x28);
      lVar3 = *(long *)(lVar4 + 0x30);
    }
    else {
      lVar2 = lVar4 + 0x28;
    }
    FUN_00624c34(local_68,lVar2,lVar3);
    FUN_00623bb0(&DAT_0025987e,local_38,local_30 & 0xffffffff,local_50,
                 ": TURN allocate request sent, id=",local_68);
    if (cStack_51 < '\0') {
      operator_delete(local_68[0]);
    }
    if (cStack_39 < '\0') {
      operator_delete(local_50[0]);
    }
  }
  FUN_00c697a8(param_1);
  return;
}


// ===== 00cf4d90  FUN_00cf4d90 =====

/* WARNING: Removing unreachable block (ram,0x00cf4fc4) */
/* WARNING: Removing unreachable block (ram,0x00cf4e78) */
/* WARNING: Removing unreachable block (ram,0x00cf4e94) */
/* WARNING: Removing unreachable block (ram,0x00cf5050) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00cf4d90(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  long lVar8;
  undefined8 local_110;
  void *local_108 [2];
  char cStack_f1;
  void *local_f0 [2];
  char cStack_d9;
  char *local_d8;
  undefined8 local_d0;
  undefined1 *local_c8;
  void **local_c0;
  char **ppcStack_b8;
  char *local_b0;
  void ***pppvStack_a8;
  void **local_a0;
  char **ppcStack_98;
  char *local_90;
  void ***pppvStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  char **local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 uStack_21;
  
  uVar3 = FUN_00417e08();
  if ((uVar3 & 1) == 0) {
    local_d8 = "../../p2p/base/turn_port.cc";
    local_d0 = 0x2b99;
    local_c8 = &uStack_21;
    (**(code **)(**(long **)(param_1 + 0x60) + 0x110))(local_f0);
    ppcStack_b8 = &local_d8;
    pppvStack_a8 = &local_c0;
    lVar8 = *(long *)(param_1 + 0x38);
    local_b0 = ": TURN allocate requested successfully, id=";
    lVar5 = (long)*(char *)(lVar8 + 0x3f);
    if (lVar5 < 0) {
      lVar4 = *(long *)(lVar8 + 0x28);
      lVar5 = *(long *)(lVar8 + 0x30);
    }
    else {
      lVar4 = lVar8 + 0x28;
    }
    local_c0 = local_f0;
    FUN_00624c34(local_108,lVar4,lVar5);
    ppcStack_98 = &local_b0;
    pppvStack_88 = &local_a0;
    local_90 = ", code=0, rtt=";
    local_a0 = local_108;
    local_110 = FUN_00c6951c(param_1);
    FUN_005f3380(&local_58,&local_110);
    local_68 = &local_90;
    uStack_78 = uStack_50;
    local_80 = local_58;
    puVar1 = (undefined8 *)pppvStack_88[1][1];
    puVar2 = (undefined8 *)puVar1[1];
    FUN_00623bb0("\r\n\t\n\t\n",*puVar2,*(undefined4 *)(puVar2 + 1),*puVar1,*pppvStack_88[1],
                 *pppvStack_88,local_90,&local_80);
    if (cStack_f1 < '\0') {
      operator_delete(local_108[0]);
    }
    if (cStack_d9 < '\0') {
      operator_delete(local_f0[0]);
    }
  }
  lVar5 = FUN_00c69f04(param_2,0x20);
  if (lVar5 == 0) {
    uVar3 = FUN_004022fc();
    if ((uVar3 & 1) != 0) {
      return;
    }
    (**(code **)(**(long **)(param_1 + 0x60) + 0x110))(&local_80);
    pcVar7 = ": Missing STUN_ATTR_XOR_MAPPED_ADDRESS attribute in allocate success response";
    uVar6 = 0x2bf2;
  }
  else {
    lVar8 = FUN_00c69f04(param_2,0x16);
    if (lVar8 == 0) {
      uVar3 = FUN_004022fc();
      if ((uVar3 & 1) != 0) {
        return;
      }
      (**(code **)(**(long **)(param_1 + 0x60) + 0x110))(&local_80);
      pcVar7 = ": Missing STUN_ATTR_XOR_RELAYED_ADDRESS attribute in allocate success response";
      uVar6 = 0x2c4a;
    }
    else {
      lVar4 = FUN_00c69f88(param_2,0xd);
      if (lVar4 != 0) {
        FUN_00cf3df8(*(undefined8 *)(param_1 + 0x60),lVar8 + 0x10,lVar5 + 0x10);
        FUN_00cf4200(*(undefined8 *)(param_1 + 0x60),*(undefined4 *)(lVar4 + 0xc));
        return;
      }
      uVar3 = FUN_004022fc();
      if ((uVar3 & 1) != 0) {
        return;
      }
      (**(code **)(**(long **)(param_1 + 0x60) + 0x110))(&local_80);
      pcVar7 = ": Missing STUN_ATTR_LIFETIME attribute in allocate success response";
      uVar6 = 0x2c92;
    }
  }
  FUN_00623bb0(&DAT_00223e94,"../../p2p/base/turn_port.cc",uVar6,&local_80,pcVar7);
  return;
}


// ===== 00cf507c  FUN_00cf507c =====

/* WARNING: Removing unreachable block (ram,0x00cf554c) */
/* WARNING: Removing unreachable block (ram,0x00cf5448) */
/* WARNING: Removing unreachable block (ram,0x00cf5358) */
/* WARNING: Removing unreachable block (ram,0x00cf5190) */
/* WARNING: Removing unreachable block (ram,0x00cf51ac) */
/* WARNING: Removing unreachable block (ram,0x00cf542c) */
/* WARNING: Removing unreachable block (ram,0x00cf5564) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00cf507c(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long *plVar15;
  undefined8 in_stack_fffffffffffffe80;
  char *pcVar16;
  undefined4 uVar17;
  undefined8 local_148;
  undefined1 uStack_139;
  void **local_138;
  char **ppcStack_130;
  void *local_128 [2];
  char cStack_111;
  void *local_110 [2];
  char cStack_f9;
  void **local_f8;
  undefined8 local_f0;
  undefined8 *local_e8;
  void **local_e0;
  void ***pppvStack_d8;
  char *local_d0;
  void ***pppvStack_c8;
  void **local_c0;
  char **ppcStack_b8;
  char *local_b0;
  void ***pppvStack_a8;
  ulong local_a0;
  char **local_98;
  char *local_90;
  ulong *puStack_88;
  long *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *local_60;
  undefined8 uStack_58;
  code *local_50;
  char **local_48;
  
  uVar17 = (undefined4)((ulong)in_stack_fffffffffffffe80 >> 0x20);
  uVar6 = FUN_00c6a078(param_2);
  uVar14 = (ulong)uVar6;
  uVar7 = FUN_00417e08();
  if ((uVar7 & 1) == 0) {
    local_f8 = (void **)0x1db146;
    local_f0 = 0x2d09;
    local_e8 = &local_148;
    (**(code **)(**(long **)(param_1 + 0x60) + 0x110))(local_110);
    pppvStack_d8 = &local_f8;
    pppvStack_c8 = &local_e0;
    lVar11 = *(long *)(param_1 + 0x38);
    local_d0 = ": Received TURN allocate error response, id=";
    lVar10 = (long)*(char *)(lVar11 + 0x3f);
    if (lVar10 < 0) {
      lVar12 = *(long *)(lVar11 + 0x28);
      lVar10 = *(long *)(lVar11 + 0x30);
    }
    else {
      lVar12 = lVar11 + 0x28;
    }
    local_e0 = local_110;
    FUN_00624c34(local_128,lVar12,lVar10);
    ppcStack_b8 = &local_d0;
    pppvStack_a8 = &local_c0;
    local_b0 = ", code=";
    local_98 = &local_b0;
    puStack_88 = &local_a0;
    local_90 = ", rtt=";
    local_c0 = local_128;
    local_a0 = uVar14;
    local_138 = (void **)FUN_00c6951c(param_1);
    FUN_005f3380(&local_80,&local_138);
    local_48 = &local_90;
    uStack_58 = uStack_78;
    local_60 = local_80;
    local_50 = (code *)local_70;
    puVar1 = (undefined8 *)((undefined8 *)puStack_88[1])[1];
    puVar2 = (undefined8 *)puVar1[1];
    puVar3 = (undefined8 *)puVar2[1];
    puVar4 = (undefined8 *)puVar3[1];
    pcVar16 = local_90;
    FUN_00623bb0(&DAT_0025a67a,*puVar4,*(undefined4 *)(puVar4 + 1),*puVar3,*puVar2,*puVar1,
                 *(undefined8 *)puStack_88[1],(int)*puStack_88,local_90,&local_60);
    uVar17 = (undefined4)((ulong)pcVar16 >> 0x20);
    if (cStack_111 < '\0') {
      operator_delete(local_128[0]);
    }
    if (cStack_f9 < '\0') {
      operator_delete(local_110[0]);
    }
  }
  if (uVar6 == 300) {
    FUN_00cf5824(param_1,param_2);
  }
  else if (uVar6 == 0x1b5) {
    plVar15 = *(long **)(param_1 + 0x60);
    plVar8 = (long *)(**(code **)(*plVar15 + 0x130))(plVar15);
    lVar10 = plVar15[0x8c];
    if (lVar10 != 0) {
      FUN_00d0f740(1,lVar10);
    }
    local_60 = (long *)operator_new(0x30);
    *local_60 = lVar10;
    local_60[4] = (long)FUN_004473ec;
    local_60[5] = (long)FUN_00cf860c;
    local_60[2] = (long)plVar15;
    local_50 = FUN_005db390;
    local_48 = (char **)FUN_005db348;
    (**(code **)(*plVar8 + 8))(plVar8,&local_60,&local_80,&local_f8);
    (*local_50)(0,&local_60,&local_60);
  }
  else if (uVar6 == 0x191) {
    FUN_00cf55a8(param_1,param_2,0x191);
  }
  else {
    lVar10 = FUN_00c6a048(param_2);
    uVar7 = FUN_004022fc();
    if ((uVar7 & 1) == 0) {
      local_f8 = (void **)0x1db146;
      local_f0 = 0x2db2;
      local_e8 = (undefined8 *)&uStack_139;
      (**(code **)(**(long **)(param_1 + 0x60) + 0x110))(local_110);
      ppcStack_130 = (char **)&local_f8;
      pppvStack_d8 = &local_138;
      pppvStack_c8 = &local_e0;
      local_e0 = (void **)0x1b312d;
      lVar12 = *(long *)(param_1 + 0x38);
      local_d0 = ", id=";
      lVar11 = (long)*(char *)(lVar12 + 0x3f);
      if (lVar11 < 0) {
        lVar9 = *(long *)(lVar12 + 0x28);
        lVar11 = *(long *)(lVar12 + 0x30);
      }
      else {
        lVar9 = lVar12 + 0x28;
      }
      local_138 = local_110;
      FUN_00624c34(local_128,lVar9,lVar11);
      ppcStack_b8 = &local_d0;
      pppvStack_a8 = &local_c0;
      local_b0 = ", code=";
      local_98 = &local_b0;
      puStack_88 = &local_a0;
      local_90 = ", rtt=";
      local_c0 = local_128;
      local_a0 = uVar14;
      local_148 = FUN_00c6951c(param_1);
      FUN_005f3380(&local_80,&local_148);
      local_48 = &local_90;
      uStack_58 = uStack_78;
      local_60 = local_80;
      local_50 = (code *)local_70;
      if (lVar10 == 0) {
        FUN_005d3510(&local_80,&DAT_001b3348);
      }
      else if (*(char *)(lVar10 + 0x27) < '\0') {
        FUN_005478d8(&local_80,*(undefined8 *)(lVar10 + 0x10),*(undefined8 *)(lVar10 + 0x18));
      }
      else {
        local_70 = *(undefined8 *)(lVar10 + 0x20);
        uStack_78 = *(undefined8 *)(lVar10 + 0x18);
        local_80 = *(long **)(lVar10 + 0x10);
      }
      puVar13 = *(undefined8 **)(local_48[1] + 8);
      puVar1 = (undefined8 *)puVar13[1];
      puVar2 = (undefined8 *)puVar1[1];
      puVar3 = (undefined8 *)puVar2[1];
      puVar4 = (undefined8 *)puVar3[1];
      puVar5 = (undefined8 *)puVar4[1];
      FUN_00623bb0(&DAT_0025a683,*puVar5,*(undefined4 *)(puVar5 + 1),*puVar4,*puVar3,*puVar2,*puVar1
                   ,*puVar13,CONCAT44(uVar17,*(undefined4 *)local_48[1]),*local_48,&local_60,
                   ", reason=\'",&local_80,&DAT_001c1d3e);
      if (cStack_111 < '\0') {
        operator_delete(local_128[0]);
      }
      if (cStack_f9 < '\0') {
        operator_delete(local_110[0]);
      }
    }
    FUN_00cf1328(*(undefined8 *)(param_1 + 0x60),uVar14,"TURN allocate error.",0x14);
  }
  return;
}


// ===== 00cf55a8  FUN_00cf55a8 =====

/* WARNING: Removing unreachable block (ram,0x00cf5754) */

void FUN_00cf55a8(long param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  char *pcVar6;
  void *local_70;
  undefined8 uStack_68;
  long local_60;
  void *local_58 [2];
  char cStack_41;
  undefined1 uStack_39;
  char *local_38;
  ulong local_30;
  undefined1 *local_28;
  
  if (param_3 == 0x191) {
    cVar1 = *(char *)(*(long *)(param_1 + 0x60) + 0x40f);
    if (cVar1 < '\0') {
      if (*(long *)(*(long *)(param_1 + 0x60) + 0x400) == 0) goto LAB_00cf5644;
    }
    else if (cVar1 == '\0') goto LAB_00cf5644;
    lVar2 = FUN_00c6a048(param_2);
    uVar3 = FUN_004022fc();
    if ((uVar3 & 1) == 0) {
      local_38 = "../../p2p/base/turn_port.cc";
      local_30 = 0x2e5a;
      local_28 = &uStack_39;
      (**(code **)(**(long **)(param_1 + 0x60) + 0x110))(local_58);
      if (lVar2 == 0) {
        FUN_005d3510(&local_70,&DAT_001b3348);
      }
      else if (*(char *)(lVar2 + 0x27) < '\0') {
        FUN_005478d8(&local_70,*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)(lVar2 + 0x18));
      }
      else {
        local_60 = *(long *)(lVar2 + 0x20);
        uStack_68 = *(undefined8 *)(lVar2 + 0x18);
        local_70 = *(void **)(lVar2 + 0x10);
      }
      FUN_00623bb0("\r\n\t\n\t",local_38,local_30 & 0xffffffff,local_58,
                   ": Failed to authenticate with the server after challenge, reason=\'",&local_70,
                   &DAT_001c1d3e);
      if (local_60 < 0) {
        operator_delete(local_70);
      }
      if (cStack_41 < '\0') {
        operator_delete(local_58[0]);
      }
    }
    FUN_00cf1328(*(undefined8 *)(param_1 + 0x60),0x191,"Unauthorized.",0xd);
  }
  else {
LAB_00cf5644:
    lVar2 = FUN_00c69fe8(param_2,0x14);
    if (lVar2 == 0) {
      uVar3 = FUN_004022fc();
      if ((uVar3 & 1) != 0) {
        return;
      }
      (**(code **)(**(long **)(param_1 + 0x60) + 0x110))(&local_38);
      pcVar6 = ": Missing STUN_ATTR_REALM attribute in allocate unauthorized response.";
      uVar5 = 0x2eba;
    }
    else {
      if ((*(long *)(lVar2 + 0x10) == 0) && (*(short *)(lVar2 + 10) != 0)) {
LAB_00cf5810:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/string_view:333: libc++ Hardening assertion __len == 0 || __s != nullptr failed: string_view::string_view(_CharT *, size_t): received nullptr\n"
                  );
      }
      FUN_00cf0d0c(*(undefined8 *)(param_1 + 0x60));
      lVar2 = FUN_00c69fe8(param_2,0x15);
      if (lVar2 != 0) {
        if ((*(long *)(lVar2 + 0x10) != 0) || (*(short *)(lVar2 + 10) == 0)) {
          FUN_00cf4674(*(undefined8 *)(param_1 + 0x60));
          lVar2 = *(long *)(param_1 + 0x60);
          pvVar4 = operator_new(0x68);
          FUN_00cf4b4c(pvVar4,lVar2);
          FUN_00c68ac8(lVar2 + 0x388,pvVar4,0);
          return;
        }
        goto LAB_00cf5810;
      }
      uVar3 = FUN_004022fc();
      if ((uVar3 & 1) != 0) {
        return;
      }
      (**(code **)(**(long **)(param_1 + 0x60) + 0x110))(&local_38);
      pcVar6 = ": Missing STUN_ATTR_NONCE attribute in allocate unauthorized response.";
      uVar5 = 0x2f0a;
    }
    FUN_00623bb0(&DAT_00223e94,"../../p2p/base/turn_port.cc",uVar5,&local_38,pcVar6);
  }
  return;
}


// ===== 00cf5824  FUN_00cf5824 =====

void FUN_00cf5824(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  void *local_70;
  undefined8 uStack_68;
  long local_60;
  long *local_50 [2];
  undefined8 local_40;
  code *pcStack_38;
  undefined1 uStack_11;
  
  lVar1 = FUN_00c69f04(param_2,0x8023);
  if (lVar1 == 0) {
    lVar1 = FUN_00c6a048(param_2);
    uVar2 = FUN_004022fc();
    if ((uVar2 & 1) == 0) {
      (**(code **)(**(long **)(param_1 + 0x60) + 0x110))(local_50);
      if (lVar1 == 0) {
        FUN_005d3510(&local_70,&DAT_001b3348);
      }
      else if (*(char *)(lVar1 + 0x27) < '\0') {
        FUN_005478d8(&local_70,*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18));
      }
      else {
        local_60 = *(long *)(lVar1 + 0x20);
        uStack_68 = *(undefined8 *)(lVar1 + 0x18);
        local_70 = *(void **)(lVar1 + 0x10);
      }
      FUN_00623bb0("\r\n\t\n\t","../../p2p/base/turn_port.cc",0x2faa,local_50,
                   ": Missing STUN_ATTR_ALTERNATE_SERVER attribute in try alternate error response, reason=\'"
                   ,&local_70,&DAT_001c1d3e);
      if (local_60 < 0) {
        operator_delete(local_70);
        if (-1 < local_40._7_1_) goto LAB_00cf5ae0;
      }
      else if (-1 < (long)local_40) goto LAB_00cf5ae0;
      operator_delete(local_50[0]);
    }
LAB_00cf5ae0:
    FUN_00cf1328(*(undefined8 *)(param_1 + 0x60),300,"Missing alternate server attribute.",0x23);
    return;
  }
  uVar2 = FUN_00cf39c0(*(undefined8 *)(param_1 + 0x60),lVar1 + 0x10);
  if ((uVar2 & 1) == 0) {
    FUN_00cf1328(*(undefined8 *)(param_1 + 0x60),300,"Failed to set alternate server.",0x1f);
    return;
  }
  lVar1 = FUN_00c69fe8(param_2,0x14);
  if (lVar1 != 0) {
    uVar2 = FUN_00417e08();
    if ((uVar2 & 1) == 0) {
      (**(code **)(**(long **)(param_1 + 0x60) + 0x110))(local_50);
      FUN_00623bb0(&DAT_00223e94,"../../p2p/base/turn_port.cc",0x3039,local_50,
                   ": Applying STUN_ATTR_REALM attribute in try alternate error response.");
      if ((long)local_40 < 0) {
        operator_delete(local_50[0]);
      }
    }
    if ((*(long *)(lVar1 + 0x10) == 0) && (*(short *)(lVar1 + 10) != 0)) goto LAB_00cf5b3c;
    FUN_00cf0d0c(*(undefined8 *)(param_1 + 0x60));
  }
  lVar1 = FUN_00c69fe8(param_2,0x15);
  if (lVar1 != 0) {
    uVar2 = FUN_00417e08();
    if ((uVar2 & 1) == 0) {
      (**(code **)(**(long **)(param_1 + 0x60) + 0x110))(local_50);
      FUN_00623bb0(&DAT_00223e94,"../../p2p/base/turn_port.cc",0x3081,local_50,
                   ": Applying STUN_ATTR_NONCE attribute in try alternate error response.");
      if (local_40._7_1_ < '\0') {
        operator_delete(local_50[0]);
      }
    }
    if ((*(long *)(lVar1 + 0x10) == 0) && (*(short *)(lVar1 + 10) != 0)) {
LAB_00cf5b3c:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/string_view:333: libc++ Hardening assertion __len == 0 || __s != nullptr failed: string_view::string_view(_CharT *, size_t): received nullptr\n"
                );
    }
    FUN_00cf4674(*(undefined8 *)(param_1 + 0x60));
  }
  plVar4 = *(long **)(param_1 + 0x60);
  plVar3 = (long *)(**(code **)(*plVar4 + 0x130))(plVar4);
  lVar1 = plVar4[0x8c];
  if (lVar1 != 0) {
    FUN_00d0f740(1,lVar1);
  }
  local_50[0] = (long *)operator_new(0x30);
  *local_50[0] = lVar1;
  local_50[0][4] = (long)FUN_004473ec;
  local_50[0][5] = (long)FUN_00cf8618;
  local_50[0][2] = (long)plVar4;
  local_40 = FUN_005db390;
  pcStack_38 = FUN_005db348;
  (**(code **)(*plVar3 + 8))(plVar3,local_50,&local_70,&uStack_11);
  (*local_40)(0,local_50,local_50);
  return;
}


// ===== 00cf5b50  FUN_00cf5b50 =====

void FUN_00cf5b50(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  void *local_68 [2];
  char cStack_51;
  void *local_50 [2];
  char cStack_39;
  char *local_38;
  ulong local_30;
  undefined1 *local_28;
  undefined1 uStack_1;
  
  uVar1 = FUN_004022fc();
  if ((uVar1 & 1) == 0) {
    local_38 = "../../p2p/base/turn_port.cc";
    local_30 = 0x2e12;
    local_28 = &uStack_1;
    (**(code **)(**(long **)(param_1 + 0x60) + 0x110))(local_50);
    lVar4 = *(long *)(param_1 + 0x38);
    lVar3 = (long)*(char *)(lVar4 + 0x3f);
    if (lVar3 < 0) {
      lVar2 = *(long *)(lVar4 + 0x28);
      lVar3 = *(long *)(lVar4 + 0x30);
    }
    else {
      lVar2 = lVar4 + 0x28;
    }
    FUN_00624c34(local_68,lVar2,lVar3);
    FUN_00623bb0("\r\n\t\n\t",local_38,local_30 & 0xffffffff,local_50,": TURN allocate request ",
                 local_68," timeout");
    if (cStack_51 < '\0') {
      operator_delete(local_68[0]);
    }
    if (cStack_39 < '\0') {
      operator_delete(local_50[0]);
    }
  }
  FUN_00cf1328(*(undefined8 *)(param_1 + 0x60),0x2bd,"TURN allocate request timed out.",0x20);
  return;
}


// ===== 00cf5c50  FUN_00cf5c50 =====

void FUN_00cf5c50(undefined8 *param_1,long param_2,int param_3)

{
  long *plVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  plVar1 = (long *)operator_new(0x80);
  FUN_00c69ccc(plVar1,4);
  *plVar1 = (long)(PTR_DAT_00d52cb8 + 0x10);
  FUN_00c69328(param_1,param_2 + 8,param_2 + 0x388,plVar1);
  uVar4 = param_1[7];
  *param_1 = &PTR_FUN_00d50550;
  param_1[0xc] = param_2;
  if (-1 < param_3) {
    pvVar2 = operator_new(0x10);
    FUN_00c6c6b0(pvVar2,0xd,param_3);
    FUN_00c69d80(uVar4,pvVar2);
    param_2 = param_1[0xc];
  }
  FUN_00cf4430(param_2,uVar4);
  puVar3 = *(undefined8 **)(param_1[0xc] + 0x440);
  if (puVar3 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00cf5d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar3)(puVar3,param_1[0xc],uVar4);
    return;
  }
  return;
}


// ===== 00cf5d34  FUN_00cf5d34 =====

void FUN_00cf5d34(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  void *local_68 [2];
  char cStack_51;
  void *local_50 [2];
  char cStack_39;
  char *local_38;
  ulong local_30;
  undefined1 *local_28;
  undefined1 uStack_1;
  
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    local_38 = "../../p2p/base/turn_port.cc";
    local_30 = 0x3189;
    local_28 = &uStack_1;
    (**(code **)(**(long **)(param_1 + 0x60) + 0x110))(local_50);
    lVar4 = *(long *)(param_1 + 0x38);
    lVar3 = (long)*(char *)(lVar4 + 0x3f);
    if (lVar3 < 0) {
      lVar2 = *(long *)(lVar4 + 0x28);
      lVar3 = *(long *)(lVar4 + 0x30);
    }
    else {
      lVar2 = lVar4 + 0x28;
    }
    FUN_00624c34(local_68,lVar2,lVar3);
    FUN_00623bb0(&DAT_0025987e,local_38,local_30 & 0xffffffff,local_50,
                 ": TURN refresh request sent, id=",local_68);
    if (cStack_51 < '\0') {
      operator_delete(local_68[0]);
    }
    if (cStack_39 < '\0') {
      operator_delete(local_50[0]);
    }
  }
  FUN_00c697a8(param_1);
  return;
}


// ===== 00cf5e1c  FUN_00cf5e1c =====

/* WARNING: Removing unreachable block (ram,0x00cf60bc) */
/* WARNING: Removing unreachable block (ram,0x00cf5f00) */
/* WARNING: Removing unreachable block (ram,0x00cf5f1c) */
/* WARNING: Removing unreachable block (ram,0x00cf5fe0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00cf5e1c(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 local_100;
  void *local_f8 [2];
  char cStack_e1;
  void *local_e0 [2];
  char cStack_c9;
  undefined1 uStack_c1;
  char *local_c0;
  undefined8 local_b8;
  undefined1 *local_b0;
  void **local_a8;
  char **ppcStack_a0;
  char *local_98;
  void ***pppvStack_90;
  void **local_88;
  char **ppcStack_80;
  char *local_78;
  void ***pppvStack_70;
  long *local_68;
  undefined8 uStack_60;
  undefined7 local_58;
  undefined1 uStack_51;
  long *local_50;
  undefined8 uStack_48;
  code *local_40;
  char **local_38;
  
  uVar3 = FUN_00417e08();
  if ((uVar3 & 1) == 0) {
    local_c0 = "../../p2p/base/turn_port.cc";
    local_b8 = 0x31b9;
    local_b0 = &uStack_c1;
    (**(code **)(**(long **)(param_1 + 0x60) + 0x110))(local_e0);
    ppcStack_a0 = &local_c0;
    pppvStack_90 = &local_a8;
    lVar7 = *(long *)(param_1 + 0x38);
    local_98 = ": TURN refresh requested successfully, id=";
    lVar6 = (long)*(char *)(lVar7 + 0x3f);
    if (lVar6 < 0) {
      lVar4 = *(long *)(lVar7 + 0x28);
      lVar6 = *(long *)(lVar7 + 0x30);
    }
    else {
      lVar4 = lVar7 + 0x28;
    }
    local_a8 = local_e0;
    FUN_00624c34(local_f8,lVar4,lVar6);
    ppcStack_80 = &local_98;
    pppvStack_70 = &local_88;
    local_78 = ", code=0, rtt=";
    local_88 = local_f8;
    local_100 = FUN_00c6951c(param_1);
    FUN_005f3380(&local_68,&local_100);
    local_40 = (code *)CONCAT17(uStack_51,local_58);
    local_38 = &local_78;
    uStack_48 = uStack_60;
    local_50 = local_68;
    puVar1 = (undefined8 *)pppvStack_70[1][1];
    puVar2 = (undefined8 *)puVar1[1];
    FUN_00623bb0("\r\n\t\n\t\n",*puVar2,*(undefined4 *)(puVar2 + 1),*puVar1,*pppvStack_70[1],
                 *pppvStack_70,local_78,&local_50);
    if (cStack_e1 < '\0') {
      operator_delete(local_f8[0]);
    }
    if (cStack_c9 < '\0') {
      operator_delete(local_e0[0]);
    }
  }
  lVar6 = FUN_00c69f88(param_2,0xd);
  if (lVar6 == 0) {
    uVar3 = FUN_004022fc();
    if ((uVar3 & 1) == 0) {
      (**(code **)(**(long **)(param_1 + 0x60) + 0x110))(&local_50);
      FUN_00623bb0(&DAT_00223e94,"../../p2p/base/turn_port.cc",0x3212,&local_50,
                   ": Missing STUN_ATTR_LIFETIME attribute in refresh success response.");
    }
  }
  else {
    plVar8 = *(long **)(param_1 + 0x60);
    if (*(int *)(lVar6 + 0xc) == 0) {
      plVar5 = (long *)(**(code **)(*plVar8 + 0x130))(plVar8);
      lVar6 = plVar8[0x8c];
      if (lVar6 != 0) {
        FUN_00d0f740(1,lVar6);
      }
      local_50 = (long *)operator_new(0x30);
      *local_50 = lVar6;
      local_50[4] = (long)FUN_004473ec;
      local_50[5] = (long)FUN_00cf869c;
      local_50[2] = (long)plVar8;
      local_40 = FUN_005db390;
      local_38 = (char **)FUN_005db348;
      (**(code **)(*plVar5 + 8))(plVar5,&local_50,&local_68,&local_c0);
      (*local_40)(0,&local_50,&local_50);
    }
    else {
      FUN_00cf4200(plVar8);
    }
    plVar8 = *(long **)(*(long *)(param_1 + 0x60) + 0x468);
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x18))(plVar8,0);
    }
  }
  return;
}


// ===== 00cf6100  FUN_00cf6100 =====

/* WARNING: Removing unreachable block (ram,0x00cf62f0) */
/* WARNING: Removing unreachable block (ram,0x00cf62d4) */
/* WARNING: Removing unreachable block (ram,0x00cf6424) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00cf6100(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 local_130;
  void *local_128 [2];
  char cStack_111;
  void *local_110 [2];
  char cStack_f9;
  undefined1 uStack_f1;
  char *local_f0;
  undefined8 local_e8;
  undefined1 *local_e0;
  void **local_d8;
  char **ppcStack_d0;
  char *local_c8;
  void ***pppvStack_c0;
  void **local_b8;
  char **ppcStack_b0;
  char *local_a8;
  void ***pppvStack_a0;
  ulong local_98;
  char **local_90;
  char *local_88;
  ulong *puStack_80;
  long *local_78;
  undefined8 uStack_70;
  long *local_60;
  undefined8 uStack_58;
  code *local_50;
  char **local_48;
  
  uVar3 = FUN_00c6a078(param_2);
  if (uVar3 == 0x1b6) {
    uVar4 = FUN_00cf453c(*(undefined8 *)(param_1 + 0x60),param_2);
    if ((uVar4 & 1) != 0) {
      lVar10 = *(long *)(param_1 + 0x60);
      puVar5 = (undefined8 *)operator_new(0x68);
      plVar6 = (long *)operator_new(0x80);
      FUN_00c69ccc(plVar6,4);
      *plVar6 = (long)(PTR_DAT_00d52cb8 + 0x10);
      FUN_00c69328(puVar5,lVar10 + 8,lVar10 + 0x388,plVar6);
      uVar11 = puVar5[7];
      *puVar5 = &PTR_FUN_00d50550;
      puVar5[0xc] = lVar10;
      FUN_00cf4430(lVar10,uVar11);
      puVar7 = *(undefined8 **)(puVar5[0xc] + 0x440);
      if (puVar7 != (undefined8 *)0x0) {
        (**(code **)*puVar7)(puVar7,puVar5[0xc],uVar11);
      }
      FUN_00c68ac8(lVar10 + 0x388,puVar5,0);
      return;
    }
  }
  else {
    uVar4 = FUN_004022fc();
    if ((uVar4 & 1) == 0) {
      local_f0 = "../../p2p/base/turn_port.cc";
      local_e8 = 0x330a;
      local_e0 = &uStack_f1;
      (**(code **)(**(long **)(param_1 + 0x60) + 0x110))(local_110);
      ppcStack_d0 = &local_f0;
      pppvStack_c0 = &local_d8;
      lVar9 = *(long *)(param_1 + 0x38);
      local_c8 = ": Received TURN refresh error response, id=";
      lVar10 = (long)*(char *)(lVar9 + 0x3f);
      if (lVar10 < 0) {
        lVar8 = *(long *)(lVar9 + 0x28);
        lVar10 = *(long *)(lVar9 + 0x30);
      }
      else {
        lVar8 = lVar9 + 0x28;
      }
      local_d8 = local_110;
      FUN_00624c34(local_128,lVar8,lVar10);
      ppcStack_b0 = &local_c8;
      pppvStack_a0 = &local_b8;
      local_a8 = ", code=";
      local_90 = &local_a8;
      puStack_80 = &local_98;
      local_88 = ", rtt=";
      local_b8 = local_128;
      local_98 = (ulong)uVar3;
      local_130 = FUN_00c6951c(param_1);
      FUN_005f3380(&local_78,&local_130);
      local_48 = &local_88;
      uStack_58 = uStack_70;
      local_60 = local_78;
      puVar5 = (undefined8 *)((undefined8 *)puStack_80[1])[1];
      puVar7 = (undefined8 *)puVar5[1];
      puVar1 = (undefined8 *)puVar7[1];
      puVar2 = (undefined8 *)puVar1[1];
      FUN_00623bb0(&DAT_0025a67a,*puVar2,*(undefined4 *)(puVar2 + 1),*puVar1,*puVar7,*puVar5,
                   *(undefined8 *)puStack_80[1],(int)*puStack_80,local_88,&local_60);
      if (cStack_111 < '\0') {
        operator_delete(local_128[0]);
      }
      if (cStack_f9 < '\0') {
        operator_delete(local_110[0]);
      }
    }
    plVar12 = *(long **)(param_1 + 0x60);
    plVar6 = (long *)(**(code **)(*plVar12 + 0x130))(plVar12);
    lVar10 = plVar12[0x8c];
    if (lVar10 != 0) {
      FUN_00d0f740(1,lVar10);
    }
    local_60 = (long *)operator_new(0x30);
    *local_60 = lVar10;
    local_60[4] = (long)FUN_004473ec;
    local_60[5] = (long)FUN_00cf8420;
    local_60[2] = (long)plVar12;
    local_50 = FUN_005db390;
    local_48 = (char **)FUN_005db348;
    (**(code **)(*plVar6 + 8))(plVar6,&local_60,&local_78,&local_f0);
    (*local_50)(0,&local_60,&local_60);
    plVar6 = *(long **)(*(long *)(param_1 + 0x60) + 0x468);
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x18))(plVar6,(ulong)uVar3);
    }
  }
  return;
}


// ===== 00cf6468  FUN_00cf6468 =====

void FUN_00cf6468(long param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  void *local_80 [2];
  char cStack_69;
  void *local_68 [2];
  char cStack_51;
  long *local_50;
  ulong local_48;
  code *local_40;
  code *pcStack_38;
  undefined1 uStack_11;
  
  uVar1 = FUN_004022fc();
  if ((uVar1 & 1) == 0) {
    local_50 = (long *)0x1db146;
    local_48 = 0x336a;
    local_40 = (code *)&uStack_11;
    (**(code **)(**(long **)(param_1 + 0x60) + 0x110))(local_68);
    lVar5 = *(long *)(param_1 + 0x38);
    lVar4 = (long)*(char *)(lVar5 + 0x3f);
    if (lVar4 < 0) {
      lVar2 = *(long *)(lVar5 + 0x28);
      lVar4 = *(long *)(lVar5 + 0x30);
    }
    else {
      lVar2 = lVar5 + 0x28;
    }
    FUN_00624c34(local_80,lVar2,lVar4);
    FUN_00623bb0(&DAT_0025987e,local_50,local_48 & 0xffffffff,local_68,": TURN refresh timeout ",
                 local_80);
    if (cStack_69 < '\0') {
      operator_delete(local_80[0]);
    }
    if (cStack_51 < '\0') {
      operator_delete(local_68[0]);
    }
  }
  plVar6 = *(long **)(param_1 + 0x60);
  plVar3 = (long *)(**(code **)(*plVar6 + 0x130))(plVar6);
  lVar4 = plVar6[0x8c];
  if (lVar4 != 0) {
    FUN_00d0f740(1,lVar4);
  }
  local_50 = (long *)operator_new(0x30);
  *local_50 = lVar4;
  local_50[4] = (long)FUN_004473ec;
  local_50[5] = (long)FUN_00cf8420;
  local_50[2] = (long)plVar6;
  local_40 = FUN_005db390;
  pcStack_38 = FUN_005db348;
  (**(code **)(*plVar3 + 8))(plVar3,&local_50,local_68,local_80);
  (*local_40)(0,&local_50,&local_50);
  return;
}


// ===== 00cf65e8  FUN_00cf65e8 =====

void FUN_00cf65e8(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  plVar1 = (long *)operator_new(0x80);
  FUN_00c69ccc(plVar1,8);
  *plVar1 = (long)(PTR_DAT_00d52cb8 + 0x10);
  FUN_00c69328(param_1,param_2 + 8,param_2 + 0x388,plVar1);
  *param_1 = &PTR_FUN_00d50598;
  param_1[0xc] = param_2;
  param_1[0xd] = param_3;
  FUN_007e8cec(param_1 + 0xe,param_4);
  FUN_007b5a0c(param_1[0xd],param_1,param_1,FUN_00cf8740);
  uVar4 = param_1[7];
  pvVar2 = operator_new(0x60);
  FUN_00c6c0e8(pvVar2,0x12,param_1 + 0xe);
  FUN_00c69d80(uVar4,pvVar2);
  FUN_00cf4430(param_1[0xc],uVar4);
  puVar3 = *(undefined8 **)(param_1[0xc] + 0x440);
  if (puVar3 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00cf66dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar3)(puVar3,param_1[0xc],uVar4);
    return;
  }
  return;
}


// ===== 00cf66f8  FUN_00cf66f8 =====

void FUN_00cf66f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d50598;
  if (param_1[0xd] != 0) {
    FUN_007b5df8(param_1[0xd],param_1);
  }
  if (*(char *)((long)param_1 + 0x87) < '\0') {
    operator_delete((void *)param_1[0xe]);
  }
  FUN_00c693c0(param_1);
  return;
}


// ===== 00cf6754  FUN_00cf6754 =====

void FUN_00cf6754(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d50598;
  if (param_1[0xd] != 0) {
    FUN_007b5df8(param_1[0xd],param_1);
  }
  if (*(char *)((long)param_1 + 0x87) < '\0') {
    operator_delete((void *)param_1[0xe]);
  }
  FUN_00c693c0(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00cf67bc  FUN_00cf67bc =====

void FUN_00cf67bc(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  void *local_68 [2];
  char cStack_51;
  void *local_50 [2];
  char cStack_39;
  char *local_38;
  ulong local_30;
  undefined1 *local_28;
  undefined1 uStack_1;
  
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    local_38 = "../../p2p/base/turn_port.cc";
    local_30 = 0x3491;
    local_28 = &uStack_1;
    (**(code **)(**(long **)(param_1 + 0x60) + 0x110))(local_50);
    lVar4 = *(long *)(param_1 + 0x38);
    lVar3 = (long)*(char *)(lVar4 + 0x3f);
    if (lVar3 < 0) {
      lVar2 = *(long *)(lVar4 + 0x28);
      lVar3 = *(long *)(lVar4 + 0x30);
    }
    else {
      lVar2 = lVar4 + 0x28;
    }
    FUN_00624c34(local_68,lVar2,lVar3);
    FUN_00623bb0(&DAT_0025987e,local_38,local_30 & 0xffffffff,local_50,
                 ": TURN create permission request sent, id=",local_68);
    if (cStack_51 < '\0') {
      operator_delete(local_68[0]);
    }
    if (cStack_39 < '\0') {
      operator_delete(local_50[0]);
    }
  }
  FUN_00c697a8(param_1);
  return;
}


// ===== 00cf68a4  FUN_00cf68a4 =====

/* WARNING: Removing unreachable block (ram,0x00cf699c) */
/* WARNING: Removing unreachable block (ram,0x00cf6980) */
/* WARNING: Removing unreachable block (ram,0x00cf6a10) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00cf68a4(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 local_f8;
  void *local_f0 [2];
  char cStack_d9;
  void *local_d8 [2];
  char cStack_c1;
  undefined1 uStack_b9;
  char *local_b8;
  undefined8 local_b0;
  undefined1 *local_a8;
  void **local_a0;
  char **ppcStack_98;
  char *local_90;
  void ***pppvStack_88;
  void **local_80;
  char **ppcStack_78;
  char *local_70;
  void ***pppvStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  char **local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  
  uVar3 = FUN_00417e08();
  if ((uVar3 & 1) == 0) {
    local_b8 = "../../p2p/base/turn_port.cc";
    local_b0 = 0x34c9;
    local_a8 = &uStack_b9;
    (**(code **)(**(long **)(param_1 + 0x60) + 0x110))(local_d8);
    ppcStack_98 = &local_b8;
    pppvStack_88 = &local_a0;
    lVar6 = *(long *)(param_1 + 0x38);
    local_90 = ": TURN permission requested successfully, id=";
    lVar5 = (long)*(char *)(lVar6 + 0x3f);
    if (lVar5 < 0) {
      lVar4 = *(long *)(lVar6 + 0x28);
      lVar5 = *(long *)(lVar6 + 0x30);
    }
    else {
      lVar4 = lVar6 + 0x28;
    }
    local_a0 = local_d8;
    FUN_00624c34(local_f0,lVar4,lVar5);
    ppcStack_78 = &local_90;
    pppvStack_68 = &local_80;
    local_70 = ", code=0, rtt=";
    local_80 = local_f0;
    local_f8 = FUN_00c6951c(param_1);
    FUN_005f3380(&local_38,&local_f8);
    local_48 = &local_70;
    uStack_58 = uStack_30;
    local_60 = local_38;
    puVar1 = (undefined8 *)pppvStack_68[1][1];
    puVar2 = (undefined8 *)puVar1[1];
    FUN_00623bb0("\r\n\t\n\t\n",*puVar2,*(undefined4 *)(puVar2 + 1),*puVar1,*pppvStack_68[1],
                 *pppvStack_68,local_70,&local_60);
    if (cStack_d9 < '\0') {
      operator_delete(local_f0[0]);
    }
    if (cStack_c1 < '\0') {
      operator_delete(local_d8[0]);
      lVar5 = *(long *)(param_1 + 0x68);
      goto joined_r0x00cf69f4;
    }
  }
  lVar5 = *(long *)(param_1 + 0x68);
joined_r0x00cf69f4:
  if (lVar5 != 0) {
    FUN_00cf6a5c();
  }
  return;
}


// ===== 00cf6a5c  FUN_00cf6a5c =====

void FUN_00cf6a5c(long param_1)

{
  ulong uVar1;
  long *plVar2;
  void *pvVar3;
  long lVar4;
  void *local_60 [2];
  char cStack_49;
  void *local_48 [2];
  char cStack_31;
  
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    (**(code **)(**(long **)(param_1 + 0x20) + 0x110))(local_48);
    FUN_007e924c(local_60,param_1 + 0x30);
    FUN_00623bb0("\r\n\t\n\t","../../p2p/base/turn_port.cc",0x3ab1,local_48,
                 ": Create permission for ",local_60," succeeded");
    if (cStack_49 < '\0') {
      operator_delete(local_60[0]);
    }
    if (cStack_31 < '\0') {
      operator_delete(local_48[0]);
    }
  }
  plVar2 = *(long **)(*(long *)(param_1 + 0x20) + 0x468);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2,0);
  }
  if (*(int *)(param_1 + 0x78) != 2) {
    lVar4 = *(long *)(param_1 + 0x20);
    pvVar3 = operator_new(0xb8);
    FUN_00cf65e8(pvVar3,lVar4,param_1,param_1 + 0x30);
    FUN_00c68ac8(lVar4 + 0x388,pvVar3,240000000);
    uVar1 = FUN_00417e08();
    if ((uVar1 & 1) == 0) {
      (**(code **)(**(long **)(param_1 + 0x20) + 0x110))(local_48);
      FUN_00623bb0(&DAT_0025a690,"../../p2p/base/turn_port.cc",0x3b21,local_48,
                   ": Scheduled create-permission-request in ",240000,&DAT_0019c2e7);
      if (cStack_31 < '\0') {
        operator_delete(local_48[0]);
      }
    }
  }
  return;
}


// ===== 00cf6be8  FUN_00cf6be8 =====

/* WARNING: Removing unreachable block (ram,0x00cf6d14) */
/* WARNING: Removing unreachable block (ram,0x00cf6cf8) */
/* WARNING: Removing unreachable block (ram,0x00cf6da8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00cf6be8(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 local_130;
  void *local_128 [2];
  char cStack_111;
  void *local_110 [2];
  char cStack_f9;
  char *local_f8;
  undefined8 local_f0;
  undefined1 *local_e8;
  void **local_e0;
  char **ppcStack_d8;
  char *local_d0;
  void ***pppvStack_c8;
  void **local_c0;
  char **ppcStack_b8;
  char *local_b0;
  void ***pppvStack_a8;
  ulong local_a0;
  char **local_98;
  char *local_90;
  ulong *puStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  char **local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 uStack_21;
  
  uVar5 = FUN_00c6a078(param_2);
  uVar6 = FUN_004022fc();
  if ((uVar6 & 1) == 0) {
    local_f8 = "../../p2p/base/turn_port.cc";
    local_f0 = 0x353a;
    local_e8 = &uStack_21;
    (**(code **)(**(long **)(param_1 + 0x60) + 0x110))(local_110);
    ppcStack_d8 = &local_f8;
    pppvStack_c8 = &local_e0;
    lVar9 = *(long *)(param_1 + 0x38);
    local_d0 = ": Received TURN create permission error response, id=";
    lVar8 = (long)*(char *)(lVar9 + 0x3f);
    if (lVar8 < 0) {
      lVar7 = *(long *)(lVar9 + 0x28);
      lVar8 = *(long *)(lVar9 + 0x30);
    }
    else {
      lVar7 = lVar9 + 0x28;
    }
    local_e0 = local_110;
    FUN_00624c34(local_128,lVar7,lVar8);
    ppcStack_b8 = &local_d0;
    pppvStack_a8 = &local_c0;
    local_b0 = ", code=";
    local_98 = &local_b0;
    puStack_88 = &local_a0;
    local_90 = ", rtt=";
    local_c0 = local_128;
    local_a0 = uVar5 & 0xffffffff;
    local_130 = FUN_00c6951c(param_1);
    FUN_005f3380(&local_58,&local_130);
    local_68 = &local_90;
    uStack_78 = uStack_50;
    local_80 = local_58;
    puVar1 = (undefined8 *)((undefined8 *)puStack_88[1])[1];
    puVar2 = (undefined8 *)puVar1[1];
    puVar3 = (undefined8 *)puVar2[1];
    puVar4 = (undefined8 *)puVar3[1];
    FUN_00623bb0(&DAT_0025a67a,*puVar4,*(undefined4 *)(puVar4 + 1),*puVar3,*puVar2,*puVar1,
                 *(undefined8 *)puStack_88[1],(int)*puStack_88,local_90,&local_80);
    if (cStack_111 < '\0') {
      operator_delete(local_128[0]);
    }
    if (cStack_f9 < '\0') {
      operator_delete(local_110[0]);
      lVar8 = *(long *)(param_1 + 0x68);
      goto joined_r0x00cf6d7c;
    }
  }
  lVar8 = *(long *)(param_1 + 0x68);
joined_r0x00cf6d7c:
  if (lVar8 != 0) {
    FUN_00cf6df4(lVar8,param_2,uVar5 & 0xffffffff);
  }
  return;
}


// ===== 00cf6df4  FUN_00cf6df4 =====

void FUN_00cf6df4(long param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  void *pvVar2;
  long *plVar3;
  long lVar4;
  
  if (param_3 == 0x1b6) {
    uVar1 = FUN_00cf453c();
    if ((uVar1 & 1) != 0) {
      lVar4 = *(long *)(param_1 + 0x20);
      pvVar2 = operator_new(0xb8);
      FUN_00cf65e8(pvVar2,lVar4,param_1,param_1 + 0x30);
      FUN_00c68ac8(lVar4 + 0x388,pvVar2,0);
    }
  }
  else {
    lVar4 = (**(code **)(**(long **)(param_1 + 0x20) + 0x58))
                      (*(long **)(param_1 + 0x20),param_1 + 0x30);
    if (lVar4 != 0) {
      FUN_00c654b0();
      uVar1 = FUN_004249b0();
      if ((uVar1 & 1) == 0) {
        FUN_00623bb0(&DAT_001f1906,"../../p2p/base/turn_port.cc",0x3b93,
                     "Received TURN CreatePermission error response, code=",param_3,
                     "; pruned connection.");
      }
    }
  }
  plVar3 = *(long **)(*(long *)(param_1 + 0x20) + 0x468);
  if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00cf6ecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x10))(plVar3,param_3);
    return;
  }
  return;
}


// ===== 00cf6ee4  FUN_00cf6ee4 =====

void FUN_00cf6ee4(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  void *local_68 [2];
  char cStack_51;
  void *local_50 [2];
  char cStack_39;
  char *local_38;
  ulong local_30;
  undefined1 *local_28;
  undefined1 uStack_1;
  
  uVar1 = FUN_004022fc();
  if ((uVar1 & 1) == 0) {
    local_38 = "../../p2p/base/turn_port.cc";
    local_30 = 0x358a;
    local_28 = &uStack_1;
    (**(code **)(**(long **)(param_1 + 0x60) + 0x110))(local_50);
    lVar4 = *(long *)(param_1 + 0x38);
    lVar3 = (long)*(char *)(lVar4 + 0x3f);
    if (lVar3 < 0) {
      lVar2 = *(long *)(lVar4 + 0x28);
      lVar3 = *(long *)(lVar4 + 0x30);
    }
    else {
      lVar2 = lVar4 + 0x28;
    }
    FUN_00624c34(local_68,lVar2,lVar3);
    FUN_00623bb0(&DAT_0025987e,local_38,local_30 & 0xffffffff,local_50,
                 ": TURN create permission timeout ",local_68);
    if (cStack_51 < '\0') {
      operator_delete(local_68[0]);
    }
    if (cStack_39 < '\0') {
      operator_delete(local_50[0]);
      lVar3 = *(long *)(param_1 + 0x68);
      goto joined_r0x00cf6f88;
    }
  }
  lVar3 = *(long *)(param_1 + 0x68);
joined_r0x00cf6f88:
  if ((lVar3 != 0) &&
     (lVar3 = (**(code **)(**(long **)(lVar3 + 0x20) + 0x58))(*(long **)(lVar3 + 0x20),lVar3 + 0x30)
     , lVar3 != 0)) {
    FUN_00c654b0();
  }
  return;
}


// ===== 00cf6ff0  FUN_00cf6ff0 =====

void FUN_00cf6ff0(undefined8 *param_1,long param_2,undefined8 param_3,undefined2 param_4,
                 undefined8 param_5)

{
  ushort uVar1;
  long *plVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  plVar2 = (long *)operator_new(0x80);
  FUN_00c69ccc(plVar2,9);
  *plVar2 = (long)(PTR_DAT_00d52cb8 + 0x10);
  FUN_00c69328(param_1,param_2 + 8,param_2 + 0x388,plVar2);
  *param_1 = &PTR_FUN_00d505e0;
  param_1[0xc] = param_2;
  param_1[0xd] = param_3;
  *(undefined2 *)(param_1 + 0xe) = param_4;
  FUN_007e8cec(param_1 + 0xf,param_5);
  FUN_007b5a0c(param_1[0xd],param_1,param_1,FUN_00cf8750);
  uVar1 = *(ushort *)(param_1 + 0xe);
  uVar5 = param_1[7];
  pvVar3 = operator_new(0x10);
  FUN_00c6c6b0(pvVar3,0xc,(ulong)uVar1 << 0x10);
  FUN_00c69d80(uVar5,pvVar3);
  pvVar3 = operator_new(0x60);
  FUN_00c6c0e8(pvVar3,0x12,param_1 + 0xf);
  FUN_00c69d80(uVar5,pvVar3);
  FUN_00cf4430(param_1[0xc],uVar5);
  puVar4 = *(undefined8 **)(param_1[0xc] + 0x440);
  if (puVar4 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00cf7118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar4)(puVar4,param_1[0xc],uVar5);
    return;
  }
  return;
}


// ===== 00cf7134  FUN_00cf7134 =====

void FUN_00cf7134(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d505e0;
  if (param_1[0xd] != 0) {
    FUN_007b5df8(param_1[0xd],param_1);
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    operator_delete((void *)param_1[0xf]);
  }
  FUN_00c693c0(param_1);
  return;
}


// ===== 00cf7190  FUN_00cf7190 =====

void FUN_00cf7190(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d505e0;
  if (param_1[0xd] != 0) {
    FUN_007b5df8(param_1[0xd],param_1);
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    operator_delete((void *)param_1[0xf]);
  }
  FUN_00c693c0(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00cf71f8  FUN_00cf71f8 =====

void FUN_00cf71f8(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  void *local_68 [2];
  char cStack_51;
  void *local_50 [2];
  char cStack_39;
  char *local_38;
  ulong local_30;
  undefined1 *local_28;
  undefined1 uStack_1;
  
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    local_38 = "../../p2p/base/turn_port.cc";
    local_30 = 0x36d9;
    local_28 = &uStack_1;
    (**(code **)(**(long **)(param_1 + 0x60) + 0x110))(local_50);
    lVar4 = *(long *)(param_1 + 0x38);
    lVar3 = (long)*(char *)(lVar4 + 0x3f);
    if (lVar3 < 0) {
      lVar2 = *(long *)(lVar4 + 0x28);
      lVar3 = *(long *)(lVar4 + 0x30);
    }
    else {
      lVar2 = lVar4 + 0x28;
    }
    FUN_00624c34(local_68,lVar2,lVar3);
    FUN_00623bb0(&DAT_0025987e,local_38,local_30 & 0xffffffff,local_50,
                 ": TURN channel bind request sent, id=",local_68);
    if (cStack_51 < '\0') {
      operator_delete(local_68[0]);
    }
    if (cStack_39 < '\0') {
      operator_delete(local_50[0]);
    }
  }
  FUN_00c697a8(param_1);
  return;
}


// ===== 00cf72e0  FUN_00cf72e0 =====

/* WARNING: Removing unreachable block (ram,0x00cf74e8) */
/* WARNING: Removing unreachable block (ram,0x00cf73c4) */
/* WARNING: Removing unreachable block (ram,0x00cf73e0) */
/* WARNING: Removing unreachable block (ram,0x00cf74d4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00cf72e0(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  undefined8 local_110;
  void *local_108 [2];
  char cStack_f1;
  void *local_f0 [2];
  char cStack_d9;
  char *local_d8;
  undefined8 local_d0;
  undefined1 *local_c8;
  void **local_c0;
  char **ppcStack_b8;
  char *local_b0;
  void ***pppvStack_a8;
  void **local_a0;
  char **ppcStack_98;
  char *local_90;
  void ***pppvStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  char **local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 uStack_21;
  
  uVar3 = FUN_00417e08();
  if ((uVar3 & 1) == 0) {
    local_d8 = "../../p2p/base/turn_port.cc";
    local_d0 = 0x3711;
    local_c8 = &uStack_21;
    (**(code **)(**(long **)(param_1 + 0x60) + 0x110))(local_f0);
    ppcStack_b8 = &local_d8;
    pppvStack_a8 = &local_c0;
    lVar7 = *(long *)(param_1 + 0x38);
    local_b0 = ": TURN channel bind requested successfully, id=";
    lVar6 = (long)*(char *)(lVar7 + 0x3f);
    if (lVar6 < 0) {
      lVar4 = *(long *)(lVar7 + 0x28);
      lVar6 = *(long *)(lVar7 + 0x30);
    }
    else {
      lVar4 = lVar7 + 0x28;
    }
    local_c0 = local_f0;
    FUN_00624c34(local_108,lVar4,lVar6);
    ppcStack_98 = &local_b0;
    pppvStack_88 = &local_a0;
    local_90 = ", code=0, rtt=";
    local_a0 = local_108;
    local_110 = FUN_00c6951c(param_1);
    FUN_005f3380(&local_58,&local_110);
    local_68 = &local_90;
    uStack_78 = uStack_50;
    local_80 = local_58;
    puVar1 = (undefined8 *)pppvStack_88[1][1];
    puVar2 = (undefined8 *)puVar1[1];
    FUN_00623bb0("\r\n\t\n\t\n",*puVar2,*(undefined4 *)(puVar2 + 1),*puVar1,*pppvStack_88[1],
                 *pppvStack_88,local_90,&local_80);
    if (cStack_f1 < '\0') {
      operator_delete(local_108[0]);
    }
    if (cStack_d9 < '\0') {
      operator_delete(local_f0[0]);
      lVar6 = *(long *)(param_1 + 0x68);
      goto joined_r0x00cf7438;
    }
  }
  lVar6 = *(long *)(param_1 + 0x68);
joined_r0x00cf7438:
  if (lVar6 != 0) {
    FUN_00cf754c();
    lVar6 = *(long *)(param_1 + 0x68);
    lVar7 = *(long *)(lVar6 + 0x20);
    pvVar5 = operator_new(0xc0);
    FUN_00cf6ff0(pvVar5,lVar7,lVar6,*(undefined2 *)(lVar6 + 0x28),lVar6 + 0x30);
    FUN_00c68ac8(lVar7 + 0x388,pvVar5,240000000);
    uVar3 = FUN_00417e08();
    if ((uVar3 & 1) == 0) {
      (**(code **)(**(long **)(param_1 + 0x60) + 0x110))(&local_80);
      FUN_00623bb0(&DAT_0025a690,"../../p2p/base/turn_port.cc",0x3789,&local_80,
                   ": Scheduled channel bind in ",240000,&DAT_0019c2e7);
    }
  }
  return;
}


// ===== 00cf754c  FUN_00cf754c =====

void FUN_00cf754c(long param_1)

{
  ulong uVar1;
  void *local_50 [2];
  char cStack_39;
  void *local_38 [2];
  char cStack_21;
  
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) == 0) {
    (**(code **)(**(long **)(param_1 + 0x20) + 0x110))(local_38);
    FUN_007e924c(local_50,param_1 + 0x30);
    FUN_00623bb0(&DAT_0025987e,"../../p2p/base/turn_port.cc",0x3c09,local_38,
                 ": Successful channel bind for ",local_50);
    if (cStack_39 < '\0') {
      operator_delete(local_50[0]);
    }
    if (cStack_21 < '\0') {
      operator_delete(local_38[0]);
    }
  }
  *(undefined4 *)(param_1 + 0x78) = 2;
  return;
}


// ===== 00cf760c  FUN_00cf760c =====

/* WARNING: Removing unreachable block (ram,0x00cf7738) */
/* WARNING: Removing unreachable block (ram,0x00cf771c) */
/* WARNING: Removing unreachable block (ram,0x00cf77cc) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00cf760c(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 local_130;
  void *local_128 [2];
  char cStack_111;
  void *local_110 [2];
  char cStack_f9;
  char *local_f8;
  undefined8 local_f0;
  undefined1 *local_e8;
  void **local_e0;
  char **ppcStack_d8;
  char *local_d0;
  void ***pppvStack_c8;
  void **local_c0;
  char **ppcStack_b8;
  char *local_b0;
  void ***pppvStack_a8;
  ulong local_a0;
  char **local_98;
  char *local_90;
  ulong *puStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  char **local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 uStack_21;
  
  uVar5 = FUN_00c6a078(param_2);
  uVar6 = FUN_004022fc();
  if ((uVar6 & 1) == 0) {
    local_f8 = "../../p2p/base/turn_port.cc";
    local_f0 = 0x37c2;
    local_e8 = &uStack_21;
    (**(code **)(**(long **)(param_1 + 0x60) + 0x110))(local_110);
    ppcStack_d8 = &local_f8;
    pppvStack_c8 = &local_e0;
    lVar9 = *(long *)(param_1 + 0x38);
    local_d0 = ": Received TURN channel bind error response, id=";
    lVar8 = (long)*(char *)(lVar9 + 0x3f);
    if (lVar8 < 0) {
      lVar7 = *(long *)(lVar9 + 0x28);
      lVar8 = *(long *)(lVar9 + 0x30);
    }
    else {
      lVar7 = lVar9 + 0x28;
    }
    local_e0 = local_110;
    FUN_00624c34(local_128,lVar7,lVar8);
    ppcStack_b8 = &local_d0;
    pppvStack_a8 = &local_c0;
    local_b0 = ", code=";
    local_98 = &local_b0;
    puStack_88 = &local_a0;
    local_90 = ", rtt=";
    local_c0 = local_128;
    local_a0 = uVar5 & 0xffffffff;
    local_130 = FUN_00c6951c(param_1);
    FUN_005f3380(&local_58,&local_130);
    local_68 = &local_90;
    uStack_78 = uStack_50;
    local_80 = local_58;
    puVar1 = (undefined8 *)((undefined8 *)puStack_88[1])[1];
    puVar2 = (undefined8 *)puVar1[1];
    puVar3 = (undefined8 *)puVar2[1];
    puVar4 = (undefined8 *)puVar3[1];
    FUN_00623bb0(&DAT_0025a67a,*puVar4,*(undefined4 *)(puVar4 + 1),*puVar3,*puVar2,*puVar1,
                 *(undefined8 *)puStack_88[1],(int)*puStack_88,local_90,&local_80);
    if (cStack_111 < '\0') {
      operator_delete(local_128[0]);
    }
    if (cStack_f9 < '\0') {
      operator_delete(local_110[0]);
      lVar8 = *(long *)(param_1 + 0x68);
      goto joined_r0x00cf77a0;
    }
  }
  lVar8 = *(long *)(param_1 + 0x68);
joined_r0x00cf77a0:
  if (lVar8 != 0) {
    FUN_00cf7818(lVar8,param_2,uVar5 & 0xffffffff);
  }
  return;
}


// ===== 00cf7818  FUN_00cf7818 =====

void FUN_00cf7818(long param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  
  if (param_3 == 0x1b6) {
    uVar1 = FUN_00cf453c(*(undefined8 *)(param_1 + 0x20));
    if ((uVar1 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 0x20);
      pvVar2 = operator_new(0xc0);
      FUN_00cf6ff0(pvVar2,lVar3,param_1,*(undefined2 *)(param_1 + 0x28),param_1 + 0x30);
      FUN_00c68ac8(lVar3 + 0x388,pvVar2,0);
      return;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x78) = 0;
    lVar3 = (**(code **)(**(long **)(param_1 + 0x20) + 0x58))
                      (*(long **)(param_1 + 0x20),param_1 + 0x30);
    if (lVar3 != 0) {
      FUN_00c654b0();
      return;
    }
  }
  return;
}


// ===== 00cf78cc  FUN_00cf78cc =====

void FUN_00cf78cc(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  void *local_68 [2];
  char cStack_51;
  void *local_50 [2];
  char cStack_39;
  char *local_38;
  ulong local_30;
  undefined1 *local_28;
  undefined1 uStack_1;
  
  uVar1 = FUN_004022fc();
  if ((uVar1 & 1) == 0) {
    local_38 = "../../p2p/base/turn_port.cc";
    local_30 = 0x3812;
    local_28 = &uStack_1;
    (**(code **)(**(long **)(param_1 + 0x60) + 0x110))(local_50);
    lVar4 = *(long *)(param_1 + 0x38);
    lVar3 = (long)*(char *)(lVar4 + 0x3f);
    if (lVar3 < 0) {
      lVar2 = *(long *)(lVar4 + 0x28);
      lVar3 = *(long *)(lVar4 + 0x30);
    }
    else {
      lVar2 = lVar4 + 0x28;
    }
    FUN_00624c34(local_68,lVar2,lVar3);
    FUN_00623bb0(&DAT_0025987e,local_38,local_30 & 0xffffffff,local_50,
                 ": TURN channel bind timeout ",local_68);
    if (cStack_51 < '\0') {
      operator_delete(local_68[0]);
    }
    if (cStack_39 < '\0') {
      operator_delete(local_50[0]);
      lVar3 = *(long *)(param_1 + 0x68);
      goto joined_r0x00cf7970;
    }
  }
  lVar3 = *(long *)(param_1 + 0x68);
joined_r0x00cf7970:
  if (lVar3 != 0) {
    *(undefined4 *)(lVar3 + 0x78) = 0;
    lVar3 = (**(code **)(**(long **)(lVar3 + 0x20) + 0x58))(*(long **)(lVar3 + 0x20),lVar3 + 0x30);
    if (lVar3 != 0) {
      FUN_00c654b0();
    }
  }
  return;
}


// ===== 00cf79dc  FUN_00cf79dc =====

void FUN_00cf79dc(long param_1,undefined8 param_2,long *param_3,undefined2 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  
  FUN_007b5d10();
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined2 *)(param_1 + 0x28) = param_4;
  lVar1 = (**(code **)(*param_3 + 0x18))(param_3);
  FUN_007e8cec(param_1 + 0x30,lVar1 + 0x50);
  *(undefined4 *)(param_1 + 0x78) = 0;
  puVar2 = (undefined8 *)operator_new(8);
  *(undefined8 **)(param_1 + 0x80) = puVar2;
  *(undefined8 **)(param_1 + 0x88) = puVar2;
  *(undefined8 **)(param_1 + 0x90) = puVar2 + 1;
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 **)(param_1 + 0x88) = puVar2 + 1;
    *puVar2 = param_3;
    FUN_007ebca0(param_1 + 0x98);
    lVar1 = *(long *)(param_1 + 0x20);
    pvVar3 = operator_new(0xb8);
    FUN_00cf65e8(pvVar3,lVar1,param_1,param_1 + 0x30);
    FUN_00c68ac8(lVar1 + 0x388,pvVar3,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00cf7aac  FUN_00cf7aac =====

void FUN_00cf7aac(long param_1)

{
  int iVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  void *pvVar5;
  long local_30;
  undefined1 *puStack_28;
  
  puStack_28 = (undefined1 *)&local_30;
  local_30 = param_1;
  FUN_007b6160(param_1,&puStack_28,FUN_00cf8760);
  FUN_007ebdcc(*(undefined8 *)(param_1 + 0x98));
  pvVar5 = *(void **)(param_1 + 0x98);
  if ((pvVar5 != (void *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,pvVar5), iVar1 == 1)) {
    operator_delete(pvVar5);
  }
  pvVar5 = *(void **)(param_1 + 0x80);
  if (pvVar5 != (void *)0x0) {
    pvVar2 = *(void **)(param_1 + 0x88);
    uVar4 = (ulong)((long)pvVar2 + (-8 - ((long)pvVar2 << 0x3d))) >> 3;
    uVar3 = (ulong)(((long)pvVar5 - (long)pvVar2 << 0x3d) - ((long)pvVar5 - (long)pvVar2)) >> 3;
    if (uVar4 <= uVar3) {
      uVar3 = uVar4;
    }
    if ((1 < uVar3) && ((((int)pvVar5 - (int)pvVar2 | -(int)pvVar2) & 7U) == 0)) {
      uVar3 = uVar3 & 0x1ffffffffffffffe;
      pvVar2 = (void *)((long)pvVar2 + uVar3 * -8);
      do {
        uVar3 = uVar3 - 2;
      } while (uVar3 != 0);
    }
    while (pvVar2 != pvVar5) {
      pvVar2 = (void *)((long)pvVar2 + -8);
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    *(void **)(param_1 + 0x88) = pvVar5;
    operator_delete(pvVar5);
  }
  if (*(char *)(param_1 + 0x47) < '\0') {
    operator_delete(*(void **)(param_1 + 0x30));
  }
  FUN_007b5d24(param_1);
  return;
}


// ===== 00cf7bd0  FUN_00cf7bd0 =====

void FUN_00cf7bd0(void)

{
  return;
}


// ===== 00cf7bd8  FUN_00cf7bd8 =====

void FUN_00cf7bd8(undefined8 param_1,undefined8 param_2)

{
  FUN_00cfc52c(param_1,param_2,0);
  return;
}


// ===== 00cf7be4  FUN_00cf7be4 =====

void FUN_00cf7be4(undefined8 param_1,undefined8 param_2)

{
  FUN_00cfc52c(param_1,param_2,1);
  return;
}


// ===== 00cf7bf0  FUN_00cf7bf0 =====

undefined8 FUN_00cf7bf0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}


// ===== 00cf7bfc  FUN_00cf7bfc =====

undefined8 FUN_00cf7bfc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}


// ===== 00cf7c08  FUN_00cf7c08 =====

undefined4 FUN_00cf7c08(long param_1)

{
  return *(undefined4 *)(param_1 + 0x7c);
}


// ===== 00cf7c14  FUN_00cf7c14 =====

void FUN_00cf7c14(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x7c) = param_2;
  return;
}


// ===== 00cf7c20  FUN_00cf7c20 =====

undefined1 FUN_00cf7c20(long param_1)

{
  return *(undefined1 *)(param_1 + 0x4c);
}


// ===== 00cf7c2c  FUN_00cf7c2c =====

long FUN_00cf7c2c(long param_1)

{
  return param_1 + 0x60;
}


// ===== 00cf7c38  FUN_00cf7c38 =====

undefined2 FUN_00cf7c38(long param_1)

{
  return *(undefined2 *)(param_1 + 0xfa);
}


// ===== 00cf7c44  FUN_00cf7c44 =====

void FUN_00cf7c44(void *param_1)

{
  FUN_00c693c0();
  operator_delete(param_1);
  return;
}


// ===== 00cf7c74  FUN_00cf7c74 =====

void FUN_00cf7c74(void *param_1)

{
  FUN_00c693c0();
  operator_delete(param_1);
  return;
}


// ===== 00cf7ca4  FUN_00cf7ca4 =====

void FUN_00cf7ca4(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00cf7cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}


// ===== 00cf7cb4  FUN_00cf7cb4 =====

void FUN_00cf7cb4(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  (**(code **)((long)pvVar1 + 0x10))(0,pvVar1,pvVar1);
  operator_delete(pvVar1);
  return;
}


// ===== 00cf7cf4  FUN_00cf7cf4 =====

undefined8 * FUN_00cf7cf4(long *param_1,undefined8 *param_2)

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
    FUN_00cf7dec();
LAB_00cf7de8:
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
    if (uVar6 >> 0x3d != 0) goto LAB_00cf7de8;
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


// ===== 00cf7dec  FUN_00cf7dec =====

void FUN_00cf7dec(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00cf7e04  FUN_00cf7e04 =====

void FUN_00cf7e04(undefined8 *param_1)

{
  FUN_00cf3ce0(*param_1);
  return;
}


// ===== 00cf7e10  FUN_00cf7e10 =====

void FUN_00cf7e10(undefined8 *param_1)

{
  FUN_00cf3ce0(*param_1);
  return;
}


// ===== 00cf7e1c  FUN_00cf7e1c =====

void FUN_00cf7e1c(undefined8 *param_1,int param_2)

{
  ulong uVar1;
  long *plVar2;
  void *local_50 [2];
  char cStack_39;
  void *local_38 [2];
  char cStack_21;
  
  plVar2 = (long *)*param_1;
  if (param_2 == 0) {
    FUN_00cf174c(plVar2);
    return;
  }
  uVar1 = FUN_004249b0();
  if ((uVar1 & 1) == 0) {
    (**(code **)(*plVar2 + 0x110))(local_38,plVar2);
    FUN_007e9004(local_50,plVar2 + 0x4c);
    FUN_00623bb0(&DAT_0025987e,"../../p2p/base/turn_port.cc",0xc8b,local_38,
                 ": Permission denied to connect to TURN server ",local_50);
    if (cStack_39 < '\0') {
      operator_delete(local_50[0]);
    }
    if (cStack_21 < '\0') {
      operator_delete(local_38[0]);
    }
  }
  FUN_00cf1328(plVar2,0,"Attempt to start allocation without Local Network Access Permission.",0x44)
  ;
  return;
}


// ===== 00cf7f08  FUN_00cf7f08 =====

void FUN_00cf7f08(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00cf7f18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x1e8))();
  return;
}


// ===== 00cf7f1c  FUN_00cf7f1c =====

void FUN_00cf7f1c(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  ulong uVar2;
  
  plVar1 = (long *)*param_1;
  uVar2 = FUN_007ebde8(param_1[1]);
  if ((uVar2 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00cf7f58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x1f0))(plVar1,param_2);
    return;
  }
  return;
}


// ===== 00cf7f6c  FUN_00cf7f6c =====

void FUN_00cf7f6c(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  void *pvVar4;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
    uVar3 = param_2[1];
    param_2[1] = 0;
    param_3[1] = uVar3;
  }
  else if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xcf7ff0);
    (*pcVar1)();
  }
  pvVar4 = (void *)param_2[1];
  if ((pvVar4 != (void *)0x0) && (iVar2 = FUN_00d0f7a0(0xffffffff,pvVar4), iVar2 == 1)) {
    operator_delete(pvVar4);
    return;
  }
  return;
}


// ===== 00cf7ff0  FUN_00cf7ff0 =====

void FUN_00cf7ff0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  ulong uVar2;
  
  plVar1 = (long *)*param_1;
  uVar2 = FUN_007ebde8(param_1[1]);
  if ((uVar2 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00cf803c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x1b0))(plVar1,param_2,param_3);
    return;
  }
  return;
}


// ===== 00cf8054  FUN_00cf8054 =====

void FUN_00cf8054(uint param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  void *pvVar4;
  
  if ((param_1 & 0xff) - 1 < 2) {
    *param_3 = *param_2;
    uVar3 = param_2[1];
    param_2[1] = 0;
    param_3[1] = uVar3;
  }
  else if ((param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xcf80d8);
    (*pcVar1)();
  }
  pvVar4 = (void *)param_2[1];
  if ((pvVar4 != (void *)0x0) && (iVar2 = FUN_00d0f7a0(0xffffffff,pvVar4), iVar2 == 1)) {
    operator_delete(pvVar4);
    return;
  }
  return;
}


// ===== 00cf80d8  FUN_00cf80d8 =====

void FUN_00cf80d8(undefined8 *param_1)

{
  FUN_00cf1fbc(*param_1);
  return;
}


// ===== 00cf80e4  FUN_00cf80e4 =====

void FUN_00cf80e4(undefined8 *param_1)

{
  FUN_00cf2518(*param_1);
  return;
}


// ===== 00cf80f0  FUN_00cf80f0 =====

undefined1  [16]
FUN_00cf80f0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  int *piVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  
  piVar6 = (int *)*param_5;
  plVar4 = param_2 + 1;
  plVar7 = plVar4;
  if ((long *)*plVar4 != (long *)0x0) {
    iVar1 = *piVar6;
    plVar2 = (long *)*plVar4;
    do {
      while (plVar3 = plVar2, plVar4 = plVar3, iVar1 < *(int *)((long)plVar3 + 0x1c)) {
        plVar2 = (long *)*plVar3;
        plVar7 = plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_00cf815c;
      }
      if (iVar1 <= *(int *)((long)plVar3 + 0x1c)) {
        uVar5 = 0;
        goto LAB_00cf81bc;
      }
      plVar2 = (long *)plVar3[1];
    } while ((long *)plVar3[1] != (long *)0x0);
    plVar7 = plVar3 + 1;
  }
LAB_00cf815c:
  plVar3 = (long *)operator_new(0x28);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  iVar1 = *piVar6;
  *plVar3 = 0;
  plVar3[1] = 0;
  plVar3[2] = (long)plVar4;
  *(int *)((long)plVar3 + 0x1c) = iVar1;
  *(undefined4 *)(plVar3 + 4) = 0;
  *plVar7 = (long)plVar3;
  plVar4 = plVar3;
  if (*(long *)*param_2 != 0) {
    *param_2 = *(long *)*param_2;
    plVar4 = (long *)*plVar7;
  }
  FUN_005d5b94(param_2[1],plVar4);
  uVar5 = 1;
  param_2[2] = param_2[2] + 1;
LAB_00cf81bc:
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = plVar3;
  return auVar8;
}


// ===== 00cf81ec  FUN_00cf81ec =====

void FUN_00cf81ec(undefined8 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  void *local_90;
  undefined4 local_88;
  char cStack_79;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  undefined1 *local_30;
  
  plVar5 = (long *)*param_1;
  plVar3 = (long *)(**(code **)(*(long *)plVar5[0x6f] + 0x20))();
  iVar1 = (**(code **)(*plVar3 + 0x18))();
  if (((iVar1 != 0) && (*(uint *)(plVar5 + 0x55) < 5)) &&
     ((0x16U >> (ulong)(*(uint *)(plVar5 + 0x55) & 0x1f) & 1) != 0)) {
    uVar4 = FUN_00cf1908(plVar5);
    if ((uVar4 & 1) != 0) {
      return;
    }
    FUN_00cf1328(plVar5,0x2bd,"TURN host lookup received error.",0x20);
    return;
  }
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_40 = &DAT_aaaaaaaaaaaaaaaa;
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_007e8cec(&local_70,plVar5 + 0x4c);
  iVar1 = (**(code **)(*plVar3 + 0x18))(plVar3);
  if (iVar1 == 0) {
    (**(code **)(*plVar5 + 0x18))(plVar5);
    FUN_00bca960(&local_90);
    uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,local_88,&local_70);
    if ((uVar4 & 1) != 0) {
      FUN_007e8d84(plVar5 + 0x4c,&local_70);
      (**(code **)(*plVar5 + 0x50))(plVar5);
      goto joined_r0x00cf839c;
    }
  }
  uVar4 = FUN_004022fc();
  if ((uVar4 & 1) == 0) {
    (**(code **)(*plVar5 + 0x110))(&local_90,plVar5);
    uVar2 = (**(code **)(*plVar3 + 0x18))(plVar3);
    FUN_00623bb0(&DAT_00259892,"../../p2p/base/turn_port.cc",0x1c4a,&local_90,
                 ": TURN host lookup received error ",uVar2);
    if (cStack_79 < '\0') {
      operator_delete(local_90);
    }
  }
  uVar2 = (**(code **)(*plVar3 + 0x18))(plVar3);
  *(undefined4 *)(plVar5 + 0x70) = uVar2;
  FUN_00cf1328(plVar5,0x2bd,"TURN host lookup received error.",0x20);
joined_r0x00cf839c:
  if ((long)local_60 < 0) {
    operator_delete(local_70);
  }
  return;
}


// ===== 00cf83c4  FUN_00cf83c4 =====

void FUN_00cf83c4(long *param_1)

{
  long local_20;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)&local_20;
  local_20 = *param_1;
  FUN_007b6160(local_20 + 0x208,&puStack_18,FUN_00cf8404);
  return;
}


// ===== 00cf8404  FUN_00cf8404 =====

void FUN_00cf8404(undefined8 *param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00cf841c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x20))(param_2,*(undefined8 *)*param_1);
  return;
}


// ===== 00cf8420  FUN_00cf8420 =====

void FUN_00cf8420(undefined8 *param_1)

{
  FUN_00cf411c(*param_1);
  return;
}


// ===== 00cf842c  FUN_00cf842c =====

void FUN_00cf842c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  
  lVar3 = *param_1;
  plVar2 = *(long **)(lVar3 + 0x418);
  plVar4 = *(long **)(lVar3 + 0x420);
  if (plVar2 == plVar4) {
LAB_00cf84e0:
    FUN_00cf8500(lVar3 + 0x418,plVar2);
    return;
  }
  uVar7 = (long)plVar4 + (-8 - (long)plVar2);
  lVar5 = param_1[1];
  uVar6 = (uint)uVar7;
  if ((~uVar6 & 0x18) != 0) {
    uVar8 = (ulong)((uVar6 >> 3) + 1) & 3;
    do {
      if (*plVar2 == lVar5) goto LAB_00cf84e0;
      uVar8 = uVar8 - 1;
      plVar2 = plVar2 + 1;
    } while (uVar8 != 0);
  }
  if (0x17 < uVar7) {
    plVar2 = plVar2 + 2;
    do {
      if (plVar2[-2] == lVar5) {
        plVar2 = plVar2 + -2;
        goto LAB_00cf84e0;
      }
      if (plVar2[-1] == lVar5) {
        FUN_00cf8500(lVar3 + 0x418,plVar2 + -1);
        return;
      }
      if (*plVar2 == lVar5) goto LAB_00cf84e0;
      if (plVar2[1] == lVar5) {
        FUN_00cf8500(lVar3 + 0x418,plVar2 + 1);
        return;
      }
      plVar1 = plVar2 + 2;
      plVar2 = plVar2 + 4;
    } while (plVar1 != plVar4);
  }
  FUN_00cf8500(lVar3 + 0x418,plVar4);
  return;
}


// ===== 00cf8500  FUN_00cf8500 =====

undefined8 * FUN_00cf8500(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = *(undefined8 **)(param_1 + 8);
  if (param_2 == puVar3) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__vector/vector.h:1160: libc++ Hardening assertion __position != end() failed: vector::erase(iterator) called with a non-dereferenceable iterator\n"
              );
  }
  puVar1 = param_2 + 1;
  if (param_2 + 1 == puVar3) {
    puVar4 = param_2;
    if (param_2 == puVar3) goto LAB_00cf85c4;
  }
  else {
    do {
      puVar4 = puVar1;
      pvVar2 = (void *)puVar4[-1];
      puVar4[-1] = *puVar4;
      *puVar4 = 0;
      if (pvVar2 != (void *)0x0) {
        FUN_00cf7aac(pvVar2);
        operator_delete(pvVar2);
      }
      puVar1 = puVar4 + 1;
    } while (puVar4 + 1 != puVar3);
    puVar3 = *(undefined8 **)(param_1 + 8);
    if (puVar4 == puVar3) goto LAB_00cf85c4;
  }
  do {
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
      FUN_00cf7aac(pvVar2);
      operator_delete(pvVar2);
    }
  } while (puVar3 != puVar4);
LAB_00cf85c4:
  *(undefined8 **)(param_1 + 8) = puVar4;
  return param_2;
}


// ===== 00cf860c  FUN_00cf860c =====

void FUN_00cf860c(undefined8 *param_1)

{
  FUN_00cf2618(*param_1);
  return;
}


// ===== 00cf8618  FUN_00cf8618 =====

void FUN_00cf8618(undefined8 *param_1)

{
  long *plVar1;
  void *pvVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  if ((int)plVar3[0x55] != 0) {
    plVar1 = (long *)plVar3[0x6b];
    plVar3[0x6b] = 0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar3[0x6a] = 0;
                    /* WARNING: Could not recover jumptable at 0x00cf8668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x50))(plVar3);
    return;
  }
  pvVar2 = operator_new(0x68);
  FUN_00cf4b4c(pvVar2,plVar3);
  FUN_00c68ac8(plVar3 + 0x71,pvVar2,0);
  return;
}


// ===== 00cf869c  FUN_00cf869c =====

void FUN_00cf869c(undefined8 *param_1)

{
  undefined8 uVar1;
  char *pcVar2;
  int iVar3;
  long *plVar4;
  
  plVar4 = (long *)*param_1;
  if ((int)plVar4[0x86] != 2) {
    iVar3 = (**(code **)(*plVar4 + 0x80))(plVar4);
    uVar1 = 0;
    if (iVar3 != 0) {
      uVar1 = 0x1e;
    }
    pcVar2 = "";
    if (iVar3 != 0) {
      pcVar2 = "Failed to establish connection";
    }
    FUN_00cf1328(plVar4,0x2bd,pcVar2,uVar1);
  }
  FUN_00c68c6c(plVar4 + 0x71);
  *(undefined4 *)(plVar4 + 0x86) = 4;
  FUN_00cf8ff0(plVar4);
  if ((long *)plVar4[0x8d] != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00cf872c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)plVar4[0x8d] + 0x20))();
    return;
  }
  return;
}


// ===== 00cf8740  FUN_00cf8740 =====

void FUN_00cf8740(long *param_1)

{
  *(undefined8 *)(*param_1 + 0x68) = 0;
  return;
}


// ===== 00cf8750  FUN_00cf8750 =====

void FUN_00cf8750(long *param_1)

{
  *(undefined8 *)(*param_1 + 0x68) = 0;
  return;
}


// ===== 00cf8760  FUN_00cf8760 =====

void FUN_00cf8760(undefined8 *param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00cf8778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x20))(param_2,*(undefined8 *)*param_1);
  return;
}


// ===== 00cf877c  FUN_00cf877c =====

void FUN_00cf877c(void)

{
  FUN_00cf8790();
  return;
}


// ===== 00cf8790  FUN_00cf8790 =====

void FUN_00cf8790(long *param_1,long *param_2,undefined4 param_3,undefined2 param_4,
                 undefined2 param_5,byte param_6)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  undefined *puVar4;
  undefined2 uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 *local_78;
  code *pcStack_70;
  code *local_68;
  
  FUN_00cfda98();
  *param_1 = (long)&PTR_FUN_00d50628;
  lVar7 = *param_2;
  param_1[1] = lVar7;
  if (lVar7 != 0) {
    FUN_00d0f740(1,lVar7 + 8);
  }
  lVar10 = param_2[4];
  lVar7 = param_2[3];
  lVar11 = param_2[1];
  param_1[3] = param_2[2];
  param_1[2] = lVar11;
  param_1[5] = lVar10;
  param_1[4] = lVar7;
  param_1[6] = param_2[5];
  param_1[7] = param_2[6];
  lVar7 = param_2[0xe];
  *(undefined4 *)(param_1 + 9) = param_3;
  *(undefined1 *)((long)param_1 + 0x4c) = 0;
  param_1[8] = lVar7;
  lVar7 = param_2[7];
  *(undefined2 *)(param_1 + 0xb) = param_4;
  *(undefined2 *)((long)param_1 + 0x5a) = param_5;
  param_1[10] = lVar7;
  uVar8 = param_2[0xd];
  if (0x7ffffffffffffff6 < uVar8) {
LAB_00cf8c14:
                    /* WARNING: Subroutine does not return */
    FUN_005d45ec();
  }
  plVar9 = (long *)param_2[0xc];
  if (uVar8 < 0x17) {
    plVar6 = param_1 + 0xc;
    *(char *)((long)param_1 + 0x77) = (char)uVar8;
  }
  else {
    uVar1 = (uVar8 & 0x7ffffffffffffff8) + 8;
    uVar2 = 0x19;
    if (uVar1 != 0x18) {
      uVar2 = uVar1;
    }
    plVar6 = (long *)operator_new(uVar2);
    param_1[0xc] = (long)plVar6;
    param_1[0xd] = uVar8;
    param_1[0xe] = uVar2 | 0x8000000000000000;
  }
  if ((long *)((long)plVar6 + uVar8) < plVar6) {
LAB_00cf8bec:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
              );
  }
  if ((plVar6 <= plVar9) && (plVar9 < (long *)((long)plVar6 + uVar8))) {
LAB_00cf8c00:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
              );
  }
  memmove(plVar6,plVar9,uVar8);
  *(undefined1 *)((long)plVar6 + uVar8) = 0;
  *(undefined4 *)(param_1 + 0xf) = DAT_002547a0;
  *(undefined4 *)((long)param_1 + 0x7c) = 0;
  uVar8 = param_2[9];
  if (0x7ffffffffffffff6 < uVar8) goto LAB_00cf8c14;
  plVar9 = (long *)param_2[8];
  if (uVar8 < 0x17) {
    *(char *)((long)param_1 + 0x97) = (char)uVar8;
    plVar6 = param_1 + 0x10;
  }
  else {
    uVar1 = (uVar8 & 0x7ffffffffffffff8) + 8;
    uVar2 = 0x19;
    if (uVar1 != 0x18) {
      uVar2 = uVar1;
    }
    plVar6 = (long *)operator_new(uVar2);
    param_1[0x10] = (long)plVar6;
    param_1[0x11] = uVar8;
    param_1[0x12] = uVar2 | 0x8000000000000000;
  }
  if ((long *)((long)plVar6 + uVar8) < plVar6) goto LAB_00cf8bec;
  if ((plVar6 <= plVar9) && (plVar9 < (long *)((long)plVar6 + uVar8))) goto LAB_00cf8c00;
  memmove(plVar6,plVar9,uVar8);
  *(undefined1 *)((long)plVar6 + uVar8) = 0;
  uVar8 = param_2[0xb];
  if (0x7ffffffffffffff6 < uVar8) goto LAB_00cf8c14;
  plVar9 = (long *)param_2[10];
  if (uVar8 < 0x17) {
    *(char *)((long)param_1 + 0xaf) = (char)uVar8;
    plVar6 = param_1 + 0x13;
  }
  else {
    uVar1 = (uVar8 & 0x7ffffffffffffff8) + 8;
    uVar2 = 0x19;
    if (uVar1 != 0x18) {
      uVar2 = uVar1;
    }
    plVar6 = (long *)operator_new(uVar2);
    param_1[0x13] = (long)plVar6;
    param_1[0x14] = uVar8;
    param_1[0x15] = uVar2 | 0x8000000000000000;
  }
  if ((long *)((long)plVar6 + uVar8) < plVar6) goto LAB_00cf8bec;
  if ((plVar6 <= plVar9) && (plVar9 < (long *)((long)plVar6 + uVar8))) goto LAB_00cf8c00;
  memmove(plVar6,plVar9,uVar8);
  *(undefined1 *)((long)plVar6 + uVar8) = 0;
  param_1[0x1a] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = (long)(param_1 + 0x1a);
  *(undefined4 *)(param_1 + 0x1c) = 0xaece;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x1b] = 0;
  *(undefined1 *)((long)param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0x1d) = 2;
  param_1[0x1e] = 0;
  *(byte *)(param_1 + 0x1f) = param_6 & 1;
  uVar5 = FUN_00bccb90(param_2[7],param_1[2]);
  *(undefined2 *)((long)param_1 + 0xfa) = uVar5;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x22] = 0;
  *(undefined8 *)((long)param_1 + 0x104) = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  FUN_007b5d10(param_1 + 0x25);
  FUN_007b5d10(param_1 + 0x29);
  FUN_007b5d10(param_1 + 0x2d);
  FUN_007b5d10(param_1 + 0x31);
  FUN_007b5d10(param_1 + 0x35);
  FUN_007b5d10(param_1 + 0x39);
  FUN_007b5d10(param_1 + 0x3d);
  FUN_007b5d10(param_1 + 0x41);
  param_1[0x48] = (long)FUN_00433984;
  param_1[0x49] = 0;
  FUN_009881bc(param_1 + 0x4a);
  param_1[0x4b] = (long)param_1;
  if (*(char *)((long)param_1 + 0x97) < '\0') {
    if (param_1[0x11] != 0) goto LAB_00cf8b14;
  }
  else if (*(char *)((long)param_1 + 0x97) != '\0') goto LAB_00cf8b14;
  FUN_00835a20(&local_78,(long)DAT_00254770);
  if (*(char *)((long)param_1 + 0x97) < '\0') {
    operator_delete((void *)param_1[0x10]);
  }
  puVar4 = PTR_DAT_00d52610;
  param_1[0x11] = (long)pcStack_70;
  param_1[0x10] = (long)local_78;
  iVar3 = *(int *)puVar4;
  param_1[0x12] = (long)local_68;
  FUN_00835a20(&local_78,(long)iVar3);
  if (*(char *)((long)param_1 + 0xaf) < '\0') {
    operator_delete((void *)param_1[0x13]);
  }
  param_1[0x14] = (long)pcStack_70;
  param_1[0x13] = (long)local_78;
  param_1[0x15] = (long)local_68;
LAB_00cf8b14:
  lVar7 = param_1[10];
  local_78 = (undefined8 *)operator_new(0x20);
  *local_78 = param_1;
  local_78[2] = FUN_004473ec;
  local_78[3] = FUN_00cfd160;
  pcStack_70 = FUN_00cfcf6c;
  local_68 = FUN_00cfcf7c;
  FUN_007b5b08(lVar7 + 0xb8,param_1,&local_78);
  FUN_00cf8c18(param_1,1);
  uVar8 = FUN_00417e08();
  if ((uVar8 & 1) == 0) {
    (**(code **)(*param_1 + 0x110))(&local_78,param_1);
    FUN_00623bb0(&DAT_00259892,"../../p2p/base/port.cc",0x411,&local_78,
                 ": Port created with network cost ",(long)*(short *)((long)param_1 + 0xfa));
    if ((long)local_68 < 0) {
      operator_delete(local_78);
    }
  }
  return;
}


// ===== 00cf8c18  FUN_00cf8c18 =====

void FUN_00cf8c18(long param_1,ulong param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 uStack_81;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 local_54 [4];
  void *local_50 [2];
  code *local_40;
  code *local_38;
  
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00988288(local_50,param_1 + 0x250);
  uVar2 = *(undefined8 *)(param_1 + 600);
  FUN_00988398(&local_70,local_50);
  puStack_68 = (undefined1 *)uVar2;
  FUN_00988108(local_50);
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_0098815c(&local_80,&local_70);
  plVar3 = *(long **)(param_1 + 0x30);
  puStack_78 = puStack_68;
  pvVar1 = operator_new(0x10);
  FUN_0098815c(pvVar1,&local_80);
  *(undefined1 **)((long)pvVar1 + 8) = puStack_78;
  local_50[0] = pvVar1;
  if ((param_2 & 1) == 0) {
    local_40 = FUN_00cfd6bc;
    local_38 = FUN_00cfd5cc;
    (**(code **)(*plVar3 + 8))(plVar3,local_50,local_54,&uStack_81);
  }
  else {
    local_40 = FUN_00cfd6bc;
    local_38 = FUN_00cfd5cc;
    local_54[0] = 0;
    (**(code **)(*plVar3 + 0x10))
              (plVar3,local_50,(long)*(int *)(param_1 + 0xe0) * 1000,local_54,&uStack_81);
  }
  (*local_40)(0,local_50,local_50);
  FUN_00988344(&local_80);
  FUN_00988344(&local_70);
  return;
}


// ===== 00cf8d60  FUN_00cf8d60 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00cf8d60(undefined8 *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  void *pvVar6;
  long *plVar7;
  undefined8 *puVar8;
  void *pvVar9;
  long *plVar10;
  void *pvVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *local_38;
  
  puVar8 = param_1 + 0x19;
  puVar12 = (undefined8 *)*puVar8;
  *param_1 = &PTR_FUN_00d50628;
  while (puVar12 != param_1 + 0x1a) {
    FUN_00c653c4(puVar12[0xd]);
    if ((long *)puVar12[0xd] != (long *)0x0) {
      (**(code **)(*(long *)puVar12[0xd] + 8))();
    }
    puVar2 = (undefined8 *)puVar12[1];
    puVar13 = puVar12;
    if ((undefined8 *)puVar12[1] == (undefined8 *)0x0) {
      do {
        puVar12 = (undefined8 *)puVar13[2];
        bVar3 = puVar13 != (undefined8 *)*puVar12;
        puVar13 = puVar12;
      } while (bVar3);
    }
    else {
      do {
        puVar12 = puVar2;
        puVar2 = (undefined8 *)*puVar12;
      } while ((undefined8 *)*puVar12 != (undefined8 *)0x0);
    }
  }
  local_38 = puVar8;
  FUN_00cfd0cc(&local_38,param_1[0x1a]);
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x19] = param_1 + 0x1a;
  FUN_00cf909c(param_1);
  FUN_007b5df8(param_1[10] + 0xb8,param_1);
  param_1[0x4b] = 0;
  FUN_009881c8(param_1 + 0x4a);
  (*(code *)param_1[0x48])(0,param_1 + 0x46,param_1 + 0x46);
  FUN_007b5d24(param_1 + 0x41);
  FUN_007b5d24(param_1 + 0x3d);
  FUN_007b5d24(param_1 + 0x39);
  FUN_007b5d24(param_1 + 0x35);
  FUN_007b5d24(param_1 + 0x31);
  FUN_007b5d24(param_1 + 0x2d);
  FUN_007b5d24(param_1 + 0x29);
  FUN_007b5d24(param_1 + 0x25);
  plVar10 = (long *)param_1[0x22];
  if (plVar10 != (long *)0x0) {
    plVar7 = (long *)param_1[0x23];
    plVar5 = plVar10;
    if (plVar10 != plVar7) {
      do {
        plVar7 = plVar7 + -1;
        if (plVar7 == (long *)0x0) goto LAB_00cf8fdc;
        plVar5 = (long *)*plVar7;
        *plVar7 = 0;
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 8))();
        }
      } while (plVar7 != plVar10);
      plVar5 = (long *)param_1[0x22];
    }
    param_1[0x23] = plVar10;
    operator_delete(plVar5);
  }
  local_38 = puVar8;
  FUN_00cfd0cc(&local_38,param_1[0x1a]);
  pvVar11 = (void *)param_1[0x16];
  if (pvVar11 != (void *)0x0) {
    pvVar9 = (void *)param_1[0x17];
    pvVar6 = pvVar11;
    if (pvVar11 != pvVar9) {
      do {
        pvVar9 = (void *)((long)pvVar9 + -0x198);
        if (pvVar9 == (void *)0x0) {
LAB_00cf8fdc:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        FUN_00aff0f8(pvVar9);
      } while (pvVar9 != pvVar11);
      pvVar6 = (void *)param_1[0x16];
    }
    param_1[0x17] = pvVar11;
    operator_delete(pvVar6);
  }
  if (*(char *)((long)param_1 + 0xaf) < '\0') {
    operator_delete((void *)param_1[0x13]);
    cVar1 = *(char *)((long)param_1 + 0x97);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x97);
  }
  if (cVar1 < '\0') {
    operator_delete((void *)param_1[0x10]);
    cVar1 = *(char *)((long)param_1 + 0x77);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x77);
  }
  if (cVar1 < '\0') {
    operator_delete((void *)param_1[0xc]);
    plVar10 = (long *)param_1[1];
  }
  else {
    plVar10 = (long *)param_1[1];
  }
  if ((plVar10 != (long *)0x0) && (iVar4 = FUN_00d0f7a0(0xffffffff,plVar10 + 1), iVar4 == 1)) {
    (**(code **)(*plVar10 + 8))(plVar10);
  }
  FUN_00cfdaac(param_1);
  return;
}


// ===== 00cf8ff0  FUN_00cf8ff0 =====

void FUN_00cf8ff0(long param_1)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *local_38;
  
  plVar3 = *(long **)(param_1 + 200);
  while (plVar3 != (long *)(param_1 + 0xd0)) {
    FUN_00c653c4(plVar3[0xd]);
    if ((long *)plVar3[0xd] != (long *)0x0) {
      (**(code **)(*(long *)plVar3[0xd] + 8))();
    }
    plVar1 = (long *)plVar3[1];
    plVar4 = plVar3;
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
  local_38 = (undefined8 *)(param_1 + 200);
  FUN_00cfd0cc(&local_38,*(undefined8 *)(param_1 + 0xd0));
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(long **)(param_1 + 200) = (long *)(param_1 + 0xd0);
  return;
}


// ===== 00cf909c  FUN_00cf909c =====

void FUN_00cf909c(long param_1)

{
  int iVar1;
  char **local_48;
  char *local_40;
  char *pcStack_38;
  
  if (((DAT_00dbb778 & 1) == 0) && (iVar1 = FUN_0054fdd4(&DAT_00dbb778), iVar1 != 0)) {
    DAT_00dbb770 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00dbb778);
  }
  local_48 = (char **)0x0;
  pcStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00dbb770 != '\0') {
    local_48 = &local_40;
    FUN_0066d348(0x42,DAT_00dbb770,"Port::CancelPendingTasks",0,0,0,0,0,0);
    local_40 = DAT_00dbb770;
    pcStack_38 = "Port::CancelPendingTasks";
  }
  FUN_00988228(param_1 + 0x250);
  if ((local_48 != (char **)0x0) && (**local_48 != '\0')) {
    FUN_0066d348(0x45,*local_48,local_48[1],0,0,0,0,0,0);
  }
  return;
}


// ===== 00cf91ac  FUN_00cf91ac =====

void FUN_00cf91ac(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xcf91b4);
  (*pcVar1)();
}


// ===== 00cf91b4  FUN_00cf91b4 =====

undefined4 FUN_00cf91b4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x48);
}


// ===== 00cf91c0  FUN_00cf91c0 =====

undefined8 FUN_00cf91c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}


// ===== 00cf91cc  FUN_00cf91cc =====

undefined4 FUN_00cf91cc(long param_1)

{
  return *(undefined4 *)(param_1 + 0xe8);
}


// ===== 00cf91d8  FUN_00cf91d8 =====

void FUN_00cf91d8(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xe8) = param_2;
  return;
}


// ===== 00cf91e4  FUN_00cf91e4 =====

void FUN_00cf91e4(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xf0) = param_2;
  return;
}


// ===== 00cf91f0  FUN_00cf91f0 =====

undefined8 FUN_00cf91f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf0);
}


// ===== 00cf91fc  FUN_00cf91fc =====

undefined1 FUN_00cf91fc(long param_1)

{
  return *(undefined1 *)(param_1 + 0xf8);
}


// ===== 00cf9208  FUN_00cf9208 =====

void FUN_00cf9208(long param_1,undefined4 param_2,undefined8 ****param_3,ulong param_4,
                 undefined8 ****param_5,ulong param_6)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  long *plVar6;
  bool bVar7;
  undefined8 ****ppppuVar8;
  long *plVar9;
  long *plVar10;
  undefined8 ***local_78;
  ulong uStack_70;
  undefined8 local_68;
  
  *(undefined4 *)(param_1 + 0x78) = param_2;
  if (param_4 < 0x7ffffffffffffff7) {
    if (param_4 < 0x17) {
      local_68 = CONCAT17((char)param_4,(undefined7)local_68);
      ppppuVar8 = &local_78;
    }
    else {
      uVar1 = (param_4 & 0x7ffffffffffffff8) + 8;
      uVar2 = 0x19;
      if (uVar1 != 0x18) {
        uVar2 = uVar1;
      }
      ppppuVar8 = (undefined8 ****)operator_new(uVar2);
      local_68 = uVar2 | 0x8000000000000000;
      local_78 = ppppuVar8;
      uStack_70 = param_4;
    }
    if ((undefined8 ****)((long)ppppuVar8 + param_4) < ppppuVar8) {
LAB_00cf944c:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__utility/is_pointer_in_range.h:38: libc++ Hardening assertion std::__is_valid_range(__begin, __end) failed: [__begin, __end) is not a valid range\n"
                );
    }
    if ((param_3 < ppppuVar8) || ((undefined8 ****)((long)ppppuVar8 + param_4) <= param_3)) {
      memmove(ppppuVar8,param_3,param_4);
      cVar5 = *(char *)(param_1 + 0x97);
      *(undefined1 *)((long)ppppuVar8 + param_4) = 0;
      if (cVar5 < '\0') {
        operator_delete(*(void **)(param_1 + 0x80));
      }
      *(ulong *)(param_1 + 0x88) = uStack_70;
      *(undefined8 ****)(param_1 + 0x80) = local_78;
      *(ulong *)(param_1 + 0x90) = local_68;
      if (0x7ffffffffffffff6 < param_6) goto LAB_00cf9474;
      if (param_6 < 0x17) {
        local_68 = CONCAT17((char)param_6,(undefined7)local_68);
        ppppuVar8 = &local_78;
      }
      else {
        uVar1 = (param_6 & 0x7ffffffffffffff8) + 8;
        uVar2 = 0x19;
        if (uVar1 != 0x18) {
          uVar2 = uVar1;
        }
        ppppuVar8 = (undefined8 ****)operator_new(uVar2);
        local_68 = uVar2 | 0x8000000000000000;
        local_78 = ppppuVar8;
        uStack_70 = param_6;
      }
      if ((undefined8 ****)((long)ppppuVar8 + param_6) < ppppuVar8) goto LAB_00cf944c;
      if ((param_5 < ppppuVar8) || ((undefined8 ****)((long)ppppuVar8 + param_6) <= param_5)) {
        memmove(ppppuVar8,param_5,param_6);
        cVar5 = *(char *)(param_1 + 0xaf);
        *(undefined1 *)((long)ppppuVar8 + param_6) = 0;
        if (cVar5 < '\0') {
          operator_delete(*(void **)(param_1 + 0x98));
        }
        lVar3 = *(long *)(param_1 + 0xb0);
        lVar4 = *(long *)(param_1 + 0xb8);
        *(ulong *)(param_1 + 0xa0) = uStack_70;
        *(undefined8 ****)(param_1 + 0x98) = local_78;
        *(ulong *)(param_1 + 0xa8) = local_68;
        for (; lVar3 != lVar4; lVar3 = lVar3 + 0x198) {
          *(undefined4 *)(lVar3 + 0x18) = param_2;
          FUN_00b008fc(lVar3 + 0xa0,param_3,param_4);
          FUN_00b008fc(lVar3 + 0xb8,param_5,param_6);
        }
        plVar9 = *(long **)(param_1 + 200);
        while (plVar9 != (long *)(param_1 + 0xd0)) {
          FUN_00c6643c(plVar9[0xd],param_2,param_3,param_4,param_5,param_6);
          plVar6 = (long *)plVar9[1];
          plVar10 = plVar9;
          if ((long *)plVar9[1] == (long *)0x0) {
            do {
              plVar9 = (long *)plVar10[2];
              bVar7 = plVar10 != (long *)*plVar9;
              plVar10 = plVar9;
            } while (bVar7);
          }
          else {
            do {
              plVar9 = plVar6;
              plVar6 = (long *)*plVar9;
            } while ((long *)*plVar9 != (long *)0x0);
          }
        }
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__string/char_traits.h:148: libc++ Hardening assertion !std::__is_pointer_in_range(__s1, __s1 + __n, __s2) failed: char_traits::copy: source and destination ranges overlap\n"
              );
  }
LAB_00cf9474:
                    /* WARNING: Subroutine does not return */
  FUN_005d45ec();
}


// ===== 00cf9478  FUN_00cf9478 =====

long FUN_00cf9478(long param_1)

{
  return param_1 + 0xb0;
}


// ===== 00cf9484  FUN_00cf9484 =====

long FUN_00cf9484(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar4 = (long *)(param_1 + 0xd0);
  plVar3 = plVar4;
  plVar2 = (long *)*plVar4;
  do {
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    while (uVar1 = FUN_007e97f4(param_2,plVar2 + 4), (uVar1 & 1) == 0) {
      uVar1 = FUN_007e97f4(plVar2 + 4,param_2);
      if ((uVar1 & 1) == 0) {
        plVar3 = (long *)*plVar3;
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        if (plVar3 != plVar4) {
          return plVar3[0xd];
        }
        return 0;
      }
      plVar3 = plVar2 + 1;
      plVar2 = (long *)*plVar3;
      if (plVar2 == (long *)0x0) {
        return 0;
      }
    }
    plVar3 = plVar2;
    plVar2 = (long *)*plVar2;
  } while( true );
}


// ===== 00cf9524  FUN_00cf9524 =====

void FUN_00cf9524(long *****param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined8 param_14,undefined8 param_15,byte param_16)

{
  undefined1 **ppuVar1;
  long ******pppppplVar2;
  bool bVar3;
  undefined4 uVar4;
  ulong uVar5;
  long ***ppplVar6;
  long *****ppppplVar7;
  long ****pppplVar8;
  long *****ppppplVar9;
  long ****pppplVar10;
  undefined1 *local_220;
  undefined1 *puStack_218;
  undefined1 *local_210;
  undefined1 *puStack_208;
  undefined1 *puStack_200;
  undefined1 *puStack_1f8;
  undefined1 *local_1f0;
  undefined1 *puStack_1e8;
  undefined1 *puStack_1e0;
  undefined1 *puStack_1d8;
  undefined1 *local_1d0;
  undefined1 *puStack_1c8;
  undefined1 *puStack_1c0;
  undefined1 *puStack_1b8;
  undefined1 *local_1b0;
  undefined1 *puStack_1a8;
  undefined1 *puStack_1a0;
  undefined1 *puStack_198;
  undefined1 *local_190;
  undefined1 *puStack_188;
  undefined1 *puStack_180;
  undefined1 *puStack_178;
  undefined1 *local_170;
  undefined1 *puStack_168;
  undefined1 *puStack_160;
  undefined1 *puStack_158;
  undefined1 *local_150;
  undefined1 *puStack_148;
  undefined1 *puStack_140;
  undefined1 *puStack_138;
  long **local_130;
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
  long *****local_88;
  undefined1 **local_80;
  byte bStack_71;
  long ****local_70 [2];
  
  pppplVar8 = (long ****)(long)*(char *)((long)param_1 + 0x97);
  if ((long)pppplVar8 < 0) {
    ppppplVar7 = (long *****)param_1[0x10];
    pppplVar8 = param_1[0x11];
  }
  else {
    ppppplVar7 = param_1 + 0x10;
  }
  pppplVar10 = (long ****)(long)*(char *)((long)param_1 + 0xaf);
  if ((long)pppplVar10 < 0) {
    ppppplVar9 = (long *****)param_1[0x13];
    pppplVar10 = param_1[0x14];
  }
  else {
    ppppplVar9 = param_1 + 0x13;
  }
  puStack_208 = &DAT_aaaaaaaaaaaaaaaa;
  local_210 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1f8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_200 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1e8 = &DAT_aaaaaaaaaaaaaaaa;
  local_1f0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1d8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1e0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1c8 = &DAT_aaaaaaaaaaaaaaaa;
  local_1d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1b8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_1b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_198 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_188 = &DAT_aaaaaaaaaaaaaaaa;
  local_190 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_178 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_180 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_168 = &DAT_aaaaaaaaaaaaaaaa;
  local_170 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_158 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_160 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
  local_150 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_140 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
  local_130 = (long **)&DAT_aaaaaaaaaaaaaaaa;
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
  puStack_218 = &DAT_aaaaaaaaaaaaaaaa;
  local_220 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00afec28(&local_220,*(undefined4 *)(param_1 + 0xf),param_5,param_6,param_2,0,ppppplVar7,
               pppplVar8,ppppplVar9,pppplVar10,param_11,*(undefined4 *)((long)param_1 + 0x7c),
               &DAT_001b3348,0,*(undefined2 *)((long)param_1[10] + 0xae),
               *(undefined2 *)((long)param_1 + 0xfa));
  FUN_00b008fc(&puStack_1e8,param_7,param_8);
  FUN_00b00674(&local_220,param_3,param_1[0x1e]);
  uVar4 = *(undefined4 *)(param_1[10] + 0x15);
  (*(code *)(*param_1[2])[2])
            (&local_88,param_1[2],"WebRTC-IncreaseIceCandidatePriorityHostSrflx",0x2c);
  bVar3 = false;
  ppuVar1 = local_80;
  if (-1 < (char)bStack_71) {
    ppuVar1 = (undefined1 **)(ulong)bStack_71;
  }
  if ((undefined1 **)0x6 < ppuVar1) {
    pppppplVar2 = (long ******)local_88;
    if (-1 < (char)bStack_71) {
      pppppplVar2 = &local_88;
    }
    bVar3 = *(int *)pppppplVar2 == 0x62616e45 && *(int *)((long)pppppplVar2 + 3) == 0x64656c62;
  }
  if ((char)bStack_71 < '\0') {
    operator_delete(local_88);
  }
  uVar4 = FUN_00b001a4(&local_220,param_12,uVar4,param_13,bVar3);
  puStack_188 = (undefined1 *)CONCAT44(puStack_188._4_4_,uVar4);
  FUN_00b008fc(&puStack_c0,param_9,param_10);
  pppplVar8 = param_1[10];
  ppplVar6 = (long ***)(long)*(char *)((long)pppplVar8 + 0x27);
  if ((long)ppplVar6 < 0) {
    pppplVar10 = (long ****)pppplVar8[2];
    ppplVar6 = pppplVar8[3];
  }
  else {
    pppplVar10 = pppplVar8 + 2;
  }
  FUN_00b008fc(&puStack_148,pppplVar10,ppplVar6);
  local_130 = (long **)param_1[10][0x14];
  FUN_00b008fc(&puStack_a0,param_14,param_15);
  FUN_007e8d84(&puStack_108,param_4);
  uVar5 = FUN_00cf9828(param_1,&local_220,param_16 & 1);
  if ((uVar5 & 1) == 0) {
    pppplVar8 = param_1[0x17];
    if (pppplVar8 < param_1[0x18]) {
      if (pppplVar8 == (long ****)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      FUN_00afef10(pppplVar8,&local_220);
      pppplVar8 = pppplVar8 + 0x33;
    }
    else {
      pppplVar8 = (long ****)FUN_00b07478(param_1 + 0x16,&local_220);
    }
    param_1[0x17] = pppplVar8;
    local_88 = local_70;
    local_80 = &local_220;
    local_70[0] = (long ****)param_1;
    FUN_007b6160(param_1 + 0x39,&local_88,FUN_00cee12c);
    (*(code *)(*param_1)[0x37])(param_1,param_16 & 1);
  }
  FUN_00aff0f8(&local_220);
  return;
}


// ===== 00cf9828  FUN_00cf9828 =====

void FUN_00cf9828(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined1 auStack_580 [8];
  undefined8 local_578;
  undefined1 auStack_570 [408];
  undefined1 local_3d8;
  undefined1 *local_3d0;
  undefined1 *puStack_3c8;
  undefined1 *local_3c0;
  undefined1 *puStack_3b8;
  undefined1 *puStack_3b0;
  undefined1 *puStack_3a8;
  undefined1 *local_3a0;
  undefined1 *puStack_398;
  undefined1 *puStack_390;
  undefined1 *puStack_388;
  undefined1 *local_380;
  undefined1 *puStack_378;
  undefined1 *puStack_370;
  undefined1 *puStack_368;
  undefined1 *local_360;
  undefined1 *puStack_358;
  undefined1 *puStack_350;
  undefined1 *puStack_348;
  undefined1 *local_340;
  undefined1 *puStack_338;
  undefined1 *puStack_330;
  undefined1 *puStack_328;
  undefined1 *local_320;
  undefined1 *puStack_318;
  undefined1 *puStack_310;
  undefined1 *puStack_308;
  undefined1 *local_300;
  undefined1 *puStack_2f8;
  undefined1 *puStack_2f0;
  undefined1 *puStack_2e8;
  undefined1 *local_2e0;
  undefined1 *puStack_2d8;
  undefined1 *puStack_2d0;
  undefined1 *puStack_2c8;
  undefined1 *local_2c0;
  undefined1 *puStack_2b8;
  undefined1 *puStack_2b0;
  undefined1 *puStack_2a8;
  undefined1 *local_2a0;
  undefined1 *puStack_298;
  undefined1 *puStack_290;
  undefined1 *puStack_288;
  undefined1 *local_280;
  undefined1 *puStack_278;
  undefined1 *puStack_270;
  undefined1 *puStack_268;
  undefined1 *local_260;
  undefined1 *puStack_258;
  undefined1 *puStack_250;
  undefined1 *puStack_248;
  undefined1 *local_240;
  undefined1 *puStack_238;
  undefined1 *puStack_230;
  undefined1 *local_228;
  undefined1 *local_220;
  undefined1 *puStack_218;
  undefined1 *local_210;
  undefined1 *puStack_208;
  undefined1 *puStack_200;
  undefined1 *puStack_1f8;
  undefined1 *local_1f0;
  undefined1 *puStack_1e8;
  undefined1 *puStack_1e0;
  undefined1 *puStack_1d8;
  undefined1 *local_1d0;
  undefined1 *puStack_1c8;
  undefined1 *puStack_1c0;
  undefined1 *puStack_1b8;
  undefined1 *local_1b0;
  undefined1 *puStack_1a8;
  undefined1 *puStack_1a0;
  undefined1 *puStack_198;
  undefined1 *local_190;
  undefined1 *puStack_188;
  undefined1 *puStack_180;
  undefined1 *puStack_178;
  undefined1 *local_170;
  undefined1 *puStack_168;
  undefined1 *local_160;
  undefined1 *puStack_158;
  undefined1 *local_150;
  undefined1 *puStack_148;
  undefined1 *local_140;
  undefined1 *puStack_138;
  undefined1 *local_130;
  undefined1 *puStack_128;
  undefined1 *local_120;
  undefined1 *puStack_118;
  undefined1 *local_110;
  undefined1 *puStack_108;
  undefined1 *local_100;
  undefined1 *puStack_f8;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  void *local_78 [2];
  code *local_68;
  undefined **local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00bccb74(*(undefined8 *)(param_1 + 0x50));
  if (lVar2 != 0) {
    uVar3 = FUN_00aff2e0(param_2);
    if ((uVar3 & 1) == 0) {
      lVar2 = 0;
    }
    else {
      puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
      local_90 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
      local_a0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
      local_b0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
      local_c0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
      local_d0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
      local_e0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
      local_f0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
      local_100 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
      local_110 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
      local_120 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
      local_130 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
      local_140 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
      local_150 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_158 = &DAT_aaaaaaaaaaaaaaaa;
      local_160 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_168 = &DAT_aaaaaaaaaaaaaaaa;
      local_170 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_208 = &DAT_aaaaaaaaaaaaaaaa;
      local_210 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_1f8 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_200 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_1e8 = &DAT_aaaaaaaaaaaaaaaa;
      local_1f0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_1d8 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_1e0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_1c8 = &DAT_aaaaaaaaaaaaaaaa;
      local_1d0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_1b8 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_1c0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_1a8 = &DAT_aaaaaaaaaaaaaaaa;
      local_1b0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_198 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_1a0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_188 = &DAT_aaaaaaaaaaaaaaaa;
      local_190 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_178 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_180 = &DAT_aaaaaaaaaaaaaaaa;
      local_80 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_00afef10(&local_210,param_2);
      puStack_218 = &DAT_aaaaaaaaaaaaaaaa;
      local_220 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_00988288(&local_3d0,param_1 + 0x250);
      uVar6 = *(undefined8 *)(param_1 + 600);
      FUN_00988398(&local_220,&local_3d0);
      puStack_218 = (undefined1 *)uVar6;
      FUN_00988108(&local_3d0);
      puStack_3b8 = &DAT_aaaaaaaaaaaaaaaa;
      local_3c0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_3a8 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_3b0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_398 = &DAT_aaaaaaaaaaaaaaaa;
      local_3a0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_388 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_390 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_378 = &DAT_aaaaaaaaaaaaaaaa;
      local_380 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_368 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_370 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_358 = &DAT_aaaaaaaaaaaaaaaa;
      local_360 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_348 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_350 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_338 = &DAT_aaaaaaaaaaaaaaaa;
      local_340 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_328 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_330 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_318 = &DAT_aaaaaaaaaaaaaaaa;
      local_320 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_308 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_310 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_2f8 = &DAT_aaaaaaaaaaaaaaaa;
      local_300 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_2e8 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_2f0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_2d8 = &DAT_aaaaaaaaaaaaaaaa;
      local_2e0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_2c8 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_2d0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_2b8 = &DAT_aaaaaaaaaaaaaaaa;
      local_2c0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_2a8 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_2b0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_298 = &DAT_aaaaaaaaaaaaaaaa;
      local_2a0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_288 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_290 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_278 = &DAT_aaaaaaaaaaaaaaaa;
      local_280 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_268 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_270 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_258 = &DAT_aaaaaaaaaaaaaaaa;
      local_260 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_248 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_250 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_238 = &DAT_aaaaaaaaaaaaaaaa;
      local_240 = &DAT_aaaaaaaaaaaaaaaa;
      local_228 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_230 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_3c8 = &DAT_aaaaaaaaaaaaaaaa;
      local_3d0 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_00988170(&local_3d0,&local_220);
      puStack_3c8 = puStack_218;
      FUN_00afef10(&local_3c0,&local_210);
      local_228 = (undefined1 *)(CONCAT71(local_228._1_7_,param_3) & 0xffffffffffffff01);
      *(undefined4 *)(param_1 + 0x108) = 1;
      plVar4 = (long *)FUN_00bccb74(*(undefined8 *)(param_1 + 0x50));
      uVar6 = FUN_007e8ea8(&puStack_1c0);
      FUN_00988170(auStack_580,&local_3d0);
      local_578 = puStack_3c8;
      FUN_00afef10(auStack_570,&local_3c0);
      local_3d8 = local_228._0_1_;
      local_68 = FUN_00cfd174;
      local_60 = &PTR_FUN_00d507f0;
      pvVar5 = operator_new(0x1b0);
      FUN_0098815c(pvVar5,auStack_580);
      *(undefined8 *)((long)pvVar5 + 8) = local_578;
      FUN_00afef10((long)pvVar5 + 0x10,auStack_570);
      *(undefined1 *)((long)pvVar5 + 0x1a8) = local_3d8;
      local_78[0] = pvVar5;
      (**(code **)(*plVar4 + 0x10))(plVar4,uVar6,local_78);
      if ((code *)local_60[1] != (code *)0x0) {
        (*(code *)local_60[1])(local_78[0]);
      }
      FUN_00aff0f8(auStack_570);
      FUN_00988344(auStack_580);
      FUN_00aff0f8(&local_3c0);
      FUN_00988344(&local_3d0);
      FUN_00988344(&local_220);
      FUN_00aff0f8(&local_210);
      lVar2 = 1;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar2);
}


// ===== 00cf9aa8  FUN_00cf9aa8 =====

void FUN_00cf9aa8(long param_1,ulong param_2)

{
  long local_20;
  undefined1 *puStack_18;
  
  if ((param_2 & 1) != 0) {
    puStack_18 = (undefined1 *)&local_20;
    local_20 = param_1;
    FUN_007b6160(param_1 + 0x1e8,&puStack_18,FUN_00cf8404);
  }
  return;
}


// ===== 00cf9aec  FUN_00cf9aec =====

void FUN_00cf9aec(long param_1,undefined8 param_2,long param_3)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  void *local_48;
  code *pcStack_40;
  code *local_38;
  
  pvVar1 = operator_new(0x20);
  (**(code **)(param_3 + 0x10))(1,param_3,pvVar1);
  uVar3 = *(undefined8 *)(param_3 + 0x18);
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  *(code **)(param_3 + 0x10) = FUN_00433984;
  *(undefined8 *)(param_3 + 0x18) = 0;
  pcStack_40 = FUN_00cfd3a4;
  *(undefined8 *)((long)pvVar1 + 0x18) = uVar3;
  *(undefined8 *)((long)pvVar1 + 0x10) = uVar2;
  local_38 = FUN_00cfd3b4;
  local_48 = pvVar1;
  FUN_007b5b08(param_1 + 0x1e8,param_2,&local_48);
  return;
}


// ===== 00cf9b84  FUN_00cf9b84 =====

void FUN_00cf9b84(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *local_48;
  code *pcStack_40;
  code *local_38;
  
  local_48 = (undefined8 *)operator_new(0x20);
  uVar2 = *param_3;
  uVar4 = param_3[3];
  uVar3 = param_3[2];
  lVar1 = param_3[3];
  local_48[1] = param_3[1];
  *local_48 = uVar2;
  local_48[3] = uVar4;
  local_48[2] = uVar3;
  if (*(long *)(lVar1 + 8) != 0) {
    param_3[2] = 0;
    param_3[3] = &DAT_001fbc50;
  }
  pcStack_40 = FUN_00cfd3f4;
  local_38 = FUN_00cfd404;
  FUN_007b5b08(param_1 + 0x1a8,param_2,&local_48);
  return;
}


// ===== 00cf9c10  FUN_00cf9c10 =====

void FUN_00cf9c10(long param_1,undefined8 param_2)

{
  long local_28;
  long *plStack_20;
  undefined8 local_18;
  
  plStack_20 = &local_28;
  local_28 = param_1;
  local_18 = param_2;
  FUN_007b6160(param_1 + 0x1a8,&plStack_20,FUN_00cfd444);
  return;
}


// ===== 00cf9c50  FUN_00cf9c50 =====

void FUN_00cf9c50(long param_1,undefined8 param_2,long param_3)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  void *local_48;
  code *pcStack_40;
  code *local_38;
  
  pvVar1 = operator_new(0x20);
  (**(code **)(param_3 + 0x10))(1,param_3,pvVar1);
  uVar3 = *(undefined8 *)(param_3 + 0x18);
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  *(code **)(param_3 + 0x10) = FUN_00433984;
  *(undefined8 *)(param_3 + 0x18) = 0;
  pcStack_40 = FUN_00cfd460;
  *(undefined8 *)((long)pvVar1 + 0x18) = uVar3;
  *(undefined8 *)((long)pvVar1 + 0x10) = uVar2;
  local_38 = FUN_00cfd470;
  local_48 = pvVar1;
  FUN_007b5b08(param_1 + 0x1c8,param_2,&local_48);
  return;
}


// ===== 00cf9ce8  FUN_00cf9ce8 =====

void FUN_00cf9ce8(long param_1,undefined8 param_2,long param_3)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  void *local_48;
  code *pcStack_40;
  code *local_38;
  
  pvVar1 = operator_new(0x20);
  (**(code **)(param_3 + 0x10))(1,param_3,pvVar1);
  uVar3 = *(undefined8 *)(param_3 + 0x18);
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  *(code **)(param_3 + 0x10) = FUN_00433984;
  *(undefined8 *)(param_3 + 0x18) = 0;
  pcStack_40 = FUN_00cfd3a4;
  *(undefined8 *)((long)pvVar1 + 0x18) = uVar3;
  *(undefined8 *)((long)pvVar1 + 0x10) = uVar2;
  local_38 = FUN_00cfd3b4;
  local_48 = pvVar1;
  FUN_007b5b08(param_1 + 0x208,param_2,&local_48);
  return;
}


// ===== 00cf9d80  FUN_00cf9d80 =====

void FUN_00cf9d80(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  void *local_b8 [2];
  char cStack_a1;
  long *local_a0 [2];
  char cStack_89;
  undefined1 uStack_81;
  char *local_80;
  ulong local_78;
  undefined1 *local_70;
  long *local_38;
  
  lVar1 = (**(code **)(*param_2 + 0x18))(param_2);
  FUN_007e8cec(&local_80,lVar1 + 0x50);
  local_a0[0] = param_1 + 0x19;
  local_38 = param_2;
  auVar5 = FUN_00cfd4b0(local_a0,&local_80,&local_80);
  lVar1 = auVar5._0_8_;
  if ((long)local_70 < 0) {
    operator_delete(local_80);
  }
  if (((auVar5 & (undefined1  [16])0xff) == (undefined1  [16])0x0) &&
     (*(long **)(lVar1 + 0x68) != param_2)) {
    uVar2 = FUN_004022fc();
    if ((uVar2 & 1) == 0) {
      local_80 = "../../p2p/base/port.cc";
      local_78 = 0xb5a;
      local_70 = &uStack_81;
      (**(code **)(*param_1 + 0x110))(local_a0,param_1);
      uVar3 = (**(code **)(*param_2 + 0x18))(param_2);
      FUN_00aff5b4(local_b8,uVar3,1);
      FUN_00623bb0(&DAT_0025987e,local_80,local_78 & 0xffffffff,local_a0,
                   ": A new connection was created on an existing remote address. New remote candidate: "
                   ,local_b8);
      if (cStack_a1 < '\0') {
        operator_delete(local_b8[0]);
      }
      if (cStack_89 < '\0') {
        operator_delete(local_a0[0]);
      }
    }
    plVar4 = *(long **)(lVar1 + 0x68);
    *(long **)(lVar1 + 0x68) = param_2;
    (**(code **)(*param_1 + 0x1c0))(param_1,plVar4);
    FUN_00c653c4(plVar4);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))(plVar4);
    }
  }
  return;
}


// ===== 00cf9f10  FUN_00cf9f10 =====

/* WARNING: Removing unreachable block (ram,0x00cfa044) */
/* WARNING: Removing unreachable block (ram,0x00cfa318) */
/* WARNING: Removing unreachable block (ram,0x00cfa10c) */
/* WARNING: Removing unreachable block (ram,0x00cfa04c) */
/* WARNING: Removing unreachable block (ram,0x00cfa02c) */
/* WARNING: Removing unreachable block (ram,0x00cfa2a8) */

void FUN_00cf9f10(long *param_1,undefined8 *param_2,undefined4 param_3)

{
  ushort uVar1;
  undefined8 ****ppppuVar2;
  ulong uVar3;
  size_t sVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 *local_d8;
  char **ppcStack_d0;
  char cStack_c1;
  void *local_c0 [2];
  char cStack_a9;
  undefined1 uStack_a1;
  char *local_a0;
  char **ppcStack_98;
  undefined1 *local_90;
  char **ppcStack_88;
  undefined1 local_80 [24];
  char *local_68;
  undefined8 local_60;
  undefined1 **local_58;
  undefined8 ***local_50;
  ulong uStack_48;
  ulong local_40;
  long *local_38;
  
  uVar7 = param_2[4];
  if (*(char *)((long)param_1 + 0xe4) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00cf9f6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xf0))(param_1,param_1,*param_2,param_2[1],uVar7);
    return;
  }
  local_40 = 0;
  local_38 = (long *)0x0;
  local_50 = (undefined8 ****)0x0;
  uStack_48 = 0;
  uVar3 = (**(code **)(*param_1 + 0x178))(param_1,*param_2,param_2[1],uVar7,&local_38,&local_50);
  plVar5 = local_38;
  if ((uVar3 & 1) == 0) {
    uVar3 = FUN_004249b0();
    if ((uVar3 & 1) == 0) {
      (**(code **)(*param_1 + 0x110))(&local_68,param_1);
      FUN_007e924c(local_80,uVar7);
      FUN_00623bb0(&DAT_0025987e,"../../p2p/base/port.cc",0xc43,&local_68,
                   ": Received non-STUN packet from unknown address: ",local_80);
    }
  }
  else if (local_38 != (long *)0x0) {
    uVar1 = *(ushort *)(local_38 + 4);
    if (uVar1 < 0x200) {
      if (uVar1 == 1) {
        uVar3 = FUN_00417e08();
        if ((uVar3 & 1) == 0) {
          local_68 = "../../p2p/base/port.cc";
          local_60 = 0xc71;
          local_58 = (undefined1 **)&uStack_a1;
          ppcStack_98 = &local_68;
          local_a0 = "Received ";
          FUN_00c6dac8(local_80,(short)local_38[4]);
          ppcStack_88 = &local_a0;
          lVar6 = (long)*(char *)((long)local_38 + 0x3f);
          if (lVar6 < 0) {
            plVar5 = (long *)local_38[5];
            lVar6 = local_38[6];
          }
          else {
            plVar5 = local_38 + 5;
          }
          local_90 = local_80;
          FUN_00624c34(local_c0,plVar5,lVar6);
          FUN_007e924c(&local_d8,uVar7);
          FUN_00623bb0("\r\t\n\t\n\t\n",*(undefined8 *)ppcStack_88[1],
                       *(undefined4 *)(ppcStack_88[1] + 8),*ppcStack_88,local_90,&DAT_0019f39d,
                       local_c0," from unknown address ",&local_d8);
          if (cStack_c1 < '\0') {
            operator_delete(local_d8);
          }
          if (cStack_a9 < '\0') {
            operator_delete(local_c0[0]);
          }
        }
        (**(code **)(*param_1 + 0xa8))(param_1,param_1,uVar7,param_3,local_38,&local_50,0);
        uVar3 = uStack_48;
        ppppuVar2 = (undefined8 ****)local_50;
        if (-1 < (long)local_40) {
          uVar3 = local_40 >> 0x38;
          ppppuVar2 = &local_50;
        }
        uVar3 = (**(code **)(*param_1 + 400))(param_1,uVar7,local_38,ppppuVar2,uVar3);
        if (((uVar3 & 1) == 0) && (uVar3 = FUN_00417e08(), (uVar3 & 1) == 0)) {
          FUN_00623bb0(&DAT_001f4e98,"../../p2p/base/port.cc",0xcb9,
                       "Received conflicting role from the peer.");
        }
        goto LAB_00cfa2a0;
      }
      if (uVar1 == 0x101) goto LAB_00cfa2a0;
    }
    else {
      if (uVar1 == 0x200) {
        sVar4 = strlen("Bad Request");
        (**(code **)(*param_1 + 0xb0))(param_1,plVar5,uVar7,400,"Bad Request",sVar4);
        goto LAB_00cfa2a0;
      }
      if ((uVar1 == 0x300) || (uVar1 == 0x310)) goto LAB_00cfa2a0;
    }
    uVar3 = FUN_004249b0();
    if ((uVar3 & 1) == 0) {
      local_68 = "../../p2p/base/port.cc";
      local_60 = 0xd43;
      local_58 = &local_90;
      (**(code **)(*param_1 + 0x110))(local_80,param_1);
      ppcStack_d0 = &local_68;
      lVar6 = local_38[4];
      local_d8 = local_80;
      FUN_007e924c(local_c0,uVar7);
      FUN_00623bb0(&DAT_00259907,*ppcStack_d0,*(undefined4 *)(ppcStack_d0 + 1),local_d8,
                   ": Received unexpected STUN message type: ",(short)lVar6,
                   " from unknown address: ",local_c0);
      if (cStack_a9 < '\0') {
        operator_delete(local_c0[0]);
      }
    }
  }
LAB_00cfa2a0:
  plVar5 = local_38;
  local_38 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  return;
}


// ===== 00cfa32c  FUN_00cfa32c =====

void FUN_00cfa32c(long param_1)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = *(long **)(param_1 + 200);
  while (plVar3 != (long *)(param_1 + 0xd0)) {
    FUN_00c65258(plVar3[0xd]);
    plVar1 = (long *)plVar3[1];
    plVar4 = plVar3;
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
  return;
}


// ===== 00cfa394  FUN_00cfa394 =====

void FUN_00cfa394(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 0xb8);
  if (uVar1 < *(ulong *)(param_1 + 0xc0)) {
    if (uVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    FUN_00afef10(uVar1);
    lVar2 = uVar1 + 0x198;
  }
  else {
    lVar2 = FUN_00b07478(param_1 + 0xb0);
  }
  *(long *)(param_1 + 0xb8) = lVar2;
  return;
}


// ===== 00cfa3f8  FUN_00cfa3f8 =====

/* WARNING: Removing unreachable block (ram,0x00cfa7c4) */
/* WARNING: Removing unreachable block (ram,0x00cfadd0) */
/* WARNING: Removing unreachable block (ram,0x00cfacc8) */
/* WARNING: Removing unreachable block (ram,0x00cfadb8) */
/* WARNING: Removing unreachable block (ram,0x00cfaf08) */
/* WARNING: Removing unreachable block (ram,0x00cfaf20) */
/* WARNING: Removing unreachable block (ram,0x00cfafec) */
/* WARNING: Removing unreachable block (ram,0x00cfaff4) */
/* WARNING: Removing unreachable block (ram,0x00cfaddc) */
/* WARNING: Removing unreachable block (ram,0x00cfadf4) */
/* WARNING: Removing unreachable block (ram,0x00cfae0c) */
/* WARNING: Removing unreachable block (ram,0x00cfadb4) */
/* WARNING: Removing unreachable block (ram,0x00cfaf7c) */
/* WARNING: Removing unreachable block (ram,0x00cfafd4) */
/* WARNING: Removing unreachable block (ram,0x00cfb0c4) */
/* WARNING: Removing unreachable block (ram,0x00cfb0ac) */
/* WARNING: Removing unreachable block (ram,0x00cfae98) */
/* WARNING: Removing unreachable block (ram,0x00cfae80) */
/* WARNING: Removing unreachable block (ram,0x00cfaeb0) */
/* WARNING: Removing unreachable block (ram,0x00cfabe8) */
/* WARNING: Removing unreachable block (ram,0x00cfabd0) */
/* WARNING: Removing unreachable block (ram,0x00cfa68c) */
/* WARNING: Removing unreachable block (ram,0x00cfac00) */
/* WARNING: Removing unreachable block (ram,0x00cfaec4) */
/* WARNING: Removing unreachable block (ram,0x00cfaedc) */
/* WARNING: Removing unreachable block (ram,0x00cfaf38) */
/* WARNING: Removing unreachable block (ram,0x00cfaef4) */

undefined4
FUN_00cfa3f8(long *param_1,undefined8 param_2,long param_3,undefined8 param_4,long *param_5,
            undefined8 *param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ushort uVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  size_t sVar9;
  long *plVar10;
  char *pcVar11;
  undefined8 uVar12;
  char **ppcVar13;
  char *pcVar14;
  char *pcVar15;
  char **ppcVar16;
  char *pcVar17;
  char **ppcVar18;
  undefined1 *puVar19;
  long lVar20;
  undefined8 *puVar21;
  undefined4 uVar22;
  undefined8 in_stack_fffffffffffffe28;
  char **ppcVar23;
  undefined1 uStack_1a1;
  undefined8 *local_1a0;
  char **ppcStack_198;
  char *local_190;
  undefined8 **ppuStack_188;
  char *local_180;
  char **local_178;
  char cStack_169;
  char *local_168;
  char **ppcStack_160;
  char cStack_151;
  char **local_150;
  char **ppcStack_148;
  char *local_140;
  char ***pppcStack_138;
  char **local_130;
  char **local_128;
  char *local_120;
  char ***pppcStack_118;
  char *local_110;
  char **ppcStack_108;
  char *local_f8;
  undefined8 local_f0;
  char **local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  char *local_c8;
  undefined8 local_c0;
  char **local_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined8 local_70;
  undefined4 local_68;
  
  uVar22 = (undefined4)((ulong)in_stack_fffffffffffffe28 >> 0x20);
  if (*(char *)((long)param_6 + 0x17) < '\0') {
    *(undefined1 *)*param_6 = 0;
    param_6[1] = 0;
  }
  else {
    *(undefined1 *)param_6 = 0;
    *(undefined1 *)((long)param_6 + 0x17) = 0;
  }
  local_68 = 0x310;
  local_70 = DAT_001f55c8;
  uVar7 = FUN_00c6adf8(&local_70,3,param_2,param_3);
  if (((uVar7 & 1) == 0) && (uVar7 = FUN_00c6ad54(param_2,param_3), (uVar7 & 1) == 0)) {
    return 0;
  }
  plVar8 = (long *)operator_new(0x80);
  plVar8[1] = 0;
  *plVar8 = 0;
  plVar8[3] = 0;
  plVar8[2] = 0;
  plVar8[5] = 0;
  plVar8[4] = 0;
  plVar8[7] = 0;
  plVar8[6] = 0;
  plVar8[9] = 0;
  plVar8[8] = 0;
  plVar8[0xb] = 0;
  plVar8[10] = 0;
  plVar8[0xd] = 0;
  plVar8[0xc] = 0;
  plVar8[0xf] = 0;
  plVar8[0xe] = 0;
  FUN_00c69b30();
  uVar12 = 0;
  if (param_3 != 0) {
    uVar12 = param_2;
  }
  *plVar8 = (long)(PTR_DAT_00d52cc0 + 0x10);
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00879324(&local_90,uVar12,param_3);
  uVar7 = FUN_00c6af90(plVar8,&local_90);
  if (((uVar7 & 1) == 0) || (puStack_78 != local_80)) {
    uVar22 = 0;
    goto joined_r0x00cfa574;
  }
  puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00c69e40(&local_b0,plVar8);
  uVar5 = *(ushort *)(plVar8 + 4);
  if (uVar5 < 0x111) {
    if (uVar5 == 1) {
      lVar20 = FUN_00c69fe8(plVar8,6);
      if ((lVar20 == 0) || (lVar20 = FUN_00c69fe8(plVar8,8), lVar20 == 0)) {
        uVar7 = FUN_004249b0();
        if ((uVar7 & 1) == 0) {
          local_c8 = "../../p2p/base/port.cc";
          local_c0 = 0xf43;
          local_b8 = &local_120;
          (**(code **)(*param_1 + 0x110))(&local_e0,param_1);
          local_178 = &local_c8;
          ppcStack_160 = &local_180;
          local_168 = ": Received ";
          local_180 = (char *)&local_e0;
          FUN_00c6dac8(&local_f8,(short)plVar8[4]);
          FUN_007e924c(&local_110,param_4);
          FUN_00623bb0("\r\n\t\n\t\n",*(undefined8 *)ppcStack_160[1],
                       *(undefined4 *)(ppcStack_160[1] + 8),*ppcStack_160,local_168,&local_f8,
                       " without username/M-I from: ",&local_110);
        }
        pcVar15 = "Bad Request";
        sVar9 = strlen("Bad Request");
        lVar20 = *param_1;
        uVar12 = 400;
LAB_00cfabc0:
        (**(code **)(lVar20 + 0xb0))(param_1,plVar8,param_4,uVar12,pcVar15,sVar9);
      }
      else {
        local_c0 = 0;
        local_b8 = (char **)0x0;
        local_e0 = 0;
        uStack_d8 = 0;
        local_d0 = 0;
        local_c8 = (char *)0x0;
        uVar7 = (**(code **)(*param_1 + 0x180))(param_1,plVar8,&local_c8,&local_e0);
        if (((uVar7 & 1) == 0) || (uVar7 = FUN_005f0614(&local_c8,param_1 + 0x10), (uVar7 & 1) == 0)
           ) {
          uVar7 = FUN_004249b0();
          if ((uVar7 & 1) == 0) {
            local_f8 = "../../p2p/base/port.cc";
            local_f0 = 0xfb3;
            local_e8 = &local_190;
            (**(code **)(*param_1 + 0x110))(&local_110,param_1);
            ppcStack_148 = &local_f8;
            pppcStack_138 = &local_150;
            local_140 = ": Received ";
            local_150 = &local_110;
            FUN_00c6dac8(&local_168,(short)plVar8[4]);
            local_128 = &local_140;
            pppcStack_118 = &local_130;
            local_120 = " with bad local username ";
            ppcVar23 = &local_180;
            local_130 = &local_168;
            FUN_007e924c(&local_180,param_4);
            ppcVar18 = &local_c8;
            pcVar14 = *local_128;
            ppcVar13 = *(char ***)local_128[1];
            puVar1 = *(undefined8 **)(local_128[1] + 8);
            pcVar11 = (char *)*puVar1;
            uVar22 = *(undefined4 *)(puVar1 + 1);
            pcVar15 = " from ";
            ppcVar16 = local_130;
            pcVar17 = local_120;
LAB_00cfad94:
            FUN_00623bb0("\r\n\t\n\t\n\t\n",pcVar11,uVar22,ppcVar13,pcVar14,ppcVar16,pcVar17,
                         ppcVar18,pcVar15,ppcVar23);
            if (cStack_169 < '\0') {
              operator_delete(local_180);
            }
            if (cStack_151 < '\0') {
              operator_delete(local_168);
            }
          }
        }
        else {
          ppcVar23 = (char **)(param_1 + 0x13);
          iVar6 = FUN_00c6a0c0(plVar8,param_1 + 0x13);
          if (iVar6 == 2) {
            if (local_b0 != puStack_a8) {
              FUN_00cfb184(param_1,plVar8,param_4,&local_b0);
              goto LAB_00cfb0f0;
            }
            FUN_00411268(param_6,&local_e0);
            goto LAB_00cfb0d4;
          }
          uVar7 = FUN_004249b0();
          if ((uVar7 & 1) == 0) {
            local_f8 = "../../p2p/base/port.cc";
            local_f0 = 0x1013;
            local_e8 = &local_140;
            (**(code **)(*param_1 + 0x110))(&local_110,param_1);
            local_128 = &local_f8;
            pppcStack_118 = &local_130;
            local_120 = ": Received ";
            local_130 = &local_110;
            FUN_00c6dac8(&local_168,(short)plVar8[4]);
            FUN_007e924c(&local_180,param_4);
            ppcVar18 = &local_180;
            ppcVar13 = *pppcStack_118;
            pcVar15 = ", password_=";
            pcVar11 = *pppcStack_118[1];
            uVar22 = *(undefined4 *)(pppcStack_118[1] + 1);
            pcVar14 = local_120;
            ppcVar16 = &local_168;
            pcVar17 = " with bad M-I from ";
            goto LAB_00cfad94;
          }
        }
        sVar9 = strlen("Unauthorized");
        (**(code **)(*param_1 + 0xb0))(param_1,plVar8,param_4,0x191,"Unauthorized",sVar9);
      }
    }
    else {
      if (uVar5 != 0x11) {
        if (uVar5 == 0x101) goto LAB_00cfa908;
        goto LAB_00cfa728;
      }
      uVar7 = FUN_0044075c();
      if ((uVar7 & 1) == 0) {
        local_c8 = "../../p2p/base/port.cc";
        local_c0 = 0x1198;
        local_b8 = &local_120;
        (**(code **)(*param_1 + 0x110))(&local_e0,param_1);
        local_178 = &local_c8;
        ppcStack_160 = &local_180;
        local_168 = ": Received ";
        local_180 = (char *)&local_e0;
        FUN_00c6dac8(&local_f8,(short)plVar8[4]);
        FUN_007e924c(&local_110,param_4);
        FUN_00623bb0("\r\n\t\n\t\n",*(undefined8 *)ppcStack_160[1],
                     *(undefined4 *)(ppcStack_160[1] + 8),*ppcStack_160,local_168,&local_f8,
                     ": from ",&local_110);
      }
      if (*(char *)((long)param_6 + 0x17) < '\0') {
        *(undefined1 *)*param_6 = 0;
        param_6[1] = 0;
      }
      else {
        *(undefined1 *)param_6 = 0;
        *(undefined1 *)((long)param_6 + 0x17) = 0;
      }
      if (local_b0 == puStack_a8) goto LAB_00cfb0d4;
      uVar7 = FUN_004249b0();
      if ((uVar7 & 1) != 0) goto LAB_00cfb0f0;
      (**(code **)(*param_1 + 0x110))(&local_c8,param_1);
      pcVar15 = ": Discarding STUN indication due to unknown comprehension-required attribute";
      uVar12 = 0x11db;
LAB_00cfae78:
      FUN_00623bb0(&DAT_00223e94,"../../p2p/base/port.cc",uVar12,&local_c8,pcVar15);
    }
  }
  else if (uVar5 < 0x300) {
    if (uVar5 != 0x111) {
      if (uVar5 == 0x200) {
        iVar6 = FUN_00c6a0c0(plVar8,param_1 + 0x13);
        if (iVar6 != 2) {
          uVar7 = FUN_004249b0();
          if ((uVar7 & 1) == 0) {
            local_c8 = "../../p2p/base/port.cc";
            local_c0 = 0x122b;
            local_b8 = &local_120;
            (**(code **)(*param_1 + 0x110))(&local_e0,param_1);
            local_178 = &local_c8;
            ppcStack_160 = &local_180;
            local_168 = ": Received ";
            local_180 = (char *)&local_e0;
            FUN_00c6dac8(&local_f8,(short)plVar8[4]);
            FUN_007e924c(&local_110,param_4);
            FUN_00623bb0("\r\n\t\n\t\n\t\n",*(undefined8 *)ppcStack_160[1],
                         *(undefined4 *)(ppcStack_160[1] + 8),*ppcStack_160,local_168,&local_f8,
                         " with bad M-I from ",&local_110,", password_=",param_1 + 0x13);
          }
          pcVar15 = "Unauthorized";
          sVar9 = strlen("Unauthorized");
          lVar20 = *param_1;
          uVar12 = 0x191;
          goto LAB_00cfabc0;
        }
        uVar7 = FUN_0044075c();
        if ((uVar7 & 1) == 0) {
          lVar20 = *param_1;
          local_c0 = 0x1268;
          goto LAB_00cfa5fc;
        }
        goto LAB_00cfac10;
      }
      goto LAB_00cfa728;
    }
    lVar20 = FUN_00c6a048(plVar8);
    uVar7 = FUN_004249b0();
    if (lVar20 == 0) {
      if ((uVar7 & 1) == 0) {
        local_c8 = "../../p2p/base/port.cc";
        local_c0 = 0x1103;
        local_b8 = &local_120;
        (**(code **)(*param_1 + 0x110))(&local_e0,param_1);
        local_178 = &local_c8;
        ppcStack_160 = &local_180;
        local_168 = ": Received ";
        local_180 = (char *)&local_e0;
        FUN_00c6dac8(&local_f8,(short)plVar8[4]);
        FUN_007e924c(&local_110,param_4);
        FUN_00623bb0("\r\n\t\n\t\n",*(undefined8 *)ppcStack_160[1],
                     *(undefined4 *)(ppcStack_160[1] + 8),*ppcStack_160,local_168,&local_f8,
                     " without a error code from ",&local_110);
      }
    }
    else {
      if ((uVar7 & 1) == 0) {
        local_c8 = "../../p2p/base/port.cc";
        local_c0 = 0x10c3;
        local_b8 = (char **)&uStack_1a1;
        (**(code **)(*param_1 + 0x110))(&local_e0,param_1);
        ppcStack_198 = &local_c8;
        ppuStack_188 = &local_1a0;
        local_190 = ": Received ";
        local_1a0 = &local_e0;
        FUN_00c6dac8(&local_f8,(short)plVar8[4]);
        ppcStack_148 = &local_190;
        pppcStack_138 = &local_150;
        local_140 = ": class=";
        local_128 = &local_140;
        local_130 = (char **)(ulong)*(byte *)(lVar20 + 0xc);
        pppcStack_118 = &local_130;
        local_120 = " number=";
        local_178 = &local_120;
        local_180 = (char *)(ulong)*(byte *)(lVar20 + 0xd);
        ppcStack_160 = &local_180;
        local_168 = " reason=\'";
        local_150 = &local_f8;
        FUN_007e924c(&local_110,param_4);
        puVar21 = *(undefined8 **)(local_178[1] + 8);
        puVar1 = (undefined8 *)puVar21[1];
        puVar2 = (undefined8 *)puVar1[1];
        puVar3 = (undefined8 *)puVar2[1];
        puVar4 = (undefined8 *)puVar3[1];
        FUN_00623bb0(&DAT_0025a696,*puVar4,*(undefined4 *)(puVar4 + 1),*puVar3,*puVar2,*puVar1,
                     *puVar21,*(undefined4 *)local_178[1],*local_178,
                     CONCAT44(uVar22,local_180._0_4_),local_168,lVar20 + 0x10,"\' from ",&local_110)
        ;
      }
LAB_00cfa908:
      if (local_b0 == puStack_a8) goto LAB_00cfac10;
      uVar7 = FUN_004249b0();
      if ((uVar7 & 1) == 0) {
        (**(code **)(*param_1 + 0x110))(&local_c8,param_1);
        pcVar15 = ": Discarding STUN response due to unknown comprehension-required attribute";
        uVar12 = 0x115b;
        goto LAB_00cfae78;
      }
    }
  }
  else if ((uVar5 == 0x300) || (uVar5 == 0x310)) {
    uVar7 = FUN_0044075c();
    if ((uVar7 & 1) == 0) {
      lVar20 = *param_1;
      local_c0 = 0x12a0;
LAB_00cfa5fc:
      local_c8 = "../../p2p/base/port.cc";
      local_b8 = &local_120;
      (**(code **)(lVar20 + 0x110))(&local_e0,param_1);
      local_178 = &local_c8;
      ppcStack_160 = &local_180;
      local_168 = ": Received ";
      local_180 = (char *)&local_e0;
      FUN_00c6dac8(&local_f8,(short)plVar8[4]);
      FUN_007e924c(&local_110,param_4);
      FUN_00623bb0("\r\n\t\n\t\n",*(undefined8 *)ppcStack_160[1],
                   *(undefined4 *)(ppcStack_160[1] + 8),*ppcStack_160,local_168,&local_f8," from ",
                   &local_110);
    }
LAB_00cfac10:
    if (*(char *)((long)param_6 + 0x17) < '\0') {
      *(undefined1 *)*param_6 = 0;
      param_6[1] = 0;
    }
    else {
      *(undefined1 *)param_6 = 0;
      *(undefined1 *)((long)param_6 + 0x17) = 0;
    }
LAB_00cfb0d4:
    plVar10 = (long *)*param_5;
    *param_5 = (long)plVar8;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    plVar8 = (long *)0x0;
  }
  else {
LAB_00cfa728:
    uVar7 = FUN_004249b0();
    if ((uVar7 & 1) == 0) {
      local_c8 = "../../p2p/base/port.cc";
      local_c0 = 0x12cb;
      local_b8 = &local_180;
      (**(code **)(*param_1 + 0x110))(&local_e0,param_1);
      ppcStack_160 = &local_c8;
      ppcStack_108 = &local_168;
      lVar20 = plVar8[4];
      local_110 = ": Received STUN packet with invalid type (";
      local_168 = (char *)&local_e0;
      FUN_007e924c(&local_f8,param_4);
      FUN_00623bb0(&DAT_00259907,*ppcStack_160,*(undefined4 *)(ppcStack_160 + 1),local_168,local_110
                   ,(short)lVar20,") from ",&local_f8);
    }
  }
LAB_00cfb0f0:
  if (local_b0 != (undefined1 *)0x0) {
    uVar7 = (ulong)(((long)local_b0 - (long)puStack_a8 << 0x3f) -
                   ((long)local_b0 - (long)puStack_a8)) >> 1;
    if ((ulong)(puStack_a8 + ((long)puStack_a8 << 0x3f) + -2) >> 1 <= uVar7) {
      uVar7 = (ulong)(puStack_a8 + ((long)puStack_a8 << 0x3f) + -2) >> 1;
    }
    puVar19 = puStack_a8;
    if ((1 < uVar7) && ((((int)local_b0 - (uint)puStack_a8 | (uint)puStack_a8) & 1) == 0)) {
      uVar7 = uVar7 & 0x7ffffffffffffffe;
      puVar19 = puStack_a8 + uVar7 * -2;
      do {
        uVar7 = uVar7 - 2;
      } while (uVar7 != 0);
    }
    while (puVar19 != local_b0) {
      puVar19 = puVar19 + -2;
      if (puVar19 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    puStack_a8 = local_b0;
    operator_delete(local_b0);
  }
  uVar22 = 1;
joined_r0x00cfa574:
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))(plVar8);
  }
  return uVar22;
}


// ===== 00cfb184  FUN_00cfb184 =====

void FUN_00cfb184(long *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined2 *puVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined2 *puVar9;
  void *local_1b0 [2];
  char cStack_199;
  void *local_198 [2];
  char cStack_181;
  undefined1 uStack_179;
  char *local_178;
  ulong local_170;
  undefined1 *local_168;
  void **local_160;
  char **ppcStack_158;
  undefined1 *local_150;
  undefined1 *puStack_148;
  undefined8 local_140;
  undefined1 *puStack_138;
  undefined1 *puStack_130;
  undefined1 *puStack_128;
  undefined1 *local_120;
  undefined1 *puStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined1 *local_100;
  undefined1 *puStack_f8;
  undefined1 *puStack_f0;
  undefined1 *puStack_e8;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined1 *local_d0;
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
  undefined1 *puStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  
  lVar8 = (long)*(char *)(param_2 + 0x3f);
  if (lVar8 < 0) {
    lVar7 = *(long *)(param_2 + 0x28);
    lVar8 = *(long *)(param_2 + 0x30);
  }
  else {
    lVar7 = param_2 + 0x28;
  }
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
  FUN_00c69b48(&local_c0,0x111,lVar7,lVar8);
  uVar4 = FUN_00c6bafc();
  FUN_00c6ceac(uVar4,0x1a4);
  FUN_005d3510(&local_150,PTR_s_Unknown_Attribute_00d52cd8);
  FUN_00c6ced8(uVar4,&local_150);
  if (local_140._7_1_ < '\0') {
    operator_delete(local_150);
  }
  FUN_00c69d80(&local_c0,uVar4);
  uVar4 = FUN_00c6bba0();
  puVar1 = (undefined2 *)param_4[1];
  for (puVar9 = (undefined2 *)*param_4; puVar9 != puVar1; puVar9 = puVar9 + 1) {
    FUN_00c6d4ac(uVar4,*puVar9);
  }
  FUN_00c69d80(&local_c0,uVar4);
  lVar8 = (long)*(char *)((long)param_1 + 0xaf);
  if (lVar8 < 0) {
    plVar6 = (long *)param_1[0x13];
    lVar8 = param_1[0x14];
  }
  else {
    plVar6 = param_1 + 0x13;
  }
  FUN_00c6a5dc(&local_c0,plVar6,lVar8);
  FUN_00c6ae6c(&local_c0);
  local_d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_e0 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_008792d8(&local_e0);
  FUN_00c6a9c0(&local_c0,&local_e0);
  puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
  local_140 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_130 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
  local_120 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_110 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
  local_100 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_f0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_148 = &DAT_aaaaaaaaaaaaaaaa;
  local_150 = &DAT_aaaaaaaaaaaaaaaa;
  uVar3 = (**(code **)(*param_1 + 0x170))(param_1);
  FUN_00897b90(&local_150,uVar3);
  uStack_110 = (undefined1 *)CONCAT44(3,(undefined4)uStack_110);
  (**(code **)(*param_1 + 0x90))(param_1,local_d0,local_e0,param_3,&local_150,0);
  uVar5 = FUN_004249b0();
  if ((uVar5 & 1) == 0) {
    local_178 = "../../p2p/base/port.cc";
    local_170 = 0x1a23;
    local_168 = &uStack_179;
    (**(code **)(*param_1 + 0x110))(local_198,param_1);
    ppcStack_158 = &local_178;
    local_160 = local_198;
    FUN_007e924c(local_1b0,param_3);
    FUN_00623bb0(&DAT_0025a6ac,local_178,local_170 & 0xffffffff,local_160,
                 ": Sending STUN binding error: reason=",0x1a4,&DAT_0019fec4,local_1b0);
    if (cStack_199 < '\0') {
      operator_delete(local_1b0[0]);
    }
    if (cStack_181 < '\0') {
      operator_delete(local_198[0]);
    }
  }
  FUN_00897c8c(&local_150);
  puVar2 = local_d0;
  local_d0 = (undefined1 *)0x0;
  if (puVar2 != (undefined1 *)0x0) {
    operator_delete__(puVar2);
  }
  FUN_00c6e5fc(&local_c0);
  return;
}


// ===== 00cfb3f8  FUN_00cfb3f8 =====

undefined8 FUN_00cfb3f8(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined1 *puStack_30;
  undefined1 *puStack_28;
  
  puStack_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_28 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_30 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00bca960(&local_40,*(undefined8 *)(param_1 + 0x50));
  if (*(int *)(param_2 + 0x20) == (int)puStack_38) {
    if (*(int *)(param_2 + 0x20) == 10) {
      uVar1 = FUN_007ea660(&local_40);
      FUN_007e8ea8(param_2);
      uVar2 = FUN_007ea660();
      if (((uVar1 ^ uVar2) & 1) != 0) goto LAB_00cfb45c;
    }
    uVar3 = 1;
  }
  else {
LAB_00cfb45c:
    uVar3 = 0;
  }
  return uVar3;
}


// ===== 00cfb47c  FUN_00cfb47c =====

undefined8 FUN_00cfb47c(void)

{
  return 0xffffffff;
}


