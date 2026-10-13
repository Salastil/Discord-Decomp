// ===== 00120070  _FINI_1 =====

void _FINI_1(void)

{
  __cxa_finalize(&PTR_LOOP_0014ce70);
  return;
}


// ===== 00120080  FUN_00120080 =====

void FUN_00120080(void)

{
  return;
}


// ===== 00120088  _FINI_0 =====

void _FINI_0(void)

{
  FUN_00143cf4();
  return;
}


// ===== 00120090  FUN_00120090 =====

void FUN_00120090(code *UNRECOVERED_JUMPTABLE)

{
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0012009c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}


// ===== 001200a4  FUN_001200a4 =====

void FUN_001200a4(undefined8 param_1)

{
  __cxa_atexit(FUN_00120090,param_1,&PTR_LOOP_0014ce70);
  return;
}


// ===== 001200c0  JNI_OnLoad =====

void JNI_OnLoad(long *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = 0;
  iVar2 = (**(code **)(*param_1 + 0x30))(param_1,&local_30,0x10006);
  if (iVar2 == 0) {
    iVar3 = FUN_00123294(local_30);
    iVar2 = 0x10006;
    if (iVar3 != 0) {
      iVar2 = iVar3;
    }
  }
  else {
    iVar2 = -1;
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2);
  }
  return;
}


// ===== 00120140  FUN_00120140 =====

int FUN_00120140(long param_1,ulong param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  long local_78;
  undefined1 auStack_6c [4];
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  lVar12 = *(long *)(param_1 + 0x10);
  iVar8 = *(int *)(lVar12 + 0x20);
  iVar6 = pthread_rwlock_wrlock((pthread_rwlock_t *)(param_1 + 0x88));
  if (iVar6 != 0) {
    pcVar9 = strerror(iVar6);
    __android_log_print(6,"GifImage","pthread_rwlock_wrlock returned %s",pcVar9);
  }
  iVar6 = DGifGetImageDesc(lVar12);
  iVar7 = pthread_rwlock_unlock((pthread_rwlock_t *)(param_1 + 0x88));
  if (iVar7 != 0) {
    pcVar9 = strerror(iVar7);
    __android_log_print(6,"GifImage","pthread_rwlock_unlock write returned %s",pcVar9);
  }
  *(int *)(lVar12 + 0x20) = iVar8;
  if (iVar6 == 0) goto LAB_0012043c;
  iVar6 = pthread_rwlock_rdlock((pthread_rwlock_t *)(param_1 + 0x88));
  if (iVar6 != 0) {
    pcVar9 = strerror(iVar6);
    __android_log_print(6,"GifImage","pthread_rwlock_rdlock returned %s",pcVar9);
  }
  lVar16 = *(long *)(lVar12 + 0x48);
  lVar11 = lVar16 + (long)iVar8 * 0x38;
  uVar1 = *(uint *)(lVar11 + 8);
  if ((int)uVar1 < 0) {
LAB_0012040c:
    iVar6 = 0;
  }
  else {
    uVar2 = *(uint *)(lVar11 + 0xc);
    iVar6 = 0;
    if ((((int)uVar2 <= param_4) && ((int)uVar1 <= param_4)) && (-1 < (int)uVar2)) {
      if (uVar2 != 0) {
        uVar4 = 0;
        if (uVar2 != 0) {
          uVar4 = 0x7fffffff / uVar2;
        }
        if (uVar4 < uVar1) goto LAB_0012040c;
      }
      if ((param_2 & 1) == 0) {
        iVar6 = DGifGetCode(lVar12,auStack_6c,&local_78);
        while (iVar6 != 0) {
          if (local_78 == 0) goto LAB_001203cc;
          iVar6 = DGifGetCodeNext(lVar12,&local_78);
        }
        goto LAB_0012040c;
      }
      plVar15 = (long *)(param_1 + 0x48);
      lVar13 = *plVar15;
      uVar14 = (ulong)(int)(uVar2 * uVar1);
      uVar10 = *(long *)(param_1 + 0x50) - lVar13;
      if (uVar14 < uVar10 || uVar14 - uVar10 == 0) {
        if (uVar14 < uVar10) {
          *(ulong *)(param_1 + 0x50) = lVar13 + uVar14;
        }
      }
      else {
        FUN_001235ec(plVar15,uVar14 - uVar10);
        lVar13 = *plVar15;
      }
      if (*(char *)(lVar11 + 0x10) == '\0') {
        iVar6 = DGifGetLine(lVar12,lVar13,uVar2 * uVar1);
        if (iVar6 == 0) goto LAB_0012040c;
      }
      else if (0 < *(int *)(lVar11 + 0xc)) {
        iVar6 = 0;
        do {
          iVar7 = DGifGetLine(lVar12,lVar13 + *(int *)(lVar11 + 8) * iVar6);
          if (iVar7 == 0) goto LAB_0012040c;
          iVar7 = *(int *)(lVar11 + 0xc);
          iVar6 = iVar6 + 8;
        } while (iVar6 < iVar7);
        if (4 < iVar7) {
          iVar6 = 4;
          do {
            iVar7 = DGifGetLine(lVar12,lVar13 + *(int *)(lVar11 + 8) * iVar6);
            if (iVar7 == 0) goto LAB_0012040c;
            iVar7 = *(int *)(lVar11 + 0xc);
            iVar6 = iVar6 + 8;
          } while (iVar6 < iVar7);
        }
        if (2 < iVar7) {
          iVar6 = 2;
          do {
            iVar7 = DGifGetLine(lVar12,lVar13 + *(int *)(lVar11 + 8) * iVar6);
            if (iVar7 == 0) goto LAB_0012040c;
            iVar7 = *(int *)(lVar11 + 0xc);
            iVar6 = iVar6 + 4;
          } while (iVar6 < iVar7);
        }
        if (1 < iVar7) {
          iVar6 = 1;
          do {
            iVar7 = DGifGetLine(lVar12,lVar13 + *(int *)(lVar11 + 8) * iVar6);
            if (iVar7 == 0) goto LAB_0012040c;
            iVar6 = iVar6 + 2;
          } while (iVar6 < *(int *)(lVar11 + 0xc));
        }
      }
LAB_001203cc:
      lVar11 = *(long *)(lVar12 + 0x58);
      if (lVar11 != 0) {
        uVar3 = *(undefined4 *)(lVar12 + 0x50);
        *(undefined8 *)(lVar12 + 0x58) = 0;
        lVar16 = lVar16 + (long)iVar8 * 0x38;
        *(undefined4 *)(lVar12 + 0x50) = 0;
        *(long *)(lVar16 + 0x30) = lVar11;
        *(undefined4 *)(lVar16 + 0x28) = uVar3;
      }
      if ((param_3 & 1) == 0) {
        iVar6 = 1;
      }
      else {
        iVar6 = 1;
        *(int *)(lVar12 + 0x20) = iVar8 + 1;
      }
    }
  }
  iVar8 = pthread_rwlock_unlock((pthread_rwlock_t *)(param_1 + 0x88));
  if (iVar8 != 0) {
    pcVar9 = strerror(iVar8);
    __android_log_print(6,"GifImage","pthread_rwlock_unlock read returned %s",pcVar9);
  }
LAB_0012043c:
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012047c  FUN_0012047c =====

void FUN_0012047c(undefined8 *param_1,pthread_rwlock_t *param_2)

{
  int __errnum;
  char *pcVar1;
  
  *param_1 = param_2;
  __errnum = pthread_rwlock_rdlock(param_2);
  if (__errnum != 0) {
    pcVar1 = strerror(__errnum);
    __android_log_print(6,"GifImage","pthread_rwlock_rdlock returned %s",pcVar1);
    return;
  }
  return;
}


// ===== 001204c0  FUN_001204c0 =====

void FUN_001204c0(undefined8 *param_1)

{
  int __errnum;
  char *pcVar1;
  
  __errnum = pthread_rwlock_unlock((pthread_rwlock_t *)*param_1);
  if (__errnum != 0) {
    pcVar1 = strerror(__errnum);
    __android_log_print(6,"GifImage","pthread_rwlock_unlock read returned %s",pcVar1);
    return;
  }
  return;
}


// ===== 00120500  FUN_00120500 =====

void FUN_00120500(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_34;
  undefined1 *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar3 = DGifGetExtension(param_1,&local_34,&local_30);
  if ((int)uVar3 != 0) {
    if (local_30 == (undefined1 *)0x0) {
LAB_0012058c:
      uVar3 = 1;
    }
    else {
      uVar3 = GifAddExtensionBlock(param_1 + 0x50,param_1 + 0x58,local_34,*local_30,local_30 + 1);
      iVar2 = (int)uVar3;
      while (iVar2 != 0) {
        if (local_30 == (undefined1 *)0x0) goto LAB_0012058c;
        uVar3 = DGifGetExtensionNext(param_1,&local_30);
        if ((int)uVar3 == 0) break;
        if (local_30 == (undefined1 *)0x0) goto LAB_0012058c;
        uVar3 = GifAddExtensionBlock(param_1 + 0x50,param_1 + 0x58,0,*local_30,local_30 + 1);
        iVar2 = (int)uVar3;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 001205b4  FUN_001205b4 =====

void FUN_001205b4(long param_1,undefined4 param_2,ulong param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  int *piVar5;
  int iVar6;
  undefined8 uVar7;
  char *pcVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  int local_6c;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  lVar9 = *(long *)(param_1 + 0x10);
  *(undefined8 *)(lVar9 + 0x58) = 0;
  *(undefined4 *)(lVar9 + 0x50) = 0;
  iVar6 = DGifGetRecordType(lVar9,&local_6c);
  while (iVar6 != 0) {
    if (local_6c == 2) {
      if ((0 < *(int *)(lVar9 + 0x20)) && (*(undefined1 *)(param_1 + 0xc) = 1, (param_3 & 1) != 0))
      break;
      uVar7 = (**(code **)(**(long **)(param_1 + 0x20) + 0x20))();
      FUN_001207ec(param_1,uVar7);
      iVar6 = FUN_00120140(param_1,0,1,param_2);
joined_r0x00120690:
      if (iVar6 == 0) break;
    }
    else {
      if (local_6c == 3) {
        iVar6 = FUN_00120500(lVar9);
        goto joined_r0x00120690;
      }
      if (local_6c == 4) break;
    }
    iVar6 = DGifGetRecordType(lVar9,&local_6c);
  }
  uVar2 = *(uint *)(lVar9 + 0x20);
  iVar6 = pthread_rwlock_rdlock((pthread_rwlock_t *)(param_1 + 0x88));
  if (iVar6 != 0) {
    pcVar8 = strerror(iVar6);
    __android_log_print(6,"GifImage","pthread_rwlock_rdlock returned %s",pcVar8);
  }
  if (0 < (int)uVar2) {
    lVar9 = *(long *)(lVar9 + 0x48);
    uVar10 = 0;
    do {
      uVar3 = *(uint *)(lVar9 + uVar10 * 0x38 + 0x28);
      if (0 < (int)uVar3) {
        uVar11 = 0;
        piVar5 = *(int **)(lVar9 + uVar10 * 0x38 + 0x30);
        do {
          if ((((piVar5[4] == 0xff) && (*piVar5 == 0xb)) &&
              (iVar6 = strncmp("NETSCAPE2.0",*(char **)(piVar5 + 2),0xb), iVar6 == 0)) &&
             (((uVar11 + 1 < (ulong)uVar3 && (piVar5[10] == 0)) && (piVar5[6] == 3)))) {
            *(uint *)(param_1 + 8) = (uint)*(ushort *)(*(long *)(piVar5 + 8) + 1);
            break;
          }
          uVar11 = uVar11 + 1;
          piVar5 = piVar5 + 6;
        } while (uVar3 != uVar11);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar2);
  }
  lVar9 = *(long *)(param_1 + 0x30);
  lVar1 = *(long *)(param_1 + 0x38);
  iVar6 = pthread_rwlock_unlock((pthread_rwlock_t *)(param_1 + 0x88));
  if (iVar6 != 0) {
    pcVar8 = strerror(iVar6);
    __android_log_print(6,"GifImage","pthread_rwlock_unlock read returned %s",pcVar8);
  }
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar1 != lVar9);
  }
  return;
}


// ===== 001207ec  FUN_001207ec =====

undefined4 * FUN_001207ec(undefined4 *param_1,undefined4 param_2,int param_3,uint param_4)

{
  int iVar1;
  undefined8 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  int *piVar9;
  undefined8 *puVar10;
  void *pvVar11;
  undefined8 *puVar12;
  long lVar13;
  char *pcVar14;
  undefined4 *puVar15;
  int iVar16;
  ulong uVar17;
  long lVar18;
  int *piVar19;
  ulong uVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  int *piVar26;
  undefined4 *puVar27;
  long lVar28;
  long lVar29;
  undefined4 *puVar30;
  long lVar31;
  int *piVar32;
  int *piVar33;
  long *plVar34;
  long lVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined1 auVar39 [16];
  undefined1 auStack_e8 [8];
  int iStack_e0;
  int *piStack_d8;
  int *piStack_d0;
  int *piStack_c8;
  undefined4 uStack_bc;
  long lStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  
  puVar15 = *(undefined4 **)(param_1 + 0xe);
  if (puVar15 < *(undefined4 **)(param_1 + 0x10)) {
    puVar30 = puVar15 + 1;
    *puVar15 = param_2;
    puVar6 = param_1;
    goto LAB_0012092c;
  }
  puVar27 = *(undefined4 **)(param_1 + 0xc);
  lVar29 = (long)puVar15 - (long)puVar27 >> 2;
  uVar20 = lVar29 + 1;
  if (uVar20 >> 0x3e == 0) {
    uVar17 = (long)*(undefined4 **)(param_1 + 0x10) - (long)puVar27;
    uVar24 = (long)uVar17 >> 1;
    if (uVar24 <= uVar20) {
      uVar24 = uVar20;
    }
    if (0x7ffffffffffffffb < uVar17) {
      uVar24 = 0x3fffffffffffffff;
    }
    if (uVar24 == 0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      if (uVar24 >> 0x3e != 0) goto LAB_00120950;
      puVar6 = (undefined4 *)operator_new(uVar24 << 2);
    }
    puVar22 = puVar6 + lVar29;
    puVar30 = puVar22 + 1;
    *puVar22 = param_2;
    if ((long)puVar15 - (long)puVar27 != 0) {
      uVar20 = ((long)puVar15 - (long)puVar27) - 4;
      puVar21 = puVar22;
      if ((0x1b < uVar20) &&
         (0x1f < (ulong)((long)puVar15 + (-((long)puVar15 - (long)puVar27) - (long)puVar6)))) {
        puVar10 = (undefined8 *)(puVar15 + -4);
        uVar20 = (uVar20 >> 2) + 1;
        uVar25 = uVar20 & 0x7ffffffffffffff8;
        puVar15 = puVar15 + -uVar25;
        puVar21 = puVar22 + -uVar25;
        puVar12 = (undefined8 *)(puVar22 + -4);
        uVar17 = uVar25;
        do {
          puVar2 = puVar10 + -1;
          uVar37 = puVar10[-2];
          uVar8 = puVar10[1];
          uVar36 = *puVar10;
          uVar17 = uVar17 - 8;
          puVar10 = puVar10 + -4;
          puVar12[-1] = *puVar2;
          puVar12[-2] = uVar37;
          puVar12[1] = uVar8;
          *puVar12 = uVar36;
          puVar12 = puVar12 + -4;
        } while (uVar17 != 0);
        puVar22 = puVar21;
        if (uVar20 == uVar25) goto LAB_00120918;
      }
      do {
        puVar15 = puVar15 + -1;
        puVar22 = puVar21 + -1;
        *puVar22 = *puVar15;
        puVar21 = puVar22;
      } while (puVar15 != puVar27);
    }
LAB_00120918:
    *(undefined4 **)(param_1 + 0xc) = puVar22;
    *(undefined4 **)(param_1 + 0xe) = puVar30;
    *(undefined4 **)(param_1 + 0x10) = puVar6 + uVar24;
    if (puVar27 != (undefined4 *)0x0) {
      operator_delete(puVar27);
      puVar6 = puVar27;
    }
LAB_0012092c:
    *(undefined4 **)(param_1 + 0xe) = puVar30;
    return puVar6;
  }
  FUN_00123a78(param_1 + 0xc);
LAB_00120950:
  auVar39 = FUN_001237f4();
  puVar12 = auVar39._8_8_;
  uVar36 = auVar39._0_8_;
  pcStack_a8 = FUN_00120954;
  lVar29 = tpidr_el0;
  lStack_b8 = *(long *)(lVar29 + 0x28);
  puStack_b0 = &stack0xffffffffffffffb0;
  plVar7 = (long *)operator_new(0x48);
  plVar7[8] = 0;
  uStack_bc = 0;
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7[3] = 0;
  plVar7[2] = 0;
  plVar7[5] = 0;
  plVar7[4] = 0;
  uVar8 = *puVar12;
  plVar7[7] = 0;
  plVar7[6] = 0;
  piVar9 = (int *)DGifOpen(uVar8,FUN_00120fe0,&uStack_bc);
  if (piVar9 == (int *)0x0) {
    FUN_00123d58(uVar36,"Error %d",uStack_bc);
LAB_00120ea4:
    puVar15 = (undefined4 *)0x0;
  }
  else {
    iVar4 = piVar9[1];
    if (((param_3 < iVar4) || (iVar16 = *piVar9, param_3 < iVar16)) || (iVar4 * iVar16 == 0)) {
      FUN_00123d58(uVar36,"Invalid dimensions");
      DGifCloseFile(piVar9,&piStack_d8);
      goto LAB_00120ea4;
    }
    puVar10 = (undefined8 *)operator_new(0xc0);
    *puVar10 = &PTR_FUN_0014ce88;
    *(undefined4 *)(puVar10 + 1) = 0xffffffff;
    puVar10[2] = piVar9;
    puVar10[3] = FUN_00121014;
    uVar8 = *puVar12;
    lVar13 = puVar12[1];
    *(undefined1 *)((long)puVar10 + 0xc) = 0;
    puVar10[4] = uVar8;
    puVar10[5] = lVar13;
    if (lVar13 != 0) {
      FUN_00144520(1,lVar13 + 8);
      piVar9 = (int *)puVar10[2];
    }
    puVar10[6] = 0;
    puVar10[7] = 0;
    puVar10[8] = 0;
    iVar5 = *piVar9;
    iVar1 = piVar9[2];
    puVar10[9] = 0;
    puVar10[10] = 0;
    puVar10[0xb] = 0;
    uVar20 = (long)iVar1 * (long)iVar5;
    if ((int)uVar20 != 0) {
      if ((int)uVar20 < 0) {
LAB_00120fdc:
                    /* WARNING: Subroutine does not return */
        FUN_001237c8();
      }
      pvVar11 = operator_new(uVar20);
      puVar10[9] = pvVar11;
      puVar10[0xb] = (void *)((long)pvVar11 + uVar20);
      memset(pvVar11,0,uVar20);
      puVar10[10] = (void *)((long)pvVar11 + uVar20);
    }
    puVar10[0xd] = 0;
    puVar10[0xc] = 0;
    puVar10[0xf] = 0;
    puVar10[0xe] = 0;
    puVar10[0x11] = 0;
    puVar10[0x10] = 0;
    puVar10[0x13] = 0;
    puVar10[0x12] = 0;
    puVar10[0x15] = 0;
    puVar10[0x14] = 0;
    puVar10[0x17] = 0;
    puVar10[0x16] = 0;
    puVar12 = (undefined8 *)operator_new(0x20);
    plVar34 = (long *)plVar7[1];
    *puVar12 = &PTR_FUN_0014cf28;
    puVar12[1] = 0;
    puVar12[2] = 0;
    puVar12[3] = puVar10;
    *plVar7 = (long)puVar10;
    plVar7[1] = (long)puVar12;
    if ((plVar34 != (long *)0x0) &&
       (lVar13 = FUN_00144550(0xffffffffffffffff,plVar34 + 1), lVar13 == 0)) {
      (**(code **)(*plVar34 + 0x10))(plVar34);
      FUN_00126724(plVar34);
    }
    lVar13 = *(long *)(*plVar7 + 0x10);
    *(int *)(plVar7 + 2) = iVar16;
    *(int *)((long)plVar7 + 0x14) = iVar4;
    iVar4 = FUN_001205b4(*plVar7,param_3,param_4 & 1);
    if (iVar4 == 0) {
      FUN_00123d58(uVar36,"Failed to slurp image %d",0);
      goto LAB_00120ea4;
    }
    if (*(int *)(lVar13 + 0x20) < 1) {
      FUN_00123d58(uVar36,"No frames in image");
      goto LAB_00120ea4;
    }
    *(int *)(plVar7 + 3) = *(int *)(lVar13 + 0x20);
    lVar18 = *plVar7;
    piStack_d8 = (int *)0x0;
    piStack_d0 = (int *)0x0;
    piStack_c8 = (int *)0x0;
    iVar4 = pthread_rwlock_rdlock((pthread_rwlock_t *)(lVar18 + 0x88));
    if (iVar4 != 0) {
      pcVar14 = strerror(iVar4);
      __android_log_print(6,"GifImage","pthread_rwlock_rdlock returned %s",pcVar14);
    }
    if (*(int *)(lVar13 + 0x20) < 1) {
      iVar4 = 0;
    }
    else {
      lVar35 = 0;
      iVar4 = 0;
      do {
        lVar23 = *(long *)(lVar13 + 0x48);
        piVar9 = (int *)(lVar23 + lVar35 * 0x38 + 0x28);
        iVar16 = *piVar9;
        if (iVar16 < 1) {
LAB_00120c28:
          piVar9 = piStack_d0;
          piVar32 = piStack_d8;
          if (piStack_d0 < piStack_c8) {
            *piStack_d0 = 0;
            goto LAB_00120b78;
          }
          lVar31 = (long)piStack_d0 - (long)piStack_d8;
          lVar23 = lVar31 >> 2;
          uVar20 = lVar23 + 1;
          if (uVar20 >> 0x3e != 0) goto LAB_00120fcc;
          uVar24 = (long)piStack_c8 - (long)piStack_d8 >> 1;
          if (uVar24 <= uVar20) {
            uVar24 = uVar20;
          }
          if (0x7ffffffffffffffb < (ulong)((long)piStack_c8 - (long)piStack_d8)) {
            uVar24 = 0x3fffffffffffffff;
          }
          if (uVar24 == 0) {
            pvVar11 = (void *)0x0;
          }
          else {
            if (uVar24 >> 0x3e != 0) goto LAB_00120fd8;
            pvVar11 = operator_new(uVar24 << 2);
          }
          piVar19 = (int *)((long)pvVar11 + lVar23 * 4);
          piVar33 = piVar19 + 1;
          *piVar19 = 0;
          piStack_d8 = piVar19;
          if ((long)piVar9 - (long)piVar32 != 0) {
            uVar20 = ((long)piVar9 - (long)piVar32) - 4;
            if ((0x1b < uVar20) && (0x1f < (ulong)((long)piVar9 + (-lVar31 - (long)pvVar11)))) {
              piVar26 = piVar9 + -4;
              uVar20 = (uVar20 >> 2) + 1;
              uVar25 = uVar20 & 0x7ffffffffffffff8;
              piVar9 = piVar9 + -uVar25;
              piStack_d8 = piVar19 + -uVar25;
              piVar19 = piVar19 + -4;
              uVar17 = uVar25;
              do {
                piVar3 = piVar26 + -2;
                uVar38 = *(undefined8 *)(piVar26 + -4);
                uVar37 = *(undefined8 *)(piVar26 + 2);
                uVar8 = *(undefined8 *)piVar26;
                uVar17 = uVar17 - 8;
                piVar26 = piVar26 + -8;
                *(undefined8 *)(piVar19 + -2) = *(undefined8 *)piVar3;
                *(undefined8 *)(piVar19 + -4) = uVar38;
                *(undefined8 *)(piVar19 + 2) = uVar37;
                *(undefined8 *)piVar19 = uVar8;
                piVar19 = piVar19 + -8;
              } while (uVar17 != 0);
              piVar19 = piStack_d8;
              if (uVar20 == uVar25) goto LAB_00120e2c;
            }
            do {
              piVar9 = piVar9 + -1;
              piStack_d8 = piVar19 + -1;
              *piStack_d8 = *piVar9;
              piVar19 = piStack_d8;
            } while (piVar9 != piVar32);
          }
LAB_00120e2c:
          piStack_c8 = (int *)((long)pvVar11 + uVar24 * 4);
          if (piVar32 != (int *)0x0) {
            piStack_d0 = piVar33;
            operator_delete(piVar32);
          }
        }
        else {
          lVar28 = 0;
          lVar31 = 0;
          iVar5 = 0;
          do {
            piVar32 = (int *)(*(long *)(lVar23 + lVar35 * 0x38 + 0x30) + lVar28);
            if (piVar32[4] == 0xf9) {
              iVar5 = DGifExtensionToGCB((long)*piVar32,*(undefined8 *)(piVar32 + 2),auStack_e8);
              iVar16 = *piVar9;
            }
            piVar19 = piStack_d0;
            piVar32 = piStack_d8;
            lVar31 = lVar31 + 1;
            lVar28 = lVar28 + 0x18;
          } while (lVar31 < iVar16);
          if (iVar5 != 1) goto LAB_00120c28;
          iVar16 = iStack_e0 * 10;
          iVar4 = iVar16 + iVar4;
          if (piStack_c8 <= piStack_d0) {
            lVar31 = (long)piStack_d0 - (long)piStack_d8;
            lVar23 = lVar31 >> 2;
            uVar20 = lVar23 + 1;
            if (uVar20 >> 0x3e == 0) {
              uVar24 = (long)piStack_c8 - (long)piStack_d8 >> 1;
              if (uVar24 <= uVar20) {
                uVar24 = uVar20;
              }
              if (0x7ffffffffffffffb < (ulong)((long)piStack_c8 - (long)piStack_d8)) {
                uVar24 = 0x3fffffffffffffff;
              }
              if (uVar24 == 0) {
                pvVar11 = (void *)0x0;
LAB_00120d30:
                piStack_d8 = (int *)((long)pvVar11 + lVar23 * 4);
                piVar33 = piStack_d8 + 1;
                *piStack_d8 = iVar16;
                if ((long)piVar19 - (long)piVar32 != 0) {
                  uVar20 = ((long)piVar19 - (long)piVar32) - 4;
                  if ((0x1b < uVar20) && (0x1f < (ulong)((long)piVar19 + (-lVar31 - (long)pvVar11)))
                     ) {
                    piVar26 = piVar19 + -4;
                    uVar20 = (uVar20 >> 2) + 1;
                    uVar25 = uVar20 & 0x7ffffffffffffff8;
                    piVar19 = piVar19 + -uVar25;
                    piVar9 = piStack_d8 + -uVar25;
                    piStack_d8 = piStack_d8 + -4;
                    uVar17 = uVar25;
                    do {
                      piVar3 = piVar26 + -2;
                      uVar38 = *(undefined8 *)(piVar26 + -4);
                      uVar37 = *(undefined8 *)(piVar26 + 2);
                      uVar8 = *(undefined8 *)piVar26;
                      uVar17 = uVar17 - 8;
                      piVar26 = piVar26 + -8;
                      *(undefined8 *)(piStack_d8 + -2) = *(undefined8 *)piVar3;
                      *(undefined8 *)(piStack_d8 + -4) = uVar38;
                      *(undefined8 *)(piStack_d8 + 2) = uVar37;
                      *(undefined8 *)piStack_d8 = uVar8;
                      piStack_d8 = piStack_d8 + -8;
                    } while (uVar17 != 0);
                    piStack_d8 = piVar9;
                    if (uVar20 == uVar25) goto LAB_00120e2c;
                  }
                  do {
                    piVar19 = piVar19 + -1;
                    piStack_d8 = piStack_d8 + -1;
                    *piStack_d8 = *piVar19;
                  } while (piVar19 != piVar32);
                }
                goto LAB_00120e2c;
              }
              if (uVar24 >> 0x3e == 0) {
                pvVar11 = operator_new(uVar24 << 2);
                goto LAB_00120d30;
              }
LAB_00120fd8:
              FUN_001237f4();
              goto LAB_00120fdc;
            }
LAB_00120fcc:
            FUN_00123a78(&piStack_d8);
            goto LAB_00120fd4;
          }
          *piStack_d0 = iVar16;
LAB_00120b78:
          piVar33 = piStack_d0 + 1;
        }
        lVar35 = lVar35 + 1;
        piStack_d0 = piVar33;
      } while (lVar35 < *(int *)(lVar13 + 0x20));
    }
    *(int *)(plVar7 + 4) = iVar4;
    FUN_00123acc(plVar7 + 5,piStack_d8,piStack_d0,(long)piStack_d0 - (long)piStack_d8 >> 2);
    uVar37 = DAT_00155538;
    uVar8 = DAT_00155530;
    *(undefined4 *)((long)plVar7 + 0x1c) = *(undefined4 *)(*plVar7 + 8);
    puVar15 = (undefined4 *)FUN_0012105c(uVar36,uVar8,uVar37,plVar7);
    if (puVar15 != (undefined4 *)0x0) {
      plVar7[8] = 1;
      plVar7 = (long *)0x0;
    }
    iVar4 = pthread_rwlock_unlock((pthread_rwlock_t *)(lVar18 + 0x88));
    if (iVar4 != 0) {
      pcVar14 = strerror(iVar4);
      __android_log_print(6,"GifImage","pthread_rwlock_unlock read returned %s",pcVar14);
    }
    if (piStack_d8 != (int *)0x0) {
      piStack_d0 = piStack_d8;
      operator_delete(piStack_d8);
    }
    if (plVar7 == (long *)0x0) goto LAB_00120ef0;
  }
  pvVar11 = (void *)plVar7[5];
  if (pvVar11 != (void *)0x0) {
    plVar7[6] = (long)pvVar11;
    operator_delete(pvVar11);
  }
  plVar34 = (long *)plVar7[1];
  if ((plVar34 != (long *)0x0) &&
     (lVar13 = FUN_00144550(0xffffffffffffffff,plVar34 + 1), lVar13 == 0)) {
    (**(code **)(*plVar34 + 0x10))(plVar34);
    FUN_00126724(plVar34);
  }
  operator_delete(plVar7);
LAB_00120ef0:
  if (*(long *)(lVar29 + 0x28) == lStack_b8) {
    return puVar15;
  }
LAB_00120fd4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00120954  FUN_00120954 =====

long FUN_00120954(undefined8 param_1,undefined8 *param_2,int param_3,uint param_4)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined8 *puVar9;
  void *pvVar10;
  undefined8 *puVar11;
  long lVar12;
  char *pcVar13;
  int iVar14;
  long lVar15;
  int *piVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  int *piVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  int *piVar24;
  int *piVar25;
  ulong uVar26;
  long *plVar27;
  long lVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined1 auStack_98 [8];
  int local_90;
  int *local_88;
  int *local_80;
  int *local_78;
  undefined4 local_6c;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  plVar6 = (long *)operator_new(0x48);
  plVar6[8] = 0;
  local_6c = 0;
  plVar6[1] = 0;
  *plVar6 = 0;
  plVar6[3] = 0;
  plVar6[2] = 0;
  plVar6[5] = 0;
  plVar6[4] = 0;
  uVar7 = *param_2;
  plVar6[7] = 0;
  plVar6[6] = 0;
  piVar8 = (int *)DGifOpen(uVar7,FUN_00120fe0,&local_6c);
  if (piVar8 == (int *)0x0) {
    FUN_00123d58(param_1,"Error %d",local_6c);
LAB_00120ea4:
    lVar12 = 0;
  }
  else {
    iVar4 = piVar8[1];
    if (((param_3 < iVar4) || (iVar14 = *piVar8, param_3 < iVar14)) || (iVar4 * iVar14 == 0)) {
      FUN_00123d58(param_1,"Invalid dimensions");
      DGifCloseFile(piVar8,&local_88);
      goto LAB_00120ea4;
    }
    puVar9 = (undefined8 *)operator_new(0xc0);
    *puVar9 = &PTR_FUN_0014ce88;
    *(undefined4 *)(puVar9 + 1) = 0xffffffff;
    puVar9[2] = piVar8;
    puVar9[3] = FUN_00121014;
    uVar7 = *param_2;
    lVar12 = param_2[1];
    *(undefined1 *)((long)puVar9 + 0xc) = 0;
    puVar9[4] = uVar7;
    puVar9[5] = lVar12;
    if (lVar12 != 0) {
      FUN_00144520(1,lVar12 + 8);
      piVar8 = (int *)puVar9[2];
    }
    puVar9[6] = 0;
    puVar9[7] = 0;
    puVar9[8] = 0;
    iVar5 = *piVar8;
    iVar1 = piVar8[2];
    puVar9[9] = 0;
    puVar9[10] = 0;
    puVar9[0xb] = 0;
    uVar26 = (long)iVar1 * (long)iVar5;
    if ((int)uVar26 != 0) {
      if ((int)uVar26 < 0) {
LAB_00120fdc:
                    /* WARNING: Subroutine does not return */
        FUN_001237c8();
      }
      pvVar10 = operator_new(uVar26);
      puVar9[9] = pvVar10;
      puVar9[0xb] = (void *)((long)pvVar10 + uVar26);
      memset(pvVar10,0,uVar26);
      puVar9[10] = (void *)((long)pvVar10 + uVar26);
    }
    puVar9[0xd] = 0;
    puVar9[0xc] = 0;
    puVar9[0xf] = 0;
    puVar9[0xe] = 0;
    puVar9[0x11] = 0;
    puVar9[0x10] = 0;
    puVar9[0x13] = 0;
    puVar9[0x12] = 0;
    puVar9[0x15] = 0;
    puVar9[0x14] = 0;
    puVar9[0x17] = 0;
    puVar9[0x16] = 0;
    puVar11 = (undefined8 *)operator_new(0x20);
    plVar27 = (long *)plVar6[1];
    *puVar11 = &PTR_FUN_0014cf28;
    puVar11[1] = 0;
    puVar11[2] = 0;
    puVar11[3] = puVar9;
    *plVar6 = (long)puVar9;
    plVar6[1] = (long)puVar11;
    if ((plVar27 != (long *)0x0) &&
       (lVar12 = FUN_00144550(0xffffffffffffffff,plVar27 + 1), lVar12 == 0)) {
      (**(code **)(*plVar27 + 0x10))(plVar27);
      FUN_00126724(plVar27);
    }
    lVar12 = *(long *)(*plVar6 + 0x10);
    *(int *)(plVar6 + 2) = iVar14;
    *(int *)((long)plVar6 + 0x14) = iVar4;
    iVar4 = FUN_001205b4(*plVar6,param_3,param_4 & 1);
    if (iVar4 == 0) {
      FUN_00123d58(param_1,"Failed to slurp image %d",0);
      goto LAB_00120ea4;
    }
    if (*(int *)(lVar12 + 0x20) < 1) {
      FUN_00123d58(param_1,"No frames in image");
      goto LAB_00120ea4;
    }
    *(int *)(plVar6 + 3) = *(int *)(lVar12 + 0x20);
    lVar15 = *plVar6;
    local_88 = (int *)0x0;
    local_80 = (int *)0x0;
    local_78 = (int *)0x0;
    iVar4 = pthread_rwlock_rdlock((pthread_rwlock_t *)(lVar15 + 0x88));
    if (iVar4 != 0) {
      pcVar13 = strerror(iVar4);
      __android_log_print(6,"GifImage","pthread_rwlock_rdlock returned %s",pcVar13);
    }
    if (*(int *)(lVar12 + 0x20) < 1) {
      iVar4 = 0;
    }
    else {
      lVar28 = 0;
      iVar4 = 0;
      do {
        lVar17 = *(long *)(lVar12 + 0x48);
        piVar8 = (int *)(lVar17 + lVar28 * 0x38 + 0x28);
        iVar14 = *piVar8;
        if (iVar14 < 1) {
LAB_00120c28:
          piVar8 = local_80;
          piVar24 = local_88;
          if (local_80 < local_78) {
            *local_80 = 0;
            goto LAB_00120b78;
          }
          lVar23 = (long)local_80 - (long)local_88;
          lVar17 = lVar23 >> 2;
          uVar26 = lVar17 + 1;
          if (uVar26 >> 0x3e != 0) goto LAB_00120fcc;
          uVar18 = (long)local_78 - (long)local_88 >> 1;
          if (uVar18 <= uVar26) {
            uVar18 = uVar26;
          }
          if (0x7ffffffffffffffb < (ulong)((long)local_78 - (long)local_88)) {
            uVar18 = 0x3fffffffffffffff;
          }
          if (uVar18 == 0) {
            pvVar10 = (void *)0x0;
          }
          else {
            if (uVar18 >> 0x3e != 0) goto LAB_00120fd8;
            pvVar10 = operator_new(uVar18 << 2);
          }
          piVar16 = (int *)((long)pvVar10 + lVar17 * 4);
          piVar25 = piVar16 + 1;
          *piVar16 = 0;
          local_88 = piVar16;
          if ((long)piVar8 - (long)piVar24 != 0) {
            uVar26 = ((long)piVar8 - (long)piVar24) - 4;
            if ((0x1b < uVar26) && (0x1f < (ulong)((long)piVar8 + (-lVar23 - (long)pvVar10)))) {
              piVar20 = piVar8 + -4;
              uVar26 = (uVar26 >> 2) + 1;
              uVar19 = uVar26 & 0x7ffffffffffffff8;
              piVar8 = piVar8 + -uVar19;
              local_88 = piVar16 + -uVar19;
              piVar16 = piVar16 + -4;
              uVar21 = uVar19;
              do {
                piVar3 = piVar20 + -2;
                uVar30 = *(undefined8 *)(piVar20 + -4);
                uVar29 = *(undefined8 *)(piVar20 + 2);
                uVar7 = *(undefined8 *)piVar20;
                uVar21 = uVar21 - 8;
                piVar20 = piVar20 + -8;
                *(undefined8 *)(piVar16 + -2) = *(undefined8 *)piVar3;
                *(undefined8 *)(piVar16 + -4) = uVar30;
                *(undefined8 *)(piVar16 + 2) = uVar29;
                *(undefined8 *)piVar16 = uVar7;
                piVar16 = piVar16 + -8;
              } while (uVar21 != 0);
              piVar16 = local_88;
              if (uVar26 == uVar19) goto LAB_00120e2c;
            }
            do {
              piVar8 = piVar8 + -1;
              local_88 = piVar16 + -1;
              *local_88 = *piVar8;
              piVar16 = local_88;
            } while (piVar8 != piVar24);
          }
LAB_00120e2c:
          local_78 = (int *)((long)pvVar10 + uVar18 * 4);
          if (piVar24 != (int *)0x0) {
            local_80 = piVar25;
            operator_delete(piVar24);
          }
        }
        else {
          lVar22 = 0;
          lVar23 = 0;
          iVar5 = 0;
          do {
            piVar24 = (int *)(*(long *)(lVar17 + lVar28 * 0x38 + 0x30) + lVar22);
            if (piVar24[4] == 0xf9) {
              iVar5 = DGifExtensionToGCB((long)*piVar24,*(undefined8 *)(piVar24 + 2),auStack_98);
              iVar14 = *piVar8;
            }
            piVar16 = local_80;
            piVar24 = local_88;
            lVar23 = lVar23 + 1;
            lVar22 = lVar22 + 0x18;
          } while (lVar23 < iVar14);
          if (iVar5 != 1) goto LAB_00120c28;
          iVar14 = local_90 * 10;
          iVar4 = iVar14 + iVar4;
          if (local_78 <= local_80) {
            lVar23 = (long)local_80 - (long)local_88;
            lVar17 = lVar23 >> 2;
            uVar26 = lVar17 + 1;
            if (uVar26 >> 0x3e == 0) {
              uVar18 = (long)local_78 - (long)local_88 >> 1;
              if (uVar18 <= uVar26) {
                uVar18 = uVar26;
              }
              if (0x7ffffffffffffffb < (ulong)((long)local_78 - (long)local_88)) {
                uVar18 = 0x3fffffffffffffff;
              }
              if (uVar18 == 0) {
                pvVar10 = (void *)0x0;
LAB_00120d30:
                local_88 = (int *)((long)pvVar10 + lVar17 * 4);
                piVar25 = local_88 + 1;
                *local_88 = iVar14;
                if ((long)piVar16 - (long)piVar24 != 0) {
                  uVar26 = ((long)piVar16 - (long)piVar24) - 4;
                  if ((0x1b < uVar26) && (0x1f < (ulong)((long)piVar16 + (-lVar23 - (long)pvVar10)))
                     ) {
                    piVar20 = piVar16 + -4;
                    uVar26 = (uVar26 >> 2) + 1;
                    uVar19 = uVar26 & 0x7ffffffffffffff8;
                    piVar16 = piVar16 + -uVar19;
                    piVar8 = local_88 + -uVar19;
                    local_88 = local_88 + -4;
                    uVar21 = uVar19;
                    do {
                      piVar3 = piVar20 + -2;
                      uVar30 = *(undefined8 *)(piVar20 + -4);
                      uVar29 = *(undefined8 *)(piVar20 + 2);
                      uVar7 = *(undefined8 *)piVar20;
                      uVar21 = uVar21 - 8;
                      piVar20 = piVar20 + -8;
                      *(undefined8 *)(local_88 + -2) = *(undefined8 *)piVar3;
                      *(undefined8 *)(local_88 + -4) = uVar30;
                      *(undefined8 *)(local_88 + 2) = uVar29;
                      *(undefined8 *)local_88 = uVar7;
                      local_88 = local_88 + -8;
                    } while (uVar21 != 0);
                    local_88 = piVar8;
                    if (uVar26 == uVar19) goto LAB_00120e2c;
                  }
                  do {
                    piVar16 = piVar16 + -1;
                    local_88 = local_88 + -1;
                    *local_88 = *piVar16;
                  } while (piVar16 != piVar24);
                }
                goto LAB_00120e2c;
              }
              if (uVar18 >> 0x3e == 0) {
                pvVar10 = operator_new(uVar18 << 2);
                goto LAB_00120d30;
              }
LAB_00120fd8:
              FUN_001237f4();
              goto LAB_00120fdc;
            }
LAB_00120fcc:
            FUN_00123a78(&local_88);
            goto LAB_00120fd4;
          }
          *local_80 = iVar14;
LAB_00120b78:
          piVar25 = local_80 + 1;
        }
        lVar28 = lVar28 + 1;
        local_80 = piVar25;
      } while (lVar28 < *(int *)(lVar12 + 0x20));
    }
    *(int *)(plVar6 + 4) = iVar4;
    FUN_00123acc(plVar6 + 5,local_88,local_80,(long)local_80 - (long)local_88 >> 2);
    uVar29 = DAT_00155538;
    uVar7 = DAT_00155530;
    *(undefined4 *)((long)plVar6 + 0x1c) = *(undefined4 *)(*plVar6 + 8);
    lVar12 = FUN_0012105c(param_1,uVar7,uVar29,plVar6);
    if (lVar12 != 0) {
      plVar6[8] = 1;
      plVar6 = (long *)0x0;
    }
    iVar4 = pthread_rwlock_unlock((pthread_rwlock_t *)(lVar15 + 0x88));
    if (iVar4 != 0) {
      pcVar13 = strerror(iVar4);
      __android_log_print(6,"GifImage","pthread_rwlock_unlock read returned %s",pcVar13);
    }
    if (local_88 != (int *)0x0) {
      local_80 = local_88;
      operator_delete(local_88);
    }
    if (plVar6 == (long *)0x0) goto LAB_00120ef0;
  }
  pvVar10 = (void *)plVar6[5];
  if (pvVar10 != (void *)0x0) {
    plVar6[6] = (long)pvVar10;
    operator_delete(pvVar10);
  }
  plVar27 = (long *)plVar6[1];
  if ((plVar27 != (long *)0x0) &&
     (lVar15 = FUN_00144550(0xffffffffffffffff,plVar27 + 1), lVar15 == 0)) {
    (**(code **)(*plVar27 + 0x10))(plVar27);
    FUN_00126724(plVar27);
  }
  operator_delete(plVar6);
LAB_00120ef0:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return lVar12;
  }
LAB_00120fd4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00120fe0  FUN_00120fe0 =====

undefined8 FUN_00120fe0(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  if (0 < param_3) {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x68) + 0x10))
                      (*(long **)(param_1 + 0x68),param_2,param_3);
    return uVar1;
  }
  return 0;
}


// ===== 00121014  FUN_00121014 =====

void FUN_00121014(undefined8 param_1)

{
  long lVar1;
  undefined1 auStack_2c [4];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  DGifCloseFile(param_1,auStack_2c);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012105c  FUN_0012105c =====

void FUN_0012105c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined1 **ppuStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  
  puStack_60 = auStack_a0;
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  ppuStack_68 = &local_70;
  uStack_58 = 0xffffff80ffffffd8;
  local_98 = param_4;
  uStack_90 = param_5;
  local_88 = param_6;
  uStack_80 = param_7;
  local_78 = param_8;
  local_70 = (undefined1 *)register0x00000008;
  (**(code **)(*param_1 + 0xe8))();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 001210f8  FUN_001210f8 =====

undefined8 FUN_001210f8(undefined8 param_1,long *param_2,undefined4 param_3,undefined4 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 *local_68;
  long *plStack_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)operator_new(0x30);
  lVar5 = *param_2;
  lVar8 = param_2[2];
  lVar7 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  *puVar2 = &PTR_FUN_0014cea8;
  puVar2[1] = lVar5;
  puVar2[3] = lVar8;
  puVar2[2] = lVar7;
  param_2[2] = 0;
  puVar2[4] = 0;
  puVar2[5] = lVar7 - lVar5;
  plVar3 = (long *)operator_new(0x20);
  *plVar3 = (long)&PTR_FUN_0014cf60;
  plVar6 = plVar3 + 1;
  *plVar6 = 0;
  plVar3[2] = 0;
  plVar3[3] = (long)puVar2;
  local_68 = puVar2;
  plStack_60 = plVar3;
  FUN_00144520(1,plVar6);
  uVar4 = FUN_00120954(param_1,&local_68,param_3,param_4);
  lVar5 = FUN_00144550(0xffffffffffffffff,plVar6);
  if (lVar5 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_00126724(plVar3);
  }
  lVar5 = FUN_00144550(0xffffffffffffffff,plVar6);
  if (lVar5 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_00126724(plVar3);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00121238  FUN_00121238 =====

void FUN_00121238(long *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 char param_5)

{
  long lVar1;
  long lVar2;
  char cVar3;
  void *__src;
  ulong __n;
  undefined8 uVar4;
  void *local_70;
  long local_68;
  long local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  __src = (void *)(**(code **)(*param_1 + 0x730))(param_1,param_3);
  if (__src == (void *)0x0) {
    FUN_00123c7c(param_1,"ByteBuffer must be direct");
    uVar4 = 0;
  }
  else {
    __n = (**(code **)(*param_1 + 0x738))(param_1,param_3);
    cVar3 = (**(code **)(*param_1 + 0x720))(param_1);
    if (cVar3 == '\0') {
      local_70 = (void *)0x0;
      local_68 = 0;
      local_60 = 0;
      if (__n != 0) {
        if ((long)__n < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_001237c8(&local_70);
        }
        local_70 = operator_new(__n);
        lVar1 = (long)local_70 + __n;
        local_60 = lVar1;
        memcpy(local_70,__src,__n);
        local_68 = lVar1;
      }
      uVar4 = FUN_001210f8(param_1,&local_70,param_4,param_5 != '\0');
      if (local_70 != (void *)0x0) {
        operator_delete(local_70);
      }
    }
    else {
      uVar4 = 0;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


// ===== 00121374  FUN_00121374 =====

void FUN_00121374(undefined8 param_1,undefined8 param_2,void *param_3,int param_4,undefined4 param_5
                 ,char param_6)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong __n;
  void *local_70;
  long local_68;
  long local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_70 = (void *)0x0;
  local_68 = 0;
  local_60 = 0;
  if (param_4 != 0) {
    __n = (ulong)param_4;
    if ((long)__n < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_001237c8(&local_70);
    }
    local_70 = operator_new(__n);
    lVar1 = (long)local_70 + __n;
    local_60 = lVar1;
    memcpy(local_70,param_3,__n);
    local_68 = lVar1;
  }
  uVar3 = FUN_001210f8(param_1,&local_70,param_5,param_6 != '\0');
  if (local_70 != (void *)0x0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 0012144c  FUN_0012144c =====

undefined8
FUN_0012144c(long *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,char param_5)

{
  long lVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  code *pcVar6;
  undefined8 uVar7;
  long local_68;
  long *plStack_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar3 = FUN_00121580(param_1,param_3);
  plVar4 = (long *)operator_new(0x20);
  lVar5 = *param_1;
  plVar4[2] = 0;
  plVar4[3] = lVar3;
  plVar4[1] = 0;
  pcVar6 = *(code **)(lVar5 + 0x720);
  *plVar4 = (long)&PTR_FUN_0014cf98;
  cVar2 = (*pcVar6)(param_1);
  uVar7 = 0;
  if ((lVar3 != 0) && (cVar2 == '\0')) {
    local_68 = lVar3;
    plStack_60 = plVar4;
    FUN_00144520(1,plVar4 + 1);
    uVar7 = FUN_00120954(param_1,&local_68,param_4,param_5 != '\0');
    lVar3 = FUN_00144550(0xffffffffffffffff,plVar4 + 1);
    if (lVar3 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN_00126724(plVar4);
    }
  }
  lVar3 = FUN_00144550(0xffffffffffffffff,plVar4 + 1);
  if (lVar3 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_00126724(plVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00121580  FUN_00121580 =====

undefined8 * FUN_00121580(undefined8 param_1,int param_2)

{
  int iVar1;
  FILE *__stream;
  int *piVar2;
  char *pcVar3;
  long lVar4;
  undefined8 *puVar5;
  char *pcVar6;
  
  iVar1 = dup(param_2);
  __stream = fdopen(iVar1,"rb");
  if (__stream == (FILE *)0x0) {
    piVar2 = (int *)__errno();
    pcVar3 = strerror(*piVar2);
    pcVar6 = "Unable to open file: %s";
  }
  else {
    iVar1 = fseek(__stream,0,2);
    if (iVar1 == 0) {
      lVar4 = ftell(__stream);
      if (lVar4 < 0) {
        piVar2 = (int *)__errno();
        pcVar3 = strerror(*piVar2);
        pcVar6 = "Unable to get file size: %s";
      }
      else {
        iVar1 = fseek(__stream,0,0);
        if (iVar1 == 0) {
          puVar5 = (undefined8 *)operator_new(0x18);
          puVar5[2] = lVar4;
          *puVar5 = &PTR_FUN_0014cee8;
          puVar5[1] = __stream;
          return puVar5;
        }
        piVar2 = (int *)__errno();
        pcVar3 = strerror(*piVar2);
        pcVar6 = "Unable to seek to beginning of file: %s";
      }
    }
    else {
      piVar2 = (int *)__errno();
      pcVar3 = strerror(*piVar2);
      pcVar6 = "Unable to seek to end of file: %s";
    }
  }
  FUN_00123d58(param_1,pcVar6,pcVar3);
  return (undefined8 *)0x0;
}


// ===== 00121688  FUN_00121688 =====

undefined4 FUN_00121688(long *param_1,undefined8 param_2)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  undefined4 uVar4;
  long *plVar5;
  
  (**(code **)(*param_1 + 0x6c8))();
  pvVar1 = (void *)(**(code **)(*param_1 + 0x328))(param_1,param_2,DAT_00155540);
  if (pvVar1 != (void *)0x0) {
    *(long *)((long)pvVar1 + 0x40) = *(long *)((long)pvVar1 + 0x40) + 1;
  }
  (**(code **)(*param_1 + 0x6d0))(param_1,param_2);
  if (pvVar1 == (void *)0x0) {
    FUN_00123d58(param_1,"Already disposed");
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)((long)pvVar1 + 0x10);
    (**(code **)(*param_1 + 0x6c8))(param_1,param_2);
    lVar3 = *(long *)((long)pvVar1 + 0x40) + -1;
    *(long *)((long)pvVar1 + 0x40) = lVar3;
    if (lVar3 == 0) {
      pvVar2 = *(void **)((long)pvVar1 + 0x28);
      if (pvVar2 != (void *)0x0) {
        *(void **)((long)pvVar1 + 0x30) = pvVar2;
        operator_delete(pvVar2);
      }
      plVar5 = *(long **)((long)pvVar1 + 8);
      if ((plVar5 != (long *)0x0) &&
         (lVar3 = FUN_00144550(0xffffffffffffffff,plVar5 + 1), lVar3 == 0)) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        FUN_00126724(plVar5);
      }
      operator_delete(pvVar1);
    }
    (**(code **)(*param_1 + 0x6d0))(param_1,param_2);
  }
  return uVar4;
}


// ===== 001217ac  FUN_001217ac =====

undefined4 FUN_001217ac(long *param_1,undefined8 param_2)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  undefined4 uVar4;
  long *plVar5;
  
  (**(code **)(*param_1 + 0x6c8))();
  pvVar1 = (void *)(**(code **)(*param_1 + 0x328))(param_1,param_2,DAT_00155540);
  if (pvVar1 != (void *)0x0) {
    *(long *)((long)pvVar1 + 0x40) = *(long *)((long)pvVar1 + 0x40) + 1;
  }
  (**(code **)(*param_1 + 0x6d0))(param_1,param_2);
  if (pvVar1 == (void *)0x0) {
    FUN_00123d58(param_1,"Already disposed");
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)((long)pvVar1 + 0x14);
    (**(code **)(*param_1 + 0x6c8))(param_1,param_2);
    lVar3 = *(long *)((long)pvVar1 + 0x40) + -1;
    *(long *)((long)pvVar1 + 0x40) = lVar3;
    if (lVar3 == 0) {
      pvVar2 = *(void **)((long)pvVar1 + 0x28);
      if (pvVar2 != (void *)0x0) {
        *(void **)((long)pvVar1 + 0x30) = pvVar2;
        operator_delete(pvVar2);
      }
      plVar5 = *(long **)((long)pvVar1 + 8);
      if ((plVar5 != (long *)0x0) &&
         (lVar3 = FUN_00144550(0xffffffffffffffff,plVar5 + 1), lVar3 == 0)) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        FUN_00126724(plVar5);
      }
      operator_delete(pvVar1);
    }
    (**(code **)(*param_1 + 0x6d0))(param_1,param_2);
  }
  return uVar4;
}


// ===== 001218d0  FUN_001218d0 =====

undefined4 FUN_001218d0(long *param_1,undefined8 param_2)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  undefined4 uVar4;
  long *plVar5;
  
  (**(code **)(*param_1 + 0x6c8))();
  pvVar1 = (void *)(**(code **)(*param_1 + 0x328))(param_1,param_2,DAT_00155540);
  if (pvVar1 != (void *)0x0) {
    *(long *)((long)pvVar1 + 0x40) = *(long *)((long)pvVar1 + 0x40) + 1;
  }
  (**(code **)(*param_1 + 0x6d0))(param_1,param_2);
  if (pvVar1 == (void *)0x0) {
    FUN_00123d58(param_1,"Already disposed");
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)((long)pvVar1 + 0x18);
    (**(code **)(*param_1 + 0x6c8))(param_1,param_2);
    lVar3 = *(long *)((long)pvVar1 + 0x40) + -1;
    *(long *)((long)pvVar1 + 0x40) = lVar3;
    if (lVar3 == 0) {
      pvVar2 = *(void **)((long)pvVar1 + 0x28);
      if (pvVar2 != (void *)0x0) {
        *(void **)((long)pvVar1 + 0x30) = pvVar2;
        operator_delete(pvVar2);
      }
      plVar5 = *(long **)((long)pvVar1 + 8);
      if ((plVar5 != (long *)0x0) &&
         (lVar3 = FUN_00144550(0xffffffffffffffff,plVar5 + 1), lVar3 == 0)) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        FUN_00126724(plVar5);
      }
      operator_delete(pvVar1);
    }
    (**(code **)(*param_1 + 0x6d0))(param_1,param_2);
  }
  return uVar4;
}


// ===== 001219f4  FUN_001219f4 =====

undefined4 FUN_001219f4(long *param_1,undefined8 param_2)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  undefined4 uVar4;
  long *plVar5;
  
  (**(code **)(*param_1 + 0x6c8))();
  pvVar1 = (void *)(**(code **)(*param_1 + 0x328))(param_1,param_2,DAT_00155540);
  if (pvVar1 != (void *)0x0) {
    *(long *)((long)pvVar1 + 0x40) = *(long *)((long)pvVar1 + 0x40) + 1;
  }
  (**(code **)(*param_1 + 0x6d0))(param_1,param_2);
  if (pvVar1 == (void *)0x0) {
    FUN_00123d58(param_1,"Already disposed");
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)((long)pvVar1 + 0x20);
    (**(code **)(*param_1 + 0x6c8))(param_1,param_2);
    lVar3 = *(long *)((long)pvVar1 + 0x40) + -1;
    *(long *)((long)pvVar1 + 0x40) = lVar3;
    if (lVar3 == 0) {
      pvVar2 = *(void **)((long)pvVar1 + 0x28);
      if (pvVar2 != (void *)0x0) {
        *(void **)((long)pvVar1 + 0x30) = pvVar2;
        operator_delete(pvVar2);
      }
      plVar5 = *(long **)((long)pvVar1 + 8);
      if ((plVar5 != (long *)0x0) &&
         (lVar3 = FUN_00144550(0xffffffffffffffff,plVar5 + 1), lVar3 == 0)) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        FUN_00126724(plVar5);
      }
      operator_delete(pvVar1);
    }
    (**(code **)(*param_1 + 0x6d0))(param_1,param_2);
  }
  return uVar4;
}


// ===== 00121b18  FUN_00121b18 =====

undefined4 FUN_00121b18(long *param_1,undefined8 param_2)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  undefined4 uVar4;
  long *plVar5;
  
  (**(code **)(*param_1 + 0x6c8))();
  pvVar1 = (void *)(**(code **)(*param_1 + 0x328))(param_1,param_2,DAT_00155540);
  if (pvVar1 != (void *)0x0) {
    *(long *)((long)pvVar1 + 0x40) = *(long *)((long)pvVar1 + 0x40) + 1;
  }
  (**(code **)(*param_1 + 0x6d0))(param_1,param_2);
  if (pvVar1 == (void *)0x0) {
    FUN_00123d58(param_1,"Already disposed");
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)((long)pvVar1 + 0x1c);
    (**(code **)(*param_1 + 0x6c8))(param_1,param_2);
    lVar3 = *(long *)((long)pvVar1 + 0x40) + -1;
    *(long *)((long)pvVar1 + 0x40) = lVar3;
    if (lVar3 == 0) {
      pvVar2 = *(void **)((long)pvVar1 + 0x28);
      if (pvVar2 != (void *)0x0) {
        *(void **)((long)pvVar1 + 0x30) = pvVar2;
        operator_delete(pvVar2);
      }
      plVar5 = *(long **)((long)pvVar1 + 8);
      if ((plVar5 != (long *)0x0) &&
         (lVar3 = FUN_00144550(0xffffffffffffffff,plVar5 + 1), lVar3 == 0)) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        FUN_00126724(plVar5);
      }
      operator_delete(pvVar1);
    }
    (**(code **)(*param_1 + 0x6d0))(param_1,param_2);
  }
  return uVar4;
}


// ===== 00121c3c  FUN_00121c3c =====

long FUN_00121c3c(long *param_1,undefined8 param_2)

{
  void *pvVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  long *plVar5;
  
  (**(code **)(*param_1 + 0x6c8))();
  pvVar1 = (void *)(**(code **)(*param_1 + 0x328))(param_1,param_2,DAT_00155540);
  if (pvVar1 != (void *)0x0) {
    *(long *)((long)pvVar1 + 0x40) = *(long *)((long)pvVar1 + 0x40) + 1;
  }
  (**(code **)(*param_1 + 0x6d0))(param_1,param_2);
  if (pvVar1 == (void *)0x0) {
    FUN_00123d58(param_1,"Already disposed");
    lVar2 = 0;
  }
  else {
    lVar2 = (**(code **)(*param_1 + 0x598))(param_1,*(undefined4 *)((long)pvVar1 + 0x18));
    if (lVar2 != 0) {
      (**(code **)(*param_1 + 0x698))
                (param_1,lVar2,0,*(undefined4 *)((long)pvVar1 + 0x18),
                 *(undefined8 *)((long)pvVar1 + 0x28));
    }
    (**(code **)(*param_1 + 0x6c8))(param_1,param_2);
    lVar4 = *(long *)((long)pvVar1 + 0x40) + -1;
    *(long *)((long)pvVar1 + 0x40) = lVar4;
    if (lVar4 == 0) {
      pvVar3 = *(void **)((long)pvVar1 + 0x28);
      if (pvVar3 != (void *)0x0) {
        *(void **)((long)pvVar1 + 0x30) = pvVar3;
        operator_delete(pvVar3);
      }
      plVar5 = *(long **)((long)pvVar1 + 8);
      if ((plVar5 != (long *)0x0) &&
         (lVar4 = FUN_00144550(0xffffffffffffffff,plVar5 + 1), lVar4 == 0)) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        FUN_00126724(plVar5);
      }
      operator_delete(pvVar1);
    }
    (**(code **)(*param_1 + 0x6d0))(param_1,param_2);
  }
  return lVar2;
}


// ===== 00121d98  FUN_00121d98 =====

long FUN_00121d98(long *param_1,undefined8 param_2,uint param_3)

{
  int *piVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  char *pcVar7;
  long *plVar8;
  void *pvVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  int *piVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined4 local_78 [3];
  undefined4 local_6c;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  (**(code **)(*param_1 + 0x6c8))();
  plVar6 = (long *)(**(code **)(*param_1 + 0x328))(param_1,param_2,DAT_00155540);
  if (plVar6 != (long *)0x0) {
    plVar6[8] = plVar6[8] + 1;
  }
  (**(code **)(*param_1 + 0x6d0))(param_1,param_2);
  if (plVar6 == (long *)0x0) {
    FUN_00123d58(param_1,"Already disposed");
    lVar10 = 0;
    goto LAB_00122014;
  }
  lVar14 = *plVar6;
  lVar10 = *(long *)(lVar14 + 0x10);
  iVar4 = pthread_rwlock_rdlock((pthread_rwlock_t *)(lVar14 + 0x88));
  if (iVar4 != 0) {
    pcVar7 = strerror(iVar4);
    __android_log_print(6,"GifImage","pthread_rwlock_rdlock returned %s",pcVar7);
  }
  if (((int)param_3 < 0) || (*(int *)(lVar10 + 0x20) <= (int)param_3)) {
    FUN_00123d58(param_1,"Index exceeds GIF file image count");
LAB_00121f4c:
    lVar10 = 0;
  }
  else {
    lVar15 = *(long *)(lVar10 + 0x48);
    plVar8 = (long *)operator_new(0x38);
    plVar8[5] = 0;
    plVar8[6] = 0;
    puVar17 = (undefined8 *)(lVar15 + (ulong)param_3 * 0x38);
    lVar10 = *plVar6;
    lVar11 = plVar6[1];
    uVar13 = (ulong)param_3;
    if (lVar11 != 0) {
      FUN_00144520(1,lVar11 + 8);
    }
    *plVar8 = lVar10;
    plVar8[1] = lVar11;
    uVar2 = *(undefined4 *)(plVar6[5] + uVar13 * 4);
    *(uint *)(plVar8 + 2) = param_3;
    piVar16 = (int *)(lVar15 + uVar13 * 0x38 + 0x28);
    iVar4 = *piVar16;
    uVar18 = *puVar17;
    *(undefined4 *)((long)plVar8 + 0x1c) = uVar2;
    lVar10 = puVar17[1];
    *(undefined8 *)((long)plVar8 + 0x14) = uVar18;
    plVar8[4] = lVar10;
    if (iVar4 < 1) {
LAB_0012205c:
      local_78[0] = 0;
      local_6c = 0xffffffff;
    }
    else {
      lVar11 = 0;
      lVar10 = 0;
      iVar5 = 0;
      do {
        piVar1 = (int *)(*(long *)(lVar15 + uVar13 * 0x38 + 0x30) + lVar11);
        if (piVar1[4] == 0xf9) {
          iVar5 = DGifExtensionToGCB((long)*piVar1,*(undefined8 *)(piVar1 + 2),local_78);
          iVar4 = *piVar16;
        }
        lVar10 = lVar10 + 1;
        lVar11 = lVar11 + 0x18;
      } while (lVar10 < iVar4);
      if (iVar5 != 1) goto LAB_0012205c;
    }
    *(undefined4 *)(plVar8 + 5) = local_78[0];
    *(undefined4 *)((long)plVar8 + 0x2c) = local_6c;
    lVar10 = FUN_0012105c(param_1,DAT_00155548,DAT_00155550,plVar8);
    if (lVar10 == 0) {
      plVar12 = (long *)plVar8[1];
      if ((plVar12 != (long *)0x0) &&
         (lVar10 = FUN_00144550(0xffffffffffffffff,plVar12 + 1), lVar10 == 0)) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
        FUN_00126724(plVar12);
      }
      operator_delete(plVar8);
      goto LAB_00121f4c;
    }
    plVar8[6] = 1;
  }
  iVar4 = pthread_rwlock_unlock((pthread_rwlock_t *)(lVar14 + 0x88));
  if (iVar4 != 0) {
    pcVar7 = strerror(iVar4);
    __android_log_print(6,"GifImage","pthread_rwlock_unlock read returned %s",pcVar7);
  }
  (**(code **)(*param_1 + 0x6c8))(param_1,param_2);
  lVar14 = plVar6[8];
  plVar6[8] = lVar14 + -1;
  if (lVar14 + -1 == 0) {
    pvVar9 = (void *)plVar6[5];
    if (pvVar9 != (void *)0x0) {
      plVar6[6] = (long)pvVar9;
      operator_delete(pvVar9);
    }
    plVar8 = (long *)plVar6[1];
    if ((plVar8 != (long *)0x0) &&
       (lVar14 = FUN_00144550(0xffffffffffffffff,plVar8 + 1), lVar14 == 0)) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      FUN_00126724(plVar8);
    }
    operator_delete(plVar6);
  }
  (**(code **)(*param_1 + 0x6d0))(param_1,param_2);
LAB_00122014:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar10;
}


// ===== 001220dc  FUN_001220dc =====

int FUN_001220dc(long *param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  void *pvVar3;
  long lVar4;
  long *plVar5;
  
  (**(code **)(*param_1 + 0x6c8))();
  plVar2 = (long *)(**(code **)(*param_1 + 0x328))(param_1,param_2,DAT_00155540);
  if (plVar2 != (long *)0x0) {
    plVar2[8] = plVar2[8] + 1;
  }
  (**(code **)(*param_1 + 0x6d0))(param_1,param_2);
  if (plVar2 == (long *)0x0) {
    FUN_00123d58(param_1,"Already disposed");
    iVar1 = 0;
  }
  else {
    iVar1 = (**(code **)(**(long **)(*plVar2 + 0x20) + 0x18))();
    iVar1 = (iVar1 + *(int *)(*plVar2 + 0x58)) - *(int *)(*plVar2 + 0x48);
    (**(code **)(*param_1 + 0x6c8))(param_1,param_2);
    lVar4 = plVar2[8];
    plVar2[8] = lVar4 + -1;
    if (lVar4 + -1 == 0) {
      pvVar3 = (void *)plVar2[5];
      if (pvVar3 != (void *)0x0) {
        plVar2[6] = (long)pvVar3;
        operator_delete(pvVar3);
      }
      plVar5 = (long *)plVar2[1];
      if ((plVar5 != (long *)0x0) &&
         (lVar4 = FUN_00144550(0xffffffffffffffff,plVar5 + 1), lVar4 == 0)) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        FUN_00126724(plVar5);
      }
      operator_delete(plVar2);
    }
    (**(code **)(*param_1 + 0x6d0))(param_1,param_2);
  }
  return iVar1;
}


// ===== 00122224  FUN_00122224 =====

undefined1 FUN_00122224(long *param_1,undefined8 param_2)

{
  long *plVar1;
  void *pvVar2;
  long lVar3;
  undefined1 uVar4;
  long *plVar5;
  
  (**(code **)(*param_1 + 0x6c8))();
  plVar1 = (long *)(**(code **)(*param_1 + 0x328))(param_1,param_2,DAT_00155540);
  if (plVar1 != (long *)0x0) {
    plVar1[8] = plVar1[8] + 1;
  }
  (**(code **)(*param_1 + 0x6d0))(param_1,param_2);
  if (plVar1 == (long *)0x0) {
    FUN_00123d58(param_1,"Already disposed");
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined1 *)(*plVar1 + 0xc);
    (**(code **)(*param_1 + 0x6c8))(param_1,param_2);
    lVar3 = plVar1[8];
    plVar1[8] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
      pvVar2 = (void *)plVar1[5];
      if (pvVar2 != (void *)0x0) {
        plVar1[6] = (long)pvVar2;
        operator_delete(pvVar2);
      }
      plVar5 = (long *)plVar1[1];
      if ((plVar5 != (long *)0x0) &&
         (lVar3 = FUN_00144550(0xffffffffffffffff,plVar5 + 1), lVar3 == 0)) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        FUN_00126724(plVar5);
      }
      operator_delete(plVar1);
    }
    (**(code **)(*param_1 + 0x6d0))(param_1,param_2);
  }
  return uVar4;
}


// ===== 0012234c  FUN_0012234c =====

void FUN_0012234c(long *param_1,undefined8 param_2)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  long *plVar4;
  
  (**(code **)(*param_1 + 0x6c8))();
  pvVar1 = (void *)(**(code **)(*param_1 + 0x328))(param_1,param_2,DAT_00155540);
  if (pvVar1 != (void *)0x0) {
    (**(code **)(*param_1 + 0x370))(param_1,param_2,DAT_00155540,0);
    (**(code **)(*param_1 + 0x6c8))(param_1,param_2);
    lVar3 = *(long *)((long)pvVar1 + 0x40) + -1;
    *(long *)((long)pvVar1 + 0x40) = lVar3;
    if (lVar3 == 0) {
      pvVar2 = *(void **)((long)pvVar1 + 0x28);
      if (pvVar2 != (void *)0x0) {
        *(void **)((long)pvVar1 + 0x30) = pvVar2;
        operator_delete(pvVar2);
      }
      plVar4 = *(long **)((long)pvVar1 + 8);
      if ((plVar4 != (long *)0x0) &&
         (lVar3 = FUN_00144550(0xffffffffffffffff,plVar4 + 1), lVar3 == 0)) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        FUN_00126724(plVar4);
      }
      operator_delete(pvVar1);
    }
    (**(code **)(*param_1 + 0x6d0))(param_1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x0012244c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x6d0))(param_1,param_2);
  return;
}


// ===== 00122450  thunk_FUN_0012234c =====

void thunk_FUN_0012234c(long *param_1,undefined8 param_2)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  long *plVar4;
  
  (**(code **)(*param_1 + 0x6c8))();
  pvVar1 = (void *)(**(code **)(*param_1 + 0x328))(param_1,param_2,DAT_00155540);
  if (pvVar1 != (void *)0x0) {
    (**(code **)(*param_1 + 0x370))(param_1,param_2,DAT_00155540,0);
    (**(code **)(*param_1 + 0x6c8))(param_1,param_2);
    lVar3 = *(long *)((long)pvVar1 + 0x40) + -1;
    *(long *)((long)pvVar1 + 0x40) = lVar3;
    if (lVar3 == 0) {
      pvVar2 = *(void **)((long)pvVar1 + 0x28);
      if (pvVar2 != (void *)0x0) {
        *(void **)((long)pvVar1 + 0x30) = pvVar2;
        operator_delete(pvVar2);
      }
      plVar4 = *(long **)((long)pvVar1 + 8);
      if ((plVar4 != (long *)0x0) &&
         (lVar3 = FUN_00144550(0xffffffffffffffff,plVar4 + 1), lVar3 == 0)) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        FUN_00126724(plVar4);
      }
      operator_delete(pvVar1);
    }
    (**(code **)(*param_1 + 0x6d0))(param_1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x0012244c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x6d0))(param_1,param_2);
  return;
}


// ===== 00122454  FUN_00122454 =====

void FUN_00122454(long *param_1,undefined8 param_2,uint param_3,uint param_4,undefined8 param_5)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  char *pcVar5;
  long lVar6;
  int *piVar7;
  long *plVar8;
  long lVar9;
  int *piVar10;
  undefined8 local_90;
  undefined1 auStack_88 [12];
  uint local_7c;
  uint local_78;
  undefined4 local_74;
  int local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_1 + 0x6c8))();
  plVar3 = (long *)(**(code **)(*param_1 + 0x328))(param_1,param_2,DAT_00155558);
  if (plVar3 != (long *)0x0) {
    plVar3[6] = plVar3[6] + 1;
  }
  (**(code **)(*param_1 + 0x6d0))(param_1,param_2);
  if (plVar3 == (long *)0x0) {
    if (*(long *)(lVar1 + 0x28) == local_68) {
      FUN_00123d58(param_1,"Already disposed");
      return;
    }
    goto LAB_00122748;
  }
  iVar2 = AndroidBitmap_getInfo(param_1,param_5,&local_7c);
  if (iVar2 == 0) {
    if (-1 < (int)(param_4 | param_3)) {
      if ((local_7c < param_3) || (local_78 < param_4)) {
        pcVar5 = "Width or height is too small";
      }
      else {
        if (local_70 == 1) {
          lVar9 = *plVar3;
          FUN_00126898(lVar9 + 0x60);
          lVar6 = plVar3[2];
          uVar4 = (**(code **)(**(long **)(lVar9 + 0x20) + 0x28))
                            (*(long **)(lVar9 + 0x20),
                             (long)*(int *)(*(long *)(lVar9 + 0x30) + (long)(int)lVar6 * 4));
          if (((uVar4 & 1) != 0) && (iVar2 = FUN_00120140(lVar9,1,0,0x7fffffff), iVar2 == 1)) {
            piVar10 = *(int **)(*(long *)(*plVar3 + 0x10) + 0x18);
            FUN_0012047c(auStack_88,lVar9 + 0x88);
            lVar6 = *(long *)(*(long *)(lVar9 + 0x10) + 0x48) + (long)(int)lVar6 * 0x38;
            piVar7 = *(int **)(lVar6 + 0x18);
            if ((piVar7 != (int *)0x0) &&
               (piVar10 = piVar7, *piVar7 != 1 << (ulong)(piVar7[1] & 0x1f))) {
              piVar10 = DAT_00155560;
            }
            iVar2 = AndroidBitmap_lockPixels(param_1,param_5,&local_90);
            if (iVar2 == 0) {
              FUN_0012274c(local_90,param_3,param_4,local_74,lVar6,*(undefined8 *)(*plVar3 + 0x48),
                           piVar10,*(undefined4 *)((long)plVar3 + 0x2c));
              AndroidBitmap_unlockPixels(param_1,param_5);
            }
            else {
              FUN_00123d58(param_1,"Bad bitmap");
            }
            FUN_001204c0(auStack_88);
          }
          FUN_001268c4(lVar9 + 0x60);
          goto LAB_0012250c;
        }
        pcVar5 = "Wrong color format";
      }
      goto LAB_00122504;
    }
    FUN_00123c7c(param_1,"Width or height is negative");
  }
  else {
    pcVar5 = "Bad bitmap";
LAB_00122504:
    FUN_00123d58(param_1,pcVar5);
  }
LAB_0012250c:
  (**(code **)(*param_1 + 0x6c8))(param_1,param_2);
  lVar6 = plVar3[6];
  plVar3[6] = lVar6 + -1;
  if (lVar6 + -1 == 0) {
    plVar8 = (long *)plVar3[1];
    if ((plVar8 != (long *)0x0) && (lVar6 = FUN_00144550(0xffffffffffffffff,plVar8 + 1), lVar6 == 0)
       ) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      FUN_00126724(plVar8);
    }
    operator_delete(plVar3);
  }
  (**(code **)(*param_1 + 0x6d0))(param_1,param_2);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
LAB_00122748:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012274c  FUN_0012274c =====

void FUN_0012274c(long param_1,int param_2,int param_3,int param_4,long param_5,long param_6,
                 uint *param_7,uint param_8)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  
  iVar5 = *(int *)(param_5 + 0xc);
  if (param_3 <= *(int *)(param_5 + 0xc)) {
    iVar5 = param_3;
  }
  if (0 < iVar5) {
    iVar6 = *(int *)(param_5 + 8);
    iVar2 = iVar6;
    if (param_2 <= iVar6) {
      iVar2 = param_2;
    }
    do {
      if (iVar2 != 0) {
        lVar7 = 0;
        do {
          uVar8 = 0;
          if (param_7 != (uint *)0x0) {
            bVar3 = *(byte *)(param_6 + lVar7);
            if (bVar3 != param_8) {
              uVar8 = (uint)bVar3;
              if (*param_7 < (uint)bVar3 || *param_7 == uVar8) {
                uVar8 = 0;
              }
              uVar8 = *(uint3 *)(*(long *)(param_7 + 4) + (ulong)uVar8 * 3) | 0xff000000;
            }
          }
          *(uint *)(param_1 + lVar7 * 4) = uVar8;
          lVar7 = lVar7 + 1;
        } while (iVar2 != lVar7);
        iVar6 = *(int *)(param_5 + 8);
      }
      param_6 = param_6 + iVar6;
      iVar4 = iVar5 + -1;
      param_1 = param_1 + param_4;
      bVar1 = 0 < iVar5;
      iVar5 = iVar4;
    } while (iVar4 != 0 && bVar1);
  }
  return;
}


// ===== 001227ec  FUN_001227ec =====

undefined4 FUN_001227ec(long *param_1,undefined8 param_2)

{
  void *pvVar1;
  long lVar2;
  undefined4 uVar3;
  long *plVar4;
  
  (**(code **)(*param_1 + 0x6c8))();
  pvVar1 = (void *)(**(code **)(*param_1 + 0x328))(param_1,param_2,DAT_00155558);
  if (pvVar1 != (void *)0x0) {
    *(long *)((long)pvVar1 + 0x30) = *(long *)((long)pvVar1 + 0x30) + 1;
  }
  (**(code **)(*param_1 + 0x6d0))(param_1,param_2);
  if (pvVar1 == (void *)0x0) {
    FUN_00123d58(param_1,"Already disposed");
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = *(undefined4 *)((long)pvVar1 + 0x1c);
    (**(code **)(*param_1 + 0x6c8))(param_1,param_2);
    lVar2 = *(long *)((long)pvVar1 + 0x30) + -1;
    *(long *)((long)pvVar1 + 0x30) = lVar2;
    if (lVar2 == 0) {
      plVar4 = *(long **)((long)pvVar1 + 8);
      if ((plVar4 != (long *)0x0) &&
         (lVar2 = FUN_00144550(0xffffffffffffffff,plVar4 + 1), lVar2 == 0)) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        FUN_00126724(plVar4);
      }
      operator_delete(pvVar1);
    }
    (**(code **)(*param_1 + 0x6d0))(param_1,param_2);
  }
  return uVar3;
}


// ===== 00122900  FUN_00122900 =====

uint FUN_00122900(long *param_1,undefined8 param_2)

{
  byte *pbVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  char *pcVar6;
  long lVar7;
  uint *puVar8;
  long *plVar9;
  uint uVar10;
  uint *puVar11;
  
  (**(code **)(*param_1 + 0x6c8))();
  plVar5 = (long *)(**(code **)(*param_1 + 0x328))(param_1,param_2,DAT_00155558);
  if (plVar5 != (long *)0x0) {
    plVar5[6] = plVar5[6] + 1;
  }
  (**(code **)(*param_1 + 0x6d0))(param_1,param_2);
  lVar7 = *plVar5;
  plVar9 = (long *)plVar5[1];
  if (plVar9 != (long *)0x0) {
    FUN_00144520(1,plVar9 + 1);
  }
  lVar3 = plVar5[2];
  puVar11 = *(uint **)(*(long *)(lVar7 + 0x10) + 0x18);
  iVar4 = pthread_rwlock_rdlock((pthread_rwlock_t *)(lVar7 + 0x88));
  if (iVar4 != 0) {
    pcVar6 = strerror(iVar4);
    __android_log_print(6,"GifImage","pthread_rwlock_rdlock returned %s",pcVar6);
  }
  puVar8 = *(uint **)(*(long *)(*(long *)(lVar7 + 0x10) + 0x48) + (long)(int)lVar3 * 0x38 + 0x18);
  if ((puVar8 != (uint *)0x0) && (puVar11 = puVar8, *puVar8 != 1 << (ulong)(puVar8[1] & 0x1f))) {
    puVar11 = DAT_00155560;
  }
  uVar10 = 0;
  if ((puVar11 != (uint *)0x0) && (uVar2 = *(uint *)((long)plVar5 + 0x2c), -1 < (int)uVar2)) {
    if (*puVar11 <= uVar2) {
      uVar2 = 0;
    }
    pbVar1 = (byte *)(*(long *)(puVar11 + 4) + (ulong)uVar2 * 3);
    uVar10 = (uint)pbVar1[1] << 8 | (uint)*pbVar1 << 0x10 | (uint)pbVar1[2] | 0xff000000;
  }
  iVar4 = pthread_rwlock_unlock((pthread_rwlock_t *)(lVar7 + 0x88));
  if (iVar4 != 0) {
    pcVar6 = strerror(iVar4);
    __android_log_print(6,"GifImage","pthread_rwlock_unlock read returned %s",pcVar6);
  }
  if ((plVar9 != (long *)0x0) && (lVar7 = FUN_00144550(0xffffffffffffffff,plVar9 + 1), lVar7 == 0))
  {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    FUN_00126724(plVar9);
  }
  (**(code **)(*param_1 + 0x6c8))(param_1,param_2);
  lVar7 = plVar5[6];
  plVar5[6] = lVar7 + -1;
  if (lVar7 + -1 == 0) {
    plVar9 = (long *)plVar5[1];
    if ((plVar9 != (long *)0x0) && (lVar7 = FUN_00144550(0xffffffffffffffff,plVar9 + 1), lVar7 == 0)
       ) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      FUN_00126724(plVar9);
    }
    operator_delete(plVar5);
  }
  (**(code **)(*param_1 + 0x6d0))(param_1,param_2);
  return uVar10;
}


// ===== 00122b1c  FUN_00122b1c =====

uint FUN_00122b1c(long *param_1,undefined8 param_2)

{
  void *pvVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  
  (**(code **)(*param_1 + 0x6c8))();
  pvVar1 = (void *)(**(code **)(*param_1 + 0x328))(param_1,param_2,DAT_00155558);
  if (pvVar1 != (void *)0x0) {
    *(long *)((long)pvVar1 + 0x30) = *(long *)((long)pvVar1 + 0x30) + 1;
  }
  (**(code **)(*param_1 + 0x6d0))(param_1,param_2);
  if (pvVar1 == (void *)0x0) {
    FUN_00123d58(param_1,"Already disposed");
    uVar3 = 0xff;
  }
  else {
    uVar3 = ~*(uint *)((long)pvVar1 + 0x2c) >> 0x1f;
    (**(code **)(*param_1 + 0x6c8))(param_1,param_2);
    lVar2 = *(long *)((long)pvVar1 + 0x30) + -1;
    *(long *)((long)pvVar1 + 0x30) = lVar2;
    if (lVar2 == 0) {
      plVar4 = *(long **)((long)pvVar1 + 8);
      if ((plVar4 != (long *)0x0) &&
         (lVar2 = FUN_00144550(0xffffffffffffffff,plVar4 + 1), lVar2 == 0)) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        FUN_00126724(plVar4);
      }
      operator_delete(pvVar1);
    }
    (**(code **)(*param_1 + 0x6d0))(param_1,param_2);
  }
  return uVar3;
}


// ===== 00122c38  FUN_00122c38 =====

undefined4 FUN_00122c38(long *param_1,undefined8 param_2)

{
  void *pvVar1;
  long lVar2;
  undefined4 uVar3;
  long *plVar4;
  
  (**(code **)(*param_1 + 0x6c8))();
  pvVar1 = (void *)(**(code **)(*param_1 + 0x328))(param_1,param_2,DAT_00155558);
  if (pvVar1 != (void *)0x0) {
    *(long *)((long)pvVar1 + 0x30) = *(long *)((long)pvVar1 + 0x30) + 1;
  }
  (**(code **)(*param_1 + 0x6d0))(param_1,param_2);
  if (pvVar1 == (void *)0x0) {
    FUN_00123d58(param_1,"Already disposed");
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = *(undefined4 *)((long)pvVar1 + 0x20);
    (**(code **)(*param_1 + 0x6c8))(param_1,param_2);
    lVar2 = *(long *)((long)pvVar1 + 0x30) + -1;
    *(long *)((long)pvVar1 + 0x30) = lVar2;
    if (lVar2 == 0) {
      plVar4 = *(long **)((long)pvVar1 + 8);
      if ((plVar4 != (long *)0x0) &&
         (lVar2 = FUN_00144550(0xffffffffffffffff,plVar4 + 1), lVar2 == 0)) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        FUN_00126724(plVar4);
      }
      operator_delete(pvVar1);
    }
    (**(code **)(*param_1 + 0x6d0))(param_1,param_2);
  }
  return uVar3;
}


// ===== 00122d4c  FUN_00122d4c =====

undefined4 FUN_00122d4c(long *param_1,undefined8 param_2)

{
  void *pvVar1;
  long lVar2;
  undefined4 uVar3;
  long *plVar4;
  
  (**(code **)(*param_1 + 0x6c8))();
  pvVar1 = (void *)(**(code **)(*param_1 + 0x328))(param_1,param_2,DAT_00155558);
  if (pvVar1 != (void *)0x0) {
    *(long *)((long)pvVar1 + 0x30) = *(long *)((long)pvVar1 + 0x30) + 1;
  }
  (**(code **)(*param_1 + 0x6d0))(param_1,param_2);
  if (pvVar1 == (void *)0x0) {
    FUN_00123d58(param_1,"Already disposed");
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = *(undefined4 *)((long)pvVar1 + 0x24);
    (**(code **)(*param_1 + 0x6c8))(param_1,param_2);
    lVar2 = *(long *)((long)pvVar1 + 0x30) + -1;
    *(long *)((long)pvVar1 + 0x30) = lVar2;
    if (lVar2 == 0) {
      plVar4 = *(long **)((long)pvVar1 + 8);
      if ((plVar4 != (long *)0x0) &&
         (lVar2 = FUN_00144550(0xffffffffffffffff,plVar4 + 1), lVar2 == 0)) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        FUN_00126724(plVar4);
      }
      operator_delete(pvVar1);
    }
    (**(code **)(*param_1 + 0x6d0))(param_1,param_2);
  }
  return uVar3;
}


// ===== 00122e60  FUN_00122e60 =====

undefined4 FUN_00122e60(long *param_1,undefined8 param_2)

{
  void *pvVar1;
  long lVar2;
  undefined4 uVar3;
  long *plVar4;
  
  (**(code **)(*param_1 + 0x6c8))();
  pvVar1 = (void *)(**(code **)(*param_1 + 0x328))(param_1,param_2,DAT_00155558);
  if (pvVar1 != (void *)0x0) {
    *(long *)((long)pvVar1 + 0x30) = *(long *)((long)pvVar1 + 0x30) + 1;
  }
  (**(code **)(*param_1 + 0x6d0))(param_1,param_2);
  if (pvVar1 == (void *)0x0) {
    FUN_00123d58(param_1,"Already disposed");
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = *(undefined4 *)((long)pvVar1 + 0x14);
    (**(code **)(*param_1 + 0x6c8))(param_1,param_2);
    lVar2 = *(long *)((long)pvVar1 + 0x30) + -1;
    *(long *)((long)pvVar1 + 0x30) = lVar2;
    if (lVar2 == 0) {
      plVar4 = *(long **)((long)pvVar1 + 8);
      if ((plVar4 != (long *)0x0) &&
         (lVar2 = FUN_00144550(0xffffffffffffffff,plVar4 + 1), lVar2 == 0)) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        FUN_00126724(plVar4);
      }
      operator_delete(pvVar1);
    }
    (**(code **)(*param_1 + 0x6d0))(param_1,param_2);
  }
  return uVar3;
}


// ===== 00122f74  FUN_00122f74 =====

undefined4 FUN_00122f74(long *param_1,undefined8 param_2)

{
  void *pvVar1;
  long lVar2;
  undefined4 uVar3;
  long *plVar4;
  
  (**(code **)(*param_1 + 0x6c8))();
  pvVar1 = (void *)(**(code **)(*param_1 + 0x328))(param_1,param_2,DAT_00155558);
  if (pvVar1 != (void *)0x0) {
    *(long *)((long)pvVar1 + 0x30) = *(long *)((long)pvVar1 + 0x30) + 1;
  }
  (**(code **)(*param_1 + 0x6d0))(param_1,param_2);
  if (pvVar1 == (void *)0x0) {
    FUN_00123d58(param_1,"Already disposed");
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = *(undefined4 *)((long)pvVar1 + 0x18);
    (**(code **)(*param_1 + 0x6c8))(param_1,param_2);
    lVar2 = *(long *)((long)pvVar1 + 0x30) + -1;
    *(long *)((long)pvVar1 + 0x30) = lVar2;
    if (lVar2 == 0) {
      plVar4 = *(long **)((long)pvVar1 + 8);
      if ((plVar4 != (long *)0x0) &&
         (lVar2 = FUN_00144550(0xffffffffffffffff,plVar4 + 1), lVar2 == 0)) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        FUN_00126724(plVar4);
      }
      operator_delete(pvVar1);
    }
    (**(code **)(*param_1 + 0x6d0))(param_1,param_2);
  }
  return uVar3;
}


// ===== 00123088  FUN_00123088 =====

undefined4 FUN_00123088(long *param_1,undefined8 param_2)

{
  void *pvVar1;
  long lVar2;
  undefined4 uVar3;
  long *plVar4;
  
  (**(code **)(*param_1 + 0x6c8))();
  pvVar1 = (void *)(**(code **)(*param_1 + 0x328))(param_1,param_2,DAT_00155558);
  if (pvVar1 != (void *)0x0) {
    *(long *)((long)pvVar1 + 0x30) = *(long *)((long)pvVar1 + 0x30) + 1;
  }
  (**(code **)(*param_1 + 0x6d0))(param_1,param_2);
  if (pvVar1 == (void *)0x0) {
    FUN_00123d58(param_1,"Already disposed");
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = *(undefined4 *)((long)pvVar1 + 0x28);
    (**(code **)(*param_1 + 0x6c8))(param_1,param_2);
    lVar2 = *(long *)((long)pvVar1 + 0x30) + -1;
    *(long *)((long)pvVar1 + 0x30) = lVar2;
    if (lVar2 == 0) {
      plVar4 = *(long **)((long)pvVar1 + 8);
      if ((plVar4 != (long *)0x0) &&
         (lVar2 = FUN_00144550(0xffffffffffffffff,plVar4 + 1), lVar2 == 0)) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        FUN_00126724(plVar4);
      }
      operator_delete(pvVar1);
    }
    (**(code **)(*param_1 + 0x6d0))(param_1,param_2);
  }
  return uVar3;
}


// ===== 0012319c  FUN_0012319c =====

void FUN_0012319c(long *param_1,undefined8 param_2)

{
  void *pvVar1;
  long lVar2;
  long *plVar3;
  
  (**(code **)(*param_1 + 0x6c8))();
  pvVar1 = (void *)(**(code **)(*param_1 + 0x328))(param_1,param_2,DAT_00155558);
  if (pvVar1 != (void *)0x0) {
    (**(code **)(*param_1 + 0x370))(param_1,param_2,DAT_00155558,0);
    (**(code **)(*param_1 + 0x6c8))(param_1,param_2);
    lVar2 = *(long *)((long)pvVar1 + 0x30) + -1;
    *(long *)((long)pvVar1 + 0x30) = lVar2;
    if (lVar2 == 0) {
      plVar3 = *(long **)((long)pvVar1 + 8);
      if ((plVar3 != (long *)0x0) &&
         (lVar2 = FUN_00144550(0xffffffffffffffff,plVar3 + 1), lVar2 == 0)) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        FUN_00126724(plVar3);
      }
      operator_delete(pvVar1);
    }
    (**(code **)(*param_1 + 0x6d0))(param_1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x0012328c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x6d0))(param_1,param_2);
  return;
}


// ===== 00123290  thunk_FUN_0012319c =====

void thunk_FUN_0012319c(long *param_1,undefined8 param_2)

{
  void *pvVar1;
  long lVar2;
  long *plVar3;
  
  (**(code **)(*param_1 + 0x6c8))();
  pvVar1 = (void *)(**(code **)(*param_1 + 0x328))(param_1,param_2,DAT_00155558);
  if (pvVar1 != (void *)0x0) {
    (**(code **)(*param_1 + 0x370))(param_1,param_2,DAT_00155558,0);
    (**(code **)(*param_1 + 0x6c8))(param_1,param_2);
    lVar2 = *(long *)((long)pvVar1 + 0x30) + -1;
    *(long *)((long)pvVar1 + 0x30) = lVar2;
    if (lVar2 == 0) {
      plVar3 = *(long **)((long)pvVar1 + 8);
      if ((plVar3 != (long *)0x0) &&
         (lVar2 = FUN_00144550(0xffffffffffffffff,plVar3 + 1), lVar2 == 0)) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        FUN_00126724(plVar3);
      }
      operator_delete(pvVar1);
    }
    (**(code **)(*param_1 + 0x6d0))(param_1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x0012328c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x6d0))(param_1,param_2);
  return;
}


// ===== 00123294  FUN_00123294 =====

undefined8 FUN_00123294(long *param_1)

{
  undefined8 uVar1;
  
  DAT_00155530 = FUN_00123e34(param_1,"com/facebook/animated/gif/GifImage");
  if (((DAT_00155530 != 0) &&
      (DAT_00155540 = FUN_00123e7c(param_1,DAT_00155530,"mNativeContext",&DAT_001139ff),
      DAT_00155540 != 0)) &&
     (DAT_00155538 = FUN_00123e88(param_1,DAT_00155530,"<init>",&DAT_001133d3), DAT_00155538 != 0))
  {
    uVar1 = (**(code **)(*param_1 + 0x6b8))
                      (param_1,DAT_00155530,&PTR_s_nativeCreateFromDirectByteBuffer_00155270,0xe);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    DAT_00155548 = FUN_00123e34(param_1,"com/facebook/animated/gif/GifFrame");
    if (((DAT_00155548 != 0) &&
        (DAT_00155558 = FUN_00123e7c(param_1,DAT_00155548,"mNativeContext",&DAT_001139ff),
        DAT_00155558 != 0)) &&
       (DAT_00155550 = FUN_00123e88(param_1,DAT_00155548,"<init>",&DAT_001133d3), DAT_00155550 != 0)
       ) {
      uVar1 = (**(code **)(*param_1 + 0x6b8))
                        (param_1,DAT_00155548,&PTR_s_nativeRenderFrame_001553c0,0xb);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      DAT_00155560 = FUN_001233e8();
      return 0;
    }
  }
  return 0xffffffff;
}


// ===== 001233e8  FUN_001233e8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001233e8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  
  lVar8 = GifMakeMapObject(0x100,0);
  uVar5 = _UNK_00112218;
  uVar4 = _DAT_00112210;
  uVar3 = _UNK_00112068;
  uVar2 = _DAT_00112060;
  uVar1 = _DAT_00112040;
  if (lVar8 != 0) {
    puVar9 = *(undefined8 **)(lVar8 + 0x10);
    puVar9[1] = _UNK_00112048;
    *puVar9 = uVar1;
    puVar9[3] = uVar3;
    puVar9[2] = uVar2;
    uVar3 = _UNK_00112018;
    uVar2 = _DAT_00112010;
    uVar1 = _DAT_00111f90;
    puVar9[9] = _UNK_00111f98;
    puVar9[8] = uVar1;
    puVar9[0xb] = uVar5;
    puVar9[10] = uVar4;
    uVar6 = _UNK_00112238;
    uVar5 = _DAT_00112230;
    uVar4 = _UNK_001120e8;
    uVar1 = _DAT_001120e0;
    puVar9[5] = uVar3;
    puVar9[4] = uVar2;
    puVar9[7] = uVar6;
    puVar9[6] = uVar5;
    uVar6 = _UNK_00112268;
    uVar5 = _DAT_00112260;
    uVar2 = _DAT_00112240;
    puVar9[0xd] = _UNK_00112248;
    puVar9[0xc] = uVar2;
    puVar9[0xf] = uVar4;
    puVar9[0xe] = uVar1;
    uVar4 = _UNK_001121e8;
    uVar3 = _DAT_001121e0;
    uVar1 = _DAT_00112020;
    puVar9[0x15] = _UNK_00112028;
    puVar9[0x14] = uVar1;
    puVar9[0x17] = uVar6;
    puVar9[0x16] = uVar5;
    uVar6 = _UNK_00112278;
    uVar5 = _DAT_00112270;
    uVar2 = _UNK_00112118;
    uVar1 = _DAT_00112110;
    puVar9[0x11] = uVar4;
    puVar9[0x10] = uVar3;
    puVar9[0x13] = uVar2;
    puVar9[0x12] = uVar1;
    uVar1 = _DAT_00112170;
    uVar3 = _UNK_00112128;
    uVar2 = _DAT_00112120;
    puVar9[0x19] = _UNK_00112178;
    puVar9[0x18] = uVar1;
    puVar9[0x1b] = uVar6;
    puVar9[0x1a] = uVar5;
    uVar7 = _UNK_00112288;
    uVar6 = _DAT_00112280;
    uVar1 = _DAT_00111fe0;
    puVar9[0x21] = _UNK_00111fe8;
    puVar9[0x20] = uVar1;
    puVar9[0x23] = uVar3;
    puVar9[0x22] = uVar2;
    uVar2 = _UNK_00112158;
    uVar1 = _DAT_00112150;
    uVar5 = _UNK_001120f8;
    uVar4 = _DAT_001120f0;
    puVar9[0x1d] = uVar7;
    puVar9[0x1c] = uVar6;
    puVar9[0x1f] = uVar2;
    puVar9[0x1e] = uVar1;
    uVar3 = _UNK_00112098;
    uVar2 = _DAT_00112090;
    uVar1 = _DAT_00111fd0;
    puVar9[0x25] = _UNK_00111fd8;
    puVar9[0x24] = uVar1;
    puVar9[0x27] = uVar5;
    puVar9[0x26] = uVar4;
    uVar5 = _UNK_00112138;
    uVar4 = _DAT_00112130;
    uVar1 = _DAT_00112070;
    puVar9[0x2d] = _UNK_00112078;
    puVar9[0x2c] = uVar1;
    puVar9[0x2f] = uVar3;
    puVar9[0x2e] = uVar2;
    uVar7 = _UNK_001121a8;
    uVar6 = _DAT_001121a0;
    uVar2 = _UNK_00112198;
    uVar1 = _DAT_00112190;
    puVar9[0x29] = uVar5;
    puVar9[0x28] = uVar4;
    puVar9[0x2b] = uVar2;
    puVar9[0x2a] = uVar1;
    uVar3 = _UNK_00112038;
    uVar2 = _DAT_00112030;
    uVar1 = _DAT_00111fc0;
    puVar9[0x31] = _UNK_00111fc8;
    puVar9[0x30] = uVar1;
    puVar9[0x33] = uVar7;
    puVar9[0x32] = uVar6;
    uVar1 = _DAT_00112180;
    uVar5 = _UNK_001120a8;
    uVar4 = _DAT_001120a0;
    puVar9[0x39] = _UNK_00112188;
    puVar9[0x38] = uVar1;
    puVar9[0x3b] = uVar3;
    puVar9[0x3a] = uVar2;
    uVar7 = _UNK_00112298;
    uVar6 = _DAT_00112290;
    uVar2 = _UNK_00112008;
    uVar1 = _DAT_00112000;
    puVar9[0x35] = uVar5;
    puVar9[0x34] = uVar4;
    puVar9[0x37] = uVar2;
    puVar9[0x36] = uVar1;
    uVar3 = _DAT_001120c0;
    uVar2 = _UNK_00111ff8;
    uVar1 = _DAT_00111ff0;
    puVar9[0x3d] = _UNK_001120c8;
    puVar9[0x3c] = uVar3;
    puVar9[0x3f] = uVar7;
    puVar9[0x3e] = uVar6;
    uVar6 = _UNK_001121f8;
    uVar5 = _DAT_001121f0;
    uVar3 = _DAT_001121b0;
    puVar9[0x45] = _UNK_001121b8;
    puVar9[0x44] = uVar3;
    puVar9[0x47] = uVar2;
    puVar9[0x46] = uVar1;
    uVar4 = _UNK_00112148;
    uVar3 = _DAT_00112140;
    uVar2 = _UNK_00111fa8;
    uVar1 = _DAT_00111fa0;
    puVar9[0x41] = uVar6;
    puVar9[0x40] = uVar5;
    puVar9[0x43] = uVar4;
    puVar9[0x42] = uVar3;
    uVar5 = _UNK_001121c8;
    uVar4 = _DAT_001121c0;
    uVar3 = _DAT_001120d0;
    puVar9[0x49] = _UNK_001120d8;
    puVar9[0x48] = uVar3;
    puVar9[0x4b] = uVar2;
    puVar9[0x4a] = uVar1;
    uVar7 = _UNK_00112228;
    uVar6 = _DAT_00112220;
    uVar1 = _DAT_00112200;
    puVar9[0x51] = _UNK_00112208;
    puVar9[0x50] = uVar1;
    puVar9[0x53] = uVar5;
    puVar9[0x52] = uVar4;
    uVar4 = _UNK_001120b8;
    uVar3 = _DAT_001120b0;
    uVar2 = _UNK_00112088;
    uVar1 = _DAT_00112080;
    puVar9[0x4d] = uVar7;
    puVar9[0x4c] = uVar6;
    puVar9[0x4f] = uVar2;
    puVar9[0x4e] = uVar1;
    uVar6 = _UNK_001121d8;
    uVar5 = _DAT_001121d0;
    uVar1 = _DAT_00112100;
    puVar9[0x55] = _UNK_00112108;
    puVar9[0x54] = uVar1;
    puVar9[0x57] = uVar4;
    puVar9[0x56] = uVar3;
    uVar3 = _DAT_00112250;
    uVar2 = _UNK_00111fb8;
    uVar1 = _DAT_00111fb0;
    puVar9[0x5d] = _UNK_00112258;
    puVar9[0x5c] = uVar3;
    puVar9[0x5f] = uVar6;
    puVar9[0x5e] = uVar5;
    uVar4 = _UNK_00112168;
    uVar3 = _DAT_00112160;
    puVar9[0x59] = uVar2;
    puVar9[0x58] = uVar1;
    puVar9[0x5b] = uVar4;
    puVar9[0x5a] = uVar3;
  }
  return;
}


// ===== 001235ec  FUN_001235ec =====

void FUN_001235ec(undefined8 *param_1,ulong param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined1 *__s;
  undefined1 *__s_00;
  undefined1 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  __s = (undefined1 *)param_1[1];
  if (param_2 <= (ulong)(param_1[2] - (long)__s)) {
    puVar10 = __s;
    if (param_2 != 0) {
      puVar10 = __s + param_2;
      memset(__s,0,param_2);
    }
    param_1[1] = puVar10;
    return;
  }
  puVar10 = (undefined1 *)*param_1;
  uVar11 = (long)__s - (long)puVar10;
  uVar7 = uVar11 + param_2;
  if ((long)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_001237c8(param_1);
  }
  uVar4 = param_1[2] - (long)puVar10;
  uVar8 = uVar4 * 2;
  if (uVar8 < uVar7 || uVar8 - uVar7 == 0) {
    uVar8 = uVar7;
  }
  if (0x3ffffffffffffffe < uVar4) {
    uVar8 = 0x7fffffffffffffff;
  }
  if (uVar8 == 0) {
    puVar3 = (undefined1 *)0x0;
  }
  else {
    puVar3 = (undefined1 *)operator_new(uVar8);
  }
  __s_00 = puVar3 + uVar11;
  puVar1 = __s_00 + param_2;
  memset(__s_00,0,param_2);
  if (__s == puVar10) goto LAB_00123778;
  if ((uVar11 < 8) || ((ulong)((long)puVar10 - (long)puVar3) < 0x20)) {
LAB_00123764:
    do {
      __s_00 = __s_00 + -1;
      __s = __s + -1;
      *__s_00 = *__s;
    } while (__s != puVar10);
  }
  else if (uVar11 < 0x20) {
    uVar4 = 0;
LAB_0012371c:
    uVar7 = uVar11 & 0xfffffffffffffff8;
    puVar9 = (undefined8 *)(__s + (-8 - uVar4));
    __s = __s + -uVar7;
    __s_00 = __s_00 + -uVar7;
    lVar5 = uVar4 - uVar7;
    puVar6 = (undefined8 *)(puVar3 + ((long)puVar9 - (long)puVar10));
    do {
      lVar5 = lVar5 + 8;
      *puVar6 = *puVar9;
      puVar9 = puVar9 + -1;
      puVar6 = puVar6 + -1;
    } while (lVar5 != 0);
    if (uVar11 != uVar7) goto LAB_00123764;
  }
  else {
    puVar6 = (undefined8 *)(__s + -0x10);
    uVar4 = uVar11 & 0xffffffffffffffe0;
    puVar9 = (undefined8 *)(puVar3 + ((long)puVar6 - (long)puVar10));
    uVar7 = uVar4;
    do {
      puVar2 = puVar6 + -1;
      uVar14 = puVar6[-2];
      uVar13 = puVar6[1];
      uVar12 = *puVar6;
      uVar7 = uVar7 - 0x20;
      puVar6 = puVar6 + -4;
      puVar9[-1] = *puVar2;
      puVar9[-2] = uVar14;
      puVar9[1] = uVar13;
      *puVar9 = uVar12;
      puVar9 = puVar9 + -4;
    } while (uVar7 != 0);
    if (uVar11 != uVar4) {
      if ((uVar11 & 0x18) == 0) {
        __s_00 = __s_00 + -uVar4;
        __s = __s + -uVar4;
        goto LAB_00123764;
      }
      goto LAB_0012371c;
    }
  }
  __s = (undefined1 *)*param_1;
  __s_00 = puVar3;
LAB_00123778:
  *param_1 = __s_00;
  param_1[1] = puVar1;
  param_1[2] = puVar3 + uVar8;
  if (__s == (undefined1 *)0x0) {
    return;
  }
  operator_delete(__s);
  return;
}


// ===== 001237c8  FUN_001237c8 =====

void FUN_001237c8(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001237dc("vector");
                    /* WARNING: Subroutine does not return */
  FUN_0012679c("length_error was thrown in -fno-exceptions mode with message \"%s\"",uVar1);
}


// ===== 001237dc  FUN_001237dc =====

void FUN_001237dc(undefined8 param_1)

{
                    /* WARNING: Subroutine does not return */
  FUN_0012679c("length_error was thrown in -fno-exceptions mode with message \"%s\"",param_1);
}


// ===== 001237f4  FUN_001237f4 =====

void FUN_001237f4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_0012679c("bad_array_new_length was thrown in -fno-exceptions mode");
}


// ===== 00123808  FUN_00123808 =====

void FUN_00123808(undefined8 *param_1)

{
  void *pvVar1;
  long lVar2;
  long *plVar3;
  
  *param_1 = &PTR_FUN_0014ce88;
  pthread_rwlock_destroy((pthread_rwlock_t *)(param_1 + 0x11));
  FUN_00126878(param_1 + 0xc);
  pvVar1 = (void *)param_1[9];
  if (pvVar1 != (void *)0x0) {
    param_1[10] = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[6];
  if (pvVar1 != (void *)0x0) {
    param_1[7] = pvVar1;
    operator_delete(pvVar1);
  }
  plVar3 = (long *)param_1[5];
  if ((plVar3 != (long *)0x0) && (lVar2 = FUN_00144550(0xffffffffffffffff,plVar3 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_00126724(plVar3);
  }
  lVar2 = param_1[2];
  param_1[2] = 0;
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00123898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)param_1[3])();
    return;
  }
  return;
}


// ===== 001238a8  FUN_001238a8 =====

void FUN_001238a8(void *param_1)

{
  FUN_00123808();
  operator_delete(param_1);
  return;
}


// ===== 001238cc  FUN_001238cc =====

void FUN_001238cc(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[1];
  *param_1 = &PTR_FUN_0014cea8;
  if (pvVar1 != (void *)0x0) {
    param_1[2] = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


// ===== 001238f0  FUN_001238f0 =====

void FUN_001238f0(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[1];
  *param_1 = &PTR_FUN_0014cea8;
  if (pvVar1 != (void *)0x0) {
    param_1[2] = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}


// ===== 00123930  FUN_00123930 =====

ulong FUN_00123930(long param_1,void *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong __n;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  uVar3 = *(ulong *)(param_1 + 0x28);
  uVar1 = uVar3;
  if (uVar2 + param_3 <= uVar3 && !CARRY8(uVar2,param_3)) {
    uVar1 = uVar2 + param_3;
  }
  __n = uVar1 - uVar2;
  if (uVar3 - uVar2 < __n) {
    __n = 0;
  }
  else {
    memcpy(param_2,(void *)(*(long *)(param_1 + 8) + uVar2),__n);
    *(ulong *)(param_1 + 0x20) = uVar1;
  }
  return __n;
}


// ===== 001239a8  FUN_001239a8 =====

undefined8 FUN_001239a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}


// ===== 001239b0  FUN_001239b0 =====

undefined8 FUN_001239b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}


// ===== 001239b8  FUN_001239b8 =====

bool FUN_001239b8(long param_1,ulong param_2)

{
  if (param_2 < *(ulong *)(param_1 + 0x28)) {
    *(ulong *)(param_1 + 0x20) = param_2;
  }
  return param_2 < *(ulong *)(param_1 + 0x28);
}


// ===== 001239d4  FUN_001239d4 =====

int FUN_001239d4(undefined8 *param_1)

{
  int iVar1;
  
  *param_1 = &PTR_FUN_0014cee8;
  iVar1 = fclose((FILE *)param_1[1]);
  return iVar1;
}


// ===== 001239ec  FUN_001239ec =====

void FUN_001239ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0014cee8;
  fclose((FILE *)param_1[1]);
  operator_delete(param_1);
  return;
}


// ===== 00123a20  FUN_00123a20 =====

void FUN_00123a20(long param_1,void *param_2,size_t param_3)

{
  fread(param_2,1,param_3,*(FILE **)(param_1 + 8));
  return;
}


// ===== 00123a30  FUN_00123a30 =====

undefined8 FUN_00123a30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


// ===== 00123a38  FUN_00123a38 =====

ulong FUN_00123a38(long param_1)

{
  ulong uVar1;
  
  uVar1 = ftell(*(FILE **)(param_1 + 8));
  return uVar1 & ((long)uVar1 >> 0x3f ^ 0xffffffffffffffffU);
}


// ===== 00123a54  FUN_00123a54 =====

bool FUN_00123a54(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = fseek(*(FILE **)(param_1 + 8),param_2,0);
  return iVar1 == 0;
}


// ===== 00123a78  FUN_00123a78 =====

void FUN_00123a78(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_001237dc("vector");
  FUN_0012671c();
  operator_delete(pvVar1);
  return;
}


// ===== 00123a8c  FUN_00123a8c =====

void FUN_00123a8c(void *param_1)

{
  FUN_0012671c();
  operator_delete(param_1);
  return;
}


// ===== 00123ab0  FUN_00123ab0 =====

void FUN_00123ab0(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00123ac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}


// ===== 00123ac8  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00150f00)();
  return;
}


// ===== 00123acc  FUN_00123acc =====

void FUN_00123acc(undefined8 *param_1,void *param_2,long param_3,ulong param_4)

{
  void *__src;
  ulong uVar1;
  long lVar2;
  size_t sVar3;
  ulong uVar4;
  void *pvVar5;
  
  uVar4 = param_1[2];
  pvVar5 = (void *)*param_1;
  if (param_4 <= (ulong)((long)(uVar4 - (long)pvVar5) >> 2)) {
    sVar3 = (long)param_1[1] - (long)pvVar5;
    if ((ulong)((long)sVar3 >> 2) < param_4) {
      __src = (void *)((long)param_2 + sVar3);
      if ((void *)param_1[1] != pvVar5) {
        memmove(pvVar5,param_2,sVar3);
        pvVar5 = (void *)param_1[1];
      }
      lVar2 = -(long)__src;
    }
    else {
      lVar2 = -(long)param_2;
      __src = param_2;
    }
    sVar3 = param_3 + lVar2;
    if (sVar3 != 0) {
      memmove(pvVar5,__src,sVar3);
    }
LAB_00123bd8:
    param_1[1] = (long)pvVar5 + sVar3;
    return;
  }
  if (pvVar5 != (void *)0x0) {
    param_1[1] = pvVar5;
    operator_delete(pvVar5);
    uVar4 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  if (param_4 >> 0x3e == 0) {
    uVar1 = (long)uVar4 >> 1;
    if ((ulong)((long)uVar4 >> 1) <= param_4) {
      uVar1 = param_4;
    }
    if (0x7ffffffffffffffb < uVar4) {
      uVar1 = 0x3fffffffffffffff;
    }
    if (uVar1 >> 0x3e == 0) {
      pvVar5 = operator_new(uVar1 * 4);
      sVar3 = param_3 - (long)param_2;
      *param_1 = pvVar5;
      param_1[1] = pvVar5;
      param_1[2] = (void *)((long)pvVar5 + uVar1 * 4);
      if (sVar3 != 0) {
        memcpy(pvVar5,param_2,sVar3);
      }
      goto LAB_00123bd8;
    }
  }
  pvVar5 = (void *)FUN_00123a78(param_1);
  FUN_0012671c();
  operator_delete(pvVar5);
  return;
}


// ===== 00123bfc  FUN_00123bfc =====

void FUN_00123bfc(void *param_1)

{
  FUN_0012671c();
  operator_delete(param_1);
  return;
}


// ===== 00123c20  FUN_00123c20 =====

void FUN_00123c20(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00123c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}


// ===== 00123c38  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00150f00)();
  return;
}


// ===== 00123c3c  FUN_00123c3c =====

void FUN_00123c3c(void *param_1)

{
  FUN_0012671c();
  operator_delete(param_1);
  return;
}


// ===== 00123c60  FUN_00123c60 =====

void FUN_00123c60(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00123c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}


// ===== 00123c78  operator.delete =====

void operator_delete(void *param_1)

{
  (*(code *)PTR_operator_delete_00150f00)();
  return;
}


// ===== 00123c7c  FUN_00123c7c =====

void FUN_00123c7c(long *param_1,char *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined1 *local_460;
  undefined1 *puStack_458;
  undefined8 *puStack_450;
  undefined8 uStack_448;
  char acStack_438 [1024];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  puStack_458 = &stack0xfffffffffffffb80;
  puStack_450 = &local_4b0;
  uStack_448 = 0xffffff80ffffffd0;
  local_4b0 = param_3;
  uStack_4a8 = param_4;
  local_4a0 = param_5;
  uStack_498 = param_6;
  local_490 = param_7;
  uStack_488 = param_8;
  local_460 = (undefined1 *)register0x00000008;
  vsnprintf(acStack_438,0x400,param_2,&local_460);
  uVar2 = (**(code **)(*param_1 + 0x30))(param_1,"java/lang/IllegalArgumentException");
  (**(code **)(*param_1 + 0x70))(param_1,uVar2,acStack_438);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00123d58  FUN_00123d58 =====

void FUN_00123d58(long *param_1,char *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined1 *local_460;
  undefined1 *puStack_458;
  undefined8 *puStack_450;
  undefined8 uStack_448;
  char acStack_438 [1024];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  puStack_458 = &stack0xfffffffffffffb80;
  puStack_450 = &local_4b0;
  uStack_448 = 0xffffff80ffffffd0;
  local_4b0 = param_3;
  uStack_4a8 = param_4;
  local_4a0 = param_5;
  uStack_498 = param_6;
  local_490 = param_7;
  uStack_488 = param_8;
  local_460 = (undefined1 *)register0x00000008;
  vsnprintf(acStack_438,0x400,param_2,&local_460);
  uVar2 = (**(code **)(*param_1 + 0x30))(param_1,"java/lang/IllegalStateException");
  (**(code **)(*param_1 + 0x70))(param_1,uVar2,acStack_438);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00123e34  FUN_00123e34 =====

void FUN_00123e34(long *param_1)

{
  long lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x30))();
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00123e6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xa8))(param_1,lVar1);
    return;
  }
  return;
}


// ===== 00123e7c  FUN_00123e7c =====

void FUN_00123e7c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00123e84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2f0))();
  return;
}


// ===== 00123e88  FUN_00123e88 =====

void FUN_00123e88(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00123e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x108))();
  return;
}


// ===== 00123e94  DGifOpenFileName =====

undefined8 DGifOpenFileName(undefined8 param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = __open_2(param_1,0);
  if ((int)uVar1 != -1) {
    uVar1 = DGifOpenFileHandle(uVar1,param_2);
    return uVar1;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0x65;
  }
  return 0;
}


// ===== 00123ee0  DGifOpenFileHandle =====

void * DGifOpenFileHandle(int param_1,undefined4 *param_2)

{
  long lVar1;
  int iVar2;
  void *__ptr;
  undefined4 *__ptr_00;
  FILE *__stream;
  size_t sVar3;
  undefined4 uVar4;
  short local_4f;
  char local_4d;
  char local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __ptr = calloc(1,0x78);
  if (__ptr == (void *)0x0) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = 0x6d;
    }
    close(param_1);
  }
  else {
    __ptr_00 = (undefined4 *)calloc(1,0x6168);
    if (__ptr_00 == (undefined4 *)0x0) {
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = 0x6d;
      }
      close(param_1);
    }
    else {
      __stream = fdopen(param_1,"rb");
      *(FILE **)(__ptr_00 + 0x10) = __stream;
      *__ptr_00 = 8;
      __ptr_00[1] = param_1;
      *(undefined8 *)((long)__ptr + 0x68) = 0;
      *(undefined4 **)((long)__ptr + 0x70) = __ptr_00;
      sVar3 = fread(&local_4f,1,6,__stream);
      if ((int)sVar3 == 6) {
        if (local_4f == 0x4947 && local_4d == 'F') {
          iVar2 = DGifGetScreenDesc(__ptr);
          if (iVar2 != 0) {
            *(undefined4 *)((long)__ptr + 0x60) = 0;
            *(bool *)(__ptr_00 + 0x1858) = local_4c == '9';
            goto LAB_00123ff4;
          }
        }
        else if (param_2 != (undefined4 *)0x0) {
          uVar4 = 0x67;
          goto LAB_00123fd4;
        }
      }
      else if (param_2 != (undefined4 *)0x0) {
        uVar4 = 0x66;
LAB_00123fd4:
        *param_2 = uVar4;
      }
      fclose(__stream);
      free(__ptr_00);
    }
    free(__ptr);
  }
  __ptr = (void *)0x0;
LAB_00123ff4:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return __ptr;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012404c  DGifGetScreenDesc =====

void DGifGetScreenDesc(uint *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  size_t sVar5;
  code *pcVar6;
  byte *pbVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  byte local_44;
  byte local_43;
  byte local_42;
  ushort local_40 [2];
  ushort local_3c [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pbVar7 = *(byte **)(param_1 + 0x1c);
  if ((*pbVar7 >> 3 & 1) == 0) {
    uVar8 = 0x6f;
  }
  else {
    if (*(code **)(pbVar7 + 0x48) == (code *)0x0) {
      sVar5 = fread(local_40,1,2,*(FILE **)(pbVar7 + 0x40));
      iVar2 = (int)sVar5;
    }
    else {
      iVar2 = (**(code **)(pbVar7 + 0x48))(param_1,local_40,2);
    }
    if (iVar2 == 2) {
      pcVar6 = *(code **)(*(long *)(param_1 + 0x1c) + 0x48);
      *param_1 = (uint)local_40[0];
      if (pcVar6 == (code *)0x0) {
        sVar5 = fread(local_3c,1,2,*(FILE **)(*(long *)(param_1 + 0x1c) + 0x40));
        iVar2 = (int)sVar5;
      }
      else {
        iVar2 = (*pcVar6)(param_1,local_3c,2);
      }
      if (iVar2 == 2) {
        pcVar6 = *(code **)(*(long *)(param_1 + 0x1c) + 0x48);
        param_1[1] = (uint)local_3c[0];
        if (pcVar6 == (code *)0x0) {
          sVar5 = fread(&local_44,1,3,*(FILE **)(*(long *)(param_1 + 0x1c) + 0x40));
          iVar2 = (int)sVar5;
        }
        else {
          iVar2 = (*pcVar6)(param_1,&local_44,3);
        }
        if (iVar2 != 3) {
          param_1[0x18] = 0x66;
          GifFreeMapObject(*(undefined8 *)(param_1 + 6));
          uVar3 = 0;
          param_1[6] = 0;
          param_1[7] = 0;
          goto LAB_00124174;
        }
        *(byte *)(param_1 + 4) = local_42;
        param_1[2] = ((uint)(int)(char)local_44 >> 4 & 7) + 1;
        param_1[3] = (uint)local_43;
        if ((char)local_44 < 0) {
          uVar8 = (uint)(char)local_44;
          piVar4 = (int *)GifMakeMapObject(1 << (ulong)((local_44 & 7) + 1),0);
          *(int **)(param_1 + 6) = piVar4;
          if (piVar4 == (int *)0x0) {
            uVar8 = 0x6d;
            goto LAB_00124170;
          }
          *(byte *)(piVar4 + 2) = (byte)(uVar8 >> 3) & 1;
          if (0 < *piVar4) {
            lVar9 = 0;
            lVar10 = 0;
            do {
              pcVar6 = *(code **)(*(long *)(param_1 + 0x1c) + 0x48);
              if (pcVar6 == (code *)0x0) {
                sVar5 = fread(&local_44,1,3,*(FILE **)(*(long *)(param_1 + 0x1c) + 0x40));
                iVar2 = (int)sVar5;
              }
              else {
                iVar2 = (*pcVar6)(param_1,&local_44,3);
              }
              if (iVar2 != 3) {
                GifFreeMapObject(*(undefined8 *)(param_1 + 6));
                param_1[6] = 0;
                param_1[7] = 0;
                goto LAB_0012416c;
              }
              lVar10 = lVar10 + 1;
              uVar3 = 1;
              iVar2 = **(int **)(param_1 + 6);
              pbVar7 = (byte *)(*(long *)(*(int **)(param_1 + 6) + 4) + lVar9);
              lVar9 = lVar9 + 3;
              *pbVar7 = local_44;
              pbVar7[1] = local_43;
              pbVar7[2] = local_42;
            } while (lVar10 < iVar2);
            goto LAB_00124174;
          }
        }
        else {
          param_1[6] = 0;
          param_1[7] = 0;
        }
        uVar3 = 1;
        goto LAB_00124174;
      }
    }
LAB_0012416c:
    uVar8 = 0x66;
  }
LAB_00124170:
  uVar3 = 0;
  param_1[0x18] = uVar8;
LAB_00124174:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 001242b0  DGifOpen =====

void * DGifOpen(undefined8 param_1,code *param_2,undefined4 *param_3)

{
  long lVar1;
  int iVar2;
  void *__ptr;
  undefined4 *__ptr_00;
  size_t sVar3;
  undefined4 uVar4;
  short local_4f;
  char local_4d;
  char local_4c;
  undefined1 local_49;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __ptr = calloc(1,0x78);
  if (__ptr == (void *)0x0) {
    __ptr = (void *)0x0;
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0x6d;
    }
    goto LAB_001243c0;
  }
  __ptr_00 = (undefined4 *)calloc(1,0x6168);
  if (__ptr_00 == (undefined4 *)0x0) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0x6d;
    }
  }
  else {
    *(code **)(__ptr_00 + 0x12) = param_2;
    *__ptr_00 = 8;
    *(undefined8 *)((long)__ptr + 0x68) = param_1;
    *(undefined4 **)((long)__ptr + 0x70) = __ptr_00;
    if (param_2 == (code *)0x0) {
      sVar3 = fread(&local_4f,1,6,(FILE *)0x0);
      if ((int)sVar3 != 6) goto LAB_001243a0;
LAB_00124334:
      local_49 = 0;
      if (local_4f == 0x4947 && local_4d == 'F') {
        iVar2 = DGifGetScreenDesc(__ptr);
        if (iVar2 == 0) {
          free(__ptr_00);
          free(__ptr);
          __ptr = (void *)0x0;
          if (param_3 != (undefined4 *)0x0) {
            *param_3 = 0x68;
          }
        }
        else {
          *(undefined4 *)((long)__ptr + 0x60) = 0;
          *(bool *)(__ptr_00 + 0x1858) = local_4c == '9';
        }
        goto LAB_001243c0;
      }
      if (param_3 != (undefined4 *)0x0) {
        uVar4 = 0x67;
LAB_001243a8:
        *param_3 = uVar4;
      }
    }
    else {
      iVar2 = (*param_2)(__ptr,&local_4f,6);
      if (iVar2 == 6) goto LAB_00124334;
LAB_001243a0:
      if (param_3 != (undefined4 *)0x0) {
        uVar4 = 0x66;
        goto LAB_001243a8;
      }
    }
    free(__ptr_00);
  }
  free(__ptr);
  __ptr = (void *)0x0;
LAB_001243c0:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return __ptr;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0012443c  DGifGetGifVersion =====

char * DGifGetGifVersion(long param_1)

{
  char *pcVar1;
  
  pcVar1 = "GIF87a";
  if (*(char *)(*(long *)(param_1 + 0x70) + 0x6160) != '\0') {
    pcVar1 = "GIF89a";
  }
  return pcVar1;
}


// ===== 00124464  DGifGetRecordType =====

void DGifGetRecordType(long param_1,undefined4 *param_2)

{
  long lVar1;
  int iVar2;
  size_t sVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  byte *pbVar6;
  char local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pbVar6 = *(byte **)(param_1 + 0x70);
  if ((*pbVar6 >> 3 & 1) == 0) {
    uVar5 = 0x6f;
  }
  else {
    if (*(code **)(pbVar6 + 0x48) == (code *)0x0) {
      sVar3 = fread(local_3c,1,1,*(FILE **)(pbVar6 + 0x40));
      iVar2 = (int)sVar3;
    }
    else {
      iVar2 = (**(code **)(pbVar6 + 0x48))(param_1,local_3c,1);
    }
    if (iVar2 == 1) {
      if (local_3c[0] == '!') {
        uVar5 = 3;
      }
      else if (local_3c[0] == ';') {
        uVar5 = 4;
      }
      else {
        if (local_3c[0] != ',') {
          uVar5 = 0x6b;
          *param_2 = 0;
          goto LAB_0012450c;
        }
        uVar5 = 2;
      }
      *param_2 = uVar5;
      uVar4 = 1;
      goto LAB_00124510;
    }
    uVar5 = 0x66;
  }
LAB_0012450c:
  uVar4 = 0;
  *(undefined4 *)(param_1 + 0x60) = uVar5;
LAB_00124510:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}


// ===== 00124560  DGifGetImageHeader =====

void DGifGetImageHeader(long param_1)

{
  undefined1 *puVar1;
  long lVar2;
  byte bVar3;
  int iVar4;
  int *piVar5;
  size_t sVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined4 uVar9;
  code *pcVar10;
  uint *puVar11;
  undefined8 *puVar12;
  long lVar13;
  byte *pbVar14;
  long lVar15;
  ulong uVar16;
  byte local_50 [4];
  undefined2 local_4c;
  undefined1 local_4a;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  pbVar14 = *(byte **)(param_1 + 0x70);
  if ((*pbVar14 >> 3 & 1) == 0) {
    uVar9 = 0x6f;
  }
  else {
    if (*(code **)(pbVar14 + 0x48) == (code *)0x0) {
      sVar6 = fread(&local_4c,1,2,*(FILE **)(pbVar14 + 0x40));
      iVar4 = (int)sVar6;
    }
    else {
      iVar4 = (**(code **)(pbVar14 + 0x48))(param_1,&local_4c,2);
    }
    if (iVar4 == 2) {
      *(uint *)(param_1 + 0x28) = (uint)local_4c;
      pcVar10 = *(code **)(*(long *)(param_1 + 0x70) + 0x48);
      if (pcVar10 == (code *)0x0) {
        sVar6 = fread(&local_4c,1,2,*(FILE **)(*(long *)(param_1 + 0x70) + 0x40));
        iVar4 = (int)sVar6;
      }
      else {
        iVar4 = (*pcVar10)(param_1,&local_4c,2);
      }
      if (iVar4 == 2) {
        *(uint *)(param_1 + 0x2c) = (uint)local_4c;
        pcVar10 = *(code **)(*(long *)(param_1 + 0x70) + 0x48);
        if (pcVar10 == (code *)0x0) {
          sVar6 = fread(&local_4c,1,2,*(FILE **)(*(long *)(param_1 + 0x70) + 0x40));
          iVar4 = (int)sVar6;
        }
        else {
          iVar4 = (*pcVar10)(param_1,&local_4c,2);
        }
        if (iVar4 == 2) {
          *(uint *)(param_1 + 0x30) = (uint)local_4c;
          pcVar10 = *(code **)(*(long *)(param_1 + 0x70) + 0x48);
          if (pcVar10 == (code *)0x0) {
            sVar6 = fread(&local_4c,1,2,*(FILE **)(*(long *)(param_1 + 0x70) + 0x40));
            iVar4 = (int)sVar6;
          }
          else {
            iVar4 = (*pcVar10)(param_1,&local_4c,2);
          }
          if (iVar4 == 2) {
            *(uint *)(param_1 + 0x34) = (uint)local_4c;
            pcVar10 = *(code **)(*(long *)(param_1 + 0x70) + 0x48);
            if (pcVar10 == (code *)0x0) {
              sVar6 = fread(&local_4c,1,1,*(FILE **)(*(long *)(param_1 + 0x70) + 0x40));
              iVar4 = (int)sVar6;
            }
            else {
              iVar4 = (*pcVar10)(param_1,&local_4c,1);
            }
            if (iVar4 != 1) {
              *(undefined4 *)(param_1 + 0x60) = 0x66;
              GifFreeMapObject(*(undefined8 *)(param_1 + 0x40));
              uVar7 = 0;
              *(undefined8 *)(param_1 + 0x40) = 0;
              goto LAB_00124854;
            }
            bVar3 = (byte)local_4c;
            *(byte *)(param_1 + 0x38) = (byte)local_4c >> 6 & 1;
            if (*(long *)(param_1 + 0x40) != 0) {
              GifFreeMapObject();
              *(undefined8 *)(param_1 + 0x40) = 0;
            }
            if ((char)(byte)local_4c < '\0') {
              piVar5 = (int *)GifMakeMapObject(1 << (ulong)((bVar3 & 7) + 1),0);
              *(int **)(param_1 + 0x40) = piVar5;
              if (piVar5 == (int *)0x0) {
                uVar9 = 0x6d;
                goto LAB_00124850;
              }
              if (*piVar5 != 0) {
                lVar15 = 0;
                uVar16 = 0;
                do {
                  pcVar10 = *(code **)(*(long *)(param_1 + 0x70) + 0x48);
                  if (pcVar10 == (code *)0x0) {
                    sVar6 = fread(&local_4c,1,3,*(FILE **)(*(long *)(param_1 + 0x70) + 0x40));
                    iVar4 = (int)sVar6;
                  }
                  else {
                    iVar4 = (*pcVar10)(param_1,&local_4c,3);
                  }
                  if (iVar4 != 3) {
                    GifFreeMapObject(*(undefined8 *)(param_1 + 0x40));
                    uVar9 = 0x66;
                    *(undefined8 *)(param_1 + 0x40) = 0;
                    goto LAB_00124850;
                  }
                  puVar11 = *(uint **)(param_1 + 0x40);
                  uVar16 = uVar16 + 1;
                  puVar1 = (undefined1 *)(*(long *)(puVar11 + 4) + lVar15);
                  lVar15 = lVar15 + 3;
                  *puVar1 = (byte)local_4c;
                  puVar1[1] = local_4c._1_1_;
                  puVar1[2] = local_4a;
                } while (uVar16 < *puVar11);
              }
            }
            *(long *)(pbVar14 + 0x38) =
                 (long)*(int *)(param_1 + 0x38) * (long)*(int *)(param_1 + 0x30);
            lVar15 = *(long *)(param_1 + 0x70);
            if (*(code **)(lVar15 + 0x48) == (code *)0x0) {
              sVar6 = fread(local_50,1,1,*(FILE **)(lVar15 + 0x40));
              iVar4 = (int)sVar6;
            }
            else {
              iVar4 = (**(code **)(lVar15 + 0x48))(param_1,local_50,1);
            }
            uVar7 = DAT_001140c8;
            if (iVar4 < 1) {
              uVar7 = 0;
              goto LAB_00124854;
            }
            if (local_50[0] < 9) {
              iVar4 = 1 << (ulong)(local_50[0] & 0x1f);
              *(undefined1 *)(lVar15 + 0x58) = 0;
              uVar8 = (uint)local_50[0];
              *(uint *)(lVar15 + 8) = uVar8;
              *(int *)(lVar15 + 0xc) = iVar4;
              *(uint *)(lVar15 + 0x18) = uVar8 + 1;
              *(int *)(lVar15 + 0x1c) = 2 << (ulong)(uVar8 & 0x1f);
              *(undefined4 *)(lVar15 + 0x20) = 0x1002;
              puVar12 = (undefined8 *)(lVar15 + 0x2168);
              lVar13 = 0x1000;
              *(undefined8 *)(lVar15 + 0x30) = 0;
              *(undefined8 *)(lVar15 + 0x28) = 0;
              *(ulong *)(lVar15 + 0x10) =
                   CONCAT44(iVar4 + (int)((ulong)uVar7 >> 0x20),iVar4 + (int)uVar7);
              do {
                puVar12[-1] = 0x100200001002;
                puVar12[-2] = 0x100200001002;
                puVar12[1] = 0x100200001002;
                *puVar12 = 0x100200001002;
                lVar13 = lVar13 + -8;
                puVar12 = puVar12 + 4;
              } while (lVar13 != 0);
              uVar7 = 1;
              goto LAB_00124854;
            }
          }
        }
      }
    }
    uVar9 = 0x66;
  }
LAB_00124850:
  uVar7 = 0;
  *(undefined4 *)(param_1 + 0x60) = uVar9;
LAB_00124854:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}


// ===== 00124918  DGifGetImageDesc =====

void * DGifGetImageDesc(long param_1)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if ((**(byte **)(param_1 + 0x70) >> 3 & 1) == 0) {
    uVar4 = 0x6f;
    pvVar2 = (void *)0x0;
    goto LAB_001249f0;
  }
  pvVar3 = (void *)DGifGetImageHeader(param_1);
  if ((int)pvVar3 == 0) {
    return pvVar3;
  }
  if (*(long *)(param_1 + 0x48) == 0) {
    pvVar2 = malloc(0x38);
    *(void **)(param_1 + 0x48) = pvVar2;
    pvVar3 = pvVar2;
    if (pvVar2 != (void *)0x0) goto LAB_0012498c;
  }
  else {
    pvVar2 = (void *)openbsd_reallocarray
                               (*(long *)(param_1 + 0x48),(long)*(int *)(param_1 + 0x20) + 1,0x38);
    if (pvVar2 != (void *)0x0) {
      *(void **)(param_1 + 0x48) = pvVar2;
      pvVar3 = pvVar2;
LAB_0012498c:
      iVar1 = *(int *)(param_1 + 0x20);
      uVar8 = *(undefined8 *)(param_1 + 0x40);
      uVar7 = *(undefined8 *)(param_1 + 0x38);
      uVar9 = *(undefined8 *)(param_1 + 0x28);
      puVar6 = (undefined8 *)((long)pvVar3 + (long)iVar1 * 0x38);
      puVar6[1] = *(undefined8 *)(param_1 + 0x30);
      *puVar6 = uVar9;
      puVar6[3] = uVar8;
      puVar6[2] = uVar7;
      puVar5 = *(undefined4 **)(param_1 + 0x40);
      if (puVar5 == (undefined4 *)0x0) {
LAB_001249c4:
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
        *(undefined8 *)((long)pvVar3 + (long)iVar1 * 0x38 + 0x20) = 0;
        *(undefined4 *)((long)pvVar3 + (long)iVar1 * 0x38 + 0x28) = 0;
        *(undefined8 *)((long)pvVar3 + (long)iVar1 * 0x38 + 0x30) = 0;
        return (void *)0x1;
      }
      pvVar2 = (void *)GifMakeMapObject(*puVar5,*(undefined8 *)(puVar5 + 4));
      puVar6[3] = pvVar2;
      if (pvVar2 != (void *)0x0) goto LAB_001249c4;
    }
  }
  uVar4 = 0x6d;
LAB_001249f0:
  *(undefined4 *)(param_1 + 0x60) = uVar4;
  return pvVar2;
}


// ===== 00124a04  DGifGetLine =====

void DGifGetLine(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  size_t sVar5;
  undefined4 uVar6;
  long lVar7;
  code *pcVar8;
  byte *pbVar9;
  byte local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pbVar9 = *(byte **)(param_1 + 0x70);
  if ((*pbVar9 >> 3 & 1) == 0) {
    uVar6 = 0x6f;
  }
  else {
    if (param_3 == 0) {
      param_3 = *(int *)(param_1 + 0x30);
    }
    lVar7 = *(long *)(pbVar9 + 0x38);
    *(long *)(pbVar9 + 0x38) = lVar7 - param_3;
    if ((ulong)(lVar7 - param_3) < 0xffff0001) {
      uVar4 = FUN_00124b4c(param_1);
      if ((int)uVar4 == 0) goto LAB_00124a68;
      if (*(long *)(pbVar9 + 0x38) != 0) {
        uVar4 = 1;
        goto LAB_00124a68;
      }
      do {
        lVar7 = *(long *)(param_1 + 0x70);
        if (*(code **)(lVar7 + 0x48) == (code *)0x0) {
          sVar5 = fread(local_3c,1,1,*(FILE **)(lVar7 + 0x40));
          iVar3 = (int)sVar5;
        }
        else {
          iVar3 = (**(code **)(lVar7 + 0x48))(param_1,local_3c,1);
        }
        if (iVar3 != 1) break;
        if ((ulong)local_3c[0] == 0) {
          uVar4 = 1;
          *(undefined1 *)(lVar7 + 0x58) = 0;
          *(undefined8 *)(lVar7 + 0x38) = 0;
          goto LAB_00124a68;
        }
        *(byte *)(lVar7 + 0x58) = local_3c[0];
        pcVar8 = *(code **)(*(long *)(param_1 + 0x70) + 0x48);
        if (pcVar8 == (code *)0x0) {
          sVar5 = fread((void *)(lVar7 + 0x59),1,(ulong)local_3c[0],
                        *(FILE **)(*(long *)(param_1 + 0x70) + 0x40));
          uVar2 = (uint)sVar5;
        }
        else {
          uVar2 = (*pcVar8)(param_1,lVar7 + 0x59);
        }
      } while (uVar2 == local_3c[0]);
      uVar6 = 0x66;
    }
    else {
      uVar6 = 0x6c;
    }
  }
  uVar4 = 0;
  *(undefined4 *)(param_1 + 0x60) = uVar6;
LAB_00124a68:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


// ===== 00124b4c  FUN_00124b4c =====

void FUN_00124b4c(long param_1,ulong param_2,int param_3)

{
  undefined1 *puVar1;
  undefined1 (*pauVar2) [16];
  long lVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  undefined1 (*pauVar17) [16];
  undefined4 *puVar18;
  undefined1 *puVar19;
  int iVar20;
  int iVar21;
  undefined8 *puVar22;
  ulong uVar23;
  ulong uVar24;
  undefined4 uVar25;
  ulong uVar26;
  long lVar27;
  int iVar28;
  int iVar29;
  ulong uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined4 uStack_88;
  undefined4 uStack_84;
  int iStack_6c;
  long local_68;
  
  lVar11 = tpidr_el0;
  local_68 = *(long *)(lVar11 + 0x28);
  lVar27 = *(long *)(param_1 + 0x70);
  uVar16 = *(uint *)(lVar27 + 0x28);
  uVar26 = (ulong)uVar16;
  if (0xfff < (int)uVar16) {
    uVar12 = 0;
    goto LAB_0012508c;
  }
  iVar9 = *(int *)(lVar27 + 0xc);
  iVar10 = *(int *)(lVar27 + 0x10);
  iVar28 = *(int *)(lVar27 + 0x20);
  if ((uVar16 == 0) || (param_3 < 1)) {
    uVar30 = 0;
  }
  else {
    uVar26 = (ulong)(int)uVar16;
    uVar6 = uVar16 - 1;
    if (param_3 - 1U <= uVar16 - 1) {
      uVar6 = param_3 - 1U;
    }
    uVar30 = (ulong)(uVar6 + 1);
    if ((uVar6 < 0x1f) ||
       ((param_2 < uVar26 + 0x158 + lVar27 &&
        (lVar27 + ((uVar26 + 0x158) - uVar30) < param_2 + uVar30)))) {
      uVar13 = 0;
    }
    else {
      uVar13 = uVar30 & 0x7fffffe0;
      lVar14 = uVar26 + lVar27;
      puVar22 = (undefined8 *)(param_2 + 0x10);
      uVar26 = uVar26 - uVar13;
      pauVar17 = (undefined1 (*) [16])(lVar14 + 0x148);
      uVar24 = uVar13;
      do {
        pauVar2 = pauVar17 + -1;
        auVar31 = *pauVar17;
        uVar24 = uVar24 - 0x20;
        pauVar17 = pauVar17 + -2;
        auVar31 = NEON_rev64(auVar31,1);
        auVar32 = NEON_rev64(*pauVar2,1);
        auVar31 = NEON_ext(auVar31,auVar31,8,1);
        auVar32 = NEON_ext(auVar32,auVar32,8,1);
        puVar22[-1] = auVar31._8_8_;
        puVar22[-2] = auVar31._0_8_;
        puVar22[1] = auVar32._8_8_;
        *puVar22 = auVar32._0_8_;
        puVar22 = puVar22 + 4;
      } while (uVar24 != 0);
      if (uVar13 == uVar30) goto LAB_00124c24;
    }
    lVar14 = uVar30 - uVar13;
    puVar19 = (undefined1 *)(param_2 + uVar13);
    do {
      puVar1 = (undefined1 *)(lVar27 + 0x157 + uVar26);
      uVar26 = uVar26 - 1;
      lVar14 = lVar14 + -1;
      *puVar19 = *puVar1;
      puVar19 = puVar19 + 1;
    } while (lVar14 != 0);
  }
LAB_00124c24:
  uVar25 = (undefined4)uVar26;
  if ((int)uVar30 < param_3) {
    lVar14 = lVar27 + 0x158;
    lVar3 = lVar27 + 0x2158;
    lVar4 = lVar27 + 0x1155;
LAB_00124d10:
    uVar12 = FUN_00125868(param_1,&iStack_6c);
    if ((int)uVar12 != 0) {
      if (iStack_6c != iVar10) {
        if (iStack_6c != iVar9) {
          iVar29 = (int)uVar30;
          if (iVar9 <= iStack_6c) {
            uVar13 = uVar26;
            iVar21 = iStack_6c;
            if (*(int *)(lVar3 + (long)iStack_6c * 4) == 0x1002) {
              if (iStack_6c == *(int *)(lVar27 + 0x14) + -2) {
                iVar21 = iVar28;
                if (iVar9 < iVar28) {
                  iVar20 = 0x1001;
                  do {
                    iVar20 = iVar20 + -1;
                    if (iVar20 == 0) break;
                    if (0xfff < iVar21) goto LAB_00124edc;
                    iVar21 = *(int *)(lVar3 + (long)iVar21 * 4);
                  } while (iVar9 < iVar21);
                }
              }
              else if (iVar9 < iStack_6c) {
                iVar20 = 0x1001;
                do {
                  iVar20 = iVar20 + -1;
                  if (iVar20 == 0) break;
                  if (0xfff < iVar21) goto LAB_00124edc;
                  iVar21 = *(int *)(lVar3 + (long)iVar21 * 4);
                } while (iVar9 < iVar21);
              }
              goto LAB_00124ee0;
            }
            goto LAB_00124efc;
          }
          *(char *)(param_2 + (long)iVar29) = (char)iStack_6c;
          uVar30 = (ulong)(iVar29 + 1);
          goto LAB_00124d8c;
        }
        lVar15 = 0x1000;
        puVar18 = (undefined4 *)(lVar27 + 0x2168);
        do {
          *puVar18 = uStack_88;
          puVar18[1] = uStack_84;
          puVar18[-4] = 0x1002;
          puVar18[-3] = 0x1002;
          puVar18[4] = uStack_88;
          puVar18[5] = uStack_84;
          *puVar18 = 0x1002;
          puVar18[1] = 0x1002;
          lVar15 = lVar15 + -8;
          puVar18 = puVar18 + 8;
        } while (lVar15 != 0);
        uVar16 = *(int *)(lVar27 + 8) + 1;
        *(int *)(lVar27 + 0x14) = *(int *)(lVar27 + 0x10) + 1;
        *(uint *)(lVar27 + 0x18) = uVar16;
        *(int *)(lVar27 + 0x1c) = 1 << (ulong)(uVar16 & 0x1f);
        *(undefined4 *)(lVar27 + 0x20) = 0x1002;
        iVar29 = 0x1002;
        goto LAB_00124d04;
      }
      uVar12 = 0;
      *(undefined4 *)(param_1 + 0x60) = 0x71;
    }
    goto LAB_0012508c;
  }
LAB_00124c9c:
  uVar12 = 1;
  *(int *)(lVar27 + 0x20) = iVar28;
  *(undefined4 *)(lVar27 + 0x28) = uVar25;
LAB_0012508c:
  if (*(long *)(lVar11 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar12);
  }
  return;
LAB_00124edc:
  iVar21 = 0x1002;
LAB_00124ee0:
  *(char *)(lVar14 + (int)uVar26) = (char)iVar21;
  *(char *)(lVar4 + *(int *)(lVar27 + 0x14)) = (char)iVar21;
  uVar13 = (ulong)((int)uVar26 + 1);
  iVar21 = iVar28;
LAB_00124efc:
  uVar16 = (uint)uVar13;
  if ((int)uVar16 < 0xfff) {
    uVar24 = (ulong)(int)uVar16;
    lVar15 = uVar13 << 0x20;
    while( true ) {
      uVar16 = uVar16 + 1;
      if ((iVar21 <= iVar9) || (0xfff < iVar21)) break;
      lVar15 = lVar15 + 0x100000000;
      *(undefined1 *)(lVar14 + uVar24) = *(undefined1 *)(lVar27 + 0x1157 + (long)iVar21);
      uVar24 = uVar24 + 1;
      uVar13 = (ulong)((int)uVar13 + 1);
      iVar21 = *(int *)(lVar3 + (long)iVar21 * 4);
      if ((int)uVar24 == 0xfff) goto LAB_0012507c;
    }
    if (iVar21 < 0x1000) {
      *(char *)(lVar14 + (lVar15 >> 0x20)) = (char)iVar21;
      if (uVar16 == 0) {
        uVar26 = 0;
      }
      else if (iVar29 < param_3) {
        uVar30 = (ulong)iVar29;
        uVar5 = ~uVar30 + (long)param_3;
        uVar24 = uVar24 & 0xffffffff;
        uVar23 = (ulong)(int)uVar16;
        uVar7 = uVar5;
        if (uVar24 <= uVar5) {
          uVar7 = uVar24;
        }
        uVar26 = uVar23;
        if (0xe < uVar7) {
          puVar22 = (undefined8 *)(param_2 + uVar30);
          uVar8 = uVar5;
          if (uVar24 <= uVar5) {
            uVar8 = uVar24;
          }
          if (((undefined8 *)(lVar27 + 0x158 + uVar23) <= puVar22) ||
             (param_2 + 1 + uVar30 + uVar8 <= lVar27 + 0x157 + (uVar23 - uVar8))) {
            uVar24 = uVar7 + 1 & 0x1fffffff0;
            iVar29 = 0;
            if ((uVar13 & 0xffffffff) <= uVar5) {
              uVar5 = uVar13 & 0xffffffff;
            }
            uVar26 = uVar23 - uVar24;
            uVar30 = uVar24 + uVar30;
            uVar13 = uVar5 + 1 & 0x1fffffff0;
            pauVar17 = (undefined1 (*) [16])(lVar27 + 0x148 + uVar23);
            do {
              uVar13 = uVar13 - 0x10;
              iVar29 = iVar29 + 0x10;
              auVar31 = NEON_rev64(*pauVar17,1);
              auVar31 = NEON_ext(auVar31,auVar31,8,1);
              puVar22[1] = auVar31._8_8_;
              *puVar22 = auVar31._0_8_;
              pauVar17 = pauVar17 + -1;
              puVar22 = puVar22 + 2;
            } while (uVar13 != 0);
            if (uVar7 + 1 == uVar24) {
              uVar26 = (ulong)(uVar16 - iVar29);
              goto LAB_00124d8c;
            }
          }
        }
        puVar19 = (undefined1 *)(lVar27 + 0x157 + uVar26);
        do {
          uVar16 = (int)uVar26 - 1;
          uVar26 = (ulong)uVar16;
          *(undefined1 *)(param_2 + uVar30) = *puVar19;
          uVar30 = uVar30 + 1;
          if (uVar16 == 0) break;
          puVar19 = puVar19 + -1;
        } while ((long)uVar30 < (long)param_3);
      }
      else {
        uVar26 = (ulong)uVar16;
      }
LAB_00124d8c:
      iVar29 = iStack_6c;
      if (((iVar28 != 0x1002) && (iVar21 = *(int *)(lVar27 + 0x14), iVar21 < 0x1002)) &&
         (*(int *)(lVar27 + 0x2150 + (long)iVar21 * 4) == 0x1002)) {
        *(int *)(lVar27 + 0x2150 + (long)iVar21 * 4) = iVar28;
        iVar21 = *(int *)(lVar27 + 0x14);
        if (iStack_6c == iVar21 + -2) {
          if (iVar9 < iVar28) {
            iVar20 = 0x1001;
            do {
              iVar20 = iVar20 + -1;
              if (iVar20 == 0) break;
              if (0xfff < iVar28) {
                iVar28 = 0x1002;
                break;
              }
              iVar28 = *(int *)(lVar3 + (long)iVar28 * 4);
            } while (iVar9 < iVar28);
          }
          *(char *)(lVar4 + iVar21) = (char)iVar28;
        }
        else {
          iVar28 = iStack_6c;
          if (iVar9 < iStack_6c) {
            iVar20 = 0x1001;
            do {
              iVar20 = iVar20 + -1;
              if (iVar20 == 0) break;
              if (0xfff < iVar28) {
                iVar28 = 0x1002;
                break;
              }
              iVar28 = *(int *)(lVar3 + (long)iVar28 * 4);
            } while (iVar9 < iVar28);
          }
          *(char *)(lVar4 + iVar21) = (char)iVar28;
        }
      }
LAB_00124d04:
      iVar28 = iVar29;
      uVar25 = (undefined4)uVar26;
      if (param_3 <= (int)uVar30) goto LAB_00124c9c;
      goto LAB_00124d10;
    }
  }
LAB_0012507c:
  uVar12 = 0;
  *(undefined4 *)(param_1 + 0x60) = 0x70;
  goto LAB_0012508c;
}


// ===== 001250d0  DGifGetCodeNext =====

void DGifGetCodeNext(long param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  size_t sVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  byte local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar7 = *(long *)(param_1 + 0x70);
  if (*(code **)(lVar7 + 0x48) == (code *)0x0) {
    sVar4 = fread(local_3c,1,1,*(FILE **)(lVar7 + 0x40));
    iVar2 = (int)sVar4;
  }
  else {
    iVar2 = (**(code **)(lVar7 + 0x48))(param_1,local_3c,1);
  }
  if (iVar2 == 1) {
    if ((ulong)local_3c[0] == 0) {
      uVar5 = 1;
      *param_2 = 0;
      *(undefined1 *)(lVar7 + 0x58) = 0;
      *(undefined8 *)(lVar7 + 0x38) = 0;
      goto LAB_001251b4;
    }
    *param_2 = lVar7 + 0x58;
    *(byte *)(lVar7 + 0x58) = local_3c[0];
    pcVar6 = *(code **)(*(long *)(param_1 + 0x70) + 0x48);
    if (pcVar6 == (code *)0x0) {
      sVar4 = fread((void *)(*param_2 + 1),1,(ulong)local_3c[0],
                    *(FILE **)(*(long *)(param_1 + 0x70) + 0x40));
      uVar3 = (uint)sVar4;
    }
    else {
      uVar3 = (*pcVar6)(param_1,*param_2 + 1);
    }
    if (uVar3 == local_3c[0]) {
      uVar5 = 1;
      goto LAB_001251b4;
    }
  }
  uVar5 = 0;
  *(undefined4 *)(param_1 + 0x60) = 0x66;
LAB_001251b4:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


// ===== 001251dc  DGifGetPixel =====

void DGifGetPixel(long param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  size_t sVar5;
  undefined4 uVar6;
  long lVar7;
  code *pcVar8;
  byte *pbVar9;
  undefined1 uStack_3d;
  byte local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pbVar9 = *(byte **)(param_1 + 0x70);
  if ((*pbVar9 >> 3 & 1) == 0) {
    uVar6 = 0x6f;
  }
  else {
    lVar7 = *(long *)(pbVar9 + 0x38);
    *(ulong *)(pbVar9 + 0x38) = lVar7 - 1U;
    if (lVar7 - 1U < 0xffff0001) {
      uVar4 = FUN_00124b4c(param_1,&uStack_3d,1);
      if ((int)uVar4 == 0) goto LAB_00125238;
      if (*(long *)(pbVar9 + 0x38) != 0) {
        uVar4 = 1;
        goto LAB_00125238;
      }
      do {
        lVar7 = *(long *)(param_1 + 0x70);
        if (*(code **)(lVar7 + 0x48) == (code *)0x0) {
          sVar5 = fread(local_3c,1,1,*(FILE **)(lVar7 + 0x40));
          iVar3 = (int)sVar5;
        }
        else {
          iVar3 = (**(code **)(lVar7 + 0x48))(param_1,local_3c,1);
        }
        if (iVar3 != 1) break;
        if ((ulong)local_3c[0] == 0) {
          uVar4 = 1;
          *(undefined1 *)(lVar7 + 0x58) = 0;
          *(undefined8 *)(lVar7 + 0x38) = 0;
          goto LAB_00125238;
        }
        *(byte *)(lVar7 + 0x58) = local_3c[0];
        pcVar8 = *(code **)(*(long *)(param_1 + 0x70) + 0x48);
        if (pcVar8 == (code *)0x0) {
          sVar5 = fread((void *)(lVar7 + 0x59),1,(ulong)local_3c[0],
                        *(FILE **)(*(long *)(param_1 + 0x70) + 0x40));
          uVar2 = (uint)sVar5;
        }
        else {
          uVar2 = (*pcVar8)(param_1,lVar7 + 0x59);
        }
      } while (uVar2 == local_3c[0]);
      uVar6 = 0x66;
    }
    else {
      uVar6 = 0x6c;
    }
  }
  uVar4 = 0;
  *(undefined4 *)(param_1 + 0x60) = uVar6;
LAB_00125238:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


// ===== 00125324  DGifGetExtension =====

void DGifGetExtension(long param_1,uint *param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  size_t sVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  byte *pbVar6;
  byte local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pbVar6 = *(byte **)(param_1 + 0x70);
  if ((*pbVar6 >> 3 & 1) == 0) {
    uVar5 = 0x6f;
  }
  else {
    if (*(code **)(pbVar6 + 0x48) == (code *)0x0) {
      sVar3 = fread(local_3c,1,1,*(FILE **)(pbVar6 + 0x40));
      iVar2 = (int)sVar3;
    }
    else {
      iVar2 = (**(code **)(pbVar6 + 0x48))(param_1,local_3c,1);
    }
    if (iVar2 == 1) {
      *param_2 = (uint)local_3c[0];
      uVar4 = DGifGetExtensionNext(param_1,param_3);
      goto LAB_001253c4;
    }
    uVar5 = 0x66;
  }
  uVar4 = 0;
  *(undefined4 *)(param_1 + 0x60) = uVar5;
LAB_001253c4:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}


// ===== 001253ec  DGifGetExtensionNext =====

void DGifGetExtensionNext(long param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  size_t sVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  byte local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar7 = *(long *)(param_1 + 0x70);
  if (*(code **)(lVar7 + 0x48) == (code *)0x0) {
    sVar4 = fread(local_3c,1,1,*(FILE **)(lVar7 + 0x40));
    iVar2 = (int)sVar4;
  }
  else {
    iVar2 = (**(code **)(lVar7 + 0x48))(param_1,local_3c,1);
  }
  if (iVar2 == 1) {
    if ((ulong)local_3c[0] == 0) {
      *param_2 = 0;
    }
    else {
      *param_2 = lVar7 + 0x58;
      *(byte *)(lVar7 + 0x58) = local_3c[0];
      pcVar6 = *(code **)(*(long *)(param_1 + 0x70) + 0x48);
      if (pcVar6 == (code *)0x0) {
        sVar4 = fread((void *)(*param_2 + 1),1,(ulong)local_3c[0],
                      *(FILE **)(*(long *)(param_1 + 0x70) + 0x40));
        uVar3 = (uint)sVar4;
      }
      else {
        uVar3 = (*pcVar6)(param_1,*param_2 + 1);
      }
      if (uVar3 != local_3c[0]) goto LAB_001254b8;
    }
    uVar5 = 1;
  }
  else {
LAB_001254b8:
    uVar5 = 0;
    *(undefined4 *)(param_1 + 0x60) = 0x66;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


// ===== 001254ec  DGifExtensionToGCB =====

undefined8 DGifExtensionToGCB(long param_1,byte *param_2,uint *param_3)

{
  uint uVar1;
  
  if (param_1 == 4) {
    *param_3 = *param_2 >> 2 & 7;
    *(byte *)(param_3 + 1) = *param_2 >> 1 & 1;
    param_3[2] = (uint)*(ushort *)(param_2 + 1);
    if ((*param_2 & 1) == 0) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = (uint)param_2[3];
    }
    param_3[3] = uVar1;
    return 1;
  }
  return 0;
}


// ===== 0012553c  DGifSavedExtensionToGCB =====

undefined8 DGifSavedExtensionToGCB(long param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  ulong uVar2;
  byte *pbVar3;
  long lVar4;
  undefined8 *puVar5;
  
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x20))) {
    lVar4 = *(long *)(param_1 + 0x48);
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 0;
    param_3[2] = 0;
    param_3[3] = 0xffffffff;
    uVar1 = *(uint *)(lVar4 + (ulong)param_2 * 0x38 + 0x28);
    uVar2 = (ulong)uVar1;
    if (0 < (int)uVar1) {
      puVar5 = (undefined8 *)(*(long *)(lVar4 + (ulong)param_2 * 0x38 + 0x30) + 8);
      do {
        if (*(int *)(puVar5 + 1) == 0xf9) {
          if (*(int *)(puVar5 + -1) != 4) {
            return 0;
          }
          pbVar3 = (byte *)*puVar5;
          *param_3 = *pbVar3 >> 2 & 7;
          *(byte *)(param_3 + 1) = *pbVar3 >> 1 & 1;
          param_3[2] = (uint)*(ushort *)(pbVar3 + 1);
          if ((*pbVar3 & 1) == 0) {
            uVar1 = 0xffffffff;
          }
          else {
            uVar1 = (uint)pbVar3[3];
          }
          param_3[3] = uVar1;
          return 1;
        }
        uVar2 = uVar2 - 1;
        puVar5 = puVar5 + 3;
      } while (uVar2 != 0);
    }
  }
  return 0;
}


// ===== 00125600  DGifCloseFile =====

undefined8 DGifCloseFile(void *param_1,undefined4 *param_2)

{
  int iVar1;
  byte *__ptr;
  
  if (param_1 == (void *)0x0) {
    return 0;
  }
  if (*(long *)((long)param_1 + 0x70) != 0) {
    if (*(long *)((long)param_1 + 0x40) != 0) {
      GifFreeMapObject();
      *(undefined8 *)((long)param_1 + 0x40) = 0;
    }
    if (*(long *)((long)param_1 + 0x18) != 0) {
      GifFreeMapObject();
      *(undefined8 *)((long)param_1 + 0x18) = 0;
    }
    if (*(long *)((long)param_1 + 0x48) != 0) {
      GifFreeSavedImages(param_1);
      *(undefined8 *)((long)param_1 + 0x48) = 0;
    }
    GifFreeExtensions((long)param_1 + 0x50,(long)param_1 + 0x58);
    __ptr = *(byte **)((long)param_1 + 0x70);
    if ((*__ptr >> 3 & 1) == 0) {
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = 0x6f;
      }
    }
    else {
      if (*(FILE **)(__ptr + 0x40) == (FILE *)0x0) {
LAB_001256c0:
        free(__ptr);
        free(param_1);
        if (param_2 != (undefined4 *)0x0) {
          *param_2 = 0;
        }
        return 1;
      }
      iVar1 = fclose(*(FILE **)(__ptr + 0x40));
      if (iVar1 == 0) {
        __ptr = *(byte **)((long)param_1 + 0x70);
        goto LAB_001256c0;
      }
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = 0x6e;
      }
      __ptr = *(byte **)((long)param_1 + 0x70);
    }
    free(__ptr);
    free(param_1);
  }
  return 0;
}


// ===== 001256dc  DGifGetCode =====

undefined8 DGifGetCode(long param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if ((**(byte **)(param_1 + 0x70) >> 3 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x60) = 0x6f;
    return 0;
  }
  *param_2 = *(undefined4 *)(*(byte **)(param_1 + 0x70) + 8);
  uVar1 = DGifGetCodeNext(param_1,param_3);
  return uVar1;
}


// ===== 00125710  DGifGetLZCodes =====

void DGifGetLZCodes(long param_1,int *param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  size_t sVar5;
  undefined4 uVar6;
  code *pcVar7;
  byte *pbVar8;
  long lVar9;
  byte local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pbVar8 = *(byte **)(param_1 + 0x70);
  if ((*pbVar8 >> 3 & 1) == 0) {
    uVar6 = 0x6f;
  }
  else {
    uVar4 = FUN_00125868(param_1);
    if ((int)uVar4 == 0) goto LAB_00125840;
    if (*param_2 != *(int *)(pbVar8 + 0x10)) {
      uVar4 = 1;
      if (*param_2 == *(int *)(pbVar8 + 0xc)) {
        *(int *)(pbVar8 + 0x14) = *(int *)(pbVar8 + 0x10) + 1;
        *(uint *)(pbVar8 + 0x18) = *(int *)(pbVar8 + 8) + 1U;
        *(int *)(pbVar8 + 0x1c) = 1 << (ulong)(*(int *)(pbVar8 + 8) + 1U & 0x1f);
      }
      goto LAB_00125840;
    }
    do {
      lVar9 = *(long *)(param_1 + 0x70);
      if (*(code **)(lVar9 + 0x48) == (code *)0x0) {
        sVar5 = fread(local_3c,1,1,*(FILE **)(lVar9 + 0x40));
        iVar2 = (int)sVar5;
      }
      else {
        iVar2 = (**(code **)(lVar9 + 0x48))(param_1,local_3c,1);
      }
      if (iVar2 != 1) break;
      if ((ulong)local_3c[0] == 0) {
        *(undefined1 *)(lVar9 + 0x58) = 0;
        uVar4 = 1;
        *(undefined8 *)(lVar9 + 0x38) = 0;
        *param_2 = -1;
        goto LAB_00125840;
      }
      *(byte *)(lVar9 + 0x58) = local_3c[0];
      pcVar7 = *(code **)(*(long *)(param_1 + 0x70) + 0x48);
      if (pcVar7 == (code *)0x0) {
        sVar5 = fread((void *)(lVar9 + 0x59),1,(ulong)local_3c[0],
                      *(FILE **)(*(long *)(param_1 + 0x70) + 0x40));
        uVar3 = (uint)sVar5;
      }
      else {
        uVar3 = (*pcVar7)(param_1,lVar9 + 0x59);
      }
    } while (uVar3 == local_3c[0]);
    uVar6 = 0x66;
  }
  uVar4 = 0;
  *(undefined4 *)(param_1 + 0x60) = uVar6;
LAB_00125840:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


// ===== 00125868  FUN_00125868 =====

undefined8 FUN_00125868(long param_1,uint *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  size_t sVar5;
  undefined4 uVar6;
  code *pcVar7;
  uint uVar8;
  ulong uVar9;
  byte *__ptr;
  long lVar10;
  
  lVar10 = *(long *)(param_1 + 0x70);
  iVar2 = *(int *)(lVar10 + 0x18);
  if (iVar2 < 0xd) {
    uVar3 = *(uint *)(lVar10 + 0x2c);
    if ((int)uVar3 < iVar2) {
      __ptr = (byte *)(lVar10 + 0x58);
      uVar8 = (uint)*__ptr;
      do {
        if ((uVar8 & 0xff) == 0) {
          pcVar7 = *(code **)(*(long *)(param_1 + 0x70) + 0x48);
          if (pcVar7 == (code *)0x0) {
            sVar5 = fread(__ptr,1,1,*(FILE **)(*(long *)(param_1 + 0x70) + 0x40));
            iVar2 = (int)sVar5;
          }
          else {
            iVar2 = (*pcVar7)(param_1,__ptr,1);
          }
          if (iVar2 == 1) {
            if (*__ptr == 0) goto LAB_00125890;
            pcVar7 = *(code **)(*(long *)(param_1 + 0x70) + 0x48);
            if (pcVar7 == (code *)0x0) {
              sVar5 = fread((void *)(lVar10 + 0x59),1,(ulong)*__ptr,
                            *(FILE **)(*(long *)(param_1 + 0x70) + 0x40));
              uVar3 = (uint)sVar5;
            }
            else {
              uVar3 = (*pcVar7)(param_1,lVar10 + 0x59);
            }
            uVar8 = (uint)*__ptr;
            if (uVar3 == uVar8) {
              bVar1 = *(byte *)(lVar10 + 0x59);
              uVar3 = *(uint *)(lVar10 + 0x2c);
              iVar2 = *(int *)(lVar10 + 0x18);
              *(undefined1 *)(lVar10 + 0x59) = 2;
              goto LAB_001258d0;
            }
          }
          uVar6 = 0x66;
          goto LAB_00125894;
        }
        bVar1 = *(byte *)(lVar10 + 0x59);
        *(byte *)(lVar10 + 0x59) = bVar1 + 1;
        bVar1 = __ptr[bVar1];
LAB_001258d0:
        uVar9 = (ulong)uVar3;
        uVar3 = uVar3 + 8;
        uVar8 = uVar8 - 1;
        *(uint *)(lVar10 + 0x2c) = uVar3;
        uVar9 = (ulong)bVar1 << (uVar9 & 0x3f) | *(ulong *)(lVar10 + 0x30);
        *(char *)(lVar10 + 0x58) = (char)uVar8;
        *(ulong *)(lVar10 + 0x30) = uVar9;
      } while ((int)uVar3 < iVar2);
    }
    else {
      uVar9 = *(ulong *)(lVar10 + 0x30);
    }
    *param_2 = (uint)uVar9 & (uint)*(ushort *)(&DAT_001140d0 + (long)iVar2 * 2);
    iVar2 = *(int *)(lVar10 + 0x14);
    uVar3 = *(uint *)(lVar10 + 0x18);
    *(uint *)(lVar10 + 0x2c) = *(int *)(lVar10 + 0x2c) - uVar3;
    *(ulong *)(lVar10 + 0x30) = uVar9 >> ((ulong)uVar3 & 0x3f);
    if (iVar2 < 0x1001) {
      uVar4 = 1;
      *(int *)(lVar10 + 0x14) = iVar2 + 1;
      if ((*(int *)(lVar10 + 0x1c) <= iVar2) && ((int)uVar3 < 0xc)) {
        *(uint *)(lVar10 + 0x18) = uVar3 + 1;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) << 1;
      }
    }
    else {
      uVar4 = 1;
    }
  }
  else {
LAB_00125890:
    uVar6 = 0x70;
LAB_00125894:
    uVar4 = 0;
    *(undefined4 *)(param_1 + 0x60) = uVar6;
  }
  return uVar4;
}


// ===== 00125a20  DGifSlurp =====

void DGifSlurp(long param_1)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  size_t sVar9;
  undefined4 uVar10;
  int iVar11;
  byte *pbVar12;
  code *pcVar13;
  long *plVar14;
  undefined4 *puVar15;
  long lVar16;
  char local_68 [4];
  undefined1 local_64 [4];
  byte local_60 [4];
  byte local_5c [4];
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  plVar14 = (long *)(param_1 + 0x58);
  *plVar14 = 0;
  pbVar12 = *(byte **)(param_1 + 0x70);
  puVar15 = (undefined4 *)(param_1 + 0x50);
  *puVar15 = 0;
  bVar2 = *pbVar12;
joined_r0x00125a64:
  if ((bVar2 >> 3 & 1) == 0) {
LAB_00125a68:
    uVar10 = 0x6f;
LAB_00125e08:
    lVar8 = 0;
    *(undefined4 *)(param_1 + 0x60) = uVar10;
LAB_00125e0c:
    if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(lVar8);
    }
    return;
  }
  if (*(code **)(pbVar12 + 0x48) == (code *)0x0) {
    sVar9 = fread(local_68,1,1,*(FILE **)(pbVar12 + 0x40));
    if ((int)sVar9 == 1) goto LAB_00125abc;
  }
  else {
    iVar6 = (**(code **)(pbVar12 + 0x48))(param_1,local_68,1);
    if (iVar6 != 1) goto LAB_00125e38;
LAB_00125abc:
    if (local_68[0] != '!') {
      if (local_68[0] != ',') {
        if (local_68[0] != ';') {
          uVar10 = 0x6b;
          goto LAB_00125e08;
        }
        if (*(int *)(param_1 + 0x20) == 0) {
          uVar10 = 0x69;
          goto LAB_00125e08;
        }
        lVar8 = 1;
        goto LAB_00125e0c;
      }
      lVar8 = DGifGetImageDesc(param_1);
      if ((int)lVar8 == 0) goto LAB_00125e0c;
      lVar16 = *(long *)(param_1 + 0x48) + (long)*(int *)(param_1 + 0x20) * 0x38;
      uVar7 = *(uint *)(lVar16 + -0x30);
      if (((int)uVar7 < 1) || (uVar1 = *(uint *)(lVar16 + -0x2c), (int)uVar1 < 1)) {
LAB_00125e44:
        lVar8 = 0;
        goto LAB_00125e0c;
      }
      uVar3 = 0;
      if (uVar1 != 0) {
        uVar3 = 0x7fffffff / uVar1;
      }
      if (uVar3 < uVar7) goto LAB_00125e44;
      lVar8 = openbsd_reallocarray(0,uVar1 * uVar7,1);
      *(long *)(lVar16 + -0x18) = lVar8;
      if (lVar8 == 0) goto LAB_00125e0c;
      if (*(char *)(lVar16 + -0x28) == '\0') {
        lVar8 = DGifGetLine(param_1,lVar8,uVar1 * uVar7);
        if ((int)lVar8 == 0) goto LAB_00125e0c;
      }
      else if (0 < *(int *)(lVar16 + -0x2c)) {
        iVar6 = 0;
        do {
          lVar8 = DGifGetLine(param_1,*(long *)(lVar16 + -0x18) +
                                      (long)(*(int *)(lVar16 + -0x30) * iVar6));
          if ((int)lVar8 == 0) goto LAB_00125e0c;
          iVar11 = *(int *)(lVar16 + -0x2c);
          iVar6 = iVar6 + 8;
        } while (iVar6 < iVar11);
        if (4 < iVar11) {
          iVar6 = 4;
          do {
            lVar8 = DGifGetLine(param_1,*(long *)(lVar16 + -0x18) +
                                        (long)(*(int *)(lVar16 + -0x30) * iVar6));
            if ((int)lVar8 == 0) goto LAB_00125e0c;
            iVar11 = *(int *)(lVar16 + -0x2c);
            iVar6 = iVar6 + 8;
          } while (iVar6 < iVar11);
        }
        if (2 < iVar11) {
          iVar6 = 2;
          do {
            lVar8 = DGifGetLine(param_1,*(long *)(lVar16 + -0x18) +
                                        (long)(*(int *)(lVar16 + -0x30) * iVar6));
            if ((int)lVar8 == 0) goto LAB_00125e0c;
            iVar11 = *(int *)(lVar16 + -0x2c);
            iVar6 = iVar6 + 4;
          } while (iVar6 < iVar11);
        }
        if (1 < iVar11) {
          iVar6 = 1;
          do {
            lVar8 = DGifGetLine(param_1,*(long *)(lVar16 + -0x18) +
                                        (long)(*(int *)(lVar16 + -0x30) * iVar6));
            if ((int)lVar8 == 0) goto LAB_00125e0c;
            iVar6 = iVar6 + 2;
          } while (iVar6 < *(int *)(lVar16 + -0x2c));
        }
      }
      if (*plVar14 != 0) {
        *(long *)(lVar16 + -8) = *plVar14;
        *plVar14 = 0;
        *(undefined4 *)(lVar16 + -0x10) = *puVar15;
        *puVar15 = 0;
      }
LAB_00125d48:
      pbVar12 = *(byte **)(param_1 + 0x70);
      bVar2 = *pbVar12;
      goto joined_r0x00125a64;
    }
    pbVar12 = *(byte **)(param_1 + 0x70);
    if ((*pbVar12 >> 3 & 1) == 0) goto LAB_00125a68;
    if (*(code **)(pbVar12 + 0x48) == (code *)0x0) {
      sVar9 = fread(local_64,1,1,*(FILE **)(pbVar12 + 0x40));
      if ((int)sVar9 != 1) goto LAB_00125e38;
LAB_00125c68:
      uVar5 = local_64[0];
      lVar8 = *(long *)(param_1 + 0x70);
      if (*(code **)(lVar8 + 0x48) == (code *)0x0) {
        sVar9 = fread(local_5c,1,1,*(FILE **)(lVar8 + 0x40));
        iVar6 = (int)sVar9;
      }
      else {
        iVar6 = (**(code **)(lVar8 + 0x48))(param_1,local_5c,1);
      }
      if (iVar6 == 1) {
        if ((ulong)local_5c[0] == 0) goto LAB_00125d58;
        *(byte *)(lVar8 + 0x58) = local_5c[0];
        pcVar13 = *(code **)(*(long *)(param_1 + 0x70) + 0x48);
        if (pcVar13 == (code *)0x0) {
          sVar9 = fread((void *)(lVar8 + 0x59),1,(ulong)local_5c[0],
                        *(FILE **)(*(long *)(param_1 + 0x70) + 0x40));
          uVar7 = (uint)sVar9;
        }
        else {
          uVar7 = (*pcVar13)(param_1,lVar8 + 0x59);
        }
        if (uVar7 == local_5c[0]) {
          lVar8 = GifAddExtensionBlock
                            (puVar15,plVar14,uVar5,*(undefined1 *)(lVar8 + 0x58),lVar8 + 0x59);
          iVar6 = (int)lVar8;
          while( true ) {
            if (iVar6 == 0) goto LAB_00125e0c;
LAB_00125d58:
            lVar8 = *(long *)(param_1 + 0x70);
            if (*(code **)(lVar8 + 0x48) == (code *)0x0) {
              sVar9 = fread(local_60,1,1,*(FILE **)(lVar8 + 0x40));
              iVar6 = (int)sVar9;
            }
            else {
              iVar6 = (**(code **)(lVar8 + 0x48))(param_1,local_60,1);
            }
            if (iVar6 != 1) goto LAB_00125e00;
            if ((ulong)local_60[0] == 0) break;
            *(byte *)(lVar8 + 0x58) = local_60[0];
            pcVar13 = *(code **)(*(long *)(param_1 + 0x70) + 0x48);
            if (pcVar13 == (code *)0x0) {
              sVar9 = fread((void *)(lVar8 + 0x59),1,(ulong)local_60[0],
                            *(FILE **)(*(long *)(param_1 + 0x70) + 0x40));
              uVar7 = (uint)sVar9;
            }
            else {
              uVar7 = (*pcVar13)(param_1,lVar8 + 0x59);
            }
            if (uVar7 != local_60[0]) goto LAB_00125e00;
            lVar8 = GifAddExtensionBlock
                              (puVar15,plVar14,0,*(undefined1 *)(lVar8 + 0x58),lVar8 + 0x59);
            iVar6 = (int)lVar8;
          }
          goto LAB_00125d48;
        }
      }
LAB_00125e00:
      uVar10 = 0x66;
      goto LAB_00125e08;
    }
    iVar6 = (**(code **)(pbVar12 + 0x48))(param_1,local_64,1);
    if (iVar6 == 1) goto LAB_00125c68;
  }
LAB_00125e38:
  uVar10 = 0x66;
  goto LAB_00125e08;
}


// ===== 00125e80  GifBitSize =====

void GifBitSize(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    uVar1 = uVar1 + 1;
    if (8 < uVar1) {
      return;
    }
  } while (1 << (ulong)(uVar1 & 0x1f) < param_1);
  return;
}


// ===== 00125ea8  GifMakeMapObject =====

int * GifMakeMapObject(int param_1,void *param_2)

{
  int iVar1;
  int *__ptr;
  void *__dest;
  uint uVar2;
  
  uVar2 = 1;
  do {
    iVar1 = 1 << (ulong)(uVar2 & 0x1f);
    if (8 < uVar2) break;
    uVar2 = uVar2 + 1;
  } while (iVar1 < param_1);
  if (iVar1 == param_1) {
    __ptr = (int *)malloc(0x18);
    if (__ptr == (int *)0x0) {
      return (int *)0x0;
    }
    __dest = calloc((long)param_1,3);
    *(void **)(__ptr + 4) = __dest;
    if (__dest != (void *)0x0) {
      uVar2 = 0;
      *__ptr = param_1;
      do {
        uVar2 = uVar2 + 1;
        if (8 < uVar2) break;
      } while (1 << (ulong)(uVar2 & 0x1f) < param_1);
      __ptr[1] = uVar2;
      *(undefined1 *)(__ptr + 2) = 0;
      if (param_2 == (void *)0x0) {
        return __ptr;
      }
      memcpy(__dest,param_2,(long)param_1 * 3);
      return __ptr;
    }
    free(__ptr);
  }
  return (int *)0x0;
}


// ===== 00125f78  GifFreeMapObject =====

void GifFreeMapObject(void *param_1)

{
  if (param_1 != (void *)0x0) {
    free(*(void **)((long)param_1 + 0x10));
    free(param_1);
    return;
  }
  return;
}


// ===== 00125fac  GifUnionColorMap =====

int * GifUnionColorMap(uint *param_1,uint *param_2,long param_3)

{
  char *pcVar1;
  short *psVar2;
  uint uVar3;
  uint uVar4;
  undefined2 uVar5;
  int iVar6;
  int *__ptr;
  undefined2 *__ptr_00;
  uint uVar7;
  undefined2 *puVar8;
  long lVar9;
  ulong uVar10;
  char *pcVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  short *psVar14;
  int iVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  
  uVar17 = *param_1;
  uVar16 = (ulong)uVar17;
  uVar4 = *param_2;
  uVar7 = 1;
  uVar3 = uVar17;
  if ((int)uVar17 <= (int)uVar4) {
    uVar3 = uVar4;
  }
  iVar6 = uVar3 * 2;
  do {
    iVar15 = 1 << (ulong)(uVar7 & 0x1f);
    if (8 < uVar7) break;
    uVar7 = uVar7 + 1;
  } while ((int)(iVar15 + uVar3 * -2) < 0 != SBORROW4(iVar15,iVar6));
  if (iVar15 == iVar6) {
    __ptr = (int *)malloc(0x18);
    if (__ptr == (int *)0x0) {
      return (int *)0x0;
    }
    __ptr_00 = (undefined2 *)calloc((long)iVar6,3);
    *(undefined2 **)(__ptr + 4) = __ptr_00;
    if (__ptr_00 != (undefined2 *)0x0) {
      uVar7 = 0;
      *__ptr = iVar6;
      do {
        uVar7 = uVar7 + 1;
        if (8 < uVar7) break;
        iVar15 = 1 << (ulong)(uVar7 & 0x1f);
      } while ((int)(iVar15 + uVar3 * -2) < 0 != SBORROW4(iVar15,iVar6));
      puVar8 = *(undefined2 **)(param_1 + 4);
      __ptr[1] = uVar7;
      *(undefined1 *)(__ptr + 2) = 0;
      uVar18 = (long)(int)uVar17;
      if (0 < (int)uVar17) {
        uVar10 = 0;
        puVar12 = __ptr_00;
        puVar13 = puVar8;
        do {
          uVar5 = *puVar13;
          uVar10 = uVar10 + 1;
          *(undefined1 *)(puVar12 + 1) = *(undefined1 *)(puVar13 + 1);
          *puVar12 = uVar5;
          puVar12 = (undefined2 *)((long)puVar12 + 3);
          puVar13 = (undefined2 *)((long)puVar13 + 3);
          uVar18 = uVar16;
        } while (uVar10 < uVar16);
      }
      if (*(char *)((long)puVar8 + uVar18 * 3 + -3) == '\0') {
        pcVar11 = (char *)((long)puVar8 + uVar18 * 3 + -2);
        do {
          if ((*pcVar11 != '\0') || (pcVar11[1] != '\0')) break;
          pcVar1 = pcVar11 + -4;
          uVar18 = uVar18 - 1;
          pcVar11 = pcVar11 + -3;
        } while (*pcVar1 == '\0');
        uVar16 = uVar18 & 0xffffffff;
      }
      uVar7 = (uint)uVar16;
      if ((0 < (int)uVar4) && ((int)uVar7 < 0x101)) {
        lVar9 = 0;
        do {
          if (0 < (int)*param_1) {
            psVar2 = (short *)(*(long *)(param_2 + 4) + lVar9 * 3);
            psVar14 = *(short **)(param_1 + 4);
            uVar18 = 0;
            do {
              uVar10 = uVar16;
              if (*psVar14 == *psVar2 && (char)psVar14[1] == (char)psVar2[1]) goto LAB_00126178;
              uVar18 = uVar18 + 1;
              psVar14 = (short *)((long)psVar14 + 3);
            } while (*param_1 != uVar18);
          }
          iVar15 = (int)uVar16;
          puVar8 = (undefined2 *)(*(long *)(param_2 + 4) + lVar9 * 3);
          uVar5 = *puVar8;
          uVar10 = (ulong)(iVar15 + 1);
          puVar12 = (undefined2 *)((long)__ptr_00 + (long)iVar15 + (long)iVar15 * 2);
          *(undefined1 *)(puVar12 + 1) = *(undefined1 *)(puVar8 + 1);
          *puVar12 = uVar5;
          uVar18 = uVar16;
LAB_00126178:
          uVar7 = (uint)uVar10;
          *(char *)(param_3 + lVar9) = (char)uVar18;
          lVar9 = lVar9 + 1;
        } while ((lVar9 < (int)*param_2) && (uVar16 = uVar10, (int)uVar7 < 0x101));
      }
      if ((int)uVar7 < 0x101) {
        uVar17 = 0;
        do {
          uVar17 = uVar17 + 1;
          iVar15 = 1 << (ulong)(uVar17 & 0x1f);
          if (8 < uVar17) break;
        } while (iVar15 < (int)uVar7);
        if (iVar15 == iVar6) {
LAB_0012625c:
          *__ptr = iVar15;
          __ptr[1] = uVar17;
          return __ptr;
        }
        if ((int)uVar7 < iVar15) {
          memset((void *)((long)__ptr_00 + (long)(int)uVar7 + (long)(int)uVar7 * 2),0,
                 (ulong)(iVar15 + ~uVar7) * 3 + 3);
        }
        if ((int)(iVar15 + uVar3 * -2) < 0 == SBORROW4(iVar15,iVar6)) goto LAB_0012625c;
        lVar9 = openbsd_reallocarray(__ptr_00,iVar15,3);
        if (lVar9 != 0) {
          *(long *)(__ptr + 4) = lVar9;
          goto LAB_0012625c;
        }
      }
      free(__ptr_00);
    }
    free(__ptr);
  }
  return (int *)0x0;
}


// ===== 0012626c  GifApplyTranslation =====

void GifApplyTranslation(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(int *)(param_1 + 8) * *(int *)(param_1 + 0xc);
  if (0 < (int)uVar1) {
    uVar2 = 0;
    do {
      *(undefined1 *)(*(long *)(param_1 + 0x20) + uVar2) =
           *(undefined1 *)(param_2 + (ulong)*(byte *)(*(long *)(param_1 + 0x20) + uVar2));
      uVar2 = uVar2 + 1;
    } while (uVar1 != uVar2);
  }
  return;
}


// ===== 001262a0  GifAddExtensionBlock =====

void * GifAddExtensionBlock(int *param_1,long *param_2,uint param_3,uint param_4,void *param_5)

{
  void *pvVar1;
  uint *puVar2;
  
  if (*param_2 == 0) {
    pvVar1 = malloc(0x18);
    *param_2 = (long)pvVar1;
    if (pvVar1 == (void *)0x0) {
      return (void *)0x0;
    }
  }
  else {
    pvVar1 = (void *)openbsd_reallocarray(*param_2,(long)*param_1 + 1,0x18);
    if (pvVar1 == (void *)0x0) {
      return (void *)0x0;
    }
    *param_2 = (long)pvVar1;
  }
  puVar2 = (uint *)((long)pvVar1 + (long)*param_1 * 0x18);
  *param_1 = *param_1 + 1;
  puVar2[4] = param_3;
  *puVar2 = param_4;
  pvVar1 = malloc((long)(int)param_4);
  *(void **)(puVar2 + 2) = pvVar1;
  if (pvVar1 != (void *)0x0) {
    if (param_5 != (void *)0x0) {
      memcpy(pvVar1,param_5,(ulong)param_4);
    }
    pvVar1 = (void *)0x1;
  }
  return pvVar1;
}


// ===== 00126354  GifFreeExtensions =====

void GifFreeExtensions(int *param_1,ulong *param_2)

{
  void *__ptr;
  void *pvVar1;
  
  __ptr = (void *)*param_2;
  if (__ptr != (void *)0x0) {
    pvVar1 = __ptr;
    if (0 < *param_1) {
      do {
        free(*(void **)((long)pvVar1 + 8));
        __ptr = (void *)*param_2;
        pvVar1 = (void *)((long)pvVar1 + 0x18);
      } while (pvVar1 < (void *)((long)__ptr + (long)*param_1 * 0x18));
    }
    free(__ptr);
    *param_2 = 0;
    *param_1 = 0;
  }
  return;
}


// ===== 001263c8  FreeLastSavedImage =====

void FreeLastSavedImage(long param_1)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  ulong *puVar4;
  long lVar5;
  int *piVar6;
  undefined8 *puVar7;
  
  if ((param_1 != 0) && (lVar3 = *(long *)(param_1 + 0x48), lVar3 != 0)) {
    lVar5 = (long)*(int *)(param_1 + 0x20) + -1;
    *(int *)(param_1 + 0x20) = (int)lVar5;
    puVar7 = (undefined8 *)(lVar3 + lVar5 * 0x38 + 0x18);
    pvVar1 = (void *)*puVar7;
    if (pvVar1 != (void *)0x0) {
      free(*(void **)((long)pvVar1 + 0x10));
      free(pvVar1);
      *puVar7 = 0;
    }
    pvVar1 = *(void **)(lVar3 + lVar5 * 0x38 + 0x20);
    if (pvVar1 != (void *)0x0) {
      free(pvVar1);
    }
    lVar3 = lVar3 + lVar5 * 0x38;
    puVar4 = (ulong *)(lVar3 + 0x30);
    pvVar1 = (void *)*puVar4;
    if (pvVar1 != (void *)0x0) {
      piVar6 = (int *)(lVar3 + 0x28);
      pvVar2 = pvVar1;
      if (0 < *piVar6) {
        do {
          free(*(void **)((long)pvVar2 + 8));
          pvVar1 = (void *)*puVar4;
          pvVar2 = (void *)((long)pvVar2 + 0x18);
        } while (pvVar2 < (void *)((long)pvVar1 + (long)*piVar6 * 0x18));
      }
      free(pvVar1);
      *puVar4 = 0;
      *piVar6 = 0;
    }
  }
  return;
}


// ===== 00126490  GifMakeSavedImage =====

undefined8 * GifMakeSavedImage(long param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  long lVar3;
  void *pvVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if (*(long *)(param_1 + 0x48) == 0) {
    pvVar2 = malloc(0x38);
    *(void **)(param_1 + 0x48) = pvVar2;
    if (pvVar2 == (void *)0x0) {
      return (undefined8 *)0x0;
    }
  }
  else {
    pvVar2 = (void *)openbsd_reallocarray
                               (*(long *)(param_1 + 0x48),(long)*(int *)(param_1 + 0x20) + 1,0x38);
    if (pvVar2 == (void *)0x0) {
      return (undefined8 *)0x0;
    }
    *(void **)(param_1 + 0x48) = pvVar2;
  }
  iVar1 = *(int *)(param_1 + 0x20);
  puVar6 = (undefined8 *)((long)pvVar2 + (long)iVar1 * 0x38);
  *(int *)(param_1 + 0x20) = iVar1 + 1;
  if (param_2 == (undefined8 *)0x0) {
    puVar6[6] = 0;
    puVar6[3] = 0;
    puVar6[2] = 0;
    puVar6[5] = 0;
    puVar6[4] = 0;
    puVar6[1] = 0;
    *puVar6 = 0;
    return puVar6;
  }
  uVar12 = param_2[3];
  uVar11 = param_2[2];
  uVar8 = param_2[5];
  uVar7 = param_2[4];
  uVar10 = param_2[1];
  uVar9 = *param_2;
  puVar6[6] = param_2[6];
  puVar6[3] = uVar12;
  puVar6[2] = uVar11;
  puVar6[5] = uVar8;
  puVar6[4] = uVar7;
  puVar6[1] = uVar10;
  *puVar6 = uVar9;
  puVar5 = (undefined4 *)param_2[3];
  if (puVar5 != (undefined4 *)0x0) {
    lVar3 = GifMakeMapObject(*puVar5,*(undefined8 *)(puVar5 + 4));
    puVar6[3] = lVar3;
    if (lVar3 == 0) goto LAB_001265a8;
  }
  pvVar4 = (void *)openbsd_reallocarray
                             (0,(long)*(int *)(param_2 + 1) * (long)*(int *)(param_2 + 2),1);
  *(void **)((long)pvVar2 + (long)iVar1 * 0x38 + 0x20) = pvVar4;
  if (pvVar4 != (void *)0x0) {
    memcpy(pvVar4,(void *)param_2[4],(long)*(int *)(param_2 + 1) * (long)*(int *)(param_2 + 2));
    if (param_2[6] == 0) {
      return puVar6;
    }
    pvVar4 = (void *)openbsd_reallocarray(0,(long)*(int *)(param_2 + 5),0x18);
    *(void **)((long)pvVar2 + (long)iVar1 * 0x38 + 0x30) = pvVar4;
    if (pvVar4 != (void *)0x0) {
      memcpy(pvVar4,(void *)param_2[6],(long)*(int *)(param_2 + 5) * 0x18);
      return puVar6;
    }
  }
LAB_001265a8:
  FreeLastSavedImage(param_1);
  return (undefined8 *)0x0;
}


// ===== 001265e0  GifFreeSavedImages =====

void GifFreeSavedImages(long param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  if ((param_1 != 0) && (pvVar1 = *(void **)(param_1 + 0x48), pvVar1 != (void *)0x0)) {
    pvVar2 = pvVar1;
    if (0 < *(int *)(param_1 + 0x20)) {
      do {
        pvVar1 = *(void **)((long)pvVar2 + 0x18);
        if (pvVar1 != (void *)0x0) {
          free(*(void **)((long)pvVar1 + 0x10));
          free(pvVar1);
          *(undefined8 *)((long)pvVar2 + 0x18) = 0;
        }
        if (*(void **)((long)pvVar2 + 0x20) != (void *)0x0) {
          free(*(void **)((long)pvVar2 + 0x20));
        }
        pvVar1 = *(void **)((long)pvVar2 + 0x30);
        if (pvVar1 != (void *)0x0) {
          pvVar3 = pvVar1;
          if (0 < *(int *)((long)pvVar2 + 0x28)) {
            do {
              free(*(void **)((long)pvVar3 + 8));
              pvVar1 = *(void **)((long)pvVar2 + 0x30);
              pvVar3 = (void *)((long)pvVar3 + 0x18);
            } while (pvVar3 < (void *)((long)pvVar1 + (long)*(int *)((long)pvVar2 + 0x28) * 0x18));
          }
          free(pvVar1);
          *(undefined8 *)((long)pvVar2 + 0x30) = 0;
          *(undefined4 *)((long)pvVar2 + 0x28) = 0;
        }
        pvVar1 = *(void **)(param_1 + 0x48);
        pvVar2 = (void *)((long)pvVar2 + 0x38);
      } while (pvVar2 < (void *)((long)pvVar1 + (long)*(int *)(param_1 + 0x20) * 0x38));
    }
    free(pvVar1);
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  return;
}


// ===== 001266cc  openbsd_reallocarray =====

void * openbsd_reallocarray(void *param_1,ulong param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 *puVar3;
  void *pvVar4;
  
  if (((param_2 != 0) && ((param_3 | param_2) >> 0x20 != 0)) &&
     (auVar1._8_8_ = 0, auVar1._0_8_ = param_2, auVar2._8_8_ = 0, auVar2._0_8_ = param_3,
     SUB168(auVar1 * auVar2,8) != 0)) {
    puVar3 = (undefined4 *)__errno();
    *puVar3 = 0xc;
    return (void *)0x0;
  }
  if ((param_2 != 0) && (param_3 != 0)) {
    pvVar4 = realloc(param_1,param_3 * param_2);
    return pvVar4;
  }
  return (void *)0x0;
}


// ===== 0012671c  FUN_0012671c =====

void FUN_0012671c(void)

{
  return;
}


// ===== 00126724  FUN_00126724 =====

void FUN_00126724(long *param_1)

{
  long lVar1;
  
  if ((param_1[2] != 0) && (lVar1 = FUN_00144550(0xffffffffffffffff), lVar1 != 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00126778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1);
  return;
}


// ===== 0012677c  FUN_0012677c =====

void FUN_0012677c(void)

{
  __cxa_begin_catch();
                    /* WARNING: Subroutine does not return */
  std::terminate();
}


// ===== 00126790  FUN_00126790 =====

undefined8 FUN_00126790(void)

{
  return 0;
}


// ===== 0012679c  FUN_0012679c =====

void FUN_0012679c(char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 auStack_f0 [8];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined1 *local_b0;
  undefined1 **ppuStack_a8;
  undefined1 *puStack_a0;
  undefined8 uStack_98;
  char *local_88;
  undefined1 *local_80;
  undefined1 **ppuStack_78;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  
  uStack_68 = 0xffffff80ffffffc8;
  local_e8 = param_2;
  uStack_e0 = param_3;
  local_d8 = param_4;
  uStack_d0 = param_5;
  local_c8 = param_6;
  uStack_c0 = param_7;
  local_b8 = param_8;
  local_80 = (undefined1 *)register0x00000008;
  ppuStack_78 = &local_b0;
  puStack_70 = auStack_f0;
  vfprintf((FILE *)(PTR___sF_00150d60 + 0x130),param_1,&local_80);
  uStack_98 = 0xffffff80ffffffc8;
  local_b0 = (undefined1 *)register0x00000008;
  ppuStack_a8 = &local_b0;
  puStack_a0 = auStack_f0;
  vasprintf(&local_88,param_1,&local_b0);
  android_set_abort_message(local_88);
  openlog("libc++",0,0);
  syslog(2,"%s",local_88);
  closelog();
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00126878  FUN_00126878 =====

int FUN_00126878(pthread_mutex_t *param_1)

{
  int iVar1;
  
                    /* try { // try from 00126884 to 00126887 has its CatchHandler @ 00126894 */
  iVar1 = pthread_mutex_destroy(param_1);
  return iVar1;
}


// ===== 00126898  FUN_00126898 =====

void FUN_00126898(pthread_mutex_t *param_1)

{
  int iVar1;
  
  iVar1 = pthread_mutex_lock(param_1);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00126eac(iVar1,"mutex lock failed");
}


// ===== 001268c4  FUN_001268c4 =====

int FUN_001268c4(pthread_mutex_t *param_1)

{
  int iVar1;
  
                    /* try { // try from 001268d0 to 001268d3 has its CatchHandler @ 001268e0 */
  iVar1 = pthread_mutex_unlock(param_1);
  return iVar1;
}


// ===== 001268e4  FUN_001268e4 =====

void FUN_001268e4(long *param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  size_t __n;
  void *__dest;
  char *__s;
  char acStack_440 [1024];
  
  __s = acStack_440;
  piVar3 = (int *)__errno();
  iVar1 = *piVar3;
  pcVar4 = strerror_r(param_3,acStack_440,0x400);
  iVar2 = (int)pcVar4;
  if (iVar2 != 0) {
    if (iVar2 == -1) {
      iVar2 = *piVar3;
    }
    if (iVar2 != 0x16) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    __s = "";
  }
  if (*__s == '\0') {
    snprintf(acStack_440,0x400,"Unknown error %d",(ulong)param_3);
    __s = acStack_440;
  }
  *piVar3 = iVar1;
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_00126f9c(param_1);
  }
  if (__n < 0x17) {
    __dest = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_001269c8;
  }
  else {
    __dest = operator_new((__n | 0xf) + 1);
    param_1[1] = __n;
    param_1[2] = (long)__dest;
    *param_1 = (__n | 0xf) + 2;
  }
  memmove(__dest,__s,__n);
LAB_001269c8:
  *(undefined1 *)((long)__dest + __n) = 0;
  return;
}


// ===== 001269f4  FUN_001269f4 =====

char * FUN_001269f4(void)

{
  return "generic";
}


// ===== 00126a04  FUN_00126a04 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00126a04(undefined8 *param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  
  if (0xfff < param_3) {
    pcVar7 = (char *)operator_new(0x30);
    param_1[2] = pcVar7;
    uVar6 = s_unspecified_generic_category_err_001127bf._24_8_;
    uVar5 = s_unspecified_generic_category_err_001127bf._16_8_;
    uVar4 = s_unspecified_generic_category_err_001127bf._8_8_;
    uVar3 = s_unspecified_generic_category_err_001127bf._0_8_;
    uVar2 = _UNK_00112058;
    uVar1 = _DAT_00112050;
    pcVar7[0x20] = 'o';
    pcVar7[0x21] = 'r';
    param_1[1] = uVar2;
    *param_1 = uVar1;
    *(undefined8 *)(pcVar7 + 8) = uVar4;
    *(undefined8 *)pcVar7 = uVar3;
    *(undefined8 *)(pcVar7 + 0x18) = uVar6;
    *(undefined8 *)(pcVar7 + 0x10) = uVar5;
    pcVar7[0x22] = '\0';
    return;
  }
  FUN_001268e4();
  return;
}


// ===== 00126a6c  FUN_00126a6c =====

char * FUN_00126a6c(void)

{
  return "system";
}


// ===== 00126a7c  FUN_00126a7c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00126a7c(undefined8 *param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  
  if (0xfff < param_3) {
    pcVar7 = (char *)operator_new(0x30);
    param_1[2] = pcVar7;
    uVar6 = s_unspecified_system_category_erro_001122b0._24_8_;
    uVar5 = s_unspecified_system_category_erro_001122b0._16_8_;
    uVar4 = s_unspecified_system_category_erro_001122b0._8_8_;
    uVar3 = s_unspecified_system_category_erro_001122b0._0_8_;
    uVar2 = _UNK_001122a8;
    uVar1 = _DAT_001122a0;
    pcVar7[0x20] = 'r';
    pcVar7[0x21] = '\0';
    param_1[1] = uVar2;
    *param_1 = uVar1;
    *(undefined8 *)(pcVar7 + 8) = uVar4;
    *(undefined8 *)pcVar7 = uVar3;
    *(undefined8 *)(pcVar7 + 0x18) = uVar6;
    *(undefined8 *)(pcVar7 + 0x10) = uVar5;
    return;
  }
  FUN_001268e4();
  return;
}


// ===== 00126ae0  FUN_00126ae0 =====

int FUN_00126ae0(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  
  if (param_2 < 0x1000) {
    if ((DAT_00155568 & 1) != 0) {
      return param_2;
    }
    puVar2 = &DAT_00155568;
    iVar1 = __cxa_guard_acquire(&DAT_00155568);
  }
  else {
    if ((DAT_00155570 & 1) != 0) {
      return param_2;
    }
    puVar2 = &DAT_00155570;
    iVar1 = __cxa_guard_acquire(&DAT_00155570);
  }
  if (iVar1 == 0) {
    return param_2;
  }
  __cxa_guard_release(puVar2);
  return param_2;
}


// ===== 00126bd4  FUN_00126bd4 =====

undefined ** FUN_00126bd4(void)

{
  int iVar1;
  
  if (((DAT_00155570 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_00155570), iVar1 != 0)) {
    __cxa_guard_release(&DAT_00155570);
    return &PTR_PTR_FUN_001554d8;
  }
  return &PTR_PTR_FUN_001554d8;
}


// ===== 00126c34  FUN_00126c34 =====

void FUN_00126c34(undefined8 *param_1,int *param_2,byte *param_3)

{
  ulong uVar1;
  int iVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte local_48 [8];
  ulong local_40;
  void *local_38;
  
  iVar2 = *param_2;
  if (iVar2 != 0) {
    uVar1 = (ulong)(*param_3 >> 1);
    if ((*param_3 & 1) != 0) {
      uVar1 = *(ulong *)(param_3 + 8);
    }
    if (uVar1 != 0) {
      FUN_0012715c(param_3,&DAT_00113dbf,2);
      iVar2 = *param_2;
    }
    (**(code **)(**(long **)(param_2 + 2) + 0x30))(local_48,*(long **)(param_2 + 2),iVar2);
    uVar1 = (ulong)(local_48[0] >> 1);
    pvVar3 = (void *)((ulong)local_48 | 1);
    if ((local_48[0] & 1) != 0) {
      uVar1 = local_40;
      pvVar3 = local_38;
    }
                    /* try { // try from 00126cc4 to 00126ccb has its CatchHandler @ 00126d0c */
    FUN_0012715c(param_3,pvVar3,uVar1);
    if ((local_48[0] & 1) != 0) {
      operator_delete(local_38);
    }
  }
  uVar6 = *(undefined8 *)(param_3 + 8);
  uVar5 = *(undefined8 *)param_3;
  uVar4 = *(undefined8 *)(param_3 + 0x10);
  param_3[8] = 0;
  param_3[9] = 0;
  param_3[10] = 0;
  param_3[0xb] = 0;
  param_3[0xc] = 0;
  param_3[0xd] = 0;
  param_3[0xe] = 0;
  param_3[0xf] = 0;
  param_3[0x10] = 0;
  param_3[0x11] = 0;
  param_3[0x12] = 0;
  param_3[0x13] = 0;
  param_3[0x14] = 0;
  param_3[0x15] = 0;
  param_3[0x16] = 0;
  param_3[0x17] = 0;
  param_1[1] = uVar6;
  *param_1 = uVar5;
  param_1[2] = uVar4;
  param_3[0] = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  return;
}


// ===== 00126d28  FUN_00126d28 =====

void FUN_00126d28(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  size_t __n;
  void *__dest;
  ulong local_80;
  size_t local_78;
  void *local_70;
  byte local_68 [16];
  void *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = param_2;
  uStack_48 = param_3;
  __n = strlen(param_4);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_00126f9c(&local_80);
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_80 | 1);
    local_80 = CONCAT71(local_80._1_7_,(char)((int)__n << 1));
    if (__n == 0) goto LAB_00126db0;
  }
  else {
    __dest = operator_new((__n | 0xf) + 1);
    local_80 = (__n | 0xf) + 2;
    local_78 = __n;
    local_70 = __dest;
  }
  memcpy(__dest,param_4,__n);
LAB_00126db0:
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 00126db4 to 00126dc3 has its CatchHandler @ 00126e5c */
  FUN_00126c34(local_68,&local_50,&local_80);
                    /* try { // try from 00126dc4 to 00126dcf has its CatchHandler @ 00126e2c */
  FUN_001270c8(param_1,local_68);
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  *param_1 = &PTR__runtime_error_0014d060;
  param_1[3] = uStack_48;
  param_1[2] = local_50;
  return;
}


// ===== 00126e78  std::runtime_error::~runtime_error =====

void __thiscall std::runtime_error::~runtime_error(runtime_error *this)

{
  ~runtime_error(this);
  return;
}


// ===== 00126e80  FUN_00126e80 =====

void FUN_00126e80(runtime_error *param_1)

{
  std::runtime_error::~runtime_error(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00126eac  FUN_00126eac =====

void FUN_00126eac(undefined4 param_1,undefined8 param_2)

{
  FUN_00126bd4();
                    /* WARNING: Subroutine does not return */
  FUN_00126edc(param_1,&PTR_PTR_FUN_001554d8,param_2);
}


// ===== 00126edc  FUN_00126edc =====

void FUN_00126edc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = __cxa_allocate_exception(0x20);
                    /* try { // try from 00126f08 to 00126f17 has its CatchHandler @ 00126f30 */
  FUN_00126d28(uVar1,param_1,param_2,param_3);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(uVar1,PTR_PTR_00150d80,PTR__runtime_error_00150d78);
}


// ===== 00126f44  FUN_00126f44 =====

void FUN_00126f44(void *param_1)

{
  FUN_001272e4();
  operator_delete(param_1);
  return;
}


// ===== 00126f70  FUN_00126f70 =====

void FUN_00126f70(void *param_1)

{
  FUN_001272e4();
  operator_delete(param_1);
  return;
}


// ===== 00126f9c  FUN_00126f9c =====

void FUN_00126f9c(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00126fb4("basic_string");
}


// ===== 00126fb4  FUN_00126fb4 =====

void FUN_00126fb4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = __cxa_allocate_exception(0x10);
                    /* try { // try from 00126fd4 to 00126fdb has its CatchHandler @ 00126ff4 */
  FUN_00127008(uVar1,param_1);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(uVar1,PTR_PTR_00150d88,PTR__out_of_range_00150d90);
}


// ===== 00127008  FUN_00127008 =====

void FUN_00127008(long *param_1)

{
  FUN_00127040();
  *param_1 = (long)(PTR_vtable_00150d98 + 0x10);
  return;
}


// ===== 00127040  FUN_00127040 =====

void FUN_00127040(long *param_1,char *param_2)

{
  size_t sVar1;
  size_t *psVar2;
  
  *param_1 = (long)(PTR_vtable_00150da0 + 0x10);
  sVar1 = strlen(param_2);
                    /* try { // try from 00127078 to 0012707f has its CatchHandler @ 001270b4 */
  psVar2 = (size_t *)operator_new(sVar1 + 0x19);
  *psVar2 = sVar1;
  psVar2[1] = sVar1;
  *(undefined4 *)(psVar2 + 2) = 0;
  memcpy(psVar2 + 3,param_2,sVar1 + 1);
  param_1[1] = (long)(psVar2 + 3);
  return;
}


// ===== 001270c8  FUN_001270c8 =====

void FUN_001270c8(long *param_1,byte *param_2)

{
  size_t sVar1;
  size_t *psVar2;
  byte *__s;
  
  *param_1 = (long)(PTR_vtable_00150da8 + 0x10);
  __s = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    __s = param_2 + 1;
  }
  sVar1 = strlen((char *)__s);
                    /* try { // try from 0012710c to 00127113 has its CatchHandler @ 00127148 */
  psVar2 = (size_t *)operator_new(sVar1 + 0x19);
  *psVar2 = sVar1;
  psVar2[1] = sVar1;
  *(undefined4 *)(psVar2 + 2) = 0;
  memcpy(psVar2 + 3,__s,sVar1 + 1);
  param_1[1] = (long)(psVar2 + 3);
  return;
}


// ===== 0012715c  FUN_0012715c =====

ulong * FUN_0012715c(ulong *param_1,void *param_2,ulong param_3)

{
  ulong uVar1;
  size_t __n;
  ulong uVar2;
  ulong uVar3;
  void *__dest;
  undefined1 *puVar4;
  void *__src;
  ulong uVar5;
  
  uVar2 = *param_1;
  uVar3 = *param_1;
  uVar5 = 0x16;
  if ((uVar3 & 1) != 0) {
    uVar5 = (uVar2 & 0xfffffffffffffffe) - 1;
  }
  __n = uVar2 >> 1 & 0x7f;
  if ((uVar2 & 1) != 0) {
    __n = param_1[1];
  }
  if (uVar5 - __n < param_3) {
    uVar1 = __n + param_3;
    if (-uVar5 - 0x12 < uVar1 - uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_00126f9c(param_1);
    }
    __src = (void *)param_1[2];
    if ((uVar2 & 1) == 0) {
      __src = (void *)((long)param_1 + 1);
    }
    if (uVar5 < 0x7fffffffffffffe7) {
      uVar2 = uVar1;
      if (uVar1 <= uVar5 * 2) {
        uVar2 = uVar5 * 2;
      }
      uVar5 = 0x17;
      if (0x16 < uVar2) {
        uVar5 = (uVar2 | 0xf) + 1;
      }
      __dest = operator_new(uVar5);
    }
    else {
      uVar5 = 0xffffffffffffffef;
      __dest = operator_new(0xffffffffffffffef);
    }
    if (__n != 0) {
      memmove(__dest,__src,__n);
    }
    memcpy((void *)((long)__dest + __n),param_2,param_3);
    if ((uVar3 & 1) != 0) {
      operator_delete(__src);
    }
    param_1[1] = uVar1;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar5 | 1;
    puVar4 = (undefined1 *)((long)__dest + uVar1);
  }
  else {
    if (param_3 == 0) {
      return param_1;
    }
    uVar5 = param_1[2];
    if ((uVar2 & 1) == 0) {
      uVar5 = (long)param_1 + 1;
    }
    memmove((void *)(uVar5 + __n),param_2,param_3);
    param_3 = __n + param_3;
    if ((*param_1 & 1) == 0) {
      puVar4 = (undefined1 *)(uVar5 + param_3);
      *(char *)param_1 = (char)((int)param_3 << 1);
    }
    else {
      param_1[1] = param_3;
      puVar4 = (undefined1 *)(uVar5 + param_3);
    }
  }
  *puVar4 = 0;
  return param_1;
}


// ===== 001272e4  FUN_001272e4 =====

void FUN_001272e4(void)

{
  return;
}


// ===== 001272ec  FUN_001272ec =====

undefined1  [16] FUN_001272ec(undefined8 param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = param_2 & 0xffffffff;
  auVar1._8_8_ = param_1;
  return auVar1;
}


// ===== 00127300  FUN_00127300 =====

bool FUN_00127300(long *param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  long extraout_x1;
  
  iVar1 = (**(code **)(*param_1 + 0x18))();
  return *(long *)(param_3 + 2) == extraout_x1 && *param_3 == iVar1;
}


// ===== 00127344  FUN_00127344 =====

bool FUN_00127344(long param_1,int *param_2,int param_3)

{
  return *(long *)(param_2 + 2) == param_1 && *param_2 == param_3;
}


// ===== 00127360  __cxa_guard_acquire =====

bool __cxa_guard_acquire(char *param_1)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined4 uVar6;
  long unaff_x21;
  
  if (*param_1 == '\0') {
    iVar4 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00155578);
    if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00127d24("%s failed to acquire mutex","__cxa_guard_acquire");
    }
    bVar1 = param_1[1];
                    /* try { // try from 001273b8 to 001273bf has its CatchHandler @ 00127474 */
    if (((bVar1 >> 1 & 1) != 0) &&
       (iVar4 = *(int *)(param_1 + 4), unaff_x21 = syscall(0xb2), iVar4 == (int)unaff_x21)) {
                    /* try { // try from 00127468 to 00127473 has its CatchHandler @ 00127474 */
                    /* WARNING: Subroutine does not return */
      FUN_00127d24(
                  "__cxa_guard_acquire detected recursive initialization: do you have a function-local static variable whose initialization depends on that function?"
                  );
    }
    while( true ) {
      uVar6 = (undefined4)unaff_x21;
      bVar2 = param_1[1];
      if ((bVar2 >> 1 & 1) == 0) break;
      param_1[1] = bVar2 | 4;
                    /* try { // try from 001273dc to 001273e7 has its CatchHandler @ 0012747c */
      pthread_cond_wait((pthread_cond_t *)&DAT_001555a0,(pthread_mutex_t *)&DAT_00155578);
    }
    if (bVar2 != 1) {
      if ((bVar1 >> 1 & 1) == 0) {
                    /* try { // try from 001273f8 to 001273ff has its CatchHandler @ 00127474 */
        lVar5 = syscall(0xb2);
        uVar6 = (undefined4)lVar5;
      }
      *(undefined4 *)(param_1 + 4) = uVar6;
      param_1[1] = '\x02';
    }
    iVar4 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00155578);
    if (iVar4 != 0) {
                    /* try { // try from 00127454 to 00127467 has its CatchHandler @ 00127478 */
                    /* WARNING: Subroutine does not return */
      FUN_00127d24("%s failed to release mutex","__cxa_guard_acquire");
    }
    bVar3 = bVar2 != 1;
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}


// ===== 00127490  __cxa_guard_release =====

void __cxa_guard_release(undefined4 *param_1)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  
  *param_1 = 1;
  iVar2 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00155578);
  if (iVar2 == 0) {
    bVar1 = *(byte *)((long)param_1 + 1);
    *(undefined1 *)((long)param_1 + 1) = 1;
                    /* try { // try from 001274c8 to 001274d3 has its CatchHandler @ 00127534 */
    iVar2 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00155578);
    if (iVar2 != 0) {
                    /* try { // try from 0012750c to 0012751f has its CatchHandler @ 00127534 */
                    /* WARNING: Subroutine does not return */
      FUN_00127d24("%s failed to release mutex","__cxa_guard_release");
    }
    if (((bVar1 >> 2 & 1) == 0) ||
       (iVar2 = pthread_cond_broadcast((pthread_cond_t *)&DAT_001555a0), iVar2 == 0)) {
      return;
    }
    pcVar3 = "%s failed to broadcast";
  }
  else {
    pcVar3 = "%s failed to acquire mutex";
  }
                    /* WARNING: Subroutine does not return */
  FUN_00127d24(pcVar3,"__cxa_guard_release");
}


// ===== 00127538  __cxa_guard_abort =====

void __cxa_guard_abort(long param_1)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00155578);
  if (iVar2 == 0) {
    bVar1 = *(byte *)(param_1 + 1);
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined1 *)(param_1 + 1) = 0;
                    /* try { // try from 00127568 to 00127573 has its CatchHandler @ 001275d0 */
    iVar2 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00155578);
    if (iVar2 != 0) {
                    /* try { // try from 001275a8 to 001275bb has its CatchHandler @ 001275d0 */
                    /* WARNING: Subroutine does not return */
      FUN_00127d24("%s failed to release mutex","__cxa_guard_abort");
    }
    if (((bVar1 >> 2 & 1) == 0) ||
       (iVar2 = pthread_cond_broadcast((pthread_cond_t *)&DAT_001555a0), iVar2 == 0)) {
      return;
    }
    pcVar3 = "%s failed to broadcast";
  }
  else {
    pcVar3 = "%s failed to acquire mutex";
  }
                    /* WARNING: Subroutine does not return */
  FUN_00127d24(pcVar3,"__cxa_guard_abort");
}


// ===== 001275d4  FUN_001275d4 =====

void FUN_001275d4(undefined8 *param_1)

{
  int iVar1;
  
                    /* try { // try from 001275e8 to 00127617 has its CatchHandler @ 00127618 */
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00155578);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00127d24("%s failed to release mutex",*param_1);
}


// ===== 0012761c  std::get_unexpected =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::get_unexpected() */

undefined8 std::get_unexpected(void)

{
  return *(undefined8 *)PTR___cxa_unexpected_handler_00150db0;
}


// ===== 00127630  std::terminate =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::terminate() */

void std::terminate(void)

{
  long *plVar1;
  ulong uVar2;
  long unaff_x19;
  
                    /* try { // try from 00127638 to 0012765f has its CatchHandler @ 0012766c */
  plVar1 = (long *)__cxa_get_globals_fast();
  if ((plVar1 != (long *)0x0) && (unaff_x19 = *plVar1, unaff_x19 != 0)) goto LAB_00127658;
  do {
    FUN_001276bc(*(undefined8 *)PTR___cxa_terminate_handler_00150db8);
LAB_00127658:
    uVar2 = FUN_00142314(unaff_x19 + 0x60);
  } while ((uVar2 & 1) == 0);
  FUN_001276bc(*(undefined8 *)(unaff_x19 + 0x28));
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00127638 with catch @ 0012766c
                        */
  FUN_0012677c();
}


// ===== 00127670  FUN_00127670 =====

void FUN_00127670(code *param_1)

{
  (*param_1)();
                    /* WARNING: Subroutine does not return */
  FUN_00127d24("unexpected_handler unexpectedly returned");
}


// ===== 0012768c  std::unexpected =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::unexpected() */

undefined8 std::unexpected(void)

{
  FUN_00127670(*(undefined8 *)PTR___cxa_unexpected_handler_00150db0);
  return *(undefined8 *)PTR___cxa_terminate_handler_00150db8;
}


// ===== 001276a8  std::get_terminate =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::get_terminate() */

undefined8 std::get_terminate(void)

{
  return *(undefined8 *)PTR___cxa_terminate_handler_00150db8;
}


// ===== 001276bc  FUN_001276bc =====

void FUN_001276bc(code *param_1)

{
                    /* try { // try from 001276c8 to 001276d7 has its CatchHandler @ 001276d8 */
  (*param_1)();
                    /* WARNING: Subroutine does not return */
  FUN_00127d24("terminate_handler unexpectedly returned");
}


// ===== 001276ec  std::get_new_handler =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::get_new_handler() */

undefined8 std::get_new_handler(void)

{
  return *(undefined8 *)PTR___cxa_new_handler_00150dc0;
}


// ===== 00127700  FUN_00127700 =====

void FUN_00127700(void)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *local_18;
  
  plVar2 = (long *)__cxa_get_globals_fast();
  if ((plVar2 == (long *)0x0) || (lVar6 = *plVar2, lVar6 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00127d24("terminating");
  }
  uVar3 = FUN_00142314(lVar6 + 0x60);
  if ((uVar3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00127d24("terminating due to %s foreign exception",PTR_s_uncaught_001554f0);
  }
  lVar4 = FUN_00142308(lVar6 + 0x60);
  if (lVar4 == 0x434c4e47432b2b01) {
    local_18 = *(long **)(lVar6 + 8);
  }
  else {
    local_18 = (long *)(lVar6 + 0x80);
  }
  lVar7 = *(long *)(lVar6 + 0x10);
  lVar6 = *(long *)(lVar7 + 8);
  lVar4 = __cxa_demangle(lVar6,0,0,0);
  if (lVar4 != 0) {
    lVar6 = lVar4;
  }
                    /* try { // try from 001277c8 to 001277d7 has its CatchHandler @ 00127830 */
  uVar3 = (**(code **)(*(long *)PTR_PTR_00150d68 + 0x20))(PTR_PTR_00150d68,lVar7,&local_18);
  puVar1 = PTR_s_uncaught_001554f0;
  if ((uVar3 & 1) != 0) {
    uVar5 = (**(code **)(*local_18 + 0x10))();
                    /* try { // try from 001277f8 to 0012780b has its CatchHandler @ 00127824 */
                    /* WARNING: Subroutine does not return */
    FUN_00127d24("terminating due to %s exception of type %s: %s",puVar1,lVar6,uVar5);
  }
                    /* try { // try from 00127814 to 00127823 has its CatchHandler @ 00127830 */
                    /* WARNING: Subroutine does not return */
  FUN_00127d24("terminating due to %s exception of type %s",PTR_s_uncaught_001554f0,lVar6);
}


// ===== 0012784c  FUN_0012784c =====

void FUN_0012784c(void)

{
  PTR_s_uncaught_001554f0 = s_unexpected_0011312e;
                    /* WARNING: Subroutine does not return */
  std::terminate();
}


// ===== 0012786c  std::set_unexpected =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::set_unexpected(void (*)()) */

void std::set_unexpected(_func_void *param_1)

{
  code *pcVar1;
  
  pcVar1 = FUN_0012784c;
  if (param_1 != (_func_void *)0x0) {
    pcVar1 = param_1;
  }
  FUN_001444c0(pcVar1,PTR___cxa_unexpected_handler_00150db0);
  return;
}


// ===== 001278a0  std::set_terminate =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::set_terminate(void (*)()) */

void std::set_terminate(_func_void *param_1)

{
  code *pcVar1;
  
  pcVar1 = FUN_00127700;
  if (param_1 != (_func_void *)0x0) {
    pcVar1 = param_1;
  }
  FUN_001444c0(pcVar1,PTR___cxa_terminate_handler_00150db8);
  return;
}


// ===== 001278d4  std::set_new_handler =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::set_new_handler(void (*)()) */

void std::set_new_handler(_func_void *param_1)

{
  FUN_001444c0(param_1,PTR___cxa_new_handler_00150dc0);
  return;
}


// ===== 001278f8  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00127900  FUN_00127900 =====

void FUN_00127900(void)

{
  return;
}


// ===== 00127908  __cxa_get_globals =====

void __cxa_get_globals(void)

{
  __emutls_get_address(&DAT_001554f8);
  return;
}


// ===== 0012792c  __cxa_get_globals_fast =====

void __cxa_get_globals_fast(void)

{
  __emutls_get_address(&DAT_001554f8);
  return;
}


// ===== 00127950  __cxa_pure_virtual =====

void __cxa_pure_virtual(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00127d24("Pure virtual function called!");
}


// ===== 00127968  __cxa_deleted_virtual =====

void __cxa_deleted_virtual(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_00127d24("Deleted virtual function called!");
}


// ===== 00127980  std::bad_array_new_length::~bad_array_new_length =====

/* std::bad_array_new_length::~bad_array_new_length() */

void __thiscall std::bad_array_new_length::~bad_array_new_length(bad_array_new_length *this)

{
  return;
}


// ===== 00127988  std::exception::~exception =====

/* std::exception::~exception() */

void __thiscall std::exception::~exception(exception *this)

{
  bad_array_new_length::~bad_array_new_length((bad_array_new_length *)this);
  operator_delete(this);
  return;
}


// ===== 001279b4  std::exception::what =====

/* std::exception::what() const */

char * std::exception::what(void)

{
  return "std::exception";
}


// ===== 001279c4  std::bad_exception::~bad_exception =====

/* std::bad_exception::~bad_exception() */

void __thiscall std::bad_exception::~bad_exception(bad_exception *this)

{
  bad_array_new_length::~bad_array_new_length((bad_array_new_length *)this);
  operator_delete(this);
  return;
}


// ===== 001279f0  std::bad_exception::what =====

/* std::bad_exception::what() const */

char * std::bad_exception::what(void)

{
  return "std::bad_exception";
}


// ===== 00127a00  std::bad_alloc::bad_alloc =====

/* std::bad_alloc::bad_alloc() */

void __thiscall std::bad_alloc::bad_alloc(bad_alloc *this)

{
  *(undefined **)this = PTR_vtable_00150dd0 + 0x10;
  return;
}


// ===== 00127a18  std::bad_alloc::~bad_alloc =====

/* std::bad_alloc::~bad_alloc() */

void __thiscall std::bad_alloc::~bad_alloc(bad_alloc *this)

{
  bad_array_new_length::~bad_array_new_length((bad_array_new_length *)this);
  operator_delete(this);
  return;
}


// ===== 00127a44  std::bad_alloc::what =====

/* std::bad_alloc::what() const */

char * std::bad_alloc::what(void)

{
  return "std::bad_alloc";
}


// ===== 00127a54  std::bad_array_new_length::bad_array_new_length =====

/* std::bad_array_new_length::bad_array_new_length() */

void __thiscall std::bad_array_new_length::bad_array_new_length(bad_array_new_length *this)

{
  *(undefined **)this = PTR_vtable_00150de0 + 0x10;
  return;
}


// ===== 00127a6c  std::bad_array_new_length::~bad_array_new_length =====

/* std::bad_array_new_length::~bad_array_new_length() */

void __thiscall std::bad_array_new_length::~bad_array_new_length(bad_array_new_length *this)

{
  ~bad_array_new_length(this);
  operator_delete(this);
  return;
}


// ===== 00127a98  std::bad_array_new_length::what =====

/* std::bad_array_new_length::what() const */

char * std::bad_array_new_length::what(void)

{
  return "bad_array_new_length";
}


// ===== 00127aa8  std::out_of_range::~out_of_range =====

/* std::out_of_range::~out_of_range() */

void __thiscall std::out_of_range::~out_of_range(out_of_range *this)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 8);
  *(undefined **)this = PTR_vtable_00150da0 + 0x10;
  iVar1 = FUN_001444f0(0xffffffff,lVar2 + -8);
  if (-1 < iVar1 + -1) {
    bad_array_new_length::~bad_array_new_length((bad_array_new_length *)this);
    return;
  }
  operator_delete((void *)(lVar2 + -0x18));
  bad_array_new_length::~bad_array_new_length((bad_array_new_length *)this);
  return;
}


// ===== 00127b14  std::logic_error::~logic_error =====

/* std::logic_error::~logic_error() */

void __thiscall std::logic_error::~logic_error(logic_error *this)

{
  out_of_range::~out_of_range((out_of_range *)this);
  operator_delete(this);
  return;
}


// ===== 00127b40  std::logic_error::what =====

/* std::logic_error::what() const */

undefined8 __thiscall std::logic_error::what(logic_error *this)

{
  return *(undefined8 *)(this + 8);
}


// ===== 00127b4c  std::runtime_error::~runtime_error =====

/* std::runtime_error::~runtime_error() */

void __thiscall std::runtime_error::~runtime_error(runtime_error *this)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 8);
  *(undefined **)this = PTR_vtable_00150da8 + 0x10;
  iVar1 = FUN_001444f0(0xffffffff,lVar2 + -8);
  if (-1 < iVar1 + -1) {
    bad_array_new_length::~bad_array_new_length((bad_array_new_length *)this);
    return;
  }
  operator_delete((void *)(lVar2 + -0x18));
  bad_array_new_length::~bad_array_new_length((bad_array_new_length *)this);
  return;
}


// ===== 00127bb8  std::runtime_error::~runtime_error =====

/* std::runtime_error::~runtime_error() */

void __thiscall std::runtime_error::~runtime_error(runtime_error *this)

{
  ~runtime_error(this);
  operator_delete(this);
  return;
}


// ===== 00127be4  std::runtime_error::what =====

/* std::runtime_error::what() const */

undefined8 __thiscall std::runtime_error::what(runtime_error *this)

{
  return *(undefined8 *)(this + 8);
}


// ===== 00127bf0  std::domain_error::~domain_error =====

/* std::domain_error::~domain_error() */

void __thiscall std::domain_error::~domain_error(domain_error *this)

{
  out_of_range::~out_of_range((out_of_range *)this);
  operator_delete(this);
  return;
}


// ===== 00127c1c  std::invalid_argument::~invalid_argument =====

/* std::invalid_argument::~invalid_argument() */

void __thiscall std::invalid_argument::~invalid_argument(invalid_argument *this)

{
  out_of_range::~out_of_range((out_of_range *)this);
  operator_delete(this);
  return;
}


// ===== 00127c48  std::length_error::~length_error =====

/* std::length_error::~length_error() */

void __thiscall std::length_error::~length_error(length_error *this)

{
  out_of_range::~out_of_range((out_of_range *)this);
  operator_delete(this);
  return;
}


// ===== 00127c74  std::out_of_range::~out_of_range =====

/* std::out_of_range::~out_of_range() */

void __thiscall std::out_of_range::~out_of_range(out_of_range *this)

{
  ~out_of_range(this);
  operator_delete(this);
  return;
}


// ===== 00127ca0  std::range_error::~range_error =====

/* std::range_error::~range_error() */

void __thiscall std::range_error::~range_error(range_error *this)

{
  runtime_error::~runtime_error((runtime_error *)this);
  operator_delete(this);
  return;
}


// ===== 00127ccc  std::overflow_error::~overflow_error =====

/* std::overflow_error::~overflow_error() */

void __thiscall std::overflow_error::~overflow_error(overflow_error *this)

{
  runtime_error::~runtime_error((runtime_error *)this);
  operator_delete(this);
  return;
}


// ===== 00127cf8  std::underflow_error::~underflow_error =====

/* std::underflow_error::~underflow_error() */

void __thiscall std::underflow_error::~underflow_error(underflow_error *this)

{
  runtime_error::~runtime_error((runtime_error *)this);
  operator_delete(this);
  return;
}


// ===== 00127d24  FUN_00127d24 =====

void FUN_00127d24(char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined1 auStack_f0 [8];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined1 *local_b0;
  undefined1 **ppuStack_a8;
  undefined1 *puStack_a0;
  undefined8 uStack_98;
  undefined1 *local_90;
  undefined1 **ppuStack_88;
  undefined1 *puStack_80;
  undefined8 uStack_78;
  char *local_38;
  
  puVar1 = PTR___sF_00150d60;
  local_e8 = param_2;
  uStack_e0 = param_3;
  local_d8 = param_4;
  uStack_d0 = param_5;
  local_c8 = param_6;
  uStack_c0 = param_7;
  local_b8 = param_8;
  fwrite("libc++abi: ",0xb,1,(FILE *)(PTR___sF_00150d60 + 0x130));
  uStack_78 = 0xffffff80ffffffc8;
  local_90 = (undefined1 *)register0x00000008;
  ppuStack_88 = &local_b0;
  puStack_80 = auStack_f0;
  vfprintf((FILE *)(puVar1 + 0x130),param_1,&local_90);
  fputc(10,(FILE *)(puVar1 + 0x130));
  uStack_98 = 0xffffff80ffffffc8;
  local_b0 = (undefined1 *)register0x00000008;
  ppuStack_a8 = &local_b0;
  puStack_a0 = auStack_f0;
  vasprintf(&local_38,param_1,&local_b0);
  android_set_abort_message(local_38);
  openlog("libc++abi",0,0);
  syslog(2,"%s",local_38);
  closelog();
                    /* WARNING: Subroutine does not return */
  abort();
}


// ===== 00127e28  std::type_info::~type_info =====

void __thiscall std::type_info::~type_info(type_info *this)

{
  ~type_info(this);
  return;
}


// ===== 00127e30  FUN_00127e30 =====

void FUN_00127e30(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x127e38);
  (*pcVar1)();
}


// ===== 00127e38  FUN_00127e38 =====

void FUN_00127e38(void)

{
  return;
}


// ===== 00127e40  FUN_00127e40 =====

void FUN_00127e40(void)

{
  return;
}


// ===== 00127e48  FUN_00127e48 =====

void FUN_00127e48(type_info *param_1)

{
  std::type_info::~type_info(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00127e74  FUN_00127e74 =====

void FUN_00127e74(type_info *param_1)

{
  std::type_info::~type_info(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00127ea0  FUN_00127ea0 =====

void FUN_00127ea0(type_info *param_1)

{
  std::type_info::~type_info(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00127ecc  FUN_00127ecc =====

void FUN_00127ecc(type_info *param_1)

{
  std::type_info::~type_info(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00127ef8  FUN_00127ef8 =====

void FUN_00127ef8(type_info *param_1)

{
  std::type_info::~type_info(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00127f24  FUN_00127f24 =====

void FUN_00127f24(type_info *param_1)

{
  std::type_info::~type_info(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00127f50  FUN_00127f50 =====

void FUN_00127f50(type_info *param_1)

{
  std::type_info::~type_info(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00127f7c  FUN_00127f7c =====

void FUN_00127f7c(type_info *param_1)

{
  std::type_info::~type_info(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00127fa8  FUN_00127fa8 =====

void FUN_00127fa8(type_info *param_1)

{
  std::type_info::~type_info(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00127fd4  FUN_00127fd4 =====

void FUN_00127fd4(type_info *param_1)

{
  std::type_info::~type_info(param_1);
  operator_delete(param_1);
  return;
}


// ===== 00128000  FUN_00128000 =====

bool FUN_00128000(long param_1,long param_2)

{
  return *(long *)(param_1 + 8) == *(long *)(param_2 + 8);
}


// ===== 00128018  FUN_00128018 =====

undefined8 FUN_00128018(void)

{
  return 0;
}


// ===== 00128024  FUN_00128024 =====

undefined8 FUN_00128024(void)

{
  return 0;
}


// ===== 00128030  FUN_00128030 =====

bool FUN_00128030(long param_1,long param_2)

{
  return *(long *)(param_1 + 8) == *(long *)(param_2 + 8);
}


// ===== 00128048  FUN_00128048 =====

long * FUN_00128048(long param_1,long param_2,undefined8 *param_3)

{
  long *local_70;
  undefined8 uStack_68;
  long local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined7 uStack_38;
  undefined1 local_31;
  undefined7 uStack_30;
  undefined8 uStack_29;
  
  if (*(long *)(param_1 + 8) != *(long *)(param_2 + 8)) {
    local_70 = (long *)__dynamic_cast(param_2,PTR_PTR_00150e10,PTR_PTR_00150e18,0);
    if (local_70 != (long *)0x0) {
      uStack_68 = 0;
      uStack_58 = 0xffffffffffffffff;
      uStack_30 = 0;
      uStack_48 = 0;
      local_50 = 0;
      uStack_38 = 0;
      local_31 = 0;
      local_40 = 0;
      uStack_29 = 0x100;
      local_60 = param_1;
      (**(code **)(*local_70 + 0x38))(local_70,&local_70,*param_3,1);
      local_70 = (long *)(ulong)((int)local_40 == 1);
      if ((int)local_40 == 1) {
        *param_3 = local_50;
      }
    }
    return local_70;
  }
  return (long *)0x1;
}


// ===== 00128108  __dynamic_cast =====

long __dynamic_cast(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long *local_90;
  long *plStack_88;
  long *local_80;
  long lStack_78;
  long local_70;
  long lStack_68;
  undefined8 local_60;
  int local_58;
  int local_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined2 uStack_44;
  undefined1 uStack_42;
  
  lVar3 = *(long *)(*param_1 + -0x10);
  plVar1 = *(long **)(*param_1 + -8);
  lVar4 = (long)param_1 + lVar3;
  lStack_78 = param_4;
  if (plVar1[1] == param_3[1]) {
    if (param_4 < 0) {
      if (param_4 == -2) goto LAB_00128274;
      iStack_50 = 0;
      uStack_4c = 0;
      uStack_48 = 1;
      uStack_44 = 0;
      uStack_42 = 0;
      lStack_68 = 0;
      local_70 = 0;
      local_58 = 0;
      local_54 = 0;
      local_60 = 0;
      local_90 = param_3;
      plStack_88 = param_1;
      local_80 = (long *)param_2;
      (**(code **)(*param_3 + 0x28))(param_3,&local_90,lVar4,lVar4,1,0);
      bVar2 = (int)local_60 == 1;
    }
    else {
      bVar2 = param_4 + lVar3 == 0;
    }
    if (!bVar2) {
      lVar4 = 0;
    }
  }
  else {
    if ((-1 < param_4) && (lVar3 = (long)param_1 - param_4, lVar4 <= lVar3)) {
      iStack_50 = 0;
      uStack_4c = 0;
      uStack_48 = 1;
      lStack_68 = 0;
      local_70 = 0;
      local_58 = 0;
      local_54 = 0;
      local_60 = 0;
      uStack_44 = 0;
      uStack_42 = 0;
      local_90 = plVar1;
      plStack_88 = (long *)lVar3;
      local_80 = param_3;
      (**(code **)(*plVar1 + 0x28))(plVar1,&local_90,lVar4,lVar4,1,0);
      if ((int)local_60 != 0) {
        return lVar3;
      }
    }
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_42 = 0;
    iStack_50 = 0;
    uStack_4c = 0;
    lStack_68 = 0;
    local_70 = 0;
    local_58 = 0;
    local_54 = 0;
    local_60 = 0;
    local_90 = param_3;
    plStack_88 = param_1;
    local_80 = (long *)param_2;
    lStack_78 = param_4;
    (**(code **)(*plVar1 + 0x30))(plVar1,&local_90,lVar4,1,0);
    if (local_54 == 1) {
      if ((int)local_60 != 1) {
        if (iStack_50 != 0) {
          return 0;
        }
        if (local_60._4_4_ != 1) {
          return 0;
        }
        if (local_58 != 1) {
          return 0;
        }
      }
      return local_70;
    }
    if (local_54 == 0) {
      if ((local_58 == 1 && local_60._4_4_ == 1) && iStack_50 == 1) {
        return lStack_68;
      }
      return 0;
    }
LAB_00128274:
    lVar4 = 0;
  }
  return lVar4;
}


// ===== 001282f0  FUN_001282f0 =====

void FUN_001282f0(long param_1,long param_2,long param_3,undefined4 param_4)

{
  if (*(long *)(param_1 + 8) == *(long *)(*(long *)(param_2 + 0x10) + 8)) {
    if (*(long *)(param_2 + 0x20) == 0) {
      *(long *)(param_2 + 0x20) = param_3;
      *(undefined4 *)(param_2 + 0x30) = param_4;
      *(undefined4 *)(param_2 + 0x3c) = 1;
      return;
    }
    if (*(long *)(param_2 + 0x20) != param_3) {
      *(undefined4 *)(param_2 + 0x30) = 2;
      *(undefined1 *)(param_2 + 0x4e) = 1;
      *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + 1;
      return;
    }
    if (*(int *)(param_2 + 0x30) == 2) {
      *(undefined4 *)(param_2 + 0x30) = param_4;
      return;
    }
  }
  return;
}


// ===== 00128364  FUN_00128364 =====

void FUN_00128364(long param_1,long param_2,long param_3,undefined4 param_4)

{
  if (*(long *)(param_1 + 8) != *(long *)(*(long *)(param_2 + 0x10) + 8)) {
                    /* WARNING: Could not recover jumptable at 0x00128388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x10) + 0x38))();
    return;
  }
  if (*(long *)(param_2 + 0x20) != 0) {
    if (*(long *)(param_2 + 0x20) == param_3) {
      if (*(int *)(param_2 + 0x30) == 2) {
        *(undefined4 *)(param_2 + 0x30) = param_4;
        return;
      }
    }
    else {
      *(undefined4 *)(param_2 + 0x30) = 2;
      *(undefined1 *)(param_2 + 0x4e) = 1;
      *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + 1;
    }
    return;
  }
  *(long *)(param_2 + 0x20) = param_3;
  *(undefined4 *)(param_2 + 0x30) = param_4;
  *(undefined4 *)(param_2 + 0x3c) = 1;
  return;
}


// ===== 001283e4  FUN_001283e4 =====

void FUN_001283e4(long param_1,long param_2,long *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (*(long *)(param_1 + 8) == *(long *)(*(long *)(param_2 + 0x10) + 8)) {
    if (*(long **)(param_2 + 0x20) == (long *)0x0) {
      *(long **)(param_2 + 0x20) = param_3;
      *(undefined4 *)(param_2 + 0x30) = param_4;
      *(undefined4 *)(param_2 + 0x3c) = 1;
      return;
    }
    if (*(long **)(param_2 + 0x20) == param_3) {
      if (*(int *)(param_2 + 0x30) == 2) {
        *(undefined4 *)(param_2 + 0x30) = param_4;
        return;
      }
    }
    else {
      *(undefined4 *)(param_2 + 0x30) = 2;
      *(undefined1 *)(param_2 + 0x4e) = 1;
      *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + 1;
    }
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x14);
    uVar4 = *(ulong *)(param_1 + 0x20);
    if (param_3 == (long *)0x0) {
      lVar5 = 0;
    }
    else {
      lVar5 = (long)uVar4 >> 8;
      if ((uVar4 & 1) != 0) {
        lVar5 = *(long *)(*param_3 + lVar5);
      }
    }
    uVar1 = 2;
    if ((uVar4 & 2) != 0) {
      uVar1 = param_4;
    }
    (**(code **)(**(long **)(param_1 + 0x18) + 0x38))
              (*(long **)(param_1 + 0x18),param_2,(long)param_3 + lVar5,uVar1);
    if (1 < uVar2) {
      uVar4 = param_1 + (ulong)uVar2 * 0x10 + 0x18;
      if (param_3 == (long *)0x0) {
        uVar7 = param_1 + 0x38;
        do {
          uVar1 = 2;
          if ((*(ulong *)(uVar7 - 8) & 2) != 0) {
            uVar1 = param_4;
          }
          (**(code **)(**(long **)(uVar7 - 0x10) + 0x38))(*(long **)(uVar7 - 0x10),param_2,0,uVar1);
        } while ((*(char *)(param_2 + 0x4e) == '\0') &&
                (bVar3 = uVar7 < uVar4, uVar7 = uVar7 + 0x10, bVar3));
      }
      else {
        uVar7 = param_1 + 0x38;
        do {
          uVar6 = *(ulong *)(uVar7 - 8);
          lVar5 = (long)uVar6 >> 8;
          if ((uVar6 & 1) != 0) {
            lVar5 = *(long *)(*param_3 + lVar5);
          }
          uVar1 = 2;
          if ((uVar6 & 2) != 0) {
            uVar1 = param_4;
          }
          (**(code **)(**(long **)(uVar7 - 0x10) + 0x38))
                    (*(long **)(uVar7 - 0x10),param_2,(long)param_3 + lVar5,uVar1);
        } while ((*(char *)(param_2 + 0x4e) == '\0') &&
                (bVar3 = uVar7 < uVar4, uVar7 = uVar7 + 0x10, bVar3));
      }
    }
  }
  return;
}


// ===== 001285a4  FUN_001285a4 =====

bool FUN_001285a4(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x10) & 0x18) == 0) {
    if (param_2 == 0) {
      return false;
    }
    lVar2 = __dynamic_cast(param_2,PTR_PTR_00150e10,PTR_PTR_00150e20,0);
    if (lVar2 == 0) {
      return false;
    }
    if ((*(byte *)(lVar2 + 0x10) & 0x18) == 0) {
      return *(long *)(param_1 + 8) == *(long *)(param_2 + 8);
    }
  }
  if (param_1 != param_2) {
    iVar1 = strcmp(*(char **)(param_1 + 8),*(char **)(param_2 + 8));
    return iVar1 == 0;
  }
  return true;
}


// ===== 00128668  FUN_00128668 =====

/* WARNING: Type propagation algorithm not settling */

ulong FUN_00128668(long param_1,long param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  char *__s2;
  long lVar9;
  long *local_90;
  undefined8 uStack_88;
  long local_80;
  undefined8 uStack_78;
  long local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined7 uStack_58;
  undefined1 local_51;
  undefined7 uStack_50;
  undefined8 uStack_49;
  
  __s2 = *(char **)(param_2 + 8);
  if (__s2 == PTR_typeinfo_name_00150e28) {
    *param_3 = 0;
    return 1;
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 0x18) == 0) {
    lVar5 = __dynamic_cast(param_2,PTR_PTR_00150e10,PTR_PTR_00150e20,0);
    if (lVar5 == 0) goto LAB_00128724;
    if ((*(byte *)(lVar5 + 0x10) & 0x18) == 0) {
      if (*(char **)(param_1 + 8) != __s2) goto LAB_00128724;
      goto LAB_001286c8;
    }
  }
  if ((param_1 == param_2) || (iVar4 = strcmp(*(char **)(param_1 + 8),__s2), iVar4 == 0)) {
LAB_001286c8:
    if ((long *)*param_3 == (long *)0x0) {
      return 1;
    }
    *param_3 = *(long *)*param_3;
    return 1;
  }
LAB_00128724:
  lVar5 = __dynamic_cast(param_2,PTR_PTR_00150e10,PTR_PTR_00150e30,0);
  if (lVar5 == 0) {
    return 0;
  }
  if ((long *)*param_3 == (long *)0x0) {
    lVar8 = 0;
    uVar3 = *(uint *)(lVar5 + 0x10);
    uVar1 = uVar3 & (uVar2 ^ 0xffffffff);
  }
  else {
    lVar8 = *(long *)*param_3;
    *param_3 = lVar8;
    uVar3 = *(uint *)(lVar5 + 0x10);
    uVar1 = uVar3 & (uVar2 ^ 0xffffffff);
  }
  if (((uVar1 & 7) == 0) && ((uVar2 & (uVar3 ^ 0xffffffff) & 0x60) == 0)) {
    lVar9 = *(long *)(param_1 + 0x18);
    lVar5 = *(long *)(lVar5 + 0x18);
    if (*(undefined **)(lVar9 + 8) == *(undefined **)(lVar5 + 8)) {
      return 1;
    }
    if (*(undefined **)(lVar9 + 8) == PTR_typeinfo_name_00150e38) {
      lVar5 = __dynamic_cast(lVar5,PTR_PTR_00150e10,PTR_PTR_00150e40,0);
      return (ulong)(lVar5 == 0);
    }
    lVar6 = __dynamic_cast(lVar9,PTR_PTR_00150e10,PTR_PTR_00150e30,0);
    if (lVar6 == 0) {
      lVar6 = __dynamic_cast(lVar9,PTR_PTR_00150e10,PTR_PTR_00150e48,0);
      if (lVar6 == 0) {
        local_80 = __dynamic_cast(lVar9,PTR_PTR_00150e10,PTR_PTR_00150e18,0);
        if (local_80 == 0) {
          return 0;
        }
        local_90 = (long *)__dynamic_cast(lVar5,PTR_PTR_00150e10,PTR_PTR_00150e18,0);
        if (local_90 == (long *)0x0) {
          return 0;
        }
        uStack_88 = 0;
        uStack_50 = 0;
        uStack_68 = 0;
        local_70 = 0;
        uStack_58 = 0;
        local_51 = 0;
        local_60 = 0;
        uStack_49 = 0x100;
        uStack_78 = 0xffffffffffffffff;
        (**(code **)(*local_90 + 0x38))(local_90,&local_90,lVar8,1);
        uVar7 = (ulong)((int)local_60 == 1);
        if ((int)local_60 != 1) {
          return uVar7;
        }
        if (*param_3 != 0) {
          *param_3 = local_70;
          return uVar7;
        }
        return uVar7;
      }
      if ((uVar2 & 1) != 0) {
        uVar7 = FUN_00128a44(lVar6,lVar5);
        return uVar7;
      }
    }
    else if ((uVar2 & 1) != 0) {
      uVar7 = FUN_00128920(lVar6,lVar5);
      return uVar7;
    }
  }
  return 0;
}


// ===== 00128920  FUN_00128920 =====

undefined8 FUN_00128920(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar2 = PTR_PTR_00150e30;
  puVar1 = PTR_PTR_00150e10;
  while( true ) {
    if (param_2 == 0) {
      return 0;
    }
    lVar3 = __dynamic_cast(param_2,puVar1,puVar2,0);
    if (lVar3 == 0) {
      return 0;
    }
    if ((*(uint *)(lVar3 + 0x10) & (*(uint *)(param_1 + 0x10) ^ 0xffffffff)) != 0) {
      return 0;
    }
    lVar5 = *(long *)(param_1 + 0x18);
    param_2 = *(long *)(lVar3 + 0x18);
    if (*(long *)(lVar5 + 8) == *(long *)(param_2 + 8)) break;
    if ((*(uint *)(param_1 + 0x10) & 1) == 0) {
      return 0;
    }
    param_1 = __dynamic_cast(lVar5,puVar1,puVar2,0);
    if (param_1 == 0) {
      lVar3 = __dynamic_cast(lVar5,PTR_PTR_00150e10,PTR_PTR_00150e48,0);
      if (lVar3 == 0) {
        return 0;
      }
      uVar4 = FUN_00128a44(lVar3,param_2);
      return uVar4;
    }
  }
  return 1;
}


// ===== 00128a44  FUN_00128a44 =====

ulong FUN_00128a44(long param_1,long param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar1 = __dynamic_cast(param_2,PTR_PTR_00150e10,PTR_PTR_00150e48,0);
  if (uVar1 != 0) {
    if ((*(uint *)(uVar1 + 0x10) & (*(uint *)(param_1 + 0x10) ^ 0xffffffff)) == 0) {
      if (*(long *)(*(long *)(param_1 + 0x18) + 8) != *(long *)(*(long *)(uVar1 + 0x18) + 8)) {
        return 0;
      }
      return (ulong)(*(long *)(*(long *)(param_1 + 0x20) + 8) ==
                    *(long *)(*(long *)(uVar1 + 0x20) + 8));
    }
    uVar1 = 0;
  }
  return uVar1;
}


// ===== 00128b04  FUN_00128b04 =====

bool FUN_00128b04(long param_1,long param_2,undefined8 *param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  char *__s2;
  
  __s2 = *(char **)(param_2 + 8);
  if (__s2 == PTR_typeinfo_name_00150e28) {
    if ((*(long *)(param_1 + 0x18) == 0) ||
       (lVar3 = __dynamic_cast(*(long *)(param_1 + 0x18),PTR_PTR_00150e10,PTR_PTR_00150e40,0),
       lVar3 == 0)) {
      puVar4 = &DAT_00114358;
    }
    else {
      puVar4 = &DAT_00114348;
    }
    *param_3 = puVar4;
    return true;
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0x18) == 0) {
    lVar3 = __dynamic_cast(param_2,PTR_PTR_00150e10,PTR_PTR_00150e20,0);
    if (lVar3 == 0) goto LAB_00128bd4;
    if ((*(byte *)(lVar3 + 0x10) & 0x18) == 0) {
      if (*(char **)(param_1 + 8) == __s2) {
        return true;
      }
      goto LAB_00128bd4;
    }
  }
  if (param_1 == param_2) {
    return true;
  }
  iVar2 = strcmp(*(char **)(param_1 + 8),__s2);
  if (iVar2 == 0) {
    return true;
  }
LAB_00128bd4:
  lVar3 = __dynamic_cast(param_2,PTR_PTR_00150e10,PTR_PTR_00150e48,0);
  if (lVar3 == 0) {
    return false;
  }
  if ((((*(uint *)(lVar3 + 0x10) & (uVar1 ^ 0xffffffff) & 7) == 0) &&
      ((uVar1 & (*(uint *)(lVar3 + 0x10) ^ 0xffffffff) & 0x60) == 0)) &&
     (*(long *)(*(long *)(param_1 + 0x18) + 8) == *(long *)(*(long *)(lVar3 + 0x18) + 8))) {
    return *(long *)(*(long *)(param_1 + 0x20) + 8) == *(long *)(*(long *)(lVar3 + 0x20) + 8);
  }
  return false;
}


// ===== 00128ca4  FUN_00128ca4 =====

void FUN_00128ca4(long param_1,long *param_2,long *param_3,int param_4,uint param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  char *__s1;
  
  lVar7 = param_2[2];
  if ((param_5 & 1) == 0) {
    if (*(long *)(param_1 + 8) != *(long *)(lVar7 + 8)) {
      if (*(long *)(param_1 + 8) != *(long *)(*param_2 + 8)) {
LAB_00128d84:
        uVar8 = *(ulong *)(param_1 + 0x20);
        uVar2 = *(uint *)(param_1 + 0x14);
        lVar7 = (long)uVar8 >> 8;
        if ((uVar8 & 1) != 0) {
          lVar7 = *(long *)(*param_3 + lVar7);
        }
        iVar5 = 2;
        if ((uVar8 & 2) != 0) {
          iVar5 = param_4;
        }
        (**(code **)(**(long **)(param_1 + 0x18) + 0x30))
                  (*(long **)(param_1 + 0x18),param_2,(long)param_3 + lVar7,iVar5,param_5 & 1);
        if (uVar2 < 2) {
          return;
        }
        puVar10 = (undefined8 *)(param_1 + 0x28);
        puVar1 = (undefined8 *)(param_1 + (ulong)uVar2 * 0x10 + 0x18);
        if (((*(uint *)(param_1 + 0x10) >> 1 & 1) != 0) || (*(int *)((long)param_2 + 0x3c) == 1)) {
          do {
            if (*(char *)((long)param_2 + 0x4e) != '\0') {
              return;
            }
            uVar8 = puVar10[1];
            lVar7 = (long)uVar8 >> 8;
            if ((uVar8 & 1) != 0) {
              lVar7 = *(long *)(*param_3 + lVar7);
            }
            puVar9 = puVar10 + 2;
            iVar5 = 2;
            if ((uVar8 & 2) != 0) {
              iVar5 = param_4;
            }
            (**(code **)(*(long *)*puVar10 + 0x30))
                      ((long *)*puVar10,param_2,(long)param_3 + lVar7,iVar5,param_5 & 1);
            puVar10 = puVar9;
          } while (puVar9 < puVar1);
          return;
        }
        if ((*(uint *)(param_1 + 0x10) & 1) == 0) {
          while( true ) {
            if (*(char *)((long)param_2 + 0x4e) != '\0') {
              return;
            }
            if (*(int *)((long)param_2 + 0x3c) == 1) break;
            uVar8 = puVar10[1];
            lVar7 = (long)uVar8 >> 8;
            if ((uVar8 & 1) != 0) {
              lVar7 = *(long *)(*param_3 + lVar7);
            }
            puVar9 = puVar10 + 2;
            iVar5 = 2;
            if ((uVar8 & 2) != 0) {
              iVar5 = param_4;
            }
            (**(code **)(*(long *)*puVar10 + 0x30))
                      ((long *)*puVar10,param_2,(long)param_3 + lVar7,iVar5,param_5 & 1);
            puVar10 = puVar9;
            if (puVar1 <= puVar9) {
              return;
            }
          }
          return;
        }
        while( true ) {
          if (*(char *)((long)param_2 + 0x4e) != '\0') {
            return;
          }
          if ((*(int *)((long)param_2 + 0x3c) == 1) && ((int)param_2[6] == 1)) break;
          uVar8 = puVar10[1];
          lVar7 = (long)uVar8 >> 8;
          if ((uVar8 & 1) != 0) {
            lVar7 = *(long *)(*param_3 + lVar7);
          }
          puVar9 = puVar10 + 2;
          iVar5 = 2;
          if ((uVar8 & 2) != 0) {
            iVar5 = param_4;
          }
          (**(code **)(*(long *)*puVar10 + 0x30))
                    ((long *)*puVar10,param_2,(long)param_3 + lVar7,iVar5,param_5 & 1);
          puVar10 = puVar9;
          if (puVar1 <= puVar9) {
            return;
          }
        }
        return;
      }
LAB_00128d18:
      if (((long *)param_2[4] == param_3) || ((long *)param_2[5] == param_3)) {
        if (param_4 != 1) {
          return;
        }
        *(undefined4 *)(param_2 + 7) = 1;
        return;
      }
      *(int *)(param_2 + 7) = param_4;
      if (*(int *)((long)param_2 + 0x44) != 4) {
        uVar2 = *(uint *)(param_1 + 0x14);
        if (uVar2 == 0) {
          *(undefined4 *)((long)param_2 + 0x44) = 4;
        }
        else {
          bVar4 = false;
          bVar3 = false;
          puVar10 = (undefined8 *)(param_1 + 0x18);
          do {
            *(undefined2 *)((long)param_2 + 0x4c) = 0;
            uVar8 = puVar10[1];
            lVar7 = (long)uVar8 >> 8;
            if ((uVar8 & 1) != 0) {
              lVar7 = *(long *)(*param_3 + lVar7);
            }
            uVar6 = 1;
            if ((uVar8 & 2) == 0) {
              uVar6 = 2;
            }
            (**(code **)(*(long *)*puVar10 + 0x28))
                      ((long *)*puVar10,param_2,param_3,(long)param_3 + lVar7,uVar6,param_5 & 1);
            if (*(char *)((long)param_2 + 0x4e) != '\0') break;
            if (*(char *)((long)param_2 + 0x4d) != '\0') {
              if (*(char *)((long)param_2 + 0x4c) == '\0') {
                if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
                  *(undefined4 *)((long)param_2 + 0x44) = 3;
                  if (bVar4) {
                    return;
                  }
                  goto LAB_00128fec;
                }
                bVar3 = true;
              }
              else {
                if (((int)param_2[6] == 1) || ((*(byte *)(param_1 + 0x10) >> 1 & 1) == 0)) {
                  *(undefined4 *)((long)param_2 + 0x44) = 3;
                  return;
                }
                bVar3 = true;
                bVar4 = true;
              }
            }
            puVar10 = puVar10 + 2;
          } while (puVar10 < (undefined8 *)(param_1 + (ulong)uVar2 * 0x10 + 0x18));
          uVar6 = 3;
          if (!bVar3) {
            uVar6 = 4;
          }
          *(undefined4 *)((long)param_2 + 0x44) = uVar6;
          if (bVar4) {
            return;
          }
        }
      }
LAB_00128fec:
      param_2[5] = (long)param_3;
      *(int *)(param_2 + 8) = (int)param_2[8] + 1;
      if (*(int *)((long)param_2 + 0x3c) != 1) {
        return;
      }
      if ((int)param_2[6] != 2) {
        return;
      }
      *(undefined1 *)((long)param_2 + 0x4e) = 1;
      return;
    }
  }
  else if (lVar7 != param_1) {
    __s1 = *(char **)(param_1 + 8);
    iVar5 = strcmp(__s1,*(char **)(lVar7 + 8));
    if (iVar5 != 0) {
      if ((*param_2 != param_1) && (iVar5 = strcmp(__s1,*(char **)(*param_2 + 8)), iVar5 != 0))
      goto LAB_00128d84;
      goto LAB_00128d18;
    }
  }
  if (((long *)param_2[1] == param_3) && (*(int *)((long)param_2 + 0x34) != 1)) {
    *(int *)((long)param_2 + 0x34) = param_4;
  }
  return;
}


// ===== 00129054  FUN_00129054 =====

void FUN_00129054(long param_1,long *param_2,long param_3,ulong param_4,uint param_5)

{
  int iVar1;
  long lVar2;
  char *__s1;
  
  lVar2 = param_2[2];
  if ((param_5 & 1) == 0) {
    if (*(long *)(param_1 + 8) != *(long *)(lVar2 + 8)) {
      if (*(long *)(param_1 + 8) != *(long *)(*param_2 + 8)) {
LAB_00129154:
                    /* WARNING: Could not recover jumptable at 0x00129180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(long **)(param_1 + 0x10) + 0x30))
                  (*(long **)(param_1 + 0x10),param_2,param_3,param_4,param_5 & 1);
        return;
      }
LAB_001290c8:
      if ((param_2[4] == param_3) || (param_2[5] == param_3)) {
        if ((int)param_4 != 1) {
          return;
        }
        *(undefined4 *)(param_2 + 7) = 1;
        return;
      }
      *(int *)(param_2 + 7) = (int)param_4;
      if (*(int *)((long)param_2 + 0x44) != 4) {
        *(undefined2 *)((long)param_2 + 0x4c) = 0;
        (**(code **)(**(long **)(param_1 + 0x10) + 0x28))
                  (*(long **)(param_1 + 0x10),param_2,param_3,param_3,1,param_5 & 1);
        if (*(char *)((long)param_2 + 0x4d) == '\0') {
          *(undefined4 *)((long)param_2 + 0x44) = 4;
        }
        else {
          *(undefined4 *)((long)param_2 + 0x44) = 3;
          if (*(char *)((long)param_2 + 0x4c) != '\0') {
            return;
          }
        }
      }
      param_2[5] = param_3;
      *(int *)(param_2 + 8) = (int)param_2[8] + 1;
      if (*(int *)((long)param_2 + 0x3c) != 1) {
        return;
      }
      if ((int)param_2[6] != 2) {
        return;
      }
      *(undefined1 *)((long)param_2 + 0x4e) = 1;
      return;
    }
  }
  else if (lVar2 != param_1) {
    __s1 = *(char **)(param_1 + 8);
    param_4 = param_4 & 0xffffffff;
    iVar1 = strcmp(__s1,*(char **)(lVar2 + 8));
    if (iVar1 != 0) {
      if ((*param_2 != param_1) && (iVar1 = strcmp(__s1,*(char **)(*param_2 + 8)), iVar1 != 0))
      goto LAB_00129154;
      goto LAB_001290c8;
    }
  }
  if ((param_2[1] == param_3) && (*(int *)((long)param_2 + 0x34) != 1)) {
    *(int *)((long)param_2 + 0x34) = (int)param_4;
    return;
  }
  return;
}


// ===== 00129244  FUN_00129244 =====

void FUN_00129244(long param_1,long *param_2,long param_3,int param_4,uint param_5)

{
  int iVar1;
  long lVar2;
  char *__s1;
  
  lVar2 = param_2[2];
  if ((param_5 & 1) == 0) {
    if (*(long *)(param_1 + 8) != *(long *)(lVar2 + 8)) {
      if (*(long *)(param_1 + 8) != *(long *)(*param_2 + 8)) {
        return;
      }
LAB_001292e4:
      if ((param_2[4] != param_3) && (param_2[5] != param_3)) {
        *(int *)(param_2 + 7) = param_4;
        param_2[5] = param_3;
        *(int *)(param_2 + 8) = (int)param_2[8] + 1;
        if ((*(int *)((long)param_2 + 0x3c) == 1) && ((int)param_2[6] == 2)) {
          *(undefined1 *)((long)param_2 + 0x4e) = 1;
        }
        *(undefined4 *)((long)param_2 + 0x44) = 4;
        return;
      }
      if (param_4 != 1) {
        return;
      }
      *(undefined4 *)(param_2 + 7) = 1;
      return;
    }
  }
  else if (lVar2 != param_1) {
    __s1 = *(char **)(param_1 + 8);
    iVar1 = strcmp(__s1,*(char **)(lVar2 + 8));
    if (iVar1 != 0) {
      if ((*param_2 != param_1) && (iVar1 = strcmp(__s1,*(char **)(*param_2 + 8)), iVar1 != 0)) {
        return;
      }
      goto LAB_001292e4;
    }
  }
  if ((param_2[1] == param_3) && (*(int *)((long)param_2 + 0x34) != 1)) {
    *(int *)((long)param_2 + 0x34) = param_4;
    return;
  }
  return;
}


// ===== 001293a8  FUN_001293a8 =====

void FUN_001293a8(long param_1,long param_2,long param_3,long *param_4,int param_5,uint param_6)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  lVar10 = *(long *)(param_2 + 0x10);
  if ((param_6 & 1) == 0) {
    if (*(long *)(param_1 + 8) != *(long *)(lVar10 + 8)) goto LAB_00129448;
  }
  else if ((lVar10 != param_1) &&
          (iVar9 = strcmp(*(char **)(param_1 + 8),*(char **)(lVar10 + 8)), iVar9 != 0)) {
LAB_00129448:
    cVar2 = *(char *)(param_2 + 0x4c);
    cVar3 = *(char *)(param_2 + 0x4d);
    uVar1 = *(uint *)(param_1 + 0x14);
    *(undefined2 *)(param_2 + 0x4c) = 0;
    uVar11 = *(ulong *)(param_1 + 0x20);
    lVar10 = (long)uVar11 >> 8;
    if ((uVar11 & 1) != 0) {
      lVar10 = *(long *)(*param_4 + lVar10);
    }
    iVar9 = 2;
    if ((uVar11 & 2) != 0) {
      iVar9 = param_5;
    }
    (**(code **)(**(long **)(param_1 + 0x18) + 0x28))
              (*(long **)(param_1 + 0x18),param_2,param_3,(long)param_4 + lVar10,iVar9,param_6 & 1);
    cVar4 = *(char *)(param_2 + 0x4d);
    cVar5 = *(char *)(param_2 + 0x4c);
    bVar7 = cVar4 != '\0' || cVar3 != '\0';
    bVar8 = cVar5 != '\0' || cVar2 != '\0';
    if (1 < uVar1) {
      puVar13 = (undefined8 *)(param_1 + 0x28);
      do {
        if (*(char *)(param_2 + 0x4e) != '\0') break;
        if (cVar5 == '\0') {
          if (cVar4 != '\0') {
            bVar6 = *(byte *)(param_1 + 0x10);
            goto joined_r0x00129560;
          }
        }
        else {
          if (*(int *)(param_2 + 0x30) == 1) break;
          bVar6 = *(byte *)(param_1 + 0x10) >> 1;
joined_r0x00129560:
          if ((bVar6 & 1) == 0) break;
        }
        *(undefined2 *)(param_2 + 0x4c) = 0;
        uVar11 = puVar13[1];
        lVar10 = (long)uVar11 >> 8;
        if ((uVar11 & 1) != 0) {
          lVar10 = *(long *)(*param_4 + lVar10);
        }
        puVar12 = puVar13 + 2;
        iVar9 = 2;
        if ((uVar11 & 2) != 0) {
          iVar9 = param_5;
        }
        (**(code **)(*(long *)*puVar13 + 0x28))
                  ((long *)*puVar13,param_2,param_3,(long)param_4 + lVar10,iVar9,param_6 & 1);
        cVar5 = *(char *)(param_2 + 0x4c);
        cVar4 = *(char *)(param_2 + 0x4d);
        bVar8 = cVar5 != '\0' || bVar8;
        bVar7 = cVar4 != '\0' || bVar7;
        puVar13 = puVar12;
      } while (puVar12 < (undefined8 *)(param_1 + (ulong)uVar1 * 0x10 + 0x18));
    }
    *(bool *)(param_2 + 0x4c) = bVar8;
    *(bool *)(param_2 + 0x4d) = bVar7;
    return;
  }
  *(undefined1 *)(param_2 + 0x4d) = 1;
  if (*(long **)(param_2 + 8) != param_4) {
    return;
  }
  *(undefined1 *)(param_2 + 0x4c) = 1;
  if (*(long *)(param_2 + 0x20) == 0) {
    *(long *)(param_2 + 0x20) = param_3;
    *(int *)(param_2 + 0x30) = param_5;
    *(undefined4 *)(param_2 + 0x3c) = 1;
    if (param_5 != 1) {
      return;
    }
  }
  else {
    if (*(long *)(param_2 + 0x20) != param_3) {
      *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + 1;
      goto LAB_001295d4;
    }
    iVar9 = *(int *)(param_2 + 0x30);
    if (*(int *)(param_2 + 0x30) == 2) {
      *(int *)(param_2 + 0x30) = param_5;
      iVar9 = param_5;
    }
    if (iVar9 != 1) {
      return;
    }
  }
  if (*(int *)(param_2 + 0x48) != 1) {
    return;
  }
LAB_001295d4:
  *(undefined1 *)(param_2 + 0x4e) = 1;
  return;
}


// ===== 001295fc  FUN_001295fc =====

void FUN_001295fc(long param_1,long param_2,long param_3,long param_4,int param_5,ulong param_6)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_2 + 0x10);
  if ((param_6 & 1) == 0) {
    if (*(long *)(param_1 + 8) != *(long *)(lVar2 + 8)) goto LAB_001296ac;
  }
  else if ((lVar2 != param_1) &&
          (iVar1 = strcmp(*(char **)(param_1 + 8),*(char **)(lVar2 + 8)), iVar1 != 0)) {
LAB_001296ac:
                    /* WARNING: Could not recover jumptable at 0x001296d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x10) + 0x28))();
    return;
  }
  *(undefined1 *)(param_2 + 0x4d) = 1;
  if (*(long *)(param_2 + 8) == param_4) {
    *(undefined1 *)(param_2 + 0x4c) = 1;
    if (*(long *)(param_2 + 0x20) == 0) {
      *(long *)(param_2 + 0x20) = param_3;
      *(int *)(param_2 + 0x30) = param_5;
      *(undefined4 *)(param_2 + 0x3c) = 1;
      if (param_5 != 1) {
        return;
      }
    }
    else {
      if (*(long *)(param_2 + 0x20) != param_3) {
        *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + 1;
        goto LAB_00129738;
      }
      iVar1 = *(int *)(param_2 + 0x30);
      if (*(int *)(param_2 + 0x30) == 2) {
        *(int *)(param_2 + 0x30) = param_5;
        iVar1 = param_5;
      }
      if (iVar1 != 1) {
        return;
      }
    }
    if (*(int *)(param_2 + 0x48) == 1) {
LAB_00129738:
      *(undefined1 *)(param_2 + 0x4e) = 1;
      return;
    }
  }
  return;
}


// ===== 00129758  FUN_00129758 =====

void FUN_00129758(long param_1,long param_2,long param_3,long param_4,int param_5,uint param_6)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_2 + 0x10);
  if ((param_6 & 1) == 0) {
    if (*(long *)(param_1 + 8) != *(long *)(lVar2 + 8)) {
      return;
    }
  }
  else if ((lVar2 != param_1) &&
          (iVar1 = strcmp(*(char **)(param_1 + 8),*(char **)(lVar2 + 8)), iVar1 != 0)) {
    return;
  }
  *(undefined1 *)(param_2 + 0x4d) = 1;
  if (*(long *)(param_2 + 8) == param_4) {
    *(undefined1 *)(param_2 + 0x4c) = 1;
    if (*(long *)(param_2 + 0x20) == 0) {
      *(long *)(param_2 + 0x20) = param_3;
      *(int *)(param_2 + 0x30) = param_5;
      *(undefined4 *)(param_2 + 0x3c) = 1;
      if (param_5 != 1) {
        return;
      }
    }
    else {
      if (*(long *)(param_2 + 0x20) != param_3) {
        *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + 1;
        *(undefined1 *)(param_2 + 0x4e) = 1;
        return;
      }
      iVar1 = *(int *)(param_2 + 0x30);
      if (*(int *)(param_2 + 0x30) == 2) {
        *(int *)(param_2 + 0x30) = param_5;
        iVar1 = param_5;
      }
      if (iVar1 != 1) {
        return;
      }
    }
    if (*(int *)(param_2 + 0x48) == 1) {
      *(undefined1 *)(param_2 + 0x4e) = 1;
      return;
    }
  }
  return;
}


// ===== 00129864  std::type_info::~type_info =====

/* std::type_info::~type_info() */

void __thiscall std::type_info::~type_info(type_info *this)

{
  return;
}


// ===== 0012986c  std::type_info::~type_info =====

/* std::type_info::~type_info() */

void __thiscall std::type_info::~type_info(type_info *this)

{
  ~type_info(this);
  operator_delete(this);
  return;
}


// ===== 00129898  std::bad_cast::bad_cast =====

/* std::bad_cast::bad_cast() */

void __thiscall std::bad_cast::bad_cast(bad_cast *this)

{
  *(undefined **)this = PTR_vtable_00150e00 + 0x10;
  return;
}


// ===== 001298b0  std::bad_cast::~bad_cast =====

/* std::bad_cast::~bad_cast() */

void __thiscall std::bad_cast::~bad_cast(bad_cast *this)

{
  bad_array_new_length::~bad_array_new_length((bad_array_new_length *)this);
  return;
}


// ===== 001298b8  std::bad_cast::~bad_cast =====

/* std::bad_cast::~bad_cast() */

void __thiscall std::bad_cast::~bad_cast(bad_cast *this)

{
  ~bad_cast(this);
  operator_delete(this);
  return;
}


// ===== 001298e4  std::bad_cast::what =====

/* std::bad_cast::what() const */

char * std::bad_cast::what(void)

{
  return "std::bad_cast";
}


// ===== 001298f4  std::bad_typeid::bad_typeid =====

/* std::bad_typeid::bad_typeid() */

void __thiscall std::bad_typeid::bad_typeid(bad_typeid *this)

{
  *(undefined **)this = PTR_vtable_00150e08 + 0x10;
  return;
}


// ===== 0012990c  std::bad_typeid::~bad_typeid =====

/* std::bad_typeid::~bad_typeid() */

void __thiscall std::bad_typeid::~bad_typeid(bad_typeid *this)

{
  bad_array_new_length::~bad_array_new_length((bad_array_new_length *)this);
  return;
}


// ===== 00129914  std::bad_typeid::~bad_typeid =====

/* std::bad_typeid::~bad_typeid() */

void __thiscall std::bad_typeid::~bad_typeid(bad_typeid *this)

{
  ~bad_typeid(this);
  operator_delete(this);
  return;
}


// ===== 00129940  std::bad_typeid::what =====

/* std::bad_typeid::what() const */

char * std::bad_typeid::what(void)

{
  return "std::bad_typeid";
}


// ===== 00129950  __cxa_demangle =====

long * __cxa_demangle(byte *param_1,long *param_2,ulong *param_3,undefined4 *param_4)

{
  byte bVar1;
  long *plVar2;
  bool bVar3;
  size_t sVar4;
  long *plVar5;
  long *plVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  byte *pbVar10;
  byte *pbVar11;
  ulong uVar12;
  long *local_13d8;
  ulong local_13d0;
  size_t local_13c8;
  undefined8 local_13c0;
  undefined4 local_13b8;
  byte *local_13b0;
  byte *local_13a8;
  undefined8 *local_13a0;
  undefined8 *puStack_1398;
  undefined8 **local_1390;
  undefined8 local_1388;
  undefined8 uStack_1380;
  undefined8 local_1378;
  undefined8 uStack_1370;
  undefined8 local_1368;
  undefined8 uStack_1360;
  undefined8 local_1358;
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
  undefined8 uStack_12f0;
  undefined8 local_12e8;
  undefined8 uStack_12e0;
  undefined8 local_12d8;
  undefined8 uStack_12d0;
  undefined8 local_12c8;
  undefined8 uStack_12c0;
  undefined8 local_12b8;
  undefined8 uStack_12b0;
  undefined8 local_12a8;
  undefined8 uStack_12a0;
  undefined8 local_1298;
  undefined8 uStack_1290;
  undefined8 *local_1288;
  undefined8 *puStack_1280;
  undefined8 **local_1278;
  undefined8 local_1270;
  undefined8 uStack_1268;
  undefined8 uStack_1260;
  undefined8 uStack_1258;
  undefined8 local_1250;
  undefined8 uStack_1248;
  undefined8 uStack_1240;
  undefined8 uStack_1238;
  undefined8 local_1230;
  undefined8 uStack_1228;
  undefined8 uStack_1220;
  undefined8 uStack_1218;
  undefined8 local_1210;
  undefined8 uStack_1208;
  undefined8 uStack_1200;
  undefined8 uStack_11f8;
  undefined8 local_11f0;
  undefined8 uStack_11e8;
  undefined8 uStack_11e0;
  undefined8 uStack_11d8;
  undefined8 local_11d0;
  undefined8 uStack_11c8;
  undefined8 uStack_11c0;
  undefined8 uStack_11b8;
  undefined8 local_11b0;
  undefined8 uStack_11a8;
  undefined8 uStack_11a0;
  undefined8 uStack_1198;
  undefined8 local_1190;
  undefined8 uStack_1188;
  undefined8 uStack_1180;
  undefined8 uStack_1178;
  undefined8 *local_1170;
  undefined8 *local_1168;
  undefined8 **local_1160;
  undefined8 local_1158;
  undefined8 uStack_1150;
  undefined8 local_1148;
  undefined8 uStack_1140;
  undefined8 local_1138;
  undefined8 uStack_1130;
  undefined8 local_1128;
  undefined8 uStack_1120;
  undefined8 *local_1118;
  undefined8 *local_1110;
  undefined8 **local_1108;
  undefined8 local_1100;
  undefined8 uStack_10f8;
  undefined8 uStack_10f0;
  undefined8 uStack_10e8;
  undefined8 *local_10e0;
  undefined8 *local_10d8;
  undefined2 *local_10d0;
  undefined8 local_10c8;
  undefined8 uStack_10c0;
  undefined8 local_10b8;
  undefined8 uStack_10b0;
  undefined2 local_10a8;
  undefined1 local_10a6;
  undefined8 local_10a0;
  undefined8 local_1098;
  undefined4 local_1090;
  long local_1080;
  undefined8 uStack_1078;
  long *local_80;
  
  if ((param_1 == (byte *)0x0) || ((param_2 != (long *)0x0 && (param_3 == (ulong *)0x0)))) {
    if (param_4 == (undefined4 *)0x0) {
      return (long *)0x0;
    }
    *param_4 = 0xfffffffd;
    return (long *)0x0;
  }
  sVar4 = strlen((char *)param_1);
  local_13a8 = param_1 + sVar4;
  local_1390 = &local_1288;
  local_1278 = &local_1170;
  uStack_1140 = 0;
  local_1148 = 0;
  uStack_1130 = 0;
  local_1138 = 0;
  local_1108 = &local_10e0;
  uStack_1120 = 0;
  local_1128 = 0;
  local_10d0 = &local_10a8;
  uStack_12a0 = 0;
  local_12a8 = 0;
  local_1160 = &local_1118;
  local_10a8 = 1;
  uStack_1290 = 0;
  local_1298 = 0;
  uStack_1380 = 0;
  local_1388 = 0;
  uStack_1370 = 0;
  local_1378 = 0;
  uStack_1360 = 0;
  local_1368 = 0;
  uStack_1350 = 0;
  local_1358 = 0;
  uStack_1340 = 0;
  local_1348 = 0;
  uStack_1330 = 0;
  local_1338 = 0;
  uStack_1320 = 0;
  local_1328 = 0;
  uStack_1310 = 0;
  local_1318 = 0;
  uStack_1300 = 0;
  local_1308 = 0;
  uStack_12f0 = 0;
  local_12f8 = 0;
  uStack_12e0 = 0;
  local_12e8 = 0;
  uStack_12d0 = 0;
  local_12d8 = 0;
  uStack_12c0 = 0;
  local_12c8 = 0;
  uStack_12b0 = 0;
  local_12b8 = 0;
  uStack_1268 = 0;
  local_1270 = 0;
  uStack_1258 = 0;
  uStack_1260 = 0;
  uStack_1248 = 0;
  local_1250 = 0;
  uStack_1238 = 0;
  uStack_1240 = 0;
  uStack_1228 = 0;
  local_1230 = 0;
  uStack_1218 = 0;
  uStack_1220 = 0;
  uStack_1208 = 0;
  local_1210 = 0;
  uStack_11f8 = 0;
  uStack_1200 = 0;
  uStack_11e8 = 0;
  local_11f0 = 0;
  uStack_11d8 = 0;
  uStack_11e0 = 0;
  uStack_11c8 = 0;
  local_11d0 = 0;
  uStack_11b8 = 0;
  uStack_11c0 = 0;
  uStack_11a8 = 0;
  local_11b0 = 0;
  uStack_1198 = 0;
  uStack_11a0 = 0;
  uStack_1188 = 0;
  local_1190 = 0;
  uStack_1178 = 0;
  uStack_1180 = 0;
  uStack_1150 = 0;
  local_1158 = 0;
  uStack_10f8 = 0;
  local_1100 = 0;
  uStack_10e8 = 0;
  uStack_10f0 = 0;
  uStack_10b0 = 0;
  local_10b8 = 0;
  uStack_10c0 = 0;
  local_10c8 = 0;
  local_10a6 = 0;
  local_10a0 = 0xffffffffffffffff;
  local_1090 = 0;
  local_1098 = 0;
  uStack_1078 = 0;
  local_1080 = 0;
  local_13a0 = &local_1388;
  puStack_1398 = &local_1388;
  local_1288 = &local_1270;
  puStack_1280 = &local_1270;
  local_1170 = &local_1158;
  local_1168 = &local_1158;
  local_1118 = &local_1100;
  local_1110 = &local_1100;
  local_10e0 = &local_10c8;
  local_10d8 = &local_10c8;
  local_80 = &local_1080;
  if (sVar4 < 2) {
LAB_00129b44:
                    /* try { // try from 00129b44 to 00129cfb has its CatchHandler @ 00129f34 */
    local_13b0 = param_1;
    plVar5 = (long *)FUN_0012acb8(&local_13b0);
    if (local_13a8 == local_13b0) {
LAB_00129e10:
      if (plVar5 != (long *)0x0) goto LAB_00129e14;
    }
LAB_00129b58:
    plVar5 = (long *)0x0;
    uVar7 = 0xfffffffe;
  }
  else {
    if (*(short *)param_1 != 0x5a5f) {
      if (sVar4 == 2) goto LAB_00129b44;
      if (*(short *)param_1 == 0x5f5f && param_1[2] == 0x5a) {
        lVar9 = 3;
        goto LAB_00129c28;
      }
      if (sVar4 < 4) goto LAB_00129b44;
      if (*(int *)param_1 == 0x5a5f5f5f) {
        lVar9 = 4;
      }
      else {
        if ((sVar4 == 4) || (*(int *)param_1 != 0x5f5f5f5f || param_1[4] != 0x5a))
        goto LAB_00129b44;
        lVar9 = 5;
      }
      local_13b0 = param_1 + lVar9;
      plVar5 = (long *)FUN_0012a0a0(&local_13b0);
      local_13d8 = plVar5;
      if (plVar5 != (long *)0x0) {
        if (((ulong)((long)local_13a8 - (long)local_13b0) < 0xd) ||
           (*(long *)local_13b0 != 0x695f6b636f6c625f ||
            *(long *)(local_13b0 + 5) != 0x656b6f766e695f6b)) goto LAB_00129b58;
        pbVar10 = local_13b0 + 0xd;
        if (pbVar10 != local_13a8) {
          bVar1 = *pbVar10;
          if (bVar1 == 0x5f) {
            pbVar10 = local_13b0 + 0xe;
          }
          local_13b0 = pbVar10;
          if (local_13a8 == pbVar10) {
            bVar3 = true;
            pbVar11 = local_13a8;
          }
          else if (*pbVar10 - 0x3a < 0xfffffff6) {
            bVar3 = true;
            pbVar11 = pbVar10;
          }
          else {
            do {
              pbVar11 = local_13b0;
              if (*local_13b0 - 0x3a < 0xfffffff6) break;
              local_13b0 = local_13b0 + 1;
              pbVar11 = local_13a8;
            } while (local_13b0 != local_13a8);
            bVar3 = pbVar11 == pbVar10;
          }
          if ((bVar1 == 0x5f) && (bVar3)) goto LAB_00129b58;
          pbVar10 = local_13b0;
          if (local_13a8 != pbVar11) {
            if (*pbVar11 != 0x2e) goto LAB_00129b58;
            local_13b0 = local_13a8;
            pbVar10 = local_13b0;
          }
        }
        local_13b0 = pbVar10;
        plVar5 = (long *)FUN_0012ac04(&local_13b0,"invocation function for block in ",&local_13d8);
      }
      goto LAB_00129e10;
    }
    lVar9 = 2;
LAB_00129c28:
    local_13b0 = param_1 + lVar9;
    plVar6 = (long *)FUN_0012a0a0(&local_13b0);
    plVar2 = local_80;
    pbVar10 = local_13b0;
    if (plVar6 == (long *)0x0) goto LAB_00129b58;
    lVar9 = (long)local_13a8 - (long)local_13b0;
    plVar5 = plVar6;
    if (lVar9 != 0) {
      if (*local_13b0 != 0x2e) goto LAB_00129b58;
      lVar8 = local_80[1];
      if (lVar8 - 0xfc0U < 0xfffffffffffff010) {
        plVar5 = (long *)malloc(0x1000);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar8 = 0;
        *plVar5 = (long)plVar2;
        plVar5[1] = 0;
        local_80 = plVar5;
      }
      local_80[1] = lVar8 + 0x30;
      plVar5 = (long *)((long)local_80 + lVar8 + 0x10);
      *plVar5 = (long)&PTR_FUN_001502f8;
      *(long **)((long)local_80 + lVar8 + 0x20) = plVar6;
      *(byte **)((long)local_80 + lVar8 + 0x28) = pbVar10;
      *(undefined1 *)((long)local_80 + lVar8 + 0x18) = 1;
      *(long *)((long)local_80 + lVar8 + 0x30) = lVar9;
      *(ushort *)((long)local_80 + lVar8 + 0x19) =
           *(ushort *)((long)local_80 + lVar8 + 0x19) & 0xf000 | 0x540;
      local_13b0 = local_13a8;
    }
LAB_00129e14:
    if (param_2 == (long *)0x0) {
      local_13c8 = 0;
    }
    else {
      local_13c8 = *param_3;
    }
    local_13d0 = 0;
    local_13b8 = 1;
    local_13c0 = 0xffffffffffffffff;
    local_13d8 = param_2;
    if (local_10e0 != local_10d8) {
                    /* try { // try from 00129ee4 to 00129f03 has its CatchHandler @ 00129f0c */
                    /* WARNING: Subroutine does not return */
      FUN_00127d24("%s:%d: %s","out/llvm-project/libcxxabi/src/cxa_demangle.cpp",400,&DAT_001128a6);
    }
                    /* try { // try from 00129e54 to 00129e83 has its CatchHandler @ 00129f20 */
    (**(code **)(*plVar5 + 0x20))(plVar5,&local_13d8);
    if ((*(ushort *)((long)plVar5 + 9) & 0xc0) != 0x40) {
      (**(code **)(*plVar5 + 0x28))(plVar5,&local_13d8);
    }
    uVar12 = local_13d0 + 1;
    if (local_13c8 < uVar12) {
      local_13c8 = local_13c8 * 2;
      uVar12 = local_13d0 + 0x3e1;
      if (local_13c8 < uVar12 || local_13c8 - uVar12 == 0) {
        local_13c8 = uVar12;
      }
      local_13d8 = (long *)realloc(local_13d8,local_13c8);
      if (local_13d8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00129f04 to 00129f07 has its CatchHandler @ 00129f20 */
        abort();
      }
      uVar12 = local_13d0 + 1;
    }
    *(undefined1 *)((long)local_13d8 + local_13d0) = 0;
    if (param_3 != (ulong *)0x0) {
      *param_3 = uVar12;
    }
    uVar7 = 0;
    local_13d0 = uVar12;
    plVar5 = local_13d8;
  }
  plVar2 = local_80;
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = uVar7;
  }
  while (local_80 = plVar2, local_80 != (long *)0x0) {
    while (plVar2 = (long *)*local_80, local_80 != &local_1080) {
      plVar2 = local_80;
      local_80 = (long *)*local_80;
      free(plVar2);
      if (local_80 == (long *)0x0) goto LAB_00129b98;
    }
  }
LAB_00129b98:
  local_1080 = 0;
  uStack_1078 = 0;
  local_80 = &local_1080;
  if (local_10e0 != &local_10c8) {
    free(local_10e0);
  }
  if (local_1118 != &local_1100) {
    free(local_1118);
  }
  if (local_1170 != &local_1158) {
    free(local_1170);
  }
  if (local_1288 != &local_1270) {
    free(local_1288);
  }
  if (local_13a0 != &local_1388) {
    free(local_13a0);
  }
  return plVar5;
}


// ===== 00129f48  FUN_00129f48 =====

void FUN_00129f48(long param_1)

{
  undefined8 *puVar1;
  undefined8 *__ptr;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)(param_1 + 0x330);
  __ptr = *(undefined8 **)(param_1 + 0x1330);
  while (__ptr != (undefined8 *)0x0) {
    while( true ) {
      puVar2 = (undefined8 *)*__ptr;
      *(undefined8 **)(param_1 + 0x1330) = puVar2;
      if (__ptr != puVar1) break;
      __ptr = puVar2;
      if (puVar2 == (undefined8 *)0x0) goto LAB_00129f90;
    }
    free(__ptr);
    __ptr = *(undefined8 **)(param_1 + 0x1330);
  }
LAB_00129f90:
  *puVar1 = 0;
  *(undefined8 *)(param_1 + 0x338) = 0;
  *(undefined8 **)(param_1 + 0x1330) = puVar1;
  if (*(void **)(param_1 + 0x2d0) != (void *)(param_1 + 0x2e8)) {
    free(*(void **)(param_1 + 0x2d0));
  }
  if (*(void **)(param_1 + 0x298) != (void *)(param_1 + 0x2b0)) {
    free(*(void **)(param_1 + 0x298));
  }
  if (*(void **)(param_1 + 0x240) != (void *)(param_1 + 600)) {
    free(*(void **)(param_1 + 0x240));
  }
  if (*(void **)(param_1 + 0x128) != (void *)(param_1 + 0x140)) {
    free(*(void **)(param_1 + 0x128));
  }
  if (*(void **)(param_1 + 0x10) != (void *)(param_1 + 0x28)) {
    free(*(void **)(param_1 + 0x10));
    return;
  }
  return;
}


// ===== 0012a018  FUN_0012a018 =====

undefined8 FUN_0012a018(long *param_1,void *param_2,size_t param_3)

{
  void *__s1;
  int iVar1;
  
  __s1 = (void *)*param_1;
  if ((ulong)(param_1[1] - (long)__s1) < param_3) {
    return 0;
  }
  iVar1 = memcmp(__s1,param_2,param_3);
  if (iVar1 != 0) {
    return 0;
  }
  *param_1 = (long)__s1 + param_3;
  return 1;
}


// ===== 0012a0a0  FUN_0012a0a0 =====

undefined8 * FUN_0012a0a0(long *param_1)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  bool bVar10;
  uint uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long *plVar15;
  long extraout_x1;
  long lVar16;
  byte *pbVar17;
  long lVar18;
  char *pcVar19;
  byte *pbVar20;
  char *pcVar21;
  undefined8 *puVar22;
  long *plVar23;
  long lVar24;
  long *plVar25;
  ulong uVar26;
  ulong uVar27;
  void *pvVar28;
  size_t sVar29;
  undefined1 auVar30 [16];
  long local_150;
  long local_148;
  undefined1 local_140 [16];
  undefined8 local_130;
  undefined8 *local_128;
  undefined8 local_120;
  undefined1 local_118 [8];
  ulong local_110;
  char local_108;
  undefined1 auStack_100 [160];
  
  FUN_0012c03c(auStack_100,param_1);
  auVar7._8_8_ = local_140._8_8_;
  auVar7._0_8_ = local_140._0_8_;
  auVar30._8_8_ = local_140._8_8_;
  auVar30._0_8_ = local_140._0_8_;
  pcVar21 = (char *)*param_1;
  pcVar19 = (char *)param_1[1];
  if (pcVar19 == pcVar21) {
LAB_0012a168:
    local_120 = (local_120 >> 0x10 & 0xffff) << 0x10;
    local_110 = param_1[0x5b] - param_1[0x5a] >> 3;
    local_118[0] = 0;
    local_108 = '\0';
                    /* try { // try from 0012a190 to 0012a19b has its CatchHandler @ 0012ab64 */
    puVar13 = (undefined8 *)FUN_0012c1f0(param_1,&local_120);
    auVar30._8_8_ = local_140._8_8_;
    auVar30._0_8_ = local_140._0_8_;
    auVar4._8_8_ = local_140._8_8_;
    auVar4._0_8_ = local_140._0_8_;
    local_128 = puVar13;
    if (puVar13 == (undefined8 *)0x0) goto LAB_0012aa10;
    lVar16 = param_1[0x5a];
    uVar12 = param_1[0x5b] - lVar16 >> 3;
    if (local_110 < uVar12) {
      puVar22 = (undefined8 *)param_1[0x53];
      if ((puVar22 != (undefined8 *)param_1[0x54]) &&
         (plVar25 = (long *)*puVar22, plVar25 != (long *)0x0)) {
        plVar23 = (long *)(lVar16 + local_110 * 8);
        lVar18 = *plVar25;
        lVar24 = *plVar23;
        uVar26 = *(ulong *)(lVar24 + 0x10);
        uVar27 = local_110;
        if (uVar26 < (ulong)(plVar25[1] - lVar18 >> 3)) {
          do {
            uVar27 = uVar27 + 1;
            *(undefined8 *)(lVar24 + 0x18) = *(undefined8 *)(lVar18 + uVar26 * 8);
            if (uVar12 == uVar27) goto LAB_0012a308;
            plVar25 = (long *)*puVar22;
            if (plVar25 == (long *)0x0) break;
            lVar24 = *(long *)(lVar16 + uVar27 * 8);
            lVar18 = *plVar25;
            uVar26 = *(ulong *)(lVar24 + 0x10);
          } while (uVar26 < (ulong)(plVar25[1] - lVar18 >> 3));
          if (uVar12 <= uVar27) goto LAB_0012a30c;
        }
      }
    }
    else {
      if (uVar12 < local_110) {
                    /* try { // try from 0012aa78 to 0012aa97 has its CatchHandler @ 0012ab64 */
                    /* WARNING: Subroutine does not return */
        FUN_00127d24("%s:%d: %s","out/llvm-project/libcxxabi/src/demangle/ItaniumDemangle.h",0x88,
                     "shrinkToSize() can\'t expand!");
      }
      plVar23 = (long *)(lVar16 + local_110 * 8);
LAB_0012a308:
      param_1[0x5b] = (long)plVar23;
LAB_0012a30c:
      pbVar17 = (byte *)*param_1;
      pbVar20 = (byte *)param_1[1];
      local_140 = auVar4;
      if ((pbVar20 == pbVar17) ||
         ((local_140 = auVar30, *pbVar17 - 0x2e < 0x32 &&
          ((1L << ((ulong)(*pbVar17 - 0x2e) & 0x3f) & 0x2000000800001U) != 0)))) goto LAB_0012aa10;
      local_130 = 0;
      if (((ulong)((long)pbVar20 - (long)pbVar17) < 0xd) ||
         (*(long *)pbVar17 != 0x6c62616e65396155 || *(long *)(pbVar17 + 5) != 0x4966695f656c6261)) {
        uVar12 = local_120;
joined_r0x0012aa70:
        local_148 = 0;
        bVar10 = (char)local_120 == '\0';
        local_120 = uVar12;
        if (bVar10) {
          local_148 = 0;
          local_120._1_1_ = (char)(uVar12 >> 8);
          bVar10 = local_120._1_1_ != '\0';
          if (bVar10) {
                    /* try { // try from 0012a398 to 0012a39f has its CatchHandler @ 0012aaec */
            local_148 = FUN_0012acb8(param_1);
            auVar30 = local_140;
            if (local_148 == 0) goto LAB_0012aa0c;
          }
        }
        pcVar21 = (char *)*param_1;
        pcVar19 = (char *)param_1[1];
        local_140._0_8_ = 0;
        local_140._8_8_ = 0;
        auVar30 = ZEXT816(0);
        if ((pcVar21 == pcVar19) || (*pcVar21 != 'v')) {
          plVar23 = param_1 + 5;
          lVar16 = param_1[3] - param_1[2] >> 3;
          do {
                    /* try { // try from 0012a6b8 to 0012a6bf has its CatchHandler @ 0012ab28 */
            puVar22 = (undefined8 *)FUN_0012acb8(param_1);
            auVar30._8_8_ = local_140._8_8_;
            auVar30._0_8_ = local_140._0_8_;
            if (puVar22 == (undefined8 *)0x0) goto LAB_0012aa0c;
            plVar25 = (long *)param_1[3];
            puVar13 = puVar22;
            if ((local_108 != '\0') && (lVar16 == (long)plVar25 - param_1[2] >> 3)) {
              pvVar28 = (void *)param_1[0x266];
              lVar18 = *(long *)((long)pvVar28 + 8);
              puVar14 = (undefined8 *)pvVar28;
              if (lVar18 - 0xfd0U < 0xfffffffffffff010) {
                puVar14 = (undefined8 *)malloc(0x1000);
                if (puVar14 == (undefined8 *)0x0) goto LAB_0012aa98;
                lVar18 = 0;
                *puVar14 = pvVar28;
                puVar14[1] = 0;
                param_1[0x266] = (long)puVar14;
              }
              *(long *)((long)puVar14 + 8) = lVar18 + 0x20;
              puVar13 = (undefined8 *)((long)puVar14 + lVar18 + 0x10);
              *puVar13 = &PTR_FUN_00150218;
              *(undefined1 *)((long)puVar14 + lVar18 + 0x18) = 0x57;
              *(undefined8 **)((long)puVar14 + lVar18 + 0x20) = puVar22;
              *(ushort *)((long)puVar14 + lVar18 + 0x19) =
                   *(ushort *)((long)puVar14 + lVar18 + 0x19) & 0xf000 | 0x540;
              plVar25 = (long *)param_1[3];
            }
            if (plVar25 == (long *)param_1[4]) {
              plVar15 = (long *)param_1[2];
              sVar29 = (long)plVar25 - (long)plVar15;
              if (plVar15 == plVar23) {
                pvVar28 = malloc(sVar29 * 2);
                if (pvVar28 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0012aaa8 to 0012aaab has its CatchHandler @ 0012ab00 */
                  abort();
                }
                if (plVar25 != plVar23) {
                  memcpy(pvVar28,plVar23,sVar29);
                }
                param_1[2] = (long)pvVar28;
              }
              else {
                pvVar28 = realloc(plVar15,sVar29 * 2);
                param_1[2] = (long)pvVar28;
                if (pvVar28 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0012aaa0 to 0012aaa3 has its CatchHandler @ 0012ab00 */
                  abort();
                }
              }
              plVar25 = (long *)((long)pvVar28 + sVar29);
              param_1[3] = (long)plVar25;
              param_1[4] = (long)((long)pvVar28 + ((long)sVar29 >> 2) * 8);
            }
            param_1[3] = (long)(plVar25 + 1);
            *plVar25 = (long)puVar13;
          } while (((byte *)param_1[1] != (byte *)*param_1) &&
                  ((uVar11 = *(byte *)*param_1 - 0x2e, 0x31 < uVar11 ||
                   ((1L << ((ulong)uVar11 & 0x3f) & 0x2000800800001U) == 0))));
                    /* try { // try from 0012a7f4 to 0012a7ff has its CatchHandler @ 0012aad8 */
          auVar30 = FUN_0012ce20(param_1,lVar16);
          pcVar21 = (char *)*param_1;
          pcVar19 = (char *)param_1[1];
        }
        else {
          pcVar21 = pcVar21 + 1;
          *param_1 = (long)pcVar21;
        }
        local_150 = 0;
        local_140 = auVar30;
        if ((pcVar21 != pcVar19) && (*pcVar21 == 'Q')) {
          uVar3 = *(undefined1 *)((long)param_1 + 0x30a);
          *param_1 = (long)(pcVar21 + 1);
          *(undefined1 *)((long)param_1 + 0x30a) = 1;
                    /* try { // try from 0012a834 to 0012a83b has its CatchHandler @ 0012aac0 */
          local_150 = FUN_0012ff04(param_1);
          *(undefined1 *)((long)param_1 + 0x30a) = uVar3;
          auVar30 = local_140;
          if (local_150 == 0) goto LAB_0012aa0c;
        }
        puVar13 = (undefined8 *)
                  FUN_0012cf7c(param_1,&local_148,&local_128,local_140,&local_130,&local_150,
                               (ulong)&local_120 | 4,local_118);
        goto LAB_0012aa10;
      }
      lVar16 = param_1[2];
      lVar18 = param_1[3];
      pbVar17 = pbVar17 + 0xd;
      plVar23 = param_1 + 5;
      *param_1 = (long)pbVar17;
      while( true ) {
        if ((pbVar17 != pbVar20) && (*pbVar17 == 0x45)) {
          *param_1 = (long)(pbVar17 + 1);
                    /* try { // try from 0012aa48 to 0012aa53 has its CatchHandler @ 0012aaac */
          local_140 = FUN_0012ce20(param_1,lVar18 - lVar16 >> 3);
          local_130 = FUN_0012cd80(param_1,local_140);
          uVar12 = local_120;
          goto joined_r0x0012aa70;
        }
                    /* try { // try from 0012a9ac to 0012a9b3 has its CatchHandler @ 0012ab3c */
        lVar24 = FUN_0012c934(param_1);
        auVar30._8_8_ = local_140._8_8_;
        auVar30._0_8_ = local_140._0_8_;
        if (lVar24 == 0) break;
        plVar25 = (long *)param_1[3];
        if (plVar25 == (long *)param_1[4]) {
          plVar15 = (long *)param_1[2];
          sVar29 = (long)plVar25 - (long)plVar15;
          if (plVar15 == plVar23) {
            pvVar28 = malloc(sVar29 * 2);
            if (pvVar28 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0012aaa4 to 0012aaa7 has its CatchHandler @ 0012ab14 */
              abort();
            }
            if (plVar25 != plVar23) {
              memcpy(pvVar28,plVar23,sVar29);
            }
            param_1[2] = (long)pvVar28;
          }
          else {
            pvVar28 = realloc(plVar15,sVar29 * 2);
            param_1[2] = (long)pvVar28;
            if (pvVar28 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0012aa9c to 0012aa9f has its CatchHandler @ 0012ab14 */
              abort();
            }
          }
          plVar25 = (long *)((long)pvVar28 + sVar29);
          param_1[3] = (long)plVar25;
          param_1[4] = (long)((long)pvVar28 + ((long)sVar29 >> 2) * 8);
        }
        param_1[3] = (long)(plVar25 + 1);
        *plVar25 = lVar24;
        pbVar17 = (byte *)*param_1;
        pbVar20 = (byte *)param_1[1];
      }
    }
  }
  else if (*pcVar21 == 'G') {
    if (1 < (ulong)((long)pcVar19 - (long)pcVar21)) {
      cVar2 = pcVar21[1];
      if (cVar2 == 'I') {
        local_120 = 0;
        *param_1 = (long)(pcVar21 + 2);
        uVar11 = FUN_0012db88(param_1,&local_120);
        uVar12 = local_120;
        auVar30._8_8_ = local_140._8_8_;
        auVar30._0_8_ = local_140._0_8_;
        if ((uVar11 & 1) == 0 && local_120 != 0) {
          pvVar28 = (void *)param_1[0x266];
          lVar16 = *(long *)((long)pvVar28 + 8);
          puVar22 = (undefined8 *)pvVar28;
          if (lVar16 - 0xfc0U < 0xfffffffffffff010) {
            puVar22 = (undefined8 *)malloc(0x1000);
            if (puVar22 == (undefined8 *)0x0) {
LAB_0012aa98:
                    /* WARNING: Subroutine does not return */
              std::terminate();
            }
            lVar16 = 0;
            *puVar22 = pvVar28;
            puVar22[1] = 0;
            param_1[0x266] = (long)puVar22;
          }
          *(long *)((long)puVar22 + 8) = lVar16 + 0x30;
          puVar13 = (undefined8 *)((long)puVar22 + lVar16 + 0x10);
          *puVar13 = &PTR_FUN_0014e068;
          *(ulong *)((long)puVar22 + lVar16 + 0x30) = uVar12;
          *(undefined1 *)((long)puVar22 + lVar16 + 0x18) = 0x15;
          *(char **)((long)puVar22 + lVar16 + 0x20) = "initializer for module ";
          *(undefined8 *)((long)puVar22 + lVar16 + 0x28) = 0x17;
          *(ushort *)((long)puVar22 + lVar16 + 0x19) =
               *(ushort *)((long)puVar22 + lVar16 + 0x19) & 0xf000 | 0x540;
          goto LAB_0012aa10;
        }
      }
      else if (cVar2 == 'R') {
        *param_1 = (long)(pcVar21 + 2);
        local_120 = FUN_0012c1f0(param_1,0);
        auVar9._8_8_ = local_140._8_8_;
        auVar9._0_8_ = local_140._0_8_;
        auVar8._8_8_ = local_140._8_8_;
        auVar8._0_8_ = local_140._0_8_;
        auVar30._8_8_ = local_140._8_8_;
        auVar30._0_8_ = local_140._0_8_;
        if (local_120 != 0) {
          pbVar17 = (byte *)*param_1;
          pbVar20 = (byte *)param_1[1];
          if (((pbVar20 == pbVar17) || (bVar1 = *pbVar17, bVar1 < 0x30)) ||
             ((0x39 < bVar1 && (0x19 < bVar1 - 0x41)))) {
            bVar10 = true;
joined_r0x0012a4f8:
            if ((pbVar17 == pbVar20) || (*pbVar17 != 0x5f)) {
              auVar30 = auVar8;
              if (!bVar10) goto LAB_0012aa0c;
            }
            else {
              *param_1 = (long)(pbVar17 + 1);
            }
            puVar13 = (undefined8 *)FUN_0012dad8(param_1,&local_120);
            goto LAB_0012aa10;
          }
          do {
            bVar1 = *pbVar17;
            if ((bVar1 < 0x30) || ((0x39 < bVar1 && (0x19 < bVar1 - 0x41)))) {
              bVar10 = false;
              goto joined_r0x0012a4f8;
            }
            pbVar17 = pbVar17 + 1;
            *param_1 = (long)pbVar17;
            auVar30 = auVar9;
          } while (pbVar17 != pbVar20);
        }
      }
      else {
        auVar30 = auVar7;
        if (cVar2 == 'V') {
          *param_1 = (long)(pcVar21 + 2);
                    /* try { // try from 0012a26c to 0012a277 has its CatchHandler @ 0012ab50 */
          lVar16 = FUN_0012c1f0(param_1,0);
          auVar30._8_8_ = local_140._8_8_;
          auVar30._0_8_ = local_140._0_8_;
          if (lVar16 != 0) {
            pvVar28 = (void *)param_1[0x266];
            lVar18 = *(long *)((long)pvVar28 + 8);
            puVar22 = (undefined8 *)pvVar28;
            if (lVar18 - 0xfc0U < 0xfffffffffffff010) {
              puVar22 = (undefined8 *)malloc(0x1000);
              if (puVar22 == (undefined8 *)0x0) goto LAB_0012aa98;
              lVar18 = 0;
              *puVar22 = pvVar28;
              puVar22[1] = 0;
              param_1[0x266] = (long)puVar22;
            }
            *(long *)((long)puVar22 + 8) = lVar18 + 0x30;
            puVar13 = (undefined8 *)((long)puVar22 + lVar18 + 0x10);
            *puVar13 = &PTR_FUN_0014e068;
            *(long *)((long)puVar22 + lVar18 + 0x30) = lVar16;
            *(undefined1 *)((long)puVar22 + lVar18 + 0x18) = 0x15;
            *(char **)((long)puVar22 + lVar18 + 0x20) = "guard variable for ";
            *(undefined8 *)((long)puVar22 + lVar18 + 0x28) = 0x13;
            *(ushort *)((long)puVar22 + lVar18 + 0x19) =
                 *(ushort *)((long)puVar22 + lVar18 + 0x19) & 0xf000 | 0x540;
            goto LAB_0012aa10;
          }
        }
      }
    }
  }
  else {
    if (*pcVar21 != 'T') goto LAB_0012a168;
    if ((ulong)((long)pcVar19 - (long)pcVar21) < 2) {
LAB_0012a628:
      pcVar21 = pcVar21 + 1;
      *param_1 = (long)pcVar21;
      if (pcVar19 == pcVar21) {
        bVar10 = false;
        uVar12 = FUN_0012d5c4(param_1);
        auVar30._8_8_ = local_140._8_8_;
        auVar30._0_8_ = local_140._0_8_;
      }
      else {
        bVar10 = *pcVar21 == 'v';
        uVar12 = FUN_0012d5c4(param_1);
        auVar30._8_8_ = local_140._8_8_;
        auVar30._0_8_ = local_140._0_8_;
      }
      if ((uVar12 & 1) == 0) {
        local_120 = FUN_0012a0a0(param_1);
        auVar30._8_8_ = local_140._8_8_;
        auVar30._0_8_ = local_140._0_8_;
        if (local_120 != 0) {
          if (bVar10) {
            puVar13 = (undefined8 *)FUN_0012d97c();
          }
          else {
            puVar13 = (undefined8 *)FUN_0012da2c(param_1,&local_120);
          }
          goto LAB_0012aa10;
        }
      }
    }
    else {
      bVar1 = pcVar21[1];
      if (bVar1 < 0x53) {
        if (bVar1 < 0x48) {
          if (bVar1 == 0x41) {
            *param_1 = (long)(pcVar21 + 2);
                    /* try { // try from 0012a878 to 0012a927 has its CatchHandler @ 0012ab50 */
            local_120 = FUN_0012c934(param_1);
            auVar30._8_8_ = local_140._8_8_;
            auVar30._0_8_ = local_140._0_8_;
            if (local_120 != 0) {
              puVar13 = (undefined8 *)FUN_0012d254(param_1,&local_120);
              goto LAB_0012aa10;
            }
          }
          else {
            if (bVar1 != 0x43) goto LAB_0012a628;
            *param_1 = (long)(pcVar21 + 2);
                    /* try { // try from 0012a3f0 to 0012a66b has its CatchHandler @ 0012ab50 */
            local_120 = FUN_0012acb8(param_1);
            auVar30._8_8_ = local_140._8_8_;
            auVar30._0_8_ = local_140._0_8_;
            if (local_120 != 0) {
              FUN_0012ab78(param_1,1);
              auVar6._8_8_ = local_140._8_8_;
              auVar6._0_8_ = local_140._0_8_;
              auVar5._8_8_ = local_140._8_8_;
              auVar5._0_8_ = local_140._0_8_;
              auVar30._8_8_ = local_140._8_8_;
              auVar30._0_8_ = local_140._0_8_;
              if (((extraout_x1 != 0) &&
                  (pcVar21 = (char *)*param_1, auVar30 = auVar5, pcVar21 != (char *)param_1[1])) &&
                 (auVar30 = auVar6, *pcVar21 == '_')) {
                *param_1 = (long)(pcVar21 + 1);
                local_140._0_8_ = FUN_0012acb8(param_1);
                auVar30._8_8_ = local_140._8_8_;
                auVar30._0_8_ = local_140._0_8_;
                if (local_140._0_8_ != 0) {
                  puVar13 = (undefined8 *)FUN_0012d824(param_1,local_140,&local_120);
                  goto LAB_0012aa10;
                }
              }
            }
          }
        }
        else if (bVar1 == 0x48) {
          *param_1 = (long)(pcVar21 + 2);
          local_120 = FUN_0012c1f0(param_1,0);
          auVar30._8_8_ = local_140._8_8_;
          auVar30._0_8_ = local_140._0_8_;
          if (local_120 != 0) {
            puVar13 = (undefined8 *)FUN_0012d8cc(param_1,&local_120);
            goto LAB_0012aa10;
          }
        }
        else {
          if (bVar1 != 0x49) goto LAB_0012a628;
          *param_1 = (long)(pcVar21 + 2);
          local_120 = FUN_0012acb8(param_1);
          auVar30._8_8_ = local_140._8_8_;
          auVar30._0_8_ = local_140._0_8_;
          if (local_120 != 0) {
            puVar13 = (undefined8 *)FUN_0012d464(param_1,&local_120);
            goto LAB_0012aa10;
          }
        }
      }
      else if (bVar1 < 0x56) {
        if (bVar1 == 0x53) {
          *param_1 = (long)(pcVar21 + 2);
          local_120 = FUN_0012acb8(param_1);
          auVar30._8_8_ = local_140._8_8_;
          auVar30._0_8_ = local_140._0_8_;
          if (local_120 != 0) {
            puVar13 = (undefined8 *)FUN_0012d514(param_1,&local_120);
            goto LAB_0012aa10;
          }
        }
        else {
          if (bVar1 != 0x54) goto LAB_0012a628;
          *param_1 = (long)(pcVar21 + 2);
          local_120 = FUN_0012acb8(param_1);
          auVar30._8_8_ = local_140._8_8_;
          auVar30._0_8_ = local_140._0_8_;
          if (local_120 != 0) {
            puVar13 = (undefined8 *)FUN_0012d3b4(param_1,&local_120);
            goto LAB_0012aa10;
          }
        }
      }
      else if (bVar1 == 0x56) {
        *param_1 = (long)(pcVar21 + 2);
        local_120 = FUN_0012acb8(param_1);
        auVar30._8_8_ = local_140._8_8_;
        auVar30._0_8_ = local_140._0_8_;
        if (local_120 != 0) {
          puVar13 = (undefined8 *)FUN_0012d304(param_1,&local_120);
          goto LAB_0012aa10;
        }
      }
      else if (bVar1 == 0x57) {
        *param_1 = (long)(pcVar21 + 2);
        local_120 = FUN_0012c1f0(param_1,0);
        auVar30._8_8_ = local_140._8_8_;
        auVar30._0_8_ = local_140._0_8_;
        if (local_120 != 0) {
          puVar13 = (undefined8 *)
                    FUN_0012ac04(param_1,"thread-local wrapper routine for ",&local_120);
          goto LAB_0012aa10;
        }
      }
      else {
        if (bVar1 != 99) goto LAB_0012a628;
        *param_1 = (long)(pcVar21 + 2);
        uVar12 = FUN_0012d5c4(param_1);
        auVar30._8_8_ = local_140._8_8_;
        auVar30._0_8_ = local_140._0_8_;
        if ((uVar12 & 1) == 0) {
          uVar12 = FUN_0012d5c4(param_1);
          auVar30._8_8_ = local_140._8_8_;
          auVar30._0_8_ = local_140._0_8_;
          if ((uVar12 & 1) == 0) {
                    /* try { // try from 0012a148 to 0012a14f has its CatchHandler @ 0012ab50 */
            local_120 = FUN_0012a0a0(param_1);
            auVar30._8_8_ = local_140._8_8_;
            auVar30._0_8_ = local_140._0_8_;
            if (local_120 != 0) {
              puVar13 = (undefined8 *)FUN_0012d774(param_1,&local_120);
              goto LAB_0012aa10;
            }
          }
        }
      }
    }
  }
LAB_0012aa0c:
  puVar13 = (undefined8 *)0x0;
  local_140 = auVar30;
LAB_0012aa10:
  FUN_0012d070(auStack_100);
  return puVar13;
}


// ===== 0012ab78  FUN_0012ab78 =====

undefined1  [16] FUN_0012ab78(long *param_1,ulong param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined1 auVar4 [16];
  
  auVar4._0_8_ = (byte *)*param_1;
  pbVar1 = (byte *)param_1[1];
  pbVar2 = auVar4._0_8_;
  if ((((param_2 & 1) != 0) && (auVar4._0_8_ != pbVar1)) && (*auVar4._0_8_ == 0x6e)) {
    pbVar2 = auVar4._0_8_ + 1;
    *param_1 = (long)pbVar2;
  }
  if ((pbVar1 == pbVar2) || (*pbVar2 - 0x3a < 0xfffffff6)) {
    return ZEXT816(0);
  }
  do {
    pbVar3 = pbVar2;
    if (*pbVar2 - 0x3a < 0xfffffff6) break;
    pbVar2 = pbVar2 + 1;
    *param_1 = (long)pbVar2;
    pbVar3 = pbVar1;
  } while (pbVar2 != pbVar1);
  auVar4._8_8_ = (long)pbVar3 - (long)auVar4._0_8_;
  return auVar4;
}


// ===== 0012ac04  FUN_0012ac04 =====

undefined8 * FUN_0012ac04(long param_1,char *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  size_t sVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  void *pvVar6;
  
  pvVar6 = *(void **)(param_1 + 0x1330);
  lVar3 = *(long *)((long)pvVar6 + 8);
  puVar1 = (undefined8 *)pvVar6;
  if (lVar3 - 0xfc0U < 0xfffffffffffff010) {
    puVar1 = (undefined8 *)malloc(0x1000);
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar3 = 0;
    *puVar1 = pvVar6;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar3 + 0x30;
  sVar2 = strlen(param_2);
  uVar4 = *param_3;
  puVar5 = (undefined8 *)((long)puVar1 + lVar3 + 0x10);
  *puVar5 = &PTR_FUN_0014e068;
  *(char **)((long)puVar1 + lVar3 + 0x20) = param_2;
  *(size_t *)((long)puVar1 + lVar3 + 0x28) = sVar2;
  *(undefined1 *)((long)puVar1 + lVar3 + 0x18) = 0x15;
  *(ushort *)((long)puVar1 + lVar3 + 0x19) =
       *(ushort *)((long)puVar1 + lVar3 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar3 + 0x30) = uVar4;
  return puVar5;
}


// ===== 0012acb8  FUN_0012acb8 =====

byte * FUN_0012acb8(long *param_1)

{
  byte bVar1;
  ulong uVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  void *pvVar7;
  undefined *puVar8;
  ushort uVar9;
  long lVar10;
  undefined8 uVar11;
  char *pcVar12;
  ulong uVar13;
  byte *pbVar14;
  uint uVar15;
  size_t __n;
  long *__src;
  long *plVar16;
  byte *local_58;
  undefined1 local_50 [16];
  byte *local_28;
  
  pbVar5 = (byte *)*param_1;
  pbVar6 = (byte *)param_1[1];
  local_58 = (byte *)0x0;
  uVar2 = (long)pbVar6 - (long)pbVar5;
  if (pbVar6 == pbVar5) goto code_r0x0012b8d4;
  bVar1 = *pbVar5;
  uVar15 = 0;
  switch(bVar1) {
  case 0x41:
    pbVar4 = pbVar5 + 1;
    local_28 = (byte *)0x0;
    *param_1 = (long)pbVar4;
    if (pbVar6 == pbVar4) {
LAB_0012bbbc:
      pbVar6 = (byte *)FUN_0012ff04(param_1);
      if (pbVar6 == (byte *)0x0) goto joined_r0x0012b3a4;
      pcVar12 = (char *)*param_1;
      if ((pcVar12 == (char *)param_1[1]) || (*pcVar12 != '_')) {
        return (byte *)0x0;
      }
      pbVar5 = (byte *)(pcVar12 + 1);
      local_28 = pbVar6;
    }
    else if (*pbVar4 - 0x3a < 0xfffffff6) {
      if (*pbVar4 != 0x5f) goto LAB_0012bbbc;
      pbVar5 = pbVar5 + 2;
    }
    else {
      local_50 = FUN_0012ab78(param_1,0);
      local_28 = (byte *)FUN_0012f9d8(param_1,local_50);
      pcVar12 = (char *)*param_1;
      if (pcVar12 == (char *)param_1[1]) {
        return (byte *)0x0;
      }
      if (*pcVar12 != '_') {
        return (byte *)0x0;
      }
      pbVar5 = (byte *)(pcVar12 + 1);
    }
    *param_1 = (long)pbVar5;
    pbVar6 = (byte *)FUN_0012acb8(param_1);
    local_50._0_8_ = pbVar6;
    if (pbVar6 != (byte *)0x0) {
      pbVar6 = (byte *)FUN_00140f40(param_1,local_50,&local_28);
    }
    goto joined_r0x0012b3a4;
  default:
    goto code_r0x0012b8d4;
  case 0x43:
    *param_1 = (long)(pbVar5 + 1);
    local_50._0_8_ = FUN_0012acb8(param_1);
    if ((byte *)local_50._0_8_ == (byte *)0x0) {
      return (byte *)0x0;
    }
    pbVar6 = (byte *)FUN_0013f7a0(param_1,local_50);
    goto LAB_0012b8e0;
  case 0x44:
    if (uVar2 < 2) {
      return (byte *)0x0;
    }
    bVar1 = pbVar5[1];
    pbVar4 = (byte *)0x0;
    switch(bVar1) {
    case 0x42:
    case 0x55:
      pbVar5 = pbVar5 + 2;
      *param_1 = (long)pbVar5;
      if ((pbVar6 == pbVar5) || (*pbVar5 - 0x3a < 0xfffffff6)) {
        local_50._0_8_ = FUN_0012ff04(param_1);
        if (local_50._0_8_ == 0) {
          return (byte *)0x0;
        }
      }
      else {
        local_50 = FUN_0012ab78(param_1,0);
        lVar10 = FUN_0012f9d8(param_1,local_50);
        local_50._0_8_ = lVar10;
      }
      pcVar12 = (char *)*param_1;
      if (pcVar12 == (char *)param_1[1]) {
        return (byte *)0x0;
      }
      if (*pcVar12 != '_') {
        return (byte *)0x0;
      }
      *param_1 = (long)(pcVar12 + 1);
      pbVar5 = (byte *)FUN_0013f038(param_1,local_50,bVar1 == 0x42);
      return pbVar5;
    default:
      goto code_r0x0012baa4;
    case 0x46:
      *param_1 = (long)(pbVar5 + 2);
      local_50 = FUN_0012ab78(param_1,0);
      uVar11 = FUN_0012f9d8(param_1,local_50);
      pcVar12 = (char *)*param_1;
      if ((pcVar12 != (char *)param_1[1]) && (*pcVar12 == '_')) {
        *param_1 = (long)(pcVar12 + 1);
        local_50._0_8_ = uVar11;
        pbVar5 = (byte *)FUN_0013ef98(param_1,local_50);
        return pbVar5;
      }
      return (byte *)0x0;
    case 0x4b:
    case 0x6b:
      local_50._0_8_ = " auto";
      if (bVar1 != 0x6b) {
        local_50._0_8_ = " decltype(auto)";
      }
      local_50._8_8_ = 5;
      if (bVar1 != 0x6b) {
        local_50._8_8_ = 0xf;
      }
      *param_1 = (long)(pbVar5 + 2);
      local_28 = (byte *)FUN_0012c1f0(param_1,0);
      if (local_28 != (byte *)0x0) {
        pbVar5 = (byte *)FUN_0013f0e8(param_1,&local_28,local_50);
        return pbVar5;
      }
      return (byte *)0x0;
    case 0x4f:
    case 0x6f:
    case 0x77:
    case 0x78:
      goto code_r0x0012b648;
    case 0x54:
    case 0x74:
      pbVar6 = (byte *)FUN_0012efd8(param_1);
      break;
    case 0x61:
      puVar8 = &DAT_00112468;
      goto LAB_0012bf38;
    case 99:
      pcVar12 = "decltype(auto)";
      goto LAB_0012bfb0;
    case 100:
      pcVar12 = "decimal64";
      goto LAB_0012bf04;
    case 0x65:
      *param_1 = (long)(pbVar5 + 2);
      pbVar5 = (byte *)FUN_0013ee44(param_1,"decimal128");
      return pbVar5;
    case 0x66:
      pcVar12 = "decimal32";
LAB_0012bf04:
      *param_1 = (long)(pbVar5 + 2);
      pbVar5 = (byte *)FUN_0013ecf4(param_1,pcVar12);
      return pbVar5;
    case 0x68:
      puVar8 = &DAT_00113999;
LAB_0012bf38:
      *param_1 = (long)(pbVar5 + 2);
      pbVar5 = (byte *)FUN_0012fb50(param_1,puVar8);
      return pbVar5;
    case 0x69:
      pcVar12 = "char32_t";
      goto LAB_0012bf6c;
    case 0x6e:
      pcVar12 = "std::nullptr_t";
LAB_0012bfb0:
      *param_1 = (long)(pbVar5 + 2);
      pbVar5 = (byte *)FUN_0013cfec(param_1,pcVar12);
      return pbVar5;
    case 0x70:
      *param_1 = (long)(pbVar5 + 2);
      local_50._0_8_ = FUN_0012acb8(param_1);
      if ((byte *)local_50._0_8_ == (byte *)0x0) {
        return (byte *)0x0;
      }
      pbVar6 = (byte *)FUN_001339f0(param_1,local_50);
      goto LAB_0012b8e0;
    case 0x73:
      pcVar12 = "char16_t";
LAB_0012bf6c:
      *param_1 = (long)(pbVar5 + 2);
      pbVar5 = (byte *)FUN_0013ed9c(param_1,pcVar12);
      return pbVar5;
    case 0x75:
      *param_1 = (long)(pbVar5 + 2);
      pbVar5 = (byte *)FUN_00136044(param_1,"char8_t");
      return pbVar5;
    case 0x76:
      pbVar6 = (byte *)FUN_0013f194(param_1);
    }
    goto joined_r0x0012b3a4;
  case 0x46:
    goto code_r0x0012b648;
  case 0x47:
    *param_1 = (long)(pbVar5 + 1);
    local_50._0_8_ = FUN_0012acb8(param_1);
    if ((byte *)local_50._0_8_ == (byte *)0x0) {
      return (byte *)0x0;
    }
    pbVar6 = (byte *)FUN_0013f850(param_1,local_50);
    goto LAB_0012b8e0;
  case 0x4b:
  case 0x56:
code_r0x0012b318:
    if (bVar1 == 0x56) {
      uVar15 = uVar15 + 1;
    }
    uVar13 = (ulong)uVar15;
    if (uVar13 < uVar2) {
LAB_0012b330:
      if (pbVar5[uVar13] == 0x4b) {
        uVar15 = uVar15 + 1;
      }
      uVar13 = (ulong)uVar15;
    }
    goto LAB_0012b344;
  case 0x4d:
    *param_1 = (long)(pbVar5 + 1);
    local_50._0_8_ = FUN_0012acb8(param_1);
    pbVar6 = (byte *)local_50._0_8_;
    if (((byte *)local_50._0_8_ != (byte *)0x0) &&
       (local_28 = (byte *)FUN_0012acb8(param_1), pbVar6 = local_28, local_28 != (byte *)0x0)) {
      pbVar6 = (byte *)FUN_001411bc(param_1,local_50,&local_28);
    }
    goto joined_r0x0012b3a4;
  case 0x4f:
    *param_1 = (long)(pbVar5 + 1);
    local_50._0_8_ = FUN_0012acb8(param_1);
    if ((byte *)local_50._0_8_ == (byte *)0x0) {
      return (byte *)0x0;
    }
    local_28 = (byte *)CONCAT44(local_28._4_4_,1);
    goto LAB_0012b98c;
  case 0x50:
    *param_1 = (long)(pbVar5 + 1);
    local_50._0_8_ = FUN_0012acb8(param_1);
    if ((byte *)local_50._0_8_ == (byte *)0x0) {
      return (byte *)0x0;
    }
    pbVar6 = (byte *)FUN_0013f638(param_1,local_50);
    goto LAB_0012b8e0;
  case 0x52:
    *param_1 = (long)(pbVar5 + 1);
    local_50._0_8_ = FUN_0012acb8(param_1);
    if ((byte *)local_50._0_8_ == (byte *)0x0) {
      return (byte *)0x0;
    }
    local_28 = (byte *)((ulong)local_28 & 0xffffffff00000000);
LAB_0012b98c:
    pbVar6 = (byte *)FUN_0013f6e4(param_1,local_50,&local_28);
    goto LAB_0012b8e0;
  case 0x53:
    if ((uVar2 < 2) || (pbVar5[1] != 0x74)) {
      local_28 = (byte *)((ulong)local_28 & 0xffffffffffffff00);
      pbVar6 = (byte *)FUN_0012e444(param_1,0,&local_28);
      if (pbVar6 == (byte *)0x0) {
        return (byte *)0x0;
      }
      local_58 = pbVar6;
      if (((char *)param_1[1] == (char *)*param_1) || (*(char *)*param_1 != 'I')) {
        if (((ulong)local_28 & 0xff) != 0) {
          return pbVar6;
        }
        goto LAB_0012b8e0;
      }
      if (((char)local_28 != '\0') && ((char)param_1[0x61] == '\0')) {
        return pbVar6;
      }
      if ((char)local_28 == '\0') {
        FUN_0012cca8(param_1 + 0x25,&local_58);
      }
      local_50._0_8_ = FUN_0012e5c4(param_1,0);
      if ((byte *)local_50._0_8_ == (byte *)0x0) {
        return (byte *)0x0;
      }
LAB_0012bba8:
      pbVar6 = (byte *)FUN_0012eb60(param_1,&local_58,local_50);
      goto LAB_0012b8e0;
    }
    goto code_r0x0012b8d4;
  case 0x54:
    if (((uVar2 < 2) || (0x10 < pbVar5[1] - 0x65)) ||
       ((1 << (ulong)(pbVar5[1] - 0x65 & 0x1f) & 0x14001U) == 0)) {
      pbVar6 = (byte *)FUN_0012ec08(param_1);
      if (pbVar6 == (byte *)0x0) {
        return (byte *)0x0;
      }
      local_58 = pbVar6;
      if ((((char)param_1[0x61] == '\0') || ((char *)param_1[1] == (char *)*param_1)) ||
         (*(char *)*param_1 != 'I')) goto LAB_0012b8e0;
      local_50._0_8_ = FUN_0012e5c4(param_1,0);
      if ((byte *)local_50._0_8_ == (byte *)0x0) {
        return (byte *)0x0;
      }
      goto LAB_0012bba8;
    }
code_r0x0012b8d4:
    pbVar6 = (byte *)FUN_0013f4a4(param_1);
    goto joined_r0x0012b3a4;
  case 0x55:
    goto code_r0x0012b39c;
  case 0x61:
    pvVar7 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar5 + 1);
    lVar10 = *(long *)((long)pvVar7 + 8);
    puVar3 = (undefined8 *)pvVar7;
    if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
      puVar3 = (undefined8 *)malloc(0x1000);
      if (puVar3 == (undefined8 *)0x0) {
LAB_0012c034:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar10 = 0;
      *puVar3 = pvVar7;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    pbVar4 = (byte *)((long)puVar3 + lVar10 + 0x10);
    *(undefined ***)pbVar4 = &PTR_FUN_0014e158;
    uVar9 = *(ushort *)((long)puVar3 + lVar10 + 0x19);
    *(undefined1 *)((long)puVar3 + lVar10 + 0x18) = 8;
    pcVar12 = "signed char";
    goto LAB_0012b1fc;
  case 0x62:
    pvVar7 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar5 + 1);
    lVar10 = *(long *)((long)pvVar7 + 8);
    puVar3 = (undefined8 *)pvVar7;
    if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
      puVar3 = (undefined8 *)malloc(0x1000);
      if (puVar3 == (undefined8 *)0x0) goto LAB_0012c034;
      lVar10 = 0;
      *puVar3 = pvVar7;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    pbVar4 = (byte *)((long)puVar3 + lVar10 + 0x10);
    *(undefined ***)pbVar4 = &PTR_FUN_0014e158;
    uVar9 = *(ushort *)((long)puVar3 + lVar10 + 0x19);
    *(undefined1 *)((long)puVar3 + lVar10 + 0x18) = 8;
    pcVar12 = "bool";
    goto LAB_0012ba8c;
  case 99:
    pvVar7 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar5 + 1);
    lVar10 = *(long *)((long)pvVar7 + 8);
    puVar3 = (undefined8 *)pvVar7;
    if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
      puVar3 = (undefined8 *)malloc(0x1000);
      if (puVar3 == (undefined8 *)0x0) goto LAB_0012c034;
      lVar10 = 0;
      *puVar3 = pvVar7;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    pbVar4 = (byte *)((long)puVar3 + lVar10 + 0x10);
    *(undefined ***)pbVar4 = &PTR_FUN_0014e158;
    uVar9 = *(ushort *)((long)puVar3 + lVar10 + 0x19);
    *(undefined1 *)((long)puVar3 + lVar10 + 0x18) = 8;
    pcVar12 = "char";
    goto LAB_0012ba8c;
  case 100:
    pvVar7 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar5 + 1);
    lVar10 = *(long *)((long)pvVar7 + 8);
    puVar3 = (undefined8 *)pvVar7;
    if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
      puVar3 = (undefined8 *)malloc(0x1000);
      if (puVar3 == (undefined8 *)0x0) goto LAB_0012c034;
      lVar10 = 0;
      *puVar3 = pvVar7;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    pbVar4 = (byte *)((long)puVar3 + lVar10 + 0x10);
    *(undefined ***)pbVar4 = &PTR_FUN_0014e158;
    *(undefined1 *)((long)puVar3 + lVar10 + 0x18) = 8;
    pcVar12 = "double";
    *(ushort *)((long)puVar3 + lVar10 + 0x19) =
         *(ushort *)((long)puVar3 + lVar10 + 0x19) & 0xf000 | 0x540;
    uVar11 = 6;
    break;
  case 0x65:
    pvVar7 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar5 + 1);
    lVar10 = *(long *)((long)pvVar7 + 8);
    puVar3 = (undefined8 *)pvVar7;
    if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
      puVar3 = (undefined8 *)malloc(0x1000);
      if (puVar3 == (undefined8 *)0x0) goto LAB_0012c034;
      lVar10 = 0;
      *puVar3 = pvVar7;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    pbVar4 = (byte *)((long)puVar3 + lVar10 + 0x10);
    *(undefined ***)pbVar4 = &PTR_FUN_0014e158;
    uVar9 = *(ushort *)((long)puVar3 + lVar10 + 0x19);
    *(undefined1 *)((long)puVar3 + lVar10 + 0x18) = 8;
    pcVar12 = "long double";
LAB_0012b1fc:
    *(ushort *)(pbVar4 + 9) = uVar9 & 0xf000 | 0x540;
    uVar11 = 0xb;
    break;
  case 0x66:
    pvVar7 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar5 + 1);
    lVar10 = *(long *)((long)pvVar7 + 8);
    puVar3 = (undefined8 *)pvVar7;
    if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
      puVar3 = (undefined8 *)malloc(0x1000);
      if (puVar3 == (undefined8 *)0x0) goto LAB_0012c034;
      lVar10 = 0;
      *puVar3 = pvVar7;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    pbVar4 = (byte *)((long)puVar3 + lVar10 + 0x10);
    *(undefined ***)pbVar4 = &PTR_FUN_0014e158;
    uVar9 = *(ushort *)((long)puVar3 + lVar10 + 0x19);
    *(undefined1 *)((long)puVar3 + lVar10 + 0x18) = 8;
    pcVar12 = "float";
    goto LAB_0012b7b4;
  case 0x67:
    pvVar7 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar5 + 1);
    lVar10 = *(long *)((long)pvVar7 + 8);
    puVar3 = (undefined8 *)pvVar7;
    if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
      puVar3 = (undefined8 *)malloc(0x1000);
      if (puVar3 == (undefined8 *)0x0) goto LAB_0012c034;
      lVar10 = 0;
      *puVar3 = pvVar7;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    pbVar4 = (byte *)((long)puVar3 + lVar10 + 0x10);
    *(undefined ***)pbVar4 = &PTR_FUN_0014e158;
    *(undefined1 *)((long)puVar3 + lVar10 + 0x18) = 8;
    pcVar12 = "__float128";
    *(ushort *)((long)puVar3 + lVar10 + 0x19) =
         *(ushort *)((long)puVar3 + lVar10 + 0x19) & 0xf000 | 0x540;
    uVar11 = 10;
    break;
  case 0x68:
    pvVar7 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar5 + 1);
    lVar10 = *(long *)((long)pvVar7 + 8);
    puVar3 = (undefined8 *)pvVar7;
    if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
      puVar3 = (undefined8 *)malloc(0x1000);
      if (puVar3 == (undefined8 *)0x0) goto LAB_0012c034;
      lVar10 = 0;
      *puVar3 = pvVar7;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    pbVar4 = (byte *)((long)puVar3 + lVar10 + 0x10);
    *(undefined ***)pbVar4 = &PTR_FUN_0014e158;
    uVar9 = *(ushort *)((long)puVar3 + lVar10 + 0x19);
    *(undefined1 *)((long)puVar3 + lVar10 + 0x18) = 8;
    pcVar12 = "unsigned char";
    goto LAB_0012b2ec;
  case 0x69:
    pvVar7 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar5 + 1);
    lVar10 = *(long *)((long)pvVar7 + 8);
    puVar3 = (undefined8 *)pvVar7;
    if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
      puVar3 = (undefined8 *)malloc(0x1000);
      if (puVar3 == (undefined8 *)0x0) goto LAB_0012c034;
      lVar10 = 0;
      *puVar3 = pvVar7;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    pbVar4 = (byte *)((long)puVar3 + lVar10 + 0x10);
    *(undefined ***)pbVar4 = &PTR_FUN_0014e158;
    uVar9 = *(ushort *)((long)puVar3 + lVar10 + 0x19);
    *(undefined1 *)((long)puVar3 + lVar10 + 0x18) = 8;
    pcVar12 = "int";
    goto LAB_0012b6c4;
  case 0x6a:
    pvVar7 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar5 + 1);
    lVar10 = *(long *)((long)pvVar7 + 8);
    puVar3 = (undefined8 *)pvVar7;
    if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
      puVar3 = (undefined8 *)malloc(0x1000);
      if (puVar3 == (undefined8 *)0x0) goto LAB_0012c034;
      lVar10 = 0;
      *puVar3 = pvVar7;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    pbVar4 = (byte *)((long)puVar3 + lVar10 + 0x10);
    *(undefined ***)pbVar4 = &PTR_FUN_0014e158;
    *(undefined1 *)((long)puVar3 + lVar10 + 0x18) = 8;
    pcVar12 = "unsigned int";
    *(ushort *)((long)puVar3 + lVar10 + 0x19) =
         *(ushort *)((long)puVar3 + lVar10 + 0x19) & 0xf000 | 0x540;
    uVar11 = 0xc;
    break;
  case 0x6c:
    pvVar7 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar5 + 1);
    lVar10 = *(long *)((long)pvVar7 + 8);
    puVar3 = (undefined8 *)pvVar7;
    if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
      puVar3 = (undefined8 *)malloc(0x1000);
      if (puVar3 == (undefined8 *)0x0) goto LAB_0012c034;
      lVar10 = 0;
      *puVar3 = pvVar7;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    pbVar4 = (byte *)((long)puVar3 + lVar10 + 0x10);
    *(undefined ***)pbVar4 = &PTR_FUN_0014e158;
    uVar9 = *(ushort *)((long)puVar3 + lVar10 + 0x19);
    *(undefined1 *)((long)puVar3 + lVar10 + 0x18) = 8;
    pcVar12 = "long";
    goto LAB_0012ba8c;
  case 0x6d:
    pvVar7 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar5 + 1);
    lVar10 = *(long *)((long)pvVar7 + 8);
    puVar3 = (undefined8 *)pvVar7;
    if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
      puVar3 = (undefined8 *)malloc(0x1000);
      if (puVar3 == (undefined8 *)0x0) goto LAB_0012c034;
      lVar10 = 0;
      *puVar3 = pvVar7;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    pbVar4 = (byte *)((long)puVar3 + lVar10 + 0x10);
    *(undefined ***)pbVar4 = &PTR_FUN_0014e158;
    uVar9 = *(ushort *)((long)puVar3 + lVar10 + 0x19);
    *(undefined1 *)((long)puVar3 + lVar10 + 0x18) = 8;
    pcVar12 = "unsigned long";
LAB_0012b2ec:
    *(ushort *)(pbVar4 + 9) = uVar9 & 0xf000 | 0x540;
    uVar11 = 0xd;
    break;
  case 0x6e:
    pvVar7 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar5 + 1);
    lVar10 = *(long *)((long)pvVar7 + 8);
    puVar3 = (undefined8 *)pvVar7;
    if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
      puVar3 = (undefined8 *)malloc(0x1000);
      if (puVar3 == (undefined8 *)0x0) goto LAB_0012c034;
      lVar10 = 0;
      *puVar3 = pvVar7;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    pbVar5 = (byte *)((long)puVar3 + lVar10 + 0x10);
    *(undefined ***)pbVar5 = &PTR_FUN_0014e158;
    *(undefined1 *)((long)puVar3 + lVar10 + 0x18) = 8;
    *(ushort *)((long)puVar3 + lVar10 + 0x19) =
         *(ushort *)((long)puVar3 + lVar10 + 0x19) & 0xf000 | 0x540;
    *(char **)((long)puVar3 + lVar10 + 0x20) = "__int128";
    *(undefined8 *)((long)puVar3 + lVar10 + 0x28) = 8;
    return pbVar5;
  case 0x6f:
    pvVar7 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar5 + 1);
    lVar10 = *(long *)((long)pvVar7 + 8);
    puVar3 = (undefined8 *)pvVar7;
    if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
      puVar3 = (undefined8 *)malloc(0x1000);
      if (puVar3 == (undefined8 *)0x0) goto LAB_0012c034;
      lVar10 = 0;
      *puVar3 = pvVar7;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    pbVar4 = (byte *)((long)puVar3 + lVar10 + 0x10);
    *(undefined ***)pbVar4 = &PTR_FUN_0014e158;
    *(undefined1 *)((long)puVar3 + lVar10 + 0x18) = 8;
    pcVar12 = "unsigned __int128";
    *(ushort *)((long)puVar3 + lVar10 + 0x19) =
         *(ushort *)((long)puVar3 + lVar10 + 0x19) & 0xf000 | 0x540;
    uVar11 = 0x11;
    break;
  case 0x72:
    if (1 < uVar2) {
      bVar1 = pbVar5[1];
      uVar15 = 1;
      goto code_r0x0012b318;
    }
    uVar15 = 1;
    uVar13 = 1;
    if (1 < uVar2) goto LAB_0012b330;
LAB_0012b344:
    if ((uVar13 < uVar2) &&
       ((pbVar5[uVar13] == 0x46 ||
        ((((pbVar5[uVar13] == 0x44 && ((ulong)uVar15 + 1 < uVar2)) &&
          (pbVar5[(ulong)uVar15 + 1] - 0x4f < 0x2a)) &&
         ((1L << ((ulong)(pbVar5[(ulong)uVar15 + 1] - 0x4f) & 0x3f) & 0x30100000001U) != 0)))))) {
code_r0x0012b648:
      pbVar6 = (byte *)FUN_0013e2a8(param_1);
    }
    else {
code_r0x0012b39c:
      pbVar6 = (byte *)FUN_0013e898(param_1);
    }
joined_r0x0012b3a4:
    if (pbVar6 == (byte *)0x0) {
      return (byte *)0x0;
    }
LAB_0012b8e0:
    plVar16 = (long *)param_1[0x26];
    if (plVar16 == (long *)param_1[0x27]) {
      __src = (long *)param_1[0x25];
      __n = (long)plVar16 - (long)__src;
      if (__src == param_1 + 0x28) {
        pvVar7 = malloc(__n * 2);
        if (pvVar7 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (plVar16 != __src) {
          memmove(pvVar7,__src,__n);
        }
        param_1[0x25] = (long)pvVar7;
      }
      else {
        pvVar7 = realloc(__src,__n * 2);
        param_1[0x25] = (long)pvVar7;
        if (pvVar7 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
      }
      plVar16 = (long *)((long)pvVar7 + __n);
      param_1[0x27] = (long)((long)pvVar7 + ((long)__n >> 2) * 8);
    }
    param_1[0x26] = (long)(plVar16 + 1);
    *plVar16 = (long)pbVar6;
    return pbVar6;
  case 0x73:
    pvVar7 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar5 + 1);
    lVar10 = *(long *)((long)pvVar7 + 8);
    puVar3 = (undefined8 *)pvVar7;
    if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
      puVar3 = (undefined8 *)malloc(0x1000);
      if (puVar3 == (undefined8 *)0x0) goto LAB_0012c034;
      lVar10 = 0;
      *puVar3 = pvVar7;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    pbVar4 = (byte *)((long)puVar3 + lVar10 + 0x10);
    *(undefined ***)pbVar4 = &PTR_FUN_0014e158;
    uVar9 = *(ushort *)((long)puVar3 + lVar10 + 0x19);
    *(undefined1 *)((long)puVar3 + lVar10 + 0x18) = 8;
    pcVar12 = "short";
LAB_0012b7b4:
    *(ushort *)(pbVar4 + 9) = uVar9 & 0xf000 | 0x540;
    uVar11 = 5;
    break;
  case 0x74:
    pvVar7 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar5 + 1);
    lVar10 = *(long *)((long)pvVar7 + 8);
    puVar3 = (undefined8 *)pvVar7;
    if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
      puVar3 = (undefined8 *)malloc(0x1000);
      if (puVar3 == (undefined8 *)0x0) goto LAB_0012c034;
      lVar10 = 0;
      *puVar3 = pvVar7;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    pbVar4 = (byte *)((long)puVar3 + lVar10 + 0x10);
    *(undefined ***)pbVar4 = &PTR_FUN_0014e158;
    *(undefined1 *)((long)puVar3 + lVar10 + 0x18) = 8;
    pcVar12 = "unsigned short";
    *(ushort *)((long)puVar3 + lVar10 + 0x19) =
         *(ushort *)((long)puVar3 + lVar10 + 0x19) & 0xf000 | 0x540;
    uVar11 = 0xe;
    break;
  case 0x75:
    pbVar4 = pbVar5 + 1;
    *param_1 = (long)pbVar4;
    if (pbVar6 == pbVar4) {
      return (byte *)0x0;
    }
    if (*pbVar4 - 0x3a < 0xfffffff6) {
      return (byte *)0x0;
    }
    local_50._8_8_ = 0;
    pbVar4 = pbVar5 + 1;
    pbVar5 = pbVar5 + 2;
    do {
      *param_1 = (long)pbVar5;
      local_50._8_8_ = ((ulong)pbVar5[-1] + local_50._8_8_ * 10) - 0x30;
      local_50._0_8_ = pbVar6;
      pbVar14 = pbVar6;
      if (pbVar5 == pbVar6) break;
      bVar1 = *pbVar5;
      local_50._0_8_ = pbVar4 + 1;
      pbVar4 = (byte *)local_50._0_8_;
      pbVar14 = pbVar5;
      pbVar5 = pbVar5 + 1;
    } while (bVar1 - 0x30 < 10);
    if ((ulong)((long)pbVar6 - local_50._0_8_) < (ulong)local_50._8_8_) {
      return (byte *)0x0;
    }
    pbVar14 = pbVar14 + local_50._8_8_;
    *param_1 = (long)pbVar14;
    if (local_50._8_8_ == 0) {
      return (byte *)0x0;
    }
    if ((pbVar14 == pbVar6) || (*pbVar14 != 0x49)) {
      pbVar6 = (byte *)FUN_0012e1cc(param_1,local_50);
    }
    else {
      *param_1 = (long)(pbVar14 + 1);
      local_28 = (byte *)FUN_0012acb8(param_1);
      if (local_28 == (byte *)0x0) {
        return (byte *)0x0;
      }
      pcVar12 = (char *)*param_1;
      if (pcVar12 == (char *)param_1[1]) {
        return (byte *)0x0;
      }
      if (*pcVar12 != 'E') {
        return (byte *)0x0;
      }
      *param_1 = (long)(pcVar12 + 1);
      pbVar6 = (byte *)FUN_0013eeec(param_1,local_50,&local_28);
    }
    goto LAB_0012b8e0;
  case 0x76:
    pvVar7 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar5 + 1);
    lVar10 = *(long *)((long)pvVar7 + 8);
    puVar3 = (undefined8 *)pvVar7;
    if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
      puVar3 = (undefined8 *)malloc(0x1000);
      if (puVar3 == (undefined8 *)0x0) goto LAB_0012c034;
      lVar10 = 0;
      *puVar3 = pvVar7;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    pbVar4 = (byte *)((long)puVar3 + lVar10 + 0x10);
    *(undefined ***)pbVar4 = &PTR_FUN_0014e158;
    uVar9 = *(ushort *)((long)puVar3 + lVar10 + 0x19);
    *(undefined1 *)((long)puVar3 + lVar10 + 0x18) = 8;
    pcVar12 = "void";
LAB_0012ba8c:
    *(ushort *)(pbVar4 + 9) = uVar9 & 0xf000 | 0x540;
    uVar11 = 4;
    break;
  case 0x77:
    pvVar7 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar5 + 1);
    lVar10 = *(long *)((long)pvVar7 + 8);
    puVar3 = (undefined8 *)pvVar7;
    if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
      puVar3 = (undefined8 *)malloc(0x1000);
      if (puVar3 == (undefined8 *)0x0) goto LAB_0012c034;
      lVar10 = 0;
      *puVar3 = pvVar7;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    pbVar4 = (byte *)((long)puVar3 + lVar10 + 0x10);
    *(undefined ***)pbVar4 = &PTR_FUN_0014e158;
    *(undefined1 *)((long)puVar3 + lVar10 + 0x18) = 8;
    pcVar12 = "wchar_t";
    *(ushort *)((long)puVar3 + lVar10 + 0x19) =
         *(ushort *)((long)puVar3 + lVar10 + 0x19) & 0xf000 | 0x540;
    uVar11 = 7;
    break;
  case 0x78:
    pvVar7 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar5 + 1);
    lVar10 = *(long *)((long)pvVar7 + 8);
    puVar3 = (undefined8 *)pvVar7;
    if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
      puVar3 = (undefined8 *)malloc(0x1000);
      if (puVar3 == (undefined8 *)0x0) goto LAB_0012c034;
      lVar10 = 0;
      *puVar3 = pvVar7;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    pbVar4 = (byte *)((long)puVar3 + lVar10 + 0x10);
    *(undefined ***)pbVar4 = &PTR_FUN_0014e158;
    *(undefined1 *)((long)puVar3 + lVar10 + 0x18) = 8;
    pcVar12 = "long long";
    *(ushort *)((long)puVar3 + lVar10 + 0x19) =
         *(ushort *)((long)puVar3 + lVar10 + 0x19) & 0xf000 | 0x540;
    uVar11 = 9;
    break;
  case 0x79:
    pvVar7 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar5 + 1);
    lVar10 = *(long *)((long)pvVar7 + 8);
    puVar3 = (undefined8 *)pvVar7;
    if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
      puVar3 = (undefined8 *)malloc(0x1000);
      if (puVar3 == (undefined8 *)0x0) goto LAB_0012c034;
      lVar10 = 0;
      *puVar3 = pvVar7;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    pbVar4 = (byte *)((long)puVar3 + lVar10 + 0x10);
    *(undefined ***)pbVar4 = &PTR_FUN_0014e158;
    *(undefined1 *)((long)puVar3 + lVar10 + 0x18) = 8;
    pcVar12 = "unsigned long long";
    *(ushort *)((long)puVar3 + lVar10 + 0x19) =
         *(ushort *)((long)puVar3 + lVar10 + 0x19) & 0xf000 | 0x540;
    uVar11 = 0x12;
    break;
  case 0x7a:
    pvVar7 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar5 + 1);
    lVar10 = *(long *)((long)pvVar7 + 8);
    puVar3 = (undefined8 *)pvVar7;
    if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
      puVar3 = (undefined8 *)malloc(0x1000);
      if (puVar3 == (undefined8 *)0x0) goto LAB_0012c034;
      lVar10 = 0;
      *puVar3 = pvVar7;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    pbVar4 = (byte *)((long)puVar3 + lVar10 + 0x10);
    *(undefined ***)pbVar4 = &PTR_FUN_0014e158;
    uVar9 = *(ushort *)((long)puVar3 + lVar10 + 0x19);
    *(undefined1 *)((long)puVar3 + lVar10 + 0x18) = 8;
    pcVar12 = "...";
LAB_0012b6c4:
    *(ushort *)(pbVar4 + 9) = uVar9 & 0xf000 | 0x540;
    uVar11 = 3;
  }
  *(char **)(pbVar4 + 0x10) = pcVar12;
  *(undefined8 *)(pbVar4 + 0x18) = uVar11;
code_r0x0012baa4:
  return pbVar4;
}


// ===== 0012c03c  FUN_0012c03c =====

void FUN_0012c03c(long *param_1,long param_2)

{
  size_t sVar1;
  long *plVar2;
  void *pvVar3;
  void *pvVar4;
  long lVar5;
  long *__dest;
  long *plVar6;
  
  pvVar4 = (void *)(param_2 + 0x2b0);
  plVar2 = param_1 + 4;
  param_1[5] = 0;
  *plVar2 = 0;
  *param_1 = param_2;
  param_1[1] = (long)plVar2;
  __dest = param_1 + 0xb;
  param_1[0xc] = 0;
  *__dest = 0;
  plVar6 = param_1 + 8;
  *plVar6 = (long)__dest;
  param_1[2] = (long)plVar2;
  param_1[3] = (long)plVar6;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = (long)__dest;
  param_1[10] = (long)(param_1 + 0x13);
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  pvVar3 = *(void **)(param_2 + 0x298);
  if (pvVar3 == pvVar4) {
    sVar1 = *(long *)(param_2 + 0x2a0) - (long)pvVar3;
    pvVar4 = pvVar3;
    if (sVar1 != 0) {
      memmove(plVar2,pvVar3,sVar1);
      pvVar3 = *(void **)(param_2 + 0x2a0);
      pvVar4 = *(void **)(param_2 + 0x298);
    }
    param_1[2] = (long)plVar2 + ((long)pvVar3 - (long)pvVar4);
    *(void **)(param_2 + 0x2a0) = pvVar4;
    pvVar4 = *(void **)(param_2 + 0x240);
    plVar2 = (long *)*plVar6;
    if (pvVar4 != (void *)(param_2 + 600)) goto LAB_0012c0d8;
LAB_0012c178:
    if (plVar2 != __dest) {
      free(plVar2);
      param_1[8] = (long)__dest;
      param_1[9] = (long)__dest;
      pvVar4 = *(void **)(param_2 + 0x240);
      param_1[10] = (long)(param_1 + 0x13);
    }
    sVar1 = *(long *)(param_2 + 0x248) - (long)pvVar4;
    pvVar3 = pvVar4;
    if (sVar1 != 0) {
      memmove(__dest,pvVar4,sVar1);
      pvVar4 = *(void **)(param_2 + 0x248);
      pvVar3 = *(void **)(param_2 + 0x240);
    }
    param_1[9] = (long)__dest + ((long)pvVar4 - (long)pvVar3);
  }
  else {
    param_1[1] = (long)pvVar3;
    lVar5 = *(long *)(param_2 + 0x2a0);
    param_1[3] = *(long *)(param_2 + 0x2a8);
    param_1[2] = lVar5;
    *(void **)(param_2 + 0x298) = pvVar4;
    *(void **)(param_2 + 0x2a0) = pvVar4;
    *(long *)(param_2 + 0x2a8) = param_2 + 0x2d0;
    pvVar4 = *(void **)(param_2 + 0x240);
    plVar2 = (long *)*plVar6;
    if (pvVar4 == (void *)(param_2 + 600)) goto LAB_0012c178;
LAB_0012c0d8:
    *plVar6 = (long)pvVar4;
    if (plVar2 == __dest) {
      lVar5 = *(long *)(param_2 + 0x248);
      param_1[10] = *(long *)(param_2 + 0x250);
      param_1[9] = lVar5;
      *(long *)(param_2 + 0x240) = param_2 + 600;
      *(long *)(param_2 + 0x248) = param_2 + 600;
      *(long *)(param_2 + 0x250) = param_2 + 0x298;
      goto LAB_0012c1c4;
    }
    *(long **)(param_2 + 0x240) = plVar2;
    lVar5 = param_1[9];
    param_1[9] = *(long *)(param_2 + 0x248);
    *(long *)(param_2 + 0x248) = lVar5;
    lVar5 = param_1[10];
    param_1[10] = *(long *)(param_2 + 0x250);
    pvVar3 = *(void **)(param_2 + 0x240);
    *(long *)(param_2 + 0x250) = lVar5;
  }
  *(void **)(param_2 + 0x248) = pvVar3;
LAB_0012c1c4:
  lVar5 = *param_1;
  *(undefined8 *)(lVar5 + 0x2a0) = *(undefined8 *)(lVar5 + 0x298);
  *(undefined8 *)(lVar5 + 0x248) = *(undefined8 *)(lVar5 + 0x240);
  return;
}


// ===== 0012c1f0  FUN_0012c1f0 =====

undefined8 * FUN_0012c1f0(long *param_1,long param_2)

{
  char *pcVar1;
  byte *pbVar2;
  char *pcVar3;
  byte bVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  long lVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint uVar14;
  size_t sVar15;
  long *plVar16;
  void *pvVar17;
  long *plVar18;
  long local_110;
  ulong local_108 [19];
  long local_70 [2];
  
  pbVar2 = (byte *)*param_1;
  pbVar13 = (byte *)param_1[1];
  if (pbVar13 == pbVar2) {
LAB_0012c270:
    local_108[0] = local_108[0] & 0xffffffffffffff00;
    puVar5 = (undefined8 *)FUN_0012e444(param_1,param_2,local_108);
    if (puVar5 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    if (((char *)param_1[1] == (char *)*param_1) || (*(char *)*param_1 != 'I')) {
      if ((char)local_108[0] != '\0') {
        return (undefined8 *)0x0;
      }
      return puVar5;
    }
    if ((char)local_108[0] == '\0') {
      plVar16 = (long *)param_1[0x26];
      if (plVar16 == (long *)param_1[0x27]) {
        plVar8 = (long *)param_1[0x25];
        plVar18 = param_1 + 0x28;
        sVar15 = (long)plVar16 - (long)plVar8;
        if (plVar8 == plVar18) {
          pvVar17 = malloc(sVar15 * 2);
          if (pvVar17 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (plVar16 != plVar18) {
            memcpy(pvVar17,plVar18,sVar15);
          }
          param_1[0x25] = (long)pvVar17;
        }
        else {
          pvVar17 = realloc(plVar8,sVar15 * 2);
          param_1[0x25] = (long)pvVar17;
          if (pvVar17 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
        }
        plVar16 = (long *)((long)pvVar17 + sVar15);
        param_1[0x26] = (long)plVar16;
        param_1[0x27] = (long)((long)pvVar17 + ((long)sVar15 >> 2) * 8);
      }
      param_1[0x26] = (long)(plVar16 + 1);
      *plVar16 = (long)puVar5;
    }
    lVar6 = FUN_0012e5c4(param_1,param_2 != 0);
    if (lVar6 == 0) {
      return (undefined8 *)0x0;
    }
    if (param_2 != 0) {
      *(undefined1 *)(param_2 + 1) = 1;
    }
    puVar9 = (undefined8 *)param_1[0x266];
    lVar11 = *(long *)((long)puVar9 + 8);
    if (lVar11 - 0xfd0U < 0xfffffffffffff010) {
      puVar7 = (undefined8 *)malloc(0x1000);
      if (puVar7 == (undefined8 *)0x0) {
LAB_0012c904:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar11 = 0;
      *puVar7 = puVar9;
      puVar7[1] = 0;
      param_1[0x266] = (long)puVar7;
      puVar9 = puVar7;
    }
    *(long *)((long)puVar9 + 8) = lVar11 + 0x20;
    puVar7 = (undefined8 *)((long)puVar9 + lVar11 + 0x10);
    *puVar7 = &PTR_FUN_00150058;
    *(undefined8 **)((long)puVar9 + lVar11 + 0x20) = puVar5;
    *(long *)((long)puVar9 + lVar11 + 0x28) = lVar6;
    *(undefined1 *)((long)puVar9 + lVar11 + 0x18) = 0x2d;
    *(ushort *)((long)puVar9 + lVar11 + 0x19) =
         *(ushort *)((long)puVar9 + lVar11 + 0x19) & 0xf000 | 0x540;
    return puVar7;
  }
  if (*pbVar2 != 0x5a) {
    if (*pbVar2 != 0x4e) goto LAB_0012c270;
    pbVar12 = pbVar2 + 1;
    *param_1 = (long)pbVar12;
    pbVar10 = pbVar13;
    if (pbVar12 == pbVar13) {
      uVar14 = 0;
    }
    else {
      if (*pbVar12 == 0x48) {
        pbVar10 = pbVar2 + 2;
        *param_1 = (long)pbVar10;
        if (param_2 != 0) {
          *(undefined1 *)(param_2 + 0x18) = 1;
        }
        goto LAB_0012c404;
      }
      if (*pbVar12 == 0x72) {
        pbVar12 = pbVar2 + 2;
        uVar14 = 4;
        *param_1 = (long)pbVar12;
      }
      else {
        uVar14 = 0;
      }
      if (pbVar12 != pbVar13) {
        if (*pbVar12 == 0x56) {
          pbVar12 = pbVar12 + 1;
          uVar14 = uVar14 | 2;
          *param_1 = (long)pbVar12;
        }
        if ((pbVar12 != pbVar13) && (pbVar10 = pbVar12, *pbVar12 == 0x4b)) {
          uVar14 = uVar14 | 1;
          *param_1 = (long)(pbVar12 + 1);
          pbVar10 = pbVar12 + 1;
        }
      }
    }
    if (param_2 != 0) {
      *(uint *)(param_2 + 4) = uVar14;
    }
    if (pbVar10 != pbVar13) {
      if (*pbVar10 == 0x4f) {
        pbVar10 = pbVar10 + 1;
        *param_1 = (long)pbVar10;
        if (param_2 != 0) {
          *(undefined1 *)(param_2 + 8) = 2;
        }
        goto LAB_0012c404;
      }
      if (*pbVar10 == 0x52) {
        pbVar10 = pbVar10 + 1;
        *param_1 = (long)pbVar10;
        if (param_2 != 0) {
          *(undefined1 *)(param_2 + 8) = 1;
        }
        goto LAB_0012c404;
      }
    }
    if (param_2 != 0) {
      *(undefined1 *)(param_2 + 8) = 0;
    }
LAB_0012c404:
    plVar16 = param_1 + 0x28;
    puVar5 = (undefined8 *)0x0;
LAB_0012c420:
    do {
      if ((pbVar10 != pbVar13) && (*pbVar10 == 0x45)) {
        *param_1 = (long)(pbVar10 + 1);
        if (puVar5 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        if (param_1[0x25] == param_1[0x26]) {
          return (undefined8 *)0x0;
        }
        param_1[0x26] = param_1[0x26] + -8;
        return puVar5;
      }
      if (param_2 != 0) {
        *(undefined1 *)(param_2 + 1) = 0;
      }
      if (pbVar13 == pbVar10) {
LAB_0012c53c:
        puVar9 = (undefined8 *)0x0;
        goto LAB_0012c540;
      }
      bVar4 = *pbVar10;
      puVar9 = (undefined8 *)0x0;
      if (bVar4 < 0x53) {
        if (bVar4 == 0x44) {
          if (((ulong)((long)pbVar13 - (long)pbVar10) < 2) || ((pbVar10[1] | 0x20) != 0x74))
          goto LAB_0012c53c;
          if (puVar5 != (undefined8 *)0x0) {
            return (undefined8 *)0x0;
          }
          puVar9 = (undefined8 *)FUN_0012efd8(param_1);
LAB_0012c550:
          if (puVar9 == (undefined8 *)0x0) {
            return (undefined8 *)0x0;
          }
        }
        else {
          if (bVar4 != 0x49) goto LAB_0012c540;
          if (puVar5 == (undefined8 *)0x0) {
            return (undefined8 *)0x0;
          }
          lVar6 = FUN_0012e5c4(param_1,param_2 != 0);
          if (lVar6 == 0) {
            return (undefined8 *)0x0;
          }
          if (*(char *)(puVar5 + 1) == '-') {
            return (undefined8 *)0x0;
          }
          if (param_2 != 0) {
            *(undefined1 *)(param_2 + 1) = 1;
          }
          pvVar17 = (void *)param_1[0x266];
          lVar11 = *(long *)((long)pvVar17 + 8);
          puVar7 = (undefined8 *)pvVar17;
          if (lVar11 - 0xfd0U < 0xfffffffffffff010) {
            puVar7 = (undefined8 *)malloc(0x1000);
            if (puVar7 == (undefined8 *)0x0) goto LAB_0012c904;
            lVar11 = 0;
            *puVar7 = pvVar17;
            puVar7[1] = 0;
            param_1[0x266] = (long)puVar7;
          }
          *(long *)((long)puVar7 + 8) = lVar11 + 0x20;
          puVar9 = (undefined8 *)((long)puVar7 + lVar11 + 0x10);
          *puVar9 = &PTR_FUN_00150058;
          *(undefined8 **)((long)puVar7 + lVar11 + 0x20) = puVar5;
          *(long *)((long)puVar7 + lVar11 + 0x28) = lVar6;
          *(undefined1 *)((long)puVar7 + lVar11 + 0x18) = 0x2d;
          *(ushort *)((long)puVar7 + lVar11 + 0x19) =
               *(ushort *)((long)puVar7 + lVar11 + 0x19) & 0xf000 | 0x540;
        }
        plVar18 = (long *)param_1[0x26];
        if (plVar18 == (long *)param_1[0x27]) {
          plVar8 = (long *)param_1[0x25];
          sVar15 = (long)plVar18 - (long)plVar8;
          if (plVar8 == plVar16) {
            pvVar17 = malloc(sVar15 * 2);
            if (pvVar17 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            if (plVar18 != plVar16) {
              memcpy(pvVar17,plVar16,sVar15);
            }
            param_1[0x25] = (long)pvVar17;
          }
          else {
            pvVar17 = realloc(plVar8,sVar15 * 2);
            param_1[0x25] = (long)pvVar17;
            if (pvVar17 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
          }
          plVar18 = (long *)((long)pvVar17 + sVar15);
          param_1[0x26] = (long)plVar18;
          param_1[0x27] = (long)((long)pvVar17 + ((long)sVar15 >> 2) * 8);
        }
        param_1[0x26] = (long)(plVar18 + 1);
        *plVar18 = (long)puVar9;
        pbVar10 = (byte *)*param_1;
        pbVar2 = (byte *)param_1[1];
        pbVar13 = pbVar10;
        puVar5 = puVar9;
        if ((pbVar10 != pbVar2) && (pbVar13 = pbVar2, *pbVar10 == 0x4d)) {
          pbVar10 = pbVar10 + 1;
          *param_1 = (long)pbVar10;
        }
        goto LAB_0012c420;
      }
      if (bVar4 != 0x53) {
        if (bVar4 == 0x54) {
          if (puVar5 != (undefined8 *)0x0) {
            return (undefined8 *)0x0;
          }
          puVar9 = (undefined8 *)FUN_0012ec08(param_1);
          goto LAB_0012c550;
        }
LAB_0012c540:
        puVar9 = (undefined8 *)FUN_0012f3f8(param_1,param_2,puVar5,puVar9);
        goto LAB_0012c550;
      }
      if (((ulong)((long)pbVar13 - (long)pbVar10) < 2) || (pbVar10[1] != 0x74)) {
        puVar9 = (undefined8 *)FUN_0012f11c(param_1);
        if (puVar9 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
      }
      else {
        pvVar17 = (void *)param_1[0x266];
        *param_1 = (long)(pbVar10 + 2);
        lVar6 = *(long *)((long)pvVar17 + 8);
        puVar7 = (undefined8 *)pvVar17;
        if (lVar6 - 0xfd0U < 0xfffffffffffff010) {
          puVar7 = (undefined8 *)malloc(0x1000);
          if (puVar7 == (undefined8 *)0x0) goto LAB_0012c904;
          lVar6 = 0;
          *puVar7 = pvVar17;
          puVar7[1] = 0;
          param_1[0x266] = (long)puVar7;
        }
        *(long *)((long)puVar7 + 8) = lVar6 + 0x20;
        puVar9 = (undefined8 *)((long)puVar7 + lVar6 + 0x10);
        *puVar9 = &PTR_FUN_0014e158;
        *(undefined1 *)((long)puVar7 + lVar6 + 0x18) = 8;
        *(ushort *)((long)puVar7 + lVar6 + 0x19) =
             *(ushort *)((long)puVar7 + lVar6 + 0x19) & 0xf000 | 0x540;
        *(undefined **)((long)puVar7 + lVar6 + 0x20) = &DAT_00113874;
        *(undefined8 *)((long)puVar7 + lVar6 + 0x28) = 3;
      }
      if (*(char *)(puVar9 + 1) == '\x1b') goto LAB_0012c540;
      if (puVar5 != (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      pbVar10 = (byte *)*param_1;
      pbVar13 = (byte *)param_1[1];
      puVar5 = puVar9;
    } while( true );
  }
  *param_1 = (long)(pbVar2 + 1);
  local_70[0] = FUN_0012a0a0(param_1);
  if (local_70[0] == 0) {
    return (undefined8 *)0x0;
  }
  pcVar3 = (char *)*param_1;
  if (pcVar3 == (char *)param_1[1]) {
    return (undefined8 *)0x0;
  }
  if (*pcVar3 != 'E') {
    return (undefined8 *)0x0;
  }
  pcVar1 = pcVar3 + 1;
  *param_1 = (long)pcVar1;
  if ((pcVar1 != (char *)param_1[1]) && (*pcVar1 == 's')) {
    *param_1 = (long)(pcVar3 + 2);
    lVar6 = FUN_0013cf3c();
    *param_1 = lVar6;
    local_108[0] = FUN_0013cfec(param_1,"string literal");
    puVar5 = (undefined8 *)FUN_0013d094(param_1,local_70,local_108);
    return puVar5;
  }
  FUN_0012c03c(local_108,param_1);
  pcVar3 = (char *)*param_1;
  if ((pcVar3 == (char *)param_1[1]) || (*pcVar3 != 'd')) {
                    /* try { // try from 0012c798 to 0012c7a3 has its CatchHandler @ 0012c920 */
    local_110 = FUN_0012c1f0(param_1,param_2);
    if (local_110 != 0) {
      lVar6 = FUN_0013cf3c(*param_1,param_1[1]);
      *param_1 = lVar6;
LAB_0012c7b8:
      puVar5 = (undefined8 *)FUN_0013d094(param_1,local_70,&local_110);
      goto LAB_0012c7d4;
    }
  }
  else {
    *param_1 = (long)(pcVar3 + 1);
    FUN_0012ab78(param_1,1);
    pcVar3 = (char *)*param_1;
    if ((pcVar3 != (char *)param_1[1]) && (*pcVar3 == '_')) {
      *param_1 = (long)(pcVar3 + 1);
                    /* try { // try from 0012c780 to 0012c78b has its CatchHandler @ 0012c90c */
      local_110 = FUN_0012c1f0(param_1,param_2);
      if (local_110 != 0) goto LAB_0012c7b8;
    }
  }
  puVar5 = (undefined8 *)0x0;
LAB_0012c7d4:
  FUN_0012d070(local_108);
  return puVar5;
}


// ===== 0012c934  FUN_0012c934 =====

undefined8 * FUN_0012c934(long *param_1)

{
  long *__src;
  char cVar1;
  undefined8 *puVar2;
  long lVar3;
  long *__ptr;
  void *pvVar4;
  char *pcVar5;
  long lVar6;
  uint __c;
  byte *pbVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined1 uVar10;
  byte *pbVar11;
  int iVar12;
  size_t __n;
  long *plVar13;
  undefined1 auVar14 [16];
  
  pbVar7 = (byte *)*param_1;
  pbVar11 = (byte *)param_1[1];
  if (pbVar11 == pbVar7) {
    iVar12 = 0x7fffffdb;
  }
  else {
    iVar12 = (int)(CONCAT14(*pbVar7,*pbVar7 - 0x4a) >> 1);
    if (iVar12 < 5) {
      if (iVar12 == 0) {
        lVar8 = param_1[2];
        lVar6 = param_1[3];
        pbVar7 = pbVar7 + 1;
        __src = param_1 + 5;
        *param_1 = (long)pbVar7;
        while ((pbVar7 == pbVar11 || (*pbVar7 != 0x45))) {
          lVar3 = FUN_0012c934(param_1);
          if (lVar3 == 0) {
            return (undefined8 *)0x0;
          }
          plVar13 = (long *)param_1[3];
          if (plVar13 == (long *)param_1[4]) {
            __ptr = (long *)param_1[2];
            __n = (long)plVar13 - (long)__ptr;
            if (__ptr == __src) {
              pvVar4 = malloc(__n * 2);
              if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              if (plVar13 != __src) {
                memcpy(pvVar4,__src,__n);
              }
              param_1[2] = (long)pvVar4;
            }
            else {
              pvVar4 = realloc(__ptr,__n * 2);
              param_1[2] = (long)pvVar4;
              if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
            }
            plVar13 = (long *)((long)pvVar4 + __n);
            param_1[4] = (long)((long)pvVar4 + ((long)__n >> 2) * 8);
          }
          param_1[3] = (long)(plVar13 + 1);
          *plVar13 = lVar3;
          pbVar11 = (byte *)param_1[1];
          pbVar7 = (byte *)*param_1;
        }
        *param_1 = (long)(pbVar7 + 1);
        auVar14 = FUN_0012ce20(param_1,lVar6 - lVar8 >> 3);
        pvVar4 = (void *)param_1[0x266];
        lVar8 = *(long *)((long)pvVar4 + 8);
        puVar2 = (undefined8 *)pvVar4;
        if (lVar8 - 0xfd0U < 0xfffffffffffff010) {
          puVar2 = (undefined8 *)malloc(0x1000);
          if (puVar2 == (undefined8 *)0x0) goto LAB_0012cca4;
          lVar8 = 0;
          *puVar2 = pvVar4;
          puVar2[1] = 0;
          param_1[0x266] = (long)puVar2;
        }
        lVar6 = (long)puVar2 + lVar8;
        ppuVar9 = &PTR_FUN_001500c8;
        *(long *)((long)puVar2 + 8) = lVar8 + 0x20;
        uVar10 = 0x29;
        goto LAB_0012cbb0;
      }
      if (iVar12 != 1) goto LAB_0012cc80;
      if (((ulong)((long)pbVar11 - (long)pbVar7) < 2) || (pbVar7[1] != 0x5a)) {
        puVar2 = (undefined8 *)FUN_00131960(param_1);
        return puVar2;
      }
      *param_1 = (long)(pbVar7 + 2);
      puVar2 = (undefined8 *)FUN_0012a0a0(param_1);
      if (puVar2 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      pcVar5 = (char *)*param_1;
      if (pcVar5 == (char *)param_1[1]) {
        return (undefined8 *)0x0;
      }
      cVar1 = *pcVar5;
      goto joined_r0x0012ca0c;
    }
  }
  if (iVar12 == 5) {
    if ((pbVar11 != pbVar7) && (*pbVar7 == 0x54)) {
      if ((ulong)((long)pbVar11 - (long)pbVar7) < 2) {
        __c = 0;
      }
      else {
        __c = (uint)pbVar7[1];
      }
      pcVar5 = (char *)memchr("yptnk",__c,5);
      if ((pcVar5 != (char *)0x0) && (pcVar5 != "")) {
        lVar8 = FUN_00137604(param_1,0);
        if (lVar8 == 0) {
          return (undefined8 *)0x0;
        }
        lVar6 = FUN_0012c934(param_1);
        auVar14._8_8_ = lVar6;
        auVar14._0_8_ = lVar8;
        if (lVar6 == 0) {
          return (undefined8 *)0x0;
        }
        pvVar4 = (void *)param_1[0x266];
        lVar8 = *(long *)((long)pvVar4 + 8);
        puVar2 = (undefined8 *)pvVar4;
        if (lVar8 - 0xfd0U < 0xfffffffffffff010) {
          puVar2 = (undefined8 *)malloc(0x1000);
          if (puVar2 == (undefined8 *)0x0) {
LAB_0012cca4:
                    /* WARNING: Subroutine does not return */
            std::terminate();
          }
          lVar8 = 0;
          *puVar2 = pvVar4;
          puVar2[1] = 0;
          param_1[0x266] = (long)puVar2;
        }
        lVar6 = (long)puVar2 + lVar8;
        ppuVar9 = &PTR_FUN_00150138;
        *(long *)((long)puVar2 + 8) = lVar8 + 0x20;
        uVar10 = 0x22;
LAB_0012cbb0:
        *(undefined8 *)(lVar6 + 0x10) = ppuVar9;
        *(undefined1 *)(lVar6 + 0x18) = uVar10;
        *(undefined1 (*) [16])(lVar6 + 0x20) = auVar14;
        *(ushort *)(lVar6 + 0x19) = *(ushort *)(lVar6 + 0x19) & 0xf000 | 0x540;
        return (undefined8 *)(lVar6 + 0x10);
      }
    }
  }
  else if (iVar12 == 7) {
    *param_1 = (long)(pbVar7 + 1);
    puVar2 = (undefined8 *)FUN_0012ff04(param_1);
    if (puVar2 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    pcVar5 = (char *)*param_1;
    if (pcVar5 == (char *)param_1[1]) {
      return (undefined8 *)0x0;
    }
    cVar1 = *pcVar5;
joined_r0x0012ca0c:
    if (cVar1 == 'E') {
      *param_1 = (long)(pcVar5 + 1);
      return puVar2;
    }
    return (undefined8 *)0x0;
  }
LAB_0012cc80:
  puVar2 = (undefined8 *)FUN_0012acb8(param_1);
  return puVar2;
}


// ===== 0012cca8  FUN_0012cca8 =====

void FUN_0012cca8(undefined8 *param_1,undefined8 *param_2)

{
  void *__dest;
  undefined8 uVar1;
  size_t __n;
  undefined8 *__src;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 == (undefined8 *)param_1[2]) {
    __src = (undefined8 *)*param_1;
    __n = (long)puVar2 - (long)__src;
    if (__src == param_1 + 3) {
      __dest = malloc(__n * 2);
      if (__dest == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (puVar2 != __src) {
        memmove(__dest,__src,__n);
      }
      *param_1 = __dest;
    }
    else {
      __dest = realloc(__src,__n * 2);
      *param_1 = __dest;
      if (__dest == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    puVar2 = (undefined8 *)((long)__dest + __n);
    param_1[1] = puVar2;
    param_1[2] = (void *)((long)__dest + ((long)__n >> 2) * 8);
  }
  uVar1 = *param_2;
  param_1[1] = puVar2 + 1;
  *puVar2 = uVar1;
  return;
}


// ===== 0012cd80  FUN_0012cd80 =====

void FUN_0012cd80(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  pvVar3 = *(void **)(param_1 + 0x1330);
  lVar2 = *(long *)((long)pvVar3 + 8);
  puVar1 = (undefined8 *)pvVar3;
  if (lVar2 - 0xfd0U < 0xfffffffffffff010) {
    puVar1 = (undefined8 *)malloc(0x1000);
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar2 = 0;
    *puVar1 = pvVar3;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar2 + 0x20;
  uVar5 = param_2[1];
  uVar4 = *param_2;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_001501a8;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 10;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = uVar5;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar4;
  return;
}


// ===== 0012ce20  FUN_0012ce20 =====

undefined1  [16] FUN_0012ce20(long param_1,ulong param_2)

{
  void *__src;
  void *pvVar1;
  undefined8 *puVar2;
  long lVar3;
  size_t __n;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  
  lVar5 = *(long *)(param_1 + 0x10);
  pvVar1 = *(void **)(param_1 + 0x18);
  uVar6 = (long)pvVar1 - lVar5 >> 3;
  if (uVar6 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_00127d24("%s:%d: %s","out/llvm-project/libcxxabi/src/demangle/ItaniumDemangle.h",0xaa1,
                 &DAT_001128a6);
  }
  __src = (void *)(lVar5 + param_2 * 8);
  puVar4 = *(undefined8 **)(param_1 + 0x1330);
  __n = (long)pvVar1 - (long)__src;
  lVar3 = puVar4[1];
  uVar7 = (ulong)((int)__n + 0xf) & 0xfffffff0;
  puVar2 = puVar4;
  if (0xfef < lVar3 + uVar7) {
    if (0xff0 < uVar7) {
      puVar2 = (undefined8 *)malloc(uVar7 + 0x10);
      if (puVar2 == (undefined8 *)0x0) {
LAB_0012cf78:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      *puVar2 = *puVar4;
      puVar2[1] = 0;
      *puVar4 = puVar2;
      puVar2 = puVar2 + 2;
      goto joined_r0x0012cee0;
    }
    puVar2 = (undefined8 *)malloc(0x1000);
    if (puVar2 == (undefined8 *)0x0) goto LAB_0012cf78;
    lVar3 = 0;
    *puVar2 = puVar4;
    puVar2[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar2;
  }
  puVar2[1] = lVar3 + uVar7;
  puVar2 = (undefined8 *)((long)puVar2 + lVar3 + 0x10);
joined_r0x0012cee0:
  if (pvVar1 != __src) {
    memmove(puVar2,__src,__n);
    lVar5 = *(long *)(param_1 + 0x10);
    uVar6 = *(long *)(param_1 + 0x18) - lVar5 >> 3;
  }
  if (param_2 <= uVar6) {
    auVar8._8_8_ = (long)__n >> 3;
    *(ulong *)(param_1 + 0x18) = lVar5 + param_2 * 8;
    auVar8._0_8_ = puVar2;
    return auVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00127d24("%s:%d: %s","out/llvm-project/libcxxabi/src/demangle/ItaniumDemangle.h",0x88,
               "shrinkToSize() can\'t expand!");
}


// ===== 0012cf7c  FUN_0012cf7c =====

void FUN_0012cf7c(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined8 *param_6,undefined4 *param_7,undefined1 *param_8)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *pvVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  pvVar9 = *(void **)(param_1 + 0x1330);
  lVar4 = *(long *)((long)pvVar9 + 8);
  puVar3 = (undefined8 *)pvVar9;
  if (lVar4 - 4000U < 0xfffffffffffff010) {
    puVar3 = (undefined8 *)malloc(0x1000);
    if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar4 = 0;
    *puVar3 = pvVar9;
    puVar3[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar3;
  }
  *(long *)((long)puVar3 + 8) = lVar4 + 0x50;
  uVar11 = param_4[1];
  uVar10 = *param_4;
  *(undefined ***)((long)puVar3 + lVar4 + 0x10) = &PTR_FUN_00150288;
  uVar5 = *param_2;
  uVar6 = *param_3;
  uVar1 = *param_7;
  uVar2 = *param_8;
  *(undefined1 *)((long)puVar3 + lVar4 + 0x18) = 0x13;
  uVar7 = *param_5;
  uVar8 = *param_6;
  *(undefined8 *)((long)puVar3 + lVar4 + 0x20) = uVar5;
  *(undefined8 *)((long)puVar3 + lVar4 + 0x28) = uVar6;
  *(ushort *)((long)puVar3 + lVar4 + 0x19) =
       *(ushort *)((long)puVar3 + lVar4 + 0x19) & 0xf000 | 0x100;
  *(undefined8 *)((long)puVar3 + lVar4 + 0x38) = uVar11;
  *(undefined8 *)((long)puVar3 + lVar4 + 0x30) = uVar10;
  *(undefined8 *)((long)puVar3 + lVar4 + 0x40) = uVar7;
  *(undefined8 *)((long)puVar3 + lVar4 + 0x48) = uVar8;
  *(undefined4 *)((long)puVar3 + lVar4 + 0x50) = uVar1;
  *(undefined1 *)((long)puVar3 + lVar4 + 0x54) = uVar2;
  return;
}


// ===== 0012d070  FUN_0012d070 =====

void FUN_0012d070(long *param_1)

{
  long *plVar1;
  void *pvVar2;
  void *pvVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  lVar8 = *param_1;
  plVar4 = (long *)param_1[1];
  plVar1 = param_1 + 4;
  pvVar3 = *(void **)(lVar8 + 0x298);
  pvVar2 = (void *)(lVar8 + 0x2b0);
  if (plVar4 == plVar1) {
    if (pvVar3 != pvVar2) {
      free(pvVar3);
      *(void **)(lVar8 + 0x298) = pvVar2;
      plVar4 = (long *)param_1[1];
      *(void **)(lVar8 + 0x2a0) = pvVar2;
      *(long *)(lVar8 + 0x2a8) = lVar8 + 0x2d0;
    }
    plVar6 = plVar4;
    if (param_1[2] - (long)plVar4 != 0) {
      memmove(pvVar2,plVar4,param_1[2] - (long)plVar4);
      plVar4 = (long *)param_1[2];
      plVar6 = (long *)param_1[1];
    }
    *(long *)(lVar8 + 0x2a0) = (long)pvVar2 + ((long)plVar4 - (long)plVar6);
LAB_0012d140:
    param_1[2] = (long)plVar6;
  }
  else {
    *(long **)(lVar8 + 0x298) = plVar4;
    if (pvVar3 != pvVar2) {
      param_1[1] = (long)pvVar3;
      lVar7 = *(long *)(lVar8 + 0x2a0);
      *(long *)(lVar8 + 0x2a0) = param_1[2];
      param_1[2] = lVar7;
      lVar7 = *(long *)(lVar8 + 0x2a8);
      *(long *)(lVar8 + 0x2a8) = param_1[3];
      plVar6 = (long *)param_1[1];
      param_1[3] = lVar7;
      goto LAB_0012d140;
    }
    lVar7 = param_1[2];
    *(long *)(lVar8 + 0x2a8) = param_1[3];
    *(long *)(lVar8 + 0x2a0) = lVar7;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)plVar1;
    param_1[3] = (long)(param_1 + 8);
  }
  lVar8 = *param_1;
  plVar6 = (long *)param_1[8];
  plVar4 = param_1 + 0xb;
  pvVar3 = *(void **)(lVar8 + 0x240);
  pvVar2 = (void *)(lVar8 + 600);
  if (plVar6 == plVar4) {
    if (pvVar3 != pvVar2) {
      free(pvVar3);
      *(void **)(lVar8 + 0x240) = pvVar2;
      plVar6 = (long *)param_1[8];
      *(void **)(lVar8 + 0x248) = pvVar2;
      *(long *)(lVar8 + 0x250) = lVar8 + 0x298;
    }
    plVar5 = plVar6;
    if (param_1[9] - (long)plVar6 != 0) {
      memmove(pvVar2,plVar6,param_1[9] - (long)plVar6);
      plVar6 = (long *)param_1[8];
      plVar5 = (long *)param_1[9];
    }
    *(long *)(lVar8 + 0x248) = (long)pvVar2 + ((long)plVar5 - (long)plVar6);
    param_1[9] = (long)plVar6;
  }
  else {
    *(long **)(lVar8 + 0x240) = plVar6;
    if (pvVar3 == pvVar2) {
      lVar7 = param_1[9];
      *(long *)(lVar8 + 0x250) = param_1[10];
      *(long *)(lVar8 + 0x248) = lVar7;
      param_1[8] = (long)plVar4;
      param_1[9] = (long)plVar4;
      param_1[10] = (long)(param_1 + 0x13);
      goto LAB_0012d218;
    }
    param_1[8] = (long)pvVar3;
    lVar7 = *(long *)(lVar8 + 0x248);
    *(long *)(lVar8 + 0x248) = param_1[9];
    param_1[9] = lVar7;
    lVar7 = *(long *)(lVar8 + 0x250);
    *(long *)(lVar8 + 0x250) = param_1[10];
    plVar6 = (long *)param_1[8];
    param_1[9] = (long)plVar6;
    param_1[10] = lVar7;
  }
  if (plVar6 != plVar4) {
    free(plVar6);
  }
LAB_0012d218:
  if ((long *)param_1[1] != plVar1) {
    free((long *)param_1[1]);
    return;
  }
  return;
}


// ===== 0012d254  FUN_0012d254 =====

void FUN_0012d254(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
  
  pvVar4 = *(void **)(param_1 + 0x1330);
  lVar2 = *(long *)((long)pvVar4 + 8);
  puVar1 = (undefined8 *)pvVar4;
  if (lVar2 - 0xfc0U < 0xfffffffffffff010) {
    puVar1 = (undefined8 *)malloc(0x1000);
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar2 = 0;
    *puVar1 = pvVar4;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar2 + 0x30;
  uVar3 = *param_2;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0014e068;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x15;
  *(char **)((long)puVar1 + lVar2 + 0x20) = "template parameter object for ";
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = 0x1e;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x30) = uVar3;
  return;
}


// ===== 0012d304  FUN_0012d304 =====

void FUN_0012d304(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
  
  pvVar4 = *(void **)(param_1 + 0x1330);
  lVar2 = *(long *)((long)pvVar4 + 8);
  puVar1 = (undefined8 *)pvVar4;
  if (lVar2 - 0xfc0U < 0xfffffffffffff010) {
    puVar1 = (undefined8 *)malloc(0x1000);
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar2 = 0;
    *puVar1 = pvVar4;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar2 + 0x30;
  uVar3 = *param_2;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0014e068;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x15;
  *(char **)((long)puVar1 + lVar2 + 0x20) = "vtable for ";
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = 0xb;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x30) = uVar3;
  return;
}


// ===== 0012d3b4  FUN_0012d3b4 =====

void FUN_0012d3b4(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
  
  pvVar4 = *(void **)(param_1 + 0x1330);
  lVar2 = *(long *)((long)pvVar4 + 8);
  puVar1 = (undefined8 *)pvVar4;
  if (lVar2 - 0xfc0U < 0xfffffffffffff010) {
    puVar1 = (undefined8 *)malloc(0x1000);
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar2 = 0;
    *puVar1 = pvVar4;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar2 + 0x30;
  uVar3 = *param_2;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0014e068;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x15;
  *(char **)((long)puVar1 + lVar2 + 0x20) = "VTT for ";
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = 8;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x30) = uVar3;
  return;
}


// ===== 0012d464  FUN_0012d464 =====

void FUN_0012d464(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
  
  pvVar4 = *(void **)(param_1 + 0x1330);
  lVar2 = *(long *)((long)pvVar4 + 8);
  puVar1 = (undefined8 *)pvVar4;
  if (lVar2 - 0xfc0U < 0xfffffffffffff010) {
    puVar1 = (undefined8 *)malloc(0x1000);
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar2 = 0;
    *puVar1 = pvVar4;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar2 + 0x30;
  uVar3 = *param_2;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0014e068;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x15;
  *(char **)((long)puVar1 + lVar2 + 0x20) = "typeinfo for ";
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = 0xd;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x30) = uVar3;
  return;
}


// ===== 0012d514  FUN_0012d514 =====

void FUN_0012d514(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
  
  pvVar4 = *(void **)(param_1 + 0x1330);
  lVar2 = *(long *)((long)pvVar4 + 8);
  puVar1 = (undefined8 *)pvVar4;
  if (lVar2 - 0xfc0U < 0xfffffffffffff010) {
    puVar1 = (undefined8 *)malloc(0x1000);
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar2 = 0;
    *puVar1 = pvVar4;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar2 + 0x30;
  uVar3 = *param_2;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0014e068;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x15;
  *(char **)((long)puVar1 + lVar2 + 0x20) = "typeinfo name for ";
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = 0x12;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x30) = uVar3;
  return;
}


// ===== 0012d5c4  FUN_0012d5c4 =====

undefined8 FUN_0012d5c4(long *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  pbVar3 = (byte *)*param_1;
  pbVar1 = (byte *)param_1[1];
  if (pbVar3 == pbVar1) {
    return 1;
  }
  if (*pbVar3 == 0x68) {
    pbVar2 = pbVar3 + 1;
    *param_1 = (long)pbVar2;
    if (pbVar2 == pbVar1) {
      return 1;
    }
    pbVar4 = pbVar2;
    if (*pbVar2 == 0x6e) {
      pbVar4 = pbVar3 + 2;
      *param_1 = (long)pbVar4;
    }
    if (pbVar1 == pbVar4) {
      return 1;
    }
    if (*pbVar4 - 0x3a < 0xfffffff6) {
      return 1;
    }
    do {
      pbVar3 = pbVar4;
      if (*pbVar4 - 0x3a < 0xfffffff6) break;
      pbVar4 = pbVar4 + 1;
      *param_1 = (long)pbVar4;
      pbVar3 = pbVar1;
    } while (pbVar4 != pbVar1);
  }
  else {
    if (*pbVar3 != 0x76) {
      return 1;
    }
    pbVar2 = pbVar3 + 1;
    *param_1 = (long)pbVar2;
    if (pbVar2 == pbVar1) {
      return 1;
    }
    pbVar4 = pbVar2;
    if (*pbVar2 == 0x6e) {
      pbVar4 = pbVar3 + 2;
      *param_1 = (long)pbVar4;
    }
    if (pbVar1 == pbVar4) {
      return 1;
    }
    if (*pbVar4 - 0x3a < 0xfffffff6) {
      return 1;
    }
    do {
      pbVar3 = pbVar4;
      if (*pbVar4 - 0x3a < 0xfffffff6) break;
      pbVar4 = pbVar4 + 1;
      *param_1 = (long)pbVar4;
      pbVar3 = pbVar1;
    } while (pbVar4 != pbVar1);
    if (pbVar3 == pbVar2) {
      return 1;
    }
    if (pbVar3 == pbVar1) {
      return 1;
    }
    if (*pbVar3 != 0x5f) {
      return 1;
    }
    pbVar2 = pbVar3 + 1;
    *param_1 = (long)pbVar2;
    if (pbVar2 == pbVar1) {
      return 1;
    }
    pbVar4 = pbVar2;
    if (*pbVar2 == 0x6e) {
      pbVar4 = pbVar3 + 2;
      *param_1 = (long)pbVar4;
    }
    if (pbVar1 == pbVar4) {
      return 1;
    }
    if (*pbVar4 - 0x3a < 0xfffffff6) {
      return 1;
    }
    do {
      pbVar3 = pbVar4;
      if (*pbVar4 - 0x3a < 0xfffffff6) break;
      pbVar4 = pbVar4 + 1;
      *param_1 = (long)pbVar4;
      pbVar3 = pbVar1;
    } while (pbVar4 != pbVar1);
  }
  if (((pbVar3 != pbVar2) && (pbVar3 != pbVar1)) && (*pbVar3 == 0x5f)) {
    *param_1 = (long)(pbVar3 + 1);
    return 0;
  }
  return 1;
}


// ===== 0012d774  FUN_0012d774 =====

void FUN_0012d774(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
  
  pvVar4 = *(void **)(param_1 + 0x1330);
  lVar2 = *(long *)((long)pvVar4 + 8);
  puVar1 = (undefined8 *)pvVar4;
  if (lVar2 - 0xfc0U < 0xfffffffffffff010) {
    puVar1 = (undefined8 *)malloc(0x1000);
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar2 = 0;
    *puVar1 = pvVar4;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar2 + 0x30;
  uVar3 = *param_2;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0014e068;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x15;
  *(char **)((long)puVar1 + lVar2 + 0x20) = "covariant return thunk to ";
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = 0x1a;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x30) = uVar3;
  return;
}


// ===== 0012d824  FUN_0012d824 =====

void FUN_0012d824(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  void *pvVar5;
  
  pvVar5 = *(void **)(param_1 + 0x1330);
  lVar2 = *(long *)((long)pvVar5 + 8);
  puVar1 = (undefined8 *)pvVar5;
  if (lVar2 - 0xfd0U < 0xfffffffffffff010) {
    puVar1 = (undefined8 *)malloc(0x1000);
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar2 = 0;
    *puVar1 = pvVar5;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar2 + 0x20;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0014e0e8;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x16;
  uVar3 = *param_2;
  uVar4 = *param_3;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar3;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = uVar4;
  return;
}


// ===== 0012d8cc  FUN_0012d8cc =====

void FUN_0012d8cc(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
  
  pvVar4 = *(void **)(param_1 + 0x1330);
  lVar2 = *(long *)((long)pvVar4 + 8);
  puVar1 = (undefined8 *)pvVar4;
  if (lVar2 - 0xfc0U < 0xfffffffffffff010) {
    puVar1 = (undefined8 *)malloc(0x1000);
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar2 = 0;
    *puVar1 = pvVar4;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar2 + 0x30;
  uVar3 = *param_2;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0014e068;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x15;
  *(char **)((long)puVar1 + lVar2 + 0x20) = "thread-local initialization routine for ";
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = 0x28;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x30) = uVar3;
  return;
}


// ===== 0012d97c  FUN_0012d97c =====

void FUN_0012d97c(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
  
  pvVar4 = *(void **)(param_1 + 0x1330);
  lVar2 = *(long *)((long)pvVar4 + 8);
  puVar1 = (undefined8 *)pvVar4;
  if (lVar2 - 0xfc0U < 0xfffffffffffff010) {
    puVar1 = (undefined8 *)malloc(0x1000);
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar2 = 0;
    *puVar1 = pvVar4;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar2 + 0x30;
  uVar3 = *param_2;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0014e068;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x15;
  *(char **)((long)puVar1 + lVar2 + 0x20) = "virtual thunk to ";
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = 0x11;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x30) = uVar3;
  return;
}


// ===== 0012da2c  FUN_0012da2c =====

void FUN_0012da2c(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
  
  pvVar4 = *(void **)(param_1 + 0x1330);
  lVar2 = *(long *)((long)pvVar4 + 8);
  puVar1 = (undefined8 *)pvVar4;
  if (lVar2 - 0xfc0U < 0xfffffffffffff010) {
    puVar1 = (undefined8 *)malloc(0x1000);
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar2 = 0;
    *puVar1 = pvVar4;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar2 + 0x30;
  uVar3 = *param_2;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0014e068;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x15;
  *(char **)((long)puVar1 + lVar2 + 0x20) = "non-virtual thunk to ";
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = 0x15;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x30) = uVar3;
  return;
}


// ===== 0012dad8  FUN_0012dad8 =====

void FUN_0012dad8(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
  
  pvVar4 = *(void **)(param_1 + 0x1330);
  lVar2 = *(long *)((long)pvVar4 + 8);
  puVar1 = (undefined8 *)pvVar4;
  if (lVar2 - 0xfc0U < 0xfffffffffffff010) {
    puVar1 = (undefined8 *)malloc(0x1000);
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar2 = 0;
    *puVar1 = pvVar4;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar2 + 0x30;
  uVar3 = *param_2;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0014e068;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x15;
  *(char **)((long)puVar1 + lVar2 + 0x20) = "reference temporary for ";
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = 0x18;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x30) = uVar3;
  return;
}


// ===== 0012db88  FUN_0012db88 =====

undefined8 FUN_0012db88(long *param_1,undefined8 *param_2)

{
  long *__src;
  char *pcVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  long *__ptr;
  undefined8 uVar5;
  char *pcVar6;
  long lVar7;
  char *pcVar8;
  size_t __n;
  undefined1 uVar9;
  undefined8 *puVar10;
  void *pvVar11;
  
  pcVar6 = (char *)*param_1;
  pcVar8 = (char *)param_1[1];
  if (pcVar6 != pcVar8) {
    __src = param_1 + 0x28;
    do {
      while( true ) {
        if (*pcVar6 != 'W') {
          return 0;
        }
        pcVar1 = pcVar6 + 1;
        *param_1 = (long)pcVar1;
        if ((pcVar1 == pcVar8) || (*pcVar1 != 'P')) {
          uVar9 = 0;
          lVar3 = FUN_0012e010(param_1);
        }
        else {
          uVar9 = 1;
          *param_1 = (long)(pcVar6 + 2);
          lVar3 = FUN_0012e010(param_1);
        }
        if (lVar3 == 0) {
          return 1;
        }
        pvVar11 = (void *)param_1[0x266];
        lVar7 = *(long *)((long)pvVar11 + 8);
        puVar4 = (undefined8 *)pvVar11;
        if (lVar7 - 0xfc0U < 0xfffffffffffff010) {
          puVar4 = (undefined8 *)malloc(0x1000);
          if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::terminate();
          }
          lVar7 = 0;
          *puVar4 = pvVar11;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        uVar5 = *param_2;
        *(long *)((long)puVar4 + 8) = lVar7 + 0x30;
        puVar10 = (undefined8 *)((long)puVar4 + lVar7 + 0x10);
        *puVar10 = &PTR_FUN_0014e1c8;
        *(undefined8 *)((long)puVar4 + lVar7 + 0x20) = uVar5;
        *(long *)((long)puVar4 + lVar7 + 0x28) = lVar3;
        *(undefined1 *)((long)puVar4 + lVar7 + 0x18) = 0x1b;
        *(undefined1 *)((long)puVar4 + lVar7 + 0x30) = uVar9;
        *(ushort *)((long)puVar4 + lVar7 + 0x19) =
             *(ushort *)((long)puVar4 + lVar7 + 0x19) & 0xf000 | 0x540;
        *param_2 = puVar10;
        plVar2 = (long *)param_1[0x26];
        if (plVar2 == (long *)param_1[0x27]) break;
        param_1[0x26] = (long)(plVar2 + 1);
        *plVar2 = (long)puVar10;
        pcVar6 = (char *)*param_1;
        pcVar8 = (char *)param_1[1];
        if (pcVar6 == pcVar8) {
          return 0;
        }
      }
      __ptr = (long *)param_1[0x25];
      __n = (long)plVar2 - (long)__ptr;
      if (__ptr == __src) {
        pvVar11 = malloc(__n * 2);
        if (pvVar11 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (plVar2 != __src) {
          memcpy(pvVar11,__src,__n);
        }
        param_1[0x25] = (long)pvVar11;
      }
      else {
        pvVar11 = realloc(__ptr,__n * 2);
        param_1[0x25] = (long)pvVar11;
        if (pvVar11 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
      }
      param_1[0x26] = (long)((undefined8 *)((long)pvVar11 + __n) + 1);
      param_1[0x27] = (long)((long)pvVar11 + ((long)__n >> 2) * 8);
      *(undefined8 *)((long)pvVar11 + __n) = puVar10;
      pcVar6 = (char *)*param_1;
      pcVar8 = (char *)param_1[1];
    } while (pcVar6 != pcVar8);
  }
  return 0;
}


// ===== 0012dd64  FUN_0012dd64 =====

undefined8 FUN_0012dd64(void)

{
  return 0;
}


// ===== 0012dd70  FUN_0012dd70 =====

undefined8 FUN_0012dd70(void)

{
  return 0;
}


// ===== 0012dd7c  FUN_0012dd7c =====

undefined8 FUN_0012dd7c(void)

{
  return 0;
}


// ===== 0012dd88  FUN_0012dd88 =====

void FUN_0012dd88(void)

{
  return;
}


// ===== 0012dd90  FUN_0012dd90 =====

void FUN_0012dd90(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *__ptr;
  size_t __size;
  long lVar2;
  long *plVar3;
  size_t __n;
  void *__src;
  
  __n = *(size_t *)(param_1 + 0x18);
  if (__n != 0) {
    lVar2 = param_2[1];
    __ptr = (void *)*param_2;
    __src = *(void **)(param_1 + 0x10);
    if ((ulong)param_2[2] < lVar2 + __n) {
      __size = param_2[2] * 2;
      uVar1 = lVar2 + __n + 0x3e0;
      if (__size < uVar1 || __size - uVar1 == 0) {
        __size = uVar1;
      }
      param_2[2] = __size;
      __ptr = realloc(__ptr,__size);
      *param_2 = __ptr;
      if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar2 = param_2[1];
    }
    memcpy((void *)((long)__ptr + lVar2),__src,__n);
    param_2[1] = param_2[1] + __n;
  }
  plVar3 = *(long **)(param_1 + 0x20);
  (**(code **)(*plVar3 + 0x20))(plVar3,param_2);
  if ((*(ushort *)((long)plVar3 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0012de68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x28))(plVar3,param_2);
  return;
}


// ===== 0012de70  FUN_0012de70 =====

void FUN_0012de70(void)

{
  return;
}


// ===== 0012de78  FUN_0012de78 =====

undefined1  [16] FUN_0012de78(void)

{
  return ZEXT816(0);
}


// ===== 0012de88  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0012de90  FUN_0012de90 =====

void FUN_0012de90(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  void *pvVar5;
  long lVar6;
  size_t sVar7;
  long *plVar8;
  
  lVar6 = param_2[1];
  pvVar5 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar6 + 0x18U) {
    sVar7 = param_2[2] * 2;
    uVar1 = lVar6 + 0x3f8;
    if (sVar7 < uVar1 || sVar7 - uVar1 == 0) {
      sVar7 = uVar1;
    }
    param_2[2] = sVar7;
    pvVar5 = realloc(pvVar5,sVar7);
    *param_2 = pvVar5;
    if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar6 = param_2[1];
  }
  uVar4 = s_construction_vtable_for_00113a2d._16_8_;
  uVar3 = s_construction_vtable_for_00113a2d._0_8_;
  pcVar2 = (char *)((long)pvVar5 + lVar6);
  *(undefined8 *)(pcVar2 + 8) = s_construction_vtable_for_00113a2d._8_8_;
  *(undefined8 *)pcVar2 = uVar3;
  *(undefined8 *)(pcVar2 + 0x10) = uVar4;
  plVar8 = *(long **)(param_1 + 0x10);
  lVar6 = *plVar8;
  param_2[1] = param_2[1] + 0x18;
  (**(code **)(lVar6 + 0x20))(plVar8,param_2);
  if ((*(ushort *)((long)plVar8 + 9) & 0xc0) != 0x40) {
    (**(code **)(*plVar8 + 0x28))(plVar8,param_2);
  }
  lVar6 = param_2[1];
  pvVar5 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar6 + 4U) {
    sVar7 = param_2[2] * 2;
    uVar1 = lVar6 + 0x3e4;
    if (sVar7 < uVar1 || sVar7 - uVar1 == 0) {
      sVar7 = uVar1;
    }
    param_2[2] = sVar7;
    pvVar5 = realloc(pvVar5,sVar7);
    *param_2 = pvVar5;
    if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar6 = param_2[1];
  }
  *(undefined4 *)((long)pvVar5 + lVar6) = 0x2d6e692d;
  plVar8 = *(long **)(param_1 + 0x18);
  lVar6 = *plVar8;
  param_2[1] = param_2[1] + 4;
  (**(code **)(lVar6 + 0x20))(plVar8,param_2);
  if ((*(ushort *)((long)plVar8 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0012dffc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar8 + 0x28))(plVar8,param_2);
  return;
}


// ===== 0012e008  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0012e010  FUN_0012e010 =====

undefined8 * FUN_0012e010(undefined8 *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  char *pcVar9;
  undefined8 *puVar10;
  
  pbVar1 = (byte *)*param_1;
  pbVar2 = (byte *)param_1[1];
  if ((pbVar2 == pbVar1) || (*pbVar1 - 0x3a < 0xfffffff6)) {
    return (undefined8 *)0x0;
  }
  pbVar3 = pbVar1 + 1;
  pbVar1 = pbVar1 + 1;
  uVar8 = 0;
  do {
    uVar7 = uVar8;
    pbVar5 = pbVar1;
    pcVar9 = (char *)pbVar3;
    *param_1 = pbVar5;
    lVar6 = (ulong)pbVar5[-1] + uVar7 * 10;
    uVar8 = lVar6 - 0x30;
    if (pbVar5 == pbVar2) break;
    pbVar3 = (byte *)pcVar9 + 1;
    pbVar1 = pbVar5 + 1;
  } while (*pbVar5 - 0x30 < 10);
  if ((ulong)((long)pbVar2 - (long)pcVar9) <= lVar6 - 0x31U) {
    return (undefined8 *)0x0;
  }
  *param_1 = pbVar5 + (ulong)pbVar5[-1] + uVar7 * 10 + -0x30;
  if ((uVar8 < 10) || (*(long *)pbVar5 != 0x5f4c41424f4c475f || *(short *)(pbVar5 + 8) != 0x4e5f)) {
    puVar10 = (undefined8 *)param_1[0x266];
    lVar6 = puVar10[1];
    if (0xfffffffffffff00f < lVar6 - 0xfd0U) goto LAB_0012e118;
    puVar4 = (undefined8 *)malloc(0x1000);
    if (puVar4 == (undefined8 *)0x0) goto LAB_0012e1c8;
    *puVar4 = puVar10;
    puVar4[1] = 0;
  }
  else {
    puVar10 = (undefined8 *)param_1[0x266];
    lVar6 = puVar10[1];
    if (0xfffffffffffff00f < lVar6 - 0xfd0U) {
      pcVar9 = "(anonymous namespace)";
      uVar8 = 0x15;
      goto LAB_0012e118;
    }
    puVar4 = (undefined8 *)malloc(0x1000);
    if (puVar4 == (undefined8 *)0x0) {
LAB_0012e1c8:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    *puVar4 = puVar10;
    puVar4[1] = 0;
    pcVar9 = "(anonymous namespace)";
    uVar8 = 0x15;
  }
  lVar6 = 0;
  param_1[0x266] = puVar4;
  puVar10 = puVar4;
LAB_0012e118:
  puVar10[1] = lVar6 + 0x20;
  puVar4 = (undefined8 *)((long)puVar10 + lVar6 + 0x10);
  *puVar4 = &PTR_FUN_0014e158;
  *(char **)((long)puVar10 + lVar6 + 0x20) = pcVar9;
  *(ulong *)((long)puVar10 + lVar6 + 0x28) = uVar8;
  *(undefined1 *)((long)puVar10 + lVar6 + 0x18) = 8;
  *(ushort *)((long)puVar10 + lVar6 + 0x19) =
       *(ushort *)((long)puVar10 + lVar6 + 0x19) & 0xf000 | 0x540;
  return puVar4;
}


// ===== 0012e1cc  FUN_0012e1cc =====

void FUN_0012e1cc(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  pvVar3 = *(void **)(param_1 + 0x1330);
  lVar2 = *(long *)((long)pvVar3 + 8);
  puVar1 = (undefined8 *)pvVar3;
  if (lVar2 - 0xfd0U < 0xfffffffffffff010) {
    puVar1 = (undefined8 *)malloc(0x1000);
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar2 = 0;
    *puVar1 = pvVar3;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar2 + 0x20;
  uVar5 = param_2[1];
  uVar4 = *param_2;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0014e158;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 8;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = uVar5;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar4;
  return;
}


// ===== 0012e26c  FUN_0012e26c =====

void FUN_0012e26c(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *__ptr;
  size_t __size;
  long lVar2;
  size_t __n;
  void *__src;
  
  __n = *(size_t *)(param_1 + 0x18);
  if (__n != 0) {
    lVar2 = param_2[1];
    __ptr = (void *)*param_2;
    __src = *(void **)(param_1 + 0x10);
    if ((ulong)param_2[2] < lVar2 + __n) {
      __size = param_2[2] * 2;
      uVar1 = lVar2 + __n + 0x3e0;
      if (__size < uVar1 || __size - uVar1 == 0) {
        __size = uVar1;
      }
      param_2[2] = __size;
      __ptr = realloc(__ptr,__size);
      *param_2 = __ptr;
      if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar2 = param_2[1];
    }
    memcpy((void *)((long)__ptr + lVar2),__src,__n);
    param_2[1] = param_2[1] + __n;
  }
  return;
}


// ===== 0012e300  FUN_0012e300 =====

undefined1  [16] FUN_0012e300(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x10);
}


// ===== 0012e310  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0012e318  FUN_0012e318 =====

void FUN_0012e318(long param_1,undefined8 *param_2)

{
  void *__ptr;
  long lVar1;
  size_t __size;
  ulong uVar2;
  undefined1 uVar3;
  long *plVar4;
  
  plVar4 = *(long **)(param_1 + 0x10);
  if ((plVar4 != (long *)0x0) &&
     ((**(code **)(*plVar4 + 0x20))(plVar4,param_2), (*(ushort *)((long)plVar4 + 9) & 0xc0) != 0x40)
     ) {
    (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
  }
  if ((*(long *)(param_1 + 0x10) != 0) || (*(char *)(param_1 + 0x20) != '\0')) {
    lVar1 = param_2[1];
    __ptr = (void *)*param_2;
    uVar3 = 0x2e;
    if (*(char *)(param_1 + 0x20) != '\0') {
      uVar3 = 0x3a;
    }
    uVar2 = lVar1 + 1;
    if ((ulong)param_2[2] < uVar2) {
      __size = param_2[2] * 2;
      uVar2 = lVar1 + 0x3e1;
      if (__size < uVar2 || __size - uVar2 == 0) {
        __size = uVar2;
      }
      param_2[2] = __size;
      __ptr = realloc(__ptr,__size);
      *param_2 = __ptr;
      if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar1 = param_2[1];
      uVar2 = lVar1 + 1;
    }
    param_2[1] = uVar2;
    *(undefined1 *)((long)__ptr + lVar1) = uVar3;
  }
  plVar4 = *(long **)(param_1 + 0x18);
  (**(code **)(*plVar4 + 0x20))(plVar4,param_2);
  if ((*(ushort *)((long)plVar4 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0012e434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
  return;
}


// ===== 0012e43c  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0012e444  FUN_0012e444 =====

long FUN_0012e444(long *param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  short *psVar4;
  undefined8 *puVar5;
  void *pvVar6;
  
  psVar4 = (short *)*param_1;
  if (((ulong)(param_1[1] - (long)psVar4) < 2) || (*psVar4 != 0x7453)) {
    puVar5 = (undefined8 *)0x0;
    if ((short *)param_1[1] == psVar4) goto LAB_0012e578;
  }
  else {
    pvVar6 = (void *)param_1[0x266];
    *param_1 = (long)(psVar4 + 1);
    lVar2 = *(long *)((long)pvVar6 + 8);
    puVar3 = (undefined8 *)pvVar6;
    if (lVar2 - 0xfd0U < 0xfffffffffffff010) {
      puVar3 = (undefined8 *)malloc(0x1000);
      if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar2 = 0;
      *puVar3 = pvVar6;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar2 + 0x20;
    puVar5 = (undefined8 *)((long)puVar3 + lVar2 + 0x10);
    *puVar5 = &PTR_FUN_0014e158;
    *(undefined1 *)((long)puVar3 + lVar2 + 0x18) = 8;
    *(ushort *)((long)puVar3 + lVar2 + 0x19) =
         *(ushort *)((long)puVar3 + lVar2 + 0x19) & 0xf000 | 0x540;
    *(undefined **)((long)puVar3 + lVar2 + 0x20) = &DAT_00113874;
    *(undefined8 *)((long)puVar3 + lVar2 + 0x28) = 3;
    psVar4 = (short *)*param_1;
    if ((short *)param_1[1] == psVar4) goto LAB_0012e578;
  }
  if ((char)*psVar4 == 'S') {
    lVar1 = FUN_0012f11c();
    lVar2 = lVar1;
    if (lVar1 != 0) {
      if (*(char *)(lVar1 + 8) == '\x1b') {
        lVar2 = FUN_0012f3f8(param_1,param_2,puVar5);
        return lVar2;
      }
      lVar2 = 0;
      if ((param_3 != (undefined1 *)0x0) && (puVar5 == (undefined8 *)0x0)) {
        *param_3 = 1;
        lVar2 = lVar1;
      }
    }
    return lVar2;
  }
LAB_0012e578:
  lVar2 = FUN_0012f3f8(param_1,param_2,puVar5,0);
  return lVar2;
}


// ===== 0012e5c4  FUN_0012e5c4 =====

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_0012e5c4(long *param_1,ulong param_2)

{
  ushort uVar1;
  long *plVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  char cVar15;
  ushort uVar16;
  long lVar17;
  char *pcVar18;
  long lVar19;
  char *pcVar20;
  long lVar21;
  size_t sVar22;
  void *pvVar23;
  undefined1 auVar24 [16];
  
  pcVar18 = (char *)*param_1;
  if ((pcVar18 != (char *)param_1[1]) && (*pcVar18 == 'I')) {
    *param_1 = (long)(pcVar18 + 1);
    if ((param_2 & 1) != 0) {
      plVar9 = (long *)param_1[0x53];
      param_1[0x54] = (long)plVar9;
      if (plVar9 == (long *)param_1[0x55]) {
        if (plVar9 == param_1 + 0x56) {
          plVar9 = (long *)malloc(0);
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          param_1[0x53] = (long)plVar9;
        }
        else {
          plVar9 = (long *)realloc(plVar9,0);
          param_1[0x53] = (long)plVar9;
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
        }
        param_1[0x54] = (long)plVar9;
        param_1[0x55] = (long)plVar9;
      }
      param_1[0x54] = (long)(plVar9 + 1);
      plVar2 = param_1 + 5;
      plVar10 = param_1 + 0x4b;
      *plVar9 = (long)(param_1 + 0x48);
      param_1[0x49] = param_1[0x48];
      lVar17 = param_1[3] - param_1[2] >> 3;
      pcVar18 = (char *)*param_1;
      pcVar20 = (char *)param_1[1];
LAB_0012e7a8:
      if ((pcVar18 != pcVar20) && (*pcVar18 == 'E')) goto LAB_0012ea3c;
      puVar11 = (undefined8 *)FUN_0012c934(param_1);
      if (puVar11 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      plVar9 = (long *)param_1[3];
      if (plVar9 != (long *)param_1[4]) {
        cVar15 = *(char *)(puVar11 + 1);
        param_1[3] = (long)(plVar9 + 1);
        *plVar9 = (long)puVar11;
        if (cVar15 != '\"') goto LAB_0012e7f0;
LAB_0012e9a4:
        puVar11 = (undefined8 *)puVar11[3];
        plVar9 = (long *)param_1[0x49];
        if (plVar9 == (long *)param_1[0x4a]) goto LAB_0012e9b8;
        goto LAB_0012e910;
      }
      plVar13 = (long *)param_1[2];
      sVar22 = (long)plVar9 - (long)plVar13;
      if (plVar13 == plVar2) {
        pvVar23 = malloc(sVar22 * 2);
        if (pvVar23 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (plVar9 != plVar2) {
          memcpy(pvVar23,plVar2,sVar22);
        }
        param_1[2] = (long)pvVar23;
      }
      else {
        pvVar23 = realloc(plVar13,sVar22 * 2);
        param_1[2] = (long)pvVar23;
        if (pvVar23 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
      }
      puVar12 = (undefined8 *)((long)pvVar23 + sVar22);
      param_1[3] = (long)puVar12;
      param_1[4] = (long)((long)pvVar23 + ((long)sVar22 >> 2) * 8);
      cVar15 = *(char *)(puVar11 + 1);
      param_1[3] = (long)(puVar12 + 1);
      *puVar12 = puVar11;
      if (cVar15 == '\"') goto LAB_0012e9a4;
LAB_0012e7f0:
      if (cVar15 != ')') goto LAB_0012e900;
      pvVar23 = (void *)param_1[0x266];
      plVar9 = (long *)puVar11[2];
      lVar14 = puVar11[3];
      lVar19 = *(long *)((long)pvVar23 + 8);
      puVar12 = (undefined8 *)pvVar23;
      if (lVar19 - 0xfd0U < 0xfffffffffffff010) {
        puVar12 = (undefined8 *)malloc(0x1000);
        if (puVar12 == (undefined8 *)0x0) goto LAB_0012eb44;
        lVar19 = 0;
        *puVar12 = pvVar23;
        puVar12[1] = 0;
        param_1[0x266] = (long)puVar12;
      }
      *(long *)((long)puVar12 + 8) = lVar19 + 0x20;
      lVar21 = lVar14 << 3;
      puVar11 = (undefined8 *)((long)puVar12 + lVar19 + 0x10);
      *puVar11 = &PTR_FUN_0014ff78;
      *(undefined1 *)((long)puVar12 + lVar19 + 0x18) = 0x28;
      uVar1 = *(ushort *)((long)puVar12 + lVar19 + 0x19) & 0xf000;
      *(long **)((long)puVar12 + lVar19 + 0x20) = plVar9;
      *(long *)((long)puVar12 + lVar19 + 0x28) = lVar14;
      uVar16 = uVar1 | 0xa80;
      *(ushort *)((long)puVar12 + lVar19 + 0x19) = uVar16;
      plVar13 = plVar9;
      lVar4 = lVar21;
      lVar6 = lVar14;
      while (plVar7 = plVar9, lVar5 = lVar21, lVar8 = lVar14, lVar6 != 0) {
        if ((*(ushort *)(*plVar13 + 9) & 0x300) != 0x100) goto joined_r0x0012e898;
        plVar13 = plVar13 + 1;
        lVar4 = lVar4 + -8;
        lVar6 = lVar4;
      }
      uVar16 = uVar1 | 0x980;
      *(ushort *)((long)puVar12 + lVar19 + 0x19) = uVar16;
joined_r0x0012e898:
      do {
        if (lVar8 == 0) goto LAB_0012e8c4;
        if ((*(ushort *)(*plVar7 + 9) & 0xc00) != 0x400) goto joined_r0x0012e8d0;
        lVar5 = lVar5 + -8;
        plVar7 = plVar7 + 1;
        lVar8 = lVar5;
      } while( true );
    }
    plVar9 = param_1 + 5;
    lVar17 = param_1[3] - param_1[2] >> 3;
    pcVar18 = (char *)*param_1;
    pcVar20 = (char *)param_1[1];
LAB_0012e670:
    do {
      if ((pcVar18 != pcVar20) && (*pcVar18 == 'E')) goto LAB_0012ea3c;
      lVar14 = FUN_0012c934(param_1);
      if (lVar14 == 0) {
        return (undefined8 *)0x0;
      }
      plVar2 = (long *)param_1[3];
      if (plVar2 == (long *)param_1[4]) {
        plVar10 = (long *)param_1[2];
        sVar22 = (long)plVar2 - (long)plVar10;
        if (plVar10 == plVar9) {
          pvVar23 = malloc(sVar22 * 2);
          if (pvVar23 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (plVar2 != plVar9) {
            memcpy(pvVar23,plVar9,sVar22);
          }
          param_1[2] = (long)pvVar23;
        }
        else {
          pvVar23 = realloc(plVar10,sVar22 * 2);
          param_1[2] = (long)pvVar23;
          if (pvVar23 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
        }
        plVar2 = (long *)((long)pvVar23 + sVar22);
        param_1[3] = (long)plVar2;
        param_1[4] = (long)((long)pvVar23 + ((long)sVar22 >> 2) * 8);
        param_1[3] = (long)(plVar2 + 1);
        *plVar2 = lVar14;
        pcVar18 = (char *)*param_1;
        pcVar20 = (char *)param_1[1];
        if (pcVar18 == pcVar20) goto LAB_0012e670;
      }
      else {
        param_1[3] = (long)(plVar2 + 1);
        *plVar2 = lVar14;
        pcVar18 = (char *)*param_1;
        pcVar20 = (char *)param_1[1];
        if (pcVar18 == pcVar20) goto LAB_0012e670;
      }
    } while (*pcVar18 != 'Q');
LAB_0012ead0:
    uVar3 = *(undefined1 *)((long)param_1 + 0x30a);
    *param_1 = (long)(pcVar18 + 1);
    *(undefined1 *)((long)param_1 + 0x30a) = 1;
                    /* try { // try from 0012eae4 to 0012eaeb has its CatchHandler @ 0012eb58 */
    lVar14 = FUN_0012ff04(param_1);
    *(undefined1 *)((long)param_1 + 0x30a) = uVar3;
    if (((lVar14 != 0) && (pcVar18 = (char *)*param_1, pcVar18 != (char *)param_1[1])) &&
       (*pcVar18 == 'E')) goto LAB_0012ea40;
  }
  return (undefined8 *)0x0;
LAB_0012e8c4:
  uVar16 = uVar16 & 0xf3ff | 0x400;
  *(ushort *)((long)puVar12 + lVar19 + 0x19) = uVar16;
joined_r0x0012e8d0:
  do {
    if (lVar14 == 0) break;
    if ((*(ushort *)(*plVar9 + 9) & 0xc0) != 0x40) goto LAB_0012e900;
    lVar21 = lVar21 + -8;
    plVar9 = plVar9 + 1;
    lVar14 = lVar21;
  } while( true );
  *(ushort *)((long)puVar12 + lVar19 + 0x19) = uVar16 & 0xff7f | 0x40;
LAB_0012e900:
  plVar9 = (long *)param_1[0x49];
  if (plVar9 == (long *)param_1[0x4a]) {
LAB_0012e9b8:
    plVar13 = (long *)param_1[0x48];
    sVar22 = (long)plVar9 - (long)plVar13;
    if (plVar13 == plVar10) {
      pvVar23 = malloc(sVar22 * 2);
      if (pvVar23 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (plVar9 != plVar10) {
        memcpy(pvVar23,plVar10,sVar22);
      }
      param_1[0x48] = (long)pvVar23;
    }
    else {
      pvVar23 = realloc(plVar13,sVar22 * 2);
      param_1[0x48] = (long)pvVar23;
      if (pvVar23 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    plVar9 = (long *)((long)pvVar23 + sVar22);
    param_1[0x49] = (long)plVar9;
    param_1[0x4a] = (long)((long)pvVar23 + ((long)sVar22 >> 2) * 8);
    param_1[0x49] = (long)(plVar9 + 1);
    *plVar9 = (long)puVar11;
    pcVar18 = (char *)*param_1;
    pcVar20 = (char *)param_1[1];
    if (pcVar18 == pcVar20) goto LAB_0012e7a8;
  }
  else {
LAB_0012e910:
    param_1[0x49] = (long)(plVar9 + 1);
    *plVar9 = (long)puVar11;
    pcVar18 = (char *)*param_1;
    pcVar20 = (char *)param_1[1];
    if (pcVar18 == pcVar20) goto LAB_0012e7a8;
  }
  if (*pcVar18 == 'Q') goto LAB_0012ead0;
  goto LAB_0012e7a8;
LAB_0012ea3c:
  lVar14 = 0;
LAB_0012ea40:
  *param_1 = (long)(pcVar18 + 1);
  auVar24 = FUN_0012ce20(param_1,lVar17);
  pvVar23 = (void *)param_1[0x266];
  lVar17 = *(long *)((long)pvVar23 + 8);
  puVar11 = (undefined8 *)pvVar23;
  if (lVar17 - 0xfc0U < 0xfffffffffffff010) {
    puVar11 = (undefined8 *)malloc(0x1000);
    if (puVar11 == (undefined8 *)0x0) {
LAB_0012eb44:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar17 = 0;
    *puVar11 = pvVar23;
    puVar11[1] = 0;
    param_1[0x266] = (long)puVar11;
  }
  *(long *)((long)puVar11 + 8) = lVar17 + 0x30;
  puVar12 = (undefined8 *)((long)puVar11 + lVar17 + 0x10);
  *puVar12 = &PTR_FUN_0014ffe8;
  *(undefined1 *)((long)puVar11 + lVar17 + 0x18) = 0x2b;
  *(undefined1 (*) [16])((long)puVar11 + lVar17 + 0x20) = auVar24;
  *(long *)((long)puVar11 + lVar17 + 0x30) = lVar14;
  *(ushort *)((long)puVar11 + lVar17 + 0x19) =
       *(ushort *)((long)puVar11 + lVar17 + 0x19) & 0xf000 | 0x540;
  return puVar12;
}


// ===== 0012eb60  FUN_0012eb60 =====

void FUN_0012eb60(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  void *pvVar5;
  
  pvVar5 = *(void **)(param_1 + 0x1330);
  lVar2 = *(long *)((long)pvVar5 + 8);
  puVar1 = (undefined8 *)pvVar5;
  if (lVar2 - 0xfd0U < 0xfffffffffffff010) {
    puVar1 = (undefined8 *)malloc(0x1000);
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar2 = 0;
    *puVar1 = pvVar5;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar2 + 0x20;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_00150058;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x2d;
  uVar3 = *param_2;
  uVar4 = *param_3;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar3;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = uVar4;
  return;
}


// ===== 0012ec08  FUN_0012ec08 =====

undefined8 * FUN_0012ec08(long *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  char cVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined8 *puVar13;
  size_t __n;
  ulong uVar14;
  void *pvVar15;
  long *plVar16;
  undefined8 local_48;
  
  pbVar1 = (byte *)*param_1;
  pbVar2 = (byte *)param_1[1];
  if ((pbVar1 != pbVar2) && (*pbVar1 == 0x54)) {
    pbVar12 = pbVar1 + 1;
    *param_1 = (long)pbVar12;
    if (pbVar12 != pbVar2) {
      if (*pbVar12 == 0x4c) {
        pbVar12 = pbVar1 + 2;
        *param_1 = (long)pbVar12;
        if (pbVar2 == pbVar12) {
          return (undefined8 *)0x0;
        }
        if (*pbVar12 - 0x3a < 0xfffffff6) {
          return (undefined8 *)0x0;
        }
        lVar8 = 0;
        pbVar4 = pbVar1 + 4;
        do {
          pbVar12 = pbVar4;
          pbVar11 = pbVar12 + -1;
          *param_1 = (long)pbVar11;
          lVar9 = (ulong)pbVar12[-2] + lVar8 * 10;
          lVar8 = lVar9 + -0x30;
          if (pbVar11 == pbVar2) break;
          pbVar4 = pbVar12 + 1;
        } while (pbVar12[-1] - 0x30 < 10);
        if (pbVar11 == pbVar2) {
          return (undefined8 *)0x0;
        }
        if (pbVar12[-1] != 0x5f) {
          return (undefined8 *)0x0;
        }
        uVar10 = lVar9 - 0x2f;
        *param_1 = (long)pbVar12;
      }
      else {
        uVar10 = 0;
      }
      if (pbVar12 != pbVar2) {
        if (*pbVar12 == 0x5f) {
          uVar14 = 0;
          cVar3 = *(char *)((long)param_1 + 0x30a);
          *param_1 = (long)(pbVar12 + 1);
        }
        else {
          if (*pbVar12 - 0x3a < 0xfffffff6) {
            return (undefined8 *)0x0;
          }
          lVar8 = 0;
          do {
            pbVar4 = pbVar12;
            pbVar12 = pbVar4 + 1;
            *param_1 = (long)pbVar12;
            lVar9 = (ulong)*pbVar4 + lVar8 * 10;
            lVar8 = lVar9 + -0x30;
            if (pbVar12 == pbVar2) break;
          } while (*pbVar12 - 0x30 < 10);
          if (pbVar12 == pbVar2) {
            return (undefined8 *)0x0;
          }
          if (*pbVar12 != 0x5f) {
            return (undefined8 *)0x0;
          }
          uVar14 = lVar9 - 0x2f;
          cVar3 = *(char *)((long)param_1 + 0x30a);
          *param_1 = (long)(pbVar4 + 2);
        }
        if (cVar3 == '\0') {
          if ((*(char *)((long)param_1 + 0x309) == '\0') || (uVar10 != 0)) {
            uVar7 = param_1[0x54] - param_1[0x53] >> 3;
            if ((uVar10 < uVar7) &&
               ((plVar16 = *(long **)(param_1[0x53] + uVar10 * 8), plVar16 != (long *)0x0 &&
                (uVar14 < (ulong)(plVar16[1] - *plVar16 >> 3))))) {
              return *(undefined8 **)(*plVar16 + uVar14 * 8);
            }
            if (uVar7 < uVar10) {
              return (undefined8 *)0x0;
            }
            if (param_1[0x62] == uVar10) {
              if (uVar10 == uVar7) {
                local_48 = 0;
                FUN_0012fa78(param_1 + 0x53,&local_48);
              }
              puVar5 = (undefined8 *)FUN_0012fb50(param_1,&DAT_00112468);
              return puVar5;
            }
            return (undefined8 *)0x0;
          }
          pvVar15 = (void *)param_1[0x266];
          lVar8 = *(long *)((long)pvVar15 + 8);
          puVar5 = (undefined8 *)pvVar15;
          if (lVar8 - 0xfc0U < 0xfffffffffffff010) {
            puVar5 = (undefined8 *)malloc(0x1000);
            if (puVar5 == (undefined8 *)0x0) {
LAB_0012efd0:
                    /* WARNING: Subroutine does not return */
              std::terminate();
            }
            lVar8 = 0;
            *puVar5 = pvVar15;
            puVar5[1] = 0;
            param_1[0x266] = (long)puVar5;
          }
          *(long *)((long)puVar5 + 8) = lVar8 + 0x30;
          puVar13 = (undefined8 *)((long)puVar5 + lVar8 + 0x10);
          *puVar13 = &PTR_FUN_0014e238;
          *(ulong *)((long)puVar5 + lVar8 + 0x20) = uVar14;
          *(undefined8 *)((long)puVar5 + lVar8 + 0x28) = 0;
          *(undefined1 *)((long)puVar5 + lVar8 + 0x30) = 0;
          *(ushort *)((long)puVar5 + lVar8 + 0x19) =
               *(ushort *)((long)puVar5 + lVar8 + 0x19) & 0xf000 | 0xa80;
          plVar16 = (long *)param_1[0x5b];
          plVar6 = (long *)param_1[0x5c];
          *(undefined1 *)((long)puVar5 + lVar8 + 0x18) = 0x2c;
          if (plVar16 == plVar6) {
            plVar6 = (long *)param_1[0x5a];
            __n = (long)plVar16 - (long)plVar6;
            if (plVar6 == param_1 + 0x5d) {
              pvVar15 = malloc(__n * 2);
              if (pvVar15 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              if (plVar16 != plVar6) {
                memmove(pvVar15,plVar6,__n);
              }
              param_1[0x5a] = (long)pvVar15;
            }
            else {
              pvVar15 = realloc(plVar6,__n * 2);
              param_1[0x5a] = (long)pvVar15;
              if (pvVar15 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
            }
            plVar16 = (long *)((long)pvVar15 + __n);
            param_1[0x5c] = (long)((long)pvVar15 + ((long)__n >> 2) * 8);
          }
          param_1[0x5b] = (long)(plVar16 + 1);
          *plVar16 = (long)puVar13;
          return puVar13;
        }
        pvVar15 = (void *)param_1[0x266];
        lVar8 = *(long *)((long)pvVar15 + 8);
        puVar5 = (undefined8 *)pvVar15;
        if (lVar8 - 0xfd0U < 0xfffffffffffff010) {
          puVar5 = (undefined8 *)malloc(0x1000);
          if (puVar5 == (undefined8 *)0x0) goto LAB_0012efd0;
          lVar8 = 0;
          *puVar5 = pvVar15;
          puVar5[1] = 0;
          param_1[0x266] = (long)puVar5;
        }
        *(long *)((long)puVar5 + 8) = lVar8 + 0x20;
        puVar13 = (undefined8 *)((long)puVar5 + lVar8 + 0x10);
        *puVar13 = &PTR_FUN_0014e158;
        *(undefined1 *)((long)puVar5 + lVar8 + 0x18) = 8;
        *(ushort *)((long)puVar5 + lVar8 + 0x19) =
             *(ushort *)((long)puVar5 + lVar8 + 0x19) & 0xf000 | 0x540;
        *(byte **)((long)puVar5 + lVar8 + 0x20) = pbVar1;
        *(long *)((long)puVar5 + lVar8 + 0x28) = (long)pbVar12 - (long)pbVar1;
        return puVar13;
      }
    }
  }
  return (undefined8 *)0x0;
}


// ===== 0012efd8  FUN_0012efd8 =====

undefined8 * FUN_0012efd8(long *param_1)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  void *pvVar7;
  
  pcVar2 = (char *)*param_1;
  if ((pcVar2 != (char *)param_1[1]) && (*pcVar2 == 'D')) {
    pcVar1 = pcVar2 + 1;
    *param_1 = (long)pcVar1;
    if ((pcVar1 != (char *)param_1[1]) && ((*pcVar1 == 't' || (*pcVar1 == 'T')))) {
      *param_1 = (long)(pcVar2 + 2);
      puVar3 = (undefined8 *)FUN_0012ff04();
      puVar6 = puVar3;
      if (puVar3 != (undefined8 *)0x0) {
        pcVar2 = (char *)*param_1;
        if (pcVar2 == (char *)param_1[1]) {
          return (undefined8 *)0x0;
        }
        if (*pcVar2 != 'E') {
          return (undefined8 *)0x0;
        }
        pvVar7 = (void *)param_1[0x266];
        *param_1 = (long)(pcVar2 + 1);
        lVar5 = *(long *)((long)pvVar7 + 8);
        puVar4 = (undefined8 *)pvVar7;
        if (lVar5 - 0xfb0U < 0xfffffffffffff010) {
          puVar4 = (undefined8 *)malloc(0x1000);
          if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::terminate();
          }
          lVar5 = 0;
          *puVar4 = pvVar7;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        *(long *)((long)puVar4 + 8) = lVar5 + 0x40;
        puVar6 = (undefined8 *)((long)puVar4 + lVar5 + 0x10);
        *puVar6 = &PTR_FUN_0014eb58;
        *(undefined1 *)((long)puVar4 + lVar5 + 0x18) = 0x3c;
        *(undefined8 **)((long)puVar4 + lVar5 + 0x30) = puVar3;
        *(char **)((long)puVar4 + lVar5 + 0x20) = "decltype";
        *(undefined8 *)((long)puVar4 + lVar5 + 0x28) = 8;
        *(undefined8 *)((long)puVar4 + lVar5 + 0x38) = 0;
        *(undefined8 *)((long)puVar4 + lVar5 + 0x40) = 0;
        *(ushort *)((long)puVar4 + lVar5 + 0x19) =
             *(ushort *)((long)puVar4 + lVar5 + 0x19) & 0xf000 | 0x540;
      }
      return puVar6;
    }
  }
  return (undefined8 *)0x0;
}


// ===== 0012f11c  FUN_0012f11c =====

undefined8 * FUN_0012f11c(long *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  undefined4 uVar10;
  void *pvVar11;
  size_t __n;
  long *__src;
  long *plVar12;
  
  pbVar1 = (byte *)*param_1;
  pbVar2 = (byte *)param_1[1];
  if ((pbVar1 != pbVar2) && (*pbVar1 == 0x53)) {
    pbVar6 = pbVar1 + 1;
    *param_1 = (long)pbVar6;
    if (pbVar2 != pbVar6) {
      bVar3 = *pbVar6;
      uVar8 = (uint)bVar3;
      if (bVar3 < 0x61) {
        if (bVar3 == 0x5f) {
          *param_1 = (long)(pbVar1 + 2);
          if ((undefined8 *)param_1[0x25] == (undefined8 *)param_1[0x26]) {
            return (undefined8 *)0x0;
          }
          return *(undefined8 **)param_1[0x25];
        }
        if (uVar8 < 0x30) {
          return (undefined8 *)0x0;
        }
      }
      else if (uVar8 < 0x7b) {
        if (bVar3 < 0x69) {
          if (bVar3 == 0x61) {
            uVar10 = 0;
          }
          else if (bVar3 == 0x62) {
            uVar10 = 1;
          }
          else {
            if (uVar8 != 100) {
              return (undefined8 *)0x0;
            }
            uVar10 = 5;
          }
        }
        else if (bVar3 == 0x69) {
          uVar10 = 3;
        }
        else if (bVar3 == 0x6f) {
          uVar10 = 4;
        }
        else {
          if (bVar3 != 0x73) {
            return (undefined8 *)0x0;
          }
          uVar10 = 2;
        }
        pvVar11 = (void *)param_1[0x266];
        *param_1 = (long)(pbVar1 + 2);
        lVar7 = *(long *)((long)pvVar11 + 8);
        puVar4 = (undefined8 *)pvVar11;
        if (lVar7 - 0xfe0U < 0xfffffffffffff010) {
          puVar4 = (undefined8 *)malloc(0x1000);
          if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::terminate();
          }
          lVar7 = 0;
          *puVar4 = pvVar11;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        *(long *)((long)puVar4 + 8) = lVar7 + 0x10;
        puVar4 = (undefined8 *)(lVar7 + 0x10 + (long)puVar4);
        *(undefined1 *)(puVar4 + 1) = 0x30;
        *(undefined4 *)((long)puVar4 + 0xc) = uVar10;
        *(ushort *)((long)puVar4 + 9) = *(ushort *)((long)puVar4 + 9) & 0xf000 | 0x540;
        *puVar4 = &PTR_FUN_0014fb88;
        puVar5 = (undefined8 *)FUN_0013c020(param_1,puVar4);
        if (puVar5 != puVar4) {
          plVar12 = (long *)param_1[0x26];
          if (plVar12 == (long *)param_1[0x27]) {
            __src = (long *)param_1[0x25];
            __n = (long)plVar12 - (long)__src;
            if (__src == param_1 + 0x28) {
              pvVar11 = malloc(__n * 2);
              if (pvVar11 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              if (plVar12 != __src) {
                memmove(pvVar11,__src,__n);
              }
              param_1[0x25] = (long)pvVar11;
            }
            else {
              pvVar11 = realloc(__src,__n * 2);
              param_1[0x25] = (long)pvVar11;
              if (pvVar11 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
            }
            plVar12 = (long *)((long)pvVar11 + __n);
            param_1[0x27] = (long)((long)pvVar11 + ((long)__n >> 2) * 8);
          }
          param_1[0x26] = (long)(plVar12 + 1);
          *plVar12 = (long)puVar5;
          return puVar5;
        }
        return puVar4;
      }
      if ((uVar8 < 0x3a) || (uVar8 - 0x41 < 0x1a)) {
        lVar7 = 0;
        while( true ) {
          bVar3 = *pbVar6;
          if (bVar3 < 0x30) break;
          if (bVar3 < 0x3a) {
            lVar9 = -0x30;
          }
          else {
            if (0x19 < bVar3 - 0x41) break;
            lVar9 = -0x37;
          }
          pbVar6 = pbVar6 + 1;
          *param_1 = (long)pbVar6;
          lVar7 = (ulong)bVar3 + lVar7 * 0x24 + lVar9;
          if (pbVar6 == pbVar2) {
            return (undefined8 *)0x0;
          }
        }
        if ((pbVar6 != pbVar2) && (*pbVar6 == 0x5f)) {
          *param_1 = (long)(pbVar6 + 1);
          if (lVar7 + 1U < (ulong)(param_1[0x26] - param_1[0x25] >> 3)) {
            return *(undefined8 **)(param_1[0x25] + (lVar7 + 1U) * 8);
          }
        }
      }
    }
  }
  return (undefined8 *)0x0;
}


// ===== 0012f3f8  FUN_0012f3f8 =====

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_0012f3f8(long *param_1,undefined1 *param_2,undefined8 *param_3,long param_4)

{
  long *__src;
  bool bVar1;
  char *pcVar2;
  byte bVar3;
  ushort uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long *__ptr;
  undefined8 uVar10;
  bool bVar11;
  byte *pbVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  byte *pbVar16;
  undefined1 uVar17;
  byte *pbVar18;
  void *pvVar19;
  size_t __n;
  long *plVar20;
  undefined1 auVar21 [16];
  long local_60;
  undefined8 *local_58;
  
  local_60 = param_4;
  local_58 = param_3;
  uVar5 = FUN_0012db88(param_1,&local_60);
  if ((uVar5 & 1) != 0) goto LAB_0012f434;
  pbVar12 = (byte *)*param_1;
  pbVar16 = (byte *)param_1[1];
  if (param_3 == (undefined8 *)0x0) {
LAB_0012f470:
    bVar1 = true;
    if (pbVar12 == pbVar16) goto LAB_0012f600;
LAB_0012f47c:
    if (*pbVar12 == 0x4c) {
      pbVar12 = pbVar12 + 1;
      *param_1 = (long)pbVar12;
    }
    if ((pbVar16 != pbVar12) && (bVar3 = *pbVar12, 0x30 < bVar3)) {
      if (bVar3 < 0x3a) {
        puVar7 = (undefined8 *)FUN_0012e010(param_1);
        lVar14 = local_60;
      }
      else {
        if (bVar3 != 0x55) goto LAB_0012f4fc;
        puVar7 = (undefined8 *)FUN_001360ec(param_1,param_2);
        lVar14 = local_60;
      }
      goto joined_r0x0012f7e0;
    }
LAB_0012f4fc:
    if ((1 < (ulong)((long)pbVar16 - (long)pbVar12)) && (*(short *)pbVar12 == 0x4344)) {
      lVar14 = param_1[2];
      lVar13 = param_1[3];
      *param_1 = (long)(pbVar12 + 2);
      lVar9 = FUN_0012e010(param_1);
      if (lVar9 == 0) {
        return (undefined8 *)0x0;
      }
      __src = param_1 + 5;
      while( true ) {
        plVar20 = (long *)param_1[3];
        if (plVar20 == (long *)param_1[4]) {
          __ptr = (long *)param_1[2];
          __n = (long)plVar20 - (long)__ptr;
          if (__ptr == __src) {
            pvVar19 = malloc(__n * 2);
            if (pvVar19 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            if (plVar20 != __src) {
              memcpy(pvVar19,__src,__n);
            }
            param_1[2] = (long)pvVar19;
          }
          else {
            pvVar19 = realloc(__ptr,__n * 2);
            param_1[2] = (long)pvVar19;
            if (pvVar19 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
          }
          plVar20 = (long *)((long)pvVar19 + __n);
          param_1[4] = (long)((long)pvVar19 + ((long)__n >> 2) * 8);
        }
        param_1[3] = (long)(plVar20 + 1);
        *plVar20 = lVar9;
        pcVar2 = (char *)*param_1;
        if ((pcVar2 != (char *)param_1[1]) && (*pcVar2 == 'E')) break;
        lVar9 = FUN_0012e010(param_1);
        if (lVar9 == 0) {
          return (undefined8 *)0x0;
        }
      }
      *param_1 = (long)(pcVar2 + 1);
      auVar21 = FUN_0012ce20(param_1,lVar13 - lVar14 >> 3);
      pvVar19 = (void *)param_1[0x266];
      lVar14 = *(long *)((long)pvVar19 + 8);
      puVar8 = (undefined8 *)pvVar19;
      if (lVar14 - 0xfd0U < 0xfffffffffffff010) {
        puVar8 = (undefined8 *)malloc(0x1000);
        if (puVar8 == (undefined8 *)0x0) goto LAB_0012f9cc;
        lVar14 = 0;
        *puVar8 = pvVar19;
        puVar8[1] = 0;
        param_1[0x266] = (long)puVar8;
      }
      *(long *)((long)puVar8 + 8) = lVar14 + 0x20;
      puVar7 = (undefined8 *)((long)puVar8 + lVar14 + 0x10);
      *puVar7 = &PTR_FUN_0014fcd8;
      *(undefined1 (*) [16])((long)puVar8 + lVar14 + 0x20) = auVar21;
      *(undefined1 *)((long)puVar8 + lVar14 + 0x18) = 0x35;
      *(ushort *)((long)puVar8 + lVar14 + 0x19) =
           *(ushort *)((long)puVar8 + lVar14 + 0x19) & 0xf000 | 0x540;
      lVar14 = local_60;
      goto joined_r0x0012f7e0;
    }
    if ((pbVar16 == pbVar12) || (1 < *pbVar12 - 0x43)) goto LAB_0012f600;
    if (param_3 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    if (local_60 != 0) {
      return (undefined8 *)0x0;
    }
    puVar8 = param_3;
    if (*(char *)(param_3 + 1) == '0') {
      pvVar19 = (void *)param_1[0x266];
      lVar14 = *(long *)((long)pvVar19 + 8);
      puVar8 = (undefined8 *)pvVar19;
      if (lVar14 - 0xfe0U < 0xfffffffffffff010) {
        puVar8 = (undefined8 *)malloc(0x1000);
        if (puVar8 == (undefined8 *)0x0) goto LAB_0012f9cc;
        lVar14 = 0;
        *puVar8 = pvVar19;
        puVar8[1] = 0;
        param_1[0x266] = (long)puVar8;
      }
      *(long *)((long)puVar8 + 8) = lVar14 + 0x10;
      puVar8 = (undefined8 *)(lVar14 + 0x10 + (long)puVar8);
      *(undefined1 *)(puVar8 + 1) = 0x2f;
      *(undefined4 *)((long)puVar8 + 0xc) = *(undefined4 *)((long)param_3 + 0xc);
      *(ushort *)((long)puVar8 + 9) = *(ushort *)((long)puVar8 + 9) & 0xf000 | 0x540;
      *puVar8 = &PTR_FUN_0014fc10;
      pbVar12 = (byte *)*param_1;
      pbVar16 = (byte *)param_1[1];
      local_58 = puVar8;
    }
    if (pbVar12 != pbVar16) {
      if (*pbVar12 == 0x43) {
        pbVar18 = pbVar12 + 1;
        *param_1 = (long)pbVar18;
        if (pbVar18 == pbVar16) {
          bVar11 = false;
          pbVar18 = pbVar16;
        }
        else if (*pbVar18 == 0x49) {
          bVar11 = true;
          *param_1 = (long)(pbVar12 + 2);
          pbVar18 = pbVar12 + 2;
        }
        else {
          bVar11 = false;
        }
        if ((pbVar16 == pbVar18) || (uVar15 = (uint)*pbVar18, 4 < uVar15 - 0x31)) goto LAB_0012f434;
        *param_1 = (long)(pbVar18 + 1);
        if (param_2 != (undefined1 *)0x0) {
          *param_2 = 1;
        }
        if ((bVar11) && (lVar14 = FUN_0012c1f0(param_1,param_2), lVar14 == 0)) {
          return (undefined8 *)0x0;
        }
        uVar10 = 0;
      }
      else {
        if ((ulong)((long)pbVar16 - (long)pbVar12) < 2) {
          return (undefined8 *)0x0;
        }
        if (*pbVar12 != 0x44) {
          return (undefined8 *)0x0;
        }
        bVar3 = pbVar12[1];
        if (0x35 < bVar3) {
          return (undefined8 *)0x0;
        }
        if ((1L << ((ulong)bVar3 & 0x3f) & 0x37000000000000U) == 0) {
          return (undefined8 *)0x0;
        }
        uVar15 = (uint)bVar3;
        *param_1 = (long)(pbVar12 + 2);
        if (param_2 != (undefined1 *)0x0) {
          *param_2 = 1;
        }
        uVar10 = 1;
      }
      puVar7 = (undefined8 *)FUN_0013ca00(param_1,&local_58,uVar10,uVar15 - 0x30);
      param_3 = puVar8;
      lVar14 = local_60;
      goto joined_r0x0012f7e0;
    }
LAB_0012f434:
    puVar6 = (undefined8 *)0x0;
  }
  else {
    if (pbVar12 == pbVar16) {
      bVar1 = true;
      puVar7 = (undefined8 *)FUN_0013b91c(param_1,param_2);
      lVar14 = local_60;
      goto joined_r0x0012f7e0;
    }
    if (*pbVar12 != 0x46) goto LAB_0012f470;
    bVar1 = false;
    pbVar12 = pbVar12 + 1;
    *param_1 = (long)pbVar12;
    if (pbVar12 != pbVar16) goto LAB_0012f47c;
LAB_0012f600:
    puVar7 = (undefined8 *)FUN_0013b91c(param_1,param_2);
    lVar14 = local_60;
joined_r0x0012f7e0:
    local_60 = lVar14;
    if ((puVar7 == (undefined8 *)0x0) || (lVar14 == 0)) {
      if (puVar7 == (undefined8 *)0x0) goto LAB_0012f434;
    }
    else {
      pvVar19 = (void *)param_1[0x266];
      lVar13 = *(long *)((long)pvVar19 + 8);
      puVar8 = (undefined8 *)pvVar19;
      if (lVar13 - 0xfd0U < 0xfffffffffffff010) {
        puVar8 = (undefined8 *)malloc(0x1000);
        if (puVar8 == (undefined8 *)0x0) goto LAB_0012f9cc;
        lVar13 = 0;
        *puVar8 = pvVar19;
        puVar8[1] = 0;
        param_1[0x266] = (long)puVar8;
      }
      *(long *)((long)puVar8 + 8) = lVar13 + 0x20;
      puVar6 = (undefined8 *)((long)puVar8 + lVar13 + 0x10);
      *puVar6 = &PTR_FUN_0014fdb8;
      *(long *)((long)puVar8 + lVar13 + 0x20) = lVar14;
      *(undefined8 **)((long)puVar8 + lVar13 + 0x28) = puVar7;
      *(undefined1 *)((long)puVar8 + lVar13 + 0x18) = 0x1c;
      *(ushort *)((long)puVar8 + lVar13 + 0x19) =
           *(ushort *)((long)puVar8 + lVar13 + 0x19) & 0xf000 | 0x540;
      puVar7 = puVar6;
    }
    puVar7 = (undefined8 *)FUN_0013c020(param_1,puVar7);
    if (puVar7 == (undefined8 *)0x0) {
      bVar1 = true;
    }
    if (bVar1) {
      if (param_3 == (undefined8 *)0x0) {
        return puVar7;
      }
      if (puVar7 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      pvVar19 = (void *)param_1[0x266];
      lVar14 = *(long *)((long)pvVar19 + 8);
      puVar8 = (undefined8 *)pvVar19;
      if (lVar14 - 0xfd0U < 0xfffffffffffff010) {
        puVar8 = (undefined8 *)malloc(0x1000);
        if (puVar8 == (undefined8 *)0x0) {
LAB_0012f9cc:
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar14 = 0;
        *puVar8 = pvVar19;
        puVar8[1] = 0;
        param_1[0x266] = (long)puVar8;
      }
      *(long *)((long)puVar8 + 8) = lVar14 + 0x20;
      puVar6 = (undefined8 *)((long)puVar8 + lVar14 + 0x10);
      *puVar6 = &PTR_FUN_0014fe98;
      uVar4 = *(ushort *)((long)puVar8 + lVar14 + 0x19);
      uVar17 = 0x18;
    }
    else {
      pvVar19 = (void *)param_1[0x266];
      lVar14 = *(long *)((long)pvVar19 + 8);
      puVar8 = (undefined8 *)pvVar19;
      if (lVar14 - 0xfd0U < 0xfffffffffffff010) {
        puVar8 = (undefined8 *)malloc(0x1000);
        if (puVar8 == (undefined8 *)0x0) goto LAB_0012f9cc;
        lVar14 = 0;
        *puVar8 = pvVar19;
        puVar8[1] = 0;
        param_1[0x266] = (long)puVar8;
      }
      *(long *)((long)puVar8 + 8) = lVar14 + 0x20;
      puVar6 = (undefined8 *)((long)puVar8 + lVar14 + 0x10);
      *puVar6 = &PTR_FUN_0014fe28;
      uVar4 = *(ushort *)((long)puVar8 + lVar14 + 0x19);
      uVar17 = 0x19;
    }
    puVar6[2] = param_3;
    puVar6[3] = puVar7;
    *(undefined1 *)(puVar6 + 1) = uVar17;
    *(ushort *)((long)puVar6 + 9) = uVar4 & 0xf000 | 0x540;
  }
  return puVar6;
}


// ===== 0012f9d8  FUN_0012f9d8 =====

void FUN_0012f9d8(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  pvVar3 = *(void **)(param_1 + 0x1330);
  lVar2 = *(long *)((long)pvVar3 + 8);
  puVar1 = (undefined8 *)pvVar3;
  if (lVar2 - 0xfd0U < 0xfffffffffffff010) {
    puVar1 = (undefined8 *)malloc(0x1000);
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar2 = 0;
    *puVar1 = pvVar3;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar2 + 0x20;
  uVar5 = param_2[1];
  uVar4 = *param_2;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0014e158;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 8;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = uVar5;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar4;
  return;
}


// ===== 0012fa78  FUN_0012fa78 =====

void FUN_0012fa78(undefined8 *param_1,undefined8 *param_2)

{
  void *__dest;
  undefined8 uVar1;
  size_t __n;
  undefined8 *__src;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 == (undefined8 *)param_1[2]) {
    __src = (undefined8 *)*param_1;
    __n = (long)puVar2 - (long)__src;
    if (__src == param_1 + 3) {
      __dest = malloc(__n * 2);
      if (__dest == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (puVar2 != __src) {
        memmove(__dest,__src,__n);
      }
      *param_1 = __dest;
    }
    else {
      __dest = realloc(__src,__n * 2);
      *param_1 = __dest;
      if (__dest == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    puVar2 = (undefined8 *)((long)__dest + __n);
    param_1[1] = puVar2;
    param_1[2] = (void *)((long)__dest + ((long)__n >> 2) * 8);
  }
  uVar1 = *param_2;
  param_1[1] = puVar2 + 1;
  *puVar2 = uVar1;
  return;
}


// ===== 0012fb50  FUN_0012fb50 =====

undefined8 * FUN_0012fb50(long param_1,char *param_2)

{
  undefined8 *puVar1;
  size_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  void *pvVar5;
  
  pvVar5 = *(void **)(param_1 + 0x1330);
  lVar3 = *(long *)((long)pvVar5 + 8);
  puVar1 = (undefined8 *)pvVar5;
  if (lVar3 - 0xfd0U < 0xfffffffffffff010) {
    puVar1 = (undefined8 *)malloc(0x1000);
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar3 = 0;
    *puVar1 = pvVar5;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar3 + 0x20;
  sVar2 = strlen(param_2);
  puVar4 = (undefined8 *)((long)puVar1 + lVar3 + 0x10);
  *puVar4 = &PTR_FUN_0014e158;
  *(undefined1 *)((long)puVar1 + lVar3 + 0x18) = 8;
  *(char **)((long)puVar1 + lVar3 + 0x20) = param_2;
  *(size_t *)((long)puVar1 + lVar3 + 0x28) = sVar2;
  *(ushort *)((long)puVar1 + lVar3 + 0x19) =
       *(ushort *)((long)puVar1 + lVar3 + 0x19) & 0xf000 | 0x540;
  return puVar4;
}


// ===== 0012fbf8  FUN_0012fbf8 =====

bool FUN_0012fbf8(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  
  if (*(char *)(param_1 + 0x20) != '\0') {
    return false;
  }
  puVar2 = *(undefined8 **)(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x20) = 1;
  bVar1 = *(byte *)((long)puVar2 + 9);
  if ((bVar1 & 0xc0) == 0x80) {
                    /* try { // try from 0012fc4c to 0012fc53 has its CatchHandler @ 0012fc90 */
    bVar1 = (**(code **)*puVar2)(puVar2);
    *(undefined1 *)(param_1 + 0x20) = 0;
    return (bool)(bVar1 & 1);
  }
  *(undefined1 *)(param_1 + 0x20) = 0;
  return bVar1 < 0x40;
}


// ===== 0012fc98  FUN_0012fc98 =====

bool FUN_0012fc98(long param_1)

{
  byte bVar1;
  long *plVar2;
  
  if (*(char *)(param_1 + 0x20) != '\0') {
    return false;
  }
  plVar2 = *(long **)(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x20) = 1;
  bVar1 = *(byte *)((long)plVar2 + 10);
  if ((bVar1 & 3) == 2) {
                    /* try { // try from 0012fcec to 0012fcf3 has its CatchHandler @ 0012fd30 */
    bVar1 = (**(code **)(*plVar2 + 8))(plVar2);
    *(undefined1 *)(param_1 + 0x20) = 0;
    return (bool)(bVar1 & 1);
  }
  *(undefined1 *)(param_1 + 0x20) = 0;
  return (bVar1 & 3) == 0;
}


// ===== 0012fd38  FUN_0012fd38 =====

bool FUN_0012fd38(long param_1)

{
  ushort uVar1;
  byte bVar2;
  long *plVar3;
  
  if (*(char *)(param_1 + 0x20) != '\0') {
    return false;
  }
  plVar3 = *(long **)(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x20) = 1;
  uVar1 = *(ushort *)((long)plVar3 + 9) >> 10 & 3;
  if (uVar1 == 2) {
                    /* try { // try from 0012fd8c to 0012fd93 has its CatchHandler @ 0012fdd0 */
    bVar2 = (**(code **)(*plVar3 + 0x10))(plVar3);
    *(undefined1 *)(param_1 + 0x20) = 0;
    return (bool)(bVar2 & 1);
  }
  *(undefined1 *)(param_1 + 0x20) = 0;
  return uVar1 == 0;
}


// ===== 0012fdd8  FUN_0012fdd8 =====

void FUN_0012fdd8(long param_1)

{
  if (*(char *)(param_1 + 0x20) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x20) = 1;
                    /* try { // try from 0012fe18 to 0012fe1f has its CatchHandler @ 0012fe34 */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x18))(*(long **)(param_1 + 0x18));
  *(undefined1 *)(param_1 + 0x20) = 0;
  return;
}


// ===== 0012fe3c  FUN_0012fe3c =====

void FUN_0012fe3c(long param_1)

{
  if (*(char *)(param_1 + 0x20) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x20) = 1;
                    /* try { // try from 0012fe7c to 0012fe7f has its CatchHandler @ 0012fe94 */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
  *(undefined1 *)(param_1 + 0x20) = 0;
  return;
}


// ===== 0012fe9c  FUN_0012fe9c =====

void FUN_0012fe9c(long param_1)

{
  if (*(char *)(param_1 + 0x20) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x20) = 1;
                    /* try { // try from 0012fedc to 0012fedf has its CatchHandler @ 0012fef4 */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x28))();
  *(undefined1 *)(param_1 + 0x20) = 0;
  return;
}


// ===== 0012fefc  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 0012ff04  FUN_0012ff04 =====

undefined8 * FUN_0012ff04(long *param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  size_t sVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  void *pvVar8;
  long lVar9;
  undefined8 *puVar10;
  long **pplVar11;
  int iVar12;
  byte *pbVar13;
  long lVar14;
  long lVar15;
  byte *pbVar16;
  char *pcVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  undefined1 uVar23;
  char *pcVar24;
  long *plVar25;
  long *plVar26;
  size_t sVar27;
  byte *pbVar28;
  undefined1 auVar29 [16];
  undefined1 local_a0 [16];
  long *local_90;
  size_t sStack_88;
  long *local_80;
  int local_74;
  undefined1 local_70 [16];
  
  pplVar11 = (long **)local_a0;
  pbVar13 = (byte *)*param_1;
  pbVar28 = (byte *)param_1[1];
  uVar18 = (long)pbVar28 - (long)pbVar13;
  if (uVar18 < 2) {
    return (undefined8 *)0x0;
  }
  sVar3 = *(short *)pbVar13;
  if (sVar3 == 0x7367) {
    pbVar13 = pbVar13 + 2;
    uVar18 = (long)pbVar28 - (long)pbVar13;
    *param_1 = (long)pbVar13;
    if (uVar18 < 2) {
      return (undefined8 *)0x0;
    }
    uVar23 = 1;
  }
  else {
    uVar23 = 0;
  }
  uVar19 = 0;
  uVar21 = 0x3d;
  pbVar16 = pbVar13 + 1;
  bVar1 = *pbVar13;
  do {
    uVar22 = uVar19 + uVar21 >> 1;
    if (((byte)(&DAT_0014e298)[uVar22 * 0x10] < bVar1) ||
       ((bVar1 == (&DAT_0014e298)[uVar22 * 0x10] &&
        ((byte)(&DAT_0014e299)[uVar22 * 0x10] < *pbVar16)))) {
      uVar19 = uVar22 + 1;
      uVar22 = uVar21;
    }
    uVar21 = uVar22;
  } while (uVar21 != uVar19);
  lVar9 = uVar19 * 0x10;
  if ((bVar1 == (&DAT_0014e298)[lVar9]) && (*pbVar16 == (&DAT_0014e299)[lVar9])) {
    plVar25 = (long *)(&PTR_s_operator___0014e2a0)[uVar19 * 2];
    pbVar16 = pbVar13 + 2;
    bVar1 = (&DAT_0014e29a)[lVar9];
    *param_1 = (long)pbVar16;
    sVar4 = strlen((char *)plVar25);
    plVar26 = plVar25;
    sVar27 = sVar4;
    if (bVar1 < 0xb) {
      if ((sVar4 < 8) || (*plVar25 != 0x726f74617265706f)) goto LAB_001312c0;
      sVar27 = sVar4 - 8;
      plVar26 = plVar25 + 1;
      if ((sVar27 != 0) && ((char)*plVar26 == ' ')) {
        plVar26 = (long *)((long)plVar25 + 9);
        sVar27 = sVar4 - 9;
      }
    }
    local_90 = plVar26;
    sStack_88 = sVar27;
    local_70._0_8_ = plVar26;
    local_70._8_8_ = sVar27;
    switch(bVar1) {
    case 0:
      bVar1 = (&DAT_0014e29b)[lVar9];
      lVar9 = FUN_0012ff04(param_1);
      if (lVar9 == 0) {
        return (undefined8 *)0x0;
      }
      pvVar8 = (void *)param_1[0x266];
      lVar14 = *(long *)((long)pvVar8 + 8);
      puVar5 = (undefined8 *)pvVar8;
      if (lVar14 - 0xfc0U < 0xfffffffffffff010) {
        puVar5 = (undefined8 *)malloc(0x1000);
        if (puVar5 == (undefined8 *)0x0) {
LAB_001312f8:
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar14 = 0;
        *puVar5 = pvVar8;
        puVar5[1] = 0;
        param_1[0x266] = (long)puVar5;
      }
      *(long *)((long)puVar5 + 8) = lVar14 + 0x30;
      puVar10 = (undefined8 *)((long)puVar5 + lVar14 + 0x10);
      *puVar10 = &PTR_FUN_0014e6f8;
      *(undefined1 *)((long)puVar5 + lVar14 + 0x18) = 0x42;
      *(long **)((long)puVar5 + lVar14 + 0x20) = plVar26;
      *(size_t *)((long)puVar5 + lVar14 + 0x28) = sVar27;
      *(long *)((long)puVar5 + lVar14 + 0x30) = lVar9;
      *(ushort *)((long)puVar5 + lVar14 + 0x19) =
           *(ushort *)((long)puVar5 + lVar14 + 0x19) & 0xf000 | bVar1 >> 1 | 0x540;
      return puVar10;
    case 1:
      if ((pbVar16 != pbVar28) && (*pbVar16 == 0x5f)) {
        cVar2 = (&DAT_0014e29b)[lVar9];
        *param_1 = (long)(pbVar13 + 3);
        local_80 = (long *)CONCAT44(local_80._4_4_,(int)cVar2 >> 1);
        local_a0._0_8_ = FUN_0012ff04(param_1);
        if ((long *)local_a0._0_8_ != (long *)0x0) {
          puVar5 = (undefined8 *)FUN_00134930(param_1,local_70,local_a0,&local_80);
          return puVar5;
        }
        return (undefined8 *)0x0;
      }
      local_70._0_8_ = FUN_0012ff04(param_1);
      if (local_70._0_8_ != 0) {
        local_a0._0_4_ = (int)(char)(&DAT_0014e29b)[lVar9] >> 1;
        puVar5 = (undefined8 *)FUN_00131314(param_1,local_70,&local_90,local_a0);
        return puVar5;
      }
      return (undefined8 *)0x0;
    case 2:
      local_74 = (int)(char)(&DAT_0014e29b)[lVar9] >> 1;
      local_a0._0_8_ = FUN_0012ff04(param_1);
      if ((long *)local_a0._0_8_ == (long *)0x0) {
        return (undefined8 *)0x0;
      }
      local_80 = (long *)FUN_0012ff04(param_1);
      if (local_80 != (long *)0x0) {
        puVar5 = (undefined8 *)FUN_00134420(param_1,local_a0,local_70,&local_80,&local_74);
        return puVar5;
      }
      return (undefined8 *)0x0;
    case 3:
      local_70._0_8_ = FUN_0012ff04(param_1);
      if (local_70._0_8_ == 0) {
        return (undefined8 *)0x0;
      }
      local_a0._0_8_ = FUN_0012ff04(param_1);
      if ((long *)local_a0._0_8_ != (long *)0x0) {
        local_80 = (long *)CONCAT44(local_80._4_4_,(int)(char)(&DAT_0014e29b)[lVar9] >> 1);
        puVar5 = (undefined8 *)FUN_001313d4(param_1,local_70,local_a0,&local_80);
        return puVar5;
      }
      return (undefined8 *)0x0;
    case 4:
      local_70._0_8_ = FUN_0012ff04(param_1);
      if (local_70._0_8_ == 0) {
        return (undefined8 *)0x0;
      }
      local_a0._0_8_ = FUN_0012ff04(param_1);
      if ((long *)local_a0._0_8_ != (long *)0x0) {
        local_80 = (long *)CONCAT44(local_80._4_4_,(int)(char)(&DAT_0014e29b)[lVar9] >> 1);
        puVar5 = (undefined8 *)FUN_00131490(param_1,local_70,&local_90,local_a0,&local_80);
        return puVar5;
      }
      return (undefined8 *)0x0;
    case 5:
      lVar14 = param_1[2];
      lVar6 = param_1[3];
      plVar26 = param_1 + 5;
      while ((pbVar16 == pbVar28 || (*pbVar16 != 0x5f))) {
        lVar15 = FUN_0012ff04(param_1);
        if (lVar15 == 0) {
          return (undefined8 *)0x0;
        }
        plVar25 = (long *)param_1[3];
        if (plVar25 == (long *)param_1[4]) {
          plVar7 = (long *)param_1[2];
          sVar27 = (long)plVar25 - (long)plVar7;
          if (plVar7 == plVar26) {
            pvVar8 = malloc(sVar27 * 2);
            if (pvVar8 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            if (plVar25 != plVar26) {
              memcpy(pvVar8,plVar26,sVar27);
            }
            param_1[2] = (long)pvVar8;
          }
          else {
            pvVar8 = realloc(plVar7,sVar27 * 2);
            param_1[2] = (long)pvVar8;
            if (pvVar8 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
          }
          plVar25 = (long *)((long)pvVar8 + sVar27);
          param_1[3] = (long)plVar25;
          param_1[4] = (long)((long)pvVar8 + ((long)sVar27 >> 2) * 8);
        }
        param_1[3] = (long)(plVar25 + 1);
        *plVar25 = lVar15;
        pbVar28 = (byte *)param_1[1];
        pbVar16 = (byte *)*param_1;
      }
      *param_1 = (long)(pbVar16 + 1);
      local_70 = FUN_0012ce20(param_1,lVar6 - lVar14 >> 3);
      local_80 = (long *)FUN_0012acb8(param_1);
      if (local_80 == (long *)0x0) {
        return (undefined8 *)0x0;
      }
      uVar18 = FUN_0012a018(param_1,&DAT_00113145,2);
      lVar14 = param_1[2];
      lVar6 = param_1[3];
      if ((uVar18 & 1) == 0) {
        pcVar24 = (char *)*param_1;
        if (pcVar24 == (char *)param_1[1]) {
          return (undefined8 *)0x0;
        }
        if (*pcVar24 != 'E') {
          return (undefined8 *)0x0;
        }
      }
      else {
        while ((pcVar24 = (char *)*param_1, pcVar24 == (char *)param_1[1] || (*pcVar24 != 'E'))) {
          lVar15 = FUN_0012ff04(param_1);
          if (lVar15 == 0) {
            return (undefined8 *)0x0;
          }
          plVar25 = (long *)param_1[3];
          if (plVar25 == (long *)param_1[4]) {
            plVar7 = (long *)param_1[2];
            sVar27 = (long)plVar25 - (long)plVar7;
            if (plVar7 == plVar26) {
              pvVar8 = malloc(sVar27 * 2);
              if (pvVar8 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              if (plVar25 != plVar26) {
                memcpy(pvVar8,plVar26,sVar27);
              }
              param_1[2] = (long)pvVar8;
            }
            else {
              pvVar8 = realloc(plVar7,sVar27 * 2);
              param_1[2] = (long)pvVar8;
              if (pvVar8 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
            }
            plVar25 = (long *)((long)pvVar8 + sVar27);
            param_1[3] = (long)plVar25;
            param_1[4] = (long)((long)pvVar8 + ((long)sVar27 >> 2) * 8);
          }
          param_1[3] = (long)(plVar25 + 1);
          *plVar25 = lVar15;
        }
      }
      *param_1 = (long)(pcVar24 + 1);
      local_a0 = FUN_0012ce20(param_1,lVar6 - lVar14 >> 3);
      local_74 = (int)(char)(&DAT_0014e29b)[lVar9] >> 1;
      puVar5 = (undefined8 *)
               FUN_0013155c(param_1,local_70,&local_80,local_a0,uVar23,
                            (int)(char)(&DAT_0014e29b)[lVar9] & 1,&local_74);
      return puVar5;
    case 6:
      lVar14 = FUN_0012ff04(param_1);
      if (lVar14 == 0) {
        return (undefined8 *)0x0;
      }
      pvVar8 = (void *)param_1[0x266];
      bVar1 = (&DAT_0014e29b)[lVar9];
      lVar9 = *(long *)((long)pvVar8 + 8);
      puVar5 = (undefined8 *)pvVar8;
      if (lVar9 - 0xfd0U < 0xfffffffffffff010) {
        puVar5 = (undefined8 *)malloc(0x1000);
        if (puVar5 == (undefined8 *)0x0) goto LAB_001312f8;
        lVar9 = 0;
        *puVar5 = pvVar8;
        puVar5[1] = 0;
        param_1[0x266] = (long)puVar5;
      }
      *(long *)((long)puVar5 + 8) = lVar9 + 0x20;
      puVar10 = (undefined8 *)((long)puVar5 + lVar9 + 0x10);
      *puVar10 = &PTR_FUN_0014e928;
      *(undefined1 *)((long)puVar5 + lVar9 + 0x18) = 0x41;
      *(long *)((long)puVar5 + lVar9 + 0x20) = lVar14;
      *(undefined1 *)((long)puVar5 + lVar9 + 0x28) = uVar23;
      *(ushort *)((long)puVar5 + lVar9 + 0x19) =
           *(ushort *)((long)puVar5 + lVar9 + 0x19) & 0xf000 | bVar1 >> 1 | 0x540;
      *(byte *)((long)puVar5 + lVar9 + 0x29) = bVar1 & 1;
      return puVar10;
    case 7:
      local_a0._0_8_ = FUN_0012ff04(param_1);
      if ((long *)local_a0._0_8_ == (long *)0x0) {
        return (undefined8 *)0x0;
      }
      lVar14 = param_1[2];
      lVar6 = param_1[3];
      plVar26 = param_1 + 5;
      while( true ) {
        pcVar24 = (char *)*param_1;
        if ((pcVar24 != (char *)param_1[1]) && (*pcVar24 == 'E')) break;
        lVar15 = FUN_0012ff04(param_1);
        if (lVar15 == 0) {
          return (undefined8 *)0x0;
        }
        plVar25 = (long *)param_1[3];
        if (plVar25 == (long *)param_1[4]) {
          plVar7 = (long *)param_1[2];
          sVar27 = (long)plVar25 - (long)plVar7;
          if (plVar7 == plVar26) {
            pvVar8 = malloc(sVar27 * 2);
            if (pvVar8 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            if (plVar25 != plVar26) {
              memcpy(pvVar8,plVar26,sVar27);
            }
            param_1[2] = (long)pvVar8;
          }
          else {
            pvVar8 = realloc(plVar7,sVar27 * 2);
            param_1[2] = (long)pvVar8;
            if (pvVar8 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
          }
          plVar25 = (long *)((long)pvVar8 + sVar27);
          param_1[3] = (long)plVar25;
          param_1[4] = (long)((long)pvVar8 + ((long)sVar27 >> 2) * 8);
        }
        param_1[3] = (long)(plVar25 + 1);
        *plVar25 = lVar15;
      }
      *param_1 = (long)(pcVar24 + 1);
      local_70 = FUN_0012ce20(param_1,lVar6 - lVar14 >> 3);
      iVar12 = (int)(char)(&DAT_0014e29b)[lVar9] >> 1;
      goto LAB_00130e00;
    case 8:
      goto code_r0x001305ac;
    case 9:
      local_70._0_8_ = FUN_0012ff04(param_1);
      if (local_70._0_8_ == 0) {
        return (undefined8 *)0x0;
      }
      local_a0._0_8_ = FUN_0012ff04(param_1);
      if ((long *)local_a0._0_8_ != (long *)0x0) {
        local_80 = (long *)FUN_0012ff04(param_1);
        if (local_80 != (long *)0x0) {
          local_74 = (int)(char)(&DAT_0014e29b)[lVar9] >> 1;
          puVar5 = (undefined8 *)FUN_001317d0(param_1,local_70,local_a0,&local_80,&local_74);
          return puVar5;
        }
        return (undefined8 *)0x0;
      }
      return (undefined8 *)0x0;
    case 10:
      return (undefined8 *)0x0;
    case 0xb:
      local_70._0_8_ = FUN_0012acb8(param_1);
      if (local_70._0_8_ == 0) {
        return (undefined8 *)0x0;
      }
      local_a0._0_8_ = FUN_0012ff04(param_1);
      if ((long *)local_a0._0_8_ != (long *)0x0) {
        local_80 = (long *)CONCAT44(local_80._4_4_,(int)(char)(&DAT_0014e29b)[lVar9] >> 1);
        puVar5 = (undefined8 *)FUN_00131898(param_1,&local_90,local_70,local_a0,&local_80);
        return puVar5;
      }
      return (undefined8 *)0x0;
    case 0xc:
      bVar1 = (&DAT_0014e29b)[lVar9];
      if ((bVar1 & 1) == 0) {
        lVar9 = FUN_0012ff04(param_1);
      }
      else {
        lVar9 = FUN_0012acb8(param_1);
      }
      if (lVar9 == 0) {
        return (undefined8 *)0x0;
      }
      pvVar8 = (void *)param_1[0x266];
      lVar14 = *(long *)((long)pvVar8 + 8);
      puVar5 = (undefined8 *)pvVar8;
      if (lVar14 - 0xfb0U < 0xfffffffffffff010) {
        puVar5 = (undefined8 *)malloc(0x1000);
        if (puVar5 == (undefined8 *)0x0) goto LAB_001312f8;
        lVar14 = 0;
        *puVar5 = pvVar8;
        puVar5[1] = 0;
        param_1[0x266] = (long)puVar5;
      }
      *(long *)((long)puVar5 + 8) = lVar14 + 0x40;
      puVar10 = (undefined8 *)((long)puVar5 + lVar14 + 0x10);
      *puVar10 = &PTR_FUN_0014eb58;
      *(undefined1 *)((long)puVar5 + lVar14 + 0x18) = 0x3c;
      *(long **)((long)puVar5 + lVar14 + 0x20) = plVar26;
      *(size_t *)((long)puVar5 + lVar14 + 0x28) = sVar27;
      *(undefined8 *)((long)puVar5 + lVar14 + 0x38) = 0;
      *(undefined8 *)((long)puVar5 + lVar14 + 0x40) = 0;
      *(long *)((long)puVar5 + lVar14 + 0x30) = lVar9;
      *(ushort *)((long)puVar5 + lVar14 + 0x19) =
           *(ushort *)((long)puVar5 + lVar14 + 0x19) & 0xf000 | (ushort)(bVar1 >> 1) | 0x540;
      return puVar10;
    default:
                    /* catch() { ... } // from try @ 001305b4 with catch @ 0013130c */
      *(undefined1 *)(param_1 + 0x61) = uVar23;
                    /* WARNING: Subroutine does not return */
      FUN_001447ac();
    }
  }
  if (bVar1 == 0x66) {
    if ((*pbVar16 == 0x70) ||
       (((uVar18 != 2 && (*pbVar16 == 0x4c)) && (0xfffffff5 < pbVar13[2] - 0x3a)))) {
      puVar5 = (undefined8 *)FUN_00132848(param_1);
      return puVar5;
    }
    if (pbVar13 == pbVar28) {
      return (undefined8 *)0x0;
    }
    *param_1 = (long)pbVar16;
    if (pbVar28 == pbVar16) {
      return (undefined8 *)0x0;
    }
    uVar18 = (ulong)(*pbVar16 - 0x4c);
    if (0x26 < *pbVar16 - 0x4c) {
      return (undefined8 *)0x0;
    }
    if ((0x4100000041U >> (uVar18 & 0x3f) & 1) == 0) {
      return (undefined8 *)0x0;
    }
    *param_1 = (long)(pbVar13 + 2);
    if ((ulong)((long)pbVar28 - (long)(pbVar13 + 2)) < 2) {
      return (undefined8 *)0x0;
    }
    uVar19 = 0;
    bVar1 = pbVar13[2];
    uVar22 = 0x3fffffffbfU >> (uVar18 & 0x3f) & 1;
    uVar21 = 0x3d;
    do {
      uVar20 = uVar19 + uVar21 >> 1;
      if (((byte)(&DAT_0014e298)[uVar20 * 0x10] < bVar1) ||
         ((bVar1 == (&DAT_0014e298)[uVar20 * 0x10] &&
          ((byte)(&DAT_0014e299)[uVar20 * 0x10] < pbVar13[3])))) {
        uVar19 = uVar20 + 1;
        uVar20 = uVar21;
      }
      uVar21 = uVar20;
    } while (uVar21 != uVar19);
    lVar9 = uVar19 * 0x10;
    if (bVar1 != (&DAT_0014e298)[lVar9]) {
      return (undefined8 *)0x0;
    }
    if (pbVar13[3] != (&DAT_0014e299)[lVar9]) {
      return (undefined8 *)0x0;
    }
    cVar2 = (&DAT_0014e29a)[lVar9];
    *param_1 = (long)(pbVar13 + 4);
    if (cVar2 != '\x02') {
      if (cVar2 != '\x04') {
        return (undefined8 *)0x0;
      }
      pcVar24 = (&PTR_s_operator___0014e2a0)[uVar19 * 2];
      sVar27 = strlen(pcVar24);
      if (pcVar24[sVar27 - 1] != '*') {
        return (undefined8 *)0x0;
      }
    }
    lVar9 = FUN_0012ff04(param_1);
    if (lVar9 == 0) {
      return (undefined8 *)0x0;
    }
    lVar14 = lVar9;
    if ((0x3effffffffU >> (uVar18 & 0x3f) & 1) == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = FUN_0012ff04(param_1);
      if (lVar6 == 0) {
        return (undefined8 *)0x0;
      }
      if (uVar22 != 0) {
        lVar14 = lVar6;
        lVar6 = lVar9;
      }
    }
    plVar26 = (long *)(&PTR_s_operator___0014e2a0)[uVar19 * 2];
    sVar27 = strlen((char *)plVar26);
    if ((sVar27 < 8) || (*plVar26 != 0x726f74617265706f)) {
LAB_001312c0:
                    /* WARNING: Subroutine does not return */
      FUN_00127d24("%s:%d: %s","out/llvm-project/libcxxabi/src/demangle/ItaniumDemangle.h",0xb4a,
                   "operator name does not start with \'operator\'");
    }
    lVar9 = sVar27 - 8;
    plVar25 = plVar26 + 1;
    if ((lVar9 != 0) && ((char)*plVar25 == ' ')) {
      plVar25 = (long *)((long)plVar26 + 9);
      lVar9 = sVar27 - 9;
    }
    pvVar8 = (void *)param_1[0x266];
    lVar15 = *(long *)((long)pvVar8 + 8);
    puVar5 = (undefined8 *)pvVar8;
    if (lVar15 - 0xfb0U < 0xfffffffffffff010) {
      puVar5 = (undefined8 *)malloc(0x1000);
      if (puVar5 == (undefined8 *)0x0) goto LAB_001312f8;
      lVar15 = 0;
      *puVar5 = pvVar8;
      puVar5[1] = 0;
      param_1[0x266] = (long)puVar5;
    }
    *(long *)((long)puVar5 + 8) = lVar15 + 0x40;
    puVar10 = (undefined8 *)((long)puVar5 + lVar15 + 0x10);
    *puVar10 = &PTR_FUN_0014f338;
    *(undefined1 *)((long)puVar5 + lVar15 + 0x18) = 0x47;
    *(long *)((long)puVar5 + lVar15 + 0x20) = lVar14;
    *(long *)((long)puVar5 + lVar15 + 0x28) = lVar6;
    *(long **)((long)puVar5 + lVar15 + 0x30) = plVar25;
    *(long *)((long)puVar5 + lVar15 + 0x38) = lVar9;
    *(ushort *)((long)puVar5 + lVar15 + 0x19) =
         *(ushort *)((long)puVar5 + lVar15 + 0x19) & 0xf000 | 0x540;
    *(char *)((long)puVar5 + lVar15 + 0x40) = (char)uVar22;
    return puVar10;
  }
  if (bVar1 == 0x54) {
    puVar5 = (undefined8 *)FUN_0012ec08(param_1);
    return puVar5;
  }
  if (bVar1 == 0x4c) {
    puVar5 = (undefined8 *)FUN_00131960(param_1);
    return puVar5;
  }
  if (*(short *)pbVar13 == 0x6c69) {
    lVar9 = param_1[2];
    lVar14 = param_1[3];
    plVar26 = param_1 + 5;
    pbVar13 = pbVar13 + 2;
    *param_1 = (long)pbVar13;
    while ((pbVar13 == pbVar28 || (*pbVar13 != 0x45))) {
      lVar6 = FUN_00132c04(param_1);
      if (lVar6 == 0) {
        return (undefined8 *)0x0;
      }
      plVar25 = (long *)param_1[3];
      if (plVar25 == (long *)param_1[4]) {
        plVar7 = (long *)param_1[2];
        sVar27 = (long)plVar25 - (long)plVar7;
        if (plVar7 == plVar26) {
          pvVar8 = malloc(sVar27 * 2);
          if (pvVar8 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (plVar25 != plVar26) {
            memcpy(pvVar8,plVar26,sVar27);
          }
          param_1[2] = (long)pvVar8;
        }
        else {
          pvVar8 = realloc(plVar7,sVar27 * 2);
          param_1[2] = (long)pvVar8;
          if (pvVar8 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
        }
        plVar25 = (long *)((long)pvVar8 + sVar27);
        param_1[3] = (long)plVar25;
        param_1[4] = (long)((long)pvVar8 + ((long)sVar27 >> 2) * 8);
      }
      param_1[3] = (long)(plVar25 + 1);
      *plVar25 = lVar6;
      pbVar28 = (byte *)param_1[1];
      pbVar13 = (byte *)*param_1;
    }
    *param_1 = (long)(pbVar13 + 1);
    local_70 = FUN_0012ce20(param_1,lVar14 - lVar9 >> 3);
    puVar5 = (undefined8 *)FUN_00132e98(param_1,local_70);
    return puVar5;
  }
  uVar18 = (long)pbVar28 - (long)pbVar13;
  if (1 < uVar18) {
    if (*(short *)pbVar13 == 0x636d) {
      *param_1 = (long)(pbVar13 + 2);
      puVar5 = (undefined8 *)FUN_00132f3c(param_1);
      return puVar5;
    }
    if (*(short *)pbVar13 == 0x786e) {
      *param_1 = (long)(pbVar13 + 2);
      local_70._0_8_ = FUN_0012ff04(param_1);
      if (local_70._0_8_ != 0) {
        local_90 = (long *)CONCAT44(local_90._4_4_,2);
        puVar5 = (undefined8 *)FUN_001330b8(param_1,local_70,&local_90);
        return puVar5;
      }
      return (undefined8 *)0x0;
    }
  }
  if (((pbVar28 == pbVar13) || (uVar18 < 2)) || (bVar1 != 0x72)) {
    if (1 < uVar18) goto LAB_0013040c;
  }
  else {
    if ((*pbVar16 | 0x20) == 0x71) {
      puVar5 = (undefined8 *)FUN_00133178(param_1);
      return puVar5;
    }
LAB_0013040c:
    if (*(short *)pbVar13 == 0x6f73) {
      *param_1 = (long)(pbVar13 + 2);
      puVar5 = (undefined8 *)FUN_00133680(param_1);
      return puVar5;
    }
  }
  uVar18 = FUN_0012a018(param_1,&DAT_00113346,2);
  if ((uVar18 & 1) != 0) {
    local_70._0_8_ = FUN_0012ff04(param_1);
    if (local_70._0_8_ != 0) {
      puVar5 = (undefined8 *)FUN_001339f0(param_1,local_70);
      return puVar5;
    }
    return (undefined8 *)0x0;
  }
  uVar18 = FUN_0012a018(param_1,&DAT_001124fe,2);
  if ((uVar18 & 1) != 0) {
    if (((char *)param_1[1] != (char *)*param_1) && (*(char *)*param_1 == 'T')) {
      local_70._0_8_ = FUN_0012ec08(param_1);
      if (local_70._0_8_ != 0) {
        puVar5 = (undefined8 *)FUN_00133a90(param_1,local_70);
        return puVar5;
      }
      return (undefined8 *)0x0;
    }
    local_70._0_8_ = FUN_00132848(param_1);
    if (local_70._0_8_ == 0) {
      return (undefined8 *)0x0;
    }
LAB_00130f74:
    puVar5 = (undefined8 *)FUN_00133b30(param_1,local_70);
    return puVar5;
  }
  uVar18 = FUN_0012a018(param_1,&DAT_001128a7,2);
  if ((uVar18 & 1) != 0) {
    lVar9 = param_1[2];
    lVar14 = param_1[3];
    plVar26 = param_1 + 5;
    while ((pcVar24 = (char *)*param_1, pcVar24 == (char *)param_1[1] || (*pcVar24 != 'E'))) {
      lVar6 = FUN_0012c934(param_1);
      if (lVar6 == 0) {
        return (undefined8 *)0x0;
      }
      plVar25 = (long *)param_1[3];
      if (plVar25 == (long *)param_1[4]) {
        plVar7 = (long *)param_1[2];
        sVar27 = (long)plVar25 - (long)plVar7;
        if (plVar7 == plVar26) {
          pvVar8 = malloc(sVar27 * 2);
          if (pvVar8 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (plVar25 != plVar26) {
            memcpy(pvVar8,plVar26,sVar27);
          }
          param_1[2] = (long)pvVar8;
        }
        else {
          pvVar8 = realloc(plVar7,sVar27 * 2);
          param_1[2] = (long)pvVar8;
          if (pvVar8 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
        }
        plVar25 = (long *)((long)pvVar8 + sVar27);
        param_1[3] = (long)plVar25;
        param_1[4] = (long)((long)pvVar8 + ((long)sVar27 >> 2) * 8);
      }
      param_1[3] = (long)(plVar25 + 1);
      *plVar25 = lVar6;
    }
    *param_1 = (long)(pcVar24 + 1);
    local_70 = FUN_0012ce20(param_1,lVar14 - lVar9 >> 3);
    lVar9 = FUN_00133be4(param_1,local_70);
    local_70._0_8_ = lVar9;
    goto LAB_00130f74;
  }
  uVar18 = FUN_0012a018(param_1,&DAT_00113b05,2);
  if ((uVar18 & 1) != 0) {
    local_90 = (long *)FUN_0012acb8(param_1);
    if (local_90 == (long *)0x0) {
      return (undefined8 *)0x0;
    }
    lVar9 = param_1[2];
    lVar14 = param_1[3];
    pcVar24 = (char *)*param_1;
    if (pcVar24 == (char *)param_1[1]) goto LAB_00130db0;
    do {
      if (*pcVar24 == 'E') {
        *param_1 = (long)(pcVar24 + 1);
        local_70 = FUN_0012ce20(param_1,lVar14 - lVar9 >> 3);
        puVar5 = (undefined8 *)FUN_00133c80(param_1,&local_90,local_70);
        return puVar5;
      }
LAB_00130db0:
      do {
        local_70._0_8_ = FUN_00132c04(param_1);
        if (local_70._0_8_ == 0) {
          return (undefined8 *)0x0;
        }
        FUN_0012cca8(param_1 + 2,local_70);
        pcVar24 = (char *)*param_1;
      } while (pcVar24 == (char *)param_1[1]);
    } while( true );
  }
  uVar18 = FUN_0012a018(param_1,&DAT_0011396c,2);
  if ((uVar18 & 1) != 0) {
    puVar5 = (undefined8 *)FUN_00133d2c(param_1,"throw");
    return puVar5;
  }
  uVar18 = FUN_0012a018(param_1,&DAT_00113b0e,2);
  if ((uVar18 & 1) != 0) {
    local_70._0_8_ = FUN_0012ff04(param_1);
    if (local_70._0_8_ != 0) {
      puVar5 = (undefined8 *)FUN_00133dd4(param_1,local_70);
      return puVar5;
    }
    return (undefined8 *)0x0;
  }
  pcVar24 = (char *)*param_1;
  if ((pcVar24 == (char *)param_1[1]) || (*pcVar24 != 'u')) {
    puVar5 = (undefined8 *)FUN_00133e74(param_1,sVar3 == 0x7367);
    return puVar5;
  }
  *param_1 = (long)(pcVar24 + 1);
  local_90 = (long *)FUN_0012e010(param_1);
  if (local_90 == (long *)0x0) {
    return (undefined8 *)0x0;
  }
  auVar29 = (**(code **)(*local_90 + 0x30))();
  if (((auVar29._8_8_ == 8) && (*auVar29._0_8_ == 0x666f646975755f5f)) &&
     (pcVar24 = (char *)*param_1, pcVar24 != (char *)param_1[1])) {
    if (*pcVar24 == 'z') {
      *param_1 = (long)(pcVar24 + 1);
      local_a0._0_8_ = FUN_0012ff04(param_1);
    }
    else {
      if (*pcVar24 != 't') goto LAB_0013101c;
      *param_1 = (long)(pcVar24 + 1);
      local_a0._0_8_ = FUN_0012acb8(param_1);
    }
    if ((long *)local_a0._0_8_ == (long *)0x0) {
      return (undefined8 *)0x0;
    }
    lVar9 = param_1[3] - param_1[2];
    FUN_0012cca8(param_1 + 2,local_a0);
  }
  else {
LAB_0013101c:
    lVar9 = param_1[3] - param_1[2];
    pcVar24 = (char *)*param_1;
    if (pcVar24 == (char *)param_1[1]) goto LAB_00131040;
    while (*pcVar24 != 'E') {
LAB_00131040:
      do {
        local_70._0_8_ = FUN_0012c934(param_1);
        if (local_70._0_8_ == 0) {
          return (undefined8 *)0x0;
        }
        FUN_0012cca8(param_1 + 2,local_70);
        pcVar24 = (char *)*param_1;
      } while (pcVar24 == (char *)param_1[1]);
    }
    *param_1 = (long)(pcVar24 + 1);
  }
  local_70 = FUN_0012ce20(param_1,lVar9 >> 3);
  iVar12 = 1;
  pplVar11 = &local_90;
LAB_00130e00:
  local_80 = (long *)CONCAT44(local_80._4_4_,iVar12);
  puVar5 = (undefined8 *)FUN_00131650(param_1,pplVar11,local_70,&local_80);
  return puVar5;
code_r0x001305ac:
  lVar14 = param_1[0x61];
  *(undefined1 *)(param_1 + 0x61) = 0;
                    /* try { // try from 001305b4 to 001305bb has its CatchHandler @ 0013130c */
  local_a0._0_8_ = FUN_0012acb8(param_1);
  *(char *)(param_1 + 0x61) = (char)lVar14;
  if ((long *)local_a0._0_8_ == (long *)0x0) {
    return (undefined8 *)0x0;
  }
  pcVar24 = (char *)*param_1;
  pcVar17 = (char *)param_1[1];
  lVar14 = param_1[3] - param_1[2] >> 3;
  if (pcVar24 == pcVar17) {
LAB_00130e44:
    lVar6 = FUN_0012ff04(param_1);
    if (lVar6 == 0) {
      return (undefined8 *)0x0;
    }
    plVar26 = (long *)param_1[3];
    if (plVar26 == (long *)param_1[4]) {
      plVar7 = (long *)param_1[2];
      plVar25 = param_1 + 5;
      sVar27 = (long)plVar26 - (long)plVar7;
      if (plVar7 == plVar25) {
        pvVar8 = malloc(sVar27 * 2);
        if (pvVar8 == (void *)0x0) {
LAB_00131300:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (plVar26 != plVar25) {
          memcpy(pvVar8,plVar25,sVar27);
        }
        param_1[2] = (long)pvVar8;
      }
      else {
        pvVar8 = realloc(plVar7,sVar27 * 2);
        param_1[2] = (long)pvVar8;
        if (pvVar8 == (void *)0x0) {
LAB_00130e8c:
                    /* WARNING: Subroutine does not return */
          abort();
        }
      }
      plVar26 = (long *)((long)pvVar8 + sVar27);
      param_1[3] = (long)plVar26;
      param_1[4] = (long)((long)pvVar8 + ((long)sVar27 >> 2) * 8);
    }
    param_1[3] = (long)(plVar26 + 1);
    *plVar26 = lVar6;
    local_70 = FUN_0012ce20(param_1,lVar14);
  }
  else {
    cVar2 = *pcVar24;
    if (cVar2 == '_') {
      pcVar24 = pcVar24 + 1;
      plVar26 = param_1 + 5;
      *param_1 = (long)pcVar24;
      do {
        if ((pcVar24 != pcVar17) && (*pcVar24 == 'E')) goto LAB_00130e20;
        lVar6 = FUN_0012ff04(param_1);
        if (lVar6 == 0) {
          return (undefined8 *)0x0;
        }
        plVar25 = (long *)param_1[3];
        if (plVar25 == (long *)param_1[4]) {
          plVar7 = (long *)param_1[2];
          sVar27 = (long)plVar25 - (long)plVar7;
          if (plVar7 == plVar26) {
            pvVar8 = malloc(sVar27 * 2);
            if (pvVar8 == (void *)0x0) goto LAB_00131300;
            if (plVar25 != plVar26) {
              memcpy(pvVar8,plVar26,sVar27);
            }
            param_1[2] = (long)pvVar8;
          }
          else {
            pvVar8 = realloc(plVar7,sVar27 * 2);
            param_1[2] = (long)pvVar8;
            if (pvVar8 == (void *)0x0) goto LAB_00130e8c;
          }
          plVar25 = (long *)((long)pvVar8 + sVar27);
          param_1[3] = (long)plVar25;
          param_1[4] = (long)((long)pvVar8 + ((long)sVar27 >> 2) * 8);
        }
        param_1[3] = (long)(plVar25 + 1);
        *plVar25 = lVar6;
        pcVar24 = (char *)*param_1;
        pcVar17 = (char *)param_1[1];
      } while( true );
    }
    if (cVar2 != 'E') goto LAB_00130e44;
LAB_00130e20:
    *param_1 = (long)(pcVar24 + 1);
    local_70 = FUN_0012ce20(param_1,lVar14);
    if (cVar2 == '_') goto LAB_00131104;
  }
  if (local_70._8_8_ != 1) {
    return (undefined8 *)0x0;
  }
LAB_00131104:
  local_80 = (long *)CONCAT44(local_80._4_4_,(int)(char)(&DAT_0014e29b)[lVar9] >> 1);
  puVar5 = (undefined8 *)FUN_00131710(param_1,local_a0,local_70,&local_80);
  return puVar5;
}


// ===== 00131314  FUN_00131314 =====

void FUN_00131314(long param_1,undefined8 *param_2,undefined8 *param_3,ushort *param_4)

{
  ushort uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  pvVar5 = *(void **)(param_1 + 0x1330);
  lVar3 = *(long *)((long)pvVar5 + 8);
  puVar2 = (undefined8 *)pvVar5;
  if (lVar3 - 0xfc0U < 0xfffffffffffff010) {
    puVar2 = (undefined8 *)malloc(0x1000);
    if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar3 = 0;
    *puVar2 = pvVar5;
    puVar2[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar2;
  }
  *(long *)((long)puVar2 + 8) = lVar3 + 0x30;
  uVar4 = *param_2;
  uVar7 = param_3[1];
  uVar6 = *param_3;
  *(undefined ***)((long)puVar2 + lVar3 + 0x10) = &PTR_FUN_0014e768;
  uVar1 = *param_4;
  *(undefined1 *)((long)puVar2 + lVar3 + 0x18) = 0x38;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x20) = uVar4;
  *(ushort *)((long)puVar2 + lVar3 + 0x19) =
       *(ushort *)((long)puVar2 + lVar3 + 0x19) & 0xf000 | uVar1 & 0x3f | 0x540;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x30) = uVar7;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x28) = uVar6;
  return;
}


// ===== 001313d4  FUN_001313d4 =====

void FUN_001313d4(long param_1,undefined8 *param_2,undefined8 *param_3,ushort *param_4)

{
  ushort uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *pvVar6;
  
  pvVar6 = *(void **)(param_1 + 0x1330);
  lVar3 = *(long *)((long)pvVar6 + 8);
  puVar2 = (undefined8 *)pvVar6;
  if (lVar3 - 0xfd0U < 0xfffffffffffff010) {
    puVar2 = (undefined8 *)malloc(0x1000);
    if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar3 = 0;
    *puVar2 = pvVar6;
    puVar2[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar2;
  }
  *(long *)((long)puVar2 + 8) = lVar3 + 0x20;
  *(undefined ***)((long)puVar2 + lVar3 + 0x10) = &PTR_FUN_0014e7d8;
  uVar1 = *param_4;
  uVar5 = *param_2;
  *(undefined1 *)((long)puVar2 + lVar3 + 0x18) = 0x37;
  uVar4 = *param_3;
  *(ushort *)((long)puVar2 + lVar3 + 0x19) =
       *(ushort *)((long)puVar2 + lVar3 + 0x19) & 0xf000 | uVar1 & 0x3f | 0x540;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x20) = uVar5;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x28) = uVar4;
  return;
}


// ===== 00131490  FUN_00131490 =====

void FUN_00131490(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 ushort *param_5)

{
  ushort uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *pvVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  pvVar6 = *(void **)(param_1 + 0x1330);
  lVar3 = *(long *)((long)pvVar6 + 8);
  puVar2 = (undefined8 *)pvVar6;
  if (lVar3 - 0xfc0U < 0xfffffffffffff010) {
    puVar2 = (undefined8 *)malloc(0x1000);
    if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar3 = 0;
    *puVar2 = pvVar6;
    puVar2[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar2;
  }
  *(long *)((long)puVar2 + 8) = lVar3 + 0x30;
  uVar8 = param_3[1];
  uVar7 = *param_3;
  *(undefined ***)((long)puVar2 + lVar3 + 0x10) = &PTR_FUN_0014e848;
  uVar1 = *param_5;
  uVar5 = *param_2;
  *(undefined1 *)((long)puVar2 + lVar3 + 0x18) = 0x3a;
  uVar4 = *param_4;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x20) = uVar5;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x30) = uVar8;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x28) = uVar7;
  *(ushort *)((long)puVar2 + lVar3 + 0x19) =
       *(ushort *)((long)puVar2 + lVar3 + 0x19) & 0xf000 | uVar1 & 0x3f | 0x540;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x38) = uVar4;
  return;
}


// ===== 0013155c  FUN_0013155c =====

void FUN_0013155c(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 char param_5,char param_6,ushort *param_7)

{
  ushort uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  pvVar5 = *(void **)(param_1 + 0x1330);
  lVar3 = *(long *)((long)pvVar5 + 8);
  puVar2 = (undefined8 *)pvVar5;
  if (lVar3 - 0xfb0U < 0xfffffffffffff010) {
    puVar2 = (undefined8 *)malloc(0x1000);
    if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar3 = 0;
    *puVar2 = pvVar5;
    puVar2[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar2;
  }
  *(long *)((long)puVar2 + 8) = lVar3 + 0x40;
  uVar4 = *param_3;
  uVar7 = param_2[1];
  uVar6 = *param_2;
  uVar9 = param_4[1];
  uVar8 = *param_4;
  uVar1 = *param_7;
  *(undefined ***)((long)puVar2 + lVar3 + 0x10) = &PTR_FUN_0014e8b8;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x30) = uVar4;
  *(undefined1 *)((long)puVar2 + lVar3 + 0x18) = 0x40;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x28) = uVar7;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x20) = uVar6;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x40) = uVar9;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x38) = uVar8;
  *(bool *)((long)puVar2 + lVar3 + 0x48) = param_5 != '\0';
  *(ushort *)((long)puVar2 + lVar3 + 0x19) =
       *(ushort *)((long)puVar2 + lVar3 + 0x19) & 0xf000 | uVar1 & 0x3f | 0x540;
  *(bool *)((long)puVar2 + lVar3 + 0x49) = param_6 != '\0';
  return;
}


// ===== 00131650  FUN_00131650 =====

void FUN_00131650(long param_1,undefined8 *param_2,undefined8 *param_3,ushort *param_4)

{
  ushort uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  pvVar5 = *(void **)(param_1 + 0x1330);
  lVar3 = *(long *)((long)pvVar5 + 8);
  puVar2 = (undefined8 *)pvVar5;
  if (lVar3 - 0xfc0U < 0xfffffffffffff010) {
    puVar2 = (undefined8 *)malloc(0x1000);
    if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar3 = 0;
    *puVar2 = pvVar5;
    puVar2[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar2;
  }
  *(long *)((long)puVar2 + 8) = lVar3 + 0x30;
  uVar4 = *param_2;
  uVar7 = param_3[1];
  uVar6 = *param_3;
  *(undefined ***)((long)puVar2 + lVar3 + 0x10) = &PTR_FUN_0014e998;
  uVar1 = *param_4;
  *(undefined1 *)((long)puVar2 + lVar3 + 0x18) = 0x3f;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x20) = uVar4;
  *(ushort *)((long)puVar2 + lVar3 + 0x19) =
       *(ushort *)((long)puVar2 + lVar3 + 0x19) & 0xf000 | uVar1 & 0x3f | 0x540;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x30) = uVar7;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x28) = uVar6;
  return;
}


// ===== 00131710  FUN_00131710 =====

void FUN_00131710(long param_1,undefined8 *param_2,undefined8 *param_3,ushort *param_4)

{
  ushort uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  pvVar5 = *(void **)(param_1 + 0x1330);
  lVar3 = *(long *)((long)pvVar5 + 8);
  puVar2 = (undefined8 *)pvVar5;
  if (lVar3 - 0xfc0U < 0xfffffffffffff010) {
    puVar2 = (undefined8 *)malloc(0x1000);
    if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar3 = 0;
    *puVar2 = pvVar5;
    puVar2[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar2;
  }
  *(long *)((long)puVar2 + 8) = lVar3 + 0x30;
  uVar4 = *param_2;
  uVar7 = param_3[1];
  uVar6 = *param_3;
  *(undefined ***)((long)puVar2 + lVar3 + 0x10) = &PTR_FUN_0014ea08;
  uVar1 = *param_4;
  *(undefined1 *)((long)puVar2 + lVar3 + 0x18) = 0x44;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x20) = uVar4;
  *(ushort *)((long)puVar2 + lVar3 + 0x19) =
       *(ushort *)((long)puVar2 + lVar3 + 0x19) & 0xf000 | uVar1 & 0x3f | 0x540;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x30) = uVar7;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x28) = uVar6;
  return;
}


// ===== 001317d0  FUN_001317d0 =====

void FUN_001317d0(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 ushort *param_5)

{
  ushort uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  void *pvVar7;
  
  pvVar7 = *(void **)(param_1 + 0x1330);
  lVar3 = *(long *)((long)pvVar7 + 8);
  puVar2 = (undefined8 *)pvVar7;
  if (lVar3 - 0xfc0U < 0xfffffffffffff010) {
    puVar2 = (undefined8 *)malloc(0x1000);
    if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar3 = 0;
    *puVar2 = pvVar7;
    puVar2[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar2;
  }
  *(long *)((long)puVar2 + 8) = lVar3 + 0x30;
  *(undefined ***)((long)puVar2 + lVar3 + 0x10) = &PTR_FUN_0014ea78;
  uVar1 = *param_5;
  uVar5 = *param_2;
  uVar6 = *param_3;
  *(undefined1 *)((long)puVar2 + lVar3 + 0x18) = 0x39;
  uVar4 = *param_4;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x20) = uVar5;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x28) = uVar6;
  *(ushort *)((long)puVar2 + lVar3 + 0x19) =
       *(ushort *)((long)puVar2 + lVar3 + 0x19) & 0xf000 | uVar1 & 0x3f | 0x540;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x30) = uVar4;
  return;
}


// ===== 00131898  FUN_00131898 =====

void FUN_00131898(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 ushort *param_5)

{
  ushort uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *pvVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  pvVar6 = *(void **)(param_1 + 0x1330);
  lVar3 = *(long *)((long)pvVar6 + 8);
  puVar2 = (undefined8 *)pvVar6;
  if (lVar3 - 0xfc0U < 0xfffffffffffff010) {
    puVar2 = (undefined8 *)malloc(0x1000);
    if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar3 = 0;
    *puVar2 = pvVar6;
    puVar2[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar2;
  }
  *(long *)((long)puVar2 + 8) = lVar3 + 0x30;
  uVar8 = param_2[1];
  uVar7 = *param_2;
  *(undefined ***)((long)puVar2 + lVar3 + 0x10) = &PTR_FUN_0014eae8;
  uVar1 = *param_5;
  *(undefined1 *)((long)puVar2 + lVar3 + 0x18) = 0x3d;
  uVar5 = *param_4;
  uVar4 = *param_3;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x28) = uVar8;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x20) = uVar7;
  *(ushort *)((long)puVar2 + lVar3 + 0x19) =
       *(ushort *)((long)puVar2 + lVar3 + 0x19) & 0xf000 | uVar1 & 0x3f | 0x540;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x30) = uVar4;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x38) = uVar5;
  return;
}


// ===== 00131960  FUN_00131960 =====

undefined8 * FUN_00131960(long *param_1)

{
  short *psVar1;
  char *pcVar2;
  short *psVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 *puVar9;
  short *psVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined8 uVar13;
  void *pvVar14;
  byte *local_38;
  long lStack_30;
  long local_28;
  
  psVar1 = (short *)*param_1;
  psVar3 = (short *)param_1[1];
  if (psVar1 == psVar3) {
    return (undefined8 *)0x0;
  }
  if ((char)*psVar1 != 'L') {
    return (undefined8 *)0x0;
  }
  psVar10 = (short *)((long)psVar1 + 1);
  uVar6 = (long)psVar3 - (long)psVar10;
  *param_1 = (long)psVar10;
  if (psVar3 == psVar10) {
code_r0x00131a30:
    local_28 = FUN_0012acb8();
    if (local_28 == 0) {
      return (undefined8 *)0x0;
    }
    local_38 = (byte *)*param_1;
    pbVar4 = (byte *)param_1[1];
    pbVar11 = local_38;
    if ((local_38 != pbVar4) && (*local_38 == 0x6e)) {
      pbVar11 = local_38 + 1;
      *param_1 = (long)pbVar11;
    }
    if (pbVar4 == pbVar11) {
      return (undefined8 *)0x0;
    }
    if (*pbVar11 - 0x3a < 0xfffffff6) {
      return (undefined8 *)0x0;
    }
    do {
      pbVar12 = pbVar11;
      if (*pbVar11 - 0x3a < 0xfffffff6) break;
      pbVar11 = pbVar11 + 1;
      *param_1 = (long)pbVar11;
      pbVar12 = pbVar4;
    } while (pbVar11 != pbVar4);
    lStack_30 = (long)pbVar12 - (long)local_38;
    if (lStack_30 == 0) {
      return (undefined8 *)0x0;
    }
    if (pbVar12 == pbVar4) {
      return (undefined8 *)0x0;
    }
    if (*pbVar12 == 0x45) {
      *param_1 = (long)(pbVar12 + 1);
      puVar5 = (undefined8 *)FUN_001368e8(param_1,&local_28,&local_38);
      return puVar5;
    }
    return (undefined8 *)0x0;
  }
  switch(*(char *)psVar10) {
  case 'A':
    local_38 = (byte *)FUN_0012acb8();
    if (local_38 == (byte *)0x0) {
      return (undefined8 *)0x0;
    }
    pcVar2 = (char *)*param_1;
    if (pcVar2 == (char *)param_1[1]) {
      return (undefined8 *)0x0;
    }
    if (*pcVar2 != 'E') {
      return (undefined8 *)0x0;
    }
    *param_1 = (long)(pcVar2 + 1);
    puVar5 = (undefined8 *)FUN_00135fa4(param_1,&local_38);
    return puVar5;
  default:
    goto code_r0x00131a30;
  case 'D':
    if ((1 < uVar6) && (*psVar10 == 0x6e44)) {
      psVar10 = (short *)((long)psVar1 + 3);
      *param_1 = (long)psVar10;
      if (psVar10 != psVar3) {
        if (*(char *)psVar10 == '0') {
          psVar10 = psVar1 + 2;
          *param_1 = (long)psVar10;
        }
        if ((psVar10 != psVar3) && ((char)*psVar10 == 'E')) {
          *param_1 = (long)((long)psVar10 + 1);
          puVar5 = (undefined8 *)FUN_00136044(param_1,"nullptr");
          return puVar5;
        }
      }
    }
    break;
  case 'T':
    return (undefined8 *)0x0;
  case 'U':
    if ((((1 < uVar6) && ((char)psVar1[1] == 'l')) &&
        (local_38 = (byte *)FUN_001360ec(param_1,0), local_38 != (byte *)0x0)) &&
       ((pcVar2 = (char *)*param_1, pcVar2 != (char *)param_1[1] && (*pcVar2 == 'E')))) {
      *param_1 = (long)(pcVar2 + 1);
      puVar5 = (undefined8 *)FUN_00136848(param_1,&local_38);
      return puVar5;
    }
    break;
  case '_':
    if ((1 < uVar6) && (*psVar10 == 0x5a5f)) {
      *param_1 = (long)((long)psVar1 + 3);
      puVar5 = (undefined8 *)FUN_0012a0a0();
      if (puVar5 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      pcVar2 = (char *)*param_1;
      if ((pcVar2 != (char *)param_1[1]) && (*pcVar2 == 'E')) {
        *param_1 = (long)(pcVar2 + 1);
        return puVar5;
      }
    }
    break;
  case 'a':
    *param_1 = (long)(psVar1 + 1);
    puVar5 = (undefined8 *)FUN_00135db4(param_1,"signed char",0xb);
    return puVar5;
  case 'b':
    if ((2 < uVar6) && (*psVar10 == 0x3062 && *(char *)((long)psVar1 + 3) == 'E')) {
      *param_1 = (long)(psVar1 + 2);
      puVar5 = (undefined8 *)FUN_00135f00(param_1,0);
      return puVar5;
    }
    uVar6 = FUN_0012a018(param_1,&DAT_00112fc0,3);
    if ((uVar6 & 1) != 0) {
      puVar5 = (undefined8 *)FUN_00135f00(param_1,1);
      return puVar5;
    }
    break;
  case 'c':
    *param_1 = (long)(psVar1 + 1);
    puVar5 = (undefined8 *)FUN_00135db4(param_1,&DAT_00113153,4);
    return puVar5;
  case 'd':
    *param_1 = (long)(psVar1 + 1);
    if ((((((((0x10 < (ulong)((long)psVar3 - (long)(psVar1 + 1))) &&
             ((0xfffffff5 < *(byte *)(psVar1 + 1) - 0x3a ||
              (0xfffffff9 < (*(byte *)(psVar1 + 1) & 0xffffffdf) - 0x47)))) &&
            ((0xfffffff5 < *(byte *)((long)psVar1 + 3) - 0x3a ||
             (0xfffffff9 < (*(byte *)((long)psVar1 + 3) & 0xffffffdf) - 0x47)))) &&
           (((((0xfffffff5 < *(byte *)(psVar1 + 2) - 0x3a ||
               (0xfffffff9 < (*(byte *)(psVar1 + 2) & 0xffffffdf) - 0x47)) &&
              ((0xfffffff5 < *(byte *)((long)psVar1 + 5) - 0x3a ||
               (0xfffffff9 < (*(byte *)((long)psVar1 + 5) & 0xffffffdf) - 0x47)))) &&
             ((0xfffffff5 < *(byte *)(psVar1 + 3) - 0x3a ||
              (0xfffffff9 < (*(byte *)(psVar1 + 3) & 0xffffffdf) - 0x47)))) &&
            ((0xfffffff5 < *(byte *)((long)psVar1 + 7) - 0x3a ||
             (0xfffffff9 < (*(byte *)((long)psVar1 + 7) & 0xffffffdf) - 0x47)))))) &&
          ((((0xfffffff5 < *(byte *)(psVar1 + 4) - 0x3a ||
             (0xfffffff9 < (*(byte *)(psVar1 + 4) & 0xffffffdf) - 0x47)) &&
            ((0xfffffff5 < *(byte *)((long)psVar1 + 9) - 0x3a ||
             (0xfffffff9 < (*(byte *)((long)psVar1 + 9) & 0xffffffdf) - 0x47)))) &&
           (((0xfffffff5 < *(byte *)(psVar1 + 5) - 0x3a ||
             (0xfffffff9 < (*(byte *)(psVar1 + 5) & 0xffffffdf) - 0x47)) &&
            ((0xfffffff5 < *(byte *)((long)psVar1 + 0xb) - 0x3a ||
             (0xfffffff9 < (*(byte *)((long)psVar1 + 0xb) & 0xffffffdf) - 0x47)))))))) &&
         ((((0xfffffff5 < *(byte *)(psVar1 + 6) - 0x3a ||
            (0xfffffff9 < (*(byte *)(psVar1 + 6) & 0xffffffdf) - 0x47)) &&
           ((0xfffffff5 < *(byte *)((long)psVar1 + 0xd) - 0x3a ||
            (0xfffffff9 < (*(byte *)((long)psVar1 + 0xd) & 0xffffffdf) - 0x47)))) &&
          ((0xfffffff5 < *(byte *)(psVar1 + 7) - 0x3a ||
           (0xfffffff9 < (*(byte *)(psVar1 + 7) & 0xffffffdf) - 0x47)))))) &&
        ((0xfffffff5 < *(byte *)((long)psVar1 + 0xf) - 0x3a ||
         (0xfffffff9 < (*(byte *)((long)psVar1 + 0xf) & 0xffffffdf) - 0x47)))) &&
       (((0xfffffff5 < *(byte *)(psVar1 + 8) - 0x3a ||
         (0xfffffff9 < (*(byte *)(psVar1 + 8) & 0xffffffdf) - 0x47)) &&
        ((0xfffffff5 < *(byte *)((long)psVar1 + 0x11) - 0x3a ||
         (0xfffffff9 < (*(byte *)((long)psVar1 + 0x11) & 0xffffffdf) - 0x47)))))) {
      psVar10 = psVar1 + 9;
      *param_1 = (long)psVar10;
      if ((psVar10 != psVar3) && ((char)*psVar10 == 'E')) {
        pvVar14 = (void *)param_1[0x266];
        *param_1 = (long)((long)psVar1 + 0x13);
        lVar8 = *(long *)((long)pvVar14 + 8);
        puVar5 = (undefined8 *)pvVar14;
        if (lVar8 - 0xfd0U < 0xfffffffffffff010) {
          puVar5 = (undefined8 *)malloc(0x1000);
          if (puVar5 == (undefined8 *)0x0) {
LAB_00132844:
                    /* WARNING: Subroutine does not return */
            std::terminate();
          }
          lVar8 = 0;
          *puVar5 = pvVar14;
          puVar5[1] = 0;
          param_1[0x266] = (long)puVar5;
        }
        *(long *)((long)puVar5 + 8) = lVar8 + 0x20;
        puVar9 = (undefined8 *)((long)puVar5 + lVar8 + 0x10);
        *puVar9 = &PTR_FUN_0014ed18;
        *(undefined1 *)((long)puVar5 + lVar8 + 0x18) = 0x4f;
        *(ushort *)((long)puVar5 + lVar8 + 0x19) =
             *(ushort *)((long)puVar5 + lVar8 + 0x19) & 0xf000 | 0x540;
        uVar13 = 0x10;
LAB_00131d18:
        puVar9[2] = psVar1 + 1;
        puVar9[3] = uVar13;
        return puVar9;
      }
    }
    break;
  case 'e':
    *param_1 = (long)(psVar1 + 1);
    if ((((((0x20 < (ulong)((long)psVar3 - (long)(psVar1 + 1))) &&
           ((0xfffffff5 < *(byte *)(psVar1 + 1) - 0x3a ||
            (0xfffffff9 < (*(byte *)(psVar1 + 1) & 0xffffffdf) - 0x47)))) &&
          (((0xfffffff5 < *(byte *)((long)psVar1 + 3) - 0x3a ||
            (0xfffffff9 < (*(byte *)((long)psVar1 + 3) & 0xffffffdf) - 0x47)) &&
           ((((0xfffffff5 < *(byte *)(psVar1 + 2) - 0x3a ||
              (0xfffffff9 < (*(byte *)(psVar1 + 2) & 0xffffffdf) - 0x47)) &&
             ((0xfffffff5 < *(byte *)((long)psVar1 + 5) - 0x3a ||
              (0xfffffff9 < (*(byte *)((long)psVar1 + 5) & 0xffffffdf) - 0x47)))) &&
            ((0xfffffff5 < *(byte *)(psVar1 + 3) - 0x3a ||
             (0xfffffff9 < (*(byte *)(psVar1 + 3) & 0xffffffdf) - 0x47)))))))) &&
         (((0xfffffff5 < *(byte *)((long)psVar1 + 7) - 0x3a ||
           (0xfffffff9 < (*(byte *)((long)psVar1 + 7) & 0xffffffdf) - 0x47)) &&
          ((((((0xfffffff5 < *(byte *)(psVar1 + 4) - 0x3a ||
               (0xfffffff9 < (*(byte *)(psVar1 + 4) & 0xffffffdf) - 0x47)) &&
              ((0xfffffff5 < *(byte *)((long)psVar1 + 9) - 0x3a ||
               (0xfffffff9 < (*(byte *)((long)psVar1 + 9) & 0xffffffdf) - 0x47)))) &&
             ((0xfffffff5 < *(byte *)(psVar1 + 5) - 0x3a ||
              (0xfffffff9 < (*(byte *)(psVar1 + 5) & 0xffffffdf) - 0x47)))) &&
            ((0xfffffff5 < *(byte *)((long)psVar1 + 0xb) - 0x3a ||
             (0xfffffff9 < (*(byte *)((long)psVar1 + 0xb) & 0xffffffdf) - 0x47)))) &&
           ((((0xfffffff5 < *(byte *)(psVar1 + 6) - 0x3a ||
              (0xfffffff9 < (*(byte *)(psVar1 + 6) & 0xffffffdf) - 0x47)) &&
             ((0xfffffff5 < *(byte *)((long)psVar1 + 0xd) - 0x3a ||
              (0xfffffff9 < (*(byte *)((long)psVar1 + 0xd) & 0xffffffdf) - 0x47)))) &&
            ((0xfffffff5 < *(byte *)(psVar1 + 7) - 0x3a ||
             (0xfffffff9 < (*(byte *)(psVar1 + 7) & 0xffffffdf) - 0x47)))))))))) &&
        (((0xfffffff5 < *(byte *)((long)psVar1 + 0xf) - 0x3a ||
          (0xfffffff9 < (*(byte *)((long)psVar1 + 0xf) & 0xffffffdf) - 0x47)) &&
         (((((0xfffffff5 < *(byte *)(psVar1 + 8) - 0x3a ||
             (0xfffffff9 < (*(byte *)(psVar1 + 8) & 0xffffffdf) - 0x47)) &&
            ((0xfffffff5 < *(byte *)((long)psVar1 + 0x11) - 0x3a ||
             (0xfffffff9 < (*(byte *)((long)psVar1 + 0x11) & 0xffffffdf) - 0x47)))) &&
           ((((0xfffffff5 < *(byte *)(psVar1 + 9) - 0x3a ||
              (0xfffffff9 < (*(byte *)(psVar1 + 9) & 0xffffffdf) - 0x47)) &&
             ((0xfffffff5 < *(byte *)((long)psVar1 + 0x13) - 0x3a ||
              (0xfffffff9 < (*(byte *)((long)psVar1 + 0x13) & 0xffffffdf) - 0x47)))) &&
            ((((0xfffffff5 < *(byte *)(psVar1 + 10) - 0x3a ||
               (0xfffffff9 < (*(byte *)(psVar1 + 10) & 0xffffffdf) - 0x47)) &&
              ((0xfffffff5 < *(byte *)((long)psVar1 + 0x15) - 0x3a ||
               (0xfffffff9 < (*(byte *)((long)psVar1 + 0x15) & 0xffffffdf) - 0x47)))) &&
             ((0xfffffff5 < *(byte *)(psVar1 + 0xb) - 0x3a ||
              (0xfffffff9 < (*(byte *)(psVar1 + 0xb) & 0xffffffdf) - 0x47)))))))) &&
          (((0xfffffff5 < *(byte *)((long)psVar1 + 0x17) - 0x3a ||
            (0xfffffff9 < (*(byte *)((long)psVar1 + 0x17) & 0xffffffdf) - 0x47)) &&
           (((((((0xfffffff5 < *(byte *)(psVar1 + 0xc) - 0x3a ||
                 (0xfffffff9 < (*(byte *)(psVar1 + 0xc) & 0xffffffdf) - 0x47)) &&
                ((0xfffffff5 < *(byte *)((long)psVar1 + 0x19) - 0x3a ||
                 (0xfffffff9 < (*(byte *)((long)psVar1 + 0x19) & 0xffffffdf) - 0x47)))) &&
               ((0xfffffff5 < *(byte *)(psVar1 + 0xd) - 0x3a ||
                (0xfffffff9 < (*(byte *)(psVar1 + 0xd) & 0xffffffdf) - 0x47)))) &&
              ((0xfffffff5 < *(byte *)((long)psVar1 + 0x1b) - 0x3a ||
               (0xfffffff9 < (*(byte *)((long)psVar1 + 0x1b) & 0xffffffdf) - 0x47)))) &&
             (((0xfffffff5 < *(byte *)(psVar1 + 0xe) - 0x3a ||
               (0xfffffff9 < (*(byte *)(psVar1 + 0xe) & 0xffffffdf) - 0x47)) &&
              ((0xfffffff5 < *(byte *)((long)psVar1 + 0x1d) - 0x3a ||
               (0xfffffff9 < (*(byte *)((long)psVar1 + 0x1d) & 0xffffffdf) - 0x47)))))) &&
            ((0xfffffff5 < *(byte *)(psVar1 + 0xf) - 0x3a ||
             (0xfffffff9 < (*(byte *)(psVar1 + 0xf) & 0xffffffdf) - 0x47)))))))))))) &&
       (((0xfffffff5 < *(byte *)((long)psVar1 + 0x1f) - 0x3a ||
         (0xfffffff9 < (*(byte *)((long)psVar1 + 0x1f) & 0xffffffdf) - 0x47)) &&
        (((0xfffffff5 < *(byte *)(psVar1 + 0x10) - 0x3a ||
          (0xfffffff9 < (*(byte *)(psVar1 + 0x10) & 0xffffffdf) - 0x47)) &&
         ((0xfffffff5 < *(byte *)((long)psVar1 + 0x21) - 0x3a ||
          (0xfffffff9 < (*(byte *)((long)psVar1 + 0x21) & 0xffffffdf) - 0x47)))))))) {
      psVar10 = psVar1 + 0x11;
      *param_1 = (long)psVar10;
      if ((psVar10 != psVar3) && ((char)*psVar10 == 'E')) {
        pvVar14 = (void *)param_1[0x266];
        *param_1 = (long)((long)psVar1 + 0x23);
        lVar8 = *(long *)((long)pvVar14 + 8);
        puVar5 = (undefined8 *)pvVar14;
        if (lVar8 - 0xfd0U < 0xfffffffffffff010) {
          puVar5 = (undefined8 *)malloc(0x1000);
          if (puVar5 == (undefined8 *)0x0) goto LAB_00132844;
          lVar8 = 0;
          *puVar5 = pvVar14;
          puVar5[1] = 0;
          param_1[0x266] = (long)puVar5;
        }
        *(long *)((long)puVar5 + 8) = lVar8 + 0x20;
        puVar9 = (undefined8 *)((long)puVar5 + lVar8 + 0x10);
        *puVar9 = &PTR_FUN_0014ed88;
        *(undefined1 *)((long)puVar5 + lVar8 + 0x18) = 0x50;
        *(ushort *)((long)puVar5 + lVar8 + 0x19) =
             *(ushort *)((long)puVar5 + lVar8 + 0x19) & 0xf000 | 0x540;
        uVar13 = 0x20;
        goto LAB_00131d18;
      }
    }
    break;
  case 'f':
    *param_1 = (long)(psVar1 + 1);
    if (((((8 < (ulong)((long)psVar3 - (long)(psVar1 + 1))) &&
          ((0xfffffff5 < *(byte *)(psVar1 + 1) - 0x3a ||
           (0xfffffff9 < (*(byte *)(psVar1 + 1) & 0xffffffdf) - 0x47)))) &&
         ((0xfffffff5 < *(byte *)((long)psVar1 + 3) - 0x3a ||
          (0xfffffff9 < (*(byte *)((long)psVar1 + 3) & 0xffffffdf) - 0x47)))) &&
        (((((0xfffffff5 < *(byte *)(psVar1 + 2) - 0x3a ||
            (0xfffffff9 < (*(byte *)(psVar1 + 2) & 0xffffffdf) - 0x47)) &&
           ((0xfffffff5 < *(byte *)((long)psVar1 + 5) - 0x3a ||
            (0xfffffff9 < (*(byte *)((long)psVar1 + 5) & 0xffffffdf) - 0x47)))) &&
          ((0xfffffff5 < *(byte *)(psVar1 + 3) - 0x3a ||
           (0xfffffff9 < (*(byte *)(psVar1 + 3) & 0xffffffdf) - 0x47)))) &&
         ((0xfffffff5 < *(byte *)((long)psVar1 + 7) - 0x3a ||
          (0xfffffff9 < (*(byte *)((long)psVar1 + 7) & 0xffffffdf) - 0x47)))))) &&
       (((0xfffffff5 < *(byte *)(psVar1 + 4) - 0x3a ||
         (0xfffffff9 < (*(byte *)(psVar1 + 4) & 0xffffffdf) - 0x47)) &&
        ((0xfffffff5 < *(byte *)((long)psVar1 + 9) - 0x3a ||
         (0xfffffff9 < (*(byte *)((long)psVar1 + 9) & 0xffffffdf) - 0x47)))))) {
      psVar10 = psVar1 + 5;
      *param_1 = (long)psVar10;
      if ((psVar10 != psVar3) && ((char)*psVar10 == 'E')) {
        pvVar14 = (void *)param_1[0x266];
        *param_1 = (long)((long)psVar1 + 0xb);
        lVar8 = *(long *)((long)pvVar14 + 8);
        puVar5 = (undefined8 *)pvVar14;
        if (lVar8 - 0xfd0U < 0xfffffffffffff010) {
          puVar5 = (undefined8 *)malloc(0x1000);
          if (puVar5 == (undefined8 *)0x0) goto LAB_00132844;
          lVar8 = 0;
          *puVar5 = pvVar14;
          puVar5[1] = 0;
          param_1[0x266] = (long)puVar5;
        }
        *(long *)((long)puVar5 + 8) = lVar8 + 0x20;
        puVar9 = (undefined8 *)((long)puVar5 + lVar8 + 0x10);
        *puVar9 = &PTR_FUN_0014eca8;
        *(undefined1 *)((long)puVar5 + lVar8 + 0x18) = 0x4e;
        *(ushort *)((long)puVar5 + lVar8 + 0x19) =
             *(ushort *)((long)puVar5 + lVar8 + 0x19) & 0xf000 | 0x540;
        uVar13 = 8;
        goto LAB_00131d18;
      }
    }
    break;
  case 'h':
    *param_1 = (long)(psVar1 + 1);
    puVar5 = (undefined8 *)FUN_00135db4(param_1,"unsigned char",0xd);
    return puVar5;
  case 'i':
    *param_1 = (long)(psVar1 + 1);
    puVar5 = (undefined8 *)FUN_00135db4(param_1,&DAT_001128a6,0);
    return puVar5;
  case 'j':
    puVar7 = &DAT_00113ef0;
    goto LAB_00131fe8;
  case 'l':
    puVar7 = &DAT_00112cc4;
LAB_00131fe8:
    *param_1 = (long)(psVar1 + 1);
    puVar5 = (undefined8 *)FUN_00135db4(param_1,puVar7,1);
    return puVar5;
  case 'm':
    puVar7 = &DAT_00113dfe;
    goto LAB_00132014;
  case 'n':
    *param_1 = (long)(psVar1 + 1);
    puVar5 = (undefined8 *)FUN_00135db4(param_1,"__int128",8);
    return puVar5;
  case 'o':
    *param_1 = (long)(psVar1 + 1);
    puVar5 = (undefined8 *)FUN_00135db4(param_1,"unsigned __int128",0x11);
    return puVar5;
  case 's':
    *param_1 = (long)(psVar1 + 1);
    puVar5 = (undefined8 *)FUN_00135db4(param_1,"short",5);
    return puVar5;
  case 't':
    *param_1 = (long)(psVar1 + 1);
    puVar5 = (undefined8 *)FUN_00135db4(param_1,"unsigned short",0xe);
    return puVar5;
  case 'w':
    *param_1 = (long)(psVar1 + 1);
    puVar5 = (undefined8 *)FUN_00135db4(param_1,"wchar_t",7);
    return puVar5;
  case 'x':
    puVar7 = &DAT_00112cc6;
LAB_00132014:
    *param_1 = (long)(psVar1 + 1);
    puVar5 = (undefined8 *)FUN_00135db4(param_1,puVar7,2);
    return puVar5;
  case 'y':
    *param_1 = (long)(psVar1 + 1);
    puVar5 = (undefined8 *)FUN_00135db4(param_1,&DAT_00113581,3);
    return puVar5;
  }
  return (undefined8 *)0x0;
}


// ===== 00132848  FUN_00132848 =====

undefined8 * FUN_00132848(long *param_1)

{
  short *psVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  long lVar8;
  byte *pbVar9;
  byte *pbVar10;
  long lVar11;
  void *pvVar12;
  byte *local_40;
  long lStack_38;
  
  psVar1 = (short *)*param_1;
  pbVar2 = (byte *)param_1[1];
  if ((ulong)((long)pbVar2 - (long)psVar1) < 3) {
    if ((long)pbVar2 - (long)psVar1 != 2) {
      return (undefined8 *)0x0;
    }
  }
  else if (*psVar1 == 0x7066 && (char)psVar1[1] == 'T') {
    pvVar12 = (void *)param_1[0x266];
    *param_1 = (long)psVar1 + 3;
    lVar11 = *(long *)((long)pvVar12 + 8);
    puVar3 = (undefined8 *)pvVar12;
    if (0xfffffffffffff00f < lVar11 - 0xfd0U) {
LAB_00132a5c:
      *(long *)((long)puVar3 + 8) = lVar11 + 0x20;
      puVar6 = (undefined8 *)((long)puVar3 + lVar11 + 0x10);
      *puVar6 = &PTR_FUN_0014e158;
      *(undefined1 *)((long)puVar3 + lVar11 + 0x18) = 8;
      *(ushort *)((long)puVar3 + lVar11 + 0x19) =
           *(ushort *)((long)puVar3 + lVar11 + 0x19) & 0xf000 | 0x540;
      *(undefined **)((long)puVar3 + lVar11 + 0x20) = &DAT_00113efd;
      *(undefined8 *)((long)puVar3 + lVar11 + 0x28) = 4;
      return puVar6;
    }
    puVar3 = (undefined8 *)malloc(0x1000);
    if (puVar3 != (undefined8 *)0x0) {
      lVar11 = 0;
      *puVar3 = pvVar12;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
      goto LAB_00132a5c;
    }
    goto LAB_00132c00;
  }
  if (*psVar1 == 0x7066) {
    pbVar4 = (byte *)(psVar1 + 1);
    *param_1 = (long)pbVar4;
    if (pbVar4 != pbVar2) {
      if (*pbVar4 == 0x72) {
        pbVar4 = (byte *)((long)psVar1 + 3);
        *param_1 = (long)pbVar4;
      }
      if (pbVar4 != pbVar2) {
        if (*pbVar4 == 0x56) {
          pbVar4 = pbVar4 + 1;
          *param_1 = (long)pbVar4;
        }
        if (pbVar4 != pbVar2) {
          if (*pbVar4 == 0x4b) {
            pbVar4 = pbVar4 + 1;
            *param_1 = (long)pbVar4;
          }
          if (pbVar2 != pbVar4) {
            pbVar7 = pbVar4;
            pbVar10 = pbVar4;
            if (*pbVar4 - 0x3a < 0xfffffff6) {
              lVar11 = 0;
              pbVar5 = pbVar4;
              pbVar4 = (byte *)0x0;
            }
            else {
              do {
                pbVar9 = pbVar7;
                pbVar5 = pbVar10;
                if (*pbVar10 - 0x3a < 0xfffffff6) break;
                pbVar10 = pbVar10 + 1;
                *param_1 = (long)pbVar10;
                pbVar9 = pbVar2;
                pbVar7 = pbVar7 + 1;
                pbVar5 = pbVar2;
              } while (pbVar10 != pbVar2);
              lVar11 = (long)pbVar9 - (long)pbVar4;
            }
            if ((pbVar5 != pbVar2) && (*pbVar5 == 0x5f)) {
              pvVar12 = (void *)param_1[0x266];
              *param_1 = (long)(pbVar5 + 1);
              lVar8 = *(long *)((long)pvVar12 + 8);
              puVar3 = (undefined8 *)pvVar12;
              if (lVar8 - 0xfd0U < 0xfffffffffffff010) {
                puVar3 = (undefined8 *)malloc(0x1000);
                if (puVar3 == (undefined8 *)0x0) {
LAB_00132c00:
                    /* WARNING: Subroutine does not return */
                  std::terminate();
                }
                lVar8 = 0;
                *puVar3 = pvVar12;
                puVar3[1] = 0;
                param_1[0x266] = (long)puVar3;
              }
              *(long *)((long)puVar3 + 8) = lVar8 + 0x20;
              puVar6 = (undefined8 *)((long)puVar3 + lVar8 + 0x10);
              *puVar6 = &PTR_FUN_0014f2c8;
              *(byte **)((long)puVar3 + lVar8 + 0x20) = pbVar4;
              *(long *)((long)puVar3 + lVar8 + 0x28) = lVar11;
              *(undefined1 *)((long)puVar3 + lVar8 + 0x18) = 0x43;
              *(ushort *)((long)puVar3 + lVar8 + 0x19) =
                   *(ushort *)((long)puVar3 + lVar8 + 0x19) & 0xf000 | 0x540;
              return puVar6;
            }
          }
        }
      }
    }
  }
  else if (*psVar1 == 0x4c66) {
    pbVar4 = (byte *)(psVar1 + 1);
    *param_1 = (long)pbVar4;
    if ((pbVar2 != pbVar4) && (pbVar10 = pbVar4, 0xfffffff5 < *pbVar4 - 0x3a)) {
      do {
        pbVar7 = pbVar10;
        if (*pbVar10 - 0x3a < 0xfffffff6) break;
        pbVar10 = pbVar10 + 1;
        *param_1 = (long)pbVar10;
        pbVar7 = pbVar2;
      } while (pbVar10 != pbVar2);
      if (pbVar7 == pbVar4) {
        return (undefined8 *)0x0;
      }
      if (pbVar7 == pbVar2) {
        return (undefined8 *)0x0;
      }
      if (*pbVar7 == 0x70) {
        local_40 = pbVar7 + 1;
        *param_1 = (long)local_40;
        if (local_40 != pbVar2) {
          if (*local_40 == 0x72) {
            local_40 = pbVar7 + 2;
            *param_1 = (long)local_40;
          }
          if (local_40 != pbVar2) {
            if (*local_40 == 0x56) {
              local_40 = local_40 + 1;
              *param_1 = (long)local_40;
            }
            if (local_40 != pbVar2) {
              if (*local_40 == 0x4b) {
                local_40 = local_40 + 1;
                *param_1 = (long)local_40;
              }
              if (pbVar2 != local_40) {
                pbVar10 = local_40;
                pbVar4 = local_40;
                if (*local_40 - 0x3a < 0xfffffff6) {
                  lStack_38 = 0;
                  pbVar7 = local_40;
                  local_40 = (byte *)0x0;
                }
                else {
                  do {
                    pbVar5 = pbVar10;
                    pbVar7 = pbVar4;
                    if (*pbVar4 - 0x3a < 0xfffffff6) break;
                    pbVar4 = pbVar4 + 1;
                    *param_1 = (long)pbVar4;
                    pbVar5 = pbVar2;
                    pbVar10 = pbVar10 + 1;
                    pbVar7 = pbVar2;
                  } while (pbVar4 != pbVar2);
                  lStack_38 = (long)pbVar5 - (long)local_40;
                }
                if ((pbVar7 != pbVar2) && (*pbVar7 == 0x5f)) {
                  *param_1 = (long)(pbVar7 + 1);
                  puVar3 = (undefined8 *)FUN_00139280(param_1,&local_40);
                  return puVar3;
                }
              }
            }
          }
        }
      }
    }
  }
  return (undefined8 *)0x0;
}


// ===== 00132c04  FUN_00132c04 =====

void FUN_00132c04(long *param_1)

{
  char *pcVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  void *pvVar8;
  
  pcVar1 = (char *)*param_1;
  if ((((char *)param_1[1] != pcVar1) && (1 < (ulong)(param_1[1] - (long)pcVar1))) &&
     (*pcVar1 == 'd')) {
    cVar2 = pcVar1[1];
    if (cVar2 == 'X') {
      *param_1 = (long)(pcVar1 + 2);
      lVar3 = FUN_0012ff04();
      if (((lVar3 != 0) && (lVar4 = FUN_0012ff04(param_1), lVar4 != 0)) &&
         (lVar6 = FUN_00132c04(param_1), lVar6 != 0)) {
        pvVar8 = (void *)param_1[0x266];
        lVar7 = *(long *)((long)pvVar8 + 8);
        puVar5 = (undefined8 *)pvVar8;
        if (lVar7 - 0xfc0U < 0xfffffffffffff010) {
          puVar5 = (undefined8 *)malloc(0x1000);
          if (puVar5 == (undefined8 *)0x0) {
LAB_00132e94:
                    /* WARNING: Subroutine does not return */
            std::terminate();
          }
          lVar7 = 0;
          *puVar5 = pvVar8;
          puVar5[1] = 0;
          param_1[0x266] = (long)puVar5;
        }
        *(long *)((long)puVar5 + 8) = lVar7 + 0x30;
        *(undefined ***)((long)puVar5 + lVar7 + 0x10) = &PTR_FUN_0014f488;
        *(undefined1 *)((long)puVar5 + lVar7 + 0x18) = 0x52;
        *(long *)((long)puVar5 + lVar7 + 0x20) = lVar3;
        *(long *)((long)puVar5 + lVar7 + 0x28) = lVar4;
        *(long *)((long)puVar5 + lVar7 + 0x30) = lVar6;
        *(ushort *)((long)puVar5 + lVar7 + 0x19) =
             *(ushort *)((long)puVar5 + lVar7 + 0x19) & 0xf000 | 0x540;
        return;
      }
    }
    else if (cVar2 == 'x') {
      *param_1 = (long)(pcVar1 + 2);
      lVar3 = FUN_0012ff04();
      if ((lVar3 != 0) && (lVar4 = FUN_00132c04(param_1), lVar4 != 0)) {
        pvVar8 = (void *)param_1[0x266];
        lVar6 = *(long *)((long)pvVar8 + 8);
        puVar5 = (undefined8 *)pvVar8;
        if (lVar6 - 0xfc0U < 0xfffffffffffff010) {
          puVar5 = (undefined8 *)malloc(0x1000);
          if (puVar5 == (undefined8 *)0x0) goto LAB_00132e94;
          lVar6 = 0;
          *puVar5 = pvVar8;
          puVar5[1] = 0;
          param_1[0x266] = (long)puVar5;
        }
        *(long *)((long)puVar5 + 8) = lVar6 + 0x30;
        *(undefined ***)((long)puVar5 + lVar6 + 0x10) = &PTR_FUN_0014f418;
        *(undefined1 *)((long)puVar5 + lVar6 + 0x18) = 0x51;
        *(long *)((long)puVar5 + lVar6 + 0x20) = lVar3;
        *(long *)((long)puVar5 + lVar6 + 0x28) = lVar4;
        *(ushort *)((long)puVar5 + lVar6 + 0x19) =
             *(ushort *)((long)puVar5 + lVar6 + 0x19) & 0xf000 | 0x540;
        *(undefined1 *)((long)puVar5 + lVar6 + 0x30) = 1;
        return;
      }
    }
    else {
      if (cVar2 != 'i') goto LAB_00132d08;
      *param_1 = (long)(pcVar1 + 2);
      lVar3 = FUN_0012e010();
      if ((lVar3 != 0) && (lVar4 = FUN_00132c04(param_1), lVar4 != 0)) {
        pvVar8 = (void *)param_1[0x266];
        lVar6 = *(long *)((long)pvVar8 + 8);
        puVar5 = (undefined8 *)pvVar8;
        if (lVar6 - 0xfc0U < 0xfffffffffffff010) {
          puVar5 = (undefined8 *)malloc(0x1000);
          if (puVar5 == (undefined8 *)0x0) goto LAB_00132e94;
          lVar6 = 0;
          *puVar5 = pvVar8;
          puVar5[1] = 0;
          param_1[0x266] = (long)puVar5;
        }
        *(long *)((long)puVar5 + 8) = lVar6 + 0x30;
        *(undefined ***)((long)puVar5 + lVar6 + 0x10) = &PTR_FUN_0014f418;
        *(undefined1 *)((long)puVar5 + lVar6 + 0x18) = 0x51;
        *(long *)((long)puVar5 + lVar6 + 0x20) = lVar3;
        *(long *)((long)puVar5 + lVar6 + 0x28) = lVar4;
        *(undefined1 *)((long)puVar5 + lVar6 + 0x30) = 0;
        *(ushort *)((long)puVar5 + lVar6 + 0x19) =
             *(ushort *)((long)puVar5 + lVar6 + 0x19) & 0xf000 | 0x540;
      }
    }
    return;
  }
LAB_00132d08:
  FUN_0012ff04();
  return;
}


// ===== 00132e98  FUN_00132e98 =====

void FUN_00132e98(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  pvVar3 = *(void **)(param_1 + 0x1330);
  lVar2 = *(long *)((long)pvVar3 + 8);
  puVar1 = (undefined8 *)pvVar3;
  if (lVar2 - 0xfc0U < 0xfffffffffffff010) {
    puVar1 = (undefined8 *)malloc(0x1000);
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar2 = 0;
    *puVar1 = pvVar3;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar2 + 0x30;
  uVar5 = param_2[1];
  uVar4 = *param_2;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0014f4f8;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = 0;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x46;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x30) = uVar5;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = uVar4;
  return;
}


// ===== 00132f3c  FUN_00132f3c =====

undefined8 * FUN_00132f3c(long *param_1)

{
  byte *pbVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  byte *pbVar6;
  long lVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  long lVar10;
  void *pvVar11;
  
  puVar2 = (undefined8 *)FUN_0012acb8();
  puVar3 = puVar2;
  if ((puVar2 == (undefined8 *)0x0) ||
     (puVar3 = (undefined8 *)FUN_0012ff04(param_1), puVar3 == (undefined8 *)0x0)) {
    return puVar3;
  }
  pbVar9 = (byte *)*param_1;
  pbVar1 = (byte *)param_1[1];
  pbVar5 = pbVar9;
  if ((pbVar9 != pbVar1) && (*pbVar9 == 0x6e)) {
    pbVar5 = pbVar9 + 1;
    *param_1 = (long)pbVar5;
  }
  if (pbVar1 != pbVar5) {
    if (*pbVar5 - 0x3a < 0xfffffff6) {
      pbVar9 = (byte *)0x0;
      lVar10 = 0;
    }
    else {
      do {
        pbVar6 = pbVar5;
        if (*pbVar5 - 0x3a < 0xfffffff6) break;
        pbVar5 = pbVar5 + 1;
        *param_1 = (long)pbVar5;
        pbVar6 = pbVar1;
      } while (pbVar5 != pbVar1);
      lVar10 = (long)pbVar6 - (long)pbVar9;
      pbVar5 = pbVar6;
    }
    if ((pbVar5 != pbVar1) && (*pbVar5 == 0x45)) {
      pvVar11 = (void *)param_1[0x266];
      *param_1 = (long)(pbVar5 + 1);
      lVar7 = *(long *)((long)pvVar11 + 8);
      puVar4 = (undefined8 *)pvVar11;
      if (lVar7 - 0xfc0U < 0xfffffffffffff010) {
        puVar4 = (undefined8 *)malloc(0x1000);
        if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar7 = 0;
        *puVar4 = pvVar11;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      *(long *)((long)puVar4 + 8) = lVar7 + 0x30;
      puVar8 = (undefined8 *)((long)puVar4 + lVar7 + 0x10);
      *puVar8 = &PTR_FUN_0014f568;
      *(undefined1 *)((long)puVar4 + lVar7 + 0x18) = 0x45;
      *(undefined8 **)((long)puVar4 + lVar7 + 0x20) = puVar2;
      *(undefined8 **)((long)puVar4 + lVar7 + 0x28) = puVar3;
      *(byte **)((long)puVar4 + lVar7 + 0x30) = pbVar9;
      *(long *)((long)puVar4 + lVar7 + 0x38) = lVar10;
      *(ushort *)((long)puVar4 + lVar7 + 0x19) =
           *(ushort *)((long)puVar4 + lVar7 + 0x19) & 0xf000 | 0x542;
      return puVar8;
    }
  }
  return (undefined8 *)0x0;
}


// ===== 001330b8  FUN_001330b8 =====

void FUN_001330b8(long param_1,undefined8 *param_2,ushort *param_3)

{
  ushort uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  void *pvVar5;
  
  pvVar5 = *(void **)(param_1 + 0x1330);
  lVar3 = *(long *)((long)pvVar5 + 8);
  puVar2 = (undefined8 *)pvVar5;
  if (lVar3 - 0xfb0U < 0xfffffffffffff010) {
    puVar2 = (undefined8 *)malloc(0x1000);
    if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar3 = 0;
    *puVar2 = pvVar5;
    puVar2[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar2;
  }
  *(long *)((long)puVar2 + 8) = lVar3 + 0x40;
  *(undefined ***)((long)puVar2 + lVar3 + 0x10) = &PTR_FUN_0014eb58;
  uVar1 = *param_3;
  *(undefined1 *)((long)puVar2 + lVar3 + 0x18) = 0x3c;
  uVar4 = *param_2;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x38) = 0;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x40) = 0;
  *(char **)((long)puVar2 + lVar3 + 0x20) = "noexcept ";
  *(undefined8 *)((long)puVar2 + lVar3 + 0x28) = 9;
  *(ushort *)((long)puVar2 + lVar3 + 0x19) =
       *(ushort *)((long)puVar2 + lVar3 + 0x19) & 0xf000 | uVar1 & 0x3f | 0x540;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x30) = uVar4;
  return;
}


// ===== 00133178  FUN_00133178 =====

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_00133178(long *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  long *plVar5;
  short *psVar6;
  char *pcVar7;
  long lVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined1 uVar11;
  short *psVar12;
  undefined8 *puVar13;
  long *plVar14;
  void *pvVar15;
  undefined8 *puVar16;
  size_t sVar17;
  long lVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  psVar6 = (short *)*param_1;
  psVar12 = (short *)param_1[1];
  if ((ulong)((long)psVar12 - (long)psVar6) < 2) {
    return (undefined8 *)0x0;
  }
  if (*psVar6 == 0x5172) {
    lVar10 = param_1[2];
    lVar2 = param_1[3];
    psVar6 = psVar6 + 1;
    plVar1 = param_1 + 5;
    *param_1 = (long)psVar6;
    while ((psVar6 == psVar12 || ((char)*psVar6 != '_'))) {
      lVar4 = FUN_0012acb8(param_1);
      if (lVar4 == 0) {
        return (undefined8 *)0x0;
      }
      plVar14 = (long *)param_1[3];
      if (plVar14 == (long *)param_1[4]) {
        plVar5 = (long *)param_1[2];
        sVar17 = (long)plVar14 - (long)plVar5;
        if (plVar5 == plVar1) {
          pvVar15 = malloc(sVar17 * 2);
          if (pvVar15 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (plVar14 != plVar1) {
            memcpy(pvVar15,plVar1,sVar17);
          }
          param_1[2] = (long)pvVar15;
        }
        else {
          pvVar15 = realloc(plVar5,sVar17 * 2);
          param_1[2] = (long)pvVar15;
          if (pvVar15 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
        }
        plVar14 = (long *)((long)pvVar15 + sVar17);
        param_1[4] = (long)((long)pvVar15 + ((long)sVar17 >> 2) * 8);
      }
      param_1[3] = (long)(plVar14 + 1);
      *plVar14 = lVar4;
      psVar12 = (short *)param_1[1];
      psVar6 = (short *)*param_1;
    }
    *param_1 = (long)((long)psVar6 + 1);
    auVar19 = FUN_0012ce20(param_1,lVar2 - lVar10 >> 3);
    psVar6 = (short *)*param_1;
    if (psVar6 == (short *)param_1[1]) {
      return (undefined8 *)0x0;
    }
  }
  else {
    if (*psVar6 != 0x7172) {
      return (undefined8 *)0x0;
    }
    auVar19 = ZEXT816(0);
    psVar6 = psVar6 + 1;
    *param_1 = (long)psVar6;
    if (psVar6 == psVar12) {
      return (undefined8 *)0x0;
    }
  }
  lVar10 = param_1[2];
  lVar2 = param_1[3];
  plVar1 = param_1 + 5;
  do {
    if ((char)*psVar6 == 'X') {
      *param_1 = (long)((long)psVar6 + 1);
      lVar4 = FUN_0012ff04(param_1);
      if (lVar4 == 0) {
        return (undefined8 *)0x0;
      }
      pcVar7 = (char *)*param_1;
      pcVar3 = (char *)param_1[1];
      if ((pcVar7 == pcVar3) || (*pcVar7 != 'N')) {
        uVar11 = 0;
        if (pcVar7 != pcVar3) goto LAB_001333fc;
LAB_00133378:
        lVar18 = 0;
LAB_00133424:
        puVar13 = (undefined8 *)param_1[0x266];
        lVar8 = puVar13[1];
      }
      else {
        pcVar7 = pcVar7 + 1;
        uVar11 = 1;
        *param_1 = (long)pcVar7;
        if (pcVar7 == pcVar3) goto LAB_00133378;
LAB_001333fc:
        if (*pcVar7 == 'R') {
          *param_1 = (long)(pcVar7 + 1);
          lVar18 = FUN_0012c1f0(param_1,0);
          if (lVar18 == 0) {
            return (undefined8 *)0x0;
          }
          goto LAB_00133424;
        }
        lVar18 = 0;
        puVar13 = (undefined8 *)param_1[0x266];
        lVar8 = puVar13[1];
      }
      if (lVar8 - 0xfc0U < 0xfffffffffffff010) {
        puVar16 = (undefined8 *)malloc(0x1000);
        if (puVar16 == (undefined8 *)0x0) goto LAB_00133670;
        lVar8 = 0;
        *puVar16 = puVar13;
        puVar16[1] = 0;
        param_1[0x266] = (long)puVar16;
        puVar13 = puVar16;
      }
      puVar13[1] = lVar8 + 0x30;
      puVar16 = (undefined8 *)((long)puVar13 + lVar8 + 0x10);
      *puVar16 = &PTR_FUN_0014f5d8;
      *(undefined1 *)((long)puVar13 + lVar8 + 0x18) = 0x54;
      *(long *)((long)puVar13 + lVar8 + 0x20) = lVar4;
      *(undefined1 *)((long)puVar13 + lVar8 + 0x28) = uVar11;
      *(ushort *)((long)puVar13 + lVar8 + 0x19) =
           *(ushort *)((long)puVar13 + lVar8 + 0x19) & 0xf000 | 0x540;
      *(long *)((long)puVar13 + lVar8 + 0x30) = lVar18;
      plVar14 = (long *)param_1[3];
      if (plVar14 != (long *)param_1[4]) goto LAB_00133564;
LAB_001334d0:
      plVar5 = (long *)param_1[2];
      sVar17 = (long)plVar14 - (long)plVar5;
      if (plVar5 == plVar1) {
        pvVar15 = malloc(sVar17 * 2);
        if (pvVar15 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (plVar14 != plVar1) {
          memcpy(pvVar15,plVar1,sVar17);
        }
        param_1[2] = (long)pvVar15;
      }
      else {
        pvVar15 = realloc(plVar5,sVar17 * 2);
        param_1[2] = (long)pvVar15;
        if (pvVar15 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
      }
      param_1[3] = (long)((undefined8 *)((long)pvVar15 + sVar17) + 1);
      param_1[4] = (long)((long)pvVar15 + ((long)sVar17 >> 2) * 8);
      *(undefined8 *)((long)pvVar15 + sVar17) = puVar16;
      psVar6 = (short *)*param_1;
      psVar12 = (short *)param_1[1];
      if (psVar6 != psVar12) goto LAB_001335d0;
    }
    else {
      if ((char)*psVar6 == 'T') {
        *param_1 = (long)((long)psVar6 + 1);
        lVar4 = FUN_0012acb8(param_1);
        if (lVar4 == 0) {
          return (undefined8 *)0x0;
        }
        pvVar15 = (void *)param_1[0x266];
        lVar18 = *(long *)((long)pvVar15 + 8);
        puVar16 = (undefined8 *)pvVar15;
        if (lVar18 - 0xfd0U < 0xfffffffffffff010) {
          puVar16 = (undefined8 *)malloc(0x1000);
          if (puVar16 == (undefined8 *)0x0) goto LAB_00133670;
          lVar18 = 0;
          *puVar16 = pvVar15;
          puVar16[1] = 0;
          param_1[0x266] = (long)puVar16;
        }
        lVar8 = (long)puVar16 + lVar18;
        ppuVar9 = &PTR_FUN_0014f648;
        *(long *)((long)puVar16 + 8) = lVar18 + 0x20;
        uVar11 = 0x55;
      }
      else {
        if ((char)*psVar6 != 'Q') {
          return (undefined8 *)0x0;
        }
        *param_1 = (long)((long)psVar6 + 1);
        lVar4 = FUN_0012ff04(param_1);
        if (lVar4 == 0) {
          return (undefined8 *)0x0;
        }
        pvVar15 = (void *)param_1[0x266];
        lVar18 = *(long *)((long)pvVar15 + 8);
        puVar16 = (undefined8 *)pvVar15;
        if (lVar18 - 0xfd0U < 0xfffffffffffff010) {
          puVar16 = (undefined8 *)malloc(0x1000);
          if (puVar16 == (undefined8 *)0x0) goto LAB_00133670;
          lVar18 = 0;
          *puVar16 = pvVar15;
          puVar16[1] = 0;
          param_1[0x266] = (long)puVar16;
        }
        lVar8 = (long)puVar16 + lVar18;
        ppuVar9 = &PTR_FUN_0014f6b8;
        *(long *)((long)puVar16 + 8) = lVar18 + 0x20;
        uVar11 = 0x56;
      }
      puVar16 = (undefined8 *)(lVar8 + 0x10);
      *puVar16 = ppuVar9;
      *(undefined1 *)(lVar8 + 0x18) = uVar11;
      *(ushort *)(lVar8 + 0x19) = *(ushort *)(lVar8 + 0x19) & 0xf000 | 0x540;
      *(long *)(lVar8 + 0x20) = lVar4;
      plVar14 = (long *)param_1[3];
      if (plVar14 == (long *)param_1[4]) goto LAB_001334d0;
LAB_00133564:
      param_1[3] = (long)(plVar14 + 1);
      *plVar14 = (long)puVar16;
      psVar6 = (short *)*param_1;
      psVar12 = (short *)param_1[1];
      if (psVar6 != psVar12) {
LAB_001335d0:
        if ((char)*psVar6 == 'E') {
          *param_1 = (long)((long)psVar6 + 1);
          auVar20 = FUN_0012ce20(param_1,lVar2 - lVar10 >> 3);
          pvVar15 = (void *)param_1[0x266];
          lVar10 = *(long *)((long)pvVar15 + 8);
          puVar16 = (undefined8 *)pvVar15;
          if (lVar10 - 0xfc0U < 0xfffffffffffff010) {
            puVar16 = (undefined8 *)malloc(0x1000);
            if (puVar16 == (undefined8 *)0x0) {
LAB_00133670:
                    /* WARNING: Subroutine does not return */
              std::terminate();
            }
            lVar10 = 0;
            *puVar16 = pvVar15;
            puVar16[1] = 0;
            param_1[0x266] = (long)puVar16;
          }
          *(long *)((long)puVar16 + 8) = lVar10 + 0x30;
          puVar13 = (undefined8 *)((long)puVar16 + lVar10 + 0x10);
          *puVar13 = &PTR_FUN_0014f728;
          *(undefined1 *)((long)puVar16 + lVar10 + 0x18) = 0x53;
          *(undefined1 (*) [16])((long)puVar16 + lVar10 + 0x30) = auVar20;
          *(undefined1 (*) [16])((long)puVar16 + lVar10 + 0x20) = auVar19;
          *(ushort *)((long)puVar16 + lVar10 + 0x19) =
               *(ushort *)((long)puVar16 + lVar10 + 0x19) & 0xf000 | 0x540;
          return puVar13;
        }
      }
    }
    if (psVar6 == psVar12) {
      return (undefined8 *)0x0;
    }
  } while( true );
}


// ===== 00133680  FUN_00133680 =====

undefined8 * FUN_00133680(long *param_1)

{
  long *__src;
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *__ptr;
  void *pvVar6;
  byte *pbVar7;
  long lVar8;
  long lVar9;
  byte *pbVar10;
  byte *pbVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined1 uVar14;
  byte *pbVar15;
  size_t __n;
  long lVar16;
  byte *pbVar17;
  undefined1 auVar18 [16];
  
  puVar3 = (undefined8 *)FUN_0012acb8();
  puVar4 = puVar3;
  if ((puVar3 != (undefined8 *)0x0) &&
     (puVar4 = (undefined8 *)FUN_0012ff04(param_1), puVar4 != (undefined8 *)0x0)) {
    pbVar17 = (byte *)*param_1;
    pbVar7 = (byte *)param_1[1];
    pbVar15 = pbVar17;
    if ((pbVar17 != pbVar7) && (*pbVar17 == 0x6e)) {
      pbVar15 = pbVar17 + 1;
      *param_1 = (long)pbVar15;
    }
    if (pbVar7 != pbVar15) {
      if (*pbVar15 - 0x3a < 0xfffffff6) {
        pbVar17 = (byte *)0x0;
        lVar12 = 0;
      }
      else {
        do {
          pbVar10 = pbVar15;
          if (*pbVar15 - 0x3a < 0xfffffff6) break;
          pbVar15 = pbVar15 + 1;
          *param_1 = (long)pbVar15;
          pbVar10 = pbVar7;
        } while (pbVar15 != pbVar7);
        lVar12 = (long)pbVar10 - (long)pbVar17;
        pbVar15 = pbVar10;
      }
      if (pbVar15 != pbVar7) {
        lVar9 = param_1[2];
        lVar2 = param_1[3];
        __src = param_1 + 5;
LAB_00133788:
        do {
          if (*pbVar15 != 0x5f) {
            if ((pbVar15 == pbVar7) || (*pbVar15 != 0x70)) {
              uVar14 = 0;
            }
            else {
              pbVar15 = pbVar15 + 1;
              uVar14 = 1;
              *param_1 = (long)pbVar15;
            }
            if ((pbVar15 != pbVar7) && (*pbVar15 == 0x45)) {
              *param_1 = (long)(pbVar15 + 1);
              auVar18 = FUN_0012ce20(param_1,lVar2 - lVar9 >> 3);
              pvVar6 = (void *)param_1[0x266];
              lVar9 = *(long *)((long)pvVar6 + 8);
              puVar13 = (undefined8 *)pvVar6;
              if (lVar9 - 4000U < 0xfffffffffffff010) {
                puVar13 = (undefined8 *)malloc(0x1000);
                if (puVar13 == (undefined8 *)0x0) goto LAB_001339e4;
                lVar9 = 0;
                *puVar13 = pvVar6;
                puVar13[1] = 0;
                param_1[0x266] = (long)puVar13;
              }
              *(long *)((long)puVar13 + 8) = lVar9 + 0x50;
              puVar5 = (undefined8 *)((long)puVar13 + lVar9 + 0x10);
              *puVar5 = &PTR_FUN_0014f798;
              *(undefined1 *)((long)puVar13 + lVar9 + 0x18) = 0x3b;
              *(undefined1 (*) [16])((long)puVar13 + lVar9 + 0x40) = auVar18;
              *(undefined1 *)((long)puVar13 + lVar9 + 0x50) = uVar14;
              *(ushort *)((long)puVar13 + lVar9 + 0x19) =
                   *(ushort *)((long)puVar13 + lVar9 + 0x19) & 0xf000 | 0x540;
              *(undefined8 **)((long)puVar13 + lVar9 + 0x20) = puVar3;
              *(undefined8 **)((long)puVar13 + lVar9 + 0x28) = puVar4;
              *(byte **)((long)puVar13 + lVar9 + 0x30) = pbVar17;
              *(long *)((long)puVar13 + lVar9 + 0x38) = lVar12;
              return puVar5;
            }
            break;
          }
          pbVar15 = pbVar15 + 1;
          *param_1 = (long)pbVar15;
          if ((pbVar7 == pbVar15) || (pbVar10 = pbVar15, *pbVar15 - 0x3a < 0xfffffff6)) {
            pbVar15 = (byte *)0x0;
            lVar16 = 0;
            puVar13 = (undefined8 *)param_1[0x266];
            lVar8 = puVar13[1];
          }
          else {
            do {
              pbVar11 = pbVar10;
              if (*pbVar10 - 0x3a < 0xfffffff6) break;
              pbVar10 = pbVar10 + 1;
              *param_1 = (long)pbVar10;
              pbVar11 = pbVar7;
            } while (pbVar10 != pbVar7);
            lVar16 = (long)pbVar11 - (long)pbVar15;
            puVar13 = (undefined8 *)param_1[0x266];
            lVar8 = puVar13[1];
          }
          puVar5 = puVar13;
          if (lVar8 - 0xfd0U < 0xfffffffffffff010) {
            puVar5 = (undefined8 *)malloc(0x1000);
            if (puVar5 == (undefined8 *)0x0) {
LAB_001339e4:
                    /* WARNING: Subroutine does not return */
              std::terminate();
            }
            lVar8 = 0;
            *puVar5 = puVar13;
            puVar5[1] = 0;
            param_1[0x266] = (long)puVar5;
          }
          puVar5[1] = lVar8 + 0x20;
          puVar13 = (undefined8 *)((long)puVar5 + lVar8 + 0x10);
          *puVar13 = &PTR_FUN_0014e158;
          *(byte **)((long)puVar5 + lVar8 + 0x20) = pbVar15;
          *(long *)((long)puVar5 + lVar8 + 0x28) = lVar16;
          *(undefined1 *)((long)puVar5 + lVar8 + 0x18) = 8;
          *(ushort *)((long)puVar5 + lVar8 + 0x19) =
               *(ushort *)((long)puVar5 + lVar8 + 0x19) & 0xf000 | 0x540;
          plVar1 = (long *)param_1[3];
          if (plVar1 != (long *)param_1[4]) {
            param_1[3] = (long)(plVar1 + 1);
            *plVar1 = (long)puVar13;
            pbVar15 = (byte *)*param_1;
            pbVar7 = (byte *)param_1[1];
            if (pbVar15 == pbVar7) break;
            goto LAB_00133788;
          }
          __ptr = (long *)param_1[2];
          __n = (long)plVar1 - (long)__ptr;
          if (__ptr == __src) {
            pvVar6 = malloc(__n * 2);
            if (pvVar6 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            if (plVar1 != __src) {
              memcpy(pvVar6,__src,__n);
            }
            param_1[2] = (long)pvVar6;
          }
          else {
            pvVar6 = realloc(__ptr,__n * 2);
            param_1[2] = (long)pvVar6;
            if (pvVar6 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
          }
          param_1[3] = (long)((undefined8 *)((long)pvVar6 + __n) + 1);
          param_1[4] = (long)((long)pvVar6 + ((long)__n >> 2) * 8);
          *(undefined8 *)((long)pvVar6 + __n) = puVar13;
          pbVar15 = (byte *)*param_1;
          pbVar7 = (byte *)param_1[1];
        } while (pbVar15 != pbVar7);
      }
    }
    puVar4 = (undefined8 *)0x0;
  }
  return puVar4;
}


// ===== 001339f0  FUN_001339f0 =====

void FUN_001339f0(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
  
  pvVar4 = *(void **)(param_1 + 0x1330);
  lVar2 = *(long *)((long)pvVar4 + 8);
  puVar1 = (undefined8 *)pvVar4;
  if (lVar2 - 0xfd0U < 0xfffffffffffff010) {
    puVar1 = (undefined8 *)malloc(0x1000);
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar2 = 0;
    *puVar1 = pvVar4;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar2 + 0x20;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0014f3a8;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x2a;
  uVar3 = *param_2;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar3;
  return;
}


// ===== 00133a90  FUN_00133a90 =====

void FUN_00133a90(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
  
  pvVar4 = *(void **)(param_1 + 0x1330);
  lVar2 = *(long *)((long)pvVar4 + 8);
  puVar1 = (undefined8 *)pvVar4;
  if (lVar2 - 0xfd0U < 0xfffffffffffff010) {
    puVar1 = (undefined8 *)malloc(0x1000);
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar2 = 0;
    *puVar1 = pvVar4;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar2 + 0x20;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0014f808;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x3e;
  uVar3 = *param_2;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar3;
  return;
}


// ===== 00133b30  FUN_00133b30 =====

void FUN_00133b30(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
  
  pvVar4 = *(void **)(param_1 + 0x1330);
  lVar2 = *(long *)((long)pvVar4 + 8);
  puVar1 = (undefined8 *)pvVar4;
  if (lVar2 - 0xfb0U < 0xfffffffffffff010) {
    puVar1 = (undefined8 *)malloc(0x1000);
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar2 = 0;
    *puVar1 = pvVar4;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar2 + 0x40;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0014eb58;
  uVar3 = *param_2;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x3c;
  *(char **)((long)puVar1 + lVar2 + 0x20) = "sizeof... ";
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = 10;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x38) = 0;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x40) = 0;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x30) = uVar3;
  return;
}


// ===== 00133be4  FUN_00133be4 =====

void FUN_00133be4(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  pvVar3 = *(void **)(param_1 + 0x1330);
  lVar2 = *(long *)((long)pvVar3 + 8);
  puVar1 = (undefined8 *)pvVar3;
  if (lVar2 - 0xfd0U < 0xfffffffffffff010) {
    puVar1 = (undefined8 *)malloc(0x1000);
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar2 = 0;
    *puVar1 = pvVar3;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar2 + 0x20;
  uVar5 = param_2[1];
  uVar4 = *param_2;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0014f878;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = uVar5;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar4;
  return;
}


// ===== 00133c80  FUN_00133c80 =====

void FUN_00133c80(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  pvVar4 = *(void **)(param_1 + 0x1330);
  lVar2 = *(long *)((long)pvVar4 + 8);
  puVar1 = (undefined8 *)pvVar4;
  if (lVar2 - 0xfc0U < 0xfffffffffffff010) {
    puVar1 = (undefined8 *)malloc(0x1000);
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar2 = 0;
    *puVar1 = pvVar4;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar2 + 0x30;
  uVar3 = *param_2;
  uVar6 = param_3[1];
  uVar5 = *param_3;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0014f4f8;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x46;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar3;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x30) = uVar6;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = uVar5;
  return;
}


// ===== 00133d2c  FUN_00133d2c =====

undefined8 * FUN_00133d2c(long param_1,char *param_2)

{
  undefined8 *puVar1;
  size_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  void *pvVar5;
  
  pvVar5 = *(void **)(param_1 + 0x1330);
  lVar3 = *(long *)((long)pvVar5 + 8);
  puVar1 = (undefined8 *)pvVar5;
  if (lVar3 - 0xfd0U < 0xfffffffffffff010) {
    puVar1 = (undefined8 *)malloc(0x1000);
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar3 = 0;
    *puVar1 = pvVar5;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar3 + 0x20;
  sVar2 = strlen(param_2);
  puVar4 = (undefined8 *)((long)puVar1 + lVar3 + 0x10);
  *puVar4 = &PTR_FUN_0014e158;
  *(undefined1 *)((long)puVar1 + lVar3 + 0x18) = 8;
  *(char **)((long)puVar1 + lVar3 + 0x20) = param_2;
  *(size_t *)((long)puVar1 + lVar3 + 0x28) = sVar2;
  *(ushort *)((long)puVar1 + lVar3 + 0x19) =
       *(ushort *)((long)puVar1 + lVar3 + 0x19) & 0xf000 | 0x540;
  return puVar4;
}


// ===== 00133dd4  FUN_00133dd4 =====

void FUN_00133dd4(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
  
  pvVar4 = *(void **)(param_1 + 0x1330);
  lVar2 = *(long *)((long)pvVar4 + 8);
  puVar1 = (undefined8 *)pvVar4;
  if (lVar2 - 0xfd0U < 0xfffffffffffff010) {
    puVar1 = (undefined8 *)malloc(0x1000);
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar2 = 0;
    *puVar1 = pvVar4;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar2 + 0x20;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0014f8e8;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x48;
  uVar3 = *param_2;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar3;
  return;
}


// ===== 00133e74  FUN_00133e74 =====

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_00133e74(long *param_1,ulong param_2)

{
  byte *pbVar1;
  short *psVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  char *pcVar8;
  long lVar9;
  ulong uVar10;
  void *pvVar11;
  undefined8 *local_68;
  undefined8 *local_48;
  
  psVar2 = (short *)*param_1;
  uVar10 = param_1[1] - (long)psVar2;
  if (uVar10 < 3) {
    if (uVar10 == 2) goto LAB_00133ed8;
  }
  else {
    if (*psVar2 == 0x7273 && (char)psVar2[1] == 'N') {
      *param_1 = (long)psVar2 + 3;
      puVar4 = (undefined8 *)FUN_0013b36c(param_1);
      if (puVar4 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      puVar3 = puVar4;
      if (((char *)param_1[1] != (char *)*param_1) && (*(char *)*param_1 == 'I')) {
        lVar6 = FUN_0012e5c4(param_1,0);
        if (lVar6 == 0) {
          return (undefined8 *)0x0;
        }
        pvVar11 = (void *)param_1[0x266];
        lVar9 = *(long *)((long)pvVar11 + 8);
        puVar7 = (undefined8 *)pvVar11;
        if (lVar9 - 0xfd0U < 0xfffffffffffff010) {
          puVar7 = (undefined8 *)malloc(0x1000);
          if (puVar7 == (undefined8 *)0x0) goto LAB_0013441c;
          lVar9 = 0;
          *puVar7 = pvVar11;
          puVar7[1] = 0;
          param_1[0x266] = (long)puVar7;
        }
        *(long *)((long)puVar7 + 8) = lVar9 + 0x20;
        puVar3 = (undefined8 *)((long)puVar7 + lVar9 + 0x10);
        *puVar3 = &PTR_FUN_00150058;
        *(undefined8 **)((long)puVar7 + lVar9 + 0x20) = puVar4;
        *(long *)((long)puVar7 + lVar9 + 0x28) = lVar6;
        *(undefined1 *)((long)puVar7 + lVar9 + 0x18) = 0x2d;
        *(ushort *)((long)puVar7 + lVar9 + 0x19) =
             *(ushort *)((long)puVar7 + lVar9 + 0x19) & 0xf000 | 0x540;
      }
      while ((pcVar8 = (char *)*param_1, pcVar8 == (char *)param_1[1] || (*pcVar8 != 'E'))) {
        lVar6 = FUN_0013b4f0(param_1);
        if (lVar6 == 0) {
          return (undefined8 *)0x0;
        }
        pvVar11 = (void *)param_1[0x266];
        lVar9 = *(long *)((long)pvVar11 + 8);
        puVar4 = (undefined8 *)pvVar11;
        if (lVar9 - 0xfd0U < 0xfffffffffffff010) {
          puVar4 = (undefined8 *)malloc(0x1000);
          if (puVar4 == (undefined8 *)0x0) goto LAB_0013441c;
          lVar9 = 0;
          *puVar4 = pvVar11;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        *(long *)((long)puVar4 + 8) = lVar9 + 0x20;
        puVar7 = (undefined8 *)((long)puVar4 + lVar9 + 0x10);
        *puVar7 = &PTR_FUN_0014f958;
        *(undefined1 *)((long)puVar4 + lVar9 + 0x18) = 0x17;
        *(undefined8 **)((long)puVar4 + lVar9 + 0x20) = puVar3;
        *(long *)((long)puVar4 + lVar9 + 0x28) = lVar6;
        *(ushort *)((long)puVar4 + lVar9 + 0x19) =
             *(ushort *)((long)puVar4 + lVar9 + 0x19) & 0xf000 | 0x540;
        puVar3 = puVar7;
      }
      *param_1 = (long)(pcVar8 + 1);
      lVar6 = FUN_0013b5c8(param_1);
      if (lVar6 == 0) {
        return (undefined8 *)0x0;
      }
      pvVar11 = (void *)param_1[0x266];
      lVar9 = *(long *)((long)pvVar11 + 8);
      puVar4 = (undefined8 *)pvVar11;
      if (lVar9 - 0xfd0U < 0xfffffffffffff010) {
        puVar4 = (undefined8 *)malloc(0x1000);
        if (puVar4 == (undefined8 *)0x0) goto LAB_0013441c;
        lVar9 = 0;
        *puVar4 = pvVar11;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      *(long *)((long)puVar4 + 8) = lVar9 + 0x20;
      puVar4 = (undefined8 *)((long)puVar4 + lVar9 + 0x10);
      *puVar4 = &PTR_FUN_0014f958;
      goto LAB_001343d8;
    }
LAB_00133ed8:
    if (*psVar2 == 0x7273) {
      pbVar1 = (byte *)(psVar2 + 1);
      *param_1 = (long)pbVar1;
      if (((byte *)param_1[1] != pbVar1) && (0xfffffff5 < *pbVar1 - 0x3a)) {
        puVar3 = (undefined8 *)FUN_0013b4f0(param_1);
        if (puVar3 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        if ((param_2 & 1) == 0) {
          puVar4 = (undefined8 *)0x0;
          do {
            if (puVar4 == (undefined8 *)0x0) {
              pcVar8 = (char *)*param_1;
              puVar7 = puVar3;
              if (pcVar8 != (char *)param_1[1]) goto LAB_0013436c;
            }
            else {
              pvVar11 = (void *)param_1[0x266];
              lVar6 = *(long *)((long)pvVar11 + 8);
              puVar5 = (undefined8 *)pvVar11;
              if (lVar6 - 0xfd0U < 0xfffffffffffff010) {
                puVar5 = (undefined8 *)malloc(0x1000);
                if (puVar5 == (undefined8 *)0x0) goto LAB_0013441c;
                lVar6 = 0;
                *puVar5 = pvVar11;
                puVar5[1] = 0;
                param_1[0x266] = (long)puVar5;
              }
              *(long *)((long)puVar5 + 8) = lVar6 + 0x20;
              puVar7 = (undefined8 *)((long)puVar5 + lVar6 + 0x10);
              *puVar7 = &PTR_FUN_0014f958;
              *(undefined8 **)((long)puVar5 + lVar6 + 0x20) = puVar4;
              *(undefined8 **)((long)puVar5 + lVar6 + 0x28) = puVar3;
              *(undefined1 *)((long)puVar5 + lVar6 + 0x18) = 0x17;
              *(ushort *)((long)puVar5 + lVar6 + 0x19) =
                   *(ushort *)((long)puVar5 + lVar6 + 0x19) & 0xf000 | 0x540;
              pcVar8 = (char *)*param_1;
              puVar3 = puVar7;
              if (pcVar8 != (char *)param_1[1]) {
LAB_0013436c:
                puVar7 = puVar3;
                if (*pcVar8 == 'E') goto LAB_00134378;
              }
            }
            puVar3 = (undefined8 *)FUN_0013b4f0(param_1);
            puVar4 = puVar7;
            if (puVar3 == (undefined8 *)0x0) {
              return (undefined8 *)0x0;
            }
          } while( true );
        }
        puVar4 = (undefined8 *)0x0;
        puVar7 = puVar3;
        do {
          puVar3 = (undefined8 *)param_1[0x266];
          lVar6 = puVar3[1];
          if (puVar4 == (undefined8 *)0x0) {
            puVar4 = puVar3;
            if (lVar6 - 0xfd0U < 0xfffffffffffff010) {
              puVar4 = (undefined8 *)malloc(0x1000);
              if (puVar4 == (undefined8 *)0x0) goto LAB_0013441c;
              lVar6 = 0;
              *puVar4 = puVar3;
              puVar4[1] = 0;
              param_1[0x266] = (long)puVar4;
            }
            puVar4[1] = lVar6 + 0x20;
            puVar3 = (undefined8 *)((long)puVar4 + lVar6 + 0x10);
            *puVar3 = &PTR_FUN_0014fb18;
            *(undefined1 *)((long)puVar4 + lVar6 + 0x18) = 0x2e;
            *(ushort *)((long)puVar4 + lVar6 + 0x19) =
                 *(ushort *)((long)puVar4 + lVar6 + 0x19) & 0xf000 | 0x540;
            *(undefined8 **)((long)puVar4 + lVar6 + 0x20) = puVar7;
            pcVar8 = (char *)*param_1;
            if (pcVar8 != (char *)param_1[1]) {
LAB_00134254:
              if (*pcVar8 == 'E') goto LAB_00134378;
            }
          }
          else {
            puVar5 = puVar3;
            if (lVar6 - 0xfd0U < 0xfffffffffffff010) {
              puVar5 = (undefined8 *)malloc(0x1000);
              if (puVar5 == (undefined8 *)0x0) goto LAB_0013441c;
              lVar6 = 0;
              *puVar5 = puVar3;
              puVar5[1] = 0;
              param_1[0x266] = (long)puVar5;
            }
            puVar5[1] = lVar6 + 0x20;
            puVar3 = (undefined8 *)((long)puVar5 + lVar6 + 0x10);
            *puVar3 = &PTR_FUN_0014f958;
            *(undefined1 *)((long)puVar5 + lVar6 + 0x18) = 0x17;
            *(undefined8 **)((long)puVar5 + lVar6 + 0x20) = puVar4;
            *(ushort *)((long)puVar5 + lVar6 + 0x19) =
                 *(ushort *)((long)puVar5 + lVar6 + 0x19) & 0xf000 | 0x540;
            *(undefined8 **)((long)puVar5 + lVar6 + 0x28) = puVar7;
            pcVar8 = (char *)*param_1;
            if (pcVar8 != (char *)param_1[1]) goto LAB_00134254;
          }
          puVar7 = (undefined8 *)FUN_0013b4f0(param_1);
          puVar4 = puVar3;
          if (puVar7 == (undefined8 *)0x0) {
            return (undefined8 *)0x0;
          }
        } while( true );
      }
      puVar3 = (undefined8 *)FUN_0013b36c(param_1);
      if (puVar3 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      local_48 = puVar3;
      if (((char *)param_1[1] != (char *)*param_1) && (*(char *)*param_1 == 'I')) {
        local_68 = (undefined8 *)FUN_0012e5c4(param_1,0);
        if (local_68 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        puVar3 = (undefined8 *)FUN_0012eb60(param_1,&local_48,&local_68);
      }
      goto LAB_00134380;
    }
  }
  puVar3 = (undefined8 *)FUN_0013b5c8(param_1);
  if (puVar3 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  if ((param_2 & 1) == 0) {
    return puVar3;
  }
  pvVar11 = (void *)param_1[0x266];
  lVar6 = *(long *)((long)pvVar11 + 8);
  puVar4 = (undefined8 *)pvVar11;
  if (lVar6 - 0xfd0U < 0xfffffffffffff010) {
    puVar4 = (undefined8 *)malloc(0x1000);
    if (puVar4 == (undefined8 *)0x0) {
LAB_0013441c:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar6 = 0;
    *puVar4 = pvVar11;
    puVar4[1] = 0;
    param_1[0x266] = (long)puVar4;
  }
  *(long *)((long)puVar4 + 8) = lVar6 + 0x20;
  puVar7 = (undefined8 *)((long)puVar4 + lVar6 + 0x10);
  *puVar7 = &PTR_FUN_0014fb18;
  *(undefined8 **)((long)puVar4 + lVar6 + 0x20) = puVar3;
  *(undefined1 *)((long)puVar4 + lVar6 + 0x18) = 0x2e;
  *(ushort *)((long)puVar4 + lVar6 + 0x19) =
       *(ushort *)((long)puVar4 + lVar6 + 0x19) & 0xf000 | 0x540;
  return puVar7;
LAB_00134378:
  *param_1 = (long)(pcVar8 + 1);
LAB_00134380:
  lVar6 = FUN_0013b5c8(param_1);
  if (lVar6 == 0) {
    return (undefined8 *)0x0;
  }
  pvVar11 = (void *)param_1[0x266];
  lVar9 = *(long *)((long)pvVar11 + 8);
  puVar4 = (undefined8 *)pvVar11;
  if (lVar9 - 0xfd0U < 0xfffffffffffff010) {
    puVar4 = (undefined8 *)malloc(0x1000);
    if (puVar4 == (undefined8 *)0x0) goto LAB_0013441c;
    lVar9 = 0;
    *puVar4 = pvVar11;
    puVar4[1] = 0;
    param_1[0x266] = (long)puVar4;
  }
  *(long *)((long)puVar4 + 8) = lVar9 + 0x20;
  puVar4 = (undefined8 *)((long)puVar4 + lVar9 + 0x10);
  *puVar4 = &PTR_FUN_0014f958;
LAB_001343d8:
  *(undefined1 *)(puVar4 + 1) = 0x17;
  puVar4[2] = puVar3;
  puVar4[3] = lVar6;
  *(ushort *)((long)puVar4 + 9) = *(ushort *)((long)puVar4 + 9) & 0xf000 | 0x540;
  return puVar4;
}


// ===== 00134420  FUN_00134420 =====

void FUN_00134420(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 ushort *param_5)

{
  ushort uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *pvVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  pvVar6 = *(void **)(param_1 + 0x1330);
  lVar3 = *(long *)((long)pvVar6 + 8);
  puVar2 = (undefined8 *)pvVar6;
  if (lVar3 - 0xfc0U < 0xfffffffffffff010) {
    puVar2 = (undefined8 *)malloc(0x1000);
    if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar3 = 0;
    *puVar2 = pvVar6;
    puVar2[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar2;
  }
  *(long *)((long)puVar2 + 8) = lVar3 + 0x30;
  uVar8 = param_3[1];
  uVar7 = *param_3;
  *(undefined ***)((long)puVar2 + lVar3 + 0x10) = &PTR_FUN_0014e688;
  uVar1 = *param_5;
  uVar5 = *param_2;
  *(undefined1 *)((long)puVar2 + lVar3 + 0x18) = 0x36;
  uVar4 = *param_4;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x20) = uVar5;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x30) = uVar8;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x28) = uVar7;
  *(ushort *)((long)puVar2 + lVar3 + 0x19) =
       *(ushort *)((long)puVar2 + lVar3 + 0x19) & 0xf000 | uVar1 & 0x3f | 0x540;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x38) = uVar4;
  return;
}


// ===== 001344ec  FUN_001344ec =====

void FUN_001344ec(long param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  void *pvVar5;
  undefined8 uVar6;
  size_t __size;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  size_t sVar10;
  char *__src;
  
  if (*(int *)(param_2 + 4) == 0) {
    if (*(long *)(param_1 + 0x20) == 2) {
      if (**(short **)(param_1 + 0x18) == 0x3e3e) goto LAB_00134750;
      goto LAB_00134514;
    }
    if ((*(long *)(param_1 + 0x20) != 1) || ((char)**(short **)(param_1 + 0x18) != '>'))
    goto LAB_00134514;
LAB_00134750:
    lVar7 = param_2[1];
    pvVar5 = (void *)*param_2;
    *(undefined4 *)(param_2 + 4) = 1;
    uVar9 = lVar7 + 1;
    if ((ulong)param_2[2] < uVar9) {
      sVar10 = param_2[2] * 2;
      uVar9 = lVar7 + 0x3e1;
      if (sVar10 < uVar9 || sVar10 - uVar9 == 0) {
        sVar10 = uVar9;
      }
      param_2[2] = sVar10;
      pvVar5 = realloc(pvVar5,sVar10);
      *param_2 = pvVar5;
      if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar7 = param_2[1];
      uVar9 = lVar7 + 1;
    }
    bVar3 = true;
    param_2[1] = uVar9;
    *(undefined1 *)((long)pvVar5 + lVar7) = 0x28;
  }
  else {
LAB_00134514:
    bVar3 = false;
  }
  uVar2 = (uint)*(ushort *)(param_1 + 9) << 10;
  bVar4 = (uVar2 & 0xfc00) != 0x4400;
  iVar1 = 0xf;
  if (bVar4) {
    iVar1 = (int)((uint)*(ushort *)(param_1 + 9) << 0x1a) >> 0x1a;
  }
  FUN_001347c4(*(undefined8 *)(param_1 + 0x10),param_2,iVar1,bVar4);
  if ((*(long *)(param_1 + 0x20) == 1) && (__src = *(char **)(param_1 + 0x18), *__src == ',')) {
    sVar10 = 1;
    lVar7 = param_2[1];
    uVar8 = param_2[2];
    pvVar5 = (void *)*param_2;
    uVar9 = lVar7 + 1;
    if (uVar8 < uVar9) {
LAB_001345ec:
      __size = uVar8 * 2;
      uVar9 = uVar9 + 0x3e0;
      if (__size < uVar9 || __size - uVar9 == 0) {
        __size = uVar9;
      }
      param_2[2] = __size;
      pvVar5 = realloc(pvVar5,__size);
      *param_2 = pvVar5;
      if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar7 = param_2[1];
    }
LAB_00134610:
    memcpy((void *)((long)pvVar5 + lVar7),__src,sVar10);
    uVar9 = param_2[2];
    lVar7 = param_2[1] + sVar10;
    param_2[1] = lVar7;
    pvVar5 = (void *)*param_2;
    if (lVar7 + 1U <= uVar9) goto LAB_0013469c;
  }
  else {
    lVar7 = param_2[1];
    pvVar5 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar7 + 1U) {
      sVar10 = param_2[2] * 2;
      uVar9 = lVar7 + 0x3e1;
      if (sVar10 < uVar9 || sVar10 - uVar9 == 0) {
        sVar10 = uVar9;
      }
      param_2[2] = sVar10;
      pvVar5 = realloc(pvVar5,sVar10);
      *param_2 = pvVar5;
      if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar7 = param_2[1];
    }
    *(undefined1 *)((long)pvVar5 + lVar7) = 0x20;
    param_2[1] = param_2[1] + 1;
    sVar10 = *(size_t *)(param_1 + 0x20);
    if (sVar10 != 0) {
      __src = *(char **)(param_1 + 0x18);
      lVar7 = param_2[1];
      uVar8 = param_2[2];
      pvVar5 = (void *)*param_2;
      uVar9 = lVar7 + sVar10;
      if (uVar8 < uVar9) goto LAB_001345ec;
      goto LAB_00134610;
    }
    lVar7 = param_2[1];
    uVar9 = param_2[2];
    pvVar5 = (void *)*param_2;
    if (lVar7 + 1U <= uVar9) goto LAB_0013469c;
  }
  sVar10 = uVar9 * 2;
  uVar9 = lVar7 + 0x3e1;
  if (sVar10 < uVar9 || sVar10 - uVar9 == 0) {
    sVar10 = uVar9;
  }
  param_2[2] = sVar10;
  pvVar5 = realloc(pvVar5,sVar10);
  *param_2 = pvVar5;
  if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar7 = param_2[1];
LAB_0013469c:
  *(undefined1 *)((long)pvVar5 + lVar7) = 0x20;
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  param_2[1] = param_2[1] + 1;
  FUN_001347c4(uVar6,param_2,(int)((uint)*(ushort *)(param_1 + 9) << 0x1a) >> 0x1a,
               (uVar2 & 0xffff) == 0x4400);
  if (bVar3) {
    lVar7 = param_2[1];
    pvVar5 = (void *)*param_2;
    uVar9 = lVar7 + 1;
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
    if ((ulong)param_2[2] < uVar9) {
      sVar10 = param_2[2] * 2;
      uVar9 = lVar7 + 0x3e1;
      if (sVar10 < uVar9 || sVar10 - uVar9 == 0) {
        sVar10 = uVar9;
      }
      param_2[2] = sVar10;
      pvVar5 = realloc(pvVar5,sVar10);
      *param_2 = pvVar5;
      if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar7 = param_2[1];
      uVar9 = lVar7 + 1;
    }
    param_2[1] = uVar9;
    *(undefined1 *)((long)pvVar5 + lVar7) = 0x29;
  }
  return;
}


// ===== 001347bc  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 001347c4  FUN_001347c4 =====

void FUN_001347c4(long *param_1,undefined8 *param_2,int param_3,uint param_4)

{
  void *pvVar1;
  long lVar2;
  size_t sVar3;
  long lVar4;
  ulong uVar5;
  
  if ((uint)((int)((uint)*(ushort *)((long)param_1 + 9) << 0x1a) >> 0x1a) < (param_4 & 1) + param_3)
  {
    (**(code **)(*param_1 + 0x20))(param_1,param_2);
    if ((*(ushort *)((long)param_1 + 9) & 0xc0) != 0x40) {
                    /* WARNING: Could not recover jumptable at 0x00134834. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x28))(param_1,param_2);
      return;
    }
  }
  else {
    lVar2 = param_2[1];
    pvVar1 = (void *)*param_2;
    uVar5 = lVar2 + 1;
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
    if ((ulong)param_2[2] < uVar5) {
      sVar3 = param_2[2] * 2;
      uVar5 = lVar2 + 0x3e1;
      if (sVar3 < uVar5 || sVar3 - uVar5 == 0) {
        sVar3 = uVar5;
      }
      param_2[2] = sVar3;
      pvVar1 = realloc(pvVar1,sVar3);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar2 = param_2[1];
      uVar5 = lVar2 + 1;
    }
    param_2[1] = uVar5;
    lVar4 = *param_1;
    *(undefined1 *)((long)pvVar1 + lVar2) = 0x28;
    (**(code **)(lVar4 + 0x20))(param_1,param_2);
    if ((*(ushort *)((long)param_1 + 9) & 0xc0) != 0x40) {
      (**(code **)(*param_1 + 0x28))(param_1,param_2);
    }
    lVar2 = param_2[1];
    pvVar1 = (void *)*param_2;
    uVar5 = lVar2 + 1;
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
    if ((ulong)param_2[2] < uVar5) {
      sVar3 = param_2[2] * 2;
      uVar5 = lVar2 + 0x3e1;
      if (sVar3 < uVar5 || sVar3 - uVar5 == 0) {
        sVar3 = uVar5;
      }
      param_2[2] = sVar3;
      pvVar1 = realloc(pvVar1,sVar3);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar2 = param_2[1];
      uVar5 = lVar2 + 1;
    }
    param_2[1] = uVar5;
    *(undefined1 *)((long)pvVar1 + lVar2) = 0x29;
  }
  return;
}


// ===== 00134930  FUN_00134930 =====

void FUN_00134930(long param_1,undefined8 *param_2,undefined8 *param_3,ushort *param_4)

{
  ushort uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  pvVar5 = *(void **)(param_1 + 0x1330);
  lVar3 = *(long *)((long)pvVar5 + 8);
  puVar2 = (undefined8 *)pvVar5;
  if (lVar3 - 0xfc0U < 0xfffffffffffff010) {
    puVar2 = (undefined8 *)malloc(0x1000);
    if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar3 = 0;
    *puVar2 = pvVar5;
    puVar2[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar2;
  }
  *(long *)((long)puVar2 + 8) = lVar3 + 0x30;
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *(undefined ***)((long)puVar2 + lVar3 + 0x10) = &PTR_FUN_0014e6f8;
  uVar1 = *param_4;
  *(undefined1 *)((long)puVar2 + lVar3 + 0x18) = 0x42;
  uVar4 = *param_3;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x28) = uVar7;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x20) = uVar6;
  *(ushort *)((long)puVar2 + lVar3 + 0x19) =
       *(ushort *)((long)puVar2 + lVar3 + 0x19) & 0xf000 | uVar1 & 0x3f | 0x540;
  *(undefined8 *)((long)puVar2 + lVar3 + 0x30) = uVar4;
  return;
}


// ===== 001349f0  FUN_001349f0 =====

void FUN_001349f0(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *__ptr;
  size_t __size;
  long lVar2;
  size_t __n;
  void *__src;
  
  __n = *(size_t *)(param_1 + 0x18);
  if (__n != 0) {
    lVar2 = param_2[1];
    __ptr = (void *)*param_2;
    __src = *(void **)(param_1 + 0x10);
    if ((ulong)param_2[2] < lVar2 + __n) {
      __size = param_2[2] * 2;
      uVar1 = lVar2 + __n + 0x3e0;
      if (__size < uVar1 || __size - uVar1 == 0) {
        __size = uVar1;
      }
      param_2[2] = __size;
      __ptr = realloc(__ptr,__size);
      *param_2 = __ptr;
      if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar2 = param_2[1];
    }
    memcpy((void *)((long)__ptr + lVar2),__src,__n);
    param_2[1] = param_2[1] + __n;
  }
  FUN_001347c4(*(undefined8 *)(param_1 + 0x20),param_2,
               (int)((uint)*(ushort *)(param_1 + 9) << 0x1a) >> 0x1a,0);
  return;
}


// ===== 00134a98  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00134aa0  FUN_00134aa0 =====

void FUN_00134aa0(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *__ptr;
  size_t __size;
  long lVar2;
  size_t __n;
  void *__src;
  
  FUN_001347c4(*(undefined8 *)(param_1 + 0x10),param_2,
               (int)((uint)*(ushort *)(param_1 + 9) << 0x1a) >> 0x1a,1);
  __n = *(size_t *)(param_1 + 0x20);
  if (__n != 0) {
    lVar2 = param_2[1];
    __ptr = (void *)*param_2;
    __src = *(void **)(param_1 + 0x18);
    if ((ulong)param_2[2] < lVar2 + __n) {
      __size = param_2[2] * 2;
      uVar1 = lVar2 + __n + 0x3e0;
      if (__size < uVar1 || __size - uVar1 == 0) {
        __size = uVar1;
      }
      param_2[2] = __size;
      __ptr = realloc(__ptr,__size);
      *param_2 = __ptr;
      if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar2 = param_2[1];
    }
    memcpy((void *)((long)__ptr + lVar2),__src,__n);
    param_2[1] = param_2[1] + __n;
  }
  return;
}


// ===== 00134b48  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00134b50  FUN_00134b50 =====

void FUN_00134b50(long param_1,undefined8 *param_2)

{
  void *pvVar1;
  long lVar2;
  size_t sVar3;
  ulong uVar4;
  
  FUN_001347c4(*(undefined8 *)(param_1 + 0x10),param_2,
               (int)((uint)*(ushort *)(param_1 + 9) << 0x1a) >> 0x1a,0);
  lVar2 = param_2[1];
  pvVar1 = (void *)*param_2;
  uVar4 = lVar2 + 1;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  if ((ulong)param_2[2] < uVar4) {
    sVar3 = param_2[2] * 2;
    uVar4 = lVar2 + 0x3e1;
    if (sVar3 < uVar4 || sVar3 - uVar4 == 0) {
      sVar3 = uVar4;
    }
    param_2[2] = sVar3;
    pvVar1 = realloc(pvVar1,sVar3);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = param_2[1];
    uVar4 = lVar2 + 1;
  }
  param_2[1] = uVar4;
  *(undefined1 *)((long)pvVar1 + lVar2) = 0x5b;
  FUN_001347c4(*(undefined8 *)(param_1 + 0x18),param_2,0x13,0);
  lVar2 = param_2[1];
  pvVar1 = (void *)*param_2;
  uVar4 = lVar2 + 1;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
  if ((ulong)param_2[2] < uVar4) {
    sVar3 = param_2[2] * 2;
    uVar4 = lVar2 + 0x3e1;
    if (sVar3 < uVar4 || sVar3 - uVar4 == 0) {
      sVar3 = uVar4;
    }
    param_2[2] = sVar3;
    pvVar1 = realloc(pvVar1,sVar3);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = param_2[1];
    uVar4 = lVar2 + 1;
  }
  param_2[1] = uVar4;
  *(undefined1 *)((long)pvVar1 + lVar2) = 0x5d;
  return;
}


// ===== 00134c50  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00134c58  FUN_00134c58 =====

void FUN_00134c58(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *__ptr;
  size_t __size;
  long lVar2;
  size_t __n;
  void *__src;
  
  FUN_001347c4(*(undefined8 *)(param_1 + 0x10),param_2,
               (int)((uint)*(ushort *)(param_1 + 9) << 0x1a) >> 0x1a,1);
  __n = *(size_t *)(param_1 + 0x20);
  if (__n != 0) {
    lVar2 = param_2[1];
    __ptr = (void *)*param_2;
    __src = *(void **)(param_1 + 0x18);
    if ((ulong)param_2[2] < lVar2 + __n) {
      __size = param_2[2] * 2;
      uVar1 = lVar2 + __n + 0x3e0;
      if (__size < uVar1 || __size - uVar1 == 0) {
        __size = uVar1;
      }
      param_2[2] = __size;
      __ptr = realloc(__ptr,__size);
      *param_2 = __ptr;
      if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar2 = param_2[1];
    }
    memcpy((void *)((long)__ptr + lVar2),__src,__n);
    param_2[1] = param_2[1] + __n;
  }
  FUN_001347c4(*(undefined8 *)(param_1 + 0x28),param_2,
               (int)((uint)*(ushort *)(param_1 + 9) << 0x1a) >> 0x1a,0);
  return;
}


// ===== 00134d14  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00134d1c  FUN_00134d1c =====

void FUN_00134d1c(long param_1,undefined8 *param_2)

{
  char cVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  size_t sVar7;
  long lVar8;
  long *plVar9;
  bool bVar10;
  
  lVar3 = param_2[1];
  if (*(char *)(param_1 + 0x38) != '\0') {
    pvVar2 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar3 + 2U) {
      sVar7 = param_2[2] * 2;
      uVar6 = lVar3 + 0x3e2;
      if (sVar7 < uVar6 || sVar7 - uVar6 == 0) {
        sVar7 = uVar6;
      }
      param_2[2] = sVar7;
      pvVar2 = realloc(pvVar2,sVar7);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar3 = param_2[1];
    }
    *(undefined2 *)((long)pvVar2 + lVar3) = 0x3a3a;
    lVar3 = param_2[1] + 2;
    param_2[1] = lVar3;
  }
  pvVar2 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar3 + 3U) {
    sVar7 = param_2[2] * 2;
    uVar6 = lVar3 + 0x3e3;
    if (sVar7 < uVar6 || sVar7 - uVar6 == 0) {
      sVar7 = uVar6;
    }
    param_2[2] = sVar7;
    pvVar2 = realloc(pvVar2,sVar7);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar3 = param_2[1];
  }
  *(undefined1 *)((undefined2 *)((long)pvVar2 + lVar3) + 1) = 0x77;
  *(undefined2 *)((long)pvVar2 + lVar3) = 0x656e;
  lVar8 = param_2[1];
  cVar1 = *(char *)(param_1 + 0x39);
  lVar3 = lVar8 + 3;
  param_2[1] = lVar3;
  if (cVar1 != '\0') {
    pvVar2 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar8 + 5U) {
      sVar7 = param_2[2] * 2;
      uVar6 = lVar8 + 0x3e5;
      if (sVar7 < uVar6 || sVar7 - uVar6 == 0) {
        sVar7 = uVar6;
      }
      param_2[2] = sVar7;
      pvVar2 = realloc(pvVar2,sVar7);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar3 = param_2[1];
    }
    *(undefined2 *)((long)pvVar2 + lVar3) = 0x5d5b;
    lVar3 = param_2[1] + 2;
    param_2[1] = lVar3;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar6 = lVar3 + 1;
    pvVar2 = (void *)*param_2;
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
    if ((ulong)param_2[2] < uVar6) {
      sVar7 = param_2[2] * 2;
      uVar6 = lVar3 + 0x3e1;
      if (sVar7 < uVar6 || sVar7 - uVar6 == 0) {
        sVar7 = uVar6;
      }
      param_2[2] = sVar7;
      pvVar2 = realloc(pvVar2,sVar7);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar3 = param_2[1];
      uVar6 = lVar3 + 1;
    }
    param_2[1] = uVar6;
    *(undefined1 *)((long)pvVar2 + lVar3) = 0x28;
    lVar3 = param_2[1];
    if (*(long *)(param_1 + 0x18) != 0) {
      lVar8 = 0;
      bVar10 = true;
      do {
        while( true ) {
          lVar5 = lVar3;
          if (!bVar10) {
            pvVar2 = (void *)*param_2;
            if ((ulong)param_2[2] < lVar3 + 2U) {
              sVar7 = param_2[2] * 2;
              uVar6 = lVar3 + 0x3e2;
              if (sVar7 < uVar6 || sVar7 - uVar6 == 0) {
                sVar7 = uVar6;
              }
              param_2[2] = sVar7;
              pvVar2 = realloc(pvVar2,sVar7);
              *param_2 = pvVar2;
              if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              lVar5 = param_2[1];
            }
            *(undefined2 *)((long)pvVar2 + lVar5) = 0x202c;
            lVar5 = param_2[1] + 2;
            param_2[1] = lVar5;
          }
          FUN_001347c4(*(undefined8 *)(*(long *)(param_1 + 0x10) + lVar8 * 8),param_2,0x12,0);
          lVar4 = param_2[1];
          if (lVar5 == lVar4) break;
          bVar10 = false;
          lVar8 = lVar8 + 1;
          lVar3 = lVar4;
          if (lVar8 == *(long *)(param_1 + 0x18)) goto LAB_00134f64;
        }
        param_2[1] = lVar3;
        lVar8 = lVar8 + 1;
      } while (lVar8 != *(long *)(param_1 + 0x18));
    }
LAB_00134f64:
    uVar6 = lVar3 + 1;
    pvVar2 = (void *)*param_2;
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
    if ((ulong)param_2[2] < uVar6) {
      sVar7 = param_2[2] * 2;
      uVar6 = lVar3 + 0x3e1;
      if (sVar7 < uVar6 || sVar7 - uVar6 == 0) {
        sVar7 = uVar6;
      }
      param_2[2] = sVar7;
      pvVar2 = realloc(pvVar2,sVar7);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar3 = param_2[1];
      uVar6 = lVar3 + 1;
    }
    param_2[1] = uVar6;
    *(undefined1 *)((long)pvVar2 + lVar3) = 0x29;
    lVar3 = param_2[1];
  }
  pvVar2 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar3 + 1U) {
    sVar7 = param_2[2] * 2;
    uVar6 = lVar3 + 0x3e1;
    if (sVar7 < uVar6 || sVar7 - uVar6 == 0) {
      sVar7 = uVar6;
    }
    param_2[2] = sVar7;
    pvVar2 = realloc(pvVar2,sVar7);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar3 = param_2[1];
  }
  *(undefined1 *)((long)pvVar2 + lVar3) = 0x20;
  plVar9 = *(long **)(param_1 + 0x20);
  lVar3 = *plVar9;
  param_2[1] = param_2[1] + 1;
  (**(code **)(lVar3 + 0x20))(plVar9,param_2);
  if ((*(ushort *)((long)plVar9 + 9) & 0xc0) != 0x40) {
    (**(code **)(*plVar9 + 0x28))(plVar9,param_2);
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar3 = param_2[1];
    pvVar2 = (void *)*param_2;
    uVar6 = lVar3 + 1;
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
    if ((ulong)param_2[2] < uVar6) {
      sVar7 = param_2[2] * 2;
      uVar6 = lVar3 + 0x3e1;
      if (sVar7 < uVar6 || sVar7 - uVar6 == 0) {
        sVar7 = uVar6;
      }
      param_2[2] = sVar7;
      pvVar2 = realloc(pvVar2,sVar7);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar3 = param_2[1];
      uVar6 = lVar3 + 1;
    }
    param_2[1] = uVar6;
    *(undefined1 *)((long)pvVar2 + lVar3) = 0x28;
    lVar3 = param_2[1];
    if (*(long *)(param_1 + 0x30) != 0) {
      lVar8 = 0;
      bVar10 = true;
      do {
        while( true ) {
          lVar5 = lVar3;
          if (!bVar10) {
            pvVar2 = (void *)*param_2;
            if ((ulong)param_2[2] < lVar3 + 2U) {
              sVar7 = param_2[2] * 2;
              uVar6 = lVar3 + 0x3e2;
              if (sVar7 < uVar6 || sVar7 - uVar6 == 0) {
                sVar7 = uVar6;
              }
              param_2[2] = sVar7;
              pvVar2 = realloc(pvVar2,sVar7);
              *param_2 = pvVar2;
              if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              lVar5 = param_2[1];
            }
            *(undefined2 *)((long)pvVar2 + lVar5) = 0x202c;
            lVar5 = param_2[1] + 2;
            param_2[1] = lVar5;
          }
          FUN_001347c4(*(undefined8 *)(*(long *)(param_1 + 0x28) + lVar8 * 8),param_2,0x12,0);
          lVar4 = param_2[1];
          if (lVar5 == lVar4) break;
          bVar10 = false;
          lVar8 = lVar8 + 1;
          lVar3 = lVar4;
          if (lVar8 == *(long *)(param_1 + 0x30)) goto LAB_00135164;
        }
        param_2[1] = lVar3;
        lVar8 = lVar8 + 1;
      } while (lVar8 != *(long *)(param_1 + 0x30));
    }
LAB_00135164:
    uVar6 = lVar3 + 1;
    pvVar2 = (void *)*param_2;
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
    if ((ulong)param_2[2] < uVar6) {
      sVar7 = param_2[2] * 2;
      uVar6 = lVar3 + 0x3e1;
      if (sVar7 < uVar6 || sVar7 - uVar6 == 0) {
        sVar7 = uVar6;
      }
      param_2[2] = sVar7;
      pvVar2 = realloc(pvVar2,sVar7);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar3 = param_2[1];
      uVar6 = lVar3 + 1;
    }
    param_2[1] = uVar6;
    *(undefined1 *)((long)pvVar2 + lVar3) = 0x29;
  }
  return;
}


// ===== 001351fc  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00135204  FUN_00135204 =====

void FUN_00135204(long param_1,undefined8 *param_2)

{
  char cVar1;
  void *pvVar2;
  long lVar3;
  size_t sVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  
  lVar3 = param_2[1];
  if (*(char *)(param_1 + 0x18) != '\0') {
    pvVar2 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar3 + 2U) {
      sVar4 = param_2[2] * 2;
      uVar6 = lVar3 + 0x3e2;
      if (sVar4 < uVar6 || sVar4 - uVar6 == 0) {
        sVar4 = uVar6;
      }
      param_2[2] = sVar4;
      pvVar2 = realloc(pvVar2,sVar4);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar3 = param_2[1];
    }
    *(undefined2 *)((long)pvVar2 + lVar3) = 0x3a3a;
    lVar3 = param_2[1] + 2;
    param_2[1] = lVar3;
  }
  pvVar2 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar3 + 6U) {
    sVar4 = param_2[2] * 2;
    uVar6 = lVar3 + 0x3e6;
    if (sVar4 < uVar6 || sVar4 - uVar6 == 0) {
      sVar4 = uVar6;
    }
    param_2[2] = sVar4;
    pvVar2 = realloc(pvVar2,sVar4);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar3 = param_2[1];
  }
  *(undefined2 *)((undefined4 *)((long)pvVar2 + lVar3) + 1) = 0x6574;
  *(undefined4 *)((long)pvVar2 + lVar3) = 0x656c6564;
  lVar5 = param_2[1];
  cVar1 = *(char *)(param_1 + 0x19);
  lVar3 = lVar5 + 6;
  param_2[1] = lVar3;
  if (cVar1 != '\0') {
    pvVar2 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar5 + 8U) {
      sVar4 = param_2[2] * 2;
      uVar6 = lVar5 + 1000;
      if (sVar4 < uVar6 || sVar4 - uVar6 == 0) {
        sVar4 = uVar6;
      }
      param_2[2] = sVar4;
      pvVar2 = realloc(pvVar2,sVar4);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar3 = param_2[1];
    }
    *(undefined2 *)((long)pvVar2 + lVar3) = 0x5d5b;
    lVar3 = param_2[1] + 2;
    param_2[1] = lVar3;
  }
  uVar6 = lVar3 + 1;
  pvVar2 = (void *)*param_2;
  if ((ulong)param_2[2] < uVar6) {
    sVar4 = param_2[2] * 2;
    uVar6 = lVar3 + 0x3e1;
    if (sVar4 < uVar6 || sVar4 - uVar6 == 0) {
      sVar4 = uVar6;
    }
    param_2[2] = sVar4;
    pvVar2 = realloc(pvVar2,sVar4);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar3 = param_2[1];
    uVar6 = lVar3 + 1;
  }
  param_2[1] = uVar6;
  *(undefined1 *)((long)pvVar2 + lVar3) = 0x20;
  plVar7 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar7 + 0x20))(plVar7,param_2);
  if ((*(ushort *)((long)plVar7 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001353c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar7 + 0x28))(plVar7,param_2);
  return;
}


// ===== 001353d4  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 001353dc  FUN_001353dc =====

void FUN_001353dc(long param_1,undefined8 *param_2)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  size_t sVar6;
  long *plVar7;
  long lVar8;
  bool bVar9;
  
  plVar7 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar7 + 0x20))(plVar7);
  if ((*(ushort *)((long)plVar7 + 9) & 0xc0) != 0x40) {
    (**(code **)(*plVar7 + 0x28))(plVar7,param_2);
  }
  lVar2 = param_2[1];
  pvVar1 = (void *)*param_2;
  uVar5 = lVar2 + 1;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  if ((ulong)param_2[2] < uVar5) {
    sVar6 = param_2[2] * 2;
    uVar5 = lVar2 + 0x3e1;
    if (sVar6 < uVar5 || sVar6 - uVar5 == 0) {
      sVar6 = uVar5;
    }
    param_2[2] = sVar6;
    pvVar1 = realloc(pvVar1,sVar6);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = param_2[1];
    uVar5 = lVar2 + 1;
  }
  param_2[1] = uVar5;
  *(undefined1 *)((long)pvVar1 + lVar2) = 0x28;
  lVar2 = param_2[1];
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar8 = 0;
    bVar9 = true;
    do {
      while( true ) {
        lVar3 = lVar2;
        if (!bVar9) {
          pvVar1 = (void *)*param_2;
          if ((ulong)param_2[2] < lVar2 + 2U) {
            sVar6 = param_2[2] * 2;
            uVar5 = lVar2 + 0x3e2;
            if (sVar6 < uVar5 || sVar6 - uVar5 == 0) {
              sVar6 = uVar5;
            }
            param_2[2] = sVar6;
            pvVar1 = realloc(pvVar1,sVar6);
            *param_2 = pvVar1;
            if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            lVar3 = param_2[1];
          }
          *(undefined2 *)((long)pvVar1 + lVar3) = 0x202c;
          lVar3 = param_2[1] + 2;
          param_2[1] = lVar3;
        }
        FUN_001347c4(*(undefined8 *)(*(long *)(param_1 + 0x18) + lVar8 * 8),param_2,0x12,0);
        lVar4 = param_2[1];
        if (lVar3 == lVar4) break;
        bVar9 = false;
        lVar8 = lVar8 + 1;
        lVar2 = lVar4;
        if (lVar8 == *(long *)(param_1 + 0x20)) goto LAB_00135550;
      }
      param_2[1] = lVar2;
      lVar8 = lVar8 + 1;
    } while (lVar8 != *(long *)(param_1 + 0x20));
  }
LAB_00135550:
  uVar5 = lVar2 + 1;
  pvVar1 = (void *)*param_2;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
  if ((ulong)param_2[2] < uVar5) {
    sVar6 = param_2[2] * 2;
    uVar5 = lVar2 + 0x3e1;
    if (sVar6 < uVar5 || sVar6 - uVar5 == 0) {
      sVar6 = uVar5;
    }
    param_2[2] = sVar6;
    pvVar1 = realloc(pvVar1,sVar6);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = param_2[1];
    uVar5 = lVar2 + 1;
  }
  param_2[1] = uVar5;
  *(undefined1 *)((long)pvVar1 + lVar2) = 0x29;
  return;
}


// ===== 001355cc  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 001355d4  FUN_001355d4 =====

void FUN_001355d4(long param_1,undefined8 *param_2)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  size_t sVar6;
  long *plVar7;
  long lVar8;
  bool bVar9;
  
  lVar2 = param_2[1];
  pvVar1 = (void *)*param_2;
  uVar5 = lVar2 + 1;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  if ((ulong)param_2[2] < uVar5) {
    sVar6 = param_2[2] * 2;
    uVar5 = lVar2 + 0x3e1;
    if (sVar6 < uVar5 || sVar6 - uVar5 == 0) {
      sVar6 = uVar5;
    }
    param_2[2] = sVar6;
    pvVar1 = realloc(pvVar1,sVar6);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = param_2[1];
    uVar5 = lVar2 + 1;
  }
  param_2[1] = uVar5;
  *(undefined1 *)((long)pvVar1 + lVar2) = 0x28;
  plVar7 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar7 + 0x20))(plVar7,param_2);
  if ((*(ushort *)((long)plVar7 + 9) & 0xc0) != 0x40) {
    (**(code **)(*plVar7 + 0x28))(plVar7,param_2);
  }
  lVar2 = param_2[1];
  pvVar1 = (void *)*param_2;
  uVar5 = lVar2 + 1;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
  if ((ulong)param_2[2] < uVar5) {
    sVar6 = param_2[2] * 2;
    uVar5 = lVar2 + 0x3e1;
    if (sVar6 < uVar5 || sVar6 - uVar5 == 0) {
      sVar6 = uVar5;
    }
    param_2[2] = sVar6;
    pvVar1 = realloc(pvVar1,sVar6);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = param_2[1];
    uVar5 = lVar2 + 1;
  }
  param_2[1] = uVar5;
  *(undefined1 *)((long)pvVar1 + lVar2) = 0x29;
  lVar2 = param_2[1];
  pvVar1 = (void *)*param_2;
  uVar5 = lVar2 + 1;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  if ((ulong)param_2[2] < uVar5) {
    sVar6 = param_2[2] * 2;
    uVar5 = lVar2 + 0x3e1;
    if (sVar6 < uVar5 || sVar6 - uVar5 == 0) {
      sVar6 = uVar5;
    }
    param_2[2] = sVar6;
    pvVar1 = realloc(pvVar1,sVar6);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = param_2[1];
    uVar5 = lVar2 + 1;
  }
  param_2[1] = uVar5;
  *(undefined1 *)((long)pvVar1 + lVar2) = 0x28;
  lVar2 = param_2[1];
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar8 = 0;
    bVar9 = true;
    do {
      while( true ) {
        lVar3 = lVar2;
        if (!bVar9) {
          pvVar1 = (void *)*param_2;
          if ((ulong)param_2[2] < lVar2 + 2U) {
            sVar6 = param_2[2] * 2;
            uVar5 = lVar2 + 0x3e2;
            if (sVar6 < uVar5 || sVar6 - uVar5 == 0) {
              sVar6 = uVar5;
            }
            param_2[2] = sVar6;
            pvVar1 = realloc(pvVar1,sVar6);
            *param_2 = pvVar1;
            if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            lVar3 = param_2[1];
          }
          *(undefined2 *)((long)pvVar1 + lVar3) = 0x202c;
          lVar3 = param_2[1] + 2;
          param_2[1] = lVar3;
        }
        FUN_001347c4(*(undefined8 *)(*(long *)(param_1 + 0x18) + lVar8 * 8),param_2,0x12,0);
        lVar4 = param_2[1];
        if (lVar3 == lVar4) break;
        bVar9 = false;
        lVar8 = lVar8 + 1;
        lVar2 = lVar4;
        if (lVar8 == *(long *)(param_1 + 0x20)) goto LAB_001357f4;
      }
      param_2[1] = lVar2;
      lVar8 = lVar8 + 1;
    } while (lVar8 != *(long *)(param_1 + 0x20));
  }
LAB_001357f4:
  uVar5 = lVar2 + 1;
  pvVar1 = (void *)*param_2;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
  if ((ulong)param_2[2] < uVar5) {
    sVar6 = param_2[2] * 2;
    uVar5 = lVar2 + 0x3e1;
    if (sVar6 < uVar5 || sVar6 - uVar5 == 0) {
      sVar6 = uVar5;
    }
    param_2[2] = sVar6;
    pvVar1 = realloc(pvVar1,sVar6);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = param_2[1];
    uVar5 = lVar2 + 1;
  }
  param_2[1] = uVar5;
  *(undefined1 *)((long)pvVar1 + lVar2) = 0x29;
  return;
}


// ===== 00135878  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00135880  FUN_00135880 =====

void FUN_00135880(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  undefined8 uVar3;
  long lVar4;
  size_t sVar5;
  
  FUN_001347c4(*(undefined8 *)(param_1 + 0x10),param_2,
               (int)((uint)*(ushort *)(param_1 + 9) << 0x1a) >> 0x1a,0);
  lVar4 = param_2[1];
  pvVar2 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar4 + 3U) {
    sVar5 = param_2[2] * 2;
    uVar1 = lVar4 + 0x3e3;
    if (sVar5 < uVar1 || sVar5 - uVar1 == 0) {
      sVar5 = uVar1;
    }
    param_2[2] = sVar5;
    pvVar2 = realloc(pvVar2,sVar5);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = param_2[1];
  }
  *(undefined1 *)((undefined2 *)((long)pvVar2 + lVar4) + 1) = 0x20;
  *(undefined2 *)((long)pvVar2 + lVar4) = 0x3f20;
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  param_2[1] = param_2[1] + 3;
  FUN_001347c4(uVar3,param_2,0x13,0);
  lVar4 = param_2[1];
  pvVar2 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar4 + 3U) {
    sVar5 = param_2[2] * 2;
    uVar1 = lVar4 + 0x3e3;
    if (sVar5 < uVar1 || sVar5 - uVar1 == 0) {
      sVar5 = uVar1;
    }
    param_2[2] = sVar5;
    pvVar2 = realloc(pvVar2,sVar5);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar4 = param_2[1];
  }
  *(undefined1 *)((undefined2 *)((long)pvVar2 + lVar4) + 1) = 0x20;
  *(undefined2 *)((long)pvVar2 + lVar4) = 0x3a20;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  param_2[1] = param_2[1] + 3;
  FUN_001347c4(uVar3,param_2,0x11,1);
  return;
}


// ===== 0013599c  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 001359a4  FUN_001359a4 =====

void FUN_001359a4(long param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  void *pvVar3;
  long *plVar4;
  long lVar5;
  size_t __size;
  ulong uVar6;
  size_t sVar7;
  void *__src;
  
  sVar7 = *(size_t *)(param_1 + 0x18);
  lVar5 = param_2[1];
  if (sVar7 != 0) {
    __src = *(void **)(param_1 + 0x10);
    pvVar3 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar5 + sVar7) {
      __size = param_2[2] * 2;
      uVar6 = lVar5 + sVar7 + 0x3e0;
      if (__size < uVar6 || __size - uVar6 == 0) {
        __size = uVar6;
      }
      param_2[2] = __size;
      pvVar3 = realloc(pvVar3,__size);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar5 = param_2[1];
    }
    memcpy((void *)((long)pvVar3 + lVar5),__src,sVar7);
    lVar5 = param_2[1] + sVar7;
    param_2[1] = lVar5;
  }
  iVar2 = *(int *)(param_2 + 4);
  pvVar3 = (void *)*param_2;
  *(undefined4 *)(param_2 + 4) = 0;
  if ((ulong)param_2[2] < lVar5 + 1U) {
    sVar7 = param_2[2] * 2;
    uVar6 = lVar5 + 0x3e1;
    if (sVar7 < uVar6 || sVar7 - uVar6 == 0) {
      sVar7 = uVar6;
    }
    param_2[2] = sVar7;
    pvVar3 = realloc(pvVar3,sVar7);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00135ba0 to 00135ba7 has its CatchHandler @ 00135bb4 */
      abort();
    }
    lVar5 = param_2[1];
  }
  *(undefined1 *)((long)pvVar3 + lVar5) = 0x3c;
  plVar4 = *(long **)(param_1 + 0x20);
  lVar5 = *plVar4;
  param_2[1] = param_2[1] + 1;
                    /* try { // try from 00135a84 to 00135a8b has its CatchHandler @ 00135bb4 */
  (**(code **)(lVar5 + 0x20))(plVar4,param_2);
  lVar5 = param_2[1];
  pvVar3 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar5 + 1U) {
    sVar7 = param_2[2] * 2;
    uVar6 = lVar5 + 0x3e1;
    if (sVar7 < uVar6 || sVar7 - uVar6 == 0) {
      sVar7 = uVar6;
    }
    param_2[2] = sVar7;
    pvVar3 = realloc(pvVar3,sVar7);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar5 = param_2[1];
  }
  *(undefined1 *)((long)pvVar3 + lVar5) = 0x3e;
  lVar1 = param_2[1];
  pvVar3 = (void *)*param_2;
  *(int *)(param_2 + 4) = iVar2 + 1;
  uVar6 = lVar1 + 2;
  lVar5 = lVar1 + 1;
  param_2[1] = lVar5;
  if ((ulong)param_2[2] < uVar6) {
    sVar7 = param_2[2] * 2;
    uVar6 = lVar1 + 0x3e2;
    if (sVar7 < uVar6 || sVar7 - uVar6 == 0) {
      sVar7 = uVar6;
    }
    param_2[2] = sVar7;
    pvVar3 = realloc(pvVar3,sVar7);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar5 = param_2[1];
    uVar6 = lVar5 + 1;
  }
  param_2[1] = uVar6;
  *(undefined1 *)((long)pvVar3 + lVar5) = 0x28;
  FUN_001347c4(*(undefined8 *)(param_1 + 0x28),param_2,0x13,0);
  lVar5 = param_2[1];
  pvVar3 = (void *)*param_2;
  uVar6 = lVar5 + 1;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
  if ((ulong)param_2[2] < uVar6) {
    sVar7 = param_2[2] * 2;
    uVar6 = lVar5 + 0x3e1;
    if (sVar7 < uVar6 || sVar7 - uVar6 == 0) {
      sVar7 = uVar6;
    }
    param_2[2] = sVar7;
    pvVar3 = realloc(pvVar3,sVar7);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar5 = param_2[1];
    uVar6 = lVar5 + 1;
  }
  param_2[1] = uVar6;
  *(undefined1 *)((long)pvVar3 + lVar5) = 0x29;
  return;
}


// ===== 00135bbc  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00135bc4  FUN_00135bc4 =====

void FUN_00135bc4(long param_1,undefined8 *param_2)

{
  void *pvVar1;
  long lVar2;
  size_t sVar3;
  ulong uVar4;
  size_t sVar5;
  long *plVar6;
  void *pvVar7;
  
  sVar5 = *(size_t *)(param_1 + 0x18);
  lVar2 = param_2[1];
  if (sVar5 != 0) {
    pvVar7 = *(void **)(param_1 + 0x10);
    pvVar1 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar2 + sVar5) {
      sVar3 = param_2[2] * 2;
      uVar4 = lVar2 + sVar5 + 0x3e0;
      if (sVar3 < uVar4 || sVar3 - uVar4 == 0) {
        sVar3 = uVar4;
      }
      param_2[2] = sVar3;
      pvVar1 = realloc(pvVar1,sVar3);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar2 = param_2[1];
    }
    memcpy((void *)((long)pvVar1 + lVar2),pvVar7,sVar5);
    lVar2 = param_2[1] + sVar5;
    param_2[1] = lVar2;
  }
  uVar4 = lVar2 + 1;
  pvVar1 = (void *)*param_2;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  if ((ulong)param_2[2] < uVar4) {
    sVar5 = param_2[2] * 2;
    uVar4 = lVar2 + 0x3e1;
    if (sVar5 < uVar4 || sVar5 - uVar4 == 0) {
      sVar5 = uVar4;
    }
    param_2[2] = sVar5;
    pvVar1 = realloc(pvVar1,sVar5);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = param_2[1];
    uVar4 = lVar2 + 1;
  }
  param_2[1] = uVar4;
  *(undefined1 *)((long)pvVar1 + lVar2) = 0x28;
  plVar6 = *(long **)(param_1 + 0x20);
  (**(code **)(*plVar6 + 0x20))(plVar6,param_2);
  if ((*(ushort *)((long)plVar6 + 9) & 0xc0) != 0x40) {
    (**(code **)(*plVar6 + 0x28))(plVar6,param_2);
  }
  lVar2 = param_2[1];
  pvVar1 = (void *)*param_2;
  uVar4 = lVar2 + 1;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
  if ((ulong)param_2[2] < uVar4) {
    sVar5 = param_2[2] * 2;
    uVar4 = lVar2 + 0x3e1;
    if (sVar5 < uVar4 || sVar5 - uVar4 == 0) {
      sVar5 = uVar4;
    }
    param_2[2] = sVar5;
    pvVar1 = realloc(pvVar1,sVar5);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = param_2[1];
    uVar4 = lVar2 + 1;
  }
  param_2[1] = uVar4;
  *(undefined1 *)((long)pvVar1 + lVar2) = 0x29;
  sVar5 = *(size_t *)(param_1 + 0x30);
  if (sVar5 != 0) {
    lVar2 = param_2[1];
    pvVar1 = (void *)*param_2;
    pvVar7 = *(void **)(param_1 + 0x28);
    if ((ulong)param_2[2] < lVar2 + sVar5) {
      sVar3 = param_2[2] * 2;
      uVar4 = lVar2 + sVar5 + 0x3e0;
      if (sVar3 < uVar4 || sVar3 - uVar4 == 0) {
        sVar3 = uVar4;
      }
      param_2[2] = sVar3;
      pvVar1 = realloc(pvVar1,sVar3);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar2 = param_2[1];
    }
    memcpy((void *)((long)pvVar1 + lVar2),pvVar7,sVar5);
    param_2[1] = param_2[1] + sVar5;
  }
  return;
}


// ===== 00135dac  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00135db4  FUN_00135db4 =====

undefined8 * FUN_00135db4(long *param_1,undefined8 param_2,undefined8 param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  byte *pbVar7;
  void *pvVar8;
  
  pbVar1 = (byte *)*param_1;
  pbVar2 = (byte *)param_1[1];
  pbVar6 = pbVar1;
  if ((pbVar1 != pbVar2) && (*pbVar1 == 0x6e)) {
    pbVar6 = pbVar1 + 1;
    *param_1 = (long)pbVar6;
  }
  if ((pbVar2 != pbVar6) && (0xfffffff5 < *pbVar6 - 0x3a)) {
    do {
      pbVar7 = pbVar6;
      if (*pbVar6 - 0x3a < 0xfffffff6) break;
      pbVar6 = pbVar6 + 1;
      *param_1 = (long)pbVar6;
      pbVar7 = pbVar2;
    } while (pbVar6 != pbVar2);
    if ((long)pbVar7 - (long)pbVar1 == 0) {
      return (undefined8 *)0x0;
    }
    if (pbVar7 == pbVar2) {
      return (undefined8 *)0x0;
    }
    if (*pbVar7 == 0x45) {
      pvVar8 = (void *)param_1[0x266];
      *param_1 = (long)(pbVar7 + 1);
      lVar4 = *(long *)((long)pvVar8 + 8);
      puVar3 = (undefined8 *)pvVar8;
      if (lVar4 - 0xfc0U < 0xfffffffffffff010) {
        puVar3 = (undefined8 *)malloc(0x1000);
        if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar4 = 0;
        *puVar3 = pvVar8;
        puVar3[1] = 0;
        param_1[0x266] = (long)puVar3;
      }
      *(long *)((long)puVar3 + 8) = lVar4 + 0x30;
      puVar5 = (undefined8 *)((long)puVar3 + lVar4 + 0x10);
      *puVar5 = &PTR_FUN_0014ebc8;
      *(undefined1 *)((long)puVar3 + lVar4 + 0x18) = 0x4d;
      *(undefined8 *)((long)puVar3 + lVar4 + 0x20) = param_2;
      *(undefined8 *)((long)puVar3 + lVar4 + 0x28) = param_3;
      *(byte **)((long)puVar3 + lVar4 + 0x30) = pbVar1;
      *(long *)((long)puVar3 + lVar4 + 0x38) = (long)pbVar7 - (long)pbVar1;
      *(ushort *)((long)puVar3 + lVar4 + 0x19) =
           *(ushort *)((long)puVar3 + lVar4 + 0x19) & 0xf000 | 0x540;
      return puVar5;
    }
  }
  return (undefined8 *)0x0;
}


// ===== 00135f00  FUN_00135f00 =====

void FUN_00135f00(long param_1,int param_2)

{
  undefined8 *puVar1;
  long lVar2;
  void *pvVar3;
  
  pvVar3 = *(void **)(param_1 + 0x1330);
  lVar2 = *(long *)((long)pvVar3 + 8);
  puVar1 = (undefined8 *)pvVar3;
  if (lVar2 - 0xfe0U < 0xfffffffffffff010) {
    puVar1 = (undefined8 *)malloc(0x1000);
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar2 = 0;
    *puVar1 = pvVar3;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar2 + 0x10;
  puVar1 = (undefined8 *)(lVar2 + 0x10 + (long)puVar1);
  *(undefined1 *)(puVar1 + 1) = 0x49;
  *puVar1 = &PTR_FUN_0014ec38;
  *(ushort *)((long)puVar1 + 9) = *(ushort *)((long)puVar1 + 9) & 0xf000 | 0x540;
  *(bool *)((long)puVar1 + 0xb) = param_2 != 0;
  return;
}


// ===== 00135fa4  FUN_00135fa4 =====

void FUN_00135fa4(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
  
  pvVar4 = *(void **)(param_1 + 0x1330);
  lVar2 = *(long *)((long)pvVar4 + 8);
  puVar1 = (undefined8 *)pvVar4;
  if (lVar2 - 0xfd0U < 0xfffffffffffff010) {
    puVar1 = (undefined8 *)malloc(0x1000);
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar2 = 0;
    *puVar1 = pvVar4;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar2 + 0x20;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0014edf8;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x4a;
  uVar3 = *param_2;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar3;
  return;
}


// ===== 00136044  FUN_00136044 =====

undefined8 * FUN_00136044(long param_1,char *param_2)

{
  undefined8 *puVar1;
  size_t sVar2;
  long lVar3;
  undefined8 *puVar4;
  void *pvVar5;
  
  pvVar5 = *(void **)(param_1 + 0x1330);
  lVar3 = *(long *)((long)pvVar5 + 8);
  puVar1 = (undefined8 *)pvVar5;
  if (lVar3 - 0xfd0U < 0xfffffffffffff010) {
    puVar1 = (undefined8 *)malloc(0x1000);
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar3 = 0;
    *puVar1 = pvVar5;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar3 + 0x20;
  sVar2 = strlen(param_2);
  puVar4 = (undefined8 *)((long)puVar1 + lVar3 + 0x10);
  *puVar4 = &PTR_FUN_0014e158;
  *(undefined1 *)((long)puVar1 + lVar3 + 0x18) = 8;
  *(char **)((long)puVar1 + lVar3 + 0x20) = param_2;
  *(size_t *)((long)puVar1 + lVar3 + 0x28) = sVar2;
  *(ushort *)((long)puVar1 + lVar3 + 0x19) =
       *(ushort *)((long)puVar1 + lVar3 + 0x19) & 0xf000 | 0x540;
  return puVar4;
}


// ===== 001360ec  FUN_001360ec =====

undefined8 * FUN_001360ec(long *param_1,long param_2)

{
  long *plVar1;
  short *psVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  char *pcVar6;
  long *plVar7;
  uint __c;
  char cVar8;
  long lVar9;
  byte *pbVar10;
  long lVar11;
  ulong uVar12;
  char *pcVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  void *pvVar18;
  byte *pbVar19;
  size_t sVar20;
  long *plVar21;
  long lVar22;
  byte *local_110;
  long lStack_108;
  undefined8 *local_100;
  undefined1 local_f8 [16];
  undefined8 *local_e8;
  undefined1 local_e0 [16];
  long local_d0;
  ulong uStack_c8;
  undefined1 *local_c0 [3];
  undefined1 auStack_a8 [72];
  
  if (param_2 != 0) {
    param_1[0x54] = param_1[0x53];
  }
  psVar2 = (short *)*param_1;
  pbVar14 = (byte *)param_1[1];
  if ((ulong)((long)pbVar14 - (long)psVar2) < 2) {
    return (undefined8 *)0x0;
  }
  if (*psVar2 == 0x7455) {
    pbVar10 = (byte *)(psVar2 + 1);
    *param_1 = (long)pbVar10;
    if (pbVar14 == pbVar10) {
      return (undefined8 *)0x0;
    }
    if (*pbVar10 - 0x3a < 0xfffffff6) {
      pbVar19 = (byte *)0x0;
      lVar9 = 0;
    }
    else {
      pbVar19 = (byte *)(psVar2 + 1);
      pbVar15 = pbVar10;
      do {
        pbVar16 = pbVar19;
        pbVar17 = pbVar15;
        if (*pbVar15 - 0x3a < 0xfffffff6) break;
        pbVar15 = pbVar15 + 1;
        pbVar19 = pbVar19 + 1;
        *param_1 = (long)pbVar15;
        pbVar16 = pbVar14;
        pbVar17 = pbVar14;
      } while (pbVar15 != pbVar14);
      lVar9 = (long)pbVar16 - (long)pbVar10;
      pbVar19 = pbVar10;
      pbVar10 = pbVar17;
    }
    if (pbVar10 == pbVar14) {
      return (undefined8 *)0x0;
    }
    if (*pbVar10 != 0x5f) {
      return (undefined8 *)0x0;
    }
    pvVar18 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar10 + 1);
    lVar11 = *(long *)((long)pvVar18 + 8);
    puVar4 = (undefined8 *)pvVar18;
    if (lVar11 - 0xfd0U < 0xfffffffffffff010) {
      puVar4 = (undefined8 *)malloc(0x1000);
      if (puVar4 == (undefined8 *)0x0) {
LAB_00136788:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar11 = 0;
      *puVar4 = pvVar18;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar11 + 0x20;
    puVar5 = (undefined8 *)((long)puVar4 + lVar11 + 0x10);
    *puVar5 = &PTR_FUN_0014ee68;
    *(byte **)((long)puVar4 + lVar11 + 0x20) = pbVar19;
    *(long *)((long)puVar4 + lVar11 + 0x28) = lVar9;
    *(undefined1 *)((long)puVar4 + lVar11 + 0x18) = 0x33;
    *(ushort *)((long)puVar4 + lVar11 + 0x19) =
         *(ushort *)((long)puVar4 + lVar11 + 0x19) & 0xf000 | 0x540;
    return puVar5;
  }
  if (*psVar2 != 0x6c55) {
    if (*psVar2 != 0x6255) {
      return (undefined8 *)0x0;
    }
    pbVar10 = (byte *)(psVar2 + 1);
    *param_1 = (long)pbVar10;
    if (pbVar14 == pbVar10) {
      return (undefined8 *)0x0;
    }
    if (0xfffffff5 < *pbVar10 - 0x3a) {
      while (0xfffffff5 < *pbVar10 - 0x3a) {
        pbVar10 = pbVar10 + 1;
        *param_1 = (long)pbVar10;
        if (pbVar10 == pbVar14) {
          return (undefined8 *)0x0;
        }
      }
    }
    if (pbVar10 == pbVar14) {
      return (undefined8 *)0x0;
    }
    if (*pbVar10 != 0x5f) {
      return (undefined8 *)0x0;
    }
    pvVar18 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar10 + 1);
    lVar9 = *(long *)((long)pvVar18 + 8);
    puVar4 = (undefined8 *)pvVar18;
    if (lVar9 - 0xfd0U < 0xfffffffffffff010) {
      puVar4 = (undefined8 *)malloc(0x1000);
      if (puVar4 == (undefined8 *)0x0) goto LAB_00136788;
      lVar9 = 0;
      *puVar4 = pvVar18;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar9 + 0x20;
    puVar5 = (undefined8 *)((long)puVar4 + lVar9 + 0x10);
    *puVar5 = &PTR_FUN_0014e158;
    *(undefined1 *)((long)puVar4 + lVar9 + 0x18) = 8;
    *(ushort *)((long)puVar4 + lVar9 + 0x19) =
         *(ushort *)((long)puVar4 + lVar9 + 0x19) & 0xf000 | 0x540;
    *(char **)((long)puVar4 + lVar9 + 0x20) = "\'block-literal\'";
    *(undefined8 *)((long)puVar4 + lVar9 + 0x28) = 0xf;
    return puVar5;
  }
  lVar22 = param_1[0x62];
  *param_1 = (long)(psVar2 + 1);
  param_1[0x62] = param_1[0x54] - param_1[0x53] >> 3;
                    /* try { // try from 001362b8 to 001362c3 has its CatchHandler @ 001367c8 */
  FUN_001374dc(&local_d0,param_1);
  pcVar6 = (char *)*param_1;
  lVar9 = param_1[2];
  lVar11 = param_1[3];
  uVar12 = param_1[1] - (long)pcVar6;
  if (uVar12 != 0) {
    plVar1 = param_1 + 5;
    while (*pcVar6 == 'T') {
      if (uVar12 < 2) {
        __c = 0;
      }
      else {
        __c = (uint)(byte)pcVar6[1];
      }
      pcVar6 = (char *)memchr("yptnk",__c,5);
      if ((pcVar6 == (char *)0x0) || (pcVar6 == "")) break;
                    /* try { // try from 0013635c to 00136367 has its CatchHandler @ 00136818 */
      puVar4 = (undefined8 *)FUN_00137604(param_1,local_c0);
      if (puVar4 == (undefined8 *)0x0) goto LAB_001366ec;
      plVar21 = (long *)param_1[3];
      if (plVar21 == (long *)param_1[4]) {
        plVar7 = (long *)param_1[2];
        sVar20 = (long)plVar21 - (long)plVar7;
        if (plVar7 == plVar1) {
          pvVar18 = malloc(sVar20 * 2);
          if (pvVar18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00136764 to 00136767 has its CatchHandler @ 001367e8 */
            abort();
          }
          if (plVar21 != plVar1) {
            memcpy(pvVar18,plVar1,sVar20);
          }
          param_1[2] = (long)pvVar18;
        }
        else {
          pvVar18 = realloc(plVar7,sVar20 * 2);
          param_1[2] = (long)pvVar18;
          if (pvVar18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0013673c to 0013673f has its CatchHandler @ 001367e8 */
            abort();
          }
        }
        plVar21 = (long *)((long)pvVar18 + sVar20);
        param_1[3] = (long)plVar21;
        param_1[4] = (long)((long)pvVar18 + ((long)sVar20 >> 2) * 8);
      }
      param_1[3] = (long)(plVar21 + 1);
      *plVar21 = (long)puVar4;
      pcVar6 = (char *)*param_1;
      uVar12 = param_1[1] - (long)pcVar6;
      if (uVar12 == 0) break;
    }
  }
                    /* try { // try from 001363c0 to 001363d3 has its CatchHandler @ 001367d0 */
  lVar9 = lVar11 - lVar9 >> 3;
  local_e0 = FUN_0012ce20(param_1,lVar9);
  if (local_e0._8_8_ == 0) {
    if (param_1[0x54] == param_1[0x53]) {
                    /* try { // try from 00136768 to 00136787 has its CatchHandler @ 001367d0 */
                    /* WARNING: Subroutine does not return */
      FUN_00127d24("%s:%d: %s","out/llvm-project/libcxxabi/src/demangle/ItaniumDemangle.h",0x83,
                   "Popping empty vector!");
    }
    param_1[0x54] = param_1[0x54] + -8;
  }
  pcVar6 = (char *)*param_1;
  pcVar13 = (char *)param_1[1];
  local_e8 = (undefined8 *)0x0;
  if (pcVar6 == pcVar13) {
LAB_0013645c:
    plVar1 = param_1 + 5;
    do {
                    /* try { // try from 00136470 to 00136477 has its CatchHandler @ 00136830 */
      puVar4 = (undefined8 *)FUN_0012acb8(param_1);
      if (puVar4 == (undefined8 *)0x0) goto LAB_001366ec;
      plVar21 = (long *)param_1[3];
      if (plVar21 == (long *)param_1[4]) {
        plVar7 = (long *)param_1[2];
        sVar20 = (long)plVar21 - (long)plVar7;
        if (plVar7 == plVar1) {
          pvVar18 = malloc(sVar20 * 2);
          if (pvVar18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00136740 to 00136743 has its CatchHandler @ 00136800 */
            abort();
          }
          if (plVar21 != plVar1) {
            memcpy(pvVar18,plVar1,sVar20);
          }
          param_1[2] = (long)pvVar18;
        }
        else {
          pvVar18 = realloc(plVar7,sVar20 * 2);
          param_1[2] = (long)pvVar18;
          if (pvVar18 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00136738 to 0013673b has its CatchHandler @ 00136800 */
            abort();
          }
        }
        plVar21 = (long *)((long)pvVar18 + sVar20);
        param_1[3] = (long)plVar21;
        param_1[4] = (long)((long)pvVar18 + ((long)sVar20 >> 2) * 8);
      }
      param_1[3] = (long)(plVar21 + 1);
      *plVar21 = (long)puVar4;
      if ((char *)param_1[1] == (char *)*param_1) {
        cVar8 = '\0';
      }
      else {
        cVar8 = *(char *)*param_1;
        if (cVar8 == 'E') break;
      }
    } while (cVar8 != 'Q');
  }
  else {
    if (*pcVar6 == 'Q') {
      uVar3 = *(undefined1 *)((long)param_1 + 0x30a);
      *param_1 = (long)(pcVar6 + 1);
      *(undefined1 *)((long)param_1 + 0x30a) = 1;
                    /* try { // try from 00136424 to 0013642b has its CatchHandler @ 00136790 */
      puVar4 = (undefined8 *)FUN_0012ff04(param_1);
      *(undefined1 *)((long)param_1 + 0x30a) = uVar3;
      local_e8 = puVar4;
      if (puVar4 == (undefined8 *)0x0) goto LAB_001366ec;
      pcVar6 = (char *)*param_1;
      pcVar13 = (char *)param_1[1];
    }
    if ((pcVar13 == pcVar6) || (*pcVar6 != 'v')) goto LAB_0013645c;
    *param_1 = (long)(pcVar6 + 1);
  }
                    /* try { // try from 00136514 to 0013651f has its CatchHandler @ 001367ac */
  local_f8 = FUN_0012ce20(param_1,lVar9);
  pbVar14 = (byte *)*param_1;
  pbVar10 = (byte *)param_1[1];
  local_100 = (undefined8 *)0x0;
  if (pbVar14 != pbVar10) {
    if (*pbVar14 == 0x51) {
      uVar3 = *(undefined1 *)((long)param_1 + 0x30a);
      *param_1 = (long)(pbVar14 + 1);
      *(undefined1 *)((long)param_1 + 0x30a) = 1;
                    /* try { // try from 00136554 to 0013655b has its CatchHandler @ 0013678c */
      puVar4 = (undefined8 *)FUN_0012ff04(param_1);
      *(undefined1 *)((long)param_1 + 0x30a) = uVar3;
      local_100 = puVar4;
      if (puVar4 == (undefined8 *)0x0) goto LAB_001366ec;
      pbVar14 = (byte *)*param_1;
      pbVar10 = (byte *)param_1[1];
    }
    if ((pbVar14 != pbVar10) && (*pbVar14 == 0x45)) {
      pbVar14 = pbVar14 + 1;
      *param_1 = (long)pbVar14;
      if (pbVar10 != pbVar14) {
        pbVar19 = pbVar14;
        if (*pbVar14 - 0x3a < 0xfffffff6) {
          lStack_108 = 0;
          pbVar15 = pbVar14;
          pbVar14 = (byte *)0x0;
        }
        else {
          do {
            pbVar15 = pbVar19;
            if (*pbVar19 - 0x3a < 0xfffffff6) break;
            pbVar19 = pbVar19 + 1;
            *param_1 = (long)pbVar19;
            pbVar15 = pbVar10;
          } while (pbVar19 != pbVar10);
          lStack_108 = (long)pbVar15 - (long)pbVar14;
        }
        local_110 = pbVar14;
        if ((pbVar15 != pbVar10) && (*pbVar15 == 0x5f)) {
          *param_1 = (long)(pbVar15 + 1);
          puVar4 = (undefined8 *)
                   FUN_00137b04(param_1,local_e0,&local_e8,local_f8,&local_100,&local_110);
          goto LAB_001366ec;
        }
      }
    }
  }
  puVar4 = (undefined8 *)0x0;
LAB_001366ec:
  if ((ulong)(*(long *)(local_d0 + 0x2a0) - *(long *)(local_d0 + 0x298) >> 3) < uStack_c8) {
                    /* try { // try from 00136744 to 00136763 has its CatchHandler @ 001367c4 */
                    /* WARNING: Subroutine does not return */
    FUN_00127d24("%s:%d: %s","out/llvm-project/libcxxabi/src/demangle/ItaniumDemangle.h",0xa50,
                 &DAT_001128a6);
  }
  *(ulong *)(local_d0 + 0x2a0) = *(long *)(local_d0 + 0x298) + uStack_c8 * 8;
  if (local_c0[0] != auStack_a8) {
    free(local_c0[0]);
  }
  param_1[0x62] = lVar22;
  return puVar4;
}


// ===== 00136848  FUN_00136848 =====

void FUN_00136848(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
  
  pvVar4 = *(void **)(param_1 + 0x1330);
  lVar2 = *(long *)((long)pvVar4 + 8);
  puVar1 = (undefined8 *)pvVar4;
  if (lVar2 - 0xfd0U < 0xfffffffffffff010) {
    puVar1 = (undefined8 *)malloc(0x1000);
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar2 = 0;
    *puVar1 = pvVar4;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar2 + 0x20;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0014f1e8;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x4b;
  uVar3 = *param_2;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar3;
  return;
}


// ===== 001368e8  FUN_001368e8 =====

void FUN_001368e8(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  pvVar4 = *(void **)(param_1 + 0x1330);
  lVar2 = *(long *)((long)pvVar4 + 8);
  puVar1 = (undefined8 *)pvVar4;
  if (lVar2 - 0xfc0U < 0xfffffffffffff010) {
    puVar1 = (undefined8 *)malloc(0x1000);
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar2 = 0;
    *puVar1 = pvVar4;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar2 + 0x30;
  uVar3 = *param_2;
  uVar6 = param_3[1];
  uVar5 = *param_3;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0014f258;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x4c;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar3;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x30) = uVar6;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = uVar5;
  return;
}


// ===== 00136994  FUN_00136994 =====

void FUN_00136994(long param_1,undefined8 *param_2)

{
  void *pvVar1;
  long lVar2;
  size_t sVar3;
  ulong uVar4;
  ulong uVar5;
  size_t sVar6;
  void *pvVar7;
  char *__src;
  ulong *puVar8;
  
  if (3 < *(ulong *)(param_1 + 0x18)) {
    lVar2 = param_2[1];
    pvVar1 = (void *)*param_2;
    uVar5 = lVar2 + 1;
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
    if ((ulong)param_2[2] < uVar5) {
      sVar6 = param_2[2] * 2;
      uVar5 = lVar2 + 0x3e1;
      if (sVar6 < uVar5 || sVar6 - uVar5 == 0) {
        sVar6 = uVar5;
      }
      param_2[2] = sVar6;
      pvVar1 = realloc(pvVar1,sVar6);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar2 = param_2[1];
      uVar5 = lVar2 + 1;
    }
    param_2[1] = uVar5;
    *(undefined1 *)((long)pvVar1 + lVar2) = 0x28;
    sVar6 = *(size_t *)(param_1 + 0x18);
    lVar2 = param_2[1];
    if (sVar6 != 0) {
      pvVar7 = *(void **)(param_1 + 0x10);
      pvVar1 = (void *)*param_2;
      if ((ulong)param_2[2] < lVar2 + sVar6) {
        sVar3 = param_2[2] * 2;
        uVar5 = lVar2 + sVar6 + 0x3e0;
        if (sVar3 < uVar5 || sVar3 - uVar5 == 0) {
          sVar3 = uVar5;
        }
        param_2[2] = sVar3;
        pvVar1 = realloc(pvVar1,sVar3);
        *param_2 = pvVar1;
        if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        lVar2 = param_2[1];
      }
      memcpy((void *)((long)pvVar1 + lVar2),pvVar7,sVar6);
      lVar2 = param_2[1] + sVar6;
      param_2[1] = lVar2;
    }
    uVar5 = lVar2 + 1;
    pvVar1 = (void *)*param_2;
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
    if ((ulong)param_2[2] < uVar5) {
      sVar6 = param_2[2] * 2;
      uVar5 = lVar2 + 0x3e1;
      if (sVar6 < uVar5 || sVar6 - uVar5 == 0) {
        sVar6 = uVar5;
      }
      param_2[2] = sVar6;
      pvVar1 = realloc(pvVar1,sVar6);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar2 = param_2[1];
      uVar5 = lVar2 + 1;
    }
    param_2[1] = uVar5;
    *(undefined1 *)((long)pvVar1 + lVar2) = 0x29;
  }
  __src = *(char **)(param_1 + 0x20);
  if (*__src == 'n') {
    pvVar1 = (void *)*param_2;
    puVar8 = param_2 + 1;
    uVar4 = *puVar8;
    uVar5 = uVar4 + 1;
    if ((ulong)param_2[2] < uVar5) {
      sVar6 = param_2[2] * 2;
      uVar4 = uVar4 + 0x3e1;
      if (sVar6 < uVar4 || sVar6 - uVar4 == 0) {
        sVar6 = uVar4;
      }
      param_2[2] = sVar6;
      pvVar1 = realloc(pvVar1,sVar6);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar4 = *puVar8;
      uVar5 = uVar4 + 1;
    }
    *puVar8 = uVar5;
    *(undefined1 *)((long)pvVar1 + uVar4) = 0x2d;
    sVar6 = *(long *)(param_1 + 0x28) - 1;
    if (sVar6 == 0) goto LAB_00136be4;
    uVar5 = param_2[1];
    pvVar1 = (void *)*param_2;
    lVar2 = *(long *)(param_1 + 0x20);
    if ((ulong)param_2[2] < uVar5 + sVar6) {
      sVar3 = param_2[2] * 2;
      uVar5 = uVar5 + sVar6 + 0x3e0;
      if (sVar3 < uVar5 || sVar3 - uVar5 == 0) {
        sVar3 = uVar5;
      }
      param_2[2] = sVar3;
      pvVar1 = realloc(pvVar1,sVar3);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar5 = *puVar8;
    }
    pvVar1 = (void *)((long)pvVar1 + uVar5);
    __src = (char *)(lVar2 + 1);
  }
  else {
    sVar6 = *(size_t *)(param_1 + 0x28);
    if (sVar6 == 0) goto LAB_00136be4;
    pvVar1 = (void *)*param_2;
    lVar2 = param_2[1];
    if ((ulong)param_2[2] < lVar2 + sVar6) {
      sVar3 = param_2[2] * 2;
      uVar5 = lVar2 + sVar6 + 0x3e0;
      if (sVar3 < uVar5 || sVar3 - uVar5 == 0) {
        sVar3 = uVar5;
      }
      param_2[2] = sVar3;
      pvVar1 = realloc(pvVar1,sVar3);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar2 = param_2[1];
    }
    pvVar1 = (void *)((long)pvVar1 + lVar2);
  }
  memcpy(pvVar1,__src,sVar6);
  param_2[1] = param_2[1] + sVar6;
LAB_00136be4:
  uVar5 = *(ulong *)(param_1 + 0x18);
  if ((uVar5 < 4) && (uVar5 != 0)) {
    lVar2 = param_2[1];
    pvVar1 = (void *)*param_2;
    pvVar7 = *(void **)(param_1 + 0x10);
    if ((ulong)param_2[2] < lVar2 + uVar5) {
      sVar6 = param_2[2] * 2;
      uVar4 = lVar2 + uVar5 + 0x3e0;
      if (sVar6 < uVar4 || sVar6 - uVar4 == 0) {
        sVar6 = uVar4;
      }
      param_2[2] = sVar6;
      pvVar1 = realloc(pvVar1,sVar6);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar2 = param_2[1];
    }
    memcpy((void *)((long)pvVar1 + lVar2),pvVar7,uVar5);
    param_2[1] = param_2[1] + uVar5;
  }
  return;
}


// ===== 00136c80  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00136c88  FUN_00136c88 =====

void FUN_00136c88(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  size_t __n;
  char *__src;
  char cVar2;
  void *__ptr;
  size_t __size;
  long lVar3;
  
  cVar2 = *(char *)(param_1 + 0xb);
  __ptr = (void *)*param_2;
  __n = 4;
  if (cVar2 == '\0') {
    __n = 5;
  }
  lVar3 = param_2[1];
  if ((ulong)param_2[2] < __n + lVar3) {
    __size = param_2[2] * 2;
    uVar1 = __n + lVar3 + 0x3e0;
    if (__size < uVar1 || __size - uVar1 == 0) {
      __size = uVar1;
    }
    param_2[2] = __size;
    __ptr = realloc(__ptr,__size);
    *param_2 = __ptr;
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar3 = param_2[1];
  }
  __src = "false";
  if (cVar2 != '\0') {
    __src = "true";
  }
  memcpy((void *)((long)__ptr + lVar3),__src,__n);
  param_2[1] = param_2[1] + __n;
  return;
}


// ===== 00136d30  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00136d38  FUN_00136d38 =====

void FUN_00136d38(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  undefined1 uVar6;
  bool bVar7;
  int iVar8;
  void *__ptr;
  char cVar9;
  char cVar10;
  undefined1 *puVar11;
  size_t __size;
  long lVar12;
  undefined1 *puVar13;
  char cVar14;
  char cVar15;
  byte *pbVar16;
  size_t __n;
  char local_40 [28];
  undefined4 local_24;
  
  if (7 < *(ulong *)(param_1 + 0x18)) {
    pbVar16 = *(byte **)(param_1 + 0x10);
    cVar9 = '\t';
    cVar2 = cVar9;
    if (0xfffffff5 < *pbVar16 - 0x3a) {
      cVar2 = '\0';
    }
    cVar14 = -0x57;
    cVar3 = -0x57;
    if (0xfffffff5 < pbVar16[1] - 0x3a) {
      cVar3 = -0x30;
    }
    if (0xfffffff5 < pbVar16[2] - 0x3a) {
      cVar9 = '\0';
    }
    if (0xfffffff5 < pbVar16[3] - 0x3a) {
      cVar14 = -0x30;
    }
    cVar10 = '\t';
    cVar4 = cVar10;
    if (0xfffffff5 < pbVar16[4] - 0x3a) {
      cVar4 = '\0';
    }
    cVar15 = -0x57;
    cVar5 = cVar15;
    if (0xfffffff5 < pbVar16[5] - 0x3a) {
      cVar5 = -0x30;
    }
    if (0xfffffff5 < pbVar16[6] - 0x3a) {
      cVar10 = '\0';
    }
    if (0xfffffff5 < pbVar16[7] - 0x3a) {
      cVar15 = -0x30;
    }
    puVar11 = (undefined1 *)((ulong)&local_24 | 1);
    local_24 = (float)CONCAT13(cVar15 + pbVar16[7] + (cVar10 + pbVar16[6]) * '\x10',
                               CONCAT12(cVar5 + pbVar16[5] + (cVar4 + pbVar16[4]) * '\x10',
                                        CONCAT11(cVar14 + pbVar16[3] + (cVar9 + pbVar16[2]) * '\x10'
                                                 ,cVar3 + pbVar16[1] + (cVar2 + *pbVar16) * '\x10'))
                              );
    puVar13 = (undefined1 *)((ulong)&local_24 | 3);
    do {
      uVar6 = puVar11[-1];
      puVar11[-1] = *puVar13;
      *puVar13 = uVar6;
      bVar7 = puVar11 < puVar13 + -1;
      puVar11 = puVar11 + 1;
      puVar13 = puVar13 + -1;
    } while (bVar7);
    local_40[0] = '\0';
    local_40[1] = '\0';
    local_40[2] = '\0';
    local_40[3] = '\0';
    local_40[4] = '\0';
    local_40[5] = '\0';
    local_40[6] = '\0';
    local_40[7] = '\0';
    local_40[8] = '\0';
    local_40[9] = '\0';
    local_40[10] = '\0';
    local_40[0xb] = '\0';
    local_40[0xc] = '\0';
    local_40[0xd] = '\0';
    local_40[0xe] = '\0';
    local_40[0xf] = '\0';
    local_40[0x10] = '\0';
    local_40[0x11] = '\0';
    local_40[0x12] = '\0';
    local_40[0x13] = '\0';
    local_40[0x14] = '\0';
    local_40[0x15] = '\0';
    local_40[0x16] = '\0';
    local_40[0x17] = '\0';
    iVar8 = snprintf(local_40,0x18,"%af",(double)local_24);
    if (iVar8 != 0) {
      lVar12 = param_2[1];
      __n = (size_t)iVar8;
      __ptr = (void *)*param_2;
      if ((ulong)param_2[2] < lVar12 + __n) {
        __size = param_2[2] * 2;
        uVar1 = lVar12 + __n + 0x3e0;
        if (__size < uVar1 || __size - uVar1 == 0) {
          __size = uVar1;
        }
        param_2[2] = __size;
        __ptr = realloc(__ptr,__size);
        *param_2 = __ptr;
        if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        lVar12 = param_2[1];
      }
      memcpy((void *)((long)__ptr + lVar12),local_40,__n);
      param_2[1] = param_2[1] + __n;
    }
  }
  return;
}


// ===== 00136eec  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00136ef4  FUN_00136ef4 =====

void FUN_00136ef4(long param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar4;
  int iVar5;
  void *__ptr;
  byte *pbVar6;
  undefined1 *puVar7;
  size_t __size;
  long lVar8;
  undefined1 *puVar9;
  size_t __n;
  byte bVar10;
  byte bVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  char local_50 [40];
  undefined8 local_28;
  
  if (0xf < *(ulong *)(param_1 + 0x18)) {
    pbVar6 = *(byte **)(param_1 + 0x10);
    bVar10 = pbVar6[2];
    bVar11 = pbVar6[3];
    puVar9 = (undefined1 *)((ulong)&local_28 | 1);
    auVar18._0_4_ = (CONCAT12(bVar10,(ushort)*pbVar6) & 0xffff) - 0x3a;
    auVar18._4_4_ = bVar10 - 0x3a;
    auVar18._8_4_ = pbVar6[4] - 0x3a;
    auVar18._12_4_ = pbVar6[6] - 0x3a;
    auVar17._0_4_ = pbVar6[8] - 0x3a;
    auVar17._4_4_ = pbVar6[10] - 0x3a;
    auVar17._8_4_ = pbVar6[0xc] - 0x3a;
    auVar17._12_4_ = pbVar6[0xe] - 0x3a;
    auVar15._0_4_ = pbVar6[9] - 0x3a;
    auVar15._4_4_ = pbVar6[0xb] - 0x3a;
    auVar15._8_4_ = pbVar6[0xd] - 0x3a;
    auVar15._12_4_ = pbVar6[0xf] - 0x3a;
    auVar13._8_4_ = 0xfffffff6;
    auVar13._0_8_ = 0xfffffff6fffffff6;
    auVar13._12_4_ = 0xfffffff6;
    auVar13 = NEON_cmhi(auVar13,auVar17,4);
    auVar16._8_4_ = 0xfffffff6;
    auVar16._0_8_ = 0xfffffff6fffffff6;
    auVar16._12_4_ = 0xfffffff6;
    auVar17 = NEON_cmhi(auVar16,auVar18,4);
    auVar19._8_4_ = 0xfffffff6;
    auVar19._0_8_ = 0xfffffff6fffffff6;
    auVar19._12_4_ = 0xfffffff6;
    auVar16 = NEON_cmhi(auVar19,auVar15,4);
    auVar2._8_4_ = 0xfffffff6;
    auVar2._0_8_ = 0xfffffff6fffffff6;
    auVar2._12_4_ = 0xfffffff6;
    auVar3._4_4_ = bVar11 - 0x3a;
    auVar3._0_4_ = (CONCAT12(bVar11,(ushort)pbVar6[1]) & 0xffff) - 0x3a;
    auVar3._8_4_ = pbVar6[5] - 0x3a;
    auVar3._12_4_ = pbVar6[7] - 0x3a;
    auVar19 = NEON_cmhi(auVar2,auVar3,4);
    uVar12 = CONCAT17(auVar13[0xc],
                      CONCAT16(auVar13[8],
                               CONCAT15(auVar13[4],
                                        CONCAT14(auVar13[0],
                                                 CONCAT13(auVar17[0xc],
                                                          CONCAT12(auVar17[8],
                                                                   CONCAT11(auVar17[4],auVar17[0])))
                                                )))) & 0x909090909090909;
    uVar14 = NEON_bsl(CONCAT17(auVar16[0xc],
                               CONCAT16(auVar16[8],
                                        CONCAT15(auVar16[4],
                                                 CONCAT14(auVar16[0],
                                                          CONCAT13(auVar19[0xc],
                                                                   CONCAT12(auVar19[8],
                                                                            CONCAT11(auVar19[4],
                                                                                     auVar19[0])))))
                                       )),0xa9a9a9a9a9a9a9a9,0xd0d0d0d0d0d0d0d0,1);
    local_28 = CONCAT17((char)((ulong)uVar14 >> 0x38) + pbVar6[0xf] +
                        ((char)(uVar12 >> 0x38) + pbVar6[0xe]) * '\x10',
                        CONCAT16((char)((ulong)uVar14 >> 0x30) + pbVar6[0xd] +
                                 ((char)(uVar12 >> 0x30) + pbVar6[0xc]) * '\x10',
                                 CONCAT15((char)((ulong)uVar14 >> 0x28) + pbVar6[0xb] +
                                          ((char)(uVar12 >> 0x28) + pbVar6[10]) * '\x10',
                                          CONCAT14((char)((ulong)uVar14 >> 0x20) + pbVar6[9] +
                                                   ((char)(uVar12 >> 0x20) + pbVar6[8]) * '\x10',
                                                   CONCAT13((char)((ulong)uVar14 >> 0x18) +
                                                            pbVar6[7] +
                                                            ((char)(uVar12 >> 0x18) + pbVar6[6]) *
                                                            '\x10',CONCAT12((char)((ulong)uVar14 >>
                                                                                  0x10) + pbVar6[5]
                                                                            + ((char)(uVar12 >> 0x10
                                                                                     ) + pbVar6[4])
                                                                              * '\x10',
                                                                            CONCAT11((char)((ulong)
                                                  uVar14 >> 8) + bVar11 +
                                                  ((char)(uVar12 >> 8) + bVar10) * '\x10',
                                                  (char)uVar14 + pbVar6[1] +
                                                  ((char)uVar12 + *pbVar6) * '\x10')))))));
    puVar7 = (undefined1 *)((ulong)&local_28 | 7);
    do {
      uVar1 = puVar9[-1];
      puVar9[-1] = *puVar7;
      *puVar7 = uVar1;
      bVar4 = puVar9 < puVar7 + -1;
      puVar9 = puVar9 + 1;
      puVar7 = puVar7 + -1;
    } while (bVar4);
    local_50[8] = '\0';
    local_50[9] = '\0';
    local_50[10] = '\0';
    local_50[0xb] = '\0';
    local_50[0xc] = '\0';
    local_50[0xd] = '\0';
    local_50[0xe] = '\0';
    local_50[0xf] = '\0';
    local_50[0] = '\0';
    local_50[1] = '\0';
    local_50[2] = '\0';
    local_50[3] = '\0';
    local_50[4] = '\0';
    local_50[5] = '\0';
    local_50[6] = '\0';
    local_50[7] = '\0';
    local_50[0x18] = '\0';
    local_50[0x19] = '\0';
    local_50[0x1a] = '\0';
    local_50[0x1b] = '\0';
    local_50[0x1c] = '\0';
    local_50[0x1d] = '\0';
    local_50[0x1e] = '\0';
    local_50[0x1f] = '\0';
    local_50[0x10] = '\0';
    local_50[0x11] = '\0';
    local_50[0x12] = '\0';
    local_50[0x13] = '\0';
    local_50[0x14] = '\0';
    local_50[0x15] = '\0';
    local_50[0x16] = '\0';
    local_50[0x17] = '\0';
    iVar5 = snprintf(local_50,0x20,"%a",local_28);
    if (iVar5 != 0) {
      lVar8 = param_2[1];
      __n = (size_t)iVar5;
      __ptr = (void *)*param_2;
      if ((ulong)param_2[2] < lVar8 + __n) {
        __size = param_2[2] * 2;
        uVar12 = lVar8 + __n + 0x3e0;
        if (__size < uVar12 || __size - uVar12 == 0) {
          __size = uVar12;
        }
        param_2[2] = __size;
        __ptr = realloc(__ptr,__size);
        *param_2 = __ptr;
        if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        lVar8 = param_2[1];
      }
      memcpy((void *)((long)__ptr + lVar8),local_50,__n);
      param_2[1] = param_2[1] + __n;
    }
  }
  return;
}


// ===== 001370b8  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 001370c0  FUN_001370c0 =====

void FUN_001370c0(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined1 uVar6;
  bool bVar7;
  int iVar8;
  void *__ptr;
  byte *pbVar9;
  undefined1 *puVar10;
  size_t __size;
  long lVar11;
  undefined1 *puVar12;
  size_t __n;
  uint6 uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  char local_60 [48];
  undefined8 local_30;
  undefined8 uStack_28;
  
  if (0x1f < *(ulong *)(param_1 + 0x18)) {
    pbVar9 = *(byte **)(param_1 + 0x10);
    auVar22._8_4_ = 0xfffffff6;
    auVar22._0_8_ = 0xfffffff6fffffff6;
    auVar22._12_4_ = 0xfffffff6;
    bVar2 = pbVar9[2];
    bVar3 = pbVar9[3];
    bVar4 = pbVar9[0x12];
    bVar5 = pbVar9[0x13];
    auVar24._0_4_ = (CONCAT12(bVar2,(ushort)*pbVar9) & 0xffff) - 0x3a;
    auVar24._4_4_ = bVar2 - 0x3a;
    auVar24._8_4_ = pbVar9[4] - 0x3a;
    auVar24._12_4_ = pbVar9[6] - 0x3a;
    auVar14._0_4_ = pbVar9[8] - 0x3a;
    auVar14._4_4_ = pbVar9[10] - 0x3a;
    auVar14._8_4_ = pbVar9[0xc] - 0x3a;
    auVar14._12_4_ = pbVar9[0xe] - 0x3a;
    auVar15._0_4_ = pbVar9[9] - 0x3a;
    auVar15._4_4_ = pbVar9[0xb] - 0x3a;
    auVar15._8_4_ = pbVar9[0xd] - 0x3a;
    auVar15._12_4_ = pbVar9[0xf] - 0x3a;
    auVar14 = NEON_cmhi(auVar22,auVar14,4);
    auVar15 = NEON_cmhi(auVar22,auVar15,4);
    auVar20._0_4_ = pbVar9[0x18] - 0x3a;
    auVar20._4_4_ = pbVar9[0x1a] - 0x3a;
    auVar20._8_4_ = pbVar9[0x1c] - 0x3a;
    auVar20._12_4_ = pbVar9[0x1e] - 0x3a;
    auVar17._0_4_ = (CONCAT12(bVar4,(ushort)pbVar9[0x10]) & 0xffff) - 0x3a;
    auVar17._4_4_ = bVar4 - 0x3a;
    auVar17._8_4_ = pbVar9[0x14] - 0x3a;
    auVar17._12_4_ = pbVar9[0x16] - 0x3a;
    auVar18._0_4_ = (CONCAT12(bVar5,(ushort)pbVar9[0x11]) & 0xffff) - 0x3a;
    auVar18._4_4_ = bVar5 - 0x3a;
    auVar18._8_4_ = pbVar9[0x15] - 0x3a;
    auVar18._12_4_ = pbVar9[0x17] - 0x3a;
    auVar20 = NEON_cmhi(auVar22,auVar20,4);
    auVar17 = NEON_cmhi(auVar22,auVar17,4);
    auVar24 = NEON_cmhi(auVar22,auVar24,4);
    auVar19._4_4_ = pbVar9[0x1b] - 0x3a;
    auVar19._0_4_ = pbVar9[0x19] - 0x3a;
    auVar19._8_4_ = pbVar9[0x1d] - 0x3a;
    auVar19._12_4_ = pbVar9[0x1f] - 0x3a;
    auVar25 = NEON_cmhi(auVar22,auVar19,4);
    auVar19 = NEON_cmhi(auVar22,auVar18,4);
    auVar23._4_4_ = bVar3 - 0x3a;
    auVar23._0_4_ = (CONCAT12(bVar3,(ushort)pbVar9[1]) & 0xffff) - 0x3a;
    auVar23._8_4_ = pbVar9[5] - 0x3a;
    auVar23._12_4_ = pbVar9[7] - 0x3a;
    auVar23 = NEON_cmhi(auVar22,auVar23,4);
    auVar21[8] = 0xa9;
    auVar21._0_8_ = 0xa9a9a9a9a9a9a9a9;
    auVar21[9] = 0xa9;
    auVar21[10] = 0xa9;
    auVar21[0xb] = 0xa9;
    auVar21[0xc] = 0xa9;
    auVar21[0xd] = 0xa9;
    auVar21[0xe] = 0xa9;
    auVar21[0xf] = 0xa9;
    auVar16[1] = auVar23[4];
    auVar16[0] = auVar23[0];
    auVar16[2] = auVar23[8];
    auVar16[3] = auVar23[0xc];
    auVar16[4] = auVar15[0];
    auVar16[5] = auVar15[4];
    auVar16[6] = auVar15[8];
    auVar16[7] = auVar15[0xc];
    auVar16[8] = auVar19[0];
    auVar16[9] = auVar19[4];
    auVar16[10] = auVar19[8];
    auVar16[0xb] = auVar19[0xc];
    auVar16[0xc] = auVar25[0];
    auVar16[0xd] = auVar25[4];
    auVar16[0xe] = auVar25[8];
    auVar16[0xf] = auVar25[0xc];
    auVar25[8] = 0xd0;
    auVar25._0_8_ = 0xd0d0d0d0d0d0d0d0;
    auVar25[9] = 0xd0;
    auVar25[10] = 0xd0;
    auVar25[0xb] = 0xd0;
    auVar25[0xc] = 0xd0;
    auVar25[0xd] = 0xd0;
    auVar25[0xe] = 0xd0;
    auVar25[0xf] = 0xd0;
    uVar13 = CONCAT15(auVar14[4],
                      CONCAT14(auVar14[0],
                               CONCAT13(auVar24[0xc],
                                        CONCAT12(auVar24[8],CONCAT11(auVar24[4],auVar24[0]))))) &
             0x90909090909;
    auVar19 = NEON_bsl(auVar16,auVar21,auVar25,1);
    puVar12 = (undefined1 *)((ulong)&local_30 | 1);
    local_30 = CONCAT17(auVar19[7] + pbVar9[0xf] + ((auVar14[0xc] & 9) + pbVar9[0xe]) * '\x10',
                        CONCAT16(auVar19[6] + pbVar9[0xd] +
                                 ((auVar14[8] & 9) + pbVar9[0xc]) * '\x10',
                                 CONCAT15(auVar19[5] + pbVar9[0xb] +
                                          ((char)(uVar13 >> 0x28) + pbVar9[10]) * '\x10',
                                          CONCAT14(auVar19[4] + pbVar9[9] +
                                                   ((char)(uVar13 >> 0x20) + pbVar9[8]) * '\x10',
                                                   CONCAT13(auVar19[3] + pbVar9[7] +
                                                            ((char)(uVar13 >> 0x18) + pbVar9[6]) *
                                                            '\x10',CONCAT12(auVar19[2] + pbVar9[5] +
                                                                            ((char)(uVar13 >> 0x10)
                                                                            + pbVar9[4]) * '\x10',
                                                                            CONCAT11(auVar19[1] +
                                                                                     bVar3 + ((char)
                                                  (uVar13 >> 8) + bVar2) * '\x10',
                                                  auVar19[0] + pbVar9[1] +
                                                  ((char)uVar13 + *pbVar9) * '\x10')))))));
    uStack_28 = CONCAT17(auVar19[0xf] + pbVar9[0x1f] + ((auVar20[0xc] & 9) + pbVar9[0x1e]) * '\x10',
                         CONCAT16(auVar19[0xe] + pbVar9[0x1d] +
                                  ((auVar20[8] & 9) + pbVar9[0x1c]) * '\x10',
                                  CONCAT15(auVar19[0xd] + pbVar9[0x1b] +
                                           ((auVar20[4] & 9) + pbVar9[0x1a]) * '\x10',
                                           CONCAT14(auVar19[0xc] + pbVar9[0x19] +
                                                    ((auVar20[0] & 9) + pbVar9[0x18]) * '\x10',
                                                    CONCAT13(auVar19[0xb] + pbVar9[0x17] +
                                                             ((auVar17[0xc] & 9) + pbVar9[0x16]) *
                                                             '\x10',CONCAT12(auVar19[10] +
                                                                             pbVar9[0x15] +
                                                                             ((auVar17[8] & 9) +
                                                                             pbVar9[0x14]) * '\x10',
                                                                             CONCAT11(auVar19[9] +
                                                                                      bVar5 + ((
                                                  auVar17[4] & 9) + bVar4) * '\x10',
                                                  auVar19[8] + pbVar9[0x11] +
                                                  ((auVar17[0] & 9) + pbVar9[0x10]) * '\x10')))))));
    puVar10 = (undefined1 *)((ulong)&local_30 | 0xf);
    do {
      uVar6 = puVar12[-1];
      puVar12[-1] = *puVar10;
      *puVar10 = uVar6;
      bVar7 = puVar12 < puVar10 + -1;
      puVar12 = puVar12 + 1;
      puVar10 = puVar10 + -1;
    } while (bVar7);
    local_60[0x22] = '\0';
    local_60[0x23] = '\0';
    local_60[0x24] = '\0';
    local_60[0x25] = '\0';
    local_60[0x26] = '\0';
    local_60[0x27] = '\0';
    local_60[0x28] = '\0';
    local_60[0x29] = '\0';
    local_60[0x20] = '\0';
    local_60[0x21] = '\0';
    local_60[8] = '\0';
    local_60[9] = '\0';
    local_60[10] = '\0';
    local_60[0xb] = '\0';
    local_60[0xc] = '\0';
    local_60[0xd] = '\0';
    local_60[0xe] = '\0';
    local_60[0xf] = '\0';
    local_60[0] = '\0';
    local_60[1] = '\0';
    local_60[2] = '\0';
    local_60[3] = '\0';
    local_60[4] = '\0';
    local_60[5] = '\0';
    local_60[6] = '\0';
    local_60[7] = '\0';
    local_60[0x18] = '\0';
    local_60[0x19] = '\0';
    local_60[0x1a] = '\0';
    local_60[0x1b] = '\0';
    local_60[0x1c] = '\0';
    local_60[0x1d] = '\0';
    local_60[0x1e] = '\0';
    local_60[0x1f] = '\0';
    local_60[0x10] = '\0';
    local_60[0x11] = '\0';
    local_60[0x12] = '\0';
    local_60[0x13] = '\0';
    local_60[0x14] = '\0';
    local_60[0x15] = '\0';
    local_60[0x16] = '\0';
    local_60[0x17] = '\0';
    iVar8 = snprintf(local_60,0x2a,"%LaL",local_30);
    if (iVar8 != 0) {
      lVar11 = param_2[1];
      __n = (size_t)iVar8;
      __ptr = (void *)*param_2;
      if ((ulong)param_2[2] < lVar11 + __n) {
        __size = param_2[2] * 2;
        uVar1 = lVar11 + __n + 0x3e0;
        if (__size < uVar1 || __size - uVar1 == 0) {
          __size = uVar1;
        }
        param_2[2] = __size;
        __ptr = realloc(__ptr,__size);
        *param_2 = __ptr;
        if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        lVar11 = param_2[1];
      }
      memcpy((void *)((long)__ptr + lVar11),local_60,__n);
      param_2[1] = param_2[1] + __n;
    }
  }
  return;
}


// ===== 001373c0  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 001373c8  FUN_001373c8 =====

void FUN_001373c8(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  size_t sVar4;
  long *plVar5;
  
  lVar3 = param_2[1];
  pvVar2 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar3 + 2U) {
    sVar4 = param_2[2] * 2;
    uVar1 = lVar3 + 0x3e2;
    if (sVar4 < uVar1 || sVar4 - uVar1 == 0) {
      sVar4 = uVar1;
    }
    param_2[2] = sVar4;
    pvVar2 = realloc(pvVar2,sVar4);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar3 = param_2[1];
  }
  *(undefined2 *)((long)pvVar2 + lVar3) = 0x3c22;
  plVar5 = *(long **)(param_1 + 0x10);
  lVar3 = *plVar5;
  param_2[1] = param_2[1] + 2;
  (**(code **)(lVar3 + 0x20))(plVar5,param_2);
  if ((*(ushort *)((long)plVar5 + 9) & 0xc0) != 0x40) {
    (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
  }
  lVar3 = param_2[1];
  pvVar2 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar3 + 2U) {
    sVar4 = param_2[2] * 2;
    uVar1 = lVar3 + 0x3e2;
    if (sVar4 < uVar1 || sVar4 - uVar1 == 0) {
      sVar4 = uVar1;
    }
    param_2[2] = sVar4;
    pvVar2 = realloc(pvVar2,sVar4);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar3 = param_2[1];
  }
  *(undefined2 *)((long)pvVar2 + lVar3) = 0x223e;
  param_2[1] = param_2[1] + 2;
  return;
}


// ===== 001374d4  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 001374dc  FUN_001374dc =====

void FUN_001374dc(long *param_1,long param_2)

{
  void *__dest;
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  size_t __n;
  long *plVar4;
  undefined8 *puVar5;
  
  lVar1 = *(long *)(param_2 + 0x298);
  lVar2 = *(long *)(param_2 + 0x2a0);
  *param_1 = param_2;
  plVar4 = param_1 + 5;
  param_1[6] = 0;
  *plVar4 = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  puVar5 = *(undefined8 **)(param_2 + 0x2a0);
  puVar3 = *(undefined8 **)(param_2 + 0x2a8);
  param_1[1] = lVar2 - lVar1 >> 3;
  param_1[2] = (long)plVar4;
  param_1[3] = (long)plVar4;
  param_1[4] = (long)(param_1 + 0xd);
  if (puVar5 == puVar3) {
    puVar3 = *(undefined8 **)(param_2 + 0x298);
    __n = (long)puVar5 - (long)puVar3;
    if (puVar3 == (undefined8 *)(param_2 + 0x2b0)) {
      __dest = malloc(__n * 2);
      if (__dest == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001375e0 to 001375e3 has its CatchHandler @ 001375e4 */
        abort();
      }
      if (puVar5 != puVar3) {
        memmove(__dest,puVar3,__n);
      }
      *(void **)(param_2 + 0x298) = __dest;
    }
    else {
      __dest = realloc(puVar3,__n * 2);
      *(void **)(param_2 + 0x298) = __dest;
      if (__dest == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00137574 to 00137577 has its CatchHandler @ 001375e4 */
        abort();
      }
    }
    puVar5 = (undefined8 *)((long)__dest + __n);
    *(undefined8 **)(param_2 + 0x2a0) = puVar5;
    *(void **)(param_2 + 0x2a8) = (void *)((long)__dest + ((long)__n >> 2) * 8);
  }
  *(undefined8 **)(param_2 + 0x2a0) = puVar5 + 1;
  *puVar5 = param_1 + 2;
  return;
}


// ===== 00137604  FUN_00137604 =====

undefined8 * FUN_00137604(long *param_1,undefined8 param_2)

{
  long *__src;
  short *psVar1;
  ushort uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *__ptr;
  void *pvVar8;
  long lVar9;
  undefined **ppuVar10;
  char *pcVar11;
  long lVar12;
  undefined1 uVar13;
  char *pcVar14;
  size_t __n;
  long *plVar15;
  undefined1 auVar16 [16];
  undefined8 *local_d0;
  ulong uStack_c8;
  undefined1 *local_c0 [3];
  undefined1 auStack_a8 [64];
  long *local_68;
  undefined8 *local_60;
  undefined8 local_58;
  
  psVar1 = (short *)*param_1;
  local_60 = &local_58;
  if ((ulong)(param_1[1] - (long)psVar1) < 2) {
LAB_00137640:
    puVar3 = (undefined8 *)0x0;
  }
  else {
    local_68 = param_1;
    local_58 = param_2;
    if (*psVar1 == 0x7954) {
      *param_1 = (long)(psVar1 + 1);
      uVar7 = FUN_00137db0(&local_68,0);
      pvVar8 = (void *)param_1[0x266];
      lVar12 = *(long *)((long)pvVar8 + 8);
      puVar4 = (undefined8 *)pvVar8;
      if (lVar12 - 0xfd0U < 0xfffffffffffff010) {
        puVar4 = (undefined8 *)malloc(0x1000);
        if (puVar4 == (undefined8 *)0x0) {
LAB_00137a80:
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar12 = 0;
        *puVar4 = pvVar8;
        puVar4[1] = 0;
        param_1[0x266] = (long)puVar4;
      }
      *(long *)((long)puVar4 + 8) = lVar12 + 0x20;
      puVar3 = (undefined8 *)((long)puVar4 + lVar12 + 0x10);
      *puVar3 = &PTR_FUN_0014ef48;
      uVar2 = *(ushort *)((long)puVar4 + lVar12 + 0x19);
      *(undefined8 *)((long)puVar4 + lVar12 + 0x20) = uVar7;
      *(undefined1 *)((long)puVar4 + lVar12 + 0x18) = 0x23;
    }
    else {
      if (*psVar1 == 0x6b54) {
        *param_1 = (long)(psVar1 + 1);
        lVar12 = FUN_0012c1f0(param_1,0);
        if (lVar12 == 0) {
          return (undefined8 *)0x0;
        }
        lVar5 = FUN_00137db0(&local_68,0);
        pvVar8 = (void *)param_1[0x266];
        lVar9 = *(long *)((long)pvVar8 + 8);
        puVar4 = (undefined8 *)pvVar8;
        if (lVar9 - 0xfd0U < 0xfffffffffffff010) {
          puVar4 = (undefined8 *)malloc(0x1000);
          if (puVar4 == (undefined8 *)0x0) goto LAB_00137a80;
          lVar9 = 0;
          *puVar4 = pvVar8;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        lVar6 = (long)puVar4 + lVar9;
        ppuVar10 = &PTR_FUN_0014efb8;
        *(long *)((long)puVar4 + 8) = lVar9 + 0x20;
        uVar13 = 0x24;
      }
      else {
        if (*psVar1 != 0x6e54) {
          if (*psVar1 == 0x7454) {
            *param_1 = (long)(psVar1 + 1);
            uVar7 = FUN_00137db0(&local_68,2);
            lVar12 = param_1[2];
            lVar5 = param_1[3];
            FUN_001374dc(&local_d0,param_1);
            pcVar11 = (char *)*param_1;
            pcVar14 = (char *)param_1[1];
            __src = param_1 + 5;
            do {
              if ((pcVar11 != pcVar14) && (*pcVar11 == 'E')) {
                lVar9 = 0;
                goto LAB_001379b0;
              }
                    /* try { // try from 001378bc to 001378c7 has its CatchHandler @ 00137af0 */
              puVar4 = (undefined8 *)FUN_00137604(param_1,local_c0);
              if (puVar4 == (undefined8 *)0x0) goto LAB_00137a38;
              plVar15 = (long *)param_1[3];
              if (plVar15 == (long *)param_1[4]) {
                __ptr = (long *)param_1[2];
                __n = (long)plVar15 - (long)__ptr;
                if (__ptr == __src) {
                  pvVar8 = malloc(__n * 2);
                  if (pvVar8 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                    abort();
                  }
                  if (plVar15 != __src) {
                    memcpy(pvVar8,__src,__n);
                  }
                  param_1[2] = (long)pvVar8;
                }
                else {
                  pvVar8 = realloc(__ptr,__n * 2);
                  param_1[2] = (long)pvVar8;
                  if (pvVar8 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00137a84 to 00137a8b has its CatchHandler @ 00137adc */
                    abort();
                  }
                }
                plVar15 = (long *)((long)pvVar8 + __n);
                param_1[3] = (long)plVar15;
                param_1[4] = (long)((long)pvVar8 + ((long)__n >> 2) * 8);
              }
              param_1[3] = (long)(plVar15 + 1);
              *plVar15 = (long)puVar4;
              pcVar11 = (char *)*param_1;
              pcVar14 = (char *)param_1[1];
            } while ((pcVar11 == pcVar14) || (*pcVar11 != 'Q'));
            uVar13 = *(undefined1 *)((long)param_1 + 0x30a);
            *param_1 = (long)(pcVar11 + 1);
            *(undefined1 *)((long)param_1 + 0x30a) = 1;
                    /* try { // try from 00137978 to 0013797f has its CatchHandler @ 00137aac */
            lVar9 = FUN_0012ff04(param_1);
            *(undefined1 *)((long)param_1 + 0x30a) = uVar13;
            if ((lVar9 == 0) ||
               ((pcVar11 = (char *)*param_1, pcVar11 == (char *)param_1[1] || (*pcVar11 != 'E')))) {
              puVar4 = (undefined8 *)0x0;
            }
            else {
LAB_001379b0:
              *param_1 = (long)(pcVar11 + 1);
                    /* try { // try from 001379b8 to 001379c3 has its CatchHandler @ 00137ac4 */
              auVar16 = FUN_0012ce20(param_1,lVar5 - lVar12 >> 3);
              pvVar8 = (void *)param_1[0x266];
              lVar12 = *(long *)((long)pvVar8 + 8);
              puVar3 = (undefined8 *)pvVar8;
              if (lVar12 - 0xfc0U < 0xfffffffffffff010) {
                puVar3 = (undefined8 *)malloc(0x1000);
                if (puVar3 == (undefined8 *)0x0) goto LAB_00137a80;
                lVar12 = 0;
                *puVar3 = pvVar8;
                puVar3[1] = 0;
                param_1[0x266] = (long)puVar3;
              }
              *(long *)((long)puVar3 + 8) = lVar12 + 0x30;
              puVar4 = (undefined8 *)((long)puVar3 + lVar12 + 0x10);
              *puVar4 = &PTR_FUN_0014f098;
              *(undefined1 *)((long)puVar3 + lVar12 + 0x18) = 0x26;
              *(undefined8 *)((long)puVar3 + lVar12 + 0x20) = uVar7;
              *(undefined1 (*) [16])((long)puVar3 + lVar12 + 0x28) = auVar16;
              *(long *)((long)puVar3 + lVar12 + 0x38) = lVar9;
              *(ushort *)((long)puVar3 + lVar12 + 0x19) =
                   *(ushort *)((long)puVar3 + lVar12 + 0x19) & 0xf000 | 0x500;
            }
LAB_00137a38:
            if ((ulong)((long)(local_d0[0x54] - local_d0[0x53]) >> 3) < uStack_c8) {
                    /* try { // try from 00137a8c to 00137aab has its CatchHandler @ 00137ad8 */
                    /* WARNING: Subroutine does not return */
              FUN_00127d24("%s:%d: %s","out/llvm-project/libcxxabi/src/demangle/ItaniumDemangle.h",
                           0xa50,&DAT_001128a6);
            }
            local_d0[0x54] = local_d0[0x53] + uStack_c8 * 8;
            if (local_c0[0] == auStack_a8) {
              return puVar4;
            }
            free(local_c0[0]);
            return puVar4;
          }
          if (*psVar1 == 0x7054) {
            *param_1 = (long)(psVar1 + 1);
            local_d0 = (undefined8 *)FUN_00137604(param_1);
            if (local_d0 == (undefined8 *)0x0) {
              return (undefined8 *)0x0;
            }
            puVar4 = (undefined8 *)FUN_00137f00(param_1,&local_d0);
            return puVar4;
          }
          goto LAB_00137640;
        }
        *param_1 = (long)(psVar1 + 1);
        lVar12 = FUN_00137db0(&local_68,1);
        lVar5 = FUN_0012acb8(param_1);
        if (lVar5 == 0) {
          return (undefined8 *)0x0;
        }
        pvVar8 = (void *)param_1[0x266];
        lVar9 = *(long *)((long)pvVar8 + 8);
        puVar4 = (undefined8 *)pvVar8;
        if (lVar9 - 0xfd0U < 0xfffffffffffff010) {
          puVar4 = (undefined8 *)malloc(0x1000);
          if (puVar4 == (undefined8 *)0x0) goto LAB_00137a80;
          lVar9 = 0;
          *puVar4 = pvVar8;
          puVar4[1] = 0;
          param_1[0x266] = (long)puVar4;
        }
        lVar6 = (long)puVar4 + lVar9;
        ppuVar10 = &PTR_FUN_0014f028;
        *(long *)((long)puVar4 + 8) = lVar9 + 0x20;
        uVar13 = 0x25;
      }
      puVar3 = (undefined8 *)(lVar6 + 0x10);
      *puVar3 = ppuVar10;
      uVar2 = *(ushort *)(lVar6 + 0x19);
      *(undefined1 *)(lVar6 + 0x18) = uVar13;
      *(long *)(lVar6 + 0x20) = lVar12;
      *(long *)(lVar6 + 0x28) = lVar5;
    }
    *(ushort *)((long)puVar3 + 9) = uVar2 & 0xf000 | 0x500;
  }
  return puVar3;
}


// ===== 00137b04  FUN_00137b04 =====

void FUN_00137b04(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined8 *param_6)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  pvVar5 = *(void **)(param_1 + 0x1330);
  lVar2 = *(long *)((long)pvVar5 + 8);
  puVar1 = (undefined8 *)pvVar5;
  if (lVar2 - 4000U < 0xfffffffffffff010) {
    puVar1 = (undefined8 *)malloc(0x1000);
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar2 = 0;
    *puVar1 = pvVar5;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  uVar3 = *param_3;
  *(long *)((long)puVar1 + 8) = lVar2 + 0x50;
  uVar7 = param_2[1];
  uVar6 = *param_2;
  uVar9 = param_4[1];
  uVar8 = *param_4;
  uVar11 = param_6[1];
  uVar10 = *param_6;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0014f178;
  uVar4 = *param_5;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x28) = uVar7;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar6;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x34;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x30) = uVar3;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x540;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x40) = uVar9;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x38) = uVar8;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x48) = uVar4;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x58) = uVar11;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x50) = uVar10;
  return;
}


// ===== 00137be4  FUN_00137be4 =====

void FUN_00137be4(long *param_1)

{
  long lVar1;
  long *__ptr;
  
  lVar1 = *param_1;
  if ((ulong)(*(long *)(lVar1 + 0x2a0) - *(long *)(lVar1 + 0x298) >> 3) < (ulong)param_1[1]) {
                    /* try { // try from 00137c3c to 00137c5b has its CatchHandler @ 00137c5c */
                    /* WARNING: Subroutine does not return */
    FUN_00127d24("%s:%d: %s","out/llvm-project/libcxxabi/src/demangle/ItaniumDemangle.h",0xa50,
                 &DAT_001128a6);
  }
  __ptr = (long *)param_1[2];
  *(long *)(lVar1 + 0x2a0) = *(long *)(lVar1 + 0x298) + param_1[1] * 8;
  if (__ptr != param_1 + 5) {
    free(__ptr);
    return;
  }
  return;
}


// ===== 00137c60  FUN_00137c60 =====

void FUN_00137c60(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  size_t __size;
  long lVar3;
  size_t sVar4;
  void *__src;
  
  lVar3 = param_2[1];
  pvVar2 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar3 + 8U) {
    sVar4 = param_2[2] * 2;
    uVar1 = lVar3 + 1000;
    if (sVar4 < uVar1 || sVar4 - uVar1 == 0) {
      sVar4 = uVar1;
    }
    param_2[2] = sVar4;
    pvVar2 = realloc(pvVar2,sVar4);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar3 = param_2[1];
  }
  *(undefined8 *)((long)pvVar2 + lVar3) = 0x64656d616e6e7527;
  lVar3 = param_2[1] + 8;
  param_2[1] = lVar3;
  sVar4 = *(size_t *)(param_1 + 0x18);
  if (sVar4 != 0) {
    __src = *(void **)(param_1 + 0x10);
    pvVar2 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar3 + sVar4) {
      __size = param_2[2] * 2;
      uVar1 = lVar3 + sVar4 + 0x3e0;
      if (__size < uVar1 || __size - uVar1 == 0) {
        __size = uVar1;
      }
      param_2[2] = __size;
      pvVar2 = realloc(pvVar2,__size);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar3 = param_2[1];
    }
    memcpy((void *)((long)pvVar2 + lVar3),__src,sVar4);
    lVar3 = param_2[1] + sVar4;
    param_2[1] = lVar3;
  }
  pvVar2 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar3 + 1U) {
    sVar4 = param_2[2] * 2;
    uVar1 = lVar3 + 0x3e1;
    if (sVar4 < uVar1 || sVar4 - uVar1 == 0) {
      sVar4 = uVar1;
    }
    param_2[2] = sVar4;
    pvVar2 = realloc(pvVar2,sVar4);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar3 = param_2[1];
  }
  *(undefined1 *)((long)pvVar2 + lVar3) = 0x27;
  param_2[1] = param_2[1] + 1;
  return;
}


// ===== 00137da8  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00137db0  FUN_00137db0 =====

void FUN_00137db0(long *param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  size_t __n;
  undefined8 *__src;
  long lVar6;
  void *pvVar7;
  
  lVar6 = *param_1;
  lVar4 = lVar6 + (long)param_2 * 4;
  iVar1 = *(int *)(lVar4 + 0x318);
  *(int *)(lVar4 + 0x318) = iVar1 + 1;
  pvVar7 = *(void **)(lVar6 + 0x1330);
  lVar4 = *(long *)((long)pvVar7 + 8);
  puVar2 = (undefined8 *)pvVar7;
  if (lVar4 - 0xfd0U < 0xfffffffffffff010) {
    puVar2 = (undefined8 *)malloc(0x1000);
    if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar4 = 0;
    *puVar2 = pvVar7;
    puVar2[1] = 0;
    *(undefined8 **)(lVar6 + 0x1330) = puVar2;
  }
  *(long *)((long)puVar2 + 8) = lVar4 + 0x20;
  puVar3 = (undefined8 *)((long)puVar2 + lVar4 + 0x10);
  *puVar3 = &PTR_FUN_0014eed8;
  *(int *)((long)puVar2 + lVar4 + 0x1c) = param_2;
  *(int *)((long)puVar2 + lVar4 + 0x20) = iVar1;
  *(ushort *)((long)puVar2 + lVar4 + 0x19) =
       *(ushort *)((long)puVar2 + lVar4 + 0x19) & 0xf000 | 0x540;
  puVar5 = (undefined8 *)param_1[1];
  *(undefined1 *)((long)puVar2 + lVar4 + 0x18) = 0x21;
  puVar5 = (undefined8 *)*puVar5;
  if (puVar5 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)puVar5[1];
    if (puVar2 == (undefined8 *)puVar5[2]) {
      __src = (undefined8 *)*puVar5;
      __n = (long)puVar2 - (long)__src;
      if (__src == puVar5 + 3) {
        pvVar7 = malloc(__n * 2);
        if (pvVar7 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (puVar2 != __src) {
          memmove(pvVar7,__src,__n);
        }
        *puVar5 = pvVar7;
      }
      else {
        pvVar7 = realloc(__src,__n * 2);
        *puVar5 = pvVar7;
        if (pvVar7 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
      }
      puVar2 = (undefined8 *)((long)pvVar7 + __n);
      puVar5[2] = (void *)((long)pvVar7 + ((long)__n >> 2) * 8);
    }
    puVar5[1] = puVar2 + 1;
    *puVar2 = puVar3;
  }
  return;
}


// ===== 00137f00  FUN_00137f00 =====

void FUN_00137f00(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
  
  pvVar4 = *(void **)(param_1 + 0x1330);
  lVar2 = *(long *)((long)pvVar4 + 8);
  puVar1 = (undefined8 *)pvVar4;
  if (lVar2 - 0xfd0U < 0xfffffffffffff010) {
    puVar1 = (undefined8 *)malloc(0x1000);
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar2 = 0;
    *puVar1 = pvVar4;
    puVar1[1] = 0;
    *(undefined8 **)(param_1 + 0x1330) = puVar1;
  }
  *(long *)((long)puVar1 + 8) = lVar2 + 0x20;
  *(undefined ***)((long)puVar1 + lVar2 + 0x10) = &PTR_FUN_0014f108;
  *(undefined1 *)((long)puVar1 + lVar2 + 0x18) = 0x27;
  uVar3 = *param_2;
  *(ushort *)((long)puVar1 + lVar2 + 0x19) =
       *(ushort *)((long)puVar1 + lVar2 + 0x19) & 0xf000 | 0x500;
  *(undefined8 *)((long)puVar1 + lVar2 + 0x20) = uVar3;
  return;
}


// ===== 00137fa0  FUN_00137fa0 =====

void FUN_00137fa0(long param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined2 uVar7;
  size_t sVar8;
  long lVar9;
  byte local_31;
  
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 == 2) {
    pvVar3 = (void *)*param_2;
    lVar5 = param_2[1];
    if ((ulong)param_2[2] < lVar5 + 3U) {
      sVar8 = param_2[2] * 2;
      uVar6 = lVar5 + 0x3e3;
      if (sVar8 < uVar6 || sVar8 - uVar6 == 0) {
        sVar8 = uVar6;
      }
      param_2[2] = sVar8;
      pvVar3 = realloc(pvVar3,sVar8);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar5 = param_2[1];
    }
    *(undefined1 *)((undefined2 *)((long)pvVar3 + lVar5) + 1) = 0x54;
    *(undefined2 *)((long)pvVar3 + lVar5) = 0x5424;
    lVar5 = 3;
  }
  else {
    if (iVar2 == 1) {
      pvVar3 = (void *)*param_2;
      lVar5 = param_2[1];
      if ((ulong)param_2[2] < lVar5 + 2U) {
        sVar8 = param_2[2] * 2;
        uVar6 = lVar5 + 0x3e2;
        if (sVar8 < uVar6 || sVar8 - uVar6 == 0) {
          sVar8 = uVar6;
        }
        param_2[2] = sVar8;
        pvVar3 = realloc(pvVar3,sVar8);
        *param_2 = pvVar3;
        if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        lVar5 = param_2[1];
      }
      uVar7 = 0x4e24;
    }
    else {
      if (iVar2 != 0) goto LAB_00138100;
      pvVar3 = (void *)*param_2;
      lVar5 = param_2[1];
      if ((ulong)param_2[2] < lVar5 + 2U) {
        sVar8 = param_2[2] * 2;
        uVar6 = lVar5 + 0x3e2;
        if (sVar8 < uVar6 || sVar8 - uVar6 == 0) {
          sVar8 = uVar6;
        }
        param_2[2] = sVar8;
        pvVar3 = realloc(pvVar3,sVar8);
        *param_2 = pvVar3;
        if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        lVar5 = param_2[1];
      }
      uVar7 = 0x5424;
    }
    *(undefined2 *)((long)pvVar3 + lVar5) = uVar7;
    lVar5 = 2;
  }
  param_2[1] = param_2[1] + lVar5;
LAB_00138100:
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar6 = (ulong)(*(int *)(param_1 + 0x10) - 1);
    lVar5 = 0;
    do {
      lVar9 = lVar5;
      lVar5 = lVar9 + -1;
      (&local_31)[lVar9] = (char)uVar6 + (char)(uVar6 / 10) * -10 | 0x30;
      bVar1 = 9 < uVar6;
      uVar6 = uVar6 / 10;
    } while (bVar1);
    lVar4 = param_2[1];
    pvVar3 = (void *)*param_2;
    if ((ulong)param_2[2] < (ulong)(lVar4 - lVar5)) {
      sVar8 = param_2[2] * 2;
      uVar6 = (lVar4 - lVar5) + 0x3e0;
      if (sVar8 < uVar6 || sVar8 - uVar6 == 0) {
        sVar8 = uVar6;
      }
      param_2[2] = sVar8;
      pvVar3 = realloc(pvVar3,sVar8);
      *param_2 = pvVar3;
      if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar4 = param_2[1];
    }
    memcpy((void *)((long)pvVar3 + lVar4),&local_31 + lVar9,-lVar5);
    param_2[1] = param_2[1] - lVar5;
  }
  return;
}


// ===== 001381cc  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 001381d4  FUN_001381d4 =====

void FUN_001381d4(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  void *__ptr;
  long lVar3;
  size_t __size;
  
  lVar3 = param_2[1];
  __ptr = (void *)*param_2;
  if ((ulong)param_2[2] < lVar3 + 9U) {
    __size = param_2[2] * 2;
    uVar1 = lVar3 + 0x3e9;
    if (__size < uVar1 || __size - uVar1 == 0) {
      __size = uVar1;
    }
    param_2[2] = __size;
    __ptr = realloc(__ptr,__size);
    *param_2 = __ptr;
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar3 = param_2[1];
  }
  uVar2 = s_typename_0011246d._0_8_;
  ((char *)((long)__ptr + lVar3))[8] = ' ';
  *(undefined8 *)((long)__ptr + lVar3) = uVar2;
  param_2[1] = param_2[1] + 9;
  return;
}


// ===== 0013825c  FUN_0013825c =====

void FUN_0013825c(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar1 + 0x20))(plVar1);
  if ((*(ushort *)((long)plVar1 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001382c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x28))(plVar1,param_2);
  return;
}


// ===== 001382c4  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 001382cc  FUN_001382cc =====

void FUN_001382cc(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *__ptr;
  long lVar2;
  size_t __size;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar3 + 0x20))(plVar3);
  if ((*(ushort *)((long)plVar3 + 9) & 0xc0) != 0x40) {
    (**(code **)(*plVar3 + 0x28))(plVar3,param_2);
  }
  lVar2 = param_2[1];
  __ptr = (void *)*param_2;
  if ((ulong)param_2[2] < lVar2 + 1U) {
    __size = param_2[2] * 2;
    uVar1 = lVar2 + 0x3e1;
    if (__size < uVar1 || __size - uVar1 == 0) {
      __size = uVar1;
    }
    param_2[2] = __size;
    __ptr = realloc(__ptr,__size);
    *param_2 = __ptr;
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = param_2[1];
  }
  *(undefined1 *)((long)__ptr + lVar2) = 0x20;
  param_2[1] = param_2[1] + 1;
  return;
}


// ===== 00138378  FUN_00138378 =====

void FUN_00138378(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x18);
  (**(code **)(*plVar1 + 0x20))(plVar1);
  if ((*(ushort *)((long)plVar1 + 9) & 0xc0) == 0x40) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001383dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x28))(plVar1,param_2);
  return;
}


// ===== 001383e0  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 001383e8  FUN_001383e8 =====

void FUN_001383e8(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  void *__ptr;
  long lVar3;
  size_t __size;
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  if ((*(byte *)((long)puVar1 + 9) & 0xc0) == 0x80) {
    uVar2 = (**(code **)*puVar1)(puVar1,param_2);
    if ((uVar2 & 1) == 0) {
LAB_00138450:
      lVar3 = param_2[1];
      __ptr = (void *)*param_2;
      if ((ulong)param_2[2] < lVar3 + 1U) {
        __size = param_2[2] * 2;
        uVar2 = lVar3 + 0x3e1;
        if (__size < uVar2 || __size - uVar2 == 0) {
          __size = uVar2;
        }
        param_2[2] = __size;
        __ptr = realloc(__ptr,__size);
        *param_2 = __ptr;
        if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        lVar3 = param_2[1];
      }
      *(undefined1 *)((long)__ptr + lVar3) = 0x20;
      param_2[1] = param_2[1] + 1;
      return;
    }
  }
  else if (0x3f < *(byte *)((long)puVar1 + 9)) goto LAB_00138450;
  return;
}


// ===== 001384b0  FUN_001384b0 =====

void FUN_001384b0(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar1 + 0x20))(plVar1);
  if ((*(ushort *)((long)plVar1 + 9) & 0xc0) != 0x40) {
    (**(code **)(*plVar1 + 0x28))(plVar1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00138524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x28))(*(long **)(param_1 + 0x18),param_2);
  return;
}


// ===== 00138528  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00138530  FUN_00138530 =====

void FUN_00138530(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  size_t sVar9;
  long lVar10;
  bool bVar11;
  
  lVar6 = param_2[1];
  pvVar5 = (void *)*param_2;
  uVar3 = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_2 + 4) = 0;
  if ((ulong)param_2[2] < lVar6 + 9U) {
    sVar9 = param_2[2] * 2;
    uVar1 = lVar6 + 0x3e9;
    if (sVar9 < uVar1 || sVar9 - uVar1 == 0) {
      sVar9 = uVar1;
    }
    param_2[2] = sVar9;
    pvVar5 = realloc(pvVar5,sVar9);
    *param_2 = pvVar5;
    if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar6 = param_2[1];
  }
  uVar4 = s_template<_00113e4b._0_8_;
  ((char *)((long)pvVar5 + lVar6))[8] = '<';
  *(undefined8 *)((long)pvVar5 + lVar6) = uVar4;
  lVar10 = *(long *)(param_1 + 0x20);
  lVar6 = param_2[1] + 9;
  param_2[1] = lVar6;
  if (lVar10 != 0) {
    lVar10 = 0;
    bVar11 = true;
    do {
      while( true ) {
        lVar7 = lVar6;
        if (!bVar11) {
          pvVar5 = (void *)*param_2;
          if ((ulong)param_2[2] < lVar6 + 2U) {
            sVar9 = param_2[2] * 2;
            uVar1 = lVar6 + 0x3e2;
            if (sVar9 < uVar1 || sVar9 - uVar1 == 0) {
              sVar9 = uVar1;
            }
            param_2[2] = sVar9;
            pvVar5 = realloc(pvVar5,sVar9);
            *param_2 = pvVar5;
            if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00138700 to 0013870b has its CatchHandler @ 0013870c */
              abort();
            }
            lVar7 = param_2[1];
          }
          *(undefined2 *)((long)pvVar5 + lVar7) = 0x202c;
          lVar7 = param_2[1] + 2;
          param_2[1] = lVar7;
        }
                    /* try { // try from 00138648 to 00138657 has its CatchHandler @ 00138714 */
        FUN_001347c4(*(undefined8 *)(*(long *)(param_1 + 0x18) + lVar10 * 8),param_2,0x12,0);
        lVar8 = param_2[1];
        if (lVar7 == lVar8) break;
        bVar11 = false;
        lVar10 = lVar10 + 1;
        lVar6 = lVar8;
        if (lVar10 == *(long *)(param_1 + 0x20)) goto LAB_0013867c;
      }
      param_2[1] = lVar6;
      lVar10 = lVar10 + 1;
    } while (lVar10 != *(long *)(param_1 + 0x20));
  }
LAB_0013867c:
  pvVar5 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar6 + 0xbU) {
    sVar9 = param_2[2] * 2;
    uVar1 = lVar6 + 0x3eb;
    if (sVar9 < uVar1 || sVar9 - uVar1 == 0) {
      sVar9 = uVar1;
    }
    param_2[2] = sVar9;
    pvVar5 = realloc(pvVar5,sVar9);
    *param_2 = pvVar5;
    if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar6 = param_2[1];
  }
  pcVar2 = (char *)((long)pvVar5 + lVar6);
  *(undefined8 *)pcVar2 = s_>_typename_0011307c._0_8_;
  pcVar2[7] = 'a';
  pcVar2[8] = 'm';
  pcVar2[9] = 'e';
  pcVar2[10] = ' ';
  param_2[1] = param_2[1] + 0xb;
  *(undefined4 *)(param_2 + 4) = uVar3;
  return;
}


// ===== 0013871c  FUN_0013871c =====

void FUN_0013871c(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  char *pcVar2;
  undefined8 uVar3;
  void *__ptr;
  long lVar4;
  size_t __size;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar5 + 0x20))(plVar5);
  if ((*(ushort *)((long)plVar5 + 9) & 0xc0) != 0x40) {
    (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar4 = param_2[1];
    __ptr = (void *)*param_2;
    if ((ulong)param_2[2] < lVar4 + 10U) {
      __size = param_2[2] * 2;
      uVar1 = lVar4 + 0x3ea;
      if (__size < uVar1 || __size - uVar1 == 0) {
        __size = uVar1;
      }
      param_2[2] = __size;
      __ptr = realloc(__ptr,__size);
      *param_2 = __ptr;
      if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar4 = param_2[1];
    }
    uVar3 = s_requires_00113ef2._0_8_;
    pcVar2 = (char *)((long)__ptr + lVar4);
    pcVar2[8] = 's';
    pcVar2[9] = ' ';
    *(undefined8 *)pcVar2 = uVar3;
    plVar5 = *(long **)(param_1 + 0x28);
    lVar4 = *plVar5;
    param_2[1] = param_2[1] + 10;
    (**(code **)(lVar4 + 0x20))(plVar5,param_2);
    if ((*(ushort *)((long)plVar5 + 9) & 0xc0) != 0x40) {
                    /* WARNING: Could not recover jumptable at 0x00138834. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
      return;
    }
  }
  return;
}


// ===== 0013883c  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00138844  FUN_00138844 =====

void FUN_00138844(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *__ptr;
  long lVar2;
  size_t __size;
  
  (**(code **)(**(long **)(param_1 + 0x10) + 0x20))();
  lVar2 = param_2[1];
  __ptr = (void *)*param_2;
  if ((ulong)param_2[2] < lVar2 + 3U) {
    __size = param_2[2] * 2;
    uVar1 = lVar2 + 0x3e3;
    if (__size < uVar1 || __size - uVar1 == 0) {
      __size = uVar1;
    }
    param_2[2] = __size;
    __ptr = realloc(__ptr,__size);
    *param_2 = __ptr;
    if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = param_2[1];
  }
  *(undefined1 *)((undefined2 *)((long)__ptr + lVar2) + 1) = 0x2e;
  *(undefined2 *)((long)__ptr + lVar2) = 0x2e2e;
  param_2[1] = param_2[1] + 3;
  return;
}


// ===== 001388d4  FUN_001388d4 =====

void FUN_001388d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001388e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x28))();
  return;
}


// ===== 001388e8  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 001388f0  FUN_001388f0 =====

void FUN_001388f0(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  size_t __size;
  long lVar3;
  size_t sVar4;
  void *__src;
  
  lVar3 = param_2[1];
  pvVar2 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar3 + 7U) {
    sVar4 = param_2[2] * 2;
    uVar1 = lVar3 + 999;
    if (sVar4 < uVar1 || sVar4 - uVar1 == 0) {
      sVar4 = uVar1;
    }
    param_2[2] = sVar4;
    pvVar2 = realloc(pvVar2,sVar4);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar3 = param_2[1];
  }
  *(undefined4 *)((long)pvVar2 + lVar3 + 3) = 0x6164626d;
  *(undefined4 *)((long)pvVar2 + lVar3) = 0x6d616c27;
  lVar3 = param_2[1] + 7;
  param_2[1] = lVar3;
  sVar4 = *(size_t *)(param_1 + 0x48);
  if (sVar4 != 0) {
    __src = *(void **)(param_1 + 0x40);
    pvVar2 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar3 + sVar4) {
      __size = param_2[2] * 2;
      uVar1 = lVar3 + sVar4 + 0x3e0;
      if (__size < uVar1 || __size - uVar1 == 0) {
        __size = uVar1;
      }
      param_2[2] = __size;
      pvVar2 = realloc(pvVar2,__size);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar3 = param_2[1];
    }
    memcpy((void *)((long)pvVar2 + lVar3),__src,sVar4);
    lVar3 = param_2[1] + sVar4;
    param_2[1] = lVar3;
  }
  pvVar2 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar3 + 1U) {
    sVar4 = param_2[2] * 2;
    uVar1 = lVar3 + 0x3e1;
    if (sVar4 < uVar1 || sVar4 - uVar1 == 0) {
      sVar4 = uVar1;
    }
    param_2[2] = sVar4;
    pvVar2 = realloc(pvVar2,sVar4);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar3 = param_2[1];
  }
  *(undefined1 *)((long)pvVar2 + lVar3) = 0x27;
  param_2[1] = param_2[1] + 1;
  FUN_00138a50(param_1,param_2);
  return;
}


// ===== 00138a48  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00138a50  FUN_00138a50 =====

void FUN_00138a50(long param_1,undefined8 *param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  size_t sVar9;
  long lVar10;
  long *plVar11;
  bool bVar12;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar5 = param_2[1];
    pvVar4 = (void *)*param_2;
    uVar2 = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(param_2 + 4) = 0;
    if ((ulong)param_2[2] < lVar5 + 1U) {
      sVar9 = param_2[2] * 2;
      uVar8 = lVar5 + 0x3e1;
      if (sVar9 < uVar8 || sVar9 - uVar8 == 0) {
        sVar9 = uVar8;
      }
      param_2[2] = sVar9;
      pvVar4 = realloc(pvVar4,sVar9);
      *param_2 = pvVar4;
      if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00138f20 to 00138f23 has its CatchHandler @ 00138f34 */
        abort();
      }
      lVar5 = param_2[1];
    }
    *(undefined1 *)((long)pvVar4 + lVar5) = 0x3c;
    lVar10 = *(long *)(param_1 + 0x18);
    lVar5 = param_2[1] + 1;
    param_2[1] = lVar5;
    if (lVar10 != 0) {
      lVar10 = 0;
      bVar12 = true;
      do {
        while( true ) {
          lVar7 = lVar5;
          if (!bVar12) {
            pvVar4 = (void *)*param_2;
            if ((ulong)param_2[2] < lVar5 + 2U) {
              sVar9 = param_2[2] * 2;
              uVar8 = lVar5 + 0x3e2;
              if (sVar9 < uVar8 || sVar9 - uVar8 == 0) {
                sVar9 = uVar8;
              }
              param_2[2] = sVar9;
              pvVar4 = realloc(pvVar4,sVar9);
              *param_2 = pvVar4;
              if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00138f14 to 00138f17 has its CatchHandler @ 00138f34 */
                abort();
              }
              lVar7 = param_2[1];
            }
            *(undefined2 *)((long)pvVar4 + lVar7) = 0x202c;
            lVar7 = param_2[1] + 2;
            param_2[1] = lVar7;
          }
                    /* try { // try from 00138b5c to 00138b6b has its CatchHandler @ 00138f3c */
          FUN_001347c4(*(undefined8 *)(*(long *)(param_1 + 0x10) + lVar10 * 8),param_2,0x12,0);
          lVar6 = param_2[1];
          if (lVar7 == lVar6) break;
          bVar12 = false;
          lVar10 = lVar10 + 1;
          lVar5 = lVar6;
          if (lVar10 == *(long *)(param_1 + 0x18)) goto LAB_00138b90;
        }
        param_2[1] = lVar5;
        lVar10 = lVar10 + 1;
      } while (lVar10 != *(long *)(param_1 + 0x18));
    }
LAB_00138b90:
    pvVar4 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar5 + 1U) {
      sVar9 = param_2[2] * 2;
      uVar8 = lVar5 + 0x3e1;
      if (sVar9 < uVar8 || sVar9 - uVar8 == 0) {
        sVar9 = uVar8;
      }
      param_2[2] = sVar9;
      pvVar4 = realloc(pvVar4,sVar9);
      *param_2 = pvVar4;
      if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00138f30 to 00138f33 has its CatchHandler @ 00138f34 */
        abort();
      }
      lVar5 = param_2[1];
    }
    *(undefined1 *)((long)pvVar4 + lVar5) = 0x3e;
    *(undefined4 *)(param_2 + 4) = uVar2;
    param_2[1] = param_2[1] + 1;
  }
  lVar5 = param_2[1];
  if (*(long *)(param_1 + 0x20) != 0) {
    pvVar4 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar5 + 10U) {
      sVar9 = param_2[2] * 2;
      uVar8 = lVar5 + 0x3ea;
      if (sVar9 < uVar8 || sVar9 - uVar8 == 0) {
        sVar9 = uVar8;
      }
      param_2[2] = sVar9;
      pvVar4 = realloc(pvVar4,sVar9);
      *param_2 = pvVar4;
      if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar5 = param_2[1];
    }
    uVar3 = s_requires_00113ef2._0_8_;
    pcVar1 = (char *)((long)pvVar4 + lVar5);
    pcVar1[8] = 's';
    pcVar1[9] = ' ';
    *(undefined8 *)pcVar1 = uVar3;
    plVar11 = *(long **)(param_1 + 0x20);
    lVar5 = *plVar11;
    param_2[1] = param_2[1] + 10;
    (**(code **)(lVar5 + 0x20))(plVar11,param_2);
    if ((*(ushort *)((long)plVar11 + 9) & 0xc0) != 0x40) {
      (**(code **)(*plVar11 + 0x28))(plVar11,param_2);
    }
    lVar5 = param_2[1];
    pvVar4 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar5 + 1U) {
      sVar9 = param_2[2] * 2;
      uVar8 = lVar5 + 0x3e1;
      if (sVar9 < uVar8 || sVar9 - uVar8 == 0) {
        sVar9 = uVar8;
      }
      param_2[2] = sVar9;
      pvVar4 = realloc(pvVar4,sVar9);
      *param_2 = pvVar4;
      if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar5 = param_2[1];
    }
    *(undefined1 *)((long)pvVar4 + lVar5) = 0x20;
    lVar5 = param_2[1] + 1;
    param_2[1] = lVar5;
  }
  uVar8 = lVar5 + 1;
  pvVar4 = (void *)*param_2;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  if ((ulong)param_2[2] < uVar8) {
    sVar9 = param_2[2] * 2;
    uVar8 = lVar5 + 0x3e1;
    if (sVar9 < uVar8 || sVar9 - uVar8 == 0) {
      sVar9 = uVar8;
    }
    param_2[2] = sVar9;
    pvVar4 = realloc(pvVar4,sVar9);
    *param_2 = pvVar4;
    if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar5 = param_2[1];
    uVar8 = lVar5 + 1;
  }
  param_2[1] = uVar8;
  *(undefined1 *)((long)pvVar4 + lVar5) = 0x28;
  lVar5 = param_2[1];
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar10 = 0;
    bVar12 = true;
    do {
      while( true ) {
        lVar7 = lVar5;
        if (!bVar12) {
          pvVar4 = (void *)*param_2;
          if ((ulong)param_2[2] < lVar5 + 2U) {
            sVar9 = param_2[2] * 2;
            uVar8 = lVar5 + 0x3e2;
            if (sVar9 < uVar8 || sVar9 - uVar8 == 0) {
              sVar9 = uVar8;
            }
            param_2[2] = sVar9;
            pvVar4 = realloc(pvVar4,sVar9);
            *param_2 = pvVar4;
            if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            lVar7 = param_2[1];
          }
          *(undefined2 *)((long)pvVar4 + lVar7) = 0x202c;
          lVar7 = param_2[1] + 2;
          param_2[1] = lVar7;
        }
        FUN_001347c4(*(undefined8 *)(*(long *)(param_1 + 0x28) + lVar10 * 8),param_2,0x12,0);
        lVar6 = param_2[1];
        if (lVar7 == lVar6) break;
        bVar12 = false;
        lVar10 = lVar10 + 1;
        lVar5 = lVar6;
        if (lVar10 == *(long *)(param_1 + 0x30)) goto LAB_00138dec;
      }
      param_2[1] = lVar5;
      lVar10 = lVar10 + 1;
    } while (lVar10 != *(long *)(param_1 + 0x30));
  }
LAB_00138dec:
  uVar8 = lVar5 + 1;
  pvVar4 = (void *)*param_2;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
  if ((ulong)param_2[2] < uVar8) {
    sVar9 = param_2[2] * 2;
    uVar8 = lVar5 + 0x3e1;
    if (sVar9 < uVar8 || sVar9 - uVar8 == 0) {
      sVar9 = uVar8;
    }
    param_2[2] = sVar9;
    pvVar4 = realloc(pvVar4,sVar9);
    *param_2 = pvVar4;
    if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar5 = param_2[1];
    uVar8 = lVar5 + 1;
  }
  param_2[1] = uVar8;
  *(undefined1 *)((long)pvVar4 + lVar5) = 0x29;
  if (*(long *)(param_1 + 0x38) != 0) {
    lVar5 = param_2[1];
    pvVar4 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar5 + 10U) {
      sVar9 = param_2[2] * 2;
      uVar8 = lVar5 + 0x3ea;
      if (sVar9 < uVar8 || sVar9 - uVar8 == 0) {
        sVar9 = uVar8;
      }
      param_2[2] = sVar9;
      pvVar4 = realloc(pvVar4,sVar9);
      *param_2 = pvVar4;
      if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar5 = param_2[1];
    }
    uVar3 = s_requires_00113ef2._0_8_;
    pcVar1 = (char *)((long)pvVar4 + lVar5);
    pcVar1[8] = 's';
    pcVar1[9] = ' ';
    *(undefined8 *)pcVar1 = uVar3;
    plVar11 = *(long **)(param_1 + 0x38);
    lVar5 = *plVar11;
    param_2[1] = param_2[1] + 10;
    (**(code **)(lVar5 + 0x20))(plVar11,param_2);
    if ((*(ushort *)((long)plVar11 + 9) & 0xc0) != 0x40) {
                    /* WARNING: Could not recover jumptable at 0x00138f0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar11 + 0x28))(plVar11,param_2);
      return;
    }
  }
  return;
}


// ===== 00138f44  FUN_00138f44 =====

void FUN_00138f44(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  char cVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  size_t sVar6;
  
  lVar5 = param_2[1];
  pvVar4 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar5 + 2U) {
    sVar6 = param_2[2] * 2;
    uVar1 = lVar5 + 0x3e2;
    if (sVar6 < uVar1 || sVar6 - uVar1 == 0) {
      sVar6 = uVar1;
    }
    param_2[2] = sVar6;
    pvVar4 = realloc(pvVar4,sVar6);
    *param_2 = pvVar4;
    if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar5 = param_2[1];
  }
  *(undefined2 *)((long)pvVar4 + lVar5) = 0x5d5b;
  lVar3 = *(long *)(param_1 + 0x10);
  cVar2 = *(char *)(lVar3 + 8);
  lVar5 = param_2[1] + 2;
  param_2[1] = lVar5;
  if (cVar2 == '4') {
    FUN_00138a50(lVar3,param_2);
    lVar5 = param_2[1];
  }
  pvVar4 = (void *)*param_2;
  if ((ulong)param_2[2] < lVar5 + 5U) {
    sVar6 = param_2[2] * 2;
    uVar1 = lVar5 + 0x3e5;
    if (sVar6 < uVar1 || sVar6 - uVar1 == 0) {
      sVar6 = uVar1;
    }
    param_2[2] = sVar6;
    pvVar4 = realloc(pvVar4,sVar6);
    *param_2 = pvVar4;
    if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar5 = param_2[1];
  }
  *(undefined1 *)((undefined4 *)((long)pvVar4 + lVar5) + 1) = 0x7d;
  *(undefined4 *)((long)pvVar4 + lVar5) = 0x2e2e2e7b;
  param_2[1] = param_2[1] + 5;
  return;
}


// ===== 00139040  operator.delete =====

void operator_delete(void *param_1)

{
  operator_delete(param_1);
  return;
}


// ===== 00139048  FUN_00139048 =====

void FUN_00139048(long param_1,undefined8 *param_2)

{
  void *pvVar1;
  long lVar2;
  size_t sVar3;
  size_t sVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  char *__src;
  
  lVar2 = param_2[1];
  pvVar1 = (void *)*param_2;
  uVar5 = lVar2 + 1;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  if ((ulong)param_2[2] < uVar5) {
    sVar4 = param_2[2] * 2;
    uVar5 = lVar2 + 0x3e1;
    if (sVar4 < uVar5 || sVar4 - uVar5 == 0) {
      sVar4 = uVar5;
    }
    param_2[2] = sVar4;
    pvVar1 = realloc(pvVar1,sVar4);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = param_2[1];
    uVar5 = lVar2 + 1;
  }
  param_2[1] = uVar5;
  *(undefined1 *)((long)pvVar1 + lVar2) = 0x28;
  plVar7 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar7 + 0x20))(plVar7,param_2);
  if ((*(ushort *)((long)plVar7 + 9) & 0xc0) != 0x40) {
    (**(code **)(*plVar7 + 0x28))(plVar7,param_2);
  }
  lVar2 = param_2[1];
  pvVar1 = (void *)*param_2;
  uVar5 = lVar2 + 1;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
  if ((ulong)param_2[2] < uVar5) {
    sVar4 = param_2[2] * 2;
    uVar5 = lVar2 + 0x3e1;
    if (sVar4 < uVar5 || sVar4 - uVar5 == 0) {
      sVar4 = uVar5;
    }
    param_2[2] = sVar4;
    pvVar1 = realloc(pvVar1,sVar4);
    *param_2 = pvVar1;
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = param_2[1];
    uVar5 = lVar2 + 1;
  }
  param_2[1] = uVar5;
  *(undefined1 *)((long)pvVar1 + lVar2) = 0x29;
  __src = *(char **)(param_1 + 0x18);
  if (*__src == 'n') {
    lVar2 = param_2[1];
    pvVar1 = (void *)*param_2;
    uVar5 = lVar2 + 1;
    if ((ulong)param_2[2] < uVar5) {
      sVar4 = param_2[2] * 2;
      uVar5 = lVar2 + 0x3e1;
      if (sVar4 < uVar5 || sVar4 - uVar5 == 0) {
        sVar4 = uVar5;
      }
      param_2[2] = sVar4;
      pvVar1 = realloc(pvVar1,sVar4);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar2 = param_2[1];
      uVar5 = lVar2 + 1;
    }
    param_2[1] = uVar5;
    *(undefined1 *)((long)pvVar1 + lVar2) = 0x2d;
    sVar4 = *(long *)(param_1 + 0x20) - 1;
    if (sVar4 == 0) {
      return;
    }
    lVar2 = param_2[1];
    pvVar1 = (void *)*param_2;
    lVar6 = *(long *)(param_1 + 0x18);
    if ((ulong)param_2[2] < lVar2 + sVar4) {
      sVar3 = param_2[2] * 2;
      uVar5 = lVar2 + sVar4 + 0x3e0;
      if (sVar3 < uVar5 || sVar3 - uVar5 == 0) {
        sVar3 = uVar5;
      }
      param_2[2] = sVar3;
      pvVar1 = realloc(pvVar1,sVar3);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar2 = param_2[1];
    }
    pvVar1 = (void *)((long)pvVar1 + lVar2);
    __src = (char *)(lVar6 + 1);
  }
  else {
    sVar4 = *(size_t *)(param_1 + 0x20);
    if (sVar4 == 0) {
      return;
    }
    lVar2 = param_2[1];
    pvVar1 = (void *)*param_2;
    if ((ulong)param_2[2] < lVar2 + sVar4) {
      sVar3 = param_2[2] * 2;
      uVar5 = lVar2 + sVar4 + 0x3e0;
      if (sVar3 < uVar5 || sVar3 - uVar5 == 0) {
        sVar3 = uVar5;
      }
      param_2[2] = sVar3;
      pvVar1 = realloc(pvVar1,sVar3);
      *param_2 = pvVar1;
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar2 = param_2[1];
    }
    pvVar1 = (void *)((long)pvVar1 + lVar2);
  }
  memcpy(pvVar1,__src,sVar4);
  param_2[1] = param_2[1] + sVar4;
  return;
}


