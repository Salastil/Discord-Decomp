// ===== 00331070  FUN_00331070 =====

void FUN_00331070(long param_1)

{
  long *__ptr;
  void *__ptr_00;
  long *plVar1;
  long lVar2;
  
  __ptr_00 = *(void **)(param_1 + 0x30);
  if (__ptr_00 != (void *)0x0) {
    *(void **)(param_1 + 0x38) = __ptr_00;
    free(__ptr_00);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    __ptr = *(long **)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x28) = 0;
    plVar1 = *(long **)(*(long *)(param_1 + 0x18) + 8);
    lVar2 = *__ptr;
    *(long **)(lVar2 + 8) = plVar1;
    *plVar1 = lVar2;
    while (__ptr != (long *)(param_1 + 0x18)) {
      plVar1 = (long *)__ptr[1];
      free(__ptr);
      __ptr = plVar1;
    }
  }
  return;
}


// ===== 003310dc  FUN_003310dc =====

void FUN_003310dc(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    plVar1 = *(long **)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x40) = 0;
    plVar2 = *(long **)(*(long *)(param_1 + 0x30) + 8);
    lVar3 = *plVar1;
    *(long **)(lVar3 + 8) = plVar2;
    *plVar2 = lVar3;
    while (plVar1 != (long *)(param_1 + 0x30)) {
      plVar2 = (long *)plVar1[1];
      free(plVar1);
      plVar1 = plVar2;
    }
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    plVar1 = *(long **)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x28) = 0;
    plVar2 = *(long **)(*(long *)(param_1 + 0x18) + 8);
    lVar3 = *plVar1;
    *(long **)(lVar3 + 8) = plVar2;
    *plVar2 = lVar3;
    while (plVar1 != (long *)(param_1 + 0x18)) {
      plVar2 = (long *)plVar1[1];
      free(plVar1);
      plVar1 = plVar2;
    }
  }
  return;
}


// ===== 00331180  FUN_00331180 =====

void FUN_00331180(undefined8 *param_1,long param_2,ulong *param_3)

{
  float *pfVar1;
  long lVar2;
  undefined8 *puVar3;
  float fVar4;
  bool bVar5;
  void *pvVar6;
  void *pvVar7;
  undefined8 uVar8;
  ulong uVar9;
  int iVar10;
  float *pfVar11;
  long lVar12;
  float *pfVar13;
  ulong uVar14;
  undefined4 *puVar15;
  ulong uVar16;
  float *pfVar17;
  float *pfVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  undefined8 *puVar23;
  float *pfVar24;
  size_t sVar25;
  long lVar26;
  undefined8 *puVar27;
  ulong uVar28;
  float fVar29;
  double dVar30;
  double dVar31;
  float fVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined8 uVar36;
  double dVar37;
  undefined8 uVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  float *local_90;
  float *local_88;
  float *local_80;
  long local_78;
  float *pfVar18;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  pfVar24 = (float *)*param_3;
  if ((*(byte *)(param_2 + 0xc) & 1) == 0) {
    pfVar11 = (float *)param_3[1];
    bVar5 = false;
  }
  else {
    pfVar11 = (float *)param_3[1];
    pfVar19 = pfVar24 + 1;
    fVar29 = *pfVar24;
    if ((pfVar24 == pfVar11) ||
       (pfVar13 = pfVar24, pfVar17 = pfVar19, fVar32 = fVar29, pfVar19 == pfVar11)) {
      fVar29 = ABS(fVar29);
      fVar32 = fVar29;
    }
    else {
      do {
        pfVar18 = pfVar17 + 1;
        pfVar1 = pfVar17;
        fVar4 = *pfVar17;
        if (*pfVar17 <= fVar32) {
          pfVar1 = pfVar13;
          fVar4 = fVar32;
        }
        pfVar13 = pfVar1;
        pfVar17 = pfVar18;
        fVar32 = fVar4;
      } while (pfVar18 != pfVar11);
      pfVar13 = pfVar24;
      do {
        pfVar18 = pfVar19 + 1;
        pfVar17 = pfVar19;
        fVar32 = *pfVar19;
        if (fVar29 <= *pfVar19) {
          pfVar17 = pfVar13;
          fVar32 = fVar29;
        }
        fVar29 = fVar32;
        pfVar13 = pfVar17;
        pfVar19 = pfVar18;
      } while (pfVar18 != pfVar11);
      fVar29 = ABS(*pfVar1);
      fVar32 = ABS(*pfVar17);
    }
    if (fVar29 <= fVar32) {
      fVar29 = fVar32;
    }
    bVar5 = *(float *)(param_2 + 8) < fVar29;
  }
  lVar12 = *(long *)(param_2 + 0x240);
  lVar26 = (long)pfVar11 - (long)pfVar24 >> 2;
  pvVar6 = *(void **)(param_2 + 0x220);
  *(bool *)(param_2 + 0x218) = bVar5;
  if ((ulong)(*(long *)(param_2 + 0x228) - (long)pvVar6 >> 2) < (ulong)(lVar26 + lVar12)) {
    memcpy(pvVar6,(void *)((long)pvVar6 + *(long *)(param_2 + 0x238) * 4),
           (lVar12 - *(long *)(param_2 + 0x238)) * 4);
    lVar12 = *(long *)(param_2 + 0x238);
    pvVar6 = *(void **)(param_2 + 0x220);
    *(undefined8 *)(param_2 + 0x238) = 0;
    lVar12 = *(long *)(param_2 + 0x240) - lVar12;
    *(long *)(param_2 + 0x240) = lVar12;
  }
  memcpy((void *)((long)pvVar6 + lVar12 * 4),pfVar24,(long)pfVar11 - (long)pfVar24);
  *(long *)(param_2 + 0x240) = *(long *)(param_2 + 0x240) + lVar26;
  if (*(char *)(param_2 + 0x188) != '\0') {
    FUN_00349f00(&local_90,*(undefined8 *)(param_2 + 0x480),param_3);
    pfVar24 = local_90;
    puVar27 = *(undefined8 **)(param_2 + 0x488);
    pvVar6 = (void *)*puVar27;
    sVar25 = (long)local_88 - (long)local_90;
    lVar12 = puVar27[4];
    lVar26 = (long)sVar25 >> 2;
    if ((ulong)(puVar27[1] - (long)pvVar6 >> 2) < (ulong)(lVar26 + lVar12)) {
      memcpy(pvVar6,(void *)((long)pvVar6 + puVar27[3] * 4),(lVar12 - puVar27[3]) * 4);
      pvVar6 = (void *)*puVar27;
      lVar12 = puVar27[4] - puVar27[3];
      puVar27[3] = 0;
      puVar27[4] = lVar12;
    }
    memcpy((void *)((long)pvVar6 + lVar12 * 4),pfVar24,sVar25);
    puVar27[4] = puVar27[4] + lVar26;
    if (local_90 != (float *)0x0) {
      local_88 = local_90;
      free(local_90);
    }
  }
  if (((*(byte *)(param_2 + 0x271) & 1) == 0) &&
     (FUN_00334284(*(undefined8 *)(param_2 + 0x4d8)),
     (ulong)((long)*(int *)(param_2 + 0x194) << 1) <=
     (ulong)(*(long *)(param_2 + 0x240) - *(long *)(param_2 + 0x238)))) {
    FUN_00334290(*(undefined8 *)(param_2 + 0x4d8));
  }
  lVar12 = *(long *)(param_2 + 0x238);
  pvVar7 = (void *)*param_3;
  pvVar6 = (void *)param_3[1];
  if ((ulong)(*(long *)(param_2 + 0x240) - lVar12) < (ulong)((long)*(int *)(param_2 + 0x194) << 1))
  {
    uVar28 = 0;
    uVar14 = (long)pvVar6 - (long)pvVar7 >> 2;
  }
  else {
    uVar28 = 0;
    do {
      if (pvVar6 != pvVar7) {
        param_3[1] = (ulong)pvVar7;
      }
      if (*(char *)(param_2 + 0x188) == '\0') {
        lVar12 = *(long *)(param_2 + 0x220) + lVar12 * 4;
LAB_00331488:
        FUN_00331968(param_2,lVar12,param_3);
        FUN_00331b44(param_2,param_3);
        FUN_0033224c(param_2,param_3);
      }
      else {
        uVar14 = FUN_00334df4(*(undefined8 *)(param_2 + 0x478),
                              **(long **)(param_2 + 0x488) + (*(long **)(param_2 + 0x488))[3] * 4,
                              param_3);
        *(long *)(*(long *)(param_2 + 0x488) + 0x18) =
             *(long *)(*(long *)(param_2 + 0x488) + 0x18) + (long)*(int *)(param_2 + 0x178);
        if (((uVar14 & 0xff00000000) != 0) && ((float)uVar14 < 0.5 == NAN((float)uVar14))) {
          if (param_3[1] != *param_3) {
            param_3[1] = *param_3;
          }
          lVar12 = *(long *)(param_2 + 0x220) + *(long *)(param_2 + 0x238) * 4;
          goto LAB_00331488;
        }
        puVar15 = (undefined4 *)*param_3;
        *puVar15 = 0;
        iVar10 = *(int *)(param_2 + 0x194);
        local_90 = (float *)((ulong)local_90 & 0xffffffff00000000);
        uVar16 = (long)iVar10 * 2;
        uVar14 = (long)(param_3[1] - (long)puVar15) >> 2;
        if (uVar16 < uVar14 || uVar16 - uVar14 == 0) {
          if (uVar16 < uVar14) {
            param_3[1] = (ulong)(puVar15 + (long)iVar10 * 2);
          }
        }
        else {
          FUN_00333484(param_3,uVar16 - uVar14,&local_90);
          iVar10 = *(int *)(param_2 + 0x194);
          uVar16 = (long)iVar10 << 1;
        }
        local_90 = (float *)0x0;
        local_88 = (float *)0x0;
        local_80 = (float *)0x0;
        if (uVar16 != 0) {
          if (iVar10 < 0) {
            if (*(long *)(lVar2 + 0x28) != local_78) goto LAB_00331964;
                    /* try { // try from 003318f8 to 003318ff has its CatchHandler @ 00331930 */
            FUN_002febf0(&local_90);
            goto LAB_00331900;
          }
                    /* try { // try from 00331510 to 00331517 has its CatchHandler @ 00331938 */
          local_88 = (float *)FUN_00759c3c(uVar16 << 2);
          local_80 = local_88 + uVar16;
        }
        lVar12 = *(long *)(param_2 + 0x220) + *(long *)(param_2 + 0x238) * 4;
        local_90 = local_88;
                    /* try { // try from 0033153c to 00331547 has its CatchHandler @ 00331934 */
        FUN_0033363c(&local_90,local_88,lVar12,lVar12 + uVar16 * 4,uVar16);
        pfVar11 = local_88;
        pfVar24 = local_90;
        if (local_90 == local_88) {
          dVar41 = 0.0;
        }
        else {
          uVar14 = (long)local_88 + (-4 - (long)local_90);
          if (uVar14 < 0x1c) {
            dVar41 = 0.0;
            pfVar13 = local_90;
          }
          else {
            dVar41 = 0.0;
            pfVar19 = local_90 + 4;
            uVar14 = (uVar14 >> 2) + 1;
            uVar22 = uVar14 & 0x7ffffffffffffff8;
            pfVar13 = local_90 + uVar22;
            uVar16 = uVar22;
            do {
              pfVar17 = pfVar19 + -4;
              pfVar1 = pfVar19 + -2;
              pfVar18 = pfVar19 + 2;
              uVar8 = *(undefined8 *)pfVar19;
              uVar16 = uVar16 - 8;
              pfVar19 = pfVar19 + 8;
              dVar35 = (double)((float)*(undefined8 *)pfVar17 * 3.0517578e-05);
              dVar37 = (double)((float)((ulong)*(undefined8 *)pfVar17 >> 0x20) * 3.0517578e-05);
              dVar30 = (double)((float)*(undefined8 *)pfVar1 * 3.0517578e-05);
              dVar31 = (double)((float)((ulong)*(undefined8 *)pfVar1 >> 0x20) * 3.0517578e-05);
              dVar39 = (double)((float)uVar8 * 3.0517578e-05);
              dVar40 = (double)((float)((ulong)uVar8 >> 0x20) * 3.0517578e-05);
              dVar33 = (double)((float)*(undefined8 *)pfVar18 * 3.0517578e-05);
              dVar34 = (double)((float)((ulong)*(undefined8 *)pfVar18 >> 0x20) * 3.0517578e-05);
              dVar41 = dVar41 + dVar35 * dVar35 + dVar37 * dVar37 + dVar30 * dVar30 +
                       dVar31 * dVar31 + dVar39 * dVar39 + dVar40 * dVar40 + dVar33 * dVar33 +
                       dVar34 * dVar34;
            } while (uVar16 != 0);
            if (uVar14 == uVar22) goto LAB_00331624;
          }
          do {
            pfVar19 = pfVar13 + 1;
            dVar41 = dVar41 + (double)(*pfVar13 * 3.0517578e-05) *
                              (double)(*pfVar13 * 3.0517578e-05);
            pfVar13 = pfVar19;
          } while (pfVar19 != local_88);
        }
LAB_00331624:
                    /* try { // try from 00331628 to 00331647 has its CatchHandler @ 00331938 */
        lVar12 = FUN_0033429c(*(undefined8 *)(param_2 + 0x4d8));
        *(double *)(lVar12 + 8) = dVar41 / (double)((long)pfVar11 - (long)pfVar24 >> 2);
        puVar27 = (undefined8 *)FUN_0033429c(*(undefined8 *)(param_2 + 0x4d8));
        *puVar27 = 0;
        if (local_90 != (float *)0x0) {
          local_88 = local_90;
          free(local_90);
        }
      }
      if ((*(byte *)(param_2 + 0x271) & 1) == 0) {
        FUN_003342ac(*(undefined8 *)(param_2 + 0x4d8));
        uVar28 = uVar28 + 1;
      }
      iVar10 = *(int *)(param_2 + 0x194);
      lVar26 = (long)iVar10;
      lVar12 = *(long *)(param_2 + 0x268);
      pvVar6 = *(void **)(param_2 + 0x248);
      *(long *)(param_2 + 0x238) = *(long *)(param_2 + 0x238) + lVar26;
      if ((ulong)(*(long *)(param_2 + 0x250) - (long)pvVar6 >> 2) < (ulong)(lVar12 + lVar26)) {
        memcpy(pvVar6,(void *)((long)pvVar6 + *(long *)(param_2 + 0x260) * 4),
               (lVar12 - *(long *)(param_2 + 0x260)) * 4);
        lVar12 = *(long *)(param_2 + 0x260);
        *(undefined8 *)(param_2 + 0x260) = 0;
        lVar12 = *(long *)(param_2 + 0x268) - lVar12;
      }
      if (iVar10 != 0) {
        memset((void *)(*(long *)(param_2 + 0x248) + lVar12 * 4),0,lVar26 << 2);
      }
      lVar12 = lVar12 + lVar26;
      iVar10 = *(int *)(param_2 + 0x194);
      *(long *)(param_2 + 0x268) = lVar12;
      pvVar7 = (void *)*param_3;
      pvVar6 = (void *)param_3[1];
      uVar14 = (long)pvVar6 - (long)pvVar7 >> 2;
      if ((long)pvVar6 - (long)pvVar7 != 0) {
        lVar21 = *(long *)(param_2 + 0x248);
        lVar26 = (long)(iVar10 << 1);
        uVar16 = uVar14;
        if (uVar14 < 2) {
          uVar16 = 1;
        }
        if ((uVar14 < 8) ||
           (((void *)(lVar21 + lVar12 * 4 + lVar26 * -4) < (void *)((long)pvVar7 + uVar16 * 4) &&
            (pvVar7 < (void *)(lVar21 + ((uVar16 + lVar12) - lVar26) * 4))))) {
          uVar22 = 0;
        }
        else {
          puVar27 = (undefined8 *)((long)pvVar7 + 0x10);
          uVar22 = uVar16 & 0xfffffffffffffff8;
          puVar23 = (undefined8 *)(lVar21 + lVar26 * -4 + lVar12 * 4 + 0x10);
          uVar9 = uVar22;
          do {
            uVar9 = uVar9 - 8;
            puVar3 = puVar27 + -1;
            uVar8 = puVar27[-2];
            uVar38 = puVar27[1];
            uVar36 = *puVar27;
            puVar27 = puVar27 + 4;
            puVar23[-1] = CONCAT44((float)((ulong)*puVar3 >> 0x20) +
                                   (float)((ulong)puVar23[-1] >> 0x20),
                                   (float)*puVar3 + (float)puVar23[-1]);
            puVar23[-2] = CONCAT44((float)((ulong)uVar8 >> 0x20) +
                                   (float)((ulong)puVar23[-2] >> 0x20),
                                   (float)uVar8 + (float)puVar23[-2]);
            puVar23[1] = CONCAT44((float)((ulong)uVar38 >> 0x20) +
                                  (float)((ulong)puVar23[1] >> 0x20),
                                  (float)uVar38 + (float)puVar23[1]);
            *puVar23 = CONCAT44((float)((ulong)uVar36 >> 0x20) + (float)((ulong)*puVar23 >> 0x20),
                                (float)uVar36 + (float)*puVar23);
            puVar23 = puVar23 + 4;
          } while (uVar9 != 0);
          if (uVar16 == uVar22) goto LAB_003313f4;
        }
        lVar20 = uVar16 - uVar22;
        pfVar24 = (float *)(lVar21 + uVar22 * 4 + lVar12 * 4 + lVar26 * -4);
        pfVar11 = (float *)((long)pvVar7 + uVar22 * 4);
        do {
          lVar20 = lVar20 + -1;
          *pfVar24 = *pfVar11 + *pfVar24;
          pfVar24 = pfVar24 + 1;
          pfVar11 = pfVar11 + 1;
        } while (lVar20 != 0);
      }
LAB_003313f4:
      lVar12 = *(long *)(param_2 + 0x238);
    } while ((ulong)((long)iVar10 << 1) <= (ulong)(*(long *)(param_2 + 0x240) - lVar12));
  }
  uVar16 = *(ulong *)(param_2 + 0x278);
  if (uVar16 < uVar14 || uVar16 - uVar14 == 0) {
    if (uVar16 < uVar14) {
      pvVar6 = (void *)((long)pvVar7 + uVar16 * 4);
      param_3[1] = (ulong)pvVar6;
    }
  }
  else {
    FUN_002feac4(param_3,uVar16 - uVar14);
    pvVar7 = (void *)*param_3;
    pvVar6 = (void *)param_3[1];
  }
  memcpy(pvVar7,(void *)(*(long *)(param_2 + 0x248) + *(long *)(param_2 + 0x260) * 4),
         (long)pvVar6 - (long)pvVar7);
  pvVar6 = (void *)*param_3;
  pvVar7 = (void *)param_3[1];
  sVar25 = (long)pvVar7 - (long)pvVar6;
  *(long *)(param_2 + 0x260) = *(long *)(param_2 + 0x260) + ((long)sVar25 >> 2);
  if ((*(byte *)(param_2 + 0x271) & 1) == 0) {
    if (*(char *)(param_2 + 0x110) == '\0') {
      uVar8 = 0xbff0000000000000;
    }
    else {
      if (1 < uVar28) {
        lVar12 = FUN_003342a4(*(undefined8 *)(param_2 + 0x4d8));
        *(double *)(lVar12 + 0x10) = *(double *)(lVar12 + 0x10) / (double)uVar28;
      }
      lVar12 = FUN_003342a4(*(undefined8 *)(param_2 + 0x4d8));
      uVar8 = *(undefined8 *)(lVar12 + 0x10);
    }
    lVar12 = FUN_0033429c(*(undefined8 *)(param_2 + 0x4d8));
    *(undefined8 *)(lVar12 + 0x10) = uVar8;
    FUN_00334008(*(undefined8 *)(param_2 + 0x4d8),*(undefined1 *)(param_2 + 0x273));
    pvVar6 = (void *)*param_3;
    pvVar7 = (void *)param_3[1];
    sVar25 = (long)pvVar7 - (long)pvVar6;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    if (pvVar7 != pvVar6) goto LAB_00331884;
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    if (pvVar7 != pvVar6) {
LAB_00331884:
      if ((long)sVar25 < 0) {
LAB_00331900:
        if (*(long *)(lVar2 + 0x28) == local_78) {
                    /* try { // try from 00331910 to 00331917 has its CatchHandler @ 00331918 */
          uVar8 = FUN_002febf0(param_1);
                    /* catch() { ... } // from try @ 00331888 with catch @ 00331918
                       catch() { ... } // from try @ 00331910 with catch @ 00331918 */
          pvVar6 = (void *)*param_1;
          if (pvVar6 != (void *)0x0) {
            param_1[1] = pvVar6;
            free(pvVar6);
          }
          if (*(long *)(lVar2 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
            FUN_00755eac(uVar8);
          }
        }
        goto LAB_00331964;
      }
                    /* try { // try from 00331888 to 0033188f has its CatchHandler @ 00331918 */
      pvVar7 = (void *)FUN_00759c3c(sVar25);
      *param_1 = pvVar7;
      param_1[2] = (long)pvVar7 + sVar25;
      memcpy(pvVar7,pvVar6,sVar25);
      param_1[1] = (long)pvVar7 + sVar25;
    }
  }
  *(undefined1 *)(param_1 + 3) = 1;
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
LAB_00331964:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00331968  FUN_00331968 =====

undefined8 FUN_00331968(long param_1,void *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  size_t __n;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  
  lVar1 = *param_3;
  lVar2 = param_3[1];
  *(undefined1 *)(param_1 + 0x219) = 0;
  uVar4 = *(ulong *)(param_1 + 0x210);
  uVar5 = lVar2 - lVar1 >> 2;
  if (uVar4 < uVar5 || uVar4 - uVar5 == 0) {
    if (uVar4 < uVar5) {
      param_3[1] = lVar1 + uVar4 * 4;
    }
  }
  else {
    FUN_002feac4(param_3,uVar4 - uVar5);
    uVar4 = *(ulong *)(param_1 + 0x210);
  }
  if (uVar4 != 0) {
    memmove((void *)*param_3,param_2,uVar4 << 2);
  }
  FUN_0036cee8(*(undefined8 *)(param_1 + 0x468),param_3,param_1 + 0x280,param_3);
  if (*(char *)(param_1 + 0x304) != '\0') {
    FUN_00345dc0(param_1 + 0x298,param_3);
  }
  FUN_00346588(param_1 + 0x308,param_3,param_1 + 0x408);
  fVar6 = *(float *)(param_1 + 0x8c);
  if ((fVar6 != 0.0 && fVar6 < 0.0 == NAN(fVar6)) &&
     (fVar6 = *(float *)(param_1 + 0x88), fVar6 != 0.0 && fVar6 < 0.0 == NAN(fVar6))) {
    bVar3 = FUN_003497f4(param_1 + 0x330,param_2,*(undefined8 *)(param_1 + 0x210));
    *(byte *)(param_1 + 0x219) = bVar3 & 1;
    if ((bVar3 & 1) == 0) goto LAB_00331ab4;
    uVar4 = (ulong)*(int *)(param_1 + 0x194);
    uVar5 = param_3[1] - *param_3 >> 2;
    if (uVar4 < uVar5 || uVar4 - uVar5 == 0) {
      if (uVar4 < uVar5) {
        param_3[1] = *param_3 + uVar4 * 4;
      }
    }
    else {
      FUN_002feac4(param_3,uVar4 - uVar5);
    }
    FUN_003451a4(param_3,(long)*(int *)(param_1 + 0x198));
    __n = param_3[1] - *param_3;
    if (0 < (long)__n) {
      memset((void *)*param_3,0,__n);
    }
  }
  if (*(char *)(param_1 + 0x219) != '\0') {
    return 1;
  }
LAB_00331ab4:
  fVar6 = 1.0;
  if ((*(char *)(param_1 + 0x34) != '\0') &&
     (fVar7 = (float)FUN_003498e0(param_1 + 0x330,param_2,*(undefined8 *)(param_1 + 0x210)),
     fVar6 = 1.0, fVar7 != 1e-06 && fVar7 < 1e-06 == NAN(fVar7))) {
    fVar6 = *(float *)(param_1 + 0x30) / SQRT(fVar7);
  }
  FUN_00344ea0(fVar6,param_1 + 0x408,param_3,*(undefined8 *)(param_1 + 800),
               *(undefined8 *)(param_1 + 0x328));
  FUN_003451a4(param_3,(long)*(int *)(param_1 + 0x198));
  FUN_003450cc(*(undefined4 *)(param_1 + 0x19c),param_3);
  FUN_003330c0(param_1,param_3);
  return 1;
}


// ===== 00331b44  FUN_00331b44 =====

undefined8 FUN_00331b44(long param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  size_t __n;
  long lVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  void *__src;
  long *plVar17;
  long lVar18;
  undefined1 auVar19 [16];
  byte local_80;
  undefined7 uStack_7f;
  byte bStack_78;
  undefined7 uStack_77;
  undefined4 uStack_70;
  undefined1 uStack_6c;
  undefined1 uStack_6b;
  undefined2 uStack_6a;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if ((*(byte *)(param_1 + 0x219) & 1) == 0) {
    if (*(char *)(param_1 + 0x218) == '\0') {
      plVar5 = (long *)(**(code **)(**(long **)(param_1 + 0x3a0) + 0x10))
                                 (*(long **)(param_1 + 0x3a0));
      plVar6 = (long *)(**(code **)(**(long **)(param_1 + 0x3a0) + 0x18))
                                 (*(long **)(param_1 + 0x3a0));
      lVar9 = *plVar5;
      lVar12 = plVar5[1] - lVar9 >> 6;
      if (lVar12 == 2) {
        if (plVar6[1] - *plVar6 != 0x80) goto LAB_00331d2c;
      }
      else if ((lVar12 != 1) || (plVar6[1] - *plVar6 != 0x40)) {
LAB_00331d2c:
        local_80 = 0x28;
        uStack_6c = 0x2e;
        uStack_77 = SUB167(s_Invalid_input_sizes__001b7698._0_16_,8);
        uStack_70._0_1_ = SUB161(s_Invalid_input_sizes__001b7698._0_16_,0xf);
        uStack_70 = CONCAT31(0x73657a,(char)uStack_70);
        uStack_7f = SUB167(s_Invalid_input_sizes__001b7698._0_16_,0);
        bStack_78 = SUB161(s_Invalid_input_sizes__001b7698._0_16_,7);
        uStack_6b = 0;
                    /* try { // try from 00331d54 to 00331d6f has its CatchHandler @ 0033221c */
        FUN_00372794(&local_80,
                     "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/frame_processors/nc/src/krisp_nc_maincleaner.cpp"
                     ,0x22c,"infer");
        if ((local_80 & 1) != 0) {
          free((void *)CONCAT26(uStack_6a,CONCAT15(uStack_6b,CONCAT14(uStack_6c,uStack_70))));
        }
        lVar9 = *plVar5;
      }
      FUN_0034ce18(&local_80,lVar9);
      uVar13 = (ulong)(local_80 >> 1);
      if ((local_80 & 1) != 0) {
        uVar13 = CONCAT71(uStack_77,bStack_78);
      }
      if (uVar13 == 5) {
        piVar1 = (int *)CONCAT26(uStack_6a,CONCAT15(uStack_6b,CONCAT14(uStack_6c,uStack_70)));
        if ((local_80 & 1) == 0) {
          piVar1 = (int *)&uStack_7f;
        }
        bVar4 = *piVar1 == 0x75706e49 && (char)piVar1[1] == 't';
      }
      else {
        bVar4 = false;
      }
      if ((local_80 & 1) != 0) {
        free((void *)CONCAT26(uStack_6a,CONCAT15(uStack_6b,CONCAT14(uStack_6c,uStack_70))));
      }
      if (!bVar4) {
        local_80 = 0x26;
        uStack_77 = SUB167(s_Invalid_input_name__001dc2ed._0_16_,8);
        uStack_70._0_1_ = SUB161(s_Invalid_input_name__001dc2ed._0_16_,0xf);
        uStack_70 = CONCAT31(0x2e656d,(char)uStack_70);
        uStack_7f = SUB167(s_Invalid_input_name__001dc2ed._0_16_,0);
        bStack_78 = SUB161(s_Invalid_input_name__001dc2ed._0_16_,7);
        uStack_6c = 0;
                    /* try { // try from 00331e20 to 00331e3b has its CatchHandler @ 00332218 */
        FUN_00372794(&local_80,
                     "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/frame_processors/nc/src/krisp_nc_maincleaner.cpp"
                     ,0x22d,"infer");
        if ((local_80 & 1) != 0) {
          free((void *)CONCAT26(uStack_6a,CONCAT15(uStack_6b,CONCAT14(uStack_6c,uStack_70))));
        }
      }
      FUN_0034ce18(&local_80,*plVar6);
      uVar13 = (ulong)(local_80 >> 1);
      if ((local_80 & 1) != 0) {
        uVar13 = CONCAT71(uStack_77,bStack_78);
      }
      if (uVar13 == 6) {
        piVar1 = (int *)CONCAT26(uStack_6a,CONCAT15(uStack_6b,CONCAT14(uStack_6c,uStack_70)));
        if ((local_80 & 1) == 0) {
          piVar1 = (int *)&uStack_7f;
        }
        bVar4 = *piVar1 == 0x7074754f && (short)piVar1[1] == 0x7475;
      }
      else {
        bVar4 = false;
      }
      if ((local_80 & 1) != 0) {
        free((void *)CONCAT26(uStack_6a,CONCAT15(uStack_6b,CONCAT14(uStack_6c,uStack_70))));
      }
      if (!bVar4) {
        local_80 = 0x28;
        uStack_6c = 0x2e;
        uStack_77 = SUB167(s_Invalid_output_name__001c0b7b._0_16_,8);
        uStack_70._0_1_ = SUB161(s_Invalid_output_name__001c0b7b._0_16_,0xf);
        uStack_70 = CONCAT31(0x656d61,(char)uStack_70);
        uStack_7f = SUB167(s_Invalid_output_name__001c0b7b._0_16_,0);
        bStack_78 = SUB161(s_Invalid_output_name__001c0b7b._0_16_,7);
        uStack_6b = 0;
                    /* try { // try from 00331ee8 to 00331f03 has its CatchHandler @ 00332214 */
        FUN_00372794(&local_80,
                     "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/frame_processors/nc/src/krisp_nc_maincleaner.cpp"
                     ,0x22e,"infer");
        if ((local_80 & 1) != 0) {
          free((void *)CONCAT26(uStack_6a,CONCAT15(uStack_6b,CONCAT14(uStack_6c,uStack_70))));
        }
      }
      uVar13 = FUN_0034ce44(*plVar5);
      if ((uVar13 & 1) != 0) {
        lVar9 = *param_2;
        lVar12 = param_2[1];
        plVar17 = *(long **)(param_1 + 0x3a0);
        lVar18 = *plVar5;
        puVar7 = (undefined8 *)FUN_00759c3c(0x10);
        puVar8 = puVar7 + 2;
        bStack_78 = (byte)puVar8;
        uStack_77 = (undefined7)((ulong)puVar8 >> 8);
        uStack_70 = SUB84(puVar8,0);
        uStack_6c = (undefined1)((ulong)puVar8 >> 0x20);
        uStack_6b = (undefined1)((ulong)puVar8 >> 0x28);
        uStack_6a = (undefined2)((ulong)puVar8 >> 0x30);
        local_80 = (byte)puVar7;
        uStack_7f = (undefined7)((ulong)puVar7 >> 8);
        *puVar7 = 1;
        puVar7[1] = lVar12 - lVar9 >> 2;
                    /* try { // try from 00331f58 to 00331f67 has its CatchHandler @ 003321fc */
        (**(code **)(*plVar17 + 0x20))(plVar17,lVar18,&local_80);
        if ((void *)CONCAT71(uStack_7f,local_80) != (void *)0x0) {
          bStack_78 = local_80;
          uStack_77 = uStack_7f;
          free((void *)CONCAT71(uStack_7f,local_80));
        }
      }
      iVar2 = *(int *)((undefined8 *)*plVar5 + 7);
      if (iVar2 != 2) {
        if (iVar2 == 1) {
          uVar10 = FUN_00753a74(0x20);
                    /* try { // try from 00332030 to 0033203f has its CatchHandler @ 003321ec */
          FUN_002fd2b0(&local_80,"FP16 models are not supported on this platform.");
                    /* try { // try from 00332044 to 0033207b has its CatchHandler @ 003321d4 */
          FUN_00374fd0(uVar10,&local_80);
          if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_00753c5c(uVar10,PTR_PTR_007a1350,PTR_FUN_007a11f8);
          }
        }
        else {
          uVar10 = FUN_00753a74(0x20);
                    /* try { // try from 003320ec to 003320fb has its CatchHandler @ 003321e8 */
          FUN_002fd2b0(&local_80,
                       "Noise cancelling networks only support float32 and float16 precisions.");
                    /* try { // try from 00332100 to 00332137 has its CatchHandler @ 003321b8 */
          FUN_00374fd0(uVar10,&local_80);
          if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_00753c5c(uVar10,PTR_PTR_007a1350,PTR_FUN_007a11f8);
          }
        }
        goto LAB_00332248;
      }
      __n = param_2[1] - *param_2;
      if (__n != 0) {
        memmove(*(void **)*plVar5,(void *)*param_2,__n);
      }
      (**(code **)(**(long **)(param_1 + 0x3a0) + 0x28))();
      puVar8 = (undefined8 *)*plVar6;
      uVar13 = *(ulong *)(puVar8[4] + 8);
      uVar14 = param_2[1] - *param_2 >> 2;
      if (uVar13 < uVar14 || uVar13 - uVar14 == 0) {
        if (uVar13 < uVar14) {
          param_2[1] = *param_2 + uVar13 * 4;
        }
      }
      else {
        FUN_002feac4(param_2,uVar13 - uVar14);
        puVar8 = (undefined8 *)*plVar6;
      }
      if (*(int *)(puVar8 + 7) != 2) {
        if (*(int *)(puVar8 + 7) == 1) {
          uVar10 = FUN_00753a74(0x20);
                    /* try { // try from 00332094 to 003320a3 has its CatchHandler @ 003321b4 */
          FUN_002fd2b0(&local_80,"FP16 models are not supported on this platform.");
                    /* try { // try from 003320a8 to 003320df has its CatchHandler @ 003321a0 */
          FUN_00374fd0(uVar10,&local_80);
          if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_00753c5c(uVar10,PTR_PTR_007a1350,PTR_FUN_007a11f8);
          }
        }
        else {
          uVar10 = FUN_00753a74(0x20);
                    /* try { // try from 00332144 to 00332153 has its CatchHandler @ 003321b0 */
          FUN_002fd2b0(&local_80,
                       "Noise cancelling networks only support float32 and float16 precisions.");
                    /* try { // try from 00332158 to 0033218f has its CatchHandler @ 00332190 */
          FUN_00374fd0(uVar10,&local_80);
          if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_00753c5c(uVar10,PTR_PTR_007a1350,PTR_FUN_007a11f8);
          }
        }
        goto LAB_00332248;
      }
      __src = (void *)*puVar8;
      lVar9 = FUN_0034cd58(puVar8 + 1);
      if (lVar9 != 0) {
        memmove((void *)*param_2,__src,lVar9 << 2);
      }
    }
    else {
      puVar11 = (undefined4 *)*param_2;
      lVar9 = param_2[1];
      lVar12 = *(long *)(param_1 + 0x40) - *(long *)(param_1 + 0x38);
      uVar14 = lVar12 >> 2;
      uVar13 = lVar9 - (long)puVar11 >> 2;
      if (uVar14 < uVar13 || uVar14 - uVar13 == 0) {
        if (uVar14 < uVar13) {
          lVar9 = (long)puVar11 + lVar12;
          param_2[1] = lVar9;
        }
      }
      else {
        FUN_002feac4(param_2,uVar14 - uVar13);
        puVar11 = (undefined4 *)*param_2;
        lVar9 = param_2[1];
      }
      uVar14 = lVar9 - (long)puVar11;
      uVar13 = (long)uVar14 >> 2;
      if (0 < (long)uVar13) {
        if (7 < uVar13) {
          auVar19 = NEON_fmov(0x3f800000,4);
          uVar15 = uVar13 & 0x7ffffffffffffff8;
          puVar8 = (undefined8 *)(puVar11 + 4);
          uVar16 = uVar15;
          do {
            uVar16 = uVar16 - 8;
            puVar8[-1] = auVar19._8_8_;
            puVar8[-2] = auVar19._0_8_;
            puVar8[1] = auVar19._8_8_;
            *puVar8 = auVar19._0_8_;
            puVar8 = puVar8 + 4;
          } while (uVar16 != 0);
          bVar4 = uVar13 == uVar15;
          puVar11 = puVar11 + uVar15;
          uVar13 = uVar14 >> 2 & 7;
          if (bVar4) goto LAB_00331b78;
        }
        *puVar11 = 0x3f800000;
        if ((((1 < uVar13) && (puVar11[1] = 0x3f800000, uVar13 - 3 < 0xfffffffffffffffe)) &&
            (puVar11[2] = 0x3f800000, (uVar13 & 6) != 2)) &&
           (((puVar11[3] = 0x3f800000, uVar13 - 5 < 0xfffffffffffffffe &&
             (puVar11[4] = 0x3f800000, (uVar13 & 6) != 4)) &&
            (puVar11[5] = 0x3f800000, uVar13 - 7 < 0xfffffffffffffffe)))) {
          puVar11[6] = 0x3f800000;
        }
      }
    }
  }
LAB_00331b78:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return 1;
  }
LAB_00332248:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033224c  FUN_0033224c =====

undefined8 FUN_0033224c(long param_1,long *param_2)

{
  float *pfVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  size_t sVar7;
  size_t __n;
  long lVar8;
  float *pfVar9;
  undefined8 *puVar10;
  float *pfVar11;
  float *pfVar12;
  double *pdVar13;
  void *__s;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  float *pfVar17;
  undefined4 *puVar18;
  float *pfVar19;
  ulong uVar20;
  long lVar21;
  undefined4 *puVar22;
  undefined8 *puVar23;
  long lVar24;
  int iVar25;
  undefined8 *puVar26;
  float *pfVar27;
  ulong uVar28;
  long lVar29;
  undefined4 *puVar30;
  long lVar31;
  void *pvVar32;
  undefined8 uVar33;
  void *pvVar34;
  float fVar35;
  float fVar36;
  undefined8 uVar37;
  undefined1 auVar38 [16];
  double dVar39;
  double dVar40;
  undefined4 uVar41;
  double dVar42;
  undefined8 uVar43;
  double dVar44;
  undefined8 uVar45;
  double dVar46;
  undefined8 uVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  float local_160;
  float *local_128;
  float *local_120;
  float *local_118;
  void *local_110;
  void *local_108;
  void *local_100;
  void *local_f8;
  void *local_f0;
  void *local_e8;
  float *local_e0;
  float *local_d8;
  float *local_d0;
  void *local_c8;
  void *local_c0;
  void *local_b8;
  void *local_b0;
  void *local_a8;
  void *local_a0;
  float *local_98;
  float *local_90;
  float *local_88;
  long local_80;
  
  lVar8 = tpidr_el0;
  local_80 = *(long *)(lVar8 + 0x28);
  FUN_00345444(param_2,(long)*(int *)(param_1 + 0x198));
  lVar21 = *param_2;
  lVar15 = param_2[1];
  local_90 = (float *)0x0;
  local_88 = (float *)0x0;
  local_98 = (float *)0x0;
  uVar16 = lVar15 - lVar21;
  if (uVar16 == 0) {
    if ((*(char *)(param_1 + 0x110) != '\0') && (*(char *)(param_1 + 0x271) == '\0'))
    goto LAB_00332398;
LAB_003323a8:
    FUN_0034439c(param_2,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                 *(undefined4 *)(param_1 + 0x28));
    if (*(char *)(param_1 + 0x1a4) == '\0') {
      FUN_00344124(param_2,0,0);
    }
    else {
      FUN_00344520(ZEXT816(0x3ff0000000000000),0x4008000000000000,DAT_001b7030,param_2);
    }
    pfVar19 = local_90;
    if (((*(char *)(param_1 + 0x110) != '\0') && (*(char *)(param_1 + 0x271) == '\0')) &&
       (local_98 != local_90)) {
      pfVar12 = (float *)(param_1 + 0x108);
      uVar16 = (long)local_90 + (-4 - (long)local_98);
      pfVar27 = local_98;
      if ((0x13 < uVar16) &&
         (((float *)(param_1 + 0x10cU) <= local_98 ||
          ((float *)((long)local_98 + (uVar16 & 0xfffffffffffffffc) + 4) <= pfVar12)))) {
        uVar16 = (uVar16 >> 2) + 1;
        uVar20 = uVar16 & 0x7ffffffffffffffe;
        pfVar27 = local_98 + uVar20;
        uVar14 = uVar20;
        pfVar17 = local_98;
        do {
          uVar33 = *(undefined8 *)pfVar12;
          uVar37 = *(undefined8 *)pfVar17;
          fVar35 = powf((float)((ulong)uVar37 >> 0x20),(float)uVar33);
          local_160 = (float)uVar37;
          fVar36 = powf(local_160,(float)uVar33);
          uVar14 = uVar14 - 2;
          *(ulong *)pfVar17 = CONCAT44(fVar35,fVar36);
          pfVar17 = pfVar17 + 2;
        } while (uVar14 != 0);
        if (uVar16 == uVar20) goto LAB_003324c8;
      }
      do {
        fVar35 = powf(*pfVar27,*pfVar12);
        pfVar17 = pfVar27 + 1;
        *pfVar27 = fVar35;
        pfVar27 = pfVar17;
      } while (pfVar17 != pfVar19);
    }
LAB_003324c8:
    if (*(char *)(param_1 + 0x1a5) != '\0') {
                    /* try { // try from 003324e0 to 0033256b has its CatchHandler @ 00333074 */
      FUN_00344124(param_2,(ulong)(param_2[1] - *param_2 >> 2) >> 1,0);
    }
    if (*(float *)(param_1 + 0x1a8) != 1.0) {
      FUN_00344780(param_1 + 0x450,param_2,*(undefined4 *)(param_1 + 0x3b0));
    }
    lVar21 = *(long *)(param_1 + 0x450);
    *(long *)(param_1 + 0x450) = *param_2;
    *param_2 = lVar21;
    lVar21 = *(long *)(param_1 + 0x458);
    *(long *)(param_1 + 0x458) = param_2[1];
    param_2[1] = lVar21;
    lVar21 = *(long *)(param_1 + 0x460);
    *(long *)(param_1 + 0x460) = param_2[2];
    param_2[2] = lVar21;
    if (*(char *)(param_1 + 0x1ac) != '\0') {
      FUN_00344954(param_1 + 0x450);
    }
    if (*(char *)(param_1 + 0x14) != '\0') {
      FUN_00345c00(param_1 + 0x298,param_1 + 0x450);
    }
    local_a8 = (void *)0x0;
    local_a0 = (void *)0x0;
    local_b0 = (void *)0x0;
    sVar7 = *(long *)(param_1 + 0x410) - *(long *)(param_1 + 0x408);
    if (sVar7 != 0) {
      if ((long)sVar7 < 0) goto LAB_00332e5c;
                    /* try { // try from 00332588 to 0033258f has its CatchHandler @ 0033304c */
      local_b0 = (void *)FUN_00759c3c(sVar7);
      pvVar32 = (void *)((long)local_b0 + sVar7);
      local_a0 = pvVar32;
      memset(local_b0,0,sVar7);
      local_a8 = pvVar32;
    }
    if ((*(byte *)(param_1 + 0x271) & 1) != 0) {
LAB_00332a50:
      fVar35 = *(float *)(param_1 + 0x274);
      if (fVar35 < 99.99999) {
        puVar30 = *(undefined4 **)(param_1 + 0x450);
        puVar18 = *(undefined4 **)(param_1 + 0x458);
        if (puVar30 != puVar18) {
          uVar16 = (long)puVar18 + (-4 - (long)puVar30);
          fVar36 = fVar35 / 100.0;
          fVar35 = (100.0 - fVar35) / 100.0;
          if (0x1b < uVar16) {
            uVar16 = (uVar16 >> 2) + 1;
            uVar20 = uVar16 & 0x7ffffffffffffff8;
            puVar23 = (undefined8 *)(puVar30 + 4);
            uVar14 = uVar20;
            do {
              uVar14 = uVar14 - 8;
              puVar23[-1] = CONCAT44(fVar35 + (float)((ulong)puVar23[-1] >> 0x20) * fVar36,
                                     fVar35 + (float)puVar23[-1] * fVar36);
              puVar23[-2] = CONCAT44(fVar35 + (float)((ulong)puVar23[-2] >> 0x20) * fVar36,
                                     fVar35 + (float)puVar23[-2] * fVar36);
              puVar23[1] = CONCAT44(fVar35 + (float)((ulong)puVar23[1] >> 0x20) * fVar36,
                                    fVar35 + (float)puVar23[1] * fVar36);
              *puVar23 = CONCAT44(fVar35 + (float)((ulong)*puVar23 >> 0x20) * fVar36,
                                  fVar35 + (float)*puVar23 * fVar36);
              puVar23 = puVar23 + 4;
            } while (uVar14 != 0);
            puVar30 = puVar30 + uVar20;
            if (uVar16 == uVar20) goto LAB_00332afc;
          }
          do {
            uVar41 = NEON_fmadd(fVar36,*puVar30,fVar35);
            puVar22 = puVar30 + 1;
            *puVar30 = uVar41;
            puVar30 = puVar22;
          } while (puVar22 != puVar18);
        }
      }
LAB_00332afc:
                    /* try { // try from 00332b00 to 00332b73 has its CatchHandler @ 0033307c */
      FUN_0036d080(*(undefined8 *)(param_1 + 0x468),param_1 + 0x408,param_1 + 0x450,&local_b0);
      FUN_003466e4(param_1 + 0x308,&local_b0,param_2);
      if (*(char *)(param_1 + 0x270) != '\0') {
        FUN_003466e4(param_1 + 0x308,param_1 + 0x408,param_2);
      }
      if (*(char *)(param_1 + 0x272) != '\0') {
        FUN_00345638(param_1 + 0x3b8,param_2);
      }
      if (*(char *)(param_1 + 4) != '\0') {
        FUN_0034409c(param_2);
      }
      FUN_0036cee8(*(undefined8 *)(param_1 + 0x468),param_2,param_1 + 0x280,param_2);
      if ((*(char *)(param_1 + 0x110) != '\0') && (*(char *)(param_1 + 0x271) == '\0')) {
        local_c8 = (void *)0x0;
        local_c0 = (void *)0x0;
        local_b8 = (void *)0x0;
        local_e0 = (float *)0x0;
        local_d8 = (float *)0x0;
        local_d0 = (float *)0x0;
                    /* try { // try from 00332b98 to 00332bb7 has its CatchHandler @ 00332fc8 */
        FUN_0036d080(*(undefined8 *)(param_1 + 0x468),param_1 + 0x408,&local_98,&local_e0);
        FUN_003466e4(param_1 + 0x308,&local_e0,&local_c8);
        uVar33 = *(undefined8 *)(param_1 + 0x468);
        local_f8 = (void *)0x0;
        local_f0 = (void *)0x0;
        local_e8 = (void *)0x0;
                    /* try { // try from 00332bc8 to 00332bd3 has its CatchHandler @ 00332f64 */
        FUN_00349f00(&local_110,*(undefined8 *)(param_1 + 0x498),&local_c8);
                    /* try { // try from 00332bd4 to 00332be7 has its CatchHandler @ 00332f4c */
        FUN_0036cee8(uVar33,&local_110,param_1 + 0x4c0,&local_f8);
        if (local_110 != (void *)0x0) {
          local_108 = local_110;
          free(local_110);
        }
        lVar21 = *(long *)(param_1 + 0x4a8);
        if (lVar21 == *(long *)(param_1 + 0x4b0)) {
                    /* try { // try from 00332c8c to 00332c93 has its CatchHandler @ 00332f00 */
          FUN_003338b8(param_1 + 0x4a8);
        }
        else {
          iVar5 = *(int *)(param_1 + 0xf8);
          lVar15 = (long)iVar5;
          iVar25 = (int)((ulong)(*(long *)(param_1 + 0x4b0) - lVar21) >> 2);
          if (iVar5 < iVar25) {
            uVar28 = (ulong)(uint)(iVar25 - iVar5);
            uVar14 = uVar28 - 1;
            uVar6 = (int)((ulong)((long)local_f0 - (long)local_f8) >> 2) - iVar5;
            uVar20 = (ulong)(uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU));
            uVar16 = uVar14;
            if (uVar20 <= uVar14) {
              uVar16 = uVar20;
            }
            if (uVar16 < 0xc) {
LAB_00332c78:
              lVar31 = 0;
            }
            else {
              uVar3 = lVar21 + lVar15 * 4;
              if (uVar20 <= uVar14) {
                uVar14 = uVar20;
              }
              if ((uVar3 < (long)local_f8 + uVar14 * 4 + 4) &&
                 (local_f8 < (void *)(uVar3 + uVar14 * 4 + 4))) goto LAB_00332c78;
              uVar14 = uVar16 + 1 & 7;
              uVar4 = 8;
              if (uVar14 != 0) {
                uVar4 = uVar14;
              }
              pfVar19 = (float *)(uVar3 + 0x10);
              lVar31 = (uVar16 + 1) - uVar4;
              puVar23 = (undefined8 *)((long)local_f8 + 0x10);
              lVar24 = ~uVar16 + uVar4;
              lVar15 = lVar31 + lVar15;
              do {
                uVar47 = *(undefined8 *)pfVar19;
                lVar24 = lVar24 + 8;
                uVar37 = puVar23[-1];
                uVar33 = puVar23[-2];
                uVar45 = puVar23[1];
                uVar43 = *puVar23;
                puVar23 = puVar23 + 4;
                *pfVar19 = (float)uVar37 + pfVar19[-2];
                pfVar19[1] = (float)((ulong)uVar37 >> 0x20) + pfVar19[-1];
                pfVar19[-4] = (float)uVar33 + pfVar19[-4];
                pfVar19[-3] = (float)((ulong)uVar33 >> 0x20) + pfVar19[-3];
                *(ulong *)(pfVar19 + 2) =
                     CONCAT44((float)((ulong)uVar45 >> 0x20) +
                              (float)((ulong)*(undefined8 *)(pfVar19 + 2) >> 0x20),
                              (float)uVar45 + (float)*(undefined8 *)(pfVar19 + 2));
                *(ulong *)pfVar19 =
                     CONCAT44((float)((ulong)uVar43 >> 0x20) + (float)((ulong)uVar47 >> 0x20),
                              (float)uVar43 + (float)uVar47);
                pfVar19 = pfVar19 + 8;
              } while (lVar24 != 0);
            }
            lVar24 = lVar31 - uVar20;
            lVar29 = uVar28 - lVar31;
            pfVar19 = (float *)(lVar21 + lVar15 * 4);
            pfVar12 = (float *)((long)local_f8 + lVar31 * 4);
            do {
              if (lVar24 == 0) break;
              lVar29 = lVar29 + -1;
              lVar24 = lVar24 + 1;
              *pfVar19 = *pfVar12 + *pfVar19;
              pfVar19 = pfVar19 + 1;
              pfVar12 = pfVar12 + 1;
            } while (lVar29 != 0);
          }
          local_110 = (void *)0x0;
          local_108 = (void *)0x0;
          local_100 = (void *)0x0;
                    /* try { // try from 00332d20 to 00332d3b has its CatchHandler @ 00332f6c */
          uVar16 = FUN_00334df4(*(undefined8 *)(param_1 + 0x490),lVar21,&local_110);
          if ((uVar16 & 0xff00000000) == 0) goto LAB_00332e74;
          lVar21 = FUN_0033429c(*(undefined8 *)(param_1 + 0x4d8));
          *(double *)(lVar21 + 0x10) = (double)(float)uVar16;
          if (*(int *)(param_1 + 0xf8) != 0) {
            pvVar34 = *(void **)(param_1 + 0x4a8);
            pvVar32 = (void *)((long)pvVar34 + (long)*(int *)(param_1 + 0xf8) * 4);
            sVar7 = *(long *)(param_1 + 0x4b0) - (long)pvVar32;
            if (sVar7 != 0) {
              memmove(pvVar34,pvVar32,sVar7);
            }
            *(size_t *)(param_1 + 0x4b0) = (long)pvVar34 + sVar7;
          }
                    /* try { // try from 00332d90 to 00332d97 has its CatchHandler @ 00332f04 */
          FUN_003338b8(param_1 + 0x4a8);
          if (local_110 != (void *)0x0) {
            local_108 = local_110;
            free(local_110);
          }
        }
        if (local_f8 != (void *)0x0) {
          local_f0 = local_f8;
          free(local_f8);
        }
        if (local_e0 != (float *)0x0) {
          local_d8 = local_e0;
          free(local_e0);
        }
        if (local_c8 != (void *)0x0) {
          local_c0 = local_c8;
          free(local_c8);
        }
      }
      if (*(char *)(param_1 + 0x80) != '\0') {
                    /* try { // try from 00332de4 to 00332deb has its CatchHandler @ 0033307c */
        FUN_00344ad8(param_2);
      }
      if (local_b0 != (void *)0x0) {
        local_a8 = local_b0;
        free(local_b0);
      }
      if (local_98 != (float *)0x0) {
        local_90 = local_98;
        free(local_98);
      }
      if (*(long *)(lVar8 + 0x28) == local_80) {
        return 1;
      }
      goto LAB_003330bc;
    }
    pvVar32 = *(void **)(param_1 + 0x450);
    local_c8 = (void *)0x0;
    local_c0 = (void *)0x0;
    local_b8 = (void *)0x0;
    sVar7 = *(long *)(param_1 + 0x458) - (long)pvVar32;
    if (sVar7 != 0) {
      if (-1 < (long)sVar7) {
                    /* try { // try from 003325d0 to 003325d7 has its CatchHandler @ 00332f3c */
        local_c8 = (void *)FUN_00759c3c(sVar7);
        pvVar34 = (void *)((long)local_c8 + sVar7);
        local_c0 = local_c8;
        local_b8 = pvVar34;
        memcpy(local_c8,pvVar32,sVar7);
        local_c0 = pvVar34;
        goto LAB_003325f4;
      }
      goto LAB_00332e88;
    }
LAB_003325f4:
    pvVar32 = (void *)*param_2;
    local_e0 = (float *)0x0;
    local_d8 = (float *)0x0;
    local_d0 = (float *)0x0;
    sVar7 = param_2[1] - (long)pvVar32;
    if (sVar7 != 0) {
      if (-1 < (long)sVar7) {
                    /* try { // try from 0033260c to 00332613 has its CatchHandler @ 00332f2c */
        local_e0 = (float *)FUN_00759c3c(sVar7);
        pfVar19 = (float *)((long)local_e0 + sVar7);
        local_d8 = local_e0;
        local_d0 = pfVar19;
        memcpy(local_e0,pvVar32,sVar7);
        local_d8 = pfVar19;
        goto LAB_00332630;
      }
      goto LAB_00332ea0;
    }
LAB_00332630:
                    /* try { // try from 00332634 to 0033273b has its CatchHandler @ 0033301c */
    FUN_0036d080(*(undefined8 *)(param_1 + 0x468),param_1 + 0x408,&local_c8,&local_b0);
    FUN_003466e4(param_1 + 0x308,&local_b0,&local_e0);
    pfVar12 = local_d8;
    pfVar19 = local_e0;
    if (local_e0 == local_d8) {
      dVar51 = 0.0;
    }
    else {
      uVar16 = (long)local_d8 + (-4 - (long)local_e0);
      if (uVar16 < 0x1c) {
        dVar51 = 0.0;
        pfVar17 = local_e0;
      }
      else {
        dVar51 = 0.0;
        pfVar27 = local_e0 + 4;
        uVar16 = (uVar16 >> 2) + 1;
        uVar20 = uVar16 & 0x7ffffffffffffff8;
        pfVar17 = local_e0 + uVar20;
        uVar14 = uVar20;
        do {
          pfVar1 = pfVar27 + -4;
          pfVar9 = pfVar27 + -2;
          pfVar11 = pfVar27 + 2;
          uVar33 = *(undefined8 *)pfVar27;
          uVar14 = uVar14 - 8;
          pfVar27 = pfVar27 + 8;
          dVar46 = (double)((float)*(undefined8 *)pfVar1 * 3.0517578e-05);
          dVar48 = (double)((float)((ulong)*(undefined8 *)pfVar1 >> 0x20) * 3.0517578e-05);
          dVar39 = (double)((float)*(undefined8 *)pfVar9 * 3.0517578e-05);
          dVar40 = (double)((float)((ulong)*(undefined8 *)pfVar9 >> 0x20) * 3.0517578e-05);
          dVar49 = (double)((float)uVar33 * 3.0517578e-05);
          dVar50 = (double)((float)((ulong)uVar33 >> 0x20) * 3.0517578e-05);
          dVar42 = (double)((float)*(undefined8 *)pfVar11 * 3.0517578e-05);
          dVar44 = (double)((float)((ulong)*(undefined8 *)pfVar11 >> 0x20) * 3.0517578e-05);
          dVar51 = dVar51 + dVar46 * dVar46 + dVar48 * dVar48 + dVar39 * dVar39 + dVar40 * dVar40 +
                   dVar49 * dVar49 + dVar50 * dVar50 + dVar42 * dVar42 + dVar44 * dVar44;
        } while (uVar14 != 0);
        if (uVar16 == uVar20) goto LAB_00332734;
      }
      do {
        pfVar27 = pfVar17 + 1;
        dVar51 = dVar51 + (double)(*pfVar17 * 3.0517578e-05) * (double)(*pfVar17 * 3.0517578e-05);
        pfVar17 = pfVar27;
      } while (pfVar27 != local_d8);
    }
LAB_00332734:
    pdVar13 = (double *)FUN_0033429c(*(undefined8 *)(param_1 + 0x4d8));
    pvVar32 = local_c8;
    local_f0 = (void *)0x0;
    local_e8 = (void *)0x0;
    local_f8 = (void *)0x0;
    sVar7 = (long)local_c0 - (long)local_c8;
    *pdVar13 = dVar51 / (double)((long)pfVar12 - (long)pfVar19 >> 2);
    if (sVar7 != 0) {
      if (-1 < (long)sVar7) {
                    /* try { // try from 00332768 to 0033276f has its CatchHandler @ 00332f1c */
        __s = (void *)FUN_00759c3c(sVar7);
        local_f8 = __s;
        local_e8 = (void *)((long)__s + sVar7);
        memset(__s,0,sVar7);
        __n = *(long *)(param_1 + 0x410) - *(long *)(param_1 + 0x408);
        pvVar34 = (void *)((long)__s + sVar7);
        goto joined_r0x003327a4;
      }
      goto LAB_00332eb8;
    }
    __s = (void *)0x0;
    __n = *(long *)(param_1 + 0x410) - *(long *)(param_1 + 0x408);
    pvVar34 = local_f0;
joined_r0x003327a4:
    local_f0 = pvVar34;
    if (__n != 0) {
      local_100 = (void *)0x0;
      local_108 = (void *)0x0;
      local_110 = (void *)0x0;
      if (-1 < (long)__n) {
                    /* try { // try from 003327ac to 003327b3 has its CatchHandler @ 00332f0c */
        local_110 = (void *)FUN_00759c3c(__n);
        pvVar2 = (void *)((long)local_110 + __n);
        local_100 = pvVar2;
        memset(local_110,0,__n);
        sVar7 = param_2[1] - *param_2;
        local_108 = pvVar2;
        goto joined_r0x003327e0;
      }
      goto LAB_00332ed0;
    }
    local_100 = (void *)0x0;
    local_108 = (void *)0x0;
    local_110 = (void *)0x0;
    sVar7 = param_2[1] - *param_2;
joined_r0x003327e0:
    if (sVar7 == 0) {
      local_118 = (float *)0x0;
      local_120 = (float *)0x0;
      local_128 = (float *)0x0;
joined_r0x003327e8:
      if ((long)pvVar34 - (long)__s != 0) {
        uVar14 = (long)pvVar34 - (long)__s >> 2;
        uVar16 = uVar14;
        if (uVar14 < 2) {
          uVar16 = 1;
        }
        uVar20 = 0;
        if ((7 < uVar14) && (0x1f < (ulong)((long)__s - (long)pvVar32))) {
          auVar38 = NEON_fmov(0x3f800000,4);
          uVar20 = uVar16 & 0xfffffffffffffff8;
          puVar23 = (undefined8 *)((long)pvVar32 + 0x10);
          puVar26 = (undefined8 *)((long)__s + 0x10);
          uVar14 = uVar20;
          do {
            puVar10 = puVar23 + -1;
            uVar33 = puVar23[-2];
            uVar43 = puVar23[1];
            uVar37 = *puVar23;
            uVar14 = uVar14 - 8;
            puVar23 = puVar23 + 4;
            puVar26[-1] = CONCAT44(auVar38._12_4_ - (float)((ulong)*puVar10 >> 0x20),
                                   auVar38._8_4_ - (float)*puVar10);
            puVar26[-2] = CONCAT44(auVar38._4_4_ - (float)((ulong)uVar33 >> 0x20),
                                   auVar38._0_4_ - (float)uVar33);
            puVar26[1] = CONCAT44(auVar38._12_4_ - (float)((ulong)uVar43 >> 0x20),
                                  auVar38._8_4_ - (float)uVar43);
            *puVar26 = CONCAT44(auVar38._4_4_ - (float)((ulong)uVar37 >> 0x20),
                                auVar38._0_4_ - (float)uVar37);
            puVar26 = puVar26 + 4;
          } while (uVar14 != 0);
          if (uVar16 == uVar20) goto LAB_003328dc;
        }
        lVar21 = uVar16 - uVar20;
        pfVar19 = (float *)((long)pvVar32 + uVar20 * 4);
        pfVar12 = (float *)((long)__s + uVar20 * 4);
        do {
          lVar21 = lVar21 + -1;
          *pfVar12 = 1.0 - *pfVar19;
          pfVar19 = pfVar19 + 1;
          pfVar12 = pfVar12 + 1;
        } while (lVar21 != 0);
      }
LAB_003328dc:
                    /* try { // try from 003328e0 to 003329e7 has its CatchHandler @ 00332fd8 */
      FUN_0036d080(*(undefined8 *)(param_1 + 0x468),param_1 + 0x408,&local_f8,&local_110);
      FUN_003466e4(param_1 + 0x308,&local_110,&local_128);
      pfVar12 = local_120;
      pfVar19 = local_128;
      if (local_128 == local_120) {
        dVar51 = 0.0;
      }
      else {
        uVar16 = (long)local_120 + (-4 - (long)local_128);
        if (uVar16 < 0x1c) {
          dVar51 = 0.0;
          pfVar17 = local_128;
        }
        else {
          dVar51 = 0.0;
          pfVar27 = local_128 + 4;
          uVar16 = (uVar16 >> 2) + 1;
          uVar20 = uVar16 & 0x7ffffffffffffff8;
          pfVar17 = local_128 + uVar20;
          uVar14 = uVar20;
          do {
            pfVar1 = pfVar27 + -4;
            pfVar9 = pfVar27 + -2;
            pfVar11 = pfVar27 + 2;
            uVar33 = *(undefined8 *)pfVar27;
            uVar14 = uVar14 - 8;
            pfVar27 = pfVar27 + 8;
            dVar46 = (double)((float)*(undefined8 *)pfVar1 * 3.0517578e-05);
            dVar48 = (double)((float)((ulong)*(undefined8 *)pfVar1 >> 0x20) * 3.0517578e-05);
            dVar39 = (double)((float)*(undefined8 *)pfVar9 * 3.0517578e-05);
            dVar40 = (double)((float)((ulong)*(undefined8 *)pfVar9 >> 0x20) * 3.0517578e-05);
            dVar49 = (double)((float)uVar33 * 3.0517578e-05);
            dVar50 = (double)((float)((ulong)uVar33 >> 0x20) * 3.0517578e-05);
            dVar42 = (double)((float)*(undefined8 *)pfVar11 * 3.0517578e-05);
            dVar44 = (double)((float)((ulong)*(undefined8 *)pfVar11 >> 0x20) * 3.0517578e-05);
            dVar51 = dVar51 + dVar46 * dVar46 + dVar48 * dVar48 + dVar39 * dVar39 + dVar40 * dVar40
                     + dVar49 * dVar49 + dVar50 * dVar50 + dVar42 * dVar42 + dVar44 * dVar44;
          } while (uVar14 != 0);
          if (uVar16 == uVar20) goto LAB_003329e0;
        }
        do {
          pfVar27 = pfVar17 + 1;
          dVar51 = dVar51 + (double)(*pfVar17 * 3.0517578e-05) * (double)(*pfVar17 * 3.0517578e-05);
          pfVar17 = pfVar27;
        } while (pfVar27 != local_120);
      }
LAB_003329e0:
      lVar21 = FUN_0033429c(*(undefined8 *)(param_1 + 0x4d8));
      *(double *)(lVar21 + 8) = dVar51 / (double)((long)pfVar12 - (long)pfVar19 >> 2);
      if (local_128 != (float *)0x0) {
        local_120 = local_128;
        free(local_128);
      }
      if (local_110 != (void *)0x0) {
        local_108 = local_110;
        free(local_110);
      }
      if (local_f8 != (void *)0x0) {
        local_f0 = local_f8;
        free(local_f8);
      }
      if (local_e0 != (float *)0x0) {
        local_d8 = local_e0;
        free(local_e0);
      }
      if (local_c8 != (void *)0x0) {
        local_c0 = local_c8;
        free(local_c8);
      }
      goto LAB_00332a50;
    }
    local_118 = (float *)0x0;
    local_120 = (float *)0x0;
    local_128 = (float *)0x0;
    if (-1 < (long)sVar7) {
                    /* try { // try from 00332828 to 0033282f has its CatchHandler @ 00332f08 */
      local_128 = (float *)FUN_00759c3c(sVar7);
      pfVar19 = (float *)((long)local_128 + sVar7);
      local_118 = pfVar19;
      memset(local_128,0,sVar7);
      local_120 = pfVar19;
      goto joined_r0x003327e8;
    }
  }
  else {
    if (-1 < (long)uVar16) {
                    /* try { // try from 003322ac to 003322b3 has its CatchHandler @ 0033305c */
      pfVar12 = (float *)FUN_00759c3c(uVar16);
      pfVar19 = (float *)((long)pfVar12 + uVar16);
      local_98 = pfVar12;
      local_88 = pfVar19;
      memset(pfVar12,0,uVar16);
      local_90 = pfVar19;
      if ((*(char *)(param_1 + 0x110) != '\0') && (*(char *)(param_1 + 0x271) == '\0')) {
        if (lVar15 != lVar21) {
          uVar14 = uVar16 >> 2;
          uVar20 = 0;
          if (uVar14 < 2) {
            uVar14 = 1;
          }
          if ((0x1f < uVar16) && (0x1f < (ulong)((long)pfVar12 - lVar21))) {
            auVar38 = NEON_fmov(0x3f800000,4);
            uVar20 = uVar14 & 0x1ffffffffffffff8;
            puVar23 = (undefined8 *)(lVar21 + 0x10);
            pfVar19 = pfVar12 + 4;
            uVar16 = uVar20;
            do {
              puVar26 = puVar23 + -1;
              uVar33 = puVar23[-2];
              uVar43 = puVar23[1];
              uVar37 = *puVar23;
              uVar16 = uVar16 - 8;
              puVar23 = puVar23 + 4;
              *(ulong *)(pfVar19 + -2) =
                   CONCAT44(auVar38._12_4_ - (float)((ulong)*puVar26 >> 0x20),
                            auVar38._8_4_ - (float)*puVar26);
              *(ulong *)(pfVar19 + -4) =
                   CONCAT44(auVar38._4_4_ - (float)((ulong)uVar33 >> 0x20),
                            auVar38._0_4_ - (float)uVar33);
              *(ulong *)(pfVar19 + 2) =
                   CONCAT44(auVar38._12_4_ - (float)((ulong)uVar43 >> 0x20),
                            auVar38._8_4_ - (float)uVar43);
              *(ulong *)pfVar19 =
                   CONCAT44(auVar38._4_4_ - (float)((ulong)uVar37 >> 0x20),
                            auVar38._0_4_ - (float)uVar37);
              pfVar19 = pfVar19 + 8;
            } while (uVar16 != 0);
            if (uVar14 == uVar20) goto LAB_00332398;
          }
          lVar15 = uVar14 - uVar20;
          pfVar19 = (float *)(lVar21 + uVar20 * 4);
          pfVar12 = pfVar12 + uVar20;
          do {
            lVar15 = lVar15 + -1;
            *pfVar12 = 1.0 - *pfVar19;
            pfVar19 = pfVar19 + 1;
            pfVar12 = pfVar12 + 1;
          } while (lVar15 != 0);
        }
LAB_00332398:
                    /* try { // try from 003323a0 to 003323ef has its CatchHandler @ 00333074 */
        FUN_0034439c(&local_98,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                     *(undefined4 *)(param_1 + 0x28));
      }
      goto LAB_003323a8;
    }
    if (*(long *)(lVar8 + 0x28) != local_80) goto LAB_003330bc;
                    /* try { // try from 00332e54 to 00332e5b has its CatchHandler @ 0033305c */
    FUN_002febf0(&local_98);
LAB_00332e5c:
    if (*(long *)(lVar8 + 0x28) != local_80) goto LAB_003330bc;
                    /* try { // try from 00332e6c to 00332e73 has its CatchHandler @ 0033304c */
    FUN_0031921c(&local_b0);
LAB_00332e74:
    if (*(long *)(lVar8 + 0x28) != local_80) goto LAB_003330bc;
                    /* try { // try from 00332e84 to 00332e87 has its CatchHandler @ 00332f6c */
    FUN_0031493c();
LAB_00332e88:
    if (*(long *)(lVar8 + 0x28) != local_80) goto LAB_003330bc;
                    /* try { // try from 00332e98 to 00332e9f has its CatchHandler @ 00332f3c */
    FUN_002febf0(&local_c8);
LAB_00332ea0:
    if (*(long *)(lVar8 + 0x28) != local_80) goto LAB_003330bc;
                    /* try { // try from 00332eb0 to 00332eb7 has its CatchHandler @ 00332f2c */
    FUN_002febf0(&local_e0);
LAB_00332eb8:
    if (*(long *)(lVar8 + 0x28) != local_80) goto LAB_003330bc;
                    /* try { // try from 00332ec8 to 00332ecf has its CatchHandler @ 00332f1c */
    FUN_002febf0(&local_f8);
LAB_00332ed0:
    if (*(long *)(lVar8 + 0x28) != local_80) goto LAB_003330bc;
                    /* try { // try from 00332ee0 to 00332ee7 has its CatchHandler @ 00332f0c */
    FUN_0031921c(&local_110);
  }
  if (*(long *)(lVar8 + 0x28) == local_80) {
                    /* try { // try from 00332ef8 to 00332eff has its CatchHandler @ 00332f08 */
    uVar33 = FUN_002febf0(&local_128);
                    /* catch() { ... } // from try @ 00332c8c with catch @ 00332f00 */
                    /* catch() { ... } // from try @ 00332bc8 with catch @ 00332f64 */
    if (local_f8 != (void *)0x0) {
      local_f0 = local_f8;
      free(local_f8);
    }
    if (local_e0 != (float *)0x0) {
      local_d8 = local_e0;
      free(local_e0);
    }
    if (local_c8 != (void *)0x0) {
      local_c0 = local_c8;
      free(local_c8);
    }
    if (local_b0 != (void *)0x0) {
      local_a8 = local_b0;
      free(local_b0);
    }
    if (local_98 != (float *)0x0) {
      local_90 = local_98;
      free(local_98);
    }
    if (*(long *)(lVar8 + 0x28) == local_80) {
                    /* WARNING: Subroutine does not return */
      FUN_00755eac(uVar33);
    }
  }
LAB_003330bc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003330c0  FUN_003330c0 =====

void FUN_003330c0(long param_1,long *param_2)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  undefined8 uVar4;
  long lVar5;
  size_t sVar6;
  long lVar7;
  ulong uVar8;
  void *local_60;
  void *local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pvVar2 = (void *)*param_2;
  sVar6 = param_2[1] - (long)pvVar2;
  lVar7 = (long)sVar6 >> 2;
  lVar5 = lVar7 + *(long *)(param_1 + 0x438);
  *(long *)(param_1 + 0x438) = lVar5;
  if ((*(byte *)(param_1 + 0x448) & 1) == 0) {
    if (1 < *(int *)(param_1 + 0x1a0)) {
      local_60 = (void *)0x0;
      local_58 = (void *)0x0;
      uVar8 = lVar7 * (ulong)(*(int *)(param_1 + 0x1a0) - 1);
      local_50 = (void *)0x0;
      *(ulong *)(param_1 + 0x438) = uVar8 + lVar5;
      if (uVar8 != 0) {
        if (uVar8 >> 0x3e != 0) {
          if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 003332bc to 003332c3 has its CatchHandler @ 003332c8 */
            uVar4 = FUN_002febf0(&local_60);
                    /* catch() { ... } // from try @ 00333170 with catch @ 003332c4 */
                    /* catch() { ... } // from try @ 00333140 with catch @ 003332c8
                       catch() { ... } // from try @ 003332bc with catch @ 003332c8 */
            if (local_60 != (void *)0x0) {
              local_58 = local_60;
              free(local_60);
            }
            if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
              FUN_00755eac(uVar4);
            }
          }
          goto LAB_003332f8;
        }
        sVar6 = uVar8 * 4;
                    /* try { // try from 00333140 to 00333147 has its CatchHandler @ 003332c8 */
        pvVar2 = (void *)FUN_00759c3c(sVar6);
        local_50 = (void *)((long)pvVar2 + uVar8 * 4);
        local_60 = pvVar2;
        memset(pvVar2,0,sVar6);
        local_58 = (void *)((long)pvVar2 + sVar6);
      }
                    /* try { // try from 00333170 to 00333177 has its CatchHandler @ 003332c4 */
      FUN_003450cc(*(undefined4 *)(param_1 + 0x19c),&local_60);
      pvVar2 = local_60;
      pvVar3 = *(void **)(param_1 + 0x420);
      sVar6 = (long)local_58 - (long)local_60;
      lVar5 = *(long *)(param_1 + 0x440);
      lVar7 = (long)sVar6 >> 2;
      if ((ulong)(*(long *)(param_1 + 0x428) - (long)pvVar3 >> 2) < (ulong)(lVar7 + lVar5)) {
        memcpy(pvVar3,(void *)((long)pvVar3 + *(long *)(param_1 + 0x438) * 4),
               (lVar5 - *(long *)(param_1 + 0x438)) * 4);
        lVar5 = *(long *)(param_1 + 0x438);
        pvVar3 = *(void **)(param_1 + 0x420);
        *(undefined8 *)(param_1 + 0x438) = 0;
        lVar5 = *(long *)(param_1 + 0x440) - lVar5;
        *(long *)(param_1 + 0x440) = lVar5;
      }
      memcpy((void *)((long)pvVar3 + lVar5 * 4),pvVar2,sVar6);
      *(long *)(param_1 + 0x440) = *(long *)(param_1 + 0x440) + lVar7;
      if (local_60 != (void *)0x0) {
        local_58 = local_60;
        free(local_60);
      }
      pvVar2 = (void *)*param_2;
      sVar6 = param_2[1] - (long)pvVar2;
      lVar7 = (long)sVar6 >> 2;
    }
    *(undefined1 *)(param_1 + 0x448) = 1;
  }
  lVar5 = *(long *)(param_1 + 0x440);
  pvVar3 = *(void **)(param_1 + 0x420);
  if ((ulong)(*(long *)(param_1 + 0x428) - (long)pvVar3 >> 2) < (ulong)(lVar7 + lVar5)) {
    memcpy(pvVar3,(void *)((long)pvVar3 + *(long *)(param_1 + 0x438) * 4),
           (lVar5 - *(long *)(param_1 + 0x438)) * 4);
    lVar5 = *(long *)(param_1 + 0x438);
    pvVar3 = *(void **)(param_1 + 0x420);
    *(undefined8 *)(param_1 + 0x438) = 0;
    lVar5 = *(long *)(param_1 + 0x440) - lVar5;
    *(long *)(param_1 + 0x440) = lVar5;
  }
  memcpy((void *)((long)pvVar3 + lVar5 * 4),pvVar2,sVar6);
  *(long *)(param_1 + 0x440) = *(long *)(param_1 + 0x440) + lVar7;
  FUN_00344c78(param_2,param_1 + 0x420,param_1 + 0x38,param_1 + 0x50);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_003332f8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003332fc  FUN_003332fc =====

void FUN_003332fc(undefined8 *param_1,undefined8 *param_2)

{
  size_t sVar1;
  void *pvVar2;
  void *__dest;
  undefined8 uVar3;
  undefined8 *__src;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  __src = (undefined8 *)*param_2;
  sVar1 = param_2[1] - (long)__src;
  if (sVar1 != 0) {
    if ((long)sVar1 < 0) {
                    /* try { // try from 003333a8 to 003333af has its CatchHandler @ 003333dc */
      FUN_002febf0(param_1);
      goto LAB_003333b0;
    }
                    /* try { // try from 00333330 to 00333337 has its CatchHandler @ 003333dc */
    pvVar2 = (void *)FUN_00759c3c(sVar1);
    *param_1 = pvVar2;
    param_1[1] = pvVar2;
    param_1[2] = (long)pvVar2 + sVar1;
    memcpy(pvVar2,__src,sVar1);
    param_1[1] = (long)pvVar2 + sVar1;
  }
  __src = param_1 + 3;
  *__src = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  pvVar2 = (void *)param_2[3];
  sVar1 = param_2[4] - (long)pvVar2;
  if (sVar1 != 0) {
    if ((long)sVar1 < 0) {
LAB_003333b0:
                    /* try { // try from 003333b0 to 003333b7 has its CatchHandler @ 003333b8 */
      uVar3 = FUN_002febf0(__src);
                    /* catch() { ... } // from try @ 00333370 with catch @ 003333b8
                       catch() { ... } // from try @ 003333b0 with catch @ 003333b8 */
      pvVar2 = (void *)*__src;
      if (pvVar2 != (void *)0x0) {
        param_1[4] = pvVar2;
        free(pvVar2);
      }
      pvVar2 = (void *)*param_1;
      if (pvVar2 != (void *)0x0) {
        param_1[1] = pvVar2;
        free(pvVar2);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00755eac(uVar3);
    }
                    /* try { // try from 00333370 to 00333377 has its CatchHandler @ 003333b8 */
    __dest = (void *)FUN_00759c3c(sVar1);
    param_1[3] = __dest;
    param_1[4] = __dest;
    param_1[5] = (long)__dest + sVar1;
    memcpy(__dest,pvVar2,sVar1);
    param_1[4] = (long)__dest + sVar1;
  }
  return;
}


// ===== 003333fc  FUN_003333fc =====

void FUN_003333fc(long param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x40);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x48) = pvVar1;
    free(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + 0x28);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x30) = pvVar1;
    free(pvVar1);
    return;
  }
  return;
}


// ===== 00333440  FUN_00333440 =====

void FUN_00333440(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[3];
  if (pvVar1 != (void *)0x0) {
    param_1[4] = pvVar1;
    free(pvVar1);
  }
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    param_1[1] = pvVar1;
    free(pvVar1);
    return;
  }
  return;
}


// ===== 00333484  FUN_00333484 =====

void FUN_00333484(undefined8 *param_1,ulong param_2,undefined4 *param_3)

{
  void *__dest;
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  void *__src;
  long lVar10;
  undefined4 uVar11;
  undefined4 *puVar5;
  
  puVar2 = (undefined4 *)param_1[1];
  if (param_2 <= (ulong)(param_1[2] - (long)puVar2 >> 2)) {
    puVar3 = puVar2;
    if (param_2 != 0) {
      uVar11 = *param_3;
      uVar7 = param_2 - 1 & 0x3fffffffffffffff;
      puVar3 = puVar2 + param_2;
      if (6 < uVar7) {
        uVar7 = uVar7 + 1;
        uVar6 = uVar7 & 0x7ffffffffffffff8;
        puVar1 = (undefined8 *)(puVar2 + 4);
        uVar8 = uVar6;
        do {
          uVar8 = uVar8 - 8;
          puVar1[-1] = CONCAT44(uVar11,uVar11);
          puVar1[-2] = CONCAT44(uVar11,uVar11);
          puVar1[1] = CONCAT44(uVar11,uVar11);
          *puVar1 = CONCAT44(uVar11,uVar11);
          puVar1 = puVar1 + 4;
        } while (uVar8 != 0);
        puVar2 = puVar2 + uVar6;
        if (uVar7 == uVar6) goto LAB_00333574;
      }
      do {
        puVar4 = puVar2 + 1;
        *puVar2 = uVar11;
        puVar2 = puVar4;
      } while (puVar4 != puVar3);
    }
LAB_00333574:
    param_1[1] = puVar3;
    return;
  }
  __src = (void *)*param_1;
  lVar10 = (long)puVar2 - (long)__src >> 2;
  uVar7 = lVar10 + param_2;
  if (uVar7 >> 0x3e != 0) {
    FUN_002febf0(param_1);
LAB_00333638:
                    /* WARNING: Subroutine does not return */
    FUN_002f9ee0();
  }
  uVar6 = param_1[2] - (long)__src;
  uVar8 = (long)uVar6 >> 1;
  if (uVar8 <= uVar7) {
    uVar8 = uVar7;
  }
  if (0x7ffffffffffffffb < uVar6) {
    uVar8 = 0x3fffffffffffffff;
  }
  if (uVar8 == 0) {
    __dest = (void *)0x0;
  }
  else {
    if (uVar8 >> 0x3e != 0) goto LAB_00333638;
    __dest = (void *)FUN_00759c3c(uVar8 << 2);
  }
  puVar3 = (undefined4 *)((long)__dest + lVar10 * 4);
  uVar11 = *param_3;
  uVar7 = param_2 - 1 & 0x3fffffffffffffff;
  puVar4 = puVar3;
  if (6 < uVar7) {
    uVar7 = uVar7 + 1;
    uVar9 = uVar7 & 0x7ffffffffffffff8;
    puVar1 = (undefined8 *)(puVar3 + 4);
    uVar6 = uVar9;
    do {
      uVar6 = uVar6 - 8;
      puVar1[-1] = CONCAT44(uVar11,uVar11);
      puVar1[-2] = CONCAT44(uVar11,uVar11);
      puVar1[1] = CONCAT44(uVar11,uVar11);
      *puVar1 = CONCAT44(uVar11,uVar11);
      puVar1 = puVar1 + 4;
    } while (uVar6 != 0);
    puVar4 = puVar3 + uVar9;
    if (uVar7 == uVar9) goto LAB_003335dc;
  }
  do {
    puVar5 = puVar4 + 1;
    *puVar4 = uVar11;
    puVar4 = puVar5;
  } while (puVar5 != puVar3 + param_2);
LAB_003335dc:
  memcpy(__dest,__src,(long)puVar2 - (long)__src);
  *param_1 = __dest;
  param_1[1] = puVar3 + param_2;
  param_1[2] = (void *)((long)__dest + uVar8 * 4);
  if (__src == (void *)0x0) {
    return;
  }
  free(__src);
  return;
}


// ===== 0033363c  FUN_0033363c =====

void * FUN_0033363c(undefined8 *param_1,void *param_2,void *param_3,long param_4,long param_5)

{
  ulong uVar1;
  undefined4 *puVar2;
  void *__dest;
  void *__dest_00;
  undefined4 *__dest_01;
  undefined8 *puVar3;
  undefined4 *puVar4;
  void *__dest_02;
  size_t sVar5;
  ulong uVar6;
  ulong uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  undefined8 *puVar13;
  void *pvVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined4 *puVar12;
  
  if (param_5 < 1) {
    return param_2;
  }
  __dest_01 = (undefined4 *)param_1[1];
  if (param_1[2] - (long)__dest_01 >> 2 < param_5) {
    pvVar14 = (void *)*param_1;
    uVar1 = param_5 + ((long)__dest_01 - (long)pvVar14 >> 2);
    if (uVar1 >> 0x3e == 0) {
      uVar6 = param_1[2] - (long)pvVar14;
      uVar7 = (long)uVar6 >> 1;
      if (uVar7 <= uVar1) {
        uVar7 = uVar1;
      }
      if (0x7ffffffffffffffb < uVar6) {
        uVar7 = 0x3fffffffffffffff;
      }
      if (uVar7 == 0) {
        __dest_02 = (void *)0x0;
      }
      else {
        if (uVar7 >> 0x3e != 0) goto LAB_003338b4;
        __dest_02 = (void *)FUN_00759c3c(uVar7 << 2);
      }
      __dest = (void *)((long)__dest_02 + ((long)param_2 - (long)pvVar14 >> 2) * 4);
      memcpy(__dest,param_3,param_5 * 4);
      __dest_00 = (void *)((long)__dest + param_5 * 4);
      memcpy(__dest_00,param_2,(long)__dest_01 - (long)param_2);
      param_1[1] = param_2;
      memcpy(__dest_02,pvVar14,(long)param_2 - (long)pvVar14);
      *param_1 = __dest_02;
      param_1[1] = (long)__dest_00 + ((long)__dest_01 - (long)param_2);
      param_1[2] = (void *)((long)__dest_02 + uVar7 * 4);
      if (pvVar14 == (void *)0x0) {
        return __dest;
      }
      free(pvVar14);
      return __dest;
    }
    FUN_002febf0(param_1);
LAB_003338b4:
                    /* WARNING: Subroutine does not return */
    FUN_002f9ee0();
  }
  lVar15 = (long)__dest_01 - (long)param_2 >> 2;
  if (lVar15 < param_5) {
    pvVar14 = (void *)((long)param_3 + ((long)__dest_01 - (long)param_2));
    sVar5 = param_4 - (long)pvVar14;
    if (sVar5 != 0) {
      memmove(__dest_01,pvVar14,sVar5);
    }
    puVar2 = (undefined4 *)((long)__dest_01 + sVar5);
    param_1[1] = puVar2;
    if (lVar15 < 1) {
      return param_2;
    }
    puVar11 = puVar2 + -param_5;
  }
  else {
    pvVar14 = (void *)((long)param_3 + param_5 * 4);
    puVar11 = __dest_01 + -param_5;
    puVar2 = __dest_01;
  }
  puVar4 = (undefined4 *)((long)param_2 + param_5 * 4);
  puVar9 = puVar2;
  if (puVar11 < __dest_01) {
    puVar9 = __dest_01;
    if (__dest_01 <= puVar11 + 1) {
      puVar9 = puVar11 + 1;
    }
    uVar1 = (long)puVar9 + param_5 * 4 + ~(ulong)puVar2;
    puVar8 = puVar2;
    if ((0x1b < uVar1) && (0x1f < (ulong)(param_5 * 4))) {
      puVar13 = (undefined8 *)(puVar2 + 4);
      uVar1 = (uVar1 >> 2) + 1;
      uVar6 = uVar1 & 0x7ffffffffffffff8;
      puVar10 = (undefined8 *)(puVar11 + 4);
      uVar7 = uVar6;
      do {
        puVar3 = puVar10 + -1;
        uVar16 = puVar10[-2];
        uVar18 = puVar10[1];
        uVar17 = *puVar10;
        uVar7 = uVar7 - 8;
        puVar10 = puVar10 + 4;
        puVar13[-1] = *puVar3;
        puVar13[-2] = uVar16;
        puVar13[1] = uVar18;
        *puVar13 = uVar17;
        puVar13 = puVar13 + 4;
      } while (uVar7 != 0);
      puVar9 = puVar2 + uVar6;
      puVar8 = puVar2 + uVar6;
      puVar11 = puVar11 + uVar6;
      if (uVar1 == uVar6) goto LAB_0033385c;
    }
    do {
      puVar12 = puVar11 + 1;
      *puVar8 = *puVar11;
      puVar9 = puVar8 + 1;
      puVar8 = puVar8 + 1;
      puVar11 = puVar12;
    } while (puVar12 < __dest_01);
  }
LAB_0033385c:
  param_1[1] = puVar9;
  if (puVar2 != puVar4) {
    sVar5 = (long)puVar2 - (long)puVar4;
    memmove((void *)((long)puVar2 - sVar5),param_2,sVar5);
  }
  if ((long)pvVar14 - (long)param_3 != 0) {
    memmove(param_2,param_3,(long)pvVar14 - (long)param_3);
  }
  return param_2;
}


// ===== 003338b8  FUN_003338b8 =====

undefined4 *
FUN_003338b8(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3,long param_4,long param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *__dest;
  undefined8 *puVar3;
  void *__dest_00;
  ulong uVar4;
  undefined4 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  void *__src;
  long lVar14;
  size_t sVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  if (param_5 < 1) {
    return param_2;
  }
  __dest = (undefined4 *)param_1[1];
  if (param_5 <= param_1[2] - (long)__dest >> 2) {
    lVar14 = (long)__dest - (long)param_2 >> 2;
    if (lVar14 < param_5) {
      puVar1 = (undefined4 *)((long)param_3 + ((long)__dest - (long)param_2));
      sVar15 = param_4 - (long)puVar1;
      if (sVar15 != 0) {
        memmove(__dest,puVar1,sVar15);
      }
      puVar2 = (undefined4 *)((long)__dest + sVar15);
      param_1[1] = puVar2;
      if (lVar14 < 1) {
        return param_2;
      }
      puVar5 = puVar2 + -param_5;
    }
    else {
      puVar1 = param_3 + param_5;
      puVar5 = __dest + -param_5;
      puVar2 = __dest;
    }
    puVar9 = puVar2;
    if (puVar5 < __dest) {
      puVar9 = __dest;
      if (__dest <= puVar5 + 1) {
        puVar9 = puVar5 + 1;
      }
      uVar7 = (long)puVar9 + param_5 * 4 + ~(ulong)puVar2;
      puVar8 = puVar2;
      if ((0x1b < uVar7) && (0x1f < (ulong)(param_5 * 4))) {
        puVar13 = (undefined8 *)(puVar2 + 4);
        uVar7 = (uVar7 >> 2) + 1;
        uVar4 = uVar7 & 0x7ffffffffffffff8;
        puVar11 = (undefined8 *)(puVar5 + 4);
        uVar6 = uVar4;
        do {
          puVar3 = puVar11 + -1;
          uVar16 = puVar11[-2];
          uVar18 = puVar11[1];
          uVar17 = *puVar11;
          uVar6 = uVar6 - 8;
          puVar11 = puVar11 + 4;
          puVar13[-1] = *puVar3;
          puVar13[-2] = uVar16;
          puVar13[1] = uVar18;
          *puVar13 = uVar17;
          puVar13 = puVar13 + 4;
        } while (uVar6 != 0);
        puVar9 = puVar2 + uVar4;
        puVar8 = puVar2 + uVar4;
        puVar5 = puVar5 + uVar4;
        if (uVar7 == uVar4) goto LAB_00333b40;
      }
      do {
        puVar12 = puVar5 + 1;
        *puVar8 = *puVar5;
        puVar9 = puVar8 + 1;
        puVar8 = puVar8 + 1;
        puVar5 = puVar12;
      } while (puVar12 < __dest);
    }
LAB_00333b40:
    param_1[1] = puVar9;
    if (puVar2 != param_2 + param_5) {
      sVar15 = (long)puVar2 - (long)(param_2 + param_5);
      memmove((void *)((long)puVar2 - sVar15),param_2,sVar15);
    }
    if ((long)puVar1 - (long)param_3 == 0) {
      return param_2;
    }
    memmove(param_2,param_3,(long)puVar1 - (long)param_3);
    return param_2;
  }
  __src = (void *)*param_1;
  uVar7 = param_5 + ((long)__dest - (long)__src >> 2);
  if (uVar7 >> 0x3e != 0) {
    FUN_002febf0(param_1);
LAB_00333b98:
                    /* WARNING: Subroutine does not return */
    FUN_002f9ee0();
  }
  uVar4 = param_1[2] - (long)__src;
  uVar6 = (long)uVar4 >> 1;
  if (uVar6 <= uVar7) {
    uVar6 = uVar7;
  }
  if (0x7ffffffffffffffb < uVar4) {
    uVar6 = 0x3fffffffffffffff;
  }
  if (uVar6 == 0) {
    __dest_00 = (void *)0x0;
  }
  else {
    if (uVar6 >> 0x3e != 0) goto LAB_00333b98;
    __dest_00 = (void *)FUN_00759c3c(uVar6 << 2);
  }
  sVar15 = (long)param_2 - (long)__src;
  uVar7 = param_5 - 1U & 0x3fffffffffffffff;
  puVar2 = (undefined4 *)((long)__dest_00 + ((long)sVar15 >> 2) * 4);
  puVar1 = puVar2 + param_5;
  puVar5 = puVar2;
  if ((6 < uVar7) && (0x1f < (long)__dest_00 + (sVar15 - (long)param_3))) {
    uVar7 = uVar7 + 1;
    puVar13 = (undefined8 *)(param_3 + 4);
    puVar11 = (undefined8 *)(puVar2 + 4);
    uVar10 = uVar7 & 0x7ffffffffffffff8;
    uVar4 = uVar10;
    do {
      puVar3 = puVar13 + -1;
      uVar16 = puVar13[-2];
      uVar18 = puVar13[1];
      uVar17 = *puVar13;
      uVar4 = uVar4 - 8;
      puVar13 = puVar13 + 4;
      puVar11[-1] = *puVar3;
      puVar11[-2] = uVar16;
      puVar11[1] = uVar18;
      *puVar11 = uVar17;
      puVar11 = puVar11 + 4;
    } while (uVar4 != 0);
    puVar5 = puVar2 + uVar10;
    param_3 = param_3 + uVar10;
    if (uVar7 == uVar10) goto LAB_00333a88;
  }
  do {
    puVar9 = puVar5 + 1;
    *puVar5 = *param_3;
    puVar5 = puVar9;
    param_3 = param_3 + 1;
  } while (puVar9 != puVar1);
LAB_00333a88:
  memcpy(puVar1,param_2,(long)__dest - (long)param_2);
  param_1[1] = param_2;
  memcpy(__dest_00,__src,sVar15);
  *param_1 = __dest_00;
  param_1[1] = (long)puVar1 + ((long)__dest - (long)param_2);
  param_1[2] = (void *)((long)__dest_00 + uVar6 * 4);
  if (__src != (void *)0x0) {
    free(__src);
  }
  return puVar2;
}


// ===== 00333b9c  FUN_00333b9c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00333b9c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = _UNK_002004a8;
  uVar1 = _DAT_002004a0;
  param_1[10] = 0;
  uVar6 = _UNK_00200678;
  uVar5 = _DAT_00200670;
  uVar4 = _UNK_002004b8;
  uVar3 = _DAT_002004b0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar6;
  param_1[2] = uVar5;
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  FUN_00333c50(param_1 + 0xb);
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
                    /* try { // try from 00333bf4 to 00333bfb has its CatchHandler @ 00333c3c */
  FUN_00333c50(param_1 + 0x16);
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
                    /* try { // try from 00333c04 to 00333c0b has its CatchHandler @ 00333c20 */
  FUN_00333c50(param_1 + 0x21);
  param_1[0x29] = param_2;
  return;
}


// ===== 00333c50  FUN_00333c50 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00333c50(undefined4 *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  void *__ptr;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  void *pvVar9;
  void *local_b0;
  ulong uStack_a8;
  void *local_a0;
  long local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 auStack_58 [2];
  long local_48;
  
  auStack_58[0] = _UNK_002011ac;
  uStack_60 = _DAT_002011a4;
  uStack_68 = _UNK_0020119c;
  local_70 = _DAT_00201194;
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  *param_1 = 0;
  param_1[10] = 0x3f800000;
  plVar8 = (long *)(param_1 + 2);
  *(undefined8 *)(param_1 + 4) = 0;
  *plVar8 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  uStack_a8 = 0;
  local_b0 = (void *)0x0;
  local_98 = 0;
  local_a0 = (void *)0x0;
  local_90 = 0x3f800000;
                    /* try { // try from 00333cac to 00333cf3 has its CatchHandler @ 00333e2c */
  FUN_00315d54(&local_b0,&local_70,&local_70);
  FUN_00315d54(&local_b0,(ulong)&local_70 | 8,(ulong)&local_70 | 8);
  FUN_00315d54(&local_b0,&uStack_60,&uStack_60);
  FUN_00315d54(&local_b0,auStack_58,auStack_58);
  local_88 = 0;
  local_80 = 0;
  if (*(long *)(param_1 + 8) != 0) {
    puVar3 = (undefined8 *)*(void **)(param_1 + 6);
    while (puVar3 != (undefined8 *)0x0) {
      pvVar9 = (void *)*puVar3;
      free(puVar3);
      puVar3 = (undefined8 *)pvVar9;
    }
    lVar5 = *(long *)(param_1 + 4);
    *(undefined8 *)(param_1 + 6) = 0;
    if (lVar5 != 0) {
      lVar6 = 0;
      do {
        *(undefined8 *)(*plVar8 + lVar6 * 8) = 0;
        lVar6 = lVar6 + 1;
      } while (lVar5 != lVar6);
    }
    *(undefined8 *)(param_1 + 8) = 0;
  }
  pvVar9 = local_b0;
  __ptr = (void *)*plVar8;
  local_b0 = (void *)0x0;
  *plVar8 = (long)pvVar9;
  if (__ptr != (void *)0x0) {
    free(__ptr);
  }
  uVar4 = uStack_a8;
  uStack_a8 = 0;
  *(void **)(param_1 + 6) = local_a0;
  *(ulong *)(param_1 + 4) = uVar4;
  *(long *)(param_1 + 8) = local_98;
  param_1[10] = local_90;
  if (local_98 == 0) {
    *(undefined8 *)(param_1 + 0xc) = local_88;
    param_1[0xe] = local_80;
    local_98 = 0;
    puVar3 = (undefined8 *)local_a0;
    while (puVar3 != (undefined8 *)0x0) {
      pvVar9 = (void *)*puVar3;
      free(puVar3);
      puVar3 = (undefined8 *)pvVar9;
    }
  }
  else {
    uVar7 = *(ulong *)((long)local_a0 + 8);
    if ((uVar4 & uVar4 - 1) == 0) {
      uVar7 = uVar7 & uVar4 - 1;
    }
    else if (uVar4 <= uVar7) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar7 / uVar4;
      }
      uVar7 = uVar7 - uVar1 * uVar4;
    }
    *(undefined4 **)(*(long *)(param_1 + 2) + uVar7 * 8) = param_1 + 6;
    local_a0 = (void *)0x0;
    local_98 = 0;
    *(undefined8 *)(param_1 + 0xc) = local_88;
    param_1[0xe] = local_80;
  }
  pvVar9 = local_b0;
  local_b0 = (void *)0x0;
  if (pvVar9 != (void *)0x0) {
    free(pvVar9);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00333e5c  FUN_00333e5c =====

void FUN_00333e5c(long param_1)

{
  undefined8 *__ptr;
  void *pvVar1;
  
  __ptr = (undefined8 *)*(void **)(param_1 + 0x18);
  while (__ptr != (undefined8 *)0x0) {
    pvVar1 = (void *)*__ptr;
    free(__ptr);
    __ptr = (undefined8 *)pvVar1;
  }
  pvVar1 = *(void **)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  free(pvVar1);
  return;
}


// ===== 00333ea8  FUN_00333ea8 =====

void FUN_00333ea8(ulong *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  double dVar7;
  double dVar8;
  undefined4 local_48;
  undefined1 uStack_41;
  undefined4 *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  dVar8 = *(double *)(param_2 + 0x10);
  dVar7 = *(double *)(param_2 + 8) + (double)param_1[6];
  uVar4 = param_1[7] + 1;
  param_1[7] = uVar4;
  param_1[6] = (ulong)dVar7;
  if (0.0 <= dVar8) {
    iVar5 = (int)param_1[0x29];
    if (dVar8 == 0.5 || dVar8 < 0.5 != NAN(dVar8)) {
      *(int *)((long)param_1 + 0x8c) = *(int *)((long)param_1 + 0x8c) + iVar5;
      uVar6 = *param_1;
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar4 / uVar6;
      }
      uVar1 = uVar1 * uVar6;
    }
    else {
      *(int *)(param_1 + 0x11) = (int)param_1[0x11] + iVar5;
      uVar6 = *param_1;
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar4 / uVar6;
      }
      uVar1 = uVar1 * uVar6;
    }
  }
  else {
    iVar5 = (int)param_1[0x29];
    *(int *)(param_1 + 0x12) = (int)param_1[0x12] + iVar5;
    uVar6 = *param_1;
    uVar1 = 0;
    if (uVar6 != 0) {
      uVar1 = uVar4 / uVar6;
    }
    uVar1 = uVar1 * uVar6;
  }
  if (uVar4 == uVar1) {
    param_1[6] = 0;
    uVar4 = (ulong)(dVar7 / (double)uVar6);
    if (param_1[3] < uVar4) {
      if (param_1[4] < uVar4) {
        if (param_1[5] < uVar4) {
          local_48 = 3;
        }
        else {
          local_48 = 2;
        }
      }
      else {
        local_48 = 1;
      }
    }
    else {
      local_48 = 0;
    }
    local_40 = &local_48;
    lVar3 = FUN_0033431c(param_1 + 0xc,&local_48,PTR_DAT_007a10e8,&local_40,&uStack_41);
    *(int *)(lVar3 + 0x14) = *(int *)(lVar3 + 0x14) + iVar5 * (int)uVar6;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00334008  FUN_00334008 =====

void FUN_00334008(ulong *param_1,ulong param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  double *pdVar8;
  double dVar9;
  ulong uVar10;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 uStack_51;
  undefined4 *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  dVar9 = (double)FUN_00344034(param_1[0x1e],0x3f000000,0xf);
  pdVar8 = (double *)(param_1 + 0x13);
  *pdVar8 = dVar9;
  uVar10 = FUN_00344034(param_1[0x1f],0x3f000000,0xf);
  param_1[0x14] = uVar10;
  FUN_00333ea8(param_1,pdVar8);
  uVar6 = *param_1;
  dVar9 = (double)param_1[8];
  uVar10 = param_1[9] + 1;
  uVar2 = 0;
  if (uVar6 != 0) {
    uVar2 = uVar10 / uVar6;
  }
  param_1[9] = uVar10;
  param_1[8] = (ulong)(*pdVar8 + dVar9);
  if (uVar10 != uVar2 * uVar6) goto LAB_003340f4;
  param_1[8] = 0;
  if ((ulong)(long)((*pdVar8 + dVar9) / (double)uVar6) < param_1[1]) {
    if (param_1[2] <= param_1[10]) goto LAB_003340f4;
    iVar7 = (int)param_1[0xb];
    param_1[10] = param_1[10] + 1;
    if (iVar7 == 0) goto LAB_003340f4;
  }
  else {
    iVar7 = (int)param_1[0xb];
    param_1[10] = 0;
  }
  *(int *)(param_1 + 0xb) = iVar7 + (int)param_1[0x29] * (int)uVar6;
LAB_003340f4:
  if ((param_2 & 1) != 0) {
    local_58 = 0;
    *(int *)(param_1 + 0x16) = (int)param_1[0xb];
    puVar4 = PTR_DAT_007a10e8;
    local_50 = &local_58;
    lVar5 = FUN_00315718(param_1 + 0xc,&local_58,PTR_DAT_007a10e8,&local_50,&local_5c);
    uVar1 = *(undefined4 *)(lVar5 + 0x14);
    local_5c = 0;
    local_50 = &local_5c;
    lVar5 = FUN_00315718(param_1 + 0x17,&local_5c,puVar4,&local_50,&uStack_51);
    *(undefined4 *)(lVar5 + 0x14) = uVar1;
    local_58 = 1;
    local_50 = &local_58;
    lVar5 = FUN_00315718(param_1 + 0xc,&local_58,puVar4,&local_50,&local_5c);
    local_5c = 1;
    uVar1 = *(undefined4 *)(lVar5 + 0x14);
    local_50 = &local_5c;
    lVar5 = FUN_00315718(param_1 + 0x17,&local_5c,puVar4,&local_50,&uStack_51);
    *(undefined4 *)(lVar5 + 0x14) = uVar1;
    local_58 = 2;
    local_50 = &local_58;
    lVar5 = FUN_00315718(param_1 + 0xc,&local_58,puVar4,&local_50,&local_5c);
    local_5c = 2;
    uVar1 = *(undefined4 *)(lVar5 + 0x14);
    local_50 = &local_5c;
    lVar5 = FUN_00315718(param_1 + 0x17,&local_5c,puVar4,&local_50,&uStack_51);
    *(undefined4 *)(lVar5 + 0x14) = uVar1;
    local_58 = 3;
    local_50 = &local_58;
    lVar5 = FUN_00315718(param_1 + 0xc,&local_58,puVar4,&local_50,&local_5c);
    local_5c = 3;
    uVar1 = *(undefined4 *)(lVar5 + 0x14);
    local_50 = &local_5c;
    lVar5 = FUN_00315718(param_1 + 0x17,&local_5c,puVar4,&local_50,&uStack_51);
    *(undefined4 *)(lVar5 + 0x14) = uVar1;
    param_1[0x1c] = param_1[0x11];
    *(int *)(param_1 + 0x1d) = (int)param_1[0x12];
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00334284  FUN_00334284 =====

void FUN_00334284(long param_1)

{
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  return;
}


// ===== 00334290  FUN_00334290 =====

void FUN_00334290(long param_1)

{
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  return;
}


// ===== 0033429c  FUN_0033429c =====

long FUN_0033429c(long param_1)

{
  return param_1 + 0x98;
}


// ===== 003342a4  FUN_003342a4 =====

long FUN_003342a4(long param_1)

{
  return param_1 + 0xf0;
}


// ===== 003342ac  FUN_003342ac =====

void FUN_003342ac(long param_1)

{
  *(double *)(param_1 + 0xf8) = *(double *)(param_1 + 0xa0) + *(double *)(param_1 + 0xf8);
  *(double *)(param_1 + 0xf0) = *(double *)(param_1 + 0x98) + *(double *)(param_1 + 0xf0);
  *(double *)(param_1 + 0x100) = *(double *)(param_1 + 0xa8) + *(double *)(param_1 + 0x100);
  return;
}


// ===== 003342d0  FUN_003342d0 =====

void FUN_003342d0(undefined8 *param_1)

{
  undefined8 *__ptr;
  void *pvVar1;
  
  __ptr = (undefined8 *)param_1[2];
  while (__ptr != (undefined8 *)0x0) {
    pvVar1 = (void *)*__ptr;
    free(__ptr);
    __ptr = (undefined8 *)pvVar1;
  }
  pvVar1 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  free(pvVar1);
  return;
}


// ===== 0033431c  FUN_0033431c =====

undefined1  [16] FUN_0033431c(long *param_1,int *param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined4 *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong unaff_x24;
  undefined2 uVar10;
  undefined8 uVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  uVar8 = param_1[1];
  iVar1 = *param_2;
  uVar9 = (ulong)iVar1;
  if (uVar8 != 0) {
    uVar11 = NEON_cnt(uVar8,1);
    uVar10 = NEON_uaddlv(uVar11,1);
    uVar5 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
    if (uVar5 < 2) {
      unaff_x24 = uVar8 - 1 & uVar9;
    }
    else {
      unaff_x24 = uVar9;
      if (uVar8 <= uVar9) {
        uVar6 = 0;
        if (uVar8 != 0) {
          uVar6 = uVar9 / uVar8;
        }
        unaff_x24 = uVar9 - uVar6 * uVar8;
      }
    }
    plVar3 = *(long **)(*param_1 + unaff_x24 * 8);
    if ((plVar3 != (long *)0x0) && (plVar3 = (long *)*plVar3, plVar3 != (long *)0x0)) {
      if (uVar5 < 2) {
        do {
          if (plVar3[1] == uVar9) {
            if ((int)plVar3[2] == iVar1) {
LAB_00334410:
              auVar13._8_8_ = 0;
              auVar13._0_8_ = plVar3;
              return auVar13;
            }
          }
          else if ((plVar3[1] & uVar8 - 1) != unaff_x24) break;
          plVar3 = (long *)*plVar3;
        } while (plVar3 != (long *)0x0);
      }
      else {
        do {
          uVar5 = plVar3[1];
          if (uVar5 == uVar9) {
            if ((int)plVar3[2] == iVar1) goto LAB_00334410;
          }
          else {
            if (uVar8 <= uVar5) {
              uVar6 = 0;
              if (uVar8 != 0) {
                uVar6 = uVar5 / uVar8;
              }
              uVar5 = uVar5 - uVar6 * uVar8;
            }
            if (uVar5 != unaff_x24) break;
          }
          plVar3 = (long *)*plVar3;
        } while (plVar3 != (long *)0x0);
      }
    }
  }
  auVar14._0_8_ = (long *)FUN_00759c3c(0x18);
  lVar2 = param_1[3];
  puVar4 = (undefined4 *)*param_4;
  fVar12 = *(float *)(param_1 + 4);
  *auVar14._0_8_ = 0;
  auVar14._0_8_[1] = uVar9;
  *(undefined4 *)(auVar14._0_8_ + 2) = *puVar4;
  *(undefined4 *)((long)auVar14._0_8_ + 0x14) = 0;
  if ((uVar8 == 0) || (fVar12 * (float)uVar8 < (float)(lVar2 + 1))) {
    if (uVar8 < 3) {
      uVar5 = 1;
    }
    else {
      uVar5 = (ulong)((uVar8 & uVar8 - 1) != 0);
    }
    uVar5 = uVar5 | uVar8 << 1;
    uVar6 = (ulong)((float)(lVar2 + 1) / fVar12);
    if (uVar5 <= uVar6) {
      uVar5 = uVar6;
    }
    if (uVar5 - 1 == 0) {
      uVar5 = 2;
    }
    else if ((uVar5 & uVar5 - 1) != 0) {
                    /* try { // try from 003344d0 to 00334553 has its CatchHandler @ 00334630 */
      uVar5 = FUN_00711ce0(uVar5);
      uVar8 = param_1[1];
    }
    if (uVar8 < uVar5) {
LAB_003344e8:
      FUN_00315a40(param_1,uVar5);
    }
    else if (uVar5 < uVar8) {
      uVar6 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar8 < 3) {
LAB_00334550:
        uVar6 = FUN_00711ce0();
      }
      else {
        uVar11 = NEON_cnt(uVar8,1);
        uVar10 = NEON_uaddlv(uVar11,1);
        if (1 < (CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff)) goto LAB_00334550;
        if (1 < uVar6) {
          uVar6 = 1L << (-LZCOUNT(uVar6 - 1) & 0x3fU);
        }
      }
      if (uVar5 <= uVar6) {
        uVar5 = uVar6;
      }
      if (uVar5 < uVar8) goto LAB_003344e8;
    }
    uVar8 = param_1[1];
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_x24 = uVar8 - 1 & uVar9;
      lVar2 = *param_1;
      plVar3 = *(long **)(lVar2 + unaff_x24 * 8);
      goto joined_r0x003345cc;
    }
    if (uVar9 < uVar8) {
      lVar2 = *param_1;
      plVar3 = *(long **)(lVar2 + uVar9 * 8);
      unaff_x24 = uVar9;
      goto joined_r0x003345cc;
    }
    uVar5 = 0;
    if (uVar8 != 0) {
      uVar5 = uVar9 / uVar8;
    }
    unaff_x24 = uVar9 - uVar5 * uVar8;
    lVar2 = *param_1;
    plVar3 = *(long **)(lVar2 + unaff_x24 * 8);
    if (plVar3 == (long *)0x0) goto LAB_00334584;
LAB_00334478:
    *auVar14._0_8_ = *plVar3;
  }
  else {
    lVar2 = *param_1;
    plVar3 = *(long **)(lVar2 + unaff_x24 * 8);
joined_r0x003345cc:
    if (plVar3 != (long *)0x0) goto LAB_00334478;
LAB_00334584:
    plVar3 = param_1 + 2;
    lVar7 = *plVar3;
    *plVar3 = (long)auVar14._0_8_;
    *auVar14._0_8_ = lVar7;
    *(long **)(lVar2 + unaff_x24 * 8) = plVar3;
    if (*auVar14._0_8_ == 0) goto LAB_00334608;
    uVar9 = *(ulong *)(*auVar14._0_8_ + 8);
    if ((uVar8 & uVar8 - 1) == 0) {
      uVar9 = uVar9 & uVar8 - 1;
    }
    else if (uVar8 <= uVar9) {
      uVar5 = 0;
      if (uVar8 != 0) {
        uVar5 = uVar9 / uVar8;
      }
      uVar9 = uVar9 - uVar5 * uVar8;
    }
    plVar3 = (long *)(*param_1 + uVar9 * 8);
  }
  *plVar3 = (long)auVar14._0_8_;
LAB_00334608:
  param_1[3] = param_1[3] + 1;
  auVar14._8_8_ = 1;
  return auVar14;
}


// ===== 00334644  FUN_00334644 =====

void FUN_00334644(long param_1,long param_2,long *param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  void *pvVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *unaff_x21;
  size_t sVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  double dVar13;
  long lVar14;
  long lVar15;
  undefined8 local_80;
  long *plStack_78;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  FUN_0036c290(param_1);
  lVar14 = param_3[3];
  lVar11 = param_3[2];
  lVar5 = param_3[5];
  lVar10 = param_3[4];
  lVar15 = *param_3;
  *(long *)(param_1 + 0x18) = param_3[1];
  *(long *)(param_1 + 0x10) = lVar15;
  *(long *)(param_1 + 0x28) = lVar14;
  *(long *)(param_1 + 0x20) = lVar11;
  *(long *)(param_1 + 0x38) = lVar5;
  *(long *)(param_1 + 0x30) = lVar10;
                    /* try { // try from 0033469c to 003346a7 has its CatchHandler @ 00334b48 */
  FUN_00335234(param_1 + 0x40,param_3 + 6);
  uVar4 = *(undefined8 *)((long)param_3 + 0x6c);
  lVar5 = param_3[0xd];
  lVar10 = param_3[0xc];
  *(undefined8 *)(param_1 + 0x84) = *(undefined8 *)((long)param_3 + 0x74);
  *(undefined8 *)(param_1 + 0x7c) = uVar4;
  *(long *)(param_1 + 0x78) = lVar5;
  *(long *)(param_1 + 0x70) = lVar10;
  uVar12 = *(ulong *)(param_2 + 0x20);
  plVar7 = (long *)(param_1 + 0xa0);
  *plVar7 = 0;
  *(undefined1 *)(param_1 + 0x98) = 0;
  *(ulong *)(param_1 + 0x90) = uVar12;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  if (*(int *)(param_1 + 0x78) < 0) {
    if (*(long *)(lVar2 + 0x28) != local_68) goto LAB_00334bec;
                    /* try { // try from 00334aa4 to 00334aab has its CatchHandler @ 00334c00 */
    FUN_002febf0(plVar7);
LAB_00334aac:
    if (*(long *)(lVar2 + 0x28) != local_68) goto LAB_00334bec;
                    /* try { // try from 00334ac0 to 00334ac7 has its CatchHandler @ 00334bf0 */
    FUN_0031921c(param_1 + 0x1e8);
LAB_00334ac8:
    if (*(long *)(lVar2 + 0x28) != local_68) goto LAB_00334bec;
                    /* try { // try from 00334adc to 00334ae3 has its CatchHandler @ 00334b50 */
    FUN_002febf0(unaff_x21);
  }
  else {
    lVar10 = (long)(int)(*(int *)(param_1 + 0x78) * 10 | 1);
    sVar9 = lVar10 * 4;
                    /* try { // try from 003346ec to 003346f3 has its CatchHandler @ 00334c00 */
    pvVar3 = (void *)FUN_00759c3c(sVar9);
    *(void **)(param_1 + 0xa0) = pvVar3;
    *(void **)(param_1 + 0xb0) = (void *)((long)pvVar3 + lVar10 * 4);
    memset(pvVar3,0,sVar9);
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
    lVar10 = param_3[0xf];
    unaff_x21 = (undefined8 *)(param_1 + 200);
    *unaff_x21 = 0;
    *(void **)(param_1 + 0xa8) = (void *)((long)pvVar3 + sVar9);
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    if (uVar12 != 0) {
      if (uVar12 >> 0x3e == 0) {
        sVar9 = uVar12 * 4;
                    /* try { // try from 0033473c to 00334743 has its CatchHandler @ 00334b50 */
        pvVar3 = (void *)FUN_00759c3c(sVar9);
        *(void **)(param_1 + 200) = pvVar3;
        *(void **)(param_1 + 0xd8) = (void *)((long)pvVar3 + uVar12 * 4);
        memset(pvVar3,0,sVar9);
        *(void **)(param_1 + 0xd0) = (void *)((long)pvVar3 + sVar9);
        lVar5 = (long)((long)pvVar3 + sVar9) - (long)pvVar3 >> 2;
        if ((int)lVar10 != 3) goto LAB_003347a4;
LAB_00334778:
                    /* try { // try from 00334778 to 003347b3 has its CatchHandler @ 00334b34 */
        FUN_0034a9a8(&local_80,lVar5,pvVar3,lVar5);
        goto LAB_003347b4;
      }
      goto LAB_00334ac8;
    }
    pvVar3 = (void *)0x0;
    lVar5 = 0;
    if ((int)lVar10 == 3) goto LAB_00334778;
LAB_003347a4:
    FUN_0034a6ec(&local_80,lVar5,pvVar3,lVar5);
LAB_003347b4:
    dVar13 = (double)NEON_ucvtf(*(undefined8 *)(param_2 + 0x28));
                    /* try { // try from 003347d4 to 003347df has its CatchHandler @ 00334b2c */
    FUN_00345ff4((int)param_3[1],param_1 + 0xe0,10,(long)(4000.0 / dVar13));
    *(undefined1 *)(param_1 + 0x148) = *(undefined1 *)((long)param_3 + 0xc);
                    /* try { // try from 003347ec to 003347f7 has its CatchHandler @ 00334b24 */
    FUN_003460fc(param_1 + 0x150,*(undefined8 *)(param_1 + 0x90),1);
    lVar10 = param_3[2];
    *(long *)(param_1 + 0x170) = param_3[3];
    *(long *)(param_1 + 0x168) = lVar10;
    uVar12 = 0;
    if ((long)(int)param_3[0xd] != 0) {
      uVar12 = (ulong)(*(long *)(param_2 + 0x18) * 3) / (ulong)(long)(int)param_3[0xd];
    }
                    /* try { // try from 0033481c to 0033482f has its CatchHandler @ 00334b1c */
    FUN_00349b60(*(undefined4 *)((long)param_3 + 0x24),
                 *(float *)(param_3 + 5) * *(float *)(param_3 + 5),0,0,param_1 + 0x178,10,uVar12);
    uVar12 = *(ulong *)(param_1 + 0x90);
    *(undefined8 *)(param_1 + 0x1f0) = 0;
    *(undefined8 *)(param_1 + 0x1f8) = 0;
    *(undefined8 *)(param_1 + 0x1e8) = 0;
    if (0x3ffffffffffffffd < uVar12) goto LAB_00334aac;
    lVar10 = (uVar12 >> 1) + 1;
    sVar9 = lVar10 * 8;
                    /* try { // try from 00334854 to 0033485b has its CatchHandler @ 00334bf0 */
    pvVar3 = (void *)FUN_00759c3c(sVar9);
    *(void **)(param_1 + 0x1e8) = pvVar3;
    *(void **)(param_1 + 0x1f8) = (void *)((long)pvVar3 + lVar10 * 8);
    memset(pvVar3,0,sVar9);
    *(undefined8 *)(param_1 + 0x200) = 0;
    *(undefined8 *)(param_1 + 0x210) = 0;
    *(undefined8 *)(param_1 + 0x208) = 0;
    uVar6 = (*(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20)) * (uVar12 * 5 + 5);
    param_3 = (long *)(param_1 + 0x200);
    *(void **)(param_1 + 0x1f0) = (void *)((long)pvVar3 + sVar9);
    uVar12 = uVar6 + 1;
    if (0xfffffffffffffffe < uVar6) {
LAB_003348e4:
      pvVar3 = *(void **)(param_1 + 0xa0);
      iVar1 = *(int *)(param_1 + 0x78);
      lVar5 = (long)iVar1;
      lVar10 = *(long *)(param_1 + 0xc0);
      *(undefined1 *)(param_1 + 0x22c) = 1;
      *(undefined4 *)(param_1 + 0x228) = 0;
      *(undefined8 *)(param_1 + 0x220) = 0;
      *(undefined8 *)(param_1 + 0x218) = 0;
      *(undefined8 *)(param_1 + 0x238) = 0;
      *(undefined8 *)(param_1 + 0x230) = 0;
      if ((ulong)(*(long *)(param_1 + 0xa8) - (long)pvVar3 >> 2) < (ulong)(lVar10 + lVar5)) {
        memcpy(pvVar3,(void *)((long)pvVar3 + *(long *)(param_1 + 0xb8) * 4),
               (lVar10 - *(long *)(param_1 + 0xb8)) * 4);
        lVar10 = *(long *)(param_1 + 0xb8);
        *(undefined8 *)(param_1 + 0xb8) = 0;
        lVar10 = *(long *)(param_1 + 0xc0) - lVar10;
      }
      if (iVar1 != 0) {
        memset((void *)(*plVar7 + lVar10 * 4),0,lVar5 << 2);
      }
      lVar11 = *(long *)(param_1 + 0x220);
      pvVar3 = *(void **)(param_1 + 0x200);
      uVar12 = (ulong)((*(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20)) *
                       (long)*(int *)(param_1 + 0x84) * ((long)*(int *)(param_1 + 0x7c) + 2)) >>
               ((ulong)(*(int *)(param_1 + 0x7c) + 1) & 0x3f);
      *(long *)(param_1 + 0xc0) = lVar10 + lVar5;
      if ((ulong)(*(long *)(param_1 + 0x208) - (long)pvVar3 >> 2) < uVar12 + lVar11) {
        memcpy(pvVar3,(void *)((long)pvVar3 + *(long *)(param_1 + 0x218) * 4),
               (lVar11 - *(long *)(param_1 + 0x218)) * 4);
        lVar11 = *(long *)(param_1 + 0x218);
        *(undefined8 *)(param_1 + 0x218) = 0;
        lVar11 = *(long *)(param_1 + 0x220) - lVar11;
      }
      if (uVar12 != 0) {
        memset((void *)(*param_3 + lVar11 * 4),0,uVar12 << 2);
      }
      *(ulong *)(param_1 + 0x220) = lVar11 + uVar12;
                    /* try { // try from 003349e0 to 003349ef has its CatchHandler @ 00334b68 */
      uVar4 = FUN_0034b7c4();
      FUN_0034ad20(&local_80,uVar4,param_4);
      plVar7 = plStack_78;
      uVar4 = local_80;
      plVar8 = *(long **)(param_1 + 0x238);
      local_80 = 0;
      plStack_78 = (long *)0x0;
      *(long **)(param_1 + 0x238) = plVar7;
      *(undefined8 *)(param_1 + 0x230) = uVar4;
      if ((plVar8 != (long *)0x0) &&
         (lVar10 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1), lVar10 == 0)) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        FUN_0071245c(plVar8);
      }
      plVar7 = plStack_78;
      if ((plStack_78 != (long *)0x0) &&
         (lVar10 = FUN_00755c50(0xffffffffffffffff,plStack_78 + 1), lVar10 == 0)) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        FUN_0071245c(plVar7);
      }
      if (*(long *)(lVar2 + 0x28) == local_68) {
        return;
      }
      goto LAB_00334bec;
    }
    if (uVar12 >> 0x3e == 0) {
      sVar9 = uVar12 * 4;
                    /* try { // try from 003348b8 to 003348bf has its CatchHandler @ 00334b00 */
      pvVar3 = (void *)FUN_00759c3c(sVar9);
      *(void **)(param_1 + 0x200) = pvVar3;
      *(void **)(param_1 + 0x210) = (void *)((long)pvVar3 + uVar12 * 4);
      memset(pvVar3,0,sVar9);
      *(void **)(param_1 + 0x208) = (void *)((long)pvVar3 + sVar9);
      goto LAB_003348e4;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00334af8 to 00334aff has its CatchHandler @ 00334b00 */
    uVar4 = FUN_002febf0(param_3);
                    /* catch() { ... } // from try @ 003348b8 with catch @ 00334b00
                       catch() { ... } // from try @ 00334af8 with catch @ 00334b00 */
    pvVar3 = (void *)*param_3;
    if (pvVar3 != (void *)0x0) {
      *(void **)(param_1 + 0x208) = pvVar3;
      free(pvVar3);
    }
    pvVar3 = *(void **)(param_1 + 0x1e8);
    if (pvVar3 != (void *)0x0) {
      *(void **)(param_1 + 0x1f0) = pvVar3;
      free(pvVar3);
    }
    FUN_00331070(param_1 + 0x178);
    FUN_0034653c(param_1 + 0x150);
    FUN_003310dc(param_1 + 0xe0);
    pvVar3 = (void *)*unaff_x21;
    if (pvVar3 != (void *)0x0) {
      *(void **)(param_1 + 0xd0) = pvVar3;
      free(pvVar3);
    }
    FUN_00330fc8(plVar7);
    FUN_0033018c(param_1 + 0x10);
    FUN_00319230(param_1);
    if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_00755eac(uVar4);
    }
  }
LAB_00334bec:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00334c1c  FUN_00334c1c =====

undefined8 FUN_00334c1c(long param_1,long *param_2)

{
  float *pfVar1;
  float fVar2;
  bool bVar3;
  void *__dest;
  ulong uVar4;
  float *pfVar5;
  long lVar6;
  ulong uVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar11;
  float *__src;
  long lVar12;
  float fVar13;
  float fVar14;
  float *pfVar10;
  
  __src = (float *)*param_2;
  if ((*(byte *)(param_1 + 0x14) & 1) == 0) {
    pfVar5 = (float *)param_2[1];
    bVar3 = false;
  }
  else {
    pfVar5 = (float *)param_2[1];
    pfVar11 = __src + 1;
    fVar13 = *__src;
    if ((__src == pfVar5) || (pfVar8 = __src, pfVar9 = pfVar11, fVar14 = fVar13, pfVar11 == pfVar5))
    {
      fVar13 = ABS(fVar13);
      fVar14 = fVar13;
    }
    else {
      do {
        pfVar10 = pfVar9 + 1;
        pfVar1 = pfVar9;
        fVar2 = *pfVar9;
        if (*pfVar9 <= fVar14) {
          pfVar1 = pfVar8;
          fVar2 = fVar14;
        }
        pfVar8 = pfVar1;
        pfVar9 = pfVar10;
        fVar14 = fVar2;
      } while (pfVar10 != pfVar5);
      pfVar8 = __src;
      do {
        pfVar10 = pfVar11 + 1;
        pfVar9 = pfVar11;
        fVar14 = *pfVar11;
        if (fVar13 <= *pfVar11) {
          pfVar9 = pfVar8;
          fVar14 = fVar13;
        }
        fVar13 = fVar14;
        pfVar8 = pfVar9;
        pfVar11 = pfVar10;
      } while (pfVar10 != pfVar5);
      fVar13 = ABS(*pfVar9);
      fVar14 = ABS(*pfVar1);
    }
    if (fVar14 <= fVar13) {
      fVar14 = fVar13;
    }
    bVar3 = *(float *)(param_1 + 0x10) < fVar14;
  }
  __dest = *(void **)(param_1 + 0xa0);
  lVar12 = (long)pfVar5 - (long)__src >> 2;
  lVar6 = *(long *)(param_1 + 0xc0);
  *(bool *)(param_1 + 0x98) = bVar3;
  if ((ulong)(*(long *)(param_1 + 0xa8) - (long)__dest >> 2) < (ulong)(lVar12 + lVar6)) {
    memcpy(__dest,(void *)((long)__dest + *(long *)(param_1 + 0xb8) * 4),
           (lVar6 - *(long *)(param_1 + 0xb8)) * 4);
    __dest = *(void **)(param_1 + 0xa0);
    lVar6 = *(long *)(param_1 + 0xc0) - *(long *)(param_1 + 0xb8);
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(long *)(param_1 + 0xc0) = lVar6;
  }
  memcpy((void *)((long)__dest + lVar6 * 4),__src,(long)pfVar5 - (long)__src);
  lVar6 = *(long *)(param_1 + 0xb8);
  uVar7 = (ulong)*(uint *)(param_1 + 0x78);
  *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xc0) + lVar12;
  do {
    if ((ulong)(*(long *)(param_1 + 0xc0) - lVar6) < (ulong)((long)(int)uVar7 << 1)) {
      return *(undefined8 *)(param_1 + 0x228);
    }
    if (param_2[1] != *param_2) {
      param_2[1] = *param_2;
    }
    FUN_00334e20(param_1,*(long *)(param_1 + 0xa0) + lVar6 * 4,param_2);
    uVar4 = FUN_00334fd8(param_1,param_2);
    uVar7 = (ulong)*(int *)(param_1 + 0x78);
    *(int *)(param_1 + 0x228) = (int)uVar4;
    lVar6 = *(long *)(param_1 + 0xb8) + uVar7;
    *(char *)(param_1 + 0x22c) = (char)(uVar4 >> 0x20);
    *(long *)(param_1 + 0xb8) = lVar6;
  } while ((uVar4 & 0xff00000000) != 0);
  return 0;
}


// ===== 00334df4  FUN_00334df4 =====

void FUN_00334df4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00334e20();
  FUN_00334fd8(param_1,param_3);
  return;
}


// ===== 00334e20  FUN_00334e20 =====

undefined8 FUN_00334e20(undefined8 *param_1,void *param_2,long *param_3)

{
  long lVar1;
  void *__src;
  void *__dest;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  size_t __n;
  long lVar5;
  float fVar6;
  float fVar7;
  
  uVar4 = param_1[0x12];
  uVar2 = param_3[1] - *param_3 >> 2;
  if (uVar4 < uVar2 || uVar4 - uVar2 == 0) {
    if (uVar4 < uVar2) {
      param_3[1] = *param_3 + uVar4 * 4;
    }
  }
  else {
    FUN_002feac4(param_3,uVar4 - uVar2);
    uVar4 = param_1[0x12];
  }
  if (uVar4 != 0) {
    memmove((void *)*param_3,param_2,uVar4 << 2);
  }
  FUN_0036cee8(*param_1,param_3,param_1 + 0x19,param_3);
  if (*(char *)(param_1 + 0x29) != '\0') {
    FUN_00345dc0(param_1 + 0x1c,param_3);
  }
  FUN_00346588(param_1 + 0x2a,param_3,param_1 + 0x3d);
  fVar7 = 1.0;
  if ((*(char *)((long)param_1 + 0x3c) != '\0') &&
     (fVar6 = (float)FUN_003498e0(param_1 + 0x2f,param_2,param_1[0x12]), fVar7 = 1.0,
     fVar6 != 1e-06 && fVar6 < 1e-06 == NAN(fVar6))) {
    fVar7 = *(float *)(param_1 + 7) / SQRT(fVar6);
  }
  FUN_00344ea0(fVar7,param_1 + 0x3d,param_3,param_1[0x2d],param_1[0x2e]);
  FUN_003451a4(param_3,(long)*(int *)((long)param_1 + 0x7c));
  FUN_003450cc(*(undefined4 *)(param_1 + 0x10),param_3);
  __src = (void *)*param_3;
  __dest = (void *)param_1[0x40];
  __n = param_3[1] - (long)__src;
  lVar3 = param_1[0x44];
  lVar5 = (long)__n >> 2;
  lVar1 = lVar5 + param_1[0x43];
  param_1[0x43] = lVar1;
  if ((ulong)(param_1[0x41] - (long)__dest >> 2) < (ulong)(lVar3 + lVar5)) {
    memcpy(__dest,(void *)((long)__dest + lVar1 * 4),(lVar3 - lVar1) * 4);
    lVar3 = param_1[0x43];
    __dest = (void *)param_1[0x40];
    param_1[0x43] = 0;
    lVar3 = param_1[0x44] - lVar3;
    param_1[0x44] = lVar3;
  }
  memcpy((void *)((long)__dest + lVar3 * 4),__src,__n);
  param_1[0x44] = param_1[0x44] + lVar5;
  FUN_00344c78(param_3,param_1 + 0x40,param_1 + 8,param_1 + 0xb);
  return 1;
}


// ===== 00334fd8  FUN_00334fd8 =====

void FUN_00334fd8(long param_1,long *param_2)

{
  size_t __n;
  long lVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined4 *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *puStack_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (*(char *)(param_1 + 0x98) == '\0') {
    puVar3 = (undefined8 *)(**(code **)(**(long **)(param_1 + 0x230) + 0x10))();
    puVar4 = (undefined8 *)
             (**(code **)(**(long **)(param_1 + 0x230) + 0x18))(*(long **)(param_1 + 0x230));
    lVar5 = *param_2;
    lVar7 = param_2[1];
    plVar12 = *(long **)(param_1 + 0x230);
    uVar13 = *puVar3;
    local_80 = (undefined8 *)FUN_00759c3c(0x10);
    *local_80 = 1;
    local_80[1] = lVar7 - lVar5 >> 2;
    local_78 = local_80 + 2;
    puStack_70 = local_78;
                    /* try { // try from 003350a8 to 003350b7 has its CatchHandler @ 00335200 */
    (**(code **)(*plVar12 + 0x20))(plVar12,uVar13,&local_80);
    if (local_80 != (undefined8 *)0x0) {
      local_78 = local_80;
      free(local_80);
    }
    __n = param_2[1] - *param_2;
    if (__n != 0) {
      memmove(*(void **)*puVar3,(void *)*param_2,__n);
    }
    (**(code **)(**(long **)(param_1 + 0x230) + 0x28))();
    uVar8 = (ulong)**(uint **)*puVar4 | 0x100000000;
    goto LAB_003351d0;
  }
  puVar6 = (undefined4 *)*param_2;
  lVar5 = param_2[1];
  lVar7 = *(long *)(param_1 + 0x48) - *(long *)(param_1 + 0x40);
  uVar9 = lVar7 >> 2;
  uVar8 = lVar5 - (long)puVar6 >> 2;
  if (uVar9 < uVar8 || uVar9 - uVar8 == 0) {
    if (uVar9 < uVar8) {
      lVar5 = (long)puVar6 + lVar7;
      param_2[1] = lVar5;
    }
  }
  else {
    FUN_002feac4(param_2,uVar9 - uVar8);
    puVar6 = (undefined4 *)*param_2;
    lVar5 = param_2[1];
  }
  uVar9 = lVar5 - (long)puVar6;
  uVar8 = (long)uVar9 >> 2;
  if (0 < (long)uVar8) {
    if (7 < uVar8) {
      auVar14 = NEON_fmov(0x3f800000,4);
      uVar10 = uVar8 & 0x7ffffffffffffff8;
      puVar3 = (undefined8 *)(puVar6 + 4);
      uVar11 = uVar10;
      do {
        uVar11 = uVar11 - 8;
        puVar3[-1] = auVar14._8_8_;
        puVar3[-2] = auVar14._0_8_;
        puVar3[1] = auVar14._8_8_;
        *puVar3 = auVar14._0_8_;
        puVar3 = puVar3 + 4;
      } while (uVar11 != 0);
      bVar2 = uVar8 == uVar10;
      puVar6 = puVar6 + uVar10;
      uVar8 = uVar9 >> 2 & 7;
      if (bVar2) goto LAB_003351cc;
    }
    *puVar6 = 0x3f800000;
    if ((((1 < uVar8) && (puVar6[1] = 0x3f800000, uVar8 - 3 < 0xfffffffffffffffe)) &&
        (puVar6[2] = 0x3f800000, (uVar8 & 6) != 2)) &&
       (((puVar6[3] = 0x3f800000, uVar8 - 5 < 0xfffffffffffffffe &&
         (puVar6[4] = 0x3f800000, (uVar8 & 6) != 4)) &&
        (puVar6[5] = 0x3f800000, uVar8 - 7 < 0xfffffffffffffffe)))) {
      puVar6[6] = 0x3f800000;
    }
  }
LAB_003351cc:
  uVar8 = 0x100000000;
LAB_003351d0:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar8);
  }
  return;
}


// ===== 00335234  FUN_00335234 =====

void FUN_00335234(undefined8 *param_1,undefined8 *param_2)

{
  size_t sVar1;
  void *pvVar2;
  void *__dest;
  undefined8 uVar3;
  undefined8 *__src;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  __src = (undefined8 *)*param_2;
  sVar1 = param_2[1] - (long)__src;
  if (sVar1 != 0) {
    if ((long)sVar1 < 0) {
                    /* try { // try from 003352e0 to 003352e7 has its CatchHandler @ 00335314 */
      FUN_002febf0(param_1);
      goto LAB_003352e8;
    }
                    /* try { // try from 00335268 to 0033526f has its CatchHandler @ 00335314 */
    pvVar2 = (void *)FUN_00759c3c(sVar1);
    *param_1 = pvVar2;
    param_1[1] = pvVar2;
    param_1[2] = (long)pvVar2 + sVar1;
    memcpy(pvVar2,__src,sVar1);
    param_1[1] = (long)pvVar2 + sVar1;
  }
  __src = param_1 + 3;
  *__src = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  pvVar2 = (void *)param_2[3];
  sVar1 = param_2[4] - (long)pvVar2;
  if (sVar1 != 0) {
    if ((long)sVar1 < 0) {
LAB_003352e8:
                    /* try { // try from 003352e8 to 003352ef has its CatchHandler @ 003352f0 */
      uVar3 = FUN_002febf0(__src);
                    /* catch() { ... } // from try @ 003352a8 with catch @ 003352f0
                       catch() { ... } // from try @ 003352e8 with catch @ 003352f0 */
      pvVar2 = (void *)*__src;
      if (pvVar2 != (void *)0x0) {
        param_1[4] = pvVar2;
        free(pvVar2);
      }
      pvVar2 = (void *)*param_1;
      if (pvVar2 != (void *)0x0) {
        param_1[1] = pvVar2;
        free(pvVar2);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00755eac(uVar3);
    }
                    /* try { // try from 003352a8 to 003352af has its CatchHandler @ 003352f0 */
    __dest = (void *)FUN_00759c3c(sVar1);
    param_1[3] = __dest;
    param_1[4] = __dest;
    param_1[5] = (long)__dest + sVar1;
    memcpy(__dest,pvVar2,sVar1);
    param_1[4] = (long)__dest + sVar1;
  }
  return;
}


// ===== 00335334  FUN_00335334 =====

void FUN_00335334(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 local_58;
  long *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00759c3c(0x78);
  local_58 = *param_5;
  local_50 = (long *)param_5[1];
  if (local_50 != (long *)0x0) {
    FUN_00755c20(1,local_50 + 1);
  }
                    /* try { // try from 0033538c to 0033539f has its CatchHandler @ 0033543c */
  FUN_003355a4(uVar3,param_3,param_4,&local_58);
  *param_1 = uVar3;
                    /* try { // try from 003353a4 to 003353ab has its CatchHandler @ 0033541c */
  puVar4 = (undefined8 *)FUN_00759c3c(0x20);
  plVar2 = local_50;
  puVar4[2] = 0;
  puVar4[3] = uVar3;
  param_1[1] = puVar4;
  *puVar4 = &PTR_FUN_00760700;
  puVar4[1] = 0;
  if ((local_50 != (long *)0x0) &&
     (lVar5 = FUN_00755c50(0xffffffffffffffff,local_50 + 1), lVar5 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033546c  FUN_0033546c =====

void FUN_0033546c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 local_58;
  long *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00759c3c(0x78);
  local_58 = *param_5;
  local_50 = (long *)param_5[1];
  if (local_50 != (long *)0x0) {
    FUN_00755c20(1,local_50 + 1);
  }
                    /* try { // try from 003354c4 to 003354d7 has its CatchHandler @ 00335574 */
  FUN_00335918(uVar3,param_3,param_4,&local_58);
  *param_1 = uVar3;
                    /* try { // try from 003354dc to 003354e3 has its CatchHandler @ 00335554 */
  puVar4 = (undefined8 *)FUN_00759c3c(0x20);
  plVar2 = local_50;
  puVar4[2] = 0;
  puVar4[3] = uVar3;
  param_1[1] = puVar4;
  *puVar4 = &PTR_FUN_007607a8;
  puVar4[1] = 0;
  if ((local_50 != (long *)0x0) &&
     (lVar5 = FUN_00755c50(0xffffffffffffffff,local_50 + 1), lVar5 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003355a4  FUN_003355a4 =====

void FUN_003355a4(long *param_1,int *param_2,long param_3,long *param_4)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  void *__ptr;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  void *pvVar10;
  undefined1 auStack_f8 [48];
  void *local_c8;
  void *local_c0;
  void *local_b0;
  void *local_a8;
  int local_98;
  int iStack_90;
  undefined1 auStack_78 [8];
  long *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  puVar1 = PTR_DAT_007a13b8 + 0x10;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = (long)param_2;
  *param_1 = (long)puVar1;
  param_1[3] = *param_4;
  lVar7 = param_4[1];
  param_1[4] = lVar7;
  if (lVar7 != 0) {
    FUN_00755c20(1,lVar7 + 8);
  }
  plVar8 = param_1 + 0xd;
  *plVar8 = 0;
  plVar9 = param_1 + 0xe;
  *plVar9 = 0;
  lVar7 = *(long *)(param_3 + 0x18);
  lVar5 = *(long *)(param_3 + 0x20);
  if ((lVar7 == 0) || (lVar5 != 0)) {
    if (lVar7 == 0) {
                    /* try { // try from 00335658 to 0033565f has its CatchHandler @ 00335848 */
      __ptr = (void *)FUN_00759c3c(0xb0);
                    /* try { // try from 00335660 to 0033566b has its CatchHandler @ 00335844 */
      FUN_0033644c(__ptr,param_3);
    }
    else {
                    /* try { // try from 0033563c to 00335643 has its CatchHandler @ 00335894 */
      __ptr = (void *)FUN_00759c3c(0xb0);
                    /* try { // try from 00335644 to 00335653 has its CatchHandler @ 00335884 */
      FUN_00336680(__ptr,lVar7,lVar5);
    }
                    /* try { // try from 00335670 to 00335677 has its CatchHandler @ 003358c8 */
    FUN_003367f0(__ptr);
                    /* try { // try from 00335678 to 00335683 has its CatchHandler @ 003358c0 */
    FUN_0033678c(auStack_f8,__ptr);
    iVar2 = param_2[2];
                    /* try { // try from 00335688 to 0033568f has its CatchHandler @ 003358bc */
    lVar7 = FUN_00345618((long)*param_2,(long)iVar2);
    iVar3 = *param_2;
    param_1[5] = (long)iVar2;
    param_1[6] = lVar7;
    lVar7 = (long)local_98;
    param_1[7] = (long)iVar3;
                    /* try { // try from 003356a4 to 003356af has its CatchHandler @ 003358b8 */
    lVar5 = FUN_00345618((long)iStack_90,lVar7);
    param_1[8] = lVar7;
    param_1[9] = lVar5;
    param_1[10] = (long)iStack_90;
                    /* try { // try from 003356c0 to 003356d7 has its CatchHandler @ 003358d0 */
    lVar7 = FUN_00345618((long)*param_2,(long)local_98);
    param_1[0xb] = lVar7;
    lVar7 = FUN_00343f1c((long)*param_2,param_1[10],(long)local_98);
    param_1[0xc] = lVar7;
                    /* try { // try from 003356dc to 003356e3 has its CatchHandler @ 003358b4 */
    lVar7 = FUN_00759c3c(0x240);
                    /* try { // try from 003356ec to 003356fb has its CatchHandler @ 003358a4 */
    FUN_00334644(lVar7,param_1 + 5,auStack_f8,auStack_78);
    pvVar10 = (void *)*plVar8;
    *plVar8 = lVar7;
    if (pvVar10 != (void *)0x0) {
      FUN_0031410c(pvVar10);
      free(pvVar10);
    }
                    /* try { // try from 00335718 to 0033571f has its CatchHandler @ 003358a0 */
    lVar7 = FUN_00759c3c(8);
                    /* try { // try from 0033572c to 00335737 has its CatchHandler @ 0033589c */
    FUN_00349cd8(lVar7,param_1[6],param_1[0xb],0,2);
    pvVar10 = (void *)*plVar9;
    *plVar9 = lVar7;
    if (pvVar10 != (void *)0x0) {
      FUN_00349ee0(pvVar10);
      free(pvVar10);
    }
    if ((local_70 != (long *)0x0) &&
       (lVar7 = FUN_00755c50(0xffffffffffffffff,local_70 + 1), lVar7 == 0)) {
      (**(code **)(*local_70 + 0x10))(local_70);
      FUN_0071245c(local_70);
    }
    if (local_b0 != (void *)0x0) {
      local_a8 = local_b0;
      free(local_b0);
    }
    if (local_c8 != (void *)0x0) {
      local_c0 = local_c8;
      free(local_c8);
    }
    if (__ptr != (void *)0x0) {
      FUN_00335ff8(__ptr);
      free(__ptr);
    }
    if (*(long *)(lVar4 + 0x28) == local_68) {
      return;
    }
  }
  else {
    uVar6 = FUN_00753a74(0x20);
                    /* try { // try from 003357f8 to 00335807 has its CatchHandler @ 00335874 */
    FUN_002fd2b0(auStack_f8,
                 "Ringtone: Processor<StreamDataType>::initProcessor: Invalid config blob size.");
                    /* try { // try from 0033580c to 00335843 has its CatchHandler @ 00335850 */
    FUN_00374df0(uVar6,auStack_f8);
    if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar6,PTR_PTR_007a1228,PTR_FUN_007a11f8);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00335918  FUN_00335918 =====

void FUN_00335918(long *param_1,int *param_2,long param_3,long *param_4)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  void *__ptr;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  void *pvVar10;
  undefined1 auStack_f8 [48];
  void *local_c8;
  void *local_c0;
  void *local_b0;
  void *local_a8;
  int local_98;
  int iStack_90;
  undefined1 auStack_78 [8];
  long *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  puVar1 = PTR_DAT_007a13c0 + 0x10;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = (long)param_2;
  *param_1 = (long)puVar1;
  param_1[3] = *param_4;
  lVar7 = param_4[1];
  param_1[4] = lVar7;
  if (lVar7 != 0) {
    FUN_00755c20(1,lVar7 + 8);
  }
  plVar8 = param_1 + 0xd;
  *plVar8 = 0;
  plVar9 = param_1 + 0xe;
  *plVar9 = 0;
  lVar7 = *(long *)(param_3 + 0x18);
  lVar5 = *(long *)(param_3 + 0x20);
  if ((lVar7 == 0) || (lVar5 != 0)) {
    if (lVar7 == 0) {
                    /* try { // try from 003359cc to 003359d3 has its CatchHandler @ 00335bbc */
      __ptr = (void *)FUN_00759c3c(0xb0);
                    /* try { // try from 003359d4 to 003359df has its CatchHandler @ 00335bb8 */
      FUN_0033644c(__ptr,param_3);
    }
    else {
                    /* try { // try from 003359b0 to 003359b7 has its CatchHandler @ 00335c08 */
      __ptr = (void *)FUN_00759c3c(0xb0);
                    /* try { // try from 003359b8 to 003359c7 has its CatchHandler @ 00335bf8 */
      FUN_00336680(__ptr,lVar7,lVar5);
    }
                    /* try { // try from 003359e4 to 003359eb has its CatchHandler @ 00335c3c */
    FUN_003367f0(__ptr);
                    /* try { // try from 003359ec to 003359f7 has its CatchHandler @ 00335c34 */
    FUN_0033678c(auStack_f8,__ptr);
    iVar2 = param_2[2];
                    /* try { // try from 003359fc to 00335a03 has its CatchHandler @ 00335c30 */
    lVar7 = FUN_00345618((long)*param_2,(long)iVar2);
    iVar3 = *param_2;
    param_1[5] = (long)iVar2;
    param_1[6] = lVar7;
    lVar7 = (long)local_98;
    param_1[7] = (long)iVar3;
                    /* try { // try from 00335a18 to 00335a23 has its CatchHandler @ 00335c2c */
    lVar5 = FUN_00345618((long)iStack_90,lVar7);
    param_1[8] = lVar7;
    param_1[9] = lVar5;
    param_1[10] = (long)iStack_90;
                    /* try { // try from 00335a34 to 00335a4b has its CatchHandler @ 00335c44 */
    lVar7 = FUN_00345618((long)*param_2,(long)local_98);
    param_1[0xb] = lVar7;
    lVar7 = FUN_00343f1c((long)*param_2,param_1[10],(long)local_98);
    param_1[0xc] = lVar7;
                    /* try { // try from 00335a50 to 00335a57 has its CatchHandler @ 00335c28 */
    lVar7 = FUN_00759c3c(0x240);
                    /* try { // try from 00335a60 to 00335a6f has its CatchHandler @ 00335c18 */
    FUN_00334644(lVar7,param_1 + 5,auStack_f8,auStack_78);
    pvVar10 = (void *)*plVar8;
    *plVar8 = lVar7;
    if (pvVar10 != (void *)0x0) {
      FUN_0031410c(pvVar10);
      free(pvVar10);
    }
                    /* try { // try from 00335a8c to 00335a93 has its CatchHandler @ 00335c14 */
    lVar7 = FUN_00759c3c(8);
                    /* try { // try from 00335aa0 to 00335aab has its CatchHandler @ 00335c10 */
    FUN_00349cd8(lVar7,param_1[6],param_1[0xb],0,2);
    pvVar10 = (void *)*plVar9;
    *plVar9 = lVar7;
    if (pvVar10 != (void *)0x0) {
      FUN_00349ee0(pvVar10);
      free(pvVar10);
    }
    if ((local_70 != (long *)0x0) &&
       (lVar7 = FUN_00755c50(0xffffffffffffffff,local_70 + 1), lVar7 == 0)) {
      (**(code **)(*local_70 + 0x10))(local_70);
      FUN_0071245c(local_70);
    }
    if (local_b0 != (void *)0x0) {
      local_a8 = local_b0;
      free(local_b0);
    }
    if (local_c8 != (void *)0x0) {
      local_c0 = local_c8;
      free(local_c8);
    }
    if (__ptr != (void *)0x0) {
      FUN_00335ff8(__ptr);
      free(__ptr);
    }
    if (*(long *)(lVar4 + 0x28) == local_68) {
      return;
    }
  }
  else {
    uVar6 = FUN_00753a74(0x20);
                    /* try { // try from 00335b6c to 00335b7b has its CatchHandler @ 00335be8 */
    FUN_002fd2b0(auStack_f8,
                 "Ringtone: Processor<StreamDataType>::initProcessor: Invalid config blob size.");
                    /* try { // try from 00335b80 to 00335bb7 has its CatchHandler @ 00335bc4 */
    FUN_00374df0(uVar6,auStack_f8);
    if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar6,PTR_PTR_007a1228,PTR_FUN_007a11f8);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00335c8c  FUN_00335c8c =====

void FUN_00335c8c(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)*param_1;
  *param_1 = 0;
  if (__ptr != (void *)0x0) {
    FUN_00335ff8(__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 00335cc8  FUN_00335cc8 =====

void FUN_00335cc8(long param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 0x88);
  if ((plVar3 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar3 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_0071245c(plVar3);
  }
  pvVar2 = *(void **)(param_1 + 0x48);
  if (pvVar2 != (void *)0x0) {
    *(void **)(param_1 + 0x50) = pvVar2;
    free(pvVar2);
  }
  pvVar2 = *(void **)(param_1 + 0x30);
  if (pvVar2 != (void *)0x0) {
    *(void **)(param_1 + 0x38) = pvVar2;
    free(pvVar2);
    return;
  }
  return;
}


// ===== 00335d3c  FUN_00335d3c =====

void FUN_00335d3c(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  
  puVar1 = PTR_DAT_007a13b8;
  pvVar4 = (void *)param_1[0xe];
  param_1[0xe] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  if (pvVar4 != (void *)0x0) {
    FUN_00349ee0(pvVar4);
    free(pvVar4);
  }
  pvVar4 = (void *)param_1[0xd];
  param_1[0xd] = 0;
  if (pvVar4 != (void *)0x0) {
    FUN_0031410c(pvVar4);
    free(pvVar4);
  }
  plVar3 = (long *)param_1[4];
  if ((plVar3 != (long *)0x0) && (lVar2 = FUN_00755c50(0xffffffffffffffff,plVar3 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_0071245c(plVar3);
    return;
  }
  return;
}


// ===== 00335dd8  FUN_00335dd8 =====

void FUN_00335dd8(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  void *pvVar3;
  long *plVar4;
  
  puVar1 = PTR_DAT_007a13b8;
  pvVar3 = (void *)param_1[0xe];
  param_1[0xe] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  if (pvVar3 != (void *)0x0) {
    FUN_00349ee0(pvVar3);
    free(pvVar3);
  }
  pvVar3 = (void *)param_1[0xd];
  param_1[0xd] = 0;
  if (pvVar3 != (void *)0x0) {
    FUN_0031410c(pvVar3);
    free(pvVar3);
  }
  plVar4 = (long *)param_1[4];
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_00755c50(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_0071245c(plVar4);
    free(param_1);
    return;
  }
  free(param_1);
  return;
}


// ===== 00335e80  FUN_00335e80 =====

void FUN_00335e80(long param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint unaff_w22;
  byte local_50;
  undefined7 uStack_4f;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0x30) != param_2[1] - *param_2 >> 1) {
    uVar3 = FUN_00753a74(0x20);
                    /* try { // try from 00335f30 to 00335f3f has its CatchHandler @ 00335fb4 */
    FUN_002fd2b0(&local_50,"Ringtone: Processor<StreamDataType>::process: Invalid input frame size."
                );
                    /* try { // try from 00335f44 to 00335f7b has its CatchHandler @ 00335f90 */
    FUN_00374ee0(uVar3,&local_50);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar3,PTR_PTR_007a1338,PTR_FUN_007a11f8);
    }
    goto LAB_00335ff4;
  }
  FUN_00314308(&local_50,*(undefined8 *)(param_1 + 0x70));
                    /* try { // try from 00335ec8 to 00335ecf has its CatchHandler @ 00335fc8 */
  uVar2 = FUN_00334c1c(*(undefined8 *)(param_1 + 0x68),&local_50);
  if ((uVar2 & 0xff00000000) != 0) {
                    /* try { // try from 00335ee8 to 00335eef has its CatchHandler @ 00335fc4 */
    (**(code **)**(undefined8 **)(param_1 + 0x18))((int)uVar2,*(undefined8 **)(param_1 + 0x18));
    if ((void *)CONCAT71(uStack_4f,local_50) != (void *)0x0) {
      free((void *)CONCAT71(uStack_4f,local_50));
    }
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
    goto LAB_00335ff4;
  }
  if (*(long *)(lVar1 + 0x28) != local_38) goto LAB_00335ff4;
                    /* try { // try from 00335f8c to 00335f8f has its CatchHandler @ 00335fc8 */
  uVar3 = FUN_0031493c();
                    /* catch() { ... } // from try @ 00335f44 with catch @ 00335f90 */
  if ((local_50 & 1) == 0) {
    if (unaff_w22 != 0) {
LAB_00335fb8:
      FUN_00753b60(param_1);
    }
  }
  else {
    free(local_40);
    if ((unaff_w22 & 1) != 0) goto LAB_00335fb8;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00755eac(uVar3);
  }
LAB_00335ff4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00335ff8  FUN_00335ff8 =====

void FUN_00335ff8(long param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 0xa8);
  if ((plVar3 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar3 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_0071245c(plVar3);
  }
  pvVar2 = *(void **)(param_1 + 0x68);
  if (pvVar2 != (void *)0x0) {
    *(void **)(param_1 + 0x70) = pvVar2;
    free(pvVar2);
  }
  pvVar2 = *(void **)(param_1 + 0x50);
  if (pvVar2 != (void *)0x0) {
    *(void **)(param_1 + 0x58) = pvVar2;
    free(pvVar2);
  }
  plVar3 = *(long **)(param_1 + 0x18);
  if ((plVar3 == (long *)0x0) || (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar3 + 1), lVar1 != 0))
  {
    plVar3 = *(long **)(param_1 + 8);
  }
  else {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_0071245c(plVar3);
    plVar3 = *(long **)(param_1 + 8);
  }
  if ((plVar3 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar3 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_0071245c(plVar3);
    return;
  }
  return;
}


// ===== 003360d8  FUN_003360d8 =====

void FUN_003360d8(void *param_1)

{
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 003360fc  FUN_003360fc =====

void FUN_003360fc(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0033610c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}


// ===== 00336114  FUN_00336114 =====

long FUN_00336114(long param_1,long param_2)

{
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_s_NSt6__ndk110shared_ptrIN5KRISP34_007a13c8) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 00336130  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00336134  FUN_00336134 =====

void FUN_00336134(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  
  puVar1 = PTR_DAT_007a13c0;
  pvVar4 = (void *)param_1[0xe];
  param_1[0xe] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  if (pvVar4 != (void *)0x0) {
    FUN_00349ee0(pvVar4);
    free(pvVar4);
  }
  pvVar4 = (void *)param_1[0xd];
  param_1[0xd] = 0;
  if (pvVar4 != (void *)0x0) {
    FUN_0031410c(pvVar4);
    free(pvVar4);
  }
  plVar3 = (long *)param_1[4];
  if ((plVar3 != (long *)0x0) && (lVar2 = FUN_00755c50(0xffffffffffffffff,plVar3 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_0071245c(plVar3);
    return;
  }
  return;
}


// ===== 003361d0  FUN_003361d0 =====

void FUN_003361d0(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  void *pvVar3;
  long *plVar4;
  
  puVar1 = PTR_DAT_007a13c0;
  pvVar3 = (void *)param_1[0xe];
  param_1[0xe] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  if (pvVar3 != (void *)0x0) {
    FUN_00349ee0(pvVar3);
    free(pvVar3);
  }
  pvVar3 = (void *)param_1[0xd];
  param_1[0xd] = 0;
  if (pvVar3 != (void *)0x0) {
    FUN_0031410c(pvVar3);
    free(pvVar3);
  }
  plVar4 = (long *)param_1[4];
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_00755c50(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_0071245c(plVar4);
    free(param_1);
    return;
  }
  free(param_1);
  return;
}


// ===== 00336278  FUN_00336278 =====

void FUN_00336278(long param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint unaff_w22;
  byte local_50;
  undefined7 uStack_4f;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0x30) != param_2[1] - *param_2 >> 2) {
    uVar3 = FUN_00753a74(0x20);
                    /* try { // try from 00336328 to 00336337 has its CatchHandler @ 003363ac */
    FUN_002fd2b0(&local_50,"Ringtone: Processor<StreamDataType>::process: Invalid input frame size."
                );
                    /* try { // try from 0033633c to 00336373 has its CatchHandler @ 00336388 */
    FUN_00374ee0(uVar3,&local_50);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar3,PTR_PTR_007a1338,PTR_FUN_007a11f8);
    }
    goto LAB_003363ec;
  }
  FUN_003149ec(&local_50,*(undefined8 *)(param_1 + 0x70));
                    /* try { // try from 003362c0 to 003362c7 has its CatchHandler @ 003363c0 */
  uVar2 = FUN_00334c1c(*(undefined8 *)(param_1 + 0x68),&local_50);
  if ((uVar2 & 0xff00000000) != 0) {
                    /* try { // try from 003362e0 to 003362e7 has its CatchHandler @ 003363bc */
    (**(code **)**(undefined8 **)(param_1 + 0x18))((int)uVar2,*(undefined8 **)(param_1 + 0x18));
    if ((void *)CONCAT71(uStack_4f,local_50) != (void *)0x0) {
      free((void *)CONCAT71(uStack_4f,local_50));
    }
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
    goto LAB_003363ec;
  }
  if (*(long *)(lVar1 + 0x28) != local_38) goto LAB_003363ec;
                    /* try { // try from 00336384 to 00336387 has its CatchHandler @ 003363c0 */
  uVar3 = FUN_0031493c();
                    /* catch() { ... } // from try @ 0033633c with catch @ 00336388 */
  if ((local_50 & 1) == 0) {
    if (unaff_w22 != 0) {
LAB_003363b0:
      FUN_00753b60(param_1);
    }
  }
  else {
    free(local_40);
    if ((unaff_w22 & 1) != 0) goto LAB_003363b0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00755eac(uVar3);
  }
LAB_003363ec:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003363f0  FUN_003363f0 =====

void FUN_003363f0(void *param_1)

{
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 00336414  FUN_00336414 =====

void FUN_00336414(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00336424. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}


// ===== 0033642c  FUN_0033642c =====

long FUN_0033642c(long param_1,long param_2)

{
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_s_NSt6__ndk110shared_ptrIN5KRISP34_007a13d0) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 00336448  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0033644c  FUN_0033644c =====

void FUN_0033644c(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
                    /* try { // try from 00336484 to 0033648b has its CatchHandler @ 00336524 */
  plVar2 = (long *)FUN_00759c3c(0x88);
  puVar1 = PTR_DAT_007a12c8;
  plVar2[1] = 0;
  plVar2[2] = 0;
  *plVar2 = (long)(puVar1 + 0x10);
                    /* try { // try from 003364a8 to 003364b7 has its CatchHandler @ 0033650c */
  FUN_0033be5c(plVar2 + 3,param_2,1);
  plVar4 = (long *)param_1[1];
  *param_1 = (long)(plVar2 + 3);
  param_1[1] = (long)plVar2;
  if ((plVar4 != (long *)0x0) && (lVar3 = FUN_00755c50(0xffffffffffffffff,plVar4 + 1), lVar3 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_0071245c(plVar4);
  }
                    /* try { // try from 003364ec to 003364f3 has its CatchHandler @ 00336508 */
  FUN_00336550(param_1);
  return;
}


// ===== 00336550  FUN_00336550 =====

void FUN_00336550(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  uVar2 = (**(code **)(*(long *)*param_1 + 0x20))();
  plVar3 = (long *)FUN_00759c3c(0x30);
  puVar1 = PTR_DAT_007a12d0;
  plVar3[1] = 0;
  plVar3[2] = 0;
  *plVar3 = (long)(puVar1 + 0x10);
                    /* try { // try from 0033659c to 003365a7 has its CatchHandler @ 00336664 */
  FUN_00342408(plVar3 + 3,uVar2);
  plVar5 = (long *)param_1[3];
  param_1[2] = plVar3 + 3;
  param_1[3] = plVar3;
  if ((plVar5 != (long *)0x0) && (lVar4 = FUN_00755c50(0xffffffffffffffff,plVar5 + 1), lVar4 == 0))
  {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_0071245c(plVar5);
  }
  plVar3 = (long *)FUN_00759c3c(0x60);
  puVar1 = PTR_DAT_007a12d8;
  plVar5 = (long *)param_1[0x15];
  plVar3[1] = 0;
  plVar3[2] = 0;
  plVar3[0xb] = 0;
  param_1[0x15] = plVar3;
  *plVar3 = (long)(puVar1 + 0x10);
  plVar3[6] = 0;
  plVar3[5] = 0;
  plVar3[8] = 0;
  plVar3[7] = 0;
  plVar3[10] = 0;
  plVar3[9] = 0;
  plVar3[4] = 0;
  plVar3[3] = 0;
  param_1[0x14] = plVar3 + 3;
  if ((plVar5 != (long *)0x0) && (lVar4 = FUN_00755c50(0xffffffffffffffff,plVar5 + 1), lVar4 == 0))
  {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_0071245c(plVar5);
    return;
  }
  return;
}


// ===== 00336680  FUN_00336680 =====

void FUN_00336680(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
                    /* try { // try from 003366bc to 003366c3 has its CatchHandler @ 00336760 */
  plVar2 = (long *)FUN_00759c3c(0x88);
  puVar1 = PTR_DAT_007a12c8;
  plVar2[1] = 0;
  plVar2[2] = 0;
  *plVar2 = (long)(puVar1 + 0x10);
                    /* try { // try from 003366e0 to 003366f3 has its CatchHandler @ 00336748 */
  FUN_0033bd64(plVar2 + 3,param_2,param_3,1);
  plVar4 = (long *)param_1[1];
  *param_1 = (long)(plVar2 + 3);
  param_1[1] = (long)plVar2;
  if ((plVar4 != (long *)0x0) && (lVar3 = FUN_00755c50(0xffffffffffffffff,plVar4 + 1), lVar3 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_0071245c(plVar4);
  }
                    /* try { // try from 00336728 to 0033672f has its CatchHandler @ 00336744 */
  FUN_00336550(param_1);
  return;
}


// ===== 0033678c  FUN_0033678c =====

void FUN_0033678c(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  uVar4 = *(undefined8 *)(param_2 + 0x38);
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  uVar6 = *(undefined8 *)(param_2 + 0x48);
  uVar5 = *(undefined8 *)(param_2 + 0x40);
  param_1[1] = *(undefined8 *)(param_2 + 0x28);
  *param_1 = uVar2;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[5] = uVar6;
  param_1[4] = uVar5;
  FUN_00335234(param_1 + 6,param_2 + 0x50);
  uVar2 = *(undefined8 *)(param_2 + 0xa0);
  lVar1 = *(long *)(param_2 + 0xa8);
  uVar3 = *(undefined8 *)(param_2 + 0x80);
  uVar5 = *(undefined8 *)(param_2 + 0x94);
  uVar4 = *(undefined8 *)(param_2 + 0x8c);
  param_1[0xd] = *(undefined8 *)(param_2 + 0x88);
  param_1[0xc] = uVar3;
  *(undefined8 *)((long)param_1 + 0x74) = uVar5;
  *(undefined8 *)((long)param_1 + 0x6c) = uVar4;
  param_1[0x10] = uVar2;
  param_1[0x11] = lVar1;
  if (lVar1 != 0) {
    FUN_00755c20(1,lVar1 + 8);
  }
  return;
}


// ===== 003367f0  FUN_003367f0 =====

void FUN_003367f0(undefined8 param_1)

{
  FUN_00336814();
  FUN_00337098(param_1);
  return;
}


// ===== 00336814  FUN_00336814 =====

void FUN_00336814(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  void *pvVar4;
  size_t __n;
  ulong uVar5;
  long lVar6;
  ulong local_128;
  size_t local_120;
  void *local_118;
  undefined1 local_110 [8];
  undefined1 auStack_108 [8];
  char local_100 [8];
  long local_f8;
  undefined8 *local_f0;
  long *local_e8;
  ulong local_e0;
  undefined8 uStack_d8;
  void *local_d0;
  char *local_c0;
  long local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  long local_80 [4];
  long *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00336840 to 0033684f has its CatchHandler @ 00336f04 */
  FUN_003427e0(&local_a0,param_1[2],&DAT_007aae50);
                    /* try { // try from 00336850 to 0033685f has its CatchHandler @ 00336ef0 */
  uVar2 = FUN_00320aec(&local_a0,"fileUid");
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = (void *)0x0;
                    /* try { // try from 00336868 to 0033686f has its CatchHandler @ 00336ed4 */
  FUN_00321278(uVar2,&local_e0);
                    /* try { // try from 00336878 to 0033687f has its CatchHandler @ 00336ed0 */
  FUN_00313038(&uStack_98,(ulong)local_a0 & 0xff);
                    /* try { // try from 0033688c to 00336897 has its CatchHandler @ 00336ec4 */
  (**(code **)(*(long *)*param_1 + 0x10))(&local_f0,(long *)*param_1,&local_e0);
  local_60 = (long *)0x0;
                    /* try { // try from 003368a4 to 003368bb has its CatchHandler @ 00336e88 */
  FUN_00320c28(local_100,*local_f0,local_f0[1],local_80,1,0);
  if (local_60 == local_80) {
    lVar6 = 0x20;
    plVar3 = local_80;
LAB_003368dc:
    (**(code **)(*plVar3 + lVar6))();
  }
  else if (local_60 != (long *)0x0) {
    lVar6 = 0x28;
    plVar3 = local_60;
    goto LAB_003368dc;
  }
                    /* try { // try from 003368e8 to 0033699f has its CatchHandler @ 00336f3c */
  uVar2 = FUN_00320aec(local_100,"skipFrame");
  uVar2 = FUN_00320aec(uVar2,"threshold");
  local_a0 = (char *)((ulong)local_a0._4_4_ << 0x20);
  FUN_0032c290(uVar2,&local_a0);
  *(undefined4 *)(param_1 + 4) = (undefined4)local_a0;
  uVar2 = FUN_00320aec(local_100,"skipFrame");
  uVar2 = FUN_00320aec(uVar2,&DAT_001d3754);
  local_a0 = (char *)((ulong)local_a0 & 0xffffffffffffff00);
  FUN_00312e94(uVar2,&local_a0);
  *(undefined1 *)((long)param_1 + 0x24) = (undefined1)local_a0;
  uVar2 = FUN_00320aec(local_100,"energyThresholdCut");
  uVar2 = FUN_00320aec(uVar2,"cutRefEn");
  local_a0 = (char *)((ulong)local_a0 & 0xffffffff00000000);
  FUN_0032c290(uVar2,&local_a0);
  *(undefined4 *)(param_1 + 5) = (undefined4)local_a0;
  uVar2 = FUN_00320aec(local_100,"energyThresholdCut");
  uVar2 = FUN_00320aec(uVar2,"enable");
  local_a0 = (char *)((ulong)local_a0 & 0xffffffffffffff00);
  FUN_00312e94(uVar2,&local_a0);
  *(undefined1 *)((long)param_1 + 0x2c) = (undefined1)local_a0;
                    /* try { // try from 003369a8 to 003369c3 has its CatchHandler @ 00336f1c */
  uVar2 = FUN_00320aec(local_100,"rescaleRange");
  FUN_0032768c(local_110,uVar2);
                    /* try { // try from 003369c4 to 00336a93 has its CatchHandler @ 00336f48 */
  uVar2 = FUN_00320aec(local_110,"filterRangeStart");
  local_a0 = (char *)0x0;
  FUN_0032c40c(uVar2,&local_a0);
  param_1[6] = local_a0;
  uVar2 = FUN_00320aec(local_110,"filterRangeEnd");
  local_a0 = (char *)0x0;
  FUN_0032c40c(uVar2,&local_a0);
  param_1[7] = local_a0;
  uVar2 = FUN_00320aec(local_110,"coefficientNumber");
  local_a0 = (char *)((ulong)local_a0 & 0xffffffff00000000);
  FUN_0032f734(uVar2,&local_a0);
  *(undefined4 *)(param_1 + 8) = (undefined4)local_a0;
  uVar2 = FUN_00320aec(local_110,&DAT_001de19b);
  local_a0 = (char *)((ulong)local_a0 & 0xffffffff00000000);
  FUN_0032c290(uVar2,&local_a0);
  *(undefined4 *)((long)param_1 + 0x44) = (undefined4)local_a0;
  uVar2 = FUN_00320aec(local_110,&DAT_001b7677);
  local_a0 = (char *)((ulong)local_a0 & 0xffffffff00000000);
  FUN_0032c290(uVar2,&local_a0);
  *(undefined4 *)(param_1 + 9) = (undefined4)local_a0;
  uVar2 = FUN_00320aec(local_110,"rescale");
  local_a0 = (char *)((ulong)local_a0 & 0xffffffffffffff00);
  FUN_00312e94(uVar2,&local_a0);
  *(undefined1 *)((long)param_1 + 0x4c) = (undefined1)local_a0;
                    /* try { // try from 00336a9c to 00336ab7 has its CatchHandler @ 00336f18 */
  uVar2 = FUN_00320aec(local_100,"normalizationParams");
  uVar2 = FUN_00320aec(uVar2,"weight_MU");
  local_a0 = (char *)0x0;
  uStack_98 = 0;
  local_90 = 0;
                    /* try { // try from 00336ac0 to 00336ac7 has its CatchHandler @ 00336e6c */
  FUN_0032ee10(uVar2,&local_a0);
  pvVar4 = (void *)param_1[10];
  if (pvVar4 != (void *)0x0) {
    param_1[0xb] = pvVar4;
    free(pvVar4);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
  }
  param_1[0xb] = uStack_98;
  param_1[10] = local_a0;
  param_1[0xc] = local_90;
                    /* try { // try from 00336af8 to 00336b13 has its CatchHandler @ 00336f14 */
  uVar2 = FUN_00320aec(local_100,"normalizationParams");
  uVar2 = FUN_00320aec(uVar2,"weight_SD");
  local_a0 = (char *)0x0;
  uStack_98 = 0;
  local_90 = 0;
                    /* try { // try from 00336b1c to 00336b23 has its CatchHandler @ 00336e68 */
  FUN_0032ee10(uVar2,&local_a0);
  pvVar4 = (void *)param_1[0xd];
  if (pvVar4 != (void *)0x0) {
    param_1[0xe] = pvVar4;
    free(pvVar4);
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  param_1[0xe] = uStack_98;
  param_1[0xd] = local_a0;
  param_1[0xf] = local_90;
                    /* try { // try from 00336b50 to 00336c1f has its CatchHandler @ 00336f48 */
  uVar2 = FUN_00320aec(local_100,"workingSampleRate");
  local_a0 = (char *)((ulong)local_a0 & 0xffffffff00000000);
  FUN_0032f734(uVar2,&local_a0);
  *(undefined4 *)(param_1 + 0x10) = (undefined4)local_a0;
  uVar2 = FUN_00320aec(local_100,"workingFrameDuration");
  local_a0 = (char *)((ulong)local_a0 & 0xffffffff00000000);
  FUN_0032f734(uVar2,&local_a0);
  *(undefined4 *)((long)param_1 + 0x84) = (undefined4)local_a0;
  uVar2 = FUN_00320aec(local_100,&DAT_001c2bdc);
  local_a0 = (char *)((ulong)local_a0 & 0xffffffff00000000);
  FUN_0032f734(uVar2,&local_a0);
  *(undefined4 *)(param_1 + 0x11) = (undefined4)local_a0;
  uVar2 = FUN_00320aec(local_100,"compressRate");
  local_a0 = (char *)((ulong)local_a0 & 0xffffffff00000000);
  FUN_0032f734(uVar2,&local_a0);
  *(undefined4 *)((long)param_1 + 0x8c) = (undefined4)local_a0;
  uVar2 = FUN_00320aec(local_100,"lpsEps");
  local_a0 = (char *)((ulong)local_a0 & 0xffffffff00000000);
  FUN_0032c290(uVar2,&local_a0);
  *(undefined4 *)(param_1 + 0x12) = (undefined4)local_a0;
  uVar2 = FUN_00320aec(local_100,"frameCount");
  local_a0 = (char *)((ulong)local_a0 & 0xffffffff00000000);
  FUN_0032f734(uVar2,&local_a0);
  *(undefined4 *)((long)param_1 + 0x94) = (undefined4)local_a0;
  __n = strlen("windowFuncName");
  if (0xfffffffffffffff7 < __n) {
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 00336e58 to 00336e5f has its CatchHandler @ 00336f10 */
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_128);
    }
    goto LAB_00337090;
  }
  if (__n < 0x17) {
    pvVar4 = (void *)((ulong)&local_128 | 1);
    local_128 = CONCAT71(local_128._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_00336c90;
  }
  else {
    uVar5 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar5 = __n | 7;
    }
                    /* try { // try from 00336c78 to 00336c7f has its CatchHandler @ 00336f10 */
    pvVar4 = (void *)FUN_00759c3c(uVar5 + 1);
    local_128 = uVar5 + 1 | 1;
    local_120 = __n;
    local_118 = pvVar4;
LAB_00336c90:
    memcpy(pvVar4,"windowFuncName",__n);
  }
  local_a0 = local_100;
  *(undefined1 *)((long)pvVar4 + __n) = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_88 = 0x8000000000000000;
  if (local_100[0] == '\x01') {
                    /* try { // try from 00336cf0 to 00336d73 has its CatchHandler @ 00336f20 */
    uStack_98 = FUN_0032c168(local_f8,&local_128);
    if (local_100[0] != '\x01') goto LAB_00336d48;
LAB_00336d18:
    local_a8 = 0x8000000000000000;
    local_b0 = 0;
    local_b8 = local_f8 + 8;
  }
  else {
    if (local_100[0] == '\x02') {
      local_90 = *(undefined8 *)(local_f8 + 8);
    }
    else {
      local_88 = 1;
      if (local_100[0] == '\x01') goto LAB_00336d18;
LAB_00336d48:
      local_b0 = 0;
      local_b8 = 0;
      if (local_100[0] != '\x02') {
        local_a8 = 1;
        goto LAB_00336d68;
      }
    }
    local_a8 = 0x8000000000000000;
    local_b8 = 0;
    local_b0 = *(undefined8 *)(local_f8 + 8);
  }
LAB_00336d68:
  local_c0 = local_100;
  uVar5 = FUN_0032e628(&local_a0,&local_c0);
  if ((uVar5 & 1) == 0) {
                    /* try { // try from 00336e00 to 00336e0f has its CatchHandler @ 00336f20 */
    uVar2 = FUN_0032e488(&local_a0);
    FUN_003374b4(uVar2,&local_c0);
    *(undefined4 *)(param_1 + 0x13) = local_c0._0_4_;
  }
  else {
    *(undefined4 *)(param_1 + 0x13) = 0;
  }
  if ((local_128 & 1) != 0) {
    free(local_118);
  }
                    /* try { // try from 00336d98 to 00336d9f has its CatchHandler @ 00336e64 */
  FUN_00313038(auStack_108,local_110[0]);
                    /* try { // try from 00336da8 to 00336daf has its CatchHandler @ 00336e60 */
  FUN_00313038(&local_f8,local_100[0]);
  if ((local_e8 != (long *)0x0) &&
     (lVar6 = FUN_00755c50(0xffffffffffffffff,local_e8 + 1), lVar6 == 0)) {
    (**(code **)(*local_e8 + 0x10))(local_e8);
    FUN_0071245c(local_e8);
  }
  if ((local_e0 & 1) != 0) {
    free(local_d0);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_00337090:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00337098  FUN_00337098 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00337098(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined1 local_b0;
  undefined7 uStack_af;
  long *local_a8;
  ulong local_a0;
  undefined8 uStack_98;
  void *local_90;
  ulong local_88;
  undefined8 uStack_80;
  void *local_78;
  ulong local_70;
  undefined8 uStack_68;
  void *local_60;
  undefined1 local_58 [8];
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 003370c4 to 003370d7 has its CatchHandler @ 00337358 */
  FUN_00343168(local_58,param_1[2],&DAT_007aae68);
                    /* try { // try from 003370d8 to 003370e7 has its CatchHandler @ 0033734c */
  uVar4 = FUN_00320aec(local_58,"engType");
  local_70 = 0;
  uStack_68 = 0;
  local_60 = (void *)0x0;
                    /* try { // try from 003370f0 to 003370f7 has its CatchHandler @ 00337338 */
  FUN_00321278(uVar4,&local_70);
                    /* try { // try from 003370f8 to 00337107 has its CatchHandler @ 0033732c */
  uVar4 = FUN_00320aec(local_58,"deviceToRun");
  local_88 = 0;
  uStack_80 = 0;
  local_78 = (void *)0x0;
                    /* try { // try from 00337110 to 00337117 has its CatchHandler @ 00337318 */
  FUN_00321278(uVar4,&local_88);
                    /* try { // try from 00337118 to 0033712f has its CatchHandler @ 00337364 */
  uVar3 = FUN_0034b7d0(&local_70);
  *(undefined4 *)param_1[0x14] = uVar3;
  uVar3 = FUN_0034b9d4(&local_88);
  *(undefined4 *)(param_1[0x14] + 0x40) = uVar3;
                    /* try { // try from 0033713c to 0033714b has its CatchHandler @ 00337314 */
  FUN_003436ac(&local_b0,param_1[2],&DAT_007aae68,&DAT_007aae80);
                    /* try { // try from 0033714c to 0033715b has its CatchHandler @ 00337300 */
  uVar4 = FUN_00320aec(&local_b0,"fileUid");
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = (void *)0x0;
                    /* try { // try from 00337164 to 0033716b has its CatchHandler @ 003372e4 */
  FUN_00321278(uVar4,&local_a0);
                    /* try { // try from 00337174 to 0033717b has its CatchHandler @ 003372e0 */
  FUN_00313038(&local_a8,local_b0);
                    /* try { // try from 00337180 to 0033718b has its CatchHandler @ 003372c4 */
  FUN_007139b0(param_1[0x14] + 8,&local_a0);
                    /* try { // try from 00337198 to 003371a3 has its CatchHandler @ 003372c0 */
  (**(code **)(*(long *)*param_1 + 0x10))(&local_b0,(long *)*param_1,&local_a0);
  plVar2 = local_a8;
  lVar6 = param_1[0x14];
  if (local_a8 != (long *)0x0) {
    FUN_00755c20(1,local_a8 + 1);
  }
  plVar5 = *(long **)(lVar6 + 0x38);
  *(ulong *)(lVar6 + 0x30) = CONCAT71(uStack_af,local_b0);
  *(long **)(lVar6 + 0x38) = plVar2;
  if ((plVar5 != (long *)0x0) && (lVar6 = FUN_00755c50(0xffffffffffffffff,plVar5 + 1), lVar6 == 0))
  {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_0071245c(plVar5);
  }
  if ((local_a8 == (long *)0x0) ||
     (lVar6 = FUN_00755c50(0xffffffffffffffff,local_a8 + 1), lVar6 != 0)) {
    *(undefined4 *)(param_1[0x14] + 0x44) = 1;
  }
  else {
    (**(code **)(*local_a8 + 0x10))(local_a8);
    FUN_0071245c(local_a8);
    *(undefined4 *)(param_1[0x14] + 0x44) = 1;
  }
  if ((local_a0 & 1) != 0) {
    free(local_90);
  }
  if ((local_88 & 1) != 0) {
    free(local_78);
  }
  if ((local_70 & 1) != 0) {
    free(local_60);
  }
                    /* try { // try from 0033723c to 00337243 has its CatchHandler @ 003372bc */
  FUN_00313038(auStack_50,local_58[0]);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 003374b4  FUN_003374b4 =====

void FUN_003374b4(char *param_1,int *param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_58;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  cVar1 = *param_1;
  if (cVar1 == '\x05') {
LAB_003374f0:
    *param_2 = *(int *)(param_1 + 8);
    lVar3 = *(long *)(lVar3 + 0x28);
  }
  else {
    if (cVar1 != '\a') {
      if (cVar1 != '\x06') {
        uVar2 = FUN_00753a74(0x20);
        local_58 = FUN_00312898(param_1);
                    /* try { // try from 00337560 to 00337573 has its CatchHandler @ 003375e0 */
        FUN_00321398(auStack_50,"type must be number, but is ",&local_58);
                    /* try { // try from 00337578 to 003375bb has its CatchHandler @ 003375bc */
        FUN_00312624(uVar2,0x12e,auStack_50,param_1);
        if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
          FUN_00753c5c(uVar2,PTR_PTR_007a12e8,PTR_FUN_007a12f0);
        }
        goto LAB_00337608;
      }
      goto LAB_003374f0;
    }
    *param_2 = (int)*(double *)(param_1 + 8);
    lVar3 = *(long *)(lVar3 + 0x28);
  }
  if (lVar3 == local_38) {
    return;
  }
LAB_00337608:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033760c  _INIT_11 =====

void _INIT_11(void)

{
  ulong uVar1;
  undefined *puVar2;
  size_t sVar3;
  void *pvVar4;
  
  sVar3 = strlen("fpConfig");
  if (0xfffffffffffffff7 < sVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_002fb400(&DAT_007aae50);
  }
  if (sVar3 < 0x17) {
    pvVar4 = (void *)((long)&DAT_007aae50 + 1);
    DAT_007aae50 = CONCAT71(DAT_007aae50._1_7_,(char)((int)sVar3 << 1));
    if (sVar3 != 0) goto LAB_0033768c;
  }
  else {
    uVar1 = (sVar3 & 0xfffffffffffffff8) + 8;
    if ((sVar3 | 7) != 0x17) {
      uVar1 = sVar3 | 7;
    }
    pvVar4 = (void *)FUN_00759c3c(uVar1 + 1);
    DAT_007aae50 = uVar1 + 1 | 1;
    DAT_007aae58 = sVar3;
    DAT_007aae60 = pvVar4;
LAB_0033768c:
    memcpy(pvVar4,"fpConfig",sVar3);
  }
  *(undefined1 *)((long)pvVar4 + sVar3) = 0;
  __cxa_atexit(PTR_FUN_007a13a0,&DAT_007aae50,&PTR_LOOP_0075ec90);
  sVar3 = strlen("inferConfig");
  if (0xfffffffffffffff7 < sVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_002fb400(&DAT_007aae68);
  }
  if (sVar3 < 0x17) {
    pvVar4 = (void *)((long)&DAT_007aae68 + 1);
    DAT_007aae68 = CONCAT71(DAT_007aae68._1_7_,(char)((int)sVar3 << 1));
    if (sVar3 != 0) goto LAB_00337730;
  }
  else {
    uVar1 = (sVar3 & 0xfffffffffffffff8) + 8;
    if ((sVar3 | 7) != 0x17) {
      uVar1 = sVar3 | 7;
    }
    pvVar4 = (void *)FUN_00759c3c(uVar1 + 1);
    DAT_007aae68 = uVar1 + 1 | 1;
    DAT_007aae70 = sVar3;
    DAT_007aae78 = pvVar4;
LAB_00337730:
    memcpy(pvVar4,"inferConfig",sVar3);
  }
  *(undefined1 *)((long)pvVar4 + sVar3) = 0;
  __cxa_atexit(PTR_FUN_007a13a0,&DAT_007aae68,&PTR_LOOP_0075ec90);
  sVar3 = strlen("ringtoneModel");
  if (0xfffffffffffffff7 < sVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_002fb400(&DAT_007aae80);
  }
  if (sVar3 < 0x17) {
    pvVar4 = (void *)((long)&DAT_007aae80 + 1);
    DAT_007aae80 = CONCAT71(DAT_007aae80._1_7_,(char)((int)sVar3 << 1));
    if (sVar3 == 0) goto LAB_003377e8;
  }
  else {
    uVar1 = (sVar3 & 0xfffffffffffffff8) + 8;
    if ((sVar3 | 7) != 0x17) {
      uVar1 = sVar3 | 7;
    }
    pvVar4 = (void *)FUN_00759c3c(uVar1 + 1);
    DAT_007aae80 = uVar1 + 1 | 1;
    DAT_007aae88 = sVar3;
    DAT_007aae90 = pvVar4;
  }
  memcpy(pvVar4,"ringtoneModel",sVar3);
LAB_003377e8:
  puVar2 = PTR_FUN_007a13a0;
  *(undefined1 *)((long)pvVar4 + sVar3) = 0;
  __cxa_atexit(puVar2,&DAT_007aae80,&PTR_LOOP_0075ec90);
  return;
}


// ===== 00337838  FUN_00337838 =====

undefined8 FUN_00337838(long param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 local_b8;
  long *local_b0;
  undefined8 local_a8;
  long *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long *plStack_88;
  ulong local_80;
  undefined8 uStack_78;
  void *local_70;
  undefined4 local_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    uStack_78 = *(undefined8 *)(param_1 + 0x28);
    local_80 = *(ulong *)(param_1 + 0x20);
    local_70 = *(void **)(param_1 + 0x30);
    lVar3 = param_1;
  }
  else {
    lVar3 = FUN_00310244(&local_80,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28));
  }
  local_68 = *(undefined4 *)(param_1 + 0x38);
  uStack_98 = *(undefined8 *)(param_2 + 0x20);
  local_a8 = *param_4;
  plVar5 = (long *)param_4[1];
  local_a0 = plVar5;
  if (plVar5 != (long *)0x0) {
    lVar3 = FUN_00755c20(1,plVar5 + 1);
  }
                    /* try { // try from 003378c4 to 003378d7 has its CatchHandler @ 00337a54 */
  FUN_00337a8c(&local_90,lVar3,&uStack_98,param_3,&local_a8);
  if ((plVar5 != (long *)0x0) && (lVar3 = FUN_00755c50(0xffffffffffffffff,plVar5 + 1), lVar3 == 0))
  {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_0071245c(plVar5);
  }
                    /* try { // try from 00337904 to 0033790b has its CatchHandler @ 00337a44 */
  FUN_00715bcc(param_1 + 0x98);
  plVar5 = plStack_88;
  uVar2 = local_90;
  local_b8 = local_90;
  local_b0 = plStack_88;
  if (plStack_88 == (long *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x10);
    if (puVar4 < *(undefined8 **)(param_2 + 0x18)) {
      *puVar4 = local_90;
      puVar4[1] = 0;
      puVar4 = puVar4 + 2;
      goto LAB_00337978;
    }
  }
  else {
    FUN_00755c20(1,plStack_88 + 1);
    puVar4 = *(undefined8 **)(param_2 + 0x10);
    if (puVar4 < *(undefined8 **)(param_2 + 0x18)) {
      *puVar4 = uVar2;
      puVar4[1] = plVar5;
      FUN_00755c20(1,plVar5 + 1);
      puVar4 = puVar4 + 2;
      goto LAB_00337978;
    }
  }
                    /* try { // try from 00337968 to 00337973 has its CatchHandler @ 00337a2c */
  puVar4 = (undefined8 *)FUN_00310b40(param_2 + 8,&local_b8);
  plVar5 = local_b0;
LAB_00337978:
  *(undefined8 **)(param_2 + 0x10) = puVar4;
  if ((plVar5 != (long *)0x0) && (lVar3 = FUN_00755c50(0xffffffffffffffff,plVar5 + 1), lVar3 == 0))
  {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_0071245c(plVar5);
  }
  FUN_00715bf8(param_1 + 0x98);
  if ((plStack_88 != (long *)0x0) &&
     (lVar3 = FUN_00755c50(0xffffffffffffffff,plStack_88 + 1), lVar3 == 0)) {
    (**(code **)(*plStack_88 + 0x10))(plStack_88);
    FUN_0071245c(plStack_88);
  }
  if ((local_80 & 1) != 0) {
    free(local_70);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_90;
}


// ===== 00337a8c  FUN_00337a8c =====

void FUN_00337a8c(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                 long *param_5)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  
  lVar2 = tpidr_el0;
  lVar7 = *(long *)(lVar2 + 0x28);
  plVar4 = (long *)FUN_00759c3c(0x78);
  lVar6 = *param_5;
  plVar1 = (long *)param_5[1];
  if (plVar1 == (long *)0x0) {
    *(undefined4 *)(plVar4 + 1) = 0;
    puVar3 = PTR_DAT_007a13d8;
    plVar4[2] = param_3;
    plVar4[3] = lVar6;
    plVar4[4] = 0;
    *plVar4 = (long)(puVar3 + 0x10);
  }
  else {
    FUN_00755c20(1,plVar1 + 1);
    *(undefined4 *)(plVar4 + 1) = 0;
    puVar3 = PTR_DAT_007a13d8;
    plVar4[2] = param_3;
    plVar4[3] = lVar6;
    *plVar4 = (long)(puVar3 + 0x10);
    plVar4[4] = (long)plVar1;
    FUN_00755c20(1,plVar1 + 1);
  }
  plVar4[0xe] = 0;
  plVar4[0xd] = 0;
                    /* try { // try from 00337b4c to 00337b5b has its CatchHandler @ 00337c20 */
  FUN_00338098(plVar4,param_3,param_4);
  *param_1 = plVar4;
                    /* try { // try from 00337b60 to 00337b67 has its CatchHandler @ 00337c00 */
  puVar5 = (undefined8 *)FUN_00759c3c(0x20);
  puVar5[2] = 0;
  puVar5[3] = plVar4;
  param_1[1] = puVar5;
  *puVar5 = &PTR_FUN_00760850;
  puVar5[1] = 0;
  if ((plVar1 == (long *)0x0) || (lVar6 = FUN_00755c50(0xffffffffffffffff,plVar1 + 1), lVar6 != 0))
  {
    if (*(long *)(lVar2 + 0x28) == lVar7) {
      return;
    }
  }
  else {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    if (*(long *)(lVar2 + 0x28) == lVar7) {
      FUN_0071245c(plVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00337c68  FUN_00337c68 =====

undefined8 FUN_00337c68(long param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 local_b8;
  long *local_b0;
  undefined8 local_a8;
  long *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long *plStack_88;
  ulong local_80;
  undefined8 uStack_78;
  void *local_70;
  undefined4 local_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    uStack_78 = *(undefined8 *)(param_1 + 0x28);
    local_80 = *(ulong *)(param_1 + 0x20);
    local_70 = *(void **)(param_1 + 0x30);
    lVar3 = param_1;
  }
  else {
    lVar3 = FUN_00310244(&local_80,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28));
  }
  local_68 = *(undefined4 *)(param_1 + 0x38);
  uStack_98 = *(undefined8 *)(param_2 + 0x20);
  local_a8 = *param_4;
  plVar5 = (long *)param_4[1];
  local_a0 = plVar5;
  if (plVar5 != (long *)0x0) {
    lVar3 = FUN_00755c20(1,plVar5 + 1);
  }
                    /* try { // try from 00337cf4 to 00337d07 has its CatchHandler @ 00337e84 */
  FUN_00337ebc(&local_90,lVar3,&uStack_98,param_3,&local_a8);
  if ((plVar5 != (long *)0x0) && (lVar3 = FUN_00755c50(0xffffffffffffffff,plVar5 + 1), lVar3 == 0))
  {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_0071245c(plVar5);
  }
                    /* try { // try from 00337d34 to 00337d3b has its CatchHandler @ 00337e74 */
  FUN_00715bcc(param_1 + 0x98);
  plVar5 = plStack_88;
  uVar2 = local_90;
  local_b8 = local_90;
  local_b0 = plStack_88;
  if (plStack_88 == (long *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x10);
    if (puVar4 < *(undefined8 **)(param_2 + 0x18)) {
      *puVar4 = local_90;
      puVar4[1] = 0;
      puVar4 = puVar4 + 2;
      goto LAB_00337da8;
    }
  }
  else {
    FUN_00755c20(1,plStack_88 + 1);
    puVar4 = *(undefined8 **)(param_2 + 0x10);
    if (puVar4 < *(undefined8 **)(param_2 + 0x18)) {
      *puVar4 = uVar2;
      puVar4[1] = plVar5;
      FUN_00755c20(1,plVar5 + 1);
      puVar4 = puVar4 + 2;
      goto LAB_00337da8;
    }
  }
                    /* try { // try from 00337d98 to 00337da3 has its CatchHandler @ 00337e5c */
  puVar4 = (undefined8 *)FUN_00310cc4(param_2 + 8,&local_b8);
  plVar5 = local_b0;
LAB_00337da8:
  *(undefined8 **)(param_2 + 0x10) = puVar4;
  if ((plVar5 != (long *)0x0) && (lVar3 = FUN_00755c50(0xffffffffffffffff,plVar5 + 1), lVar3 == 0))
  {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_0071245c(plVar5);
  }
  FUN_00715bf8(param_1 + 0x98);
  if ((plStack_88 != (long *)0x0) &&
     (lVar3 = FUN_00755c50(0xffffffffffffffff,plStack_88 + 1), lVar3 == 0)) {
    (**(code **)(*plStack_88 + 0x10))(plStack_88);
    FUN_0071245c(plStack_88);
  }
  if ((local_80 & 1) != 0) {
    free(local_70);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_90;
}


// ===== 00337ebc  FUN_00337ebc =====

void FUN_00337ebc(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                 long *param_5)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  
  lVar2 = tpidr_el0;
  lVar7 = *(long *)(lVar2 + 0x28);
  plVar4 = (long *)FUN_00759c3c(0x78);
  lVar6 = *param_5;
  plVar1 = (long *)param_5[1];
  if (plVar1 == (long *)0x0) {
    *(undefined4 *)(plVar4 + 1) = 0;
    puVar3 = PTR_DAT_007a13e8;
    plVar4[2] = param_3;
    plVar4[3] = lVar6;
    plVar4[4] = 0;
    *plVar4 = (long)(puVar3 + 0x10);
  }
  else {
    FUN_00755c20(1,plVar1 + 1);
    *(undefined4 *)(plVar4 + 1) = 0;
    puVar3 = PTR_DAT_007a13e8;
    plVar4[2] = param_3;
    plVar4[3] = lVar6;
    *plVar4 = (long)(puVar3 + 0x10);
    plVar4[4] = (long)plVar1;
    FUN_00755c20(1,plVar1 + 1);
  }
  plVar4[0xe] = 0;
  plVar4[0xd] = 0;
                    /* try { // try from 00337f7c to 00337f8b has its CatchHandler @ 00338050 */
  FUN_00338b28(plVar4,param_3,param_4);
  *param_1 = plVar4;
                    /* try { // try from 00337f90 to 00337f97 has its CatchHandler @ 00338030 */
  puVar5 = (undefined8 *)FUN_00759c3c(0x20);
  puVar5[2] = 0;
  puVar5[3] = plVar4;
  param_1[1] = puVar5;
  *puVar5 = &PTR_FUN_007608f8;
  puVar5[1] = 0;
  if ((plVar1 == (long *)0x0) || (lVar6 = FUN_00755c50(0xffffffffffffffff,plVar1 + 1), lVar6 != 0))
  {
    if (*(long *)(lVar2 + 0x28) == lVar7) {
      return;
    }
  }
  else {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    if (*(long *)(lVar2 + 0x28) == lVar7) {
      FUN_0071245c(plVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00338098  FUN_00338098 =====

void FUN_00338098(long param_1,int *param_2,long param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  void *__ptr;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  void *pvVar8;
  undefined1 auStack_100 [48];
  void *local_d0;
  void *local_c8;
  void *local_b8;
  void *local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 auStack_68 [8];
  long *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  lVar7 = *(long *)(param_3 + 0x18);
  lVar1 = *(long *)(param_3 + 0x20);
  if ((lVar7 == 0) || (lVar1 != 0)) {
    if (lVar7 == 0) {
                    /* try { // try from 003380fc to 00338103 has its CatchHandler @ 003382e8 */
      __ptr = (void *)FUN_00759c3c(200);
                    /* try { // try from 00338104 to 0033810f has its CatchHandler @ 003382e4 */
      FUN_003391b8(__ptr,param_3);
    }
    else {
                    /* try { // try from 003380e0 to 003380e7 has its CatchHandler @ 00338334 */
      __ptr = (void *)FUN_00759c3c(200);
                    /* try { // try from 003380e8 to 003380f7 has its CatchHandler @ 00338324 */
      FUN_00339430(__ptr,lVar7,lVar1);
    }
                    /* try { // try from 00338114 to 0033811b has its CatchHandler @ 00338368 */
    FUN_003395a8(__ptr);
                    /* try { // try from 0033811c to 00338127 has its CatchHandler @ 00338360 */
    FUN_0033953c(auStack_100,__ptr);
    iVar2 = param_2[2];
                    /* try { // try from 0033812c to 00338133 has its CatchHandler @ 0033835c */
    uVar5 = FUN_00345618((long)*param_2,(long)iVar2);
    uVar6 = local_a0;
    iVar3 = *param_2;
    *(long *)(param_1 + 0x28) = (long)iVar2;
    *(undefined8 *)(param_1 + 0x30) = uVar5;
    *(long *)(param_1 + 0x38) = (long)iVar3;
                    /* try { // try from 00338148 to 00338153 has its CatchHandler @ 00338358 */
    uVar5 = FUN_00345618(uStack_98,local_a0);
    *(undefined8 *)(param_1 + 0x40) = uVar6;
    *(undefined8 *)(param_1 + 0x48) = uVar5;
    *(undefined8 *)(param_1 + 0x50) = uStack_98;
                    /* try { // try from 00338164 to 0033817b has its CatchHandler @ 00338370 */
    uVar6 = FUN_00345618((long)*param_2,local_a0);
    *(undefined8 *)(param_1 + 0x58) = uVar6;
    uVar6 = FUN_00343f1c((long)*param_2,*(undefined8 *)(param_1 + 0x50),local_a0);
    *(undefined8 *)(param_1 + 0x60) = uVar6;
                    /* try { // try from 00338180 to 00338187 has its CatchHandler @ 00338354 */
    uVar6 = FUN_00759c3c(0x2c8);
                    /* try { // try from 00338190 to 0033819f has its CatchHandler @ 00338344 */
    FUN_0033a598(uVar6,(long *)(param_1 + 0x28),auStack_100,auStack_68);
    pvVar8 = *(void **)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x68) = uVar6;
    if (pvVar8 != (void *)0x0) {
      FUN_00338898(pvVar8);
      free(pvVar8);
    }
                    /* try { // try from 003381bc to 003381c3 has its CatchHandler @ 00338340 */
    uVar6 = FUN_00759c3c(8);
                    /* try { // try from 003381d0 to 003381db has its CatchHandler @ 0033833c */
    FUN_00349cd8(uVar6,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x58),0,2);
    pvVar8 = *(void **)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x70) = uVar6;
    if (pvVar8 != (void *)0x0) {
      FUN_00349ee0(pvVar8);
      free(pvVar8);
    }
    if ((local_60 != (long *)0x0) &&
       (lVar7 = FUN_00755c50(0xffffffffffffffff,local_60 + 1), lVar7 == 0)) {
      (**(code **)(*local_60 + 0x10))(local_60);
      FUN_0071245c(local_60);
    }
    if (local_b8 != (void *)0x0) {
      local_b0 = local_b8;
      free(local_b8);
    }
    if (local_d0 != (void *)0x0) {
      local_c8 = local_d0;
      free(local_d0);
    }
    if (__ptr != (void *)0x0) {
      FUN_003387b8(__ptr);
      free(__ptr);
    }
    if (*(long *)(lVar4 + 0x28) == local_58) {
      return;
    }
  }
  else {
    uVar6 = FUN_00753a74(0x20);
                    /* try { // try from 00338298 to 003382a7 has its CatchHandler @ 00338314 */
    FUN_002fd2b0(auStack_100,"Processor<StreamDataType>::initProcessor: Invalid config blob size.");
                    /* try { // try from 003382ac to 003382e3 has its CatchHandler @ 003382f0 */
    FUN_00374df0(uVar6,auStack_100);
    if (*(long *)(lVar4 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar6,PTR_PTR_007a1228,PTR_FUN_007a11f8);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003383a0  FUN_003383a0 =====

void FUN_003383a0(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)*param_1;
  *param_1 = 0;
  if (__ptr != (void *)0x0) {
    FUN_00338898(__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 003383dc  FUN_003383dc =====

void FUN_003383dc(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  
  puVar1 = PTR_DAT_007a13d8;
  pvVar4 = (void *)param_1[0xe];
  param_1[0xe] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  if (pvVar4 != (void *)0x0) {
    FUN_00349ee0(pvVar4);
    free(pvVar4);
  }
  pvVar4 = (void *)param_1[0xd];
  param_1[0xd] = 0;
  if (pvVar4 != (void *)0x0) {
    FUN_00338898(pvVar4);
    free(pvVar4);
  }
  plVar3 = (long *)param_1[4];
  if ((plVar3 != (long *)0x0) && (lVar2 = FUN_00755c50(0xffffffffffffffff,plVar3 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_0071245c(plVar3);
    return;
  }
  return;
}


// ===== 00338478  FUN_00338478 =====

void FUN_00338478(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  void *pvVar3;
  long *plVar4;
  
  puVar1 = PTR_DAT_007a13d8;
  pvVar3 = (void *)param_1[0xe];
  param_1[0xe] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  if (pvVar3 != (void *)0x0) {
    FUN_00349ee0(pvVar3);
    free(pvVar3);
  }
  pvVar3 = (void *)param_1[0xd];
  param_1[0xd] = 0;
  if (pvVar3 != (void *)0x0) {
    FUN_00338898(pvVar3);
    free(pvVar3);
  }
  plVar4 = (long *)param_1[4];
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_00755c50(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_0071245c(plVar4);
    free(param_1);
    return;
  }
  free(param_1);
  return;
}


// ===== 00338520  FUN_00338520 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00338520(long param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong local_70;
  undefined8 uStack_68;
  char *local_60;
  void *local_50;
  void *local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0x30) == param_2[1] - *param_2 >> 1) {
    FUN_00314308(&local_50,*(undefined8 *)(param_1 + 0x70));
                    /* try { // try from 00338568 to 0033856f has its CatchHandler @ 003386d8 */
    uVar5 = FUN_0033ade4(*(undefined8 *)(param_1 + 0x68),&local_50);
    if ((uVar5 & 0xff00000000) == 0) {
                    /* try { // try from 0033857c to 00338583 has its CatchHandler @ 0033869c */
      local_60 = (char *)FUN_00759c3c(0x40);
      uVar3 = s_Processor<StreamDataType>__proce_001e89da._24_8_;
      uVar2 = s_Processor<StreamDataType>__proce_001e89da._16_8_;
      uVar6 = s_Processor<StreamDataType>__proce_001e89da._0_8_;
      uStack_68 = _UNK_00200398;
      local_70 = _DAT_00200390;
      *(undefined8 *)(local_60 + 8) = s_Processor<StreamDataType>__proce_001e89da._8_8_;
      *(undefined8 *)local_60 = uVar6;
      *(undefined8 *)(local_60 + 0x18) = uVar3;
      *(undefined8 *)(local_60 + 0x10) = uVar2;
      uVar4 = s_Processor<StreamDataType>__proce_001e89da._49_8_;
      uVar3 = s_Processor<StreamDataType>__proce_001e89da._32_8_;
      uVar6 = CONCAT71(s_Processor<StreamDataType>__proce_001e89da._41_7_,
                       s_Processor<StreamDataType>__proce_001e89da[0x28]);
      uVar2 = CONCAT17(s_Processor<StreamDataType>__proce_001e89da[0x30],
                       s_Processor<StreamDataType>__proce_001e89da._41_7_);
      local_60[0x39] = '\0';
      *(undefined8 *)(local_60 + 0x28) = uVar6;
      *(undefined8 *)(local_60 + 0x20) = uVar3;
      *(undefined8 *)(local_60 + 0x31) = uVar4;
      *(undefined8 *)(local_60 + 0x29) = uVar2;
                    /* try { // try from 003385b8 to 003385d3 has its CatchHandler @ 00338684 */
      FUN_00372794(&local_70,
                   "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/frame_processors/vad-v2/src/vad_v2_processor.cpp"
                   ,0x4e,"process");
      if ((local_70 & 1) != 0) {
        free(local_60);
      }
    }
                    /* try { // try from 003385f4 to 003385f7 has its CatchHandler @ 003386d4 */
    (**(code **)**(undefined8 **)(param_1 + 0x18))(uVar5 & 0xffffffff);
    if (local_50 != (void *)0x0) {
      local_48 = local_50;
      free(local_50);
    }
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
  }
  else {
    uVar6 = FUN_00753a74(0x20);
                    /* try { // try from 00338638 to 00338647 has its CatchHandler @ 003386c4 */
    FUN_002fd2b0(&local_50,"Processor<StreamDataType>::process: Invalid input frame size.");
                    /* try { // try from 0033864c to 00338683 has its CatchHandler @ 003386a0 */
    FUN_00374ee0(uVar6,&local_50);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar6,PTR_PTR_007a1338,PTR_FUN_007a11f8);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00338708  FUN_00338708 =====

void FUN_00338708(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)*param_1;
  *param_1 = 0;
  if (__ptr != (void *)0x0) {
    FUN_003387b8(__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 00338744  FUN_00338744 =====

void FUN_00338744(long param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 0xa0);
  if ((plVar3 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar3 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_0071245c(plVar3);
  }
  pvVar2 = *(void **)(param_1 + 0x48);
  if (pvVar2 != (void *)0x0) {
    *(void **)(param_1 + 0x50) = pvVar2;
    free(pvVar2);
  }
  pvVar2 = *(void **)(param_1 + 0x30);
  if (pvVar2 != (void *)0x0) {
    *(void **)(param_1 + 0x38) = pvVar2;
    free(pvVar2);
    return;
  }
  return;
}


// ===== 003387b8  FUN_003387b8 =====

void FUN_003387b8(long param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 0xc0);
  if ((plVar3 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar3 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_0071245c(plVar3);
  }
  pvVar2 = *(void **)(param_1 + 0x68);
  if (pvVar2 != (void *)0x0) {
    *(void **)(param_1 + 0x70) = pvVar2;
    free(pvVar2);
  }
  pvVar2 = *(void **)(param_1 + 0x50);
  if (pvVar2 != (void *)0x0) {
    *(void **)(param_1 + 0x58) = pvVar2;
    free(pvVar2);
  }
  plVar3 = *(long **)(param_1 + 0x18);
  if ((plVar3 == (long *)0x0) || (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar3 + 1), lVar1 != 0))
  {
    plVar3 = *(long **)(param_1 + 8);
  }
  else {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_0071245c(plVar3);
    plVar3 = *(long **)(param_1 + 8);
  }
  if ((plVar3 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar3 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_0071245c(plVar3);
    return;
  }
  return;
}


// ===== 00338898  FUN_00338898 =====

void FUN_00338898(long param_1)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  
  plVar4 = *(long **)(param_1 + 0x2c0);
  if ((plVar4 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar4 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_0071245c(plVar4);
  }
  pvVar2 = *(void **)(param_1 + 0x290);
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  *(undefined8 *)(param_1 + 0x298) = 0;
  *(undefined8 *)(param_1 + 0x290) = 0;
  if (pvVar2 != (void *)0x0) {
    free(pvVar2);
    pvVar2 = *(void **)(param_1 + 0x290);
    if (pvVar2 != (void *)0x0) {
      *(void **)(param_1 + 0x298) = pvVar2;
      free(pvVar2);
    }
  }
  pvVar2 = *(void **)(param_1 + 0x278);
  if (pvVar2 != (void *)0x0) {
    *(void **)(param_1 + 0x280) = pvVar2;
    free(pvVar2);
  }
  pvVar2 = *(void **)(param_1 + 0x238);
  if (pvVar2 != (void *)0x0) {
    *(void **)(param_1 + 0x240) = pvVar2;
    free(pvVar2);
  }
  if (*(long *)(param_1 + 0x230) != 0) {
    plVar4 = *(long **)(param_1 + 0x228);
    *(undefined8 *)(param_1 + 0x230) = 0;
    plVar3 = *(long **)(*(long *)(param_1 + 0x220) + 8);
    lVar1 = *plVar4;
    *(long **)(lVar1 + 8) = plVar3;
    *plVar3 = lVar1;
    while (plVar4 != (long *)(param_1 + 0x220)) {
      plVar3 = (long *)plVar4[1];
      free(plVar4);
      plVar4 = plVar3;
    }
  }
  FUN_0034653c(param_1 + 0x1e0);
  if (*(long *)(param_1 + 0x1b0) != 0) {
    plVar4 = *(long **)(param_1 + 0x1a8);
    *(undefined8 *)(param_1 + 0x1b0) = 0;
    plVar3 = *(long **)(*(long *)(param_1 + 0x1a0) + 8);
    lVar1 = *plVar4;
    *(long **)(lVar1 + 8) = plVar3;
    *plVar3 = lVar1;
    while (plVar4 != (long *)(param_1 + 0x1a0)) {
      plVar3 = (long *)plVar4[1];
      free(plVar4);
      plVar4 = plVar3;
    }
  }
  if (*(long *)(param_1 + 0x198) != 0) {
    plVar4 = *(long **)(param_1 + 400);
    *(undefined8 *)(param_1 + 0x198) = 0;
    plVar3 = *(long **)(*(long *)(param_1 + 0x188) + 8);
    lVar1 = *plVar4;
    *(long **)(lVar1 + 8) = plVar3;
    *plVar3 = lVar1;
    while (plVar4 != (long *)(param_1 + 0x188)) {
      plVar3 = (long *)plVar4[1];
      free(plVar4);
      plVar4 = plVar3;
    }
  }
  pvVar2 = *(void **)(param_1 + 0x158);
  if (pvVar2 != (void *)0x0) {
    *(void **)(param_1 + 0x160) = pvVar2;
    free(pvVar2);
  }
  pvVar2 = *(void **)(param_1 + 0x140);
  if (pvVar2 != (void *)0x0) {
    *(void **)(param_1 + 0x148) = pvVar2;
    free(pvVar2);
  }
  pvVar2 = *(void **)(param_1 + 0x118);
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  if (pvVar2 != (void *)0x0) {
    free(pvVar2);
    pvVar2 = *(void **)(param_1 + 0x118);
    if (pvVar2 != (void *)0x0) {
      *(void **)(param_1 + 0x120) = pvVar2;
      free(pvVar2);
    }
  }
  puVar5 = (undefined8 *)(param_1 + 0xf0);
  pvVar2 = (void *)*puVar5;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *puVar5 = 0;
  if (pvVar2 != (void *)0x0) {
    free(pvVar2);
    pvVar2 = (void *)*puVar5;
    if (pvVar2 != (void *)0x0) {
      *(void **)(param_1 + 0xf8) = pvVar2;
      free(pvVar2);
    }
  }
  pvVar2 = *(void **)(param_1 + 0x98);
  if (pvVar2 != (void *)0x0) {
    *(void **)(param_1 + 0xa0) = pvVar2;
    free(pvVar2);
  }
  pvVar2 = *(void **)(param_1 + 0x80);
  if (pvVar2 != (void *)0x0) {
    *(void **)(param_1 + 0x88) = pvVar2;
    free(pvVar2);
  }
  plVar4 = *(long **)(param_1 + 0x48);
  if ((plVar4 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar4 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_0071245c(plVar4);
    return;
  }
  return;
}


// ===== 00338acc  FUN_00338acc =====

void FUN_00338acc(void *param_1)

{
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 00338af0  FUN_00338af0 =====

void FUN_00338af0(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00338b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}


// ===== 00338b08  FUN_00338b08 =====

long FUN_00338b08(long param_1,long param_2)

{
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_s_NSt6__ndk110shared_ptrIN5KRISP34_007a13f8) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 00338b24  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00338b28  FUN_00338b28 =====

void FUN_00338b28(long param_1,int *param_2,long param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  void *__ptr;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  void *pvVar8;
  undefined1 auStack_100 [48];
  void *local_d0;
  void *local_c8;
  void *local_b8;
  void *local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 auStack_68 [8];
  long *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  lVar7 = *(long *)(param_3 + 0x18);
  lVar1 = *(long *)(param_3 + 0x20);
  if ((lVar7 == 0) || (lVar1 != 0)) {
    if (lVar7 == 0) {
                    /* try { // try from 00338b8c to 00338b93 has its CatchHandler @ 00338d78 */
      __ptr = (void *)FUN_00759c3c(200);
                    /* try { // try from 00338b94 to 00338b9f has its CatchHandler @ 00338d74 */
      FUN_003391b8(__ptr,param_3);
    }
    else {
                    /* try { // try from 00338b70 to 00338b77 has its CatchHandler @ 00338dc4 */
      __ptr = (void *)FUN_00759c3c(200);
                    /* try { // try from 00338b78 to 00338b87 has its CatchHandler @ 00338db4 */
      FUN_00339430(__ptr,lVar7,lVar1);
    }
                    /* try { // try from 00338ba4 to 00338bab has its CatchHandler @ 00338df8 */
    FUN_003395a8(__ptr);
                    /* try { // try from 00338bac to 00338bb7 has its CatchHandler @ 00338df0 */
    FUN_0033953c(auStack_100,__ptr);
    iVar2 = param_2[2];
                    /* try { // try from 00338bbc to 00338bc3 has its CatchHandler @ 00338dec */
    uVar5 = FUN_00345618((long)*param_2,(long)iVar2);
    uVar6 = local_a0;
    iVar3 = *param_2;
    *(long *)(param_1 + 0x28) = (long)iVar2;
    *(undefined8 *)(param_1 + 0x30) = uVar5;
    *(long *)(param_1 + 0x38) = (long)iVar3;
                    /* try { // try from 00338bd8 to 00338be3 has its CatchHandler @ 00338de8 */
    uVar5 = FUN_00345618(uStack_98,local_a0);
    *(undefined8 *)(param_1 + 0x40) = uVar6;
    *(undefined8 *)(param_1 + 0x48) = uVar5;
    *(undefined8 *)(param_1 + 0x50) = uStack_98;
                    /* try { // try from 00338bf4 to 00338c0b has its CatchHandler @ 00338e00 */
    uVar6 = FUN_00345618((long)*param_2,local_a0);
    *(undefined8 *)(param_1 + 0x58) = uVar6;
    uVar6 = FUN_00343f1c((long)*param_2,*(undefined8 *)(param_1 + 0x50),local_a0);
    *(undefined8 *)(param_1 + 0x60) = uVar6;
                    /* try { // try from 00338c10 to 00338c17 has its CatchHandler @ 00338de4 */
    uVar6 = FUN_00759c3c(0x2c8);
                    /* try { // try from 00338c20 to 00338c2f has its CatchHandler @ 00338dd4 */
    FUN_0033a598(uVar6,(long *)(param_1 + 0x28),auStack_100,auStack_68);
    pvVar8 = *(void **)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x68) = uVar6;
    if (pvVar8 != (void *)0x0) {
      FUN_00338898(pvVar8);
      free(pvVar8);
    }
                    /* try { // try from 00338c4c to 00338c53 has its CatchHandler @ 00338dd0 */
    uVar6 = FUN_00759c3c(8);
                    /* try { // try from 00338c60 to 00338c6b has its CatchHandler @ 00338dcc */
    FUN_00349cd8(uVar6,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x58),0,2);
    pvVar8 = *(void **)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x70) = uVar6;
    if (pvVar8 != (void *)0x0) {
      FUN_00349ee0(pvVar8);
      free(pvVar8);
    }
    if ((local_60 != (long *)0x0) &&
       (lVar7 = FUN_00755c50(0xffffffffffffffff,local_60 + 1), lVar7 == 0)) {
      (**(code **)(*local_60 + 0x10))(local_60);
      FUN_0071245c(local_60);
    }
    if (local_b8 != (void *)0x0) {
      local_b0 = local_b8;
      free(local_b8);
    }
    if (local_d0 != (void *)0x0) {
      local_c8 = local_d0;
      free(local_d0);
    }
    if (__ptr != (void *)0x0) {
      FUN_003387b8(__ptr);
      free(__ptr);
    }
    if (*(long *)(lVar4 + 0x28) == local_58) {
      return;
    }
  }
  else {
    uVar6 = FUN_00753a74(0x20);
                    /* try { // try from 00338d28 to 00338d37 has its CatchHandler @ 00338da4 */
    FUN_002fd2b0(auStack_100,"Processor<StreamDataType>::initProcessor: Invalid config blob size.");
                    /* try { // try from 00338d3c to 00338d73 has its CatchHandler @ 00338d80 */
    FUN_00374df0(uVar6,auStack_100);
    if (*(long *)(lVar4 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar6,PTR_PTR_007a1228,PTR_FUN_007a11f8);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00338e30  FUN_00338e30 =====

void FUN_00338e30(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  
  puVar1 = PTR_DAT_007a13e8;
  pvVar4 = (void *)param_1[0xe];
  param_1[0xe] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  if (pvVar4 != (void *)0x0) {
    FUN_00349ee0(pvVar4);
    free(pvVar4);
  }
  pvVar4 = (void *)param_1[0xd];
  param_1[0xd] = 0;
  if (pvVar4 != (void *)0x0) {
    FUN_00338898(pvVar4);
    free(pvVar4);
  }
  plVar3 = (long *)param_1[4];
  if ((plVar3 != (long *)0x0) && (lVar2 = FUN_00755c50(0xffffffffffffffff,plVar3 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_0071245c(plVar3);
    return;
  }
  return;
}


// ===== 00338ecc  FUN_00338ecc =====

void FUN_00338ecc(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  void *pvVar3;
  long *plVar4;
  
  puVar1 = PTR_DAT_007a13e8;
  pvVar3 = (void *)param_1[0xe];
  param_1[0xe] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  if (pvVar3 != (void *)0x0) {
    FUN_00349ee0(pvVar3);
    free(pvVar3);
  }
  pvVar3 = (void *)param_1[0xd];
  param_1[0xd] = 0;
  if (pvVar3 != (void *)0x0) {
    FUN_00338898(pvVar3);
    free(pvVar3);
  }
  plVar4 = (long *)param_1[4];
  if ((plVar4 != (long *)0x0) && (lVar2 = FUN_00755c50(0xffffffffffffffff,plVar4 + 1), lVar2 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_0071245c(plVar4);
    free(param_1);
    return;
  }
  free(param_1);
  return;
}


// ===== 00338f74  FUN_00338f74 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00338f74(long param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong local_70;
  undefined8 uStack_68;
  char *local_60;
  void *local_50;
  void *local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0x30) == param_2[1] - *param_2 >> 2) {
    FUN_003149ec(&local_50,*(undefined8 *)(param_1 + 0x70));
                    /* try { // try from 00338fbc to 00338fc3 has its CatchHandler @ 0033912c */
    uVar5 = FUN_0033ade4(*(undefined8 *)(param_1 + 0x68),&local_50);
    if ((uVar5 & 0xff00000000) == 0) {
                    /* try { // try from 00338fd0 to 00338fd7 has its CatchHandler @ 003390f0 */
      local_60 = (char *)FUN_00759c3c(0x40);
      uVar3 = s_Processor<StreamDataType>__proce_001e89da._24_8_;
      uVar2 = s_Processor<StreamDataType>__proce_001e89da._16_8_;
      uVar6 = s_Processor<StreamDataType>__proce_001e89da._0_8_;
      uStack_68 = _UNK_00200398;
      local_70 = _DAT_00200390;
      *(undefined8 *)(local_60 + 8) = s_Processor<StreamDataType>__proce_001e89da._8_8_;
      *(undefined8 *)local_60 = uVar6;
      *(undefined8 *)(local_60 + 0x18) = uVar3;
      *(undefined8 *)(local_60 + 0x10) = uVar2;
      uVar4 = s_Processor<StreamDataType>__proce_001e89da._49_8_;
      uVar3 = s_Processor<StreamDataType>__proce_001e89da._32_8_;
      uVar6 = CONCAT71(s_Processor<StreamDataType>__proce_001e89da._41_7_,
                       s_Processor<StreamDataType>__proce_001e89da[0x28]);
      uVar2 = CONCAT17(s_Processor<StreamDataType>__proce_001e89da[0x30],
                       s_Processor<StreamDataType>__proce_001e89da._41_7_);
      local_60[0x39] = '\0';
      *(undefined8 *)(local_60 + 0x28) = uVar6;
      *(undefined8 *)(local_60 + 0x20) = uVar3;
      *(undefined8 *)(local_60 + 0x31) = uVar4;
      *(undefined8 *)(local_60 + 0x29) = uVar2;
                    /* try { // try from 0033900c to 00339027 has its CatchHandler @ 003390d8 */
      FUN_00372794(&local_70,
                   "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/frame_processors/vad-v2/src/vad_v2_processor.cpp"
                   ,0x4e,"process");
      if ((local_70 & 1) != 0) {
        free(local_60);
      }
    }
                    /* try { // try from 00339048 to 0033904b has its CatchHandler @ 00339128 */
    (**(code **)**(undefined8 **)(param_1 + 0x18))(uVar5 & 0xffffffff);
    if (local_50 != (void *)0x0) {
      local_48 = local_50;
      free(local_50);
    }
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
  }
  else {
    uVar6 = FUN_00753a74(0x20);
                    /* try { // try from 0033908c to 0033909b has its CatchHandler @ 00339118 */
    FUN_002fd2b0(&local_50,"Processor<StreamDataType>::process: Invalid input frame size.");
                    /* try { // try from 003390a0 to 003390d7 has its CatchHandler @ 003390f4 */
    FUN_00374ee0(uVar6,&local_50);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar6,PTR_PTR_007a1338,PTR_FUN_007a11f8);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033915c  FUN_0033915c =====

void FUN_0033915c(void *param_1)

{
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 00339180  FUN_00339180 =====

void FUN_00339180(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00339190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}


// ===== 00339198  FUN_00339198 =====

long FUN_00339198(long param_1,long param_2)

{
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_s_NSt6__ndk110shared_ptrIN5KRISP34_007a1400) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 003391b4  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 003391b8  FUN_003391b8 =====

void FUN_003391b8(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
                    /* try { // try from 003391f0 to 003391f7 has its CatchHandler @ 00339290 */
  plVar2 = (long *)FUN_00759c3c(0x88);
  puVar1 = PTR_DAT_007a12c8;
  plVar2[1] = 0;
  plVar2[2] = 0;
  *plVar2 = (long)(puVar1 + 0x10);
                    /* try { // try from 00339214 to 00339223 has its CatchHandler @ 00339278 */
  FUN_0033be5c(plVar2 + 3,param_2,1);
  plVar4 = (long *)param_1[1];
  *param_1 = (long)(plVar2 + 3);
  param_1[1] = (long)plVar2;
  if ((plVar4 != (long *)0x0) && (lVar3 = FUN_00755c50(0xffffffffffffffff,plVar4 + 1), lVar3 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_0071245c(plVar4);
  }
                    /* try { // try from 00339258 to 0033925f has its CatchHandler @ 00339274 */
  FUN_003392bc(param_1);
  return;
}


// ===== 003392bc  FUN_003392bc =====

void FUN_003392bc(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  uVar2 = (**(code **)(*(long *)*param_1 + 0x20))();
  plVar3 = (long *)FUN_00759c3c(0x30);
  puVar1 = PTR_DAT_007a12d0;
  plVar3[1] = 0;
  plVar3[2] = 0;
  *plVar3 = (long)(puVar1 + 0x10);
                    /* try { // try from 00339308 to 00339313 has its CatchHandler @ 003393d0 */
  FUN_00342408(plVar3 + 3,uVar2);
  plVar5 = (long *)param_1[3];
  param_1[2] = plVar3 + 3;
  param_1[3] = plVar3;
  if ((plVar5 != (long *)0x0) && (lVar4 = FUN_00755c50(0xffffffffffffffff,plVar5 + 1), lVar4 == 0))
  {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_0071245c(plVar5);
  }
  plVar3 = (long *)FUN_00759c3c(0x60);
  puVar1 = PTR_DAT_007a12d8;
  plVar5 = (long *)param_1[0x18];
  plVar3[1] = 0;
  plVar3[2] = 0;
  plVar3[0xb] = 0;
  param_1[0x18] = plVar3;
  *plVar3 = (long)(puVar1 + 0x10);
  plVar3[6] = 0;
  plVar3[5] = 0;
  plVar3[8] = 0;
  plVar3[7] = 0;
  plVar3[10] = 0;
  plVar3[9] = 0;
  plVar3[4] = 0;
  plVar3[3] = 0;
  param_1[0x17] = plVar3 + 3;
  if ((plVar5 != (long *)0x0) && (lVar4 = FUN_00755c50(0xffffffffffffffff,plVar5 + 1), lVar4 == 0))
  {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_0071245c(plVar5);
    return;
  }
  return;
}


// ===== 003393ec  FUN_003393ec =====

void FUN_003393ec(long param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x48);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x50) = pvVar1;
    free(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + 0x30);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x38) = pvVar1;
    free(pvVar1);
    return;
  }
  return;
}


// ===== 00339430  FUN_00339430 =====

void FUN_00339430(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
                    /* try { // try from 0033946c to 00339473 has its CatchHandler @ 00339510 */
  plVar2 = (long *)FUN_00759c3c(0x88);
  puVar1 = PTR_DAT_007a12c8;
  plVar2[1] = 0;
  plVar2[2] = 0;
  *plVar2 = (long)(puVar1 + 0x10);
                    /* try { // try from 00339490 to 003394a3 has its CatchHandler @ 003394f8 */
  FUN_0033bd64(plVar2 + 3,param_2,param_3,1);
  plVar4 = (long *)param_1[1];
  *param_1 = (long)(plVar2 + 3);
  param_1[1] = (long)plVar2;
  if ((plVar4 != (long *)0x0) && (lVar3 = FUN_00755c50(0xffffffffffffffff,plVar4 + 1), lVar3 == 0))
  {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_0071245c(plVar4);
  }
                    /* try { // try from 003394d8 to 003394df has its CatchHandler @ 003394f4 */
  FUN_003392bc(param_1);
  return;
}


// ===== 0033953c  FUN_0033953c =====

void FUN_0033953c(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  uVar4 = *(undefined8 *)(param_2 + 0x38);
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  uVar6 = *(undefined8 *)(param_2 + 0x48);
  uVar5 = *(undefined8 *)(param_2 + 0x40);
  param_1[1] = *(undefined8 *)(param_2 + 0x28);
  *param_1 = uVar2;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[5] = uVar6;
  param_1[4] = uVar5;
  FUN_0033a26c(param_1 + 6,param_2 + 0x50);
  uVar4 = *(undefined8 *)(param_2 + 0x88);
  uVar3 = *(undefined8 *)(param_2 + 0x80);
  uVar6 = *(undefined8 *)(param_2 + 0x98);
  uVar5 = *(undefined8 *)(param_2 + 0x90);
  uVar8 = *(undefined8 *)(param_2 + 0xa8);
  uVar7 = *(undefined8 *)(param_2 + 0xa0);
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0xb0);
  uVar2 = *(undefined8 *)(param_2 + 0xb8);
  lVar1 = *(long *)(param_2 + 0xc0);
  param_1[0xd] = uVar4;
  param_1[0xc] = uVar3;
  param_1[0xf] = uVar6;
  param_1[0xe] = uVar5;
  param_1[0x11] = uVar8;
  param_1[0x10] = uVar7;
  param_1[0x13] = uVar2;
  param_1[0x14] = lVar1;
  if (lVar1 != 0) {
    FUN_00755c20(1,lVar1 + 8);
  }
  return;
}


// ===== 003395a8  FUN_003395a8 =====

void FUN_003395a8(undefined8 param_1)

{
  FUN_003395cc();
  FUN_00339e50(param_1);
  return;
}


// ===== 003395cc  FUN_003395cc =====

void FUN_003395cc(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  void *pvVar4;
  size_t __n;
  ulong uVar5;
  long lVar6;
  ulong local_128;
  size_t local_120;
  void *local_118;
  undefined1 local_110 [8];
  undefined1 auStack_108 [8];
  char local_100 [8];
  long local_f8;
  undefined8 *local_f0;
  long *local_e8;
  ulong local_e0;
  undefined8 uStack_d8;
  void *local_d0;
  char *local_c0;
  long local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  long local_80 [4];
  long *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 003395f8 to 00339607 has its CatchHandler @ 00339cbc */
  FUN_003427e0(&local_a0,param_1[2],&DAT_007aae98);
                    /* try { // try from 00339608 to 00339617 has its CatchHandler @ 00339ca8 */
  uVar2 = FUN_00320aec(&local_a0,"fileUid");
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = (void *)0x0;
                    /* try { // try from 00339620 to 00339627 has its CatchHandler @ 00339c8c */
  FUN_00321278(uVar2,&local_e0);
                    /* try { // try from 00339630 to 00339637 has its CatchHandler @ 00339c88 */
  FUN_00313038(&uStack_98,(ulong)local_a0 & 0xff);
                    /* try { // try from 00339644 to 0033964f has its CatchHandler @ 00339c7c */
  (**(code **)(*(long *)*param_1 + 0x10))(&local_f0,(long *)*param_1,&local_e0);
  local_60 = (long *)0x0;
                    /* try { // try from 0033965c to 00339673 has its CatchHandler @ 00339c40 */
  FUN_00320c28(local_100,*local_f0,local_f0[1],local_80,1,0);
  if (local_60 == local_80) {
    lVar6 = 0x20;
    plVar3 = local_80;
LAB_00339694:
    (**(code **)(*plVar3 + lVar6))();
  }
  else if (local_60 != (long *)0x0) {
    lVar6 = 0x28;
    plVar3 = local_60;
    goto LAB_00339694;
  }
                    /* try { // try from 003396a0 to 00339757 has its CatchHandler @ 00339cf4 */
  uVar2 = FUN_00320aec(local_100,"skipFrame");
  uVar2 = FUN_00320aec(uVar2,"threshold");
  local_a0 = (char *)((ulong)local_a0._4_4_ << 0x20);
  FUN_0032c290(uVar2,&local_a0);
  *(undefined4 *)(param_1 + 4) = (undefined4)local_a0;
  uVar2 = FUN_00320aec(local_100,"skipFrame");
  uVar2 = FUN_00320aec(uVar2,&DAT_001d3754);
  local_a0 = (char *)((ulong)local_a0 & 0xffffffffffffff00);
  FUN_00312e94(uVar2,&local_a0);
  *(undefined1 *)((long)param_1 + 0x24) = (undefined1)local_a0;
  uVar2 = FUN_00320aec(local_100,"energyThresholdCut");
  uVar2 = FUN_00320aec(uVar2,"cutRefEn");
  local_a0 = (char *)((ulong)local_a0 & 0xffffffff00000000);
  FUN_0032c290(uVar2,&local_a0);
  *(undefined4 *)(param_1 + 5) = (undefined4)local_a0;
  uVar2 = FUN_00320aec(local_100,"energyThresholdCut");
  uVar2 = FUN_00320aec(uVar2,"enable");
  local_a0 = (char *)((ulong)local_a0 & 0xffffffffffffff00);
  FUN_00312e94(uVar2,&local_a0);
  *(undefined1 *)((long)param_1 + 0x2c) = (undefined1)local_a0;
                    /* try { // try from 00339760 to 0033977b has its CatchHandler @ 00339cd4 */
  uVar2 = FUN_00320aec(local_100,"rescaleRange");
  FUN_0032768c(local_110,uVar2);
                    /* try { // try from 0033977c to 0033984b has its CatchHandler @ 00339d00 */
  uVar2 = FUN_00320aec(local_110,"filterRangeStart");
  local_a0 = (char *)0x0;
  FUN_0032c40c(uVar2,&local_a0);
  param_1[6] = local_a0;
  uVar2 = FUN_00320aec(local_110,"filterRangeEnd");
  local_a0 = (char *)0x0;
  FUN_0032c40c(uVar2,&local_a0);
  param_1[7] = local_a0;
  uVar2 = FUN_00320aec(local_110,"coefficientNumber");
  local_a0 = (char *)((ulong)local_a0 & 0xffffffff00000000);
  FUN_0032f734(uVar2,&local_a0);
  *(undefined4 *)(param_1 + 8) = (undefined4)local_a0;
  uVar2 = FUN_00320aec(local_110,&DAT_001de19b);
  local_a0 = (char *)((ulong)local_a0 & 0xffffffff00000000);
  FUN_0032c290(uVar2,&local_a0);
  *(undefined4 *)((long)param_1 + 0x44) = (undefined4)local_a0;
  uVar2 = FUN_00320aec(local_110,&DAT_001b7677);
  local_a0 = (char *)((ulong)local_a0 & 0xffffffff00000000);
  FUN_0032c290(uVar2,&local_a0);
  *(undefined4 *)(param_1 + 9) = (undefined4)local_a0;
  uVar2 = FUN_00320aec(local_110,"rescale");
  local_a0 = (char *)((ulong)local_a0 & 0xffffffffffffff00);
  FUN_00312e94(uVar2,&local_a0);
  *(undefined1 *)((long)param_1 + 0x4c) = (undefined1)local_a0;
                    /* try { // try from 00339854 to 0033986f has its CatchHandler @ 00339cd0 */
  uVar2 = FUN_00320aec(local_100,"normalizationParams");
  uVar2 = FUN_00320aec(uVar2,"weight_MU");
  local_a0 = (char *)0x0;
  uStack_98 = 0;
  local_90 = 0;
                    /* try { // try from 00339878 to 0033987f has its CatchHandler @ 00339c24 */
  FUN_0032ee10(uVar2,&local_a0);
  pvVar4 = (void *)param_1[10];
  if (pvVar4 != (void *)0x0) {
    param_1[0xb] = pvVar4;
    free(pvVar4);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
  }
  param_1[0xb] = uStack_98;
  param_1[10] = local_a0;
  param_1[0xc] = local_90;
                    /* try { // try from 003398b0 to 003398cb has its CatchHandler @ 00339ccc */
  uVar2 = FUN_00320aec(local_100,"normalizationParams");
  uVar2 = FUN_00320aec(uVar2,"weight_SD");
  local_a0 = (char *)0x0;
  uStack_98 = 0;
  local_90 = 0;
                    /* try { // try from 003398d4 to 003398db has its CatchHandler @ 00339c20 */
  FUN_0032ee10(uVar2,&local_a0);
  pvVar4 = (void *)param_1[0xd];
  if (pvVar4 != (void *)0x0) {
    param_1[0xe] = pvVar4;
    free(pvVar4);
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  param_1[0xe] = uStack_98;
  param_1[0xd] = local_a0;
  param_1[0xf] = local_90;
                    /* try { // try from 00339908 to 003399d7 has its CatchHandler @ 00339d00 */
  uVar2 = FUN_00320aec(local_100,"workingSampleRate");
  local_a0 = (char *)0x0;
  FUN_0032c40c(uVar2,&local_a0);
  param_1[0x10] = local_a0;
  uVar2 = FUN_00320aec(local_100,"workingFrameDuration");
  local_a0 = (char *)0x0;
  FUN_0032c40c(uVar2,&local_a0);
  param_1[0x11] = local_a0;
  uVar2 = FUN_00320aec(local_100,&DAT_001c2bdc);
  local_a0 = (char *)0x0;
  FUN_0032c40c(uVar2,&local_a0);
  param_1[0x12] = local_a0;
  uVar2 = FUN_00320aec(local_100,"compressRate");
  local_a0 = (char *)0x0;
  FUN_0032c40c(uVar2,&local_a0);
  param_1[0x13] = local_a0;
  uVar2 = FUN_00320aec(local_100,"lpsEps");
  local_a0 = (char *)((ulong)local_a0 & 0xffffffff00000000);
  FUN_0032c290(uVar2,&local_a0);
  *(undefined4 *)(param_1 + 0x14) = (undefined4)local_a0;
  uVar2 = FUN_00320aec(local_100,"frameCount");
  local_a0 = (char *)0x0;
  FUN_0032c40c(uVar2,&local_a0);
  param_1[0x15] = local_a0;
  __n = strlen("windowFuncName");
  if (0xfffffffffffffff7 < __n) {
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 00339c10 to 00339c17 has its CatchHandler @ 00339cc8 */
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_128);
    }
    goto LAB_00339e48;
  }
  if (__n < 0x17) {
    pvVar4 = (void *)((ulong)&local_128 | 1);
    local_128 = CONCAT71(local_128._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_00339a48;
  }
  else {
    uVar5 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar5 = __n | 7;
    }
                    /* try { // try from 00339a30 to 00339a37 has its CatchHandler @ 00339cc8 */
    pvVar4 = (void *)FUN_00759c3c(uVar5 + 1);
    local_128 = uVar5 + 1 | 1;
    local_120 = __n;
    local_118 = pvVar4;
LAB_00339a48:
    memcpy(pvVar4,"windowFuncName",__n);
  }
  local_a0 = local_100;
  *(undefined1 *)((long)pvVar4 + __n) = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_88 = 0x8000000000000000;
  if (local_100[0] == '\x01') {
                    /* try { // try from 00339aa8 to 00339b2b has its CatchHandler @ 00339cd8 */
    uStack_98 = FUN_0032c168(local_f8,&local_128);
    if (local_100[0] != '\x01') goto LAB_00339b00;
LAB_00339ad0:
    local_a8 = 0x8000000000000000;
    local_b0 = 0;
    local_b8 = local_f8 + 8;
  }
  else {
    if (local_100[0] == '\x02') {
      local_90 = *(undefined8 *)(local_f8 + 8);
    }
    else {
      local_88 = 1;
      if (local_100[0] == '\x01') goto LAB_00339ad0;
LAB_00339b00:
      local_b0 = 0;
      local_b8 = 0;
      if (local_100[0] != '\x02') {
        local_a8 = 1;
        goto LAB_00339b20;
      }
    }
    local_a8 = 0x8000000000000000;
    local_b8 = 0;
    local_b0 = *(undefined8 *)(local_f8 + 8);
  }
LAB_00339b20:
  local_c0 = local_100;
  uVar5 = FUN_0032e628(&local_a0,&local_c0);
  if ((uVar5 & 1) == 0) {
                    /* try { // try from 00339bb8 to 00339bc7 has its CatchHandler @ 00339cd8 */
    uVar2 = FUN_0032e488(&local_a0);
    FUN_003374b4(uVar2,&local_c0);
    *(undefined4 *)(param_1 + 0x16) = local_c0._0_4_;
  }
  else {
    *(undefined4 *)(param_1 + 0x16) = 0;
  }
  if ((local_128 & 1) != 0) {
    free(local_118);
  }
                    /* try { // try from 00339b50 to 00339b57 has its CatchHandler @ 00339c1c */
  FUN_00313038(auStack_108,local_110[0]);
                    /* try { // try from 00339b60 to 00339b67 has its CatchHandler @ 00339c18 */
  FUN_00313038(&local_f8,local_100[0]);
  if ((local_e8 != (long *)0x0) &&
     (lVar6 = FUN_00755c50(0xffffffffffffffff,local_e8 + 1), lVar6 == 0)) {
    (**(code **)(*local_e8 + 0x10))(local_e8);
    FUN_0071245c(local_e8);
  }
  if ((local_e0 & 1) != 0) {
    free(local_d0);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_00339e48:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00339e50  FUN_00339e50 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00339e50(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined1 local_b0;
  undefined7 uStack_af;
  long *local_a8;
  ulong local_a0;
  undefined8 uStack_98;
  void *local_90;
  ulong local_88;
  undefined8 uStack_80;
  void *local_78;
  ulong local_70;
  undefined8 uStack_68;
  void *local_60;
  undefined1 local_58 [8];
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00339e7c to 00339e8f has its CatchHandler @ 0033a110 */
  FUN_00343168(local_58,param_1[2],&DAT_007aaeb0);
                    /* try { // try from 00339e90 to 00339e9f has its CatchHandler @ 0033a104 */
  uVar4 = FUN_00320aec(local_58,"engType");
  local_70 = 0;
  uStack_68 = 0;
  local_60 = (void *)0x0;
                    /* try { // try from 00339ea8 to 00339eaf has its CatchHandler @ 0033a0f0 */
  FUN_00321278(uVar4,&local_70);
                    /* try { // try from 00339eb0 to 00339ebf has its CatchHandler @ 0033a0e4 */
  uVar4 = FUN_00320aec(local_58,"deviceToRun");
  local_88 = 0;
  uStack_80 = 0;
  local_78 = (void *)0x0;
                    /* try { // try from 00339ec8 to 00339ecf has its CatchHandler @ 0033a0d0 */
  FUN_00321278(uVar4,&local_88);
                    /* try { // try from 00339ed0 to 00339ee7 has its CatchHandler @ 0033a11c */
  uVar3 = FUN_0034b7d0(&local_70);
  *(undefined4 *)param_1[0x17] = uVar3;
  uVar3 = FUN_0034b9d4(&local_88);
  *(undefined4 *)(param_1[0x17] + 0x40) = uVar3;
                    /* try { // try from 00339ef4 to 00339f03 has its CatchHandler @ 0033a0cc */
  FUN_003436ac(&local_b0,param_1[2],&DAT_007aaeb0,&DAT_007aaec8);
                    /* try { // try from 00339f04 to 00339f13 has its CatchHandler @ 0033a0b8 */
  uVar4 = FUN_00320aec(&local_b0,"fileUid");
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = (void *)0x0;
                    /* try { // try from 00339f1c to 00339f23 has its CatchHandler @ 0033a09c */
  FUN_00321278(uVar4,&local_a0);
                    /* try { // try from 00339f2c to 00339f33 has its CatchHandler @ 0033a098 */
  FUN_00313038(&local_a8,local_b0);
                    /* try { // try from 00339f38 to 00339f43 has its CatchHandler @ 0033a07c */
  FUN_007139b0(param_1[0x17] + 8,&local_a0);
                    /* try { // try from 00339f50 to 00339f5b has its CatchHandler @ 0033a078 */
  (**(code **)(*(long *)*param_1 + 0x10))(&local_b0,(long *)*param_1,&local_a0);
  plVar2 = local_a8;
  lVar6 = param_1[0x17];
  if (local_a8 != (long *)0x0) {
    FUN_00755c20(1,local_a8 + 1);
  }
  plVar5 = *(long **)(lVar6 + 0x38);
  *(ulong *)(lVar6 + 0x30) = CONCAT71(uStack_af,local_b0);
  *(long **)(lVar6 + 0x38) = plVar2;
  if ((plVar5 != (long *)0x0) && (lVar6 = FUN_00755c50(0xffffffffffffffff,plVar5 + 1), lVar6 == 0))
  {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_0071245c(plVar5);
  }
  if ((local_a8 == (long *)0x0) ||
     (lVar6 = FUN_00755c50(0xffffffffffffffff,local_a8 + 1), lVar6 != 0)) {
    *(undefined4 *)(param_1[0x17] + 0x44) = 1;
  }
  else {
    (**(code **)(*local_a8 + 0x10))(local_a8);
    FUN_0071245c(local_a8);
    *(undefined4 *)(param_1[0x17] + 0x44) = 1;
  }
  if ((local_a0 & 1) != 0) {
    free(local_90);
  }
  if ((local_88 & 1) != 0) {
    free(local_78);
  }
  if ((local_70 & 1) != 0) {
    free(local_60);
  }
                    /* try { // try from 00339ff4 to 00339ffb has its CatchHandler @ 0033a074 */
  FUN_00313038(auStack_50,local_58[0]);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0033a26c  FUN_0033a26c =====

void FUN_0033a26c(undefined8 *param_1,undefined8 *param_2)

{
  size_t sVar1;
  void *pvVar2;
  void *__dest;
  undefined8 uVar3;
  undefined8 *__src;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  __src = (undefined8 *)*param_2;
  sVar1 = param_2[1] - (long)__src;
  if (sVar1 != 0) {
    if ((long)sVar1 < 0) {
                    /* try { // try from 0033a318 to 0033a31f has its CatchHandler @ 0033a34c */
      FUN_002febf0(param_1);
      goto LAB_0033a320;
    }
                    /* try { // try from 0033a2a0 to 0033a2a7 has its CatchHandler @ 0033a34c */
    pvVar2 = (void *)FUN_00759c3c(sVar1);
    *param_1 = pvVar2;
    param_1[1] = pvVar2;
    param_1[2] = (long)pvVar2 + sVar1;
    memcpy(pvVar2,__src,sVar1);
    param_1[1] = (long)pvVar2 + sVar1;
  }
  __src = param_1 + 3;
  *__src = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  pvVar2 = (void *)param_2[3];
  sVar1 = param_2[4] - (long)pvVar2;
  if (sVar1 != 0) {
    if ((long)sVar1 < 0) {
LAB_0033a320:
                    /* try { // try from 0033a320 to 0033a327 has its CatchHandler @ 0033a328 */
      uVar3 = FUN_002febf0(__src);
                    /* catch() { ... } // from try @ 0033a2e0 with catch @ 0033a328
                       catch() { ... } // from try @ 0033a320 with catch @ 0033a328 */
      pvVar2 = (void *)*__src;
      if (pvVar2 != (void *)0x0) {
        param_1[4] = pvVar2;
        free(pvVar2);
      }
      pvVar2 = (void *)*param_1;
      if (pvVar2 != (void *)0x0) {
        param_1[1] = pvVar2;
        free(pvVar2);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00755eac(uVar3);
    }
                    /* try { // try from 0033a2e0 to 0033a2e7 has its CatchHandler @ 0033a328 */
    __dest = (void *)FUN_00759c3c(sVar1);
    param_1[3] = __dest;
    param_1[4] = __dest;
    param_1[5] = (long)__dest + sVar1;
    memcpy(__dest,pvVar2,sVar1);
    param_1[4] = (long)__dest + sVar1;
  }
  return;
}


// ===== 0033a36c  _INIT_12 =====

void _INIT_12(void)

{
  ulong uVar1;
  undefined *puVar2;
  size_t sVar3;
  void *pvVar4;
  
  sVar3 = strlen("fpConfig");
  if (0xfffffffffffffff7 < sVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_002fb400(&DAT_007aae98);
  }
  if (sVar3 < 0x17) {
    pvVar4 = (void *)((long)&DAT_007aae98 + 1);
    DAT_007aae98 = CONCAT71(DAT_007aae98._1_7_,(char)((int)sVar3 << 1));
    if (sVar3 != 0) goto LAB_0033a3ec;
  }
  else {
    uVar1 = (sVar3 & 0xfffffffffffffff8) + 8;
    if ((sVar3 | 7) != 0x17) {
      uVar1 = sVar3 | 7;
    }
    pvVar4 = (void *)FUN_00759c3c(uVar1 + 1);
    DAT_007aae98 = uVar1 + 1 | 1;
    DAT_007aaea0 = sVar3;
    DAT_007aaea8 = pvVar4;
LAB_0033a3ec:
    memcpy(pvVar4,"fpConfig",sVar3);
  }
  *(undefined1 *)((long)pvVar4 + sVar3) = 0;
  __cxa_atexit(PTR_FUN_007a13a0,&DAT_007aae98,&PTR_LOOP_0075ec90);
  sVar3 = strlen("vadInferConfig");
  if (0xfffffffffffffff7 < sVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_002fb400(&DAT_007aaeb0);
  }
  if (sVar3 < 0x17) {
    pvVar4 = (void *)((long)&DAT_007aaeb0 + 1);
    DAT_007aaeb0 = CONCAT71(DAT_007aaeb0._1_7_,(char)((int)sVar3 << 1));
    if (sVar3 != 0) goto LAB_0033a490;
  }
  else {
    uVar1 = (sVar3 & 0xfffffffffffffff8) + 8;
    if ((sVar3 | 7) != 0x17) {
      uVar1 = sVar3 | 7;
    }
    pvVar4 = (void *)FUN_00759c3c(uVar1 + 1);
    DAT_007aaeb0 = uVar1 + 1 | 1;
    DAT_007aaeb8 = sVar3;
    DAT_007aaec0 = pvVar4;
LAB_0033a490:
    memcpy(pvVar4,"vadInferConfig",sVar3);
  }
  *(undefined1 *)((long)pvVar4 + sVar3) = 0;
  __cxa_atexit(PTR_FUN_007a13a0,&DAT_007aaeb0,&PTR_LOOP_0075ec90);
  sVar3 = strlen("vadModel");
  if (0xfffffffffffffff7 < sVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_002fb400(&DAT_007aaec8);
  }
  if (sVar3 < 0x17) {
    pvVar4 = (void *)((long)&DAT_007aaec8 + 1);
    DAT_007aaec8 = CONCAT71(DAT_007aaec8._1_7_,(char)((int)sVar3 << 1));
    if (sVar3 == 0) goto LAB_0033a548;
  }
  else {
    uVar1 = (sVar3 & 0xfffffffffffffff8) + 8;
    if ((sVar3 | 7) != 0x17) {
      uVar1 = sVar3 | 7;
    }
    pvVar4 = (void *)FUN_00759c3c(uVar1 + 1);
    DAT_007aaec8 = uVar1 + 1 | 1;
    DAT_007aaed0 = sVar3;
    DAT_007aaed8 = pvVar4;
  }
  memcpy(pvVar4,"vadModel",sVar3);
LAB_0033a548:
  puVar2 = PTR_FUN_007a13a0;
  *(undefined1 *)((long)pvVar4 + sVar3) = 0;
  __cxa_atexit(puVar2,&DAT_007aaec8,&PTR_LOOP_0075ec90);
  return;
}


// ===== 0033a598  FUN_0033a598 =====

void FUN_0033a598(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,long *param_4)

{
  undefined4 uVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  size_t sVar10;
  long lVar11;
  undefined8 *unaff_x26;
  long lVar12;
  double dVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ulong local_80;
  long *plStack_78;
  void *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar15 = param_2[4];
  uVar14 = param_2[7];
  uVar5 = param_2[6];
  uVar17 = param_2[1];
  uVar16 = *param_2;
  uVar19 = param_2[3];
  uVar18 = param_2[2];
  param_1[5] = param_2[5];
  param_1[4] = uVar15;
  param_1[7] = uVar14;
  param_1[6] = uVar5;
  param_1[1] = uVar17;
  *param_1 = uVar16;
  param_1[3] = uVar19;
  param_1[2] = uVar18;
  FUN_0036c290(param_1 + 8);
  uVar16 = param_3[3];
  uVar15 = param_3[2];
  uVar14 = param_3[5];
  uVar5 = param_3[4];
  uVar17 = *param_3;
  param_1[0xb] = param_3[1];
  param_1[10] = uVar17;
  param_1[0xd] = uVar16;
  param_1[0xc] = uVar15;
  param_1[0xf] = uVar14;
  param_1[0xe] = uVar5;
                    /* try { // try from 0033a600 to 0033a60b has its CatchHandler @ 0033ab5c */
  FUN_0033a26c(param_1 + 0x10,param_3 + 6);
  uVar18 = param_3[0xf];
  uVar17 = param_3[0xe];
  uVar14 = param_3[0x11];
  uVar5 = param_3[0x10];
  uVar16 = param_3[0xd];
  uVar15 = param_3[0xc];
  uVar1 = *(undefined4 *)(param_3 + 0x12);
  plVar8 = param_1 + 0x1e;
  *plVar8 = 0;
  param_1[0x19] = uVar18;
  param_1[0x18] = uVar17;
  param_1[0x1b] = uVar14;
  param_1[0x1a] = uVar5;
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  param_1[0x17] = uVar16;
  param_1[0x16] = uVar15;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  if ((ulong)(param_1[0x18] * 10) < 0x3fffffffffffffff) {
    uVar9 = param_1[0x18] * 10 | 1;
    sVar10 = uVar9 * 4;
                    /* try { // try from 0033a658 to 0033a65f has its CatchHandler @ 0033ac18 */
    pvVar3 = (void *)FUN_00759c3c(sVar10);
    param_1[0x1e] = pvVar3;
    param_1[0x20] = (void *)((long)pvVar3 + uVar9 * 4);
    memset(pvVar3,0,sVar10);
    param_1[0x1f] = (void *)((long)pvVar3 + sVar10);
    param_1[0x25] = 0;
    param_1[0x22] = 0;
    param_1[0x21] = 0;
    param_1[0x24] = 0;
    param_1[0x23] = 0;
                    /* try { // try from 0033a694 to 0033a69b has its CatchHandler @ 0033ab54 */
    pvVar3 = (void *)FUN_00759c3c(sVar10);
    param_1[0x23] = pvVar3;
    param_1[0x25] = (void *)((long)pvVar3 + uVar9 * 4);
    memset(pvVar3,0,sVar10);
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    param_1[0x24] = (void *)((long)pvVar3 + sVar10);
                    /* try { // try from 0033a6cc to 0033a6d3 has its CatchHandler @ 0033ab4c */
    FUN_0033ac34(param_1 + 0x28,param_1[4],*(undefined4 *)(param_3 + 0x12));
                    /* try { // try from 0033a6d8 to 0033a6e3 has its CatchHandler @ 0033ab44 */
    FUN_0033ac34(param_1 + 0x2b,param_1[4],3);
    dVar13 = (double)NEON_ucvtf(param_2[5]);
                    /* try { // try from 0033a704 to 0033a70f has its CatchHandler @ 0033ab3c */
    FUN_00345ff4(*(undefined4 *)(param_3 + 1),param_1 + 0x2e,10,(long)(4000.0 / dVar13));
    *(undefined1 *)(param_1 + 0x3b) = *(undefined1 *)((long)param_3 + 0xc);
                    /* try { // try from 0033a71c to 0033a727 has its CatchHandler @ 0033ab34 */
    FUN_003460fc(param_1 + 0x3c,param_1[4],1);
    uVar5 = param_3[2];
    param_1[0x40] = param_3[3];
    param_1[0x3f] = uVar5;
    uVar9 = 0;
    if (param_3[0xe] != 0) {
      uVar9 = (ulong)(param_2[3] * 3) / (ulong)param_3[0xe];
    }
                    /* try { // try from 0033a74c to 0033a75f has its CatchHandler @ 0033ab2c */
    FUN_00349b60(*(undefined4 *)((long)param_3 + 0x24),
                 *(float *)(param_3 + 5) * *(float *)(param_3 + 5),0,0,param_1 + 0x41,10,uVar9);
    uVar9 = param_1[4];
    unaff_x26 = param_1 + 0x4f;
    param_1[0x4f] = 0;
    param_1[0x51] = 0;
    param_1[0x50] = 0;
    if (0x3ffffffffffffffd < uVar9) goto LAB_0033aa44;
    lVar6 = (uVar9 >> 1) + 1;
    sVar10 = lVar6 * 8;
                    /* try { // try from 0033a78c to 0033a793 has its CatchHandler @ 0033ab88 */
    pvVar3 = (void *)FUN_00759c3c(sVar10);
    param_1[0x4f] = pvVar3;
    param_1[0x51] = (void *)((long)pvVar3 + lVar6 * 8);
    memset(pvVar3,0,sVar10);
    param_1[0x52] = 0;
    param_1[0x54] = 0;
    param_1[0x53] = 0;
    lVar6 = (param_1[0xd] - param_1[0xc]) * (uVar9 * 5 + 5);
    plVar7 = param_1 + 0x52;
    param_1[0x50] = (void *)((long)pvVar3 + sVar10);
    uVar9 = lVar6 + 1;
    if (lVar6 != -1) {
      if (uVar9 >> 0x3e != 0) {
        if (*(long *)(lVar2 + 0x28) != local_68) goto LAB_0033ac14;
                    /* try { // try from 0033aad0 to 0033aad7 has its CatchHandler @ 0033ab10 */
        uVar5 = FUN_002febf0(plVar7);
                    /* catch() { ... } // from try @ 0033aa80 with catch @ 0033aad8 */
        if ((local_80 & 1) == 0) {
          if ((int)uVar9 != 0) {
LAB_0033ab00:
            FUN_00753b60(pvVar3);
          }
        }
        else {
          free(local_70);
          if ((uVar9 & 1) != 0) goto LAB_0033ab00;
        }
        FUN_00317948(param_1 + 0x57);
        FUN_00330fc8(plVar7);
        pvVar3 = (void *)*unaff_x26;
        if (pvVar3 != (void *)0x0) {
          param_1[0x50] = pvVar3;
          free(pvVar3);
        }
        FUN_00331070(param_1 + 0x41);
        FUN_0034653c(param_1 + 0x3c);
        FUN_003310dc(param_1 + 0x2e);
        pvVar3 = (void *)param_1[0x2b];
        if (pvVar3 != (void *)0x0) {
          param_1[0x2c] = pvVar3;
          free(pvVar3);
        }
        pvVar3 = (void *)param_1[0x28];
        if (pvVar3 != (void *)0x0) {
          param_1[0x29] = pvVar3;
          free(pvVar3);
        }
        FUN_00330fc8(param_1 + 0x23);
        FUN_00330fc8(plVar8);
        FUN_003393ec(param_1 + 10);
        FUN_00319230(param_1 + 8);
        if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_00755eac(uVar5);
        }
        goto LAB_0033ac14;
      }
      sVar10 = uVar9 * 4;
                    /* try { // try from 0033a7f0 to 0033a7f7 has its CatchHandler @ 0033ab10 */
      pvVar3 = (void *)FUN_00759c3c(sVar10);
      param_1[0x52] = pvVar3;
      param_1[0x54] = (void *)((long)pvVar3 + uVar9 * 4);
      memset(pvVar3,0,sVar10);
      param_1[0x53] = (void *)((long)pvVar3 + sVar10);
    }
    param_1[0x56] = 0;
    param_1[0x55] = 0;
    param_1[0x58] = 0;
    param_1[0x57] = 0;
    if (*param_4 != 0) {
                    /* try { // try from 0033a838 to 0033a83b has its CatchHandler @ 0033ab0c */
      lVar4 = FUN_00343f1c(param_1[2],param_1[5],param_1[3]);
      pvVar3 = (void *)param_1[0x23];
      lVar6 = param_1[0x27];
      if ((ulong)(param_1[0x24] - (long)pvVar3 >> 2) < (ulong)(lVar6 + lVar4)) {
        memcpy(pvVar3,(void *)((long)pvVar3 + param_1[0x26] * 4),(lVar6 - param_1[0x26]) * 4);
        lVar6 = param_1[0x26];
        param_1[0x26] = 0;
        lVar6 = param_1[0x27] - lVar6;
      }
      if (lVar4 != 0) {
        memset((void *)(param_1[0x23] + lVar6 * 4),0,lVar4 << 2);
      }
      pvVar3 = (void *)param_1[0x1e];
      lVar11 = param_1[0x18];
      lVar12 = param_1[0x22];
      param_1[0x27] = lVar6 + lVar4;
      if ((ulong)(param_1[0x1f] - (long)pvVar3 >> 2) < (ulong)(lVar12 + lVar11)) {
        memcpy(pvVar3,(void *)((long)pvVar3 + param_1[0x21] * 4),(lVar12 - param_1[0x21]) * 4);
        lVar12 = param_1[0x21];
        param_1[0x21] = 0;
        lVar12 = param_1[0x22] - lVar12;
      }
      if (lVar11 != 0) {
        memset((void *)(*plVar8 + lVar12 * 4),0,lVar11 << 2);
      }
      lVar6 = param_1[0x56];
      pvVar3 = (void *)param_1[0x52];
      uVar9 = (ulong)((param_1[0xd] - param_1[0xc]) * param_1[0x1b] * (param_1[0x19] + 2)) >>
              (param_1[0x19] + 1 & 0x3f);
      param_1[0x22] = lVar12 + lVar11;
      if ((ulong)(param_1[0x53] - (long)pvVar3 >> 2) < uVar9 + lVar6) {
        memcpy(pvVar3,(void *)((long)pvVar3 + param_1[0x55] * 4),(lVar6 - param_1[0x55]) * 4);
        lVar6 = param_1[0x55];
        param_1[0x55] = 0;
        lVar6 = param_1[0x56] - lVar6;
      }
      if (uVar9 != 0) {
        memset((void *)(*plVar7 + lVar6 * 4),0,uVar9 << 2);
      }
      param_1[0x56] = lVar6 + uVar9;
                    /* try { // try from 0033a978 to 0033a987 has its CatchHandler @ 0033ab64 */
      uVar5 = FUN_0034b7c4();
      FUN_0034ad20(&local_80,uVar5,param_4);
      plVar8 = plStack_78;
      uVar9 = local_80;
      plVar7 = (long *)param_1[0x58];
      local_80 = 0;
      plStack_78 = (long *)0x0;
      param_1[0x58] = plVar8;
      param_1[0x57] = uVar9;
      if ((plVar7 != (long *)0x0) &&
         (lVar6 = FUN_00755c50(0xffffffffffffffff,plVar7 + 1), lVar6 == 0)) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        FUN_0071245c(plVar7);
      }
      plVar8 = plStack_78;
      if ((plStack_78 != (long *)0x0) &&
         (lVar6 = FUN_00755c50(0xffffffffffffffff,plStack_78 + 1), lVar6 == 0)) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        FUN_0071245c(plVar8);
      }
      if (*(long *)(lVar2 + 0x28) == local_68) {
        return;
      }
      goto LAB_0033ac14;
    }
  }
  else {
    if (*(long *)(lVar2 + 0x28) != local_68) goto LAB_0033ac14;
                    /* try { // try from 0033aa3c to 0033aa43 has its CatchHandler @ 0033ac18 */
    FUN_002febf0(plVar8);
LAB_0033aa44:
    if (*(long *)(lVar2 + 0x28) != local_68) goto LAB_0033ac14;
                    /* try { // try from 0033aa58 to 0033aa5f has its CatchHandler @ 0033ab88 */
    FUN_0031921c(unaff_x26);
  }
  uVar5 = FUN_00753a74(0x20);
                    /* try { // try from 0033aa6c to 0033aa7b has its CatchHandler @ 0033aafc */
  FUN_002fd2b0(&local_80,
               "MainCleaner::MainCleaner: ExecutableNetworkConfiguration pointer cannot be null");
                    /* try { // try from 0033aa80 to 0033aabb has its CatchHandler @ 0033aad8 */
  FUN_00374df0(uVar5,&local_80);
  if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(uVar5,PTR_PTR_007a1228,PTR_FUN_007a11f8);
  }
LAB_0033ac14:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033ac34  FUN_0033ac34 =====

void FUN_0033ac34(undefined8 *param_1,ulong param_2,int param_3)

{
  long lVar1;
  void *__s;
  undefined8 uVar2;
  long lVar3;
  uint unaff_w21;
  size_t __n;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_2 == 0) {
    uVar2 = FUN_00753a74(0x20);
                    /* try { // try from 0033ad0c to 0033ad1b has its CatchHandler @ 0033ad94 */
    FUN_002fd2b0(local_60,"generateWindowingVector: Window size cannot be zero");
                    /* try { // try from 0033ad20 to 0033ad57 has its CatchHandler @ 0033ad70 */
    FUN_00374ee0(uVar2,local_60);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar2,PTR_PTR_007a1338,PTR_FUN_007a11f8);
    }
    goto LAB_0033ade0;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 >> 0x3e == 0) {
    __n = param_2 * 4;
                    /* try { // try from 0033ac7c to 0033ac83 has its CatchHandler @ 0033adb0 */
    __s = (void *)FUN_00759c3c(__n);
    *param_1 = __s;
    param_1[2] = (void *)((long)__s + param_2 * 4);
    memset(__s,0,__n);
    lVar3 = (long)__n >> 2;
    param_1[1] = (void *)((long)__s + __n);
    if (param_3 == 3) {
                    /* try { // try from 0033acb4 to 0033acd7 has its CatchHandler @ 0033ada4 */
      FUN_0034a9a8(local_60,lVar3,__s,lVar3);
    }
    else {
      FUN_0034a6ec(local_60,lVar3,__s,lVar3);
    }
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
    goto LAB_0033ade0;
  }
  if (*(long *)(lVar1 + 0x28) != local_48) goto LAB_0033ade0;
                    /* try { // try from 0033ad68 to 0033ad6f has its CatchHandler @ 0033adb0 */
  uVar2 = FUN_002febf0(param_1);
                    /* catch() { ... } // from try @ 0033ad20 with catch @ 0033ad70 */
  if ((local_60[0] & 1) == 0) {
    if (unaff_w21 != 0) {
LAB_0033ad98:
      FUN_00753b60(param_1);
    }
  }
  else {
    free(local_50);
    if ((unaff_w21 & 1) != 0) goto LAB_0033ad98;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
    FUN_00755eac(uVar2);
  }
LAB_0033ade0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033ade4  FUN_0033ade4 =====

ulong FUN_0033ade4(long param_1,long *param_2)

{
  float *pfVar1;
  void *__src;
  long lVar2;
  float fVar3;
  bool bVar4;
  void *__dest;
  undefined8 uVar5;
  float *pfVar6;
  ulong uVar7;
  long lVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  ulong uVar13;
  float *pfVar14;
  ulong uVar15;
  size_t __n;
  ulong uVar16;
  long lVar17;
  long lVar18;
  float fVar19;
  float fVar20;
  byte local_70;
  char local_6f [8];
  char acStack_67 [5];
  char cStack_62;
  char cStack_61;
  char cStack_60;
  char acStack_5f [5];
  char cStack_5a;
  undefined1 uStack_59;
  long local_58;
  float *pfVar12;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  pfVar6 = (float *)*param_2;
  pfVar14 = (float *)param_2[1];
  if (pfVar6 == pfVar14) {
    uVar5 = FUN_00753a74(0x20);
                    /* try { // try from 0033b16c to 0033b17b has its CatchHandler @ 0033b1f8 */
    FUN_002fd2b0(&local_70,"MainCleaner::cleanNoise: Data chunk is empty");
                    /* try { // try from 0033b180 to 0033b1b7 has its CatchHandler @ 0033b1d4 */
    FUN_00374ee0(uVar5,&local_70);
    if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar5,PTR_PTR_007a1338,PTR_FUN_007a11f8);
    }
    goto LAB_0033b21c;
  }
  lVar17 = (long)pfVar14 - (long)pfVar6;
  uVar16 = lVar17 >> 2;
  if (*(char *)(param_1 + 0x54) == '\0') {
    bVar4 = false;
  }
  else {
    pfVar9 = pfVar6 + 1;
    fVar19 = *pfVar6;
    pfVar10 = pfVar6;
    pfVar11 = pfVar9;
    fVar20 = fVar19;
    if (pfVar9 == pfVar14) {
      fVar19 = ABS(fVar19);
      fVar20 = fVar19;
    }
    else {
      do {
        pfVar12 = pfVar11 + 1;
        pfVar1 = pfVar11;
        fVar3 = *pfVar11;
        if (*pfVar11 <= fVar20) {
          pfVar1 = pfVar10;
          fVar3 = fVar20;
        }
        pfVar10 = pfVar1;
        pfVar11 = pfVar12;
        fVar20 = fVar3;
      } while (pfVar12 != pfVar14);
      do {
        pfVar11 = pfVar9 + 1;
        pfVar10 = pfVar9;
        fVar20 = *pfVar9;
        if (fVar19 <= *pfVar9) {
          pfVar10 = pfVar6;
          fVar20 = fVar19;
        }
        fVar19 = fVar20;
        pfVar6 = pfVar10;
        pfVar9 = pfVar11;
      } while (pfVar11 != pfVar14);
      fVar19 = ABS(*pfVar1);
      fVar20 = ABS(*pfVar10);
    }
    if (fVar19 <= fVar20) {
      fVar19 = fVar20;
    }
    bVar4 = *(float *)(param_1 + 0x50) < fVar19;
  }
  *(bool *)(param_1 + 0xe8) = bVar4;
  if (uVar16 != (ulong)(*(long *)(param_1 + 0x18) * *(long *)(param_1 + 0x10)) / 1000) {
    local_70 = 0x2a;
    cStack_5a = '\0';
    acStack_67[0] = s_Wrong_input_data_size_001c7273[8];
    acStack_67[1] = s_Wrong_input_data_size_001c7273[9];
    acStack_67[2] = s_Wrong_input_data_size_001c7273[10];
    acStack_67[3] = s_Wrong_input_data_size_001c7273[0xb];
    acStack_67[4] = s_Wrong_input_data_size_001c7273[0xc];
    local_6f[0] = s_Wrong_input_data_size_001c7273[0];
    local_6f[1] = s_Wrong_input_data_size_001c7273[1];
    local_6f[2] = s_Wrong_input_data_size_001c7273[2];
    local_6f[3] = s_Wrong_input_data_size_001c7273[3];
    local_6f[4] = s_Wrong_input_data_size_001c7273[4];
    local_6f[5] = s_Wrong_input_data_size_001c7273[5];
    local_6f[6] = s_Wrong_input_data_size_001c7273[6];
    local_6f[7] = s_Wrong_input_data_size_001c7273[7];
    cStack_62 = (char)s_Wrong_input_data_size_001c7273._13_3_;
    cStack_61 = SUB31(s_Wrong_input_data_size_001c7273._13_3_,1);
    cStack_60 = SUB31(s_Wrong_input_data_size_001c7273._13_3_,2);
    acStack_5f[0] = s_Wrong_input_data_size_001c7273[0x10];
    acStack_5f[1] = s_Wrong_input_data_size_001c7273[0x11];
    acStack_5f[2] = s_Wrong_input_data_size_001c7273[0x12];
    acStack_5f[3] = s_Wrong_input_data_size_001c7273[0x13];
    acStack_5f[4] = s_Wrong_input_data_size_001c7273[0x14];
                    /* try { // try from 0033af14 to 0033af2f has its CatchHandler @ 0033b1bc */
    FUN_00372794(&local_70,
                 "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/frame_processors/vad-v2/src/vad_v2_maincleaner.cpp"
                 ,0x65,"cleanNoise");
    if ((local_70 & 1) != 0) {
      free((void *)CONCAT17(uStack_59,CONCAT16(cStack_5a,CONCAT51(acStack_5f,cStack_60))));
    }
  }
  uVar7 = *(long *)(param_1 + 0x138) - *(long *)(param_1 + 0x130);
  if ((uVar7 < *(ulong *)(param_1 + 0xc0)) || (*(ulong *)(param_1 + 0xc0) << 1 <= uVar7)) {
    local_70 = 0x2c;
    uStack_59 = 0;
    acStack_67 = SUB65(s_Wrong_output_data_size_001d37b5._8_6_,0);
    cStack_62 = SUB61(s_Wrong_output_data_size_001d37b5._8_6_,5);
    local_6f[0] = s_Wrong_output_data_size_001d37b5[0];
    local_6f[1] = s_Wrong_output_data_size_001d37b5[1];
    local_6f[2] = s_Wrong_output_data_size_001d37b5[2];
    local_6f[3] = s_Wrong_output_data_size_001d37b5[3];
    local_6f[4] = s_Wrong_output_data_size_001d37b5[4];
    local_6f[5] = s_Wrong_output_data_size_001d37b5[5];
    local_6f[6] = s_Wrong_output_data_size_001d37b5[6];
    local_6f[7] = s_Wrong_output_data_size_001d37b5[7];
    cStack_61 = (char)s_Wrong_output_data_size_001d37b5._14_2_;
    cStack_60 = SUB21(s_Wrong_output_data_size_001d37b5._14_2_,1);
    acStack_5f = SUB65(s_Wrong_output_data_size_001d37b5._16_6_,0);
    cStack_5a = SUB61(s_Wrong_output_data_size_001d37b5._16_6_,5);
                    /* try { // try from 0033af84 to 0033af9f has its CatchHandler @ 0033b1b8 */
    FUN_00372794(&local_70,
                 "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/frame_processors/vad-v2/src/vad_v2_maincleaner.cpp"
                 ,0x66,"cleanNoise");
    if ((local_70 & 1) != 0) {
      free((void *)CONCAT17(uStack_59,CONCAT16(cStack_5a,CONCAT51(acStack_5f,cStack_60))));
    }
  }
  __src = (void *)*param_2;
  __dest = *(void **)(param_1 + 0xf0);
  __n = param_2[1] - (long)__src;
  lVar8 = *(long *)(param_1 + 0x110);
  lVar18 = (long)__n >> 2;
  if ((ulong)(*(long *)(param_1 + 0xf8) - (long)__dest >> 2) < (ulong)(lVar18 + lVar8)) {
    memcpy(__dest,(void *)((long)__dest + *(long *)(param_1 + 0x108) * 4),
           (lVar8 - *(long *)(param_1 + 0x108)) * 4);
    __dest = *(void **)(param_1 + 0xf0);
    lVar8 = *(long *)(param_1 + 0x110) - *(long *)(param_1 + 0x108);
    *(undefined8 *)(param_1 + 0x108) = 0;
    *(long *)(param_1 + 0x110) = lVar8;
  }
  memcpy((void *)((long)__dest + lVar8 * 4),__src,__n);
  lVar8 = *(long *)(param_1 + 0x108);
  lVar18 = *(long *)(param_1 + 0x110) + lVar18;
  *(long *)(param_1 + 0x110) = lVar18;
  if ((ulong)(*(long *)(param_1 + 0xc0) << 1) <= (ulong)(lVar18 - lVar8)) {
    do {
      if (param_2[1] != *param_2) {
        param_2[1] = *param_2;
      }
      FUN_0033b220(param_1,*(long *)(param_1 + 0xf0) + lVar8 * 4,param_2);
      lVar8 = *(long *)(param_1 + 0x108) + *(long *)(param_1 + 0xc0);
      *(long *)(param_1 + 0x108) = lVar8;
    } while ((ulong)(*(long *)(param_1 + 0xc0) << 1) <= (ulong)(*(long *)(param_1 + 0x110) - lVar8))
    ;
  }
  pfVar6 = (float *)(*(long *)(param_1 + 0x118) + *(long *)(param_1 + 0x130) * 4);
  if (lVar17 - 4U < 0x1c) {
    fVar19 = 0.0;
    pfVar9 = pfVar6;
LAB_0033b100:
    do {
      pfVar14 = pfVar9 + 1;
      fVar19 = fVar19 + *pfVar9;
      pfVar9 = pfVar14;
    } while (pfVar14 != (float *)((long)pfVar6 + lVar17));
  }
  else {
    fVar19 = 0.0;
    pfVar14 = pfVar6 + 4;
    uVar7 = (lVar17 - 4U >> 2) + 1;
    uVar13 = uVar7 & 0x7ffffffffffffff8;
    pfVar9 = pfVar6 + uVar13;
    uVar15 = uVar13;
    do {
      pfVar10 = pfVar14 + -4;
      pfVar11 = pfVar14 + -2;
      pfVar1 = pfVar14 + 2;
      uVar5 = *(undefined8 *)pfVar14;
      uVar15 = uVar15 - 8;
      pfVar14 = pfVar14 + 8;
      fVar19 = fVar19 + (float)*(undefined8 *)pfVar10 +
               (float)((ulong)*(undefined8 *)pfVar10 >> 0x20) + (float)*(undefined8 *)pfVar11 +
               (float)((ulong)*(undefined8 *)pfVar11 >> 0x20) + (float)uVar5 +
               (float)((ulong)uVar5 >> 0x20) + (float)*(undefined8 *)pfVar1 +
               (float)((ulong)*(undefined8 *)pfVar1 >> 0x20);
    } while (uVar15 != 0);
    if (uVar7 != uVar13) goto LAB_0033b100;
  }
  *(ulong *)(param_1 + 0x130) = *(long *)(param_1 + 0x130) + uVar16;
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return (ulong)(uint)(fVar19 / (float)uVar16) | 0x100000000;
  }
LAB_0033b21c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033b220  FUN_0033b220 =====

void FUN_0033b220(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_2 == 0) {
    uVar2 = FUN_00753a74(0x20);
                    /* try { // try from 0033b290 to 0033b29f has its CatchHandler @ 0033b300 */
    FUN_002fd2b0(auStack_50,"MainCleaner::mainCleaner: Input data pointer cannot be null");
                    /* try { // try from 0033b2a4 to 0033b2db has its CatchHandler @ 0033b2dc */
    FUN_00374ee0(uVar2,auStack_50);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar2,PTR_PTR_007a1338,PTR_FUN_007a11f8);
    }
  }
  else {
    FUN_0033b328();
    FUN_0033b5a0(param_1,param_3);
    if (*(long *)(lVar1 + 0x28) == local_38) {
      FUN_0033ba90(param_1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033b328  FUN_0033b328 =====

void FUN_0033b328(long param_1,void *param_2,long *param_3)

{
  long lVar1;
  void *__src;
  long lVar2;
  void *__dest;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  size_t __n;
  long lVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_70 [24];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (param_2 == (void *)0x0) {
    uVar3 = FUN_00753a74(0x20);
                    /* try { // try from 0033b508 to 0033b517 has its CatchHandler @ 0033b578 */
    FUN_002fd2b0(auStack_70,"MainCleaner::preProcess: Input data pointer cannot be null");
                    /* try { // try from 0033b51c to 0033b553 has its CatchHandler @ 0033b554 */
    FUN_00374ee0(uVar3,auStack_70);
    if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar3,PTR_PTR_007a1338,PTR_FUN_007a11f8);
    }
  }
  else {
    uVar4 = *(ulong *)(param_1 + 0x20);
    uVar6 = param_3[1] - *param_3 >> 2;
    if (uVar4 < uVar6 || uVar4 - uVar6 == 0) {
      if (uVar4 < uVar6) {
        param_3[1] = *param_3 + uVar4 * 4;
      }
    }
    else {
      FUN_002feac4(param_3,uVar4 - uVar6);
      uVar4 = *(ulong *)(param_1 + 0x20);
    }
    if (uVar4 != 0) {
      memmove((void *)*param_3,param_2,uVar4 << 2);
    }
    FUN_0036cee8(*(undefined8 *)(param_1 + 0x40),param_3,param_1 + 0x140,param_3);
    if (*(char *)(param_1 + 0x1d8) != '\0') {
      FUN_00345dc0(param_1 + 0x170,param_3);
    }
    FUN_00346588(param_1 + 0x1e0,param_3,param_1 + 0x278);
    fVar9 = 1.0;
    if ((*(char *)(param_1 + 0x7c) != '\0') &&
       (fVar8 = (float)FUN_003498e0(param_1 + 0x208,param_2,*(undefined8 *)(param_1 + 0x20)),
       fVar9 = 1.0, fVar8 != 1e-06 && fVar8 < 1e-06 == NAN(fVar8))) {
      fVar9 = *(float *)(param_1 + 0x78) / SQRT(fVar8);
    }
    FUN_00344ea0(fVar9,param_1 + 0x278,param_3,*(undefined8 *)(param_1 + 0x1f8),
                 *(undefined8 *)(param_1 + 0x200));
    FUN_003451a4(param_3,*(undefined8 *)(param_1 + 200));
    FUN_003450cc(*(undefined4 *)(param_1 + 0xd0),param_3);
    __src = (void *)*param_3;
    __dest = *(void **)(param_1 + 0x290);
    __n = param_3[1] - (long)__src;
    lVar5 = *(long *)(param_1 + 0x2b0);
    lVar7 = (long)__n >> 2;
    lVar1 = lVar7 + *(long *)(param_1 + 0x2a8);
    *(long *)(param_1 + 0x2a8) = lVar1;
    if ((ulong)(*(long *)(param_1 + 0x298) - (long)__dest >> 2) < (ulong)(lVar5 + lVar7)) {
      memcpy(__dest,(void *)((long)__dest + lVar1 * 4),(lVar5 - lVar1) * 4);
      lVar5 = *(long *)(param_1 + 0x2a8);
      __dest = *(void **)(param_1 + 0x290);
      *(undefined8 *)(param_1 + 0x2a8) = 0;
      lVar5 = *(long *)(param_1 + 0x2b0) - lVar5;
      *(long *)(param_1 + 0x2b0) = lVar5;
    }
    memcpy((void *)((long)__dest + lVar5 * 4),__src,__n);
    *(long *)(param_1 + 0x2b0) = *(long *)(param_1 + 0x2b0) + lVar7;
    if (*(long *)(lVar2 + 0x28) == local_58) {
      FUN_00344c78(param_3,param_1 + 0x290,param_1 + 0x80,param_1 + 0x98);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033b5a0  FUN_0033b5a0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0033b5a0(long param_1,long *param_2)

{
  int *piVar1;
  size_t __n;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  char *pcVar12;
  undefined4 *puVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long *plVar20;
  long lVar21;
  undefined4 uVar22;
  undefined1 auVar23 [16];
  byte local_80;
  undefined7 uStack_7f;
  byte bStack_78;
  undefined7 uStack_77;
  byte local_70;
  undefined1 uStack_6f;
  undefined1 uStack_6e;
  undefined5 uStack_6d;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (*(char *)(param_1 + 0xe8) == '\0') {
    plVar8 = (long *)(**(code **)(**(long **)(param_1 + 0x2b8) + 0x10))();
    plVar9 = (long *)(**(code **)(**(long **)(param_1 + 0x2b8) + 0x18))(*(long **)(param_1 + 0x2b8))
    ;
    lVar15 = *plVar8;
    if ((plVar8[1] - lVar15 != 0x80) || (plVar9[1] - *plVar9 != 0x80)) {
      puVar10 = (undefined8 *)FUN_00759c3c(0x28);
      uVar6 = _UNK_00200438;
      uVar5 = _DAT_00200430;
      uVar4 = s_Wrong_number_of_inputs_or_output_001d5982._24_8_;
      uVar3 = s_Wrong_number_of_inputs_or_output_001d5982._16_8_;
      auVar23 = s_Wrong_number_of_inputs_or_output_001d5982._0_16_;
      local_70 = (byte)puVar10;
      uStack_6f = (undefined1)((ulong)puVar10 >> 8);
      uStack_6e = (undefined1)((ulong)puVar10 >> 0x10);
      uStack_6d = (undefined5)((ulong)puVar10 >> 0x18);
      *(undefined2 *)(puVar10 + 4) = 0x73;
      bStack_78 = (byte)uVar6;
      uStack_77 = (undefined7)((ulong)uVar6 >> 8);
      local_80 = (byte)uVar5;
      uStack_7f = (undefined7)((ulong)uVar5 >> 8);
      puVar10[1] = auVar23._8_8_;
      *puVar10 = auVar23._0_8_;
      puVar10[3] = uVar4;
      puVar10[2] = uVar3;
                    /* try { // try from 0033b688 to 0033b6a3 has its CatchHandler @ 0033ba48 */
      FUN_00372794(&local_80,
                   "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/frame_processors/vad-v2/src/vad_v2_maincleaner.cpp"
                   ,0xaa,"infer");
      if ((local_80 & 1) != 0) {
        free((void *)CONCAT53(uStack_6d,CONCAT12(uStack_6e,CONCAT11(uStack_6f,local_70))));
      }
      lVar15 = *plVar8;
    }
    FUN_0034ce18(&local_80,lVar15);
    uVar16 = (ulong)(local_80 >> 1);
    if ((local_80 & 1) != 0) {
      uVar16 = CONCAT71(uStack_77,bStack_78);
    }
    if (uVar16 == 5) {
      piVar1 = (int *)CONCAT53(uStack_6d,CONCAT12(uStack_6e,CONCAT11(uStack_6f,local_70)));
      if ((local_80 & 1) == 0) {
        piVar1 = (int *)&uStack_7f;
      }
      bVar7 = *piVar1 == 0x75706e49 && (char)piVar1[1] == 't';
    }
    else {
      bVar7 = false;
    }
    if ((local_80 & 1) != 0) {
      free((void *)CONCAT53(uStack_6d,CONCAT12(uStack_6e,CONCAT11(uStack_6f,local_70))));
    }
    if (!bVar7) {
      local_80 = 0x20;
      uStack_6f = 0;
      uStack_77 = (undefined7)s_Wrong_input_name_001eed08._8_8_;
      local_70 = SUB81(s_Wrong_input_name_001eed08._8_8_,7);
      uStack_7f = (undefined7)s_Wrong_input_name_001eed08._0_8_;
      bStack_78 = SUB81(s_Wrong_input_name_001eed08._0_8_,7);
                    /* try { // try from 0033b818 to 0033b833 has its CatchHandler @ 0033ba40 */
      FUN_00372794(&local_80,
                   "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/frame_processors/vad-v2/src/vad_v2_maincleaner.cpp"
                   ,0xab,"infer");
      if ((local_80 & 1) != 0) {
        free((void *)CONCAT53(uStack_6d,CONCAT12(uStack_6e,CONCAT11(uStack_6f,local_70))));
      }
    }
    FUN_0034ce18(&local_80,*plVar9);
    uVar16 = (ulong)(local_80 >> 1);
    if ((local_80 & 1) != 0) {
      uVar16 = CONCAT71(uStack_77,bStack_78);
    }
    if (uVar16 == 6) {
      piVar1 = (int *)CONCAT53(uStack_6d,CONCAT12(uStack_6e,CONCAT11(uStack_6f,local_70)));
      if ((local_80 & 1) == 0) {
        piVar1 = (int *)&uStack_7f;
      }
      bVar7 = *piVar1 == 0x7074754f && (short)piVar1[1] == 0x7475;
    }
    else {
      bVar7 = false;
    }
    if ((local_80 & 1) != 0) {
      free((void *)CONCAT53(uStack_6d,CONCAT12(uStack_6e,CONCAT11(uStack_6f,local_70))));
    }
    if (!bVar7) {
      local_80 = 0x22;
      uStack_6f = 0x65;
      uStack_6e = 0;
      uStack_77 = (undefined7)s_Wrong_output_name_001dc301._8_8_;
      local_70 = SUB81(s_Wrong_output_name_001dc301._8_8_,7);
      uStack_7f = (undefined7)s_Wrong_output_name_001dc301._0_8_;
      bStack_78 = SUB81(s_Wrong_output_name_001dc301._0_8_,7);
                    /* try { // try from 0033b8d8 to 0033b8f3 has its CatchHandler @ 0033ba3c */
      FUN_00372794(&local_80,
                   "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/frame_processors/vad-v2/src/vad_v2_maincleaner.cpp"
                   ,0xac,"infer");
      if ((local_80 & 1) != 0) {
        free((void *)CONCAT53(uStack_6d,CONCAT12(uStack_6e,CONCAT11(uStack_6f,local_70))));
      }
    }
    lVar15 = *param_2;
    lVar14 = param_2[1];
    plVar20 = *(long **)(param_1 + 0x2b8);
    lVar21 = *plVar8;
    puVar11 = (undefined8 *)FUN_00759c3c(0x10);
    puVar10 = puVar11 + 2;
    bStack_78 = (byte)puVar10;
    uStack_77 = (undefined7)((ulong)puVar10 >> 8);
    uStack_6f = (undefined1)((ulong)puVar10 >> 8);
    uStack_6e = (undefined1)((ulong)puVar10 >> 0x10);
    uStack_6d = (undefined5)((ulong)puVar10 >> 0x18);
    local_80 = (byte)puVar11;
    uStack_7f = (undefined7)((ulong)puVar11 >> 8);
    *puVar11 = 1;
    puVar11[1] = lVar14 - lVar15 >> 2;
    local_70 = bStack_78;
                    /* try { // try from 0033b93c to 0033b94b has its CatchHandler @ 0033ba5c */
    (**(code **)(*plVar20 + 0x20))(plVar20,lVar21,&local_80);
    if ((void *)CONCAT71(uStack_7f,local_80) != (void *)0x0) {
      bStack_78 = local_80;
      uStack_77 = uStack_7f;
      free((void *)CONCAT71(uStack_7f,local_80));
    }
    __n = param_2[1] - *param_2;
    if (__n != 0) {
      memmove(*(void **)*plVar8,(void *)*param_2,__n);
    }
    (**(code **)(**(long **)(param_1 + 0x2b8) + 0x28))();
    puVar10 = (undefined8 *)*plVar9;
    if (((long *)puVar10[5] == (long *)puVar10[4]) || (*(long *)puVar10[4] != 1)) {
      pcVar12 = (char *)FUN_00759c3c(0x19);
      auVar23 = _DAT_002002d0;
      uVar4 = s_Wrong_output_dimensions_001e2841._0_8_;
      uVar3 = CONCAT71(s_Wrong_output_dimensions_001e2841._16_7_,
                       s_Wrong_output_dimensions_001e2841[0xf]);
      local_70 = (byte)pcVar12;
      uStack_6f = (undefined1)((ulong)pcVar12 >> 8);
      uStack_6e = (undefined1)((ulong)pcVar12 >> 0x10);
      uStack_6d = (undefined5)((ulong)pcVar12 >> 0x18);
      *(ulong *)(pcVar12 + 8) =
           CONCAT17(s_Wrong_output_dimensions_001e2841[0xf],s_Wrong_output_dimensions_001e2841._8_7_
                   );
      *(undefined8 *)pcVar12 = uVar4;
      *(undefined8 *)(pcVar12 + 0xf) = uVar3;
      bStack_78 = auVar23[8];
      uStack_77 = auVar23._9_7_;
      local_80 = auVar23[0];
      uStack_7f = auVar23._1_7_;
      pcVar12[0x17] = '\0';
                    /* try { // try from 0033b9d4 to 0033b9ef has its CatchHandler @ 0033ba44 */
      FUN_00372794(&local_80,
                   "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/frame_processors/vad-v2/src/vad_v2_maincleaner.cpp"
                   ,0xb3,"infer");
      if ((local_80 & 1) != 0) {
        free((void *)CONCAT53(uStack_6d,CONCAT12(uStack_6e,CONCAT11(uStack_6f,local_70))));
      }
      puVar10 = (undefined8 *)*plVar9;
    }
    uVar22 = *(undefined4 *)*puVar10;
  }
  else {
    puVar13 = (undefined4 *)*param_2;
    lVar15 = param_2[1];
    lVar14 = *(long *)(param_1 + 0x88) - *(long *)(param_1 + 0x80);
    uVar17 = lVar14 >> 2;
    uVar16 = lVar15 - (long)puVar13 >> 2;
    if (uVar17 < uVar16 || uVar17 - uVar16 == 0) {
      if (uVar17 < uVar16) {
        lVar15 = (long)puVar13 + lVar14;
        param_2[1] = lVar15;
      }
    }
    else {
      FUN_002feac4(param_2,uVar17 - uVar16);
      puVar13 = (undefined4 *)*param_2;
      lVar15 = param_2[1];
    }
    uVar17 = lVar15 - (long)puVar13;
    uVar22 = 0;
    uVar16 = (long)uVar17 >> 2;
    if (0 < (long)uVar16) {
      if (7 < uVar16) {
        auVar23 = NEON_fmov(0x3f800000,4);
        uVar18 = uVar16 & 0x7ffffffffffffff8;
        puVar10 = (undefined8 *)(puVar13 + 4);
        uVar19 = uVar18;
        do {
          uVar19 = uVar19 - 8;
          puVar10[-1] = auVar23._8_8_;
          puVar10[-2] = auVar23._0_8_;
          puVar10[1] = auVar23._8_8_;
          *puVar10 = auVar23._0_8_;
          puVar10 = puVar10 + 4;
        } while (uVar19 != 0);
        bVar7 = uVar16 == uVar18;
        puVar13 = puVar13 + uVar18;
        uVar16 = uVar17 >> 2 & 7;
        if (bVar7) goto LAB_0033ba0c;
      }
      *puVar13 = 0x3f800000;
      if (((((1 < uVar16) && (puVar13[1] = 0x3f800000, uVar16 - 3 < 0xfffffffffffffffe)) &&
           (puVar13[2] = 0x3f800000, (uVar16 & 6) != 2)) &&
          ((puVar13[3] = 0x3f800000, uVar16 - 5 < 0xfffffffffffffffe &&
           (puVar13[4] = 0x3f800000, (uVar16 & 6) != 4)))) &&
         (puVar13[5] = 0x3f800000, uVar16 - 7 < 0xfffffffffffffffe)) {
        puVar13[6] = 0x3f800000;
      }
    }
  }
LAB_0033ba0c:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar22);
}


// ===== 0033ba90  FUN_0033ba90 =====

void FUN_0033ba90(undefined4 param_1,long param_2)

{
  void *__dest;
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  float *pfVar4;
  long lVar5;
  float *pfVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auStack_90 [24];
  void *local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  void *local_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = (void *)0x0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_78 = (void *)0x0;
  local_70 = (void *)0x0;
  local_68 = 0;
                    /* try { // try from 0033bad0 to 0033baf3 has its CatchHandler @ 0033bd0c */
  FUN_0036cee8(*(undefined8 *)(param_2 + 0x40),param_2 + 0x158,param_2 + 0x158,&local_78);
  FUN_0036cb04(param_1,*(undefined8 *)(param_2 + 0x40),&local_78,&local_60);
  __dest = *(void **)(param_2 + 0x118);
  lVar14 = *(long *)(param_2 + 0xc0);
  lVar15 = *(long *)(param_2 + 0x138);
  if ((ulong)(*(long *)(param_2 + 0x120) - (long)__dest >> 2) < (ulong)(lVar15 + lVar14)) {
    memcpy(__dest,(void *)((long)__dest + *(long *)(param_2 + 0x130) * 4),
           (lVar15 - *(long *)(param_2 + 0x130)) * 4);
    lVar15 = *(long *)(param_2 + 0x130);
    *(undefined8 *)(param_2 + 0x130) = 0;
    lVar15 = *(long *)(param_2 + 0x138) - lVar15;
  }
  if (lVar14 != 0) {
    memset((void *)(*(long *)(param_2 + 0x118) + lVar15 * 4),0,lVar14 << 2);
  }
  lVar15 = lVar15 + lVar14;
  lVar14 = *(long *)(param_2 + 0xc0);
  *(long *)(param_2 + 0x138) = lVar15;
  uVar7 = lVar15 - *(long *)(param_2 + 0x130);
  lVar9 = uVar7 + lVar14 * -2;
  uVar11 = (long)local_58 - (long)local_60 >> 2;
  if (uVar7 < uVar11 + lVar9) {
    uVar3 = FUN_00753a74(0x20);
                    /* try { // try from 0033bc8c to 0033bc9b has its CatchHandler @ 0033bcfc */
    FUN_002fd2b0(auStack_90,"MainCleaner::postProcess: Buffer overflow");
                    /* try { // try from 0033bca0 to 0033bcd7 has its CatchHandler @ 0033bcd8 */
    FUN_00374fd0(uVar3,auStack_90);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar3,PTR_PTR_007a1350,PTR_FUN_007a11f8);
    }
    goto LAB_0033bd60;
  }
  if (local_58 != local_60) {
    lVar5 = *(long *)(param_2 + 0x118);
    uVar7 = uVar11;
    if (uVar11 < 2) {
      uVar7 = 1;
    }
    if ((uVar11 < 0xc) ||
       ((lVar8 = lVar5 + lVar14 * -8,
        (void *)(lVar5 + *(long *)(param_2 + 0x130) * 4 + lVar9 * 4) <
        (void *)((long)local_60 + uVar7 * 4) && (local_60 < (void *)(lVar8 + (uVar7 + lVar15) * 4)))
       )) {
      uVar11 = 0;
    }
    else {
      uVar11 = uVar7 & 0xfffffffffffffff8;
      puVar10 = (undefined8 *)((long)local_60 + 0x10);
      puVar12 = (undefined8 *)(lVar8 + lVar15 * 4 + 0x10);
      uVar13 = uVar11;
      do {
        uVar13 = uVar13 - 8;
        puVar2 = puVar10 + -1;
        uVar3 = puVar10[-2];
        uVar17 = puVar10[1];
        uVar16 = *puVar10;
        puVar10 = puVar10 + 4;
        puVar12[-1] = CONCAT44((float)((ulong)*puVar2 >> 0x20) + (float)((ulong)puVar12[-1] >> 0x20)
                               ,(float)*puVar2 + (float)puVar12[-1]);
        puVar12[-2] = CONCAT44((float)((ulong)uVar3 >> 0x20) + (float)((ulong)puVar12[-2] >> 0x20),
                               (float)uVar3 + (float)puVar12[-2]);
        puVar12[1] = CONCAT44((float)((ulong)uVar17 >> 0x20) + (float)((ulong)puVar12[1] >> 0x20),
                              (float)uVar17 + (float)puVar12[1]);
        *puVar12 = CONCAT44((float)((ulong)uVar16 >> 0x20) + (float)((ulong)*puVar12 >> 0x20),
                            (float)uVar16 + (float)*puVar12);
        puVar12 = puVar12 + 4;
      } while (uVar13 != 0);
      if (uVar7 == uVar11) goto LAB_0033bbf0;
    }
    lVar9 = uVar7 - uVar11;
    pfVar4 = (float *)((long)local_60 + uVar11 * 4);
    pfVar6 = (float *)(lVar5 + uVar11 * 4 + lVar15 * 4 + lVar14 * -8);
    do {
      lVar9 = lVar9 + -1;
      *pfVar6 = *pfVar4 + *pfVar6;
      pfVar4 = pfVar4 + 1;
      pfVar6 = pfVar6 + 1;
    } while (lVar9 != 0);
  }
LAB_0033bbf0:
  if (local_78 != (void *)0x0) {
    local_70 = local_78;
    free(local_78);
  }
  if (local_60 != (void *)0x0) {
    local_58 = local_60;
    free(local_60);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_0033bd60:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033bd64  FUN_0033bd64 =====

void FUN_0033bd64(long *param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_007a1408 + 0x10;
  param_1[1] = 0;
  *param_1 = (long)puVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = (long)(param_1 + 0xc);
  param_1[0xd] = 0;
                    /* try { // try from 0033bdd8 to 0033be07 has its CatchHandler @ 0033be24 */
  FUN_0033c384();
  FUN_0033c6e8(param_1,param_2);
  FUN_0033c914(param_1,param_2);
  if ((param_4 & 1) != 0) {
    FUN_0033cb48(param_1,param_2,param_3);
  }
  return;
}


// ===== 0033be5c  FUN_0033be5c =====

void FUN_0033be5c(long *param_1,byte *param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  byte *pbVar3;
  undefined *puVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined8 extraout_x1;
  byte local_1f0 [16];
  void *local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  void *local_1c8;
  long local_1c0 [2];
  undefined1 auStack_1b0 [120];
  long local_138;
  undefined1 auStack_108 [152];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  *param_1 = (long)(PTR_DAT_007a1408 + 0x10);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = (long)(param_1 + 0xc);
  param_1[0xd] = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1c8 = (void *)0x0;
  uVar1 = (ulong)(*param_2 >> 1);
  pbVar3 = param_2 + 4;
  if ((*param_2 & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 8);
    pbVar3 = *(byte **)(param_2 + 0x10);
  }
                    /* try { // try from 0033bf08 to 0033bf13 has its CatchHandler @ 0033c134 */
  FUN_0030dbb8(&local_1d8,pbVar3,pbVar3 + uVar1 * 4);
  pvVar5 = local_1c8;
  if ((local_1d8 & 1) == 0) {
    pvVar5 = (void *)((long)&local_1d8 + 1);
  }
                    /* try { // try from 0033bf24 to 0033bf2f has its CatchHandler @ 0033c130 */
  FUN_0033d854(local_1c0,pvVar5,0xc);
  if ((local_1d8 & 1) != 0) {
    free(local_1c8);
  }
  if (local_138 == 0) {
                    /* try { // try from 0033c044 to 0033c053 has its CatchHandler @ 0033c118 */
    FUN_002fd2b0(&local_1d8,"KefBlobLoader::KefBlobLoader: failed to open the kef file: ");
    uVar1 = (ulong)(*param_2 >> 1);
    pbVar3 = param_2 + 4;
    if ((*param_2 & 1) != 0) {
      uVar1 = *(ulong *)(param_2 + 8);
      pbVar3 = *(byte **)(param_2 + 0x10);
    }
                    /* try { // try from 0033c070 to 0033c077 has its CatchHandler @ 0033c100 */
    FUN_0033c1b4(local_1f0,pbVar3,pbVar3 + uVar1 * 4);
                    /* try { // try from 0033c078 to 0033c083 has its CatchHandler @ 0033c0e8 */
    FUN_0033c318(&local_1d8,local_1f0);
    if ((local_1f0[0] & 1) != 0) {
      free(local_1e0);
    }
    uVar6 = FUN_00753a74(0x20);
                    /* try { // try from 0033c0a0 to 0033c0a7 has its CatchHandler @ 0033c0d8 */
    FUN_00374f58(uVar6,&local_1d8);
    if (*(long *)(lVar2 + 0x28) == local_70) {
                    /* try { // try from 0033c0bc to 0033c0d3 has its CatchHandler @ 0033c0d4 */
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar6,PTR_PTR_007a12e0,PTR_FUN_007a11f8);
    }
  }
  else {
                    /* try { // try from 0033bf48 to 0033bf57 has its CatchHandler @ 0033c128 */
    FUN_00716dd4(local_1c0,0,2);
                    /* try { // try from 0033bf58 to 0033bf73 has its CatchHandler @ 0033c14c */
    FUN_00716bc8(local_1c0);
    FUN_00716dd4(local_1c0,0,0);
                    /* try { // try from 0033bf74 to 0033bf7b has its CatchHandler @ 0033c120 */
    pvVar5 = (void *)thunk_FUN_00759c3c(extraout_x1);
                    /* try { // try from 0033bf7c to 0033bfcb has its CatchHandler @ 0033c154 */
    FUN_00716ad0(local_1c0,pvVar5,extraout_x1);
    FUN_0033c384(param_1,pvVar5,extraout_x1);
    FUN_0033c6e8(param_1,pvVar5);
    FUN_0033c914(param_1,pvVar5);
    if ((param_3 & 1) != 0) {
      FUN_0033cb48(param_1,pvVar5,extraout_x1);
    }
    free(pvVar5);
    puVar4 = PTR_PTR_007a1420;
    local_1c0[0] = *(long *)PTR_PTR_007a1420;
    *(undefined8 *)((long)local_1c0 + *(long *)(local_1c0[0] + -0x18)) =
         *(undefined8 *)(PTR_PTR_007a1420 + 0x18);
    FUN_00718ca0(auStack_1b0);
    FUN_00716374(local_1c0,puVar4 + 8);
    thunk_FUN_00715e00(auStack_108);
    if (*(long *)(lVar2 + 0x28) == local_70) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033c1b4  FUN_0033c1b4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0033c1b4(ulong *param_1,byte *param_2,byte *param_3)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [16];
  undefined1 (*pauVar4) [16];
  undefined1 (*pauVar5) [16];
  undefined1 (*pauVar6) [16];
  undefined1 (*pauVar7) [16];
  undefined1 auVar8 [16];
  byte *pbVar9;
  byte *pbVar10;
  ulong uVar11;
  undefined1 (*pauVar12) [16];
  byte *pbVar13;
  ulong uVar14;
  ulong uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  uVar14 = (long)param_3 - (long)param_2;
  uVar15 = (long)uVar14 >> 2;
  if (0xfffffffffffffff7 < uVar15) {
                    /* WARNING: Subroutine does not return */
    FUN_002fb400(param_1);
  }
  if (uVar15 < 0x17) {
    pbVar13 = (byte *)((long)param_1 + 1);
    *(byte *)param_1 = (byte)(uVar14 >> 1) & 0xfe;
    auVar8 = _DAT_00200730;
  }
  else {
    uVar11 = (uVar15 & 0xfffffffffffffff8) + 8;
    if ((uVar15 | 7) != 0x17) {
      uVar11 = uVar15 | 7;
    }
    pbVar13 = (byte *)FUN_00759c3c(uVar11 + 1);
    param_1[1] = uVar15;
    param_1[2] = (ulong)pbVar13;
    *param_1 = uVar11 + 1 | 1;
    auVar8 = _DAT_00200730;
  }
  _DAT_00200730 = auVar8;
  if (param_2 == param_3) {
    *pbVar13 = 0;
    return;
  }
  uVar14 = uVar14 - 4;
  if ((0x7b < uVar14) &&
     ((param_2 + (uVar14 & 0xfffffffffffffffc) + 4 <= pbVar13 ||
      (pbVar13 + (uVar14 >> 2) + 1 <= param_2)))) {
    pbVar9 = pbVar13 + 0x10;
    pauVar12 = (undefined1 (*) [16])(param_2 + 0x40);
    uVar14 = (uVar14 >> 2) + 1;
    uVar11 = uVar14 & 0x7fffffffffffffe0;
    param_2 = param_2 + uVar11 * 4;
    pbVar13 = pbVar13 + uVar11;
    uVar15 = uVar11;
    do {
      pauVar1 = pauVar12 + -4;
      pauVar4 = pauVar12 + -3;
      uVar15 = uVar15 - 0x20;
      auVar17 = *pauVar12;
      pauVar5 = pauVar12 + 1;
      pauVar2 = pauVar12 + -2;
      pauVar6 = pauVar12 + -1;
      pauVar3 = pauVar12 + 2;
      pauVar7 = pauVar12 + 3;
      pauVar12 = pauVar12 + 8;
      auVar16 = a64_TBL(ZEXT816(0),*pauVar1,*pauVar4,*pauVar2,*pauVar6,auVar8);
      auVar17 = a64_TBL(ZEXT816(0),auVar17,*pauVar5,*pauVar3,*pauVar7,auVar8);
      *(long *)(pbVar9 + -8) = auVar16._8_8_;
      *(long *)(pbVar9 + -0x10) = auVar16._0_8_;
      *(long *)(pbVar9 + 8) = auVar17._8_8_;
      *(long *)pbVar9 = auVar17._0_8_;
      pbVar9 = pbVar9 + 0x20;
    } while (uVar15 != 0);
    if (uVar14 == uVar11) goto LAB_0033c248;
  }
  do {
    pbVar10 = param_2 + 4;
    pbVar9 = pbVar13 + 1;
    *pbVar13 = (byte)*(undefined4 *)param_2;
    pbVar13 = pbVar9;
    param_2 = pbVar10;
  } while (pbVar10 != param_3);
LAB_0033c248:
  *pbVar13 = 0;
  return;
}


// ===== 0033c318  FUN_0033c318 =====

void FUN_0033c318(undefined8 param_1,byte *param_2)

{
  ulong uVar1;
  byte *pbVar2;
  
  uVar1 = *(ulong *)(param_2 + 8);
  pbVar2 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar2 = param_2 + 1;
    uVar1 = (ulong)(*param_2 >> 1);
  }
  FUN_0071302c(param_1,pbVar2,uVar1);
  return;
}


// ===== 0033c334  FUN_0033c334 =====

void FUN_0033c334(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_007a1420;
  lVar2 = *(long *)PTR_PTR_007a1420;
  uVar3 = *(undefined8 *)(PTR_PTR_007a1420 + 0x18);
  *param_1 = lVar2;
  *(undefined8 *)((long)param_1 + *(long *)(lVar2 + -0x18)) = uVar3;
  FUN_00718ca0(param_1 + 2);
  FUN_00716374(param_1,puVar1 + 8);
  thunk_FUN_00715e00(param_1 + 0x17);
  return;
}


// ===== 0033c384  FUN_0033c384 =====

void FUN_0033c384(long param_1,undefined1 *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  uint uVar11;
  ulong *puVar12;
  undefined1 auStack_60 [24];
  long local_48;
  
  lVar8 = tpidr_el0;
  local_48 = *(long *)(lVar8 + 0x28);
  if (param_3 < 0x34) {
    uVar9 = FUN_00753a74(0x20);
                    /* try { // try from 0033c5e8 to 0033c5f7 has its CatchHandler @ 0033c6c0 */
    FUN_002fd2b0(auStack_60,"KefBlobLoader::readHeader: Invalid blob size");
                    /* try { // try from 0033c5fc to 0033c633 has its CatchHandler @ 0033c6a4 */
    FUN_00374f58(uVar9,auStack_60);
    if (*(long *)(lVar8 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar9,PTR_PTR_007a12e0,PTR_FUN_007a11f8);
    }
  }
  else {
    puVar12 = (ulong *)(param_1 + 8);
    uVar10 = *puVar12;
    uVar1 = 0x16;
    if ((*(byte *)puVar12 & 1) != 0) {
      uVar1 = (uVar10 & 0xfffffffffffffffe) - 1;
    }
    uVar11 = (uint)uVar10 & 0xff;
    if (uVar1 < 0x28) {
      uVar2 = uVar10 >> 1 & 0x7f;
      if ((uVar10 & 1) != 0) {
        uVar2 = *(ulong *)(param_1 + 0x10);
      }
      FUN_007131bc(puVar12,uVar1,0x28 - uVar1,uVar2,0,uVar2,0);
      uVar11 = (uint)*(byte *)(param_1 + 8);
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    puVar3 = (undefined1 *)(param_1 + 9);
    if ((uVar11 & 1) != 0) {
      puVar3 = *(undefined1 **)(param_1 + 0x18);
    }
    *puVar3 = *param_2;
    puVar3[1] = param_2[1];
    puVar3[2] = param_2[2];
    puVar3[3] = param_2[3];
    puVar3[4] = param_2[4];
    puVar3[5] = param_2[5];
    puVar3[6] = param_2[6];
    puVar3[7] = param_2[7];
    puVar3[8] = param_2[8];
    puVar3[9] = param_2[9];
    puVar3[10] = param_2[10];
    puVar3[0xb] = param_2[0xb];
    puVar3[0xc] = param_2[0xc];
    puVar3[0xd] = param_2[0xd];
    puVar3[0xe] = param_2[0xe];
    puVar3[0xf] = param_2[0xf];
    puVar3[0x10] = param_2[0x10];
    puVar3[0x11] = param_2[0x11];
    puVar3[0x12] = param_2[0x12];
    puVar3[0x13] = param_2[0x13];
    puVar3[0x14] = param_2[0x14];
    puVar3[0x15] = param_2[0x15];
    puVar3[0x16] = param_2[0x16];
    puVar3[0x17] = param_2[0x17];
    puVar3[0x18] = param_2[0x18];
    puVar3[0x19] = param_2[0x19];
    puVar3[0x1a] = param_2[0x1a];
    puVar3[0x1b] = param_2[0x1b];
    puVar3[0x1c] = param_2[0x1c];
    puVar3[0x1d] = param_2[0x1d];
    puVar3[0x1e] = param_2[0x1e];
    puVar3[0x1f] = param_2[0x1f];
    puVar3[0x20] = param_2[0x20];
    puVar3[0x21] = param_2[0x21];
    puVar3[0x22] = param_2[0x22];
    puVar3[0x23] = param_2[0x23];
    puVar3[0x24] = param_2[0x24];
    puVar3[0x25] = param_2[0x25];
    puVar3[0x26] = param_2[0x26];
    uVar7 = param_2[0x27];
    puVar3[0x28] = 0;
    puVar3[0x27] = uVar7;
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      *(byte *)puVar12 = 0x50;
    }
    else {
      *(undefined8 *)(param_1 + 0x10) = 0x28;
    }
    iVar4 = *(int *)(param_2 + 0x28);
    *(int *)(param_1 + 0x20) = iVar4;
    iVar5 = *(int *)(param_2 + 0x2c);
    *(int *)(param_1 + 0x38) = iVar5;
    iVar6 = *(int *)(param_2 + 0x30);
    *(int *)(param_1 + 0x50) = iVar6;
    if (param_3 < (uint)(iVar5 + iVar4 + iVar6)) {
      uVar9 = FUN_00753a74(0x20);
                    /* try { // try from 0033c644 to 0033c653 has its CatchHandler @ 0033c6a0 */
      FUN_002fd2b0(auStack_60,"KefBlobLoader::readHeader: Invalid blob size");
                    /* try { // try from 0033c658 to 0033c68f has its CatchHandler @ 0033c690 */
      FUN_00374f58(uVar9,auStack_60);
      if (*(long *)(lVar8 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar9,PTR_PTR_007a12e0,PTR_FUN_007a11f8);
      }
    }
    else if (*(long *)(lVar8 + 0x28) == local_48) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033c6e8  FUN_0033c6e8 =====

void FUN_0033c6e8(long param_1,long param_2)

{
  undefined1 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 local_80 [8];
  undefined8 local_78;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_50 = (long *)0x0;
  param_2 = param_2 + (ulong)*(uint *)(param_1 + 0x20);
                    /* try { // try from 0033c71c to 0033c73b has its CatchHandler @ 0033c7bc */
  FUN_0033d468(local_80,param_2,param_2 + (ulong)*(uint *)(param_1 + 0x38),local_70,1,0);
  uVar1 = *(undefined1 *)(param_1 + 0x28);
  *(undefined1 *)(param_1 + 0x28) = local_80[0];
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = local_78;
                    /* try { // try from 0033c75c to 0033c763 has its CatchHandler @ 0033c7b8 */
  local_80[0] = uVar1;
  local_78 = uVar4;
  FUN_00313038(&local_78);
  if (local_50 == local_70) {
    lVar5 = 0x20;
    plVar3 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_0033c794;
    lVar5 = 0x28;
    plVar3 = local_50;
  }
  (**(code **)(*plVar3 + lVar5))();
LAB_0033c794:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033c914  FUN_0033c914 =====

void FUN_0033c914(long param_1,long param_2)

{
  undefined1 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 local_80 [8];
  undefined8 local_78;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_50 = (long *)0x0;
  lVar5 = param_2 + (ulong)*(uint *)(param_1 + 0x20) + (ulong)*(uint *)(param_1 + 0x38);
                    /* try { // try from 0033c950 to 0033c96f has its CatchHandler @ 0033c9f0 */
  FUN_0033d468(local_80,lVar5,lVar5 + (ulong)*(uint *)(param_1 + 0x50),local_70,1,0);
  uVar1 = *(undefined1 *)(param_1 + 0x40);
  *(undefined1 *)(param_1 + 0x40) = local_80[0];
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = local_78;
                    /* try { // try from 0033c990 to 0033c997 has its CatchHandler @ 0033c9ec */
  local_80[0] = uVar1;
  local_78 = uVar4;
  FUN_00313038(&local_78);
  if (local_50 == local_70) {
    lVar5 = 0x20;
    plVar3 = local_70;
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_0033c9c8;
    lVar5 = 0x28;
    plVar3 = local_50;
  }
  (**(code **)(*plVar3 + lVar5))();
LAB_0033c9c8:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033cb48  FUN_0033cb48 =====

void FUN_0033cb48(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  char *pcVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 local_e8;
  long *local_e0;
  ulong local_d8;
  long *local_d0;
  void *local_c8;
  char *local_c0;
  undefined8 uStack_b8;
  long local_b0;
  undefined8 local_a8;
  char *local_a0;
  long *local_98;
  long local_90;
  long local_88;
  long local_78;
  undefined1 uStack_69;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  pcVar8 = (char *)(param_1 + 0x40);
  uVar12 = (ulong)(uint)(*(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x20) +
                        *(int *)(param_1 + 0x50));
  local_78 = param_2 + uVar12;
  if (*pcVar8 == '\x02') {
    local_98 = (long *)0x0;
    local_88 = -0x8000000000000000;
    local_90 = **(long **)(param_1 + 0x48);
    uStack_b8 = 0;
    local_a8 = 0x8000000000000000;
    local_b0 = (*(long **)(param_1 + 0x48))[1];
    local_c0 = pcVar8;
    local_a0 = pcVar8;
                    /* try { // try from 0033cc00 to 0033cc0b has its CatchHandler @ 0033d018 */
    while (uVar4 = FUN_0032875c(&local_a0,&local_c0), (uVar4 & 1) == 0) {
                    /* try { // try from 0033cc10 to 0033cc17 has its CatchHandler @ 0033d000 */
      pcVar8 = (char *)FUN_0033d14c(&local_a0);
                    /* try { // try from 0033cc18 to 0033cc2f has its CatchHandler @ 0033d01c */
      uVar5 = FUN_00320aec(pcVar8,&DAT_001f543b);
      local_d8 = local_d8 & 0xffffffff00000000;
      FUN_0033d96c(uVar5,&local_d8);
      uVar4 = local_d8 & 0xffffffff;
      if (param_3 < uVar4 + uVar12) {
        uVar5 = FUN_00753a74(0x20);
                    /* try { // try from 0033ce84 to 0033ce93 has its CatchHandler @ 0033cfc4 */
        FUN_002fd2b0(&local_d8,"KefBlobLoader::readFiles: Invalid blob size");
                    /* try { // try from 0033ce98 to 0033ced3 has its CatchHandler @ 0033cf9c */
        FUN_00374f58(uVar5,&local_d8);
        if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_00753c5c(uVar5,PTR_PTR_007a12e0,PTR_FUN_007a11f8);
        }
        goto LAB_0033d144;
      }
      local_d8 = local_78 + uVar4;
                    /* try { // try from 0033cc4c to 0033cc5f has its CatchHandler @ 0033cfe0 */
      FUN_0033dac8(&local_e8,&uStack_69,&local_78,&local_d8);
      if (*pcVar8 == '\x01') {
        plVar11 = (long *)(*(long *)(pcVar8 + 8) + 8);
        plVar10 = (long *)*plVar11;
        plVar9 = plVar11;
        if (plVar10 != (long *)0x0) {
          do {
            uVar6 = FUN_00713804(plVar10 + 4,"encrypted");
            if (-1 < (int)uVar6) {
              plVar9 = plVar10;
            }
            plVar10 = *(long **)((long)plVar10 + (uVar6 >> 0x1c & 8));
          } while (plVar10 != (long *)0x0);
          if ((plVar9 != plVar11) && (iVar3 = FUN_00713804(plVar9 + 4,"encrypted"), iVar3 < 1)) {
            plVar11 = plVar9;
          }
        }
        if (plVar11 != (long *)(*(long *)(pcVar8 + 8) + 8)) {
                    /* try { // try from 0033cce8 to 0033ccff has its CatchHandler @ 0033cfd8 */
          uVar5 = FUN_00320aec(pcVar8,"encrypted");
          local_d8 = local_d8 & 0xffffffffffffff00;
          FUN_00312e94(uVar5,&local_d8);
          if ((char)local_d8 != '\0') {
                    /* try { // try from 0033cd08 to 0033cd13 has its CatchHandler @ 0033cf98 */
            FUN_00715bcc(PTR_DAT_007a1410);
                    /* try { // try from 0033cd14 to 0033cd1f has its CatchHandler @ 0033cf80 */
            FUN_00375364(&local_d8,1);
                    /* try { // try from 0033cd28 to 0033cd2b has its CatchHandler @ 0033cf6c */
            FUN_00375624(local_d8,local_e8);
            plVar9 = local_d0;
            if ((local_d0 != (long *)0x0) &&
               (lVar7 = FUN_00755c50(0xffffffffffffffff,local_d0 + 1), lVar7 == 0)) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
              FUN_0071245c(plVar9);
            }
            FUN_00715bf8(PTR_DAT_007a1410);
          }
        }
      }
                    /* try { // try from 0033cd68 to 0033cd73 has its CatchHandler @ 0033d004 */
      uVar5 = FUN_00320aec(pcVar8,"fileUid");
      local_d8 = 0;
      local_d0 = (long *)0x0;
      local_c8 = (void *)0x0;
                    /* try { // try from 0033cd7c to 0033cd83 has its CatchHandler @ 0033cfdc */
      FUN_00321278(uVar5,&local_d8);
                    /* try { // try from 0033cd84 to 0033cd97 has its CatchHandler @ 0033cfe4 */
      FUN_0033dc00(param_1 + 0x58,&local_d8,&local_d8,&local_e8);
      local_78 = local_78 + uVar4;
      if ((local_d8 & 1) != 0) {
        free(local_c8);
      }
      plVar9 = local_e0;
      if ((local_e0 != (long *)0x0) &&
         (lVar7 = FUN_00755c50(0xffffffffffffffff,local_e0 + 1), lVar7 == 0)) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        FUN_0071245c(plVar9);
      }
      if (*local_a0 == '\x02') {
        local_90 = local_90 + 0x10;
      }
      else if (*local_a0 == '\x01') {
        plVar9 = local_98;
        plVar11 = (long *)local_98[1];
        if ((long *)local_98[1] == (long *)0x0) {
          do {
            local_98 = (long *)plVar9[2];
            bVar2 = (long *)*local_98 != plVar9;
            plVar9 = local_98;
          } while (bVar2);
        }
        else {
          do {
            local_98 = plVar11;
            plVar11 = (long *)*local_98;
          } while ((long *)*local_98 != (long *)0x0);
        }
      }
      else {
        local_88 = local_88 + 1;
      }
    }
    if (*(long *)(lVar1 + 0x28) == local_68) {
      return;
    }
  }
  else {
    uVar5 = FUN_00753a74(0x20);
                    /* try { // try from 0033cee4 to 0033cef3 has its CatchHandler @ 0033cf5c */
    FUN_002fd2b0(&local_a0,"KefBlobLoader::readFiles: Invalid fileMapData");
                    /* try { // try from 0033cef8 to 0033cf33 has its CatchHandler @ 0033cf38 */
    FUN_00374f58(uVar5,&local_a0);
    if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar5,PTR_PTR_007a12e0,PTR_FUN_007a11f8);
    }
  }
LAB_0033d144:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033d14c  FUN_0033d14c =====

void FUN_0033d14c(long *param_1)

{
  char cVar1;
  long lVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  pcVar3 = (char *)*param_1;
  cVar1 = *pcVar3;
  if (cVar1 == '\x01') {
    pcVar3 = (char *)(param_1[1] + 0x38);
  }
  else if (cVar1 == '\x02') {
    pcVar3 = (char *)param_1[2];
  }
  else {
    if (cVar1 == '\0') {
      uVar4 = FUN_00753a74(0x20);
                    /* try { // try from 0033d240 to 0033d24f has its CatchHandler @ 0033d2a4 */
      FUN_002fd2b0(auStack_50,"cannot get value");
                    /* try { // try from 0033d258 to 0033d293 has its CatchHandler @ 0033d294 */
      pcVar3 = (char *)FUN_0032889c(uVar4,0xd6,auStack_50,*param_1);
      if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar4,PTR_PTR_007a1328,PTR_FUN_007a12f0);
      }
      goto LAB_0033d2e8;
    }
    if (param_1[3] != 0) {
      uVar4 = FUN_00753a74(0x20);
                    /* try { // try from 0033d1a4 to 0033d1b3 has its CatchHandler @ 0033d2c4 */
      FUN_002fd2b0(auStack_50,"cannot get value");
                    /* try { // try from 0033d1bc to 0033d1f7 has its CatchHandler @ 0033d2a8 */
      pcVar3 = (char *)FUN_0032889c(uVar4,0xd6,auStack_50,*param_1);
      if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar4,PTR_PTR_007a1328,PTR_FUN_007a12f0);
      }
      goto LAB_0033d2e8;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
LAB_0033d2e8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pcVar3);
}


// ===== 0033d2ec  FUN_0033d2ec =====

void FUN_0033d2ec(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 0033d33c  FUN_0033d33c =====

void FUN_0033d33c(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar3 = FUN_0033de90(param_2 + 0x58);
  if (param_2 + 0x60 == lVar3) {
    uVar4 = FUN_00753a74(0x20);
                    /* try { // try from 0033d3c0 to 0033d3cf has its CatchHandler @ 0033d430 */
    FUN_002fd2b0(auStack_50,"KefBlobLoader::getFileContent: File not found");
                    /* try { // try from 0033d3d4 to 0033d40b has its CatchHandler @ 0033d40c */
    FUN_00374f58(uVar4,auStack_50);
    if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar4,PTR_PTR_007a12e0,PTR_FUN_007a11f8);
    }
  }
  else {
    lVar1 = *(long *)(lVar3 + 0x40);
    *param_1 = *(undefined8 *)(lVar3 + 0x38);
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      FUN_00755c20(1,lVar1 + 8);
    }
    if (*(long *)(lVar2 + 0x28) == local_38) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033d458  FUN_0033d458 =====

long FUN_0033d458(long param_1)

{
  return param_1 + 8;
}


// ===== 0033d460  FUN_0033d460 =====

long FUN_0033d460(long param_1)

{
  return param_1 + 0x28;
}


// ===== 0033d468  FUN_0033d468 =====

void FUN_0033d468(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                 uint param_5,uint param_6)

{
  long lVar1;
  long *plVar2;
  long **pplVar3;
  long lVar4;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  long local_1a0 [4];
  long *local_180 [2];
  long local_170 [4];
  long *local_150;
  void *local_f8;
  void *local_f0;
  byte local_e0;
  void *local_d0;
  long local_90 [4];
  long *local_70 [3];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)param_4[4];
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  local_1b0 = param_2;
  uStack_1a8 = param_3;
  if (plVar2 == (long *)0x0) {
    local_180[0] = (long *)0x0;
LAB_0033d4e0:
    pplVar3 = local_70;
LAB_0033d528:
    *pplVar3 = (long *)0x0;
  }
  else {
    if (plVar2 == param_4) {
      local_180[0] = local_1a0;
      (**(code **)(*param_4 + 0x18))(param_4,local_1a0);
    }
    else {
                    /* try { // try from 0033d4c4 to 0033d507 has its CatchHandler @ 0033d654 */
      local_180[0] = (long *)(**(code **)(*plVar2 + 0x10))();
    }
    if (local_180[0] == (long *)0x0) goto LAB_0033d4e0;
    if (local_180[0] != local_1a0) {
      pplVar3 = local_180;
      local_70[0] = local_180[0];
      goto LAB_0033d528;
    }
    local_70[0] = local_90;
                    /* try { // try from 0033d640 to 0033d64b has its CatchHandler @ 0033d650 */
    (**(code **)(local_1a0[0] + 0x18))(local_1a0,local_90);
  }
                    /* try { // try from 0033d52c to 0033d547 has its CatchHandler @ 0033d66c */
  FUN_0033e740(local_170,&local_1b0,local_90,param_5 & 1,param_6 & 1);
  if (local_70[0] == local_90) {
    lVar4 = 0x20;
    plVar2 = local_90;
LAB_0033d568:
    (**(code **)(*plVar2 + lVar4))();
  }
  else if (local_70[0] != (long *)0x0) {
    lVar4 = 0x28;
    plVar2 = local_70[0];
    goto LAB_0033d568;
  }
                    /* try { // try from 0033d574 to 0033d583 has its CatchHandler @ 0033d65c */
  FUN_0033dfb8(local_170,1,param_1);
  if ((local_e0 & 1) != 0) {
    free(local_d0);
  }
  if (local_f8 != (void *)0x0) {
    local_f0 = local_f8;
    free(local_f8);
  }
  if (local_150 == local_170) {
    lVar4 = 0x20;
    local_150 = local_170;
LAB_0033d5c8:
    (**(code **)(*local_150 + lVar4))();
  }
  else if (local_150 != (long *)0x0) {
    lVar4 = 0x28;
    goto LAB_0033d5c8;
  }
  if (local_180[0] == local_1a0) {
    lVar4 = 0x20;
    plVar2 = local_1a0;
  }
  else {
    if (local_180[0] == (long *)0x0) goto LAB_0033d604;
    lVar4 = 0x28;
    plVar2 = local_180[0];
  }
  (**(code **)(*plVar2 + lVar4))();
LAB_0033d604:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033d6f4  FUN_0033d6f4 =====

void FUN_0033d6f4(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007a1408 + 0x10);
  FUN_0033d7c8(param_1 + 0xb,param_1[0xc]);
                    /* try { // try from 0033d720 to 0033d727 has its CatchHandler @ 0033d75c */
  FUN_00313038(param_1 + 9,(char)param_1[8]);
                    /* try { // try from 0033d72c to 0033d733 has its CatchHandler @ 0033d758 */
  FUN_00313038(param_1 + 6,(char)param_1[5]);
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    return;
  }
  free((void *)param_1[3]);
  return;
}


// ===== 0033d760  FUN_0033d760 =====

void FUN_0033d760(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007a1408 + 0x10);
  FUN_0033d7c8(param_1 + 0xb,param_1[0xc]);
                    /* try { // try from 0033d78c to 0033d793 has its CatchHandler @ 0033d7c4 */
  FUN_00313038(param_1 + 9,(char)param_1[8]);
                    /* try { // try from 0033d798 to 0033d79f has its CatchHandler @ 0033d7c0 */
  FUN_00313038(param_1 + 6,(char)param_1[5]);
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    free((void *)param_1[3]);
  }
  free(param_1);
  return;
}


// ===== 0033d7c8  FUN_0033d7c8 =====

void FUN_0033d7c8(undefined8 param_1,undefined8 *param_2)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  
  if (param_2 != (undefined8 *)0x0) {
    FUN_0033d7c8(param_1,*param_2);
    FUN_0033d7c8(param_1,param_2[1]);
    plVar3 = (long *)param_2[8];
    if ((plVar3 == (long *)0x0) || (lVar2 = FUN_00755c50(0xffffffffffffffff,plVar3 + 1), lVar2 != 0)
       ) {
      bVar1 = *(byte *)(param_2 + 4);
    }
    else {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      FUN_0071245c(plVar3);
      bVar1 = *(byte *)(param_2 + 4);
    }
    if ((bVar1 & 1) != 0) {
      free((void *)param_2[6]);
    }
    free(param_2);
    return;
  }
  return;
}


// ===== 0033d854  FUN_0033d854 =====

void FUN_0033d854(long *param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar3 = PTR_DAT_007a1428;
  puVar1 = PTR_PTR_007a1420;
  param_1[0x1d] = 0;
  lVar4 = *(long *)(puVar1 + 8);
  uVar2 = *(undefined8 *)(puVar1 + 0x10);
  puVar1 = puVar3 + 0x40;
  param_1[0x17] = (long)puVar1;
  *param_1 = lVar4;
  lVar4 = *(long *)(lVar4 + -0x18);
  param_1[1] = 0;
  *(undefined8 *)((long)param_1 + lVar4) = uVar2;
  lVar4 = (long)param_1 + *(long *)(*param_1 + -0x18);
                    /* try { // try from 0033d8b8 to 0033d8c3 has its CatchHandler @ 0033d930 */
  FUN_00715fc0(lVar4,param_1 + 2);
  *(undefined8 *)(lVar4 + 0x88) = 0;
  *(undefined4 *)(lVar4 + 0x90) = 0xffffffff;
  *param_1 = (long)(puVar3 + 0x18);
  param_1[0x17] = (long)puVar1;
                    /* try { // try from 0033d8dc to 0033d8e3 has its CatchHandler @ 0033d928 */
  FUN_00718b7c(param_1 + 2);
                    /* try { // try from 0033d8e4 to 0033d90f has its CatchHandler @ 0033d944 */
  lVar4 = FUN_00718a1c(param_1 + 2,param_2,param_3 | 8);
  if (lVar4 == 0) {
    lVar4 = (long)param_1 + *(long *)(*param_1 + -0x18);
    FUN_00715ee0(lVar4,*(uint *)(lVar4 + 0x20) | 4);
  }
  return;
}


// ===== 0033d96c  FUN_0033d96c =====

void FUN_0033d96c(byte *param_1,uint *param_2)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 local_58;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  bVar1 = *param_1;
  if (bVar1 < 6) {
    if (bVar1 == 4) {
      uVar4 = (uint)param_1[8];
    }
    else {
      if (bVar1 != 5) {
LAB_0033d9c0:
        uVar3 = FUN_00753a74(0x20);
        local_58 = FUN_00312898(param_1);
                    /* try { // try from 0033d9e4 to 0033d9f7 has its CatchHandler @ 0033da9c */
        FUN_00321398(auStack_50,"type must be number, but is ",&local_58);
                    /* try { // try from 0033d9fc to 0033da3f has its CatchHandler @ 0033da78 */
        FUN_00312624(uVar3,0x12e,auStack_50,param_1);
        if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
          FUN_00753c5c(uVar3,PTR_PTR_007a12e8,PTR_FUN_007a12f0);
        }
        goto LAB_0033dac4;
      }
LAB_0033d9a8:
      uVar4 = *(uint *)(param_1 + 8);
    }
  }
  else {
    if (bVar1 != 7) {
      if (bVar1 != 6) goto LAB_0033d9c0;
      goto LAB_0033d9a8;
    }
    uVar4 = (uint)*(double *)(param_1 + 8);
  }
  *param_2 = uVar4;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
LAB_0033dac4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033dac8  FUN_0033dac8 =====

void FUN_0033dac8(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,long *param_4)

{
  size_t __n;
  undefined *puVar1;
  long *plVar2;
  void *__dest;
  long lVar3;
  long *plVar4;
  void *__src;
  
  plVar2 = (long *)FUN_00759c3c(0x30);
  puVar1 = PTR_DAT_007a1418;
  __src = (void *)*param_3;
  lVar3 = *param_4;
  plVar2[1] = 0;
  plVar2[2] = 0;
  __n = lVar3 - (long)__src;
  plVar2[4] = 0;
  plVar2[5] = 0;
  plVar4 = plVar2 + 3;
  *plVar4 = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  if (__n != 0) {
    if ((long)__n < 0) {
                    /* try { // try from 0033db64 to 0033db6b has its CatchHandler @ 0033db6c */
                    /* WARNING: Subroutine does not return */
      FUN_00323508(plVar4);
    }
                    /* try { // try from 0033db28 to 0033db2f has its CatchHandler @ 0033db6c */
    __dest = (void *)FUN_00759c3c(__n);
    plVar2[3] = (long)__dest;
    plVar2[5] = (long)__dest + __n;
    memcpy(__dest,__src,__n);
    plVar2[4] = (long)__dest + __n;
  }
  *param_1 = plVar4;
  param_1[1] = plVar2;
  return;
}


// ===== 0033db9c  FUN_0033db9c =====

void FUN_0033db9c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_007609a8;
  FUN_00712454();
  return;
}


// ===== 0033dbb0  FUN_0033dbb0 =====

void FUN_0033dbb0(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007a1418 + 0x10);
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 0033dbe4  FUN_0033dbe4 =====

void FUN_0033dbe4(long param_1)

{
  void *__ptr;
  
  __ptr = *(void **)(param_1 + 0x18);
  if (__ptr != (void *)0x0) {
    *(void **)(param_1 + 0x20) = __ptr;
    free(__ptr);
    return;
  }
  return;
}


// ===== 0033dbfc  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0033dc00  FUN_0033dc00 =====

long * FUN_0033dc00(long *param_1,byte *param_2,byte *param_3,long *param_4)

{
  void *__s2;
  size_t __n;
  ulong uVar1;
  byte *__s1;
  bool bVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  
  lVar11 = tpidr_el0;
  lVar8 = *(long *)(lVar11 + 0x28);
  plVar12 = param_1 + 1;
  plVar9 = (long *)*plVar12;
  plVar13 = plVar12;
  if (plVar9 != (long *)0x0) {
    uVar1 = *(ulong *)(param_2 + 8);
    __s1 = *(byte **)(param_2 + 0x10);
    if ((*param_2 & 1) == 0) {
      __s1 = param_2 + 1;
      uVar1 = (ulong)(*param_2 >> 1);
    }
    do {
      while( true ) {
        plVar12 = plVar9;
        __s2 = (void *)((long)plVar12 + 0x21);
        uVar3 = (ulong)(*(byte *)(plVar12 + 4) >> 1);
        if ((*(byte *)(plVar12 + 4) & 1) != 0) {
          __s2 = (void *)plVar12[6];
          uVar3 = plVar12[5];
        }
        __n = uVar3;
        if (uVar1 <= uVar3) {
          __n = uVar1;
        }
        iVar4 = memcmp(__s1,__s2,__n);
        bVar2 = uVar1 < uVar3;
        if (iVar4 != 0) {
          bVar2 = iVar4 < 0;
        }
        if (bVar2) break;
        uVar5 = memcmp(__s2,__s1,__n);
        uVar6 = (ulong)uVar5;
        bVar2 = uVar3 < uVar1;
        if (uVar5 != 0) {
          bVar2 = (int)uVar5 < 0;
        }
        if (!bVar2) {
          uVar7 = 0;
          lVar11 = *(long *)(lVar11 + 0x28);
          plVar9 = plVar12;
          goto joined_r0x0033ddc0;
        }
        plVar9 = (long *)plVar12[1];
        if ((long *)plVar12[1] == (long *)0x0) {
          plVar13 = plVar12 + 1;
          goto LAB_0033dd04;
        }
      }
      plVar9 = (long *)*plVar12;
      plVar13 = plVar12;
    } while ((long *)*plVar12 != (long *)0x0);
  }
LAB_0033dd04:
  plVar9 = (long *)FUN_00759c3c(0x48);
  if ((*param_3 & 1) == 0) {
    lVar14 = *(long *)param_3;
    lVar10 = *(long *)(param_3 + 0x10);
    plVar9[5] = *(long *)(param_3 + 8);
    plVar9[4] = lVar14;
    plVar9[6] = lVar10;
  }
  else {
                    /* try { // try from 0033dd38 to 0033dd3f has its CatchHandler @ 0033dde8 */
    FUN_002fb36c(plVar9 + 4,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 8));
  }
  lVar10 = param_4[1];
  plVar9[7] = *param_4;
  plVar9[8] = lVar10;
  if (lVar10 != 0) {
    FUN_00755c20(1,lVar10 + 8);
  }
  *plVar9 = 0;
  plVar9[1] = 0;
  plVar9[2] = (long)plVar12;
  *plVar13 = (long)plVar9;
  plVar12 = plVar9;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    plVar12 = (long *)*plVar13;
  }
  uVar6 = FUN_00328410(param_1[1],plVar12);
  uVar7 = 1;
  param_1[2] = param_1[2] + 1;
  lVar11 = *(long *)(lVar11 + 0x28);
joined_r0x0033ddc0:
  if (lVar11 != lVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6,uVar7);
  }
  return plVar9;
}


// ===== 0033de14  FUN_0033de14 =====

void FUN_0033de14(undefined8 *param_1)

{
  long lVar1;
  void *__ptr;
  long *plVar2;
  
  __ptr = (void *)*param_1;
  *param_1 = 0;
  if (__ptr != (void *)0x0) {
    if (*(char *)(param_1 + 2) != '\0') {
      plVar2 = *(long **)((long)__ptr + 0x40);
      if ((plVar2 != (long *)0x0) &&
         (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0)) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        FUN_0071245c(plVar2);
      }
      if ((*(byte *)((long)__ptr + 0x20) & 1) != 0) {
        free(*(void **)((long)__ptr + 0x30));
      }
    }
    free(__ptr);
    return;
  }
  return;
}


// ===== 0033de90  FUN_0033de90 =====

long * FUN_0033de90(long param_1,byte *param_2)

{
  size_t sVar1;
  ulong uVar2;
  byte *__s2;
  byte bVar3;
  bool bVar4;
  void *__s2_00;
  int iVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  
  plVar8 = (long *)(param_1 + 8);
  plVar10 = (long *)*plVar8;
  if (plVar10 != (long *)0x0) {
    uVar2 = *(ulong *)(param_2 + 8);
    __s2 = *(byte **)(param_2 + 0x10);
    plVar9 = plVar8;
    if ((*param_2 & 1) == 0) {
      __s2 = param_2 + 1;
      uVar2 = (ulong)(*param_2 >> 1);
    }
    do {
      bVar3 = *(byte *)(plVar10 + 4);
      if ((bVar3 & 1) == 0) {
        uVar11 = (ulong)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) goto LAB_0033dee8;
LAB_0033df1c:
        sVar1 = uVar2;
        if (uVar11 <= uVar2) {
          sVar1 = uVar11;
        }
        iVar5 = memcmp((void *)((long)plVar10 + 0x21),__s2,sVar1);
        if (iVar5 != 0) goto LAB_0033df00;
LAB_0033df34:
        uVar6 = (uint)(uVar11 < uVar2);
        if (uVar6 != 0) goto LAB_0033df08;
LAB_0033df40:
        lVar7 = 0;
      }
      else {
        uVar11 = plVar10[5];
        if ((bVar3 & 1) == 0) goto LAB_0033df1c;
LAB_0033dee8:
        sVar1 = uVar2;
        if (uVar11 <= uVar2) {
          sVar1 = uVar11;
        }
        iVar5 = memcmp((void *)plVar10[6],__s2,sVar1);
        if (iVar5 == 0) goto LAB_0033df34;
LAB_0033df00:
        uVar6 = -(iVar5 >> 0x1f);
        if (uVar6 == 0) goto LAB_0033df40;
LAB_0033df08:
        lVar7 = 8;
      }
      if (uVar6 == 0) {
        plVar9 = plVar10;
      }
      plVar10 = *(long **)((long)plVar10 + lVar7);
    } while (plVar10 != (long *)0x0);
    if (plVar9 != plVar8) {
      uVar11 = (ulong)(*(byte *)(plVar9 + 4) >> 1);
      __s2_00 = (void *)((long)plVar9 + 0x21);
      if ((*(byte *)(plVar9 + 4) & 1) != 0) {
        uVar11 = plVar9[5];
        __s2_00 = (void *)plVar9[6];
      }
      sVar1 = uVar11;
      if (uVar2 <= uVar11) {
        sVar1 = uVar2;
      }
      iVar5 = memcmp(__s2,__s2_00,sVar1);
      bVar4 = uVar2 < uVar11;
      if (iVar5 != 0) {
        bVar4 = iVar5 < 0;
      }
      if (!bVar4) {
        plVar8 = plVar9;
      }
    }
  }
  return plVar8;
}


// ===== 0033dfb8  FUN_0033dfb8 =====

void FUN_0033dfb8(long *param_1,ulong param_2,char *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  char cVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  undefined8 local_1e8;
  char local_1e0;
  undefined8 local_1d8;
  char local_1d0;
  undefined8 local_1c8;
  byte local_1c0;
  undefined4 local_1bf;
  undefined2 local_1bb;
  void *local_1b0;
  byte local_1a8 [16];
  void *local_198;
  long local_190;
  long lStack_188;
  long local_180;
  ulong local_170;
  undefined8 uStack_168;
  void *local_160;
  undefined *local_158;
  uint local_150;
  undefined1 auStack_148 [16];
  long local_138;
  long local_130 [4];
  long *local_110;
  char *local_100;
  void *local_f8;
  void *pvStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  char local_d8;
  char local_d7;
  char local_a8;
  char local_70;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  plVar6 = (long *)param_1[4];
  if (plVar6 == (long *)0x0) {
    local_d7 = (char)param_1[0x1a];
    local_d8 = '\0';
    pvStack_f0 = (void *)0x0;
    local_f8 = (void *)0x0;
    uStack_e0 = 0;
    local_e8 = 0;
                    /* try { // try from 0033e02c to 0033e043 has its CatchHandler @ 0033e5e8 */
    local_100 = param_3;
    FUN_00341444(param_1,&local_100);
    if ((param_2 & 1) != 0) {
      iVar5 = FUN_0033e8b4(param_1 + 7);
      *(int *)(param_1 + 6) = iVar5;
      if (iVar5 != 0xf) {
        pbVar1 = (byte *)param_1[0xf];
        pbVar2 = (byte *)param_1[0x10];
        local_170 = 0;
        uStack_168 = 0;
        local_160 = (void *)0x0;
        for (; pbVar1 != pbVar2; pbVar1 = pbVar1 + 1) {
          if (*pbVar1 < 0x20) {
            local_150 = local_150 & 0xffffff00;
            local_158 = (undefined *)0x0;
                    /* try { // try from 0033e17c to 0033e197 has its CatchHandler @ 0033e658 */
            FUN_00342348(&local_158,*pbVar1,9);
            FUN_00713bdc(&local_170,&local_158);
          }
          else {
                    /* try { // try from 0033e154 to 0033e15b has its CatchHandler @ 0033e630 */
            FUN_007132e8(&local_170);
          }
        }
        lStack_188 = param_1[0xd];
        local_190 = param_1[0xc];
        local_180 = param_1[0xe];
        local_1c0 = 10;
        local_1bf = 0x756c6176;
        local_1bb = 0x65;
                    /* try { // try from 0033e090 to 0033e0a3 has its CatchHandler @ 0033e548 */
        FUN_0034107c(local_1a8,param_1,0xf,&local_1c0);
                    /* try { // try from 0033e0a4 to 0033e0bb has its CatchHandler @ 0033e50c */
        FUN_003248ec(&local_158,0x65,&local_190,local_1a8,0);
        local_d8 = '\x01';
        if (local_d7 != '\0') {
          plVar6 = (long *)FUN_00753a74(0x28);
          *plVar6 = (long)(PTR_DAT_007a12f8 + 0x10);
          *(uint *)(plVar6 + 1) = local_150;
          FUN_007127d4(plVar6 + 2,auStack_148);
          *plVar6 = (long)(PTR_DAT_007a1308 + 0x10);
          plVar6[4] = local_138;
          if (*(long *)(lVar4 + 0x28) == local_48) {
                    /* try { // try from 0033e4d4 to 0033e4eb has its CatchHandler @ 0033e4ec */
                    /* WARNING: Subroutine does not return */
            FUN_00753c5c(plVar6,PTR_PTR_007a1310,PTR_FUN_007a12f0);
          }
          goto LAB_0033e6b4;
        }
        local_158 = PTR_DAT_007a12f8 + 0x10;
        FUN_0073a2c4(auStack_148);
        FUN_0073a174(&local_158);
        if ((local_1a8[0] & 1) != 0) {
          free(local_198);
        }
        if ((local_1c0 & 1) != 0) {
          free(local_1b0);
        }
        if ((local_170 & 1) != 0) {
          free(local_160);
        }
      }
    }
    if (local_d8 != '\0') {
      local_1e8 = *(undefined8 *)(param_3 + 8);
      param_3[8] = '\0';
      param_3[9] = '\0';
      param_3[10] = '\0';
      param_3[0xb] = '\0';
      param_3[0xc] = '\0';
      param_3[0xd] = '\0';
      param_3[0xe] = '\0';
      param_3[0xf] = '\0';
      *param_3 = '\t';
                    /* try { // try from 0033e138 to 0033e13f has its CatchHandler @ 0033e5e0 */
      FUN_00313038(&local_1e8);
    }
    if (local_f8 != (void *)0x0) {
      pvStack_f0 = local_f8;
      free(local_f8);
    }
  }
  else {
    if (plVar6 == param_1) {
      local_110 = local_130;
      (**(code **)(*param_1 + 0x18))(param_1,local_130);
    }
    else {
      local_110 = (long *)(**(code **)(*plVar6 + 0x10))();
    }
                    /* try { // try from 0033e1bc to 0033e1cf has its CatchHandler @ 0033e5f8 */
    FUN_0032371c(&local_100,param_3,local_130,(char)param_1[0x1a]);
    if (local_110 == local_130) {
      lVar7 = 0x20;
      plVar6 = local_130;
LAB_0033e1f0:
      (**(code **)(*plVar6 + lVar7))();
    }
    else if (local_110 != (long *)0x0) {
      lVar7 = 0x28;
      plVar6 = local_110;
      goto LAB_0033e1f0;
    }
                    /* try { // try from 0033e1fc to 0033e213 has its CatchHandler @ 0033e640 */
    FUN_003400c0(param_1,&local_100);
    if ((param_2 & 1) != 0) {
      iVar5 = FUN_0033e8b4(param_1 + 7);
      *(int *)(param_1 + 6) = iVar5;
      if (iVar5 != 0xf) {
        pbVar1 = (byte *)param_1[0xf];
        pbVar2 = (byte *)param_1[0x10];
        local_170 = 0;
        uStack_168 = 0;
        local_160 = (void *)0x0;
        for (; pbVar1 != pbVar2; pbVar1 = pbVar1 + 1) {
          if (*pbVar1 < 0x20) {
            local_150 = local_150 & 0xffffff00;
            local_158 = (undefined *)0x0;
                    /* try { // try from 0033e33c to 0033e357 has its CatchHandler @ 0033e680 */
            FUN_00342348(&local_158,*pbVar1,9);
            FUN_00713bdc(&local_170,&local_158);
          }
          else {
                    /* try { // try from 0033e314 to 0033e31b has its CatchHandler @ 0033e648 */
            FUN_007132e8(&local_170);
          }
        }
        lStack_188 = param_1[0xd];
        local_190 = param_1[0xc];
        local_180 = param_1[0xe];
        local_1c0 = 10;
        local_1bf = 0x756c6176;
        local_1bb = 0x65;
                    /* try { // try from 0033e260 to 0033e273 has its CatchHandler @ 0033e5c0 */
        FUN_0034107c(local_1a8,param_1,0xf,&local_1c0);
                    /* try { // try from 0033e274 to 0033e28b has its CatchHandler @ 0033e58c */
        FUN_003248ec(&local_158,0x65,&local_190,local_1a8,0);
        local_a8 = '\x01';
        if (local_70 != '\0') {
          plVar6 = (long *)FUN_00753a74(0x28);
          *plVar6 = (long)(PTR_DAT_007a12f8 + 0x10);
          *(uint *)(plVar6 + 1) = local_150;
          FUN_007127d4(plVar6 + 2,auStack_148);
          *plVar6 = (long)(PTR_DAT_007a1308 + 0x10);
          plVar6[4] = local_138;
          if (*(long *)(lVar4 + 0x28) == local_48) {
                    /* try { // try from 0033e460 to 0033e477 has its CatchHandler @ 0033e56c */
                    /* WARNING: Subroutine does not return */
            FUN_00753c5c(plVar6,PTR_PTR_007a1310,PTR_FUN_007a12f0);
          }
          goto LAB_0033e6b4;
        }
        local_158 = PTR_DAT_007a12f8 + 0x10;
        FUN_0073a2c4(auStack_148);
        FUN_0073a174(&local_158);
        if ((local_1a8[0] & 1) != 0) {
          free(local_198);
        }
        if ((local_1c0 & 1) != 0) {
          free(local_1b0);
        }
        if ((local_170 & 1) != 0) {
          free(local_160);
        }
      }
    }
    if (local_a8 == '\0') {
      cVar3 = *param_3;
      if (cVar3 == '\t') {
        local_1d8 = *(undefined8 *)(param_3 + 8);
        *param_3 = '\0';
        param_3[8] = '\0';
        param_3[9] = '\0';
        param_3[10] = '\0';
        param_3[0xb] = '\0';
        param_3[0xc] = '\0';
        param_3[0xd] = '\0';
        param_3[0xe] = '\0';
        param_3[0xf] = '\0';
                    /* try { // try from 0033e380 to 0033e38b has its CatchHandler @ 0033e568 */
        local_1e0 = cVar3;
        FUN_00313038(&local_1d8,9);
      }
    }
    else {
      local_1d0 = *param_3;
      local_1c8 = *(undefined8 *)(param_3 + 8);
      param_3[8] = '\0';
      param_3[9] = '\0';
      param_3[10] = '\0';
      param_3[0xb] = '\0';
      param_3[0xc] = '\0';
      param_3[0xd] = '\0';
      param_3[0xe] = '\0';
      param_3[0xf] = '\0';
      *param_3 = '\t';
                    /* try { // try from 0033e308 to 0033e30f has its CatchHandler @ 0033e5e4 */
      FUN_00313038(&local_1c8);
    }
    FUN_00324f24(&local_100);
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
LAB_0033e6b4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0033e6b8  FUN_0033e6b8 =====

void FUN_0033e6b8(long *param_1)

{
  void *__ptr;
  long *plVar1;
  
  if ((*(byte *)(param_1 + 0x12) & 1) != 0) {
    free((void *)param_1[0x14]);
  }
  __ptr = (void *)param_1[0xf];
  if (__ptr != (void *)0x0) {
    param_1[0x10] = (long)__ptr;
    free(__ptr);
  }
  plVar1 = (long *)param_1[4];
  if (plVar1 != param_1) {
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0033e714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x28))(plVar1);
      return;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0033e730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1);
  return;
}


// ===== 0033e740  FUN_0033e740 =====

void FUN_0033e740(long param_1,undefined8 *param_2,long *param_3,byte param_4,byte param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  lconv *plVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  plVar4 = (long *)param_3[4];
  if (plVar4 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  else if (plVar4 == param_3) {
    *(long *)(param_1 + 0x20) = param_1;
    (**(code **)(*(long *)param_3[4] + 0x18))((long *)param_3[4],param_1);
  }
  else {
    uVar2 = (**(code **)(*plVar4 + 0x10))(plVar4);
    *(undefined8 *)(param_1 + 0x20) = uVar2;
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  uVar6 = param_2[1];
  uVar2 = *param_2;
  *(byte *)(param_1 + 0x48) = param_5 & 1;
  *(undefined8 *)(param_1 + 0x50) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x40) = uVar6;
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  *(undefined1 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined1 **)(param_1 + 0xa8) = &DAT_001c717f;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
                    /* try { // try from 0033e7e8 to 0033e7eb has its CatchHandler @ 0033e86c */
  plVar3 = localeconv();
  if ((byte *)plVar3->decimal_point == (byte *)0x0) {
    uVar5 = 0x2e;
  }
  else {
    uVar5 = (ulong)(byte)*plVar3->decimal_point;
  }
  *(ulong *)(param_1 + 200) = uVar5;
  *(byte *)(param_1 + 0xd0) = param_4 & 1;
                    /* try { // try from 0033e80c to 0033e813 has its CatchHandler @ 0033e828 */
  uVar1 = FUN_0033e8b4(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  return;
}


// ===== 0033e870  FUN_0033e870 =====

void FUN_0033e870(long param_1)

{
  void *__ptr;
  
  if ((*(byte *)(param_1 + 0x58) & 1) != 0) {
    free(*(void **)(param_1 + 0x68));
  }
  __ptr = *(void **)(param_1 + 0x40);
  if (__ptr != (void *)0x0) {
    *(void **)(param_1 + 0x48) = __ptr;
    free(__ptr);
    return;
  }
  return;
}


// ===== 0033e8b4  FUN_0033e8b4 =====

undefined8 FUN_0033e8b4(long param_1)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  char *pcVar5;
  long *plVar6;
  
  if (*(long *)(param_1 + 0x28) == 0) {
    lVar2 = FUN_0033fd60(param_1);
    if (lVar2 == 0xef) {
      lVar2 = FUN_0033fd60(param_1);
      if ((lVar2 != 0xbb) || (lVar2 = FUN_0033fd60(param_1), lVar2 != 0xbf)) {
        pcVar5 = "invalid BOM; must be 0xEF 0xBB 0xBF if given";
LAB_0033e904:
        *(char **)(param_1 + 0x70) = pcVar5;
        goto LAB_0033e980;
      }
    }
    else {
      plVar6 = (long *)(param_1 + 0x30);
      lVar2 = *plVar6;
      *(undefined1 *)(param_1 + 0x20) = 1;
      *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
      if (lVar2 == 0) {
        plVar6 = (long *)(param_1 + 0x38);
        lVar2 = *plVar6;
        if (lVar2 != 0) goto LAB_0033e938;
      }
      else {
LAB_0033e938:
        *plVar6 = lVar2 + -1;
      }
      if (*(long *)(param_1 + 0x18) != -1) {
        *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + -1;
      }
    }
  }
  do {
    FUN_0033eb3c(param_1);
    if ((*(char *)(param_1 + 0x10) == '\0') || (*(long *)(param_1 + 0x18) != 0x2f)) {
      uVar4 = 8;
      switch(*(long *)(param_1 + 0x18)) {
      case 0x22:
        uVar4 = FUN_0033edec(param_1);
        return uVar4;
      case 0x2c:
        return 0xd;
      case 0x2d:
      case 0x30:
      case 0x31:
      case 0x32:
      case 0x33:
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x38:
      case 0x39:
        uVar4 = FUN_0033f7f0(param_1);
        return uVar4;
      case 0x3a:
        return 0xc;
      case 0x5b:
        goto switchD_0033e9b4_caseD_5b;
      case 0x5d:
        return 10;
      case 0x66:
        cVar1 = FUN_0033fd60(param_1);
        if (((cVar1 == 'a') && (cVar1 = FUN_0033fd60(param_1), cVar1 == 'l')) &&
           ((cVar1 = FUN_0033fd60(param_1), cVar1 == 's' &&
            (cVar1 = FUN_0033fd60(param_1), cVar1 == 'e')))) {
          return 2;
        }
        break;
      case 0x6e:
        cVar1 = FUN_0033fd60(param_1);
        if (((cVar1 == 'u') && (cVar1 = FUN_0033fd60(param_1), cVar1 == 'l')) &&
           (cVar1 = FUN_0033fd60(param_1), cVar1 == 'l')) {
          return 3;
        }
        break;
      case 0x74:
        cVar1 = FUN_0033fd60(param_1);
        if (((cVar1 == 'r') && (cVar1 = FUN_0033fd60(param_1), cVar1 == 'u')) &&
           (cVar1 = FUN_0033fd60(param_1), cVar1 == 'e')) {
          return 1;
        }
        break;
      case 0x7b:
        return 9;
      case 0x7d:
        return 0xb;
      case -1:
      case 0:
        return 0xf;
      }
      pcVar5 = "invalid literal";
      goto LAB_0033e904;
    }
    uVar3 = FUN_0033eccc(param_1);
  } while ((uVar3 & 1) != 0);
LAB_0033e980:
  uVar4 = 0xe;
switchD_0033e9b4_caseD_5b:
  return uVar4;
}


// ===== 0033eb3c  FUN_0033eb3c =====

void FUN_0033eb3c(long *param_1)

{
  ulong uVar1;
  byte *pbVar2;
  void *__dest;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  void *__src;
  size_t __n;
  ulong uVar6;
  undefined1 *puVar7;
  
  do {
    while( true ) {
      param_1[6] = param_1[6] + 1;
      param_1[5] = param_1[5] + 1;
      if ((char)param_1[4] == '\0') {
        pbVar2 = (byte *)*param_1;
        if (pbVar2 == (byte *)param_1[1]) {
          param_1[3] = -1;
          return;
        }
        uVar6 = (ulong)*pbVar2;
        *param_1 = (long)(pbVar2 + 1);
        param_1[3] = uVar6;
      }
      else {
        uVar6 = param_1[3];
        *(undefined1 *)(param_1 + 4) = 0;
      }
      if (uVar6 == 0xffffffffffffffff) {
        return;
      }
      puVar7 = (undefined1 *)param_1[9];
      if (puVar7 < (undefined1 *)param_1[10]) break;
      __src = (void *)param_1[8];
      __n = (long)puVar7 - (long)__src;
      uVar1 = __n + 1;
      if ((long)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00323508(param_1 + 8);
      }
      uVar4 = param_1[10] - (long)__src;
      uVar5 = uVar4 * 2;
      if (uVar5 < uVar1 || uVar5 - uVar1 == 0) {
        uVar5 = uVar1;
      }
      if (0x3ffffffffffffffe < uVar4) {
        uVar5 = 0x7fffffffffffffff;
      }
      if (uVar5 == 0) {
        __dest = (void *)0x0;
      }
      else {
        __dest = (void *)FUN_00759c3c(uVar5);
      }
      puVar7 = (undefined1 *)((long)__dest + __n) + 1;
      *(undefined1 *)((long)__dest + __n) = (char)uVar6;
      memcpy(__dest,__src,__n);
      param_1[8] = (long)__dest;
      param_1[9] = (long)puVar7;
      param_1[10] = (long)__dest + uVar5;
      if (__src != (void *)0x0) {
        free(__src);
      }
      lVar3 = param_1[3];
      param_1[9] = (long)puVar7;
      if (0xc < lVar3) goto LAB_0033ec80;
LAB_0033ebdc:
      if (lVar3 != 9) {
        if (lVar3 != 10) {
          return;
        }
        param_1[6] = 0;
        param_1[7] = param_1[7] + 1;
      }
    }
    *puVar7 = (char)uVar6;
    lVar3 = param_1[3];
    param_1[9] = (long)(puVar7 + 1);
    if (lVar3 < 0xd) goto LAB_0033ebdc;
LAB_0033ec80:
    if ((lVar3 != 0xd) && (lVar3 != 0x20)) {
      return;
    }
  } while( true );
}


// ===== 0033eccc  FUN_0033eccc =====

undefined8 FUN_0033eccc(long param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_0033fd60();
  if (lVar1 == 0x2a) {
    while( true ) {
      while (lVar1 = FUN_0033fd60(param_1), lVar1 != 0x2a) {
        if (lVar1 + 1U < 2) {
          *(char **)(param_1 + 0x70) = "invalid comment; missing closing \'*/\'";
          return 0;
        }
      }
      lVar1 = FUN_0033fd60(param_1);
      if (lVar1 == 0x2f) break;
      lVar1 = *(long *)(param_1 + 0x30);
      *(undefined1 *)(param_1 + 0x20) = 1;
      *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
      plVar2 = (long *)(param_1 + 0x30);
      if ((lVar1 != 0) ||
         (lVar1 = *(long *)(param_1 + 0x38), plVar2 = (long *)(param_1 + 0x38), lVar1 != 0)) {
        *plVar2 = lVar1 + -1;
      }
      if (*(long *)(param_1 + 0x18) != -1) {
        *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + -1;
      }
    }
  }
  else {
    if (lVar1 != 0x2f) {
      *(char **)(param_1 + 0x70) = "invalid comment; expecting \'/\' or \'*\' after \'/\'";
      return 0;
    }
    do {
      do {
        lVar1 = FUN_0033fd60(param_1);
      } while (0xe < lVar1 + 1U);
    } while ((0x4803U >> (ulong)((uint)(lVar1 + 1U) & 0x1f) & 1) == 0);
  }
  return 1;
}


// ===== 0033edec  FUN_0033edec =====

undefined8 FUN_0033edec(long *param_1)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  char *pcVar8;
  ulong uVar9;
  byte *pbVar10;
  long *plVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  void *pvVar14;
  size_t sVar15;
  ulong uVar16;
  undefined1 *puVar17;
  
  pbVar10 = (byte *)(param_1 + 0xb);
  if ((*pbVar10 & 1) == 0) {
    *(undefined2 *)(param_1 + 0xb) = 0;
  }
  else {
    *(undefined1 *)param_1[0xd] = 0;
    param_1[0xc] = 0;
  }
  plVar11 = param_1 + 8;
  puVar12 = (undefined1 *)*plVar11;
  lVar5 = param_1[3];
  param_1[9] = (long)puVar12;
  if (puVar12 < (undefined1 *)param_1[10]) {
    puVar13 = puVar12 + 1;
    *puVar12 = (char)lVar5;
  }
  else {
    uVar6 = param_1[10] - (long)puVar12;
    uVar16 = uVar6 * 2;
    if (uVar16 < 2) {
      uVar16 = 1;
    }
    if (0x3ffffffffffffffe < uVar6) {
      uVar16 = 0x7fffffffffffffff;
    }
                    /* try { // try from 0033ee78 to 0033ee7f has its CatchHandler @ 0033f7ec */
    puVar17 = (undefined1 *)FUN_00759c3c(uVar16);
    puVar13 = puVar17 + 1;
    *puVar17 = (char)lVar5;
    param_1[8] = (long)puVar17;
    param_1[9] = (long)puVar13;
    param_1[10] = (long)(puVar17 + uVar16);
    if (puVar12 != (undefined1 *)0x0) {
      free(puVar12);
    }
  }
  param_1[9] = (long)puVar13;
LAB_0033eee8:
  param_1[6] = param_1[6] + 1;
  param_1[5] = param_1[5] + 1;
  if ((char)param_1[4] == '\0') {
    pbVar1 = (byte *)*param_1;
    if (pbVar1 == (byte *)param_1[1]) {
      param_1[3] = -1;
switchD_0033eff4_caseD_ffffffff:
      pcVar8 = "invalid string: missing closing quote";
switchD_0033eff4_caseD_1:
      param_1[0xe] = (long)pcVar8;
      return 0xe;
    }
    uVar16 = (ulong)*pbVar1;
    *param_1 = (long)(pbVar1 + 1);
    param_1[3] = uVar16;
  }
  else {
    uVar16 = param_1[3];
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (uVar16 == 0xffffffffffffffff) goto switchD_0033eff4_caseD_ffffffff;
  puVar12 = (undefined1 *)param_1[9];
  if (puVar12 < (undefined1 *)param_1[10]) {
    puVar17 = puVar12 + 1;
    *puVar12 = (char)uVar16;
  }
  else {
    pvVar14 = (void *)*plVar11;
    sVar15 = (long)puVar12 - (long)pvVar14;
    uVar6 = sVar15 + 1;
    if ((long)uVar6 < 0) goto LAB_0033f7c0;
    uVar7 = param_1[10] - (long)pvVar14;
    uVar9 = uVar7 * 2;
    if (uVar9 < uVar6 || uVar9 - uVar6 == 0) {
      uVar9 = uVar6;
    }
    if (0x3ffffffffffffffe < uVar7) {
      uVar9 = 0x7fffffffffffffff;
    }
    if (uVar9 == 0) {
      pvVar4 = (void *)0x0;
    }
    else {
      pvVar4 = (void *)FUN_00759c3c(uVar9);
    }
    puVar17 = (undefined1 *)((long)pvVar4 + sVar15) + 1;
    *(undefined1 *)((long)pvVar4 + sVar15) = (char)uVar16;
    memcpy(pvVar4,pvVar14,sVar15);
    param_1[8] = (long)pvVar4;
    param_1[9] = (long)puVar17;
    param_1[10] = (long)pvVar4 + uVar9;
    if (pvVar14 != (void *)0x0) {
      free(pvVar14);
    }
  }
  uVar16 = param_1[3];
  param_1[9] = (long)puVar17;
  if (uVar16 == 10) {
    param_1[6] = 0;
    param_1[7] = param_1[7] + 1;
    pcVar8 = "invalid string: control character U+000A (LF) must be escaped to \\u000A or \\n";
    goto switchD_0033eff4_caseD_1;
  }
  pcVar8 = "invalid string: control character U+0001 (SOH) must be escaped to \\u0001";
  switch(uVar16) {
  case 0:
    pcVar8 = "invalid string: control character U+0000 (NUL) must be escaped to \\u0000";
  case 1:
    goto switchD_0033eff4_caseD_1;
  case 2:
    pcVar8 = "invalid string: control character U+0002 (STX) must be escaped to \\u0002";
    goto switchD_0033eff4_caseD_1;
  case 3:
    pcVar8 = "invalid string: control character U+0003 (ETX) must be escaped to \\u0003";
    goto switchD_0033eff4_caseD_1;
  case 4:
    pcVar8 = "invalid string: control character U+0004 (EOT) must be escaped to \\u0004";
    goto switchD_0033eff4_caseD_1;
  case 5:
    pcVar8 = "invalid string: control character U+0005 (ENQ) must be escaped to \\u0005";
    goto switchD_0033eff4_caseD_1;
  case 6:
    pcVar8 = "invalid string: control character U+0006 (ACK) must be escaped to \\u0006";
    goto switchD_0033eff4_caseD_1;
  case 7:
    pcVar8 = "invalid string: control character U+0007 (BEL) must be escaped to \\u0007";
    goto switchD_0033eff4_caseD_1;
  case 8:
    pcVar8 = "invalid string: control character U+0008 (BS) must be escaped to \\u0008 or \\b";
    goto switchD_0033eff4_caseD_1;
  case 9:
    pcVar8 = "invalid string: control character U+0009 (HT) must be escaped to \\u0009 or \\t";
    goto switchD_0033eff4_caseD_1;
  case 0xb:
    pcVar8 = "invalid string: control character U+000B (VT) must be escaped to \\u000B";
    goto switchD_0033eff4_caseD_1;
  case 0xc:
    pcVar8 = "invalid string: control character U+000C (FF) must be escaped to \\u000C or \\f";
    goto switchD_0033eff4_caseD_1;
  case 0xd:
    pcVar8 = "invalid string: control character U+000D (CR) must be escaped to \\u000D or \\r";
    goto switchD_0033eff4_caseD_1;
  case 0xe:
    pcVar8 = "invalid string: control character U+000E (SO) must be escaped to \\u000E";
    goto switchD_0033eff4_caseD_1;
  case 0xf:
    pcVar8 = "invalid string: control character U+000F (SI) must be escaped to \\u000F";
    goto switchD_0033eff4_caseD_1;
  case 0x10:
    pcVar8 = "invalid string: control character U+0010 (DLE) must be escaped to \\u0010";
    goto switchD_0033eff4_caseD_1;
  case 0x11:
    pcVar8 = "invalid string: control character U+0011 (DC1) must be escaped to \\u0011";
    goto switchD_0033eff4_caseD_1;
  case 0x12:
    pcVar8 = "invalid string: control character U+0012 (DC2) must be escaped to \\u0012";
    goto switchD_0033eff4_caseD_1;
  case 0x13:
    pcVar8 = "invalid string: control character U+0013 (DC3) must be escaped to \\u0013";
    goto switchD_0033eff4_caseD_1;
  case 0x14:
    pcVar8 = "invalid string: control character U+0014 (DC4) must be escaped to \\u0014";
    goto switchD_0033eff4_caseD_1;
  case 0x15:
    pcVar8 = "invalid string: control character U+0015 (NAK) must be escaped to \\u0015";
    goto switchD_0033eff4_caseD_1;
  case 0x16:
    pcVar8 = "invalid string: control character U+0016 (SYN) must be escaped to \\u0016";
    goto switchD_0033eff4_caseD_1;
  case 0x17:
    pcVar8 = "invalid string: control character U+0017 (ETB) must be escaped to \\u0017";
    goto switchD_0033eff4_caseD_1;
  case 0x18:
    pcVar8 = "invalid string: control character U+0018 (CAN) must be escaped to \\u0018";
    goto switchD_0033eff4_caseD_1;
  case 0x19:
    pcVar8 = "invalid string: control character U+0019 (EM) must be escaped to \\u0019";
    goto switchD_0033eff4_caseD_1;
  case 0x1a:
    pcVar8 = "invalid string: control character U+001A (SUB) must be escaped to \\u001A";
    goto switchD_0033eff4_caseD_1;
  case 0x1b:
    pcVar8 = "invalid string: control character U+001B (ESC) must be escaped to \\u001B";
    goto switchD_0033eff4_caseD_1;
  case 0x1c:
    pcVar8 = "invalid string: control character U+001C (FS) must be escaped to \\u001C";
    goto switchD_0033eff4_caseD_1;
  case 0x1d:
    pcVar8 = "invalid string: control character U+001D (GS) must be escaped to \\u001D";
    goto switchD_0033eff4_caseD_1;
  case 0x1e:
    pcVar8 = "invalid string: control character U+001E (RS) must be escaped to \\u001E";
    goto switchD_0033eff4_caseD_1;
  case 0x1f:
    pcVar8 = "invalid string: control character U+001F (US) must be escaped to \\u001F";
    goto switchD_0033eff4_caseD_1;
  case 0x20:
  case 0x21:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x75:
  case 0x76:
  case 0x77:
  case 0x78:
  case 0x79:
  case 0x7a:
  case 0x7b:
  case 0x7c:
  case 0x7d:
  case 0x7e:
  case 0x7f:
    goto switchD_0033eff4_caseD_20;
  case 0x22:
    return 4;
  case 0x5c:
    lVar5 = FUN_0033fd60(param_1);
    pcVar8 = "invalid string: forbidden character after backslash";
    if (lVar5 < 0x66) {
      if (lVar5 < 0x5c) {
        if (lVar5 == 0x22) {
          uVar16 = 0x22;
        }
        else {
          if (lVar5 != 0x2f) goto switchD_0033eff4_caseD_1;
          uVar16 = 0x2f;
        }
      }
      else if (lVar5 == 0x5c) {
        uVar16 = 0x5c;
      }
      else {
        if (lVar5 != 0x62) goto switchD_0033eff4_caseD_1;
        uVar16 = 8;
      }
    }
    else if (lVar5 < 0x72) {
      if (lVar5 == 0x66) {
        uVar16 = 0xc;
      }
      else {
        if (lVar5 != 0x6e) goto switchD_0033eff4_caseD_1;
        uVar16 = 10;
      }
    }
    else if (lVar5 == 0x72) {
      uVar16 = 0xd;
    }
    else {
      if (lVar5 == 0x74) {
        uVar16 = 9;
        goto switchD_0033eff4_caseD_20;
      }
      if (lVar5 != 0x75) goto switchD_0033eff4_caseD_1;
      uVar2 = FUN_0033fec0(param_1);
      if (uVar2 == 0xffffffff) {
LAB_0033f7c8:
        pcVar8 = "invalid string: \'\\u\' must be followed by 4 hex digits";
        goto switchD_0033eff4_caseD_1;
      }
      uVar16 = (ulong)uVar2;
      if ((uVar2 & 0xfffffc00) == 0xd800) {
        lVar5 = FUN_0033fd60(param_1);
        if ((lVar5 == 0x5c) && (lVar5 = FUN_0033fd60(param_1), lVar5 == 0x75)) {
          uVar3 = FUN_0033fec0(param_1);
          if (uVar3 == 0xffffffff) goto LAB_0033f7c8;
          if (uVar3 >> 10 == 0x37) {
            uVar16 = (ulong)(uVar3 + uVar2 * 0x400 + 0xfca02400);
            goto LAB_0033f438;
          }
        }
        pcVar8 = "invalid string: surrogate U+D800..U+DBFF must be followed by U+DC00..U+DFFF";
        goto switchD_0033eff4_caseD_1;
      }
      if ((uVar2 & 0xfffffc00) == 0xdc00) {
        pcVar8 = "invalid string: surrogate U+DC00..U+DFFF must follow U+D800..U+DBFF";
        goto switchD_0033eff4_caseD_1;
      }
      if (0x7f < (int)uVar2) {
        if (uVar2 < 0x800) {
          FUN_007132e8(pbVar10,uVar2 >> 6 | 0xffffffc0);
          uVar16 = (ulong)(uVar2 & 0x3f | 0xffffff80);
        }
        else {
          if (uVar2 >> 0x10 == 0) {
            FUN_007132e8(pbVar10,uVar2 >> 0xc | 0xffffffe0);
          }
          else {
LAB_0033f438:
            FUN_007132e8(pbVar10,(uint)(uVar16 >> 0x12) | 0xfffffff0);
            uVar2 = (uint)uVar16;
            FUN_007132e8(pbVar10,uVar2 >> 0xc & 0x3f | 0xffffff80);
          }
          FUN_007132e8(pbVar10,uVar2 >> 6 & 0x3f | 0xffffff80);
          uVar16 = (ulong)(uVar2 & 0x3f | 0xffffff80);
        }
      }
    }
switchD_0033eff4_caseD_20:
    FUN_007132e8(pbVar10,uVar16 & 0xffffffff);
    goto LAB_0033eee8;
  case 0xc2:
  case 0xc3:
  case 0xc4:
  case 0xc5:
  case 0xc6:
  case 199:
  case 200:
  case 0xc9:
  case 0xca:
  case 0xcb:
  case 0xcc:
  case 0xcd:
  case 0xce:
  case 0xcf:
  case 0xd0:
  case 0xd1:
  case 0xd2:
  case 0xd3:
  case 0xd4:
  case 0xd5:
  case 0xd6:
  case 0xd7:
  case 0xd8:
  case 0xd9:
  case 0xda:
  case 0xdb:
  case 0xdc:
  case 0xdd:
  case 0xde:
  case 0xdf:
    FUN_007132e8(pbVar10,uVar16 & 0xffffffff);
    param_1[6] = param_1[6] + 1;
    param_1[5] = param_1[5] + 1;
    if ((char)param_1[4] == '\0') {
      pbVar1 = (byte *)*param_1;
      if (pbVar1 == (byte *)param_1[1]) {
        param_1[3] = -1;
        break;
      }
      uVar16 = (ulong)*pbVar1;
      *param_1 = (long)(pbVar1 + 1);
      param_1[3] = uVar16;
    }
    else {
      uVar16 = param_1[3];
      *(undefined1 *)(param_1 + 4) = 0;
    }
    if (uVar16 == 0xffffffffffffffff) break;
    puVar12 = (undefined1 *)param_1[9];
    if (puVar12 < (undefined1 *)param_1[10]) {
      puVar17 = puVar12 + 1;
      *puVar12 = (char)uVar16;
    }
    else {
      pvVar14 = (void *)*plVar11;
      sVar15 = (long)puVar12 - (long)pvVar14;
      uVar6 = sVar15 + 1;
      if ((long)uVar6 < 0) {
LAB_0033f7c0:
                    /* WARNING: Subroutine does not return */
        FUN_00323508(plVar11);
      }
      uVar7 = param_1[10] - (long)pvVar14;
      uVar9 = uVar7 * 2;
      if (uVar9 < uVar6 || uVar9 - uVar6 == 0) {
        uVar9 = uVar6;
      }
      if (0x3ffffffffffffffe < uVar7) {
        uVar9 = 0x7fffffffffffffff;
      }
      if (uVar9 == 0) {
        pvVar4 = (void *)0x0;
      }
      else {
        pvVar4 = (void *)FUN_00759c3c(uVar9);
      }
      puVar17 = (undefined1 *)((long)pvVar4 + sVar15) + 1;
      *(undefined1 *)((long)pvVar4 + sVar15) = (char)uVar16;
      memcpy(pvVar4,pvVar14,sVar15);
      param_1[8] = (long)pvVar4;
      param_1[9] = (long)puVar17;
      param_1[10] = (long)pvVar4 + uVar9;
      if (pvVar14 != (void *)0x0) {
        free(pvVar14);
      }
    }
    uVar16 = param_1[3];
    param_1[9] = (long)puVar17;
joined_r0x0033f2f8:
    if (uVar16 == 10) {
LAB_0033f608:
      param_1[6] = 0;
      param_1[7] = param_1[7] + 1;
      break;
    }
    goto joined_r0x0033f388;
  case 0xe0:
    FUN_007132e8(pbVar10,0xe0);
    FUN_0033fd60(param_1);
    uVar16 = param_1[3] - 0xc0;
    goto joined_r0x0033f494;
  case 0xe1:
  case 0xe2:
  case 0xe3:
  case 0xe4:
  case 0xe5:
  case 0xe6:
  case 0xe7:
  case 0xe8:
  case 0xe9:
  case 0xea:
  case 0xeb:
  case 0xec:
  case 0xee:
  case 0xef:
    FUN_007132e8(pbVar10,uVar16 & 0xffffffff);
    param_1[6] = param_1[6] + 1;
    param_1[5] = param_1[5] + 1;
    if ((char)param_1[4] == '\0') {
      pbVar1 = (byte *)*param_1;
      if (pbVar1 == (byte *)param_1[1]) {
        param_1[3] = -1;
        break;
      }
      uVar16 = (ulong)*pbVar1;
      *param_1 = (long)(pbVar1 + 1);
      param_1[3] = uVar16;
    }
    else {
      uVar16 = param_1[3];
      *(undefined1 *)(param_1 + 4) = 0;
    }
    if (uVar16 != 0xffffffffffffffff) {
      puVar12 = (undefined1 *)param_1[9];
      if (puVar12 < (undefined1 *)param_1[10]) {
        puVar17 = puVar12 + 1;
        *puVar12 = (char)uVar16;
      }
      else {
        pvVar14 = (void *)*plVar11;
        sVar15 = (long)puVar12 - (long)pvVar14;
        uVar6 = sVar15 + 1;
        if ((long)uVar6 < 0) goto LAB_0033f7c0;
        uVar7 = param_1[10] - (long)pvVar14;
        uVar9 = uVar7 * 2;
        if (uVar9 < uVar6 || uVar9 - uVar6 == 0) {
          uVar9 = uVar6;
        }
        if (0x3ffffffffffffffe < uVar7) {
          uVar9 = 0x7fffffffffffffff;
        }
        if (uVar9 == 0) {
          pvVar4 = (void *)0x0;
        }
        else {
          pvVar4 = (void *)FUN_00759c3c(uVar9);
        }
        puVar17 = (undefined1 *)((long)pvVar4 + sVar15) + 1;
        *(undefined1 *)((long)pvVar4 + sVar15) = (char)uVar16;
        memcpy(pvVar4,pvVar14,sVar15);
        param_1[8] = (long)pvVar4;
        param_1[9] = (long)puVar17;
        param_1[10] = (long)pvVar4 + uVar9;
        if (pvVar14 != (void *)0x0) {
          free(pvVar14);
        }
      }
      param_1[9] = (long)puVar17;
      if (param_1[3] == 10) goto LAB_0033f608;
      if (0xffffffffffffffbf < param_1[3] - 0xc0U) {
        FUN_007132e8(pbVar10);
        param_1[6] = param_1[6] + 1;
        param_1[5] = param_1[5] + 1;
        if ((char)param_1[4] == '\0') {
          pbVar1 = (byte *)*param_1;
          if (pbVar1 == (byte *)param_1[1]) {
            param_1[3] = -1;
            break;
          }
          uVar16 = (ulong)*pbVar1;
          *param_1 = (long)(pbVar1 + 1);
          param_1[3] = uVar16;
        }
        else {
          uVar16 = param_1[3];
          *(undefined1 *)(param_1 + 4) = 0;
        }
        if (uVar16 != 0xffffffffffffffff) {
          puVar12 = (undefined1 *)param_1[9];
          if (puVar12 < (undefined1 *)param_1[10]) {
            puVar17 = puVar12 + 1;
            *puVar12 = (char)uVar16;
          }
          else {
            pvVar14 = (void *)*plVar11;
            sVar15 = (long)puVar12 - (long)pvVar14;
            uVar6 = sVar15 + 1;
            if ((long)uVar6 < 0) goto LAB_0033f7c0;
            uVar7 = param_1[10] - (long)pvVar14;
            uVar9 = uVar7 * 2;
            if (uVar9 < uVar6 || uVar9 - uVar6 == 0) {
              uVar9 = uVar6;
            }
            if (0x3ffffffffffffffe < uVar7) {
              uVar9 = 0x7fffffffffffffff;
            }
            if (uVar9 == 0) {
              pvVar4 = (void *)0x0;
            }
            else {
              pvVar4 = (void *)FUN_00759c3c(uVar9);
            }
            puVar17 = (undefined1 *)((long)pvVar4 + sVar15) + 1;
            *(undefined1 *)((long)pvVar4 + sVar15) = (char)uVar16;
            memcpy(pvVar4,pvVar14,sVar15);
            param_1[8] = (long)pvVar4;
            param_1[9] = (long)puVar17;
            param_1[10] = (long)pvVar4 + uVar9;
            if (pvVar14 != (void *)0x0) {
              free(pvVar14);
            }
          }
          uVar16 = param_1[3];
          param_1[9] = (long)puVar17;
          goto joined_r0x0033f2f8;
        }
      }
    }
    break;
  case 0xed:
    FUN_007132e8(pbVar10,0xed);
    FUN_0033fd60(param_1);
    uVar16 = param_1[3] - 0xa0;
joined_r0x0033f494:
    if (0xffffffffffffffdf < uVar16) {
LAB_0033f36c:
      FUN_007132e8(pbVar10);
      FUN_0033fd60(param_1);
      uVar16 = param_1[3];
joined_r0x0033f388:
      if (0xffffffffffffffbf < uVar16 - 0xc0) goto switchD_0033eff4_caseD_20;
    }
    break;
  case 0xf0:
    FUN_007132e8(pbVar10,0xf0);
    FUN_0033fd60(param_1);
    if (param_1[3] - 0xc0U < 0xffffffffffffffd0) break;
LAB_0033f34c:
    FUN_007132e8(pbVar10);
    FUN_0033fd60(param_1);
    if (param_1[3] - 0xc0U < 0xffffffffffffffc0) break;
    goto LAB_0033f36c;
  case 0xf1:
  case 0xf2:
  case 0xf3:
    FUN_007132e8(pbVar10,uVar16 & 0xffffffff);
    FUN_0033fd60(param_1);
    if (0xffffffffffffffbf < param_1[3] - 0xc0U) goto LAB_0033f34c;
    break;
  case 0xf4:
    FUN_007132e8(pbVar10,0xf4);
    FUN_0033fd60(param_1);
    if (0xffffffffffffffef < param_1[3] - 0x90U) goto LAB_0033f34c;
    break;
  case 0xffffffffffffffff:
    goto switchD_0033eff4_caseD_ffffffff;
  }
  pcVar8 = "invalid string: ill-formed UTF-8 byte";
  goto switchD_0033eff4_caseD_1;
}


// ===== 0033f7f0  FUN_0033f7f0 =====

void FUN_0033f7f0(long *param_1)

{
  byte *pbVar1;
  long lVar2;
  undefined8 uVar3;
  void *__dest;
  int *piVar4;
  ulonglong uVar5;
  longlong lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  char *pcVar10;
  long *plVar11;
  ulong uVar12;
  byte *pbVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  void *__src;
  size_t __n;
  ulong uVar16;
  undefined1 *puVar17;
  double dVar18;
  int local_84;
  char *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  pbVar13 = (byte *)(param_1 + 0xb);
  if ((*pbVar13 & 1) == 0) {
    *(undefined2 *)(param_1 + 0xb) = 0;
  }
  else {
    *(undefined1 *)param_1[0xd] = 0;
    param_1[0xc] = 0;
  }
  plVar11 = param_1 + 8;
  puVar14 = (undefined1 *)*plVar11;
  lVar7 = param_1[3];
  param_1[9] = (long)puVar14;
  if (puVar14 < (undefined1 *)param_1[10]) {
    puVar15 = puVar14 + 1;
    *puVar14 = (char)lVar7;
  }
  else {
    uVar8 = param_1[10] - (long)puVar14;
    uVar16 = uVar8 * 2;
    if (uVar16 < 2) {
      uVar16 = 1;
    }
    if (0x3ffffffffffffffe < uVar8) {
      uVar16 = 0x7fffffffffffffff;
    }
                    /* try { // try from 0033f888 to 0033f88f has its CatchHandler @ 0033fd5c */
    puVar17 = (undefined1 *)FUN_00759c3c(uVar16);
    puVar15 = puVar17 + 1;
    *puVar17 = (char)lVar7;
    param_1[8] = (long)puVar17;
    param_1[9] = (long)puVar15;
    param_1[10] = (long)(puVar17 + uVar16);
    if (puVar14 != (undefined1 *)0x0) {
      free(puVar14);
    }
  }
  lVar7 = param_1[3];
  param_1[9] = (long)puVar15;
  local_84 = 5;
  if (lVar7 - 0x31U < 9) {
LAB_0033f8d0:
    uVar3 = FUN_007132e8(pbVar13,lVar7);
    param_1[6] = param_1[6] + 1;
    param_1[5] = param_1[5] + 1;
    if ((char)param_1[4] == '\0') goto LAB_0033f914;
    do {
      uVar16 = param_1[3];
      *(undefined1 *)(param_1 + 4) = 0;
      while( true ) {
        if (uVar16 == 0xffffffffffffffff) goto LAB_0033fb8c;
        puVar14 = (undefined1 *)param_1[9];
        if (puVar14 < (undefined1 *)param_1[10]) {
          puVar17 = puVar14 + 1;
          *puVar14 = (char)uVar16;
        }
        else {
          __src = (void *)*plVar11;
          __n = (long)puVar14 - (long)__src;
          uVar8 = __n + 1;
          if ((long)uVar8 < 0) {
            if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
              FUN_00323508(plVar11);
            }
            goto LAB_0033fd58;
          }
          uVar9 = param_1[10] - (long)__src;
          uVar12 = uVar9 * 2;
          if (uVar12 < uVar8 || uVar12 - uVar8 == 0) {
            uVar12 = uVar8;
          }
          if (0x3ffffffffffffffe < uVar9) {
            uVar12 = 0x7fffffffffffffff;
          }
          if (uVar12 == 0) {
            __dest = (void *)0x0;
          }
          else {
            __dest = (void *)FUN_00759c3c(uVar12);
          }
          puVar17 = (undefined1 *)((long)__dest + __n) + 1;
          *(undefined1 *)((long)__dest + __n) = (char)uVar16;
          memcpy(__dest,__src,__n);
          param_1[8] = (long)__dest;
          param_1[9] = (long)puVar17;
          param_1[10] = (long)__dest + uVar12;
          if (__src != (void *)0x0) {
            free(__src);
          }
        }
        lVar7 = param_1[3];
        param_1[9] = (long)puVar17;
        if (9 < lVar7 - 0x30U) {
          if (lVar7 < 0x45) {
            if (lVar7 == 10) {
              param_1[6] = 0;
              param_1[7] = param_1[7] + 1;
              goto LAB_0033fb8c;
            }
            if (lVar7 == 0x2e) goto LAB_0033fa30;
          }
          else if ((lVar7 == 0x45) || (lVar7 == 0x65)) goto LAB_0033fb2c;
          goto LAB_0033fb8c;
        }
        uVar3 = FUN_007132e8(pbVar13);
        param_1[6] = param_1[6] + 1;
        param_1[5] = param_1[5] + 1;
        if ((char)param_1[4] != '\0') break;
LAB_0033f914:
        pbVar1 = (byte *)*param_1;
        if (pbVar1 == (byte *)param_1[1]) {
          param_1[3] = -1;
          goto LAB_0033fb8c;
        }
        uVar16 = (ulong)*pbVar1;
        *param_1 = (long)(pbVar1 + 1);
        param_1[3] = uVar16;
      }
    } while( true );
  }
  if (lVar7 != 0x30) {
    if (lVar7 == 0x2d) {
      FUN_007132e8(pbVar13);
    }
    lVar7 = FUN_0033fd60(param_1);
    if (lVar7 - 0x31U < 9) {
      lVar7 = param_1[3];
      local_84 = 6;
      goto LAB_0033f8d0;
    }
    if (lVar7 == 0x30) {
      local_84 = 6;
      FUN_007132e8(pbVar13,(char)param_1[3]);
      lVar7 = FUN_0033fd60(param_1);
      if (lVar7 != 0x2e) goto LAB_0033fb18;
      goto LAB_0033fa30;
    }
    pcVar10 = "invalid number; expected digit after \'-\'";
LAB_0033fd04:
    param_1[0xe] = (long)pcVar10;
    uVar3 = 0xe;
    goto LAB_0033fd0c;
  }
  local_84 = 5;
  FUN_007132e8(pbVar13);
  lVar7 = FUN_0033fd60(param_1);
  if (lVar7 == 0x2e) {
LAB_0033fa30:
    FUN_007132e8(pbVar13,(char)param_1[0x12]);
    lVar7 = FUN_0033fd60(param_1);
    if (9 < lVar7 - 0x30U) {
      pcVar10 = "invalid number; expected digit after \'.\'";
      goto LAB_0033fd04;
    }
    do {
      FUN_007132e8(pbVar13,(char)param_1[3]);
      lVar7 = FUN_0033fd60(param_1);
    } while (lVar7 - 0x30U < 10);
    if ((lVar7 == 0x65) || (lVar7 == 0x45)) goto LAB_0033fb28;
LAB_0033fb88:
    local_84 = 7;
  }
  else {
LAB_0033fb18:
    if ((lVar7 == 0x65) || (lVar7 == 0x45)) {
LAB_0033fb28:
      lVar7 = param_1[3];
LAB_0033fb2c:
      FUN_007132e8(pbVar13,lVar7);
      lVar7 = FUN_0033fd60(param_1);
      if (9 < lVar7 - 0x30U) {
        if ((lVar7 == 0x2d) || (lVar7 == 0x2b)) {
          FUN_007132e8(pbVar13,(char)param_1[3]);
          lVar7 = FUN_0033fd60(param_1);
          if (lVar7 - 0x30U < 10) goto LAB_0033fb48;
          pcVar10 = "invalid number; expected digit after exponent sign";
        }
        else {
          pcVar10 = "invalid number; expected \'+\', \'-\', or digit after exponent";
        }
        goto LAB_0033fd04;
      }
LAB_0033fb48:
      FUN_007132e8(pbVar13,(char)param_1[3]);
      lVar7 = FUN_0033fd60(param_1);
      while (lVar7 - 0x30U < 10) {
        FUN_007132e8(pbVar13,(char)param_1[3]);
        lVar7 = FUN_0033fd60(param_1);
      }
      goto LAB_0033fb88;
    }
  }
LAB_0033fb8c:
  plVar11 = param_1 + 6;
  lVar7 = *plVar11;
  *(undefined1 *)(param_1 + 4) = 1;
  param_1[5] = param_1[5] + -1;
  if (lVar7 == 0) {
    plVar11 = param_1 + 7;
    lVar7 = *plVar11;
    if (lVar7 != 0) goto LAB_0033fbb8;
  }
  else {
LAB_0033fbb8:
    *plVar11 = lVar7 + -1;
  }
  if (param_1[3] != -1) {
    param_1[9] = param_1[9] + -1;
  }
  local_70 = (char *)0x0;
  piVar4 = (int *)__errno();
  *piVar4 = 0;
  if (local_84 == 6) {
    pcVar10 = (char *)((long)param_1 + 0x59);
    if ((*(byte *)(param_1 + 0xb) & 1) != 0) {
      pcVar10 = (char *)param_1[0xd];
    }
    lVar6 = strtoll(pcVar10,&local_70,10);
    if (*piVar4 == 0) {
      param_1[0xf] = lVar6;
      uVar3 = 6;
      goto LAB_0033fd0c;
    }
  }
  else if (local_84 == 5) {
    pcVar10 = (char *)((long)param_1 + 0x59);
    if ((*(byte *)(param_1 + 0xb) & 1) != 0) {
      pcVar10 = (char *)param_1[0xd];
    }
    uVar5 = strtoull(pcVar10,&local_70,10);
    if (*piVar4 == 0) {
      param_1[0x10] = uVar5;
      uVar3 = 5;
      goto LAB_0033fd0c;
    }
  }
  pcVar10 = (char *)((long)param_1 + 0x59);
  if ((*(byte *)(param_1 + 0xb) & 1) != 0) {
    pcVar10 = (char *)param_1[0xd];
  }
  dVar18 = strtod(pcVar10,&local_70);
  uVar3 = 7;
  param_1[0x11] = (long)dVar18;
LAB_0033fd0c:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_0033fd58:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 0033fd60  FUN_0033fd60 =====

long FUN_0033fd60(long *param_1)

{
  ulong uVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  void *__dest;
  ulong uVar4;
  ulong uVar5;
  void *__src;
  size_t __n;
  ulong uVar6;
  undefined1 *puVar7;
  
  param_1[6] = param_1[6] + 1;
  param_1[5] = param_1[5] + 1;
  if ((char)param_1[4] == '\0') {
    pbVar3 = (byte *)*param_1;
    if (pbVar3 == (byte *)param_1[1]) {
      param_1[3] = -1;
      return -1;
    }
    uVar6 = (ulong)*pbVar3;
    *param_1 = (long)(pbVar3 + 1);
    param_1[3] = uVar6;
  }
  else {
    uVar6 = param_1[3];
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (uVar6 == 0xffffffffffffffff) {
    return -1;
  }
  puVar2 = (undefined1 *)param_1[9];
  if (puVar2 < (undefined1 *)param_1[10]) {
    puVar7 = puVar2 + 1;
    *puVar2 = (char)uVar6;
  }
  else {
    __src = (void *)param_1[8];
    __n = (long)puVar2 - (long)__src;
    uVar1 = __n + 1;
    if ((long)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00323508(param_1 + 8);
    }
    uVar4 = param_1[10] - (long)__src;
    uVar5 = uVar4 * 2;
    if (uVar5 < uVar1 || uVar5 - uVar1 == 0) {
      uVar5 = uVar1;
    }
    if (0x3ffffffffffffffe < uVar4) {
      uVar5 = 0x7fffffffffffffff;
    }
    if (uVar5 == 0) {
      __dest = (void *)0x0;
    }
    else {
      __dest = (void *)FUN_00759c3c(uVar5);
    }
    puVar7 = (undefined1 *)((long)__dest + __n) + 1;
    *(undefined1 *)((long)__dest + __n) = (char)uVar6;
    memcpy(__dest,__src,__n);
    param_1[8] = (long)__dest;
    param_1[9] = (long)puVar7;
    param_1[10] = (long)__dest + uVar5;
    if (__src != (void *)0x0) {
      free(__src);
    }
  }
  param_1[9] = (long)puVar7;
  if (param_1[3] == 10) {
    param_1[6] = 0;
    param_1[7] = param_1[7] + 1;
  }
  return param_1[3];
}


// ===== 0033fec0  FUN_0033fec0 =====

/* WARNING: Type propagation algorithm not settling */

int FUN_0033fec0(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  
  FUN_0033fd60();
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 - 0x30U < 10) {
    iVar4 = -0x30;
    FUN_0033fd60(param_1);
    lVar5 = *(long *)(param_1 + 0x18);
  }
  else if (lVar3 - 0x41U < 6) {
    iVar4 = -0x37;
    FUN_0033fd60(param_1);
    lVar5 = *(long *)(param_1 + 0x18);
  }
  else {
    if (5 < lVar3 - 0x61U) {
      return -1;
    }
    iVar4 = -0x57;
    FUN_0033fd60(param_1);
    lVar5 = *(long *)(param_1 + 0x18);
  }
  if (lVar5 - 0x30U < 10) {
    iVar6 = -0x30;
    FUN_0033fd60(param_1);
    lVar7 = *(long *)(param_1 + 0x18);
  }
  else if (lVar5 - 0x41U < 6) {
    iVar6 = -0x37;
    FUN_0033fd60(param_1);
    lVar7 = *(long *)(param_1 + 0x18);
  }
  else {
    if (5 < lVar5 - 0x61U) {
      return -1;
    }
    iVar6 = -0x57;
    FUN_0033fd60(param_1);
    lVar7 = *(long *)(param_1 + 0x18);
  }
  if (lVar7 - 0x30U < 10) {
    iVar8 = -0x30;
    FUN_0033fd60(param_1);
    lVar1 = *(long *)(param_1 + 0x18);
  }
  else if (lVar7 - 0x41U < 6) {
    iVar8 = -0x37;
    FUN_0033fd60(param_1);
    lVar1 = *(long *)(param_1 + 0x18);
  }
  else {
    if (5 < lVar7 - 0x61U) {
      return -1;
    }
    iVar8 = -0x57;
    FUN_0033fd60(param_1);
    lVar1 = *(long *)(param_1 + 0x18);
  }
  if (lVar1 - 0x30U < 10) {
    iVar2 = -0x30;
  }
  else if (lVar1 - 0x41U < 6) {
    iVar2 = -0x37;
  }
  else {
    if (5 < lVar1 - 0x61U) {
      return -1;
    }
    iVar2 = -0x57;
  }
  return iVar2 + (int)lVar1 +
         (iVar4 + (int)lVar3) * 0x1000 + (iVar6 + (int)lVar5) * 0x100 + (iVar8 + (int)lVar7) * 0x10;
}


// ===== 003400c0  FUN_003400c0 =====

/* WARNING: Type propagation algorithm not settling */

uint FUN_003400c0(long param_1,long param_2)

{
  ulong uVar1;
  byte *pbVar2;
  byte *pbVar3;
  long lVar4;
  byte bVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  ulong uVar9;
  long *plVar10;
  ulong *puVar11;
  undefined8 uVar12;
  double dVar13;
  byte local_f0;
  undefined4 local_ef;
  undefined2 local_eb;
  void *local_e0;
  byte local_d8 [16];
  void *local_c8;
  ulong local_c0;
  undefined8 uStack_b8;
  void *local_b0;
  ulong local_a0;
  undefined8 uStack_98;
  void *local_90;
  void *local_88;
  ulong local_80;
  long local_78;
  undefined *local_70;
  uint local_68;
  undefined1 auStack_60 [16];
  long local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  local_88 = (void *)0x0;
  local_80 = 0;
  local_78 = 0;
LAB_00340100:
  iVar6 = *(int *)(param_1 + 0x30);
  if (iVar6 < 6) {
    if (iVar6 < 3) {
      if (iVar6 == 1) {
        local_70 = (undefined *)CONCAT71(local_70._1_7_,1);
        FUN_003296d0(param_2,&local_70,0);
        goto LAB_00340288;
      }
      if (iVar6 == 2) {
        local_70 = (undefined *)((ulong)local_70._1_7_ << 8);
        FUN_003296d0(param_2,&local_70,0);
        goto LAB_00340288;
      }
LAB_00340744:
      pbVar2 = *(byte **)(param_1 + 0x78);
      pbVar3 = *(byte **)(param_1 + 0x80);
      local_a0 = 0;
      uStack_98 = 0;
      local_90 = (void *)0x0;
      for (; pbVar2 != pbVar3; pbVar2 = pbVar2 + 1) {
        if (*pbVar2 < 0x20) {
          local_68 = local_68 & 0xffffff00;
          local_70 = (undefined *)0x0;
                    /* try { // try from 00340834 to 0034084f has its CatchHandler @ 00340f30 */
          FUN_00342348(&local_70,*pbVar2,9);
          FUN_00713bdc(&local_a0,&local_70);
        }
        else {
                    /* try { // try from 0034080c to 00340813 has its CatchHandler @ 00340f24 */
          FUN_007132e8(&local_a0);
        }
      }
      uStack_b8 = *(undefined8 *)(param_1 + 0x68);
      local_c0 = *(ulong *)(param_1 + 0x60);
      local_b0 = *(void **)(param_1 + 0x70);
      local_f0 = 10;
      local_ef = 0x756c6176;
      local_eb = 0x65;
                    /* try { // try from 00340784 to 00340797 has its CatchHandler @ 00340eb4 */
      FUN_0034107c(local_d8,param_1,0x10,&local_f0);
                    /* try { // try from 00340798 to 003407af has its CatchHandler @ 00340eb0 */
      FUN_003248ec(&local_70,0x65,&local_c0,local_d8,0);
      *(undefined1 *)(param_2 + 0x58) = 1;
      if (*(char *)(param_2 + 0x90) != '\0') {
LAB_00340d1c:
        plVar10 = (long *)FUN_00753a74(0x28);
        *plVar10 = (long)(PTR_DAT_007a12f8 + 0x10);
        *(uint *)(plVar10 + 1) = local_68;
        FUN_007127d4(plVar10 + 2,auStack_60);
        *plVar10 = (long)(PTR_DAT_007a1308 + 0x10);
        plVar10[4] = local_50;
        if (*(long *)(lVar4 + 0x28) == local_48) {
                    /* try { // try from 00340d78 to 00340d8f has its CatchHandler @ 00340eac */
                    /* WARNING: Subroutine does not return */
          FUN_00753c5c(plVar10,PTR_PTR_007a1310,PTR_FUN_007a12f0);
        }
        goto LAB_00340fa0;
      }
LAB_003407c0:
      local_70 = PTR_DAT_007a12f8 + 0x10;
      FUN_0073a2c4(auStack_60);
      FUN_0073a174(&local_70);
      if ((local_d8[0] & 1) != 0) {
        free(local_c8);
      }
      if ((local_f0 & 1) != 0) {
        free(local_e0);
      }
      if ((local_a0 & 1) != 0) {
        free(local_90);
      }
LAB_00340804:
      uVar8 = 0;
      goto LAB_0034047c;
    }
    if (iVar6 == 3) {
      local_70 = (undefined *)0x0;
      FUN_0032991c(param_2,&local_70,0);
    }
    else if (iVar6 == 4) {
      FUN_00329da8(param_2,param_1 + 0x90,0);
    }
    else {
      if (iVar6 != 5) goto LAB_00340744;
      local_70 = *(undefined **)(param_1 + 0xb8);
                    /* try { // try from 00340134 to 003401af has its CatchHandler @ 00340f80 */
      FUN_0032a058(param_2,&local_70,0);
    }
  }
  else {
    if (7 < iVar6) {
      if (iVar6 < 9) {
                    /* try { // try from 003401f8 to 00340287 has its CatchHandler @ 00340f80 */
        uVar9 = FUN_0032688c(param_2,0xffffffffffffffff);
        if ((uVar9 & 1) == 0) goto LAB_00340804;
        iVar6 = FUN_0033e8b4(param_1 + 0x38);
        *(int *)(param_1 + 0x30) = iVar6;
        if (iVar6 == 10) {
          uVar9 = FUN_00326be8(param_2);
          goto LAB_00340224;
        }
        if (local_80 == local_78 * 0x40) {
          if (-1 < (long)(local_80 + 1)) {
            if (local_80 < 0x3fffffffffffffff) {
              uVar9 = local_78 * 0x80;
              uVar1 = (local_80 & 0x3fffffffffffffc0) + 0x40;
              if (uVar9 < uVar1 || uVar9 - uVar1 == 0) {
                uVar9 = uVar1;
              }
            }
            else {
              uVar9 = 0x7fffffffffffffff;
            }
                    /* try { // try from 00340400 to 00340407 has its CatchHandler @ 00340f20 */
            FUN_00325f08(&local_88,uVar9);
            goto LAB_0034040c;
          }
          if (*(long *)(lVar4 + 0x28) != local_48) goto LAB_00340fa0;
                    /* try { // try from 00340cfc to 00340d03 has its CatchHandler @ 00340f1c */
          FUN_0032600c(&local_88);
LAB_00340d04:
          if (*(long *)(lVar4 + 0x28) != local_48) goto LAB_00340fa0;
                    /* try { // try from 00340d14 to 00340d1b has its CatchHandler @ 00340f14 */
          FUN_0032600c(&local_88);
          goto LAB_00340d1c;
        }
LAB_0034040c:
        uVar9 = local_80 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)((long)local_88 + uVar9) =
             *(ulong *)((long)local_88 + uVar9) | 1L << (local_80 & 0x3f);
        local_80 = local_80 + 1;
        goto LAB_00340100;
      }
      if (iVar6 == 9) {
        uVar9 = FUN_00326020(param_2,0xffffffffffffffff);
        if ((uVar9 & 1) == 0) goto LAB_00340804;
        iVar6 = FUN_0033e8b4(param_1 + 0x38);
        *(int *)(param_1 + 0x30) = iVar6;
        if (iVar6 == 0xb) {
          uVar9 = FUN_00326378(param_2);
LAB_00340224:
          if ((uVar9 & 1) != 0) goto LAB_00340288;
          goto LAB_00340804;
        }
        if (iVar6 != 4) {
          uVar9 = *(ulong *)(param_1 + 0x60);
                    /* try { // try from 00340b70 to 00340b7b has its CatchHandler @ 00340de8 */
          FUN_00340fa4(&local_a0,param_1 + 0x38);
          uStack_b8 = *(undefined8 *)(param_1 + 0x68);
          local_c0 = *(ulong *)(param_1 + 0x60);
          local_b0 = *(void **)(param_1 + 0x70);
                    /* try { // try from 00340b8c to 00340b9b has its CatchHandler @ 00340de4 */
          FUN_002fd2b0(&local_f0,"object key");
                    /* try { // try from 00340b9c to 00340baf has its CatchHandler @ 00340de0 */
          FUN_0034107c(local_d8,param_1,4,&local_f0);
                    /* try { // try from 00340bb0 to 00340bc7 has its CatchHandler @ 00340ddc */
          FUN_003248ec(&local_70,0x65,&local_c0,local_d8,0);
                    /* try { // try from 00340bc8 to 00340bdf has its CatchHandler @ 00340dd8 */
          uVar8 = FUN_003247c0(param_2,uVar9,&local_a0,&local_70);
LAB_00340a64:
          local_70 = PTR_DAT_007a12f8 + 0x10;
          FUN_0073a2c4(auStack_60);
          FUN_0073a174(&local_70);
          bVar5 = local_d8[0] & 1;
          local_d8[0] = local_f0;
          if (bVar5 != 0) {
            free(local_c8);
            local_d8[0] = local_f0;
          }
joined_r0x00340b5c:
          if ((local_d8[0] & 1) != 0) {
            free(local_e0);
          }
          if ((local_a0 & 1) != 0) {
            free(local_90);
          }
LAB_0034047c:
          if (local_88 != (void *)0x0) {
            free(local_88);
          }
          if (*(long *)(lVar4 + 0x28) == local_48) {
            return uVar8 & 1;
          }
LAB_00340fa0:
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        uVar9 = FUN_0032662c(param_2,param_1 + 0x90);
        if ((uVar9 & 1) == 0) goto LAB_00340804;
        iVar6 = FUN_0033e8b4(param_1 + 0x38);
        *(int *)(param_1 + 0x30) = iVar6;
        if (iVar6 != 0xc) {
          uVar9 = *(ulong *)(param_1 + 0x60);
                    /* try { // try from 00340bec to 00340bf7 has its CatchHandler @ 00340dd4 */
          FUN_00340fa4(&local_a0,param_1 + 0x38);
          uStack_b8 = *(undefined8 *)(param_1 + 0x68);
          local_c0 = *(ulong *)(param_1 + 0x60);
          local_b0 = *(void **)(param_1 + 0x70);
                    /* try { // try from 00340c08 to 00340c17 has its CatchHandler @ 00340dd0 */
          FUN_002fd2b0(&local_f0,"object separator");
                    /* try { // try from 00340c18 to 00340c2b has its CatchHandler @ 00340dcc */
          FUN_0034107c(local_d8,param_1,0xc,&local_f0);
                    /* try { // try from 00340c2c to 00340c43 has its CatchHandler @ 00340dc8 */
          FUN_003248ec(&local_70,0x65,&local_c0,local_d8,0);
                    /* try { // try from 00340c44 to 00340c5b has its CatchHandler @ 00340dc4 */
          uVar8 = FUN_003247c0(param_2,uVar9,&local_a0,&local_70);
          goto LAB_00340a64;
        }
        if (local_80 == local_78 * 0x40) {
          if ((long)(local_80 + 1) < 0) goto LAB_00340d04;
          if (local_80 < 0x3fffffffffffffff) {
            uVar9 = local_78 * 0x80;
            uVar1 = (local_80 & 0x3fffffffffffffc0) + 0x40;
            if (uVar9 < uVar1 || uVar9 - uVar1 == 0) {
              uVar9 = uVar1;
            }
          }
          else {
            uVar9 = 0x7fffffffffffffff;
          }
                    /* try { // try from 00340438 to 0034043f has its CatchHandler @ 00340f18 */
          FUN_00325f08(&local_88,uVar9);
        }
        uVar9 = local_80 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)((long)local_88 + uVar9) =
             *(ulong *)((long)local_88 + uVar9) & (1L << (local_80 & 0x3f) ^ 0xffffffffffffffffU);
                    /* try { // try from 00340468 to 0034046f has its CatchHandler @ 00340f80 */
        local_80 = local_80 + 1;
        uVar7 = FUN_0033e8b4(param_1 + 0x38);
        *(undefined4 *)(param_1 + 0x30) = uVar7;
        goto LAB_00340100;
      }
      if (iVar6 != 0xe) {
        if (iVar6 != 0xf) goto LAB_00340744;
        puVar11 = (ulong *)(param_1 + 0x60);
        if (*puVar11 != 1) {
          pbVar2 = *(byte **)(param_1 + 0x78);
          pbVar3 = *(byte **)(param_1 + 0x80);
          local_a0 = 0;
          uStack_98 = 0;
          local_90 = (void *)0x0;
          for (; pbVar2 != pbVar3; pbVar2 = pbVar2 + 1) {
            if (*pbVar2 < 0x20) {
              local_68 = local_68 & 0xffffff00;
              local_70 = (undefined *)0x0;
                    /* try { // try from 003405ec to 00340607 has its CatchHandler @ 00340f34 */
              FUN_00342348(&local_70,*pbVar2,9);
              FUN_00713bdc(&local_a0,&local_70);
            }
            else {
                    /* try { // try from 003405c4 to 003405cb has its CatchHandler @ 00340f28 */
              FUN_007132e8(&local_a0);
            }
          }
          uStack_b8 = *(undefined8 *)(param_1 + 0x68);
          local_c0 = *puVar11;
          local_b0 = *(void **)(param_1 + 0x70);
          local_f0 = 10;
          local_ef = 0x756c6176;
          local_eb = 0x65;
                    /* try { // try from 00340514 to 00340527 has its CatchHandler @ 00340ec0 */
          FUN_0034107c(local_d8,param_1,0x10,&local_f0);
                    /* try { // try from 00340528 to 0034053f has its CatchHandler @ 00340ebc */
          FUN_003248ec(&local_70,0x65,&local_c0,local_d8,0);
          *(undefined1 *)(param_2 + 0x58) = 1;
          if (*(char *)(param_2 + 0x90) != '\0') {
            plVar10 = (long *)FUN_00753a74(0x28);
            *plVar10 = (long)(PTR_DAT_007a12f8 + 0x10);
            *(uint *)(plVar10 + 1) = local_68;
            FUN_007127d4(plVar10 + 2,auStack_60);
            *plVar10 = (long)(PTR_DAT_007a1308 + 0x10);
            plVar10[4] = local_50;
            if (*(long *)(lVar4 + 0x28) == local_48) {
                    /* try { // try from 003405ac to 003405c3 has its CatchHandler @ 00340eb8 */
                    /* WARNING: Subroutine does not return */
              FUN_00753c5c(plVar10,PTR_PTR_007a1310,PTR_FUN_007a12f0);
            }
            goto LAB_00340fa0;
          }
          goto LAB_003407c0;
        }
                    /* try { // try from 00340c60 to 00340c6b has its CatchHandler @ 00340dc0 */
        FUN_00340fa4(&local_a0,param_1 + 0x38);
        uStack_b8 = *(undefined8 *)(param_1 + 0x68);
        local_c0 = *puVar11;
        local_b0 = *(void **)(param_1 + 0x70);
                    /* try { // try from 00340c7c to 00340c8b has its CatchHandler @ 00340dbc */
        FUN_002fd2b0(local_d8,
                     "attempting to parse an empty input; check that your input string or stream contains the expected JSON"
                    );
                    /* try { // try from 00340c8c to 00340ca3 has its CatchHandler @ 00340db8 */
        FUN_003248ec(&local_70,0x65,&local_c0,local_d8,0);
                    /* try { // try from 00340ca4 to 00340cbb has its CatchHandler @ 00340d90 */
        uVar8 = FUN_003247c0(param_2,1,&local_a0,&local_70);
        local_70 = PTR_DAT_007a12f8 + 0x10;
        FUN_0073a2c4(auStack_60);
        FUN_0073a174(&local_70);
        local_e0 = local_c8;
        goto joined_r0x00340b5c;
      }
      pbVar2 = *(byte **)(param_1 + 0x78);
      pbVar3 = *(byte **)(param_1 + 0x80);
      local_a0 = 0;
      uStack_98 = 0;
      local_90 = (void *)0x0;
      for (; pbVar2 != pbVar3; pbVar2 = pbVar2 + 1) {
        if (*pbVar2 < 0x20) {
          local_68 = local_68 & 0xffffff00;
          local_70 = (undefined *)0x0;
                    /* try { // try from 00340724 to 0034073f has its CatchHandler @ 00340f38 */
          FUN_00342348(&local_70,*pbVar2,9);
          FUN_00713bdc(&local_a0,&local_70);
        }
        else {
                    /* try { // try from 003406fc to 00340703 has its CatchHandler @ 00340f2c */
          FUN_007132e8(&local_a0);
        }
      }
      uStack_b8 = *(undefined8 *)(param_1 + 0x68);
      local_c0 = *(ulong *)(param_1 + 0x60);
      local_b0 = *(void **)(param_1 + 0x70);
      local_f0 = 10;
      local_ef = 0x756c6176;
      local_eb = 0x65;
                    /* try { // try from 0034064c to 0034065f has its CatchHandler @ 00340efc */
      FUN_0034107c(local_d8,param_1,0,&local_f0);
                    /* try { // try from 00340660 to 00340677 has its CatchHandler @ 00340ee4 */
      FUN_003248ec(&local_70,0x65,&local_c0,local_d8,0);
      *(undefined1 *)(param_2 + 0x58) = 1;
      if (*(char *)(param_2 + 0x90) != '\0') {
        plVar10 = (long *)FUN_00753a74(0x28);
        *plVar10 = (long)(PTR_DAT_007a12f8 + 0x10);
        *(uint *)(plVar10 + 1) = local_68;
        FUN_007127d4(plVar10 + 2,auStack_60);
        *plVar10 = (long)(PTR_DAT_007a1308 + 0x10);
        plVar10[4] = local_50;
        if (*(long *)(lVar4 + 0x28) == local_48) {
                    /* try { // try from 003406e4 to 003406fb has its CatchHandler @ 00340ec4 */
                    /* WARNING: Subroutine does not return */
          FUN_00753c5c(plVar10,PTR_PTR_007a1310,PTR_FUN_007a12f0);
        }
        goto LAB_00340fa0;
      }
      goto LAB_003407c0;
    }
    if (iVar6 != 6) {
      if (iVar6 != 7) goto LAB_00340744;
      dVar13 = ABS((double)*(undefined **)(param_1 + 0xc0));
      if ((dVar13 < INFINITY) || (dVar13 != INFINITY && dVar13 < INFINITY == NAN(dVar13))) {
                    /* try { // try from 003401e4 to 003401f3 has its CatchHandler @ 00340f78 */
        local_70 = *(undefined **)(param_1 + 0xc0);
        FUN_00329480(param_2,&local_70,0);
        goto LAB_00340288;
      }
      uVar12 = *(undefined8 *)(param_1 + 0x60);
                    /* try { // try from 00340ac0 to 00340acb has its CatchHandler @ 00340e44 */
      FUN_00340fa4(&local_a0,param_1 + 0x38);
                    /* try { // try from 00340acc to 00340ad7 has its CatchHandler @ 00340e40 */
      FUN_00340fa4(local_d8,param_1 + 0x38);
      local_f0 = 0x27;
                    /* try { // try from 00340ae0 to 00340af7 has its CatchHandler @ 00340e2c */
      FUN_00326fbc(&local_c0,"number overflow parsing \'",local_d8,&local_f0);
                    /* try { // try from 00340af8 to 00340b0b has its CatchHandler @ 00340e14 */
      FUN_00326dcc(&local_70,0x196,&local_c0,0);
                    /* try { // try from 00340b0c to 00340b23 has its CatchHandler @ 00340dec */
      uVar8 = FUN_00326d78(param_2,uVar12,&local_a0,&local_70);
      local_70 = PTR_DAT_007a12f8 + 0x10;
      FUN_0073a2c4(auStack_60);
      FUN_0073a174(&local_70);
      local_e0 = local_c8;
      if ((local_c0 & 1) != 0) {
        free(local_b0);
        local_e0 = local_c8;
      }
      goto joined_r0x00340b5c;
    }
    local_70 = *(undefined **)(param_1 + 0xb0);
    FUN_00329b60(param_2,&local_70,0);
  }
LAB_00340288:
  if (local_80 != 0) {
    do {
      if ((*(ulong *)((long)local_88 + (local_80 - 1 >> 3 & 0x1ffffffffffffff8)) >>
           (local_80 - 1 & 0x3f) & 1) == 0) {
        iVar6 = FUN_0033e8b4(param_1 + 0x38);
        *(int *)(param_1 + 0x30) = iVar6;
        if (iVar6 == 0xd) {
          iVar6 = FUN_0033e8b4(param_1 + 0x38);
          *(int *)(param_1 + 0x30) = iVar6;
          if (iVar6 != 4) {
            uVar9 = *(ulong *)(param_1 + 0x60);
                    /* try { // try from 00340978 to 00340983 has its CatchHandler @ 00340e74 */
            FUN_00340fa4(&local_a0,param_1 + 0x38);
            uStack_b8 = *(undefined8 *)(param_1 + 0x68);
            local_c0 = *(ulong *)(param_1 + 0x60);
            local_b0 = *(void **)(param_1 + 0x70);
                    /* try { // try from 00340994 to 003409a3 has its CatchHandler @ 00340e6c */
            FUN_002fd2b0(&local_f0,"object key");
                    /* try { // try from 003409a4 to 003409b7 has its CatchHandler @ 00340e64 */
            FUN_0034107c(local_d8,param_1,4,&local_f0);
                    /* try { // try from 003409b8 to 003409cf has its CatchHandler @ 00340e60 */
            FUN_003248ec(&local_70,0x65,&local_c0,local_d8,0);
                    /* try { // try from 003409d0 to 003409e7 has its CatchHandler @ 00340e5c */
            uVar8 = FUN_003247c0(param_2,uVar9,&local_a0,&local_70);
            goto LAB_00340a64;
          }
          uVar9 = FUN_0032662c(param_2,param_1 + 0x90);
          if ((uVar9 & 1) == 0) goto LAB_00340804;
          iVar6 = FUN_0033e8b4(param_1 + 0x38);
          *(int *)(param_1 + 0x30) = iVar6;
          if (iVar6 == 0xc) {
            uVar7 = FUN_0033e8b4(param_1 + 0x38);
            *(undefined4 *)(param_1 + 0x30) = uVar7;
            goto LAB_00340100;
          }
          uVar9 = *(ulong *)(param_1 + 0x60);
                    /* try { // try from 003409f4 to 003409ff has its CatchHandler @ 00340e58 */
          FUN_00340fa4(&local_a0,param_1 + 0x38);
          uStack_b8 = *(undefined8 *)(param_1 + 0x68);
          local_c0 = *(ulong *)(param_1 + 0x60);
          local_b0 = *(void **)(param_1 + 0x70);
                    /* try { // try from 00340a10 to 00340a1f has its CatchHandler @ 00340e54 */
          FUN_002fd2b0(&local_f0,"object separator");
                    /* try { // try from 00340a20 to 00340a33 has its CatchHandler @ 00340e50 */
          FUN_0034107c(local_d8,param_1,0xc,&local_f0);
                    /* try { // try from 00340a34 to 00340a4b has its CatchHandler @ 00340e4c */
          FUN_003248ec(&local_70,0x65,&local_c0,local_d8,0);
                    /* try { // try from 00340a4c to 00340a63 has its CatchHandler @ 00340e48 */
          uVar8 = FUN_003247c0(param_2,uVar9,&local_a0,&local_70);
          goto LAB_00340a64;
        }
        if (iVar6 != 0xb) {
          uVar9 = *(ulong *)(param_1 + 0x60);
                    /* try { // try from 003408fc to 00340907 has its CatchHandler @ 00340e80 */
          FUN_00340fa4(&local_a0,param_1 + 0x38);
          uStack_b8 = *(undefined8 *)(param_1 + 0x68);
          local_c0 = *(ulong *)(param_1 + 0x60);
          local_b0 = *(void **)(param_1 + 0x70);
                    /* try { // try from 00340918 to 00340927 has its CatchHandler @ 00340e7c */
          FUN_002fd2b0(&local_f0,"object");
                    /* try { // try from 00340928 to 0034093b has its CatchHandler @ 00340e78 */
          FUN_0034107c(local_d8,param_1,0xb,&local_f0);
                    /* try { // try from 0034093c to 00340953 has its CatchHandler @ 00340e70 */
          FUN_003248ec(&local_70,0x65,&local_c0,local_d8,0);
                    /* try { // try from 00340954 to 0034096b has its CatchHandler @ 00340e68 */
          uVar8 = FUN_003247c0(param_2,uVar9,&local_a0,&local_70);
          goto LAB_00340a64;
        }
        uVar9 = FUN_00326378(param_2);
      }
      else {
                    /* try { // try from 003402ac to 003402f7 has its CatchHandler @ 00340f7c */
        iVar6 = FUN_0033e8b4(param_1 + 0x38);
        *(int *)(param_1 + 0x30) = iVar6;
        if (iVar6 == 0xd) goto LAB_00340310;
        if (iVar6 != 10) {
          uVar9 = *(ulong *)(param_1 + 0x60);
                    /* try { // try from 00340880 to 0034088b has its CatchHandler @ 00340ea8 */
          FUN_00340fa4(&local_a0,param_1 + 0x38);
          uStack_b8 = *(undefined8 *)(param_1 + 0x68);
          local_c0 = *(ulong *)(param_1 + 0x60);
          local_b0 = *(void **)(param_1 + 0x70);
                    /* try { // try from 0034089c to 003408ab has its CatchHandler @ 00340ea4 */
          FUN_002fd2b0(&local_f0,"array");
                    /* try { // try from 003408ac to 003408bf has its CatchHandler @ 00340ea0 */
          FUN_0034107c(local_d8,param_1,10,&local_f0);
                    /* try { // try from 003408c0 to 003408d7 has its CatchHandler @ 00340e9c */
          FUN_003248ec(&local_70,0x65,&local_c0,local_d8,0);
                    /* try { // try from 003408d8 to 003408ef has its CatchHandler @ 00340e84 */
          uVar8 = FUN_003247c0(param_2,uVar9,&local_a0,&local_70);
          goto LAB_00340a64;
        }
        uVar9 = FUN_00326be8(param_2);
      }
      if ((uVar9 & 1) == 0) goto LAB_00340804;
      local_80 = local_80 - 1;
      if (local_80 == 0) break;
    } while( true );
  }
  uVar8 = 1;
  goto LAB_0034047c;
LAB_00340310:
                    /* try { // try from 00340310 to 003403bb has its CatchHandler @ 00340f80 */
  uVar7 = FUN_0033e8b4(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x30) = uVar7;
  goto LAB_00340100;
}


// ===== 00340fa4  FUN_00340fa4 =====

void FUN_00340fa4(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  long lVar4;
  undefined8 local_48;
  undefined1 local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  pbVar1 = *(byte **)(param_2 + 0x40);
  pbVar2 = *(byte **)(param_2 + 0x48);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  for (; pbVar1 != pbVar2; pbVar1 = pbVar1 + 1) {
    bVar3 = *pbVar1;
    if (bVar3 < 0x20) {
      local_40 = 0;
      local_48 = 0;
                    /* try { // try from 00341028 to 00341043 has its CatchHandler @ 0034104c */
      FUN_00342348(&local_48,bVar3,9,param_5,bVar3);
      FUN_00713bdc(param_1,&local_48);
    }
    else {
                    /* try { // try from 00341000 to 00341007 has its CatchHandler @ 00341048 */
      FUN_007132e8(param_1);
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0034107c  FUN_0034107c =====

void FUN_0034107c(undefined1 *param_1,long param_2,uint param_3,byte *param_4)

{
  ulong uVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  byte bVar5;
  long lVar6;
  void *pvVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  char *pcVar12;
  ulong local_90;
  undefined8 uStack_88;
  void *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  ulong local_68;
  void *local_60;
  undefined8 local_58;
  undefined1 local_50;
  long local_48;
  
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
  uVar8 = CONCAT35(s_syntax_error_001eaa15._5_3_,s_syntax_error_001eaa15._0_5_);
  uVar9 = CONCAT53(s_syntax_error_001eaa15._8_5_,s_syntax_error_001eaa15._5_3_);
  *param_1 = 0x1a;
  bVar5 = *param_4;
  uVar11 = *(ulong *)(param_4 + 8);
  *(undefined8 *)(param_1 + 1) = uVar8;
  *(undefined8 *)(param_1 + 6) = uVar9;
  param_1[0xe] = 0;
  uVar1 = (ulong)(bVar5 >> 1);
  if ((bVar5 & 1) != 0) {
    uVar1 = uVar11;
  }
  if (uVar1 != 0) {
    local_70 = 0;
    local_68 = 0;
    local_60 = (void *)0x0;
                    /* try { // try from 003410f4 to 0034113f has its CatchHandler @ 003413ec */
    FUN_00712ea8(&local_70,uVar1 + 0xf);
    FUN_00713bdc(&local_70,"while parsing ");
    uVar1 = *(ulong *)(param_4 + 8);
    pbVar2 = *(byte **)(param_4 + 0x10);
    if ((*param_4 & 1) == 0) {
      pbVar2 = param_4 + 1;
      uVar1 = (ulong)(*param_4 >> 1);
    }
    FUN_0071302c(&local_70,pbVar2,uVar1);
    FUN_007132e8(&local_70,0x20);
    uVar1 = local_68;
    pvVar7 = local_60;
    if ((local_70 & 1) == 0) {
      uVar1 = local_70 >> 1 & 0x7f;
      pvVar7 = (void *)((long)&local_70 + 1);
    }
                    /* try { // try from 00341158 to 0034115f has its CatchHandler @ 003413d8 */
    FUN_0071302c(param_1,pvVar7,uVar1);
    if ((local_70 & 1) != 0) {
      free(local_60);
    }
  }
                    /* try { // try from 00341170 to 0034117f has its CatchHandler @ 003413dc */
  FUN_00713bdc(param_1,&DAT_001f5400);
  uVar4 = *(uint *)(param_2 + 0x30);
  if (uVar4 == 0xe) {
    uStack_78 = *(undefined8 *)(param_2 + 0xa8);
    pbVar2 = *(byte **)(param_2 + 0x78);
    pbVar3 = *(byte **)(param_2 + 0x80);
    local_90 = 0;
    uStack_88 = 0;
    local_80 = (void *)0x0;
    for (; pbVar2 != pbVar3; pbVar2 = pbVar2 + 1) {
      if (*pbVar2 < 0x20) {
        local_50 = 0;
        local_58 = 0;
                    /* try { // try from 00341234 to 0034124f has its CatchHandler @ 00341404 */
        FUN_00342348(&local_58,*pbVar2,9);
        FUN_00713bdc(&local_90,&local_58);
      }
      else {
                    /* try { // try from 0034120c to 00341213 has its CatchHandler @ 00341400 */
        FUN_007132e8(&local_90);
      }
    }
    uVar1 = (ulong)local_58 >> 8;
    local_58 = CONCAT71((int7)uVar1,0x27);
                    /* try { // try from 003411ac to 003411cb has its CatchHandler @ 003413cc */
    FUN_0032a7a4(&local_70,&uStack_78,"; last read: \'",&local_90,&local_58);
    uVar1 = local_68;
    pvVar7 = local_60;
    if ((local_70 & 1) == 0) {
      uVar1 = local_70 >> 1 & 0x7f;
      pvVar7 = (void *)((long)&local_70 + 1);
    }
                    /* try { // try from 003411e4 to 003411eb has its CatchHandler @ 003413b4 */
    FUN_0071302c(param_1,pvVar7,uVar1);
    pvVar7 = local_80;
    uVar1 = local_90;
    if ((local_70 & 1) != 0) {
      free(local_60);
      pvVar7 = local_80;
      uVar1 = local_90;
    }
  }
  else {
    if (uVar4 < 0x11) {
      pcVar12 = &DAT_00201b74 + *(int *)(&DAT_00201b74 + (ulong)uVar4 * 4);
    }
    else {
      pcVar12 = "unknown token";
    }
    local_70 = 0;
    local_68 = 0;
    local_60 = (void *)0x0;
    lVar10 = __strlen_chk(pcVar12,0x17);
                    /* try { // try from 00341290 to 003412bb has its CatchHandler @ 003413e4 */
    FUN_00712ea8(&local_70,lVar10 + 0xb);
    FUN_00713bdc(&local_70,"unexpected ");
    FUN_00713bdc(&local_70,pcVar12);
    uVar1 = local_68;
    pvVar7 = local_60;
    if ((local_70 & 1) == 0) {
      uVar1 = local_70 >> 1 & 0x7f;
      pvVar7 = (void *)((long)&local_70 + 1);
    }
                    /* try { // try from 003412d4 to 003412db has its CatchHandler @ 003413d0 */
    FUN_0071302c(param_1,pvVar7,uVar1);
    pvVar7 = local_60;
    uVar1 = local_70;
  }
  if ((uVar1 & 1) != 0) {
    free(pvVar7);
  }
  if (param_3 != 0) {
    if (param_3 < 0x11) {
      pcVar12 = &UNK_00201bb8 + *(int *)(&DAT_00201bb4 + (long)(int)param_3 * 4);
    }
    else {
      pcVar12 = "unknown token";
    }
    local_70 = 0;
    local_68 = 0;
    local_60 = (void *)0x0;
    lVar10 = __strlen_chk(pcVar12,0x17);
                    /* try { // try from 00341330 to 0034135b has its CatchHandler @ 003413e8 */
    FUN_00712ea8(&local_70,lVar10 + 0xb);
    FUN_00713bdc(&local_70,"; expected ");
    FUN_00713bdc(&local_70,pcVar12);
    uVar1 = local_68;
    pvVar7 = local_60;
    if ((local_70 & 1) == 0) {
      uVar1 = local_70 >> 1 & 0x7f;
      pvVar7 = (void *)((long)&local_70 + 1);
    }
                    /* try { // try from 00341374 to 0034137b has its CatchHandler @ 003413d4 */
    FUN_0071302c(param_1,pvVar7,uVar1);
    if ((local_70 & 1) != 0) {
      free(local_60);
    }
  }
  if (*(long *)(lVar6 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00341444  FUN_00341444 =====

/* WARNING: Type propagation algorithm not settling */

uint FUN_00341444(long param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  byte *pbVar3;
  byte *pbVar4;
  long lVar5;
  byte bVar6;
  undefined *puVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  long lVar11;
  long *plVar12;
  ulong *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  double dVar16;
  byte local_100;
  undefined4 local_ff;
  undefined2 local_fb;
  void *local_f0;
  byte local_e8 [16];
  void *local_d8;
  ulong local_d0;
  undefined8 uStack_c8;
  void *local_c0;
  ulong local_b0;
  undefined8 uStack_a8;
  void *local_a0;
  void *local_98;
  ulong local_90;
  long local_88;
  undefined *local_80;
  uint local_78;
  undefined1 auStack_70 [16];
  long local_60;
  long local_58;
  
  puVar7 = PTR_DAT_007a10e8;
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  puVar1 = (undefined *)(param_1 + 0x90);
  local_90 = 0;
  local_98 = (void *)0x0;
  local_88 = 0;
LAB_00341498:
  iVar8 = *(int *)(param_1 + 0x30);
  if (iVar8 < 6) {
    if (iVar8 < 3) {
      if (iVar8 == 1) {
        local_80 = (undefined *)CONCAT71(local_80._1_7_,1);
        FUN_0032b318(param_2,&local_80);
        goto LAB_00341674;
      }
      if (iVar8 == 2) {
        local_80 = (undefined *)((ulong)local_80._1_7_ << 8);
        FUN_0032b318(param_2,&local_80);
        goto LAB_00341674;
      }
LAB_00341ae8:
      pbVar3 = *(byte **)(param_1 + 0x78);
      pbVar4 = *(byte **)(param_1 + 0x80);
      local_b0 = 0;
      uStack_a8 = 0;
      local_a0 = (void *)0x0;
      for (; pbVar3 != pbVar4; pbVar3 = pbVar3 + 1) {
        if (*pbVar3 < 0x20) {
          local_78 = local_78 & 0xffffff00;
          local_80 = (undefined *)0x0;
                    /* try { // try from 00341bd8 to 00341bf3 has its CatchHandler @ 003422d4 */
          FUN_00342348(&local_80,*pbVar3,9);
          FUN_00713bdc(&local_b0,&local_80);
        }
        else {
                    /* try { // try from 00341bb0 to 00341bb7 has its CatchHandler @ 003422c8 */
          FUN_007132e8(&local_b0);
        }
      }
      uStack_c8 = *(undefined8 *)(param_1 + 0x68);
      local_d0 = *(ulong *)(param_1 + 0x60);
      local_c0 = *(void **)(param_1 + 0x70);
      local_100 = 10;
      local_ff = 0x756c6176;
      local_fb = 0x65;
                    /* try { // try from 00341b28 to 00341b3b has its CatchHandler @ 00342258 */
      FUN_0034107c(local_e8,param_1,0x10,&local_100);
                    /* try { // try from 00341b3c to 00341b53 has its CatchHandler @ 00342254 */
      FUN_003248ec(&local_80,0x65,&local_d0,local_e8,0);
      *(undefined1 *)(param_2 + 0x28) = 1;
      if (*(char *)(param_2 + 0x29) != '\0') {
LAB_003420c0:
        plVar12 = (long *)FUN_00753a74(0x28);
        *plVar12 = (long)(PTR_DAT_007a12f8 + 0x10);
        *(uint *)(plVar12 + 1) = local_78;
        FUN_007127d4(plVar12 + 2,auStack_70);
        *plVar12 = (long)(PTR_DAT_007a1308 + 0x10);
        plVar12[4] = local_60;
        if (*(long *)(lVar5 + 0x28) == local_58) {
                    /* try { // try from 0034211c to 00342133 has its CatchHandler @ 00342250 */
                    /* WARNING: Subroutine does not return */
          FUN_00753c5c(plVar12,PTR_PTR_007a1310,PTR_FUN_007a12f0);
        }
        goto LAB_00342344;
      }
LAB_00341b64:
      local_80 = PTR_DAT_007a12f8 + 0x10;
      FUN_0073a2c4(auStack_70);
      FUN_0073a174(&local_80);
      if ((local_e8[0] & 1) != 0) {
        free(local_d8);
      }
      if ((local_100 & 1) != 0) {
        free(local_f0);
      }
      if ((local_b0 & 1) != 0) {
        free(local_a0);
      }
LAB_00341ba8:
      uVar10 = 0;
      goto LAB_0034181c;
    }
    if (iVar8 == 3) {
      local_80 = (undefined *)0x0;
      FUN_0032b56c(param_2,&local_80);
    }
    else if (iVar8 == 4) {
      FUN_0032b9f0(param_2,puVar1);
    }
    else {
      if (iVar8 != 5) goto LAB_00341ae8;
      local_80 = *(undefined **)(param_1 + 0xb8);
                    /* try { // try from 003414cc to 003415af has its CatchHandler @ 00342324 */
      FUN_0032be8c(param_2,&local_80);
    }
  }
  else {
    if (7 < iVar8) {
      if (iVar8 < 9) {
                    /* try { // try from 003415f4 to 00341673 has its CatchHandler @ 00342324 */
        uVar14 = FUN_0032aaec(param_2,0xffffffffffffffff);
        if ((uVar14 & 1) == 0) goto LAB_00341ba8;
        iVar8 = FUN_0033e8b4(param_1 + 0x38);
        *(int *)(param_1 + 0x30) = iVar8;
        if (iVar8 == 10) goto LAB_00341618;
        if (local_90 == local_88 * 0x40) {
          if (-1 < (long)(local_90 + 1)) {
            if (local_90 < 0x3fffffffffffffff) {
              uVar14 = local_88 * 0x80;
              uVar2 = (local_90 & 0x3fffffffffffffc0) + 0x40;
              if (uVar14 < uVar2 || uVar14 - uVar2 == 0) {
                uVar14 = uVar2;
              }
            }
            else {
              uVar14 = 0x7fffffffffffffff;
            }
                    /* try { // try from 003417a0 to 003417a7 has its CatchHandler @ 003422c4 */
            FUN_00325f08(&local_98,uVar14);
            goto LAB_003417ac;
          }
          if (*(long *)(lVar5 + 0x28) != local_58) goto LAB_00342344;
                    /* try { // try from 003420a0 to 003420a7 has its CatchHandler @ 003422c0 */
          FUN_0032600c(&local_98);
LAB_003420a8:
          if (*(long *)(lVar5 + 0x28) != local_58) goto LAB_00342344;
                    /* try { // try from 003420b8 to 003420bf has its CatchHandler @ 003422b8 */
          FUN_0032600c(&local_98);
          goto LAB_003420c0;
        }
LAB_003417ac:
        uVar14 = local_90 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)((long)local_98 + uVar14) =
             *(ulong *)((long)local_98 + uVar14) | 1L << (local_90 & 0x3f);
        local_90 = local_90 + 1;
        goto LAB_00341498;
      }
      if (iVar8 == 9) {
        uVar14 = FUN_0032a884(param_2,0xffffffffffffffff);
        if ((uVar14 & 1) == 0) goto LAB_00341ba8;
        iVar8 = FUN_0033e8b4(param_1 + 0x38);
        *(int *)(param_1 + 0x30) = iVar8;
        if (iVar8 == 0xb) {
LAB_00341618:
          *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -8;
          goto LAB_00341674;
        }
        if (iVar8 != 4) {
          uVar14 = *(ulong *)(param_1 + 0x60);
                    /* try { // try from 00341f14 to 00341f1f has its CatchHandler @ 0034218c */
          FUN_00340fa4(&local_b0,param_1 + 0x38);
          uStack_c8 = *(undefined8 *)(param_1 + 0x68);
          local_d0 = *(ulong *)(param_1 + 0x60);
          local_c0 = *(void **)(param_1 + 0x70);
                    /* try { // try from 00341f30 to 00341f3f has its CatchHandler @ 00342188 */
          FUN_002fd2b0(&local_100,"object key");
                    /* try { // try from 00341f40 to 00341f53 has its CatchHandler @ 00342184 */
          FUN_0034107c(local_e8,param_1,4,&local_100);
                    /* try { // try from 00341f54 to 00341f6b has its CatchHandler @ 00342180 */
          FUN_003248ec(&local_80,0x65,&local_d0,local_e8,0);
                    /* try { // try from 00341f6c to 00341f83 has its CatchHandler @ 0034217c */
          uVar10 = FUN_00325eb4(param_2,uVar14,&local_b0,&local_80);
LAB_00341e08:
          local_80 = PTR_DAT_007a12f8 + 0x10;
          FUN_0073a2c4(auStack_70);
          FUN_0073a174(&local_80);
          bVar6 = local_e8[0] & 1;
          local_e8[0] = local_100;
          if (bVar6 != 0) {
            free(local_d8);
            local_e8[0] = local_100;
          }
joined_r0x00341f00:
          if ((local_e8[0] & 1) != 0) {
            free(local_f0);
          }
          if ((local_b0 & 1) != 0) {
            free(local_a0);
          }
LAB_0034181c:
          if (local_98 != (void *)0x0) {
            free(local_98);
          }
          if (*(long *)(lVar5 + 0x28) == local_58) {
            return uVar10 & 1;
          }
LAB_00342344:
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        local_80 = puVar1;
        lVar11 = FUN_0032919c(*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 8),puVar1,
                              puVar7,&local_80,&local_b0);
        *(long *)(param_2 + 0x20) = lVar11 + 0x38;
        iVar8 = FUN_0033e8b4(param_1 + 0x38);
        *(int *)(param_1 + 0x30) = iVar8;
        if (iVar8 != 0xc) {
          uVar14 = *(ulong *)(param_1 + 0x60);
                    /* try { // try from 00341f90 to 00341f9b has its CatchHandler @ 00342178 */
          FUN_00340fa4(&local_b0,param_1 + 0x38);
          uStack_c8 = *(undefined8 *)(param_1 + 0x68);
          local_d0 = *(ulong *)(param_1 + 0x60);
          local_c0 = *(void **)(param_1 + 0x70);
                    /* try { // try from 00341fac to 00341fbb has its CatchHandler @ 00342174 */
          FUN_002fd2b0(&local_100,"object separator");
                    /* try { // try from 00341fbc to 00341fcf has its CatchHandler @ 00342170 */
          FUN_0034107c(local_e8,param_1,0xc,&local_100);
                    /* try { // try from 00341fd0 to 00341fe7 has its CatchHandler @ 0034216c */
          FUN_003248ec(&local_80,0x65,&local_d0,local_e8,0);
                    /* try { // try from 00341fe8 to 00341fff has its CatchHandler @ 00342168 */
          uVar10 = FUN_00325eb4(param_2,uVar14,&local_b0,&local_80);
          goto LAB_00341e08;
        }
        if (local_90 == local_88 * 0x40) {
          if ((long)(local_90 + 1) < 0) goto LAB_003420a8;
          if (local_90 < 0x3fffffffffffffff) {
            uVar14 = local_88 * 0x80;
            uVar2 = (local_90 & 0x3fffffffffffffc0) + 0x40;
            if (uVar14 < uVar2 || uVar14 - uVar2 == 0) {
              uVar14 = uVar2;
            }
          }
          else {
            uVar14 = 0x7fffffffffffffff;
          }
                    /* try { // try from 003417d8 to 003417df has its CatchHandler @ 003422bc */
          FUN_00325f08(&local_98,uVar14);
        }
        uVar14 = local_90 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)((long)local_98 + uVar14) =
             *(ulong *)((long)local_98 + uVar14) & (1L << (local_90 & 0x3f) ^ 0xffffffffffffffffU);
                    /* try { // try from 00341808 to 0034180f has its CatchHandler @ 00342324 */
        local_90 = local_90 + 1;
        uVar9 = FUN_0033e8b4(param_1 + 0x38);
        *(undefined4 *)(param_1 + 0x30) = uVar9;
        goto LAB_00341498;
      }
      if (iVar8 != 0xe) {
        if (iVar8 != 0xf) goto LAB_00341ae8;
        puVar13 = (ulong *)(param_1 + 0x60);
        if (*puVar13 != 1) {
          pbVar3 = *(byte **)(param_1 + 0x78);
          pbVar4 = *(byte **)(param_1 + 0x80);
          local_b0 = 0;
          uStack_a8 = 0;
          local_a0 = (void *)0x0;
          for (; pbVar3 != pbVar4; pbVar3 = pbVar3 + 1) {
            if (*pbVar3 < 0x20) {
              local_78 = local_78 & 0xffffff00;
              local_80 = (undefined *)0x0;
                    /* try { // try from 00341990 to 003419ab has its CatchHandler @ 003422d8 */
              FUN_00342348(&local_80,*pbVar3,9);
              FUN_00713bdc(&local_b0,&local_80);
            }
            else {
                    /* try { // try from 00341968 to 0034196f has its CatchHandler @ 003422cc */
              FUN_007132e8(&local_b0);
            }
          }
          uStack_c8 = *(undefined8 *)(param_1 + 0x68);
          local_d0 = *puVar13;
          local_c0 = *(void **)(param_1 + 0x70);
          local_100 = 10;
          local_ff = 0x756c6176;
          local_fb = 0x65;
                    /* try { // try from 003418b8 to 003418cb has its CatchHandler @ 00342264 */
          FUN_0034107c(local_e8,param_1,0x10,&local_100);
                    /* try { // try from 003418cc to 003418e3 has its CatchHandler @ 00342260 */
          FUN_003248ec(&local_80,0x65,&local_d0,local_e8,0);
          *(undefined1 *)(param_2 + 0x28) = 1;
          if (*(char *)(param_2 + 0x29) != '\0') {
            plVar12 = (long *)FUN_00753a74(0x28);
            *plVar12 = (long)(PTR_DAT_007a12f8 + 0x10);
            *(uint *)(plVar12 + 1) = local_78;
            FUN_007127d4(plVar12 + 2,auStack_70);
            *plVar12 = (long)(PTR_DAT_007a1308 + 0x10);
            plVar12[4] = local_60;
            if (*(long *)(lVar5 + 0x28) == local_58) {
                    /* try { // try from 00341950 to 00341967 has its CatchHandler @ 0034225c */
                    /* WARNING: Subroutine does not return */
              FUN_00753c5c(plVar12,PTR_PTR_007a1310,PTR_FUN_007a12f0);
            }
            goto LAB_00342344;
          }
          goto LAB_00341b64;
        }
                    /* try { // try from 00342004 to 0034200f has its CatchHandler @ 00342164 */
        FUN_00340fa4(&local_b0,param_1 + 0x38);
        uStack_c8 = *(undefined8 *)(param_1 + 0x68);
        local_d0 = *puVar13;
        local_c0 = *(void **)(param_1 + 0x70);
                    /* try { // try from 00342020 to 0034202f has its CatchHandler @ 00342160 */
        FUN_002fd2b0(local_e8,
                     "attempting to parse an empty input; check that your input string or stream contains the expected JSON"
                    );
                    /* try { // try from 00342030 to 00342047 has its CatchHandler @ 0034215c */
        FUN_003248ec(&local_80,0x65,&local_d0,local_e8,0);
                    /* try { // try from 00342048 to 0034205f has its CatchHandler @ 00342134 */
        uVar10 = FUN_00325eb4(param_2,1,&local_b0,&local_80);
        local_80 = PTR_DAT_007a12f8 + 0x10;
        FUN_0073a2c4(auStack_70);
        FUN_0073a174(&local_80);
        local_f0 = local_d8;
        goto joined_r0x00341f00;
      }
      pbVar3 = *(byte **)(param_1 + 0x78);
      pbVar4 = *(byte **)(param_1 + 0x80);
      local_b0 = 0;
      uStack_a8 = 0;
      local_a0 = (void *)0x0;
      for (; pbVar3 != pbVar4; pbVar3 = pbVar3 + 1) {
        if (*pbVar3 < 0x20) {
          local_78 = local_78 & 0xffffff00;
          local_80 = (undefined *)0x0;
                    /* try { // try from 00341ac8 to 00341ae3 has its CatchHandler @ 003422dc */
          FUN_00342348(&local_80,*pbVar3,9);
          FUN_00713bdc(&local_b0,&local_80);
        }
        else {
                    /* try { // try from 00341aa0 to 00341aa7 has its CatchHandler @ 003422d0 */
          FUN_007132e8(&local_b0);
        }
      }
      uStack_c8 = *(undefined8 *)(param_1 + 0x68);
      local_d0 = *(ulong *)(param_1 + 0x60);
      local_c0 = *(void **)(param_1 + 0x70);
      local_100 = 10;
      local_ff = 0x756c6176;
      local_fb = 0x65;
                    /* try { // try from 003419f0 to 00341a03 has its CatchHandler @ 003422a0 */
      FUN_0034107c(local_e8,param_1,0,&local_100);
                    /* try { // try from 00341a04 to 00341a1b has its CatchHandler @ 00342288 */
      FUN_003248ec(&local_80,0x65,&local_d0,local_e8,0);
      *(undefined1 *)(param_2 + 0x28) = 1;
      if (*(char *)(param_2 + 0x29) != '\0') {
        plVar12 = (long *)FUN_00753a74(0x28);
        *plVar12 = (long)(PTR_DAT_007a12f8 + 0x10);
        *(uint *)(plVar12 + 1) = local_78;
        FUN_007127d4(plVar12 + 2,auStack_70);
        *plVar12 = (long)(PTR_DAT_007a1308 + 0x10);
        plVar12[4] = local_60;
        if (*(long *)(lVar5 + 0x28) == local_58) {
                    /* try { // try from 00341a88 to 00341a9f has its CatchHandler @ 00342268 */
                    /* WARNING: Subroutine does not return */
          FUN_00753c5c(plVar12,PTR_PTR_007a1310,PTR_FUN_007a12f0);
        }
        goto LAB_00342344;
      }
      goto LAB_00341b64;
    }
    if (iVar8 != 6) {
      if (iVar8 != 7) goto LAB_00341ae8;
      dVar16 = ABS((double)*(undefined **)(param_1 + 0xc0));
      if ((dVar16 < INFINITY) || (dVar16 != INFINITY && dVar16 < INFINITY == NAN(dVar16))) {
                    /* try { // try from 003415e4 to 003415ef has its CatchHandler @ 0034231c */
        local_80 = *(undefined **)(param_1 + 0xc0);
        FUN_0032b0c0(param_2,&local_80);
        goto LAB_00341674;
      }
      uVar15 = *(undefined8 *)(param_1 + 0x60);
                    /* try { // try from 00341e64 to 00341e6f has its CatchHandler @ 003421e8 */
      FUN_00340fa4(&local_b0,param_1 + 0x38);
                    /* try { // try from 00341e70 to 00341e7b has its CatchHandler @ 003421e4 */
      FUN_00340fa4(local_e8,param_1 + 0x38);
      local_100 = 0x27;
                    /* try { // try from 00341e84 to 00341e9b has its CatchHandler @ 003421d0 */
      FUN_00326fbc(&local_d0,"number overflow parsing \'",local_e8,&local_100);
                    /* try { // try from 00341e9c to 00341eaf has its CatchHandler @ 003421b8 */
      FUN_00326dcc(&local_80,0x196,&local_d0,0);
                    /* try { // try from 00341eb0 to 00341ec7 has its CatchHandler @ 00342190 */
      uVar10 = FUN_0032ad54(param_2,uVar15,&local_b0,&local_80);
      local_80 = PTR_DAT_007a12f8 + 0x10;
      FUN_0073a2c4(auStack_70);
      FUN_0073a174(&local_80);
      local_f0 = local_d8;
      if ((local_d0 & 1) != 0) {
        free(local_c0);
        local_f0 = local_d8;
      }
      goto joined_r0x00341f00;
    }
    local_80 = *(undefined **)(param_1 + 0xb0);
    FUN_0032b79c(param_2,&local_80);
  }
LAB_00341674:
  if (local_90 != 0) {
    do {
      if ((*(ulong *)((long)local_98 + (local_90 - 1 >> 3 & 0x1ffffffffffffff8)) >>
           (local_90 - 1 & 0x3f) & 1) == 0) {
        iVar8 = FUN_0033e8b4(param_1 + 0x38);
        *(int *)(param_1 + 0x30) = iVar8;
        if (iVar8 == 0xd) {
          iVar8 = FUN_0033e8b4(param_1 + 0x38);
          *(int *)(param_1 + 0x30) = iVar8;
          if (iVar8 != 4) {
            uVar14 = *(ulong *)(param_1 + 0x60);
                    /* try { // try from 00341d1c to 00341d27 has its CatchHandler @ 00342218 */
            FUN_00340fa4(&local_b0,param_1 + 0x38);
            uStack_c8 = *(undefined8 *)(param_1 + 0x68);
            local_d0 = *(ulong *)(param_1 + 0x60);
            local_c0 = *(void **)(param_1 + 0x70);
                    /* try { // try from 00341d38 to 00341d47 has its CatchHandler @ 00342210 */
            FUN_002fd2b0(&local_100,"object key");
                    /* try { // try from 00341d48 to 00341d5b has its CatchHandler @ 00342208 */
            FUN_0034107c(local_e8,param_1,4,&local_100);
                    /* try { // try from 00341d5c to 00341d73 has its CatchHandler @ 00342204 */
            FUN_003248ec(&local_80,0x65,&local_d0,local_e8,0);
                    /* try { // try from 00341d74 to 00341d8b has its CatchHandler @ 00342200 */
            uVar10 = FUN_00325eb4(param_2,uVar14,&local_b0,&local_80);
            goto LAB_00341e08;
          }
          local_80 = puVar1;
          lVar11 = FUN_0032919c(*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 8),
                                puVar1,puVar7,&local_80,&local_b0);
          *(long *)(param_2 + 0x20) = lVar11 + 0x38;
          iVar8 = FUN_0033e8b4(param_1 + 0x38);
          *(int *)(param_1 + 0x30) = iVar8;
          if (iVar8 == 0xc) {
            uVar9 = FUN_0033e8b4(param_1 + 0x38);
            *(undefined4 *)(param_1 + 0x30) = uVar9;
            goto LAB_00341498;
          }
          uVar14 = *(ulong *)(param_1 + 0x60);
                    /* try { // try from 00341d98 to 00341da3 has its CatchHandler @ 003421fc */
          FUN_00340fa4(&local_b0,param_1 + 0x38);
          uStack_c8 = *(undefined8 *)(param_1 + 0x68);
          local_d0 = *(ulong *)(param_1 + 0x60);
          local_c0 = *(void **)(param_1 + 0x70);
                    /* try { // try from 00341db4 to 00341dc3 has its CatchHandler @ 003421f8 */
          FUN_002fd2b0(&local_100,"object separator");
                    /* try { // try from 00341dc4 to 00341dd7 has its CatchHandler @ 003421f4 */
          FUN_0034107c(local_e8,param_1,0xc,&local_100);
                    /* try { // try from 00341dd8 to 00341def has its CatchHandler @ 003421f0 */
          FUN_003248ec(&local_80,0x65,&local_d0,local_e8,0);
                    /* try { // try from 00341df0 to 00341e07 has its CatchHandler @ 003421ec */
          uVar10 = FUN_00325eb4(param_2,uVar14,&local_b0,&local_80);
          goto LAB_00341e08;
        }
        if (iVar8 != 0xb) {
          uVar14 = *(ulong *)(param_1 + 0x60);
                    /* try { // try from 00341ca0 to 00341cab has its CatchHandler @ 00342224 */
          FUN_00340fa4(&local_b0,param_1 + 0x38);
          uStack_c8 = *(undefined8 *)(param_1 + 0x68);
          local_d0 = *(ulong *)(param_1 + 0x60);
          local_c0 = *(void **)(param_1 + 0x70);
                    /* try { // try from 00341cbc to 00341ccb has its CatchHandler @ 00342220 */
          FUN_002fd2b0(&local_100,"object");
                    /* try { // try from 00341ccc to 00341cdf has its CatchHandler @ 0034221c */
          FUN_0034107c(local_e8,param_1,0xb,&local_100);
                    /* try { // try from 00341ce0 to 00341cf7 has its CatchHandler @ 00342214 */
          FUN_003248ec(&local_80,0x65,&local_d0,local_e8,0);
                    /* try { // try from 00341cf8 to 00341d0f has its CatchHandler @ 0034220c */
          uVar10 = FUN_00325eb4(param_2,uVar14,&local_b0,&local_80);
          goto LAB_00341e08;
        }
      }
      else {
                    /* try { // try from 00341698 to 003416bf has its CatchHandler @ 00342320 */
        iVar8 = FUN_0033e8b4(param_1 + 0x38);
        *(int *)(param_1 + 0x30) = iVar8;
        if (iVar8 == 0xd) goto LAB_003416f4;
        if (iVar8 != 10) {
          uVar14 = *(ulong *)(param_1 + 0x60);
                    /* try { // try from 00341c24 to 00341c2f has its CatchHandler @ 0034224c */
          FUN_00340fa4(&local_b0,param_1 + 0x38);
          uStack_c8 = *(undefined8 *)(param_1 + 0x68);
          local_d0 = *(ulong *)(param_1 + 0x60);
          local_c0 = *(void **)(param_1 + 0x70);
                    /* try { // try from 00341c40 to 00341c4f has its CatchHandler @ 00342248 */
          FUN_002fd2b0(&local_100,"array");
                    /* try { // try from 00341c50 to 00341c63 has its CatchHandler @ 00342244 */
          FUN_0034107c(local_e8,param_1,10,&local_100);
                    /* try { // try from 00341c64 to 00341c7b has its CatchHandler @ 00342240 */
          FUN_003248ec(&local_80,0x65,&local_d0,local_e8,0);
                    /* try { // try from 00341c7c to 00341c93 has its CatchHandler @ 00342228 */
          uVar10 = FUN_00325eb4(param_2,uVar14,&local_b0,&local_80);
          goto LAB_00341e08;
        }
      }
      local_90 = local_90 - 1;
      *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -8;
      if (local_90 == 0) break;
    } while( true );
  }
  uVar10 = 1;
  goto LAB_0034181c;
LAB_003416f4:
                    /* try { // try from 003416f4 to 0034175f has its CatchHandler @ 00342324 */
  uVar9 = FUN_0033e8b4(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x30) = uVar9;
  goto LAB_00341498;
}


// ===== 00342348  FUN_00342348 =====

void FUN_00342348(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9)

{
  long lVar1;
  long lVar2;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  undefined1 **ppuStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  ppuStack_68 = &local_70;
  puStack_60 = &local_90;
  uStack_58 = 0xffffff80ffffffe0;
  local_90 = param_6;
  uStack_88 = param_7;
  local_80 = param_8;
  uStack_78 = param_9;
  local_70 = (undefined1 *)register0x00000008;
  __vsnprintf_chk(param_2,param_4,0,9,"<U+%.4X>",&local_70,param_8,param_9,param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003423ec  _INIT_13 =====

void _INIT_13(void)

{
  __cxa_atexit(PTR_FUN_007a1110,PTR_DAT_007a1410,&PTR_LOOP_0075ec90);
  return;
}


// ===== 00342408  FUN_00342408 =====

void FUN_00342408(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_007609f8;
  FUN_0032768c(param_1 + 1);
  return;
}


// ===== 0034241c  FUN_0034241c =====

void FUN_0034241c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  char *local_50 [3];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_50[0] = "frameProcessorConfig";
                    /* try { // try from 0034244c to 00342463 has its CatchHandler @ 00342488 */
  uVar2 = FUN_003425ac(param_2 + 8,local_50);
  FUN_0032768c(param_1,uVar2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003425ac  FUN_003425ac =====

long * FUN_003425ac(char *param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 local_78 [3];
  undefined1 auStack_60 [24];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*param_1 == '\x01') {
    plVar5 = (long *)(*(long *)(param_1 + 8) + 8);
    plVar7 = (long *)*plVar5;
    plVar6 = plVar5;
    if (plVar7 != (long *)0x0) {
      do {
        uVar3 = FUN_00713804(plVar7 + 4,*param_2);
        if (-1 < (int)uVar3) {
          plVar6 = plVar7;
        }
        plVar7 = *(long **)((long)plVar7 + (uVar3 >> 0x1c & 8));
      } while (plVar7 != (long *)0x0);
      if ((plVar6 != plVar5) && (iVar2 = FUN_00713804(plVar6 + 4,*param_2), iVar2 < 1)) {
        plVar5 = plVar6;
      }
    }
    if (plVar5 == (long *)(*(long *)(param_1 + 8) + 8)) {
      uVar4 = FUN_00753a74(0x20);
                    /* try { // try from 003426f4 to 003426fb has its CatchHandler @ 00342798 */
      FUN_002fd2b0(local_78,*param_2);
                    /* try { // try from 003426fc to 00342717 has its CatchHandler @ 00342780 */
      FUN_00312ab4(auStack_60,"key \'",local_78,"\' not found");
                    /* try { // try from 0034271c to 0034275b has its CatchHandler @ 0034275c */
      FUN_003128c4(uVar4,0x193,auStack_60,param_1);
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar4,PTR_PTR_007a1318,PTR_FUN_007a12f0);
      }
    }
    else if (*(long *)(lVar1 + 0x28) == local_48) {
      return plVar5 + 7;
    }
  }
  else {
    uVar4 = FUN_00753a74(0x20);
    local_78[0] = FUN_00312898(param_1);
                    /* try { // try from 00342688 to 0034269b has its CatchHandler @ 003427b8 */
    FUN_00312810(auStack_60,"cannot use at() with ",local_78);
                    /* try { // try from 003426a0 to 003426df has its CatchHandler @ 0034279c */
    FUN_00312624(uVar4,0x130,auStack_60,param_1);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar4,PTR_PTR_007a12e8,PTR_FUN_007a12f0);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003427e0  FUN_003427e0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003427e0(undefined8 param_1,long param_2,byte *param_3)

{
  long lVar1;
  long *plVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long local_c0;
  undefined *local_b8;
  char *local_b0;
  long *local_a8;
  long local_a0;
  long local_98;
  char local_90 [8];
  long *local_88;
  char *local_80;
  undefined8 *puStack_78;
  char *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_b0 = "frameProcessorConfig";
                    /* try { // try from 00342820 to 0034282b has its CatchHandler @ 00342b64 */
  uVar4 = FUN_003425ac(param_2 + 8,&local_b0);
  local_80 = "files";
                    /* try { // try from 00342838 to 0034284f has its CatchHandler @ 00342b68 */
  uVar4 = FUN_003425ac(uVar4,&local_80);
  FUN_0032768c(local_90,uVar4);
  local_a8 = (long *)0x0;
  local_a0 = 0;
  local_98 = -0x8000000000000000;
  if (local_90[0] == '\0') {
    lVar12 = 1;
    local_c0 = 0;
    plVar11 = (long *)0x0;
    local_98 = 1;
  }
  else if (local_90[0] == '\x02') {
    plVar11 = (long *)0x0;
    lVar12 = -0x8000000000000000;
    local_a0 = *local_88;
    local_c0 = local_88[1];
  }
  else if (local_90[0] == '\x01') {
    local_c0 = 0;
    lVar12 = -0x8000000000000000;
    plVar11 = local_88 + 1;
    local_a8 = (long *)*local_88;
  }
  else {
    plVar11 = (long *)0x0;
    lVar12 = 1;
    local_c0 = 0;
    local_98 = 0;
  }
  local_b0 = local_90;
  do {
    if (local_90[0] == '\x01') {
      if (local_a8 == plVar11) goto LAB_00342af8;
    }
    else if (local_90[0] == '\x02') {
      if (local_a0 == local_c0) {
LAB_00342af8:
        uVar4 = FUN_00753a74(0x20);
                    /* try { // try from 00342b04 to 00342b17 has its CatchHandler @ 00342ba4 */
        FUN_00714534(&local_b0,"KefConfigReader::getFpFileConfigByName: No config with name: ",
                     param_3);
                    /* try { // try from 00342b1c to 00342b57 has its CatchHandler @ 00342b88 */
        FUN_00374ee0(uVar4,&local_b0);
        if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_00753c5c(uVar4,PTR_PTR_007a1338,PTR_FUN_007a11f8);
        }
        goto LAB_00342d34;
      }
    }
    else if (local_98 == lVar12) goto LAB_00342af8;
                    /* try { // try from 00342944 to 0034294b has its CatchHandler @ 00342ba8 */
    uVar4 = FUN_0032e488(&local_b0);
    local_b8 = &DAT_001eaa75;
                    /* try { // try from 00342954 to 0034295b has its CatchHandler @ 00342bac */
    uVar5 = FUN_003425ac(uVar4,&local_b8);
    puStack_78 = (undefined8 *)0x0;
    local_80 = (char *)0x3;
                    /* try { // try from 00342968 to 0034296f has its CatchHandler @ 00342bbc */
    puVar6 = (undefined8 *)FUN_00759c3c(0x18);
    if ((*param_3 & 1) == 0) {
      uVar8 = *(undefined8 *)param_3;
      uVar9 = *(undefined8 *)(param_3 + 0x10);
      puVar6[1] = *(undefined8 *)(param_3 + 8);
      *puVar6 = uVar8;
      puVar6[2] = uVar9;
    }
    else {
                    /* try { // try from 00342994 to 0034299b has its CatchHandler @ 00342b74 */
      FUN_002fb36c(puVar6,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 8));
    }
    puStack_78 = puVar6;
    uVar7 = FUN_00342d3c(uVar5,&local_80);
                    /* try { // try from 003429b4 to 003429bb has its CatchHandler @ 00342bd4 */
    FUN_00313038(&puStack_78,(ulong)local_80 & 0xff);
    if ((uVar7 & 1) != 0) {
                    /* try { // try from 00342a20 to 00342a2b has its CatchHandler @ 00342b60 */
      FUN_0032768c(param_1,uVar4);
                    /* try { // try from 00342a34 to 00342a3b has its CatchHandler @ 00342b5c */
      FUN_00313038(&local_88,local_90[0]);
      if (*(long *)(lVar1 + 0x28) == local_68) {
        return;
      }
      goto LAB_00342d34;
    }
    if (*local_b0 == '\x02') {
      local_a0 = local_a0 + 0x10;
    }
    else if (*local_b0 == '\x01') {
      plVar10 = local_a8;
      plVar2 = (long *)local_a8[1];
      if ((long *)local_a8[1] == (long *)0x0) {
        do {
          local_a8 = (long *)plVar10[2];
          bVar3 = (long *)*local_a8 != plVar10;
          plVar10 = local_a8;
        } while (bVar3);
      }
      else {
        do {
          local_a8 = plVar2;
          plVar2 = (long *)*local_a8;
        } while ((long *)*local_a8 != (long *)0x0);
      }
    }
    else {
      local_98 = local_98 + 1;
    }
  } while (local_b0 == local_90);
  uVar8 = FUN_00753a74(0x20);
                    /* try { // try from 00342a7c to 00342a83 has its CatchHandler @ 00342c00 */
  local_70 = (char *)FUN_00759c3c(0x38);
  uVar9 = s_cannot_compare_iterators_of_diff_001d7c2b._24_8_;
  uVar5 = s_cannot_compare_iterators_of_diff_001d7c2b._16_8_;
  uVar4 = s_cannot_compare_iterators_of_diff_001d7c2b._0_8_;
  puStack_78 = _UNK_00200b18;
  local_80 = _DAT_00200b10;
  *(undefined8 *)(local_70 + 8) = s_cannot_compare_iterators_of_diff_001d7c2b._8_8_;
  *(undefined8 *)local_70 = uVar4;
  *(undefined8 *)(local_70 + 0x18) = uVar9;
  *(undefined8 *)(local_70 + 0x10) = uVar5;
  uVar5 = s_cannot_compare_iterators_of_diff_001d7c2b._40_8_;
  uVar4 = s_cannot_compare_iterators_of_diff_001d7c2b._32_8_;
  local_70[0x30] = '\0';
  *(undefined8 *)(local_70 + 0x28) = uVar5;
  *(undefined8 *)(local_70 + 0x20) = uVar4;
                    /* try { // try from 00342ab8 to 00342af7 has its CatchHandler @ 00342bd8 */
  FUN_0032e768(uVar8,0xd4,&local_80,local_b0);
  if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(uVar8,PTR_PTR_007a1328,PTR_FUN_007a12f0);
  }
LAB_00342d34:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00342d3c  FUN_00342d3c =====

bool FUN_00342d3c(byte *param_1,byte *param_2)

{
  size_t sVar1;
  long lVar2;
  byte bVar3;
  long *plVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  char *__s2;
  size_t sVar8;
  byte *pbVar9;
  ulong uVar10;
  char *pcVar11;
  long *plVar12;
  byte *pbVar13;
  byte *__s2_00;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  long *plVar17;
  long lVar18;
  long *plVar19;
  double dVar20;
  double dVar21;
  
  bVar5 = *param_1;
  bVar3 = *param_2;
  if (bVar5 == bVar3) {
    if (3 < bVar5) {
      if (bVar5 < 6) {
        if (bVar5 == 4) {
          bVar5 = param_1[8];
          bVar3 = param_2[8];
          goto LAB_003430a4;
        }
        if (bVar5 != 5) {
          return false;
        }
      }
      else if (bVar5 != 6) {
        if (bVar5 == 7) {
          return *(double *)(param_1 + 8) == *(double *)(param_2 + 8);
        }
        if (bVar5 != 8) {
          return false;
        }
        puVar14 = *(undefined8 **)(param_1 + 8);
        puVar16 = *(undefined8 **)(param_2 + 8);
        sVar8 = puVar14[1] - (long)*puVar14;
        if (sVar8 != puVar16[1] - (long)*puVar16) {
          return false;
        }
        iVar7 = memcmp((void *)*puVar14,(void *)*puVar16,sVar8);
        if (iVar7 != 0) {
          return false;
        }
        if (puVar14[3] != puVar16[3]) {
          return false;
        }
        bVar5 = *(byte *)(puVar14 + 4);
        bVar3 = *(byte *)(puVar16 + 4);
LAB_003430a4:
        return bVar5 == bVar3;
      }
LAB_00343104:
      return *(long *)(param_1 + 8) == *(long *)(param_2 + 8);
    }
    if (bVar5 < 2) {
      if (bVar5 == 0) {
        return true;
      }
      if (bVar5 == 1) {
        puVar14 = *(undefined8 **)(param_1 + 8);
        if (puVar14[2] == (*(undefined8 **)(param_2 + 8))[2]) {
          plVar17 = (long *)*puVar14;
          if (plVar17 == puVar14 + 1) {
            return true;
          }
          plVar19 = (long *)**(undefined8 **)(param_2 + 8);
          do {
            bVar5 = *(byte *)(plVar17 + 4);
            bVar3 = *(byte *)(plVar19 + 4);
            uVar10 = (ulong)(bVar5 >> 1);
            sVar8 = uVar10;
            if ((bVar5 & 1) != 0) {
              sVar8 = plVar17[5];
            }
            sVar1 = (ulong)(bVar3 >> 1);
            if ((bVar3 & 1) != 0) {
              sVar1 = plVar19[5];
            }
            if (sVar8 != sVar1) {
              return false;
            }
            __s2 = (char *)((long)plVar19 + 0x21);
            if ((bVar3 & 1) != 0) {
              __s2 = (char *)plVar19[6];
            }
            if ((bVar5 & 1) == 0) {
              if (1 < bVar5) {
                pcVar11 = (char *)((long)plVar17 + 0x21);
                do {
                  if (*pcVar11 != *__s2) {
                    return false;
                  }
                  uVar10 = uVar10 - 1;
                  __s2 = __s2 + 1;
                  pcVar11 = pcVar11 + 1;
                } while (uVar10 != 0);
              }
            }
            else {
              iVar7 = memcmp((void *)plVar17[6],__s2,plVar17[5]);
              if (iVar7 != 0) {
                return false;
              }
            }
            uVar10 = FUN_00342d3c(plVar17 + 7,plVar19 + 7);
            if ((uVar10 & 1) == 0) {
              return false;
            }
            plVar4 = (long *)plVar17[1];
            plVar12 = plVar17;
            if ((long *)plVar17[1] == (long *)0x0) {
              do {
                plVar17 = (long *)plVar12[2];
                bVar6 = (long *)*plVar17 != plVar12;
                plVar12 = plVar17;
              } while (bVar6);
            }
            else {
              do {
                plVar17 = plVar4;
                plVar4 = (long *)*plVar17;
              } while ((long *)*plVar17 != (long *)0x0);
            }
            plVar4 = (long *)plVar19[1];
            plVar12 = plVar19;
            if ((long *)plVar19[1] == (long *)0x0) {
              do {
                plVar19 = (long *)plVar12[2];
                bVar6 = (long *)*plVar19 != plVar12;
                plVar12 = plVar19;
              } while (bVar6);
            }
            else {
              do {
                plVar19 = plVar4;
                plVar4 = (long *)*plVar19;
              } while ((long *)*plVar19 != (long *)0x0);
            }
            bVar5 = 1;
          } while (plVar17 != puVar14 + 1);
          goto LAB_00342e0c;
        }
      }
      return false;
    }
    if (bVar5 == 2) {
      lVar15 = **(long **)(param_1 + 8);
      lVar2 = (*(long **)(param_1 + 8))[1];
      lVar18 = **(long **)(param_2 + 8);
      if (lVar2 - lVar15 != (*(long **)(param_2 + 8))[1] - lVar18) {
        return false;
      }
      if (lVar15 == lVar2) {
        return true;
      }
      do {
        bVar5 = FUN_00342d3c(lVar15,lVar18);
        if ((bVar5 & 1) == 0) break;
        lVar15 = lVar15 + 0x10;
        lVar18 = lVar18 + 0x10;
      } while (lVar15 != lVar2);
    }
    else {
      if (bVar5 != 3) {
        return false;
      }
      pbVar9 = *(byte **)(param_1 + 8);
      pbVar13 = *(byte **)(param_2 + 8);
      bVar5 = *pbVar9;
      bVar3 = *pbVar13;
      uVar10 = (ulong)(bVar5 >> 1);
      sVar8 = uVar10;
      if ((bVar5 & 1) != 0) {
        sVar8 = *(size_t *)(pbVar9 + 8);
      }
      sVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        sVar1 = *(size_t *)(pbVar13 + 8);
      }
      if (sVar8 != sVar1) {
        return false;
      }
      __s2_00 = *(byte **)(pbVar13 + 0x10);
      if ((bVar3 & 1) == 0) {
        __s2_00 = pbVar13 + 1;
      }
      if ((bVar5 & 1) != 0) {
        iVar7 = memcmp(*(void **)(pbVar9 + 0x10),__s2_00,*(size_t *)(pbVar9 + 8));
        return iVar7 == 0;
      }
      if (bVar5 < 2) {
        return true;
      }
      do {
        uVar10 = uVar10 - 1;
        pbVar9 = pbVar9 + 1;
        bVar5 = *pbVar9 == *__s2_00;
        if (!(bool)bVar5) break;
        __s2_00 = __s2_00 + 1;
      } while (uVar10 != 0);
    }
    goto LAB_00342e0c;
  }
  if ((bVar5 == 5) && (bVar3 == 7)) {
    dVar20 = (double)*(long *)(param_1 + 8);
LAB_00342de0:
    dVar21 = *(double *)(param_2 + 8);
  }
  else if ((bVar5 == 7) && (bVar3 == 5)) {
    dVar21 = *(double *)(param_1 + 8);
    dVar20 = (double)*(long *)(param_2 + 8);
  }
  else {
    if ((bVar5 == 6) && (bVar3 == 7)) {
      dVar20 = (double)NEON_ucvtf(*(undefined8 *)(param_1 + 8));
      goto LAB_00342de0;
    }
    if ((bVar5 != 7) || (bVar3 != 6)) {
      if (((bVar5 != 6) || (bVar3 != 5)) && ((bVar5 != 5 || (bVar3 != 6)))) {
        FUN_00343ea8(param_1,param_2,0);
        return false;
      }
      goto LAB_00343104;
    }
    dVar21 = *(double *)(param_1 + 8);
    dVar20 = (double)NEON_ucvtf(*(undefined8 *)(param_2 + 8));
  }
  bVar5 = dVar21 == dVar20;
LAB_00342e0c:
  return (bool)(bVar5 & 1);
}


// ===== 00343168  FUN_00343168 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00343168(undefined8 param_1,long param_2,byte *param_3)

{
  long lVar1;
  long *plVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long local_c0;
  undefined *local_b8;
  char *local_b0;
  long *local_a8;
  long local_a0;
  long local_98;
  char local_90 [8];
  long *local_88;
  ulong local_80;
  undefined8 *puStack_78;
  char *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_b0 = "inferConfigs";
                    /* try { // try from 003431a8 to 003431c3 has its CatchHandler @ 003434d8 */
  uVar4 = FUN_003425ac(param_2 + 8,&local_b0);
  FUN_0032768c(local_90,uVar4);
  local_a8 = (long *)0x0;
  local_a0 = 0;
  local_98 = -0x8000000000000000;
  if (local_90[0] == '\0') {
    lVar12 = 1;
    local_c0 = 0;
    plVar11 = (long *)0x0;
    local_98 = 1;
  }
  else if (local_90[0] == '\x02') {
    plVar11 = (long *)0x0;
    lVar12 = -0x8000000000000000;
    local_a0 = *local_88;
    local_c0 = local_88[1];
  }
  else if (local_90[0] == '\x01') {
    local_c0 = 0;
    lVar12 = -0x8000000000000000;
    plVar11 = local_88 + 1;
    local_a8 = (long *)*local_88;
  }
  else {
    plVar11 = (long *)0x0;
    lVar12 = 1;
    local_c0 = 0;
    local_98 = 0;
  }
  local_b0 = local_90;
  do {
    if (local_90[0] == '\x01') {
      if (local_a8 == plVar11) goto LAB_0034346c;
    }
    else if (local_90[0] == '\x02') {
      if (local_a0 == local_c0) {
LAB_0034346c:
        uVar4 = FUN_00753a74(0x20);
                    /* try { // try from 00343478 to 0034348b has its CatchHandler @ 00343514 */
        FUN_00714534(&local_b0,"KefConfigReader::getInferenceConfigByName: No config with name: ",
                     param_3);
                    /* try { // try from 00343490 to 003434cb has its CatchHandler @ 003434f8 */
        FUN_00374ee0(uVar4,&local_b0);
        if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_00753c5c(uVar4,PTR_PTR_007a1338,PTR_FUN_007a11f8);
        }
        goto LAB_003436a4;
      }
    }
    else if (local_98 == lVar12) goto LAB_0034346c;
                    /* try { // try from 003432b8 to 003432bf has its CatchHandler @ 00343518 */
    uVar4 = FUN_0032e488(&local_b0);
    local_b8 = &DAT_001eaa75;
                    /* try { // try from 003432c8 to 003432cf has its CatchHandler @ 0034351c */
    uVar5 = FUN_003425ac(uVar4,&local_b8);
    puStack_78 = (undefined8 *)0x0;
    local_80 = 3;
                    /* try { // try from 003432dc to 003432e3 has its CatchHandler @ 0034352c */
    puVar6 = (undefined8 *)FUN_00759c3c(0x18);
    if ((*param_3 & 1) == 0) {
      uVar8 = *(undefined8 *)param_3;
      uVar9 = *(undefined8 *)(param_3 + 0x10);
      puVar6[1] = *(undefined8 *)(param_3 + 8);
      *puVar6 = uVar8;
      puVar6[2] = uVar9;
    }
    else {
                    /* try { // try from 00343308 to 0034330f has its CatchHandler @ 003434e4 */
      FUN_002fb36c(puVar6,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 8));
    }
    puStack_78 = puVar6;
    uVar7 = FUN_00342d3c(uVar5,&local_80);
                    /* try { // try from 00343328 to 0034332f has its CatchHandler @ 00343544 */
    FUN_00313038(&puStack_78,local_80 & 0xff);
    if ((uVar7 & 1) != 0) {
                    /* try { // try from 00343394 to 0034339f has its CatchHandler @ 003434d4 */
      FUN_0032768c(param_1,uVar4);
                    /* try { // try from 003433a8 to 003433af has its CatchHandler @ 003434d0 */
      FUN_00313038(&local_88,local_90[0]);
      if (*(long *)(lVar1 + 0x28) == local_68) {
        return;
      }
      goto LAB_003436a4;
    }
    if (*local_b0 == '\x02') {
      local_a0 = local_a0 + 0x10;
    }
    else if (*local_b0 == '\x01') {
      plVar10 = local_a8;
      plVar2 = (long *)local_a8[1];
      if ((long *)local_a8[1] == (long *)0x0) {
        do {
          local_a8 = (long *)plVar10[2];
          bVar3 = (long *)*local_a8 != plVar10;
          plVar10 = local_a8;
        } while (bVar3);
      }
      else {
        do {
          local_a8 = plVar2;
          plVar2 = (long *)*local_a8;
        } while ((long *)*local_a8 != (long *)0x0);
      }
    }
    else {
      local_98 = local_98 + 1;
    }
  } while (local_b0 == local_90);
  uVar8 = FUN_00753a74(0x20);
                    /* try { // try from 003433f0 to 003433f7 has its CatchHandler @ 00343570 */
  local_70 = (char *)FUN_00759c3c(0x38);
  uVar9 = s_cannot_compare_iterators_of_diff_001d7c2b._24_8_;
  uVar5 = s_cannot_compare_iterators_of_diff_001d7c2b._16_8_;
  uVar4 = s_cannot_compare_iterators_of_diff_001d7c2b._0_8_;
  puStack_78 = _UNK_00200b18;
  local_80 = _DAT_00200b10;
  *(undefined8 *)(local_70 + 8) = s_cannot_compare_iterators_of_diff_001d7c2b._8_8_;
  *(undefined8 *)local_70 = uVar4;
  *(undefined8 *)(local_70 + 0x18) = uVar9;
  *(undefined8 *)(local_70 + 0x10) = uVar5;
  uVar5 = s_cannot_compare_iterators_of_diff_001d7c2b._40_8_;
  uVar4 = s_cannot_compare_iterators_of_diff_001d7c2b._32_8_;
  local_70[0x30] = '\0';
  *(undefined8 *)(local_70 + 0x28) = uVar5;
  *(undefined8 *)(local_70 + 0x20) = uVar4;
                    /* try { // try from 0034342c to 0034346b has its CatchHandler @ 00343548 */
  FUN_0032e768(uVar8,0xd4,&local_80,local_b0);
  if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(uVar8,PTR_PTR_007a1328,PTR_FUN_007a12f0);
  }
LAB_003436a4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003436ac  FUN_003436ac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003436ac(undefined8 param_1,long param_2,byte *param_3,byte *param_4)

{
  long lVar1;
  long *plVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  char cVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  undefined *local_118;
  char *local_110;
  long *local_108;
  long local_100;
  long local_f8;
  char local_f0 [8];
  long *local_e8;
  char *local_e0;
  long *local_d8;
  long local_d0;
  undefined8 uStack_c8;
  char *local_c0;
  long *local_b8;
  long local_b0;
  long local_a8;
  char local_a0 [8];
  long *local_98;
  undefined *local_90;
  undefined8 *puStack_88;
  char *local_80;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  local_c0 = "inferConfigs";
                    /* try { // try from 003436f0 to 0034370b has its CatchHandler @ 00343c00 */
  uVar4 = FUN_003425ac(param_2 + 8,&local_c0);
  FUN_0032768c(local_a0,uVar4);
  local_b8 = (long *)0x0;
  local_b0 = 0;
  local_a8 = -0x8000000000000000;
  if (local_a0[0] == '\0') {
    local_a8 = 1;
  }
  else {
    if (local_a0[0] == '\x02') {
      local_b0 = *local_98;
      local_d8 = (long *)0x0;
      uStack_c8 = 0x8000000000000000;
      local_d0 = local_98[1];
      goto LAB_003437a0;
    }
    if (local_a0[0] == '\x01') {
      local_d8 = local_98 + 1;
      local_b8 = (long *)*local_98;
      uStack_c8 = _UNK_002009f8;
      local_d0 = _DAT_002009f0;
      goto LAB_003437a0;
    }
    local_a8 = 0;
  }
  local_d8 = (long *)0x0;
  local_d0 = 0;
  uStack_c8 = 1;
LAB_003437a0:
  local_e0 = local_a0;
  local_c0 = local_a0;
LAB_003437c0:
                    /* try { // try from 003437c0 to 003437cb has its CatchHandler @ 00343c64 */
  uVar5 = FUN_0032e628(&local_c0,&local_e0);
  if ((uVar5 & 1) == 0) {
                    /* try { // try from 003437d0 to 003437d7 has its CatchHandler @ 00343c88 */
    uVar4 = FUN_0032e488(&local_c0);
    local_90 = &DAT_001eaa75;
                    /* try { // try from 003437e0 to 003437e7 has its CatchHandler @ 00343c84 */
    uVar6 = FUN_003425ac(uVar4,&local_90);
    local_108 = (long *)0x0;
    local_110 = (char *)0x3;
                    /* try { // try from 003437f4 to 003437fb has its CatchHandler @ 00343c6c */
    plVar7 = (long *)FUN_00759c3c(0x18);
    if ((*param_3 & 1) == 0) {
      lVar14 = *(long *)param_3;
      lVar11 = *(long *)(param_3 + 0x10);
      plVar7[1] = *(long *)(param_3 + 8);
      *plVar7 = lVar14;
      plVar7[2] = lVar11;
    }
    else {
                    /* try { // try from 00343824 to 0034382b has its CatchHandler @ 00343c50 */
      FUN_002fb36c(plVar7,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 8));
    }
    local_108 = plVar7;
    uVar5 = FUN_00342d3c(uVar6,&local_110);
                    /* try { // try from 00343844 to 0034384f has its CatchHandler @ 00343c80 */
    FUN_00313038(&local_108,(ulong)local_110 & 0xff);
    if ((uVar5 & 1) != 0) {
      local_110 = "files";
                    /* try { // try from 00343860 to 00343877 has its CatchHandler @ 00343c68 */
      uVar4 = FUN_003425ac(uVar4,&local_110);
      FUN_0032768c(local_f0,uVar4);
      local_108 = (long *)0x0;
      local_100 = 0;
      local_f8 = -0x8000000000000000;
      local_110 = local_f0;
      if (local_f0[0] == '\0') {
        plVar7 = (long *)0x0;
        lVar11 = 0;
        local_f8 = 1;
        lVar14 = 1;
      }
      else {
        if (local_f0[0] == '\x02') {
          plVar7 = (long *)0x0;
          local_100 = *local_e8;
          lVar11 = local_e8[1];
        }
        else {
          if (local_f0[0] != '\x01') {
            plVar7 = (long *)0x0;
            lVar11 = 0;
            local_f8 = 0;
            lVar14 = 1;
            goto LAB_00343914;
          }
          lVar11 = 0;
          plVar7 = local_e8 + 1;
          local_108 = (long *)*local_e8;
        }
        lVar14 = -0x8000000000000000;
      }
LAB_00343914:
      do {
        if (local_f0[0] == '\x01') {
          if (local_108 == plVar7) {
            bVar3 = true;
            cVar10 = '\x01';
            goto LAB_00343a60;
          }
        }
        else if (local_f0[0] == '\x02') {
          if (local_100 == lVar11) {
            cVar10 = '\x02';
LAB_00343a5c:
            bVar3 = true;
            goto LAB_00343a60;
          }
        }
        else {
          cVar10 = local_f0[0];
          if (local_f8 == lVar14) goto LAB_00343a5c;
        }
                    /* try { // try from 00343954 to 0034395b has its CatchHandler @ 00343ca8 */
        uVar4 = FUN_0032e488(&local_110);
        local_118 = &DAT_001eaa75;
                    /* try { // try from 00343964 to 0034396b has its CatchHandler @ 00343cc4 */
        uVar6 = FUN_003425ac(uVar4,&local_118);
        puStack_88 = (undefined8 *)0x0;
        local_90 = (undefined *)0x3;
                    /* try { // try from 00343978 to 0034397f has its CatchHandler @ 00343cb0 */
        puVar8 = (undefined8 *)FUN_00759c3c(0x18);
        if ((*param_4 & 1) == 0) {
          uVar9 = *(undefined8 *)param_4;
          uVar12 = *(undefined8 *)(param_4 + 0x10);
          puVar8[1] = *(undefined8 *)(param_4 + 8);
          *puVar8 = uVar9;
          puVar8[2] = uVar12;
        }
        else {
                    /* try { // try from 003439a4 to 003439ab has its CatchHandler @ 00343c94 */
          FUN_002fb36c(puVar8,*(undefined8 *)(param_4 + 0x10),*(undefined8 *)(param_4 + 8));
        }
        puStack_88 = puVar8;
        uVar5 = FUN_00342d3c(uVar6,&local_90);
                    /* try { // try from 003439c4 to 003439cf has its CatchHandler @ 00343cac */
        FUN_00313038(&puStack_88,(ulong)local_90 & 0xff);
        if ((uVar5 & 1) != 0) goto LAB_00343a34;
        if (*local_110 == '\x02') {
          local_100 = local_100 + 0x10;
        }
        else if (*local_110 == '\x01') {
          plVar13 = local_108;
          plVar2 = (long *)local_108[1];
          if ((long *)local_108[1] == (long *)0x0) {
            do {
              local_108 = (long *)plVar13[2];
              bVar3 = (long *)*local_108 != plVar13;
              plVar13 = local_108;
            } while (bVar3);
          }
          else {
            do {
              local_108 = plVar2;
              plVar2 = (long *)*local_108;
            } while ((long *)*local_108 != (long *)0x0);
          }
        }
        else {
          local_f8 = local_f8 + 1;
        }
        if (local_110 != local_f0) {
          uVar9 = FUN_00753a74(0x20);
                    /* try { // try from 00343b1c to 00343b23 has its CatchHandler @ 00343cf8 */
          local_80 = (char *)FUN_00759c3c(0x38);
          uVar12 = s_cannot_compare_iterators_of_diff_001d7c2b._24_8_;
          uVar6 = s_cannot_compare_iterators_of_diff_001d7c2b._16_8_;
          uVar4 = s_cannot_compare_iterators_of_diff_001d7c2b._0_8_;
          puStack_88 = _UNK_00200b18;
          local_90 = _DAT_00200b10;
          *(undefined8 *)(local_80 + 8) = s_cannot_compare_iterators_of_diff_001d7c2b._8_8_;
          *(undefined8 *)local_80 = uVar4;
          *(undefined8 *)(local_80 + 0x18) = uVar12;
          *(undefined8 *)(local_80 + 0x10) = uVar6;
          uVar6 = s_cannot_compare_iterators_of_diff_001d7c2b._40_8_;
          uVar4 = s_cannot_compare_iterators_of_diff_001d7c2b._32_8_;
          local_80[0x30] = '\0';
          *(undefined8 *)(local_80 + 0x28) = uVar6;
          *(undefined8 *)(local_80 + 0x20) = uVar4;
                    /* try { // try from 00343b58 to 00343b97 has its CatchHandler @ 00343cd0 */
          FUN_0032e768(uVar9,0xd4,&local_90,local_110);
          if (*(long *)(lVar1 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
            FUN_00753c5c(uVar9,PTR_PTR_007a1328,PTR_FUN_007a12f0);
          }
          goto LAB_00343e38;
        }
      } while( true );
    }
    goto LAB_00343a6c;
  }
  uVar4 = FUN_00753a74(0x20);
                    /* try { // try from 00343ba4 to 00343bb7 has its CatchHandler @ 00343c3c */
  FUN_00714534(&local_c0,"KefConfigReader::getInferenceFileConfigByName: No config with name: ",
               param_4);
                    /* try { // try from 00343bbc to 00343bf7 has its CatchHandler @ 00343c14 */
  FUN_00374ee0(uVar4,&local_c0);
  if (*(long *)(lVar1 + 0x28) == local_70) {
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(uVar4,PTR_PTR_007a1338,PTR_FUN_007a11f8);
  }
LAB_00343e38:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00343a34:
                    /* try { // try from 00343a34 to 00343a3f has its CatchHandler @ 00343c0c */
  FUN_0032768c(param_1,uVar4);
  bVar3 = false;
  cVar10 = local_f0[0];
LAB_00343a60:
                    /* try { // try from 00343a60 to 00343a67 has its CatchHandler @ 00343c10 */
  FUN_00313038(&local_e8,cVar10);
  if (!bVar3) {
                    /* try { // try from 00343ad4 to 00343adb has its CatchHandler @ 00343bfc */
    FUN_00313038(&local_98,local_a0[0]);
    if (*(long *)(lVar1 + 0x28) == local_70) {
      return;
    }
    goto LAB_00343e38;
  }
LAB_00343a6c:
  if (*local_c0 == '\x02') {
    local_b0 = local_b0 + 0x10;
  }
  else if (*local_c0 == '\x01') {
    plVar7 = local_b8;
    plVar13 = (long *)local_b8[1];
    if ((long *)local_b8[1] == (long *)0x0) {
      do {
        local_b8 = (long *)plVar7[2];
        bVar3 = (long *)*local_b8 != plVar7;
        plVar7 = local_b8;
      } while (bVar3);
    }
    else {
      do {
        local_b8 = plVar13;
        plVar13 = (long *)*local_b8;
      } while ((long *)*local_b8 != (long *)0x0);
    }
  }
  else {
    local_a8 = local_a8 + 1;
  }
  goto LAB_003437c0;
}


// ===== 00343e40  FUN_00343e40 =====

void FUN_00343e40(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_007609f8;
                    /* try { // try from 00343e5c to 00343e5f has its CatchHandler @ 00343e68 */
  FUN_00313038(param_1 + 2,*(undefined1 *)(param_1 + 1));
  return;
}


// ===== 00343e6c  FUN_00343e6c =====

void FUN_00343e6c(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007a1430 + 0x10);
                    /* try { // try from 00343e90 to 00343e93 has its CatchHandler @ 00343ea4 */
  FUN_00313038(param_1 + 2,(char)param_1[1]);
  free(param_1);
  return;
}


// ===== 00343ea8  FUN_00343ea8 =====

bool FUN_00343ea8(byte *param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *param_1;
  uVar2 = (uint)*param_2;
  if ((bVar1 == 7) && (NAN(*(double *)(param_1 + 8)))) {
    if (uVar2 - 5 < 3) {
      return true;
    }
  }
  else if (uVar2 == 7) {
    if ((NAN(*(double *)(param_2 + 8)) && bVar1 - 5 < 3) || (bVar1 == 9)) {
      return true;
    }
  }
  else if (bVar1 == 9) {
    return true;
  }
  return uVar2 == 9;
}


// ===== 00343f1c  FUN_00343f1c =====

ulong FUN_00343f1c(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  
  bVar3 = param_2 != 0x14;
  bVar4 = param_1 != 10;
  lVar1 = 10;
  if (bVar4 || bVar3) {
    lVar1 = 0;
  }
  bVar5 = param_1 != 0x1e;
  bVar6 = param_1 != 0x14;
  bVar7 = param_1 != 0xf;
  lVar2 = 0xf;
  if (bVar7 || bVar3) {
    lVar2 = lVar1;
  }
  lVar1 = 10;
  if (bVar3 || bVar6 && bVar5) {
    lVar1 = lVar2;
  }
  bVar8 = param_1 != 0x20;
  lVar2 = 0x12;
  if (bVar8 || bVar3) {
    lVar2 = lVar1;
  }
  bVar9 = param_1 != 0x28;
  lVar1 = 10;
  if (bVar9 || bVar3) {
    lVar1 = lVar2;
  }
  bVar3 = param_2 != 0x20;
  lVar2 = 0x1f;
  if (bVar4 || bVar3) {
    lVar2 = lVar1;
  }
  lVar1 = 0x1c;
  if (bVar3 || bVar7 && bVar6) {
    lVar1 = lVar2;
  }
  lVar2 = 0x1e;
  if (bVar5 || bVar3) {
    lVar2 = lVar1;
  }
  lVar1 = 0x10;
  if (bVar8 || bVar3) {
    lVar1 = lVar2;
  }
  lVar2 = 0x1c;
  if (bVar9 || bVar3) {
    lVar2 = lVar1;
  }
  bVar3 = param_2 != 0x1e;
  lVar1 = 0x19;
  if (bVar4 || bVar3) {
    lVar1 = lVar2;
  }
  lVar2 = 0xf;
  if (bVar7 || bVar3) {
    lVar2 = lVar1;
  }
  lVar1 = 0x19;
  if (bVar6 || bVar3) {
    lVar1 = lVar2;
  }
  lVar2 = 0xf;
  if (bVar5 || bVar3) {
    lVar2 = lVar1;
  }
  lVar1 = 0x1d;
  if (bVar8 || bVar3) {
    lVar1 = lVar2;
  }
  lVar2 = 0x19;
  if (bVar9 || bVar3) {
    lVar2 = lVar1;
  }
  return (ulong)(lVar2 * param_3) / 1000;
}


// ===== 00344034  FUN_00344034 =====

undefined1  [16] FUN_00344034(undefined8 param_1,float param_2,int param_3)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  
  dVar1 = pow(10.0,100.0 / (double)param_3);
  dVar1 = (double)NEON_fmadd((dVar1 + -1.0) / (double)param_2,param_1,0x3ff0000000000000);
  dVar2 = log10(dVar1);
  dVar2 = dVar2 * (double)param_3;
  dVar1 = 100.0;
  if (dVar2 == 100.0 || dVar2 < 100.0 != NAN(dVar2)) {
    dVar1 = dVar2;
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = dVar1;
  return auVar3;
}


// ===== 0034409c  FUN_0034409c =====

void FUN_0034409c(float param_1,long *param_2)

{
  float *pfVar1;
  float *pfVar2;
  ulong uVar3;
  ulong uVar4;
  float *pfVar5;
  ulong uVar6;
  float fVar7;
  
  pfVar2 = (float *)*param_2;
  pfVar1 = (float *)param_2[1];
  if (pfVar2 != pfVar1) {
    uVar3 = (long)pfVar1 + (-4 - (long)pfVar2);
    fVar7 = param_1 / 100.0 + 1.0;
    if (0x1b < uVar3) {
      uVar3 = (uVar3 >> 2) + 1;
      uVar4 = uVar3 & 0x7ffffffffffffff8;
      pfVar5 = pfVar2 + 4;
      uVar6 = uVar4;
      do {
        uVar6 = uVar6 - 8;
        *(ulong *)(pfVar5 + -2) =
             CONCAT44((float)((ulong)*(undefined8 *)(pfVar5 + -2) >> 0x20) * fVar7,
                      (float)*(undefined8 *)(pfVar5 + -2) * fVar7);
        *(ulong *)(pfVar5 + -4) =
             CONCAT44((float)((ulong)*(undefined8 *)(pfVar5 + -4) >> 0x20) * fVar7,
                      (float)*(undefined8 *)(pfVar5 + -4) * fVar7);
        *(ulong *)(pfVar5 + 2) =
             CONCAT44((float)((ulong)*(undefined8 *)(pfVar5 + 2) >> 0x20) * fVar7,
                      (float)*(undefined8 *)(pfVar5 + 2) * fVar7);
        *(ulong *)pfVar5 =
             CONCAT44((float)((ulong)*(undefined8 *)pfVar5 >> 0x20) * fVar7,
                      (float)*(undefined8 *)pfVar5 * fVar7);
        pfVar5 = pfVar5 + 8;
      } while (uVar6 != 0);
      pfVar2 = pfVar2 + uVar4;
      if (uVar3 == uVar4) {
        return;
      }
    }
    do {
      pfVar5 = pfVar2 + 1;
      *pfVar2 = fVar7 * *pfVar2;
      pfVar2 = pfVar5;
    } while (pfVar5 != pfVar1);
  }
  return;
}


// ===== 00344124  FUN_00344124 =====

void FUN_00344124(float param_1,long *param_2,ulong param_3,ulong param_4)

{
  undefined4 *puVar1;
  float *pfVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined4 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  float *pfVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  uint extraout_var;
  undefined1 auVar15 [16];
  undefined4 extraout_var_00;
  uint local_80;
  undefined4 uStack_7c;
  char cStack_78;
  undefined7 uStack_77;
  char cStack_70;
  undefined4 uStack_6f;
  undefined1 uStack_6b;
  undefined2 uStack_6a;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if (param_1 != 1.0) {
    uVar5 = param_2[1] - *param_2 >> 2;
    uVar3 = uVar5;
    if (param_4 != 0) {
      uVar3 = param_4;
    }
    if (uVar3 < param_3 || uVar5 < uVar3) {
      uStack_6b = 0;
      uStack_6f = 0x646e6520;
      uStack_77 = SUB167(s_Invalid_start_or_end_001de259._0_16_,8);
      cStack_70 = SUB161(s_Invalid_start_or_end_001de259._0_16_,0xf);
      local_80 = CONCAT31(SUB163(s_Invalid_start_or_end_001de259._0_16_,0),0x28);
      uStack_7c = SUB164(s_Invalid_start_or_end_001de259._0_16_,3);
      cStack_78 = SUB161(s_Invalid_start_or_end_001de259._0_16_,7);
                    /* try { // try from 003441e0 to 003441fb has its CatchHandler @ 0034436c */
      FUN_00372794(&local_80,
                   "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/frame_processors/fp_common/src/krisp_fp_common.cpp"
                   ,0x60,"calcRmPow");
      if ((local_80 & 1) != 0) {
        free((void *)CONCAT26(uStack_6a,CONCAT15(uStack_6b,CONCAT41(uStack_6f,cStack_70))));
      }
    }
    if (param_1 == 0.0) {
      if (0 < (long)uVar3) {
        puVar1 = (undefined4 *)(*param_2 + param_3 * 4);
        puVar6 = puVar1;
        uVar5 = uVar3;
        if (7 < uVar3) {
          auVar15 = NEON_fmov(0x3f800000,4);
          uVar7 = uVar3 & 0x7ffffffffffffff8;
          uVar5 = uVar3 & 7;
          puVar6 = puVar1 + uVar7;
          puVar8 = (undefined8 *)(puVar1 + 4);
          uVar9 = uVar7;
          do {
            uVar9 = uVar9 - 8;
            puVar8[-1] = auVar15._8_8_;
            puVar8[-2] = auVar15._0_8_;
            puVar8[1] = auVar15._8_8_;
            *puVar8 = auVar15._0_8_;
            puVar8 = puVar8 + 4;
          } while (uVar9 != 0);
          if (uVar3 == uVar7) goto LAB_00344160;
        }
        *puVar6 = 0x3f800000;
        if ((((1 < uVar5) && (puVar6[1] = 0x3f800000, uVar5 - 3 < 0xfffffffffffffffe)) &&
            (puVar6[2] = 0x3f800000, (uVar5 & 6) != 2)) &&
           (((puVar6[3] = 0x3f800000, uVar5 - 5 < 0xfffffffffffffffe &&
             (puVar6[4] = 0x3f800000, (uVar5 & 6) != 4)) &&
            (puVar6[5] = 0x3f800000, uVar5 - 7 < 0xfffffffffffffffe)))) {
          puVar6[6] = 0x3f800000;
        }
      }
    }
    else if (uVar3 != 0) {
      pfVar2 = (float *)(*param_2 + param_3 * 4);
      uVar5 = uVar3 - 1 & 0x3fffffffffffffff;
      pfVar10 = pfVar2;
      if (uVar5 != 0) {
        uVar5 = uVar5 + 1;
        uVar7 = uVar5 & 0x7ffffffffffffffe;
        pfVar10 = pfVar2 + uVar7;
        uVar9 = uVar7;
        pfVar11 = pfVar2;
        do {
          uVar14 = *(undefined8 *)pfVar11;
          fVar12 = powf((float)uVar14,param_1);
          local_80 = extraout_var;
          uStack_7c = extraout_var_00;
          fVar13 = powf((float)((ulong)uVar14 >> 0x20),param_1);
          uVar9 = uVar9 - 2;
          *(ulong *)pfVar11 = CONCAT44(fVar13,fVar12);
          pfVar11 = pfVar11 + 2;
        } while (uVar9 != 0);
        if (uVar5 == uVar7) goto LAB_00344160;
      }
      do {
        fVar12 = powf(*pfVar10,param_1);
        pfVar11 = pfVar10 + 1;
        *pfVar10 = fVar12;
        pfVar10 = pfVar11;
      } while (pfVar11 != pfVar2 + uVar3);
    }
  }
LAB_00344160:
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0034439c  FUN_0034439c =====

void FUN_0034439c(long *param_1,long param_2,long param_3,int param_4)

{
  void *__src;
  long lVar1;
  void *__s;
  undefined8 uVar2;
  size_t __n;
  void *pvVar3;
  byte local_60;
  undefined7 uStack_5f;
  char cStack_58;
  undefined7 uStack_57;
  char cStack_50;
  undefined2 uStack_4f;
  undefined1 uStack_4d;
  undefined4 uStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_3 - param_2 != param_1[1] - *param_1 >> 2) {
    local_60 = 0x24;
    uStack_4f = 0x657a;
    uStack_57 = (undefined7)s_Invalid_inOut_size_001d7d1a._8_8_;
    cStack_50 = SUB81(s_Invalid_inOut_size_001d7d1a._8_8_,7);
    uStack_5f = (undefined7)s_Invalid_inOut_size_001d7d1a._0_8_;
    cStack_58 = SUB81(s_Invalid_inOut_size_001d7d1a._0_8_,7);
    uStack_4d = 0;
                    /* try { // try from 00344404 to 0034441f has its CatchHandler @ 003444d8 */
    FUN_00372794(&local_60,
                 "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/frame_processors/fp_common/src/krisp_fp_common.cpp"
                 ,0x77,"calcRmAddNulls");
    if ((local_60 & 1) != 0) {
      free((void *)CONCAT44(uStack_4c,CONCAT13(uStack_4d,CONCAT21(uStack_4f,cStack_50))));
    }
  }
  local_60 = 0;
  uStack_5f = 0;
  cStack_58 = 0;
  uStack_57 = 0;
  cStack_50 = 0;
  uStack_4f = 0;
  uStack_4d = 0;
  uStack_4c = 0;
  if (param_4 == 0) {
    pvVar3 = (void *)0x0;
    __s = (void *)0x0;
  }
  else {
    if (param_4 < 0) {
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 003444d0 to 003444d7 has its CatchHandler @ 003444ec */
        uVar2 = FUN_002febf0(&local_60);
                    /* catch() { ... } // from try @ 00344404 with catch @ 003444d8 */
        if ((local_60 & 1) != 0) {
          free((void *)CONCAT44(uStack_4c,CONCAT13(uStack_4d,CONCAT21(uStack_4f,cStack_50))));
        }
        if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
          FUN_00755eac(uVar2);
        }
      }
      goto LAB_0034451c;
    }
    __n = (long)param_4 << 2;
                    /* try { // try from 00344448 to 0034444f has its CatchHandler @ 003444ec */
    __s = (void *)FUN_00759c3c(__n);
    pvVar3 = (void *)((long)__s + (long)param_4 * 4);
    memset(__s,0,__n);
  }
  __src = (void *)*param_1;
  memcpy((void *)((long)__s + param_2 * 4),__src,param_1[1] - (long)__src);
  *param_1 = (long)__s;
  param_1[1] = (long)pvVar3;
  param_1[2] = (long)pvVar3;
  if (__src != (void *)0x0) {
    free(__src);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_0034451c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00344520  FUN_00344520 =====

void FUN_00344520(double param_1,double param_2,double param_3,long *param_4)

{
  float *pfVar1;
  ulong uVar2;
  float *pfVar3;
  float *pfVar4;
  ulong uVar5;
  ulong uVar6;
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
  double dVar18;
  undefined1 auVar19 [16];
  double dVar20;
  double dVar21;
  
  pfVar3 = (float *)*param_4;
  pfVar1 = (float *)param_4[1];
  if (pfVar3 != pfVar1) {
    param_2 = -param_2;
    uVar2 = (long)pfVar1 + (-4 - (long)pfVar3);
    if (0xb < uVar2) {
      auVar19 = NEON_fmov(0x3ff0000000000000,8);
      uVar2 = (uVar2 >> 2) + 1;
      uVar5 = uVar2 & 0x7ffffffffffffffc;
      dVar16 = auVar19._8_8_;
      dVar15 = auVar19._0_8_;
      pfVar4 = pfVar3;
      uVar6 = uVar5;
      do {
        dVar18 = (double)(float)*(undefined8 *)pfVar4;
        dVar20 = (double)(float)((ulong)*(undefined8 *)pfVar4 >> 0x20);
        dVar21 = (double)(float)*(undefined8 *)(pfVar4 + 2);
        dVar17 = (double)(float)((ulong)*(undefined8 *)(pfVar4 + 2) >> 0x20);
        dVar7 = exp(((dVar20 - param_3) * param_1) / param_3);
        dVar8 = exp(((dVar18 - param_3) * param_1) / param_3);
        dVar9 = exp(((dVar17 - param_3) * param_1) / param_3);
        dVar10 = exp(((dVar21 - param_3) * param_1) / param_3);
        dVar11 = exp(((dVar20 - param_3) * param_2) / param_3);
        dVar12 = exp(((dVar18 - param_3) * param_2) / param_3);
        dVar13 = exp(((dVar17 - param_3) * param_2) / param_3);
        dVar14 = exp(((dVar21 - param_3) * param_2) / param_3);
        uVar6 = uVar6 - 4;
        *(ulong *)(pfVar4 + 2) =
             CONCAT44((float)(dVar17 / (dVar9 + dVar16) + (dVar17 * dVar17) / (dVar13 + dVar16)),
                      (float)(dVar21 / (dVar10 + dVar15) + (dVar21 * dVar21) / (dVar14 + dVar15)));
        *(ulong *)pfVar4 =
             CONCAT44((float)(dVar20 / (dVar7 + dVar16) + (dVar20 * dVar20) / (dVar11 + dVar16)),
                      (float)(dVar18 / (dVar8 + dVar15) + (dVar18 * dVar18) / (dVar12 + dVar15)));
        pfVar4 = pfVar4 + 4;
      } while (uVar6 != 0);
      pfVar3 = pfVar3 + uVar5;
      if (uVar2 == uVar5) {
        return;
      }
    }
    do {
      dVar21 = (double)*pfVar3;
      dVar15 = exp(((dVar21 - param_3) * param_1) / param_3);
      dVar16 = exp(((dVar21 - param_3) * param_2) / param_3);
      pfVar4 = pfVar3 + 1;
      *pfVar3 = (float)(dVar21 / (dVar15 + 1.0) + (dVar21 * dVar21) / (dVar16 + 1.0));
      pfVar3 = pfVar4;
    } while (pfVar4 != pfVar1);
  }
  return;
}


// ===== 00344780  FUN_00344780 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00344780(float param_1,ulong *param_2,ulong *param_3,int param_4)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined4 *puVar4;
  ulong uVar5;
  ulong uVar6;
  float *pfVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  float fVar17;
  ulong local_50;
  undefined8 uStack_48;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = *param_3;
  uVar5 = param_3[1];
  if ((param_2[1] - *param_2 != uVar5 - uVar3) ||
     (uVar9 = (long)(uVar5 - uVar3) >> 2, uVar9 != (long)param_4)) {
    local_40 = (char *)FUN_00759c3c(0x20);
    uStack_48 = _UNK_00200448;
    local_50 = _DAT_00200440;
    uVar16 = s_Invalid_saved_rm_or_rm_size_001c5191._19_8_;
    uVar15 = s_Invalid_saved_rm_or_rm_size_001c5191._0_8_;
    uVar14 = CONCAT35(s_Invalid_saved_rm_or_rm_size_001c5191._16_3_,
                      s_Invalid_saved_rm_or_rm_size_001c5191._11_5_);
    *(ulong *)(local_40 + 8) =
         CONCAT53(s_Invalid_saved_rm_or_rm_size_001c5191._11_5_,
                  s_Invalid_saved_rm_or_rm_size_001c5191._8_3_);
    *(undefined8 *)local_40 = uVar15;
    *(undefined8 *)(local_40 + 0x13) = uVar16;
    *(undefined8 *)(local_40 + 0xb) = uVar14;
    local_40[0x1b] = '\0';
                    /* try { // try from 00344808 to 00344823 has its CatchHandler @ 00344924 */
    FUN_00372794(&local_50,
                 "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/frame_processors/fp_common/src/krisp_fp_common.cpp"
                 ,0x92,"calcRmSmooth");
    if ((local_50 & 1) != 0) {
      free(local_40);
    }
    uVar3 = *param_3;
    uVar5 = param_3[1];
    uVar9 = (long)(uVar5 - uVar3) >> 2;
  }
  if (uVar5 != uVar3) {
    uVar6 = *param_2;
    uVar5 = uVar9;
    if (uVar9 < 2) {
      uVar5 = 1;
    }
    fVar17 = 1.0 - param_1;
    if ((uVar9 < 8) || ((uVar3 < uVar6 + uVar5 * 4 && (uVar6 < uVar3 + uVar5 * 4)))) {
      uVar9 = 0;
    }
    else {
      uVar9 = uVar5 & 0xfffffffffffffff8;
      puVar10 = (undefined8 *)(uVar3 + 0x10);
      puVar11 = (undefined8 *)(uVar6 + 0x10);
      uVar12 = uVar9;
      do {
        puVar2 = puVar11 + -1;
        uVar14 = puVar11[-2];
        uVar16 = puVar11[1];
        uVar15 = *puVar11;
        uVar12 = uVar12 - 8;
        puVar11 = puVar11 + 4;
        puVar10[-1] = CONCAT44((float)((ulong)*puVar2 >> 0x20) * fVar17 +
                               (float)((ulong)puVar10[-1] >> 0x20) * param_1,
                               (float)*puVar2 * fVar17 + (float)puVar10[-1] * param_1);
        puVar10[-2] = CONCAT44((float)((ulong)uVar14 >> 0x20) * fVar17 +
                               (float)((ulong)puVar10[-2] >> 0x20) * param_1,
                               (float)uVar14 * fVar17 + (float)puVar10[-2] * param_1);
        puVar10[1] = CONCAT44((float)((ulong)uVar16 >> 0x20) * fVar17 +
                              (float)((ulong)puVar10[1] >> 0x20) * param_1,
                              (float)uVar16 * fVar17 + (float)puVar10[1] * param_1);
        *puVar10 = CONCAT44((float)((ulong)uVar15 >> 0x20) * fVar17 +
                            (float)((ulong)*puVar10 >> 0x20) * param_1,
                            (float)uVar15 * fVar17 + (float)*puVar10 * param_1);
        puVar10 = puVar10 + 4;
      } while (uVar12 != 0);
      if (uVar5 == uVar9) goto LAB_003448b4;
    }
    lVar8 = uVar5 - uVar9;
    puVar4 = (undefined4 *)(uVar3 + uVar9 * 4);
    pfVar7 = (float *)(uVar6 + uVar9 * 4);
    do {
      lVar8 = lVar8 + -1;
      uVar13 = NEON_fmadd(param_1,*puVar4,fVar17 * *pfVar7);
      *puVar4 = uVar13;
      puVar4 = puVar4 + 1;
      pfVar7 = pfVar7 + 1;
    } while (lVar8 != 0);
  }
LAB_003448b4:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00344954  FUN_00344954 =====

void FUN_00344954(float param_1,long *param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float *pfVar6;
  ulong uVar7;
  float *pfVar8;
  float *pfVar9;
  undefined1 (*pauVar10) [12];
  ulong uVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  byte local_40;
  char local_3f [7];
  char cStack_38;
  char acStack_37 [7];
  undefined1 local_30;
  undefined7 uStack_2f;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  pfVar8 = (float *)*param_2;
  pfVar6 = (float *)param_2[1];
  if (pfVar6 == pfVar8) {
    local_40 = 0x1e;
    local_3f = (char  [7])s_Invalid_rm_size_001eaa7a._0_7_;
    cStack_38 = s_Invalid_rm_size_001eaa7a[7];
    acStack_37 = (char  [7])s_Invalid_rm_size_001eaa7a._8_7_;
    local_30 = 0;
                    /* try { // try from 003449a8 to 003449c3 has its CatchHandler @ 00344aa8 */
    FUN_00372794(&local_40,
                 "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/frame_processors/fp_common/src/krisp_fp_common.cpp"
                 ,0x9c,"applyRmThreshold");
    if ((local_40 & 1) != 0) {
      free((void *)CONCAT71(uStack_2f,local_30));
    }
    pfVar8 = (float *)*param_2;
    pfVar6 = (float *)param_2[1];
  }
  if (pfVar8 != pfVar6) {
    uVar7 = (long)pfVar6 + (-4 - (long)pfVar8);
    fVar25 = 1.0 / param_1;
    if (0x1b < uVar7) {
      auVar13 = NEON_fmov(0x3f800000,4);
      uVar7 = (uVar7 >> 2) + 1;
      uVar11 = uVar7 & 0x7ffffffffffffff8;
      pauVar10 = (undefined1 (*) [12])(pfVar8 + 4);
      uVar12 = uVar11;
      do {
        fVar16 = (float)*(undefined8 *)(pauVar10[-1] + 4);
        fVar17 = (float)((ulong)*(undefined8 *)(pauVar10[-1] + 4) >> 0x20);
        uVar3 = *(undefined8 *)*(undefined1 (*) [12])(pauVar10[-2] + 8);
        fVar14 = (float)uVar3;
        fVar15 = (float)((ulong)uVar3 >> 0x20);
        fVar20 = (float)*(undefined8 *)(*pauVar10 + 8);
        fVar21 = (float)((ulong)*(undefined8 *)(*pauVar10 + 8) >> 0x20);
        fVar18 = (float)*(undefined8 *)*pauVar10;
        fVar19 = (float)((ulong)*(undefined8 *)*pauVar10 >> 0x20);
        uVar12 = uVar12 - 8;
        auVar22._4_4_ = param_1;
        auVar22._0_4_ = param_1;
        auVar22._8_4_ = param_1;
        auVar22._12_4_ = param_1;
        auVar2._12_4_ = fVar17;
        auVar2._0_12_ = *(undefined1 (*) [12])(pauVar10[-2] + 8);
        auVar22 = NEON_fcmgt(auVar22,auVar2,4);
        auVar23._0_4_ = fVar14 * fVar25;
        auVar23._4_4_ = fVar15 * fVar25;
        auVar23._8_4_ = fVar16 * fVar25;
        auVar23._12_4_ = fVar17 * fVar25;
        auVar24._4_4_ = param_1;
        auVar24._0_4_ = param_1;
        auVar24._8_4_ = param_1;
        auVar24._12_4_ = param_1;
        auVar4._12_4_ = fVar21;
        auVar4._0_12_ = *pauVar10;
        auVar24 = NEON_fcmgt(auVar24,auVar4,4);
        auVar22 = NEON_bsl(auVar22,auVar23,auVar13,1);
        auVar5._4_4_ = fVar19 * fVar25;
        auVar5._0_4_ = fVar18 * fVar25;
        auVar5._8_4_ = fVar20 * fVar25;
        auVar5._12_4_ = fVar21 * fVar25;
        auVar24 = NEON_bsl(auVar24,auVar5,auVar13,1);
        *(ulong *)(pauVar10[-1] + 4) = CONCAT44(fVar17 * auVar22._12_4_,fVar16 * auVar22._8_4_);
        *(ulong *)(pauVar10[-2] + 8) = CONCAT44(fVar15 * auVar22._4_4_,fVar14 * auVar22._0_4_);
        *(ulong *)(*pauVar10 + 8) = CONCAT44(fVar21 * auVar24._12_4_,fVar20 * auVar24._8_4_);
        *(ulong *)*pauVar10 = CONCAT44(fVar19 * auVar24._4_4_,fVar18 * auVar24._0_4_);
        pauVar10 = (undefined1 (*) [12])(pauVar10[2] + 8);
      } while (uVar12 != 0);
      pfVar8 = pfVar8 + uVar11;
      if (uVar7 == uVar11) goto LAB_00344a88;
    }
    do {
      fVar14 = *pfVar8;
      fVar15 = fVar25 * fVar14;
      if (param_1 <= fVar14) {
        fVar15 = 1.0;
      }
      pfVar9 = pfVar8 + 1;
      *pfVar8 = fVar14 * fVar15;
      pfVar8 = pfVar9;
    } while (pfVar9 != pfVar6);
  }
LAB_00344a88:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00344ad8  FUN_00344ad8 =====

void FUN_00344ad8(float param_1,long *param_2)

{
  float *pfVar1;
  long lVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float fVar9;
  byte local_50;
  char local_4f [8];
  undefined7 uStack_47;
  char cStack_40;
  undefined1 uStack_3f;
  undefined6 uStack_3e;
  long local_38;
  float *pfVar8;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (param_2[1] == *param_2) {
    local_50 = 0x20;
    uStack_3f = 0;
    uStack_47 = (undefined7)s_Invalid_out_size_001e8a5b._8_8_;
    cStack_40 = SUB81(s_Invalid_out_size_001e8a5b._8_8_,7);
    local_4f = (char  [8])s_Invalid_out_size_001e8a5b._0_8_;
                    /* try { // try from 00344b2c to 00344b47 has its CatchHandler @ 00344c48 */
    FUN_00372794(&local_50,
                 "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/frame_processors/fp_common/src/krisp_fp_common.cpp"
                 ,0xaf,"applyClipFix");
    if ((local_50 & 1) != 0) {
      free((void *)CONCAT62(uStack_3e,CONCAT11(uStack_3f,cStack_40)));
    }
  }
  if (((DAT_007aaf08 & 1) == 0) && (iVar4 = FUN_00739c1c(&DAT_007aaf08), iVar4 != 0)) {
                    /* try { // try from 00344c04 to 00344c0f has its CatchHandler @ 00344c34 */
    FUN_0036c290(&DAT_007aaf10);
    __cxa_atexit(FUN_00319230,&DAT_007aaf10,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007aaf08);
  }
  pfVar6 = (float *)*param_2;
  pfVar1 = (float *)param_2[1];
  if ((pfVar6 != pfVar1) && (pfVar6 + 1 != pfVar1)) {
    fVar9 = *pfVar6;
    pfVar5 = pfVar6;
    pfVar7 = pfVar6 + 1;
    do {
      pfVar8 = pfVar7 + 1;
      pfVar6 = pfVar7;
      fVar3 = *pfVar7;
      if (*pfVar7 <= fVar9) {
        pfVar6 = pfVar5;
        fVar3 = fVar9;
      }
      fVar9 = fVar3;
      pfVar5 = pfVar6;
      pfVar7 = pfVar8;
    } while (pfVar8 != pfVar1);
  }
  fVar9 = *pfVar6;
  if (fVar9 != param_1 && fVar9 < param_1 == (NAN(fVar9) || NAN(param_1))) {
    FUN_0036cb04(param_1 / fVar9,DAT_007aaf10,param_2,param_2);
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00344c78  FUN_00344c78 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00344c78(long *param_1,long *param_2,long *param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  char *pcVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  byte local_60;
  undefined7 uStack_5f;
  char cStack_58;
  undefined7 uStack_57;
  undefined4 local_50;
  uint uStack_4c;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  lVar14 = param_3[1] - *param_3;
  if (lVar14 != param_4[1] - *param_4) {
    pcVar12 = (char *)FUN_00759c3c(0x28);
    uVar11 = _UNK_00200438;
    uVar10 = _DAT_00200430;
    uVar9 = s_Invalid_weightMu_or_weightSd_siz_001e04eb._24_8_;
    uVar8 = s_Invalid_weightMu_or_weightSd_siz_001e04eb._16_8_;
    uVar7 = s_Invalid_weightMu_or_weightSd_siz_001e04eb._8_8_;
    uVar6 = s_Invalid_weightMu_or_weightSd_siz_001e04eb._0_8_;
    local_50 = SUB84(pcVar12,0);
    uStack_4c = (uint)((ulong)pcVar12 >> 0x20);
    pcVar12[0x20] = 'e';
    pcVar12[0x21] = '\0';
    cStack_58 = (char)uVar11;
    uStack_57 = (undefined7)((ulong)uVar11 >> 8);
    local_60 = (byte)uVar10;
    uStack_5f = (undefined7)((ulong)uVar10 >> 8);
    *(undefined8 *)(pcVar12 + 8) = uVar7;
    *(undefined8 *)pcVar12 = uVar6;
    *(undefined8 *)(pcVar12 + 0x18) = uVar9;
    *(undefined8 *)(pcVar12 + 0x10) = uVar8;
                    /* try { // try from 00344cf4 to 00344d0f has its CatchHandler @ 00344e6c */
    FUN_00372794(&local_60,
                 "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/frame_processors/fp_common/src/krisp_fp_common.cpp"
                 ,0xbd,"calcMinusMuDivSd");
    if ((local_60 & 1) != 0) {
      free((void *)CONCAT44(uStack_4c,local_50));
    }
    lVar14 = param_3[1] - *param_3;
  }
  uVar15 = lVar14 >> 2;
  uVar17 = param_2[4] - param_2[3];
  uVar18 = 0;
  if (uVar15 != 0) {
    uVar18 = uVar17 / uVar15;
  }
  if (uVar17 != uVar18 * uVar15) {
    local_60 = 0x26;
    uStack_57 = (undefined7)s_Invalid_frames_size_001c95ea._8_8_;
    local_50 = CONCAT31(0x657a69,SUB81(s_Invalid_frames_size_001c95ea._8_8_,7));
    uStack_5f = (undefined7)s_Invalid_frames_size_001c95ea._0_8_;
    cStack_58 = SUB81(s_Invalid_frames_size_001c95ea._0_8_,7);
    uStack_4c = uStack_4c & 0xffffff00;
                    /* try { // try from 00344d68 to 00344d83 has its CatchHandler @ 00344e70 */
    FUN_00372794(&local_60,
                 "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/frame_processors/fp_common/src/krisp_fp_common.cpp"
                 ,0xbe,"calcMinusMuDivSd");
    if ((local_60 & 1) != 0) {
      free((void *)CONCAT44(uStack_4c,local_50));
    }
    uVar17 = param_2[4] - param_2[3];
  }
  lVar16 = *param_1;
  lVar14 = param_1[1];
  uVar18 = lVar14 - lVar16 >> 2;
  if (uVar17 < uVar18 || uVar17 - uVar18 == 0) {
    if (uVar17 < uVar18) {
      lVar14 = lVar16 + uVar17 * 4;
      param_1[1] = lVar14;
    }
  }
  else {
    FUN_002feac4(param_1,uVar17 - uVar18);
    lVar16 = *param_1;
    lVar14 = param_1[1];
  }
  if (lVar14 != lVar16) {
    lVar1 = *param_3;
    lVar2 = *param_4;
    uVar15 = lVar14 - lVar16 >> 2;
    lVar14 = param_2[3];
    lVar19 = *param_2;
    uVar18 = 0;
    uVar17 = param_3[1] - lVar1 >> 2;
    uVar20 = param_4[1] - lVar2 >> 2;
    if (uVar15 < 2) {
      uVar15 = 1;
    }
    do {
      uVar3 = 0;
      if (uVar17 != 0) {
        uVar3 = uVar18 / uVar17;
      }
      lVar13 = uVar18 * 4;
      uVar4 = 0;
      if (uVar20 != 0) {
        uVar4 = uVar18 / uVar20;
      }
      lVar21 = uVar18 - uVar3 * uVar17;
      lVar22 = uVar18 - uVar4 * uVar20;
      uVar18 = uVar18 + 1;
      *(float *)(lVar16 + lVar13) =
           (*(float *)(lVar19 + lVar14 * 4 + lVar13) - *(float *)(lVar1 + lVar21 * 4)) /
           *(float *)(lVar2 + lVar22 * 4);
    } while (uVar15 != uVar18);
  }
  if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00344ea0  FUN_00344ea0 =====

void FUN_00344ea0(float param_1,long *param_2,ulong *param_3,ulong param_4,ulong param_5)

{
  ulong uVar1;
  float *pfVar2;
  long lVar3;
  bool bVar4;
  void *__dest;
  ulong uVar5;
  ulong uVar6;
  void *__src;
  float *pfVar7;
  float *pfVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  byte local_90;
  char local_8f [8];
  undefined7 uStack_87;
  char cStack_80;
  undefined2 uStack_7f;
  undefined5 uStack_7d;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  if ((ulong)(param_2[1] - *param_2 >> 3) < param_5) {
    local_90 = 0x22;
    uStack_7f = 0x65;
    uStack_87 = (undefined7)s_Invalid_data_size_001e2863._8_8_;
    cStack_80 = SUB81(s_Invalid_data_size_001e2863._8_8_,7);
    local_8f = (char  [8])s_Invalid_data_size_001e2863._0_8_;
                    /* try { // try from 00344f14 to 00344f2f has its CatchHandler @ 0034509c */
    FUN_00372794(&local_90,
                 "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/frame_processors/fp_common/src/krisp_fp_common.cpp"
                 ,0xe4,"calcRescaleAbsAndFiltr");
    if ((local_90 & 1) != 0) {
      free((void *)CONCAT53(uStack_7d,CONCAT21(uStack_7f,cStack_80)));
    }
  }
  pfVar7 = (float *)*param_3;
  pfVar8 = (float *)param_3[1];
  if ((float *)param_3[1] != pfVar7) {
    param_3[1] = (ulong)pfVar7;
    pfVar8 = pfVar7;
  }
  if (param_5 != param_4) {
    lVar10 = param_4 << 3;
    lVar11 = param_4 - param_5;
    do {
      fVar12 = hypotf(*(float *)(*param_2 + lVar10),((float *)(*param_2 + lVar10))[1]);
      fVar12 = fVar12 * param_1 * fVar12 * param_1;
      if (pfVar8 < (float *)param_3[2]) {
        pfVar7 = pfVar8 + 1;
        *pfVar8 = fVar12;
      }
      else {
        __src = (void *)*param_3;
        lVar9 = (long)pfVar8 - (long)__src >> 2;
        uVar1 = lVar9 + 1;
        if (uVar1 >> 0x3e != 0) {
          if (*(long *)(lVar3 + 0x28) == local_78) {
            FUN_002febf0(param_3);
LAB_00345084:
            if (*(long *)(lVar3 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
              FUN_002f9ee0();
            }
          }
          goto LAB_003450c8;
        }
        uVar5 = (long)param_3[2] - (long)__src;
        uVar6 = (long)uVar5 >> 1;
        if (uVar6 <= uVar1) {
          uVar6 = uVar1;
        }
        if (0x7ffffffffffffffb < uVar5) {
          uVar6 = 0x3fffffffffffffff;
        }
        if (uVar6 == 0) {
          __dest = (void *)0x0;
        }
        else {
          if (uVar6 >> 0x3e != 0) goto LAB_00345084;
          __dest = (void *)FUN_00759c3c(uVar6 << 2);
        }
        pfVar2 = (float *)((long)__dest + lVar9 * 4);
        pfVar7 = pfVar2 + 1;
        *pfVar2 = fVar12;
        memcpy(__dest,__src,(long)pfVar8 - (long)__src);
        *param_3 = (ulong)__dest;
        param_3[1] = (ulong)pfVar7;
        param_3[2] = (ulong)((long)__dest + uVar6 * 4);
        if (__src != (void *)0x0) {
          free(__src);
        }
      }
      bVar4 = lVar11 != -1;
      lVar11 = lVar11 + 1;
      lVar10 = lVar10 + 8;
      param_3[1] = (ulong)pfVar7;
      pfVar8 = pfVar7;
    } while (bVar4);
  }
  if (*(long *)(lVar3 + 0x28) == local_78) {
    return;
  }
LAB_003450c8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003450cc  FUN_003450cc =====

void FUN_003450cc(float param_1,long *param_2)

{
  float *pfVar1;
  ulong uVar2;
  float *pfVar3;
  float *pfVar4;
  ulong uVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  
  pfVar3 = (float *)*param_2;
  pfVar1 = (float *)param_2[1];
  if (pfVar3 != pfVar1) {
    uVar2 = (long)pfVar1 + (-4 - (long)pfVar3);
    if (3 < uVar2) {
      uVar2 = (uVar2 >> 2) + 1;
      uVar5 = uVar2 & 0x7ffffffffffffffe;
      pfVar4 = pfVar3;
      uVar6 = uVar5;
      do {
        uVar9 = *(undefined8 *)pfVar4;
        fVar8 = logf((float)((ulong)uVar9 >> 0x20) + param_1);
        fVar7 = logf((float)uVar9 + param_1);
        uVar6 = uVar6 - 2;
        *(ulong *)pfVar4 = CONCAT44(fVar8,fVar7);
        pfVar4 = pfVar4 + 2;
      } while (uVar6 != 0);
      pfVar3 = pfVar3 + uVar5;
      if (uVar2 == uVar5) {
        return;
      }
    }
    do {
      fVar8 = logf(*pfVar3 + param_1);
      pfVar4 = pfVar3 + 1;
      *pfVar3 = fVar8;
      pfVar3 = pfVar4;
    } while (pfVar4 != pfVar1);
  }
  return;
}


// ===== 003451a4  FUN_003451a4 =====

void FUN_003451a4(long *param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  bool bVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  float *pfVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  char *pcVar18;
  float fVar19;
  undefined8 uVar20;
  byte local_80;
  char local_7f [8];
  uint uStack_77;
  undefined4 uStack_73;
  undefined2 uStack_6f;
  undefined5 uStack_6d;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  lVar7 = *param_1;
  lVar9 = param_1[1] - lVar7;
  uVar8 = lVar9 >> 2;
  if ((uVar8 & (-1L << (param_2 + 1U & 0x3f) ^ 0xffffffffffffffffU)) != 0) {
    local_80 = 0x22;
    uStack_6f = 0x65;
    uStack_77 = (uint)s_Invalid_data_size_001e2863._8_8_;
    uStack_73 = SUB84(s_Invalid_data_size_001e2863._8_8_,4);
    local_7f = (char  [8])s_Invalid_data_size_001e2863._0_8_;
                    /* try { // try from 00345218 to 00345233 has its CatchHandler @ 0034540c */
    FUN_00372794(&local_80,
                 "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/frame_processors/fp_common/src/krisp_fp_common.cpp"
                 ,0x128,"vectorSizeReducer");
    if ((local_80 & 1) != 0) {
      free((void *)CONCAT53(uStack_6d,CONCAT21(uStack_6f,uStack_73._3_1_)));
    }
    lVar7 = *param_1;
    lVar9 = param_1[1] - lVar7;
    uVar8 = lVar9 >> 2;
  }
  uVar15 = (ulong)(lVar9 >> 1) >> (param_2 + 1U & 0x3f);
  if (uVar15 < uVar8) {
    uVar14 = 2;
    pcVar18 = (char *)((ulong)&local_80 | 1);
    uVar17 = uVar15;
    uVar13 = uVar15;
    do {
      bVar6 = uVar17 == uVar13 * 2;
      uVar2 = uVar17;
      if (!bVar6) {
        uVar2 = uVar13;
      }
      uVar14 = uVar14 << bVar6;
      uVar13 = uVar14 + uVar17;
      if (uVar8 < uVar13) {
        pcVar18[7] = ' ';
        pcVar18[8] = 'e';
        pcVar18[9] = 'n';
        pcVar18[10] = 'd';
        local_80 = 0x16;
        uStack_77 = uStack_77 & 0xffffff;
        *(undefined8 *)pcVar18 = s_Invalid_end_001e2875._0_8_;
                    /* try { // try from 003452ec to 003452ff has its CatchHandler @ 00345410 */
        FUN_00372794(&local_80,
                     "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/frame_processors/fp_common/src/krisp_fp_common.cpp"
                     ,0x136,"vectorSizeReducer");
        if ((local_80 & 1) != 0) {
          free((void *)CONCAT53(uStack_6d,CONCAT21(uStack_6f,uStack_73._3_1_)));
        }
        lVar7 = *param_1;
      }
      fVar19 = 0.0;
      uVar16 = uVar17;
      if (uVar17 < uVar13) {
        uVar8 = uVar17;
        fVar19 = 0.0;
        uVar16 = uVar13;
        if (7 < uVar14) {
          uVar10 = uVar14 & 0xfffffffffffffff8;
          uVar8 = uVar17 + uVar10;
          puVar12 = (undefined8 *)(lVar7 + uVar17 * 4 + 0x10);
          uVar13 = uVar10;
          do {
            puVar1 = puVar12 + -2;
            puVar4 = puVar12 + -1;
            puVar5 = puVar12 + 1;
            uVar20 = *puVar12;
            uVar13 = uVar13 - 8;
            puVar12 = puVar12 + 4;
            fVar19 = fVar19 + (float)*puVar1 + (float)((ulong)*puVar1 >> 0x20) + (float)*puVar4 +
                     (float)((ulong)*puVar4 >> 0x20) + (float)uVar20 +
                     (float)((ulong)uVar20 >> 0x20) + (float)*puVar5 +
                     (float)((ulong)*puVar5 >> 0x20);
          } while (uVar13 != 0);
          if (uVar14 == uVar10) goto LAB_00345294;
        }
        lVar9 = (uVar17 + uVar14) - uVar8;
        pfVar11 = (float *)(lVar7 + uVar8 * 4);
        do {
          lVar9 = lVar9 + -1;
          fVar19 = fVar19 + *pfVar11;
          pfVar11 = pfVar11 + 1;
        } while (lVar9 != 0);
      }
LAB_00345294:
      *(float *)(lVar7 + uVar15 * 4) = fVar19;
      uVar15 = uVar15 + 1;
      uVar8 = param_1[1] - lVar7 >> 2;
      uVar17 = uVar16;
      uVar13 = uVar2;
    } while (uVar16 < uVar8);
  }
  if (uVar15 < uVar8 || uVar15 - uVar8 == 0) {
    if (uVar15 < uVar8) {
      param_1[1] = lVar7 + uVar15 * 4;
    }
  }
  else {
    FUN_002feac4(param_1,uVar15 - uVar8);
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00345444  FUN_00345444 =====

void FUN_00345444(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined4 uVar12;
  byte local_60;
  char local_5f [8];
  undefined7 uStack_57;
  char cStack_50;
  undefined2 uStack_4f;
  undefined5 uStack_4d;
  long local_48;
  
  lVar1 = tpidr_el0;
  uVar4 = param_2 + 2;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = *param_1;
  lVar3 = param_1[1];
  uVar11 = lVar3 - lVar2 >> 2;
  uVar6 = 0;
  if (uVar4 != 0) {
    uVar6 = uVar11 / uVar4;
  }
  if (uVar11 != uVar6 * uVar4) {
    local_60 = 0x22;
    uStack_4f = 0x65;
    uStack_57 = (undefined7)s_Invalid_data_size_001e2863._8_8_;
    cStack_50 = SUB81(s_Invalid_data_size_001e2863._8_8_,7);
    local_5f = (char  [8])s_Invalid_data_size_001e2863._0_8_;
                    /* try { // try from 003454ac to 003454c7 has its CatchHandler @ 003455e8 */
    FUN_00372794(&local_60,
                 "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/frame_processors/fp_common/src/krisp_fp_common.cpp"
                 ,0x142,"vectorSizeEnlarger");
    if ((local_60 & 1) != 0) {
      free((void *)CONCAT53(uStack_4d,CONCAT21(uStack_4f,cStack_50)));
    }
    lVar2 = *param_1;
    lVar3 = param_1[1];
    uVar11 = lVar3 - lVar2 >> 2;
  }
  uVar6 = 0;
  if (uVar4 != 0) {
    uVar6 = (uVar11 << (param_2 + 1U & 0x3f)) / uVar4;
  }
  if (uVar6 < uVar11 || uVar6 - uVar11 == 0) {
    if (uVar6 < uVar11) {
      lVar3 = lVar2 + uVar6 * 4;
      param_1[1] = lVar3;
    }
  }
  else {
    FUN_002feac4(param_1,uVar6 - uVar11);
    lVar2 = *param_1;
    lVar3 = param_1[1];
  }
  uVar4 = lVar3 - lVar2 >> 2;
  uVar11 = uVar11 - 1;
  uVar6 = uVar4 - 1;
  if (uVar11 < uVar6) {
    uVar5 = (ulong)(1L << (param_2 + 1U & 0x3f)) >> 1;
    do {
      if ((uVar6 < uVar4 >> 1) && (uVar5 = uVar5 >> 1, uVar4 = uVar4 >> 1, uVar5 == 1)) break;
      uVar7 = uVar6 - uVar5;
      if (uVar7 < uVar6) {
        uVar12 = *(undefined4 *)(lVar2 + uVar11 * 4);
        if (7 < uVar5) {
          uVar8 = uVar5 & 0xfffffffffffffff8;
          puVar9 = (undefined8 *)(lVar2 + -0xc + uVar6 * 4);
          uVar6 = uVar6 - uVar8;
          uVar10 = uVar8;
          do {
            uVar10 = uVar10 - 8;
            puVar9[-1] = CONCAT44(uVar12,uVar12);
            puVar9[-2] = CONCAT44(uVar12,uVar12);
            puVar9[1] = CONCAT44(uVar12,uVar12);
            *puVar9 = CONCAT44(uVar12,uVar12);
            puVar9 = puVar9 + -4;
          } while (uVar10 != 0);
          if (uVar5 == uVar8) goto LAB_00345540;
        }
        do {
          *(undefined4 *)(lVar2 + uVar6 * 4) = uVar12;
          uVar6 = uVar6 - 1;
        } while (uVar7 < uVar6);
      }
LAB_00345540:
      uVar11 = uVar11 - 1;
    } while (uVar11 < uVar6);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 00345618  FUN_00345618 =====

long FUN_00345618(long param_1,long param_2)

{
  return (long)((double)(ulong)(param_2 * param_1) / 1000.0);
}


// ===== 00345638  FUN_00345638 =====

undefined8 FUN_00345638(float *param_1,long *param_2)

{
  double *pdVar1;
  float *pfVar2;
  char cVar3;
  unkuint9 Var4;
  long lVar5;
  undefined8 *puVar6;
  bool bVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  int iVar12;
  ulong uVar13;
  float *pfVar14;
  long lVar15;
  float *pfVar16;
  ulong uVar17;
  ulong uVar18;
  float *pfVar19;
  float fVar20;
  float fVar21;
  double dVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 *local_90;
  long *local_88;
  ulong local_80;
  long local_78;
  
  lVar5 = tpidr_el0;
  local_78 = *(long *)(lVar5 + 0x28);
  pfVar16 = (float *)*param_2;
  pfVar19 = (float *)param_2[1];
  if (pfVar16 == pfVar19) {
    dVar22 = 0.0;
  }
  else {
    uVar13 = (long)pfVar19 + (-4 - (long)pfVar16);
    if (uVar13 < 4) {
      dVar22 = 0.0;
      pfVar14 = pfVar16;
    }
    else {
      dVar22 = 0.0;
      uVar13 = (uVar13 >> 2) + 1;
      uVar17 = uVar13 & 0x7ffffffffffffffe;
      pfVar14 = pfVar16 + uVar17;
      pfVar16 = pfVar16 + 1;
      uVar10 = uVar17;
      do {
        pfVar2 = pfVar16 + -1;
        fVar23 = *pfVar16;
        uVar10 = uVar10 - 2;
        pfVar16 = pfVar16 + 2;
        dVar22 = dVar22 + (double)*pfVar2 * (double)*pfVar2 + (double)fVar23 * (double)fVar23;
      } while (uVar10 != 0);
      if (uVar13 == uVar17) goto LAB_00345704;
    }
    do {
      pfVar16 = pfVar14 + 1;
      dVar22 = (double)NEON_fmadd((double)*pfVar14,(double)*pfVar14,dVar22);
      pfVar14 = pfVar16;
    } while (pfVar16 != pfVar19);
  }
LAB_00345704:
  plVar8 = *(long **)(param_1 + 10);
  fVar23 = param_1[0x13];
  lVar9 = *plVar8;
  plVar11 = (long *)plVar8[1];
  *(long *)(param_1 + 0xc) = *(long *)(param_1 + 0xc) + -1;
  *(long **)(lVar9 + 8) = plVar11;
  *plVar11 = lVar9;
  free(plVar8);
  plVar8 = (long *)FUN_00759c3c(0x18);
  lVar15 = *(long *)(param_1 + 0xc);
  pfVar16 = param_1 + 8;
  lVar9 = *(long *)pfVar16;
  uVar13 = *(ulong *)(param_1 + 0xe);
  *(long **)pfVar16 = plVar8;
  *plVar8 = lVar9;
  plVar8[1] = (long)pfVar16;
  *(long **)(lVar9 + 8) = plVar8;
  iVar12 = (int)(lVar15 + 1) - (int)uVar13;
  pfVar19 = *(float **)(param_1 + 10);
  *(long *)(param_1 + 0xc) = lVar15 + 1;
  lVar9 = (long)iVar12;
  plVar8[2] = (long)(double)((float)dVar22 / fVar23);
  local_80 = 0;
  if (iVar12 < 0) {
    do {
      pfVar19 = *(float **)pfVar19;
      bVar7 = lVar9 != -1;
      lVar9 = lVar9 + 1;
    } while (bVar7);
  }
  else if (iVar12 != 0) {
    uVar10 = lVar9 + 1;
    do {
      uVar10 = uVar10 - 1;
      pfVar19 = *(float **)(pfVar19 + 2);
    } while (1 < uVar10);
  }
  fVar23 = 0.0;
  local_90 = &local_90;
  local_88 = (long *)&local_90;
  if (pfVar19 == pfVar16) {
    fVar20 = 0.0;
    bVar7 = true;
    local_90 = &local_90;
    local_88 = (long *)&local_90;
  }
  else {
    do {
                    /* try { // try from 003457bc to 003457c3 has its CatchHandler @ 003459f8 */
      uVar10 = local_80;
      puVar6 = local_90;
      local_90 = (undefined8 *)FUN_00759c3c(0x18);
      local_90[1] = &local_90;
      lVar9 = *(long *)(pfVar19 + 4);
      uVar10 = uVar10 + 1;
      puVar6[1] = local_90;
      pfVar19 = *(float **)(pfVar19 + 2);
      *local_90 = puVar6;
      local_90[2] = lVar9;
      local_80 = uVar10;
    } while (pfVar19 != pfVar16);
    bVar7 = (undefined8 **)local_88 == &local_90;
    if (bVar7) {
      fVar20 = 0.0;
      bVar7 = true;
    }
    else {
      fVar20 = 0.0;
      plVar8 = local_88;
      do {
        pdVar1 = (double *)(plVar8 + 2);
        plVar8 = (long *)plVar8[1];
        fVar20 = fVar20 + (float)*pdVar1;
      } while ((undefined8 **)plVar8 != &local_90);
    }
  }
  uVar10 = local_80;
  plVar8 = local_88;
  puVar6 = local_90;
  Var4 = (unkuint9)local_80;
  fVar25 = param_1[0x10];
  fVar21 = log10f(fVar25 / (fVar20 / (float)(unkint9)Var4 + 1.0));
  fVar21 = fVar21 * 10.0;
  fVar24 = *param_1;
  if (fVar21 < fVar24 == (NAN(fVar21) || NAN(fVar24))) {
    fVar23 = ((fVar21 - fVar24) * param_1[0x12]) / (param_1[1] - fVar24);
    if (fVar21 < fVar24) goto LAB_003458b0;
LAB_00345884:
    cVar3 = *(char *)(param_1 + 6);
  }
  else {
    if (fVar24 <= fVar21) goto LAB_00345884;
LAB_003458b0:
    fVar20 = (float)NEON_fmadd(param_1[0x11],fVar25,
                               (fVar20 / (float)(unkint9)Var4) * (1.0 - param_1[0x11]));
    param_1[0x10] = fVar20;
    cVar3 = *(char *)(param_1 + 6);
  }
  if (cVar3 != '\0') {
    fVar20 = param_1[1];
    if (fVar21 == fVar20 || fVar21 < fVar20 != (NAN(fVar21) || NAN(fVar20))) {
      if (uVar13 < *(ulong *)(param_1 + 2)) {
        lVar9 = 1;
        goto LAB_00345900;
      }
    }
    else if (*(ulong *)(param_1 + 4) < uVar13) {
      lVar9 = -1;
LAB_00345900:
      *(ulong *)(param_1 + 0xe) = uVar13 + lVar9;
    }
  }
  fVar23 = powf(10.0,fVar23 / 10.0);
  pfVar16 = (float *)*param_2;
  pfVar19 = (float *)param_2[1];
  if (pfVar16 != pfVar19) {
    uVar13 = (long)pfVar19 + (-4 - (long)pfVar16);
    if (0x1b < uVar13) {
      uVar13 = (uVar13 >> 2) + 1;
      uVar18 = uVar13 & 0x7ffffffffffffff8;
      pfVar14 = pfVar16 + 4;
      uVar17 = uVar18;
      do {
        uVar17 = uVar17 - 8;
        *(ulong *)(pfVar14 + -2) =
             CONCAT44((float)((ulong)*(undefined8 *)(pfVar14 + -2) >> 0x20) * fVar23,
                      (float)*(undefined8 *)(pfVar14 + -2) * fVar23);
        *(ulong *)(pfVar14 + -4) =
             CONCAT44((float)((ulong)*(undefined8 *)(pfVar14 + -4) >> 0x20) * fVar23,
                      (float)*(undefined8 *)(pfVar14 + -4) * fVar23);
        *(ulong *)(pfVar14 + 2) =
             CONCAT44((float)((ulong)*(undefined8 *)(pfVar14 + 2) >> 0x20) * fVar23,
                      (float)*(undefined8 *)(pfVar14 + 2) * fVar23);
        *(ulong *)pfVar14 =
             CONCAT44((float)((ulong)*(undefined8 *)pfVar14 >> 0x20) * fVar23,
                      (float)*(undefined8 *)pfVar14 * fVar23);
        pfVar14 = pfVar14 + 8;
      } while (uVar17 != 0);
      pfVar16 = pfVar16 + uVar18;
      if (uVar13 == uVar18) goto LAB_00345984;
    }
    do {
      pfVar14 = pfVar16 + 1;
      *pfVar16 = fVar23 * *pfVar16;
      pfVar16 = pfVar14;
    } while (pfVar14 != pfVar19);
  }
LAB_00345984:
  if (uVar10 != 0) {
    plVar11 = (long *)puVar6[1];
    lVar9 = *plVar8;
    local_80 = 0;
    *(long **)(lVar9 + 8) = plVar11;
    *plVar11 = lVar9;
    if (!bVar7) {
      do {
        plVar11 = (long *)plVar8[1];
        free(plVar8);
        plVar8 = plVar11;
      } while ((undefined8 **)plVar11 != &local_90);
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_78) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00345a20  FUN_00345a20 =====

void FUN_00345a20(long *param_1)

{
  long *__ptr;
  long *plVar1;
  long lVar2;
  
  if (param_1[2] != 0) {
    __ptr = (long *)param_1[1];
    param_1[2] = 0;
    lVar2 = *__ptr;
    plVar1 = *(long **)(*param_1 + 8);
    *(long **)(lVar2 + 8) = plVar1;
    *plVar1 = lVar2;
    while (__ptr != param_1) {
      plVar1 = (long *)__ptr[1];
      free(__ptr);
      __ptr = plVar1;
    }
  }
  return;
}


// ===== 00345a7c  FUN_00345a7c =====

void FUN_00345a7c(undefined4 param_1,undefined4 param_2,float param_3,undefined4 *param_4,
                 long param_5,undefined8 param_6,undefined1 param_7,ulong param_8,long *param_9)

{
  float *pfVar1;
  long *plVar2;
  float *pfVar3;
  long *plVar4;
  ulong uVar5;
  float *pfVar6;
  ulong uVar7;
  float *pfVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  float fVar12;
  double dVar13;
  
  plVar2 = (long *)(param_4 + 8);
  *param_4 = param_1;
  param_4[1] = param_2;
  *(long *)(param_4 + 2) = param_5;
  *(undefined8 *)(param_4 + 4) = param_6;
  *(undefined1 *)(param_4 + 6) = param_7;
  *(long **)(param_4 + 8) = plVar2;
  *(long **)(param_4 + 10) = plVar2;
  *(undefined8 *)(param_4 + 0xc) = 0;
  if (param_5 != 0) {
    lVar10 = 0;
    plVar11 = plVar2;
    do {
                    /* try { // try from 00345ad4 to 00345adb has its CatchHandler @ 00345bec */
      plVar4 = (long *)FUN_00759c3c(0x18);
      lVar10 = lVar10 + 1;
      plVar4[1] = (long)plVar2;
      plVar4[2] = 0x3ff0000000000000;
      *plVar4 = (long)plVar11;
      plVar11[1] = (long)plVar4;
      *(long **)(param_4 + 8) = plVar4;
      *(long *)(param_4 + 0xc) = lVar10;
      plVar11 = plVar4;
    } while (param_5 != lVar10);
  }
  pfVar8 = (float *)*param_9;
  pfVar3 = (float *)param_9[1];
  param_4[0x10] = 0x3f800000;
  *(long *)(param_4 + 0xe) = param_5;
  param_4[0x12] = 0xc2700000;
  param_4[0x11] = 1.0 / ((param_3 * -2000.0) / (float)param_8) + 1.0;
  if (pfVar8 == pfVar3) {
    fVar12 = 0.0;
    goto LAB_00345bcc;
  }
  uVar5 = (long)pfVar3 + (-4 - (long)pfVar8);
  if (uVar5 < 4) {
    dVar13 = 0.0;
    pfVar6 = pfVar8;
LAB_00345bb4:
    do {
      pfVar8 = pfVar6 + 1;
      dVar13 = (double)NEON_fmadd((double)*pfVar6,(double)*pfVar6,dVar13);
      pfVar6 = pfVar8;
    } while (pfVar8 != pfVar3);
  }
  else {
    dVar13 = 0.0;
    uVar5 = (uVar5 >> 2) + 1;
    uVar7 = uVar5 & 0x7ffffffffffffffe;
    pfVar6 = pfVar8 + uVar7;
    pfVar8 = pfVar8 + 1;
    uVar9 = uVar7;
    do {
      pfVar1 = pfVar8 + -1;
      fVar12 = *pfVar8;
      uVar9 = uVar9 - 2;
      pfVar8 = pfVar8 + 2;
      dVar13 = dVar13 + (double)*pfVar1 * (double)*pfVar1 + (double)fVar12 * (double)fVar12;
    } while (uVar9 != 0);
    if (uVar5 != uVar7) goto LAB_00345bb4;
  }
  fVar12 = (float)dVar13;
LAB_00345bcc:
  param_4[0x13] = fVar12;
  return;
}


// ===== 00345c00  FUN_00345c00 =====

undefined8 FUN_00345c00(long param_1,ulong *param_2)

{
  void *__ptr;
  float *pfVar1;
  long lVar2;
  float fVar3;
  long lVar4;
  void *__s;
  undefined8 uVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  void *local_60;
  void *local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  pfVar6 = (float *)(param_1 + 0x60);
  if (*pfVar6 != 1.0) {
    if (*pfVar6 == 0.0) {
      __ptr = (void *)*param_2;
      local_58 = (void *)0x0;
      uStack_50 = 0;
      local_60 = (void *)0x0;
      lVar2 = param_2[1] - (long)__ptr;
      if (lVar2 == 0) {
        *param_2 = 0;
        param_2[1] = 0;
        param_2[2] = 0;
      }
      else {
        if (lVar2 < 0) {
          if (*(long *)(lVar4 + 0x28) == local_48) {
                    /* try { // try from 00345d84 to 00345d8b has its CatchHandler @ 00345d8c */
            uVar5 = FUN_002febf0(&local_60);
                    /* catch() { ... } // from try @ 00345c88 with catch @ 00345d8c
                       catch() { ... } // from try @ 00345d84 with catch @ 00345d8c */
            if (local_60 != (void *)0x0) {
              local_58 = local_60;
              free(local_60);
            }
            if (*(long *)(lVar4 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
              FUN_00755eac(uVar5);
            }
          }
          goto LAB_00345dbc;
        }
                    /* try { // try from 00345c88 to 00345c8f has its CatchHandler @ 00345d8c */
        __s = (void *)FUN_00759c3c(lVar2);
        memset(__s,0,(lVar2 - 4U & 0xfffffffffffffffc) + 4);
        *param_2 = (ulong)__s;
        param_2[1] = (long)__s + lVar2;
        param_2[2] = (long)__s + lVar2;
      }
      if (__ptr != (void *)0x0) {
        free(__ptr);
      }
    }
    else {
      pfVar8 = (float *)*param_2;
      pfVar1 = (float *)param_2[1];
      if (pfVar8 != pfVar1) {
        uVar9 = (long)pfVar1 + (-4 - (long)pfVar8);
        if ((0x2b < uVar9) &&
           (((float *)(param_1 + 100U) <= pfVar8 ||
            ((float *)((long)pfVar8 + (uVar9 & 0xfffffffffffffffc) + 4) <= pfVar6)))) {
          fVar3 = *pfVar6;
          uVar9 = (uVar9 >> 2) + 1;
          uVar10 = uVar9 & 0x7ffffffffffffff8;
          pfVar7 = pfVar8 + 4;
          uVar11 = uVar10;
          do {
            uVar11 = uVar11 - 8;
            *(ulong *)(pfVar7 + -2) =
                 CONCAT44((float)((ulong)*(undefined8 *)(pfVar7 + -2) >> 0x20) * fVar3,
                          (float)*(undefined8 *)(pfVar7 + -2) * fVar3);
            *(ulong *)(pfVar7 + -4) =
                 CONCAT44((float)((ulong)*(undefined8 *)(pfVar7 + -4) >> 0x20) * fVar3,
                          (float)*(undefined8 *)(pfVar7 + -4) * fVar3);
            *(ulong *)(pfVar7 + 2) =
                 CONCAT44((float)((ulong)*(undefined8 *)(pfVar7 + 2) >> 0x20) * fVar3,
                          (float)*(undefined8 *)(pfVar7 + 2) * fVar3);
            *(ulong *)pfVar7 =
                 CONCAT44((float)((ulong)*(undefined8 *)pfVar7 >> 0x20) * fVar3,
                          (float)*(undefined8 *)pfVar7 * fVar3);
            pfVar7 = pfVar7 + 8;
          } while (uVar11 != 0);
          pfVar8 = pfVar8 + uVar10;
          if (uVar9 == uVar10) goto LAB_00345c38;
        }
        do {
          pfVar7 = pfVar8 + 1;
          *pfVar8 = *pfVar8 * *pfVar6;
          pfVar8 = pfVar7;
        } while (pfVar7 != pfVar1);
      }
    }
  }
LAB_00345c38:
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return 1;
  }
LAB_00345dbc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00345dc0  FUN_00345dc0 =====

undefined4 FUN_00345dc0(undefined8 *param_1,long *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  float *pfVar8;
  long lVar9;
  ulong uVar10;
  float *pfVar11;
  ulong uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  float fVar16;
  double dVar17;
  
  pfVar2 = (float *)*param_2;
  pfVar3 = (float *)param_2[1];
  if (pfVar2 == pfVar3) {
    dVar13 = 0.0;
  }
  else {
    uVar7 = (long)pfVar3 + (-4 - (long)pfVar2);
    if (uVar7 < 4) {
      dVar13 = 0.0;
      pfVar8 = pfVar2;
    }
    else {
      dVar13 = 0.0;
      pfVar11 = pfVar2 + 1;
      uVar7 = (uVar7 >> 2) + 1;
      uVar10 = uVar7 & 0x7ffffffffffffffe;
      pfVar8 = pfVar2 + uVar10;
      uVar12 = uVar10;
      do {
        pfVar1 = pfVar11 + -1;
        fVar16 = *pfVar11;
        uVar12 = uVar12 - 2;
        pfVar11 = pfVar11 + 2;
        dVar13 = dVar13 + (double)*pfVar1 * (double)*pfVar1 + (double)fVar16 * (double)fVar16;
      } while (uVar12 != 0);
      if (uVar7 == uVar10) goto LAB_00345e64;
    }
    do {
      pfVar11 = pfVar8 + 1;
      dVar13 = (double)NEON_fmadd((double)*pfVar8,(double)*pfVar8,dVar13);
      pfVar8 = pfVar11;
    } while (pfVar11 != pfVar3);
  }
LAB_00345e64:
  plVar4 = (long *)param_1[4];
  lVar6 = *plVar4;
  plVar5 = (long *)plVar4[1];
  dVar13 = dVar13 / (double)(ulong)((long)pfVar3 - (long)pfVar2 >> 2);
  dVar15 = (double)param_1[9];
  param_1[5] = param_1[5] + -1;
  dVar14 = (double)NEON_ucvtf(*param_1);
  *(long **)(lVar6 + 8) = plVar5;
  *plVar5 = lVar6;
  dVar14 = dVar13 / dVar14;
  param_1[9] = dVar15 + (dVar14 - (double)plVar4[2]);
  free(plVar4);
  plVar4 = (long *)FUN_00759c3c(0x18);
  lVar9 = param_1[5];
  plVar4[2] = (long)dVar14;
  plVar5 = param_1 + 3;
  lVar6 = *plVar5;
  dVar15 = (double)param_1[2];
  *plVar5 = (long)plVar4;
  *plVar4 = lVar6;
  plVar4[1] = (long)plVar5;
  *(long **)(lVar6 + 8) = plVar4;
  param_1[5] = lVar9 + 1;
  if (dVar14 < dVar15 == (NAN(dVar14) || NAN(dVar15))) {
    if ((ulong)param_1[0xb] < (ulong)param_1[1]) {
      param_1[0xb] = param_1[0xb] + 1;
    }
    plVar4 = (long *)param_1[7];
    dVar15 = (double)param_1[10];
    dVar14 = (double)plVar4[2];
    lVar6 = *plVar4;
    plVar5 = (long *)plVar4[1];
    param_1[8] = param_1[8] + -1;
    *(long **)(lVar6 + 8) = plVar5;
    *plVar5 = lVar6;
    param_1[10] = dVar15 + (dVar13 - dVar14);
    free(plVar4);
    plVar4 = (long *)FUN_00759c3c(0x18);
    lVar9 = param_1[8];
    plVar4[2] = (long)dVar13;
    plVar5 = param_1 + 6;
    lVar6 = *plVar5;
    *plVar5 = (long)plVar4;
    *plVar4 = lVar6;
    plVar4[1] = (long)plVar5;
    *(long **)(lVar6 + 8) = plVar4;
    param_1[8] = lVar9 + 1;
  }
  lVar6 = param_1[0xb];
  if (lVar6 != 0) {
    dVar13 = (double)param_1[9];
    dVar15 = (double)param_1[10] / (double)(ulong)(lVar6 * 0x50);
    dVar14 = (double)param_1[10] / (double)(ulong)(lVar6 * 0xf);
    if ((dVar15 < dVar13) && (dVar13 < dVar14)) {
      dVar17 = (dVar13 - dVar15) / (dVar14 - dVar15);
      *(float *)(param_1 + 0xc) = (float)(dVar17 * dVar17);
    }
    if (dVar13 <= dVar15) {
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    if (dVar13 < dVar14 != (NAN(dVar13) || NAN(dVar14))) {
      return *(undefined4 *)(param_1 + 0xc);
    }
  }
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  return 0x3f800000;
}


// ===== 00345ff4  FUN_00345ff4 =====

void FUN_00345ff4(float param_1,long *param_2,long param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  plVar1 = param_2 + 3;
  *param_2 = param_3;
  param_2[1] = param_4;
  param_2[3] = (long)plVar1;
  param_2[4] = (long)plVar1;
  param_2[5] = 0;
  param_2[2] = (long)(double)param_1;
  if (param_3 != 0) {
    lVar3 = 0;
    plVar4 = plVar1;
    do {
                    /* try { // try from 00346038 to 0034603f has its CatchHandler @ 003460e8 */
      plVar2 = (long *)FUN_00759c3c(0x18);
      lVar3 = lVar3 + 1;
      plVar2[1] = (long)plVar1;
      plVar2[2] = 0;
      *plVar2 = (long)plVar4;
      plVar4[1] = (long)plVar2;
      param_2[3] = (long)plVar2;
      param_2[5] = lVar3;
      plVar4 = plVar2;
    } while (param_3 != lVar3);
  }
  plVar1 = param_2 + 6;
  param_2[8] = 0;
  param_2[6] = (long)plVar1;
  param_2[7] = (long)plVar1;
  if (param_4 != 0) {
    lVar3 = 0;
    plVar4 = plVar1;
    do {
                    /* try { // try from 0034607c to 00346083 has its CatchHandler @ 003460cc */
      plVar2 = (long *)FUN_00759c3c(0x18);
      lVar3 = lVar3 + 1;
      plVar2[1] = (long)plVar1;
      plVar2[2] = 0;
      *plVar2 = (long)plVar4;
      plVar4[1] = (long)plVar2;
      param_2[6] = (long)plVar2;
      param_2[8] = lVar3;
      plVar4 = plVar2;
    } while (param_4 != lVar3);
  }
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *(undefined4 *)(param_2 + 0xc) = 0x3f800000;
  return;
}


// ===== 003460fc  FUN_003460fc =====

void FUN_003460fc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  void *__ptr;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *puStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *param_1 = 0;
  param_1[1] = param_2;
  param_1[2] = param_3;
                    /* try { // try from 00346134 to 0034613b has its CatchHandler @ 003461e0 */
  uVar2 = FUN_00759c3c(8);
                    /* try { // try from 0034613c to 00346143 has its CatchHandler @ 003461d4 */
  FUN_00346cbc();
  __ptr = (void *)*param_1;
  *param_1 = uVar2;
  if (__ptr != (void *)0x0) {
    FUN_00346ce8(__ptr);
    free(__ptr);
  }
                    /* try { // try from 00346160 to 00346167 has its CatchHandler @ 003461cc */
  local_60 = (undefined8 *)FUN_00759c3c(0x10);
  local_58 = local_60 + 2;
  uVar2 = *param_1;
  *local_60 = param_3;
  local_60[1] = param_2;
  puStack_50 = local_58;
                    /* try { // try from 0034617c to 00346193 has its CatchHandler @ 003461e8 */
  FUN_00346d5c(uVar2,&local_60);
  FUN_00346260(param_1,&local_60);
  if (local_60 != (undefined8 *)0x0) {
    local_58 = local_60;
    free(local_60);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00346224  FUN_00346224 =====

void FUN_00346224(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)*param_1;
  *param_1 = 0;
  if (__ptr != (void *)0x0) {
    FUN_00346ce8(__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 00346260  FUN_00346260 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00346260(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 ******ppppppuVar5;
  undefined8 *******pppppppuVar6;
  undefined8 *******pppppppuVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  undefined8 *******pppppppuVar15;
  double dVar16;
  undefined8 ****local_c8;
  undefined8 ****local_c0;
  long local_b8;
  undefined8 *******local_b0;
  undefined8 *******local_a8;
  long local_a0;
  undefined8 *******local_98;
  undefined8 *******local_90;
  long local_88;
  undefined8 *puStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  pppppppuVar6 = &local_90;
  puStack_80 = &local_78;
  local_c0 = (undefined8 ****)0x0;
  local_a8 = (undefined8 *******)0x0;
  local_a0 = 0;
  local_b8 = 0;
  local_90 = (undefined8 *******)0x0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  local_c8 = &local_c0;
  local_b0 = &local_a8;
  local_98 = pppppppuVar6;
                    /* try { // try from 003462c0 to 003462c7 has its CatchHandler @ 00346514 */
  local_c8 = (undefined8 ****)FUN_00759c3c(0x28);
  *local_c8 = (undefined8 ***)0x0;
  local_c8[1] = (undefined8 ***)0x0;
  local_c8[2] = &local_c0;
  *(undefined8 *)((long)local_c8 + 0x1c) = 0x300000004;
  local_c0 = local_c8;
  FUN_00328410(local_c8,local_c8);
  plVar12 = (long *)*param_2;
  plVar2 = (long *)param_2[1];
  dVar16 = 1.0;
  local_b8 = local_b8 + 1;
  pppppppuVar7 = local_90;
  if (plVar12 == plVar2) goto joined_r0x00346380;
  uVar8 = (long)plVar2 + (-8 - (long)plVar12);
  if (uVar8 < 8) {
    uVar11 = 1;
    plVar9 = plVar12;
LAB_00346368:
    do {
      plVar12 = plVar9 + 1;
      uVar11 = *plVar9 * uVar11;
      plVar9 = plVar12;
    } while (plVar12 != plVar2);
  }
  else {
    lVar14 = 1;
    lVar13 = 1;
    uVar8 = (uVar8 >> 3) + 1;
    uVar10 = uVar8 & 0x3ffffffffffffffe;
    plVar9 = plVar12 + uVar10;
    plVar12 = plVar12 + 1;
    uVar11 = uVar10;
    do {
      plVar1 = plVar12 + -1;
      lVar3 = *plVar12;
      uVar11 = uVar11 - 2;
      plVar12 = plVar12 + 2;
      lVar14 = *plVar1 * lVar14;
      lVar13 = lVar3 * lVar13;
    } while (uVar11 != 0);
    uVar11 = lVar13 * lVar14;
    if (uVar8 != uVar10) goto LAB_00346368;
  }
  dVar16 = (double)uVar11;
joined_r0x00346380:
  while (pppppppuVar15 = pppppppuVar6, pppppppuVar7 != (undefined8 *******)0x0) {
    while (pppppppuVar6 = pppppppuVar7, *(int *)(pppppppuVar6 + 4) < 2) {
      if (*(int *)(pppppppuVar6 + 4) == 1) goto LAB_0034640c;
      pppppppuVar7 = (undefined8 *******)pppppppuVar6[1];
      if ((undefined8 *******)pppppppuVar6[1] == (undefined8 *******)0x0) {
        pppppppuVar15 = pppppppuVar6 + 1;
        goto LAB_003463bc;
      }
    }
    pppppppuVar7 = (undefined8 *******)*pppppppuVar6;
  }
LAB_003463bc:
                    /* try { // try from 003463bc to 003463c7 has its CatchHandler @ 0034650c */
  ppppppuVar5 = (undefined8 ******)FUN_00759c3c(0x30);
  *ppppppuVar5 = (undefined8 *****)0x0;
  ppppppuVar5[1] = (undefined8 *****)0x0;
  ppppppuVar5[2] = pppppppuVar6;
  *pppppppuVar15 = ppppppuVar5;
  *(undefined4 *)(ppppppuVar5 + 4) = 1;
  pppppppuVar6 = (undefined8 *******)*local_98;
  ppppppuVar5[5] = (undefined8 *****)(1.0 / dVar16);
  if (pppppppuVar6 != (undefined8 *******)0x0) {
    local_98 = pppppppuVar6;
    ppppppuVar5 = *pppppppuVar15;
  }
  FUN_00328410(local_90,ppppppuVar5);
  local_88 = local_88 + 1;
LAB_0034640c:
  lVar14 = param_1[2];
  pppppppuVar6 = &local_a8;
  pppppppuVar7 = local_a8;
  do {
    pppppppuVar15 = pppppppuVar6;
    if (pppppppuVar7 == (undefined8 *******)0x0) {
LAB_00346450:
                    /* try { // try from 00346450 to 0034645b has its CatchHandler @ 00346508 */
      ppppppuVar5 = (undefined8 ******)FUN_00759c3c(0x28);
      *ppppppuVar5 = (undefined8 *****)0x0;
      ppppppuVar5[1] = (undefined8 *****)0x0;
      ppppppuVar5[2] = pppppppuVar15;
      *(ulong *)((long)ppppppuVar5 + 0x1c) = lVar14 << 0x20 | 2;
      *pppppppuVar6 = ppppppuVar5;
      if ((undefined8 *******)*local_b0 != (undefined8 *******)0x0) {
        ppppppuVar5 = *pppppppuVar6;
        local_b0 = (undefined8 *******)*local_b0;
      }
      FUN_00328410(local_a8,ppppppuVar5);
      local_a0 = local_a0 + 1;
LAB_0034649c:
                    /* try { // try from 003464a0 to 003464a7 has its CatchHandler @ 00346510 */
      FUN_0034703c(*param_1,&local_c8);
      FUN_00346888(&puStack_80,local_78);
      FUN_003468cc(&local_98,local_90);
      FUN_00346910(&local_b0,local_a8);
      FUN_00346954(&local_c8,local_c0);
      if (*(long *)(lVar4 + 0x28) == local_68) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    while (pppppppuVar15 = pppppppuVar7, *(int *)((long)pppppppuVar15 + 0x1c) < 3) {
      if (*(int *)((long)pppppppuVar15 + 0x1c) == 2) goto LAB_0034649c;
      pppppppuVar7 = (undefined8 *******)pppppppuVar15[1];
      if ((undefined8 *******)pppppppuVar15[1] == (undefined8 *******)0x0) {
        pppppppuVar6 = pppppppuVar15 + 1;
        goto LAB_00346450;
      }
    }
    pppppppuVar7 = (undefined8 *******)*pppppppuVar15;
    pppppppuVar6 = pppppppuVar15;
  } while( true );
}


// ===== 0034653c  FUN_0034653c =====

void FUN_0034653c(undefined8 *param_1)

{
  void *__ptr;
  
                    /* try { // try from 00346550 to 00346553 has its CatchHandler @ 00346584 */
  FUN_00347038(*param_1);
  __ptr = (void *)*param_1;
  *param_1 = 0;
  if (__ptr != (void *)0x0) {
    FUN_00346ce8(__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 00346588  FUN_00346588 =====

void FUN_00346588(undefined8 *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar1 = param_1[2];
  if (lVar1 * param_1[1] - (param_2[1] - *param_2 >> 2) == 0) {
    uVar6 = lVar1 + lVar1 * ((ulong)param_1[1] >> 1);
    uVar5 = param_3[1] - *param_3 >> 3;
    if (uVar6 < uVar5 || uVar6 - uVar5 == 0) {
      if (uVar6 < uVar5) {
        param_3[1] = *param_3 + uVar6 * 8;
      }
    }
    else {
      FUN_00346998(param_3,uVar6 - uVar5);
    }
    uVar3 = *param_1;
    if (*(long *)(lVar2 + 0x28) == local_38) {
      FUN_00347040(uVar3,param_2,param_3);
      return;
    }
  }
  else {
    uVar4 = FUN_00753a74(0x20);
                    /* try { // try from 00346644 to 00346653 has its CatchHandler @ 003466b8 */
    FUN_002fd2b0(auStack_50,"Wrong input size");
    auVar7 = FUN_00374b08(uVar4,auStack_50,
                          "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/dsp/src/krisp_dsp_fft.cpp"
                          ,0x20,"computeForward");
    param_2 = auVar7._8_8_;
    uVar3 = auVar7._0_8_;
    if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* try { // try from 00346688 to 0034669f has its CatchHandler @ 003466a0 */
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar4,PTR_PTR_007a11f0,PTR_FUN_007a11f8);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3,param_2);
}


// ===== 003466e4  FUN_003466e4 =====

void FUN_003466e4(undefined8 *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar1 = param_1[2];
  if (lVar1 + lVar1 * ((ulong)param_1[1] >> 1) == param_2[1] - *param_2 >> 3) {
    uVar6 = lVar1 * param_1[1];
    uVar5 = param_3[1] - *param_3 >> 2;
    if (uVar6 < uVar5 || uVar6 - uVar5 == 0) {
      if (uVar6 < uVar5) {
        param_3[1] = *param_3 + uVar6 * 4;
      }
    }
    else {
      FUN_002feac4(param_3,uVar6 - uVar5);
    }
    uVar3 = *param_1;
    if (*(long *)(lVar2 + 0x28) == local_38) {
      FUN_00347064(uVar3,param_2,param_3);
      return;
    }
  }
  else {
    uVar4 = FUN_00753a74(0x20);
                    /* try { // try from 003467a0 to 003467af has its CatchHandler @ 00346814 */
    FUN_002fd2b0(auStack_50,"Wrong input size");
    auVar7 = FUN_00374b08(uVar4,auStack_50,
                          "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/dsp/src/krisp_dsp_fft.cpp"
                          ,0x2c,"computeBackward");
    param_2 = auVar7._8_8_;
    uVar3 = auVar7._0_8_;
    if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* try { // try from 003467e4 to 003467fb has its CatchHandler @ 003467fc */
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar4,PTR_PTR_007a11f0,PTR_FUN_007a11f8);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3,param_2);
}


// ===== 00346840  FUN_00346840 =====

void FUN_00346840(long param_1)

{
  FUN_00346888(param_1 + 0x48,*(undefined8 *)(param_1 + 0x50));
  FUN_003468cc(param_1 + 0x30,*(undefined8 *)(param_1 + 0x38));
  FUN_00346910(param_1 + 0x18,*(undefined8 *)(param_1 + 0x20));
  FUN_00346954(param_1,*(undefined8 *)(param_1 + 8));
  return;
}


// ===== 00346888  FUN_00346888 =====

void FUN_00346888(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_00346888(param_1,*param_2);
    FUN_00346888(param_1,param_2[1]);
    free(param_2);
    return;
  }
  return;
}


// ===== 003468cc  FUN_003468cc =====

void FUN_003468cc(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_003468cc(param_1,*param_2);
    FUN_003468cc(param_1,param_2[1]);
    free(param_2);
    return;
  }
  return;
}


// ===== 00346910  FUN_00346910 =====

void FUN_00346910(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_00346910(param_1,*param_2);
    FUN_00346910(param_1,param_2[1]);
    free(param_2);
    return;
  }
  return;
}


// ===== 00346954  FUN_00346954 =====

void FUN_00346954(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_00346954(param_1,*param_2);
    FUN_00346954(param_1,param_2[1]);
    free(param_2);
    return;
  }
  return;
}


// ===== 00346998  FUN_00346998 =====

void FUN_00346998(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  void *__s;
  void *__dest;
  ulong uVar2;
  ulong uVar3;
  void *__src;
  void *__s_00;
  long lVar4;
  
  __s_00 = (void *)param_1[1];
  if ((ulong)(param_1[2] - (long)__s_00 >> 3) < param_2) {
    __src = (void *)*param_1;
    lVar4 = (long)__s_00 - (long)__src >> 3;
    uVar1 = lVar4 + param_2;
    if (uVar1 >> 0x3d != 0) {
      FUN_0031921c(param_1);
LAB_00346ac0:
                    /* WARNING: Subroutine does not return */
      FUN_002f9ee0();
    }
    uVar2 = param_1[2] - (long)__src;
    uVar3 = (long)uVar2 >> 2;
    if (uVar3 <= uVar1) {
      uVar3 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar2) {
      uVar3 = 0x1fffffffffffffff;
    }
    if (uVar3 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar3 >> 0x3d != 0) goto LAB_00346ac0;
      __dest = (void *)FUN_00759c3c(uVar3 << 3);
    }
    __s = (void *)((long)__dest + lVar4 * 8);
    memset(__s,0,param_2 * 8);
    memcpy(__dest,__src,(long)__s_00 - (long)__src);
    *param_1 = __dest;
    param_1[1] = (void *)((long)__s + param_2 * 8);
    param_1[2] = (void *)((long)__dest + uVar3 * 8);
    if (__src != (void *)0x0) {
      free(__src);
      return;
    }
  }
  else {
    if (param_2 != 0) {
      memset(__s_00,0,param_2 * 8);
      __s_00 = (void *)((long)__s_00 + param_2 * 8);
    }
    param_1[1] = __s_00;
  }
  return;
}


// ===== 00346ac4  FUN_00346ac4 =====

void FUN_00346ac4(undefined8 *param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_2 == 0) {
    uVar3 = FUN_00753a74(0x20);
                    /* try { // try from 00346b2c to 00346b3b has its CatchHandler @ 00346c90 */
    FUN_002fd2b0(auStack_40,"Input is null");
    FUN_00374b08(uVar3,auStack_40,
                 "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/dsp/src/krisp_dsp_dftkiss.cpp"
                 ,0x24,"computeForward");
    if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 00346b70 to 00346b87 has its CatchHandler @ 00346c74 */
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar3,PTR_PTR_007a11f0,PTR_FUN_007a11f8);
    }
  }
  else if (param_4 == 0) {
    uVar3 = FUN_00753a74(0x20);
                    /* try { // try from 00346b9c to 00346bab has its CatchHandler @ 00346c8c */
    FUN_002fd2b0(auStack_40,"Output is null");
    FUN_00374b08(uVar3,auStack_40,
                 "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/dsp/src/krisp_dsp_dftkiss.cpp"
                 ,0x28,"computeForward");
    if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 00346be0 to 00346bf7 has its CatchHandler @ 00346c6c */
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar3,PTR_PTR_007a11f0,PTR_FUN_007a11f8);
    }
  }
  else {
    uVar2 = (**(code **)(*(long *)*param_1 + 0x18))();
    if ((uVar2 & 1) == 0) {
      uVar3 = FUN_00753a74(0x20);
                    /* try { // try from 00346c0c to 00346c1b has its CatchHandler @ 00346c70 */
      FUN_002fd2b0(auStack_40,"Failed to compute forward");
      FUN_00374b08(uVar3,auStack_40,
                   "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/dsp/src/krisp_dsp_dftkiss.cpp"
                   ,0x2d,"computeForward");
      if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 00346c50 to 00346c67 has its CatchHandler @ 00346c68 */
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar3,PTR_PTR_007a11f0,PTR_FUN_007a11f8);
      }
    }
    else if (*(long *)(lVar1 + 0x28) == local_28) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00346cbc  FUN_00346cbc =====

void FUN_00346cbc(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00759c3c(0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  *param_1 = puVar1;
  return;
}


// ===== 00346ce8  FUN_00346ce8 =====

void FUN_00346ce8(undefined8 *param_1)

{
  long lVar1;
  void *__ptr;
  long *plVar2;
  
  __ptr = (void *)*param_1;
  *param_1 = 0;
  if (__ptr == (void *)0x0) {
    return;
  }
  plVar2 = *(long **)((long)__ptr + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    free(__ptr);
    return;
  }
  free(__ptr);
  return;
}


// ===== 00346d5c  FUN_00346d5c =====

void FUN_00346d5c(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 local_50;
  long *plStack_48;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  plVar1 = (long *)*param_2;
  if (param_2[1] - (long)plVar1 == 0x10) {
    if (*plVar1 == 1) {
      if (plVar1[1] == 0) {
        uVar4 = FUN_00753a74(0x20);
                    /* try { // try from 00346f10 to 00346f1f has its CatchHandler @ 00346fdc */
        FUN_002fd2b0(&local_50,"Signal size must be greater than 0");
                    /* try { // try from 00346f24 to 00346f5b has its CatchHandler @ 00346fcc */
        FUN_00374ee0(uVar4,&local_50);
        if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
          FUN_00753c5c(uVar4,PTR_PTR_007a1338,PTR_FUN_007a11f8);
        }
      }
      else {
        FUN_00347078(&local_50);
        plVar1 = plStack_48;
        uVar4 = local_50;
        puVar5 = (undefined8 *)*param_1;
        local_50 = 0;
        plStack_48 = (long *)0x0;
        plVar6 = (long *)puVar5[1];
        puVar5[1] = plVar1;
        *puVar5 = uVar4;
        if ((plVar6 != (long *)0x0) &&
           (lVar3 = FUN_00755c50(0xffffffffffffffff,plVar6 + 1), lVar3 == 0)) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          FUN_0071245c(plVar6);
        }
        plVar1 = plStack_48;
        if ((plStack_48 != (long *)0x0) &&
           (lVar3 = FUN_00755c50(0xffffffffffffffff,plStack_48 + 1), lVar3 == 0)) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
          FUN_0071245c(plVar1);
        }
        if (*(long *)*param_1 == 0) {
          uVar4 = FUN_00753a74(0x20);
                    /* try { // try from 00346f6c to 00346f7b has its CatchHandler @ 00346fc8 */
          FUN_002fd2b0(&local_50,"Failed to create dfti descriptor");
                    /* try { // try from 00346f80 to 00346fb7 has its CatchHandler @ 00346fb8 */
          FUN_00374ee0(uVar4,&local_50);
          if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
            FUN_00753c5c(uVar4,PTR_PTR_007a1338,PTR_FUN_007a11f8);
          }
        }
        else if (*(long *)(lVar2 + 0x28) == local_38) {
          return;
        }
      }
    }
    else {
      uVar4 = FUN_00753a74(0x20);
                    /* try { // try from 00346eb4 to 00346ec3 has its CatchHandler @ 00346ff0 */
      FUN_002fd2b0(&local_50,"KISS FFT does not support batching yet");
                    /* try { // try from 00346ec8 to 00346eff has its CatchHandler @ 00346fe0 */
      FUN_00374ee0(uVar4,&local_50);
      if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar4,PTR_PTR_007a1338,PTR_FUN_007a11f8);
      }
    }
  }
  else {
    uVar4 = FUN_00753a74(0x20);
                    /* try { // try from 00346e58 to 00346e67 has its CatchHandler @ 00347010 */
    FUN_002fd2b0(&local_50,"DFT must have 2 dimensions: batchSize x signalSize");
                    /* try { // try from 00346e6c to 00346ea3 has its CatchHandler @ 00346ff4 */
    FUN_00374ee0(uVar4,&local_50);
    if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar4,PTR_PTR_007a1338,PTR_FUN_007a11f8);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00347038  FUN_00347038 =====

void FUN_00347038(void)

{
  return;
}


// ===== 0034703c  FUN_0034703c =====

void FUN_0034703c(void)

{
  return;
}


// ===== 00347040  FUN_00347040 =====

void FUN_00347040(undefined8 *param_1,long *param_2,long *param_3)

{
  FUN_00346ac4(*param_1,*param_2,param_2[1] - *param_2 >> 2,*param_3,param_3[1] - *param_3 >> 3);
  return;
}


// ===== 00347064  FUN_00347064 =====

void FUN_00347064(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00347074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)*param_1 + 0x20))();
  return;
}


// ===== 00347078  FUN_00347078 =====

void FUN_00347078(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined8 *)FUN_00759c3c(0x30);
  *puVar1 = &PTR_FUN_00760a38;
  puVar1[1] = param_2;
                    /* try { // try from 003470a8 to 003470af has its CatchHandler @ 0034711c */
  FUN_0036c290(puVar1 + 4);
  uVar2 = FUN_00347130(param_2 & 0xffffffff,0);
  puVar1[2] = uVar2;
  uVar2 = FUN_00347130(param_2 & 0xffffffff,1);
  *param_1 = puVar1;
  puVar1[3] = uVar2;
                    /* try { // try from 003470d4 to 003470db has its CatchHandler @ 00347100 */
  puVar3 = (undefined8 *)FUN_00759c3c(0x20);
  puVar3[2] = 0;
  puVar3[3] = puVar1;
  *puVar3 = &PTR_FUN_00760a90;
  puVar3[1] = 0;
  param_1[1] = puVar3;
  return;
}


// ===== 00347130  FUN_00347130 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_00347130(uint param_1,uint param_2)

{
  long lVar1;
  int iVar2;
  float *pfVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  undefined8 *puVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  uint *puVar16;
  long lVar17;
  float *pfVar18;
  undefined8 uVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  long lVar25;
  undefined1 auVar26 [16];
  undefined8 uVar29;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  long lVar30;
  double dVar31;
  long lVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  long lVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  int local_180;
  int iStack_17c;
  int iStack_178;
  int iStack_174;
  double local_168;
  double local_160;
  double local_158;
  double dStack_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80 [2];
  
  if ((param_1 & 1) != 0) {
    fwrite("Real FFT optimization must be even.\n",0x24,1,*(FILE **)PTR_stderr_007a1438);
    return (undefined8 *)0x0;
  }
  uVar4 = (int)param_1 >> 1;
  uVar14 = (ulong)uVar4;
  iVar2 = param_1 + uVar4;
  uVar11 = -(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 | uVar14 << 3;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 1;
  }
  puVar10 = (undefined8 *)malloc(uVar11 + (long)(iVar2 >> 1) * 8 + 0x120);
  if (puVar10 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  dVar31 = (double)(int)uVar4;
  puVar16 = (uint *)(puVar10 + 3);
  *puVar16 = uVar4;
  lVar17 = (long)puVar16 + uVar11 + 0x108;
  *(uint *)((long)puVar10 + 0x1c) = param_2;
  lVar1 = lVar17 + (long)(int)uVar4 * 8;
  *puVar10 = puVar16;
  puVar10[1] = lVar17;
  puVar10[2] = lVar1;
  if (0 < (int)uVar4) {
    pfVar3 = (float *)(puVar10 + 0x24);
    if (param_2 == 0) {
      if (3 < uVar4) {
        uVar11 = uVar14 & 0x7ffffffc;
        uVar13 = uVar11;
        pfVar18 = pfVar3;
        uVar19 = _DAT_002002e0;
        uVar29 = _UNK_002002e8;
        do {
          local_180 = (int)uVar19;
          iStack_17c = (int)((ulong)uVar19 >> 0x20);
          auVar37._0_8_ = (long)local_180;
          auVar37._8_8_ = (long)iStack_17c;
          auVar37 = NEON_scvtf(auVar37,8);
          iStack_178 = (int)uVar29;
          iStack_174 = (int)((ulong)uVar29 >> 0x20);
          auVar23._0_8_ = (long)iStack_178;
          auVar23._8_8_ = (long)iStack_174;
          auVar23 = NEON_scvtf(auVar23,8);
          sincos((auVar23._0_8_ * -6.283185307179586) / dVar31,&local_e0,&local_e8);
          dVar8 = local_e8;
          sincos((auVar23._8_8_ * -6.283185307179586) / dVar31,&local_d0,&local_d8);
          dVar20 = local_d8;
          sincos((auVar37._0_8_ * -6.283185307179586) / dVar31,&local_100,&local_108);
          dVar9 = local_108;
          sincos((auVar37._8_8_ * -6.283185307179586) / dVar31,&local_f0,&local_f8);
          uVar13 = uVar13 - 4;
          *pfVar18 = (float)dVar9;
          pfVar18[1] = (float)local_100;
          pfVar18[2] = (float)local_f8;
          pfVar18[3] = (float)local_f0;
          pfVar18[4] = (float)dVar8;
          pfVar18[5] = (float)local_e0;
          pfVar18[6] = (float)dVar20;
          pfVar18[7] = (float)local_d0;
          pfVar18 = pfVar18 + 8;
          auVar34._0_8_ = CONCAT44(iStack_17c + 4,local_180 + 4);
          auVar34._8_4_ = iStack_178 + 4;
          auVar34._12_4_ = iStack_174 + 4;
          uVar29 = auVar34._8_8_;
          uVar19 = auVar34._0_8_;
        } while (uVar13 != 0);
        dVar9 = DAT_001b7018;
        if (uVar11 == uVar14) goto LAB_003474e8;
      }
      else {
        uVar11 = 0;
        dVar9 = DAT_001b7018;
      }
      do {
        sincos(((double)(int)uVar11 * dVar9) / dVar31,&local_110,&local_118);
        *(ulong *)(pfVar3 + uVar11 * 2) = CONCAT44((float)local_110,(float)local_118);
        uVar11 = uVar11 + 1;
      } while (uVar14 != uVar11);
    }
    else {
      if (3 < uVar4) {
        uVar11 = uVar14 & 0x7ffffffc;
        uVar13 = uVar11;
        pfVar18 = pfVar3;
        uVar19 = _DAT_002002e0;
        uVar29 = _UNK_002002e8;
        do {
          local_180 = (int)uVar19;
          iStack_17c = (int)((ulong)uVar19 >> 0x20);
          auVar21._0_8_ = (long)local_180;
          auVar21._8_8_ = (long)iStack_17c;
          auVar37 = NEON_scvtf(auVar21,8);
          iStack_178 = (int)uVar29;
          iStack_174 = (int)((ulong)uVar29 >> 0x20);
          auVar22._0_8_ = (long)iStack_178;
          auVar22._8_8_ = (long)iStack_174;
          auVar23 = NEON_scvtf(auVar22,8);
          sincos((auVar23._0_8_ * 6.283185307179586) / dVar31,&local_90,&local_98);
          dVar8 = local_98;
          sincos((auVar23._8_8_ * 6.283185307179586) / dVar31,local_80,&local_88);
          dVar20 = local_88;
          sincos((auVar37._0_8_ * 6.283185307179586) / dVar31,&local_b0,&local_b8);
          dVar9 = local_b8;
          sincos((auVar37._8_8_ * 6.283185307179586) / dVar31,&local_a0,&local_a8);
          uVar13 = uVar13 - 4;
          *pfVar18 = (float)dVar9;
          pfVar18[1] = (float)local_b0;
          pfVar18[2] = (float)local_a8;
          pfVar18[3] = (float)local_a0;
          pfVar18[4] = (float)dVar8;
          pfVar18[5] = (float)local_90;
          pfVar18[6] = (float)dVar20;
          pfVar18[7] = (float)local_80[0];
          pfVar18 = pfVar18 + 8;
          auVar26._0_8_ = CONCAT44(iStack_17c + 4,local_180 + 4);
          auVar26._8_4_ = iStack_178 + 4;
          auVar26._12_4_ = iStack_174 + 4;
          uVar29 = auVar26._8_8_;
          uVar19 = auVar26._0_8_;
        } while (uVar13 != 0);
        dVar9 = DAT_001b7160;
        if (uVar11 == uVar14) goto LAB_003474e8;
      }
      else {
        uVar11 = 0;
        dVar9 = DAT_001b7160;
      }
      do {
        sincos(((double)(int)uVar11 * dVar9) / dVar31,&local_c0,&local_c8);
        *(ulong *)(pfVar3 + uVar11 * 2) = CONCAT44((float)local_c0,(float)local_c8);
        uVar11 = uVar11 + 1;
      } while (uVar14 != uVar11);
    }
  }
LAB_003474e8:
  uVar12 = 4;
  do {
    while( true ) {
      iVar2 = 0;
      uVar15 = (uint)uVar14;
      if (uVar12 != 0) {
        iVar2 = (int)uVar15 / (int)uVar12;
      }
      if (uVar15 == iVar2 * uVar12) break;
      uVar6 = uVar12 + 2;
      if (uVar12 == 2) {
        uVar6 = 3;
      }
      uVar5 = 2;
      if (uVar12 != 4) {
        uVar5 = uVar6;
      }
      uVar12 = uVar15;
      if ((double)(int)uVar5 <= (double)(long)SQRT(dVar31)) {
        uVar12 = uVar5;
      }
    }
    uVar6 = 0;
    if (uVar12 != 0) {
      uVar6 = (int)uVar15 / (int)uVar12;
    }
    uVar14 = (ulong)uVar6;
    puVar16[2] = uVar12;
    puVar16[3] = uVar6;
    puVar16 = puVar16 + 2;
  } while (1 < (int)uVar6);
  if (1 < (int)uVar4) {
    uVar11 = (ulong)(uVar4 >> 1);
    if (uVar4 < 8) {
      uVar13 = 0;
      dVar9 = DAT_001b7080;
    }
    else {
      auVar37 = NEON_fmov(0x3fe0000000000000,8);
      uVar13 = uVar11 & 0x3ffffffc;
      lVar17 = (long)(int)uVar4 * 0x10 + 0x120;
      uVar14 = uVar13;
      lVar25 = _DAT_00200740;
      lVar30 = _UNK_00200748;
      lVar32 = _DAT_002003a0;
      lVar36 = _UNK_002003a8;
      do {
        local_180 = (int)lVar25;
        iStack_178 = (int)lVar30;
        auVar23 = NEON_cmeq(ZEXT416(param_2),ZEXT816(0),4);
        auVar24._0_4_ = auVar23._0_4_;
        auVar24._4_4_ = auVar24._0_4_;
        auVar24._8_4_ = auVar24._0_4_;
        auVar24._12_4_ = auVar24._0_4_;
        auVar33._0_8_ = (long)((int)lVar32 + 1);
        auVar33._8_8_ = (long)((int)lVar36 + 1);
        auVar27._0_8_ = (long)(local_180 + 1);
        auVar27._8_8_ = (long)(iStack_178 + 1);
        auVar34 = NEON_scvtf(auVar33,8);
        auVar23 = NEON_scvtf(auVar27,8);
        auVar35._0_8_ = (auVar34._0_8_ / dVar31 + auVar37._0_8_) * -3.141592653589793;
        auVar35._8_8_ = (auVar34._8_8_ / dVar31 + auVar37._8_8_) * -3.141592653589793;
        auVar28._0_8_ = (auVar23._0_8_ / dVar31 + auVar37._0_8_) * -3.141592653589793;
        auVar28._8_8_ = (auVar23._8_8_ / dVar31 + auVar37._8_8_) * -3.141592653589793;
        auVar38._0_8_ = -auVar35._0_8_;
        auVar38._8_8_ = -auVar35._8_8_;
        auVar34 = NEON_bif(auVar35,auVar38,auVar24,1);
        auVar7._8_4_ = SUB84(-auVar28._8_8_,0);
        auVar7._0_8_ = -auVar28._0_8_;
        auVar7._12_4_ = (int)((ulong)-auVar28._8_8_ >> 0x20);
        auVar23 = NEON_bsl(auVar24,auVar28,auVar7,1);
        sincos(auVar23._0_8_,&local_130,&local_138);
        sincos(auVar23._8_8_,&local_120,&local_128);
        sincos(auVar34._0_8_,&dStack_150,&local_158);
        sincos(auVar34._8_8_,&local_140,&local_148);
        pfVar3 = (float *)((long)puVar10 + lVar17);
        uVar14 = uVar14 - 4;
        lVar17 = lVar17 + 0x20;
        lVar25 = lVar25 + 4;
        lVar30 = lVar30 + 4;
        lVar32 = lVar32 + 4;
        lVar36 = lVar36 + 4;
        *pfVar3 = (float)local_158;
        pfVar3[1] = (float)dStack_150;
        pfVar3[2] = (float)local_148;
        pfVar3[3] = (float)local_140;
        pfVar3[4] = (float)local_138;
        pfVar3[5] = (float)local_130;
        pfVar3[6] = (float)local_128;
        pfVar3[7] = (float)local_120;
      } while (uVar14 != 0);
      dVar9 = DAT_001b7080;
      if (uVar13 == uVar11) {
        return puVar10;
      }
    }
    do {
      uVar14 = uVar13 + 1;
      dVar20 = (double)(int)uVar14 / dVar31 + 0.5;
      dVar8 = dVar20 * dVar9;
      if (param_2 != 0) {
        dVar8 = -(dVar20 * dVar9);
      }
      sincos(dVar8,&local_160,&local_168);
      *(ulong *)(lVar1 + uVar13 * 8) = CONCAT44((float)local_160,(float)local_168);
      uVar13 = uVar14;
    } while (uVar11 != uVar14);
  }
  return puVar10;
}


// ===== 00347794  FUN_00347794 =====

void FUN_00347794(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_00760a38;
  if ((void *)param_1[2] != (void *)0x0) {
    free((void *)param_1[2]);
    param_1[2] = 0;
  }
  if ((void *)param_1[3] != (void *)0x0) {
    free((void *)param_1[3]);
    param_1[3] = 0;
  }
  plVar2 = (long *)param_1[5];
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 00347814  FUN_00347814 =====

void FUN_00347814(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_00760a38;
  if ((void *)param_1[2] != (void *)0x0) {
    free((void *)param_1[2]);
    param_1[2] = 0;
  }
  if ((void *)param_1[3] != (void *)0x0) {
    free((void *)param_1[3]);
    param_1[3] = 0;
  }
  plVar2 = (long *)param_1[5];
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    free(param_1);
    return;
  }
  free(param_1);
  return;
}


// ===== 003478a0  FUN_003478a0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_003478a0(long *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong local_50;
  undefined8 uStack_48;
  char *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar9 = param_2[1] - *param_2 >> 2;
  if (uVar9 != param_1[1]) {
    local_40 = (char *)FUN_00759c3c(0x28);
    uVar5 = s_Input_size_must_be_equal_to_size_001e48b8._24_8_;
    uVar4 = s_Input_size_must_be_equal_to_size_001e48b8._16_8_;
    uVar3 = s_Input_size_must_be_equal_to_size_001e48b8._0_8_;
    uStack_48 = _UNK_002004e8;
    local_50 = _DAT_002004e0;
    *(undefined8 *)(local_40 + 8) = s_Input_size_must_be_equal_to_size_001e48b8._8_8_;
    *(undefined8 *)local_40 = uVar3;
    *(undefined8 *)(local_40 + 0x18) = uVar5;
    *(undefined8 *)(local_40 + 0x10) = uVar4;
    local_40[0x20] = '\0';
                    /* try { // try from 00347910 to 0034792b has its CatchHandler @ 003479cc */
    FUN_00372794(&local_50,
                 "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/dsp/src/kiss_fft.cpp",0x79,
                 "computeForward");
    if ((local_50 & 1) != 0) {
      free(local_40);
    }
    uVar9 = param_1[1];
  }
  lVar7 = *param_3;
  lVar8 = param_3[1];
  uVar10 = lVar8 - lVar7 >> 3;
  uVar1 = (uVar9 >> 1) + 1;
  if (uVar9 >> 1 < uVar10) {
    if (uVar1 < uVar10) {
      lVar8 = lVar7 + uVar1 * 8;
      param_3[1] = lVar8;
    }
  }
  else {
    FUN_00346998(param_3,uVar1 - uVar10);
    lVar7 = *param_3;
    lVar8 = param_3[1];
  }
  uVar6 = (**(code **)(*param_1 + 0x18))
                    (param_1,*param_2,param_2[1] - *param_2 >> 2,lVar7,lVar8 - lVar7 >> 3);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return uVar6 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003479fc  FUN_003479fc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_003479fc(long param_1,void *param_2,long param_3,float *param_4,long param_5)

{
  int iVar1;
  long lVar2;
  void *__src;
  float *pfVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  undefined8 *puVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulong local_70;
  undefined8 uStack_68;
  char *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if ((param_5 * 2 + -2 != param_3) || (*(long *)(param_1 + 8) != param_3)) {
    local_60 = (char *)FUN_00759c3c(0x28);
    uVar18 = s_Input_size_must_be_equal_to_size_001e48b8._24_8_;
    uVar17 = s_Input_size_must_be_equal_to_size_001e48b8._16_8_;
    uVar12 = s_Input_size_must_be_equal_to_size_001e48b8._0_8_;
    uStack_68 = _UNK_002004e8;
    local_70 = _DAT_002004e0;
    *(undefined8 *)(local_60 + 8) = s_Input_size_must_be_equal_to_size_001e48b8._8_8_;
    *(undefined8 *)local_60 = uVar12;
    *(undefined8 *)(local_60 + 0x18) = uVar18;
    *(undefined8 *)(local_60 + 0x10) = uVar17;
    local_60[0x20] = '\0';
                    /* try { // try from 00347a78 to 00347a93 has its CatchHandler @ 00347c34 */
    FUN_00372794(&local_70,
                 "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/dsp/src/kiss_fft.cpp",199,
                 "computeForward");
    if ((local_70 & 1) != 0) {
      free(local_60);
    }
  }
  puVar8 = *(undefined8 **)(param_1 + 0x10);
  piVar7 = (int *)*puVar8;
  if (piVar7[1] == 0) {
    iVar1 = *piVar7;
    uVar9 = (ulong)iVar1;
    if ((void *)puVar8[1] == param_2) {
      __src = malloc(uVar9 << 3);
      FUN_00348088(__src,param_2,1,piVar7 + 2,piVar7);
      memcpy(param_2,__src,(long)*piVar7 << 3);
      free(__src);
    }
    else {
      FUN_00348088((void *)puVar8[1],param_2,1,piVar7 + 2,piVar7);
    }
    pfVar3 = (float *)puVar8[1];
    fVar10 = *pfVar3;
    fVar11 = pfVar3[1];
    param_4[1] = 0.0;
    (param_4 + uVar9 * 2)[1] = 0.0;
    *param_4 = fVar10 + fVar11;
    param_4[uVar9 * 2] = fVar10 - fVar11;
    if (1 < iVar1) {
      lVar6 = uVar9 * 8;
      lVar5 = puVar8[2];
      lVar4 = 0;
      do {
        lVar6 = lVar6 + -8;
        uVar18 = *(undefined8 *)(lVar5 + lVar4);
        uVar12 = *(undefined8 *)((long)pfVar3 + lVar4 + 8);
        fVar10 = (float)uVar12;
        fVar13 = (float)*(undefined8 *)((long)pfVar3 + lVar6);
        fVar15 = fVar10 + fVar13;
        fVar11 = (float)((ulong)uVar12 >> 0x20);
        fVar14 = (float)((ulong)*(undefined8 *)((long)pfVar3 + lVar6) >> 0x20);
        fVar16 = fVar11 + fVar14;
        fVar10 = fVar10 - fVar13;
        fVar11 = fVar11 - fVar14;
        uVar12 = NEON_ext(CONCAT44(-fVar16,-fVar15),CONCAT44(fVar16,fVar16),4,1);
        uVar17 = NEON_rev64(uVar18,4);
        fVar13 = (float)uVar17 * (float)uVar12 + (float)uVar18 * fVar10;
        fVar10 = (float)((ulong)uVar17 >> 0x20) * (float)((ulong)uVar12 >> 0x20) +
                 (float)((ulong)uVar18 >> 0x20) * fVar10;
        *(ulong *)((long)param_4 + lVar4 + 8) =
             CONCAT44((fVar11 + fVar10) * 0.5,(fVar15 + fVar13) * 0.5);
        lVar4 = lVar4 + 8;
        *(ulong *)((long)param_4 + lVar6) =
             CONCAT44((fVar10 - fVar11) * 0.5,(fVar15 - fVar13) * 0.5);
      } while ((uVar9 & 0xfffffffe) * 4 - lVar4 != 0);
    }
    if (*(long *)(lVar2 + 0x28) == local_58) {
      return 1;
    }
  }
  else {
    fwrite("kiss fft usage error: improper alloc\n",0x25,1,*(FILE **)PTR_stderr_007a1438);
    if (*(long *)(lVar2 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00347c64  FUN_00347c64 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00347c64(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  void *__ptr;
  long lVar6;
  long lVar7;
  ulong uVar8;
  char *pcVar9;
  ulong uVar10;
  void *local_50;
  void *pvStack_48;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar8 = (param_2[1] - *param_2 >> 2) - 2;
  if (uVar8 != param_1[1]) {
    local_40 = (char *)FUN_00759c3c(0x28);
    uVar4 = s_Input_size_must_be_equal_to_size_001e48b8._24_8_;
    uVar3 = s_Input_size_must_be_equal_to_size_001e48b8._16_8_;
    uVar2 = s_Input_size_must_be_equal_to_size_001e48b8._0_8_;
    pvStack_48 = _UNK_002004e8;
    local_50 = _DAT_002004e0;
    *(undefined8 *)(local_40 + 8) = s_Input_size_must_be_equal_to_size_001e48b8._8_8_;
    *(undefined8 *)local_40 = uVar2;
    *(undefined8 *)(local_40 + 0x18) = uVar4;
    *(undefined8 *)(local_40 + 0x10) = uVar3;
    local_40[0x20] = '\0';
                    /* try { // try from 00347cd8 to 00347cf3 has its CatchHandler @ 00347df8 */
    FUN_00372794(&local_50,
                 "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/dsp/src/kiss_fft.cpp",0x85,
                 "computeBackward");
    if (((ulong)local_50 & 1) != 0) {
      free(local_40);
    }
    uVar8 = param_1[1];
  }
  lVar6 = *param_3;
  lVar7 = param_3[1];
  uVar10 = lVar7 - lVar6 >> 2;
  if (uVar8 < uVar10 || uVar8 - uVar10 == 0) {
    if (uVar8 < uVar10) {
      lVar7 = lVar6 + uVar8 * 4;
      param_3[1] = lVar7;
    }
  }
  else {
    FUN_002feac4(param_3,uVar8 - uVar10);
    lVar6 = *param_3;
    lVar7 = param_3[1];
  }
  uVar5 = (**(code **)(*param_1 + 0x28))
                    (param_1,*param_2,param_2[1] - *param_2 >> 3,lVar6,lVar7 - lVar6 >> 2);
  if ((uVar5 & 1) != 0) {
    local_50 = (void *)0x0;
    pvStack_48 = (void *)0x0;
    local_40 = (char *)0x0;
                    /* try { // try from 00347d80 to 00347d8b has its CatchHandler @ 00347de0 */
    FUN_0036cb04(1.0 / (float)(ulong)param_1[1],param_1[4],param_3,&local_50);
    __ptr = (void *)*param_3;
    pcVar9 = (char *)param_3[2];
    param_3[1] = (long)pvStack_48;
    *param_3 = (long)local_50;
    param_3[2] = (long)local_40;
    local_50 = __ptr;
    local_40 = pcVar9;
    if (__ptr != (void *)0x0) {
      pvStack_48 = __ptr;
      free(__ptr);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00347e28  FUN_00347e28 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00347e28(long param_1,float *param_2,long param_3,float *param_4,long param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *__src;
  float *pfVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  int *piVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  ulong local_50;
  undefined8 uStack_48;
  char *local_40;
  long local_38;
  
  lVar5 = tpidr_el0;
  local_38 = *(long *)(lVar5 + 0x28);
  if ((param_3 * 2 + -2 != param_5) || (*(long *)(param_1 + 8) != param_5)) {
    local_40 = (char *)FUN_00759c3c(0x28);
    uVar8 = s_Input_size_must_be_equal_to_size_001e48b8._24_8_;
    uVar7 = s_Input_size_must_be_equal_to_size_001e48b8._16_8_;
    uVar6 = s_Input_size_must_be_equal_to_size_001e48b8._0_8_;
    uStack_48 = _UNK_002004e8;
    local_50 = _DAT_002004e0;
    *(undefined8 *)(local_40 + 8) = s_Input_size_must_be_equal_to_size_001e48b8._8_8_;
    *(undefined8 *)local_40 = uVar6;
    *(undefined8 *)(local_40 + 0x18) = uVar8;
    *(undefined8 *)(local_40 + 0x10) = uVar7;
    local_40[0x20] = '\0';
                    /* try { // try from 00347e9c to 00347eb7 has its CatchHandler @ 00348058 */
    FUN_00372794(&local_50,
                 "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/dsp/src/kiss_fft.cpp",0xce,
                 "computeBackward");
    if ((local_50 & 1) != 0) {
      free(local_40);
    }
  }
  puVar10 = *(undefined8 **)(param_1 + 0x18);
  piVar17 = (int *)*puVar10;
  if (piVar17[1] == 0) {
    fwrite("kiss fft usage error: improper alloc\n",0x25,1,*(FILE **)PTR_stderr_007a1438);
    if (*(long *)(lVar5 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
  }
  else {
    iVar4 = *piVar17;
    uVar12 = (ulong)iVar4;
    pfVar9 = (float *)puVar10[1];
    *pfVar9 = *param_2 + param_2[uVar12 * 2];
    pfVar9[1] = *param_2 - param_2[uVar12 * 2];
    if (1 < iVar4) {
      uVar11 = uVar12 >> 1 & 0x7fffffff;
      pfVar13 = param_2 + 3;
      pfVar14 = pfVar9 + 3;
      param_2 = param_2 + uVar12 * 2 + -1;
      pfVar15 = (float *)(puVar10[2] + 4);
      pfVar16 = pfVar9 + uVar12 * 2 + -1;
      do {
        pfVar1 = pfVar13 + -1;
        fVar18 = *pfVar13;
        uVar11 = uVar11 - 1;
        pfVar2 = param_2 + -1;
        fVar19 = *param_2;
        pfVar13 = pfVar13 + 2;
        pfVar3 = pfVar15 + -1;
        fVar22 = *pfVar15;
        param_2 = param_2 + -2;
        pfVar15 = pfVar15 + 2;
        fVar20 = fVar18 + fVar19;
        fVar23 = *pfVar1 - *pfVar2;
        fVar18 = fVar18 - fVar19;
        fVar21 = *pfVar1 + *pfVar2;
        fVar19 = (float)NEON_fmadd(fVar23,fVar22,fVar20 * *pfVar3);
        fVar20 = (float)NEON_fmadd(fVar23,*pfVar3,-(fVar20 * fVar22));
        pfVar14[-1] = fVar21 + fVar20;
        *pfVar14 = fVar18 + fVar19;
        pfVar14 = pfVar14 + 2;
        pfVar16[-1] = fVar21 - fVar20;
        *pfVar16 = -(fVar18 - fVar19);
        pfVar16 = pfVar16 + -2;
      } while (uVar11 != 0);
    }
    if (pfVar9 == param_4) {
      __src = malloc(uVar12 * 8);
      FUN_00348088(__src,param_4,1,piVar17 + 2,piVar17);
      memcpy(param_4,__src,(long)*piVar17 << 3);
      free(__src);
      if (*(long *)(lVar5 + 0x28) == local_38) {
        return 1;
      }
    }
    else {
      FUN_00348088(param_4,pfVar9,1,piVar17 + 2,piVar17);
      if (*(long *)(lVar5 + 0x28) == local_38) {
        return 1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00348088  FUN_00348088  [FAILED] =====
/* decompilation failed: 
Recoverable Error: Unable to find unique hash for varnode */

// ===== 00349798  FUN_00349798 =====

void FUN_00349798(void *param_1)

{
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 003497bc  FUN_003497bc =====

void FUN_003497bc(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003497cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}


// ===== 003497d4  FUN_003497d4 =====

long FUN_003497d4(long param_1,long param_2)

{
  param_1 = param_1 + 0x18;
  if (*(char **)(param_2 + 8) !=
      "NSt6__ndk110shared_ptrIN5KRISP3DSP3FFTEE27__shared_ptr_default_deleteIS3_NS2_12_GLOBAL__N_18FFT_KISSEEE"
     ) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 003497f0  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 003497f4  FUN_003497f4 =====

bool FUN_003497f4(long param_1,float *param_2,ulong param_3)

{
  ulong uVar1;
  char cVar2;
  float *pfVar3;
  ulong uVar5;
  ulong uVar6;
  double dVar7;
  float fVar8;
  float *pfVar4;
  
  if (param_3 == 0) {
    dVar7 = 0.0;
  }
  else {
    uVar1 = param_3 - 1 & 0x3fffffffffffffff;
    if (uVar1 == 0) {
      dVar7 = 0.0;
      pfVar3 = param_2;
    }
    else {
      uVar1 = uVar1 + 1;
      dVar7 = 0.0;
      pfVar3 = param_2 + 1;
      uVar5 = uVar1 & 0x7ffffffffffffffe;
      uVar6 = uVar5;
      do {
        pfVar4 = pfVar3 + -1;
        fVar8 = *pfVar3;
        uVar6 = uVar6 - 2;
        pfVar3 = pfVar3 + 2;
        dVar7 = dVar7 + (double)*pfVar4 * (double)*pfVar4 + (double)fVar8 * (double)fVar8;
      } while (uVar6 != 0);
      pfVar3 = param_2 + uVar5;
      if (uVar1 == uVar5) goto LAB_00349878;
    }
    do {
      pfVar4 = pfVar3 + 1;
      dVar7 = (double)NEON_fmadd((double)*pfVar3,(double)*pfVar3,dVar7);
      pfVar3 = pfVar4;
    } while (pfVar4 != param_2 + param_3);
  }
LAB_00349878:
  cVar2 = *(char *)(param_1 + 0x58);
  dVar7 = dVar7 / (double)param_3;
  *(double *)(param_1 + 0x60) = dVar7;
  if (cVar2 == '\0') {
    if ((double)*(float *)(param_1 + 0x6c) < dVar7) {
      return false;
    }
    *(undefined1 *)(param_1 + 0x58) = 1;
    return cVar2 == '\0';
  }
  if (dVar7 < (double)*(float *)(param_1 + 0x68) !=
      (NAN(dVar7) || NAN((double)*(float *)(param_1 + 0x68)))) {
    return true;
  }
  *(undefined1 *)(param_1 + 0x58) = 0;
  return cVar2 == '\0';
}


// ===== 003498e0  FUN_003498e0 =====

float FUN_003498e0(long param_1,float *param_2,ulong param_3)

{
  double *pdVar1;
  void *__dest;
  ulong uVar2;
  float *pfVar3;
  ulong uVar5;
  ulong uVar6;
  double *pdVar7;
  double *__src;
  size_t __n;
  double *pdVar8;
  ulong uVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  float *pfVar4;
  
  fVar10 = *(float *)(param_1 + 0x68);
  if ((fVar10 == 0.0 || fVar10 < 0.0 != NAN(fVar10)) ||
     (fVar10 = *(float *)(param_1 + 0x6c), fVar10 == 0.0 || fVar10 < 0.0 != NAN(fVar10))) {
    if (param_3 == 0) {
      dVar12 = 0.0;
    }
    else {
      uVar5 = param_3 - 1 & 0x3fffffffffffffff;
      if (uVar5 == 0) {
        dVar12 = 0.0;
        pfVar3 = param_2;
      }
      else {
        uVar5 = uVar5 + 1;
        dVar12 = 0.0;
        pfVar3 = param_2 + 1;
        uVar6 = uVar5 & 0x7ffffffffffffffe;
        uVar9 = uVar6;
        do {
          pfVar4 = pfVar3 + -1;
          fVar10 = *pfVar3;
          uVar9 = uVar9 - 2;
          pfVar3 = pfVar3 + 2;
          dVar12 = dVar12 + (double)*pfVar4 * (double)*pfVar4 + (double)fVar10 * (double)fVar10;
        } while (uVar9 != 0);
        pfVar3 = param_2 + uVar6;
        if (uVar5 == uVar6) goto LAB_00349aa8;
      }
      do {
        pfVar4 = pfVar3 + 1;
        dVar12 = (double)NEON_fmadd((double)*pfVar3,(double)*pfVar3,dVar12);
        pfVar3 = pfVar4;
      } while (pfVar4 != param_2 + param_3);
    }
LAB_00349aa8:
    dVar12 = dVar12 / (double)param_3;
    *(double *)(param_1 + 0x60) = dVar12;
    if (dVar12 < *(double *)(param_1 + 0x10) != (NAN(dVar12) || NAN(*(double *)(param_1 + 0x10))))
    goto LAB_00349ac0;
  }
  else {
    dVar12 = *(double *)(param_1 + 0x60);
    if (dVar12 < *(double *)(param_1 + 0x10) != (NAN(dVar12) || NAN(*(double *)(param_1 + 0x10)))) {
LAB_00349ac0:
      dVar11 = *(double *)(param_1 + 0x48);
      pdVar8 = *(double **)(param_1 + 0x38);
      goto LAB_00349b20;
    }
  }
  __src = *(double **)(param_1 + 0x30);
  pdVar8 = *(double **)(param_1 + 0x38);
  uVar5 = *(ulong *)(param_1 + 8);
  __n = (long)pdVar8 - (long)__src;
  uVar9 = (long)__n >> 3;
  if (uVar9 < uVar5) {
    if (pdVar8 < *(double **)(param_1 + 0x40)) {
      pdVar7 = pdVar8 + 1;
      *pdVar8 = dVar12;
    }
    else {
      uVar5 = uVar9 + 1;
      if (uVar5 >> 0x3d != 0) {
        FUN_00349cc4((undefined8 *)(param_1 + 0x30));
LAB_00349b5c:
                    /* WARNING: Subroutine does not return */
        FUN_002f9ee0();
      }
      uVar2 = (long)*(double **)(param_1 + 0x40) - (long)__src;
      uVar6 = (long)uVar2 >> 2;
      if (uVar6 <= uVar5) {
        uVar6 = uVar5;
      }
      if (0x7ffffffffffffff7 < uVar2) {
        uVar6 = 0x1fffffffffffffff;
      }
      if (uVar6 == 0) {
        __dest = (void *)0x0;
      }
      else {
        if (uVar6 >> 0x3d != 0) goto LAB_00349b5c;
        __dest = (void *)FUN_00759c3c(uVar6 << 3);
      }
      pdVar8 = (double *)((long)__dest + uVar9 * 8);
      pdVar7 = pdVar8 + 1;
      *pdVar8 = dVar12;
      memcpy(__dest,__src,__n);
      *(void **)(param_1 + 0x30) = __dest;
      *(double **)(param_1 + 0x38) = pdVar7;
      *(void **)(param_1 + 0x40) = (void *)((long)__dest + uVar6 * 8);
      if (__src != (double *)0x0) {
        free(__src);
      }
    }
    *(double **)(param_1 + 0x38) = pdVar7;
    dVar11 = dVar12 + *(double *)(param_1 + 0x48);
    pdVar8 = pdVar7;
  }
  else {
    dVar11 = 0.0;
    uVar9 = *(long *)(param_1 + 0x50) + 1;
    __src[*(long *)(param_1 + 0x50)] = dVar12;
    uVar6 = 0;
    if (uVar5 <= uVar9) {
      uVar6 = uVar5;
    }
    *(ulong *)(param_1 + 0x50) = uVar9 - uVar6;
    if (__src != pdVar8) {
      if (7 < __n - 8) {
        pdVar7 = __src + 1;
        uVar5 = (__n - 8 >> 3) + 1;
        uVar6 = uVar5 & 0x3ffffffffffffffe;
        uVar9 = uVar6;
        do {
          pdVar1 = pdVar7 + -1;
          dVar12 = *pdVar7;
          uVar9 = uVar9 - 2;
          pdVar7 = pdVar7 + 2;
          dVar11 = dVar11 + *pdVar1 + dVar12;
        } while (uVar9 != 0);
        __src = __src + uVar6;
        if (uVar5 == uVar6) goto LAB_00349b1c;
      }
      do {
        pdVar7 = __src + 1;
        dVar11 = dVar11 + *__src;
        __src = pdVar7;
      } while (pdVar7 != pdVar8);
    }
  }
LAB_00349b1c:
  *(double *)(param_1 + 0x48) = dVar11;
LAB_00349b20:
  return (float)(dVar11 / (double)(ulong)((long)pdVar8 - *(long *)(param_1 + 0x30) >> 3));
}


// ===== 00349b60  FUN_00349b60 =====

void FUN_00349b60(float param_1,float param_2,undefined4 param_3,undefined4 param_4,long *param_5,
                 long param_6,ulong param_7)

{
  long *plVar1;
  long *plVar2;
  double *__ptr;
  undefined8 *puVar3;
  undefined8 uVar4;
  void *__ptr_00;
  long lVar5;
  long *plVar6;
  
  plVar1 = param_5 + 3;
  *param_5 = param_6;
  param_5[1] = param_7;
  param_5[3] = (long)plVar1;
  param_5[4] = (long)plVar1;
  param_5[5] = 0;
  param_5[2] = (long)(double)param_1;
  if (param_6 != 0) {
    lVar5 = 0;
    plVar6 = plVar1;
    do {
                    /* try { // try from 00349bb8 to 00349bbf has its CatchHandler @ 00349cb0 */
      plVar2 = (long *)FUN_00759c3c(0x18);
      lVar5 = lVar5 + 1;
      plVar2[1] = (long)plVar1;
      plVar2[2] = 0;
      *plVar2 = (long)plVar6;
      plVar6[1] = (long)plVar2;
      param_5[3] = (long)plVar2;
      param_5[5] = lVar5;
      plVar6 = plVar2;
    } while (param_6 != lVar5);
  }
  plVar6 = param_5 + 6;
  *plVar6 = 0;
  param_5[7] = 0;
  param_5[8] = 0;
                    /* try { // try from 00349bf0 to 00349bf7 has its CatchHandler @ 00349cac */
  __ptr = (double *)FUN_00759c3c(8);
  *__ptr = 0.0;
  param_5[7] = (long)(__ptr + 1);
  param_5[8] = (long)(__ptr + 1);
  param_5[6] = (long)__ptr;
  param_5[9] = (long)(double)param_2;
  param_5[10] = 0;
  *(undefined1 *)(param_5 + 0xb) = 0;
  param_5[0xc] = 0;
  *(undefined4 *)(param_5 + 0xd) = param_3;
  *(undefined4 *)((long)param_5 + 0x6c) = param_4;
  if (1 < param_7) {
    if (param_7 >> 0x3d != 0) {
      uVar4 = FUN_00349cc4(plVar6);
                    /* catch() { ... } // from try @ 00349c38 with catch @ 00349c84 */
      __ptr_00 = (void *)*plVar6;
      if (__ptr_00 != (void *)0x0) {
        param_5[7] = (long)__ptr_00;
        free(__ptr_00);
        FUN_00345a20(plVar1);
                    /* WARNING: Subroutine does not return */
        FUN_00755eac(uVar4);
      }
      FUN_00345a20(plVar1);
                    /* WARNING: Subroutine does not return */
      FUN_00755eac(uVar4);
    }
                    /* try { // try from 00349c38 to 00349c83 has its CatchHandler @ 00349c84 */
    puVar3 = (undefined8 *)FUN_00759c3c(param_7 << 3);
    *puVar3 = 0;
    param_5[6] = (long)puVar3;
    param_5[7] = (long)(puVar3 + 1);
    param_5[8] = (long)(puVar3 + param_7);
    free(__ptr);
    __ptr = (double *)param_5[6];
  }
  *__ptr = (double)param_2;
  return;
}


// ===== 00349cc4  FUN_00349cc4 =====

void FUN_00349cc4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_002f9e60("vector");
}


// ===== 00349cd8  FUN_00349cd8 =====

void FUN_00349cd8(long *param_1,long param_2,long param_3,int param_4,uint param_5)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long *local_58;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_1 = 0;
  if (param_2 != param_3) {
    if (param_4 == 0) {
      uVar4 = 1;
    }
    else {
      if (param_4 != 1) {
        uVar4 = FUN_00753a74(0x20);
                    /* try { // try from 00349e0c to 00349e1b has its CatchHandler @ 00349e78 */
        FUN_002fd2b0(auStack_50,"Invalid resampler channel selected");
                    /* try { // try from 00349e20 to 00349e5b has its CatchHandler @ 00349e5c */
        FUN_00374ee0(uVar4,auStack_50);
        if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
          FUN_00753c5c(uVar4,PTR_PTR_007a1338,PTR_FUN_007a11f8);
        }
        goto LAB_00349edc;
      }
      uVar4 = 2;
    }
    if (4 < param_5) {
      uVar4 = FUN_00753a74(0x20);
                    /* try { // try from 00349dac to 00349dbb has its CatchHandler @ 00349e90 */
      FUN_002fd2b0(auStack_50,"Invalid resampler quality selected");
                    /* try { // try from 00349dc0 to 00349dfb has its CatchHandler @ 00349e7c */
      FUN_00374ee0(uVar4,auStack_50);
      if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar4,PTR_PTR_007a1338,PTR_FUN_007a11f8);
      }
      goto LAB_00349edc;
    }
                    /* try { // try from 00349d28 to 00349d3f has its CatchHandler @ 00349ea0 */
    FUN_0034a09c(&local_58,param_2,param_3,uVar4,param_5);
    plVar2 = local_58;
    plVar3 = (long *)*param_1;
    local_58 = (long *)0x0;
    *param_1 = (long)plVar2;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
      plVar2 = local_58;
      local_58 = (long *)0x0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_00349edc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00349ee0  FUN_00349ee0 =====

void FUN_00349ee0(long *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)*param_1;
  *param_1 = 0;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00349ef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}


// ===== 00349f00  FUN_00349f00 =====

void FUN_00349f00(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  size_t __n;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  void *__dest;
  void *pvVar5;
  uint unaff_w23;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  param_2 = (long *)*param_2;
  if (param_2 == (long *)0x0) {
    pvVar5 = (void *)*param_3;
    lVar1 = param_3[1];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    __n = lVar1 - (long)pvVar5;
    if (__n != 0) {
      if ((long)__n < 0) {
        if (*(long *)(lVar2 + 0x28) != local_48) goto LAB_0034a098;
                    /* try { // try from 0034a018 to 0034a01f has its CatchHandler @ 0034a054 */
        uVar4 = FUN_002febf0(param_1);
                    /* catch() { ... } // from try @ 00349f6c with catch @ 0034a020 */
        if ((local_60[0] & 1) == 0) {
          if (unaff_w23 != 0) {
LAB_0034a048:
            FUN_00753b60(pvVar5);
          }
        }
        else {
          free(local_50);
          if ((unaff_w23 & 1) != 0) goto LAB_0034a048;
        }
        pvVar5 = (void *)*param_1;
        if (pvVar5 != (void *)0x0) {
          param_1[1] = pvVar5;
          free(pvVar5);
        }
        if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
          FUN_00755eac(uVar4);
        }
        goto LAB_0034a098;
      }
                    /* try { // try from 00349fbc to 00349fc3 has its CatchHandler @ 0034a054 */
      __dest = (void *)FUN_00759c3c(__n);
      *param_1 = __dest;
      param_1[1] = __dest;
      param_1[2] = (long)__dest + __n;
      memcpy(__dest,pvVar5,__n);
      param_1[1] = (long)__dest + __n;
    }
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
                    /* try { // try from 00349f40 to 00349f47 has its CatchHandler @ 0034a06c */
    iVar3 = (**(code **)(*param_2 + 0x20))(param_2,param_3,param_1);
    if (iVar3 == 0) {
      uVar4 = FUN_00753a74(0x20);
                    /* try { // try from 00349f58 to 00349f67 has its CatchHandler @ 0034a044 */
      FUN_002fd2b0(local_60,"Resampler::resample failed");
                    /* try { // try from 00349f6c to 00349fa3 has its CatchHandler @ 0034a020 */
      FUN_00374fd0(uVar4,local_60);
      if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar4,PTR_PTR_007a1350,PTR_FUN_007a11f8);
      }
      goto LAB_0034a098;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
LAB_0034a098:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0034a09c  FUN_0034a09c =====

void FUN_0034a09c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00759c3c(0x50);
                    /* try { // try from 0034a0d0 to 0034a0e3 has its CatchHandler @ 0034a0fc */
  FUN_0034a218(uVar1,param_2,param_3,param_4,param_5);
  *param_1 = uVar1;
  return;
}


// ===== 0034a110  FUN_0034a110 =====

void FUN_0034a110(undefined8 param_1,undefined4 param_2)

{
  FUN_0034a118(param_2);
  return;
}


// ===== 0034a118  FUN_0034a118 =====

void FUN_0034a118(uint param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_1 < 5) {
    uVar2 = (ulong)*(uint *)(&DAT_00201d98 + (ulong)param_1 * 4);
    if (*(long *)(lVar1 + 0x28) == local_28) {
      return;
    }
  }
  else {
    uVar3 = FUN_00753a74(0x20);
                    /* try { // try from 0034a178 to 0034a187 has its CatchHandler @ 0034a1ec */
    FUN_002fd2b0(auStack_40,"Invalid resampler quality");
    uVar2 = FUN_00374b08(uVar3,auStack_40,
                         "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/dsp/src/krisp_dsp_resampler_libresample.cpp"
                         ,0x1a,"getQualityAsInt");
    if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 0034a1bc to 0034a1d3 has its CatchHandler @ 0034a1d4 */
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar3,PTR_PTR_007a11f0,PTR_FUN_007a11f8);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


// ===== 0034a218  FUN_0034a218 =====

void FUN_0034a218(undefined8 *param_1,ulong param_2,ulong param_3,undefined8 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  double dVar3;
  
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[3] = (double)param_2;
  param_1[4] = (double)param_3;
  uVar2 = DAT_001b7158;
  *param_1 = &PTR_FUN_00760ae0;
  *(undefined8 *)((long)param_1 + 0x2c) = uVar2;
  *(undefined1 *)((long)param_1 + 0x34) = 1;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
                    /* try { // try from 0034a274 to 0034a293 has its CatchHandler @ 0034a2a8 */
  uVar1 = FUN_0034a118(param_5);
  *(undefined4 *)(param_1 + 5) = uVar1;
  dVar3 = (double)param_1[4] / (double)param_1[3];
  param_1[2] = dVar3;
  uVar2 = FUN_004733fc(dVar3,dVar3);
  param_1[1] = uVar2;
  return;
}


// ===== 0034a2c8  FUN_0034a2c8 =====

void FUN_0034a2c8(long *param_1)

{
  void *__ptr;
  
  *param_1 = (long)(PTR_DAT_007a1448 + 0x10);
  if (param_1[1] != 0) {
                    /* try { // try from 0034a2f0 to 0034a2f3 has its CatchHandler @ 0034a318 */
    FUN_00473c78();
  }
  __ptr = (void *)param_1[7];
  if (__ptr != (void *)0x0) {
    param_1[8] = (long)__ptr;
    free(__ptr);
    return;
  }
  return;
}


// ===== 0034a31c  FUN_0034a31c =====

void FUN_0034a31c(void *param_1)

{
  FUN_0034a2c8();
  free(param_1);
  return;
}


// ===== 0034a340  FUN_0034a340 =====

ulong FUN_0034a340(long param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  void *__dest;
  size_t sVar9;
  ulong uVar10;
  long *plVar11;
  int iVar12;
  ulong uVar13;
  void *pvVar14;
  int iVar15;
  int iVar16;
  int local_6c;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  if (*(double *)(param_1 + 0x10) == 1.0) {
    if (param_3 != param_2) {
      FUN_0031e170(param_3,*param_2,param_2[1],param_2[1] - *param_2 >> 2);
    }
    uVar13 = (ulong)(param_3[1] - *param_3) >> 2;
    if (*(long *)(lVar7 + 0x28) != local_68) goto LAB_0034a5c4;
    goto LAB_0034a3bc;
  }
  plVar11 = (long *)(param_1 + 0x38);
  iVar12 = (int)(*(double *)(param_1 + 0x10) * (double)(ulong)(param_2[1] - *param_2 >> 2));
  uVar13 = (long)*(int *)(param_1 + 0x2c) + (long)iVar12;
  uVar10 = *(long *)(param_1 + 0x40) - *plVar11 >> 2;
  if (uVar13 < uVar10 || uVar13 - uVar10 == 0) {
    if (uVar13 < uVar10) {
      *(ulong *)(param_1 + 0x40) = *plVar11 + uVar13 * 4;
    }
  }
  else {
    FUN_002feac4(plVar11,uVar13 - uVar10);
  }
  uVar13 = (ulong)iVar12;
  uVar10 = param_3[1] - *param_3 >> 2;
  if (uVar13 < uVar10 || uVar13 - uVar10 == 0) {
    if (uVar13 < uVar10) {
      param_3[1] = *param_3 + uVar13 * 4;
    }
  }
  else {
    FUN_002feac4(param_3,uVar13 - uVar10);
  }
  lVar2 = *param_2;
  lVar4 = param_2[1];
  iVar15 = 0;
  lVar3 = *(long *)(param_1 + 0x38);
  lVar5 = *(long *)(param_1 + 0x40);
  uVar13 = 0;
  iVar6 = *(int *)(param_1 + 0x30);
  local_6c = 0;
  do {
    do {
      iVar16 = (int)((ulong)(lVar4 - lVar2) >> 2);
      uVar8 = FUN_0047369c(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8),
                           lVar2 + (long)iVar15 * 4,iVar16 - iVar15,0,&local_6c,
                           lVar3 + (long)iVar6 * 4 + uVar13 * 4,
                           (int)((ulong)(lVar5 - lVar3) >> 2) - (iVar6 + (int)uVar13));
      iVar15 = local_6c + iVar15;
      uVar1 = (uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU)) + (int)uVar13;
      uVar13 = (ulong)uVar1;
    } while (0 < (int)uVar8);
  } while ((uVar8 == 0) && (iVar15 != iVar16));
  if (*(char *)(param_1 + 0x34) == '\0') {
    uVar10 = param_3[1] - *param_3;
    if (uVar10 * 0x40000000 != 0) {
      memmove((void *)*param_3,(void *)*plVar11,(long)(uVar10 * 0x40000000) >> 0x1e);
      uVar10 = param_3[1] - *param_3;
    }
    uVar1 = (*(int *)(param_1 + 0x30) + uVar1) - (int)(uVar10 >> 2);
    *(uint *)(param_1 + 0x30) = uVar1;
    if (uVar1 != 0) {
      __dest = (void *)*plVar11;
      sVar9 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
      pvVar14 = (void *)((long)__dest + ((long)(uVar10 << 0x1e) >> 0x1e));
      goto LAB_0034a5ac;
    }
  }
  else {
    pvVar14 = (void *)*param_3;
    iVar15 = uVar1 - 1;
    *(undefined1 *)(param_1 + 0x34) = 0;
    sVar9 = (-(ulong)(iVar12 - uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar12 - uVar1) << 2) +
            4;
    *(undefined4 *)(param_1 + 0x30) = 1;
    if (0 < (long)sVar9) {
      memset(pvVar14,0,sVar9);
    }
    if (iVar15 == 0) {
      uVar10 = 1;
    }
    else {
      memmove((void *)(sVar9 + (long)pvVar14),*(void **)(param_1 + 0x38),(long)iVar15 << 2);
      uVar10 = (ulong)*(uint *)(param_1 + 0x30);
      if (*(uint *)(param_1 + 0x30) == 0) goto LAB_0034a5b0;
    }
    __dest = (void *)*plVar11;
    sVar9 = -(uVar10 >> 0x1f) & 0xfffffffc00000000 | uVar10 << 2;
    pvVar14 = (void *)((long)__dest + (long)iVar15 * 4);
LAB_0034a5ac:
    memmove(__dest,pvVar14,sVar9);
  }
LAB_0034a5b0:
  if (*(long *)(lVar7 + 0x28) != local_68) {
LAB_0034a5c4:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_0034a3bc:
  return uVar13 & 0xffffffff;
}


// ===== 0034a5c8  FUN_0034a5c8 =====

uint FUN_0034a5c8(long param_1,long param_2,int param_3,long param_4,int param_5)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  iVar4 = 0;
  uVar3 = 0;
  local_5c = 0;
  do {
    do {
      uVar2 = FUN_0047369c(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8),
                           param_2 + (long)iVar4 * 4,param_3 - iVar4,0,&local_5c,
                           param_4 + (ulong)uVar3 * 4,param_5 - uVar3);
      iVar4 = local_5c + iVar4;
      uVar3 = (uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)) + uVar3;
    } while (0 < (int)uVar2);
  } while ((uVar2 == 0) && (iVar4 != param_3));
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0034a68c  FUN_0034a68c =====

undefined8 FUN_0034a68c(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 8) != 0) {
    FUN_00473c78();
  }
  *(undefined1 *)(param_1 + 0x34) = 1;
  uVar1 = FUN_004733fc(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x10),
                       *(undefined4 *)(param_1 + 0x28));
  *(undefined8 *)(param_1 + 8) = uVar1;
  return 1;
}


// ===== 0034a6d8  FUN_0034a6d8 =====

bool FUN_0034a6d8(long param_1)

{
  return *(double *)(param_1 + 0x10) != 1.0;
}


// ===== 0034a6ec  FUN_0034a6ec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0034a6ec(undefined8 param_1,ulong param_2,undefined8 *param_3,ulong param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [15];
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  ulong local_70;
  undefined8 uStack_68;
  char *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (param_2 < 2) {
    local_60 = (char *)FUN_00759c3c(0x28);
    auVar16 = _DAT_00200b70;
    auVar11 = s_Window_size_must_be_greater_than_001e050d._16_16_;
    uVar4 = s_Window_size_must_be_greater_than_001e050d._8_8_;
    uVar2 = s_Window_size_must_be_greater_than_001e050d._0_8_;
    local_60[0x20] = ' ';
    local_60[0x21] = '1';
    uStack_68 = auVar16._8_8_;
    local_70 = auVar16._0_8_;
    local_60[0x22] = '\0';
    *(undefined8 *)(local_60 + 8) = uVar4;
    *(undefined8 *)local_60 = uVar2;
    *(long *)(local_60 + 0x18) = auVar11._8_8_;
    *(long *)(local_60 + 0x10) = auVar11._0_8_;
                    /* try { // try from 0034a75c to 0034a777 has its CatchHandler @ 0034a978 */
    FUN_00372794(&local_70,
                 "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/dsp/src/krisp_dsp_window_functions.cpp"
                 ,0xe,"generateHanningWindowVector");
    if ((local_70 & 1) != 0) {
      free(local_60);
    }
  }
  if (param_2 != param_4) {
    local_60 = (char *)FUN_00759c3c(0x30);
    uVar5 = s_Window_size_must_be_equal_to_out_001e0530._32_8_;
    uVar4 = s_Window_size_must_be_equal_to_out_001e0530._24_8_;
    uVar2 = s_Window_size_must_be_equal_to_out_001e0530._16_8_;
    auVar11 = s_Window_size_must_be_equal_to_out_001e0530._0_16_;
    uStack_68 = SUB168(_DAT_002008f0,8);
    local_70 = SUB168(_DAT_002008f0,0);
    *(long *)(local_60 + 8) = SUB168(s_Window_size_must_be_equal_to_out_001e0530._0_16_,8);
    *(long *)local_60 = auVar11._0_8_;
    *(undefined8 *)(local_60 + 0x18) = uVar4;
    *(undefined8 *)(local_60 + 0x10) = uVar2;
    *(undefined8 *)(local_60 + 0x20) = uVar5;
    local_60[0x28] = '\0';
                    /* try { // try from 0034a7c4 to 0034a7df has its CatchHandler @ 0034a974 */
    FUN_00372794(&local_70,
                 "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/dsp/src/krisp_dsp_window_functions.cpp"
                 ,0xf,"generateHanningWindowVector");
    if ((local_70 & 1) != 0) {
      free(local_60);
    }
  }
  if (param_3 == (undefined8 *)0x0) {
    local_60 = (char *)FUN_00759c3c(0x20);
    auVar16 = _DAT_00200630;
    uVar4 = s_Output_pointer_must_not_be_null_001d37e8._23_8_;
    auVar3 = s_Output_pointer_must_not_be_null_001d37e8._0_15_;
    auVar11[0xf] = s_Output_pointer_must_not_be_null_001d37e8[0xf];
    auVar11[0] = s_Output_pointer_must_not_be_null_001d37e8[0];
    auVar11[1] = s_Output_pointer_must_not_be_null_001d37e8[1];
    auVar11[2] = s_Output_pointer_must_not_be_null_001d37e8[2];
    auVar11[3] = s_Output_pointer_must_not_be_null_001d37e8[3];
    auVar11[4] = s_Output_pointer_must_not_be_null_001d37e8[4];
    auVar11[5] = s_Output_pointer_must_not_be_null_001d37e8[5];
    auVar11[6] = s_Output_pointer_must_not_be_null_001d37e8[6];
    auVar11[7] = s_Output_pointer_must_not_be_null_001d37e8[7];
    auVar11[8] = s_Output_pointer_must_not_be_null_001d37e8[8];
    auVar11[9] = s_Output_pointer_must_not_be_null_001d37e8[9];
    auVar11[10] = s_Output_pointer_must_not_be_null_001d37e8[10];
    auVar11[0xb] = s_Output_pointer_must_not_be_null_001d37e8[0xb];
    auVar11[0xc] = s_Output_pointer_must_not_be_null_001d37e8[0xc];
    auVar11[0xd] = s_Output_pointer_must_not_be_null_001d37e8[0xd];
    auVar11[0xe] = s_Output_pointer_must_not_be_null_001d37e8[0xe];
    uVar2 = CONCAT71(s_Output_pointer_must_not_be_null_001d37e8._16_7_,
                     s_Output_pointer_must_not_be_null_001d37e8[0xf]);
    *(long *)(local_60 + 8) = auVar11._8_8_;
    *(long *)local_60 = auVar3._0_8_;
    *(undefined8 *)(local_60 + 0x17) = uVar4;
    *(undefined8 *)(local_60 + 0xf) = uVar2;
    uStack_68 = auVar16._8_8_;
    local_70 = auVar16._0_8_;
    local_60[0x1f] = '\0';
                    /* try { // try from 0034a828 to 0034a843 has its CatchHandler @ 0034a970 */
    FUN_00372794(&local_70,
                 "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/dsp/src/krisp_dsp_window_functions.cpp"
                 ,0x10,"generateHanningWindowVector");
    if ((local_70 & 1) != 0) {
      free(local_60);
    }
  }
  if (param_2 != 0) {
    dVar13 = DAT_001b7160 / ((double)param_2 + -1.0);
    if (param_2 == 1) {
      uVar6 = 0;
    }
    else {
      auVar15 = NEON_fmov(0xbfe0000000000000,8);
      auVar11 = NEON_fmov(0x3fe0000000000000,8);
      uVar6 = param_2 & 0xfffffffffffffffe;
      uVar7 = uVar6;
      puVar8 = param_3;
      auVar16 = _DAT_002003a0;
      do {
        auVar12 = NEON_ucvtf(auVar16,8);
        lVar14 = auVar16._0_8_;
        dVar10 = cos(auVar12._8_8_ * dVar13);
        dVar9 = cos(auVar12._0_8_ * dVar13);
        uVar7 = uVar7 - 2;
        auVar16._8_8_ = auVar16._8_8_ + 2;
        auVar16._0_8_ = lVar14 + 2;
        *puVar8 = CONCAT44((float)(auVar11._8_8_ + auVar15._8_8_ * dVar10),
                           (float)(auVar11._0_8_ + auVar15._0_8_ * dVar9));
        puVar8 = puVar8 + 1;
      } while (uVar7 != 0);
      if (uVar6 == param_2) goto LAB_0034a944;
    }
    do {
      dVar10 = cos(dVar13 * (double)uVar6);
      dVar10 = (double)NEON_fmadd(dVar10,0xbfe0000000000000,0x3fe0000000000000);
      *(float *)((long)param_3 + uVar6 * 4) = (float)dVar10;
      uVar6 = uVar6 + 1;
    } while (param_2 != uVar6);
  }
LAB_0034a944:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0034a9a8  FUN_0034a9a8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0034a9a8(undefined8 param_1,ulong param_2,undefined8 *param_3,ulong param_4)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [15];
  undefined1 auVar4 [15];
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  long lVar19;
  long lVar20;
  ulong local_70;
  undefined8 uStack_68;
  undefined8 *local_60;
  long local_58;
  long lVar15;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (param_2 < 2) {
    local_60 = (undefined8 *)FUN_00759c3c(0x28);
    auVar17 = _DAT_00200b70;
    uVar6 = s_Window_size_must_be_greater_than_001e050d._24_8_;
    uVar5 = s_Window_size_must_be_greater_than_001e050d._16_8_;
    auVar14 = s_Window_size_must_be_greater_than_001e050d._0_16_;
    *(undefined2 *)(local_60 + 4) = 0x3120;
    uStack_68 = auVar17._8_8_;
    local_70 = auVar17._0_8_;
    *(undefined1 *)((long)local_60 + 0x22) = 0;
    local_60[1] = auVar14._8_8_;
    *local_60 = auVar14._0_8_;
    local_60[3] = uVar6;
    local_60[2] = uVar5;
                    /* try { // try from 0034aa18 to 0034aa33 has its CatchHandler @ 0034acdc */
    FUN_00372794(&local_70,
                 "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/dsp/src/krisp_dsp_window_functions.cpp"
                 ,0x51,"generateVorbisWindowVector");
    if ((local_70 & 1) != 0) {
      free(local_60);
    }
  }
  if (param_2 != param_4) {
    local_60 = (undefined8 *)FUN_00759c3c(0x30);
    uVar5 = s_Window_size_must_be_equal_to_out_001e0530._32_8_;
    auVar17 = s_Window_size_must_be_equal_to_out_001e0530._16_16_;
    auVar14 = s_Window_size_must_be_equal_to_out_001e0530._0_16_;
    uStack_68 = _UNK_002008f8;
    local_70 = _DAT_002008f0;
    local_60[1] = SUB168(s_Window_size_must_be_equal_to_out_001e0530._0_16_,8);
    *local_60 = auVar14._0_8_;
    local_60[3] = auVar17._8_8_;
    local_60[2] = auVar17._0_8_;
    local_60[4] = uVar5;
    *(undefined1 *)(local_60 + 5) = 0;
                    /* try { // try from 0034aa80 to 0034aa9b has its CatchHandler @ 0034acd8 */
    FUN_00372794(&local_70,
                 "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/dsp/src/krisp_dsp_window_functions.cpp"
                 ,0x52,"generateVorbisWindowVector");
    if ((local_70 & 1) != 0) {
      free(local_60);
    }
  }
  if (param_3 == (undefined8 *)0x0) {
    local_60 = (undefined8 *)FUN_00759c3c(0x20);
    uStack_68 = _UNK_00200638;
    local_70 = _DAT_00200630;
    auVar4 = s_Output_pointer_must_not_be_null_001d37e8._16_15_;
    auVar3 = s_Output_pointer_must_not_be_null_001d37e8._0_15_;
    auVar14[0xf] = s_Output_pointer_must_not_be_null_001d37e8[0xf];
    auVar14[0] = s_Output_pointer_must_not_be_null_001d37e8[0];
    auVar14[1] = s_Output_pointer_must_not_be_null_001d37e8[1];
    auVar14[2] = s_Output_pointer_must_not_be_null_001d37e8[2];
    auVar14[3] = s_Output_pointer_must_not_be_null_001d37e8[3];
    auVar14[4] = s_Output_pointer_must_not_be_null_001d37e8[4];
    auVar14[5] = s_Output_pointer_must_not_be_null_001d37e8[5];
    auVar14[6] = s_Output_pointer_must_not_be_null_001d37e8[6];
    auVar14[7] = s_Output_pointer_must_not_be_null_001d37e8[7];
    auVar14[8] = s_Output_pointer_must_not_be_null_001d37e8[8];
    auVar14[9] = s_Output_pointer_must_not_be_null_001d37e8[9];
    auVar14[10] = s_Output_pointer_must_not_be_null_001d37e8[10];
    auVar14[0xb] = s_Output_pointer_must_not_be_null_001d37e8[0xb];
    auVar14[0xc] = s_Output_pointer_must_not_be_null_001d37e8[0xc];
    auVar14[0xd] = s_Output_pointer_must_not_be_null_001d37e8[0xd];
    auVar14[0xe] = s_Output_pointer_must_not_be_null_001d37e8[0xe];
    auVar17[1] = s_Output_pointer_must_not_be_null_001d37e8[0x10];
    auVar17[2] = s_Output_pointer_must_not_be_null_001d37e8[0x11];
    auVar17[3] = s_Output_pointer_must_not_be_null_001d37e8[0x12];
    auVar17[4] = s_Output_pointer_must_not_be_null_001d37e8[0x13];
    auVar17[5] = s_Output_pointer_must_not_be_null_001d37e8[0x14];
    auVar17[6] = s_Output_pointer_must_not_be_null_001d37e8[0x15];
    auVar17[7] = s_Output_pointer_must_not_be_null_001d37e8[0x16];
    auVar17[8] = s_Output_pointer_must_not_be_null_001d37e8[0x17];
    auVar17[9] = s_Output_pointer_must_not_be_null_001d37e8[0x18];
    auVar17[10] = s_Output_pointer_must_not_be_null_001d37e8[0x19];
    auVar17[0xb] = s_Output_pointer_must_not_be_null_001d37e8[0x1a];
    auVar17[0xc] = s_Output_pointer_must_not_be_null_001d37e8[0x1b];
    auVar17[0xd] = s_Output_pointer_must_not_be_null_001d37e8[0x1c];
    auVar17[0xe] = s_Output_pointer_must_not_be_null_001d37e8[0x1d];
    auVar17[0xf] = s_Output_pointer_must_not_be_null_001d37e8[0x1e];
    auVar17[0] = s_Output_pointer_must_not_be_null_001d37e8[0xf];
    local_60[1] = auVar14._8_8_;
    *local_60 = auVar3._0_8_;
    *(long *)((long)local_60 + 0x17) = auVar4._7_8_;
    *(long *)((long)local_60 + 0xf) = auVar17._0_8_;
    *(undefined1 *)((long)local_60 + 0x1f) = 0;
                    /* try { // try from 0034aae4 to 0034aaff has its CatchHandler @ 0034acd4 */
    FUN_00372794(&local_70,
                 "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/dsp/src/krisp_dsp_window_functions.cpp"
                 ,0x53,"generateVorbisWindowVector");
    if ((local_70 & 1) != 0) {
      free(local_60);
    }
  }
  if (param_2 != 0) {
    dVar18 = DAT_001b71e8 / (double)param_2;
    if (param_2 < 4) {
      uVar7 = 0;
      dVar10 = DAT_001b7180;
    }
    else {
      uVar7 = param_2 & 0xfffffffffffffffc;
      uVar8 = uVar7;
      puVar9 = param_3;
      auVar16 = _DAT_002003a0;
      lVar19 = _DAT_00200740;
      lVar20 = _UNK_00200748;
      do {
        lVar15 = auVar16._0_8_;
        auVar14 = NEON_ucvtf(auVar16,8);
        auVar2._8_8_ = lVar20;
        auVar2._0_8_ = lVar19;
        auVar17 = NEON_ucvtf(auVar2,8);
        dVar10 = sin(auVar14._8_8_ * dVar18);
        dVar13 = sin(auVar14._0_8_ * dVar18);
        dVar11 = sin(auVar17._8_8_ * dVar18);
        dVar12 = sin(auVar17._0_8_ * dVar18);
        dVar11 = sin(dVar11 * dVar11 * 1.5707963267948966);
        dVar12 = sin(dVar12 * dVar12 * 1.5707963267948966);
        dVar10 = sin(dVar10 * dVar10 * 1.5707963267948966);
        dVar13 = sin(dVar13 * dVar13 * 1.5707963267948966);
        uVar8 = uVar8 - 4;
        lVar19 = lVar19 + 4;
        lVar20 = lVar20 + 4;
        puVar9[1] = CONCAT44((float)dVar11,(float)dVar12);
        *puVar9 = CONCAT44((float)dVar10,(float)dVar13);
        auVar16._8_8_ = auVar16._8_8_ + 4;
        auVar16._0_8_ = lVar15 + 4;
        puVar9 = puVar9 + 2;
      } while (uVar8 != 0);
      dVar10 = DAT_001b7180;
      if (uVar7 == param_2) goto LAB_0034aca8;
    }
    do {
      dVar13 = sin(dVar18 * (double)uVar7);
      dVar13 = sin(dVar13 * dVar13 * dVar10);
      *(float *)((long)param_3 + uVar7 * 4) = (float)dVar13;
      uVar7 = uVar7 + 1;
    } while (param_2 != uVar7);
  }
LAB_0034aca8:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


// ===== 0034ad0c  FUN_0034ad0c =====

void FUN_0034ad0c(void)

{
  FUN_0034a9a8();
  return;
}


// ===== 0034ad20  FUN_0034ad20 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0034ad20(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((*param_3 == 0) || (*(long *)(*param_3 + 0x30) == 0)) {
    uVar4 = FUN_00753a74(0x20);
                    /* try { // try from 0034adf4 to 0034ae03 has its CatchHandler @ 0034af4c */
    FUN_002fd2b0(&local_50,"InferenceEngine::loadNetwork: Invalid ExecutableNetworkConfiguration");
                    /* try { // try from 0034ae08 to 0034ae43 has its CatchHandler @ 0034af30 */
    FUN_00374ee0(uVar4,&local_50);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar4,PTR_PTR_007a1338,PTR_FUN_007a11f8);
    }
  }
  else {
    if ((DAT_007aaf68 & 1) == 0) {
      iVar2 = FUN_00739c1c(&DAT_007aaf68);
      if (iVar2 != 0) {
        DAT_007aafb0 = 0;
        DAT_007aafb8 = 0x3f800000;
        uRam00000000007aafa8 = 0;
        _DAT_007aafa0 = 0;
        uRam00000000007aaf98 = 0;
        _DAT_007aaf90 = 0;
        uRam00000000007aaf88 = 0;
        _DAT_007aaf80 = 0;
        uRam00000000007aaf78 = 0;
        _DAT_007aaf70 = 0;
        __cxa_atexit(PTR_FUN_007a1450,&DAT_007aaf70,&PTR_LOOP_0075ec90);
        FUN_00739d60(&DAT_007aaf68);
      }
    }
    piVar3 = (int *)*param_3;
    if (*piVar3 == 2) {
      FUN_0034afec(&local_50,piVar3,0,&DAT_007aaf70);
      param_1[1] = uStack_48;
      *param_1 = local_50;
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return;
      }
    }
    else if (*piVar3 == 0) {
      if (*(long *)(lVar1 + 0x28) == local_38) {
        FUN_00351214(piVar3,&DAT_007aaf70);
        return;
      }
    }
    else {
      uVar4 = FUN_00753a74(0x20);
                    /* try { // try from 0034aec8 to 0034aed7 has its CatchHandler @ 0034af2c */
      FUN_002fd2b0(&local_50,"InferenceEngine::loadNetwork: Unsupported engine type");
                    /* try { // try from 0034aedc to 0034af17 has its CatchHandler @ 0034af18 */
      FUN_00374ee0(uVar4,&local_50);
      if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar4,PTR_PTR_007a1338,PTR_FUN_007a11f8);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0034af78  FUN_0034af78 =====

void FUN_0034af78(long param_1)

{
  undefined8 *__ptr;
  void *pvVar1;
  
  __ptr = (undefined8 *)*(void **)(param_1 + 0x38);
  while (__ptr != (undefined8 *)0x0) {
    pvVar1 = (void *)*__ptr;
    if (__ptr[7] != 0) {
      FUN_0071245c();
    }
    if ((*(byte *)(__ptr + 2) & 1) != 0) {
      free((void *)__ptr[4]);
    }
    free(__ptr);
    __ptr = (undefined8 *)pvVar1;
  }
  pvVar1 = *(void **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (pvVar1 != (void *)0x0) {
    free(pvVar1);
  }
  FUN_00715bac(param_1);
  return;
}


// ===== 0034afec  FUN_0034afec =====

/* WARNING: Type propagation algorithm not settling */

void FUN_0034afec(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long unaff_x19;
  long *local_e8;
  long *local_e0;
  long *local_d8;
  long *local_d0;
  long *local_c8;
  long *local_c0;
  long *local_b8;
  long *local_b0;
  long local_a8;
  long *local_a0;
  byte local_98;
  undefined7 uStack_97;
  char cStack_90;
  undefined7 uStack_8f;
  undefined4 uStack_88;
  uint uStack_84;
  byte local_78 [16];
  void *local_68;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  FUN_0034cc1c(local_78,param_2);
                    /* try { // try from 0034b02c to 0034b037 has its CatchHandler @ 0034b790 */
  FUN_0034cc1c(&local_98,param_2);
                    /* try { // try from 0034b038 to 0034b04b has its CatchHandler @ 0034b7c0 */
  FUN_00715bcc(param_4);
  lVar5 = FUN_0034be54(param_4 + 0x28,&local_98);
  if (lVar5 == 0) {
    lVar9 = 0;
    FUN_00715bf8(param_4);
  }
  else {
    lVar9 = *(long *)(lVar5 + 0x30);
    unaff_x19 = *(long *)(lVar5 + 0x38);
    if (unaff_x19 != 0) {
      FUN_00755c20(1,unaff_x19 + 0x10);
    }
    FUN_00715bf8(param_4);
  }
  if ((local_98 & 1) != 0) {
    free((void *)CONCAT44(uStack_84,uStack_88));
  }
  local_a8 = 0;
  local_a0 = (long *)0x0;
  if (lVar5 == 0) {
LAB_0034b14c:
    local_b8 = (long *)0x0;
    local_b0 = (long *)0x0;
                    /* try { // try from 0034b150 to 0034b157 has its CatchHandler @ 0034b768 */
    plVar10 = (long *)FUN_00759c3c(0x30);
    puVar3 = PTR_DAT_007a1468;
    plVar8 = plVar10 + 3;
    plVar10[1] = 0;
    plVar10[2] = 0;
    *plVar10 = (long)(puVar3 + 0x10);
                    /* try { // try from 0034b174 to 0034b17f has its CatchHandler @ 0034b73c */
    FUN_0034f0bc(plVar8,param_2);
    plVar6 = local_b0;
    local_b8 = plVar8;
    if (local_b0 == (long *)0x0) {
LAB_0034b1c8:
      local_b0 = plVar10;
      local_c8 = local_b8;
      local_c0 = local_b0;
      FUN_00755c20(1,local_b0 + 2);
    }
    else {
      plVar8 = local_b0 + 1;
      local_b0 = plVar10;
      lVar9 = FUN_00755c50(0xffffffffffffffff,plVar8);
      if (lVar9 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        FUN_0071245c(plVar6);
      }
      local_c8 = local_b8;
      local_c0 = local_b0;
      plVar10 = local_b0;
      if (local_b0 != (long *)0x0) goto LAB_0034b1c8;
    }
    local_d8 = (long *)0x0;
    local_d0 = (long *)0x0;
    if (((*PTR_DAT_007a1470 & 1) == 0) && (iVar4 = FUN_00739c1c(PTR_DAT_007a1470), iVar4 != 0)) {
      __cxa_atexit(PTR_FUN_007a1110,PTR_DAT_007a1478,&PTR_LOOP_0075ec90);
      FUN_00739d60(PTR_DAT_007a1470);
    }
                    /* try { // try from 0034b1e8 to 0034b1f3 has its CatchHandler @ 0034b70c */
    FUN_00715bcc(PTR_DAT_007a1478);
    FUN_0034bc80(&local_98,param_4,local_78,&local_c8);
    plVar8 = (long *)CONCAT71(uStack_97,local_98);
    lVar9 = CONCAT71(uStack_8f,cStack_90);
    if (lVar9 != 0) {
      FUN_00755c20(1,lVar9 + 0x10);
    }
    bVar1 = local_c0 != (long *)0x0;
    local_c8 = plVar8;
    local_c0 = (long *)lVar9;
    if (bVar1) {
      FUN_0071245c();
    }
    if (CONCAT71(uStack_8f,cStack_90) != 0) {
      FUN_0071245c();
    }
    if (local_c0 == (long *)0x0) {
      local_d8 = (long *)0x0;
      plVar6 = (long *)0x0;
      plVar8 = local_d0;
    }
    else {
      plVar6 = (long *)FUN_007124b4();
      local_d8 = (long *)0x0;
      plVar8 = local_d0;
      if (plVar6 != (long *)0x0) {
        local_d8 = local_c8;
      }
    }
    local_d0 = plVar6;
    if ((plVar8 != (long *)0x0) && (lVar9 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1), lVar9 == 0)
       ) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      FUN_0071245c(plVar8);
    }
    if (local_d8 == (long *)0x0) {
      FUN_0034bd9c(param_4,local_78);
      local_e8 = local_b8;
      local_e0 = local_b0;
      if (local_b0 != (long *)0x0) {
        FUN_00755c20(1,local_b0 + 2);
      }
      FUN_0034bc80(&local_98,param_4,local_78,&local_e8);
      local_c8 = (long *)CONCAT71(uStack_97,local_98);
      lVar9 = CONCAT71(uStack_8f,cStack_90);
      if (lVar9 != 0) {
        FUN_00755c20(1,lVar9 + 0x10);
      }
      bVar1 = local_c0 != (long *)0x0;
      local_c0 = (long *)lVar9;
      if (bVar1) {
        FUN_0071245c();
      }
      if (CONCAT71(uStack_8f,cStack_90) != 0) {
        FUN_0071245c();
      }
      if (local_e0 != (long *)0x0) {
        FUN_0071245c();
      }
    }
    FUN_00715bf8(PTR_DAT_007a1478);
    if ((local_c0 == (long *)0x0) || (*(long *)((long)local_c0 + 8) == -1)) {
      local_98 = 0x26;
      uStack_8f = (undefined7)s_weakPtr_is_expired__001f5451._8_8_;
      uStack_88 = CONCAT31(0x2e6465,SUB81(s_weakPtr_is_expired__001f5451._8_8_,7));
      uStack_97 = (undefined7)s_weakPtr_is_expired__001f5451._0_8_;
      cStack_90 = SUB81(s_weakPtr_is_expired__001f5451._0_8_,7);
      uStack_84 = uStack_84 & 0xffffff00;
                    /* try { // try from 0034b368 to 0034b383 has its CatchHandler @ 0034b690 */
      FUN_00372794(&local_98,
                   "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/inference-engine/src/exec_network_and_runtime_creator.hpp"
                   ,0x4d,"createExecNetworkAndRuntime");
      if ((local_98 & 1) != 0) {
        free((void *)CONCAT44(uStack_84,uStack_88));
      }
      if (local_c0 != (long *)0x0) goto LAB_0034b39c;
      plVar8 = (long *)0x0;
LAB_0034b3f4:
      plVar6 = local_b0;
      local_b8 = (long *)0x0;
      local_b0 = (long *)0x0;
      plVar10 = local_b0;
    }
    else {
LAB_0034b39c:
      plVar8 = (long *)FUN_007124b4();
      if ((plVar8 == (long *)0x0) || (local_c8 == (long *)0x0)) goto LAB_0034b3f4;
      plVar10 = (long *)FUN_0073a738(local_c8,PTR_PTR_007a1458,PTR_PTR_007a1460,0);
      plVar6 = local_b0;
      if (plVar10 == (long *)0x0) {
        local_b0 = (long *)0x0;
        local_b8 = plVar10;
        plVar10 = local_b0;
      }
      else {
        FUN_00755c20(1,plVar8 + 1);
        local_b8 = plVar10;
        plVar10 = plVar8;
        plVar6 = local_b0;
      }
    }
    local_b0 = plVar10;
    if ((plVar6 != (long *)0x0) &&
       (lVar9 = FUN_00755c50(local_b0,0xffffffffffffffff,plVar6 + 1), lVar9 == 0)) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_0071245c(plVar6);
    }
    if ((plVar8 != (long *)0x0) && (lVar9 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1), lVar9 == 0)
       ) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      FUN_0071245c(plVar8);
    }
                    /* try { // try from 0034b45c to 0034b463 has its CatchHandler @ 0034b708 */
    plVar6 = (long *)FUN_00759c3c(0xf0);
    puVar3 = PTR_DAT_007a1480;
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = (long)(puVar3 + 0x10);
                    /* try { // try from 0034b480 to 0034b48b has its CatchHandler @ 0034b6e0 */
    FUN_0034ce7c(plVar6 + 3,&local_b8);
    plVar8 = local_d0;
    *param_1 = (long)(plVar6 + 3);
    param_1[1] = (long)plVar6;
    if ((local_d0 != (long *)0x0) &&
       (lVar9 = FUN_00755c50(0xffffffffffffffff,local_d0 + 1), lVar9 == 0)) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      FUN_0071245c(plVar8);
    }
    if (local_c0 != (long *)0x0) {
      FUN_0071245c();
    }
    plVar8 = local_b0;
    if ((local_b0 == (long *)0x0) ||
       (lVar9 = FUN_00755c50(0xffffffffffffffff,local_b0 + 1), lVar9 != 0)) goto LAB_0034b594;
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  else {
    if (unaff_x19 == 0) {
      local_a8 = 0;
      local_a0 = (long *)0x0;
      goto LAB_0034b14c;
    }
    plVar6 = (long *)FUN_007124b4(unaff_x19);
    plVar8 = local_a0;
    local_a8 = 0;
    if (plVar6 != (long *)0x0) {
      local_a8 = lVar9;
    }
    if ((local_a0 != (long *)0x0) &&
       (plVar10 = local_a0 + 1, local_a0 = plVar6, lVar7 = FUN_00755c50(0xffffffffffffffff,plVar10),
       plVar6 = local_a0, lVar7 == 0)) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      FUN_0071245c(plVar8);
      plVar6 = local_a0;
    }
    local_a0 = plVar6;
    if (local_a8 == 0) goto LAB_0034b14c;
    plVar8 = (long *)FUN_007124b4(unaff_x19);
    if (plVar8 == (long *)0x0) {
      local_98 = 0;
      uStack_97 = 0;
      cStack_90 = '\0';
      uStack_8f = 0;
    }
    else {
      if ((lVar9 == 0) ||
         (lVar9 = FUN_0073a738(lVar9,PTR_PTR_007a1458,PTR_PTR_007a1460,0), lVar9 == 0)) {
        local_98 = 0;
        uStack_97 = 0;
        cStack_90 = '\0';
        uStack_8f = 0;
        lVar9 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1);
      }
      else {
        local_98 = (byte)lVar9;
        uStack_97 = (undefined7)((ulong)lVar9 >> 8);
        cStack_90 = (char)plVar8;
        uStack_8f = (undefined7)((ulong)plVar8 >> 8);
        FUN_00755c20(1,plVar8 + 1);
        lVar9 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1);
      }
      if (lVar9 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        FUN_0071245c(plVar8);
      }
    }
                    /* try { // try from 0034b530 to 0034b537 has its CatchHandler @ 0034b678 */
    plVar6 = (long *)FUN_00759c3c(0xf0);
    puVar3 = PTR_DAT_007a1480;
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = (long)(puVar3 + 0x10);
                    /* try { // try from 0034b554 to 0034b55f has its CatchHandler @ 0034b660 */
    FUN_0034ce7c(plVar6 + 3,&local_98);
    plVar8 = (long *)CONCAT71(uStack_8f,cStack_90);
    *param_1 = (long)(plVar6 + 3);
    param_1[1] = (long)plVar6;
    if ((plVar8 == (long *)0x0) || (lVar9 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1), lVar9 != 0)
       ) goto LAB_0034b594;
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  FUN_0071245c(plVar8);
LAB_0034b594:
  plVar8 = local_a0;
  if ((local_a0 != (long *)0x0) &&
     (lVar9 = FUN_00755c50(0xffffffffffffffff,local_a0 + 1), lVar9 == 0)) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    FUN_0071245c(plVar8);
  }
  if ((lVar5 != 0) && (unaff_x19 != 0)) {
    FUN_0071245c(unaff_x19);
  }
  if ((local_78[0] & 1) != 0) {
    free(local_68);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0034b7c4  FUN_0034b7c4 =====

undefined * FUN_0034b7c4(void)

{
  return &DAT_007aaf20;
}


// ===== 0034b7d0  FUN_0034b7d0 =====

void FUN_0034b7d0(byte *param_1)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *pbVar6;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  bVar2 = *param_1;
  uVar1 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if ((long)uVar1 < 7) {
    if (uVar1 == 4) {
      pbVar6 = *(byte **)(param_1 + 0x10);
      if ((bVar2 & 1) == 0) {
        pbVar6 = param_1 + 1;
      }
      if (*(int *)pbVar6 == 0x584e4e4f) {
        uVar4 = 2;
LAB_0034b8f8:
        if (*(long *)(lVar3 + 0x28) == local_38) {
          return;
        }
        goto LAB_0034b9d0;
      }
    }
    else if (uVar1 == 6) {
      pbVar6 = *(byte **)(param_1 + 0x10);
      if ((bVar2 & 1) == 0) {
        pbVar6 = param_1 + 1;
      }
      if (*(int *)pbVar6 == 0x4954414e && *(short *)(pbVar6 + 4) == 0x4556) {
        uVar4 = 0;
        goto LAB_0034b8f8;
      }
    }
  }
  else if (uVar1 == 7) {
    pbVar6 = *(byte **)(param_1 + 0x10);
    if ((bVar2 & 1) == 0) {
      pbVar6 = param_1 + 1;
    }
    if (*(int *)pbVar6 == 0x45524f43 && *(int *)(pbVar6 + 3) == 0x4c4d5f45) {
      uVar4 = 3;
      goto LAB_0034b8f8;
    }
  }
  else if (uVar1 == 9) {
    pbVar6 = *(byte **)(param_1 + 0x10);
    if ((bVar2 & 1) == 0) {
      pbVar6 = param_1 + 1;
    }
    if (*(long *)pbVar6 == 0x4e49565f4e45504f && pbVar6[8] == 0x4f) {
      uVar4 = 1;
      goto LAB_0034b8f8;
    }
  }
  uVar5 = FUN_00753a74(0x20);
                    /* try { // try from 0034b930 to 0034b943 has its CatchHandler @ 0034b9a8 */
  FUN_00714534(auStack_50,"Unknown engine type: ",param_1);
                    /* try { // try from 0034b948 to 0034b983 has its CatchHandler @ 0034b984 */
  uVar4 = FUN_00374ee0(uVar5,auStack_50);
  if (*(long *)(lVar3 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(uVar5,PTR_PTR_007a1338,PTR_FUN_007a11f8);
  }
LAB_0034b9d0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


// ===== 0034b9d4  FUN_0034b9d4 =====

void FUN_0034b9d4(byte *param_1)

{
  ulong uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  byte *pbVar6;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar5 = tpidr_el0;
  local_38 = *(long *)(lVar5 + 0x28);
  bVar2 = *param_1;
  uVar1 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (uVar1 == 7) {
    pbVar6 = *(byte **)(param_1 + 0x10);
    if ((bVar2 & 1) == 0) {
      pbVar6 = param_1 + 1;
    }
    if (*(int *)pbVar6 == 0x5f555047 && *(int *)(pbVar6 + 3) == 0x5550435f) {
      uVar3 = 1;
      lVar5 = *(long *)(lVar5 + 0x28);
      goto joined_r0x0034bacc;
    }
  }
  else if (uVar1 == 3) {
    pbVar6 = *(byte **)(param_1 + 0x10);
    if ((bVar2 & 1) == 0) {
      pbVar6 = param_1 + 1;
    }
    if (*(short *)pbVar6 == 0x5043 && pbVar6[2] == 0x55) {
      uVar3 = 0;
      lVar5 = *(long *)(lVar5 + 0x28);
    }
    else {
      if (*(short *)pbVar6 != 0x4c41 || pbVar6[2] != 0x4c) goto LAB_0034bae4;
      uVar3 = 2;
      lVar5 = *(long *)(lVar5 + 0x28);
    }
joined_r0x0034bacc:
    if (lVar5 == local_38) {
      return;
    }
    goto LAB_0034bb98;
  }
LAB_0034bae4:
  uVar4 = FUN_00753a74(0x20);
                    /* try { // try from 0034baf8 to 0034bb0b has its CatchHandler @ 0034bb70 */
  FUN_00714534(auStack_50,"Unknown infer device: ",param_1);
                    /* try { // try from 0034bb10 to 0034bb4b has its CatchHandler @ 0034bb4c */
  uVar3 = FUN_00374ee0(uVar4,auStack_50);
  if (*(long *)(lVar5 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(uVar4,PTR_PTR_007a1338,PTR_FUN_007a11f8);
  }
LAB_0034bb98:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


// ===== 0034bb9c  _INIT_14 =====

void _INIT_14(void)

{
  undefined8 *puVar1;
  
  if ((DAT_007aaf30 & 1) == 0) {
    DAT_007aaf30 = 1;
    puVar1 = (undefined8 *)FUN_0047b538();
    DAT_007aaf28 = (*(code *)*puVar1)(0x12);
  }
  return;
}


// ===== 0034bbe0  FUN_0034bbe0 =====

void FUN_0034bbe0(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 0034bc30  FUN_0034bc30 =====

void FUN_0034bc30(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 0034bc80  FUN_0034bc80 =====

void FUN_0034bc80(undefined8 *param_1,long param_2,ulong *param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong local_80;
  ulong uStack_78;
  void *local_70;
  undefined4 local_68;
  undefined8 local_60;
  long local_58;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 0034bcb4 to 0034bcc3 has its CatchHandler @ 0034bd98 */
  FUN_00715bcc();
  lVar3 = FUN_0034be54(param_2 + 0x28,param_3);
  if (lVar3 == 0) {
    if ((*param_3 & 1) == 0) {
      uStack_78 = param_3[1];
      local_80 = *param_3;
      local_70 = (void *)param_3[2];
    }
    else {
                    /* try { // try from 0034bd30 to 0034bd37 has its CatchHandler @ 0034bd98 */
      FUN_002fb36c(&local_80,param_3[2],param_3[1]);
    }
    local_60 = *param_4;
    local_58 = param_4[1];
    local_68 = (undefined4)param_3[3];
    if (local_58 != 0) {
      FUN_00755c20(1,local_58 + 0x10);
    }
                    /* try { // try from 0034bd58 to 0034bd67 has its CatchHandler @ 0034bd98 */
    FUN_0034c458(param_2 + 0x28,&local_80,&local_80);
    if (local_58 != 0) {
      FUN_0071245c();
    }
    if ((local_80 & 1) != 0) {
      free(local_70);
    }
    lVar1 = param_4[1];
    *param_1 = *param_4;
    param_1[1] = lVar1;
  }
  else {
    lVar1 = *(long *)(lVar3 + 0x38);
    *param_1 = *(undefined8 *)(lVar3 + 0x30);
    param_1[1] = lVar1;
  }
  if (lVar1 != 0) {
    FUN_00755c20(1,lVar1 + 0x10);
  }
  FUN_00715bf8(param_2);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0034bd9c  FUN_0034bd9c =====

void FUN_0034bd9c(long param_1,undefined8 param_2)

{
  long lVar1;
  void *__ptr;
  long lVar2;
  void *local_50 [2];
  char local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0034bdc4 to 0034bdd7 has its CatchHandler @ 0034be50 */
  FUN_00715bcc();
  lVar2 = FUN_0034be54(param_1 + 0x28,param_2);
  if (lVar2 != 0) {
    FUN_0034ca90(local_50,param_1 + 0x28);
    __ptr = local_50[0];
    local_50[0] = (void *)0x0;
    if (__ptr != (void *)0x0) {
      if (local_40 != '\0') {
        if (*(long *)((long)__ptr + 0x38) != 0) {
          FUN_0071245c();
        }
        if ((*(byte *)((long)__ptr + 0x10) & 1) != 0) {
          free(*(void **)((long)__ptr + 0x20));
        }
      }
      free(__ptr);
    }
  }
  FUN_00715bf8(param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0034be54  FUN_0034be54 =====

long * FUN_0034be54(long *param_1,byte *param_2)

{
  byte *pbVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  undefined1 uStack_49;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar4 = *(ulong *)(param_2 + 8);
  pbVar1 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar1 = param_2 + 1;
    uVar4 = (ulong)(*param_2 >> 1);
  }
                    /* try { // try from 0034be98 to 0034be9f has its CatchHandler @ 0034bfb0 */
  uVar4 = FUN_0034bfb4(&uStack_49,pbVar1,uVar4);
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    uVar4 = uVar4 ^ (long)*(int *)(param_2 + 0x18);
    uVar10 = NEON_cnt(uVar7,1);
    uVar9 = NEON_uaddlv(uVar10,1);
    uVar5 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
    if (uVar5 < 2) {
      uVar8 = uVar7 - 1 & uVar4;
    }
    else {
      uVar8 = uVar4;
      if (uVar7 <= uVar4) {
        uVar8 = 0;
        if (uVar7 != 0) {
          uVar8 = uVar4 / uVar7;
        }
        uVar8 = uVar4 - uVar8 * uVar7;
      }
    }
    plVar6 = *(long **)(*param_1 + uVar8 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      if (plVar6 != (long *)0x0) {
        if (uVar5 < 2) {
          do {
            if (plVar6[1] == uVar4) {
              uVar5 = FUN_0034cc80(plVar6 + 2,param_2);
              if ((uVar5 & 1) != 0) break;
            }
            else if ((plVar6[1] & uVar7 - 1) != uVar8) goto LAB_0034bf7c;
            plVar6 = (long *)*plVar6;
          } while (plVar6 != (long *)0x0);
        }
        else {
          do {
            uVar5 = plVar6[1];
            if (uVar5 == uVar4) {
              uVar5 = FUN_0034cc80(plVar6 + 2,param_2);
              if ((uVar5 & 1) != 0) break;
            }
            else {
              if (uVar7 <= uVar5) {
                uVar2 = 0;
                if (uVar7 != 0) {
                  uVar2 = uVar5 / uVar7;
                }
                uVar5 = uVar5 - uVar2 * uVar7;
              }
              if (uVar5 != uVar8) goto LAB_0034bf7c;
            }
            plVar6 = (long *)*plVar6;
          } while (plVar6 != (long *)0x0);
        }
      }
      goto LAB_0034bf80;
    }
  }
LAB_0034bf7c:
  plVar6 = (long *)0x0;
LAB_0034bf80:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return plVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0034bfb4  FUN_0034bfb4 =====

ulong FUN_0034bfb4(undefined8 param_1,ulong *param_2,ulong param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  long lVar9;
  ulong *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  
  if (param_3 < 0x21) {
    if (0x10 < param_3) {
      lVar19 = *(long *)((long)param_2 + (param_3 - 8));
      uVar13 = lVar19 * -0x651e95c4d06fbfb1;
      uVar15 = *param_2 * -0x4b6d499041670d8d - param_2[1];
      uVar14 = param_2[1] ^ 0xc949d7c7509e6557;
      uVar14 = *param_2 * -0x4b6d499041670d8d + param_3 + (uVar14 >> 0x14 | uVar14 << 0x2c) +
               lVar19 * 0x651e95c4d06fbfb1;
      uVar13 = ((uVar13 >> 0x1e | uVar13 << 0x22) + (uVar15 >> 0x2b | uVar15 * 0x200000) +
                *(long *)((long)param_2 + (param_3 - 0x10)) * -0x3c5a37a36834ced9 ^ uVar14) *
               -0x622015f714c7d297;
      uVar14 = (uVar14 ^ uVar13 >> 0x2f ^ uVar13) * -0x622015f714c7d297;
      return (uVar14 ^ uVar14 >> 0x2f) * -0x622015f714c7d297;
    }
    if (8 < param_3) {
      uVar13 = *(ulong *)((long)param_2 + (param_3 - 8));
      uVar14 = uVar13 + param_3;
      uVar14 = uVar14 >> (param_3 & 0x3f) | uVar14 << 0x40 - (param_3 & 0x3f);
      uVar15 = (uVar14 ^ *param_2) * -0x622015f714c7d297;
      uVar14 = (uVar14 ^ uVar15 >> 0x2f ^ uVar15) * -0x622015f714c7d297;
      return (uVar14 ^ uVar14 >> 0x2f) * -0x622015f714c7d297 ^ uVar13;
    }
    if (3 < param_3) {
      uVar13 = (ulong)*(uint *)((long)param_2 + (param_3 - 4));
      uVar14 = ((uint)((int)*param_2 << 3) + param_3 ^ uVar13) * -0x622015f714c7d297;
      uVar14 = (uVar13 ^ uVar14 >> 0x2f ^ uVar14) * -0x622015f714c7d297;
      return (uVar14 ^ uVar14 >> 0x2f) * -0x622015f714c7d297;
    }
    uVar14 = 0x9ae16a3b2f90404f;
    if (param_3 != 0) {
      uVar14 = (param_3 | (ulong)*(byte *)((long)param_2 + (param_3 - 1)) << 2) *
               -0x36b62838af619aa9 ^
               (ulong)CONCAT11(*(undefined1 *)((long)param_2 + (param_3 >> 1)),(char)*param_2) *
               -0x651e95c4d06fbfb1;
      return (uVar14 ^ uVar14 >> 0x2f) * -0x651e95c4d06fbfb1;
    }
  }
  else {
    if (param_3 < 0x41) {
      lVar4 = *(long *)((long)param_2 + (param_3 - 0x10));
      uVar17 = *param_2 + (lVar4 + param_3) * -0x3c5a37a36834ced9;
      uVar21 = param_2[3];
      uVar14 = *(long *)((long)param_2 + (param_3 - 0x20)) + param_2[2];
      lVar19 = *(long *)((long)param_2 + (param_3 - 8)) + uVar21;
      uVar13 = *(long *)((long)param_2 + (param_3 - 0x18)) + uVar14;
      uVar15 = uVar17 + param_2[1];
      uVar18 = uVar15 + param_2[2];
      uVar3 = uVar13 + lVar4;
      uVar20 = lVar19 + uVar14;
      lVar4 = (uVar15 >> 7 | uVar15 << 0x39) + (uVar17 >> 0x25 | uVar17 * 0x8000000) +
              (uVar17 + uVar21 >> 0x34 | (uVar17 + uVar21) * 0x1000) +
              (uVar18 >> 0x1f | uVar18 << 0x21);
      uVar14 = (uVar3 + lVar19 + lVar4) * -0x3c5a37a36834ced9 +
               (uVar18 + uVar21 + (uVar14 >> 0x25 | uVar14 * 0x8000000) +
                         (uVar13 >> 7 | uVar13 << 0x39) + (uVar20 >> 0x34 | uVar20 * 0x1000) +
                         (uVar3 >> 0x1f | uVar3 << 0x21)) * -0x651e95c4d06fbfb1;
      uVar14 = lVar4 + (uVar14 ^ uVar14 >> 0x2f) * -0x3c5a37a36834ced9;
      return (uVar14 ^ uVar14 >> 0x2f) * -0x651e95c4d06fbfb1;
    }
    lVar4 = *(long *)((long)param_2 + (param_3 - 0x38));
    lVar16 = *(long *)((long)param_2 + (param_3 - 0x30));
    uVar15 = *(ulong *)((long)param_2 + (param_3 - 0x18));
    lVar12 = *(long *)((long)param_2 + (param_3 - 0x28));
    lVar11 = *(long *)((long)param_2 + (param_3 - 0x10));
    lVar9 = *(long *)((long)param_2 + (param_3 - 8));
    uVar14 = (uVar15 ^ lVar16 + param_3) * -0x622015f714c7d297;
    lVar19 = *(long *)((long)param_2 + (param_3 - 0x40)) + param_3;
    puVar10 = param_2 + 4;
    uVar14 = (uVar15 ^ uVar14 >> 0x2f ^ uVar14) * -0x622015f714c7d297;
    uVar21 = (uVar14 ^ uVar14 >> 0x2f) * -0x622015f714c7d297;
    uVar14 = lVar4 + lVar11;
    uVar13 = lVar19 + lVar4 + lVar16;
    lVar4 = uVar14 + *(long *)((long)param_2 + (param_3 - 0x20)) + -0x4b6d499041670d8d;
    lVar16 = *param_2 + lVar12 * -0x4b6d499041670d8d;
    uVar15 = lVar4 + uVar15 + lVar11;
    uVar18 = uVar13 + lVar12;
    uVar3 = lVar4 + lVar12 + lVar9;
    uVar20 = lVar12 + lVar19 + uVar21;
    uVar13 = (uVar13 >> 0x2c | uVar13 * 0x100000) + lVar19 + (uVar20 >> 0x15 | uVar20 << 0x2b);
    uVar20 = uVar15 + lVar9;
    uVar15 = (uVar15 >> 0x2c | uVar15 * 0x100000) + lVar4 + (uVar3 >> 0x15 | uVar3 << 0x2b);
    lVar19 = -(param_3 - 1 & 0xffffffffffffffc0);
    do {
      puVar5 = puVar10 + -3;
      lVar11 = puVar10[-4] + uVar13 * -0x4b6d499041670d8d;
      lVar19 = lVar19 + 0x40;
      uVar3 = lVar16 + uVar18 + uVar14 + *puVar5;
      puVar6 = puVar10 + 1;
      lVar16 = (uVar21 + uVar20 >> 0x21 | (uVar21 + uVar20) * 0x80000000) * -0x4b6d499041670d8d;
      puVar1 = puVar10 + 2;
      puVar7 = puVar10 + 3;
      uVar14 = uVar14 + uVar13 + *puVar1;
      lVar4 = lVar16 + uVar15 + *puVar10;
      uVar14 = *puVar6 + uVar18 + (uVar14 >> 0x2a | uVar14 * 0x400000) * -0x4b6d499041670d8d;
      puVar2 = puVar10 + -2;
      puVar8 = puVar10 + -1;
      puVar10 = puVar10 + 8;
      uVar13 = lVar11 + *puVar5 + *puVar2;
      uVar18 = uVar13 + *puVar8;
      uVar21 = (uVar3 >> 0x25 | uVar3 * 0x8000000) * -0x4b6d499041670d8d ^ uVar15;
      uVar15 = lVar4 + *puVar6 + *puVar1;
      uVar3 = lVar11 + uVar20 + *puVar8 + uVar21;
      uVar17 = uVar14 + *puVar2 + lVar4 + *puVar7;
      uVar20 = uVar15 + *puVar7;
      uVar13 = (uVar13 >> 0x2c | uVar13 * 0x100000) + lVar11 + (uVar3 >> 0x15 | uVar3 << 0x2b);
      uVar15 = (uVar15 >> 0x2c | uVar15 * 0x100000) + lVar4 + (uVar17 >> 0x15 | uVar17 << 0x2b);
    } while (lVar19 != 0);
    uVar18 = (uVar20 ^ uVar18) * -0x622015f714c7d297;
    uVar13 = (uVar15 ^ uVar13) * -0x622015f714c7d297;
    uVar18 = (uVar20 ^ uVar18 >> 0x2f ^ uVar18) * -0x622015f714c7d297;
    uVar13 = (uVar15 ^ uVar13 >> 0x2f ^ uVar13) * -0x622015f714c7d297;
    uVar13 = lVar16 + (uVar13 ^ uVar13 >> 0x2f) * -0x622015f714c7d297;
    uVar14 = (uVar13 ^ uVar21 + (uVar14 ^ uVar14 >> 0x2f) * -0x4b6d499041670d8d +
                       (uVar18 ^ uVar18 >> 0x2f) * -0x622015f714c7d297) * -0x622015f714c7d297;
    uVar14 = (uVar13 ^ uVar14 >> 0x2f ^ uVar14) * -0x622015f714c7d297;
    uVar14 = (uVar14 ^ uVar14 >> 0x2f) * -0x622015f714c7d297;
  }
  return uVar14;
}


// ===== 0034c400  FUN_0034c400 =====

void FUN_0034c400(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00760b50;
  FUN_00712454();
  return;
}


// ===== 0034c414  FUN_0034c414 =====

void FUN_0034c414(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007a1468 + 0x10);
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 0034c448  FUN_0034c448 =====

void FUN_0034c448(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0034c450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 0034c454  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0034c458  FUN_0034c458 =====

long * FUN_0034c458(long *param_1,byte *param_2,byte *param_3)

{
  byte *pbVar1;
  undefined4 uVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  ulong unaff_x26;
  undefined2 uVar14;
  undefined8 uVar15;
  long lVar16;
  float fVar17;
  long lVar18;
  long *local_80;
  long *plStack_78;
  undefined1 local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  uVar13 = *(ulong *)(param_2 + 8);
  pbVar1 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar1 = param_2 + 1;
    uVar13 = (ulong)(*param_2 >> 1);
  }
                    /* try { // try from 0034c4a8 to 0034c4af has its CatchHandler @ 0034c85c */
  uVar6 = FUN_0034bfb4(&local_80,pbVar1,uVar13);
  uVar13 = param_1[1];
  uVar6 = uVar6 ^ (long)*(int *)(param_2 + 0x18);
  if (uVar13 != 0) {
    uVar15 = NEON_cnt(uVar13,1);
    uVar14 = NEON_uaddlv(uVar15,1);
    uVar11 = CONCAT62((int6)((ulong)uVar15 >> 0x10),uVar14) & 0xffffffff;
    if (uVar11 < 2) {
      unaff_x26 = uVar13 - 1 & uVar6;
    }
    else {
      unaff_x26 = uVar6;
      if (uVar13 <= uVar6) {
        uVar4 = 0;
        if (uVar13 != 0) {
          uVar4 = uVar6 / uVar13;
        }
        unaff_x26 = uVar6 - uVar4 * uVar13;
      }
    }
    plVar10 = *(long **)(*param_1 + unaff_x26 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar10[1] == uVar6) {
            plVar7 = (long *)FUN_0034cc80(plVar10 + 2,param_2);
            if (((ulong)plVar7 & 1) != 0) goto LAB_0034c594;
          }
          else if ((plVar10[1] & uVar13 - 1) != unaff_x26) break;
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar10[1];
          if (uVar11 == uVar6) {
            plVar7 = (long *)FUN_0034cc80(plVar10 + 2,param_2);
            if (((ulong)plVar7 & 1) != 0) goto LAB_0034c594;
          }
          else {
            if (uVar13 <= uVar11) {
              uVar4 = 0;
              if (uVar13 != 0) {
                uVar4 = uVar11 / uVar13;
              }
              uVar11 = uVar11 - uVar4 * uVar13;
            }
            if (uVar11 != unaff_x26) break;
          }
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
    }
  }
  plVar10 = param_1 + 2;
  plVar8 = (long *)FUN_00759c3c(0x40);
  bVar3 = *param_3;
  local_70 = 0;
  *plVar8 = 0;
  plVar8[1] = uVar6;
  local_80 = plVar8;
  plStack_78 = plVar10;
  if ((bVar3 & 1) == 0) {
    lVar16 = *(long *)param_3;
    lVar9 = *(long *)(param_3 + 0x10);
    plVar8[3] = *(long *)(param_3 + 8);
    plVar8[2] = lVar16;
    plVar8[4] = lVar9;
    plVar7 = plVar8;
  }
  else {
                    /* try { // try from 0034c5e8 to 0034c5ef has its CatchHandler @ 0034c834 */
    plVar7 = (long *)FUN_002fb36c(plVar8 + 2,*(undefined8 *)(param_3 + 0x10),
                                  *(undefined8 *)(param_3 + 8));
  }
  lVar18 = *(long *)(param_3 + 0x28);
  lVar16 = *(long *)(param_3 + 0x20);
  param_3[0x20] = 0;
  param_3[0x21] = 0;
  param_3[0x22] = 0;
  param_3[0x23] = 0;
  param_3[0x24] = 0;
  param_3[0x25] = 0;
  param_3[0x26] = 0;
  param_3[0x27] = 0;
  param_3[0x28] = 0;
  param_3[0x29] = 0;
  param_3[0x2a] = 0;
  param_3[0x2b] = 0;
  param_3[0x2c] = 0;
  param_3[0x2d] = 0;
  param_3[0x2e] = 0;
  param_3[0x2f] = 0;
  uVar2 = *(undefined4 *)(param_3 + 0x18);
  lVar9 = param_1[3];
  plVar8[7] = lVar18;
  plVar8[6] = lVar16;
  fVar17 = *(float *)(param_1 + 4);
  *(undefined4 *)(plVar8 + 5) = uVar2;
  local_70 = 1;
  if ((uVar13 == 0) || (fVar17 * (float)uVar13 < (float)(lVar9 + 1))) {
    if (uVar13 < 3) {
      uVar11 = 1;
    }
    else {
      uVar11 = (ulong)((uVar13 & uVar13 - 1) != 0);
    }
    plVar8 = (long *)(uVar11 | uVar13 << 1);
    plVar12 = (long *)(long)((float)(lVar9 + 1) / fVar17);
    if (plVar8 <= plVar12) {
      plVar8 = plVar12;
    }
    if ((long)plVar8 - 1U == 0) {
      plVar8 = (long *)0x2;
    }
    else if (((ulong)plVar8 & (long)plVar8 - 1U) != 0) {
                    /* try { // try from 0034c6a0 to 0034c723 has its CatchHandler @ 0034c830 */
      plVar7 = (long *)FUN_00711ce0(plVar8);
      plVar8 = plVar7;
    }
    plVar12 = (long *)param_1[1];
    if (plVar12 < plVar8) {
LAB_0034c6b8:
      plVar7 = (long *)FUN_0034c8b8(param_1,plVar8);
    }
    else if (plVar8 < plVar12) {
      plVar7 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (plVar12 < (long *)0x3) {
LAB_0034c720:
        plVar7 = (long *)FUN_00711ce0();
      }
      else {
        uVar15 = NEON_cnt(plVar12,1);
        uVar14 = NEON_uaddlv(uVar15,1);
        if (1 < (CONCAT62((int6)((ulong)uVar15 >> 0x10),uVar14) & 0xffffffff)) goto LAB_0034c720;
        if ((long *)0x1 < plVar7) {
          plVar7 = (long *)(1L << (-LZCOUNT((long)plVar7 + -1) & 0x3fU));
        }
      }
      if (plVar8 <= plVar7) {
        plVar8 = plVar7;
      }
      if (plVar8 < plVar12) goto LAB_0034c6b8;
    }
    uVar13 = param_1[1];
    if ((uVar13 & uVar13 - 1) == 0) {
      unaff_x26 = uVar13 - 1 & uVar6;
      plVar8 = *(long **)(*param_1 + unaff_x26 * 8);
      goto joined_r0x0034c7ac;
    }
    if (uVar6 < uVar13) {
      plVar8 = *(long **)(*param_1 + uVar6 * 8);
      unaff_x26 = uVar6;
      goto joined_r0x0034c7ac;
    }
    uVar11 = 0;
    if (uVar13 != 0) {
      uVar11 = uVar6 / uVar13;
    }
    unaff_x26 = uVar6 - uVar11 * uVar13;
    plVar8 = *(long **)(*param_1 + unaff_x26 * 8);
    if (plVar8 != (long *)0x0) goto LAB_0034c640;
LAB_0034c758:
    *local_80 = param_1[2];
    param_1[2] = (long)local_80;
    *(long **)(*param_1 + unaff_x26 * 8) = plVar10;
    if (*local_80 != 0) {
      uVar6 = *(ulong *)(*local_80 + 8);
      if ((uVar13 & uVar13 - 1) == 0) {
        uVar6 = uVar6 & uVar13 - 1;
      }
      else if (uVar13 <= uVar6) {
        uVar11 = 0;
        if (uVar13 != 0) {
          uVar11 = uVar6 / uVar13;
        }
        uVar6 = uVar6 - uVar11 * uVar13;
      }
      *(long **)(*param_1 + uVar6 * 8) = local_80;
    }
  }
  else {
    plVar8 = *(long **)(*param_1 + unaff_x26 * 8);
joined_r0x0034c7ac:
    if (plVar8 == (long *)0x0) goto LAB_0034c758;
LAB_0034c640:
    *local_80 = *plVar8;
    *plVar8 = (long)local_80;
  }
  uVar15 = 1;
  param_1[3] = param_1[3] + 1;
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return local_80;
  }
LAB_0034c858:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar7,uVar15);
LAB_0034c594:
  uVar15 = 0;
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return plVar10;
  }
  goto LAB_0034c858;
}


// ===== 0034c860  FUN_0034c860 =====

void FUN_0034c860(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)*param_1;
  *param_1 = 0;
  if (__ptr != (void *)0x0) {
    if (*(char *)(param_1 + 2) != '\0') {
      if (*(long *)((long)__ptr + 0x38) != 0) {
        FUN_0071245c();
      }
      if ((*(byte *)((long)__ptr + 0x10) & 1) != 0) {
        free(*(void **)((long)__ptr + 0x20));
      }
    }
    free(__ptr);
    return;
  }
  return;
}


// ===== 0034c8b8  FUN_0034c8b8 =====

void FUN_0034c8b8(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  
  if (param_2 == 0) {
    pvVar3 = (void *)*param_1;
    *param_1 = 0;
    if (pvVar3 != (void *)0x0) {
      free(pvVar3);
    }
    param_1[1] = 0;
    return;
  }
  if (param_2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_002f9ee0();
  }
  lVar2 = FUN_00759c3c(param_2 << 3);
  pvVar3 = (void *)*param_1;
  *param_1 = lVar2;
  if (pvVar3 != (void *)0x0) {
    free(pvVar3);
  }
  uVar4 = 0;
  param_1[1] = param_2;
  do {
    *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
    uVar4 = uVar4 + 1;
  } while (param_2 != uVar4);
  plVar6 = param_1 + 2;
  plVar5 = (long *)*plVar6;
  if (plVar5 == (long *)0x0) {
    return;
  }
  uVar4 = plVar5[1];
  uVar10 = NEON_cnt(param_2,1);
  uVar9 = NEON_uaddlv(uVar10,1);
  uVar8 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
  if (uVar8 < 2) {
    uVar4 = uVar4 & param_2 - 1;
    *(long **)(*param_1 + uVar4 * 8) = plVar6;
    plVar6 = (long *)*plVar5;
    if (plVar6 == (long *)0x0) {
      return;
    }
  }
  else {
    if (param_2 <= uVar4) {
      uVar1 = 0;
      if (param_2 != 0) {
        uVar1 = uVar4 / param_2;
      }
      uVar4 = uVar4 - uVar1 * param_2;
    }
    *(long **)(*param_1 + uVar4 * 8) = plVar6;
    plVar6 = (long *)*plVar5;
    if (plVar6 == (long *)0x0) {
      return;
    }
    if (1 < uVar8) {
      do {
        while( true ) {
          uVar8 = plVar6[1];
          if (param_2 <= uVar8) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar8 / param_2;
            }
            uVar8 = uVar8 - uVar1 * param_2;
          }
          if (uVar8 != uVar4) break;
LAB_0034ca3c:
          plVar5 = plVar6;
          plVar6 = (long *)*plVar5;
          if (plVar6 == (long *)0x0) {
            return;
          }
        }
        if (*(long *)(*param_1 + uVar8 * 8) != 0) {
          *plVar5 = *plVar6;
          *plVar6 = **(long **)(*param_1 + uVar8 * 8);
          **(undefined8 **)(*param_1 + uVar8 * 8) = plVar6;
          plVar6 = plVar5;
          goto LAB_0034ca3c;
        }
        *(long **)(*param_1 + uVar8 * 8) = plVar5;
        plVar7 = (long *)*plVar6;
        plVar5 = plVar6;
        uVar4 = uVar8;
        plVar6 = plVar7;
        if (plVar7 == (long *)0x0) {
          return;
        }
      } while( true );
    }
  }
  do {
    uVar8 = plVar6[1] & param_2 - 1;
    if (uVar8 != uVar4) {
      if (*(long *)(*param_1 + uVar8 * 8) == 0) {
        *(long **)(*param_1 + uVar8 * 8) = plVar5;
        uVar4 = uVar8;
      }
      else {
        *plVar5 = *plVar6;
        *plVar6 = **(long **)(*param_1 + uVar8 * 8);
        **(undefined8 **)(*param_1 + uVar8 * 8) = plVar6;
        plVar6 = plVar5;
      }
    }
    plVar7 = (long *)*plVar6;
    plVar5 = plVar6;
    plVar6 = plVar7;
  } while (plVar7 != (long *)0x0);
  return;
}


// ===== 0034ca90  FUN_0034ca90 =====

void FUN_0034ca90(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  
  uVar5 = param_2[1];
  uVar3 = param_3[1];
  uVar11 = NEON_cnt(uVar5,1);
  uVar10 = NEON_uaddlv(uVar11,1);
  uVar7 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
  if (uVar7 < 2) {
    uVar3 = uVar5 - 1 & uVar3;
  }
  else if (uVar5 <= uVar3) {
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = uVar3 / uVar5;
    }
    uVar3 = uVar3 - uVar9 * uVar5;
  }
  plVar2 = *(long **)(*param_2 + uVar3 * 8);
  do {
    plVar6 = plVar2;
    plVar2 = (long *)*plVar6;
  } while ((long *)*plVar6 != param_3);
  if (plVar6 != param_2 + 2) {
    uVar9 = plVar6[1];
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar1 * uVar5;
    }
    if (uVar9 == uVar3) goto LAB_0034cb5c;
  }
  if (*param_3 != 0) {
    uVar9 = *(ulong *)(*param_3 + 8);
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar1 * uVar5;
    }
    if (uVar9 == uVar3) goto LAB_0034cb5c;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_0034cb5c:
  lVar8 = *param_3;
  if (lVar8 != 0) {
    uVar9 = *(ulong *)(lVar8 + 8);
    if (uVar7 < 2) {
      uVar9 = uVar9 & uVar5 - 1;
    }
    else if (uVar5 <= uVar9) {
      uVar7 = 0;
      if (uVar5 != 0) {
        uVar7 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar7 * uVar5;
    }
    if (uVar9 != uVar3) {
      *(long **)(*param_2 + uVar9 * 8) = plVar6;
      lVar8 = *param_3;
    }
  }
  lVar4 = param_2[3];
  *plVar6 = lVar8;
  *param_3 = 0;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  param_2[3] = lVar4 + -1;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}


// ===== 0034cbc4  FUN_0034cbc4 =====

void FUN_0034cbc4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00760bc8;
  FUN_00712454();
  return;
}


// ===== 0034cbd8  FUN_0034cbd8 =====

void FUN_0034cbd8(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007a1480 + 0x10);
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 0034cc0c  FUN_0034cc0c =====

void FUN_0034cc0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0034cc14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 0034cc18  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 0034cc1c  FUN_0034cc1c =====

void FUN_0034cc1c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_2 + 8) & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    uVar1 = *(undefined8 *)(param_2 + 8);
    param_1[2] = *(undefined8 *)(param_2 + 0x18);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x40);
    return;
  }
  FUN_002fb36c(param_1,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10));
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x40);
  return;
}


// ===== 0034cc80  FUN_0034cc80 =====

bool FUN_0034cc80(byte *param_1,byte *param_2)

{
  bool bVar1;
  size_t sVar2;
  size_t sVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  byte *pbVar8;
  ulong uVar9;
  byte *__s2;
  
  bVar4 = *param_1;
  bVar5 = *param_2;
  uVar9 = (ulong)(bVar4 >> 1);
  sVar2 = uVar9;
  if ((bVar4 & 1) != 0) {
    sVar2 = *(size_t *)(param_1 + 8);
  }
  sVar3 = (ulong)(bVar5 >> 1);
  if ((bVar5 & 1) != 0) {
    sVar3 = *(size_t *)(param_2 + 8);
  }
  if (sVar2 == sVar3) {
    __s2 = *(byte **)(param_2 + 0x10);
    if ((bVar5 & 1) == 0) {
      __s2 = param_2 + 1;
    }
    if ((bVar4 & 1) == 0) {
      if (bVar4 < 2) {
        bVar6 = true;
      }
      else {
        pbVar8 = param_1 + 1;
        do {
          uVar9 = uVar9 - 1;
          bVar6 = *pbVar8 == *__s2;
          if (!bVar6) break;
          __s2 = __s2 + 1;
          pbVar8 = pbVar8 + 1;
        } while (uVar9 != 0);
      }
    }
    else {
      iVar7 = memcmp(*(void **)(param_1 + 0x10),__s2,*(size_t *)(param_1 + 8));
      bVar6 = iVar7 == 0;
    }
  }
  else {
    bVar6 = false;
  }
  bVar1 = false;
  if (*(int *)(param_1 + 0x18) == *(int *)(param_2 + 0x18)) {
    bVar1 = bVar6;
  }
  return bVar1;
}


// ===== 0034cd58  FUN_0034cd58 =====

long FUN_0034cd58(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  
  plVar6 = *(long **)(param_1 + 0x18);
  plVar2 = *(long **)(param_1 + 0x20);
  if (plVar6 == plVar2) {
    return 1;
  }
  uVar5 = (long)plVar2 + (-8 - (long)plVar6);
  if (uVar5 < 8) {
    lVar4 = 1;
  }
  else {
    plVar9 = plVar6 + 1;
    lVar4 = 1;
    uVar5 = (uVar5 >> 3) + 1;
    uVar7 = uVar5 & 0x3ffffffffffffffe;
    plVar6 = plVar6 + uVar7;
    lVar8 = 1;
    uVar10 = uVar7;
    do {
      plVar1 = plVar9 + -1;
      lVar3 = *plVar9;
      uVar10 = uVar10 - 2;
      plVar9 = plVar9 + 2;
      lVar8 = *plVar1 * lVar8;
      lVar4 = lVar3 * lVar4;
    } while (uVar10 != 0);
    lVar4 = lVar4 * lVar8;
    if (uVar5 == uVar7) {
      return lVar4;
    }
  }
  do {
    plVar9 = plVar6 + 1;
    lVar4 = *plVar6 * lVar4;
    plVar6 = plVar9;
  } while (plVar9 != plVar2);
  return lVar4;
}


// ===== 0034cde0  FUN_0034cde0 =====

bool FUN_0034cde0(long *param_1)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  
  plVar1 = (long *)*param_1;
  if (plVar1 == (long *)param_1[1]) {
    return false;
  }
  do {
    plVar3 = plVar1 + 1;
    bVar2 = *plVar1 < 1;
    if (*plVar1 < 1) {
      return bVar2;
    }
    plVar1 = plVar3;
  } while (plVar3 != (long *)param_1[1]);
  return bVar2;
}


// ===== 0034ce18  FUN_0034ce18 =====

void FUN_0034ce18(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_2 + 8) & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 8);
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    param_1[1] = *(undefined8 *)(param_2 + 0x10);
    *param_1 = uVar2;
    param_1[2] = uVar1;
    return;
  }
  FUN_002fb36c(param_1,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10));
  return;
}


// ===== 0034ce44  FUN_0034ce44 =====

bool FUN_0034ce44(long param_1)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  
  plVar1 = *(long **)(param_1 + 0x20);
  if (plVar1 == *(long **)(param_1 + 0x28)) {
    return false;
  }
  do {
    plVar3 = plVar1 + 1;
    bVar2 = *plVar1 < 1;
    if (*plVar1 < 1) {
      return bVar2;
    }
    plVar1 = plVar3;
  } while (plVar3 != *(long **)(param_1 + 0x28));
  return bVar2;
}


// ===== 0034ce7c  FUN_0034ce7c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0034ce7c(long *param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong local_70;
  undefined8 uStack_68;
  char *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  puVar5 = PTR_DAT_007a1498;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  lVar6 = *param_2;
  *param_1 = (long)(puVar5 + 0x10);
  lVar7 = param_2[1];
  param_1[0x19] = lVar6;
  param_1[0x1a] = lVar7;
  if (lVar7 != 0) {
    FUN_00755c20(1,lVar7 + 8);
    lVar6 = param_1[0x19];
  }
  if (lVar6 == 0) {
                    /* try { // try from 0034cf24 to 0034cf2b has its CatchHandler @ 0034cfe8 */
    local_60 = (char *)FUN_00759c3c(0x50);
    uVar4 = s_OnnxExecutableNetwork__OnnxExecu_001eca95._48_8_;
    uVar3 = s_OnnxExecutableNetwork__OnnxExecu_001eca95._32_8_;
    uVar2 = CONCAT62(s_OnnxExecutableNetwork__OnnxExecu_001eca95._58_6_,
                     s_OnnxExecutableNetwork__OnnxExecu_001eca95._56_2_);
    uStack_68 = _UNK_00200628;
    local_70 = _DAT_00200620;
    *(undefined8 *)(local_60 + 0x28) = s_OnnxExecutableNetwork__OnnxExecu_001eca95._40_8_;
    *(undefined8 *)(local_60 + 0x20) = uVar3;
    *(undefined8 *)(local_60 + 0x38) = uVar2;
    *(undefined8 *)(local_60 + 0x30) = uVar4;
    uVar3 = s_OnnxExecutableNetwork__OnnxExecu_001eca95._66_8_;
    uVar2 = CONCAT26(s_OnnxExecutableNetwork__OnnxExecu_001eca95._64_2_,
                     s_OnnxExecutableNetwork__OnnxExecu_001eca95._58_6_);
    local_60[0x4a] = '\0';
    *(undefined8 *)(local_60 + 0x42) = uVar3;
    *(undefined8 *)(local_60 + 0x3a) = uVar2;
    uVar4 = s_OnnxExecutableNetwork__OnnxExecu_001eca95._24_8_;
    uVar3 = s_OnnxExecutableNetwork__OnnxExecu_001eca95._16_8_;
    uVar2 = s_OnnxExecutableNetwork__OnnxExecu_001eca95._0_8_;
    *(undefined8 *)(local_60 + 8) = s_OnnxExecutableNetwork__OnnxExecu_001eca95._8_8_;
    *(undefined8 *)local_60 = uVar2;
    *(undefined8 *)(local_60 + 0x18) = uVar4;
    *(undefined8 *)(local_60 + 0x10) = uVar3;
                    /* try { // try from 0034cf60 to 0034cf7b has its CatchHandler @ 0034cfd0 */
    FUN_00372794(&local_70,
                 "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/inference-engine/src/onnxruntime/src/onnx_executable_network.cpp"
                 ,0x13,"OnnxExecutableNetwork");
    if ((local_70 & 1) != 0) {
      free(local_60);
    }
  }
                    /* try { // try from 0034cf8c to 0034cfa3 has its CatchHandler @ 0034cfec */
  FUN_0034d07c(param_1,1);
  FUN_0034d07c(param_1,0);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0034d07c  FUN_0034d07c =====

void FUN_0034d07c(long param_1,uint param_2)

{
  long *plVar1;
  long *plVar2;
  byte *pbVar3;
  long lVar4;
  size_t __n;
  long lVar5;
  bool bVar6;
  ulong uVar7;
  void *pvVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  byte *pbVar15;
  void *pvVar16;
  long unaff_x26;
  undefined8 uVar17;
  undefined8 local_e0;
  ulong local_d8;
  undefined8 uStack_d0;
  void *local_c8;
  void *local_c0;
  void *local_b8;
  void *local_b0;
  undefined8 local_a8;
  byte local_a0;
  undefined7 uStack_9f;
  undefined8 uStack_98;
  void *local_90;
  void *local_88;
  void *local_80;
  undefined8 local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  bVar6 = (param_2 & 1) == 0;
  local_68 = *(long *)(lVar5 + 0x28);
  lVar4 = 0x38;
  if (bVar6) {
    lVar4 = 0x98;
  }
  lVar13 = 0x20;
  if (bVar6) {
    lVar13 = 0x80;
  }
  lVar4 = param_1 + lVar4;
  lVar12 = 8;
  if (bVar6) {
    lVar12 = 0x68;
  }
  plVar1 = (long *)(param_1 + lVar13);
  if ((param_2 & 1) == 0) {
    uVar7 = FUN_0034f5d8(*(undefined8 *)(param_1 + 200));
  }
  else {
    uVar7 = FUN_0034f570();
  }
  FUN_0034d638(lVar4,uVar7);
  FUN_0034d760(lVar4 + 0x18,uVar7);
  pvVar16 = (void *)*plVar1;
  if ((ulong)((plVar1[2] - (long)pvVar16 >> 3) * -0x5555555555555555) < uVar7) {
    if (0xaaaaaaaaaaaaaaa < uVar7) {
      if (*(long *)(lVar5 + 0x28) == local_68) {
        uVar17 = FUN_00304228(plVar1);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0034d23c with catch @ 0034d49c
                        */
        plVar1[1] = unaff_x26;
        FUN_0034d920(&local_a0);
        if (*(long *)(lVar5 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
          FUN_00755eac(uVar17);
        }
      }
      goto LAB_0034d55c;
    }
    lVar13 = plVar1[1];
    pvVar8 = (void *)FUN_00759c3c(uVar7 * 0x18);
    memcpy(pvVar8,pvVar16,lVar13 - (long)pvVar16);
    *plVar1 = (long)pvVar8;
    plVar1[1] = (long)pvVar8 + (lVar13 - (long)pvVar16);
    plVar1[2] = (long)((long)pvVar8 + uVar7 * 0x18);
    if (pvVar16 != (void *)0x0) {
      free(pvVar16);
    }
  }
  plVar2 = (long *)(param_1 + lVar12);
  uVar14 = plVar2[1] - *plVar2 >> 3;
  if (uVar7 < uVar14 || uVar7 - uVar14 == 0) {
    if (uVar7 < uVar14) {
      plVar2[1] = *plVar2 + uVar7 * 8;
    }
    if (uVar7 != 0) goto LAB_0034d1c4;
  }
  else {
    FUN_0034e648(plVar2,uVar7 - uVar14);
LAB_0034d1c4:
    lVar13 = 0;
    uVar14 = 0;
    do {
      FUN_0034f640(&local_a0,*(undefined8 *)(param_1 + 200),param_2 & 1,uVar14);
      puVar9 = (undefined8 *)plVar1[1];
      if (puVar9 < (undefined8 *)plVar1[2]) {
        if ((local_a0 & 1) == 0) {
          puVar9[2] = local_90;
          puVar9[1] = uStack_98;
          *puVar9 = CONCAT71(uStack_9f,local_a0);
        }
        else {
                    /* try { // try from 0034d23c to 0034d243 has its CatchHandler @ 0034d49c */
          FUN_002fb36c(puVar9,local_90,uStack_98);
        }
        puVar9 = puVar9 + 3;
        plVar1[1] = (long)puVar9;
      }
      else {
                    /* try { // try from 0034d228 to 0034d233 has its CatchHandler @ 0034d4bc */
        puVar9 = (undefined8 *)FUN_0034e788(plVar1,&local_a0);
      }
      plVar1[1] = (long)puVar9;
      pbVar3 = (byte *)(*plVar1 + lVar13);
      pbVar15 = *(byte **)(pbVar3 + 0x10);
      if ((*pbVar3 & 1) == 0) {
        pbVar15 = pbVar3 + 1;
      }
      *(byte **)(*plVar2 + uVar14 * 8) = pbVar15;
                    /* try { // try from 0034d270 to 0034d27b has its CatchHandler @ 0034d534 */
      uVar10 = FUN_0034cde0(&local_88);
      if ((uVar10 & 1) == 0) {
                    /* try { // try from 0034d2a8 to 0034d2bb has its CatchHandler @ 0034d4ac */
        FUN_0034fba0(&local_e0,*(undefined8 *)(param_1 + 200),param_2 & 1,uVar14,local_88,
                     (long)local_80 - (long)local_88 >> 3);
                    /* try { // try from 0034d2c0 to 0034d2c7 has its CatchHandler @ 0034d50c */
        uVar17 = FUN_0034ffe8(*(undefined8 *)(param_1 + 200),&local_e0);
        puVar9 = *(undefined8 **)(lVar4 + 0x20);
        if (puVar9 < *(undefined8 **)(lVar4 + 0x28)) {
          puVar11 = puVar9 + 1;
          *puVar9 = local_e0;
          local_e0 = 0;
        }
        else {
                    /* try { // try from 0034d304 to 0034d30f has its CatchHandler @ 0034d50c */
          puVar11 = (undefined8 *)FUN_0034e938(lVar4 + 0x18,&local_e0);
        }
        *(undefined8 **)(lVar4 + 0x20) = puVar11;
                    /* try { // try from 0034d328 to 0034d32f has its CatchHandler @ 0034d4c0 */
        (**(code **)(DAT_007aaf28 + 0x300))(local_e0);
      }
      else {
        puVar9 = *(undefined8 **)(lVar4 + 0x20);
        local_e0 = 0;
        if (puVar9 < *(undefined8 **)(lVar4 + 0x28)) {
          puVar11 = puVar9 + 1;
          *puVar9 = 0;
        }
        else {
                    /* try { // try from 0034d2ec to 0034d2f7 has its CatchHandler @ 0034d4a8 */
          puVar11 = (undefined8 *)FUN_0034eae8(lVar4 + 0x18,&local_e0);
        }
        uVar17 = 0;
        *(undefined8 **)(lVar4 + 0x20) = puVar11;
      }
      local_e0 = uVar17;
      if ((local_a0 & 1) == 0) {
        local_d8 = CONCAT71(uStack_9f,local_a0);
        uStack_d0 = uStack_98;
        local_c8 = local_90;
      }
      else {
                    /* try { // try from 0034d354 to 0034d35b has its CatchHandler @ 0034d4b0 */
        FUN_002fb36c(&local_d8,local_90,uStack_98);
      }
      pvVar16 = local_88;
      local_c0 = (void *)0x0;
      local_b8 = (void *)0x0;
      local_b0 = (void *)0x0;
      __n = (long)local_80 - (long)local_88;
      if (__n != 0) {
        if ((long)__n < 0) {
          if (*(long *)(lVar5 + 0x28) == local_68) {
                    /* try { // try from 0034d478 to 0034d47f has its CatchHandler @ 0034d4e0 */
                    /* WARNING: Subroutine does not return */
            FUN_0034e528(&local_c0);
          }
          goto LAB_0034d55c;
        }
                    /* try { // try from 0034d374 to 0034d37f has its CatchHandler @ 0034d4d8 */
        local_c0 = (void *)FUN_00759c3c(__n);
        pvVar8 = (void *)((long)local_c0 + __n);
        local_b8 = local_c0;
        local_b0 = pvVar8;
        memcpy(local_c0,pvVar16,__n);
        local_b8 = pvVar8;
      }
      uVar10 = *(ulong *)(lVar4 + 8);
      local_a8 = local_70;
      if (uVar10 < *(ulong *)(lVar4 + 0x10)) {
                    /* try { // try from 0034d3b4 to 0034d3c3 has its CatchHandler @ 0034d4c4 */
        FUN_0034ee7c(lVar4 + 0x10,uVar10,&local_e0);
        lVar12 = uVar10 + 0x40;
        *(long *)(lVar4 + 8) = lVar12;
      }
      else {
                    /* try { // try from 0034d3d4 to 0034d3df has its CatchHandler @ 0034d4b4 */
        lVar12 = FUN_0034ec88(lVar4,&local_e0);
      }
      *(long *)(lVar4 + 8) = lVar12;
      if (local_c0 != (void *)0x0) {
        local_b8 = local_c0;
        free(local_c0);
      }
      if ((local_d8 & 1) != 0) {
        free(local_c8);
      }
      if (local_88 != (void *)0x0) {
        local_80 = local_88;
        free(local_88);
      }
      if ((local_a0 & 1) != 0) {
        free(local_90);
      }
      uVar14 = uVar14 + 1;
      lVar13 = lVar13 + 0x18;
    } while (uVar7 != uVar14);
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
LAB_0034d55c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0034d560  FUN_0034d560 =====

void FUN_0034d560(undefined8 *param_1)

{
  undefined *puVar1;
  void *__ptr;
  undefined8 *puVar2;
  void *__ptr_00;
  undefined8 *puVar3;
  void *pvVar4;
  
  puVar1 = PTR_DAT_007a1488;
  puVar2 = (undefined8 *)param_1[3];
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)param_1[4];
    while (puVar3 != puVar2) {
      puVar3 = puVar3 + -1;
                    /* try { // try from 0034d59c to 0034d59f has its CatchHandler @ 0034d634 */
      (**(code **)(*(long *)puVar1 + 0x300))(*puVar3);
    }
    param_1[4] = puVar2;
    free((void *)param_1[3]);
  }
  __ptr_00 = (void *)*param_1;
  if (__ptr_00 != (void *)0x0) {
    pvVar4 = (void *)param_1[1];
    if (pvVar4 == __ptr_00) {
      param_1[1] = __ptr_00;
      free(__ptr_00);
      return;
    }
    do {
      __ptr = *(void **)((long)pvVar4 + -0x20);
      if (__ptr != (void *)0x0) {
        *(void **)((long)pvVar4 + -0x18) = __ptr;
        free(__ptr);
      }
      if ((*(byte *)((long)pvVar4 + -0x38) & 1) != 0) {
        free(*(void **)((long)pvVar4 + -0x28));
      }
      pvVar4 = (void *)((long)pvVar4 + -0x40);
    } while (pvVar4 != __ptr_00);
    param_1[1] = __ptr_00;
    free((void *)*param_1);
    return;
  }
  return;
}


// ===== 0034d638  FUN_0034d638 =====

void FUN_0034d638(long *param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  void *__ptr;
  ulong *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  
  puVar10 = (undefined8 *)*param_1;
  if (param_2 <= (ulong)(param_1[2] - (long)puVar10 >> 6)) {
    return;
  }
  if (param_2 >> 0x3a == 0) {
    puVar11 = (undefined8 *)param_1[1];
    puVar2 = (undefined8 *)FUN_00759c3c(param_2 * 0x40);
    lVar1 = (long)puVar11 - (long)puVar10;
    puVar4 = puVar2;
    puVar12 = puVar10;
    if (lVar1 != 0) {
      do {
        *puVar4 = *puVar12;
        uVar14 = puVar12[2];
        uVar13 = puVar12[1];
        puVar4[3] = puVar12[3];
        puVar4[2] = uVar14;
        puVar4[1] = uVar13;
        uVar13 = puVar12[4];
        puVar12[2] = 0;
        puVar12[3] = 0;
        puVar12[1] = 0;
        puVar4[5] = puVar12[5];
        puVar4[4] = uVar13;
        puVar4[6] = puVar12[6];
        puVar12[4] = 0;
        puVar12[5] = 0;
        puVar12[6] = 0;
        puVar6 = puVar12 + 8;
        puVar4[7] = puVar12[7];
        puVar4 = puVar4 + 8;
        puVar12 = puVar6;
      } while (puVar6 != puVar11);
      do {
        __ptr = (void *)puVar10[4];
        if (__ptr != (void *)0x0) {
          puVar10[5] = __ptr;
          free(__ptr);
        }
        if ((*(byte *)(puVar10 + 1) & 1) != 0) {
          free((void *)puVar10[3]);
        }
        puVar10 = puVar10 + 8;
      } while (puVar10 != puVar11);
      puVar10 = (undefined8 *)*param_1;
    }
    *param_1 = (long)puVar2;
    param_1[1] = (long)puVar2 + lVar1;
    param_1[2] = (long)(puVar2 + param_2 * 8);
    if (puVar10 == (undefined8 *)0x0) {
      return;
    }
    free(puVar10);
    return;
  }
  auVar17 = FUN_0034e5b8(param_1);
  uVar5 = auVar17._8_8_;
  puVar3 = auVar17._0_8_;
  puVar10 = (undefined8 *)*puVar3;
  if (uVar5 <= (ulong)((long)(puVar3[2] - (long)puVar10) >> 3)) {
    return;
  }
  if (uVar5 >> 0x3d != 0) {
    FUN_0034e5a4(puVar3);
                    /* WARNING: Subroutine does not return */
    FUN_002fb198();
  }
  puVar12 = (undefined8 *)puVar3[1];
  puVar4 = (undefined8 *)FUN_00759c3c(uVar5 * 8);
  lVar1 = (long)puVar12 - (long)puVar10;
  if (lVar1 == 0) goto LAB_0034d888;
  uVar7 = lVar1 - 8;
  puVar2 = puVar4;
  puVar11 = puVar10;
  if ((uVar7 < 0x98) ||
     ((puVar4 < (undefined8 *)((long)puVar10 + (uVar7 & 0xfffffffffffffff8) + 8) &&
      (puVar10 < (undefined8 *)((long)puVar4 + (uVar7 & 0xfffffffffffffff8) + 8))))) {
LAB_0034d84c:
    do {
      *puVar2 = *puVar11;
      puVar6 = puVar11 + 1;
      *puVar11 = 0;
      puVar2 = puVar2 + 1;
      puVar11 = puVar6;
    } while (puVar6 != puVar12);
  }
  else {
    puVar2 = puVar10 + 2;
    uVar7 = (uVar7 >> 3) + 1;
    uVar8 = uVar7 & 0x3ffffffffffffffc;
    puVar11 = (undefined8 *)((long)puVar4 + lVar1 + (lVar1 >> 3) * -8 + 0x10);
    uVar9 = uVar8;
    do {
      uVar14 = puVar2[-1];
      uVar13 = puVar2[-2];
      uVar16 = puVar2[1];
      uVar15 = *puVar2;
      uVar9 = uVar9 - 4;
      puVar2[-1] = 0;
      puVar2[-2] = 0;
      puVar2[1] = 0;
      *puVar2 = 0;
      puVar2 = puVar2 + 4;
      puVar11[-1] = uVar14;
      puVar11[-2] = uVar13;
      puVar11[1] = uVar16;
      *puVar11 = uVar15;
      puVar11 = puVar11 + 4;
    } while (uVar9 != 0);
    puVar2 = puVar4 + uVar8;
    puVar11 = puVar10 + uVar8;
    if (uVar7 != uVar8) goto LAB_0034d84c;
  }
  do {
    (**(code **)(DAT_007aaf28 + 0x300))(*puVar10);
    puVar10 = puVar10 + 1;
  } while (puVar10 != puVar12);
  puVar10 = (undefined8 *)*puVar3;
LAB_0034d888:
  *puVar3 = (ulong)puVar4;
  puVar3[1] = (long)puVar4 + lVar1;
  puVar3[2] = (ulong)(puVar4 + uVar5);
  if (puVar10 == (undefined8 *)0x0) {
    return;
  }
  free(puVar10);
  return;
}


// ===== 0034d760  FUN_0034d760 =====

void FUN_0034d760(ulong *param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *__ptr;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  __ptr = (undefined8 *)*param_1;
  if (param_2 <= (ulong)((long)(param_1[2] - (long)__ptr) >> 3)) {
    return;
  }
  if (param_2 >> 0x3d != 0) {
    FUN_0034e5a4(param_1);
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0034d874 with catch @ 0034d8d8
                        */
    FUN_002fb198();
  }
  puVar9 = (undefined8 *)param_1[1];
  puVar2 = (undefined8 *)FUN_00759c3c(param_2 * 8);
  lVar1 = (long)puVar9 - (long)__ptr;
  if (lVar1 == 0) goto LAB_0034d888;
  uVar6 = lVar1 - 8;
  puVar3 = puVar2;
  puVar4 = __ptr;
  if ((uVar6 < 0x98) ||
     ((puVar2 < (undefined8 *)((long)__ptr + (uVar6 & 0xfffffffffffffff8) + 8) &&
      (__ptr < (undefined8 *)((long)puVar2 + (uVar6 & 0xfffffffffffffff8) + 8))))) {
LAB_0034d84c:
    do {
      *puVar3 = *puVar4;
      puVar5 = puVar4 + 1;
      *puVar4 = 0;
      puVar3 = puVar3 + 1;
      puVar4 = puVar5;
    } while (puVar5 != puVar9);
  }
  else {
    puVar3 = __ptr + 2;
    uVar6 = (uVar6 >> 3) + 1;
    uVar7 = uVar6 & 0x3ffffffffffffffc;
    puVar4 = (undefined8 *)((long)puVar2 + lVar1 + (lVar1 >> 3) * -8 + 0x10);
    uVar8 = uVar7;
    do {
      uVar11 = puVar3[-1];
      uVar10 = puVar3[-2];
      uVar13 = puVar3[1];
      uVar12 = *puVar3;
      uVar8 = uVar8 - 4;
      puVar3[-1] = 0;
      puVar3[-2] = 0;
      puVar3[1] = 0;
      *puVar3 = 0;
      puVar3 = puVar3 + 4;
      puVar4[-1] = uVar11;
      puVar4[-2] = uVar10;
      puVar4[1] = uVar13;
      *puVar4 = uVar12;
      puVar4 = puVar4 + 4;
    } while (uVar8 != 0);
    puVar3 = puVar2 + uVar7;
    puVar4 = __ptr + uVar7;
    if (uVar6 != uVar7) goto LAB_0034d84c;
  }
  do {
                    /* try { // try from 0034d874 to 0034d877 has its CatchHandler @ 0034d8d8 */
    (**(code **)(DAT_007aaf28 + 0x300))(*__ptr);
    __ptr = __ptr + 1;
  } while (__ptr != puVar9);
  __ptr = (undefined8 *)*param_1;
LAB_0034d888:
  *param_1 = (ulong)puVar2;
  param_1[1] = (long)puVar2 + lVar1;
  param_1[2] = (ulong)(puVar2 + param_2);
  if (__ptr == (undefined8 *)0x0) {
    return;
  }
  free(__ptr);
  return;
}


// ===== 0034d8dc  FUN_0034d8dc =====

void FUN_0034d8dc(long param_1)

{
  void *__ptr;
  
  __ptr = *(void **)(param_1 + 0x20);
  if (__ptr != (void *)0x0) {
    *(void **)(param_1 + 0x28) = __ptr;
    free(__ptr);
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  free(*(void **)(param_1 + 0x18));
  return;
}


// ===== 0034d920  FUN_0034d920 =====

void FUN_0034d920(byte *param_1)

{
  void *__ptr;
  
  __ptr = *(void **)(param_1 + 0x18);
  if (__ptr != (void *)0x0) {
    *(void **)(param_1 + 0x20) = __ptr;
    free(__ptr);
  }
  if ((*param_1 & 1) == 0) {
    return;
  }
  free(*(void **)(param_1 + 0x10));
  return;
}


// ===== 0034d964  FUN_0034d964 =====

void FUN_0034d964(long param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  void *__ptr;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  
  puVar3 = PTR_DAT_007a1488;
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (*(long *)(param_1 + 0xa0) != *(long *)(param_1 + 0x98)) {
    lVar8 = 0;
    lVar9 = 0;
    uVar10 = 0;
    do {
      lVar13 = *(long *)(param_1 + 0xb0);
      lVar11 = *param_2;
                    /* try { // try from 0034da10 to 0034da13 has its CatchHandler @ 0034daa8 */
      (**(code **)(*(long *)puVar3 + 0x300))(*(undefined8 *)(lVar13 + lVar9));
      uVar6 = *(undefined8 *)(lVar11 + lVar9);
      *(undefined8 *)(lVar11 + lVar9) = 0;
      lVar12 = *(long *)(param_1 + 0xb0);
      uVar5 = *(undefined8 *)(param_1 + 200);
      lVar7 = *(long *)(param_1 + 0x98);
      *(undefined8 *)(lVar13 + lVar9) = uVar6;
      uVar4 = FUN_0035004c(uVar5,lVar12 + lVar9);
      uVar5 = *(undefined8 *)(param_1 + 200);
      lVar11 = lVar7 + lVar8;
      *(undefined4 *)(lVar11 + 0x38) = uVar4;
      *(undefined4 *)(lVar11 + 0x3c) = 0;
      FUN_00350124(&local_80,uVar5,lVar12 + lVar9);
      puVar14 = (undefined8 *)(lVar11 + 0x20);
      __ptr = (void *)*puVar14;
      puVar1 = (undefined8 *)(lVar7 + lVar9 * 8);
      if (__ptr != (void *)0x0) {
        puVar1[5] = __ptr;
        free(__ptr);
        *puVar14 = 0;
        *(undefined8 *)(lVar11 + 0x28) = 0;
        *(undefined8 *)(lVar11 + 0x30) = 0;
      }
      *(undefined8 *)(lVar11 + 0x28) = uStack_78;
      *puVar14 = local_80;
      puVar1[6] = local_70;
      uVar5 = FUN_0034ffe8(*(undefined8 *)(param_1 + 200),lVar12 + lVar9);
      lVar11 = *(long *)(param_1 + 0x98);
      lVar7 = *(long *)(param_1 + 0xa0);
      uVar10 = uVar10 + 1;
      lVar9 = lVar9 + 8;
      lVar8 = lVar8 + 0x40;
      *puVar1 = uVar5;
    } while (uVar10 < (ulong)(lVar7 - lVar11 >> 6));
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0034daac  FUN_0034daac =====

void FUN_0034daac(long param_1,long *param_2,long *param_3,long param_4,undefined8 *param_5)

{
  long lVar1;
  long lVar2;
  void *__s2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  size_t __n;
  long lVar10;
  long lVar11;
  undefined8 local_80 [3];
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  lVar10 = *param_2;
  lVar3 = param_2[1];
  if (lVar3 - lVar10 >> 6 != param_3[1] - *param_3 >> 3) {
    uVar9 = FUN_00753a74(0x20);
                    /* try { // try from 0034dc48 to 0034dc57 has its CatchHandler @ 0034dd28 */
    FUN_002fd2b0(local_80,"The numbers of native and ORT tensors differ.");
                    /* try { // try from 0034dc5c to 0034dc97 has its CatchHandler @ 0034dd0c */
    uVar8 = FUN_00374ee0(uVar9,local_80);
    if (*(long *)(lVar5 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar9,PTR_PTR_007a1338,PTR_FUN_007a11f8);
    }
    goto LAB_0034dd50;
  }
  lVar1 = 0;
  do {
    lVar11 = lVar1;
    lVar2 = lVar10 + lVar11;
    lVar1 = lVar11 + 0x40;
    if (lVar2 == lVar3) break;
  } while (lVar2 != param_4);
  if (lVar2 != lVar3) {
    lVar10 = lVar10 + lVar1;
    __s2 = (void *)*param_5;
    lVar4 = param_5[1];
    __n = *(long *)(lVar10 + -0x18) - (long)*(void **)(lVar10 + -0x20);
    if (__n == lVar4 - (long)__s2) {
      iVar7 = memcmp(*(void **)(lVar10 + -0x20),__s2,__n);
      if (iVar7 == 0) goto LAB_0034dc00;
    }
    lVar11 = lVar11 >> 6;
    FUN_0034fcec(local_80,*(undefined8 *)(param_1 + 200),__s2,lVar4 - (long)__s2 >> 3,
                 *(undefined4 *)(lVar10 + -8));
    puVar6 = PTR_DAT_007a1488;
    lVar10 = *param_3;
                    /* try { // try from 0034db9c to 0034db9f has its CatchHandler @ 0034dd58 */
    (**(code **)(*(long *)PTR_DAT_007a1488 + 0x300))(*(undefined8 *)(lVar10 + lVar11 * 8));
    uVar9 = local_80[0];
    local_80[0] = 0;
    *(undefined8 *)(lVar10 + lVar11 * 8) = uVar9;
                    /* try { // try from 0034dbb8 to 0034dbbb has its CatchHandler @ 0034dd54 */
    (**(code **)(*(long *)puVar6 + 0x300))(0);
    lVar10 = FUN_0034ffe8(*(undefined8 *)(param_1 + 200),*param_3 + lVar11 * 8);
    lVar11 = *param_2;
    *(long *)(lVar11 + lVar1 + -0x40) = lVar10;
    if (lVar10 == 0) {
      uVar9 = FUN_00753a74(0x20);
                    /* try { // try from 0034dca8 to 0034dcb7 has its CatchHandler @ 0034dd08 */
      FUN_002fd2b0(local_80,"Failed to retrieve the tensor data pointer");
                    /* try { // try from 0034dcbc to 0034dcf7 has its CatchHandler @ 0034dcf8 */
      uVar8 = FUN_00374fd0(uVar9,local_80);
      if (*(long *)(lVar5 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar9,PTR_PTR_007a1350,PTR_FUN_007a11f8);
      }
      goto LAB_0034dd50;
    }
    if ((undefined8 *)(lVar11 + lVar1 + -0x20) != param_5) {
      FUN_0034ef8c();
    }
  }
LAB_0034dc00:
  uVar8 = (ulong)(lVar2 != lVar3);
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
LAB_0034dd50:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}


// ===== 0034dd5c  FUN_0034dd5c =====

long FUN_0034dd5c(long param_1)

{
  return param_1 + 0x38;
}


// ===== 0034dd64  FUN_0034dd64 =====

long FUN_0034dd64(long param_1)

{
  return param_1 + 0x98;
}


// ===== 0034dd6c  FUN_0034dd6c =====

void FUN_0034dd6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_88 [24];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_0034cde0(param_3);
  if ((uVar2 & 1) == 0) {
    uVar2 = FUN_0034daac(param_1,param_1 + 0x38,param_1 + 0x50,param_2,param_3);
    if (((uVar2 & 1) == 0) &&
       (uVar2 = FUN_0034daac(param_1,param_1 + 0x98,param_1 + 0xb0,param_2,param_3),
       (uVar2 & 1) == 0)) {
      uVar3 = FUN_00753a74(0x20);
                    /* try { // try from 0034de68 to 0034de73 has its CatchHandler @ 0034df78 */
      FUN_0034ce18(auStack_88,param_2);
                    /* try { // try from 0034de74 to 0034de87 has its CatchHandler @ 0034df60 */
      puVar4 = (undefined8 *)FUN_00713170(auStack_88,0,"Tensor with name: \"");
      local_60 = puVar4[2];
      uStack_68 = puVar4[1];
      local_70 = *puVar4;
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = 0;
                    /* try { // try from 0034dea0 to 0034deaf has its CatchHandler @ 0034df38 */
      puVar4 = (undefined8 *)FUN_00713bdc(&local_70,"\" isn\'t available for reshape");
      local_40 = puVar4[2];
      uStack_48 = puVar4[1];
      local_50 = *puVar4;
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = 0;
                    /* try { // try from 0034decc to 0034df03 has its CatchHandler @ 0034df04 */
      FUN_00374ee0(uVar3,&local_50);
      if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar3,PTR_PTR_007a1338,PTR_FUN_007a11f8);
      }
    }
    else if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
  }
  else {
    uVar3 = FUN_00753a74(0x20);
                    /* try { // try from 0034de0c to 0034de1b has its CatchHandler @ 0034df98 */
    FUN_002fd2b0(&local_50,"Shape values should be non negative");
                    /* try { // try from 0034de20 to 0034de57 has its CatchHandler @ 0034df7c */
    FUN_00374ee0(uVar3,&local_50);
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar3,PTR_PTR_007a1338,PTR_FUN_007a11f8);
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0034dfc0  FUN_0034dfc0 =====

void FUN_0034dfc0(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *local_50;
  undefined8 *local_48;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  plVar1 = *(long **)(param_1 + 0x38);
  do {
    if (plVar1 == *(long **)(param_1 + 0x40)) {
      FUN_003502a4(&local_50,*(undefined8 *)(param_1 + 200),param_1 + 8,param_1 + 0x50,
                   param_1 + 0x68,param_1 + 0xb0);
                    /* try { // try from 0034e024 to 0034e02f has its CatchHandler @ 0034e0e8 */
      FUN_0034d964(param_1,&local_50);
      puVar4 = local_50;
      puVar3 = PTR_DAT_007a1488;
      if (local_50 != (undefined8 *)0x0) {
        while (local_48 != puVar4) {
                    /* try { // try from 0034e058 to 0034e05b has its CatchHandler @ 0034e144 */
          (**(code **)(*(long *)puVar3 + 0x300))(local_48[-1]);
          local_48 = local_48 + -1;
        }
        local_48 = puVar4;
        free(local_50);
      }
      if (*(long *)(lVar2 + 0x28) == local_38) {
        return;
      }
LAB_0034e140:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if (*plVar1 == 0) {
      uVar5 = FUN_00753a74(0x20);
                    /* try { // try from 0034e09c to 0034e0ab has its CatchHandler @ 0034e11c */
      FUN_002fd2b0(&local_50,"Invalid input tensor");
                    /* try { // try from 0034e0b0 to 0034e0e7 has its CatchHandler @ 0034e0f8 */
      FUN_00374ee0(uVar5,&local_50);
      if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar5,PTR_PTR_007a1338,PTR_FUN_007a11f8);
      }
      goto LAB_0034e140;
    }
    plVar1 = plVar1 + 8;
  } while( true );
}


// ===== 0034e148  FUN_0034e148 =====

void FUN_0034e148(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar1 = PTR_DAT_007a1488;
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)param_1[1];
    while (puVar3 != puVar2) {
      puVar3 = puVar3 + -1;
                    /* try { // try from 0034e184 to 0034e187 has its CatchHandler @ 0034e1b4 */
      (**(code **)(*(long *)puVar1 + 0x300))(*puVar3);
    }
    param_1[1] = puVar2;
    free((void *)*param_1);
    return;
  }
  return;
}


// ===== 0034e1b8  FUN_0034e1b8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0034e1b8(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_50;
  undefined8 uStack_48;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar5 = FUN_00753a74(0x20);
                    /* try { // try from 0034e1e4 to 0034e1eb has its CatchHandler @ 0034e278 */
  local_40 = (char *)FUN_00759c3c(0x30);
  uVar4 = s_OnnxExecutableNetwork__reset__No_001d7dd3._16_8_;
  uVar3 = s_OnnxExecutableNetwork__reset__No_001d7dd3._0_8_;
  uVar2 = CONCAT35(s_OnnxExecutableNetwork__reset__No_001d7dd3._29_3_,
                   s_OnnxExecutableNetwork__reset__No_001d7dd3._24_5_);
  uStack_48 = _UNK_00200978;
  local_50 = _DAT_00200970;
  *(undefined8 *)(local_40 + 8) = s_OnnxExecutableNetwork__reset__No_001d7dd3._8_8_;
  *(undefined8 *)local_40 = uVar3;
  *(undefined8 *)(local_40 + 0x18) = uVar2;
  *(undefined8 *)(local_40 + 0x10) = uVar4;
  uVar3 = s_OnnxExecutableNetwork__reset__No_001d7dd3._37_8_;
  uVar2 = CONCAT53(s_OnnxExecutableNetwork__reset__No_001d7dd3._32_5_,
                   s_OnnxExecutableNetwork__reset__No_001d7dd3._29_3_);
  local_40[0x2d] = '\0';
  *(undefined8 *)(local_40 + 0x25) = uVar3;
  *(undefined8 *)(local_40 + 0x1d) = uVar2;
                    /* try { // try from 0034e21c to 0034e253 has its CatchHandler @ 0034e254 */
  FUN_00374fd0(uVar5,&local_50);
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(uVar5,PTR_PTR_007a1350,PTR_FUN_007a11f8);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0034e2a0  FUN_0034e2a0 =====

void FUN_0034e2a0(long *param_1)

{
  long lVar1;
  void *pvVar2;
  byte *pbVar3;
  long *plVar4;
  undefined8 *puVar5;
  void *pvVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  void *pvVar9;
  byte *pbVar10;
  
  plVar4 = (long *)param_1[0x1a];
  *param_1 = (long)(PTR_DAT_007a1498 + 0x10);
  if ((plVar4 == (long *)0x0) || (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar4 + 1), lVar1 != 0))
  {
    puVar5 = (undefined8 *)param_1[0x16];
    plVar4 = (long *)PTR_DAT_007a1488;
  }
  else {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_0071245c(plVar4);
    puVar5 = (undefined8 *)param_1[0x16];
    plVar4 = (long *)PTR_DAT_007a1488;
  }
  PTR_DAT_007a1488 = (undefined *)plVar4;
  if (puVar5 != (undefined8 *)0x0) {
    puVar8 = (undefined8 *)param_1[0x17];
    while (puVar8 != puVar5) {
      puVar8 = puVar8 + -1;
                    /* try { // try from 0034e304 to 0034e307 has its CatchHandler @ 0034e500 */
      (**(code **)(*plVar4 + 0x300))(*puVar8);
    }
    param_1[0x17] = (long)puVar5;
    free((void *)param_1[0x16]);
  }
  pvVar6 = (void *)param_1[0x13];
  if (pvVar6 != (void *)0x0) {
    pvVar9 = (void *)param_1[0x14];
    pvVar2 = pvVar6;
    if (pvVar9 != pvVar6) {
      do {
        pvVar2 = *(void **)((long)pvVar9 + -0x20);
        if (pvVar2 != (void *)0x0) {
          *(void **)((long)pvVar9 + -0x18) = pvVar2;
          free(pvVar2);
        }
        if ((*(byte *)((long)pvVar9 + -0x38) & 1) != 0) {
          free(*(void **)((long)pvVar9 + -0x28));
        }
        pvVar9 = (void *)((long)pvVar9 + -0x40);
      } while (pvVar9 != pvVar6);
      pvVar2 = (void *)param_1[0x13];
    }
    param_1[0x14] = (long)pvVar6;
    free(pvVar2);
  }
  pbVar7 = (byte *)param_1[0x10];
  if (pbVar7 != (byte *)0x0) {
    pbVar3 = (byte *)param_1[0x11];
    pbVar10 = pbVar7;
    if (pbVar3 != pbVar7) {
      do {
        pbVar10 = pbVar3 + -0x18;
        if ((*pbVar10 & 1) != 0) {
          free(*(void **)(pbVar3 + -8));
        }
        pbVar3 = pbVar10;
      } while (pbVar10 != pbVar7);
      pbVar10 = (byte *)param_1[0x10];
    }
    param_1[0x11] = (long)pbVar7;
    free(pbVar10);
  }
  pvVar6 = (void *)param_1[0xd];
  if (pvVar6 != (void *)0x0) {
    param_1[0xe] = (long)pvVar6;
    free(pvVar6);
  }
  puVar5 = (undefined8 *)param_1[10];
  if (puVar5 != (undefined8 *)0x0) {
    puVar8 = (undefined8 *)param_1[0xb];
    while (puVar8 != puVar5) {
      puVar8 = puVar8 + -1;
                    /* try { // try from 0034e3ec to 0034e3ef has its CatchHandler @ 0034e4fc */
      (**(code **)(*plVar4 + 0x300))(*puVar8);
    }
    param_1[0xb] = (long)puVar5;
    free((void *)param_1[10]);
  }
  pvVar6 = (void *)param_1[7];
  if (pvVar6 != (void *)0x0) {
    pvVar9 = (void *)param_1[8];
    pvVar2 = pvVar6;
    if (pvVar9 != pvVar6) {
      do {
        pvVar2 = *(void **)((long)pvVar9 + -0x20);
        if (pvVar2 != (void *)0x0) {
          *(void **)((long)pvVar9 + -0x18) = pvVar2;
          free(pvVar2);
        }
        if ((*(byte *)((long)pvVar9 + -0x38) & 1) != 0) {
          free(*(void **)((long)pvVar9 + -0x28));
        }
        pvVar9 = (void *)((long)pvVar9 + -0x40);
      } while (pvVar9 != pvVar6);
      pvVar2 = (void *)param_1[7];
    }
    param_1[8] = (long)pvVar6;
    free(pvVar2);
  }
  pbVar7 = (byte *)param_1[4];
  if (pbVar7 != (byte *)0x0) {
    pbVar3 = (byte *)param_1[5];
    pbVar10 = pbVar7;
    if (pbVar3 != pbVar7) {
      do {
        pbVar10 = pbVar3 + -0x18;
        if ((*pbVar10 & 1) != 0) {
          free(*(void **)(pbVar3 + -8));
        }
        pbVar3 = pbVar10;
      } while (pbVar10 != pbVar7);
      pbVar10 = (byte *)param_1[4];
    }
    param_1[5] = (long)pbVar7;
    free(pbVar10);
  }
  pvVar6 = (void *)param_1[1];
  if (pvVar6 != (void *)0x0) {
    param_1[2] = (long)pvVar6;
    free(pvVar6);
    return;
  }
  return;
}


// ===== 0034e504  FUN_0034e504 =====

void FUN_0034e504(void *param_1)

{
  FUN_0034e2a0();
  free(param_1);
  return;
}


// ===== 0034e528  FUN_0034e528 =====

void FUN_0034e528(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_002f9e60("vector");
}


// ===== 0034e53c  FUN_0034e53c =====

void FUN_0034e53c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1[1];
  lVar3 = param_1[2];
  while (lVar2 = lVar3, lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x18;
    lVar3 = lVar2 + -0x18;
    if ((*(byte *)(lVar2 + -0x18) & 1) != 0) {
      free(*(void **)(lVar2 + -8));
      lVar3 = param_1[2];
    }
  }
  if ((void *)*param_1 != (void *)0x0) {
    free((void *)*param_1);
    return;
  }
  return;
}


// ===== 0034e5a4  FUN_0034e5a4 =====

void FUN_0034e5a4(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_002f9e60("vector");
}


// ===== 0034e5b8  FUN_0034e5b8 =====

void FUN_0034e5b8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_002f9e60("vector");
}


// ===== 0034e5cc  FUN_0034e5cc =====

void FUN_0034e5cc(undefined8 *param_1)

{
  long lVar1;
  void *__ptr;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    __ptr = *(void **)(lVar2 + -0x20);
    param_1[2] = lVar2 + -0x40;
    if (__ptr != (void *)0x0) {
      *(void **)(lVar2 + -0x18) = __ptr;
      free(__ptr);
    }
    if ((*(byte *)(lVar2 + -0x38) & 1) != 0) {
      free(*(void **)(lVar2 + -0x28));
    }
    lVar2 = param_1[2];
  }
  if ((void *)*param_1 != (void *)0x0) {
    free((void *)*param_1);
    return;
  }
  return;
}


// ===== 0034e648  FUN_0034e648 =====

void FUN_0034e648(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  void *__s;
  void *__dest;
  ulong uVar2;
  ulong uVar3;
  void *__src;
  void *__s_00;
  long lVar4;
  
  __s_00 = (void *)param_1[1];
  if ((ulong)(param_1[2] - (long)__s_00 >> 3) < param_2) {
    __src = (void *)*param_1;
    lVar4 = (long)__s_00 - (long)__src >> 3;
    uVar1 = lVar4 + param_2;
    if (uVar1 >> 0x3d != 0) {
      FUN_0034e774(param_1);
LAB_0034e770:
                    /* WARNING: Subroutine does not return */
      FUN_002f9ee0();
    }
    uVar2 = param_1[2] - (long)__src;
    uVar3 = (long)uVar2 >> 2;
    if (uVar3 <= uVar1) {
      uVar3 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar2) {
      uVar3 = 0x1fffffffffffffff;
    }
    if (uVar3 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar3 >> 0x3d != 0) goto LAB_0034e770;
      __dest = (void *)FUN_00759c3c(uVar3 << 3);
    }
    __s = (void *)((long)__dest + lVar4 * 8);
    memset(__s,0,param_2 * 8);
    memcpy(__dest,__src,(long)__s_00 - (long)__src);
    *param_1 = __dest;
    param_1[1] = (void *)((long)__s + param_2 * 8);
    param_1[2] = (void *)((long)__dest + uVar3 * 8);
    if (__src != (void *)0x0) {
      free(__src);
      return;
    }
  }
  else {
    if (param_2 != 0) {
      memset(__s_00,0,param_2 * 8);
      __s_00 = (void *)((long)__s_00 + param_2 * 8);
    }
    param_1[1] = __s_00;
  }
  return;
}


// ===== 0034e774  FUN_0034e774 =====

void FUN_0034e774(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_002f9e60("vector");
}


// ===== 0034e788  FUN_0034e788 =====

undefined8 * FUN_0034e788(long *param_1,byte *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  size_t __n;
  undefined8 uVar9;
  
  lVar2 = tpidr_el0;
  lVar5 = *(long *)(lVar2 + 0x28);
  pvVar4 = (void *)*param_1;
  __n = param_1[1] - (long)pvVar4;
  uVar1 = ((long)__n >> 3) * -0x5555555555555555 + 1;
  if (uVar1 < 0xaaaaaaaaaaaaaab) {
    lVar7 = param_1[2] - (long)pvVar4 >> 3;
    uVar8 = lVar7 * 0x5555555555555556;
    if (uVar8 < uVar1 || uVar8 - uVar1 == 0) {
      uVar8 = uVar1;
    }
    if (0x555555555555554 < (ulong)(lVar7 * -0x5555555555555555)) {
      uVar8 = 0xaaaaaaaaaaaaaaa;
    }
    if (uVar8 == 0) {
      lVar7 = 0;
    }
    else {
      if (0xaaaaaaaaaaaaaaa < uVar8) goto LAB_0034e8fc;
      lVar7 = FUN_00759c3c(uVar8 * 0x18);
    }
    puVar3 = (undefined8 *)(lVar7 + ((long)__n >> 3) * 8);
    if ((*param_2 & 1) == 0) {
      uVar9 = *(undefined8 *)param_2;
      uVar6 = *(undefined8 *)(param_2 + 0x10);
      puVar3[1] = *(undefined8 *)(param_2 + 8);
      *puVar3 = uVar9;
      puVar3[2] = uVar6;
    }
    else {
                    /* try { // try from 0034e874 to 0034e877 has its CatchHandler @ 0034e910 */
      FUN_002fb36c(puVar3,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 8));
      pvVar4 = (void *)*param_1;
      __n = param_1[1] - (long)pvVar4;
    }
    memcpy((void *)((long)puVar3 - __n),pvVar4,__n);
    pvVar4 = (void *)*param_1;
    *param_1 = (long)((long)puVar3 - __n);
    param_1[1] = (long)(puVar3 + 3);
    param_1[2] = lVar7 + uVar8 * 0x18;
    if (pvVar4 != (void *)0x0) {
      free(pvVar4);
    }
    if (*(long *)(lVar2 + 0x28) == lVar5) {
      return puVar3 + 3;
    }
  }
  else {
    if (*(long *)(lVar2 + 0x28) != lVar5) goto LAB_0034e934;
    FUN_00304228(param_1);
LAB_0034e8fc:
    if (*(long *)(lVar2 + 0x28) == lVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_002f9ee0();
    }
  }
LAB_0034e934:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0034e938  FUN_0034e938 =====

undefined8 * FUN_0034e938(ulong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *__ptr;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar13 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  lVar12 = (long)puVar2 - (long)puVar13 >> 3;
  uVar9 = lVar12 + 1;
  if (uVar9 >> 0x3d != 0) {
    FUN_0034e5a4(param_1);
LAB_0034eae0:
                    /* WARNING: Subroutine does not return */
    FUN_002f9ee0();
  }
  uVar8 = (long)(param_1[2] - (long)puVar13) >> 2;
  if (uVar8 <= uVar9) {
    uVar8 = uVar9;
  }
  if (0x7ffffffffffffff7 < param_1[2] - (long)puVar13) {
    uVar8 = 0x1fffffffffffffff;
  }
  if (uVar8 == 0) {
    puVar3 = (undefined8 *)0x0;
    puVar1 = (undefined8 *)(lVar12 * 8);
    uVar4 = *param_2;
    *param_2 = 0;
    *puVar1 = uVar4;
  }
  else {
    if (uVar8 >> 0x3d != 0) goto LAB_0034eae0;
    puVar3 = (undefined8 *)FUN_00759c3c(uVar8 << 3);
    puVar1 = puVar3 + lVar12;
    uVar4 = *param_2;
    *param_2 = 0;
    *puVar1 = uVar4;
  }
  if (puVar13 == puVar2) goto LAB_0034eaa4;
  uVar9 = ((long)puVar2 - (long)puVar13) - 8;
  puVar5 = puVar3;
  puVar6 = puVar13;
  if ((uVar9 < 0x58) ||
     ((lVar12 = (uVar9 & 0xfffffffffffffff8) + 8, puVar3 < (undefined8 *)((long)puVar13 + lVar12) &&
      (puVar13 < (undefined8 *)((long)puVar3 + lVar12))))) {
LAB_0034ea6c:
    do {
      *puVar5 = *puVar6;
      puVar7 = puVar6 + 1;
      *puVar6 = 0;
      puVar5 = puVar5 + 1;
      puVar6 = puVar7;
    } while (puVar7 != puVar2);
  }
  else {
    puVar5 = puVar13 + 2;
    puVar6 = puVar3 + 2;
    uVar9 = (uVar9 >> 3) + 1;
    uVar10 = uVar9 & 0x3ffffffffffffffc;
    uVar11 = uVar10;
    do {
      uVar14 = puVar5[-1];
      uVar4 = puVar5[-2];
      uVar16 = puVar5[1];
      uVar15 = *puVar5;
      uVar11 = uVar11 - 4;
      puVar5[-1] = 0;
      puVar5[-2] = 0;
      puVar5[1] = 0;
      *puVar5 = 0;
      puVar5 = puVar5 + 4;
      puVar6[-1] = uVar14;
      puVar6[-2] = uVar4;
      puVar6[1] = uVar16;
      *puVar6 = uVar15;
      puVar6 = puVar6 + 4;
    } while (uVar11 != 0);
    puVar5 = puVar3 + uVar10;
    puVar6 = puVar13 + uVar10;
    if (uVar9 != uVar10) goto LAB_0034ea6c;
  }
  do {
                    /* try { // try from 0034ea94 to 0034ea97 has its CatchHandler @ 0034eae4 */
    (**(code **)(DAT_007aaf28 + 0x300))(*puVar13);
    puVar13 = puVar13 + 1;
  } while (puVar13 != puVar2);
LAB_0034eaa4:
  __ptr = (void *)*param_1;
  *param_1 = (ulong)puVar3;
  param_1[1] = (ulong)(puVar1 + 1);
  param_1[2] = (ulong)(puVar3 + uVar8);
  if (__ptr != (void *)0x0) {
    free(__ptr);
  }
  return puVar1 + 1;
}


// ===== 0034eae8  FUN_0034eae8 =====

undefined8 * FUN_0034eae8(ulong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *__ptr;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar11 = (undefined8 *)*param_1;
  __ptr = (undefined8 *)param_1[1];
  lVar10 = (long)__ptr - (long)puVar11 >> 3;
  uVar7 = lVar10 + 1;
  if (uVar7 >> 0x3d != 0) {
    FUN_0034e5a4(param_1);
LAB_0034ec80:
                    /* WARNING: Subroutine does not return */
    FUN_002f9ee0();
  }
  uVar6 = (long)(param_1[2] - (long)puVar11) >> 2;
  if (uVar6 <= uVar7) {
    uVar6 = uVar7;
  }
  if (0x7ffffffffffffff7 < param_1[2] - (long)puVar11) {
    uVar6 = 0x1fffffffffffffff;
  }
  if (uVar6 == 0) {
    puVar2 = (undefined8 *)0x0;
    puVar1 = (undefined8 *)(lVar10 * 8);
    *puVar1 = 0;
  }
  else {
    if (uVar6 >> 0x3d != 0) goto LAB_0034ec80;
    puVar2 = (undefined8 *)FUN_00759c3c(uVar6 << 3);
    puVar1 = puVar2 + lVar10;
    *puVar1 = 0;
  }
  if (puVar11 == __ptr) goto LAB_0034ec44;
  uVar7 = ((long)__ptr - (long)puVar11) - 8;
  puVar3 = puVar2;
  puVar4 = puVar11;
  if ((uVar7 < 0x58) ||
     ((lVar10 = (uVar7 & 0xfffffffffffffff8) + 8, puVar2 < (undefined8 *)((long)puVar11 + lVar10) &&
      (puVar11 < (undefined8 *)((long)puVar2 + lVar10))))) {
LAB_0034ec08:
    do {
      *puVar3 = *puVar4;
      puVar5 = puVar4 + 1;
      *puVar4 = 0;
      puVar3 = puVar3 + 1;
      puVar4 = puVar5;
    } while (puVar5 != __ptr);
  }
  else {
    puVar3 = puVar11 + 2;
    puVar4 = puVar2 + 2;
    uVar7 = (uVar7 >> 3) + 1;
    uVar8 = uVar7 & 0x3ffffffffffffffc;
    uVar9 = uVar8;
    do {
      uVar13 = puVar3[-1];
      uVar12 = puVar3[-2];
      uVar15 = puVar3[1];
      uVar14 = *puVar3;
      uVar9 = uVar9 - 4;
      puVar3[-1] = 0;
      puVar3[-2] = 0;
      puVar3[1] = 0;
      *puVar3 = 0;
      puVar3 = puVar3 + 4;
      puVar4[-1] = uVar13;
      puVar4[-2] = uVar12;
      puVar4[1] = uVar15;
      *puVar4 = uVar14;
      puVar4 = puVar4 + 4;
    } while (uVar9 != 0);
    puVar3 = puVar2 + uVar8;
    puVar4 = puVar11 + uVar8;
    if (uVar7 != uVar8) goto LAB_0034ec08;
  }
  do {
                    /* try { // try from 0034ec30 to 0034ec33 has its CatchHandler @ 0034ec84 */
    (**(code **)(DAT_007aaf28 + 0x300))(*puVar11);
    puVar11 = puVar11 + 1;
  } while (puVar11 != __ptr);
  __ptr = (undefined8 *)*param_1;
LAB_0034ec44:
  *param_1 = (ulong)puVar2;
  param_1[1] = (ulong)(puVar1 + 1);
  param_1[2] = (ulong)(puVar2 + uVar6);
  if (__ptr != (undefined8 *)0x0) {
    free(__ptr);
  }
  return puVar1 + 1;
}


// ===== 0034ec88  FUN_0034ec88 =====

long FUN_0034ec88(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  void *__ptr;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *__ptr_00;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  lVar4 = tpidr_el0;
  lVar6 = *(long *)(lVar4 + 0x28);
  lVar11 = param_1[1] - *param_1 >> 6;
  uVar1 = lVar11 + 1;
  if (uVar1 >> 0x3a == 0) {
    uVar8 = param_1[2] - *param_1;
    uVar10 = (long)uVar8 >> 5;
    if (uVar10 <= uVar1) {
      uVar10 = uVar1;
    }
    if (0x7fffffffffffffbf < uVar8) {
      uVar10 = 0x3ffffffffffffff;
    }
    if (uVar10 == 0) {
      lVar5 = 0;
    }
    else {
      if (uVar10 >> 0x3a != 0) goto LAB_0034ee40;
      lVar5 = FUN_00759c3c(uVar10 << 6);
    }
    lVar11 = lVar5 + lVar11 * 0x40;
                    /* try { // try from 0034ed24 to 0034ed2f has its CatchHandler @ 0034ee54 */
    FUN_0034ee7c(param_1 + 2,lVar11,param_2);
    puVar12 = (undefined8 *)*param_1;
    __ptr_00 = (undefined8 *)param_1[1];
    puVar3 = (undefined8 *)((long)puVar12 + (lVar11 - (long)__ptr_00));
    puVar7 = puVar3;
    puVar9 = puVar12;
    if (__ptr_00 != puVar12) {
      do {
        *puVar7 = *puVar9;
        uVar14 = puVar9[2];
        uVar13 = puVar9[1];
        puVar7[3] = puVar9[3];
        puVar7[2] = uVar14;
        puVar7[1] = uVar13;
        puVar9[2] = 0;
        puVar9[3] = 0;
        puVar9[1] = 0;
        puVar7[4] = 0;
        puVar7[5] = 0;
        puVar7[6] = 0;
        uVar13 = puVar9[4];
        puVar7[5] = puVar9[5];
        puVar7[4] = uVar13;
        puVar7[6] = puVar9[6];
        puVar9[4] = 0;
        puVar9[5] = 0;
        puVar9[6] = 0;
        puVar2 = puVar9 + 8;
        puVar7[7] = puVar9[7];
        puVar7 = puVar7 + 8;
        puVar9 = puVar2;
      } while (puVar2 != __ptr_00);
      do {
        __ptr = (void *)puVar12[4];
        if (__ptr != (void *)0x0) {
          puVar12[5] = __ptr;
          free(__ptr);
        }
        if ((*(byte *)(puVar12 + 1) & 1) != 0) {
          free((void *)puVar12[3]);
        }
        puVar12 = puVar12 + 8;
      } while (puVar12 != __ptr_00);
      __ptr_00 = (undefined8 *)*param_1;
    }
    *param_1 = (long)puVar3;
    param_1[1] = lVar11 + 0x40;
    param_1[2] = lVar5 + uVar10 * 0x40;
    if (__ptr_00 != (undefined8 *)0x0) {
      free(__ptr_00);
    }
    if (*(long *)(lVar4 + 0x28) == lVar6) {
      return lVar11 + 0x40;
    }
  }
  else {
    if (*(long *)(lVar4 + 0x28) != lVar6) goto LAB_0034ee78;
    FUN_0034e5b8(param_1);
LAB_0034ee40:
    if (*(long *)(lVar4 + 0x28) == lVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_002f9ee0();
    }
  }
LAB_0034ee78:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0034ee7c  FUN_0034ee7c =====

void FUN_0034ee7c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  void *__src;
  size_t __n;
  void *__dest;
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = *param_3;
  if ((*(byte *)(param_3 + 1) & 1) == 0) {
    uVar2 = param_3[2];
    uVar1 = param_3[1];
    param_2[3] = param_3[3];
    param_2[2] = uVar2;
    param_2[1] = uVar1;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    __src = (void *)param_3[4];
    __n = param_3[5] - (long)__src;
  }
  else {
    FUN_002fb36c(param_2 + 1,param_3[3],param_3[2]);
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    __src = (void *)param_3[4];
    __n = param_3[5] - (long)__src;
  }
  if (__n != 0) {
    if ((long)__n < 0) {
                    /* try { // try from 0034ef44 to 0034ef4b has its CatchHandler @ 0034ef4c */
                    /* WARNING: Subroutine does not return */
      FUN_0034e528(param_2 + 4);
    }
                    /* try { // try from 0034ef04 to 0034ef0b has its CatchHandler @ 0034ef4c */
    __dest = (void *)FUN_00759c3c(__n);
    param_2[4] = __dest;
    param_2[5] = __dest;
    param_2[6] = (long)__dest + __n;
    memcpy(__dest,__src,__n);
    param_2[5] = (long)__dest + __n;
  }
  param_2[7] = param_3[7];
  return;
}


// ===== 0034ef8c  FUN_0034ef8c =====

void FUN_0034ef8c(undefined8 *param_1,void *param_2,long param_3,ulong param_4)

{
  void *__src;
  ulong uVar1;
  long lVar2;
  size_t sVar3;
  ulong uVar4;
  void *__dest;
  
  uVar4 = param_1[2];
  __dest = (void *)*param_1;
  if (param_4 <= (ulong)((long)(uVar4 - (long)__dest) >> 3)) {
    sVar3 = (long)param_1[1] - (long)__dest;
    if ((ulong)((long)sVar3 >> 3) < param_4) {
      __src = (void *)((long)param_2 + sVar3);
      if ((void *)param_1[1] != __dest) {
        memmove(__dest,param_2,sVar3);
        __dest = (void *)param_1[1];
      }
      lVar2 = -(long)__src;
    }
    else {
      lVar2 = -(long)param_2;
      __src = param_2;
    }
    sVar3 = param_3 + lVar2;
    if (sVar3 != 0) {
      memmove(__dest,__src,sVar3);
    }
LAB_0034f098:
    param_1[1] = (long)__dest + sVar3;
    return;
  }
  if (__dest != (void *)0x0) {
    param_1[1] = __dest;
    free(__dest);
    uVar4 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  if (param_4 >> 0x3d == 0) {
    uVar1 = (long)uVar4 >> 2;
    if ((ulong)((long)uVar4 >> 2) <= param_4) {
      uVar1 = param_4;
    }
    if (0x7ffffffffffffff7 < uVar4) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 >> 0x3d == 0) {
      __dest = (void *)FUN_00759c3c(uVar1 * 8);
      sVar3 = param_3 - (long)param_2;
      *param_1 = __dest;
      param_1[1] = __dest;
      param_1[2] = (void *)((long)__dest + uVar1 * 8);
      if (sVar3 != 0) {
        memcpy(__dest,param_2,sVar3);
      }
      goto LAB_0034f098;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0034e528(param_1);
}


// ===== 0034f0bc  FUN_0034f0bc =====

void FUN_0034f0bc(long *param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *__ptr;
  undefined8 local_68 [3];
  undefined8 local_50;
  long local_48;
  
  puVar2 = PTR_DAT_007a1488;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *param_1 = (long)(PTR_DAT_007a14a0 + 0x10);
  lVar6 = *(long *)puVar2;
  plVar7 = param_1 + 1;
  *plVar7 = 0;
  param_1[2] = 0;
  (**(code **)(lVar6 + 0x270))();
                    /* try { // try from 0034f114 to 0034f117 has its CatchHandler @ 0034f408 */
  FUN_003504c8();
  local_50 = 0;
  (**(code **)(*(long *)puVar2 + 0x50))(&local_50);
                    /* try { // try from 0034f12c to 0034f12f has its CatchHandler @ 0034f3e8 */
  FUN_003504c8();
  iVar3 = *(int *)(param_2 + 0x44);
  if (iVar3 < 2) {
    iVar3 = 1;
  }
  (**(code **)(*(long *)puVar2 + 0xc0))(local_50,iVar3);
                    /* try { // try from 0034f14c to 0034f14f has its CatchHandler @ 0034f410 */
  FUN_003504c8();
  (**(code **)(*(long *)puVar2 + 0x68))(local_50,0);
                    /* try { // try from 0034f164 to 0034f167 has its CatchHandler @ 0034f410 */
  FUN_003504c8();
  if (*(long *)(param_2 + 0x30) == 0) {
    uVar5 = FUN_00753a74(0x20);
                    /* try { // try from 0034f24c to 0034f25b has its CatchHandler @ 0034f38c */
    FUN_002fd2b0(local_68,"Model blob is nullptr");
                    /* try { // try from 0034f260 to 0034f297 has its CatchHandler @ 0034f378 */
    FUN_00374fd0(uVar5,local_68);
    if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar5,PTR_PTR_007a1350,PTR_FUN_007a11f8);
    }
  }
  else {
    if (((DAT_007aafc8 & 1) == 0) && (iVar3 = FUN_00739c1c(&DAT_007aafc8), iVar3 != 0)) {
                    /* try { // try from 0034f2ac to 0034f2c7 has its CatchHandler @ 0034f344 */
      FUN_0034f44c(&DAT_007aafc0,2,"exec_network_onnx");
      __cxa_atexit(PTR_FUN_007a14a8,&DAT_007aafc0,&PTR_LOOP_0075ec90);
      FUN_00739d60(&DAT_007aafc8);
    }
    lVar6 = **(long **)(param_2 + 0x30);
    local_68[0] = 0;
    (**(code **)(*(long *)puVar2 + 0x40))
              (DAT_007aafc0,lVar6,(*(long **)(param_2 + 0x30))[1] - lVar6,local_50,local_68);
                    /* try { // try from 0034f1ac to 0034f1af has its CatchHandler @ 0034f3c8 */
    FUN_003504c8();
                    /* try { // try from 0034f1b0 to 0034f1b7 has its CatchHandler @ 0034f3a8 */
    puVar4 = (undefined8 *)FUN_00759c3c(8);
    uVar5 = local_68[0];
    __ptr = (undefined8 *)*plVar7;
    local_68[0] = 0;
    *plVar7 = (long)puVar4;
    *puVar4 = uVar5;
    if (__ptr != (undefined8 *)0x0) {
                    /* try { // try from 0034f1dc to 0034f1df has its CatchHandler @ 0034f39c */
      (**(code **)(*(long *)puVar2 + 0x2f8))(*__ptr);
      free(__ptr);
    }
                    /* try { // try from 0034f1fc to 0034f1ff has its CatchHandler @ 0034f3a4 */
    (**(code **)(*(long *)puVar2 + 0x2f8))(local_68[0]);
    if (*plVar7 == 0) {
      uVar5 = FUN_00753a74(0x20);
                    /* try { // try from 0034f2f8 to 0034f307 has its CatchHandler @ 0034f374 */
      FUN_002fd2b0(local_68,"Failed to create ONNX session");
                    /* try { // try from 0034f30c to 0034f343 has its CatchHandler @ 0034f358 */
      FUN_00374fd0(uVar5,local_68);
      if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar5,PTR_PTR_007a1350,PTR_FUN_007a11f8);
      }
    }
    else {
                    /* try { // try from 0034f214 to 0034f217 has its CatchHandler @ 0034f3a0 */
      (**(code **)(*(long *)puVar2 + 800))(local_50);
      if (*(long *)(lVar1 + 0x28) == local_48) {
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0034f44c  FUN_0034f44c =====

void FUN_0034f44c(undefined8 *param_1,undefined4 param_2,char *param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = PTR_DAT_007a1488;
  *param_1 = 0;
  (**(code **)(*(long *)puVar1 + 0x18))(param_2,param_3,param_1);
                    /* try { // try from 0034f488 to 0034f48b has its CatchHandler @ 0034f4d0 */
  FUN_003504c8();
  iVar2 = strcmp(param_3,"onnxruntime-node");
  uVar3 = 6;
  if (iVar2 != 0) {
    uVar3 = 1;
  }
  (**(code **)(*(long *)puVar1 + 0x488))(*param_1,uVar3);
                    /* try { // try from 0034f4bc to 0034f4bf has its CatchHandler @ 0034f4d0 */
  FUN_003504c8();
  return;
}


// ===== 0034f4f4  FUN_0034f4f4 =====

void FUN_0034f4f4(undefined8 *param_1)

{
                    /* try { // try from 0034f510 to 0034f513 has its CatchHandler @ 0034f51c */
  (**(code **)(DAT_007aaf28 + 0x2e0))(*param_1);
  return;
}


// ===== 0034f520  FUN_0034f520 =====

void FUN_0034f520(undefined8 *param_1)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)*param_1;
  *param_1 = 0;
  if (__ptr != (undefined8 *)0x0) {
                    /* try { // try from 0034f54c to 0034f54f has its CatchHandler @ 0034f56c */
    (**(code **)(DAT_007aaf28 + 0x2f8))(*__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 0034f570  FUN_0034f570 =====

void FUN_0034f570(long param_1)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  (**(code **)(*(long *)PTR_DAT_007a1488 + 0xf0))(**(undefined8 **)(param_1 + 8),&local_30);
  FUN_003504c8();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_30);
}


// ===== 0034f5d8  FUN_0034f5d8 =====

void FUN_0034f5d8(long param_1)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  (**(code **)(*(long *)PTR_DAT_007a1488 + 0xf8))(**(undefined8 **)(param_1 + 8),&local_30);
  FUN_003504c8();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_30);
}


// ===== 0034f640  FUN_0034f640 =====

void FUN_0034f640(undefined8 *param_1,long param_2,ulong param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  void *pvVar5;
  void *pvVar6;
  undefined4 uVar7;
  void *__s;
  void *pvVar8;
  code *pcVar9;
  long lVar10;
  void *pvVar11;
  void *local_88;
  undefined8 local_80;
  void *local_78;
  ulong local_70;
  long local_68;
  
  puVar4 = PTR_DAT_007a1488;
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if ((param_3 & 1) == 0) {
    pcVar9 = *(code **)(*(long *)PTR_DAT_007a1488 + 0x110);
  }
  else {
    pcVar9 = *(code **)(*(long *)PTR_DAT_007a1488 + 0x108);
  }
  (*pcVar9)(**(undefined8 **)(param_2 + 8),param_4,&local_88);
  FUN_003504c8();
  pvVar5 = local_88;
  (**(code **)(*(long *)puVar4 + 0x1b8))(local_88,&local_88);
                    /* try { // try from 0034f6cc to 0034f6cf has its CatchHandler @ 0034f87c */
  FUN_003504c8();
  pvVar8 = local_88;
  puVar1 = *(undefined8 **)(param_2 + 8);
  lVar2 = *(long *)(param_2 + 0x10);
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  if ((param_3 & 1) == 0) {
    (**(code **)(*(long *)puVar4 + 0x128))(*puVar1,param_4,lVar2,&local_88);
                    /* try { // try from 0034f728 to 0034f72b has its CatchHandler @ 0034f874 */
    FUN_003504c8();
  }
  else {
    (**(code **)(*(long *)puVar4 + 0x120))(*puVar1,param_4,lVar2,&local_88);
                    /* try { // try from 0034f704 to 0034f707 has its CatchHandler @ 0034f874 */
    FUN_003504c8();
  }
  pvVar6 = local_88;
                    /* try { // try from 0034f730 to 0034f73b has its CatchHandler @ 0034f8a0 */
  FUN_0071396c(param_1,local_88);
  (**(code **)(*(long *)puVar4 + 0x1e0))(pvVar8,&local_88);
                    /* try { // try from 0034f750 to 0034f75b has its CatchHandler @ 0034f8a0 */
  FUN_003504c8();
  uVar7 = FUN_0034f8f4((ulong)local_88 & 0xffffffff);
  lVar10 = *(long *)puVar4;
  *(undefined4 *)(param_1 + 6) = uVar7;
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  (**(code **)(lVar10 + 0x1e8))(pvVar8,&local_70);
                    /* try { // try from 0034f774 to 0034f777 has its CatchHandler @ 0034f870 */
  FUN_003504c8();
  local_80 = 0;
  local_78 = (void *)0x0;
  local_88 = (void *)0x0;
  if (local_70 == 0) {
    __s = (void *)0x0;
    pvVar11 = (void *)0x0;
  }
  else {
    if (local_70 >> 0x3d != 0) {
      if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* try { // try from 0034f85c to 0034f863 has its CatchHandler @ 0034f884 */
                    /* WARNING: Subroutine does not return */
        FUN_0034e528(&local_88);
      }
      goto LAB_0034f8e8;
    }
                    /* try { // try from 0034f794 to 0034f79b has its CatchHandler @ 0034f884 */
    __s = (void *)FUN_00759c3c(local_70 << 3);
    pvVar11 = (void *)((long)__s + local_70 * 8);
    local_88 = __s;
    local_78 = pvVar11;
    memset(__s,0,local_70 << 3);
  }
  (**(code **)(*(long *)puVar4 + 0x1f0))(pvVar8,__s,(long)pvVar11 - (long)__s >> 3);
                    /* try { // try from 0034f7dc to 0034f7df has its CatchHandler @ 0034f86c */
  FUN_003504c8();
  pvVar8 = (void *)param_1[3];
  if (pvVar8 != (void *)0x0) {
    param_1[4] = pvVar8;
    free(pvVar8);
  }
  param_1[3] = __s;
  param_1[4] = pvVar11;
  param_1[5] = pvVar11;
  if (pvVar6 != (void *)0x0) {
                    /* try { // try from 0034f800 to 0034f80b has its CatchHandler @ 0034f864 */
    (**(code **)(lVar2 + 0x10))(lVar2,pvVar6);
  }
                    /* try { // try from 0034f814 to 0034f81b has its CatchHandler @ 0034f868 */
  (**(code **)(*(long *)puVar4 + 0x310))(pvVar5);
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
LAB_0034f8e8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0034f8f4  FUN_0034f8f4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0034f8f4(uint param_1)

{
  undefined4 uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  void *__ptr;
  undefined8 *__ptr_00;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  void *pvVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  void *local_c0;
  ulong uStack_b8;
  void *local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  uStack_48 = _UNK_00201f64;
  local_50 = _DAT_00201f5c;
  uStack_68 = _UNK_00201f44;
  local_70 = _DAT_00201f3c;
  uStack_58 = _UNK_00201f54;
  uStack_60 = _DAT_00201f4c;
  local_40 = 0xd0000000d;
  local_a0 = 0x3f800000;
  uStack_b8 = 0;
  local_c0 = (void *)0x0;
  uStack_a8 = 0;
  local_b0 = (void *)0x0;
  uStack_88 = _UNK_00201f24;
  local_90 = _DAT_00201f1c;
  uStack_78 = _UNK_00201f34;
  uStack_80 = _DAT_00201f2c;
                    /* try { // try from 0034f954 to 0034fa1b has its CatchHandler @ 0034fb68 */
  FUN_003507a4(&local_c0,&local_90,&local_90);
  FUN_003507a4(&local_c0,(ulong)&local_90 | 8,(ulong)&local_90 | 8);
  FUN_003507a4(&local_c0,&uStack_80,&uStack_80);
  FUN_003507a4(&local_c0,&uStack_78,&uStack_78);
  FUN_003507a4(&local_c0,&local_70,&local_70);
  FUN_003507a4(&local_c0,&uStack_68,&uStack_68);
  FUN_003507a4(&local_c0,&uStack_60,&uStack_60);
  FUN_003507a4(&local_c0,&uStack_58,&uStack_58);
  FUN_003507a4(&local_c0,&local_50,&local_50);
  FUN_003507a4(&local_c0,&uStack_48,&uStack_48);
  FUN_003507a4(&local_c0,&local_40,&local_40);
  if (uStack_b8 != 0) {
    uVar5 = (ulong)param_1;
    uVar12 = NEON_cnt(uStack_b8,1);
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar9 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    uVar6 = (uint)uStack_b8;
    if (uVar9 < 2) {
      uVar7 = (ulong)(uVar6 - 1 & param_1);
    }
    else {
      uVar7 = uVar5;
      if (uStack_b8 <= uVar5) {
        uVar2 = 0;
        if (uVar6 != 0) {
          uVar2 = param_1 / uVar6;
        }
        uVar7 = (ulong)(param_1 - uVar2 * uVar6);
      }
    }
    plVar8 = *(long **)((long)local_c0 + uVar7 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      if (uVar9 < 2) {
        do {
          if (plVar8[1] == uVar5) {
            if (*(uint *)(plVar8 + 2) == param_1) goto LAB_0034faf0;
          }
          else if ((plVar8[1] & uStack_b8 - 1) != uVar7) break;
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      else {
        do {
          uVar9 = plVar8[1];
          if (uVar9 == uVar5) {
            if (*(uint *)(plVar8 + 2) == param_1) goto LAB_0034faf0;
          }
          else {
            if (uStack_b8 <= uVar9) {
              uVar3 = 0;
              if (uStack_b8 != 0) {
                uVar3 = uVar9 / uStack_b8;
              }
              uVar9 = uVar9 - uVar3 * uStack_b8;
            }
            if (uVar9 != uVar7) break;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_38) {
                    /* try { // try from 0034fb5c to 0034fb67 has its CatchHandler @ 0034fb78 */
                    /* WARNING: Subroutine does not return */
    FUN_0030b908("unordered_map::at: key not found");
  }
LAB_0034fb9c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0034faf0:
  uVar1 = *(undefined4 *)((long)plVar8 + 0x14);
  __ptr = local_c0;
  __ptr_00 = (undefined8 *)local_b0;
  while (__ptr_00 != (undefined8 *)0x0) {
    pvVar10 = (void *)*__ptr_00;
    local_c0 = __ptr;
    free(__ptr_00);
    __ptr = local_c0;
    __ptr_00 = (undefined8 *)pvVar10;
  }
  local_c0 = (void *)0x0;
  if (__ptr != (void *)0x0) {
    free(__ptr);
  }
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return uVar1;
  }
  goto LAB_0034fb9c;
}


// ===== 0034fba0  FUN_0034fba0 =====

void FUN_0034fba0(undefined8 *param_1,long param_2,ulong param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  
  puVar3 = PTR_DAT_007a1488;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if ((param_3 & 1) == 0) {
    pcVar4 = *(code **)(*(long *)PTR_DAT_007a1488 + 0x110);
  }
  else {
    pcVar4 = *(code **)(*(long *)PTR_DAT_007a1488 + 0x108);
  }
  (*pcVar4)(**(undefined8 **)(param_2 + 8),param_4,&local_60);
  FUN_003504c8();
  uVar2 = CONCAT44(uStack_5c,local_60);
  (**(code **)(*(long *)puVar3 + 0x1b8))(uVar2,&local_60);
                    /* try { // try from 0034fc2c to 0034fc2f has its CatchHandler @ 0034fcb8 */
  FUN_003504c8();
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  (**(code **)(*(long *)puVar3 + 0x1e0))(CONCAT44(uStack_5c,local_60),&local_60);
                    /* try { // try from 0034fc48 to 0034fc4b has its CatchHandler @ 0034fcb8 */
  FUN_003504c8();
  (**(code **)(*(long *)puVar3 + 0x180))(uVar5,param_5,param_6,local_60,&local_60);
                    /* try { // try from 0034fc6c to 0034fc6f has its CatchHandler @ 0034fcb8 */
  FUN_003504c8();
  pcVar4 = *(code **)(*(long *)puVar3 + 0x310);
  *param_1 = CONCAT44(uStack_5c,local_60);
                    /* try { // try from 0034fc80 to 0034fc87 has its CatchHandler @ 0034fcb4 */
  (*pcVar4)(uVar2);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 0034fcec  FUN_0034fcec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0034fcec(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,int param_5
                 )

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  void *__ptr;
  undefined8 *__ptr_00;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  void *pvVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  void *local_e0;
  ulong uStack_d8;
  void *local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
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
  undefined8 local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  uStack_68 = _UNK_00201fbc;
  local_70 = _DAT_00201fb4;
  uStack_88 = _UNK_00201f9c;
  local_90 = _DAT_00201f94;
  uStack_78 = _UNK_00201fac;
  uStack_80 = _DAT_00201fa4;
  uVar8 = *(undefined8 *)(param_2 + 0x10);
  local_60 = 0xd0000000d;
  local_c0 = 0x3f800000;
  uStack_d8 = 0;
  local_e0 = (void *)0x0;
  uStack_c8 = 0;
  local_d0 = (void *)0x0;
  uStack_a8 = _UNK_00201f7c;
  local_b0 = _DAT_00201f74;
  uStack_98 = _UNK_00201f8c;
  uStack_a0 = _DAT_00201f84;
                    /* try { // try from 0034fd64 to 0034fe2b has its CatchHandler @ 0034ffb0 */
  FUN_00350d18(&local_e0,&local_b0,&local_b0);
  FUN_00350d18(&local_e0,(ulong)&local_b0 | 8,(ulong)&local_b0 | 8);
  FUN_00350d18(&local_e0,&uStack_a0,&uStack_a0);
  FUN_00350d18(&local_e0,&uStack_98,&uStack_98);
  FUN_00350d18(&local_e0,&local_90,&local_90);
  FUN_00350d18(&local_e0,&uStack_88,&uStack_88);
  FUN_00350d18(&local_e0,&uStack_80,&uStack_80);
  FUN_00350d18(&local_e0,&uStack_78,&uStack_78);
  FUN_00350d18(&local_e0,&local_70,&local_70);
  FUN_00350d18(&local_e0,&uStack_68,&uStack_68);
  FUN_00350d18(&local_e0,&local_60,&local_60);
  if (uStack_d8 != 0) {
    uVar4 = (ulong)param_5;
    uVar11 = NEON_cnt(uStack_d8,1);
    uVar10 = NEON_uaddlv(uVar11,1);
    uVar7 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
    if (uVar7 < 2) {
      uVar5 = uStack_d8 - 1 & uVar4;
    }
    else {
      uVar5 = uVar4;
      if (uStack_d8 <= uVar4) {
        uVar5 = 0;
        if (uStack_d8 != 0) {
          uVar5 = uVar4 / uStack_d8;
        }
        uVar5 = uVar4 - uVar5 * uStack_d8;
      }
    }
    plVar6 = *(long **)((long)local_e0 + uVar5 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      if (uVar7 < 2) {
        do {
          if (plVar6[1] == uVar4) {
            if ((int)plVar6[2] == param_5) goto LAB_0034ff00;
          }
          else if ((plVar6[1] & uStack_d8 - 1) != uVar5) break;
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
      else {
        do {
          uVar7 = plVar6[1];
          if (uVar7 == uVar4) {
            if ((int)plVar6[2] == param_5) goto LAB_0034ff00;
          }
          else {
            if (uStack_d8 <= uVar7) {
              uVar2 = 0;
              if (uStack_d8 != 0) {
                uVar2 = uVar7 / uStack_d8;
              }
              uVar7 = uVar7 - uVar2 * uStack_d8;
            }
            if (uVar7 != uVar5) break;
          }
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 0034ffa4 to 0034ffaf has its CatchHandler @ 0034ffc0 */
                    /* WARNING: Subroutine does not return */
    FUN_0030b908("unordered_map::at: key not found");
  }
LAB_0034ffe4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0034ff00:
  uVar1 = *(undefined4 *)((long)plVar6 + 0x14);
  __ptr = local_e0;
  __ptr_00 = (undefined8 *)local_d0;
  while (__ptr_00 != (undefined8 *)0x0) {
    pvVar9 = (void *)*__ptr_00;
    local_e0 = __ptr;
    free(__ptr_00);
    __ptr = local_e0;
    __ptr_00 = (undefined8 *)pvVar9;
  }
  local_e0 = (void *)0x0;
  if (__ptr != (void *)0x0) {
    free(__ptr);
  }
  (**(code **)(*(long *)PTR_DAT_007a1488 + 0x180))(uVar8,param_3,param_4,uVar1,&local_b0);
  FUN_003504c8();
  *param_1 = local_b0;
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
  goto LAB_0034ffe4;
}


// ===== 0034ffe8  FUN_0034ffe8 =====

void FUN_0034ffe8(void)

{
  long lVar1;
  
  lVar1 = tpidr_el0;
  FUN_00759c34(*(undefined8 *)(lVar1 + 0x28));
  return;
}


// ===== 00350008  FUN_00350008 =====

void FUN_00350008(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long *in_x9;
  long unaff_x19;
  undefined8 in_stack_00000000;
  long lStack0000000000000008;
  
  lStack0000000000000008 = param_1;
  (**(code **)(*in_x9 + 0x198))(*param_3);
  FUN_003504c8();
  if (*(long *)(unaff_x19 + 0x28) == lStack0000000000000008) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_stack_00000000);
}


// ===== 0035004c  FUN_0035004c =====

undefined4 FUN_0035004c(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  
  puVar3 = PTR_DAT_007a1488;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*(long *)PTR_DAT_007a1488 + 0x208))(*param_2,&local_40);
  FUN_003504c8();
  uVar2 = CONCAT44(uStack_3c,local_40);
  (**(code **)(*(long *)puVar3 + 0x1e0))(uVar2,&local_40);
                    /* try { // try from 003500a4 to 003500af has its CatchHandler @ 003500f0 */
  FUN_003504c8();
  uVar4 = FUN_0034f8f4(local_40);
                    /* try { // try from 003500bc to 003500c3 has its CatchHandler @ 003500ec */
  (**(code **)(*(long *)puVar3 + 0x318))(uVar2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00350124  FUN_00350124 =====

void FUN_00350124(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  void *__s;
  void *pvVar4;
  ulong local_60;
  long local_58;
  
  puVar2 = PTR_DAT_007a1488;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  (**(code **)(*(long *)PTR_DAT_007a1488 + 0x208))(*param_3,&local_60);
  FUN_003504c8();
  uVar3 = local_60;
  (**(code **)(*(long *)puVar2 + 0x1e8))(local_60,&local_60);
                    /* try { // try from 00350188 to 0035018b has its CatchHandler @ 00350254 */
  FUN_003504c8();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (local_60 == 0) {
    __s = (void *)0x0;
    pvVar4 = (void *)0x0;
  }
  else {
    if (local_60 >> 0x3d != 0) {
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 00350244 to 0035024b has its CatchHandler @ 0035025c */
                    /* WARNING: Subroutine does not return */
        FUN_0034e528(param_1);
      }
      goto LAB_0035029c;
    }
                    /* try { // try from 003501a8 to 003501af has its CatchHandler @ 0035025c */
    __s = (void *)FUN_00759c3c(local_60 << 3);
    pvVar4 = (void *)((long)__s + local_60 * 8);
    *param_1 = __s;
    param_1[2] = pvVar4;
    memset(__s,0,local_60 << 3);
    param_1[1] = pvVar4;
  }
  (**(code **)(*(long *)puVar2 + 0x1f0))(uVar3,__s,(long)pvVar4 - (long)__s >> 3);
                    /* try { // try from 003501f4 to 003501f7 has its CatchHandler @ 00350250 */
  FUN_003504c8();
                    /* try { // try from 00350200 to 00350207 has its CatchHandler @ 0035024c */
  (**(code **)(*(long *)puVar2 + 0x318))(uVar3);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
LAB_0035029c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003502a4  FUN_003502a4 =====

void FUN_003502a4(undefined8 *param_1,long param_2,undefined8 *param_3,long *param_4,
                 undefined8 *param_5,long *param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  lVar12 = *param_6;
  lVar2 = param_6[1];
  puVar11 = *(undefined8 **)(param_2 + 8);
  lVar1 = *param_4;
  lVar3 = param_4[1];
  uVar8 = *param_3;
  uVar10 = *param_5;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  lVar9 = lVar2 - lVar12 >> 3;
                    /* try { // try from 003502f8 to 00350303 has its CatchHandler @ 003503c8 */
  FUN_0034d760(param_1,lVar9);
  if (lVar2 != lVar12) {
    puVar6 = (undefined8 *)param_1[1];
    lVar12 = lVar9;
    do {
      local_70 = 0;
      if (puVar6 < (undefined8 *)param_1[2]) {
        puVar7 = puVar6 + 1;
        *puVar6 = 0;
      }
      else {
                    /* try { // try from 00350338 to 00350343 has its CatchHandler @ 003503cc */
        puVar7 = (undefined8 *)FUN_0034eae8(param_1,&local_70);
      }
      lVar12 = lVar12 + -1;
      param_1[1] = puVar7;
      puVar6 = puVar7;
    } while (lVar12 != 0);
  }
  puVar5 = PTR_DAT_007a1488;
  (**(code **)(*(long *)PTR_DAT_007a1488 + 0x48))
            (*puVar11,0,uVar8,lVar1,lVar3 - lVar1 >> 3,uVar10,lVar9,*param_1);
                    /* try { // try from 00350380 to 00350383 has its CatchHandler @ 003503c8 */
  FUN_003504c8();
                    /* try { // try from 0035038c to 00350393 has its CatchHandler @ 003503c4 */
  (**(code **)(*(long *)puVar5 + 0x308))(0);
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00350410  FUN_00350410 =====

void FUN_00350410(undefined8 *param_1)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)param_1[1];
  *param_1 = &PTR_FUN_00760c88;
  param_1[1] = 0;
  if (__ptr != (undefined8 *)0x0) {
                    /* try { // try from 00350448 to 0035044b has its CatchHandler @ 00350468 */
    (**(code **)(DAT_007aaf28 + 0x2f8))(*__ptr);
    free(__ptr);
    return;
  }
  return;
}


// ===== 0035046c  FUN_0035046c =====

void FUN_0035046c(undefined8 *param_1)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)param_1[1];
  *param_1 = &PTR_FUN_00760c88;
  param_1[1] = 0;
  if (__ptr != (undefined8 *)0x0) {
                    /* try { // try from 003504a8 to 003504ab has its CatchHandler @ 003504c4 */
    (**(code **)(*(long *)PTR_DAT_007a1488 + 0x2f8))(*__ptr);
    free(__ptr);
  }
  free(param_1);
  return;
}


// ===== 003504c8  FUN_003504c8 =====

void FUN_003504c8(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  char *__s;
  size_t __n;
  long *plVar5;
  long lVar6;
  void *__dest;
  ulong local_60;
  size_t sStack_58;
  void *local_50;
  long local_48;
  
  puVar3 = PTR_DAT_007a1488;
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (param_1 == 0) {
    if (*(long *)(lVar2 + 0x28) == local_48) {
      return;
    }
    goto LAB_00350660;
  }
  __s = (char *)(**(code **)(*(long *)PTR_DAT_007a1488 + 0x10))();
  __n = strlen(__s);
  if (0xfffffffffffffff7 < __n) {
    if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* try { // try from 00350558 to 003505a3 has its CatchHandler @ 00350630 */
                    /* WARNING: Subroutine does not return */
      FUN_002fb400(&local_60);
    }
    goto LAB_00350660;
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_60 | 1);
    local_60 = CONCAT71(local_60._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_003505b4;
  }
  else {
    uVar1 = (__n & 0xfffffffffffffff8) + 8;
    if ((__n | 7) != 0x17) {
      uVar1 = __n | 7;
    }
    __dest = (void *)FUN_00759c3c(uVar1 + 1);
    local_60 = uVar1 + 1 | 1;
    sStack_58 = __n;
    local_50 = __dest;
LAB_003505b4:
    memmove(__dest,__s,__n);
  }
  lVar6 = *(long *)puVar3;
  *(undefined1 *)((long)__dest + __n) = 0;
  uVar4 = (**(code **)(lVar6 + 8))(param_1);
  plVar5 = (long *)FUN_00753a74(0x28);
  puVar3 = PTR_DAT_007a14b8;
  *(undefined4 *)(plVar5 + 4) = uVar4;
  *plVar5 = (long)(puVar3 + 0x10);
  plVar5[3] = (long)local_50;
  plVar5[2] = sStack_58;
  plVar5[1] = local_60;
  if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* try { // try from 0035061c to 0035062f has its CatchHandler @ 00350630 */
                    /* WARNING: Subroutine does not return */
    FUN_00753c5c(plVar5,PTR_PTR_007a14c0,PTR_FUN_007a14c8);
  }
LAB_00350660:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00350668  FUN_00350668 =====

void FUN_00350668(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00760cc0;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    free((void *)param_1[3]);
  }
  FUN_0073a174(param_1);
  return;
}


// ===== 003506ac  FUN_003506ac =====

void FUN_003506ac(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007a14b8 + 0x10);
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    free((void *)param_1[3]);
  }
  FUN_0073a174(param_1);
  free(param_1);
  return;
}


// ===== 003506f4  FUN_003506f4 =====

long FUN_003506f4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 9;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    lVar1 = *(long *)(param_1 + 0x18);
  }
  return lVar1;
}


// ===== 0035070c  FUN_0035070c =====

void FUN_0035070c(undefined8 *param_1)

{
  undefined8 *__ptr;
  void *pvVar1;
  
  __ptr = (undefined8 *)param_1[2];
  while (__ptr != (undefined8 *)0x0) {
    pvVar1 = (void *)*__ptr;
    free(__ptr);
    __ptr = (undefined8 *)pvVar1;
  }
  pvVar1 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  free(pvVar1);
  return;
}


// ===== 00350758  FUN_00350758 =====

void FUN_00350758(undefined8 *param_1)

{
  undefined8 *__ptr;
  void *pvVar1;
  
  __ptr = (undefined8 *)param_1[2];
  while (__ptr != (undefined8 *)0x0) {
    pvVar1 = (void *)*__ptr;
    free(__ptr);
    __ptr = (undefined8 *)pvVar1;
  }
  pvVar1 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  free(pvVar1);
  return;
}


// ===== 003507a4  FUN_003507a4 =====

undefined1  [16] FUN_003507a4(long *param_1,uint *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  ulong unaff_x24;
  undefined2 uVar11;
  undefined8 uVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  uVar10 = param_1[1];
  uVar1 = *param_2;
  uVar8 = (ulong)uVar1;
  if (uVar10 != 0) {
    uVar12 = NEON_cnt(uVar10,1);
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar5 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    uVar9 = (uint)uVar10;
    if (uVar5 < 2) {
      unaff_x24 = (ulong)(uVar9 - 1 & uVar1);
    }
    else {
      unaff_x24 = uVar8;
      if (uVar10 <= uVar8) {
        uVar2 = 0;
        if (uVar9 != 0) {
          uVar2 = uVar1 / uVar9;
        }
        unaff_x24 = (ulong)(uVar1 - uVar2 * uVar9);
      }
    }
    plVar4 = *(long **)(*param_1 + unaff_x24 * 8);
    if ((plVar4 != (long *)0x0) && (plVar4 = (long *)*plVar4, plVar4 != (long *)0x0)) {
      if (uVar5 < 2) {
        do {
          if (plVar4[1] == uVar8) {
            if (*(uint *)(plVar4 + 2) == uVar1) {
LAB_00350898:
              auVar14._8_8_ = 0;
              auVar14._0_8_ = plVar4;
              return auVar14;
            }
          }
          else if ((plVar4[1] & uVar10 - 1) != unaff_x24) break;
          plVar4 = (long *)*plVar4;
        } while (plVar4 != (long *)0x0);
      }
      else {
        do {
          uVar5 = plVar4[1];
          if (uVar5 == uVar8) {
            if (*(uint *)(plVar4 + 2) == uVar1) goto LAB_00350898;
          }
          else {
            if (uVar10 <= uVar5) {
              uVar6 = 0;
              if (uVar10 != 0) {
                uVar6 = uVar5 / uVar10;
              }
              uVar5 = uVar5 - uVar6 * uVar10;
            }
            if (uVar5 != unaff_x24) break;
          }
          plVar4 = (long *)*plVar4;
        } while (plVar4 != (long *)0x0);
      }
    }
  }
  auVar15._0_8_ = (long *)FUN_00759c3c(0x18);
  lVar3 = param_1[3];
  fVar13 = *(float *)(param_1 + 4);
  *auVar15._0_8_ = 0;
  auVar15._0_8_[1] = uVar8;
  auVar15._0_8_[2] = *param_3;
  if ((uVar10 == 0) || (fVar13 * (float)uVar10 < (float)(lVar3 + 1))) {
    if (uVar10 < 3) {
      uVar5 = 1;
    }
    else {
      uVar5 = (ulong)((uVar10 & uVar10 - 1) != 0);
    }
    uVar5 = uVar5 | uVar10 << 1;
    uVar6 = (ulong)((float)(lVar3 + 1) / fVar13);
    if (uVar5 <= uVar6) {
      uVar5 = uVar6;
    }
    if (uVar5 - 1 == 0) {
      uVar5 = 2;
    }
    else if ((uVar5 & uVar5 - 1) != 0) {
                    /* try { // try from 00350944 to 003509c7 has its CatchHandler @ 00350a94 */
      uVar5 = FUN_00711ce0(uVar5);
      uVar10 = param_1[1];
    }
    if (uVar10 < uVar5) {
LAB_0035095c:
      FUN_00350aa8(param_1,uVar5);
    }
    else if (uVar5 < uVar10) {
      uVar6 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar10 < 3) {
LAB_003509c4:
        uVar6 = FUN_00711ce0();
      }
      else {
        uVar12 = NEON_cnt(uVar10,1);
        uVar11 = NEON_uaddlv(uVar12,1);
        if (1 < (CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff)) goto LAB_003509c4;
        if (1 < uVar6) {
          uVar6 = 1L << (-LZCOUNT(uVar6 - 1) & 0x3fU);
        }
      }
      if (uVar5 <= uVar6) {
        uVar5 = uVar6;
      }
      if (uVar5 < uVar10) goto LAB_0035095c;
    }
    uVar10 = param_1[1];
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x24 = (ulong)((int)uVar10 - 1U & uVar1);
    }
    else {
      unaff_x24 = uVar8;
      if (uVar10 <= uVar8) {
        uVar5 = 0;
        if (uVar10 != 0) {
          uVar5 = uVar8 / uVar10;
        }
        unaff_x24 = uVar8 - uVar5 * uVar10;
      }
    }
  }
  lVar3 = *param_1;
  plVar4 = *(long **)(lVar3 + unaff_x24 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 2;
    lVar7 = *plVar4;
    *plVar4 = (long)auVar15._0_8_;
    *auVar15._0_8_ = lVar7;
    *(long **)(lVar3 + unaff_x24 * 8) = plVar4;
    if (*auVar15._0_8_ == 0) goto LAB_00350a6c;
    uVar8 = *(ulong *)(*auVar15._0_8_ + 8);
    if ((uVar10 & uVar10 - 1) == 0) {
      uVar8 = uVar8 & uVar10 - 1;
    }
    else if (uVar10 <= uVar8) {
      uVar5 = 0;
      if (uVar10 != 0) {
        uVar5 = uVar8 / uVar10;
      }
      uVar8 = uVar8 - uVar5 * uVar10;
    }
    plVar4 = (long *)(*param_1 + uVar8 * 8);
  }
  else {
    *auVar15._0_8_ = *plVar4;
  }
  *plVar4 = (long)auVar15._0_8_;
LAB_00350a6c:
  param_1[3] = param_1[3] + 1;
  auVar15._8_8_ = 1;
  return auVar15;
}


// ===== 00350aa8  FUN_00350aa8 =====

void FUN_00350aa8(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  
  if (param_2 == 0) {
    pvVar3 = (void *)*param_1;
    *param_1 = 0;
    if (pvVar3 != (void *)0x0) {
      free(pvVar3);
    }
    param_1[1] = 0;
    return;
  }
  if (param_2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_002f9ee0();
  }
  lVar2 = FUN_00759c3c(param_2 << 3);
  pvVar3 = (void *)*param_1;
  *param_1 = lVar2;
  if (pvVar3 != (void *)0x0) {
    free(pvVar3);
  }
  uVar4 = 0;
  param_1[1] = param_2;
  do {
    *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
    uVar4 = uVar4 + 1;
  } while (param_2 != uVar4);
  plVar6 = param_1 + 2;
  plVar5 = (long *)*plVar6;
  if (plVar5 == (long *)0x0) {
    return;
  }
  uVar4 = plVar5[1];
  uVar10 = NEON_cnt(param_2,1);
  uVar9 = NEON_uaddlv(uVar10,1);
  uVar8 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
  if (uVar8 < 2) {
    uVar4 = uVar4 & param_2 - 1;
    *(long **)(*param_1 + uVar4 * 8) = plVar6;
    plVar6 = (long *)*plVar5;
    if (plVar6 == (long *)0x0) {
      return;
    }
  }
  else {
    if (param_2 <= uVar4) {
      uVar1 = 0;
      if (param_2 != 0) {
        uVar1 = uVar4 / param_2;
      }
      uVar4 = uVar4 - uVar1 * param_2;
    }
    *(long **)(*param_1 + uVar4 * 8) = plVar6;
    plVar6 = (long *)*plVar5;
    if (plVar6 == (long *)0x0) {
      return;
    }
    if (1 < uVar8) {
      do {
        while( true ) {
          uVar8 = plVar6[1];
          if (param_2 <= uVar8) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar8 / param_2;
            }
            uVar8 = uVar8 - uVar1 * param_2;
          }
          if (uVar8 != uVar4) break;
LAB_00350c2c:
          plVar5 = plVar6;
          plVar6 = (long *)*plVar5;
          if (plVar6 == (long *)0x0) {
            return;
          }
        }
        if (*(long *)(*param_1 + uVar8 * 8) != 0) {
          *plVar5 = *plVar6;
          *plVar6 = **(long **)(*param_1 + uVar8 * 8);
          **(undefined8 **)(*param_1 + uVar8 * 8) = plVar6;
          plVar6 = plVar5;
          goto LAB_00350c2c;
        }
        *(long **)(*param_1 + uVar8 * 8) = plVar5;
        plVar7 = (long *)*plVar6;
        plVar5 = plVar6;
        uVar4 = uVar8;
        plVar6 = plVar7;
        if (plVar7 == (long *)0x0) {
          return;
        }
      } while( true );
    }
  }
  do {
    uVar8 = plVar6[1] & param_2 - 1;
    if (uVar8 != uVar4) {
      if (*(long *)(*param_1 + uVar8 * 8) == 0) {
        *(long **)(*param_1 + uVar8 * 8) = plVar5;
        uVar4 = uVar8;
      }
      else {
        *plVar5 = *plVar6;
        *plVar6 = **(long **)(*param_1 + uVar8 * 8);
        **(undefined8 **)(*param_1 + uVar8 * 8) = plVar6;
        plVar6 = plVar5;
      }
    }
    plVar7 = (long *)*plVar6;
    plVar5 = plVar6;
    plVar6 = plVar7;
  } while (plVar7 != (long *)0x0);
  return;
}


// ===== 00350c80  FUN_00350c80 =====

void FUN_00350c80(undefined8 *param_1)

{
  undefined8 *__ptr;
  void *pvVar1;
  
  __ptr = (undefined8 *)param_1[2];
  while (__ptr != (undefined8 *)0x0) {
    pvVar1 = (void *)*__ptr;
    free(__ptr);
    __ptr = (undefined8 *)pvVar1;
  }
  pvVar1 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  free(pvVar1);
  return;
}


// ===== 00350ccc  FUN_00350ccc =====

void FUN_00350ccc(undefined8 *param_1)

{
  undefined8 *__ptr;
  void *pvVar1;
  
  __ptr = (undefined8 *)param_1[2];
  while (__ptr != (undefined8 *)0x0) {
    pvVar1 = (void *)*__ptr;
    free(__ptr);
    __ptr = (undefined8 *)pvVar1;
  }
  pvVar1 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  free(pvVar1);
  return;
}


// ===== 00350d18  FUN_00350d18 =====

undefined1  [16] FUN_00350d18(long *param_1,int *param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong unaff_x24;
  undefined2 uVar9;
  undefined8 uVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  uVar7 = param_1[1];
  iVar1 = *param_2;
  uVar8 = (ulong)iVar1;
  if (uVar7 != 0) {
    uVar10 = NEON_cnt(uVar7,1);
    uVar9 = NEON_uaddlv(uVar10,1);
    uVar4 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
    if (uVar4 < 2) {
      unaff_x24 = uVar7 - 1 & uVar8;
    }
    else {
      unaff_x24 = uVar8;
      if (uVar7 <= uVar8) {
        uVar5 = 0;
        if (uVar7 != 0) {
          uVar5 = uVar8 / uVar7;
        }
        unaff_x24 = uVar8 - uVar5 * uVar7;
      }
    }
    plVar3 = *(long **)(*param_1 + unaff_x24 * 8);
    if ((plVar3 != (long *)0x0) && (plVar3 = (long *)*plVar3, plVar3 != (long *)0x0)) {
      if (uVar4 < 2) {
        do {
          if (plVar3[1] == uVar8) {
            if ((int)plVar3[2] == iVar1) {
LAB_00350e0c:
              auVar12._8_8_ = 0;
              auVar12._0_8_ = plVar3;
              return auVar12;
            }
          }
          else if ((plVar3[1] & uVar7 - 1) != unaff_x24) break;
          plVar3 = (long *)*plVar3;
        } while (plVar3 != (long *)0x0);
      }
      else {
        do {
          uVar4 = plVar3[1];
          if (uVar4 == uVar8) {
            if ((int)plVar3[2] == iVar1) goto LAB_00350e0c;
          }
          else {
            if (uVar7 <= uVar4) {
              uVar5 = 0;
              if (uVar7 != 0) {
                uVar5 = uVar4 / uVar7;
              }
              uVar4 = uVar4 - uVar5 * uVar7;
            }
            if (uVar4 != unaff_x24) break;
          }
          plVar3 = (long *)*plVar3;
        } while (plVar3 != (long *)0x0);
      }
    }
  }
  auVar13._0_8_ = (long *)FUN_00759c3c(0x18);
  lVar2 = param_1[3];
  fVar11 = *(float *)(param_1 + 4);
  *auVar13._0_8_ = 0;
  auVar13._0_8_[1] = uVar8;
  auVar13._0_8_[2] = *param_3;
  if ((uVar7 == 0) || (fVar11 * (float)uVar7 < (float)(lVar2 + 1))) {
    if (uVar7 < 3) {
      uVar4 = 1;
    }
    else {
      uVar4 = (ulong)((uVar7 & uVar7 - 1) != 0);
    }
    uVar4 = uVar4 | uVar7 << 1;
    uVar5 = (ulong)((float)(lVar2 + 1) / fVar11);
    if (uVar4 <= uVar5) {
      uVar4 = uVar5;
    }
    if (uVar4 - 1 == 0) {
      uVar4 = 2;
    }
    else if ((uVar4 & uVar4 - 1) != 0) {
                    /* try { // try from 00350ec8 to 00350f4b has its CatchHandler @ 00351028 */
      uVar4 = FUN_00711ce0(uVar4);
      uVar7 = param_1[1];
    }
    if (uVar7 < uVar4) {
LAB_00350ee0:
      FUN_0035103c(param_1,uVar4);
    }
    else if (uVar4 < uVar7) {
      uVar5 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (uVar7 < 3) {
LAB_00350f48:
        uVar5 = FUN_00711ce0();
      }
      else {
        uVar10 = NEON_cnt(uVar7,1);
        uVar9 = NEON_uaddlv(uVar10,1);
        if (1 < (CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff)) goto LAB_00350f48;
        if (1 < uVar5) {
          uVar5 = 1L << (-LZCOUNT(uVar5 - 1) & 0x3fU);
        }
      }
      if (uVar4 <= uVar5) {
        uVar4 = uVar5;
      }
      if (uVar4 < uVar7) goto LAB_00350ee0;
    }
    uVar7 = param_1[1];
    if ((uVar7 & uVar7 - 1) == 0) {
      unaff_x24 = uVar7 - 1 & uVar8;
      lVar2 = *param_1;
      plVar3 = *(long **)(lVar2 + unaff_x24 * 8);
      goto joined_r0x00350fc4;
    }
    if (uVar8 < uVar7) {
      lVar2 = *param_1;
      plVar3 = *(long **)(lVar2 + uVar8 * 8);
      unaff_x24 = uVar8;
      goto joined_r0x00350fc4;
    }
    uVar4 = 0;
    if (uVar7 != 0) {
      uVar4 = uVar8 / uVar7;
    }
    unaff_x24 = uVar8 - uVar4 * uVar7;
    lVar2 = *param_1;
    plVar3 = *(long **)(lVar2 + unaff_x24 * 8);
    if (plVar3 == (long *)0x0) goto LAB_00350f7c;
LAB_00350e70:
    *auVar13._0_8_ = *plVar3;
  }
  else {
    lVar2 = *param_1;
    plVar3 = *(long **)(lVar2 + unaff_x24 * 8);
joined_r0x00350fc4:
    if (plVar3 != (long *)0x0) goto LAB_00350e70;
LAB_00350f7c:
    plVar3 = param_1 + 2;
    lVar6 = *plVar3;
    *plVar3 = (long)auVar13._0_8_;
    *auVar13._0_8_ = lVar6;
    *(long **)(lVar2 + unaff_x24 * 8) = plVar3;
    if (*auVar13._0_8_ == 0) goto LAB_00351000;
    uVar8 = *(ulong *)(*auVar13._0_8_ + 8);
    if ((uVar7 & uVar7 - 1) == 0) {
      uVar8 = uVar8 & uVar7 - 1;
    }
    else if (uVar7 <= uVar8) {
      uVar4 = 0;
      if (uVar7 != 0) {
        uVar4 = uVar8 / uVar7;
      }
      uVar8 = uVar8 - uVar4 * uVar7;
    }
    plVar3 = (long *)(*param_1 + uVar8 * 8);
  }
  *plVar3 = (long)auVar13._0_8_;
LAB_00351000:
  param_1[3] = param_1[3] + 1;
  auVar13._8_8_ = 1;
  return auVar13;
}


// ===== 0035103c  FUN_0035103c =====

void FUN_0035103c(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  
  if (param_2 == 0) {
    pvVar3 = (void *)*param_1;
    *param_1 = 0;
    if (pvVar3 != (void *)0x0) {
      free(pvVar3);
    }
    param_1[1] = 0;
    return;
  }
  if (param_2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_002f9ee0();
  }
  lVar2 = FUN_00759c3c(param_2 << 3);
  pvVar3 = (void *)*param_1;
  *param_1 = lVar2;
  if (pvVar3 != (void *)0x0) {
    free(pvVar3);
  }
  uVar4 = 0;
  param_1[1] = param_2;
  do {
    *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
    uVar4 = uVar4 + 1;
  } while (param_2 != uVar4);
  plVar6 = param_1 + 2;
  plVar5 = (long *)*plVar6;
  if (plVar5 == (long *)0x0) {
    return;
  }
  uVar4 = plVar5[1];
  uVar10 = NEON_cnt(param_2,1);
  uVar9 = NEON_uaddlv(uVar10,1);
  uVar8 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
  if (uVar8 < 2) {
    uVar4 = uVar4 & param_2 - 1;
    *(long **)(*param_1 + uVar4 * 8) = plVar6;
    plVar6 = (long *)*plVar5;
    if (plVar6 == (long *)0x0) {
      return;
    }
  }
  else {
    if (param_2 <= uVar4) {
      uVar1 = 0;
      if (param_2 != 0) {
        uVar1 = uVar4 / param_2;
      }
      uVar4 = uVar4 - uVar1 * param_2;
    }
    *(long **)(*param_1 + uVar4 * 8) = plVar6;
    plVar6 = (long *)*plVar5;
    if (plVar6 == (long *)0x0) {
      return;
    }
    if (1 < uVar8) {
      do {
        while( true ) {
          uVar8 = plVar6[1];
          if (param_2 <= uVar8) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar8 / param_2;
            }
            uVar8 = uVar8 - uVar1 * param_2;
          }
          if (uVar8 != uVar4) break;
LAB_003511c0:
          plVar5 = plVar6;
          plVar6 = (long *)*plVar5;
          if (plVar6 == (long *)0x0) {
            return;
          }
        }
        if (*(long *)(*param_1 + uVar8 * 8) != 0) {
          *plVar5 = *plVar6;
          *plVar6 = **(long **)(*param_1 + uVar8 * 8);
          **(undefined8 **)(*param_1 + uVar8 * 8) = plVar6;
          plVar6 = plVar5;
          goto LAB_003511c0;
        }
        *(long **)(*param_1 + uVar8 * 8) = plVar5;
        plVar7 = (long *)*plVar6;
        plVar5 = plVar6;
        uVar4 = uVar8;
        plVar6 = plVar7;
        if (plVar7 == (long *)0x0) {
          return;
        }
      } while( true );
    }
  }
  do {
    uVar8 = plVar6[1] & param_2 - 1;
    if (uVar8 != uVar4) {
      if (*(long *)(*param_1 + uVar8 * 8) == 0) {
        *(long **)(*param_1 + uVar8 * 8) = plVar5;
        uVar4 = uVar8;
      }
      else {
        *plVar5 = *plVar6;
        *plVar6 = **(long **)(*param_1 + uVar8 * 8);
        **(undefined8 **)(*param_1 + uVar8 * 8) = plVar6;
        plVar6 = plVar5;
      }
    }
    plVar7 = (long *)*plVar6;
    plVar5 = plVar6;
    plVar6 = plVar7;
  } while (plVar7 != (long *)0x0);
  return;
}


// ===== 00351214  FUN_00351214 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00351214(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long *plVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  ulong local_c0;
  long *local_b8;
  ulong local_b0;
  long *plStack_a8;
  char *local_a0;
  ulong local_90;
  long *local_88;
  char local_80;
  byte local_78 [16];
  void *local_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_2 + 0x30) == 0) {
    uVar10 = FUN_00753a74(0x20);
                    /* try { // try from 0035155c to 0035156b has its CatchHandler @ 00351794 */
    FUN_002fd2b0(local_78,"loadWeight(): Model blob is empty.");
                    /* try { // try from 00351570 to 003515a7 has its CatchHandler @ 00351770 */
    FUN_00374d78(uVar10,local_78);
    if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar10,PTR_PTR_007a1348,PTR_FUN_007a11f8);
    }
    goto LAB_003517e0;
  }
  if (((DAT_007aafd0 & 1) == 0) && (iVar8 = FUN_00739c1c(&DAT_007aafd0), iVar8 != 0)) {
    DAT_007ab090 = 0;
    DAT_007ab098 = 0x3f800000;
    _DAT_007ab078 = 0;
    _DAT_007ab070 = 0;
    uRam00000000007ab088 = 0;
    _DAT_007ab080 = 0;
    uRam00000000007ab068 = 0;
    _DAT_007ab060 = 0;
    uRam00000000007ab058 = 0;
    _DAT_007ab050 = 0;
    __cxa_atexit(PTR_FUN_007a15e8,&DAT_007ab050,&PTR_LOOP_0075ec90);
    FUN_00739d60(&DAT_007aafd0);
  }
  FUN_0034cc1c(local_78,param_2);
                    /* try { // try from 0035126c to 00351287 has its CatchHandler @ 003517e4 */
  FUN_00715bcc(&DAT_007ab050);
  lVar9 = FUN_00351ac4(&DAT_007ab078,local_78);
  if (lVar9 == 0) {
    local_90 = local_90 & 0xffffffffffffff00;
    local_80 = '\0';
    FUN_00715bf8(&DAT_007ab050);
LAB_00351324:
    local_b8 = (long *)0x0;
    local_c0 = 0;
                    /* try { // try from 00351328 to 0035132f has its CatchHandler @ 00351714 */
    FUN_00368430(&local_b0,*(undefined8 *)(param_2 + 0x30));
    uVar11 = local_b0;
    if (local_b0 == 0) {
      local_c0 = local_b0;
      local_b8 = (long *)0x0;
      uVar10 = FUN_00753a74(0x20);
                    /* try { // try from 00351668 to 00351677 has its CatchHandler @ 003516d8 */
      FUN_002fd2b0(&local_b0,"loadWeight(): Failed to load the weight.");
                    /* try { // try from 0035167c to 003516b3 has its CatchHandler @ 003516b4 */
      FUN_00374d78(uVar10,&local_b0);
      if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_00753c5c(uVar10,PTR_PTR_007a1348,PTR_FUN_007a11f8);
      }
      goto LAB_003517e0;
    }
                    /* try { // try from 00351338 to 0035133f has its CatchHandler @ 00351700 */
    local_b8 = (long *)FUN_00759c3c(0x20);
    puVar6 = PTR_DAT_007a15e0;
    local_b8[2] = 0;
    local_b8[3] = uVar11;
    local_c0 = uVar11;
    *local_b8 = (long)(puVar6 + 0x10);
    local_b8[1] = 0;
    FUN_0035192c(&local_b0,&DAT_007ab050,local_78,&local_c0);
    plVar2 = plStack_a8;
    uVar11 = local_b0;
    if (plStack_a8 != (long *)0x0) {
      FUN_00755c20(1,plStack_a8 + 1);
    }
    plVar7 = local_b8;
    local_c0 = uVar11;
    local_b8 = plVar2;
    if ((plVar7 != (long *)0x0) && (lVar9 = FUN_00755c50(0xffffffffffffffff,plVar7 + 1), lVar9 == 0)
       ) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      FUN_0071245c(plVar7);
    }
    plVar2 = plStack_a8;
    uVar11 = local_c0;
    if ((plStack_a8 != (long *)0x0) &&
       (lVar9 = FUN_00755c50(0xffffffffffffffff,plStack_a8 + 1), uVar11 = local_c0, lVar9 == 0)) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_0071245c(plVar2);
      uVar11 = local_c0;
    }
  }
  else {
    local_90 = *(ulong *)(lVar9 + 0x30);
    local_88 = *(long **)(lVar9 + 0x38);
    if (local_88 == (long *)0x0) {
      local_80 = '\x01';
      FUN_00715bf8(&DAT_007ab050);
      uVar11 = local_90;
      plVar2 = local_88;
    }
    else {
      FUN_00755c20(1,local_88 + 1);
      local_80 = '\x01';
      FUN_00715bf8(&DAT_007ab050);
      uVar11 = local_90;
      plVar2 = local_88;
    }
    local_90 = uVar11;
    local_88 = plVar2;
    if (lVar9 == 0) goto LAB_00351324;
    local_b8 = (long *)0x0;
    local_c0 = 0;
    if (plVar2 != (long *)0x0) {
      FUN_00755c20(1,plVar2 + 1);
      local_b8 = plVar2;
    }
  }
  local_c0 = uVar11;
  if (local_c0 == 0) {
                    /* try { // try from 003513fc to 00351403 has its CatchHandler @ 00351710 */
    local_a0 = (char *)FUN_00759c3c(0x28);
    plStack_a8 = _UNK_00200458;
    local_b0 = _DAT_00200450;
    uVar5 = s_loadWeight____weightPtr_is_nullp_001f5465._24_8_;
    uVar4 = s_loadWeight____weightPtr_is_nullp_001f5465._16_8_;
    uVar3 = s_loadWeight____weightPtr_is_nullp_001f5465._8_8_;
    uVar10 = s_loadWeight____weightPtr_is_nullp_001f5465._0_8_;
    local_a0[0x1f] = 'p';
    local_a0[0x20] = 't';
    local_a0[0x21] = 'r';
    local_a0[0x22] = '.';
    *(undefined8 *)(local_a0 + 8) = uVar3;
    *(undefined8 *)local_a0 = uVar10;
    *(undefined8 *)(local_a0 + 0x18) = uVar5;
    *(undefined8 *)(local_a0 + 0x10) = uVar4;
    local_a0[0x23] = '\0';
                    /* try { // try from 00351434 to 0035144f has its CatchHandler @ 003516e8 */
    FUN_00372794(&local_b0,
                 "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/inference-engine/src/native/src/krisp_native_executable_network_factory.cpp"
                 ,0x39,"loadWeight");
    if ((local_b0 & 1) != 0) {
      free(local_a0);
    }
  }
  plVar2 = local_88;
  if (((local_80 != '\0') && (local_88 != (long *)0x0)) &&
     (lVar9 = FUN_00755c50(0xffffffffffffffff,local_88 + 1), lVar9 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
  }
  if ((local_78[0] & 1) != 0) {
    free(local_68);
  }
                    /* try { // try from 00351494 to 0035149b has its CatchHandler @ 003517a4 */
  FUN_00368210(local_78,local_c0);
                    /* try { // try from 0035149c to 003514bf has its CatchHandler @ 003517ac */
  auVar12 = FUN_003524c4(local_78);
  uVar11 = auVar12._0_8_ & 0xffffffff;
  if (auVar12._0_4_ == 0) {
    uVar10 = FUN_00753a74(0x20,auVar12._8_8_,uVar11);
                    /* try { // try from 0035160c to 0035161b has its CatchHandler @ 00351760 */
    FUN_002fd2b0(&local_90,"NativeExecutableNetworkFactory::create: Unsupported model version");
                    /* try { // try from 00351620 to 00351657 has its CatchHandler @ 0035173c */
    FUN_00374ee0(uVar10,&local_90);
    if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00753c5c(uVar10,PTR_PTR_007a1338,PTR_FUN_007a11f8);
    }
  }
  else {
    FUN_00352b10(param_1,param_2,local_c0,uVar11,param_3);
    if ((local_78[0] & 1) != 0) {
      free(local_68);
    }
    plVar2 = local_b8;
    if ((local_b8 != (long *)0x0) &&
       (lVar9 = FUN_00755c50(0xffffffffffffffff,local_b8 + 1), lVar9 == 0)) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_0071245c(plVar2);
    }
    if (*(long *)(lVar1 + 0x28) == local_58) {
      return;
    }
  }
LAB_003517e0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003517e8  FUN_003517e8 =====

void FUN_003517e8(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 00351838  FUN_00351838 =====

void FUN_00351838(long param_1)

{
  byte bVar1;
  undefined8 *__ptr;
  void *pvVar2;
  long lVar3;
  long *plVar4;
  
  __ptr = (undefined8 *)*(void **)(param_1 + 0x38);
  while (__ptr != (undefined8 *)0x0) {
    plVar4 = (long *)__ptr[7];
    pvVar2 = (void *)*__ptr;
    if ((plVar4 == (long *)0x0) || (lVar3 = FUN_00755c50(0xffffffffffffffff,plVar4 + 1), lVar3 != 0)
       ) {
      bVar1 = *(byte *)(__ptr + 2);
    }
    else {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN_0071245c(plVar4);
      bVar1 = *(byte *)(__ptr + 2);
    }
    if ((bVar1 & 1) != 0) {
      free((void *)__ptr[4]);
    }
    free(__ptr);
    __ptr = (undefined8 *)pvVar2;
  }
  pvVar2 = *(void **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (pvVar2 != (void *)0x0) {
    free(pvVar2);
  }
  FUN_00715bac(param_1);
  return;
}


// ===== 003518dc  FUN_003518dc =====

void FUN_003518dc(undefined8 *param_1)

{
  void *__ptr;
  
  __ptr = (void *)*param_1;
  *param_1 = 0;
  if (__ptr != (void *)0x0) {
    if ((*(byte *)((long)__ptr + 0x18) & 1) != 0) {
      free(*(void **)((long)__ptr + 0x28));
    }
    FUN_00351cb4(__ptr,*(undefined8 *)((long)__ptr + 8));
    free(__ptr);
    return;
  }
  return;
}


// ===== 0035192c  FUN_0035192c =====

void FUN_0035192c(undefined8 *param_1,long param_2,ulong *param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  ulong local_80;
  ulong uStack_78;
  void *local_70;
  undefined4 local_68;
  undefined8 local_60;
  long *local_58;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 00351960 to 0035196f has its CatchHandler @ 00351a68 */
  FUN_00715bcc();
  lVar4 = FUN_00351ac4(param_2 + 0x28,param_3);
  if (lVar4 == 0) {
    if ((*param_3 & 1) == 0) {
      uStack_78 = param_3[1];
      local_80 = *param_3;
      local_70 = (void *)param_3[2];
    }
    else {
                    /* try { // try from 003519dc to 003519e3 has its CatchHandler @ 00351a68 */
      FUN_002fb36c(&local_80,param_3[2],param_3[1]);
    }
    local_60 = *param_4;
    local_58 = (long *)param_4[1];
    local_68 = (undefined4)param_3[3];
    if (local_58 != (long *)0x0) {
      FUN_00755c20(1,local_58 + 1);
    }
                    /* try { // try from 00351a04 to 00351a13 has its CatchHandler @ 00351a68 */
    FUN_00351d40(param_2 + 0x28,&local_80,&local_80);
    plVar3 = local_58;
    if ((local_58 != (long *)0x0) &&
       (lVar4 = FUN_00755c50(0xffffffffffffffff,local_58 + 1), lVar4 == 0)) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      FUN_0071245c(plVar3);
    }
    if ((local_80 & 1) != 0) {
      free(local_70);
    }
    lVar1 = param_4[1];
    *param_1 = *param_4;
    param_1[1] = lVar1;
  }
  else {
    lVar1 = *(long *)(lVar4 + 0x38);
    *param_1 = *(undefined8 *)(lVar4 + 0x30);
    param_1[1] = lVar1;
  }
  if (lVar1 != 0) {
    FUN_00755c20(1,lVar1 + 8);
  }
  FUN_00715bf8(param_2);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00351a6c  FUN_00351a6c =====

void FUN_00351a6c(long param_1)

{
  long lVar1;
  long *plVar2;
  
  if (((*(char *)(param_1 + 0x10) != '\0') &&
      (plVar2 = *(long **)(param_1 + 8), plVar2 != (long *)0x0)) &&
     (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 00351ac4  FUN_00351ac4 =====

long * FUN_00351ac4(long *param_1,byte *param_2)

{
  byte *pbVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  undefined1 uStack_49;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar4 = *(ulong *)(param_2 + 8);
  pbVar1 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar1 = param_2 + 1;
    uVar4 = (ulong)(*param_2 >> 1);
  }
                    /* try { // try from 00351b08 to 00351b0f has its CatchHandler @ 00351c20 */
  uVar4 = FUN_0034bfb4(&uStack_49,pbVar1,uVar4);
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    uVar4 = uVar4 ^ (long)*(int *)(param_2 + 0x18);
    uVar10 = NEON_cnt(uVar7,1);
    uVar9 = NEON_uaddlv(uVar10,1);
    uVar5 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
    if (uVar5 < 2) {
      uVar8 = uVar7 - 1 & uVar4;
    }
    else {
      uVar8 = uVar4;
      if (uVar7 <= uVar4) {
        uVar8 = 0;
        if (uVar7 != 0) {
          uVar8 = uVar4 / uVar7;
        }
        uVar8 = uVar4 - uVar8 * uVar7;
      }
    }
    plVar6 = *(long **)(*param_1 + uVar8 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      if (plVar6 != (long *)0x0) {
        if (uVar5 < 2) {
          do {
            if (plVar6[1] == uVar4) {
              uVar5 = FUN_0034cc80(plVar6 + 2,param_2);
              if ((uVar5 & 1) != 0) break;
            }
            else if ((plVar6[1] & uVar7 - 1) != uVar8) goto LAB_00351bec;
            plVar6 = (long *)*plVar6;
          } while (plVar6 != (long *)0x0);
        }
        else {
          do {
            uVar5 = plVar6[1];
            if (uVar5 == uVar4) {
              uVar5 = FUN_0034cc80(plVar6 + 2,param_2);
              if ((uVar5 & 1) != 0) break;
            }
            else {
              if (uVar7 <= uVar5) {
                uVar2 = 0;
                if (uVar7 != 0) {
                  uVar2 = uVar5 / uVar7;
                }
                uVar5 = uVar5 - uVar2 * uVar7;
              }
              if (uVar5 != uVar8) goto LAB_00351bec;
            }
            plVar6 = (long *)*plVar6;
          } while (plVar6 != (long *)0x0);
        }
      }
      goto LAB_00351bf0;
    }
  }
LAB_00351bec:
  plVar6 = (long *)0x0;
LAB_00351bf0:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return plVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00351c24  FUN_00351c24 =====

void FUN_00351c24(void *param_1)

{
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 00351c48  FUN_00351c48 =====

void FUN_00351c48(long param_1)

{
  void *__ptr;
  
  __ptr = *(void **)(param_1 + 0x18);
  if (__ptr != (void *)0x0) {
    if ((*(byte *)((long)__ptr + 0x18) & 1) != 0) {
      free(*(void **)((long)__ptr + 0x28));
    }
    FUN_00351cb4(__ptr,*(undefined8 *)((long)__ptr + 8));
    free(__ptr);
    return;
  }
  return;
}


// ===== 00351c94  FUN_00351c94 =====

long FUN_00351c94(long param_1,long param_2)

{
  param_1 = param_1 + 0x18;
  if (*(undefined **)(param_2 + 8) != PTR_s_NSt6__ndk114default_deleteIN5KRI_007a15f0) {
    param_1 = 0;
  }
  return param_1;
}


// ===== 00351cb0  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00351cb4  FUN_00351cb4 =====

void FUN_00351cb4(undefined8 param_1,undefined8 *param_2)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  
  if (param_2 != (undefined8 *)0x0) {
    FUN_00351cb4(param_1,*param_2);
    FUN_00351cb4(param_1,param_2[1]);
    plVar3 = (long *)param_2[8];
    if ((plVar3 == (long *)0x0) || (lVar2 = FUN_00755c50(0xffffffffffffffff,plVar3 + 1), lVar2 != 0)
       ) {
      bVar1 = *(byte *)(param_2 + 4);
    }
    else {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      FUN_0071245c(plVar3);
      bVar1 = *(byte *)(param_2 + 4);
    }
    if ((bVar1 & 1) != 0) {
      free((void *)param_2[6]);
    }
    free(param_2);
    return;
  }
  return;
}


// ===== 00351d40  FUN_00351d40 =====

long * FUN_00351d40(long *param_1,byte *param_2,byte *param_3)

{
  byte *pbVar1;
  undefined4 uVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  ulong unaff_x26;
  undefined2 uVar14;
  undefined8 uVar15;
  long lVar16;
  float fVar17;
  long lVar18;
  long *local_80;
  long *plStack_78;
  undefined1 local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  uVar13 = *(ulong *)(param_2 + 8);
  pbVar1 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar1 = param_2 + 1;
    uVar13 = (ulong)(*param_2 >> 1);
  }
                    /* try { // try from 00351d90 to 00351d97 has its CatchHandler @ 00352144 */
  uVar6 = FUN_0034bfb4(&local_80,pbVar1,uVar13);
  uVar13 = param_1[1];
  uVar6 = uVar6 ^ (long)*(int *)(param_2 + 0x18);
  if (uVar13 != 0) {
    uVar15 = NEON_cnt(uVar13,1);
    uVar14 = NEON_uaddlv(uVar15,1);
    uVar11 = CONCAT62((int6)((ulong)uVar15 >> 0x10),uVar14) & 0xffffffff;
    if (uVar11 < 2) {
      unaff_x26 = uVar13 - 1 & uVar6;
    }
    else {
      unaff_x26 = uVar6;
      if (uVar13 <= uVar6) {
        uVar4 = 0;
        if (uVar13 != 0) {
          uVar4 = uVar6 / uVar13;
        }
        unaff_x26 = uVar6 - uVar4 * uVar13;
      }
    }
    plVar10 = *(long **)(*param_1 + unaff_x26 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar10[1] == uVar6) {
            plVar7 = (long *)FUN_0034cc80(plVar10 + 2,param_2);
            if (((ulong)plVar7 & 1) != 0) goto LAB_00351e7c;
          }
          else if ((plVar10[1] & uVar13 - 1) != unaff_x26) break;
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar10[1];
          if (uVar11 == uVar6) {
            plVar7 = (long *)FUN_0034cc80(plVar10 + 2,param_2);
            if (((ulong)plVar7 & 1) != 0) goto LAB_00351e7c;
          }
          else {
            if (uVar13 <= uVar11) {
              uVar4 = 0;
              if (uVar13 != 0) {
                uVar4 = uVar11 / uVar13;
              }
              uVar11 = uVar11 - uVar4 * uVar13;
            }
            if (uVar11 != unaff_x26) break;
          }
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
    }
  }
  plVar10 = param_1 + 2;
  plVar8 = (long *)FUN_00759c3c(0x40);
  bVar3 = *param_3;
  local_70 = 0;
  *plVar8 = 0;
  plVar8[1] = uVar6;
  local_80 = plVar8;
  plStack_78 = plVar10;
  if ((bVar3 & 1) == 0) {
    lVar16 = *(long *)param_3;
    lVar9 = *(long *)(param_3 + 0x10);
    plVar8[3] = *(long *)(param_3 + 8);
    plVar8[2] = lVar16;
    plVar8[4] = lVar9;
    plVar7 = plVar8;
  }
  else {
                    /* try { // try from 00351ed0 to 00351ed7 has its CatchHandler @ 0035211c */
    plVar7 = (long *)FUN_002fb36c(plVar8 + 2,*(undefined8 *)(param_3 + 0x10),
                                  *(undefined8 *)(param_3 + 8));
  }
  lVar18 = *(long *)(param_3 + 0x28);
  lVar16 = *(long *)(param_3 + 0x20);
  param_3[0x20] = 0;
  param_3[0x21] = 0;
  param_3[0x22] = 0;
  param_3[0x23] = 0;
  param_3[0x24] = 0;
  param_3[0x25] = 0;
  param_3[0x26] = 0;
  param_3[0x27] = 0;
  param_3[0x28] = 0;
  param_3[0x29] = 0;
  param_3[0x2a] = 0;
  param_3[0x2b] = 0;
  param_3[0x2c] = 0;
  param_3[0x2d] = 0;
  param_3[0x2e] = 0;
  param_3[0x2f] = 0;
  uVar2 = *(undefined4 *)(param_3 + 0x18);
  lVar9 = param_1[3];
  plVar8[7] = lVar18;
  plVar8[6] = lVar16;
  fVar17 = *(float *)(param_1 + 4);
  *(undefined4 *)(plVar8 + 5) = uVar2;
  local_70 = 1;
  if ((uVar13 == 0) || (fVar17 * (float)uVar13 < (float)(lVar9 + 1))) {
    if (uVar13 < 3) {
      uVar11 = 1;
    }
    else {
      uVar11 = (ulong)((uVar13 & uVar13 - 1) != 0);
    }
    plVar8 = (long *)(uVar11 | uVar13 << 1);
    plVar12 = (long *)(long)((float)(lVar9 + 1) / fVar17);
    if (plVar8 <= plVar12) {
      plVar8 = plVar12;
    }
    if ((long)plVar8 - 1U == 0) {
      plVar8 = (long *)0x2;
    }
    else if (((ulong)plVar8 & (long)plVar8 - 1U) != 0) {
                    /* try { // try from 00351f88 to 0035200b has its CatchHandler @ 00352118 */
      plVar7 = (long *)FUN_00711ce0(plVar8);
      plVar8 = plVar7;
    }
    plVar12 = (long *)param_1[1];
    if (plVar12 < plVar8) {
LAB_00351fa0:
      plVar7 = (long *)FUN_003521c4(param_1,plVar8);
    }
    else if (plVar8 < plVar12) {
      plVar7 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if (plVar12 < (long *)0x3) {
LAB_00352008:
        plVar7 = (long *)FUN_00711ce0();
      }
      else {
        uVar15 = NEON_cnt(plVar12,1);
        uVar14 = NEON_uaddlv(uVar15,1);
        if (1 < (CONCAT62((int6)((ulong)uVar15 >> 0x10),uVar14) & 0xffffffff)) goto LAB_00352008;
        if ((long *)0x1 < plVar7) {
          plVar7 = (long *)(1L << (-LZCOUNT((long)plVar7 + -1) & 0x3fU));
        }
      }
      if (plVar8 <= plVar7) {
        plVar8 = plVar7;
      }
      if (plVar8 < plVar12) goto LAB_00351fa0;
    }
    uVar13 = param_1[1];
    if ((uVar13 & uVar13 - 1) == 0) {
      unaff_x26 = uVar13 - 1 & uVar6;
      plVar8 = *(long **)(*param_1 + unaff_x26 * 8);
      goto joined_r0x00352094;
    }
    if (uVar6 < uVar13) {
      plVar8 = *(long **)(*param_1 + uVar6 * 8);
      unaff_x26 = uVar6;
      goto joined_r0x00352094;
    }
    uVar11 = 0;
    if (uVar13 != 0) {
      uVar11 = uVar6 / uVar13;
    }
    unaff_x26 = uVar6 - uVar11 * uVar13;
    plVar8 = *(long **)(*param_1 + unaff_x26 * 8);
    if (plVar8 != (long *)0x0) goto LAB_00351f28;
LAB_00352040:
    *local_80 = param_1[2];
    param_1[2] = (long)local_80;
    *(long **)(*param_1 + unaff_x26 * 8) = plVar10;
    if (*local_80 != 0) {
      uVar6 = *(ulong *)(*local_80 + 8);
      if ((uVar13 & uVar13 - 1) == 0) {
        uVar6 = uVar6 & uVar13 - 1;
      }
      else if (uVar13 <= uVar6) {
        uVar11 = 0;
        if (uVar13 != 0) {
          uVar11 = uVar6 / uVar13;
        }
        uVar6 = uVar6 - uVar11 * uVar13;
      }
      *(long **)(*param_1 + uVar6 * 8) = local_80;
    }
  }
  else {
    plVar8 = *(long **)(*param_1 + unaff_x26 * 8);
joined_r0x00352094:
    if (plVar8 == (long *)0x0) goto LAB_00352040;
LAB_00351f28:
    *local_80 = *plVar8;
    *plVar8 = (long)local_80;
  }
  uVar15 = 1;
  param_1[3] = param_1[3] + 1;
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return local_80;
  }
LAB_00352140:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar7,uVar15);
LAB_00351e7c:
  uVar15 = 0;
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return plVar10;
  }
  goto LAB_00352140;
}


// ===== 00352148  FUN_00352148 =====

void FUN_00352148(undefined8 *param_1)

{
  long lVar1;
  void *__ptr;
  long *plVar2;
  
  __ptr = (void *)*param_1;
  *param_1 = 0;
  if (__ptr != (void *)0x0) {
    if (*(char *)(param_1 + 2) != '\0') {
      plVar2 = *(long **)((long)__ptr + 0x38);
      if ((plVar2 != (long *)0x0) &&
         (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0)) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        FUN_0071245c(plVar2);
      }
      if ((*(byte *)((long)__ptr + 0x10) & 1) != 0) {
        free(*(void **)((long)__ptr + 0x20));
      }
    }
    free(__ptr);
    return;
  }
  return;
}


// ===== 003521c4  FUN_003521c4 =====

void FUN_003521c4(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  
  if (param_2 == 0) {
    pvVar3 = (void *)*param_1;
    *param_1 = 0;
    if (pvVar3 != (void *)0x0) {
      free(pvVar3);
    }
    param_1[1] = 0;
    return;
  }
  if (param_2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_002f9ee0();
  }
  lVar2 = FUN_00759c3c(param_2 << 3);
  pvVar3 = (void *)*param_1;
  *param_1 = lVar2;
  if (pvVar3 != (void *)0x0) {
    free(pvVar3);
  }
  uVar4 = 0;
  param_1[1] = param_2;
  do {
    *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
    uVar4 = uVar4 + 1;
  } while (param_2 != uVar4);
  plVar6 = param_1 + 2;
  plVar5 = (long *)*plVar6;
  if (plVar5 == (long *)0x0) {
    return;
  }
  uVar4 = plVar5[1];
  uVar10 = NEON_cnt(param_2,1);
  uVar9 = NEON_uaddlv(uVar10,1);
  uVar8 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
  if (uVar8 < 2) {
    uVar4 = uVar4 & param_2 - 1;
    *(long **)(*param_1 + uVar4 * 8) = plVar6;
    plVar6 = (long *)*plVar5;
    if (plVar6 == (long *)0x0) {
      return;
    }
  }
  else {
    if (param_2 <= uVar4) {
      uVar1 = 0;
      if (param_2 != 0) {
        uVar1 = uVar4 / param_2;
      }
      uVar4 = uVar4 - uVar1 * param_2;
    }
    *(long **)(*param_1 + uVar4 * 8) = plVar6;
    plVar6 = (long *)*plVar5;
    if (plVar6 == (long *)0x0) {
      return;
    }
    if (1 < uVar8) {
      do {
        while( true ) {
          uVar8 = plVar6[1];
          if (param_2 <= uVar8) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar8 / param_2;
            }
            uVar8 = uVar8 - uVar1 * param_2;
          }
          if (uVar8 != uVar4) break;
LAB_00352348:
          plVar5 = plVar6;
          plVar6 = (long *)*plVar5;
          if (plVar6 == (long *)0x0) {
            return;
          }
        }
        if (*(long *)(*param_1 + uVar8 * 8) != 0) {
          *plVar5 = *plVar6;
          *plVar6 = **(long **)(*param_1 + uVar8 * 8);
          **(undefined8 **)(*param_1 + uVar8 * 8) = plVar6;
          plVar6 = plVar5;
          goto LAB_00352348;
        }
        *(long **)(*param_1 + uVar8 * 8) = plVar5;
        plVar7 = (long *)*plVar6;
        plVar5 = plVar6;
        uVar4 = uVar8;
        plVar6 = plVar7;
        if (plVar7 == (long *)0x0) {
          return;
        }
      } while( true );
    }
  }
  do {
    uVar8 = plVar6[1] & param_2 - 1;
    if (uVar8 != uVar4) {
      if (*(long *)(*param_1 + uVar8 * 8) == 0) {
        *(long **)(*param_1 + uVar8 * 8) = plVar5;
        uVar4 = uVar8;
      }
      else {
        *plVar5 = *plVar6;
        *plVar6 = **(long **)(*param_1 + uVar8 * 8);
        **(undefined8 **)(*param_1 + uVar8 * 8) = plVar6;
        plVar6 = plVar5;
      }
    }
    plVar7 = (long *)*plVar6;
    plVar5 = plVar6;
    plVar6 = plVar7;
  } while (plVar7 != (long *)0x0);
  return;
}


// ===== 0035239c  _INIT_15 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_15(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_FUN_007a13a0;
  DAT_007aafe6 = 0;
  DAT_007aafd8 = 0x1a;
  DAT_007aafd9._0_5_ = _DAT_001c0b9d;
  DAT_007aafd9._5_3_ = s_PG_1_0_0_001c0ba2._0_3_;
  uRam00000000007aafe1 = s_PG_1_0_0_001c0ba2._3_5_;
  __cxa_atexit(PTR_FUN_007a13a0,&DAT_007aafd8,&PTR_LOOP_0075ec90);
  DAT_007aaff0 = 0x1a;
  DAT_007aaff1._0_1_ = s_PPG2MEL_1_0_0_001cda7b[0];
  DAT_007aaff1._1_1_ = s_PPG2MEL_1_0_0_001cda7b[1];
  DAT_007aaff1._2_1_ = s_PPG2MEL_1_0_0_001cda7b[2];
  DAT_007aaff1._3_1_ = s_PPG2MEL_1_0_0_001cda7b[3];
  DAT_007aaff1._4_1_ = s_PPG2MEL_1_0_0_001cda7b[4];
  DAT_007aaff1._5_1_ = s_PPG2MEL_1_0_0_001cda7b[5];
  DAT_007aaff1._6_1_ = s_PPG2MEL_1_0_0_001cda7b[6];
  DAT_007aaff1._7_1_ = s_PPG2MEL_1_0_0_001cda7b[7];
  uRam00000000007aaff9._0_1_ = s_PPG2MEL_1_0_0_001cda7b[8];
  uRam00000000007aaff9._1_1_ = s_PPG2MEL_1_0_0_001cda7b[9];
  uRam00000000007aaff9._2_1_ = s_PPG2MEL_1_0_0_001cda7b[10];
  uRam00000000007aaff9._3_1_ = s_PPG2MEL_1_0_0_001cda7b[0xb];
  uRam00000000007aaff9._4_1_ = s_PPG2MEL_1_0_0_001cda7b[0xc];
  DAT_007aaffe = 0;
  __cxa_atexit(puVar1,&DAT_007aaff0,&PTR_LOOP_0075ec90);
  DAT_007ab008 = 0x1a;
  DAT_007ab009._0_5_ = _DAT_001e2881;
  DAT_007ab009._5_1_ = s_PG_1_0_0_001e2886[0];
  DAT_007ab009._6_1_ = s_PG_1_0_0_001e2886[1];
  DAT_007ab009._7_1_ = s_PG_1_0_0_001e2886[2];
  uRam00000000007ab011._0_1_ = s_PG_1_0_0_001e2886[3];
  uRam00000000007ab011._1_1_ = s_PG_1_0_0_001e2886[4];
  uRam00000000007ab011._2_1_ = s_PG_1_0_0_001e2886[5];
  uRam00000000007ab011._3_1_ = s_PG_1_0_0_001e2886[6];
  uRam00000000007ab011._4_1_ = s_PG_1_0_0_001e2886[7];
  DAT_007ab016 = 0;
  __cxa_atexit(puVar1,&DAT_007ab008,&PTR_LOOP_0075ec90);
  DAT_007ab020 = 0x1a;
  DAT_007ab021._0_5_ = _DAT_001e059b;
  DAT_007ab021._5_1_ = s_AV_1_0_0_001e05a0[0];
  DAT_007ab021._6_1_ = s_AV_1_0_0_001e05a0[1];
  DAT_007ab021._7_1_ = s_AV_1_0_0_001e05a0[2];
  uRam00000000007ab029._0_1_ = s_AV_1_0_0_001e05a0[3];
  uRam00000000007ab029._1_1_ = s_AV_1_0_0_001e05a0[4];
  uRam00000000007ab029._2_1_ = s_AV_1_0_0_001e05a0[5];
  uRam00000000007ab029._3_1_ = s_AV_1_0_0_001e05a0[6];
  uRam00000000007ab029._4_1_ = s_AV_1_0_0_001e05a0[7];
  DAT_007ab02e = 0;
  __cxa_atexit(puVar1,&DAT_007ab020,&PTR_LOOP_0075ec90);
  DAT_007ab038 = 0x1a;
  DAT_007ab039._0_1_ = s_Vocoder_1_0_0_001d5a77[0];
  DAT_007ab039._1_1_ = s_Vocoder_1_0_0_001d5a77[1];
  DAT_007ab039._2_1_ = s_Vocoder_1_0_0_001d5a77[2];
  DAT_007ab039._3_1_ = s_Vocoder_1_0_0_001d5a77[3];
  DAT_007ab039._4_1_ = s_Vocoder_1_0_0_001d5a77[4];
  DAT_007ab039._5_1_ = s_Vocoder_1_0_0_001d5a77[5];
  DAT_007ab039._6_1_ = s_Vocoder_1_0_0_001d5a77[6];
  DAT_007ab039._7_1_ = s_Vocoder_1_0_0_001d5a77[7];
  uRam00000000007ab041._0_1_ = s_Vocoder_1_0_0_001d5a77[8];
  uRam00000000007ab041._1_1_ = s_Vocoder_1_0_0_001d5a77[9];
  uRam00000000007ab041._2_1_ = s_Vocoder_1_0_0_001d5a77[10];
  uRam00000000007ab041._3_1_ = s_Vocoder_1_0_0_001d5a77[0xb];
  uRam00000000007ab041._4_1_ = s_Vocoder_1_0_0_001d5a77[0xc];
  DAT_007ab046 = 0;
  __cxa_atexit(puVar1,&DAT_007ab038,&PTR_LOOP_0075ec90);
  return;
}


// ===== 003524c4  FUN_003524c4 =====

undefined4 FUN_003524c4(byte *param_1)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  
  bVar3 = *param_1;
  uVar6 = (ulong)(bVar3 >> 1);
  sVar1 = uVar6;
  if ((bVar3 & 1) != 0) {
    sVar1 = *(size_t *)(param_1 + 8);
  }
  sVar2 = (ulong)(DAT_007ab0a0 >> 1);
  if ((DAT_007ab0a0 & 1) != 0) {
    sVar2 = DAT_007ab0a8;
  }
  if (sVar1 == sVar2) {
    pbVar8 = (byte *)&DAT_007ab0a1;
    if ((DAT_007ab0a0 & 1) != 0) {
      pbVar8 = DAT_007ab0b0;
    }
    if ((bVar3 & 1) == 0) {
      if (bVar3 < 2) {
        return 6;
      }
      pbVar7 = param_1 + 1;
      while (*pbVar7 == *pbVar8) {
        uVar6 = uVar6 - 1;
        pbVar8 = pbVar8 + 1;
        pbVar7 = pbVar7 + 1;
        if (uVar6 == 0) {
          return 6;
        }
      }
    }
    else {
      iVar4 = memcmp(*(void **)(param_1 + 0x10),pbVar8,*(size_t *)(param_1 + 8));
      if (iVar4 == 0) {
        return 6;
      }
    }
  }
  uVar6 = (ulong)(DAT_007ab0b8 >> 1);
  sVar2 = uVar6;
  if ((DAT_007ab0b8 & 1) != 0) {
    sVar2 = DAT_007ab0c0;
  }
  if (sVar2 == sVar1) {
    pbVar8 = *(byte **)(param_1 + 0x10);
    if ((bVar3 & 1) == 0) {
      pbVar8 = param_1 + 1;
    }
    if ((DAT_007ab0b8 & 1) == 0) {
      if (DAT_007ab0b8 < 2) {
        return 1;
      }
      pbVar7 = &DAT_007ab0b9;
      while (*pbVar7 == *pbVar8) {
        uVar6 = uVar6 - 1;
        pbVar8 = pbVar8 + 1;
        pbVar7 = pbVar7 + 1;
        if (uVar6 == 0) {
          return 1;
        }
      }
    }
    else {
      iVar4 = memcmp(DAT_007ab0c8,pbVar8,DAT_007ab0c0);
      if (iVar4 == 0) {
        return 1;
      }
    }
  }
  uVar6 = (ulong)(DAT_007ab160 >> 1);
  sVar2 = uVar6;
  if ((DAT_007ab160 & 1) != 0) {
    sVar2 = DAT_007ab168;
  }
  if (sVar2 == sVar1) {
    pbVar8 = *(byte **)(param_1 + 0x10);
    if ((bVar3 & 1) == 0) {
      pbVar8 = param_1 + 1;
    }
    if ((DAT_007ab160 & 1) == 0) {
      if (1 < DAT_007ab160) {
        pbVar7 = &DAT_007ab161;
        do {
          if (*pbVar7 != *pbVar8) goto LAB_00352638;
          uVar6 = uVar6 - 1;
          pbVar8 = pbVar8 + 1;
          pbVar7 = pbVar7 + 1;
        } while (uVar6 != 0);
      }
      return 1;
    }
    iVar4 = memcmp(DAT_007ab170,pbVar8,DAT_007ab168);
    if (iVar4 == 0) {
      return 1;
    }
  }
LAB_00352638:
  uVar6 = (ulong)(DAT_007ab0d0 >> 1);
  sVar2 = uVar6;
  if ((DAT_007ab0d0 & 1) != 0) {
    sVar2 = DAT_007ab0d8;
  }
  if (sVar2 == sVar1) {
    pbVar8 = *(byte **)(param_1 + 0x10);
    if ((bVar3 & 1) == 0) {
      pbVar8 = param_1 + 1;
    }
    if ((DAT_007ab0d0 & 1) == 0) {
      if (DAT_007ab0d0 < 2) {
        return 2;
      }
      pbVar7 = &DAT_007ab0d1;
      while (*pbVar7 == *pbVar8) {
        uVar6 = uVar6 - 1;
        pbVar8 = pbVar8 + 1;
        pbVar7 = pbVar7 + 1;
        if (uVar6 == 0) {
          return 2;
        }
      }
    }
    else {
      iVar4 = memcmp(DAT_007ab0e0,pbVar8,DAT_007ab0d8);
      if (iVar4 == 0) {
        return 2;
      }
    }
  }
  uVar6 = (ulong)(DAT_007ab148 >> 1);
  sVar2 = uVar6;
  if ((DAT_007ab148 & 1) != 0) {
    sVar2 = DAT_007ab150;
  }
  if (sVar2 == sVar1) {
    pbVar8 = *(byte **)(param_1 + 0x10);
    if ((bVar3 & 1) == 0) {
      pbVar8 = param_1 + 1;
    }
    if ((DAT_007ab148 & 1) == 0) {
      if (DAT_007ab148 < 2) {
        return 7;
      }
      pbVar7 = &DAT_007ab149;
      while (*pbVar7 == *pbVar8) {
        uVar6 = uVar6 - 1;
        pbVar8 = pbVar8 + 1;
        pbVar7 = pbVar7 + 1;
        if (uVar6 == 0) {
          return 7;
        }
      }
    }
    else {
      iVar4 = memcmp(DAT_007ab158,pbVar8,DAT_007ab150);
      if (iVar4 == 0) {
        return 7;
      }
    }
  }
  uVar6 = (ulong)(DAT_007ab100 >> 1);
  sVar2 = uVar6;
  if ((DAT_007ab100 & 1) != 0) {
    sVar2 = DAT_007ab108;
  }
  if (sVar2 == sVar1) {
    pbVar8 = *(byte **)(param_1 + 0x10);
    if ((bVar3 & 1) == 0) {
      pbVar8 = param_1 + 1;
    }
    if ((DAT_007ab100 & 1) == 0) {
      if (1 < DAT_007ab100) {
        pbVar7 = &DAT_007ab101;
        while (*pbVar7 == *pbVar8) {
          uVar6 = uVar6 - 1;
          pbVar8 = pbVar8 + 1;
          pbVar7 = pbVar7 + 1;
          if (uVar6 == 0) {
            return 3;
          }
        }
        goto LAB_00352810;
      }
    }
    else {
      iVar4 = memcmp(DAT_007ab110,pbVar8,DAT_007ab108);
      if (iVar4 != 0) goto LAB_00352810;
    }
    return 3;
  }
LAB_00352810:
  uVar6 = FUN_003528a0(&DAT_007ab130,param_1);
  if ((uVar6 & 1) != 0) {
    return 5;
  }
  uVar6 = FUN_003528a0(&DAT_007ab118,param_1);
  if ((uVar6 & 1) != 0) {
    return 4;
  }
  uVar6 = FUN_003528a0(&DAT_007ab0e8,param_1);
  uVar5 = 8;
  if ((uVar6 & 1) == 0) {
    uVar5 = 0;
  }
  return uVar5;
}


// ===== 003528a0  FUN_003528a0 =====

bool FUN_003528a0(byte *param_1,byte *param_2)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  byte *pbVar7;
  ulong uVar8;
  byte *__s2;
  
  bVar3 = *param_1;
  bVar4 = *param_2;
  uVar8 = (ulong)(bVar3 >> 1);
  sVar1 = uVar8;
  if ((bVar3 & 1) != 0) {
    sVar1 = *(size_t *)(param_1 + 8);
  }
  sVar2 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    sVar2 = *(size_t *)(param_2 + 8);
  }
  if (sVar1 == sVar2) {
    __s2 = *(byte **)(param_2 + 0x10);
    if ((bVar4 & 1) == 0) {
      __s2 = param_2 + 1;
    }
    if ((bVar3 & 1) == 0) {
      if (bVar3 < 2) {
        return true;
      }
      pbVar7 = param_1 + 1;
      do {
        uVar8 = uVar8 - 1;
        bVar5 = *pbVar7 == *__s2;
        if (*pbVar7 != *__s2) {
          return bVar5;
        }
        __s2 = __s2 + 1;
        pbVar7 = pbVar7 + 1;
      } while (uVar8 != 0);
      return bVar5;
    }
    iVar6 = memcmp(*(void **)(param_1 + 0x10),__s2,*(size_t *)(param_1 + 8));
    return iVar6 == 0;
  }
  return false;
}


// ===== 00352950  _INIT_16 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_16(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_FUN_007a13a0;
  DAT_007ab0a0 = 10;
  DAT_007ab0a1 = 0x2e302e30;
  DAT_007ab0a5 = 0x35;
  __cxa_atexit(PTR_FUN_007a13a0,&DAT_007ab0a0,&PTR_LOOP_0075ec90);
  _DAT_007ab0b9 = 0x2e302e30;
  DAT_007ab0b8 = 10;
  DAT_007ab0bd = 0x36;
  __cxa_atexit(puVar1,&DAT_007ab0b8,&PTR_LOOP_0075ec90);
  DAT_007ab0d0 = 0x14;
  DAT_007ab0d8._1_2_ = 0x3631;
  DAT_007ab0d8._3_1_ = 0;
  DAT_007ab0d1 = s_0_0_6_fp16_001e8a7d[0];
  DAT_007ab0d2 = s_0_0_6_fp16_001e8a7d[1];
  DAT_007ab0d1_1._1_1_ = s_0_0_6_fp16_001e8a7d[2];
  DAT_007ab0d1_1._2_1_ = s_0_0_6_fp16_001e8a7d[3];
  DAT_007ab0d1_1._3_1_ = s_0_0_6_fp16_001e8a7d[4];
  DAT_007ab0d1_1._4_1_ = s_0_0_6_fp16_001e8a7d[5];
  DAT_007ab0d1_1._5_1_ = s_0_0_6_fp16_001e8a7d[6];
  DAT_007ab0d8._0_1_ = s_0_0_6_fp16_001e8a7d[7];
  __cxa_atexit(puVar1,&DAT_007ab0d0,&PTR_LOOP_0075ec90);
  DAT_007ab0e9 = 0x2e302e30;
  DAT_007ab0e8 = 10;
  DAT_007ab0ed = 0x37;
  __cxa_atexit(puVar1,&DAT_007ab0e8,&PTR_LOOP_0075ec90);
  DAT_007ab108._1_2_ = 0x31;
  DAT_007ab100 = 0x12;
  DAT_007ab101 = s_PNC_0_0_1_001b76da[0];
  DAT_007ab102 = s_PNC_0_0_1_001b76da[1];
  DAT_007ab101_1._1_1_ = s_PNC_0_0_1_001b76da[2];
  DAT_007ab101_1._2_1_ = s_PNC_0_0_1_001b76da[3];
  DAT_007ab101_1._3_1_ = s_PNC_0_0_1_001b76da[4];
  DAT_007ab101_1._4_1_ = s_PNC_0_0_1_001b76da[5];
  DAT_007ab101_1._5_1_ = s_PNC_0_0_1_001b76da[6];
  DAT_007ab108._0_1_ = s_PNC_0_0_1_001b76da[7];
  __cxa_atexit(puVar1,&DAT_007ab100,&PTR_LOOP_0075ec90);
  DAT_007ab118 = 0x12;
  DAT_007ab121 = 0x30;
  DAT_007ab119._0_1_ = s_PNC_2_0_0_001e8a88[0];
  DAT_007ab119._1_1_ = s_PNC_2_0_0_001e8a88[1];
  DAT_007ab119._2_1_ = s_PNC_2_0_0_001e8a88[2];
  DAT_007ab119._3_1_ = s_PNC_2_0_0_001e8a88[3];
  DAT_007ab119._4_1_ = s_PNC_2_0_0_001e8a88[4];
  DAT_007ab119._5_1_ = s_PNC_2_0_0_001e8a88[5];
  DAT_007ab119._6_1_ = s_PNC_2_0_0_001e8a88[6];
  DAT_007ab119._7_1_ = s_PNC_2_0_0_001e8a88[7];
  __cxa_atexit(puVar1,&DAT_007ab118,&PTR_LOOP_0075ec90);
  DAT_007ab130 = 0x1c;
  DAT_007ab13f = 0;
  DAT_007ab131._0_1_ = s_PNC_0_0_1_fp16_001d3808[0];
  DAT_007ab131._1_1_ = s_PNC_0_0_1_fp16_001d3808[1];
  DAT_007ab131._2_1_ = s_PNC_0_0_1_fp16_001d3808[2];
  DAT_007ab131._3_1_ = s_PNC_0_0_1_fp16_001d3808[3];
  DAT_007ab131._4_1_ = s_PNC_0_0_1_fp16_001d3808[4];
  DAT_007ab131._5_1_ = s_PNC_0_0_1_fp16_001d3808[5];
  DAT_007ab131._6_1_ = s_PNC_0_0_1_fp16_001d3808[6];
  DAT_007ab131._7_1_ = s_PNC_0_0_1_fp16_001d3808[7];
  uRam00000000007ab139._0_1_ = s_PNC_0_0_1_fp16_001d3808[8];
  uRam00000000007ab139._1_1_ = s_PNC_0_0_1_fp16_001d3808[9];
  uRam00000000007ab139._2_1_ = s_PNC_0_0_1_fp16_001d3808[10];
  uRam00000000007ab139._3_1_ = s_PNC_0_0_1_fp16_001d3808[0xb];
  uRam00000000007ab139._4_1_ = s_PNC_0_0_1_fp16_001d3808[0xc];
  uRam00000000007ab139._5_1_ = s_PNC_0_0_1_fp16_001d3808[0xd];
  __cxa_atexit(puVar1,&DAT_007ab130,&PTR_LOOP_0075ec90);
  DAT_007ab148 = 0x12;
  DAT_007ab150._1_2_ = 0x31;
  DAT_007ab149 = s_VAD_0_0_1_001d3817[0];
  DAT_007ab14a = s_VAD_0_0_1_001d3817[1];
  DAT_007ab149_1._1_1_ = s_VAD_0_0_1_001d3817[2];
  DAT_007ab149_1._2_1_ = s_VAD_0_0_1_001d3817[3];
  DAT_007ab149_1._3_1_ = s_VAD_0_0_1_001d3817[4];
  DAT_007ab149_1._4_1_ = s_VAD_0_0_1_001d3817[5];
  DAT_007ab149_1._5_1_ = s_VAD_0_0_1_001d3817[6];
  DAT_007ab150._0_1_ = s_VAD_0_0_1_001d3817[7];
  __cxa_atexit(puVar1,&DAT_007ab148,&PTR_LOOP_0075ec90);
  DAT_007ab160 = 0x12;
  DAT_007ab161 = s_VAD_0_0_2_001f0dd0[0];
  DAT_007ab162 = s_VAD_0_0_2_001f0dd0[1];
  DAT_007ab161_1._1_1_ = s_VAD_0_0_2_001f0dd0[2];
  DAT_007ab161_1._2_1_ = s_VAD_0_0_2_001f0dd0[3];
  DAT_007ab161_1._3_1_ = s_VAD_0_0_2_001f0dd0[4];
  DAT_007ab161_1._4_1_ = s_VAD_0_0_2_001f0dd0[5];
  DAT_007ab161_1._5_1_ = s_VAD_0_0_2_001f0dd0[6];
  DAT_007ab168._0_1_ = s_VAD_0_0_2_001f0dd0[7];
  DAT_007ab168._1_2_ = 0x32;
  __cxa_atexit(puVar1,&DAT_007ab160,&PTR_LOOP_0075ec90);
  return;
}


// ===== 00352b10  FUN_00352b10 =====

void FUN_00352b10(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int param_4,
                 undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_4 < 6) {
    if (param_4 == 1) {
      FUN_00352ca4(&local_50,param_2,param_3,param_5);
    }
    else if (param_4 == 3) {
      FUN_00354438(&local_50,param_2,param_3,param_5);
    }
    else {
      if (param_4 != 4) {
LAB_00352bf4:
        uVar2 = FUN_00753a74(0x20);
                    /* try { // try from 00352c04 to 00352c13 has its CatchHandler @ 00352c78 */
        FUN_002fd2b0(&local_50,"GruExecutableNetworkFactory::create: Unsupported GRU network type");
                    /* try { // try from 00352c18 to 00352c53 has its CatchHandler @ 00352c54 */
        FUN_00374ee0(uVar2,&local_50);
        if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
          FUN_00753c5c(uVar2,PTR_PTR_007a1338,PTR_FUN_007a11f8);
        }
        goto LAB_00352ca0;
      }
      FUN_00354c14(&local_50,param_2,param_3,param_5);
    }
  }
  else if (param_4 == 6) {
    FUN_00353480(&local_50,param_2,param_3,param_5);
  }
  else if (param_4 == 7) {
    FUN_00353c5c(&local_50,param_2,param_3,param_5);
  }
  else {
    if (param_4 != 8) goto LAB_00352bf4;
    FUN_003553f0(&local_50,param_2,param_3,param_5);
  }
  param_1[1] = uStack_48;
  *param_1 = local_50;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
LAB_00352ca0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00352ca4  FUN_00352ca4 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00352ca4(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *local_e8;
  long *local_e0;
  long *local_d8;
  long *local_d0;
  long *local_c8;
  long *local_c0;
  long *local_b8;
  long *local_b0;
  long local_a8;
  long *local_a0;
  byte local_98;
  undefined7 uStack_97;
  char cStack_90;
  undefined7 uStack_8f;
  undefined4 uStack_88;
  uint uStack_84;
  byte local_78 [16];
  void *local_68;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  FUN_0034cc1c(local_78,param_2);
                    /* try { // try from 00352ce8 to 00352cf3 has its CatchHandler @ 0035344c */
  FUN_0034cc1c(&local_98,param_2);
                    /* try { // try from 00352cf4 to 00352d07 has its CatchHandler @ 0035347c */
  FUN_00715bcc(param_4);
  lVar5 = FUN_0034be54(param_4 + 0x28,&local_98);
  if (lVar5 == 0) {
    lVar9 = 0;
    FUN_00715bf8(param_4);
  }
  else {
    lVar9 = *(long *)(lVar5 + 0x30);
    param_2 = *(long *)(lVar5 + 0x38);
    if (param_2 != 0) {
      FUN_00755c20(1,param_2 + 0x10);
    }
    FUN_00715bf8(param_4);
  }
  if ((local_98 & 1) != 0) {
    free((void *)CONCAT44(uStack_84,uStack_88));
  }
  local_a8 = 0;
  local_a0 = (long *)0x0;
  if (lVar5 == 0) {
LAB_00352e08:
    local_b8 = (long *)0x0;
    local_b0 = (long *)0x0;
                    /* try { // try from 00352e0c to 00352e13 has its CatchHandler @ 00353424 */
    plVar10 = (long *)FUN_00759c3c(0x168);
    puVar3 = PTR_DAT_007a1510;
    plVar8 = plVar10 + 3;
    plVar10[1] = 0;
    plVar10[2] = 0;
    *plVar10 = (long)(puVar3 + 0x10);
                    /* try { // try from 00352e30 to 00352e3b has its CatchHandler @ 003533f8 */
    FUN_00359d84(plVar8,param_3);
    plVar6 = local_b0;
    local_b8 = plVar8;
    if (local_b0 == (long *)0x0) {
LAB_00352e84:
      local_b0 = plVar10;
      local_c8 = local_b8;
      local_c0 = local_b0;
      FUN_00755c20(1,local_b0 + 2);
    }
    else {
      plVar8 = local_b0 + 1;
      local_b0 = plVar10;
      lVar9 = FUN_00755c50(0xffffffffffffffff,plVar8);
      if (lVar9 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        FUN_0071245c(plVar6);
      }
      local_c8 = local_b8;
      local_c0 = local_b0;
      plVar10 = local_b0;
      if (local_b0 != (long *)0x0) goto LAB_00352e84;
    }
    local_d8 = (long *)0x0;
    local_d0 = (long *)0x0;
    if (((*PTR_DAT_007a1518 & 1) == 0) && (iVar4 = FUN_00739c1c(PTR_DAT_007a1518), iVar4 != 0)) {
      __cxa_atexit(PTR_FUN_007a1110,PTR_DAT_007a1520,&PTR_LOOP_0075ec90);
      FUN_00739d60(PTR_DAT_007a1518);
    }
                    /* try { // try from 00352ea4 to 00352eaf has its CatchHandler @ 003533c8 */
    FUN_00715bcc(PTR_DAT_007a1520);
    FUN_0034bc80(&local_98,param_4,local_78,&local_c8);
    plVar8 = (long *)CONCAT71(uStack_97,local_98);
    lVar9 = CONCAT71(uStack_8f,cStack_90);
    if (lVar9 != 0) {
      FUN_00755c20(1,lVar9 + 0x10);
    }
    bVar1 = local_c0 != (long *)0x0;
    local_c8 = plVar8;
    local_c0 = (long *)lVar9;
    if (bVar1) {
      FUN_0071245c();
    }
    if (CONCAT71(uStack_8f,cStack_90) != 0) {
      FUN_0071245c();
    }
    if (local_c0 == (long *)0x0) {
      local_d8 = (long *)0x0;
      plVar6 = (long *)0x0;
      plVar8 = local_d0;
    }
    else {
      plVar6 = (long *)FUN_007124b4();
      local_d8 = (long *)0x0;
      plVar8 = local_d0;
      if (plVar6 != (long *)0x0) {
        local_d8 = local_c8;
      }
    }
    local_d0 = plVar6;
    if ((plVar8 != (long *)0x0) && (lVar9 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1), lVar9 == 0)
       ) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      FUN_0071245c(plVar8);
    }
    if (local_d8 == (long *)0x0) {
      FUN_0034bd9c(param_4,local_78);
      local_e8 = local_b8;
      local_e0 = local_b0;
      if (local_b0 != (long *)0x0) {
        FUN_00755c20(1,local_b0 + 2);
      }
      FUN_0034bc80(&local_98,param_4,local_78,&local_e8);
      local_c8 = (long *)CONCAT71(uStack_97,local_98);
      lVar9 = CONCAT71(uStack_8f,cStack_90);
      if (lVar9 != 0) {
        FUN_00755c20(1,lVar9 + 0x10);
      }
      bVar1 = local_c0 != (long *)0x0;
      local_c0 = (long *)lVar9;
      if (bVar1) {
        FUN_0071245c();
      }
      if (CONCAT71(uStack_8f,cStack_90) != 0) {
        FUN_0071245c();
      }
      if (local_e0 != (long *)0x0) {
        FUN_0071245c();
      }
    }
    FUN_00715bf8(PTR_DAT_007a1520);
    if ((local_c0 == (long *)0x0) || (*(long *)((long)local_c0 + 8) == -1)) {
      local_98 = 0x26;
      uStack_8f = (undefined7)s_weakPtr_is_expired__001f5451._8_8_;
      uStack_88 = CONCAT31(0x2e6465,SUB81(s_weakPtr_is_expired__001f5451._8_8_,7));
      uStack_97 = (undefined7)s_weakPtr_is_expired__001f5451._0_8_;
      cStack_90 = SUB81(s_weakPtr_is_expired__001f5451._0_8_,7);
      uStack_84 = uStack_84 & 0xffffff00;
                    /* try { // try from 00353024 to 0035303f has its CatchHandler @ 0035334c */
      FUN_00372794(&local_98,
                   "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/inference-engine/src/exec_network_and_runtime_creator.hpp"
                   ,0x4d,"createExecNetworkAndRuntime");
      if ((local_98 & 1) != 0) {
        free((void *)CONCAT44(uStack_84,uStack_88));
      }
      if (local_c0 != (long *)0x0) goto LAB_00353058;
      plVar8 = (long *)0x0;
LAB_003530b0:
      plVar6 = local_b0;
      local_b8 = (long *)0x0;
      local_b0 = (long *)0x0;
      plVar10 = local_b0;
    }
    else {
LAB_00353058:
      plVar8 = (long *)FUN_007124b4();
      if ((plVar8 == (long *)0x0) || (local_c8 == (long *)0x0)) goto LAB_003530b0;
      plVar10 = (long *)FUN_0073a738(local_c8,PTR_PTR_007a1458,PTR_PTR_007a15f8,0);
      plVar6 = local_b0;
      if (plVar10 == (long *)0x0) {
        local_b0 = (long *)0x0;
        local_b8 = plVar10;
        plVar10 = local_b0;
      }
      else {
        FUN_00755c20(1,plVar8 + 1);
        local_b8 = plVar10;
        plVar10 = plVar8;
        plVar6 = local_b0;
      }
    }
    local_b0 = plVar10;
    if ((plVar6 != (long *)0x0) &&
       (lVar9 = FUN_00755c50(local_b0,0xffffffffffffffff,plVar6 + 1), lVar9 == 0)) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_0071245c(plVar6);
    }
    if ((plVar8 != (long *)0x0) && (lVar9 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1), lVar9 == 0)
       ) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      FUN_0071245c(plVar8);
    }
                    /* try { // try from 00353118 to 0035311f has its CatchHandler @ 003533c4 */
    plVar6 = (long *)FUN_00759c3c(0xa8);
    puVar3 = PTR_DAT_007a1528;
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = (long)(puVar3 + 0x10);
                    /* try { // try from 0035313c to 00353147 has its CatchHandler @ 0035339c */
    FUN_003561cc(plVar6 + 3,&local_b8);
    plVar8 = local_d0;
    *param_1 = (long)(plVar6 + 3);
    param_1[1] = (long)plVar6;
    if ((local_d0 != (long *)0x0) &&
       (lVar9 = FUN_00755c50(0xffffffffffffffff,local_d0 + 1), lVar9 == 0)) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      FUN_0071245c(plVar8);
    }
    if (local_c0 != (long *)0x0) {
      FUN_0071245c();
    }
    plVar8 = local_b0;
    if ((local_b0 == (long *)0x0) ||
       (lVar9 = FUN_00755c50(0xffffffffffffffff,local_b0 + 1), lVar9 != 0)) goto LAB_00353250;
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  else {
    if (param_2 == 0) {
      local_a8 = 0;
      local_a0 = (long *)0x0;
      goto LAB_00352e08;
    }
    plVar6 = (long *)FUN_007124b4(param_2);
    plVar8 = local_a0;
    local_a8 = 0;
    if (plVar6 != (long *)0x0) {
      local_a8 = lVar9;
    }
    if ((local_a0 != (long *)0x0) &&
       (plVar10 = local_a0 + 1, local_a0 = plVar6, lVar7 = FUN_00755c50(0xffffffffffffffff,plVar10),
       plVar6 = local_a0, lVar7 == 0)) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      FUN_0071245c(plVar8);
      plVar6 = local_a0;
    }
    local_a0 = plVar6;
    if (local_a8 == 0) goto LAB_00352e08;
    plVar8 = (long *)FUN_007124b4(param_2);
    if (plVar8 == (long *)0x0) {
      local_98 = 0;
      uStack_97 = 0;
      cStack_90 = '\0';
      uStack_8f = 0;
    }
    else {
      if ((lVar9 == 0) ||
         (lVar9 = FUN_0073a738(lVar9,PTR_PTR_007a1458,PTR_PTR_007a15f8,0), lVar9 == 0)) {
        local_98 = 0;
        uStack_97 = 0;
        cStack_90 = '\0';
        uStack_8f = 0;
        lVar9 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1);
      }
      else {
        local_98 = (byte)lVar9;
        uStack_97 = (undefined7)((ulong)lVar9 >> 8);
        cStack_90 = (char)plVar8;
        uStack_8f = (undefined7)((ulong)plVar8 >> 8);
        FUN_00755c20(1,plVar8 + 1);
        lVar9 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1);
      }
      if (lVar9 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        FUN_0071245c(plVar8);
      }
    }
                    /* try { // try from 003531ec to 003531f3 has its CatchHandler @ 00353334 */
    plVar6 = (long *)FUN_00759c3c(0xa8);
    puVar3 = PTR_DAT_007a1528;
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = (long)(puVar3 + 0x10);
                    /* try { // try from 00353210 to 0035321b has its CatchHandler @ 0035331c */
    FUN_003561cc(plVar6 + 3,&local_98);
    plVar8 = (long *)CONCAT71(uStack_8f,cStack_90);
    *param_1 = (long)(plVar6 + 3);
    param_1[1] = (long)plVar6;
    if ((plVar8 == (long *)0x0) || (lVar9 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1), lVar9 != 0)
       ) goto LAB_00353250;
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  FUN_0071245c(plVar8);
LAB_00353250:
  plVar8 = local_a0;
  if ((local_a0 != (long *)0x0) &&
     (lVar9 = FUN_00755c50(0xffffffffffffffff,local_a0 + 1), lVar9 == 0)) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    FUN_0071245c(plVar8);
  }
  if ((lVar5 != 0) && (param_2 != 0)) {
    FUN_0071245c(param_2);
  }
  if ((local_78[0] & 1) != 0) {
    free(local_68);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00353480  FUN_00353480 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00353480(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *local_e8;
  long *local_e0;
  long *local_d8;
  long *local_d0;
  long *local_c8;
  long *local_c0;
  long *local_b8;
  long *local_b0;
  long local_a8;
  long *local_a0;
  byte local_98;
  undefined7 uStack_97;
  char cStack_90;
  undefined7 uStack_8f;
  undefined4 uStack_88;
  uint uStack_84;
  byte local_78 [16];
  void *local_68;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  FUN_0034cc1c(local_78,param_2);
                    /* try { // try from 003534c4 to 003534cf has its CatchHandler @ 00353c28 */
  FUN_0034cc1c(&local_98,param_2);
                    /* try { // try from 003534d0 to 003534e3 has its CatchHandler @ 00353c58 */
  FUN_00715bcc(param_4);
  lVar5 = FUN_0034be54(param_4 + 0x28,&local_98);
  if (lVar5 == 0) {
    lVar9 = 0;
    FUN_00715bf8(param_4);
  }
  else {
    lVar9 = *(long *)(lVar5 + 0x30);
    param_2 = *(long *)(lVar5 + 0x38);
    if (param_2 != 0) {
      FUN_00755c20(1,param_2 + 0x10);
    }
    FUN_00715bf8(param_4);
  }
  if ((local_98 & 1) != 0) {
    free((void *)CONCAT44(uStack_84,uStack_88));
  }
  local_a8 = 0;
  local_a0 = (long *)0x0;
  if (lVar5 == 0) {
LAB_003535e4:
    local_b8 = (long *)0x0;
    local_b0 = (long *)0x0;
                    /* try { // try from 003535e8 to 003535ef has its CatchHandler @ 00353c00 */
    plVar10 = (long *)FUN_00759c3c(0x158);
    puVar3 = PTR_DAT_007a1530;
    plVar8 = plVar10 + 3;
    plVar10[1] = 0;
    plVar10[2] = 0;
    *plVar10 = (long)(puVar3 + 0x10);
                    /* try { // try from 0035360c to 00353617 has its CatchHandler @ 00353bd4 */
    FUN_0035b350(plVar8,param_3);
    plVar6 = local_b0;
    local_b8 = plVar8;
    if (local_b0 == (long *)0x0) {
LAB_00353660:
      local_b0 = plVar10;
      local_c8 = local_b8;
      local_c0 = local_b0;
      FUN_00755c20(1,local_b0 + 2);
    }
    else {
      plVar8 = local_b0 + 1;
      local_b0 = plVar10;
      lVar9 = FUN_00755c50(0xffffffffffffffff,plVar8);
      if (lVar9 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        FUN_0071245c(plVar6);
      }
      local_c8 = local_b8;
      local_c0 = local_b0;
      plVar10 = local_b0;
      if (local_b0 != (long *)0x0) goto LAB_00353660;
    }
    local_d8 = (long *)0x0;
    local_d0 = (long *)0x0;
    if (((*PTR_DAT_007a1538 & 1) == 0) && (iVar4 = FUN_00739c1c(PTR_DAT_007a1538), iVar4 != 0)) {
      __cxa_atexit(PTR_FUN_007a1110,PTR_DAT_007a1540,&PTR_LOOP_0075ec90);
      FUN_00739d60(PTR_DAT_007a1538);
    }
                    /* try { // try from 00353680 to 0035368b has its CatchHandler @ 00353ba4 */
    FUN_00715bcc(PTR_DAT_007a1540);
    FUN_0034bc80(&local_98,param_4,local_78,&local_c8);
    plVar8 = (long *)CONCAT71(uStack_97,local_98);
    lVar9 = CONCAT71(uStack_8f,cStack_90);
    if (lVar9 != 0) {
      FUN_00755c20(1,lVar9 + 0x10);
    }
    bVar1 = local_c0 != (long *)0x0;
    local_c8 = plVar8;
    local_c0 = (long *)lVar9;
    if (bVar1) {
      FUN_0071245c();
    }
    if (CONCAT71(uStack_8f,cStack_90) != 0) {
      FUN_0071245c();
    }
    if (local_c0 == (long *)0x0) {
      local_d8 = (long *)0x0;
      plVar6 = (long *)0x0;
      plVar8 = local_d0;
    }
    else {
      plVar6 = (long *)FUN_007124b4();
      local_d8 = (long *)0x0;
      plVar8 = local_d0;
      if (plVar6 != (long *)0x0) {
        local_d8 = local_c8;
      }
    }
    local_d0 = plVar6;
    if ((plVar8 != (long *)0x0) && (lVar9 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1), lVar9 == 0)
       ) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      FUN_0071245c(plVar8);
    }
    if (local_d8 == (long *)0x0) {
      FUN_0034bd9c(param_4,local_78);
      local_e8 = local_b8;
      local_e0 = local_b0;
      if (local_b0 != (long *)0x0) {
        FUN_00755c20(1,local_b0 + 2);
      }
      FUN_0034bc80(&local_98,param_4,local_78,&local_e8);
      local_c8 = (long *)CONCAT71(uStack_97,local_98);
      lVar9 = CONCAT71(uStack_8f,cStack_90);
      if (lVar9 != 0) {
        FUN_00755c20(1,lVar9 + 0x10);
      }
      bVar1 = local_c0 != (long *)0x0;
      local_c0 = (long *)lVar9;
      if (bVar1) {
        FUN_0071245c();
      }
      if (CONCAT71(uStack_8f,cStack_90) != 0) {
        FUN_0071245c();
      }
      if (local_e0 != (long *)0x0) {
        FUN_0071245c();
      }
    }
    FUN_00715bf8(PTR_DAT_007a1540);
    if ((local_c0 == (long *)0x0) || (*(long *)((long)local_c0 + 8) == -1)) {
      local_98 = 0x26;
      uStack_8f = (undefined7)s_weakPtr_is_expired__001f5451._8_8_;
      uStack_88 = CONCAT31(0x2e6465,SUB81(s_weakPtr_is_expired__001f5451._8_8_,7));
      uStack_97 = (undefined7)s_weakPtr_is_expired__001f5451._0_8_;
      cStack_90 = SUB81(s_weakPtr_is_expired__001f5451._0_8_,7);
      uStack_84 = uStack_84 & 0xffffff00;
                    /* try { // try from 00353800 to 0035381b has its CatchHandler @ 00353b28 */
      FUN_00372794(&local_98,
                   "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/inference-engine/src/exec_network_and_runtime_creator.hpp"
                   ,0x4d,"createExecNetworkAndRuntime");
      if ((local_98 & 1) != 0) {
        free((void *)CONCAT44(uStack_84,uStack_88));
      }
      if (local_c0 != (long *)0x0) goto LAB_00353834;
      plVar8 = (long *)0x0;
LAB_0035388c:
      plVar6 = local_b0;
      local_b8 = (long *)0x0;
      local_b0 = (long *)0x0;
      plVar10 = local_b0;
    }
    else {
LAB_00353834:
      plVar8 = (long *)FUN_007124b4();
      if ((plVar8 == (long *)0x0) || (local_c8 == (long *)0x0)) goto LAB_0035388c;
      plVar10 = (long *)FUN_0073a738(local_c8,PTR_PTR_007a1458,PTR_PTR_007a1600,0);
      plVar6 = local_b0;
      if (plVar10 == (long *)0x0) {
        local_b0 = (long *)0x0;
        local_b8 = plVar10;
        plVar10 = local_b0;
      }
      else {
        FUN_00755c20(1,plVar8 + 1);
        local_b8 = plVar10;
        plVar10 = plVar8;
        plVar6 = local_b0;
      }
    }
    local_b0 = plVar10;
    if ((plVar6 != (long *)0x0) &&
       (lVar9 = FUN_00755c50(local_b0,0xffffffffffffffff,plVar6 + 1), lVar9 == 0)) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_0071245c(plVar6);
    }
    if ((plVar8 != (long *)0x0) && (lVar9 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1), lVar9 == 0)
       ) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      FUN_0071245c(plVar8);
    }
                    /* try { // try from 003538f4 to 003538fb has its CatchHandler @ 00353ba0 */
    plVar6 = (long *)FUN_00759c3c(0xa8);
    puVar3 = PTR_DAT_007a1548;
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = (long)(puVar3 + 0x10);
                    /* try { // try from 00353918 to 00353923 has its CatchHandler @ 00353b78 */
    FUN_00357800(plVar6 + 3,&local_b8);
    plVar8 = local_d0;
    *param_1 = (long)(plVar6 + 3);
    param_1[1] = (long)plVar6;
    if ((local_d0 != (long *)0x0) &&
       (lVar9 = FUN_00755c50(0xffffffffffffffff,local_d0 + 1), lVar9 == 0)) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      FUN_0071245c(plVar8);
    }
    if (local_c0 != (long *)0x0) {
      FUN_0071245c();
    }
    plVar8 = local_b0;
    if ((local_b0 == (long *)0x0) ||
       (lVar9 = FUN_00755c50(0xffffffffffffffff,local_b0 + 1), lVar9 != 0)) goto LAB_00353a2c;
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  else {
    if (param_2 == 0) {
      local_a8 = 0;
      local_a0 = (long *)0x0;
      goto LAB_003535e4;
    }
    plVar6 = (long *)FUN_007124b4(param_2);
    plVar8 = local_a0;
    local_a8 = 0;
    if (plVar6 != (long *)0x0) {
      local_a8 = lVar9;
    }
    if ((local_a0 != (long *)0x0) &&
       (plVar10 = local_a0 + 1, local_a0 = plVar6, lVar7 = FUN_00755c50(0xffffffffffffffff,plVar10),
       plVar6 = local_a0, lVar7 == 0)) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      FUN_0071245c(plVar8);
      plVar6 = local_a0;
    }
    local_a0 = plVar6;
    if (local_a8 == 0) goto LAB_003535e4;
    plVar8 = (long *)FUN_007124b4(param_2);
    if (plVar8 == (long *)0x0) {
      local_98 = 0;
      uStack_97 = 0;
      cStack_90 = '\0';
      uStack_8f = 0;
    }
    else {
      if ((lVar9 == 0) ||
         (lVar9 = FUN_0073a738(lVar9,PTR_PTR_007a1458,PTR_PTR_007a1600,0), lVar9 == 0)) {
        local_98 = 0;
        uStack_97 = 0;
        cStack_90 = '\0';
        uStack_8f = 0;
        lVar9 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1);
      }
      else {
        local_98 = (byte)lVar9;
        uStack_97 = (undefined7)((ulong)lVar9 >> 8);
        cStack_90 = (char)plVar8;
        uStack_8f = (undefined7)((ulong)plVar8 >> 8);
        FUN_00755c20(1,plVar8 + 1);
        lVar9 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1);
      }
      if (lVar9 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        FUN_0071245c(plVar8);
      }
    }
                    /* try { // try from 003539c8 to 003539cf has its CatchHandler @ 00353b10 */
    plVar6 = (long *)FUN_00759c3c(0xa8);
    puVar3 = PTR_DAT_007a1548;
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = (long)(puVar3 + 0x10);
                    /* try { // try from 003539ec to 003539f7 has its CatchHandler @ 00353af8 */
    FUN_00357800(plVar6 + 3,&local_98);
    plVar8 = (long *)CONCAT71(uStack_8f,cStack_90);
    *param_1 = (long)(plVar6 + 3);
    param_1[1] = (long)plVar6;
    if ((plVar8 == (long *)0x0) || (lVar9 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1), lVar9 != 0)
       ) goto LAB_00353a2c;
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  FUN_0071245c(plVar8);
LAB_00353a2c:
  plVar8 = local_a0;
  if ((local_a0 != (long *)0x0) &&
     (lVar9 = FUN_00755c50(0xffffffffffffffff,local_a0 + 1), lVar9 == 0)) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    FUN_0071245c(plVar8);
  }
  if ((lVar5 != 0) && (param_2 != 0)) {
    FUN_0071245c(param_2);
  }
  if ((local_78[0] & 1) != 0) {
    free(local_68);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00353c5c  FUN_00353c5c =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00353c5c(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *local_e8;
  long *local_e0;
  long *local_d8;
  long *local_d0;
  long *local_c8;
  long *local_c0;
  long *local_b8;
  long *local_b0;
  long local_a8;
  long *local_a0;
  byte local_98;
  undefined7 uStack_97;
  char cStack_90;
  undefined7 uStack_8f;
  undefined4 uStack_88;
  uint uStack_84;
  byte local_78 [16];
  void *local_68;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  FUN_0034cc1c(local_78,param_2);
                    /* try { // try from 00353ca0 to 00353cab has its CatchHandler @ 00354404 */
  FUN_0034cc1c(&local_98,param_2);
                    /* try { // try from 00353cac to 00353cbf has its CatchHandler @ 00354434 */
  FUN_00715bcc(param_4);
  lVar5 = FUN_0034be54(param_4 + 0x28,&local_98);
  if (lVar5 == 0) {
    lVar9 = 0;
    FUN_00715bf8(param_4);
  }
  else {
    lVar9 = *(long *)(lVar5 + 0x30);
    param_2 = *(long *)(lVar5 + 0x38);
    if (param_2 != 0) {
      FUN_00755c20(1,param_2 + 0x10);
    }
    FUN_00715bf8(param_4);
  }
  if ((local_98 & 1) != 0) {
    free((void *)CONCAT44(uStack_84,uStack_88));
  }
  local_a8 = 0;
  local_a0 = (long *)0x0;
  if (lVar5 == 0) {
LAB_00353dc0:
    local_b8 = (long *)0x0;
    local_b0 = (long *)0x0;
                    /* try { // try from 00353dc4 to 00353dcb has its CatchHandler @ 003543dc */
    plVar10 = (long *)FUN_00759c3c(0x128);
    puVar3 = PTR_DAT_007a1550;
    plVar8 = plVar10 + 3;
    plVar10[1] = 0;
    plVar10[2] = 0;
    *plVar10 = (long)(puVar3 + 0x10);
                    /* try { // try from 00353de8 to 00353df3 has its CatchHandler @ 003543b0 */
    FUN_0035bed8(plVar8,param_3);
    plVar6 = local_b0;
    local_b8 = plVar8;
    if (local_b0 == (long *)0x0) {
LAB_00353e3c:
      local_b0 = plVar10;
      local_c8 = local_b8;
      local_c0 = local_b0;
      FUN_00755c20(1,local_b0 + 2);
    }
    else {
      plVar8 = local_b0 + 1;
      local_b0 = plVar10;
      lVar9 = FUN_00755c50(0xffffffffffffffff,plVar8);
      if (lVar9 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        FUN_0071245c(plVar6);
      }
      local_c8 = local_b8;
      local_c0 = local_b0;
      plVar10 = local_b0;
      if (local_b0 != (long *)0x0) goto LAB_00353e3c;
    }
    local_d8 = (long *)0x0;
    local_d0 = (long *)0x0;
    if (((*PTR_DAT_007a1558 & 1) == 0) && (iVar4 = FUN_00739c1c(PTR_DAT_007a1558), iVar4 != 0)) {
      __cxa_atexit(PTR_FUN_007a1110,PTR_DAT_007a1560,&PTR_LOOP_0075ec90);
      FUN_00739d60(PTR_DAT_007a1558);
    }
                    /* try { // try from 00353e5c to 00353e67 has its CatchHandler @ 00354380 */
    FUN_00715bcc(PTR_DAT_007a1560);
    FUN_0034bc80(&local_98,param_4,local_78,&local_c8);
    plVar8 = (long *)CONCAT71(uStack_97,local_98);
    lVar9 = CONCAT71(uStack_8f,cStack_90);
    if (lVar9 != 0) {
      FUN_00755c20(1,lVar9 + 0x10);
    }
    bVar1 = local_c0 != (long *)0x0;
    local_c8 = plVar8;
    local_c0 = (long *)lVar9;
    if (bVar1) {
      FUN_0071245c();
    }
    if (CONCAT71(uStack_8f,cStack_90) != 0) {
      FUN_0071245c();
    }
    if (local_c0 == (long *)0x0) {
      local_d8 = (long *)0x0;
      plVar6 = (long *)0x0;
      plVar8 = local_d0;
    }
    else {
      plVar6 = (long *)FUN_007124b4();
      local_d8 = (long *)0x0;
      plVar8 = local_d0;
      if (plVar6 != (long *)0x0) {
        local_d8 = local_c8;
      }
    }
    local_d0 = plVar6;
    if ((plVar8 != (long *)0x0) && (lVar9 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1), lVar9 == 0)
       ) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      FUN_0071245c(plVar8);
    }
    if (local_d8 == (long *)0x0) {
      FUN_0034bd9c(param_4,local_78);
      local_e8 = local_b8;
      local_e0 = local_b0;
      if (local_b0 != (long *)0x0) {
        FUN_00755c20(1,local_b0 + 2);
      }
      FUN_0034bc80(&local_98,param_4,local_78,&local_e8);
      local_c8 = (long *)CONCAT71(uStack_97,local_98);
      lVar9 = CONCAT71(uStack_8f,cStack_90);
      if (lVar9 != 0) {
        FUN_00755c20(1,lVar9 + 0x10);
      }
      bVar1 = local_c0 != (long *)0x0;
      local_c0 = (long *)lVar9;
      if (bVar1) {
        FUN_0071245c();
      }
      if (CONCAT71(uStack_8f,cStack_90) != 0) {
        FUN_0071245c();
      }
      if (local_e0 != (long *)0x0) {
        FUN_0071245c();
      }
    }
    FUN_00715bf8(PTR_DAT_007a1560);
    if ((local_c0 == (long *)0x0) || (*(long *)((long)local_c0 + 8) == -1)) {
      local_98 = 0x26;
      uStack_8f = (undefined7)s_weakPtr_is_expired__001f5451._8_8_;
      uStack_88 = CONCAT31(0x2e6465,SUB81(s_weakPtr_is_expired__001f5451._8_8_,7));
      uStack_97 = (undefined7)s_weakPtr_is_expired__001f5451._0_8_;
      cStack_90 = SUB81(s_weakPtr_is_expired__001f5451._0_8_,7);
      uStack_84 = uStack_84 & 0xffffff00;
                    /* try { // try from 00353fdc to 00353ff7 has its CatchHandler @ 00354304 */
      FUN_00372794(&local_98,
                   "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/inference-engine/src/exec_network_and_runtime_creator.hpp"
                   ,0x4d,"createExecNetworkAndRuntime");
      if ((local_98 & 1) != 0) {
        free((void *)CONCAT44(uStack_84,uStack_88));
      }
      if (local_c0 != (long *)0x0) goto LAB_00354010;
      plVar8 = (long *)0x0;
LAB_00354068:
      plVar6 = local_b0;
      local_b8 = (long *)0x0;
      local_b0 = (long *)0x0;
      plVar10 = local_b0;
    }
    else {
LAB_00354010:
      plVar8 = (long *)FUN_007124b4();
      if ((plVar8 == (long *)0x0) || (local_c8 == (long *)0x0)) goto LAB_00354068;
      plVar10 = (long *)FUN_0073a738(local_c8,PTR_PTR_007a1458,PTR_PTR_007a1608,0);
      plVar6 = local_b0;
      if (plVar10 == (long *)0x0) {
        local_b0 = (long *)0x0;
        local_b8 = plVar10;
        plVar10 = local_b0;
      }
      else {
        FUN_00755c20(1,plVar8 + 1);
        local_b8 = plVar10;
        plVar10 = plVar8;
        plVar6 = local_b0;
      }
    }
    local_b0 = plVar10;
    if ((plVar6 != (long *)0x0) &&
       (lVar9 = FUN_00755c50(local_b0,0xffffffffffffffff,plVar6 + 1), lVar9 == 0)) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_0071245c(plVar6);
    }
    if ((plVar8 != (long *)0x0) && (lVar9 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1), lVar9 == 0)
       ) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      FUN_0071245c(plVar8);
    }
                    /* try { // try from 003540d0 to 003540d7 has its CatchHandler @ 0035437c */
    plVar6 = (long *)FUN_00759c3c(0xa8);
    puVar3 = PTR_DAT_007a1568;
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = (long)(puVar3 + 0x10);
                    /* try { // try from 003540f4 to 003540ff has its CatchHandler @ 00354354 */
    FUN_00357c5c(plVar6 + 3,&local_b8);
    plVar8 = local_d0;
    *param_1 = (long)(plVar6 + 3);
    param_1[1] = (long)plVar6;
    if ((local_d0 != (long *)0x0) &&
       (lVar9 = FUN_00755c50(0xffffffffffffffff,local_d0 + 1), lVar9 == 0)) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      FUN_0071245c(plVar8);
    }
    if (local_c0 != (long *)0x0) {
      FUN_0071245c();
    }
    plVar8 = local_b0;
    if ((local_b0 == (long *)0x0) ||
       (lVar9 = FUN_00755c50(0xffffffffffffffff,local_b0 + 1), lVar9 != 0)) goto LAB_00354208;
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  else {
    if (param_2 == 0) {
      local_a8 = 0;
      local_a0 = (long *)0x0;
      goto LAB_00353dc0;
    }
    plVar6 = (long *)FUN_007124b4(param_2);
    plVar8 = local_a0;
    local_a8 = 0;
    if (plVar6 != (long *)0x0) {
      local_a8 = lVar9;
    }
    if ((local_a0 != (long *)0x0) &&
       (plVar10 = local_a0 + 1, local_a0 = plVar6, lVar7 = FUN_00755c50(0xffffffffffffffff,plVar10),
       plVar6 = local_a0, lVar7 == 0)) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      FUN_0071245c(plVar8);
      plVar6 = local_a0;
    }
    local_a0 = plVar6;
    if (local_a8 == 0) goto LAB_00353dc0;
    plVar8 = (long *)FUN_007124b4(param_2);
    if (plVar8 == (long *)0x0) {
      local_98 = 0;
      uStack_97 = 0;
      cStack_90 = '\0';
      uStack_8f = 0;
    }
    else {
      if ((lVar9 == 0) ||
         (lVar9 = FUN_0073a738(lVar9,PTR_PTR_007a1458,PTR_PTR_007a1608,0), lVar9 == 0)) {
        local_98 = 0;
        uStack_97 = 0;
        cStack_90 = '\0';
        uStack_8f = 0;
        lVar9 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1);
      }
      else {
        local_98 = (byte)lVar9;
        uStack_97 = (undefined7)((ulong)lVar9 >> 8);
        cStack_90 = (char)plVar8;
        uStack_8f = (undefined7)((ulong)plVar8 >> 8);
        FUN_00755c20(1,plVar8 + 1);
        lVar9 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1);
      }
      if (lVar9 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        FUN_0071245c(plVar8);
      }
    }
                    /* try { // try from 003541a4 to 003541ab has its CatchHandler @ 003542ec */
    plVar6 = (long *)FUN_00759c3c(0xa8);
    puVar3 = PTR_DAT_007a1568;
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = (long)(puVar3 + 0x10);
                    /* try { // try from 003541c8 to 003541d3 has its CatchHandler @ 003542d4 */
    FUN_00357c5c(plVar6 + 3,&local_98);
    plVar8 = (long *)CONCAT71(uStack_8f,cStack_90);
    *param_1 = (long)(plVar6 + 3);
    param_1[1] = (long)plVar6;
    if ((plVar8 == (long *)0x0) || (lVar9 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1), lVar9 != 0)
       ) goto LAB_00354208;
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  FUN_0071245c(plVar8);
LAB_00354208:
  plVar8 = local_a0;
  if ((local_a0 != (long *)0x0) &&
     (lVar9 = FUN_00755c50(0xffffffffffffffff,local_a0 + 1), lVar9 == 0)) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    FUN_0071245c(plVar8);
  }
  if ((lVar5 != 0) && (param_2 != 0)) {
    FUN_0071245c(param_2);
  }
  if ((local_78[0] & 1) != 0) {
    free(local_68);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00354438  FUN_00354438 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00354438(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *local_e8;
  long *local_e0;
  long *local_d8;
  long *local_d0;
  long *local_c8;
  long *local_c0;
  long *local_b8;
  long *local_b0;
  long local_a8;
  long *local_a0;
  byte local_98;
  undefined7 uStack_97;
  char cStack_90;
  undefined7 uStack_8f;
  undefined4 uStack_88;
  uint uStack_84;
  byte local_78 [16];
  void *local_68;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  FUN_0034cc1c(local_78,param_2);
                    /* try { // try from 0035447c to 00354487 has its CatchHandler @ 00354be0 */
  FUN_0034cc1c(&local_98,param_2);
                    /* try { // try from 00354488 to 0035449b has its CatchHandler @ 00354c10 */
  FUN_00715bcc(param_4);
  lVar5 = FUN_0034be54(param_4 + 0x28,&local_98);
  if (lVar5 == 0) {
    lVar9 = 0;
    FUN_00715bf8(param_4);
  }
  else {
    lVar9 = *(long *)(lVar5 + 0x30);
    param_2 = *(long *)(lVar5 + 0x38);
    if (param_2 != 0) {
      FUN_00755c20(1,param_2 + 0x10);
    }
    FUN_00715bf8(param_4);
  }
  if ((local_98 & 1) != 0) {
    free((void *)CONCAT44(uStack_84,uStack_88));
  }
  local_a8 = 0;
  local_a0 = (long *)0x0;
  if (lVar5 == 0) {
LAB_0035459c:
    local_b8 = (long *)0x0;
    local_b0 = (long *)0x0;
                    /* try { // try from 003545a0 to 003545a7 has its CatchHandler @ 00354bb8 */
    plVar10 = (long *)FUN_00759c3c(0xa8);
    puVar3 = PTR_DAT_007a1578;
    plVar8 = plVar10 + 3;
    plVar10[1] = 0;
    plVar10[2] = 0;
    *plVar10 = (long)(puVar3 + 0x10);
                    /* try { // try from 003545c4 to 003545cf has its CatchHandler @ 00354b8c */
    FUN_0035dcd8(plVar8,param_3);
    plVar6 = local_b0;
    local_b8 = plVar8;
    if (local_b0 == (long *)0x0) {
LAB_00354618:
      local_b0 = plVar10;
      local_c8 = local_b8;
      local_c0 = local_b0;
      FUN_00755c20(1,local_b0 + 2);
    }
    else {
      plVar8 = local_b0 + 1;
      local_b0 = plVar10;
      lVar9 = FUN_00755c50(0xffffffffffffffff,plVar8);
      if (lVar9 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        FUN_0071245c(plVar6);
      }
      local_c8 = local_b8;
      local_c0 = local_b0;
      plVar10 = local_b0;
      if (local_b0 != (long *)0x0) goto LAB_00354618;
    }
    local_d8 = (long *)0x0;
    local_d0 = (long *)0x0;
    if (((*PTR_DAT_007a1580 & 1) == 0) && (iVar4 = FUN_00739c1c(PTR_DAT_007a1580), iVar4 != 0)) {
      __cxa_atexit(PTR_FUN_007a1110,PTR_DAT_007a1588,&PTR_LOOP_0075ec90);
      FUN_00739d60(PTR_DAT_007a1580);
    }
                    /* try { // try from 00354638 to 00354643 has its CatchHandler @ 00354b5c */
    FUN_00715bcc(PTR_DAT_007a1588);
    FUN_0034bc80(&local_98,param_4,local_78,&local_c8);
    plVar8 = (long *)CONCAT71(uStack_97,local_98);
    lVar9 = CONCAT71(uStack_8f,cStack_90);
    if (lVar9 != 0) {
      FUN_00755c20(1,lVar9 + 0x10);
    }
    bVar1 = local_c0 != (long *)0x0;
    local_c8 = plVar8;
    local_c0 = (long *)lVar9;
    if (bVar1) {
      FUN_0071245c();
    }
    if (CONCAT71(uStack_8f,cStack_90) != 0) {
      FUN_0071245c();
    }
    if (local_c0 == (long *)0x0) {
      local_d8 = (long *)0x0;
      plVar6 = (long *)0x0;
      plVar8 = local_d0;
    }
    else {
      plVar6 = (long *)FUN_007124b4();
      local_d8 = (long *)0x0;
      plVar8 = local_d0;
      if (plVar6 != (long *)0x0) {
        local_d8 = local_c8;
      }
    }
    local_d0 = plVar6;
    if ((plVar8 != (long *)0x0) && (lVar9 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1), lVar9 == 0)
       ) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      FUN_0071245c(plVar8);
    }
    if (local_d8 == (long *)0x0) {
      FUN_0034bd9c(param_4,local_78);
      local_e8 = local_b8;
      local_e0 = local_b0;
      if (local_b0 != (long *)0x0) {
        FUN_00755c20(1,local_b0 + 2);
      }
      FUN_0034bc80(&local_98,param_4,local_78,&local_e8);
      local_c8 = (long *)CONCAT71(uStack_97,local_98);
      lVar9 = CONCAT71(uStack_8f,cStack_90);
      if (lVar9 != 0) {
        FUN_00755c20(1,lVar9 + 0x10);
      }
      bVar1 = local_c0 != (long *)0x0;
      local_c0 = (long *)lVar9;
      if (bVar1) {
        FUN_0071245c();
      }
      if (CONCAT71(uStack_8f,cStack_90) != 0) {
        FUN_0071245c();
      }
      if (local_e0 != (long *)0x0) {
        FUN_0071245c();
      }
    }
    FUN_00715bf8(PTR_DAT_007a1588);
    if ((local_c0 == (long *)0x0) || (*(long *)((long)local_c0 + 8) == -1)) {
      local_98 = 0x26;
      uStack_8f = (undefined7)s_weakPtr_is_expired__001f5451._8_8_;
      uStack_88 = CONCAT31(0x2e6465,SUB81(s_weakPtr_is_expired__001f5451._8_8_,7));
      uStack_97 = (undefined7)s_weakPtr_is_expired__001f5451._0_8_;
      cStack_90 = SUB81(s_weakPtr_is_expired__001f5451._0_8_,7);
      uStack_84 = uStack_84 & 0xffffff00;
                    /* try { // try from 003547b8 to 003547d3 has its CatchHandler @ 00354ae0 */
      FUN_00372794(&local_98,
                   "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/inference-engine/src/exec_network_and_runtime_creator.hpp"
                   ,0x4d,"createExecNetworkAndRuntime");
      if ((local_98 & 1) != 0) {
        free((void *)CONCAT44(uStack_84,uStack_88));
      }
      if (local_c0 != (long *)0x0) goto LAB_003547ec;
      plVar8 = (long *)0x0;
LAB_00354844:
      plVar6 = local_b0;
      local_b8 = (long *)0x0;
      local_b0 = (long *)0x0;
      plVar10 = local_b0;
    }
    else {
LAB_003547ec:
      plVar8 = (long *)FUN_007124b4();
      if ((plVar8 == (long *)0x0) || (local_c8 == (long *)0x0)) goto LAB_00354844;
      plVar10 = (long *)FUN_0073a738(local_c8,PTR_PTR_007a1458,PTR_PTR_007a1570,0);
      plVar6 = local_b0;
      if (plVar10 == (long *)0x0) {
        local_b0 = (long *)0x0;
        local_b8 = plVar10;
        plVar10 = local_b0;
      }
      else {
        FUN_00755c20(1,plVar8 + 1);
        local_b8 = plVar10;
        plVar10 = plVar8;
        plVar6 = local_b0;
      }
    }
    local_b0 = plVar10;
    if ((plVar6 != (long *)0x0) &&
       (lVar9 = FUN_00755c50(local_b0,0xffffffffffffffff,plVar6 + 1), lVar9 == 0)) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_0071245c(plVar6);
    }
    if ((plVar8 != (long *)0x0) && (lVar9 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1), lVar9 == 0)
       ) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      FUN_0071245c(plVar8);
    }
                    /* try { // try from 003548ac to 003548b3 has its CatchHandler @ 00354b58 */
    plVar6 = (long *)FUN_00759c3c(0xf0);
    puVar3 = PTR_DAT_007a1590;
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = (long)(puVar3 + 0x10);
                    /* try { // try from 003548d0 to 003548db has its CatchHandler @ 00354b30 */
    FUN_003586c0(plVar6 + 3,&local_b8);
    plVar8 = local_d0;
    *param_1 = (long)(plVar6 + 3);
    param_1[1] = (long)plVar6;
    if ((local_d0 != (long *)0x0) &&
       (lVar9 = FUN_00755c50(0xffffffffffffffff,local_d0 + 1), lVar9 == 0)) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      FUN_0071245c(plVar8);
    }
    if (local_c0 != (long *)0x0) {
      FUN_0071245c();
    }
    plVar8 = local_b0;
    if ((local_b0 == (long *)0x0) ||
       (lVar9 = FUN_00755c50(0xffffffffffffffff,local_b0 + 1), lVar9 != 0)) goto LAB_003549e4;
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  else {
    if (param_2 == 0) {
      local_a8 = 0;
      local_a0 = (long *)0x0;
      goto LAB_0035459c;
    }
    plVar6 = (long *)FUN_007124b4(param_2);
    plVar8 = local_a0;
    local_a8 = 0;
    if (plVar6 != (long *)0x0) {
      local_a8 = lVar9;
    }
    if ((local_a0 != (long *)0x0) &&
       (plVar10 = local_a0 + 1, local_a0 = plVar6, lVar7 = FUN_00755c50(0xffffffffffffffff,plVar10),
       plVar6 = local_a0, lVar7 == 0)) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      FUN_0071245c(plVar8);
      plVar6 = local_a0;
    }
    local_a0 = plVar6;
    if (local_a8 == 0) goto LAB_0035459c;
    plVar8 = (long *)FUN_007124b4(param_2);
    if (plVar8 == (long *)0x0) {
      local_98 = 0;
      uStack_97 = 0;
      cStack_90 = '\0';
      uStack_8f = 0;
    }
    else {
      if ((lVar9 == 0) ||
         (lVar9 = FUN_0073a738(lVar9,PTR_PTR_007a1458,PTR_PTR_007a1570,0), lVar9 == 0)) {
        local_98 = 0;
        uStack_97 = 0;
        cStack_90 = '\0';
        uStack_8f = 0;
        lVar9 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1);
      }
      else {
        local_98 = (byte)lVar9;
        uStack_97 = (undefined7)((ulong)lVar9 >> 8);
        cStack_90 = (char)plVar8;
        uStack_8f = (undefined7)((ulong)plVar8 >> 8);
        FUN_00755c20(1,plVar8 + 1);
        lVar9 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1);
      }
      if (lVar9 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        FUN_0071245c(plVar8);
      }
    }
                    /* try { // try from 00354980 to 00354987 has its CatchHandler @ 00354ac8 */
    plVar6 = (long *)FUN_00759c3c(0xf0);
    puVar3 = PTR_DAT_007a1590;
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = (long)(puVar3 + 0x10);
                    /* try { // try from 003549a4 to 003549af has its CatchHandler @ 00354ab0 */
    FUN_003586c0(plVar6 + 3,&local_98);
    plVar8 = (long *)CONCAT71(uStack_8f,cStack_90);
    *param_1 = (long)(plVar6 + 3);
    param_1[1] = (long)plVar6;
    if ((plVar8 == (long *)0x0) || (lVar9 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1), lVar9 != 0)
       ) goto LAB_003549e4;
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  FUN_0071245c(plVar8);
LAB_003549e4:
  plVar8 = local_a0;
  if ((local_a0 != (long *)0x0) &&
     (lVar9 = FUN_00755c50(0xffffffffffffffff,local_a0 + 1), lVar9 == 0)) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    FUN_0071245c(plVar8);
  }
  if ((lVar5 != 0) && (param_2 != 0)) {
    FUN_0071245c(param_2);
  }
  if ((local_78[0] & 1) != 0) {
    free(local_68);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00354c14  FUN_00354c14 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_00354c14(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *local_e8;
  long *local_e0;
  long *local_d8;
  long *local_d0;
  long *local_c8;
  long *local_c0;
  long *local_b8;
  long *local_b0;
  long local_a8;
  long *local_a0;
  byte local_98;
  undefined7 uStack_97;
  char cStack_90;
  undefined7 uStack_8f;
  undefined4 uStack_88;
  uint uStack_84;
  byte local_78 [16];
  void *local_68;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  FUN_0034cc1c(local_78,param_2);
                    /* try { // try from 00354c58 to 00354c63 has its CatchHandler @ 003553bc */
  FUN_0034cc1c(&local_98,param_2);
                    /* try { // try from 00354c64 to 00354c77 has its CatchHandler @ 003553ec */
  FUN_00715bcc(param_4);
  lVar5 = FUN_0034be54(param_4 + 0x28,&local_98);
  if (lVar5 == 0) {
    lVar9 = 0;
    FUN_00715bf8(param_4);
  }
  else {
    lVar9 = *(long *)(lVar5 + 0x30);
    param_2 = *(long *)(lVar5 + 0x38);
    if (param_2 != 0) {
      FUN_00755c20(1,param_2 + 0x10);
    }
    FUN_00715bf8(param_4);
  }
  if ((local_98 & 1) != 0) {
    free((void *)CONCAT44(uStack_84,uStack_88));
  }
  local_a8 = 0;
  local_a0 = (long *)0x0;
  if (lVar5 == 0) {
LAB_00354d78:
    local_b8 = (long *)0x0;
    local_b0 = (long *)0x0;
                    /* try { // try from 00354d7c to 00354d83 has its CatchHandler @ 00355394 */
    plVar10 = (long *)FUN_00759c3c(0xa8);
    puVar3 = PTR_DAT_007a15a0;
    plVar8 = plVar10 + 3;
    plVar10[1] = 0;
    plVar10[2] = 0;
    *plVar10 = (long)(puVar3 + 0x10);
                    /* try { // try from 00354da0 to 00354dab has its CatchHandler @ 00355368 */
    FUN_0035dee0(plVar8,param_3);
    plVar6 = local_b0;
    local_b8 = plVar8;
    if (local_b0 == (long *)0x0) {
LAB_00354df4:
      local_b0 = plVar10;
      local_c8 = local_b8;
      local_c0 = local_b0;
      FUN_00755c20(1,local_b0 + 2);
    }
    else {
      plVar8 = local_b0 + 1;
      local_b0 = plVar10;
      lVar9 = FUN_00755c50(0xffffffffffffffff,plVar8);
      if (lVar9 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        FUN_0071245c(plVar6);
      }
      local_c8 = local_b8;
      local_c0 = local_b0;
      plVar10 = local_b0;
      if (local_b0 != (long *)0x0) goto LAB_00354df4;
    }
    local_d8 = (long *)0x0;
    local_d0 = (long *)0x0;
    if (((*PTR_DAT_007a15a8 & 1) == 0) && (iVar4 = FUN_00739c1c(PTR_DAT_007a15a8), iVar4 != 0)) {
      __cxa_atexit(PTR_FUN_007a1110,PTR_DAT_007a15b0,&PTR_LOOP_0075ec90);
      FUN_00739d60(PTR_DAT_007a15a8);
    }
                    /* try { // try from 00354e14 to 00354e1f has its CatchHandler @ 00355338 */
    FUN_00715bcc(PTR_DAT_007a15b0);
    FUN_0034bc80(&local_98,param_4,local_78,&local_c8);
    plVar8 = (long *)CONCAT71(uStack_97,local_98);
    lVar9 = CONCAT71(uStack_8f,cStack_90);
    if (lVar9 != 0) {
      FUN_00755c20(1,lVar9 + 0x10);
    }
    bVar1 = local_c0 != (long *)0x0;
    local_c8 = plVar8;
    local_c0 = (long *)lVar9;
    if (bVar1) {
      FUN_0071245c();
    }
    if (CONCAT71(uStack_8f,cStack_90) != 0) {
      FUN_0071245c();
    }
    if (local_c0 == (long *)0x0) {
      local_d8 = (long *)0x0;
      plVar6 = (long *)0x0;
      plVar8 = local_d0;
    }
    else {
      plVar6 = (long *)FUN_007124b4();
      local_d8 = (long *)0x0;
      plVar8 = local_d0;
      if (plVar6 != (long *)0x0) {
        local_d8 = local_c8;
      }
    }
    local_d0 = plVar6;
    if ((plVar8 != (long *)0x0) && (lVar9 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1), lVar9 == 0)
       ) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      FUN_0071245c(plVar8);
    }
    if (local_d8 == (long *)0x0) {
      FUN_0034bd9c(param_4,local_78);
      local_e8 = local_b8;
      local_e0 = local_b0;
      if (local_b0 != (long *)0x0) {
        FUN_00755c20(1,local_b0 + 2);
      }
      FUN_0034bc80(&local_98,param_4,local_78,&local_e8);
      local_c8 = (long *)CONCAT71(uStack_97,local_98);
      lVar9 = CONCAT71(uStack_8f,cStack_90);
      if (lVar9 != 0) {
        FUN_00755c20(1,lVar9 + 0x10);
      }
      bVar1 = local_c0 != (long *)0x0;
      local_c0 = (long *)lVar9;
      if (bVar1) {
        FUN_0071245c();
      }
      if (CONCAT71(uStack_8f,cStack_90) != 0) {
        FUN_0071245c();
      }
      if (local_e0 != (long *)0x0) {
        FUN_0071245c();
      }
    }
    FUN_00715bf8(PTR_DAT_007a15b0);
    if ((local_c0 == (long *)0x0) || (*(long *)((long)local_c0 + 8) == -1)) {
      local_98 = 0x26;
      uStack_8f = (undefined7)s_weakPtr_is_expired__001f5451._8_8_;
      uStack_88 = CONCAT31(0x2e6465,SUB81(s_weakPtr_is_expired__001f5451._8_8_,7));
      uStack_97 = (undefined7)s_weakPtr_is_expired__001f5451._0_8_;
      cStack_90 = SUB81(s_weakPtr_is_expired__001f5451._0_8_,7);
      uStack_84 = uStack_84 & 0xffffff00;
                    /* try { // try from 00354f94 to 00354faf has its CatchHandler @ 003552bc */
      FUN_00372794(&local_98,
                   "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/inference-engine/src/exec_network_and_runtime_creator.hpp"
                   ,0x4d,"createExecNetworkAndRuntime");
      if ((local_98 & 1) != 0) {
        free((void *)CONCAT44(uStack_84,uStack_88));
      }
      if (local_c0 != (long *)0x0) goto LAB_00354fc8;
      plVar8 = (long *)0x0;
LAB_00355020:
      plVar6 = local_b0;
      local_b8 = (long *)0x0;
      local_b0 = (long *)0x0;
      plVar10 = local_b0;
    }
    else {
LAB_00354fc8:
      plVar8 = (long *)FUN_007124b4();
      if ((plVar8 == (long *)0x0) || (local_c8 == (long *)0x0)) goto LAB_00355020;
      plVar10 = (long *)FUN_0073a738(local_c8,PTR_PTR_007a1458,PTR_PTR_007a1598,0);
      plVar6 = local_b0;
      if (plVar10 == (long *)0x0) {
        local_b0 = (long *)0x0;
        local_b8 = plVar10;
        plVar10 = local_b0;
      }
      else {
        FUN_00755c20(1,plVar8 + 1);
        local_b8 = plVar10;
        plVar10 = plVar8;
        plVar6 = local_b0;
      }
    }
    local_b0 = plVar10;
    if ((plVar6 != (long *)0x0) &&
       (lVar9 = FUN_00755c50(local_b0,0xffffffffffffffff,plVar6 + 1), lVar9 == 0)) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_0071245c(plVar6);
    }
    if ((plVar8 != (long *)0x0) && (lVar9 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1), lVar9 == 0)
       ) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      FUN_0071245c(plVar8);
    }
                    /* try { // try from 00355088 to 0035508f has its CatchHandler @ 00355334 */
    plVar6 = (long *)FUN_00759c3c(0xf0);
    puVar3 = PTR_DAT_007a15b8;
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = (long)(puVar3 + 0x10);
                    /* try { // try from 003550ac to 003550b7 has its CatchHandler @ 0035530c */
    FUN_00358fec(plVar6 + 3,&local_b8);
    plVar8 = local_d0;
    *param_1 = (long)(plVar6 + 3);
    param_1[1] = (long)plVar6;
    if ((local_d0 != (long *)0x0) &&
       (lVar9 = FUN_00755c50(0xffffffffffffffff,local_d0 + 1), lVar9 == 0)) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      FUN_0071245c(plVar8);
    }
    if (local_c0 != (long *)0x0) {
      FUN_0071245c();
    }
    plVar8 = local_b0;
    if ((local_b0 == (long *)0x0) ||
       (lVar9 = FUN_00755c50(0xffffffffffffffff,local_b0 + 1), lVar9 != 0)) goto LAB_003551c0;
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  else {
    if (param_2 == 0) {
      local_a8 = 0;
      local_a0 = (long *)0x0;
      goto LAB_00354d78;
    }
    plVar6 = (long *)FUN_007124b4(param_2);
    plVar8 = local_a0;
    local_a8 = 0;
    if (plVar6 != (long *)0x0) {
      local_a8 = lVar9;
    }
    if ((local_a0 != (long *)0x0) &&
       (plVar10 = local_a0 + 1, local_a0 = plVar6, lVar7 = FUN_00755c50(0xffffffffffffffff,plVar10),
       plVar6 = local_a0, lVar7 == 0)) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      FUN_0071245c(plVar8);
      plVar6 = local_a0;
    }
    local_a0 = plVar6;
    if (local_a8 == 0) goto LAB_00354d78;
    plVar8 = (long *)FUN_007124b4(param_2);
    if (plVar8 == (long *)0x0) {
      local_98 = 0;
      uStack_97 = 0;
      cStack_90 = '\0';
      uStack_8f = 0;
    }
    else {
      if ((lVar9 == 0) ||
         (lVar9 = FUN_0073a738(lVar9,PTR_PTR_007a1458,PTR_PTR_007a1598,0), lVar9 == 0)) {
        local_98 = 0;
        uStack_97 = 0;
        cStack_90 = '\0';
        uStack_8f = 0;
        lVar9 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1);
      }
      else {
        local_98 = (byte)lVar9;
        uStack_97 = (undefined7)((ulong)lVar9 >> 8);
        cStack_90 = (char)plVar8;
        uStack_8f = (undefined7)((ulong)plVar8 >> 8);
        FUN_00755c20(1,plVar8 + 1);
        lVar9 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1);
      }
      if (lVar9 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        FUN_0071245c(plVar8);
      }
    }
                    /* try { // try from 0035515c to 00355163 has its CatchHandler @ 003552a4 */
    plVar6 = (long *)FUN_00759c3c(0xf0);
    puVar3 = PTR_DAT_007a15b8;
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = (long)(puVar3 + 0x10);
                    /* try { // try from 00355180 to 0035518b has its CatchHandler @ 0035528c */
    FUN_00358fec(plVar6 + 3,&local_98);
    plVar8 = (long *)CONCAT71(uStack_8f,cStack_90);
    *param_1 = (long)(plVar6 + 3);
    param_1[1] = (long)plVar6;
    if ((plVar8 == (long *)0x0) || (lVar9 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1), lVar9 != 0)
       ) goto LAB_003551c0;
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  FUN_0071245c(plVar8);
LAB_003551c0:
  plVar8 = local_a0;
  if ((local_a0 != (long *)0x0) &&
     (lVar9 = FUN_00755c50(0xffffffffffffffff,local_a0 + 1), lVar9 == 0)) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    FUN_0071245c(plVar8);
  }
  if ((lVar5 != 0) && (param_2 != 0)) {
    FUN_0071245c(param_2);
  }
  if ((local_78[0] & 1) != 0) {
    free(local_68);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 003553f0  FUN_003553f0 =====

/* WARNING: Type propagation algorithm not settling */

void FUN_003553f0(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *local_e8;
  long *local_e0;
  long *local_d8;
  long *local_d0;
  long *local_c8;
  long *local_c0;
  long *local_b8;
  long *local_b0;
  long local_a8;
  long *local_a0;
  byte local_98;
  undefined7 uStack_97;
  char cStack_90;
  undefined7 uStack_8f;
  undefined4 uStack_88;
  uint uStack_84;
  byte local_78 [16];
  void *local_68;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  FUN_0034cc1c(local_78,param_2);
                    /* try { // try from 00355434 to 0035543f has its CatchHandler @ 00355b98 */
  FUN_0034cc1c(&local_98,param_2);
                    /* try { // try from 00355440 to 00355453 has its CatchHandler @ 00355bc8 */
  FUN_00715bcc(param_4);
  lVar5 = FUN_0034be54(param_4 + 0x28,&local_98);
  if (lVar5 == 0) {
    lVar9 = 0;
    FUN_00715bf8(param_4);
  }
  else {
    lVar9 = *(long *)(lVar5 + 0x30);
    param_2 = *(long *)(lVar5 + 0x38);
    if (param_2 != 0) {
      FUN_00755c20(1,param_2 + 0x10);
    }
    FUN_00715bf8(param_4);
  }
  if ((local_98 & 1) != 0) {
    free((void *)CONCAT44(uStack_84,uStack_88));
  }
  local_a8 = 0;
  local_a0 = (long *)0x0;
  if (lVar5 == 0) {
LAB_00355554:
    local_b8 = (long *)0x0;
    local_b0 = (long *)0x0;
                    /* try { // try from 00355558 to 0035555f has its CatchHandler @ 00355b70 */
    plVar10 = (long *)FUN_00759c3c(0x288);
    puVar3 = PTR_DAT_007a15c0;
    plVar8 = plVar10 + 3;
    plVar10[1] = 0;
    plVar10[2] = 0;
    *plVar10 = (long)(puVar3 + 0x10);
                    /* try { // try from 0035557c to 00355587 has its CatchHandler @ 00355b44 */
    FUN_0035cae4(plVar8,param_3);
    plVar6 = local_b0;
    local_b8 = plVar8;
    if (local_b0 == (long *)0x0) {
LAB_003555d0:
      local_b0 = plVar10;
      local_c8 = local_b8;
      local_c0 = local_b0;
      FUN_00755c20(1,local_b0 + 2);
    }
    else {
      plVar8 = local_b0 + 1;
      local_b0 = plVar10;
      lVar9 = FUN_00755c50(0xffffffffffffffff,plVar8);
      if (lVar9 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        FUN_0071245c(plVar6);
      }
      local_c8 = local_b8;
      local_c0 = local_b0;
      plVar10 = local_b0;
      if (local_b0 != (long *)0x0) goto LAB_003555d0;
    }
    local_d8 = (long *)0x0;
    local_d0 = (long *)0x0;
    if (((*PTR_DAT_007a15c8 & 1) == 0) && (iVar4 = FUN_00739c1c(PTR_DAT_007a15c8), iVar4 != 0)) {
      __cxa_atexit(PTR_FUN_007a1110,PTR_DAT_007a15d0,&PTR_LOOP_0075ec90);
      FUN_00739d60(PTR_DAT_007a15c8);
    }
                    /* try { // try from 003555f0 to 003555fb has its CatchHandler @ 00355b14 */
    FUN_00715bcc(PTR_DAT_007a15d0);
    FUN_0034bc80(&local_98,param_4,local_78,&local_c8);
    plVar8 = (long *)CONCAT71(uStack_97,local_98);
    lVar9 = CONCAT71(uStack_8f,cStack_90);
    if (lVar9 != 0) {
      FUN_00755c20(1,lVar9 + 0x10);
    }
    bVar1 = local_c0 != (long *)0x0;
    local_c8 = plVar8;
    local_c0 = (long *)lVar9;
    if (bVar1) {
      FUN_0071245c();
    }
    if (CONCAT71(uStack_8f,cStack_90) != 0) {
      FUN_0071245c();
    }
    if (local_c0 == (long *)0x0) {
      local_d8 = (long *)0x0;
      plVar6 = (long *)0x0;
      plVar8 = local_d0;
    }
    else {
      plVar6 = (long *)FUN_007124b4();
      local_d8 = (long *)0x0;
      plVar8 = local_d0;
      if (plVar6 != (long *)0x0) {
        local_d8 = local_c8;
      }
    }
    local_d0 = plVar6;
    if ((plVar8 != (long *)0x0) && (lVar9 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1), lVar9 == 0)
       ) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      FUN_0071245c(plVar8);
    }
    if (local_d8 == (long *)0x0) {
      FUN_0034bd9c(param_4,local_78);
      local_e8 = local_b8;
      local_e0 = local_b0;
      if (local_b0 != (long *)0x0) {
        FUN_00755c20(1,local_b0 + 2);
      }
      FUN_0034bc80(&local_98,param_4,local_78,&local_e8);
      local_c8 = (long *)CONCAT71(uStack_97,local_98);
      lVar9 = CONCAT71(uStack_8f,cStack_90);
      if (lVar9 != 0) {
        FUN_00755c20(1,lVar9 + 0x10);
      }
      bVar1 = local_c0 != (long *)0x0;
      local_c0 = (long *)lVar9;
      if (bVar1) {
        FUN_0071245c();
      }
      if (CONCAT71(uStack_8f,cStack_90) != 0) {
        FUN_0071245c();
      }
      if (local_e0 != (long *)0x0) {
        FUN_0071245c();
      }
    }
    FUN_00715bf8(PTR_DAT_007a15d0);
    if ((local_c0 == (long *)0x0) || (*(long *)((long)local_c0 + 8) == -1)) {
      local_98 = 0x26;
      uStack_8f = (undefined7)s_weakPtr_is_expired__001f5451._8_8_;
      uStack_88 = CONCAT31(0x2e6465,SUB81(s_weakPtr_is_expired__001f5451._8_8_,7));
      uStack_97 = (undefined7)s_weakPtr_is_expired__001f5451._0_8_;
      cStack_90 = SUB81(s_weakPtr_is_expired__001f5451._0_8_,7);
      uStack_84 = uStack_84 & 0xffffff00;
                    /* try { // try from 00355770 to 0035578b has its CatchHandler @ 00355a98 */
      FUN_00372794(&local_98,
                   "/var/lib/jenkins/.conan2/p/b/krispaf649ec7efccf/b/src/inference-engine/src/exec_network_and_runtime_creator.hpp"
                   ,0x4d,"createExecNetworkAndRuntime");
      if ((local_98 & 1) != 0) {
        free((void *)CONCAT44(uStack_84,uStack_88));
      }
      if (local_c0 != (long *)0x0) goto LAB_003557a4;
      plVar8 = (long *)0x0;
LAB_003557fc:
      plVar6 = local_b0;
      local_b8 = (long *)0x0;
      local_b0 = (long *)0x0;
      plVar10 = local_b0;
    }
    else {
LAB_003557a4:
      plVar8 = (long *)FUN_007124b4();
      if ((plVar8 == (long *)0x0) || (local_c8 == (long *)0x0)) goto LAB_003557fc;
      plVar10 = (long *)FUN_0073a738(local_c8,PTR_PTR_007a1458,PTR_PTR_007a1610,0);
      plVar6 = local_b0;
      if (plVar10 == (long *)0x0) {
        local_b0 = (long *)0x0;
        local_b8 = plVar10;
        plVar10 = local_b0;
      }
      else {
        FUN_00755c20(1,plVar8 + 1);
        local_b8 = plVar10;
        plVar10 = plVar8;
        plVar6 = local_b0;
      }
    }
    local_b0 = plVar10;
    if ((plVar6 != (long *)0x0) &&
       (lVar9 = FUN_00755c50(local_b0,0xffffffffffffffff,plVar6 + 1), lVar9 == 0)) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_0071245c(plVar6);
    }
    if ((plVar8 != (long *)0x0) && (lVar9 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1), lVar9 == 0)
       ) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      FUN_0071245c(plVar8);
    }
                    /* try { // try from 00355864 to 0035586b has its CatchHandler @ 00355b10 */
    plVar6 = (long *)FUN_00759c3c(0xa8);
    puVar3 = PTR_DAT_007a15d8;
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = (long)(puVar3 + 0x10);
                    /* try { // try from 00355888 to 00355893 has its CatchHandler @ 00355ae8 */
    FUN_0035992c(plVar6 + 3,&local_b8);
    plVar8 = local_d0;
    *param_1 = (long)(plVar6 + 3);
    param_1[1] = (long)plVar6;
    if ((local_d0 != (long *)0x0) &&
       (lVar9 = FUN_00755c50(0xffffffffffffffff,local_d0 + 1), lVar9 == 0)) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      FUN_0071245c(plVar8);
    }
    if (local_c0 != (long *)0x0) {
      FUN_0071245c();
    }
    plVar8 = local_b0;
    if ((local_b0 == (long *)0x0) ||
       (lVar9 = FUN_00755c50(0xffffffffffffffff,local_b0 + 1), lVar9 != 0)) goto LAB_0035599c;
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  else {
    if (param_2 == 0) {
      local_a8 = 0;
      local_a0 = (long *)0x0;
      goto LAB_00355554;
    }
    plVar6 = (long *)FUN_007124b4(param_2);
    plVar8 = local_a0;
    local_a8 = 0;
    if (plVar6 != (long *)0x0) {
      local_a8 = lVar9;
    }
    if ((local_a0 != (long *)0x0) &&
       (plVar10 = local_a0 + 1, local_a0 = plVar6, lVar7 = FUN_00755c50(0xffffffffffffffff,plVar10),
       plVar6 = local_a0, lVar7 == 0)) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      FUN_0071245c(plVar8);
      plVar6 = local_a0;
    }
    local_a0 = plVar6;
    if (local_a8 == 0) goto LAB_00355554;
    plVar8 = (long *)FUN_007124b4(param_2);
    if (plVar8 == (long *)0x0) {
      local_98 = 0;
      uStack_97 = 0;
      cStack_90 = '\0';
      uStack_8f = 0;
    }
    else {
      if ((lVar9 == 0) ||
         (lVar9 = FUN_0073a738(lVar9,PTR_PTR_007a1458,PTR_PTR_007a1610,0), lVar9 == 0)) {
        local_98 = 0;
        uStack_97 = 0;
        cStack_90 = '\0';
        uStack_8f = 0;
        lVar9 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1);
      }
      else {
        local_98 = (byte)lVar9;
        uStack_97 = (undefined7)((ulong)lVar9 >> 8);
        cStack_90 = (char)plVar8;
        uStack_8f = (undefined7)((ulong)plVar8 >> 8);
        FUN_00755c20(1,plVar8 + 1);
        lVar9 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1);
      }
      if (lVar9 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        FUN_0071245c(plVar8);
      }
    }
                    /* try { // try from 00355938 to 0035593f has its CatchHandler @ 00355a80 */
    plVar6 = (long *)FUN_00759c3c(0xa8);
    puVar3 = PTR_DAT_007a15d8;
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = (long)(puVar3 + 0x10);
                    /* try { // try from 0035595c to 00355967 has its CatchHandler @ 00355a68 */
    FUN_0035992c(plVar6 + 3,&local_98);
    plVar8 = (long *)CONCAT71(uStack_8f,cStack_90);
    *param_1 = (long)(plVar6 + 3);
    param_1[1] = (long)plVar6;
    if ((plVar8 == (long *)0x0) || (lVar9 = FUN_00755c50(0xffffffffffffffff,plVar8 + 1), lVar9 != 0)
       ) goto LAB_0035599c;
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  FUN_0071245c(plVar8);
LAB_0035599c:
  plVar8 = local_a0;
  if ((local_a0 != (long *)0x0) &&
     (lVar9 = FUN_00755c50(0xffffffffffffffff,local_a0 + 1), lVar9 == 0)) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    FUN_0071245c(plVar8);
  }
  if ((lVar5 != 0) && (param_2 != 0)) {
    FUN_0071245c(param_2);
  }
  if ((local_78[0] & 1) != 0) {
    free(local_68);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// ===== 00355bcc  FUN_00355bcc =====

void FUN_00355bcc(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 00355c1c  FUN_00355c1c =====

void FUN_00355c1c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00760d38;
  FUN_00712454();
  return;
}


// ===== 00355c30  FUN_00355c30 =====

void FUN_00355c30(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007a1510 + 0x10);
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 00355c64  FUN_00355c64 =====

void FUN_00355c64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00355c6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00355c70  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00355c74  FUN_00355c74 =====

void FUN_00355c74(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00760d88;
  FUN_00712454();
  return;
}


// ===== 00355c88  FUN_00355c88 =====

void FUN_00355c88(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007a1528 + 0x10);
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 00355cbc  FUN_00355cbc =====

void FUN_00355cbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00355cc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00355cc8  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00355ccc  FUN_00355ccc =====

void FUN_00355ccc(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 00355d1c  FUN_00355d1c =====

void FUN_00355d1c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00760dd8;
  FUN_00712454();
  return;
}


// ===== 00355d30  FUN_00355d30 =====

void FUN_00355d30(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007a1530 + 0x10);
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 00355d64  FUN_00355d64 =====

void FUN_00355d64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00355d6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00355d70  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00355d74  FUN_00355d74 =====

void FUN_00355d74(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00760e28;
  FUN_00712454();
  return;
}


// ===== 00355d88  FUN_00355d88 =====

void FUN_00355d88(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007a1548 + 0x10);
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 00355dbc  FUN_00355dbc =====

void FUN_00355dbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00355dc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00355dc8  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00355dcc  FUN_00355dcc =====

void FUN_00355dcc(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 00355e1c  FUN_00355e1c =====

void FUN_00355e1c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00760e78;
  FUN_00712454();
  return;
}


// ===== 00355e30  FUN_00355e30 =====

void FUN_00355e30(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007a1550 + 0x10);
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 00355e64  FUN_00355e64 =====

void FUN_00355e64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00355e6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00355e70  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00355e74  FUN_00355e74 =====

void FUN_00355e74(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00760ec8;
  FUN_00712454();
  return;
}


// ===== 00355e88  FUN_00355e88 =====

void FUN_00355e88(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007a1568 + 0x10);
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 00355ebc  FUN_00355ebc =====

void FUN_00355ebc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00355ec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00355ec8  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00355ecc  FUN_00355ecc =====

void FUN_00355ecc(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 00355f1c  FUN_00355f1c =====

void FUN_00355f1c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00760f18;
  FUN_00712454();
  return;
}


// ===== 00355f30  FUN_00355f30 =====

void FUN_00355f30(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007a1578 + 0x10);
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 00355f64  FUN_00355f64 =====

void FUN_00355f64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00355f6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00355f70  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00355f74  FUN_00355f74 =====

void FUN_00355f74(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00760f80;
  FUN_00712454();
  return;
}


// ===== 00355f88  FUN_00355f88 =====

void FUN_00355f88(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007a1590 + 0x10);
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 00355fbc  FUN_00355fbc =====

void FUN_00355fbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00355fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00355fc8  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00355fcc  FUN_00355fcc =====

void FUN_00355fcc(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 0035601c  FUN_0035601c =====

void FUN_0035601c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00760fd0;
  FUN_00712454();
  return;
}


// ===== 00356030  FUN_00356030 =====

void FUN_00356030(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007a15a0 + 0x10);
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 00356064  FUN_00356064 =====

void FUN_00356064(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0035606c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00356070  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00356074  FUN_00356074 =====

void FUN_00356074(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00761038;
  FUN_00712454();
  return;
}


// ===== 00356088  FUN_00356088 =====

void FUN_00356088(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007a15b8 + 0x10);
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 003560bc  FUN_003560bc =====

void FUN_003560bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x003560c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 003560c8  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 003560cc  FUN_003560cc =====

void FUN_003560cc(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = FUN_00755c50(0xffffffffffffffff,plVar2 + 1), lVar1 == 0))
  {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN_0071245c(plVar2);
    return;
  }
  return;
}


// ===== 0035611c  FUN_0035611c =====

void FUN_0035611c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00761088;
  FUN_00712454();
  return;
}


// ===== 00356130  FUN_00356130 =====

void FUN_00356130(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007a15c0 + 0x10);
  FUN_00712454();
  free(param_1);
  return;
}


// ===== 00356164  FUN_00356164 =====

void FUN_00356164(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0035616c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


// ===== 00356170  <EXTERNAL>::free =====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  free(__ptr);
  return;
}


// ===== 00356174  FUN_00356174 =====

void FUN_00356174(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_007610d8;
  FUN_00712454();
  return;
}


// ===== 00356188  FUN_00356188 =====

void FUN_00356188(long *param_1)

{
  *param_1 = (long)(PTR_DAT_007a15d8 + 0x10);
  FUN_00712454();
  free(param_1);
  return;
}


