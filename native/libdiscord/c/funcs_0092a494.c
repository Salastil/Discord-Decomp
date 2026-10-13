// ===== 0092a494  FUN_0092a494 =====

void FUN_0092a494(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = DAT_001f5208;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 1) = 0xd;
  param_1[2] = 0;
  param_1[3] = uVar1;
  *(undefined4 *)(param_1 + 4) = 8;
  param_1[5] = 0;
  return;
}


// ===== 0092a4c8  FUN_0092a4c8 =====

void FUN_0092a4c8(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0092a4e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}


// ===== 0092a4ec  FUN_0092a4ec =====

undefined8 * FUN_0092a4ec(long *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  void *pvVar6;
  long lVar7;
  long *plVar8;
  
  puVar5 = (undefined8 *)operator_new(0x68);
  lVar7 = *param_1;
  *puVar5 = &PTR_FUN_00d3dc48;
  if ((((lVar7 == 1) && ((long *)param_1[2] != (long *)0x0)) &&
      (lVar7 = (**(code **)(*(long *)param_1[2] + 0x18))(), lVar7 == 1)) &&
     ((iVar1 = *(int *)((long)param_1 + 0x1c), iVar3 = (**(code **)(*(long *)param_1[2] + 0x30))(),
      iVar1 + iVar3 * -10 < 0 == SBORROW4(iVar1,iVar3 * 10) &&
      (iVar1 = (int)param_1[4], iVar1 - 1U < 0xc)))) {
    plVar8 = (long *)param_1[2];
    uVar2 = *(undefined4 *)((long)param_1 + 0x1c);
    lVar7 = param_1[5];
    param_1[2] = 0;
    *(int *)(puVar5 + 2) = (int)param_1[1];
    *(int *)((long)puVar5 + 0x14) = iVar1;
    puVar5[1] = plVar8;
    *(undefined4 *)(puVar5 + 3) = uVar2;
    *(undefined1 *)(puVar5 + 10) = 1;
    puVar5[5] = 0;
    puVar5[4] = 0;
    puVar5[7] = 0;
    puVar5[6] = 0;
    puVar5[9] = 0;
    puVar5[8] = 0;
    if (lVar7 == 0) {
      lVar7 = FUN_0092b1bc((int)param_1[3]);
    }
    puVar5[0xb] = lVar7;
    pvVar6 = operator_new(0x68);
    uVar4 = (**(code **)(*plVar8 + 0x10))(plVar8);
    FUN_00926fe0(pvVar6,uVar4,uVar2,iVar1);
    puVar5[0xc] = pvVar6;
    (**(code **)(*plVar8 + 0x40))(plVar8);
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../modules/audio_coding/codecs/cng/audio_encoder_cng.cc",0x55,"config.IsOk()",
               &DAT_001fbee0,"Invalid configuration.");
}


// ===== 0092a644  FUN_0092a644 =====

void FUN_0092a644(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0092a654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x10))();
  return;
}


// ===== 0092a658  FUN_0092a658 =====

void FUN_0092a658(long param_1)

{
  void *pvVar1;
  long *plVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  
  pvVar1 = *(void **)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
  }
  plVar2 = *(long **)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  pvVar1 = *(void **)(param_1 + 0x38);
  if (pvVar1 == (void *)0x0) {
LAB_0092a718:
    pvVar1 = *(void **)(param_1 + 0x20);
    if (pvVar1 == (void *)0x0) {
LAB_0092a7a0:
      plVar2 = *(long **)(param_1 + 8);
      *(undefined8 *)(param_1 + 8) = 0;
      if (plVar2 == (long *)0x0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x0092a7c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 8))();
      return;
    }
    pvVar3 = *(void **)(param_1 + 0x28);
    uVar5 = (ulong)((long)pvVar3 + ((long)pvVar3 << 0x3f) + -2) >> 1;
    uVar4 = (ulong)(((long)pvVar1 - (long)pvVar3 << 0x3f) - ((long)pvVar1 - (long)pvVar3)) >> 1;
    if (uVar5 <= uVar4) {
      uVar4 = uVar5;
    }
    if ((1 < uVar4) && ((((int)pvVar1 - (uint)pvVar3 | (uint)pvVar3) & 1) == 0)) {
      uVar4 = uVar4 & 0x7ffffffffffffffe;
      pvVar3 = (void *)((long)pvVar3 + uVar4 * -2);
      do {
        uVar4 = uVar4 - 2;
      } while (uVar4 != 0);
    }
    do {
      if (pvVar3 == pvVar1) {
        *(void **)(param_1 + 0x28) = pvVar1;
        operator_delete(pvVar1);
        goto LAB_0092a7a0;
      }
      pvVar3 = (void *)((long)pvVar3 + -2);
    } while (pvVar3 != (void *)0x0);
  }
  else {
    pvVar3 = *(void **)(param_1 + 0x40);
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
    do {
      if (pvVar3 == pvVar1) {
        *(void **)(param_1 + 0x40) = pvVar1;
        operator_delete(pvVar1);
        goto LAB_0092a718;
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


// ===== 0092a7d4  FUN_0092a7d4 =====

void FUN_0092a7d4(void *param_1)

{
  FUN_0092a658();
  operator_delete(param_1);
  return;
}


// ===== 0092a804  FUN_0092a804 =====

undefined8 FUN_0092a804(void)

{
  return 1;
}


// ===== 0092a810  FUN_0092a810 =====

void FUN_0092a810(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0092a820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x20))();
  return;
}


// ===== 0092a824  FUN_0092a824 =====

void FUN_0092a824(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0092a834. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x28))();
  return;
}


// ===== 0092a838  FUN_0092a838 =====

void FUN_0092a838(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0092a848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x30))();
  return;
}


// ===== 0092a84c  FUN_0092a84c =====

void FUN_0092a84c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0092a85c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x38))();
  return;
}


// ===== 0092a860  FUN_0092a860 =====

void FUN_0092a860(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  void *pvVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  (**(code **)(**(long **)(param_1 + 8) + 0x40))();
  lVar1 = *(long *)(param_1 + 0x20);
  lVar5 = *(long *)(param_1 + 0x28);
  uVar8 = (lVar5 + (lVar5 << 0x3f)) - 2U >> 1;
  uVar7 = (ulong)((lVar1 - lVar5 << 0x3f) - (lVar1 - lVar5)) >> 1;
  if (uVar8 <= uVar7) {
    uVar7 = uVar8;
  }
  if ((1 < uVar7) && ((((int)lVar1 - (uint)lVar5 | (uint)lVar5) & 1) == 0)) {
    uVar7 = uVar7 & 0x7ffffffffffffffe;
    lVar5 = lVar5 + uVar7 * -2;
    do {
      uVar7 = uVar7 - 2;
    } while (uVar7 != 0);
  }
  while (lVar5 != lVar1) {
    lVar5 = lVar5 + -2;
    if (lVar5 == 0) goto LAB_0092a8e0;
  }
  lVar5 = *(long *)(param_1 + 0x38);
  lVar6 = *(long *)(param_1 + 0x40);
  *(long *)(param_1 + 0x28) = lVar1;
  uVar8 = (lVar6 - (lVar6 << 0x3e)) - 4U >> 2;
  uVar7 = (ulong)((lVar5 - lVar6 << 0x3e) - (lVar5 - lVar6)) >> 2;
  if (uVar8 <= uVar7) {
    uVar7 = uVar8;
  }
  if ((1 < uVar7) && ((((int)lVar5 - (int)lVar6 | -(int)lVar6) & 3U) == 0)) {
    uVar7 = uVar7 & 0x3ffffffffffffffe;
    lVar6 = lVar6 + uVar7 * -4;
    do {
      uVar7 = uVar7 - 2;
    } while (uVar7 != 0);
  }
  do {
    if (lVar6 == lVar5) {
      *(long *)(param_1 + 0x40) = lVar5;
      *(undefined1 *)(param_1 + 0x50) = 1;
      (**(code **)(**(long **)(param_1 + 0x58) + 0x18))();
      pvVar3 = operator_new(0x68);
      uVar2 = (**(code **)(**(long **)(param_1 + 8) + 0x10))(*(long **)(param_1 + 8));
      FUN_00926fe0(pvVar3,uVar2,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x14));
      pvVar4 = *(void **)(param_1 + 0x60);
      *(void **)(param_1 + 0x60) = pvVar3;
      if (pvVar4 == (void *)0x0) {
        return;
      }
      operator_delete(pvVar4);
      return;
    }
    lVar6 = lVar6 + -4;
  } while (lVar6 != 0);
LAB_0092a8e0:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 0092a9dc  FUN_0092a9dc =====

void FUN_0092a9dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0092a9ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x48))();
  return;
}


// ===== 0092a9f0  FUN_0092a9f0 =====

void FUN_0092a9f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0092aa00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x50))();
  return;
}


// ===== 0092aa04  FUN_0092aa04 =====

void FUN_0092aa04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0092aa14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x60))();
  return;
}


// ===== 0092aa18  FUN_0092aa18 =====

void FUN_0092aa18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0092aa28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x68))();
  return;
}


// ===== 0092aa2c  FUN_0092aa2c =====

undefined1  [16] FUN_0092aa2c(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 1;
  auVar1._0_8_ = param_1 + 8;
  return auVar1;
}


// ===== 0092aa3c  FUN_0092aa3c =====

void FUN_0092aa3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0092aa4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x90))();
  return;
}


// ===== 0092aa50  FUN_0092aa50 =====

void FUN_0092aa50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0092aa60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0xa8))();
  return;
}


// ===== 0092aa64  FUN_0092aa64 =====

void FUN_0092aa64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0092aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0xd8))();
  return;
}


// ===== 0092aa78  FUN_0092aa78 =====

void FUN_0092aa78(undefined8 *param_1,long param_2,undefined4 param_3,long param_4,long param_5,
                 undefined8 param_6)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  void *pvVar12;
  ulong uVar13;
  size_t sVar14;
  ulong uVar15;
  long lVar16;
  byte bVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  undefined8 in_stack_ffffffffffffff00;
  undefined4 uVar21;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  undefined1 *puStack_a8;
  undefined4 local_94;
  undefined1 *local_90;
  undefined8 uStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  
  uVar21 = (undefined4)((ulong)in_stack_ffffffffffffff00 >> 0x20);
  local_94 = param_3;
  iVar3 = (**(code **)(**(long **)(param_2 + 8) + 0x10))();
  iVar3 = iVar3 * 10;
  if (iVar3 % 1000 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../rtc_base/checks.h",0x1e6,"a % b == 0",&DAT_001ff3f8,iVar3 % 1000,0,iVar3,
                 " is not evenly divisible by ",CONCAT44(uVar21,1000));
  }
  lVar18 = (long)(iVar3 / 1000);
  plVar10 = (long *)(param_2 + 0x20);
  plVar20 = (long *)(param_2 + 0x38);
  puVar5 = *(undefined4 **)(param_2 + 0x40);
  if (*(long *)(param_2 + 0x28) - *plVar10 >> 1 != ((long)puVar5 - *plVar20 >> 2) * lVar18) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../modules/audio_coding/codecs/cng/audio_encoder_cng.cc",0x84,
                 "speech_buffer_.size() == rtp_timestamps_.size() * samples_per_10ms_frame",
                 &DAT_001fb920);
  }
  if (puVar5 < *(undefined4 **)(param_2 + 0x48)) {
    if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    puVar8 = puVar5 + 1;
    *puVar5 = param_3;
  }
  else {
    puVar8 = (undefined4 *)FUN_00852528(plVar20,&local_94);
  }
  *(undefined4 **)(param_2 + 0x40) = puVar8;
  FUN_006ce204(plVar10,*(undefined8 *)(param_2 + 0x28),param_4,param_4 + param_5 * 2,
               (param_5 << 1) >> 1);
  uVar6 = (**(code **)(**(long **)(param_2 + 8) + 0x28))();
  if ((ulong)(*(long *)(param_2 + 0x40) - *(long *)(param_2 + 0x38) >> 2) < uVar6) {
    FUN_00666a9c(param_1);
    return;
  }
  if (0x3c < uVar6 * 10) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../modules/audio_coding/codecs/cng/audio_encoder_cng.cc",0x8c,
                 "frames_to_encode * 10 <= kMaxFrameSizeMs",&DAT_00226858,uVar6 * 10,0x3c,
                 "Frame size cannot be larger than ",0x3c," ms when using VAD/CNG.");
  }
  lVar11 = *(long *)(param_2 + 0x20);
  uVar15 = uVar6;
  if (2 < uVar6) {
    uVar15 = 3;
  }
  uVar13 = 2;
  if (uVar6 != 4) {
    uVar13 = uVar15;
  }
  if (*(long *)(param_2 + 0x28) == lVar11) {
LAB_0092b05c:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
              );
  }
  uVar15 = uVar13 * lVar18;
  plVar19 = *(long **)(param_2 + 0x58);
  uVar4 = (**(code **)(**(long **)(param_2 + 8) + 0x10))();
  iVar3 = (**(code **)(*plVar19 + 0x10))(plVar19,lVar11,uVar15,uVar4);
  if ((uVar6 - uVar13 != 0) && (iVar3 == 0)) {
    lVar11 = *(long *)(param_2 + 0x20);
    if ((ulong)(*(long *)(param_2 + 0x28) - lVar11 >> 1) <= uVar15) goto LAB_0092b05c;
    plVar19 = *(long **)(param_2 + 0x58);
    uVar4 = (**(code **)(**(long **)(param_2 + 8) + 0x10))();
    iVar3 = (**(code **)(*plVar19 + 0x10))
                      (plVar19,lVar11 + uVar15 * 2,(uVar6 - uVar13) * lVar18,uVar4);
  }
  param_1[3] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[5] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[4] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  *param_1 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00666a9c(param_1);
  if (iVar3 == 1) {
    iVar3 = (**(code **)(**(long **)(param_2 + 8) + 0x10))();
    iVar3 = iVar3 * 10;
    iVar9 = iVar3 % 1000;
    if (iVar9 != 0) goto LAB_0092b158;
    puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
    local_c0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_a8 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_b0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
    local_d0 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00666a9c(&local_d0);
    if (uVar6 != 0) {
      lVar16 = (long)(iVar3 / 1000);
      lVar11 = 0;
      uVar15 = -lVar16;
      uVar13 = uVar6;
      while (*(undefined4 **)(param_2 + 0x38) != *(undefined4 **)(param_2 + 0x40)) {
        uVar15 = uVar15 + lVar16;
        if ((ulong)(*(long *)(param_2 + 0x28) - *(long *)(param_2 + 0x20) >> 1) <= uVar15)
        goto LAB_0092b05c;
        lVar1 = 0;
        if (0x7ce < iVar3 + 999U) {
          lVar1 = lVar11 + *(long *)(param_2 + 0x20);
        }
        uVar13 = uVar13 - 1;
        FUN_00666d38(&local_90,*(undefined8 *)(param_2 + 8),**(undefined4 **)(param_2 + 0x38),lVar1,
                     lVar16,param_6);
        FUN_00666c18(&local_d0,&local_90);
        FUN_00666afc(&local_90);
        if (uVar13 == 0) {
          if (local_d0 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0061fd88("../../modules/audio_coding/codecs/cng/audio_encoder_cng.cc",0x11e,
                         "info.encoded_bytes > 0",&DAT_0022685f,0,0,"Encoder didn\'t deliver data.")
            ;
          }
          goto LAB_0092aee4;
        }
        lVar11 = lVar11 + lVar16 * 2;
        if (local_d0 != (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0061fd88("../../modules/audio_coding/codecs/cng/audio_encoder_cng.cc",0x120,
                       "info.encoded_bytes == 0",&DAT_0022685f,local_d0,0,
                       "Encoder delivered data too early.");
        }
      }
      goto LAB_0092b078;
    }
LAB_0092aee4:
    FUN_00666c18(param_1,&local_d0);
    FUN_00666afc(&local_d0);
    *(undefined1 *)(param_2 + 0x50) = 1;
  }
  else {
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0061ff28();
    }
    bVar17 = *(byte *)(param_2 + 0x50);
    iVar3 = (**(code **)(**(long **)(param_2 + 8) + 0x10))();
    iVar3 = iVar3 * 10;
    iVar9 = iVar3 % 1000;
    if (iVar9 != 0) {
LAB_0092b158:
                    /* WARNING: Subroutine does not return */
      FUN_0061fd88("../../rtc_base/checks.h",0x1e6,"a % b == 0",&DAT_001ff3f8,iVar9,0,iVar3,
                   " is not evenly divisible by ",CONCAT44(uVar21,1000));
    }
    puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
    local_80 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
    uStack_88 = &DAT_aaaaaaaaaaaaaaaa;
    local_90 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00666a9c(&local_90);
    if (uVar6 != 0) {
      lVar16 = (long)(iVar3 / 1000);
      lVar11 = 0;
      bVar2 = false;
      uVar15 = -lVar16;
      uVar13 = uVar6;
      do {
        uVar15 = uVar15 + lVar16;
        if ((ulong)(*(long *)(param_2 + 0x28) - *(long *)(param_2 + 0x20) >> 1) <= uVar15)
        goto LAB_0092b05c;
        lVar1 = 0;
        if (0x7ce < iVar3 + 999U) {
          lVar1 = lVar11 + *(long *)(param_2 + 0x20);
        }
        puVar7 = (undefined1 *)
                 FUN_00927080(*(undefined8 *)(param_2 + 0x60),lVar1,lVar16,bVar17 & 1,param_6);
        if (puVar7 != (undefined1 *)0x0) {
          if (bVar2) {
                    /* WARNING: Subroutine does not return */
            FUN_0061fd88("../../modules/audio_coding/codecs/cng/audio_encoder_cng.cc",0x105,
                         "!output_produced",&DAT_001f5fa0);
          }
          bVar17 = 0;
          bVar2 = true;
          local_90 = puVar7;
        }
        uVar13 = uVar13 - 1;
        lVar11 = lVar11 + lVar16 * 2;
      } while (uVar13 != 0);
    }
    if (*(undefined4 **)(param_2 + 0x38) == *(undefined4 **)(param_2 + 0x40)) {
LAB_0092b078:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__vector/vector.h:431: libc++ Hardening assertion !empty() failed: front() called on an empty vector\n"
                );
    }
    uStack_88 = (undefined1 *)
                CONCAT44(*(undefined4 *)(param_2 + 0x10),**(undefined4 **)(param_2 + 0x38));
    local_80 = (undefined1 *)CONCAT62(local_80._2_6_,1);
    FUN_00666c18(param_1,&local_90);
    FUN_00666afc(&local_90);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  pvVar12 = (void *)*plVar10;
  lVar11 = lVar18 * uVar6 * 2;
  if (pvVar12 <= (void *)((long)pvVar12 + lVar11)) {
    if (lVar11 == 0) {
LAB_0092afac:
      pvVar12 = (void *)*plVar20;
      lVar18 = uVar6 * 4;
      if ((void *)((long)pvVar12 + lVar18) < pvVar12) goto LAB_0092b0b8;
      if (lVar18 == 0) {
        return;
      }
      lVar16 = *(long *)(param_2 + 0x40);
      sVar14 = lVar16 - ((long)pvVar12 + lVar18);
      memmove(pvVar12,(void *)((long)pvVar12 + lVar18),sVar14);
      lVar11 = *(long *)(param_2 + 0x40);
      lVar18 = lVar16 - (lVar18 + lVar11);
      uVar6 = (ulong)((lVar18 << 0x3e) - lVar18) >> 2;
      uVar15 = (lVar11 - (lVar11 << 0x3e)) - 4U >> 2;
      if (uVar15 <= uVar6) {
        uVar6 = uVar15;
      }
      lVar18 = (long)pvVar12 + sVar14;
      if ((1 < uVar6) && ((((int)lVar16 - (int)lVar11 | -(int)lVar11) & 3U) == 0)) {
        uVar6 = uVar6 & 0x3ffffffffffffffe;
        lVar11 = lVar11 + uVar6 * -4;
        do {
          uVar6 = uVar6 - 2;
        } while (uVar6 != 0);
      }
      do {
        if (lVar11 == lVar18) {
          *(long *)(param_2 + 0x40) = lVar18;
          return;
        }
        lVar11 = lVar11 + -4;
      } while (lVar11 != 0);
    }
    else {
      lVar16 = *(long *)(param_2 + 0x28);
      sVar14 = lVar16 - ((long)pvVar12 + lVar11);
      memmove(pvVar12,(void *)((long)pvVar12 + lVar11),sVar14);
      lVar11 = *(long *)(param_2 + 0x28);
      uVar15 = (lVar16 - lVar11 << 0x3f) - ((lVar16 - lVar11) + lVar18 * uVar6 * -2) >> 1;
      uVar13 = (lVar11 + (lVar11 << 0x3f)) - 2U >> 1;
      if (uVar13 <= uVar15) {
        uVar15 = uVar13;
      }
      lVar18 = (long)pvVar12 + sVar14;
      if ((1 < uVar15) && ((((int)lVar16 - (uint)lVar11 | (uint)lVar11) & 1) == 0)) {
        uVar15 = uVar15 & 0x7ffffffffffffffe;
        lVar11 = lVar11 + uVar15 * -2;
        do {
          uVar15 = uVar15 - 2;
        } while (uVar15 != 0);
      }
      do {
        if (lVar11 == lVar18) {
          *(long *)(param_2 + 0x28) = lVar18;
          goto LAB_0092afac;
        }
        lVar11 = lVar11 + -2;
      } while (lVar11 != 0);
    }
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
LAB_0092b0b8:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__vector/vector.h:1170: libc++ Hardening assertion __first <= __last failed: vector::erase(first, last) called with invalid range\n"
            );
}


// ===== 0092b1bc  FUN_0092b1bc =====

undefined8 * FUN_0092b1bc(undefined4 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  *puVar1 = &PTR_FUN_00d3dd48;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 2) = param_1;
  FUN_0092b204();
  return puVar1;
}


// ===== 0092b204  FUN_0092b204 =====

void FUN_0092b204(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    free(*(void **)(param_1 + 8));
  }
  lVar3 = FUN_00655484();
  *(long *)(param_1 + 8) = lVar3;
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../common_audio/vad/vad.cc",0x34,"handle_",&DAT_001f5fa0);
  }
  iVar1 = thunk_FUN_00655618();
  if (iVar1 != 0) {
    uVar2 = thunk_FUN_00655618(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../common_audio/vad/vad.cc",0x35,"WebRtcVad_Init(handle_) == 0",&DAT_001fbedc,
                 uVar2,0);
  }
  iVar1 = FUN_006554b8(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (iVar1 == 0) {
    return;
  }
  uVar2 = FUN_006554b8(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../common_audio/vad/vad.cc",0x36,
               "WebRtcVad_set_mode(handle_, aggressiveness_) == 0",&DAT_001fbedc,uVar2,0);
}


// ===== 0092b2dc  FUN_0092b2dc =====

void FUN_0092b2dc(long param_1)

{
  free(*(void **)(param_1 + 8));
  return;
}


// ===== 0092b2e8  FUN_0092b2e8 =====

void FUN_0092b2e8(void *param_1)

{
  free(*(void **)((long)param_1 + 8));
  operator_delete(param_1);
  return;
}


// ===== 0092b31c  FUN_0092b31c =====

int FUN_0092b31c(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = FUN_006554d8(*(undefined8 *)(param_1 + 8),param_4,param_2,param_3);
  iVar2 = iVar3;
  if (iVar3 != 1) {
    iVar2 = -1;
  }
  iVar1 = 0;
  if (iVar3 != 0) {
    iVar1 = iVar2;
  }
  return iVar1;
}


// ===== 0092b35c  FUN_0092b35c =====

void FUN_0092b35c(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}


// ===== 0092b368  FUN_0092b368 =====

void FUN_0092b368(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0092b384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}


// ===== 0092b38c  FUN_0092b38c =====

/* WARNING: Removing unreachable block (ram,0x0092b524) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0092b38c(undefined8 *param_1,undefined4 *param_2,long *param_3)

{
  undefined8 *puVar1;
  char *****__s;
  ulong uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  void *pvVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  char ****local_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  ulong local_48;
  
  *param_1 = &PTR_FUN_00d3dd78;
  lVar5 = _UNK_001f24c8;
  lVar4 = _DAT_001f24c0;
  lVar10 = *(long *)(param_2 + 2);
  *(undefined8 *)(param_2 + 2) = 0;
  param_1[1] = lVar10;
  param_1[3] = lVar5;
  param_1[2] = lVar4;
  pvVar7 = operator_new__(0x4b0);
  param_1[4] = pvVar7;
  param_1[5] = 0x4b0;
  puVar1 = param_1 + 7;
  uVar3 = *param_2;
  param_1[7] = puVar1;
  param_1[8] = puVar1;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 6) = uVar3;
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../modules/audio_coding/codecs/red/audio_encoder_copy_red.cc",0x46,
                 "speech_encoder_",&DAT_001fbee0,"Speech encoder not provided.");
  }
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  local_90 = (char ****)&DAT_aaaaaaaaaaaaaaaa;
  (**(code **)(*param_3 + 0x10))(&local_90,param_3,"WebRTC-Audio-Red-For-Opus",0x19);
  local_48 = 0;
  __s = (char *****)local_90;
  if (-1 < (long)local_80) {
    __s = &local_90;
  }
  iVar6 = sscanf((char *)__s,"Enabled-%zu",&local_48);
  uVar2 = local_48;
  if ((long)local_80 < 0) {
    operator_delete(local_90);
  }
  if (9 < uVar2 || iVar6 != 1) {
    uVar2 = 1;
  }
  while( true ) {
    if (uVar2 == 0) {
      return;
    }
    puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
    local_90 = (char ****)&DAT_aaaaaaaaaaaaaaaa;
    puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
    local_80 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
    local_70 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00666a9c(&local_90);
    local_50 = (undefined1 *)operator_new__(0x4b0);
    puStack_58 = (undefined1 *)lVar5;
    local_60 = (undefined1 *)lVar4;
    plVar8 = (long *)operator_new(0x58);
    if (plVar8 == (long *)0x0) break;
    *plVar8 = 0;
    plVar8[1] = 0;
    FUN_00666ac0(plVar8 + 2,&local_90);
    plVar8[10] = (long)local_50;
    puVar9 = (undefined8 *)param_1[8];
    plVar8[9] = (long)puStack_58;
    plVar8[8] = (long)local_60;
    *plVar8 = (long)puVar1;
    plVar8[1] = (long)puVar9;
    *puVar9 = plVar8;
    param_1[8] = plVar8;
    param_1[9] = param_1[9] + 1;
    local_50 = (undefined1 *)0x0;
    puStack_58 = (undefined1 *)0x0;
    local_60 = (undefined1 *)0x0;
    FUN_00666afc(&local_90);
    uVar2 = uVar2 - 1;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0092b584  FUN_0092b584 =====

void FUN_0092b584(long param_1)

{
  void *pvVar1;
  long *plVar2;
  
  FUN_0092bec0(param_1 + 0x38);
  pvVar1 = *(void **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  plVar2 = *(long **)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0092b5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))();
    return;
  }
  return;
}


// ===== 0092b5e4  FUN_0092b5e4 =====

void FUN_0092b5e4(void *param_1)

{
  void *pvVar1;
  long *plVar2;
  
  FUN_0092bec0((long)param_1 + 0x38);
  pvVar1 = *(void **)((long)param_1 + 0x20);
  *(undefined8 *)((long)param_1 + 0x20) = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  plVar2 = *(long **)((long)param_1 + 8);
  *(undefined8 *)((long)param_1 + 8) = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  operator_delete(param_1);
  return;
}


// ===== 0092b640  FUN_0092b640 =====

void FUN_0092b640(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0092b650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x10))();
  return;
}


// ===== 0092b654  FUN_0092b654 =====

void FUN_0092b654(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0092b664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x18))();
  return;
}


// ===== 0092b668  FUN_0092b668 =====

void FUN_0092b668(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0092b678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x20))();
  return;
}


// ===== 0092b67c  FUN_0092b67c =====

void FUN_0092b67c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0092b68c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x28))();
  return;
}


// ===== 0092b690  FUN_0092b690 =====

void FUN_0092b690(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0092b6a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x30))();
  return;
}


// ===== 0092b6a4  FUN_0092b6a4 =====

void FUN_0092b6a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0092b6b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x38))();
  return;
}


// ===== 0092b6b8  FUN_0092b6b8 =====

void FUN_0092b6b8(ulong *param_1,long param_2,int param_3,undefined8 param_4,undefined8 param_5,
                 ulong *param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong *puVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  undefined8 uVar8;
  void *pvVar9;
  undefined8 *puVar10;
  ulong *puVar11;
  ulong uVar12;
  long lVar13;
  void *pvVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  size_t sVar18;
  size_t sVar19;
  long *plVar20;
  void *pvVar21;
  long *plVar22;
  undefined8 uVar23;
  
  *(undefined8 *)(param_2 + 0x10) = 0;
  uVar8 = *(undefined8 *)(param_2 + 8);
  param_1[1] = (ulong)&DAT_aaaaaaaaaaaaaaaa;
  *param_1 = (ulong)&DAT_aaaaaaaaaaaaaaaa;
  param_1[3] = (ulong)&DAT_aaaaaaaaaaaaaaaa;
  param_1[2] = (ulong)&DAT_aaaaaaaaaaaaaaaa;
  param_1[5] = (ulong)&DAT_aaaaaaaaaaaaaaaa;
  param_1[4] = (ulong)&DAT_aaaaaaaaaaaaaaaa;
  FUN_00666d38(uVar8);
  puVar11 = param_1 + 3;
  if (*puVar11 != param_1[4]) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../modules/audio_coding/codecs/red/audio_encoder_copy_red.cc",0x72,
                 "info.redundant.empty()",&DAT_001fbee0,"Cannot use nested redundant encoders.");
  }
  uVar12 = *param_1;
  if (uVar12 != 0) {
    if (uVar12 < 0x400) {
      plVar20 = *(long **)(param_2 + 0x40);
      if (plVar20 == (long *)(param_2 + 0x38)) {
        uVar15 = 1;
      }
      else {
        uVar15 = 1;
        uVar12 = *(long *)(param_2 + 0x28) - uVar12;
        do {
          if (((plVar20[2] == 0) ||
              (uVar1 = plVar20[2] + 4, bVar7 = uVar12 < uVar1, uVar12 = uVar12 - uVar1, bVar7)) ||
             ((uint)(param_3 - (int)plVar20[3]) >> 0xe != 0)) break;
          plVar20 = (long *)plVar20[1];
          uVar15 = uVar15 + 4;
        } while (plVar20 != (long *)(param_2 + 0x38));
      }
      uVar12 = param_6[1];
      if (uVar12 < uVar15) {
        uVar12 = uVar12 + (uVar12 >> 1);
        uVar1 = uVar15;
        if (uVar15 <= uVar12) {
          uVar1 = uVar12;
        }
        pvVar14 = operator_new__(uVar1);
        pvVar9 = (void *)param_6[2];
        if (pvVar9 == (void *)0x0) {
          param_6[2] = (ulong)pvVar14;
        }
        else {
          memcpy(pvVar14,pvVar9,*param_6);
          param_6[2] = (ulong)pvVar14;
          operator_delete__(pvVar9);
        }
        param_6[1] = uVar1;
      }
      *param_6 = uVar15;
      lVar16 = 0;
      if (plVar20 != *(long **)(param_2 + 0x40)) {
        do {
          plVar20 = (long *)*plVar20;
          sVar18 = plVar20[8];
          if (sVar18 != 0) {
            sVar19 = *param_6;
            uVar1 = param_6[1];
            pvVar14 = (void *)plVar20[10];
            uVar12 = sVar19 + sVar18;
            if (uVar1 < uVar12) {
              uVar1 = uVar1 + (uVar1 >> 1);
              uVar2 = uVar12;
              if (uVar12 <= uVar1) {
                uVar2 = uVar1;
              }
              pvVar9 = operator_new__(uVar2);
              pvVar21 = (void *)param_6[2];
              if (pvVar21 == (void *)0x0) {
                param_6[2] = (ulong)pvVar9;
              }
              else {
                memcpy(pvVar9,pvVar21,sVar19);
                param_6[2] = (ulong)pvVar9;
                operator_delete__(pvVar21);
                sVar19 = *param_6;
              }
              param_6[1] = uVar2;
            }
            memcpy((void *)(param_6[2] + sVar19),pvVar14,sVar18);
            *param_6 = uVar12;
          }
          uVar12 = param_1[1];
          iVar5 = *(int *)(plVar20 + 3);
          *(byte *)(param_6[2] + lVar16) = *(byte *)((long)plVar20 + 0x1c) | 0x80;
          uVar6 = *(uint *)((long)plVar20 + 0x11) | ((int)uVar12 - iVar5) * 4;
          *(ushort *)(param_6[2] + lVar16 + 1) =
               (ushort)(uVar6 >> 8) & 0xff | (ushort)((uVar6 & 0xff00ff) << 8);
          *(char *)(param_6[2] + lVar16 + 3) = (char)plVar20[2];
          puVar3 = (undefined8 *)param_1[4];
          if (puVar3 < (undefined8 *)param_1[5]) {
            if (puVar3 == (undefined8 *)0x0) goto LAB_0092bbd4;
            uVar23 = plVar20[3];
            uVar8 = plVar20[2];
            puVar10 = puVar3 + 3;
            puVar3[2] = plVar20[4];
            puVar3[1] = uVar23;
            *puVar3 = uVar8;
          }
          else {
            puVar10 = (undefined8 *)FUN_0092bf6c(puVar11,plVar20 + 2);
          }
          lVar13 = *(long *)(param_2 + 0x40);
          lVar16 = lVar16 + 4;
          param_1[4] = (ulong)puVar10;
        } while (plVar20 != (long *)lVar13);
      }
      if (4 < uVar15) {
        puVar4 = (ulong *)param_1[4];
        if (puVar4 < (ulong *)param_1[5]) {
          if (puVar4 == (ulong *)0x0) {
LAB_0092bbd4:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          uVar15 = param_1[1];
          uVar12 = *param_1;
          puVar11 = puVar4 + 3;
          puVar4[2] = param_1[2];
          puVar4[1] = uVar15;
          *puVar4 = uVar12;
        }
        else {
          puVar11 = (ulong *)FUN_0092bf6c(puVar11,param_1);
        }
        param_1[4] = (ulong)puVar11;
      }
      sVar18 = *(size_t *)(param_2 + 0x10);
      if (sVar18 != 0) {
        sVar19 = *param_6;
        uVar15 = param_6[1];
        pvVar14 = *(void **)(param_2 + 0x20);
        uVar12 = sVar19 + sVar18;
        if (uVar15 < uVar12) {
          uVar15 = uVar15 + (uVar15 >> 1);
          uVar1 = uVar12;
          if (uVar12 <= uVar15) {
            uVar1 = uVar15;
          }
          pvVar9 = operator_new__(uVar1);
          pvVar21 = (void *)param_6[2];
          if (pvVar21 == (void *)0x0) {
            param_6[2] = (ulong)pvVar9;
          }
          else {
            memcpy(pvVar9,pvVar21,sVar19);
            param_6[2] = (ulong)pvVar9;
            operator_delete__(pvVar21);
            sVar19 = *param_6;
          }
          param_6[1] = uVar1;
        }
        memcpy((void *)(param_6[2] + sVar19),pvVar14,sVar18);
        *param_6 = uVar12;
      }
      *(char *)(param_6[2] + lVar16) = (char)*(undefined4 *)((long)param_1 + 0xc);
      if (*(char *)((long)param_1 + 0x11) == '\x01') {
        plVar20 = *(long **)(param_2 + 0x38);
        plVar17 = *(long **)(param_2 + 0x40);
        if (plVar20 != plVar17) {
          plVar22 = (long *)(param_2 + 0x38);
          do {
            FUN_00666bb4(plVar20 + 2,*plVar20 + 0x10);
            lVar16 = *plVar22;
            uVar12 = *(ulong *)(*plVar20 + 0x40);
            pvVar14 = *(void **)(*plVar20 + 0x50);
            *(undefined8 *)(lVar16 + 0x40) = 0;
            if (uVar12 != 0) {
              uVar15 = *(ulong *)(lVar16 + 0x48);
              if (uVar15 < uVar12) {
                uVar15 = uVar15 + (uVar15 >> 1);
                uVar1 = uVar12;
                if (uVar12 <= uVar15) {
                  uVar1 = uVar15;
                }
                pvVar21 = operator_new__(uVar1);
                pvVar9 = *(void **)(lVar16 + 0x50);
                *(void **)(lVar16 + 0x50) = pvVar21;
                if (pvVar9 != (void *)0x0) {
                  operator_delete__(pvVar9);
                  pvVar9 = *(void **)(lVar16 + 0x40);
                }
                *(ulong *)(lVar16 + 0x48) = uVar1;
              }
              else {
                pvVar9 = (void *)0x0;
              }
              memcpy((void *)(*(long *)(lVar16 + 0x50) + (long)pvVar9),pvVar14,uVar12);
              *(ulong *)(lVar16 + 0x40) = uVar12;
            }
            plVar22 = (long *)*plVar22;
            plVar17 = *(long **)(param_2 + 0x40);
            plVar20 = (long *)*plVar22;
          } while (plVar20 != plVar17);
        }
        if (plVar17 != (long *)(param_2 + 0x38)) {
          FUN_00666bb4(plVar17 + 2,param_1);
          uVar12 = *(ulong *)(param_2 + 0x10);
          pvVar14 = *(void **)(param_2 + 0x20);
          plVar17[8] = 0;
          if (uVar12 != 0) {
            uVar15 = plVar17[9];
            if (uVar15 < uVar12) {
              uVar15 = uVar15 + (uVar15 >> 1);
              uVar1 = uVar12;
              if (uVar12 <= uVar15) {
                uVar1 = uVar15;
              }
              pvVar21 = operator_new__(uVar1);
              pvVar9 = (void *)plVar17[10];
              plVar17[10] = (long)pvVar21;
              if (pvVar9 != (void *)0x0) {
                operator_delete__(pvVar9);
                pvVar9 = (void *)plVar17[8];
              }
              plVar17[9] = uVar1;
            }
            else {
              pvVar9 = (void *)0x0;
            }
            memcpy((void *)(plVar17[10] + (long)pvVar9),pvVar14,uVar12);
            plVar17[8] = uVar12;
          }
        }
      }
      uVar12 = *param_6;
      *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)(param_2 + 0x30);
      *param_1 = uVar12;
    }
    else {
      sVar18 = *(size_t *)(param_2 + 0x10);
      if (sVar18 != 0) {
        sVar19 = *param_6;
        uVar15 = param_6[1];
        pvVar14 = *(void **)(param_2 + 0x20);
        uVar12 = sVar19 + sVar18;
        if (uVar15 < uVar12) {
          uVar15 = uVar15 + (uVar15 >> 1);
          uVar1 = uVar12;
          if (uVar12 <= uVar15) {
            uVar1 = uVar15;
          }
          pvVar9 = operator_new__(uVar1);
          pvVar21 = (void *)param_6[2];
          if (pvVar21 == (void *)0x0) {
            param_6[2] = (ulong)pvVar9;
          }
          else {
            memcpy(pvVar9,pvVar21,sVar19);
            param_6[2] = (ulong)pvVar9;
            operator_delete__(pvVar21);
            sVar19 = *param_6;
          }
          param_6[1] = uVar1;
        }
        memcpy((void *)(param_6[2] + sVar19),pvVar14,sVar18);
        *param_6 = uVar12;
      }
    }
  }
  return;
}


// ===== 0092bc20  FUN_0092bc20 =====

/* WARNING: Removing unreachable block (ram,0x0092bd0c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0092bc20(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 *local_50;
  
  (**(code **)(**(long **)(param_1 + 8) + 0x40))();
  lVar5 = *(long *)(param_1 + 0x48);
  FUN_0092bec0(param_1 + 0x38);
  lVar2 = _UNK_001f24c8;
  lVar1 = _DAT_001f24c0;
  while( true ) {
    if (lVar5 == 0) {
      return;
    }
    puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
    local_90 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
    local_70 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_58 = &DAT_aaaaaaaaaaaaaaaa;
    local_60 = &DAT_aaaaaaaaaaaaaaaa;
    local_50 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00666a9c(&local_90);
    local_50 = (undefined1 *)operator_new__(0x4b0);
    puStack_58 = (undefined1 *)lVar2;
    local_60 = (undefined1 *)lVar1;
    plVar3 = (long *)operator_new(0x58);
    if (plVar3 == (long *)0x0) break;
    *plVar3 = 0;
    plVar3[1] = 0;
    FUN_00666ac0(plVar3 + 2,&local_90);
    plVar3[10] = (long)local_50;
    puVar4 = *(undefined8 **)(param_1 + 0x40);
    plVar3[9] = (long)puStack_58;
    plVar3[8] = (long)local_60;
    *plVar3 = param_1 + 0x38;
    plVar3[1] = (long)puVar4;
    *puVar4 = plVar3;
    *(long **)(param_1 + 0x40) = plVar3;
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 1;
    local_50 = (undefined1 *)0x0;
    puStack_58 = (undefined1 *)0x0;
    local_60 = (undefined1 *)0x0;
    FUN_00666afc(&local_90);
    lVar5 = lVar5 + -1;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0092bd44  FUN_0092bd44 =====

void FUN_0092bd44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0092bd54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x48))();
  return;
}


// ===== 0092bd58  FUN_0092bd58 =====

void FUN_0092bd58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0092bd68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x50))();
  return;
}


// ===== 0092bd6c  FUN_0092bd6c =====

void FUN_0092bd6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0092bd7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x58))();
  return;
}


// ===== 0092bd80  FUN_0092bd80 =====

void FUN_0092bd80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0092bd90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x60))();
  return;
}


// ===== 0092bd94  FUN_0092bd94 =====

void FUN_0092bd94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0092bda4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x68))();
  return;
}


// ===== 0092bda8  FUN_0092bda8 =====

void FUN_0092bda8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0092bdb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x80))();
  return;
}


// ===== 0092bdbc  FUN_0092bdbc =====

void FUN_0092bdbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0092bdcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x88))();
  return;
}


// ===== 0092bdd0  FUN_0092bdd0 =====

void FUN_0092bdd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0092bde0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x90))();
  return;
}


// ===== 0092bde4  FUN_0092bde4 =====

void FUN_0092bde4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0092bdf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0xa8))();
  return;
}


// ===== 0092bdf8  FUN_0092bdf8 =====

void FUN_0092bdf8(long param_1,undefined8 *param_2)

{
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  uStack_38 = param_2[1];
  local_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  local_20 = param_2[4];
  (**(code **)(**(long **)(param_1 + 8) + 0xb0))(*(long **)(param_1 + 8),&local_40);
  return;
}


// ===== 0092be3c  FUN_0092be3c =====

void FUN_0092be3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0092be4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0xd8))();
  return;
}


// ===== 0092be50  FUN_0092be50 =====

void FUN_0092be50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0092be60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0xb8))();
  return;
}


// ===== 0092be64  FUN_0092be64 =====

void FUN_0092be64(long param_1,long param_2)

{
  *(long *)(param_1 + 0x28) = 0x4b0 - param_2;
                    /* WARNING: Could not recover jumptable at 0x0092be84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0xc0))(*(long **)(param_1 + 8));
  return;
}


// ===== 0092be88  FUN_0092be88 =====

void FUN_0092be88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0092be98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 200))();
  return;
}


// ===== 0092be9c  FUN_0092be9c =====

void FUN_0092be9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0092beac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0xd0))();
  return;
}


// ===== 0092beb0  FUN_0092beb0 =====

undefined1  [16] FUN_0092beb0(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 1;
  auVar1._0_8_ = param_1 + 8;
  return auVar1;
}


// ===== 0092bec0  FUN_0092bec0 =====

void FUN_0092bec0(long *param_1)

{
  long *plVar1;
  void *pvVar2;
  long *plVar3;
  
  if (param_1[2] != 0) {
    plVar1 = (long *)param_1[1];
    plVar3 = *(long **)(*param_1 + 8);
    *(long **)(*plVar1 + 8) = plVar3;
    *plVar3 = *plVar1;
    param_1[2] = 0;
    while (plVar1 != param_1) {
      if (plVar1 + 2 == (long *)0x0) {
LAB_0092bf58:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      pvVar2 = (void *)plVar1[10];
      plVar3 = (long *)plVar1[1];
      plVar1[10] = 0;
      if (pvVar2 != (void *)0x0) {
        operator_delete__(pvVar2);
      }
      FUN_00666afc(plVar1 + 2);
      if (plVar1 == (long *)0x0) goto LAB_0092bf58;
      operator_delete(plVar1);
      plVar1 = plVar3;
    }
  }
  return;
}


// ===== 0092bf6c  FUN_0092bf6c =====

undefined8 * FUN_0092bf6c(long *param_1,undefined8 *param_2)

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
    FUN_006670f4();
LAB_0092c088:
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
    if (0xaaaaaaaaaaaaaaa < uVar5) goto LAB_0092c088;
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


// ===== 0092c08c  FUN_0092c08c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0092c08c(long *param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  int local_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  long local_50;
  int local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  long local_38;
  
  uVar2 = 0xfffffffb;
  if ((param_1 != (long *)0x0) && (param_2 != 0)) {
    iVar1 = *(int *)(param_2 + 0x20);
    uStack_58 = *(undefined8 *)(param_2 + 0x28);
    _local_48 = CONCAT44(0xaaaaaaaa,iVar1);
    _local_60 = CONCAT44(0xaaaaaaaa,iVar1);
    local_50 = (long)(iVar1 / 100);
    uStack_40 = uStack_58;
    local_38 = local_50;
    uVar3 = FUN_00659108(param_2);
    uVar4 = FUN_006591a0(param_2);
    uVar2 = (**(code **)(*param_1 + 0x80))(param_1,uVar3,&local_48,&local_60,uVar4);
    uStack_68 = _UNK_002268d0;
    local_70 = _DAT_002268c8;
    uStack_88 = _UNK_002268b0;
    local_90 = _DAT_002268a8;
    uStack_78 = _UNK_002268c0;
    uStack_80 = _DAT_002268b8;
    uStack_c8 = _UNK_00226870;
    local_d0 = _DAT_00226868;
    uStack_b8 = _UNK_00226880;
    uStack_c0 = _DAT_00226878;
    uStack_a8 = _UNK_00226890;
    local_b0 = _DAT_00226888;
    uStack_98 = _UNK_002268a0;
    uStack_a0 = _DAT_00226898;
    (**(code **)(*param_1 + 0xf8))(&local_d0,param_1);
    if (local_d0._1_1_ == '\x01') {
      *(uint *)(param_2 + 0x34) = (byte)local_d0 ^ 1;
    }
    FUN_0065f0c8(&local_d0);
  }
  return uVar2;
}


// ===== 0092c1a8  FUN_0092c1a8 =====

undefined8 FUN_0092c1a8(long *param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint local_60;
  undefined4 uStack_5c;
  long lStack_58;
  ulong local_50;
  uint local_48;
  undefined4 uStack_44;
  long lStack_40;
  ulong local_38;
  
  uVar2 = 0xfffffffb;
  if ((param_1 != (long *)0x0) && (param_2 != 0)) {
    uVar1 = *(uint *)(param_2 + 0x20);
    if ((int)uVar1 < 32000) {
      if ((uVar1 != 8000) && (uVar1 != 16000)) {
        return 0xfffffff9;
      }
    }
    else if ((uVar1 != 48000) && (uVar1 != 32000)) {
      return 0xfffffff9;
    }
    lStack_58 = *(long *)(param_2 + 0x28);
    if (lStack_58 == 0) {
      uVar2 = 0xfffffff7;
    }
    else {
      _local_48 = CONCAT44(0xaaaaaaaa,uVar1);
      _local_60 = CONCAT44(0xaaaaaaaa,uVar1);
      local_50 = (ulong)((uVar1 >> 2 & 0x3fff) / 0x19);
      lStack_40 = lStack_58;
      local_38 = local_50;
      uVar2 = FUN_00659108(param_2);
      uVar3 = FUN_006591a0(param_2);
      uVar2 = (**(code **)(*param_1 + 0x90))(param_1,uVar2,&local_48,&local_60,uVar3);
    }
  }
  return uVar2;
}


// ===== 0092c2a4  FUN_0092c2a4 =====

void FUN_0092c2a4(undefined4 *param_1)

{
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  param_1[4] = 0;
  return;
}


// ===== 0092c2c0  FUN_0092c2c0 =====

void FUN_0092c2c0(void)

{
  return;
}


// ===== 0092c2c8  FUN_0092c2c8 =====

void FUN_0092c2c8(float *param_1,short *param_2,ulong param_3)

{
  ulong uVar1;
  float fVar2;
  short *psVar3;
  short *psVar4;
  short *psVar5;
  short *psVar6;
  short *psVar7;
  short *psVar8;
  short *psVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  short *psVar13;
  short *psVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  float fVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  
  if (param_3 == 0) {
    return;
  }
  if ((*(char *)(param_1 + 8) != '\x01') || (*(ulong *)(param_1 + 6) != param_3)) {
    *param_1 = 0.0;
    param_1[2] = 0.0;
    param_1[3] = 0.0;
    param_1[4] = 0.0;
    *(ulong *)(param_1 + 6) = param_3;
    *(undefined1 *)(param_1 + 8) = 1;
  }
  if ((param_3 & 0x7fffffffffffffff) == 0) {
    fVar18 = 0.0;
    goto LAB_0092c46c;
  }
  uVar10 = param_3 * 2 - 2;
  if (uVar10 < 6) {
    fVar18 = 0.0;
    psVar13 = param_2;
  }
  else {
    fVar18 = 0.0;
    uVar1 = (uVar10 >> 1) + 1;
    if (uVar10 < 0x1e) {
      uVar11 = 0;
    }
    else {
      uVar11 = uVar1 & 0xfffffffffffffff0;
      psVar13 = param_2 + 8;
      uVar10 = uVar1 & 0xfffffffffffffff0;
      do {
        psVar14 = psVar13 + -8;
        psVar3 = psVar13 + -7;
        psVar4 = psVar13 + -6;
        psVar5 = psVar13 + -5;
        psVar6 = psVar13 + -4;
        psVar7 = psVar13 + -3;
        psVar8 = psVar13 + -2;
        psVar9 = psVar13 + -1;
        uVar23 = *(undefined8 *)(psVar13 + 4);
        uVar19 = *(undefined8 *)psVar13;
        uVar10 = uVar10 - 0x10;
        psVar13 = psVar13 + 0x10;
        auVar24._0_4_ = (int)*psVar14 * (int)*psVar14;
        auVar24._4_4_ = (int)*psVar3 * (int)*psVar3;
        auVar24._8_4_ = (int)*psVar4 * (int)*psVar4;
        auVar24._12_4_ = (int)*psVar5 * (int)*psVar5;
        auVar22._0_4_ = (int)*psVar6 * (int)*psVar6;
        auVar22._4_4_ = (int)*psVar7 * (int)*psVar7;
        auVar22._8_4_ = (int)*psVar8 * (int)*psVar8;
        auVar22._12_4_ = (int)*psVar9 * (int)*psVar9;
        auVar24 = NEON_ucvtf(auVar24,4);
        auVar22 = NEON_ucvtf(auVar22,4);
        sVar15 = (short)((ulong)uVar19 >> 0x10);
        sVar16 = (short)((ulong)uVar19 >> 0x20);
        sVar17 = (short)((ulong)uVar19 >> 0x30);
        auVar25._0_4_ = (int)(short)uVar19 * (int)(short)uVar19;
        auVar25._4_4_ = (int)sVar15 * (int)sVar15;
        auVar25._8_4_ = (int)sVar16 * (int)sVar16;
        auVar25._12_4_ = (int)sVar17 * (int)sVar17;
        auVar25 = NEON_ucvtf(auVar25,4);
        sVar15 = (short)((ulong)uVar23 >> 0x10);
        sVar16 = (short)((ulong)uVar23 >> 0x20);
        sVar17 = (short)((ulong)uVar23 >> 0x30);
        auVar20._0_4_ = (int)(short)uVar23 * (int)(short)uVar23;
        auVar20._4_4_ = (int)sVar15 * (int)sVar15;
        auVar20._8_4_ = (int)sVar16 * (int)sVar16;
        auVar20._12_4_ = (int)sVar17 * (int)sVar17;
        auVar20 = NEON_ucvtf(auVar20,4);
        fVar18 = fVar18 + auVar24._0_4_ + auVar24._4_4_ + auVar24._8_4_ + auVar24._12_4_ +
                 auVar22._0_4_ + auVar22._4_4_ + auVar22._8_4_ + auVar22._12_4_ + auVar25._0_4_ +
                 auVar25._4_4_ + auVar25._8_4_ + auVar25._12_4_ + auVar20._0_4_ + auVar20._4_4_ +
                 auVar20._8_4_ + auVar20._12_4_;
      } while (uVar10 != 0);
      if (uVar1 == uVar11) goto LAB_0092c46c;
      if ((uVar1 & 0xc) == 0) {
        psVar13 = param_2 + uVar11;
        goto LAB_0092c450;
      }
    }
    uVar10 = uVar1 & 0xfffffffffffffffc;
    psVar13 = param_2 + uVar10;
    lVar12 = uVar11 - uVar10;
    psVar14 = param_2 + uVar11;
    do {
      uVar19 = *(undefined8 *)psVar14;
      lVar12 = lVar12 + 4;
      sVar15 = (short)((ulong)uVar19 >> 0x10);
      sVar16 = (short)((ulong)uVar19 >> 0x20);
      sVar17 = (short)((ulong)uVar19 >> 0x30);
      auVar21._0_4_ = (int)(short)uVar19 * (int)(short)uVar19;
      auVar21._4_4_ = (int)sVar15 * (int)sVar15;
      auVar21._8_4_ = (int)sVar16 * (int)sVar16;
      auVar21._12_4_ = (int)sVar17 * (int)sVar17;
      auVar22 = NEON_ucvtf(auVar21,4);
      fVar18 = fVar18 + auVar22._0_4_ + auVar22._4_4_ + auVar22._8_4_ + auVar22._12_4_;
      psVar14 = psVar14 + 4;
    } while (lVar12 != 0);
    if (uVar1 == uVar10) goto LAB_0092c46c;
  }
LAB_0092c450:
  do {
    psVar14 = psVar13 + 1;
    fVar18 = fVar18 + (float)(uint)((int)*psVar13 * (int)*psVar13);
    psVar13 = psVar14;
  } while (psVar14 != param_2 + param_3);
LAB_0092c46c:
  *(ulong *)(param_1 + 2) = *(long *)(param_1 + 2) + param_3;
  fVar2 = fVar18;
  if (fVar18 <= param_1[4]) {
    fVar2 = param_1[4];
  }
  *param_1 = fVar18 + *param_1;
  param_1[4] = fVar2;
  return;
}


// ===== 0092c4a0  FUN_0092c4a0 =====

void FUN_0092c4a0(float *param_1,float *param_2,ulong param_3)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  ulong uVar9;
  float *pfVar10;
  undefined1 (*pauVar12) [16];
  ulong uVar13;
  float fVar14;
  short sVar15;
  float fVar16;
  short sVar18;
  short sVar19;
  short sVar20;
  undefined1 auVar17 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float *pfVar11;
  
  if (param_3 == 0) {
    return;
  }
  if ((*(char *)(param_1 + 8) != '\x01') || (*(ulong *)(param_1 + 6) != param_3)) {
    *param_1 = 0.0;
    param_1[2] = 0.0;
    param_1[3] = 0.0;
    param_1[4] = 0.0;
    *(ulong *)(param_1 + 6) = param_3;
    *(undefined1 *)(param_1 + 8) = 1;
  }
  if ((param_3 & 0x3fffffffffffffff) == 0) {
    fVar14 = 0.0;
  }
  else {
    uVar9 = param_3 * 4 - 4;
    if (uVar9 < 0x1c) {
      fVar14 = 0.0;
      pfVar10 = param_2;
    }
    else {
      fVar14 = 0.0;
      pauVar12 = (undefined1 (*) [16])(param_2 + 4);
      uVar9 = (uVar9 >> 2) + 1;
      uVar13 = uVar9 & 0x7ffffffffffffff8;
      pfVar10 = param_2 + (uVar9 & 0x7ffffffffffffff8);
      do {
        pauVar1 = pauVar12 + -1;
        auVar6 = *pauVar12;
        uVar13 = uVar13 - 8;
        pauVar12 = pauVar12 + 2;
        auVar22._8_4_ = 0xc7000000;
        auVar22._0_8_ = 0xc7000000c7000000;
        auVar22._12_4_ = 0xc7000000;
        auVar22 = NEON_fcmgt(auVar22,*pauVar1,4);
        auVar23._8_4_ = 0xc7000000;
        auVar23._0_8_ = 0xc7000000c7000000;
        auVar23._12_4_ = 0xc7000000;
        auVar22 = NEON_bit(*pauVar1,auVar23,auVar22,1);
        auVar4._8_4_ = 0x46fffe00;
        auVar4._0_8_ = 0x46fffe0046fffe00;
        auVar4._12_4_ = 0x46fffe00;
        auVar23 = NEON_fcmgt(auVar22,auVar4,4);
        auVar5._8_4_ = 0x46fffe00;
        auVar5._0_8_ = 0x46fffe0046fffe00;
        auVar5._12_4_ = 0x46fffe00;
        auVar22 = NEON_bit(auVar22,auVar5,auVar23,1);
        auVar2._8_4_ = 0xc7000000;
        auVar2._0_8_ = 0xc7000000c7000000;
        auVar2._12_4_ = 0xc7000000;
        auVar23 = NEON_fcmgt(auVar2,auVar6,4);
        auVar3._8_4_ = 0xc7000000;
        auVar3._0_8_ = 0xc7000000c7000000;
        auVar3._12_4_ = 0xc7000000;
        auVar23 = NEON_bit(auVar6,auVar3,auVar23,1);
        sVar15 = (short)(int)auVar22._0_4_;
        sVar18 = (short)(int)auVar22._4_4_;
        sVar19 = (short)(int)auVar22._8_4_;
        sVar20 = (short)(int)auVar22._12_4_;
        auVar6._8_4_ = 0x46fffe00;
        auVar6._0_8_ = 0x46fffe0046fffe00;
        auVar6._12_4_ = 0x46fffe00;
        auVar22 = NEON_fcmgt(auVar23,auVar6,4);
        auVar17._0_4_ = (int)sVar15 * (int)sVar15;
        auVar17._4_4_ = (int)sVar18 * (int)sVar18;
        auVar17._8_4_ = (int)sVar19 * (int)sVar19;
        auVar17._12_4_ = (int)sVar20 * (int)sVar20;
        auVar7._8_4_ = 0x46fffe00;
        auVar7._0_8_ = 0x46fffe0046fffe00;
        auVar7._12_4_ = 0x46fffe00;
        auVar23 = NEON_bit(auVar23,auVar7,auVar22,1);
        auVar22 = NEON_ucvtf(auVar17,4);
        sVar15 = (short)(int)auVar23._0_4_;
        sVar18 = (short)(int)auVar23._4_4_;
        sVar19 = (short)(int)auVar23._8_4_;
        sVar20 = (short)(int)auVar23._12_4_;
        auVar21._0_4_ = (int)sVar15 * (int)sVar15;
        auVar21._4_4_ = (int)sVar18 * (int)sVar18;
        auVar21._8_4_ = (int)sVar19 * (int)sVar19;
        auVar21._12_4_ = (int)sVar20 * (int)sVar20;
        auVar23 = NEON_ucvtf(auVar21,4);
        fVar14 = fVar14 + auVar22._0_4_ + auVar22._4_4_ + auVar22._8_4_ + auVar22._12_4_ +
                 auVar23._0_4_ + auVar23._4_4_ + auVar23._8_4_ + auVar23._12_4_;
      } while (uVar13 != 0);
      if (uVar9 == (uVar9 & 0x7ffffffffffffff8)) goto LAB_0092c604;
    }
    do {
      pfVar11 = pfVar10 + 1;
      fVar16 = -32768.0;
      if (-32768.0 <= *pfVar10) {
        fVar16 = *pfVar10;
      }
      fVar8 = 32767.0;
      if (fVar16 == 32767.0 || fVar16 < 32767.0 != NAN(fVar16)) {
        fVar8 = fVar16;
      }
      fVar14 = fVar14 + (float)(uint)((int)fVar8 * (int)fVar8);
      pfVar10 = pfVar11;
    } while (pfVar11 != param_2 + param_3);
  }
LAB_0092c604:
  *(ulong *)(param_1 + 2) = *(long *)(param_1 + 2) + param_3;
  fVar16 = fVar14;
  if (fVar14 <= param_1[4]) {
    fVar16 = param_1[4];
  }
  *param_1 = fVar14 + *param_1;
  param_1[4] = fVar16;
  return;
}


// ===== 0092c630  FUN_0092c630 =====

void FUN_0092c630(undefined4 *param_1,long param_2)

{
  long lVar1;
  
  if ((*(char *)(param_1 + 8) == '\x01') && (*(long *)(param_1 + 6) == param_2)) {
    lVar1 = *(long *)(param_1 + 2);
  }
  else {
    lVar1 = 0;
    *param_1 = 0;
    param_1[4] = 0;
    *(long *)(param_1 + 6) = param_2;
    *(undefined1 *)(param_1 + 8) = 1;
  }
  *(long *)(param_1 + 2) = lVar1 + param_2;
  return;
}


// ===== 0092c678  FUN_0092c678 =====

int FUN_0092c678(float *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  if (*(ulong *)(param_1 + 2) != 0) {
    fVar3 = *param_1;
    fVar2 = fVar3 / (float)*(ulong *)(param_1 + 2);
    if (0.00021423966 < fVar2) {
      fVar2 = log10f(fVar2 * 9.313226e-10);
      iVar1 = (int)(fVar2 * -10.0 + 0.5);
      if (iVar1 != 0x7f) goto LAB_0092c6f8;
    }
    if (fVar3 != 0.0) {
      iVar1 = 0x7e;
      goto LAB_0092c6f8;
    }
  }
  iVar1 = 0x7f;
LAB_0092c6f8:
  *param_1 = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  param_1[4] = 0.0;
  if (*(char *)(param_1 + 8) == '\x01') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  return iVar1;
}


// ===== 0092c728  FUN_0092c728 =====

ulong FUN_0092c728(float *param_1)

{
  ulong uVar1;
  ulong uVar2;
  float fVar3;
  
  if (*(ulong *)(param_1 + 2) == 0) {
    uVar1 = 0x7f0000007f;
    *param_1 = 0.0;
    param_1[4] = 0.0;
    if (*(char *)(param_1 + 8) != '\x01') {
      return 0x7f0000007f;
    }
  }
  else {
    fVar3 = *param_1 / (float)*(ulong *)(param_1 + 2);
    if (fVar3 <= 0.00021423966) {
      uVar2 = 0x7f;
    }
    else {
      fVar3 = log10f(fVar3 * 9.313226e-10);
      uVar2 = (ulong)(uint)(int)(fVar3 * -10.0 + 0.5);
    }
    if (((uint)param_1[8] & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                );
    }
    if (param_1[4] / (float)*(ulong *)(param_1 + 6) <= 0.00021423966) {
      uVar1 = 0x7f00000000;
    }
    else {
      fVar3 = log10f((param_1[4] / (float)*(ulong *)(param_1 + 6)) * 9.313226e-10);
      uVar1 = (ulong)(uint)(int)(fVar3 * -10.0 + 0.5) << 0x20;
    }
    *param_1 = 0.0;
    uVar1 = uVar1 | uVar2;
    param_1[2] = 0.0;
    param_1[3] = 0.0;
    param_1[4] = 0.0;
  }
  *(undefined1 *)(param_1 + 8) = 0;
  return uVar1;
}


// ===== 0092c840  FUN_0092c840 =====

void FUN_0092c840(undefined8 *param_1,undefined8 param_2)

{
  param_1[2] = param_2;
  *param_1 = &PTR_FUN_00d3de78;
  param_1[1] = 0;
  return;
}


// ===== 0092c858  FUN_0092c858 =====

void FUN_0092c858(long param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (pvVar1 != (void *)0x0) {
    FUN_006cd508(pvVar1);
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 0092c8a4  FUN_0092c8a4 =====

void FUN_0092c8a4(void *param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((long)param_1 + 0x10);
  *(undefined8 *)((long)param_1 + 0x10) = 0;
  if (pvVar1 != (void *)0x0) {
    FUN_006cd508(pvVar1);
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 0092c8f0  FUN_0092c8f0 =====

undefined8 FUN_0092c8f0(void)

{
  return 0x15;
}


// ===== 0092c8fc  FUN_0092c8fc =====

undefined8 FUN_0092c8fc(void)

{
  return 1;
}


// ===== 0092c908  FUN_0092c908 =====

void FUN_0092c908(undefined8 *param_1,undefined8 param_2)

{
  param_1[2] = param_2;
  *param_1 = &PTR_FUN_00d3deb0;
  param_1[1] = 0;
  return;
}


// ===== 0092c920  FUN_0092c920 =====

void FUN_0092c920(long param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (pvVar1 != (void *)0x0) {
    FUN_006cd508(pvVar1);
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 0092c96c  FUN_0092c96c =====

void FUN_0092c96c(void *param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((long)param_1 + 0x10);
  *(undefined8 *)((long)param_1 + 0x10) = 0;
  if (pvVar1 != (void *)0x0) {
    FUN_006cd508(pvVar1);
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 0092c9b8  FUN_0092c9b8 =====

undefined8 FUN_0092c9b8(void)

{
  return 0x16;
}


// ===== 0092c9c4  FUN_0092c9c4 =====

undefined8 FUN_0092c9c4(void)

{
  return 1;
}


// ===== 0092c9d0  FUN_0092c9d0 =====

int FUN_0092c9d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x2d8));
  (**(code **)**(undefined8 **)(param_1 + 0x300))(*(undefined8 **)(param_1 + 0x300),param_2,param_3)
  ;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x2d8));
  return iVar1;
}


// ===== 0092ca28  FUN_0092ca28 =====

int FUN_0092ca28(long param_1,undefined4 param_2)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x2d8));
  (**(code **)(**(long **)(param_1 + 0x300) + 0x20))(*(long **)(param_1 + 0x300),param_2);
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x2d8));
  return iVar1;
}


// ===== 0092ca70  FUN_0092ca70 =====

undefined8 FUN_0092ca70(long param_1)

{
  undefined8 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x2d8));
  uVar1 = (**(code **)(**(long **)(param_1 + 0x300) + 0x28))();
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x2d8));
  return uVar1;
}


// ===== 0092cabc  FUN_0092cabc =====

void FUN_0092cabc(long param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  void *pvVar3;
  long *plVar4;
  
  if ((param_2 & 1) == 0) {
    if (*(byte *)(param_1 + 0x308) != 0) {
      uVar1 = *(int *)(param_1 + 0x30c) + 1;
      *(uint *)(param_1 + 0x30c) = uVar1;
      if (0x1d < uVar1) {
        uVar2 = FUN_00417e08();
        if ((uVar2 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4e98,
                       "../../modules/congestion_controller/receive_side_congestion_controller.cc",
                       0x269,"WrappingBitrateEstimator: Switching to transmission time offset RBE.")
          ;
        }
        *(undefined1 *)(param_1 + 0x308) = 0;
        pvVar3 = operator_new(0x278);
        FUN_0093018c(pvVar3,param_1 + 8,param_1 + 0x30);
        plVar4 = *(long **)(param_1 + 0x300);
        *(void **)(param_1 + 0x300) = pvVar3;
        if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0092cbc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 0x10))();
          return;
        }
      }
    }
  }
  else {
    if ((*(byte *)(param_1 + 0x308) & 1) == 0) {
      uVar2 = FUN_00417e08();
      if ((uVar2 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,
                     "../../modules/congestion_controller/receive_side_congestion_controller.cc",
                     0x209,"WrappingBitrateEstimator: Switching to absolute send time RBE.");
      }
      *(undefined1 *)(param_1 + 0x308) = 1;
      pvVar3 = operator_new(0x2c8);
      FUN_0092d28c(pvVar3,param_1 + 8,param_1 + 0x30);
      plVar4 = *(long **)(param_1 + 0x300);
      *(void **)(param_1 + 0x300) = pvVar3;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x10))();
      }
    }
    *(undefined4 *)(param_1 + 0x30c) = 0;
  }
  return;
}


// ===== 0092cbd4  FUN_0092cbd4 =====

void FUN_0092cbd4(undefined8 *param_1,long *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined1 **ppuVar3;
  void *pvVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 *local_120;
  ulong uStack_118;
  byte bStack_109;
  undefined1 **local_108;
  undefined1 *local_100;
  undefined1 *puStack_f8;
  undefined1 *puStack_f0;
  undefined1 *puStack_e8;
  undefined1 *local_e0;
  undefined1 *puStack_d8;
  undefined1 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long local_68;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  *param_1 = &PTR_FUN_00d3dee8;
  lVar6 = *param_2;
  param_1[1] = lVar6;
  if (lVar6 != 0) {
    FUN_00d0f740(1,lVar6 + 8);
  }
  lVar7 = param_2[4];
  lVar6 = param_2[3];
  lVar8 = param_2[1];
  param_1[3] = param_2[2];
  param_1[2] = lVar8;
  param_1[5] = lVar7;
  param_1[4] = lVar6;
  uStack_78 = param_4[1];
  local_80 = *param_4;
  local_68 = param_4[3];
  uStack_70 = param_4[2];
  if (*(long *)(param_4[3] + 8) != 0) {
    param_4[2] = 0;
    param_4[3] = &DAT_001fbc50;
  }
  FUN_00930ed4(param_1 + 6,&local_80,param_1[3]);
  if (*(code **)(local_68 + 8) != (code *)0x0) {
    (**(code **)(local_68 + 8))(local_80);
  }
  *(undefined1 *)((long)param_1 + 0xa1) = 0;
  uStack_98 = param_3[1];
  local_a0 = *param_3;
  local_88 = param_3[3];
  uStack_90 = param_3[2];
  if (*(code **)param_3[3] != (code *)0x0) {
    local_a0 = (**(code **)param_3[3])(*param_3);
  }
  FUN_00932d80(param_1 + 0x15,&local_a0);
  if (*(code **)(local_88 + 8) != (code *)0x0) {
    (**(code **)(local_88 + 8))(local_a0);
  }
  uStack_b8 = param_3[1];
  local_c0 = *param_3;
  local_a8 = param_3[3];
  uStack_b0 = param_3[2];
  if (*(code **)param_3[3] != (code *)0x0) {
    local_c0 = (**(code **)param_3[3])(*param_3);
  }
  FUN_009311e4(param_1 + 0x2b,param_2,&local_c0);
  if (*(code **)(local_a8 + 8) != (code *)0x0) {
    (**(code **)(local_a8 + 8))(local_c0);
  }
  local_100 = &DAT_aaaaaaaaaaaaaaaa;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_100);
  pthread_mutex_init((pthread_mutex_t *)(param_1 + 0x5b),(pthread_mutexattr_t *)&local_100);
  pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_100);
  pvVar4 = operator_new(0x278);
  FUN_0093018c(pvVar4,param_1 + 1,param_1 + 6);
  param_1[0x60] = pvVar4;
  *(undefined1 *)(param_1 + 0x61) = 0;
  *(undefined4 *)((long)param_1 + 0x30c) = 0;
  puStack_f8 = &DAT_aaaaaaaaaaaaaaaa;
  local_100 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_f0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_e0 = &DAT_aaaaaaaaaaaaaaaa;
  uStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d0 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00661054(&local_100,"force_send",10);
  uStack_c8._0_2_ = (ushort)(byte)uStack_c8;
  local_100 = PTR_DAT_00d52090 + 0x10;
  local_108 = &local_100;
  (**(code **)(*(long *)param_2[1] + 0x10))
            (&local_120,(long *)param_2[1],"WebRTC-RFC8888CongestionControlFeedback",0x27);
  ppuVar3 = (undefined1 **)local_120;
  if (-1 < (char)bStack_109) {
    uStack_118 = (ulong)bStack_109;
    ppuVar3 = &local_120;
  }
  FUN_00661cc0(&local_108,1,ppuVar3,uStack_118);
  if ((char)bStack_109 < '\0') {
    operator_delete(local_120);
  }
  if (uStack_c8._1_1_ == '\x01') {
    *(undefined1 *)((long)param_1 + 0xa1) = 1;
    uVar5 = FUN_00417e08();
    if ((uVar5 & 1) == 0) {
      puVar1 = &UNK_001a7372;
      if (*(char *)((long)param_1 + 0xa1) == '\0') {
        puVar1 = &UNK_001c07dc;
      }
      FUN_00623bb0("\r\t\t\t\t\t",
                   "../../modules/congestion_controller/receive_side_congestion_controller.cc",0x399
                   ,"SetPreferredRtcpCcAckType",&DAT_001c4dc3," Sending ",puVar1," RTCP feedback.");
    }
  }
  FUN_006634ac(&local_100);
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0092ce98  FUN_0092ce98 =====

void FUN_0092ce98(long param_1,int param_2)

{
  undefined *puVar1;
  ulong uVar2;
  
  *(bool *)(param_1 + 0xa1) = param_2 == 6;
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    puVar1 = &UNK_001a7372;
    if (*(char *)(param_1 + 0xa1) == '\0') {
      puVar1 = &UNK_001c07dc;
    }
    FUN_00623bb0("\r\t\t\t\t\t",
                 "../../modules/congestion_controller/receive_side_congestion_controller.cc",0x399,
                 "SetPreferredRtcpCcAckType",&DAT_001c4dc3," Sending ",puVar1," RTCP feedback.");
  }
  return;
}


// ===== 0092cf3c  FUN_0092cf3c =====

ulong FUN_0092cf3c(long param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = FUN_007dbb58(param_2,8);
  if ((uVar2 & 1) == 0) {
    uVar2 = FUN_007dbb58(param_2,9);
  }
  else {
    uVar2 = 1;
  }
  if (*(char *)(param_1 + 0xa1) == '\x01') {
    uVar2 = FUN_0093138c(param_1 + 0x158,param_2);
    return uVar2;
  }
  if (((uint)(param_3 == 0) & ((uint)uVar2 ^ 1)) != 0) {
    return uVar2;
  }
  if ((uVar2 & 1) != 0) {
    uVar2 = FUN_00932fe0(param_1 + 0xa8,param_2);
    return uVar2;
  }
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x2d8));
  uVar1 = FUN_007dbb58(param_2,5);
  FUN_0092cabc(param_1,uVar1 & 1);
  (**(code **)(**(long **)(param_1 + 0x300) + 0x18))(*(long **)(param_1 + 0x300),param_2);
  uVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x2d8));
  return (ulong)uVar1;
}


// ===== 0092d03c  FUN_0092d03c =====

void FUN_0092d03c(undefined8 *param_1,long param_2)

{
  if ((*(byte *)(param_2 + 0xa1) & 1) != 0) {
    FUN_00931b04(param_2 + 0x158);
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// ===== 0092d05c  FUN_0092d05c =====

void FUN_0092d05c(long param_1,int param_2)

{
  FUN_00933564(param_1 + 0xa8,(long)param_2);
  return;
}


// ===== 0092d06c  FUN_0092d06c =====

ulong FUN_0092d06c(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
  if (*(char *)(param_1 + 0xa1) == '\x01') {
    uVar2 = FUN_00931810(param_1 + 0x158,uVar1);
  }
  else {
    pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x2d8));
    uVar2 = (**(code **)(**(long **)(param_1 + 0x300) + 0x30))();
    pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x2d8));
  }
  uVar3 = FUN_0093335c(param_1 + 0xa8,uVar1);
  if ((long)uVar2 <= (long)uVar3) {
    uVar3 = uVar2;
  }
  return uVar3 & ((long)uVar3 >> 0x3f ^ 0xffffffffffffffffU);
}


// ===== 0092d108  FUN_0092d108 =====

void FUN_0092d108(void *param_1)

{
  FUN_005df0ec();
  operator_delete(param_1);
  return;
}


// ===== 0092d138  FUN_0092d138 =====

void FUN_0092d138(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  void *pvVar4;
  undefined8 *local_18;
  
  *param_1 = &PTR_FUN_00d3df10;
  FUN_008f2b08(param_1 + 0x25);
  local_18 = param_1 + 0x22;
  FUN_0092eb74(&local_18,param_1[0x23]);
  if (param_1[0x1d] != 0) {
    plVar3 = (long *)param_1[0x1c];
    plVar2 = *(long **)(param_1[0x1b] + 8);
    *(long **)(*plVar3 + 8) = plVar2;
    *plVar2 = *plVar3;
    param_1[0x1d] = 0;
    while (plVar3 != param_1 + 0x1b) {
      if ((plVar3 == (long *)0xfffffffffffffff0) || (plVar3 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      plVar2 = (long *)plVar3[1];
      operator_delete(plVar3);
      plVar3 = plVar2;
    }
  }
  FUN_007de938(param_1 + 0xe);
  pvVar4 = (void *)param_1[8];
  param_1[8] = 0;
  if (pvVar4 != (void *)0x0) {
    FUN_0092e9bc((long)pvVar4 + 0x60);
    operator_delete(pvVar4);
  }
  pvVar4 = (void *)param_1[7];
  param_1[7] = 0;
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4);
  }
  plVar3 = (long *)param_1[1];
  if ((plVar3 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar3 + 1), iVar1 == 1)) {
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  return;
}


// ===== 0092d25c  FUN_0092d25c =====

void FUN_0092d25c(void *param_1)

{
  FUN_0092d138();
  operator_delete(param_1);
  return;
}


// ===== 0092d28c  FUN_0092d28c =====

void FUN_0092d28c(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_00d3df10;
  lVar2 = *param_2;
  param_1[1] = lVar2;
  if (lVar2 != 0) {
    FUN_00d0f740(1,lVar2 + 8);
  }
  lVar3 = param_2[4];
  lVar2 = param_2[3];
  lVar5 = param_2[2];
  lVar4 = param_2[1];
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[3] = lVar5;
  param_1[2] = lVar4;
  param_1[5] = lVar3;
  param_1[4] = lVar2;
  param_1[6] = param_3;
  FUN_0092ecf8(param_1 + 9);
  FUN_008531f8(param_1 + 0xe,1000000);
  param_1[0x1b] = param_1 + 0x1b;
  param_1[0x1c] = param_1 + 0x1b;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  param_1[0x22] = param_1 + 0x23;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x20] = 0x8000000000000000;
  param_1[0x1f] = 0x8000000000000000;
  FUN_008f2728(param_1 + 0x25,param_1[2]);
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_00623bb0(&DAT_001f4e98,
               "../../modules/remote_bitrate_estimator/remote_bitrate_estimator_abs_send_time.cc",
               0x329,"RemoteBitrateEstimatorAbsSendTime: Instantiating.");
  return;
}


// ===== 0092d380  FUN_0092d380 =====

void FUN_0092d380(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  int iVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  
  lVar11 = *(long *)(param_2 + 0xe0);
  *param_1 = param_1;
  param_1[1] = param_1;
  param_1[2] = 0;
  if (lVar11 != param_2 + 0xd8) {
    iVar12 = 0;
    uVar10 = 0;
    uVar8 = 0;
    lVar2 = -0x8000000000000000;
    lVar7 = -0x8000000000000000;
    puVar13 = param_1;
    lVar14 = 0;
    uVar5 = 0;
    do {
      lVar3 = *(long *)(lVar11 + 0x10);
      lVar4 = lVar14;
      uVar15 = uVar5;
      if (lVar7 + 0x7fffffffffffffffU < 0xfffffffffffffffe) {
        if (lVar3 == 0x7fffffffffffffff) {
          lVar4 = *(long *)(lVar11 + 0x18);
          lVar7 = 0x7fffffffffffffff;
          if (lVar4 == 0x7fffffffffffffff) {
            lVar9 = 0x7fffffffffffffff;
          }
          else {
            lVar9 = 0x7fffffffffffffff;
            if (lVar2 != -0x8000000000000000) {
              lVar9 = -0x8000000000000000;
              lVar3 = lVar7;
              if ((lVar4 == -0x8000000000000000) || (lVar2 == 0x7fffffffffffffff))
              goto joined_r0x0092d4bc;
              lVar9 = lVar4 - lVar2;
              lVar2 = lVar7;
              lVar4 = lVar9;
              goto joined_r0x0092d4a8;
            }
          }
joined_r0x0092d5a0:
          iVar12 = iVar12 + 1;
          lVar3 = lVar7;
        }
        else {
          lVar4 = *(long *)(lVar11 + 0x18);
          lVar7 = lVar3 - lVar7;
          if (lVar3 != -0x8000000000000000) {
            lVar3 = lVar7;
          }
          if ((lVar4 == 0x7fffffffffffffff) || (lVar2 == -0x8000000000000000)) {
            lVar9 = 0x7fffffffffffffff;
            lVar2 = lVar3;
            lVar4 = lVar3;
joined_r0x0092d4a8:
            lVar3 = lVar2;
            if (999 < lVar4) goto joined_r0x0092d5a0;
          }
          else {
            lVar9 = -0x8000000000000000;
            if (lVar2 != 0x7fffffffffffffff && lVar4 != -0x8000000000000000) {
              lVar9 = lVar4 - lVar2;
            }
            lVar2 = lVar7;
            lVar4 = lVar9;
            if (999 < lVar3) goto joined_r0x0092d4a8;
          }
        }
joined_r0x0092d4bc:
        if (uVar10 != 0) {
          if (lVar3 != 0x7fffffffffffffff) {
            lVar7 = 0;
            if ((long)(int)uVar10 != 0) {
              lVar7 = (long)uVar8 / (long)(int)uVar10;
            }
            if (lVar7 != -0x8000000000000000) {
              lVar4 = lVar3 - lVar7;
              lVar2 = -lVar4;
              if (-1 < lVar4) {
                lVar2 = lVar4;
              }
              if (((lVar3 == -0x8000000000000000) || (lVar7 == 0x7fffffffffffffff)) ||
                 (lVar2 < 0x9c4)) goto LAB_0092d5ac;
            }
          }
          if ((((int)uVar10 < 4) || ((long)uVar8 < 1)) || ((long)uVar5 < 1)) {
            uVar10 = 0;
            iVar12 = 0;
            uVar5 = 0;
            lVar14 = 0;
            uVar8 = 0;
          }
          else {
            puVar1 = (undefined8 *)operator_new(0x30);
            if ((puVar1 == (undefined8 *)0x0) || (puVar1 == (undefined8 *)0xfffffffffffffff0))
            goto LAB_0092d6b8;
            uVar6 = (ulong)uVar10;
            *(uint *)(puVar1 + 5) = uVar10;
            *(int *)((long)puVar1 + 0x2c) = iVar12;
            uVar15 = 0;
            if (uVar6 != 0) {
              uVar15 = uVar8 / uVar6;
            }
            uVar10 = 0;
            iVar12 = 0;
            uVar8 = 0;
            if (uVar6 != 0) {
              uVar8 = uVar5 / uVar6;
            }
            lVar7 = 0;
            if (uVar6 != 0) {
              lVar7 = lVar14 / (long)uVar6;
            }
            puVar1[2] = uVar15;
            puVar1[3] = uVar8;
            lVar14 = 0;
            *puVar1 = puVar13;
            puVar1[1] = param_1;
            puVar1[4] = lVar7;
            puVar13[1] = puVar1;
            *param_1 = puVar1;
            param_1[2] = param_1[2] + 1;
            uVar8 = 0;
            uVar5 = 0;
            puVar13 = puVar1;
          }
        }
LAB_0092d5ac:
        if (uVar8 == 0x7fffffffffffffff) {
          uVar15 = 0x7fffffffffffffff;
        }
        else {
          uVar15 = 0x7fffffffffffffff;
          if (lVar3 != 0x7fffffffffffffff) {
            uVar15 = 0x8000000000000000;
            if (lVar3 != -0x8000000000000000 && uVar8 != 0x8000000000000000) {
              uVar15 = uVar8 + lVar3;
            }
          }
        }
        uVar8 = uVar15;
        uVar15 = 0x7fffffffffffffff;
        if ((uVar5 != 0x7fffffffffffffff) && (lVar9 != 0x7fffffffffffffff)) {
          uVar15 = 0x8000000000000000;
          if (lVar9 != -0x8000000000000000 && uVar5 != 0x8000000000000000) {
            uVar15 = uVar5 + lVar9;
          }
        }
        lVar4 = 0x7fffffffffffffff;
        if ((lVar14 != 0x7fffffffffffffff) &&
           (lVar7 = *(long *)(lVar11 + 0x20), lVar7 != 0x7fffffffffffffff)) {
          lVar4 = -0x8000000000000000;
          if (lVar7 != -0x8000000000000000 && lVar14 != -0x8000000000000000) {
            lVar4 = lVar7 + lVar14;
          }
        }
        lVar3 = *(long *)(lVar11 + 0x10);
        uVar10 = uVar10 + 1;
      }
      lVar2 = *(long *)(lVar11 + 0x18);
      lVar11 = *(long *)(lVar11 + 8);
      lVar7 = lVar3;
      lVar14 = lVar4;
      uVar5 = uVar15;
    } while (lVar11 != param_2 + 0xd8);
    if (((3 < (int)uVar10) && (0 < (long)uVar8)) && (0 < (long)uVar15)) {
      puVar1 = (undefined8 *)operator_new(0x30);
      if ((puVar1 == (undefined8 *)0x0) || (puVar1 == (undefined8 *)0xfffffffffffffff0)) {
LAB_0092d6b8:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      uVar6 = (ulong)uVar10;
      puVar13[1] = puVar1;
      uVar5 = 0;
      if (uVar6 != 0) {
        uVar5 = uVar8 / uVar6;
      }
      *(uint *)(puVar1 + 5) = uVar10;
      *(int *)((long)puVar1 + 0x2c) = iVar12;
      uVar8 = 0;
      if (uVar6 != 0) {
        uVar8 = uVar15 / uVar6;
      }
      lVar11 = 0;
      if (uVar6 != 0) {
        lVar11 = lVar4 / (long)uVar6;
      }
      puVar1[2] = uVar5;
      puVar1[3] = uVar8;
      *puVar1 = puVar13;
      puVar1[1] = param_1;
      *param_1 = puVar1;
      puVar1[4] = lVar11;
      param_1[2] = param_1[2] + 1;
    }
  }
  return;
}


// ===== 0092d6cc  FUN_0092d6cc =====

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa0 : 0x0092d8e0 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

long * FUN_0092d6cc(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  char *local_a8;
  undefined8 local_a0;
  undefined1 *local_98;
  char *local_90;
  char **ppcStack_88;
  long local_80;
  char **ppcStack_78;
  char *local_70;
  long *plStack_68;
  long local_60;
  char **ppcStack_58;
  char *local_50;
  long *plStack_48;
  ulong local_40;
  char **ppcStack_38;
  undefined1 uStack_11;
  
  lVar6 = local_60;
  lVar16 = *(long *)(param_2 + 8);
  if (lVar16 == param_2) {
    plVar15 = (long *)0x0;
  }
  else {
    lVar10 = 0;
    plVar14 = (long *)0x0;
    do {
      lVar11 = *(long *)(lVar16 + 0x10);
      lVar8 = lVar10;
      plVar15 = plVar14;
      if ((lVar11 != 0) && (lVar12 = *(long *)(lVar16 + 0x18), lVar12 != 0)) {
        if ((*(int *)(lVar16 + 0x2c) <= *(int *)(lVar16 + 0x28) / 2) ||
           ((lVar11 == -0x8000000000000000 || (lVar12 == 0x7fffffffffffffff)))) {
LAB_0092d7a4:
          uVar7 = FUN_00417e08();
          if ((uVar7 & 1) != 0) {
            return plVar14;
          }
          local_a8 = 
          "../../modules/remote_bitrate_estimator/remote_bitrate_estimator_abs_send_time.cc";
          local_a0 = 0x4c9;
          local_98 = &uStack_11;
          ppcStack_88 = &local_a8;
          local_90 = "Probe failed, sent at ";
          uVar7 = *(ulong *)(lVar16 + 0x10);
          plStack_68 = &local_80;
          local_70 = " bps, received at ";
          ppcStack_78 = &local_90;
          lVar10 = *(long *)(lVar16 + 0x20) * 8000000;
          local_80 = 0;
          if (uVar7 != 0) {
            local_80 = lVar10 / (long)uVar7;
          }
          uVar9 = *(ulong *)(lVar16 + 0x18);
          local_60 = 0;
          if (uVar9 != 0) {
            local_60 = lVar10 / (long)uVar9;
          }
          plStack_48 = &local_60;
          local_50 = " bps. Mean send delta: ";
          if ((long)uVar7 < 0) {
            local_40 = -(-uVar7 / 1000) - (ulong)(500 < -uVar7 % 1000);
          }
          else {
            local_40 = uVar7 / 1000;
            if (499 < uVar7 % 1000) {
              local_40 = local_40 + 1;
            }
          }
          ppcStack_38 = &local_50;
          if ((long)uVar9 < 0) {
            uVar7 = -(-uVar9 / 1000) - (ulong)(500 < -uVar9 % 1000);
          }
          else {
            uVar7 = uVar9 / 1000;
            if (499 < uVar9 % 1000) {
              uVar7 = uVar7 + 1;
            }
          }
          uVar1 = *ppcStack_58;
          puVar2 = ppcStack_58 + 1;
          puVar3 = (undefined8 *)((undefined8 *)*puVar2)[1];
          puVar4 = (undefined8 *)puVar3[1];
          ppcStack_58 = &local_70;
          FUN_00623bb0(&DAT_002268d8,*puVar4,*(undefined4 *)(puVar4 + 1),*puVar3,
                       *(undefined8 *)*puVar2,uVar1,lVar6," bps. Mean send delta: ",local_40,
                       " ms, mean recv delta: ",uVar7," ms, num probes: ",
                       *(undefined4 *)(lVar16 + 0x28));
          return plVar14;
        }
        if (((lVar11 != 0x7fffffffffffffff && lVar12 != -0x8000000000000000) &&
            (2000 < lVar12 - lVar11)) ||
           (5000 < lVar11 - lVar12 ||
            (lVar11 == 0x7fffffffffffffff || lVar12 == -0x8000000000000000))) goto LAB_0092d7a4;
        lVar13 = *(long *)(lVar16 + 0x20) * 8000000;
        lVar5 = 0;
        if (lVar11 != 0) {
          lVar5 = lVar13 / lVar11;
        }
        lVar8 = 0;
        if (lVar12 != 0) {
          lVar8 = lVar13 / lVar12;
        }
        if (lVar5 <= lVar8) {
          lVar8 = lVar5;
        }
        plVar15 = (long *)(lVar16 + 0x10);
        if (lVar8 <= lVar10) {
          lVar8 = lVar10;
          plVar15 = plVar14;
        }
      }
      lVar16 = *(long *)(lVar16 + 8);
      lVar10 = lVar8;
      plVar14 = plVar15;
    } while (lVar16 != param_2);
  }
  return plVar15;
}


// ===== 0092d934  FUN_0092d934 =====

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff60 : 0x0092dbe0 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_0092d934(long param_1,undefined8 param_2)

{
  bool bVar1;
  char *pcVar2;
  char **ppcVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined1 **ppuVar7;
  byte bVar8;
  undefined8 uVar9;
  ulong *puVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined4 uVar16;
  undefined1 **ppuVar17;
  undefined1 uStack_e9;
  char *local_e8;
  undefined8 local_e0;
  undefined1 *local_d8;
  char *local_d0;
  char **ppcStack_c8;
  long local_c0;
  char **ppcStack_b8;
  char *local_b0;
  long *plStack_a8;
  long local_a0;
  char **ppcStack_98;
  char *local_90;
  long *plStack_88;
  ulong local_80;
  char **ppcStack_78;
  undefined1 *local_70;
  undefined1 **ppuStack_68;
  undefined1 *local_60;
  
  ppuStack_68 = (undefined1 **)&DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  uVar9 = FUN_0092d380(&local_70);
  if (local_60 == (undefined1 *)0x0) {
    if (0xe < *(ulong *)(param_1 + 0xe8)) {
      plVar13 = *(long **)(param_1 + 0xe0);
      plVar4 = (long *)plVar13[1];
      *(long **)(*plVar13 + 8) = plVar4;
      *plVar4 = *plVar13;
      *(long *)(param_1 + 0xe8) = *(long *)(param_1 + 0xe8) + -1;
      if ((plVar13 == (long *)0xfffffffffffffff0) || (plVar13 == (long *)0x0)) {
LAB_0092dca8:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      operator_delete(plVar13);
    }
  }
  else {
    puVar10 = (ulong *)FUN_0092d6cc(uVar9,&local_70);
    if (puVar10 != (ulong *)0x0) {
      lVar12 = 0;
      if (*puVar10 != 0) {
        lVar12 = (long)(puVar10[2] * 8000000) / (long)*puVar10;
      }
      lVar6 = 0;
      if (puVar10[1] != 0) {
        lVar6 = (long)(puVar10[2] * 8000000) / (long)puVar10[1];
      }
      if (lVar12 <= lVar6) {
        lVar6 = lVar12;
      }
      bVar8 = FUN_008f2b68(param_1 + 0x128);
      uVar11 = FUN_008f2b68(param_1 + 0x128);
      if ((uVar11 & 1) == 0) {
        bVar1 = false;
      }
      else {
        lVar12 = FUN_008f2c64(param_1 + 0x128);
        bVar1 = lVar12 < lVar6;
      }
      if (((0 < lVar6 & (bVar8 ^ 0xff)) != 0) || (bVar1)) {
        uVar11 = FUN_00417e08();
        lVar12 = local_a0;
        if ((uVar11 & 1) == 0) {
          local_e8 = 
          "../../modules/remote_bitrate_estimator/remote_bitrate_estimator_abs_send_time.cc";
          local_e0 = 0x5a9;
          local_d8 = &uStack_e9;
          ppcStack_c8 = &local_e8;
          local_d0 = "Probe successful, sent at ";
          uVar11 = *puVar10;
          plStack_a8 = &local_c0;
          local_b0 = " bps, received at ";
          ppcStack_b8 = &local_d0;
          local_c0 = 0;
          if (uVar11 != 0) {
            local_c0 = (long)(puVar10[2] * 8000000) / (long)uVar11;
          }
          uVar14 = puVar10[1];
          local_a0 = 0;
          if (uVar14 != 0) {
            local_a0 = (long)(puVar10[2] * 8000000) / (long)uVar14;
          }
          plStack_88 = &local_a0;
          local_90 = " bps. Mean send delta: ";
          if ((long)uVar11 < 0) {
            local_80 = -(-uVar11 / 1000) - (ulong)(500 < -uVar11 % 1000);
          }
          else {
            local_80 = uVar11 / 1000;
            if (499 < uVar11 % 1000) {
              local_80 = local_80 + 1;
            }
          }
          ppcStack_78 = &local_90;
          if ((long)uVar14 < 0) {
            uVar11 = -(-uVar14 / 1000) - (ulong)(500 < -uVar14 % 1000);
          }
          else {
            uVar11 = uVar14 / 1000;
            if (499 < uVar14 % 1000) {
              uVar11 = uVar11 + 1;
            }
          }
          pcVar2 = *ppcStack_98;
          ppcVar3 = ppcStack_98 + 1;
          puVar15 = *(undefined8 **)(*ppcVar3 + 8);
          puVar5 = (undefined8 *)puVar15[1];
          ppcStack_98 = &local_b0;
          FUN_00623bb0(&DAT_002268d8,*puVar5,*(undefined4 *)(puVar5 + 1),*puVar15,
                       *(undefined8 *)*ppcVar3,pcVar2,lVar12," bps. Mean send delta: ",local_80,
                       " ms, mean recv delta: ",uVar11," ms, num probes: ",(int)puVar10[3]);
        }
        FUN_008f33ec(param_1 + 0x128,lVar6,param_2);
        uVar16 = 0;
        goto joined_r0x0092dc30;
      }
    }
    if (local_60 < (undefined1 *)0x3) {
      uVar16 = 1;
      goto joined_r0x0092dc30;
    }
    if (*(long *)(param_1 + 0xe8) != 0) {
      plVar4 = *(long **)(param_1 + 0xe0);
      plVar13 = *(long **)(*(long *)(param_1 + 0xd8) + 8);
      *(long **)(*plVar4 + 8) = plVar13;
      *plVar13 = *plVar4;
      *(undefined8 *)(param_1 + 0xe8) = 0;
      while (plVar4 != (long *)(param_1 + 0xd8)) {
        if ((plVar4 == (long *)0xfffffffffffffff0) || (plVar4 == (long *)0x0)) goto LAB_0092dca8;
        plVar13 = (long *)plVar4[1];
        operator_delete(plVar4);
        plVar4 = plVar13;
      }
    }
  }
  uVar16 = 1;
joined_r0x0092dc30:
  if (local_60 != (undefined1 *)0x0) {
    puVar15 = *(undefined8 **)(local_70 + 8);
    *(undefined8 **)(*ppuStack_68 + 8) = puVar15;
    *puVar15 = *ppuStack_68;
    local_60 = (undefined1 *)0x0;
    ppuVar7 = ppuStack_68;
    while (ppuVar7 != &local_70) {
      if ((ppuVar7 == (undefined1 **)0xfffffffffffffff0) || (ppuVar7 == (undefined1 **)0x0))
      goto LAB_0092dca8;
      ppuVar17 = (undefined1 **)ppuVar7[1];
      operator_delete(ppuVar7);
      ppuVar7 = ppuVar17;
    }
  }
  return uVar16;
}


// ===== 0092dcbc  FUN_0092dcbc =====

void FUN_0092dcbc(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  ulong uVar8;
  size_t sVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  undefined1 extraout_w1;
  ulong extraout_x1;
  ulong uVar14;
  undefined1 uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  long *plVar22;
  long *plVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined8 local_a0;
  undefined1 local_98;
  undefined4 *local_90;
  undefined4 *puStack_88;
  undefined4 *local_80;
  undefined4 local_74;
  undefined8 local_70;
  undefined1 *local_68;
  uint local_58;
  int local_54;
  
  local_54 = -0x55555556;
  auVar25 = FUN_007dba34(param_2,5);
  if ((auVar25._8_8_ == 0) ||
     (uVar8 = FUN_007d8d58(auVar25._0_8_,auVar25._8_8_,&local_54), (uVar8 & 1) == 0)) {
    uVar8 = FUN_004022fc();
    if ((uVar8 & 1) != 0) {
      return;
    }
    FUN_00623bb0(&DAT_001f4e98,
                 "../../modules/remote_bitrate_estimator/remote_bitrate_estimator_abs_send_time.cc",
                 0x6a2,
                 "RemoteBitrateEstimatorAbsSendTimeImpl: Incoming packet is missing absolute send time extension!"
                );
    return;
  }
  uVar8 = *(ulong *)(param_2 + 0x70);
  lVar1 = *(long *)(param_2 + 0x18) + (ulong)*(byte *)(param_2 + 2);
  if ((*(byte *)(param_1 + 0x108) & 1) == 0) {
    sVar9 = strlen("WebRTC.BWE.Types");
    lVar10 = FUN_0066631c("WebRTC.BWE.Types",sVar9,4);
    if (lVar10 != 0) {
      FUN_00666568(lVar10,2);
    }
    *(undefined1 *)(param_1 + 0x108) = 1;
  }
  local_68 = &DAT_aaaaaaaaaaaaaaaa;
  uVar2 = local_54 << 8;
  dVar24 = (double)uVar2 * 1.4901161193847656e-05 * 1000.0;
  uVar14 = 0x7fffffffffffffff;
  if (dVar24 != INFINITY) {
    uVar14 = (long)dVar24;
  }
  local_68 = (undefined1 *)(**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
  FUN_00853260(param_1 + 0x70,uVar8);
  if ((extraout_x1 & 1) == 0) {
    if (*(char *)(param_1 + 0xd0) == '\x01') {
      FUN_007deb14(param_1 + 0x70);
      uVar15 = 0;
      goto LAB_0092de14;
    }
  }
  else {
    uVar15 = 1;
LAB_0092de14:
    *(undefined1 *)(param_1 + 0xd0) = uVar15;
  }
  FUN_008532e0(param_1 + 0x70,lVar1,uVar8);
  if (*(long *)(param_1 + 0xf8) + 0x8000000000000001U < 2) {
    *(undefined1 **)(param_1 + 0xf8) = local_68;
  }
  local_58 = 0;
  local_70 = 0;
  local_74 = 0;
  FUN_0092e654(param_1);
  local_90 = (undefined4 *)CONCAT44(local_90._4_4_,*(undefined4 *)(param_2 + 0xc));
  auVar25 = FUN_0092ebe8(0,param_1 + 0x110,param_1 + 0x110,&local_90,&local_68);
  if ((auVar25 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
    *(undefined1 **)(auVar25._0_8_ + 0x28) = local_68;
  }
  if (lVar1 < 0xc9) {
LAB_0092df08:
    bVar4 = false;
    uVar12 = *(undefined8 *)(param_1 + 0x38);
    if (-1 < (long)uVar8) goto LAB_0092df10;
LAB_0092e1b0:
    uVar14 = -(-uVar8 / 1000) - (ulong)(500 < -uVar8 % 1000);
    if ((long)local_68 < 0) goto LAB_0092e1dc;
LAB_0092df34:
    uVar11 = (ulong)local_68 / 1000;
    if (499 < (ulong)local_68 % 1000) {
      uVar11 = uVar11 + 1;
    }
  }
  else {
    uVar11 = FUN_008f2b68(param_1 + 0x128);
    if ((uVar11 & 1) == 0) {
LAB_0092df54:
      if (*(ulong *)(param_1 + 0xf0) < 0xf) {
        if (*(long *)(param_1 + 0xe8) == 0) {
          uVar19 = 0xfffffffffffffc18;
          uVar11 = 0xfffffffffffffc18;
        }
        else {
          if (uVar14 == 0x7fffffffffffffff) {
            uVar19 = 0x7fffffffffffffff;
          }
          else {
            lVar10 = *(long *)(*(long *)(param_1 + 0xd8) + 0x10);
            uVar19 = 0x7fffffffffffffff;
            if (lVar10 != -0x8000000000000000) {
              uVar19 = 0x8000000000000000;
              if (lVar10 != 0x7fffffffffffffff && uVar14 != 0x8000000000000000) {
                uVar19 = uVar14 - lVar10;
              }
            }
          }
          uVar11 = 0x7fffffffffffffff;
          if ((uVar8 != 0x7fffffffffffffff) &&
             (lVar10 = *(long *)(*(long *)(param_1 + 0xd8) + 0x18), lVar10 != -0x8000000000000000))
          {
            uVar11 = 0x8000000000000000;
            if (lVar10 != 0x7fffffffffffffff && uVar8 != 0x8000000000000000) {
              uVar11 = uVar8 - lVar10;
            }
          }
        }
        uVar18 = FUN_00417e08();
        if ((uVar18 & 1) == 0) {
          if ((long)uVar14 < 0) {
            uVar18 = -(-uVar14 / 1000) - (ulong)(500 < -uVar14 % 1000);
          }
          else {
            uVar18 = uVar14 / 1000;
            if (499 < uVar14 % 1000) {
              uVar18 = uVar18 + 1;
            }
          }
          if ((long)uVar8 < 0) {
            uVar16 = -(-uVar8 / 1000) - (ulong)(500 < -uVar8 % 1000);
          }
          else {
            uVar16 = uVar8 / 1000;
            if (499 < uVar8 % 1000) {
              uVar16 = uVar16 + 1;
            }
          }
          if ((long)uVar19 < 0) {
            uVar17 = -(-uVar19 / 1000) - (ulong)(500 < -uVar19 % 1000);
          }
          else {
            uVar17 = uVar19 / 1000;
            if (499 < uVar19 % 1000) {
              uVar17 = uVar17 + 1;
            }
          }
          if ((long)uVar11 < 0) {
            uVar19 = -(-uVar11 / 1000) - (ulong)(500 < -uVar11 % 1000);
          }
          else {
            uVar19 = uVar11 / 1000;
            if (499 < uVar11 % 1000) {
              uVar19 = uVar19 + 1;
            }
          }
          FUN_00623bb0(&DAT_002268e4,
                       "../../modules/remote_bitrate_estimator/remote_bitrate_estimator_abs_send_time.cc"
                       ,0x8c9,"Probe packet received: send time=",uVar18," ms, recv time=",uVar16,
                       " ms, send delta=",uVar17," ms, recv delta=",uVar19,&DAT_001ed1d7);
        }
      }
      plVar22 = (long *)operator_new(0x28);
      if ((plVar22 == (long *)0x0) || (plVar22 == (long *)0xfffffffffffffff0)) {
LAB_0092e63c:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      lVar10 = *(long *)(param_1 + 0xd8);
      plVar22[2] = uVar14;
      plVar22[3] = uVar8;
      plVar22[4] = lVar1;
      *plVar22 = lVar10;
      plVar22[1] = param_1 + 0xd8;
      *(long **)(lVar10 + 8) = plVar22;
      *(long **)(param_1 + 0xd8) = plVar22;
      *(long *)(param_1 + 0xf0) = *(long *)(param_1 + 0xf0) + 1;
      *(long *)(param_1 + 0xe8) = *(long *)(param_1 + 0xe8) + 1;
      iVar6 = FUN_0092d934(param_1,local_68);
      bVar4 = iVar6 == 0;
      uVar12 = *(undefined8 *)(param_1 + 0x38);
    }
    else {
      if ((local_68 == (undefined1 *)0x7fffffffffffffff) ||
         (lVar10 = *(long *)(param_1 + 0xf8), lVar10 == -0x8000000000000000)) goto LAB_0092df08;
      if (((local_68 == (undefined1 *)0x8000000000000000) || (lVar10 == 0x7fffffffffffffff)) ||
         ((long)local_68 - lVar10 < 2000000)) goto LAB_0092df54;
      bVar4 = false;
      uVar12 = *(undefined8 *)(param_1 + 0x38);
    }
    if ((long)uVar8 < 0) goto LAB_0092e1b0;
LAB_0092df10:
    uVar14 = uVar8 / 1000;
    if (499 < uVar8 % 1000) {
      uVar14 = uVar14 + 1;
    }
    if (-1 < (long)local_68) goto LAB_0092df34;
LAB_0092e1dc:
    uVar11 = -((ulong)-(long)local_68 / 1000) - (ulong)(500 < (ulong)-(long)local_68 % 1000);
  }
  uVar14 = FUN_0092ee9c(uVar12,uVar2,uVar14,uVar11,lVar1,&local_58,&local_70,&local_74);
  uVar12 = local_70;
  uVar7 = local_74;
  if ((uVar14 & 1) != 0) {
    uVar20 = *(undefined8 *)(param_1 + 0x40);
    dVar24 = (double)NEON_ucvtf((ulong)local_58);
    dVar24 = dVar24 * 1000.0 * 1.4901161193847656e-08;
    uVar5 = FUN_0092ed1c(param_1 + 0x48);
    if ((long)uVar8 < 0) {
      uVar14 = -(-uVar8 / 1000) - (ulong)(500 < -uVar8 % 1000);
    }
    else {
      uVar14 = uVar8 / 1000;
      if (499 < uVar8 % 1000) {
        uVar14 = uVar14 + 1;
      }
    }
    FUN_0092f12c(dVar24,uVar20,uVar12,uVar7,uVar5,uVar14);
    if ((long)uVar8 < 0) {
      uVar14 = -(-uVar8 / 1000) - (ulong)(500 < -uVar8 % 1000);
    }
    else {
      uVar14 = uVar8 / 1000;
      if (499 < uVar8 % 1000) {
        uVar14 = uVar14 + 1;
      }
    }
    FUN_0092ed28(*(undefined8 *)(*(undefined4 **)(param_1 + 0x40) + 4),dVar24,param_1 + 0x48,
                 **(undefined4 **)(param_1 + 0x40),uVar14);
  }
  if ((bVar4) || (uVar14 = *(ulong *)(param_1 + 0x100), uVar14 + 0x8000000000000001 < 2))
  goto LAB_0092e458;
  if ((long)local_68 < 0) {
    uVar11 = -((ulong)-(long)local_68 / 1000) - (ulong)(500 < (ulong)-(long)local_68 % 1000);
    if ((long)uVar14 < 0) goto LAB_0092e39c;
LAB_0092e354:
    uVar19 = uVar14 / 1000;
    if (499 < uVar14 % 1000) {
      uVar19 = uVar19 + 1;
    }
  }
  else {
    uVar11 = (ulong)local_68 / 1000;
    if (499 < (ulong)local_68 % 1000) {
      uVar11 = uVar11 + 1;
    }
    if (-1 < (long)uVar14) goto LAB_0092e354;
LAB_0092e39c:
    uVar19 = -(-uVar14 / 1000) - (ulong)(500 < -uVar14 % 1000);
  }
  uVar14 = FUN_008f2b74(param_1 + 0x128);
  if ((long)uVar14 < 0) {
    uVar18 = -(-uVar14 / 1000) - (ulong)(500 < -uVar14 % 1000);
  }
  else {
    uVar18 = uVar14 / 1000;
    if (499 < uVar14 % 1000) {
      uVar18 = uVar18 + 1;
    }
  }
  if ((long)(uVar11 - uVar19) <= (long)uVar18) {
    iVar6 = FUN_0092ed1c(param_1 + 0x48);
    if (iVar6 != 2) {
      return;
    }
    auVar25 = FUN_00853260(param_1 + 0x70,uVar8);
    if ((auVar25 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
      return;
    }
    uVar14 = FUN_008f2bc0(param_1 + 0x128,local_68,auVar25._0_8_);
    if ((uVar14 & 1) == 0) {
      return;
    }
  }
LAB_0092e458:
  puStack_88 = (undefined4 *)&DAT_aaaaaaaaaaaaaaaa;
  local_90 = (undefined4 *)&DAT_aaaaaaaaaaaaaaaa;
  local_80 = (undefined4 *)&DAT_aaaaaaaaaaaaaaaa;
  uVar7 = FUN_0092ed1c(param_1 + 0x48);
  local_a0 = FUN_00853260(param_1 + 0x70,uVar8);
  local_98 = extraout_w1;
  FUN_008f3924(&local_90,uVar7,&local_a0);
  uVar7 = FUN_008f2d20(param_1 + 0x128,&local_90,local_68);
  uVar8 = FUN_008f2b68(param_1 + 0x128);
  FUN_008f3938(&local_90);
  if ((uVar8 & 1) != 0) {
    uVar8 = *(ulong *)(param_1 + 0x120);
    puVar21 = *(undefined8 **)(param_1 + 0x30);
    local_90 = (undefined4 *)0x0;
    puStack_88 = (undefined4 *)0x0;
    *(undefined1 **)(param_1 + 0x100) = local_68;
    local_80 = (undefined4 *)0x0;
    if (uVar8 != 0) {
      if (uVar8 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_005da79c();
      }
      puStack_88 = (undefined4 *)operator_new(uVar8 * 4);
      local_80 = puStack_88 + uVar8;
    }
    plVar22 = *(long **)(param_1 + 0x110);
    local_90 = puStack_88;
    while (plVar22 != (long *)(param_1 + 0x118)) {
      if (puStack_88 < local_80) {
        if (puStack_88 == (undefined4 *)0x0) goto LAB_0092e63c;
        puVar13 = puStack_88 + 1;
        *puStack_88 = (int)plVar22[4];
      }
      else {
        puVar13 = (undefined4 *)FUN_00852528(&local_90,plVar22 + 4);
      }
      plVar3 = (long *)plVar22[1];
      plVar23 = plVar22;
      puStack_88 = puVar13;
      if ((long *)plVar22[1] == (long *)0x0) {
        do {
          plVar22 = (long *)plVar23[2];
          bVar4 = plVar23 != (long *)*plVar22;
          plVar23 = plVar22;
        } while (bVar4);
      }
      else {
        do {
          plVar22 = plVar3;
          plVar3 = (long *)*plVar22;
        } while ((long *)*plVar22 != (long *)0x0);
      }
    }
    (**(code **)*puVar21)(puVar21,&local_90,uVar7);
    if (local_90 != (undefined4 *)0x0) {
      uVar14 = (ulong)((long)puStack_88 + (-4 - ((long)puStack_88 << 0x3e))) >> 2;
      uVar8 = (ulong)(((long)local_90 - (long)puStack_88 << 0x3e) -
                     ((long)local_90 - (long)puStack_88)) >> 2;
      if (uVar14 <= uVar8) {
        uVar8 = uVar14;
      }
      puVar13 = puStack_88;
      if ((1 < uVar8) && ((((int)local_90 - (int)puStack_88 | -(int)puStack_88) & 3U) == 0)) {
        uVar8 = uVar8 & 0x3ffffffffffffffe;
        puVar13 = puStack_88 + -uVar8;
        do {
          uVar8 = uVar8 - 2;
        } while (uVar8 != 0);
      }
      while (puVar13 != local_90) {
        puVar13 = puVar13 + -1;
        if (puVar13 == (undefined4 *)0x0) {
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
  }
  return;
}


// ===== 0092e654  FUN_0092e654 =====

void FUN_0092e654(long param_1,long param_2)

{
  bool bVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  puVar8 = *(undefined8 **)(param_1 + 0x110);
  while( true ) {
    while( true ) {
      if (puVar8 == (undefined8 *)(param_1 + 0x118)) {
        if (*(long *)(param_1 + 0x120) == 0) {
          pvVar2 = operator_new(0x68);
          FUN_0092ee74(0x3eef400000000000,pvVar2,0x51eb8);
          pvVar3 = *(void **)(param_1 + 0x38);
          *(void **)(param_1 + 0x38) = pvVar2;
          if (pvVar3 != (void *)0x0) {
            operator_delete(pvVar3);
          }
          pvVar2 = operator_new(0x90);
          FUN_0092f0e4();
          pvVar3 = *(void **)(param_1 + 0x40);
          *(void **)(param_1 + 0x40) = pvVar2;
          if (pvVar3 != (void *)0x0) {
            FUN_0092e9bc((long)pvVar3 + 0x60);
            operator_delete(pvVar3);
            return;
          }
        }
        return;
      }
      if (((param_2 == 0x7fffffffffffffff) || (lVar4 = puVar8[5], lVar4 == -0x8000000000000000)) ||
         ((param_2 != -0x8000000000000000 &&
          ((lVar4 != 0x7fffffffffffffff && (2000000 < param_2 - lVar4)))))) break;
      puVar5 = (undefined8 *)puVar8[1];
      puVar7 = puVar8;
      if ((undefined8 *)puVar8[1] == (undefined8 *)0x0) {
        do {
          puVar8 = (undefined8 *)puVar7[2];
          bVar1 = puVar7 != (undefined8 *)*puVar8;
          puVar7 = puVar8;
        } while (bVar1);
      }
      else {
        do {
          puVar8 = puVar5;
          puVar5 = (undefined8 *)*puVar8;
        } while ((undefined8 *)*puVar8 != (undefined8 *)0x0);
      }
    }
    puVar7 = (undefined8 *)puVar8[1];
    puVar5 = puVar7;
    puVar6 = puVar8;
    if (puVar7 == (undefined8 *)0x0) {
      do {
        puVar9 = (undefined8 *)puVar6[2];
        bVar1 = puVar6 != (undefined8 *)*puVar9;
        puVar5 = puVar8;
        puVar6 = puVar9;
      } while (bVar1);
      do {
        puVar6 = (undefined8 *)puVar5[2];
        bVar1 = puVar5 != (undefined8 *)*puVar6;
        puVar5 = puVar6;
      } while (bVar1);
    }
    else {
      do {
        puVar9 = puVar5;
        puVar5 = (undefined8 *)*puVar9;
      } while ((undefined8 *)*puVar9 != (undefined8 *)0x0);
      do {
        puVar6 = puVar7;
        puVar7 = (undefined8 *)*puVar6;
      } while ((undefined8 *)*puVar6 != (undefined8 *)0x0);
    }
    if (*(undefined8 **)(param_1 + 0x110) == puVar8) {
      *(undefined8 **)(param_1 + 0x110) = puVar6;
    }
    *(long *)(param_1 + 0x120) = *(long *)(param_1 + 0x120) + -1;
    FUN_005d5d48(*(undefined8 *)(param_1 + 0x118),puVar8);
    if (puVar8 == (undefined8 *)0xffffffffffffffe0) break;
    operator_delete(puVar8);
    puVar8 = puVar9;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 0092e860  FUN_0092e860 =====

undefined8 FUN_0092e860(void)

{
  return 0x7fffffffffffffff;
}


// ===== 0092e86c  FUN_0092e86c =====

void FUN_0092e86c(long param_1,long param_2)

{
  FUN_008f2d14(param_1 + 0x128,param_2 * 1000);
  return;
}


// ===== 0092e880  FUN_0092e880 =====

void FUN_0092e880(long param_1,uint param_2)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  plVar3 = *(long **)(param_1 + 0x118);
  if (plVar3 != (long *)0x0) {
    plVar6 = plVar3;
    do {
      while (param_2 < *(uint *)(plVar6 + 4)) {
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) {
          return;
        }
      }
      if (param_2 == *(uint *)(plVar6 + 4)) {
        if (plVar6 == (long *)(param_1 + 0x118)) {
          return;
        }
        plVar4 = plVar6;
        plVar1 = (long *)plVar6[1];
        if ((long *)plVar6[1] == (long *)0x0) {
          do {
            plVar5 = (long *)plVar4[2];
            bVar2 = plVar4 != (long *)*plVar5;
            plVar4 = plVar5;
          } while (bVar2);
        }
        else {
          do {
            plVar5 = plVar1;
            plVar1 = (long *)*plVar5;
          } while ((long *)*plVar5 != (long *)0x0);
        }
        if (*(long **)(param_1 + 0x110) == plVar6) {
          *(long **)(param_1 + 0x110) = plVar5;
        }
        *(long *)(param_1 + 0x120) = *(long *)(param_1 + 0x120) + -1;
        FUN_005d5d48(plVar3,plVar6);
        if (plVar6 != (long *)0xffffffffffffffe0) {
          operator_delete(plVar6);
          return;
        }
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      plVar6 = (long *)plVar6[1];
    } while (plVar6 != (long *)0x0);
  }
  return;
}


// ===== 0092e96c  FUN_0092e96c =====

undefined8 FUN_0092e96c(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_008f2b68(param_1 + 0x128);
  if (((uVar1 & 1) != 0) && (*(long *)(param_1 + 0x120) != 0)) {
    uVar2 = FUN_008f2c64(param_1 + 0x128);
    return uVar2;
  }
  return 0;
}


// ===== 0092e9bc  FUN_0092e9bc =====

void FUN_0092e9bc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  puVar9 = (undefined8 *)param_1[1];
  puVar2 = (undefined8 *)param_1[2];
  if (puVar9 != puVar2) {
    uVar7 = param_1[4];
    plVar3 = puVar9 + (uVar7 >> 9);
    lVar5 = *plVar3;
    lVar4 = lVar5 + (uVar7 & 0x1ff) * 8;
    while (lVar4 != puVar9[param_1[5] + uVar7 >> 9] + (param_1[5] + uVar7 & 0x1ff) * 8) {
      if (lVar4 == 0) goto LAB_0092eb24;
      lVar4 = lVar4 + 8;
      if (lVar4 - lVar5 == 0x1000) {
        plVar3 = plVar3 + 1;
        lVar5 = *plVar3;
        lVar4 = lVar5;
      }
    }
  }
  param_1[5] = 0;
  lVar4 = (long)puVar2 - (long)puVar9;
  while (uVar7 = lVar4 >> 3, 2 < uVar7) {
    operator_delete((void *)*puVar9);
    puVar2 = (undefined8 *)param_1[2];
    puVar9 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = puVar9;
    lVar4 = (long)puVar2 - (long)puVar9;
  }
  if (uVar7 == 1) {
    uVar1 = 0x100;
  }
  else {
    if (uVar7 != 2) goto LAB_0092ea9c;
    uVar1 = 0x200;
  }
  param_1[4] = uVar1;
LAB_0092ea9c:
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
  uVar6 = (ulong)((long)puVar8 + (-8 - ((long)puVar8 << 0x3d))) >> 3;
  uVar7 = (ulong)(((long)puVar2 - (long)puVar8 << 0x3d) - ((long)puVar2 - (long)puVar8)) >> 3;
  if (uVar6 <= uVar7) {
    uVar7 = uVar6;
  }
  if ((1 < uVar7) && ((((int)puVar2 - (int)puVar8 | -(int)puVar8) & 7U) == 0)) {
    uVar7 = uVar7 & 0x1ffffffffffffffe;
    puVar8 = puVar8 + -uVar7;
    do {
      uVar7 = uVar7 - 2;
    } while (uVar7 != 0);
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
LAB_0092eb24:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 0092eb74  FUN_0092eb74 =====

void FUN_0092eb74(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_0092eb74(param_1,*param_2);
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


// ===== 0092ebe8  FUN_0092ebe8 =====

undefined1  [16]
FUN_0092ebe8(undefined8 param_1,long *param_2,undefined8 param_3,uint *param_4,long *param_5)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  
  plVar4 = param_2 + 1;
  plVar7 = plVar4;
  if ((long *)*plVar4 != (long *)0x0) {
    plVar2 = (long *)*plVar4;
    do {
      while (plVar3 = plVar2, plVar4 = plVar3, *param_4 < *(uint *)(plVar3 + 4)) {
        plVar2 = (long *)*plVar3;
        plVar7 = plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_0092ec54;
      }
      if (*param_4 == *(uint *)(plVar3 + 4)) {
        uVar5 = 0;
        goto LAB_0092ecc8;
      }
      plVar2 = (long *)plVar3[1];
    } while ((long *)plVar3[1] != (long *)0x0);
    plVar7 = plVar3 + 1;
  }
LAB_0092ec54:
  plVar3 = (long *)operator_new(0x30);
  if ((plVar3 == (long *)0x0) || (*plVar3 = 0, plVar3 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  uVar1 = *param_4;
  lVar6 = *param_5;
  *plVar3 = 0;
  plVar3[1] = 0;
  *(uint *)(plVar3 + 4) = uVar1;
  plVar3[5] = lVar6;
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
LAB_0092ecc8:
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = plVar3;
  return auVar8;
}


// ===== 0092ecf8  FUN_0092ecf8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0092ecf8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = _UNK_001f3678;
  uVar1 = _DAT_001f3670;
  *param_1 = 0x4029000000000000;
  param_1[1] = 0xffffffffffffffff;
  param_1[4] = 0;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  return;
}


// ===== 0092ed1c  FUN_0092ed1c =====

undefined4 FUN_0092ed1c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x24);
}


// ===== 0092ed28  FUN_0092ed28 =====

undefined4 FUN_0092ed28(double param_1,double param_2,double *param_3,uint param_4,double param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  if ((int)param_4 < 2) {
    return 0;
  }
  if (0x3b < param_4) {
    param_4 = 0x3c;
  }
  dVar7 = param_1 * (double)param_4;
  dVar6 = *param_3;
  if (dVar7 == dVar6 || dVar7 < dVar6 != (NAN(dVar7) || NAN(dVar6))) {
    *(undefined4 *)(param_3 + 4) = 0;
    param_3[3] = -1.0;
    if (-dVar6 <= dVar7) {
      *(undefined4 *)((long)param_3 + 0x24) = 0;
    }
    else {
      *(undefined4 *)((long)param_3 + 0x24) = 1;
    }
  }
  else {
    iVar4 = *(int *)(param_3 + 4);
    iVar1 = iVar4 + 1;
    *(int *)(param_3 + 4) = iVar1;
    dVar8 = param_2 * 0.5;
    if (param_3[3] != -1.0) {
      dVar8 = param_2 + param_3[3];
    }
    param_3[3] = dVar8;
    if (((dVar8 != 10.0 && dVar8 < 10.0 == NAN(dVar8)) && iVar4 + -1 < 0 == SBORROW4(iVar1,2)) &&
       (param_1 < param_3[2] == (NAN(param_1) || NAN(param_3[2])))) {
      param_3[3] = 0.0;
      param_3[4] = DAT_001f5200;
    }
  }
  dVar7 = ABS(dVar7);
  param_3[2] = param_1;
  dVar8 = dVar6 + 15.0;
  if (dVar7 == dVar8 || dVar7 < dVar8 != (NAN(dVar7) || NAN(dVar8))) {
    lVar5 = (long)param_5 - (long)param_3[1];
    lVar2 = 8;
    if (dVar6 <= dVar7) {
      lVar2 = 0;
    }
    if (99 < lVar5) {
      lVar5 = 100;
    }
    lVar3 = 0;
    if (param_3[1] != -NAN) {
      lVar3 = lVar5;
    }
    dVar6 = dVar6 + (dVar7 - dVar6) * *(double *)((long)&DAT_001f22b0 + lVar2) * (double)lVar3;
    dVar7 = 600.0;
    if (dVar6 < 600.0 != NAN(dVar6)) {
      dVar7 = dVar6;
    }
    dVar8 = 6.0;
    if (6.0 < dVar6) {
      dVar8 = dVar7;
    }
    *param_3 = dVar8;
  }
  param_3[1] = param_5;
  return *(undefined4 *)((long)param_3 + 0x24);
}


// ===== 0092ee74  FUN_0092ee74 =====

void FUN_0092ee74(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  *param_2 = param_3;
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  *(undefined8 *)(param_2 + 0xe) = 0;
  *(undefined8 *)(param_2 + 0x16) = param_1;
  *(undefined8 *)(param_2 + 8) = 0xffffffffffffffff;
  *(undefined8 *)(param_2 + 6) = 0xffffffffffffffff;
  *(undefined8 *)(param_2 + 0x12) = 0xffffffffffffffff;
  *(undefined8 *)(param_2 + 0x10) = 0xffffffffffffffff;
  param_2[0x18] = 0;
  return;
}


// ===== 0092ee9c  FUN_0092ee9c =====

uint FUN_0092ee9c(uint *param_1,uint param_2,long param_3,undefined8 param_4,long param_5,
                 int *param_6,long *param_7,int *param_8)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 local_38;
  
  if (*(long *)(param_1 + 8) == -1) {
    uVar4 = 0;
    param_1[4] = param_2;
    param_1[5] = param_2;
    *(long *)(param_1 + 6) = param_3;
  }
  else {
    if ((int)(param_2 - param_1[4]) < 0) {
      return 0;
    }
    uVar2 = param_1[5];
    lVar8 = (long)(*(double *)(param_1 + 0x16) * (double)(param_2 - uVar2) + 0.5);
    if (((lVar8 == 0) ||
        (((lVar6 = param_3 - *(long *)(param_1 + 8), lVar6 < 6 && ((int)lVar6 - (int)lVar8 < 0)) &&
         (param_3 - *(long *)(param_1 + 6) < 100)))) || (param_2 - param_1[4] <= *param_1)) {
      iVar3 = uVar2 - param_2;
      if (iVar3 == -0x80000000) {
        bVar1 = param_2 < uVar2;
      }
      else {
        bVar1 = (uVar2 != param_2 && iVar3 != -1) &&
                (uVar2 == param_2 || iVar3 + 1 < 0 == SCARRY4(iVar3,1));
      }
      uVar4 = 0;
      if (!bVar1) {
        uVar2 = param_2;
      }
      param_1[5] = uVar2;
    }
    else {
      lVar8 = *(long *)(param_1 + 0x12);
      if (-1 < lVar8) {
        *param_6 = uVar2 - param_1[0xf];
        lVar6 = *(long *)(param_1 + 8) - *(long *)(param_1 + 0x12);
        *param_7 = lVar6;
        lVar7 = *(long *)(param_1 + 10);
        lVar9 = *(long *)(param_1 + 0x14);
        if (2999 < lVar6 - (lVar7 - lVar9)) {
          uVar5 = FUN_004022fc();
          if ((uVar5 & 1) == 0) {
            FUN_00623bb0(&DAT_00224cd0,"../../modules/remote_bitrate_estimator/inter_arrival.cc",
                         0x212,"The arrival time clock offset has changed (diff = ",
                         *param_7 - (lVar7 - lVar9)," ms), resetting.");
          }
LAB_0092ef9c:
          *(undefined8 *)(param_1 + 10) = local_38;
          param_1[4] = 0;
          param_1[5] = 0;
          param_1[2] = 0;
          param_1[3] = 0;
          *(undefined8 *)(param_1 + 0x14) = local_38;
          param_1[0x18] = 0;
          param_1[8] = 0xffffffff;
          param_1[9] = 0xffffffff;
          param_1[6] = 0xffffffff;
          param_1[7] = 0xffffffff;
          param_1[0xe] = 0;
          param_1[0xf] = 0;
          param_1[0xc] = 0;
          param_1[0xd] = 0;
          param_1[0x12] = 0xffffffff;
          param_1[0x13] = 0xffffffff;
          param_1[0x10] = 0xffffffff;
          param_1[0x11] = 0xffffffff;
          return 0;
        }
        if (lVar6 < 0) {
          uVar4 = param_1[0x18];
          param_1[0x18] = uVar4 + 1;
          if ((int)(uVar4 + 1) < 3) {
            return 0;
          }
          uVar5 = FUN_004022fc();
          if ((uVar5 & 1) == 0) {
            FUN_00623bb0(&DAT_001f4e98,"../../modules/remote_bitrate_estimator/inter_arrival.cc",
                         0x272,
                         "Packets are being reordered on the path from the socket to the bandwidth estimator. Ignoring this packet for bandwidth estimation, resetting."
                        );
          }
          goto LAB_0092ef9c;
        }
        param_1[0x18] = 0;
        *param_8 = param_1[2] - param_1[0xc];
      }
      uVar10 = *(undefined8 *)(param_1 + 4);
      param_1[4] = param_2;
      param_1[5] = param_2;
      *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_1 + 10);
      *(undefined8 *)(param_1 + 0xe) = uVar10;
      *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_1 + 2);
      *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_1 + 8);
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 6);
      *(long *)(param_1 + 6) = param_3;
      uVar4 = (uint)((ulong)lVar8 >> 0x3f) ^ 1;
      param_1[2] = 0;
      param_1[3] = 0;
    }
  }
  *(long *)(param_1 + 8) = param_3;
  *(undefined8 *)(param_1 + 10) = param_4;
  *(long *)(param_1 + 2) = *(long *)(param_1 + 2) + param_5;
  return uVar4;
}


// ===== 0092f0e4  FUN_0092f0e4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0092f0e4(undefined4 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = 0;
  uVar6 = _UNK_001f8de0;
  uVar5 = _DAT_001f8dd8;
  uVar2 = _UNK_001f8dd0;
  uVar1 = _DAT_001f8dc8;
  uVar4 = _UNK_001f49d8;
  uVar3 = _DAT_001f49d0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 10) = uVar2;
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined8 *)(param_1 + 0xe) = uVar6;
  *(undefined8 *)(param_1 + 0xc) = uVar5;
  uVar2 = _UNK_001f3d48;
  uVar1 = _DAT_001f3d40;
  *(undefined8 *)(param_1 + 2) = 0x3f90000000000000;
  *(undefined8 *)(param_1 + 0x12) = uVar4;
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  *(undefined8 *)(param_1 + 0x16) = uVar2;
  *(undefined8 *)(param_1 + 0x14) = uVar1;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}


// ===== 0092f12c  FUN_0092f12c =====

void FUN_0092f12c(double param_1,int *param_2,long param_3,int param_4,int param_5)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  dVar5 = (double)FUN_0092f3b4();
  dVar13 = (double)param_4;
  dVar9 = *(double *)(param_2 + 0x10) + *(double *)(param_2 + 8);
  dVar11 = *(double *)(param_2 + 0x12) + *(double *)(param_2 + 0xe);
  iVar1 = *param_2 + 1;
  dVar6 = *(double *)(param_2 + 4);
  iVar4 = 1000;
  if (iVar1 < 1000) {
    iVar4 = *param_2 + 1;
  }
  *param_2 = iVar4;
  if (param_5 == 1) {
    dVar16 = *(double *)(param_2 + 6);
    if (dVar6 != dVar16 && dVar6 < dVar16 == (NAN(dVar6) || NAN(dVar16))) goto LAB_0092f1c4;
  }
  else if ((param_5 == 2) && (dVar6 < *(double *)(param_2 + 6))) {
LAB_0092f1c4:
    dVar11 = *(double *)(param_2 + 0x12) * 10.0 + dVar11;
  }
  dVar16 = *(double *)(param_2 + 0x16);
  dVar15 = *(double *)(param_2 + 10);
  dVar14 = *(double *)(param_2 + 0xc);
  dVar17 = dVar9 * dVar13 + dVar15;
  dVar8 = ((double)param_3 - param_1) - *(double *)(param_2 + 2) * dVar13;
  dVar12 = dVar14 * dVar13 + dVar11;
  dVar10 = dVar8 - dVar6;
  dVar7 = SQRT(dVar16) * 3.0;
  if (dVar7 <= ABS(dVar8 - dVar6)) {
    if (param_5 != 0) goto LAB_0092f2ac;
    dVar6 = -dVar7;
    if (0.0 <= dVar10) {
      dVar6 = dVar7;
    }
  }
  else {
    dVar6 = dVar10;
    if (param_5 != 0) goto LAB_0092f2ac;
  }
  lVar2 = 8;
  if (iVar1 < 0x12d) {
    lVar2 = 0;
  }
  dVar5 = pow(*(double *)(&DAT_001f1db0 + lVar2),(dVar5 * 30.0) / 1000.0);
  dVar7 = (1.0 - dVar5) * dVar6 + dVar5 * *(double *)(param_2 + 0x14);
  dVar6 = dVar7 - dVar6;
  dVar5 = dVar5 * dVar16 + dVar6 * (1.0 - dVar5) * dVar6;
  dVar16 = 1.0;
  if (1.0 <= dVar5) {
    dVar16 = dVar5;
  }
  *(double *)(param_2 + 0x14) = dVar7;
  *(double *)(param_2 + 0x16) = dVar16;
LAB_0092f2ac:
  dVar5 = dVar12 + dVar17 * dVar13 + dVar16;
  dVar17 = dVar17 / dVar5;
  dVar12 = dVar12 / dVar5;
  dVar16 = 1.0 - dVar17 * dVar13;
  dVar5 = dVar9 * dVar16 - dVar14 * dVar17;
  dVar6 = dVar15 * -(dVar12 * dVar13) + dVar11 * (1.0 - dVar12);
  dVar13 = dVar9 * -(dVar12 * dVar13) + dVar14 * (1.0 - dVar12);
  dVar9 = dVar15 * dVar16 - dVar11 * dVar17;
  *(double *)(param_2 + 0xc) = dVar13;
  *(double *)(param_2 + 0xe) = dVar6;
  *(double *)(param_2 + 8) = dVar5;
  *(double *)(param_2 + 10) = dVar9;
  if ((((dVar6 + dVar5 < 0.0 != NAN(dVar6 + dVar5)) || (dVar5 < 0.0 != NAN(dVar5))) ||
      (dVar5 = dVar6 * dVar5 - dVar13 * dVar9, dVar5 < 0.0 != NAN(dVar5))) &&
     (uVar3 = FUN_004249b0(), (uVar3 & 1) == 0)) {
    FUN_00623bb0(&DAT_001f4e98,"../../modules/remote_bitrate_estimator/overuse_estimator.cc",0x2fb,
                 "The over-use estimator\'s covariance matrix is no longer semi-definite.");
  }
  dVar5 = *(double *)(param_2 + 4);
  *(double *)(param_2 + 4) = dVar10 * dVar12 + dVar5;
  *(double *)(param_2 + 6) = dVar5;
  *(double *)(param_2 + 2) = dVar10 * dVar17 + *(double *)(param_2 + 2);
  return;
}


// ===== 0092f3b4  FUN_0092f3b4 =====

undefined1  [16] FUN_0092f3b4(double param_1,long param_2)

{
  double *pdVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  double *pdVar7;
  double *pdVar8;
  double *pdVar9;
  undefined1 auVar10 [16];
  double dVar11;
  
  if (*(ulong *)(param_2 + 0x88) < 0x3c) {
    puVar2 = *(undefined8 **)(param_2 + 0x68);
    uVar4 = *(ulong *)(param_2 + 0x80);
  }
  else {
    uVar4 = *(ulong *)(param_2 + 0x80);
    puVar2 = *(undefined8 **)(param_2 + 0x68);
    if (puVar2[uVar4 >> 9] + (uVar4 & 0x1ff) * 8 == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    uVar4 = uVar4 + 1;
    *(ulong *)(param_2 + 0x80) = uVar4;
    *(ulong *)(param_2 + 0x88) = *(ulong *)(param_2 + 0x88) - 1;
    if (0x3ff < uVar4) {
      operator_delete((void *)*puVar2);
      puVar2 = (undefined8 *)(*(long *)(param_2 + 0x68) + 8);
      uVar4 = *(long *)(param_2 + 0x80) - 0x200;
      *(undefined8 **)(param_2 + 0x68) = puVar2;
      *(ulong *)(param_2 + 0x80) = uVar4;
    }
  }
  puVar3 = *(undefined8 **)(param_2 + 0x70);
  dVar11 = param_1;
  if (puVar2 == puVar3) {
    uVar5 = *(long *)(param_2 + 0x88) + uVar4;
  }
  else {
    uVar5 = *(long *)(param_2 + 0x88) + uVar4;
    plVar6 = puVar2 + (uVar4 >> 9);
    pdVar7 = (double *)(*plVar6 + (uVar4 & 0x1ff) * 8);
    pdVar1 = (double *)(puVar2[uVar5 >> 9] + (uVar5 & 0x1ff) * 8);
    if (pdVar7 != pdVar1) {
      pdVar8 = (double *)*plVar6;
      do {
        pdVar9 = pdVar7 + 1;
        if (*pdVar7 <= dVar11) {
          dVar11 = *pdVar7;
        }
        if ((long)pdVar9 - (long)pdVar8 == 0x1000) {
          plVar6 = plVar6 + 1;
          pdVar9 = (double *)*plVar6;
          pdVar8 = pdVar9;
        }
        pdVar7 = pdVar9;
      } while (pdVar9 != pdVar1);
    }
  }
  uVar4 = 0;
  if (puVar3 != puVar2) {
    uVar4 = ((long)puVar3 - (long)puVar2) * 0x40 - 1;
  }
  if (uVar4 == uVar5) {
    FUN_0092f55c(param_2 + 0x60);
    puVar2 = *(undefined8 **)(param_2 + 0x68);
    puVar3 = *(undefined8 **)(param_2 + 0x70);
  }
  if ((puVar2 != puVar3) &&
     (uVar4 = *(long *)(param_2 + 0x88) + *(long *)(param_2 + 0x80),
     pdVar7 = (double *)(puVar2[uVar4 >> 9] + (uVar4 & 0x1ff) * 8), pdVar7 != (double *)0x0)) {
    *pdVar7 = param_1;
    *(long *)(param_2 + 0x88) = *(long *)(param_2 + 0x88) + 1;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = dVar11;
    return auVar10;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0092f55c  FUN_0092f55c =====

void FUN_0092f55c(long *param_1)

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
  
  if ((ulong)param_1[4] < 0x200) {
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
      local_18 = operator_new(0x1000);
      FUN_0092f9cc(&local_50,&local_18);
      lVar2 = param_1[1];
      lVar5 = param_1[2];
      if (lVar5 != lVar2) {
        do {
          lVar5 = lVar5 + -8;
          FUN_0092fef0(&local_50,lVar5);
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
      local_50 = (undefined1 *)operator_new(0x1000);
      FUN_0092f9cc(param_1,&local_50);
      return;
    }
    local_50 = (undefined1 *)operator_new(0x1000);
    FUN_0092fc54(param_1,&local_50);
    local_50 = *(undefined1 **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  else {
    param_1[4] = param_1[4] - 0x200;
    local_50 = *(undefined1 **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  FUN_0092f744(param_1,&local_50);
  return;
}


// ===== 0092f744  FUN_0092f744 =====

void FUN_0092f744(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar8 == (undefined8 *)0x0) goto LAB_0092f9b4;
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
LAB_0092f9b4:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0092f9cc  FUN_0092f9cc =====

void FUN_0092f9cc(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar8 == (undefined8 *)0x0) goto LAB_0092fc3c;
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
LAB_0092fc3c:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0092fc54  FUN_0092fc54 =====

void FUN_0092fc54(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar9 == (undefined8 *)0x0) goto LAB_0092fed8;
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
LAB_0092fed8:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0092fef0  FUN_0092fef0 =====

void FUN_0092fef0(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar9 == (undefined8 *)0x0) goto LAB_00930174;
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
LAB_00930174:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0093018c  FUN_0093018c =====

void FUN_0093018c(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_00d3df58;
  lVar2 = *param_2;
  param_1[1] = lVar2;
  if (lVar2 != 0) {
    FUN_00d0f740(1,lVar2 + 8);
  }
  lVar3 = param_2[4];
  lVar2 = param_2[3];
  lVar5 = param_2[2];
  lVar4 = param_2[1];
  param_1[8] = 0;
  param_1[3] = lVar5;
  param_1[2] = lVar4;
  param_1[5] = lVar3;
  param_1[4] = lVar2;
  param_1[9] = 0;
  param_1[6] = param_3;
  param_1[7] = param_1 + 8;
  FUN_008531f8(param_1 + 10,1000000);
  param_1[0x16] = 0;
  FUN_008f2728(param_1 + 0x17,param_1[2]);
  *(undefined1 *)(param_1 + 0x4b) = 0;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  param_1[0x4d] = 500000;
  *(undefined1 *)(param_1 + 0x4e) = 0;
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_00623bb0(&DAT_001f4e98,
               "../../modules/remote_bitrate_estimator/remote_bitrate_estimator_single_stream.cc",
               0x1d9,"RemoteBitrateEstimatorSingleStream: Instantiating.");
  return;
}


// ===== 0093026c  FUN_0093026c =====

void FUN_0093026c(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *local_8;
  
  *param_1 = &PTR_FUN_00d3df58;
  FUN_008f2b08(param_1 + 0x17);
  FUN_007de938(param_1 + 10);
  local_8 = param_1 + 7;
  FUN_00930d28(&local_8,param_1[8]);
  plVar2 = (long *)param_1[1];
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  return;
}


// ===== 009302e8  FUN_009302e8 =====

void FUN_009302e8(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *local_28;
  
  *param_1 = &PTR_FUN_00d3df58;
  FUN_008f2b08(param_1 + 0x17);
  FUN_007de938(param_1 + 10);
  local_28 = param_1 + 7;
  FUN_00930d28(&local_28,param_1[8]);
  plVar2 = (long *)param_1[1];
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  operator_delete(param_1);
  return;
}


// ===== 00930378  FUN_00930378 =====

void FUN_00930378(long param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  ulong uVar7;
  size_t sVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 *local_78;
  ulong local_68;
  
  local_68 = 0xaaaaaa00aaaaaa00;
  auVar15 = FUN_007dba34(param_2,1);
  if (auVar15._8_8_ != 0) {
    local_68 = CONCAT35(local_68._5_3_,0x100000000);
    uVar7 = FUN_007d8fa0(auVar15._0_8_,auVar15._8_8_,&local_68);
    if (((uVar7 & 1) == 0) && ((local_68 & 0x100000000) != 0)) {
      local_68._0_5_ = (uint5)(uint)local_68;
    }
  }
  uVar7 = local_68;
  if ((*(byte *)(param_1 + 0x270) & 1) == 0) {
    sVar8 = strlen("WebRTC.BWE.Types");
    lVar9 = FUN_0066631c("WebRTC.BWE.Types",sVar8,4);
    if (lVar9 != 0) {
      FUN_00666568(lVar9,uVar7 >> 0x20 & 1);
    }
    *(undefined1 *)(param_1 + 0x270) = 1;
  }
  iVar1 = *(int *)(param_2 + 8);
  local_7c = *(undefined4 *)(param_2 + 0xc);
  iVar6 = 0;
  if ((uVar7 & 0x100000000) != 0) {
    iVar6 = (int)uVar7;
  }
  uVar7 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
  local_78 = &local_7c;
  local_68 = param_1 + 0x38;
  lVar9 = FUN_00930da4(&local_68,&local_7c,&DAT_001f94c3,&local_78,&local_80);
  *(ulong *)(lVar9 + 0x28) = uVar7;
  auVar15 = FUN_00853260(param_1 + 0x50,uVar7);
  if ((auVar15 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
    if (0 < *(long *)(param_1 + 0xb0)) {
      FUN_007deb14(param_1 + 0x50);
      *(undefined8 *)(param_1 + 0xb0) = 0;
    }
  }
  else {
    *(long *)(param_1 + 0xb0) = auVar15._0_8_;
  }
  lVar13 = *(long *)(param_2 + 0x18);
  bVar2 = *(byte *)(param_2 + 2);
  FUN_008532e0(param_1 + 0x50,lVar13 + (ulong)bVar2,uVar7);
  iVar4 = FUN_0092ed1c(lVar9 + 0x128);
  local_78 = (undefined4 *)((ulong)local_78 & 0xffffffff00000000);
  local_68 = 0;
  local_80 = 0;
  if ((long)uVar7 < 0) {
    uVar11 = -(-uVar7 / 1000) - (ulong)(500 < -uVar7 % 1000);
    uVar12 = *(ulong *)(param_2 + 0x70);
  }
  else {
    uVar11 = uVar7 / 1000;
    if (499 < uVar7 % 1000) {
      uVar11 = uVar11 + 1;
    }
    uVar12 = *(ulong *)(param_2 + 0x70);
  }
  if ((long)uVar12 < 0) {
    uVar10 = -(-uVar12 / 1000) - (ulong)(500 < -uVar12 % 1000);
  }
  else {
    uVar10 = uVar12 / 1000;
    if (499 < uVar12 % 1000) {
      uVar10 = uVar10 + 1;
    }
  }
  uVar10 = FUN_0092ee9c(lVar9 + 0x30,iVar1 + iVar6,uVar10,uVar11,lVar13 + (ulong)bVar2,&local_78,
                        &local_68,&local_80);
  uVar12 = local_68;
  uVar3 = local_80;
  if ((uVar10 & 1) != 0) {
    dVar14 = (double)NEON_ucvtf((ulong)local_78 & 0xffffffff);
    dVar14 = dVar14 * DAT_001f5a98;
    uVar5 = FUN_0092ed1c(lVar9 + 0x128);
    FUN_0092f12c(dVar14,lVar9 + 0x98,uVar12,uVar3,uVar5,uVar11);
    FUN_0092ed28(*(undefined8 *)(lVar9 + 0xa8),dVar14,lVar9 + 0x128,*(undefined4 *)(lVar9 + 0x98),
                 uVar11);
  }
  iVar6 = FUN_0092ed1c(lVar9 + 0x128);
  if (iVar6 == 2) {
    auVar15 = FUN_00853260(param_1 + 0x50,uVar7);
    if (((auVar15 & (undefined1  [16])0x1) != (undefined1  [16])0x0) &&
       ((iVar4 != 2 ||
        (uVar11 = FUN_008f2bc0(param_1 + 0xb8,uVar7,auVar15._0_8_), (uVar11 & 1) != 0)))) {
      FUN_00930674(param_1,uVar7);
    }
  }
  return;
}


// ===== 00930674  FUN_00930674 =====

void FUN_00930674(long param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 extraout_w1;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  void *pvVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  void *local_98;
  void *local_90;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  
  iVar3 = 0;
  puVar13 = *(undefined8 **)(param_1 + 0x38);
  while (puVar13 != (undefined8 *)(param_1 + 0x40)) {
    if (((param_2 == 0x7fffffffffffffff) || (lVar7 = puVar13[5], lVar7 == -0x8000000000000000)) ||
       ((param_2 != -0x8000000000000000 &&
        ((lVar7 != 0x7fffffffffffffff && (2000000 < param_2 - lVar7)))))) {
      puVar11 = (undefined8 *)puVar13[1];
      puVar8 = puVar11;
      puVar9 = puVar13;
      if (puVar11 == (undefined8 *)0x0) {
        do {
          puVar14 = (undefined8 *)puVar9[2];
          bVar1 = puVar9 != (undefined8 *)*puVar14;
          puVar8 = puVar13;
          puVar9 = puVar14;
        } while (bVar1);
        do {
          puVar9 = (undefined8 *)puVar8[2];
          bVar1 = puVar8 != (undefined8 *)*puVar9;
          puVar8 = puVar9;
        } while (bVar1);
      }
      else {
        do {
          puVar14 = puVar8;
          puVar8 = (undefined8 *)*puVar14;
        } while ((undefined8 *)*puVar14 != (undefined8 *)0x0);
        do {
          puVar9 = puVar11;
          puVar11 = (undefined8 *)*puVar9;
        } while ((undefined8 *)*puVar9 != (undefined8 *)0x0);
      }
      if (*(undefined8 **)(param_1 + 0x38) == puVar13) {
        *(undefined8 **)(param_1 + 0x38) = puVar9;
      }
      *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + -1;
      FUN_005d5d48(*(undefined8 *)(param_1 + 0x40),puVar13);
      if (puVar13 == (undefined8 *)0xffffffffffffffe0) goto LAB_009308ec;
      FUN_0092e9bc(puVar13 + 0x1f);
      operator_delete(puVar13);
      puVar13 = puVar14;
    }
    else {
      iVar2 = FUN_0092ed1c(puVar13 + 0x25);
      if (iVar3 < iVar2) {
        iVar3 = FUN_0092ed1c(puVar13 + 0x25);
      }
      puVar8 = (undefined8 *)puVar13[1];
      puVar11 = puVar13;
      if ((undefined8 *)puVar13[1] == (undefined8 *)0x0) {
        do {
          puVar13 = (undefined8 *)puVar11[2];
          bVar1 = puVar11 != (undefined8 *)*puVar13;
          puVar11 = puVar13;
        } while (bVar1);
      }
      else {
        do {
          puVar13 = puVar8;
          puVar8 = (undefined8 *)*puVar13;
        } while ((undefined8 *)*puVar13 != (undefined8 *)0x0);
      }
    }
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
    local_80 = &DAT_aaaaaaaaaaaaaaaa;
    local_70 = &DAT_aaaaaaaaaaaaaaaa;
    local_98 = (void *)FUN_00853260(param_1 + 0x50,param_2);
    local_90 = (void *)CONCAT71(local_90._1_7_,extraout_w1);
    FUN_008f3924(&local_80,iVar3,&local_98);
    uVar4 = FUN_008f2d20(param_1 + 0xb8,&local_80,param_2);
    uVar5 = FUN_008f2b68(param_1 + 0xb8);
    if ((uVar5 & 1) != 0) {
      uVar6 = FUN_008f2b74(param_1 + 0xb8);
      puVar13 = *(undefined8 **)(param_1 + 0x30);
      *(undefined8 *)(param_1 + 0x268) = uVar6;
      if (puVar13 != (undefined8 *)0x0) {
        FUN_00930ae4(&local_98,param_1);
        (**(code **)*puVar13)(puVar13,&local_98,uVar4);
        if (local_98 != (void *)0x0) {
          uVar12 = (ulong)((long)local_90 + (-4 - ((long)local_90 << 0x3e))) >> 2;
          uVar5 = (ulong)(((long)local_98 - (long)local_90 << 0x3e) -
                         ((long)local_98 - (long)local_90)) >> 2;
          if (uVar12 <= uVar5) {
            uVar5 = uVar12;
          }
          pvVar10 = local_90;
          if ((1 < uVar5) && ((((int)local_98 - (int)local_90 | -(int)local_90) & 3U) == 0)) {
            uVar5 = uVar5 & 0x3ffffffffffffffe;
            pvVar10 = (void *)((long)local_90 + uVar5 * -4);
            do {
              uVar5 = uVar5 - 2;
            } while (uVar5 != 0);
          }
          while (pvVar10 != local_98) {
            pvVar10 = (void *)((long)pvVar10 + -4);
            if (pvVar10 == (void *)0x0) {
LAB_009308ec:
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                        );
            }
          }
          local_90 = local_98;
          operator_delete(local_98);
        }
      }
    }
    FUN_008f3938(&local_80);
  }
  return;
}


// ===== 0093093c  FUN_0093093c =====

long FUN_0093093c(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
  uVar3 = uVar1;
  if (*(char *)(param_1 + 0x260) == '\x01') {
    lVar2 = *(long *)(param_1 + 0x268);
    lVar4 = *(long *)(param_1 + 600);
    uVar3 = 0x8000000000000000;
    if (lVar2 != -0x8000000000000000 && lVar4 != -0x8000000000000000) {
      uVar3 = lVar4 + lVar2;
    }
    uVar5 = 0x7fffffffffffffff;
    if (lVar2 != 0x7fffffffffffffff) {
      uVar5 = uVar3;
    }
    uVar3 = 0x7fffffffffffffff;
    if (lVar4 != 0x7fffffffffffffff) {
      uVar3 = uVar5;
    }
  }
  uVar5 = uVar1 / 1000;
  uVar6 = uVar3 / 1000;
  if (499 < uVar1 % 1000) {
    uVar5 = uVar5 + 1;
  }
  if ((uVar1 & 0x8000000000000000) != 0) {
    uVar5 = -(-uVar1 / 1000) - (ulong)(500 < -uVar1 % 1000);
  }
  if (499 < uVar3 % 1000) {
    uVar6 = uVar6 + 1;
  }
  if ((uVar3 & 0x8000000000000000) != 0) {
    uVar6 = -(-uVar3 / 1000) - (ulong)(500 < -uVar3 % 1000);
  }
  if ((long)uVar5 < (long)uVar6) {
    lVar2 = 0x7fffffffffffffff;
    if ((uVar3 != 0x7fffffffffffffff) && (uVar1 != 0x8000000000000000)) {
      lVar2 = -0x8000000000000000;
      if (uVar1 != 0x7fffffffffffffff && uVar3 != 0x8000000000000000) {
        lVar2 = uVar3 - uVar1;
      }
    }
  }
  else {
    FUN_00930674(param_1,uVar1);
    if (*(char *)(param_1 + 0x260) == '\x01') {
      *(ulong *)(param_1 + 600) = uVar1;
      lVar2 = *(long *)(param_1 + 0x268);
    }
    else {
      if ((ulong *)(param_1 + 600) == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *(ulong *)(param_1 + 600) = uVar1;
      *(undefined1 *)(param_1 + 0x260) = 1;
      lVar2 = *(long *)(param_1 + 0x268);
    }
  }
  return lVar2;
}


// ===== 00930ae4  FUN_00930ae4 =====

void FUN_00930ae4(undefined8 *param_1,long param_2)

{
  long *plVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  
  uVar5 = *(ulong *)(param_2 + 0x48);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (uVar5 == 0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    if (uVar5 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005da79c();
    }
    puVar3 = (undefined4 *)operator_new(uVar5 * 4);
    *param_1 = puVar3;
    param_1[1] = puVar3;
    param_1[2] = puVar3 + uVar5;
  }
  plVar6 = *(long **)(param_2 + 0x38);
  do {
    if (plVar6 == (long *)(param_2 + 0x40)) {
      return;
    }
    if (puVar3 < (undefined4 *)param_1[2]) {
      if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      puVar4 = puVar3 + 1;
      *puVar3 = (int)plVar6[4];
    }
    else {
      puVar4 = (undefined4 *)FUN_00852528(param_1,plVar6 + 4);
    }
    param_1[1] = puVar4;
    plVar1 = (long *)plVar6[1];
    plVar7 = plVar6;
    puVar3 = puVar4;
    if ((long *)plVar6[1] == (long *)0x0) {
      do {
        plVar6 = (long *)plVar7[2];
        bVar2 = plVar7 != (long *)*plVar6;
        plVar7 = plVar6;
      } while (bVar2);
    }
    else {
      do {
        plVar6 = plVar1;
        plVar1 = (long *)*plVar6;
      } while ((long *)*plVar6 != (long *)0x0);
    }
  } while( true );
}


// ===== 00930bd0  FUN_00930bd0 =====

void FUN_00930bd0(long param_1,long param_2)

{
  FUN_008f2d14(param_1 + 0xb8,param_2 * 1000);
  return;
}


// ===== 00930be4  FUN_00930be4 =====

void FUN_00930be4(long param_1,uint param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar3 = *(undefined8 **)(param_1 + 0x40);
  puVar6 = puVar3;
  while( true ) {
    while( true ) {
      if (puVar6 == (undefined8 *)0x0) {
        return;
      }
      if (*(uint *)(puVar6 + 4) <= param_2) break;
      puVar6 = (undefined8 *)*puVar6;
    }
    if (param_2 == *(uint *)(puVar6 + 4)) break;
    puVar6 = (undefined8 *)puVar6[1];
  }
  if (puVar6 == (undefined8 *)(param_1 + 0x40)) {
    return;
  }
  puVar4 = puVar6;
  puVar1 = (undefined8 *)puVar6[1];
  if ((undefined8 *)puVar6[1] == (undefined8 *)0x0) {
    do {
      puVar5 = (undefined8 *)puVar4[2];
      bVar2 = puVar4 != (undefined8 *)*puVar5;
      puVar4 = puVar5;
    } while (bVar2);
  }
  else {
    do {
      puVar5 = puVar1;
      puVar1 = (undefined8 *)*puVar5;
    } while ((undefined8 *)*puVar5 != (undefined8 *)0x0);
  }
  if (*(undefined8 **)(param_1 + 0x38) == puVar6) {
    *(undefined8 **)(param_1 + 0x38) = puVar5;
  }
  *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + -1;
  FUN_005d5d48(puVar3,puVar6);
  if (puVar6 == (undefined8 *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
  FUN_0092e9bc(puVar6 + 0x1f);
  operator_delete(puVar6);
  return;
}


// ===== 00930cd8  FUN_00930cd8 =====

undefined8 FUN_00930cd8(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_008f2b68(param_1 + 0xb8);
  if (((uVar1 & 1) != 0) && (*(long *)(param_1 + 0x48) != 0)) {
    uVar2 = FUN_008f2c64(param_1 + 0xb8);
    return uVar2;
  }
  return 0;
}


// ===== 00930d28  FUN_00930d28 =====

void FUN_00930d28(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_00930d28(param_1,*param_2);
      if (param_2 == (undefined8 *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      puVar1 = (undefined8 *)param_2[1];
      FUN_0092e9bc(param_2 + 0x1f);
      operator_delete(param_2);
      param_2 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
  }
  return;
}


// ===== 00930da4  FUN_00930da4 =====

undefined1  [16]
FUN_00930da4(undefined8 *param_1,uint *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  
  plVar6 = (long *)*param_1;
  plVar4 = plVar6 + 1;
  plVar7 = plVar4;
  if ((long *)*plVar4 != (long *)0x0) {
    plVar2 = (long *)*plVar4;
    do {
      while (plVar3 = plVar2, plVar4 = plVar3, *param_2 < *(uint *)(plVar3 + 4)) {
        plVar2 = (long *)*plVar3;
        plVar7 = plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_00930e0c;
      }
      if (*param_2 == *(uint *)(plVar3 + 4)) {
        uVar5 = 0;
        goto LAB_00930ea4;
      }
      plVar2 = (long *)plVar3[1];
    } while ((long *)plVar3[1] != (long *)0x0);
    plVar7 = plVar3 + 1;
  }
LAB_00930e0c:
  plVar3 = (long *)operator_new(0x150);
  if ((plVar3 == (long *)0x0) || (*plVar3 = 0, plVar3 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  uVar1 = *(undefined4 *)*param_4;
  plVar3[5] = 0;
  *(undefined4 *)(plVar3 + 4) = uVar1;
  FUN_0092ee74(DAT_001f5a98,plVar3 + 6,0x1c2);
  FUN_0092f0e4(plVar3 + 0x13);
  FUN_0092ecf8(plVar3 + 0x25);
  *plVar3 = 0;
  plVar3[1] = 0;
  plVar3[2] = (long)plVar4;
  *plVar7 = (long)plVar3;
  plVar4 = plVar3;
  if (*(long *)*plVar6 != 0) {
    *plVar6 = *(long *)*plVar6;
    plVar4 = (long *)*plVar7;
  }
  FUN_005d5b94(plVar6[1],plVar4);
  uVar5 = 1;
  plVar6[2] = plVar6[2] + 1;
LAB_00930ea4:
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = plVar3;
  return auVar8;
}


// ===== 00930ed4  FUN_00930ed4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00930ed4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *local_8;
  
  *param_1 = &PTR_FUN_00d3dfa0;
  uVar3 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar3;
  param_1[3] = param_2[2];
  lVar2 = param_2[3];
  param_1[4] = lVar2;
  if (*(long *)(lVar2 + 8) != 0) {
    param_2[2] = 0;
    param_2[3] = &DAT_001fbc50;
  }
  param_1[5] = param_3;
  local_8 = &DAT_aaaaaaaaaaaaaaaa;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_8);
  pthread_mutex_init((pthread_mutex_t *)(param_1 + 6),(pthread_mutexattr_t *)&local_8);
  iVar1 = pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_8);
  uVar3 = _DAT_001f3450;
  param_1[0xc] = _UNK_001f3458;
  param_1[0xb] = uVar3;
  param_1[0xd] = 0x7fffffffffffffff;
  return iVar1;
}


// ===== 00930f6c  FUN_00930f6c =====

void * FUN_00930f6c(long param_1,undefined8 *param_2,ulong param_3)

{
  void *pvVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  void *pvVar7;
  ulong uVar8;
  ulong uVar9;
  void *local_58;
  void *local_50;
  void *local_48;
  
  param_3 = param_3 & 0xffffffff;
  lVar5 = (**(code **)(**(long **)(param_1 + 0x28) + 0x10))();
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x30));
  if (*(long *)(param_1 + 0x60) < (long)((param_3 * 0x67) / 100)) {
    lVar6 = *(long *)(param_1 + 0x58);
    lVar2 = lVar6;
    if (lVar6 != -0x8000000000000000) {
      lVar2 = lVar6 + 200000;
    }
    if (lVar6 != 0x7fffffffffffffff) {
      lVar6 = lVar2;
    }
    if (lVar5 < lVar6) {
      uVar3 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x30));
      return (void *)(ulong)uVar3;
    }
  }
  *(long *)(param_1 + 0x58) = lVar5;
  *(ulong *)(param_1 + 0x60) = param_3;
  uVar8 = *(ulong *)(param_1 + 0x68);
  if ((long)param_3 <= (long)*(ulong *)(param_1 + 0x68)) {
    uVar8 = param_3;
  }
  iVar4 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x30));
  pvVar7 = (void *)*param_2;
  local_50 = (void *)0x0;
  local_48 = (void *)0x0;
  local_58 = (void *)0x0;
  uVar9 = param_2[1] - (long)pvVar7;
  if (uVar9 != 0) {
    if ((long)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005da79c(iVar4);
    }
    local_58 = operator_new(uVar9);
    pvVar1 = (void *)((long)local_58 + uVar9);
    local_48 = pvVar1;
    memcpy(local_58,pvVar7,uVar9);
    local_50 = pvVar1;
  }
  (**(code **)(param_1 + 0x18))(param_1 + 8,uVar8,&local_58);
  if (local_58 != (void *)0x0) {
    uVar9 = (ulong)((long)local_50 + (-4 - ((long)local_50 << 0x3e))) >> 2;
    uVar8 = (ulong)(((long)local_58 - (long)local_50 << 0x3e) - ((long)local_58 - (long)local_50))
            >> 2;
    if (uVar9 <= uVar8) {
      uVar8 = uVar9;
    }
    pvVar7 = local_50;
    if ((1 < uVar8) && ((((int)local_58 - (int)local_50 | -(int)local_50) & 3U) == 0)) {
      uVar8 = uVar8 & 0x3ffffffffffffffe;
      pvVar7 = (void *)((long)local_50 + uVar8 * -4);
      do {
        uVar8 = uVar8 - 2;
      } while (uVar8 != 0);
    }
    while (pvVar7 != local_58) {
      pvVar7 = (void *)((long)pvVar7 + -4);
      if (pvVar7 == (void *)0x0) {
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
  return local_58;
}


// ===== 00931140  FUN_00931140 =====

ulong FUN_00931140(undefined8 *param_1)

{
  uint uVar1;
  ulong uVar2;
  
  *param_1 = &PTR_FUN_00d3dfa0;
  uVar1 = pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 6));
  if (*(code **)(param_1[4] + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00931180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(param_1[4] + 8))(param_1[1]);
    return uVar2;
  }
  return (ulong)uVar1;
}


// ===== 00931194  FUN_00931194 =====

void FUN_00931194(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d3dfa0;
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 6));
  if (*(code **)(param_1[4] + 8) != (code *)0x0) {
    (**(code **)(param_1[4] + 8))(param_1[1]);
  }
  operator_delete(param_1);
  return;
}


// ===== 009311e4  FUN_009311e4 =====

void FUN_009311e4(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  undefined1 **ppuVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 *local_80;
  ulong uStack_78;
  byte bStack_69;
  undefined8 *local_68;
  undefined8 *puStack_60;
  undefined8 *local_58;
  
  *param_1 = &PTR_FUN_00d3dfc8;
  lVar2 = *param_2;
  param_1[1] = lVar2;
  if (lVar2 != 0) {
    FUN_00d0f740(1,lVar2 + 8);
  }
  lVar4 = param_2[4];
  lVar2 = param_2[3];
  lVar5 = param_2[1];
  param_1[3] = param_2[2];
  param_1[2] = lVar5;
  param_1[5] = lVar4;
  param_1[4] = lVar2;
  uVar3 = *param_3;
  param_1[8] = param_3[1];
  param_1[7] = uVar3;
  param_1[9] = param_3[2];
  lVar2 = param_3[3];
  param_1[10] = lVar2;
  if (*(long *)(lVar2 + 8) != 0) {
    param_3[2] = 0;
    param_3[3] = &DAT_001fbc50;
  }
  FUN_00661054(param_1 + 0xb,"min_send_delta",0xe);
  param_1[0xb] = &PTR_FUN_00d267f8;
  param_1[0x13] = 25000;
  FUN_00661054(param_1 + 0x14,"max_wait_for_marker",0x13);
  param_1[0x14] = &PTR_FUN_00d267f8;
  param_1[0x1c] = 25000;
  FUN_00661054(param_1 + 0x1d,"max_send_delta",0xe);
  param_1[0x1d] = &PTR_FUN_00d267f8;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x25] = 500000;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = param_1 + 0x29;
  param_1[0x2b] = 0x8000000000000000;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  param_1[0x2f] = 0;
  local_68 = param_1 + 0xb;
  puStack_60 = param_1 + 0x14;
  local_58 = param_1 + 0x1d;
  (**(code **)(*(long *)param_2[1] + 0x10))
            (&local_80,(long *)param_2[1],"WebRTC-RFC8888CongestionControlFeedback",0x27);
  ppuVar1 = (undefined1 **)local_80;
  if (-1 < (char)bStack_69) {
    uStack_78 = (ulong)bStack_69;
    ppuVar1 = &local_80;
  }
  FUN_00661cc0(&local_68,3,ppuVar1,uStack_78);
  if ((char)bStack_69 < '\0') {
    operator_delete(local_80);
  }
  return;
}


// ===== 0093138c  FUN_0093138c =====

void FUN_0093138c(long param_1,byte *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 *local_40;
  undefined4 *local_38;
  long local_18;
  
  *(byte *)(param_1 + 0x170) = *(byte *)(param_1 + 0x170) | *param_2;
  lVar1 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
  if ((*(byte *)(param_1 + 0x168) & 1) == 0) {
    if (param_1 == -0x160) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *(long *)(param_1 + 0x160) = lVar1;
    *(undefined1 *)(param_1 + 0x168) = 1;
  }
  local_48 = *(undefined4 *)(param_2 + 0xc);
  local_38 = &uStack_44;
  local_40 = &local_48;
  local_18 = param_1 + 0x140;
  uStack_44 = local_48;
  lVar2 = FUN_00931d3c(&local_18,&uStack_44,&DAT_001f94c3,&local_38,&local_40);
  FUN_009328c8(lVar2 + 0x28,param_2);
  if ((*(byte *)(param_1 + 0x168) & 1) == 0) {
    lVar3 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
    lVar2 = 0x7fffffffffffffff;
    if ((lVar3 != 0x7fffffffffffffff) &&
       (lVar4 = *(long *)(param_1 + 0x98), lVar4 != 0x7fffffffffffffff)) {
      lVar2 = -0x8000000000000000;
      if (lVar4 != -0x8000000000000000 && lVar3 != -0x8000000000000000) {
        lVar2 = lVar4 + lVar3;
      }
    }
    if (lVar2 <= *(long *)(param_1 + 0x178)) {
      lVar2 = *(long *)(param_1 + 0x178);
    }
  }
  else if ((*(byte *)(param_1 + 0x170) & 1) == 0) {
    lVar2 = *(long *)(param_1 + 0x160);
    lVar3 = 0x7fffffffffffffff;
    if ((lVar2 != 0x7fffffffffffffff) &&
       (lVar4 = *(long *)(param_1 + 0xe0), lVar4 != 0x7fffffffffffffff)) {
      lVar3 = -0x8000000000000000;
      if (lVar4 != -0x8000000000000000 && lVar2 != -0x8000000000000000) {
        lVar3 = lVar2 + lVar4;
      }
    }
    lVar2 = *(long *)(param_1 + 0x178);
    if (*(long *)(param_1 + 0x178) <= lVar3) {
      lVar2 = lVar3;
    }
  }
  else {
    lVar2 = *(long *)(param_1 + 0x178);
  }
  if (lVar2 < lVar1) {
    FUN_00931524(param_1,lVar1);
  }
  return;
}


// ===== 00931524  FUN_00931524 =====

void FUN_00931524(long param_1,undefined8 param_2)

{
  long *plVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  void *pvVar6;
  code *pcVar7;
  ulong uVar8;
  long *plVar9;
  long *local_98;
  long *local_90;
  long *local_88;
  void *local_80;
  void *pvStack_78;
  undefined8 local_70;
  void *local_60;
  void *pvStack_58;
  undefined8 local_50;
  
  uVar3 = (**(code **)(**(long **)(param_1 + 0x18) + 0x18))();
  plVar9 = *(long **)(param_1 + 0x140);
  local_80 = (void *)0x0;
  pvStack_78 = (void *)0x0;
  local_70 = 0;
  while (plVar9 != (long *)(param_1 + 0x148)) {
    FUN_00932a30(plVar9 + 5,param_2,&local_80);
    plVar1 = (long *)plVar9[1];
    plVar5 = plVar9;
    if ((long *)plVar9[1] == (long *)0x0) {
      do {
        plVar9 = (long *)plVar5[2];
        bVar2 = plVar5 != (long *)*plVar9;
        plVar5 = plVar9;
      } while (bVar2);
    }
    else {
      do {
        plVar9 = plVar1;
        plVar1 = (long *)*plVar9;
      } while ((long *)*plVar9 != (long *)0x0);
    }
  }
  *(undefined1 *)(param_1 + 0x170) = 0;
  if (*(char *)(param_1 + 0x168) == '\x01') {
    *(undefined1 *)(param_1 + 0x168) = 0;
  }
  plVar9 = (long *)operator_new(0x30);
  pvStack_58 = pvStack_78;
  local_60 = local_80;
  local_80 = (void *)0x0;
  pvStack_78 = (void *)0x0;
  local_50 = local_70;
  local_70 = 0;
  FUN_00860184(plVar9,&local_60,uVar3 >> 0x10 & 0xffffffff);
  if (local_60 == (void *)0x0) {
LAB_00931694:
    uVar4 = (**(code **)(*plVar9 + 0x10))(plVar9);
    FUN_009319c4(param_1,uVar4,param_2);
    local_98 = (long *)operator_new(8);
    if (local_98 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    pcVar7 = *(code **)(param_1 + 0x48);
    local_90 = local_98 + 1;
    *local_98 = (long)plVar9;
    local_88 = local_90;
    (*pcVar7)(param_1 + 0x38,&local_98);
    plVar1 = local_98;
    plVar9 = local_90;
    if (local_98 != (long *)0x0) {
      while (plVar1 != plVar9) {
        plVar9 = plVar9 + -1;
        if (plVar9 == (long *)0x0) goto LAB_009317bc;
        plVar5 = (long *)*plVar9;
        *plVar9 = 0;
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
      local_90 = plVar1;
      operator_delete(local_98);
    }
    if (local_80 == (void *)0x0) {
      return;
    }
    uVar3 = (ulong)(((long)local_80 - (long)pvStack_78) * 0x1555555555555555) >> 3;
    uVar8 = (long)pvStack_78 * -0x1555555555555555 - 8U >> 3;
    if (uVar8 <= uVar3) {
      uVar3 = uVar8;
    }
    pvVar6 = pvStack_78;
    if ((1 < uVar3) && ((((int)local_80 - (int)pvStack_78 | -(int)pvStack_78) & 7U) == 0)) {
      uVar3 = uVar3 & 0x1ffffffffffffffe;
      pvVar6 = (void *)((long)pvStack_78 + uVar3 * -0x18);
      do {
        uVar3 = uVar3 - 2;
      } while (uVar3 != 0);
    }
    do {
      if (pvVar6 == local_80) {
        pvStack_78 = local_80;
        operator_delete(local_80);
        return;
      }
      pvVar6 = (void *)((long)pvVar6 + -0x18);
    } while (pvVar6 != (void *)0x0);
  }
  else {
    uVar3 = (ulong)(((long)local_60 - (long)pvStack_58) * 0x1555555555555555) >> 3;
    uVar8 = (long)pvStack_58 * -0x1555555555555555 - 8U >> 3;
    if (uVar8 <= uVar3) {
      uVar3 = uVar8;
    }
    pvVar6 = pvStack_58;
    if ((1 < uVar3) && ((((int)local_60 - (int)pvStack_58 | -(int)pvStack_58) & 7U) == 0)) {
      uVar3 = uVar3 & 0x1ffffffffffffffe;
      pvVar6 = (void *)((long)pvStack_58 + uVar3 * -0x18);
      do {
        uVar3 = uVar3 - 2;
      } while (uVar3 != 0);
    }
    do {
      if (pvVar6 == local_60) {
        pvStack_58 = local_60;
        operator_delete(local_60);
        goto LAB_00931694;
      }
      pvVar6 = (void *)((long)pvVar6 + -0x18);
    } while (pvVar6 != (void *)0x0);
  }
LAB_009317bc:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00931810  FUN_00931810 =====

long FUN_00931810(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if ((*(byte *)(param_1 + 0x168) & 1) == 0) {
    lVar1 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
    lVar3 = *(long *)(param_1 + 0x98);
    lVar2 = 0x7fffffffffffffff;
    if (lVar1 != 0x7fffffffffffffff && lVar3 != 0x7fffffffffffffff) {
      lVar2 = -0x8000000000000000;
      if (lVar3 != -0x8000000000000000 && lVar1 != -0x8000000000000000) {
        lVar2 = lVar3 + lVar1;
      }
    }
    if (lVar2 <= *(long *)(param_1 + 0x178)) {
      lVar2 = *(long *)(param_1 + 0x178);
    }
  }
  else if ((*(byte *)(param_1 + 0x170) & 1) == 0) {
    lVar2 = *(long *)(param_1 + 0x160);
    lVar1 = 0x7fffffffffffffff;
    if ((lVar2 != 0x7fffffffffffffff) &&
       (lVar3 = *(long *)(param_1 + 0xe0), lVar3 != 0x7fffffffffffffff)) {
      lVar1 = -0x8000000000000000;
      if (lVar3 != -0x8000000000000000 && lVar2 != -0x8000000000000000) {
        lVar1 = lVar2 + lVar3;
      }
    }
    lVar2 = *(long *)(param_1 + 0x178);
    if (*(long *)(param_1 + 0x178) <= lVar1) {
      lVar2 = lVar1;
    }
  }
  else {
    lVar2 = *(long *)(param_1 + 0x178);
  }
  if (lVar2 <= param_2) {
    FUN_00931524(param_1,param_2);
  }
  if ((*(byte *)(param_1 + 0x168) & 1) == 0) {
    lVar1 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
    lVar2 = 0x7fffffffffffffff;
    if ((lVar1 != 0x7fffffffffffffff) &&
       (lVar3 = *(long *)(param_1 + 0x98), lVar3 != 0x7fffffffffffffff)) {
      lVar2 = -0x8000000000000000;
      if (lVar3 != -0x8000000000000000 && lVar1 != -0x8000000000000000) {
        lVar2 = lVar3 + lVar1;
      }
    }
    if (lVar2 <= *(long *)(param_1 + 0x178)) {
      lVar2 = *(long *)(param_1 + 0x178);
    }
  }
  else if ((*(byte *)(param_1 + 0x170) & 1) == 0) {
    lVar2 = *(long *)(param_1 + 0x160);
    lVar1 = 0x7fffffffffffffff;
    if ((lVar2 != 0x7fffffffffffffff) &&
       (lVar3 = *(long *)(param_1 + 0xe0), lVar3 != 0x7fffffffffffffff)) {
      lVar1 = -0x8000000000000000;
      if (lVar3 != -0x8000000000000000 && lVar2 != -0x8000000000000000) {
        lVar1 = lVar2 + lVar3;
      }
    }
    lVar2 = *(long *)(param_1 + 0x178);
    if (*(long *)(param_1 + 0x178) <= lVar1) {
      lVar2 = lVar1;
    }
  }
  else {
    lVar2 = *(long *)(param_1 + 0x178);
  }
  lVar1 = 0x7fffffffffffffff;
  if ((lVar2 != 0x7fffffffffffffff) && (param_2 != -0x8000000000000000)) {
    lVar1 = -0x8000000000000000;
    if (param_2 != 0x7fffffffffffffff && lVar2 != -0x8000000000000000) {
      lVar1 = lVar2 - param_2;
    }
  }
  return lVar1;
}


// ===== 009319c4  FUN_009319c4 =====

void FUN_009319c4(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x158) + 0x8000000000000001U < 2 || param_3 == 0x7fffffffffffffff) {
    lVar1 = 0;
  }
  else {
    lVar1 = 0;
    if (param_3 != -0x8000000000000000) {
      lVar1 = (long)(&uleb128_003d0900 + (param_3 - *(long *)(param_1 + 0x158)) * 500000) / 8000000;
    }
  }
  lVar3 = *(long *)(param_1 + 0x138);
  lVar2 = lVar3 - lVar1;
  if (lVar3 < lVar1) {
    lVar2 = 0;
  }
  else {
    lVar1 = 0x7fffffffffffffff;
    if (lVar3 == 0x7fffffffffffffff) goto LAB_00931a74;
  }
  lVar1 = 0x7fffffffffffffff;
  if ((lVar2 != 0x7fffffffffffffff) && (param_2 != 0x7fffffffffffffff)) {
    lVar1 = -0x8000000000000000;
    if (param_2 != -0x8000000000000000 && lVar2 != -0x8000000000000000) {
      lVar1 = lVar2 + param_2;
    }
  }
LAB_00931a74:
  lVar3 = *(long *)(param_1 + 0x98);
  lVar2 = *(long *)(param_1 + 0x128);
  *(long *)(param_1 + 0x138) = lVar1;
  *(long *)(param_1 + 0x158) = param_3;
  if (lVar3 <= lVar2) {
    lVar1 = (lVar1 * 8000000) / 500000;
    if (lVar1 <= lVar2) {
      lVar2 = lVar1;
    }
    if (lVar3 <= lVar1) {
      lVar3 = lVar2;
    }
    lVar1 = 0x7fffffffffffffff;
    if ((param_3 != 0x7fffffffffffffff) && (lVar3 != 0x7fffffffffffffff)) {
      lVar1 = -0x8000000000000000;
      if (lVar3 != -0x8000000000000000 && param_3 != -0x8000000000000000) {
        lVar1 = lVar3 + param_3;
      }
    }
    *(long *)(param_1 + 0x178) = lVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__algorithm/clamp.h:29: libc++ Hardening assertion !__comp(__hi, __lo) failed: Bad bounds passed to std::clamp\n"
            );
}


// ===== 00931b04  FUN_00931b04 =====

void FUN_00931b04(undefined8 *param_1,long param_2)

{
  long *plVar1;
  bool bVar2;
  int iVar3;
  void *pvVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  undefined8 *puStack_48;
  long local_40;
  long lStack_38;
  
  uVar6 = *(ulong *)(param_2 + 0x150);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (uVar6 != 0) {
    if (0xaaaaaaaaaaaaaaa < uVar6) {
      puVar5 = (undefined8 *)FUN_00931e78();
      *puVar5 = &PTR_FUN_00d3dfc8;
      puStack_48 = puVar5 + 0x28;
      FUN_005e239c(&puStack_48,puVar5[0x29]);
      FUN_006634ac(puVar5 + 0x1d);
      FUN_006634ac(puVar5 + 0x14);
      FUN_006634ac(puVar5 + 0xb);
      if (*(code **)(puVar5[10] + 8) != (code *)0x0) {
        (**(code **)(puVar5[10] + 8))(puVar5[7]);
      }
      plVar7 = (long *)puVar5[1];
      if ((plVar7 != (long *)0x0) && (iVar3 = FUN_00d0f7a0(0xffffffff,plVar7 + 1), iVar3 == 1)) {
        (**(code **)(*plVar7 + 8))(plVar7);
      }
      return;
    }
    pvVar4 = operator_new(uVar6 * 0x18);
    *param_1 = pvVar4;
    param_1[1] = pvVar4;
    param_1[2] = (void *)((long)pvVar4 + uVar6 * 0x18);
  }
  plVar7 = *(long **)(param_2 + 0x140);
  while (plVar7 != (long *)(param_2 + 0x148)) {
    lStack_38 = plVar7[0xf];
    local_40 = plVar7[0xe];
    auVar9 = FUN_00931e90(param_1,param_1[1],plVar7 + 4,plVar7 + 4,&local_40);
    if ((auVar9 & (undefined1  [16])0x1) == (undefined1  [16])0x0) {
      *(long *)(auVar9._0_8_ + 0x10) = lStack_38;
      *(long *)(auVar9._0_8_ + 8) = local_40;
    }
    plVar1 = (long *)plVar7[1];
    plVar8 = plVar7;
    if ((long *)plVar7[1] == (long *)0x0) {
      do {
        plVar7 = (long *)plVar8[2];
        bVar2 = plVar8 != (long *)*plVar7;
        plVar8 = plVar7;
      } while (bVar2);
    }
    else {
      do {
        plVar7 = plVar1;
        plVar1 = (long *)*plVar7;
      } while ((long *)*plVar7 != (long *)0x0);
    }
  }
  return;
}


// ===== 00931be8  FUN_00931be8 =====

void FUN_00931be8(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *local_8;
  
  *param_1 = &PTR_FUN_00d3dfc8;
  local_8 = param_1 + 0x28;
  FUN_005e239c(&local_8,param_1[0x29]);
  FUN_006634ac(param_1 + 0x1d);
  FUN_006634ac(param_1 + 0x14);
  FUN_006634ac(param_1 + 0xb);
  if (*(code **)(param_1[10] + 8) != (code *)0x0) {
    (**(code **)(param_1[10] + 8))(param_1[7]);
  }
  plVar2 = (long *)param_1[1];
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  return;
}


// ===== 00931c84  FUN_00931c84 =====

void FUN_00931c84(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *local_28;
  
  *param_1 = &PTR_FUN_00d3dfc8;
  local_28 = param_1 + 0x28;
  FUN_005e239c(&local_28,param_1[0x29]);
  FUN_006634ac(param_1 + 0x1d);
  FUN_006634ac(param_1 + 0x14);
  FUN_006634ac(param_1 + 0xb);
  if (*(code **)(param_1[10] + 8) != (code *)0x0) {
    (**(code **)(param_1[10] + 8))(param_1[7]);
  }
  plVar2 = (long *)param_1[1];
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  operator_delete(param_1);
  return;
}


// ===== 00931d34  FUN_00931d34 =====

void FUN_00931d34(void)

{
  return;
}


// ===== 00931d3c  FUN_00931d3c =====

undefined1  [16]
FUN_00931d3c(undefined8 *param_1,uint *param_2,undefined8 param_3,undefined8 *param_4,
            undefined8 *param_5)

{
  undefined4 uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  
  plVar7 = (long *)*param_1;
  plVar4 = plVar7 + 1;
  plVar8 = plVar4;
  if ((long *)*plVar4 != (long *)0x0) {
    plVar2 = (long *)*plVar4;
    do {
      while (plVar3 = plVar2, plVar4 = plVar3, *param_2 < *(uint *)(plVar3 + 4)) {
        plVar2 = (long *)*plVar3;
        plVar8 = plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_00931da8;
      }
      if (*param_2 == *(uint *)(plVar3 + 4)) {
        uVar5 = 0;
        goto LAB_00931e48;
      }
      plVar2 = (long *)plVar3[1];
    } while ((long *)plVar3[1] != (long *)0x0);
    plVar8 = plVar3 + 1;
  }
LAB_00931da8:
  plVar3 = (long *)operator_new(0x80);
  if ((plVar3 == (long *)0x0) || (*plVar3 = 0, plVar3 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  puVar6 = (undefined4 *)*param_5;
  *(undefined4 *)(plVar3 + 4) = *(undefined4 *)*param_4;
  uVar1 = *puVar6;
  plVar3[6] = 0;
  *(undefined1 *)(plVar3 + 7) = 0;
  *(undefined1 *)((long)plVar3 + 0x3a) = 0;
  plVar3[9] = 0;
  plVar3[10] = 0;
  plVar3[8] = 0;
  *(undefined4 *)(plVar3 + 5) = uVar1;
  plVar3[0xc] = -1;
  plVar3[0xb] = -1;
  *(undefined4 *)(plVar3 + 0xd) = 0;
  plVar3[0xe] = 0;
  plVar3[0xf] = 0;
  *plVar3 = 0;
  plVar3[1] = 0;
  plVar3[2] = (long)plVar4;
  *plVar8 = (long)plVar3;
  plVar4 = plVar3;
  if (*(long *)*plVar7 != 0) {
    *plVar7 = *(long *)*plVar7;
    plVar4 = (long *)*plVar8;
  }
  FUN_005d5b94(plVar7[1],plVar4);
  uVar5 = 1;
  plVar7[2] = plVar7[2] + 1;
LAB_00931e48:
  auVar9._8_8_ = uVar5;
  auVar9._0_8_ = plVar3;
  return auVar9;
}


// ===== 00931e78  FUN_00931e78 =====

void FUN_00931e78(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00931e90  FUN_00931e90 =====

undefined1  [16]
FUN_00931e90(undefined8 *param_1,uint *param_2,uint *param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  puVar2 = (uint *)*param_1;
  if ((param_2 == puVar2) || (uVar3 = *param_3, param_2[-6] < uVar3)) {
    puVar4 = (uint *)param_1[1];
    if (param_2 != puVar4) {
      uVar3 = *param_3;
      if (*param_2 <= uVar3) {
        if (uVar3 <= *param_2) {
          uVar1 = 0;
          goto LAB_00931f5c;
        }
        goto LAB_00931ef0;
      }
    }
  }
  else {
    puVar4 = (uint *)param_1[1];
LAB_00931ef0:
    param_2 = puVar2;
    if ((long)puVar4 - (long)puVar2 != 0) {
      uVar5 = ((long)puVar4 - (long)puVar2 >> 3) * -0x5555555555555555;
      do {
        uVar6 = uVar5 >> 1;
        param_2 = puVar2 + uVar6 * 6 + 6;
        uVar5 = uVar5 + ~uVar6;
        if (uVar3 <= puVar2[uVar6 * 6]) {
          param_2 = puVar2;
          uVar5 = uVar6;
        }
        puVar2 = param_2;
      } while (uVar5 != 0);
    }
    if ((param_2 != puVar4) && (*param_2 <= uVar3)) {
      uVar1 = 0;
      goto LAB_00931f5c;
    }
  }
  param_2 = (uint *)FUN_00931f80(param_1,param_2,param_4,param_5);
  uVar1 = 1;
LAB_00931f5c:
  auVar7._8_8_ = uVar1;
  auVar7._0_8_ = param_2;
  return auVar7;
}


// ===== 00931f80  FUN_00931f80 =====

undefined8 * FUN_00931f80(long *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
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
  void *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  void *pvStack_48;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    puVar8 = param_2;
    if (param_2 == puVar1) {
      if (param_2 == (undefined8 *)0x0) {
LAB_0093218c:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *(undefined4 *)puVar1 = *param_3;
      uVar10 = *param_4;
      puVar1[2] = param_4[1];
      puVar1[1] = uVar10;
      param_1[1] = (long)(puVar1 + 3);
    }
    else {
      uVar2 = *param_3;
      uVar11 = param_4[1];
      uVar10 = *param_4;
      puVar3 = puVar1;
      for (puVar5 = puVar1 + -3; puVar5 < puVar1; puVar5 = puVar5 + 3) {
        if (puVar3 == (undefined8 *)0x0) goto LAB_0093218c;
        uVar13 = puVar5[1];
        uVar12 = *puVar5;
        puVar3[2] = puVar5[2];
        puVar3[1] = uVar13;
        *puVar3 = uVar12;
        puVar3 = puVar3 + 3;
      }
      param_1[1] = (long)puVar3;
      if (puVar1 != param_2 + 3) {
        lVar9 = 0;
        do {
          lVar4 = lVar9 + -0x30;
          *(undefined4 *)((long)puVar1 + lVar9 + -0x18) =
               *(undefined4 *)((long)puVar1 + lVar9 + -0x30);
          *(undefined8 *)((long)puVar1 + lVar9 + -8) = *(undefined8 *)((long)puVar1 + lVar9 + -0x20)
          ;
          *(undefined8 *)((long)puVar1 + lVar9 + -0x10) =
               *(undefined8 *)((long)puVar1 + lVar9 + -0x28);
          lVar9 = lVar9 + -0x18;
        } while ((undefined8 *)((long)puVar1 + lVar4) != param_2);
      }
      *(undefined4 *)param_2 = uVar2;
      param_2[2] = uVar11;
      param_2[1] = uVar10;
    }
  }
  else {
    lVar9 = *param_1;
    uVar6 = ((long)puVar1 - lVar9 >> 3) * -0x5555555555555555 + 1;
    if (0xaaaaaaaaaaaaaaa < uVar6) {
      FUN_00931e78();
LAB_009321a4:
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    local_60 = (void *)0x0;
    lVar4 = param_1[2] - lVar9 >> 3;
    uVar7 = lVar4 * 0x5555555555555556;
    if (uVar7 < uVar6 || uVar7 - uVar6 == 0) {
      uVar7 = uVar6;
    }
    if (0x555555555555554 < (ulong)(lVar4 * -0x5555555555555555)) {
      uVar7 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar7 != 0) {
      if (0xaaaaaaaaaaaaaaa < uVar7) goto LAB_009321a4;
      local_60 = operator_new(uVar7 * 0x18);
    }
    pvStack_48 = (void *)((long)local_60 + uVar7 * 0x18);
    local_58 = (undefined8 *)((long)local_60 + ((long)param_2 - lVar9));
    local_50 = local_58;
    FUN_009321a8(&local_60,param_3,param_4);
    puVar8 = local_58;
    memcpy(local_50,param_2,param_1[1] - (long)param_2);
    lVar9 = param_1[1];
    param_1[1] = (long)param_2;
    __n = (long)param_2 - *param_1;
    __dest = (void *)((long)local_58 - __n);
    local_50 = (undefined8 *)((long)local_50 + (lVar9 - (long)param_2));
    memcpy(__dest,(void *)*param_1,__n);
    local_60 = (void *)*param_1;
    lVar9 = param_1[2];
    *param_1 = (long)__dest;
    param_1[2] = (long)pvStack_48;
    param_1[1] = (long)local_50;
    if (local_60 != (void *)0x0) {
      local_58 = (undefined8 *)local_60;
      local_50 = (undefined8 *)local_60;
      pvStack_48 = (void *)lVar9;
      operator_delete(local_60);
    }
  }
  return puVar8;
}


// ===== 009321a8  FUN_009321a8 =====

void FUN_009321a8(undefined8 *param_1,undefined4 *param_2,undefined8 *param_3)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  puVar10 = (undefined8 *)param_1[2];
  if ((undefined8 *)param_1[3] == puVar10) {
    pvVar1 = (void *)*param_1;
    puVar11 = (undefined8 *)param_1[1];
    if ((long)puVar11 - (long)pvVar1 == 0) {
      uVar4 = ((long)param_1[3] - (long)pvVar1 >> 3) * 0x5555555555555556;
      if (puVar10 == puVar11) {
        uVar4 = 1;
      }
      if (0xaaaaaaaaaaaaaaa < uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      pvVar2 = operator_new(uVar4 * 0x18);
      lVar3 = (long)puVar10 - (long)puVar11;
      puVar5 = (undefined8 *)((long)pvVar2 + (uVar4 >> 2) * 0x18);
      puVar6 = puVar5;
      if (lVar3 != 0) {
        puVar6 = (undefined8 *)((long)puVar5 + lVar3);
        puVar7 = puVar5;
        puVar9 = puVar11;
        do {
          if (puVar7 == (undefined8 *)0x0) goto LAB_009323b8;
          uVar13 = puVar9[1];
          uVar12 = *puVar9;
          lVar3 = lVar3 + -0x18;
          puVar7[2] = puVar9[2];
          puVar7[1] = uVar13;
          *puVar7 = uVar12;
          puVar7 = puVar7 + 3;
          puVar9 = puVar9 + 3;
        } while (lVar3 != 0);
      }
      *param_1 = pvVar2;
      param_1[1] = puVar5;
      param_1[2] = puVar6;
      param_1[3] = (void *)((long)pvVar2 + uVar4 * 0x18);
      uVar4 = (ulong)(((long)puVar11 - (long)puVar10) * 0x1555555555555555) >> 3;
      uVar8 = (long)puVar10 * -0x1555555555555555 - 8U >> 3;
      if (uVar8 <= uVar4) {
        uVar4 = uVar8;
      }
      puVar6 = puVar10;
      if ((1 < uVar4) && ((((int)puVar11 - (int)puVar10 | -(int)puVar10) & 7U) == 0)) {
        uVar4 = uVar4 & 0x1ffffffffffffffe;
        puVar6 = puVar10 + uVar4 * -3;
        do {
          uVar4 = uVar4 - 2;
        } while (uVar4 != 0);
      }
      while (puVar6 != puVar11) {
        puVar6 = puVar6 + -3;
        if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      if (puVar11 != (undefined8 *)0x0) {
        operator_delete(pvVar1);
      }
    }
    else {
      lVar3 = (((long)puVar11 - (long)pvVar1 >> 3) * -0x5555555555555555 + 1) / 2;
      puVar6 = puVar11 + lVar3 * -3;
      if (puVar11 != puVar10) {
        do {
          *(undefined4 *)puVar6 = *(undefined4 *)puVar11;
          puVar5 = puVar11 + 2;
          uVar12 = puVar11[1];
          puVar11 = puVar11 + 3;
          puVar6[2] = *puVar5;
          puVar6[1] = uVar12;
          puVar6 = puVar6 + 3;
        } while (puVar11 != puVar10);
        puVar11 = (undefined8 *)param_1[1];
      }
      param_1[1] = puVar11 + lVar3 * -3;
      param_1[2] = puVar6;
      puVar10 = puVar6;
    }
  }
  if (puVar10 != (undefined8 *)0x0) {
    *(undefined4 *)puVar10 = *param_2;
    uVar12 = *param_3;
    puVar10[2] = param_3[1];
    puVar10[1] = uVar12;
    param_1[2] = puVar10 + 3;
    return;
  }
LAB_009323b8:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 009323d0  FUN_009323d0 =====

long FUN_009323d0(uint *param_1,long param_2)

{
  uint *puVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  long lVar10;
  char *pcVar11;
  char *local_a8;
  char **ppcStack_a0;
  ulong local_98;
  char **ppcStack_90;
  char *local_88;
  ulong *puStack_80;
  long local_78;
  char **ppcStack_70;
  char *local_68;
  long *plStack_60;
  char *local_58;
  undefined8 uStack_50;
  char **local_48;
  char *local_40;
  char **ppcStack_38;
  
  puVar1 = param_1 + 6;
  lVar4 = *(long *)puVar1;
  if (lVar4 == *(long *)(param_1 + 8)) {
    FUN_009325d0(puVar1,0x40);
    lVar4 = *(long *)(param_1 + 8);
    *(long *)(param_1 + 0xc) = param_2 + -0x3f;
    *(long *)(param_1 + 0xe) = param_2;
    if (*(long *)(param_1 + 6) == lVar4) {
LAB_009325a8:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__vector/vector.h:439: libc++ Hardening assertion !empty() failed: back() called on an empty vector\n"
                );
    }
LAB_00932494:
    lVar4 = lVar4 + -0x10;
  }
  else {
    lVar10 = *(long *)(param_1 + 0xc);
    uVar2 = param_2 - lVar10;
    if (param_2 < lVar10) {
      uVar2 = FUN_0044075c();
      if ((uVar2 & 1) == 0) {
        local_48 = &local_68;
        uStack_50 = 0x178;
        pcVar6 = "Received too old packet ssrc:";
        ppcStack_38 = &local_58;
        uVar2 = (ulong)*param_1;
        pcVar8 = *(char **)(param_1 + 0xc);
        local_40 = "Received too old packet ssrc:";
        puVar3 = &DAT_002268ef;
        pcVar7 = ". Expected seq >= ";
        uVar5 = 0x178;
        pcVar11 = ". Ignoring the packet.";
LAB_0093246c:
        local_58 = "../../modules/remote_bitrate_estimator/congestion_control_feedback_tracker.cc";
        FUN_00623bb0(puVar3,
                     "../../modules/remote_bitrate_estimator/congestion_control_feedback_tracker.cc"
                     ,uVar5,pcVar6,uVar2," seq:",param_2,pcVar7,pcVar8,pcVar11);
      }
    }
    else {
      uVar9 = *(long *)(param_1 + 8) - lVar4 >> 4;
      if (param_2 < (long)(lVar10 + uVar9)) {
        if (uVar2 < uVar9) {
          return lVar4 + uVar2 * 0x10;
        }
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
                  );
      }
      pcVar8 = (char *)(uVar2 + 1);
      if ((long)pcVar8 < 0x4001) {
        FUN_009325d0(puVar1,pcVar8);
        lVar4 = *(long *)(param_1 + 8);
        if (*(long *)(param_1 + 6) == lVar4) goto LAB_009325a8;
        goto LAB_00932494;
      }
      uVar2 = FUN_0044075c();
      if ((uVar2 & 1) == 0) {
        uStack_50 = 0x1d0;
        pcVar6 = "Received too new packet ssrc:";
        ppcStack_a0 = &local_58;
        uVar2 = (ulong)*param_1;
        local_a8 = "Received too new packet ssrc:";
        ppcStack_90 = &local_a8;
        puStack_80 = &local_98;
        local_48 = (char **)&stack0xffffffffffffffef;
        local_88 = " seq:";
        ppcStack_70 = &local_88;
        pcVar7 = " that would increase number of packet to report to ";
        plStack_60 = &local_78;
        local_68 = " that would increase number of packet to report to ";
        puVar3 = &DAT_002268f8;
        uVar5 = 0x1d0;
        ppcStack_38 = &local_68;
        pcVar11 = " from current ";
        local_98 = uVar2;
        local_78 = param_2;
        local_40 = pcVar8;
        goto LAB_0093246c;
      }
    }
    lVar4 = 0;
  }
  return lVar4;
}


// ===== 009325d0  FUN_009325d0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009325d0(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  void *__src;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *pvVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  size_t __n;
  ulong uVar14;
  void *__dest;
  undefined8 *puVar15;
  ulong uVar16;
  
  uVar5 = _UNK_001f4178;
  uVar4 = _DAT_001f4170;
  __src = (void *)*param_1;
  puVar8 = (undefined8 *)param_1[1];
  __n = (long)puVar8 - (long)__src;
  uVar16 = (long)__n >> 4;
  uVar7 = param_2 - uVar16;
  if (param_2 < uVar16 || uVar7 == 0) {
    if (param_2 >= uVar16) {
      return;
    }
    puVar15 = (undefined8 *)((long)__src + param_2 * 0x10);
    uVar7 = (ulong)(((long)puVar15 - (long)puVar8 << 0x3c) - ((long)puVar15 - (long)puVar8)) >> 4;
    uVar16 = (ulong)((long)puVar8 + (-0x10 - ((long)puVar8 << 0x3c))) >> 4;
    if (uVar16 <= uVar7) {
      uVar7 = uVar16;
    }
    if ((1 < uVar7) && ((((int)__src - (int)puVar8 | -(int)puVar8) & 0xfU) == 0)) {
      uVar7 = uVar7 & 0xffffffffffffffe;
      puVar8 = puVar8 + uVar7 * -2;
      do {
        uVar7 = uVar7 - 2;
      } while (uVar7 != 0);
    }
    do {
      if (puVar8 == puVar15) {
        param_1[1] = puVar15;
        return;
      }
      puVar8 = puVar8 + -2;
    } while (puVar8 != (undefined8 *)0x0);
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
  uVar14 = param_1[2] - (long)__src;
  if (param_2 <= (ulong)((long)uVar14 >> 4)) {
    puVar15 = puVar8;
    if ((uVar7 & 0xfffffffffffffff) != 0) {
      puVar15 = puVar8 + uVar7 * 2;
      uVar16 = (param_2 * 0x10 - __n) - 0x10 >> 4;
      uVar7 = (ulong)-(long)puVar8 >> 4;
      if (uVar16 <= (ulong)-(long)puVar8 >> 4) {
        uVar7 = uVar16;
      }
      uVar2 = _UNK_001f4178;
      uVar3 = _DAT_001f4170;
      if (0x1d < uVar7) {
        uVar14 = (ulong)-(long)puVar8 >> 4;
        if (uVar16 <= uVar14) {
          uVar14 = uVar16;
        }
        if (((-(long)puVar8 & 0xfU) == 0) && (puVar8 <= puVar8 + uVar14 * 2)) {
          uVar16 = uVar7 + 1 & 3;
          uVar14 = 4;
          if (uVar16 != 0) {
            uVar14 = uVar16;
          }
          puVar11 = puVar8 + 4;
          lVar9 = (uVar7 + 1) - uVar14;
          puVar8 = puVar8 + lVar9 * 2;
          do {
            lVar9 = lVar9 + -4;
            puVar11[-3] = uVar5;
            puVar11[-4] = uVar4;
            puVar11[-1] = uVar5;
            puVar11[-2] = uVar4;
            puVar11[1] = uVar5;
            *puVar11 = uVar4;
            puVar11[3] = uVar5;
            puVar11[2] = uVar4;
            puVar11 = puVar11 + 8;
            uVar2 = _UNK_001f4178;
            uVar3 = _DAT_001f4170;
          } while (lVar9 != 0);
        }
      }
      do {
        if (puVar8 == (undefined8 *)0x0) goto LAB_009328ac;
        puVar11 = puVar8 + 2;
        puVar8[1] = uVar2;
        *puVar8 = uVar3;
        puVar8 = puVar11;
      } while (puVar11 != puVar15);
    }
    param_1[1] = puVar15;
    return;
  }
  if (param_2 >> 0x3c != 0) {
    FUN_00932d68();
LAB_009328c4:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  uVar1 = (long)uVar14 >> 3;
  if ((ulong)((long)uVar14 >> 3) <= param_2) {
    uVar1 = param_2;
  }
  if (0x7fffffffffffffef < uVar14) {
    uVar1 = 0xfffffffffffffff;
  }
  if (uVar1 >> 0x3c != 0) goto LAB_009328c4;
  pvVar6 = operator_new(uVar1 * 0x10);
  uVar5 = _UNK_001f4178;
  uVar4 = _DAT_001f4170;
  uVar14 = (long)pvVar6 + __n;
  if (uVar7 * 0x10 == 0) {
    puVar15 = (undefined8 *)((long)pvVar6 + __n);
    goto LAB_0093283c;
  }
  puVar15 = (undefined8 *)(uVar14 + uVar7 * 0x10);
  uVar10 = (long)__src + (-(long)pvVar6 - (long)puVar8);
  uVar12 = uVar10 >> 4;
  uVar13 = (param_2 * 0x10 - __n) - 0x10 >> 4;
  uVar7 = uVar12;
  if (uVar13 <= uVar12) {
    uVar7 = uVar13;
  }
  uVar2 = _UNK_001f4178;
  uVar3 = _DAT_001f4170;
  if (uVar7 < 0x20) {
LAB_00932690:
    puVar8 = (undefined8 *)((long)pvVar6 + __n);
  }
  else {
    if (uVar13 <= uVar12) {
      uVar12 = uVar13;
    }
    if ((uVar10 & 0xf) != 0) goto LAB_00932690;
    puVar8 = (undefined8 *)((long)pvVar6 + __n);
    if (uVar14 <= uVar14 + uVar12 * 0x10) {
      uVar12 = uVar7 + 1 & 3;
      uVar10 = 4;
      if (uVar12 != 0) {
        uVar10 = uVar12;
      }
      lVar9 = (uVar7 + 1) - uVar10;
      puVar8 = (undefined8 *)(uVar14 + lVar9 * 0x10);
      puVar11 = (undefined8 *)((long)pvVar6 + __n + 0x20);
      do {
        lVar9 = lVar9 + -4;
        puVar11[-3] = uVar5;
        puVar11[-4] = uVar4;
        puVar11[-1] = uVar5;
        puVar11[-2] = uVar4;
        puVar11[1] = uVar5;
        *puVar11 = uVar4;
        puVar11[3] = uVar5;
        puVar11[2] = uVar4;
        puVar11 = puVar11 + 8;
        uVar2 = _UNK_001f4178;
        uVar3 = _DAT_001f4170;
      } while (lVar9 != 0);
    }
  }
  do {
    if (puVar8 == (undefined8 *)0x0) {
LAB_009328ac:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    puVar11 = puVar8 + 2;
    puVar8[1] = uVar2;
    *puVar8 = uVar3;
    puVar8 = puVar11;
  } while (puVar11 != puVar15);
LAB_0093283c:
  __dest = (void *)(uVar14 + uVar16 * -0x10);
  memcpy(__dest,__src,__n);
  *param_1 = __dest;
  param_1[1] = puVar15;
  param_1[2] = (void *)((long)pvVar6 + uVar1 * 0x10);
  if (__src == (void *)0x0) {
    return;
  }
  operator_delete(__src);
  return;
}


// ===== 009328c8  FUN_009328c8 =====

void FUN_009328c8(long param_1,long param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  undefined1 uVar7;
  ulong uVar8;
  char *local_58;
  undefined8 uStack_50;
  undefined1 *local_48;
  char *local_40;
  char **ppcStack_38;
  undefined1 uStack_11;
  
  uVar1 = *(ushort *)(param_2 + 4);
  uVar8 = (ulong)uVar1;
  if ((*(byte *)(param_1 + 0x12) & 1) != 0) {
    uVar2 = (uint)uVar1 - (uint)*(ushort *)(param_1 + 0x10);
    iVar3 = (int)(short)uVar2;
    bVar4 = (uint)*(ushort *)(param_1 + 0x10) <= (uint)uVar1 && uVar2 != 0;
    if (uVar2 != 0x8000) {
      bVar4 = iVar3 != -1 && iVar3 + 1 < 0 == SCARRY4(iVar3,1);
    }
    uVar8 = (ulong)uVar2 & 0xffff;
    if (!bVar4) {
      uVar8 = (ulong)uVar2 & 0xffff | 0xffffffffffff0000;
    }
    uVar8 = uVar8 + *(long *)(param_1 + 8);
  }
  *(ushort *)(param_1 + 0x10) = uVar1;
  *(ulong *)(param_1 + 8) = uVar8;
  *(undefined1 *)(param_1 + 0x12) = 1;
  plVar5 = (long *)FUN_009323d0(param_1,uVar8);
  if (plVar5 == (long *)0x0) {
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  }
  else {
    if (*plVar5 == -0x8000000000000000) {
      *plVar5 = *(long *)(param_2 + 0x70);
      uVar7 = *(undefined1 *)(param_2 + 0x78);
    }
    else {
      if (*(char *)(param_2 + 0x78) != '\x03') {
        return;
      }
      if ((char)plVar5[1] == '\x03') {
        return;
      }
      uVar7 = 3;
    }
    *(undefined1 *)(plVar5 + 1) = uVar7;
    if ((long)uVar8 < *(long *)(param_1 + 0x38)) {
      uVar6 = FUN_004022fc();
      if ((uVar6 & 1) == 0) {
        local_48 = &uStack_11;
        local_58 = "../../modules/remote_bitrate_estimator/congestion_control_feedback_tracker.cc";
        uStack_50 = 0x36a;
        ppcStack_38 = &local_58;
        local_40 = "Received packet unorderered between feeedback. SSRC: ";
        FUN_00623bb0(&DAT_00226905,
                     "../../modules/remote_bitrate_estimator/congestion_control_feedback_tracker.cc"
                     ,0x36a,"Received packet unorderered between feeedback. SSRC: ",
                     *(undefined4 *)(param_2 + 0xc)," Seq: ",*(undefined2 *)(param_2 + 4),
                     " last feedback: ",*(undefined8 *)(param_1 + 0x38));
      }
      *(ulong *)(param_1 + 0x38) = uVar8;
    }
  }
  return;
}


// ===== 00932a30  FUN_00932a30 =====

void FUN_00932a30(undefined4 *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined8 local_78;
  long lStack_70;
  undefined1 *local_68;
  undefined1 uStack_41;
  
  plVar7 = *(long **)(param_1 + 6);
  plVar8 = *(long **)(param_1 + 8);
  if (plVar7 != plVar8) {
    lVar5 = *(long *)(param_1 + 0xc);
    uVar6 = *(ulong *)(param_1 + 0xe);
    lVar10 = (long)plVar8 - (long)plVar7 >> 4;
    uVar2 = lVar5 + lVar10;
    if (uVar6 == uVar2) {
      if (0 < (int)param_1[0x10]) {
        uVar2 = FUN_004022fc();
        if ((uVar2 & 1) == 0) {
          local_68 = &uStack_41;
          local_78 = "../../modules/remote_bitrate_estimator/congestion_control_feedback_tracker.cc"
          ;
          lStack_70 = 0x44a;
          FUN_00623bb0(&DAT_0022690d,
                       "../../modules/remote_bitrate_estimator/congestion_control_feedback_tracker.cc"
                       ,0x44a,param_1[0x10],
                       " received packets were discarded while no packets were accepted to produce feedback for SSRC: "
                       ,*param_1,
                       ". Assuming sequence numbers were reset, reset state and next sequence number in feedback from "
                       ,*(undefined8 *)(param_1 + 0xe));
        }
        lVar5 = *(long *)(param_1 + 6);
        lVar10 = *(long *)(param_1 + 8);
        uVar6 = (lVar10 - (lVar10 << 0x3c)) - 0x10U >> 4;
        uVar2 = (ulong)((lVar5 - lVar10 << 0x3c) - (lVar5 - lVar10)) >> 4;
        if (uVar6 <= uVar2) {
          uVar2 = uVar6;
        }
        if ((1 < uVar2) && ((((int)lVar5 - (int)lVar10 | -(int)lVar10) & 0xfU) == 0)) {
          uVar2 = uVar2 & 0xffffffffffffffe;
          lVar10 = lVar10 + uVar2 * -0x10;
          do {
            uVar2 = uVar2 - 2;
          } while (uVar2 != 0);
        }
        do {
          if (lVar10 == lVar5) {
            *(long *)(param_1 + 8) = lVar5;
            param_1[0x10] = 0;
            return;
          }
          lVar10 = lVar10 + -0x10;
        } while (lVar10 != 0);
LAB_00932cf8:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
    }
    else {
      param_1[0x10] = 0;
      plVar9 = plVar7 + (uVar6 - lVar5) * 2;
      if (plVar8 != plVar9) {
        do {
          if (*plVar9 == -0x8000000000000000) {
            if ((*(byte *)((long)plVar9 + 9) & 1) == 0) {
              *(long *)(param_1 + 0x12) = *(long *)(param_1 + 0x12) + 1;
              *(undefined1 *)((long)plVar9 + 9) = 1;
              if (*plVar9 != -0x8000000000000000) goto LAB_00932b9c;
            }
          }
          else if (*(byte *)((long)plVar9 + 9) != 0) {
LAB_00932b9c:
            *(long *)(param_1 + 0x14) = *(long *)(param_1 + 0x14) + 1;
            *(undefined1 *)((long)plVar9 + 9) = 0;
          }
          local_78 = (char *)CONCAT44(CONCAT22(local_78._6_2_,(short)uVar6),*param_1);
          lStack_70 = *plVar9;
          lVar5 = -0x8000000000000000;
          if (lStack_70 != 0x7fffffffffffffff && param_2 != -0x8000000000000000) {
            lVar5 = param_2 - lStack_70;
          }
          lVar10 = param_2;
          if (param_2 != 0x7fffffffffffffff) {
            lVar10 = lVar5;
          }
          if (lStack_70 != -0x8000000000000000) {
            lStack_70 = lVar10;
          }
          puVar1 = *(undefined8 **)(param_3 + 8);
          local_68 = (undefined1 *)CONCAT71(local_68._1_7_,(char)plVar9[1]);
          if (puVar1 < *(undefined8 **)(param_3 + 0x10)) {
            if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                        );
            }
            puVar3 = puVar1 + 3;
            puVar1[2] = local_68;
            puVar1[1] = lStack_70;
            *puVar1 = local_78;
          }
          else {
            puVar3 = (undefined8 *)FUN_008608d8(param_3,&local_78);
          }
          *(undefined8 **)(param_3 + 8) = puVar3;
          plVar9 = plVar9 + 2;
          uVar6 = (ulong)((int)uVar6 + 1);
          plVar8 = *(long **)(param_1 + 8);
        } while (plVar9 != plVar8);
        plVar7 = *(long **)(param_1 + 6);
        lVar5 = *(long *)(param_1 + 0xc);
        lVar10 = (long)plVar8 - (long)plVar7 >> 4;
        uVar2 = lVar10 + lVar5;
      }
      uVar6 = lVar10 - 0x40;
      *(ulong *)(param_1 + 0xc) = uVar6 + lVar5;
      *(ulong *)(param_1 + 0xe) = uVar2;
      plVar9 = plVar7 + uVar6 * 2;
      if (plVar9 < plVar7) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__vector/vector.h:1170: libc++ Hardening assertion __first <= __last failed: vector::erase(first, last) called with invalid range\n"
                  );
      }
      if ((uVar6 & 0xfffffffffffffff) != 0) {
        plVar4 = plVar8;
        if (plVar8 != plVar9) {
          memmove(plVar7,plVar9,((long)plVar8 - (long)plVar9) - 6);
          plVar4 = *(long **)(param_1 + 8);
        }
        uVar6 = (ulong)((long)plVar4 + (-0x10 - ((long)plVar4 << 0x3c))) >> 4;
        uVar2 = (((long)plVar8 - (long)(plVar4 + lVar10 * 2) << 0x3c) -
                ((long)plVar8 - (long)(plVar4 + lVar10 * 2))) - 0x400U >> 4;
        if (uVar6 <= uVar2) {
          uVar2 = uVar6;
        }
        plVar7 = (long *)((long)plVar7 + ((long)plVar8 - (long)plVar9));
        if ((1 < uVar2) && ((((int)plVar8 - (int)plVar4 | -(int)plVar4) & 0xfU) == 0)) {
          uVar2 = uVar2 & 0xffffffffffffffe;
          plVar4 = plVar4 + uVar2 * -2;
          do {
            uVar2 = uVar2 - 2;
          } while (uVar2 != 0);
        }
        do {
          if (plVar4 == plVar7) {
            *(long **)(param_1 + 8) = plVar7;
            return;
          }
          plVar4 = plVar4 + -2;
        } while (plVar4 != (long *)0x0);
        goto LAB_00932cf8;
      }
    }
  }
  return;
}


// ===== 00932d68  FUN_00932d68 =====

void FUN_00932d68(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00932d80  FUN_00932d80 =====

/* WARNING: Removing unreachable block (ram,0x00932e9c) */
/* WARNING: Removing unreachable block (ram,0x00932eb8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00932d80(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  char *local_88;
  undefined8 local_80;
  undefined1 *local_78;
  char *local_70;
  char **ppcStack_68;
  undefined1 *local_60;
  undefined8 uStack_58;
  long local_50;
  char **local_48;
  undefined1 *local_38;
  undefined8 uStack_30;
  undefined7 local_28;
  undefined1 uStack_21;
  undefined1 uStack_1;
  
  *param_1 = &PTR_FUN_00d3e000;
  uVar4 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar4;
  param_1[3] = param_2[2];
  lVar3 = param_2[3];
  param_1[4] = lVar3;
  if (*(long *)(lVar3 + 8) != 0) {
    param_2[2] = 0;
    param_2[3] = &DAT_001fbc50;
  }
  param_1[5] = 0x8000000000000000;
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_60);
  pthread_mutex_init((pthread_mutex_t *)(param_1 + 6),(pthread_mutexattr_t *)&local_60);
  iVar1 = pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_60);
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)(param_1 + 0x11) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x5c) = 0;
  param_1[0x14] = 100000;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)((long)param_1 + 0x6a) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x15) = 1;
  uVar2 = FUN_00417e08(iVar1);
  if ((uVar2 & 1) == 0) {
    local_88 = 
    "../../modules/remote_bitrate_estimator/transport_sequence_number_feedback_generator.cc";
    local_80 = 0x1a1;
    local_78 = &uStack_1;
    ppcStack_68 = &local_88;
    local_70 = "Maximum interval between transport feedback RTCP messages: ";
    FUN_005f3380(&local_38,&DAT_00226918);
    local_50 = CONCAT17(uStack_21,local_28);
    local_48 = &local_70;
    uStack_58 = uStack_30;
    local_60 = local_38;
    FUN_00623bb0(&DAT_001f6510,*ppcStack_68,*(undefined4 *)(ppcStack_68 + 1),local_70,&local_60);
    if (local_50 < 0) {
      operator_delete(local_60);
    }
  }
  return;
}


// ===== 00932f14  FUN_00932f14 =====

ulong FUN_00932f14(undefined8 *param_1)

{
  uint uVar1;
  void *pvVar2;
  ulong uVar3;
  
  pvVar2 = (void *)param_1[0x10];
  param_1[0x10] = 0;
  *param_1 = &PTR_FUN_00d3e000;
  if (pvVar2 != (void *)0x0) {
    operator_delete__(pvVar2);
  }
  uVar1 = pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 6));
  if (*(code **)(param_1[4] + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00932f68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(param_1[4] + 8))(param_1[1]);
    return uVar3;
  }
  return (ulong)uVar1;
}


// ===== 00932f7c  FUN_00932f7c =====

void FUN_00932f7c(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[0x10];
  param_1[0x10] = 0;
  *param_1 = &PTR_FUN_00d3e000;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 6));
  if (*(code **)(param_1[4] + 8) != (code *)0x0) {
    (**(code **)(param_1[4] + 8))(param_1[1]);
  }
  operator_delete(param_1);
  return;
}


// ===== 00932fe0  FUN_00932fe0 =====

ulong FUN_00932fe0(long param_1,long param_2)

{
  int iVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined8 local_40;
  uint local_38;
  ushort local_14 [2];
  
  if (*(long *)(param_2 + 0x70) + 0x8000000000000001U < 2) {
    uVar5 = FUN_004022fc();
    if ((uVar5 & 1) != 0) {
      return uVar5;
    }
    uVar5 = FUN_00623bb0(&DAT_001f4e98,
                         "../../modules/remote_bitrate_estimator/transport_sequence_number_feedback_generator.cc"
                         ,0x25a,"Arrival time not set.");
    return uVar5;
  }
  local_14[0] = 0;
  local_40 = 0xaaaaaaaaaaaaaa00;
  local_38 = 0xaaaaaa00;
  auVar8 = FUN_007dba34(param_2,8);
  if ((auVar8._8_8_ == 0) ||
     (uVar5 = FUN_007d9000(auVar8._0_8_,auVar8._8_8_,local_14), (uVar5 & 1) == 0)) {
    auVar8 = FUN_007dba34(param_2,9);
    if (auVar8._8_8_ == 0) {
      return auVar8._0_8_;
    }
    uVar5 = FUN_007d9044(auVar8._0_8_,auVar8._8_8_,local_14,&local_40);
    if ((uVar5 & 1) == 0) {
      return uVar5;
    }
  }
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x30));
  bVar3 = FUN_007dbb58(param_2,8);
  uVar5 = (ulong)local_14[0];
  *(byte *)(param_1 + 0xa8) = bVar3 & 1;
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0xc);
  if ((*(byte *)(param_1 + 0x6a) & 1) != 0) {
    uVar4 = (uint)local_14[0] - (uint)*(ushort *)(param_1 + 0x68);
    iVar1 = (int)(short)uVar4;
    bVar2 = (uint)*(ushort *)(param_1 + 0x68) <= (uint)local_14[0] && uVar4 != 0;
    if (uVar4 != 0x8000) {
      bVar2 = iVar1 != -1 && iVar1 + 1 < 0 == SCARRY4(iVar1,1);
    }
    uVar5 = (ulong)uVar4 & 0xffff;
    if (!bVar2) {
      uVar5 = (ulong)uVar4 & 0xffff | 0xffffffffffff0000;
    }
    uVar5 = uVar5 + *(long *)(param_1 + 0x60);
  }
  *(ushort *)(param_1 + 0x68) = local_14[0];
  *(ulong *)(param_1 + 0x60) = uVar5;
  *(undefined1 *)(param_1 + 0x6a) = 1;
  if ((bVar3 & 1) == 0) goto LAB_009331a0;
  bVar3 = *(byte *)(param_1 + 0x78);
  if ((bVar3 == 1) && (*(long *)(param_1 + 0x98) <= *(long *)(param_1 + 0x70))) {
    lVar7 = *(long *)(param_2 + 0x70);
    lVar6 = 0x7fffffffffffffff;
    if (lVar7 == 0x7fffffffffffffff) {
LAB_0093316c:
      FUN_00933d58(param_1 + 0x80,uVar5,lVar6);
      bVar3 = *(byte *)(param_1 + 0x78) & 1;
      goto joined_r0x00933184;
    }
    if (499999 < lVar7) {
      lVar6 = lVar7 + -500000;
      goto LAB_0093316c;
    }
LAB_00933188:
    if (*(long *)(param_1 + 0x70) <= (long)uVar5) goto LAB_009331a0;
  }
  else {
joined_r0x00933184:
    if (bVar3 != 0) goto LAB_00933188;
  }
  *(ulong *)(param_1 + 0x70) = uVar5;
  *(undefined1 *)(param_1 + 0x78) = 1;
LAB_009331a0:
  if ((((long)uVar5 < *(long *)(param_1 + 0x90)) || (*(long *)(param_1 + 0x98) <= (long)uVar5)) ||
     (*(long *)(*(long *)(param_1 + 0x80) + (long)(int)(*(uint *)(param_1 + 0x88) & (uint)uVar5) * 8
               ) < 0)) {
    FUN_00933788(param_1 + 0x80,uVar5,*(undefined8 *)(param_2 + 0x70));
    if ((*(char *)(param_1 + 0x78) != '\x01') ||
       (*(long *)(param_1 + 0x70) < *(long *)(param_1 + 0x90))) {
      *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x90);
      *(undefined1 *)(param_1 + 0x78) = 1;
    }
    if ((local_38 & 1) != 0) {
      FUN_0093323c(param_1,uVar5,&local_40);
    }
  }
  uVar4 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x30));
  return (ulong)uVar4;
}


// ===== 0093323c  FUN_0093323c =====

void FUN_0093323c(long param_1,long param_2,undefined1 *param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  long *local_48;
  long *local_40;
  long *local_38;
  
  if (*(int *)(param_3 + 4) != 0) {
    lVar6 = param_2 - *(int *)(param_3 + 4);
    lVar2 = FUN_009335f4(param_1,*param_3,lVar6 + 1,param_2 + 1,0);
    if (lVar2 != 0) {
      FUN_00933da4(param_1 + 0x80,lVar6 + 1);
      local_48 = (long *)operator_new(8);
      if (local_48 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      pcVar4 = *(code **)(param_1 + 0x18);
      local_40 = local_48 + 1;
      *local_48 = lVar2;
      local_38 = local_40;
      (*pcVar4)(param_1 + 8,&local_48);
      plVar1 = local_48;
      plVar5 = local_40;
      if (local_48 != (long *)0x0) {
        while (plVar1 != plVar5) {
          plVar5 = plVar5 + -1;
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                      );
          }
          plVar3 = (long *)*plVar5;
          *plVar5 = 0;
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 8))();
          }
        }
        local_40 = plVar1;
        operator_delete(local_48);
      }
    }
  }
  return;
}


// ===== 0093335c  FUN_0093335c =====

long FUN_0093335c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x30));
  lVar2 = 0x7fffffffffffffff;
  if (*(char *)(param_1 + 0xa8) == '\x01') {
    lVar1 = *(long *)(param_1 + 0x28);
    lVar3 = lVar2;
    if ((lVar1 != 0x7fffffffffffffff) &&
       (lVar2 = *(long *)(param_1 + 0xa0), lVar2 != 0x7fffffffffffffff)) {
      lVar3 = -0x8000000000000000;
      if (lVar2 != -0x8000000000000000 && lVar1 != -0x8000000000000000) {
        lVar3 = lVar1 + lVar2;
      }
    }
    if (lVar3 - param_2 == 0 || lVar3 < param_2) {
      *(long *)(param_1 + 0x28) = param_2;
      FUN_00933410(param_1);
      lVar2 = *(long *)(param_1 + 0xa0);
    }
    else {
      lVar2 = 0x7fffffffffffffff;
      if (param_2 != -0x8000000000000000 && lVar3 != 0x7fffffffffffffff) {
        lVar2 = lVar3 - param_2;
      }
    }
  }
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x30));
  return lVar2;
}


// ===== 00933410  FUN_00933410 =====

void FUN_00933410(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  byte bVar5;
  code *pcVar6;
  long lVar7;
  long *local_48;
  long *local_40;
  long *local_38;
  
  if (*(char *)(param_1 + 0x78) == '\x01') {
    lVar7 = *(long *)(param_1 + 0x98);
    lVar4 = *(long *)(param_1 + 0x70);
    if (lVar4 < lVar7) {
      bVar5 = 1;
      do {
        if ((bVar5 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                    );
        }
        lVar4 = FUN_009335f4(param_1,1,lVar4,lVar7,1);
        if (lVar4 == 0) {
          return;
        }
        plVar2 = (long *)operator_new(8);
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        pcVar6 = *(code **)(param_1 + 0x18);
        local_40 = plVar2 + 1;
        *plVar2 = lVar4;
        local_48 = plVar2;
        local_38 = local_40;
        (*pcVar6)(param_1 + 8,&local_48);
        plVar1 = local_48;
        plVar2 = local_40;
        if (local_48 != (long *)0x0) {
          while (plVar1 != plVar2) {
            plVar2 = plVar2 + -1;
            if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                        );
            }
            plVar3 = (long *)*plVar2;
            *plVar2 = 0;
            if (plVar3 != (long *)0x0) {
              (**(code **)(*plVar3 + 8))();
            }
          }
          local_40 = plVar1;
          operator_delete(local_48);
        }
        bVar5 = *(byte *)(param_1 + 0x78);
        lVar4 = *(long *)(param_1 + 0x70);
      } while ((bVar5 != 1) || (lVar4 < lVar7));
    }
  }
  return;
}


// ===== 00933564  FUN_00933564 =====

int FUN_00933564(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong local_28;
  
  uVar2 = (ulong)((double)param_2 * DAT_001f5940);
  if ((long)uVar2 < 0x881) {
    puVar3 = &DAT_00226918;
  }
  else {
    local_28 = 0;
    if (uVar2 != 0) {
      local_28 = 544000000 / uVar2;
    }
    puVar3 = (ulong *)&UNK_001f5370;
    if (uVar2 < 0x2a81) {
      puVar3 = &local_28;
    }
  }
  uVar2 = *puVar3;
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x30));
  *(ulong *)(param_1 + 0xa0) = uVar2;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x30));
  return iVar1;
}


// ===== 009335f4  FUN_009335f4 =====

long * FUN_009335f4(long param_1,uint param_2,long param_3,long param_4,uint param_5)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = *(long *)(param_1 + 0x90);
  lVar7 = *(long *)(param_1 + 0x98);
  if (lVar7 < lVar1) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__algorithm/clamp.h:29: libc++ Hardening assertion !__comp(__hi, __lo) failed: Bad bounds passed to std::clamp\n"
              );
  }
  lVar4 = lVar7;
  if (param_3 <= lVar7) {
    lVar4 = param_3;
  }
  lVar5 = lVar1;
  if (lVar1 <= param_3) {
    lVar5 = lVar4;
  }
  if (param_4 <= lVar7) {
    lVar7 = param_4;
  }
  if (lVar1 <= param_4) {
    lVar1 = lVar7;
  }
  lVar7 = param_3;
  if (lVar5 < lVar1) {
    plVar3 = (long *)0x0;
    do {
      do {
        lVar6 = lVar5;
        lVar5 = lVar6 + 1;
        lVar4 = *(long *)(*(long *)(param_1 + 0x80) +
                         (long)(int)(*(uint *)(param_1 + 0x88) & (uint)lVar6) * 8);
      } while (lVar4 < 0);
      if (lVar1 <= lVar6) break;
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)operator_new(0x98);
        FUN_007d1fbc(plVar3,param_2 & 1);
        *(undefined4 *)((long)plVar3 + 0xc) = *(undefined4 *)(param_1 + 0x58);
        lVar7 = param_3;
        if (param_3 <= lVar6 + -0x7ffe) {
          lVar7 = lVar6 + -0x7ffe;
        }
        FUN_007d238c(plVar3,lVar7,lVar4);
        *(char *)(param_1 + 0x5c) = *(char *)(param_1 + 0x5c) + '\x01';
        FUN_007d23f8(plVar3);
        uVar2 = FUN_007d2404(plVar3,lVar6,lVar4);
        if ((uVar2 & 1) == 0) {
          *(long *)(param_1 + 0x70) = lVar6;
          *(undefined1 *)(param_1 + 0x78) = 1;
          if (plVar3 == (long *)0x0) {
            return (long *)0x0;
          }
          (**(code **)(*plVar3 + 8))(plVar3);
          return (long *)0x0;
        }
      }
      else {
        uVar2 = FUN_007d2404(plVar3,lVar6,lVar4);
        if ((uVar2 & 1) == 0) break;
      }
      lVar7 = lVar5;
    } while (lVar5 < lVar1);
  }
  else {
    plVar3 = (long *)0x0;
  }
  if ((param_5 & 1) != 0) {
    *(long *)(param_1 + 0x70) = lVar7;
    *(undefined1 *)(param_1 + 0x78) = 1;
  }
  return plVar3;
}


// ===== 00933788  FUN_00933788 =====

void FUN_00933788(long *param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  void *pvVar6;
  ulong uVar7;
  void *pvVar8;
  uint uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  
  if (*param_1 == 0) {
    pvVar6 = operator_new__(0x400);
    uVar7 = param_1[2];
    uVar13 = param_1[3];
    pvVar8 = (void *)*param_1;
    if ((long)uVar7 < (long)uVar13) {
      lVar10 = param_1[1];
      do {
        uVar15 = uVar7 & (long)(int)lVar10;
        uVar14 = uVar7 & 0x7f;
        uVar7 = uVar7 + 1;
        *(undefined8 *)((long)pvVar6 + uVar14 * 8) = *(undefined8 *)((long)pvVar8 + uVar15 * 8);
      } while (uVar13 != uVar7);
    }
    *param_1 = (long)pvVar6;
    if (pvVar8 != (void *)0x0) {
      operator_delete__(pvVar8);
      pvVar6 = (void *)*param_1;
    }
    *(undefined4 *)(param_1 + 1) = 0x7f;
    param_1[2] = param_2;
    param_1[3] = param_2 + 1;
    *(undefined8 *)((long)pvVar6 + (param_2 & 0x7f) * 8) = param_3;
    return;
  }
  lVar10 = param_1[2];
  lVar2 = param_1[3];
  uVar16 = (uint)param_2;
  if (lVar10 <= (long)param_2) {
    if ((long)param_2 < lVar2) {
      uVar9 = *(uint *)(param_1 + 1);
LAB_00933960:
      *(undefined8 *)(*param_1 + (long)(int)(uVar9 & uVar16) * 8) = param_3;
      return;
    }
    lVar1 = param_2 + 1;
    if (lVar2 + 0x8000 <= lVar1) {
      uVar9 = *(uint *)(param_1 + 1);
      param_1[2] = param_2;
      param_1[3] = lVar1;
      goto LAB_00933960;
    }
    lVar2 = param_2 - 0x7fff;
    if (lVar10 < lVar2) {
      param_1[2] = lVar2;
      lVar10 = lVar2;
    }
    FUN_00933c18(param_1,(int)lVar1 - (int)lVar10);
    uVar4 = *(uint *)(param_1 + 1);
    uVar9 = uVar4 & *(uint *)(param_1 + 3);
    uVar3 = uVar4 & uVar16;
    uVar7 = (ulong)uVar3;
    if ((int)uVar9 <= (int)uVar3) {
      uVar7 = (long)(int)uVar3 - (long)(int)uVar9;
      if (0 < (long)uVar7) {
        lVar10 = (long)(int)uVar9 * 8;
        puVar12 = (undefined8 *)(*param_1 + lVar10);
        if (3 < uVar7) {
          puVar12 = puVar12 + (uVar7 & 0x7ffffffffffffffc);
          puVar11 = (undefined8 *)(lVar10 + *param_1 + 0x10);
          uVar13 = uVar7 & 0x7ffffffffffffffc;
          do {
            uVar13 = uVar13 - 4;
            puVar11[-1] = 0x8000000000000000;
            puVar11[-2] = 0x8000000000000000;
            puVar11[1] = 0x8000000000000000;
            *puVar11 = 0x8000000000000000;
            puVar11 = puVar11 + 4;
          } while (uVar13 != 0);
          bVar5 = uVar7 == (uVar7 & 0x7ffffffffffffffc);
          uVar7 = uVar7 & 3;
          if (bVar5) goto LAB_00933bf0;
        }
        *puVar12 = 0x8000000000000000;
        if ((1 < uVar7) && (puVar12[1] = 0x8000000000000000, uVar7 == 3)) {
          puVar12[2] = 0x8000000000000000;
        }
      }
      goto LAB_00933bf0;
    }
    lVar10 = (long)(int)uVar9;
    uVar13 = (int)(uVar4 + 1) - lVar10;
    puVar12 = (undefined8 *)*param_1;
    if (0 < (long)uVar13) {
      puVar11 = puVar12 + lVar10;
      if (uVar13 < 4) {
LAB_00933b04:
        *puVar11 = 0x8000000000000000;
        if ((1 < uVar13) && (puVar11[1] = 0x8000000000000000, uVar13 == 3)) {
          puVar11[2] = 0x8000000000000000;
        }
      }
      else {
        puVar11 = puVar11 + (uVar13 & 0x7ffffffffffffffc);
        puVar12 = puVar12 + lVar10 + 2;
        uVar15 = uVar13 & 0x7ffffffffffffffc;
        do {
          uVar15 = uVar15 - 4;
          puVar12[-1] = 0x8000000000000000;
          puVar12[-2] = 0x8000000000000000;
          puVar12[1] = 0x8000000000000000;
          *puVar12 = 0x8000000000000000;
          puVar12 = puVar12 + 4;
        } while (uVar15 != 0);
        bVar5 = uVar13 != (uVar13 & 0x7ffffffffffffffc);
        uVar13 = uVar13 & 3;
        if (bVar5) goto LAB_00933b04;
      }
      puVar12 = (undefined8 *)*param_1;
    }
    if (0 < (int)uVar3) {
      if (3 < uVar3) {
        puVar11 = puVar12 + 2;
        uVar13 = uVar7 & 0x7ffffffc;
        do {
          uVar13 = uVar13 - 4;
          puVar11[-1] = 0x8000000000000000;
          puVar11[-2] = 0x8000000000000000;
          puVar11[1] = 0x8000000000000000;
          *puVar11 = 0x8000000000000000;
          puVar11 = puVar11 + 4;
        } while (uVar13 != 0);
        bVar5 = (uVar7 & 0x7ffffffc) == uVar7;
        puVar12 = puVar12 + (uVar7 & 0x7ffffffc);
        uVar7 = uVar7 & 3;
        if (bVar5) goto LAB_00933bf0;
      }
      uVar7 = uVar7 + 1;
      do {
        uVar7 = uVar7 - 1;
        *puVar12 = 0x8000000000000000;
        puVar12 = puVar12 + 1;
      } while (1 < uVar7);
    }
LAB_00933bf0:
    param_1[3] = lVar1;
    *(undefined8 *)(*param_1 + (long)(int)(*(uint *)(param_1 + 1) & uVar16) * 8) = param_3;
    return;
  }
  if (0x8000 < (long)(lVar2 - param_2)) {
    return;
  }
  FUN_00933c18(param_1);
  *(undefined8 *)(*param_1 + (long)(int)(*(uint *)(param_1 + 1) & uVar16) * 8) = param_3;
  uVar3 = *(uint *)(param_1 + 1);
  uVar16 = uVar3 & uVar16 + 1;
  uVar9 = uVar3 & *(uint *)(param_1 + 2);
  uVar7 = (ulong)uVar9;
  if ((int)uVar16 <= (int)uVar9) {
    uVar7 = (long)(int)uVar9 - (long)(int)uVar16;
    if (0 < (long)uVar7) {
      lVar10 = (long)(int)uVar16 * 8;
      puVar12 = (undefined8 *)(*param_1 + lVar10);
      if (3 < uVar7) {
        puVar12 = puVar12 + (uVar7 & 0x7ffffffffffffffc);
        puVar11 = (undefined8 *)(lVar10 + *param_1 + 0x10);
        uVar13 = uVar7 & 0x7ffffffffffffffc;
        do {
          uVar13 = uVar13 - 4;
          puVar11[-1] = 0x8000000000000000;
          puVar11[-2] = 0x8000000000000000;
          puVar11[1] = 0x8000000000000000;
          *puVar11 = 0x8000000000000000;
          puVar11 = puVar11 + 4;
        } while (uVar13 != 0);
        bVar5 = uVar7 == (uVar7 & 0x7ffffffffffffffc);
        uVar7 = uVar7 & 3;
        if (bVar5) goto LAB_00933ac4;
      }
      *puVar12 = 0x8000000000000000;
      if ((1 < uVar7) && (puVar12[1] = 0x8000000000000000, uVar7 == 3)) {
        puVar12[2] = 0x8000000000000000;
        param_1[2] = param_2;
        return;
      }
    }
    goto LAB_00933ac4;
  }
  lVar10 = (long)(int)uVar16;
  uVar13 = (int)(uVar3 + 1) - lVar10;
  puVar12 = (undefined8 *)*param_1;
  if (0 < (long)uVar13) {
    puVar11 = puVar12 + lVar10;
    if (uVar13 < 4) {
LAB_009339d4:
      *puVar11 = 0x8000000000000000;
      if ((1 < uVar13) && (puVar11[1] = 0x8000000000000000, uVar13 == 3)) {
        puVar11[2] = 0x8000000000000000;
      }
    }
    else {
      puVar11 = puVar11 + (uVar13 & 0x7ffffffffffffffc);
      puVar12 = puVar12 + lVar10 + 2;
      uVar15 = uVar13 & 0x7ffffffffffffffc;
      do {
        uVar15 = uVar15 - 4;
        puVar12[-1] = 0x8000000000000000;
        puVar12[-2] = 0x8000000000000000;
        puVar12[1] = 0x8000000000000000;
        *puVar12 = 0x8000000000000000;
        puVar12 = puVar12 + 4;
      } while (uVar15 != 0);
      bVar5 = uVar13 != (uVar13 & 0x7ffffffffffffffc);
      uVar13 = uVar13 & 3;
      if (bVar5) goto LAB_009339d4;
    }
    puVar12 = (undefined8 *)*param_1;
  }
  if (0 < (int)uVar9) {
    if (3 < uVar9) {
      puVar11 = puVar12 + 2;
      uVar13 = uVar7 & 0x7ffffffc;
      do {
        uVar13 = uVar13 - 4;
        puVar11[-1] = 0x8000000000000000;
        puVar11[-2] = 0x8000000000000000;
        puVar11[1] = 0x8000000000000000;
        *puVar11 = 0x8000000000000000;
        puVar11 = puVar11 + 4;
      } while (uVar13 != 0);
      bVar5 = (uVar7 & 0x7ffffffc) == uVar7;
      puVar12 = puVar12 + (uVar7 & 0x7ffffffc);
      uVar7 = uVar7 & 3;
      if (bVar5) goto LAB_00933ac4;
    }
    uVar7 = uVar7 + 1;
    do {
      uVar7 = uVar7 - 1;
      *puVar12 = 0x8000000000000000;
      puVar12 = puVar12 + 1;
    } while (1 < uVar7);
  }
LAB_00933ac4:
  param_1[2] = param_2;
  return;
}


// ===== 00933c18  FUN_00933c18 =====

void FUN_00933c18(undefined8 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  void *pvVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  
  uVar10 = *(int *)(param_1 + 1) + 1;
  if ((int)uVar10 < param_2) {
    do {
      uVar4 = uVar10;
      uVar11 = (ulong)uVar4;
      uVar10 = uVar4 << 1;
    } while ((int)uVar4 < param_2);
    pvVar3 = operator_new__(-(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 | uVar11 << 3);
    uVar6 = param_1[2];
    uVar8 = param_1[3];
    pvVar5 = (void *)*param_1;
    if ((long)uVar6 < (long)uVar8) {
      iVar1 = *(int *)(param_1 + 1);
      do {
        uVar7 = uVar6 & (long)iVar1;
        uVar9 = uVar6 & (long)(int)(uVar4 - 1);
        uVar6 = uVar6 + 1;
        *(undefined8 *)((long)pvVar3 + uVar9 * 8) = *(undefined8 *)((long)pvVar5 + uVar7 * 8);
      } while (uVar8 != uVar6);
    }
    *param_1 = pvVar3;
    if (pvVar5 != (void *)0x0) {
      operator_delete__(pvVar5);
    }
    *(uint *)(param_1 + 1) = uVar4 - 1;
  }
  else {
    uVar11 = (ulong)uVar10;
  }
  iVar1 = param_2 * 4;
  if (iVar1 < 0x81) {
    iVar1 = 0x80;
  }
  uVar10 = (uint)uVar11;
  if (iVar1 < (int)uVar10) {
    if (param_2 < 0x81) {
      param_2 = 0x80;
    }
    uVar4 = param_2 * 2;
    if (uVar10 != uVar4 && (int)(uVar10 + param_2 * -2) < 0 == SBORROW4(uVar10,uVar4)) {
      do {
        uVar10 = (int)uVar11 / 2;
        uVar11 = (ulong)uVar10;
      } while (uVar10 != uVar4 && (int)(uVar10 + param_2 * -2) < 0 == SBORROW4(uVar10,uVar4));
    }
    iVar1 = (int)uVar11 + -1;
    pvVar3 = operator_new__(-(uVar11 >> 0x1f) & 0xfffffff800000000 | uVar11 << 3);
    uVar11 = param_1[2];
    uVar6 = param_1[3];
    pvVar5 = (void *)*param_1;
    if ((long)uVar11 < (long)uVar6) {
      iVar2 = *(int *)(param_1 + 1);
      do {
        uVar8 = uVar11 & (long)iVar2;
        uVar7 = uVar11 & (long)iVar1;
        uVar11 = uVar11 + 1;
        *(undefined8 *)((long)pvVar3 + uVar7 * 8) = *(undefined8 *)((long)pvVar5 + uVar8 * 8);
      } while (uVar6 != uVar11);
    }
    *param_1 = pvVar3;
    if (pvVar5 != (void *)0x0) {
      operator_delete__(pvVar5);
    }
    *(int *)(param_1 + 1) = iVar1;
  }
  return;
}


// ===== 00933d58  FUN_00933d58 =====

void FUN_00933d58(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = param_1[2];
  lVar2 = param_1[3];
  lVar1 = lVar2;
  if (param_2 <= lVar2) {
    lVar1 = param_2;
  }
  lVar4 = lVar3;
  if (lVar3 < lVar1) {
    do {
      lVar4 = lVar3;
      if (param_3 < *(long *)(*param_1 + (long)(int)(*(uint *)(param_1 + 1) & (uint)lVar3) * 8))
      break;
      lVar3 = lVar3 + 1;
      param_1[2] = lVar3;
      lVar4 = lVar1;
    } while (lVar1 != lVar3);
  }
  FUN_00933c18(param_1,(int)lVar2 - (int)lVar4);
  return;
}


// ===== 00933da4  FUN_00933da4 =====

void FUN_00933da4(long param_1,long param_2)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x10) <= param_2) {
    lVar1 = *(long *)(param_1 + 0x18);
    if (param_2 < lVar1) {
      *(long *)(param_1 + 0x10) = param_2;
      FUN_00933c18(param_1,(int)lVar1 - (int)param_2);
      return;
    }
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}


// ===== 00933dd8  FUN_00933dd8 =====

void FUN_00933dd8(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  void *pvVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 *local_38;
  
  *param_1 = &PTR_FUN_00d3e038;
  lVar2 = *param_2;
  param_1[1] = lVar2;
  if (lVar2 != 0) {
    FUN_00d0f740(1,lVar2 + 8);
  }
  lVar4 = param_2[4];
  lVar2 = param_2[3];
  lVar6 = param_2[2];
  lVar5 = param_2[1];
  param_1[6] = param_3;
  param_1[3] = lVar6;
  param_1[2] = lVar5;
  param_1[5] = lVar4;
  param_1[4] = lVar2;
  local_38 = &DAT_aaaaaaaaaaaaaaaa;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_38);
  pthread_mutex_init((pthread_mutex_t *)(param_1 + 7),(pthread_mutexattr_t *)&local_38);
  pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_38);
  pvVar1 = operator_new(0x180);
  FUN_00936378(pvVar1,param_1 + 1);
  param_1[0xc] = pvVar1;
  param_1[0xd] = 0x5b4;
  uVar3 = FUN_00933e98(param_1);
  *(undefined4 *)(param_1 + 0xe) = uVar3;
  return;
}


// ===== 00933e98  FUN_00933e98 =====

float FUN_00933e98(long param_1)

{
  char ****__nptr;
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  float fVar4;
  char ***local_38 [2];
  char cStack_21;
  
  (**(code **)(**(long **)(param_1 + 0x10) + 0x10))
            (local_38,*(long **)(param_1 + 0x10),"WebRTC-ProtectionOverheadRateThreshold",0x26);
  __nptr = (char ****)local_38[0];
  if (-1 < cStack_21) {
    __nptr = local_38;
  }
  fVar4 = strtof((char *)__nptr,(char **)0x0);
  if (cStack_21 < '\0') {
    operator_delete(local_38[0]);
  }
  bVar1 = false;
  bVar2 = true;
  if (fVar4 != 0.0 && fVar4 < 0.0 == NAN(fVar4)) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(fVar4)) {
      bVar1 = fVar4 == 1.0;
      bVar2 = 1.0 <= fVar4;
    }
  }
  if (!bVar2 || bVar1) {
    uVar3 = FUN_00417e08();
    if ((uVar3 & 1) == 0) {
      FUN_00623bb0((double)fVar4,&DAT_001f667e,
                   "../../modules/video_coding/fec_controller_default.cc",0x239,
                   "ProtectionOverheadRateThreshold is set to ");
    }
  }
  else {
    if (((fVar4 < 0.0) || (fVar4 != 1.0 && fVar4 < 1.0 == NAN(fVar4))) &&
       (uVar3 = FUN_004022fc(), (uVar3 & 1) == 0)) {
      FUN_00623bb0(&DAT_001f4e98,"../../modules/video_coding/fec_controller_default.cc",0x25a,
                   "ProtectionOverheadRateThreshold field trial is set to an invalid value, expecting a value between (0, 1]."
                  );
    }
    fVar4 = 0.5;
  }
  return fVar4;
}


// ===== 00933fa0  FUN_00933fa0 =====

void FUN_00933fa0(undefined8 param_1,undefined8 param_2)

{
  FUN_00933dd8(param_1,param_2,0);
  return;
}


// ===== 00933fac  FUN_00933fac =====

ulong FUN_00933fac(undefined8 *param_1)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  void *pvVar4;
  
  *param_1 = &PTR_FUN_00d3e038;
  FUN_0093665c(param_1[0xc]);
  pvVar4 = (void *)param_1[0xc];
  param_1[0xc] = 0;
  if (pvVar4 != (void *)0x0) {
    FUN_009365d0(pvVar4);
    operator_delete(pvVar4);
  }
  uVar1 = pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 7));
  uVar2 = (ulong)uVar1;
  plVar3 = (long *)param_1[1];
  if ((plVar3 != (long *)0x0) && (uVar2 = FUN_00d0f7a0(0xffffffff,plVar3 + 1), (int)uVar2 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x00934030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar3 + 8))(plVar3);
    return uVar2;
  }
  return uVar2;
}


// ===== 00934044  FUN_00934044 =====

void FUN_00934044(undefined8 *param_1)

{
  int iVar1;
  void *pvVar2;
  long *plVar3;
  
  *param_1 = &PTR_FUN_00d3e038;
  FUN_0093665c(param_1[0xc]);
  pvVar2 = (void *)param_1[0xc];
  param_1[0xc] = 0;
  if (pvVar2 != (void *)0x0) {
    FUN_009365d0(pvVar2);
    operator_delete(pvVar2);
  }
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 7));
  plVar3 = (long *)param_1[1];
  if ((plVar3 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar3 + 1), iVar1 == 1)) {
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  operator_delete(param_1);
  return;
}


// ===== 009340d8  FUN_009340d8 =====

void FUN_009340d8(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x30) = param_2;
  return;
}


// ===== 009340e4  FUN_009340e4 =====

int FUN_009340e4(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                undefined8 param_5)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x38));
  FUN_00936d2c(*(undefined8 *)(param_1 + 0x60),param_2,param_3);
  FUN_00936d38(*(undefined8 *)(param_1 + 0x60),param_4);
  *(undefined8 *)(param_1 + 0x68) = param_5;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x38));
  return iVar1;
}


// ===== 00934154  FUN_00934154 =====

uint FUN_00934154(long param_1,uint param_2,uint param_3,undefined4 param_4,undefined8 param_5,
                 undefined8 param_6)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  int local_64;
  undefined8 local_60;
  uint local_58;
  undefined4 local_54;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  
  if ((int)param_3 < 2) {
    param_3 = 1;
  }
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x38));
  FUN_00936c7c((float)param_2 / 1000.0,*(undefined8 *)(param_1 + 0x60));
  FUN_009368f8(*(undefined8 *)(param_1 + 0x60),param_6);
  *(float *)(*(long *)(param_1 + 0x60) + 0x70) = (float)param_3;
  uVar7 = *(undefined8 *)(param_1 + 0x60);
  uVar4 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
  uVar6 = uVar4 / 1000;
  if (499 < uVar4 % 1000) {
    uVar6 = uVar6 + 1;
  }
  if ((uVar4 & 0x8000000000000000) != 0) {
    uVar6 = -(-uVar4 / 1000) - (ulong)(500 < -uVar4 % 1000);
  }
  uVar2 = FUN_00936aa4(uVar7,uVar6,2,param_4);
  FUN_00936c5c(*(undefined8 *)(param_1 + 0x60),uVar2);
  iVar3 = FUN_00936d58(*(undefined8 *)(param_1 + 0x60));
  if (iVar3 == 3) {
    pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x38));
  }
  else {
    FUN_0093688c(*(undefined8 *)(param_1 + 0x60));
    plVar5 = (long *)FUN_00936d4c(*(undefined8 *)(param_1 + 0x60));
    local_58 = (**(code **)(*plVar5 + 0x20))();
    local_58 = local_58 & 0xff;
    plVar5 = (long *)FUN_00936d4c(*(undefined8 *)(param_1 + 0x60));
    local_4c = (**(code **)(*plVar5 + 0x28))();
    local_4c = local_4c & 0xff;
    plVar5 = (long *)FUN_00936d4c(*(undefined8 *)(param_1 + 0x60));
    local_48 = (**(code **)(*plVar5 + 0x40))();
    plVar5 = (long *)FUN_00936d4c(*(undefined8 *)(param_1 + 0x60));
    local_54 = (**(code **)(*plVar5 + 0x40))();
    pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x38));
    local_44 = 0;
    local_50 = 0;
    local_60 = 0;
    local_64 = 0;
    (**(code **)**(undefined8 **)(param_1 + 0x30))
              (*(undefined8 **)(param_1 + 0x30),&local_4c,&local_58,(long)&local_60 + 4,&local_60,
               &local_64);
    uVar1 = local_64 + (int)local_60 + local_60._4_4_;
    if (uVar1 == 0) {
      fVar8 = 0.0;
    }
    else {
      fVar8 = (float)(uint)(local_64 + (int)local_60) / (float)uVar1;
    }
    fVar9 = *(float *)(param_1 + 0x70);
    if (fVar8 <= *(float *)(param_1 + 0x70)) {
      fVar9 = fVar8;
    }
    param_2 = (uint)((1.0 - fVar9) * (float)param_2);
  }
  return param_2;
}


// ===== 00934398  FUN_00934398 =====

int FUN_00934398(long param_1,ulong param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  bVar1 = (param_2 & 1) == 0;
  uVar3 = 2;
  if (bVar1) {
    uVar3 = 0;
  }
  uVar4 = 3;
  if (!bVar1) {
    uVar4 = 1;
  }
  if ((param_3 & 1) == 0) {
    uVar3 = uVar4;
  }
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x38));
  FUN_00936680(*(undefined8 *)(param_1 + 0x60),uVar3);
  iVar2 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x38));
  return iVar2;
}


// ===== 009343f0  FUN_009343f0 =====

int FUN_009343f0(long param_1,ulong param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x38));
  if (param_2 != 0) {
    if (*(ulong *)(param_1 + 0x68) == 0) {
      if (param_3 != 3) goto LAB_00934524;
      fVar6 = (float)param_2;
    }
    else {
      fVar6 = (float)param_2;
      uVar4 = *(undefined8 *)(param_1 + 0x60);
      fVar5 = fVar6 / (float)*(ulong *)(param_1 + 0x68);
      uVar2 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
      if (param_3 != 3) {
        uVar3 = (uVar2 >> 3) / 0x7d;
        if (499 < uVar2 + uVar3 * -1000) {
          uVar3 = uVar3 + 1;
        }
        if ((uVar2 & 0x8000000000000000) != 0) {
          uVar3 = -(-uVar2 / 1000) - (ulong)(500 < -uVar2 % 1000);
        }
        FUN_00936c88(fVar5,uVar4,uVar3);
        goto LAB_00934524;
      }
      uVar3 = (uVar2 >> 3) / 0x7d;
      if (499 < uVar2 + uVar3 * -1000) {
        uVar3 = uVar3 + 1;
      }
      if ((uVar2 & 0x8000000000000000) != 0) {
        uVar3 = -(-uVar2 / 1000) - (ulong)(500 < -uVar2 % 1000);
      }
      FUN_00936cd4(fVar5,uVar4,uVar3);
    }
    FUN_00936d20(fVar6,*(undefined8 *)(param_1 + 0x60));
  }
LAB_00934524:
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x38));
  return iVar1;
}


// ===== 00934540  FUN_00934540 =====

undefined8 FUN_00934540(void)

{
  return 0;
}


// ===== 0093454c  FUN_0093454c =====

void FUN_0093454c(undefined4 *param_1,long param_2,long param_3,ulong param_4,long param_5)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  char *pcVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  char *pcVar12;
  undefined4 uVar13;
  long *plVar14;
  long *plVar15;
  ushort local_a4 [2];
  undefined8 local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  char *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  
  if (*(char *)(param_5 + 0x790) != '\x03') {
                    /* WARNING: Subroutine does not return */
    FUN_005ee558();
  }
  pcVar12 = *(char **)(param_5 + 0x130);
  pcVar4 = *(char **)(param_5 + 0x138);
  plVar14 = (long *)(param_2 + 0x20);
  plVar1 = (long *)(param_2 + 8);
  if (pcVar12 != pcVar4) {
    plVar14 = (long *)(param_2 + 0x20);
    plVar15 = (long *)(param_2 + 8);
    bVar7 = false;
LAB_00934600:
    cVar6 = *pcVar12;
    if (cVar6 == '\x05') {
      if (*(char *)(param_5 + 0xa5) != '\x01') goto LAB_009345f4;
      iVar5 = *(int *)(pcVar12 + 8);
      if (iVar5 != -1) {
        plVar15 = (long *)*plVar1;
        if (plVar15 != (long *)0x0) {
          do {
            if (iVar5 < (int)plVar15[4]) {
              plVar15 = (long *)*plVar15;
            }
            else {
              if (iVar5 == (int)plVar15[4]) goto LAB_0093469c;
              plVar15 = (long *)plVar15[1];
            }
            if (plVar15 == (long *)0x0) break;
          } while( true );
        }
        goto LAB_00934728;
      }
      uVar9 = FUN_004022fc();
      if ((uVar9 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../modules/video_coding/h264_sps_pps_tracker.cc",0x22a,
                     "No PPS id in IDR nalu.");
      }
      goto LAB_009347c4;
    }
    if (cVar6 == '\b') {
      uVar13 = *(undefined4 *)(pcVar12 + 4);
      local_80 = pcVar12 + 8;
      lVar8 = FUN_00935158(0,param_2,param_2,&DAT_001f94c3,&local_80,&local_a0);
      *(undefined4 *)(lVar8 + 0x28) = uVar13;
    }
    else if (cVar6 == '\a') {
      local_80 = pcVar12 + 4;
      lVar8 = FUN_00935044(0,param_2 + 0x18,param_2 + 0x18,&DAT_001f94c3,&local_80,&local_a0);
      *(uint *)(lVar8 + 0x28) = (uint)*(ushort *)(param_5 + 0x9c);
      *(uint *)(lVar8 + 0x2c) = (uint)*(ushort *)(param_5 + 0x9e);
    }
    goto LAB_009345f4;
  }
  bVar7 = false;
  lVar8 = 0;
  plVar15 = plVar1;
LAB_009347ec:
  if (*(int *)(param_5 + 300) == 1) {
    lVar2 = 0;
    if (1 < param_4) {
      lVar2 = param_3 + 1;
    }
    puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
    local_80 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
    local_70 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00879324(&local_80,lVar2,param_4 - (param_4 != 0));
    if (puStack_68 != local_70) {
      do {
        local_a0 = (undefined1 *)CONCAT62(local_a0._2_6_,0xaaaa);
        uVar9 = FUN_0087938c(&local_80,&local_a0);
        if ((((uVar9 & 1) == 0) || (uVar9 = (ulong)local_a0 & 0xffff, uVar9 == 0)) ||
           ((ulong)((long)puStack_68 - (long)local_70) < uVar9)) {
          uVar13 = 1;
LAB_009347c8:
          *param_1 = uVar13;
          FUN_007b53d4(param_1 + 2);
          return;
        }
        lVar8 = lVar8 + 4 + uVar9;
        FUN_0087972c(&local_80);
      } while (puStack_68 != local_70);
    }
  }
  else {
    if (*(long *)(param_5 + 0x130) != *(long *)(param_5 + 0x138)) {
      lVar8 = lVar8 + 4;
    }
    lVar8 = lVar8 + param_4;
  }
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_007b53d4((ulong)&local_80 | 8);
  FUN_007b5880((ulong)&local_80 | 8,lVar8);
  if (bVar7) {
    FUN_00877fc4((ulong)&local_80 | 8,&DAT_00226920,4);
    FUN_00877fc4((ulong)&local_80 | 8,plVar14[8],plVar14[6]);
    FUN_00877fc4((ulong)&local_80 | 8,&DAT_00226920,4);
    FUN_00877fc4((ulong)&local_80 | 8,plVar15[8],plVar15[6]);
    local_a0 = (undefined1 *)CONCAT71(local_a0._1_7_,7);
    puVar3 = *(undefined8 **)(param_5 + 0x138);
    local_a0 = (undefined1 *)CONCAT44((int)plVar14[4],(undefined4)local_a0);
    puStack_98 = (undefined1 *)CONCAT44(puStack_98._4_4_,0xffffffff);
    if (puVar3 < *(undefined8 **)(param_5 + 0x140)) {
      if (puVar3 == (undefined8 *)0x0) goto LAB_00934ad8;
      puVar10 = (undefined8 *)((long)puVar3 + 0xc);
      *(undefined4 *)(puVar3 + 1) = 0xffffffff;
      *puVar3 = local_a0;
    }
    else {
      puVar10 = (undefined8 *)FUN_00934f24(param_5 + 0x130,&local_a0);
    }
    *(undefined8 **)(param_5 + 0x138) = puVar10;
    local_a0 = (undefined1 *)CONCAT71(local_a0._1_7_,8);
    local_a0 = (undefined1 *)CONCAT44((int)plVar14[4],(undefined4)local_a0);
    puStack_98 = (undefined1 *)CONCAT44(puStack_98._4_4_,(int)plVar15[4]);
    if (puVar10 < *(undefined8 **)(param_5 + 0x140)) {
      if (puVar10 == (undefined8 *)0x0) {
LAB_00934ad8:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *(int *)(puVar10 + 1) = (int)plVar15[4];
      lVar8 = (long)puVar10 + 0xc;
      *puVar10 = local_a0;
    }
    else {
      lVar8 = FUN_00934f24(param_5 + 0x130,&local_a0);
    }
    *(long *)(param_5 + 0x138) = lVar8;
  }
  if (*(int *)(param_5 + 300) == 1) {
    lVar8 = 0;
    if (1 < param_4) {
      lVar8 = param_3 + 1;
    }
    puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
    local_a0 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
    local_90 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00879324(&local_a0,lVar8,param_4 - (param_4 != 0));
    if (puStack_88 != local_90) {
      do {
        FUN_00877fc4((ulong)&local_80 | 8,&DAT_00226920,4);
        local_a4[0] = 0xaaaa;
        uVar9 = FUN_0087938c(&local_a0,local_a4);
        if ((((uVar9 & 1) == 0) || ((ulong)local_a4[0] == 0)) ||
           ((ulong)((long)puStack_88 - (long)local_90) < (ulong)local_a4[0])) {
          *param_1 = 1;
          FUN_007b53d4(param_1 + 2);
          goto LAB_00934a64;
        }
        FUN_00877fc4((ulong)&local_80 | 8,local_a0 + (long)local_90);
        FUN_0087972c(&local_a0,local_a4[0]);
      } while (puStack_88 != local_90);
    }
  }
  else {
    if (*(long *)(param_5 + 0x130) != *(long *)(param_5 + 0x138)) {
      FUN_00877fc4((ulong)&local_80 | 8,&DAT_00226920,4);
    }
    FUN_00877fc4((ulong)&local_80 | 8,param_3,param_4);
  }
  *param_1 = 0;
  local_80 = (char *)((ulong)local_80 & 0xffffffff00000000);
  FUN_007b5434(param_1 + 2,(ulong)&local_80 | 8);
LAB_00934a64:
  FUN_007b5554((ulong)&local_80 | 8);
  return;
LAB_0093469c:
  if (plVar15 != plVar1) {
    plVar14 = *(long **)(param_2 + 0x20);
    if (plVar14 != (long *)0x0) {
      do {
        if ((int)plVar15[5] < (int)plVar14[4]) {
          plVar14 = (long *)*plVar14;
        }
        else {
          if ((int)plVar15[5] == (int)plVar14[4]) goto LAB_009346dc;
          plVar14 = (long *)plVar14[1];
        }
        if (plVar14 == (long *)0x0) break;
      } while( true );
    }
    goto LAB_00934790;
  }
LAB_00934728:
  uVar9 = FUN_004022fc();
  if ((uVar9 & 1) != 0) goto LAB_009347c4;
  uVar13 = *(undefined4 *)(pcVar12 + 8);
  pcVar12 = "No PPS with id << ";
  uVar11 = 0x25a;
  goto LAB_009347c0;
LAB_009346dc:
  if (plVar14 != (long *)(param_2 + 0x20)) {
    *(short *)(param_5 + 0x9c) = (short)(int)plVar14[5];
    *(short *)(param_5 + 0x9e) = (short)*(undefined4 *)((long)plVar14 + 0x2c);
    if (plVar14[6] != 0) {
      bVar7 = (bool)(plVar15[6] != 0 | bVar7);
    }
LAB_009345f4:
    pcVar12 = pcVar12 + 0xc;
    if (pcVar12 == pcVar4) goto LAB_0093475c;
    goto LAB_00934600;
  }
LAB_00934790:
  uVar9 = FUN_004022fc();
  if ((uVar9 & 1) != 0) goto LAB_009347c4;
  uVar13 = (undefined4)plVar15[5];
  pcVar12 = "No SPS with id << ";
  uVar11 = 0x292;
LAB_009347c0:
  FUN_00623bb0(&DAT_001f1906,"../../modules/video_coding/h264_sps_pps_tracker.cc",uVar11,pcVar12,
               uVar13," received");
LAB_009347c4:
  uVar13 = 2;
  goto LAB_009347c8;
LAB_0093475c:
  if (bVar7) {
    if ((plVar14 == (long *)(param_2 + 0x20)) || (plVar15 == plVar1)) {
                    /* WARNING: Subroutine does not return */
      FUN_0061fd88("../../modules/video_coding/h264_sps_pps_tracker.cc",0x6b,
                   "!append_sps_pps || (sps != sps_data_.end() && pps != pps_data_.end())",
                   &DAT_001f5fa0);
    }
    bVar7 = true;
    lVar8 = plVar14[6] + plVar15[6] + 8;
  }
  else {
    bVar7 = false;
    lVar8 = 0;
  }
  goto LAB_009347ec;
}


// ===== 00934b30  FUN_00934b30 =====

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff08 : 0x00934ecc */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00934b30(long param_1,long *param_2,long *param_3)

{
  byte *pbVar1;
  long lVar2;
  byte *pbVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  ulong uVar6;
  void *pvVar7;
  long lVar8;
  void *pvVar9;
  undefined8 uVar10;
  char *pcVar11;
  undefined1 uStack_f9;
  ulong *local_f8;
  undefined8 local_f0;
  undefined1 *local_e8;
  char *local_e0;
  char **ppcStack_d8;
  ulong local_d0;
  char **local_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  undefined8 local_a8;
  uint local_a0;
  undefined1 *local_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined8 uStack_68;
  uint local_60;
  
  pbVar3 = (byte *)*param_2;
  lVar8 = param_2[1] - (long)pbVar3;
  if (lVar8 == 0) {
    uVar6 = FUN_004022fc();
    if ((uVar6 & 1) == 0) {
      pcVar11 = "SPS size  ";
      lVar8 = param_2[1] - *param_2;
      uVar10 = 0x5fa;
LAB_00934d18:
      FUN_00623bb0(&DAT_001fd8a8,"../../modules/video_coding/h264_sps_pps_tracker.cc",uVar10,pcVar11
                   ,lVar8," is smaller than ",1);
      return;
    }
  }
  else if ((*pbVar3 & 0x1f) == 7) {
    if ((byte *)param_3[1] == (byte *)*param_3) {
      uVar6 = FUN_004022fc();
      if ((uVar6 & 1) == 0) {
        pcVar11 = "PPS size  ";
        lVar8 = param_3[1] - *param_3;
        uVar10 = 0x642;
        goto LAB_00934d18;
      }
    }
    else if ((*(byte *)*param_3 & 0x1f) == 8) {
      pbVar1 = (byte *)0x0;
      if (lVar8 != 0 && lVar8 + -1 != 0) {
        pbVar1 = pbVar3 + 1;
      }
      uStack_68 = &DAT_aaaaaaaaaaaaaaaa;
      local_70 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
      local_90 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_80 = &DAT_aaaaaaaaaaaaaaaa;
      local_60 = 0xaaaaaaaa;
      FUN_0087d8cc(&local_90,pbVar1,lVar8 + -1);
      uVar6 = param_3[1] - *param_3;
      lVar8 = 0;
      if (uVar6 != 0) {
        lVar8 = *param_3;
      }
      lVar2 = 0;
      if (1 < uVar6) {
        lVar2 = lVar8 + 1;
      }
      local_a0 = 0xaaaaaaaa;
      puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
      local_c0 = &DAT_aaaaaaaaaaaaaaaa;
      local_a8 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_b0 = &DAT_aaaaaaaaaaaaaaaa;
      FUN_0087af7c(&local_c0,lVar2,uVar6 - (uVar6 != 0));
      if (((local_60 & 1) == 0) && (uVar6 = FUN_004022fc(), (uVar6 & 1) == 0)) {
        FUN_00623bb0(&DAT_001f4e98,"../../modules/video_coding/h264_sps_pps_tracker.cc",0x6b2,
                     "Failed to parse SPS.");
      }
      if (((local_a0 & 1) == 0) && (uVar6 = FUN_004022fc(), (uVar6 & 1) == 0)) {
        FUN_00623bb0(&DAT_001f4e98,"../../modules/video_coding/h264_sps_pps_tracker.cc",0x6d2,
                     "Failed to parse PPS.");
      }
      puVar5 = local_90;
      if (((local_a0 & 1) != 0) && ((local_60 & 1) != 0)) {
        pvVar9 = (void *)*param_2;
        uVar6 = param_2[1] - (long)pvVar9;
        if (uVar6 == 0) {
          pvVar7 = (void *)0x0;
        }
        else {
          pvVar7 = operator_new__(uVar6);
          memcpy(pvVar7,pvVar9,uVar6);
        }
        local_f8 = &local_d0;
        local_d0 = CONCAT44(local_d0._4_4_,uStack_68._4_4_);
        lVar8 = FUN_00935268(0,param_1 + 0x18,param_1 + 0x18,&DAT_001f94c3,&local_f8,&local_e0);
        *(undefined1 **)(lVar8 + 0x28) = puVar5;
        *(ulong *)(lVar8 + 0x30) = uVar6;
        pvVar9 = *(void **)(lVar8 + 0x40);
        *(ulong *)(lVar8 + 0x38) = uVar6;
        *(void **)(lVar8 + 0x40) = pvVar7;
        if (pvVar9 != (void *)0x0) {
          operator_delete__(pvVar9);
        }
        if ((local_a0 & 1) == 0) goto LAB_00934f10;
        pvVar9 = (void *)*param_3;
        uVar4 = local_a8._4_4_;
        uVar6 = param_3[1] - (long)pvVar9;
        if (uVar6 == 0) {
          pvVar7 = (void *)0x0;
        }
        else {
          pvVar7 = operator_new__(uVar6);
          memcpy(pvVar7,pvVar9,uVar6);
        }
        local_f8 = &local_d0;
        local_d0 = CONCAT44(local_d0._4_4_,(undefined4)local_a8);
        lVar8 = FUN_0093537c(0,param_1,param_1,&DAT_001f94c3,&local_f8,&local_e0);
        *(undefined4 *)(lVar8 + 0x28) = uVar4;
        pvVar9 = *(void **)(lVar8 + 0x40);
        *(ulong *)(lVar8 + 0x30) = uVar6;
        *(ulong *)(lVar8 + 0x38) = uVar6;
        *(void **)(lVar8 + 0x40) = pvVar7;
        if (pvVar9 != (void *)0x0) {
          operator_delete__(pvVar9);
        }
        uVar6 = FUN_00417e08();
        if ((uVar6 & 1) == 0) {
          local_f8 = (ulong *)0x1e5ea7;
          local_f0 = 0x761;
          local_e8 = &uStack_f9;
          ppcStack_d8 = (char **)&local_f8;
          local_e0 = "Inserted SPS id ";
          if ((local_60 & 1) == 0) {
LAB_00934f10:
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                      );
          }
          local_d0 = (ulong)uStack_68 >> 0x20;
          local_c8 = &local_e0;
          if ((local_a0 & 1) == 0) goto LAB_00934f10;
          FUN_00623bb0(&DAT_00226924,"../../modules/video_coding/h264_sps_pps_tracker.cc",0x761,
                       "Inserted SPS id ",local_d0," and PPS id ",(ulong)local_a8 & 0xffffffff,
                       " (referencing SPS ",local_a8._4_4_,&DAT_001ca519);
        }
      }
      if (((byte)local_60 & 1) != 0) {
        FUN_0087d8c4(&local_90);
      }
    }
    else {
      uVar6 = FUN_004022fc();
      if ((uVar6 & 1) == 0) {
        uVar10 = 0x66a;
        goto LAB_00934d60;
      }
    }
  }
  else {
    uVar6 = FUN_004022fc();
    if ((uVar6 & 1) == 0) {
      uVar10 = 0x622;
LAB_00934d60:
      FUN_00623bb0(&DAT_001f4e98,"../../modules/video_coding/h264_sps_pps_tracker.cc",uVar10,
                   "SPS Nalu header missing");
      return;
    }
  }
  return;
}


// ===== 00934f24  FUN_00934f24 =====

long FUN_00934f24(long *param_1,undefined8 *param_2)

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


// ===== 00935044  FUN_00935044 =====

undefined1  [16]
FUN_00935044(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  int *piVar7;
  undefined1 auVar8 [16];
  
  piVar7 = (int *)*param_5;
  plVar4 = param_2 + 1;
  plVar6 = plVar4;
  if ((long *)*plVar4 != (long *)0x0) {
    iVar1 = *piVar7;
    plVar2 = (long *)*plVar4;
    do {
      while (plVar3 = plVar2, plVar4 = plVar3, iVar1 < (int)plVar3[4]) {
        plVar2 = (long *)*plVar3;
        plVar6 = plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_009350ac;
      }
      if (iVar1 == (int)plVar3[4]) {
        uVar5 = 0;
        goto LAB_00935128;
      }
      plVar2 = (long *)plVar3[1];
    } while ((long *)plVar3[1] != (long *)0x0);
    plVar6 = plVar3 + 1;
  }
LAB_009350ac:
  plVar3 = (long *)operator_new(0x48);
  if ((plVar3 == (long *)0x0) || (*plVar3 = 0, plVar3 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  iVar1 = *piVar7;
  plVar3[7] = 0;
  plVar3[8] = 0;
  plVar3[6] = 0;
  *(int *)(plVar3 + 4) = iVar1;
  *plVar3 = 0;
  plVar3[1] = 0;
  plVar3[5] = -1;
  plVar3[2] = (long)plVar4;
  *plVar6 = (long)plVar3;
  plVar4 = plVar3;
  if (*(long *)*param_2 != 0) {
    *param_2 = *(long *)*param_2;
    plVar4 = (long *)*plVar6;
  }
  FUN_005d5b94(param_2[1],plVar4);
  uVar5 = 1;
  param_2[2] = param_2[2] + 1;
LAB_00935128:
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = plVar3;
  return auVar8;
}


// ===== 00935158  FUN_00935158 =====

undefined1  [16]
FUN_00935158(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
      while (plVar3 = plVar2, plVar4 = plVar3, iVar1 < (int)plVar3[4]) {
        plVar2 = (long *)*plVar3;
        plVar7 = plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_009351c0;
      }
      if (iVar1 == (int)plVar3[4]) {
        uVar5 = 0;
        goto LAB_00935238;
      }
      plVar2 = (long *)plVar3[1];
    } while ((long *)plVar3[1] != (long *)0x0);
    plVar7 = plVar3 + 1;
  }
LAB_009351c0:
  plVar3 = (long *)operator_new(0x48);
  if ((plVar3 == (long *)0x0) || (*plVar3 = 0, plVar3 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  iVar1 = *piVar6;
  plVar3[7] = 0;
  plVar3[8] = 0;
  plVar3[5] = 0xffffffff;
  plVar3[6] = 0;
  *(int *)(plVar3 + 4) = iVar1;
  *plVar3 = 0;
  plVar3[1] = 0;
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
LAB_00935238:
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = plVar3;
  return auVar8;
}


// ===== 00935268  FUN_00935268 =====

undefined1  [16]
FUN_00935268(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  int *piVar7;
  undefined1 auVar8 [16];
  
  piVar7 = (int *)*param_5;
  plVar4 = param_2 + 1;
  plVar6 = plVar4;
  if ((long *)*plVar4 != (long *)0x0) {
    iVar1 = *piVar7;
    plVar2 = (long *)*plVar4;
    do {
      while (plVar3 = plVar2, plVar4 = plVar3, iVar1 < (int)plVar3[4]) {
        plVar2 = (long *)*plVar3;
        plVar6 = plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_009352d0;
      }
      if (iVar1 == (int)plVar3[4]) {
        uVar5 = 0;
        goto LAB_0093534c;
      }
      plVar2 = (long *)plVar3[1];
    } while ((long *)plVar3[1] != (long *)0x0);
    plVar6 = plVar3 + 1;
  }
LAB_009352d0:
  plVar3 = (long *)operator_new(0x48);
  if ((plVar3 == (long *)0x0) || (*plVar3 = 0, plVar3 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  iVar1 = *piVar7;
  plVar3[7] = 0;
  plVar3[8] = 0;
  plVar3[6] = 0;
  *(int *)(plVar3 + 4) = iVar1;
  *plVar3 = 0;
  plVar3[1] = 0;
  plVar3[5] = -1;
  plVar3[2] = (long)plVar4;
  *plVar6 = (long)plVar3;
  plVar4 = plVar3;
  if (*(long *)*param_2 != 0) {
    *param_2 = *(long *)*param_2;
    plVar4 = (long *)*plVar6;
  }
  FUN_005d5b94(param_2[1],plVar4);
  uVar5 = 1;
  param_2[2] = param_2[2] + 1;
LAB_0093534c:
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = plVar3;
  return auVar8;
}


// ===== 0093537c  FUN_0093537c =====

undefined1  [16]
FUN_0093537c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
      while (plVar3 = plVar2, plVar4 = plVar3, iVar1 < (int)plVar3[4]) {
        plVar2 = (long *)*plVar3;
        plVar7 = plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_009353e4;
      }
      if (iVar1 == (int)plVar3[4]) {
        uVar5 = 0;
        goto LAB_0093545c;
      }
      plVar2 = (long *)plVar3[1];
    } while ((long *)plVar3[1] != (long *)0x0);
    plVar7 = plVar3 + 1;
  }
LAB_009353e4:
  plVar3 = (long *)operator_new(0x48);
  if ((plVar3 == (long *)0x0) || (*plVar3 = 0, plVar3 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  iVar1 = *piVar6;
  plVar3[7] = 0;
  plVar3[8] = 0;
  plVar3[5] = 0xffffffff;
  plVar3[6] = 0;
  *(int *)(plVar3 + 4) = iVar1;
  *plVar3 = 0;
  plVar3[1] = 0;
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
LAB_0093545c:
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = plVar3;
  return auVar8;
}


// ===== 0093548c  FUN_0093548c =====

void FUN_0093548c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined1 *)((long)param_1 + 0x24) = 1;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)((long)param_1 + 0x22) = 0;
  *(undefined1 *)((long)param_1 + 0x26) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = param_1 + 7;
  return;
}


// ===== 009354c8  FUN_009354c8 =====

void FUN_009354c8(long param_1)

{
  long local_18;
  
  local_18 = param_1 + 0x30;
  FUN_005dabf4(&local_18,*(undefined8 *)(param_1 + 0x38));
  return;
}


// ===== 009354fc  FUN_009354fc =====

void FUN_009354fc(undefined8 *param_1,uint param_2,char *param_3)

{
  long *plVar1;
  ushort uVar2;
  short sVar3;
  undefined2 uVar4;
  int iVar5;
  short sVar6;
  bool bVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 *local_38;
  
  sVar6 = (short)param_2;
  if (*(char *)((long)param_1 + 0x22) == '\x01') {
    uVar2 = *(ushort *)(param_1 + 4);
    if ((uint)uVar2 == (param_2 & 0xffff)) {
      return;
    }
    iVar5 = (int)(short)(sVar6 - uVar2);
    bVar7 = (uint)uVar2 < (param_2 & 0xffff);
    if ((param_2 & 0xffff) - (uint)uVar2 != 0x8000) {
      bVar7 = iVar5 != -1 && iVar5 + 1 < 0 == SCARRY4(iVar5,1);
    }
    if (!bVar7) {
      return;
    }
  }
  FUN_0093577c(param_1);
  if (*(char *)((long)param_1 + 0x22) == '\x01') {
    sVar3 = *(short *)(param_1 + 4);
    *(short *)(param_1 + 4) = sVar6;
    *(undefined1 *)((long)param_1 + 0x22) = 1;
    bVar7 = (param_2 & 0xffff) != (uint)(ushort)(sVar3 + 1U);
    if (param_3 != (char *)0x0) {
LAB_009355bc:
      if ((*(char *)(param_1 + 3) == '\x01') && (*(long *)(param_3 + 8) <= (long)param_1[2])) {
        uVar9 = FUN_004022fc();
        if ((uVar9 & 1) != 0) {
          return;
        }
        FUN_00623bb0(&DAT_00224cd0,"../../modules/video_coding/loss_notification_controller.cc",
                     0x27a,"Repeated or reordered frame ID (",*(undefined8 *)(param_3 + 8),
                     &DAT_001a3771);
        return;
      }
      param_1[2] = *(long *)(param_3 + 8);
      *(undefined1 *)(param_1 + 3) = 1;
      if (*param_3 == '\x01') {
        puVar13 = param_1 + 7;
        local_38 = param_1 + 6;
        FUN_005dabf4(&local_38,*puVar13);
        *puVar13 = 0;
        param_1[8] = 0;
        param_1[6] = puVar13;
        *(undefined1 *)((long)param_1 + 0x24) = 1;
        return;
      }
      if ((*(ulong *)(param_3 + 0x18) & 0x1fffffffffffffff) == 0) {
LAB_009356a4:
        uVar10 = 1;
        *(undefined1 *)((long)param_1 + 0x24) = 1;
        if (!bVar7) {
          return;
        }
      }
      else {
        plVar8 = (long *)param_1[7];
        if (plVar8 != (long *)0x0) {
          plVar11 = *(long **)(param_3 + 0x10);
          plVar1 = plVar11 + *(ulong *)(param_3 + 0x18);
LAB_00935660:
          plVar12 = plVar8;
          do {
            if (*plVar11 < plVar12[4]) {
              plVar12 = (long *)*plVar12;
            }
            else {
              if (*plVar11 == plVar12[4]) goto LAB_00935690;
              plVar12 = (long *)plVar12[1];
            }
            if (plVar12 == (long *)0x0) break;
          } while( true );
        }
LAB_009356d4:
        uVar10 = 0;
        *(undefined1 *)((long)param_1 + 0x24) = 0;
      }
      if (*(char *)(param_1 + 5) != '\x01') goto LAB_00935718;
      plVar8 = (long *)param_1[1];
      uVar4 = *(undefined2 *)((long)param_1 + 0x26);
      goto LAB_009356f4;
    }
    if ((param_2 & 0xffff) == (uint)(ushort)(sVar3 + 1U)) goto LAB_00935614;
  }
  else {
    *(short *)(param_1 + 4) = sVar6;
    *(undefined1 *)((long)param_1 + 0x22) = 1;
    if (param_3 != (char *)0x0) {
      bVar7 = false;
      goto LAB_009355bc;
    }
LAB_00935614:
    if ((*(byte *)((long)param_1 + 0x24) & 1) != 0) {
      return;
    }
  }
  *(undefined1 *)((long)param_1 + 0x24) = 0;
  if (*(char *)(param_1 + 5) != '\x01') {
LAB_00935718:
                    /* WARNING: Could not recover jumptable at 0x00935738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)*param_1)();
    return;
  }
  plVar8 = (long *)param_1[1];
  uVar4 = *(undefined2 *)((long)param_1 + 0x26);
  uVar10 = 0;
LAB_009356f4:
                    /* WARNING: Could not recover jumptable at 0x00935714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar8 + 0x10))(plVar8,uVar4,param_2,uVar10,1);
  return;
LAB_00935690:
  if (plVar12 == param_1 + 7) goto LAB_009356d4;
  plVar11 = plVar11 + 1;
  if (plVar11 == plVar1) goto LAB_009356a4;
  goto LAB_00935660;
}


// ===== 0093577c  FUN_0093577c =====

void FUN_0093577c(long param_1)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  if (6000 < *(ulong *)(param_1 + 0x40)) {
    puVar4 = *(undefined8 **)(param_1 + 0x30);
    lVar3 = *(ulong *)(param_1 + 0x40) - 3000;
    puVar6 = puVar4;
    puVar7 = puVar4;
    if (lVar3 < 0) {
      do {
        puVar5 = (undefined8 *)*puVar6;
        if ((undefined8 *)*puVar6 == (undefined8 *)0x0) {
          do {
            puVar7 = (undefined8 *)puVar6[2];
            bVar2 = puVar6 == (undefined8 *)*puVar7;
            puVar6 = puVar7;
          } while (bVar2);
        }
        else {
          do {
            puVar7 = puVar5;
            puVar5 = (undefined8 *)puVar7[1];
          } while ((undefined8 *)puVar7[1] != (undefined8 *)0x0);
        }
        bVar2 = lVar3 != -1;
        lVar3 = lVar3 + 1;
        puVar6 = puVar7;
      } while (bVar2);
    }
    else {
      do {
        puVar6 = (undefined8 *)puVar7[1];
        puVar5 = puVar7;
        if ((undefined8 *)puVar7[1] == (undefined8 *)0x0) {
          do {
            puVar7 = (undefined8 *)puVar5[2];
            bVar2 = puVar5 != (undefined8 *)*puVar7;
            puVar5 = puVar7;
          } while (bVar2);
        }
        else {
          do {
            puVar7 = puVar6;
            puVar6 = (undefined8 *)*puVar7;
          } while ((undefined8 *)*puVar7 != (undefined8 *)0x0);
        }
        lVar1 = lVar3 + -1;
        bVar2 = 0 < lVar3;
        lVar3 = lVar1;
      } while (lVar1 != 0 && bVar2);
    }
    while (puVar4 != puVar7) {
      puVar6 = (undefined8 *)puVar4[1];
      puVar5 = puVar4;
      if ((undefined8 *)puVar4[1] == (undefined8 *)0x0) {
        do {
          puVar8 = (undefined8 *)puVar5[2];
          bVar2 = puVar5 != (undefined8 *)*puVar8;
          puVar5 = puVar8;
        } while (bVar2);
      }
      else {
        do {
          puVar8 = puVar6;
          puVar6 = (undefined8 *)*puVar8;
        } while ((undefined8 *)*puVar8 != (undefined8 *)0x0);
      }
      if (*(undefined8 **)(param_1 + 0x30) == puVar4) {
        *(undefined8 **)(param_1 + 0x30) = puVar8;
      }
      *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + -1;
      FUN_005d5d48(*(undefined8 *)(param_1 + 0x38),puVar4);
      if (puVar4 == (undefined8 *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      operator_delete(puVar4);
      puVar4 = puVar8;
    }
  }
  return;
}


// ===== 009358cc  FUN_009358cc =====

void FUN_009358cc(long param_1,undefined2 param_2,undefined8 param_3,ulong param_4,long *param_5,
                 ulong param_6)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 local_28;
  
  local_28 = param_3;
  FUN_0093577c();
  if ((param_4 & 1) == 0) {
    if ((param_6 & 0x1fffffffffffffff) == 0) {
LAB_00935960:
      *(undefined2 *)(param_1 + 0x26) = param_2;
      *(undefined1 *)(param_1 + 0x28) = 1;
      FUN_0090c1c0(0,param_1 + 0x30,param_1 + 0x30,&local_28);
    }
    else {
      plVar2 = *(long **)(param_1 + 0x38);
      if (plVar2 != (long *)0x0) {
        plVar1 = param_5 + param_6;
LAB_0093591c:
        plVar3 = plVar2;
        do {
          if (*param_5 < plVar3[4]) {
            plVar3 = (long *)*plVar3;
          }
          else {
            if (*param_5 == plVar3[4]) goto LAB_0093594c;
            plVar3 = (long *)plVar3[1];
          }
          if (plVar3 == (long *)0x0) {
            return;
          }
        } while( true );
      }
    }
  }
  return;
LAB_0093594c:
  if (plVar3 == (long *)(param_1 + 0x38)) {
    return;
  }
  param_5 = param_5 + 1;
  if (param_5 == plVar1) goto LAB_00935960;
  goto LAB_0093591c;
}


// ===== 00935998  FUN_00935998 =====

void FUN_00935998(void)

{
  return;
}


// ===== 009359a0  FUN_009359a0 =====

undefined1 FUN_009359a0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}


// ===== 009359ac  FUN_009359ac =====

undefined1 FUN_009359ac(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}


// ===== 009359b8  FUN_009359b8 =====

undefined1 FUN_009359b8(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}


// ===== 009359c4  FUN_009359c4 =====

undefined1 FUN_009359c4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x14);
}


// ===== 009359d0  FUN_009359d0 =====

undefined1 FUN_009359d0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x15);
}


// ===== 009359dc  FUN_009359dc =====

undefined8 FUN_009359dc(void)

{
  return 1;
}


// ===== 009359e8  FUN_009359e8 =====

void FUN_009359e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d3e138;
  FUN_008a56ec(param_1 + 4);
  return;
}


// ===== 009359fc  FUN_009359fc =====

void FUN_009359fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d3e138;
  FUN_008a56ec(param_1 + 4);
  return;
}


// ===== 00935a10  FUN_00935a10 =====

void FUN_00935a10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d3e138;
  FUN_008a56ec(param_1 + 4);
  operator_delete(param_1);
  return;
}


// ===== 00935a4c  FUN_00935a4c =====

undefined8 FUN_00935a4c(long param_1,long param_2)

{
  ulong uVar1;
  undefined1 uVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  
  fVar13 = *(float *)(param_2 + 8) * 255.0;
  uVar7 = 0;
  if (255.0 < fVar13) {
    uVar7 = 2;
  }
  if (fVar13 < 0.0 != NAN(fVar13)) {
    uVar7 = uVar7 + 1;
  }
  if (uVar7 < 2) {
    uVar12 = (uint)fVar13;
    if (uVar7 != 0 || uVar12 == 0) {
      *(undefined2 *)(param_1 + 9) = 0;
      return 1;
    }
  }
  else {
    if (uVar7 != 2) goto LAB_00935ed8;
    uVar12 = 0xff;
  }
  fVar14 = powf((float)(int)((uint)*(ushort *)(param_2 + 0x24) * (uint)*(ushort *)(param_2 + 0x22))
                / 405504.0,0.3);
  uVar17 = *(undefined4 *)(param_2 + 0x28);
  uVar7 = FUN_008a584c(param_1 + 0x20);
  fVar15 = (float)FUN_0089ff84(uVar17,0,uVar7 & 1);
  fVar16 = exp2f(-(float)(*(int *)(param_2 + 0x28) + -1));
  fVar16 = *(float *)(param_2 + 0x18) * fVar16;
  fVar13 = 1.0;
  if (1.0 <= fVar16) {
    fVar13 = fVar16;
  }
  fVar13 = (fVar15 * *(float *)(param_2 + 0xc)) / fVar13;
  fVar15 = -2.1474836e+09;
  uVar7 = 0;
  if (2.1474836e+09 < fVar13) {
    uVar7 = 2;
  }
  if (fVar13 < -2.1474836e+09 != NAN(fVar13)) {
    uVar7 = uVar7 + 1;
  }
  if (uVar7 < 2) {
    if (uVar7 == 0) {
      fVar15 = (float)(int)fVar13;
    }
  }
  else {
    if (uVar7 != 2) goto LAB_00935ed8;
    fVar15 = 2.1474836e+09;
  }
  fVar13 = (float)*(int *)(param_1 + 0x10) * 8.0;
  fVar16 = (fVar15 * 1000.0) / fVar13 + 1.5;
  uVar7 = 0;
  if (255.0 < fVar16) {
    uVar7 = 2;
  }
  if (fVar16 < 0.0 != NAN(fVar16)) {
    uVar7 = uVar7 + 1;
  }
  if (uVar7 < 2) {
    bVar5 = uVar7 == 0 && 1 < (uint)(int)fVar16;
  }
  else {
    if (uVar7 != 2) goto LAB_00935ed8;
    bVar5 = true;
  }
  fVar14 = (1.0 / fVar14) * fVar15;
  uVar7 = 0;
  if (65535.0 < fVar14) {
    uVar7 = 2;
  }
  if (fVar14 < 0.0 != NAN(fVar14)) {
    uVar7 = uVar7 + 1;
  }
  if (uVar7 < 2) {
    uVar8 = 0;
    uVar11 = 0;
    if (uVar7 == 0) {
      uVar11 = (int)fVar14 & 0xffff;
      if (0xf9 < uVar11) goto LAB_00935c78;
      uVar8 = (int)(uVar11 - 5) / 5;
      if (uVar11 < 10) {
        uVar8 = 0;
      }
    }
  }
  else {
    if (uVar7 != 2) goto LAB_00935ed8;
    uVar11 = 0xffff;
LAB_00935c78:
    uVar8 = 0x31;
  }
  uVar7 = 0;
  if (-1 < (int)uVar8) {
    uVar7 = (uVar8 & 0xff) * 0x81;
  }
  if (0x7f < uVar12) {
    uVar12 = 0x80;
  }
  uVar1 = (ulong)uVar7 + (ulong)uVar12;
  if (((uint)(uVar1 >> 1) & 0x7fffffff) < 0xc99) {
    bVar3 = (&DAT_0022692d)[uVar1];
    bVar9 = bVar3;
    if (bVar3 < 0x34) {
      bVar9 = 0x33;
    }
    if (!bVar5) {
      bVar9 = bVar3;
    }
    fVar14 = *(float *)(param_2 + 0x10) + 0.5;
    bVar3 = bVar9;
    if ((bVar9 & 0x80) != 0) {
      bVar3 = 0x80;
    }
    uVar7 = 0;
    if (255.0 < fVar14) {
      uVar7 = 2;
    }
    if (fVar14 < 0.0 != NAN(fVar14)) {
      uVar7 = uVar7 + 1;
    }
    if (uVar7 < 2) {
      uVar8 = 0;
      if (uVar7 == 0) {
        uVar8 = (uint)fVar14;
      }
    }
    else {
      if (uVar7 != 2) goto LAB_00935ed8;
      uVar8 = 0xff;
    }
    fVar14 = *(float *)(param_2 + 0x14) + 0.5;
    uVar7 = 0;
    if (255.0 < fVar14) {
      uVar7 = 2;
    }
    if (fVar14 < 0.0 != NAN(fVar14)) {
      uVar7 = uVar7 + 1;
    }
    if (uVar7 < 2) {
      uVar10 = 0;
      if (uVar7 == 0) {
        uVar10 = (uint)fVar14;
      }
    }
    else {
      if (uVar7 != 2) {
LAB_00935ed8:
                    /* WARNING: Subroutine does not return */
        FUN_0061ff28();
      }
      uVar10 = 0xff;
    }
    uVar7 = 2;
    if (uVar8 != 0) {
      uVar7 = 0;
      if (uVar8 != 0) {
        uVar7 = uVar10 / uVar8;
      }
      if (uVar7 < 3) {
        uVar7 = 2;
      }
    }
    uVar7 = uVar7 * uVar11;
    uVar11 = 0x31;
    if (uVar7 < 0xf5) {
      uVar11 = (int)(uVar7 - 5) / 5 + 1;
    }
    uVar8 = 0;
    if (uVar7 != 0) {
      uVar8 = uVar11;
    }
    uVar7 = 0x807f;
    if (uVar8 < 0x100) {
      uVar7 = (uVar8 & 0xff) * 0x81;
    }
    uVar1 = (ulong)uVar7 + (ulong)uVar12;
    if (((uint)(uVar1 >> 1) & 0x7fffffff) < 0xc99) {
      bVar4 = (&DAT_0022692d)[uVar1];
      *(byte *)(param_1 + 10) = bVar3;
      uVar7 = (uint)(*(float *)(param_1 + 0xc) * (float)bVar3);
      if (0x7f < (int)uVar7) {
        uVar7 = 0x80;
      }
      if ((int)uVar7 <= (int)(uint)bVar4) {
        uVar7 = (uint)bVar4;
      }
      if (uVar7 <= uVar12) {
        uVar7 = uVar12;
      }
      uVar2 = (undefined1)uVar7;
      if ((uVar7 & 0x80) != 0) {
        uVar2 = 0x80;
      }
      *(undefined1 *)(param_1 + 9) = uVar2;
      fVar13 = (((fVar15 * 1000.0) / fVar13 + 0.5 + 1.0) * (float)bVar3) / 255.0 + 0.5;
      *(undefined4 *)(param_1 + 0x18) = 0x3f800000;
      if ((fVar13 < 1.1) && (bVar9 < 0x55)) {
        uVar17 = 0;
        if (0.9 <= fVar13) {
          uVar17 = 0x3f000000;
        }
        *(undefined4 *)(param_1 + 0x18) = uVar17;
      }
      return 1;
    }
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(0x5512,0x935ee0);
  (*pcVar6)();
}


// ===== 00935ee0  FUN_00935ee0 =====

undefined4 FUN_00935ee0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x88);
}


// ===== 00935eec  FUN_00935eec =====

undefined8 FUN_00935eec(long param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  lVar3 = param_2[5];
  uVar4 = FUN_008a584c(param_1 + 0x20);
  fVar8 = (float)FUN_0089ff84((int)lVar3,0,uVar4 & 1);
  lVar3 = param_2[5];
  fVar9 = exp2f(-(float)((int)lVar3 + -1));
  fVar10 = 1.0;
  if (1.0 <= *(float *)(param_2 + 3) * fVar9) {
    fVar10 = *(float *)(param_2 + 3) * fVar9;
  }
  fVar10 = (fVar8 * *(float *)((long)param_2 + 0xc)) / fVar10;
  uVar4 = 0;
  if (2.1474836e+09 < fVar10) {
    uVar4 = 2;
  }
  if (fVar10 < -2.1474836e+09 != NAN(fVar10)) {
    uVar4 = uVar4 + 1;
  }
  if (uVar4 < 2) {
    iVar6 = 0;
    if (uVar4 == 0) {
      iVar6 = (int)fVar10 * 1000 >> 3;
    }
  }
  else {
    if (uVar4 != 2) {
                    /* WARNING: Subroutine does not return */
      FUN_0061ff28();
    }
    iVar6 = -0x7d;
  }
  iVar2 = (uint)*(ushort *)((long)param_2 + 0x24) * (uint)*(ushort *)((long)param_2 + 0x22);
  iVar7 = 1000;
  if (iVar2 < 0x4b001) {
    iVar7 = 700;
  }
  iVar1 = 400;
  if (0x18c00 < iVar2) {
    iVar1 = iVar7;
  }
  if ((((int)lVar3 < 3) && (iVar6 < iVar1)) && (*param_2 < 200)) {
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}


// ===== 00936018  FUN_00936018 =====

undefined8 FUN_00936018(long param_1,long *param_2)

{
  ulong uVar1;
  byte bVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  
  FUN_00935a4c();
  if ((*(long *)(param_1 + 0x78) == -1) || (*param_2 < *(long *)(param_1 + 0x78))) {
    *(undefined1 *)(param_1 + 10) = 0;
  }
  *(undefined1 *)(param_1 + 8) = 0;
  uVar5 = 1;
  if ((int)param_2[5] < 3) {
    fVar6 = *(float *)(param_2 + 3) / (float)(uint)(1 << (ulong)((int)param_2[5] - 1U & 0x1f));
    fVar6 = ((fVar6 + fVar6) * (float)*param_2) / 1000.0 + 0.5;
    uVar4 = 0;
    if (2.1474836e+09 < fVar6) {
      uVar4 = 2;
    }
    if (fVar6 < -2.1474836e+09 != NAN(fVar6)) {
      uVar4 = uVar4 + 1;
    }
    if (uVar4 < 2) {
      uVar5 = (uint)fVar6;
      if (uVar4 != 0 || (int)uVar5 < 1) {
        uVar5 = 1;
      }
    }
    else {
      if (uVar4 != 2) goto LAB_00936204;
      uVar5 = 0x7fffffff;
    }
    if (5 < uVar5) {
      uVar5 = 6;
    }
  }
  *(uint *)(param_1 + 0x88) = uVar5;
  uVar1 = FUN_00935eec(param_1,param_2);
  if ((uVar1 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 9);
  }
  else {
    bVar2 = 0;
    *(undefined2 *)(param_1 + 9) = 0;
  }
  dVar7 = ((double)bVar2 * 255.0) / (double)(bVar2 ^ 0xff) + 0.5;
  dVar8 = 255.0;
  if (dVar7 == 255.0 || dVar7 < 255.0 != NAN(dVar7)) {
    dVar8 = dVar7;
  }
  uVar5 = 0;
  if (255.0 < dVar8) {
    uVar5 = 2;
  }
  if (dVar8 < 0.0 != NAN(dVar8)) {
    uVar5 = uVar5 + 1;
  }
  if (uVar5 < 2) {
    uVar3 = (undefined1)(int)dVar8;
    if (uVar5 != 0) {
      uVar3 = 0;
    }
  }
  else {
    if (uVar5 != 2) goto LAB_00936204;
    uVar3 = 0xff;
  }
  *(undefined1 *)(param_1 + 9) = uVar3;
  dVar7 = ((double)*(byte *)(param_1 + 10) * 255.0) / (double)(*(byte *)(param_1 + 10) ^ 0xff) + 0.5
  ;
  dVar8 = 255.0;
  if (dVar7 == 255.0 || dVar7 < 255.0 != NAN(dVar7)) {
    dVar8 = dVar7;
  }
  uVar5 = 0;
  if (255.0 < dVar8) {
    uVar5 = 2;
  }
  if (dVar8 < 0.0 != NAN(dVar8)) {
    uVar5 = uVar5 + 1;
  }
  if (uVar5 < 2) {
    uVar3 = (undefined1)(int)dVar8;
    if (uVar5 != 0) {
      uVar3 = 0;
    }
  }
  else {
    if (uVar5 != 2) {
LAB_00936204:
                    /* WARNING: Subroutine does not return */
      FUN_0061ff28();
    }
    uVar3 = 0xff;
  }
  *(undefined1 *)(param_1 + 10) = uVar3;
  return 1;
}


// ===== 00936208  FUN_00936208 =====

void FUN_00936208(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00936214  FUN_00936214 =====

undefined8 FUN_00936214(long param_1)

{
  *(undefined1 *)(param_1 + 8) = 0;
  return 1;
}


// ===== 00936228  FUN_00936228 =====

void FUN_00936228(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d3e138;
  FUN_008a56ec(param_1 + 4);
  operator_delete(param_1);
  return;
}


// ===== 00936264  FUN_00936264 =====

undefined8 FUN_00936264(long param_1)

{
  undefined1 uVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  
  FUN_00935a4c();
  *(undefined1 *)(param_1 + 8) = 0;
  dVar3 = ((double)*(byte *)(param_1 + 9) * 255.0) / (double)(*(byte *)(param_1 + 9) ^ 0xff) + 0.5;
  dVar4 = 255.0;
  if (dVar3 == 255.0 || dVar3 < 255.0 != NAN(dVar3)) {
    dVar4 = dVar3;
  }
  uVar2 = 0;
  if (255.0 < dVar4) {
    uVar2 = 2;
  }
  if (dVar4 < 0.0 != NAN(dVar4)) {
    uVar2 = uVar2 + 1;
  }
  if (uVar2 < 2) {
    uVar1 = (undefined1)(int)dVar4;
    if (uVar2 != 0) {
      uVar1 = 0;
    }
  }
  else {
    if (uVar2 != 2) goto LAB_00936374;
    uVar1 = 0xff;
  }
  *(undefined1 *)(param_1 + 9) = uVar1;
  dVar3 = ((double)*(byte *)(param_1 + 10) * 255.0) / (double)(*(byte *)(param_1 + 10) ^ 0xff) + 0.5
  ;
  dVar4 = 255.0;
  if (dVar3 == 255.0 || dVar3 < 255.0 != NAN(dVar3)) {
    dVar4 = dVar3;
  }
  uVar2 = 0;
  if (255.0 < dVar4) {
    uVar2 = 2;
  }
  if (dVar4 < 0.0 != NAN(dVar4)) {
    uVar2 = uVar2 + 1;
  }
  if (uVar2 < 2) {
    uVar1 = (undefined1)(int)dVar4;
    if (uVar2 != 0) {
      uVar1 = 0;
    }
  }
  else {
    if (uVar2 != 2) {
LAB_00936374:
                    /* WARNING: Subroutine does not return */
      FUN_0061ff28();
    }
    uVar1 = 0xff;
  }
  *(undefined1 *)(param_1 + 10) = uVar1;
  return 1;
}


// ===== 00936378  FUN_00936378 =====

void FUN_00936378(long *param_1,long *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined4 uVar9;
  
  lVar4 = *param_2;
  *param_1 = lVar4;
  if (lVar4 != 0) {
    FUN_00d0f740(1,lVar4 + 8);
  }
  lVar6 = param_2[4];
  lVar4 = param_2[3];
  lVar8 = param_2[2];
  lVar7 = param_2[1];
  param_1[0x10] = 0;
  param_1[4] = lVar6;
  param_1[3] = lVar4;
  param_1[2] = lVar8;
  param_1[1] = lVar7;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  *(undefined8 *)((long)param_1 + 0x4e) = 0;
  *(undefined8 *)((long)param_1 + 0x46) = 0;
  *(undefined4 *)(param_1 + 0xb) = 1;
  param_1[0xe] = 0;
  puVar1 = PTR_DAT_00d52038;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined2 *)(param_1 + 0xf) = 0;
  uVar9 = *(undefined4 *)puVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar9;
  FUN_00625c38(0x3f7ff972,param_1 + 0x13);
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[0x16] = -1;
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x18] = -1;
  *(undefined1 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = -1;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = -1;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  param_1[0x1e] = -1;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  param_1[0x20] = -1;
  *(undefined1 *)(param_1 + 0x21) = 0;
  param_1[0x22] = -1;
  *(undefined1 *)(param_1 + 0x23) = 0;
  param_1[0x24] = -1;
  *(undefined1 *)(param_1 + 0x25) = 0;
  param_1[0x26] = -1;
  *(undefined1 *)(param_1 + 0x27) = 0;
  param_1[0x28] = -1;
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(undefined4 *)((long)param_1 + 0x154) = uVar9;
  FUN_00625c38(0x3f7ff972,(long)param_1 + 0x14c);
  *(undefined4 *)(param_1 + 0x2c) = uVar9;
  FUN_00625c38(0x3f7ff972,param_1 + 0x2b);
  param_1[0x2d] = 0x2c0;
  param_1[0x2e] = 0x240;
  *(undefined4 *)(param_1 + 0x2f) = 1;
  uVar2 = (**(code **)(*(long *)param_1[2] + 0x10))();
  if ((long)uVar2 < 0) {
    uVar5 = -(-uVar2 / 1000) - (ulong)(500 < -uVar2 % 1000);
  }
  else {
    uVar5 = uVar2 / 1000;
    if (499 < uVar2 % 1000) {
      uVar5 = uVar5 + 1;
    }
  }
  param_1[0x10] = uVar5;
  param_1[0x11] = uVar5;
  param_1[0x12] = uVar5;
  FUN_00625c38(0x3f7ff972,param_1 + 0x13);
  FUN_00625c38(0x3f7ff972,(long)param_1 + 0x14c);
  plVar3 = (long *)param_1[5];
  *(undefined2 *)(param_1 + 0xf) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[0x16] = -1;
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x18] = -1;
  *(undefined1 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = -1;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = -1;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  param_1[0x1e] = -1;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  param_1[0x20] = -1;
  *(undefined1 *)(param_1 + 0x21) = 0;
  param_1[0x22] = -1;
  *(undefined1 *)(param_1 + 0x23) = 0;
  param_1[0x24] = -1;
  *(undefined1 *)(param_1 + 0x25) = 0;
  param_1[0x26] = -1;
  *(undefined1 *)(param_1 + 0x27) = 0;
  param_1[0x28] = -1;
  *(undefined1 *)(param_1 + 0x29) = 0;
  param_1[5] = 0;
  if (plVar3 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x009365b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 8))();
  return;
}


// ===== 009365d0  FUN_009365d0 =====

void FUN_009365d0(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[5];
  param_1[5] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
    plVar2 = (long *)param_1[5];
    param_1[5] = 0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  plVar2 = (long *)*param_1;
  if ((plVar2 != (long *)0x0) && (iVar1 = FUN_00d0f7a0(0xffffffff,plVar2 + 1), iVar1 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x00936648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))(plVar2);
    return;
  }
  return;
}


// ===== 0093665c  FUN_0093665c =====

void FUN_0093665c(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00936678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}


// ===== 00936680  FUN_00936680 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00936680(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  
  plVar4 = *(long **)(param_1 + 0x28);
  if ((plVar4 != (long *)0x0) && (*(int *)((long)plVar4 + 0x1c) == param_2)) {
    return;
  }
  if (param_2 < 2) {
    if (param_2 == 0) {
      plVar3 = (long *)operator_new(0x20);
      *(undefined2 *)(plVar3 + 1) = 0;
      *(undefined1 *)((long)plVar3 + 10) = 0;
      *(undefined8 *)((long)plVar3 + 0xc) = 0x5b440000000;
      plVar3[3] = 0x3f800000;
      *plVar3 = (long)&PTR_FUN_00d3e0e0;
      *(long **)(param_1 + 0x28) = plVar3;
joined_r0x009367ec:
      if (plVar4 == (long *)0x0) goto LAB_00936804;
      goto LAB_009367f0;
    }
    if (param_2 == 1) {
      uVar5 = *(undefined8 *)(param_1 + 8);
      plVar3 = (long *)operator_new(0x78);
      *(undefined2 *)(plVar3 + 1) = 0;
      *(undefined8 *)((long)plVar3 + 0xc) = 0x5b440000000;
      *(undefined1 *)((long)plVar3 + 10) = 0;
      plVar3[3] = 0x33f800000;
      *plVar3 = (long)&PTR_FUN_00d3e138;
      FUN_008a5364(plVar3 + 4,uVar5);
      plVar4 = *(long **)(param_1 + 0x28);
      *(undefined4 *)((long)plVar3 + 0x1c) = 1;
      *(long **)(param_1 + 0x28) = plVar3;
      goto joined_r0x009367ec;
    }
  }
  else {
    if (param_2 == 2) {
      uVar5 = *(undefined8 *)(param_1 + 8);
      plVar3 = (long *)operator_new(0x90);
      *(undefined2 *)(plVar3 + 1) = 0;
      *(undefined8 *)((long)plVar3 + 0xc) = 0x5b440000000;
      *(undefined1 *)((long)plVar3 + 10) = 0;
      plVar3[3] = 0x33f800000;
      *plVar3 = (long)&PTR_FUN_00d3e138;
      FUN_008a5364(plVar3 + 4,uVar5);
      plVar4 = *(long **)(param_1 + 0x28);
      *plVar3 = (long)&PTR_FUN_00d3e088;
      lVar2 = _UNK_001f22d8;
      lVar1 = _DAT_001f22d0;
      *(undefined4 *)(plVar3 + 0x11) = 1;
      *(undefined4 *)((long)plVar3 + 0x1c) = 2;
      plVar3[0x10] = lVar2;
      plVar3[0xf] = lVar1;
      *(long **)(param_1 + 0x28) = plVar3;
      goto joined_r0x009367ec;
    }
    if (param_2 != 3) goto LAB_00936800;
    *(undefined8 *)(param_1 + 0x28) = 0;
    if (plVar4 == (long *)0x0) {
      return;
    }
LAB_009367f0:
    (**(code **)(*plVar4 + 8))(plVar4);
  }
LAB_00936800:
  plVar3 = *(long **)(param_1 + 0x28);
LAB_00936804:
  if (plVar3 == (long *)0x0) {
    return;
  }
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x60);
  *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)(param_1 + 0x79);
  *(undefined1 *)(param_1 + 0x51) = *(undefined1 *)(param_1 + 0x78);
  *(short *)(param_1 + 0x54) = (short)*(undefined8 *)(param_1 + 0x170);
  *(short *)(param_1 + 0x52) = (short)*(undefined8 *)(param_1 + 0x168);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x70);
  *(ulong *)(param_1 + 0x40) =
       CONCAT44(*(undefined4 *)(param_1 + 0x15c),*(undefined4 *)(param_1 + 0x150));
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x178);
                    /* WARNING: Could not recover jumptable at 0x00936874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x10))(plVar3,(undefined8 *)(param_1 + 0x30));
  return;
}


// ===== 0093688c  FUN_0093688c =====

void FUN_0093688c(long param_1)

{
  if (*(long **)(param_1 + 0x28) != (long *)0x0) {
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x60);
    *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)(param_1 + 0x79);
    *(undefined1 *)(param_1 + 0x51) = *(undefined1 *)(param_1 + 0x78);
    *(short *)(param_1 + 0x54) = (short)*(undefined8 *)(param_1 + 0x170);
    *(short *)(param_1 + 0x52) = (short)*(undefined8 *)(param_1 + 0x168);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x70);
    *(ulong *)(param_1 + 0x40) =
         CONCAT44(*(undefined4 *)(param_1 + 0x15c),*(undefined4 *)(param_1 + 0x150));
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x178);
                    /* WARNING: Could not recover jumptable at 0x009368f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}


// ===== 009368f8  FUN_009368f8 =====

void FUN_009368f8(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x60) = param_2;
  return;
}


// ===== 00936904  FUN_00936904 =====

byte FUN_00936904(long param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  
  bVar2 = *(byte *)(param_1 + 0x148);
  if ((*(long *)(param_1 + 0xb0) != -1) && (param_2 - *(long *)(param_1 + 0xb0) < 0x2711)) {
    bVar1 = *(byte *)(param_1 + 0xa8);
    if (*(byte *)(param_1 + 0xa8) <= bVar2) {
      bVar1 = bVar2;
    }
    bVar2 = bVar1;
    if ((*(long *)(param_1 + 0xc0) != -1) && (param_2 - *(long *)(param_1 + 0xc0) < 0x2711)) {
      bVar2 = *(byte *)(param_1 + 0xb8);
      if (*(byte *)(param_1 + 0xb8) <= bVar1) {
        bVar2 = bVar1;
      }
      if ((*(long *)(param_1 + 0xd0) != -1) && (param_2 - *(long *)(param_1 + 0xd0) < 0x2711)) {
        bVar1 = *(byte *)(param_1 + 200);
        if (*(byte *)(param_1 + 200) <= bVar2) {
          bVar1 = bVar2;
        }
        bVar2 = bVar1;
        if ((*(long *)(param_1 + 0xe0) != -1) && (param_2 - *(long *)(param_1 + 0xe0) < 0x2711)) {
          bVar2 = *(byte *)(param_1 + 0xd8);
          if (*(byte *)(param_1 + 0xd8) <= bVar1) {
            bVar2 = bVar1;
          }
          if ((*(long *)(param_1 + 0xf0) != -1) && (param_2 - *(long *)(param_1 + 0xf0) < 0x2711)) {
            bVar1 = *(byte *)(param_1 + 0xe8);
            if (*(byte *)(param_1 + 0xe8) <= bVar2) {
              bVar1 = bVar2;
            }
            bVar2 = bVar1;
            if ((*(long *)(param_1 + 0x100) != -1) &&
               (param_2 - *(long *)(param_1 + 0x100) < 0x2711)) {
              bVar2 = *(byte *)(param_1 + 0xf8);
              if (*(byte *)(param_1 + 0xf8) <= bVar1) {
                bVar2 = bVar1;
              }
              if ((*(long *)(param_1 + 0x110) != -1) &&
                 (param_2 - *(long *)(param_1 + 0x110) < 0x2711)) {
                bVar1 = *(byte *)(param_1 + 0x108);
                if (*(byte *)(param_1 + 0x108) <= bVar2) {
                  bVar1 = bVar2;
                }
                bVar2 = bVar1;
                if ((*(long *)(param_1 + 0x120) != -1) &&
                   (param_2 - *(long *)(param_1 + 0x120) < 0x2711)) {
                  bVar2 = *(byte *)(param_1 + 0x118);
                  if (*(byte *)(param_1 + 0x118) <= bVar1) {
                    bVar2 = bVar1;
                  }
                  if ((*(long *)(param_1 + 0x130) != -1) &&
                     (param_2 - *(long *)(param_1 + 0x130) < 0x2711)) {
                    bVar1 = *(byte *)(param_1 + 0x128);
                    if (*(byte *)(param_1 + 0x128) <= bVar2) {
                      bVar1 = bVar2;
                    }
                    bVar2 = bVar1;
                    if (((*(long *)(param_1 + 0x140) != -1) &&
                        (param_2 - *(long *)(param_1 + 0x140) < 0x2711)) &&
                       (bVar2 = *(byte *)(param_1 + 0x138), *(byte *)(param_1 + 0x138) <= bVar1)) {
                      bVar2 = bVar1;
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
  return bVar2;
}


// ===== 00936aa4  FUN_00936aa4 =====

ulong FUN_00936aa4(long param_1,long param_2,int param_3,uint param_4)

{
  uint uVar1;
  float fVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  
  lVar4 = *(long *)(param_1 + 0xb0);
  if ((lVar4 < 0) || (999 < param_2 - lVar4)) {
    uVar5 = param_4;
    if (lVar4 != -1) {
      *(undefined1 *)(param_1 + 0x138) = *(undefined1 *)(param_1 + 0x128);
      *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_1 + 0x130);
      *(undefined1 *)(param_1 + 0x128) = *(undefined1 *)(param_1 + 0x118);
      *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_1 + 0x120);
      *(undefined1 *)(param_1 + 0x118) = *(undefined1 *)(param_1 + 0x108);
      *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_1 + 0x110);
      *(undefined1 *)(param_1 + 0x108) = *(undefined1 *)(param_1 + 0xf8);
      *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_1 + 0x100);
      *(undefined1 *)(param_1 + 0xf8) = *(undefined1 *)(param_1 + 0xe8);
      *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_1 + 0xf0);
      *(undefined1 *)(param_1 + 0xe8) = *(undefined1 *)(param_1 + 0xd8);
      *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_1 + 0xe0);
      *(undefined1 *)(param_1 + 0xd8) = *(undefined1 *)(param_1 + 200);
      *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_1 + 0xd0);
      *(undefined1 *)(param_1 + 200) = *(undefined1 *)(param_1 + 0xb8);
      *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 0xc0);
      *(undefined1 *)(param_1 + 0xb8) = *(undefined1 *)(param_1 + 0xa8);
      uVar5 = (uint)*(byte *)(param_1 + 0x148);
      *(long *)(param_1 + 0xc0) = lVar4;
    }
    *(long *)(param_1 + 0xb0) = param_2;
    uVar1 = param_4;
    if ((uVar5 & 0xff) != 0) {
      uVar1 = uVar5;
    }
    *(undefined1 *)(param_1 + 0x148) = 0;
    *(char *)(param_1 + 0xa8) = (char)uVar1;
  }
  else if ((uint)*(byte *)(param_1 + 0x148) < (param_4 & 0xff)) {
    *(char *)(param_1 + 0x148) = (char)param_4;
  }
  FUN_00625c4c((float)(param_2 - *(long *)(param_1 + 0x80)),(float)(param_4 & 0xff),param_1 + 0x98);
  *(long *)(param_1 + 0x80) = param_2;
  if (param_3 != 2) {
    if (param_3 == 1) {
      fVar2 = *(float *)(param_1 + 0x9c) + 0.5;
      uVar5 = 0;
      if (255.0 < fVar2) {
        uVar5 = 2;
      }
      if (fVar2 < 0.0 != NAN(fVar2)) {
        uVar5 = uVar5 + 1;
      }
      if (uVar5 < 2) {
        param_4 = 0;
        if (uVar5 == 0) {
          param_4 = (uint)fVar2;
        }
      }
      else {
        if (uVar5 != 2) {
                    /* WARNING: Subroutine does not return */
          FUN_0061ff28();
        }
        param_4 = 0xff;
      }
    }
    return (ulong)param_4;
  }
  uVar3 = FUN_00936904(param_1,param_2);
  return uVar3;
}


// ===== 00936c5c  FUN_00936c5c =====

void FUN_00936c5c(long param_1,byte param_2)

{
  *(float *)(param_1 + 0x68) = (float)param_2 / 255.0;
  return;
}


// ===== 00936c7c  FUN_00936c7c =====

void FUN_00936c7c(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x6c) = param_1;
  return;
}


// ===== 00936c88  FUN_00936c88 =====

void FUN_00936c88(undefined4 param_1,long param_2,long param_3)

{
  FUN_00625c4c((float)(param_3 - *(long *)(param_2 + 0x88)),param_1,param_2 + 0x14c);
  *(long *)(param_2 + 0x88) = param_3;
  return;
}


// ===== 00936cd4  FUN_00936cd4 =====

void FUN_00936cd4(undefined4 param_1,long param_2,long param_3)

{
  FUN_00625c4c((float)(param_3 - *(long *)(param_2 + 0x90)),param_1,param_2 + 0x158);
  *(long *)(param_2 + 0x90) = param_3;
  return;
}


// ===== 00936d20  FUN_00936d20 =====

void FUN_00936d20(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x74) = param_1;
  return;
}


// ===== 00936d2c  FUN_00936d2c =====

void FUN_00936d2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x168) = param_2;
  *(undefined8 *)(param_1 + 0x170) = param_3;
  return;
}


// ===== 00936d38  FUN_00936d38 =====

void FUN_00936d38(long param_1,uint param_2)

{
  if (param_2 < 2) {
    param_2 = 1;
  }
  *(uint *)(param_1 + 0x178) = param_2;
  return;
}


// ===== 00936d4c  FUN_00936d4c =====

undefined8 FUN_00936d4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}


// ===== 00936d58  FUN_00936d58 =====

undefined4 FUN_00936d58(long param_1)

{
  if (*(long *)(param_1 + 0x28) != 0) {
    return *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x1c);
  }
  return 3;
}


// ===== 00936d74  FUN_00936d74 =====

void FUN_00936d74(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  undefined1 *puVar4;
  short sVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined1 uStack_28;
  undefined1 uStack_27;
  undefined1 uStack_26;
  undefined1 uStack_25;
  undefined1 uStack_24;
  undefined1 uStack_23;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  lVar3 = FUN_0084f840(param_3);
  if (*(char *)(lVar3 + 0x90) == '\x01') {
    bVar1 = DAT_00012e90;
    if ((param_2 == (undefined8 *)0x0) || (bVar1 = *(byte *)(param_2 + 0x25d2), bVar1 != 1)) {
      if (bVar1 != 0xff) {
        (*(code *)(&PTR_FUN_00d3e1b0)[bVar1])(&uStack_28,param_2);
      }
      *(undefined1 *)(param_2 + 0x25d2) = 0xff;
      if (param_2 == (undefined8 *)0x0) goto LAB_009372c0;
      *(undefined1 *)(param_2 + 0x25d2) = 1;
      if ((*(byte *)(lVar3 + 0x90) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/optional:1064: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                  );
      }
    }
    FUN_009380b8(param_1,param_2,param_3,lVar3);
    return;
  }
  iVar2 = FUN_0084f808(param_3);
  if (iVar2 != 0) {
    if (iVar2 == 2) {
      if (*(char *)(lVar3 + 0x790) != '\x02') {
LAB_009372e8:
                    /* WARNING: Subroutine does not return */
        FUN_005ee558();
      }
      if (*(char *)(lVar3 + 0x134) != -1) {
        bVar1 = DAT_00012e90;
        if ((param_2 != (undefined8 *)0x0) &&
           (bVar1 = *(byte *)(param_2 + 0x25d2), *(byte *)(param_2 + 0x25d2) == 5)) {
LAB_00937070:
          FUN_0093ce28(param_1,param_2,param_3);
          return;
        }
        if (bVar1 != 0xff) {
          (*(code *)(&PTR_FUN_00d3e1b0)[(uint)bVar1])(&uStack_24,param_2);
        }
        *(undefined1 *)(param_2 + 0x25d2) = 0xff;
        if (param_2 != (undefined8 *)0x0) {
          memset(param_2,0,0x12e90);
          param_2[0x25b9] = param_2 + 0x25ba;
          param_2[0x25bc] = param_2 + 0x25bd;
          param_2[0x25bf] = param_2 + 0x25c0;
          param_2[0x25be] = 0;
          param_2[0x25bd] = 0;
          param_2[0x25c1] = 0;
          param_2[0x25c0] = 0;
          param_2[0x25c4] = 0;
          param_2[0x25c3] = 0;
          param_2[0x25c2] = param_2 + 0x25c3;
          param_2[0x25c7] = 0;
          param_2[0x25c6] = 0;
          param_2[0x25c5] = param_2 + 0x25c6;
          param_2[0x25ca] = 0;
          param_2[0x25c9] = 0;
          param_2[0x25c8] = param_2 + 0x25c9;
          param_2[0x25cd] = 0;
          param_2[0x25cc] = 0;
          param_2[0x25cb] = param_2 + 0x25cc;
          *(undefined1 *)(param_2 + 0x25d2) = 5;
          goto LAB_00937070;
        }
        goto LAB_009372c0;
      }
      sVar5 = *(short *)(lVar3 + 0x12e);
      if (sVar5 == -1) {
LAB_00936f64:
        if ((param_2 == (undefined8 *)0x0) || (*(char *)(param_2 + 0x25d2) != '\x03')) {
          param_2 = (undefined8 *)FUN_00937f34(param_2);
        }
        FUN_0093827c(param_1,param_2,param_3);
        return;
      }
      bVar1 = DAT_00012e90;
      if ((param_2 == (undefined8 *)0x0) ||
         (bVar1 = *(byte *)(param_2 + 0x25d2), *(byte *)(param_2 + 0x25d2) != 2)) {
        if (bVar1 != 0xff) {
          (*(code *)(&PTR_FUN_00d3e1b0)[(uint)bVar1])(&uStack_25,param_2);
        }
        *(undefined1 *)(param_2 + 0x25d2) = 0xff;
        if (param_2 == (undefined8 *)0x0) goto LAB_009372c0;
        *param_2 = 0;
        param_2[1] = 0;
        *(undefined1 *)(param_2 + 0x25d2) = 2;
        sVar5 = *(short *)(lVar3 + 0x12e);
      }
    }
    else {
      if (iVar2 != 1) {
        bVar1 = DAT_00012e90;
        if ((param_2 != (undefined8 *)0x0) &&
           (bVar1 = *(byte *)(param_2 + 0x25d2), *(byte *)(param_2 + 0x25d2) == 3))
        goto LAB_00937154;
        uVar6 = (uint)bVar1;
        if (uVar6 != 0xff) {
          puVar4 = &uStack_21;
          goto LAB_009370f0;
        }
        goto LAB_009370fc;
      }
      if (*(char *)(lVar3 + 0x790) != '\x01') goto LAB_009372e8;
      if ((*(char *)(lVar3 + 0x12e) != -1) && (*(short *)(lVar3 + 300) != -1)) {
        bVar1 = DAT_00012e90;
        if ((param_2 == (undefined8 *)0x0) ||
           (bVar1 = *(byte *)(param_2 + 0x25d2), *(byte *)(param_2 + 0x25d2) != 4)) {
          if (bVar1 != 0xff) {
            (*(code *)(&PTR_FUN_00d3e1b0)[(uint)bVar1])(&uStack_26,param_2);
          }
          *(undefined1 *)(param_2 + 0x25d2) = 0xff;
          if (param_2 == (undefined8 *)0x0) goto LAB_009372c0;
          param_2[0x10] = 0;
          puVar7 = param_2 + 2;
          param_2[3] = 0;
          *puVar7 = 0;
          param_2[1] = 0;
          *param_2 = 0;
          param_2[5] = 0;
          param_2[4] = 0;
          param_2[7] = 0;
          param_2[6] = 0;
          param_2[9] = 0;
          param_2[8] = 0;
          param_2[0xb] = 0;
          param_2[10] = 0;
          param_2[0xd] = 0;
          param_2[0xc] = 0;
          param_2[0xf] = 0;
          param_2[0xe] = 0;
          *puVar7 = 0;
          param_2[1] = puVar7;
          param_2[0xb] = 0;
          param_2[10] = param_2 + 0xb;
          *(undefined4 *)param_2 = 0xffffffff;
          param_2[3] = 0;
          param_2[0xc] = 0;
          *(undefined1 *)(param_2 + 0x25d2) = 4;
        }
        FUN_0093a0e8(param_1,param_2,param_3);
        return;
      }
      sVar5 = *(short *)(lVar3 + 0x12a);
      if (sVar5 == -1) goto LAB_00936f64;
      bVar1 = DAT_00012e90;
      if ((param_2 == (undefined8 *)0x0) ||
         (bVar1 = *(byte *)(param_2 + 0x25d2), *(byte *)(param_2 + 0x25d2) != 2)) {
        if (bVar1 != 0xff) {
          (*(code *)(&PTR_FUN_00d3e1b0)[(uint)bVar1])(&uStack_27,param_2);
        }
        *(undefined1 *)(param_2 + 0x25d2) = 0xff;
        if (param_2 == (undefined8 *)0x0) goto LAB_009372c0;
        *param_2 = 0;
        param_2[1] = 0;
        *(undefined1 *)(param_2 + 0x25d2) = 2;
        sVar5 = *(short *)(lVar3 + 0x12a);
      }
    }
    uVar6 = (uint)sVar5;
LAB_00937298:
    FUN_00937ffc(param_1,param_2,param_3,uVar6);
    return;
  }
  if (*(char *)(lVar3 + 0x790) == '\x04') {
    bVar1 = DAT_00012e90;
    if ((param_2 == (undefined8 *)0x0) ||
       (bVar1 = *(byte *)(param_2 + 0x25d2), *(byte *)(param_2 + 0x25d2) != 2)) {
      if (bVar1 != 0xff) {
        (*(code *)(&PTR_FUN_00d3e1b0)[(uint)bVar1])(&uStack_23,param_2);
      }
      *(undefined1 *)(param_2 + 0x25d2) = 0xff;
      if (param_2 == (undefined8 *)0x0) goto LAB_009372c0;
      *param_2 = 0;
      param_2[1] = 0;
      *(undefined1 *)(param_2 + 0x25d2) = 2;
    }
    uVar6 = (uint)*(ushort *)(lVar3 + 0x128);
    goto LAB_00937298;
  }
  bVar1 = DAT_00012e90;
  if ((param_2 != (undefined8 *)0x0) &&
     (bVar1 = *(byte *)(param_2 + 0x25d2), *(byte *)(param_2 + 0x25d2) == 3)) goto LAB_00937154;
  uVar6 = (uint)bVar1;
  if (uVar6 != 0xff) {
    puVar4 = &uStack_22;
LAB_009370f0:
    (*(code *)(&PTR_FUN_00d3e1b0)[uVar6])(puVar4,param_2);
  }
LAB_009370fc:
  *(undefined1 *)(param_2 + 0x25d2) = 0xff;
  if (param_2 == (undefined8 *)0x0) {
LAB_009372c0:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  param_2[0xd] = 0;
  param_2[6] = 0;
  param_2[5] = 0;
  param_2[4] = 0;
  param_2[3] = 0;
  param_2[8] = 0;
  param_2[7] = 0;
  param_2[10] = 0;
  param_2[9] = 0;
  param_2[0xc] = 0;
  param_2[0xb] = 0;
  param_2[2] = 0;
  param_2[1] = 0;
  *param_2 = param_2 + 1;
  param_2[5] = 0;
  param_2[4] = 0;
  param_2[3] = param_2 + 4;
  param_2[7] = 0;
  param_2[6] = 0;
  param_2[9] = 0;
  param_2[8] = 0;
  param_2[0xb] = 0;
  param_2[10] = 0;
  *(undefined8 *)((long)param_2 + 0x61) = 0;
  *(undefined8 *)((long)param_2 + 0x59) = 0;
  *(undefined1 *)(param_2 + 0x25d2) = 3;
LAB_00937154:
  FUN_0093827c(param_1,param_2,param_3);
  return;
}


// ===== 009372ec  FUN_009372ec =====

void FUN_009372ec(undefined4 *param_1)

{
  void *__s;
  
  *(undefined8 *)(param_1 + 2) = 0;
  *param_1 = 0xffffffff;
  __s = operator_new(0x12e98);
  memset(__s,0,0x12e98);
  *(void **)(param_1 + 4) = __s;
  return;
}


// ===== 00937340  FUN_00937340 =====

void FUN_00937340(undefined4 *param_1,undefined8 param_2)

{
  void *__s;
  
  *(undefined8 *)(param_1 + 2) = param_2;
  *param_1 = 0xffffffff;
  __s = operator_new(0x12e98);
  memset(__s,0,0x12e98);
  *(void **)(param_1 + 4) = __s;
  return;
}


// ===== 00937394  FUN_00937394 =====

void FUN_00937394(long param_1)

{
  void *pvVar1;
  undefined1 uStack_1;
  
  pvVar1 = *(void **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (pvVar1 != (void *)0x0) {
    if ((ulong)*(byte *)((long)pvVar1 + 0x12e90) != 0xff) {
      (*(code *)(&PTR_FUN_00d3e1b0)[*(byte *)((long)pvVar1 + 0x12e90)])(&uStack_1,pvVar1);
    }
    operator_delete(pvVar1);
  }
  return;
}


// ===== 009373f8  FUN_009373f8 =====

void FUN_009373f8(undefined8 *param_1,uint *param_2,long *param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar1 = *param_2;
  if ((uVar1 != 0xffffffff) && (uVar4 = FUN_0084f7f0(param_3), (uVar4 & 0xffff) != (uVar1 & 0xffff))
     ) {
    iVar2 = (int)(short)((short)uVar1 - (short)uVar4);
    bVar3 = (uVar4 & 0xffff) < (uVar1 & 0xffff);
    if ((uVar1 & 0xffff) - (uVar4 & 0xffff) != 0x8000) {
      bVar3 = iVar2 != -1 && iVar2 + 1 < 0 == SCARRY4(iVar2,1);
    }
    if (bVar3) {
      *param_1 = 0;
      if (param_3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00937484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_3 + 8))(param_3);
        return;
      }
      return;
    }
  }
  uVar5 = *(undefined8 *)(param_2 + 4);
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  *param_1 = &DAT_aaaaaaaaaaaaaaaa;
  param_1[3] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00936d74(param_1,uVar5,param_3);
  FUN_009374d0(param_2,param_1);
  return;
}


// ===== 009374d0  FUN_009374d0 =====

void FUN_009374d0(long param_1,ulong *param_2)

{
  ulong uVar1;
  ulong *puVar2;
  code *pcVar3;
  ulong uVar4;
  
  puVar2 = param_2 + 1;
  if ((*param_2 & 1) != 0) {
    puVar2 = (ulong *)param_2[1];
  }
  uVar4 = *param_2 & 0x3ffffffffffffffe;
  uVar1 = uVar4 << 2;
  do {
    if (uVar4 == 0) {
      return;
    }
    *(long *)(*puVar2 + 0x9e0) = *(long *)(param_1 + 8) + *(long *)(*puVar2 + 0x9e0);
    uVar4 = *puVar2;
    if (*(long *)(uVar4 + 0x188) != 0) {
      *(long *)(uVar4 + 400) = *(long *)(uVar4 + 400) + *(long *)(param_1 + 8);
      uVar4 = *puVar2;
      if (1 < *(ulong *)(uVar4 + 0x188)) {
        *(long *)(uVar4 + 0x198) = *(long *)(uVar4 + 0x198) + *(long *)(param_1 + 8);
        uVar4 = *puVar2;
        if (2 < *(ulong *)(uVar4 + 0x188)) {
          *(long *)(uVar4 + 0x1a0) = *(long *)(uVar4 + 0x1a0) + *(long *)(param_1 + 8);
          uVar4 = *puVar2;
          if (3 < *(ulong *)(uVar4 + 0x188)) {
            *(long *)(uVar4 + 0x1a8) = *(long *)(uVar4 + 0x1a8) + *(long *)(param_1 + 8);
            uVar4 = *puVar2;
            if ((4 < *(ulong *)(uVar4 + 0x188)) &&
               (*(long *)(uVar4 + 0x1b0) = *(long *)(uVar4 + 0x1b0) + *(long *)(param_1 + 8),
               5 < *(ulong *)(*puVar2 + 0x188))) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(0x5512,0x9375c4);
              (*pcVar3)();
            }
          }
        }
      }
    }
    uVar1 = uVar1 - 8;
    puVar2 = puVar2 + 1;
    uVar4 = uVar1;
  } while( true );
}


// ===== 009375c4  FUN_009375c4 =====

void FUN_009375c4(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x10);
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  *param_1 = &DAT_aaaaaaaaaaaaaaaa;
  param_1[3] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  if ((lVar1 == 0) || ((&DAT_00012e90)[lVar1] != '\x03')) {
    *param_1 = 0;
  }
  else {
    FUN_00939244(param_1);
  }
  FUN_009374d0(param_2,param_1);
  return;
}


// ===== 00937624  FUN_00937624 =====

void FUN_00937624(uint *param_1,ushort param_2)

{
  ushort local_1c [2];
  ushort *local_18;
  
  *param_1 = (uint)param_2;
  local_1c[0] = param_2;
  if ((ulong)(byte)(&DAT_00012e90)[*(long *)(param_1 + 4)] != 0xff) {
    local_18 = local_1c;
    (*(code *)(&PTR_FUN_00d3e180)[(byte)(&DAT_00012e90)[*(long *)(param_1 + 4)]])(&local_18);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_005ee558();
}


// ===== 00937688  FUN_00937688 =====

void FUN_00937688(void)

{
  return;
}


// ===== 00937690  FUN_00937690 =====

void FUN_00937690(void)

{
  return;
}


// ===== 00937698  FUN_00937698 =====

void FUN_00937698(void)

{
  return;
}


// ===== 009376a0  FUN_009376a0 =====

void FUN_009376a0(undefined8 *param_1,undefined8 param_2)

{
  FUN_009393f4(param_2,*(undefined2 *)*param_1);
  return;
}


// ===== 009376b8  FUN_009376b8 =====

void FUN_009376b8(undefined8 *param_1,undefined8 param_2)

{
  FUN_0093b6a0(param_2,*(undefined2 *)*param_1);
  return;
}


// ===== 009376d0  FUN_009376d0 =====

void FUN_009376d0(undefined8 *param_1,undefined8 param_2)

{
  FUN_0093e9b8(param_2,*(undefined2 *)*param_1);
  return;
}


// ===== 009376e8  FUN_009376e8 =====

void FUN_009376e8(void)

{
  return;
}


// ===== 009376f0  FUN_009376f0 =====

void FUN_009376f0(void)

{
  return;
}


// ===== 009376f8  FUN_009376f8 =====

void FUN_009376f8(void)

{
  return;
}


// ===== 00937700  FUN_00937700 =====

void FUN_00937700(undefined8 param_1,long param_2)

{
  long local_8;
  
  FUN_0060c1ec(param_2 + 0x30);
  local_8 = param_2 + 0x18;
  FUN_00937884(&local_8,*(undefined8 *)(param_2 + 0x20));
  local_8 = param_2;
  FUN_009378f8(&local_8,*(undefined8 *)(param_2 + 8));
  return;
}


// ===== 00937750  FUN_00937750 =====

void FUN_00937750(undefined8 param_1,long param_2)

{
  long local_8;
  
  local_8 = param_2 + 0x50;
  FUN_00937b68(&local_8,*(undefined8 *)(param_2 + 0x58));
  FUN_0093796c(param_2 + 0x20);
  local_8 = param_2 + 8;
  FUN_00937bdc(&local_8,*(undefined8 *)(param_2 + 0x10));
  return;
}


// ===== 009377a4  FUN_009377a4 =====

void FUN_009377a4(undefined8 param_1,long param_2)

{
  long local_18;
  
  local_18 = param_2 + 0x12e58;
  FUN_00937bdc(&local_18,*(undefined8 *)(param_2 + 0x12e60));
  local_18 = param_2 + 0x12e40;
  FUN_00937bdc(&local_18,*(undefined8 *)(param_2 + 0x12e48));
  local_18 = param_2 + 0x12e28;
  FUN_00937bdc(&local_18,*(undefined8 *)(param_2 + 0x12e30));
  local_18 = param_2 + 0x12e10;
  FUN_00937bdc(&local_18,*(undefined8 *)(param_2 + 0x12e18));
  local_18 = param_2 + 0x12df8;
  FUN_00937bdc(&local_18,*(undefined8 *)(param_2 + 0x12e00));
  local_18 = param_2 + 0x12de0;
  FUN_00937e4c(&local_18,*(undefined8 *)(param_2 + 0x12de8));
  local_18 = param_2 + 0x12dc8;
  FUN_00937ec0(&local_18,*(undefined8 *)(param_2 + 0x12dd0));
  FUN_00937c50(param_2);
  return;
}


// ===== 00937884  FUN_00937884 =====

void FUN_00937884(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_00937884(param_1,*param_2);
      if (param_2 == (undefined8 *)0xffffffffffffffe6) {
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


// ===== 009378f8  FUN_009378f8 =====

void FUN_009378f8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_009378f8(param_1,*param_2);
      if (param_2 == (undefined8 *)0xffffffffffffffe6) {
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


// ===== 0093796c  FUN_0093796c =====

void FUN_0093796c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 *puVar4;
  
  puVar9 = (undefined8 *)param_1[1];
  puVar6 = (undefined8 *)param_1[2];
  puVar4 = puVar9;
  if (puVar9 != puVar6) {
    uVar7 = param_1[4];
    plVar10 = puVar9 + (uVar7 >> 8);
    lVar3 = *plVar10 + (uVar7 & 0xff) * 0x10;
    lVar1 = puVar9[param_1[5] + uVar7 >> 8] + (param_1[5] + uVar7 & 0xff) * 0x10;
    puVar4 = puVar6;
    if (lVar3 != lVar1) {
      do {
        if (lVar3 == 0) goto LAB_00937b08;
        plVar2 = *(long **)(lVar3 + 8);
        *(undefined8 *)(lVar3 + 8) = 0;
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 8))();
        }
        lVar3 = lVar3 + 0x10;
        if (lVar3 - *plVar10 == 0x1000) {
          plVar10 = plVar10 + 1;
          lVar3 = *plVar10;
        }
      } while (lVar3 != lVar1);
      puVar9 = (undefined8 *)param_1[1];
      puVar6 = (undefined8 *)param_1[2];
      puVar4 = puVar6;
    }
  }
  param_1[5] = 0;
  lVar3 = (long)puVar4 - (long)puVar9;
  while (uVar7 = lVar3 >> 3, 2 < uVar7) {
    operator_delete((void *)*puVar9);
    puVar6 = (undefined8 *)param_1[2];
    puVar9 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = puVar9;
    lVar3 = (long)puVar6 - (long)puVar9;
  }
  if (uVar7 == 1) {
    uVar5 = 0x80;
  }
  else {
    if (uVar7 != 2) goto LAB_00937a80;
    uVar5 = 0x100;
  }
  param_1[4] = uVar5;
LAB_00937a80:
  puVar4 = puVar6;
  if (puVar9 != puVar6) {
    do {
      puVar4 = puVar9 + 1;
      operator_delete((void *)*puVar9);
      puVar9 = puVar4;
    } while (puVar4 != puVar6);
    puVar6 = (undefined8 *)param_1[1];
    puVar4 = (undefined8 *)param_1[2];
  }
  uVar8 = (ulong)((long)puVar4 + (-8 - ((long)puVar4 << 0x3d))) >> 3;
  uVar7 = (ulong)(((long)puVar6 - (long)puVar4 << 0x3d) - ((long)puVar6 - (long)puVar4)) >> 3;
  if (uVar8 <= uVar7) {
    uVar7 = uVar8;
  }
  if ((1 < uVar7) && ((((int)puVar6 - (int)puVar4 | -(int)puVar4) & 7U) == 0)) {
    uVar7 = uVar7 & 0x1ffffffffffffffe;
    puVar4 = puVar4 + -uVar7;
    do {
      uVar7 = uVar7 - 2;
    } while (uVar7 != 0);
  }
  do {
    if (puVar4 == puVar6) {
      param_1[2] = puVar4;
      if ((void *)*param_1 != (void *)0x0) {
        operator_delete((void *)*param_1);
        return;
      }
      return;
    }
    puVar4 = puVar4 + -1;
  } while (puVar4 != (undefined8 *)0x0);
LAB_00937b08:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00937b68  FUN_00937b68 =====

void FUN_00937b68(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_00937b68(param_1,*param_2);
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


// ===== 00937bdc  FUN_00937bdc =====

void FUN_00937bdc(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_00937bdc(param_1,*param_2);
      if (param_2 == (undefined8 *)0xffffffffffffffe6) {
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


// ===== 00937c50  FUN_00937c50 =====

void FUN_00937c50(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 *puVar4;
  
  puVar9 = (undefined8 *)param_1[1];
  puVar6 = (undefined8 *)param_1[2];
  puVar4 = puVar9;
  if (puVar9 != puVar6) {
    uVar7 = param_1[4];
    plVar10 = puVar9 + (uVar7 >> 8);
    lVar3 = *plVar10 + (uVar7 & 0xff) * 0x10;
    lVar1 = puVar9[param_1[5] + uVar7 >> 8] + (param_1[5] + uVar7 & 0xff) * 0x10;
    puVar4 = puVar6;
    if (lVar3 != lVar1) {
      do {
        if (lVar3 == 0) goto LAB_00937dec;
        plVar2 = *(long **)(lVar3 + 8);
        *(undefined8 *)(lVar3 + 8) = 0;
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 8))();
        }
        lVar3 = lVar3 + 0x10;
        if (lVar3 - *plVar10 == 0x1000) {
          plVar10 = plVar10 + 1;
          lVar3 = *plVar10;
        }
      } while (lVar3 != lVar1);
      puVar9 = (undefined8 *)param_1[1];
      puVar6 = (undefined8 *)param_1[2];
      puVar4 = puVar6;
    }
  }
  param_1[5] = 0;
  lVar3 = (long)puVar4 - (long)puVar9;
  while (uVar7 = lVar3 >> 3, 2 < uVar7) {
    operator_delete((void *)*puVar9);
    puVar6 = (undefined8 *)param_1[2];
    puVar9 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = puVar9;
    lVar3 = (long)puVar6 - (long)puVar9;
  }
  if (uVar7 == 1) {
    uVar5 = 0x80;
  }
  else {
    if (uVar7 != 2) goto LAB_00937d64;
    uVar5 = 0x100;
  }
  param_1[4] = uVar5;
LAB_00937d64:
  puVar4 = puVar6;
  if (puVar9 != puVar6) {
    do {
      puVar4 = puVar9 + 1;
      operator_delete((void *)*puVar9);
      puVar9 = puVar4;
    } while (puVar4 != puVar6);
    puVar6 = (undefined8 *)param_1[1];
    puVar4 = (undefined8 *)param_1[2];
  }
  uVar8 = (ulong)((long)puVar4 + (-8 - ((long)puVar4 << 0x3d))) >> 3;
  uVar7 = (ulong)(((long)puVar6 - (long)puVar4 << 0x3d) - ((long)puVar6 - (long)puVar4)) >> 3;
  if (uVar8 <= uVar7) {
    uVar7 = uVar8;
  }
  if ((1 < uVar7) && ((((int)puVar6 - (int)puVar4 | -(int)puVar4) & 7U) == 0)) {
    uVar7 = uVar7 & 0x1ffffffffffffffe;
    puVar4 = puVar4 + -uVar7;
    do {
      uVar7 = uVar7 - 2;
    } while (uVar7 != 0);
  }
  do {
    if (puVar4 == puVar6) {
      param_1[2] = puVar4;
      if ((void *)*param_1 != (void *)0x0) {
        operator_delete((void *)*param_1);
        return;
      }
      return;
    }
    puVar4 = puVar4 + -1;
  } while (puVar4 != (undefined8 *)0x0);
LAB_00937dec:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00937e4c  FUN_00937e4c =====

void FUN_00937e4c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_00937e4c(param_1,*param_2);
      if (param_2 == (undefined8 *)0xffffffffffffffe6) {
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


// ===== 00937ec0  FUN_00937ec0 =====

void FUN_00937ec0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_00937ec0(param_1,*param_2);
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


// ===== 00937f34  FUN_00937f34 =====

undefined8 * FUN_00937f34(undefined8 *param_1)

{
  undefined1 uStack_21;
  
  if ((ulong)*(byte *)(param_1 + 0x25d2) != 0xff) {
    (*(code *)(&PTR_FUN_00d3e1b0)[*(byte *)(param_1 + 0x25d2)])(&uStack_21,param_1);
  }
  *(undefined1 *)(param_1 + 0x25d2) = 0xff;
  if (param_1 != (undefined8 *)0x0) {
    param_1[0xd] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = param_1 + 1;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[3] = param_1 + 4;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[0xb] = 0;
    param_1[10] = 0;
    *(undefined1 *)(param_1 + 0x25d2) = 3;
    *(undefined8 *)((long)param_1 + 0x61) = 0;
    *(undefined8 *)((long)param_1 + 0x59) = 0;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00937ffc  FUN_00937ffc =====

void FUN_00937ffc(undefined8 *param_1,ulong *param_2,long param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  ulong uVar8;
  uint uVar9;
  
  *(undefined4 *)(param_3 + 0xc0) = 0;
  *(undefined1 *)(param_3 + 0xc4) = 1;
  param_4 = param_4 & 0x7fff;
  uVar8 = (ulong)param_4;
  if ((*(byte *)((long)param_2 + 10) & 1) != 0) {
    uVar4 = (ushort)param_2[1];
    uVar5 = param_4 - uVar4;
    uVar9 = (uint)uVar4;
    uVar6 = uVar9 - param_4;
    uVar1 = uVar5 ^ 0xffff8000;
    if (uVar4 < param_4 || uVar6 == 0) {
      uVar1 = uVar5;
    }
    uVar5 = uVar6 ^ 0x8000;
    if (param_4 <= uVar9) {
      uVar5 = uVar6;
    }
    uVar6 = uVar1 & 0xffff;
    uVar2 = uVar6;
    if ((uVar5 & 0xffff) <= uVar6) {
      uVar2 = uVar5 & 0xffff;
    }
    bVar7 = uVar9 < param_4;
    if (uVar2 != 0x4000) {
      bVar7 = uVar6 < 0x4001;
    }
    uVar8 = (ulong)uVar1 & 0xffff;
    if (!bVar7) {
      uVar8 = ((ulong)uVar1 & 0xffff) - 0x8000;
    }
    uVar8 = uVar8 + *param_2;
  }
  *(short *)(param_2 + 1) = (short)param_4;
  *param_2 = uVar8;
  *(undefined1 *)((long)param_2 + 10) = 1;
  iVar3 = *(int *)(param_3 + 0x20);
  *(ulong *)(param_3 + 0x9e0) = uVar8;
  param_1[3] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  *(ulong *)(param_3 + 0x188) = (ulong)(iVar3 != 3);
  *(ulong *)(param_3 + 400) = uVar8 - 1;
  *param_1 = 2;
  param_1[1] = param_3;
  return;
}


// ===== 009380b8  FUN_009380b8 =====

void FUN_009380b8(undefined8 *param_1,undefined8 param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  long *plVar5;
  
  lVar2 = param_4[1];
  *param_1 = 0;
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[3] = &DAT_aaaaaaaaaaaaaaaa;
  if ((int)lVar2 < 5) {
    param_3[0x13c] = *param_4;
    lVar2 = param_4[1];
    *(undefined1 *)((long)param_3 + 0xc4) = 1;
    *(int *)(param_3 + 0x18) = (int)lVar2;
    if (*(int *)((long)param_4 + 0xc) != 0xff) {
      *(int *)(param_3 + 0x19) = *(int *)((long)param_4 + 0xc);
      *(undefined1 *)((long)param_3 + 0xcc) = 1;
    }
    if ((ulong)param_4[8] < 0xc) {
      param_3[0x31] = (ulong)param_4[8] >> 1;
      if (1 < (ulong)param_4[8]) {
        plVar5 = param_4 + 9;
        plVar1 = plVar5;
        if ((param_4[8] & 1U) != 0) {
          plVar1 = (long *)*plVar5;
        }
        param_3[0x32] = *plVar1;
        if (3 < (ulong)param_4[8]) {
          plVar1 = plVar5;
          if ((param_4[8] & 1U) != 0) {
            plVar1 = (long *)param_4[9];
          }
          param_3[0x33] = plVar1[1];
          if (5 < (ulong)param_4[8]) {
            plVar1 = plVar5;
            if ((param_4[8] & 1U) != 0) {
              plVar1 = (long *)param_4[9];
            }
            param_3[0x34] = plVar1[2];
            if (7 < (ulong)param_4[8]) {
              plVar1 = plVar5;
              if ((param_4[8] & 1U) != 0) {
                plVar1 = (long *)param_4[9];
              }
              param_3[0x35] = plVar1[3];
              if (9 < (ulong)param_4[8]) {
                if ((param_4[8] & 1U) != 0) {
                  plVar5 = (long *)param_4[9];
                }
                param_3[0x36] = plVar5[4];
                if (0xb < (ulong)param_4[8]) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(0x5512,0x93827c);
                  (*pcVar3)();
                }
              }
            }
          }
        }
      }
      *param_1 = 2;
      param_1[1] = param_3;
      return;
    }
    uVar4 = FUN_004022fc();
    if ((uVar4 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,"../../modules/video_coding/rtp_generic_ref_finder.cc",0x16a,
                   "Too many dependencies in generic descriptor.");
    }
  }
  else {
    uVar4 = FUN_004022fc();
    if ((uVar4 & 1) == 0) {
      FUN_00623bb0(&DAT_001f1906,"../../modules/video_coding/rtp_generic_ref_finder.cc",0x102,
                   "Spatial index ",(int)param_4[1]," is unsupported.");
    }
  }
  if (param_3 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x009381a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 8))(param_3);
  return;
}


// ===== 0093827c  FUN_0093827c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0093827c(undefined8 *param_1,long param_2,long *param_3)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  iVar2 = FUN_009383a8();
  *param_1 = 0;
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[3] = &DAT_aaaaaaaaaaaaaaaa;
  if (iVar2 == 2) {
    if (param_3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00938304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_3 + 8))(param_3);
      return;
    }
  }
  else {
    if (iVar2 == 1) {
      *param_1 = 2;
      param_1[1] = param_3;
      FUN_00938a30(param_2,param_1);
      return;
    }
    if (100 < *(ulong *)(param_2 + 0x58)) {
      FUN_0093894c(param_2 + 0x30);
    }
    uVar3 = *(ulong *)(param_2 + 0x50);
    if (uVar3 == 0) {
      FUN_00939514(param_2 + 0x30);
      uVar3 = *(ulong *)(param_2 + 0x50);
    }
    plVar1 = (long *)(*(long *)(param_2 + 0x38) + (uVar3 >> 9) * 8);
    lVar4 = *plVar1;
    lVar5 = 0;
    if (*(long *)(param_2 + 0x38) != *(long *)(param_2 + 0x40)) {
      lVar5 = lVar4 + (uVar3 & 0x1ff) * 8;
    }
    if (lVar5 == lVar4) {
      lVar5 = plVar1[-1] + 0x1000;
    }
    if ((long *)(lVar5 + -8) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *(long *)(lVar5 + -8) = (long)param_3;
    lVar5 = *(long *)(param_2 + 0x50) + _DAT_001f3ec0;
    *(long *)(param_2 + 0x58) = *(long *)(param_2 + 0x58) + _UNK_001f3ec8;
    *(long *)(param_2 + 0x50) = lVar5;
  }
  return;
}


// ===== 009383a8  FUN_009383a8 =====

undefined8 FUN_009383a8(long *param_1,long param_2)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  long lVar4;
  int iVar5;
  bool bVar6;
  short sVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined8 *puVar13;
  ulong uVar14;
  uint uVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  ulong uVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  
  if (*(int *)(param_2 + 0x20) == 3) {
    uVar10 = FUN_0084f7fc(param_2);
    sVar3 = (short)uVar10;
    uVar11 = FUN_0084f7fc(param_2);
    iVar12 = FUN_0084f7fc(param_2);
    plVar16 = param_1 + 1;
    plVar20 = (long *)*plVar16;
    plVar18 = plVar16;
    if (plVar20 == (long *)0x0) {
LAB_009384ac:
      puVar13 = (undefined8 *)operator_new(0x20);
      if (puVar13 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *(short *)((long)puVar13 + 0x1a) = sVar3;
      *puVar13 = 0;
      puVar13[1] = 0;
      *(uint *)((long)puVar13 + 0x1c) = uVar11 & 0xffff | iVar12 << 0x10;
      puVar13[2] = plVar16;
      *plVar18 = (long)puVar13;
      if (*(long *)*param_1 != 0) {
        *param_1 = *(long *)*param_1;
        puVar13 = (undefined8 *)*plVar18;
      }
      FUN_005d5b94(param_1[1],puVar13);
      param_1[2] = param_1[2] + 1;
    }
    else {
      uVar2 = *(ushort *)((long)plVar20 + 0x1a);
      if ((uint)uVar2 != (uVar10 & 0xffff)) {
        plVar16 = plVar20;
        do {
          uVar15 = (uint)uVar2;
          iVar5 = (int)(short)(uVar2 - sVar3);
          bVar6 = (uVar10 & 0xffff) < uVar15;
          if (uVar15 - (uVar10 & 0xffff) != 0x8000) {
            bVar6 = iVar5 != -1 && iVar5 + 1 < 0 == SCARRY4(iVar5,1);
          }
          if (bVar6) {
            plVar20 = (long *)*plVar16;
            plVar18 = plVar16;
            if (plVar20 == (long *)0x0) goto LAB_009384ac;
          }
          else {
            iVar5 = (int)(short)(sVar3 - uVar2);
            bVar6 = uVar15 < (uVar10 & 0xffff);
            if ((uVar10 & 0xffff) - uVar15 != 0x8000) {
              bVar6 = iVar5 != -1 && iVar5 + 1 < 0 == SCARRY4(iVar5,1);
            }
            if (!bVar6) break;
            plVar20 = (long *)plVar16[1];
            if (plVar20 == (long *)0x0) {
              plVar18 = plVar16 + 1;
              goto LAB_009384ac;
            }
          }
          uVar2 = *(ushort *)((long)plVar20 + 0x1a);
          plVar16 = plVar20;
        } while ((uint)uVar2 != (uVar10 & 0xffff));
      }
    }
  }
  if (param_1[2] != 0) {
    iVar12 = FUN_0084f7fc(param_2);
    plVar16 = param_1 + 1;
    plVar18 = plVar16;
    if ((long *)*plVar16 != (long *)0x0) {
      uVar10 = iVar12 - 100;
      plVar20 = (long *)*plVar16;
      plVar17 = plVar16;
      do {
        while( true ) {
          plVar21 = plVar20;
          uVar2 = *(ushort *)((long)plVar21 + 0x1a);
          plVar18 = plVar21;
          if ((uint)uVar2 == (uVar10 & 0xffff)) goto LAB_009385ac;
          iVar12 = (int)(short)(uVar2 - (short)uVar10);
          bVar6 = (uVar10 & 0xffff) < (uint)uVar2;
          if ((uint)uVar2 - (uVar10 & 0xffff) != 0x8000) {
            bVar6 = iVar12 != -1 && iVar12 + 1 < 0 == SCARRY4(iVar12,1);
          }
          if (bVar6) break;
          iVar12 = (int)(short)((short)uVar10 - uVar2);
          bVar6 = (uint)uVar2 < (uVar10 & 0xffff);
          if ((uVar10 & 0xffff) - (uint)uVar2 != 0x8000) {
            bVar6 = iVar12 != -1 && iVar12 + 1 < 0 == SCARRY4(iVar12,1);
          }
          if ((!bVar6) ||
             (plVar20 = (long *)plVar21[1], plVar18 = plVar17, (long *)plVar21[1] == (long *)0x0))
          goto LAB_009385ac;
        }
        plVar20 = (long *)*plVar21;
        plVar17 = plVar21;
      } while ((long *)*plVar21 != (long *)0x0);
    }
LAB_009385ac:
    plVar20 = (long *)*param_1;
    while ((plVar20 != plVar18 && (lVar4 = param_1[2] + -1, param_1[2] != 0 && lVar4 != 0))) {
      plVar17 = (long *)plVar20[1];
      plVar21 = plVar20;
      if ((long *)plVar20[1] == (long *)0x0) {
        do {
          plVar22 = (long *)plVar21[2];
          bVar6 = plVar21 != (long *)*plVar22;
          plVar21 = plVar22;
        } while (bVar6);
      }
      else {
        do {
          plVar22 = plVar17;
          plVar17 = (long *)*plVar22;
        } while ((long *)*plVar22 != (long *)0x0);
      }
      if ((long *)*param_1 == plVar20) {
        *param_1 = (long)plVar22;
      }
      param_1[2] = lVar4;
      FUN_005d5d48(param_1[1],plVar20);
      if (plVar20 == (long *)0xffffffffffffffe6) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      operator_delete(plVar20);
      plVar20 = plVar22;
    }
    uVar10 = FUN_0084f7fc(param_2);
    if ((long *)*plVar16 != (long *)0x0) {
      plVar18 = (long *)*plVar16;
LAB_00938658:
      do {
        plVar20 = plVar18;
        uVar2 = *(ushort *)((long)plVar20 + 0x1a);
        if ((uint)uVar2 == (uVar10 & 0xffff)) {
LAB_009386c8:
          plVar18 = (long *)plVar20[1];
          while (plVar20 = plVar18, plVar20 != (long *)0x0) {
            plVar16 = plVar20;
            plVar18 = (long *)*plVar20;
          }
          break;
        }
        iVar12 = (int)(short)(uVar2 - (short)uVar10);
        bVar6 = (uVar10 & 0xffff) < (uint)uVar2;
        if ((uint)uVar2 - (uVar10 & 0xffff) != 0x8000) {
          bVar6 = iVar12 != -1 && iVar12 + 1 < 0 == SCARRY4(iVar12,1);
        }
        if (bVar6) goto LAB_0093864c;
        iVar12 = (int)(short)((short)uVar10 - uVar2);
        bVar6 = (uint)uVar2 < (uVar10 & 0xffff);
        if ((uVar10 & 0xffff) - (uint)uVar2 != 0x8000) {
          bVar6 = iVar12 != -1 && iVar12 + 1 < 0 == SCARRY4(iVar12,1);
        }
        if (!bVar6) goto LAB_009386c8;
        plVar18 = (long *)plVar20[1];
      } while ((long *)plVar20[1] != (long *)0x0);
    }
LAB_009386dc:
    if (plVar16 == (long *)*param_1) {
      uVar19 = FUN_004022fc();
      if ((uVar19 & 1) == 0) {
        uVar8 = FUN_0084f7f0(param_2);
        uVar9 = FUN_0084f7fc(param_2);
        FUN_00623bb0(&DAT_001f4ea6,"../../modules/video_coding/rtp_seq_num_only_ref_finder.cc",0x242
                     ,"Generic frame with packet range [",uVar8,&DAT_001e1644,uVar9,
                     "] has no GoP, dropping frame.");
      }
      return 2;
    }
    plVar18 = (long *)*plVar16;
    if ((long *)*plVar16 == (long *)0x0) {
      do {
        plVar20 = (long *)plVar16[2];
        bVar6 = plVar16 == (long *)*plVar20;
        plVar16 = plVar20;
      } while (bVar6);
    }
    else {
      do {
        plVar20 = plVar18;
        plVar18 = (long *)plVar20[1];
      } while ((long *)plVar20[1] != (long *)0x0);
    }
    uVar2 = *(ushort *)((long)plVar20 + 0x1c);
    uVar19 = (ulong)uVar2;
    if ((*(int *)(param_2 + 0x20) != 4) ||
       (sVar3 = *(short *)((long)plVar20 + 0x1e), sVar7 = FUN_0084f7f0(param_2),
       sVar3 == (short)(sVar7 + -1))) {
      uVar14 = FUN_0084f7fc(param_2);
      *(ulong *)(param_2 + 0x9e0) = uVar14 & 0xffff;
      *(ulong *)(param_2 + 0x188) = (ulong)(*(int *)(param_2 + 0x20) == 4);
      if ((*(byte *)((long)param_1 + 0x6a) & 1) != 0) {
        uVar10 = (uint)uVar2 - (uint)*(ushort *)(param_1 + 0xd);
        iVar12 = (int)(short)uVar10;
        bVar6 = (uint)*(ushort *)(param_1 + 0xd) <= (uint)uVar2 && uVar10 != 0;
        if (uVar10 != 0x8000) {
          bVar6 = iVar12 != -1 && iVar12 + 1 < 0 == SCARRY4(iVar12,1);
        }
        uVar19 = (ulong)uVar10 & 0xffff;
        if (!bVar6) {
          uVar19 = (ulong)uVar10 & 0xffff | 0xffffffffffff0000;
        }
        uVar19 = uVar19 + param_1[0xc];
      }
      param_1[0xc] = uVar19;
      *(ushort *)(param_1 + 0xd) = uVar2;
      *(undefined1 *)((long)param_1 + 0x6a) = 1;
      uVar14 = *(ulong *)(param_2 + 0x9e0);
      *(ulong *)(param_2 + 400) = uVar19;
      uVar1 = (ushort)uVar14;
      if (uVar2 != uVar1) {
        iVar12 = (int)(short)(uVar1 - uVar2);
        bVar6 = uVar2 < uVar1;
        if (((uint)uVar14 & 0xffff) - (uint)uVar2 != 0x8000) {
          bVar6 = iVar12 != -1 && iVar12 + 1 < 0 == SCARRY4(iVar12,1);
        }
        if (bVar6) {
          *(ushort *)((long)plVar20 + 0x1c) = uVar1;
          *(short *)((long)plVar20 + 0x1e) = (short)*(undefined8 *)(param_2 + 0x9e0);
          uVar14 = (ulong)*(ushort *)(param_2 + 0x9e0);
        }
      }
      FUN_00938bb0(param_1,uVar14);
      *(undefined4 *)(param_2 + 0xc0) = 0;
      *(undefined1 *)(param_2 + 0xc4) = 1;
      uVar19 = *(ulong *)(param_2 + 0x9e0);
      uVar10 = (uint)uVar19;
      if ((*(byte *)((long)param_1 + 0x6a) & 1) == 0) {
        uVar14 = uVar19 & 0xffff;
      }
      else {
        uVar2 = *(ushort *)(param_1 + 0xd);
        uVar11 = uVar10 - uVar2;
        iVar12 = (int)(short)uVar11;
        bVar6 = (uint)uVar2 < (uVar10 & 0xffff);
        if ((uVar10 & 0xffff) - (uint)uVar2 != 0x8000) {
          bVar6 = iVar12 != -1 && iVar12 + 1 < 0 == SCARRY4(iVar12,1);
        }
        uVar14 = (ulong)uVar11 & 0xffff;
        if (!bVar6) {
          uVar14 = (ulong)uVar11 & 0xffff | 0xffffffffffff0000;
        }
        uVar14 = uVar14 + param_1[0xc];
      }
      param_1[0xc] = uVar14;
      *(short *)(param_1 + 0xd) = (short)uVar19;
      *(undefined1 *)((long)param_1 + 0x6a) = 1;
      *(ulong *)(param_2 + 0x9e0) = uVar14;
      return 1;
    }
  }
  return 0;
LAB_0093864c:
  plVar18 = (long *)*plVar20;
  plVar16 = plVar20;
  if ((long *)*plVar20 == (long *)0x0) goto LAB_009386dc;
  goto LAB_00938658;
}


// ===== 0093894c  FUN_0093894c =====

void FUN_0093894c(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  
  if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/deque:2199: libc++ Hardening assertion !empty() failed: deque::pop_back called on an empty deque\n"
              );
  }
  uVar6 = (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) - 1;
  plVar1 = (long *)(*(long *)(*(long *)(param_1 + 8) + (uVar6 >> 9) * 8) + (uVar6 & 0x1ff) * 8);
  if (plVar1 != (long *)0x0) {
    plVar5 = (long *)*plVar1;
    *plVar1 = 0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    lVar2 = *(long *)(param_1 + 0x10);
    lVar3 = *(long *)(param_1 + 0x28);
    lVar4 = 0;
    if (lVar2 != *(long *)(param_1 + 8)) {
      lVar4 = (lVar2 - *(long *)(param_1 + 8)) * 0x40 + -1;
    }
    *(long *)(param_1 + 0x28) = lVar3 + -1;
    if (0x3ff < (lVar4 - (lVar3 + *(long *)(param_1 + 0x20))) + 1U) {
      operator_delete(*(void **)(lVar2 + -8));
      lVar4 = *(long *)(param_1 + 0x10) + -8;
      if (lVar4 == 0) goto LAB_00938a08;
      *(long *)(param_1 + 0x10) = lVar4;
    }
    return;
  }
LAB_00938a08:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00938a30  FUN_00938a30 =====

void FUN_00938a30(long param_1,ulong *param_2)

{
  ulong *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  ulong *puVar9;
  bool bVar10;
  undefined1 auVar11 [16];
  
  lVar3 = *(long *)(param_1 + 0x38);
  lVar5 = *(long *)(param_1 + 0x40);
LAB_00938a68:
  plVar7 = (long *)(lVar3 + (*(ulong *)(param_1 + 0x50) >> 9) * 8);
  if (lVar3 == lVar5) {
    lVar8 = 0;
  }
  else {
    lVar8 = *plVar7 + (*(ulong *)(param_1 + 0x50) & 0x1ff) * 8;
  }
  auVar11._8_8_ = lVar8;
  auVar11._0_8_ = plVar7;
  bVar10 = false;
  do {
    puVar9 = auVar11._8_8_;
    plVar7 = auVar11._0_8_;
    if (lVar3 == lVar5) {
      if (puVar9 == (ulong *)0x0) break;
    }
    else {
      uVar6 = *(long *)(param_1 + 0x58) + *(long *)(param_1 + 0x50);
      if (puVar9 == (ulong *)(*(long *)(lVar3 + (uVar6 >> 9) * 8) + (uVar6 & 0x1ff) * 8)) break;
    }
    iVar2 = FUN_009383a8(param_1,*puVar9);
    if (iVar2 == 2) {
LAB_00938aa8:
      auVar11 = FUN_00938ea8(param_1 + 0x30,plVar7,puVar9);
    }
    else {
      if (iVar2 == 1) {
        uVar4 = *param_2;
        uVar6 = 3;
        if ((uVar4 & 1) != 0) {
          uVar6 = param_2[2];
        }
        if (uVar4 >> 1 == uVar6) {
          FUN_0093976c(param_2,puVar9);
        }
        else {
          puVar1 = param_2 + 1;
          if ((uVar4 & 1) != 0) {
            puVar1 = (ulong *)param_2[1];
          }
          if (puVar1 + (uVar4 >> 1) == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          uVar6 = *puVar9;
          *puVar9 = 0;
          puVar1[uVar4 >> 1] = uVar6;
          *param_2 = *param_2 + 2;
        }
        bVar10 = true;
        goto LAB_00938aa8;
      }
      auVar11._8_8_ = puVar9 + 1;
      auVar11._0_8_ = plVar7;
      if ((long)(puVar9 + 1) - *plVar7 == 0x1000) {
        auVar11._8_8_ = plVar7[1];
        auVar11._0_8_ = plVar7 + 1;
      }
    }
    lVar3 = *(long *)(param_1 + 0x38);
    lVar5 = *(long *)(param_1 + 0x40);
  } while( true );
  if (!bVar10) {
    return;
  }
  goto LAB_00938a68;
}


// ===== 00938bb0  FUN_00938bb0 =====

void FUN_00938bb0(undefined8 *param_1,uint param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  bool bVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined8 *local_48;
  
  puVar10 = param_1 + 1;
  puVar6 = (undefined8 *)*puVar10;
  sVar3 = (short)param_2;
  puVar11 = puVar10;
  if (puVar6 != (undefined8 *)0x0) {
    puVar12 = puVar10;
    do {
      uVar2 = *(ushort *)((long)puVar6 + 0x1a);
      if ((uint)uVar2 == (param_2 & 0xffff)) {
LAB_00938c68:
        puVar6 = (undefined8 *)puVar6[1];
        puVar11 = puVar12;
        while (puVar12 = puVar6, puVar12 != (undefined8 *)0x0) {
          puVar11 = puVar12;
          puVar6 = (undefined8 *)*puVar12;
        }
        break;
      }
      iVar4 = (int)(short)(uVar2 - sVar3);
      bVar5 = (param_2 & 0xffff) < (uint)uVar2;
      if ((uint)uVar2 - (param_2 & 0xffff) != 0x8000) {
        bVar5 = iVar4 != -1 && iVar4 + 1 < 0 == SCARRY4(iVar4,1);
      }
      puVar11 = puVar6;
      if (!bVar5) {
        iVar4 = (int)(short)(sVar3 - uVar2);
        bVar5 = (uint)uVar2 < (param_2 & 0xffff);
        if ((param_2 & 0xffff) - (uint)uVar2 != 0x8000) {
          bVar5 = iVar4 != -1 && iVar4 + 1 < 0 == SCARRY4(iVar4,1);
        }
        if (!bVar5) goto LAB_00938c68;
        puVar6 = puVar6 + 1;
        puVar11 = puVar12;
      }
      puVar6 = (undefined8 *)*puVar6;
      puVar12 = puVar11;
    } while (puVar6 != (undefined8 *)0x0);
  }
  if (puVar11 != (undefined8 *)*param_1) {
    puVar6 = (undefined8 *)*puVar11;
    if ((undefined8 *)*puVar11 == (undefined8 *)0x0) {
      do {
        puVar12 = (undefined8 *)puVar11[2];
        bVar5 = puVar11 == (undefined8 *)*puVar12;
        puVar11 = puVar12;
      } while (bVar5);
    }
    else {
      do {
        puVar12 = puVar6;
        puVar6 = (undefined8 *)puVar12[1];
      } while ((undefined8 *)puVar12[1] != (undefined8 *)0x0);
    }
    puVar6 = param_1 + 4;
    if ((undefined8 *)*puVar6 != (undefined8 *)0x0) {
      uVar13 = *(ushort *)((long)puVar12 + 0x1e) + 1;
      puVar11 = (undefined8 *)*puVar6;
      puVar8 = puVar6;
      do {
        while( true ) {
          puVar9 = puVar11;
          uVar2 = *(ushort *)((long)puVar9 + 0x1a);
          if ((uint)uVar2 == (uVar13 & 0xffff)) goto joined_r0x00938d58;
          iVar4 = (int)(short)(uVar2 - (short)uVar13);
          bVar5 = (uVar13 & 0xffff) < (uint)uVar2;
          if ((uint)uVar2 - (uVar13 & 0xffff) != 0x8000) {
            bVar5 = iVar4 != -1 && iVar4 + 1 < 0 == SCARRY4(iVar4,1);
          }
          if (bVar5) break;
          iVar4 = (int)(short)((short)uVar13 - uVar2);
          bVar5 = (uint)uVar2 < (uVar13 & 0xffff);
          if ((uVar13 & 0xffff) - (uint)uVar2 != 0x8000) {
            bVar5 = iVar4 != -1 && iVar4 + 1 < 0 == SCARRY4(iVar4,1);
          }
          if (!bVar5) {
            if (puVar9 != puVar6) goto LAB_00938d5c;
            goto LAB_00938de4;
          }
          puVar14 = puVar9 + 1;
          puVar11 = (undefined8 *)*puVar14;
          puVar9 = puVar8;
          if ((undefined8 *)*puVar14 == (undefined8 *)0x0) goto joined_r0x00938d58;
        }
        puVar11 = (undefined8 *)*puVar9;
        puVar8 = puVar9;
      } while ((undefined8 *)*puVar9 != (undefined8 *)0x0);
joined_r0x00938d58:
      do {
        if (puVar9 == puVar6) break;
LAB_00938d5c:
        if ((uint)*(ushort *)((long)puVar9 + 0x1a) != (uVar13 & 0xffff)) break;
        *(short *)((long)puVar12 + 0x1e) = (short)uVar13;
        puVar11 = (undefined8 *)puVar9[1];
        puVar8 = puVar9;
        if ((undefined8 *)puVar9[1] == (undefined8 *)0x0) {
          do {
            puVar14 = (undefined8 *)puVar8[2];
            bVar5 = puVar8 != (undefined8 *)*puVar14;
            puVar8 = puVar14;
          } while (bVar5);
        }
        else {
          do {
            puVar14 = puVar11;
            puVar11 = (undefined8 *)*puVar14;
          } while ((undefined8 *)*puVar14 != (undefined8 *)0x0);
        }
        if ((undefined8 *)param_1[3] == puVar9) {
          param_1[3] = puVar14;
        }
        param_1[5] = param_1[5] + -1;
        FUN_005d5d48(param_1[4],puVar9);
        if ((ushort *)((long)puVar9 + 0x1a) == (ushort *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        uVar13 = uVar13 + 1;
        operator_delete(puVar9);
        puVar9 = puVar14;
      } while( true );
    }
LAB_00938de4:
    if (10000 < (param_2 - *(ushort *)((long)puVar12 + 0x1a) & 0xffff)) {
      uVar1 = *(undefined4 *)((long)puVar12 + 0x1c);
      local_48 = param_1;
      FUN_009378f8(&local_48,param_1[1]);
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = puVar10;
      puVar6 = (undefined8 *)operator_new(0x20);
      if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *(short *)((long)puVar6 + 0x1a) = sVar3;
      *(undefined4 *)((long)puVar6 + 0x1c) = 0;
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = puVar10;
      *param_1 = puVar6;
      param_1[1] = puVar6;
      FUN_005d5b94(puVar6,puVar6);
      lVar7 = param_1[2];
      *(undefined4 *)((long)puVar6 + 0x1c) = uVar1;
      param_1[2] = lVar7 + 1;
    }
  }
  return;
}


// ===== 00938ea8  FUN_00938ea8 =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00938ea8(long param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  long *local_40;
  long *local_38;
  
  uVar9 = *(ulong *)(param_1 + 0x20);
  lVar8 = *(long *)(param_1 + 8);
  uVar14 = uVar9 + *(long *)(param_1 + 0x28);
  plVar6 = (long *)(lVar8 + (uVar14 >> 9) * 8);
  if (lVar8 == *(long *)(param_1 + 0x10)) {
    if (param_3 == (long *)0x0) goto LAB_00939230;
    plVar13 = (long *)0x0;
    plVar5 = (long *)(lVar8 + (uVar9 >> 9) * 8);
    plVar12 = plVar13;
    if (param_3 != (long *)0x0) goto LAB_00938f14;
LAB_00938f68:
    lVar10 = *plVar5;
    plVar7 = plVar5;
    plVar12 = plVar13;
  }
  else {
    if (param_3 == (long *)(*plVar6 + (uVar14 & 0x1ff) * 8)) {
LAB_00939230:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/deque:2327: libc++ Hardening assertion __f != end() failed: deque::erase(iterator) called with a non-dereferenceable iterator\n"
                );
    }
    plVar5 = (long *)(lVar8 + (uVar9 >> 9) * 8);
    plVar13 = (long *)(*plVar5 + (uVar9 & 0x1ff) * 8);
    plVar12 = plVar13;
    if (param_3 == plVar13) goto LAB_00938f68;
LAB_00938f14:
    lVar10 = *plVar5;
    uVar1 = ((long)param_3 - *param_2 >> 3) + ((long)param_2 - (long)plVar5) * 0x40;
    uVar9 = (long)plVar12 - lVar10 >> 3;
    plVar13 = plVar12;
    plVar7 = plVar5;
    if (uVar1 != uVar9) {
      if ((long)uVar1 < 1) {
        uVar4 = 0x1ff - uVar1;
        uVar2 = 0x3fe - uVar1;
        if (-1 < (long)uVar4) {
          uVar2 = uVar4;
        }
        uVar11 = uVar4 & 0x1ff;
        if ((long)uVar4 < 1) {
          uVar11 = -(-uVar4 & 0x1ff);
        }
        lVar10 = ((long)uVar2 >> 9) * -8;
        uVar11 = 0x1ff - uVar11;
      }
      else {
        uVar11 = uVar1 & 0x1ff;
        lVar10 = (uVar1 >> 9) * 8;
      }
      plVar7 = (long *)((long)plVar5 + lVar10);
      lVar10 = *plVar7;
      plVar13 = (long *)(lVar10 + uVar11 * 8);
      if (*(long *)(param_1 + 0x28) - 1U >> 1 < uVar1 - uVar9) {
        lVar10 = (long)plVar13 - lVar10 >> 3;
        if (lVar10 < 0) {
          uVar9 = (ulong)~(uint)(0x1feU - lVar10);
          lVar10 = (0x1feU - lVar10 >> 9) * -8;
        }
        else {
          uVar9 = lVar10 + 1;
          lVar10 = (uVar9 >> 9) * 8;
        }
        if (lVar8 == *(long *)(param_1 + 0x10)) {
          lVar8 = 0;
        }
        else {
          lVar8 = *plVar6 + (uVar14 & 0x1ff) * 8;
        }
        local_40 = plVar7;
        local_38 = plVar13;
        FUN_00939c64((long *)((long)plVar7 + lVar10),
                     *(long *)((long)plVar7 + lVar10) + (uVar9 & 0x1ff) * 8,plVar6,lVar8,&local_40);
        if (local_38 != (long *)0x0) {
          plVar6 = (long *)*local_38;
          *local_38 = 0;
          if (plVar6 != (long *)0x0) {
            (**(code **)(*plVar6 + 8))();
          }
          lVar10 = *(long *)(param_1 + 0x10);
          lVar3 = *(long *)(param_1 + 0x28);
          lVar8 = 0;
          if (lVar10 != *(long *)(param_1 + 8)) {
            lVar8 = (lVar10 - *(long *)(param_1 + 8)) * 0x40 + -1;
          }
          *(long *)(param_1 + 0x28) = lVar3 + -1;
          if ((lVar8 - (lVar3 + *(long *)(param_1 + 0x20))) + 1U < 0x400) {
            return;
          }
          operator_delete(*(void **)(lVar10 + -8));
          lVar8 = *(long *)(param_1 + 0x10) + -8;
          if (lVar8 != 0) {
            *(long *)(param_1 + 0x10) = lVar8;
            return;
          }
        }
        goto LAB_0093921c;
      }
    }
  }
  lVar8 = (long)plVar13 - lVar10 >> 3;
  if (lVar8 < 0) {
    uVar14 = (ulong)~(uint)(0x1feU - lVar8);
    lVar8 = (0x1feU - lVar8 >> 9) * -8;
  }
  else {
    uVar14 = lVar8 + 1;
    lVar8 = (uVar14 >> 9) * 8;
  }
  local_40 = (long *)((long)plVar7 + lVar8);
  local_38 = (long *)(*local_40 + (uVar14 & 0x1ff) * 8);
  FUN_00939984(plVar5,plVar12,plVar7,plVar13,&local_40);
  if (plVar12 != (long *)0x0) {
    plVar6 = (long *)*plVar12;
    *plVar12 = 0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    uVar14 = *(long *)(param_1 + 0x20) + _DAT_001f2940;
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + _UNK_001f2948;
    *(ulong *)(param_1 + 0x20) = uVar14;
    if (0x3ff < uVar14) {
      operator_delete((void *)**(undefined8 **)(param_1 + 8));
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -0x200;
    }
    return;
  }
LAB_0093921c:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00939244  FUN_00939244 =====

void FUN_00939244(undefined8 *param_1,long param_2,int param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined2 local_44 [2];
  
  puVar7 = (undefined8 *)(param_2 + 0x20);
  puVar6 = (undefined8 *)(param_2 + 0x18);
  local_44[0] = (undefined2)param_3;
  if ((undefined8 *)*puVar7 != (undefined8 *)0x0) {
    uVar2 = param_3 - 100;
    puVar4 = (undefined8 *)*puVar7;
    puVar8 = puVar7;
    do {
      while( true ) {
        puVar9 = puVar4;
        uVar1 = *(ushort *)((long)puVar9 + 0x1a);
        puVar7 = puVar9;
        if ((uint)uVar1 == (uVar2 & 0xffff)) goto LAB_00939308;
        iVar3 = (int)(short)(uVar1 - (short)uVar2);
        bVar5 = (uVar2 & 0xffff) < (uint)uVar1;
        if ((uint)uVar1 - (uVar2 & 0xffff) != 0x8000) {
          bVar5 = iVar3 != -1 && iVar3 + 1 < 0 == SCARRY4(iVar3,1);
        }
        if (bVar5) break;
        iVar3 = (int)(short)((short)uVar2 - uVar1);
        bVar5 = (uint)uVar1 < (uVar2 & 0xffff);
        if ((uVar2 & 0xffff) - (uint)uVar1 != 0x8000) {
          bVar5 = iVar3 != -1 && iVar3 + 1 < 0 == SCARRY4(iVar3,1);
        }
        if ((!bVar5) ||
           (puVar4 = (undefined8 *)puVar9[1], puVar7 = puVar8,
           (undefined8 *)puVar9[1] == (undefined8 *)0x0)) goto LAB_00939308;
      }
      puVar4 = (undefined8 *)*puVar9;
      puVar8 = puVar9;
    } while ((undefined8 *)*puVar9 != (undefined8 *)0x0);
  }
LAB_00939308:
  puVar4 = (undefined8 *)*puVar6;
  while( true ) {
    if (puVar4 == puVar7) {
      FUN_00939f8c(0,puVar6,puVar6,local_44);
      FUN_00938bb0(param_2,local_44[0]);
      *param_1 = 0;
      param_1[3] = &DAT_aaaaaaaaaaaaaaaa;
      param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
      param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
      FUN_00938a30(param_2,param_1);
      return;
    }
    puVar8 = (undefined8 *)puVar4[1];
    puVar9 = puVar4;
    if ((undefined8 *)puVar4[1] == (undefined8 *)0x0) {
      do {
        puVar10 = (undefined8 *)puVar9[2];
        bVar5 = puVar9 != (undefined8 *)*puVar10;
        puVar9 = puVar10;
      } while (bVar5);
    }
    else {
      do {
        puVar10 = puVar8;
        puVar8 = (undefined8 *)*puVar10;
      } while ((undefined8 *)*puVar10 != (undefined8 *)0x0);
    }
    if ((undefined8 *)*puVar6 == puVar4) {
      *puVar6 = puVar10;
    }
    *(long *)(param_2 + 0x28) = *(long *)(param_2 + 0x28) + -1;
    FUN_005d5d48(*(undefined8 *)(param_2 + 0x20),puVar4);
    if (puVar4 == (undefined8 *)0xffffffffffffffe6) break;
    operator_delete(puVar4);
    puVar4 = puVar10;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 009393f4  FUN_009393f4 =====

void FUN_009393f4(long param_1,uint param_2)

{
  ulong uVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined1 auVar10 [16];
  
  lVar5 = *(long *)(param_1 + 0x38);
  lVar6 = *(long *)(param_1 + 0x40);
  plVar7 = (long *)(lVar5 + (*(ulong *)(param_1 + 0x50) >> 9) * 8);
  if (lVar5 == lVar6) {
    lVar8 = 0;
  }
  else {
    lVar8 = *plVar7 + (*(ulong *)(param_1 + 0x50) & 0x1ff) * 8;
  }
  auVar10._8_8_ = lVar8;
  auVar10._0_8_ = plVar7;
  do {
    puVar9 = auVar10._8_8_;
    plVar7 = auVar10._0_8_;
    if (lVar5 == lVar6) {
      if (puVar9 == (undefined8 *)0x0) {
        return;
      }
    }
    else {
      uVar1 = *(long *)(param_1 + 0x58) + *(long *)(param_1 + 0x50);
      if (puVar9 == (undefined8 *)(*(long *)(lVar5 + (uVar1 >> 9) * 8) + (uVar1 & 0x1ff) * 8)) {
        return;
      }
    }
    uVar4 = FUN_0084f7f0(*puVar9);
    if ((param_2 & 0xffff) == (uVar4 & 0xffff)) {
LAB_009394e0:
      auVar10._8_8_ = puVar9 + 1;
      auVar10._0_8_ = plVar7;
      if ((long)(puVar9 + 1) - *plVar7 == 0x1000) {
        auVar10._8_8_ = plVar7[1];
        auVar10._0_8_ = plVar7 + 1;
      }
    }
    else {
      iVar2 = (int)(short)((short)param_2 - (short)uVar4);
      bVar3 = (uVar4 & 0xffff) < (param_2 & 0xffff);
      if ((param_2 & 0xffff) - (uVar4 & 0xffff) != 0x8000) {
        bVar3 = iVar2 != -1 && iVar2 + 1 < 0 == SCARRY4(iVar2,1);
      }
      if (!bVar3) goto LAB_009394e0;
      auVar10 = FUN_00938ea8(param_1 + 0x30,plVar7,puVar9);
    }
    lVar5 = *(long *)(param_1 + 0x38);
    lVar6 = *(long *)(param_1 + 0x40);
  } while( true );
}


// ===== 00939514  FUN_00939514 =====

void FUN_00939514(long *param_1)

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
    lVar3 = (lVar6 - lVar5) * 0x40 + -1;
  }
  if ((ulong)(lVar3 - (param_1[5] + param_1[4])) < 0x200) {
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
      local_48 = operator_new(0x1000);
      FUN_0060cf38(&local_40,&local_48);
      lVar3 = param_1[1];
      puVar4 = (undefined1 *)param_1[2];
      if ((undefined1 *)lVar3 != puVar4) {
        do {
          FUN_0060ccb0(&local_40,lVar3);
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
        lVar6 = 0x100;
      }
      else {
        lVar6 = param_1[4] + 0x200;
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
      goto LAB_009396d4;
    }
    if (lVar5 == lVar3) {
      local_40 = (undefined1 *)operator_new(0x1000);
      FUN_0060cf38(param_1,&local_40);
      puVar2 = (undefined8 *)(param_1[2] + -8);
      local_40 = (undefined1 *)*puVar2;
      puVar4 = local_30;
      if (puVar2 == (undefined8 *)0x0) goto LAB_009396d4;
      param_1[2] = (long)puVar2;
      FUN_0060d45c(param_1,&local_40);
    }
    else {
      local_40 = (undefined1 *)operator_new(0x1000);
      FUN_0060d1c0(param_1,&local_40);
    }
    if (param_1[2] - param_1[1] == 8) {
      lVar3 = 0x100;
    }
    else {
      lVar3 = param_1[4] + 0x200;
    }
    param_1[4] = lVar3;
  }
  else {
    param_1[4] = param_1[4] + 0x200;
    puVar2 = (undefined8 *)(lVar6 + -8);
    local_40 = (undefined1 *)*puVar2;
    puVar4 = local_30;
    if (puVar2 == (undefined8 *)0x0) {
LAB_009396d4:
      local_30 = puVar4;
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    param_1[2] = (long)puVar2;
    FUN_0060d45c(param_1,&local_40);
  }
  return;
}


// ===== 0093976c  FUN_0093976c =====

ulong * FUN_0093976c(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  bool bVar2;
  ulong *puVar3;
  long *plVar4;
  ulong uVar5;
  ulong *puVar6;
  long lVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong uVar15;
  ulong uVar16;
  
  puVar14 = param_1 + 1;
  if ((*param_1 & 1) == 0) {
    uVar13 = 6;
  }
  else {
    if ((param_1[2] >> 0x3c & 7) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d55a4();
    }
    puVar14 = (ulong *)param_1[1];
    uVar13 = param_1[2] << 1;
  }
  uVar15 = *param_1 >> 1;
  puVar3 = (ulong *)operator_new(uVar13 << 3);
  puVar1 = puVar3 + uVar15;
  if (puVar1 == (ulong *)0x0) {
LAB_00939958:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  uVar5 = *param_2;
  *param_2 = 0;
  *puVar1 = uVar5;
  if (uVar15 == 0) goto LAB_0093985c;
  uVar10 = uVar15 - 1;
  uVar5 = (ulong)-(long)puVar3 >> 3;
  if (uVar10 <= (ulong)-(long)puVar3 >> 3) {
    uVar5 = uVar10;
  }
  puVar6 = puVar14;
  if (uVar5 < 0x22) {
LAB_00939800:
    lVar12 = 0;
  }
  else {
    lVar12 = 0;
    uVar11 = (ulong)-(long)puVar3 >> 3;
    if (uVar10 <= uVar11) {
      uVar11 = uVar10;
    }
    if (((-(long)puVar3 & 7U) != 0) || (puVar14 + uVar11 < puVar14)) goto LAB_00939800;
    if (puVar3 <= puVar3 + uVar11) {
      uVar11 = (ulong)-(long)puVar3 >> 3;
      if (uVar10 <= (ulong)-(long)puVar3 >> 3) {
        uVar11 = uVar10;
      }
      if ((puVar14 < puVar3 + uVar11 + 1) && (puVar3 < puVar14 + uVar11 + 1)) goto LAB_00939800;
      uVar10 = uVar5 + 1 & 3;
      puVar8 = puVar3 + 2;
      uVar11 = 4;
      if (uVar10 != 0) {
        uVar11 = uVar10;
      }
      puVar9 = puVar14 + 2;
      lVar12 = (uVar5 + 1) - uVar11;
      puVar6 = puVar14 + lVar12;
      lVar7 = lVar12;
      do {
        uVar10 = puVar9[-1];
        uVar5 = puVar9[-2];
        uVar16 = puVar9[1];
        uVar11 = *puVar9;
        lVar7 = lVar7 + -4;
        puVar9[-1] = 0;
        puVar9[-2] = 0;
        puVar9[1] = 0;
        *puVar9 = 0;
        puVar9 = puVar9 + 4;
        puVar8[-1] = uVar10;
        puVar8[-2] = uVar5;
        puVar8[1] = uVar16;
        *puVar8 = uVar11;
        puVar8 = puVar8 + 4;
      } while (lVar7 != 0);
    }
  }
  lVar7 = uVar15 - lVar12;
  puVar8 = puVar3 + lVar12;
  do {
    if (puVar8 == (ulong *)0x0) goto LAB_00939958;
    uVar5 = *puVar6;
    lVar7 = lVar7 + -1;
    *puVar6 = 0;
    *puVar8 = uVar5;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  } while (lVar7 != 0);
  puVar14 = puVar14 + uVar15;
  lVar12 = -uVar15;
  do {
    puVar14 = puVar14 + -1;
    if (puVar14 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    plVar4 = (long *)*puVar14;
    *puVar14 = 0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    bVar2 = lVar12 != -1;
    lVar12 = lVar12 + 1;
  } while (bVar2);
LAB_0093985c:
  uVar15 = *param_1;
  if ((uVar15 & 1) != 0) {
    operator_delete((void *)param_1[1]);
    uVar15 = *param_1;
  }
  param_1[1] = (ulong)puVar3;
  param_1[2] = uVar13;
  *param_1 = (uVar15 | 1) + 2;
  return puVar1;
}


// ===== 00939984  FUN_00939984 =====

void FUN_00939984(long *param_1,long *param_2,long *param_3,long *param_4,undefined8 *param_5)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  plVar7 = (long *)*param_5;
  plVar8 = (long *)param_5[1];
  if (param_1 == param_3) {
    if (param_2 == param_4) goto LAB_00939c3c;
    lVar3 = *plVar7;
    while( true ) {
      lVar4 = (long)plVar8 - lVar3 >> 3;
      lVar3 = (long)param_4 - (long)param_2 >> 3;
      if (lVar4 <= lVar3) {
        lVar3 = lVar4;
      }
      plVar9 = param_4;
      for (lVar4 = lVar3 * -8; lVar4 != 0; lVar4 = lVar4 + 8) {
        plVar9 = plVar9 + -1;
        lVar5 = *plVar9;
        *plVar9 = 0;
        plVar8 = plVar8 + -1;
        plVar6 = (long *)*plVar8;
        *plVar8 = lVar5;
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 8))();
        }
      }
      param_4 = param_4 + -lVar3;
      if (param_2 == param_4) break;
      plVar7 = plVar7 + -1;
      lVar3 = *plVar7;
      plVar8 = (long *)(lVar3 + 0x1000);
    }
  }
  else {
    plVar9 = (long *)*param_3;
    if (plVar9 != param_4) {
      lVar3 = *plVar7;
      while( true ) {
        lVar4 = (long)plVar8 - lVar3 >> 3;
        lVar3 = (long)param_4 - (long)plVar9 >> 3;
        if (lVar4 <= lVar3) {
          lVar3 = lVar4;
        }
        plVar6 = param_4;
        for (lVar4 = lVar3 * -8; lVar4 != 0; lVar4 = lVar4 + 8) {
          plVar6 = plVar6 + -1;
          lVar5 = *plVar6;
          *plVar6 = 0;
          plVar8 = plVar8 + -1;
          plVar1 = (long *)*plVar8;
          *plVar8 = lVar5;
          if (plVar1 != (long *)0x0) {
            (**(code **)(*plVar1 + 8))();
          }
        }
        param_4 = param_4 + -lVar3;
        if (plVar9 == param_4) break;
        plVar7 = plVar7 + -1;
        lVar3 = *plVar7;
        plVar8 = (long *)(lVar3 + 0x1000);
      }
      if ((plVar7 != (long *)0x0) && (plVar8 == (long *)(*plVar7 + 0x1000))) {
        plVar7 = plVar7 + 1;
        plVar8 = (long *)*plVar7;
      }
    }
    param_3 = param_3 + -1;
    while( true ) {
      *param_5 = plVar7;
      param_5[1] = plVar8;
      if (param_1 == param_3) break;
      plVar6 = (long *)*param_3;
      lVar3 = *plVar7;
      plVar9 = plVar6 + 0x200;
      while( true ) {
        lVar4 = (long)plVar8 - lVar3 >> 3;
        lVar3 = (long)plVar9 - (long)plVar6 >> 3;
        if (lVar4 <= lVar3) {
          lVar3 = lVar4;
        }
        plVar1 = plVar9;
        for (lVar4 = lVar3 * -8; lVar4 != 0; lVar4 = lVar4 + 8) {
          plVar1 = plVar1 + -1;
          lVar5 = *plVar1;
          *plVar1 = 0;
          plVar8 = plVar8 + -1;
          plVar2 = (long *)*plVar8;
          *plVar8 = lVar5;
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 8))();
          }
        }
        plVar9 = plVar9 + -lVar3;
        if (plVar6 == plVar9) break;
        plVar7 = plVar7 + -1;
        lVar3 = *plVar7;
        plVar8 = (long *)(lVar3 + 0x1000);
      }
      if ((plVar7 != (long *)0x0) && (plVar8 == (long *)(*plVar7 + 0x1000))) {
        plVar7 = plVar7 + 1;
        plVar8 = (long *)*plVar7;
      }
      param_3 = param_3 + -1;
    }
    plVar9 = (long *)(*param_3 + 0x1000);
    if (param_2 == plVar9) goto LAB_00939c3c;
    lVar3 = *plVar7;
    while( true ) {
      lVar4 = (long)plVar8 - lVar3 >> 3;
      lVar3 = (long)plVar9 - (long)param_2 >> 3;
      if (lVar4 <= lVar3) {
        lVar3 = lVar4;
      }
      plVar6 = plVar9;
      for (lVar4 = lVar3 * -8; lVar4 != 0; lVar4 = lVar4 + 8) {
        plVar6 = plVar6 + -1;
        lVar5 = *plVar6;
        *plVar6 = 0;
        plVar8 = plVar8 + -1;
        plVar1 = (long *)*plVar8;
        *plVar8 = lVar5;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
      }
      plVar9 = plVar9 + -lVar3;
      if (param_2 == plVar9) break;
      plVar7 = plVar7 + -1;
      lVar3 = *plVar7;
      plVar8 = (long *)(lVar3 + 0x1000);
    }
  }
  if ((plVar7 != (long *)0x0) && (plVar8 == (long *)(*plVar7 + 0x1000))) {
    plVar7 = plVar7 + 1;
    plVar8 = (long *)*plVar7;
  }
LAB_00939c3c:
  *param_5 = plVar7;
  param_5[1] = plVar8;
  return;
}


// ===== 00939c64  FUN_00939c64 =====

void FUN_00939c64(long *param_1,long *param_2,long *param_3,long *param_4,undefined8 *param_5)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  
  if (param_1 == param_3) {
    plVar8 = (long *)*param_5;
    plVar7 = (long *)param_5[1];
    if (param_2 != param_4) {
      plVar5 = (long *)*plVar8;
      do {
        lVar6 = (long)param_4 - (long)param_2 >> 3;
        lVar4 = (long)plVar5 + (0x1000 - (long)plVar7) >> 3;
        if (lVar4 <= lVar6) {
          lVar6 = lVar4;
        }
        if (lVar6 != 0) {
          lVar4 = lVar6 * 8;
          plVar5 = param_2 + lVar6;
          do {
            lVar6 = *param_2;
            *param_2 = 0;
            plVar3 = (long *)*plVar7;
            *plVar7 = lVar6;
            if (plVar3 != (long *)0x0) {
              (**(code **)(*plVar3 + 8))();
            }
            lVar4 = lVar4 + -8;
            param_2 = param_2 + 1;
            plVar7 = plVar7 + 1;
          } while (lVar4 != 0);
          param_2 = plVar5;
          if (param_4 == plVar5) goto LAB_00939f50;
        }
        plVar8 = plVar8 + 1;
        plVar5 = (long *)*plVar8;
        plVar7 = plVar5;
      } while( true );
    }
    goto LAB_00939f68;
  }
  plVar5 = (long *)*param_5;
  plVar7 = (long *)param_5[1];
  plVar8 = (long *)(*param_1 + 0x1000);
  if (param_2 != plVar8) {
    plVar3 = (long *)*plVar5;
    do {
      lVar6 = (long)plVar8 - (long)param_2 >> 3;
      lVar4 = (long)plVar3 + (0x1000 - (long)plVar7) >> 3;
      if (lVar4 <= lVar6) {
        lVar6 = lVar4;
      }
      if (lVar6 != 0) {
        lVar4 = lVar6 * 8;
        plVar3 = param_2 + lVar6;
        do {
          lVar6 = *param_2;
          *param_2 = 0;
          plVar1 = (long *)*plVar7;
          *plVar7 = lVar6;
          if (plVar1 != (long *)0x0) {
            (**(code **)(*plVar1 + 8))();
          }
          lVar4 = lVar4 + -8;
          param_2 = param_2 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar4 != 0);
        param_2 = plVar3;
        if (plVar8 == plVar3) goto LAB_00939d38;
      }
      plVar5 = plVar5 + 1;
      plVar3 = (long *)*plVar5;
      plVar7 = plVar3;
    } while( true );
  }
  goto LAB_00939d50;
LAB_00939d38:
  if ((plVar5 != (long *)0x0) && (plVar7 == (long *)(*plVar5 + 0x1000))) {
    plVar5 = plVar5 + 1;
    plVar7 = (long *)*plVar5;
  }
LAB_00939d50:
  param_1 = param_1 + 1;
LAB_00939d5c:
  *param_5 = plVar5;
  param_5[1] = plVar7;
  if (param_1 != param_3) {
    plVar8 = (long *)*param_1;
    plVar1 = (long *)*plVar5;
    plVar3 = plVar8 + 0x200;
    do {
      lVar6 = (long)plVar3 - (long)plVar8 >> 3;
      lVar4 = (long)plVar1 + (0x1000 - (long)plVar7) >> 3;
      if (lVar4 <= lVar6) {
        lVar6 = lVar4;
      }
      if (lVar6 != 0) {
        lVar4 = lVar6 * 8;
        plVar1 = plVar8 + lVar6;
        do {
          lVar6 = *plVar8;
          *plVar8 = 0;
          plVar2 = (long *)*plVar7;
          *plVar7 = lVar6;
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 8))();
          }
          lVar4 = lVar4 + -8;
          plVar8 = plVar8 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar4 != 0);
        plVar8 = plVar1;
        if (plVar3 == plVar1) goto LAB_00939df4;
      }
      plVar5 = plVar5 + 1;
      plVar1 = (long *)*plVar5;
      plVar7 = plVar1;
    } while( true );
  }
  param_1 = (long *)*param_1;
  if (param_1 == param_4) {
LAB_00939eb8:
    *param_5 = plVar5;
    param_5[1] = plVar7;
    return;
  }
  plVar8 = (long *)*plVar5;
  do {
    lVar6 = (long)param_4 - (long)param_1 >> 3;
    lVar4 = (long)plVar8 + (0x1000 - (long)plVar7) >> 3;
    if (lVar4 <= lVar6) {
      lVar6 = lVar4;
    }
    if (lVar6 != 0) {
      lVar4 = lVar6 * 8;
      plVar8 = param_1 + lVar6;
      do {
        lVar6 = *param_1;
        *param_1 = 0;
        plVar3 = (long *)*plVar7;
        *plVar7 = lVar6;
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 8))();
        }
        lVar4 = lVar4 + -8;
        param_1 = param_1 + 1;
        plVar7 = plVar7 + 1;
      } while (lVar4 != 0);
      param_1 = plVar8;
      if (param_4 == plVar8) {
        if ((plVar5 != (long *)0x0) && (plVar7 == (long *)(*plVar5 + 0x1000))) {
          plVar5 = plVar5 + 1;
          plVar7 = (long *)*plVar5;
        }
        goto LAB_00939eb8;
      }
    }
    plVar5 = plVar5 + 1;
    plVar8 = (long *)*plVar5;
    plVar7 = plVar8;
  } while( true );
LAB_00939df4:
  if ((plVar5 != (long *)0x0) && (plVar7 == (long *)(*plVar5 + 0x1000))) {
    plVar5 = plVar5 + 1;
    plVar7 = (long *)*plVar5;
  }
  param_1 = param_1 + 1;
  goto LAB_00939d5c;
LAB_00939f50:
  if ((plVar8 != (long *)0x0) && (plVar7 == (long *)(*plVar8 + 0x1000))) {
    plVar8 = plVar8 + 1;
    plVar7 = (long *)*plVar8;
  }
LAB_00939f68:
  *param_5 = plVar8;
  param_5[1] = plVar7;
  return;
}


// ===== 00939f8c  FUN_00939f8c =====

undefined1  [16] FUN_00939f8c(undefined8 param_1,long *param_2,undefined8 param_3,ushort *param_4)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined8 uVar6;
  long *plVar7;
  uint uVar8;
  uint uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined1 auVar13 [16];
  
  plVar7 = param_2 + 1;
  plVar10 = (long *)*plVar7;
  plVar12 = plVar7;
  if (plVar10 == (long *)0x0) {
LAB_00939fd4:
    plVar10 = (long *)operator_new(0x20);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    uVar1 = *param_4;
    *plVar10 = 0;
    plVar10[1] = 0;
    plVar10[2] = (long)plVar7;
    *(ushort *)((long)plVar10 + 0x1a) = uVar1;
    *plVar12 = (long)plVar10;
    plVar7 = plVar10;
    if (*(long *)*param_2 != 0) {
      *param_2 = *(long *)*param_2;
      plVar7 = (long *)*plVar12;
    }
    FUN_005d5b94(param_2[1],plVar7);
    uVar6 = 1;
    param_2[2] = param_2[2] + 1;
  }
  else {
    uVar1 = *param_4;
    uVar2 = *(ushort *)((long)plVar10 + 0x1a);
    if (uVar2 != uVar1) {
      do {
        uVar9 = (uint)uVar2;
        iVar3 = (int)(short)(uVar2 - uVar1);
        uVar8 = (uint)uVar1;
        bVar5 = uVar8 < uVar9;
        if (uVar9 - uVar8 != 0x8000) {
          bVar5 = iVar3 != -1 && iVar3 + 1 < 0 == SCARRY4(iVar3,1);
        }
        plVar7 = plVar10;
        if (bVar5) {
          plVar11 = (long *)*plVar10;
          plVar12 = plVar10;
          if (plVar11 == (long *)0x0) goto LAB_00939fd4;
        }
        else {
          iVar3 = uVar8 - uVar9;
          iVar4 = (int)(short)iVar3;
          bVar5 = uVar9 <= uVar8 && iVar3 != 0;
          if (iVar3 != 0x8000) {
            bVar5 = iVar4 != -1 && iVar4 + 1 < 0 == SCARRY4(iVar4,1);
          }
          if (!bVar5) {
            uVar6 = 0;
            goto LAB_0093a028;
          }
          plVar11 = (long *)plVar10[1];
          if (plVar11 == (long *)0x0) {
            plVar12 = plVar10 + 1;
            goto LAB_00939fd4;
          }
        }
        uVar2 = *(ushort *)((long)plVar11 + 0x1a);
        plVar10 = plVar11;
      } while (uVar2 != uVar8);
    }
    uVar6 = 0;
  }
LAB_0093a028:
  auVar13._8_8_ = uVar6;
  auVar13._0_8_ = plVar10;
  return auVar13;
}


// ===== 0093a0e8  FUN_0093a0e8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0093a0e8(undefined8 *param_1,long param_2,long *param_3)

{
  long *plVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  
  lVar6 = FUN_0084f840(param_3);
  if (*(char *)(lVar6 + 0x790) != '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_005ee558();
  }
  if (*(byte *)(lVar6 + 0x12e) != 0xff) {
    *(uint *)(param_3 + 0x19) = (uint)*(byte *)(lVar6 + 0x12e);
    *(undefined1 *)((long)param_3 + 0xcc) = 1;
  }
  bVar2 = *(byte *)(lVar6 + 300);
  uVar9 = (ulong)bVar2;
  if ((*(byte *)(param_2 + 0x81) & 1) != 0) {
    uVar3 = (uint)bVar2 - (uint)*(byte *)(param_2 + 0x80);
    iVar5 = (int)(char)uVar3;
    bVar4 = (uint)*(byte *)(param_2 + 0x80) <= (uint)bVar2 && uVar3 != 0;
    if (uVar3 != 0x80) {
      bVar4 = iVar5 != -1 && iVar5 + 1 < 0 == SCARRY4(iVar5,1);
    }
    uVar9 = (ulong)uVar3 & 0xff;
    if (!bVar4) {
      uVar9 = (ulong)uVar3 & 0xff | 0xffffffffffffff00;
    }
    uVar9 = uVar9 + *(long *)(param_2 + 0x78);
  }
  *(ulong *)(param_2 + 0x78) = uVar9;
  *(ushort *)(param_2 + 0x80) = bVar2 | 0x100;
  iVar5 = FUN_0093a2a8(param_2,param_3,lVar6 + 0x128,uVar9);
  *param_1 = 0;
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[3] = &DAT_aaaaaaaaaaaaaaaa;
  if (iVar5 != 1) {
    if (iVar5 == 0) {
      if (100 < *(ulong *)(param_2 + 0x48)) {
        FUN_0093abfc(param_2 + 0x20);
      }
      uVar7 = *(ulong *)(param_2 + 0x40);
      if (uVar7 == 0) {
        FUN_0093b7b8(param_2 + 0x20);
        uVar7 = *(ulong *)(param_2 + 0x40);
      }
      plVar1 = (long *)(*(long *)(param_2 + 0x28) + (uVar7 >> 8) * 8);
      lVar8 = *plVar1;
      lVar6 = 0;
      if (*(long *)(param_2 + 0x28) != *(long *)(param_2 + 0x30)) {
        lVar6 = lVar8 + (uVar7 & 0xff) * 0x10;
      }
      if (lVar6 == lVar8) {
        lVar6 = plVar1[-1] + 0x1000;
      }
      if (lVar6 == 0x10) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *(ulong *)(lVar6 + -0x10) = uVar9;
      *(long **)(lVar6 + -8) = param_3;
      lVar6 = *(long *)(param_2 + 0x40) + _DAT_001f3ec0;
      *(long *)(param_2 + 0x48) = *(long *)(param_2 + 0x48) + _UNK_001f3ec8;
      *(long *)(param_2 + 0x40) = lVar6;
    }
    else if (param_3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0093a278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_3 + 8))(param_3);
      return;
    }
    return;
  }
  *param_1 = 2;
  param_1[1] = param_3;
  FUN_0093acdc(param_2,param_1);
  return;
}


// ===== 0093a2a8  FUN_0093a2a8 =====

undefined8 FUN_0093a2a8(uint *param_1,long param_2,long param_3,long param_4)

{
  ushort uVar1;
  uint uVar2;
  char cVar3;
  ushort uVar4;
  bool bVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  uint *puVar20;
  uint uVar21;
  int iVar22;
  uint *puVar23;
  uint *puVar24;
  uint *puVar25;
  uint *puVar26;
  uint *puVar27;
  undefined1 uStack_a1;
  long *local_a0;
  undefined8 local_98;
  undefined1 *local_90;
  char *local_88;
  long **pplStack_80;
  undefined8 local_78;
  char **ppcStack_70;
  long local_68;
  
  if (*(byte *)(param_3 + 6) < 5) {
    *(undefined4 *)(param_2 + 0xc0) = 0;
    *(undefined1 *)(param_2 + 0xc4) = 1;
    uVar18 = (ulong)*(ushort *)(param_3 + 2) & 0x7fff;
    *(ulong *)(param_2 + 0x9e0) = uVar18;
    uVar14 = *param_1;
    if (uVar14 == 0xffffffff) {
      uVar14 = (uint)uVar18;
      *param_1 = uVar14;
      uVar18 = *(ulong *)(param_2 + 0x9e0);
    }
    puVar25 = param_1 + 4;
    lVar9 = 0x7f9c;
    if (99 < uVar18) {
      lVar9 = 0xff9c;
    }
    uVar19 = (uint)(lVar9 + uVar18);
    puVar23 = puVar25;
    for (puVar12 = *(uint **)puVar25; puVar20 = puVar23, puVar12 != (uint *)0x0;
        puVar12 = *(uint **)puVar12) {
      while( true ) {
        uVar4 = *(ushort *)((long)puVar12 + 0x1a);
        uVar1 = (ushort)(lVar9 + uVar18);
        puVar20 = puVar12;
        if ((uint)uVar4 == (uint)uVar1) goto LAB_0093a3dc;
        uVar17 = uVar19 - uVar4;
        uVar11 = (uint)uVar4;
        uVar16 = (uint)uVar1;
        uVar15 = uVar17 ^ 0xffff8000;
        if (uVar11 <= uVar16) {
          uVar15 = uVar17;
        }
        uVar17 = uVar11 - uVar19 ^ 0x8000;
        if (uVar16 <= uVar11) {
          uVar17 = uVar11 - uVar19;
        }
        uVar15 = uVar15 & 0xffff;
        uVar17 = uVar17 & 0xffff;
        uVar21 = uVar17;
        if (uVar15 <= uVar17) {
          uVar21 = uVar15;
        }
        bVar5 = uVar16 < uVar11;
        if (uVar21 != 0x4000) {
          bVar5 = uVar17 < 0x4001;
        }
        if (bVar5) break;
        bVar5 = uVar11 < uVar1;
        if (uVar21 != 0x4000) {
          bVar5 = uVar15 < 0x4001;
        }
        if ((!bVar5) ||
           (puVar12 = *(uint **)(puVar12 + 2), puVar20 = puVar23, puVar12 == (uint *)0x0))
        goto LAB_0093a3dc;
      }
      puVar23 = puVar12;
    }
LAB_0093a3dc:
    puVar23 = *(uint **)(param_1 + 2);
    local_68 = param_4;
    if (puVar23 != puVar20) {
      do {
        puVar12 = *(uint **)(puVar23 + 2);
        puVar13 = puVar23;
        if (*(uint **)(puVar23 + 2) == (uint *)0x0) {
          do {
            puVar24 = *(uint **)(puVar13 + 4);
            bVar5 = puVar13 != *(uint **)puVar24;
            puVar13 = puVar24;
          } while (bVar5);
        }
        else {
          do {
            puVar24 = puVar12;
            puVar12 = *(uint **)puVar24;
          } while (*(uint **)puVar24 != (uint *)0x0);
        }
        if (*(uint **)(param_1 + 2) == puVar23) {
          *(uint **)(param_1 + 2) = puVar24;
        }
        *(long *)(param_1 + 6) = *(long *)(param_1 + 6) + -1;
        FUN_005d5d48(*(undefined8 *)(param_1 + 4),puVar23);
        if (puVar23 == (uint *)0xffffffffffffffe6) goto LAB_0093ab28;
        operator_delete(puVar23);
        puVar23 = puVar24;
      } while (puVar20 != puVar24);
      uVar14 = *param_1;
    }
    uVar16 = uVar19 & 0xffff;
    uVar15 = uVar14;
    if (uVar16 != (uVar14 & 0xffff)) {
      uVar17 = uVar14 & 0xffff;
      uVar11 = uVar14 - uVar19 ^ 0x8000;
      if (uVar16 <= uVar17) {
        uVar11 = uVar14 - uVar19;
      }
      uVar21 = uVar19 - uVar14 ^ 0x8000;
      if (uVar17 <= uVar16) {
        uVar21 = uVar19 - uVar14;
      }
      uVar21 = uVar21 & 0xffff;
      uVar2 = uVar21;
      if ((uVar11 & 0xffff) <= uVar21) {
        uVar2 = uVar11 & 0xffff;
      }
      bVar5 = uVar17 < uVar16;
      if (uVar2 != 0x4000) {
        bVar5 = uVar21 < 0x4001;
      }
      if (bVar5) {
        uVar14 = uVar19 & 0xffff;
        *param_1 = uVar14;
        uVar15 = uVar19;
      }
    }
    uVar1 = *(ushort *)(param_2 + 0x9e0);
    if ((uint)uVar1 != (uVar15 & 0xffff)) {
      uVar19 = uVar15 & 0xffff;
      uVar17 = uVar15 - uVar1;
      uVar11 = (uint)uVar1;
      uVar16 = uVar17 ^ 0x8000;
      if (uVar19 >= uVar11) {
        uVar16 = uVar17;
      }
      uVar17 = uVar11 - uVar15 ^ 0x8000;
      if (uVar19 <= uVar11) {
        uVar17 = uVar11 - uVar15;
      }
      uVar17 = uVar17 & 0xffff;
      uVar15 = uVar17;
      if ((uVar16 & 0xffff) <= uVar17) {
        uVar15 = uVar16 & 0xffff;
      }
      bVar5 = uVar19 < uVar11;
      if (uVar15 != 0x4000) {
        bVar5 = uVar17 < 0x4001;
      }
      if (bVar5) {
        do {
          puVar23 = *(uint **)(param_1 + 4);
          iVar22 = -0x7fff;
          if (uVar14 < 0x7fff) {
            iVar22 = 1;
          }
          uVar14 = iVar22 + uVar14;
          *param_1 = uVar14;
          puVar12 = puVar25;
          puVar20 = puVar25;
          if (puVar23 == (uint *)0x0) {
LAB_0093a61c:
            puVar8 = (undefined8 *)operator_new(0x20);
            if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                        );
            }
            *(short *)((long)puVar8 + 0x1a) = (short)uVar14;
            *puVar8 = 0;
            puVar8[1] = 0;
            puVar8[2] = puVar12;
            *(undefined8 **)puVar20 = puVar8;
            if (**(long **)(param_1 + 2) != 0) {
              *(long *)(param_1 + 2) = **(long **)(param_1 + 2);
              puVar8 = *(undefined8 **)puVar20;
            }
            FUN_005d5b94(*(undefined8 *)(param_1 + 4),puVar8);
            uVar14 = *param_1;
            *(long *)(param_1 + 6) = *(long *)(param_1 + 6) + 1;
          }
          else {
            uVar1 = *(ushort *)((long)puVar23 + 0x1a);
            if ((uint)uVar1 != (uVar14 & 0xffff)) {
              do {
                uVar15 = (uint)uVar1;
                uVar19 = uVar14 & 0xffff;
                uVar16 = uVar14 - uVar15 ^ 0xffff8000;
                if (uVar15 <= uVar19) {
                  uVar16 = uVar14 - uVar15;
                }
                uVar17 = uVar15 - uVar14 ^ 0x8000;
                if (uVar19 <= uVar15) {
                  uVar17 = uVar15 - uVar14;
                }
                uVar16 = uVar16 & 0xffff;
                uVar17 = uVar17 & 0xffff;
                uVar11 = uVar17;
                if (uVar16 <= uVar17) {
                  uVar11 = uVar16;
                }
                bVar5 = uVar19 < uVar15;
                if (uVar11 != 0x4000) {
                  bVar5 = uVar17 < 0x4001;
                }
                puVar12 = puVar23;
                if (bVar5) {
                  puVar13 = *(uint **)puVar23;
                  puVar20 = puVar23;
                  if (puVar13 == (uint *)0x0) goto LAB_0093a61c;
                }
                else {
                  bVar5 = uVar15 < (uVar14 & 0xffff);
                  if (uVar11 != 0x4000) {
                    bVar5 = uVar16 < 0x4001;
                  }
                  if (!bVar5) break;
                  puVar13 = *(uint **)(puVar23 + 2);
                  if (puVar13 == (uint *)0x0) {
                    puVar20 = puVar23 + 2;
                    goto LAB_0093a61c;
                  }
                }
                uVar1 = *(ushort *)((long)puVar13 + 0x1a);
                puVar23 = puVar13;
              } while ((uint)uVar1 != (uVar14 & 0xffff));
            }
          }
          param_4 = local_68;
        } while (*(long *)(param_2 + 0x9e0) != (long)(int)uVar14);
      }
    }
    puVar20 = param_1 + 0x16;
    puVar12 = param_1 + 0x14;
    puVar23 = puVar20;
    if (*(uint **)puVar20 != (uint *)0x0) {
      puVar13 = *(uint **)puVar20;
      puVar24 = puVar20;
      do {
        while (puVar26 = puVar13, puVar23 = puVar26, *(long *)(puVar26 + 8) <= param_4 + -0x32) {
          if ((param_4 + -0x32 == *(long *)(puVar26 + 8)) ||
             (puVar13 = *(uint **)(puVar26 + 2), puVar23 = puVar24,
             *(uint **)(puVar26 + 2) == (uint *)0x0)) goto LAB_0093a6a8;
        }
        puVar13 = *(uint **)puVar26;
        puVar24 = puVar26;
      } while (*(uint **)puVar26 != (uint *)0x0);
    }
LAB_0093a6a8:
    puVar13 = *(uint **)puVar12;
    while (puVar13 != puVar23) {
      puVar24 = *(uint **)(puVar13 + 2);
      puVar26 = puVar13;
      if (*(uint **)(puVar13 + 2) == (uint *)0x0) {
        do {
          puVar27 = *(uint **)(puVar26 + 4);
          bVar5 = puVar26 != *(uint **)puVar27;
          puVar26 = puVar27;
        } while (bVar5);
      }
      else {
        do {
          puVar27 = puVar24;
          puVar24 = *(uint **)puVar27;
        } while (*(uint **)puVar27 != (uint *)0x0);
      }
      if (*(uint **)puVar12 == puVar13) {
        *(uint **)puVar12 = puVar27;
      }
      *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + -1;
      FUN_005d5d48(*(undefined8 *)(param_1 + 0x16),puVar13);
      if (puVar13 == (uint *)0xffffffffffffffe0) {
LAB_0093ab28:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      operator_delete(puVar13);
      puVar13 = puVar27;
    }
    cVar3 = *(char *)(param_3 + 6);
    if (*(int *)(param_2 + 0x20) != 3) {
      puVar23 = *(uint **)puVar20;
      if (puVar23 != (uint *)0x0) {
        lVar9 = param_4 - (ulong)(cVar3 == '\0');
        do {
          while (lVar9 < *(long *)(puVar23 + 8)) {
            puVar23 = *(uint **)puVar23;
            if (puVar23 == (uint *)0x0) {
              return 0;
            }
          }
          if (lVar9 == *(long *)(puVar23 + 8)) {
            if (puVar23 == puVar20) {
              return 0;
            }
            if (cVar3 == '\0') {
              lVar9 = FUN_0093c56c(0,puVar12,puVar12,&local_68,puVar23 + 10);
              uVar1 = *(ushort *)(param_2 + 0x9e0);
              *(undefined8 *)(param_2 + 0x188) = 1;
              uVar15 = (uint)*(undefined8 *)(lVar9 + 0x28);
              uVar14 = uVar15 & 0xffff;
              uVar16 = uVar1 - uVar15;
              uVar15 = uVar15 - uVar1;
              uVar17 = (uint)uVar1;
              uVar19 = uVar16 ^ 0x8000;
              if (uVar14 <= uVar17) {
                uVar19 = uVar16;
              }
              uVar16 = uVar15 ^ 0x8000;
              if (uVar17 <= uVar14) {
                uVar16 = uVar15;
              }
              uVar16 = uVar16 & 0xffff;
              uVar15 = uVar16;
              if ((uVar19 & 0xffff) <= uVar16) {
                uVar15 = uVar19 & 0xffff;
              }
              bVar5 = uVar17 < uVar14;
              if (uVar15 != 0x4000) {
                bVar5 = uVar16 < 0x4001;
              }
              if (bVar5) {
                return 2;
              }
              *(undefined8 *)(param_2 + 400) = *(undefined8 *)(lVar9 + 0x28);
              goto LAB_0093a7bc;
            }
            puVar23 = puVar23 + 10;
            if (*(char *)(param_3 + 7) != '\x01') {
              uVar18 = 0;
              *(undefined8 *)(param_2 + 0x188) = 0;
              goto LAB_0093a908;
            }
            *(undefined8 *)(param_2 + 0x188) = 1;
            if (4 < (ulong)*(byte *)(param_3 + 6)) goto LAB_0093abe8;
            if (*(long *)(puVar23 + (ulong)*(byte *)(param_3 + 6) * 2) != -1) {
              uVar1 = *(ushort *)(param_2 + 0x9e0);
              uVar16 = (uint)*(long *)(puVar23 + (ulong)*(byte *)(param_3 + 6) * 2);
              uVar14 = uVar16 & 0xffff;
              uVar15 = (uint)uVar1;
              uVar17 = (uint)uVar1;
              uVar19 = uVar15 - uVar16 ^ 0x8000;
              if (uVar15 > uVar14 || uVar14 == uVar17) {
                uVar19 = uVar15 - uVar16;
              }
              uVar11 = uVar16 - uVar17 ^ 0x8000;
              if (uVar17 <= uVar14) {
                uVar11 = uVar16 - uVar17;
              }
              uVar11 = uVar11 & 0xffff;
              uVar16 = uVar11;
              if ((uVar19 & 0xffff) <= uVar11) {
                uVar16 = uVar19 & 0xffff;
              }
              bVar5 = uVar15 <= uVar14 && uVar14 != uVar17;
              if (uVar16 != 0x4000) {
                bVar5 = uVar11 < 0x4001;
              }
              if (bVar5) {
                return 2;
              }
            }
            *(undefined8 *)(param_2 + 400) = *(undefined8 *)puVar23;
            uVar10 = (ulong)*(byte *)(param_3 + 6);
            goto LAB_0093a7cc;
          }
          puVar23 = *(uint **)(puVar23 + 2);
        } while (puVar23 != (uint *)0x0);
      }
      return 0;
    }
    if (cVar3 == '\0') {
      local_a0 = &local_68;
      *(undefined8 *)(param_2 + 0x188) = 0;
      lVar9 = FUN_0093c458(0,puVar12,puVar12,&DAT_001f94c3,&local_a0,&local_78);
      *(undefined8 *)(lVar9 + 0x48) = 0xffffffffffffffff;
      *(undefined8 *)(lVar9 + 0x40) = 0xffffffffffffffff;
      *(undefined8 *)(lVar9 + 0x38) = 0xffffffffffffffff;
      *(undefined8 *)(lVar9 + 0x30) = 0xffffffffffffffff;
      *(undefined8 *)(lVar9 + 0x28) = 0xffffffffffffffff;
LAB_0093a7bc:
      uVar10 = (ulong)*(byte *)(param_3 + 6);
      param_4 = local_68;
      goto LAB_0093a7cc;
    }
  }
  return 2;
  while( true ) {
    uVar15 = uVar14 & 0xffff;
    uVar17 = uVar14 - uVar19 ^ 0x8000;
    if (uVar19 <= uVar15) {
      uVar17 = uVar14 - uVar19;
    }
    uVar11 = uVar19 - uVar14 ^ 0x8000;
    if (uVar15 < uVar19 || uVar15 == uVar16) {
      uVar11 = uVar19 - uVar14;
    }
    uVar11 = uVar11 & 0xffff;
    uVar14 = uVar11;
    if ((uVar17 & 0xffff) <= uVar11) {
      uVar14 = uVar17 & 0xffff;
    }
    bVar5 = uVar15 < uVar19;
    if (uVar14 != 0x4000) {
      bVar5 = uVar11 < 0x4001;
    }
    if (!bVar5) goto LAB_0093ab3c;
    *(long *)(param_2 + 0x188) = *(long *)(param_2 + 0x188) + 1;
    *(undefined8 *)(param_2 + 400 + uVar18 * 8) = *(undefined8 *)(puVar23 + uVar18 * 2);
    uVar10 = (ulong)*(byte *)(param_3 + 6);
    bVar5 = uVar10 <= uVar18;
    uVar18 = uVar18 + 1;
    if (bVar5) break;
LAB_0093a908:
    if (uVar18 == 5) {
LAB_0093abe8:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/array:277: libc++ Hardening assertion __n < _Size failed: out-of-bounds access in std::array<T, N>\n"
                );
    }
    lVar9 = *(long *)(puVar23 + uVar18 * 2);
    if (lVar9 == -1) {
      return 0;
    }
    uVar4 = *(ushort *)(param_2 + 0x9e0);
    uVar1 = (ushort)lVar9;
    uVar16 = (uint)uVar4;
    uVar14 = (uint)lVar9;
    uVar19 = (uint)uVar4;
    if ((uint)uVar4 != (uint)uVar1) {
      uVar15 = uVar14 & 0xffff;
      uVar11 = uVar4 - uVar14;
      uVar17 = uVar11 ^ 0x8000;
      if (uVar15 <= uVar19) {
        uVar17 = uVar11;
      }
      uVar11 = uVar14 - uVar19 ^ 0x8000;
      if (uVar19 < uVar15 || uVar16 == uVar15) {
        uVar11 = uVar14 - uVar19;
      }
      uVar11 = uVar11 & 0xffff;
      uVar21 = uVar11;
      if ((uVar17 & 0xffff) <= uVar11) {
        uVar21 = uVar17 & 0xffff;
      }
      bVar5 = uVar19 < uVar15;
      if (uVar21 != 0x4000) {
        bVar5 = uVar11 < 0x4001;
      }
      if (bVar5) {
        return 2;
      }
    }
    puVar20 = *(uint **)puVar25;
    puVar12 = puVar25;
    if (puVar20 != (uint *)0x0) {
      while( true ) {
        uVar4 = *(ushort *)((long)puVar20 + 0x1a);
        if ((uint)uVar4 == (uint)uVar1) break;
        uVar11 = uVar14 - uVar4;
        uVar21 = (uint)uVar4;
        uVar15 = (uint)uVar1;
        uVar17 = uVar11 ^ 0xffff8000;
        if (uVar21 <= uVar15) {
          uVar17 = uVar11;
        }
        uVar11 = uVar21 - uVar14 ^ 0x8000;
        if (uVar15 <= uVar21) {
          uVar11 = uVar21 - uVar14;
        }
        uVar17 = uVar17 & 0xffff;
        uVar11 = uVar11 & 0xffff;
        uVar2 = uVar11;
        if (uVar17 <= uVar11) {
          uVar2 = uVar17;
        }
        bVar5 = uVar15 < uVar21;
        if (uVar2 != 0x4000) {
          bVar5 = uVar11 < 0x4001;
        }
        if (bVar5) {
          puVar13 = *(uint **)puVar20;
          puVar12 = puVar20;
        }
        else {
          bVar5 = uVar21 < uVar1;
          if (uVar2 != 0x4000) {
            bVar5 = uVar17 < 0x4001;
          }
          if (!bVar5) break;
          puVar13 = *(uint **)(puVar20 + 2);
        }
        puVar20 = puVar13;
        if (puVar20 == (uint *)0x0) goto LAB_0093aa24;
      }
      puVar20 = *(uint **)(puVar20 + 2);
      while (puVar13 = puVar20, puVar13 != (uint *)0x0) {
        puVar12 = puVar13;
        puVar20 = *(uint **)puVar13;
      }
LAB_0093aa24:
      if (puVar12 != puVar25) {
        uVar4 = *(ushort *)((long)puVar12 + 0x1a);
        if (uVar4 != uVar16) {
          uVar17 = uVar19 - uVar4;
          bVar5 = uVar19 <= uVar4;
          uVar11 = uVar4 - uVar19;
          uVar15 = uVar11 ^ 0x8000;
          if (bVar5) {
            uVar15 = uVar11;
          }
          uVar21 = uVar17 ^ 0x8000;
          if (!bVar5 || uVar11 == 0) {
            uVar21 = uVar17;
          }
          uVar21 = uVar21 & 0xffff;
          uVar17 = uVar21;
          if ((uVar15 & 0xffff) <= uVar21) {
            uVar17 = uVar15 & 0xffff;
          }
          bVar5 = !bVar5;
          if (uVar17 != 0x4000) {
            bVar5 = uVar21 < 0x4001;
          }
          if (bVar5) {
            return 0;
          }
        }
      }
    }
    if (uVar19 == uVar1) {
LAB_0093ab3c:
      uVar18 = FUN_004022fc();
      if ((uVar18 & 1) != 0) {
        return 2;
      }
      local_a0 = (long *)0x19e6ea;
      local_98 = 0x5a2;
      local_90 = &uStack_a1;
      pplStack_80 = &local_a0;
      local_78 = *(undefined8 *)(param_2 + 0x9e0);
      local_88 = "Frame with picture id ";
      ppcStack_70 = &local_88;
      uVar6 = FUN_0084f7f0(param_2);
      uVar7 = FUN_0084f7fc(param_2);
      FUN_00623bb0(&DAT_0022825f,*pplStack_80,*(undefined4 *)(pplStack_80 + 1),local_88,local_78,
                   " and packet range [",uVar6,&DAT_001e1644,uVar7,
                   "] already received,  dropping frame.");
      return 2;
    }
  }
LAB_0093a7cc:
  FUN_0093ae74(param_1,param_2,param_4,uVar10);
  return 1;
}


// ===== 0093abfc  FUN_0093abfc =====

void FUN_0093abfc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  
  if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/deque:2199: libc++ Hardening assertion !empty() failed: deque::pop_back called on an empty deque\n"
              );
  }
  uVar5 = (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) - 1;
  lVar1 = *(long *)(*(long *)(param_1 + 8) + (uVar5 >> 8) * 8) + (uVar5 & 0xff) * 0x10;
  if (lVar1 != 0) {
    plVar4 = *(long **)(lVar1 + 8);
    *(undefined8 *)(lVar1 + 8) = 0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    lVar2 = *(long *)(param_1 + 0x10);
    lVar3 = *(long *)(param_1 + 0x28);
    lVar1 = 0;
    if (lVar2 != *(long *)(param_1 + 8)) {
      lVar1 = (lVar2 - *(long *)(param_1 + 8)) * 0x20 + -1;
    }
    *(long *)(param_1 + 0x28) = lVar3 + -1;
    if (0x1ff < (lVar1 - (lVar3 + *(long *)(param_1 + 0x20))) + 1U) {
      operator_delete(*(void **)(lVar2 + -8));
      lVar1 = *(long *)(param_1 + 0x10) + -8;
      if (lVar1 == 0) goto LAB_0093acb4;
      *(long *)(param_1 + 0x10) = lVar1;
    }
    return;
  }
LAB_0093acb4:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 0093acdc  FUN_0093acdc =====

void FUN_0093acdc(long param_1,ulong *param_2)

{
  ulong *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  bool bVar11;
  undefined1 auVar12 [16];
  
  lVar3 = *(long *)(param_1 + 0x28);
  lVar5 = *(long *)(param_1 + 0x30);
LAB_0093ad14:
  plVar7 = (long *)(lVar3 + (*(ulong *)(param_1 + 0x40) >> 8) * 8);
  if (lVar3 == lVar5) {
    lVar8 = 0;
  }
  else {
    lVar8 = *plVar7 + (*(ulong *)(param_1 + 0x40) & 0xff) * 0x10;
  }
  auVar12._8_8_ = lVar8;
  auVar12._0_8_ = plVar7;
  bVar11 = false;
  do {
    puVar9 = auVar12._8_8_;
    plVar7 = auVar12._0_8_;
    if (lVar3 == lVar5) {
      if (puVar9 == (undefined8 *)0x0) break;
    }
    else {
      uVar6 = *(long *)(param_1 + 0x48) + *(long *)(param_1 + 0x40);
      if (puVar9 == (undefined8 *)(*(long *)(lVar3 + (uVar6 >> 8) * 8) + (uVar6 & 0xff) * 0x10))
      break;
    }
    puVar10 = puVar9 + 1;
    lVar3 = FUN_0084f840(*puVar10);
    if (*(char *)(lVar3 + 0x790) != '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_005ee558();
    }
    iVar2 = FUN_0093a2a8(param_1,puVar9[1],lVar3 + 0x128,*puVar9);
    if (iVar2 == 2) {
LAB_0093ad50:
      auVar12 = FUN_0093b308(param_1 + 0x20,plVar7,puVar9);
    }
    else {
      if (iVar2 == 1) {
        uVar4 = *param_2;
        uVar6 = 3;
        if ((uVar4 & 1) != 0) {
          uVar6 = param_2[2];
        }
        if (uVar4 >> 1 == uVar6) {
          FUN_0093976c(param_2,puVar10);
        }
        else {
          puVar1 = param_2 + 1;
          if ((uVar4 & 1) != 0) {
            puVar1 = (ulong *)param_2[1];
          }
          if (puVar1 + (uVar4 >> 1) == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          uVar6 = *puVar10;
          *puVar10 = 0;
          puVar1[uVar4 >> 1] = uVar6;
          *param_2 = *param_2 + 2;
        }
        bVar11 = true;
        goto LAB_0093ad50;
      }
      auVar12._8_8_ = puVar9 + 2;
      auVar12._0_8_ = plVar7;
      if ((long)(puVar9 + 2) - *plVar7 == 0x1000) {
        auVar12._8_8_ = plVar7[1];
        auVar12._0_8_ = plVar7 + 1;
      }
    }
    lVar3 = *(long *)(param_1 + 0x28);
    lVar5 = *(long *)(param_1 + 0x30);
  } while( true );
  if (!bVar11) {
    return;
  }
  goto LAB_0093ad14;
}


// ===== 0093ae74  FUN_0093ae74 =====

void FUN_0093ae74(long param_1,long param_2,long param_3,byte param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  undefined2 local_24 [2];
  
  plVar6 = (long *)(param_1 + 0x58);
  for (plVar7 = (long *)*plVar6; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
    while (plVar7[4] <= param_3) {
      if (param_3 == plVar7[4]) {
        if (plVar7 == plVar6) goto LAB_0093af88;
        if (4 < param_4) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/array:277: libc++ Hardening assertion __n < _Size failed: out-of-bounds access in std::array<T, N>\n"
                    );
        }
        goto LAB_0093aedc;
      }
      plVar7 = (long *)plVar7[1];
      if (plVar7 == (long *)0x0) goto LAB_0093af88;
    }
  }
LAB_0093af88:
  local_24[0] = (undefined2)*(undefined8 *)(param_2 + 0x9e0);
  FUN_0093c688(param_1 + 8,local_24);
  FUN_0093afd0(param_1,param_2);
  return;
LAB_0093aedc:
  lVar9 = *(long *)(param_2 + 0x9e0);
  if (plVar7[(ulong)param_4 + 5] != -1) {
    uVar10 = (uint)plVar7[(ulong)param_4 + 5];
    uVar1 = uVar10 & 0xffff;
    if (uVar1 != (ushort)lVar9) {
      uVar8 = (uint)lVar9;
      uVar2 = uVar8 & 0xffff;
      uVar4 = uVar8 - uVar10 ^ 0x8000;
      if (uVar1 <= uVar2) {
        uVar4 = uVar8 - uVar10;
      }
      uVar3 = uVar10 - uVar8 ^ 0x8000;
      if (uVar2 <= uVar1) {
        uVar3 = uVar10 - uVar8;
      }
      uVar3 = uVar3 & 0xffff;
      uVar10 = uVar3;
      if ((uVar4 & 0xffff) <= uVar3) {
        uVar10 = uVar4 & 0xffff;
      }
      bVar5 = uVar2 < uVar1;
      if (uVar10 != 0x4000) {
        bVar5 = uVar3 < 0x4001;
      }
      if (bVar5) goto LAB_0093af88;
    }
  }
  plVar7[(ulong)param_4 + 5] = lVar9;
  plVar7 = (long *)*plVar6;
  if (plVar7 != (long *)0x0) {
    param_3 = param_3 + 1;
    do {
      if (param_3 < plVar7[4]) {
        plVar7 = (long *)*plVar7;
      }
      else {
        if (param_3 == plVar7[4]) goto LAB_0093af80;
        plVar7 = (long *)plVar7[1];
      }
      if (plVar7 == (long *)0x0) break;
    } while( true );
  }
  goto LAB_0093af88;
LAB_0093af80:
  if (plVar7 == plVar6) goto LAB_0093af88;
  goto LAB_0093aedc;
}


// ===== 0093afd0  FUN_0093afd0 =====

void FUN_0093afd0(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  ulong uVar9;
  
  if (*(long *)(param_2 + 0x188) != 0) {
    uVar3 = *(ushort *)(param_2 + 400);
    uVar9 = (ulong)uVar3;
    if ((*(byte *)(param_1 + 0x72) & 1) != 0) {
      uVar4 = *(ushort *)(param_1 + 0x70);
      uVar8 = (uint)uVar3;
      uVar5 = uVar8 - uVar4;
      bVar7 = uVar8 <= uVar4;
      uVar8 = uVar4 - uVar8;
      uVar1 = uVar5 ^ 0xffff8000;
      if (!bVar7 || uVar8 == 0) {
        uVar1 = uVar5;
      }
      uVar5 = uVar8 ^ 0x8000;
      if (bVar7) {
        uVar5 = uVar8;
      }
      uVar8 = uVar1 & 0xffff;
      uVar2 = uVar8;
      if ((uVar5 & 0xffff) <= uVar8) {
        uVar2 = uVar5 & 0xffff;
      }
      bVar7 = !bVar7;
      if (uVar2 != 0x4000) {
        bVar7 = uVar8 < 0x4001;
      }
      uVar9 = (ulong)uVar1 & 0xffff;
      if (!bVar7) {
        uVar9 = ((ulong)uVar1 & 0xffff) - 0x8000;
      }
      uVar9 = uVar9 + *(long *)(param_1 + 0x68);
    }
    *(ushort *)(param_1 + 0x70) = uVar3;
    *(ulong *)(param_1 + 0x68) = uVar9;
    *(undefined1 *)(param_1 + 0x72) = 1;
    *(ulong *)(param_2 + 400) = uVar9;
    if (1 < *(ulong *)(param_2 + 0x188)) {
      uVar3 = *(ushort *)(param_2 + 0x198);
      uVar9 = (ulong)uVar3;
      if ((*(byte *)(param_1 + 0x72) & 1) != 0) {
        uVar4 = *(ushort *)(param_1 + 0x70);
        uVar8 = (uint)uVar3;
        uVar5 = uVar8 - uVar4;
        bVar7 = uVar8 <= uVar4;
        uVar8 = uVar4 - uVar8;
        uVar1 = uVar5 ^ 0xffff8000;
        if (!bVar7 || uVar8 == 0) {
          uVar1 = uVar5;
        }
        uVar5 = uVar8 ^ 0x8000;
        if (bVar7) {
          uVar5 = uVar8;
        }
        uVar8 = uVar1 & 0xffff;
        uVar2 = uVar8;
        if ((uVar5 & 0xffff) <= uVar8) {
          uVar2 = uVar5 & 0xffff;
        }
        bVar7 = !bVar7;
        if (uVar2 != 0x4000) {
          bVar7 = uVar8 < 0x4001;
        }
        uVar9 = (ulong)uVar1 & 0xffff;
        if (!bVar7) {
          uVar9 = ((ulong)uVar1 & 0xffff) - 0x8000;
        }
        uVar9 = uVar9 + *(long *)(param_1 + 0x68);
      }
      *(ushort *)(param_1 + 0x70) = uVar3;
      *(ulong *)(param_1 + 0x68) = uVar9;
      *(undefined1 *)(param_1 + 0x72) = 1;
      *(ulong *)(param_2 + 0x198) = uVar9;
      if (2 < *(ulong *)(param_2 + 0x188)) {
        uVar3 = *(ushort *)(param_2 + 0x1a0);
        uVar9 = (ulong)uVar3;
        if ((*(byte *)(param_1 + 0x72) & 1) != 0) {
          uVar4 = *(ushort *)(param_1 + 0x70);
          uVar8 = (uint)uVar3;
          uVar5 = uVar8 - uVar4;
          bVar7 = uVar8 <= uVar4;
          uVar8 = uVar4 - uVar8;
          uVar1 = uVar5 ^ 0xffff8000;
          if (!bVar7 || uVar8 == 0) {
            uVar1 = uVar5;
          }
          uVar5 = uVar8 ^ 0x8000;
          if (bVar7) {
            uVar5 = uVar8;
          }
          uVar8 = uVar1 & 0xffff;
          uVar2 = uVar8;
          if ((uVar5 & 0xffff) <= uVar8) {
            uVar2 = uVar5 & 0xffff;
          }
          bVar7 = !bVar7;
          if (uVar2 != 0x4000) {
            bVar7 = uVar8 < 0x4001;
          }
          uVar9 = (ulong)uVar1 & 0xffff;
          if (!bVar7) {
            uVar9 = ((ulong)uVar1 & 0xffff) - 0x8000;
          }
          uVar9 = uVar9 + *(long *)(param_1 + 0x68);
        }
        *(ushort *)(param_1 + 0x70) = uVar3;
        *(ulong *)(param_1 + 0x68) = uVar9;
        *(undefined1 *)(param_1 + 0x72) = 1;
        *(ulong *)(param_2 + 0x1a0) = uVar9;
        if (3 < *(ulong *)(param_2 + 0x188)) {
          uVar3 = *(ushort *)(param_2 + 0x1a8);
          uVar9 = (ulong)uVar3;
          if ((*(byte *)(param_1 + 0x72) & 1) != 0) {
            uVar4 = *(ushort *)(param_1 + 0x70);
            uVar8 = (uint)uVar3;
            uVar5 = uVar8 - uVar4;
            bVar7 = uVar8 <= uVar4;
            uVar8 = uVar4 - uVar8;
            uVar1 = uVar5 ^ 0xffff8000;
            if (!bVar7 || uVar8 == 0) {
              uVar1 = uVar5;
            }
            uVar5 = uVar8 ^ 0x8000;
            if (bVar7) {
              uVar5 = uVar8;
            }
            uVar8 = uVar1 & 0xffff;
            uVar2 = uVar8;
            if ((uVar5 & 0xffff) <= uVar8) {
              uVar2 = uVar5 & 0xffff;
            }
            bVar7 = !bVar7;
            if (uVar2 != 0x4000) {
              bVar7 = uVar8 < 0x4001;
            }
            uVar9 = (ulong)uVar1 & 0xffff;
            if (!bVar7) {
              uVar9 = ((ulong)uVar1 & 0xffff) - 0x8000;
            }
            uVar9 = uVar9 + *(long *)(param_1 + 0x68);
          }
          *(ushort *)(param_1 + 0x70) = uVar3;
          *(ulong *)(param_1 + 0x68) = uVar9;
          *(undefined1 *)(param_1 + 0x72) = 1;
          *(ulong *)(param_2 + 0x1a8) = uVar9;
          if (4 < *(ulong *)(param_2 + 0x188)) {
            uVar3 = *(ushort *)(param_2 + 0x1b0);
            uVar9 = (ulong)uVar3;
            if ((*(byte *)(param_1 + 0x72) & 1) != 0) {
              uVar4 = *(ushort *)(param_1 + 0x70);
              uVar8 = (uint)uVar3;
              uVar5 = uVar8 - uVar4;
              bVar7 = uVar8 <= uVar4;
              uVar8 = uVar4 - uVar8;
              uVar1 = uVar5 ^ 0xffff8000;
              if (!bVar7 || uVar8 == 0) {
                uVar1 = uVar5;
              }
              uVar5 = uVar8 ^ 0x8000;
              if (bVar7) {
                uVar5 = uVar8;
              }
              uVar8 = uVar1 & 0xffff;
              uVar2 = uVar8;
              if ((uVar5 & 0xffff) <= uVar8) {
                uVar2 = uVar5 & 0xffff;
              }
              bVar7 = !bVar7;
              if (uVar2 != 0x4000) {
                bVar7 = uVar8 < 0x4001;
              }
              uVar9 = (ulong)uVar1 & 0xffff;
              if (!bVar7) {
                uVar9 = ((ulong)uVar1 & 0xffff) - 0x8000;
              }
              uVar9 = uVar9 + *(long *)(param_1 + 0x68);
            }
            *(ushort *)(param_1 + 0x70) = uVar3;
            *(ulong *)(param_1 + 0x68) = uVar9;
            *(undefined1 *)(param_1 + 0x72) = 1;
            *(ulong *)(param_2 + 0x1b0) = uVar9;
            if (5 < *(ulong *)(param_2 + 0x188)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(0x5512,0x93b308);
              (*pcVar6)();
            }
          }
        }
      }
    }
  }
  uVar3 = *(ushort *)(param_2 + 0x9e0);
  uVar9 = (ulong)uVar3;
  if ((*(byte *)(param_1 + 0x72) & 1) != 0) {
    uVar4 = *(ushort *)(param_1 + 0x70);
    uVar8 = (uint)uVar3;
    uVar5 = uVar8 - uVar4;
    bVar7 = uVar8 <= uVar4;
    uVar8 = uVar4 - uVar8;
    uVar1 = uVar5 ^ 0xffff8000;
    if (!bVar7 || uVar8 == 0) {
      uVar1 = uVar5;
    }
    uVar5 = uVar8 ^ 0x8000;
    if (bVar7) {
      uVar5 = uVar8;
    }
    uVar8 = uVar1 & 0xffff;
    uVar2 = uVar8;
    if ((uVar5 & 0xffff) <= uVar8) {
      uVar2 = uVar5 & 0xffff;
    }
    bVar7 = !bVar7;
    if (uVar2 != 0x4000) {
      bVar7 = uVar8 < 0x4001;
    }
    uVar9 = (ulong)uVar1 & 0xffff;
    if (!bVar7) {
      uVar9 = ((ulong)uVar1 & 0xffff) - 0x8000;
    }
    uVar9 = uVar9 + *(long *)(param_1 + 0x68);
  }
  *(ushort *)(param_1 + 0x70) = uVar3;
  *(ulong *)(param_1 + 0x68) = uVar9;
  *(undefined1 *)(param_1 + 0x72) = 1;
  *(ulong *)(param_2 + 0x9e0) = uVar9;
  return;
}


// ===== 0093b308  FUN_0093b308 =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0093b308(long param_1,long *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long *local_40;
  long local_38;
  
  uVar3 = *(ulong *)(param_1 + 0x20);
  lVar9 = *(long *)(param_1 + 8);
  lVar4 = *(long *)(param_1 + 0x10);
  uVar14 = uVar3 + *(long *)(param_1 + 0x28);
  plVar7 = (long *)(lVar9 + (uVar14 >> 8) * 8);
  if (lVar9 == lVar4) {
    if (param_3 == 0) goto LAB_0093b68c;
    lVar13 = 0;
    plVar6 = (long *)(lVar9 + (uVar3 >> 8) * 8);
    lVar10 = lVar13;
    if (param_3 != 0) goto LAB_0093b36c;
LAB_0093b3c4:
    lVar11 = *plVar6;
    plVar8 = plVar6;
    lVar10 = lVar13;
    goto LAB_0093b458;
  }
  if (param_3 == *plVar7 + (uVar14 & 0xff) * 0x10) {
LAB_0093b68c:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/deque:2327: libc++ Hardening assertion __f != end() failed: deque::erase(iterator) called with a non-dereferenceable iterator\n"
              );
  }
  plVar6 = (long *)(lVar9 + (uVar3 >> 8) * 8);
  lVar13 = *plVar6 + (uVar3 & 0xff) * 0x10;
  lVar10 = lVar13;
  if (param_3 == lVar13) goto LAB_0093b3c4;
LAB_0093b36c:
  lVar11 = *plVar6;
  uVar1 = (param_3 - *param_2 >> 4) + ((long)param_2 - (long)plVar6) * 0x20;
  uVar3 = lVar10 - lVar11 >> 4;
  lVar13 = lVar10;
  plVar8 = plVar6;
  if (uVar1 != uVar3) {
    if ((long)uVar1 < 1) {
      uVar5 = 0xff - uVar1;
      uVar2 = 0x1fe - uVar1;
      if (-1 < (long)uVar5) {
        uVar2 = uVar5;
      }
      uVar12 = uVar5 & 0xff;
      if ((long)uVar5 < 1) {
        uVar12 = -(-uVar5 & 0xff);
      }
      plVar8 = plVar6 + -((long)uVar2 >> 8);
      lVar11 = *plVar8;
      lVar13 = lVar11 + (0xff - uVar12) * 0x10;
    }
    else {
      plVar8 = plVar6 + (uVar1 >> 8);
      lVar11 = *plVar8;
      lVar13 = lVar11 + (uVar1 & 0xff) * 0x10;
    }
    if (*(long *)(param_1 + 0x28) - 1U >> 1 < uVar1 - uVar3) {
      lVar10 = lVar13 - lVar11 >> 4;
      if (lVar10 < 0) {
        plVar6 = plVar8 + -(0xfeU - lVar10 >> 8);
        lVar10 = *plVar6 + (ulong)(byte)~(byte)(0xfeU - lVar10) * 0x10;
        if (lVar9 != lVar4) goto LAB_0093b448;
LAB_0093b5d8:
        lVar9 = 0;
      }
      else {
        plVar6 = plVar8 + (lVar10 + 1U >> 8);
        lVar10 = *plVar6 + (lVar10 + 1U & 0xff) * 0x10;
        if (lVar9 == lVar4) goto LAB_0093b5d8;
LAB_0093b448:
        lVar9 = *plVar7 + (uVar14 & 0xff) * 0x10;
      }
      local_40 = plVar8;
      local_38 = lVar13;
      FUN_0093caf0(plVar6,lVar10,plVar7,lVar9,&local_40);
      if (local_38 != 0) {
        plVar7 = *(long **)(local_38 + 8);
        *(undefined8 *)(local_38 + 8) = 0;
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 8))();
        }
        lVar4 = *(long *)(param_1 + 0x10);
        lVar13 = *(long *)(param_1 + 0x28);
        lVar9 = 0;
        if (lVar4 != *(long *)(param_1 + 8)) {
          lVar9 = (lVar4 - *(long *)(param_1 + 8)) * 0x20 + -1;
        }
        *(long *)(param_1 + 0x28) = lVar13 + -1;
        if ((lVar9 - (lVar13 + *(long *)(param_1 + 0x20))) + 1U < 0x200) {
          return;
        }
        operator_delete(*(void **)(lVar4 + -8));
        lVar9 = *(long *)(param_1 + 0x10) + -8;
        if (lVar9 != 0) {
          *(long *)(param_1 + 0x10) = lVar9;
          return;
        }
      }
      goto LAB_0093b678;
    }
  }
LAB_0093b458:
  lVar9 = lVar13 - lVar11 >> 4;
  if (lVar9 < 0) {
    local_40 = plVar8 + -(0xfeU - lVar9 >> 8);
    local_38 = *local_40 + (ulong)(byte)~(byte)(0xfeU - lVar9) * 0x10;
  }
  else {
    local_40 = plVar8 + (lVar9 + 1U >> 8);
    local_38 = *local_40 + (lVar9 + 1U & 0xff) * 0x10;
  }
  FUN_0093c7f0(plVar6,lVar10,plVar8,lVar13,&local_40);
  if (lVar10 != 0) {
    plVar7 = *(long **)(lVar10 + 8);
    *(undefined8 *)(lVar10 + 8) = 0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))();
    }
    uVar14 = *(long *)(param_1 + 0x20) + _DAT_001f2940;
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + _UNK_001f2948;
    *(ulong *)(param_1 + 0x20) = uVar14;
    if (0x1ff < uVar14) {
      operator_delete((void *)**(undefined8 **)(param_1 + 8));
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -0x100;
    }
    return;
  }
LAB_0093b678:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 0093b6a0  FUN_0093b6a0 =====

void FUN_0093b6a0(long param_1,uint param_2)

{
  ulong uVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined1 auVar9 [16];
  
  lVar5 = *(long *)(param_1 + 0x28);
  lVar6 = *(long *)(param_1 + 0x30);
  plVar7 = (long *)(lVar5 + (*(ulong *)(param_1 + 0x40) >> 8) * 8);
  if (lVar5 == lVar6) {
    lVar8 = 0;
  }
  else {
    lVar8 = *plVar7 + (*(ulong *)(param_1 + 0x40) & 0xff) * 0x10;
  }
  auVar9._8_8_ = lVar8;
  auVar9._0_8_ = plVar7;
  do {
    lVar8 = auVar9._8_8_;
    plVar7 = auVar9._0_8_;
    if (lVar5 == lVar6) {
      if (lVar8 == 0) {
        return;
      }
    }
    else {
      uVar1 = *(long *)(param_1 + 0x48) + *(long *)(param_1 + 0x40);
      if (lVar8 == *(long *)(lVar5 + (uVar1 >> 8) * 8) + (uVar1 & 0xff) * 0x10) {
        return;
      }
    }
    uVar4 = FUN_0084f7f0(*(undefined8 *)(lVar8 + 8));
    if ((param_2 & 0xffff) == (uVar4 & 0xffff)) {
LAB_0093b784:
      auVar9._8_8_ = lVar8 + 0x10;
      auVar9._0_8_ = plVar7;
      if ((lVar8 + 0x10) - *plVar7 == 0x1000) {
        auVar9._8_8_ = plVar7[1];
        auVar9._0_8_ = plVar7 + 1;
      }
    }
    else {
      iVar2 = (int)(short)((short)param_2 - (short)uVar4);
      bVar3 = (uVar4 & 0xffff) < (param_2 & 0xffff);
      if ((param_2 & 0xffff) - (uVar4 & 0xffff) != 0x8000) {
        bVar3 = iVar2 != -1 && iVar2 + 1 < 0 == SCARRY4(iVar2,1);
      }
      if (!bVar3) goto LAB_0093b784;
      auVar9 = FUN_0093b308(param_1 + 0x20,plVar7,lVar8);
    }
    lVar5 = *(long *)(param_1 + 0x28);
    lVar6 = *(long *)(param_1 + 0x30);
  } while( true );
}


// ===== 0093b7b8  FUN_0093b7b8 =====

void FUN_0093b7b8(long *param_1)

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
    lVar3 = (lVar6 - lVar5) * 0x20 + -1;
  }
  if ((ulong)(lVar3 - (param_1[5] + param_1[4])) < 0x100) {
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
      local_48 = operator_new(0x1000);
      FUN_0093bf48(&local_40,&local_48);
      lVar3 = param_1[1];
      puVar4 = (undefined1 *)param_1[2];
      if ((undefined1 *)lVar3 != puVar4) {
        do {
          FUN_0093c1d0(&local_40,lVar3);
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
        lVar6 = 0x80;
      }
      else {
        lVar6 = param_1[4] + 0x100;
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
      goto LAB_0093b978;
    }
    if (lVar5 == lVar3) {
      local_40 = (undefined1 *)operator_new(0x1000);
      FUN_0093bf48(param_1,&local_40);
      puVar2 = (undefined8 *)(param_1[2] + -8);
      local_40 = (undefined1 *)*puVar2;
      puVar4 = local_30;
      if (puVar2 == (undefined8 *)0x0) goto LAB_0093b978;
      param_1[2] = (long)puVar2;
      FUN_0093ba10(param_1,&local_40);
    }
    else {
      local_40 = (undefined1 *)operator_new(0x1000);
      FUN_0093bcac(param_1,&local_40);
    }
    if (param_1[2] - param_1[1] == 8) {
      lVar3 = 0x80;
    }
    else {
      lVar3 = param_1[4] + 0x100;
    }
    param_1[4] = lVar3;
  }
  else {
    param_1[4] = param_1[4] + 0x100;
    puVar2 = (undefined8 *)(lVar6 + -8);
    local_40 = (undefined1 *)*puVar2;
    puVar4 = local_30;
    if (puVar2 == (undefined8 *)0x0) {
LAB_0093b978:
      local_30 = puVar4;
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    param_1[2] = (long)puVar2;
    FUN_0093ba10(param_1,&local_40);
  }
  return;
}


// ===== 0093ba10  FUN_0093ba10 =====

void FUN_0093ba10(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar9 == (undefined8 *)0x0) goto LAB_0093bc94;
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
LAB_0093bc94:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0093bcac  FUN_0093bcac =====

void FUN_0093bcac(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar9 == (undefined8 *)0x0) goto LAB_0093bf30;
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
LAB_0093bf30:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0093bf48  FUN_0093bf48 =====

void FUN_0093bf48(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar8 == (undefined8 *)0x0) goto LAB_0093c1b8;
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
LAB_0093c1b8:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0093c1d0  FUN_0093c1d0 =====

void FUN_0093c1d0(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar8 == (undefined8 *)0x0) goto LAB_0093c440;
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
LAB_0093c440:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0093c458  FUN_0093c458 =====

undefined1  [16]
FUN_0093c458(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  
  plVar6 = (long *)*param_5;
  plVar3 = param_2 + 1;
  plVar7 = plVar3;
  if ((long *)*plVar3 != (long *)0x0) {
    lVar5 = *plVar6;
    plVar1 = (long *)*plVar3;
    do {
      while (plVar2 = plVar1, plVar3 = plVar2, lVar5 < plVar2[4]) {
        plVar1 = (long *)*plVar2;
        plVar7 = plVar2;
        if ((long *)*plVar2 == (long *)0x0) goto LAB_0093c4c0;
      }
      if (lVar5 == plVar2[4]) {
        uVar4 = 0;
        goto LAB_0093c53c;
      }
      plVar1 = (long *)plVar2[1];
    } while ((long *)plVar2[1] != (long *)0x0);
    plVar7 = plVar2 + 1;
  }
LAB_0093c4c0:
  plVar2 = (long *)operator_new(0x50);
  if ((plVar2 == (long *)0x0) || (*plVar2 = 0, plVar2 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  lVar5 = *plVar6;
  plVar2[9] = 0;
  *plVar2 = 0;
  plVar2[1] = 0;
  plVar2[4] = lVar5;
  plVar2[2] = (long)plVar3;
  plVar2[6] = 0;
  plVar2[5] = 0;
  plVar2[8] = 0;
  plVar2[7] = 0;
  *plVar7 = (long)plVar2;
  plVar3 = plVar2;
  if (*(long *)*param_2 != 0) {
    *param_2 = *(long *)*param_2;
    plVar3 = (long *)*plVar7;
  }
  FUN_005d5b94(param_2[1],plVar3);
  uVar4 = 1;
  param_2[2] = param_2[2] + 1;
LAB_0093c53c:
  auVar8._8_8_ = uVar4;
  auVar8._0_8_ = plVar2;
  return auVar8;
}


// ===== 0093c56c  FUN_0093c56c =====

undefined1  [16]
FUN_0093c56c(undefined8 param_1,long *param_2,undefined8 param_3,long *param_4,long *param_5)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auVar12 [16];
  
  plVar3 = param_2 + 1;
  plVar7 = plVar3;
  if ((long *)*plVar3 != (long *)0x0) {
    plVar1 = (long *)*plVar3;
    do {
      while (plVar2 = plVar1, plVar3 = plVar2, *param_4 < plVar2[4]) {
        plVar1 = (long *)*plVar2;
        plVar7 = plVar2;
        if ((long *)*plVar2 == (long *)0x0) goto LAB_0093c5d8;
      }
      if (*param_4 == plVar2[4]) {
        uVar4 = 0;
        goto LAB_0093c658;
      }
      plVar1 = (long *)plVar2[1];
    } while ((long *)plVar2[1] != (long *)0x0);
    plVar7 = plVar2 + 1;
  }
LAB_0093c5d8:
  plVar2 = (long *)operator_new(0x50);
  if ((plVar2 == (long *)0x0) || (*plVar2 = 0, plVar2 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  lVar9 = param_5[1];
  lVar8 = *param_5;
  lVar11 = param_5[3];
  lVar10 = param_5[2];
  lVar5 = *param_4;
  lVar6 = param_5[4];
  *plVar2 = 0;
  plVar2[1] = 0;
  plVar2[2] = (long)plVar3;
  plVar2[6] = lVar9;
  plVar2[5] = lVar8;
  plVar2[4] = lVar5;
  plVar2[8] = lVar11;
  plVar2[7] = lVar10;
  plVar2[9] = lVar6;
  *plVar7 = (long)plVar2;
  plVar3 = plVar2;
  if (*(long *)*param_2 != 0) {
    *param_2 = *(long *)*param_2;
    plVar3 = (long *)*plVar7;
  }
  FUN_005d5b94(param_2[1],plVar3);
  uVar4 = 1;
  param_2[2] = param_2[2] + 1;
LAB_0093c658:
  auVar12._8_8_ = uVar4;
  auVar12._0_8_ = plVar2;
  return auVar12;
}


// ===== 0093c688  FUN_0093c688 =====

long * FUN_0093c688(undefined8 *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  long *plVar6;
  bool bVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  
  plVar8 = (long *)param_1[1];
  if (plVar8 != (long *)0x0) {
    uVar4 = *param_2;
    uVar5 = *(ushort *)((long)plVar8 + 0x1a);
    plVar11 = plVar8;
    while (uVar5 != uVar4) {
      uVar1 = uVar4 - uVar5 ^ 0x8000;
      if (uVar5 <= uVar4) {
        uVar1 = uVar4 - uVar5;
      }
      uVar2 = uVar5 - uVar4 ^ 0x8000;
      if (uVar4 <= uVar5) {
        uVar2 = uVar5 - uVar4;
      }
      uVar3 = uVar2;
      if (uVar1 <= uVar2) {
        uVar3 = uVar1;
      }
      bVar7 = uVar4 < uVar5;
      if (uVar3 != 0x4000) {
        bVar7 = uVar2 < 0x4001;
      }
      if (bVar7) {
        plVar11 = (long *)*plVar11;
      }
      else {
        bVar7 = uVar5 < uVar4;
        if (uVar3 != 0x4000) {
          bVar7 = uVar1 < 0x4001;
        }
        if (!bVar7) break;
        plVar11 = (long *)plVar11[1];
      }
      if (plVar11 == (long *)0x0) goto LAB_0093c770;
      uVar5 = *(ushort *)((long)plVar11 + 0x1a);
    }
    if (plVar11 == param_1 + 1) {
LAB_0093c770:
      plVar8 = (long *)0x0;
    }
    else {
      plVar9 = plVar11;
      plVar6 = (long *)plVar11[1];
      if ((long *)plVar11[1] == (long *)0x0) {
        do {
          plVar10 = (long *)plVar9[2];
          bVar7 = plVar9 != (long *)*plVar10;
          plVar9 = plVar10;
        } while (bVar7);
      }
      else {
        do {
          plVar10 = plVar6;
          plVar6 = (long *)*plVar10;
        } while ((long *)*plVar10 != (long *)0x0);
      }
      if ((long *)*param_1 == plVar11) {
        *param_1 = plVar10;
      }
      param_1[2] = param_1[2] + -1;
      FUN_005d5d48(plVar8,plVar11);
      if (plVar11 == (long *)0xffffffffffffffe6) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      operator_delete(plVar11);
      plVar8 = (long *)0x1;
    }
  }
  return plVar8;
}


// ===== 0093c7f0  FUN_0093c7f0 =====

void FUN_0093c7f0(long *param_1,long param_2,long *param_3,long param_4,undefined8 *param_5)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  
  plVar7 = (long *)*param_5;
  puVar8 = (undefined8 *)param_5[1];
  if (param_1 == param_3) {
    if (param_2 == param_4) goto LAB_0093cac8;
    lVar10 = *plVar7;
    while( true ) {
      lVar2 = (long)puVar8 - lVar10 >> 4;
      lVar10 = param_4 - param_2 >> 4;
      if (lVar2 <= lVar10) {
        lVar10 = lVar2;
      }
      lVar2 = lVar10 * -0x10;
      if (lVar2 != 0) {
        puVar6 = (undefined8 *)(param_4 + -8);
        puVar9 = puVar8;
        do {
          puVar8 = puVar9 + -2;
          *puVar8 = puVar6[-1];
          uVar4 = *puVar6;
          *puVar6 = 0;
          plVar1 = (long *)puVar9[-1];
          puVar9[-1] = uVar4;
          if (plVar1 != (long *)0x0) {
            (**(code **)(*plVar1 + 8))();
          }
          lVar2 = lVar2 + 0x10;
          puVar6 = puVar6 + -2;
          puVar9 = puVar8;
        } while (lVar2 != 0);
      }
      param_4 = param_4 + lVar10 * -0x10;
      if (param_2 == param_4) break;
      plVar7 = plVar7 + -1;
      lVar10 = *plVar7;
      puVar8 = (undefined8 *)(lVar10 + 0x1000);
    }
  }
  else {
    lVar10 = *param_3;
    if (lVar10 != param_4) {
      lVar2 = *plVar7;
      while( true ) {
        lVar3 = (long)puVar8 - lVar2 >> 4;
        lVar2 = param_4 - lVar10 >> 4;
        if (lVar3 <= lVar2) {
          lVar2 = lVar3;
        }
        lVar3 = lVar2 * -0x10;
        if (lVar3 != 0) {
          puVar6 = (undefined8 *)(param_4 + -8);
          puVar9 = puVar8;
          do {
            puVar8 = puVar9 + -2;
            *puVar8 = puVar6[-1];
            uVar4 = *puVar6;
            *puVar6 = 0;
            plVar1 = (long *)puVar9[-1];
            puVar9[-1] = uVar4;
            if (plVar1 != (long *)0x0) {
              (**(code **)(*plVar1 + 8))();
            }
            lVar3 = lVar3 + 0x10;
            puVar6 = puVar6 + -2;
            puVar9 = puVar8;
          } while (lVar3 != 0);
        }
        param_4 = param_4 + lVar2 * -0x10;
        if (lVar10 == param_4) break;
        plVar7 = plVar7 + -1;
        lVar2 = *plVar7;
        puVar8 = (undefined8 *)(lVar2 + 0x1000);
      }
      if ((plVar7 != (long *)0x0) && (puVar8 == (undefined8 *)(*plVar7 + 0x1000))) {
        plVar7 = plVar7 + 1;
        puVar8 = (undefined8 *)*plVar7;
      }
    }
    param_3 = param_3 + -1;
    while( true ) {
      *param_5 = plVar7;
      param_5[1] = puVar8;
      if (param_1 == param_3) break;
      lVar3 = *param_3;
      lVar2 = *plVar7;
      lVar10 = lVar3 + 0x1000;
      while( true ) {
        lVar5 = (long)puVar8 - lVar2 >> 4;
        lVar2 = lVar10 - lVar3 >> 4;
        if (lVar5 <= lVar2) {
          lVar2 = lVar5;
        }
        lVar5 = lVar2 * -0x10;
        if (lVar5 != 0) {
          puVar6 = (undefined8 *)(lVar10 + -8);
          puVar9 = puVar8;
          do {
            puVar8 = puVar9 + -2;
            *puVar8 = puVar6[-1];
            uVar4 = *puVar6;
            *puVar6 = 0;
            plVar1 = (long *)puVar9[-1];
            puVar9[-1] = uVar4;
            if (plVar1 != (long *)0x0) {
              (**(code **)(*plVar1 + 8))();
            }
            lVar5 = lVar5 + 0x10;
            puVar6 = puVar6 + -2;
            puVar9 = puVar8;
          } while (lVar5 != 0);
        }
        lVar10 = lVar10 + lVar2 * -0x10;
        if (lVar3 == lVar10) break;
        plVar7 = plVar7 + -1;
        lVar2 = *plVar7;
        puVar8 = (undefined8 *)(lVar2 + 0x1000);
      }
      if ((plVar7 != (long *)0x0) && (puVar8 == (undefined8 *)(*plVar7 + 0x1000))) {
        plVar7 = plVar7 + 1;
        puVar8 = (undefined8 *)*plVar7;
      }
      param_3 = param_3 + -1;
    }
    lVar10 = *param_3 + 0x1000;
    if (param_2 == lVar10) goto LAB_0093cac8;
    lVar2 = *plVar7;
    while( true ) {
      lVar3 = (long)puVar8 - lVar2 >> 4;
      lVar2 = lVar10 - param_2 >> 4;
      if (lVar3 <= lVar2) {
        lVar2 = lVar3;
      }
      lVar3 = lVar2 * -0x10;
      if (lVar3 != 0) {
        puVar6 = (undefined8 *)(lVar10 + -8);
        puVar9 = puVar8;
        do {
          puVar8 = puVar9 + -2;
          *puVar8 = puVar6[-1];
          uVar4 = *puVar6;
          *puVar6 = 0;
          plVar1 = (long *)puVar9[-1];
          puVar9[-1] = uVar4;
          if (plVar1 != (long *)0x0) {
            (**(code **)(*plVar1 + 8))();
          }
          lVar3 = lVar3 + 0x10;
          puVar6 = puVar6 + -2;
          puVar9 = puVar8;
        } while (lVar3 != 0);
      }
      lVar10 = lVar10 + lVar2 * -0x10;
      if (param_2 == lVar10) break;
      plVar7 = plVar7 + -1;
      lVar2 = *plVar7;
      puVar8 = (undefined8 *)(lVar2 + 0x1000);
    }
  }
  if ((plVar7 != (long *)0x0) && (puVar8 == (undefined8 *)(*plVar7 + 0x1000))) {
    plVar7 = plVar7 + 1;
    puVar8 = (undefined8 *)*plVar7;
  }
LAB_0093cac8:
  *param_5 = plVar7;
  param_5[1] = puVar8;
  return;
}


// ===== 0093caf0  FUN_0093caf0 =====

void FUN_0093caf0(long *param_1,undefined8 *param_2,long *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  if (param_1 == param_3) {
    plVar7 = (long *)*param_5;
    puVar8 = (undefined8 *)param_5[1];
    if (param_2 != param_4) {
      puVar9 = (undefined8 *)*plVar7;
      do {
        lVar6 = (long)param_4 - (long)param_2 >> 4;
        lVar3 = (long)puVar9 + (0x1000 - (long)puVar8) >> 4;
        if (lVar3 <= lVar6) {
          lVar6 = lVar3;
        }
        if (lVar6 != 0) {
          puVar9 = param_2 + lVar6 * 2;
          do {
            *puVar8 = *param_2;
            uVar4 = param_2[1];
            param_2[1] = 0;
            plVar1 = (long *)puVar8[1];
            puVar8[1] = uVar4;
            if (plVar1 != (long *)0x0) {
              (**(code **)(*plVar1 + 8))();
            }
            param_2 = param_2 + 2;
            puVar8 = puVar8 + 2;
          } while (param_2 != puVar9);
          param_2 = puVar9;
          if (param_4 == puVar9) goto LAB_0093cdec;
        }
        plVar7 = plVar7 + 1;
        puVar9 = (undefined8 *)*plVar7;
        puVar8 = puVar9;
      } while( true );
    }
    goto LAB_0093ce04;
  }
  plVar7 = (long *)*param_5;
  puVar8 = (undefined8 *)param_5[1];
  puVar9 = (undefined8 *)(*param_1 + 0x1000);
  if (param_2 != puVar9) {
    puVar2 = (undefined8 *)*plVar7;
    do {
      lVar6 = (long)puVar9 - (long)param_2 >> 4;
      lVar3 = (long)puVar2 + (0x1000 - (long)puVar8) >> 4;
      if (lVar3 <= lVar6) {
        lVar6 = lVar3;
      }
      if (lVar6 != 0) {
        puVar2 = param_2 + lVar6 * 2;
        do {
          *puVar8 = *param_2;
          uVar4 = param_2[1];
          param_2[1] = 0;
          plVar1 = (long *)puVar8[1];
          puVar8[1] = uVar4;
          if (plVar1 != (long *)0x0) {
            (**(code **)(*plVar1 + 8))();
          }
          param_2 = param_2 + 2;
          puVar8 = puVar8 + 2;
        } while (param_2 != puVar2);
        param_2 = puVar2;
        if (puVar9 == puVar2) goto LAB_0093cbc8;
      }
      plVar7 = plVar7 + 1;
      puVar2 = (undefined8 *)*plVar7;
      puVar8 = puVar2;
    } while( true );
  }
  goto LAB_0093cbe0;
LAB_0093cbc8:
  if ((plVar7 != (long *)0x0) && (puVar8 == (undefined8 *)(*plVar7 + 0x1000))) {
    plVar7 = plVar7 + 1;
    puVar8 = (undefined8 *)*plVar7;
  }
LAB_0093cbe0:
  param_1 = param_1 + 1;
LAB_0093cbec:
  *param_5 = plVar7;
  param_5[1] = puVar8;
  if (param_1 != param_3) {
    puVar9 = (undefined8 *)*param_1;
    puVar5 = (undefined8 *)*plVar7;
    puVar2 = puVar9 + 0x200;
    do {
      lVar6 = (long)puVar2 - (long)puVar9 >> 4;
      lVar3 = (long)puVar5 + (0x1000 - (long)puVar8) >> 4;
      if (lVar3 <= lVar6) {
        lVar6 = lVar3;
      }
      if (lVar6 != 0) {
        puVar5 = puVar9 + lVar6 * 2;
        do {
          *puVar8 = *puVar9;
          uVar4 = puVar9[1];
          puVar9[1] = 0;
          plVar1 = (long *)puVar8[1];
          puVar8[1] = uVar4;
          if (plVar1 != (long *)0x0) {
            (**(code **)(*plVar1 + 8))();
          }
          puVar9 = puVar9 + 2;
          puVar8 = puVar8 + 2;
        } while (puVar9 != puVar5);
        puVar9 = puVar5;
        if (puVar2 == puVar5) goto LAB_0093cc88;
      }
      plVar7 = plVar7 + 1;
      puVar5 = (undefined8 *)*plVar7;
      puVar8 = puVar5;
    } while( true );
  }
  puVar9 = (undefined8 *)*param_1;
  if (puVar9 == param_4) {
LAB_0093cd50:
    *param_5 = plVar7;
    param_5[1] = puVar8;
    return;
  }
  puVar2 = (undefined8 *)*plVar7;
  do {
    lVar6 = (long)param_4 - (long)puVar9 >> 4;
    lVar3 = (long)puVar2 + (0x1000 - (long)puVar8) >> 4;
    if (lVar3 <= lVar6) {
      lVar6 = lVar3;
    }
    if (lVar6 != 0) {
      puVar2 = puVar9 + lVar6 * 2;
      do {
        *puVar8 = *puVar9;
        uVar4 = puVar9[1];
        puVar9[1] = 0;
        plVar1 = (long *)puVar8[1];
        puVar8[1] = uVar4;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        puVar9 = puVar9 + 2;
        puVar8 = puVar8 + 2;
      } while (puVar9 != puVar2);
      puVar9 = puVar2;
      if (param_4 == puVar2) {
        if ((plVar7 != (long *)0x0) && (puVar8 == (undefined8 *)(*plVar7 + 0x1000))) {
          plVar7 = plVar7 + 1;
          puVar8 = (undefined8 *)*plVar7;
        }
        goto LAB_0093cd50;
      }
    }
    plVar7 = plVar7 + 1;
    puVar2 = (undefined8 *)*plVar7;
    puVar8 = puVar2;
  } while( true );
LAB_0093cc88:
  if ((plVar7 != (long *)0x0) && (puVar8 == (undefined8 *)(*plVar7 + 0x1000))) {
    plVar7 = plVar7 + 1;
    puVar8 = (undefined8 *)*plVar7;
  }
  param_1 = param_1 + 1;
  goto LAB_0093cbec;
LAB_0093cdec:
  if ((plVar7 != (long *)0x0) && (puVar8 == (undefined8 *)(*plVar7 + 0x1000))) {
    plVar7 = plVar7 + 1;
    puVar8 = (undefined8 *)*plVar7;
  }
LAB_0093ce04:
  *param_5 = plVar7;
  param_5[1] = puVar8;
  return;
}


// ===== 0093ce28  FUN_0093ce28 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0093ce28(undefined8 *param_1,long param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  long lVar6;
  bool bVar7;
  code *pcVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  
  lVar10 = FUN_0084f840(param_3);
  if (*(char *)(lVar10 + 0x790) != '\x02') {
                    /* WARNING: Subroutine does not return */
    FUN_005ee558();
  }
  if ((4 < *(byte *)(lVar10 + 0x134)) || (4 < *(byte *)(lVar10 + 0x135))) {
    *param_1 = 0;
    goto LAB_0093ce78;
  }
  *(uint *)(param_3 + 0x19) = (uint)*(byte *)(lVar10 + 0x134);
  *(undefined1 *)((long)param_3 + 0xcc) = 1;
  bVar3 = *(byte *)(lVar10 + 0x135);
  *(undefined1 *)((long)param_3 + 0xc4) = 1;
  *(uint *)(param_3 + 0x18) = (uint)bVar3;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e) & 0x7fff;
  param_3[0x13c] = uVar11;
  if (*(char *)(lVar10 + 0x129) == '\x01') {
    bVar3 = *(byte *)(lVar10 + 0x139);
    if (bVar3 < 6) {
      param_3[0x31] = (ulong)bVar3;
      if (bVar3 != 0) {
        lVar6 = uVar11 - *(byte *)(lVar10 + 0x13a);
        lVar13 = lVar6 + 0x8000;
        if (*(byte *)(lVar10 + 0x13a) <= uVar11) {
          lVar13 = lVar6;
        }
        param_3[0x32] = lVar13;
        if (bVar3 != 1) {
          lVar6 = uVar11 - *(byte *)(lVar10 + 0x13b);
          lVar13 = lVar6 + 0x8000;
          if (*(byte *)(lVar10 + 0x13b) <= uVar11) {
            lVar13 = lVar6;
          }
          param_3[0x33] = lVar13;
          if (2 < bVar3) {
            lVar6 = uVar11 - *(byte *)(lVar10 + 0x13c);
            lVar13 = lVar6 + 0x8000;
            if (*(byte *)(lVar10 + 0x13c) <= uVar11) {
              lVar13 = lVar6;
            }
            param_3[0x34] = lVar13;
            if (bVar3 != 3) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(0x5512,0x93d0f8);
              (*pcVar8)();
            }
          }
        }
      }
      FUN_0093dd74(param_2,param_3,*(undefined1 *)(lVar10 + 0x137));
      iVar9 = 1;
    }
    else {
LAB_0093cff0:
      iVar9 = 2;
    }
  }
  else {
    uVar4 = *(ushort *)(lVar10 + 0x132);
    if ((ulong)uVar4 == 0xffff) {
      uVar11 = FUN_004022fc();
      if ((uVar11 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../modules/video_coding/rtp_vp9_ref_finder.cc",0x19a,
                     "TL0PICIDX is expected to be present in non-flexible mode.");
      }
      goto LAB_0093cff0;
    }
    if ((*(byte *)(param_2 + 0x12e89) & 1) == 0) {
      uVar12 = (ulong)uVar4 & 0xff;
      uVar11 = uVar12;
    }
    else {
      bVar3 = *(byte *)(param_2 + 0x12e88);
      uVar2 = uVar4 & 0xff;
      uVar12 = (ulong)uVar2;
      uVar5 = (uint)uVar4 - (uint)bVar3;
      iVar9 = (int)(char)uVar5;
      bVar7 = (uint)bVar3 < (uint)(byte)uVar4;
      if (uVar2 - bVar3 != 0x80) {
        bVar7 = iVar9 != -1 && iVar9 + 1 < 0 == SCARRY4(iVar9,1);
      }
      uVar11 = (ulong)uVar5 & 0xff;
      if (!bVar7) {
        uVar11 = (ulong)uVar5 & 0xff | 0xffffffffffffff00;
      }
      uVar11 = uVar11 + *(long *)(param_2 + 0x12e80);
    }
    *(ulong *)(param_2 + 0x12e80) = uVar11;
    *(ushort *)(param_2 + 0x12e88) = (ushort)uVar12 | 0x100;
    iVar9 = FUN_0093d0f8(param_2,param_3,lVar10 + 0x128,uVar11);
    if (iVar9 == 0) {
      if (100 < *(ulong *)(param_2 + 0x28)) {
        FUN_0093dafc(param_2);
      }
      uVar12 = *(ulong *)(param_2 + 0x20);
      if (uVar12 == 0) {
        FUN_0093ead0(param_2);
        uVar12 = *(ulong *)(param_2 + 0x20);
      }
      plVar1 = (long *)(*(long *)(param_2 + 8) + (uVar12 >> 8) * 8);
      lVar13 = *plVar1;
      lVar10 = 0;
      if (*(long *)(param_2 + 8) != *(long *)(param_2 + 0x10)) {
        lVar10 = lVar13 + (uVar12 & 0xff) * 0x10;
      }
      if (lVar10 == lVar13) {
        lVar10 = plVar1[-1] + 0x1000;
      }
      if (lVar10 == 0x10) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      *(ulong *)(lVar10 + -0x10) = uVar11;
      *(long **)(lVar10 + -8) = param_3;
      iVar9 = 0;
      param_3 = (long *)0x0;
      lVar10 = *(long *)(param_2 + 0x20) + _DAT_001f3ec0;
      *(long *)(param_2 + 0x28) = *(long *)(param_2 + 0x28) + _UNK_001f3ec8;
      *(long *)(param_2 + 0x20) = lVar10;
    }
  }
  *param_1 = 0;
  param_1[2] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[1] = &DAT_aaaaaaaaaaaaaaaa;
  param_1[3] = &DAT_aaaaaaaaaaaaaaaa;
  if (iVar9 == 1) {
    *param_1 = 2;
    param_1[1] = param_3;
    FUN_0093dbdc(param_2,param_1);
    return;
  }
LAB_0093ce78:
  if (param_3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0093ce98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 8))(param_3);
    return;
  }
  return;
}


// ===== 0093d0f8  FUN_0093d0f8 =====

void FUN_0093d0f8(long param_1,long param_2,char *param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  ushort uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  bool bVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  ulong *puVar16;
  undefined8 *puVar17;
  byte *pbVar18;
  undefined1 (*pauVar19) [16];
  ulong uVar20;
  char cVar21;
  int iVar22;
  uint uVar23;
  ulong uVar24;
  long *plVar25;
  char cVar26;
  undefined8 *puVar27;
  char cVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  char cVar31;
  byte bVar32;
  undefined1 auVar33 [16];
  ulong *local_6a0;
  undefined2 local_698;
  long local_690;
  long local_688;
  undefined2 local_680;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined6 uStack_298;
  undefined2 uStack_292;
  undefined6 uStack_290;
  undefined8 uStack_28a;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined6 uStack_198;
  undefined2 uStack_192;
  undefined6 uStack_190;
  undefined8 uStack_18a;
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
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined6 uStack_98;
  undefined2 uStack_92;
  undefined6 uStack_90;
  undefined8 uStack_8a;
  long local_78;
  
  lVar9 = tpidr_el0;
  local_78 = *(long *)(lVar9 + 0x28);
  local_690 = param_4;
  if (param_3[4] == '\x01') {
    if (param_3[0xc] == '\0') {
      uVar13 = *(ulong *)(param_3 + 0x58);
      if (0xff < uVar13) goto LAB_0093d254;
      if (uVar13 != 0) {
        if (uVar13 < 0x10) {
          uVar24 = 0;
        }
        else {
          uVar24 = uVar13 & 0xf0;
          uVar20 = uVar13 & 0xf0;
          pauVar19 = (undefined1 (*) [16])(param_3 + 0x25e);
          do {
            auVar33[8] = 3;
            auVar33._0_8_ = 0x303030303030303;
            auVar33[9] = 3;
            auVar33[10] = 3;
            auVar33[0xb] = 3;
            auVar33[0xc] = 3;
            auVar33[0xd] = 3;
            auVar33[0xe] = 3;
            auVar33[0xf] = 3;
            auVar33 = NEON_cmhi(*pauVar19,auVar33,1);
            bVar32 = NEON_umaxv(auVar33,1);
            if ((bVar32 & 1) != 0) goto LAB_0093d254;
            uVar20 = uVar20 - 0x10;
            pauVar19 = pauVar19 + 1;
          } while (uVar20 != 0);
          if (uVar13 == uVar24) goto LAB_0093d370;
        }
        lVar15 = uVar13 - uVar24;
        pbVar18 = (byte *)(param_3 + uVar24 + 0x25e);
        do {
          if (3 < *pbVar18) goto LAB_0093d254;
          lVar15 = lVar15 + -1;
          pbVar18 = pbVar18 + 1;
        } while (lVar15 != 0);
      }
LAB_0093d370:
      cVar26 = param_3[0x60];
      uStack_b8 = *(undefined8 *)(param_3 + 0x129);
      local_c0 = *(undefined8 *)(param_3 + 0x121);
      local_b0 = *(undefined8 *)(param_3 + 0x131);
      uStack_a8 = *(undefined8 *)(param_3 + 0x139);
      local_a0 = *(undefined8 *)(param_3 + 0x141);
      cVar28 = param_3[0x15f];
      cVar31 = param_3[0x25e];
      uStack_98 = (undefined6)*(undefined8 *)(param_3 + 0x149);
      cVar21 = param_3[0x35d];
      uStack_8a = *(undefined8 *)(param_3 + 0x157);
      local_100 = *(undefined8 *)(param_3 + 0xe1);
      uStack_f8 = *(undefined8 *)(param_3 + 0xe9);
      uStack_92 = (undefined2)*(undefined8 *)(param_3 + 0x14f);
      uStack_90 = (undefined6)((ulong)*(undefined8 *)(param_3 + 0x14f) >> 0x10);
      uStack_e8 = *(undefined8 *)(param_3 + 0xf9);
      local_f0 = *(undefined8 *)(param_3 + 0xf1);
      local_140 = *(undefined8 *)(param_3 + 0xa1);
      uStack_138 = *(undefined8 *)(param_3 + 0xa9);
      uStack_d8 = *(undefined8 *)(param_3 + 0x109);
      local_e0 = *(undefined8 *)(param_3 + 0x101);
      uStack_c8 = *(undefined8 *)(param_3 + 0x119);
      local_d0 = *(undefined8 *)(param_3 + 0x111);
      local_180 = *(undefined8 *)(param_3 + 0x61);
      uStack_178 = *(undefined8 *)(param_3 + 0x69);
      uStack_128 = *(undefined8 *)(param_3 + 0xb9);
      local_130 = *(undefined8 *)(param_3 + 0xb1);
      uStack_118 = *(undefined8 *)(param_3 + 0xc9);
      local_120 = *(undefined8 *)(param_3 + 0xc1);
      uStack_108 = *(undefined8 *)(param_3 + 0xd9);
      local_110 = *(undefined8 *)(param_3 + 0xd1);
      uStack_168 = *(undefined8 *)(param_3 + 0x79);
      local_170 = *(undefined8 *)(param_3 + 0x71);
      uStack_158 = *(undefined8 *)(param_3 + 0x89);
      local_160 = *(undefined8 *)(param_3 + 0x81);
      uStack_148 = *(undefined8 *)(param_3 + 0x99);
      local_150 = *(undefined8 *)(param_3 + 0x91);
      local_1a0 = *(undefined8 *)(param_3 + 0x240);
      local_1c0 = *(undefined8 *)(param_3 + 0x220);
      uStack_1b8 = *(undefined8 *)(param_3 + 0x228);
      uStack_1a8 = *(undefined8 *)(param_3 + 0x238);
      local_1b0 = *(undefined8 *)(param_3 + 0x230);
      uStack_198 = (undefined6)*(undefined8 *)(param_3 + 0x248);
      uStack_18a = *(undefined8 *)(param_3 + 0x256);
      uStack_192 = (undefined2)*(undefined8 *)(param_3 + 0x24e);
      uStack_190 = (undefined6)((ulong)*(undefined8 *)(param_3 + 0x24e) >> 0x10);
      local_200 = *(undefined8 *)(param_3 + 0x1e0);
      uStack_1f8 = *(undefined8 *)(param_3 + 0x1e8);
      uStack_1e8 = *(undefined8 *)(param_3 + 0x1f8);
      local_1f0 = *(undefined8 *)(param_3 + 0x1f0);
      uStack_1d8 = *(undefined8 *)(param_3 + 0x208);
      local_1e0 = *(undefined8 *)(param_3 + 0x200);
      uStack_1c8 = *(undefined8 *)(param_3 + 0x218);
      local_1d0 = *(undefined8 *)(param_3 + 0x210);
      local_240 = *(undefined8 *)(param_3 + 0x1a0);
      uStack_238 = *(undefined8 *)(param_3 + 0x1a8);
      uStack_228 = *(undefined8 *)(param_3 + 0x1b8);
      local_230 = *(undefined8 *)(param_3 + 0x1b0);
      uStack_218 = *(undefined8 *)(param_3 + 0x1c8);
      local_220 = *(undefined8 *)(param_3 + 0x1c0);
      uStack_208 = *(undefined8 *)(param_3 + 0x1d8);
      local_210 = *(undefined8 *)(param_3 + 0x1d0);
      local_280 = *(undefined8 *)(param_3 + 0x160);
      uStack_278 = *(undefined8 *)(param_3 + 0x168);
      uStack_268 = *(undefined8 *)(param_3 + 0x178);
      local_270 = *(undefined8 *)(param_3 + 0x170);
      uStack_258 = *(undefined8 *)(param_3 + 0x188);
      local_260 = *(undefined8 *)(param_3 + 0x180);
      uStack_248 = *(undefined8 *)(param_3 + 0x198);
      local_250 = *(undefined8 *)(param_3 + 400);
      local_2c0 = *(undefined8 *)(param_3 + 799);
      uStack_2b8 = *(undefined8 *)(param_3 + 0x327);
      uStack_2a8 = *(undefined8 *)(param_3 + 0x337);
      uStack_2b0 = *(undefined8 *)(param_3 + 0x32f);
      local_2a0 = *(undefined8 *)(param_3 + 0x33f);
      uStack_28a = *(undefined8 *)(param_3 + 0x355);
      uStack_298 = (undefined6)*(undefined8 *)(param_3 + 0x347);
      uStack_292 = (undefined2)*(undefined8 *)(param_3 + 0x34d);
      uStack_290 = (undefined6)((ulong)*(undefined8 *)(param_3 + 0x34d) >> 0x10);
      local_300 = *(undefined8 *)(param_3 + 0x2df);
      uStack_2f8 = *(undefined8 *)(param_3 + 0x2e7);
      uStack_2e8 = *(undefined8 *)(param_3 + 0x2f7);
      uStack_2f0 = *(undefined8 *)(param_3 + 0x2ef);
      uStack_2d8 = *(undefined8 *)(param_3 + 0x307);
      local_2e0 = *(undefined8 *)(param_3 + 0x2ff);
      uStack_2c8 = *(undefined8 *)(param_3 + 0x317);
      uStack_2d0 = *(undefined8 *)(param_3 + 0x30f);
      local_340 = *(undefined8 *)(param_3 + 0x29f);
      uStack_338 = *(undefined8 *)(param_3 + 0x2a7);
      uStack_328 = *(undefined8 *)(param_3 + 0x2b7);
      uStack_330 = *(undefined8 *)(param_3 + 0x2af);
      uStack_318 = *(undefined8 *)(param_3 + 0x2c7);
      local_320 = *(undefined8 *)(param_3 + 0x2bf);
      uStack_308 = *(undefined8 *)(param_3 + 0x2d7);
      uStack_310 = *(undefined8 *)(param_3 + 0x2cf);
      local_380 = *(undefined8 *)(param_3 + 0x25f);
      uStack_378 = *(undefined8 *)(param_3 + 0x267);
      uStack_368 = *(undefined8 *)(param_3 + 0x277);
      uStack_370 = *(undefined8 *)(param_3 + 0x26f);
      local_360 = *(undefined8 *)(param_3 + 0x27f);
      uStack_358 = *(undefined8 *)(param_3 + 0x287);
      uStack_348 = *(undefined8 *)(param_3 + 0x297);
      uStack_350 = *(undefined8 *)(param_3 + 0x28f);
      memcpy(&local_688,param_3 + 0x35e,0x302);
      if (uVar13 == 0) {
        uVar13 = FUN_004022fc();
        if ((uVar13 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4e98,"../../modules/video_coding/rtp_vp9_ref_finder.cc",0x3e2,
                       "Number of frames in GOF is zero. Assume that stream has only one temporal layer."
                      );
        }
        cVar21 = '\x01';
        cVar31 = '\x01';
        cVar26 = '\0';
        cVar28 = '\x01';
        uVar13 = 1;
      }
      bVar5 = *(byte *)(param_1 + 0x30);
      bVar32 = bVar5 - 0x31;
      if (bVar5 < 0x31) {
        bVar32 = bVar5 + 1;
      }
      *(byte *)(param_1 + 0x30) = bVar32;
      if (0x31 < (ulong)bVar32) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/array:277: libc++ Hardening assertion __n < _Size failed: out-of-bounds access in std::array<T, N>\n"
                  );
      }
      lVar15 = param_1 + (ulong)bVar32 * 0x608;
      *(ulong *)(lVar15 + 0x38) = uVar13;
      *(undefined8 *)(lVar15 + 0x109) = uStack_b8;
      *(undefined8 *)(lVar15 + 0x101) = local_c0;
      *(ulong *)(lVar15 + 0x129) = CONCAT26(uStack_92,uStack_98);
      *(undefined8 *)(lVar15 + 0x121) = local_a0;
      *(undefined8 *)(lVar15 + 0x137) = uStack_8a;
      *(ulong *)(lVar15 + 0x12f) = CONCAT62(uStack_90,uStack_92);
      *(undefined8 *)(lVar15 + 0x119) = uStack_a8;
      *(undefined8 *)(lVar15 + 0x111) = local_b0;
      *(undefined8 *)(lVar15 + 0xd9) = uStack_e8;
      *(undefined8 *)(lVar15 + 0xd1) = local_f0;
      *(undefined8 *)(lVar15 + 0xc9) = uStack_f8;
      *(undefined8 *)(lVar15 + 0xc1) = local_100;
      *(undefined8 *)(lVar15 + 0xf9) = uStack_c8;
      *(undefined8 *)(lVar15 + 0xf1) = local_d0;
      *(undefined8 *)(lVar15 + 0xe9) = uStack_d8;
      *(undefined8 *)(lVar15 + 0xe1) = local_e0;
      *(undefined8 *)(lVar15 + 0x99) = uStack_128;
      *(undefined8 *)(lVar15 + 0x91) = local_130;
      *(undefined8 *)(lVar15 + 0x89) = uStack_138;
      *(undefined8 *)(lVar15 + 0x81) = local_140;
      *(undefined8 *)(lVar15 + 0xb9) = uStack_108;
      *(undefined8 *)(lVar15 + 0xb1) = local_110;
      *(undefined8 *)(lVar15 + 0xa9) = uStack_118;
      *(undefined8 *)(lVar15 + 0xa1) = local_120;
      *(undefined8 *)(lVar15 + 0x59) = uStack_168;
      *(undefined8 *)(lVar15 + 0x51) = local_170;
      *(undefined8 *)(lVar15 + 0x49) = uStack_178;
      *(undefined8 *)(lVar15 + 0x41) = local_180;
      *(undefined8 *)(lVar15 + 0x79) = uStack_148;
      *(undefined8 *)(lVar15 + 0x71) = local_150;
      *(undefined8 *)(lVar15 + 0x69) = uStack_158;
      *(undefined8 *)(lVar15 + 0x61) = local_160;
      *(undefined8 *)(lVar15 + 0x208) = uStack_1b8;
      *(undefined8 *)(lVar15 + 0x200) = local_1c0;
      *(undefined8 *)(lVar15 + 0x218) = uStack_1a8;
      *(undefined8 *)(lVar15 + 0x210) = local_1b0;
      *(ulong *)(lVar15 + 0x228) = CONCAT26(uStack_192,uStack_198);
      *(undefined8 *)(lVar15 + 0x220) = local_1a0;
      *(undefined8 *)(lVar15 + 0x236) = uStack_18a;
      *(ulong *)(lVar15 + 0x22e) = CONCAT62(uStack_190,uStack_192);
      *(undefined8 *)(lVar15 + 0x1c8) = uStack_1f8;
      *(undefined8 *)(lVar15 + 0x1c0) = local_200;
      *(undefined8 *)(lVar15 + 0x1d8) = uStack_1e8;
      *(undefined8 *)(lVar15 + 0x1d0) = local_1f0;
      *(undefined8 *)(lVar15 + 0x1e8) = uStack_1d8;
      *(undefined8 *)(lVar15 + 0x1e0) = local_1e0;
      *(undefined8 *)(lVar15 + 0x1f8) = uStack_1c8;
      *(undefined8 *)(lVar15 + 0x1f0) = local_1d0;
      *(undefined8 *)(lVar15 + 0x188) = uStack_238;
      *(undefined8 *)(lVar15 + 0x180) = local_240;
      *(undefined8 *)(lVar15 + 0x198) = uStack_228;
      *(undefined8 *)(lVar15 + 400) = local_230;
      *(undefined8 *)(lVar15 + 0x1a8) = uStack_218;
      *(undefined8 *)(lVar15 + 0x1a0) = local_220;
      *(undefined8 *)(lVar15 + 0x1b8) = uStack_208;
      *(undefined8 *)(lVar15 + 0x1b0) = local_210;
      *(undefined8 *)(lVar15 + 0x148) = uStack_278;
      *(undefined8 *)(lVar15 + 0x140) = local_280;
      *(undefined8 *)(lVar15 + 0x158) = uStack_268;
      *(undefined8 *)(lVar15 + 0x150) = local_270;
      *(undefined8 *)(lVar15 + 0x168) = uStack_258;
      *(undefined8 *)(lVar15 + 0x160) = local_260;
      *(undefined8 *)(lVar15 + 0x178) = uStack_248;
      *(undefined8 *)(lVar15 + 0x170) = local_250;
      *(char *)(lVar15 + 0x40) = cVar26;
      *(ulong *)(lVar15 + 0x327) = CONCAT26(uStack_292,uStack_298);
      *(undefined8 *)(lVar15 + 799) = local_2a0;
      *(undefined8 *)(lVar15 + 0x307) = uStack_2b8;
      *(undefined8 *)(lVar15 + 0x2ff) = local_2c0;
      *(undefined8 *)(lVar15 + 0x317) = uStack_2a8;
      *(undefined8 *)(lVar15 + 0x30f) = uStack_2b0;
      *(char *)(lVar15 + 0x13f) = cVar28;
      *(undefined8 *)(lVar15 + 0x335) = uStack_28a;
      *(ulong *)(lVar15 + 0x32d) = CONCAT62(uStack_290,uStack_292);
      *(char *)(lVar15 + 0x23e) = cVar31;
      *(char *)(lVar15 + 0x33d) = cVar21;
      *(undefined8 *)(lVar15 + 0x2c7) = uStack_2f8;
      *(undefined8 *)(lVar15 + 0x2bf) = local_300;
      *(undefined8 *)(lVar15 + 0x2d7) = uStack_2e8;
      *(undefined8 *)(lVar15 + 0x2cf) = uStack_2f0;
      *(undefined8 *)(lVar15 + 0x2e7) = uStack_2d8;
      *(undefined8 *)(lVar15 + 0x2df) = local_2e0;
      *(undefined8 *)(lVar15 + 0x2f7) = uStack_2c8;
      *(undefined8 *)(lVar15 + 0x2ef) = uStack_2d0;
      *(undefined8 *)(lVar15 + 0x287) = uStack_338;
      *(undefined8 *)(lVar15 + 0x27f) = local_340;
      *(undefined8 *)(lVar15 + 0x297) = uStack_328;
      *(undefined8 *)(lVar15 + 0x28f) = uStack_330;
      *(undefined8 *)(lVar15 + 0x2a7) = uStack_318;
      *(undefined8 *)(lVar15 + 0x29f) = local_320;
      *(undefined8 *)(lVar15 + 0x2b7) = uStack_308;
      *(undefined8 *)(lVar15 + 0x2af) = uStack_310;
      *(undefined8 *)(lVar15 + 0x247) = uStack_378;
      *(undefined8 *)(lVar15 + 0x23f) = local_380;
      *(undefined8 *)(lVar15 + 599) = uStack_368;
      *(undefined8 *)(lVar15 + 0x24f) = uStack_370;
      *(undefined8 *)(lVar15 + 0x267) = uStack_358;
      *(undefined8 *)(lVar15 + 0x25f) = local_360;
      *(undefined8 *)(lVar15 + 0x277) = uStack_348;
      *(undefined8 *)(lVar15 + 0x26f) = uStack_350;
      memcpy((void *)(lVar15 + 0x33e),&local_688,0x302);
      *(short *)(lVar15 + 0x63a) = (short)*(undefined8 *)(param_2 + 0x9e0);
      local_698 = (undefined2)*(undefined8 *)(param_2 + 0x9e0);
      local_6a0 = (ulong *)(lVar15 + 0x38);
      FUN_0093f770(0,param_1 + 0x12dc8,param_1 + 0x12dc8,&local_690,&local_6a0);
      puVar14 = *(undefined8 **)(param_1 + 0x12dd0);
    }
    else {
      uVar13 = FUN_004022fc();
      if ((uVar13 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../modules/video_coding/rtp_vp9_ref_finder.cc",0x36a,
                     "Received scalability structure on a non base layer frame. Scalability structure ignored."
                    );
      }
      puVar14 = *(undefined8 **)(param_1 + 0x12dd0);
    }
    if (puVar14 != (undefined8 *)0x0) {
      puVar17 = puVar14;
      do {
        while (local_690 < (long)puVar17[4]) {
          puVar17 = (undefined8 *)*puVar17;
          if (puVar17 == (undefined8 *)0x0) goto LAB_0093d8d4;
        }
        if (local_690 == puVar17[4]) {
          if (puVar17 != (undefined8 *)(param_1 + 0x12dd0)) {
            plVar25 = puVar17 + 5;
            if (*(int *)(param_2 + 0x20) != 3) goto LAB_0093d300;
            *(undefined8 *)(param_2 + 0x188) = 0;
            FUN_0093df20(param_1,*(undefined2 *)(param_2 + 0x9e0),plVar25);
            goto LAB_0093dab8;
          }
          break;
        }
        puVar17 = (undefined8 *)puVar17[1];
      } while (puVar17 != (undefined8 *)0x0);
    }
  }
  else {
    if (*(int *)(param_2 + 0x20) == 3) {
      uVar13 = FUN_004022fc();
      if ((uVar13 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,"../../modules/video_coding/rtp_vp9_ref_finder.cc",0x4ba,
                     "Received keyframe without scalability structure");
        puVar17 = (undefined8 *)0x2;
        goto LAB_0093d8d8;
      }
LAB_0093d254:
      puVar17 = (undefined8 *)0x2;
      goto LAB_0093d8d8;
    }
    puVar14 = *(undefined8 **)(param_1 + 0x12dd0);
    uVar2 = 0;
    if (param_3[0xc] == '\0') {
      uVar2 = ~(uint)(byte)param_3[0xf];
    }
    if (puVar14 != (undefined8 *)0x0) {
      param_4 = param_4 - ((ulong)uVar2 & 1);
      puVar17 = puVar14;
      do {
        while (param_4 < (long)puVar17[4]) {
          puVar17 = (undefined8 *)*puVar17;
          if (puVar17 == (undefined8 *)0x0) goto LAB_0093d8d8;
        }
        if (param_4 == puVar17[4]) {
          if (puVar17 == (undefined8 *)(param_1 + 0x12dd0)) goto LAB_0093d8d4;
          if (param_3[0xc] == '\0') {
            local_688 = puVar17[5];
            local_680 = (undefined2)*(undefined8 *)(param_2 + 0x9e0);
            puVar17 = (undefined8 *)
                      FUN_0093f770(0,param_1 + 0x12dc8,param_1 + 0x12dc8,&local_690,&local_688);
            puVar14 = *(undefined8 **)(param_1 + 0x12dd0);
          }
          plVar25 = puVar17 + 5;
          goto LAB_0093d300;
        }
        puVar17 = (undefined8 *)puVar17[1];
      } while (puVar17 != (undefined8 *)0x0);
      puVar17 = (undefined8 *)0x0;
      goto LAB_0093d8d8;
    }
  }
  goto LAB_0093d8d4;
LAB_0093d300:
  puVar17 = (undefined8 *)(param_1 + 0x12dd0);
  if (puVar14 != (undefined8 *)0x0) {
    puVar27 = (undefined8 *)(param_1 + 0x12dd0);
    do {
      while (puVar29 = puVar14, puVar17 = puVar29, (long)puVar29[4] <= local_690 + -0x32) {
        if ((local_690 + -0x32 == puVar29[4]) ||
           (puVar14 = (undefined8 *)puVar29[1], puVar17 = puVar27,
           (undefined8 *)puVar29[1] == (undefined8 *)0x0)) goto LAB_0093d4f4;
      }
      puVar14 = (undefined8 *)*puVar29;
      puVar27 = puVar29;
    } while ((undefined8 *)*puVar29 != (undefined8 *)0x0);
  }
LAB_0093d4f4:
  puVar14 = *(undefined8 **)(param_1 + 0x12dc8);
  while (puVar14 != puVar17) {
    puVar27 = (undefined8 *)puVar14[1];
    puVar29 = puVar14;
    if ((undefined8 *)puVar14[1] == (undefined8 *)0x0) {
      do {
        puVar30 = (undefined8 *)puVar29[2];
        bVar12 = puVar29 != (undefined8 *)*puVar30;
        puVar29 = puVar30;
      } while (bVar12);
    }
    else {
      do {
        puVar30 = puVar27;
        puVar27 = (undefined8 *)*puVar30;
      } while ((undefined8 *)*puVar30 != (undefined8 *)0x0);
    }
    if (*(undefined8 **)(param_1 + 0x12dc8) == puVar14) {
      *(undefined8 **)(param_1 + 0x12dc8) = puVar30;
    }
    *(long *)(param_1 + 0x12dd8) = *(long *)(param_1 + 0x12dd8) + -1;
    FUN_005d5d48(*(undefined8 *)(param_1 + 0x12dd0),puVar14);
    if (puVar14 == (undefined8 *)0xffffffffffffffe0) goto LAB_0093dad0;
    operator_delete(puVar14);
    puVar14 = puVar30;
  }
  FUN_0093df20(param_1,*(undefined2 *)(param_2 + 0x9e0),plVar25);
  uVar13 = FUN_0093e284(param_1,*(undefined2 *)(param_2 + 0x9e0),plVar25);
  if ((uVar13 & 1) == 0) {
    if (param_3[0xe] == '\x01') {
      local_180 = *(undefined8 *)(param_2 + 0x9e0);
      local_688 = param_1 + 0x12de0;
      FUN_0093f880(&local_688,&local_180,param_3 + 0xc);
    }
    iVar22 = 0x7fce;
    if (0x31 < *(ulong *)(param_2 + 0x9e0)) {
      iVar22 = 0xffce;
    }
    puVar17 = (undefined8 *)(param_1 + 0x12de8);
    if (*(undefined8 **)(param_1 + 0x12de8) != (undefined8 *)0x0) {
      uVar2 = iVar22 + (int)*(ulong *)(param_2 + 0x9e0);
      puVar14 = *(undefined8 **)(param_1 + 0x12de8);
      puVar27 = (undefined8 *)(param_1 + 0x12de8);
      do {
        while( true ) {
          puVar29 = puVar14;
          uVar6 = *(ushort *)((long)puVar29 + 0x1a);
          puVar17 = puVar29;
          if ((uint)uVar6 == (uVar2 & 0xffff)) goto LAB_0093d910;
          uVar7 = uVar2 - uVar6;
          uVar23 = (uint)uVar6;
          uVar1 = uVar2 & 0xffff;
          uVar3 = uVar7 ^ 0xffff8000;
          if (uVar23 <= uVar1) {
            uVar3 = uVar7;
          }
          uVar7 = uVar23 - uVar2 ^ 0x8000;
          if (uVar1 <= uVar23) {
            uVar7 = uVar23 - uVar2;
          }
          uVar3 = uVar3 & 0xffff;
          uVar7 = uVar7 & 0xffff;
          uVar4 = uVar7;
          if (uVar3 <= uVar7) {
            uVar4 = uVar3;
          }
          bVar12 = uVar1 < uVar23;
          if (uVar4 != 0x4000) {
            bVar12 = uVar7 < 0x4001;
          }
          if (bVar12) break;
          bVar12 = uVar23 < (uVar2 & 0xffff);
          if (uVar4 != 0x4000) {
            bVar12 = uVar3 < 0x4001;
          }
          if ((!bVar12) ||
             (puVar14 = (undefined8 *)puVar29[1], puVar17 = puVar27,
             (undefined8 *)puVar29[1] == (undefined8 *)0x0)) goto LAB_0093d910;
        }
        puVar14 = (undefined8 *)*puVar29;
        puVar27 = puVar29;
      } while ((undefined8 *)*puVar29 != (undefined8 *)0x0);
    }
LAB_0093d910:
    puVar14 = *(undefined8 **)(param_1 + 0x12de0);
    while (puVar14 != puVar17) {
      puVar27 = (undefined8 *)puVar14[1];
      puVar29 = puVar14;
      if ((undefined8 *)puVar14[1] == (undefined8 *)0x0) {
        do {
          puVar30 = (undefined8 *)puVar29[2];
          bVar12 = puVar29 != (undefined8 *)*puVar30;
          puVar29 = puVar30;
        } while (bVar12);
      }
      else {
        do {
          puVar30 = puVar27;
          puVar27 = (undefined8 *)*puVar30;
        } while ((undefined8 *)*puVar30 != (undefined8 *)0x0);
      }
      if (*(undefined8 **)(param_1 + 0x12de0) == puVar14) {
        *(undefined8 **)(param_1 + 0x12de0) = puVar30;
      }
      *(long *)(param_1 + 0x12df0) = *(long *)(param_1 + 0x12df0) + -1;
      FUN_005d5d48(*(undefined8 *)(param_1 + 0x12de8),puVar14);
      if (puVar14 == (undefined8 *)0xffffffffffffffe6) {
LAB_0093dad0:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      operator_delete(puVar14);
      puVar14 = puVar30;
    }
    if (*param_3 == '\x01') {
      puVar16 = (ulong *)*plVar25;
      uVar13 = *(ulong *)(param_2 + 0x9e0);
      uVar6 = *(ushort *)((long)puVar16 + 0x602);
      uVar1 = (int)uVar13 - (uint)uVar6;
      uVar2 = uVar1 ^ 0x8000;
      if ((uint)uVar6 < (uint)(ushort)uVar13 || (uint)uVar6 == (uint)(ushort)uVar13) {
        uVar2 = uVar1;
      }
      uVar24 = *puVar16;
      uVar20 = 0;
      if (uVar24 != 0) {
        uVar20 = ((ulong)uVar2 & 0xffff) / uVar24;
      }
      uVar20 = ((ulong)uVar2 & 0xffff) - uVar20 * uVar24;
      if (0xfe < uVar20) {
LAB_0093dab0:
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(0x5512,0x93dab4);
        (*pcVar11)();
      }
      bVar32 = *(byte *)((long)puVar16 + uVar20 + 0x206);
      uVar24 = (ulong)bVar32;
      if (5 < bVar32) goto LAB_0093d254;
      *(ulong *)(param_2 + 0x188) = uVar24;
      if (bVar32 != 0) {
        lVar10 = uVar20 * 3;
        uVar20 = (ulong)*(byte *)(*plVar25 + lVar10 + 0x305);
        lVar8 = uVar13 - uVar20;
        lVar15 = lVar8 + 0x8000;
        if (uVar20 <= uVar13) {
          lVar15 = lVar8;
        }
        *(long *)(param_2 + 400) = lVar15;
        uVar20 = FUN_0093e4b0(param_1,uVar13 & 0xffffffff,param_3[0xc]);
        if ((uVar20 & 1) != 0) {
          uVar24 = uVar24 - 1;
          *(ulong *)(param_2 + 0x188) = uVar24;
        }
        if (1 < uVar24) {
          uVar20 = (ulong)*(byte *)(*plVar25 + lVar10 + 0x306);
          lVar8 = uVar13 - uVar20;
          lVar15 = lVar8 + 0x8000;
          if (uVar20 <= uVar13) {
            lVar15 = lVar8;
          }
          *(long *)(param_2 + 0x198) = lVar15;
          uVar20 = FUN_0093e4b0(param_1,uVar13 & 0xffffffff,param_3[0xc]);
          if ((uVar20 & 1) != 0) {
            uVar24 = uVar24 - 1;
            *(ulong *)(param_2 + 0x188) = uVar24;
          }
          if (2 < uVar24) {
            uVar20 = (ulong)*(byte *)(*plVar25 + lVar10 + 0x307);
            lVar8 = uVar13 - uVar20;
            lVar15 = lVar8 + 0x8000;
            if (uVar20 <= uVar13) {
              lVar15 = lVar8;
            }
            *(long *)(param_2 + 0x1a0) = lVar15;
            uVar13 = FUN_0093e4b0(param_1,uVar13 & 0xffffffff,param_3[0xc]);
            if ((uVar13 & 1) != 0) {
              uVar24 = uVar24 - 1;
              *(ulong *)(param_2 + 0x188) = uVar24;
            }
            if (3 < uVar24) goto LAB_0093dab0;
          }
        }
      }
    }
    else {
      *(undefined8 *)(param_2 + 0x188) = 0;
    }
LAB_0093dab8:
    FUN_0093dd74(param_1,param_2,param_3[0xf]);
    puVar17 = (undefined8 *)0x1;
    goto LAB_0093d8d8;
  }
LAB_0093d8d4:
  puVar17 = (undefined8 *)0x0;
LAB_0093d8d8:
  if (*(long *)(lVar9 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(puVar17);
  }
  return;
}


// ===== 0093dafc  FUN_0093dafc =====

void FUN_0093dafc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  
  if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/deque:2199: libc++ Hardening assertion !empty() failed: deque::pop_back called on an empty deque\n"
              );
  }
  uVar5 = (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) - 1;
  lVar1 = *(long *)(*(long *)(param_1 + 8) + (uVar5 >> 8) * 8) + (uVar5 & 0xff) * 0x10;
  if (lVar1 != 0) {
    plVar4 = *(long **)(lVar1 + 8);
    *(undefined8 *)(lVar1 + 8) = 0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    lVar2 = *(long *)(param_1 + 0x10);
    lVar3 = *(long *)(param_1 + 0x28);
    lVar1 = 0;
    if (lVar2 != *(long *)(param_1 + 8)) {
      lVar1 = (lVar2 - *(long *)(param_1 + 8)) * 0x20 + -1;
    }
    *(long *)(param_1 + 0x28) = lVar3 + -1;
    if (0x1ff < (lVar1 - (lVar3 + *(long *)(param_1 + 0x20))) + 1U) {
      operator_delete(*(void **)(lVar2 + -8));
      lVar1 = *(long *)(param_1 + 0x10) + -8;
      if (lVar1 == 0) goto LAB_0093dbb4;
      *(long *)(param_1 + 0x10) = lVar1;
    }
    return;
  }
LAB_0093dbb4:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 0093dbdc  FUN_0093dbdc =====

void FUN_0093dbdc(long param_1,ulong *param_2)

{
  ulong *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  bool bVar11;
  undefined1 auVar12 [16];
  
  lVar3 = *(long *)(param_1 + 8);
  lVar5 = *(long *)(param_1 + 0x10);
LAB_0093dc14:
  plVar7 = (long *)(lVar3 + (*(ulong *)(param_1 + 0x20) >> 8) * 8);
  if (lVar3 == lVar5) {
    lVar8 = 0;
  }
  else {
    lVar8 = *plVar7 + (*(ulong *)(param_1 + 0x20) & 0xff) * 0x10;
  }
  auVar12._8_8_ = lVar8;
  auVar12._0_8_ = plVar7;
  bVar11 = false;
  do {
    puVar9 = auVar12._8_8_;
    plVar7 = auVar12._0_8_;
    if (lVar3 == lVar5) {
      if (puVar9 == (undefined8 *)0x0) break;
    }
    else {
      uVar6 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20);
      if (puVar9 == (undefined8 *)(*(long *)(lVar3 + (uVar6 >> 8) * 8) + (uVar6 & 0xff) * 0x10))
      break;
    }
    puVar10 = puVar9 + 1;
    lVar3 = FUN_0084f840(*puVar10);
    if (*(char *)(lVar3 + 0x790) != '\x02') {
                    /* WARNING: Subroutine does not return */
      FUN_005ee558();
    }
    iVar2 = FUN_0093d0f8(param_1,puVar9[1],lVar3 + 0x128,*puVar9);
    if (iVar2 == 2) {
LAB_0093dc50:
      auVar12 = FUN_0093e620(param_1,plVar7,puVar9);
    }
    else {
      if (iVar2 == 1) {
        uVar4 = *param_2;
        uVar6 = 3;
        if ((uVar4 & 1) != 0) {
          uVar6 = param_2[2];
        }
        if (uVar4 >> 1 == uVar6) {
          FUN_0093976c(param_2,puVar10);
        }
        else {
          puVar1 = param_2 + 1;
          if ((uVar4 & 1) != 0) {
            puVar1 = (ulong *)param_2[1];
          }
          if (puVar1 + (uVar4 >> 1) == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::__Cr::__libcpp_verbose_abort
                      ("%s",
                       "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                      );
          }
          uVar6 = *puVar10;
          *puVar10 = 0;
          puVar1[uVar4 >> 1] = uVar6;
          *param_2 = *param_2 + 2;
        }
        bVar11 = true;
        goto LAB_0093dc50;
      }
      auVar12._8_8_ = puVar9 + 2;
      auVar12._0_8_ = plVar7;
      if ((long)(puVar9 + 2) - *plVar7 == 0x1000) {
        auVar12._8_8_ = plVar7[1];
        auVar12._0_8_ = plVar7 + 1;
      }
    }
    lVar3 = *(long *)(param_1 + 8);
    lVar5 = *(long *)(param_1 + 0x10);
  } while( true );
  if (!bVar11) {
    return;
  }
  goto LAB_0093dc14;
}


// ===== 0093dd74  FUN_0093dd74 =====

void FUN_0093dd74(long param_1,long param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  
  if (*(long *)(param_2 + 0x188) != 0) {
    uVar10 = 0;
    do {
      if (uVar10 == 5) goto LAB_0093df1c;
      uVar5 = *(ushort *)(param_2 + 400 + uVar10 * 8);
      uVar11 = (ulong)uVar5;
      if ((*(byte *)(param_1 + 0x12e7a) & 1) != 0) {
        uVar4 = *(ushort *)(param_1 + 0x12e78);
        uVar9 = (uint)uVar5;
        uVar6 = uVar9 - uVar4;
        bVar8 = uVar9 <= uVar4;
        uVar9 = uVar4 - uVar9;
        uVar2 = uVar6 ^ 0xffff8000;
        if (!bVar8 || uVar9 == 0) {
          uVar2 = uVar6;
        }
        uVar6 = uVar9 ^ 0x8000;
        if (bVar8) {
          uVar6 = uVar9;
        }
        uVar9 = uVar2 & 0xffff;
        uVar3 = uVar9;
        if ((uVar6 & 0xffff) <= uVar9) {
          uVar3 = uVar6 & 0xffff;
        }
        bVar8 = !bVar8;
        if (uVar3 != 0x4000) {
          bVar8 = uVar9 < 0x4001;
        }
        uVar11 = (ulong)uVar2 & 0xffff;
        if (!bVar8) {
          uVar11 = ((ulong)uVar2 & 0xffff) - 0x8000;
        }
        uVar11 = uVar11 + *(long *)(param_1 + 0x12e70);
      }
      *(ulong *)(param_1 + 0x12e70) = uVar11;
      *(ushort *)(param_1 + 0x12e78) = uVar5;
      *(undefined1 *)(param_1 + 0x12e7a) = 1;
      if ((*(ulong *)(param_2 + 0xc0) >> 0x20 & 1) == 0) goto LAB_0093df08;
      *(ulong *)(param_2 + 400 + uVar10 * 8) = uVar11 * 5 + (long)(int)*(ulong *)(param_2 + 0xc0);
      uVar10 = uVar10 + 1;
    } while (uVar10 < *(ulong *)(param_2 + 0x188));
  }
  uVar5 = *(ushort *)(param_2 + 0x9e0);
  uVar10 = (ulong)uVar5;
  if ((*(byte *)(param_1 + 0x12e7a) & 1) != 0) {
    uVar4 = *(ushort *)(param_1 + 0x12e78);
    uVar9 = (uint)uVar5;
    uVar6 = uVar9 - uVar4;
    bVar8 = uVar9 <= uVar4;
    uVar9 = uVar4 - uVar9;
    uVar2 = uVar6 ^ 0xffff8000;
    if (!bVar8 || uVar9 == 0) {
      uVar2 = uVar6;
    }
    uVar6 = uVar9 ^ 0x8000;
    if (bVar8) {
      uVar6 = uVar9;
    }
    uVar9 = uVar2 & 0xffff;
    uVar3 = uVar9;
    if ((uVar6 & 0xffff) <= uVar9) {
      uVar3 = uVar6 & 0xffff;
    }
    bVar8 = !bVar8;
    if (uVar3 != 0x4000) {
      bVar8 = uVar9 < 0x4001;
    }
    uVar10 = (ulong)uVar2 & 0xffff;
    if (!bVar8) {
      uVar10 = ((ulong)uVar2 & 0xffff) - 0x8000;
    }
    uVar10 = uVar10 + *(long *)(param_1 + 0x12e70);
  }
  *(ulong *)(param_1 + 0x12e70) = uVar10;
  *(ushort *)(param_1 + 0x12e78) = uVar5;
  *(undefined1 *)(param_1 + 0x12e7a) = 1;
  if ((*(ulong *)(param_2 + 0xc0) >> 0x20 & 1) == 0) {
LAB_0093df08:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/optional:1074: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
              );
  }
  lVar1 = uVar10 * 5 + (long)(int)*(ulong *)(param_2 + 0xc0);
  *(long *)(param_2 + 0x9e0) = lVar1;
  if (((param_3 & 1) != 0) && (uVar10 = *(ulong *)(param_2 + 0x188), uVar10 + 1 < 6)) {
    if (4 < uVar10) {
LAB_0093df1c:
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(0x5512,0x93df20);
      (*pcVar7)();
    }
    *(long *)(param_2 + uVar10 * 8 + 400) = lVar1 + -1;
    *(long *)(param_2 + 0x188) = *(long *)(param_2 + 0x188) + 1;
  }
  return;
}


// ===== 0093df20  FUN_0093df20 =====

void FUN_0093df20(long param_1,uint param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  ushort uVar6;
  bool bVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong *puVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  undefined2 local_64 [2];
  
  puVar10 = (ulong *)*param_3;
  uVar6 = *(ushort *)(param_3 + 1);
  local_64[0] = (undefined2)param_2;
  uVar14 = *puVar10;
  if (0xfe < uVar14) {
    uVar14 = 0xff;
  }
  if ((uint)uVar6 != (param_2 & 0xffff)) {
    uVar1 = param_2 & 0xffff;
    uVar16 = uVar6 - param_2;
    uVar12 = (uint)uVar6;
    uVar15 = uVar16 ^ 0x8000;
    if (uVar1 <= uVar12) {
      uVar15 = uVar16;
    }
    uVar16 = param_2 - uVar12 ^ 0x8000;
    if (uVar12 <= uVar1) {
      uVar16 = param_2 - uVar12;
    }
    uVar16 = uVar16 & 0xffff;
    uVar13 = uVar16;
    if ((uVar15 & 0xffff) <= uVar16) {
      uVar13 = uVar15 & 0xffff;
    }
    bVar7 = uVar12 < uVar1;
    if (uVar13 != 0x4000) {
      bVar7 = uVar16 < 0x4001;
    }
    if (bVar7) {
      iVar4 = -0x7fff;
      if (uVar12 < 0x7fff) {
        iVar4 = 1;
      }
      uVar12 = (uint)uVar6;
      uVar15 = iVar4 + uVar12;
      uVar16 = uVar15;
      if (uVar15 != uVar1) {
        uVar13 = uVar12 - *(ushort *)((long)puVar10 + 0x602);
        uVar16 = uVar13 ^ 0x8000;
        if (*(ushort *)((long)puVar10 + 0x602) <= uVar12) {
          uVar16 = uVar13;
        }
        uVar12 = (uint)uVar14 & 0xffff;
        uVar13 = 0;
        if ((uVar14 & 0xffff) != 0) {
          uVar13 = (uVar16 & 0xffff) / uVar12;
        }
        uVar11 = (ulong)((uVar16 & 0xffff) - uVar13 * uVar12);
        do {
          uVar5 = 0;
          if (uVar11 + 1 != uVar14) {
            uVar5 = uVar11 + 1;
          }
          if (0xfe < uVar5) {
                    /* WARNING: Subroutine does not return */
            FUN_0061fd88("../../modules/video_coding/rtp_vp9_ref_finder.cc",0x113,
                         "gof_idx < kMaxVp9FramesInGof",&DAT_001f5fa0);
          }
          uVar11 = (ulong)*(byte *)(*param_3 + uVar5 + 8);
          if (4 < uVar11) {
            uVar14 = FUN_004022fc();
            if ((uVar14 & 1) != 0) {
              return;
            }
            uVar9 = 0x8ba;
            goto LAB_0093e1cc;
          }
          plVar17 = (long *)(param_1 + 0x12df8 + uVar11 * 0x18);
          plVar19 = plVar17 + 1;
          plVar18 = (long *)*plVar19;
          plVar20 = plVar19;
          if (plVar18 == (long *)0x0) {
LAB_0093e118:
            puVar8 = (undefined8 *)operator_new(0x20);
            if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                        );
            }
            *(short *)((long)puVar8 + 0x1a) = (short)uVar15;
            *puVar8 = 0;
            puVar8[1] = 0;
            puVar8[2] = plVar19;
            *plVar20 = (long)puVar8;
            if (*(long *)*plVar17 != 0) {
              *plVar17 = *(long *)*plVar17;
              puVar8 = (undefined8 *)*plVar20;
            }
            FUN_005d5b94(plVar17[1],puVar8);
            plVar17[2] = plVar17[2] + 1;
          }
          else {
            uVar6 = *(ushort *)((long)plVar18 + 0x1a);
            plVar19 = plVar18;
            if ((uint)uVar6 != (uVar15 & 0xffff)) {
              do {
                uVar13 = (uint)uVar6;
                uVar16 = uVar15 & 0xffff;
                uVar12 = uVar15 - uVar13 ^ 0xffff8000;
                if (uVar13 <= uVar16) {
                  uVar12 = uVar15 - uVar13;
                }
                uVar2 = uVar13 - uVar15 ^ 0x8000;
                if (uVar16 <= uVar13) {
                  uVar2 = uVar13 - uVar15;
                }
                uVar12 = uVar12 & 0xffff;
                uVar2 = uVar2 & 0xffff;
                uVar3 = uVar2;
                if (uVar12 <= uVar2) {
                  uVar3 = uVar12;
                }
                bVar7 = uVar16 < uVar13;
                if (uVar3 != 0x4000) {
                  bVar7 = uVar2 < 0x4001;
                }
                if (bVar7) {
                  plVar18 = (long *)*plVar19;
                  plVar20 = plVar19;
                  if (plVar18 == (long *)0x0) goto LAB_0093e118;
                }
                else {
                  bVar7 = uVar13 < (uVar15 & 0xffff);
                  if (uVar3 != 0x4000) {
                    bVar7 = uVar12 < 0x4001;
                  }
                  if (!bVar7) break;
                  plVar18 = (long *)plVar19[1];
                  if (plVar18 == (long *)0x0) {
                    plVar20 = plVar19 + 1;
                    goto LAB_0093e118;
                  }
                }
                uVar6 = *(ushort *)((long)plVar18 + 0x1a);
                plVar19 = plVar18;
              } while ((uint)uVar6 != (uVar15 & 0xffff));
            }
          }
          iVar4 = -0x7fff;
          if (uVar15 < 0x7fff) {
            iVar4 = 1;
          }
          uVar15 = iVar4 + uVar15;
          uVar11 = uVar5;
          uVar16 = uVar1;
        } while (uVar15 != uVar1);
      }
      *(short *)(param_3 + 1) = (short)uVar16;
      return;
    }
  }
  uVar6 = *(ushort *)((long)puVar10 + 0x602);
  uVar15 = param_2 - uVar6;
  uVar1 = uVar15 ^ 0x8000;
  if ((uint)uVar6 < (param_2 & 0xffff) || (uint)uVar6 == (param_2 & 0xffff)) {
    uVar1 = uVar15;
  }
  uVar15 = (uint)uVar14 & 0xffff;
  uVar16 = 0;
  if ((uVar14 & 0xffff) != 0) {
    uVar16 = (uVar1 & 0xffff) / uVar15;
  }
  uVar14 = (ulong)*(byte *)((long)puVar10 + (ulong)((uVar1 & 0xffff) - uVar16 * uVar15) + 8);
  if (uVar14 < 5) {
    FUN_0093c688(param_1 + uVar14 * 0x18 + 0x12df8,local_64);
  }
  else {
    uVar14 = FUN_004022fc();
    if ((uVar14 & 1) == 0) {
      uVar9 = 0x952;
LAB_0093e1cc:
      FUN_00623bb0(&DAT_001f1906,"../../modules/video_coding/rtp_vp9_ref_finder.cc",uVar9,"At most "
                   ,5," temporal layers are supported.");
      return;
    }
  }
  return;
}


// ===== 0093e284  FUN_0093e284 =====

undefined8 FUN_0093e284(long param_1,ushort param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  byte bVar7;
  byte bVar8;
  ushort uVar9;
  bool bVar10;
  long *plVar11;
  code *pcVar12;
  undefined8 uVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong *puVar19;
  ulong uVar20;
  
  puVar19 = (ulong *)*param_3;
  uVar9 = param_2 - *(ushort *)((long)puVar19 + 0x602);
  uVar3 = uVar9 ^ 0x8000;
  if (*(ushort *)((long)puVar19 + 0x602) <= param_2) {
    uVar3 = uVar9;
  }
  uVar16 = *puVar19;
  uVar18 = 0;
  if (uVar16 != 0) {
    uVar18 = uVar3 / uVar16;
  }
  uVar18 = (ulong)uVar3 - uVar18 * uVar16;
  if (0xfe < uVar18) {
LAB_0093e4ac:
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(0x5512,0x93e4b0);
    (*pcVar12)();
  }
  bVar7 = *(byte *)((long)puVar19 + uVar18 + 8);
  if (bVar7 < 5) {
    uVar16 = (ulong)*(byte *)((long)puVar19 + uVar18 + 0x206);
    if (uVar16 != 0) {
      uVar17 = 0;
      do {
        if (uVar17 == 3) goto LAB_0093e4ac;
        bVar8 = *(byte *)((long)puVar19 + uVar17 + uVar18 * 3 + 0x305);
        uVar9 = param_2 - bVar8;
        uVar3 = uVar9 ^ 0x8000;
        if (bVar8 <= param_2) {
          uVar3 = uVar9;
        }
        if (bVar7 != 0) {
          uVar20 = 0;
          do {
            plVar2 = (long *)(param_1 + uVar20 * 0x18 + 0x12e00);
            plVar11 = (long *)*plVar2;
            plVar14 = plVar2;
            if ((long *)*plVar2 != (long *)0x0) {
              do {
                while( true ) {
                  plVar15 = plVar11;
                  uVar9 = *(ushort *)((long)plVar15 + 0x1a);
                  if (uVar9 == uVar3) goto LAB_0093e424;
                  uVar4 = uVar3 - uVar9 ^ 0x8000;
                  if (uVar9 <= uVar3) {
                    uVar4 = uVar3 - uVar9;
                  }
                  uVar5 = uVar9 - uVar3 ^ 0x8000;
                  if (uVar3 <= uVar9) {
                    uVar5 = uVar9 - uVar3;
                  }
                  uVar6 = uVar5;
                  if (uVar4 <= uVar5) {
                    uVar6 = uVar4;
                  }
                  bVar10 = uVar3 < uVar9;
                  if (uVar6 != 0x4000) {
                    bVar10 = uVar5 < 0x4001;
                  }
                  if (bVar10) break;
                  bVar10 = uVar9 < uVar3;
                  if (uVar6 != 0x4000) {
                    bVar10 = uVar4 < 0x4001;
                  }
                  if (!bVar10) {
                    if (plVar15 == plVar2) goto LAB_0093e370;
                    goto LAB_0093e42c;
                  }
                  plVar1 = plVar15 + 1;
                  plVar11 = (long *)*plVar1;
                  plVar15 = plVar14;
                  if ((long *)*plVar1 == (long *)0x0) goto LAB_0093e424;
                }
                plVar11 = (long *)*plVar15;
                plVar14 = plVar15;
              } while ((long *)*plVar15 != (long *)0x0);
LAB_0093e424:
              if (plVar15 != plVar2) {
LAB_0093e42c:
                uVar9 = *(ushort *)((long)plVar15 + 0x1a);
                if (uVar9 != param_2) {
                  uVar4 = uVar9 - param_2 ^ 0x8000;
                  if (param_2 <= uVar9) {
                    uVar4 = uVar9 - param_2;
                  }
                  uVar5 = param_2 - uVar9 ^ 0x8000;
                  if (uVar9 <= param_2) {
                    uVar5 = param_2 - uVar9;
                  }
                  uVar6 = uVar5;
                  if (uVar4 <= uVar5) {
                    uVar6 = uVar4;
                  }
                  bVar10 = uVar9 < param_2;
                  if (uVar6 != 0x4000) {
                    bVar10 = uVar5 < 0x4001;
                  }
                  if (bVar10) goto LAB_0093e308;
                }
              }
            }
LAB_0093e370:
            uVar20 = uVar20 + 1;
          } while (uVar20 != bVar7);
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 != uVar16);
    }
    uVar13 = 0;
  }
  else {
    uVar18 = FUN_004022fc();
    if ((uVar18 & 1) == 0) {
      FUN_00623bb0(&DAT_001f1906,"../../modules/video_coding/rtp_vp9_ref_finder.cc",0x762,"At most "
                   ,5," temporal layers are supported.");
    }
LAB_0093e308:
    uVar13 = 1;
  }
  return uVar13;
}


// ===== 0093e4b0  FUN_0093e4b0 =====

undefined8 FUN_0093e4b0(long param_1,ushort param_2,byte param_3,ushort param_4)

{
  long *plVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  long *plVar6;
  bool bVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  
  plVar1 = (long *)(param_1 + 0x12de8);
  plVar8 = plVar1;
  plVar6 = (long *)*plVar1;
  if ((long *)*plVar1 == (long *)0x0) {
    return 0;
  }
  while (plVar9 = plVar6, uVar5 = *(ushort *)((long)plVar9 + 0x1a), uVar5 != param_4) {
    uVar2 = param_4 - uVar5 ^ 0x8000;
    if (uVar5 <= param_4) {
      uVar2 = param_4 - uVar5;
    }
    uVar3 = uVar5 - param_4 ^ 0x8000;
    if (param_4 <= uVar5) {
      uVar3 = uVar5 - param_4;
    }
    uVar4 = uVar3;
    if (uVar2 <= uVar3) {
      uVar4 = uVar2;
    }
    bVar7 = param_4 < uVar5;
    if (uVar4 != 0x4000) {
      bVar7 = uVar3 < 0x4001;
    }
    plVar10 = plVar9;
    if (!bVar7) {
      bVar7 = uVar5 < param_4;
      if (uVar4 != 0x4000) {
        bVar7 = uVar2 < 0x4001;
      }
      if (!bVar7) break;
      plVar10 = plVar9 + 1;
      plVar9 = plVar8;
    }
    plVar8 = plVar9;
    plVar6 = (long *)*plVar10;
    if ((long *)*plVar10 == (long *)0x0) goto LAB_0093e608;
  }
  plVar6 = (long *)plVar9[1];
  plVar9 = plVar8;
  while (plVar8 = plVar6, plVar8 != (long *)0x0) {
    plVar9 = plVar8;
    plVar6 = (long *)*plVar8;
  }
LAB_0093e608:
  while( true ) {
    if (plVar9 == plVar1) {
      return 0;
    }
    uVar5 = *(ushort *)((long)plVar9 + 0x1a);
    if (uVar5 == param_2) break;
    uVar2 = uVar5 - param_2 ^ 0x8000;
    if (param_2 <= uVar5) {
      uVar2 = uVar5 - param_2;
    }
    uVar3 = param_2 - uVar5 ^ 0x8000;
    if (uVar5 <= param_2) {
      uVar3 = param_2 - uVar5;
    }
    uVar4 = uVar3;
    if (uVar2 <= uVar3) {
      uVar4 = uVar2;
    }
    bVar7 = uVar5 < param_2;
    if (uVar4 != 0x4000) {
      bVar7 = uVar3 < 0x4001;
    }
    if (!bVar7) {
      return 0;
    }
    if (*(byte *)((long)plVar9 + 0x1c) < param_3) {
      return 1;
    }
    plVar8 = plVar9;
    plVar6 = (long *)plVar9[1];
    if ((long *)plVar9[1] == (long *)0x0) {
      do {
        plVar9 = (long *)plVar8[2];
        bVar7 = plVar8 != (long *)*plVar9;
        plVar8 = plVar9;
      } while (bVar7);
    }
    else {
      do {
        plVar9 = plVar6;
        plVar6 = (long *)*plVar9;
      } while ((long *)*plVar9 != (long *)0x0);
    }
  }
  return 0;
}


// ===== 0093e620  FUN_0093e620 =====

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0093e620(long param_1,long *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long *local_40;
  long local_38;
  
  uVar3 = *(ulong *)(param_1 + 0x20);
  lVar9 = *(long *)(param_1 + 8);
  lVar4 = *(long *)(param_1 + 0x10);
  uVar14 = uVar3 + *(long *)(param_1 + 0x28);
  plVar7 = (long *)(lVar9 + (uVar14 >> 8) * 8);
  if (lVar9 == lVar4) {
    if (param_3 == 0) goto LAB_0093e9a4;
    lVar13 = 0;
    plVar6 = (long *)(lVar9 + (uVar3 >> 8) * 8);
    lVar10 = lVar13;
    if (param_3 != 0) goto LAB_0093e684;
LAB_0093e6dc:
    lVar11 = *plVar6;
    plVar8 = plVar6;
    lVar10 = lVar13;
    goto LAB_0093e770;
  }
  if (param_3 == *plVar7 + (uVar14 & 0xff) * 0x10) {
LAB_0093e9a4:
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/deque:2327: libc++ Hardening assertion __f != end() failed: deque::erase(iterator) called with a non-dereferenceable iterator\n"
              );
  }
  plVar6 = (long *)(lVar9 + (uVar3 >> 8) * 8);
  lVar13 = *plVar6 + (uVar3 & 0xff) * 0x10;
  lVar10 = lVar13;
  if (param_3 == lVar13) goto LAB_0093e6dc;
LAB_0093e684:
  lVar11 = *plVar6;
  uVar1 = (param_3 - *param_2 >> 4) + ((long)param_2 - (long)plVar6) * 0x20;
  uVar3 = lVar10 - lVar11 >> 4;
  lVar13 = lVar10;
  plVar8 = plVar6;
  if (uVar1 != uVar3) {
    if ((long)uVar1 < 1) {
      uVar5 = 0xff - uVar1;
      uVar2 = 0x1fe - uVar1;
      if (-1 < (long)uVar5) {
        uVar2 = uVar5;
      }
      uVar12 = uVar5 & 0xff;
      if ((long)uVar5 < 1) {
        uVar12 = -(-uVar5 & 0xff);
      }
      plVar8 = plVar6 + -((long)uVar2 >> 8);
      lVar11 = *plVar8;
      lVar13 = lVar11 + (0xff - uVar12) * 0x10;
    }
    else {
      plVar8 = plVar6 + (uVar1 >> 8);
      lVar11 = *plVar8;
      lVar13 = lVar11 + (uVar1 & 0xff) * 0x10;
    }
    if (*(long *)(param_1 + 0x28) - 1U >> 1 < uVar1 - uVar3) {
      lVar10 = lVar13 - lVar11 >> 4;
      if (lVar10 < 0) {
        plVar6 = plVar8 + -(0xfeU - lVar10 >> 8);
        lVar10 = *plVar6 + (ulong)(byte)~(byte)(0xfeU - lVar10) * 0x10;
        if (lVar9 != lVar4) goto LAB_0093e760;
LAB_0093e8f0:
        lVar9 = 0;
      }
      else {
        plVar6 = plVar8 + (lVar10 + 1U >> 8);
        lVar10 = *plVar6 + (lVar10 + 1U & 0xff) * 0x10;
        if (lVar9 == lVar4) goto LAB_0093e8f0;
LAB_0093e760:
        lVar9 = *plVar7 + (uVar14 & 0xff) * 0x10;
      }
      local_40 = plVar8;
      local_38 = lVar13;
      FUN_0093fd18(plVar6,lVar10,plVar7,lVar9,&local_40);
      if (local_38 != 0) {
        plVar7 = *(long **)(local_38 + 8);
        *(undefined8 *)(local_38 + 8) = 0;
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 8))();
        }
        lVar4 = *(long *)(param_1 + 0x10);
        lVar13 = *(long *)(param_1 + 0x28);
        lVar9 = 0;
        if (lVar4 != *(long *)(param_1 + 8)) {
          lVar9 = (lVar4 - *(long *)(param_1 + 8)) * 0x20 + -1;
        }
        *(long *)(param_1 + 0x28) = lVar13 + -1;
        if ((lVar9 - (lVar13 + *(long *)(param_1 + 0x20))) + 1U < 0x200) {
          return;
        }
        operator_delete(*(void **)(lVar4 + -8));
        lVar9 = *(long *)(param_1 + 0x10) + -8;
        if (lVar9 != 0) {
          *(long *)(param_1 + 0x10) = lVar9;
          return;
        }
      }
      goto LAB_0093e990;
    }
  }
LAB_0093e770:
  lVar9 = lVar13 - lVar11 >> 4;
  if (lVar9 < 0) {
    local_40 = plVar8 + -(0xfeU - lVar9 >> 8);
    local_38 = *local_40 + (ulong)(byte)~(byte)(0xfeU - lVar9) * 0x10;
  }
  else {
    local_40 = plVar8 + (lVar9 + 1U >> 8);
    local_38 = *local_40 + (lVar9 + 1U & 0xff) * 0x10;
  }
  FUN_0093fa18(plVar6,lVar10,plVar8,lVar13,&local_40);
  if (lVar10 != 0) {
    plVar7 = *(long **)(lVar10 + 8);
    *(undefined8 *)(lVar10 + 8) = 0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))();
    }
    uVar14 = *(long *)(param_1 + 0x20) + _DAT_001f2940;
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + _UNK_001f2948;
    *(ulong *)(param_1 + 0x20) = uVar14;
    if (0x1ff < uVar14) {
      operator_delete((void *)**(undefined8 **)(param_1 + 8));
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -0x100;
    }
    return;
  }
LAB_0093e990:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 0093e9b8  FUN_0093e9b8 =====

void FUN_0093e9b8(long param_1,uint param_2)

{
  ulong uVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined1 auVar9 [16];
  
  lVar5 = *(long *)(param_1 + 8);
  lVar6 = *(long *)(param_1 + 0x10);
  plVar7 = (long *)(lVar5 + (*(ulong *)(param_1 + 0x20) >> 8) * 8);
  if (lVar5 == lVar6) {
    lVar8 = 0;
  }
  else {
    lVar8 = *plVar7 + (*(ulong *)(param_1 + 0x20) & 0xff) * 0x10;
  }
  auVar9._8_8_ = lVar8;
  auVar9._0_8_ = plVar7;
  do {
    lVar8 = auVar9._8_8_;
    plVar7 = auVar9._0_8_;
    if (lVar5 == lVar6) {
      if (lVar8 == 0) {
        return;
      }
    }
    else {
      uVar1 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20);
      if (lVar8 == *(long *)(lVar5 + (uVar1 >> 8) * 8) + (uVar1 & 0xff) * 0x10) {
        return;
      }
    }
    uVar4 = FUN_0084f7f0(*(undefined8 *)(lVar8 + 8));
    if ((param_2 & 0xffff) == (uVar4 & 0xffff)) {
LAB_0093ea9c:
      auVar9._8_8_ = lVar8 + 0x10;
      auVar9._0_8_ = plVar7;
      if ((lVar8 + 0x10) - *plVar7 == 0x1000) {
        auVar9._8_8_ = plVar7[1];
        auVar9._0_8_ = plVar7 + 1;
      }
    }
    else {
      iVar2 = (int)(short)((short)param_2 - (short)uVar4);
      bVar3 = (uVar4 & 0xffff) < (param_2 & 0xffff);
      if ((param_2 & 0xffff) - (uVar4 & 0xffff) != 0x8000) {
        bVar3 = iVar2 != -1 && iVar2 + 1 < 0 == SCARRY4(iVar2,1);
      }
      if (!bVar3) goto LAB_0093ea9c;
      auVar9 = FUN_0093e620(param_1,plVar7,lVar8);
    }
    lVar5 = *(long *)(param_1 + 8);
    lVar6 = *(long *)(param_1 + 0x10);
  } while( true );
}


// ===== 0093ead0  FUN_0093ead0 =====

void FUN_0093ead0(long *param_1)

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
    lVar3 = (lVar6 - lVar5) * 0x20 + -1;
  }
  if ((ulong)(lVar3 - (param_1[5] + param_1[4])) < 0x100) {
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
      local_48 = operator_new(0x1000);
      FUN_0093f260(&local_40,&local_48);
      lVar3 = param_1[1];
      puVar4 = (undefined1 *)param_1[2];
      if ((undefined1 *)lVar3 != puVar4) {
        do {
          FUN_0093f4e8(&local_40,lVar3);
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
        lVar6 = 0x80;
      }
      else {
        lVar6 = param_1[4] + 0x100;
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
      goto LAB_0093ec90;
    }
    if (lVar5 == lVar3) {
      local_40 = (undefined1 *)operator_new(0x1000);
      FUN_0093f260(param_1,&local_40);
      puVar2 = (undefined8 *)(param_1[2] + -8);
      local_40 = (undefined1 *)*puVar2;
      puVar4 = local_30;
      if (puVar2 == (undefined8 *)0x0) goto LAB_0093ec90;
      param_1[2] = (long)puVar2;
      FUN_0093ed28(param_1,&local_40);
    }
    else {
      local_40 = (undefined1 *)operator_new(0x1000);
      FUN_0093efc4(param_1,&local_40);
    }
    if (param_1[2] - param_1[1] == 8) {
      lVar3 = 0x80;
    }
    else {
      lVar3 = param_1[4] + 0x100;
    }
    param_1[4] = lVar3;
  }
  else {
    param_1[4] = param_1[4] + 0x100;
    puVar2 = (undefined8 *)(lVar6 + -8);
    local_40 = (undefined1 *)*puVar2;
    puVar4 = local_30;
    if (puVar2 == (undefined8 *)0x0) {
LAB_0093ec90:
      local_30 = puVar4;
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    param_1[2] = (long)puVar2;
    FUN_0093ed28(param_1,&local_40);
  }
  return;
}


// ===== 0093ed28  FUN_0093ed28 =====

void FUN_0093ed28(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar9 == (undefined8 *)0x0) goto LAB_0093efac;
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
LAB_0093efac:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0093efc4  FUN_0093efc4 =====

void FUN_0093efc4(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar9 == (undefined8 *)0x0) goto LAB_0093f248;
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
LAB_0093f248:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0093f260  FUN_0093f260 =====

void FUN_0093f260(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar8 == (undefined8 *)0x0) goto LAB_0093f4d0;
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
LAB_0093f4d0:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0093f4e8  FUN_0093f4e8 =====

void FUN_0093f4e8(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar8 == (undefined8 *)0x0) goto LAB_0093f758;
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
LAB_0093f758:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0093f770  FUN_0093f770 =====

undefined1  [16]
FUN_0093f770(undefined8 param_1,long *param_2,undefined8 param_3,long *param_4,long *param_5)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined1 auVar9 [16];
  
  plVar3 = param_2 + 1;
  plVar6 = plVar3;
  if ((long *)*plVar3 != (long *)0x0) {
    plVar1 = (long *)*plVar3;
    do {
      while (plVar2 = plVar1, plVar3 = plVar2, *param_4 < plVar2[4]) {
        plVar1 = (long *)*plVar2;
        plVar6 = plVar2;
        if ((long *)*plVar2 == (long *)0x0) goto LAB_0093f7dc;
      }
      if (*param_4 == plVar2[4]) {
        uVar4 = 0;
        goto LAB_0093f850;
      }
      plVar1 = (long *)plVar2[1];
    } while ((long *)plVar2[1] != (long *)0x0);
    plVar6 = plVar2 + 1;
  }
LAB_0093f7dc:
  plVar2 = (long *)operator_new(0x38);
  if ((plVar2 == (long *)0x0) || (*plVar2 = 0, plVar2 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  lVar5 = *param_4;
  lVar8 = param_5[1];
  lVar7 = *param_5;
  *plVar2 = 0;
  plVar2[1] = 0;
  plVar2[4] = lVar5;
  plVar2[6] = lVar8;
  plVar2[5] = lVar7;
  plVar2[2] = (long)plVar3;
  *plVar6 = (long)plVar2;
  plVar3 = plVar2;
  if (*(long *)*param_2 != 0) {
    *param_2 = *(long *)*param_2;
    plVar3 = (long *)*plVar6;
  }
  FUN_005d5b94(param_2[1],plVar3);
  uVar4 = 1;
  param_2[2] = param_2[2] + 1;
LAB_0093f850:
  auVar9._8_8_ = uVar4;
  auVar9._0_8_ = plVar2;
  return auVar9;
}


// ===== 0093f880  FUN_0093f880 =====

undefined1  [16] FUN_0093f880(undefined8 *param_1,ushort *param_2,undefined1 *param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined1 uVar4;
  ushort uVar5;
  ushort uVar6;
  bool bVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined1 auVar14 [16];
  
  plVar13 = (long *)*param_1;
  plVar8 = (long *)operator_new(0x20);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  uVar5 = *param_2;
  uVar4 = *param_3;
  *plVar8 = 0;
  *(ushort *)((long)plVar8 + 0x1a) = uVar5;
  *(undefined1 *)((long)plVar8 + 0x1c) = uVar4;
  plVar10 = plVar13 + 1;
  plVar11 = (long *)*plVar10;
  plVar12 = plVar10;
  if (plVar11 == (long *)0x0) {
LAB_0093f99c:
    *plVar8 = 0;
    plVar8[1] = 0;
    plVar8[2] = (long)plVar10;
    *plVar12 = (long)plVar8;
    plVar10 = plVar8;
    if (*(long *)*plVar13 != 0) {
      *plVar13 = *(long *)*plVar13;
      plVar10 = (long *)*plVar12;
    }
    FUN_005d5b94(plVar13[1],plVar10);
    uVar9 = 1;
    plVar13[2] = plVar13[2] + 1;
  }
  else {
    uVar6 = *(ushort *)((long)plVar11 + 0x1a);
    plVar10 = plVar11;
    while (uVar6 != uVar5) {
      uVar1 = uVar5 - uVar6 ^ 0x8000;
      if (uVar6 <= uVar5) {
        uVar1 = uVar5 - uVar6;
      }
      uVar2 = uVar6 - uVar5 ^ 0x8000;
      if (uVar5 <= uVar6) {
        uVar2 = uVar6 - uVar5;
      }
      uVar3 = uVar2;
      if (uVar1 <= uVar2) {
        uVar3 = uVar1;
      }
      bVar7 = uVar5 < uVar6;
      if (uVar3 != 0x4000) {
        bVar7 = uVar2 < 0x4001;
      }
      if (bVar7) {
        plVar11 = (long *)*plVar10;
        plVar12 = plVar10;
        if (plVar11 == (long *)0x0) goto LAB_0093f99c;
      }
      else {
        bVar7 = uVar6 < uVar5;
        if (uVar3 != 0x4000) {
          bVar7 = uVar1 < 0x4001;
        }
        if (!bVar7) break;
        plVar11 = (long *)plVar10[1];
        if (plVar11 == (long *)0x0) {
          plVar12 = plVar10 + 1;
          goto LAB_0093f99c;
        }
      }
      plVar10 = plVar11;
      uVar6 = *(ushort *)((long)plVar11 + 0x1a);
    }
    if ((ushort *)((long)plVar8 + 0x1a) == (ushort *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
    operator_delete(plVar8);
    uVar9 = 0;
    plVar8 = plVar10;
  }
  auVar14._8_8_ = uVar9;
  auVar14._0_8_ = plVar8;
  return auVar14;
}


// ===== 0093fa18  FUN_0093fa18 =====

void FUN_0093fa18(long *param_1,long param_2,long *param_3,long param_4,undefined8 *param_5)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  
  plVar7 = (long *)*param_5;
  puVar8 = (undefined8 *)param_5[1];
  if (param_1 == param_3) {
    if (param_2 == param_4) goto LAB_0093fcf0;
    lVar10 = *plVar7;
    while( true ) {
      lVar2 = (long)puVar8 - lVar10 >> 4;
      lVar10 = param_4 - param_2 >> 4;
      if (lVar2 <= lVar10) {
        lVar10 = lVar2;
      }
      lVar2 = lVar10 * -0x10;
      if (lVar2 != 0) {
        puVar6 = (undefined8 *)(param_4 + -8);
        puVar9 = puVar8;
        do {
          puVar8 = puVar9 + -2;
          *puVar8 = puVar6[-1];
          uVar4 = *puVar6;
          *puVar6 = 0;
          plVar1 = (long *)puVar9[-1];
          puVar9[-1] = uVar4;
          if (plVar1 != (long *)0x0) {
            (**(code **)(*plVar1 + 8))();
          }
          lVar2 = lVar2 + 0x10;
          puVar6 = puVar6 + -2;
          puVar9 = puVar8;
        } while (lVar2 != 0);
      }
      param_4 = param_4 + lVar10 * -0x10;
      if (param_2 == param_4) break;
      plVar7 = plVar7 + -1;
      lVar10 = *plVar7;
      puVar8 = (undefined8 *)(lVar10 + 0x1000);
    }
  }
  else {
    lVar10 = *param_3;
    if (lVar10 != param_4) {
      lVar2 = *plVar7;
      while( true ) {
        lVar3 = (long)puVar8 - lVar2 >> 4;
        lVar2 = param_4 - lVar10 >> 4;
        if (lVar3 <= lVar2) {
          lVar2 = lVar3;
        }
        lVar3 = lVar2 * -0x10;
        if (lVar3 != 0) {
          puVar6 = (undefined8 *)(param_4 + -8);
          puVar9 = puVar8;
          do {
            puVar8 = puVar9 + -2;
            *puVar8 = puVar6[-1];
            uVar4 = *puVar6;
            *puVar6 = 0;
            plVar1 = (long *)puVar9[-1];
            puVar9[-1] = uVar4;
            if (plVar1 != (long *)0x0) {
              (**(code **)(*plVar1 + 8))();
            }
            lVar3 = lVar3 + 0x10;
            puVar6 = puVar6 + -2;
            puVar9 = puVar8;
          } while (lVar3 != 0);
        }
        param_4 = param_4 + lVar2 * -0x10;
        if (lVar10 == param_4) break;
        plVar7 = plVar7 + -1;
        lVar2 = *plVar7;
        puVar8 = (undefined8 *)(lVar2 + 0x1000);
      }
      if ((plVar7 != (long *)0x0) && (puVar8 == (undefined8 *)(*plVar7 + 0x1000))) {
        plVar7 = plVar7 + 1;
        puVar8 = (undefined8 *)*plVar7;
      }
    }
    param_3 = param_3 + -1;
    while( true ) {
      *param_5 = plVar7;
      param_5[1] = puVar8;
      if (param_1 == param_3) break;
      lVar3 = *param_3;
      lVar2 = *plVar7;
      lVar10 = lVar3 + 0x1000;
      while( true ) {
        lVar5 = (long)puVar8 - lVar2 >> 4;
        lVar2 = lVar10 - lVar3 >> 4;
        if (lVar5 <= lVar2) {
          lVar2 = lVar5;
        }
        lVar5 = lVar2 * -0x10;
        if (lVar5 != 0) {
          puVar6 = (undefined8 *)(lVar10 + -8);
          puVar9 = puVar8;
          do {
            puVar8 = puVar9 + -2;
            *puVar8 = puVar6[-1];
            uVar4 = *puVar6;
            *puVar6 = 0;
            plVar1 = (long *)puVar9[-1];
            puVar9[-1] = uVar4;
            if (plVar1 != (long *)0x0) {
              (**(code **)(*plVar1 + 8))();
            }
            lVar5 = lVar5 + 0x10;
            puVar6 = puVar6 + -2;
            puVar9 = puVar8;
          } while (lVar5 != 0);
        }
        lVar10 = lVar10 + lVar2 * -0x10;
        if (lVar3 == lVar10) break;
        plVar7 = plVar7 + -1;
        lVar2 = *plVar7;
        puVar8 = (undefined8 *)(lVar2 + 0x1000);
      }
      if ((plVar7 != (long *)0x0) && (puVar8 == (undefined8 *)(*plVar7 + 0x1000))) {
        plVar7 = plVar7 + 1;
        puVar8 = (undefined8 *)*plVar7;
      }
      param_3 = param_3 + -1;
    }
    lVar10 = *param_3 + 0x1000;
    if (param_2 == lVar10) goto LAB_0093fcf0;
    lVar2 = *plVar7;
    while( true ) {
      lVar3 = (long)puVar8 - lVar2 >> 4;
      lVar2 = lVar10 - param_2 >> 4;
      if (lVar3 <= lVar2) {
        lVar2 = lVar3;
      }
      lVar3 = lVar2 * -0x10;
      if (lVar3 != 0) {
        puVar6 = (undefined8 *)(lVar10 + -8);
        puVar9 = puVar8;
        do {
          puVar8 = puVar9 + -2;
          *puVar8 = puVar6[-1];
          uVar4 = *puVar6;
          *puVar6 = 0;
          plVar1 = (long *)puVar9[-1];
          puVar9[-1] = uVar4;
          if (plVar1 != (long *)0x0) {
            (**(code **)(*plVar1 + 8))();
          }
          lVar3 = lVar3 + 0x10;
          puVar6 = puVar6 + -2;
          puVar9 = puVar8;
        } while (lVar3 != 0);
      }
      lVar10 = lVar10 + lVar2 * -0x10;
      if (param_2 == lVar10) break;
      plVar7 = plVar7 + -1;
      lVar2 = *plVar7;
      puVar8 = (undefined8 *)(lVar2 + 0x1000);
    }
  }
  if ((plVar7 != (long *)0x0) && (puVar8 == (undefined8 *)(*plVar7 + 0x1000))) {
    plVar7 = plVar7 + 1;
    puVar8 = (undefined8 *)*plVar7;
  }
LAB_0093fcf0:
  *param_5 = plVar7;
  param_5[1] = puVar8;
  return;
}


// ===== 0093fd18  FUN_0093fd18 =====

void FUN_0093fd18(long *param_1,undefined8 *param_2,long *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  if (param_1 == param_3) {
    plVar7 = (long *)*param_5;
    puVar8 = (undefined8 *)param_5[1];
    if (param_2 != param_4) {
      puVar9 = (undefined8 *)*plVar7;
      do {
        lVar6 = (long)param_4 - (long)param_2 >> 4;
        lVar3 = (long)puVar9 + (0x1000 - (long)puVar8) >> 4;
        if (lVar3 <= lVar6) {
          lVar6 = lVar3;
        }
        if (lVar6 != 0) {
          puVar9 = param_2 + lVar6 * 2;
          do {
            *puVar8 = *param_2;
            uVar4 = param_2[1];
            param_2[1] = 0;
            plVar1 = (long *)puVar8[1];
            puVar8[1] = uVar4;
            if (plVar1 != (long *)0x0) {
              (**(code **)(*plVar1 + 8))();
            }
            param_2 = param_2 + 2;
            puVar8 = puVar8 + 2;
          } while (param_2 != puVar9);
          param_2 = puVar9;
          if (param_4 == puVar9) goto LAB_00940014;
        }
        plVar7 = plVar7 + 1;
        puVar9 = (undefined8 *)*plVar7;
        puVar8 = puVar9;
      } while( true );
    }
    goto LAB_0094002c;
  }
  plVar7 = (long *)*param_5;
  puVar8 = (undefined8 *)param_5[1];
  puVar9 = (undefined8 *)(*param_1 + 0x1000);
  if (param_2 != puVar9) {
    puVar2 = (undefined8 *)*plVar7;
    do {
      lVar6 = (long)puVar9 - (long)param_2 >> 4;
      lVar3 = (long)puVar2 + (0x1000 - (long)puVar8) >> 4;
      if (lVar3 <= lVar6) {
        lVar6 = lVar3;
      }
      if (lVar6 != 0) {
        puVar2 = param_2 + lVar6 * 2;
        do {
          *puVar8 = *param_2;
          uVar4 = param_2[1];
          param_2[1] = 0;
          plVar1 = (long *)puVar8[1];
          puVar8[1] = uVar4;
          if (plVar1 != (long *)0x0) {
            (**(code **)(*plVar1 + 8))();
          }
          param_2 = param_2 + 2;
          puVar8 = puVar8 + 2;
        } while (param_2 != puVar2);
        param_2 = puVar2;
        if (puVar9 == puVar2) goto LAB_0093fdf0;
      }
      plVar7 = plVar7 + 1;
      puVar2 = (undefined8 *)*plVar7;
      puVar8 = puVar2;
    } while( true );
  }
  goto LAB_0093fe08;
LAB_0093fdf0:
  if ((plVar7 != (long *)0x0) && (puVar8 == (undefined8 *)(*plVar7 + 0x1000))) {
    plVar7 = plVar7 + 1;
    puVar8 = (undefined8 *)*plVar7;
  }
LAB_0093fe08:
  param_1 = param_1 + 1;
LAB_0093fe14:
  *param_5 = plVar7;
  param_5[1] = puVar8;
  if (param_1 != param_3) {
    puVar9 = (undefined8 *)*param_1;
    puVar5 = (undefined8 *)*plVar7;
    puVar2 = puVar9 + 0x200;
    do {
      lVar6 = (long)puVar2 - (long)puVar9 >> 4;
      lVar3 = (long)puVar5 + (0x1000 - (long)puVar8) >> 4;
      if (lVar3 <= lVar6) {
        lVar6 = lVar3;
      }
      if (lVar6 != 0) {
        puVar5 = puVar9 + lVar6 * 2;
        do {
          *puVar8 = *puVar9;
          uVar4 = puVar9[1];
          puVar9[1] = 0;
          plVar1 = (long *)puVar8[1];
          puVar8[1] = uVar4;
          if (plVar1 != (long *)0x0) {
            (**(code **)(*plVar1 + 8))();
          }
          puVar9 = puVar9 + 2;
          puVar8 = puVar8 + 2;
        } while (puVar9 != puVar5);
        puVar9 = puVar5;
        if (puVar2 == puVar5) goto LAB_0093feb0;
      }
      plVar7 = plVar7 + 1;
      puVar5 = (undefined8 *)*plVar7;
      puVar8 = puVar5;
    } while( true );
  }
  puVar9 = (undefined8 *)*param_1;
  if (puVar9 == param_4) {
LAB_0093ff78:
    *param_5 = plVar7;
    param_5[1] = puVar8;
    return;
  }
  puVar2 = (undefined8 *)*plVar7;
  do {
    lVar6 = (long)param_4 - (long)puVar9 >> 4;
    lVar3 = (long)puVar2 + (0x1000 - (long)puVar8) >> 4;
    if (lVar3 <= lVar6) {
      lVar6 = lVar3;
    }
    if (lVar6 != 0) {
      puVar2 = puVar9 + lVar6 * 2;
      do {
        *puVar8 = *puVar9;
        uVar4 = puVar9[1];
        puVar9[1] = 0;
        plVar1 = (long *)puVar8[1];
        puVar8[1] = uVar4;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        puVar9 = puVar9 + 2;
        puVar8 = puVar8 + 2;
      } while (puVar9 != puVar2);
      puVar9 = puVar2;
      if (param_4 == puVar2) {
        if ((plVar7 != (long *)0x0) && (puVar8 == (undefined8 *)(*plVar7 + 0x1000))) {
          plVar7 = plVar7 + 1;
          puVar8 = (undefined8 *)*plVar7;
        }
        goto LAB_0093ff78;
      }
    }
    plVar7 = plVar7 + 1;
    puVar2 = (undefined8 *)*plVar7;
    puVar8 = puVar2;
  } while( true );
LAB_0093feb0:
  if ((plVar7 != (long *)0x0) && (puVar8 == (undefined8 *)(*plVar7 + 0x1000))) {
    plVar7 = plVar7 + 1;
    puVar8 = (undefined8 *)*plVar7;
  }
  param_1 = param_1 + 1;
  goto LAB_0093fe14;
LAB_00940014:
  if ((plVar7 != (long *)0x0) && (puVar8 == (undefined8 *)(*plVar7 + 0x1000))) {
    plVar7 = plVar7 + 1;
    puVar8 = (undefined8 *)*plVar7;
  }
LAB_0094002c:
  *param_5 = plVar7;
  param_5[1] = puVar8;
  return;
}


// ===== 00940050  FUN_00940050 =====

void FUN_00940050(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  FUN_009403d4(param_1 + 1,param_3,param_2);
  FUN_00943c4c(param_1 + 0x13);
  return;
}


// ===== 00940090  FUN_00940090 =====

void FUN_00940090(long param_1)

{
  long local_8;
  
  local_8 = param_1 + 0xf8;
  FUN_009402cc(&local_8,*(undefined8 *)(param_1 + 0x100));
  local_8 = param_1 + 0xe0;
  FUN_00940360(&local_8,*(undefined8 *)(param_1 + 0xe8));
  if (*(char *)(param_1 + 0xd8) == '\x01') {
    FUN_009420e0(param_1 + 0xa0);
  }
  FUN_0094051c(param_1 + 8);
  return;
}


// ===== 009400f8  FUN_009400f8 =====

undefined8 FUN_009400f8(long param_1)

{
  FUN_0094063c(param_1 + 8);
  return 0;
}


// ===== 0094011c  FUN_0094011c =====

void FUN_0094011c(long param_1,long param_2,undefined4 param_3)

{
  if (param_2 != 0) {
    FUN_00943db0(param_1 + 0x98,param_3,param_2);
    return;
  }
  FUN_00943c78(param_1 + 0x98,param_3);
  return;
}


// ===== 00940144  FUN_00940144 =====

void FUN_00940144(long param_1)

{
  FUN_00943e28(param_1 + 0x98);
  return;
}


// ===== 00940150  FUN_00940150 =====

undefined4 FUN_00940150(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  char **local_58;
  char *local_50;
  char *pcStack_48;
  
  if (((DAT_00d804e0 & 1) == 0) && (iVar2 = FUN_0054fdd4(&DAT_00d804e0), iVar2 != 0)) {
    DAT_00d804d8 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00d804e0);
  }
  local_58 = (char **)0x0;
  pcStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00d804d8 != '\0') {
    local_58 = &local_50;
    FUN_0066d348(0x42,DAT_00d804d8,"VideoReceiver2::Decode",0,0,0,0,0,0);
    local_50 = DAT_00d804d8;
    pcStack_48 = "VideoReceiver2::Decode";
  }
  lVar3 = FUN_00943f48(param_1 + 0x13,param_2,param_1 + 1);
  if (lVar3 == 0) {
    uVar1 = 0xfffffff8;
  }
  else {
    uVar4 = (**(code **)(*(long *)*param_1 + 0x10))();
    uVar1 = FUN_0094231c(lVar3,param_2,uVar4);
  }
  if ((local_58 != (char **)0x0) && (**local_58 != '\0')) {
    FUN_0066d348(0x45,*local_58,local_58[1],0,0,0,0,0,0);
  }
  return uVar1;
}


// ===== 009402b4  FUN_009402b4 =====

void FUN_009402b4(long param_1)

{
  FUN_00943e74(param_1 + 0x98);
  return;
}


// ===== 009402c0  FUN_009402c0 =====

void FUN_009402c0(long param_1)

{
  FUN_00943ef8(param_1 + 0x98);
  return;
}


// ===== 009402cc  FUN_009402cc =====

void FUN_009402cc(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_009402cc(param_1,*param_2);
      if (param_2 == (undefined8 *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      plVar1 = (long *)param_2[5];
      puVar2 = (undefined8 *)param_2[1];
      param_2[5] = 0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      operator_delete(param_2);
      param_2 = puVar2;
    } while (puVar2 != (undefined8 *)0x0);
  }
  return;
}


// ===== 00940360  FUN_00940360 =====

void FUN_00940360(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    do {
      FUN_00940360(param_1,*param_2);
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


// ===== 009403d4  FUN_009403d4 =====

int FUN_009403d4(undefined8 *param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                undefined8 param_5)

{
  ulong uVar1;
  double dVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 *local_38;
  
  param_1[2] = param_3;
  *param_1 = &PTR_FUN_00d3e1f0;
  uVar4 = (**(code **)(*param_3 + 0x10))(param_3);
  uVar5 = (**(code **)(*param_3 + 0x18))(param_3,uVar4);
  uVar6 = (**(code **)(*(long *)param_1[2] + 0x10))((long *)param_1[2]);
  dVar2 = DAT_001f4ff8;
  param_1[5] = param_2;
  param_1[6] = param_5;
  uVar7 = -uVar6 / 1000;
  if (500 < -uVar6 % 1000) {
    uVar7 = uVar7 + 1;
  }
  uVar1 = -(uVar6 / 1000) - (ulong)(499 < uVar6 % 1000);
  if ((uVar6 & 0x8000000000000000) != 0) {
    uVar1 = uVar7;
  }
  param_1[3] = (long)((double)(uVar5 & 0xffffffff) / dVar2 + 0.5) + (uVar5 >> 0x20) * 1000 + uVar1;
  param_1[4] = 0;
  local_38 = &DAT_aaaaaaaaaaaaaaaa;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_38);
  pthread_mutex_init((pthread_mutex_t *)(param_1 + 7),(pthread_mutexattr_t *)&local_38);
  iVar3 = pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_38);
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  return iVar3;
}


// ===== 0094051c  FUN_0094051c =====

int FUN_0094051c(undefined8 *param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  *param_1 = &PTR_FUN_00d3e1f0;
  FUN_00941f00(param_1 + 0xc);
  puVar5 = (undefined8 *)param_1[0xd];
  puVar6 = (undefined8 *)param_1[0xe];
  if (puVar5 != puVar6) {
    do {
      puVar4 = puVar5 + 1;
      operator_delete((void *)*puVar5);
      puVar5 = puVar4;
    } while (puVar4 != puVar6);
    puVar5 = (undefined8 *)param_1[0xd];
    puVar6 = (undefined8 *)param_1[0xe];
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
      param_1[0xe] = puVar6;
      if ((void *)param_1[0xc] != (void *)0x0) {
        operator_delete((void *)param_1[0xc]);
      }
      iVar1 = pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 7));
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


// ===== 0094060c  FUN_0094060c =====

void FUN_0094060c(void *param_1)

{
  FUN_0094051c();
  operator_delete(param_1);
  return;
}


// ===== 0094063c  FUN_0094063c =====

void FUN_0094063c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return;
}


// ===== 00940648  FUN_00940648 =====

undefined8 FUN_00940648(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}


// ===== 00940654  FUN_00940654 =====

void FUN_00940654(long *param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00940664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,param_2,0xffffffffffffffff);
  return;
}


// ===== 00940668  FUN_00940668 =====

undefined8 FUN_00940668(long *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  
  uVar1 = 0;
  if (-1 < param_3) {
    uVar1 = 0x100000000;
  }
  (**(code **)(*param_1 + 0x20))
            (param_1,param_2,uVar1 | (uint)param_3 & ((uint)(param_3 >> 0x3f) ^ 0xffffffff),0);
  return 0;
}


// ===== 009406ac  FUN_009406ac =====

void FUN_009406ac(ulong *param_1,long param_2,uint param_3)

{
  long *plVar1;
  uint uVar2;
  void *pvVar3;
  bool bVar4;
  long lVar5;
  ulong *puVar6;
  void *pvVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  long *plVar12;
  ulong *puVar13;
  ulong uVar14;
  ulong local_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong local_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong local_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong local_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong local_f0;
  uint local_e8;
  ulong local_e0;
  ulong uStack_d8;
  ulong local_d0;
  void *local_c8;
  void *pvStack_c0;
  ulong local_b8;
  byte local_b0;
  undefined1 local_a8 [68];
  byte local_64;
  byte local_60;
  
  memcpy(&local_170,&DAT_00228268,0x118);
  uVar8 = *(ulong *)(param_2 + 0x80);
  lVar5 = *(long *)(param_2 + 0x68);
  local_170 = local_170 & 0xffffffffffffff00;
  local_60 = 0;
  plVar1 = (long *)(lVar5 + (uVar8 >> 4) * 8);
  plVar12 = plVar1;
  if (lVar5 == *(long *)(param_2 + 0x70)) {
    puVar13 = (ulong *)0x0;
  }
  else {
    puVar10 = (ulong *)*plVar1;
    uVar14 = *(long *)(param_2 + 0x88) + uVar8;
    puVar9 = puVar10 + (uVar8 & 0xf) * 0x22;
    puVar11 = (ulong *)(*(long *)(lVar5 + (uVar14 >> 4) * 8) + (uVar14 & 0xf) * 0x110);
    puVar13 = puVar9;
    puVar6 = puVar9;
    while (puVar6 != puVar11) {
      uVar2 = (uint)*puVar6;
      puVar13 = puVar6;
      if (uVar2 == param_3) break;
      if (uVar2 - param_3 == -0x80000000) {
        if (param_3 < uVar2) break;
      }
      else if (-1 < (int)(uVar2 - param_3)) break;
      puVar6 = puVar6 + 0x22;
      puVar13 = puVar11;
      if ((long)puVar6 - (long)puVar10 == 0x1100) {
        plVar12 = plVar12 + 1;
        puVar10 = (ulong *)*plVar12;
        puVar6 = puVar10;
      }
    }
    if (puVar13 != puVar9) {
      uVar14 = ((long)puVar13 - *plVar12 >> 4) * -0xf0f0f0f0f0f0f0f +
               ((long)plVar12 - (long)plVar1) * 2 +
               ((long)puVar9 - *plVar1 >> 4) * 0xf0f0f0f0f0f0f0f;
      goto joined_r0x00940838;
    }
  }
  uVar14 = 0;
joined_r0x00940838:
  if (lVar5 == *(long *)(param_2 + 0x70)) {
    puVar6 = (ulong *)0x0;
  }
  else {
    uVar8 = *(long *)(param_2 + 0x88) + uVar8;
    puVar6 = (ulong *)(*(long *)(lVar5 + (uVar8 >> 4) * 8) + (uVar8 & 0xf) * 0x110);
  }
  if ((puVar13 != puVar6) && ((uint)*puVar13 == param_3)) {
    uStack_148 = puVar13[5];
    local_150 = puVar13[4];
    uStack_138 = puVar13[7];
    uStack_140 = puVar13[6];
    local_f0 = puVar13[0x10];
    uStack_168 = puVar13[1];
    local_170 = *puVar13;
    uStack_158 = puVar13[3];
    uStack_160 = puVar13[2];
    puVar13[0x10] = 0;
    uStack_108 = puVar13[0xd];
    local_110 = puVar13[0xc];
    uStack_f8 = puVar13[0xf];
    uStack_100 = puVar13[0xe];
    uStack_128 = puVar13[9];
    local_130 = puVar13[8];
    uStack_118 = puVar13[0xb];
    uStack_120 = puVar13[10];
    local_e8 = (uint)puVar13[0x11];
    local_b0 = (char)puVar13[0x18] == '\x01';
    local_e0 = local_e0 & 0xffffffffffffff00;
    if ((bool)local_b0) {
      local_d0 = puVar13[0x14];
      uStack_d8 = puVar13[0x13];
      local_e0 = puVar13[0x12];
      local_b8 = puVar13[0x17];
      pvStack_c0 = (void *)puVar13[0x16];
      local_c8 = (void *)puVar13[0x15];
      puVar13[0x15] = 0;
      puVar13[0x16] = 0;
      puVar13[0x17] = 0;
    }
    local_64 = 0;
    local_a8[0] = 0;
    bVar4 = *(char *)((long)puVar13 + 0x10c) == '\x01';
    if (bVar4) {
      FUN_00659afc(local_a8,puVar13 + 0x19);
    }
    puVar13 = puVar13 + 0x22;
    local_60 = 1;
    local_64 = bVar4;
    if ((long)puVar13 - *plVar12 == 0x1100) {
      plVar12 = plVar12 + 1;
      puVar13 = (ulong *)*plVar12;
    }
  }
  plVar1 = (long *)(*(long *)(param_2 + 0x68) + (*(ulong *)(param_2 + 0x80) >> 4) * 8);
  if (*(long *)(param_2 + 0x68) == *(long *)(param_2 + 0x70)) {
    lVar5 = 0;
  }
  else {
    lVar5 = *plVar1 + (*(ulong *)(param_2 + 0x80) & 0xf) * 0x110;
  }
  FUN_00940b28(param_2 + 0x60,plVar1,lVar5,plVar12,puVar13);
  pvVar3 = pvStack_c0;
  pvVar7 = local_c8;
  uVar8 = local_f0;
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  if ((local_60 & 1) == 0) {
    param_1[0x23] = uVar14;
  }
  else {
    if (param_1 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    *(undefined1 *)(param_1 + 0x12) = 0;
    local_f0 = 0;
    param_1[9] = uStack_128;
    param_1[8] = local_130;
    param_1[0xb] = uStack_118;
    param_1[10] = uStack_120;
    param_1[0x10] = uVar8;
    *(undefined1 *)(param_1 + 0x18) = 0;
    param_1[0xd] = uStack_108;
    param_1[0xc] = local_110;
    param_1[0xf] = uStack_f8;
    param_1[0xe] = uStack_100;
    *(uint *)(param_1 + 0x11) = local_e8;
    param_1[1] = uStack_168;
    *param_1 = local_170;
    param_1[3] = uStack_158;
    param_1[2] = uStack_160;
    param_1[5] = uStack_148;
    param_1[4] = local_150;
    param_1[7] = uStack_138;
    param_1[6] = uStack_140;
    if ((local_b0 & 1) != 0) {
      local_c8 = (void *)0x0;
      pvStack_c0 = (void *)0x0;
      param_1[0x13] = uStack_d8;
      param_1[0x12] = local_e0;
      param_1[0x14] = local_d0;
      param_1[0x16] = (ulong)pvVar3;
      param_1[0x15] = (ulong)pvVar7;
      param_1[0x17] = local_b8;
      local_b8 = 0;
      *(undefined1 *)(param_1 + 0x18) = 1;
    }
    *(undefined1 *)(param_1 + 0x19) = 0;
    *(undefined1 *)((long)param_1 + 0x10c) = 0;
    if ((local_64 & 1) == 0) {
      param_1[0x23] = uVar14;
      *(undefined1 *)(param_1 + 0x22) = 1;
    }
    else {
      FUN_00659afc(param_1 + 0x19,local_a8);
      param_1[0x23] = uVar14;
      *(undefined1 *)((long)param_1 + 0x10c) = 1;
      *(undefined1 *)(param_1 + 0x22) = 1;
      if ((local_60 & 1) == 0) {
        return;
      }
    }
    if (((local_b0 & 1) != 0) && (local_c8 != (void *)0x0)) {
      uVar14 = (ulong)((long)pvStack_c0 + (-8 - ((long)pvStack_c0 << 0x3d))) >> 3;
      uVar8 = (ulong)(((long)local_c8 - (long)pvStack_c0 << 0x3d) -
                     ((long)local_c8 - (long)pvStack_c0)) >> 3;
      if (uVar14 <= uVar8) {
        uVar8 = uVar14;
      }
      pvVar7 = pvStack_c0;
      if ((1 < uVar8) && ((((int)local_c8 - (int)pvStack_c0 | -(int)pvStack_c0) & 7U) == 0)) {
        uVar8 = uVar8 & 0x1ffffffffffffffe;
        pvVar7 = (void *)((long)pvStack_c0 + uVar8 * -8);
        do {
          uVar8 = uVar8 - 2;
        } while (uVar8 != 0);
      }
      while (pvVar7 != local_c8) {
        pvVar7 = (void *)((long)pvVar7 + -8);
        if (pvVar7 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      pvStack_c0 = local_c8;
      operator_delete(local_c8);
    }
    if (local_f0 != 0) {
      FUN_00659370();
    }
  }
  return;
}


// ===== 00940b28  FUN_00940b28 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00940b28(long param_1,long *param_2,ulong param_3,long *param_4,ulong param_5)

{
  long *plVar1;
  long lVar2;
  ulong *puVar3;
  void *pvVar4;
  ulong *puVar5;
  ulong uVar6;
  void *pvVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
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
    lVar16 = 0;
  }
  else {
    lVar16 = ((long)(param_5 - *param_4) >> 4) * -0xf0f0f0f0f0f0f0f +
             ((long)param_4 - (long)param_2) * 2 +
             ((long)(param_3 - *param_2) >> 4) * 0xf0f0f0f0f0f0f0f;
  }
  uVar6 = *(ulong *)(param_1 + 0x20);
  lVar8 = *(long *)(param_1 + 8);
  puVar3 = (ulong *)(lVar8 + (uVar6 >> 4) * 8);
  puVar5 = puVar3;
  if (lVar8 == *(long *)(param_1 + 0x10)) {
    uVar14 = 0;
    if (param_3 == 0) goto LAB_00940c48;
LAB_00940bd8:
    lVar11 = (long)(uVar14 - *puVar3) >> 4;
    uVar15 = ((long)(param_3 - *param_2) >> 4) * -0xf0f0f0f0f0f0f0f +
             ((long)param_2 - (long)puVar3) * 2 + lVar11 * 0xf0f0f0f0f0f0f0f;
    uVar10 = uVar14;
    if (uVar15 != 0) {
      uVar10 = uVar15 + lVar11 * -0xf0f0f0f0f0f0f0f;
      if ((long)uVar10 < 1) {
        uVar12 = 0xf - uVar10;
        uVar10 = 0x1e - uVar10;
        if (-1 < (long)uVar12) {
          uVar10 = uVar12;
        }
        uVar13 = uVar12 & 0xf;
        puVar5 = puVar3 + -((long)uVar10 >> 4);
        if ((long)uVar12 < 1) {
          uVar13 = -(-uVar12 & 0xf);
        }
        uVar10 = *puVar5 + (0xf - uVar13) * 0x110;
      }
      else {
        puVar5 = puVar3 + (uVar10 >> 4);
        uVar10 = *puVar5 + (uVar10 & 0xf) * 0x110;
      }
    }
  }
  else {
    uVar14 = *puVar3 + (uVar6 & 0xf) * 0x110;
    if (param_3 != uVar14) goto LAB_00940bd8;
LAB_00940c48:
    uVar15 = 0;
    uVar10 = uVar14;
  }
  if (lVar16 < 1) {
    return;
  }
  uVar12 = lVar16 + ((long)(uVar10 - *puVar5) >> 4) * -0xf0f0f0f0f0f0f0f;
  if (uVar15 <= (ulong)(*(long *)(param_1 + 0x28) - lVar16) >> 1) {
    if ((long)uVar12 < 1) {
      uVar15 = 0xf - uVar12;
      uVar6 = 0x1e - uVar12;
      if (-1 < (long)uVar15) {
        uVar6 = uVar15;
      }
      uVar12 = uVar15 & 0xf;
      if ((long)uVar15 < 1) {
        uVar12 = -(-uVar15 & 0xf);
      }
      local_60 = puVar5 + -((long)uVar6 >> 4);
      local_58 = *local_60 + (0xf - uVar12) * 0x110;
    }
    else {
      local_60 = puVar5 + (uVar12 >> 4);
      local_58 = *local_60 + (uVar12 & 0xf) * 0x110;
    }
    FUN_009429b8(puVar3,uVar14,puVar5,uVar10,&local_60);
    uVar6 = local_58;
    while( true ) {
      if (uVar6 == uVar14) {
        uVar6 = *(long *)(param_1 + 0x20) + lVar16;
        puVar9 = *(undefined8 **)(param_1 + 8);
        *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) - lVar16;
        *(ulong *)(param_1 + 0x20) = uVar6;
        while (0x1f < uVar6) {
          operator_delete((void *)*puVar9);
          puVar9 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
          uVar6 = *(long *)(param_1 + 0x20) - 0x10;
          *(undefined8 **)(param_1 + 8) = puVar9;
          *(ulong *)(param_1 + 0x20) = uVar6;
        }
        return;
      }
      if (uVar14 == 0) break;
      if ((*(char *)(uVar14 + 0xc0) == '\x01') &&
         (pvVar4 = *(void **)(uVar14 + 0xa8), pvVar4 != (void *)0x0)) {
        pvVar7 = *(void **)(uVar14 + 0xb0);
        uVar15 = (ulong)((long)pvVar7 + (-8 - ((long)pvVar7 << 0x3d))) >> 3;
        uVar10 = (ulong)(((long)pvVar4 - (long)pvVar7 << 0x3d) - ((long)pvVar4 - (long)pvVar7)) >> 3
        ;
        if (uVar15 <= uVar10) {
          uVar10 = uVar15;
        }
        if ((1 < uVar10) && ((((int)pvVar4 - (int)pvVar7 | -(int)pvVar7) & 7U) == 0)) {
          uVar10 = uVar10 & 0x1ffffffffffffffe;
          pvVar7 = (void *)((long)pvVar7 + uVar10 * -8);
          do {
            uVar10 = uVar10 - 2;
          } while (uVar10 != 0);
        }
        while (pvVar7 != pvVar4) {
          pvVar7 = (void *)((long)pvVar7 + -8);
          if (pvVar7 == (void *)0x0) goto LAB_009410ec;
        }
        *(void **)(uVar14 + 0xb0) = pvVar4;
        operator_delete(pvVar4);
      }
      if (*(long *)(uVar14 + 0x80) != 0) {
        FUN_00659370();
      }
      uVar14 = uVar14 + 0x110;
      if (uVar14 - *puVar3 == 0x1100) {
        puVar3 = puVar3 + 1;
        uVar14 = *puVar3;
      }
    }
    goto LAB_009410ec;
  }
  if ((long)uVar12 < 1) {
    uVar15 = 0xf - uVar12;
    uVar14 = 0x1e - uVar12;
    if (-1 < (long)uVar15) {
      uVar14 = uVar15;
    }
    uVar12 = uVar15 & 0xf;
    puVar3 = puVar5 + -((long)uVar14 >> 4);
    if ((long)uVar15 < 1) {
      uVar12 = -(-uVar15 & 0xf);
    }
    lVar11 = *puVar3 + (0xf - uVar12) * 0x110;
  }
  else {
    puVar3 = puVar5 + (uVar12 >> 4);
    lVar11 = *puVar3 + (uVar12 & 0xf) * 0x110;
  }
  uVar6 = *(long *)(param_1 + 0x28) + uVar6;
  plVar1 = (long *)(lVar8 + (uVar6 >> 4) * 8);
  if (lVar8 == *(long *)(param_1 + 0x10)) {
    lVar8 = 0;
  }
  else {
    lVar8 = *plVar1 + (uVar6 & 0xf) * 0x110;
  }
  local_60 = puVar5;
  local_58 = uVar10;
  FUN_00942ccc(puVar3,lVar11,plVar1,lVar8,&local_60);
  lVar8 = *(long *)(param_1 + 8);
  lVar11 = *(long *)(param_1 + 0x10);
  uVar6 = local_58;
  puVar3 = local_60;
  if (lVar8 == lVar11) {
    uVar14 = 0;
    if (local_58 != 0) goto LAB_00940f84;
  }
  else {
    uVar14 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20);
    uVar14 = *(long *)(lVar8 + (uVar14 >> 4) * 8) + (uVar14 & 0xf) * 0x110;
    if (local_58 != uVar14) {
LAB_00940f84:
      do {
        if (uVar6 == 0) goto LAB_009410ec;
        if ((*(char *)(uVar6 + 0xc0) == '\x01') &&
           (pvVar4 = *(void **)(uVar6 + 0xa8), pvVar4 != (void *)0x0)) {
          pvVar7 = *(void **)(uVar6 + 0xb0);
          uVar15 = (ulong)((long)pvVar7 + (-8 - ((long)pvVar7 << 0x3d))) >> 3;
          uVar10 = (ulong)(((long)pvVar4 - (long)pvVar7 << 0x3d) - ((long)pvVar4 - (long)pvVar7)) >>
                   3;
          if (uVar15 <= uVar10) {
            uVar10 = uVar15;
          }
          if ((1 < uVar10) && ((((int)pvVar4 - (int)pvVar7 | -(int)pvVar7) & 7U) == 0)) {
            uVar10 = uVar10 & 0x1ffffffffffffffe;
            pvVar7 = (void *)((long)pvVar7 + uVar10 * -8);
            do {
              uVar10 = uVar10 - 2;
            } while (uVar10 != 0);
          }
          while (pvVar7 != pvVar4) {
            pvVar7 = (void *)((long)pvVar7 + -8);
            if (pvVar7 == (void *)0x0) goto LAB_009410ec;
          }
          *(void **)(uVar6 + 0xb0) = pvVar4;
          operator_delete(pvVar4);
        }
        if (*(long *)(uVar6 + 0x80) != 0) {
          FUN_00659370();
        }
        uVar6 = uVar6 + 0x110;
        if (uVar6 - *puVar3 == 0x1100) {
          puVar3 = puVar3 + 1;
          uVar6 = *puVar3;
        }
      } while (uVar6 != uVar14);
      lVar8 = *(long *)(param_1 + 8);
      lVar11 = *(long *)(param_1 + 0x10);
    }
  }
  lVar16 = *(long *)(param_1 + 0x28) - lVar16;
  lVar2 = 0;
  if (lVar11 != lVar8) {
    lVar2 = (lVar11 - lVar8) * 2 + -1;
  }
  *(long *)(param_1 + 0x28) = lVar16;
  uVar6 = lVar2 - (lVar16 + *(long *)(param_1 + 0x20));
  while( true ) {
    if (uVar6 < 0x20) {
      return;
    }
    operator_delete(*(void **)(lVar11 + -8));
    lVar11 = *(long *)(param_1 + 0x10) + -8;
    if (lVar11 == 0) break;
    *(long *)(param_1 + 0x10) = lVar11;
    lVar16 = 0;
    if (lVar11 != *(long *)(param_1 + 8)) {
      lVar16 = (lVar11 - *(long *)(param_1 + 8)) * 2 + -1;
    }
    uVar6 = lVar16 - (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20));
  }
LAB_009410ec:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 009411a8  FUN_009411a8 =====

void FUN_009411a8(long param_1,long param_2,ulong param_3,undefined2 param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  void *pvVar5;
  bool bVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  void *pvVar10;
  ulong uVar11;
  undefined1 *puVar12;
  ulong uVar13;
  undefined1 *puVar14;
  long lVar15;
  undefined1 auVar16 [16];
  long local_2b0;
  undefined2 local_2a8;
  long local_2a0;
  undefined1 local_298;
  undefined4 local_294;
  undefined1 *local_290;
  undefined1 *puStack_288;
  undefined1 *local_280;
  undefined1 *puStack_278;
  undefined1 *local_270;
  undefined1 *puStack_268;
  undefined1 *local_260;
  undefined1 *puStack_258;
  undefined8 local_250;
  undefined1 *puStack_248;
  undefined1 *local_240;
  undefined1 *puStack_238;
  undefined1 *local_230;
  undefined1 *puStack_228;
  undefined1 *puStack_220;
  undefined8 uStack_218;
  long local_210;
  undefined4 local_208;
  ulong local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  void *local_1e8;
  void *pvStack_1e0;
  undefined8 local_1d8;
  char local_1d0;
  undefined1 auStack_1c8 [68];
  char local_184;
  byte local_180;
  int local_178;
  undefined1 *local_170;
  undefined1 *puStack_168;
  undefined1 *local_160;
  undefined1 *local_158;
  undefined1 *local_150;
  undefined8 uStack_148;
  undefined1 *local_140;
  undefined1 *local_138;
  undefined1 *local_130;
  undefined1 *puStack_128;
  undefined1 *puStack_120;
  undefined1 *local_118;
  undefined1 *puStack_110;
  undefined1 *local_108;
  undefined1 *puStack_100;
  undefined8 local_f8;
  long local_f0;
  undefined4 local_e8;
  ulong local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  void *local_c8;
  void *pvStack_c0;
  undefined8 local_b8;
  byte local_b0;
  undefined1 local_a8 [68];
  char local_64;
  byte local_60;
  
  memcpy(&local_170,&DAT_00228268,0x118);
  local_170 = (undefined1 *)((ulong)local_170 & 0xffffffffffffff00);
  local_60 = 0;
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x38));
  FUN_009406ac(&local_290,param_1,*(undefined4 *)(param_2 + 0x10));
  pvVar5 = pvStack_1e0;
  pvVar10 = local_1e8;
  lVar15 = local_210;
  if (local_60 == local_180) {
    if (local_60 != 0) {
      FUN_009428e0(&local_170,&local_290);
    }
  }
  else if (local_60 == 0) {
    local_210 = 0;
    local_f0 = lVar15;
    puStack_128 = puStack_248;
    local_130 = local_250;
    local_118 = puStack_238;
    puStack_120 = local_240;
    local_b0 = local_1d0 == '\x01';
    local_e8 = local_208;
    local_e0 = local_e0 & 0xffffffffffffff00;
    local_108 = puStack_228;
    puStack_110 = local_230;
    local_f8 = uStack_218;
    puStack_100 = puStack_220;
    puStack_168 = puStack_288;
    local_170 = local_290;
    local_158 = puStack_278;
    local_160 = local_280;
    uStack_148 = puStack_268;
    local_150 = local_270;
    local_138 = puStack_258;
    local_140 = local_260;
    if ((bool)local_b0) {
      local_1e8 = (void *)0x0;
      pvStack_1e0 = (void *)0x0;
      local_d0 = local_1f0;
      uStack_d8 = uStack_1f8;
      local_e0 = local_200;
      pvStack_c0 = pvVar5;
      local_c8 = pvVar10;
      local_b8 = local_1d8;
      local_1d8 = 0;
    }
    local_a8[0] = 0;
    local_64 = 0;
    if (local_184 == '\x01') {
      FUN_00659afc(local_a8,auStack_1c8);
    }
    local_60 = 1;
    local_64 = local_184 == '\x01';
  }
  else {
    if (((local_b0 & 1) != 0) && (local_c8 != (void *)0x0)) {
      uVar13 = (ulong)((long)pvStack_c0 + (-8 - ((long)pvStack_c0 << 0x3d))) >> 3;
      uVar11 = (ulong)(((long)local_c8 - (long)pvStack_c0 << 0x3d) -
                      ((long)local_c8 - (long)pvStack_c0)) >> 3;
      if (uVar13 <= uVar11) {
        uVar11 = uVar13;
      }
      pvVar10 = pvStack_c0;
      if ((1 < uVar11) && ((((int)local_c8 - (int)pvStack_c0 | -(int)pvStack_c0) & 7U) == 0)) {
        uVar11 = uVar11 & 0x1ffffffffffffffe;
        pvVar10 = (void *)((long)pvStack_c0 + uVar11 * -8);
        do {
          uVar11 = uVar11 - 2;
        } while (uVar11 != 0);
      }
      do {
        if (pvVar10 == local_c8) {
          pvStack_c0 = local_c8;
          operator_delete(local_c8);
          goto LAB_00941374;
        }
        pvVar10 = (void *)((long)pvVar10 + -8);
      } while (pvVar10 != (void *)0x0);
      goto LAB_00941b4c;
    }
LAB_00941374:
    if (local_f0 != 0) {
      FUN_00659370();
    }
    local_60 = 0;
  }
  if (local_180 == 1) {
    if ((local_1d0 == '\x01') && (local_1e8 != (void *)0x0)) {
      uVar13 = (ulong)((long)pvStack_1e0 + (-8 - ((long)pvStack_1e0 << 0x3d))) >> 3;
      uVar11 = (ulong)(((long)local_1e8 - (long)pvStack_1e0 << 0x3d) -
                      ((long)local_1e8 - (long)pvStack_1e0)) >> 3;
      if (uVar13 <= uVar11) {
        uVar11 = uVar13;
      }
      pvVar10 = pvStack_1e0;
      if ((1 < uVar11) && ((((int)local_1e8 - (int)pvStack_1e0 | -(int)pvStack_1e0) & 7U) == 0)) {
        uVar11 = uVar11 & 0x1ffffffffffffffe;
        pvVar10 = (void *)((long)pvStack_1e0 + uVar11 * -8);
        do {
          uVar11 = uVar11 - 2;
        } while (uVar11 != 0);
      }
      do {
        if (pvVar10 == local_1e8) {
          pvStack_1e0 = local_1e8;
          operator_delete(local_1e8);
          goto LAB_00941420;
        }
        pvVar10 = (void *)((long)pvVar10 + -8);
      } while (pvVar10 != (void *)0x0);
      goto LAB_00941b4c;
    }
LAB_00941420:
    if (local_210 != 0) {
      FUN_00659370();
    }
  }
  iVar4 = *(int *)(param_1 + 0x88);
  uVar7 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x38));
  uVar11 = (ulong)uVar7;
  if (0 < local_178) {
    uVar11 = (**(code **)(**(long **)(param_1 + 0x20) + 8))(*(long **)(param_1 + 0x20),local_178);
  }
  lVar15 = local_f0;
  if ((local_60 & 1) == 0) {
    uVar11 = FUN_004022fc(uVar11);
    if ((uVar11 & 1) == 0) {
      FUN_00623bb0(&DAT_001f6220,"../../modules/video_coding/generic_decoder.cc",0x46a,
                   "Too many frames backed up in the decoder, dropping frame with timestamp ",
                   *(undefined4 *)(param_2 + 0x10));
    }
  }
  else {
    *(undefined8 *)(param_2 + 0x18) = local_f8;
    if (local_f0 != 0) {
      FUN_00d0f740(1,local_f0);
    }
    lVar8 = *(long *)(param_2 + 0xb8);
    *(long *)(param_2 + 0xb8) = lVar15;
    if (lVar8 != 0) {
      FUN_00659370();
    }
    if ((local_60 & 1) == 0) goto LAB_00941b9c;
    *(undefined4 *)(param_2 + 0x48) = (undefined4)uStack_148;
    if (local_64 == '\x01') {
      FUN_00659adc(&local_290,local_a8);
      local_250._0_5_ = CONCAT14(1,(int)local_250);
      if (*(char *)(param_2 + 0x90) == '\0') {
        FUN_00659adc(param_2 + 0x4c,&local_290);
        *(undefined1 *)(param_2 + 0x90) = 1;
      }
      else {
        FUN_00659b1c();
      }
    }
    auVar16 = FUN_00947b2c(*(undefined8 *)(param_1 + 0x28));
    bVar6 = (auVar16 & (undefined1  [16])0x1) == (undefined1  [16])0x0;
    uVar7 = auVar16._4_4_ - iVar4;
    uVar7 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
    if (bVar6) {
      uVar7 = auVar16._4_4_;
    }
    uVar1 = auVar16._8_4_ & 0xffffff01;
    if (bVar6) {
      uVar1 = auVar16._8_4_;
    }
    *(ulong *)(param_2 + 0x94) = auVar16._0_8_ & 0xffffffff | (ulong)uVar7 << 0x20;
    *(uint *)(param_2 + 0x9c) = uVar1;
    uVar11 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
    if ((param_3 >> 0x20 & 1) == 0) {
      if ((local_60 & 1) == 0) goto LAB_00941b9c;
      if (((ulong)local_150 & 1) == 0) goto LAB_00941bb0;
      lVar15 = 0x7fffffffffffffff;
      if ((uVar11 != 0x7fffffffffffffff) && (local_158 != (undefined1 *)0x8000000000000000)) {
        lVar15 = -0x8000000000000000;
        if (local_158 != (undefined1 *)0x7fffffffffffffff && uVar11 != 0x8000000000000000) {
          lVar15 = uVar11 - (long)local_158;
        }
      }
    }
    else {
      lVar15 = (long)(int)param_3 * 1000;
    }
    FUN_009475f4(*(undefined8 *)(param_1 + 0x28),lVar15,uVar11);
    if ((local_60 & 1) == 0) goto LAB_00941b9c;
    if (((ulong)local_150 & 1) == 0) {
LAB_00941bb0:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                );
    }
    puVar12 = (undefined1 *)0x7fffffffffffffff;
    if ((local_158 != (undefined1 *)0x7fffffffffffffff) && (lVar15 != 0x7fffffffffffffff)) {
      puVar12 = (undefined1 *)0x8000000000000000;
      if (lVar15 != -0x8000000000000000 && local_158 != (undefined1 *)0x8000000000000000) {
        puVar12 = local_158 + lVar15;
      }
    }
    if ((*(byte *)(param_2 + 0xd0) & 1) == 0) {
      *(undefined1 *)(param_2 + 0xd0) = 1;
    }
    *(undefined1 **)(param_2 + 0xc0) = local_158;
    *(undefined1 **)(param_2 + 200) = puVar12;
    puStack_278 = &DAT_aaaaaaaaaaaaaaaa;
    local_280 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_268 = &DAT_aaaaaaaaaaaaaaaa;
    local_270 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_258 = &DAT_aaaaaaaaaaaaaaaa;
    local_260 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_248 = &DAT_aaaaaaaaaaaaaaaa;
    local_250 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_238 = &DAT_aaaaaaaaaaaaaaaa;
    local_240 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_228 = &DAT_aaaaaaaaaaaaaaaa;
    local_230 = &DAT_aaaaaaaaaaaaaaaa;
    puStack_288 = &DAT_aaaaaaaaaaaaaaaa;
    local_290 = &DAT_aaaaaaaaaaaaaaaa;
    FUN_00659e80(&local_290);
    if ((local_60 & 1) == 0) goto LAB_00941b9c;
    if ((char)local_140 != -1) {
      lVar8 = *(long *)(param_1 + 0x18);
      local_138 = local_138 + -lVar8;
      local_130 = local_130 + -lVar8;
      puStack_128 = puStack_128 + -lVar8;
      puStack_120 = puStack_120 + -lVar8;
      local_118 = local_118 + -lVar8;
      puStack_110 = puStack_110 + -lVar8;
      puStack_288 = (undefined1 *)(*(long *)(param_2 + 0x18) - lVar8);
      if (*(long *)(param_2 + 0x18) < 0) {
        puVar12 = puStack_288;
        if ((long)puStack_288 <= (long)local_138) {
          puVar12 = local_138;
        }
        puVar14 = puVar12;
        if ((long)puVar12 <= (long)local_130) {
          puVar14 = local_130;
        }
        puVar2 = local_130;
        if ((long)local_130 <= (long)puVar12) {
          puVar2 = puVar12;
        }
        puVar12 = puVar14;
        if ((long)puVar14 <= (long)puStack_128) {
          puVar12 = puStack_128;
        }
        puVar3 = puStack_128;
        if ((long)puStack_128 <= (long)puVar14) {
          puVar3 = puVar2;
        }
        puVar14 = puVar12;
        if ((long)puVar12 <= (long)puStack_120) {
          puVar14 = puStack_120;
        }
        puVar2 = puStack_120;
        if ((long)puStack_120 <= (long)puVar12) {
          puVar2 = puVar3;
        }
        puVar12 = puVar14;
        if ((long)puVar14 <= (long)local_118) {
          puVar12 = local_118;
        }
        puVar3 = local_118;
        if ((long)local_118 <= (long)puVar14) {
          puVar3 = puVar2;
        }
        puVar14 = puStack_110;
        if ((long)puStack_110 <= (long)puVar12) {
          puVar14 = puVar3;
        }
        puVar14 = puVar14 + 1;
      }
      else {
        puVar14 = (undefined1 *)0x0;
      }
      puStack_288 = puStack_288 + -(long)puVar14;
      local_280 = local_138 + -(long)puVar14;
      puStack_278 = local_130 + -(long)puVar14;
      local_270 = puStack_128 + -(long)puVar14;
      puStack_268 = puStack_120 + -(long)puVar14;
      local_260 = local_118 + -(long)puVar14;
      puStack_258 = puStack_110 + -(long)puVar14;
      lVar8 = DAT_00d804e8;
      if (DAT_00d804e8 == 0) {
        lVar8 = FUN_006660d0("WebRTC.Video.GenericDecoder.CaptureToEncodeDelay",0x30,1,1000,0x32);
        FUN_00d0f5e0(0,lVar8,&DAT_00d804e8);
        if (lVar8 != 0) goto LAB_0094172c;
      }
      else {
LAB_0094172c:
        FUN_00666568(lVar8,(int)local_280 - (int)puStack_288);
      }
      lVar8 = DAT_00d804f0;
      if (DAT_00d804f0 == 0) {
        lVar8 = FUN_006660d0("WebRTC.Video.GenericDecoder.EncodeDelay",0x27,1,1000,0x32);
        FUN_00d0f5e0(0,lVar8,&DAT_00d804f0);
        if (lVar8 != 0) goto LAB_00941788;
      }
      else {
LAB_00941788:
        FUN_00666568(lVar8,(int)puStack_278 - (int)local_280);
      }
      lVar8 = DAT_00d804f8;
      if (DAT_00d804f8 == 0) {
        lVar8 = FUN_006660d0("WebRTC.Video.GenericDecoder.PacerAndPacketizationDelay",0x36,1,1000,
                             0x32);
        FUN_00d0f5e0(0,lVar8,&DAT_00d804f8);
        if (lVar8 == 0) goto LAB_009417f8;
      }
      FUN_00666568(lVar8,(int)puStack_268 - (int)puStack_278);
    }
LAB_009417f8:
    if ((local_60 & 1) == 0) goto LAB_00941b9c;
    puStack_228 = (undefined1 *)CONCAT71(puStack_228._1_7_,(char)local_140);
    if (((ulong)local_150 & 1) == 0) goto LAB_00941b9c;
    if ((long)local_158 < 0) {
      local_240 = (undefined1 *)
                  (-((ulong)-(long)local_158 / 1000) - (ulong)(500 < (ulong)-(long)local_158 % 1000)
                  );
      if ((long)uVar11 < 0) goto LAB_00941898;
LAB_0094184c:
      puStack_238 = (undefined1 *)(uVar11 / 1000);
      if (499 < uVar11 % 1000) {
        puStack_238 = puStack_238 + 1;
      }
    }
    else {
      local_240 = (undefined1 *)((ulong)local_158 / 1000);
      if (499 < (ulong)local_158 % 1000) {
        local_240 = local_240 + 1;
      }
      if (-1 < (long)uVar11) goto LAB_0094184c;
LAB_00941898:
      puStack_238 = (undefined1 *)(-(-uVar11 / 1000) - (ulong)(500 < -uVar11 % 1000));
    }
    if (((ulong)local_160 & 1) == 0) {
      local_230 = (undefined1 *)0xffffffffffffffff;
    }
    else if ((long)puStack_168 < 0) {
      local_230 = (undefined1 *)
                  (-((ulong)-(long)puStack_168 / 1000) -
                  (ulong)(500 < (ulong)-(long)puStack_168 % 1000));
    }
    else {
      local_230 = (undefined1 *)((ulong)puStack_168 / 1000);
      if (499 < (ulong)puStack_168 % 1000) {
        local_230 = local_230 + 1;
      }
    }
    local_290 = (undefined1 *)CONCAT44(local_290._4_4_,*(undefined4 *)(param_2 + 0x10));
    puStack_248 = puStack_100;
    local_250 = local_108;
    lVar8 = DAT_00d80500;
    if (DAT_00d80500 == 0) {
      lVar8 = FUN_006660d0("WebRTC.Video.GenericDecoder.PacketReceiveDelay",0x2e,1,1000,0x32);
      FUN_00d0f5e0(0,lVar8,&DAT_00d80500);
      if (lVar8 != 0) goto LAB_00941978;
    }
    else {
LAB_00941978:
      FUN_00666568(lVar8,(int)puStack_248 - (int)local_250);
    }
    lVar8 = DAT_00d80508;
    if (DAT_00d80508 == 0) {
      lVar8 = FUN_006660d0("WebRTC.Video.GenericDecoder.JitterBufferDelay",0x2d,1,1000,0x32);
      FUN_00d0f5e0(0,lVar8,&DAT_00d80508);
      if (lVar8 != 0) goto LAB_009419d4;
    }
    else {
LAB_009419d4:
      FUN_00666568(lVar8,(int)local_240 - (int)puStack_248);
    }
    lVar8 = DAT_00d80510;
    if (DAT_00d80510 == 0) {
      lVar8 = FUN_006660d0("WebRTC.Video.GenericDecoder.DecodeDelay",0x27,1,1000,0x32);
      FUN_00d0f5e0(0,lVar8,&DAT_00d80510);
      if (lVar8 != 0) goto LAB_00941a30;
    }
    else {
LAB_00941a30:
      FUN_00666568(lVar8,(int)puStack_238 - (int)local_240);
    }
    FUN_00947c14(*(undefined8 *)(param_1 + 0x28),&local_290);
    if ((local_60 & 1) == 0) {
LAB_00941b9c:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                );
    }
    puVar12 = puStack_168;
    if (((ulong)local_160 & 1) == 0) {
      puVar12 = (undefined1 *)0xffffffffffffffff;
    }
    *(undefined1 **)(param_2 + 0x20) = puVar12;
    local_298 = uStack_148._4_1_;
    local_294 = local_e8;
    local_2b0 = param_2;
    local_2a8 = param_4;
    local_2a0 = lVar15;
    (**(code **)**(undefined8 **)(param_1 + 0x20))(*(undefined8 **)(param_1 + 0x20),&local_2b0);
    plVar9 = *(long **)(param_1 + 0x30);
    if (plVar9 != (long *)0x0) {
      if ((local_60 & 1) == 0) goto LAB_00941b9c;
      if ((local_b0 & 1) != 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9,param_2,&local_e0,uStack_148._4_1_);
      }
    }
  }
  if ((local_60 & 1) != 0) {
    if (((local_b0 & 1) != 0) && (local_c8 != (void *)0x0)) {
      uVar13 = (ulong)((long)pvStack_c0 + (-8 - ((long)pvStack_c0 << 0x3d))) >> 3;
      uVar11 = (ulong)(((long)local_c8 - (long)pvStack_c0 << 0x3d) -
                      ((long)local_c8 - (long)pvStack_c0)) >> 3;
      if (uVar13 <= uVar11) {
        uVar11 = uVar13;
      }
      pvVar10 = pvStack_c0;
      if ((1 < uVar11) && ((((int)local_c8 - (int)pvStack_c0 | -(int)pvStack_c0) & 7U) == 0)) {
        uVar11 = uVar11 & 0x1ffffffffffffffe;
        pvVar10 = (void *)((long)pvStack_c0 + uVar11 * -8);
        do {
          uVar11 = uVar11 - 2;
        } while (uVar11 != 0);
      }
      do {
        if (pvVar10 == local_c8) {
          pvStack_c0 = local_c8;
          operator_delete(local_c8);
          goto LAB_00941b70;
        }
        pvVar10 = (void *)((long)pvVar10 + -8);
      } while (pvVar10 != (void *)0x0);
LAB_00941b4c:
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                );
    }
LAB_00941b70:
    if (local_f0 != 0) {
      FUN_00659370();
    }
  }
  return;
}


// ===== 00941bc4  FUN_00941bc4 =====

ulong FUN_00941bc4(long param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x38));
  if (*(int *)(param_1 + 0x88) == 10) {
    FUN_00941c48();
    FUN_00941d9c(param_1 + 0x60,param_2);
    pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00941c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(**(long **)(param_1 + 0x20) + 8))(*(long **)(param_1 + 0x20),1);
    return uVar2;
  }
  FUN_00941d9c(param_1 + 0x60,param_2);
  uVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x38));
  return (ulong)uVar1;
}


// ===== 00941c48  FUN_00941c48 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00941c48(long param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/deque:2185: libc++ Hardening assertion !empty() failed: deque::pop_front called on an empty deque\n"
              );
  }
  lVar5 = *(long *)(*(long *)(param_1 + 8) + (*(ulong *)(param_1 + 0x20) >> 4) * 8) +
          (*(ulong *)(param_1 + 0x20) & 0xf) * 0x110;
  if (lVar5 != 0) {
    if ((*(char *)(lVar5 + 0xc0) != '\x01') ||
       (pvVar1 = *(void **)(lVar5 + 0xa8), pvVar1 == (void *)0x0)) {
LAB_00941d24:
      if (*(long *)(lVar5 + 0x80) != 0) {
        FUN_00659370();
      }
      uVar3 = *(long *)(param_1 + 0x20) + _DAT_001f2940;
      *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + _UNK_001f2948;
      *(ulong *)(param_1 + 0x20) = uVar3;
      if (0x1f < uVar3) {
        operator_delete((void *)**(undefined8 **)(param_1 + 8));
        *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
        *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -0x10;
      }
      return;
    }
    pvVar2 = *(void **)(lVar5 + 0xb0);
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
        *(void **)(lVar5 + 0xb0) = pvVar1;
        operator_delete(pvVar1);
        goto LAB_00941d24;
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


// ===== 00941d9c  FUN_00941d9c =====

void FUN_00941d9c(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar4 = *(long *)(param_1 + 8);
  lVar6 = *(long *)(param_1 + 0x10);
  lVar2 = 0;
  if (lVar6 != lVar4) {
    lVar2 = (lVar6 - lVar4) * 2 + -1;
  }
  if (lVar2 == *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) {
    FUN_0094301c(param_1);
    lVar4 = *(long *)(param_1 + 8);
    lVar6 = *(long *)(param_1 + 0x10);
  }
  if (lVar4 != lVar6) {
    uVar1 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20);
    puVar7 = (undefined8 *)(*(long *)(lVar4 + (uVar1 >> 4) * 8) + (uVar1 & 0xf) * 0x110);
    if (puVar7 != (undefined8 *)0x0) {
      uVar9 = param_2[4];
      uVar8 = param_2[7];
      uVar5 = param_2[6];
      uVar11 = param_2[1];
      uVar10 = *param_2;
      uVar13 = param_2[3];
      uVar12 = param_2[2];
      puVar7[5] = param_2[5];
      puVar7[4] = uVar9;
      puVar7[7] = uVar8;
      puVar7[6] = uVar5;
      puVar7[1] = uVar11;
      *puVar7 = uVar10;
      puVar7[3] = uVar13;
      puVar7[2] = uVar12;
      uVar9 = param_2[0xc];
      uVar8 = param_2[0xf];
      uVar5 = param_2[0xe];
      uVar11 = param_2[9];
      uVar10 = param_2[8];
      uVar13 = param_2[0xb];
      uVar12 = param_2[10];
      puVar7[0xd] = param_2[0xd];
      puVar7[0xc] = uVar9;
      puVar7[0xf] = uVar8;
      puVar7[0xe] = uVar5;
      puVar7[9] = uVar11;
      puVar7[8] = uVar10;
      puVar7[0xb] = uVar13;
      puVar7[10] = uVar12;
      uVar5 = param_2[0x10];
      param_2[0x10] = 0;
      puVar7[0x10] = uVar5;
      uVar3 = *(undefined4 *)(param_2 + 0x11);
      *(undefined1 *)(puVar7 + 0x12) = 0;
      *(undefined1 *)(puVar7 + 0x18) = 0;
      *(undefined4 *)(puVar7 + 0x11) = uVar3;
      if (*(char *)(param_2 + 0x18) == '\x01') {
        uVar5 = param_2[0x14];
        uVar9 = param_2[0x13];
        uVar8 = param_2[0x12];
        puVar7[0x16] = 0;
        puVar7[0x17] = 0;
        puVar7[0x15] = 0;
        puVar7[0x14] = uVar5;
        puVar7[0x13] = uVar9;
        puVar7[0x12] = uVar8;
        puVar7[0x15] = param_2[0x15];
        puVar7[0x16] = param_2[0x16];
        puVar7[0x17] = param_2[0x17];
        param_2[0x15] = 0;
        param_2[0x16] = 0;
        param_2[0x17] = 0;
        *(undefined1 *)(puVar7 + 0x18) = 1;
      }
      *(undefined1 *)(puVar7 + 0x19) = 0;
      *(undefined1 *)((long)puVar7 + 0x10c) = 0;
      if (*(char *)((long)param_2 + 0x10c) == '\x01') {
        FUN_00659afc(puVar7 + 0x19,param_2 + 0x19);
        *(undefined1 *)((long)puVar7 + 0x10c) = 1;
      }
      *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00941f00  FUN_00941f00 =====

void FUN_00941f00(long param_1)

{
  void *pvVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  
  puVar3 = *(undefined8 **)(param_1 + 8);
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  if (puVar3 != puVar6) {
    uVar7 = *(ulong *)(param_1 + 0x20);
    uVar5 = *(long *)(param_1 + 0x28) + uVar7;
    plVar8 = puVar3 + (uVar7 >> 4);
    lVar9 = *plVar8 + (uVar7 & 0xf) * 0x110;
    lVar10 = puVar3[uVar5 >> 4] + (uVar5 & 0xf) * 0x110;
    if (lVar9 != lVar10) {
      do {
        if (lVar9 == 0) {
LAB_00942090:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
        if ((*(char *)(lVar9 + 0xc0) == '\x01') &&
           (pvVar1 = *(void **)(lVar9 + 0xa8), pvVar1 != (void *)0x0)) {
          pvVar2 = *(void **)(lVar9 + 0xb0);
          uVar7 = (ulong)((long)pvVar2 + (-8 - ((long)pvVar2 << 0x3d))) >> 3;
          uVar5 = (ulong)(((long)pvVar1 - (long)pvVar2 << 0x3d) - ((long)pvVar1 - (long)pvVar2)) >>
                  3;
          if (uVar7 <= uVar5) {
            uVar5 = uVar7;
          }
          if ((1 < uVar5) && ((((int)pvVar1 - (int)pvVar2 | -(int)pvVar2) & 7U) == 0)) {
            uVar5 = uVar5 & 0x1ffffffffffffffe;
            pvVar2 = (void *)((long)pvVar2 + uVar5 * -8);
            do {
              uVar5 = uVar5 - 2;
            } while (uVar5 != 0);
          }
          while (pvVar2 != pvVar1) {
            pvVar2 = (void *)((long)pvVar2 + -8);
            if (pvVar2 == (void *)0x0) goto LAB_00942090;
          }
          *(void **)(lVar9 + 0xb0) = pvVar1;
          operator_delete(pvVar1);
        }
        if (*(long *)(lVar9 + 0x80) != 0) {
          FUN_00659370();
        }
        lVar9 = lVar9 + 0x110;
        if (lVar9 - *plVar8 == 0x1100) {
          plVar8 = plVar8 + 1;
          lVar9 = *plVar8;
        }
      } while (lVar9 != lVar10);
      puVar3 = *(undefined8 **)(param_1 + 8);
      puVar6 = *(undefined8 **)(param_1 + 0x10);
    }
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  lVar9 = (long)puVar6 - (long)puVar3;
  while (uVar5 = lVar9 >> 3, 2 < uVar5) {
    operator_delete((void *)*puVar3);
    puVar3 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
    *(undefined8 **)(param_1 + 8) = puVar3;
    lVar9 = *(long *)(param_1 + 0x10) - (long)puVar3;
  }
  if (uVar5 == 1) {
    uVar4 = 8;
  }
  else {
    if (uVar5 != 2) {
      return;
    }
    uVar4 = 0x10;
  }
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  return;
}


// ===== 009420c4  FUN_009420c4 =====

void FUN_009420c4(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  return;
}


// ===== 009420e0  FUN_009420e0 =====

void FUN_009420e0(long param_1)

{
  (**(code **)(**(long **)(param_1 + 8) + 0x30))();
  if (-1 < *(char *)(param_1 + 0x2f)) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}


// ===== 00942138  FUN_00942138 =====

uint FUN_00942138(long *param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  void *local_78;
  long lStack_70;
  undefined7 local_68;
  char cStack_61;
  undefined1 local_60;
  char **local_58;
  char *local_50;
  char *pcStack_48;
  
  if (((DAT_00d80520 & 1) == 0) && (iVar2 = FUN_0054fdd4(&DAT_00d80520), iVar2 != 0)) {
    DAT_00d80518 = (char *)FUN_0066d328("webrtc");
    FUN_0054ff1c(&DAT_00d80520);
  }
  local_58 = (char **)0x0;
  pcStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  if (*DAT_00d80518 != '\0') {
    FUN_0066d348(0x42,DAT_00d80518,"VCMGenericDecoder::Configure",0,0,0,0,0,0);
    local_50 = DAT_00d80518;
    pcStack_48 = "VCMGenericDecoder::Configure";
    local_58 = &local_50;
  }
  uVar1 = (**(code **)(*(long *)param_1[1] + 0x10))((long *)param_1[1],param_2);
  (**(code **)(*(long *)param_1[1] + 0x38))(&local_78,(long *)param_1[1]);
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    operator_delete((void *)param_1[3]);
  }
  param_1[4] = lStack_70;
  param_1[3] = (long)local_78;
  param_1[5] = CONCAT17(cStack_61,local_68);
  *(undefined1 *)(param_1 + 6) = local_60;
  uVar3 = FUN_00417e08();
  if ((uVar3 & 1) == 0) {
    FUN_007b9088(&local_78,param_1 + 3);
    FUN_00623bb0(&DAT_001f4e90,"../../modules/video_coding/generic_decoder.cc",0x999,
                 "Decoder implementation: ",&local_78);
    if (cStack_61 < '\0') {
      operator_delete(local_78);
    }
  }
  if (*param_1 != 0) {
    plVar4 = *(long **)(*param_1 + 0x20);
    (**(code **)(*plVar4 + 0x20))(plVar4,param_1 + 3);
  }
  if ((local_58 != (char **)0x0) && (**local_58 != '\0')) {
    FUN_0066d348(0x45,*local_58,local_58[1],0,0,0,0,0,0);
  }
  return uVar1 & 1;
}


// ===== 0094231c  FUN_0094231c =====

void FUN_0094231c(undefined8 param_1,long param_2,undefined8 param_3)

{
  FUN_00942334(param_1,param_2 + 8,param_3,*(undefined8 *)(param_2 + 0x1c0),param_2 + 0x9a0);
  return;
}


// ===== 00942334  FUN_00942334 =====

int FUN_00942334(long *param_1,long param_2,undefined8 param_3,ulong param_4,undefined8 param_5)

{
  undefined1 *puVar1;
  int iVar2;
  void *pvVar3;
  bool bVar4;
  int iVar5;
  void *pvVar6;
  undefined8 ****ppppuVar7;
  undefined1 uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  void *local_2a8 [2];
  char cStack_291;
  undefined8 ***local_290;
  undefined1 *puStack_288;
  undefined8 local_280;
  undefined1 *local_278;
  undefined8 local_270;
  long lStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  long local_1f0;
  int local_1e8;
  ulong local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  void *local_1c8;
  void *pvStack_1c0;
  undefined8 local_1b8;
  byte local_1b0;
  undefined1 local_1a8 [68];
  undefined1 local_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  long lStack_158;
  byte local_150;
  undefined7 uStack_14f;
  undefined8 local_148;
  undefined1 local_140;
  undefined7 uStack_13f;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  long local_e0;
  int local_d8;
  undefined1 local_d0;
  undefined7 uStack_cf;
  undefined8 uStack_c8;
  undefined8 local_c0;
  void *local_b8;
  void *pvStack_b0;
  undefined8 local_a8;
  char local_a0;
  undefined1 local_98 [68];
  char local_54;
  
  memcpy(&local_160,&DAT_00228380,0x110);
  uStack_128 = *(undefined8 *)(param_2 + 0x30);
  local_130 = *(undefined8 *)(param_2 + 0x28);
  uStack_118 = *(undefined8 *)(param_2 + 0x40);
  local_120 = *(undefined8 *)(param_2 + 0x38);
  uStack_108 = *(undefined8 *)(param_2 + 0x50);
  local_110 = *(undefined8 *)(param_2 + 0x48);
  lStack_158 = (param_4 & ((long)param_4 >> 0x3f ^ 0xffffffffffffffffU)) * 1000;
  local_160 = *(undefined4 *)(param_2 + 0x98);
  lVar11 = *(long *)(param_2 + 0x130);
  uStack_f8 = *(undefined8 *)(param_2 + 0x60);
  local_100 = *(undefined8 *)(param_2 + 0x58);
  local_140 = 1;
  local_e0 = 0;
  uStack_138 = *(undefined4 *)(param_2 + 0x1c);
  local_150 = (byte)(param_4 >> 0x3f) ^ 1;
  uStack_e8 = *(undefined8 *)(param_2 + 8);
  local_f0 = *(undefined8 *)(param_2 + 0x68);
  local_d0 = 0;
  local_a0 = '\0';
  local_98[0] = 0;
  local_54 = '\0';
  local_148 = param_3;
  if ((lVar11 != 0) && (FUN_00d0f740(1,lVar11), local_e0 != 0)) {
    FUN_00659370();
  }
  local_e0 = lVar11;
  FUN_0084fc00(&local_d0,param_5);
  if (*(char *)(param_2 + 0x124) == '\x01') {
    if (local_54 == '\x01') {
      FUN_00659b1c();
    }
    else {
      FUN_00659adc(local_98,param_2 + 0xe0);
      local_54 = '\x01';
    }
  }
  pvVar3 = pvStack_b0;
  pvVar6 = local_b8;
  local_1e8 = *(int *)(param_2 + 0x18);
  if (local_1e8 == 3) {
    uVar8 = *(undefined1 *)(param_2 + 0x20);
    *(undefined1 *)(param_1 + 2) = uVar8;
    local_1e8 = *(int *)(param_2 + 0x18);
  }
  else {
    uVar8 = (undefined1)param_1[2];
  }
  uStack_134 = CONCAT31(uStack_134._1_3_,uVar8);
  lVar11 = *param_1;
  local_1f0 = local_e0;
  local_1b0 = local_a0 == '\x01';
  local_e0 = 0;
  local_1e0 = local_1e0 & 0xffffffffffffff00;
  uStack_218 = uStack_108;
  local_220 = local_110;
  uStack_208 = uStack_f8;
  uStack_210 = local_100;
  local_270 = CONCAT44(uStack_15c,local_160);
  uStack_260 = CONCAT71(uStack_14f,local_150);
  uStack_1f8 = uStack_e8;
  local_200 = local_f0;
  lStack_268 = lStack_158;
  uStack_258 = local_148;
  uStack_248 = CONCAT44(uStack_134,uStack_138);
  local_250 = CONCAT71(uStack_13f,local_140);
  uStack_238 = uStack_128;
  local_240 = local_130;
  uStack_228 = uStack_118;
  uStack_230 = local_120;
  if ((bool)local_1b0) {
    local_1e0 = CONCAT71(uStack_cf,local_d0);
    local_b8 = (void *)0x0;
    pvStack_b0 = (void *)0x0;
    local_1d0 = local_c0;
    uStack_1d8 = uStack_c8;
    pvStack_1c0 = pvVar3;
    local_1c8 = pvVar6;
    local_1b8 = local_a8;
    local_a8 = 0;
  }
  local_1a8[0] = 0;
  local_164 = 0;
  bVar4 = local_54 == '\x01';
  local_d8 = local_1e8;
  if (bVar4) {
    FUN_00659afc(local_1a8,local_98);
  }
  local_164 = bVar4;
  FUN_00941bc4(lVar11,&local_270);
  if (((local_1b0 & 1) == 0) || (local_1c8 == (void *)0x0)) {
LAB_009425c0:
    if (local_1f0 != 0) {
      FUN_00659370();
    }
    iVar5 = (**(code **)(*(long *)param_1[1] + 0x18))((long *)param_1[1],param_2,param_4);
    puStack_288 = &DAT_aaaaaaaaaaaaaaaa;
    local_290 = (undefined8 ***)&DAT_aaaaaaaaaaaaaaaa;
    local_278 = &DAT_aaaaaaaaaaaaaaaa;
    local_280 = &DAT_aaaaaaaaaaaaaaaa;
    (**(code **)(*(long *)param_1[1] + 0x38))(&local_290,(long *)param_1[1]);
    uVar9 = FUN_007b9288(&local_290,param_1 + 3);
    if ((uVar9 & 1) == 0) {
      uVar9 = FUN_00417e08();
      if ((uVar9 & 1) == 0) {
        FUN_007b9088(local_2a8,&local_290);
        FUN_00623bb0(&DAT_001f4e90,"../../modules/video_coding/generic_decoder.cc",0xb51,
                     "Changed decoder implementation to: ",local_2a8);
        if (cStack_291 < '\0') {
          operator_delete(local_2a8[0]);
        }
      }
      if ((undefined8 ****)(param_1 + 3) != &local_290) {
        if (*(char *)((long)param_1 + 0x2f) < '\0') {
          puVar1 = puStack_288;
          ppppuVar7 = (undefined8 ****)local_290;
          if (-1 < (long)local_280) {
            puVar1 = (undefined1 *)((ulong)local_280 >> 0x38);
            ppppuVar7 = &local_290;
          }
          FUN_00547f08(param_1 + 3,ppppuVar7,puVar1);
        }
        else if ((long)local_280 < 0) {
          FUN_00547fc0(param_1 + 3,local_290,puStack_288);
        }
        else {
          param_1[4] = (long)puStack_288;
          param_1[3] = (long)local_290;
          param_1[5] = (long)local_280;
        }
      }
      *(undefined1 *)(param_1 + 6) = local_278._0_1_;
      puVar1 = puStack_288;
      if (-1 < (long)local_280) {
        puVar1 = (undefined1 *)((ulong)local_280 >> 0x38);
      }
      if (puVar1 == (undefined1 *)0x0) {
        if ((long)local_280 < 0) {
          puStack_288 = (undefined1 *)0x7;
          ppppuVar7 = (undefined8 ****)local_290;
        }
        else {
          local_280 = (undefined1 *)CONCAT17(7,(undefined7)local_280);
          ppppuVar7 = &local_290;
        }
        *(undefined1 *)((long)ppppuVar7 + 7) = 0;
        *(undefined4 *)((long)ppppuVar7 + 3) = 0x6e776f6e;
        *(undefined4 *)ppppuVar7 = 0x6e6b6e75;
      }
      (**(code **)(**(long **)(*param_1 + 0x20) + 0x20))(*(long **)(*param_1 + 0x20),&local_290);
    }
    if ((iVar5 < 0) || (iVar5 == 1)) {
      lVar11 = *param_1;
      pthread_mutex_lock((pthread_mutex_t *)(lVar11 + 0x38));
      iVar2 = *(int *)(lVar11 + 0x88);
      FUN_00941f00(lVar11 + 0x60);
      pthread_mutex_unlock((pthread_mutex_t *)(lVar11 + 0x38));
      if (0 < iVar2) {
        (**(code **)(**(long **)(lVar11 + 0x20) + 8))(*(long **)(lVar11 + 0x20),iVar2);
      }
    }
    if ((long)local_280 < 0) {
      operator_delete(local_290);
    }
    if ((local_a0 != '\x01') || (local_b8 == (void *)0x0)) {
LAB_0094283c:
      if (local_e0 != 0) {
        FUN_00659370();
      }
      return iVar5;
    }
    uVar10 = (ulong)((long)pvStack_b0 + (-8 - ((long)pvStack_b0 << 0x3d))) >> 3;
    uVar9 = (ulong)(((long)local_b8 - (long)pvStack_b0 << 0x3d) -
                   ((long)local_b8 - (long)pvStack_b0)) >> 3;
    if (uVar10 <= uVar9) {
      uVar9 = uVar10;
    }
    pvVar6 = pvStack_b0;
    if ((1 < uVar9) && ((((int)local_b8 - (int)pvStack_b0 | -(int)pvStack_b0) & 7U) == 0)) {
      uVar9 = uVar9 & 0x1ffffffffffffffe;
      pvVar6 = (void *)((long)pvStack_b0 + uVar9 * -8);
      do {
        uVar9 = uVar9 - 2;
      } while (uVar9 != 0);
    }
    do {
      if (pvVar6 == local_b8) {
        pvStack_b0 = local_b8;
        operator_delete(local_b8);
        goto LAB_0094283c;
      }
      pvVar6 = (void *)((long)pvVar6 + -8);
    } while (pvVar6 != (void *)0x0);
  }
  else {
    uVar10 = (ulong)((long)pvStack_1c0 + (-8 - ((long)pvStack_1c0 << 0x3d))) >> 3;
    uVar9 = (ulong)(((long)local_1c8 - (long)pvStack_1c0 << 0x3d) -
                   ((long)local_1c8 - (long)pvStack_1c0)) >> 3;
    if (uVar10 <= uVar9) {
      uVar9 = uVar10;
    }
    pvVar6 = pvStack_1c0;
    if ((1 < uVar9) && ((((int)local_1c8 - (int)pvStack_1c0 | -(int)pvStack_1c0) & 7U) == 0)) {
      uVar9 = uVar9 & 0x1ffffffffffffffe;
      pvVar6 = (void *)((long)pvStack_1c0 + uVar9 * -8);
      do {
        uVar9 = uVar9 - 2;
      } while (uVar9 != 0);
    }
    do {
      if (pvVar6 == local_1c8) {
        pvStack_1c0 = local_1c8;
        operator_delete(local_1c8);
        goto LAB_009425c0;
      }
      pvVar6 = (void *)((long)pvVar6 + -8);
    } while (pvVar6 != (void *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 0094286c  FUN_0094286c =====

undefined4 FUN_0094286c(long *param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  *param_1 = param_2;
  uVar1 = (**(code **)(*(long *)param_1[1] + 0x28))();
  if (param_2 != 0) {
    lVar2 = (long)*(char *)((long)param_1 + 0x2f);
    if (lVar2 < 0) {
      lVar2 = param_1[4];
    }
    if (lVar2 != 0) {
      (**(code **)(**(long **)(param_2 + 0x20) + 0x20))(*(long **)(param_2 + 0x20),param_1 + 3);
    }
  }
  return uVar1;
}


// ===== 009428e0  FUN_009428e0 =====

undefined8 * FUN_009428e0(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar5 = param_2[4];
  uVar4 = param_2[7];
  uVar3 = param_2[6];
  uVar7 = param_2[1];
  uVar6 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  param_1[5] = param_2[5];
  param_1[4] = uVar5;
  param_1[7] = uVar4;
  param_1[6] = uVar3;
  param_1[1] = uVar7;
  *param_1 = uVar6;
  param_1[3] = uVar9;
  param_1[2] = uVar8;
  uVar5 = param_2[0xc];
  uVar4 = param_2[0xf];
  uVar3 = param_2[0xe];
  uVar7 = param_2[9];
  uVar6 = param_2[8];
  uVar9 = param_2[0xb];
  uVar8 = param_2[10];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar5;
  param_1[0xf] = uVar4;
  param_1[0xe] = uVar3;
  param_1[9] = uVar7;
  param_1[8] = uVar6;
  param_1[0xb] = uVar9;
  param_1[10] = uVar8;
  uVar3 = param_2[0x10];
  param_2[0x10] = 0;
  lVar2 = param_1[0x10];
  param_1[0x10] = uVar3;
  if (lVar2 != 0) {
    FUN_00659370();
  }
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
  FUN_0060a6c8(param_1 + 0x12,param_2 + 0x12);
  cVar1 = *(char *)((long)param_1 + 0x10c);
  if (cVar1 == *(char *)((long)param_2 + 0x10c)) {
    if (cVar1 != '\0') {
      FUN_00659b1c(param_1 + 0x19,param_2 + 0x19);
    }
  }
  else if (cVar1 == '\0') {
    if (param_1 == (undefined8 *)0xffffffffffffff38) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    FUN_00659afc(param_1 + 0x19,param_2 + 0x19);
    *(undefined1 *)((long)param_1 + 0x10c) = 1;
  }
  else {
    *(undefined1 *)((long)param_1 + 0x10c) = 0;
  }
  return param_1;
}


// ===== 009429b8  FUN_009429b8 =====

void FUN_009429b8(long *param_1,long param_2,long *param_3,long param_4,undefined8 *param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  plVar7 = (long *)*param_5;
  lVar4 = param_5[1];
  if (param_1 == param_3) {
    if (param_2 == param_4) goto LAB_00942ca0;
    lVar8 = *plVar7;
    while( true ) {
      lVar2 = (lVar4 - lVar8 >> 4) * -0xf0f0f0f0f0f0f0f;
      lVar8 = (param_4 - param_2 >> 4) * -0xf0f0f0f0f0f0f0f;
      if (lVar2 <= lVar8) {
        lVar8 = lVar2;
      }
      lVar2 = lVar8 * -0x110;
      lVar3 = param_4;
      lVar6 = lVar8;
      while (lVar6 != 0) {
        lVar3 = lVar3 + -0x110;
        lVar4 = lVar4 + -0x110;
        FUN_009428e0(lVar4,lVar3);
        lVar2 = lVar2 + 0x110;
        lVar6 = lVar2;
      }
      param_4 = param_4 + lVar8 * -0x110;
      if (param_2 == param_4) break;
      plVar7 = plVar7 + -1;
      lVar8 = *plVar7;
      lVar4 = lVar8 + 0x1100;
    }
  }
  else {
    lVar8 = *param_3;
    if (lVar8 != param_4) {
      lVar2 = *plVar7;
      while( true ) {
        lVar3 = (lVar4 - lVar2 >> 4) * -0xf0f0f0f0f0f0f0f;
        lVar2 = (param_4 - lVar8 >> 4) * -0xf0f0f0f0f0f0f0f;
        if (lVar3 <= lVar2) {
          lVar2 = lVar3;
        }
        lVar3 = lVar2 * -0x110;
        lVar6 = param_4;
        lVar5 = lVar2;
        while (lVar5 != 0) {
          lVar6 = lVar6 + -0x110;
          lVar4 = lVar4 + -0x110;
          FUN_009428e0(lVar4,lVar6);
          lVar3 = lVar3 + 0x110;
          lVar5 = lVar3;
        }
        param_4 = param_4 + lVar2 * -0x110;
        if (lVar8 == param_4) break;
        plVar7 = plVar7 + -1;
        lVar2 = *plVar7;
        lVar4 = lVar2 + 0x1100;
      }
      if ((plVar7 != (long *)0x0) && (lVar4 == *plVar7 + 0x1100)) {
        plVar7 = plVar7 + 1;
        lVar4 = *plVar7;
      }
    }
    *param_5 = plVar7;
    param_5[1] = lVar4;
    for (param_3 = param_3 + -1; param_1 != param_3; param_3 = param_3 + -1) {
      lVar3 = *param_3;
      lVar2 = *plVar7;
      lVar8 = lVar3 + 0x1100;
      while( true ) {
        lVar6 = (lVar4 - lVar2 >> 4) * -0xf0f0f0f0f0f0f0f;
        lVar2 = (lVar8 - lVar3 >> 4) * -0xf0f0f0f0f0f0f0f;
        if (lVar6 <= lVar2) {
          lVar2 = lVar6;
        }
        lVar6 = lVar2 * -0x110;
        lVar5 = lVar8;
        lVar1 = lVar2;
        while (lVar1 != 0) {
          lVar5 = lVar5 + -0x110;
          lVar4 = lVar4 + -0x110;
          FUN_009428e0(lVar4,lVar5);
          lVar6 = lVar6 + 0x110;
          lVar1 = lVar6;
        }
        lVar8 = lVar8 + lVar2 * -0x110;
        if (lVar3 == lVar8) break;
        plVar7 = plVar7 + -1;
        lVar2 = *plVar7;
        lVar4 = lVar2 + 0x1100;
      }
      if ((plVar7 != (long *)0x0) && (lVar4 == *plVar7 + 0x1100)) {
        plVar7 = plVar7 + 1;
        lVar4 = *plVar7;
      }
      *param_5 = plVar7;
      param_5[1] = lVar4;
    }
    lVar8 = *param_3 + 0x1100;
    if (param_2 == lVar8) goto LAB_00942ca0;
    lVar2 = *plVar7;
    while( true ) {
      lVar3 = (lVar4 - lVar2 >> 4) * -0xf0f0f0f0f0f0f0f;
      lVar2 = (lVar8 - param_2 >> 4) * -0xf0f0f0f0f0f0f0f;
      if (lVar3 <= lVar2) {
        lVar2 = lVar3;
      }
      lVar3 = lVar2 * -0x110;
      lVar6 = lVar8;
      lVar5 = lVar2;
      while (lVar5 != 0) {
        lVar6 = lVar6 + -0x110;
        lVar4 = lVar4 + -0x110;
        FUN_009428e0(lVar4,lVar6);
        lVar3 = lVar3 + 0x110;
        lVar5 = lVar3;
      }
      lVar8 = lVar8 + lVar2 * -0x110;
      if (param_2 == lVar8) break;
      plVar7 = plVar7 + -1;
      lVar2 = *plVar7;
      lVar4 = lVar2 + 0x1100;
    }
  }
  if ((plVar7 != (long *)0x0) && (lVar4 == *plVar7 + 0x1100)) {
    plVar7 = plVar7 + 1;
    lVar4 = *plVar7;
  }
LAB_00942ca0:
  *param_5 = plVar7;
  param_5[1] = lVar4;
  return;
}


// ===== 00942ccc  FUN_00942ccc =====

void FUN_00942ccc(long *param_1,long param_2,long *param_3,long param_4,undefined8 *param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  if (param_1 == param_3) {
    plVar5 = (long *)*param_5;
    lVar4 = param_5[1];
    if (param_2 != param_4) {
      lVar6 = *plVar5;
      do {
        lVar1 = (param_4 - param_2 >> 4) * -0xf0f0f0f0f0f0f0f;
        lVar6 = ((lVar6 - lVar4) + 0x1100 >> 4) * -0xf0f0f0f0f0f0f0f;
        if (lVar6 <= lVar1) {
          lVar1 = lVar6;
        }
        if (lVar1 != 0) {
          lVar1 = lVar1 * 0x110;
          lVar6 = param_2 + lVar1;
          do {
            FUN_009428e0(lVar4,param_2);
            lVar1 = lVar1 + -0x110;
            param_2 = param_2 + 0x110;
            lVar4 = lVar4 + 0x110;
          } while (lVar1 != 0);
          param_2 = lVar6;
          if (param_4 == lVar6) goto code_r0x00942e50;
        }
        plVar5 = plVar5 + 1;
        lVar6 = *plVar5;
        lVar4 = lVar6;
      } while( true );
    }
    goto LAB_00942e6c;
  }
  plVar5 = (long *)*param_5;
  lVar4 = param_5[1];
  lVar6 = *param_1 + 0x1100;
  if (param_2 != lVar6) {
    lVar1 = *plVar5;
    do {
      lVar2 = (lVar6 - param_2 >> 4) * -0xf0f0f0f0f0f0f0f;
      lVar1 = ((lVar1 - lVar4) + 0x1100 >> 4) * -0xf0f0f0f0f0f0f0f;
      if (lVar1 <= lVar2) {
        lVar2 = lVar1;
      }
      if (lVar2 != 0) {
        lVar2 = lVar2 * 0x110;
        lVar1 = param_2 + lVar2;
        do {
          FUN_009428e0(lVar4,param_2);
          lVar2 = lVar2 + -0x110;
          param_2 = param_2 + 0x110;
          lVar4 = lVar4 + 0x110;
        } while (lVar2 != 0);
        param_2 = lVar1;
        if (lVar6 == lVar1) goto code_r0x00942da4;
      }
      plVar5 = plVar5 + 1;
      lVar1 = *plVar5;
      lVar4 = lVar1;
    } while( true );
  }
  goto LAB_00942e78;
code_r0x00942e50:
  if ((plVar5 != (long *)0x0) && (lVar4 == *plVar5 + 0x1100)) {
    plVar5 = plVar5 + 1;
    lVar4 = *plVar5;
  }
LAB_00942e6c:
  *param_5 = plVar5;
  goto LAB_00942ff4;
code_r0x00942f2c:
  if ((plVar5 != (long *)0x0) && (lVar4 == *plVar5 + 0x1100)) {
    plVar5 = plVar5 + 1;
    lVar4 = *plVar5;
  }
  param_1 = param_1 + 1;
  *param_5 = plVar5;
  param_5[1] = lVar4;
  if (param_1 == param_3) goto LAB_00942f4c;
  goto LAB_00942eb4;
code_r0x00942fd4:
  if ((plVar5 != (long *)0x0) && (lVar4 == *plVar5 + 0x1100)) {
    plVar5 = plVar5 + 1;
    lVar4 = *plVar5;
  }
  goto LAB_00942ff0;
code_r0x00942da4:
  if ((plVar5 != (long *)0x0) && (lVar4 == *plVar5 + 0x1100)) {
    plVar5 = plVar5 + 1;
    lVar4 = *plVar5;
  }
LAB_00942e78:
  param_1 = param_1 + 1;
  *param_5 = plVar5;
  param_5[1] = lVar4;
  if (param_1 != param_3) {
LAB_00942eb4:
    lVar6 = *param_1;
    lVar2 = *plVar5;
    lVar1 = lVar6 + 0x1100;
    do {
      lVar3 = (lVar1 - lVar6 >> 4) * -0xf0f0f0f0f0f0f0f;
      lVar2 = ((lVar2 - lVar4) + 0x1100 >> 4) * -0xf0f0f0f0f0f0f0f;
      if (lVar2 <= lVar3) {
        lVar3 = lVar2;
      }
      if (lVar3 != 0) {
        lVar3 = lVar3 * 0x110;
        lVar2 = lVar6 + lVar3;
        do {
          FUN_009428e0(lVar4,lVar6);
          lVar3 = lVar3 + -0x110;
          lVar6 = lVar6 + 0x110;
          lVar4 = lVar4 + 0x110;
        } while (lVar3 != 0);
        lVar6 = lVar2;
        if (lVar1 == lVar2) goto code_r0x00942f2c;
      }
      plVar5 = plVar5 + 1;
      lVar2 = *plVar5;
      lVar4 = lVar2;
    } while( true );
  }
LAB_00942f4c:
  lVar6 = *param_1;
  if (lVar6 != param_4) {
    lVar1 = *plVar5;
    do {
      lVar2 = (param_4 - lVar6 >> 4) * -0xf0f0f0f0f0f0f0f;
      lVar1 = ((lVar1 - lVar4) + 0x1100 >> 4) * -0xf0f0f0f0f0f0f0f;
      if (lVar1 <= lVar2) {
        lVar2 = lVar1;
      }
      if (lVar2 != 0) {
        lVar2 = lVar2 * 0x110;
        lVar1 = lVar6 + lVar2;
        do {
          FUN_009428e0(lVar4,lVar6);
          lVar2 = lVar2 + -0x110;
          lVar6 = lVar6 + 0x110;
          lVar4 = lVar4 + 0x110;
        } while (lVar2 != 0);
        lVar6 = lVar1;
        if (param_4 == lVar1) goto code_r0x00942fd4;
      }
      plVar5 = plVar5 + 1;
      lVar1 = *plVar5;
      lVar4 = lVar1;
    } while( true );
  }
LAB_00942ff0:
  *param_5 = plVar5;
LAB_00942ff4:
  param_5[1] = lVar4;
  return;
}


// ===== 0094301c  FUN_0094301c =====

void FUN_0094301c(long *param_1)

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
  
  if ((ulong)param_1[4] < 0x10) {
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
      local_18 = operator_new(0x1100);
      FUN_0094348c(&local_50,&local_18);
      lVar2 = param_1[1];
      lVar5 = param_1[2];
      if (lVar5 != lVar2) {
        do {
          lVar5 = lVar5 + -8;
          FUN_009439b0(&local_50,lVar5);
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
      local_50 = (undefined1 *)operator_new(0x1100);
      FUN_0094348c(param_1,&local_50);
      return;
    }
    local_50 = (undefined1 *)operator_new(0x1100);
    FUN_00943714(param_1,&local_50);
    local_50 = *(undefined1 **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  else {
    param_1[4] = param_1[4] - 0x10;
    local_50 = *(undefined1 **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  FUN_00943204(param_1,&local_50);
  return;
}


// ===== 00943204  FUN_00943204 =====

void FUN_00943204(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar8 == (undefined8 *)0x0) goto LAB_00943474;
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
LAB_00943474:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 0094348c  FUN_0094348c =====

void FUN_0094348c(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar8 == (undefined8 *)0x0) goto LAB_009436fc;
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
LAB_009436fc:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00943714  FUN_00943714 =====

void FUN_00943714(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar9 == (undefined8 *)0x0) goto LAB_00943998;
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
LAB_00943998:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 009439b0  FUN_009439b0 =====

void FUN_009439b0(undefined8 *param_1,undefined8 *param_2)

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
          if (puVar9 == (undefined8 *)0x0) goto LAB_00943c34;
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
LAB_00943c34:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00943c4c  FUN_00943c4c =====

void FUN_00943c4c(long param_1)

{
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined8 **)(param_1 + 0x48) = (undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 **)(param_1 + 0x60) = (undefined8 *)(param_1 + 0x68);
  return;
}


// ===== 00943c78  FUN_00943c78 =====

void FUN_00943c78(long param_1,byte param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar6 = *(undefined8 **)(param_1 + 0x68);
  while( true ) {
    while( true ) {
      if (puVar6 == (undefined8 *)0x0) {
        return;
      }
      if (*(byte *)(puVar6 + 4) <= param_2) break;
      puVar6 = (undefined8 *)*puVar6;
    }
    if (param_2 == *(byte *)(puVar6 + 4)) break;
    puVar6 = (undefined8 *)puVar6[1];
  }
  if (puVar6 == (undefined8 *)(param_1 + 0x68)) {
    return;
  }
  if ((*(char *)(param_1 + 0x40) == '\x01') && (*(long *)(param_1 + 0x10) == puVar6[5])) {
    FUN_009420e0(param_1 + 8);
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  puVar4 = puVar6;
  puVar1 = (undefined8 *)puVar6[1];
  if ((undefined8 *)puVar6[1] == (undefined8 *)0x0) {
    do {
      puVar5 = (undefined8 *)puVar4[2];
      bVar2 = puVar4 != (undefined8 *)*puVar5;
      puVar4 = puVar5;
    } while (bVar2);
  }
  else {
    do {
      puVar5 = puVar1;
      puVar1 = (undefined8 *)*puVar5;
    } while ((undefined8 *)*puVar5 != (undefined8 *)0x0);
  }
  if (*(undefined8 **)(param_1 + 0x60) == puVar6) {
    *(undefined8 **)(param_1 + 0x60) = puVar5;
  }
  *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) + -1;
  FUN_005d5d48(*(undefined8 *)(param_1 + 0x68),puVar6);
  if (puVar6 == (undefined8 *)0xffffffffffffffe0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
              );
  }
  plVar3 = (long *)puVar6[5];
  puVar6[5] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  operator_delete(puVar6);
  return;
}


// ===== 00943db0  FUN_00943db0 =====

void FUN_00943db0(long param_1,ulong param_2,long *param_3)

{
  long *plVar1;
  ulong local_40;
  long *local_38;
  
  FUN_00943c78();
  if (param_3 != (long *)0x0) {
    local_40 = param_2 & 0xff;
    local_38 = param_3;
    FUN_00944284(0,param_1 + 0x60,param_1 + 0x60,&local_40);
    plVar1 = local_38;
    local_38 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
  }
  return;
}


// ===== 00943e28  FUN_00943e28 =====

bool FUN_00943e28(long param_1,byte param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = (long *)(param_1 + 0x68);
  plVar2 = (long *)*plVar1;
  if (plVar2 == (long *)0x0) {
    return false;
  }
  do {
    while (*(byte *)(plVar2 + 4) <= param_2) {
      plVar3 = plVar2;
      if ((param_2 == *(byte *)(plVar2 + 4)) ||
         (plVar2 = (long *)plVar2[1], plVar3 = plVar1, plVar2 == (long *)0x0)) goto LAB_00943e60;
    }
    plVar2 = (long *)*plVar2;
    plVar3 = plVar1;
  } while (plVar2 != (long *)0x0);
LAB_00943e60:
  return plVar3 != plVar1;
}


// ===== 00943e74  FUN_00943e74 =====

void FUN_00943e74(long param_1,char param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char local_24 [3];
  undefined1 uStack_21;
  char *local_8;
  
  if ((*(char *)(param_1 + 2) == '\x01') && (*(char *)(param_1 + 1) == param_2)) {
    *(undefined1 *)(param_1 + 2) = 0;
  }
  local_8 = local_24;
  local_24[0] = param_2;
  lVar1 = FUN_00944394(0,param_1 + 0x48,param_1 + 0x48,&DAT_001f94c3,&local_8,&uStack_21);
  uVar3 = param_3[1];
  uVar2 = *param_3;
  *(undefined8 *)(lVar1 + 0x30) = param_3[2];
  *(undefined8 *)(lVar1 + 0x28) = uVar3;
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  return;
}


// ===== 00943ef8  FUN_00943ef8 =====

void FUN_00943ef8(long param_1)

{
  undefined8 *puVar1;
  long local_8;
  
  if (*(char *)(param_1 + 2) == '\x01') {
    *(undefined1 *)(param_1 + 2) = 0;
  }
  puVar1 = (undefined8 *)(param_1 + 0x50);
  local_8 = param_1 + 0x48;
  FUN_00940360(&local_8,*puVar1);
  *puVar1 = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 **)(param_1 + 0x48) = puVar1;
  return;
}


// ===== 00943f48  FUN_00943f48 =====

long FUN_00943f48(long param_1,long param_2,undefined8 param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  long *plVar4;
  
  bVar2 = *(byte *)(param_2 + 0x1c8);
  bVar1 = 0;
  if (bVar2 == *(byte *)(param_1 + 1)) {
    bVar1 = *(byte *)(param_1 + 2);
  }
  if (((bVar1 & 1) != 0) || (bVar2 == 0)) {
    if (*(char *)(param_1 + 0x40) != '\0') {
      return param_1 + 8;
    }
    return 0;
  }
  if (*(char *)(param_1 + 0x40) != '\0') {
    FUN_009420e0(param_1 + 8);
    *(undefined1 *)(param_1 + 0x40) = 0;
    if (*(char *)(param_1 + 2) == '\x01') {
      *(undefined1 *)(param_1 + 2) = 0;
    }
  }
  FUN_0094407c(param_1,param_2);
  if (*(char *)(param_1 + 0x40) == '\x01') {
    plVar4 = (long *)FUN_00940648(param_3);
    (**(code **)(*plVar4 + 0x18))(plVar4,bVar2);
    if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                );
    }
    iVar3 = FUN_0094286c(param_1 + 8,param_3);
    if (-1 < iVar3) {
      *(ushort *)(param_1 + 1) = bVar2 | 0x100;
      if ((*(byte *)(param_1 + 0x40) & 1) != 0) {
        return param_1 + 8;
      }
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
                );
    }
    if (*(char *)(param_1 + 0x40) == '\x01') {
      FUN_009420e0(param_1 + 8);
      *(undefined1 *)(param_1 + 0x40) = 0;
      return 0;
    }
  }
  return 0;
}


// ===== 0094407c  FUN_0094407c =====

/* WARNING: Type propagation algorithm not settling */

void FUN_0094407c(long param_1,long param_2)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  char *pcVar4;
  long *plVar5;
  long *plVar6;
  
  bVar1 = *(byte *)(param_2 + 0x1c8);
  plVar6 = *(long **)(param_1 + 0x50);
joined_r0x009440a0:
  do {
    if (plVar6 == (long *)0x0) {
LAB_00944110:
      uVar2 = FUN_004249b0();
      if ((uVar2 & 1) != 0) {
        return;
      }
      FUN_00623bb0(&DAT_001f4e94,"../../modules/video_coding/decoder_database.cc",0x433,
                   "Can\'t find a decoder associated with payload type: ",bVar1);
      return;
    }
    if (bVar1 < *(byte *)((long)plVar6 + 0x1c)) {
      plVar6 = (long *)*plVar6;
      goto joined_r0x009440a0;
    }
    if (bVar1 == *(byte *)((long)plVar6 + 0x1c)) {
      if (plVar6 != (long *)(param_1 + 0x50)) {
        plVar5 = *(long **)(param_1 + 0x68);
        break;
      }
      goto LAB_00944110;
    }
    plVar6 = (long *)plVar6[1];
  } while( true );
joined_r0x009440e4:
  if (plVar5 == (long *)0x0) {
LAB_00944220:
    uVar2 = FUN_004249b0();
    if ((uVar2 & 1) != 0) {
      return;
    }
    pcVar4 = "No decoder of this type exists.";
    uVar3 = 0x463;
LAB_00944244:
    FUN_00623bb0(&DAT_001f4e98,"../../modules/video_coding/decoder_database.cc",uVar3,pcVar4);
    return;
  }
  if (bVar1 < *(byte *)(plVar5 + 4)) {
    plVar5 = (long *)*plVar5;
    goto joined_r0x009440e4;
  }
  if (bVar1 == *(byte *)(plVar5 + 4)) {
    if (plVar5 != (long *)(param_1 + 0x68)) {
      uVar3 = plVar5[5];
      if (*(char *)(param_1 + 0x40) == '\x01') {
        FUN_009420e0(param_1 + 8);
        *(undefined1 *)(param_1 + 0x40) = 0;
      }
      if (param_1 == -8) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      FUN_009420c4(param_1 + 8,uVar3);
      *(undefined1 *)(param_1 + 0x40) = 1;
      if (((0 < *(int *)(param_2 + 8)) && (0 < *(int *)(param_2 + 0xc))) &&
         (plVar6[5] = *(undefined8 *)(param_2 + 8), (*(byte *)(param_1 + 0x40) & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/optional:1059: libc++ Hardening assertion this->has_value() failed: optional operator-> called on a disengaged value\n"
                  );
      }
      uVar2 = FUN_00942138(param_1 + 8,plVar6 + 4);
      if ((uVar2 & 1) != 0) {
        return;
      }
      if (*(char *)(param_1 + 0x40) == '\x01') {
        FUN_009420e0(param_1 + 8);
        *(undefined1 *)(param_1 + 0x40) = 0;
      }
      uVar2 = FUN_004249b0();
      if ((uVar2 & 1) != 0) {
        return;
      }
      pcVar4 = "Failed to initialize decoder.";
      uVar3 = 0x4e3;
      goto LAB_00944244;
    }
    goto LAB_00944220;
  }
  plVar5 = (long *)plVar5[1];
  goto joined_r0x009440e4;
}


// ===== 00944284  FUN_00944284 =====

undefined1  [16] FUN_00944284(undefined8 param_1,long *param_2,undefined8 param_3,byte *param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  
  plVar3 = param_2 + 1;
  plVar6 = plVar3;
  if ((long *)*plVar3 != (long *)0x0) {
    plVar1 = (long *)*plVar3;
    do {
      while (plVar2 = plVar1, plVar3 = plVar2, *param_4 < *(byte *)(plVar2 + 4)) {
        plVar1 = (long *)*plVar2;
        plVar6 = plVar2;
        if ((long *)*plVar2 == (long *)0x0) goto LAB_009442ec;
      }
      if (*param_4 == *(byte *)(plVar2 + 4)) {
        uVar4 = 0;
        goto LAB_00944364;
      }
      plVar1 = (long *)plVar2[1];
    } while ((long *)plVar2[1] != (long *)0x0);
    plVar6 = plVar2 + 1;
  }
LAB_009442ec:
  plVar2 = (long *)operator_new(0x30);
  if ((plVar2 == (long *)0x0) || (*plVar2 = 0, plVar2 == (long *)0xffffffffffffffe0)) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  lVar5 = *(long *)(param_4 + 8);
  param_4[8] = 0;
  param_4[9] = 0;
  param_4[10] = 0;
  param_4[0xb] = 0;
  param_4[0xc] = 0;
  param_4[0xd] = 0;
  param_4[0xe] = 0;
  param_4[0xf] = 0;
  *(byte *)(plVar2 + 4) = *param_4;
  plVar2[5] = lVar5;
  *plVar2 = 0;
  plVar2[1] = 0;
  plVar2[2] = (long)plVar3;
  *plVar6 = (long)plVar2;
  plVar3 = plVar2;
  if (*(long *)*param_2 != 0) {
    *param_2 = *(long *)*param_2;
    plVar3 = (long *)*plVar6;
  }
  FUN_005d5b94(param_2[1],plVar3);
  uVar4 = 1;
  param_2[2] = param_2[2] + 1;
LAB_00944364:
  auVar7._8_8_ = uVar4;
  auVar7._0_8_ = plVar2;
  return auVar7;
}


// ===== 00944394  FUN_00944394 =====

undefined1  [16]
FUN_00944394(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  byte *pbVar8;
  undefined1 auVar9 [16];
  
  pbVar8 = (byte *)*param_5;
  plVar5 = param_2 + 1;
  plVar7 = plVar5;
  if ((long *)*plVar5 != (long *)0x0) {
    bVar1 = *pbVar8;
    plVar3 = (long *)*plVar5;
    do {
      while (plVar4 = plVar3, plVar5 = plVar4, bVar1 < *(byte *)((long)plVar4 + 0x1c)) {
        plVar3 = (long *)*plVar4;
        plVar7 = plVar4;
        if ((long *)*plVar4 == (long *)0x0) goto LAB_009443fc;
      }
      if (bVar1 == *(byte *)((long)plVar4 + 0x1c)) {
        uVar6 = 0;
        goto LAB_0094446c;
      }
      plVar3 = (long *)plVar4[1];
    } while ((long *)plVar4[1] != (long *)0x0);
    plVar7 = plVar4 + 1;
  }
LAB_009443fc:
  plVar4 = (long *)operator_new(0x38);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__Cr::__libcpp_verbose_abort
              ("%s",
               "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
              );
  }
  bVar1 = *pbVar8;
  plVar4[4] = 0;
  plVar4[5] = 0;
  lVar2 = DAT_001f58a0;
  *plVar4 = 0;
  plVar4[1] = 0;
  *(byte *)((long)plVar4 + 0x1c) = bVar1;
  plVar4[6] = lVar2;
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
LAB_0094446c:
  auVar9._8_8_ = uVar6;
  auVar9._0_8_ = plVar4;
  return auVar9;
}


// ===== 0094449c  FUN_0094449c =====

undefined4 FUN_0094449c(long param_1,undefined8 *param_2)

{
  size_t __n;
  undefined8 *__s;
  void *pvVar1;
  ulong uVar2;
  undefined8 uVar3;
  char *pcVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined1 *local_60;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 uStack_11;
  
  __n = param_2[1];
  __s = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    __n = (ulong)*(byte *)((long)param_2 + 0x17);
    __s = param_2;
  }
  pvVar1 = memchr(__s,0x2c,__n);
  uVar5 = (long)pvVar1 - (long)__s;
  if (pvVar1 == (void *)0x0) {
    uVar5 = 0xffffffffffffffff;
  }
  uVar2 = FUN_00417e08();
  if ((uVar2 & 1) == 0) {
    FUN_00623bb0(&DAT_001f4eff,"../../modules/video_coding/h264_sprop_parameter_sets.cc",0x139,
                 "Parsing sprop \"",param_2,&DAT_001d6255);
  }
  if (uVar5 == 0) {
LAB_009445b8:
    uVar2 = FUN_004022fc();
    if ((uVar2 & 1) == 0) {
      FUN_00623bb0(&DAT_00228490,"../../modules/video_coding/h264_sprop_parameter_sets.cc",0x14a,
                   "Invalid seperator position ",uVar5,&DAT_001e5eda,param_2,&DAT_001da30c);
    }
    return 0;
  }
  uVar2 = param_2[1];
  if ((*(byte *)((long)param_2 + 0x17) & 0x80) == 0) {
    uVar2 = (ulong)*(byte *)((long)param_2 + 0x17);
  }
  if (uVar2 - 1 <= uVar5) goto LAB_009445b8;
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00547e10(&local_50,param_2,0,uVar5,&local_70);
  local_60 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00547e10(&local_70,param_2,uVar5 + 1,0xffffffffffffffff,&uStack_11);
  uVar5 = FUN_009446bc(&local_50,param_1);
  if ((uVar5 & 1) == 0) {
    uVar5 = FUN_004022fc();
    if ((uVar5 & 1) == 0) {
      pcVar4 = "Failed to decode sprop/sps *";
      uVar3 = 0x182;
LAB_00944664:
      FUN_00623bb0(&DAT_001f4eff,"../../modules/video_coding/h264_sprop_parameter_sets.cc",uVar3,
                   pcVar4,param_2,&DAT_001da30c);
    }
  }
  else {
    uVar5 = FUN_009446bc(&local_70,param_1 + 0x18);
    if ((uVar5 & 1) != 0) {
      uVar6 = 1;
      goto joined_r0x00944674;
    }
    uVar5 = FUN_004022fc();
    if ((uVar5 & 1) == 0) {
      pcVar4 = "Failed to decode sprop/pps *";
      uVar3 = 0x1a2;
      goto LAB_00944664;
    }
  }
  uVar6 = 0;
joined_r0x00944674:
  if ((long)local_60 < 0) {
    operator_delete(local_70);
  }
  if ((long)local_40 < 0) {
    operator_delete(local_50);
    return uVar6;
  }
  return uVar6;
}


// ===== 009446bc  FUN_009446bc =====

char FUN_009446bc(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 **ppuVar4;
  char cVar5;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *local_40;
  undefined1 *local_38;
  
  puStack_48 = &DAT_aaaaaaaaaaaaaaaa;
  local_50 = &DAT_aaaaaaaaaaaaaaaa;
  local_38 = &DAT_aaaaaaaaaaaaaaaa;
  local_40 = &DAT_aaaaaaaaaaaaaaaa;
  uVar1 = param_1[1];
  puVar3 = (undefined8 *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
    puVar3 = param_1;
  }
  FUN_00834a78(&local_50,puVar3,uVar1,0);
  cVar5 = (char)local_38;
  if ((char)local_38 == '\x01') {
    puVar2 = puStack_48;
    ppuVar4 = (undefined1 **)local_50;
    if (-1 < (long)local_40) {
      puVar2 = (undefined1 *)((ulong)local_40 >> 0x38);
      ppuVar4 = &local_50;
    }
    FUN_00944778(param_2,ppuVar4,(undefined1 *)((long)ppuVar4 + (long)puVar2));
    if (((char)local_38 == '\x01') && ((long)local_40 < 0)) {
      operator_delete(local_50);
    }
  }
  return cVar5;
}


// ===== 00944778  FUN_00944778 =====

void FUN_00944778(undefined8 *param_1,undefined1 *param_2,undefined1 *param_3,ulong param_4)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  size_t __n;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  void *__dest;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar8 = param_1[2];
  __dest = (void *)*param_1;
  if (uVar8 - (long)__dest < param_4) {
    if (__dest != (void *)0x0) {
      if (param_1[1] - 1 < (ulong)(param_1[1] - (long)__dest)) {
LAB_009449d8:
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                  );
      }
      param_1[1] = __dest;
      operator_delete(__dest);
      uVar8 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if ((long)param_4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005d34c0();
    }
    uVar4 = uVar8 * 2;
    if (uVar4 < param_4 || uVar4 - param_4 == 0) {
      uVar4 = param_4;
    }
    if (0x3ffffffffffffffe < uVar8) {
      uVar4 = 0x7fffffffffffffff;
    }
    puVar3 = (undefined1 *)operator_new(uVar4);
    *param_1 = puVar3;
    param_1[1] = puVar3;
    param_1[2] = puVar3 + uVar4;
    if (param_2 != param_3) {
      puVar11 = param_3 + ~(ulong)param_2;
      if ((undefined1 *)-(long)puVar3 <= puVar11) {
        puVar11 = (undefined1 *)-(long)puVar3;
      }
      puVar11 = puVar11 + 1;
      puVar12 = puVar3;
      if ((undefined1 *)0x20 < puVar11) {
        puVar10 = (undefined8 *)(puVar3 + 0x10);
        uVar8 = 0x20;
        if (((ulong)puVar11 & 0x1f) != 0) {
          uVar8 = (ulong)puVar11 & 0x1f;
        }
        puVar6 = (undefined8 *)(param_2 + 0x10);
        lVar5 = (long)puVar11 - uVar8;
        param_2 = param_2 + lVar5;
        puVar12 = puVar3 + lVar5;
        do {
          puVar2 = puVar6 + -1;
          uVar13 = puVar6[-2];
          uVar15 = puVar6[1];
          uVar14 = *puVar6;
          lVar5 = lVar5 + -0x20;
          puVar6 = puVar6 + 4;
          puVar10[-1] = *puVar2;
          puVar10[-2] = uVar13;
          puVar10[1] = uVar15;
          *puVar10 = uVar14;
          puVar10 = puVar10 + 4;
        } while (lVar5 != 0);
      }
      do {
        if (puVar12 == (undefined1 *)0x0) {
LAB_009449c4:
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        puVar11 = param_2 + 1;
        puVar3 = puVar12 + 1;
        *puVar12 = *param_2;
        puVar12 = puVar3;
        param_2 = puVar11;
      } while (puVar11 != param_3);
    }
    param_1[1] = puVar3;
  }
  else {
    __n = param_1[1] - (long)__dest;
    if (__n < param_4) {
      puVar11 = param_2 + __n;
      memmove(__dest,param_2,__n);
      puVar3 = (undefined1 *)param_1[1];
      if (param_3 != puVar11) {
        puVar1 = param_3 + ~(ulong)puVar11;
        puVar12 = puVar1;
        if ((undefined1 *)-(long)puVar3 <= puVar1) {
          puVar12 = (undefined1 *)-(long)puVar3;
        }
        puVar12 = puVar12 + 1;
        puVar7 = puVar3;
        puVar9 = puVar3;
        if ((undefined1 *)0x20 < puVar12) {
          if ((undefined1 *)-(long)puVar3 <= puVar1) {
            puVar1 = (undefined1 *)-(long)puVar3;
          }
          if (((puVar3 <= puVar3 + (long)puVar1) && (puVar11 <= puVar11 + (long)puVar1)) &&
             (0x1f < (ulong)((long)puVar3 - (long)puVar11))) {
            puVar10 = (undefined8 *)(puVar11 + 0x10);
            uVar8 = 0x20;
            if (((ulong)puVar12 & 0x1f) != 0) {
              uVar8 = (ulong)puVar12 & 0x1f;
            }
            lVar5 = (long)puVar12 - uVar8;
            puVar11 = puVar11 + lVar5;
            puVar7 = puVar3 + lVar5;
            puVar6 = (undefined8 *)(puVar3 + 0x10);
            do {
              puVar2 = puVar10 + -1;
              uVar13 = puVar10[-2];
              uVar15 = puVar10[1];
              uVar14 = *puVar10;
              lVar5 = lVar5 + -0x20;
              puVar10 = puVar10 + 4;
              puVar6[-1] = *puVar2;
              puVar6[-2] = uVar13;
              puVar6[1] = uVar15;
              *puVar6 = uVar14;
              puVar6 = puVar6 + 4;
              puVar9 = puVar7;
            } while (lVar5 != 0);
          }
        }
        do {
          if (puVar9 == (undefined1 *)0x0) goto LAB_009449c4;
          puVar12 = puVar11 + 1;
          puVar3 = puVar7 + 1;
          *puVar9 = *puVar11;
          puVar7 = puVar3;
          puVar9 = puVar9 + 1;
          puVar11 = puVar12;
        } while (puVar12 != param_3);
      }
    }
    else {
      memmove(__dest,param_2,(long)param_3 - (long)param_2);
      puVar3 = (undefined1 *)((long)__dest + ((long)param_3 - (long)param_2));
      if (param_1[1] - 1 < (ulong)(param_1[1] - (long)puVar3)) goto LAB_009449d8;
    }
    param_1[1] = puVar3;
  }
  return;
}


// ===== 009449f0  FUN_009449f0 =====

undefined8 * FUN_009449f0(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  
  if (param_1 == 0) {
    uVar2 = FUN_004022fc();
    if ((uVar2 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,
                   "../../api/video/corruption_detection/frame_instrumentation_evaluation.cc",0x342,
                   "Cannot create FrameInstrumentationEvaluation with no observer.");
    }
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1 = (undefined8 *)operator_new(0x38);
    *puVar1 = &PTR_FUN_00d3e228;
    puVar1[1] = param_1;
    FUN_009452c4(puVar1 + 2);
    FUN_00945080(0x40400000,puVar1 + 5);
  }
  return puVar1;
}


// ===== 00944a74  FUN_00944a74 =====

void FUN_00944a74(void)

{
  return;
}


// ===== 00944a7c  FUN_00944a7c =====

void FUN_00944a7c(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00944a88  FUN_00944a88 =====

void FUN_00944a88(long param_1,undefined4 *param_2,ulong param_3,undefined4 param_4)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  void *pvVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined4 *puVar10;
  undefined8 *local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  void *local_b8;
  void *local_b0;
  void *local_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  if (*(long *)(param_2 + 8) == *(long *)(param_2 + 6)) {
    return;
  }
  thunk_FUN_00946410(param_1 + 0x10,*param_2);
  local_70 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00945414(&local_80,param_1 + 0x10,
               (ulong)(*(long *)(param_2 + 8) - *(long *)(param_2 + 6)) >> 3);
  puVar7 = local_80;
  if (local_80 == puStack_78) {
    uVar8 = FUN_004249b0();
    if ((uVar8 & 1) == 0) {
      FUN_00623bb0(&DAT_001f4e98,
                   "../../api/video/corruption_detection/frame_instrumentation_evaluation.cc",0x21b,
                   "Failed to get sample coordinates for frame.");
    }
  }
  else {
    uVar8 = (long)puStack_78 - (long)local_80;
    local_b0 = (void *)0x0;
    local_a8 = (void *)0x0;
    local_b8 = (void *)0x0;
    puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
    local_a0 = &DAT_aaaaaaaaaaaaaaaa;
    local_90 = &DAT_aaaaaaaaaaaaaaaa;
    if ((long)uVar8 < 0) {
      FUN_00944f5c();
LAB_00944f2c:
                    /* WARNING: Subroutine does not return */
      FUN_0061fd88("../../api/video/corruption_detection/frame_instrumentation_evaluation.cc",0x21,
                   "values.size() == samples.size()",&DAT_001fed8b,param_3);
    }
    local_b8 = operator_new(uVar8);
    pvVar5 = (void *)((long)local_b8 + uVar8);
    local_b0 = local_b8;
    local_a8 = pvVar5;
    memcpy(local_b8,puVar7,uVar8);
    local_b0 = pvVar5;
    uVar2 = FUN_007bf3cc(param_3);
    uVar3 = FUN_007bf3e8(param_3);
    FUN_0094595c(&local_a0,*(undefined8 *)(param_2 + 2),param_3,&local_b8,uVar2,uVar3);
    if (local_b8 != (void *)0x0) {
      uVar9 = (ulong)((long)local_b0 + (-0x10 - ((long)local_b0 << 0x3c))) >> 4;
      uVar8 = (ulong)(((long)local_b8 - (long)local_b0 << 0x3c) - ((long)local_b8 - (long)local_b0))
              >> 4;
      if (uVar9 <= uVar8) {
        uVar8 = uVar9;
      }
      pvVar5 = local_b0;
      if ((1 < uVar8) && ((((int)local_b8 - (int)local_b0 | -(int)local_b0) & 0xfU) == 0)) {
        uVar8 = uVar8 & 0xffffffffffffffe;
        pvVar5 = (void *)((long)local_b0 + uVar8 * -0x10);
        do {
          uVar8 = uVar8 - 2;
        } while (uVar8 != 0);
      }
      do {
        if (pvVar5 == local_b8) {
          local_b0 = local_b8;
          operator_delete(local_b8);
          goto LAB_00944c1c;
        }
        pvVar5 = (void *)((long)pvVar5 + -0x10);
      } while (pvVar5 != (void *)0x0);
      goto LAB_00944ed0;
    }
LAB_00944c1c:
    puVar7 = local_a0;
    if (local_a0 == puStack_98) {
      uVar8 = FUN_004249b0();
      if ((uVar8 & 1) == 0) {
        FUN_00623bb0(&DAT_001f4e98,
                     "../../api/video/corruption_detection/frame_instrumentation_evaluation.cc",
                     0x25b,"Failed to get sample values for frame");
      }
    }
    else {
      puVar4 = *(undefined8 **)(param_2 + 6);
      lVar1 = (long)*(undefined8 **)(param_2 + 8) - (long)puVar4;
      param_3 = lVar1 >> 3;
      puVar6 = (undefined8 *)0x0;
      if (lVar1 != 0) {
        puVar6 = puVar4;
      }
      if (param_3 != (long)puStack_98 - (long)local_a0 >> 4) goto LAB_00944f2c;
      local_d0 = (undefined8 *)0x0;
      local_c8 = (undefined8 *)0x0;
      local_c0 = (undefined8 *)0x0;
      if (*(undefined8 **)(param_2 + 8) == puVar4) {
LAB_00944d08:
        uVar8 = FUN_004249b0();
        if ((uVar8 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4e98,
                       "../../api/video/corruption_detection/frame_instrumentation_evaluation.cc",
                       0x293,"Failed to convert sample values to filtered samples");
        }
      }
      else {
        if (param_3 >> 0x3c != 0) {
          FUN_00944f74();
                    /* WARNING: Subroutine does not return */
          FUN_005d34a4("vector");
        }
        local_d0 = (undefined8 *)operator_new(lVar1 * 2);
        local_c0 = local_d0 + param_3 * 2;
        local_c8 = local_d0;
        puVar10 = (undefined4 *)(puVar7 + 8);
        do {
          local_60 = *puVar6;
          uStack_58 = *puVar10;
          if (local_c8 < local_c0) {
            if (local_c8 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
              std::__Cr::__libcpp_verbose_abort
                        ("%s",
                         "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                        );
            }
            puVar4 = local_c8 + 2;
            local_c8[1] = CONCAT44(uStack_54,uStack_58);
            *local_c8 = local_60;
          }
          else {
            puVar4 = (undefined8 *)FUN_00944f8c(&local_d0,&local_60);
          }
          param_3 = param_3 - 1;
          local_c8 = puVar4;
          puVar6 = puVar6 + 1;
          puVar10 = puVar10 + 4;
        } while (param_3 != 0);
        if (local_d0 == puVar4) goto LAB_00944d08;
        puVar7 = (undefined1 *)0x0;
        if ((long)puStack_98 - (long)local_a0 != 0) {
          puVar7 = local_a0;
        }
        FUN_00945108(param_1 + 0x28,local_d0,(long)puVar4 - (long)local_d0 >> 4,puVar7,
                     (long)puStack_98 - (long)local_a0 >> 4,param_2[4],param_2[5]);
        (**(code **)(**(long **)(param_1 + 8) + 0x10))(*(long **)(param_1 + 8),param_4);
      }
      if (local_d0 != (undefined8 *)0x0) {
        uVar9 = (ulong)((long)local_c8 + (-0x10 - ((long)local_c8 << 0x3c))) >> 4;
        uVar8 = (ulong)(((long)local_d0 - (long)local_c8 << 0x3c) -
                       ((long)local_d0 - (long)local_c8)) >> 4;
        if (uVar9 <= uVar8) {
          uVar8 = uVar9;
        }
        puVar6 = local_c8;
        if ((1 < uVar8) && ((((int)local_d0 - (int)local_c8 | -(int)local_c8) & 0xfU) == 0)) {
          uVar8 = uVar8 & 0xffffffffffffffe;
          puVar6 = local_c8 + uVar8 * -2;
          do {
            uVar8 = uVar8 - 2;
          } while (uVar8 != 0);
        }
        do {
          if (puVar6 == local_d0) {
            local_c8 = local_d0;
            operator_delete(local_d0);
            goto joined_r0x00944dcc;
          }
          puVar6 = puVar6 + -2;
        } while (puVar6 != (undefined8 *)0x0);
        goto LAB_00944ed0;
      }
    }
joined_r0x00944dcc:
    if (local_a0 != (undefined1 *)0x0) {
      uVar8 = (ulong)(((long)local_a0 - (long)puStack_98 << 0x3c) -
                     ((long)local_a0 - (long)puStack_98)) >> 4;
      if ((ulong)(puStack_98 + (-0x10 - ((long)puStack_98 << 0x3c))) >> 4 <= uVar8) {
        uVar8 = (ulong)(puStack_98 + (-0x10 - ((long)puStack_98 << 0x3c))) >> 4;
      }
      puVar7 = puStack_98;
      if ((1 < uVar8) && ((((int)local_a0 - (int)puStack_98 | -(int)puStack_98) & 0xfU) == 0)) {
        uVar8 = uVar8 & 0xffffffffffffffe;
        puVar7 = puStack_98 + uVar8 * -0x10;
        do {
          uVar8 = uVar8 - 2;
        } while (uVar8 != 0);
      }
      do {
        if (puVar7 == local_a0) {
          puStack_98 = local_a0;
          operator_delete(local_a0);
          goto LAB_00944e64;
        }
        puVar7 = puVar7 + -0x10;
      } while (puVar7 != (undefined1 *)0x0);
      goto LAB_00944ed0;
    }
  }
LAB_00944e64:
  if (local_80 == (undefined1 *)0x0) {
    return;
  }
  uVar8 = (ulong)(((long)local_80 - (long)puStack_78 << 0x3c) - ((long)local_80 - (long)puStack_78))
          >> 4;
  if ((ulong)(puStack_78 + (-0x10 - ((long)puStack_78 << 0x3c))) >> 4 <= uVar8) {
    uVar8 = (ulong)(puStack_78 + (-0x10 - ((long)puStack_78 << 0x3c))) >> 4;
  }
  puVar7 = puStack_78;
  if ((1 < uVar8) && ((((int)local_80 - (int)puStack_78 | -(int)puStack_78) & 0xfU) == 0)) {
    uVar8 = uVar8 & 0xffffffffffffffe;
    puVar7 = puStack_78 + uVar8 * -0x10;
    do {
      uVar8 = uVar8 - 2;
    } while (uVar8 != 0);
  }
  do {
    if (puVar7 == local_80) {
      puStack_78 = local_80;
      operator_delete(local_80);
      return;
    }
    puVar7 = puVar7 + -0x10;
  } while (puVar7 != (undefined1 *)0x0);
LAB_00944ed0:
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
            );
}


// ===== 00944f5c  FUN_00944f5c =====

void FUN_00944f5c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00944f74  FUN_00944f74 =====

void FUN_00944f74(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005d34a4("vector");
}


// ===== 00944f8c  FUN_00944f8c =====

undefined8 * FUN_00944f8c(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  size_t __n;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  void *__dest;
  undefined8 uVar7;
  
  puVar6 = (undefined8 *)(param_1[1] - *param_1);
  uVar1 = ((long)puVar6 >> 4) + 1;
  if (uVar1 >> 0x3c != 0) {
    FUN_00944f74();
LAB_0094507c:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  uVar4 = param_1[2] - *param_1;
  uVar5 = (long)uVar4 >> 3;
  if (uVar5 <= uVar1) {
    uVar5 = uVar1;
  }
  if (0x7fffffffffffffef < uVar4) {
    uVar5 = 0xfffffffffffffff;
  }
  if (uVar5 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (uVar5 >> 0x3c != 0) goto LAB_0094507c;
    pvVar2 = operator_new(uVar5 << 4);
    puVar6 = (undefined8 *)((long)pvVar2 + (long)puVar6);
  }
  if (puVar6 != (undefined8 *)0x0) {
    uVar7 = *param_2;
    puVar6[1] = param_2[1];
    *puVar6 = uVar7;
    __n = param_1[1] - *param_1;
    __dest = (void *)((long)puVar6 - __n);
    memcpy(__dest,(void *)*param_1,__n);
    pvVar3 = (void *)*param_1;
    *param_1 = (long)__dest;
    param_1[1] = (long)(puVar6 + 2);
    param_1[2] = (long)((long)pvVar2 + uVar5 * 0x10);
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    return puVar6 + 2;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00945080  FUN_00945080 =====

void FUN_00945080(float param_1,float *param_2)

{
  ulong uVar1;
  
  *param_2 = param_1;
  *(undefined1 *)(param_2 + 2) = 0;
  if (param_1 == 0.0 || param_1 < 0.0 != NAN(param_1)) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88((double)param_1,"../../video/corruption_detection/corruption_classifier.cc",0x1a,
                 "scale_factor > 0",&DAT_00228497,0,"The scale factor must be positive.");
  }
  uVar1 = FUN_00417e08();
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_00623bb0(&DAT_001f4e98,"../../video/corruption_detection/corruption_classifier.cc",0xd9,
               "Calculating corruption probability using scale factor.");
  return;
}


// ===== 00945108  FUN_00945108 =====

undefined1  [16] FUN_00945108(float *param_1)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  
  dVar1 = (double)FUN_00945190();
  if (param_1 == (float *)0x0) {
    param_1 = (float *)0x0;
  }
  else {
    if (*(char *)(param_1 + 2) == '\0') {
      dVar1 = dVar1 / (double)*param_1;
      dVar2 = 1.0;
      if (dVar1 == 1.0 || dVar1 < 1.0 != NAN(dVar1)) {
        dVar2 = dVar1;
      }
      goto LAB_00945180;
    }
    if (*(char *)(param_1 + 2) != '\x01') {
      param_1 = (float *)0x0;
    }
  }
  dVar1 = exp((dVar1 - (double)param_1[1]) * (double)-*param_1);
  dVar2 = 1.0 / (dVar1 + 1.0);
LAB_00945180:
  auVar3._8_8_ = 0;
  auVar3._0_8_ = dVar2;
  return auVar3;
}


// ===== 00945190  FUN_00945190 =====

undefined1  [16]
FUN_00945190(undefined8 param_1,long param_2,ulong param_3,long param_4,ulong param_5,int param_6,
            int param_7)

{
  int iVar1;
  double dVar2;
  ulong uVar3;
  int *piVar4;
  int *piVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  
  if (param_3 != param_5) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../video/corruption_detection/corruption_classifier.cc",0x4d,
                 "filtered_original_samples.size() == filtered_compressed_samples.size()",
                 &DAT_001fed8b,param_3,param_5,
                 "The original and compressed frame have different amounts of filtered samples.");
  }
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../video/corruption_detection/corruption_classifier.cc",0x50,
                 "filtered_original_samples.size() > 0",&DAT_001fbca2,0,0);
  }
  if ((int)param_3 < 1) {
    dVar9 = 0.0;
  }
  else {
    dVar6 = (double)param_7;
    dVar8 = (double)param_6;
    uVar3 = param_3 & 0x7fffffff;
    dVar9 = 0.0;
    piVar4 = (int *)(param_4 + 8);
    piVar5 = (int *)(param_2 + 8);
    do {
      iVar1 = *piVar5;
      if (iVar1 != *piVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_0061fd88("../../video/corruption_detection/corruption_classifier.cc",0x55,
                     "filtered_original_samples[i].plane == filtered_compressed_samples[i].plane",
                     &DAT_001fbedc);
      }
      dVar10 = ABS(*(double *)(piVar5 + -2) - *(double *)(piVar4 + -2));
      if (iVar1 == 1) {
        dVar2 = dVar6;
        if (dVar10 != dVar6 && dVar10 < dVar6 == (NAN(dVar10) || NAN(dVar6))) goto LAB_009451d4;
      }
      else if ((iVar1 == 0) &&
              (dVar2 = dVar8, dVar10 != dVar8 && dVar10 < dVar8 == (NAN(dVar10) || NAN(dVar8)))) {
LAB_009451d4:
        dVar9 = dVar9 + (dVar10 - dVar2) * (dVar10 - dVar2);
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
      piVar5 = piVar5 + 4;
    } while (uVar3 != 0);
  }
  auVar7._0_8_ = dVar9 / (double)(int)param_3;
  auVar7._8_8_ = 0;
  return auVar7;
}


// ===== 009452c4  FUN_009452c4 =====

void FUN_009452c4(long param_1)

{
  FUN_00946234(param_1,2);
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}


// ===== 009452fc  FUN_009452fc =====

void FUN_009452fc(undefined8 *param_1,long param_2,ulong param_3,int param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  if (param_5 < 1) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return;
  }
  if ((*(char *)(param_2 + 0xc) == '\x01') && (*(int *)(param_2 + 8) == param_4)) {
    puVar3 = (undefined4 *)FUN_009453e4(param_2 + 8);
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../video/corruption_detection/halton_frame_sampler.cc",0x3d,
                 "*rtp_timestamp_last_frame_sampled_ != rtp_timestamp",&DAT_00223e43,*puVar3,param_4
                );
  }
  if (((((param_3 & 1) == 0) && (0 < *(int *)(param_2 + 0x14))) &&
      (*(char *)(param_2 + 0xc) != '\0')) && ((uint)(param_4 - *(int *)(param_2 + 8)) < 90000)) {
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + -1;
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    return;
  }
  uVar2 = *(uint *)(param_2 + 0x10);
  *(int *)(param_2 + 8) = param_4;
  uVar1 = uVar2 & 7;
  if ((int)uVar2 < 1) {
    uVar1 = -(-uVar2 & 7);
  }
  *(uint *)(param_2 + 0x10) = uVar2 + 1;
  *(uint *)(param_2 + 0x14) = 0x20 - uVar1;
  *(undefined1 *)(param_2 + 0xc) = 1;
  FUN_00945414(param_2,param_5);
  return;
}


// ===== 009453e4  FUN_009453e4 =====

void FUN_009453e4(long param_1)

{
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/optional:1069: libc++ Hardening assertion this->has_value() failed: optional operator* called on a disengaged value\n"
            );
}


// ===== 00945414  FUN_00945414 =====

void FUN_00945414(undefined8 *param_1,undefined1 param_2 [16],undefined8 param_3,undefined8 param_4,
                 uint param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  void *pvVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 local_40;
  undefined8 uStack_38;
  
  uVar5 = (ulong)param_5;
  if ((int)param_5 < 1) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../video/corruption_detection/halton_frame_sampler.cc",0x4e,"num_samples >= 1",
                 &DAT_001fbedc,uVar5,1);
  }
  pvVar3 = operator_new(uVar5 * 0x10);
  *param_1 = pvVar3;
  param_1[1] = pvVar3;
  param_1[2] = (void *)((long)pvVar3 + uVar5 * 0x10);
  do {
    local_40 = FUN_009454f4(param_4);
    puVar1 = (undefined8 *)param_1[1];
    uStack_38 = param_3;
    if (puVar1 < (undefined8 *)param_1[2]) {
      if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::__Cr::__libcpp_verbose_abort
                  ("%s",
                   "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                  );
      }
      puVar4 = puVar1 + 2;
      puVar1[1] = param_3;
      *puVar1 = local_40;
    }
    else {
      puVar4 = (undefined8 *)FUN_00946140(param_1,&local_40);
    }
    uVar2 = (int)uVar5 - 1;
    uVar5 = (ulong)uVar2;
    param_1[1] = puVar4;
  } while (uVar2 != 0);
  return;
}


// ===== 009454f4  FUN_009454f4 =====

undefined1  [16] FUN_009454f4(void)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  ulong uVar5;
  ulong *local_40;
  ulong *puStack_38;
  undefined1 *local_30;
  
  puStack_38 = (ulong *)&DAT_aaaaaaaaaaaaaaaa;
  local_40 = (ulong *)&DAT_aaaaaaaaaaaaaaaa;
  local_30 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_009462e8(&local_40);
  if ((puStack_38 != local_40) && (8 < (ulong)((long)puStack_38 - (long)local_40))) {
    uVar5 = *local_40;
    if (local_40 != (ulong *)0x0) {
      uVar3 = (ulong)((long)puStack_38 + (-8 - ((long)puStack_38 << 0x3d))) >> 3;
      uVar2 = (ulong)(((long)local_40 - (long)puStack_38 << 0x3d) -
                     ((long)local_40 - (long)puStack_38)) >> 3;
      if (uVar3 <= uVar2) {
        uVar2 = uVar3;
      }
      puVar1 = puStack_38;
      if ((1 < uVar2) && ((((int)local_40 - (int)puStack_38 | -(int)puStack_38) & 7U) == 0)) {
        uVar2 = uVar2 & 0x1ffffffffffffffe;
        puVar1 = puStack_38 + -uVar2;
        do {
          uVar2 = uVar2 - 2;
        } while (uVar2 != 0);
      }
      while (puVar1 != local_40) {
        puVar1 = puVar1 + -1;
        if (puVar1 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:59: libc++ Hardening assertion __loc != nullptr failed: null pointer given to destroy_at\n"
                    );
        }
      }
      puStack_38 = local_40;
      operator_delete(local_40);
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar5;
    return auVar4;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__vector/vector.h:411: libc++ Hardening assertion __n < size() failed: vector[] index out of bounds\n"
            );
}


// ===== 009455ec  FUN_009455ec =====

undefined4 FUN_009455ec(long param_1)

{
  return *(undefined4 *)(param_1 + 4);
}


// ===== 009455f8  thunk_FUN_00946410 =====

void thunk_FUN_00946410(void)

{
  FUN_00946410();
  return;
}


// ===== 00945600  FUN_00945600 =====

undefined1  [16]
FUN_00945600(double param_1,long *param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  
  if (param_4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../video/corruption_detection/halton_frame_sampler.cc",0x6e,"row >= 0",
                 &DAT_001fbedc,param_4,0);
  }
  iVar5 = (**(code **)(*param_2 + 0x20))();
  if (iVar5 <= param_4) {
    uVar8 = (**(code **)(*param_2 + 0x20))(param_2,param_3);
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../video/corruption_detection/halton_frame_sampler.cc",0x6f,
                 "row < frame_sampler.height(channel)",&DAT_001fbedc,param_4,uVar8);
  }
  if (param_5 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../video/corruption_detection/halton_frame_sampler.cc",0x70,"column >= 0",
                 &DAT_001fbedc,param_5,0);
  }
  iVar5 = (**(code **)(*param_2 + 0x18))(param_2,param_3);
  if (param_5 < iVar5) {
    if (param_1 < 0.0 == NAN(param_1)) {
      if (param_1 == 0.0) {
        bVar4 = (**(code **)(*param_2 + 0x10))(param_2,param_3,param_5,param_4);
        dVar10 = (double)bVar4;
      }
      else {
        param_1 = param_1 * param_1;
        iVar5 = (int)((double)(long)SQRT(param_1 * DAT_001f5210) + -1.0);
        if (iVar5 < 4) {
          iVar5 = 3;
        }
        uVar9 = param_4 - iVar5 & (param_4 - iVar5 >> 0x1f ^ 0xffffffffU);
        iVar1 = param_4 + iVar5 + 1;
        iVar6 = (**(code **)(*param_2 + 0x20))(param_2,param_3);
        if (iVar1 <= iVar6) {
          iVar6 = param_4 + iVar5 + 1;
        }
        if ((int)uVar9 < iVar6) {
          dVar12 = 0.0;
          dVar13 = 0.0;
          uVar3 = param_5 - iVar5 & (param_5 - iVar5 >> 0x1f ^ 0xffffffffU);
          iVar5 = param_5 + iVar5 + 1;
          do {
            iVar6 = (**(code **)(*param_2 + 0x18))(param_2,param_3);
            if (iVar5 <= iVar6) {
              iVar6 = iVar5;
            }
            if ((int)uVar3 < iVar6) {
              iVar6 = param_5 - uVar3;
              uVar2 = uVar3;
              do {
                dVar10 = exp(-((double)(int)(param_4 - uVar9) * (double)(int)(param_4 - uVar9) +
                              (double)iVar6 * (double)iVar6) / (param_1 + param_1));
                bVar4 = (**(code **)(*param_2 + 0x10))(param_2,param_3,uVar2,uVar9);
                dVar12 = dVar12 + dVar10;
                uVar2 = uVar2 + 1;
                dVar13 = dVar13 + dVar10 * (double)bVar4;
                iVar7 = (**(code **)(*param_2 + 0x18))(param_2,param_3);
                iVar6 = iVar6 + -1;
                if (iVar5 <= iVar7) {
                  iVar7 = iVar5;
                }
              } while ((int)uVar2 < iVar7);
            }
            uVar9 = uVar9 + 1;
            iVar6 = (**(code **)(*param_2 + 0x20))(param_2,param_3);
            if (iVar1 <= iVar6) {
              iVar6 = iVar1;
            }
          } while ((int)uVar9 < iVar6);
          dVar13 = dVar13 / dVar12;
        }
        else {
          dVar13 = NAN;
        }
        dVar12 = 255.0;
        if (dVar13 < 255.0 != NAN(dVar13)) {
          dVar12 = dVar13;
        }
        dVar10 = 0.0;
        if (0.0 < dVar13) {
          dVar10 = dVar12;
        }
      }
      auVar11._8_8_ = 0;
      auVar11._0_8_ = dVar10;
      return auVar11;
    }
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88(param_1,0,"../../video/corruption_detection/halton_frame_sampler.cc",0x72,
                 "std_dev >= 0.0",&DAT_001fdd70);
  }
  uVar8 = (**(code **)(*param_2 + 0x18))(param_2,param_3);
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../video/corruption_detection/halton_frame_sampler.cc",0x71,
               "column < frame_sampler.width(channel)",&DAT_001fbedc,param_5,uVar8);
}


// ===== 0094595c  FUN_0094595c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0094595c(undefined8 *param_1,double param_2,long **param_3,long *param_4,int param_5,
                 int param_6)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 *puVar15;
  undefined8 uVar16;
  char *pcVar17;
  double *pdVar18;
  undefined8 *puVar20;
  int iVar21;
  int iVar22;
  double dVar23;
  double dVar24;
  long *local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  long *local_168;
  long *local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  long *local_78;
  long **pplVar14;
  double *pdVar19;
  
  FUN_007bf464(&local_160);
  if (local_160 == (long *)0x0) {
    uVar12 = FUN_004022fc();
    if ((uVar12 & 1) != 0) goto LAB_00945b48;
    pcVar17 = "The framebuffer must not be nullptr";
    uVar16 = 0x512;
  }
  else {
    (**(code **)(*local_160 + 8))();
    pdVar18 = (double *)*param_4;
    if (pdVar18 == (double *)param_4[1]) {
      uVar12 = FUN_004022fc();
      if ((uVar12 & 1) != 0) goto LAB_00945b48;
      pcVar17 = "There must be at least one coordinate provided";
      uVar16 = 0x532;
    }
    else {
      do {
        pdVar19 = pdVar18 + 2;
        dVar24 = *pdVar18;
        dVar23 = pdVar18[1];
        bVar3 = false;
        bVar4 = false;
        if (0.0 <= dVar23) {
          bVar3 = false;
          bVar4 = true;
          if (!NAN(dVar23)) {
            bVar3 = dVar23 < 1.0;
            bVar4 = false;
          }
        }
        if (((bVar3 == bVar4) || (dVar24 < 0.0)) || (dVar24 < 1.0 == NAN(dVar24))) {
          uVar12 = FUN_004022fc();
          if ((uVar12 & 1) == 0) {
            FUN_00623bb0(dVar23,dVar24,&DAT_00228580,
                         "../../video/corruption_detection/halton_frame_sampler.cc",0x562,
                         "The coordinates must be in [0,1): column=",", row=",&DAT_001d77c8);
          }
          goto LAB_00945b48;
        }
        pdVar18 = pdVar19;
      } while (pdVar19 != (double *)param_4[1]);
      if ((param_5 < 1) || (param_6 < 1)) {
        uVar12 = FUN_004022fc();
        if ((uVar12 & 1) == 0) {
          FUN_00623bb0(&DAT_001f4ea6,"../../video/corruption_detection/halton_frame_sampler.cc",
                       0x59a,"The width and height to scale to must be positive: width=",param_5,
                       ", height=",param_6,&DAT_001d77c8);
        }
        goto LAB_00945b48;
      }
      if (param_2 < 0.0) {
        uVar12 = FUN_004022fc();
        if ((uVar12 & 1) == 0) {
          FUN_00623bb0(param_2,&DAT_001f6471,
                       "../../video/corruption_detection/halton_frame_sampler.cc",0x5ca,
                       "The standard deviation for the Gaussian blur must not be negative: ",
                       &DAT_001d77c8);
        }
        goto LAB_00945b48;
      }
      iVar5 = FUN_007bf3cc(param_3);
      if ((param_5 <= iVar5) && (iVar5 = FUN_007bf3e8(param_3), param_6 <= iVar5)) {
        uStack_98 = _UNK_00228568;
        local_a0 = _DAT_00228560;
        uStack_88 = _UNK_00228578;
        uStack_90 = _DAT_00228570;
        uStack_d8 = _UNK_00228528;
        local_e0 = _DAT_00228520;
        uStack_c8 = _UNK_00228538;
        uStack_d0 = _DAT_00228530;
        uStack_b8 = _UNK_00228548;
        local_c0 = _DAT_00228540;
        uStack_a8 = _UNK_00228558;
        uStack_b0 = _DAT_00228550;
        uStack_118 = _UNK_002284e8;
        local_120 = _DAT_002284e0;
        uStack_108 = _UNK_002284f8;
        uStack_110 = _DAT_002284f0;
        uStack_f8 = _UNK_00228508;
        local_100 = _DAT_00228500;
        uStack_e8 = _UNK_00228518;
        uStack_f0 = _DAT_00228510;
        uStack_158 = _UNK_002284a8;
        local_160 = _DAT_002284a0;
        uStack_148 = _UNK_002284b8;
        uStack_150 = _DAT_002284b0;
        uStack_138 = _UNK_002284c8;
        local_140 = _DAT_002284c0;
        uStack_128 = _UNK_002284d8;
        uStack_130 = _DAT_002284d0;
        FUN_007bf070(&local_160,param_3);
        iVar5 = FUN_007bf3cc(param_3);
        if ((param_5 != iVar5) ||
           (iVar5 = FUN_007bf3e8(param_3), pplVar14 = param_3, param_6 != iVar5)) {
          FUN_007bf464(&local_178,param_3);
          iVar5 = (**(code **)(*local_178 + 0x28))();
          if (local_178 != (long *)0x0) {
            (**(code **)(*local_178 + 8))(local_178);
          }
          if (iVar5 == 8) {
            local_178 = (long *)&DAT_aaaaaaaaaaaaaaaa;
            FUN_007be3b0(&local_178,param_5,param_6);
            plVar13 = local_178;
            FUN_007bf464(&local_78,param_3);
            uVar16 = FUN_007bf604(local_78);
            uVar6 = FUN_007bf3cc(param_3);
            uVar7 = FUN_007bf3e8(param_3);
            FUN_007be6d4(plVar13,uVar16,0,0,uVar6,uVar7);
            if (local_78 != (long *)0x0) {
              (**(code **)(*local_78 + 8))();
            }
            local_78 = local_178;
            if (local_178 != (long *)0x0) {
              (**(code **)*local_178)();
            }
            FUN_007bf484(&local_160,&local_78);
            if (local_78 != (long *)0x0) {
              (**(code **)(*local_78 + 8))();
            }
            if (local_178 != (long *)0x0) {
              (**(code **)(*local_178 + 8))();
            }
          }
          else {
            local_178 = (long *)&DAT_aaaaaaaaaaaaaaaa;
            FUN_007bcfd8(&local_178,param_5,param_6);
            local_78 = (long *)&DAT_aaaaaaaaaaaaaaaa;
            FUN_007bf464(&local_168,param_3);
            (**(code **)(*local_168 + 0x40))(&local_78);
            if (local_168 != (long *)0x0) {
              (**(code **)(*local_168 + 8))();
            }
            plVar13 = local_78;
            if (local_78 == (long *)0x0) {
              uVar12 = FUN_004022fc();
              if ((uVar12 & 1) == 0) {
                FUN_00623bb0(&DAT_001f4e98,
                             "../../video/corruption_detection/halton_frame_sampler.cc",0x6ea,
                             "Unable to convert frame to I420 format.");
              }
              *param_1 = 0;
              param_1[1] = 0;
              param_1[2] = 0;
            }
            else {
              FUN_007bdc00(local_178,local_78);
              local_168 = local_178;
              if (local_178 != (long *)0x0) {
                (**(code **)*local_178)();
              }
              FUN_007bf484(&local_160,&local_168);
              if (local_168 != (long *)0x0) {
                (**(code **)(*local_168 + 8))();
              }
            }
            if (local_78 != (long *)0x0) {
              (**(code **)(*local_78 + 8))();
            }
            if (local_178 != (long *)0x0) {
              (**(code **)(*local_178 + 8))();
            }
            if (plVar13 == (long *)0x0) goto LAB_00946068;
          }
          pplVar14 = &local_160;
        }
        plVar13 = (long *)FUN_00946514(pplVar14);
        if (plVar13 == (long *)0x0) {
          uVar12 = FUN_004022fc();
          if ((uVar12 & 1) == 0) {
            FUN_007bf464(&local_178,param_3);
            (**(code **)(*local_178 + 0x28))();
            uVar16 = FUN_007bf6e4();
            FUN_00623bb0(&DAT_001f4ed3,"../../video/corruption_detection/halton_frame_sampler.cc",
                         0x732,"Unable to create frame sampler for buffer type ",uVar16);
            if (local_178 != (long *)0x0) {
              (**(code **)(*local_178 + 8))();
            }
          }
          *param_1 = 0;
          param_1[1] = 0;
          param_1[2] = 0;
        }
        else {
          iVar5 = (**(code **)(*plVar13 + 0x18))(plVar13,0);
          iVar8 = (**(code **)(*plVar13 + 0x18))(plVar13,1);
          iVar9 = (**(code **)(*plVar13 + 0x20))(plVar13,0);
          lVar1 = *param_4;
          lVar2 = param_4[1];
          param_1[1] = 0;
          param_1[2] = 0;
          *param_1 = 0;
          FUN_00946088(param_1,lVar2 - lVar1 >> 4);
          pdVar18 = (double *)*param_4;
          pdVar19 = (double *)param_4[1];
          if (pdVar18 != pdVar19) {
            do {
              iVar22 = (int)(pdVar18[1] * (double)(iVar8 + iVar5));
              iVar21 = (int)(*pdVar18 * (double)iVar9);
              iVar10 = (**(code **)(*plVar13 + 0x18))(plVar13,0);
              if (iVar22 < iVar10) {
                local_178 = (long *)FUN_00945600(param_2,plVar13,0,iVar21,iVar22);
                puVar20 = (undefined8 *)param_1[1];
                uStack_170 = 0;
                if ((undefined8 *)param_1[2] <= puVar20) goto LAB_00945f0c;
LAB_00945fec:
                if (puVar20 == (undefined8 *)0x0) {
LAB_00946074:
                    /* WARNING: Subroutine does not return */
                  std::__Cr::__libcpp_verbose_abort
                            ("%s",
                             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                            );
                }
                puVar20[1] = CONCAT44(uStack_16c,uStack_170);
                *puVar20 = local_178;
                param_1[1] = puVar20 + 2;
              }
              else {
                iVar10 = (**(code **)(*plVar13 + 0x20))(plVar13,1);
                iVar11 = (**(code **)(*plVar13 + 0x18))(plVar13,0);
                if (iVar21 < iVar10) {
                  local_178 = (long *)FUN_00945600(param_2,plVar13,1,iVar21,iVar22 - iVar11);
                  puVar20 = (undefined8 *)param_1[1];
                  uStack_170 = 1;
                  if (puVar20 < (undefined8 *)param_1[2]) goto LAB_00945fec;
LAB_00945f0c:
                  puVar15 = (undefined8 *)FUN_00944f8c(param_1,&local_178);
                }
                else {
                  iVar10 = (**(code **)(*plVar13 + 0x20))(plVar13,1);
                  local_178 = (long *)FUN_00945600(param_2,plVar13,2,iVar21 - iVar10,iVar22 - iVar11
                                                  );
                  puVar20 = (undefined8 *)param_1[1];
                  uStack_170 = 1;
                  if ((undefined8 *)param_1[2] <= puVar20) goto LAB_00945f0c;
                  if (puVar20 == (undefined8 *)0x0) goto LAB_00946074;
                  puVar15 = puVar20 + 2;
                  puVar20[1] = CONCAT44(uStack_16c,1);
                  *puVar20 = local_178;
                }
                param_1[1] = puVar15;
              }
              pdVar18 = pdVar18 + 2;
            } while (pdVar18 != pdVar19);
          }
          (**(code **)(*plVar13 + 8))(plVar13);
        }
LAB_00946068:
        FUN_007bf020(&local_160);
        return;
      }
      uVar12 = FUN_004022fc();
      if ((uVar12 & 1) != 0) goto LAB_00945b48;
      pcVar17 = "Upscaling causes corruption. Therefore, only down-scaling is permissible.";
      uVar16 = 0x5fa;
    }
  }
  FUN_00623bb0(&DAT_001f4e98,"../../video/corruption_detection/halton_frame_sampler.cc",uVar16,
               pcVar17);
LAB_00945b48:
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


// ===== 00946088  FUN_00946088 =====

undefined8 * FUN_00946088(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  void *pvVar2;
  undefined8 *puVar3;
  long *plVar4;
  void *pvVar5;
  size_t __n;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *__src;
  void *__dest;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  
  __src = (undefined8 *)*param_1;
  puVar3 = param_1;
  if ((ulong)(param_1[2] - (long)__src >> 4) < param_2) {
    if (param_2 >> 0x3c != 0) {
      auVar10 = FUN_00944f74();
      plVar4 = auVar10._0_8_;
      puVar3 = (undefined8 *)(plVar4[1] - *plVar4);
      uVar1 = ((long)puVar3 >> 4) + 1;
      if (uVar1 >> 0x3c != 0) {
        FUN_00944f5c();
LAB_00946230:
                    /* WARNING: Subroutine does not return */
        FUN_005d55a4();
      }
      uVar7 = plVar4[2] - *plVar4;
      uVar8 = (long)uVar7 >> 3;
      if (uVar8 <= uVar1) {
        uVar8 = uVar1;
      }
      if (0x7fffffffffffffef < uVar7) {
        uVar8 = 0xfffffffffffffff;
      }
      if (uVar8 == 0) {
        pvVar2 = (void *)0x0;
      }
      else {
        if (uVar8 >> 0x3c != 0) goto LAB_00946230;
        pvVar2 = operator_new(uVar8 << 4);
        puVar3 = (undefined8 *)((long)pvVar2 + (long)puVar3);
      }
      if (puVar3 != (undefined8 *)0x0) {
        uVar9 = *auVar10._8_8_;
        puVar3[1] = auVar10._8_8_[1];
        *puVar3 = uVar9;
        __n = plVar4[1] - *plVar4;
        __dest = (void *)((long)puVar3 - __n);
        memcpy(__dest,(void *)*plVar4,__n);
        pvVar5 = (void *)*plVar4;
        *plVar4 = (long)__dest;
        plVar4[1] = (long)(puVar3 + 2);
        plVar4[2] = (long)((long)pvVar2 + uVar8 * 0x10);
        if (pvVar5 != (void *)0x0) {
          operator_delete(pvVar5);
        }
        return puVar3 + 2;
      }
                    /* WARNING: Subroutine does not return */
      std::__Cr::__libcpp_verbose_abort
                ("%s",
                 "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                );
    }
    lVar6 = param_1[1];
    pvVar2 = operator_new(param_2 * 0x10);
    puVar3 = (undefined8 *)memcpy(pvVar2,__src,lVar6 - (long)__src);
    *param_1 = pvVar2;
    param_1[1] = (long)pvVar2 + (lVar6 - (long)__src);
    param_1[2] = (void *)((long)pvVar2 + param_2 * 0x10);
    if (__src != (undefined8 *)0x0) {
      operator_delete(__src);
      return __src;
    }
  }
  return puVar3;
}


// ===== 00946140  FUN_00946140 =====

undefined8 * FUN_00946140(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  size_t __n;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  void *__dest;
  undefined8 uVar7;
  
  puVar6 = (undefined8 *)(param_1[1] - *param_1);
  uVar1 = ((long)puVar6 >> 4) + 1;
  if (uVar1 >> 0x3c != 0) {
    FUN_00944f5c();
LAB_00946230:
                    /* WARNING: Subroutine does not return */
    FUN_005d55a4();
  }
  uVar4 = param_1[2] - *param_1;
  uVar5 = (long)uVar4 >> 3;
  if (uVar5 <= uVar1) {
    uVar5 = uVar1;
  }
  if (0x7fffffffffffffef < uVar4) {
    uVar5 = 0xfffffffffffffff;
  }
  if (uVar5 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (uVar5 >> 0x3c != 0) goto LAB_00946230;
    pvVar2 = operator_new(uVar5 << 4);
    puVar6 = (undefined8 *)((long)pvVar2 + (long)puVar6);
  }
  if (puVar6 != (undefined8 *)0x0) {
    uVar7 = *param_2;
    puVar6[1] = param_2[1];
    *puVar6 = uVar7;
    __n = param_1[1] - *param_1;
    __dest = (void *)((long)puVar6 - __n);
    memcpy(__dest,(void *)*param_1,__n);
    pvVar3 = (void *)*param_1;
    *param_1 = (long)__dest;
    param_1[1] = (long)(puVar6 + 2);
    param_1[2] = (long)((long)pvVar2 + uVar5 * 0x10);
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    return puVar6 + 2;
  }
                    /* WARNING: Subroutine does not return */
  std::__Cr::__libcpp_verbose_abort
            ("%s",
             "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
            );
}


// ===== 00946234  FUN_00946234 =====

void FUN_00946234(uint *param_1,uint param_2)

{
  *param_1 = param_2;
  param_1[1] = 0;
  if ((int)param_2 < 1) {
                    /* WARNING: Subroutine does not return */
    FUN_0061fd88("../../video/corruption_detection/halton_sequence.cc",0x2c,"num_dimensions_ >= 1",
                 &DAT_00207fe4,param_2,1,"num_dimensions must be >= 1. Will be set to 1.");
  }
  if (param_2 < 6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0061fd88("../../video/corruption_detection/halton_sequence.cc",0x2e,
               "num_dimensions_ <= kMaxDimensions",&DAT_0022859c,param_2,5,
               "num_dimensions must be <= ",5,". Will be set to ",5,&DAT_001ea377);
}


// ===== 009462e8  FUN_009462e8 =====

void FUN_009462e8(undefined8 *param_1,int *param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  double *pdVar6;
  double *pdVar7;
  uint uVar8;
  long lVar9;
  double dVar10;
  double local_38;
  
  iVar3 = *param_2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (iVar3 != 0) {
    if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_007dd938();
    }
    pdVar6 = (double *)operator_new((long)iVar3 * 8);
    lVar9 = 0;
    *param_1 = pdVar6;
    param_1[1] = pdVar6;
    param_1[2] = pdVar6 + iVar3;
    do {
      if (lVar9 == 5) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(0x5512,0x94640c);
        (*pcVar5)();
      }
      if (param_2[1] < 1) {
        local_38 = 0.0;
      }
      else {
        uVar2 = (&DAT_00228588)[lVar9];
        local_38 = 0.0;
        dVar10 = 1.0;
        uVar8 = param_2[1];
        do {
          dVar10 = dVar10 / (double)uVar2;
          uVar4 = 0;
          if (uVar2 != 0) {
            uVar4 = uVar8 / uVar2;
          }
          local_38 = local_38 + dVar10 * (double)(uVar8 - uVar4 * uVar2);
          bVar1 = uVar2 <= uVar8;
          uVar8 = uVar4;
        } while (bVar1);
      }
      if (pdVar6 < (double *)param_1[2]) {
        if (pdVar6 == (double *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::__Cr::__libcpp_verbose_abort
                    ("%s",
                     "gen/third_party/libc++/src/include/__memory/construct_at.h:36: libc++ Hardening assertion __location != nullptr failed: null pointer given to construct_at\n"
                    );
        }
        pdVar7 = pdVar6 + 1;
        *pdVar6 = local_38;
      }
      else {
        pdVar7 = (double *)FUN_00946420(param_1,&local_38);
      }
      iVar3 = *param_2;
      lVar9 = lVar9 + 1;
      param_1[1] = pdVar7;
      pdVar6 = pdVar7;
    } while (lVar9 < iVar3);
  }
  param_2[1] = param_2[1] + 1;
  return;
}


// ===== 00946410  FUN_00946410 =====

void FUN_00946410(long param_1,int param_2)

{
  if (-1 < param_2) {
    *(int *)(param_1 + 4) = param_2;
  }
  return;
}


// ===== 00946420  FUN_00946420 =====

undefined8 * FUN_00946420(long *param_1,undefined8 *param_2)

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
    FUN_007dd938();
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


// ===== 00946514  FUN_00946514 =====

undefined8 * FUN_00946514(undefined8 param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined **ppuVar4;
  long *local_30;
  long *local_28;
  
  FUN_007bf464(&local_28);
  if (local_28 == (long *)0x0) {
    return (undefined8 *)0x0;
  }
  (**(code **)(*local_28 + 8))();
  FUN_007bf464(&local_28,param_1);
  iVar1 = (**(code **)(*local_28 + 0x28))();
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 8))(local_28);
  }
  if (iVar1 - 1U < 2) {
    FUN_007bf464(&local_28,param_1);
    plVar2 = (long *)(**(code **)(*local_28 + 0x48))();
    if (plVar2 == (long *)0x0) {
      puVar3 = (undefined8 *)operator_new(0x10);
      ppuVar4 = &PTR_FUN_00d3e288;
LAB_009466f8:
      *puVar3 = ppuVar4;
      puVar3[1] = 0;
      local_30 = local_28;
      goto joined_r0x009466c4;
    }
    (**(code **)*plVar2)();
    puVar3 = (undefined8 *)operator_new(0x10);
    ppuVar4 = &PTR_FUN_00d3e288;
  }
  else {
    if (iVar1 != 8) {
      FUN_007bf464(&local_30,param_1);
      (**(code **)(*local_30 + 0x40))(&local_28);
      puVar3 = (undefined8 *)operator_new(0x10);
      plVar2 = local_28;
      local_28 = (long *)0x0;
      *puVar3 = &PTR_FUN_00d3e288;
      puVar3[1] = plVar2;
      if (plVar2 != (long *)0x0) {
        (**(code **)*plVar2)(plVar2);
        (**(code **)(*plVar2 + 8))(plVar2);
        if (local_28 != (long *)0x0) {
          (**(code **)(*local_28 + 8))();
        }
      }
      goto joined_r0x009466c4;
    }
    FUN_007bf464(&local_28,param_1);
    plVar2 = (long *)FUN_007bf604(local_28);
    if (plVar2 == (long *)0x0) {
      puVar3 = (undefined8 *)operator_new(0x10);
      ppuVar4 = &PTR_FUN_00d3e250;
      goto LAB_009466f8;
    }
    (**(code **)*plVar2)();
    puVar3 = (undefined8 *)operator_new(0x10);
    ppuVar4 = &PTR_FUN_00d3e250;
  }
  *puVar3 = ppuVar4;
  puVar3[1] = plVar2;
  (**(code **)*plVar2)(plVar2);
  (**(code **)(*plVar2 + 8))(plVar2);
  local_30 = local_28;
joined_r0x009466c4:
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 8))();
  }
  return puVar3;
}


// ===== 00946728  FUN_00946728 =====

void FUN_00946728(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d3e250;
  if ((long *)param_1[1] != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0094674c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1[1] + 8))();
    return;
  }
  return;
}


// ===== 00946754  FUN_00946754 =====

void FUN_00946754(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d3e250;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}


// ===== 009467a0  FUN_009467a0 =====

undefined1 FUN_009467a0(long param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  long lVar2;
  
  lVar2 = **(long **)(param_1 + 8);
  if (param_2 == 2) {
    lVar2 = (**(code **)(lVar2 + 0x98))();
    iVar1 = (**(code **)(**(long **)(param_1 + 8) + 0x88))(*(long **)(param_1 + 8));
    param_3 = iVar1 * param_4 + param_3 * 2 + 1;
  }
  else if (param_2 == 1) {
    lVar2 = (**(code **)(lVar2 + 0x98))();
    iVar1 = (**(code **)(**(long **)(param_1 + 8) + 0x88))(*(long **)(param_1 + 8));
    param_3 = iVar1 * param_4 + param_3 * 2;
  }
  else {
    lVar2 = (**(code **)(lVar2 + 0x90))();
    iVar1 = (**(code **)(**(long **)(param_1 + 8) + 0x80))(*(long **)(param_1 + 8));
    param_3 = param_3 + iVar1 * param_4;
  }
  return *(undefined1 *)(lVar2 + param_3);
}


// ===== 00946870  FUN_00946870 =====

void FUN_00946870(long param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_007bf844();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00946888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x30))();
  return;
}


// ===== 0094688c  FUN_0094688c =====

void FUN_0094688c(long param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_007bf874();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x009468a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x38))();
  return;
}


// ===== 009468a8  FUN_009468a8 =====

void FUN_009468a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d3e288;
  if ((long *)param_1[1] != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x009468cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1[1] + 8))();
    return;
  }
  return;
}


// ===== 009468d4  FUN_009468d4 =====

void FUN_009468d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00d3e288;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}


// ===== 00946920  FUN_00946920 =====

undefined1 FUN_00946920(long param_1,ulong param_2,int param_3,int param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = (param_2 & 0xffffffff) * 8;
  lVar3 = (**(code **)(**(long **)(param_1 + 8) + lVar1 + 0x98))();
  iVar2 = (**(code **)(**(long **)(param_1 + 8) + lVar1 + 0x80))(*(long **)(param_1 + 8));
  return *(undefined1 *)(lVar3 + (param_3 + iVar2 * param_4));
}


// ===== 00946990  FUN_00946990 =====

void FUN_00946990(long param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_007bf6fc();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x009469a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x30))();
  return;
}


// ===== 009469ac  FUN_009469ac =====

void FUN_009469ac(long param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_007bf72c();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x009469c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x38))();
  return;
}


// ===== 009469c8  FUN_009469c8 =====

/* WARNING: Removing unreachable block (ram,0x00946adc) */
/* WARNING: Removing unreachable block (ram,0x00946ae4) */
/* WARNING: Removing unreachable block (ram,0x00946b70) */
/* WARNING: Removing unreachable block (ram,0x00946b38) */
/* WARNING: Removing unreachable block (ram,0x00946b4c) */
/* WARNING: Type propagation algorithm not settling */

undefined1  [16] FUN_009469c8(long *param_1,int param_2)

{
  undefined ********ppppppppuVar1;
  undefined8 *******pppppppuVar2;
  undefined1 uVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 *puVar9;
  undefined1 auVar10 [16];
  undefined8 *******local_278;
  ulong uStack_270;
  byte bStack_261;
  undefined1 **local_260;
  undefined ********ppppppppuStack_258;
  undefined ***local_250;
  undefined ***pppuStack_248;
  undefined ***local_240;
  undefined ***local_238;
  undefined **local_230;
  undefined1 *puStack_228;
  undefined1 *puStack_220;
  undefined1 *puStack_218;
  undefined1 *local_210;
  undefined1 *puStack_208;
  undefined1 *puStack_200;
  undefined1 *puStack_1f8;
  undefined1 *local_1f0;
  undefined1 *puStack_1e8;
  undefined **local_1e0;
  undefined1 *puStack_1d8;
  undefined1 *local_1d0;
  undefined1 *puStack_1c8;
  undefined1 *puStack_1c0;
  undefined1 *puStack_1b8;
  undefined1 *local_1b0;
  undefined1 *puStack_1a8;
  undefined1 *local_1a0;
  undefined1 *local_198;
  undefined **local_190;
  undefined1 *puStack_188;
  undefined1 *local_180;
  undefined1 *puStack_178;
  undefined1 *puStack_170;
  undefined1 *puStack_168;
  undefined1 *local_160;
  undefined1 *puStack_158;
  undefined1 *local_150;
  undefined1 *local_148;
  undefined **local_140;
  undefined1 *puStack_138;
  undefined1 *local_130;
  undefined1 *puStack_128;
  undefined1 *puStack_120;
  undefined1 *puStack_118;
  undefined1 *local_110;
  undefined1 *puStack_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  undefined ********local_f0;
  undefined1 *puStack_e8;
  undefined8 local_e0;
  undefined1 *puStack_d8;
  undefined1 *puStack_d0;
  undefined1 *puStack_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  undefined1 *local_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  
  if (param_2 == 1) {
    (**(code **)(*param_1 + 0x10))(&local_f0,param_1,"WebRTC-VP8-Forced-Fallback-Encoder-v2",0x25);
    puVar9 = puStack_e8;
    if (-1 < (long)local_e0) {
      puVar9 = (undefined1 *)((ulong)local_e0 >> 0x38);
    }
    if (puVar9 < (undefined1 *)0x7) {
      uVar3 = false;
    }
    else {
      ppppppppuVar1 = local_f0;
      if (-1 < (long)local_e0) {
        ppppppppuVar1 = (undefined ********)&local_f0;
      }
      uVar3 = *(int *)ppppppppuVar1 == 0x62616e45 && *(int *)((long)ppppppppuVar1 + 3) == 0x64656c62
      ;
    }
    if ((long)local_e0 < 0) {
      operator_delete(local_f0);
    }
    if ((bool)uVar3) {
      local_e0 = &DAT_aaaaaaaaaaaaaaaa;
      puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
      local_f0 = (undefined ********)&DAT_aaaaaaaaaaaaaaaa;
      (**(code **)(*param_1 + 0x10))(&local_f0,param_1,"WebRTC-VP8-Forced-Fallback-Encoder-v2",0x25)
      ;
      if (local_e0._7_1_ != '\0') {
        local_140 = (undefined **)CONCAT44(local_140._4_4_,0xaaaaaaaa);
        local_190 = (undefined **)CONCAT44(local_190._4_4_,0xaaaaaaaa);
        local_1e0 = (undefined **)CONCAT44(local_1e0._4_4_,0xaaaaaaaa);
        iVar6 = sscanf((char *)&local_f0,"Enabled-%d,%d,%d",&local_140,&local_190,&local_1e0);
        if (iVar6 == 3) {
          puVar9 = (undefined1 *)((ulong)local_1e0 & 0xffffffff);
          if ((int)(uint)local_1e0 < 1) goto LAB_00946b50;
          uVar7 = (ulong)((uint)local_1e0 >> 8);
          bVar4 = true;
        }
        else {
LAB_00946b50:
          bVar4 = false;
          puVar9 = (undefined1 *)0x0;
          uVar7 = 0;
        }
        if (bVar4) {
          uVar8 = 1;
          goto LAB_00946ef4;
        }
      }
    }
  }
  (**(code **)(*param_1 + 0x10))(&local_f0,param_1,"WebRTC-Video-MinVideoBitrate",0x1c);
  puVar9 = puStack_e8;
  if (-1 < (long)local_e0) {
    puVar9 = (undefined1 *)((ulong)local_e0 >> 0x38);
  }
  if (puVar9 < (undefined1 *)0x7) {
    bVar4 = false;
  }
  else {
    ppppppppuVar1 = local_f0;
    if (-1 < (long)local_e0) {
      ppppppppuVar1 = (undefined ********)&local_f0;
    }
    bVar4 = *(int *)ppppppppuVar1 == 0x62616e45 && *(int *)((long)ppppppppuVar1 + 3) == 0x64656c62;
  }
  if ((long)local_e0 < 0) {
    operator_delete(local_f0);
  }
  if (!bVar4) {
    puVar9 = (undefined1 *)0x0;
    uVar8 = 0;
    uVar7 = 0;
    goto LAB_00946ef4;
  }
  puStack_98 = &DAT_aaaaaaaaaaaaaaaa;
  local_a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_88 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_90 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_78 = &DAT_aaaaaaaaaaaaaaaa;
  local_80 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_68 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_70 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00662484(&local_a0,"Enabled",7);
  puStack_d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_e0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_c8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_b8 = &DAT_aaaaaaaaaaaaaaaa;
  local_c0 = &DAT_aaaaaaaaaaaaaaaa;
  local_a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_b0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_e8 = &DAT_aaaaaaaaaaaaaaaa;
  local_f0 = (undefined ********)&DAT_aaaaaaaaaaaaaaaa;
  FUN_00661054(&local_f0,&DAT_001f0a65,2);
  local_f0 = (undefined ********)&PTR_FUN_00d280f0;
  local_b0 = (undefined1 *)((ulong)local_b0 & 0xffffffffffffff00);
  local_a8 = (undefined1 *)((ulong)local_a8 & 0xffffffffffffff00);
  puStack_128 = &DAT_aaaaaaaaaaaaaaaa;
  local_130 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_118 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_120 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_108 = &DAT_aaaaaaaaaaaaaaaa;
  local_110 = &DAT_aaaaaaaaaaaaaaaa;
  local_f8 = &DAT_aaaaaaaaaaaaaaaa;
  local_100 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_138 = &DAT_aaaaaaaaaaaaaaaa;
  local_140 = (undefined **)&DAT_aaaaaaaaaaaaaaaa;
  FUN_00661054(&local_140,"vp8_br",6);
  local_140 = &PTR_FUN_00d280f0;
  local_100 = (undefined1 *)((ulong)local_100 & 0xffffffffffffff00);
  local_f8 = (undefined1 *)((ulong)local_f8 & 0xffffffffffffff00);
  puStack_178 = &DAT_aaaaaaaaaaaaaaaa;
  local_180 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_168 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_170 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_158 = &DAT_aaaaaaaaaaaaaaaa;
  local_160 = &DAT_aaaaaaaaaaaaaaaa;
  local_148 = &DAT_aaaaaaaaaaaaaaaa;
  local_150 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_188 = &DAT_aaaaaaaaaaaaaaaa;
  local_190 = (undefined **)&DAT_aaaaaaaaaaaaaaaa;
  FUN_00661054(&local_190,"vp9_br",6);
  local_190 = &PTR_FUN_00d280f0;
  local_150 = (undefined1 *)((ulong)local_150 & 0xffffffffffffff00);
  local_148 = (undefined1 *)((ulong)local_148 & 0xffffffffffffff00);
  puStack_1c8 = &DAT_aaaaaaaaaaaaaaaa;
  local_1d0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1b8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1c0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1a8 = &DAT_aaaaaaaaaaaaaaaa;
  local_1b0 = &DAT_aaaaaaaaaaaaaaaa;
  local_198 = &DAT_aaaaaaaaaaaaaaaa;
  local_1a0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1d8 = &DAT_aaaaaaaaaaaaaaaa;
  local_1e0 = (undefined **)&DAT_aaaaaaaaaaaaaaaa;
  FUN_00661054(&local_1e0,"av1_br",6);
  local_1e0 = &PTR_FUN_00d280f0;
  local_1a0 = (undefined1 *)((ulong)local_1a0 & 0xffffffffffffff00);
  local_198 = (undefined1 *)((ulong)local_198 & 0xffffffffffffff00);
  puStack_1e8 = &DAT_aaaaaaaaaaaaaaaa;
  local_1f0 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_228 = &DAT_aaaaaaaaaaaaaaaa;
  local_230 = (undefined **)&DAT_aaaaaaaaaaaaaaaa;
  puStack_218 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_220 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_208 = &DAT_aaaaaaaaaaaaaaaa;
  local_210 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_1f8 = &DAT_aaaaaaaaaaaaaaaa;
  puStack_200 = &DAT_aaaaaaaaaaaaaaaa;
  FUN_00661054(&local_230,"h264_br",7);
  local_230 = &PTR_FUN_00d280f0;
  local_1f0 = (undefined1 *)((ulong)local_1f0 & 0xffffffffffffff00);
  puStack_1e8 = (undefined1 *)((ulong)puStack_1e8 & 0xffffffffffffff00);
  local_260 = &local_a0;
  ppppppppuStack_258 = (undefined ********)&local_f0;
  local_250 = &local_140;
  pppuStack_248 = &local_190;
  local_240 = &local_1e0;
  local_238 = &local_230;
  (**(code **)(*param_1 + 0x10))(&local_278,param_1,"WebRTC-Video-MinVideoBitrate",0x1c);
  pppppppuVar2 = local_278;
  if (-1 < (char)bStack_261) {
    uStack_270 = (ulong)bStack_261;
    pppppppuVar2 = &local_278;
  }
  FUN_00661cc0(&local_260,6,pppppppuVar2,uStack_270);
  if ((char)bStack_261 < '\0') {
    operator_delete(local_278);
  }
  if ((char)local_a8 == '\x01') {
    if (((((((ulong)local_f8 & 1) != 0) || (((ulong)local_148 & 1) != 0)) ||
         (((ulong)local_198 & 1) != 0)) || (((ulong)puStack_1e8 & 1) != 0)) &&
       (uVar7 = FUN_004022fc(), (uVar7 & 1) == 0)) {
      FUN_00623bb0(&DAT_001f4e98,"../../rtc_base/experiments/min_video_bitrate_experiment.cc",0x2fa,
                   "Self-contradictory experiment config.");
    }
    if (((ulong)local_a8 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005dc08c();
    }
    bVar4 = false;
    uVar8 = 1;
    uVar7 = (ulong)local_b0 >> 8;
    puVar9 = local_b0;
  }
  else {
    puVar9 = (undefined1 *)0x0;
    bVar4 = true;
    if (param_2 < 3) {
      if (param_2 != 0) {
        if (param_2 == 1) {
          uVar8 = (ulong)local_f8 & 0xff;
          puVar9 = local_100;
        }
        else {
          bVar5 = param_2 == 2;
LAB_00946e68:
          uVar8 = 0;
          uVar7 = 0;
          if (!bVar5) goto LAB_00946eb8;
          uVar8 = (ulong)local_148 & 0xff;
          puVar9 = local_150;
        }
        goto LAB_00946eb0;
      }
      puVar9 = (undefined1 *)0x0;
      uVar8 = 0;
      uVar7 = 0;
    }
    else {
      if (param_2 == 3) {
        uVar8 = (ulong)local_198 & 0xff;
        puVar9 = local_1a0;
      }
      else {
        if (param_2 != 4) {
          bVar5 = param_2 == 5;
          goto LAB_00946e68;
        }
        uVar8 = (ulong)puStack_1e8 & 0xff;
        puVar9 = local_1f0;
      }
LAB_00946eb0:
      uVar7 = (ulong)puVar9 >> 8;
    }
    bVar4 = false;
  }
LAB_00946eb8:
  FUN_006634ac(&local_230);
  FUN_006634ac(&local_1e0);
  FUN_006634ac(&local_190);
  FUN_006634ac(&local_140);
  FUN_006634ac(&local_f0);
  FUN_006634ac(&local_a0);
  if (bVar4) {
    puVar9 = (undefined1 *)0x0;
    uVar8 = 0;
  }
LAB_00946ef4:
  auVar10._8_8_ = uVar8;
  auVar10._0_8_ = (ulong)puVar9 & 0xff | uVar7 << 8;
  return auVar10;
}


// ===== 00946f28  FUN_00946f28 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00946f28(undefined8 *param_1,long *param_2,long *param_3)

{
  undefined8 ***pppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 **local_58;
  ulong uStack_50;
  byte bStack_41;
  undefined8 *local_28;
  
  *param_1 = &PTR_FUN_00d3e2c0;
  local_58 = (undefined8 **)&DAT_aaaaaaaaaaaaaaaa;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_58);
  pthread_mutex_init((pthread_mutex_t *)(param_1 + 1),(pthread_mutexattr_t *)&local_58);
  pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_58);
  param_1[6] = param_2;
  uVar3 = (**(code **)(*param_2 + 0x10))(param_2);
  pvVar4 = operator_new(0xe0);
  FUN_00949500(pvVar4,uVar3,param_3);
  param_1[7] = pvVar4;
  pvVar4 = operator_new(0x68);
  FUN_00947df0();
  uVar2 = _UNK_001f2608;
  uVar3 = _DAT_001f2600;
  param_1[8] = pvVar4;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  param_1[10] = uVar2;
  param_1[9] = uVar3;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  *(undefined1 *)((long)param_1 + 0xfc) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xb] = 10000000;
  *(undefined4 *)(param_1 + 0xe) = 0;
  FUN_00661054(param_1 + 0x20,"min_pacing",10);
  uVar2 = _UNK_001f1c28;
  uVar3 = _DAT_001f1c20;
  param_1[0x20] = &PTR_FUN_00d267f8;
  param_1[0x29] = uVar2;
  param_1[0x28] = uVar3;
  local_28 = param_1 + 0x20;
  (**(code **)(*param_3 + 0x10))(&local_58,param_3,"WebRTC-ZeroPlayoutDelay",0x17);
  pppuVar1 = (undefined8 ***)local_58;
  if (-1 < (char)bStack_41) {
    uStack_50 = (ulong)bStack_41;
    pppuVar1 = &local_58;
  }
  FUN_00661cc0(&local_28,1,pppuVar1,uStack_50);
  if ((char)bStack_41 < '\0') {
    operator_delete(local_58);
  }
  return;
}


// ===== 009470ac  FUN_009470ac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_009470ac(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  void *pvVar4;
  void *pvVar5;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 8));
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x10))();
  FUN_00949588(uVar1,uVar3);
  pvVar4 = operator_new(0x68);
  FUN_00947df0();
  pvVar5 = *(void **)(param_1 + 0x40);
  *(void **)(param_1 + 0x40) = pvVar4;
  if (pvVar5 != (void *)0x0) {
    FUN_00947e2c(pvVar5);
    operator_delete(pvVar5);
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  uVar1 = _DAT_001f2600;
  *(undefined8 *)(param_1 + 0x50) = _UNK_001f2608;
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  *(undefined4 *)(param_1 + 0x70) = 0;
  iVar2 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 8));
  return iVar2;
}


// ===== 00947144  FUN_00947144 =====

int FUN_00947144(long param_1,undefined8 param_2)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 8));
  *(undefined8 *)(param_1 + 0x48) = param_2;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 8));
  return iVar1;
}


// ===== 0094717c  FUN_0094717c =====

undefined8 FUN_0094717c(long param_1)

{
  undefined8 uVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 8));
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 8));
  return uVar1;
}


// ===== 009471b8  FUN_009471b8 =====

/* WARNING: Removing unreachable block (ram,0x009472e0) */
/* WARNING: Removing unreachable block (ram,0x00947278) */
/* WARNING: Removing unreachable block (ram,0x0094725c) */
/* WARNING: Removing unreachable block (ram,0x009472c4) */
/* WARNING: Removing unreachable block (ram,0x00947328) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_009471b8(long param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  undefined1 uStack_d9;
  char *local_d8;
  undefined8 local_d0;
  undefined1 *local_c8;
  char *local_c0;
  char **ppcStack_b8;
  void *local_b0;
  undefined8 uStack_a8;
  long local_a0;
  char **local_98;
  char *local_90;
  void **ppvStack_88;
  void *local_80;
  undefined8 uStack_78;
  long local_70;
  char **local_68;
  long local_58;
  long lStack_50;
  void *local_48;
  undefined8 uStack_40;
  
  iVar2 = pthread_mutex_lock((pthread_mutex_t *)(param_1 + 8));
  if (*(long *)(param_1 + 0x50) != param_2) {
    local_58 = *(long *)(param_1 + 0x58);
    lStack_50 = param_2;
    if ((local_58 < param_2) && (uVar3 = FUN_004249b0(iVar2), (uVar3 & 1) == 0)) {
      local_d8 = "../../modules/video_coding/timing/timing.cc";
      local_d0 = 0x14b;
      local_c8 = &uStack_d9;
      ppcStack_b8 = &local_d8;
      local_c0 = "Playout delays set incorrectly: min playout delay (";
      FUN_005f3380(&local_80,&lStack_50);
      local_98 = &local_c0;
      uStack_a8 = uStack_78;
      local_b0 = local_80;
      local_a0 = local_70;
      ppvStack_88 = &local_b0;
      local_90 = ") > max playout delay (";
      FUN_005f3380(&local_48,&local_58);
      local_68 = &local_90;
      uStack_78 = uStack_40;
      local_80 = local_48;
                    /* WARNING: Load size is inaccurate */
      puVar1 = *(undefined8 **)((long)ppvStack_88[3] + 8);
      FUN_00623bb0("\r\t\n\t\n\t",*puVar1,*(undefined4 *)(puVar1 + 1),*ppvStack_88[3],ppvStack_88,
                   local_90,&local_80,
                   "). This is undefined behaviour. Application writers should ensure that the min delay is always less than or equals max delay. If trying to use the playout delay header extensions described in https://webrtc.googlesource.com/src/+/refs/heads/main/docs/native-code/rtp-hdrext/playout-delay/, be careful that a playout delay hint or A/V sync settings may have caused this conflict."
                  );
      if (local_a0 < 0) {
        operator_delete(local_b0);
      }
    }
    *(long *)(param_1 + 0x50) = param_2;
  }
  iVar2 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 8));
  return iVar2;
}


// ===== 00947374  FUN_00947374 =====

int FUN_00947374(long param_1,undefined8 *param_2)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 8));
  *(undefined8 *)(param_1 + 0x50) = *param_2;
  *(undefined8 *)(param_1 + 0x58) = param_2[1];
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 8));
  return iVar1;
}


// ===== 009473b8  FUN_009473b8 =====

int FUN_009473b8(long param_1,long param_2)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 8));
  if ((param_2 != *(long *)(param_1 + 0x60)) &&
     (*(long *)(param_1 + 0x60) = param_2, *(long *)(param_1 + 0x68) == 0)) {
    *(long *)(param_1 + 0x68) = param_2;
  }
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 8));
  return iVar1;
}


// ===== 00947408  FUN_00947408 =====

int FUN_00947408(long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 8));
  iVar1 = FUN_00948070(*(undefined8 *)(param_1 + 0x40));
  lVar3 = *(long *)(param_1 + 0x60);
  lVar5 = 0x7fffffffffffffff;
  if (lVar3 != 0x7fffffffffffffff) {
    if (lVar3 != -0x8000000000000000) {
      lVar3 = lVar3 + (long)iVar1 * 1000;
    }
    if (lVar3 == 0x7fffffffffffffff) {
      lVar5 = 0x7fffffffffffffff;
    }
    else {
      lVar7 = *(long *)(param_1 + 0x48);
      lVar5 = 0x7fffffffffffffff;
      if (lVar7 != 0x7fffffffffffffff) {
        lVar5 = -0x8000000000000000;
        if (lVar7 != -0x8000000000000000 && lVar3 != -0x8000000000000000) {
          lVar5 = lVar7 + lVar3;
        }
      }
    }
  }
  lVar3 = *(long *)(param_1 + 0x50);
  if (*(long *)(param_1 + 0x50) <= lVar5) {
    lVar3 = lVar5;
  }
  if ((param_3 == 0x7fffffffffffffff) || (param_2 == -0x8000000000000000)) {
    FUN_00948070(*(undefined8 *)(param_1 + 0x40));
LAB_009475b4:
    lVar2 = 0x7fffffffffffffff;
    if (lVar3 != 0x7fffffffffffffff) {
LAB_009475c8:
      *(long *)(param_1 + 0x68) = lVar3;
      goto LAB_009475cc;
    }
  }
  else {
    iVar1 = FUN_00948070(*(undefined8 *)(param_1 + 0x40));
    if ((param_3 == -0x8000000000000000) || (param_2 == 0x7fffffffffffffff)) {
LAB_009474ec:
      param_3 = -0x8000000000000000;
    }
    else {
      param_3 = param_3 - param_2;
      if (param_3 == 0x7fffffffffffffff) goto LAB_009475b4;
      if (param_3 == -0x8000000000000000) goto LAB_009474ec;
      param_3 = param_3 + (long)iVar1 * 1000;
    }
    if ((param_3 == 0x7fffffffffffffff) ||
       (lVar5 = *(long *)(param_1 + 0x48), lVar5 == 0x7fffffffffffffff)) goto LAB_009475b4;
    lVar7 = -0x8000000000000000;
    if (((param_3 == -0x8000000000000000) ||
        ((lVar5 == -0x8000000000000000 || (lVar7 = lVar5 + param_3, lVar7 < 0)))) &&
       (uVar6 = (ulong)-lVar7 / 1000, uVar4 = -(ulong)(500 < (ulong)-lVar7 % 1000),
       uVar6 != uVar4 && !SBORROW8(uVar6,uVar4))) goto LAB_009475cc;
    lVar5 = *(long *)(param_1 + 0x68);
    if ((lVar7 == 0x7fffffffffffffff) || (lVar5 == 0x7fffffffffffffff)) goto LAB_009475b4;
    if (((lVar7 != -0x8000000000000000) && (lVar5 != -0x8000000000000000)) &&
       (lVar3 < lVar5 + lVar7)) goto LAB_009475c8;
    lVar2 = -0x8000000000000000;
    if (lVar5 != -0x8000000000000000 && lVar7 != -0x8000000000000000) {
      lVar2 = lVar5 + lVar7;
    }
  }
  *(long *)(param_1 + 0x68) = lVar2;
LAB_009475cc:
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 8));
  return iVar1;
}


// ===== 009475f4  FUN_009475f4 =====

int FUN_009475f4(long param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 8));
  uVar2 = param_2 / 1000;
  uVar3 = param_3 / 1000;
  if (499 < param_2 % 1000) {
    uVar2 = uVar2 + 1;
  }
  if ((param_2 & 0x8000000000000000) != 0) {
    uVar2 = -(-param_2 / 1000) - (ulong)(500 < -param_2 % 1000);
  }
  if (499 < param_3 % 1000) {
    uVar3 = uVar3 + 1;
  }
  if ((param_3 & 0x8000000000000000) != 0) {
    uVar3 = -(-param_3 / 1000) - (ulong)(500 < -param_3 % 1000);
  }
  FUN_00947e6c(*(undefined8 *)(param_1 + 0x40),uVar2,uVar3);
  *(long *)(param_1 + 0xf0) = *(long *)(param_1 + 0xf0) + 1;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 8));
  return iVar1;
}


// ===== 009476e8  FUN_009476e8 =====

int FUN_009476e8(long param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 8));
  FUN_009496c8(*(undefined8 *)(param_1 + 0x38),param_3,param_2);
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 8));
  return iVar1;
}


