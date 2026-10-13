// ===== 001018c0  _FINI_1 =====

void _FINI_1(void)

{
  __cxa_finalize(&PTR_LOOP_001091e0);
  return;
}


// ===== 001018d0  FUN_001018d0 =====

void FUN_001018d0(void)

{
  return;
}


// ===== 001018d8  _FINI_0 =====

void _FINI_0(void)

{
  FUN_001018d0();
  return;
}


// ===== 001018e0  FUN_001018e0 =====

void FUN_001018e0(code *UNRECOVERED_JUMPTABLE)

{
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001018ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}


// ===== 001018f4  FUN_001018f4 =====

void FUN_001018f4(undefined8 param_1)

{
  __cxa_atexit(FUN_001018e0,param_1,&PTR_LOOP_001091e0);
  return;
}


// ===== 00101910  FUN_00101910 =====

void FUN_00101910(long *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x720))();
  if (cVar1 != '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00101970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x70))(param_1,param_2,param_3);
  return;
}


// ===== 00101974  JNI_OnLoad =====

undefined4 JNI_OnLoad(long *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  undefined4 uVar5;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar5 = 0x10006;
  local_40 = (long *)0x0;
  iVar2 = (**(code **)(*param_1 + 0x30))(param_1,&local_40,0x10006);
  if (iVar2 == 0) {
    lVar3 = (**(code **)(*local_40 + 0x30))(local_40,"java/lang/RuntimeException");
    if (lVar3 == 0) {
      __android_log_print(6,"libnative-filters","could not find RuntimeException class");
    }
    else {
      DAT_0010d4a0 = (**(code **)(*local_40 + 0xa8))(local_40,lVar3);
      iVar2 = FUN_00101a90(local_40);
      if (iVar2 == -1) {
        pcVar4 = "Could not register NativeBlurFilter methods";
      }
      else {
        iVar2 = FUN_001021ac(local_40);
        if (iVar2 != -1) goto LAB_001019c0;
        pcVar4 = "Could not register NativeRoundingFilter methods";
      }
      FUN_00101910(local_40,DAT_0010d4a0,pcVar4);
    }
  }
  uVar5 = 0xffffffff;
LAB_001019c0:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00101a90  FUN_00101a90 =====

undefined4 FUN_00101a90(long *param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = (**(code **)(*param_1 + 0x30))(param_1,"java/lang/RuntimeException");
  if (lVar2 != 0) {
    DAT_0010d4a8 = (**(code **)(*param_1 + 0xa8))(param_1,lVar2);
    lVar2 = (**(code **)(*param_1 + 0x30))
                      (param_1,"com/facebook/imagepipeline/nativecode/NativeBlurFilter");
    if (lVar2 != 0) {
      iVar1 = (**(code **)(*param_1 + 0x6b8))
                        (param_1,lVar2,&PTR_s_nativeIterativeBoxBlur_0010d428,1);
      if (iVar1 == 0) {
        return 0x10006;
      }
      return 0xffffffff;
    }
  }
  return 0xffffffff;
}


// ===== 00101b34  FUN_00101b34 =====

void FUN_00101b34(long *param_1,undefined8 param_2,undefined8 param_3,int param_4,uint param_5)

{
  long lVar1;
  int iVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  int iVar11;
  void *__s;
  undefined4 *__src;
  undefined4 *puVar12;
  char *pcVar13;
  code *UNRECOVERED_JUMPTABLE;
  long lVar14;
  long lVar15;
  int iVar16;
  undefined1 *puVar17;
  int iVar18;
  int iVar19;
  long lVar20;
  int iVar21;
  long lVar22;
  ulong uVar23;
  undefined4 *puVar24;
  int iVar25;
  long lVar26;
  ulong uVar27;
  int iVar28;
  int iVar29;
  undefined8 uVar30;
  int iVar31;
  int iVar32;
  undefined8 uVar33;
  int iVar34;
  int iVar35;
  undefined1 auVar36 [16];
  long local_88;
  uint local_7c;
  uint local_78;
  int local_70;
  long local_68;
  
  lVar8 = tpidr_el0;
  local_68 = *(long *)(lVar8 + 0x28);
  if (param_4 - 0x10001U < 0xffff0000) {
    auVar36 = (**(code **)(*param_1 + 0x720))(param_1);
    auVar10._8_8_ = DAT_0010d4a8;
    auVar10._0_8_ = auVar36._0_8_;
    if ((auVar36 & (undefined1  [16])0xff) == (undefined1  [16])0x0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x70);
      if (*(long *)(lVar8 + 0x28) == local_68) {
        pcVar13 = "BlurFilter_iterativeBoxBlur: Iterations argument out of bounds";
LAB_00101c04:
                    /* WARNING: Could not recover jumptable at 0x00101c24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(param_1,DAT_0010d4a8,pcVar13);
        return;
      }
      goto LAB_001021a8;
    }
  }
  else if (param_5 - 0x10001 < 0xffff0000) {
    auVar36 = (**(code **)(*param_1 + 0x720))(param_1);
    auVar10._8_8_ = DAT_0010d4a8;
    auVar10._0_8_ = auVar36._0_8_;
    if ((auVar36 & (undefined1  [16])0xff) == (undefined1  [16])0x0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x70);
      if (*(long *)(lVar8 + 0x28) == local_68) {
        pcVar13 = "BlurFilter_iterativeBoxBlur: Blur radius argument out of bounds";
        goto LAB_00101c04;
      }
      goto LAB_001021a8;
    }
  }
  else {
    iVar11 = AndroidBitmap_getInfo(param_1,param_3,&local_7c);
    if (iVar11 == 0) {
      if (local_70 == 1) {
        lVar14 = (long)(int)local_7c;
        local_88 = 0;
        if (((int)local_7c < 0x10001) && ((int)local_78 < 0x10001)) {
          iVar11 = AndroidBitmap_lockPixels(param_1,param_3,&local_88);
          if (iVar11 == 0) {
            __s = malloc((ulong)(param_5 << 9 | 0x100));
            if (__s == (void *)0x0) {
              AndroidBitmap_unlockPixels(param_1,param_3);
              auVar36 = (**(code **)(*param_1 + 0x720))(param_1);
              if ((auVar36 & (undefined1  [16])0xff) == (undefined1  [16])0x0) {
                pcVar13 = "BlurFilter_iterativeBoxBlur: Failed to allocate memory: div";
                goto LAB_00101d24;
              }
            }
            else {
              iVar7 = -param_5;
              uVar6 = param_5 * 2;
              memset(__s,0,(ulong)(param_5 + 1));
              iVar11 = 1;
              lVar26 = (ulong)param_5 + 1;
              do {
                memset((void *)((long)__s + lVar26),iVar11,(ulong)(uVar6 | 1));
                iVar11 = iVar11 + 1;
                lVar26 = lVar26 + (ulong)(uVar6 | 1);
              } while (iVar11 != 0x100);
              uVar9 = local_7c;
              if ((int)local_7c <= (int)local_78) {
                uVar9 = local_78;
              }
              __src = (undefined4 *)
                      malloc(-(ulong)(uVar9 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar9 << 2);
              if (__src == (undefined4 *)0x0) {
                free(__s);
                AndroidBitmap_unlockPixels(param_1,param_3);
                auVar36 = (**(code **)(*param_1 + 0x720))(param_1);
                if ((auVar36 & (undefined1  [16])0xff) == (undefined1  [16])0x0) {
                  pcVar13 = 
                  "BlurFilter_iterativeBoxBlur: Failed to allocate memory: tempRowOrColumn";
                  goto LAB_00101d24;
                }
              }
              else {
                if (0 < param_4) {
                  iVar11 = 0;
                  lVar26 = (long)(int)(local_7c * param_5);
                  do {
                    if (0 < (int)local_78) {
                      iVar25 = 0;
                      uVar27 = 0;
                      iVar19 = iVar7;
                      do {
                        lVar15 = uVar27 * lVar14;
                        uVar27 = uVar27 + 1;
                        if (iVar7 < (int)(local_7c + param_5)) {
                          uVar30 = 0;
                          uVar33 = 0;
                          iVar29 = local_7c * (int)uVar27 + -1;
                          puVar17 = (undefined1 *)
                                    ((long)__src + (long)iVar7 * 4 + (ulong)param_5 * -4 + 3);
                          lVar22 = (long)iVar7;
                          iVar18 = param_5 * -3;
                          iVar21 = local_7c + uVar6;
                          iVar16 = iVar19;
                          do {
                            iVar28 = iVar16;
                            if (iVar29 <= iVar16) {
                              iVar28 = iVar29;
                            }
                            iVar35 = (int)lVar15;
                            iVar31 = iVar35;
                            if (-1 < lVar22) {
                              iVar31 = iVar28;
                            }
                            uVar9 = *(uint *)(local_88 + (long)iVar31 * 4);
                            iVar28 = (int)uVar30 + (uVar9 & 0xff);
                            iVar31 = (int)((ulong)uVar30 >> 0x20) + (uVar9 >> 8 & 0xff);
                            uVar30 = CONCAT44(iVar31,iVar28);
                            iVar32 = (int)uVar33 + (uVar9 >> 0x10 & 0xff);
                            iVar34 = (int)((ulong)uVar33 >> 0x20) + (uVar9 >> 0x18);
                            uVar33 = CONCAT44(iVar34,iVar32);
                            if ((long)(ulong)param_5 <= lVar22) {
                              uVar3 = *(undefined1 *)((long)__s + (long)iVar31);
                              uVar4 = *(undefined1 *)((long)__s + (long)iVar32);
                              puVar17[-3] = *(undefined1 *)((long)__s + (long)iVar28);
                              uVar5 = *(undefined1 *)((long)__s + (long)iVar34);
                              puVar17[-2] = uVar3;
                              iVar2 = iVar25 + iVar18;
                              if (iVar29 <= iVar25 + iVar18) {
                                iVar2 = iVar29;
                              }
                              puVar17[-1] = uVar4;
                              *puVar17 = uVar5;
                              if (-1 < iVar18) {
                                iVar35 = iVar2;
                              }
                              uVar9 = *(uint *)(local_88 + (long)iVar35 * 4);
                              uVar30 = CONCAT44(iVar31 - (uVar9 >> 8 & 0xff),iVar28 - (uVar9 & 0xff)
                                               );
                              uVar33 = CONCAT44(iVar34 - (uVar9 >> 0x18),
                                                iVar32 - (uVar9 >> 0x10 & 0xff));
                            }
                            lVar22 = lVar22 + 1;
                            iVar21 = iVar21 + -1;
                            iVar16 = iVar16 + 1;
                            iVar18 = iVar18 + 1;
                            puVar17 = puVar17 + 4;
                          } while (iVar21 != 0);
                        }
                        memcpy((void *)(local_88 + lVar15 * 4),__src,lVar14 * 4);
                        iVar19 = iVar19 + local_7c;
                        iVar25 = iVar25 + local_7c;
                      } while (uVar27 != local_78);
                    }
                    if (0 < (int)local_7c) {
                      lVar15 = 0;
                      uVar27 = 0;
                      iVar16 = local_7c * param_5 * -3;
                      iVar25 = local_7c - local_7c * param_5;
                      iVar19 = -(local_7c * param_5);
                      do {
                        lVar22 = uVar27 + (long)(int)((local_78 - 1) * local_7c);
                        lVar20 = (long)iVar19;
                        lVar1 = lVar22 + lVar26;
                        if ((long)(uVar27 - lVar26) <= lVar1) {
                          uVar30 = 0;
                          uVar33 = 0;
                          iVar18 = 0;
                          puVar12 = __src;
                          do {
                            iVar21 = (int)lVar22;
                            iVar29 = (int)lVar20;
                            if (iVar21 <= (int)lVar20) {
                              iVar29 = iVar21;
                            }
                            iVar28 = (int)uVar27;
                            if ((long)uVar27 <= lVar20) {
                              iVar28 = iVar29;
                            }
                            uVar9 = *(uint *)(local_88 + (long)iVar28 * 4);
                            iVar29 = (int)uVar30 + (uVar9 & 0xff);
                            iVar28 = (int)((ulong)uVar30 >> 0x20) + (uVar9 >> 8 & 0xff);
                            uVar30 = CONCAT44(iVar28,iVar29);
                            iVar31 = (int)uVar33 + (uVar9 >> 0x10 & 0xff);
                            iVar35 = (int)((ulong)uVar33 >> 0x20) + (uVar9 >> 0x18);
                            uVar33 = CONCAT44(iVar35,iVar31);
                            if ((long)uVar27 <= lVar20 - lVar26) {
                              uVar3 = *(undefined1 *)((long)__s + (long)iVar28);
                              *(undefined1 *)puVar12 = *(undefined1 *)((long)__s + (long)iVar29);
                              uVar4 = *(undefined1 *)((long)__s + (long)iVar31);
                              uVar5 = *(undefined1 *)((long)__s + (long)iVar35);
                              *(undefined1 *)((long)puVar12 + 1) = uVar3;
                              iVar32 = iVar16 + iVar18;
                              if (iVar21 <= iVar16 + iVar18) {
                                iVar32 = iVar21;
                              }
                              *(undefined1 *)((long)puVar12 + 2) = uVar4;
                              *(undefined1 *)((long)puVar12 + 3) = uVar5;
                              iVar21 = (int)uVar27;
                              if ((long)uVar27 <= lVar20 - (int)(local_7c * uVar6)) {
                                iVar21 = iVar32;
                              }
                              puVar12 = puVar12 + 1;
                              uVar9 = *(uint *)(local_88 + (long)iVar21 * 4);
                              uVar30 = CONCAT44(iVar28 - (uVar9 >> 8 & 0xff),iVar29 - (uVar9 & 0xff)
                                               );
                              uVar33 = CONCAT44(iVar35 - (uVar9 >> 0x18),
                                                iVar31 - (uVar9 >> 0x10 & 0xff));
                            }
                            iVar29 = iVar25 + iVar18;
                            lVar20 = lVar20 + lVar14;
                            iVar18 = iVar18 + local_7c;
                          } while (iVar29 <= lVar1);
                        }
                        if (0 < (int)local_78) {
                          puVar12 = (undefined4 *)(local_88 + lVar15);
                          uVar23 = (ulong)local_78;
                          puVar24 = __src;
                          do {
                            uVar23 = uVar23 - 1;
                            *puVar12 = *puVar24;
                            puVar12 = puVar12 + lVar14;
                            puVar24 = puVar24 + 1;
                          } while (uVar23 != 0);
                        }
                        uVar27 = uVar27 + 1;
                        iVar19 = iVar19 + 1;
                        iVar25 = iVar25 + 1;
                        iVar16 = iVar16 + 1;
                        lVar15 = lVar15 + 4;
                      } while (uVar27 != local_7c);
                    }
                    iVar11 = iVar11 + 1;
                  } while (iVar11 != param_4);
                }
                free(__src);
                free(__s);
                auVar36 = AndroidBitmap_unlockPixels(param_1,param_3);
                if ((auVar36._0_4_ != 0) &&
                   (auVar36 = (**(code **)(*param_1 + 0x720))(param_1),
                   (auVar36 & (undefined1  [16])0xff) == (undefined1  [16])0x0)) {
                  pcVar13 = "BlurFilter_iterativeBoxBlur: Failed to unlock Bitmap pixels";
LAB_00101d24:
                  lVar14 = *param_1;
                  goto LAB_00101d2c;
                }
              }
            }
          }
          else {
            auVar36 = (**(code **)(*param_1 + 0x720))(param_1);
            if ((auVar36 & (undefined1  [16])0xff) == (undefined1  [16])0x0) {
              pcVar13 = "BlurFilter_iterativeBoxBlur: Failed to lock Bitmap pixels";
              goto LAB_00101d24;
            }
          }
        }
        else {
          auVar36 = (**(code **)(*param_1 + 0x720))(param_1);
          if ((auVar36 & (undefined1  [16])0xff) == (undefined1  [16])0x0) {
            pcVar13 = "BlurFilter_iterativeBoxBlur: Bitmap dimensions too large";
            goto LAB_00101d24;
          }
        }
      }
      else {
        auVar36 = (**(code **)(*param_1 + 0x720))(param_1);
        if ((auVar36 & (undefined1  [16])0xff) == (undefined1  [16])0x0) {
          lVar14 = *param_1;
          pcVar13 = "BlurFilter_iterativeBoxBlur: Unexpected bitmap format";
          goto LAB_00101d2c;
        }
      }
    }
    else {
      auVar36 = (**(code **)(*param_1 + 0x720))(param_1);
      if ((auVar36 & (undefined1  [16])0xff) == (undefined1  [16])0x0) {
        lVar14 = *param_1;
        pcVar13 = "BlurFilter_iterativeBoxBlur: Failed to get Bitmap info";
LAB_00101d2c:
        auVar36 = (**(code **)(lVar14 + 0x70))(param_1,DAT_0010d4a8,pcVar13);
      }
    }
  }
  auVar10 = auVar36;
  if (*(long *)(lVar8 + 0x28) == local_68) {
    return;
  }
LAB_001021a8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(auVar10._0_8_,auVar10._8_8_);
}


// ===== 001021ac  FUN_001021ac =====

undefined4 FUN_001021ac(long *param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = (**(code **)(*param_1 + 0x30))(param_1,"java/lang/RuntimeException");
  if (lVar2 != 0) {
    DAT_0010d4b0 = (**(code **)(*param_1 + 0xa8))(param_1,lVar2);
    lVar2 = (**(code **)(*param_1 + 0x30))
                      (param_1,"com/facebook/imagepipeline/nativecode/NativeRoundingFilter");
    if (lVar2 != 0) {
      iVar1 = (**(code **)(*param_1 + 0x6b8))(param_1,lVar2,&PTR_s_nativeToCircleFilter_0010d440,4);
      if (iVar1 == 0) {
        return 0x10006;
      }
      return 0xffffffff;
    }
  }
  return 0xffffffff;
}


// ===== 00102250  FUN_00102250 =====

void FUN_00102250(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_00102658(param_1,param_3,0,0,param_4);
  return;
}


// ===== 00102264  FUN_00102264 =====

void FUN_00102264(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  FUN_00102658(param_1,param_3,param_4,param_5,param_6);
  return;
}


// ===== 00102278  FUN_00102278 =====

void FUN_00102278(long *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  long lVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  long lVar5;
  undefined8 local_88;
  int local_7c;
  int local_78;
  int local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  iVar3 = AndroidBitmap_getInfo(param_1,param_3,&local_7c);
  if (iVar3 == 0) {
    if (local_70 == 1) {
      if ((local_7c < 0x8001) && (local_78 < 0x8001)) {
        local_88 = 0;
        iVar3 = AndroidBitmap_lockPixels(param_1,param_3,&local_88);
        if (iVar3 == 0) {
          FUN_00103e50(param_1,local_88,local_7c,local_78,param_4,0);
          FUN_00103e50(param_1,local_88,local_7c,local_78,param_5,1);
          FUN_00103e50(param_1,local_88,local_7c,local_78,param_6,2);
          FUN_00103e50(param_1,local_88,local_7c,local_78,param_7,3);
          iVar3 = AndroidBitmap_unlockPixels(param_1,param_3);
          if ((iVar3 == 0) || (cVar2 = (**(code **)(*param_1 + 0x720))(param_1), cVar2 != '\0'))
          goto LAB_00102468;
          pcVar4 = "Rounding#addRoundedCorners: Failed to unlock Bitmap pixels";
        }
        else {
          cVar2 = (**(code **)(*param_1 + 0x720))(param_1);
          if (cVar2 != '\0') goto LAB_00102468;
          pcVar4 = "Rounding#addRoundedCorners: Failed to lock Bitmap pixels";
        }
        lVar5 = *param_1;
      }
      else {
        cVar2 = (**(code **)(*param_1 + 0x720))(param_1);
        if (cVar2 != '\0') goto LAB_00102468;
        lVar5 = *param_1;
        pcVar4 = "Rounding#addRoundedCorners: Bitmap dimensions too large";
      }
    }
    else {
      cVar2 = (**(code **)(*param_1 + 0x720))(param_1);
      if (cVar2 != '\0') goto LAB_00102468;
      lVar5 = *param_1;
      pcVar4 = "Rounding#addRoundedCorners: nexpected bitmap format";
    }
  }
  else {
    cVar2 = (**(code **)(*param_1 + 0x720))(param_1);
    if (cVar2 != '\0') goto LAB_00102468;
    lVar5 = *param_1;
    pcVar4 = "Rounding#addRoundedCorners: Failed to get Bitmap info";
  }
  (**(code **)(lVar5 + 0x70))(param_1,DAT_0010d4b0,pcVar4);
LAB_00102468:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0010249c  FUN_0010249c =====

void FUN_0010249c(long *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  long lVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  long lVar5;
  undefined8 local_68;
  int local_5c;
  int local_58;
  int local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar3 = AndroidBitmap_getInfo(param_1,param_3,&local_5c);
  if (iVar3 == 0) {
    if (local_50 == 1) {
      if ((local_5c < 0x8001) && (local_58 < 0x8001)) {
        local_68 = 0;
        iVar3 = AndroidBitmap_lockPixels(param_1,param_3,&local_68);
        if (iVar3 == 0) {
          if (param_4 == '\0') {
            FUN_00104100(param_1,local_68,local_5c,local_58);
          }
          else {
            FUN_00102c7c();
          }
          iVar3 = AndroidBitmap_unlockPixels(param_1,param_3);
          if ((iVar3 == 0) || (cVar2 = (**(code **)(*param_1 + 0x720))(param_1), cVar2 != '\0'))
          goto LAB_0010262c;
          pcVar4 = "Rounding#toCircleFastWithOptionalBorder: Failed to unlock Bitmap pixels";
        }
        else {
          cVar2 = (**(code **)(*param_1 + 0x720))(param_1);
          if (cVar2 != '\0') goto LAB_0010262c;
          pcVar4 = "Rounding#toCircleFastWithOptionalBorder: Failed to lock Bitmap pixels";
        }
        lVar5 = *param_1;
      }
      else {
        cVar2 = (**(code **)(*param_1 + 0x720))(param_1);
        if (cVar2 != '\0') goto LAB_0010262c;
        lVar5 = *param_1;
        pcVar4 = "Rounding#toCircleFastWithOptionalBorder: Bitmap dimensions too large";
      }
    }
    else {
      cVar2 = (**(code **)(*param_1 + 0x720))(param_1);
      if (cVar2 != '\0') goto LAB_0010262c;
      lVar5 = *param_1;
      pcVar4 = "Rounding#toCircleFastWithOptionalBorder: Unexpected bitmap format";
    }
  }
  else {
    cVar2 = (**(code **)(*param_1 + 0x720))(param_1);
    if (cVar2 != '\0') goto LAB_0010262c;
    lVar5 = *param_1;
    pcVar4 = "Rounding#toCircleFastWithOptionalBorder: Failed to get Bitmap info";
  }
  (**(code **)(lVar5 + 0x70))(param_1,DAT_0010d4b0,pcVar4);
LAB_0010262c:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00102658  FUN_00102658 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00102658(long *param_1,undefined8 param_2,uint param_3,int param_4,char param_5)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  float fVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  ulong uVar10;
  long lVar11;
  byte *pbVar12;
  uint *puVar13;
  byte *pbVar14;
  ulong uVar15;
  int iVar16;
  int iVar17;
  long lVar18;
  ulong uVar19;
  int iVar20;
  long lVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  undefined4 uVar38;
  float fVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  undefined8 uVar43;
  long local_98;
  uint local_8c;
  uint local_88;
  int local_80;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  iVar6 = AndroidBitmap_getInfo(param_1,param_2,&local_8c);
  if (iVar6 == 0) {
    if (local_80 == 1) {
      if (((int)local_8c < 0x8001) && ((int)local_88 < 0x8001)) {
        local_98 = 0;
        iVar6 = AndroidBitmap_lockPixels(param_1,param_2,&local_98);
        lVar18 = local_98;
        if (iVar6 == 0) {
          if (0 < param_4) {
            uVar1 = local_8c;
            if ((int)local_88 <= (int)local_8c) {
              uVar1 = local_88;
            }
            fVar4 = (float)(int)uVar1 / 2.0;
            if ((int)(fVar4 + -1.0) <= param_4) {
              param_4 = (int)(fVar4 + -1.0);
            }
            FUN_00104a0c(local_8c);
            uVar28 = _DAT_00101170;
            FUN_001045d8();
            uVar43 = _DAT_001011b0;
            FUN_00104a70();
            fVar25 = (float)FUN_00104f18();
            uVar27 = FUN_00104a0c(local_88);
            uVar28 = FUN_001045d8(uVar27,uVar28);
            FUN_00104a70(uVar28,uVar43);
            fVar26 = (float)FUN_00104f18();
            if (1.0 <= fVar4) {
              if (((int)local_8c < 1) || ((int)local_88 < 1)) {
                cVar5 = (**(code **)(*param_1 + 0x720))(param_1);
                if (cVar5 == '\0') {
                  pcVar9 = "Invalid bitmap dimensions!";
                  goto LAB_00102bc0;
                }
              }
              else if ((((fVar26 < (float)(int)local_88 ==
                          (NAN(fVar26) || NAN((float)(int)local_88))) ||
                        (fVar25 < (float)(int)local_8c == (NAN(fVar25) || NAN((float)(int)local_8c))
                        )) || (fVar25 < 0.0)) || (fVar26 < 0.0)) {
                cVar5 = (**(code **)(*param_1 + 0x720))(param_1);
                if (cVar5 == '\0') {
                  pcVar9 = "Invalid circle center coordinates!";
                  goto LAB_00102bc0;
                }
              }
              else {
                uVar1 = (int)(fVar26 - fVar4) & ((int)(fVar26 - fVar4) >> 0x1f ^ 0xffffffffU);
                uVar19 = (ulong)uVar1;
                uVar2 = (int)(fVar26 + fVar4);
                if ((int)local_88 <= (int)(fVar26 + fVar4)) {
                  uVar2 = local_88;
                }
                if ((int)uVar1 < (int)uVar2) {
                  uVar23 = (uint)fVar25;
                  fVar31 = (float)(param_3 >> 0x18);
                  fVar29 = fVar4 - (float)param_4;
                  lVar7 = (long)(int)uVar23 + (ulong)local_8c * (ulong)uVar1;
                  uVar24 = -(ulong)(uVar23 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar23 << 2;
                  lVar21 = lVar18 + local_8c * uVar19 * 4;
                  lVar22 = (ulong)local_8c * 4;
                  fVar30 = fVar29 * fVar29;
                  iVar20 = 0;
                  iVar6 = 0;
                  lVar8 = lVar7 + -1;
                  lVar7 = lVar18 + lVar7 * 4 + 7;
                  uVar1 = (int)(fVar29 + -2.0) & ((int)(fVar29 + -2.0) >> 0x1f ^ 0xffffffffU);
                  fVar29 = (float)(int)(uVar1 * uVar1);
                  uVar1 = param_3 & 0xff000000 | param_3 & 0xff00 | (param_3 & 0xff) << 0x10 |
                          param_3 >> 0x10 & 0xff;
                  do {
                    iVar17 = (int)uVar19;
                    fVar32 = (float)NEON_fmadd(-fVar26,fVar26,(fVar26 + fVar26) * (float)iVar17);
                    fVar32 = fVar32 - (float)(iVar17 * iVar17);
                    fVar33 = fVar4 * fVar4 + fVar32;
                    fVar32 = fVar30 + fVar32;
                    if ((fVar33 == 0.0 || fVar33 < 0.0 != NAN(fVar33)) ||
                       (fVar32 == 0.0 || fVar32 < 0.0 != NAN(fVar32))) {
                      if (iVar6 < 0) {
                        if (-1 < iVar20) {
                          iVar20 = (int)SQRT(fVar32);
                        }
                      }
                      else {
                        iVar6 = (int)SQRT(fVar33);
                        if (0 < iVar6) {
                          uVar15 = (ulong)(uint)(iVar6 << 1);
                          puVar13 = (uint *)(lVar21 + (long)(int)(fVar25 - (float)iVar6) * 4);
                          do {
                            uVar15 = uVar15 - 1;
                            *puVar13 = uVar1;
                            puVar13 = puVar13 + 1;
                          } while (uVar15 != 0);
                        }
                      }
                    }
                    else {
                      iVar6 = (int)SQRT(fVar33);
                      iVar20 = (int)SQRT(fVar32);
                      if (-1 < iVar6 - iVar20) {
                        uVar10 = (ulong)((iVar6 - iVar20) + 1);
                        lVar11 = uVar24 + (long)iVar6 * -4;
                        uVar15 = uVar10;
                        do {
                          uVar15 = uVar15 - 1;
                          *(uint *)(lVar21 + lVar11) = uVar1;
                          lVar11 = lVar11 + 4;
                        } while (uVar15 != 0);
                        lVar11 = uVar24 + (long)iVar20 * 4;
                        do {
                          uVar10 = uVar10 - 1;
                          *(uint *)(lVar21 + lVar11) = uVar1;
                          lVar11 = lVar11 + 4;
                        } while (uVar10 != 0);
                      }
                      uVar15 = (ulong)(uint)(int)(float)iVar20;
                      if (0 < (int)(float)iVar20) {
                        pbVar12 = (byte *)(lVar7 + uVar15 * -4);
                        pbVar14 = (byte *)(lVar18 + 3 + (lVar8 + uVar15) * 4);
                        while( true ) {
                          uVar15 = uVar15 - 1;
                          fVar32 = 1.0;
                          fVar33 = (float)(((int)fVar26 - iVar17) * ((int)fVar26 - iVar17) +
                                          (int)uVar15 * (int)uVar15);
                          if ((fVar33 < fVar30) &&
                             ((fVar33 < fVar29 ||
                              (fVar32 = (fVar33 - fVar29) / (fVar30 - fVar29), fVar32 == 0.0))))
                          break;
                          uVar38 = NEON_ucvtf((uint)*pbVar12);
                          uVar28 = NEON_ucvtf((ulong)pbVar12[-2]);
                          fVar33 = ((float)(param_3 >> 0x18) / 255.0) * fVar32;
                          uVar43 = NEON_ucvtf((ulong)pbVar12[-3]);
                          fVar39 = (float)NEON_fmadd(fVar31,fVar32,uVar38);
                          iVar16 = (int)fVar39;
                          if (0xfe < iVar16) {
                            iVar16 = 0xff;
                          }
                          dVar34 = 1.0 - (double)fVar33;
                          dVar35 = (double)((float)(param_3 >> 0x10 & 0xff) * fVar33);
                          dVar36 = (double)((float)(param_3 >> 8 & 0xff) * fVar33);
                          uVar27 = NEON_ucvtf((ulong)pbVar12[-1]);
                          dVar37 = (double)((float)(param_3 & 0xff) * fVar33);
                          *pbVar12 = (byte)iVar16;
                          dVar42 = (double)NEON_fmadd(uVar43,dVar34,dVar35);
                          dVar40 = (double)NEON_fmadd(uVar28,dVar34,dVar36);
                          dVar41 = (double)NEON_fmadd(uVar27,dVar34,dVar37);
                          pbVar12[-3] = (byte)(int)dVar42;
                          pbVar12[-2] = (byte)(int)dVar40;
                          pbVar12[-1] = (byte)(int)dVar41;
                          if (uVar15 == 0) break;
                          pbVar12 = pbVar12 + 4;
                          uVar38 = NEON_ucvtf((uint)*pbVar14);
                          uVar28 = NEON_ucvtf((ulong)pbVar14[-3]);
                          uVar43 = NEON_ucvtf((ulong)pbVar14[-2]);
                          uVar27 = NEON_ucvtf((ulong)pbVar14[-1]);
                          fVar32 = (float)NEON_fmadd(fVar31,fVar32,uVar38);
                          dVar35 = (double)NEON_fmadd(uVar28,dVar34,dVar35);
                          dVar36 = (double)NEON_fmadd(uVar43,dVar34,dVar36);
                          dVar34 = (double)NEON_fmadd(uVar27,dVar34,dVar37);
                          iVar16 = (int)fVar32;
                          pbVar14[-3] = (byte)(int)dVar35;
                          if (0xfe < iVar16) {
                            iVar16 = 0xff;
                          }
                          pbVar14[-2] = (byte)(int)dVar36;
                          pbVar14[-1] = (byte)(int)dVar34;
                          *pbVar14 = (byte)iVar16;
                          pbVar14 = pbVar14 + -4;
                        }
                      }
                    }
                    uVar19 = uVar19 + 1;
                    lVar21 = lVar21 + lVar22;
                    lVar7 = lVar7 + lVar22;
                    lVar8 = lVar8 + (ulong)local_8c;
                  } while (uVar19 != uVar2);
                }
              }
            }
            else {
              cVar5 = (**(code **)(*param_1 + 0x720))(param_1);
              if (cVar5 == '\0') {
                pcVar9 = "Circle radius too small!";
LAB_00102bc0:
                (**(code **)(*param_1 + 0x70))(param_1,DAT_0010d4b0,pcVar9);
              }
            }
          }
          if (param_5 == '\0') {
            FUN_00103a90(param_1,local_98,local_8c,local_88);
          }
          else {
            FUN_00102c7c();
          }
          iVar6 = AndroidBitmap_unlockPixels(param_1,param_2);
          if ((iVar6 == 0) || (cVar5 = (**(code **)(*param_1 + 0x720))(param_1), cVar5 != '\0'))
          goto LAB_00102c44;
          pcVar9 = "Rounding#toCircleWithOptionalBorder: Failed to unlock Bitmap pixels";
        }
        else {
          cVar5 = (**(code **)(*param_1 + 0x720))(param_1);
          if (cVar5 != '\0') goto LAB_00102c44;
          pcVar9 = "Rounding#toCircleWithOptionalBorder: Failed to lock Bitmap pixels";
        }
        lVar18 = *param_1;
      }
      else {
        cVar5 = (**(code **)(*param_1 + 0x720))(param_1);
        if (cVar5 != '\0') goto LAB_00102c44;
        lVar18 = *param_1;
        pcVar9 = "Rounding#toCircleWithOptionalBorder: Bitmap dimensions too large";
      }
    }
    else {
      cVar5 = (**(code **)(*param_1 + 0x720))(param_1);
      if (cVar5 != '\0') goto LAB_00102c44;
      lVar18 = *param_1;
      pcVar9 = "Rounding#toCircleWithOptionalBorder: Unexpected bitmap format";
    }
  }
  else {
    cVar5 = (**(code **)(*param_1 + 0x720))(param_1);
    if (cVar5 != '\0') goto LAB_00102c44;
    lVar18 = *param_1;
    pcVar9 = "Rounding#toCircleWithOptionalBorder: Failed to get Bitmap info";
  }
  (**(code **)(lVar18 + 0x70))(param_1,DAT_0010d4b0,pcVar9);
LAB_00102c44:
  if (*(long *)(lVar3 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00102c7c  FUN_00102c7c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00102c7c(long *param_1,long param_2,ulong param_3,uint param_4)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  size_t __n;
  undefined1 *puVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  char cVar15;
  uint uVar16;
  char *pcVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  uint uVar28;
  long lVar29;
  long lVar30;
  uint uVar31;
  ulong uVar32;
  void *pvVar33;
  ulong uVar34;
  ulong uVar35;
  long lVar36;
  undefined1 uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auVar42 [12];
  long lVar41;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  int iVar48;
  int iVar49;
  int iVar51;
  undefined1 auVar45 [16];
  float fVar52;
  long lVar50;
  undefined1 auVar47 [16];
  float fVar53;
  int iVar54;
  float fVar55;
  int iVar57;
  int iVar58;
  int iVar59;
  undefined1 auVar56 [16];
  float fVar60;
  int iVar64;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  int iVar66;
  long lVar65;
  undefined1 auVar63 [16];
  undefined4 uVar67;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  long lVar71;
  undefined1 auVar70 [16];
  float fVar72;
  float fVar78;
  float fVar79;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  float fVar81;
  long lVar80;
  undefined1 auVar77 [16];
  int iVar82;
  float fVar83;
  float fVar89;
  float fVar90;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  float fVar91;
  int iVar97;
  undefined1 auVar92 [12];
  float fVar98;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  int iVar100;
  float fVar101;
  undefined1 auVar102 [12];
  undefined1 auVar103 [12];
  undefined1 auVar104 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  float fVar108;
  float fVar111;
  undefined1 auVar109 [16];
  float fVar112;
  undefined1 auVar110 [16];
  float fVar113;
  undefined1 auVar114 [16];
  float fVar115;
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  float fVar119;
  float fVar120;
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  int iVar127;
  int iVar128;
  undefined1 in_q16 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  int iVar129;
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  int iVar130;
  undefined1 auVar131 [12];
  undefined1 auVar132 [12];
  int iVar136;
  float fVar138;
  undefined1 in_q17 [16];
  undefined1 auVar133 [16];
  int iVar137;
  int iVar139;
  undefined1 auVar134 [16];
  float fVar140;
  undefined1 in_q18 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 in_q19 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 in_q20 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  undefined1 auVar178 [16];
  undefined8 uVar181;
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  undefined1 auVar182 [16];
  float fVar183;
  undefined8 uStack_118;
  int iStack_108;
  int iStack_104;
  uint local_100;
  float fStack_d8;
  float fStack_d4;
  undefined1 auVar46 [16];
  undefined1 auVar73 [12];
  undefined1 auVar76 [16];
  undefined1 auVar84 [12];
  undefined1 auVar88 [16];
  undefined1 auVar96 [16];
  int iVar99;
  undefined1 auVar105 [16];
  undefined1 auVar135 [16];
  
  uVar16 = (uint)param_3;
  uVar18 = uVar16;
  if ((int)param_4 <= (int)uVar16) {
    uVar18 = param_4;
  }
  fVar108 = (float)(int)uVar18 / 2.0 + -2.0;
  FUN_00104a0c(param_3 & 0xffffffff);
  auVar44 = _DAT_00101170;
  FUN_001045d8();
  auVar45 = _DAT_001011b0;
  FUN_00104a70();
  fVar38 = (float)FUN_00104f18();
  auVar43 = FUN_00104a0c(param_4);
  auVar44 = FUN_001045d8(auVar43,auVar44);
  FUN_00104a70(auVar44,auVar45);
  fVar39 = (float)FUN_00104f18();
  if (1.0 <= fVar108) {
    if (((int)uVar16 < 1) || ((int)param_4 < 1)) {
      cVar15 = (**(code **)(*param_1 + 0x720))(param_1);
      if (cVar15 == '\0') {
        pcVar17 = "Invalid bitmap dimensions!";
        goto LAB_00103a4c;
      }
    }
    else if ((((fVar39 < (float)(int)param_4 == (NAN(fVar39) || NAN((float)(int)param_4))) ||
              (fVar38 < (float)(int)uVar16 == (NAN(fVar38) || NAN((float)(int)uVar16)))) ||
             (fVar38 < 0.0)) || (fVar39 < 0.0)) {
      cVar15 = (**(code **)(*param_1 + 0x720))(param_1);
      if (cVar15 == '\0') {
        pcVar17 = "Invalid circle center coordinates!";
        goto LAB_00103a4c;
      }
    }
    else {
      __n = (param_3 & 0xffffffff) * 4;
      uVar34 = param_3 & 0xffffffff;
      uVar18 = (uint)(fVar39 - (fVar108 + 2.0));
      uVar31 = (uint)(fVar108 + 2.0 + fVar39);
      uVar18 = uVar18 & ((int)uVar18 >> 0x1f ^ 0xffffffffU);
      uVar21 = (ulong)uVar18;
      lVar30 = uVar21 + 1;
      pvVar33 = (void *)(param_2 + (param_3 & 0xffffffff) * uVar21 * 4);
      do {
        memset(pvVar33,0,__n);
        lVar30 = lVar30 + -1;
        pvVar33 = (void *)((long)pvVar33 + (param_3 & 0xffffffff) * -4);
      } while (lVar30 != 0);
      uVar3 = uVar31;
      if ((int)param_4 <= (int)uVar31) {
        uVar3 = param_4;
      }
      iVar19 = param_4 - uVar31;
      if (iVar19 != 0 && (int)uVar31 <= (int)param_4) {
        pvVar33 = (void *)(param_2 + (long)(int)uVar31 * uVar34 * 4);
        do {
          memset(pvVar33,0,__n);
          iVar19 = iVar19 + -1;
          pvVar33 = (void *)((long)pvVar33 + __n);
        } while (iVar19 != 0);
      }
      if ((int)uVar18 < (int)uVar3) {
        uVar31 = (uint)fVar39;
        uVar28 = (uint)fVar38;
        fVar113 = fVar39 + fVar39;
        fVar115 = -fVar39;
        fVar101 = 0.0;
        fVar98 = 1.0;
        lVar30 = 0;
        fVar7 = (fVar108 + 2.0) * (fVar108 + 2.0);
        uVar18 = (int)(fVar108 + -2.0) & ((int)(fVar108 + -2.0) >> 0x1f ^ 0xffffffffU);
        auVar44._4_4_ = fVar7;
        auVar44._0_4_ = fVar7;
        auVar44._8_4_ = fVar7;
        auVar44._12_4_ = fVar7;
        fVar183 = (float)(int)(uVar18 * uVar18);
        lVar22 = (uVar34 - 1) * 4;
        fVar119 = fVar7 - fVar183;
        lVar1 = param_2 + uVar34 * uVar21 * 4;
        auVar43._0_8_ = CONCAT44(fVar183,fVar183);
        auVar43._8_4_ = fVar183;
        auVar43._12_4_ = fVar183;
        lVar36 = param_2 + uVar34 * uVar21 * 4;
        uVar181 = auVar44._8_8_;
        auVar158._8_8_ = auVar43._8_8_;
        uVar32 = uVar21;
        auVar45 = auVar43;
        fVar83 = fVar38;
        fVar89 = fVar39;
        fVar90 = fVar113;
        fVar91 = fVar115;
        fVar120 = fVar119;
        fVar53 = fVar119;
        uVar18 = uVar28;
        local_100 = uVar28;
        do {
          iVar20 = (int)uVar32;
          auVar109 = NEON_fmov(0x3f800000,4);
          fVar40 = (float)NEON_fmadd(fVar91,fVar89,fVar90 * (float)iVar20);
          iVar19 = (int)(fVar108 * fVar108 + (fVar40 - (float)(iVar20 * iVar20)));
          fVar111 = auVar109._8_4_;
          fVar112 = auVar109._12_4_;
          fVar40 = auVar109._0_4_;
          fVar55 = auVar109._4_4_;
          if (iVar19 < 0) {
            if (0 < (int)uVar16) {
              lVar23 = (uVar31 - uVar32) * (uVar31 - uVar32);
              iVar19 = (int)lVar23;
              if (uVar16 < 8) {
                uVar35 = 0;
              }
              else {
                lVar29 = uVar34 * 4 * lVar30;
                uVar25 = lVar1 + 2 + lVar29;
                uVar35 = 0;
                if (((uVar25 <= uVar25 + lVar22) &&
                    (uVar25 = lVar1 + 1 + lVar29, uVar25 <= uVar25 + lVar22)) &&
                   ((uVar25 = lVar1 + 3 + lVar29, uVar25 <= uVar25 + lVar22 &&
                    (((ulong)(lVar1 + lVar29) <= (ulong)(lVar1 + lVar29 + lVar22) &&
                     (uVar34 - 1 >> 0x3e == 0)))))) {
                  lVar29 = 0;
                  auVar154 = _DAT_00101200;
                  auVar74 = _DAT_001011e0;
                  auVar75 = _DAT_001011a0;
                  lVar41 = _DAT_00101220;
                  lVar50 = _UNK_00101228;
                  do {
                    in_q16 = _DAT_00101190;
                    iVar57 = uVar18 - auVar74._0_4_;
                    lVar71 = auVar74._8_8_;
                    iVar20 = uVar28 - auVar74._8_4_;
                    iVar49 = uVar18 - auVar75._0_4_;
                    lVar80 = auVar75._8_8_;
                    iVar59 = uVar28 - auVar75._8_4_;
                    iVar58 = uVar18 - (int)lVar41;
                    iVar54 = uVar28 - (int)lVar50;
                    iVar51 = uVar18 - auVar154._0_4_;
                    lVar65 = auVar154._8_8_;
                    iVar48 = uVar28 - auVar154._8_4_;
                    auVar104._4_4_ = (int)((ulong)(uint)(iVar59 * iVar59) + lVar23);
                    auVar104._0_4_ = iVar49 * iVar49 + iVar19;
                    auVar104._8_4_ = iVar57 * iVar57 + iVar19;
                    auVar104._12_4_ = iVar20 * iVar20 + iVar19;
                    puVar6 = (undefined1 *)(lVar36 + lVar29);
                    lVar29 = lVar29 + 0x20;
                    auVar149 = NEON_scvtf(auVar104,4);
                    auVar168[0] = *puVar6;
                    auVar150[0] = puVar6[1];
                    auVar152[0] = puVar6[2];
                    auVar160[0] = puVar6[3];
                    auVar168[1] = puVar6[4];
                    auVar150[1] = puVar6[5];
                    auVar152[1] = puVar6[6];
                    auVar160[1] = puVar6[7];
                    auVar168[2] = puVar6[8];
                    auVar150[2] = puVar6[9];
                    auVar152[2] = puVar6[10];
                    auVar160[2] = puVar6[0xb];
                    auVar168[3] = puVar6[0xc];
                    auVar150[3] = puVar6[0xd];
                    auVar152[3] = puVar6[0xe];
                    auVar160[3] = puVar6[0xf];
                    auVar168[4] = puVar6[0x10];
                    auVar150[4] = puVar6[0x11];
                    auVar152[4] = puVar6[0x12];
                    auVar160[4] = puVar6[0x13];
                    auVar168[5] = puVar6[0x14];
                    auVar150[5] = puVar6[0x15];
                    auVar152[5] = puVar6[0x16];
                    auVar160[5] = puVar6[0x17];
                    auVar168[6] = puVar6[0x18];
                    auVar150[6] = puVar6[0x19];
                    auVar152[6] = puVar6[0x1a];
                    auVar160[6] = puVar6[0x1b];
                    auVar168._8_8_ = in_q17._8_8_;
                    auVar168[7] = puVar6[0x1c];
                    auVar150._8_8_ = in_q18._8_8_;
                    auVar150[7] = puVar6[0x1d];
                    auVar152._8_8_ = in_q19._8_8_;
                    auVar152[7] = puVar6[0x1e];
                    auVar160._8_8_ = in_q20._8_8_;
                    auVar160[7] = puVar6[0x1f];
                    auVar155 = NEON_fcmgt(auVar45,auVar149,4);
                    auVar159._4_4_ = (int)((ulong)(uint)(iVar48 * iVar48) + lVar23);
                    auVar159._0_4_ = iVar51 * iVar51 + iVar19;
                    auVar159._8_4_ = iVar58 * iVar58 + iVar19;
                    auVar159._12_4_ = (int)((ulong)(uint)(iVar54 * iVar54) + lVar23);
                    auVar104 = NEON_scvtf(auVar159,4);
                    auVar156 = NEON_fcmge(auVar104,auVar44,4);
                    auVar177._0_4_ = fVar40 - (auVar149._0_4_ - auVar45._0_4_) / fVar119;
                    auVar177._4_4_ = fVar55 - (auVar149._4_4_ - auVar45._4_4_) / fVar119;
                    auVar177._8_4_ = fVar111 - (auVar149._8_4_ - auVar45._8_4_) / fVar120;
                    auVar177._12_4_ = fVar112 - (auVar149._12_4_ - auVar45._12_4_) / fVar53;
                    auVar93._8_8_ = auVar158._8_8_;
                    auVar93._0_8_ = auVar43._0_8_;
                    auVar162 = NEON_fcmgt(auVar93,auVar104,4);
                    auVar44 = NEON_fcmge(auVar149,auVar44,4);
                    auVar93 = NEON_bsl(auVar155,auVar109,auVar177,1);
                    auVar159 = a64_TBL(ZEXT816(0),auVar160,_DAT_00101230);
                    auVar166 = a64_TBL(ZEXT816(0),auVar150,_DAT_00101230);
                    fVar60 = (float)CONCAT13(auVar93[3] & ~auVar44[3],
                                             CONCAT12(auVar93[2] & ~auVar44[2],
                                                      CONCAT11(auVar93[1] & ~auVar44[1],
                                                               auVar93[0] & ~auVar44[0])));
                    auVar102._0_8_ =
                         CONCAT17(auVar93[7] & ~auVar44[7],
                                  CONCAT16(auVar93[6] & ~auVar44[6],
                                           CONCAT15(auVar93[5] & ~auVar44[5],
                                                    CONCAT14(auVar93[4] & ~auVar44[4],fVar60))));
                    auVar102[8] = auVar93[8] & ~auVar44[8];
                    auVar102[9] = auVar93[9] & ~auVar44[9];
                    auVar102[10] = auVar93[10] & ~auVar44[10];
                    auVar102[0xb] = auVar93[0xb] & ~auVar44[0xb];
                    auVar155[0xc] = auVar93[0xc] & ~auVar44[0xc];
                    auVar155._0_12_ = auVar102;
                    auVar155[0xd] = auVar93[0xd] & ~auVar44[0xd];
                    auVar155[0xe] = auVar93[0xe] & ~auVar44[0xe];
                    auVar155[0xf] = auVar93[0xf] & ~auVar44[0xf];
                    auVar163._0_4_ = fVar40 - (auVar104._0_4_ - auVar45._0_4_) / fVar119;
                    auVar163._4_4_ = fVar55 - (auVar104._4_4_ - auVar45._4_4_) / fVar119;
                    auVar163._8_4_ = fVar111 - (auVar104._8_4_ - auVar45._8_4_) / fVar120;
                    auVar163._12_4_ = fVar112 - (auVar104._12_4_ - auVar45._12_4_) / fVar53;
                    auVar44 = a64_TBL(ZEXT816(0),auVar160,_DAT_001011c0);
                    auVar126 = a64_TBL(ZEXT816(0),auVar168,_DAT_001011c0);
                    auVar150 = a64_TBL(ZEXT816(0),auVar150,_DAT_001011c0);
                    auVar160 = a64_TBL(ZEXT816(0),auVar152,_DAT_001011c0);
                    auVar93 = a64_TBL(ZEXT816(0),auVar152,_DAT_00101230);
                    auVar104 = NEON_ucvtf(auVar159,4);
                    auVar149 = NEON_bsl(auVar162,auVar109,auVar163,1);
                    auVar168 = a64_TBL(ZEXT816(0),auVar168,_DAT_00101230);
                    auVar45 = NEON_ucvtf(auVar44,4);
                    auVar159 = NEON_ucvtf(auVar126,4);
                    auVar162 = NEON_ucvtf(auVar150,4);
                    auVar93 = NEON_ucvtf(auVar93,4);
                    fVar72 = (float)CONCAT13(auVar149[3] & ~auVar156[3],
                                             CONCAT12(auVar149[2] & ~auVar156[2],
                                                      CONCAT11(auVar149[1] & ~auVar156[1],
                                                               auVar149[0] & ~auVar156[0])));
                    auVar131._0_8_ =
                         CONCAT17(auVar149[7] & ~auVar156[7],
                                  CONCAT16(auVar149[6] & ~auVar156[6],
                                           CONCAT15(auVar149[5] & ~auVar156[5],
                                                    CONCAT14(auVar149[4] & ~auVar156[4],fVar72))));
                    auVar131[8] = auVar149[8] & ~auVar156[8];
                    auVar131[9] = auVar149[9] & ~auVar156[9];
                    auVar131[10] = auVar149[10] & ~auVar156[10];
                    auVar131[0xb] = auVar149[0xb] & ~auVar156[0xb];
                    auVar126[0xc] = auVar149[0xc] & ~auVar156[0xc];
                    auVar126._0_12_ = auVar131;
                    auVar126[0xd] = auVar149[0xd] & ~auVar156[0xd];
                    auVar126[0xe] = auVar149[0xe] & ~auVar156[0xe];
                    auVar126[0xf] = auVar149[0xf] & ~auVar156[0xf];
                    auVar149 = NEON_ucvtf(auVar168,4);
                    auVar168 = NEON_ucvtf(auVar166,4);
                    auVar150 = NEON_ucvtf(auVar160,4);
                    auVar44._4_4_ = fVar119;
                    auVar44._0_4_ = fVar119;
                    auVar44._8_8_ = uVar181;
                    fVar120 = (float)((ulong)auVar102._0_8_ >> 0x20);
                    fVar53 = auVar102._8_4_;
                    fVar52 = auVar155._12_4_;
                    fVar78 = (float)((ulong)auVar131._0_8_ >> 0x20);
                    fVar79 = auVar131._8_4_;
                    fVar81 = auVar126._12_4_;
                    auVar169._0_4_ = (int)(fVar60 * auVar45._0_4_);
                    auVar169._4_4_ = (int)(fVar120 * auVar45._4_4_);
                    auVar169._8_4_ = (int)(fVar53 * auVar45._8_4_);
                    auVar169._12_4_ = (int)(fVar52 * auVar45._12_4_);
                    auVar173._0_4_ = (int)(fVar72 * auVar104._0_4_);
                    auVar173._4_4_ = (int)(fVar78 * auVar104._4_4_);
                    auVar173._8_4_ = (int)(fVar79 * auVar104._8_4_);
                    auVar173._12_4_ = (int)(fVar81 * auVar104._12_4_);
                    auVar156._0_4_ = (int)(fVar60 * auVar159._0_4_);
                    auVar156._4_4_ = (int)(fVar120 * auVar159._4_4_);
                    auVar156._8_4_ = (int)(fVar53 * auVar159._8_4_);
                    auVar156._12_4_ = (int)(fVar52 * auVar159._12_4_);
                    auVar166._0_4_ = (int)(fVar72 * auVar149._0_4_);
                    auVar166._4_4_ = (int)(fVar78 * auVar149._4_4_);
                    auVar166._8_4_ = (int)(fVar79 * auVar149._8_4_);
                    auVar166._12_4_ = (int)(fVar81 * auVar149._12_4_);
                    auVar172._0_4_ = (int)(fVar60 * auVar162._0_4_);
                    auVar172._4_4_ = (int)(fVar120 * auVar162._4_4_);
                    auVar172._8_4_ = (int)(fVar53 * auVar162._8_4_);
                    auVar172._12_4_ = (int)(fVar52 * auVar162._12_4_);
                    auVar178._0_4_ = (int)(fVar72 * auVar168._0_4_);
                    auVar178._4_4_ = (int)(fVar78 * auVar168._4_4_);
                    auVar178._8_4_ = (int)(fVar79 * auVar168._8_4_);
                    auVar178._12_4_ = (int)(fVar81 * auVar168._12_4_);
                    auVar182._0_4_ = (int)(fVar60 * auVar150._0_4_);
                    auVar182._4_4_ = (int)(fVar120 * auVar150._4_4_);
                    auVar182._8_4_ = (int)(fVar53 * auVar150._8_4_);
                    auVar182._12_4_ = (int)(fVar52 * auVar150._12_4_);
                    auVar164._0_4_ = (int)(fVar72 * auVar93._0_4_);
                    auVar164._4_4_ = (int)(fVar78 * auVar93._4_4_);
                    auVar164._8_4_ = (int)(fVar79 * auVar93._8_4_);
                    auVar164._12_4_ = (int)(fVar81 * auVar93._12_4_);
                    auVar45 = a64_TBL(ZEXT816(0),auVar169,auVar173,_DAT_00101190);
                    auVar93 = a64_TBL(ZEXT816(0),auVar156,auVar166,_DAT_00101190);
                    auVar149 = a64_TBL(ZEXT816(0),auVar172,auVar178,_DAT_00101190);
                    auVar155 = a64_TBL(ZEXT816(0),auVar182,auVar164,_DAT_00101190);
                    auVar162 = a64_TBL(ZEXT816(0),auVar45,_DAT_00101230);
                    auVar104 = a64_TBL(ZEXT816(0),auVar45,_DAT_001011c0);
                    auVar168 = a64_TBL(ZEXT816(0),auVar93,_DAT_00101230);
                    auVar159 = a64_TBL(ZEXT816(0),auVar93,_DAT_001011c0);
                    auVar126 = a64_TBL(ZEXT816(0),auVar149,_DAT_00101230);
                    auVar149 = a64_TBL(ZEXT816(0),auVar149,_DAT_001011c0);
                    auVar93 = a64_TBL(ZEXT816(0),auVar155,_DAT_00101230);
                    auVar45 = a64_TBL(ZEXT816(0),auVar155,_DAT_001011c0);
                    auVar162 = NEON_ucvtf(auVar162,4);
                    auVar104 = NEON_ucvtf(auVar104,4);
                    auVar155 = NEON_ucvtf(auVar168,4);
                    auVar159 = NEON_ucvtf(auVar159,4);
                    auVar168 = NEON_ucvtf(auVar126,4);
                    auVar149 = NEON_ucvtf(auVar149,4);
                    auVar93 = NEON_ucvtf(auVar93,4);
                    auVar45 = NEON_ucvtf(auVar45,4);
                    in_q19._0_4_ = fVar60 * auVar159._0_4_;
                    in_q19._4_4_ = fVar120 * auVar159._4_4_;
                    in_q19._8_4_ = fVar53 * auVar159._8_4_;
                    in_q19._12_4_ = fVar52 * auVar159._12_4_;
                    in_q20._0_4_ = fVar60 * auVar149._0_4_;
                    in_q20._4_4_ = fVar120 * auVar149._4_4_;
                    in_q20._8_4_ = fVar53 * auVar149._8_4_;
                    in_q20._12_4_ = fVar52 * auVar149._12_4_;
                    auVar170._0_4_ = (int)(fVar72 * auVar162._0_4_);
                    auVar170._4_4_ = (int)(fVar78 * auVar162._4_4_);
                    auVar170._8_4_ = (int)(fVar79 * auVar162._8_4_);
                    auVar170._12_4_ = (int)(fVar81 * auVar162._12_4_);
                    auVar165._0_4_ = (int)(fVar60 * auVar104._0_4_);
                    auVar165._4_4_ = (int)(fVar120 * auVar104._4_4_);
                    auVar165._8_4_ = (int)(fVar53 * auVar104._8_4_);
                    auVar165._12_4_ = (int)(fVar52 * auVar104._12_4_);
                    in_q18._0_4_ = (int)(fVar72 * auVar155._0_4_);
                    in_q18._4_4_ = (int)(fVar78 * auVar155._4_4_);
                    in_q18._8_4_ = (int)(fVar79 * auVar155._8_4_);
                    in_q18._12_4_ = (int)(fVar81 * auVar155._12_4_);
                    in_q17._0_4_ = (int)in_q19._0_4_;
                    in_q17._4_4_ = (int)in_q19._4_4_;
                    in_q17._8_4_ = (int)in_q19._8_4_;
                    in_q17._12_4_ = (int)in_q19._12_4_;
                    auVar180._0_4_ = (int)(fVar72 * auVar168._0_4_);
                    auVar180._4_4_ = (int)(fVar78 * auVar168._4_4_);
                    auVar180._8_4_ = (int)(fVar79 * auVar168._8_4_);
                    auVar180._12_4_ = (int)(fVar81 * auVar168._12_4_);
                    auVar174._0_4_ = (int)in_q20._0_4_;
                    auVar174._4_4_ = (int)in_q20._4_4_;
                    auVar174._8_4_ = (int)in_q20._8_4_;
                    auVar174._12_4_ = (int)in_q20._12_4_;
                    auVar162._0_4_ = (int)(fVar72 * auVar93._0_4_);
                    auVar162._4_4_ = (int)(fVar78 * auVar93._4_4_);
                    auVar162._8_4_ = (int)(fVar79 * auVar93._8_4_);
                    auVar162._12_4_ = (int)(fVar81 * auVar93._12_4_);
                    auVar149._0_4_ = (int)(fVar60 * auVar45._0_4_);
                    auVar149._4_4_ = (int)(fVar120 * auVar45._4_4_);
                    auVar149._8_4_ = (int)(fVar53 * auVar45._8_4_);
                    auVar149._12_4_ = (int)(fVar52 * auVar45._12_4_);
                    auVar159 = a64_TBL(ZEXT816(0),auVar165,auVar170,_DAT_00101190);
                    auVar45 = a64_TBL(ZEXT816(0),in_q17,in_q18,_DAT_00101190);
                    auVar93 = a64_TBL(ZEXT816(0),auVar174,auVar180,_DAT_00101190);
                    auVar154._0_8_ = auVar154._0_8_ + 8;
                    auVar154._8_8_ = lVar65 + 8;
                    auVar74._0_8_ = auVar74._0_8_ + 8;
                    auVar74._8_8_ = lVar71 + 8;
                    auVar104 = a64_TBL(ZEXT816(0),auVar149,auVar162,_DAT_00101190);
                    auVar75._0_8_ = auVar75._0_8_ + 8;
                    auVar75._8_8_ = lVar80 + 8;
                    lVar41 = lVar41 + 8;
                    lVar50 = lVar50 + 8;
                    *puVar6 = auVar45[0];
                    puVar6[1] = auVar93[0];
                    puVar6[2] = auVar104[0];
                    puVar6[3] = auVar159[0];
                    puVar6[4] = auVar45[1];
                    puVar6[5] = auVar93[1];
                    puVar6[6] = auVar104[1];
                    puVar6[7] = auVar159[1];
                    puVar6[8] = auVar45[2];
                    puVar6[9] = auVar93[2];
                    puVar6[10] = auVar104[2];
                    puVar6[0xb] = auVar159[2];
                    puVar6[0xc] = auVar45[3];
                    puVar6[0xd] = auVar93[3];
                    puVar6[0xe] = auVar104[3];
                    puVar6[0xf] = auVar159[3];
                    puVar6[0x10] = auVar45[4];
                    puVar6[0x11] = auVar93[4];
                    puVar6[0x12] = auVar104[4];
                    puVar6[0x13] = auVar159[4];
                    puVar6[0x14] = auVar45[5];
                    puVar6[0x15] = auVar93[5];
                    puVar6[0x16] = auVar104[5];
                    puVar6[0x17] = auVar159[5];
                    puVar6[0x18] = auVar45[6];
                    puVar6[0x19] = auVar93[6];
                    puVar6[0x1a] = auVar104[6];
                    puVar6[0x1b] = auVar159[6];
                    puVar6[0x1c] = auVar45[7];
                    puVar6[0x1d] = auVar93[7];
                    puVar6[0x1e] = auVar104[7];
                    puVar6[0x1f] = auVar159[7];
                    auVar45._8_8_ = auVar158._8_8_;
                    auVar45._0_8_ = auVar43._0_8_;
                    fVar120 = fStack_d8;
                    fVar53 = fStack_d4;
                    uVar18 = local_100;
                  } while ((uVar34 >> 3 & 0xfffffff) << 5 != lVar29);
                  uVar35 = param_3 & 0x7ffffff8;
                  if ((param_3 & 0x7ffffff8) == uVar34) goto LAB_00102f54;
                }
              }
              lVar23 = uVar28 - uVar35;
              do {
                fVar55 = 0.0;
                fVar40 = (float)(iVar19 + (int)lVar23 * (int)lVar23);
                if ((fVar40 < fVar7 != (NAN(fVar40) || NAN(fVar7))) &&
                   (fVar55 = 1.0, fVar183 <= fVar40)) {
                  fVar55 = fVar98 - (fVar40 - fVar183) / fVar119;
                }
                uVar67 = *(undefined4 *)(lVar36 + uVar35 * 4);
                lVar23 = lVar23 + -1;
                uVar37 = (undefined1)((uint)uVar67 >> 8);
                auVar109._6_2_ = 0;
                auVar109._0_6_ =
                     (uint6)CONCAT14(uVar37,(uint)CONCAT12(uVar37,(ushort)(byte)uVar67)) &
                     0xffff0000ffff;
                auVar109[8] = (char)((uint)uVar67 >> 0x10);
                auVar109._9_3_ = 0;
                auVar109[0xc] = (char)((uint)uVar67 >> 0x18);
                auVar109._13_3_ = 0;
                auVar109 = NEON_ucvtf(auVar109,4);
                fVar111 = fVar98;
                if (fVar183 <= fVar40) {
                  fVar111 = fVar98 - (fVar40 - fVar183) / fVar119;
                }
                auVar47._6_2_ = 0;
                auVar47._0_6_ =
                     CONCAT24((short)(int)(auVar109._4_4_ * fVar55),(int)(auVar109._0_4_ * fVar55))
                     & 0xffff0000ffff;
                auVar47._8_2_ = (short)(int)(auVar109._8_4_ * fVar55);
                auVar47._10_2_ = 0;
                auVar47._12_2_ = (short)(int)(auVar109._12_4_ * fVar55);
                auVar47._14_2_ = 0;
                fVar55 = fVar101;
                if (fVar40 < fVar7 != (NAN(fVar40) || NAN(fVar7))) {
                  fVar55 = fVar111;
                }
                auVar109 = NEON_ucvtf(auVar47,4);
                puVar6 = (undefined1 *)(lVar36 + uVar35 * 4);
                *puVar6 = (char)(int)(auVar109._0_4_ * fVar55);
                puVar6[1] = (char)(int)(auVar109._4_4_ * fVar55);
                puVar6[2] = (char)(int)(auVar109._8_4_ * fVar55);
                puVar6[3] = (char)(int)(auVar109._12_4_ * fVar55);
                uVar35 = uVar35 + 1;
              } while (uVar34 != uVar35);
            }
          }
          else {
            fVar120 = (float)(int)SQRT((double)iVar19);
            uVar18 = (uint)((float)(int)((int)(fVar83 - fVar120) &
                                        ((int)(fVar83 - fVar120) >> 0x1f ^ 0xffffffffU)) + -4.0);
            uVar18 = uVar18 & ((int)uVar18 >> 0x1f ^ 0xffffffffU);
            uVar35 = (ulong)uVar18;
            pvVar33 = (void *)(param_2 + uVar32 * uVar34 * 4);
            memset(pvVar33,0,uVar35 << 2);
            uVar4 = (int)(fVar83 + fVar120);
            if ((int)uVar16 <= (int)(fVar83 + fVar120)) {
              uVar4 = uVar16;
            }
            uVar5 = (int)((float)(int)uVar4 + 4.0);
            if ((int)uVar16 <= (int)((float)(int)uVar4 + 4.0)) {
              uVar5 = uVar16;
            }
            memset((void *)((long)pvVar33 + (long)(int)uVar5 * 4),0,
                   -(ulong)(uVar16 - uVar5 >> 0x1f) & 0xfffffffc00000000 |
                   (ulong)(uVar16 - uVar5) << 2);
            fVar53 = (float)(int)uVar18;
            fVar120 = fVar53 + 8.0;
            if (fVar120 != fVar53 && fVar120 < fVar53 == (NAN(fVar120) || NAN(fVar53))) {
              iVar19 = uVar28 - uVar18;
              do {
                fVar53 = 0.0;
                fVar60 = (float)(int)((uVar31 - iVar20) * (uVar31 - iVar20) + iVar19 * iVar19);
                if ((fVar60 < fVar7 != (NAN(fVar60) || NAN(fVar7))) &&
                   (fVar53 = 1.0, fVar183 <= fVar60)) {
                  fVar53 = fVar98 - (fVar60 - fVar183) / fVar119;
                }
                lVar23 = uVar35 * 4;
                uVar35 = uVar35 + 1;
                iVar19 = iVar19 + -1;
                fVar60 = (float)(int)uVar35;
                uVar67 = *(undefined4 *)(lVar36 + lVar23);
                uVar37 = (undefined1)((uint)uVar67 >> 8);
                auVar61._6_2_ = 0;
                auVar61._0_6_ =
                     (uint6)CONCAT14(uVar37,(uint)CONCAT12(uVar37,(ushort)(byte)uVar67)) &
                     0xffff0000ffff;
                auVar61[8] = (char)((uint)uVar67 >> 0x10);
                auVar61._9_3_ = 0;
                auVar61[0xc] = (char)((uint)uVar67 >> 0x18);
                auVar61._13_3_ = 0;
                auVar44 = NEON_ucvtf(auVar61,4);
                puVar6 = (undefined1 *)(lVar36 + lVar23);
                *puVar6 = (char)(int)(auVar44._0_4_ * fVar53);
                puVar6[1] = (char)(int)(auVar44._4_4_ * fVar53);
                puVar6[2] = (char)(int)(auVar44._8_4_ * fVar53);
                puVar6[3] = (char)(int)(auVar44._12_4_ * fVar53);
              } while (fVar120 != fVar60 && fVar120 < fVar60 == (NAN(fVar120) || NAN(fVar60)));
            }
            uVar35 = (ulong)(int)uVar5;
            auVar44._4_4_ = fVar119;
            auVar44._0_4_ = fVar119;
            auVar44._8_8_ = uVar181;
            auVar45._8_8_ = auVar158._8_8_;
            auVar45._0_8_ = auVar43._0_8_;
            auVar175._4_4_ = uVar28;
            auVar175._0_4_ = uVar28;
            auVar175._8_8_ = uStack_118;
            iVar19 = (int)((float)(int)uVar5 + -8.0);
            fVar120 = fStack_d8;
            fVar53 = fStack_d4;
            uVar18 = local_100;
            if (iVar19 < (int)uVar5) {
              uVar25 = (ulong)iVar19;
              uVar24 = uVar35 - uVar25;
              iVar20 = (uVar31 - iVar20) * (uVar31 - iVar20);
              if (7 < uVar24) {
                lVar29 = (~uVar25 + uVar35) * 4;
                lVar23 = ((lVar30 + uVar21) * uVar34 + uVar25) * 4;
                uVar27 = param_2 + 2 + lVar23;
                uVar26 = param_2 + 1 + lVar23;
                uVar2 = param_2 + 3 + lVar23;
                if ((((uVar27 <= uVar27 + lVar29 && uVar26 <= uVar26 + lVar29) &&
                     uVar2 <= uVar2 + lVar29) &&
                    (ulong)(param_2 + lVar23) <= (ulong)(param_2 + lVar23 + lVar29)) &&
                    ~uVar25 + uVar35 >> 0x3e == 0) {
                  in_q18._4_4_ = iVar20;
                  in_q18._0_4_ = iVar20;
                  in_q18._8_4_ = iVar20;
                  in_q18._12_4_ = iVar20;
                  if (uVar24 < 0x10) {
                    uVar26 = 0;
                  }
                  else {
                    lVar23 = uVar25 << 2;
                    iVar54 = iVar19 + _DAT_00101140;
                    iVar57 = iVar19 + _UNK_00101144;
                    uVar18 = iVar19 + _UNK_00101148;
                    iVar58 = iVar19 + _UNK_0010114c;
                    auVar63._0_4_ = iVar19 + _DAT_00101150;
                    auVar63._4_4_ = iVar19 + _UNK_00101154;
                    auVar63._8_4_ = iVar19 + _UNK_00101158;
                    auVar63._12_4_ = iVar19 + _UNK_0010115c;
                    auVar70._0_4_ = iVar19 + _DAT_00101160;
                    auVar70._4_4_ = iVar19 + _UNK_00101164;
                    auVar70._8_4_ = iVar19 + _UNK_00101168;
                    auVar70._12_4_ = iVar19 + _UNK_0010116c;
                    uVar26 = uVar24 & 0xfffffffffffffff0;
                    auVar77._0_4_ = iVar19 + _DAT_00101180;
                    auVar77._4_4_ = iVar19 + _UNK_00101184;
                    auVar77._8_4_ = iVar19 + _UNK_00101188;
                    auVar77._12_4_ = iVar19 + _UNK_0010118c;
                    iVar19 = (int)uVar26 + iVar19;
                    uVar27 = uVar26;
                    do {
                      local_100 = uVar18;
                      iVar130 = auVar175._0_4_;
                      iVar136 = auVar175._4_4_;
                      iVar137 = auVar175._8_4_;
                      iVar139 = auVar175._12_4_;
                      auVar11._8_8_ = auVar158._8_8_;
                      auVar11._0_8_ = auVar43._0_8_;
                      puVar6 = (undefined1 *)(lVar36 + lVar23);
                      uVar27 = uVar27 - 0x10;
                      lVar23 = lVar23 + 0x40;
                      iVar64 = in_q18._0_4_;
                      auVar95._0_4_ = iVar64 + (iVar130 - iVar54) * (iVar130 - iVar54);
                      iVar66 = in_q18._4_4_;
                      auVar95._4_4_ = iVar66 + (iVar136 - iVar57) * (iVar136 - iVar57);
                      iVar82 = in_q18._8_4_;
                      iVar99 = in_q18._12_4_;
                      auVar95._8_4_ = iVar82 + (iVar137 - local_100) * (iVar137 - local_100);
                      auVar95._12_4_ = iVar99 + (iVar139 - iVar58) * (iVar139 - iVar58);
                      auVar45 = NEON_scvtf(auVar95,4);
                      iVar49 = iVar130 - auVar63._0_4_;
                      iVar58 = auVar63._4_4_;
                      iVar51 = iVar136 - iVar58;
                      iVar59 = auVar63._8_4_;
                      iVar97 = iVar137 - iVar59;
                      iVar48 = auVar63._12_4_;
                      iVar100 = iVar139 - iVar48;
                      auVar124._0_4_ = iVar64 + iVar49 * iVar49;
                      auVar124._4_4_ = iVar66 + iVar51 * iVar51;
                      auVar124._8_4_ = iVar82 + iVar97 * iVar97;
                      auVar124._12_4_ = iVar99 + iVar100 * iVar100;
                      auVar154 = NEON_scvtf(auVar124,4);
                      iVar100 = iVar130 - auVar70._0_4_;
                      iVar49 = auVar70._4_4_;
                      iVar127 = iVar136 - iVar49;
                      iVar51 = auVar70._8_4_;
                      iVar128 = iVar137 - iVar51;
                      iVar97 = auVar70._12_4_;
                      iVar129 = iVar139 - iVar97;
                      auVar143._0_4_ = iVar64 + iVar100 * iVar100;
                      auVar143._4_4_ = iVar66 + iVar127 * iVar127;
                      auVar143._8_4_ = iVar82 + iVar128 * iVar128;
                      auVar143._12_4_ = iVar99 + iVar129 * iVar129;
                      auVar74 = NEON_scvtf(auVar143,4);
                      iVar130 = iVar130 - auVar77._0_4_;
                      iVar64 = auVar77._4_4_;
                      iVar136 = iVar136 - iVar64;
                      iVar66 = auVar77._8_4_;
                      iVar137 = iVar137 - iVar66;
                      iVar82 = auVar77._12_4_;
                      iVar139 = iVar139 - iVar82;
                      auVar171._0_4_ = fVar40 - (auVar45._0_4_ - fVar183) / fVar119;
                      auVar171._4_4_ = fVar55 - (auVar45._4_4_ - fVar183) / fVar119;
                      auVar171._8_4_ = fVar111 - (auVar45._8_4_ - fVar183) / fStack_d8;
                      auVar171._12_4_ = fVar112 - (auVar45._12_4_ - fVar183) / fStack_d4;
                      auVar147._0_4_ = iVar20 + iVar130 * iVar130;
                      auVar147._4_4_ = iVar20 + iVar136 * iVar136;
                      auVar147._8_4_ = iVar20 + iVar137 * iVar137;
                      auVar147._12_4_ = iVar20 + iVar139 * iVar139;
                      auVar75 = NEON_scvtf(auVar147,4);
                      auVar176._0_4_ = fVar40 - (auVar154._0_4_ - fVar183) / fVar119;
                      auVar176._4_4_ = fVar55 - (auVar154._4_4_ - fVar183) / fVar119;
                      auVar176._8_4_ = fVar111 - (auVar154._8_4_ - fVar183) / fStack_d8;
                      auVar176._12_4_ = fVar112 - (auVar154._12_4_ - fVar183) / fStack_d4;
                      auVar104 = NEON_fcmgt(auVar11,auVar45,4);
                      auVar12._8_8_ = auVar158._8_8_;
                      auVar12._0_8_ = auVar43._0_8_;
                      auVar125[0] = *puVar6;
                      auVar134[0] = puVar6[1];
                      auVar144[0] = puVar6[2];
                      auVar148[0] = puVar6[3];
                      auVar125[1] = puVar6[4];
                      auVar134[1] = puVar6[5];
                      auVar144[1] = puVar6[6];
                      auVar148[1] = puVar6[7];
                      auVar125[2] = puVar6[8];
                      auVar134[2] = puVar6[9];
                      auVar144[2] = puVar6[10];
                      auVar148[2] = puVar6[0xb];
                      auVar125[3] = puVar6[0xc];
                      auVar134[3] = puVar6[0xd];
                      auVar144[3] = puVar6[0xe];
                      auVar148[3] = puVar6[0xf];
                      auVar125[4] = puVar6[0x10];
                      auVar134[4] = puVar6[0x11];
                      auVar144[4] = puVar6[0x12];
                      auVar148[4] = puVar6[0x13];
                      auVar125[5] = puVar6[0x14];
                      auVar134[5] = puVar6[0x15];
                      auVar144[5] = puVar6[0x16];
                      auVar148[5] = puVar6[0x17];
                      auVar125[6] = puVar6[0x18];
                      auVar134[6] = puVar6[0x19];
                      auVar144[6] = puVar6[0x1a];
                      auVar148[6] = puVar6[0x1b];
                      auVar125[7] = puVar6[0x1c];
                      auVar134[7] = puVar6[0x1d];
                      auVar144[7] = puVar6[0x1e];
                      auVar148[7] = puVar6[0x1f];
                      auVar125[8] = puVar6[0x20];
                      auVar134[8] = puVar6[0x21];
                      auVar144[8] = puVar6[0x22];
                      auVar148[8] = puVar6[0x23];
                      auVar125[9] = puVar6[0x24];
                      auVar134[9] = puVar6[0x25];
                      auVar144[9] = puVar6[0x26];
                      auVar148[9] = puVar6[0x27];
                      auVar125[10] = puVar6[0x28];
                      auVar134[10] = puVar6[0x29];
                      auVar144[10] = puVar6[0x2a];
                      auVar148[10] = puVar6[0x2b];
                      auVar125[0xb] = puVar6[0x2c];
                      auVar134[0xb] = puVar6[0x2d];
                      auVar144[0xb] = puVar6[0x2e];
                      auVar148[0xb] = puVar6[0x2f];
                      auVar125[0xc] = puVar6[0x30];
                      auVar134[0xc] = puVar6[0x31];
                      auVar144[0xc] = puVar6[0x32];
                      auVar148[0xc] = puVar6[0x33];
                      auVar125[0xd] = puVar6[0x34];
                      auVar134[0xd] = puVar6[0x35];
                      auVar144[0xd] = puVar6[0x36];
                      auVar148[0xd] = puVar6[0x37];
                      auVar125[0xe] = puVar6[0x38];
                      auVar134[0xe] = puVar6[0x39];
                      auVar144[0xe] = puVar6[0x3a];
                      auVar148[0xe] = puVar6[0x3b];
                      auVar125[0xf] = puVar6[0x3c];
                      auVar134[0xf] = puVar6[0x3d];
                      auVar144[0xf] = puVar6[0x3e];
                      auVar148[0xf] = puVar6[0x3f];
                      auVar45 = NEON_fcmge(auVar45,auVar44,4);
                      auVar159 = NEON_fcmgt(auVar12,auVar154,4);
                      auVar8._4_4_ = fVar119;
                      auVar8._0_4_ = fVar119;
                      auVar8._8_8_ = uVar181;
                      auVar13._8_8_ = auVar158._8_8_;
                      auVar13._0_8_ = auVar43._0_8_;
                      auVar179._0_4_ = fVar40 - (auVar74._0_4_ - fVar183) / fVar119;
                      auVar179._4_4_ = fVar55 - (auVar74._4_4_ - fVar183) / fVar119;
                      auVar179._8_4_ = fVar111 - (auVar74._8_4_ - fVar183) / fStack_d8;
                      auVar179._12_4_ = fVar112 - (auVar74._12_4_ - fVar183) / fStack_d4;
                      auVar149 = NEON_fcmgt(auVar13,auVar74,4);
                      auVar154 = NEON_fcmge(auVar154,auVar8,4);
                      auVar9._4_4_ = fVar119;
                      auVar9._0_4_ = fVar119;
                      auVar9._8_8_ = uVar181;
                      auVar14._8_8_ = auVar158._8_8_;
                      auVar14._0_8_ = auVar43._0_8_;
                      auVar93 = a64_TBL(ZEXT816(0),auVar125,_DAT_001011c0);
                      auVar155 = NEON_fcmgt(auVar14,auVar75,4);
                      auVar74 = NEON_fcmge(auVar74,auVar9,4);
                      auVar10._4_4_ = fVar119;
                      auVar10._0_4_ = fVar119;
                      auVar10._8_8_ = uVar181;
                      auVar152 = NEON_fcmge(auVar75,auVar10,4);
                      auVar44 = a64_TBL(ZEXT816(0),auVar134,_DAT_001011c0);
                      auVar121._0_4_ = fVar40 - (auVar75._0_4_ - fVar183) / fVar119;
                      auVar121._4_4_ = fVar55 - (auVar75._4_4_ - fVar183) / fVar119;
                      auVar121._8_4_ = fVar111 - (auVar75._8_4_ - fVar183) / fStack_d8;
                      auVar121._12_4_ = fVar112 - (auVar75._12_4_ - fVar183) / fStack_d4;
                      auVar150 = NEON_bsl(auVar104,auVar109,auVar171,1);
                      auVar156 = NEON_bsl(auVar159,auVar109,auVar176,1);
                      auVar44 = NEON_ucvtf(auVar44,4);
                      auVar160 = NEON_bsl(auVar149,auVar109,auVar179,1);
                      auVar174 = a64_TBL(ZEXT816(0),auVar148,_DAT_001011f0);
                      auVar182 = NEON_bsl(auVar155,auVar109,auVar121,1);
                      auVar168 = a64_TBL(ZEXT816(0),auVar148,_DAT_001011c0);
                      auVar166 = a64_TBL(ZEXT816(0),auVar148,_DAT_00101130);
                      auVar178 = a64_TBL(ZEXT816(0),auVar148,_DAT_00101230);
                      auVar149 = a64_TBL(ZEXT816(0),auVar125,_DAT_00101230);
                      auVar104 = a64_TBL(ZEXT816(0),auVar125,_DAT_00101130);
                      auVar159 = a64_TBL(ZEXT816(0),auVar125,_DAT_001011f0);
                      auVar155 = a64_TBL(ZEXT816(0),auVar134,_DAT_00101230);
                      auVar126 = a64_TBL(ZEXT816(0),auVar144,_DAT_001011c0);
                      auVar75 = a64_TBL(ZEXT816(0),auVar134,_DAT_00101130);
                      auVar162 = a64_TBL(ZEXT816(0),auVar134,_DAT_001011f0);
                      auVar172 = a64_TBL(ZEXT816(0),auVar144,_DAT_00101130);
                      auVar177 = a64_TBL(ZEXT816(0),auVar144,_DAT_001011f0);
                      auVar180 = a64_TBL(ZEXT816(0),auVar144,_DAT_00101230);
                      auVar168 = NEON_ucvtf(auVar168,4);
                      fVar79 = (float)CONCAT13(auVar182[3] & ~auVar152[3],
                                               CONCAT12(auVar182[2] & ~auVar152[2],
                                                        CONCAT11(auVar182[1] & ~auVar152[1],
                                                                 auVar182[0] & ~auVar152[0])));
                      auVar132._0_8_ =
                           CONCAT17(auVar182[7] & ~auVar152[7],
                                    CONCAT16(auVar182[6] & ~auVar152[6],
                                             CONCAT15(auVar182[5] & ~auVar152[5],
                                                      CONCAT14(auVar182[4] & ~auVar152[4],fVar79))))
                      ;
                      auVar132[8] = auVar182[8] & ~auVar152[8];
                      auVar132[9] = auVar182[9] & ~auVar152[9];
                      auVar132[10] = auVar182[10] & ~auVar152[10];
                      auVar132[0xb] = auVar182[0xb] & ~auVar152[0xb];
                      auVar135[0xc] = auVar182[0xc] & ~auVar152[0xc];
                      auVar135._0_12_ = auVar132;
                      auVar135[0xd] = auVar182[0xd] & ~auVar152[0xd];
                      auVar135[0xe] = auVar182[0xe] & ~auVar152[0xe];
                      auVar135[0xf] = auVar182[0xf] & ~auVar152[0xf];
                      fVar120 = (float)CONCAT13(auVar156[3] & ~auVar154[3],
                                                CONCAT12(auVar156[2] & ~auVar154[2],
                                                         CONCAT11(auVar156[1] & ~auVar154[1],
                                                                  auVar156[0] & ~auVar154[0])));
                      auVar92._0_8_ =
                           CONCAT17(auVar156[7] & ~auVar154[7],
                                    CONCAT16(auVar156[6] & ~auVar154[6],
                                             CONCAT15(auVar156[5] & ~auVar154[5],
                                                      CONCAT14(auVar156[4] & ~auVar154[4],fVar120)))
                                   );
                      auVar92[8] = auVar156[8] & ~auVar154[8];
                      auVar92[9] = auVar156[9] & ~auVar154[9];
                      auVar92[10] = auVar156[10] & ~auVar154[10];
                      auVar92[0xb] = auVar156[0xb] & ~auVar154[0xb];
                      auVar96[0xc] = auVar156[0xc] & ~auVar154[0xc];
                      auVar96._0_12_ = auVar92;
                      auVar96[0xd] = auVar156[0xd] & ~auVar154[0xd];
                      auVar96[0xe] = auVar156[0xe] & ~auVar154[0xe];
                      auVar96[0xf] = auVar156[0xf] & ~auVar154[0xf];
                      auVar154 = NEON_ucvtf(auVar178,4);
                      auVar152 = NEON_ucvtf(auVar93,4);
                      fVar60 = (float)CONCAT13(auVar160[3] & ~auVar74[3],
                                               CONCAT12(auVar160[2] & ~auVar74[2],
                                                        CONCAT11(auVar160[1] & ~auVar74[1],
                                                                 auVar160[0] & ~auVar74[0])));
                      auVar103._0_8_ =
                           CONCAT17(auVar160[7] & ~auVar74[7],
                                    CONCAT16(auVar160[6] & ~auVar74[6],
                                             CONCAT15(auVar160[5] & ~auVar74[5],
                                                      CONCAT14(auVar160[4] & ~auVar74[4],fVar60))));
                      auVar103[8] = auVar160[8] & ~auVar74[8];
                      auVar103[9] = auVar160[9] & ~auVar74[9];
                      auVar103[10] = auVar160[10] & ~auVar74[10];
                      auVar103[0xb] = auVar160[0xb] & ~auVar74[0xb];
                      auVar105[0xc] = auVar160[0xc] & ~auVar74[0xc];
                      auVar105._0_12_ = auVar103;
                      auVar105[0xd] = auVar160[0xd] & ~auVar74[0xd];
                      auVar105[0xe] = auVar160[0xe] & ~auVar74[0xe];
                      auVar105[0xf] = auVar160[0xf] & ~auVar74[0xf];
                      fVar83 = (float)CONCAT13(auVar150[3] & ~auVar45[3],
                                               CONCAT12(auVar150[2] & ~auVar45[2],
                                                        CONCAT11(auVar150[1] & ~auVar45[1],
                                                                 auVar150[0] & ~auVar45[0])));
                      auVar84._0_8_ =
                           CONCAT17(auVar150[7] & ~auVar45[7],
                                    CONCAT16(auVar150[6] & ~auVar45[6],
                                             CONCAT15(auVar150[5] & ~auVar45[5],
                                                      CONCAT14(auVar150[4] & ~auVar45[4],fVar83))));
                      auVar84[8] = auVar150[8] & ~auVar45[8];
                      auVar84[9] = auVar150[9] & ~auVar45[9];
                      auVar84[10] = auVar150[10] & ~auVar45[10];
                      auVar84[0xb] = auVar150[0xb] & ~auVar45[0xb];
                      auVar88[0xc] = auVar150[0xc] & ~auVar45[0xc];
                      auVar88._0_12_ = auVar84;
                      auVar88[0xd] = auVar150[0xd] & ~auVar45[0xd];
                      auVar88[0xe] = auVar150[0xe] & ~auVar45[0xe];
                      auVar88[0xf] = auVar150[0xf] & ~auVar45[0xf];
                      auVar74 = NEON_ucvtf(auVar174,4);
                      auVar149 = NEON_ucvtf(auVar149,4);
                      auVar93 = NEON_ucvtf(auVar166,4);
                      auVar159 = NEON_ucvtf(auVar159,4);
                      auVar150 = NEON_ucvtf(auVar155,4);
                      auVar45 = NEON_ucvtf(auVar126,4);
                      auVar104 = NEON_ucvtf(auVar104,4);
                      auVar126 = NEON_ucvtf(auVar162,4);
                      auVar162 = NEON_ucvtf(auVar180,4);
                      fVar81 = (float)((ulong)auVar132._0_8_ >> 0x20);
                      fVar138 = auVar132._8_4_;
                      fVar140 = auVar135._12_4_;
                      auVar156 = NEON_ucvtf(auVar75,4);
                      auVar155 = NEON_ucvtf(auVar177,4);
                      fVar52 = (float)((ulong)auVar103._0_8_ >> 0x20);
                      fVar72 = auVar103._8_4_;
                      fVar78 = auVar105._12_4_;
                      auVar75 = NEON_ucvtf(auVar172,4);
                      fVar53 = (float)((ulong)auVar92._0_8_ >> 0x20);
                      fVar98 = auVar92._8_4_;
                      fVar101 = auVar96._12_4_;
                      fVar89 = (float)((ulong)auVar84._0_8_ >> 0x20);
                      fVar90 = auVar84._8_4_;
                      fVar91 = auVar88._12_4_;
                      in_q16._0_4_ = fVar79 * auVar45._0_4_;
                      in_q16._4_4_ = fVar81 * auVar45._4_4_;
                      in_q16._8_4_ = fVar138 * auVar45._8_4_;
                      in_q16._12_4_ = fVar140 * auVar45._12_4_;
                      auVar106._0_4_ = (int)(fVar79 * auVar168._0_4_);
                      auVar106._4_4_ = (int)(fVar81 * auVar168._4_4_);
                      auVar106._8_4_ = (int)(fVar138 * auVar168._8_4_);
                      auVar106._12_4_ = (int)(fVar140 * auVar168._12_4_);
                      auVar107._0_4_ = (int)(fVar60 * auVar154._0_4_);
                      auVar107._4_4_ = (int)(fVar52 * auVar154._4_4_);
                      auVar107._8_4_ = (int)(fVar72 * auVar154._8_4_);
                      auVar107._12_4_ = (int)(fVar78 * auVar154._12_4_);
                      auVar116._0_4_ = (int)(fVar79 * auVar152._0_4_);
                      auVar116._4_4_ = (int)(fVar81 * auVar152._4_4_);
                      auVar116._8_4_ = (int)(fVar138 * auVar152._8_4_);
                      auVar116._12_4_ = (int)(fVar140 * auVar152._12_4_);
                      auVar110._0_4_ = (int)(fVar120 * auVar74._0_4_);
                      auVar110._4_4_ = (int)(fVar53 * auVar74._4_4_);
                      auVar110._8_4_ = (int)(fVar98 * auVar74._8_4_);
                      auVar110._12_4_ = (int)(fVar101 * auVar74._12_4_);
                      auVar117._0_4_ = (int)(fVar60 * auVar149._0_4_);
                      auVar117._4_4_ = (int)(fVar52 * auVar149._4_4_);
                      auVar117._8_4_ = (int)(fVar72 * auVar149._8_4_);
                      auVar117._12_4_ = (int)(fVar78 * auVar149._12_4_);
                      in_q17._0_4_ = (int)(fVar79 * auVar44._0_4_);
                      in_q17._4_4_ = (int)(fVar81 * auVar44._4_4_);
                      in_q17._8_4_ = (int)(fVar138 * auVar44._8_4_);
                      in_q17._12_4_ = (int)(fVar140 * auVar44._12_4_);
                      auVar114._0_4_ = (int)(fVar83 * auVar93._0_4_);
                      auVar114._4_4_ = (int)(fVar89 * auVar93._4_4_);
                      auVar114._8_4_ = (int)(fVar90 * auVar93._8_4_);
                      auVar114._12_4_ = (int)(fVar91 * auVar93._12_4_);
                      auVar118._0_4_ = (int)(fVar120 * auVar159._0_4_);
                      auVar118._4_4_ = (int)(fVar53 * auVar159._4_4_);
                      auVar118._8_4_ = (int)(fVar98 * auVar159._8_4_);
                      auVar118._12_4_ = (int)(fVar101 * auVar159._12_4_);
                      auVar145._0_4_ = (int)(fVar60 * auVar150._0_4_);
                      auVar145._4_4_ = (int)(fVar52 * auVar150._4_4_);
                      auVar145._8_4_ = (int)(fVar72 * auVar150._8_4_);
                      auVar145._12_4_ = (int)(fVar78 * auVar150._12_4_);
                      auVar153._0_4_ = (int)in_q16._0_4_;
                      auVar153._4_4_ = (int)in_q16._4_4_;
                      auVar153._8_4_ = (int)in_q16._8_4_;
                      auVar153._12_4_ = (int)in_q16._12_4_;
                      auVar122._0_4_ = (int)(fVar83 * auVar104._0_4_);
                      auVar122._4_4_ = (int)(fVar89 * auVar104._4_4_);
                      auVar122._8_4_ = (int)(fVar90 * auVar104._8_4_);
                      auVar122._12_4_ = (int)(fVar91 * auVar104._12_4_);
                      in_q19._0_4_ = (float)(int)(fVar120 * auVar126._0_4_);
                      in_q19._4_4_ = (float)(int)(fVar53 * auVar126._4_4_);
                      in_q19._8_4_ = (float)(int)(fVar98 * auVar126._8_4_);
                      in_q19._12_4_ = (float)(int)(fVar101 * auVar126._12_4_);
                      auVar157._0_4_ = (int)(fVar60 * auVar162._0_4_);
                      auVar157._4_4_ = (int)(fVar52 * auVar162._4_4_);
                      auVar157._8_4_ = (int)(fVar72 * auVar162._8_4_);
                      auVar157._12_4_ = (int)(fVar78 * auVar162._12_4_);
                      in_q20._0_4_ = (float)(int)(fVar83 * auVar156._0_4_);
                      in_q20._4_4_ = (float)(int)(fVar89 * auVar156._4_4_);
                      in_q20._8_4_ = (float)(int)(fVar90 * auVar156._8_4_);
                      in_q20._12_4_ = (float)(int)(fVar91 * auVar156._12_4_);
                      auVar161._0_4_ = (int)(fVar120 * auVar155._0_4_);
                      auVar161._4_4_ = (int)(fVar53 * auVar155._4_4_);
                      auVar161._8_4_ = (int)(fVar98 * auVar155._8_4_);
                      auVar161._12_4_ = (int)(fVar101 * auVar155._12_4_);
                      auVar167._0_4_ = (int)(fVar83 * auVar75._0_4_);
                      auVar167._4_4_ = (int)(fVar89 * auVar75._4_4_);
                      auVar167._8_4_ = (int)(fVar90 * auVar75._8_4_);
                      auVar167._12_4_ = (int)(fVar91 * auVar75._12_4_);
                      auVar93 = a64_TBL(ZEXT816(0),auVar106,auVar107,auVar110,auVar114,_DAT_001011d0
                                       );
                      auVar154 = a64_TBL(ZEXT816(0),auVar116,auVar117,auVar118,auVar122,
                                         _DAT_001011d0);
                      auVar74 = a64_TBL(ZEXT816(0),in_q17,auVar145,in_q19,in_q20,_DAT_001011d0);
                      auVar75 = a64_TBL(ZEXT816(0),auVar153,auVar157,auVar161,auVar167,_DAT_001011d0
                                       );
                      auVar77._0_4_ = auVar77._0_4_ + 0x10;
                      auVar77._4_4_ = iVar64 + 0x10;
                      auVar77._8_4_ = iVar66 + 0x10;
                      auVar77._12_4_ = iVar82 + 0x10;
                      auVar70._0_4_ = auVar70._0_4_ + 0x10;
                      auVar70._4_4_ = iVar49 + 0x10;
                      auVar70._8_4_ = iVar51 + 0x10;
                      auVar70._12_4_ = iVar97 + 0x10;
                      auVar63._0_4_ = auVar63._0_4_ + 0x10;
                      auVar63._4_4_ = iVar58 + 0x10;
                      auVar63._8_4_ = iVar59 + 0x10;
                      auVar63._12_4_ = iVar48 + 0x10;
                      iVar54 = iVar54 + 0x10;
                      iVar57 = iVar57 + 0x10;
                      iVar58 = iStack_104 + 0x10;
                      *puVar6 = auVar154[0];
                      puVar6[1] = auVar74[0];
                      puVar6[2] = auVar75[0];
                      puVar6[3] = auVar93[0];
                      puVar6[4] = auVar154[1];
                      puVar6[5] = auVar74[1];
                      puVar6[6] = auVar75[1];
                      puVar6[7] = auVar93[1];
                      puVar6[8] = auVar154[2];
                      puVar6[9] = auVar74[2];
                      puVar6[10] = auVar75[2];
                      puVar6[0xb] = auVar93[2];
                      puVar6[0xc] = auVar154[3];
                      puVar6[0xd] = auVar74[3];
                      puVar6[0xe] = auVar75[3];
                      puVar6[0xf] = auVar93[3];
                      puVar6[0x10] = auVar154[4];
                      puVar6[0x11] = auVar74[4];
                      puVar6[0x12] = auVar75[4];
                      puVar6[0x13] = auVar93[4];
                      puVar6[0x14] = auVar154[5];
                      puVar6[0x15] = auVar74[5];
                      puVar6[0x16] = auVar75[5];
                      puVar6[0x17] = auVar93[5];
                      puVar6[0x18] = auVar154[6];
                      puVar6[0x19] = auVar74[6];
                      puVar6[0x1a] = auVar75[6];
                      puVar6[0x1b] = auVar93[6];
                      puVar6[0x1c] = auVar154[7];
                      puVar6[0x1d] = auVar74[7];
                      puVar6[0x1e] = auVar75[7];
                      puVar6[0x1f] = auVar93[7];
                      puVar6[0x20] = auVar154[8];
                      puVar6[0x21] = auVar74[8];
                      puVar6[0x22] = auVar75[8];
                      puVar6[0x23] = auVar93[8];
                      puVar6[0x24] = auVar154[9];
                      puVar6[0x25] = auVar74[9];
                      puVar6[0x26] = auVar75[9];
                      puVar6[0x27] = auVar93[9];
                      puVar6[0x28] = auVar154[10];
                      puVar6[0x29] = auVar74[10];
                      puVar6[0x2a] = auVar75[10];
                      puVar6[0x2b] = auVar93[10];
                      puVar6[0x2c] = auVar154[0xb];
                      puVar6[0x2d] = auVar74[0xb];
                      puVar6[0x2e] = auVar75[0xb];
                      puVar6[0x2f] = auVar93[0xb];
                      puVar6[0x30] = auVar154[0xc];
                      puVar6[0x31] = auVar74[0xc];
                      puVar6[0x32] = auVar75[0xc];
                      puVar6[0x33] = auVar93[0xc];
                      puVar6[0x34] = auVar154[0xd];
                      puVar6[0x35] = auVar74[0xd];
                      puVar6[0x36] = auVar75[0xd];
                      puVar6[0x37] = auVar93[0xd];
                      puVar6[0x38] = auVar154[0xe];
                      puVar6[0x39] = auVar74[0xe];
                      puVar6[0x3a] = auVar75[0xe];
                      puVar6[0x3b] = auVar93[0xe];
                      puVar6[0x3c] = auVar154[0xf];
                      puVar6[0x3d] = auVar74[0xf];
                      puVar6[0x3e] = auVar75[0xf];
                      puVar6[0x3f] = auVar93[0xf];
                      uVar18 = iStack_108 + 0x10;
                    } while (uVar27 != 0);
                    fVar101 = 0.0;
                    fVar98 = 1.0;
                    fVar83 = fVar38;
                    fVar89 = fVar39;
                    fVar90 = fVar113;
                    fVar91 = fVar115;
                    fVar120 = fStack_d8;
                    fVar53 = fStack_d4;
                    uVar18 = local_100;
                    if (uVar24 == uVar26) goto LAB_00102f54;
                    if (((uint)uVar24 >> 3 & 1) == 0) {
                      uVar25 = uVar26 + uVar25;
                      goto LAB_00103964;
                    }
                  }
                  uVar27 = uVar24 & 0xfffffffffffffff8;
                  lVar29 = uVar26 * 4 + uVar25 * 4;
                  iVar54 = iVar19 + _DAT_00101160;
                  iVar57 = iVar19 + _UNK_00101164;
                  iVar58 = iVar19 + _UNK_00101168;
                  iVar59 = iVar19 + _UNK_0010116c;
                  uVar25 = uVar27 + uVar25;
                  lVar23 = uVar26 - uVar27;
                  auVar62._0_4_ = iVar19 + _DAT_00101180;
                  auVar62._4_4_ = iVar19 + _UNK_00101184;
                  auVar62._8_4_ = iVar19 + _UNK_00101188;
                  auVar62._12_4_ = iVar19 + _UNK_0010118c;
                  do {
                    auVar158._0_8_ = auVar43._0_8_;
                    iVar19 = auVar175._0_4_ - auVar62._0_4_;
                    iVar97 = auVar62._4_4_;
                    iVar48 = auVar175._4_4_ - iVar97;
                    iVar64 = auVar62._8_4_;
                    iVar49 = auVar175._8_4_ - iVar64;
                    iVar66 = auVar62._12_4_;
                    iVar51 = auVar175._12_4_ - iVar66;
                    auVar141._8_8_ = in_q18._8_8_;
                    puVar6 = (undefined1 *)(lVar36 + lVar29);
                    auVar123[0] = *puVar6;
                    auVar133[0] = puVar6[1];
                    auVar141[0] = puVar6[2];
                    auVar146[0] = puVar6[3];
                    auVar123[1] = puVar6[4];
                    auVar133[1] = puVar6[5];
                    auVar141[1] = puVar6[6];
                    auVar146[1] = puVar6[7];
                    auVar123[2] = puVar6[8];
                    auVar133[2] = puVar6[9];
                    auVar141[2] = puVar6[10];
                    auVar146[2] = puVar6[0xb];
                    auVar123[3] = puVar6[0xc];
                    auVar133[3] = puVar6[0xd];
                    auVar141[3] = puVar6[0xe];
                    auVar146[3] = puVar6[0xf];
                    auVar123[4] = puVar6[0x10];
                    auVar133[4] = puVar6[0x11];
                    auVar141[4] = puVar6[0x12];
                    auVar146[4] = puVar6[0x13];
                    auVar123[5] = puVar6[0x14];
                    auVar133[5] = puVar6[0x15];
                    auVar141[5] = puVar6[0x16];
                    auVar146[5] = puVar6[0x17];
                    auVar123[6] = puVar6[0x18];
                    auVar133[6] = puVar6[0x19];
                    auVar141[6] = puVar6[0x1a];
                    auVar146[6] = puVar6[0x1b];
                    auVar123._8_8_ = in_q16._8_8_;
                    auVar123[7] = puVar6[0x1c];
                    auVar133._8_8_ = in_q17._8_8_;
                    auVar133[7] = puVar6[0x1d];
                    auVar141[7] = puVar6[0x1e];
                    auVar146._8_8_ = in_q19._8_8_;
                    auVar146[7] = puVar6[0x1f];
                    auVar62._0_4_ = auVar62._0_4_ + 8;
                    auVar62._4_4_ = iVar97 + 8;
                    auVar62._8_4_ = iVar64 + 8;
                    auVar62._12_4_ = iVar66 + 8;
                    lVar23 = lVar23 + 8;
                    lVar29 = lVar29 + 0x20;
                    auVar68._0_4_ = in_q18._0_4_ + iVar19 * iVar19;
                    auVar68._4_4_ = in_q18._4_4_ + iVar48 * iVar48;
                    auVar68._8_4_ = in_q18._8_4_ + iVar49 * iVar49;
                    auVar68._12_4_ = in_q18._12_4_ + iVar51 * iVar51;
                    auVar154 = a64_TBL(ZEXT816(0),auVar146,_DAT_001011c0);
                    auVar168 = a64_TBL(ZEXT816(0),auVar133,_DAT_00101230);
                    auVar45 = NEON_scvtf(auVar68,4);
                    iVar19 = auVar175._0_4_ - iVar54;
                    iVar48 = auVar175._4_4_ - iVar57;
                    iVar49 = auVar175._8_4_ - iVar58;
                    iVar51 = auVar175._12_4_ - iVar59;
                    iVar54 = iVar54 + 8;
                    iVar57 = iVar57 + 8;
                    iVar58 = iVar58 + 8;
                    iVar59 = iVar59 + 8;
                    auVar155 = NEON_ucvtf(auVar154,4);
                    auVar85._0_4_ = in_q18._0_4_ + iVar19 * iVar19;
                    auVar85._4_4_ = in_q18._4_4_ + iVar48 * iVar48;
                    auVar85._8_4_ = in_q18._8_4_ + iVar49 * iVar49;
                    auVar85._12_4_ = in_q18._12_4_ + iVar51 * iVar51;
                    auVar93 = NEON_fcmgt(auVar158,auVar45,4);
                    auVar154 = NEON_fcmge(auVar45,auVar44,4);
                    auVar74 = NEON_scvtf(auVar85,4);
                    auVar104 = NEON_fcmgt(auVar158,auVar74,4);
                    auVar159 = a64_TBL(ZEXT816(0),auVar123,_DAT_001011c0);
                    auVar75 = NEON_fcmge(auVar74,auVar44,4);
                    auVar162 = a64_TBL(ZEXT816(0),auVar133,_DAT_001011c0);
                    auVar149 = a64_TBL(ZEXT816(0),auVar141,_DAT_001011c0);
                    auVar69._0_4_ = fVar40 - (auVar45._0_4_ - fVar183) / fVar119;
                    auVar69._4_4_ = fVar55 - (auVar45._4_4_ - fVar183) / fVar119;
                    auVar69._8_4_ = fVar111 - (auVar45._8_4_ - fVar183) / fStack_d8;
                    auVar69._12_4_ = fVar112 - (auVar45._12_4_ - fVar183) / fStack_d4;
                    auVar45 = NEON_bit(auVar69,auVar109,auVar93,1);
                    auVar93 = a64_TBL(ZEXT816(0),auVar146,_DAT_00101230);
                    fVar120 = (float)CONCAT13(auVar45[3] & ~auVar154[3],
                                              CONCAT12(auVar45[2] & ~auVar154[2],
                                                       CONCAT11(auVar45[1] & ~auVar154[1],
                                                                auVar45[0] & ~auVar154[0])));
                    auVar42._0_8_ =
                         CONCAT17(auVar45[7] & ~auVar154[7],
                                  CONCAT16(auVar45[6] & ~auVar154[6],
                                           CONCAT15(auVar45[5] & ~auVar154[5],
                                                    CONCAT14(auVar45[4] & ~auVar154[4],fVar120))));
                    auVar42[8] = auVar45[8] & ~auVar154[8];
                    auVar42[9] = auVar45[9] & ~auVar154[9];
                    auVar42[10] = auVar45[10] & ~auVar154[10];
                    auVar42[0xb] = auVar45[0xb] & ~auVar154[0xb];
                    auVar46[0xc] = auVar45[0xc] & ~auVar154[0xc];
                    auVar46._0_12_ = auVar42;
                    auVar46[0xd] = auVar45[0xd] & ~auVar154[0xd];
                    auVar46[0xe] = auVar45[0xe] & ~auVar154[0xe];
                    auVar46[0xf] = auVar45[0xf] & ~auVar154[0xf];
                    auVar45 = NEON_ucvtf(auVar93,4);
                    auVar93 = NEON_ucvtf(auVar159,4);
                    auVar86._0_4_ = fVar40 - (auVar74._0_4_ - fVar183) / fVar119;
                    auVar86._4_4_ = fVar55 - (auVar74._4_4_ - fVar183) / fVar119;
                    auVar86._8_4_ = fVar111 - (auVar74._8_4_ - fVar183) / fStack_d8;
                    auVar86._12_4_ = fVar112 - (auVar74._12_4_ - fVar183) / fStack_d4;
                    fVar53 = (float)((ulong)auVar42._0_8_ >> 0x20);
                    fVar60 = auVar42._8_4_;
                    fVar52 = auVar46._12_4_;
                    auVar154 = NEON_bit(auVar86,auVar109,auVar104,1);
                    auVar74 = a64_TBL(ZEXT816(0),auVar123,_DAT_00101230);
                    auVar104 = a64_TBL(ZEXT816(0),auVar141,_DAT_00101230);
                    auVar159 = NEON_ucvtf(auVar168,4);
                    auVar149 = NEON_ucvtf(auVar149,4);
                    in_q20._0_4_ = (float)(int)(fVar120 * auVar93._0_4_);
                    in_q20._4_4_ = (float)(int)(fVar53 * auVar93._4_4_);
                    in_q20._8_4_ = (float)(int)(fVar60 * auVar93._8_4_);
                    in_q20._12_4_ = (float)(int)(fVar52 * auVar93._12_4_);
                    fVar72 = (float)CONCAT13(auVar154[3] & ~auVar75[3],
                                             CONCAT12(auVar154[2] & ~auVar75[2],
                                                      CONCAT11(auVar154[1] & ~auVar75[1],
                                                               auVar154[0] & ~auVar75[0])));
                    auVar73._0_8_ =
                         CONCAT17(auVar154[7] & ~auVar75[7],
                                  CONCAT16(auVar154[6] & ~auVar75[6],
                                           CONCAT15(auVar154[5] & ~auVar75[5],
                                                    CONCAT14(auVar154[4] & ~auVar75[4],fVar72))));
                    auVar73[8] = auVar154[8] & ~auVar75[8];
                    auVar73[9] = auVar154[9] & ~auVar75[9];
                    auVar73[10] = auVar154[10] & ~auVar75[10];
                    auVar73[0xb] = auVar154[0xb] & ~auVar75[0xb];
                    auVar76[0xc] = auVar154[0xc] & ~auVar75[0xc];
                    auVar76._0_12_ = auVar73;
                    auVar76[0xd] = auVar154[0xd] & ~auVar75[0xd];
                    auVar76[0xe] = auVar154[0xe] & ~auVar75[0xe];
                    auVar76[0xf] = auVar154[0xf] & ~auVar75[0xf];
                    auVar154 = NEON_ucvtf(auVar74,4);
                    auVar74 = NEON_ucvtf(auVar162,4);
                    auVar75 = NEON_ucvtf(auVar104,4);
                    fVar78 = (float)((ulong)auVar73._0_8_ >> 0x20);
                    fVar79 = auVar73._8_4_;
                    fVar81 = auVar76._12_4_;
                    auVar142._0_4_ = (int)(fVar120 * auVar155._0_4_);
                    auVar142._4_4_ = (int)(fVar53 * auVar155._4_4_);
                    auVar142._8_4_ = (int)(fVar60 * auVar155._8_4_);
                    auVar142._12_4_ = (int)(fVar52 * auVar155._12_4_);
                    in_q19._0_4_ = (float)(int)(fVar72 * auVar45._0_4_);
                    in_q19._4_4_ = (float)(int)(fVar78 * auVar45._4_4_);
                    in_q19._8_4_ = (float)(int)(fVar79 * auVar45._8_4_);
                    in_q19._12_4_ = (float)(int)(fVar81 * auVar45._12_4_);
                    auVar151._0_4_ = (int)(fVar72 * auVar154._0_4_);
                    auVar151._4_4_ = (int)(fVar78 * auVar154._4_4_);
                    auVar151._8_4_ = (int)(fVar79 * auVar154._8_4_);
                    auVar151._12_4_ = (int)(fVar81 * auVar154._12_4_);
                    auVar87._0_4_ = (int)(fVar120 * auVar74._0_4_);
                    auVar87._4_4_ = (int)(fVar53 * auVar74._4_4_);
                    auVar87._8_4_ = (int)(fVar60 * auVar74._8_4_);
                    auVar87._12_4_ = (int)(fVar52 * auVar74._12_4_);
                    auVar94._0_4_ = (int)(fVar72 * auVar159._0_4_);
                    auVar94._4_4_ = (int)(fVar78 * auVar159._4_4_);
                    auVar94._8_4_ = (int)(fVar79 * auVar159._8_4_);
                    auVar94._12_4_ = (int)(fVar81 * auVar159._12_4_);
                    in_q16._0_4_ = (float)(int)(fVar120 * auVar149._0_4_);
                    in_q16._4_4_ = (float)(int)(fVar53 * auVar149._4_4_);
                    in_q16._8_4_ = (float)(int)(fVar60 * auVar149._8_4_);
                    in_q16._12_4_ = (float)(int)(fVar52 * auVar149._12_4_);
                    in_q17._0_4_ = (int)(fVar72 * auVar75._0_4_);
                    in_q17._4_4_ = (int)(fVar78 * auVar75._4_4_);
                    in_q17._8_4_ = (int)(fVar79 * auVar75._8_4_);
                    in_q17._12_4_ = (int)(fVar81 * auVar75._12_4_);
                    auVar75 = a64_TBL(ZEXT816(0),auVar142,in_q19,_DAT_00101190);
                    auVar45 = a64_TBL(ZEXT816(0),in_q20,auVar151,_DAT_00101190);
                    auVar154 = a64_TBL(ZEXT816(0),auVar87,auVar94,_DAT_00101190);
                    auVar74 = a64_TBL(ZEXT816(0),in_q16,in_q17,_DAT_00101190);
                    *puVar6 = auVar45[0];
                    puVar6[1] = auVar154[0];
                    puVar6[2] = auVar74[0];
                    puVar6[3] = auVar75[0];
                    puVar6[4] = auVar45[1];
                    puVar6[5] = auVar154[1];
                    puVar6[6] = auVar74[1];
                    puVar6[7] = auVar75[1];
                    puVar6[8] = auVar45[2];
                    puVar6[9] = auVar154[2];
                    puVar6[10] = auVar74[2];
                    puVar6[0xb] = auVar75[2];
                    puVar6[0xc] = auVar45[3];
                    puVar6[0xd] = auVar154[3];
                    puVar6[0xe] = auVar74[3];
                    puVar6[0xf] = auVar75[3];
                    puVar6[0x10] = auVar45[4];
                    puVar6[0x11] = auVar154[4];
                    puVar6[0x12] = auVar74[4];
                    puVar6[0x13] = auVar75[4];
                    puVar6[0x14] = auVar45[5];
                    puVar6[0x15] = auVar154[5];
                    puVar6[0x16] = auVar74[5];
                    puVar6[0x17] = auVar75[5];
                    puVar6[0x18] = auVar45[6];
                    puVar6[0x19] = auVar154[6];
                    puVar6[0x1a] = auVar74[6];
                    puVar6[0x1b] = auVar75[6];
                    puVar6[0x1c] = auVar45[7];
                    puVar6[0x1d] = auVar154[7];
                    puVar6[0x1e] = auVar74[7];
                    puVar6[0x1f] = auVar75[7];
                  } while (lVar23 != 0);
                  fVar120 = fStack_d8;
                  fVar53 = fStack_d4;
                  uVar18 = local_100;
                  if (uVar24 == uVar27) goto LAB_00102f54;
                }
              }
LAB_00103964:
              iVar19 = uVar28 - (int)uVar25;
              do {
                fVar120 = 0.0;
                fVar53 = (float)(iVar20 + iVar19 * iVar19);
                if ((fVar53 < fVar7 != (NAN(fVar53) || NAN(fVar7))) &&
                   (fVar120 = 1.0, fVar183 <= fVar53)) {
                  fVar120 = fVar98 - (fVar53 - fVar183) / fVar119;
                }
                lVar23 = uVar25 * 4;
                uVar25 = uVar25 + 1;
                iVar19 = iVar19 + -1;
                uVar67 = *(undefined4 *)(lVar36 + lVar23);
                uVar37 = (undefined1)((uint)uVar67 >> 8);
                auVar56._6_2_ = 0;
                auVar56._0_6_ =
                     (uint6)CONCAT14(uVar37,(uint)CONCAT12(uVar37,(ushort)(byte)uVar67)) &
                     0xffff0000ffff;
                auVar56[8] = (char)((uint)uVar67 >> 0x10);
                auVar56._9_3_ = 0;
                auVar56[0xc] = (char)((uint)uVar67 >> 0x18);
                auVar56._13_3_ = 0;
                auVar109 = NEON_ucvtf(auVar56,4);
                puVar6 = (undefined1 *)(lVar36 + lVar23);
                *puVar6 = (char)(int)(auVar109._0_4_ * fVar120);
                puVar6[1] = (char)(int)(auVar109._4_4_ * fVar120);
                puVar6[2] = (char)(int)(auVar109._8_4_ * fVar120);
                puVar6[3] = (char)(int)(auVar109._12_4_ * fVar120);
                fVar120 = fStack_d8;
                fVar53 = fStack_d4;
                uVar18 = local_100;
              } while (uVar35 != uVar25);
            }
          }
LAB_00102f54:
          uVar32 = uVar32 + 1;
          lVar30 = lVar30 + 1;
          lVar36 = lVar36 + uVar34 * 4;
        } while (uVar32 != uVar3);
      }
    }
  }
  else {
    cVar15 = (**(code **)(*param_1 + 0x720))(param_1);
    if (cVar15 == '\0') {
      pcVar17 = "Circle radius too small!";
LAB_00103a4c:
                    /* WARNING: Could not recover jumptable at 0x00103a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x70))(param_1,DAT_0010d4b0,pcVar17);
      return;
    }
  }
  return;
}


// ===== 00103a90  FUN_00103a90 =====

void FUN_00103a90(long *param_1,long param_2,uint param_3,uint param_4)

{
  void *__s;
  void *__s_00;
  void *__s_01;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  size_t __n;
  char cVar9;
  char *pcVar10;
  ulong __n_00;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  void *pvVar15;
  int iVar16;
  int iVar17;
  long lVar18;
  ulong uVar19;
  ulong __n_01;
  
  uVar5 = param_3;
  if ((int)param_3 < 0) {
    uVar5 = param_3 + 1;
  }
  uVar6 = param_4;
  if ((int)param_4 < 0) {
    uVar6 = param_4 + 1;
  }
  uVar2 = param_3;
  if ((int)param_4 <= (int)param_3) {
    uVar2 = param_4;
  }
  uVar7 = uVar2;
  if ((int)uVar2 < 0) {
    uVar7 = uVar2 + 1;
  }
  if ((int)uVar2 < 2) {
    cVar9 = (**(code **)(*param_1 + 0x720))(param_1);
    if (cVar9 == '\0') {
      pcVar10 = "Circle radius too small!";
LAB_00103e1c:
                    /* WARNING: Could not recover jumptable at 0x00103e4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x70))(param_1,DAT_0010d4b0,pcVar10);
      return;
    }
  }
  else {
    iVar17 = (int)uVar5 >> 1;
    if ((iVar17 < (int)param_3) && (iVar3 = (int)uVar6 >> 1, iVar3 < (int)param_4)) {
      iVar4 = (int)uVar7 >> 1;
      iVar14 = iVar4 + -1;
      if ((((iVar17 < iVar14) || (iVar3 < iVar14)) || ((int)param_3 <= iVar14 + iVar17)) ||
         ((int)param_4 <= iVar14 + iVar3)) {
        cVar9 = (**(code **)(*param_1 + 0x720))(param_1);
        if (cVar9 == '\0') {
          pcVar10 = "Circle must be fully visible!";
          goto LAB_00103e1c;
        }
      }
      else {
        iVar16 = 0;
        iVar12 = 1;
        iVar13 = iVar4 * -2 + 1;
        iVar11 = 1;
        do {
          if (iVar14 < 0) {
LAB_00103dd8:
            cVar9 = (**(code **)(*param_1 + 0x720))(param_1);
            if (cVar9 != '\0') {
              return;
            }
            pcVar10 = "Invalid internal state!";
            goto LAB_00103e1c;
          }
          uVar5 = iVar16 + iVar17;
          uVar6 = param_3 - uVar5;
          if (((uVar6 == 0 || (int)param_3 < (int)uVar5) || (iVar17 - iVar16 < 0)) ||
             (((int)param_4 <= iVar16 + iVar3 || (iVar3 - iVar16 < 0)))) goto LAB_00103dd8;
          uVar2 = iVar14 + iVar17;
          __n_00 = -(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2;
          __n = (ulong)(uint)(iVar17 - iVar16) << 2;
          __n_01 = -(ulong)(param_3 - uVar2 >> 0x1f) & 0xfffffffc00000000 |
                   (ulong)(param_3 - uVar2) << 2;
          uVar19 = -(ulong)((uint)(iVar17 - iVar14) >> 0x1f) & 0xfffffffc00000000 |
                   (ulong)(uint)(iVar17 - iVar14) << 2;
          pvVar15 = (void *)(param_2 + (long)(int)((iVar16 + iVar3) * param_3) * 4);
          memset(pvVar15,0,uVar19);
          __s = (void *)(param_2 + (long)(int)((iVar3 - iVar16) * param_3) * 4);
          memset(__s,0,uVar19);
          __s_00 = (void *)(param_2 + (long)(int)((iVar14 + iVar3) * param_3) * 4);
          memset(__s_00,0,__n);
          __s_01 = (void *)(param_2 + (long)(int)((iVar3 - iVar14) * param_3) * 4);
          memset(__s_01,0,__n);
          uVar19 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2;
          memset((void *)((long)pvVar15 + uVar19),0,__n_01);
          memset((void *)((long)__s + uVar19),0,__n_01);
          uVar19 = -(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2;
          memset((void *)((long)__s_00 + uVar19),0,__n_00);
          memset((void *)((long)__s_01 + uVar19),0,__n_00);
          iVar1 = iVar12 + 2;
          if (iVar13 < 1) {
            iVar16 = iVar16 + 1;
            iVar12 = iVar1;
          }
          else {
            iVar1 = 0;
          }
          iVar1 = iVar1 + iVar13;
          iVar13 = iVar11 + 2 + iVar4 * -2;
          iVar8 = iVar11 + 2;
          if (iVar1 < 1) {
            iVar8 = iVar11;
          }
          iVar14 = iVar14 - (uint)(0 < iVar1);
          if (iVar1 < 1) {
            iVar13 = 0;
          }
          iVar13 = iVar13 + iVar1;
          iVar11 = iVar8;
        } while (iVar16 <= iVar14);
        uVar5 = iVar3 - iVar4;
        if (-1 < (int)uVar5) {
          iVar17 = uVar5 + 1;
          pvVar15 = (void *)(param_2 + (ulong)param_3 * (ulong)uVar5 * 4);
          do {
            memset(pvVar15,0,(ulong)param_3 << 2);
            iVar17 = iVar17 + -1;
            pvVar15 = (void *)((long)pvVar15 + (ulong)param_3 * -4);
          } while (0 < iVar17);
        }
        iVar4 = iVar4 + iVar3;
        if (iVar4 < (int)param_4) {
          lVar18 = (long)iVar4;
          pvVar15 = (void *)(param_2 + (long)(int)param_3 * (long)iVar4 * 4);
          do {
            memset(pvVar15,0,(ulong)param_3 << 2);
            lVar18 = lVar18 + 1;
            pvVar15 = (void *)((long)pvVar15 +
                              (-(ulong)(param_3 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_3 << 2)
                              );
          } while (lVar18 < (int)param_4);
        }
      }
    }
    else {
      cVar9 = (**(code **)(*param_1 + 0x720))(param_1);
      if (cVar9 == '\0') {
        pcVar10 = "Invalid circle center coordinates!";
        goto LAB_00103e1c;
      }
    }
  }
  return;
}


// ===== 00103e50  FUN_00103e50 =====

void FUN_00103e50(long *param_1,long param_2,int param_3,int param_4,uint param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  void *__s;
  char *pcVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int local_7c;
  
  uVar12 = param_5;
  if (param_6 < 2) {
    uVar8 = param_5;
    if (param_6 != 0) {
      uVar12 = ~param_5 + param_3;
    }
  }
  else {
    if (param_6 == 2) {
      uVar12 = ~param_5 + param_3;
    }
    uVar8 = ~param_5 + param_4;
  }
  if ((int)param_5 < 1) {
    cVar5 = (**(code **)(*param_1 + 0x720))();
    if (cVar5 == '\0') {
      pcVar6 = "Circle radius too small!";
LAB_001040cc:
                    /* WARNING: Could not recover jumptable at 0x001040fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x70))(param_1,DAT_0010d4b0,pcVar6);
      return;
    }
  }
  else if ((param_3 < 1) || (param_4 < 1)) {
    cVar5 = (**(code **)(*param_1 + 0x720))();
    if (cVar5 == '\0') {
      pcVar6 = "Invalid bitmap dimensions!";
      goto LAB_001040cc;
    }
  }
  else if ((((int)uVar8 < param_4) && ((int)uVar12 < param_3)) && (-1 < (int)(uVar12 | uVar8))) {
    iVar13 = 0;
    iVar9 = 1;
    iVar3 = param_5 * -2;
    iVar11 = param_5 * -2 + 1;
    iVar14 = 1;
    do {
      if ((int)param_5 < 0) {
LAB_0010408c:
        cVar5 = (**(code **)(*param_1 + 0x720))();
        if (cVar5 != '\0') {
          return;
        }
        pcVar6 = "Invalid internal state!";
        goto LAB_001040cc;
      }
      iVar1 = iVar13 + uVar12;
      if (((param_3 - iVar1 == 0 || param_3 < iVar1) ||
          (uVar10 = (ulong)(uVar12 - iVar13), (int)(uVar12 - iVar13) < 0)) ||
         ((param_4 <= (int)(iVar13 + uVar8) || ((int)(uVar8 - iVar13) < 0)))) goto LAB_0010408c;
      uVar4 = param_3 - (param_5 + uVar12);
      if (param_6 < 2) {
        local_7c = (uVar8 - param_5) * param_3;
        __s = (void *)(param_2 + (long)(int)((uVar8 - iVar13) * param_3) * 4);
        if (param_6 == 0) goto LAB_00103f1c;
LAB_0010400c:
        memset((void *)((long)__s + (long)(int)(param_5 + uVar12) * 4),0,
               -(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2);
        lVar7 = param_2 + (long)local_7c * 4;
        uVar10 = (long)(param_3 - iVar1);
        local_7c = iVar1;
      }
      else {
        local_7c = (param_5 + uVar8) * param_3;
        __s = (void *)(param_2 + (long)(int)((iVar13 + uVar8) * param_3) * 4);
        if (param_6 == 2) goto LAB_0010400c;
LAB_00103f1c:
        memset(__s,0,-(ulong)(uVar12 - param_5 >> 0x1f) & 0xfffffffc00000000 |
                     (ulong)(uVar12 - param_5) << 2);
        lVar7 = param_2;
      }
      memset((void *)(lVar7 + (long)local_7c * 4),0,uVar10 << 2);
      iVar1 = iVar9 + 2;
      if (iVar11 < 1) {
        iVar13 = iVar13 + 1;
        iVar9 = iVar1;
      }
      else {
        iVar1 = 0;
      }
      iVar1 = iVar1 + iVar11;
      iVar11 = iVar14 + 2 + iVar3;
      iVar2 = iVar14 + 2;
      if (iVar1 < 1) {
        iVar2 = iVar14;
      }
      param_5 = param_5 - (0 < iVar1);
      if (iVar1 < 1) {
        iVar11 = 0;
      }
      iVar11 = iVar11 + iVar1;
      iVar14 = iVar2;
    } while (iVar13 <= (int)param_5);
  }
  else {
    cVar5 = (**(code **)(*param_1 + 0x720))();
    if (cVar5 == '\0') {
      pcVar6 = "Invalid circle center coordinates!";
      goto LAB_001040cc;
    }
  }
  return;
}


// ===== 00104100  FUN_00104100 =====

void FUN_00104100(long *param_1,long param_2,uint param_3,uint param_4)

{
  void *pvVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  char cVar10;
  char *pcVar11;
  long lVar12;
  int iVar13;
  ulong uVar14;
  int iVar15;
  size_t sVar16;
  int iVar17;
  int iVar18;
  void *pvVar19;
  uint uVar20;
  ulong uVar21;
  ulong uVar22;
  int iVar23;
  int local_64;
  
  uVar4 = param_3;
  if ((int)param_3 < 0) {
    uVar4 = param_3 + 1;
  }
  uVar20 = param_4;
  if ((int)param_4 < 0) {
    uVar20 = param_4 + 1;
  }
  uVar8 = param_3;
  if ((int)param_4 <= (int)param_3) {
    uVar8 = param_4;
  }
  uVar5 = uVar8;
  if ((int)uVar8 < 0) {
    uVar5 = uVar8 + 1;
  }
  if ((int)uVar8 < 2) {
    cVar10 = (**(code **)(*param_1 + 0x720))(param_1);
    if (cVar10 == '\0') {
      pcVar11 = "Circle radius too small!";
LAB_00104508:
                    /* WARNING: Could not recover jumptable at 0x00104538. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x70))(param_1,DAT_0010d4b0,pcVar11);
      return;
    }
  }
  else {
    uVar4 = (int)uVar4 >> 1;
    uVar8 = param_3 - uVar4;
    if ((uVar8 == 0 || (int)param_3 < (int)uVar4) ||
       (iVar18 = (int)uVar20 >> 1, (int)param_4 <= iVar18)) {
      cVar10 = (**(code **)(*param_1 + 0x720))(param_1);
      if (cVar10 == '\0') {
        pcVar11 = "Invalid circle center coordinates!";
        goto LAB_00104508;
      }
    }
    else {
      iVar3 = (int)uVar5 >> 1;
      iVar15 = iVar3 + -1;
      if (((((int)uVar4 < iVar15) || (iVar18 < iVar15)) || ((int)param_3 <= (int)(iVar15 + uVar4)))
         || ((int)param_4 <= iVar15 + iVar18)) {
        cVar10 = (**(code **)(*param_1 + 0x720))(param_1);
        if (cVar10 == '\0') {
          pcVar11 = "Circle must be fully visible!";
          goto LAB_00104508;
        }
      }
      else {
        uVar20 = iVar3 + iVar18;
        sVar16 = (ulong)uVar4 * 4;
        pvVar19 = (void *)(param_2 + (long)(int)((uVar20 - 1) * param_3) * 4);
        memset(pvVar19,0,sVar16);
        uVar5 = iVar18 - iVar3;
        pvVar1 = (void *)(param_2 + (long)(int)(param_3 + param_3 * uVar5) * 4);
        memset(pvVar1,0,sVar16);
        uVar22 = -(ulong)(uVar8 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar8 << 2;
        memset((void *)((long)pvVar19 + sVar16),0,uVar22);
        memset((void *)((long)pvVar1 + sVar16),0,uVar22);
        iVar13 = 1;
        iVar17 = 0;
        iVar23 = iVar3 * -2 + 1;
        uVar22 = (ulong)param_3;
        lVar12 = param_2 + (ulong)param_3 * -4;
        lVar2 = param_2 + (ulong)param_3 * 4;
        local_64 = 1;
        do {
          if (iVar15 < 0) {
LAB_001044e4:
            cVar10 = (**(code **)(*param_1 + 0x720))(param_1);
            if (cVar10 != '\0') {
              return;
            }
            pcVar11 = "Invalid internal state!";
            goto LAB_00104508;
          }
          uVar8 = iVar17 + uVar4;
          uVar9 = param_3 - uVar8;
          if (((uVar9 == 0 || (int)param_3 < (int)uVar8) || ((int)(uVar4 - iVar17) < 0)) ||
             (((int)param_4 <= iVar17 + iVar18 || (iVar18 - iVar17 < 0)))) goto LAB_001044e4;
          sVar16 = (ulong)(uVar4 - iVar17) * 4;
          iVar6 = (iVar15 + iVar18) * param_3;
          uVar21 = -(ulong)(uVar9 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar9 << 2;
          iVar7 = (iVar18 - iVar15) * param_3;
          if (((iVar23 < 1) && (local_64 + iVar23 + 1 < 0 == SCARRY4(local_64 + iVar23,1))) &&
             (iVar17 + 1 < iVar15)) {
            pvVar19 = (void *)(lVar12 + (long)iVar6 * 4);
            memset(pvVar19,0,sVar16 - 4);
            pvVar1 = (void *)(lVar2 + (long)iVar7 * 4);
            memset(pvVar1,0,sVar16 - 4);
            uVar14 = -(ulong)(uVar8 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar8 << 2;
            memset((void *)((long)pvVar19 + uVar14 + 4),0,uVar21 - 4);
            memset((void *)((long)pvVar1 + uVar14 + 4),0,uVar21 - 4);
LAB_00104418:
            uVar8 = iVar15 + uVar4;
            uVar21 = -(ulong)(uVar4 - iVar15 >> 0x1f) & 0xfffffffc00000000 |
                     (ulong)(uVar4 - iVar15) << 2;
            uVar14 = -(ulong)(param_3 - uVar8 >> 0x1f) & 0xfffffffc00000000 |
                     (ulong)(param_3 - uVar8) << 2;
            pvVar19 = (void *)(param_2 + (long)(int)((iVar17 + iVar18) * param_3) * 4);
            local_64 = local_64 + 2;
            iVar23 = local_64 + iVar23;
            memset(pvVar19,0,uVar21);
            pvVar1 = (void *)(param_2 + (long)(int)((iVar18 - iVar17) * param_3) * 4);
            memset(pvVar1,0,uVar21);
            uVar21 = -(ulong)(uVar8 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar8 << 2;
            memset((void *)((long)pvVar19 + uVar21),0,uVar14);
            memset((void *)((long)pvVar1 + uVar21),0,uVar14);
            iVar17 = iVar17 + 1;
          }
          else if ((iVar23 < 1) || (iVar15 <= iVar17)) {
            if (iVar23 < 1) goto LAB_00104418;
          }
          else {
            pvVar19 = (void *)(lVar12 + (long)iVar6 * 4);
            memset(pvVar19,0,sVar16);
            pvVar1 = (void *)(lVar2 + (long)iVar7 * 4);
            memset(pvVar1,0,sVar16);
            uVar14 = -(ulong)(uVar8 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar8 << 2;
            memset((void *)((long)pvVar19 + uVar14),0,uVar21);
            memset((void *)((long)pvVar1 + uVar14),0,uVar21);
          }
          iVar15 = iVar15 - (uint)(0 < iVar23);
          iVar6 = iVar13 + 2 + iVar3 * -2;
          iVar7 = iVar13 + 2;
          if (iVar23 < 1) {
            iVar6 = 0;
            iVar7 = iVar13;
          }
          iVar13 = iVar7;
          iVar23 = iVar6 + iVar23;
        } while (iVar17 <= iVar15);
        sVar16 = uVar22 * 4;
        if (-1 < (int)uVar5) {
          iVar18 = uVar5 + 1;
          pvVar19 = (void *)(param_2 + uVar22 * uVar5 * 4);
          do {
            memset(pvVar19,0,sVar16);
            iVar18 = iVar18 + -1;
            pvVar19 = (void *)((long)pvVar19 + uVar22 * -4);
          } while (0 < iVar18);
        }
        if ((int)uVar20 < (int)param_4) {
          pvVar19 = (void *)(param_2 + uVar22 * uVar20 * 4);
          do {
            memset(pvVar19,0,sVar16);
            uVar20 = uVar20 + 1;
            pvVar19 = (void *)((long)pvVar19 + sVar16);
          } while ((int)uVar20 < (int)param_4);
        }
      }
    }
  }
  return;
}


// ===== 001045d8  FUN_001045d8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_001045d8(undefined1 param_1 [16],undefined1 param_2 [16])

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  undefined1 auVar19 [16];
  
  uVar10 = param_2._8_8_;
  uVar12 = param_2._0_8_;
  uVar7 = param_1._8_8_;
  uVar14 = param_1._0_8_;
  uVar6 = uVar7 & 0x7fffffffffffffff;
  uVar8 = uVar10 & 0x7fffffffffffffff;
  if ((uVar6 + 0x8001000000000000 < 0x8001000000000001 && !CARRY8(uVar6 - 1,(ulong)(uVar14 != 0)))
     || (0x7ffeffffffffffff < ~(uVar8 + 0x8001000000000000) ||
         CARRY8(~(uVar8 + 0x8001000000000000) + 0x8001000000000000,(ulong)(uVar12 == 0)))) {
    uVar15 = uVar14;
    if (0x7fff000000000000 < uVar6 || CARRY8(uVar6 + 0x8000ffffffffffff,(ulong)(uVar14 != 0))) {
      uVar5 = uVar7 | 0x800000000000;
      goto LAB_001049d4;
    }
    if (0x7fff000000000000 < uVar8 || CARRY8(uVar8 + 0x8000ffffffffffff,(ulong)(uVar12 != 0))) {
      uVar15 = uVar12;
      uVar5 = uVar10 | 0x800000000000;
      goto LAB_001049d4;
    }
    if (uVar14 == 0 && uVar6 == 0x7fff000000000000) {
      uVar5 = uVar7;
      if (uVar12 == uVar14 && (uVar10 ^ uVar7) == 0x8000000000000000) {
        uVar15 = _DAT_00101240;
        uVar5 = _UNK_00101248;
      }
      goto LAB_001049d4;
    }
    uVar15 = uVar12;
    uVar5 = uVar10;
    if (uVar12 == 0 && uVar8 == 0x7fff000000000000) goto LAB_001049d4;
    if (uVar14 == 0 && (param_1 & (undefined1  [16])0x7fffffffffffffff) == (undefined1  [16])0x0) {
      if (uVar12 == 0 && (param_2 & (undefined1  [16])0x7fffffffffffffff) == (undefined1  [16])0x0)
      {
        uVar15 = uVar12 & uVar14;
        uVar5 = uVar10 & uVar7;
      }
      goto LAB_001049d4;
    }
    uVar15 = uVar14;
    uVar5 = uVar7;
    if (uVar12 == 0 && (param_2 & (undefined1  [16])0x7fffffffffffffff) == (undefined1  [16])0x0)
    goto LAB_001049d4;
  }
  uVar8 = ~uVar8;
  bVar3 = CARRY8(uVar6 + uVar8,(ulong)(uVar12 <= uVar14));
  uVar15 = uVar14;
  uVar18 = uVar10;
  uVar5 = uVar7;
  if (CARRY8(uVar6,uVar8) || bVar3) {
    uVar15 = uVar12;
    uVar18 = uVar7;
    uVar5 = uVar10;
  }
  uVar9 = uVar18 >> 0x30 & 0x7fff;
  uVar17 = (ushort)(uVar5 >> 0x30) & 0x7fff;
  if (CARRY8(uVar6,uVar8) || bVar3) {
    uVar12 = uVar14;
  }
  uVar8 = uVar18 & 0xffffffffffff;
  if ((int)uVar9 == 0) {
    uVar14 = uVar12 >> 1;
    uVar6 = uVar12;
    if (uVar8 != 0) {
      uVar6 = uVar8;
    }
    iVar4 = (int)LZCOUNT(uVar6) + (uint)(uVar8 == 0) * 0x40;
    uVar1 = iVar4 - 0xf;
    uVar6 = uVar12 << ((ulong)uVar1 & 0x3f);
    uVar9 = uVar8 << ((ulong)uVar1 & 0x3f);
    bVar3 = (uVar1 & 0x40) == 0;
    uVar12 = 0;
    if (bVar3) {
      uVar12 = uVar6;
    }
    uVar8 = uVar6;
    if (bVar3) {
      uVar8 = uVar9 | uVar14 >> ((ulong)~uVar1 & 0x3f);
    }
    uVar9 = (ulong)(0x10 - iVar4);
  }
  uVar6 = uVar5 & 0xffffffffffff;
  if ((uVar5 & 0x7fff000000000000) == 0) {
    uVar5 = uVar5 & 0xffffffffffff;
    uVar14 = uVar15 >> 1;
    uVar6 = uVar15;
    if (uVar5 != 0) {
      uVar6 = uVar5;
    }
    iVar4 = (int)LZCOUNT(uVar6) + (uint)(uVar5 == 0) * 0x40;
    uVar17 = iVar4 - 0xf;
    uVar6 = uVar15 << ((ulong)uVar17 & 0x3f);
    bVar3 = (uVar17 & 0x40) == 0;
    uVar15 = 0;
    if (bVar3) {
      uVar15 = uVar6;
    }
    if (bVar3) {
      uVar6 = uVar5 << ((ulong)uVar17 & 0x3f) | uVar14 >> ((ulong)~uVar17 & 0x3f);
    }
    uVar17 = 0x10 - iVar4;
  }
  uVar14 = uVar12 >> 0x3d | uVar8 << 3;
  uVar16 = uVar15 << 3;
  iVar4 = (int)uVar9;
  uVar17 = iVar4 - uVar17;
  uVar8 = uVar15 >> 0x3d | uVar6 << 3 | 0x8000000000000;
  if (uVar17 == 0) {
LAB_001046d8:
    if (-1 < (long)(uVar10 ^ uVar7)) goto LAB_001046e4;
LAB_001047f4:
    uVar14 = uVar14 | 0x8000000000000;
    uVar12 = uVar12 * 8;
    uVar6 = uVar12 - uVar16;
    uVar7 = uVar14 - (uVar8 + (uVar12 < uVar16));
    uVar15 = _DAT_00101210;
    uVar5 = _UNK_00101218;
    if (uVar14 == uVar8 && uVar12 == uVar16) goto LAB_001049d4;
    uVar12 = uVar7;
    if (uVar7 >> 0x33 == 0) {
      uVar12 = uVar6;
      if (uVar7 != 0) {
        uVar12 = uVar7;
      }
      uVar8 = uVar6 >> 1;
      uVar17 = ((int)LZCOUNT(uVar12) + (uint)(uVar7 == 0) * 0x40) - 0xc;
      uVar12 = uVar6 << ((ulong)uVar17 & 0x3f);
      bVar3 = (uVar17 & 0x40) == 0;
      uVar9 = (ulong)(iVar4 - uVar17);
      uVar6 = 0;
      if (bVar3) {
        uVar6 = uVar12;
      }
      if (bVar3) {
        uVar12 = uVar7 << ((ulong)uVar17 & 0x3f) | uVar8 >> ((ulong)~uVar17 & 0x3f);
      }
    }
  }
  else {
    if (uVar17 < 0x80) {
      uVar1 = 0x80 - uVar17;
      uVar5 = uVar16 << ((ulong)uVar1 & 0x3f);
      uVar6 = uVar5;
      uVar15 = 0;
      if ((uVar1 & 0x40) == 0) {
        uVar6 = uVar8 << ((ulong)uVar1 & 0x3f) | (uVar16 >> 1) >> ((ulong)~uVar1 & 0x3f);
        uVar15 = uVar5;
      }
      uVar11 = uVar8 >> ((ulong)uVar17 & 0x3f);
      bVar3 = (uVar17 & 0x40) == 0;
      uVar5 = uVar11;
      if (bVar3) {
        uVar5 = (uVar8 << 1) << ((ulong)~uVar17 & 0x3f) | uVar16 >> ((ulong)uVar17 & 0x3f);
      }
      uVar8 = 0;
      if (bVar3) {
        uVar8 = uVar11;
      }
      uVar16 = uVar5 | (uVar15 != 0 || uVar6 != 0);
      goto LAB_001046d8;
    }
    uVar8 = 0;
    uVar16 = 1;
    if ((long)(uVar10 ^ uVar7) < 0) goto LAB_001047f4;
LAB_001046e4:
    uVar6 = uVar16 + uVar12 * 8;
    uVar12 = uVar8 + (uVar14 | 0x8000000000000) + (ulong)CARRY8(uVar16,uVar12 * 8);
    if ((uVar12 >> 0x34 & 1) != 0) {
      uVar9 = (ulong)(iVar4 + 1);
      uVar6 = uVar6 >> 1 | uVar12 << 0x3f | uVar16 & 1;
      uVar12 = uVar12 >> 1;
    }
  }
  uVar18 = uVar18 & 0x8000000000000000;
  iVar4 = (int)uVar9;
  if (0x7ffe < iVar4) {
    uVar15 = 0;
    uVar5 = uVar18 | 0x7fff000000000000;
    goto LAB_001049d4;
  }
  if (iVar4 < 1) {
    uVar17 = 1 - iVar4;
    uVar7 = (ulong)uVar17;
    uVar10 = 0x80 - uVar7;
    uVar15 = uVar6 << (uVar10 & 0x3f);
    lVar13 = uVar12 << 1;
    uVar8 = uVar15;
    uVar14 = 0;
    if ((uVar10 & 0x40) == 0) {
      uVar8 = uVar12 << (uVar10 & 0x3f) | (uVar6 >> 1) >> ((ulong)~(uint)uVar10 & 0x3f);
      uVar14 = uVar15;
    }
    uVar15 = uVar12 >> (uVar7 & 0x3f);
    uVar10 = uVar15;
    uVar12 = 0;
    if ((uVar17 & 0x40) == 0) {
      uVar10 = lVar13 << ((ulong)~uVar17 & 0x3f) | uVar6 >> (uVar7 & 0x3f);
      uVar12 = uVar15;
    }
    uVar9 = 0;
    uVar6 = uVar10 | (uVar14 != 0 || uVar8 != 0);
  }
  uVar15 = uVar6 >> 3 | uVar12 << 0x3d;
  uVar17 = (uint)uVar6 & 7;
  uVar5 = uVar12 >> 3 & 0xffffffffffff | uVar9 << 0x30 | uVar18;
  iVar4 = FUN_001050c4();
  if (iVar4 == 2) {
    bVar3 = true;
    if (uVar18 == 0) {
      bVar3 = (uVar6 & 7) == 0;
    }
LAB_001049b8:
    bVar2 = CARRY8(uVar15,(ulong)!bVar3);
    uVar15 = uVar15 + !bVar3;
    if (bVar2) {
      uVar5 = uVar5 + 1;
    }
LAB_001049c4:
    if ((uVar6 & 7) == 0) goto LAB_001049d4;
  }
  else {
    if (iVar4 == 1) {
      bVar3 = uVar18 == 0 || (uVar6 & 7) == 0;
      goto LAB_001049b8;
    }
    if (iVar4 != 0) goto LAB_001049c4;
    uVar12 = (ulong)(4 < uVar17);
    bVar3 = CARRY8(uVar15,uVar12);
    uVar15 = uVar15 + uVar12;
    if (bVar3) {
      uVar5 = uVar5 + 1;
    }
    if (uVar17 != 4) goto LAB_001049c4;
    bVar3 = CARRY8(uVar15 & 1,uVar15);
    uVar15 = (uVar15 & 1) + uVar15;
    if (bVar3) {
      uVar5 = uVar5 + 1;
    }
  }
  FUN_001050f4();
LAB_001049d4:
  auVar19._8_8_ = uVar5;
  auVar19._0_8_ = uVar15;
  return auVar19;
}


// ===== 00104a0c  FUN_00104a0c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_00104a0c(uint param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  ulong uVar7;
  
  if (param_1 != 0) {
    uVar2 = -param_1;
    if (-1 < (int)param_1) {
      uVar2 = param_1;
    }
    uVar1 = (int)LZCOUNT(uVar2) + 0x51;
    uVar7 = (ulong)uVar2 << ((ulong)uVar1 & 0x3f);
    bVar6 = (uVar1 & 0x40) == 0;
    uVar3 = uVar7;
    if (bVar6) {
      uVar3 = (ulong)((uVar2 >> 1) >> ((ulong)~uVar1 & 0x3f));
    }
    uVar4 = 0;
    if (bVar6) {
      uVar4 = uVar7;
    }
    auVar5._8_8_ = (uVar3 ^ 0x1000000000000) + ((ulong)(0x401e - (int)LZCOUNT(uVar2)) << 0x30) |
                   (ulong)(param_1 & 0x80000000) << 0x20;
    auVar5._0_8_ = uVar4;
    return auVar5;
  }
  return _DAT_00101210;
}


// ===== 00104a70  FUN_00104a70 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_00104a70(undefined1 param_1 [16],undefined1 param_2 [16])

{
  int iVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  bool bVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  uint uVar23;
  uint uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  int iVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  
  uVar14 = param_2._8_8_;
  uVar30 = param_2._0_8_;
  uVar16 = param_1._8_8_;
  uVar26 = param_1._0_8_;
  uVar23 = param_1._14_2_ & 0x7fff;
  uVar32 = uVar16 >> 0x20 & 0xffff;
  uVar24 = param_2._14_2_ & 0x7fff;
  uVar22 = (uVar14 ^ uVar16) & 0x8000000000000000;
  uVar27 = uVar16 & 0xffffffffffff;
  uVar28 = uVar14 & 0xffffffffffff;
  uVar25 = uVar28;
  if ((uVar23 - 0x7fff < 0xffff8002) || (uVar24 - 0x7fff < 0xffff8002)) {
    uVar20 = uVar16 & 0x7fffffffffffffff;
    if (0x7fff000000000000 < uVar20 || CARRY8(uVar20 + 0x8000ffffffffffff,(ulong)(uVar26 != 0))) {
      auVar3._8_8_ = uVar16 | 0x800000000000;
      auVar3._0_8_ = uVar26;
      return auVar3;
    }
    uVar16 = uVar14 & 0x7fffffffffffffff;
    if (0x7fff000000000000 < uVar16 || CARRY8(uVar16 + 0x8000ffffffffffff,(ulong)(uVar30 != 0))) {
      auVar4._8_8_ = uVar14 | 0x800000000000;
      auVar4._0_8_ = uVar30;
      return auVar4;
    }
    if (uVar26 == 0 && uVar20 == 0x7fff000000000000) {
      if (uVar30 == 0 && (param_2 & (undefined1  [16])0x7fffffffffffffff) == (undefined1  [16])0x0)
      {
        return _DAT_00101240;
      }
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar22 | 0x7fff000000000000;
      return auVar7 << 0x40;
    }
    if (uVar30 == 0 && uVar16 == 0x7fff000000000000) {
      if (uVar26 == 0 && (param_1 & (undefined1  [16])0x7fffffffffffffff) == (undefined1  [16])0x0)
      {
        return _DAT_00101240;
      }
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar22 | 0x7fff000000000000;
      return auVar8 << 0x40;
    }
    if (uVar26 == 0 && (param_1 & (undefined1  [16])0x7fffffffffffffff) == (undefined1  [16])0x0) {
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar22;
      return auVar10 << 0x40;
    }
    if (uVar30 == 0 && (param_2 & (undefined1  [16])0x7fffffffffffffff) == (undefined1  [16])0x0) {
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar22;
      return auVar11 << 0x40;
    }
    if (uVar20 >> 0x30 == 0) {
      bVar12 = (param_1 & (undefined1  [16])0xffffffffffff) == (undefined1  [16])0x0;
      uVar32 = uVar26;
      if (!bVar12) {
        uVar32 = uVar27;
      }
      iVar31 = (int)LZCOUNT(uVar32) + (uint)bVar12 * 0x40;
      uVar2 = iVar31 - 0xf;
      uVar14 = uVar27 << ((ulong)uVar2 & 0x3f);
      uVar32 = uVar26 << ((ulong)uVar2 & 0x3f);
      bVar12 = (uVar2 & 0x40) == 0;
      uVar27 = uVar32;
      if (bVar12) {
        uVar27 = uVar14 | (uVar26 >> 1) >> ((ulong)~uVar2 & 0x3f);
      }
      uVar26 = 0;
      if (bVar12) {
        uVar26 = uVar32;
      }
      iVar31 = 0x10 - iVar31;
      uVar32 = uVar27 >> 0x20;
    }
    else {
      iVar31 = 0;
    }
    if (uVar16 >> 0x30 == 0) {
      bVar12 = (param_2 & (undefined1  [16])0xffffffffffff) == (undefined1  [16])0x0;
      uVar16 = uVar30 >> 1;
      uVar25 = uVar30;
      if (!bVar12) {
        uVar25 = uVar28;
      }
      iVar1 = (int)LZCOUNT(uVar25) + (uint)bVar12 * 0x40;
      uVar2 = iVar1 - 0xf;
      uVar25 = uVar30 << ((ulong)uVar2 & 0x3f);
      bVar12 = (uVar2 & 0x40) == 0;
      iVar31 = (iVar31 - iVar1) + 0x10;
      uVar30 = 0;
      if (bVar12) {
        uVar30 = uVar25;
      }
      if (bVar12) {
        uVar25 = uVar28 << ((ulong)uVar2 & 0x3f) | uVar16 >> ((ulong)~uVar2 & 0x3f);
      }
    }
  }
  else {
    iVar31 = 0;
  }
  uVar33 = uVar30 << 0xf;
  uVar13 = uVar30 >> 0x11 & 0xffffffff;
  uVar17 = uVar26 >> 0x20;
  uVar32 = uVar32 | 0x10000;
  uVar30 = uVar30 >> 0x31;
  uVar34 = uVar25 << 0xf;
  uVar36 = uVar13 * (uVar26 & 0xffffffff);
  uVar20 = (uVar33 & 0xffff8000) * uVar32;
  uVar15 = uVar30 | uVar34 & 0xffffffff;
  uVar18 = (uVar33 & 0xffff8000) * uVar17;
  uVar29 = uVar25 >> 0x11 & 0xffffffff | 0x80000000;
  uVar16 = (uVar33 & 0xffffffff) * (uVar27 & 0xffffffff);
  uVar25 = uVar18 + uVar36;
  uVar14 = uVar13 * (uVar27 & 0xffffffff);
  uVar35 = uVar29 * (uVar26 & 0xffffffff);
  uVar28 = uVar16 + uVar13 * uVar17;
  uVar19 = uVar15 * uVar32;
  uVar37 = (ulong)CARRY8(uVar16,uVar13 * uVar17);
  uVar15 = uVar15 * uVar17;
  uVar16 = uVar20 + uVar14;
  uVar21 = uVar29 * (uVar27 & 0xffffffff);
  uVar20 = (ulong)CARRY8(uVar20,uVar14);
  uVar14 = uVar16 + uVar35;
  if (CARRY8(uVar16,uVar35)) {
    uVar20 = uVar20 + 1;
  }
  uVar16 = uVar14 + uVar15;
  uVar27 = (uVar30 | uVar34 & 0xffffffff) * (uVar27 & 0xffffffff);
  if (CARRY8(uVar14,uVar15)) {
    uVar20 = uVar20 + 1;
  }
  uVar14 = uVar19 + uVar21;
  uVar35 = (uVar30 | uVar34 & 0xffffffff) * (uVar26 & 0xffffffff);
  uVar30 = uVar29 * uVar17 + uVar13 * uVar32;
  uVar13 = (ulong)CARRY8(uVar29 * uVar17,uVar13 * uVar32);
  uVar34 = uVar30 + uVar27;
  uVar15 = uVar25 >> 0x20 | (ulong)CARRY8(uVar18,uVar36) << 0x20;
  if (CARRY8(uVar30,uVar27)) {
    uVar13 = uVar13 + 1;
  }
  uVar27 = (uVar33 & 0xffffffff) * (uVar26 & 0xffffffff);
  uVar18 = uVar34 + uVar37 + (ulong)CARRY8(uVar28,uVar35);
  uVar26 = uVar28 + uVar35 + uVar15;
  uVar17 = uVar16 << 0x20;
  uVar15 = (ulong)CARRY8(uVar28 + uVar35,uVar15);
  uVar25 = uVar25 << 0x20;
  uVar30 = uVar27 + uVar25;
  uVar20 = uVar16 >> 0x20 | uVar20 << 0x20;
  uVar16 = uVar26 + uVar17 + (ulong)CARRY8(uVar27,uVar25);
  uVar27 = uVar14 << 0x20;
  uVar25 = uVar18 + uVar27;
  uVar28 = uVar13 + uVar29 * uVar32 +
           (ulong)(CARRY8(uVar34,uVar37) || CARRY8(uVar34 + uVar37,(ulong)CARRY8(uVar28,uVar35))) +
           (uVar14 >> 0x20 | (ulong)CARRY8(uVar19,uVar21) << 0x20) + (ulong)CARRY8(uVar18,uVar27);
  uVar27 = uVar25 + uVar20;
  if (CARRY8(uVar25,uVar20)) {
    uVar28 = uVar28 + 1;
  }
  uVar25 = uVar27 + uVar15 + (ulong)CARRY8(uVar26,uVar17);
  if (CARRY8(uVar27,uVar15) || CARRY8(uVar27 + uVar15,(ulong)CARRY8(uVar26,uVar17))) {
    uVar28 = uVar28 + 1;
  }
  uVar23 = uVar23 + uVar24 + iVar31 + -0x3fff;
  if ((uVar28 >> 0x30 & 1) == 0) {
    uVar28 = uVar25 >> 0x3f | uVar28 << 1;
    uVar25 = uVar16 >> 0x3f | uVar25 * 2;
    uVar16 = uVar30 >> 0x3f | uVar16 * 2;
    uVar30 = uVar30 * 2;
  }
  else {
    uVar23 = uVar23 + 1;
  }
  if (0x7ffe < (int)uVar23) {
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar22 | 0x7fff000000000000;
    return auVar6 << 0x40;
  }
  if ((int)uVar23 < 1) {
    uVar24 = 1 - uVar23;
    uVar27 = (ulong)uVar24;
    if (0x7f < uVar24) {
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar22;
      return auVar9 << 0x40;
    }
    uVar23 = uVar23 + 0x7f;
    uVar32 = (ulong)uVar23;
    bVar12 = (uVar23 & 0x40) == 0;
    uVar34 = uVar30 << (uVar32 & 0x3f);
    uVar20 = uVar16 >> (uVar27 & 0x3f);
    uVar14 = uVar25 << (uVar32 & 0x3f);
    uVar26 = uVar34;
    if (bVar12) {
      uVar26 = uVar16 << (uVar32 & 0x3f) | (uVar30 >> 1) >> ((ulong)~uVar23 & 0x3f);
    }
    uVar13 = 0;
    if (bVar12) {
      uVar13 = uVar34;
    }
    uVar15 = uVar25 >> (uVar27 & 0x3f);
    uVar34 = uVar14;
    if (bVar12) {
      uVar34 = uVar28 << (uVar32 & 0x3f) | (uVar25 >> 1) >> ((ulong)~uVar23 & 0x3f);
    }
    uVar25 = 0;
    if (bVar12) {
      uVar25 = uVar14;
    }
    bVar12 = (uVar24 & 0x40) == 0;
    uVar32 = uVar20;
    if (bVar12) {
      uVar32 = (uVar16 << 1) << ((ulong)~uVar24 & 0x3f) | uVar30 >> (uVar27 & 0x3f);
    }
    uVar27 = uVar28 >> (uVar27 & 0x3f);
    uVar16 = 0;
    if (bVar12) {
      uVar16 = uVar20;
    }
    uVar16 = uVar34 | uVar16;
    uVar30 = uVar25 | uVar32 | (ulong)(uVar13 != 0 || uVar26 != 0);
    uVar25 = uVar27;
    if (bVar12) {
      uVar25 = (uVar28 << 1) << ((ulong)~uVar24 & 0x3f) | uVar15;
    }
    uVar26 = 0;
    if (bVar12) {
      uVar26 = uVar27;
    }
    uVar22 = uVar26 | uVar22;
    if (0x8000000000000000 < uVar16 || CARRY8(uVar16 + 0x7fffffffffffffff,(ulong)(uVar30 != 0)))
    goto LAB_00104c10;
LAB_00104d9c:
    if (uVar30 != 0 || uVar16 != 0x8000000000000000) goto LAB_00104db4;
    bVar12 = CARRY8(uVar25,uVar25 & 1);
    uVar25 = uVar25 + (uVar25 & 1);
  }
  else {
    uVar22 = uVar28 & 0xffffffffffff | (ulong)uVar23 << 0x30 | uVar22;
    if (uVar16 < 0x8000000000000001 && !CARRY8(uVar16 + 0x7fffffffffffffff,(ulong)(uVar30 != 0)))
    goto LAB_00104d9c;
LAB_00104c10:
    bVar12 = 0xfffffffffffffffe < uVar25;
    uVar25 = uVar25 + 1;
  }
  if (bVar12) {
    uVar22 = uVar22 + 1;
  }
LAB_00104db4:
  auVar5._8_8_ = uVar22;
  auVar5._0_8_ = uVar25;
  return auVar5;
}


// ===== 00104f18  FUN_00104f18 =====

uint FUN_00104f18(undefined1 param_1 [16])

{
  ulong uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  uVar11 = param_1._8_8_;
  uVar9 = param_1._0_8_;
  uVar5 = uVar11 >> 0x30 & 0x7fff;
  uVar10 = uVar11 & 0xffffffffffff;
  uVar4 = (uint)uVar5;
  if (uVar4 - 0x3f81 < 0xfe) {
    uVar11 = uVar11 & 0x1ffffff;
    uVar7 = (uint)(uVar10 >> 0x19);
    uVar6 = uVar7;
    if (uVar9 == 0 && uVar11 == 0x1000000) {
      uVar6 = (uVar7 & 1) + uVar7;
    }
    if (0x1000000 < uVar11 || CARRY8(uVar11 - 0x1000001,(ulong)(uVar9 != 0))) {
      uVar6 = uVar7 + 1;
    }
    bVar3 = uVar6 >> 0x17 != 0;
    iVar8 = -0x3f80;
    if (bVar3) {
      iVar8 = -0x3f7f;
    }
    uVar7 = 0;
    if (!bVar3) {
      uVar7 = uVar6;
    }
    uVar4 = iVar8 + uVar4;
  }
  else if ((uVar9 == 0 && (param_1 & (undefined1  [16])0xffffffffffff) == (undefined1  [16])0x0) ||
          (uVar5 != 0x7fff)) {
    if (uVar4 < 0x407f) {
      uVar7 = 0x3f80;
      if (uVar5 != 0) {
        uVar7 = 0x3f81;
      }
      uVar6 = uVar7 - uVar4;
      if ((int)uVar6 < 0x71) {
        uVar2 = 0x80 - uVar6;
        if (uVar5 != 0) {
          uVar10 = uVar10 | 0x1000000000000;
        }
        uVar11 = uVar9 << ((ulong)uVar2 & 0x3f);
        bVar3 = (uVar2 & 0x40) == 0;
        uVar5 = 0;
        if (bVar3) {
          uVar5 = uVar11;
        }
        uVar12 = uVar10 >> ((ulong)uVar6 & 0x3f);
        if (bVar3) {
          uVar11 = uVar10 << ((ulong)uVar2 & 0x3f) | (uVar9 >> 1) >> ((ulong)~uVar2 & 0x3f);
        }
        bVar3 = (uVar6 & 0x40) == 0;
        uVar1 = uVar12;
        if (bVar3) {
          uVar1 = (uVar10 << 1) << ((ulong)~uVar6 & 0x3f) | uVar9 >> ((ulong)uVar6 & 0x3f);
        }
        uVar10 = 0;
        if (bVar3) {
          uVar10 = uVar12;
        }
        uVar9 = uVar10 & 0x1ffffff;
        uVar10 = uVar10 >> 0x19;
        uVar6 = (uint)uVar10;
        if (uVar9 < 0x1000001 &&
            !CARRY8(uVar9 - 0x1000001,
                    (ulong)(uVar1 != 0 || uVar7 != uVar4 && (uVar5 != 0 || uVar11 != 0)))) {
          if ((uVar1 == 0 && (uVar7 == uVar4 || uVar5 == 0 && uVar11 == 0)) && uVar9 == 0x1000000) {
            uVar10 = (ulong)((uVar6 & 1) + uVar6);
          }
        }
        else {
          uVar10 = (ulong)(uVar6 + 1);
        }
        bVar3 = (uVar10 >> 0x17 & 0x1ff) != 0;
        uVar4 = (uint)bVar3;
        uVar7 = (uint)uVar10 ^ 0x800000;
        if (!bVar3) {
          uVar7 = (uint)uVar10;
        }
      }
      else {
        uVar4 = 0;
        uVar7 = 0;
      }
    }
    else {
      uVar4 = 0xff;
      uVar7 = 0;
    }
  }
  else {
    uVar4 = 0xff;
    uVar7 = (uint)(uVar10 >> 0x19) | 0x400000;
  }
  return param_1._12_4_ & 0x80000000 | uVar4 << 0x17 | uVar7;
}


// ===== 001050c4  FUN_001050c4 =====

undefined4 FUN_001050c4(void)

{
  ulong uVar1;
  
  uVar1 = fpcr;
  uVar1 = (uVar1 >> 0x16 & 3) - 1;
  if (uVar1 < 3) {
    return *(undefined4 *)(&DAT_00101250 + uVar1 * 4);
  }
  return 0;
}


// ===== 001050f4  FUN_001050f4 =====

undefined8 FUN_001050f4(void)

{
  ulong uVar1;
  
  uVar1 = fpsr;
  fpsr = uVar1 | 0x10;
  return 0;
}


// ===== 00105110  FUN_00105110 =====

void FUN_00105110(void)

{
  (*(code *)PTR_001093c8)();
  return;
}


// ===== 00105130  <EXTERNAL>::__cxa_finalize =====

void __cxa_finalize(void)

{
  (*(code *)PTR___cxa_finalize_001093d0)();
  return;
}


// ===== 00105140  <EXTERNAL>::__cxa_atexit =====

void __cxa_atexit(void)

{
  (*(code *)PTR___cxa_atexit_001093d8)();
  return;
}


// ===== 00105150  <EXTERNAL>::__android_log_print =====

void __android_log_print(void)

{
  (*(code *)PTR___android_log_print_001093e0)();
  return;
}


// ===== 00105160  <EXTERNAL>::__stack_chk_fail =====

void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_001093e8)();
  return;
}


// ===== 00105170  <EXTERNAL>::AndroidBitmap_getInfo =====

void AndroidBitmap_getInfo(void)

{
  (*(code *)PTR_AndroidBitmap_getInfo_001093f0)();
  return;
}


// ===== 00105180  <EXTERNAL>::AndroidBitmap_lockPixels =====

void AndroidBitmap_lockPixels(void)

{
  (*(code *)PTR_AndroidBitmap_lockPixels_001093f8)();
  return;
}


// ===== 00105190  <EXTERNAL>::malloc =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00109400)();
  return pvVar1;
}


// ===== 001051a0  <EXTERNAL>::memset =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00109408)(__s,__c);
  return pvVar1;
}


// ===== 001051b0  <EXTERNAL>::memcpy =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memcpy_00109410)();
  return pvVar1;
}


// ===== 001051c0  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00109418)();
  return;
}


// ===== 001051d0  <EXTERNAL>::AndroidBitmap_unlockPixels =====

void AndroidBitmap_unlockPixels(void)

{
  (*(code *)PTR_AndroidBitmap_unlockPixels_00109420)();
  return;
}


// ===== 0010e000  <EXTERNAL>::__cxa_finalize =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0010e008  <EXTERNAL>::__cxa_atexit =====

/* WARNING: Control flow encountered bad instruction data */

void __cxa_atexit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0010e010  <EXTERNAL>::__android_log_print =====

/* WARNING: Control flow encountered bad instruction data */

void __android_log_print(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0010e018  <EXTERNAL>::__stack_chk_fail =====

/* WARNING: Control flow encountered bad instruction data */

void __stack_chk_fail(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0010e020  <EXTERNAL>::AndroidBitmap_getInfo =====

/* WARNING: Control flow encountered bad instruction data */

void AndroidBitmap_getInfo(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0010e028  <EXTERNAL>::AndroidBitmap_lockPixels =====

/* WARNING: Control flow encountered bad instruction data */

void AndroidBitmap_lockPixels(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0010e030  <EXTERNAL>::malloc =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0010e038  <EXTERNAL>::memset =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0010e040  <EXTERNAL>::memcpy =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0010e048  <EXTERNAL>::free =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ===== 0010e050  <EXTERNAL>::AndroidBitmap_unlockPixels =====

/* WARNING: Control flow encountered bad instruction data */

void AndroidBitmap_unlockPixels(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


